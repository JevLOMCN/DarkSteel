// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProfileVisualizer
// Functions: 6

// ComputeDesiredSize @ 148d5de30

TVector2<double> * __thiscall
STimeline::ComputeDesiredSize
          (STimeline *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = 8.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 8.0;
  return __return_storage_ptr__;
}

// Construct @ 148d69990

void __thiscall STimeline::Construct(STimeline *this,FArguments *param_1)

{
  code *pcVar1;
  FStyle *pFVar2;
  FSharedReferencer<1> FVar3;
  bool bVar4;
  FName *pFVar5;
  FSlateBrush *pFVar6;
  FName local_res8;
  
  this->MinValue = param_1->_MinValue;
  this->MaxValue = param_1->_MaxValue;
  this->FixedLabelSpacing = param_1->_FixedLabelSpacing;
  FVar3 = FProfileVisualizerStyle::StyleInstance.SharedReferenceCount;
  pFVar2 = FProfileVisualizerStyle::StyleInstance.Object;
  if (FProfileVisualizerStyle::StyleInstance.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FProfileVisualizerStyle::StyleInstance.SharedReferenceCount.ReferenceController)->
    SharedReferenceCount =
         (atomic<int>)
         ((int)(FProfileVisualizerStyle::StyleInstance.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar2 == (FStyle *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pcVar1 = *(code **)(*(longlong *)pFVar2 + 0x50);
  pFVar5 = ::FName::FName(&local_res8,"ProfileVisualizer.Background");
  pFVar6 = (FSlateBrush *)(*pcVar1)(pFVar2,*pFVar5,0,0);
  this->BackgroundImage = pFVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar3.ReferenceController);
  this->Zoom = 1.0;
  this->Offset = 0.0;
  return;
}

// OnMouseButtonDown @ 148d874d0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STimeline::OnMouseButtonDown
          (STimeline *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  SWidget::OnMouseButtonDown((SWidget *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnMouseMove @ 148d88110

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STimeline::OnMouseMove
          (STimeline *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  SWidget::OnMouseMove((SWidget *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnPaint @ 148d88b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

int __thiscall
STimeline::OnPaint(STimeline *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
                  FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  float fVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  FStyle *pFVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  int iVar9;
  FSlateApplication *pFVar10;
  FName *pFVar11;
  longlong lVar12;
  FDeprecateSlateVector2D FVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float in_XMM3_Da;
  double dVar19;
  float fVar20;
  float fVar21;
  undefined1 auStackY_3b8 [32];
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_378;
  float local_368;
  float local_364;
  float local_360;
  float fStack_35c;
  FCompositeFont *local_358;
  float local_350;
  float fStack_34c;
  float local_348;
  float fStack_344;
  FString local_340;
  double local_330;
  TVector2<float>_u_0_s_0 local_324;
  TSharedRef<FSlateFontMeasure,1> local_318;
  FFontOutlineSettings local_308;
  wchar_t *local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  FScriptContainerElement *local_2d8;
  int iStack_2d0;
  undefined4 uStack_2cc;
  FName local_2c8;
  undefined1 local_2c0 [8];
  FName local_2b8;
  undefined1 local_2b0 [24];
  undefined1 local_298 [16];
  undefined1 local_288 [104];
  TReferenceControllerBase<1> *local_220;
  TVector2<float>_u_0 local_1f8;
  float local_1f0;
  undefined8 local_1ec;
  FDeprecateSlateVector2D local_1e4;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  undefined8 local_1cc;
  byte local_1c4;
  TVector2<float>_u_0 local_1c0;
  float local_1b8;
  undefined8 local_1b4;
  FDeprecateSlateVector2D local_1ac;
  float local_1a4 [2];
  float afStack_19c [2];
  TVector2<float>_u_0 local_194;
  byte local_18c;
  TVector2<float>_u_0 local_188;
  float local_180;
  undefined8 local_17c;
  FDeprecateSlateVector2D local_174;
  float local_16c [2];
  float afStack_164 [2];
  TVector2<float>_u_0 local_15c;
  byte local_154;
  TVector2<float>_u_0 local_150;
  float local_148;
  undefined8 local_144;
  FDeprecateSlateVector2D local_13c;
  float local_134 [2];
  float afStack_12c [2];
  TVector2<float>_u_0 local_124;
  byte local_11c;
  TVector2<float>_u_0 local_118;
  float local_110;
  undefined8 local_10c;
  FDeprecateSlateVector2D local_104;
  float local_fc [2];
  float afStack_f4 [2];
  TVector2<float>_u_0 local_ec;
  byte local_e4;
  ulonglong local_e0;
  
  local_e0 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  pFVar10 = FSlateApplication::Get();
  lVar12 = *(longlong *)&pFVar10->field_0x60;
  if ((*(longlong *)(lVar12 + 8) == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    iVar9 = (*pcVar2)();
    return iVar9;
  }
  FSlateFontServices::GetFontMeasureService(*(FSlateFontServices **)(lVar12 + 8),&local_318);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    SelectedBarColor = FLinearColor::White;
    _Init_thread_footer(&::_TSS0);
  }
  FVar7.ReferenceController =
       FProfileVisualizerStyle::StyleInstance.SharedReferenceCount.ReferenceController;
  pFVar6 = FProfileVisualizerStyle::StyleInstance.Object;
  if (FProfileVisualizerStyle::StyleInstance.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FProfileVisualizerStyle::StyleInstance.SharedReferenceCount.ReferenceController)->
    SharedReferenceCount =
         (atomic<int>)
         ((int)(FProfileVisualizerStyle::StyleInstance.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar6 == (FStyle *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    iVar9 = (*pcVar2)();
    return iVar9;
  }
  pcVar2 = *(code **)(*(longlong *)pFVar6 + 0x30);
  pFVar11 = ::FName::FName(&local_2c8,"ProfileVisualizer.ProgressBar.BorderPadding");
  lVar12 = (*pcVar2)(pFVar6,local_2c0,*pFVar11,0);
  dVar5 = (double)*(float *)(lVar12 + 4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  iVar9 = 0;
  local_308.OutlineSize = 0;
  local_308.bMiteredCorners = false;
  local_308.bSeparateFillAlpha = false;
  local_308.bApplyOutlineToDropShadows = false;
  local_308.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  fVar20 = *(float *)&(this->DrawingGeometry).Size;
  fVar1 = this->DrawingOffsetX;
  local_308.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  local_368 = fVar20;
  pFVar11 = ::FName::FName(&local_2b8,"Regular");
  FCoreStyle::GetDefaultFontStyle
            ((FSlateFontInfo *)(local_288 + 0x30),*pFVar11,__real_41200000,&local_308);
  fVar18 = this->Zoom * *(float *)&param_2->Size;
  local_364 = this->MaxValue - this->MinValue;
  local_378.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_378.ArrayNum = 0;
  local_378.ArrayMax = 0;
  iVar16 = (int)ROUND((fVar18 + fVar18) / this->FixedLabelSpacing - __real_3f000000) >> 1;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,2,&local_378.AllocatorInstance,&local_378.ArrayNum,&local_378.ArrayMax);
  dVar3 = dVar5 + __real_3ff0000000000000;
  dVar19 = (double)fVar1;
  local_330 = dVar19;
  if ((local_378.ArrayNum < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar2 = (code *)swi(3);
    iVar9 = (*pcVar2)();
    return iVar9;
  }
  *(double *)local_378.AllocatorInstance.Data = dVar19;
  *(double *)(local_378.AllocatorInstance.Data + 8) = dVar3;
  dVar4 = (double)(fVar20 + fVar1);
  if ((local_378.ArrayNum < 2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar2 = (code *)swi(3);
    iVar9 = (*pcVar2)();
    return iVar9;
  }
  *(double *)(local_378.AllocatorInstance.Data + 0x10) = dVar4;
  *(double *)(local_378.AllocatorInstance.Data + 0x18) = dVar3;
  fVar18 = __real_3f800000;
  uVar15 = param_5 + 1;
  local_1c0 = (param_2->AbsolutePosition).field0_0x0;
  local_1b8 = param_2->Scale;
  local_194 = (param_2->AccumulatedRenderTransform).Trans.field0_0x0;
  local_1ac = param_2->Size;
  local_18c = param_2->bHasRenderTransform * '\x02' | local_18c & 0xfc;
  local_1a4 = (param_2->AccumulatedRenderTransform).M.M[0];
  afStack_19c = (param_2->AccumulatedRenderTransform).M.M[1];
  local_1b4 = 0;
  FSlateDrawElement::MakeLines
            (param_4,param_5,(FPaintGeometry *)&local_1c0._s_0,&local_378,None,&FLinearColor::White,
             true,__real_3f800000);
  local_2e8 = L"0.00";
  uStack_2e0 = 4;
  local_298._12_4_ = uStack_2dc;
  local_298._8_4_ = 4;
  local_298._0_8_ = L"0.00";
  FVar13 = FSlateFontMeasure::Measure
                     (local_318.Object,(TStringView<wchar_t> *)local_2b0,(FSlateFontInfo *)local_298
                      ,in_XMM3_Da);
  fVar21 = (float)((((double)*(float *)&(param_2->Size).field_0x4 - dVar5) -
                   (double)*(float *)((longlong)FVar13 + 4)) - __real_4000000000000000);
  if (-1 < iVar16) {
    do {
      fVar17 = (float)iVar9 * (fVar18 / (float)iVar16) * this->Zoom + this->Offset;
      if ((0.0 <= fVar17) && (fVar17 <= fVar18)) {
        dVar3 = (double)(fVar17 * fVar20 + fVar1);
        if ((local_378.ArrayNum < 1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar2 = (code *)swi(3);
          iVar9 = (*pcVar2)();
          return iVar9;
        }
        *(double *)local_378.AllocatorInstance.Data = dVar3;
        *(double *)(local_378.AllocatorInstance.Data + 8) = dVar5;
        if ((local_378.ArrayNum < 2) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar2 = (code *)swi(3);
          iVar9 = (*pcVar2)();
          return iVar9;
        }
        uVar14 = uVar15 + 1;
        *(double *)(local_378.AllocatorInstance.Data + 0x10) = dVar3;
        *(double *)(local_378.AllocatorInstance.Data + 0x18) = (double)fVar21;
        local_188 = (param_2->AbsolutePosition).field0_0x0;
        local_180 = param_2->Scale;
        local_15c = (param_2->AccumulatedRenderTransform).Trans.field0_0x0;
        local_174 = param_2->Size;
        local_16c = (param_2->AccumulatedRenderTransform).M.M[0];
        afStack_164 = (param_2->AccumulatedRenderTransform).M.M[1];
        local_154 = param_2->bHasRenderTransform * '\x02' | local_154 & 0xfc;
        local_17c = 0;
        FSlateDrawElement::MakeLines
                  (param_4,uVar15,(FPaintGeometry *)&local_188._s_0,&local_378,None,
                   &FLinearColor::White,true,fVar18);
        ::FString::PrintfImpl(&local_340,L"%.2f");
        local_2d8 = local_340.Data.AllocatorInstance.Data;
        iStack_2d0 = local_340.Data.ArrayNum + -1;
        if (local_340.Data.ArrayNum == 0) {
          iStack_2d0 = 0;
        }
        local_288._12_4_ = uStack_2cc;
        local_288._8_4_ = iStack_2d0;
        local_288._0_8_ = local_340.Data.AllocatorInstance.Data;
        FVar13 = FSlateFontMeasure::Measure
                           (local_318.Object,(TStringView<wchar_t> *)(local_2b0 + 8),
                            (FSlateFontInfo *)local_288,in_XMM3_Da);
        dVar19 = (double)*(float *)FVar13;
        dVar3 = dVar3 - dVar19 * __real_3fe0000000000000;
        if (0.0 <= dVar3) {
          if ((double)*(float *)&param_2->Size < dVar19 + dVar3) {
            dVar3 = dVar4 - dVar19;
          }
        }
        else {
          dVar3 = 0.0;
        }
        local_324 = (param_2->AbsolutePosition).field0_0x0._s_0;
        local_1dc = (param_2->AccumulatedRenderTransform).M.M[0][0];
        local_1d4 = (param_2->AccumulatedRenderTransform).M.M[1][0];
        local_1d8 = (param_2->AccumulatedRenderTransform).M.M[0][1];
        local_360 = (float)dVar3;
        local_1ec = 0;
        local_1d0 = (param_2->AccumulatedRenderTransform).M.M[1][1];
        local_1f0 = param_2->Scale;
        local_358 = (FCompositeFont *)CONCAT44(fVar21,local_360);
        fStack_34c = fVar21 * local_1f0 + local_324.Y;
        local_350 = local_360 * local_1f0 + local_324.X;
        local_1f8._s_0.Y = fStack_34c;
        local_1f8._s_0.X = local_350;
        local_1e4 = param_2->Size;
        local_348 = fVar21 * local_1d4 + local_360 * local_1dc +
                    (param_2->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
        in_XMM3_Da = fVar21 * local_1d0 + local_360 * local_1d8 +
                     (param_2->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
        local_1cc = CONCAT44(in_XMM3_Da,local_348);
        local_1c4 = param_2->bHasRenderTransform * '\x02' | local_1c4 & 0xfc;
        fStack_35c = fVar21;
        fStack_344 = in_XMM3_Da;
        local_288._32_8_ = local_358;
        FSlateDrawElement::MakeText
                  (param_4,uVar14,(FPaintGeometry *)&local_1f8._s_0,&local_340,
                   (FSlateFontInfo *)(local_288 + 0x30),None,&FLinearColor::White);
        fVar20 = local_368;
        uVar15 = uVar14;
        if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_340.Data.AllocatorInstance.Data);
          fVar20 = local_368;
        }
      }
      iVar9 = iVar9 + 1;
      dVar19 = local_330;
    } while (iVar9 <= iVar16);
  }
  if ((local_378.ArrayNum < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar2 = (code *)swi(3);
    iVar9 = (*pcVar2)();
    return iVar9;
  }
  *(double *)local_378.AllocatorInstance.Data = dVar19;
  *(double *)(local_378.AllocatorInstance.Data + 8) = dVar5;
  if ((local_378.ArrayNum < 2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar2 = (code *)swi(3);
    iVar9 = (*pcVar2)();
    return iVar9;
  }
  *(double *)(local_378.AllocatorInstance.Data + 0x10) = dVar19;
  *(double *)(local_378.AllocatorInstance.Data + 0x18) = (double)fVar21;
  local_150 = (param_2->AbsolutePosition).field0_0x0;
  local_148 = param_2->Scale;
  local_124 = (param_2->AccumulatedRenderTransform).Trans.field0_0x0;
  local_13c = param_2->Size;
  local_134 = (param_2->AccumulatedRenderTransform).M.M[0];
  afStack_12c = (param_2->AccumulatedRenderTransform).M.M[1];
  local_11c = param_2->bHasRenderTransform * '\x02' | local_11c & 0xfc;
  local_144 = 0;
  FSlateDrawElement::MakeLines
            (param_4,uVar15,(FPaintGeometry *)&local_150._s_0,&local_378,None,&FLinearColor::White,
             true,fVar18);
  if ((local_378.ArrayNum < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar2 = (code *)swi(3);
    iVar9 = (*pcVar2)();
    return iVar9;
  }
  *(double *)local_378.AllocatorInstance.Data = dVar4;
  *(double *)(local_378.AllocatorInstance.Data + 8) = dVar5;
  if ((local_378.ArrayNum < 2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar2 = (code *)swi(3);
    iVar9 = (*pcVar2)();
    return iVar9;
  }
  *(double *)(local_378.AllocatorInstance.Data + 0x10) = dVar4;
  *(double *)(local_378.AllocatorInstance.Data + 0x18) = (double)fVar21;
  local_118 = (param_2->AbsolutePosition).field0_0x0;
  local_110 = param_2->Scale;
  local_ec = (param_2->AccumulatedRenderTransform).Trans.field0_0x0;
  local_104 = param_2->Size;
  local_fc = (param_2->AccumulatedRenderTransform).M.M[0];
  afStack_f4 = (param_2->AccumulatedRenderTransform).M.M[1];
  local_e4 = param_2->bHasRenderTransform * '\x02' | local_e4 & 0xfc;
  local_10c = 0;
  FSlateDrawElement::MakeLines
            (param_4,uVar15 + 1,(FPaintGeometry *)&local_118._s_0,&local_378,None,
             &FLinearColor::White,true,fVar18);
  if (local_378.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_378.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_220);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_318.SharedReferenceCount.ReferenceController);
  return uVar15 + 1;
}

// Tick @ 148d92950

void __thiscall STimeline::Tick(STimeline *this,FGeometry *param_1,double param_2,float param_3)

{
  this->DrawingOffsetX =
       (this->DrawingGeometry).AbsolutePosition.field0_0x0._s_0.X -
       (param_1->AbsolutePosition).field0_0x0._s_0.X;
  return;
}

