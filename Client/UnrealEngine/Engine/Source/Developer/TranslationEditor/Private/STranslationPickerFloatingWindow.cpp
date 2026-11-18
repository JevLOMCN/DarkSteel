// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TranslationEditor
// Functions: 21

// ~STranslationPickerFloatingWindow @ 146b99360

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
STranslationPickerFloatingWindow::~STranslationPickerFloatingWindow
          (STranslationPickerFloatingWindow *this)

{
  atomic<int> *paVar1;
  TSharedPtr<FTranslationPickerInputProcessor,1> *pTVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  FSlateApplication *this_00;
  longlong local_28;
  FSharedReferencer<1> FStack_20;
  TSharedPtr<IInputProcessor,1> local_18;
  
  pTVar2 = &this->InputProcessor;
  this->_padding_ = (longlong)&___7STranslationPickerFloatingWindow__6B_;
  if (pTVar2->Object != (FTranslationPickerInputProcessor *)0x0) {
    pTVar2->Object->Owner = (STranslationPickerFloatingWindow *)0x0;
    if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
      this_00 = FSlateApplication::Get();
      local_18.Object = (IInputProcessor *)pTVar2->Object;
      local_18.SharedReferenceCount.ReferenceController =
           (this->InputProcessor).SharedReferenceCount.ReferenceController;
      if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FSlateApplication::UnregisterInputPreProcessor(this_00,&local_18);
    }
    local_28 = 0;
    FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar2 != (TSharedPtr<FTranslationPickerInputProcessor,1> *)&local_28) {
      pTVar2->Object = (FTranslationPickerInputProcessor *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->InputProcessor).SharedReferenceCount,&FStack_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_20.ReferenceController);
  }
  pTVar4 = (this->LastTickHoveringWidgetPath).Window.WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  DestructItems<TWeakPtr<SWidget,1>,int>
            ((TWeakPtr<SWidget,1> *)
             (this->LastTickHoveringWidgetPath).Widgets.AllocatorInstance.Data,
             (this->LastTickHoveringWidgetPath).Widgets.ArrayNum);
  pFVar5 = (this->LastTickHoveringWidgetPath).Widgets.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TextListView).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<FTranslationPickerTextItem,1>,int>
            ((TSharedPtr<FTranslationPickerTextItem,1> *)
             (this->TextListItems).AllocatorInstance.Data,(this->TextListItems).ArrayNum);
  pFVar5 = (this->TextListItems).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->WindowContents).SharedReferenceCount.ReferenceController);
  pTVar4 = (this->ParentWindow).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InputProcessor).SharedReferenceCount.ReferenceController);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// operator() @ 146b99fd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`STranslationPickerFloatingWindow::PickTextFromWidget'::__l2::<lambda_1>::operator()
          (void *this,FText *param_1,TSharedPtr<SWidget,1> *param_2,FWidgetPath *param_3,
          bool param_4)

{
  FText *pFVar1;
  bool bVar2;
  FPaintGeometry *pFVar3;
  longlong lVar4;
  ForAnyElementType this_00;
  FPaintGeometry local_58;
  
  pFVar1 = (FText *)(TranslationPickerManager::PickedTexts.AllocatorInstance.Data +
                    (longlong)TranslationPickerManager::PickedTexts.ArrayNum * 0x48);
  this_00.Data = TranslationPickerManager::PickedTexts.AllocatorInstance.Data;
  do {
    if ((FText *)this_00.Data == pFVar1) {
LAB_146b9a032:
      pFVar3 = STranslationPickerFloatingWindow::GetPaintGeometry
                         (*(STranslationPickerFloatingWindow **)this,&local_58,param_2,param_3,
                          param_4);
      if (TranslationPickerManager::PickedTexts.ArrayNum ==
          TranslationPickerManager::PickedTexts.ArrayMax) {
        TranslationPickerManager::PickedTexts.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x848,&TranslationPickerManager::PickedTexts.AllocatorInstance,
                        &TranslationPickerManager::PickedTexts.ArrayMax);
      }
      lVar4 = (longlong)TranslationPickerManager::PickedTexts.ArrayNum;
      TranslationPickerManager::PickedTexts.ArrayNum =
           TranslationPickerManager::PickedTexts.ArrayNum + 1;
      FTranslationPickerTextAndGeom::FTranslationPickerTextAndGeom
                ((FTranslationPickerTextAndGeom *)
                 (TranslationPickerManager::PickedTexts.AllocatorInstance.Data + lVar4 * 0x48),
                 param_1,pFVar3);
LAB_146b9a09f:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_2->SharedReferenceCount).ReferenceController);
      return;
    }
    bVar2 = FText::IdenticalTo((FText *)this_00.Data,param_1,None);
    if (bVar2) {
      if ((FText *)this_00.Data != (FText *)0x0) goto LAB_146b9a09f;
      goto LAB_146b9a032;
    }
    this_00.Data = (FScriptContainerElement *)&((FText *)((longlong)this_00.Data + 0x40))->Flags;
  } while( true );
}

// operator() @ 146b9a6e0

/* WARNING: Removing unreachable block (ram,0x000146b9aacc) */
/* WARNING: Removing unreachable block (ram,0x000146b9aad1) */
/* WARNING: Removing unreachable block (ram,0x000146b9aad5) */
/* WARNING: Removing unreachable block (ram,0x000146b9ab01) */
/* WARNING: Removing unreachable block (ram,0x000146b9aab8) */
/* WARNING: Removing unreachable block (ram,0x000146b9aabd) */
/* WARNING: Removing unreachable block (ram,0x000146b9ab02) */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
`STranslationPickerFloatingWindow::Tick'::__l8::<lambda_1>::operator()
          (void *this,FTranslationPickerTextAndGeom *param_1,FTranslationPickerTextAndGeom *param_2)

{
  float *pfVar1;
  TVector2<float>_u_0_s_0 TVar2;
  TVector2<float>_u_0_s_0 TVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  int iVar6;
  FString *pFVar7;
  ForAnyElementType FVar8;
  ForAnyElementType FVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  TVector2<float>_u_0_s_0 local_120;
  FString local_118;
  FString local_108;
  undefined1 local_f8 [12];
  float local_ec;
  float local_e8;
  float local_e4;
  TVector2<float>_u_0 local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  TVector2<float>_u_0_s_0 local_c0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  TVector2<float>_u_0_s_0 local_a8;
  
  fVar11 = __real_7f7fffff;
  fVar10 = __real_358637bd;
  local_d0 = (param_1->Geometry).AccumulatedRenderTransform.M.M[0][0];
  fStack_cc = (param_1->Geometry).AccumulatedRenderTransform.M.M[0][1];
  fStack_c8 = (param_1->Geometry).AccumulatedRenderTransform.M.M[1][0];
  fStack_c4 = (param_1->Geometry).AccumulatedRenderTransform.M.M[1][1];
  local_c0 = (param_1->Geometry).AccumulatedRenderTransform.Trans.field0_0x0._s_0;
  local_f8._8_4_ = local_c0.X;
  local_ec = local_c0.Y;
  local_a8 = (param_2->Geometry).AccumulatedRenderTransform.Trans.field0_0x0._s_0;
  fVar16 = local_a8.X;
  fVar17 = local_a8.Y;
  TVar2 = (param_1->Geometry).LocalSize.field0_0x0._s_0;
  TVar3 = (param_2->Geometry).LocalSize.field0_0x0._s_0;
  local_120.X = TVar2.X;
  fVar18 = SQRT(fStack_cc * fStack_cc + local_d0 * local_d0) * local_120.X;
  local_e8 = fVar18 + (float)local_f8._8_4_;
  local_b8 = (param_2->Geometry).AccumulatedRenderTransform.M.M[0][0];
  fStack_b4 = (param_2->Geometry).AccumulatedRenderTransform.M.M[0][1];
  fStack_b0 = (param_2->Geometry).AccumulatedRenderTransform.M.M[1][0];
  fStack_ac = (param_2->Geometry).AccumulatedRenderTransform.M.M[1][1];
  local_120.Y = TVar2.Y;
  fVar12 = SQRT(fStack_c4 * fStack_c4 + fStack_c8 * fStack_c8) * local_120.Y;
  local_e4 = fVar12 + local_ec;
  local_120.X = TVar3.X;
  fVar15 = SQRT(fStack_b4 * fStack_b4 + local_b8 * local_b8) * local_120.X + fVar16;
  local_120.Y = TVar3.Y;
  fVar14 = SQRT(fStack_ac * fStack_ac + fStack_b0 * fStack_b0) * local_120.Y + fVar17;
  local_120 = TVar3;
  local_e0._s_0.X = fVar16;
  local_e0._s_0.Y = fVar17;
  local_d8 = fVar15;
  local_d4 = fVar14;
  if ((((__real_322bcc77 <
         (float)((uint)((float)local_f8._8_4_ - fVar16) & __xmm_7fffffff7fffffff7fffffff7fffffff))
       || (__real_322bcc77 <
           (float)((uint)(local_ec - fVar17) & __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
      (__real_322bcc77 < (float)((uint)(local_e8 - fVar15) & __xmm_7fffffff7fffffff7fffffff7fffffff)
      )) || (__real_322bcc77 <
             (float)((uint)(local_e4 - fVar14) & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    pfVar1 = (float *)((longlong)this + 8);
    fVar13 = __real_7f7fffff;
    if ((__real_358637bd <= fVar18) && (__real_358637bd <= fVar12)) {
      STranslationPickerFloatingWindow::GetNearestPoint
                ((FSlateRect *)&local_120,(TVector2<float> *)(local_f8 + 8),(bool *)pfVar1);
      fVar12 = *(float *)((longlong)this + 0xc) - local_120.Y;
      fVar13 = fVar12 * fVar12 + (*pfVar1 - local_120.X) * (*pfVar1 - local_120.X);
    }
    if ((fVar10 <= fVar15 - fVar16) && (fVar10 <= fVar14 - fVar17)) {
      STranslationPickerFloatingWindow::GetNearestPoint
                ((FSlateRect *)local_f8,(TVector2<float> *)&local_e0._s_0,(bool *)pfVar1);
      fVar10 = *(float *)((longlong)this + 0xc) - (float)local_f8._4_4_;
      fVar11 = fVar10 * fVar10 +
               (*pfVar1 - (float)local_f8._0_4_) * (*pfVar1 - (float)local_f8._0_4_);
    }
    bVar5 = fVar13 < fVar11;
  }
  else {
    local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.Data.ArrayNum = 0;
    local_108.Data.ArrayMax = 0;
    local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.Data.ArrayNum = 0;
    local_118.Data.ArrayMax = 0;
    pFVar7 = FTextInspector::GetSourceString(&param_1->Text);
    if ((pFVar7 != (FString *)0x0) && (&local_108 != pFVar7)) {
      iVar6 = (pFVar7->Data).ArrayNum;
      pFVar4 = (pFVar7->Data).AllocatorInstance.Data;
      local_108.Data.ArrayNum = iVar6;
      if (((iVar6 != 0) || (local_108.Data.ArrayMax != 0)) &&
         (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar6,local_108.Data.ArrayMax,(ForAnyElementType *)&local_108,iVar6,
                     &local_108.Data.ArrayMax), iVar6 != 0)) {
        memcpy(local_108.Data.AllocatorInstance.Data,pFVar4,(longlong)iVar6 * 2);
      }
    }
    pFVar7 = FTextInspector::GetSourceString(&param_2->Text);
    if ((pFVar7 != (FString *)0x0) && (&local_118 != pFVar7)) {
      iVar6 = (pFVar7->Data).ArrayNum;
      pFVar4 = (pFVar7->Data).AllocatorInstance.Data;
      local_118.Data.ArrayNum = iVar6;
      if (((iVar6 != 0) || (local_118.Data.ArrayMax != 0)) &&
         (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar6,local_118.Data.ArrayMax,(ForAnyElementType *)&local_118,iVar6,
                     &local_118.Data.ArrayMax), iVar6 != 0)) {
        memcpy(local_118.Data.AllocatorInstance.Data,pFVar4,(longlong)iVar6 * 2);
      }
    }
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_118.Data.ArrayNum != 0) {
      FVar9.Data = local_118.Data.AllocatorInstance.Data;
    }
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_108.Data.ArrayNum != 0) {
      FVar8.Data = local_108.Data.AllocatorInstance.Data;
    }
    iVar6 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar8.Data,(wchar_t *)FVar9.Data);
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    bVar5 = SUB41((uint)iVar6 >> 0x1f,0);
  }
  return bVar5;
}

// operator() @ 146b9ab40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
`STranslationPickerFloatingWindow::PickTextFromWidget'::__l2::<lambda_2>::operator()
          (void *this,FText *param_1,TSharedPtr<SWidget,1> *param_2,FWidgetPath *param_3,
          bool param_4)

{
  FText *pFVar1;
  code *pcVar2;
  FHistoricTextFormatData *pFVar3;
  bool bVar4;
  FText *pFVar5;
  FPaintGeometry *pFVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  FSharedReferencer<1> FVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  undefined1 local_138 [8];
  TArray<FHistoricTextFormatData,TSizedDefaultAllocator<32>_> local_130;
  uint local_120;
  FScriptContainerElement *local_118;
  FHistoricTextFormatData *local_110;
  TSharedPtr<SWidget,1> local_108;
  TSharedPtr<SWidget,1> local_f8;
  FScriptContainerElement *local_e8;
  undefined4 uStack_e0;
  uint uStack_dc;
  FScriptContainerElement *local_d8;
  longlong lStack_d0;
  TSharedPtr<SWidget,1> local_c8;
  FText local_b8;
  FPaintGeometry local_a8;
  FPaintGeometry local_70;
  
  bVar4 = FText::IsEmpty(param_1);
  if (!bVar4) {
    local_130.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_130.ArrayNum = 0;
    local_130.ArrayMax = 0;
    FTextInspector::GetHistoricFormatData(param_1,&local_130);
    uVar9 = (ulonglong)local_130.ArrayNum;
    local_120 = local_130.ArrayNum;
    if (local_130.ArrayNum < 1) {
      local_c8.Object = param_2->Object;
      local_c8.SharedReferenceCount.ReferenceController =
           (param_2->SharedReferenceCount).ReferenceController;
      if (local_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      __l2::<lambda_1>::operator()((void *)((longlong)this + 8),param_1,&local_c8,param_3,param_4);
    }
    else {
      local_110 = (FHistoricTextFormatData *)(local_130.AllocatorInstance.Data + uVar9 * 0x30);
      pFVar12 = local_130.AllocatorInstance.Data + 0x20;
      while( true ) {
        pFVar3 = local_110;
        local_118 = pFVar12;
        if (local_130.ArrayNum != (int)uVar9) {
          local_138[0] = 0;
          `TCheckedPointerIterator<FHistoricTextFormatData,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_138);
        }
        if ((FHistoricTextFormatData *)(pFVar12 + -0x20) == pFVar3) break;
        FVar11.ReferenceController = (param_2->SharedReferenceCount).ReferenceController;
        local_108.Object = param_2->Object;
        if (FVar11.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar11.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar11.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_108.SharedReferenceCount.ReferenceController = FVar11.ReferenceController;
        pFVar5 = FTextFormat::GetSourceText((FTextFormat *)(pFVar12 + -0x10),&local_b8);
        pFVar1 = (FText *)(TranslationPickerManager::PickedTexts.AllocatorInstance.Data +
                          (longlong)TranslationPickerManager::PickedTexts.ArrayNum * 0x48);
        for (FVar10 = TranslationPickerManager::PickedTexts.AllocatorInstance;
            (FText *)FVar10.Data != pFVar1;
            FVar10.Data = (FScriptContainerElement *)
                          &((FText *)((longlong)FVar10.Data + 0x40))->Flags) {
          bVar4 = FText::IdenticalTo((FText *)FVar10.Data,pFVar5,None);
          if (bVar4) {
            if ((FText *)FVar10.Data != (FText *)0x0) goto LAB_146b9acdf;
            break;
          }
        }
        pFVar6 = STranslationPickerFloatingWindow::GetPaintGeometry
                           (*(STranslationPickerFloatingWindow **)((longlong)this + 8),&local_a8,
                            &local_108,param_3,param_4);
        if (TranslationPickerManager::PickedTexts.ArrayNum ==
            TranslationPickerManager::PickedTexts.ArrayMax) {
          TranslationPickerManager::PickedTexts.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x848,&TranslationPickerManager::PickedTexts.AllocatorInstance,
                          &TranslationPickerManager::PickedTexts.ArrayMax);
        }
        lVar7 = (longlong)TranslationPickerManager::PickedTexts.ArrayNum;
        TranslationPickerManager::PickedTexts.ArrayNum =
             TranslationPickerManager::PickedTexts.ArrayNum + 1;
        FTranslationPickerTextAndGeom::FTranslationPickerTextAndGeom
                  ((FTranslationPickerTextAndGeom *)
                   (TranslationPickerManager::PickedTexts.AllocatorInstance.Data + lVar7 * 0x48),
                   pFVar5,pFVar6);
        FVar11.ReferenceController = local_108.SharedReferenceCount.ReferenceController;
LAB_146b9acdf:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar11.ReferenceController);
        if (local_b8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
        }
        uStack_e0 = 0;
        lStack_d0 = (ulonglong)uStack_dc << 0x20;
        local_e8 = pFVar12;
        local_d8 = pFVar12;
        for (iVar13 = 0; (-1 < iVar13 && (iVar13 < *(int *)(pFVar12 + 8))); iVar13 = iVar13 + 1) {
          if ((iVar13 < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar7 = (longlong)iVar13 * 0x30 + *(longlong *)pFVar12;
          if (*(int *)(lVar7 + 0x10) == 4) {
            local_f8.Object = param_2->Object;
            local_f8.SharedReferenceCount.ReferenceController =
                 (param_2->SharedReferenceCount).ReferenceController;
            if (local_f8.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                   1);
              UNLOCK();
            }
            if ((*(int *)(lVar7 + 0x10) != 4) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Type == EFormatArgumentType::Text",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Internationalization\\Text.h"
                                   ,0x40a,L""), bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if ((*(longlong *)(lVar7 + 0x20) == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x1bd,
                                   L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                  ), bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar1 = (FText *)(TranslationPickerManager::PickedTexts.AllocatorInstance.Data +
                              (longlong)TranslationPickerManager::PickedTexts.ArrayNum * 0x48);
            for (FVar10.Data = TranslationPickerManager::PickedTexts.AllocatorInstance.Data;
                (FText *)FVar10.Data != pFVar1;
                FVar10.Data = (FScriptContainerElement *)
                              &((FText *)((longlong)FVar10.Data + 0x40))->Flags) {
              bVar4 = FText::IdenticalTo((FText *)FVar10.Data,(FText *)(lVar7 + 0x20),None);
              if (bVar4) {
                if ((FText *)FVar10.Data != (FText *)0x0) goto LAB_146b9aeb4;
                break;
              }
            }
            pFVar6 = STranslationPickerFloatingWindow::GetPaintGeometry
                               (*(STranslationPickerFloatingWindow **)((longlong)this + 8),&local_70
                                ,&local_f8,param_3,param_4);
            if (TranslationPickerManager::PickedTexts.ArrayNum ==
                TranslationPickerManager::PickedTexts.ArrayMax) {
              TranslationPickerManager::PickedTexts.ArrayNum =
                   UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x848,&TranslationPickerManager::PickedTexts.AllocatorInstance,
                              &TranslationPickerManager::PickedTexts.ArrayMax);
            }
            lVar8 = (longlong)TranslationPickerManager::PickedTexts.ArrayNum;
            TranslationPickerManager::PickedTexts.ArrayNum =
                 TranslationPickerManager::PickedTexts.ArrayNum + 1;
            FTranslationPickerTextAndGeom::FTranslationPickerTextAndGeom
                      ((FTranslationPickerTextAndGeom *)
                       (TranslationPickerManager::PickedTexts.AllocatorInstance.Data + lVar8 * 0x48)
                       ,(FText *)(lVar7 + 0x20),pFVar6);
LAB_146b9aeb4:
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_f8.SharedReferenceCount.ReferenceController);
          }
        }
        pFVar12 = local_118 + 0x30;
        uVar9 = (ulonglong)local_120;
      }
    }
    DestructItems<FHistoricTextFormatData,int>
              ((FHistoricTextFormatData *)local_130.AllocatorInstance.Data,local_130.ArrayNum);
    if ((FHistoricTextFormatData *)local_130.AllocatorInstance.Data !=
        (FHistoricTextFormatData *)0x0) {
      FMemory::Free(local_130.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// Close @ 146b9d3a0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STranslationPickerFloatingWindow::Close
          (STranslationPickerFloatingWindow *this,FReply *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FSlateApplication *pFVar3;
  TSharedRef<SWidget,1> *pTVar4;
  FReply *pFVar5;
  SWindow *local_38;
  TReferenceControllerBase<1> *local_30;
  SWidget *local_28;
  TReferenceControllerBase<1> *local_20;
  TSharedRef<SWidget,1> local_18;
  
  pFVar3 = FSlateApplication::Get();
  pcVar1 = *(code **)(*(longlong *)pFVar3 + 0x28);
  pTVar4 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_18);
  local_28 = pTVar4->Object;
  local_20 = (pTVar4->SharedReferenceCount).ReferenceController;
  if (local_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar1)(pFVar3,&local_38,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (local_38 != (SWindow *)0x0) {
    if ((local_38 == (SWindow *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FReply *)(*pcVar1)();
      return pFVar5;
    }
    SWindow::RequestDestroyWindow(local_38);
  }
  TranslationPickerManager::ResetPickerWindow();
  FReply::FReply(__return_storage_ptr__,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  return __return_storage_ptr__;
}

// Construct @ 146ba38c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
STranslationPickerFloatingWindow::Construct
          (STranslationPickerFloatingWindow *this,FArguments *param_1)

{
  atomic<int> *paVar1;
  TSharedPtr<SToolTip,1> *pTVar2;
  longlong *this_00;
  atomic<int> aVar3;
  SWindow *pSVar4;
  SWidget *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  SToolTip *pSVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  undefined8 uVar11;
  bool bVar12;
  bool bVar13;
  FArguments *pFVar14;
  TSharedRef<SToolTip,1> *pTVar15;
  FSlotArguments *pFVar16;
  FArguments *pFVar17;
  undefined8 *puVar18;
  TSharedRef<SWidget,1> *pTVar19;
  ulong64 uVar20;
  TSharedRef<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,1> *pTVar21;
  FSizeParam *pFVar22;
  FArguments *pFVar23;
  FText *pFVar24;
  TSharedRef<STextBlock,1> *pTVar25;
  FArguments *pFVar26;
  TSharedRef<SVerticalBox,1> *pTVar27;
  TReferenceControllerBase<1> *pTVar28;
  FSlateApplication *this_01;
  TSharedPtr<FTranslationPickerInputProcessor,1> *pTVar29;
  wchar_t *pwVar30;
  wchar_t *pwVar31;
  TReferenceControllerBase<1> *pTVar32;
  undefined4 local_res8;
  undefined4 uStackX_c;
  T0RequiredArgs local_res10 [8];
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  FLLMScope local_14f8;
  FLLMScope local_14f4;
  FLLMScope local_14f0;
  FLLMScope local_14ec;
  undefined4 local_14e8;
  undefined1 local_14e4;
  undefined1 local_14e0 [8];
  ForAnyElementType FStack_14d8;
  ulonglong local_14d0;
  uchar local_14c8;
  undefined1 local_14c7;
  undefined1 local_14c0 [8];
  ForAnyElementType FStack_14b8;
  ulonglong local_14b0;
  FArguments *local_14a8;
  FArguments *local_14a0;
  SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *local_1498;
  FSharedReferencer<1> local_1490;
  STextBlock *local_1488;
  FSharedReferencer<1> local_1480;
  TReferenceControllerBase<1> *local_1478;
  FSharedReferencer<1> FStack_1470;
  FName local_1468;
  undefined4 uStack_1460;
  undefined4 uStack_145c;
  SToolTip *local_1458;
  FSharedReferencer<1> local_1450;
  undefined8 local_1448;
  undefined8 uStack_1440;
  undefined1 local_1438;
  undefined1 local_1430 [8];
  ForAnyElementType FStack_1428;
  ulonglong local_1420;
  FName local_1418;
  FMemScope local_1410;
  FName local_1408;
  FMemScope local_1400;
  FArguments *local_13f8;
  FName local_13f0;
  FMemScope local_13e8;
  FMemScope local_13e0;
  longlong *local_13d8;
  code *local_13d0;
  SVerticalBox *local_13c8;
  TReferenceControllerBase<1> *local_13c0;
  TAttribute<float> local_13b8;
  TSlateDecl<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,RequiredArgs::T0RequiredArgs>
  local_1398;
  TSharedPtr<IInputProcessor,1> local_1380;
  longlong local_1370;
  undefined8 uStack_1368;
  FDestructionSentinel local_1360;
  FDestructionSentinel local_1348;
  FDestructionSentinel local_1330;
  FDestructionSentinel local_1318;
  undefined1 *local_1300;
  TAttribute<FText> local_12f8;
  FText local_12c8;
  FText local_12b8;
  TSharedRef<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,1> local_12a8;
  SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *local_1298;
  TReferenceControllerBase<1> *pTStack_1290;
  TSharedRef<SWidget,1> local_1288;
  TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs> local_1278;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_1260;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1248;
  TSharedRef<SToolTip,1> local_1230;
  SWindow *local_1220;
  TReferenceControllerBase<1> *pTStack_1218;
  TSharedRef<SVerticalBox,1> local_1210;
  TSharedRef<STextBlock,1> local_1200;
  undefined1 local_11f0 [48];
  TDelegateBase<FNotThreadSafeDelegateMode> local_11c0;
  undefined8 *local_11a8 [2];
  TReferenceControllerBase<1> *local_1198;
  TDelegateBase<FNotThreadSafeDelegateMode> local_1178 [2];
  TDelegateBase<FNotThreadSafeDelegateMode> local_1140;
  TDelegateBase<FNotThreadSafeDelegateMode> local_1120;
  char local_1108;
  TDelegateBase<FNotThreadSafeDelegateMode> local_10f8;
  TDelegateBase<FNotThreadSafeDelegateMode> local_10d8;
  undefined8 *local_10c0 [2];
  TReferenceControllerBase<1> *local_10b0;
  TDelegateBase<FNotThreadSafeDelegateMode> local_1090 [2];
  TDelegateBase<FNotThreadSafeDelegateMode> local_1058;
  TDelegateBase<FNotThreadSafeDelegateMode> local_1038;
  char local_1020;
  TDelegateBase<FNotThreadSafeDelegateMode> local_1010;
  TDelegateBase<FNotThreadSafeDelegateMode> local_ff0;
  FArguments local_fd8;
  FArguments local_c90;
  FArguments local_a88;
  FArguments local_5a8;
  undefined8 uStack_48;
  
  uStack_48 = 0x146ba38df;
  bVar10 = false;
  bVar9 = false;
  bVar13 = false;
  local_res8 = 0;
  pTVar32 = (param_1->_ParentWindow).WeakReferenceCount.ReferenceController;
  pSVar4 = (param_1->_ParentWindow).Object;
  if (pTVar32 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar32->WeakReferenceCount = (atomic<int>)((int)pTVar32->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_1220 = (this->ParentWindow).Object;
  pTStack_1218 = (this->ParentWindow).WeakReferenceCount.ReferenceController;
  (this->ParentWindow).Object = pSVar4;
  (this->ParentWindow).WeakReferenceCount.ReferenceController = pTVar32;
  if (pTStack_1218 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTStack_1218->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTStack_1218->_padding_ + 8))(pTStack_1218,1);
    }
  }
  pFVar14 = SToolTip::FArguments::FArguments(&local_fd8);
  FLLMScope::FLLMScope(&local_14f8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1418 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1410,&local_1418,true);
  TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs>
            (&local_1278,"SToolTip",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TranslationEditor\\Private\\TranslationPickerFloatingWindow.cpp"
             ,0xa5,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope(&local_1410);
  FLLMScope::~FLLMScope(&local_14f8);
  pTVar15 = TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1278,&local_1230,pFVar14);
  local_1450.ReferenceController = (pTVar15->SharedReferenceCount).ReferenceController;
  local_1458 = pTVar15->Object;
  if (local_1450.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1450.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_1450.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = &this->WindowContents;
  if (pTVar2 != (TSharedPtr<SToolTip,1> *)&local_1458) {
    pTVar2->Object = local_1458;
    local_1458 = (SToolTip *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->WindowContents).SharedReferenceCount,&local_1450);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1450.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1230.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1278._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_fd8._OnSetInteractiveWindowLocation
            );
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_fd8._IsInteractive.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_fd8._BorderImage.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_fd8._TextMargin.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_fd8._Font.Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_fd8._Font.Value.CompositeFont.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_fd8._Content.Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_fd8._Text.Getter);
  if (local_fd8._Text.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_fd8._Text.Value.TextData.Reference + 0x10))();
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_fd8);
  if (pTVar2->Object == (SToolTip *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar12) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  local_13d8 = &pTVar2->Object->_padding_;
  local_13d0 = *(code **)(*local_13d8 + 0x10);
  local_14a0 = SVerticalBox::FArguments::FArguments(&local_c90);
  pFVar16 = SVerticalBox::Slot((FSlotArguments *)local_10c0);
  local_13b8.Value = 1.0;
  local_13b8.bIsSet = true;
  local_13b8.Getter._16_8_ = 0;
  local_13b8.Getter._0_8_ = 0;
  local_13b8.Getter._8_8_ = 0;
  local_14a8 = (FArguments *)SVerticalBox::FSlot::FSlotArguments::FillHeight(pFVar16,&local_13b8);
  pFVar17 = SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::FArguments::FArguments(&local_a88)
  ;
  pFVar17 = SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::FArguments::ListItemsSource
                      (pFVar17,&this->TextListItems);
  local_13f8 = pFVar17;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar17->_OnGenerateRow,
             (FWriteAccessScope *)&local_1318);
  local_1300 = &(pFVar17->_OnGenerateRow).field_0x8;
  puVar18 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1300);
  if (puVar18 == (undefined8 *)0x0) {
    pTVar32 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    uStack_145c = uStack_1368._4_4_;
    local_1468 = (FName)TextListView_OnGenerateWidget;
    uStack_1460 = 0;
    pTVar19 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1288);
    pTVar32 = (pTVar19->SharedReferenceCount).ReferenceController;
    pSVar5 = pTVar19->Object;
    if (pTVar32 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar32->SharedReferenceCount = (atomic<int>)((int)pTVar32->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar32->SharedReferenceCount = (atomic<int>)((int)pTVar32->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar18 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_UFTranslationPickerTextItem___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar20 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar20;
    *puVar18 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSTranslationPickerFloatingWindow___00__A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_UFTranslationPickerTextItem___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar18[3] = pSVar5;
    puVar18[4] = pTVar32;
    if (pTVar32 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar32->WeakReferenceCount = (atomic<int>)((int)pTVar32->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar10 = true;
    bVar9 = true;
    bVar13 = true;
    *(FName *)(puVar18 + 5) = local_1468;
    puVar18[6] = CONCAT44(uStack_145c,uStack_1460);
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar32);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar32);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1288.SharedReferenceCount.ReferenceController);
  }
  if (local_1318.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1318.Accessor,&local_1318);
  }
  local_14c8 = (uchar)EVisibility::Collapsed.Value.Value;
  local_14c7 = 1;
  local_14c0 = (undefined1  [8])0x0;
  FStack_14b8.Data = (FScriptContainerElement *)0x0;
  local_14b0 = 0;
  (pFVar17->_ScrollbarVisibility).Value.Value.Value = (uchar)EVisibility::Collapsed.Value.Value;
  (pFVar17->_ScrollbarVisibility).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar17->_ScrollbarVisibility).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_14c0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_14c0,
             (FWriteAccessScope *)&local_1360);
  pTVar32 = (TReferenceControllerBase<1> *)&DAT_00000010;
  if (((int)local_14b0 != 0) && (FStack_14b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_14b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_14b8,0,0,0x10);
    local_14b0 = local_14b0 & 0xffffffff00000000;
  }
  if (local_1360.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1360.Accessor,&local_1360);
  }
  if (FStack_14b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_14b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_14c0);
  FLLMScope::FLLMScope(&local_14f4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1408 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1400,&local_1408,true);
  TSlateDecl<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,RequiredArgs::T0RequiredArgs>
            (&local_1398,"STextListView",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TranslationEditor\\Private\\TranslationPickerFloatingWindow.cpp"
             ,0xad,local_res10);
  FMemScope::~FMemScope(&local_1400);
  FLLMScope::~FLLMScope(&local_14f4);
  if (local_1398._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1398._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1398._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_1298 = (this->TextListView).Object;
  pTStack_1290 = (this->TextListView).SharedReferenceCount.ReferenceController;
  (this->TextListView).Object = local_1398._Widget.Object;
  (this->TextListView).SharedReferenceCount.ReferenceController =
       local_1398._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1290);
  pTVar21 = TSlateDecl<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,RequiredArgs::T0RequiredArgs>
            ::operator<<=(&local_1398,&local_12a8,local_13f8);
  pFVar26 = local_14a8;
  pTVar28 = (pTVar21->SharedReferenceCount).ReferenceController;
  local_1498 = pTVar21->Object;
  if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1490.ReferenceController = pTVar28;
  if ((SListView<TSharedPtr<FTranslationPickerTextItem,1>_> **)&local_14a8->_padding_ != &local_1498
     ) {
    local_14a8->_padding_ = (longlong)local_1498;
    local_1498 = (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_14a8->_padding_,&local_1490);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1490.ReferenceController);
  local_14a8 = SVerticalBox::FArguments::operator+(local_14a0,(FSlotArguments *)pFVar26);
  pFVar16 = SVerticalBox::Slot((FSlotArguments *)local_11a8);
  pFVar16 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar16->field_0x18,0.0);
  local_14a0 = (FArguments *)pFVar16;
  pFVar22 = (FSizeParam *)FAuto::FAuto((FAuto *)local_11f0);
  TOptional<FSizeParam>::operator=((TOptional<FSizeParam> *)&pFVar16->field_0x58,pFVar22);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_11c0)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_11f0 + 0x10));
  uVar11 = _UNK_150925428;
  local_1438 = 1;
  local_1420 = 0;
  local_1448 = ___xmm_40a0000040a0000040a0000040a00000;
  uStack_1440 = _UNK_150925428;
  local_1430 = (undefined1  [8])0x0;
  FStack_1428.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&pFVar16->field_0x18 = ___xmm_40a0000040a0000040a0000040a00000;
  *(undefined8 *)&pFVar16->field_0x20 = uVar11;
  pFVar16->field_0x28 = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar16->field_0x30,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1430);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1430,
             (FWriteAccessScope *)&local_1348);
  if (((int)local_1420 != 0) && (FStack_1428.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1428.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1428,0,0,0x10);
    local_1420 = local_1420 & 0xffffffff00000000;
  }
  if (local_1348.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1348.Accessor,&local_1348);
  }
  if (FStack_1428.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1428.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1430);
  pFVar23 = STextBlock::FArguments::FArguments(&local_5a8);
  bVar13 = TranslationPickerManager::PickedTexts.ArrayNum < 1;
  if (bVar13) {
    pFVar24 = &local_12c8;
    pwVar30 = L"TranslationPickerHoverToViewEditEscToQuit";
    pwVar31 = L"Hover over text to view/edit translations, or press Esc to quit";
  }
  else {
    pFVar24 = &local_12b8;
    pwVar30 = L"TranslationPickerEnterToEdit";
    pwVar31 = L"Press Enter to edit translations";
  }
  pFVar24 = FText::AsLocalizable_Advanced_LocText(pFVar24,L"TranslationPicker",pwVar30,pwVar31);
  FText::FText(&local_12f8.Value,pFVar24);
  local_12f8.bIsSet = true;
  local_12f8.Getter._16_8_ = 0;
  local_12f8.Getter._0_8_ = 0;
  local_12f8.Getter._8_8_ = 0;
  pFVar23 = STextBlock::FArguments::Text(pFVar23,&local_12f8);
  local_14e4 = 1;
  local_14e8 = 1;
  local_14d0 = 0;
  local_14e0 = (undefined1  [8])0x0;
  FStack_14d8.Data = (FScriptContainerElement *)0x0;
  (pFVar23->_Justification).Value = Center;
  (pFVar23->_Justification).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar23->_Justification).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_14e0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_14e0,
             (FWriteAccessScope *)&local_1330);
  if (((int)local_14d0 != 0) && (FStack_14d8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_14d8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_14d8,0,0,0x10);
    local_14d0 = local_14d0 & 0xffffffff00000000;
  }
  if (local_1330.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1330.Accessor,&local_1330);
  }
  if (FStack_14d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_14d8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_14e0);
  FLLMScope::FLLMScope(&local_14f0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_13f0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_13e8,&local_13f0,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_1248,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TranslationEditor\\Private\\TranslationPickerFloatingWindow.cpp"
             ,0xb8,local_res18);
  FMemScope::~FMemScope(&local_13e8);
  FLLMScope::~FLLMScope(&local_14f0);
  pTVar25 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1248,&local_1200,pFVar23);
  pFVar26 = local_14a0;
  pTVar6 = (pTVar25->SharedReferenceCount).ReferenceController;
  local_1488 = pTVar25->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1480.ReferenceController = pTVar6;
  if ((STextBlock **)&local_14a0->_padding_ != &local_1488) {
    local_14a0->_padding_ = (longlong)local_1488;
    local_1488 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_14a0->_padding_,&local_1480);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1480.ReferenceController);
  pFVar26 = SVerticalBox::FArguments::operator+(local_14a8,(FSlotArguments *)pFVar26);
  FLLMScope::FLLMScope(&local_14ec,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1468 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_13e0,&local_1468,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_1260,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TranslationEditor\\Private\\TranslationPickerFloatingWindow.cpp"
             ,0xa8,local_res20);
  FMemScope::~FMemScope(&local_13e0);
  FLLMScope::~FLLMScope(&local_14ec);
  pTVar27 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1260,&local_1210,pFVar26);
  local_13c8 = pTVar27->Object;
  local_13c0 = (pTVar27->SharedReferenceCount).ReferenceController;
  if (local_13c0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_13c0->SharedReferenceCount = (atomic<int>)((int)local_13c0->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*local_13d0)(local_13d8,&local_13c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_13c0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1210.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1260._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1200.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1248._Widget.SharedReferenceCount.ReferenceController);
  if (bVar13) {
    if (local_12c8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_12c8.TextData.Reference + 0x10))();
    }
  }
  if ((!bVar13) && (local_12b8.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_12b8.TextData.Reference + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_5a8);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_10d8)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_10f8)
  ;
  if (local_1108 != '\0') {
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              (&local_1120);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              (&local_1140);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(local_1178);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1198);
  if (local_11a8[0] != (undefined8 *)0x0) {
    (**(code **)*local_11a8[0])(local_11a8[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_12a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1398._Widget.SharedReferenceCount.ReferenceController);
  SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::FArguments::~FArguments(&local_a88);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_ff0);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_1010)
  ;
  if (local_1020 != '\0') {
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              (&local_1038);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              (&local_1058);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(local_1090);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10b0);
  if (local_10c0[0] != (undefined8 *)0x0) {
    (**(code **)*local_10c0[0])(local_10c0[0],1);
  }
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_c90._Slots.AllocatorInstance.Data,local_c90._Slots.ArrayNum);
  if ((FSlotArguments *)local_c90._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_c90._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_c90);
  if (pTVar2->Object == (SToolTip *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x408,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pTVar28 = (this->WindowContents).SharedReferenceCount.ReferenceController;
  pSVar7 = pTVar2->Object;
  if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar7 == (SToolTip *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x25d,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  this_00 = &this->_padding_;
  if (pTVar28 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
  }
  else {
    LOCK();
    pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
    LOCK();
    pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1370 = this->_padding_;
  uStack_1368 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar7;
  this->_padding_ = (longlong)pTVar28;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(uStack_1368);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar28);
  pTVar28 = ::operator_new(0x20);
  if (pTVar28 == (TReferenceControllerBase<1> *)0x0) {
    pTVar28 = (TReferenceControllerBase<1> *)0x0;
    local_1478 = ___xmm_00000000000000000000000000000010;
    FStack_1470.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar28->SharedReferenceCount = (atomic<int>)0x1;
    pTVar32 = pTVar28 + 1;
    pTVar28->WeakReferenceCount = (atomic<int>)0x1;
    pTVar28->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFTranslationPickerInputProcessor___00_SharedPointerInternals__6B_
    ;
    pTVar28[1]._padding_ = (longlong)&___7FTranslationPickerInputProcessor__6B_;
    *(STranslationPickerFloatingWindow **)&pTVar28[1].SharedReferenceCount = this;
    if (pTVar32 == (TReferenceControllerBase<1> *)0x0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InObject != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x246,L"");
      if (bVar13) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    LOCK();
    pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
    UNLOCK();
    FStack_1470.ReferenceController = pTVar28;
    local_1478 = pTVar32;
  }
  pTVar29 = &this->InputProcessor;
  if (pTVar29 != (TSharedPtr<FTranslationPickerInputProcessor,1> *)&local_1478) {
    pTVar29->Object = (FTranslationPickerInputProcessor *)pTVar32;
    local_1478 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->InputProcessor).SharedReferenceCount,&FStack_1470);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1470.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar28);
  this_01 = FSlateApplication::Get();
  local_1380.Object = (IInputProcessor *)pTVar29->Object;
  local_1380.SharedReferenceCount.ReferenceController =
       (this->InputProcessor).SharedReferenceCount.ReferenceController;
  if (local_1380.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1380.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1380.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FSlateApplication::RegisterInputPreProcessor(this_01,&local_1380,0);
  return;
}

// DistSquaredToRect @ 146ba9420

float __cdecl
STranslationPickerFloatingWindow::DistSquaredToRect
          (FSlateRect *param_1,TVector2<float> *param_2,bool *param_3)

{
  float fVar1;
  FSlateRect local_res8 [2];
  
  if ((__real_358637bd <= param_1->Right - param_1->Left) &&
     (__real_358637bd <= param_1->Bottom - param_1->Top)) {
    GetNearestPoint(local_res8,(TVector2<float> *)param_1,(bool *)param_2);
    local_res8[0].Top = (param_2->field0_0x0)._s_0.Y - local_res8[0].Top;
    local_res8[0].Left = (param_2->field0_0x0)._s_0.X - local_res8[0].Left;
    return local_res8[0].Top * local_res8[0].Top + local_res8[0].Left * local_res8[0].Left;
  }
  fVar1 = __real_7f7fffff;
  *param_3 = false;
  return fVar1;
}

// Exit @ 146baaae0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STranslationPickerFloatingWindow::Exit
          (STranslationPickerFloatingWindow *this,FReply *__return_storage_ptr__)

{
  FReply local_c8;
  
  TranslationPickerManager::RemoveOverlay();
  Close(this,&local_c8);
  FReply::~FReply(&local_c8);
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// GetGeometry @ 146bac6f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
STranslationPickerFloatingWindow::GetGeometry
          (STranslationPickerFloatingWindow *this,TSharedRef<SWidget_const_,1> *param_1,
          FPaintGeometry *param_2,FSlateLayoutTransform *param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  atomic<int> aVar6;
  uint uVar7;
  EVisibility EVar8;
  TVector2<float>_u_0 this_00;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  undefined1 uVar11;
  atomic<int> aVar12;
  FSlateApplication *pFVar13;
  TOptional<FArrangedWidget> *pTVar14;
  TOptional<FArrangedWidget> *pTVar15;
  FDeprecateSlateVector2D FVar16;
  TReferenceControllerBase<1> *pTVar17;
  ForElementType<FArrangedWidget> FVar18;
  byte bVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_3f8 [32];
  undefined8 local_3d8;
  undefined8 local_3d0;
  TReferenceControllerBase<1> *local_3c8;
  TVector2<float>_u_0 local_3b8;
  TReferenceControllerBase<1> *pTStack_3b0;
  float local_3a8;
  float fStack_3a4;
  FDeprecateSlateVector2D local_398;
  float fStack_390;
  float fStack_38c;
  float fStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  TTransform2<float> TStack_37c;
  undefined4 uStack_364;
  SWidget *local_360;
  TReferenceControllerBase<1> *local_358;
  undefined8 local_344;
  undefined8 local_338;
  TTransform2<float> local_330;
  undefined8 local_318;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  float fStack_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float local_2ec;
  float fStack_2e8;
  undefined4 local_2e4;
  SWidget *local_2e0;
  TReferenceControllerBase<1> *local_2d8;
  longlong local_2d0;
  TReferenceControllerBase<1> *local_2c8;
  TSharedRef<SWidget_const_,1> local_2c0;
  TSharedRef<SWidget_const_,1> local_2b0;
  TTransform2<float> local_2a0;
  TTransform2<float> local_288;
  TTransform2<float> local_270;
  TTransform2<float> local_258;
  TTransform2<float> local_240;
  TOptional<FArrangedWidget> local_228;
  FWidgetPath local_1d8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_3f8;
  pFVar13 = FSlateApplication::Get();
  pcVar2 = *(code **)(*(longlong *)pFVar13 + 0x28);
  local_2e0 = param_1->Object;
  local_2d8 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_2d8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_2d8->SharedReferenceCount = (atomic<int>)((int)local_2d8->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar2)(pFVar13,&local_3b8,&local_2e0);
  if (local_3b8 != (TVector2<float>_u_0)0x0) {
    do {
      if ((local_3b8 == (TVector2<float>_u_0)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar2 = (code *)swi(3);
        uVar11 = (*pcVar2)();
        return (bool)uVar11;
      }
      lVar20 = 0;
      pTVar17 = *(TReferenceControllerBase<1> **)((longlong)local_3b8 + 0x1d0);
      if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
        aVar6 = pTVar17->SharedReferenceCount;
        do {
          if (aVar6 == (atomic<int>)0x0) {
            pTVar17 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_146bac9ed;
          }
          LOCK();
          aVar12 = pTVar17->SharedReferenceCount;
          bVar10 = aVar6 == aVar12;
          if (bVar10) {
            pTVar17->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
            aVar12 = aVar6;
          }
          UNLOCK();
          aVar6 = aVar12;
        } while (!bVar10);
        lVar20 = *(longlong *)((longlong)local_3b8 + 0x1c8);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
      if (lVar20 == 0) goto LAB_146bac9f2;
      if ((local_3b8 == (TVector2<float>_u_0)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar2 = (code *)swi(3);
        uVar11 = (*pcVar2)();
        return (bool)uVar11;
      }
      lVar20 = 0;
      pTVar17 = *(TReferenceControllerBase<1> **)((longlong)local_3b8 + 0x1d0);
      if (pTVar17 == (TReferenceControllerBase<1> *)0x0) {
LAB_146bac854:
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x416,L"");
        if (bVar10) {
          pcVar2 = (code *)swi(3);
          uVar11 = (*pcVar2)();
          return (bool)uVar11;
        }
        if ((lVar20 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x26c,L""), bVar10)) {
          pcVar2 = (code *)swi(3);
          uVar11 = (*pcVar2)();
          return (bool)uVar11;
        }
      }
      else {
        aVar6 = pTVar17->SharedReferenceCount;
        do {
          if (aVar6 == (atomic<int>)0x0) {
            pTVar17 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_146bac854;
          }
          LOCK();
          aVar12 = pTVar17->SharedReferenceCount;
          bVar10 = aVar6 == aVar12;
          if (bVar10) {
            pTVar17->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
            aVar12 = aVar6;
          }
          UNLOCK();
          aVar6 = aVar12;
        } while (!bVar10);
        lVar20 = *(longlong *)((longlong)local_3b8 + 0x1c8);
        if (lVar20 == 0) goto LAB_146bac854;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if ((FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentApplication.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                              ,0x141,L""), bVar10)) {
        pcVar2 = (code *)swi(3);
        uVar11 = (*pcVar2)();
        return (bool)uVar11;
      }
      bVar10 = IsInGameThread();
      if ((((!bVar10) && (bVar10 = IsInSlateThread(), !bVar10)) &&
          (bVar10 = (*IsInAsyncLoadingThread)(), !bVar10)) &&
         ((bVar10 = IsInParallelLoadingThread(), !bVar10 &&
          (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsInGameThread() || IsInSlateThread() || IsInAsyncLoadingThread() || IsInParallelLoadingThread()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                               ,0x142,L""), bVar10)))) {
        pcVar2 = (code *)swi(3);
        uVar11 = (*pcVar2)();
        return (bool)uVar11;
      }
      if ((FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar10)) {
        pcVar2 = (code *)swi(3);
        uVar11 = (*pcVar2)();
        return (bool)uVar11;
      }
      pFVar13 = FSlateApplication::CurrentApplication.Object;
      lVar3 = *(longlong *)FSlateApplication::CurrentApplication.Object;
      if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_2d0 = lVar20;
      local_2c8 = pTVar17;
      (**(code **)(lVar3 + 0x28))(pFVar13,&local_3d0,&local_2d0);
      pTVar9 = pTStack_3b0;
      if (local_3d0 == (TVector2<float>_u_0)0x0) goto LAB_146bac9e0;
      if (local_3c8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_3c8->SharedReferenceCount = (atomic<int>)((int)local_3c8->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_3b8 = local_3d0;
      pTStack_3b0 = local_3c8;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3c8)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
    } while( true );
  }
  bVar10 = false;
LAB_146bacebd:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_3b0);
  return bVar10;
LAB_146bac9e0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3c8);
LAB_146bac9ed:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
LAB_146bac9f2:
  if ((local_3b8 == (TVector2<float>_u_0)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar10)) {
    pcVar2 = (code *)swi(3);
    uVar11 = (*pcVar2)();
    return (bool)uVar11;
  }
  pTVar17 = pTStack_3b0;
  this_00 = local_3b8;
  if (pTStack_3b0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_3b0->SharedReferenceCount = (atomic<int>)((int)pTStack_3b0->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_3b8 == (TVector2<float>_u_0)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar10)) {
    pcVar2 = (code *)swi(3);
    uVar11 = (*pcVar2)();
    return (bool)uVar11;
  }
  FWidgetPath::FWidgetPath(&local_1d8);
  pFVar13 = FSlateApplication::Get();
  EVar8 = EVisibility::Visible;
  local_2c0.Object = param_1->Object;
  local_2c0.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_2c0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar10 = FSlateApplication::GeneratePathToWidgetUnchecked(pFVar13,&local_2c0,&local_1d8,EVar8);
  if (bVar10) {
    local_2b0.Object = param_1->Object;
    local_2b0.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_2b0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_2b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_2b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar14 = FWidgetPath::FindArrangedWidget(&local_1d8,&local_228,&local_2b0);
    pTVar15 = (TOptional<FArrangedWidget> *)FArrangedWidget::GetNullWidget();
    if (pTVar14->bIsSet != false) {
      pTVar15 = pTVar14;
    }
    local_398 = (pTVar15->TypedValue).Geometry.Size;
    uVar1 = *(undefined8 *)&(pTVar15->TypedValue).Geometry.Scale;
    local_360 = (pTVar15->TypedValue).Widget.Object;
    uVar4 = *(undefined8 *)&(pTVar15->TypedValue).Geometry.AbsolutePosition.field0_0x0._s_0.Y;
    uVar5 = *(undefined8 *)&(pTVar15->TypedValue).Geometry.Position.field0_0x0._s_0.Y;
    local_358 = (pTVar15->TypedValue).Widget.SharedReferenceCount.ReferenceController;
    fStack_390 = (float)uVar1;
    fStack_38c = (float)((ulonglong)uVar1 >> 0x20);
    fStack_388 = (float)uVar4;
    uStack_384 = (undefined4)((ulonglong)uVar4 >> 0x20);
    uStack_380 = (undefined4)uVar5;
    TStack_37c.M.M[0][0] = (float)((ulonglong)uVar5 >> 0x20);
    uVar1 = *(undefined8 *)
             &(pTVar15->TypedValue).Geometry.AccumulatedRenderTransform.Trans.field0_0x0._s_0.Y;
    TStack_37c.Trans.field0_0x0._s_0.Y = (float)uVar1;
    uStack_364 = (undefined4)((ulonglong)uVar1 >> 0x20);
    uVar1 = *(undefined8 *)((pTVar15->TypedValue).Geometry.AccumulatedRenderTransform.M.M[0] + 1);
    uVar4 = *(undefined8 *)((pTVar15->TypedValue).Geometry.AccumulatedRenderTransform.M.M[1] + 1);
    TStack_37c.M.M[0][1] = (float)uVar1;
    TStack_37c.M.M[1][0] = (float)((ulonglong)uVar1 >> 0x20);
    TStack_37c.M.M[1][1] = (float)uVar4;
    TStack_37c.Trans.field0_0x0._s_0.X = (float)((ulonglong)uVar4 >> 0x20);
    if (local_358 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_358->SharedReferenceCount = (atomic<int>)((int)local_358->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (local_228.bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_228.TypedValue.Widget.SharedReferenceCount.ReferenceController);
    }
    FVar16 = SWindow::GetPositionInScreen((SWindow *)this_00);
    fVar21 = fStack_390;
    uVar7 = __xmm_80000000800000008000000080000000;
    local_2a0.Trans.field0_0x0._s_0.X =
         (float)(*(uint *)FVar16 ^ __xmm_80000000800000008000000080000000);
    local_2a0.Trans.field0_0x0._s_0.Y =
         (float)(*(uint *)((longlong)FVar16 + 4) ^ __xmm_80000000800000008000000080000000);
    local_3d8 = CONCAT44(local_2a0.Trans.field0_0x0._s_0.Y,local_2a0.Trans.field0_0x0._s_0.X);
    local_344 = local_3d8;
    fVar23 = local_2a0.Trans.field0_0x0._s_0.X + fStack_38c;
    fVar25 = local_2a0.Trans.field0_0x0._s_0.Y + fStack_388;
    local_2a0.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
    local_2a0.M.M[0][1] = _UNK_15076b184;
    local_2a0.M.M[1][0] = _UNK_15076b188;
    local_2a0.M.M[1][1] = _UNK_15076b18c;
    local_3d0._0_4_ = fVar23;
    local_3d0._4_4_ = fVar25;
    Concatenate<TTransform2<float>_>(&local_288,&TStack_37c,&local_2a0);
    local_330.M.M[0][0] = param_3->Scale;
    fStack_38c = (float)(undefined4)local_3d0;
    fStack_388 = (float)local_3d0._4_4_;
    local_330.Trans.field0_0x0 = (param_3->Translation).field0_0x0;
    TStack_37c.M.M[0][0] = local_288.M.M[0][0];
    TStack_37c.M.M[0][1] = local_288.M.M[0][1];
    TStack_37c.M.M[1][0] = local_288.M.M[1][0];
    TStack_37c.M.M[1][1] = local_288.M.M[1][1];
    local_330.M.M[0][1] = 0.0;
    local_330.M.M[1][0] = 0.0;
    TStack_37c.Trans.field0_0x0._s_0.X = local_288.Trans.field0_0x0._0_4_;
    TStack_37c.Trans.field0_0x0._s_0.Y = local_288.Trans.field0_0x0._4_4_;
    fVar24 = local_330.M.M[0][0] * fVar21;
    local_3d0 = (TVector2<float>_u_0)
                CONCAT44(local_330.M.M[0][0] * fVar25 + (param_3->Translation).field0_0x0._s_0.Y,
                         local_330.M.M[0][0] * fVar23 + (param_3->Translation).field0_0x0._s_0.X);
    fStack_390 = fVar21;
    local_330.M.M[1][1] = local_330.M.M[0][0];
    Concatenate<TTransform2<float>_>(&local_270,&TStack_37c,&local_330);
    TStack_37c.Trans.field0_0x0._s_0.X = local_270.Trans.field0_0x0._0_4_;
    TStack_37c.Trans.field0_0x0._s_0.Y = local_270.Trans.field0_0x0._4_4_;
    fStack_38c = SUB84(local_3d0,0);
    fStack_388 = (float)((ulonglong)local_3d0 >> 0x20);
    TStack_37c.M.M[0][0] = local_270.M.M[0][0];
    TStack_37c.M.M[0][1] = local_270.M.M[0][1];
    TStack_37c.M.M[1][0] = local_270.M.M[1][0];
    TStack_37c.M.M[1][1] = local_270.M.M[1][1];
    fVar21 = __real_3f800000 /
             SQRT(local_270.M.M[0][1] * local_270.M.M[0][1] +
                  local_270.M.M[0][0] * local_270.M.M[0][0]);
    local_338 = local_3d0;
    bVar19 = (byte)uStack_364 & 1;
    fVar25 = __real_3f800000 /
             SQRT(local_270.M.M[1][1] * local_270.M.M[1][1] +
                  local_270.M.M[1][0] * local_270.M.M[1][0]);
    fVar23 = (float)((uint)fVar21 ^ uVar7);
    fVar22 = (float)((uint)fVar25 ^ uVar7);
    local_3d0._0_4_ = local_398._0_4_;
    local_3a8 = fVar21 + fVar21 + (float)(undefined4)local_3d0;
    local_3d0._4_4_ = local_398._4_4_;
    fStack_3a4 = fVar25 + fVar25 + (float)local_3d0._4_4_;
    local_3d0._4_4_ = fVar22;
    local_3d0._0_4_ = fVar23;
    local_258.Trans.field0_0x0 = local_3d0;
    local_258.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
    local_258.M.M[0][1] = _UNK_15076b184;
    local_258.M.M[1][0] = _UNK_15076b188;
    local_258.M.M[1][1] = _UNK_15076b18c;
    local_3d8 = CONCAT44(fVar22 * fVar24 + fStack_388,fVar23 * fVar24 + fStack_38c);
    fStack_390 = fVar24;
    Concatenate<TTransform2<float>_>(&local_240,&local_258,&TStack_37c);
    fStack_2fc = local_240.M.M[0][0];
    fStack_2f8 = local_240.M.M[0][1];
    fStack_2f4 = local_240.M.M[1][0];
    fStack_2f0 = local_240.M.M[1][1];
    local_318 = local_3d8;
    uVar1 = local_318;
    fStack_304 = local_3a8;
    fStack_300 = fStack_3a4;
    local_2ec = local_240.Trans.field0_0x0._0_4_;
    fStack_2e8 = local_240.Trans.field0_0x0._4_4_;
    uStack_30c = 0;
    uStack_308 = 0;
    local_318._0_4_ = (float)local_3d8;
    local_318._4_4_ = (float)((ulonglong)local_3d8 >> 0x20);
    local_2e4 = CONCAT31(local_2e4._1_3_,bVar19 * '\x02' | (byte)local_2e4 & 0xfc);
    (param_2->DrawPosition).field0_0x0._s_0.X = (float)local_318;
    (param_2->DrawPosition).field0_0x0._s_0.Y = local_318._4_4_;
    param_2->DrawScale = fVar24;
    (param_2->DrawSize).field0_0x0._s_0.X = 0.0;
    *(ulonglong *)((longlong)&(param_2->DrawSize).field0_0x0 + 4) =
         (ulonglong)(uint)local_3a8 << 0x20;
    *(ulonglong *)((longlong)&(param_2->LocalSize).field0_0x0 + 4) = CONCAT44(fStack_2fc,fStack_3a4)
    ;
    *(ulonglong *)((param_2->AccumulatedRenderTransform).M.M[0] + 1) =
         CONCAT44(fStack_2f4,fStack_2f8);
    *(ulonglong *)((param_2->AccumulatedRenderTransform).M.M[1] + 1) =
         CONCAT44(local_2ec,fStack_2f0);
    *(ulonglong *)((longlong)&(param_2->AccumulatedRenderTransform).Trans.field0_0x0 + 4) =
         CONCAT44(local_2e4,fStack_2e8);
    local_318 = uVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_358);
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  if (local_1d8.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.VirtualPointerPositions.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d8.TopLevelWindow.SharedReferenceCount.ReferenceController);
  FVar18 = (ForElementType<FArrangedWidget>)&local_1d8.Widgets.Array;
  if (local_1d8.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FVar18 = local_1d8.Widgets.Array.AllocatorInstance.SecondaryData;
  }
  DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar18,local_1d8.Widgets.Array.ArrayNum);
  if (local_1d8.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FMemory::Free((void *)local_1d8.Widgets.Array.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  goto LAB_146bacebd;
}

// GetNearestPoint @ 146baed10

TVector2<float> __cdecl
STranslationPickerFloatingWindow::GetNearestPoint
          (FSlateRect *param_1,TVector2<float> *param_2,bool *param_3)

{
  float fVar1;
  float fVar2;
  float fVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  undefined1 *in_R9;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar3;
  
  uVar5 = *(undefined8 *)param_3;
  *in_R9 = 1;
  fVar1 = (param_2->field0_0x0)._s_0.X;
  fVar2 = *(float *)param_3;
  fVar3 = *(float *)param_3;
  param_1->Left = (float)(int)uVar5;
  param_1->Top = (float)(int)((ulonglong)uVar5 >> 0x20);
  if (fVar3 <= fVar1 && fVar1 != fVar2) {
    param_1->Left = fVar1;
    *in_R9 = 0;
  }
  fVar8 = param_2[1].field0_0x0._s_0.X;
  fVar9 = *(float *)param_3;
  if (fVar8 < fVar9) {
    param_1->Left = fVar8;
    *in_R9 = 0;
  }
  fVar4 = (param_2->field0_0x0)._s_0.Y;
  bVar6 = fVar4 != *(float *)(param_3 + 4);
  bVar7 = *(float *)(param_3 + 4) <= fVar4;
  if (bVar7 && bVar6) {
    param_1->Top = fVar4;
    *in_R9 = 0;
  }
  fVar4 = param_2[1].field0_0x0._s_0.Y;
  fVar10 = *(float *)(param_3 + 4);
  if (fVar10 <= fVar4) {
    if ((!bVar7 || !bVar6) && (fVar8 >= fVar9 && (fVar3 > fVar1 || fVar1 == fVar2))) {
      fVar1 = (param_2->field0_0x0)._s_0.Y;
      fVar2 = (param_2->field0_0x0)._s_0.X;
      fVar3 = param_2[1].field0_0x0._s_0.X;
      fVar8 = (float)((uint)(fVar10 - fVar4) & __xmm_7fffffff7fffffff7fffffff7fffffff);
      fVar11 = (float)((uint)(fVar10 - fVar1) & __xmm_7fffffff7fffffff7fffffff7fffffff);
      fVar10 = (float)((uint)(*(float *)param_3 - fVar2) & __xmm_7fffffff7fffffff7fffffff7fffffff);
      fVar9 = (float)((uint)(*(float *)param_3 - fVar3) & __xmm_7fffffff7fffffff7fffffff7fffffff);
      if (((fVar8 < fVar11) || (fVar10 < fVar11)) || (fVar9 < fVar11)) {
        if ((fVar10 < fVar8) || (fVar9 < fVar8)) {
          if (fVar10 <= fVar9) {
            param_1->Left = fVar2;
            return (TVector2<float>)(TVector2<float>_u_0)param_1;
          }
          param_1->Left = fVar3;
          return (TVector2<float>)(TVector2<float>_u_0)param_1;
        }
        param_1->Top = fVar4;
      }
      else {
        param_1->Top = fVar1;
      }
      return (TVector2<float>)(TVector2<float>_u_0)param_1;
    }
  }
  else {
    param_1->Top = fVar4;
    *in_R9 = 0;
  }
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

// GetPaintGeometry @ 146baf550

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

FPaintGeometry * __thiscall
STranslationPickerFloatingWindow::GetPaintGeometry
          (STranslationPickerFloatingWindow *this,FPaintGeometry *__return_storage_ptr__,
          TSharedPtr<SWidget,1> *param_1,FWidgetPath *param_2,bool param_3)

{
  float fVar1;
  undefined1 uVar2;
  EWindowType EVar3;
  FScriptContainerElement *pFVar4;
  TVector2<float>_u_0_s_0 TVar5;
  TReferenceControllerBase<1> *pTVar6;
  SWidget *pSVar7;
  FDeprecateSlateVector2D FVar8;
  code *pcVar9;
  float fVar10;
  bool bVar11;
  FSlateApplication *pFVar12;
  FPaintGeometry *pFVar13;
  TVector2<float> TVar14;
  TSharedRef<SWindow,1> *pTVar15;
  FArrangedWidget *pFVar16;
  FGeometry *pFVar17;
  FSlateUser *this_00;
  FSlateUser *pFVar18;
  float fVar19;
  float fVar20;
  undefined8 local_1b8;
  undefined8 local_1b0;
  FSlateLayoutTransform local_1a8;
  undefined8 local_194;
  TVector2<float>_u_0_s_0 local_184;
  TTransform2<float> local_178;
  undefined8 local_160;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float local_134;
  float fStack_130;
  undefined4 local_12c;
  TSharedRef<SWidget_const_,1> local_128 [2];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  TSharedRef<SWindow,1> local_e8;
  TTransform2<float> local_d8;
  TTransform2<float> local_c0;
  TTransform2<float> local_a8 [2];
  float local_74 [2];
  float afStack_6c [2];
  TVector2<float>_u_0 local_64;
  
  this_00 = (FSlateUser *)0x0;
  local_1b8 = (TVector2<float>_u_0)0x0;
  local_1b0 = (TVector2<float>_u_0)0x0;
  if (!param_3) {
    pTVar15 = FWidgetPath::GetDeepestWindow(param_2,&local_e8);
    EVar3 = pTVar15->Object->Type;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e8.SharedReferenceCount.ReferenceController);
    if (EVar3 == Menu) {
      FArrangedChildren::operator[](&param_2->Widgets,0);
      pFVar16 = FArrangedChildren::operator[](&param_2->Widgets,0);
      local_1b0 = (pFVar16->Geometry).AccumulatedRenderTransform.Trans.field0_0x0;
      local_74 = (pFVar16->Geometry).AccumulatedRenderTransform.M.M[0];
      afStack_6c = (pFVar16->Geometry).AccumulatedRenderTransform.M.M[1];
      local_64 = local_1b0;
    }
    goto LAB_146baf68e;
  }
  pFVar12 = FSlateApplication::Get();
  if ((pFVar12->Users).ArrayNum < 1) {
    local_f0 = 0;
    local_f8 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pFVar18 = this_00;
LAB_146baf5ee:
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pFVar13 = (FPaintGeometry *)(*pcVar9)();
      return pFVar13;
    }
  }
  else {
    pFVar4 = (pFVar12->Users).AllocatorInstance.Data;
    pFVar18 = *(FSlateUser **)(pFVar4 + 8);
    this_00 = *(FSlateUser **)pFVar4;
    if (pFVar18 != (FSlateUser *)0x0) {
      LOCK();
      *(int *)&pFVar18->_padding_ = (int)pFVar18->_padding_ + 1;
      UNLOCK();
    }
    local_100 = 0;
    local_108 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (this_00 == (FSlateUser *)0x0) goto LAB_146baf5ee;
  }
  TVar14 = FSlateUser::GetTooltipPosition(this_00);
                    /* WARNING: Load size is inaccurate */
  local_1b8 = *TVar14.field0_0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar18);
LAB_146baf68e:
  (__return_storage_ptr__->DrawPosition).field0_0x0 = (TVector2<float>_u_0)0x0;
  __return_storage_ptr__->DrawScale = 1.0;
  (__return_storage_ptr__->DrawSize).field0_0x0 = (TVector2<float>_u_0)0x0;
  (__return_storage_ptr__->LocalSize).field0_0x0 = (TVector2<float>_u_0)0x0;
  (__return_storage_ptr__->AccumulatedRenderTransform).M.M[1][0] = 0.0;
  (__return_storage_ptr__->AccumulatedRenderTransform).M.M[0] = (float  [2])0x3f800000;
  (__return_storage_ptr__->AccumulatedRenderTransform).M.M[1][1] = 1.0;
  (__return_storage_ptr__->AccumulatedRenderTransform).Trans.field0_0x0 = (TVector2<float>_u_0)0x0;
  __return_storage_ptr__->bUsingLegacyConstructor = '\x01';
  __return_storage_ptr__->bHasRenderTransform = '\0';
  if (param_3) {
    local_d8.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
    local_d8.M.M[0][1] = _UNK_15076b184;
    local_d8.M.M[1][0] = _UNK_15076b188;
    local_d8.M.M[1][1] = _UNK_15076b18c;
    local_194 = local_1b8;
    local_d8.Trans.field0_0x0 = local_1b8;
    Concatenate<TTransform2<float>_>
              (&local_c0,&__return_storage_ptr__->AccumulatedRenderTransform,&local_d8);
    TVar5 = (__return_storage_ptr__->DrawPosition).field0_0x0._s_0;
    (__return_storage_ptr__->AccumulatedRenderTransform).M.M[0] = local_c0.M.M[0];
    (__return_storage_ptr__->AccumulatedRenderTransform).M.M[1] = local_c0.M.M[1];
    local_1b8._0_4_ = TVar5.X;
    (__return_storage_ptr__->AccumulatedRenderTransform).Trans.field0_0x0 =
         local_c0.Trans.field0_0x0;
    local_1b8._4_4_ = TVar5.Y;
    local_1b0._4_4_ = local_194._4_4_ + local_1b8._4_4_;
    local_1b0._0_4_ = (float)local_194 + (float)local_1b8;
    (__return_storage_ptr__->DrawPosition).field0_0x0 = local_1b0;
  }
  else {
    local_1a8.Translation.field0_0x0 = local_1b0;
    local_1a8.Scale = 1.0;
    if ((param_1->Object == (SWidget *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      pFVar13 = (FPaintGeometry *)(*pcVar9)();
      return pFVar13;
    }
    pTVar6 = (param_1->SharedReferenceCount).ReferenceController;
    pSVar7 = param_1->Object;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pSVar7 == (SWidget *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      pFVar13 = (FPaintGeometry *)(*pcVar9)();
      return pFVar13;
    }
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_128[0].Object = pSVar7;
    local_128[0].SharedReferenceCount.ReferenceController = pTVar6;
    bVar11 = GetGeometry(this,local_128,__return_storage_ptr__,&local_1a8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    if (!bVar11) {
      if ((param_1->Object == (SWidget *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        pFVar13 = (FPaintGeometry *)(*pcVar9)();
        return pFVar13;
      }
      pFVar17 = SWidget::GetPaintSpaceGeometry(param_1->Object);
      fVar10 = local_1a8.Scale;
      local_178.M.M[0][0] = local_1a8.Scale;
      local_178.M.M[1][1] = local_1a8.Scale;
      local_184 = (pFVar17->AbsolutePosition).field0_0x0._s_0;
      fVar1 = pFVar17->Scale;
      FVar8 = pFVar17->Size;
      local_1b8._0_4_ = local_1a8.Translation.field0_0x0._0_4_;
      local_1b8._4_4_ = local_1a8.Translation.field0_0x0._4_4_;
      local_178.Trans.field0_0x0._s_0 = local_1a8.Translation.field0_0x0;
      local_178.M.M[0][1] = 0.0;
      local_178.M.M[1][0] = 0.0;
      fVar19 = (float)local_1b8 * fVar1 + local_184.X;
      fVar20 = local_1b8._4_4_ * fVar1 + local_184.Y;
      local_1b0 = (TVector2<float>_u_0)CONCAT44(fVar20,fVar19);
      Concatenate<TTransform2<float>_>(local_a8,&local_178,&pFVar17->AccumulatedRenderTransform);
      fStack_144 = local_a8[0].M.M[0][0];
      fStack_140 = local_a8[0].M.M[0][1];
      fStack_13c = local_a8[0].M.M[1][0];
      fStack_138 = local_a8[0].M.M[1][1];
      local_160 = local_1b0;
      uStack_154 = 0;
      uStack_150 = 0;
      uStack_14c = FVar8._0_4_;
      uStack_148 = FVar8._4_4_;
      local_134 = local_a8[0].Trans.field0_0x0._0_4_;
      fStack_130 = local_a8[0].Trans.field0_0x0._4_4_;
      local_12c = CONCAT31(local_12c._1_3_,
                           pFVar17->bHasRenderTransform * '\x02' | (byte)local_12c & 0xfc);
      (__return_storage_ptr__->DrawPosition).field0_0x0._s_0.X = fVar19;
      (__return_storage_ptr__->DrawPosition).field0_0x0._s_0.Y = fVar20;
      __return_storage_ptr__->DrawScale = fVar10 * fVar1;
      (__return_storage_ptr__->DrawSize).field0_0x0._s_0.X = 0.0;
      *(longlong *)((longlong)&(__return_storage_ptr__->DrawSize).field0_0x0 + 4) =
           (longlong)FVar8 << 0x20;
      *(ulonglong *)((longlong)&(__return_storage_ptr__->LocalSize).field0_0x0 + 4) =
           CONCAT44(fStack_144,uStack_148);
      *(ulonglong *)((__return_storage_ptr__->AccumulatedRenderTransform).M.M[0] + 1) =
           CONCAT44(fStack_13c,fStack_140);
      *(ulonglong *)((__return_storage_ptr__->AccumulatedRenderTransform).M.M[1] + 1) =
           CONCAT44(local_134,fStack_138);
      *(ulonglong *)
       ((longlong)&(__return_storage_ptr__->AccumulatedRenderTransform).Trans.field0_0x0 + 4) =
           CONCAT44(local_12c,fStack_130);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  return __return_storage_ptr__;
}

// GetRect @ 146bafac0

FSlateRect * __cdecl
STranslationPickerFloatingWindow::GetRect
          (FSlateRect *__return_storage_ptr__,FPaintGeometry *param_1)

{
  TVector2<float>_u_0_s_0 TVar1;
  TVector2<float>_u_0_s_0 TVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_28;
  float fStack_24;
  
  fVar3 = (param_1->AccumulatedRenderTransform).M.M[0][0];
  fVar4 = (param_1->AccumulatedRenderTransform).M.M[0][1];
  fVar5 = (param_1->AccumulatedRenderTransform).M.M[1][0];
  fVar6 = (param_1->AccumulatedRenderTransform).M.M[1][1];
  TVar2 = (param_1->LocalSize).field0_0x0._s_0;
  TVar1 = (param_1->AccumulatedRenderTransform).Trans.field0_0x0._s_0;
  fVar7 = TVar1.X;
  fVar8 = TVar1.Y;
  __return_storage_ptr__->Left = fVar7;
  __return_storage_ptr__->Top = fVar8;
  local_28 = TVar2.X;
  __return_storage_ptr__->Right = SQRT(fVar4 * fVar4 + fVar3 * fVar3) * local_28 + fVar7;
  fStack_24 = TVar2.Y;
  __return_storage_ptr__->Bottom = SQRT(fVar6 * fVar6 + fVar5 * fVar5) * fStack_24 + fVar8;
  return __return_storage_ptr__;
}

// GetWorld @ 146bb06e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall
STranslationPickerFloatingWindow::GetWorld(STranslationPickerFloatingWindow *this)

{
  int iVar1;
  longlong lVar2;
  UEngine *this_00;
  UClass *pUVar3;
  UWorld *pUVar4;
  
  this_00 = GEngine;
  if (GEngine != (UEngine *)0x0) {
    pUVar3 = Z_Construct_UClass_UGameEngine_NoRegister();
    lVar2 = this_00->_padding_;
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      pUVar4 = UGameEngine::GetGameWorld((UGameEngine *)this_00);
      return pUVar4;
    }
  }
  return (UWorld *)0x0;
}

// IsNearlyEqual @ 146bb2b90

bool __cdecl
STranslationPickerFloatingWindow::IsNearlyEqual(FSlateRect *param_1,FSlateRect *param_2)

{
  if (((((float)((uint)(param_1->Left - param_2->Left) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
         __real_322bcc77) &&
       ((float)((uint)(param_1->Top - param_2->Top) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
        __real_322bcc77)) &&
      ((float)((uint)(param_1->Right - param_2->Right) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
       __real_322bcc77)) &&
     ((float)((uint)(param_1->Bottom - param_2->Bottom) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
      __real_322bcc77)) {
    return true;
  }
  return false;
}

// PickTextFromChildWidgets @ 146bb8d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
STranslationPickerFloatingWindow::PickTextFromChildWidgets
          (STranslationPickerFloatingWindow *this,TSharedRef<SWidget,1> *param_1,
          FWidgetPath *param_2,bool param_3)

{
  TOptional<FVirtualPointerPosition> *pTVar1;
  EVisibility EVar2;
  int iVar3;
  longlong *plVar4;
  atomic<int> *paVar5;
  ForElementType<FArrangedWidget> FVar6;
  ForElementType<FArrangedWidget> FVar7;
  int iVar8;
  undefined1 auStackY_238 [32];
  SWidget *local_1f8;
  TReferenceControllerBase<1> *pTStack_1f0;
  TSharedRef<SWidget,1> *local_1e8;
  FWidgetMatcher local_1e0;
  TSharedRef<SWidget,1> local_1c8;
  FWidgetPath local_1b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_1e8 = param_1;
  plVar4 = (longlong *)(**(code **)(param_1->Object->_padding_ + 0x180))();
  local_1b8.Widgets.VisibilityFilter.Value.Value =
       (TEnumAsByte<EVisibility::Private>)(param_2->Widgets).VisibilityFilter.Value.Value;
  iVar8 = 0;
  FVar7 = (param_2->Widgets).Array.AllocatorInstance.SecondaryData;
  iVar3 = (param_2->Widgets).Array.ArrayNum;
  if (FVar7 == (ForElementType<FArrangedWidget>)0x0) {
    FVar7 = (ForElementType<FArrangedWidget>)&(param_2->Widgets).Array;
  }
  local_1b8.Widgets.Array.AllocatorInstance.SecondaryData = (ForElementType<FArrangedWidget>)0x0;
  local_1b8.Widgets.Array.ArrayNum = iVar3;
  if (iVar3 == 0) {
    local_1b8.Widgets.Array.ArrayMax = 4;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FArrangedWidget>_>
              (0x48,8,iVar3,0,&local_1b8.Widgets.Array.AllocatorInstance,iVar3,
               &local_1b8.Widgets.Array.ArrayMax);
    FVar6 = (ForElementType<FArrangedWidget>)&local_1b8.Widgets.Array;
    if (local_1b8.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FVar6 = local_1b8.Widgets.Array.AllocatorInstance.SecondaryData;
    }
    ConstructItems<FArrangedWidget,FArrangedWidget,int>
              ((void *)FVar6,(FArrangedWidget *)FVar7,iVar3);
  }
  local_1b8.Widgets.bAllow3DWidgets = (param_2->Widgets).bAllow3DWidgets;
  local_1b8.TopLevelWindow.Object = (param_2->TopLevelWindow).Object;
  local_1b8.TopLevelWindow.SharedReferenceCount.ReferenceController =
       (param_2->TopLevelWindow).SharedReferenceCount.ReferenceController;
  if (local_1b8.TopLevelWindow.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1b8.TopLevelWindow.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1b8.TopLevelWindow.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  iVar3 = (param_2->VirtualPointerPositions).ArrayNum;
  pTVar1 = (TOptional<FVirtualPointerPosition> *)
           (param_2->VirtualPointerPositions).AllocatorInstance.Data;
  local_1b8.VirtualPointerPositions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.VirtualPointerPositions.ArrayNum = iVar3;
  if (iVar3 == 0) {
    local_1b8.VirtualPointerPositions.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,iVar3,0,&local_1b8.VirtualPointerPositions.AllocatorInstance,iVar3,
               &local_1b8.VirtualPointerPositions.ArrayMax);
    ConstructItems<TOptional<FVirtualPointerPosition>,TOptional<FVirtualPointerPosition>,int>
              (local_1b8.VirtualPointerPositions.AllocatorInstance.Data,pTVar1,iVar3);
  }
  iVar3 = (**(code **)*plVar4)(plVar4);
  if (0 < iVar3) {
    do {
      (**(code **)(*plVar4 + 0x10))(plVar4,&local_1f8,iVar8);
      EVar2 = EVisibility::Visible;
      if (pTStack_1f0 == (TReferenceControllerBase<1> *)0x0) {
        paVar5 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar5 = &pTStack_1f0->SharedReferenceCount;
        LOCK();
        *paVar5 = (atomic<int>)((int)*paVar5 + 1);
        UNLOCK();
      }
      local_1e0.WidgetToFind.Object = local_1f8;
      local_1e0.WidgetToFind.SharedReferenceCount.ReferenceController = pTStack_1f0;
      if (pTStack_1f0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar5 = (atomic<int>)((int)*paVar5 + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_1f0);
      FWidgetPath::ExtendPathTo<FWidgetMatcher>(&local_1b8,&local_1e0,EVar2,Standard);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1e0.WidgetToFind.SharedReferenceCount.ReferenceController);
      local_1c8.Object = local_1f8;
      local_1c8.SharedReferenceCount.ReferenceController = pTStack_1f0;
      if (pTStack_1f0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_1f0->SharedReferenceCount =
             (atomic<int>)((int)pTStack_1f0->SharedReferenceCount + 1);
        UNLOCK();
      }
      PickTextFromWidget(this,&local_1c8,&local_1b8,param_3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_1f0);
      iVar8 = iVar8 + 1;
      iVar3 = (**(code **)*plVar4)(plVar4);
    } while (iVar8 < iVar3);
  }
  if (local_1b8.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.VirtualPointerPositions.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b8.TopLevelWindow.SharedReferenceCount.ReferenceController);
  FVar7 = (ForElementType<FArrangedWidget>)&local_1b8.Widgets.Array;
  if (local_1b8.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FVar7 = local_1b8.Widgets.Array.AllocatorInstance.SecondaryData;
  }
  DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar7,local_1b8.Widgets.Array.ArrayNum);
  if (local_1b8.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FMemory::Free((void *)local_1b8.Widgets.Array.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((local_1e8->SharedReferenceCount).ReferenceController);
  return;
}

// PickTextFromWidget @ 146bb8ff0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
STranslationPickerFloatingWindow::PickTextFromWidget
          (STranslationPickerFloatingWindow *this,TSharedRef<SWidget,1> *param_1,
          FWidgetPath *param_2,bool param_3)

{
  SWidget *this_00;
  SEditableText *this_01;
  SMultiLineEditableText *this_02;
  int iVar1;
  FString *pFVar2;
  SWidget *pSVar3;
  FText *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  STranslationPickerFloatingWindow *local_58;
  STranslationPickerFloatingWindow *local_50;
  TSharedPtr<SWidget,1> local_48;
  FText local_38;
  
  local_58 = this;
  local_50 = this;
  pFVar2 = SWidget::GetTypeAsString(param_1->Object,(FString *)&local_48);
  pwVar6 = L"";
  if ((pFVar2->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar5,"STextBlock");
  if (local_48.Object != (SWidget *)0x0) {
    FMemory::Free(local_48.Object);
  }
  pSVar3 = param_1->Object;
  if (iVar1 == 0) {
    local_48.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_48.Object = pSVar3;
    if ((pSVar3[2].Tag.Number & 1) != 0) {
      SlateAttributePrivate::FSlateAttributeImpl::ProtectedUpdateNow
                ((FSlateAttributeImpl *)(pSVar3 + 1),pSVar3,Member);
    }
    pSVar3 = pSVar3 + 1;
  }
  else {
    pFVar2 = SWidget::GetTypeAsString(pSVar3,(FString *)&local_48);
    if ((pFVar2->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp(pwVar5,"SRichTextBlock");
    if (local_48.Object != (SWidget *)0x0) {
      FMemory::Free(local_48.Object);
    }
    this_00 = param_1->Object;
    if (iVar1 == 0) {
      local_48.SharedReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_48.Object = this_00;
      pSVar3 = (SWidget *)FText::GetEmpty();
      if ((char)this_00[1]._padding_ != '\0') {
        pSVar3 = (SWidget *)TAttribute<FText>::Get((TAttribute<FText> *)(this_00 + 1));
      }
    }
    else {
      pFVar2 = SWidget::GetTypeAsString(this_00,(FString *)&local_48);
      if ((pFVar2->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
      }
      iVar1 = FGenericPlatformStricmp::Stricmp(pwVar5,"SToolTip");
      if (local_48.Object != (SWidget *)0x0) {
        FMemory::Free(local_48.Object);
      }
      pSVar3 = param_1->Object;
      if (iVar1 != 0) {
        pFVar2 = SWidget::GetTypeAsString(pSVar3,(FString *)&local_48);
        if ((pFVar2->Data).ArrayNum == 0) {
          pwVar5 = L"";
        }
        else {
          pwVar5 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
        }
        iVar1 = FGenericPlatformStricmp::Stricmp(pwVar5,"SEditableText");
        if (local_48.Object != (SWidget *)0x0) {
          FMemory::Free(local_48.Object);
        }
        this_01 = (SEditableText *)param_1->Object;
        if (iVar1 == 0) {
          local_48.SharedReferenceCount.ReferenceController =
               (param_1->SharedReferenceCount).ReferenceController;
          if (local_48.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          local_48.Object = (SWidget *)this_01;
          pFVar4 = SEditableText::GetText(this_01,&local_38);
          `STranslationPickerFloatingWindow::PickTextFromWidget'::__l2::<lambda_2>::operator()
                    (&local_58,pFVar4,&local_48,param_2,param_3);
          if (local_38.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
          }
          local_48.Object = param_1->Object;
          local_48.SharedReferenceCount.ReferenceController =
               (param_1->SharedReferenceCount).ReferenceController;
          if (local_48.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          pFVar4 = SEditableText::GetHintText(this_01,&local_38);
        }
        else {
          pFVar2 = SWidget::GetTypeAsString((SWidget *)this_01,(FString *)&local_38);
          if ((pFVar2->Data).ArrayNum != 0) {
            pwVar6 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
          }
          iVar1 = FGenericPlatformStricmp::Stricmp(pwVar6,"SMultiLineEditableText");
          if (local_38.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_38.TextData.Reference);
          }
          if (iVar1 != 0) goto LAB_146bb9308;
          local_48.SharedReferenceCount.ReferenceController =
               (param_1->SharedReferenceCount).ReferenceController;
          this_02 = (SMultiLineEditableText *)param_1->Object;
          if (local_48.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          local_48.Object = (SWidget *)this_02;
          pFVar4 = SMultiLineEditableText::GetText(this_02,&local_38);
          `STranslationPickerFloatingWindow::PickTextFromWidget'::__l2::<lambda_2>::operator()
                    (&local_58,pFVar4,&local_48,param_2,param_3);
          if (local_38.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
          }
          local_48.Object = param_1->Object;
          local_48.SharedReferenceCount.ReferenceController =
               (param_1->SharedReferenceCount).ReferenceController;
          if (local_48.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          pFVar4 = SMultiLineEditableText::GetHintText(this_02,&local_38);
        }
        `STranslationPickerFloatingWindow::PickTextFromWidget'::__l2::<lambda_2>::operator()
                  (&local_58,pFVar4,&local_48,param_2,param_3);
        if (local_38.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
        }
        goto LAB_146bb9308;
      }
      local_48.SharedReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_48.Object = pSVar3;
      pSVar3 = (SWidget *)(**(code **)(pSVar3->_padding_ + 0x248))();
    }
  }
  `STranslationPickerFloatingWindow::PickTextFromWidget'::__l2::<lambda_2>::operator()
            (&local_58,(FText *)pSVar3,&local_48,param_2,param_3);
LAB_146bb9308:
  local_48.Object = param_1->Object;
  local_48.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  PickTextFromChildWidgets(this,(TSharedRef<SWidget,1> *)&local_48,param_2,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetViewportMouseIgnoreLook @ 146bc0940

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
STranslationPickerFloatingWindow::SetViewportMouseIgnoreLook
          (STranslationPickerFloatingWindow *this,bool param_1)

{
  int iVar1;
  longlong lVar2;
  UEngine *this_00;
  bool bVar3;
  UClass *pUVar4;
  UWorld *this_01;
  APlayerController *pAVar5;
  
  this_00 = GEngine;
  if ((this->bMouseLookInputIgnored != param_1) && (GEngine != (UEngine *)0x0)) {
    pUVar4 = Z_Construct_UClass_UGameEngine_NoRegister();
    lVar2 = this_00->_padding_;
    iVar1 = (int)pUVar4->_padding_;
    if (((iVar1 <= *(int *)(lVar2 + 0x38)) &&
        ((((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
           &pUVar4->_padding_ &&
          (this_01 = UGameEngine::GetGameWorld((UGameEngine *)this_00), this_01 != (UWorld *)0x0))
         && (bVar3 = UWorld::HasBegunPlay(this_01), bVar3)))) &&
       (pAVar5 = UGameplayStatics::GetPlayerController((UObject *)this_01,0),
       pAVar5 != (APlayerController *)0x0)) {
      (**(code **)(pAVar5->_padding_ + 0x870))(pAVar5,param_1);
      this->bMouseLookInputIgnored = param_1;
    }
  }
  return;
}

// SwitchToEditWindow @ 146bc0ad0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
STranslationPickerFloatingWindow::SwitchToEditWindow(STranslationPickerFloatingWindow *this)

{
  byte *pbVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  code *pcVar4;
  SWindow *this_00;
  FSharedReferencer<1> FVar5;
  STranslationPickerEditWindow *pSVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  byte bVar11;
  atomic<int> aVar12;
  TSharedRef<FGlobalTabmanager,1> *pTVar13;
  FArguments *pFVar14;
  FText *pFVar15;
  FArguments *pFVar16;
  FSlateApplication *pFVar17;
  FDeprecateSlateVector2D FVar18;
  SWindow *pSVar19;
  SWindow *pSVar20;
  SWindow *this_01;
  T0RequiredArgs local_res10 [8];
  T0RequiredArgs local_res18 [8];
  FLLMScope local_res20 [2];
  FLLMScope local_688 [2];
  TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs> local_680;
  TSlateDecl<STranslationPickerEditWindow,RequiredArgs::T0RequiredArgs> local_668;
  FText local_650;
  bool local_640;
  undefined1 local_638 [8];
  ForAnyElementType FStack_630;
  ulonglong local_628;
  undefined4 local_620;
  undefined4 uStack_61c;
  TSharedPtr<SWindow,1> local_618;
  FName local_608;
  FMemScope local_600;
  FName local_5f8;
  FMemScope local_5f0;
  TSharedRef<SWidget,1> local_5e8;
  TSharedRef<SWindow,1> local_5d8;
  TSharedRef<SWindow,1> local_5c8;
  SWindow *local_5b8;
  TReferenceControllerBase<1> *local_5b0;
  FDestructionSentinel local_5a8;
  FText local_588;
  SWindow *local_578;
  TReferenceControllerBase<1> *pTStack_570;
  TSharedRef<SWindow,1> local_568;
  undefined1 local_558 [8];
  TReferenceControllerBase<1> *local_550;
  FArguments local_548;
  FArguments local_250;
  
  if (TranslationPickerManager::PickedTexts.ArrayNum == 0) {
    return false;
  }
  pTVar13 = FGlobalTabmanager::Get();
  FGlobalTabmanager::GetRootWindow(pTVar13->Object,&local_618);
  pFVar14 = SWindow::FArguments::FArguments(&local_548);
  pFVar15 = FText::AsLocalizable_Advanced_LocText
                      (&local_588,L"TranslationPicker",L"TranslationPickerEditWindowTitle",
                       L"Edit Translations");
  FText::FText(&local_650,pFVar15);
  local_640 = true;
  this_01 = (SWindow *)0x0;
  local_628 = 0;
  local_638 = (undefined1  [8])0x0;
  FStack_630.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar14->_Title).Value,&local_650);
  (pFVar14->_Title).bIsSet = local_640;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar14->_Title).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_638);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_638,
             (FWriteAccessScope *)&local_5a8);
  if (((int)local_628 != 0) && (FStack_630.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_630.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_630,0,0,0x10);
    local_628 = local_628 & 0xffffffff00000000;
  }
  if (local_5a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5a8.Accessor,&local_5a8);
  }
  if (FStack_630.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_630.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_638);
  if (local_650.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_650.TextData.Reference + 0x10))();
  }
  pFVar14->_CreateTitleBar = true;
  pFVar14->_SizingRule = UserSized;
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_608 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_600,&local_608,true);
  TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>::TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>
            (&local_680,"SWindow",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TranslationEditor\\Private\\TranslationPickerFloatingWindow.cpp"
             ,0x226,local_res10);
  FMemScope::~FMemScope(&local_600);
  FLLMScope::~FLLMScope(local_res20);
  this_00 = local_680._Widget.Object;
  if ((local_680._Widget.Object == (SWindow *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  SWidget::SWidgetConstruct((SWidget *)local_680._Widget.Object,(FSlateBaseNamedArgs *)pFVar14);
  SWindow::Construct(local_680._Widget.Object,pFVar14);
  if ((local_680._Widget.Object == (SWindow *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  if (((local_680._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar10 = (**(code **)((local_680._Widget.Object)->_padding_ + 0x228))(local_680._Widget.Object);
    bVar11 = 0;
    if (cVar10 != '\0') goto LAB_146bc0d54;
  }
  else {
LAB_146bc0d54:
    bVar11 = 0x20;
  }
  *(byte *)&(local_680._Widget.Object)->_padding_ =
       (byte)(local_680._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_680._Widget.Object)->_padding_ =
       (byte)(local_680._Widget.Object)->_padding_ | bVar11;
  if ((local_680._Widget.Object == (SWindow *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  pbVar1 = (byte *)((longlong)&(local_680._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_680._Widget.Object == (SWindow *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  FVar5.ReferenceController = local_680._Widget.SharedReferenceCount.ReferenceController;
  local_680._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_680._Widget.Object = (SWindow *)0x0;
  if ((this_00 == (SWindow *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (local_588.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_588.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_548._CloseButtonToolTipText.Getter)
  ;
  if (local_548._CloseButtonToolTipText.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_548._CloseButtonToolTipText.Value.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_548._Content.Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_548._Title.Getter);
  if (local_548._Title.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_548._Title.Value.TextData.Reference + 0x10))();
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_548);
  pFVar16 = STranslationPickerEditWindow::FArguments::FArguments(&local_250);
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar5.ReferenceController)->WeakReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar5.ReferenceController)->WeakReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_578 = (pFVar16->_ParentWindow).Object;
  pTStack_570 = (pFVar16->_ParentWindow).WeakReferenceCount.ReferenceController;
  (pFVar16->_ParentWindow).Object = this_00;
  (pFVar16->_ParentWindow).WeakReferenceCount.ReferenceController = FVar5.ReferenceController;
  if (pTStack_570 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTStack_570->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTStack_570->_padding_ + 8))(pTStack_570,1);
    }
  }
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &(FVar5.ReferenceController)->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
    }
  }
  FLLMScope::FLLMScope(local_688,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_5f8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_5f0,&local_5f8,true);
  TSlateDecl<STranslationPickerEditWindow,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STranslationPickerEditWindow,RequiredArgs::T0RequiredArgs>
            (&local_668,"STranslationPickerEditWindow",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TranslationEditor\\Private\\TranslationPickerFloatingWindow.cpp"
             ,0x22b,local_res18);
  FMemScope::~FMemScope(&local_5f0);
  FLLMScope::~FLLMScope(local_688);
  pSVar6 = local_668._Widget.Object;
  if ((local_668._Widget.Object == (STranslationPickerEditWindow *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  SWidget::SWidgetConstruct((SWidget *)local_668._Widget.Object,(FSlateBaseNamedArgs *)pFVar16);
  STranslationPickerEditWindow::Construct(local_668._Widget.Object,pFVar16);
  if ((local_668._Widget.Object == (STranslationPickerEditWindow *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  if (((local_668._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar10 = (**(code **)((local_668._Widget.Object)->_padding_ + 0x228))(local_668._Widget.Object);
    bVar11 = 0;
    if (cVar10 != '\0') goto LAB_146bc0ff1;
  }
  else {
LAB_146bc0ff1:
    bVar11 = 0x20;
  }
  *(byte *)&(local_668._Widget.Object)->_padding_ =
       (byte)(local_668._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_668._Widget.Object)->_padding_ =
       (byte)(local_668._Widget.Object)->_padding_ | bVar11;
  if ((local_668._Widget.Object == (STranslationPickerEditWindow *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  pbVar1 = (byte *)((longlong)&(local_668._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_668._Widget.Object == (STranslationPickerEditWindow *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  FVar7.ReferenceController = local_668._Widget.SharedReferenceCount.ReferenceController;
  local_668._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_668._Widget.Object = (STranslationPickerEditWindow *)0x0;
  if ((pSVar6 == (STranslationPickerEditWindow *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (local_250._ParentWindow.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &(local_250._ParentWindow.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)((local_250._ParentWindow.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_250._ParentWindow.WeakReferenceCount.ReferenceController,1);
    }
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_250);
  local_5e8.Object = (SWidget *)pSVar6;
  local_5e8.SharedReferenceCount.ReferenceController = FVar7.ReferenceController;
  if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar7.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SWindow::SetContent(this_00,&local_5e8);
  local_620 = 0x43fa0000;
  uStack_61c = 0x43fa0000;
  SWindow::Resize(this_00,(FDeprecateVector2DParameter)0x43fa000043fa0000);
  if (local_618.Object == (SWindow *)0x0) {
    pFVar17 = FSlateApplication::Get();
    local_5b8 = this_00;
    local_5b0 = FVar5.ReferenceController;
    pcVar4 = *(code **)(*(longlong *)pFVar17 + 0x10);
    if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar5.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    (*pcVar4)(pFVar17,local_558,&local_5b8,1);
    local_568.SharedReferenceCount.ReferenceController = local_550;
  }
  else {
    pFVar17 = FSlateApplication::Get();
    if ((local_618.Object == (SWindow *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return (bool)uVar9;
    }
    local_5d8.Object = local_618.Object;
    local_5d8.SharedReferenceCount.ReferenceController =
         local_618.SharedReferenceCount.ReferenceController;
    if (local_618.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_618.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_618.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_618.Object == (SWindow *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return (bool)uVar9;
    }
    local_5c8.Object = this_00;
    local_5c8.SharedReferenceCount.ReferenceController = FVar5.ReferenceController;
    if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar5.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSlateApplication::AddWindowAsNativeChild(pFVar17,&local_568,&local_5c8,&local_5d8,true);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_568.SharedReferenceCount.ReferenceController);
  pSVar20 = (SWindow *)(this->ParentWindow).WeakReferenceCount.ReferenceController;
  pSVar19 = pSVar20;
  if (pSVar20 != (SWindow *)0x0) {
    aVar3 = *(atomic<int> *)&pSVar20->_padding_;
    do {
      pSVar19 = this_01;
      if (aVar3 == (atomic<int>)0x0) goto LAB_146bc1245;
      LOCK();
      aVar12 = *(atomic<int> *)&pSVar20->_padding_;
      bVar8 = aVar3 == aVar12;
      if (bVar8) {
        *(atomic<int> *)&pSVar20->_padding_ = (atomic<int>)((int)aVar3 + 1);
        aVar12 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar12;
    } while (!bVar8);
    this_01 = (this->ParentWindow).Object;
    pSVar19 = pSVar20;
    if (this_01 != (SWindow *)0x0) goto LAB_146bc126b;
  }
LAB_146bc1245:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pSVar20 = pSVar19;
  if (bVar8) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
LAB_146bc126b:
  FVar18 = SWindow::GetPositionInScreen(this_01);
  SWindow::MoveWindowTo(this_00,*(FDeprecateVector2DParameter *)FVar18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_618.SharedReferenceCount.ReferenceController);
  return true;
}

// TextListView_OnGenerateWidget @ 146bc1440

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<ITableRow,1> * __thiscall
STranslationPickerFloatingWindow::TextListView_OnGenerateWidget
          (STranslationPickerFloatingWindow *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,
          TSharedPtr<FTranslationPickerTextItem,1> *param_1,TSharedRef<STableViewBase,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FArguments *pFVar2;
  TSlateDecl<STranslationPickerEditWidget,RequiredArgs::T2RequiredArgs<TSharedRef<STableViewBase,1>_const_&,TSharedPtr<FTranslationPickerTextItem,1>_&>_>
  *this_00;
  TSharedRef<STranslationPickerEditWidget,1> *pTVar3;
  T2RequiredArgs<TSharedRef<STableViewBase,1>_const_&,TSharedPtr<FTranslationPickerTextItem,1>_&>
  local_338;
  TSharedRef<STranslationPickerEditWidget,1> local_328;
  TSlateDecl<STranslationPickerEditWidget,RequiredArgs::T2RequiredArgs<TSharedRef<STableViewBase,1>_const_&,TSharedPtr<FTranslationPickerTextItem,1>_&>_>
  local_318;
  FArguments local_300;
  
  pFVar2 = STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::FArguments::FArguments(&local_300);
  local_338.Arg0 = param_2;
  local_338.Arg1 = param_1;
  this_00 = MakeTDecl<STranslationPickerEditWidget,RequiredArgs::T2RequiredArgs<TSharedRef<STableViewBase,1>_const_&,TSharedPtr<FTranslationPickerTextItem,1>_&>_>
                      (&local_318,"STranslationPickerEditWidget",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TranslationEditor\\Private\\TranslationPickerFloatingWindow.cpp"
                       ,0x27e,&local_338);
  pTVar3 = TSlateDecl<STranslationPickerEditWidget,RequiredArgs::T2RequiredArgs<TSharedRef<STableViewBase,1>_const_&,TSharedPtr<FTranslationPickerTextItem,1>_&>_>
           ::operator<<=(this_00,&local_328,pFVar2);
  __return_storage_ptr__->Object = (ITableRow *)pTVar3->Object;
  pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_328.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_318._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_300._Content.Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_300._Padding.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_300._OnDrop);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_300._OnDragLeave);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_300._OnDragEnter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_300._OnDragDetected);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_300._OnPaintDropIndicator);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_300._OnAcceptDrop);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_300._OnCanAcceptDrop);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_300);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// Tick @ 146bc15b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
STranslationPickerFloatingWindow::Tick
          (STranslationPickerFloatingWindow *this,FGeometry *param_1,double param_2,float param_3)

{
  atomic<int> *paVar1;
  FWeakWidgetPath *pFVar2;
  atomic<int> aVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  TVector2<float>_u_0_s_0 TVar8;
  code *pcVar9;
  SWidget *pSVar10;
  TReferenceControllerBase<1> *pTVar11;
  longlong *plVar12;
  FScriptContainerElement *pFVar13;
  TReferenceControllerBase<1> *pTVar14;
  FDeprecateVector2DParameter FVar15;
  bool bVar16;
  char cVar17;
  int iVar18;
  uint uVar19;
  atomic<int> aVar20;
  FSlateApplication *pFVar21;
  TVector2<float>_u_0_s_0 *pTVar22;
  FSlateApplication *this_00;
  FString *pFVar23;
  FWidgetPath *this_01;
  FString *pFVar24;
  TSharedRef<SWidget,1> *pTVar25;
  FWeakWidgetPath *pFVar26;
  FDeprecateSlateVector2D FVar27;
  float *pfVar28;
  FDeprecateVector2DParameter *pFVar29;
  ForElementType<FArrangedWidget> FVar30;
  TWeakPtr<SWindow,1> *pTVar31;
  SWindow *pSVar32;
  SWindow *pSVar33;
  uint uVar34;
  TWeakPtr<SWindow,1> *pTVar35;
  SWindow *this_02;
  SWindow *pSVar36;
  longlong lVar37;
  float fVar38;
  undefined1 auStackY_488 [32];
  FIdentityFunctor local_458;
  TVector2<float>_u_0_s_0 local_450;
  longlong *local_448;
  TReferenceControllerBase<1> *local_440;
  longlong *local_438;
  TReferenceControllerBase<1> *local_430;
  undefined4 local_428;
  undefined4 uStack_424;
  TSharedRef<SWidget,1> local_420;
  float local_410;
  float local_40c;
  float local_408;
  float local_404;
  TReferenceControllerBase<1> *local_400;
  TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_> local_3f8;
  STranslationPickerFloatingWindow *local_3e8;
  TVector2<float>_u_0_s_0 local_3e0;
  FWeakWidgetPath local_3d8;
  undefined1 local_3b8 [16];
  undefined1 local_3a8 [8];
  undefined1 local_3a0 [8];
  undefined1 local_398 [8];
  undefined1 local_390 [8];
  FString local_388;
  FString local_378;
  undefined1 local_368 [16];
  undefined1 local_358 [16];
  FWidgetPath local_348;
  FWidgetPath local_1e8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_488;
  this_02 = (SWindow *)0x0;
  local_450 = (TVector2<float>_u_0_s_0)((ulonglong)local_450 & 0xffffffff00000000);
  pFVar21 = FSlateApplication::Get();
  pTVar22 = (TVector2<float>_u_0_s_0 *)(**(code **)(*(longlong *)pFVar21 + 0x68))(pFVar21,local_3b8)
  ;
  TVar8 = *pTVar22;
  local_450.X = TVar8.X;
  local_450 = TVar8;
  if ((__real_3f800000 <=
       (float)((uint)(local_450.X - (this->MousePosPrev).field0_0x0._s_0.X) &
              __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
     (local_450.Y = TVar8.Y, fVar38 = local_450.Y - (this->MousePosPrev).field0_0x0._s_0.Y,
     __real_3f800000 <= (float)((uint)fVar38 & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    (this->MousePosPrev).field0_0x0._s_0 = TVar8;
    pFVar21 = FSlateApplication::Get();
    pcVar9 = *(code **)(*(longlong *)pFVar21 + 0x108);
    this_00 = FSlateApplication::Get();
    FSlateApplication::GetInteractiveTopLevelWindows(this_00,&local_3f8);
    (*pcVar9)(pFVar21,&local_348);
    DestructItems<TSharedRef<SWindow,1>,int>
              ((TSharedRef<SWindow,1> *)local_3f8.AllocatorInstance.Data,local_3f8.ArrayNum);
    if ((TSharedRef<SWindow,1> *)local_3f8.AllocatorInstance.Data != (TSharedRef<SWindow,1> *)0x0) {
      FMemory::Free(local_3f8.AllocatorInstance.Data);
    }
    bVar16 = FWidgetPath::IsValid(&local_348);
    if (bVar16) {
      pSVar36 = this_02;
      if ((this->LastTickHoveringWidgetPath).Widgets.ArrayNum < 1) {
LAB_146bc1754:
        bVar16 = true;
      }
      else {
        pFVar23 = FWidgetPath::ToString(&local_348,&local_378);
        this_01 = FWeakWidgetPath::ToWidgetPath
                            (&this->LastTickHoveringWidgetPath,&local_1e8,Truncate,
                             (FPointerEvent *)0x0,EVisibility::Visible);
        pFVar24 = FWidgetPath::ToString(this_01,&local_388);
        iVar18 = (pFVar23->Data).ArrayNum;
        iVar7 = (pFVar24->Data).ArrayNum;
        if (iVar7 == iVar18) {
          if (1 < iVar7) {
            iVar18 = FGenericPlatformStricmp::Stricmp
                               ((wchar_t *)(pFVar24->Data).AllocatorInstance.Data,
                                (wchar_t *)(pFVar23->Data).AllocatorInstance.Data);
            bVar16 = iVar18 == 0;
            goto LAB_146bc1743;
          }
        }
        else {
          bVar16 = iVar18 + iVar7 == 1;
LAB_146bc1743:
          if (!bVar16) {
            pSVar36 = (SWindow *)&DAT_00000007;
            goto LAB_146bc1754;
          }
        }
        bVar16 = false;
        pSVar36 = (SWindow *)&DAT_00000007;
      }
      if ((((ulonglong)pSVar36 & 4) != 0) &&
         (pSVar36 = (SWindow *)(ulonglong)((uint)pSVar36 & 0xfffffffb),
         local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_388.Data.AllocatorInstance.Data);
      }
      if (((ulonglong)pSVar36 & 2) != 0) {
        pSVar36 = (SWindow *)(ulonglong)((uint)pSVar36 & 0xfffffffd);
        if (local_1e8.VirtualPointerPositions.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.VirtualPointerPositions.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1e8.TopLevelWindow.SharedReferenceCount.ReferenceController);
        FVar30 = (ForElementType<FArrangedWidget>)&local_1e8.Widgets.Array;
        if (local_1e8.Widgets.Array.AllocatorInstance.SecondaryData !=
            (ForElementType<FArrangedWidget>)0x0) {
          FVar30 = local_1e8.Widgets.Array.AllocatorInstance.SecondaryData;
        }
        DestructItems<FArrangedWidget,int>
                  ((FArrangedWidget *)FVar30,local_1e8.Widgets.Array.ArrayNum);
        if (local_1e8.Widgets.Array.AllocatorInstance.SecondaryData !=
            (ForElementType<FArrangedWidget>)0x0) {
          FMemory::Free((void *)local_1e8.Widgets.Array.AllocatorInstance.SecondaryData);
        }
      }
      if ((((ulonglong)pSVar36 & 1) != 0) &&
         (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_378.Data.AllocatorInstance.Data);
      }
      if (bVar16) {
        if (TranslationPickerManager::PickedTexts.ArrayMax < 0) {
          DestructItems<FTranslationPickerTextAndGeom,int>
                    ((FTranslationPickerTextAndGeom *)
                     TranslationPickerManager::PickedTexts.AllocatorInstance.Data,
                     TranslationPickerManager::PickedTexts.ArrayNum);
          TranslationPickerManager::PickedTexts.ArrayNum = 0;
          if (TranslationPickerManager::PickedTexts.ArrayMax != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x48,8,0,&TranslationPickerManager::PickedTexts.AllocatorInstance,0,
                       &TranslationPickerManager::PickedTexts.ArrayMax);
          }
        }
        else {
          DestructItems<FTranslationPickerTextAndGeom,int>
                    ((FTranslationPickerTextAndGeom *)
                     TranslationPickerManager::PickedTexts.AllocatorInstance.Data,
                     TranslationPickerManager::PickedTexts.ArrayNum);
          TranslationPickerManager::PickedTexts.ArrayNum = 0;
        }
        uVar34 = 0;
        if ((int)(local_348.Widgets.Array.ArrayNum - 1U) < local_348.Widgets.Array.ArrayNum) {
          uVar34 = ~(local_348.Widgets.Array.ArrayNum - 1U) >> 0x1f;
        }
        if ((uVar34 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar30 = (ForElementType<FArrangedWidget>)&local_348.Widgets.Array;
        if (local_348.Widgets.Array.AllocatorInstance.SecondaryData !=
            (ForElementType<FArrangedWidget>)0x0) {
          FVar30 = local_348.Widgets.Array.AllocatorInstance.SecondaryData;
        }
        local_420.SharedReferenceCount.ReferenceController =
             ((FSharedReferencer<1> *)((longlong)FVar30 + -8))
             [(longlong)local_348.Widgets.Array.ArrayNum * 9].ReferenceController;
        pSVar10 = *(SWidget **)
                   ((longlong)((longlong)FVar30 + -0x10) +
                   (longlong)local_348.Widgets.Array.ArrayNum * 0x48);
        if (local_420.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_420.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_420.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
          LOCK();
          (local_420.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_420.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        local_420.Object = pSVar10;
        local_400 = local_420.SharedReferenceCount.ReferenceController;
        PickTextFromWidget(this,&local_420,&local_348,false);
        (**(code **)(pSVar10->_padding_ + 0x1b8))(pSVar10,&local_438);
        if (local_438 != (longlong *)0x0) {
          if ((local_438 == (longlong *)0x0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar16)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          cVar17 = (**(code **)(*local_438 + 0x20))();
          if (cVar17 == '\0') {
            if ((local_438 == (longlong *)0x0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar16)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pTVar25 = (TSharedRef<SWidget,1> *)(**(code **)*local_438)(local_438,local_368);
            PickTextFromWidget(this,pTVar25,&local_348,true);
          }
        }
        uVar34 = local_348.Widgets.Array.ArrayNum - 2;
        if (-1 < (int)uVar34) {
          lVar37 = (longlong)(int)uVar34 * 0x48;
          do {
            uVar19 = 0;
            if ((int)uVar34 < local_348.Widgets.Array.ArrayNum) {
              uVar19 = ~uVar34 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            FVar30 = (ForElementType<FArrangedWidget>)&local_348.Widgets.Array;
            if (local_348.Widgets.Array.AllocatorInstance.SecondaryData !=
                (ForElementType<FArrangedWidget>)0x0) {
              FVar30 = local_348.Widgets.Array.AllocatorInstance.SecondaryData;
            }
            pTVar11 = *(TReferenceControllerBase<1> **)(lVar37 + 0x40 + (longlong)FVar30);
            plVar12 = *(longlong **)(lVar37 + 0x38 + (longlong)FVar30);
            if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
              UNLOCK();
            }
            (**(code **)(*plVar12 + 0x1b8))(plVar12,&local_448);
            if (local_448 != (longlong *)0x0) {
              if ((local_448 == (longlong *)0x0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar16)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              cVar17 = (**(code **)(*local_448 + 0x20))();
              if (cVar17 == '\0') {
                if ((local_448 == (longlong *)0x0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar16)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pTVar25 = (TSharedRef<SWidget,1> *)(**(code **)*local_448)(local_448,local_358);
                PickTextFromWidget(this,pTVar25,&local_348,true);
              }
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_440);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar11);
            lVar37 = lVar37 + -0x48;
            uVar34 = uVar34 - 1;
          } while (-1 < (int)uVar34);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_430);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_400);
      }
      local_3e8 = this;
      local_3e0 = TVar8;
      AlgoImpl::
      IntroSortInternal<FTranslationPickerTextAndGeom,int,FIdentityFunctor,TDereferenceWrapper<FTranslationPickerTextAndGeom,_STranslationPickerFloatingWindow::Tick_::__l8::<lambda_1>_>_>
                ((FTranslationPickerTextAndGeom *)
                 TranslationPickerManager::PickedTexts.AllocatorInstance.Data,
                 TranslationPickerManager::PickedTexts.ArrayNum,local_458,(<lambda_1> *)&local_3e8);
      UpdateListItems(this);
    }
    pFVar26 = FWeakWidgetPath::FWeakWidgetPath(&local_3d8,&local_348);
    pFVar2 = &this->LastTickHoveringWidgetPath;
    if (pFVar2 != pFVar26) {
      DestructItems<TWeakPtr<SWidget,1>,int>
                ((TWeakPtr<SWidget,1> *)(pFVar2->Widgets).AllocatorInstance.Data,
                 (this->LastTickHoveringWidgetPath).Widgets.ArrayNum);
      pFVar13 = (pFVar2->Widgets).AllocatorInstance.Data;
      if (pFVar13 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar13);
      }
      (pFVar2->Widgets).AllocatorInstance.Data = (pFVar26->Widgets).AllocatorInstance.Data;
      (pFVar26->Widgets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->LastTickHoveringWidgetPath).Widgets.ArrayNum = (pFVar26->Widgets).ArrayNum;
      (this->LastTickHoveringWidgetPath).Widgets.ArrayMax = (pFVar26->Widgets).ArrayMax;
      (pFVar26->Widgets).ArrayNum = 0;
      (pFVar26->Widgets).ArrayMax = 0;
    }
    pTVar35 = &pFVar26->Window;
    pTVar31 = &(this->LastTickHoveringWidgetPath).Window;
    if (pTVar31 != pTVar35) {
      pTVar31->Object = pTVar35->Object;
      pTVar11 = (pFVar26->Window).WeakReferenceCount.ReferenceController;
      pTVar35->Object = (SWindow *)0x0;
      pTVar14 = (this->LastTickHoveringWidgetPath).Window.WeakReferenceCount.ReferenceController;
      (this->LastTickHoveringWidgetPath).Window.WeakReferenceCount.ReferenceController = pTVar11;
      (pFVar26->Window).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar14->WeakReferenceCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(pTVar14->_padding_ + 8))(pTVar14,1);
        }
      }
    }
    if (local_3d8.Window.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_3d8.Window.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_3d8.Window.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_3d8.Window.WeakReferenceCount.ReferenceController,1);
      }
    }
    DestructItems<TWeakPtr<SWidget,1>,int>
              ((TWeakPtr<SWidget,1> *)local_3d8.Widgets.AllocatorInstance.Data,
               local_3d8.Widgets.ArrayNum);
    if ((TWeakPtr<SWidget,1> *)local_3d8.Widgets.AllocatorInstance.Data !=
        (TWeakPtr<SWidget,1> *)0x0) {
      FMemory::Free(local_3d8.Widgets.AllocatorInstance.Data);
    }
    if (local_348.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_348.VirtualPointerPositions.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_348.TopLevelWindow.SharedReferenceCount.ReferenceController);
    FVar30 = (ForElementType<FArrangedWidget>)&local_348.Widgets.Array;
    if (local_348.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FVar30 = local_348.Widgets.Array.AllocatorInstance.SecondaryData;
    }
    DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar30,local_348.Widgets.Array.ArrayNum);
    if (local_348.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FMemory::Free((void *)local_348.Widgets.Array.AllocatorInstance.SecondaryData);
    }
  }
  if ((this->ParentWindow).Object == (SWindow *)0x0) {
    return;
  }
  pTVar11 = (this->ParentWindow).WeakReferenceCount.ReferenceController;
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
    return;
  }
  if ((int)pTVar11->SharedReferenceCount < 1) {
    return;
  }
  pSVar36 = (SWindow *)(this->ParentWindow).WeakReferenceCount.ReferenceController;
  pSVar32 = pSVar36;
  pSVar33 = this_02;
  if (pSVar36 == (SWindow *)0x0) {
LAB_146bc1d05:
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    pSVar36 = pSVar32;
    if (bVar16) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  else {
    aVar3 = *(atomic<int> *)&pSVar36->_padding_;
    do {
      pSVar32 = this_02;
      if (aVar3 == (atomic<int>)0x0) goto LAB_146bc1d05;
      LOCK();
      aVar20 = *(atomic<int> *)&pSVar36->_padding_;
      bVar16 = aVar3 == aVar20;
      if (bVar16) {
        *(atomic<int> *)&pSVar36->_padding_ = (atomic<int>)((int)aVar3 + 1);
        aVar20 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar20;
    } while (!bVar16);
    pSVar33 = (this->ParentWindow).Object;
    pSVar32 = pSVar36;
    if (pSVar33 == (SWindow *)0x0) goto LAB_146bc1d05;
  }
  FVar27 = SWindow::GetSizeInScreen(pSVar33);
  fVar38 = *(float *)FVar27;
  TVar8 = *(TVector2<float>_u_0_s_0 *)FVar27;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar36);
  pFVar21 = FSlateApplication::Get();
  pfVar28 = (float *)(**(code **)(*(longlong *)pFVar21 + 0x68))(pFVar21,local_3a8);
  fVar4 = *pfVar28;
  fVar5 = pfVar28[1];
  pFVar21 = FSlateApplication::Get();
  pfVar28 = (float *)(**(code **)(*(longlong *)pFVar21 + 0x78))(pFVar21,local_3a0);
  fVar6 = *pfVar28;
  pFVar21 = FSlateApplication::Get();
  lVar37 = (**(code **)(*(longlong *)pFVar21 + 0x78))(pFVar21,local_398);
  fVar5 = *(float *)(lVar37 + 4) + fVar5;
  pFVar21 = FSlateApplication::Get();
  local_410 = (fVar4 - fVar6) - fVar38;
  local_450 = TVar8;
  local_40c = fVar5;
  local_408 = local_410;
  local_404 = fVar5;
  pFVar29 = (FDeprecateVector2DParameter *)
            (**(code **)(*(longlong *)pFVar21 + 0x110))(pFVar21,local_390,&local_410,&local_450);
  pSVar36 = (SWindow *)(this->ParentWindow).WeakReferenceCount.ReferenceController;
  local_428 = *(undefined4 *)pFVar29;
  uStack_424 = *(undefined4 *)&pFVar29->field_0x4;
  FVar15 = *pFVar29;
  pSVar33 = pSVar36;
  if (pSVar36 != (SWindow *)0x0) {
    aVar3 = *(atomic<int> *)&pSVar36->_padding_;
    do {
      pSVar33 = this_02;
      if (aVar3 == (atomic<int>)0x0) goto LAB_146bc1e76;
      LOCK();
      aVar20 = *(atomic<int> *)&pSVar36->_padding_;
      bVar16 = aVar3 == aVar20;
      if (bVar16) {
        *(atomic<int> *)&pSVar36->_padding_ = (atomic<int>)((int)aVar3 + 1);
        aVar20 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar20;
    } while (!bVar16);
    this_02 = (this->ParentWindow).Object;
    pSVar33 = pSVar36;
    if (this_02 != (SWindow *)0x0) goto LAB_146bc1e9c;
  }
LAB_146bc1e76:
  bVar16 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  pSVar36 = pSVar33;
  if (bVar16) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_146bc1e9c:
  SWindow::MoveWindowTo(this_02,FVar15);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar36);
  return;
}

// UpdateListItems @ 146bc2e90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
STranslationPickerFloatingWindow::UpdateListItems(STranslationPickerFloatingWindow *this)

{
  int *piVar1;
  TArray<TSharedPtr<FTranslationPickerTextItem,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  FText *pFVar3;
  TSharedPtr<FTranslationPickerTextItem,1> *pTVar4;
  SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *pSVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  ForAnyElementType FVar11;
  undefined1 local_res8 [8];
  TSharedPtr<FTranslationPickerTextItem,1> local_28;
  
  pTVar2 = &this->TextListItems;
  piVar1 = &(this->TextListItems).ArrayMax;
  pTVar4 = (TSharedPtr<FTranslationPickerTextItem,1> *)(pTVar2->AllocatorInstance).Data;
  iVar9 = (this->TextListItems).ArrayNum;
  if ((this->TextListItems).ArrayMax < 0) {
    DestructItems<TSharedPtr<FTranslationPickerTextItem,1>,int>(pTVar4,iVar9);
    (this->TextListItems).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedPtr<FTranslationPickerTextItem,1>,int>(pTVar4,iVar9);
    (this->TextListItems).ArrayNum = 0;
  }
  iVar9 = TranslationPickerManager::PickedTexts.ArrayNum;
  pFVar3 = (FText *)(TranslationPickerManager::PickedTexts.AllocatorInstance.Data +
                    (longlong)iVar9 * 0x48);
  FVar11.Data = TranslationPickerManager::PickedTexts.AllocatorInstance.Data;
  while( true ) {
    if (TranslationPickerManager::PickedTexts.ArrayNum != iVar9) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FTranslationPickerTextAndGeom,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if ((FText *)FVar11.Data == pFVar3) break;
    FTranslationPickerTextItem::BuildTextItem(&local_28,(FText *)FVar11.Data,false);
    pTVar4 = (TSharedPtr<FTranslationPickerTextItem,1> *)(pTVar2->AllocatorInstance).Data;
    if ((pTVar4 <= &local_28) && (&local_28 < pTVar4 + *piVar1)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar8 = (this->TextListItems).ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->TextListItems).ArrayNum = iVar8 + 1;
    pFVar10 = (pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
    *(FTranslationPickerTextItem **)pFVar10 = local_28.Object;
    *(TReferenceControllerBase<1> **)(pFVar10 + 8) =
         local_28.SharedReferenceCount.ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    FVar11.Data = (FScriptContainerElement *)&((FText *)((longlong)FVar11.Data + 0x40))->Flags;
  }
  pSVar5 = (this->TextListView).Object;
  if (pSVar5 != (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *)0x0) {
    (**(code **)(pSVar5->_padding_ + 0x248))();
  }
  return;
}

