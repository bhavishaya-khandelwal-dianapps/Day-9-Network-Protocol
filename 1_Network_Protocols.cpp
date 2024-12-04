//todo -- Network Protocols : are the set of rules, conventions, and data structures that dictate how devices exchange data across networks. 
//? It allow seamless communication of information, regardless of their infrastructure between two devices
//* Network protocols are a set of rules that are responsible for the communication of data between various devices in the network.
//? These protocols ensures efficient and reliable data communication. 
//* It determines what is being communicated,
//? how it is being communicated, 
//* when it is being communicated. 



//* To understand how network protocols work we first need to understand about OSI(Open System Interconnection) Model, basically this model splits the communication process between two network devices into 7 layers. 
//? Each layer has it's specific tasks

//? Lower Layer -> Deals with data transport issues.  
//* 1. Physical Layer 
//* 2. Data Link Layer 
//* 3. Network Layer 
//* 4. Transport Layer 

//? Upper Layer -> Deals with application layer 
//* 5. Session Layer       
//* 6. Presentation Layer 
//* 7. Application Layer 


//! 3 Main tasks that network protocol performs -> or we can say that protocols can be broadly classified into 3 major categories :- 
//? 1. Secure Connections 
//? 2. Network Communication
//? 3. Network Management

//* 1. Network Communication :- Communication protocols are really important for the functioning of a network. They are so crucial that it is not possible to have computer networks without them. These protocols formally set out the rules and formats through which data is transferred. 
//? These protocols handles -> syntax, semantics, error detection, synchronization, and authentication. 
    //* Some NETWORK COMMUNICATION protocols -> 

    //! 1. Hypertext Transfer Protocol(HTTP) : It is a layer 7 protocol that is designed for transferring a hypertext between 2 or more systems. 
    //? HTTP works on a CLIENT-SERVER MODEL
    //* most of the data sharing over the web is done through using HTTP. 


    //! 2. Transmission Control Protocol(TCP) :  It is a connection-oriented protocol i.e., it establishes a connection between applications before sending any data. It is used for communicating over a network. It has many applications such as emails, FTP, streaming media, etc.


    //! User Datagram Protocol(UDP) : It is a connectionless protocol that lay-out a basic but unreliable message service. It adds no flow control, reliability, or error-recovery functions. UPD is functional in cases where reliability is not required. It is used when we want faster transmission, for multicasting and broadcasting connections, etc.

    //? 3. Border Gateway Protocol(BGP) : is routing protocol that controls how packet pass through the router in an independent system one or more networks run by a single organization and connect to different networks. 


    //* 4. Address Resolution Protocol(ARP) : ARP is a protocol that helps in mapping logical addresses to the physical addressess acknowledged in a local network.
    //? ARP table is used for mapping 



    //? 5. Internet Protocol(IP) : It is a protocol through which data is sent from one host to another over the internet. It is used for addressing and routing data packets so that they can reach their destination. 


    //* 6. Dynamic Host Configuration Protocol(DHCP) : It's a protocol for network management and it's used for the method of automating the process of configuring devices on IP networks.
    //? Basically DHCP server automatically assigns an IP address and various other configurational changes to devices on a network so they can communicate with other IP networks. 



//! 2. Network Management : These protocols assist in describing the procedures and policies that are used in monitoring, maintaining, and managing the computer networks. 
    //todo-- Some important NETWORK MANAGEMENT protocols:- 
    //? 1. Internet Control Message Protocol(ICMP) :- It is a layer 3 protocol that is used by network devices to forward operational information and error messages.
    //* Also used for reporting congestions, network errors, diagnostic purposes, and timeouts. 


    //* 2. Simple Network Management Protocol(SNMP) :- It is a layer 7 protocol that is used for managing nodes on an IP network. 
    //? There are 3 main components in the SNMP protocol :- 
        1. SNMP Agent - has local knowledge of management details, it translates those details into a form that is compatible with the SNMP manager. 

        2. SNMP Manager - it presents data acquired from SNMP agents, thus helping in monitoring network glitches and network performance, and troubleshoot them. 

        3. Managed device - 


    //? 3. Gopher :- It is a type of file retrieval protocol that provides downloadable files with some description for easy management, retrieving, and searching of files. 
    //* Gopher is an old protocol and it is not much used nowadays


    //* 4. File Transfer Protocol(FTP) :- FTP is a client/server protocol that is used for moving files to or from a host computer, it allows users to download files, programs, web pages, and other things that are available on other services. 


    //? 5. Post Office Protocol(POP3) :- It is a protocol that a local mail client uses to get email messages from a remote email server over TCP/IP connection. 


    //* 6. Telnet :- It is a protocol that allow the user to connect to a remote computer program and to use it i.e., it is designed for remote connectivity.
    //? Telnet creates a connection between a host machine and a remote endpoint to enable a remote session. 




//* 3. Network Security :- These protocols secure the data in passage over a network. These protocols also determine how the network secures data from unauthorized attempts to extract or review data. These protocols make sure that no unauthorized devices, users, or services can access the network data. 
    //todo -- Some NETWORK SECURITY Protocols :- 
    //? 1. Secure Socket Layer(SSL) :- It is a network security mainly used for protecting sensitive data and securing internet connections. 
    //* SSL allows both server-to-server and client-to-server communication. All the data transferred through SSL is encrypted thus stopping any unauthorized person from accessing it.


    //? 2. Hypertext Transfer Protocol(HTTPS) :- It is the  secured version of HTTP. This protocol ensures secure communication between two computers where one sends the request through the browser and the other fetches the data from the web server. 


    //* 3. Transport Layer Security(TLS) :- It is a security protocol designed for data security and privacy over the internet, its functionality is encryption, checking the integrity of data i.e., whether it has been tampered with or not, and authentication.
    //? It is generally used for encrypted communication between servers and web apps, like a web browser loading a website, it can also be used for encryption of messages, emails, and VoIP.




//todo --  Some Other Protocols :- 
//? 1. Session Initiation Protocol(SIP) :- 