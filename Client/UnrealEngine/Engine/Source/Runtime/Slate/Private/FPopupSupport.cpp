// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 3

// RegisterClickNotification @ 1426d63c0

FDelegateHandle __thiscall
FPopupSupport::RegisterClickNotification
          (FPopupSupport *this,TSharedRef<SWidget,1> *param_1,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  FDelegateHandle FVar9;
  undefined8 *puVar10;
  SWidget *pSVar11;
  int *piVar12;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *in_R9;
  uint uVar13;
  SWidget *pSVar14;
  SWidget *pSVar15;
  int *piVar16;
  undefined8 local_c8;
  longlong *local_c0;
  undefined1 local_b8 [8];
  ForAnyElementType FStack_b0;
  int local_a8;
  FDestructionSentinel local_a0;
  undefined1 local_88 [8];
  FReadAccessScope local_80;
  FReadAccessScope local_68;
  
  pSVar14 = (SWidget *)0x0;
  piVar12 = &(this->ClickZoneNotifications).ArrayNum;
  iVar8 = *piVar12;
  pSVar11 = pSVar14;
  pSVar15 = pSVar14;
  if (0 < iVar8) {
    do {
      uVar13 = (uint)pSVar11;
      uVar7 = 0;
      if ((int)uVar13 < iVar8) {
        uVar7 = ~uVar13 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        FVar9.ID = (*pcVar4)();
        return (FDelegateHandle)FVar9.ID;
      }
      pFVar1 = (this->ClickZoneNotifications).AllocatorInstance.Data;
      if (((*(longlong *)((longlong)&pSVar15->_padding_ + (longlong)pFVar1) == 0) ||
          (lVar2 = *(longlong *)((longlong)&pSVar15->_padding_ + (longlong)pFVar1), lVar2 == 0)) ||
         (*(int *)(lVar2 + 8) < 1)) {
LAB_1426d64d3:
        uVar7 = 0;
        if ((int)uVar13 < *piVar12) {
          uVar7 = ~uVar13 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          FVar9.ID = (*pcVar4)();
          return (FDelegateHandle)FVar9.ID;
        }
        TArray<FPopupSupport::FClickSubscriber,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (&this->ClickZoneNotifications,uVar13);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,(ForAnyElementType *)this,*piVar12,
                   &(this->ClickZoneNotifications).ArrayMax);
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   ((longlong)&pSVar15->_padding_ + (longlong)pFVar1),&local_80);
        if (((*(int *)(pFVar1 + 8 + (longlong)&(pSVar15->FastPathProxyHandle).InvalidationRootHandle
                      ) == 0) ||
            (*(longlong **)
              (pFVar1 + (longlong)&(pSVar15->FastPathProxyHandle).InvalidationRootHandle) ==
             (longlong *)0x0)) ||
           (cVar6 = (**(code **)(**(longlong **)
                                   (pFVar1 + (longlong)
                                             &(pSVar15->FastPathProxyHandle).InvalidationRootHandle)
                                + 0x38))(), cVar6 == '\0')) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_80);
          goto LAB_1426d64d3;
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_80);
        pSVar11 = (SWidget *)(ulonglong)(uVar13 + 1);
        pSVar15 = (SWidget *)&(pSVar15->FastPathProxyHandle).WidgetIndex;
      }
      iVar8 = *piVar12;
    } while ((int)pSVar11 < iVar8);
  }
  piVar16 = &(this->ClickZoneNotifications).ArrayNum;
  piVar12 = &(this->ClickZoneNotifications).ArrayMax;
  local_c8 = *(undefined8 *)param_2;
  local_c0 = *(longlong **)&param_2->field_0x8;
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_c0 + 0xc) = *(int *)((longlong)local_c0 + 0xc) + 1;
    UNLOCK();
  }
  local_a8 = 0;
  local_b8 = (undefined1  [8])0x0;
  FStack_b0.Data = (FScriptContainerElement *)0x0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_b8,in_R9);
  pFVar1 = (this->ClickZoneNotifications).AllocatorInstance.Data;
  if (((pFVar1 <= (FScriptContainerElement *)&local_c8) &&
      ((FScriptContainerElement *)&local_c8 < pFVar1 + (longlong)*piVar12 * 0x28)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    FVar9.ID = (*pcVar4)();
    return (FDelegateHandle)FVar9.ID;
  }
  iVar8 = *piVar16;
  if (iVar8 == *piVar12) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,(ForAnyElementType *)this,piVar12);
    *piVar16 = iVar8;
  }
  *piVar16 = iVar8 + 1;
  pFVar1 = (this->ClickZoneNotifications).AllocatorInstance.Data + (longlong)iVar8 * 0x28;
  *(undefined8 *)pFVar1 = local_c8;
  *(longlong **)(pFVar1 + 8) = local_c0;
  local_c0 = (longlong *)0x0;
  local_c8 = 0;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(pFVar1 + 0x10),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_b8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b8,
             (FWriteAccessScope *)&local_a0);
  if ((local_a8 != 0) && (FStack_b0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_b0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_b0,0,0,0x10);
    local_a8 = 0;
  }
  if (local_a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
  }
  if (FStack_b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b8);
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    piVar12 = (int *)((longlong)local_c0 + 0xc);
    iVar8 = *piVar12;
    *piVar12 = *piVar12 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (**(code **)(*local_c0 + 8))(local_c0,1);
    }
  }
  iVar8 = (this->ClickZoneNotifications).ArrayNum;
  uVar13 = iVar8 - 1;
  uVar7 = 0;
  if ((int)uVar13 < iVar8) {
    uVar7 = ~uVar13 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    FVar9.ID = (*pcVar4)();
    return (FDelegateHandle)FVar9.ID;
  }
  iVar8 = (this->ClickZoneNotifications).ArrayNum;
  pFVar1 = (this->ClickZoneNotifications).AllocatorInstance.Data;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             (pFVar1 + (longlong)iVar8 * 0x28 + -0x18),&local_68);
  if ((*(int *)(pFVar1 + (longlong)iVar8 * 0x28 + -8) != 0) &&
     (plVar3 = *(longlong **)(pFVar1 + (longlong)iVar8 * 0x28 + -0x10), plVar3 != (longlong *)0x0))
  {
    puVar10 = (undefined8 *)(**(code **)(*plVar3 + 0x40))(plVar3,local_88);
    pSVar14 = (SWidget *)*puVar10;
  }
  param_1->Object = pSVar14;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_68);
  return (FDelegateHandle)(ulong64)param_1;
}

// SendNotifications @ 1426db4c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FPopupSupport::SendNotifications(FPopupSupport *this,FWidgetPath *param_1)

{
  code *pcVar1;
  atomic<int> aVar2;
  bool bVar3;
  uint uVar4;
  atomic<int> aVar5;
  ForElementType<FArrangedWidget> FVar6;
  TReferenceControllerBase<1> *pTVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  int iVar11;
  ForElementType<FArrangedWidget> FVar12;
  longlong lVar13;
  FReadAccessScope local_48;
  
  iVar11 = (this->ClickZoneNotifications).ArrayNum;
  uVar8 = 0;
  if (0 < iVar11) {
    lVar13 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar8 < iVar11) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar9 = (this->ClickZoneNotifications).AllocatorInstance.Data + lVar13;
      if (((*(longlong *)pFVar9 != 0) && (*(longlong *)(pFVar9 + 8) != 0)) &&
         (0 < *(int *)(*(longlong *)(pFVar9 + 8) + 8))) {
        pTVar7 = *(TReferenceControllerBase<1> **)(pFVar9 + 8);
        lVar10 = 0;
        if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
LAB_1426db5a4:
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x416,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if ((lVar10 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x26c,L""), bVar3)) {
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
              goto LAB_1426db5a4;
            }
            LOCK();
            aVar5 = pTVar7->SharedReferenceCount;
            bVar3 = aVar2 == aVar5;
            if (bVar3) {
              pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
              aVar5 = aVar2;
            }
            UNLOCK();
            aVar2 = aVar5;
          } while (!bVar3);
          lVar10 = *(longlong *)pFVar9;
          if (lVar10 == 0) goto LAB_1426db5a4;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        FVar6 = (param_1->Widgets).Array.AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<FArrangedWidget>)&(param_1->Widgets).Array;
        if (FVar6 != (ForElementType<FArrangedWidget>)0x0) {
          FVar12 = FVar6;
        }
        for (FVar6 = FVar12;
            FVar6 != (ForElementType<FArrangedWidget>)
                     ((longlong)FVar12 + (longlong)(param_1->Widgets).Array.ArrayNum * 0x48);
            FVar6 = (ForElementType<FArrangedWidget>)((longlong)FVar6 + 0x48)) {
          if (lVar10 == *(longlong *)((longlong)FVar6 + 0x38)) {
            if ((int)(((longlong)FVar6 - (longlong)FVar12) / 0x48) != -1) goto LAB_1426db697;
            break;
          }
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pFVar9 + 0x10),
                   &local_48);
        if ((*(int *)(pFVar9 + 0x20) != 0) && (*(longlong **)(pFVar9 + 0x18) != (longlong *)0x0)) {
          (**(code **)(**(longlong **)(pFVar9 + 0x18) + 0x68))();
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_48);
      }
LAB_1426db697:
      iVar11 = (this->ClickZoneNotifications).ArrayNum;
      uVar8 = uVar8 + 1;
      lVar13 = lVar13 + 0x28;
    } while ((int)uVar8 < iVar11);
  }
  return;
}

// UnregisterClickNotification @ 1426e4090

void __thiscall
FPopupSupport::UnregisterClickNotification(FPopupSupport *this,FDelegateHandle param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ulong64 *puVar6;
  int iVar7;
  uint uVar8;
  ulong64 uVar9;
  longlong lVar10;
  undefined1 local_res8 [8];
  FReadAccessScope local_48;
  
  uVar8 = 0;
  iVar7 = (this->ClickZoneNotifications).ArrayNum;
  if (0 < iVar7) {
    lVar10 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < iVar7) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this->ClickZoneNotifications).AllocatorInstance.Data;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pFVar1 + lVar10 + 0x10),
                 &local_48);
      if ((*(int *)(pFVar1 + lVar10 + 0x20) == 0) ||
         (plVar2 = *(longlong **)(pFVar1 + lVar10 + 0x18), plVar2 == (longlong *)0x0)) {
        uVar9 = 0;
      }
      else {
        puVar6 = (ulong64 *)(**(code **)(*plVar2 + 0x40))(plVar2,local_res8);
        uVar9 = *puVar6;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_48);
      if (uVar9 == param_1.ID) {
        uVar5 = 0;
        if ((int)uVar8 < (this->ClickZoneNotifications).ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        TArray<FPopupSupport::FClickSubscriber,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (&this->ClickZoneNotifications,uVar8);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,(ForAnyElementType *)this,(this->ClickZoneNotifications).ArrayNum,
                   &(this->ClickZoneNotifications).ArrayMax);
      }
      else {
        uVar8 = uVar8 + 1;
        lVar10 = lVar10 + 0x28;
      }
      iVar7 = (this->ClickZoneNotifications).ArrayNum;
    } while ((int)uVar8 < iVar7);
  }
  return;
}

