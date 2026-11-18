// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 4

// ComputeDesiredSize @ 142d76670

TVector2<double> * __thiscall
SSegmentedTimelineView::ComputeDesiredSize
          (SSegmentedTimelineView *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  TDelegate<UE::Math::TVector2<float>___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  TVector2<float>_u_0_s_0 TVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 local_res8;
  FReadAccessScope local_28;
  
  this_00 = &(this->DesiredSize).Getter;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_28);
  if ((*(int *)&(this->DesiredSize).Getter.field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->DesiredSize).Getter.field_0x8, plVar3 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar3 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_28);
      if (*(int *)&(this->DesiredSize).Getter.field_0x10 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)&(this->DesiredSize).Getter.field_0x8;
      }
      (**(code **)(*plVar3 + 0x60))(plVar3,&local_res8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      (this->DesiredSize).Value.field0_0x0 = local_res8;
      goto LAB_142d76704;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
LAB_142d76704:
  TVar1 = (this->DesiredSize).Value.field0_0x0._s_0;
  local_res8._0_4_ = TVar1.X;
  local_res8._4_4_ = TVar1.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(float)local_res8;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)local_res8._4_4_;
  return __return_storage_ptr__;
}

// Construct @ 142d879f0

void __thiscall SSegmentedTimelineView::Construct(SSegmentedTimelineView *this,FArguments *param_1)

{
  TDelegate<UE::Math::TVector2<float>___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  TDelegate<UE::Math::TVector2<float>___cdecl(void),FDefaultDelegateUserPolicy> *this_01;
  TDelegate<TSharedPtr<SSegmentedTimelineView::FSegmentData,1>___cdecl(void),FDefaultDelegateUserPolicy>
  *this_02;
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  FSegmentData *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TDelegate<TSharedPtr<SSegmentedTimelineView::FSegmentData,1>___cdecl(void),FDefaultDelegateUserPolicy>
  *this_03;
  undefined1 local_48 [8];
  ForAnyElementType local_40;
  int local_38;
  FDestructionSentinel local_30;
  
  TAttribute<TRange<double>_>::operator=(&this->ViewRange,&param_1->_ViewRange);
  TAttribute<FLinearColor>::operator=(&this->FillColor,&param_1->_FillColor);
  this_00 = &(param_1->_DesiredSize).Getter;
  (this->DesiredSize).Value.field0_0x0 = (param_1->_DesiredSize).Value.field0_0x0;
  this_01 = &(this->DesiredSize).Getter;
  (this->DesiredSize).bIsSet = (param_1->_DesiredSize).bIsSet;
  if (this_00 != this_01) {
    local_48 = (undefined1  [8])0x0;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FReadAccessScope *)&local_30);
    if ((*(int *)&(param_1->_DesiredSize).Getter.field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(param_1->_DesiredSize).Getter.field_0x8, plVar1 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_48);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_30);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_01,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_48);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
               (FWriteAccessScope *)&local_30);
    if ((local_38 != 0) && (local_40.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_40.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
      local_38 = 0;
    }
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_48);
  }
  pTVar2 = (param_1->_SegmentData).Value.SharedReferenceCount.ReferenceController;
  pFVar3 = (param_1->_SegmentData).Value.Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this->SegmentData).Value.SharedReferenceCount.ReferenceController;
  (this->SegmentData).Value.Object = pFVar3;
  (this->SegmentData).Value.SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  this_02 = &(param_1->_SegmentData).Getter;
  (this->SegmentData).bIsSet = (param_1->_SegmentData).bIsSet;
  this_03 = &(this->SegmentData).Getter;
  if (this_02 != this_03) {
    local_48 = (undefined1  [8])0x0;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_02,
               (FReadAccessScope *)&local_30);
    if ((*(int *)&(param_1->_SegmentData).Getter.field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(param_1->_SegmentData).Getter.field_0x8, plVar1 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_48);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_30);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_03,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_48);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
               (FWriteAccessScope *)&local_30);
    if ((local_38 != 0) && (local_40.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_40.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
      local_38 = 0;
    }
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_48);
  }
  return;
}

// OnPaint @ 142dc6be0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SSegmentedTimelineView::OnPaint
          (SSegmentedTimelineView *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = PaintBlock(this,param_2,param_3,param_4,param_5,param_6,param_7);
  if ((param_7) && (*(char *)((longlong)&this->_padding_ + 2) != '\0')) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  iVar2 = SCompoundWidget::OnPaint
                    ((SCompoundWidget *)this,param_1,param_2,param_3,param_4,iVar1,param_6,bVar3);
  if (iVar2 < iVar1) {
    iVar2 = iVar1;
  }
  return iVar2;
}

// PaintBlock @ 142dcc150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SSegmentedTimelineView::PaintBlock
          (SSegmentedTimelineView *this,FGeometry *param_1,FSlateRect *param_2,
          FSlateWindowElementList *param_3,int param_4,FWidgetStyle *param_5,bool param_6)

{
  float fVar1;
  double dVar2;
  undefined1 uVar3;
  uint uVar4;
  FSegmentData *pFVar5;
  FName FVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  bool bVar11;
  float fVar12;
  float afVar13 [2];
  float afVar14 [2];
  float afVar15 [2];
  float afVar16 [2];
  float fVar17;
  float fVar18;
  char cVar19;
  bool bVar20;
  int iVar21;
  uint uVar22;
  TRange<double> *pTVar23;
  FLinearColor *pFVar24;
  ulonglong uVar25;
  FName *pFVar26;
  ISlateStyle *pIVar27;
  FSlateBrush *pFVar28;
  FLinearColor_u_0 *pFVar29;
  longlong *plVar30;
  uint uVar31;
  TAttribute<TSharedPtr<SSegmentedTimelineView::FSegmentData,1>_> *pTVar32;
  FScriptContainerElement *pFVar33;
  FScriptContainerElement *pFVar34;
  uint uVar35;
  undefined4 uVar36;
  float fVar37;
  undefined4 uVar38;
  undefined1 auStackY_248 [32];
  undefined1 local_217 [7];
  undefined8 local_210;
  uint local_208;
  TVector2<float>_u_0 local_204;
  float local_1fc;
  float fStack_1f8;
  float local_1f4;
  float fStack_1f0;
  FSegmentData *local_1e8;
  FSharedReferencer<1> local_1e0;
  FSlateWindowElementList *local_1d8;
  FGeometry *local_1d0;
  TReferenceControllerBase<1> *local_1c8;
  TVector2<float>_u_0_s_0 local_1bc;
  FDeprecateSlateVector2D local_1b0;
  TRange<double> local_1a8;
  double local_188;
  float local_180;
  FName local_178;
  FLinearColor_u_0 local_170;
  FReadAccessScope local_160;
  TTransform2<float> local_148;
  TTransform2<float> local_130;
  FReadAccessScope local_118;
  TVector2<float>_u_0 local_100;
  float local_f8;
  undefined8 local_f4;
  undefined8 local_ec;
  float local_e4 [2];
  float afStack_dc [2];
  TVector2<float>_u_0 local_d4;
  byte local_cc;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_248;
  local_1d8 = param_3;
  local_1d0 = param_1;
  pTVar23 = TAttribute<TRange<double>_>::Get(&this->ViewRange);
  uVar8._0_1_ = (pTVar23->LowerBound).Type.Value;
  uVar8._1_7_ = *(undefined7 *)&(pTVar23->LowerBound).field_0x1;
  dVar2 = (pTVar23->LowerBound).Value;
  uVar9._0_1_ = (pTVar23->UpperBound).Type.Value;
  uVar9._1_7_ = *(undefined7 *)&(pTVar23->UpperBound).field_0x1;
  dVar10 = (pTVar23->UpperBound).Value;
  pFVar24 = TAttribute<FLinearColor>::Get(&this->FillColor);
  local_170._0_8_ = *(undefined8 *)&pFVar24->field0_0x0;
  local_170._8_8_ = *(undefined8 *)((longlong)&pFVar24->field0_0x0 + 8);
  local_1b0 = param_1->Size;
  local_1a8.LowerBound._0_8_ = uVar8;
  local_1a8.LowerBound.Value = dVar2;
  local_1a8.UpperBound._0_8_ = uVar9;
  local_1a8.UpperBound.Value = dVar10;
  local_188 = TRange<double>::Size<double>(&local_1a8);
  if (local_188 <= 0.0) {
    local_180 = 0.0;
  }
  else {
    local_180 = (float)((double)(float)local_1b0._0_4_ / local_188);
  }
  local_210 = *(TVector2<float>_u_0_s_0 *)&param_1->Size;
  pTVar32 = &this->SegmentData;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->SegmentData).Getter,
             &local_160);
  if (((*(int *)&(this->SegmentData).Getter.field_0x10 == 0) ||
      (plVar30 = *(longlong **)&(this->SegmentData).Getter.field_0x8, plVar30 == (longlong *)0x0))
     || (cVar19 = (**(code **)(*plVar30 + 0x38))(), cVar19 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_160);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_160);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->SegmentData).Getter
               ,&local_118);
    if (*(int *)&(this->SegmentData).Getter.field_0x10 == 0) {
      plVar30 = (longlong *)0x0;
    }
    else {
      plVar30 = *(longlong **)&(this->SegmentData).Getter.field_0x8;
    }
    (**(code **)(*plVar30 + 0x60))(plVar30,&local_1e8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_118);
    if (pTVar32 != (TAttribute<TSharedPtr<SSegmentedTimelineView::FSegmentData,1>_> *)&local_1e8) {
      (pTVar32->Value).Object = local_1e8;
      local_1e8 = (FSegmentData *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->SegmentData).Value.SharedReferenceCount,&local_1e0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1e0.ReferenceController);
  }
  local_1c8 = (this->SegmentData).Value.SharedReferenceCount.ReferenceController;
  pFVar5 = (pTVar32->Value).Object;
  if (local_1c8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_1c8->SharedReferenceCount = (atomic<int>)((int)local_1c8->SharedReferenceCount + 1);
    UNLOCK();
  }
  afVar15 = _UNK_15076b188;
  afVar13 = ___xmm_3f80000000000000000000003f800000;
  fVar12 = __real_40000000;
  if (pFVar5 != (FSegmentData *)0x0) {
    uVar35 = 0;
    if (((pFVar5->AlternatingSegmentsColors).field0_0x0.TypedValue.ArrayMax == -1) ||
       (bVar11 = true, (pFVar5->AlternatingSegmentsColors).field0_0x0.TypedValue.ArrayNum < 1)) {
      bVar11 = false;
    }
    local_208 = (pFVar5->Segments).ArrayNum;
    uVar25 = (ulonglong)(int)local_208;
    pFVar33 = (pFVar5->Segments).AllocatorInstance.Data;
    fVar18 = (float)local_210._4_4_;
    fVar17 = (float)(undefined4)local_210;
    pFVar34 = pFVar33 + uVar25 * 0x20;
    while( true ) {
      if ((pFVar5->Segments).ArrayNum != (int)uVar25) {
        local_217[0] = 0;
        `TCheckedPointerIterator<TRange<double>,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_217);
      }
      if (pFVar33 == pFVar34) break;
      if (*pFVar33 == (FScriptContainerElement)0x2) {
        uVar36 = 0;
        uVar38 = 0;
      }
      else {
        uVar36 = (undefined4)*(undefined8 *)(pFVar33 + 8);
        uVar38 = (undefined4)((ulonglong)*(undefined8 *)(pFVar33 + 8) >> 0x20);
      }
      if (pFVar33[0x10] == (FScriptContainerElement)0x2) {
        dVar2 = (double)fVar17;
      }
      else {
        dVar2 = *(double *)(pFVar33 + 0x18);
      }
      if ((local_1a8.LowerBound.Type.Value == '\x02') &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,99,L""), bVar20)) {
        pcVar7 = (code *)swi(3);
        iVar21 = (*pcVar7)();
        return iVar21;
      }
      fVar37 = (float)((double)CONCAT44(uVar38,uVar36) - local_1a8.LowerBound.Value) * local_180;
      if (fVar37 <= 0.0) {
        fVar37 = 0.0;
      }
      if ((local_1a8.LowerBound.Type.Value == '\x02') &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,99,L""), bVar20)) {
        pcVar7 = (code *)swi(3);
        iVar21 = (*pcVar7)();
        return iVar21;
      }
      afVar16 = _UNK_15076b188;
      afVar14 = ___xmm_3f80000000000000000000003f800000;
      local_1bc = (param_1->AbsolutePosition).field0_0x0._s_0;
      local_210._4_4_ = 0x3f800000;
      local_210._0_4_ = fVar37;
      local_204 = local_210;
      local_148.Trans.field0_0x0 = local_210;
      local_1f4 = (float)(dVar2 - local_1a8.LowerBound.Value) * local_180;
      ___xmm_3f80000000000000000000003f800000 = afVar13[0];
      _UNK_15076b184 = afVar13[1];
      local_148.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
      local_148.M.M[0][1] = _UNK_15076b184;
      _UNK_15076b188 = afVar15[0];
      _UNK_15076b18c = afVar15[1];
      local_148.M.M[1][0] = _UNK_15076b188;
      local_148.M.M[1][1] = _UNK_15076b18c;
      if (fVar17 <= local_1f4) {
        local_1f4 = fVar17;
      }
      local_1f4 = local_1f4 - fVar37;
      fVar1 = param_1->Scale;
      fStack_1f8 = fVar1 * 1.0 + local_1bc.Y;
      fStack_1f0 = fVar18 - fVar12;
      local_1fc = fVar37 * fVar1 + local_1bc.X;
      ___xmm_3f80000000000000000000003f800000 = afVar14;
      _UNK_15076b188 = afVar16;
      Concatenate<TTransform2<float>_>(&local_130,&local_148,&param_1->AccumulatedRenderTransform);
      local_100._s_0.Y = fStack_1f8;
      local_100._s_0.X = local_1fc;
      local_ec = CONCAT44(fStack_1f0,local_1f4);
      local_cc = param_1->bHasRenderTransform * '\x02' | local_cc & 0xfc;
      local_f4 = 0;
      local_e4[0] = local_130.M.M[0][0];
      local_e4[1] = local_130.M.M[0][1];
      afStack_dc[0] = local_130.M.M[1][0];
      afStack_dc[1] = local_130.M.M[1][1];
      local_d4 = local_130.Trans.field0_0x0;
      local_f8 = fVar1;
      pFVar26 = ::FName::FName(&local_178,"Sequencer.SectionArea.Background");
      FVar6 = *pFVar26;
      pIVar27 = FAppStyle::Get();
      pFVar28 = (FSlateBrush *)(**(code **)((longlong)*pIVar27 + 0x50))(pIVar27,FVar6,0,0);
      if (bVar11) {
        if ((pFVar5->AlternatingSegmentsColors).field0_0x0.TypedValue.ArrayMax == -1) {
          bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             );
          if (bVar20) {
            pcVar7 = (code *)swi(3);
            iVar21 = (*pcVar7)();
            return iVar21;
          }
          if (((pFVar5->AlternatingSegmentsColors).field0_0x0.TypedValue.ArrayMax == -1) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar20)) {
            pcVar7 = (code *)swi(3);
            iVar21 = (*pcVar7)();
            return iVar21;
          }
        }
        uVar4 = (pFVar5->AlternatingSegmentsColors).field0_0x0.TypedValue.ArrayNum;
        uVar31 = uVar35 % uVar4;
        uVar22 = 0;
        if ((int)uVar31 < (int)uVar4) {
          uVar22 = ~uVar31 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar7 = (code *)swi(3);
          iVar21 = (*pcVar7)();
          return iVar21;
        }
        pFVar29 = (FLinearColor_u_0 *)
                  ((pFVar5->AlternatingSegmentsColors).field0_0x0.TypedValue.AllocatorInstance.Data
                  + (longlong)(int)uVar31 * 0x10);
      }
      else {
        pFVar29 = &local_170;
      }
      FSlateDrawElement::MakeBox
                (local_1d8,param_4,(FPaintGeometry *)&local_100._s_0,pFVar28,None,
                 (FLinearColor *)&pFVar29->_s_0);
      uVar25 = (ulonglong)local_208;
      uVar35 = uVar35 + 1;
      pFVar33 = pFVar33 + 0x20;
      param_1 = local_1d0;
    }
    param_4 = param_4 + 1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1c8);
  return param_4;
}

