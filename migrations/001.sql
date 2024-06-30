CREATE TABLE users (
                       id SERIAL PRIMARY KEY,
                       email VARCHAR(255) UNIQUE NOT NULL,
                       password_hash TEXT NOT NULL,
                       totp_secret TEXT
);

CREATE TABLE password_resets (
                                 user_id INT REFERENCES users(id),
                                 token TEXT UNIQUE NOT NULL,
                                 created_at TIMESTAMP DEFAULT NOW()
);

CREATE TABLE sessions (
                          token TEXT UNIQUE NOT NULL,
                          user_id INT REFERENCES users(id),
                          created_at TIMESTAMP DEFAULT NOW()
);
