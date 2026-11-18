// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 53

// Get<UE::Online::IAuth> @ 14edc18c0

IAuth * __thiscall
UE::Online::FOnlineServicesCommon::Get<UE::Online::IAuth>(FOnlineServicesCommon *this)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  IAuth *pIVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar4 = (this->Components).Components.AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)(this->Components).Components.ArrayNum * 8;
  while( true ) {
    if (pFVar4 == pFVar1) {
      return (IAuth *)0x0;
    }
    cVar2 = (**(code **)(**(longlong **)pFVar4 + 0x18))
                      (*(longlong **)pFVar4,L"class UE::Online::IAuth");
    if (cVar2 != '\0') break;
    pFVar4 = pFVar4 + 8;
  }
  pIVar3 = (IAuth *)(**(code **)(**(longlong **)pFVar4 + 8))();
  return pIVar3;
}

// Get<UE::Online::IStats> @ 14edc1940

IStats * __thiscall
UE::Online::FOnlineServicesCommon::Get<UE::Online::IStats>(FOnlineServicesCommon *this)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  IStats *pIVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar4 = (this->Components).Components.AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)(this->Components).Components.ArrayNum * 8;
  while( true ) {
    if (pFVar4 == pFVar1) {
      return (IStats *)0x0;
    }
    cVar2 = (**(code **)(**(longlong **)pFVar4 + 0x18))
                      (*(longlong **)pFVar4,L"class UE::Online::IStats");
    if (cVar2 != '\0') break;
    pFVar4 = pFVar4 + 8;
  }
  pIVar3 = (IStats *)(**(code **)(**(longlong **)pFVar4 + 8))();
  return pIVar3;
}

// LoadConfig<UE::Online::FAchievementsCommonConfig> @ 14edcd400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FAchievementsCommonConfig>
          (FOnlineServicesCommon *this,FAchievementsCommonConfig *param_1,FString *param_2,
          FString *param_3)

{
  int iVar1;
  bool bVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStackY_118 [32];
  TArray<TStringView<wchar_t>_const_,TSizedDefaultAllocator<32>_> local_d8;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_c8;
  FString local_c0;
  FString local_b0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_a0;
  FScriptContainerElement *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  FScriptContainerElement *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  FScriptContainerElement *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_c8 = &local_a0;
  local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.ArrayNum = 0;
  local_a0.ArrayMax = 0;
  ::FString::FString(&local_c0,L"OnlineServices");
  ::FName::ToString(&this->InstanceConfigName,&local_b0);
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 1;
  iVar6 = 0;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_d8.AllocatorInstance,1,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FAchievementsCommonConfig>'::__l2::
  <lambda_1>::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 2;
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  iVar1 = (param_2->Data).ArrayNum;
  iVar4 = 0;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = iVar4;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,2,0,&local_d8.AllocatorInstance,2,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x10) = local_78;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x18) = CONCAT44(uStack_6c,iStack_70);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FAchievementsCommonConfig>'::__l2::
  <lambda_1>::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 3;
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  iVar1 = (param_2->Data).ArrayNum;
  local_68 = (param_3->Data).AllocatorInstance.Data;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = iVar4;
  }
  iVar1 = (param_3->Data).ArrayNum;
  iStack_60 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_60 = iVar6;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,3,0,&local_d8.AllocatorInstance,3,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x10) = local_78;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x18) = CONCAT44(uStack_6c,iStack_70);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x20) = local_68;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x28) = CONCAT44(uStack_5c,iStack_60);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FAchievementsCommonConfig>'::__l2::
  <lambda_1>::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 2;
  local_78 = (this->ServiceConfigName).Data.AllocatorInstance.Data;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  iVar1 = (this->ServiceConfigName).Data.ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = iVar4;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,2,0,&local_d8.AllocatorInstance,2,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x10) = local_78;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x18) = CONCAT44(uStack_6c,iStack_70);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FAchievementsCommonConfig>'::__l2::
  <lambda_1>::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 3;
  local_78 = (this->ServiceConfigName).Data.AllocatorInstance.Data;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  iVar1 = (this->ServiceConfigName).Data.ArrayNum;
  local_68 = (param_2->Data).AllocatorInstance.Data;
  iVar5 = 0;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = iVar5;
  }
  iVar1 = (param_2->Data).ArrayNum;
  iStack_60 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_60 = iVar5;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,3,0,&local_d8.AllocatorInstance,3,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x10) = local_78;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x18) = CONCAT44(uStack_6c,iStack_70);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x20) = local_68;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x28) = CONCAT44(uStack_5c,iStack_60);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FAchievementsCommonConfig>'::__l2::
  <lambda_1>::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 4;
  local_78 = (this->ServiceConfigName).Data.AllocatorInstance.Data;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  iVar1 = (this->ServiceConfigName).Data.ArrayNum;
  local_68 = (param_2->Data).AllocatorInstance.Data;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = iVar5;
  }
  iVar1 = (param_2->Data).ArrayNum;
  local_58 = (param_3->Data).AllocatorInstance.Data;
  iStack_60 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_60 = iVar5;
  }
  iVar1 = (param_3->Data).ArrayNum;
  iStack_50 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_50 = iVar5;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,4,0,&local_d8.AllocatorInstance,4,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x10) = local_78;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x18) = CONCAT44(uStack_6c,iStack_70);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x20) = local_68;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x28) = CONCAT44(uStack_5c,iStack_60);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x30) = local_58;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x38) = CONCAT44(uStack_4c,iStack_50);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FAchievementsCommonConfig>'::__l2::
  <lambda_1>::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 3;
  local_78 = (this->ServiceConfigName).Data.AllocatorInstance.Data;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  iVar1 = (this->ServiceConfigName).Data.ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = iVar5;
  }
  local_68 = local_b0.Data.AllocatorInstance.Data;
  iStack_60 = local_b0.Data.ArrayNum + -1;
  if (local_b0.Data.ArrayNum == 0) {
    iStack_60 = iVar6;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,3,0,&local_d8.AllocatorInstance,3,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x10) = local_78;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x18) = CONCAT44(uStack_6c,iStack_70);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x20) = local_68;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x28) = CONCAT44(uStack_5c,iStack_60);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FAchievementsCommonConfig>'::__l2::
  <lambda_1>::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 4;
  local_78 = (this->ServiceConfigName).Data.AllocatorInstance.Data;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  iVar1 = (this->ServiceConfigName).Data.ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = iVar5;
  }
  local_68 = local_b0.Data.AllocatorInstance.Data;
  local_58 = (param_2->Data).AllocatorInstance.Data;
  iStack_60 = local_b0.Data.ArrayNum + -1;
  if (local_b0.Data.ArrayNum == 0) {
    iStack_60 = iVar6;
  }
  iVar1 = (param_2->Data).ArrayNum;
  iStack_50 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_50 = iVar5;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,4,0,&local_d8.AllocatorInstance,4,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x10) = local_78;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x18) = CONCAT44(uStack_6c,iStack_70);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x20) = local_68;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x28) = CONCAT44(uStack_5c,iStack_60);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x30) = local_58;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x38) = CONCAT44(uStack_4c,iStack_50);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FAchievementsCommonConfig>'::__l2::
  <lambda_1>::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 5;
  local_78 = (this->ServiceConfigName).Data.AllocatorInstance.Data;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  iVar1 = (this->ServiceConfigName).Data.ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_68 = local_b0.Data.AllocatorInstance.Data;
  local_58 = (param_2->Data).AllocatorInstance.Data;
  iStack_60 = local_b0.Data.ArrayNum + -1;
  if (local_b0.Data.ArrayNum == 0) {
    iStack_60 = iVar6;
  }
  iVar6 = (param_2->Data).ArrayNum;
  local_48 = (param_3->Data).AllocatorInstance.Data;
  iStack_50 = iVar6 + -1;
  if (iVar6 == 0) {
    iStack_50 = 0;
  }
  iVar6 = (param_3->Data).ArrayNum;
  iStack_40 = iVar6 + -1;
  if (iVar6 == 0) {
    iStack_40 = iVar4;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,5,0,&local_d8.AllocatorInstance,5,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x10) = local_78;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x18) = CONCAT44(uStack_6c,iStack_70);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x20) = local_68;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x28) = CONCAT44(uStack_5c,iStack_60);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x30) = local_58;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x38) = CONCAT44(uStack_4c,iStack_50);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x40) = local_48;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x48) = CONCAT44(uStack_3c,iStack_40);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FAchievementsCommonConfig>'::__l2::
  <lambda_1>::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  pTVar3 = GetConfigSectionHeirarchyWithOverrides
                     (this,(TArray<FString,TSizedDefaultAllocator<32>_> *)&local_d8,&local_a0);
  bVar2 = Online::LoadConfig<UE::Online::FAchievementsCommonConfig>
                    ((this->ConfigProvider).Ptr,pTVar3,param_1);
  DestructItems<FString,int>((FString *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_a0.AllocatorInstance.Data,local_a0.ArrayNum);
  if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.AllocatorInstance.Data);
  }
  return bVar2;
}

// LoadConfig<UE::Online::FLeaderboardsCommonConfig> @ 14edcdef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FLeaderboardsCommonConfig>
          (FOnlineServicesCommon *this,FLeaderboardsCommonConfig *param_1,FString *param_2,
          FString *param_3)

{
  int iVar1;
  bool bVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStackY_118 [32];
  TArray<TStringView<wchar_t>_const_,TSizedDefaultAllocator<32>_> local_d8;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_c8;
  FString local_c0;
  FString local_b0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_a0;
  FScriptContainerElement *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  FScriptContainerElement *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  FScriptContainerElement *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_c8 = &local_a0;
  local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.ArrayNum = 0;
  local_a0.ArrayMax = 0;
  ::FString::FString(&local_c0,L"OnlineServices");
  ::FName::ToString(&this->InstanceConfigName,&local_b0);
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 1;
  iVar6 = 0;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_d8.AllocatorInstance,1,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FLeaderboardsCommonConfig>'::__l2::
  <lambda_1>::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 2;
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  iVar1 = (param_2->Data).ArrayNum;
  iVar4 = 0;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = iVar4;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,2,0,&local_d8.AllocatorInstance,2,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x10) = local_78;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x18) = CONCAT44(uStack_6c,iStack_70);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FLeaderboardsCommonConfig>'::__l2::
  <lambda_1>::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 3;
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  iVar1 = (param_2->Data).ArrayNum;
  local_68 = (param_3->Data).AllocatorInstance.Data;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = iVar4;
  }
  iVar1 = (param_3->Data).ArrayNum;
  iStack_60 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_60 = iVar6;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,3,0,&local_d8.AllocatorInstance,3,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x10) = local_78;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x18) = CONCAT44(uStack_6c,iStack_70);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x20) = local_68;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x28) = CONCAT44(uStack_5c,iStack_60);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FLeaderboardsCommonConfig>'::__l2::
  <lambda_1>::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 2;
  local_78 = (this->ServiceConfigName).Data.AllocatorInstance.Data;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  iVar1 = (this->ServiceConfigName).Data.ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = iVar4;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,2,0,&local_d8.AllocatorInstance,2,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x10) = local_78;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x18) = CONCAT44(uStack_6c,iStack_70);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FLeaderboardsCommonConfig>'::__l2::
  <lambda_1>::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 3;
  local_78 = (this->ServiceConfigName).Data.AllocatorInstance.Data;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  iVar1 = (this->ServiceConfigName).Data.ArrayNum;
  local_68 = (param_2->Data).AllocatorInstance.Data;
  iVar5 = 0;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = iVar5;
  }
  iVar1 = (param_2->Data).ArrayNum;
  iStack_60 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_60 = iVar5;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,3,0,&local_d8.AllocatorInstance,3,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x10) = local_78;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x18) = CONCAT44(uStack_6c,iStack_70);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x20) = local_68;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x28) = CONCAT44(uStack_5c,iStack_60);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FLeaderboardsCommonConfig>'::__l2::
  <lambda_1>::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 4;
  local_78 = (this->ServiceConfigName).Data.AllocatorInstance.Data;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  iVar1 = (this->ServiceConfigName).Data.ArrayNum;
  local_68 = (param_2->Data).AllocatorInstance.Data;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = iVar5;
  }
  iVar1 = (param_2->Data).ArrayNum;
  local_58 = (param_3->Data).AllocatorInstance.Data;
  iStack_60 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_60 = iVar5;
  }
  iVar1 = (param_3->Data).ArrayNum;
  iStack_50 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_50 = iVar5;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,4,0,&local_d8.AllocatorInstance,4,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x10) = local_78;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x18) = CONCAT44(uStack_6c,iStack_70);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x20) = local_68;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x28) = CONCAT44(uStack_5c,iStack_60);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x30) = local_58;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x38) = CONCAT44(uStack_4c,iStack_50);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FLeaderboardsCommonConfig>'::__l2::
  <lambda_1>::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 3;
  local_78 = (this->ServiceConfigName).Data.AllocatorInstance.Data;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  iVar1 = (this->ServiceConfigName).Data.ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = iVar5;
  }
  local_68 = local_b0.Data.AllocatorInstance.Data;
  iStack_60 = local_b0.Data.ArrayNum + -1;
  if (local_b0.Data.ArrayNum == 0) {
    iStack_60 = iVar6;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,3,0,&local_d8.AllocatorInstance,3,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x10) = local_78;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x18) = CONCAT44(uStack_6c,iStack_70);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x20) = local_68;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x28) = CONCAT44(uStack_5c,iStack_60);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FLeaderboardsCommonConfig>'::__l2::
  <lambda_1>::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 4;
  local_78 = (this->ServiceConfigName).Data.AllocatorInstance.Data;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  iVar1 = (this->ServiceConfigName).Data.ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = iVar5;
  }
  local_68 = local_b0.Data.AllocatorInstance.Data;
  local_58 = (param_2->Data).AllocatorInstance.Data;
  iStack_60 = local_b0.Data.ArrayNum + -1;
  if (local_b0.Data.ArrayNum == 0) {
    iStack_60 = iVar6;
  }
  iVar1 = (param_2->Data).ArrayNum;
  iStack_50 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_50 = iVar5;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,4,0,&local_d8.AllocatorInstance,4,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x10) = local_78;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x18) = CONCAT44(uStack_6c,iStack_70);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x20) = local_68;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x28) = CONCAT44(uStack_5c,iStack_60);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x30) = local_58;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x38) = CONCAT44(uStack_4c,iStack_50);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FLeaderboardsCommonConfig>'::__l2::
  <lambda_1>::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 5;
  local_78 = (this->ServiceConfigName).Data.AllocatorInstance.Data;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  iVar1 = (this->ServiceConfigName).Data.ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_68 = local_b0.Data.AllocatorInstance.Data;
  local_58 = (param_2->Data).AllocatorInstance.Data;
  iStack_60 = local_b0.Data.ArrayNum + -1;
  if (local_b0.Data.ArrayNum == 0) {
    iStack_60 = iVar6;
  }
  iVar6 = (param_2->Data).ArrayNum;
  local_48 = (param_3->Data).AllocatorInstance.Data;
  iStack_50 = iVar6 + -1;
  if (iVar6 == 0) {
    iStack_50 = 0;
  }
  iVar6 = (param_3->Data).ArrayNum;
  iStack_40 = iVar6 + -1;
  if (iVar6 == 0) {
    iStack_40 = iVar4;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,5,0,&local_d8.AllocatorInstance,5,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x10) = local_78;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x18) = CONCAT44(uStack_6c,iStack_70);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x20) = local_68;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x28) = CONCAT44(uStack_5c,iStack_60);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x30) = local_58;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x38) = CONCAT44(uStack_4c,iStack_50);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x40) = local_48;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x48) = CONCAT44(uStack_3c,iStack_40);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FLeaderboardsCommonConfig>'::__l2::
  <lambda_1>::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  pTVar3 = GetConfigSectionHeirarchyWithOverrides
                     (this,(TArray<FString,TSizedDefaultAllocator<32>_> *)&local_d8,&local_a0);
  bVar2 = Online::LoadConfig<UE::Online::FLeaderboardsCommonConfig>
                    ((this->ConfigProvider).Ptr,pTVar3,param_1);
  DestructItems<FString,int>((FString *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_a0.AllocatorInstance.Data,local_a0.ArrayNum);
  if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.AllocatorInstance.Data);
  }
  return bVar2;
}

// LoadConfig<UE::Online::FOnlineServicesCommonConfig> @ 14edce9e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FOnlineServicesCommonConfig>
          (FOnlineServicesCommon *this,FOnlineServicesCommonConfig *param_1,FString *param_2,
          FString *param_3)

{
  int iVar1;
  bool bVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStackY_118 [32];
  TArray<TStringView<wchar_t>_const_,TSizedDefaultAllocator<32>_> local_d8;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_c8;
  FString local_c0;
  FString local_b0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_a0;
  FScriptContainerElement *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  FScriptContainerElement *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  FScriptContainerElement *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_c8 = &local_a0;
  local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.ArrayNum = 0;
  local_a0.ArrayMax = 0;
  ::FString::FString(&local_c0,L"OnlineServices");
  ::FName::ToString(&this->InstanceConfigName,&local_b0);
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 1;
  iVar6 = 0;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_d8.AllocatorInstance,1,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FOnlineServicesCommonConfig>'::__l2::
  <lambda_1>::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 2;
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  iVar1 = (param_2->Data).ArrayNum;
  iVar4 = 0;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = iVar4;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,2,0,&local_d8.AllocatorInstance,2,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x10) = local_78;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x18) = CONCAT44(uStack_6c,iStack_70);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FOnlineServicesCommonConfig>'::__l2::
  <lambda_1>::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 3;
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  iVar1 = (param_2->Data).ArrayNum;
  local_68 = (param_3->Data).AllocatorInstance.Data;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = iVar4;
  }
  iVar1 = (param_3->Data).ArrayNum;
  iStack_60 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_60 = iVar6;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,3,0,&local_d8.AllocatorInstance,3,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x10) = local_78;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x18) = CONCAT44(uStack_6c,iStack_70);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x20) = local_68;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x28) = CONCAT44(uStack_5c,iStack_60);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FOnlineServicesCommonConfig>'::__l2::
  <lambda_1>::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 2;
  local_78 = (this->ServiceConfigName).Data.AllocatorInstance.Data;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  iVar1 = (this->ServiceConfigName).Data.ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = iVar4;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,2,0,&local_d8.AllocatorInstance,2,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x10) = local_78;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x18) = CONCAT44(uStack_6c,iStack_70);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FOnlineServicesCommonConfig>'::__l2::
  <lambda_1>::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 3;
  local_78 = (this->ServiceConfigName).Data.AllocatorInstance.Data;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  iVar1 = (this->ServiceConfigName).Data.ArrayNum;
  local_68 = (param_2->Data).AllocatorInstance.Data;
  iVar5 = 0;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = iVar5;
  }
  iVar1 = (param_2->Data).ArrayNum;
  iStack_60 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_60 = iVar5;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,3,0,&local_d8.AllocatorInstance,3,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x10) = local_78;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x18) = CONCAT44(uStack_6c,iStack_70);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x20) = local_68;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x28) = CONCAT44(uStack_5c,iStack_60);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FOnlineServicesCommonConfig>'::__l2::
  <lambda_1>::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 4;
  local_78 = (this->ServiceConfigName).Data.AllocatorInstance.Data;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  iVar1 = (this->ServiceConfigName).Data.ArrayNum;
  local_68 = (param_2->Data).AllocatorInstance.Data;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = iVar5;
  }
  iVar1 = (param_2->Data).ArrayNum;
  local_58 = (param_3->Data).AllocatorInstance.Data;
  iStack_60 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_60 = iVar5;
  }
  iVar1 = (param_3->Data).ArrayNum;
  iStack_50 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_50 = iVar5;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,4,0,&local_d8.AllocatorInstance,4,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x10) = local_78;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x18) = CONCAT44(uStack_6c,iStack_70);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x20) = local_68;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x28) = CONCAT44(uStack_5c,iStack_60);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x30) = local_58;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x38) = CONCAT44(uStack_4c,iStack_50);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FOnlineServicesCommonConfig>'::__l2::
  <lambda_1>::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 3;
  local_78 = (this->ServiceConfigName).Data.AllocatorInstance.Data;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  iVar1 = (this->ServiceConfigName).Data.ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = iVar5;
  }
  local_68 = local_b0.Data.AllocatorInstance.Data;
  iStack_60 = local_b0.Data.ArrayNum + -1;
  if (local_b0.Data.ArrayNum == 0) {
    iStack_60 = iVar6;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,3,0,&local_d8.AllocatorInstance,3,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x10) = local_78;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x18) = CONCAT44(uStack_6c,iStack_70);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x20) = local_68;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x28) = CONCAT44(uStack_5c,iStack_60);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FOnlineServicesCommonConfig>'::__l2::
  <lambda_1>::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 4;
  local_78 = (this->ServiceConfigName).Data.AllocatorInstance.Data;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  iVar1 = (this->ServiceConfigName).Data.ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = iVar5;
  }
  local_68 = local_b0.Data.AllocatorInstance.Data;
  local_58 = (param_2->Data).AllocatorInstance.Data;
  iStack_60 = local_b0.Data.ArrayNum + -1;
  if (local_b0.Data.ArrayNum == 0) {
    iStack_60 = iVar6;
  }
  iVar1 = (param_2->Data).ArrayNum;
  iStack_50 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_50 = iVar5;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,4,0,&local_d8.AllocatorInstance,4,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x10) = local_78;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x18) = CONCAT44(uStack_6c,iStack_70);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x20) = local_68;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x28) = CONCAT44(uStack_5c,iStack_60);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x30) = local_58;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x38) = CONCAT44(uStack_4c,iStack_50);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FOnlineServicesCommonConfig>'::__l2::
  <lambda_1>::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 5;
  local_78 = (this->ServiceConfigName).Data.AllocatorInstance.Data;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  iVar1 = (this->ServiceConfigName).Data.ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_68 = local_b0.Data.AllocatorInstance.Data;
  local_58 = (param_2->Data).AllocatorInstance.Data;
  iStack_60 = local_b0.Data.ArrayNum + -1;
  if (local_b0.Data.ArrayNum == 0) {
    iStack_60 = iVar6;
  }
  iVar6 = (param_2->Data).ArrayNum;
  local_48 = (param_3->Data).AllocatorInstance.Data;
  iStack_50 = iVar6 + -1;
  if (iVar6 == 0) {
    iStack_50 = 0;
  }
  iVar6 = (param_3->Data).ArrayNum;
  iStack_40 = iVar6 + -1;
  if (iVar6 == 0) {
    iStack_40 = iVar4;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,5,0,&local_d8.AllocatorInstance,5,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x10) = local_78;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x18) = CONCAT44(uStack_6c,iStack_70);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x20) = local_68;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x28) = CONCAT44(uStack_5c,iStack_60);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x30) = local_58;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x38) = CONCAT44(uStack_4c,iStack_50);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x40) = local_48;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x48) = CONCAT44(uStack_3c,iStack_40);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FOnlineServicesCommonConfig>'::__l2::
  <lambda_1>::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  pTVar3 = GetConfigSectionHeirarchyWithOverrides
                     (this,(TArray<FString,TSizedDefaultAllocator<32>_> *)&local_d8,&local_a0);
  bVar2 = Online::LoadConfig<UE::Online::FOnlineServicesCommonConfig>
                    ((this->ConfigProvider).Ptr,pTVar3,param_1);
  DestructItems<FString,int>((FString *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_a0.AllocatorInstance.Data,local_a0.ArrayNum);
  if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.AllocatorInstance.Data);
  }
  return bVar2;
}

// LoadConfig<UE::Online::FSchemaRegistryDescriptorConfig> @ 14edcf8f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FSchemaRegistryDescriptorConfig>
          (FOnlineServicesCommon *this,FSchemaRegistryDescriptorConfig *param_1,FString *param_2,
          FString *param_3)

{
  int iVar1;
  bool bVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStackY_118 [32];
  TArray<TStringView<wchar_t>_const_,TSizedDefaultAllocator<32>_> local_d8;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_c8;
  FString local_c0;
  FString local_b0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_a0;
  FScriptContainerElement *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  FScriptContainerElement *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  FScriptContainerElement *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_c8 = &local_a0;
  local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.ArrayNum = 0;
  local_a0.ArrayMax = 0;
  ::FString::FString(&local_c0,L"OnlineServices");
  ::FName::ToString(&this->InstanceConfigName,&local_b0);
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 1;
  iVar6 = 0;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_d8.AllocatorInstance,1,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FSchemaRegistryDescriptorConfig>'::__l2
  ::<lambda_1>::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 2;
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  iVar1 = (param_2->Data).ArrayNum;
  iVar4 = 0;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = iVar4;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,2,0,&local_d8.AllocatorInstance,2,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x10) = local_78;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x18) = CONCAT44(uStack_6c,iStack_70);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FSchemaRegistryDescriptorConfig>'::__l2
  ::<lambda_1>::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 3;
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  iVar1 = (param_2->Data).ArrayNum;
  local_68 = (param_3->Data).AllocatorInstance.Data;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = iVar4;
  }
  iVar1 = (param_3->Data).ArrayNum;
  iStack_60 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_60 = iVar6;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,3,0,&local_d8.AllocatorInstance,3,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x10) = local_78;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x18) = CONCAT44(uStack_6c,iStack_70);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x20) = local_68;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x28) = CONCAT44(uStack_5c,iStack_60);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FSchemaRegistryDescriptorConfig>'::__l2
  ::<lambda_1>::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 2;
  local_78 = (this->ServiceConfigName).Data.AllocatorInstance.Data;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  iVar1 = (this->ServiceConfigName).Data.ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = iVar4;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,2,0,&local_d8.AllocatorInstance,2,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x10) = local_78;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x18) = CONCAT44(uStack_6c,iStack_70);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FSchemaRegistryDescriptorConfig>'::__l2
  ::<lambda_1>::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 3;
  local_78 = (this->ServiceConfigName).Data.AllocatorInstance.Data;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  iVar1 = (this->ServiceConfigName).Data.ArrayNum;
  local_68 = (param_2->Data).AllocatorInstance.Data;
  iVar5 = 0;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = iVar5;
  }
  iVar1 = (param_2->Data).ArrayNum;
  iStack_60 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_60 = iVar5;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,3,0,&local_d8.AllocatorInstance,3,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x10) = local_78;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x18) = CONCAT44(uStack_6c,iStack_70);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x20) = local_68;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x28) = CONCAT44(uStack_5c,iStack_60);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FSchemaRegistryDescriptorConfig>'::__l2
  ::<lambda_1>::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 4;
  local_78 = (this->ServiceConfigName).Data.AllocatorInstance.Data;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  iVar1 = (this->ServiceConfigName).Data.ArrayNum;
  local_68 = (param_2->Data).AllocatorInstance.Data;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = iVar5;
  }
  iVar1 = (param_2->Data).ArrayNum;
  local_58 = (param_3->Data).AllocatorInstance.Data;
  iStack_60 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_60 = iVar5;
  }
  iVar1 = (param_3->Data).ArrayNum;
  iStack_50 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_50 = iVar5;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,4,0,&local_d8.AllocatorInstance,4,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x10) = local_78;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x18) = CONCAT44(uStack_6c,iStack_70);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x20) = local_68;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x28) = CONCAT44(uStack_5c,iStack_60);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x30) = local_58;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x38) = CONCAT44(uStack_4c,iStack_50);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FSchemaRegistryDescriptorConfig>'::__l2
  ::<lambda_1>::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 3;
  local_78 = (this->ServiceConfigName).Data.AllocatorInstance.Data;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  iVar1 = (this->ServiceConfigName).Data.ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = iVar5;
  }
  local_68 = local_b0.Data.AllocatorInstance.Data;
  iStack_60 = local_b0.Data.ArrayNum + -1;
  if (local_b0.Data.ArrayNum == 0) {
    iStack_60 = iVar6;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,3,0,&local_d8.AllocatorInstance,3,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x10) = local_78;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x18) = CONCAT44(uStack_6c,iStack_70);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x20) = local_68;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x28) = CONCAT44(uStack_5c,iStack_60);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FSchemaRegistryDescriptorConfig>'::__l2
  ::<lambda_1>::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 4;
  local_78 = (this->ServiceConfigName).Data.AllocatorInstance.Data;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  iVar1 = (this->ServiceConfigName).Data.ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = iVar5;
  }
  local_68 = local_b0.Data.AllocatorInstance.Data;
  local_58 = (param_2->Data).AllocatorInstance.Data;
  iStack_60 = local_b0.Data.ArrayNum + -1;
  if (local_b0.Data.ArrayNum == 0) {
    iStack_60 = iVar6;
  }
  iVar1 = (param_2->Data).ArrayNum;
  iStack_50 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_50 = iVar5;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,4,0,&local_d8.AllocatorInstance,4,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x10) = local_78;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x18) = CONCAT44(uStack_6c,iStack_70);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x20) = local_68;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x28) = CONCAT44(uStack_5c,iStack_60);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x30) = local_58;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x38) = CONCAT44(uStack_4c,iStack_50);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FSchemaRegistryDescriptorConfig>'::__l2
  ::<lambda_1>::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 5;
  local_78 = (this->ServiceConfigName).Data.AllocatorInstance.Data;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  iVar1 = (this->ServiceConfigName).Data.ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_68 = local_b0.Data.AllocatorInstance.Data;
  local_58 = (param_2->Data).AllocatorInstance.Data;
  iStack_60 = local_b0.Data.ArrayNum + -1;
  if (local_b0.Data.ArrayNum == 0) {
    iStack_60 = iVar6;
  }
  iVar6 = (param_2->Data).ArrayNum;
  local_48 = (param_3->Data).AllocatorInstance.Data;
  iStack_50 = iVar6 + -1;
  if (iVar6 == 0) {
    iStack_50 = 0;
  }
  iVar6 = (param_3->Data).ArrayNum;
  iStack_40 = iVar6 + -1;
  if (iVar6 == 0) {
    iStack_40 = iVar4;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,5,0,&local_d8.AllocatorInstance,5,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x10) = local_78;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x18) = CONCAT44(uStack_6c,iStack_70);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x20) = local_68;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x28) = CONCAT44(uStack_5c,iStack_60);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x30) = local_58;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x38) = CONCAT44(uStack_4c,iStack_50);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x40) = local_48;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x48) = CONCAT44(uStack_3c,iStack_40);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FSchemaRegistryDescriptorConfig>'::__l2
  ::<lambda_1>::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  pTVar3 = GetConfigSectionHeirarchyWithOverrides
                     (this,(TArray<FString,TSizedDefaultAllocator<32>_> *)&local_d8,&local_a0);
  bVar2 = Online::LoadConfig<UE::Online::FSchemaRegistryDescriptorConfig>
                    ((this->ConfigProvider).Ptr,pTVar3,param_1);
  DestructItems<FString,int>((FString *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_a0.AllocatorInstance.Data,local_a0.ArrayNum);
  if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.AllocatorInstance.Data);
  }
  return bVar2;
}

// FOnlineServicesCommon @ 14ee0dfe0

FOnlineServicesCommon * __thiscall
UE::Online::FOnlineServicesCommon::FOnlineServicesCommon
          (FOnlineServicesCommon *this,FString *param_1,FName param_2,FName param_3)

{
  IOnlineConfigProvider *pIVar1;
  FOnlineAsyncOpQueueParallel *pFVar2;
  ForAnyElementType _Src;
  int iVar3;
  uint uVar4;
  FTSTicker *pFVar5;
  IOnlineConfigProvider *pIVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined ***)this = &___7IOnlineServices_Online_UE__6B_;
  pFVar5 = FTSTicker::GetCoreTicker();
  FTSTickerObjectBase::FTSTickerObjectBase((FTSTickerObjectBase *)&this->field_0x18,0.0,pFVar5);
  FSelfRegisteringExec::FSelfRegisteringExec((FSelfRegisteringExec *)&this->field_0x30);
  *(undefined8 *)this = 0x15309c788;
  (this->OpCache).Services = this;
  *(undefined8 *)&(this->OpCache).LoadConfigFn = 0;
  *(undefined8 *)&(this->OpCache).LoadConfigFn.field_0x28 = 0;
  *(undefined8 *)&(this->OpCache).Operations = 0;
  *(undefined8 *)&(this->OpCache).Operations.field_0x8 = 0;
  *(undefined8 *)&(this->OpCache).Operations.field_0x20 = 0;
  *(undefined ***)&this->field_0x18 = &_vftable__for__FTSTickerObjectBase__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__FSelfRegisteringExec__;
  *(undefined4 *)&(this->OpCache).Operations.field_0x28 = 0;
  *(undefined4 *)&(this->OpCache).Operations.field_0x2c = 0x80;
  *(undefined4 *)&(this->OpCache).Operations.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OpCache).Operations.field_0x34 = 0;
  *(undefined8 *)&(this->OpCache).Operations.field_0x40 = 0;
  *(undefined4 *)&(this->OpCache).Operations.field_0x48 = 0;
  *(undefined8 *)&(this->OpCache).UserOperations = 0;
  *(undefined8 *)&(this->OpCache).UserOperations.field_0x8 = 0;
  *(undefined8 *)&(this->OpCache).UserOperations.field_0x20 = 0;
  *(undefined4 *)&(this->OpCache).UserOperations.field_0x28 = 0;
  *(undefined4 *)&(this->OpCache).UserOperations.field_0x2c = 0x80;
  *(undefined4 *)&(this->OpCache).UserOperations.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OpCache).UserOperations.field_0x34 = 0;
  *(undefined8 *)&(this->OpCache).UserOperations.field_0x40 = 0;
  *(undefined4 *)&(this->OpCache).UserOperations.field_0x48 = 0;
  (this->OpCache).IndependentOperations.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OpCache).IndependentOperations.ArrayNum = 0;
  (this->OpCache).IndependentOperations.ArrayMax = 0;
  *(undefined8 *)&this->ExecCommands = 0;
  *(undefined8 *)&(this->ExecCommands).field_0x8 = 0;
  *(undefined8 *)&(this->ExecCommands).field_0x20 = 0;
  *(undefined4 *)&(this->ExecCommands).field_0x28 = 0;
  *(undefined4 *)&(this->ExecCommands).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExecCommands).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExecCommands).field_0x34 = 0;
  *(undefined8 *)&(this->ExecCommands).field_0x40 = 0;
  *(undefined4 *)&(this->ExecCommands).field_0x48 = 0;
  uVar4 = NextInstanceIndex + 1;
  this->InstanceIndex = NextInstanceIndex;
  NextInstanceIndex = uVar4;
  this->InstanceName = param_2;
  this->InstanceConfigName = param_3;
  (this->Components).Components.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Components).Components.ArrayNum = 0;
  (this->Components).Components.ArrayMax = 0;
  pIVar6 = ::operator_new(0x18);
  if (pIVar6 == (IOnlineConfigProvider *)0x0) {
    pIVar6 = (IOnlineConfigProvider *)0x0;
  }
  else {
    pIVar1 = pIVar6 + 1;
    *pIVar1 = (IOnlineConfigProvider)0x0;
    *pIVar6 = (IOnlineConfigProvider)0x15309c760;
    iVar3 = GEngineIni.Data.ArrayNum;
    _Src = GEngineIni.Data.AllocatorInstance;
    lVar8 = (longlong)GEngineIni.Data.ArrayNum;
    *(int *)(pIVar6 + 2) = GEngineIni.Data.ArrayNum;
    if (iVar3 == 0) {
      *(undefined4 *)&pIVar6[2].field_0x4 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar3,0,(ForAnyElementType *)pIVar1,iVar3,(int *)&pIVar6[2].field_0x4);
      memcpy(*(FScriptContainerElement **)pIVar1,_Src.Data,lVar8 * 2);
    }
  }
  (this->ConfigProvider).Ptr = pIVar6;
  (this->ConfigSectionOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConfigSectionOverrides).ArrayNum = 0;
  (this->ConfigSectionOverrides).ArrayMax = 0;
  ::FString::FString(&this->ServiceConfigName,param_1);
  pFVar2 = &this->ParallelQueue;
  pFVar2->_padding_ = 0x15309c5d8;
  *(undefined1 *)&(this->ParallelQueue)._padding_ = 0;
  puVar7 = FMemory::Malloc(0x18,8);
  *puVar7 = 0;
  (this->ParallelQueue)._padding_ = (longlong)puVar7;
  (this->ParallelQueue)._padding_ = (longlong)puVar7;
  (this->ParallelQueue)._padding_ = (longlong)puVar7;
  (this->ParallelQueue)._padding_ = (longlong)puVar7;
  pFVar2->_padding_ = 0x15309c5e8;
  (this->ParallelQueue).InFlightOperations.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParallelQueue).InFlightOperations.ArrayNum = 0;
  (this->ParallelQueue).InFlightOperations.ArrayMax = 0;
  (this->ParallelQueue).MaxConcurrentOperations = 0x10;
  FOnlineAsyncOpQueueSerial::FOnlineAsyncOpQueueSerial(&this->SerialQueue,pFVar2);
  *(undefined8 *)&this->PerUserSerialQueue = 0;
  *(undefined8 *)&(this->PerUserSerialQueue).field_0x8 = 0;
  *(undefined8 *)&(this->PerUserSerialQueue).field_0x20 = 0;
  *(undefined4 *)&(this->PerUserSerialQueue).field_0x28 = 0;
  *(undefined4 *)&(this->PerUserSerialQueue).field_0x2c = 0x80;
  *(undefined4 *)&(this->PerUserSerialQueue).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PerUserSerialQueue).field_0x34 = 0;
  *(undefined8 *)&(this->PerUserSerialQueue).field_0x40 = 0;
  *(undefined4 *)&(this->PerUserSerialQueue).field_0x48 = 0;
  this->bPreShutdownComplete = false;
  return this;
}

// ~FOnlineServicesCommon @ 14ee25010

void __thiscall
UE::Online::FOnlineServicesCommon::~FOnlineServicesCommon(FOnlineServicesCommon *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  IOnlineConfigProvider *pIVar6;
  longlong *plVar7;
  
  *(undefined8 *)this = 0x15309c788;
  *(undefined ***)&this->field_0x18 = &_vftable__for__FTSTickerObjectBase__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__FSelfRegisteringExec__;
  *(undefined4 *)&(this->PerUserSerialQueue).field_0x48 = 0;
  pvVar3 = *(void **)&(this->PerUserSerialQueue).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PerUserSerialQueue);
  FOnlineEventDelegateHandle::Unbind(&(this->SerialQueue).ContinuationDelegateHandle);
  if (*(longlong *)&(this->SerialQueue).ContinuationDelegateHandle.DelegateUnbinder != 0) {
    plVar4 = *(longlong **)
              &(this->SerialQueue).ContinuationDelegateHandle.DelegateUnbinder.field_0x28;
    plVar7 = (longlong *)&(this->SerialQueue).ContinuationDelegateHandle.DelegateUnbinder.field_0x10
    ;
    if (plVar4 != (longlong *)0x0) {
      plVar7 = plVar4;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SerialQueue).InFlightOperation.SharedReferenceCount.ReferenceController);
  FOnlineAsyncOpQueue::~FOnlineAsyncOpQueue((FOnlineAsyncOpQueue *)&this->SerialQueue);
  DestructItems<TTuple<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,UE::Online::FOnlineEventDelegateHandle>,int>
            ((TTuple<TSharedRef<UE::Online::FOnlineAsyncOpQueue::IWrappedOp,1>,UE::Online::FOnlineEventDelegateHandle>
              *)(this->ParallelQueue).InFlightOperations.AllocatorInstance.Data,
             (this->ParallelQueue).InFlightOperations.ArrayNum);
  pFVar5 = (this->ParallelQueue).InFlightOperations.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  FOnlineAsyncOpQueue::~FOnlineAsyncOpQueue((FOnlineAsyncOpQueue *)&this->ParallelQueue);
  pFVar5 = (this->ServiceConfigName).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  DestructItems<FString,int>
            ((FString *)(this->ConfigSectionOverrides).AllocatorInstance.Data,
             (this->ConfigSectionOverrides).ArrayNum);
  pFVar5 = (this->ConfigSectionOverrides).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pIVar6 = (this->ConfigProvider).Ptr;
  if (pIVar6 != (IOnlineConfigProvider *)0x0) {
    (**(code **)*pIVar6)(pIVar6,1);
  }
  DestructItems<TUniquePtr<UE::Online::FOnlineComponentRegistry::IComponentWrapper,TDefaultDelete<UE::Online::FOnlineComponentRegistry::IComponentWrapper>_>,int>
            ((TUniquePtr<UE::Online::FOnlineComponentRegistry::IComponentWrapper,TDefaultDelete<UE::Online::FOnlineComponentRegistry::IComponentWrapper>_>
              *)(this->Components).Components.AllocatorInstance.Data,
             (this->Components).Components.ArrayNum);
  pFVar5 = (this->Components).Components.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  *(undefined4 *)&(this->ExecCommands).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ExecCommands).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExecCommands);
  FOnlineAsyncOpCache::~FOnlineAsyncOpCache(&this->OpCache);
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)&this->field_0x30);
  FTSTickerObjectBase::~FTSTickerObjectBase((FTSTickerObjectBase *)&this->field_0x18);
  *(undefined ***)this = &___7IOnlineServices_Online_UE__6B_;
  plVar4 = *(longlong **)&this->field_0x10;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  return;
}

// operator() @ 14ee294a0

/* WARNING: Removing unreachable block (ram,0x00014ee295c3) */

void __thiscall
`UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FAchievementsCommonConfig>'::__l2::
<lambda_1>::operator()
          (void *this,TArray<TStringView<wchar_t>_const_,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res10 [8];
  FString local_38;
  
  iVar4 = param_1->ArrayNum;
  pFVar5 = (param_1->AllocatorInstance).Data;
  pFVar6 = pFVar5 + (longlong)iVar4 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar4) {
      `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar5 == pFVar6) break;
    if (*(int *)(pFVar5 + 8) == 0) {
      return;
    }
    pFVar5 = pFVar5 + 0x10;
  }
  pFVar5 = (param_1->AllocatorInstance).Data;
  bVar3 = true;
  pFVar2 = *(ForAnyElementType **)this;
  iVar4 = param_1->ArrayNum;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar6 = pFVar5 + (longlong)iVar4 * 0x10;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  while( true ) {
    if (param_1->ArrayNum != iVar4) {
      `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar5 == pFVar6) break;
    if (bVar3) {
      bVar3 = false;
    }
    else {
      ::FString::AppendChars(&local_38,L".",1);
    }
    ::FString::AppendChars(&local_38,*(wchar_t **)pFVar5,(int)*(undefined8 *)(pFVar5 + 8));
    pFVar5 = pFVar5 + 0x10;
  }
  iVar4 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar4 + 1;
  pFVar5 = pFVar2->Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_38.Data.AllocatorInstance.Data;
  *(int *)(pFVar5 + 8) = local_38.Data.ArrayNum;
  *(int *)(pFVar5 + 0xc) = local_38.Data.ArrayMax;
  return;
}

// operator() @ 14ee295e0

/* WARNING: Removing unreachable block (ram,0x00014ee29703) */

void __thiscall
`UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FLeaderboardsCommonConfig>'::__l2::
<lambda_1>::operator()
          (void *this,TArray<TStringView<wchar_t>_const_,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res10 [8];
  FString local_38;
  
  iVar4 = param_1->ArrayNum;
  pFVar5 = (param_1->AllocatorInstance).Data;
  pFVar6 = pFVar5 + (longlong)iVar4 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar4) {
      `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar5 == pFVar6) break;
    if (*(int *)(pFVar5 + 8) == 0) {
      return;
    }
    pFVar5 = pFVar5 + 0x10;
  }
  pFVar5 = (param_1->AllocatorInstance).Data;
  bVar3 = true;
  pFVar2 = *(ForAnyElementType **)this;
  iVar4 = param_1->ArrayNum;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar6 = pFVar5 + (longlong)iVar4 * 0x10;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  while( true ) {
    if (param_1->ArrayNum != iVar4) {
      `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar5 == pFVar6) break;
    if (bVar3) {
      bVar3 = false;
    }
    else {
      ::FString::AppendChars(&local_38,L".",1);
    }
    ::FString::AppendChars(&local_38,*(wchar_t **)pFVar5,(int)*(undefined8 *)(pFVar5 + 8));
    pFVar5 = pFVar5 + 0x10;
  }
  iVar4 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar4 + 1;
  pFVar5 = pFVar2->Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_38.Data.AllocatorInstance.Data;
  *(int *)(pFVar5 + 8) = local_38.Data.ArrayNum;
  *(int *)(pFVar5 + 0xc) = local_38.Data.ArrayMax;
  return;
}

// operator() @ 14ee29720

/* WARNING: Removing unreachable block (ram,0x00014ee29843) */

void __thiscall
`UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FOnlineServicesCommonConfig>'::__l2::
<lambda_1>::operator()
          (void *this,TArray<TStringView<wchar_t>_const_,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res10 [8];
  FString local_38;
  
  iVar4 = param_1->ArrayNum;
  pFVar5 = (param_1->AllocatorInstance).Data;
  pFVar6 = pFVar5 + (longlong)iVar4 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar4) {
      `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar5 == pFVar6) break;
    if (*(int *)(pFVar5 + 8) == 0) {
      return;
    }
    pFVar5 = pFVar5 + 0x10;
  }
  pFVar5 = (param_1->AllocatorInstance).Data;
  bVar3 = true;
  pFVar2 = *(ForAnyElementType **)this;
  iVar4 = param_1->ArrayNum;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar6 = pFVar5 + (longlong)iVar4 * 0x10;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  while( true ) {
    if (param_1->ArrayNum != iVar4) {
      `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar5 == pFVar6) break;
    if (bVar3) {
      bVar3 = false;
    }
    else {
      ::FString::AppendChars(&local_38,L".",1);
    }
    ::FString::AppendChars(&local_38,*(wchar_t **)pFVar5,(int)*(undefined8 *)(pFVar5 + 8));
    pFVar5 = pFVar5 + 0x10;
  }
  iVar4 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar4 + 1;
  pFVar5 = pFVar2->Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_38.Data.AllocatorInstance.Data;
  *(int *)(pFVar5 + 8) = local_38.Data.ArrayNum;
  *(int *)(pFVar5 + 0xc) = local_38.Data.ArrayMax;
  return;
}

// operator() @ 14ee29860

/* WARNING: Removing unreachable block (ram,0x00014ee29983) */

void __thiscall
`UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FSchemaRegistryDescriptorConfig>'::__l2::
<lambda_1>::operator()
          (void *this,TArray<TStringView<wchar_t>_const_,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res10 [8];
  FString local_38;
  
  iVar4 = param_1->ArrayNum;
  pFVar5 = (param_1->AllocatorInstance).Data;
  pFVar6 = pFVar5 + (longlong)iVar4 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar4) {
      `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar5 == pFVar6) break;
    if (*(int *)(pFVar5 + 8) == 0) {
      return;
    }
    pFVar5 = pFVar5 + 0x10;
  }
  pFVar5 = (param_1->AllocatorInstance).Data;
  bVar3 = true;
  pFVar2 = *(ForAnyElementType **)this;
  iVar4 = param_1->ArrayNum;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar6 = pFVar5 + (longlong)iVar4 * 0x10;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  while( true ) {
    if (param_1->ArrayNum != iVar4) {
      `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar5 == pFVar6) break;
    if (bVar3) {
      bVar3 = false;
    }
    else {
      ::FString::AppendChars(&local_38,L".",1);
    }
    ::FString::AppendChars(&local_38,*(wchar_t **)pFVar5,(int)*(undefined8 *)(pFVar5 + 8));
    pFVar5 = pFVar5 + 0x10;
  }
  iVar4 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar4 + 1;
  pFVar5 = pFVar2->Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_38.Data.AllocatorInstance.Data;
  *(int *)(pFVar5 + 8) = local_38.Data.ArrayNum;
  *(int *)(pFVar5 + 0xc) = local_38.Data.ArrayMax;
  return;
}

// AssignBaseInterfaceSharedPtr @ 14ee5b330

void __thiscall
UE::Online::FOnlineServicesCommon::AssignBaseInterfaceSharedPtr
          (FOnlineServicesCommon *this,FOnlineTypeName *param_1,void *param_2)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar3 = (this->Components).Components.AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)(this->Components).Components.ArrayNum * 8;
  while( true ) {
    if (pFVar3 == pFVar1) {
      return;
    }
    cVar2 = (**(code **)(**(longlong **)pFVar3 + 0x18))(*(longlong **)pFVar3,param_1->Name);
    if (cVar2 != '\0') break;
    pFVar3 = pFVar3 + 8;
  }
  (**(code **)(**(longlong **)pFVar3 + 0x10))(*(longlong **)pFVar3,param_2);
  return;
}

// Destroy @ 14eeaba30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::Online::FOnlineServicesCommon::Destroy(FOnlineServicesCommon *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  double dVar7;
  bool bVar8;
  EOnlineServices EVar9;
  LARGE_INTEGER local_res8;
  FOnlineServicesCommonConfig local_98;
  FString local_88;
  FString local_78 [7];
  
  bVar8 = FOnlineAsyncOpCache::HasAnyRunningOperation(&this->OpCache);
  if (bVar8) {
    if (4 < (byte)LogOnlineServices._0_1_) {
      EVar9 = (**(code **)(*(longlong *)this + 0x98))(this);
      Online::LexToString(EVar9);
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    }
    local_98.MaxConcurrentOperations = 0x10;
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
    local_78[0].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78[0].Data.ArrayNum = 0;
    local_78[0].Data.ArrayMax = 0;
    local_98.SecondsToSleepForOutstandingOperations = 0.01;
    local_98.SecondsToFlushForOutstandingOperations = 0.0;
    LoadConfig<UE::Online::FOnlineServicesCommonConfig>(this,&local_98,local_78,&local_88);
    fVar6 = local_98.SecondsToSleepForOutstandingOperations;
    QueryPerformanceCounter(&local_res8);
    dVar5 = __real_4170000000000000;
    dVar3 = (double)local_98.SecondsToFlushForOutstandingOperations;
    dVar1 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    bVar8 = FOnlineAsyncOpCache::HasAnyRunningOperation(&this->OpCache);
    dVar7 = dVar1;
    dVar2 = dVar1;
    if (bVar8) {
      do {
        dVar4 = dVar7;
        if (dVar3 <= dVar4 - dVar1) break;
        (**(code **)(*(longlong *)this + 0xe8))(this,(float)(dVar4 - dVar2));
        FWindowsPlatformProcess::Sleep(fVar6);
        QueryPerformanceCounter(&local_res8);
        dVar2 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
        bVar8 = FOnlineAsyncOpCache::HasAnyRunningOperation(&this->OpCache);
        dVar7 = dVar2 + dVar5;
        dVar2 = dVar4;
      } while (bVar8);
    }
    bVar8 = FOnlineAsyncOpCache::HasAnyRunningOperation(&this->OpCache);
    if (bVar8) {
      if (2 < (byte)LogOnlineServices._0_1_) {
        EVar9 = (**(code **)(*(longlong *)this + 0x98))(this);
        Online::LexToString(EVar9);
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
      }
      FOnlineAsyncOpCache::ClearAllCallbacks(&this->OpCache);
      FOnlineAsyncOpCache::CancelAll(&this->OpCache);
    }
  }
  if (4 < (byte)LogOnlineServices._0_1_) {
    EVar9 = (**(code **)(*(longlong *)this + 0x98))(this);
    Online::LexToString(EVar9);
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  (**(code **)(*(longlong *)this + 0xd8))(this);
                    /* WARNING: Could not recover jumptable at 0x00014eeabc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0xe0))(this);
  return;
}

// Exec @ 14eec99c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UE::Online::FOnlineServicesCommon::Exec
          (FOnlineServicesCommon *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  bool bVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  FName *pFVar5;
  longlong lVar6;
  undefined8 *puVar7;
  wchar_t *pwVar8;
  wchar_t *local_res18;
  int local_68 [2];
  FString local_60;
  FString local_50;
  FString local_40;
  FString local_30;
  
  local_res18 = param_2;
  bVar1 = FParse::Command(&local_res18,L"OnlineServices",true);
  if (bVar1) {
    iVar4 = 0;
    local_68[0] = 0;
    bVar1 = FParse::Value(local_res18,L"Index=",local_68);
    if ((bVar1) && (local_68[0] == *(int *)&(this->ExecCommands).field_0x20)) {
      FParse::Token(&local_60,&local_res18,false);
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
      local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_50.Data.ArrayNum = 0;
      local_50.Data.ArrayMax = 0;
      bVar1 = FParse::Token(&local_res18,&local_50,false,L'\0');
      local_30.Data.AllocatorInstance.Data = local_50.Data.AllocatorInstance.Data;
      if (bVar1) {
        if (local_50.Data.ArrayNum == 0) {
          pwVar8 = L"";
        }
        else {
          iVar4 = local_50.Data.ArrayNum + -1;
          pwVar8 = (wchar_t *)local_50.Data.AllocatorInstance.Data;
        }
        uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar8);
        iVar4 = TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FString>
                          ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
                            *)&(this->OpCache).UserOperations.field_0x30,uVar3,&local_50);
        local_30.Data.AllocatorInstance.Data = local_50.Data.AllocatorInstance.Data;
        if (iVar4 != -1) {
          lVar6 = (longlong)iVar4 * 0x20 + *(longlong *)&(this->OpCache).UserOperations.field_0x30;
          puVar7 = (undefined8 *)(lVar6 + 0x10);
          if (lVar6 == 0) {
            puVar7 = (undefined8 *)0x0;
          }
          if (puVar7 != (undefined8 *)0x0) {
            uVar2 = (**(code **)(*(longlong *)*puVar7 + 8))
                              ((longlong *)*puVar7,param_1,local_res18,param_3);
            if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_50.Data.AllocatorInstance.Data);
              return (bool)uVar2;
            }
            return (bool)uVar2;
          }
        }
      }
    }
    else {
      bVar1 = FParse::Command(&local_res18,L"List",true);
      if (!bVar1) {
        return false;
      }
      pFVar5 = (FName *)(**(code **)(*(longlong *)&this[-1].PerUserSerialQueue.field_0x30 + 0xa8))
                                  (&this[-1].PerUserSerialQueue.field_0x30,&local_60);
      ::FName::ToString(pFVar5,&local_30);
      pFVar5 = (FName *)(**(code **)(*(longlong *)&this[-1].PerUserSerialQueue.field_0x30 + 0xa0))
                                  (&this[-1].PerUserSerialQueue.field_0x30,&local_50);
      ::FName::ToString(pFVar5,&local_40);
      FOutputDevice::LogfImpl
                (param_3,L"%u: ServiceConfigName=[%s] InstanceName=[%s] InstanceConfigName=[%s]");
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
    }
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// Flush @ 14eed5040

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Online::FOnlineServicesCommon::Flush(FOnlineServicesCommon *this,EAsyncOpFlushReason param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  double dVar7;
  EOnlineServices EVar8;
  bool bVar9;
  LARGE_INTEGER local_res8;
  FOnlineServicesCommonConfig local_98;
  FString local_88;
  FString local_78 [7];
  
  if (4 < (byte)LogOnlineServices._0_1_) {
    EVar8 = (**(code **)(*(longlong *)this + 0x98))();
    Online::LexToString(EVar8);
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  local_98.MaxConcurrentOperations = 0x10;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  local_78[0].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78[0].Data.ArrayNum = 0;
  local_78[0].Data.ArrayMax = 0;
  local_98.SecondsToSleepForOutstandingOperations = 0.01;
  local_98.SecondsToFlushForOutstandingOperations = 0.0;
  LoadConfig<UE::Online::FOnlineServicesCommonConfig>(this,&local_98,local_78,&local_88);
  fVar6 = local_98.SecondsToSleepForOutstandingOperations;
  QueryPerformanceCounter(&local_res8);
  dVar5 = __real_4170000000000000;
  dVar3 = (double)local_98.SecondsToFlushForOutstandingOperations;
  dVar1 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  bVar9 = FOnlineAsyncOpCache::HasAnyRunningOperation(&this->OpCache);
  dVar7 = dVar1;
  dVar2 = dVar1;
  if (bVar9) {
    do {
      dVar4 = dVar7;
      if (dVar3 <= dVar4 - dVar1) break;
      (**(code **)(*(longlong *)this + 0xe8))(this,(float)(dVar4 - dVar2));
      FWindowsPlatformProcess::Sleep(fVar6);
      QueryPerformanceCounter(&local_res8);
      dVar2 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
      bVar9 = FOnlineAsyncOpCache::HasAnyRunningOperation(&this->OpCache);
      dVar7 = dVar2 + dVar5;
      dVar2 = dVar4;
    } while (bVar9);
  }
  bVar9 = FOnlineAsyncOpCache::HasAnyRunningOperation(&this->OpCache);
  if (bVar9) {
    if (2 < (byte)LogOnlineServices._0_1_) {
      EVar8 = (**(code **)(*(longlong *)this + 0x98))(this);
      Online::LexToString(EVar8);
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    }
    if (param_1 == Shutdown) {
      FOnlineAsyncOpCache::ClearAllCallbacks(&this->OpCache);
    }
    FOnlineAsyncOpCache::CancelAll(&this->OpCache);
  }
  return;
}

// FlushTick @ 14eed5240

void __thiscall
UE::Online::FOnlineServicesCommon::FlushTick(FOnlineServicesCommon *this,float param_1)

{
  FTSTicker *this_00;
  FTaskGraphInterface *pFVar1;
  
  (**(code **)(*(longlong *)&this->field_0x18 + 8))(&this->field_0x18);
  this_00 = FTSTicker::GetCoreTicker();
  FTSTicker::Tick(this_00,param_1);
  pFVar1 = FTaskGraphInterface::Get();
                    /* WARNING: Could not recover jumptable at 0x00014eed5284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pFVar1 + 0x48))(pFVar1,1,*(code **)((longlong)*pFVar1 + 0x48));
  return;
}

// GetAchievementsInterface @ 14eed56f0

TSharedPtr<UE::Online::IAchievements,1> * __thiscall
UE::Online::FOnlineServicesCommon::GetAchievementsInterface
          (FOnlineServicesCommon *this,
          TSharedPtr<UE::Online::IAchievements,1> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  char cVar3;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar4;
  IAchievements *pIVar5;
  FScriptContainerElement *pFVar6;
  TSharedRef<UE::Online::IOnlineServices,1> local_18;
  
  pFVar6 = (this->Components).Components.AllocatorInstance.Data;
  pFVar1 = pFVar6 + (longlong)(this->Components).Components.ArrayNum * 8;
  do {
    if (pFVar6 == pFVar1) {
      pIVar5 = (IAchievements *)0x0;
LAB_14eed574f:
      pTVar4 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                         ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->field_0x8,
                          &local_18);
      __return_storage_ptr__->Object = pIVar5;
      pTVar2 = (pTVar4->SharedReferenceCount).ReferenceController;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
    cVar3 = (**(code **)(**(longlong **)pFVar6 + 0x18))
                      (*(longlong **)pFVar6,L"class UE::Online::IAchievements");
    if (cVar3 != '\0') {
      pIVar5 = (IAchievements *)(**(code **)(**(longlong **)pFVar6 + 8))();
      goto LAB_14eed574f;
    }
    pFVar6 = pFVar6 + 8;
  } while( true );
}

// GetAuthInterface @ 14eed7e60

TSharedPtr<UE::Online::IAuth,1> * __thiscall
UE::Online::FOnlineServicesCommon::GetAuthInterface
          (FOnlineServicesCommon *this,TSharedPtr<UE::Online::IAuth,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  IAuth *pIVar2;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar3;
  TSharedRef<UE::Online::IOnlineServices,1> local_18;
  
  pIVar2 = Get<UE::Online::IAuth>(this);
  pTVar3 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                     ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->field_0x8,&local_18);
  __return_storage_ptr__->Object = pIVar2;
  pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetCommerceInterface @ 14eed8fa0

TSharedPtr<UE::Online::ICommerce,1> * __thiscall
UE::Online::FOnlineServicesCommon::GetCommerceInterface
          (FOnlineServicesCommon *this,TSharedPtr<UE::Online::ICommerce,1> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  char cVar3;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar4;
  ICommerce *pIVar5;
  FScriptContainerElement *pFVar6;
  TSharedRef<UE::Online::IOnlineServices,1> local_18;
  
  pFVar6 = (this->Components).Components.AllocatorInstance.Data;
  pFVar1 = pFVar6 + (longlong)(this->Components).Components.ArrayNum * 8;
  do {
    if (pFVar6 == pFVar1) {
      pIVar5 = (ICommerce *)0x0;
LAB_14eed8fff:
      pTVar4 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                         ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->field_0x8,
                          &local_18);
      __return_storage_ptr__->Object = pIVar5;
      pTVar2 = (pTVar4->SharedReferenceCount).ReferenceController;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
    cVar3 = (**(code **)(**(longlong **)pFVar6 + 0x18))
                      (*(longlong **)pFVar6,L"class UE::Online::ICommerce");
    if (cVar3 != '\0') {
      pIVar5 = (ICommerce *)(**(code **)(**(longlong **)pFVar6 + 8))();
      goto LAB_14eed8fff;
    }
    pFVar6 = pFVar6 + 8;
  } while( true );
}

// GetConfigSectionHeirarchyWithOverrides @ 14eedbcd0

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UE::Online::FOnlineServicesCommon::GetConfigSectionHeirarchyWithOverrides
          (FOnlineServicesCommon *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  uint uVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  ForAnyElementType FVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> *local_res18;
  uint local_res20;
  FString local_a0;
  ForAnyElementType local_90;
  uint local_88;
  int local_84;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  uVar1 = (this->ConfigSectionOverrides).ArrayNum;
  pFVar13 = (this->ConfigSectionOverrides).AllocatorInstance.Data;
  local_90.Data = (FScriptContainerElement *)0x0;
  local_res18 = param_1;
  local_88 = uVar1;
  if (uVar1 == 0) {
    local_84 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar1,0,&local_90,uVar1,&local_84);
    ConstructItems<FString,FString,int>(local_90.Data,(FString *)pFVar13,uVar1);
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  uVar1 = param_1->ArrayNum;
  uVar6 = (ulonglong)(int)uVar1;
  pFVar13 = (param_1->AllocatorInstance).Data;
  pFVar9 = pFVar13 + uVar6 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != (int)uVar6) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar13 == pFVar9) break;
    pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar10 <= pFVar13) &&
       (pFVar13 < pFVar10 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar7;
      }
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    ::FString::FString((FString *)
                       ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                       (FString *)pFVar13);
    uVar6 = (ulonglong)(int)local_88;
    pFVar10 = local_90.Data + uVar6 * 0x10;
    local_res20 = local_88;
    FVar12.Data = local_90.Data;
    while( true ) {
      if (local_88 != (uint)uVar6) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (FVar12.Data == pFVar10) break;
      ::FString::ConcatFC(&local_70,(FString *)pFVar13,L" ");
      ::FString::ConcatFF(&local_a0,&local_70,(FString *)FVar12.Data);
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar11 <= (FScriptContainerElement *)&local_a0) &&
         ((FScriptContainerElement *)&local_a0 <
          pFVar11 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pTVar7 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar7;
        }
      }
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == __return_storage_ptr__->ArrayMax) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      FVar3.Data = local_a0.Data.AllocatorInstance.Data;
      pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      *(undefined8 *)&pFVar11->field_0x0 = 0;
      lVar8 = (longlong)local_a0.Data.ArrayNum;
      *(int *)&pFVar11[8].field_0x0 = local_a0.Data.ArrayNum;
      if (local_a0.Data.ArrayNum == 0) {
        *(int *)(pFVar11 + 0xc) = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_a0.Data.ArrayNum,0,(ForAnyElementType *)pFVar11,local_a0.Data.ArrayNum,
                   (int *)(pFVar11 + 0xc));
        memcpy(*(void **)&pFVar11->field_0x0,FVar3.Data,lVar8 * 2);
      }
      ::FString::ConcatFC(local_60,(FString *)pFVar13,L":");
      ::FString::ConcatFF(&local_80,local_60,(FString *)FVar12.Data);
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
      local_a0.Data.AllocatorInstance.Data = local_80.Data.AllocatorInstance.Data;
      local_a0.Data.ArrayNum = local_80.Data.ArrayNum;
      local_a0.Data.ArrayMax = local_80.Data.ArrayMax;
      local_80.Data.ArrayNum = 0;
      local_80.Data.ArrayMax = 0;
      local_80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
      }
      pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar11 <= (FScriptContainerElement *)&local_a0) &&
         ((FScriptContainerElement *)&local_a0 <
          pFVar11 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pTVar7 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar7;
        }
      }
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == __return_storage_ptr__->ArrayMax) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      FVar3.Data = local_a0.Data.AllocatorInstance.Data;
      pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      *(undefined8 *)&pFVar11->field_0x0 = 0;
      lVar8 = (longlong)local_a0.Data.ArrayNum;
      *(int *)&pFVar11[8].field_0x0 = local_a0.Data.ArrayNum;
      if (local_a0.Data.ArrayNum == 0) {
        *(int *)(pFVar11 + 0xc) = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_a0.Data.ArrayNum,0,(ForAnyElementType *)pFVar11,local_a0.Data.ArrayNum,
                   (int *)(pFVar11 + 0xc));
        memcpy(*(void **)&pFVar11->field_0x0,FVar3.Data,lVar8 * 2);
      }
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
      FVar12.Data = FVar12.Data + 0x10;
      uVar6 = (ulonglong)local_res20;
    }
    pFVar13 = pFVar13 + 0x10;
    uVar6 = (ulonglong)uVar1;
    param_1 = local_res18;
  }
  DestructItems<FString,int>((FString *)local_90.Data,local_88);
  if (local_90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data);
  }
  return __return_storage_ptr__;
}

// GetConnectivityInterface @ 14eedc150

TSharedPtr<UE::Online::IConnectivity,1> * __thiscall
UE::Online::FOnlineServicesCommon::GetConnectivityInterface
          (FOnlineServicesCommon *this,
          TSharedPtr<UE::Online::IConnectivity,1> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  char cVar3;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar4;
  IConnectivity *pIVar5;
  FScriptContainerElement *pFVar6;
  TSharedRef<UE::Online::IOnlineServices,1> local_18;
  
  pFVar6 = (this->Components).Components.AllocatorInstance.Data;
  pFVar1 = pFVar6 + (longlong)(this->Components).Components.ArrayNum * 8;
  do {
    if (pFVar6 == pFVar1) {
      pIVar5 = (IConnectivity *)0x0;
LAB_14eedc1af:
      pTVar4 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                         ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->field_0x8,
                          &local_18);
      __return_storage_ptr__->Object = pIVar5;
      pTVar2 = (pTVar4->SharedReferenceCount).ReferenceController;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
    cVar3 = (**(code **)(**(longlong **)pFVar6 + 0x18))
                      (*(longlong **)pFVar6,L"class UE::Online::IConnectivity");
    if (cVar3 != '\0') {
      pIVar5 = (IConnectivity *)(**(code **)(**(longlong **)pFVar6 + 8))();
      goto LAB_14eedc1af;
    }
    pFVar6 = pFVar6 + 8;
  } while( true );
}

// GetExternalUIInterface @ 14eedf210

TSharedPtr<UE::Online::IExternalUI,1> * __thiscall
UE::Online::FOnlineServicesCommon::GetExternalUIInterface
          (FOnlineServicesCommon *this,TSharedPtr<UE::Online::IExternalUI,1> *__return_storage_ptr__
          )

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  char cVar3;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar4;
  IExternalUI *pIVar5;
  FScriptContainerElement *pFVar6;
  TSharedRef<UE::Online::IOnlineServices,1> local_18;
  
  pFVar6 = (this->Components).Components.AllocatorInstance.Data;
  pFVar1 = pFVar6 + (longlong)(this->Components).Components.ArrayNum * 8;
  do {
    if (pFVar6 == pFVar1) {
      pIVar5 = (IExternalUI *)0x0;
LAB_14eedf26f:
      pTVar4 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                         ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->field_0x8,
                          &local_18);
      __return_storage_ptr__->Object = pIVar5;
      pTVar2 = (pTVar4->SharedReferenceCount).ReferenceController;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
    cVar3 = (**(code **)(**(longlong **)pFVar6 + 0x18))
                      (*(longlong **)pFVar6,L"class UE::Online::IExternalUI");
    if (cVar3 != '\0') {
      pIVar5 = (IExternalUI *)(**(code **)(**(longlong **)pFVar6 + 8))();
      goto LAB_14eedf26f;
    }
    pFVar6 = pFVar6 + 8;
  } while( true );
}

// GetInstanceConfigName @ 14eee0160

FName __thiscall
UE::Online::FOnlineServicesCommon::GetInstanceConfigName(FOnlineServicesCommon *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->InstanceConfigName;
  return in_RDX;
}

// GetInstanceName @ 14eee0180

FName __thiscall UE::Online::FOnlineServicesCommon::GetInstanceName(FOnlineServicesCommon *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->InstanceName;
  return in_RDX;
}

// GetLeaderboardsInterface @ 14eee0270

TSharedPtr<UE::Online::ILeaderboards,1> * __thiscall
UE::Online::FOnlineServicesCommon::GetLeaderboardsInterface
          (FOnlineServicesCommon *this,
          TSharedPtr<UE::Online::ILeaderboards,1> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  char cVar3;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar4;
  ILeaderboards *pIVar5;
  FScriptContainerElement *pFVar6;
  TSharedRef<UE::Online::IOnlineServices,1> local_18;
  
  pFVar6 = (this->Components).Components.AllocatorInstance.Data;
  pFVar1 = pFVar6 + (longlong)(this->Components).Components.ArrayNum * 8;
  do {
    if (pFVar6 == pFVar1) {
      pIVar5 = (ILeaderboards *)0x0;
LAB_14eee02cf:
      pTVar4 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                         ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->field_0x8,
                          &local_18);
      __return_storage_ptr__->Object = pIVar5;
      pTVar2 = (pTVar4->SharedReferenceCount).ReferenceController;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
    cVar3 = (**(code **)(**(longlong **)pFVar6 + 0x18))
                      (*(longlong **)pFVar6,L"class UE::Online::ILeaderboards");
    if (cVar3 != '\0') {
      pIVar5 = (ILeaderboards *)(**(code **)(**(longlong **)pFVar6 + 8))();
      goto LAB_14eee02cf;
    }
    pFVar6 = pFVar6 + 8;
  } while( true );
}

// GetLobbiesInterface @ 14eee03f0

TSharedPtr<UE::Online::ILobbies,1> * __thiscall
UE::Online::FOnlineServicesCommon::GetLobbiesInterface
          (FOnlineServicesCommon *this,TSharedPtr<UE::Online::ILobbies,1> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  char cVar3;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar4;
  ILobbies *pIVar5;
  FScriptContainerElement *pFVar6;
  TSharedRef<UE::Online::IOnlineServices,1> local_18;
  
  pFVar6 = (this->Components).Components.AllocatorInstance.Data;
  pFVar1 = pFVar6 + (longlong)(this->Components).Components.ArrayNum * 8;
  do {
    if (pFVar6 == pFVar1) {
      pIVar5 = (ILobbies *)0x0;
LAB_14eee044f:
      pTVar4 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                         ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->field_0x8,
                          &local_18);
      __return_storage_ptr__->Object = pIVar5;
      pTVar2 = (pTVar4->SharedReferenceCount).ReferenceController;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
    cVar3 = (**(code **)(**(longlong **)pFVar6 + 0x18))
                      (*(longlong **)pFVar6,L"class UE::Online::ILobbies");
    if (cVar3 != '\0') {
      pIVar5 = (ILobbies *)(**(code **)(**(longlong **)pFVar6 + 8))();
      goto LAB_14eee044f;
    }
    pFVar6 = pFVar6 + 8;
  } while( true );
}

// GetParallelQueue @ 14eee2fe0

FOnlineAsyncOpQueueParallel * __thiscall
UE::Online::FOnlineServicesCommon::GetParallelQueue(FOnlineServicesCommon *this)

{
  return &this->ParallelQueue;
}

// GetPresenceInterface @ 14eee2ff0

TSharedPtr<UE::Online::IPresence,1> * __thiscall
UE::Online::FOnlineServicesCommon::GetPresenceInterface
          (FOnlineServicesCommon *this,TSharedPtr<UE::Online::IPresence,1> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  char cVar3;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar4;
  IPresence *pIVar5;
  FScriptContainerElement *pFVar6;
  TSharedRef<UE::Online::IOnlineServices,1> local_18;
  
  pFVar6 = (this->Components).Components.AllocatorInstance.Data;
  pFVar1 = pFVar6 + (longlong)(this->Components).Components.ArrayNum * 8;
  do {
    if (pFVar6 == pFVar1) {
      pIVar5 = (IPresence *)0x0;
LAB_14eee304f:
      pTVar4 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                         ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->field_0x8,
                          &local_18);
      __return_storage_ptr__->Object = pIVar5;
      pTVar2 = (pTVar4->SharedReferenceCount).ReferenceController;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
    cVar3 = (**(code **)(**(longlong **)pFVar6 + 0x18))
                      (*(longlong **)pFVar6,L"class UE::Online::IPresence");
    if (cVar3 != '\0') {
      pIVar5 = (IPresence *)(**(code **)(**(longlong **)pFVar6 + 8))();
      goto LAB_14eee304f;
    }
    pFVar6 = pFVar6 + 8;
  } while( true );
}

// GetPrivilegesInterface @ 14eee3dc0

TSharedPtr<UE::Online::IPrivileges,1> * __thiscall
UE::Online::FOnlineServicesCommon::GetPrivilegesInterface
          (FOnlineServicesCommon *this,TSharedPtr<UE::Online::IPrivileges,1> *__return_storage_ptr__
          )

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  char cVar3;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar4;
  IPrivileges *pIVar5;
  FScriptContainerElement *pFVar6;
  TSharedRef<UE::Online::IOnlineServices,1> local_18;
  
  pFVar6 = (this->Components).Components.AllocatorInstance.Data;
  pFVar1 = pFVar6 + (longlong)(this->Components).Components.ArrayNum * 8;
  do {
    if (pFVar6 == pFVar1) {
      pIVar5 = (IPrivileges *)0x0;
LAB_14eee3e1f:
      pTVar4 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                         ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->field_0x8,
                          &local_18);
      __return_storage_ptr__->Object = pIVar5;
      pTVar2 = (pTVar4->SharedReferenceCount).ReferenceController;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
    cVar3 = (**(code **)(**(longlong **)pFVar6 + 0x18))
                      (*(longlong **)pFVar6,L"class UE::Online::IPrivileges");
    if (cVar3 != '\0') {
      pIVar5 = (IPrivileges *)(**(code **)(**(longlong **)pFVar6 + 8))();
      goto LAB_14eee3e1f;
    }
    pFVar6 = pFVar6 + 8;
  } while( true );
}

// GetResolvedConnectString @ 14eee4330

TOnlineResult<UE::Online::FGetResolvedConnectString> * __thiscall
UE::Online::FOnlineServicesCommon::GetResolvedConnectString
          (FOnlineServicesCommon *this,
          TOnlineResult<UE::Online::FGetResolvedConnectString> *__return_storage_ptr__,
          Params *param_1)

{
  FOnlineError *pFVar1;
  FOnlineError *pFVar2;
  FOnlineError local_68;
  TOptional<UE::Online::FOnlineError> local_40;
  
  local_40.bIsSet = false;
  pFVar2 = Errors::NotImplemented(&local_68,&local_40);
  *(undefined ***)__return_storage_ptr__ =
       &___7__TResult_UResult_FGetResolvedConnectString_Online_UE__VFOnlineError_34__Online_UE__6B_;
  *(IOnlineErrorDetails **)&__return_storage_ptr__->field_0x8 = (pFVar2->Details).Object;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 =
       (pFVar2->Details).SharedReferenceCount.ReferenceController;
  pFVar1 = (pFVar2->Inner).Object;
  (pFVar2->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar2->Details).Object = (IOnlineErrorDetails *)0x0;
  *(FOnlineError **)&__return_storage_ptr__->field_0x18 = pFVar1;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x20 =
       (pFVar2->Inner).SharedReferenceCount.ReferenceController;
  (pFVar2->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar2->Inner).Object = (FOnlineError *)0x0;
  *(ulong64 *)&__return_storage_ptr__->field_0x28 = pFVar2->ErrorCode;
  *(undefined ***)__return_storage_ptr__ =
       &___7__TOnlineResult_UFGetResolvedConnectString_Online_UE___Online_UE__6B_;
  __return_storage_ptr__->field_0x30 = 1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.Details.SharedReferenceCount.ReferenceController);
  if (local_40.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// GetSerialQueue @ 14eee4400

FOnlineAsyncOpQueue * __thiscall
UE::Online::FOnlineServicesCommon::GetSerialQueue
          (FOnlineServicesCommon *this,TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *param_1)

{
  TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>,0>_>
  *this_00;
  longlong lVar1;
  uint uVar2;
  int iVar3;
  FOnlineAsyncOpQueueSerial *pFVar4;
  FOnlineAsyncOpQueueSerial *pFVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  TPairInitializer<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_const_&,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_&&>
  local_res8;
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *local_28;
  TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>
  **local_20;
  
  uVar2 = param_1->Value;
  this_00 = &this->PerUserSerialQueue;
  uVar9 = uVar2 & 0xffffff;
  uVar8 = (uVar2 >> 0x18) - uVar9 ^ uVar9 >> 0xd;
  uVar6 = (-0x61c88647 - uVar8) - uVar9 ^ uVar8 << 8;
  pFVar5 = (FOnlineAsyncOpQueueSerial *)0x0;
  uVar9 = (uVar9 - uVar6) - uVar8 ^ uVar6 >> 0xd;
  uVar8 = (uVar8 - uVar9) - uVar6 ^ uVar9 >> 0xc;
  uVar6 = (uVar6 - uVar8) - uVar9 ^ uVar8 << 0x10;
  uVar9 = (uVar9 - uVar6) - uVar8 ^ uVar6 >> 5;
  uVar8 = (uVar8 - uVar9) - uVar6 ^ uVar9 >> 3;
  uVar6 = (uVar6 - uVar8) - uVar9 ^ uVar8 << 10;
  if (*(int *)&(this->PerUserSerialQueue).field_0x8 !=
      *(int *)&(this->PerUserSerialQueue).field_0x34) {
    puVar7 = *(undefined1 **)&(this->PerUserSerialQueue).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->PerUserSerialQueue).field_0x38;
    }
    iVar3 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->PerUserSerialQueue).field_0x48 - 1U &
                              ((uVar9 - uVar6) - uVar8 ^ uVar6 >> 0xf)) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *(longlong *)&this_00->field_0x0 + (longlong)iVar3 * 0x18;
        if (*(uint *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar3 * 0x18) == uVar2) {
          pFVar4 = (FOnlineAsyncOpQueueSerial *)(lVar1 + 8);
          if (lVar1 == 0) {
            pFVar4 = pFVar5;
          }
          if (pFVar4 != (FOnlineAsyncOpQueueSerial *)0x0) {
            return (FOnlineAsyncOpQueue *)pFVar4->_padding_;
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  pFVar4 = ::operator_new(0x80);
  if (pFVar4 != (FOnlineAsyncOpQueueSerial *)0x0) {
    pFVar5 = FOnlineAsyncOpQueueSerial::FOnlineAsyncOpQueueSerial(pFVar4,&this->ParallelQueue);
  }
  local_20 = &local_res8.Value;
  local_res8.Value =
       (TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>
        *)pFVar5;
  local_28 = param_1;
  TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_const_&,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_&&>_>
            ((TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>,0>,FDefaultSetAllocator>
              *)this_00,&local_res8,(bool *)&local_28);
  lVar1 = *(longlong *)&this_00->field_0x0;
  if ((FOnlineAsyncOpQueueSerial *)local_res8.Value != (FOnlineAsyncOpQueueSerial *)0x0) {
    (**(code **)(local_res8.Value)->Ptr)(local_res8.Value,1);
  }
  return *(FOnlineAsyncOpQueue **)(lVar1 + (longlong)(int)local_res8.Key * 0x18 + 8);
}

// GetSerialQueue @ 14eee45b0

FOnlineAsyncOpQueue * __thiscall
UE::Online::FOnlineServicesCommon::GetSerialQueue(FOnlineServicesCommon *this)

{
  return (FOnlineAsyncOpQueue *)&this->SerialQueue;
}

// GetSessionsInterface @ 14eee5300

TSharedPtr<UE::Online::ISessions,1> * __thiscall
UE::Online::FOnlineServicesCommon::GetSessionsInterface
          (FOnlineServicesCommon *this,TSharedPtr<UE::Online::ISessions,1> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  char cVar3;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar4;
  ISessions *pIVar5;
  FScriptContainerElement *pFVar6;
  TSharedRef<UE::Online::IOnlineServices,1> local_18;
  
  pFVar6 = (this->Components).Components.AllocatorInstance.Data;
  pFVar1 = pFVar6 + (longlong)(this->Components).Components.ArrayNum * 8;
  do {
    if (pFVar6 == pFVar1) {
      pIVar5 = (ISessions *)0x0;
LAB_14eee535f:
      pTVar4 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                         ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->field_0x8,
                          &local_18);
      __return_storage_ptr__->Object = pIVar5;
      pTVar2 = (pTVar4->SharedReferenceCount).ReferenceController;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
    cVar3 = (**(code **)(**(longlong **)pFVar6 + 0x18))
                      (*(longlong **)pFVar6,L"class UE::Online::ISessions");
    if (cVar3 != '\0') {
      pIVar5 = (ISessions *)(**(code **)(**(longlong **)pFVar6 + 8))();
      goto LAB_14eee535f;
    }
    pFVar6 = pFVar6 + 8;
  } while( true );
}

// GetSocialInterface @ 14eee5420

TSharedPtr<UE::Online::ISocial,1> * __thiscall
UE::Online::FOnlineServicesCommon::GetSocialInterface
          (FOnlineServicesCommon *this,TSharedPtr<UE::Online::ISocial,1> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  char cVar3;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar4;
  ISocial *pIVar5;
  FScriptContainerElement *pFVar6;
  TSharedRef<UE::Online::IOnlineServices,1> local_18;
  
  pFVar6 = (this->Components).Components.AllocatorInstance.Data;
  pFVar1 = pFVar6 + (longlong)(this->Components).Components.ArrayNum * 8;
  do {
    if (pFVar6 == pFVar1) {
      pIVar5 = (ISocial *)0x0;
LAB_14eee547f:
      pTVar4 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                         ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->field_0x8,
                          &local_18);
      __return_storage_ptr__->Object = pIVar5;
      pTVar2 = (pTVar4->SharedReferenceCount).ReferenceController;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
    cVar3 = (**(code **)(**(longlong **)pFVar6 + 0x18))
                      (*(longlong **)pFVar6,L"class UE::Online::ISocial");
    if (cVar3 != '\0') {
      pIVar5 = (ISocial *)(**(code **)(**(longlong **)pFVar6 + 8))();
      goto LAB_14eee547f;
    }
    pFVar6 = pFVar6 + 8;
  } while( true );
}

// GetStatsInterface @ 14eee5c00

TSharedPtr<UE::Online::IStats,1> * __thiscall
UE::Online::FOnlineServicesCommon::GetStatsInterface
          (FOnlineServicesCommon *this,TSharedPtr<UE::Online::IStats,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  IStats *pIVar2;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar3;
  TSharedRef<UE::Online::IOnlineServices,1> local_18;
  
  pIVar2 = Get<UE::Online::IStats>(this);
  pTVar3 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                     ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->field_0x8,&local_18);
  __return_storage_ptr__->Object = pIVar2;
  pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetTitleFileInterface @ 14eee5c70

TSharedPtr<UE::Online::ITitleFile,1> * __thiscall
UE::Online::FOnlineServicesCommon::GetTitleFileInterface
          (FOnlineServicesCommon *this,TSharedPtr<UE::Online::ITitleFile,1> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  char cVar3;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar4;
  ITitleFile *pIVar5;
  FScriptContainerElement *pFVar6;
  TSharedRef<UE::Online::IOnlineServices,1> local_18;
  
  pFVar6 = (this->Components).Components.AllocatorInstance.Data;
  pFVar1 = pFVar6 + (longlong)(this->Components).Components.ArrayNum * 8;
  do {
    if (pFVar6 == pFVar1) {
      pIVar5 = (ITitleFile *)0x0;
LAB_14eee5ccf:
      pTVar4 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                         ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->field_0x8,
                          &local_18);
      __return_storage_ptr__->Object = pIVar5;
      pTVar2 = (pTVar4->SharedReferenceCount).ReferenceController;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
    cVar3 = (**(code **)(**(longlong **)pFVar6 + 0x18))
                      (*(longlong **)pFVar6,L"class UE::Online::ITitleFile");
    if (cVar3 != '\0') {
      pIVar5 = (ITitleFile *)(**(code **)(**(longlong **)pFVar6 + 8))();
      goto LAB_14eee5ccf;
    }
    pFVar6 = pFVar6 + 8;
  } while( true );
}

// GetUserFileInterface @ 14eee75f0

TSharedPtr<UE::Online::IUserFile,1> * __thiscall
UE::Online::FOnlineServicesCommon::GetUserFileInterface
          (FOnlineServicesCommon *this,TSharedPtr<UE::Online::IUserFile,1> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  char cVar3;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar4;
  IUserFile *pIVar5;
  FScriptContainerElement *pFVar6;
  TSharedRef<UE::Online::IOnlineServices,1> local_18;
  
  pFVar6 = (this->Components).Components.AllocatorInstance.Data;
  pFVar1 = pFVar6 + (longlong)(this->Components).Components.ArrayNum * 8;
  do {
    if (pFVar6 == pFVar1) {
      pIVar5 = (IUserFile *)0x0;
LAB_14eee764f:
      pTVar4 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                         ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->field_0x8,
                          &local_18);
      __return_storage_ptr__->Object = pIVar5;
      pTVar2 = (pTVar4->SharedReferenceCount).ReferenceController;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
    cVar3 = (**(code **)(**(longlong **)pFVar6 + 0x18))
                      (*(longlong **)pFVar6,L"class UE::Online::IUserFile");
    if (cVar3 != '\0') {
      pIVar5 = (IUserFile *)(**(code **)(**(longlong **)pFVar6 + 8))();
      goto LAB_14eee764f;
    }
    pFVar6 = pFVar6 + 8;
  } while( true );
}

// GetUserInfoInterface @ 14eee76b0

TSharedPtr<UE::Online::IUserInfo,1> * __thiscall
UE::Online::FOnlineServicesCommon::GetUserInfoInterface
          (FOnlineServicesCommon *this,TSharedPtr<UE::Online::IUserInfo,1> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  char cVar3;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar4;
  IUserInfo *pIVar5;
  FScriptContainerElement *pFVar6;
  TSharedRef<UE::Online::IOnlineServices,1> local_18;
  
  pFVar6 = (this->Components).Components.AllocatorInstance.Data;
  pFVar1 = pFVar6 + (longlong)(this->Components).Components.ArrayNum * 8;
  do {
    if (pFVar6 == pFVar1) {
      pIVar5 = (IUserInfo *)0x0;
LAB_14eee770f:
      pTVar4 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                         ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&this->field_0x8,
                          &local_18);
      __return_storage_ptr__->Object = pIVar5;
      pTVar2 = (pTVar4->SharedReferenceCount).ReferenceController;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
    cVar3 = (**(code **)(**(longlong **)pFVar6 + 0x18))
                      (*(longlong **)pFVar6,L"class UE::Online::IUserInfo");
    if (cVar3 != '\0') {
      pIVar5 = (IUserInfo *)(**(code **)(**(longlong **)pFVar6 + 8))();
      goto LAB_14eee770f;
    }
    pFVar6 = pFVar6 + 8;
  } while( true );
}

// Init @ 14eeed0d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::Online::FOnlineServicesCommon::Init(FOnlineServicesCommon *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  EOnlineServices EVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_48 = *(longlong *)&(this->OpCache).LoadConfigFn;
  uVar2 = *(undefined8 *)&(this->OpCache).LoadConfigFn.field_0x8;
  local_38 = *(longlong *)&(this->OpCache).LoadConfigFn.field_0x10;
  uStack_30 = *(undefined8 *)&(this->OpCache).LoadConfigFn.field_0x18;
  uVar1 = *(undefined8 *)&(this->OpCache).LoadConfigFn.field_0x20;
  plStack_20 = *(longlong **)&(this->OpCache).LoadConfigFn.field_0x28;
  *(code **)&(this->OpCache).LoadConfigFn =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Online::FOnlineServicesCommon::Init'::__l2::<lambda_1>,bool,UE::Online::FOperationConfig_&,TArray<FString,TSizedDefaultAllocator<32>_>_const_&>
       ::Call;
  *(undefined8 *)&(this->OpCache).LoadConfigFn.field_0x8 = uStack_40;
  *(undefined4 *)&(this->OpCache).LoadConfigFn.field_0x10 = 0x530a8b70;
  *(undefined4 *)&(this->OpCache).LoadConfigFn.field_0x14 = 1;
  *(FOnlineServicesCommon **)&(this->OpCache).LoadConfigFn.field_0x18 = this;
  *(undefined4 *)&(this->OpCache).LoadConfigFn.field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->OpCache).LoadConfigFn.field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->OpCache).LoadConfigFn.field_0x28 = 0;
  *(undefined4 *)&(this->OpCache).LoadConfigFn.field_0x2c = 0;
  local_28 = uVar1;
  uStack_40 = uVar2;
  if (local_48 != 0) {
    plVar4 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar4 = plStack_20;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  (**(code **)(*(longlong *)this + 0xb8))(this);
  (**(code **)(*(longlong *)this + 0xc0))(this);
  (**(code **)(*(longlong *)this + 200))(this);
  if (4 < (byte)LogOnlineServices._0_1_) {
    EVar3 = (**(code **)(*(longlong *)this + 0x98))(this);
    Online::LexToString(EVar3);
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  return;
}

// Initialize @ 14eeede10

void __thiscall UE::Online::FOnlineServicesCommon::Initialize(FOnlineServicesCommon *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  IOnlineComponent *this_00;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Components).Components.AllocatorInstance.Data;
  iVar2 = (this->Components).Components.ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Components).Components.ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<UE::Online::FOnlineComponentRegistry::IComponentWrapper,TDefaultDelete<UE::Online::FOnlineComponentRegistry::IComponentWrapper>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    this_00 = Core::Private::
              DereferenceIfNecessary<UE::Online::IOnlineComponent,UE::Online::FOnlineComponentRegistry::IComponentWrapper_&>
                        (*(IComponentWrapper **)pFVar3);
    IOnlineComponent::_vcall__8__flat______(this_00);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// LoadCommonConfig @ 14eef1610

void __thiscall UE::Online::FOnlineServicesCommon::LoadCommonConfig(FOnlineServicesCommon *this)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  FOnlineServicesCommonConfig local_38;
  FString local_28;
  FString local_18;
  
  local_38.MaxConcurrentOperations = 0x10;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_38.SecondsToSleepForOutstandingOperations = 0.01;
  local_38.SecondsToFlushForOutstandingOperations = 0.0;
  LoadConfig<UE::Online::FOnlineServicesCommonConfig>(this,&local_38,&local_18,&local_28);
  iVar2 = local_38.MaxConcurrentOperations;
  if (local_38.MaxConcurrentOperations < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InMaxConcurrentOperations > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommon\\Public\\Online\\OnlineAsyncOpQueue.h"
                       ,0xa7,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this->ParallelQueue).MaxConcurrentOperations = iVar2;
  return;
}

// PostInitialize @ 14eef4210

void __thiscall UE::Online::FOnlineServicesCommon::PostInitialize(FOnlineServicesCommon *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  IOnlineComponent *this_00;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Components).Components.AllocatorInstance.Data;
  iVar2 = (this->Components).Components.ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Components).Components.ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<UE::Online::FOnlineComponentRegistry::IComponentWrapper,TDefaultDelete<UE::Online::FOnlineComponentRegistry::IComponentWrapper>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    this_00 = Core::Private::
              DereferenceIfNecessary<UE::Online::IOnlineComponent,UE::Online::FOnlineComponentRegistry::IComponentWrapper_&>
                        (*(IComponentWrapper **)pFVar3);
    IOnlineComponent::_vcall__16__flat______(this_00);
    pFVar3 = pFVar3 + 8;
  }
  LoadCommonConfig(this);
  return;
}

// PreShutdown @ 14eef4350

void __thiscall UE::Online::FOnlineServicesCommon::PreShutdown(FOnlineServicesCommon *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  IOnlineComponent *this_00;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Components).Components.AllocatorInstance.Data;
  iVar2 = (this->Components).Components.ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Components).Components.ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<UE::Online::FOnlineComponentRegistry::IComponentWrapper,TDefaultDelete<UE::Online::FOnlineComponentRegistry::IComponentWrapper>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    this_00 = Core::Private::
              DereferenceIfNecessary<UE::Online::IOnlineComponent,UE::Online::FOnlineComponentRegistry::IComponentWrapper_&>
                        (*(IComponentWrapper **)pFVar3);
    IOnlineComponent::_vcall__40__flat______(this_00);
    pFVar3 = pFVar3 + 8;
  }
  this->bPreShutdownComplete = true;
  return;
}

// RegisterComponents @ 14eefbbe0

void __thiscall UE::Online::FOnlineServicesCommon::RegisterComponents(FOnlineServicesCommon *this)

{
  return;
}

// RegisterExecHandler @ 14eefbd00

void __thiscall
UE::Online::FOnlineServicesCommon::RegisterExecHandler
          (FOnlineServicesCommon *this,FString *param_1,
          TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>
          *param_2)

{
  TPairInitializer<FString_const_&,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_&&>
  local_res8 [2];
  FString *local_18;
  TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>
  *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FString_const_&,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_&&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->ExecCommands,local_res8,(bool *)&local_18);
  return;
}

// Shutdown @ 14ef12430

void __thiscall UE::Online::FOnlineServicesCommon::Shutdown(FOnlineServicesCommon *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  IOnlineComponent *this_00;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Components).Components.AllocatorInstance.Data;
  iVar2 = (this->Components).Components.ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Components).Components.ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<UE::Online::FOnlineComponentRegistry::IComponentWrapper,TDefaultDelete<UE::Online::FOnlineComponentRegistry::IComponentWrapper>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    this_00 = Core::Private::
              DereferenceIfNecessary<UE::Online::IOnlineComponent,UE::Online::FOnlineComponentRegistry::IComponentWrapper_&>
                        (*(IComponentWrapper **)pFVar3);
    IOnlineComponent::_vcall__48__flat______(this_00);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// Tick @ 14ef155f0

bool __thiscall UE::Online::FOnlineServicesCommon::Tick(FOnlineServicesCommon *this,float param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  IOnlineComponent *this_00;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  
  puVar3 = *(undefined8 **)&this->InstanceIndex;
  uVar2 = (this->InstanceName).Number;
  puVar1 = puVar3 + (int)uVar2;
  while( true ) {
    if ((this->InstanceName).Number != uVar2) {
      `TCheckedPointerIterator<TUniquePtr<UE::Online::FOnlineComponentRegistry::IComponentWrapper,TDefaultDelete<UE::Online::FOnlineComponentRegistry::IComponentWrapper>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (puVar3 == puVar1) break;
    this_00 = Core::Private::
              DereferenceIfNecessary<UE::Online::IOnlineComponent,UE::Online::FOnlineComponentRegistry::IComponentWrapper_&>
                        ((IComponentWrapper *)*puVar3);
    IOnlineComponent::_vcall__32__flat______(this_00);
    puVar3 = puVar3 + 1;
  }
  FOnlineAsyncOpQueueParallel::Tick
            ((FOnlineAsyncOpQueueParallel *)&(this->ConfigSectionOverrides).ArrayNum,param_1);
  return true;
}

// UpdateConfig @ 14ef322c0

void __thiscall UE::Online::FOnlineServicesCommon::UpdateConfig(FOnlineServicesCommon *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  IOnlineComponent *this_00;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Components).Components.AllocatorInstance.Data;
  iVar2 = (this->Components).Components.ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Components).Components.ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<UE::Online::FOnlineComponentRegistry::IComponentWrapper,TDefaultDelete<UE::Online::FOnlineComponentRegistry::IComponentWrapper>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    this_00 = Core::Private::
              DereferenceIfNecessary<UE::Online::IOnlineComponent,UE::Online::FOnlineComponentRegistry::IComponentWrapper_&>
                        (*(IComponentWrapper **)pFVar3);
    IOnlineComponent::_vcall__24__flat______(this_00);
    pFVar3 = pFVar3 + 8;
  }
  LoadCommonConfig(this);
  return;
}

// LoadConfig<UE::Online::FStatsCommonConfig> @ 14ef5e820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FStatsCommonConfig>
          (FOnlineServicesCommon *this,FStatsCommonConfig *param_1,FString *param_2,FString *param_3
          )

{
  int iVar1;
  bool bVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStackY_118 [32];
  TArray<TStringView<wchar_t>_const_,TSizedDefaultAllocator<32>_> local_d8;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_c8;
  FString local_c0;
  FString local_b0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_a0;
  FScriptContainerElement *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  FScriptContainerElement *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  FScriptContainerElement *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_c8 = &local_a0;
  local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.ArrayNum = 0;
  local_a0.ArrayMax = 0;
  ::FString::FString(&local_c0,L"OnlineServices");
  ::FName::ToString(&this->InstanceConfigName,&local_b0);
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 1;
  iVar6 = 0;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_d8.AllocatorInstance,1,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FStatsCommonConfig>'::__l2::<lambda_1>
  ::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 2;
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  iVar1 = (param_2->Data).ArrayNum;
  iVar4 = 0;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = iVar4;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,2,0,&local_d8.AllocatorInstance,2,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x10) = local_78;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x18) = CONCAT44(uStack_6c,iStack_70);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FStatsCommonConfig>'::__l2::<lambda_1>
  ::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 3;
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  iVar1 = (param_2->Data).ArrayNum;
  local_68 = (param_3->Data).AllocatorInstance.Data;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = iVar4;
  }
  iVar1 = (param_3->Data).ArrayNum;
  iStack_60 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_60 = iVar6;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,3,0,&local_d8.AllocatorInstance,3,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x10) = local_78;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x18) = CONCAT44(uStack_6c,iStack_70);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x20) = local_68;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x28) = CONCAT44(uStack_5c,iStack_60);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FStatsCommonConfig>'::__l2::<lambda_1>
  ::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 2;
  local_78 = (this->ServiceConfigName).Data.AllocatorInstance.Data;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  iVar1 = (this->ServiceConfigName).Data.ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = iVar4;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,2,0,&local_d8.AllocatorInstance,2,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x10) = local_78;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x18) = CONCAT44(uStack_6c,iStack_70);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FStatsCommonConfig>'::__l2::<lambda_1>
  ::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 3;
  local_78 = (this->ServiceConfigName).Data.AllocatorInstance.Data;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  iVar1 = (this->ServiceConfigName).Data.ArrayNum;
  local_68 = (param_2->Data).AllocatorInstance.Data;
  iVar5 = 0;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = iVar5;
  }
  iVar1 = (param_2->Data).ArrayNum;
  iStack_60 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_60 = iVar5;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,3,0,&local_d8.AllocatorInstance,3,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x10) = local_78;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x18) = CONCAT44(uStack_6c,iStack_70);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x20) = local_68;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x28) = CONCAT44(uStack_5c,iStack_60);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FStatsCommonConfig>'::__l2::<lambda_1>
  ::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 4;
  local_78 = (this->ServiceConfigName).Data.AllocatorInstance.Data;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  iVar1 = (this->ServiceConfigName).Data.ArrayNum;
  local_68 = (param_2->Data).AllocatorInstance.Data;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = iVar5;
  }
  iVar1 = (param_2->Data).ArrayNum;
  local_58 = (param_3->Data).AllocatorInstance.Data;
  iStack_60 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_60 = iVar5;
  }
  iVar1 = (param_3->Data).ArrayNum;
  iStack_50 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_50 = iVar5;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,4,0,&local_d8.AllocatorInstance,4,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x10) = local_78;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x18) = CONCAT44(uStack_6c,iStack_70);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x20) = local_68;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x28) = CONCAT44(uStack_5c,iStack_60);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x30) = local_58;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x38) = CONCAT44(uStack_4c,iStack_50);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FStatsCommonConfig>'::__l2::<lambda_1>
  ::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 3;
  local_78 = (this->ServiceConfigName).Data.AllocatorInstance.Data;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  iVar1 = (this->ServiceConfigName).Data.ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = iVar5;
  }
  local_68 = local_b0.Data.AllocatorInstance.Data;
  iStack_60 = local_b0.Data.ArrayNum + -1;
  if (local_b0.Data.ArrayNum == 0) {
    iStack_60 = iVar6;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,3,0,&local_d8.AllocatorInstance,3,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x10) = local_78;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x18) = CONCAT44(uStack_6c,iStack_70);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x20) = local_68;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x28) = CONCAT44(uStack_5c,iStack_60);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FStatsCommonConfig>'::__l2::<lambda_1>
  ::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 4;
  local_78 = (this->ServiceConfigName).Data.AllocatorInstance.Data;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  iVar1 = (this->ServiceConfigName).Data.ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = iVar5;
  }
  local_68 = local_b0.Data.AllocatorInstance.Data;
  local_58 = (param_2->Data).AllocatorInstance.Data;
  iStack_60 = local_b0.Data.ArrayNum + -1;
  if (local_b0.Data.ArrayNum == 0) {
    iStack_60 = iVar6;
  }
  iVar1 = (param_2->Data).ArrayNum;
  iStack_50 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_50 = iVar5;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,4,0,&local_d8.AllocatorInstance,4,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x10) = local_78;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x18) = CONCAT44(uStack_6c,iStack_70);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x20) = local_68;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x28) = CONCAT44(uStack_5c,iStack_60);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x30) = local_58;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x38) = CONCAT44(uStack_4c,iStack_50);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FStatsCommonConfig>'::__l2::<lambda_1>
  ::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 5;
  local_78 = (this->ServiceConfigName).Data.AllocatorInstance.Data;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  iVar1 = (this->ServiceConfigName).Data.ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_68 = local_b0.Data.AllocatorInstance.Data;
  local_58 = (param_2->Data).AllocatorInstance.Data;
  iStack_60 = local_b0.Data.ArrayNum + -1;
  if (local_b0.Data.ArrayNum == 0) {
    iStack_60 = iVar6;
  }
  iVar6 = (param_2->Data).ArrayNum;
  local_48 = (param_3->Data).AllocatorInstance.Data;
  iStack_50 = iVar6 + -1;
  if (iVar6 == 0) {
    iStack_50 = 0;
  }
  iVar6 = (param_3->Data).ArrayNum;
  iStack_40 = iVar6 + -1;
  if (iVar6 == 0) {
    iStack_40 = iVar4;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,5,0,&local_d8.AllocatorInstance,5,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x10) = local_78;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x18) = CONCAT44(uStack_6c,iStack_70);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x20) = local_68;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x28) = CONCAT44(uStack_5c,iStack_60);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x30) = local_58;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x38) = CONCAT44(uStack_4c,iStack_50);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x40) = local_48;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x48) = CONCAT44(uStack_3c,iStack_40);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FStatsCommonConfig>'::__l2::<lambda_1>
  ::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  pTVar3 = GetConfigSectionHeirarchyWithOverrides
                     (this,(TArray<FString,TSizedDefaultAllocator<32>_> *)&local_d8,&local_a0);
  bVar2 = Online::LoadConfig<UE::Online::FStatsCommonConfig>
                    ((this->ConfigProvider).Ptr,pTVar3,param_1);
  DestructItems<FString,int>((FString *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_a0.AllocatorInstance.Data,local_a0.ArrayNum);
  if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.AllocatorInstance.Data);
  }
  return bVar2;
}

// operator() @ 14ef77e30

/* WARNING: Removing unreachable block (ram,0x00014ef77f53) */

void __thiscall
`UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FStatsCommonConfig>'::__l2::<lambda_1>::
operator()(void *this,TArray<TStringView<wchar_t>_const_,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res10 [8];
  FString local_38;
  
  iVar4 = param_1->ArrayNum;
  pFVar5 = (param_1->AllocatorInstance).Data;
  pFVar6 = pFVar5 + (longlong)iVar4 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar4) {
      `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar5 == pFVar6) break;
    if (*(int *)(pFVar5 + 8) == 0) {
      return;
    }
    pFVar5 = pFVar5 + 0x10;
  }
  pFVar5 = (param_1->AllocatorInstance).Data;
  bVar3 = true;
  pFVar2 = *(ForAnyElementType **)this;
  iVar4 = param_1->ArrayNum;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar6 = pFVar5 + (longlong)iVar4 * 0x10;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  while( true ) {
    if (param_1->ArrayNum != iVar4) {
      `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar5 == pFVar6) break;
    if (bVar3) {
      bVar3 = false;
    }
    else {
      ::FString::AppendChars(&local_38,L".",1);
    }
    ::FString::AppendChars(&local_38,*(wchar_t **)pFVar5,(int)*(undefined8 *)(pFVar5 + 8));
    pFVar5 = pFVar5 + 0x10;
  }
  iVar4 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar4 + 1;
  pFVar5 = pFVar2->Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_38.Data.AllocatorInstance.Data;
  *(int *)(pFVar5 + 8) = local_38.Data.ArrayNum;
  *(int *)(pFVar5 + 0xc) = local_38.Data.ArrayMax;
  return;
}

// LoadConfig<UE::Online::FFunctionalTestConfig> @ 14efd9ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FFunctionalTestConfig>
          (FOnlineServicesCommon *this,FFunctionalTestConfig *param_1,FString *param_2,
          FString *param_3)

{
  int iVar1;
  bool bVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStackY_118 [32];
  TArray<TStringView<wchar_t>_const_,TSizedDefaultAllocator<32>_> local_d8;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_c8;
  FString local_c0;
  FString local_b0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_a0;
  FScriptContainerElement *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  FScriptContainerElement *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  FScriptContainerElement *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_c8 = &local_a0;
  local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.ArrayNum = 0;
  local_a0.ArrayMax = 0;
  ::FString::FString(&local_c0,L"OnlineServices");
  ::FName::ToString(&this->InstanceConfigName,&local_b0);
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 1;
  iVar6 = 0;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_d8.AllocatorInstance,1,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FFunctionalTestConfig>'::__l2::
  <lambda_1>::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 2;
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  iVar1 = (param_2->Data).ArrayNum;
  iVar4 = 0;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = iVar4;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,2,0,&local_d8.AllocatorInstance,2,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x10) = local_78;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x18) = CONCAT44(uStack_6c,iStack_70);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FFunctionalTestConfig>'::__l2::
  <lambda_1>::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 3;
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  iVar1 = (param_2->Data).ArrayNum;
  local_68 = (param_3->Data).AllocatorInstance.Data;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = iVar4;
  }
  iVar1 = (param_3->Data).ArrayNum;
  iStack_60 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_60 = iVar6;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,3,0,&local_d8.AllocatorInstance,3,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x10) = local_78;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x18) = CONCAT44(uStack_6c,iStack_70);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x20) = local_68;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x28) = CONCAT44(uStack_5c,iStack_60);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FFunctionalTestConfig>'::__l2::
  <lambda_1>::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 2;
  local_78 = (this->ServiceConfigName).Data.AllocatorInstance.Data;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  iVar1 = (this->ServiceConfigName).Data.ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = iVar4;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,2,0,&local_d8.AllocatorInstance,2,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x10) = local_78;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x18) = CONCAT44(uStack_6c,iStack_70);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FFunctionalTestConfig>'::__l2::
  <lambda_1>::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 3;
  local_78 = (this->ServiceConfigName).Data.AllocatorInstance.Data;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  iVar1 = (this->ServiceConfigName).Data.ArrayNum;
  local_68 = (param_2->Data).AllocatorInstance.Data;
  iVar5 = 0;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = iVar5;
  }
  iVar1 = (param_2->Data).ArrayNum;
  iStack_60 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_60 = iVar5;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,3,0,&local_d8.AllocatorInstance,3,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x10) = local_78;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x18) = CONCAT44(uStack_6c,iStack_70);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x20) = local_68;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x28) = CONCAT44(uStack_5c,iStack_60);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FFunctionalTestConfig>'::__l2::
  <lambda_1>::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 4;
  local_78 = (this->ServiceConfigName).Data.AllocatorInstance.Data;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  iVar1 = (this->ServiceConfigName).Data.ArrayNum;
  local_68 = (param_2->Data).AllocatorInstance.Data;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = iVar5;
  }
  iVar1 = (param_2->Data).ArrayNum;
  local_58 = (param_3->Data).AllocatorInstance.Data;
  iStack_60 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_60 = iVar5;
  }
  iVar1 = (param_3->Data).ArrayNum;
  iStack_50 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_50 = iVar5;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,4,0,&local_d8.AllocatorInstance,4,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x10) = local_78;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x18) = CONCAT44(uStack_6c,iStack_70);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x20) = local_68;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x28) = CONCAT44(uStack_5c,iStack_60);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x30) = local_58;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x38) = CONCAT44(uStack_4c,iStack_50);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FFunctionalTestConfig>'::__l2::
  <lambda_1>::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 3;
  local_78 = (this->ServiceConfigName).Data.AllocatorInstance.Data;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  iVar1 = (this->ServiceConfigName).Data.ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = iVar5;
  }
  local_68 = local_b0.Data.AllocatorInstance.Data;
  iStack_60 = local_b0.Data.ArrayNum + -1;
  if (local_b0.Data.ArrayNum == 0) {
    iStack_60 = iVar6;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,3,0,&local_d8.AllocatorInstance,3,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x10) = local_78;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x18) = CONCAT44(uStack_6c,iStack_70);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x20) = local_68;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x28) = CONCAT44(uStack_5c,iStack_60);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FFunctionalTestConfig>'::__l2::
  <lambda_1>::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 4;
  local_78 = (this->ServiceConfigName).Data.AllocatorInstance.Data;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  iVar1 = (this->ServiceConfigName).Data.ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = iVar5;
  }
  local_68 = local_b0.Data.AllocatorInstance.Data;
  local_58 = (param_2->Data).AllocatorInstance.Data;
  iStack_60 = local_b0.Data.ArrayNum + -1;
  if (local_b0.Data.ArrayNum == 0) {
    iStack_60 = iVar6;
  }
  iVar1 = (param_2->Data).ArrayNum;
  iStack_50 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_50 = iVar5;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,4,0,&local_d8.AllocatorInstance,4,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x10) = local_78;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x18) = CONCAT44(uStack_6c,iStack_70);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x20) = local_68;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x28) = CONCAT44(uStack_5c,iStack_60);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x30) = local_58;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x38) = CONCAT44(uStack_4c,iStack_50);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FFunctionalTestConfig>'::__l2::
  <lambda_1>::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  local_88 = local_c0.Data.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 5;
  local_78 = (this->ServiceConfigName).Data.AllocatorInstance.Data;
  iStack_80 = local_c0.Data.ArrayNum + -1;
  if (local_c0.Data.ArrayNum == 0) {
    iStack_80 = iVar6;
  }
  iVar1 = (this->ServiceConfigName).Data.ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_68 = local_b0.Data.AllocatorInstance.Data;
  local_58 = (param_2->Data).AllocatorInstance.Data;
  iStack_60 = local_b0.Data.ArrayNum + -1;
  if (local_b0.Data.ArrayNum == 0) {
    iStack_60 = iVar6;
  }
  iVar6 = (param_2->Data).ArrayNum;
  local_48 = (param_3->Data).AllocatorInstance.Data;
  iStack_50 = iVar6 + -1;
  if (iVar6 == 0) {
    iStack_50 = 0;
  }
  iVar6 = (param_3->Data).ArrayNum;
  iStack_40 = iVar6 + -1;
  if (iVar6 == 0) {
    iStack_40 = iVar4;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,5,0,&local_d8.AllocatorInstance,5,&local_d8.ArrayMax);
  *(FScriptContainerElement **)local_d8.AllocatorInstance.Data = local_88;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = CONCAT44(uStack_7c,iStack_80);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x10) = local_78;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x18) = CONCAT44(uStack_6c,iStack_70);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x20) = local_68;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x28) = CONCAT44(uStack_5c,iStack_60);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x30) = local_58;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x38) = CONCAT44(uStack_4c,iStack_50);
  *(FScriptContainerElement **)(local_d8.AllocatorInstance.Data + 0x40) = local_48;
  *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x48) = CONCAT44(uStack_3c,iStack_40);
  `UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FFunctionalTestConfig>'::__l2::
  <lambda_1>::operator()(&local_c8,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  pTVar3 = GetConfigSectionHeirarchyWithOverrides
                     (this,(TArray<FString,TSizedDefaultAllocator<32>_> *)&local_d8,&local_a0);
  bVar2 = Online::LoadConfig<UE::Online::FFunctionalTestConfig>
                    ((this->ConfigProvider).Ptr,pTVar3,param_1);
  DestructItems<FString,int>((FString *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_a0.AllocatorInstance.Data,local_a0.ArrayNum);
  if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.AllocatorInstance.Data);
  }
  return bVar2;
}

// operator() @ 14efe9850

/* WARNING: Removing unreachable block (ram,0x00014efe9973) */

void __thiscall
`UE::Online::FOnlineServicesCommon::LoadConfig<UE::Online::FFunctionalTestConfig>'::__l2::<lambda_1>
::operator()(void *this,TArray<TStringView<wchar_t>_const_,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res10 [8];
  FString local_38;
  
  iVar4 = param_1->ArrayNum;
  pFVar5 = (param_1->AllocatorInstance).Data;
  pFVar6 = pFVar5 + (longlong)iVar4 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar4) {
      `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar5 == pFVar6) break;
    if (*(int *)(pFVar5 + 8) == 0) {
      return;
    }
    pFVar5 = pFVar5 + 0x10;
  }
  pFVar5 = (param_1->AllocatorInstance).Data;
  bVar3 = true;
  pFVar2 = *(ForAnyElementType **)this;
  iVar4 = param_1->ArrayNum;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar6 = pFVar5 + (longlong)iVar4 * 0x10;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  while( true ) {
    if (param_1->ArrayNum != iVar4) {
      `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar5 == pFVar6) break;
    if (bVar3) {
      bVar3 = false;
    }
    else {
      ::FString::AppendChars(&local_38,L".",1);
    }
    ::FString::AppendChars(&local_38,*(wchar_t **)pFVar5,(int)*(undefined8 *)(pFVar5 + 8));
    pFVar5 = pFVar5 + 0x10;
  }
  iVar4 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar4 + 1;
  pFVar5 = pFVar2->Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_38.Data.AllocatorInstance.Data;
  *(int *)(pFVar5 + 8) = local_38.Data.ArrayNum;
  *(int *)(pFVar5 + 0xc) = local_38.Data.ArrayMax;
  return;
}

