// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 10

// FRemoteServerId @ 1421b3580

FRemoteServerId * __thiscall
FRemoteServerId::FRemoteServerId(FRemoteServerId *this,FString *param_1)

{
  FRemoteServerId FVar1;
  undefined4 extraout_var;
  TStringView<wchar_t> local_res8 [2];
  
  this->Id = 0;
  FVar1 = FromString(local_res8);
  this->Id = *(uint *)CONCAT44(extraout_var,FVar1.Id);
  return this;
}

// FromIdNumber @ 1421cc3a0

FRemoteServerId __cdecl FRemoteServerId::FromIdNumber(uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined4 in_register_0000000c;
  uint in_EDX;
  
  if (in_EDX < 0x3fd) {
    *(uint *)CONCAT44(in_register_0000000c,param_1) = in_EDX;
    return (FRemoteServerId)param_1;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("InNumber < (uint32)ERemoteServerIdConstants::FirstReserved",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteObject.cpp"
                     ,0x45e,L"Remote server id can not be greater than %u, got: %u");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (FRemoteServerId)uVar3;
  }
  *(uint *)CONCAT44(in_register_0000000c,param_1) = in_EDX;
  return (FRemoteServerId)param_1;
}

// FromString @ 1421cc570

/* WARNING: Enum "Type": Some values do not have unique names */

FRemoteServerId __cdecl FRemoteServerId::FromString(TStringView<wchar_t> *param_1)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  FRemoteServerId FVar4;
  int iVar5;
  TStringView<wchar_t> *in_RDX;
  uint local_res8 [2];
  uint *local_res10;
  
  uVar1 = *(undefined8 *)&in_RDX->Size;
  *(undefined4 *)&param_1->DataPtr = 0;
  iVar3 = (int)uVar1;
  FVar4.Id = (uint)param_1;
  if (iVar3 != 0) {
    iVar5 = FGenericPlatformStricmp::Strnicmp(in_RDX->DataPtr,L"Invalid",(longlong)iVar3);
    if ((iVar5 == 0) && (L"Invalid"[iVar3] == L'\0')) {
      *(undefined4 *)&param_1->DataPtr = 0;
      return (FRemoteServerId)FVar4.Id;
    }
  }
  iVar3 = (int)*(undefined8 *)&in_RDX->Size;
  if (iVar3 != 0) {
    iVar5 = FGenericPlatformStricmp::Strnicmp(in_RDX->DataPtr,L"Asset",(longlong)iVar3);
    if ((iVar5 == 0) && (L"Asset"[iVar3] == L'\0')) {
      *(undefined4 *)&param_1->DataPtr = 0x3fe;
      return (FRemoteServerId)FVar4.Id;
    }
  }
  iVar3 = (int)*(undefined8 *)&in_RDX->Size;
  if (iVar3 != 0) {
    iVar5 = FGenericPlatformStricmp::Strnicmp(in_RDX->DataPtr,L"Database",(longlong)iVar3);
    if ((iVar5 == 0) && (L"Database"[iVar3] == L'\0')) goto LAB_1421cc6ed;
  }
  iVar3 = (int)*(undefined8 *)&in_RDX->Size;
  if (iVar3 != 0) {
    iVar5 = FGenericPlatformStricmp::Strnicmp(in_RDX->DataPtr,L"Local",(longlong)iVar3);
    if ((iVar5 == 0) && (L"Local"[iVar3] == L'\0')) {
      *(undefined4 *)&param_1->DataPtr = 0x3fd;
      return (FRemoteServerId)FVar4.Id;
    }
  }
  local_res8[0] = 0;
  ::LexFromString(local_res8,in_RDX);
  if (0x3ff < local_res8[0]) {
    local_res10 = local_res8;
    bVar2 = `FRemoteServerId::FromString'::__l20::<lambda_1>::operator()(&local_res10);
    if (!bVar2) {
      if (2 < (byte)LogRemoteObject._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRemoteObject);
      }
LAB_1421cc6ed:
      *(undefined4 *)&param_1->DataPtr = 0x3ff;
      return (FRemoteServerId)FVar4.Id;
    }
  }
  *(uint *)&param_1->DataPtr = local_res8[0];
  return (FRemoteServerId)FVar4.Id;
}

// InitGlobalServerId @ 1421d2cb0

void __cdecl FRemoteServerId::InitGlobalServerId(FRemoteServerId param_1)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  if ((GlobalServerId.Id != 0x3fd) && (GlobalServerId.Id != 0)) {
    ToString(&GlobalServerId,&local_18);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GlobalServerId.Id == (uint32)ERemoteServerIdConstants::Local || (!FRemoteObjectId::RemoteObjectSupportCompiledIn && !GlobalServerId.IsValid())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteObject.cpp"
                       ,0x40,L"Global server id has already been initialized (%s)");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  GlobalServerId = param_1;
  return;
}

// IsGlobalServerIdInitialized @ 1421d34f0

bool __cdecl FRemoteServerId::IsGlobalServerIdInitialized(void)

{
  return GlobalServerId.Id != 0x3fd;
}

// NetSerialize @ 1421d65d0

bool __thiscall
FRemoteServerId::NetSerialize
          (FRemoteServerId *this,FArchive *param_1,UPackageMap *param_2,bool *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  FRemoteServerId FVar3;
  bool bVar4;
  undefined1 uVar5;
  uint auStackX_8 [2];
  
  auStackX_8[0] = this->Id;
  FVar3.Id = auStackX_8[0];
  if (((((param_1->field_0x28 & 4) != 0) && (auStackX_8[0] == 0x3fd)) &&
      (FVar3.Id = GlobalServerId.Id, GlobalServerId.Id == 0x3fd)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GlobalServerId.Id != (uint32)ERemoteServerIdConstants::Local",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\RemoteObjectTypes.h"
                         ,0x9d,
                         L"Unable to convert Local server id to global. Global server id hasn\'t been initialized yet."
                        ), FVar3 = GlobalServerId, bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  auStackX_8[0] = FVar3.Id;
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStackX_8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  if ((auStackX_8[0] == 0x3fd) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SerializedId != (uint32)ERemoteServerIdConstants::Local",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteObject.cpp"
                         ,0x4ad,L"Local server id should never be serialized"), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    if (auStackX_8[0] == GlobalServerId.Id) {
      auStackX_8[0] = 0x3fd;
    }
    this->Id = auStackX_8[0];
  }
  return true;
}

// Serialize @ 1421e6ce0

bool __thiscall FRemoteServerId::Serialize(FRemoteServerId *this,FArchive *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  FRemoteServerId FVar3;
  bool bVar4;
  undefined1 uVar5;
  uint local_res8 [2];
  
  local_res8[0] = this->Id;
  FVar3.Id = local_res8[0];
  if (((((param_1->field_0x28 & 4) != 0) && (local_res8[0] == 0x3fd)) &&
      (FVar3.Id = GlobalServerId.Id, GlobalServerId.Id == 0x3fd)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GlobalServerId.Id != (uint32)ERemoteServerIdConstants::Local",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\RemoteObjectTypes.h"
                         ,0x9d,
                         L"Unable to convert Local server id to global. Global server id hasn\'t been initialized yet."
                        ), FVar3 = GlobalServerId, bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  local_res8[0] = FVar3.Id;
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  if ((local_res8[0] == 0x3fd) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SerializedId != (uint32)ERemoteServerIdConstants::Local",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteObject.cpp"
                         ,0x4ad,L"Local server id should never be serialized"), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    if (local_res8[0] == GlobalServerId.Id) {
      local_res8[0] = 0x3fd;
    }
    this->Id = local_res8[0];
  }
  return true;
}

// ToString @ 1421ea030

FString * __thiscall
FRemoteServerId::ToString(FRemoteServerId *this,FString *__return_storage_ptr__)

{
  uint uVar1;
  FString *pFVar2;
  bool bVar3;
  FRemoteServerId local_res8 [2];
  FString local_28;
  FString local_18;
  
  local_res8[0].Id = 0;
  uVar1 = this->Id;
  if (uVar1 == 0x3fd) {
    bVar3 = GlobalServerId.Id == 0x3fd;
    if (bVar3) {
      pFVar2 = ::FString::FString(&local_28,L"Local");
    }
    else {
      local_res8[0].Id = GlobalServerId.Id;
      pFVar2 = ToString(local_res8,&local_18);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
    if (bVar3) {
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    if ((!bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return __return_storage_ptr__;
  }
  if (uVar1 != 0x3fe) {
    if (uVar1 != 0x3ff) {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      ::FString::AppendInt(__return_storage_ptr__,uVar1);
      return __return_storage_ptr__;
    }
    ::FString::FString(__return_storage_ptr__,L"Database");
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,L"Asset");
  return __return_storage_ptr__;
}

// VerifyComparableServerIds @ 1421ef7a0

void __cdecl FRemoteServerId::VerifyComparableServerIds(uint param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (GlobalServerId.Id == 0x3fd) {
    if (param_1 == 0x3fd) {
      if (param_2 == 0) {
        return;
      }
      if (param_2 < 0x3fd) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Id0 != (uint32)ERemoteServerIdConstants::Local || Id1 == (uint32)ERemoteServerIdConstants::Invalid || Id1 >= (uint32)ERemoteServerIdConstants::FirstReserved"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\RemoteObjectTypes.h"
                           ,0xa9,
                           L"When the global server id is not initialized it\'s only possible to compare predefined server IDs (lhs: %u, rhs: %u)"
                          );
        if (!bVar2) {
          return;
        }
        goto code_r0x0001421ef838;
      }
    }
    if (((param_2 == 0x3fd) && (param_1 - 1 < 0x3fc)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Id1 != (uint32)ERemoteServerIdConstants::Local || Id0 == (uint32)ERemoteServerIdConstants::Invalid || Id0 >= (uint32)ERemoteServerIdConstants::FirstReserved"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\RemoteObjectTypes.h"
                           ,0xab,
                           L"When the global server id is not initialized it\'s only possible to compare predefined server IDs (lhs: %u, rhs: Local)"
                          ), bVar2)) {
code_r0x0001421ef838:
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// operator() @ 150487c30

bool __thiscall `FRemoteServerId::FromString'::__l20::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8236212334020787071>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8236212334020787071>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

