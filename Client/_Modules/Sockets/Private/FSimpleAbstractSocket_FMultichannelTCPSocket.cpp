// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Sockets
// Functions: 2

// Receive @ 143114530

bool __thiscall
FSimpleAbstractSocket_FMultichannelTCPSocket::Receive
          (FSimpleAbstractSocket_FMultichannelTCPSocket *this,uchar *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  
  iVar4 = FMultichannelTcpSocket::BlockingReceive(this->Socket,param_1,param_2,this->ReceiveChannel)
  ;
  if (param_2 < iVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRead <= Size",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Sockets\\Private\\NetworkMessage.cpp"
                       ,0x37,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return 0 < iVar4;
}

// Send @ 143115d30

bool __thiscall
FSimpleAbstractSocket_FMultichannelTCPSocket::Send
          (FSimpleAbstractSocket_FMultichannelTCPSocket *this,uchar *param_1,int param_2)

{
  uint uVar1;
  FMultichannelTcpSocket *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  uVar1 = this->SendChannel;
  pFVar2 = this->Socket;
  if (((uVar1 == 0) || (param_1 == (uchar *)0x0)) || (param_2 == 0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Channel != ControlChannel) && Data && Count",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Sockets\\Public\\MultichannelTcpSocket.h"
                       ,0xbc,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      bVar4 = (bool)(*pcVar3)();
      return bVar4;
    }
  }
  FMultichannelTcpSender::Send(&pFVar2->Sender,param_1,param_2,uVar1);
  return true;
}

