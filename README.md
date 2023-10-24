This repository contains two task:<br>
Task 1 <br>
write a c++ program to find out the angle between minute hand and hour hand of a clock in 12 hour format and 24 hours format.
Please refer to main.cpp file for respective code.

Task 2: <br>
write a terraform script to create an easy to instance and a r d s over a w s management console in same reason but in different availability zones.
Additionally I have modified the script to create an S3 bucket as well.

2.1 First we do terrafrom init

2.2 Then we do terrrafrom plan
![Alt text](image.png)
<br>
<br>
2.3 Then we do terrrafrom apply
![Alt text](image-1.png)
we can see in image above, our script has been successfully executed and desired resources have been created.

2.4 we can see below that our RDS has been successfully created in us-east-1b with name "cyware"
![Alt text](image-2.png)
more details of RDS
![Alt text](image-3.png)

2.5 Now, we can see that our ec2 instance has also been successfully created with name "created-using-terraform" and is in running state.
![Alt text](image-4.png)

2.5 Here we can see that our S3 instance has also been successfully created with name "bucket-created-using-my-terraform510"
![Alt text](image-5.png)


we have successfully achieved our goal and completed both the tasks successfully.
