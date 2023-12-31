This repository contains two task:<br>
Task 1 <br>
write a c++ program to find out the angle between minute hand and hour hand of a clock in 12 hour format and 24 hours format.
Please refer to main.cpp file for respective code.
1.1 Program execution flow is as below,
![image](https://github.com/MohitBishesh/cyware-task/assets/74617917/195ac8af-23d4-4dcd-a1e7-29d374dc84a1)


Task 2: <br>
write a terraform script to create an EC2 instance and a RDS over AWS management console in same region but in different availability zones.
Additionally I have modified the script to create an S3 bucket as well.

2.1 First we do "terrafrom init"

2.2 Then we do "terrrafrom plan"
![image](https://github.com/MohitBishesh/cyware-task/assets/74617917/7af6d537-34d3-489c-af02-83e5378f3275)

<br>
<br>
2.3 Then we do "terrrafrom apply"

![image](https://github.com/MohitBishesh/Mohit-Bishesh-task/assets/74617917/0d08f608-e284-4081-b501-86eada3d4f0e)

we can see in the image above, our script has been successfully executed and the desired resources have been created.

2.4 we can see below that our RDS has been successfully created in us-east-1b with the name "cyware"
![image](https://github.com/MohitBishesh/cyware-task/assets/74617917/2501e5e4-8de1-43b9-a008-3a4fa475fc62)

more details of RDS
![image](https://github.com/MohitBishesh/cyware-task/assets/74617917/d34ed542-9c49-4c8e-8987-0f43cec79db0)


2.5 Now, we can see that our ec2 instance has also been successfully created with the name "created-using-terraform" and is in a running state.
![image](https://github.com/MohitBishesh/Mohit-Bishesh-task/assets/74617917/12f9e927-4fcc-4cde-8394-29f104938b47)


2.6 Here we can see that our S3 instance has also been successfully created with the name "bucket-created-using-my-terraform510"
![image](https://github.com/MohitBishesh/Mohit-Bishesh-task/assets/74617917/fa45fdd5-1ecd-42da-88f4-22120f25d172)



we have successfully achieved our goal and completed both tasks successfully.
