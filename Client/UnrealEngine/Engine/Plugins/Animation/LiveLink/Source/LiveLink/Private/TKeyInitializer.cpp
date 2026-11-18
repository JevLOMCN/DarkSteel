// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 4

// operator<FLiveLinkSubjectKey,FLiveLinkClient::FSubjectFramesReceivedHandles>_TTuple<FLiveLinkSubjectKey,FLiveLinkClient::FSubjectFramesReceivedHandles> @ 14cff74d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<FLiveLinkSubjectKey,FLiveLinkClient::FSubjectFramesReceivedHandles> * __thiscall
TKeyInitializer<FLiveLinkSubjectKey_const_&>::
operator<FLiveLinkSubjectKey,FLiveLinkClient::FSubjectFramesReceivedHandles>_TTuple<FLiveLinkSubjectKey,FLiveLinkClient::FSubjectFramesReceivedHandles>
          (TKeyInitializer<FLiveLinkSubjectKey_const_&> *this,
          TTuple<FLiveLinkSubjectKey,FLiveLinkClient::FSubjectFramesReceivedHandles>
          *__return_storage_ptr__)

{
  FName FVar1;
  FLiveLinkSubjectKey *pFVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [24];
  HANDLE pvStack_80;
  ULONG_PTR local_78;
  TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *pTStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  _RTL_CRITICAL_SECTION local_58;
  TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *pTStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_98._0_8_ = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  local_98._8_8_ = 0;
  local_98._16_8_ = (HANDLE)0x0;
  pvStack_80 = (HANDLE)0x0;
  local_78 = 0;
  pTStack_70 = (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0;
  local_68 = 0;
  uStack_60 = 0;
  local_58.DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  local_58.LockCount = 0;
  local_58.RecursionCount = 0;
  local_58.OwningThread = (HANDLE)0x0;
  local_58.LockSemaphore = (HANDLE)0x0;
  local_58.SpinCount = 0;
  pTStack_30 = (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0;
  local_28 = 0;
  uStack_20 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)local_98,4000);
  local_68 = ___xmm_00000000000000020000000000000000;
  uStack_60 = _UNK_150631d48;
  pTStack_70 = (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0;
  InitializeCriticalSectionAndSpinCount(&local_58,4000);
  pFVar2 = this->Key;
  pTStack_30 = (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0;
  local_28 = ___xmm_00000000000000020000000000000000;
  uStack_20 = _UNK_150631d48;
  uVar3 = (pFVar2->Source).B;
  uVar4 = (pFVar2->Source).C;
  uVar5 = (pFVar2->Source).D;
  *(uint *)&__return_storage_ptr__->field_0x0 = (pFVar2->Source).A;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar3;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar4;
  *(uint *)&__return_storage_ptr__->field_0xc = uVar5;
  FVar1 = (pFVar2->SubjectName).Name;
  *(uint *)&__return_storage_ptr__->field_0x10 = FVar1.ComparisonIndex.Value;
  *(uint *)&__return_storage_ptr__->field_0x14 = FVar1.Number;
  FLiveLinkClient::FSubjectFramesReceivedHandles::FSubjectFramesReceivedHandles
            ((FSubjectFramesReceivedHandles *)&__return_storage_ptr__->field_0x18,
             (FSubjectFramesReceivedHandles *)local_98);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>(pTStack_30,(int)local_28);
  if (pTStack_30 != (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(pTStack_30);
  }
  DeleteCriticalSection(&local_58);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>(pTStack_70,(int)local_68);
  if (pTStack_70 != (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(pTStack_70);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)local_98);
  return __return_storage_ptr__;
}

// operator<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles>_TTuple<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles> @ 14cff7620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles> * __thiscall
TKeyInitializer<FLiveLinkSubjectName_&&>::
operator<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles>_TTuple<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles>
          (TKeyInitializer<FLiveLinkSubjectName_&&> *this,
          TTuple<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles>
          *__return_storage_ptr__)

{
  FName FVar1;
  FSubjectFramesAddedHandles *pFVar2;
  undefined1 auStack_138 [32];
  FSubjectFramesAddedHandles local_118;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_138;
  memset(&local_118,0,0x100);
  pFVar2 = FLiveLinkClient::FSubjectFramesAddedHandles::FSubjectFramesAddedHandles(&local_118);
  FVar1 = this->Key->Name;
  *(uint *)&__return_storage_ptr__->field_0x0 = FVar1.ComparisonIndex.Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = FVar1.Number;
  FLiveLinkClient::FSubjectFramesAddedHandles::FSubjectFramesAddedHandles
            ((FSubjectFramesAddedHandles *)&__return_storage_ptr__->field_0x8,pFVar2);
  FLiveLinkClient::FSubjectFramesAddedHandles::~FSubjectFramesAddedHandles(&local_118);
  return __return_storage_ptr__;
}

// operator<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles>_TTuple<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles> @ 14cff76b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles> * __thiscall
TKeyInitializer<FLiveLinkSubjectName_const_&>::
operator<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles>_TTuple<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles>
          (TKeyInitializer<FLiveLinkSubjectName_const_&> *this,
          TTuple<FLiveLinkSubjectName,FLiveLinkClient::FSubjectFramesAddedHandles>
          *__return_storage_ptr__)

{
  FName FVar1;
  FSubjectFramesAddedHandles *pFVar2;
  undefined1 auStack_138 [32];
  FSubjectFramesAddedHandles local_118;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_138;
  memset(&local_118,0,0x100);
  pFVar2 = FLiveLinkClient::FSubjectFramesAddedHandles::FSubjectFramesAddedHandles(&local_118);
  FVar1 = this->Key->Name;
  *(uint *)&__return_storage_ptr__->field_0x0 = FVar1.ComparisonIndex.Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = FVar1.Number;
  FLiveLinkClient::FSubjectFramesAddedHandles::FSubjectFramesAddedHandles
            ((FSubjectFramesAddedHandles *)&__return_storage_ptr__->field_0x8,pFVar2);
  FLiveLinkClient::FSubjectFramesAddedHandles::~FSubjectFramesAddedHandles(&local_118);
  return __return_storage_ptr__;
}

// operator<FDelegateHandle,TDelegate<bool___cdecl(UClass_*,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>_>_TTuple<FDelegateHandle,TDelegate<bool___cdecl(UClass_*,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>_> @ 14cff7740

TTuple<FDelegateHandle,TDelegate<bool___cdecl(UClass_*,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>_>
* __thiscall
TKeyInitializer<FDelegateHandle_const_&>::
operator<FDelegateHandle,TDelegate<bool___cdecl(UClass_*,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>_>_TTuple<FDelegateHandle,TDelegate<bool___cdecl(UClass_*,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>_>
          (TKeyInitializer<FDelegateHandle_const_&> *this,
          TTuple<FDelegateHandle,TDelegate<bool___cdecl(UClass_*,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  ulonglong local_28;
  FDestructionSentinel local_20;
  
  local_28 = 0;
  local_38 = (undefined1  [8])0x0;
  local_30.Data = (FScriptContainerElement *)0x0;
  *(ulong64 *)__return_storage_ptr__ = this->Key->ID;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&__return_storage_ptr__->field_0x8,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
             (FWriteAccessScope *)&local_20);
  if (((int)local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    local_28 = local_28 & 0xffffffff00000000;
  }
  if (local_20.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_38);
  return __return_storage_ptr__;
}

