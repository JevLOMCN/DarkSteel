// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemNull
// Functions: 9

// FOnlineSessionInfoNull @ 14ed113c0

FOnlineSessionInfoNull * __thiscall
FOnlineSessionInfoNull::FOnlineSessionInfoNull(FOnlineSessionInfoNull *this)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<FUniqueNetIdNull_const_,1> *pTVar2;
  
  this->_padding_ = (longlong)&___7FOnlineSessionInfoNull__6B_;
  (this->HostAddr).Object = (FInternetAddr *)0x0;
  (this->HostAddr).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar2 = FUniqueNetIdNull::EmptyId();
  (this->SessionId).Object = pTVar2->Object;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  (this->SessionId).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// ~FOnlineSessionInfoNull @ 14ed12d80

void __thiscall FOnlineSessionInfoNull::~FOnlineSessionInfoNull(FOnlineSessionInfoNull *this)

{
  this->_padding_ = (longlong)&___7FOnlineSessionInfoNull__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SessionId).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->HostAddr).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IOnlinePlatformData__6B_;
  return;
}

// GetBytes @ 14ed24c30

uchar * __thiscall FOnlineSessionInfoNull::GetBytes(FOnlineSessionInfoNull *this)

{
  return (uchar *)0x0;
}

// GetSessionId @ 14ed26350

FUniqueNetId * __thiscall FOnlineSessionInfoNull::GetSessionId(FOnlineSessionInfoNull *this)

{
  return (FUniqueNetId *)(this->SessionId).Object;
}

// GetSize @ 14ed26590

int __thiscall FOnlineSessionInfoNull::GetSize(FOnlineSessionInfoNull *this)

{
  return 0x18;
}

// Init @ 14ed26dc0

void __thiscall
FOnlineSessionInfoNull::Init(FOnlineSessionInfoNull *this,FOnlineSubsystemNull *param_1)

{
  TSharedPtr<FInternetAddr,1> *pTVar1;
  code *pcVar2;
  FInternetAddr *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FName FVar5;
  uint uVar6;
  FName FVar7;
  bool bVar8;
  int iVar9;
  FName *pFVar10;
  ISocketSubsystem *pIVar11;
  FOutputDeviceRedirector *pFVar12;
  undefined8 *puVar13;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  TRawPtrProxy<FUniqueNetIdNull> local_res18;
  FName local_res20;
  undefined1 local_98 [8];
  FString local_90;
  FInternetAddr *local_80;
  FSharedReferencer<1> local_78;
  FGuid local_70;
  undefined1 local_60 [8];
  TReferenceControllerBase<1> *local_58;
  TSharedRef<FUniqueNetIdNull_const_,1> local_50 [2];
  
  pFVar10 = ::FName::FName(&local_res20,L"WINDOWS");
  pIVar11 = ISocketSubsystem::Get(pFVar10);
  pcVar2 = *(code **)(pIVar11->_padding_ + 0xe0);
  pFVar12 = GetGlobalLogSingleton();
  puVar13 = (undefined8 *)(*pcVar2)(pIVar11,local_60,pFVar12,local_res8);
  local_78.ReferenceController = (TReferenceControllerBase<1> *)puVar13[1];
  local_80 = (FInternetAddr *)*puVar13;
  if (local_78.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_78.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_78.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->HostAddr;
  if (pTVar1 != (TSharedPtr<FInternetAddr,1> *)&local_80) {
    pTVar1->Object = local_80;
    local_80 = (FInternetAddr *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->HostAddr).SharedReferenceCount,&local_78);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_58);
  local_res10[0] = 0;
  if (pTVar1->Object == (FInternetAddr *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (**(code **)((longlong)*pTVar1->Object + 0x20))(pTVar1->Object,local_res10);
  if ((local_res10[0] & 0xff000000) == 0x7f000000) {
    if (pTVar1->Object == (FInternetAddr *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (**(code **)((longlong)*pTVar1->Object + 0x18))(pTVar1->Object,0x7f000001);
  }
  if (pTVar1->Object == (FInternetAddr *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar3 = pTVar1->Object;
  pcVar2 = *(code **)((longlong)*pFVar3 + 0x28);
  pFVar10 = (FName *)(**(code **)(param_1->_padding_ + 0x18))(param_1,local_98);
  iVar9 = GetPortFromNetDriver(*pFVar10);
  (*pcVar2)(pFVar3,iVar9);
  local_70.A = 0;
  local_70.B = 0;
  local_70.C = 0;
  local_70.D = 0;
  FWindowsPlatformMisc::CreateGuid(&local_70);
  local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.Data.ArrayNum = 0;
  local_90.Data.ArrayMax = 0;
  FGuid::AppendString(&local_70,&local_90,Digits);
  local_res18.Object = ::operator_new(0x30);
  FVar5 = NULL_SUBSYSTEM;
  if (local_res18.Object == (FUniqueNetIdNull *)0x0) {
    local_res18.Object = (FUniqueNetIdNull *)0x0;
  }
  else {
    *(undefined8 *)&(local_res18.Object)->field_0x8 = 0;
    *(undefined8 *)&(local_res18.Object)->field_0x10 = 0;
    *(FScriptContainerElement **)&(local_res18.Object)->field_0x18 =
         local_90.Data.AllocatorInstance.Data;
    local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)&(local_res18.Object)->field_0x20 = local_90.Data.ArrayNum;
    *(int *)&(local_res18.Object)->field_0x24 = local_90.Data.ArrayMax;
    local_90.Data.ArrayNum = 0;
    local_90.Data.ArrayMax = 0;
    *(undefined ***)local_res18.Object = &___7FUniqueNetIdNull__6B_;
    FVar7 = NULL_SUBSYSTEM;
    NULL_SUBSYSTEM.ComparisonIndex = FVar5.ComparisonIndex.Value;
    NULL_SUBSYSTEM.Number = FVar5.Number;
    uVar6 = NULL_SUBSYSTEM.Number;
    *(uint *)&(local_res18.Object)->field_0x28 = NULL_SUBSYSTEM.ComparisonIndex.Value;
    NULL_SUBSYSTEM = FVar7;
    *(uint *)&(local_res18.Object)->field_0x2c = uVar6;
    if (((*(longlong *)&(local_res18.Object)->field_0x8 != 0) &&
        (*(longlong *)&(local_res18.Object)->field_0x10 != 0)) &&
       (0 < *(int *)(*(longlong *)&(local_res18.Object)->field_0x10 + 8))) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar8) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  TSharedRef<FUniqueNetIdNull_const_,1>::TSharedRef<FUniqueNetIdNull_const_,1><FUniqueNetIdNull>
            (local_50,&local_res18);
  pTVar4 = (this->SessionId).SharedReferenceCount.ReferenceController;
  (this->SessionId).Object = local_50[0].Object;
  (this->SessionId).SharedReferenceCount.ReferenceController =
       local_50[0].SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  return;
}

// IsValid @ 14ed27d80

bool __thiscall FOnlineSessionInfoNull::IsValid(FOnlineSessionInfoNull *this)

{
  FInternetAddr *pFVar1;
  char cVar2;
  
  pFVar1 = (this->HostAddr).Object;
  if (pFVar1 != (FInternetAddr *)0x0) {
    cVar2 = (**(code **)((longlong)*pFVar1 + 0x98))();
    if (cVar2 != '\0') {
      return true;
    }
  }
  return false;
}

// ToDebugString @ 14ed30190

FString * __thiscall
FOnlineSessionInfoNull::ToDebugString(FOnlineSessionInfoNull *this,FString *__return_storage_ptr__)

{
  FUniqueNetIdNull *pFVar1;
  FInternetAddr *pFVar2;
  void *local_38 [2];
  void *local_28 [2];
  
  pFVar1 = (this->SessionId).Object;
  (**(code **)(*(longlong *)pFVar1 + 0x38))(pFVar1,local_28);
  pFVar2 = (this->HostAddr).Object;
  if (pFVar2 != (FInternetAddr *)0x0) {
    (**(code **)((longlong)*pFVar2 + 0x80))(pFVar2,local_38,1);
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"HostIP: %s SessionId: %s");
  if ((pFVar2 != (FInternetAddr *)0x0) && (local_38[0] != (void *)0x0)) {
    FMemory::Free(local_38[0]);
  }
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  return __return_storage_ptr__;
}

// ToString @ 14ed30260

FString * __thiscall
FOnlineSessionInfoNull::ToString(FOnlineSessionInfoNull *this,FString *__return_storage_ptr__)

{
  (**(code **)(*(longlong *)(this->SessionId).Object + 0x30))();
  return __return_storage_ptr__;
}

