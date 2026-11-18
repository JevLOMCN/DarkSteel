// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Sockets
// Functions: 12

// FSocket @ 14310b1a0

FSocket * __thiscall
FSocket::FSocket(FSocket *this,ESocketType param_1,FString *param_2,FName *param_3)

{
  this->SocketType = param_1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FSocket__6B_;
  ::FString::FString(&this->SocketDescription,param_2);
  this->SocketProtocol = *param_3;
  return this;
}

// FSocket @ 14310b1f0

FSocket * __thiscall FSocket::FSocket(FSocket *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FSocket__6B_;
  this->SocketType = SOCKTYPE_Unknown;
  ::FString::FString(&this->SocketDescription,L"");
  (this->SocketProtocol).ComparisonIndex = 0;
  (this->SocketProtocol).Number = 0;
  return this;
}

// ~FSocket @ 14310b920

void __thiscall FSocket::~FSocket(FSocket *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  this->_padding_ = (longlong)&___7FSocket__6B_;
  pFVar3 = (this->SocketDescription).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014310b966. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// Recv @ 1431148e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSocket::Recv(FSocket *this,uchar *param_1,int param_2,int *param_3,Type param_4)

{
  if ((0 < *param_3) && (5 < (byte)LogSockets._0_1_)) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSockets);
  }
  return true;
}

// RecvFrom @ 143114a10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSocket::RecvFrom(FSocket *this,uchar *param_1,int param_2,int *param_3,FInternetAddr *param_4,
                 Type param_5)

{
  if ((0 < *param_3) && (5 < (byte)LogSockets._0_1_)) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSockets);
  }
  return true;
}

// RecvFromWithPktInfo @ 143114b60

bool __thiscall
FSocket::RecvFromWithPktInfo
          (FSocket *this,uchar *param_1,int param_2,int *param_3,FInternetAddr *param_4,
          FInternetAddr *param_5,Type param_6)

{
  return false;
}

// RecvMulti @ 143114ec0

bool __thiscall FSocket::RecvMulti(FSocket *this,FRecvMulti *param_1,Type param_2)

{
  return false;
}

// ReleaseNativeSocket @ 1431157b0

ulong64 __thiscall FSocket::ReleaseNativeSocket(FSocket *this)

{
  return 0;
}

// Send @ 143115e40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSocket::Send(FSocket *this,uchar *param_1,int param_2,int *param_3)

{
  if (5 < (byte)LogSockets._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSockets);
  }
  return true;
}

// SendTo @ 143115f60

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSocket::SendTo(FSocket *this,uchar *param_1,int param_2,int *param_3,FInternetAddr *param_4)

{
  if (5 < (byte)LogSockets._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSockets);
  }
  return true;
}

// SetIpPktInfo @ 143116f00

bool __thiscall FSocket::SetIpPktInfo(FSocket *this,bool param_1)

{
  return false;
}

// SetRetrieveTimestamp @ 143117ad0

bool __thiscall FSocket::SetRetrieveTimestamp(FSocket *this,bool param_1)

{
  return false;
}

