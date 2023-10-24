This repository contains two task:<br>
Task 1 <br>
write a c++ program to find out the angle between minute hand and hour hand of a clock in 12 hour format and 24 hours format.
Please refer to main.cpp file for respective code.

Task 2: <br>
write a terraform script to create an easy to instance and a r d s over a w s management console in same reason but in different availability zones.
Additionally I have modified the script to create an S3 bucket as well.

2.1 First we do terrafrom init

2.2 Then we do terrrafrom plan
![image](https://github.com/MohitBishesh/cyware-task/assets/74617917/7af6d537-34d3-489c-af02-83e5378f3275)

<br>
<br>
2.3 Then we do terrrafrom apply
![image](https://github.com/MohitBishesh/cyware-task/assets/74617917/bf887257-7379-4a0a-9b95-26331708be24)


we can see in the image above, our script has been successfully executed and the desired resources have been created.

2.4 we can see below that our RDS has been successfully created in us-east-1b with the name "cyware"
![image](https://github.com/MohitBishesh/cyware-task/assets/74617917/d8cea056-1392-4016-bd76-5283b5f897bf)

more details of RDS
![image](https://github.com/MohitBishesh/cyware-task/assets/74617917/2501e5e4-8de1-43b9-a008-3a4fa475fc62)


2.5 Now, we can see that our ec2 instance has also been successfully created with the name "created-using-terraform" and is in a running state.
![image](https://github.com/MohitBishesh/cyware-task/assets/74617917/d34ed542-9c49-4c8e-8987-0f43cec79db0)

2.6 Here we can see that our S3 instance has also been successfully created with the name "bucket-created-using-my-terraform510"
![image](https://github.com/MohitBishesh/cyware-task/assets/74617917/e74616d1-ff97-49da-a218-e4d0c4945efa)


we have successfully achieved our goal and completed both tasks successfully.
