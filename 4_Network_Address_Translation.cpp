//todo -- Network Address Translation(NAT) : The idea of NAT is to allow multiple devices to access the Internet through a single public address. To achieve this, a private IP address must be translated into a public IP address. 

//todo -- What is Network Address Translation (NAT) 
//? Network Address Translation (NAT) is a process in which onw or more local Ip Addresses sare translated into one or more Global IP addresses and vice versa to provide Internet access to the local hosts. 


//* Basically as it's name suggests that it's main aim is to translate IP address 
//* Basically private IP ko public IP mein and public IP ko private IP mein translate krr dete hai

//? To efficiently use IP addresses we use NAT 


//todo --  Types of NAT : -
//? 1. Static NAT :- In this, a single unregistered (Private) IP address is mapped with a legally registered (Public) IP address i.e. one-to-one mapping between local and global addresses. This is generally used for web hosting. These are not used in organizations as there are many devices that will need Internet Access and to provide Internet access, a public IP address is needed. 
//* Suppose, if there are 3000 devices that need access to the Internet, the organization has to buy 3000 public addresses that will be very costly. 


//? 2. Dynamic NAT :- The mapping of private IP addresses with public IP address will be done dynamically. 
//* During mapping, A public IP address is selected from the pool of public IP addresses. 

  

//? 3. PAT(Post Address Translation) :- Only one IP address is used. 
//? In this the src port is also transmitted 
//* This is also known as NAT overload. In this, many local (private) IP addresses can be translated to a single registered IP address. Port numbers are used to distinguish the traffic i.e., which traffic belongs to which IP address. This is most frequently used as it is cost-effective as thousands of users can be connected to the Internet by using only one real global (public) IP address. 