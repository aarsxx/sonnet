# <img src="_assets/icon.png" width="20"> ONE 

> authentication and authorization system developed to provide a secure, single sign-on experience </h4>

The idea behind **one** is a "double OAuth2" flow, where `one-auth` is the OAuth2 provider \
for `one-proxy` and Google is the OAuth2 provider for `one-auth`.

[one](https://github.com/andikaleonardo/solar) is built on top of Bitly’s open source [oauth2_proxy](https://github.com/bitly/oauth2_proxy)

## Structure
```console
kage/
├── Cargo.toml
├── src/
│   ├── main.rs
│   ├── server.rs
│   ├── handler.rs
│   ├── user.rs
│   ├── db.rs
│   ├── token.rs
│   ├── error.rs
├── .env
```

## Architect
```console
            +---------------------+
            |        Client       |
            +----------+----------+
                       |
                       | HTTP Requests
                       v
            +----------+----------+
            |    HTTP Server      |
            +----------+----------+
                       |
                       | Request Handling
                       v
            +----------+----------+
            |   Request Handler   |
            +----------+----------+
                       |
                       | Business Logic
                       v
   +-----------+--------------+-----------+
   |    Authentication          Database  |
   |    Middleware              (Redis)   |
   +--------------------------------------+

```

## Running the Project

### Prerequisites

Ensure Redis is running locally or on a server. You can use Docker to run Redis locally:
```sh
docker run --name redis -p 6379:6379 -d redis
```

Set up the .env file with the necessary environment variables:
```env
REDIS_URL=redis://127.0.0.1/
SECRET_KEY=your_secret_key
```

### Build and Run

Clone the repository:
```sh
git clone https://github.com/andikaleonardo/kage.git
cd kage
```

Build the project:
```sh
cargo build
```

Run the project:
```sh
cargo run
```

## Contributing

🎈 Thanks for your help improving the project! We are so happy to have
you! We have a [contributing guide][contributing] to help you get involved in the
`one` project.

## License

This project is licensed under the [MIT license][license].

### Contribution

Unless you explicitly state otherwise, any contribution intentionally submitted
for inclusion in `kage` by you, shall be licensed as MIT, without any
additional terms or conditions.


[contributing]: https://github.com/andikaleonardo/kage/blob/main/CONTRIBUTING.md
[license]: https://github.com/andikaleonardo/kage/blob/main//LICENSE
