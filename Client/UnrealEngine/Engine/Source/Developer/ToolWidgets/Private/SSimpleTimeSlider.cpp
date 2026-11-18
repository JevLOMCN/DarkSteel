// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 13

// CommitScrubPosition @ 142d761d0

void __thiscall
SSimpleTimeSlider::CommitScrubPosition(SSimpleTimeSlider *this,double param_1,bool param_2)

{
  longlong *plVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  bool bVar6;
  TRange<double> *pTVar7;
  undefined4 uVar8;
  FReadAccessScope local_98;
  FReadAccessScope local_80;
  FReadAccessScope local_68;
  TRange<double> local_50 [2];
  
  uVar8 = SUB84(param_1,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->ScrubPosition).Getter
             ,&local_98);
  if (((*(int *)&(this->ScrubPosition).Getter.field_0x10 == 0) ||
      (plVar1 = *(longlong **)&(this->ScrubPosition).Getter.field_0x8, plVar1 == (longlong *)0x0))
     || (cVar5 = (**(code **)(*plVar1 + 0x38))(), cVar5 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_98);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ScrubPosition).Getter);
    (this->ScrubPosition).Value = param_1;
    (this->ScrubPosition).bIsSet = true;
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_98);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->ViewRange).Getter,
             &local_80);
  if (((*(int *)&(this->ViewRange).Getter.field_0x10 == 0) ||
      (plVar1 = *(longlong **)&(this->ViewRange).Getter.field_0x8, plVar1 == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(*plVar1 + 0x38))(), cVar5 == '\0')) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_80);
  if (!bVar6) {
    pTVar7 = TAttribute<TRange<double>_>::Get(&this->ViewRange);
    local_50[0].LowerBound.Type.Value = (pTVar7->LowerBound).Type.Value;
    local_50[0].LowerBound._1_7_ = *(undefined7 *)&(pTVar7->LowerBound).field_0x1;
    local_50[0].LowerBound.Value = (pTVar7->LowerBound).Value;
    local_50[0].UpperBound.Type.Value = (pTVar7->UpperBound).Type.Value;
    local_50[0].UpperBound._1_7_ = *(undefined7 *)&(pTVar7->UpperBound).field_0x1;
    local_50[0].UpperBound.Value = (pTVar7->UpperBound).Value;
    dVar3 = TRange<double>::Size<double>(local_50);
    if ((local_50[0].LowerBound.Type.Value == '\x02') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (local_50[0].LowerBound.Value <= param_1) {
      if ((local_50[0].UpperBound.Type.Value == '\x02') &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (param_1 <= local_50[0].UpperBound.Value) goto LAB_142d7636a;
      dVar4 = param_1 - dVar3;
    }
    else {
      dVar4 = param_1;
      param_1 = dVar3 + param_1;
    }
    SetTimeRange(this,dVar4,param_1);
  }
LAB_142d7636a:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnScrubPositionChanged
             ,&local_68);
  if ((*(int *)&(this->OnScrubPositionChanged).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnScrubPositionChanged).field_0x8, plVar1 != (longlong *)0x0))
  {
    (**(code **)(*plVar1 + 0x68))(plVar1,uVar8,param_2);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_68);
  return;
}

// ComputeDesiredSize @ 142d76940

TVector2<double> * __thiscall
SSimpleTimeSlider::ComputeDesiredSize
          (SSimpleTimeSlider *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  TVector2<float>_u_0_s_0 TVar1;
  float local_res8;
  float fStackX_c;
  
  TVar1 = (this->DesiredSize).field0_0x0._s_0;
  local_res8 = TVar1.X;
  fStackX_c = TVar1.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)local_res8;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fStackX_c;
  return __return_storage_ptr__;
}

// Construct @ 142d8cf70

void __thiscall SSimpleTimeSlider::Construct(SSimpleTimeSlider *this,FArguments *param_1)

{
  TDelegate<double___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  TDelegate<double___cdecl(void),FDefaultDelegateUserPolicy> *this_01;
  longlong *plVar1;
  code *pcVar2;
  ISlateStyle *pIVar3;
  FName *pFVar4;
  FSlateBrush *pFVar5;
  FName local_res8;
  undefined1 local_48 [8];
  ForAnyElementType local_40;
  int local_38;
  FDestructionSentinel local_30;
  
  this_00 = &(param_1->_ScrubPosition).Getter;
  (this->ScrubPosition).Value = (param_1->_ScrubPosition).Value;
  this_01 = &(this->ScrubPosition).Getter;
  (this->ScrubPosition).bIsSet = (param_1->_ScrubPosition).bIsSet;
  if (this_00 != this_01) {
    local_48 = (undefined1  [8])0x0;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FReadAccessScope *)&local_30);
    if ((*(int *)&(param_1->_ScrubPosition).Getter.field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(param_1->_ScrubPosition).Getter.field_0x8,
       plVar1 != (longlong *)0x0)) {
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
  TAttribute<TRange<double>_>::operator=(&this->ViewRange,&param_1->_ViewRange);
  TAttribute<TRange<double>_>::operator=(&this->ClampRange,&param_1->_ClampRange);
  (this->AllowZoom).Value = (param_1->_AllowZoom).Value;
  (this->AllowZoom).bIsSet = (param_1->_AllowZoom).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->AllowZoom).Getter,&(param_1->_AllowZoom).Getter);
  (this->AllowPan).Value = (param_1->_AllowPan).Value;
  (this->AllowPan).bIsSet = (param_1->_AllowPan).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->AllowPan).Getter,&(param_1->_AllowPan).Getter);
  (this->CursorSize).Value = (param_1->_CursorSize).Value;
  (this->CursorSize).bIsSet = (param_1->_CursorSize).bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->CursorSize).Getter,&(param_1->_CursorSize).Getter);
  (this->MirrorLabels).Value = (param_1->_MirrorLabels).Value;
  (this->MirrorLabels).bIsSet = (param_1->_MirrorLabels).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->MirrorLabels).Getter,&(param_1->_MirrorLabels).Getter);
  if (&param_1->_OnScrubPositionChanged != &this->OnScrubPositionChanged) {
    local_48 = (undefined1  [8])0x0;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnScrubPositionChanged,(FReadAccessScope *)&local_30);
    if ((*(int *)&(param_1->_OnScrubPositionChanged).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(param_1->_OnScrubPositionChanged).field_0x8,
       plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_48);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_30);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnScrubPositionChanged,
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
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnBeginScrubberMovement,&param_1->_OnBeginScrubberMovement);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnEndScrubberMovement,&param_1->_OnEndScrubberMovement);
  if (&param_1->_OnViewRangeChanged != &this->OnViewRangeChanged) {
    local_48 = (undefined1  [8])0x0;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnViewRangeChanged,(FReadAccessScope *)&local_30);
    if ((*(int *)&(param_1->_OnViewRangeChanged).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(param_1->_OnViewRangeChanged).field_0x8, plVar1 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_48);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_30);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnViewRangeChanged,
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
  TAttribute<FLinearColor>::operator=
            (&this->ClampRangeHighlightColor,&param_1->_ClampRangeHighlightColor);
  (this->ClampRangeHighlightSize).Value = (param_1->_ClampRangeHighlightSize).Value;
  (this->ClampRangeHighlightSize).bIsSet = (param_1->_ClampRangeHighlightSize).bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->ClampRangeHighlightSize).Getter,&(param_1->_ClampRangeHighlightSize).Getter);
  (this->DesiredSize).field0_0x0 = (param_1->_DesiredSize).field0_0x0;
  this->DistanceDragged = 0.0;
  this->bDraggingScrubber = false;
  this->bPanning = false;
  *(undefined1 *)((longlong)&this->_padding_ + 5) = 1;
  pIVar3 = FAppStyle::Get();
  pcVar2 = *(code **)((longlong)*pIVar3 + 0x50);
  pFVar4 = ::FName::FName(&local_res8,L"Sequencer.Timeline.VanillaScrubHandleUp");
  pFVar5 = (FSlateBrush *)(*pcVar2)(pIVar3,*pFVar4,0,0);
  this->ScrubHandleUp = pFVar5;
  pIVar3 = FAppStyle::Get();
  pcVar2 = *(code **)((longlong)*pIVar3 + 0x50);
  pFVar4 = ::FName::FName(&local_res8,L"Sequencer.Timeline.VanillaScrubHandleDown");
  pFVar5 = (FSlateBrush *)(*pcVar2)(pIVar3,*pFVar4,0,0);
  this->ScrubHandleDown = pFVar5;
  pIVar3 = FAppStyle::Get();
  pcVar2 = *(code **)((longlong)*pIVar3 + 0x50);
  pFVar4 = ::FName::FName(&local_res8,"Sequencer.SectionArea.Background");
  pFVar5 = (FSlateBrush *)(*pcVar2)(pIVar3,*pFVar4,0,0);
  this->CursorBackground = pFVar5;
  return;
}

// DrawTicks @ 142d9efd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
SSimpleTimeSlider::DrawTicks
          (SSimpleTimeSlider *this,FSlateWindowElementList *param_1,FScrubRangeToScreen *param_2,
          FDrawTickArgs *param_3)

{
  double dVar1;
  ESlateDrawEffect EVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float afVar12 [2];
  float afVar13 [2];
  float afVar14 [2];
  float afVar15 [2];
  ForAnyElementType FVar16;
  FSlateWindowElementList *pFVar17;
  bool bVar18;
  FName *pFVar19;
  FDeprecateSlateVector2D FVar20;
  wchar_t *pwVar21;
  uint uVar22;
  FString *__return_storage_ptr__;
  longlong lVar23;
  uint uVar24;
  float fVar25;
  float in_XMM3_Da;
  float fVar26;
  float fVar27;
  undefined1 auStackY_418 [32];
  float local_3d0;
  float fStack_3cc;
  ForAnyElementType local_3c8;
  int local_3c0 [2];
  undefined8 local_3b8;
  FString local_3b0;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_3a0;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_390;
  undefined4 local_380;
  float fStack_37c;
  float local_378;
  float fStack_374;
  float local_370;
  float fStack_36c;
  float local_368;
  float fStack_364;
  float local_360;
  float fStack_35c;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 local_350;
  float fStack_34c;
  float local_348;
  float fStack_344;
  float local_340;
  float fStack_33c;
  FSlateWindowElementList *local_338;
  undefined4 local_330;
  undefined4 uStack_32c;
  TVector2<float>_u_0_s_0 local_324;
  TVector2<float>_u_0_s_0 local_318;
  TVector2<float>_u_0_s_0 local_30c;
  FFontOutlineSettings local_300;
  UObject *local_2d8;
  int iStack_2d0;
  undefined4 uStack_2cc;
  TSharedRef<FSlateFontMeasure,1> local_2c8;
  FName local_2b8;
  undefined1 local_2b0 [8];
  FString local_2a8;
  FString local_298;
  TObjectPtr<UObject_const_>_u_0 local_288;
  undefined8 uStack_280;
  TTransform2<float> local_278;
  TTransform2<float> local_260;
  TTransform2<float> local_248;
  TTransform2<float> local_230;
  TTransform2<float> local_218;
  TTransform2<float> local_200;
  FSlateFontInfo local_1e8;
  TVector2<float>_u_0 local_188;
  float local_180;
  undefined8 local_17c;
  undefined8 local_174;
  float local_16c [2];
  float afStack_164 [2];
  TVector2<float>_u_0 local_15c;
  byte local_154;
  TVector2<float>_u_0 local_150;
  float local_148;
  undefined8 local_144;
  undefined8 local_13c;
  float local_134 [2];
  float afStack_12c [2];
  TVector2<float>_u_0 local_124;
  byte local_11c;
  TVector2<float>_u_0 local_118;
  float local_110;
  undefined8 local_10c;
  undefined8 local_104;
  float local_fc [2];
  float afStack_f4 [2];
  TVector2<float>_u_0 local_ec;
  byte local_e4;
  ulonglong local_e0;
  
  fVar11 = __real_40a00000;
  fVar10 = __real_3f000000;
  fVar9 = __real_3a83126f;
  fVar27 = __real_41200000;
  fVar8 = __real_3f800000;
  local_e0 = __security_cookie.value ^ (ulonglong)auStackY_418;
  uVar24 = 0;
  fVar26 = param_2->PixelsPerInput;
  fVar25 = __real_3a83126f;
  local_338 = param_1;
  uVar7 = uVar24;
  if (0.0 < fVar26) {
    for (; fVar26 * fVar25 < fVar11; fVar25 = fVar25 * fVar9) {
      if ((uVar7 & 1) == 0) {
        fVar25 = powf(fVar27,(float)uVar7 * fVar10 + fVar8);
        fVar25 = fVar25 * fVar10;
      }
      else {
        fVar25 = powf(fVar27,(float)(uVar7 - 1) * fVar10 + fVar8);
      }
      uVar7 = uVar7 + 1;
    }
  }
  if (((param_2->ViewInput).LowerBound.Type.Value == '\x02') &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Type != ERangeBoundTypes::Open",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                          ,99,L""), bVar18)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  dVar1 = (param_2->ViewInput).LowerBound.Value;
  local_300.OutlineSize = 0;
  local_300.bMiteredCorners = false;
  local_300.bSeparateFillAlpha = false;
  local_300.bApplyOutlineToDropShadows = false;
  local_300.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_300.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  uVar22 = (int)ROUND((dVar1 + dVar1) / (double)fVar25 - __real_3fe0000000000000) >> 1;
  pFVar19 = ::FName::FName(&local_2b8,"Regular");
  FCoreStyle::GetDefaultFontStyle(&local_1e8,*pFVar19,__real_41000000,&local_300);
  local_3c8.Data = (FScriptContainerElement *)0x0;
  local_3c0[0] = 0;
  local_3c0[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,2,&local_3c8,local_3c0,local_3c0 + 1);
  afVar14 = _UNK_15076b188;
  afVar12 = ___xmm_3f80000000000000000000003f800000;
  uVar7 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar26 = __real_40e00000;
  do {
    if (((param_2->ViewInput).UpperBound.Type.Value == '\x02') &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type != ERangeBoundTypes::Open",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                            ,99,L""), bVar18)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((param_2->ViewInput).UpperBound.Value <= (double)((float)(int)uVar22 * fVar25)) {
      if (local_3c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3c8.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1e8.CompositeFont.SharedReferenceCount.ReferenceController);
      return;
    }
    if (((param_2->ViewInput).LowerBound.Type.Value == '\x02') &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type != ERangeBoundTypes::Open",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                            ,99,L""), bVar18)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar6 = -uVar22;
    if ((int)-uVar22 < 0) {
      uVar6 = uVar22;
    }
    fVar27 = (float)((double)((float)(int)uVar22 * fVar25) - (param_2->ViewInput).LowerBound.Value)
             * param_2->PixelsPerInput;
    if (uVar6 == (uVar6 / 10) * 10) {
      fStack_374 = param_3->TickOffset;
      fStack_37c = param_3->MajorTickHeight;
      local_380 = 0x3f800000;
      local_330 = 0x3f800000;
      uStack_32c = 0x3f800000;
      local_378 = fVar27;
      if ((local_3c0[0] < 1) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(ulonglong *)local_3c8.Data = CONCAT44(uStack_32c,local_330);
      if ((local_3c0[0] < 2) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar16.Data = local_3c8.Data;
      uVar4 = CONCAT44(fStack_37c,local_380);
      local_3a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(undefined8 *)(local_3c8.Data + 8) = uVar4;
      lVar23 = (longlong)local_3c0[0];
      EVar2 = param_3->DrawEffects;
      local_3a0.ArrayNum = local_3c0[0];
      if (local_3c0[0] == 0) {
        local_3a0.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,local_3c0[0],0,&local_3a0.AllocatorInstance,local_3c0[0],&local_3a0.ArrayMax)
        ;
        memcpy(local_3a0.AllocatorInstance.Data,FVar16.Data,lVar23 << 3);
      }
      afVar15 = _UNK_15076b188;
      afVar13 = ___xmm_3f80000000000000000000003f800000;
      local_324 = (param_3->AllottedGeometry).AbsolutePosition.field0_0x0._s_0;
      fVar26 = (param_3->AllottedGeometry).Scale;
      local_278.Trans.field0_0x0._s_0.Y = fStack_374;
      local_278.Trans.field0_0x0._s_0.X = local_378;
      local_370 = local_378 * fVar26 + local_324.X;
      ___xmm_3f80000000000000000000003f800000 = afVar12[0];
      _UNK_15076b184 = afVar12[1];
      local_278.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
      local_278.M.M[0][1] = _UNK_15076b184;
      _UNK_15076b188 = afVar14[0];
      _UNK_15076b18c = afVar14[1];
      local_278.M.M[1][0] = _UNK_15076b188;
      local_278.M.M[1][1] = _UNK_15076b18c;
      fStack_36c = fStack_374 * fVar26 + local_324.Y;
      ___xmm_3f80000000000000000000003f800000 = afVar13;
      _UNK_15076b188 = afVar15;
      Concatenate<TTransform2<float>_>
                (&local_260,&local_278,&(param_3->AllottedGeometry).AccumulatedRenderTransform);
      pFVar17 = local_338;
      local_188._s_0.Y = fStack_36c;
      local_188._s_0.X = local_370;
      local_154 = (param_3->AllottedGeometry).bHasRenderTransform * '\x02' | local_154 & 0xfc;
      local_17c = 0;
      local_16c[0] = local_260.M.M[0][0];
      local_16c[1] = local_260.M.M[0][1];
      afStack_164[0] = local_260.M.M[1][0];
      afStack_164[1] = local_260.M.M[1][1];
      local_15c = local_260.Trans.field0_0x0;
      local_180 = fVar26;
      local_174 = uVar4;
      FSlateDrawElement::MakeLines
                (local_338,param_3->StartLayer,(FPaintGeometry *)&local_188._s_0,&local_3a0,EVar2,
                 &param_3->TickColor,false,fVar8);
      fVar26 = __real_40e00000;
      if (param_3->bOnlyDrawMajorTicks == false) {
        if (fVar25 == fVar9) {
          uVar24 = uVar24 | 1;
          __return_storage_ptr__ = &local_298;
          pwVar21 = L"%.3f";
        }
        else {
          uVar24 = uVar24 | 2;
          __return_storage_ptr__ = &local_2a8;
          pwVar21 = L"%.2f";
        }
        ::FString::PrintfImpl(__return_storage_ptr__,pwVar21);
        local_3b0.Data.AllocatorInstance.Data =
             (__return_storage_ptr__->Data).AllocatorInstance.Data;
        (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3b0.Data.ArrayNum = (__return_storage_ptr__->Data).ArrayNum;
        local_3b0.Data.ArrayMax = (__return_storage_ptr__->Data).ArrayMax;
        (__return_storage_ptr__->Data).ArrayNum = 0;
        (__return_storage_ptr__->Data).ArrayMax = 0;
        if (((uVar24 & 2) != 0) &&
           (uVar24 = uVar24 & 0xfffffffd,
           local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
        }
        if (((uVar24 & 1) != 0) &&
           (uVar24 = uVar24 & 0xfffffffe,
           local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_298.Data.AllocatorInstance.Data);
        }
        if ((FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("CurrentApplication.IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                                ,0x141,L""), bVar18)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        bVar18 = IsInGameThread();
        if ((((!bVar18) && (bVar18 = IsInSlateThread(), !bVar18)) &&
            (bVar18 = (*IsInAsyncLoadingThread)(), !bVar18)) &&
           ((bVar18 = IsInParallelLoadingThread(), !bVar18 &&
            (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsInGameThread() || IsInSlateThread() || IsInAsyncLoadingThread() || IsInParallelLoadingThread()"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                                 ,0x142,L""), bVar18)))) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x44d,L""), bVar18)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar23 = *(longlong *)&(FSlateApplication::CurrentApplication.Object)->field_0x60;
        if ((*(longlong *)(lVar23 + 8) == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar18)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FSlateFontServices::GetFontMeasureService(*(FSlateFontServices **)(lVar23 + 8),&local_2c8);
        local_2d8 = (UObject *)local_3b0.Data.AllocatorInstance.Data;
        iStack_2d0 = local_3b0.Data.ArrayNum + -1;
        if (local_3b0.Data.ArrayNum == 0) {
          iStack_2d0 = 0;
        }
        uStack_280 = CONCAT44(uStack_2cc,iStack_2d0);
        local_288.DebugPtr = (UObject *)local_3b0.Data.AllocatorInstance.Data;
        FVar20 = FSlateFontMeasure::Measure
                           (local_2c8.Object,(TStringView<wchar_t> *)local_2b0,
                            (FSlateFontInfo *)&local_288.ObjectPtr,in_XMM3_Da);
        afVar15 = _UNK_15076b188;
        afVar13 = ___xmm_3f80000000000000000000003f800000;
        uVar4 = *(undefined8 *)FVar20;
        fStack_3cc = (float)((ulonglong)uVar4 >> 0x20);
        if (param_3->bMirrorLabels == false) {
          local_3b8 = (param_3->AllottedGeometry).Size;
          fStack_3cc = (float)((uint)(local_3b8._4_4_ - (fStack_3cc + param_3->MajorTickHeight)) &
                              uVar7);
        }
        local_3d0 = (float)uVar4;
        local_318 = (param_3->AllottedGeometry).AbsolutePosition.field0_0x0._s_0;
        fVar26 = (param_3->AllottedGeometry).Scale;
        EVar2 = param_3->DrawEffects;
        ___xmm_3f80000000000000000000003f800000 = afVar12[0];
        _UNK_15076b184 = afVar12[1];
        local_248.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
        local_248.M.M[0][1] = _UNK_15076b184;
        _UNK_15076b188 = afVar14[0];
        _UNK_15076b18c = afVar14[1];
        local_248.M.M[1][0] = _UNK_15076b188;
        local_248.M.M[1][1] = _UNK_15076b18c;
        local_368 = fVar27 - local_3d0 * fVar10;
        local_248.Trans.field0_0x0._s_0.Y = fStack_3cc;
        local_248.Trans.field0_0x0._s_0.X = local_368;
        local_360 = local_368 * fVar26 + local_318.X;
        fStack_35c = fStack_3cc * fVar26 + local_318.Y;
        ___xmm_3f80000000000000000000003f800000 = afVar13;
        _UNK_15076b188 = afVar15;
        fStack_364 = fStack_3cc;
        Concatenate<TTransform2<float>_>
                  (&local_230,&local_248,&(param_3->AllottedGeometry).AccumulatedRenderTransform);
        local_150._s_0.Y = fStack_35c;
        local_150._s_0.X = local_360;
        local_11c = (param_3->AllottedGeometry).bHasRenderTransform * '\x02' | local_11c & 0xfc;
        local_144 = 0;
        local_134[0] = local_230.M.M[0][0];
        local_134[1] = local_230.M.M[0][1];
        afStack_12c[0] = local_230.M.M[1][0];
        afStack_12c[1] = local_230.M.M[1][1];
        local_124 = local_230.Trans.field0_0x0;
        local_148 = fVar26;
        local_13c = uVar4;
        FSlateDrawElement::MakeText
                  (pFVar17,param_3->StartLayer + 1,(FPaintGeometry *)&local_150._s_0,&local_3b0,
                   &local_1e8,EVar2,&param_3->TickColor);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2c8.SharedReferenceCount.ReferenceController);
        fVar26 = __real_40e00000;
        if ((UObject *)local_3b0.Data.AllocatorInstance.Data != (UObject *)0x0) {
          FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
          fVar26 = __real_40e00000;
        }
      }
    }
    else if (param_3->bOnlyDrawMajorTicks == false) {
      fStack_34c = __real_40800000;
      if (uVar6 == (uVar6 / 5) * 5) {
        fStack_34c = fVar26;
      }
      if (param_3->bMirrorLabels == false) {
        local_3b8 = (param_3->AllottedGeometry).Size;
        fStack_344 = (float)((uint)(local_3b8._4_4_ - fStack_34c) & uVar7);
      }
      else {
        fStack_344 = 0.0;
      }
      local_350 = 0x3f800000;
      local_358 = 0x3f800000;
      uStack_354 = 0x3f800000;
      local_348 = fVar27;
      if ((local_3c0[0] < 1) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(ulonglong *)local_3c8.Data = CONCAT44(uStack_354,local_358);
      if ((local_3c0[0] < 2) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar16.Data = local_3c8.Data;
      uVar4 = CONCAT44(fStack_34c,local_350);
      local_390.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(undefined8 *)(local_3c8.Data + 8) = uVar4;
      lVar23 = (longlong)local_3c0[0];
      EVar2 = param_3->DrawEffects;
      local_390.ArrayNum = local_3c0[0];
      if (local_3c0[0] == 0) {
        local_390.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,local_3c0[0],0,&local_390.AllocatorInstance,local_3c0[0],&local_390.ArrayMax)
        ;
        memcpy(local_390.AllocatorInstance.Data,FVar16.Data,lVar23 << 3);
      }
      afVar15 = _UNK_15076b188;
      afVar13 = ___xmm_3f80000000000000000000003f800000;
      local_30c = (param_3->AllottedGeometry).AbsolutePosition.field0_0x0._s_0;
      fVar26 = (param_3->AllottedGeometry).Scale;
      local_218.Trans.field0_0x0._s_0.Y = fStack_344;
      local_218.Trans.field0_0x0._s_0.X = local_348;
      local_340 = local_348 * fVar26 + local_30c.X;
      ___xmm_3f80000000000000000000003f800000 = afVar12[0];
      _UNK_15076b184 = afVar12[1];
      local_218.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
      local_218.M.M[0][1] = _UNK_15076b184;
      _UNK_15076b188 = afVar14[0];
      _UNK_15076b18c = afVar14[1];
      local_218.M.M[1][0] = _UNK_15076b188;
      local_218.M.M[1][1] = _UNK_15076b18c;
      fStack_33c = fStack_344 * fVar26 + local_30c.Y;
      ___xmm_3f80000000000000000000003f800000 = afVar13;
      _UNK_15076b188 = afVar15;
      Concatenate<TTransform2<float>_>
                (&local_200,&local_218,&(param_3->AllottedGeometry).AccumulatedRenderTransform);
      local_118._s_0.Y = fStack_33c;
      local_118._s_0.X = local_340;
      local_e4 = (param_3->AllottedGeometry).bHasRenderTransform * '\x02' | local_e4 & 0xfc;
      local_10c = 0;
      local_fc[0] = local_200.M.M[0][0];
      local_fc[1] = local_200.M.M[0][1];
      afStack_f4[0] = local_200.M.M[1][0];
      afStack_f4[1] = local_200.M.M[1][1];
      local_ec = local_200.Trans.field0_0x0;
      local_110 = fVar26;
      local_104 = uVar4;
      FSlateDrawElement::MakeLines
                (local_338,param_3->StartLayer,(FPaintGeometry *)&local_118._s_0,&local_390,EVar2,
                 &param_3->TickColor,false,fVar8);
      fVar26 = __real_40e00000;
    }
    uVar22 = uVar22 + 1;
  } while( true );
}

// GetTimeAtCursorPosition @ 142db20b0

double __thiscall
SSimpleTimeSlider::GetTimeAtCursorPosition
          (SSimpleTimeSlider *this,FGeometry *param_1,FPointerEvent *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  FDeprecateSlateVector2D FVar5;
  code *pcVar6;
  double dVar7;
  bool bVar8;
  TRange<double> *pTVar9;
  TTransform2<float> *pTVar10;
  float fVar11;
  float local_98;
  float fStack_94;
  float local_90;
  TRange<double> local_88;
  double local_68;
  float local_60;
  TTransform2<float> local_58 [2];
  
  FVar5 = param_1->Size;
  pTVar9 = TAttribute<TRange<double>_>::Get(&this->ViewRange);
  local_88.LowerBound.Type.Value = (pTVar9->LowerBound).Type.Value;
  local_88.LowerBound._1_7_ = *(undefined7 *)&(pTVar9->LowerBound).field_0x1;
  local_88.LowerBound.Value = (pTVar9->LowerBound).Value;
  local_88.UpperBound.Type.Value = (pTVar9->UpperBound).Type.Value;
  local_88.UpperBound._1_7_ = *(undefined7 *)&(pTVar9->UpperBound).field_0x1;
  local_88.UpperBound.Value = (pTVar9->UpperBound).Value;
  local_68 = TRange<double>::Size<double>(&local_88);
  if (local_68 <= 0.0) {
    fVar11 = 0.0;
  }
  else {
    local_90 = FVar5._0_4_;
    fVar11 = (float)((double)local_90 / local_68);
  }
  local_60 = fVar11;
  pTVar10 = Inverse<TTransform2<float>_>(local_58,&param_1->AccumulatedRenderTransform);
  fStack_94 = SUB84(param_2->LastScreenSpacePosition,4);
  fVar1 = (pTVar10->M).M[1][0];
  local_98 = SUB84(param_2->LastScreenSpacePosition,0);
  fVar2 = (pTVar10->M).M[0][0];
  fVar3 = (pTVar10->Trans).field0_0x0._s_0.X;
  if (local_88.LowerBound.Type.Value == '\x02') {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,99,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      dVar7 = (double)(*pcVar6)();
      return dVar7;
    }
  }
  dVar7 = (double)((fStack_94 * fVar1 + local_98 * fVar2 + fVar3) / fVar11) +
          local_88.LowerBound.Value;
  pTVar9 = TAttribute<TRange<double>_>::Get(&this->ClampRange);
  if ((pTVar9->LowerBound).Type.Value == '\x02') {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,99,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      dVar7 = (double)(*pcVar6)();
      return dVar7;
    }
  }
  dVar4 = (pTVar9->LowerBound).Value;
  pTVar9 = TAttribute<TRange<double>_>::Get(&this->ClampRange);
  if ((pTVar9->UpperBound).Type.Value == '\x02') {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,99,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      dVar7 = (double)(*pcVar6)();
      return dVar7;
    }
  }
  if (dVar4 <= dVar7) {
    dVar4 = dVar7;
  }
  dVar7 = (pTVar9->UpperBound).Value;
  if (dVar7 <= dVar4) {
    dVar4 = dVar7;
  }
  return dVar4;
}

// OnMouseButtonUp @ 142dc4240

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SSimpleTimeSlider::OnMouseButtonUp
          (SSimpleTimeSlider *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  FWeakReferencer<1> FVar5;
  bool bVar6;
  bool bVar7;
  bool *pbVar8;
  double dVar9;
  FReply local_e8;
  
  pTVar3 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar4 = (param_2->EffectingButton).KeyName;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((FVar4 == EKeys::LeftMouseButton.KeyName) &&
     (bVar6 = SWidget::HasMouseCapture((SWidget *)this), bVar6)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar3 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar4 = (param_2->EffectingButton).KeyName;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (((FVar4 == EKeys::RightMouseButton.KeyName) &&
      (bVar7 = SWidget::HasMouseCapture((SWidget *)this), bVar7)) &&
     (pbVar8 = TAttribute<bool>::Get(&this->AllowPan), *pbVar8 != false)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if (this->bPanning == false) {
      FReply::FReply(&local_e8,false);
      FVar5.ReferenceController = local_e8.MouseCaptor.WeakReferenceCount.ReferenceController;
      local_e8.MouseCaptor.Object = (SWidget *)0x0;
      local_e8.MouseCaptor.WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
        }
      }
      local_e8.bUseHighPrecisionMouse = 0;
      local_e8.bReleaseMouseCapture = 1;
      FReply::FReply(__return_storage_ptr__,&local_e8);
      FReply::~FReply(&local_e8);
      return __return_storage_ptr__;
    }
    this->bPanning = false;
    FReply::FReply(&local_e8,true);
    FVar5.ReferenceController = local_e8.MouseCaptor.WeakReferenceCount.ReferenceController;
    local_e8.MouseCaptor.Object = (SWidget *)0x0;
    local_e8.MouseCaptor.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
    ;
    if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
      }
    }
    local_e8.bUseHighPrecisionMouse = 0;
    local_e8.bReleaseMouseCapture = 1;
    FReply::FReply(__return_storage_ptr__,&local_e8);
    FReply::~FReply(&local_e8);
    return __return_storage_ptr__;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (bVar6) {
    if (this->bDraggingScrubber == false) {
      dVar9 = GetTimeAtCursorPosition(this,param_1,param_2);
      CommitScrubPosition(this,dVar9,false);
    }
    this->bDraggingScrubber = false;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
              (&this->OnEndScrubberMovement);
    FReply::FReply(&local_e8,true);
    FVar5.ReferenceController = local_e8.MouseCaptor.WeakReferenceCount.ReferenceController;
    local_e8.MouseCaptor.Object = (SWidget *)0x0;
    local_e8.MouseCaptor.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
    ;
    if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
      }
    }
    local_e8.bUseHighPrecisionMouse = 0;
    local_e8.bReleaseMouseCapture = 1;
    FReply::FReply(__return_storage_ptr__,&local_e8);
    FReply::~FReply(&local_e8);
  }
  else {
    FReply::FReply(__return_storage_ptr__,false);
  }
  return __return_storage_ptr__;
}

// OnMouseMove @ 142dc4910

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SSimpleTimeSlider::OnMouseMove
          (SSimpleTimeSlider *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  atomic<int> *paVar1;
  TAttribute<TRange<double>_> *this_00;
  atomic<int> aVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong *plVar8;
  code *pcVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  uint uVar14;
  bool bVar15;
  FSlateApplication *this_01;
  TSharedRef<SWidget,1> *pTVar16;
  FReply *pFVar17;
  TTransform2<float> *pTVar18;
  TRange<double> *pTVar19;
  float fVar20;
  double dVar21;
  double dVar22;
  float fVar23;
  float fVar24;
  undefined8 local_268;
  TRangeBound<double> local_258;
  TRangeBound<double> local_248;
  undefined4 local_238;
  undefined4 uStack_234;
  uint local_228;
  undefined4 uStack_224;
  FKey local_218;
  FKey local_200;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  double dStack_1e0;
  uint local_1d8;
  undefined4 uStack_1d4;
  double dStack_1d0;
  FDeprecateSlateVector2D local_1c8;
  TRange<double> local_1c0;
  FReadAccessScope local_190;
  TSharedRef<SWidget,1> local_178;
  TTransform2<float> local_168;
  TTransform2<float> local_150;
  FReply local_138;
  
  bVar15 = SWidget::HasMouseCapture((SWidget *)this);
  if (bVar15) {
    local_218.KeyName = EKeys::RightMouseButton.KeyName;
    local_218.KeyDetails.Object = EKeys::RightMouseButton.KeyDetails.Object;
    local_218.KeyDetails.SharedReferenceCount.ReferenceController =
         EKeys::RightMouseButton.KeyDetails.SharedReferenceCount.ReferenceController;
    if (EKeys::RightMouseButton.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (EKeys::RightMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
      SharedReferenceCount =
           (atomic<int>)
           ((int)(EKeys::RightMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar15 = FPointerEvent::IsMouseButtonDown(param_2,&local_218);
    if (bVar15) {
      if (this->bPanning == false) {
        fVar24 = (float)(*(uint *)&param_2->CursorDelta & __xmm_7fffffff7fffffff7fffffff7fffffff) +
                 this->DistanceDragged;
        this->DistanceDragged = fVar24;
        this_01 = FSlateApplication::Get();
        fVar20 = FSlateApplication::GetDragTriggerDistance(this_01);
        if (fVar20 < fVar24) {
          FReply::FReply(&local_138,true);
          pTVar16 = TSharedFromThis<SWidget,1>::AsShared
                              ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                               (TSharedRef<SWidget,1> *)&local_268);
          pFVar17 = FReply::CaptureMouse(&local_138,pTVar16);
          pTVar16 = TSharedFromThis<SWidget,1>::AsShared
                              ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_178);
          (pFVar17->MouseCaptor).Object = pTVar16->Object;
          pTVar6 = (pTVar16->SharedReferenceCount).ReferenceController;
          if (pTVar6 != (pFVar17->MouseCaptor).WeakReferenceCount.ReferenceController) {
            if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
              UNLOCK();
            }
            pTVar7 = (pFVar17->MouseCaptor).WeakReferenceCount.ReferenceController;
            if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              paVar1 = &pTVar7->WeakReferenceCount;
              aVar2 = *paVar1;
              *paVar1 = (atomic<int>)((int)*paVar1 + -1);
              UNLOCK();
              if (aVar2 == (atomic<int>)0x1) {
                (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
              }
            }
            (pFVar17->MouseCaptor).WeakReferenceCount.ReferenceController = pTVar6;
          }
          pFVar17->bUseHighPrecisionMouse = 1;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pTVar16->SharedReferenceCount).ReferenceController);
          FReply::~FReply(&local_138);
          pTVar18 = Inverse<TTransform2<float>_>(&local_168,&param_1->AccumulatedRenderTransform);
          local_268._4_4_ = SUB84(param_2->LastScreenSpacePosition,4);
          local_268._0_4_ = SUB84(param_2->LastScreenSpacePosition,0);
          fVar23 = (float)local_268._4_4_ * (pTVar18->M).M[1][0];
          fVar20 = (pTVar18->M).M[0][1];
          fVar24 = (pTVar18->M).M[0][0];
          fVar3 = (pTVar18->M).M[1][1];
          fVar4 = (pTVar18->Trans).field0_0x0._s_0.X;
          fVar5 = (pTVar18->Trans).field0_0x0._s_0.Y;
          this->bPanning = true;
          local_268._4_4_ =
               (float)(undefined4)local_268 * fVar20 + (float)local_268._4_4_ * fVar3 + fVar5;
          local_268._0_4_ = fVar23 + (float)(undefined4)local_268 * fVar24 + fVar4;
          (this->SoftwareCursorPosition).field0_0x0 = local_268;
        }
      }
      else {
        pTVar18 = Inverse<TTransform2<float>_>(&local_150,&param_1->AccumulatedRenderTransform);
        this_00 = &this->ViewRange;
        local_268._4_4_ = SUB84(param_2->LastScreenSpacePosition,4);
        local_268._0_4_ = SUB84(param_2->LastScreenSpacePosition,0);
        fVar20 = (float)local_268._4_4_ * (pTVar18->M).M[1][0];
        local_268._4_4_ =
             (float)(undefined4)local_268 * (pTVar18->M).M[0][1] +
             (float)local_268._4_4_ * (pTVar18->M).M[1][1] + (pTVar18->Trans).field0_0x0._s_0.Y;
        local_268._0_4_ =
             fVar20 + (float)(undefined4)local_268 * (pTVar18->M).M[0][0] +
             (pTVar18->Trans).field0_0x0._s_0.X;
        (this->SoftwareCursorPosition).field0_0x0 = local_268;
        pTVar19 = TAttribute<TRange<double>_>::Get(this_00);
        uVar11._0_1_ = (pTVar19->LowerBound).Type.Value;
        uVar11._1_7_ = *(undefined7 *)&(pTVar19->LowerBound).field_0x1;
        dVar10 = (pTVar19->LowerBound).Value;
        uVar12._0_1_ = (pTVar19->UpperBound).Type.Value;
        uVar12._1_7_ = *(undefined7 *)&(pTVar19->UpperBound).field_0x1;
        dVar22 = (pTVar19->UpperBound).Value;
        local_258._0_8_ = uVar11;
        local_258.Value = dVar10;
        local_248._0_8_ = uVar12;
        local_248.Value = dVar22;
        if (uVar11._0_1_ == '\x02') {
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,99,L"");
          if (bVar15) {
            pcVar9 = (code *)swi(3);
            pFVar17 = (FReply *)(*pcVar9)();
            return pFVar17;
          }
        }
        if (uVar12._0_1_ == '\x02') {
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,99,L"");
          if (bVar15) {
            pcVar9 = (code *)swi(3);
            pFVar17 = (FReply *)(*pcVar9)();
            return pFVar17;
          }
        }
        local_1c8 = param_1->Size;
        local_1c0.LowerBound._0_8_ = uVar11;
        local_1c0.LowerBound.Value = dVar10;
        local_1c0.UpperBound._0_8_ = uVar12;
        local_1c0.UpperBound.Value = dVar22;
        dVar21 = TRange<double>::Size<double>(&local_1c0);
        if (dVar21 <= 0.0) {
          fVar20 = 0.0;
        }
        else {
          fVar20 = (float)((double)(float)local_1c8._0_4_ / dVar21);
        }
        local_268 = (TVector2<float>_u_0)*(TVector2<float>_u_0 *)&param_2->CursorDelta;
        local_238 = CONCAT31(local_238._1_3_,1);
        local_228 = local_228 & 0xffffff00;
        dVar10 = dVar10 - (double)((float)(undefined4)local_268 / fVar20);
        dVar22 = dVar22 - (double)((float)(undefined4)local_268 / fVar20);
        TAttribute<TRange<double>_>::Get(&this->ClampRange);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->OnViewRangeChanged,&local_190);
        uVar14 = local_228;
        uVar13 = local_238;
        if ((*(int *)&(this->OnViewRangeChanged).field_0x10 != 0) &&
           (plVar8 = *(longlong **)&(this->OnViewRangeChanged).field_0x8, plVar8 != (longlong *)0x0)
           ) {
          local_1e8 = local_238;
          uStack_1e4 = uStack_234;
          local_1d8 = local_228;
          uStack_1d4 = uStack_224;
          dStack_1e0 = dVar10;
          dStack_1d0 = dVar22;
          (**(code **)(*plVar8 + 0x68))(plVar8,&local_1e8);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_190);
        bVar15 = TAttribute<TRange<double>_>::IsBound(this_00);
        if (!bVar15) {
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ViewRange).Getter);
          *(undefined4 *)&(this_00->Value).LowerBound = uVar13;
          *(undefined4 *)&(this->ViewRange).Value.LowerBound.field_0x4 = uStack_234;
          (this->ViewRange).Value.LowerBound.Value = dVar10;
          (this->ViewRange).bIsSet = true;
          *(uint *)&(this->ViewRange).Value.UpperBound = uVar14;
          *(undefined4 *)&(this->ViewRange).Value.UpperBound.field_0x4 = uStack_224;
          (this->ViewRange).Value.UpperBound.Value = dVar22;
        }
      }
    }
    else {
      local_200.KeyName = EKeys::LeftMouseButton.KeyName;
      local_200.KeyDetails.Object = EKeys::LeftMouseButton.KeyDetails.Object;
      local_200.KeyDetails.SharedReferenceCount.ReferenceController =
           EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController;
      if (EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
        SharedReferenceCount =
             (atomic<int>)
             ((int)(EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar15 = FPointerEvent::IsMouseButtonDown(param_2,&local_200);
      if (bVar15) {
        if (this->bDraggingScrubber == false) {
          fVar20 = (float)(*(uint *)&param_2->CursorDelta & __xmm_7fffffff7fffffff7fffffff7fffffff)
                   + this->DistanceDragged;
          this->DistanceDragged = fVar20;
          if (0.0 < fVar20) {
            this->bDraggingScrubber = true;
            TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
                      (&this->OnBeginScrubberMovement);
          }
        }
        else {
          dVar22 = GetTimeAtCursorPosition(this,param_1,param_2);
          CommitScrubPosition(this,dVar22,true);
        }
      }
    }
    FReply::FReply(__return_storage_ptr__,true);
  }
  else {
    FReply::FReply(__return_storage_ptr__,false);
  }
  return __return_storage_ptr__;
}

// OnMouseWheel @ 142dc4fb0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SSimpleTimeSlider::OnMouseWheel
          (SSimpleTimeSlider *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  TAttribute<TRange<double>_> *this_00;
  longlong *plVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double *pdVar5;
  undefined8 uVar6;
  bool bVar7;
  bool *pbVar8;
  TTransform2<float> *pTVar9;
  TRange<double> *pTVar10;
  FReply *pFVar11;
  double dVar12;
  float fVar13;
  float local_1d8;
  float fStack_1d4;
  float local_1d0;
  undefined4 local_1c8;
  uint local_1b8;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 local_198;
  undefined4 uStack_194;
  char local_188;
  undefined4 local_168 [2];
  undefined8 uStack_160;
  uint local_158;
  undefined8 uStack_150;
  FReadAccessScope local_148;
  TTransform2<float> local_130;
  FReply local_118;
  
  FReply::FReply(__return_storage_ptr__,false);
  pbVar8 = TAttribute<bool>::Get(&this->AllowZoom);
  if ((*pbVar8 != false) && ((param_2->_padding_ & 0xc) != 0)) {
    fVar13 = *(float *)&(param_2->WheelOrGestureDelta).field_0x4 * __real_bdcccccd;
    pTVar9 = Inverse<TTransform2<float>_>(&local_130,&param_1->AccumulatedRenderTransform);
    this_00 = &this->ViewRange;
    local_1d8 = SUB84(param_2->ScreenSpacePosition,0);
    fStack_1d4 = SUB84(param_2->ScreenSpacePosition,4);
    local_1d0 = SUB84(param_1->Size,0);
    local_1d0 = (fStack_1d4 * (pTVar9->M).M[1][0] + local_1d8 * (pTVar9->M).M[0][0] +
                (pTVar9->Trans).field0_0x0._s_0.X) / local_1d0;
    pTVar10 = TAttribute<TRange<double>_>::Get(this_00);
    pdVar5 = &(pTVar10->UpperBound).Value;
    dVar3 = *pdVar5;
    dVar12 = *pdVar5;
    uVar6 = *(undefined8 *)&pTVar10->LowerBound;
    dVar4 = (pTVar10->LowerBound).Value;
    if ((pTVar10->UpperBound).Type.Value == '\x02') {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar7) {
        pcVar2 = (code *)swi(3);
        pFVar11 = (FReply *)(*pcVar2)();
        return pFVar11;
      }
    }
    local_188 = (char)uVar6;
    if (local_188 == '\x02') {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar7) {
        pcVar2 = (code *)swi(3);
        pFVar11 = (FReply *)(*pcVar2)();
        return pFVar11;
      }
    }
    dVar12 = (dVar12 - dVar4) * (double)fVar13;
    dVar4 = dVar4 - (double)local_1d0 * dVar12;
    dVar3 = (double)(__real_3f800000 - local_1d0) * dVar12 + dVar3;
    if (dVar4 < dVar3) {
      pTVar10 = TAttribute<TRange<double>_>::Get(&this->ClampRange);
      TRange<double>::GetLowerBoundValue(pTVar10);
      pTVar10 = TAttribute<TRange<double>_>::Get(&this->ClampRange);
      TRange<double>::GetUpperBoundValue(pTVar10);
      local_1c8 = CONCAT31(local_1c8._1_3_,1);
      local_1b8 = local_1b8 & 0xffffff00;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnViewRangeChanged
                 ,&local_148);
      uStack_160 = (double)CONCAT44(uStack_160._4_4_,(undefined4)uStack_160);
      uStack_150 = (double)CONCAT44(uStack_150._4_4_,(undefined4)uStack_150);
      if ((*(int *)&(this->OnViewRangeChanged).field_0x10 != 0) &&
         (plVar1 = *(longlong **)&(this->OnViewRangeChanged).field_0x8,
         uStack_160 = (double)CONCAT44(uStack_160._4_4_,(undefined4)uStack_160),
         uStack_150 = (double)CONCAT44(uStack_150._4_4_,(undefined4)uStack_150),
         plVar1 != (longlong *)0x0)) {
        local_168[0] = local_1c8;
        local_158 = local_1b8;
        uStack_160 = dVar4;
        uStack_150 = dVar3;
        (**(code **)(*plVar1 + 0x68))(plVar1,local_168);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_148);
      bVar7 = TAttribute<TRange<double>_>::IsBound(this_00);
      if (!bVar7) {
        local_1a8 = CONCAT31(local_1a8._1_3_,1);
        local_198 = CONCAT31(local_198._1_3_,bVar7);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ViewRange).Getter);
        (this->ViewRange).bIsSet = true;
        *(undefined4 *)&(this_00->Value).LowerBound = local_1a8;
        *(undefined4 *)&(this->ViewRange).Value.LowerBound.field_0x4 = uStack_1a4;
        (this->ViewRange).Value.LowerBound.Value = dVar4;
        *(undefined4 *)&(this->ViewRange).Value.UpperBound = local_198;
        *(undefined4 *)&(this->ViewRange).Value.UpperBound.field_0x4 = uStack_194;
        (this->ViewRange).Value.UpperBound.Value = dVar3;
      }
    }
    FReply::FReply(&local_118,true);
    FReply::operator=(__return_storage_ptr__,&local_118);
    FReply::~FReply(&local_118);
  }
  return __return_storage_ptr__;
}

// OnPaint @ 142dc7eb0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SSimpleTimeSlider::OnPaint
          (SSimpleTimeSlider *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  int iVar1;
  int iVar2;
  bool *pbVar3;
  bool bVar4;
  
  pbVar3 = TAttribute<bool>::Get(&this->MirrorLabels);
  iVar1 = OnPaintTimeSlider(this,*pbVar3,param_2,param_3,param_4,param_5,param_6,param_7);
  if ((param_7) && (*(char *)((longlong)&this->_padding_ + 2) != '\0')) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  iVar2 = SCompoundWidget::OnPaint
                    ((SCompoundWidget *)this,param_1,param_2,param_3,param_4,iVar1,param_6,bVar4);
  if (iVar2 < iVar1) {
    iVar2 = iVar1;
  }
  return iVar2;
}

// OnPaintTimeSlider @ 142dc8a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SSimpleTimeSlider::OnPaintTimeSlider
          (SSimpleTimeSlider *this,bool param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  TDelegate<double___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  float fVar1;
  undefined1 uVar2;
  FDeprecateSlateVector2D FVar3;
  code *pcVar4;
  undefined1 auVar5 [12];
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  float afVar12 [2];
  bool bVar13;
  char cVar14;
  int iVar15;
  TRange<double> *pTVar16;
  float *pfVar17;
  FLinearColor *pFVar18;
  longlong *plVar19;
  FSlateBrush **ppFVar20;
  ESlateDrawEffect EVar21;
  float fVar22;
  double dVar23;
  undefined1 extraout_XMM0 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 extraout_XMM0_01 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 unaff_XMM11 [16];
  undefined1 auVar29 [16];
  undefined1 auStackY_478 [32];
  float fStack_444;
  undefined8 local_440;
  float local_438;
  float fStack_434;
  FLinearColor_u_0 local_430;
  FLinearColor_u_0 local_420;
  float local_410;
  undefined4 uStack_40c;
  float local_408;
  float fStack_404;
  float local_400;
  float fStack_3fc;
  float local_3f8;
  float fStack_3f4;
  float local_3f0;
  undefined4 uStack_3ec;
  float local_3e8;
  undefined4 uStack_3e4;
  float local_3e0;
  undefined4 uStack_3dc;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  FWidgetStyle *local_3d0;
  undefined8 local_3c8;
  TVector2<float>_u_0 local_3c0;
  TRange<double> local_3b8;
  double local_398;
  float local_390;
  TVector2<float>_u_0_s_0 local_384;
  TVector2<float>_u_0_s_0 local_378;
  TVector2<float>_u_0_s_0 local_36c;
  TVector2<float>_u_0_s_0 local_360;
  float local_358;
  float fStack_354;
  float fStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  float fStack_344;
  float fStack_340;
  float fStack_33c;
  float fStack_338;
  float afStack_334 [2];
  float local_32c;
  float fStack_328;
  byte local_324;
  undefined3 uStack_323;
  float local_320;
  float fStack_31c;
  float fStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  float fStack_30c;
  float fStack_308;
  float fStack_304;
  float fStack_300;
  float afStack_2fc [2];
  float local_2f4;
  float fStack_2f0;
  byte local_2ec;
  undefined3 uStack_2eb;
  TRangeBound<double> local_2e8;
  TRangeBound<double> local_2d8;
  TTransform2<float> local_2c8;
  TTransform2<float> local_2b0;
  TTransform2<float> local_298;
  TTransform2<float> local_280;
  FReadAccessScope local_268;
  TTransform2<float> local_250;
  TTransform2<float> local_238;
  TTransform2<float> local_220;
  TTransform2<float> local_208;
  FReadAccessScope local_1f0;
  undefined8 local_1d8;
  ulonglong uStack_1d0;
  longlong local_1c8;
  undefined4 uStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float afStack_1b4 [2];
  TVector2<float>_u_0 TStack_1ac;
  undefined4 uStack_1a4;
  TVector2<float>_u_0 local_1a0;
  float local_198;
  undefined8 local_194;
  undefined8 local_18c;
  float local_184 [2];
  float afStack_17c [2];
  TVector2<float>_u_0 local_174;
  byte local_16c;
  TVector2<float>_u_0 local_168;
  float local_160;
  undefined8 local_15c;
  undefined8 local_154;
  float local_14c [2];
  float afStack_144 [2];
  TVector2<float>_u_0 local_13c;
  byte local_134;
  FDrawTickArgs local_128;
  ulonglong local_b8;
  undefined8 uVar24;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_478;
  EVar21 = !param_7 << 5;
  local_3d0 = param_6;
  pTVar16 = TAttribute<TRange<double>_>::Get(&this->ViewRange);
  uVar24 = extraout_XMM0._8_8_;
  uVar6._0_1_ = (pTVar16->LowerBound).Type.Value;
  uVar6._1_3_ = *(undefined3 *)&(pTVar16->LowerBound).field_0x1;
  uVar7 = *(undefined4 *)&(pTVar16->LowerBound).field_0x4;
  uVar8 = *(undefined4 *)&(pTVar16->LowerBound).Value;
  uVar9 = *(undefined4 *)((longlong)&(pTVar16->LowerBound).Value + 4);
  uVar10._0_1_ = (pTVar16->UpperBound).Type.Value;
  uVar10._1_7_ = *(undefined7 *)&(pTVar16->UpperBound).field_0x1;
  dVar23 = (pTVar16->UpperBound).Value;
  local_2e8._0_4_ = uVar6;
  local_2e8._4_4_ = uVar7;
  local_2e8.Value._0_4_ = uVar8;
  local_2e8.Value._4_4_ = uVar9;
  local_2d8._0_8_ = uVar10;
  local_2d8.Value = dVar23;
  if (uVar6._0_1_ == '\x02') {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Type != ERangeBoundTypes::Open",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                        ,99,L"");
    uVar24 = extraout_XMM0_00._8_8_;
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      iVar15 = (*pcVar4)();
      return iVar15;
    }
  }
  if (uVar10._0_1_ == '\x02') {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Type != ERangeBoundTypes::Open",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                        ,99,L"");
    uVar24 = extraout_XMM0_01._8_8_;
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      iVar15 = (*pcVar4)();
      return iVar15;
    }
  }
  auVar5._4_8_ = uVar24;
  auVar5._0_4_ = uVar7;
  auVar29._0_8_ = auVar5._0_8_ << 0x20;
  auVar29._8_4_ = uVar8;
  auVar29._12_4_ = uVar9;
  if (0.0 < dVar23 - auVar29._8_8_) {
    local_3c0._s_0 = *(TVector2<float>_u_0_s_0 *)&param_2->Size;
    local_3b8.LowerBound._0_4_ = uVar6;
    local_3b8.LowerBound._4_4_ = uVar7;
    local_3b8.LowerBound.Value._0_4_ = uVar8;
    local_3b8.LowerBound.Value._4_4_ = uVar9;
    local_3b8.UpperBound._0_8_ = uVar10;
    local_3b8.UpperBound.Value = dVar23;
    local_398 = TRange<double>::Size<double>(&local_3b8);
    if (local_398 <= 0.0) {
      local_390 = 0.0;
    }
    else {
      local_390 = (float)((double)local_3c0._s_0.X / local_398);
    }
    pTVar16 = TAttribute<TRange<double>_>::Get(&this->ClampRange);
    if (((pTVar16->LowerBound).Type.Value == '\x02') &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type != ERangeBoundTypes::Open",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                            ,99,L""), bVar13)) {
      pcVar4 = (code *)swi(3);
      iVar15 = (*pcVar4)();
      return iVar15;
    }
    dVar23 = (pTVar16->LowerBound).Value;
    if ((local_3b8.LowerBound.Type.Value == '\x02') &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type != ERangeBoundTypes::Open",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                            ,99,L""), bVar13)) {
      pcVar4 = (code *)swi(3);
      iVar15 = (*pcVar4)();
      return iVar15;
    }
    fVar28 = (float)(dVar23 - (double)CONCAT44(local_3b8.LowerBound.Value._4_4_,
                                               local_3b8.LowerBound.Value._0_4_)) * local_390;
    pTVar16 = TAttribute<TRange<double>_>::Get(&this->ClampRange);
    if (((pTVar16->UpperBound).Type.Value == '\x02') &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type != ERangeBoundTypes::Open",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                            ,99,L""), bVar13)) {
      pcVar4 = (code *)swi(3);
      iVar15 = (*pcVar4)();
      return iVar15;
    }
    dVar23 = (pTVar16->UpperBound).Value;
    if ((local_3b8.LowerBound.Type.Value == '\x02') &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type != ERangeBoundTypes::Open",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                            ,99,L""), bVar13)) {
      pcVar4 = (code *)swi(3);
      iVar15 = (*pcVar4)();
      return iVar15;
    }
    FVar3 = param_2->Size;
    pfVar17 = TAttribute<float>::Get(&this->ClampRangeHighlightSize);
    fStack_444 = FVar3._4_4_;
    fVar27 = fStack_444 * *pfVar17;
    local_3c8 = 0;
    local_1c8 = 0;
    uStack_1c0 = 0.0;
    TStack_1ac._s_0.X = 0.0;
    TStack_1ac._s_0.Y = 0.0;
    local_1d8 = ___xmm_000000003f8000000000000000000000;
    uStack_1d0 = _UNK_150689538;
    fStack_1bc = (float)__xmm_3f80000000000000000000003f800000;
    fStack_1b8 = __xmm_3f80000000000000000000003f800000._4_4_;
    afStack_1b4[0] = _UNK_15076b188;
    afStack_1b4[1] = _UNK_15076b18c;
    fVar25 = (float)(dVar23 - (double)CONCAT44(local_3b8.LowerBound.Value._4_4_,
                                               local_3b8.LowerBound.Value._0_4_)) * local_390 -
             fVar28;
    if (param_1) {
      local_384 = (param_2->AbsolutePosition).field0_0x0._s_0;
      fVar1 = param_2->Scale;
      uStack_40c = 0;
      local_2c8.Trans.field0_0x0._s_0.Y = 0.0;
      local_2c8.Trans.field0_0x0._s_0.X = fVar28;
      fVar22 = fVar28 * fVar1 + local_384.X;
      fVar26 = fVar1 * 0.0 + local_384.Y;
      local_2c8.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
      local_2c8.M.M[0][1] = _UNK_15076b184;
      local_2c8.M.M[1][0] = _UNK_15076b188;
      local_2c8.M.M[1][1] = _UNK_15076b18c;
      local_410 = fVar28;
      local_408 = fVar25;
      fStack_404 = fVar27;
      Concatenate<TTransform2<float>_>(&local_2b0,&local_2c8,&param_2->AccumulatedRenderTransform);
      fStack_33c = local_2b0.M.M[0][0];
      fStack_338 = local_2b0.M.M[0][1];
      afStack_334[0] = local_2b0.M.M[1][0];
      afStack_334[1] = local_2b0.M.M[1][1];
      afVar12 = afStack_334;
      uStack_34c = 0;
      uStack_348 = 0;
      fStack_344 = local_408;
      fStack_340 = fStack_404;
      local_32c = local_2b0.Trans.field0_0x0._0_4_;
      fStack_328 = local_2b0.Trans.field0_0x0._4_4_;
      afStack_334[0] = local_2b0.M.M[1][0];
      afStack_334[1] = local_2b0.M.M[1][1];
      _local_358 = CONCAT44(fVar26,fVar22);
      INSERT(local_324,param_2->bHasRenderTransform,1,1);
      INSERT(local_324,'\0',0,1);
      local_1d8._4_4_ = fVar26;
      local_1d8._0_4_ = fVar22;
      uStack_1c0 = fStack_404;
      fStack_1bc = fStack_33c;
      fStack_1b8 = fStack_338;
      afStack_1b4[0] = afStack_334[0];
      afStack_1b4[1] = afStack_334[1];
      TStack_1ac._s_0.X = local_32c;
      fStack_350 = fVar1;
      afStack_334 = afVar12;
      TStack_1ac._s_0.Y = fStack_328;
      uStack_1a4 = _local_324;
      fVar28 = local_408;
    }
    else {
      fStack_444 = SUB84(param_2->Size,4);
      fStack_3fc = fStack_444 - fVar27;
      local_378 = (param_2->AbsolutePosition).field0_0x0._s_0;
      fVar1 = param_2->Scale;
      local_298.Trans.field0_0x0._s_0.Y = fStack_3fc;
      local_298.Trans.field0_0x0._s_0.X = fVar28;
      fStack_3f4 = fStack_444;
      fVar27 = fVar28 * fVar1 + local_378.X;
      local_298.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
      local_298.M.M[0][1] = _UNK_15076b184;
      local_298.M.M[1][0] = _UNK_15076b188;
      local_298.M.M[1][1] = _UNK_15076b18c;
      fVar22 = fStack_3fc * fVar1 + local_378.Y;
      local_400 = fVar28;
      local_3f8 = fVar25;
      Concatenate<TTransform2<float>_>(&local_280,&local_298,&param_2->AccumulatedRenderTransform);
      fStack_304 = local_280.M.M[0][0];
      fStack_300 = local_280.M.M[0][1];
      afStack_2fc[0] = local_280.M.M[1][0];
      afStack_2fc[1] = local_280.M.M[1][1];
      afVar12 = afStack_2fc;
      uStack_314 = 0;
      uStack_310 = 0;
      fStack_30c = local_3f8;
      fStack_308 = fStack_3f4;
      local_2f4 = local_280.Trans.field0_0x0._0_4_;
      fStack_2f0 = local_280.Trans.field0_0x0._4_4_;
      afStack_2fc[0] = local_280.M.M[1][0];
      afStack_2fc[1] = local_280.M.M[1][1];
      _local_320 = CONCAT44(fVar22,fVar27);
      INSERT(local_2ec,param_2->bHasRenderTransform,1,1);
      INSERT(local_2ec,'\0',0,1);
      local_1d8._4_4_ = fVar22;
      local_1d8._0_4_ = fVar27;
      uStack_1c0 = fStack_3f4;
      fStack_1bc = fStack_304;
      fStack_1b8 = fStack_300;
      afStack_1b4[0] = afStack_2fc[0];
      afStack_1b4[1] = afStack_2fc[1];
      TStack_1ac._s_0.X = local_2f4;
      fStack_318 = fVar1;
      afStack_2fc = afVar12;
      TStack_1ac._s_0.Y = fStack_2f0;
      uStack_1a4 = _local_2ec;
      fVar28 = local_3f8;
    }
    local_1c8 = (ulonglong)(uint)fVar28 << 0x20;
    uStack_1d0 = (ulonglong)(uint)fVar1;
    pFVar18 = TAttribute<FLinearColor>::Get(&this->ClampRangeHighlightColor);
    FSlateDrawElement::MakeBox
              (param_4,param_5 + 1U,(FPaintGeometry *)&local_1d8,this->CursorBackground,EVar21,
               pFVar18);
    FGeometry::FGeometry(&local_128.AllottedGeometry);
    local_128.ClippingRect.Left = -1.0;
    local_128.ClippingRect.Top = -1.0;
    local_128.ClippingRect.Right = -1.0;
    local_128.ClippingRect.Bottom = -1.0;
    FGeometry::operator=(&local_128.AllottedGeometry,param_2);
    local_128.bOnlyDrawMajorTicks = false;
    local_128.TickColor.field0_0x0._s_0 = FLinearColor::White.field0_0x0;
    local_128.ClippingRect.Left = param_3->Left;
    local_128.ClippingRect.Top = param_3->Top;
    local_128.ClippingRect.Right = param_3->Right;
    local_128.ClippingRect.Bottom = param_3->Bottom;
    if (param_1) {
      local_128.TickOffset = 0.0;
    }
    else {
      fStack_434 = SUB84(param_2->Size,4);
      local_128.TickOffset =
           (float)((uint)(fStack_434 - __real_41100000) & __xmm_7fffffff7fffffff7fffffff7fffffff);
    }
    local_128.MajorTickHeight = 9.0;
    local_128.StartLayer = param_5 + 1U;
    local_128.DrawEffects = EVar21;
    local_128.bMirrorLabels = param_1;
    DrawTicks(this,param_4,(FScrubRangeToScreen *)&local_3c0._s_0,&local_128);
    this_00 = &(this->ScrubPosition).Getter;
    auVar29 = roundps(unaff_XMM11,ZEXT416(__real_40d00000),3);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_268);
    if (((*(int *)&(this->ScrubPosition).Getter.field_0x10 == 0) ||
        (plVar19 = *(longlong **)&(this->ScrubPosition).Getter.field_0x8, plVar19 == (longlong *)0x0
        )) || (cVar14 = (**(code **)(*plVar19 + 0x38))(), cVar14 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_268);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_268);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_1f0);
      if (*(int *)&(this->ScrubPosition).Getter.field_0x10 == 0) {
        plVar19 = (longlong *)0x0;
      }
      else {
        plVar19 = *(longlong **)&(this->ScrubPosition).Getter.field_0x8;
      }
      dVar23 = (double)(**(code **)(*plVar19 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_1f0);
      (this->ScrubPosition).Value = dVar23;
    }
    dVar23 = (this->ScrubPosition).Value;
    if ((local_3b8.LowerBound.Type.Value == '\x02') &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type != ERangeBoundTypes::Open",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                            ,99,L""), bVar13)) {
      pcVar4 = (code *)swi(3);
      iVar15 = (*pcVar4)();
      return iVar15;
    }
    fVar25 = (float)(dVar23 - (double)CONCAT44(local_3b8.LowerBound.Value._4_4_,
                                               local_3b8.LowerBound.Value._0_4_)) * local_390;
    pfVar17 = TAttribute<float>::Get(&this->CursorSize);
    fVar28 = param_2->Scale;
    local_36c = (param_2->AbsolutePosition).field0_0x0._s_0;
    local_438 = SUB84(param_2->Size,0);
    local_438 = *pfVar17 * __real_3f000000 * local_438;
    uStack_3ec = 0;
    local_3f0 = fVar25 - local_438;
    local_3e8 = local_438 + local_438;
    local_250.Trans.field0_0x0._s_0.Y = 0.0;
    local_250.Trans.field0_0x0._s_0.X = local_3f0;
    fStack_434 = SUB84(param_2->Size,4);
    uStack_3e4 = fStack_434;
    local_250.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
    local_250.M.M[0][1] = _UNK_15076b184;
    local_250.M.M[1][0] = _UNK_15076b188;
    local_250.M.M[1][1] = _UNK_15076b18c;
    local_440._4_4_ = fVar28 * 0.0 + local_36c.Y;
    local_440._0_4_ = local_3f0 * fVar28 + local_36c.X;
    Concatenate<TTransform2<float>_>(&local_238,&local_250,&param_2->AccumulatedRenderTransform);
    local_1a0 = local_440;
    local_18c = CONCAT44(uStack_3e4,local_3e8);
    local_184[0] = local_238.M.M[0][0];
    local_184[1] = local_238.M.M[0][1];
    afStack_17c[0] = local_238.M.M[1][0];
    afStack_17c[1] = local_238.M.M[1][1];
    local_174 = local_238.Trans.field0_0x0;
    local_16c = param_2->bHasRenderTransform * '\x02' | local_16c & 0xfc;
    local_194 = 0;
    local_420._s_0.R = (local_3d0->ColorAndOpacityTint).field0_0x0._s_0.R;
    local_420._s_0.G = (local_3d0->ColorAndOpacityTint).field0_0x0._s_0.G * __real_3e4ccccd;
    local_420._s_0.A = (local_3d0->ColorAndOpacityTint).field0_0x0._s_0.A * __real_3da3d70a;
    local_420._s_0.B = (local_3d0->ColorAndOpacityTint).field0_0x0._s_0.B * __real_3dcccccd;
    local_198 = fVar28;
    FSlateDrawElement::MakeBox
              (param_4,param_5 + 3,(FPaintGeometry *)&local_1a0._s_0,this->CursorBackground,EVar21,
               (FLinearColor *)&local_420._s_0);
    local_3e0 = fVar25 - auVar29._0_4_;
    uStack_3dc = 0;
    fVar28 = param_2->Scale;
    local_360 = (param_2->AbsolutePosition).field0_0x0._s_0;
    fStack_434 = SUB84(param_2->Size,4);
    local_220.Trans.field0_0x0._s_0.Y = 0.0;
    local_220.Trans.field0_0x0._s_0.X = local_3e0;
    uStack_3d4 = fStack_434;
    local_3d8 = 0x41500000;
    local_220.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
    local_220.M.M[0][1] = _UNK_15076b184;
    local_220.M.M[1][0] = _UNK_15076b188;
    local_220.M.M[1][1] = _UNK_15076b18c;
    local_440._4_4_ = fVar28 * 0.0 + local_360.Y;
    local_440._0_4_ = local_3e0 * fVar28 + local_360.X;
    Concatenate<TTransform2<float>_>(&local_208,&local_220,&param_2->AccumulatedRenderTransform);
    ppFVar20 = &this->ScrubHandleUp;
    local_14c[0] = local_208.M.M[0][0];
    local_14c[1] = local_208.M.M[0][1];
    afStack_144[0] = local_208.M.M[1][0];
    afStack_144[1] = local_208.M.M[1][1];
    local_168 = local_440;
    local_154 = CONCAT44(uStack_3d4,local_3d8);
    local_13c = local_208.Trans.field0_0x0;
    local_134 = param_2->bHasRenderTransform * '\x02' | local_134 & 0xfc;
    local_15c = 0;
    local_430._s_0.R = (local_3d0->ColorAndOpacityTint).field0_0x0._s_0.R;
    local_430._s_0.G = (local_3d0->ColorAndOpacityTint).field0_0x0._s_0.G * __real_3e4ccccd;
    local_430._s_0.A = (local_3d0->ColorAndOpacityTint).field0_0x0._s_0.A * __real_3f000000;
    local_430._s_0.B = (local_3d0->ColorAndOpacityTint).field0_0x0._s_0.B * __real_3dcccccd;
    if (!param_1) {
      ppFVar20 = &this->ScrubHandleDown;
    }
    local_160 = fVar28;
    FSlateDrawElement::MakeBox
              (param_4,param_5 + 4,(FPaintGeometry *)&local_168._s_0,*ppFVar20,EVar21,
               (FLinearColor *)&local_430._s_0);
    param_5 = param_5 + 4;
  }
  return param_5;
}

// OnPreviewMouseButtonDown @ 142dc95e0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SSimpleTimeSlider::OnPreviewMouseButtonDown
          (SSimpleTimeSlider *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  bool bVar3;
  bool *pbVar4;
  TSharedRef<SWidget,1> *pTVar5;
  FReply *pFVar6;
  bool bVar7;
  double dVar8;
  TSharedRef<SWidget,1> local_f8;
  FReply local_e8;
  
  pTVar1 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar2 = (param_2->EffectingButton).KeyName;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar7 = FVar2 == EKeys::LeftMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar2 = (param_2->EffectingButton).KeyName;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (FVar2 == EKeys::RightMouseButton.KeyName) {
    pbVar4 = TAttribute<bool>::Get(&this->AllowPan);
    if (*pbVar4 != false) {
      bVar3 = true;
      goto LAB_142dc9660;
    }
  }
  bVar3 = false;
LAB_142dc9660:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  this->DistanceDragged = 0.0;
  if (bVar7) {
    dVar8 = GetTimeAtCursorPosition(this,param_1,param_2);
    CommitScrubPosition(this,dVar8,false);
    FReply::FReply(&local_e8,true);
    pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_f8);
    pFVar6 = FReply::CaptureMouse(&local_e8,pTVar5);
    pFVar6->bPreventThrottling = 1;
    FReply::FReply(__return_storage_ptr__,pFVar6);
    FReply::~FReply(&local_e8);
  }
  else if (bVar3) {
    FReply::FReply(&local_e8,true);
    pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_f8);
    pFVar6 = FReply::CaptureMouse(&local_e8,pTVar5);
    FReply::FReply(__return_storage_ptr__,pFVar6);
    FReply::~FReply(&local_e8);
  }
  else {
    FReply::FReply(__return_storage_ptr__,false);
  }
  return __return_storage_ptr__;
}

// SetClampRange @ 142dd8290

void __thiscall
SSimpleTimeSlider::SetClampRange(SSimpleTimeSlider *this,double param_1,double param_2)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_48 [2];
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->ClampRange).Getter,
             local_48);
  if (((*(int *)&(this->ClampRange).Getter.field_0x10 != 0) &&
      (plVar1 = *(longlong **)&(this->ClampRange).Getter.field_0x8, plVar1 != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(*plVar1 + 0x38))(), cVar2 != '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_48);
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (local_48);
  local_48[0].DestructionSentinel.AccessType =
       CONCAT31(local_48[0].DestructionSentinel.AccessType._1_3_,1);
  local_48[0].DestructionSentinel._16_4_ = local_48[0].DestructionSentinel._16_4_ & 0xffffff00;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClampRange).Getter);
  (this->ClampRange).bIsSet = true;
  *(EAccessType *)&(this->ClampRange).Value.LowerBound = local_48[0].DestructionSentinel.AccessType;
  *(undefined4 *)&(this->ClampRange).Value.LowerBound.field_0x4 =
       local_48[0].DestructionSentinel._4_4_;
  (this->ClampRange).Value.LowerBound.Value = param_1;
  (this->ClampRange).Value.UpperBound.Type =
       (TEnumAsByte<ERangeBoundTypes::Type>)local_48[0].DestructionSentinel.bDestroyed;
  *(undefined3 *)&(this->ClampRange).Value.UpperBound.field_0x1 =
       local_48[0].DestructionSentinel._17_3_;
  *(undefined4 *)&(this->ClampRange).Value.UpperBound.field_0x4 =
       local_48[0].DestructionSentinel._20_4_;
  (this->ClampRange).Value.UpperBound.Value = param_2;
  return;
}

// SetTimeRange @ 142dd9d50

void __thiscall
SSimpleTimeSlider::SetTimeRange(SSimpleTimeSlider *this,double param_1,double param_2)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_88;
  double dStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  uint local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->ViewRange).Getter,
             &local_88);
  if ((*(int *)&(this->ViewRange).Getter.field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->ViewRange).Getter.field_0x8, plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_88);
      goto LAB_142dd9dfd;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_88);
  local_88.DestructionSentinel.AccessType =
       CONCAT31(local_88.DestructionSentinel.AccessType._1_3_,1);
  local_88.DestructionSentinel._16_4_ = local_88.DestructionSentinel._16_4_ & 0xffffff00;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ViewRange).Getter);
  (this->ViewRange).bIsSet = true;
  *(EAccessType *)&(this->ViewRange).Value.LowerBound = local_88.DestructionSentinel.AccessType;
  *(undefined4 *)&(this->ViewRange).Value.LowerBound.field_0x4 = local_88.DestructionSentinel._4_4_;
  (this->ViewRange).Value.LowerBound.Value = param_1;
  (this->ViewRange).Value.UpperBound.Type =
       (TEnumAsByte<ERangeBoundTypes::Type>)local_88.DestructionSentinel.bDestroyed;
  *(undefined3 *)&(this->ViewRange).Value.UpperBound.field_0x1 = local_88.DestructionSentinel._17_3_
  ;
  *(undefined4 *)&(this->ViewRange).Value.UpperBound.field_0x4 = local_88.DestructionSentinel._20_4_
  ;
  (this->ViewRange).Value.UpperBound.Value = param_2;
  local_88.DestructionSentinel.Accessor = (FMRSWRecursiveAccessDetector *)param_1;
  dStack_70 = param_2;
LAB_142dd9dfd:
  local_68 = CONCAT31(local_68._1_3_,1);
  local_58 = local_58 & 0xffffff00;
  uStack_60 = param_1;
  uStack_50 = param_2;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnViewRangeChanged,
             &local_88);
  if ((*(int *)&(this->OnViewRangeChanged).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnViewRangeChanged).field_0x8, plVar1 != (longlong *)0x0)) {
    local_48 = local_68;
    uStack_44 = uStack_64;
    uStack_40 = (undefined4)uStack_60;
    uStack_3c = uStack_60._4_4_;
    local_38 = local_58;
    uStack_34 = uStack_54;
    uStack_30 = (undefined4)uStack_50;
    uStack_2c = uStack_50._4_4_;
    (**(code **)(*plVar1 + 0x68))(plVar1,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_88);
  return;
}

