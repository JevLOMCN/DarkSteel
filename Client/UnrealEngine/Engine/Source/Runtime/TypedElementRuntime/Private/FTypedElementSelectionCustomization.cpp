// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementRuntime
// Functions: 9

// ~FTypedElementSelectionCustomization @ 14453f3b0

void __thiscall
FTypedElementSelectionCustomization::~FTypedElementSelectionCustomization
          (FTypedElementSelectionCustomization *this)

{
  return;
}

// AllowSelectionModifiers @ 144540270

bool __thiscall
FTypedElementSelectionCustomization::AllowSelectionModifiers
          (FTypedElementSelectionCustomization *this,
          TTypedElement<ITypedElementSelectionInterface> *param_1,
          TSharedRef<TTypedElementList<FTypedElementHandle>_const_,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong *plVar4;
  TTypedElementList<FTypedElementHandle> *local_18;
  TReferenceControllerBase<1> *local_10;
  
  local_18 = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    plVar4 = *(longlong **)&param_1->field_0x10;
    lVar3 = *plVar4;
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    plVar4 = *(longlong **)&param_1->field_0x10;
    lVar3 = *plVar4;
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_10 = pTVar1;
  uVar2 = (**(code **)(lVar3 + 0x68))(plVar4,param_1,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return (bool)uVar2;
}

// CanDeselectElement @ 144540d60

bool __thiscall
FTypedElementSelectionCustomization::CanDeselectElement
          (FTypedElementSelectionCustomization *this,
          TTypedElement<ITypedElementSelectionInterface> *param_1,
          FTypedElementSelectionOptions *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000144540d67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(longlong **)&param_1->field_0x10 + 0x38))();
  return (bool)uVar1;
}

// CanSelectElement @ 144541290

bool __thiscall
FTypedElementSelectionCustomization::CanSelectElement
          (FTypedElementSelectionCustomization *this,
          TTypedElement<ITypedElementSelectionInterface> *param_1,
          FTypedElementSelectionOptions *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000144541297. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(longlong **)&param_1->field_0x10 + 0x28))();
  return (bool)uVar1;
}

// DeselectElement @ 1445420c0

bool __thiscall
FTypedElementSelectionCustomization::DeselectElement
          (FTypedElementSelectionCustomization *this,
          TTypedElement<ITypedElementSelectionInterface> *param_1,
          TSharedRef<TTypedElementList<FTypedElementHandle>,1> *param_2,
          FTypedElementSelectionOptions *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong *plVar4;
  TTypedElementList<FTypedElementHandle> *local_18;
  TReferenceControllerBase<1> *local_10;
  
  local_18 = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    plVar4 = *(longlong **)&param_1->field_0x10;
    lVar3 = *plVar4;
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    plVar4 = *(longlong **)&param_1->field_0x10;
    lVar3 = *plVar4;
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_10 = pTVar1;
  uVar2 = (**(code **)(lVar3 + 0x58))(plVar4,param_1,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return (bool)uVar2;
}

// GetNormalizedElements @ 144544870

void __thiscall
FTypedElementSelectionCustomization::GetNormalizedElements
          (FTypedElementSelectionCustomization *this,
          TTypedElement<ITypedElementSelectionInterface> *param_1,
          TSharedRef<TTypedElementList<FTypedElementHandle>_const_,1> *param_2,
          FTypedElementSelectionNormalizationOptions *param_3,
          TSharedRef<TTypedElementList<FTypedElementHandle>,1> *param_4)

{
  longlong lVar1;
  FTypedElementInternalData *pFVar2;
  FTypedElementReferences *pFVar3;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  undefined4 uVar7;
  bool bVar8;
  int iVar9;
  undefined4 uVar10;
  UTypedElementRegistry *pUVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  TReferenceControllerBase<1> *pTVar14;
  undefined1 *puVar15;
  longlong lVar16;
  uint uVar17;
  TObjectPtr<UClass>_u_0 local_78;
  FTypedElementHandle local_70;
  FTypedElementInternalData *local_60;
  int local_58;
  undefined1 local_50 [16];
  longlong *local_40;
  
  pFVar2 = *(FTypedElementInternalData **)param_1;
  local_70.DataPtr = (FTypedElementInternalData *)0x0;
  local_70.ReferenceId = -1;
  if (pFVar2 != (FTypedElementInternalData *)0x0) {
    local_70.DataPtr = pFVar2;
    local_70.ReferenceId = FTypedElementInternalData::AddRef(pFVar2,true);
  }
  do {
    pUVar11 = (UTypedElementRegistry *)FWeakObjectPtr::Get(&(param_2->Object->Registry).WeakPtr);
    local_50._0_8_ = (FTypedElementInternalData *)0x0;
    local_50._8_4_ = -1;
    local_40 = (longlong *)0x0;
    local_78.DebugPtr = UTypedElementHierarchyInterface::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_78.DebugPtr != (UClass *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)local_78.DebugPtr);
    }
    TypedElementList_Private::GetElementImpl
              (pUVar11,&local_70,(TSubclassOf<UInterface> *)&local_78.ObjectPtr,
               (TTypedElement<void> *)local_50);
    if ((FTypedElementInternalData *)local_50._0_8_ == (FTypedElementInternalData *)0x0) {
LAB_144544c7f:
      if (local_70.DataPtr != (FTypedElementInternalData *)0x0) {
        FTypedElementInternalData::ReleaseRef(local_70.DataPtr,local_70.ReferenceId);
      }
      TTypedElementList<FTypedElementHandle>::Add(param_4->Object,(FTypedElementHandle *)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_2->SharedReferenceCount).ReferenceController);
      pTVar14 = (param_4->SharedReferenceCount).ReferenceController;
      goto LAB_144544cad;
    }
    if (local_40 == (longlong *)0x0) {
      if ((FTypedElementInternalData *)local_50._0_8_ != (FTypedElementInternalData *)0x0) {
        FTypedElementInternalData::ReleaseRef
                  ((FTypedElementInternalData *)local_50._0_8_,local_50._8_4_);
      }
      goto LAB_144544c7f;
    }
    (**(code **)(*local_40 + 0x18))(local_40,&local_60,local_50,1);
    if (local_70.DataPtr != (FTypedElementInternalData *)0x0) {
      FTypedElementInternalData::ReleaseRef(local_70.DataPtr,local_70.ReferenceId);
    }
    pFVar2 = local_60;
    local_70.DataPtr = local_60;
    local_70.ReferenceId = local_58;
    local_60 = (FTypedElementInternalData *)0x0;
    local_58 = -1;
    if ((pFVar2 != (FTypedElementInternalData *)0x0) &&
       (bVar8 = TTypedElementList<FTypedElementHandle>::ContainsElementImpl
                          (param_2->Object,&pFVar2->Id), uVar7 = local_50._8_4_, bVar8)) {
      if ((FTypedElementInternalData *)local_50._0_8_ != (FTypedElementInternalData *)0x0) {
        lVar16 = (longlong)(int)local_50._8_4_;
        LOCK();
        *(int *)(local_50._0_8_ + 0xc) = *(int *)(local_50._0_8_ + 0xc) + -1;
        UNLOCK();
        pFVar3 = ((TUniquePtr<FTypedElementReferences,TDefaultDelete<FTypedElementReferences>_> *)
                 (local_50._0_8_ + 0x10))->Ptr;
        if ((pFVar3 != (FTypedElementReferences *)0x0) && (local_50._8_4_ != -1)) {
          EnterCriticalSection((LPCRITICAL_SECTION)pFVar3);
          lVar4 = *(longlong *)&(pFVar3->References).field_0x0;
          puVar15 = &(pFVar3->References).field_0x10;
          bVar6 = (byte)uVar7 & 0x1f;
          uVar17 = 1 << bVar6 | 1U >> 0x20 - bVar6;
          if ((((int)uVar7 < 0) || (*(int *)&(pFVar3->References).field_0x28 <= (int)uVar7)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar12 = *(undefined1 **)&(pFVar3->References).field_0x20;
          lVar1 = (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4;
          if (puVar12 == (undefined1 *)0x0) {
            puVar12 = puVar15;
          }
          if (((*(uint *)(puVar12 + lVar1) & uVar17) == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("AllocationFlags[Index]",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                 ,0xc5,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (*(int *)&(pFVar3->References).field_0x34 != 0) {
            *(undefined4 *)((longlong)*(int *)&(pFVar3->References).field_0x30 * 0x108 + lVar4) =
                 uVar7;
          }
          *(undefined4 *)(lVar16 * 0x108 + lVar4) = 0xffffffff;
          if (*(int *)&(pFVar3->References).field_0x34 < 1) {
            uVar10 = 0xffffffff;
          }
          else {
            uVar10 = *(undefined4 *)&(pFVar3->References).field_0x30;
          }
          *(undefined4 *)(lVar16 * 0x108 + 4 + lVar4) = uVar10;
          puVar12 = &(pFVar3->References).field_0x34;
          *(int *)puVar12 = *(int *)puVar12 + 1;
          *(undefined4 *)&(pFVar3->References).field_0x30 = uVar7;
          if ((((int)uVar7 < 0) || (*(int *)&(pFVar3->References).field_0x28 <= (int)uVar7)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar12 = *(undefined1 **)&(pFVar3->References).field_0x20;
          if (puVar12 == (undefined1 *)0x0) {
            puVar12 = puVar15;
          }
          *(uint *)(puVar12 + lVar1) = *(uint *)(puVar12 + lVar1) & ~uVar17;
          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar3);
        }
      }
      local_40 = (longlong *)0x0;
      local_50._0_8_ = (FTypedElementInternalData *)0x0;
      local_50._8_4_ = -1;
      if (local_70.DataPtr != (FTypedElementInternalData *)0x0) {
        FTypedElementInternalData::ReleaseRef(local_70.DataPtr,local_70.ReferenceId);
      }
      local_70.DataPtr = (FTypedElementInternalData *)0x0;
      local_70.ReferenceId = -1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_2->SharedReferenceCount).ReferenceController);
      pTVar14 = (param_4->SharedReferenceCount).ReferenceController;
LAB_144544cad:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
      return;
    }
    uVar7 = local_50._8_4_;
    if ((FTypedElementInternalData *)local_50._0_8_ != (FTypedElementInternalData *)0x0) {
      lVar16 = (longlong)(int)local_50._8_4_;
      LOCK();
      *(int *)(local_50._0_8_ + 0xc) = *(int *)(local_50._0_8_ + 0xc) + -1;
      UNLOCK();
      pFVar3 = ((TUniquePtr<FTypedElementReferences,TDefaultDelete<FTypedElementReferences>_> *)
               (local_50._0_8_ + 0x10))->Ptr;
      if ((pFVar3 != (FTypedElementReferences *)0x0) && (local_50._8_4_ != -1)) {
        EnterCriticalSection((LPCRITICAL_SECTION)pFVar3);
        lVar4 = *(longlong *)&(pFVar3->References).field_0x0;
        puVar15 = &(pFVar3->References).field_0x10;
        bVar6 = (byte)uVar7 & 0x1f;
        uVar17 = 1 << bVar6 | 1U >> 0x20 - bVar6;
        if ((((int)uVar7 < 0) || (*(int *)&(pFVar3->References).field_0x28 <= (int)uVar7)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        puVar12 = *(undefined1 **)&(pFVar3->References).field_0x20;
        puVar13 = puVar15;
        if (puVar12 != (undefined1 *)0x0) {
          puVar13 = puVar12;
        }
        iVar9 = uVar7;
        if ((int)uVar7 < 0) {
          iVar9 = uVar7 + 0x1f;
        }
        lVar1 = (longlong)(iVar9 >> 5) * 4;
        if (((*(uint *)(puVar13 + lVar1) & uVar17) == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("AllocationFlags[Index]",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                               ,0xc5,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (*(int *)&(pFVar3->References).field_0x34 != 0) {
          *(undefined4 *)((longlong)*(int *)&(pFVar3->References).field_0x30 * 0x108 + lVar4) =
               uVar7;
        }
        *(undefined4 *)(lVar16 * 0x108 + lVar4) = 0xffffffff;
        if (*(int *)&(pFVar3->References).field_0x34 < 1) {
          uVar10 = 0xffffffff;
        }
        else {
          uVar10 = *(undefined4 *)&(pFVar3->References).field_0x30;
        }
        *(undefined4 *)(lVar16 * 0x108 + 4 + lVar4) = uVar10;
        puVar12 = &(pFVar3->References).field_0x34;
        *(int *)puVar12 = *(int *)puVar12 + 1;
        *(undefined4 *)&(pFVar3->References).field_0x30 = uVar7;
        if ((((int)uVar7 < 0) || (*(int *)&(pFVar3->References).field_0x28 <= (int)uVar7)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        puVar12 = *(undefined1 **)&(pFVar3->References).field_0x20;
        if (puVar12 != (undefined1 *)0x0) {
          puVar15 = puVar12;
        }
        *(uint *)(puVar15 + lVar1) = *(uint *)(puVar15 + lVar1) & ~uVar17;
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar3);
      }
    }
  } while( true );
}

// GetSelectionElement @ 144545f40

FTypedElementHandle * __thiscall
FTypedElementSelectionCustomization::GetSelectionElement
          (FTypedElementSelectionCustomization *this,FTypedElementHandle *__return_storage_ptr__,
          TTypedElement<ITypedElementSelectionInterface> *param_1,
          TSharedRef<TTypedElementList<FTypedElementHandle>_const_,1> *param_2,
          ETypedElementSelectionMethod param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    lVar2 = **(longlong **)&param_1->field_0x10;
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    lVar2 = **(longlong **)&param_1->field_0x10;
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(lVar2 + 0x78))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// IsElementSelected @ 144546ee0

bool __thiscall
FTypedElementSelectionCustomization::IsElementSelected
          (FTypedElementSelectionCustomization *this,
          TTypedElement<ITypedElementSelectionInterface> *param_1,
          TSharedRef<TTypedElementList<FTypedElementHandle>_const_,1> *param_2,
          FTypedElementIsSelectedOptions *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong *plVar4;
  TTypedElementList<FTypedElementHandle> *local_18;
  TReferenceControllerBase<1> *local_10;
  
  local_18 = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    plVar4 = *(longlong **)&param_1->field_0x10;
    lVar3 = *plVar4;
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    plVar4 = *(longlong **)&param_1->field_0x10;
    lVar3 = *plVar4;
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_10 = pTVar1;
  uVar2 = (**(code **)(lVar3 + 0x18))(plVar4,param_1,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return (bool)uVar2;
}

// SelectElement @ 144548970

bool __thiscall
FTypedElementSelectionCustomization::SelectElement
          (FTypedElementSelectionCustomization *this,
          TTypedElement<ITypedElementSelectionInterface> *param_1,
          TSharedRef<TTypedElementList<FTypedElementHandle>,1> *param_2,
          FTypedElementSelectionOptions *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong *plVar4;
  TTypedElementList<FTypedElementHandle> *local_18;
  TReferenceControllerBase<1> *local_10;
  
  local_18 = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    plVar4 = *(longlong **)&param_1->field_0x10;
    lVar3 = *plVar4;
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    plVar4 = *(longlong **)&param_1->field_0x10;
    lVar3 = *plVar4;
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_10 = pTVar1;
  uVar2 = (**(code **)(lVar3 + 0x48))(plVar4,param_1,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return (bool)uVar2;
}

