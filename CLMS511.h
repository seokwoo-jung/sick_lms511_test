#ifndef CLMS511_H
#define CLMS511_H
#include <QThread>
#include <QMutex>
#include <iostream>
#include <QMetaType>
#include <QStandardItemModel>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <vector>

#include "CPCL.h"
#include "LMS511_parser.h"

class CLMS511 : public QThread
{
    Q_OBJECT
protected:
    void run();

public:
    CLMS511();
    ~CLMS511();

    CPCL* GetPCL();

    QMutex mtx_lms;

    bool ConnectLMS511();
    void DataRecv();

private:

    int client_socket;
    struct sockaddr_in server_addr;
    bool running_command = true;
    bool parse_complete = false;

    CPCL* mpc_pcl;

signals:
    void SignalLMS511UpdatePCL(bool);

};




#endif // CLMS511_H
