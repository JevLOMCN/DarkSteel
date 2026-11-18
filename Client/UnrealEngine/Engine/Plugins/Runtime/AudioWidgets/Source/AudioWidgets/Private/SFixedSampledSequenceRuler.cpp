// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 15

// ~SFixedSampledSequenceRuler @ 14d8c0ed0

void __thiscall
SFixedSampledSequenceRuler::~SFixedSampledSequenceRuler(SFixedSampledSequenceRuler *this)

{
  TReferenceControllerBase<1> *pTVar1;
  void *pvVar2;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->GridService).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TicksTextFont).CompositeFont.SharedReferenceCount.ReferenceController);
  pTVar1 = (this->HandleBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->HandleBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->BackgroundBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->BackgroundBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnTimeUnitMenuSelection).field_0x8,
             *(int *)&(this->OnTimeUnitMenuSelection).field_0x10);
  pvVar2 = *(void **)&(this->OnTimeUnitMenuSelection).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTimeUnitMenuSelection);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// ComputeDesiredSize @ 14d8e6080

TVector2<double> * __thiscall
SFixedSampledSequenceRuler::ComputeDesiredSize
          (SFixedSampledSequenceRuler *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  float fVar1;
  
  fVar1 = this->DesiredHeight;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)this->DesiredWidth;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1;
  return __return_storage_ptr__;
}

// Construct @ 14d8ee390

void __thiscall
SFixedSampledSequenceRuler::Construct
          (SFixedSampledSequenceRuler *this,FArguments *param_1,
          TSharedRef<IFixedSampledSequenceGridService,1> *param_2)

{
  FFixedSampleSequenceRulerStyle *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  EStyleColor EVar4;
  undefined2 uVar5;
  bool bVar6;
  bool *pbVar7;
  IFixedSampledSequenceGridService *local_18;
  FSharedReferencer<1> local_10;
  
  local_10.ReferenceController = (param_2->SharedReferenceCount).ReferenceController;
  local_18 = param_2->Object;
  if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->GridService != (TSharedPtr<IFixedSampledSequenceGridService,1> *)&local_18) {
    (this->GridService).Object = local_18;
    local_18 = (IFixedSampledSequenceGridService *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->GridService).SharedReferenceCount,&local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  UpdateGridMetrics(this);
  this->DisplayUnit = param_1->_DisplayUnit;
  if ((param_1->_DisplayPlayhead).bIsSet != false) {
    pbVar7 = TAttribute<bool>::Get(&param_1->_DisplayPlayhead);
    this->bDisplayPlayhead = *pbVar7;
  }
  if (param_1->_Style == (FFixedSampleSequenceRulerStyle *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InArgs._Style",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SFixedSampledSequenceRuler.cpp"
                       ,0x16,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = param_1->_Style;
  uVar3 = *(undefined8 *)((longlong)&(pFVar1->HandleColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->HandleColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(pFVar1->HandleColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->HandleColor).SpecifiedColor.field0_0x0 + 8) = uVar3;
  EVar4 = (pFVar1->HandleColor).ColorTableId;
  uVar5 = *(undefined2 *)&(pFVar1->HandleColor).field_0x12;
  (this->HandleColor).ColorUseRule = (pFVar1->HandleColor).ColorUseRule;
  (this->HandleColor).ColorTableId = EVar4;
  *(undefined2 *)&(this->HandleColor).field_0x12 = uVar5;
  this->HandleWidth = param_1->_Style->HandleWidth;
  FSlateBrush::operator=(&this->HandleBrush,&param_1->_Style->HandleBrush);
  pFVar1 = param_1->_Style;
  uVar3 = *(undefined8 *)((longlong)&(pFVar1->BackgroundColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->BackgroundColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(pFVar1->BackgroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->BackgroundColor).SpecifiedColor.field0_0x0 + 8) = uVar3;
  EVar4 = (pFVar1->BackgroundColor).ColorTableId;
  uVar5 = *(undefined2 *)&(pFVar1->BackgroundColor).field_0x12;
  (this->BackgroundColor).ColorUseRule = (pFVar1->BackgroundColor).ColorUseRule;
  (this->BackgroundColor).ColorTableId = EVar4;
  *(undefined2 *)&(this->BackgroundColor).field_0x12 = uVar5;
  FSlateBrush::operator=(&this->BackgroundBrush,&param_1->_Style->BackgroundBrush);
  pFVar1 = param_1->_Style;
  uVar3 = *(undefined8 *)((longlong)&(pFVar1->TicksColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->TicksColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(pFVar1->TicksColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->TicksColor).SpecifiedColor.field0_0x0 + 8) = uVar3;
  EVar4 = (pFVar1->TicksColor).ColorTableId;
  uVar5 = *(undefined2 *)&(pFVar1->TicksColor).field_0x12;
  (this->TicksColor).ColorUseRule = (pFVar1->TicksColor).ColorUseRule;
  (this->TicksColor).ColorTableId = EVar4;
  *(undefined2 *)&(this->TicksColor).field_0x12 = uVar5;
  pFVar1 = param_1->_Style;
  uVar3 = *(undefined8 *)((longlong)&(pFVar1->TicksTextColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->TicksTextColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(pFVar1->TicksTextColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->TicksTextColor).SpecifiedColor.field0_0x0 + 8) = uVar3;
  EVar4 = (pFVar1->TicksTextColor).ColorTableId;
  uVar5 = *(undefined2 *)&(pFVar1->TicksTextColor).field_0x12;
  (this->TicksTextColor).ColorUseRule = (pFVar1->TicksTextColor).ColorUseRule;
  (this->TicksTextColor).ColorTableId = EVar4;
  *(undefined2 *)&(this->TicksTextColor).field_0x12 = uVar5;
  FSlateFontInfo::operator=(&this->TicksTextFont,&param_1->_Style->TicksTextFont);
  this->DesiredWidth = param_1->_Style->DesiredWidth;
  this->DesiredHeight = param_1->_Style->DesiredHeight;
  this->TicksTextOffset = param_1->_Style->TicksTextOffset;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// DrawPlayheadHandle @ 14d918c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SFixedSampledSequenceRuler::DrawPlayheadHandle
          (SFixedSampledSequenceRuler *this,FGeometry *param_1,FSlateWindowElementList *param_2,
          int *param_3)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  TVector2<float>_u_0_s_0 TVar5;
  FLinearColor *pFVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  undefined1 auStackY_f8 [32];
  ulonglong local_c8;
  FLinearColor_u_0 local_b0;
  ulonglong local_a0;
  TTransform2<float> local_98;
  TVector2<float>_u_0 local_80;
  float local_78;
  undefined8 local_74;
  undefined8 local_6c;
  float local_64 [2];
  float afStack_5c [2];
  TVector2<float>_u_0 local_54;
  byte local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  fVar1 = this->HandleWidth;
  TVar5 = (param_1->AbsolutePosition).field0_0x0._s_0;
  fVar2 = param_1->Scale;
  local_b0._s_0.G = TVar5.X;
  local_b0._s_0.B = TVar5.Y;
  fVar11 = this->PlayheadPosition - fVar1 * __real_3f000000;
  uVar3 = *(undefined4 *)&(param_1->Size).field_0x4;
  local_c8 = (ulonglong)(uint)fVar11;
  local_a0 = local_c8;
  fVar7 = fVar2 * fVar11 + local_b0._s_0.G;
  fVar10 = fVar2 * 0.0 + local_b0._s_0.B;
  local_b0._s_0.R = (float)___xmm_3f80000000000000000000003f800000;
  local_b0._s_0.G = (float)((ulonglong)___xmm_3f80000000000000000000003f800000 >> 0x20);
  local_b0._s_0.B = (float)_UNK_15076b188;
  local_b0._s_0.A = (float)((ulonglong)_UNK_15076b188 >> 0x20);
  Concatenate<TTransform2<float>_>
            (&local_98,(TTransform2<float> *)&local_b0._s_0,&param_1->AccumulatedRenderTransform);
  local_80._s_0.Y = fVar10;
  local_80._s_0.X = fVar7;
  local_6c = CONCAT44(uVar3,(fVar11 + fVar1) - fVar11);
  local_4c = param_1->bHasRenderTransform * '\x02' | local_4c & 0xfc;
  local_74 = 0;
  local_64[0] = local_98.M.M[0][0];
  local_64[1] = local_98.M.M[0][1];
  afStack_5c[0] = local_98.M.M[1][0];
  afStack_5c[1] = local_98.M.M[1][1];
  local_54 = local_98.Trans.field0_0x0;
  local_78 = fVar2;
  if ((this->HandleColor).ColorUseRule == UseColor_ColorTable) {
    pFVar6 = FSlateColor::GetColorFromTable(&this->HandleColor);
    uVar8 = *(undefined8 *)&pFVar6->field0_0x0;
    uVar9 = *(undefined8 *)((longlong)&pFVar6->field0_0x0 + 8);
  }
  else {
    uVar8 = *(undefined8 *)&(this->HandleColor).SpecifiedColor.field0_0x0;
    uVar9 = *(undefined8 *)((longlong)&(this->HandleColor).SpecifiedColor.field0_0x0 + 8);
  }
  local_b0._s_0.R = (float)uVar8;
  local_b0._s_0.G = (float)((ulonglong)uVar8 >> 0x20);
  local_b0._s_0.B = (float)uVar9;
  local_b0._s_0.A = (float)((ulonglong)uVar9 >> 0x20);
  FSlateDrawElement::MakeBox
            (param_2,*param_3,(FPaintGeometry *)&local_80._s_0,&this->HandleBrush,None,
             (FLinearColor *)&local_b0._s_0);
  *param_3 = *param_3 + 1;
  return;
}

// DrawRulerTicks @ 14d91a060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SFixedSampledSequenceRuler::DrawRulerTicks
          (SFixedSampledSequenceRuler *this,FGeometry *param_1,FSlateWindowElementList *param_2,
          int *param_3)

{
  float fVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  bool bVar10;
  FLinearColor *pFVar11;
  int iVar12;
  double dVar13;
  undefined1 auStackY_1b8 [32];
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_178;
  FLinearColor_u_0 local_168;
  FLinearColor_u_0 local_158;
  TVector2<float>_u_0 local_148;
  float local_140;
  undefined8 local_13c;
  FDeprecateSlateVector2D local_134;
  float local_12c [2];
  float afStack_124 [2];
  TVector2<float>_u_0 local_11c;
  byte local_114;
  TVector2<float>_u_0 local_110;
  float local_108;
  undefined8 local_104;
  FDeprecateSlateVector2D local_fc;
  float local_f4 [2];
  float afStack_ec [2];
  TVector2<float>_u_0 local_e4;
  byte local_dc;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  iVar4 = (this->GridMetrics).NumMinorGridDivisions;
  dVar2 = (this->GridMetrics).MajorGridXStep;
  dVar6 = (double)*(float *)&(param_1->Size).field_0x4;
  local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.ArrayNum = 0;
  local_178.ArrayMax = 0;
  dVar7 = dVar6 * __real_3fe8000000000000;
  dVar6 = dVar6 * __real_3fd0000000000000;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,2,&local_178.AllocatorInstance,&local_178.ArrayNum,&local_178.ArrayMax);
  dVar9 = __real_3fe0000000000000;
  fVar8 = __real_3f800000;
  dVar3 = (this->GridMetrics).FirstMajorTickX;
  if (dVar3 < (double)*(float *)&param_1->Size) {
    do {
      if ((local_178.ArrayNum < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(double *)local_178.AllocatorInstance.Data = dVar3;
      *(double *)(local_178.AllocatorInstance.Data + 8) = dVar6;
      fVar1 = *(float *)&(param_1->Size).field_0x4;
      if ((local_178.ArrayNum < 2) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(double *)(local_178.AllocatorInstance.Data + 0x10) = dVar3;
      *(double *)(local_178.AllocatorInstance.Data + 0x18) = (double)fVar1;
      if ((this->TicksColor).ColorUseRule == UseColor_ColorTable) {
        pFVar11 = FSlateColor::GetColorFromTable(&this->TicksColor);
        local_168._0_8_ = *(undefined8 *)&pFVar11->field0_0x0;
        local_168._8_8_ = *(undefined8 *)((longlong)&pFVar11->field0_0x0 + 8);
      }
      else {
        local_168._0_8_ = *(undefined8 *)&(this->TicksColor).SpecifiedColor.field0_0x0;
        local_168._8_8_ =
             *(undefined8 *)((longlong)&(this->TicksColor).SpecifiedColor.field0_0x0 + 8);
      }
      local_148 = (param_1->AbsolutePosition).field0_0x0;
      local_11c = (param_1->AccumulatedRenderTransform).Trans.field0_0x0;
      local_134 = param_1->Size;
      local_114 = param_1->bHasRenderTransform * '\x02' | local_114 & 0xfc;
      local_140 = param_1->Scale;
      local_12c = (param_1->AccumulatedRenderTransform).M.M[0];
      afStack_124 = (param_1->AccumulatedRenderTransform).M.M[1];
      *param_3 = *param_3 + 1;
      local_13c = 0;
      FSlateDrawElement::MakeLines
                (param_2,*param_3,(FPaintGeometry *)&local_148._s_0,&local_178,None,
                 (FLinearColor *)&local_168._s_0,false,fVar8);
      iVar12 = 1;
      if (1 < (this->GridMetrics).NumMinorGridDivisions) {
        do {
          dVar13 = (double)iVar12 * (dVar2 / (double)iVar4) + dVar3;
          if (dVar13 < (double)*(float *)&param_1->Size) {
            if ((local_178.ArrayNum < 1) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            *(double *)local_178.AllocatorInstance.Data = dVar13;
            *(double *)(local_178.AllocatorInstance.Data + 8) = dVar7;
            fVar1 = *(float *)&(param_1->Size).field_0x4;
            if ((local_178.ArrayNum < 2) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            *(double *)(local_178.AllocatorInstance.Data + 0x10) = dVar13;
            *(double *)(local_178.AllocatorInstance.Data + 0x18) = (double)fVar1;
            if ((this->TicksColor).ColorUseRule == UseColor_ColorTable) {
              pFVar11 = FSlateColor::GetColorFromTable(&this->TicksColor);
              local_158._0_8_ = *(undefined8 *)&pFVar11->field0_0x0;
              local_158._8_8_ = *(undefined8 *)((longlong)&pFVar11->field0_0x0 + 8);
            }
            else {
              local_158._0_8_ = *(undefined8 *)&(this->TicksColor).SpecifiedColor.field0_0x0;
              local_158._8_8_ =
                   *(undefined8 *)((longlong)&(this->TicksColor).SpecifiedColor.field0_0x0 + 8);
            }
            local_110 = (param_1->AbsolutePosition).field0_0x0;
            local_e4 = (param_1->AccumulatedRenderTransform).Trans.field0_0x0;
            local_fc = param_1->Size;
            local_dc = param_1->bHasRenderTransform * '\x02' | local_dc & 0xfc;
            local_108 = param_1->Scale;
            local_f4 = (param_1->AccumulatedRenderTransform).M.M[0];
            afStack_ec = (param_1->AccumulatedRenderTransform).M.M[1];
            *param_3 = *param_3 + 1;
            local_104 = 0;
            FSlateDrawElement::MakeLines
                      (param_2,*param_3,(FPaintGeometry *)&local_110._s_0,&local_178,None,
                       (FLinearColor *)&local_158._s_0,false,fVar8);
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < (this->GridMetrics).NumMinorGridDivisions);
      }
      DrawTickTimeString(this,((int)ROUND((dVar3 + dVar3) / (this->GridMetrics).PixelsPerFrame +
                                          dVar9) >> 1) + (this->GridMetrics).StartFrame,dVar3,dVar6,
                         param_2,param_3,param_1);
      dVar3 = dVar3 + (this->GridMetrics).MajorGridXStep;
    } while (dVar3 < (double)*(float *)&param_1->Size);
  }
  if (local_178.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.AllocatorInstance.Data);
  }
  return;
}

// DrawTickTimeString @ 14d91b0a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SFixedSampledSequenceRuler::DrawTickTimeString
          (SFixedSampledSequenceRuler *this,uint param_1,double param_2,double param_3,
          FSlateWindowElementList *param_4,int *param_5,FGeometry *param_6)

{
  float fVar1;
  undefined1 uVar2;
  TVector2<float>_u_0_s_0 TVar3;
  FDeprecateSlateVector2D FVar4;
  FLinearColor *pFVar5;
  undefined1 auStackY_138 [32];
  FString local_f8;
  undefined8 local_e8;
  TTransform2<float> local_e0;
  float local_c8;
  float fStack_c4;
  FLinearColor_u_0 local_c0;
  TTransform2<float> local_b0;
  TVector2<float>_u_0 local_98;
  float local_90;
  undefined8 local_8c;
  FDeprecateSlateVector2D local_84;
  float local_7c [2];
  float afStack_74 [2];
  TVector2<float>_u_0 local_6c;
  byte local_64;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (this->DisplayUnit == Samples) {
    ::FString::PrintfImpl((FString *)&local_e0,L"%d");
  }
  else {
    ::FString::PrintfImpl((FString *)&local_e0,L"%.3f");
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  local_f8.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)CONCAT44(local_e0.M.M[0][1],local_e0.M.M[0][0]);
  fVar1 = this->TicksTextOffset;
  local_f8.Data.ArrayNum = (int)local_e0.M.M[1][0];
  local_f8.Data.ArrayMax = (int)local_e0.M.M[1][1];
  if ((this->TicksTextColor).ColorUseRule == UseColor_ColorTable) {
    pFVar5 = FSlateColor::GetColorFromTable(&this->TicksTextColor);
    local_c0._0_8_ = *(undefined8 *)&pFVar5->field0_0x0;
    local_c0._8_8_ = *(undefined8 *)((longlong)&pFVar5->field0_0x0 + 8);
  }
  else {
    local_c0._0_8_ = *(undefined8 *)&(this->TicksTextColor).SpecifiedColor.field0_0x0;
    local_c0._8_8_ =
         *(undefined8 *)((longlong)&(this->TicksTextColor).SpecifiedColor.field0_0x0 + 8);
  }
  TVar3 = (param_6->AbsolutePosition).field0_0x0._s_0;
  FVar4 = param_6->Size;
  local_e0.M.M[0][1] = TVar3.X;
  local_e0.M.M[1][0] = TVar3.Y;
  local_e8._0_4_ = (undefined4)((double)fVar1 + param_2);
  fVar1 = param_6->Scale;
  local_e8._4_4_ = (float)param_3;
  local_e0.Trans.field0_0x0 = local_e8;
  local_c8 = fVar1 * (float)(undefined4)local_e8 + local_e0.M.M[0][1];
  fStack_c4 = fVar1 * (float)param_3 + local_e0.M.M[1][0];
  local_e0.M.M[0][0] = (float)___xmm_3f80000000000000000000003f800000;
  local_e0.M.M[0][1] = (float)((ulonglong)___xmm_3f80000000000000000000003f800000 >> 0x20);
  local_e0.M.M[1][0] = (float)_UNK_15076b188;
  local_e0.M.M[1][1] = (float)((ulonglong)_UNK_15076b188 >> 0x20);
  Concatenate<TTransform2<float>_>(&local_b0,&local_e0,&param_6->AccumulatedRenderTransform);
  local_98._s_0.Y = fStack_c4;
  local_98._s_0.X = local_c8;
  *param_5 = *param_5 + 1;
  local_64 = param_6->bHasRenderTransform * '\x02' | local_64 & 0xfc;
  local_8c = 0;
  local_7c[0] = local_b0.M.M[0][0];
  local_7c[1] = local_b0.M.M[0][1];
  afStack_74[0] = local_b0.M.M[1][0];
  afStack_74[1] = local_b0.M.M[1][1];
  local_6c = local_b0.Trans.field0_0x0;
  local_90 = fVar1;
  local_84 = FVar4;
  FSlateDrawElement::MakeText
            (param_4,*param_5,(FPaintGeometry *)&local_98._s_0,&local_f8,&this->TicksTextFont,None,
             (FLinearColor *)&local_c0._s_0);
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  return;
}

// LaunchContextMenu @ 14d93f830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SFixedSampledSequenceRuler::LaunchContextMenu
          (SFixedSampledSequenceRuler *this,FReply *__return_storage_ptr__)

{
  FSlateApplication *this_00;
  FSlateApplication *pFVar1;
  FDeprecateVector2DParameter *pFVar2;
  TSharedRef<SWidget,1> *pTVar3;
  FWidgetPath *pFVar4;
  TSharedRef<SWidget,1> *pTVar5;
  ForElementType<FArrangedWidget> FVar6;
  undefined1 auStackY_238 [32];
  undefined1 local_1d8;
  undefined1 local_1d7;
  FPopupTransitionEffect local_1d4;
  TVector2<float>_u_0 local_1d0;
  FDeprecateVector2DParameter local_1c8;
  undefined1 local_1c0 [8];
  TSharedPtr<IMenu,1> local_1b8;
  TSharedRef<SWidget,1> local_1a8;
  TSharedRef<SWidget,1> local_198;
  FWidgetPath local_188;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_238;
  this_00 = FSlateApplication::Get();
  local_1d7 = 0;
  local_1d0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_1d4.SlideDirection = ContextMenu;
  pFVar1 = FSlateApplication::Get();
  pFVar2 = (FDeprecateVector2DParameter *)
           (**(code **)(*(longlong *)pFVar1 + 0x68))(pFVar1,local_1c0);
  local_1c8 = *pFVar2;
  pTVar3 = MakeContextMenu(this,&local_198);
  pFVar4 = FWidgetPath::FWidgetPath(&local_188);
  pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_1a8);
  FSlateApplication::PushMenu
            (this_00,&local_1b8,pTVar5,pFVar4,pTVar3,&local_1c8,&local_1d4,true,
             (FDeprecateVector2DParameter *)&local_1d0._s_0,SUB82(&local_1d8,0),true,-1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a8.SharedReferenceCount.ReferenceController);
  if (local_188.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.VirtualPointerPositions.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_188.TopLevelWindow.SharedReferenceCount.ReferenceController);
  FVar6 = (ForElementType<FArrangedWidget>)&local_188.Widgets.Array;
  if (local_188.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FVar6 = local_188.Widgets.Array.AllocatorInstance.SecondaryData;
  }
  DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar6,local_188.Widgets.Array.ArrayNum);
  if (local_188.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FMemory::Free((void *)local_188.Widgets.Array.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_198.SharedReferenceCount.ReferenceController);
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// MakeContextMenu @ 14d93fb60

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
SFixedSampledSequenceRuler::MakeContextMenu
          (SFixedSampledSequenceRuler *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  SWidget *pSVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ISlateStyle *pIVar5;
  FText *pFVar6;
  FName *pFVar7;
  FSlateIcon *pFVar8;
  undefined8 *puVar9;
  TSharedRef<SWidget,1> *pTVar10;
  ulong64 uVar11;
  FName FVar12;
  FName local_res10;
  FName local_res18;
  undefined1 local_3e8 [16];
  int local_3d8;
  longlong *local_3d0;
  TReferenceControllerBase<1> *pTStack_3c8;
  bool local_3c0;
  undefined1 local_3b8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_3b0;
  ForAnyElementType FStack_3a8;
  ulonglong local_3a0;
  undefined1 local_398 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_390;
  ForAnyElementType FStack_388;
  ulonglong local_380;
  undefined1 local_378 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_370;
  ForAnyElementType FStack_368;
  ulonglong local_360;
  undefined1 local_358 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_350;
  ForAnyElementType FStack_348;
  ulonglong local_340;
  undefined1 local_338 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_330;
  ForAnyElementType FStack_328;
  ulonglong local_320;
  undefined1 local_318 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_310;
  ForAnyElementType FStack_308;
  ulonglong local_300;
  int local_2f8;
  bool local_2f4;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2f0;
  ForAnyElementType FStack_2e8;
  ulonglong local_2e0;
  undefined1 local_2d8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2d0;
  ForAnyElementType FStack_2c8;
  ulonglong local_2c0;
  bool local_2b7;
  bool local_2b5;
  bool local_2b0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2a8;
  ForAnyElementType FStack_2a0;
  ulonglong local_298;
  TSharedPtr<FExtender,1> local_290;
  undefined1 local_280 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_268;
  ForAnyElementType FStack_260;
  ulonglong local_258;
  undefined1 local_250 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_238;
  ForAnyElementType FStack_230;
  ulonglong local_228;
  undefined1 local_220 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_208;
  ForAnyElementType FStack_200;
  ulonglong local_1f8;
  FMenuBuilder local_1f0;
  FDestructionSentinel local_68;
  undefined1 *local_50;
  FText local_48;
  
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  pIVar5 = FAppStyle::Get();
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_290.Object = (FExtender *)0x0;
  local_290.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_3d0 = (longlong *)0x0;
  pTStack_3c8 = (TReferenceControllerBase<1> *)0x0;
  FBaseMenuBuilder::FBaseMenuBuilder
            ((FBaseMenuBuilder *)&local_1f0,Menu,false,
             (TSharedPtr<FUICommandList_const_,1> *)&local_3d0,false,&local_290,pIVar5,(FName)0x0,
             (FName)0x0);
  local_1f0.CurrentSectionExtensionHook.ComparisonIndex.Value = 0;
  local_1f0.CurrentSectionExtensionHook.Number = 0;
  local_1f0._padding_ = (longlong)&___7FMenuBuilder__6B_;
  FText::FText(&local_1f0.CurrentSectionHeadingText);
  local_1f0.CurrentSectionVisibility.Value.Value.Value = (TEnumAsByte<EVisibility::Private>)0x19;
  local_1f0.CurrentSectionVisibility.bIsSet = false;
  local_1f0.CurrentSectionVisibility.Getter._16_8_ = 0;
  local_1f0.CurrentSectionVisibility.Getter._0_8_ = 0;
  local_1f0.CurrentSectionVisibility.Getter._8_8_ = 0;
  memset(&local_1f0.CurrentSectionResizeParams,0,200);
  local_1f0.CurrentSectionResizeParams.Value.ClippingPriority.Value = 0;
  local_1f0.CurrentSectionResizeParams.Value.ClippingPriority.Getter._16_8_ = 0;
  local_1f0.CurrentSectionResizeParams.Value.AllowClipping.Getter._16_8_ = 0;
  local_1f0.CurrentSectionResizeParams.Value.VisibleInOverflow.Getter._16_8_ = 0;
  local_1f0.CurrentSectionResizeParams.Value.Wrapping.Allow.Getter._16_8_ = 0;
  local_1f0.CurrentSectionResizeParams.Value.Wrapping.Priority.Getter._16_8_ = 0;
  local_1f0.CurrentSectionResizeParams.Value.Wrapping.Mode.Getter._16_8_ = 0;
  local_1f0.CurrentSectionResizeParams.Getter._16_8_ = 0;
  local_1f0.CurrentSectionResizeParams.Value.ClippingPriority.bIsSet = false;
  local_1f0.CurrentSectionResizeParams.Value.ClippingPriority.Getter._0_8_ = 0;
  local_1f0.CurrentSectionResizeParams.Value.ClippingPriority.Getter._8_8_ = 0;
  local_1f0.CurrentSectionResizeParams.Value.AllowClipping.Value = false;
  local_1f0.CurrentSectionResizeParams.Value.AllowClipping.bIsSet = false;
  local_1f0.CurrentSectionResizeParams.Value.AllowClipping.Getter._0_8_ = 0;
  local_1f0.CurrentSectionResizeParams.Value.AllowClipping.Getter._8_8_ = 0;
  local_1f0.CurrentSectionResizeParams.Value.VisibleInOverflow.Value = false;
  local_1f0.CurrentSectionResizeParams.Value.VisibleInOverflow.bIsSet = false;
  local_1f0.CurrentSectionResizeParams.Value.VisibleInOverflow.Getter._0_8_ = 0;
  local_1f0.CurrentSectionResizeParams.Value.VisibleInOverflow.Getter._8_8_ = 0;
  local_1f0.CurrentSectionResizeParams.Value.Wrapping.Allow.Value = false;
  local_1f0.CurrentSectionResizeParams.Value.Wrapping.Allow.bIsSet = false;
  local_1f0.CurrentSectionResizeParams.Value.Wrapping.Allow.Getter._0_8_ = 0;
  local_1f0.CurrentSectionResizeParams.Value.Wrapping.Allow.Getter._8_8_ = 0;
  local_1f0.CurrentSectionResizeParams.Value.Wrapping.Priority.Value = 0;
  local_1f0.CurrentSectionResizeParams.Value.Wrapping.Priority.bIsSet = false;
  local_1f0.CurrentSectionResizeParams.Value.Wrapping.Priority.Getter._0_8_ = 0;
  local_1f0.CurrentSectionResizeParams.Value.Wrapping.Priority.Getter._8_8_ = 0;
  local_1f0.CurrentSectionResizeParams.Value.Wrapping.Mode.Value = Preferred;
  local_1f0.CurrentSectionResizeParams.Value.Wrapping.Mode.bIsSet = false;
  local_1f0.CurrentSectionResizeParams.Value.Wrapping.Mode.Getter._0_8_ = 0;
  local_1f0.CurrentSectionResizeParams.Value.Wrapping.Mode.Getter._8_8_ = 0;
  local_1f0.CurrentSectionResizeParams.Value.Wrapping.VerticalOverflowBehavior.bIsSet = false;
  local_1f0.CurrentSectionResizeParams.Value.Wrapping.ForceNewLine.bIsSet = false;
  local_1f0.CurrentSectionResizeParams.bIsSet = false;
  local_1f0.CurrentSectionResizeParams.Getter._0_8_ = 0;
  local_1f0.CurrentSectionResizeParams.Getter._8_8_ = 0;
  local_1f0.bSectionNeedsToBeApplied = false;
  local_1f0.bSearchable = true;
  local_1f0.bRecursivelySearchable = true;
  local_1f0.bIsEditing = false;
  FMenuBuilder::AddSearchWidget(&local_1f0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  memset(local_378,0,200);
  local_2f8 = 0;
  local_360 = 0;
  local_340 = 0;
  local_320 = 0;
  local_300 = 0;
  local_2e0 = 0;
  local_2c0 = 0;
  local_298 = 0;
  local_3a0 = 0;
  local_370.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_368.Data = (FScriptContainerElement *)0x0;
  local_358[0] = false;
  local_358[1] = false;
  local_350.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_348.Data = (FScriptContainerElement *)0x0;
  local_338[0] = false;
  local_338[1] = false;
  local_330.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_328.Data = (FScriptContainerElement *)0x0;
  local_318[0] = false;
  local_318[1] = false;
  local_310.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_308.Data = (FScriptContainerElement *)0x0;
  local_2f4 = false;
  local_2f0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2e8.Data = (FScriptContainerElement *)0x0;
  local_2d8[0] = Preferred;
  local_2d8[1] = false;
  local_2d0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2c8.Data = (FScriptContainerElement *)0x0;
  local_2b7 = false;
  local_2b5 = false;
  local_2b0 = false;
  local_2a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2a0.Data = (FScriptContainerElement *)0x0;
  local_3b8[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_3b8[1] = false;
  local_3b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_3a8.Data = (FScriptContainerElement *)0x0;
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_3d0,L"WaveformEditorTimeRuler",L"RulerOptionsHeading",
                      L"Options");
  FText::FText((FText *)local_280,pFVar6);
  local_280[0x10] = true;
  local_258 = 0;
  local_268.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_260.Data = (FScriptContainerElement *)0x0;
  pFVar7 = ::FName::FName(&local_res10,"Ruler Options");
  FMenuBuilder::BeginSection
            (&local_1f0,*pFVar7,(TAttribute<FText> *)local_280,(TAttribute<EVisibility> *)local_3b8,
             (TAttribute<FMenuEntryResizeParams> *)local_378);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_268,(FWriteAccessScope *)local_3e8);
  if (((int)local_258 != 0) && (FStack_260.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_260.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_260,0,0,0x10);
    local_258 = local_258 & 0xffffffff00000000;
  }
  if (local_3d8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_3e8._8_8_,(FDestructionSentinel *)local_3e8);
  }
  if (FStack_260.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_260.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_268.AccessDetector);
  if ((FName)local_280._0_8_ != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_280._0_8_ + 0x10))();
  }
  if ((FUICommandList *)local_3d0 != (FUICommandList *)0x0) {
    (**(code **)(*local_3d0 + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_3b0,(FWriteAccessScope *)local_3e8);
  if (((int)local_3a0 != 0) && (FStack_3a8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3a8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3a8,0,0,0x10);
    local_3a0 = local_3a0 & 0xffffffff00000000;
  }
  if (local_3d8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_3e8._8_8_,(FDestructionSentinel *)local_3e8);
  }
  if (FStack_3a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3a8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_3b0.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2a8,(FWriteAccessScope *)local_3e8);
  if (((int)local_298 != 0) && (FStack_2a0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2a0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2a0,0,0,0x10);
    local_298 = local_298 & 0xffffffff00000000;
  }
  if (local_3d8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_3e8._8_8_,(FDestructionSentinel *)local_3e8);
  }
  if (FStack_2a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2a0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2a8.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2d0,(FWriteAccessScope *)local_3e8);
  if (((int)local_2c0 != 0) && (FStack_2c8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2c8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2c8,0,0,0x10);
    local_2c0 = local_2c0 & 0xffffffff00000000;
  }
  if (local_3d8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_3e8._8_8_,(FDestructionSentinel *)local_3e8);
  }
  if (FStack_2c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2c8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2d0.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2f0,(FWriteAccessScope *)local_3e8);
  if (((int)local_2e0 != 0) && (FStack_2e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2e8,0,0,0x10);
    local_2e0 = local_2e0 & 0xffffffff00000000;
  }
  if (local_3d8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_3e8._8_8_,(FDestructionSentinel *)local_3e8);
  }
  if (FStack_2e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2f0.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_310,(FWriteAccessScope *)local_3e8);
  if (((int)local_300 != 0) && (FStack_308.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_308.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_308,0,0,0x10);
    local_300 = local_300 & 0xffffffff00000000;
  }
  if (local_3d8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_3e8._8_8_,(FDestructionSentinel *)local_3e8);
  }
  if (FStack_308.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_308.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_310.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_330,(FWriteAccessScope *)local_3e8);
  if (((int)local_320 != 0) && (FStack_328.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_328.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_328,0,0,0x10);
    local_320 = local_320 & 0xffffffff00000000;
  }
  if (local_3d8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_3e8._8_8_,(FDestructionSentinel *)local_3e8);
  }
  if (FStack_328.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_328.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_330.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_350,(FWriteAccessScope *)local_3e8);
  if (((int)local_340 != 0) && (FStack_348.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_348.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_348,0,0,0x10);
    local_340 = local_340 & 0xffffffff00000000;
  }
  if (local_3d8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_3e8._8_8_,(FDestructionSentinel *)local_3e8);
  }
  if (FStack_348.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_348.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_350.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_370,(FWriteAccessScope *)local_3e8);
  if (((int)local_360 != 0) && (FStack_368.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_368.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_368,0,0,0x10);
    local_360 = local_360 & 0xffffffff00000000;
  }
  if (local_3d8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_3e8._8_8_,(FDestructionSentinel *)local_3e8);
  }
  if (FStack_368.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_368.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_370.AccessDetector);
  local_398[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_398[1] = false;
  local_380 = 0;
  local_390.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_388.Data = (FScriptContainerElement *)0x0;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  pFVar8 = FSlateIcon::FSlateIcon((FSlateIcon *)local_280);
  local_3e8._0_8_ = (atomic<unsigned___int64>)0x0;
  local_3e8._8_8_ = (atomic<unsigned___int64> *)0x0;
  local_3d8 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3e8,
             (FWriteAccessScope *)&local_68);
  local_50 = local_3e8 + 8;
  puVar9 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)(local_3e8 + 8));
  FVar12 = local_res10;
  if (puVar9 != (undefined8 *)0x0) {
    local_290.Object = (FExtender *)MakeTimeUnitsSubMenu;
    local_290.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)
         ((ulonglong)local_3b0.AccessDetector.State & 0xffffffff00000000);
    pTVar10 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->field_0x8,
                         (TSharedRef<SWidget,1> *)&local_3d0);
    FVar12 = (FName)(pTVar10->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar10->Object;
    if (FVar12 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar12 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar12 + 8) + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)((longlong)FVar12 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar12 + 8) + 1);
      UNLOCK();
    }
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar11;
    *puVar9 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSFixedSampledSequenceRuler___00__A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar9[3] = pSVar1;
    *(FName *)(puVar9 + 4) = FVar12;
    if (FVar12 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar12 + 0xc) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar12 + 0xc) + 1);
      UNLOCK();
    }
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    puVar9[5] = local_290.Object;
    puVar9[6] = local_290.SharedReferenceCount.ReferenceController;
  }
  if (bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar12);
  }
  if (bVar3) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar12);
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_3c8)
    ;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)local_3b8,L"WaveformEditorTimeRuler",L"TimeUnitsSubMenuLabelToolTip",
                      L"Select the time unit shown by the grid");
  FText::FText((FText *)local_220,pFVar6);
  local_220[0x10] = true;
  local_1f8 = 0;
  local_208.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_200.Data = (FScriptContainerElement *)0x0;
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"WaveformEditorTimeRuler",L"TimeUnitsSubMenuLabel",L"Time Unit");
  FText::FText((FText *)local_250,pFVar6);
  local_250[0x10] = true;
  local_228 = 0;
  local_238.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_230.Data = (FScriptContainerElement *)0x0;
  FMenuBuilder::AddSubMenu
            (&local_1f0,(TAttribute<FText> *)local_250,(TAttribute<FText> *)local_220,
             (TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *)local_3e8,false,
             pFVar8,true,local_res18,local_res10,(TAttribute<EVisibility> *)local_398);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_238,(FWriteAccessScope *)&local_3d0);
  if (((int)local_228 != 0) && (FStack_230.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_230.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_230,0,0,0x10);
    local_228 = local_228 & 0xffffffff00000000;
  }
  if (local_3c0 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_3c8,(FDestructionSentinel *)&local_3d0);
  }
  if (FStack_230.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_230.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_238.AccessDetector);
  if ((ITextData *)local_250._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_250._0_8_ + 0x10))();
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_208,(FWriteAccessScope *)&local_3d0);
  if (((int)local_1f8 != 0) && (FStack_200.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_200.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_200,0,0,0x10);
    local_1f8 = local_1f8 & 0xffffffff00000000;
  }
  if (local_3c0 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_3c8,(FDestructionSentinel *)&local_3d0);
  }
  if (FStack_200.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_200.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_208.AccessDetector);
  if ((ITextData *)local_220._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_220._0_8_ + 0x10))();
  }
  if ((longlong *)CONCAT62(local_3b8._2_6_,local_3b8._0_2_) != (longlong *)0x0) {
    (**(code **)(*(longlong *)CONCAT62(local_3b8._2_6_,local_3b8._0_2_) + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3e8,
             (FWriteAccessScope *)&local_3d0);
  if ((local_3d8 != 0) &&
     ((FMRSWRecursiveAccessDetector *)local_3e8._8_8_ != (FMRSWRecursiveAccessDetector *)0x0)) {
    (**(code **)*(atomic<unsigned___int64> *)local_3e8._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)(local_3e8 + 8),0,0,0x10);
    local_3d8 = 0;
  }
  if (local_3c0 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_3c8,(FDestructionSentinel *)&local_3d0);
  }
  if ((FMRSWRecursiveAccessDetector *)local_3e8._8_8_ != (FMRSWRecursiveAccessDetector *)0x0) {
    FMemory::Free((void *)local_3e8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3e8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_390,(FWriteAccessScope *)&local_3d0);
  if (((int)local_380 != 0) && (FStack_388.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_388.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_388,0,0,0x10);
    local_380 = local_380 & 0xffffffff00000000;
  }
  if (local_3c0 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_3c8,(FDestructionSentinel *)&local_3d0);
  }
  if (FStack_388.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_388.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_390.AccessDetector);
  FMenuBuilder::EndSection(&local_1f0);
  FMenuBuilder::MakeWidget
            (&local_1f0,__return_storage_ptr__,
             (TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
              *)0x0);
  FMenuBuilder::~FMenuBuilder(&local_1f0);
  return __return_storage_ptr__;
}

// MakeTimeUnitsSubMenu @ 14d945090

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu
          (SFixedSampledSequenceRuler *this,FMenuBuilder *param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar3;
  FUIAction *pFVar4;
  FSlateIcon *pFVar5;
  FText *pFVar6;
  ulonglong local_res8;
  undefined1 local_328 [16];
  undefined4 local_318;
  FDelegateAllocation *local_310;
  undefined1 local_308 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_300;
  ForAnyElementType FStack_2f8;
  ulonglong local_2f0;
  code *local_2e8;
  FMRSWRecursiveAccessDetector *pFStack_2e0;
  bool local_2d8;
  FDelegateAllocation *local_2d0;
  undefined1 local_2c8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2b0;
  ForAnyElementType FStack_2a8;
  ulonglong local_2a0;
  undefined1 local_298 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_280;
  ForAnyElementType FStack_278;
  ulonglong local_270;
  undefined1 local_268 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_250;
  ForAnyElementType FStack_248;
  ulonglong local_240;
  undefined1 local_238 [8];
  FDelegateAllocation local_230;
  undefined1 local_220 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_218;
  ForAnyElementType FStack_210;
  ulonglong local_208;
  code *local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1e0;
  ForAnyElementType FStack_1d8;
  ulonglong local_1d0;
  undefined1 local_1c8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1c0;
  ForAnyElementType FStack_1b8;
  ulonglong local_1b0;
  undefined1 local_1a8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1a0;
  ForAnyElementType FStack_198;
  ulonglong local_190;
  undefined1 local_188 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_180;
  ForAnyElementType FStack_178;
  ulonglong local_170;
  int local_168;
  bool local_164;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_160;
  ForAnyElementType FStack_158;
  ulonglong local_150;
  undefined1 local_148 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_140;
  ForAnyElementType FStack_138;
  ulonglong local_130;
  bool local_127;
  bool local_125;
  bool local_120;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_118;
  ForAnyElementType FStack_110;
  ulonglong local_108;
  undefined1 local_100 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_e8;
  ForAnyElementType FStack_e0;
  ulonglong local_d8;
  undefined1 local_d0 [8];
  FDelegateAllocation local_c8;
  FText local_b8;
  undefined1 local_a8 [24];
  undefined1 local_90 [24];
  undefined1 local_78 [24];
  undefined1 local_60 [40];
  
  memset(local_1e8,0,200);
  local_220[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_220[1] = false;
  local_1d0 = 0;
  local_1b0 = 0;
  local_190 = 0;
  local_170 = 0;
  local_150 = 0;
  local_130 = 0;
  local_108 = 0;
  local_208 = 0;
  local_1e0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1d8.Data = (FScriptContainerElement *)0x0;
  local_1c8[0] = false;
  local_1c8[1] = false;
  local_1c0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1b8.Data = (FScriptContainerElement *)0x0;
  local_1a8[0] = false;
  local_1a8[1] = false;
  local_1a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_198.Data = (FScriptContainerElement *)0x0;
  local_188[0] = false;
  local_188[1] = false;
  local_180.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_178.Data = (FScriptContainerElement *)0x0;
  local_168 = 0;
  local_164 = false;
  local_160.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_158.Data = (FScriptContainerElement *)0x0;
  local_148[0] = Preferred;
  local_148[1] = false;
  local_140.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_138.Data = (FScriptContainerElement *)0x0;
  local_127 = false;
  local_125 = false;
  local_120 = false;
  local_118.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_110.Data = (FScriptContainerElement *)0x0;
  local_218.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_210.Data = (FScriptContainerElement *)0x0;
  FText::FText((FText *)local_100);
  local_100[0x10] = false;
  local_d8 = 0;
  local_res8 = 0;
  local_e8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_e0.Data = (FScriptContainerElement *)0x0;
  FMenuBuilder::BeginSection
            (param_1,(FName)0x0,(TAttribute<FText> *)local_100,(TAttribute<EVisibility> *)local_220,
             (TAttribute<FMenuEntryResizeParams> *)local_1e8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_e8,(FWriteAccessScope *)local_328);
  if (((int)local_d8 != 0) && (FStack_e0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_e0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_e0,0,0,0x10);
    local_d8 = local_d8 & 0xffffffff00000000;
  }
  if (local_318._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_328._8_8_,(FDestructionSentinel *)local_328);
  }
  if (FStack_e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_e0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_e8.AccessDetector);
  if ((FName)local_100._0_8_ != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_100._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_218,(FWriteAccessScope *)local_328);
  if (((int)local_208 != 0) && (FStack_210.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_210.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_210,0,0,0x10);
    local_208 = local_208 & 0xffffffff00000000;
  }
  if (local_318._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_328._8_8_,(FDestructionSentinel *)local_328);
  }
  if (FStack_210.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_210.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_218.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_118,(FWriteAccessScope *)local_328);
  if (((int)local_108 != 0) && (FStack_110.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_110.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_110,0,0,0x10);
    local_108 = local_108 & 0xffffffff00000000;
  }
  if (local_318._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_328._8_8_,(FDestructionSentinel *)local_328);
  }
  if (FStack_110.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_110.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_118.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_140,(FWriteAccessScope *)local_328);
  if (((int)local_130 != 0) && (FStack_138.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_138.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_138,0,0,0x10);
    local_130 = local_130 & 0xffffffff00000000;
  }
  if (local_318._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_328._8_8_,(FDestructionSentinel *)local_328);
  }
  if (FStack_138.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_138.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_140.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_160,(FWriteAccessScope *)local_328);
  if (((int)local_150 != 0) && (FStack_158.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_158.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_158,0,0,0x10);
    local_150 = local_150 & 0xffffffff00000000;
  }
  if (local_318._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_328._8_8_,(FDestructionSentinel *)local_328);
  }
  if (FStack_158.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_158.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_160.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_180,(FWriteAccessScope *)local_328);
  if (((int)local_170 != 0) && (FStack_178.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_178.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_178,0,0,0x10);
    local_170 = local_170 & 0xffffffff00000000;
  }
  if (local_318._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_328._8_8_,(FDestructionSentinel *)local_328);
  }
  if (FStack_178.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_178.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_180.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1a0,(FWriteAccessScope *)local_328);
  if (((int)local_190 != 0) && (FStack_198.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_198.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_198,0,0,0x10);
    local_190 = local_190 & 0xffffffff00000000;
  }
  if (local_318._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_328._8_8_,(FDestructionSentinel *)local_328);
  }
  if (FStack_198.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_198.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1a0.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1c0,(FWriteAccessScope *)local_328);
  if (((int)local_1b0 != 0) && (FStack_1b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1b8,0,0,0x10);
    local_1b0 = local_1b0 & 0xffffffff00000000;
  }
  if (local_318._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_328._8_8_,(FDestructionSentinel *)local_328);
  }
  if (FStack_1b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1c0.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1e0,(FWriteAccessScope *)local_328);
  if (((int)local_1d0 != 0) && (FStack_1d8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1d8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1d8,0,0,0x10);
    local_1d0 = local_1d0 & 0xffffffff00000000;
  }
  if (local_318._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_328._8_8_,(FDestructionSentinel *)local_328);
  }
  if (FStack_1d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1d8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1e0.AccessDetector);
  local_308[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_308[1] = false;
  local_2f0 = 0;
  local_300.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2f8.Data = (FScriptContainerElement *)0x0;
  FText::FText((FText *)local_268);
  local_268[0x10] = false;
  local_240 = 0;
  local_250.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_248.Data = (FScriptContainerElement *)0x0;
  local_d0 = (undefined1  [8])0x0;
  local_c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_c8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d0,
             (FWriteAccessScope *)local_328);
  local_310 = &local_c8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_c8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = this;
  }
  if (local_318._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_328._8_8_,(FDestructionSentinel *)local_328);
  }
  local_238 = (undefined1  [8])0x0;
  local_230.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_230.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_238,
             (FWriteAccessScope *)local_328);
  local_310 = &local_230;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_230);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = this;
  }
  if (local_318._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_328._8_8_,(FDestructionSentinel *)local_328);
  }
  uStack_1f0 = (FMRSWRecursiveAccessDetector *)((ulonglong)uStack_1f0._4_4_ << 0x20);
  local_1f8 = NotifyTimeUnitMenuSelection;
  local_res8 = CONCAT44(local_res8._4_4_,1);
  pTVar3 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
           CreateSP<SFixedSampledSequenceRuler,enum_ESampledSequenceDisplayUnit>
                     ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_220,this,
                      (pmf_eade3243 *)&local_1f8,(ESampledSequenceDisplayUnit *)&local_res8);
  pFVar4 = FUIAction::FUIAction
                     ((FUIAction *)local_a8,pTVar3,
                      (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_238,
                      (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_d0,
                      RepeatDisabled);
  pFVar5 = FSlateIcon::FSlateIcon((FSlateIcon *)local_100);
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_2e8,L"WaveformEditorTimeRuler",
                      L"TimeUnitsSubMenuEntry_Seconds",L"Seconds");
  FText::FText((FText *)local_298,pFVar6);
  local_298[0x10] = true;
  local_270 = 0;
  local_280.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_278.Data = (FScriptContainerElement *)0x0;
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_b8,L"WaveformEditorTimeRuler",L"TimeUnitsSubMenuEntry_Seconds",
                      L"Seconds");
  FText::FText((FText *)local_2c8,pFVar6);
  local_2c8[0x10] = true;
  local_2a0 = 0;
  local_2b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2a8.Data = (FScriptContainerElement *)0x0;
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)param_1,(TAttribute<FText> *)local_2c8,
             (TAttribute<FText> *)local_298,pFVar5,pFVar4,(FName)0x0,ToggleButton,(FName)0x0,
             (TAttribute<FText> *)local_268,(TAttribute<EVisibility> *)local_308);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2b0,(FWriteAccessScope *)local_328);
  if (((int)local_2a0 != 0) && (FStack_2a8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2a8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2a8,0,0,0x10);
    local_2a0 = local_2a0 & 0xffffffff00000000;
  }
  if (local_318._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_328._8_8_,(FDestructionSentinel *)local_328);
  }
  if (FStack_2a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2a8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2b0.AccessDetector);
  if ((ITextData *)local_2c8._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_2c8._0_8_ + 0x10))();
  }
  if (local_b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_280,(FWriteAccessScope *)local_328);
  if (((int)local_270 != 0) && (FStack_278.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_278.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_278,0,0,0x10);
    local_270 = local_270 & 0xffffffff00000000;
  }
  if (local_318._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_328._8_8_,(FDestructionSentinel *)local_328);
  }
  if (FStack_278.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_278.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_280.AccessDetector);
  if ((ITextData *)local_298._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_298._0_8_ + 0x10))();
  }
  if ((ITextData *)local_2e8 != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_2e8 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_60);
  if ((void *)local_60._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_60._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_60);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_78);
  if ((void *)local_78._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_78._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_78);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_90);
  if ((void *)local_90._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_90._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_90);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_a8);
  if ((void *)local_a8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_a8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_250,(FWriteAccessScope *)local_328);
  if (((int)local_240 != 0) && (FStack_248.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_248.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_248,0,0,0x10);
    local_240 = local_240 & 0xffffffff00000000;
  }
  if (local_318._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_328._8_8_,(FDestructionSentinel *)local_328);
  }
  if (FStack_248.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_248.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_250.AccessDetector);
  if ((ITextData *)local_268._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_268._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_300,(FWriteAccessScope *)local_328);
  if (((int)local_2f0 != 0) && (FStack_2f8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2f8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2f8,0,0,0x10);
    local_2f0 = local_2f0 & 0xffffffff00000000;
  }
  if (local_318._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_328._8_8_,(FDestructionSentinel *)local_328);
  }
  if (FStack_2f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2f8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_300.AccessDetector);
  local_308[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_308[1] = false;
  local_2f0 = 0;
  local_300.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2f8.Data = (FScriptContainerElement *)0x0;
  FText::FText((FText *)local_2c8);
  local_2c8[0x10] = false;
  local_2a0 = 0;
  local_2b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2a8.Data = (FScriptContainerElement *)0x0;
  local_238 = (undefined1  [8])0x0;
  local_230.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_230.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_238,
             (FWriteAccessScope *)&local_2e8);
  local_2d0 = &local_230;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_230);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::`2'::<lambda_4>_>
               ::_vftable_;
    puVar1[3] = this;
  }
  if (local_2d8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(pFStack_2e0,(FDestructionSentinel *)&local_2e8)
    ;
  }
  local_328._0_8_ = (atomic<unsigned___int64>)0x0;
  local_328._8_8_ = (FMRSWRecursiveAccessDetector *)0x0;
  local_318._0_1_ = false;
  local_318._1_3_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_328,
             (FWriteAccessScope *)&local_2e8);
  local_2d0 = (FDelegateAllocation *)(local_328 + 8);
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)(local_328 + 8));
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = this;
  }
  if (local_2d8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(pFStack_2e0,(FDestructionSentinel *)&local_2e8)
    ;
  }
  local_1f8 = NotifyTimeUnitMenuSelection;
  uStack_1f0 = (FMRSWRecursiveAccessDetector *)((ulonglong)uStack_1f0 & 0xffffffff00000000);
  local_2e8 = NotifyTimeUnitMenuSelection;
  pFStack_2e0 = uStack_1f0;
  local_res8 = local_res8 & 0xffffffff00000000;
  pTVar3 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
           CreateSP<SFixedSampledSequenceRuler,enum_ESampledSequenceDisplayUnit>
                     ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_220,this,
                      (pmf_eade3243 *)&local_2e8,(ESampledSequenceDisplayUnit *)&local_res8);
  pFVar4 = FUIAction::FUIAction
                     ((FUIAction *)local_a8,pTVar3,
                      (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_328,
                      (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_238,
                      RepeatDisabled);
  pFVar5 = FSlateIcon::FSlateIcon((FSlateIcon *)local_100);
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)local_d0,L"WaveformEditorTimeRuler",L"TimeUnitsSubMenuEntry_Frames",
                      L"Frames");
  FText::FText((FText *)local_298,pFVar6);
  local_298[0x10] = true;
  local_270 = 0;
  local_280.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_278.Data = (FScriptContainerElement *)0x0;
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_b8,L"WaveformEditorTimeRuler",L"TimeUnitsSubMenuEntry_Frames",L"Frames"
                     );
  FText::FText((FText *)local_268,pFVar6);
  local_268[0x10] = true;
  local_240 = 0;
  local_250.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_248.Data = (FScriptContainerElement *)0x0;
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)param_1,(TAttribute<FText> *)local_268,
             (TAttribute<FText> *)local_298,pFVar5,pFVar4,(FName)0x0,ToggleButton,(FName)0x0,
             (TAttribute<FText> *)local_2c8,(TAttribute<EVisibility> *)local_308);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_250,(FWriteAccessScope *)&local_2e8);
  if (((int)local_240 != 0) && (FStack_248.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_248.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_248,0,0,0x10);
    local_240 = local_240 & 0xffffffff00000000;
  }
  if (local_2d8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(pFStack_2e0,(FDestructionSentinel *)&local_2e8)
    ;
  }
  if (FStack_248.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_248.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_250.AccessDetector);
  if ((ITextData *)local_268._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_268._0_8_ + 0x10))();
  }
  if (local_b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_280,(FWriteAccessScope *)&local_2e8);
  if (((int)local_270 != 0) && (FStack_278.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_278.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_278,0,0,0x10);
    local_270 = local_270 & 0xffffffff00000000;
  }
  if (local_2d8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(pFStack_2e0,(FDestructionSentinel *)&local_2e8)
    ;
  }
  if (FStack_278.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_278.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_280.AccessDetector);
  if ((ITextData *)local_298._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_298._0_8_ + 0x10))();
  }
  if ((atomic<unsigned___int64>)local_d0 != (atomic<unsigned___int64>)0x0) {
    (**(code **)(*(longlong *)local_d0 + 0x10))();
  }
  FUIAction::~FUIAction((FUIAction *)local_a8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2b0,(FWriteAccessScope *)&local_2e8);
  if (((int)local_2a0 != 0) && (FStack_2a8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2a8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2a8,0,0,0x10);
    local_2a0 = local_2a0 & 0xffffffff00000000;
  }
  if (local_2d8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(pFStack_2e0,(FDestructionSentinel *)&local_2e8)
    ;
  }
  if (FStack_2a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2a8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2b0.AccessDetector);
  if ((ITextData *)local_2c8._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_2c8._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_300,(FWriteAccessScope *)&local_2e8);
  if (((int)local_2f0 != 0) && (FStack_2f8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2f8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2f8,0,0,0x10);
    local_2f0 = local_2f0 & 0xffffffff00000000;
  }
  if (local_2d8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(pFStack_2e0,(FDestructionSentinel *)&local_2e8)
    ;
  }
  if (FStack_2f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2f8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_300.AccessDetector);
  FMenuBuilder::EndSection(param_1);
  return;
}

// NotifyTimeUnitMenuSelection @ 14d949ef0

void __thiscall
SFixedSampledSequenceRuler::NotifyTimeUnitMenuSelection
          (SFixedSampledSequenceRuler *this,ESampledSequenceDisplayUnit param_1)

{
  undefined1 *puVar1;
  TMulticastDelegate<void___cdecl(ESampledSequenceDisplayUnit),FDefaultDelegateUserPolicy> *this_00;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_38;
  
  if (param_1 != this->DisplayUnit) {
    this_00 = &this->OnTimeUnitMenuSelection;
    bVar5 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
    if (bVar5) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FWriteAccessScope *)&local_38);
      puVar1 = &(this->OnTimeUnitMenuSelection).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar5 = false;
      uVar9 = *(int *)&(this->OnTimeUnitMenuSelection).field_0x10 - 1;
      if (-1 < (int)uVar9) {
        lVar10 = (longlong)(int)uVar9 << 4;
        bVar5 = false;
        do {
          uVar8 = 0;
          if ((int)uVar9 < *(int *)&(this->OnTimeUnitMenuSelection).field_0x10) {
            uVar8 = ~uVar9 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar2 = *(longlong *)&(this->OnTimeUnitMenuSelection).field_0x8;
          if (((*(int *)(lVar10 + 8 + lVar2) == 0) ||
              (plVar3 = *(longlong **)(lVar10 + lVar2), plVar3 == (longlong *)0x0)) ||
             (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
            bVar5 = true;
          }
          lVar10 = lVar10 + -0x10;
          uVar9 = uVar9 - 1;
        } while (-1 < (int)uVar9);
      }
      puVar1 = &(this->OnTimeUnitMenuSelection).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar5) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
      }
      if (local_38.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
      }
    }
  }
  return;
}

// OnPaint @ 14d955390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SFixedSampledSequenceRuler::OnPaint
          (SFixedSampledSequenceRuler *this,FPaintArgs *param_1,FGeometry *param_2,
          FSlateRect *param_3,FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,
          bool param_7)

{
  float fVar1;
  undefined1 uVar2;
  TVector2<float>_u_0_s_0 TVar3;
  int iVar4;
  FLinearColor *pFVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined1 auStackY_e8 [32];
  ulonglong local_b8;
  FLinearColor_u_0 local_b0;
  ulonglong local_a0;
  float local_98;
  float fStack_94;
  float local_90;
  undefined4 uStack_8c;
  TTransform2<float> local_88;
  TVector2<float>_u_0 local_70;
  float local_68;
  undefined8 local_64;
  FDeprecateSlateVector2D local_5c;
  float local_54 [2];
  float afStack_4c [2];
  TVector2<float>_u_0 local_44;
  byte local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  if ((this->BackgroundColor).ColorUseRule == UseColor_ColorTable) {
    pFVar5 = FSlateColor::GetColorFromTable(&this->BackgroundColor);
    uVar6 = *(undefined8 *)&pFVar5->field0_0x0;
    uVar7 = *(undefined8 *)((longlong)&pFVar5->field0_0x0 + 8);
  }
  else {
    uVar6 = *(undefined8 *)&(this->BackgroundColor).SpecifiedColor.field0_0x0;
    uVar7 = *(undefined8 *)((longlong)&(this->BackgroundColor).SpecifiedColor.field0_0x0 + 8);
  }
  local_70 = (param_2->AbsolutePosition).field0_0x0;
  local_44 = (param_2->AccumulatedRenderTransform).Trans.field0_0x0;
  local_5c = param_2->Size;
  param_5 = param_5 + 1;
  local_b0._s_0.R = (float)uVar6;
  local_b0._s_0.G = (float)((ulonglong)uVar6 >> 0x20);
  local_b0._s_0.B = (float)uVar7;
  local_b0._s_0.A = (float)((ulonglong)uVar7 >> 0x20);
  local_64 = 0;
  local_68 = param_2->Scale;
  local_3c = param_2->bHasRenderTransform * '\x02' | local_3c & 0xfc;
  local_54 = (param_2->AccumulatedRenderTransform).M.M[0];
  afStack_4c = (param_2->AccumulatedRenderTransform).M.M[1];
  FSlateDrawElement::MakeBox
            (param_4,param_5,(FPaintGeometry *)&local_70._s_0,&this->BackgroundBrush,None,
             (FLinearColor *)&local_b0._s_0);
  DrawRulerTicks(this,param_2,param_4,&param_5);
  if (this->bDisplayPlayhead != false) {
    TVar3 = (param_2->AbsolutePosition).field0_0x0._s_0;
    local_b0._s_0.G = TVar3.X;
    local_b0._s_0.B = TVar3.Y;
    fVar1 = param_2->Scale;
    fVar8 = this->PlayheadPosition - this->HandleWidth * __real_3f000000;
    local_b8 = (ulonglong)(uint)fVar8;
    local_a0 = local_b8;
    local_90 = (fVar8 + this->HandleWidth) - fVar8;
    fStack_94 = fVar1 * 0.0 + local_b0._s_0.B;
    uStack_8c = *(undefined4 *)&(param_2->Size).field_0x4;
    local_98 = fVar1 * fVar8 + local_b0._s_0.G;
    local_b0._s_0.R = (float)___xmm_3f80000000000000000000003f800000;
    local_b0._s_0.G = (float)((ulonglong)___xmm_3f80000000000000000000003f800000 >> 0x20);
    local_b0._s_0.B = (float)_UNK_15076b188;
    local_b0._s_0.A = (float)((ulonglong)_UNK_15076b188 >> 0x20);
    Concatenate<TTransform2<float>_>
              (&local_88,(TTransform2<float> *)&local_b0._s_0,&param_2->AccumulatedRenderTransform);
    local_70._s_0.Y = fStack_94;
    local_70._s_0.X = local_98;
    local_5c = (FDeprecateSlateVector2D)CONCAT44(uStack_8c,local_90);
    local_3c = param_2->bHasRenderTransform * '\x02' | local_3c & 0xfc;
    local_64 = 0;
    local_54[0] = local_88.M.M[0][0];
    local_54[1] = local_88.M.M[0][1];
    afStack_4c[0] = local_88.M.M[1][0];
    afStack_4c[1] = local_88.M.M[1][1];
    local_44 = local_88.Trans.field0_0x0;
    local_68 = fVar1;
    if ((this->HandleColor).ColorUseRule == UseColor_ColorTable) {
      pFVar5 = FSlateColor::GetColorFromTable(&this->HandleColor);
      uVar6 = *(undefined8 *)&pFVar5->field0_0x0;
      uVar7 = *(undefined8 *)((longlong)&pFVar5->field0_0x0 + 8);
    }
    else {
      uVar6 = *(undefined8 *)&(this->HandleColor).SpecifiedColor.field0_0x0;
      uVar7 = *(undefined8 *)((longlong)&(this->HandleColor).SpecifiedColor.field0_0x0 + 8);
    }
    iVar4 = param_5;
    local_b0._s_0.R = (float)uVar6;
    local_b0._s_0.G = (float)((ulonglong)uVar6 >> 0x20);
    local_b0._s_0.B = (float)uVar7;
    local_b0._s_0.A = (float)((ulonglong)uVar7 >> 0x20);
    FSlateDrawElement::MakeBox
              (param_4,param_5,(FPaintGeometry *)&local_70._s_0,&this->HandleBrush,None,
               (FLinearColor *)&local_b0._s_0);
    param_5 = iVar4 + 1;
  }
  return param_5;
}

// OnStyleUpdated @ 14d958250

void __thiscall
SFixedSampledSequenceRuler::OnStyleUpdated
          (SFixedSampledSequenceRuler *this,FFixedSampleSequenceRulerStyle *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  EStyleColor EVar3;
  undefined2 uVar4;
  
  uVar2 = *(undefined8 *)((longlong)&(param_1->HandleColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->HandleColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->HandleColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->HandleColor).SpecifiedColor.field0_0x0 + 8) = uVar2;
  EVar3 = (param_1->HandleColor).ColorTableId;
  uVar4 = *(undefined2 *)&(param_1->HandleColor).field_0x12;
  (this->HandleColor).ColorUseRule = (param_1->HandleColor).ColorUseRule;
  (this->HandleColor).ColorTableId = EVar3;
  *(undefined2 *)&(this->HandleColor).field_0x12 = uVar4;
  this->HandleWidth = param_1->HandleWidth;
  FSlateBrush::operator=(&this->HandleBrush,&param_1->HandleBrush);
  uVar2 = *(undefined8 *)((longlong)&(param_1->BackgroundColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->BackgroundColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->BackgroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->BackgroundColor).SpecifiedColor.field0_0x0 + 8) = uVar2;
  EVar3 = (param_1->BackgroundColor).ColorTableId;
  uVar4 = *(undefined2 *)&(param_1->BackgroundColor).field_0x12;
  (this->BackgroundColor).ColorUseRule = (param_1->BackgroundColor).ColorUseRule;
  (this->BackgroundColor).ColorTableId = EVar3;
  *(undefined2 *)&(this->BackgroundColor).field_0x12 = uVar4;
  FSlateBrush::operator=(&this->BackgroundBrush,&param_1->BackgroundBrush);
  uVar2 = *(undefined8 *)((longlong)&(param_1->TicksColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->TicksColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->TicksColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->TicksColor).SpecifiedColor.field0_0x0 + 8) = uVar2;
  EVar3 = (param_1->TicksColor).ColorTableId;
  uVar4 = *(undefined2 *)&(param_1->TicksColor).field_0x12;
  (this->TicksColor).ColorUseRule = (param_1->TicksColor).ColorUseRule;
  (this->TicksColor).ColorTableId = EVar3;
  *(undefined2 *)&(this->TicksColor).field_0x12 = uVar4;
  uVar2 = *(undefined8 *)((longlong)&(param_1->TicksTextColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->TicksTextColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->TicksTextColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->TicksTextColor).SpecifiedColor.field0_0x0 + 8) = uVar2;
  EVar3 = (param_1->TicksTextColor).ColorTableId;
  uVar4 = *(undefined2 *)&(param_1->TicksTextColor).field_0x12;
  (this->TicksTextColor).ColorUseRule = (param_1->TicksTextColor).ColorUseRule;
  (this->TicksTextColor).ColorTableId = EVar3;
  *(undefined2 *)&(this->TicksTextColor).field_0x12 = uVar4;
  FSlateFontInfo::operator=(&this->TicksTextFont,&param_1->TicksTextFont);
  this->DesiredWidth = param_1->DesiredWidth;
  this->DesiredHeight = param_1->DesiredHeight;
  this->TicksTextOffset = param_1->TicksTextOffset;
  pTVar1 = (param_1->BackgroundBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (param_1->BackgroundBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->TicksTextFont).CompositeFont.SharedReferenceCount.ReferenceController);
  pTVar1 = (param_1->HandleBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (param_1->HandleBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)param_1);
  return;
}

// SetPlayheadPosition @ 14d96bad0

void __thiscall
SFixedSampledSequenceRuler::SetPlayheadPosition(SFixedSampledSequenceRuler *this,float param_1)

{
  this->PlayheadPosition = param_1;
  return;
}

// UpdateDisplayUnit @ 14d979480

void __thiscall
SFixedSampledSequenceRuler::UpdateDisplayUnit
          (SFixedSampledSequenceRuler *this,ESampledSequenceDisplayUnit param_1)

{
  this->DisplayUnit = param_1;
  return;
}

// UpdateGridMetrics @ 14d979940

void __thiscall SFixedSampledSequenceRuler::UpdateGridMetrics(SFixedSampledSequenceRuler *this)

{
  IFixedSampledSequenceGridService *pIVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined1 local_38 [48];
  
  if ((this->GridService).Object == (IFixedSampledSequenceGridService *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("GridService",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SFixedSampledSequenceRuler.cpp"
                       ,0xd1,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->GridService).Object == (IFixedSampledSequenceGridService *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->GridService).Object;
  puVar7 = (undefined8 *)(**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_38);
  uVar3 = *puVar7;
  uVar4 = puVar7[1];
  (this->GridMetrics).NumMinorGridDivisions = (int)uVar3;
  (this->GridMetrics).SampleRate = (int)((ulonglong)uVar3 >> 0x20);
  *(undefined8 *)&(this->GridMetrics).StartFrame = uVar4;
  dVar5 = (double)puVar7[3];
  (this->GridMetrics).PixelsPerFrame = (double)puVar7[2];
  (this->GridMetrics).FirstMajorTickX = dVar5;
  (this->GridMetrics).MajorGridXStep = (double)puVar7[4];
  return;
}

