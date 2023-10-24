provider "aws" {
 region = "us-east-1"

}

resource "aws_s3_bucket" "demo-s3" {
 bucket = "bucket-created-using-my-terraform510"

}
resource "aws_instance" "my-instance" {
 ami = var.ec2-ubuntu-ami
 instance_type = "t2.micro"
 availability_zone = "us-east-1a"
 tags = {
  Name = "created-using-terraform"

}

}

resource "aws_db_instance" "example_db" {
  allocated_storage    = 20
  storage_type         = "gp2"
  engine               = "mysql"
  engine_version       = "5.7"
  instance_class       = "db.t2.micro"
  identifier           = var.db_name
  username             = var.db_username
  password             = var.db_password
  availability_zone    = "us-east-1b"
}
