// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 4

// RequestAsyncLoad<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_> @ 14abba680

TSharedPtr<FStreamableHandle,1> * __thiscall
FMutableStreamableManager::
RequestAsyncLoad<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
          (FMutableStreamableManager *this,TSharedPtr<FStreamableHandle,1> *__return_storage_ptr__,
          TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *param_1,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_2,int param_3,bool param_4
          ,bool param_5,FString *param_6,FSourceLocation *param_7)

{
  undefined1 *puVar1;
  int *piVar2;
  FMutableStreamableManager *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  TSharedPtr<FStreamableHandle,1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TSharedRef<FMutableStreamableManager,1> *pTVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  FMutableStreamableManager *pFVar14;
  FMutableStreamableManager *pFVar15;
  FMutableStreamableManager *pFVar16;
  FMutableStreamableManager *pFVar17;
  TReferenceControllerBase<1> *pTVar18;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  FMutableStreamableManager *local_e0;
  TReferenceControllerBase<1> *local_d8;
  FString local_d0;
  TSharedPtr<FStreamableHandle,1> local_c0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDelegateAllocation *local_80;
  TSharedRef<FMutableStreamableManager,1> local_78;
  longlong local_68;
  TReferenceControllerBase<1> *pTStack_60;
  source_location local_58;
  
  bVar6 = IsInGameThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Internal\\MuCO\\MutableStreamableManager.h"
                         ,0x1b,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar5)();
    return pTVar9;
  }
  pTVar10 = ::operator_new(0x40);
  pFVar16 = (FMutableStreamableManager *)0x0;
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)0x0;
    pTVar18 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar10->SharedReferenceCount = (atomic<int>)0x1;
    pTVar18 = pTVar10 + 1;
    pTVar10->WeakReferenceCount = (atomic<int>)0x1;
    pTVar10->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMutableStreamableHandle_FMutableStreamableManager___00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pTVar10[3]._padding_ + 4) = 0;
    *(undefined4 *)&pTVar10[3].SharedReferenceCount.field_0x1 = 0;
    *(undefined2 *)&pTVar10[3].WeakReferenceCount.field_0x1 = 0;
    pTVar10[3].WeakReferenceCount.field_0x3 = 0;
    pTVar10[1]._padding_ = 0;
    pTVar10[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar10[2]._padding_ = 0;
    pTVar10[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[2].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar10[3]._padding_ = 0;
    *(undefined1 *)&pTVar10[3].SharedReferenceCount = 0;
    if ((pTVar18 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar5)();
      return pTVar9;
    }
  }
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pTVar18 + 1),param_2);
  pTVar11 = TSharedFromThis<FMutableStreamableManager,1>::AsShared
                      ((TSharedFromThis<FMutableStreamableManager,1> *)this,&local_78);
  pFVar3 = pTVar11->Object;
  local_d8 = (pTVar11->SharedReferenceCount).ReferenceController;
  if (local_d8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_d8->SharedReferenceCount = (atomic<int>)((int)local_d8->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  pFVar15 = (FMutableStreamableManager *)pFVar3->_padding_;
  local_e0 = (FMutableStreamableManager *)pFVar3->_padding_;
  pFVar14 = pFVar15;
  pFVar17 = pFVar16;
  if (pFVar15 != (FMutableStreamableManager *)0x0) {
    LOCK();
    puVar1 = (undefined1 *)((longlong)&pFVar15->_padding_ + 4);
    *(int *)puVar1 = *(int *)puVar1 + 1;
    UNLOCK();
    iVar8 = (int)pFVar15->_padding_;
    do {
      pFVar14 = pFVar16;
      pFVar17 = pFVar16;
      if (iVar8 == 0) break;
      LOCK();
      iVar7 = (int)pFVar15->_padding_;
      bVar6 = iVar8 == iVar7;
      if (bVar6) {
        *(int *)&pFVar15->_padding_ = iVar8 + 1;
        iVar7 = iVar8;
      }
      UNLOCK();
      pFVar14 = pFVar15;
      pFVar17 = local_e0;
      iVar8 = iVar7;
    } while (!bVar6);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar14);
  if ((pFVar17 != pFVar3) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result.Pin().Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x6c3,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar5)();
    return pTVar9;
  }
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_f8 = (undefined1  [8])0x0;
  local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_f0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
             (FWriteAccessScope *)&local_98);
  local_80 = &local_f0;
  puVar12 = UE::Core::Private::DelegateAllocate(0x38,&local_f0);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar13;
    *puVar12 = &
               ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__1____RequestAsyncLoad_AEAV__TArray_UFSoftObjectPath__V__TSizedDefaultAllocator__0CA_____V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy_____FMutableStreamableManager__QEAA_AV__TSharedPtr_UFStreamableHandle___00__AEAV__TArray_UFSoftObjectPath__V__TSizedDefaultAllocator__0CA_______QEAV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy____H_N2__QEAVFString____QEAVFSourceLocation_UE___Z___V__6B_
    ;
    puVar12[3] = pTVar18;
    puVar12[4] = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    puVar12[6] = pFVar15;
    puVar12[5] = local_e0;
    pFVar15 = pFVar16;
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  if (pFVar15 != (FMutableStreamableManager *)0x0) {
    LOCK();
    puVar1 = (undefined1 *)((longlong)&pFVar15->_padding_ + 4);
    iVar8 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (**(code **)(pFVar15->_padding_ + 8))(pFVar15,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_d8);
  local_58._Line = (param_7->Impl)._Line;
  local_58._Column = (param_7->Impl)._Column;
  local_58._File = (param_7->Impl)._File;
  local_58._Function = (param_7->Impl)._Function;
  local_d0.Data.AllocatorInstance.Data = (param_6->Data).AllocatorInstance.Data;
  (param_6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.Data.ArrayNum = (param_6->Data).ArrayNum;
  local_d0.Data.ArrayMax = (param_6->Data).ArrayMax;
  (param_6->Data).ArrayNum = 0;
  (param_6->Data).ArrayMax = 0;
  FStreamableManager::
  RequestAsyncLoad<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&,void>
            (&this->StreamableManager,&local_c0,param_1,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_f8,param_3,param_4,
             param_5,&local_d0,(FSourceLocation *)&local_58);
  if (local_c0.Object != (FStreamableHandle *)0x0) {
    if (local_c0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_68 = pTVar18->_padding_;
    pTStack_60 = *(TReferenceControllerBase<1> **)&pTVar18->SharedReferenceCount;
    pTVar18->_padding_ = (longlong)local_c0.Object;
    *(TReferenceControllerBase<1> **)&pTVar18->SharedReferenceCount =
         local_c0.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
    iVar8 = (this->StreamableHandles).ArrayNum;
    piVar2 = &(this->StreamableHandles).ArrayMax;
    if (iVar8 == *piVar2) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->StreamableHandles).AllocatorInstance,piVar2);
    }
    (this->StreamableHandles).ArrayNum = iVar8 + 1;
    pFVar4 = (this->StreamableHandles).AllocatorInstance.Data;
    *(TReferenceControllerBase<1> **)(pFVar4 + (longlong)iVar8 * 0x10) = pTVar18;
    *(TReferenceControllerBase<1> **)(pFVar4 + (longlong)iVar8 * 0x10 + 8) = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  __return_storage_ptr__->Object = (FStreamableHandle *)pTVar18->_padding_;
  pTVar18 = *(TReferenceControllerBase<1> **)&pTVar18->SharedReferenceCount;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar18;
  if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.SharedReferenceCount.ReferenceController);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
             (FWriteAccessScope *)&local_b0);
  if ((local_f0.DelegateSize != 0) &&
     (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_f0,0,0,0x10);
    local_f0.DelegateSize = 0;
  }
  if (local_b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
  }
  if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_f0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return __return_storage_ptr__;
}

// ~FMutableStreamableManager @ 14abbf0a0

void __thiscall
FMutableStreamableManager::~FMutableStreamableManager(FMutableStreamableManager *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  DestructItems<TSharedRef<FMutableStreamableManager::FMutableStreamableHandle,1>,int>
            ((TSharedRef<FMutableStreamableManager::FMutableStreamableHandle,1> *)
             (this->StreamableHandles).AllocatorInstance.Data,(this->StreamableHandles).ArrayNum);
  pFVar3 = (this->StreamableHandles).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FStreamableManager::~FStreamableManager(&this->StreamableManager);
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014abbf0fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// operator() @ 14abc1c50

void __thiscall
`FMutableStreamableManager::
RequestAsyncLoad<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  atomic<int> aVar6;
  TSharedRef<FMutableStreamableManager::FMutableStreamableHandle,1> *_Dst;
  TReferenceControllerBase<1> *pTVar7;
  int iVar8;
  longlong *plVar9;
  FReadAccessScope local_28;
  
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Internal\\MuCO\\MutableStreamableManager.h"
                         ,0x2a,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar1 = *(longlong *)this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x10),&local_28);
  if ((*(int *)(lVar1 + 0x20) != 0) && (*(longlong **)(lVar1 + 0x18) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  *(undefined1 *)(*(longlong *)this + 0x28) = 1;
  pTVar7 = *(TReferenceControllerBase<1> **)((longlong)this + 0x18);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar7->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14abc1cf0;
      }
      LOCK();
      aVar6 = pTVar7->SharedReferenceCount;
      bVar5 = aVar4 == aVar6;
      if (bVar5) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar5);
    lVar1 = *(longlong *)((longlong)this + 0x10);
    if (lVar1 != 0) {
      plVar2 = *(longlong **)(lVar1 + 0xf8);
      if (plVar2 != plVar2 + (longlong)*(int *)(lVar1 + 0x100) * 2) {
        plVar9 = plVar2;
        do {
          if (*plVar9 == *(longlong *)this) {
            iVar8 = (int)((longlong)plVar9 - (longlong)plVar2 >> 4);
            if (iVar8 != -1) {
              _Dst = (TSharedRef<FMutableStreamableManager::FMutableStreamableHandle,1> *)
                     (plVar2 + (longlong)iVar8 * 2);
              DestructItems<TSharedRef<FMutableStreamableManager::FMutableStreamableHandle,1>,int>
                        (_Dst,1);
              memmove(_Dst,_Dst + 1,(longlong)((*(int *)(lVar1 + 0x100) - iVar8) + -1) << 4);
              *(int *)(lVar1 + 0x100) = *(int *)(lVar1 + 0x100) + -1;
            }
            break;
          }
          plVar9 = plVar9 + 2;
        } while (plVar9 != plVar2 + (longlong)*(int *)(lVar1 + 0x100) * 2);
      }
    }
  }
LAB_14abc1cf0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// Tick @ 14ac62030

int __thiscall FMutableStreamableManager::Tick(FMutableStreamableManager *this,bool param_1)

{
  TArray<TSharedRef<FMutableStreamableManager::FMutableStreamableHandle,1>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res10 [8];
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_b8;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_a8;
  FString local_98;
  TSharedPtr<FStreamableHandle,1> local_88;
  FSourceLocation local_78;
  FReadAccessScope local_58;
  
  if (!param_1) {
    return 0;
  }
  pTVar1 = &this->StreamableHandles;
  iVar8 = (this->StreamableHandles).ArrayNum;
  pFVar9 = (pTVar1->AllocatorInstance).Data;
  pFVar10 = pFVar9 + (longlong)iVar8 * 0x10;
  do {
    if ((this->StreamableHandles).ArrayNum != iVar8) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TSharedRef<FMutableStreamableManager::FMutableStreamableHandle,1>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar9 == pFVar10) {
      DestructItems<TSharedRef<FMutableStreamableManager::FMutableStreamableHandle,1>,int>
                ((TSharedRef<FMutableStreamableManager::FMutableStreamableHandle,1> *)
                 (pTVar1->AllocatorInstance).Data,(this->StreamableHandles).ArrayNum);
      (this->StreamableHandles).ArrayNum = 0;
      if ((this->StreamableHandles).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&pTVar1->AllocatorInstance,0,&(this->StreamableHandles).ArrayMax);
      }
      return 0;
    }
    plVar2 = *(longlong **)pFVar9;
    if ((char)plVar2[5] == '\0') {
      local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.ArrayNum = 0;
      local_a8.ArrayMax = 0;
      if ((*plVar2 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        iVar8 = (*pcVar4)();
        return iVar8;
      }
      FStreamableHandle::GetRequestedAssets((FStreamableHandle *)*plVar2,&local_a8,true);
      FVar5.Data = local_a8.AllocatorInstance.Data;
      iVar6 = local_a8.ArrayNum;
      local_78.Impl._File =
           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\MutableStreamableManager.cpp"
      ;
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.Impl._Function = "int __cdecl FMutableStreamableManager::Tick(bool)";
      local_98.Data.ArrayNum = 0;
      local_98.Data.ArrayMax = 0;
      local_78.Impl._Line = 0x12;
      local_78.Impl._Column = 0x17;
      local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.ArrayNum = local_a8.ArrayNum;
      if (local_a8.ArrayNum == 0) {
        local_b8.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,local_a8.ArrayNum,0,&local_b8.AllocatorInstance,local_a8.ArrayNum,
                   &local_b8.ArrayMax);
        ConstructItems<FSoftObjectPath,FSoftObjectPath,int>
                  (local_b8.AllocatorInstance.Data,(FSoftObjectPath *)FVar5.Data,iVar6);
      }
      FStreamableManager::RequestSyncLoadInternal
                (&this->StreamableManager,&local_88,&local_b8,false,&local_98,&local_78);
      DestructItems<FSoftObjectPath,int>
                ((FSoftObjectPath *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
      if ((FSoftObjectPath *)local_b8.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
        FMemory::Free(local_b8.AllocatorInstance.Data);
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.SharedReferenceCount.ReferenceController);
      lVar3 = *(longlong *)pFVar9;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar3 + 0x10),&local_58)
      ;
      if ((*(int *)(lVar3 + 0x20) != 0) && (*(longlong **)(lVar3 + 0x18) != (longlong *)0x0)) {
        (**(code **)(**(longlong **)(lVar3 + 0x18) + 0x68))();
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_58);
      plVar2 = *(longlong **)pFVar9;
      if ((*plVar2 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        iVar8 = (*pcVar4)();
        return iVar8;
      }
      FStreamableHandle::CancelHandle((FStreamableHandle *)*plVar2);
      DestructItems<FSoftObjectPath,int>
                ((FSoftObjectPath *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
      if ((FSoftObjectPath *)local_a8.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
        FMemory::Free(local_a8.AllocatorInstance.Data);
      }
    }
    pFVar9 = pFVar9 + 0x10;
  } while( true );
}

