// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeDispatcher
// Functions: 4

// FNetworkServerNode @ 14e660cc0

/* WARNING: Enum "Type": Some values do not have unique names */

FNetworkServerNode * __thiscall
UE::Interchange::FNetworkServerNode::FNetworkServerNode(FNetworkServerNode *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  FSocket *pFVar6;
  ISocketSubsystem *this_00;
  FNetworkServerNode *pFVar7;
  FStaticBasicLogRecord *pFVar8;
  FName local_res8;
  FInternetAddr *local_28;
  TReferenceControllerBase<1> *local_20;
  FString local_18;
  
  this->_padding_ = (longlong)&___7FNetworkNode_Interchange_UE__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->_padding_,4000);
  this->_padding_ = (longlong)&___7FNetworkServerNode_Interchange_UE__6B_;
  ::FString::FString(&local_18,L"Interchange listening socket");
  pFVar6 = FNetworkNode::CreateInternalSocket((FNetworkNode *)this,&local_18);
  this->ListeningSocket = pFVar6;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (this->ListeningSocket == (FSocket *)0x0) {
    *(undefined4 *)&this->_padding_ = 1;
    return this;
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  this_00 = ISocketSubsystem::Get(&local_res8);
  (**(code **)(this_00->_padding_ + 0x90))(this_00,&local_28);
  (**(code **)((longlong)*local_28 + 0x78))();
  iVar4 = ISocketSubsystem::BindNextPort(this_00,this->ListeningSocket,local_28,1000,1);
  if (iVar4 == 0) {
    *(undefined4 *)&this->_padding_ = 2;
    if ((byte)LogInterchangeDispatcher._0_1_ < 4) goto LAB_14e660e39;
    pFVar8 = &::LOG_Static;
  }
  else {
    iVar5 = (**(code **)(this->ListeningSocket->_padding_ + 0x120))();
    if (iVar4 != iVar5) {
      bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7243443124725350652>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Dispatcher\\Private\\InterchangeDispatcherNetworking.cpp"
                         ,0xfc,"BoundPort == ListeningSocket->GetPortNo()");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar7 = (FNetworkServerNode *)(*pcVar1)();
        return pFVar7;
      }
    }
    cVar3 = (**(code **)(this->ListeningSocket->_padding_ + 0x30))(this->ListeningSocket,0);
    if ((cVar3 != '\0') ||
       (*(undefined4 *)&this->_padding_ = 3, (byte)LogInterchangeDispatcher._0_1_ < 4))
    goto LAB_14e660e39;
    pFVar8 = &::LOG_Static;
  }
  Logging::Private::BasicLog<4>(pFVar8,(FLogCategoryBase *)&LogInterchangeDispatcher);
LAB_14e660e39:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  return this;
}

// ~FNetworkServerNode @ 14e661270

void __thiscall UE::Interchange::FNetworkServerNode::~FNetworkServerNode(FNetworkServerNode *this)

{
  ISocketSubsystem *pIVar1;
  FName local_res8 [4];
  
  this->_padding_ = (longlong)&___7FNetworkServerNode_Interchange_UE__6B_;
  if (this->ListeningSocket != (FSocket *)0x0) {
    (**(code **)(this->ListeningSocket->_padding_ + 0x10))();
    local_res8[0].ComparisonIndex.Value = 0;
    local_res8[0].Number = 0;
    pIVar1 = ISocketSubsystem::Get(local_res8);
    (**(code **)(pIVar1->_padding_ + 0x38))(pIVar1,this->ListeningSocket);
    this->ListeningSocket = (FSocket *)0x0;
  }
  FNetworkNode::~FNetworkNode((FNetworkNode *)this);
  return;
}

// Accept @ 14e662170

bool __thiscall
UE::Interchange::FNetworkServerNode::Accept
          (FNetworkServerNode *this,FString *param_1,double param_2)

{
  double dVar1;
  double dVar2;
  float fVar3;
  ISocketSubsystem *pIVar4;
  longlong lVar5;
  LARGE_INTEGER local_res8;
  
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)this->_padding_ + 0x10))();
    local_res8.QuadPart = 0;
    pIVar4 = ISocketSubsystem::Get((FName *)&local_res8.s);
    (**(code **)(pIVar4->_padding_ + 0x38))(pIVar4,this->_padding_);
    this->_padding_ = 0;
  }
  (**(code **)(this->ListeningSocket->_padding_ + 0xa0))(this->ListeningSocket,1);
  QueryPerformanceCounter(&local_res8);
  fVar3 = __real_3dcccccd;
  dVar2 = __real_4170000000000000;
  dVar1 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  do {
    lVar5 = (**(code **)(this->ListeningSocket->_padding_ + 0x50))(this->ListeningSocket,param_1);
    this->_padding_ = lVar5;
    if (lVar5 != 0) {
      return true;
    }
    FWindowsPlatformProcess::Sleep(fVar3);
    QueryPerformanceCounter(&local_res8);
  } while ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar2 <
           dVar1 + param_2);
  return false;
}

// GetListeningPort @ 14e665470

int __thiscall UE::Interchange::FNetworkServerNode::GetListeningPort(FNetworkServerNode *this)

{
  int iVar1;
  
  if (this->ListeningSocket != (FSocket *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014e66547c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(this->ListeningSocket->_padding_ + 0x120))();
    return iVar1;
  }
  return 0;
}

