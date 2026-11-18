// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 8

// FFixedSampledSequenceGridData @ 14d8b5c90

FFixedSampledSequenceGridData * __thiscall
FFixedSampledSequenceGridData::FFixedSampledSequenceGridData
          (FFixedSampledSequenceGridData *this,uint param_1,uint param_2,FSlateFontInfo *param_3,
          float param_4)

{
  float fVar1;
  TRangeBound<unsigned_int> TVar2;
  TRangeBound<unsigned_int> TVar3;
  uint local_res8;
  undefined4 local_18;
  
  this->_padding_ = (longlong)&___7FFixedSampledSequenceGridData__6B_;
  *(undefined8 *)&(this->OnGridMetricsUpdated).field_0x18 = 2;
  *(undefined8 *)&this->OnGridMetricsUpdated = 0;
  *(undefined8 *)&(this->OnGridMetricsUpdated).field_0x8 = 0;
  *(undefined8 *)&(this->OnGridMetricsUpdated).field_0x10 = 0;
  (this->GridMetrics).NumMinorGridDivisions = 0;
  (this->GridMetrics).SampleRate = 0;
  (this->GridMetrics).StartFrame = 0;
  (this->GridMetrics).PixelsPerFrame = 0.0;
  (this->GridMetrics).FirstMajorTickX = 0.0;
  (this->GridMetrics).MajorGridXStep = 0.0;
  this->TotalFrames = 0;
  local_res8 = CONCAT31(local_res8._1_3_,1);
  TVar2.Value = 0;
  TVar2._0_4_ = local_res8;
  (this->DisplayRange).LowerBound = TVar2;
  local_18 = CONCAT31(local_18._1_3_,1);
  TVar3.Value = param_1;
  TVar3._0_4_ = local_18;
  (this->DisplayRange).UpperBound = TVar3;
  this->GridSizePixels = param_4;
  FSlateFontInfo::FSlateFontInfo(&this->TicksTimeFont,param_3);
  fVar1 = this->GridSizePixels;
  (this->GridFrameRate).Numerator = param_2;
  (this->GridFrameRate).Denominator = 1;
  UpdateGridMetrics(this,fVar1);
  return this;
}

// FFixedSampledSequenceGridData @ 14d8b5d50

FFixedSampledSequenceGridData * __thiscall
FFixedSampledSequenceGridData::FFixedSampledSequenceGridData
          (FFixedSampledSequenceGridData *this,uint param_1,uint param_2,float param_3,
          FSlateFontInfo *param_4)

{
  TRangeBound<unsigned_int> TVar1;
  TRangeBound<unsigned_int> TVar2;
  uint local_res8;
  undefined4 local_18;
  
  *(undefined8 *)&(this->OnGridMetricsUpdated).field_0x18 = 2;
  this->_padding_ = (longlong)&___7FFixedSampledSequenceGridData__6B_;
  this->TotalFrames = param_1;
  *(undefined8 *)&this->OnGridMetricsUpdated = 0;
  *(undefined8 *)&(this->OnGridMetricsUpdated).field_0x8 = 0;
  *(undefined8 *)&(this->OnGridMetricsUpdated).field_0x10 = 0;
  (this->GridMetrics).NumMinorGridDivisions = 0;
  (this->GridMetrics).SampleRate = 0;
  (this->GridMetrics).StartFrame = 0;
  (this->GridMetrics).PixelsPerFrame = 0.0;
  (this->GridMetrics).FirstMajorTickX = 0.0;
  (this->GridMetrics).MajorGridXStep = 0.0;
  local_res8 = CONCAT31(local_res8._1_3_,1);
  TVar1.Value = 0;
  TVar1._0_4_ = local_res8;
  (this->DisplayRange).LowerBound = TVar1;
  local_18 = CONCAT31(local_18._1_3_,1);
  TVar2.Value = param_1;
  TVar2._0_4_ = local_18;
  (this->DisplayRange).UpperBound = TVar2;
  this->GridSizePixels = param_3;
  FSlateFontInfo::FSlateFontInfo(&this->TicksTimeFont);
  (this->GridFrameRate).Numerator = param_2;
  (this->GridFrameRate).Denominator = 1;
  if (param_4 != (FSlateFontInfo *)0x0) {
    FSlateFontInfo::operator=(&this->TicksTimeFont,param_4);
  }
  UpdateGridMetrics(this,this->GridSizePixels);
  return this;
}

// GetGridMetrics @ 14d92ee90

FFixedSampledSequenceGridMetrics * __thiscall
FFixedSampledSequenceGridData::GetGridMetrics
          (FFixedSampledSequenceGridData *this,
          FFixedSampledSequenceGridMetrics *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  
  uVar4 = (this->GridMetrics).SampleRate;
  uVar5 = (this->GridMetrics).StartFrame;
  uVar6 = *(undefined4 *)&(this->GridMetrics).field_0xc;
  dVar2 = (this->GridMetrics).PixelsPerFrame;
  dVar3 = (this->GridMetrics).FirstMajorTickX;
  __return_storage_ptr__->NumMinorGridDivisions = (this->GridMetrics).NumMinorGridDivisions;
  __return_storage_ptr__->SampleRate = uVar4;
  __return_storage_ptr__->StartFrame = uVar5;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar6;
  dVar1 = (this->GridMetrics).MajorGridXStep;
  __return_storage_ptr__->PixelsPerFrame = dVar2;
  __return_storage_ptr__->FirstMajorTickX = dVar3;
  __return_storage_ptr__->MajorGridXStep = dVar1;
  return __return_storage_ptr__;
}

// SetTicksTimeFont @ 14d96ddb0

void __thiscall
FFixedSampledSequenceGridData::SetTicksTimeFont
          (FFixedSampledSequenceGridData *this,FSlateFontInfo *param_1)

{
  FSlateFontInfo::operator=(&this->TicksTimeFont,param_1);
  UpdateGridMetrics(this,this->GridSizePixels);
  return;
}

// SetTicksTimeFont @ 14d96dde0

void __thiscall
FFixedSampledSequenceGridData::SetTicksTimeFont
          (FFixedSampledSequenceGridData *this,FSlateFontInfo *param_1)

{
  if (param_1 != (FSlateFontInfo *)0x0) {
    FSlateFontInfo::operator=(&this->TicksTimeFont,param_1);
    return;
  }
  return;
}

// SnapPositionToClosestFrame @ 14d9702a0

float __thiscall
FFixedSampledSequenceGridData::SnapPositionToClosestFrame
          (FFixedSampledSequenceGridData *this,float param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = FGenericPlatformMath::Fmod((double)param_1,(this->GridMetrics).PixelsPerFrame);
  dVar1 = (this->GridMetrics).PixelsPerFrame;
  dVar3 = (double)(float)dVar2;
  if (dVar1 * __real_3fe0000000000000 < dVar3) {
    return (float)((dVar1 - dVar3) + (double)param_1);
  }
  return param_1 - (float)dVar2;
}

// UpdateDisplayRange @ 14d979180

void __thiscall
FFixedSampledSequenceGridData::UpdateDisplayRange
          (FFixedSampledSequenceGridData *this,TRange<unsigned_int> *param_1)

{
  float fVar1;
  uchar uVar2;
  code *pcVar3;
  TRangeBound<unsigned_int> TVar4;
  bool bVar5;
  uint uVar6;
  
  uVar6 = TRange<unsigned_int>::Size<unsigned_int>(&this->DisplayRange);
  if ((uVar6 < 2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DisplayRange.Size<uint32>() >= 2",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\FixedSampledSequenceGridData.cpp"
                         ,0x22,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar5 = TRange<unsigned_int>::IsEmpty(param_1);
  if ((bVar5) && (bVar5 = TRange<unsigned_int>::IsEmpty(&this->DisplayRange), bVar5)) {
    return;
  }
  uVar2 = (param_1->LowerBound).Type.Value;
  if (((uVar2 != (this->DisplayRange).LowerBound.Type.Value) ||
      (((uVar2 != '\x02' && ((param_1->LowerBound).Value != (this->DisplayRange).LowerBound.Value))
       || (uVar2 = (param_1->UpperBound).Type.Value,
          uVar2 != (this->DisplayRange).UpperBound.Type.Value)))) ||
     ((uVar2 != '\x02' && ((param_1->UpperBound).Value != (this->DisplayRange).UpperBound.Value))))
  {
    TVar4 = param_1->UpperBound;
    fVar1 = this->GridSizePixels;
    (this->DisplayRange).LowerBound = param_1->LowerBound;
    (this->DisplayRange).UpperBound = TVar4;
    UpdateGridMetrics(this,fVar1);
  }
  return;
}

// UpdateGridMetrics @ 14d979490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
FFixedSampledSequenceGridData::UpdateGridMetrics(FFixedSampledSequenceGridData *this,float param_1)

{
  TRangeBound<unsigned_int> *pTVar1;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  FSlateApplication *pFVar12;
  FDeprecateSlateVector2D FVar13;
  uint uVar14;
  longlong lVar15;
  double dVar16;
  float in_XMM3_Da;
  double dVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  double local_res8;
  TStringView<wchar_t> local_res18;
  FString local_c8;
  FScriptContainerElement *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  TSharedRef<FSlateFontMeasure,1> local_a8;
  TObjectPtr<UObject_const_>_u_0 local_98;
  undefined8 uStack_90;
  FDestructionSentinel local_88 [4];
  
  if (param_1 != this->GridSizePixels) {
    this->GridSizePixels = param_1;
  }
  if (((this->DisplayRange).LowerBound.Type.Value == '\x02') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  pTVar1 = &(this->DisplayRange).UpperBound;
  uVar14 = (this->DisplayRange).LowerBound.Value;
  iVar3 = (this->GridFrameRate).Numerator;
  if (((this->DisplayRange).LowerBound.Type.Value == '\x02') || ((pTVar1->Type).Value == '\x02')) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("LowerBound.IsClosed() && UpperBound.IsClosed()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Range.h"
                       ,0x1ad,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    if (((pTVar1->Type).Value == '\x02') &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
  }
  uVar11 = (this->DisplayRange).UpperBound.Value;
  if (((this->DisplayRange).LowerBound.Type.Value == '\x02') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  uVar18 = 0;
  uVar19 = 0;
  local_res8 = 0.0;
  dVar17 = ((double)(this->GridFrameRate).Numerator * (double)this->GridSizePixels) /
           ((double)(uVar11 - (this->DisplayRange).LowerBound.Value) - __real_3ff0000000000000);
  pFVar12 = FSlateApplication::Get();
  lVar15 = *(longlong *)&pFVar12->field_0x60;
  if ((*(longlong *)(lVar15 + 8) == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  FSlateFontServices::GetFontMeasureService(*(FSlateFontServices **)(lVar15 + 8),&local_a8);
  if (((this->DisplayRange).UpperBound.Type.Value == '\x02') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  ::FString::PrintfImpl(&local_c8,L"%.3f");
  local_b8 = local_c8.Data.AllocatorInstance.Data;
  iStack_b0 = local_c8.Data.ArrayNum + -1;
  if (local_c8.Data.ArrayNum == 0) {
    iStack_b0 = 0;
  }
  uStack_90 = CONCAT44(uStack_ac,iStack_b0);
  local_98.DebugPtr = (UObject *)local_c8.Data.AllocatorInstance.Data;
  FVar13 = FSlateFontMeasure::Measure
                     (local_a8.Object,&local_res18,(FSlateFontInfo *)&local_98.ObjectPtr,in_XMM3_Da)
  ;
  bVar7 = FFrameRate::ComputeGridSpacing
                    (&this->GridFrameRate,(float)dVar17,&local_res8,
                     &(this->GridMetrics).NumMinorGridDivisions,*(float *)FVar13 + __real_40a00000,
                     __real_42f00000);
  if (bVar7) {
    uVar11 = TRange<unsigned_int>::Size<unsigned_int>(&this->DisplayRange);
    if (this->GridSizePixels <= (float)uVar11) {
      dVar16 = FGenericPlatformMath::Fmod((double)uVar14 / (double)iVar3,local_res8);
      uVar18 = SUB84(dVar16,0);
      uVar19 = (undefined4)((ulonglong)dVar16 >> 0x20);
    }
    dVar16 = dVar17 * (double)CONCAT44(uVar19,uVar18);
    (this->GridMetrics).MajorGridXStep = dVar17 * local_res8;
    (this->GridMetrics).FirstMajorTickX =
         (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) ^
                          __xmm_80000000000000008000000000000000._4_4_,
                          SUB84(dVar16,0) ^ (uint)__xmm_80000000000000008000000000000000);
    if (((this->DisplayRange).LowerBound.Type.Value == '\x02') &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    this_00 = &this->OnGridMetricsUpdated;
    (this->GridMetrics).StartFrame = (this->DisplayRange).LowerBound.Value;
    uVar14 = (this->GridFrameRate).Numerator;
    (this->GridMetrics).SampleRate = uVar14;
    (this->GridMetrics).PixelsPerFrame = dVar17 / (double)(int)uVar14;
    bVar7 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
    if (bVar7) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FWriteAccessScope *)local_88);
      puVar2 = &(this->OnGridMetricsUpdated).field_0x1c;
      *(int *)puVar2 = *(int *)puVar2 + 1;
      bVar7 = false;
      uVar14 = *(int *)&(this->OnGridMetricsUpdated).field_0x10 - 1;
      if (-1 < (int)uVar14) {
        lVar15 = (longlong)(int)uVar14 << 4;
        bVar7 = false;
        do {
          uVar11 = 0;
          if ((int)uVar14 < *(int *)&(this->OnGridMetricsUpdated).field_0x10) {
            uVar11 = ~uVar14 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          lVar4 = *(longlong *)&(this->OnGridMetricsUpdated).field_0x8;
          if (((*(int *)(lVar4 + 8 + lVar15) == 0) ||
              (plVar5 = *(longlong **)(lVar4 + lVar15), plVar5 == (longlong *)0x0)) ||
             (cVar10 = (**(code **)(*plVar5 + 0x68))(), cVar10 == '\0')) {
            bVar7 = true;
          }
          lVar15 = lVar15 + -0x10;
          uVar14 = uVar14 - 1;
        } while (-1 < (int)uVar14);
      }
      puVar2 = &(this->OnGridMetricsUpdated).field_0x1c;
      *(int *)puVar2 = *(int *)puVar2 + -1;
      if (bVar7) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
      }
      if (local_88[0].bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88[0].Accessor,local_88);
      }
    }
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.SharedReferenceCount.ReferenceController);
  return bVar7;
}

