// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 16

// FAssetCompilingManager @ 1475a4290

FAssetCompilingManager * __thiscall
FAssetCompilingManager::FAssetCompilingManager(FAssetCompilingManager *this)

{
  this->bHasShutdown = false;
  this->LastNumRemainingAssets = 0;
  (this->AssetCompilingManagers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetCompilingManagers).ArrayNum = 0;
  (this->AssetCompilingManagers).ArrayMax = 0;
  (this->AssetCompilingManagersWithValidDependencies).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AssetCompilingManagersWithValidDependencies).ArrayNum = 0;
  (this->AssetCompilingManagersWithValidDependencies).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->AssetPostCompileEvent,4000);
  *(undefined8 *)&(this->AssetPostCompileEvent).field_0x28 = 0;
  *(undefined8 *)&(this->AssetPostCompileEvent).field_0x30 = 0;
  *(undefined8 *)&(this->AssetPostCompileEvent).field_0x38 = 2;
  *(undefined8 *)&this->PackageScopeEvent = 0;
  *(undefined8 *)&(this->PackageScopeEvent).field_0x8 = 0;
  *(undefined8 *)&(this->PackageScopeEvent).field_0x10 = 0;
  *(undefined8 *)&(this->PackageScopeEvent).field_0x18 = 2;
  return this;
}

// ~FAssetCompilingManager @ 1475a96f0

void __thiscall FAssetCompilingManager::~FAssetCompilingManager(FAssetCompilingManager *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->PackageScopeEvent).field_0x8,*(int *)&(this->PackageScopeEvent).field_0x10);
  pvVar1 = *(void **)&(this->PackageScopeEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PackageScopeEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->AssetPostCompileEvent).field_0x28,
             *(int *)&(this->AssetPostCompileEvent).field_0x30);
  pvVar1 = *(void **)&(this->AssetPostCompileEvent).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->AssetPostCompileEvent);
  pFVar2 = (this->AssetCompilingManagersWithValidDependencies).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->AssetCompilingManagers).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// operator() @ 1475ac580

TArray<IAssetCompilingManager_*,TSizedDefaultAllocator<32>_> * __thiscall
`FAssetCompilingManager::RegisterManager'::__l2::<lambda_1>::operator()
          (void *this,
          TArray<IAssetCompilingManager_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          IAssetCompilingManager *param_1)

{
  longlong lVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<IAssetCompilingManager_*,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  longlong *plVar9;
  undefined1 local_res10 [8];
  longlong local_res18;
  longlong *local_res20;
  longlong *local_58;
  int local_50;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  (**(code **)((longlong)*param_1 + 0x10))(param_1,&local_58);
  local_res20 = local_58 + local_50;
  plVar9 = local_58;
  if (local_58 != local_res20) {
    do {
      lVar1 = *(longlong *)this;
      lVar2 = *plVar9;
      pFVar8 = *(FScriptContainerElement **)(lVar1 + 0x18);
      iVar6 = *(int *)(lVar1 + 0x20);
      pFVar3 = pFVar8 + (longlong)iVar6 * 8;
      while( true ) {
        if (*(int *)(lVar1 + 0x20) != iVar6) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<IAssetCompilingManager_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res10);
        }
        if (pFVar8 == pFVar3) goto LAB_1475ac6d8;
        (**(code **)**(undefined8 **)pFVar8)(*(undefined8 **)pFVar8,&local_res18);
        if (local_res18 == lVar2) break;
        pFVar8 = pFVar8 + 8;
      }
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (((pFVar3 <= pFVar8) &&
            (pFVar8 < pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TArray<IAssetCompilingManager_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar7;
        }
        iVar6 = __return_storage_ptr__->ArrayNum;
        if (iVar6 == __return_storage_ptr__->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar6 + 1;
        *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) =
             *(undefined8 *)pFVar8;
      }
LAB_1475ac6d8:
      plVar9 = plVar9 + 1;
    } while (plVar9 != local_res20);
  }
  return __return_storage_ptr__;
}

// FinishAllCompilation @ 1475cb4d0

void __thiscall FAssetCompilingManager::FinishAllCompilation(FAssetCompilingManager *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  undefined1 local_res8 [8];
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId714,"FAssetCompilingManager::FinishAllCompilation",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AssetCompilingManager.cpp"
               ,0x2ca);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId714);
  }
  pFVar3 = (this->AssetCompilingManagers).AllocatorInstance.Data;
  iVar2 = (this->AssetCompilingManagers).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->AssetCompilingManagers).ArrayNum != iVar2) {
      `TCheckedPointerIterator<IAssetCompilingManager_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 0x30))();
    pFVar3 = pFVar3 + 8;
  }
  UpdateNumRemainingAssets(this);
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// FinishCompilationForObjects @ 1475cbb50

void __thiscall
FAssetCompilingManager::FinishCompilationForObjects
          (FAssetCompilingManager *this,TArrayView<UObject_*_const,int> *param_1)

{
  return;
}

// Get @ 1475cd4e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FAssetCompilingManager * __cdecl FAssetCompilingManager::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      InitializeCriticalSectionAndSpinCount
                ((LPCRITICAL_SECTION)&::Singleton.AssetPostCompileEvent,4000);
      ::Singleton.AssetPostCompileEvent._40_8_ = 0;
      ::Singleton.AssetPostCompileEvent._48_8_ = ___xmm_00000000000000020000000000000000;
      ::Singleton.AssetPostCompileEvent._56_8_ = _UNK_150631d48;
      ::Singleton.PackageScopeEvent._0_8_ = 0;
      ::Singleton.PackageScopeEvent._8_8_ = 0;
      ::Singleton.PackageScopeEvent._16_8_ = ___xmm_00000000000000020000000000000000;
      ::Singleton.PackageScopeEvent._24_8_ = _UNK_150631d48;
      atexit(`FAssetCompilingManager::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
      return &::Singleton;
    }
  }
  return &::Singleton;
}

// GetNumRemainingAssets @ 1475d6280

int __thiscall FAssetCompilingManager::GetNumRemainingAssets(FAssetCompilingManager *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->AssetCompilingManagers).AllocatorInstance.Data;
  iVar2 = (this->AssetCompilingManagers).ArrayNum;
  iVar5 = 0;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->AssetCompilingManagers).ArrayNum != iVar2) {
      `TCheckedPointerIterator<IAssetCompilingManager_*_const,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    iVar3 = (**(code **)(**(longlong **)pFVar4 + 0x18))();
    iVar5 = iVar5 + iVar3;
    pFVar4 = pFVar4 + 8;
  }
  return iVar5;
}

// GetRegisteredManagers @ 1475dcaf0

TArrayView<IAssetCompilingManager_*_const,int> * __thiscall
FAssetCompilingManager::GetRegisteredManagers
          (FAssetCompilingManager *this,
          TArrayView<IAssetCompilingManager_*_const,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<IAssetCompilingManager_*_const,int> *pTVar4;
  
  iVar1 = (this->AssetCompilingManagers).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (IAssetCompilingManager **)(this->AssetCompilingManagers).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<IAssetCompilingManager_*_const,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetThreadPool @ 1475deb40

FQueuedThreadPool * __thiscall FAssetCompilingManager::GetThreadPool(FAssetCompilingManager *this)

{
  return GThreadPool;
}

// MarkCompilationAsCanceled @ 1475e5580

void __thiscall
FAssetCompilingManager::MarkCompilationAsCanceled
          (FAssetCompilingManager *this,TArrayView<UObject_*_const,int> *param_1)

{
  return;
}

// ProcessAsyncTasks @ 1475eaf40

void __thiscall
FAssetCompilingManager::ProcessAsyncTasks
          (FAssetCompilingManager *this,FProcessAsyncTaskParams *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FObjectCacheContextScope local_res8 [8];
  undefined1 local_res18 [8];
  
  FObjectCacheContextScope::FObjectCacheContextScope(local_res8);
  pFVar3 = (this->AssetCompilingManagers).AllocatorInstance.Data;
  iVar2 = (this->AssetCompilingManagers).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->AssetCompilingManagers).ArrayNum != iVar2) {
      `TCheckedPointerIterator<IAssetCompilingManager_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 0x40))(*(longlong **)pFVar3,param_1);
    pFVar3 = pFVar3 + 8;
  }
  UpdateNumRemainingAssets(this);
  FObjectCacheContextScope::~FObjectCacheContextScope(local_res8);
  return;
}

// ProcessAsyncTasks @ 1475eafd0

void __thiscall FAssetCompilingManager::ProcessAsyncTasks(FAssetCompilingManager *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FObjectCacheContextScope local_res8 [8];
  undefined1 local_res18 [8];
  
  FObjectCacheContextScope::FObjectCacheContextScope(local_res8);
  pFVar3 = (this->AssetCompilingManagers).AllocatorInstance.Data;
  iVar2 = (this->AssetCompilingManagers).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->AssetCompilingManagers).ArrayNum != iVar2) {
      `TCheckedPointerIterator<IAssetCompilingManager_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 0x48))(*(longlong **)pFVar3,param_1);
    pFVar3 = pFVar3 + 8;
  }
  UpdateNumRemainingAssets(this);
  FObjectCacheContextScope::~FObjectCacheContextScope(local_res8);
  return;
}

// RegisterManager @ 1475eda40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FAssetCompilingManager::RegisterManager
          (FAssetCompilingManager *this,IAssetCompilingManager *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FName *this_00;
  undefined1 local_res8 [8];
  IAssetCompilingManager *local_res10;
  FString local_28;
  
  pFVar2 = (this->AssetCompilingManagers).AllocatorInstance.Data;
  for (pFVar7 = pFVar2; pFVar7 != pFVar2 + (longlong)(this->AssetCompilingManagers).ArrayNum * 8;
      pFVar7 = pFVar7 + 8) {
    if (*(IAssetCompilingManager **)pFVar7 == param_1) {
      return false;
    }
  }
  local_res10 = param_1;
  if (((pFVar2 <= (FScriptContainerElement *)&local_res10) &&
      ((FScriptContainerElement *)&local_res10 <
       pFVar2 + (longlong)(this->AssetCompilingManagers).ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  iVar6 = (this->AssetCompilingManagers).ArrayNum;
  piVar1 = &(this->AssetCompilingManagers).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->AssetCompilingManagers).AllocatorInstance,piVar1);
  }
  (this->AssetCompilingManagers).ArrayNum = iVar6 + 1;
  *(IAssetCompilingManager **)
   ((this->AssetCompilingManagers).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_res10;
  pFVar2 = (this->AssetCompilingManagersWithValidDependencies).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_res10) &&
      ((FScriptContainerElement *)&local_res10 <
       pFVar2 + (longlong)(this->AssetCompilingManagersWithValidDependencies).ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  iVar6 = (this->AssetCompilingManagersWithValidDependencies).ArrayNum;
  piVar1 = &(this->AssetCompilingManagersWithValidDependencies).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->AssetCompilingManagersWithValidDependencies).AllocatorInstance,
                       piVar1);
  }
  (this->AssetCompilingManagersWithValidDependencies).ArrayNum = iVar6 + 1;
  *(IAssetCompilingManager **)
   ((this->AssetCompilingManagersWithValidDependencies).AllocatorInstance.Data + (longlong)iVar6 * 8
   ) = local_res10;
  bVar4 = Algo::
          KahnTopologicalSort<TArray<IAssetCompilingManager_*,TSizedDefaultAllocator<32>_>_&,_FAssetCompilingManager::RegisterManager_::__l2::<lambda_1>_>
                    (&this->AssetCompilingManagers,(<lambda_1>)this,None);
  if ((!bVar4) &&
     (TArray<IAssetCompilingManager_*,TSizedDefaultAllocator<32>_>::Remove
                (&this->AssetCompilingManagersWithValidDependencies,&local_res10),
     1 < (byte)LogAsyncCompilation._0_1_)) {
    this_00 = (FName *)(**(code **)*local_res10)(local_res10,local_res8);
    ::FName::ToString(this_00,&local_28);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAsyncCompilation);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return true;
}

// Shutdown @ 1475fe340

void __thiscall FAssetCompilingManager::Shutdown(FAssetCompilingManager *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->AssetCompilingManagers).AllocatorInstance.Data;
  iVar2 = (this->AssetCompilingManagers).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->AssetCompilingManagers).ArrayNum != iVar2) {
      `TCheckedPointerIterator<IAssetCompilingManager_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 0x38))();
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// UnregisterManager @ 147602a00

bool __thiscall
FAssetCompilingManager::UnregisterManager
          (FAssetCompilingManager *this,IAssetCompilingManager *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  IAssetCompilingManager *local_res10 [3];
  
  pFVar2 = (this->AssetCompilingManagers).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->AssetCompilingManagers).ArrayNum * 8;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return false;
    }
    if (*(IAssetCompilingManager **)pFVar2 == param_1) break;
    pFVar2 = pFVar2 + 8;
  }
  local_res10[0] = param_1;
  TArray<IAssetCompilingManager_*,TSizedDefaultAllocator<32>_>::Remove
            (&this->AssetCompilingManagers,local_res10);
  TArray<IAssetCompilingManager_*,TSizedDefaultAllocator<32>_>::Remove
            (&this->AssetCompilingManagersWithValidDependencies,local_res10);
  return true;
}

// UpdateNumRemainingAssets @ 147602d00

/* WARNING: Removing unreachable block (ram,0x000147602e8b) */

void __thiscall FAssetCompilingManager::UpdateNumRemainingAssets(FAssetCompilingManager *this)

{
  TMulticastDelegate<void___cdecl(TArray<FAssetCompileData,TSizedDefaultAllocator<32>_>_const_&),FDefaultTSDelegateUserPolicy>
  *this_00;
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  FAssetCompilingManager *pFVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  undefined1 local_res8 [8];
  
  pFVar13 = (this->AssetCompilingManagers).AllocatorInstance.Data;
  iVar3 = (this->AssetCompilingManagers).ArrayNum;
  iVar14 = 0;
  pFVar2 = pFVar13 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->AssetCompilingManagers).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<IAssetCompilingManager_*_const,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar13 == pFVar2) break;
    iVar10 = (**(code **)(**(longlong **)pFVar13 + 0x18))();
    iVar14 = iVar14 + iVar10;
    pFVar13 = pFVar13 + 8;
  }
  if ((0 < this->LastNumRemainingAssets) && (iVar14 == 0)) {
    pFVar12 = Get();
    this_00 = &pFVar12->AssetPostCompileEvent;
    if ((this_00 ==
         (TMulticastDelegate<void___cdecl(TArray<FAssetCompileData,TSizedDefaultAllocator<32>_>_const_&),FDefaultTSDelegateUserPolicy>
          *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)this_00);
    puVar1 = &(pFVar12->AssetPostCompileEvent).field_0x3c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar7 = false;
    uVar15 = *(int *)&(pFVar12->AssetPostCompileEvent).field_0x30 - 1;
    if (-1 < (int)uVar15) {
      lVar16 = (longlong)(int)uVar15 << 4;
      bVar7 = false;
      do {
        uVar11 = 0;
        if ((int)uVar15 < *(int *)&(pFVar12->AssetPostCompileEvent).field_0x30) {
          uVar11 = ~uVar15 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar4 = *(longlong *)&(pFVar12->AssetPostCompileEvent).field_0x28;
        if (((*(int *)(lVar16 + 8 + lVar4) == 0) ||
            (plVar5 = *(longlong **)(lVar16 + lVar4), plVar5 == (longlong *)0x0)) ||
           (cVar9 = (**(code **)(*plVar5 + 0x68))(), cVar9 == '\0')) {
          bVar7 = true;
        }
        lVar16 = lVar16 + -0x10;
        uVar15 = uVar15 - 1;
      } while (-1 < (int)uVar15);
    }
    puVar1 = &(pFVar12->AssetPostCompileEvent).field_0x3c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar7) {
      TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this_00,false);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
  }
  this->LastNumRemainingAssets = iVar14;
  return;
}

