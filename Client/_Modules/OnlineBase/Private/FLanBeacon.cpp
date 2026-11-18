// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineBase
// Functions: 6

// FLanBeacon @ 14eb1f490

FLanBeacon * __thiscall FLanBeacon::FLanBeacon(FLanBeacon *this)

{
  FName *pFVar1;
  ISocketSubsystem *pIVar2;
  FName local_res8 [4];
  
  (this->BroadcastAddr).Object = (FInternetAddr *)0x0;
  (this->BroadcastAddr).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->ListenSocket = (FSocket *)0x0;
  (this->ListenAddr).Object = (FInternetAddr *)0x0;
  (this->ListenAddr).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar1 = ::FName::FName(local_res8,L"WINDOWS");
  pIVar2 = ISocketSubsystem::Get(pFVar1);
  (**(code **)(pIVar2->_padding_ + 0x90))(pIVar2,&this->SockAddr);
  return this;
}

// ~FLanBeacon @ 14eb1f4f0

void __thiscall FLanBeacon::~FLanBeacon(FLanBeacon *this)

{
  FName *pFVar1;
  ISocketSubsystem *pIVar2;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,L"WINDOWS");
  pIVar2 = ISocketSubsystem::Get(pFVar1);
  (**(code **)(pIVar2->_padding_ + 0x38))(pIVar2,this->ListenSocket);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SockAddr).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ListenAddr).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BroadcastAddr).SharedReferenceCount.ReferenceController);
  return;
}

// BroadcastPacket @ 14eb1f9b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FLanBeacon::BroadcastPacket(FLanBeacon *this,uchar *param_1,int param_2)

{
  FInternetAddr *pFVar1;
  FSocket *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  int local_res8 [2];
  void *local_28 [2];
  
  local_res8[0] = 0;
  if (5 < (byte)LogTemp._0_1_) {
    if (((this->BroadcastAddr).Object == (FInternetAddr *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pFVar1 = (this->BroadcastAddr).Object;
    (**(code **)((longlong)*pFVar1 + 0x80))(pFVar1,local_28,1);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    if (local_28[0] != (void *)0x0) {
      FMemory::Free(local_28[0]);
    }
  }
  pFVar2 = this->ListenSocket;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x58);
  if (((this->BroadcastAddr).Object == (FInternetAddr *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  cVar6 = (*pcVar3)(pFVar2,param_1,param_2,local_res8,(this->BroadcastAddr).Object);
  if ((cVar6 == '\0') || (local_res8[0] != param_2)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  return bVar4;
}

// Init @ 14eb21ad0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FLanBeacon::Init(FLanBeacon *this,int param_1)

{
  TSharedPtr<FInternetAddr,1> *this_00;
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  FNameEntryId FVar7;
  FName *pFVar8;
  ISocketSubsystem *pIVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined4 extraout_var;
  FSocket *pFVar12;
  FInternetAddr *pFVar13;
  undefined1 local_res8 [16];
  undefined4 local_res18;
  undefined4 local_res1c;
  FName local_res20;
  TSharedPtr<FInternetAddr,1> local_b8;
  undefined1 local_a8 [32];
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  TReferenceControllerBase<1> *local_70;
  undefined1 local_68 [8];
  TReferenceControllerBase<1> *local_60;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  void *local_48 [2];
  
  pFVar8 = ::FName::FName(&local_res20,L"WINDOWS");
  pIVar9 = ISocketSubsystem::Get(pFVar8);
  puVar10 = (undefined8 *)(**(code **)(pIVar9->_padding_ + 0xd0))(pIVar9,local_78,GWarn);
  local_b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar10[1];
  local_b8.Object = (FInternetAddr *)*puVar10;
  if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = &this->ListenAddr;
  if (this_00 != &local_b8) {
    this_00->Object = local_b8.Object;
    local_b8.Object = (FInternetAddr *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ListenAddr).SharedReferenceCount,&local_b8.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
  if ((this_00->Object == (FInternetAddr *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  (**(code **)((longlong)*this_00->Object + 0x28))(this_00->Object,param_1);
  pcVar1 = *(code **)(pIVar9->_padding_ + 0x88);
  if ((this_00->Object == (FInternetAddr *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  puVar10 = (undefined8 *)(**(code **)((longlong)*this_00->Object + 0xa8))(this_00->Object,local_88)
  ;
  puVar10 = (undefined8 *)(*pcVar1)(pIVar9,local_68,*puVar10);
  local_a8._8_8_ = puVar10[1];
  local_a8._0_8_ = *puVar10;
  if ((TReferenceControllerBase<1> *)local_a8._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_a8._8_8_)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_a8._8_8_)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (FLanBeacon *)local_a8) {
    (this->BroadcastAddr).Object = (FInternetAddr *)local_a8._0_8_;
    local_a8._0_8_ = (FInternetAddr *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->BroadcastAddr).SharedReferenceCount,(FSharedReferencer<1> *)(local_a8 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_a8._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
  if (((this->BroadcastAddr).Object == (FInternetAddr *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  (**(code **)((longlong)*(this->BroadcastAddr).Object + 0x70))();
  if (((this->BroadcastAddr).Object == (FInternetAddr *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  pFVar13 = (this->BroadcastAddr).Object;
  (**(code **)((longlong)*pFVar13 + 0x28))(pFVar13,param_1);
  puVar10 = (undefined8 *)(**(code **)(pIVar9->_padding_ + 0x90))(pIVar9,local_58);
  pFVar13 = (this->SockAddr).Object;
  pTVar2 = (this->SockAddr).SharedReferenceCount.ReferenceController;
  pTVar3 = (TReferenceControllerBase<1> *)puVar10[1];
  (this->SockAddr).Object = (FInternetAddr *)*puVar10;
  (this->SockAddr).SharedReferenceCount.ReferenceController = pTVar3;
  *puVar10 = pFVar13;
  puVar10[1] = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
  pcVar1 = *(code **)(pIVar9->_padding_ + 0x18);
  if ((this_00->Object == (FInternetAddr *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  uVar11 = (**(code **)((longlong)*this_00->Object + 0xa8))(this_00->Object,local_80);
  ::FString::FString((FString *)(local_a8 + 0x10),L"LAN beacon");
  FVar7 = FNameEntryId::FromValidEName((EName)local_res8);
  local_res18 = *(undefined4 *)CONCAT44(extraout_var,FVar7.Value);
  local_res1c = 0;
  pFVar12 = (FSocket *)(*pcVar1)(pIVar9,&local_res18,local_a8 + 0x10,uVar11);
  this->ListenSocket = pFVar12;
  if ((FSocket *)local_a8._16_8_ != (FSocket *)0x0) {
    FMemory::Free((void *)local_a8._16_8_);
  }
  pFVar12 = this->ListenSocket;
  if (pFVar12 == (FSocket *)0x0) {
    if (1 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
  }
  else {
    (**(code **)(pFVar12->_padding_ + 0xf0))(pFVar12,1);
    (**(code **)(this->ListenSocket->_padding_ + 0xa0))(this->ListenSocket,1);
    (**(code **)(this->ListenSocket->_padding_ + 0x100))(this->ListenSocket,1);
    pFVar12 = this->ListenSocket;
    pcVar1 = *(code **)(pFVar12->_padding_ + 0x20);
    if ((this_00->Object == (FInternetAddr *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    cVar6 = (*pcVar1)(pFVar12,this_00->Object);
    if (cVar6 == '\0') {
      if (1 < (byte)LogTemp._0_1_) {
        pFVar13 = TSharedPtr<FInternetAddr,1>::operator->(this_00);
        (**(code **)((longlong)*pFVar13 + 0x80))(pFVar13,local_48,1);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
        if (local_48[0] != (void *)0x0) {
          FMemory::Free(local_48[0]);
        }
      }
    }
    else {
      cVar6 = (**(code **)(this->ListenSocket->_padding_ + 0xa8))(this->ListenSocket,1);
      if ((cVar6 != '\0') && (this->ListenSocket != (FSocket *)0x0)) {
        return true;
      }
    }
  }
  return false;
}

// IsListenSocketValid @ 14eb21ec0

bool __thiscall FLanBeacon::IsListenSocketValid(FLanBeacon *this)

{
  return this->ListenSocket != (FSocket *)0x0;
}

// ReceivePacket @ 14eb22200

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall FLanBeacon::ReceivePacket(FLanBeacon *this,uchar *param_1,int param_2)

{
  FSocket *pFVar1;
  FInternetAddr *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int local_res8 [2];
  void *local_18 [2];
  
  if (((param_1 == (uchar *)0x0) || (param_2 == 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PacketData && BufferSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineBase\\Source\\Private\\Online\\LANBeacon.cpp"
                         ,0x5a,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  pFVar1 = this->ListenSocket;
  local_res8[0] = 0;
  if (pFVar1 == (FSocket *)0x0) {
    local_res8[0] = 0;
  }
  else {
    (**(code **)(pFVar1->_padding_ + 0x68))
              (pFVar1,param_1,param_2,local_res8,(this->SockAddr).Object,0);
    if ((0 < local_res8[0]) && (5 < (byte)LogTemp._0_1_)) {
      pFVar2 = (this->SockAddr).Object;
      (**(code **)((longlong)*pFVar2 + 0x80))(pFVar2,local_18,1);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      if (local_18[0] != (void *)0x0) {
        FMemory::Free(local_18[0]);
      }
    }
  }
  return local_res8[0];
}

