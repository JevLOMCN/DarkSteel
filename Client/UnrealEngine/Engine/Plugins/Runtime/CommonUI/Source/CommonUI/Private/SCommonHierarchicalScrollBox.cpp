// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 2

// AppendFocusableChildren @ 14a7beae0

void __thiscall
SCommonHierarchicalScrollBox::AppendFocusableChildren
          (SCommonHierarchicalScrollBox *this,
          TArray<TSharedRef<SWidget,1>,TSizedDefaultAllocator<32>_> *param_1,
          TSharedRef<SWidget,1> *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  SWidget *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  TSharedRef<SWidget,1> local_18;
  
  plVar5 = (longlong *)(**(code **)(param_2->Object->_padding_ + 0x180))();
  iVar7 = 0;
  iVar4 = (**(code **)*plVar5)(plVar5);
  if (0 < iVar4) {
    do {
      (**(code **)(*plVar5 + 0x10))(plVar5,&local_28,iVar7);
      if (((byte)local_28->VisibilityAttribute & 0x19) != 0) {
        cVar2 = (**(code **)(local_28->_padding_ + 0x198))();
        if (cVar2 == '\0') {
          local_18.Object = local_28;
          local_18.SharedReferenceCount.ReferenceController = pTStack_20;
          if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_20->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
            UNLOCK();
          }
          AppendFocusableChildren(this,param_1,&local_18);
        }
        else {
          pFVar6 = (param_1->AllocatorInstance).Data;
          if (((pFVar6 <= (FScriptContainerElement *)&local_28) &&
              ((FScriptContainerElement *)&local_28 < pFVar6 + (longlong)param_1->ArrayMax * 0x10))
             && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar4 = param_1->ArrayNum;
          if (iVar4 == param_1->ArrayMax) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
          }
          pFVar6 = (param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
          param_1->ArrayNum = iVar4 + 1;
          *(SWidget **)pFVar6 = local_28;
          *(TReferenceControllerBase<1> **)(pFVar6 + 8) = pTStack_20;
          if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_20->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
            UNLOCK();
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_20);
      iVar7 = iVar7 + 1;
      iVar4 = (**(code **)*plVar5)(plVar5);
    } while (iVar7 < iVar4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// OnNavigation @ 14a7fdb00

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FNavigationReply * __thiscall
SCommonHierarchicalScrollBox::OnNavigation
          (SCommonHierarchicalScrollBox *this,FNavigationReply *__return_storage_ptr__,
          FGeometry *param_1,FNavigationEvent *param_2)

{
  EUINavigation EVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  TOptional<EFocusCause> TVar8;
  FNavigationReply *pFVar9;
  undefined6 extraout_var;
  FGeometry *pFVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  EUINavigation *pEVar19;
  int iVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  float local_f8;
  float fStack_f4;
  TArray<TSharedRef<SWidget,1>,TSizedDefaultAllocator<32>_> local_f0;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [16];
  TSharedPtr<SWidget,1> local_b8;
  SWidget *local_a8;
  FSharedReferencer<1> FStack_a0;
  undefined8 local_98;
  FSharedReferencer<1> local_90;
  TSharedPtr<FNavigationMetaData,1> local_88;
  undefined8 local_78;
  FSharedReferencer<1> local_70;
  TSharedRef<SWidget,1> local_68;
  TSharedPtr<SWidget,1> local_58;
  
  uVar15 = 0;
  iVar20 = -1;
  uVar14 = 0xffffffff;
  local_e0 = CONCAT44(local_e0._4_4_,0xffffffff);
  local_a8 = (SWidget *)0x0;
  FStack_a0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.ArrayNum = 0;
  local_f0.ArrayMax = 0;
  if ((*(longlong *)&this->field_0x2c8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FNavigationReply *)(*pcVar4)();
    return pFVar9;
  }
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x2d0;
  pSVar3 = *(SWidget **)&this->field_0x2c8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar3 == (SWidget *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FNavigationReply *)(*pcVar4)();
    return pFVar9;
  }
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_68.Object = pSVar3;
  local_68.SharedReferenceCount.ReferenceController = pTVar2;
  AppendFocusableChildren(this,&local_f0,&local_68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  uVar16 = uVar15;
  if (0 < local_f0.ArrayNum) {
    do {
      uVar13 = (uint)uVar15;
      uVar18 = ~uVar13 >> 0x1f;
      uVar11 = 0;
      if ((int)uVar13 < local_f0.ArrayNum) {
        uVar11 = uVar18;
      }
      if ((uVar11 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FNavigationReply *)(*pcVar4)();
        return pFVar9;
      }
      TVar8 = SWidget::HasUserFocus
                        (*(SWidget **)(local_f0.AllocatorInstance.Data + uVar16),(int)local_c8);
      if (*(char *)(CONCAT62(extraout_var,TVar8) + 1) != '\0') {
LAB_14a7fdd28:
        uVar14 = 0;
        if ((int)uVar13 < local_f0.ArrayNum) {
          uVar14 = uVar18;
        }
        if ((uVar14 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar9 = (FNavigationReply *)(*pcVar4)();
          return pFVar9;
        }
        local_90.ReferenceController =
             *(TReferenceControllerBase<1> **)
              (local_f0.AllocatorInstance.Data + (longlong)(int)uVar13 * 0x10 + 8);
        local_a8 = *(SWidget **)
                    &local_f0.AllocatorInstance.Data[(longlong)(int)uVar13 * 0x10].field_0x0;
        if (local_90.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_90.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_90.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_98 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_a0,&local_90);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_90.ReferenceController);
        uVar14 = uVar13;
        break;
      }
      uVar11 = 0;
      if ((int)uVar13 < local_f0.ArrayNum) {
        uVar11 = uVar18;
      }
      if ((uVar11 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FNavigationReply *)(*pcVar4)();
        return pFVar9;
      }
      bVar5 = SWidget::HasUserFocusedDescendants
                        (*(SWidget **)(local_f0.AllocatorInstance.Data + uVar16),
                         *(int *)((longlong)&param_2->_padding_ + 4));
      if (bVar5) goto LAB_14a7fdd28;
      uVar15 = (ulonglong)(uVar13 + 1);
      uVar16 = uVar16 + 0x10;
    } while ((int)(uVar13 + 1) < local_f0.ArrayNum);
  }
  if (local_a8 != (SWidget *)0x0) {
    EVar1 = param_2->NavigationType;
    pEVar19 = &param_2->NavigationType;
    uVar11 = (uint)EVar1;
    local_d8 = pEVar19;
    if (*(int *)&this->field_0x398 == 1) {
      uVar11 = EVar1 - 2;
      if (uVar11 != 0) {
LAB_14a7fddc5:
        if (uVar11 != 1) goto LAB_14a7fe15f;
        iVar20 = 1;
        goto LAB_14a7fddd1;
      }
    }
    else {
      if (uVar11 != 0) goto LAB_14a7fddc5;
LAB_14a7fddd1:
      local_e0 = CONCAT44(local_e0._4_4_,iVar20);
    }
    uVar14 = iVar20 + uVar14;
    uVar15 = (ulonglong)uVar14;
    bVar5 = false;
    local_b8.Object = (SWidget *)0x0;
    local_b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (((int)uVar14 < local_f0.ArrayNum) && (iVar12 = local_f0.ArrayNum, -1 < (int)uVar14)) {
LAB_14a7fdeb9:
      lVar17 = uVar15 << 4;
      local_e0 = (longlong)iVar20 << 4;
      while (uVar14 = (uint)uVar15, (int)uVar14 < iVar12) {
        uVar11 = 0;
        if ((int)uVar14 < iVar12) {
          uVar11 = ~uVar14 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar9 = (FNavigationReply *)(*pcVar4)();
          return pFVar9;
        }
        pTVar2 = *(TReferenceControllerBase<1> **)(local_f0.AllocatorInstance.Data + lVar17 + 8);
        pSVar3 = *(SWidget **)(local_f0.AllocatorInstance.Data + lVar17);
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        cVar7 = (**(code **)(pSVar3->_padding_ + 0x198))(pSVar3);
        if (cVar7 != '\0') {
          if (!bVar5) {
            if ((local_a8 == (SWidget *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              pFVar9 = (FNavigationReply *)(*pcVar4)();
              return pFVar9;
            }
            pFVar10 = SWidget::GetCachedGeometry(local_a8);
            local_f8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
            fStack_f4 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
            local_d8 = (EUINavigation *)
                       CONCAT44(local_f8 * (pFVar10->AccumulatedRenderTransform).M.M[0][1] +
                                fStack_f4 * (pFVar10->AccumulatedRenderTransform).M.M[1][1] +
                                (pFVar10->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y,
                                local_f8 * (pFVar10->AccumulatedRenderTransform).M.M[0][0] +
                                fStack_f4 * (pFVar10->AccumulatedRenderTransform).M.M[1][0] +
                                (pFVar10->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X);
            local_d0 = local_d8;
            pFVar10 = SWidget::GetCachedGeometry(pSVar3);
            local_f8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
            fStack_f4 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
            EVar1 = *pEVar19;
            fVar22 = local_f8 * (pFVar10->AccumulatedRenderTransform).M.M[0][0] +
                     fStack_f4 * (pFVar10->AccumulatedRenderTransform).M.M[1][0] +
                     (pFVar10->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
            fVar23 = local_f8 * (pFVar10->AccumulatedRenderTransform).M.M[0][1] +
                     fStack_f4 * (pFVar10->AccumulatedRenderTransform).M.M[1][1] +
                     (pFVar10->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
            if (*(int *)&this->field_0x398 == 1) {
              if (EVar1 == Up) {
                bVar6 = local_d0._4_4_ == fVar23;
                bVar21 = local_d0._4_4_ < fVar23;
              }
              else {
                if (EVar1 != Down) goto LAB_14a7fe098;
                bVar6 = fVar23 == local_d0._4_4_;
                bVar21 = fVar23 < local_d0._4_4_;
              }
            }
            else if (EVar1 == Left) {
              bVar6 = (float)local_d0 == fVar22;
              bVar21 = (float)local_d0 < fVar22;
            }
            else {
              if (EVar1 != Right) goto LAB_14a7fe098;
              bVar6 = fVar22 == (float)local_d0;
              bVar21 = fVar22 < (float)local_d0;
            }
            if (bVar21 || bVar6) goto LAB_14a7fe098;
          }
          if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_78 = 0;
          local_b8.Object = pSVar3;
          local_70.ReferenceController = pTVar2;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&local_b8.SharedReferenceCount,&local_70);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_70.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar2);
          break;
        }
LAB_14a7fe098:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        lVar17 = lVar17 + local_e0;
        uVar15 = (ulonglong)(uVar14 + iVar20);
        if ((int)(uVar14 + iVar20) < 0) break;
        iVar12 = local_f0.ArrayNum;
      }
    }
    else {
      local_d8 = &param_2->NavigationType;
      SWidget::GetMetaData<FNavigationMetaData>((SWidget *)this,&local_88);
      pEVar19 = local_d8;
      if (local_88.Object != (FNavigationMetaData *)0x0) {
        if ((local_88.Object == (FNavigationMetaData *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar9 = (FNavigationReply *)(*pcVar4)();
          return pFVar9;
        }
        bVar5 = (local_88.Object)->Rules[EVar1].BoundaryRule == Wrap;
        if (bVar5) {
          uVar15 = (longlong)(int)(local_f0.ArrayNum + uVar14) % (longlong)local_f0.ArrayNum &
                   0xffffffff;
        }
        pEVar19 = &param_2->NavigationType;
        iVar20 = (int)local_e0;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.SharedReferenceCount.ReferenceController);
      if (-1 < (int)uVar15) {
        iVar12 = local_f0.ArrayNum;
        goto LAB_14a7fdeb9;
      }
    }
    if (local_b8.Object != (SWidget *)0x0) {
      SScrollBox::ScrollDescendantIntoView
                ((SScrollBox *)this,&local_b8,true,this->field_0x32c,*(float *)&this->field_0x328);
      local_58.Object = local_b8.Object;
      local_58.SharedReferenceCount.ReferenceController =
           local_b8.SharedReferenceCount.ReferenceController;
      if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FNavigationReply::Explicit(__return_storage_ptr__,&local_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b8.SharedReferenceCount.ReferenceController);
      goto LAB_14a7fe176;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.SharedReferenceCount.ReferenceController);
  }
LAB_14a7fe15f:
  SWidget::OnNavigation((SWidget *)this,__return_storage_ptr__,param_1,param_2);
LAB_14a7fe176:
  DestructItems<TSharedRef<SWidget,1>,int>
            ((TSharedRef<SWidget,1> *)local_f0.AllocatorInstance.Data,local_f0.ArrayNum);
  if ((TSharedRef<SWidget,1> *)local_f0.AllocatorInstance.Data != (TSharedRef<SWidget,1> *)0x0) {
    FMemory::Free(local_f0.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_a0.ReferenceController);
  return __return_storage_ptr__;
}

