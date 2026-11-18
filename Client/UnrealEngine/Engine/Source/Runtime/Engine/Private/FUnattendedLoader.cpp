// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// operator() @ 148880d80

void __thiscall
`UnattendedLoadTestImpl::FUnattendedLoader::LoadNextPackage'::__l5::<lambda_1>::operator()
          (void *this,FLoadPackageAsyncProgressParams *param_1)

{
  EAsyncLoadingProgress EVar1;
  code *pcVar2;
  bool bVar3;
  
  if (*(int *)((longlong)this + 8) == 1) {
    return;
  }
  EVar1 = param_1->ProgressType;
  if (EVar1 != Failed) {
    if (EVar1 == Started) {
      return;
    }
    if (EVar1 == Read) {
      return;
    }
    if ((EVar1 != Serialized) && (EVar1 != FullyLoaded)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\Loading\\UnattendedAsyncLoadingTests.cpp"
                         ,0x98,L"");
      if (!bVar3) {
        return;
      }
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  UnattendedLoadTestImpl::FUnattendedLoader::LoadNextPackage(*(FUnattendedLoader **)this);
  if ((*(int *)((longlong)this + 8) == 2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExecutionState != EExecutionCheck::MovedFrom",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\Loading\\UnattendedAsyncLoadingTests.cpp"
                         ,0x5c,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(undefined4 *)((longlong)this + 8) = 1;
  return;
}

// LoadNextPackage @ 148896040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UnattendedLoadTestImpl::FUnattendedLoader::LoadNextPackage(FUnattendedLoader *this)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  TReferenceControllerBase<1> *pTVar5;
  FString *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  longlong local_130;
  FName local_128;
  FUnattendedLoader *local_120;
  undefined4 local_118;
  FLoadPackageAsyncOptionalParams local_110;
  FString local_d0;
  FString local_c0;
  FName local_b0;
  undefined1 local_70 [40];
  FDelegateAllocation local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_UnattendedLoadTestImpl::FUnattendedLoader::LoadNextPackage(void)___ptr64'
                ::__l2::__CpuProfilerEventSpecId107,"LoadNextPackage",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\Loading\\UnattendedAsyncLoadingTests.cpp"
               ,0x6b);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_UnattendedLoadTestImpl::FUnattendedLoader::LoadNextPackage(void)___ptr64'
               ::__l2::__CpuProfilerEventSpecId107);
  }
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  local_128.ComparisonIndex.Value = 0;
  local_128.Number = 0;
  AcquireSRWLockExclusive((PSRWLOCK)&this->PackagesToLoad);
  iVar8 = (this->PackagesToLoad).Array.ArrayNum;
  if (iVar8 == 0) {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->PackagesToLoad);
    if (3 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<4>
                (&`private:_void___cdecl_UnattendedLoadTestImpl::FUnattendedLoader::LoadNextPackage(void)___ptr64'
                  ::__l26::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    this->bFinished = true;
  }
  else {
    if (iVar8 < 1) {
      local_138 = 0;
      local_130 = (longlong)iVar8;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    iVar8 = (this->PackagesToLoad).Array.ArrayNum;
    local_128 = *(FName *)((this->PackagesToLoad).Array.AllocatorInstance.Data +
                          (longlong)iVar8 * 8 + -8);
    (this->PackagesToLoad).Array.ArrayNum = iVar8 + -1;
    ReleaseSRWLockExclusive((PSRWLOCK)&this->PackagesToLoad);
    iVar8 = 0;
    if (3 < (byte)LogTemp._0_1_) {
      AcquireSRWLockShared((PSRWLOCK)&this->PackagesToLoad);
      ReleaseSRWLockShared((PSRWLOCK)&this->PackagesToLoad);
      ::FName::ToString(&local_128,&local_d0);
      UE::Logging::Private::BasicLog<4>
                (&`private:_void___cdecl_UnattendedLoadTestImpl::FUnattendedLoader::LoadNextPackage(void)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogTemp);
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
    }
    local_b0.ComparisonIndex.Value = 0;
    local_b0.Number = 0;
    local_118 = 0;
    local_120 = this;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)local_70,4000);
    local_48.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_48.DelegateSize = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)local_70);
    puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_48);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAUFLoadPackageAsyncProgressParams___ZUFDefaultTSDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      iVar8 = 2;
      local_118 = 2;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAUFLoadPackageAsyncProgressParams___ZUFDefaultTSDelegateUserPolicy__V<lambda_1>__4__LoadNextPackage_FUnattendedLoader_UnattendedLoadTestImpl__AEAAXXZ___V__6B_
      ;
      puVar3[3] = this;
      *(undefined4 *)(puVar3 + 4) = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)local_70);
    pTVar5 = ::operator_new(0x50);
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
      local_110.ProgressDelegate.Object = (FLoadPackageAsyncProgressDelegate *)&DAT_00000010;
    }
    else {
      pTVar5->SharedReferenceCount = (atomic<int>)0x1;
      pTVar5->WeakReferenceCount = (atomic<int>)0x1;
      pTVar5->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFLoadPackageAsyncProgressDelegate___00_SharedPointerInternals__6B_
      ;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar5 + 1),4000);
      pTVar5[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar5[3].WeakReferenceCount = (atomic<int>)0x0;
      *(undefined4 *)&pTVar5[4]._padding_ = 0;
      TDelegate<void___cdecl(FLoadPackageAsyncProgressParams_&),FDefaultTSDelegateUserPolicy>::
      CopyFrom<FDefaultTSDelegateUserPolicy>
                ((TDelegate<void___cdecl(FLoadPackageAsyncProgressParams_&),FDefaultTSDelegateUserPolicy>
                  *)(pTVar5 + 1),
                 (TDelegate<void___cdecl(FLoadPackageAsyncProgressParams_&),FDefaultTSDelegateUserPolicy>
                  *)local_70);
      local_110.ProgressDelegate.Object = (FLoadPackageAsyncProgressDelegate *)(pTVar5 + 1);
      pTVar5[4].SharedReferenceCount = (atomic<int>)0xffffffff;
      if ((local_110.ProgressDelegate.Object == (FLoadPackageAsyncProgressDelegate *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
      pTVar7 = pTVar5;
    }
    local_110.CustomPackageName = local_b0;
    local_110.CompletionDelegate.Ptr =
         (TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
          *)0x0;
    local_110.PackageFlags = PKG_None;
    local_110.PIEInstanceID = -1;
    local_110.PackagePriority = 0;
    local_110.InstancingContext = (FLinkerInstancingContext *)0x0;
    local_110.LoadFlags = 0;
    local_110.ProgressDelegate.SharedReferenceCount.ReferenceController = pTVar7;
    pFVar6 = ::FName::ToString(&local_128,&local_c0);
    LoadPackageAsync(pFVar6,&local_110);
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    EnterCriticalSection((LPCRITICAL_SECTION)local_70);
    if ((local_48.DelegateSize != 0) &&
       (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_48.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_48,0,0,0x10);
      local_48.DelegateSize = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)local_70);
    if (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_48.DelegateAllocator);
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)local_70);
    if ((1 < iVar8 - 1U) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("ExecutionState == EExecutionCheck::Executed || ExecutionState == EExecutionCheck::MovedFrom"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\Loading\\UnattendedAsyncLoadingTests.cpp"
                           ,0x43,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

