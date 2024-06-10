use sea_orm::entity::prelude::*;

#[derive(Clone, Debug, Eq, PartialEq, DeriveEntityModel)]
#[sea_orm(table_name = "User")]
pub struct Model {
    #[sea_orm(primary_key)]
    id: i32,
    #[sea_orm(column_name = "name", enum_name = "Name")]
    pub name : String,
    #[sea_orm(column = "password")]
    pub password : String
}

#[derive(Debug, EnumIter, DeriveRelation)]
pub enum Relation{}

impl ActiveModelBehavior for ActiveModel {}