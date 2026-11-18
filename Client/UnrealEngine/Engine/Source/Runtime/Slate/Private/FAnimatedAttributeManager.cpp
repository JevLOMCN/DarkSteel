// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 8

// FAnimatedAttributeManager @ 1426a7010

FAnimatedAttributeManager * __thiscall
FAnimatedAttributeManager::FAnimatedAttributeManager(FAnimatedAttributeManager *this)

{
  (this->Attributes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Attributes).ArrayNum = 0;
  (this->Attributes).ArrayMax = 0;
  (this->TickHandle).ID = 0;
  return this;
}

// ~FAnimatedAttributeManager @ 1426aa340

void __thiscall
FAnimatedAttributeManager::~FAnimatedAttributeManager(FAnimatedAttributeManager *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TWeakPtr<TAnimatedAttributeBase,1>,int>
            ((TWeakPtr<TAnimatedAttributeBase,1> *)(this->Attributes).AllocatorInstance.Data,
             (this->Attributes).ArrayNum);
  pFVar1 = (this->Attributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Get @ 1426bc2c0

FAnimatedAttributeManager * __cdecl FAnimatedAttributeManager::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FAnimatedAttributeManager::Get'::__l2::_dynamic_atexit_destructor_for__Manager__);
      _Init_thread_footer(&::_TSS0);
      return &Manager;
    }
  }
  return &Manager;
}

// RegisterAttribute @ 1426d6190

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimatedAttributeManager::RegisterAttribute
          (FAnimatedAttributeManager *this,TSharedRef<TAnimatedAttributeBase,1> *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FSlateApplication *pFVar7;
  FDelegateHandle FVar8;
  FScriptContainerElement *pFVar9;
  TAnimatedAttributeBase *local_68;
  TReferenceControllerBase<1> *local_60;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_68 = param_1->Object;
  local_60 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_60 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_60->WeakReferenceCount = (atomic<int>)((int)local_60->WeakReferenceCount + 1);
    UNLOCK();
  }
  pFVar9 = (this->Attributes).AllocatorInstance.Data;
  if ((pFVar9 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 < pFVar9 + (longlong)(this->Attributes).ArrayMax * 0x10))
  {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->Attributes).ArrayNum;
  piVar1 = &(this->Attributes).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar1);
  }
  (this->Attributes).ArrayNum = iVar4 + 1;
  pFVar9 = (this->Attributes).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(TAnimatedAttributeBase **)pFVar9 = local_68;
  *(TReferenceControllerBase<1> **)(pFVar9 + 8) = local_60;
  if ((FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) &&
     ((this->TickHandle).ID == 0)) {
    local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_58,(FWriteAccessScope *)&local_28);
    local_10 = &local_50;
    puVar5 = UE::Core::Private::DelegateAllocate(0x28,&local_50);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[2] = uVar6;
      *puVar5 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFAnimatedAttributeManager____A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar5[4] = Tick;
      puVar5[3] = this;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    pFVar7 = FSlateApplication::Get();
    FVar8 = TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>::Add
                      ((TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>
                        *)&pFVar7->PreTickEvent,
                       (TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)&stack0x00000008
                      );
                    /* WARNING: Load size is inaccurate */
    (this->TickHandle).ID = *FVar8.ID;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_58,(FWriteAccessScope *)&local_40);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  }
  return;
}

// SetupTick @ 1426de6d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAnimatedAttributeManager::SetupTick(FAnimatedAttributeManager *this)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FSlateApplication *pFVar3;
  FDelegateHandle FVar4;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_48;
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  if ((FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) &&
     ((this->TickHandle).ID == 0)) {
    local_48.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_40.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_48,(FWriteAccessScope *)&local_30);
    local_18 = &local_40;
    puVar1 = UE::Core::Private::DelegateAllocate(0x28,&local_40);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFAnimatedAttributeManager____A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar1[4] = Tick;
      puVar1[3] = this;
    }
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    pFVar3 = FSlateApplication::Get();
    FVar4 = TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>::Add
                      ((TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>
                        *)&pFVar3->PreTickEvent,
                       (TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)&stack0x00000010
                      );
                    /* WARNING: Load size is inaccurate */
    (this->TickHandle).ID = *FVar4.ID;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_48,(FWriteAccessScope *)&local_30);
    if ((local_40.DelegateSize != 0) &&
       (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_40,0,0,0x10);
      local_40.DelegateSize = 0;
    }
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_40.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_48.AccessDetector);
  }
  return;
}

// TeardownTick @ 1426e0250

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAnimatedAttributeManager::TeardownTick(FAnimatedAttributeManager *this)

{
  FDelegateHandle FVar1;
  FSlateApplication *pFVar2;
  
  if (((this->TickHandle).ID != 0) &&
     (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0)) {
    pFVar2 = FSlateApplication::Get();
    FVar1.ID = (this->TickHandle).ID;
    if (FVar1.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pFVar2->PreTickEvent,FVar1);
    }
    (this->TickHandle).ID = 0;
    return;
  }
  (this->TickHandle).ID = 0;
  return;
}

// Tick @ 1426e0790

void __thiscall FAnimatedAttributeManager::Tick(FAnimatedAttributeManager *this,float param_1)

{
  code *pcVar1;
  atomic<int> aVar2;
  byte bVar3;
  atomic<int> aVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  byte bVar14;
  int iVar15;
  bool bVar16;
  undefined1 local_res8 [8];
  
  iVar11 = (this->Attributes).ArrayNum;
  lVar8 = (longlong)iVar11;
  iVar15 = 0;
  if (iVar11 != 0) {
    pFVar13 = (this->Attributes).AllocatorInstance.Data;
    iVar15 = 0;
    if (((*(longlong *)pFVar13 == 0) || (*(longlong *)(pFVar13 + 8) == 0)) ||
       (*(int *)(*(longlong *)(pFVar13 + 8) + 8) < 1)) {
      bVar14 = 0;
    }
    else {
      bVar14 = 1;
    }
    lVar6 = 0;
    iVar11 = 0;
    do {
      lVar6 = lVar6 + 1;
      iVar12 = iVar11 + 1;
      if (lVar6 < lVar8) {
        pFVar5 = pFVar13 + lVar6 * 0x10;
        do {
          if (((*(longlong *)pFVar5 == 0) || (*(longlong *)(pFVar5 + 8) == 0)) ||
             (*(int *)(*(longlong *)(pFVar5 + 8) + 8) < 1)) {
            bVar3 = 0;
          }
          else {
            bVar3 = 1;
          }
          if (bVar14 != bVar3) break;
          iVar12 = iVar12 + 1;
          lVar6 = lVar6 + 1;
          pFVar5 = pFVar5 + 0x10;
        } while (lVar6 < lVar8);
      }
      iVar9 = iVar12 - iVar11;
      if (bVar14 == 0) {
        DestructItems<TWeakPtr<TAnimatedAttributeBase,1>,int>
                  ((TWeakPtr<TAnimatedAttributeBase,1> *)(pFVar13 + (longlong)iVar11 * 0x10),iVar9);
      }
      else {
        if (iVar15 != iVar11) {
          memmove(pFVar13 + (longlong)iVar15 * 0x10,pFVar13 + (longlong)iVar11 * 0x10,
                  (longlong)iVar9 << 4);
        }
        iVar15 = iVar15 + iVar9;
      }
      bVar14 = bVar14 ^ 1;
      iVar11 = iVar12;
    } while (lVar6 < lVar8);
    (this->Attributes).ArrayNum = iVar15;
  }
  pFVar13 = (this->Attributes).AllocatorInstance.Data;
  pFVar5 = pFVar13 + (longlong)iVar15 * 0x10;
  do {
    if ((this->Attributes).ArrayNum != iVar15) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TWeakPtr<TAnimatedAttributeBase,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar13 == pFVar5) {
      return;
    }
    pTVar7 = *(TReferenceControllerBase<1> **)(pFVar13 + 8);
    plVar10 = (longlong *)0x0;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
LAB_1426e08f0:
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar16) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      aVar2 = pTVar7->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          pTVar7 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_1426e08f0;
        }
        LOCK();
        aVar4 = pTVar7->SharedReferenceCount;
        bVar16 = aVar2 == aVar4;
        if (bVar16) {
          pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar4 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar4;
      } while (!bVar16);
      plVar10 = *(longlong **)pFVar13;
      if (plVar10 == (longlong *)0x0) goto LAB_1426e08f0;
    }
    (**(code **)(*plVar10 + 8))(plVar10,param_1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    pFVar13 = pFVar13 + 0x10;
  } while( true );
}

// UnregisterAttribute @ 1426e3eb0

void __thiscall
FAnimatedAttributeManager::UnregisterAttribute
          (FAnimatedAttributeManager *this,TSharedRef<TAnimatedAttributeBase,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  TWeakPtr<TAnimatedAttributeBase,1> *pTVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  TWeakPtr<TAnimatedAttributeBase,1> local_38;
  
  local_38.Object = param_1->Object;
  local_38.WeakReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_38.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (TWeakPtr<TAnimatedAttributeBase,1> *)(this->Attributes).AllocatorInstance.Data;
  if (((pTVar4 <= &local_38) && (&local_38 < pTVar4 + (this->Attributes).ArrayMax)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar3 = (this->Attributes).ArrayNum;
  if (iVar3 != 0) {
    iVar11 = 0;
    pTVar4 = (TWeakPtr<TAnimatedAttributeBase,1> *)(this->Attributes).AllocatorInstance.Data;
    bVar7 = TWeakPtr<TAnimatedAttributeBase,1>::UEOpEquals<TAnimatedAttributeBase>(pTVar4,&local_38)
    ;
    bVar7 = !bVar7;
    iVar9 = 0;
    do {
      iVar6 = iVar9;
      do {
        iVar6 = iVar6 + 1;
        if (iVar3 <= iVar6) break;
        bVar8 = TWeakPtr<TAnimatedAttributeBase,1>::UEOpEquals<TAnimatedAttributeBase>
                          (pTVar4 + iVar6,&local_38);
      } while (bVar7 == !bVar8);
      iVar10 = iVar6 - iVar9;
      if (bVar7 == false) {
        DestructItems<TWeakPtr<TAnimatedAttributeBase,1>,int>(pTVar4 + iVar9,iVar10);
      }
      else {
        if (iVar11 != iVar9) {
          memmove(pTVar4 + iVar11,pTVar4 + iVar9,(longlong)iVar10 << 4);
        }
        iVar11 = iVar11 + iVar10;
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar9 = iVar6;
    } while (iVar6 < iVar3);
    (this->Attributes).ArrayNum = iVar11;
  }
  if (local_38.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_38.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_38.WeakReferenceCount.ReferenceController,1);
    }
  }
  return;
}

