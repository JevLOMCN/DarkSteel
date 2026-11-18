// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommonEngineUtils
// Functions: 6

// ~FOnlineSessionIdStringRegistry @ 14f004c80

void __thiscall
UE::Online::FOnlineSessionIdStringRegistry::~FOnlineSessionIdStringRegistry
          (FOnlineSessionIdStringRegistry *this)

{
  TOnlineBasicIdRegistry<UE::Online::OnlineIdHandleTags::FSession,FString>::
  ~TOnlineBasicIdRegistry<UE::Online::OnlineIdHandleTags::FSession,FString>(&this->BasicRegistry);
  return;
}

// FromReplicationData @ 14f007910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOnlineId<UE::Online::OnlineIdHandleTags::FSession> __thiscall
UE::Online::FOnlineSessionIdStringRegistry::FromReplicationData
          (FOnlineSessionIdStringRegistry *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  uchar *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 *in_R8;
  undefined1 auStack_188 [32];
  FString local_168;
  FScriptContainerElement local_158 [256];
  ForAnyElementType local_58;
  FScriptContainerElement *local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_188;
  iVar2 = 0;
  iVar4 = *(int *)(in_R8 + 1);
  puVar1 = (uchar *)*in_R8;
  local_58.Data = (FScriptContainerElement *)0x0;
  if (puVar1 == (uchar *)0x0) {
    local_50 = (FScriptContainerElement *)0x0;
    local_48 = 0;
    goto LAB_14f007a0d;
  }
  if ((0 < iVar4) && (puVar1[(longlong)iVar4 + -1] == '\0')) {
    iVar2 = 1;
    iVar4 = iVar4 + -1;
  }
  local_48 = Core::Private::GetConvertedLength((wchar_t *)0x0,puVar1,iVar4);
  uVar3 = local_48 + iVar2;
  uVar5 = uVar3;
  if (uVar3 < 0x81) {
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      uVar5 = 0;
      goto LAB_14f0079a3;
    }
  }
  else {
LAB_14f0079a3:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar5,2);
  }
  local_50 = local_158;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    local_50 = local_58.Data;
  }
  Core::Private::Convert((wchar_t *)local_50,uVar3,puVar1,iVar2 + iVar4);
LAB_14f007a0d:
  ::FString::ConstructFromPtrSize(&local_168,(wchar_t *)local_50,local_48);
  (**(code **)(this->_padding_ + 0x28))(this,param_1,&local_168);
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return (TOnlineId<UE::Online::OnlineIdHandleTags::FSession>)(uint)param_1;
}

// FromStringData @ 14f007a90

TOnlineId<UE::Online::OnlineIdHandleTags::FSession> __thiscall
UE::Online::FOnlineSessionIdStringRegistry::FromStringData
          (FOnlineSessionIdStringRegistry *this,FString *param_1)

{
  longlong in_R8;
  
  if (1 < *(int *)(in_R8 + 8)) {
    TOnlineBasicIdRegistry<UE::Online::OnlineIdHandleTags::FSession,FString>::FindOrAddHandle
              (&this->BasicRegistry,param_1);
    return (TOnlineId<UE::Online::OnlineIdHandleTags::FSession>)(uint)param_1;
  }
  *(undefined4 *)&(param_1->Data).AllocatorInstance.Data = 0;
  return (TOnlineId<UE::Online::OnlineIdHandleTags::FSession>)(uint)param_1;
}

// ToLogString @ 14f00a170

FString * __thiscall
UE::Online::FOnlineSessionIdStringRegistry::ToLogString
          (FOnlineSessionIdStringRegistry *this,FString *__return_storage_ptr__,
          TOnlineId<UE::Online::OnlineIdHandleTags::FSession> *param_1)

{
  (**(code **)(this->_padding_ + 8))();
  return __return_storage_ptr__;
}

// ToReplicationData @ 14f00a190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
UE::Online::FOnlineSessionIdStringRegistry::ToReplicationData
          (FOnlineSessionIdStringRegistry *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TOnlineId<UE::Online::OnlineIdHandleTags::FSession> *param_1)

{
  uint uVar1;
  size_t sVar2;
  wchar_t *_Str;
  uint uVar3;
  undefined1 auStack_108 [32];
  FString local_e8;
  FScriptContainerElement local_d8 [128];
  ForAnyElementType local_58;
  FScriptContainerElement *local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_108;
  TOnlineBasicIdRegistry<UE::Online::OnlineIdHandleTags::FSession,FString>::FindIdValue
            (&this->BasicRegistry,&local_e8,param_1);
  local_58.Data = (FScriptContainerElement *)0x0;
  if (local_e8.Data.ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)local_e8.Data.AllocatorInstance.Data;
    if (local_e8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      local_50 = (FScriptContainerElement *)0x0;
      local_48 = 0;
      goto LAB_14f00a2a2;
    }
  }
  sVar2 = wcslen(_Str);
  local_48 = Core::Private::GetConvertedLength((uchar *)0x0,_Str,(int)sVar2);
  uVar1 = local_48 + 1;
  uVar3 = uVar1;
  if (uVar1 < 0x81) {
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      uVar3 = 0;
      goto LAB_14f00a24c;
    }
  }
  else {
LAB_14f00a24c:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar3,1);
  }
  local_50 = local_d8;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    local_50 = local_58.Data;
  }
  Core::Private::Convert((uchar *)local_50,uVar1,_Str,(int)sVar2 + 1);
LAB_14f00a2a2:
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (__return_storage_ptr__,local_48,Default);
  memcpy((__return_storage_ptr__->AllocatorInstance).Data,local_50,(longlong)local_48);
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ToString @ 14f00a330

FString * __thiscall
UE::Online::FOnlineSessionIdStringRegistry::ToString
          (FOnlineSessionIdStringRegistry *this,FString *__return_storage_ptr__,
          TOnlineId<UE::Online::OnlineIdHandleTags::FSession> *param_1)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FString local_18;
  
  TOnlineBasicIdRegistry<UE::Online::OnlineIdHandleTags::FSession,FString>::FindIdValue
            (&this->BasicRegistry,__return_storage_ptr__,param_1);
  if ((__return_storage_ptr__->Data).ArrayNum < 2) {
    pFVar2 = ::FString::FString(&local_18,L"Invalid");
    if (__return_storage_ptr__ != pFVar2) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
      (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
      (pFVar2->Data).ArrayNum = 0;
      (pFVar2->Data).ArrayMax = 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

