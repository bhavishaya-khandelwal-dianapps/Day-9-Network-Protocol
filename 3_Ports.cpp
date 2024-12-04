//todo -- Port :- A port is a virtual point where network connections start and end. Ports are software - based and managed by a computer OS. 
//? Each port is associated with a specific process or service. 
//* Ports allow computers to easily differentiate between different kinds of traffic. 


//todo -- What is a port number..?? 
//? Ports are standardized across all network-connected devices, with each port assigned a number. Most ports are reserved for certain protocols -- 
//* For example - HTTP messages go to port 80.



//todo -- How do ports make network connections more efficient....?? 
//? As we know, various types of data flow from a computer over the same network connection. The use of ports helps computers understand what to do with the data they receive.





// The OSI model is a conceptual model of how internet works. 
// It divides different Internet Services and processes into 7 layers. 

// 7. Application Layer -> Human computer interaction layer, where application can access the network services. 

// 6. Presentation Layer -> Ensures that data is in a usable format and is where data encryption occurs.

// 5. Session Layer -> Responsible for controlling ports and sessions 

// 4. Transport Layer -> Transmits data using transmission protocols including TCP and UDP

// 3. Network Layer -> Decides which physical path the data will take 

// 2. Data Link Layer -> Defines the format of data on the network 

// 1. Physical Layer -> Transmits raw bit stream over the physical medium 




//* Ports are a transport layer (layer 4) concept. Only a transport protocol such as the TCP or UDP can indicate which port a packet should go. 
//? Hamesha port define krrne kaa jo kaam hai woh Transport layer ke paas hai network layer ko ye anumati nahi hai ki woh define karein port but iski wajah se koii dikkat bhi nahi hai ki bhai network layer was unable to define or give port information, because network layer hamesha kahin naa kahin transport layer ke saath hi kaam krrti hai toh usse easily port number define ho jaata hai.
//* Usually, the inability to indicate the port at the network layer has no impact on networking processes, since network layer protocols are almost always used in conjunction with a transport layer protocol. 




//todo -- Why do firewalls sometimes block specific ports....?? 
//? A FIREWALL is a network security system that blocks or allows network traffic based on a set of security rules. Firewalls usually sit between a trusted network and an untrusted network; often the untrusted network is the INTERNET. 
//* For example :- Office networks often use a firewall to protect their network from online threats. 

//? - Some attackers try to send malicious traffic to random ports in the hopes that those ports have been left "open," meaning they are able to receive traffic. This action is somewhat like a car thief walking down the street and trying the doors of parked vehicles, hoping one of them is unlocked.
//* For this reason, firewalls should be configured to block network traffic directed at most of the available ports. There is no legitimate reason for the vast majority of the available ports to receive traffic.
//? For instance, a corporate firewall could only leave open ports 25 (email), 80 (web traffic), 443 (web traffic), and a few others, allowing internal employees to use these essential services, then block the rest of the 65,000+ ports.





//todo --  What are the different port numbers.....??
//? There are 65535 possible port numbers, 

//* 1. Ports 20 and 21 : File Transfer Protocol