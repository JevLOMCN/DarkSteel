// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 12

// AddBand<Audio::FSpectrumBandExtractor::FCQTBandSpec> @ 1444e9240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001444e949c) */
/* WARNING: Removing unreachable block (ram,0x0001444e94aa) */

FCQTBandSpec * __thiscall
Audio::FSpectrumBandExtractor::AddBand<Audio::FSpectrumBandExtractor::FCQTBandSpec>
          (FSpectrumBandExtractor *this,
          TArray<Audio::FSpectrumBandExtractor::FCQTBandSpec,TSizedDefaultAllocator<32>_> *param_1,
          FBandSettings *param_2)

{
  EFFTScaling EVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FCQTBandSpec *pFVar6;
  float fVar7;
  undefined1 auStackY_e8 [32];
  undefined **local_98;
  undefined8 local_90;
  float local_88;
  undefined4 local_84;
  float local_80;
  int local_78 [2];
  TArray<float,TAlignedHeapAllocator<16>_> local_70;
  ForAnyElementType local_60;
  int local_58 [4];
  FPseudoConstantQBandSettings local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_84 = (**(code **)(this->_padding_ + 0x20))();
  local_88 = param_2->QFactor;
  local_48.FFTSize = (this->SpectrumSettings).FFTSize;
  local_90._0_1_ = param_2->Type;
  local_90._1_3_ = *(undefined3 *)&param_2->field_0x1;
  local_90._4_4_ = param_2->CenterFrequency;
  EVar1 = (this->SpectrumSettings).FFTScaling;
  local_98 = &___7FCQTBandSpec_FSpectrumBandExtractor_Audio__6B_;
  local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_80 = (float)local_48.FFTSize;
  if ((float)local_48.FFTSize <= __real_3f800000) {
    local_80 = __real_3f800000;
  }
  if (EVar1 == None) {
LAB_1444e92fb:
    local_80 = 1.0;
  }
  else {
    if (EVar1 == MultipliedByFFTSize) {
      local_80 = local_80 * local_80;
    }
    else if (EVar1 != MultipliedBySqrtFFTSize) {
      if (EVar1 == DividedByFFTSize) {
        local_80 = local_80 * local_80;
        goto LAB_1444e9302;
      }
      if (EVar1 == DividedBySqrtFFTSize) goto LAB_1444e9302;
      goto LAB_1444e92fb;
    }
    local_80 = __real_3f800000 / local_80;
  }
LAB_1444e9302:
  fVar7 = local_88;
  if (local_88 <= __real_322bcc77) {
    fVar7 = __real_322bcc77;
  }
  local_48.CenterFreq = (float)local_90._4_4_;
  local_48.Normalization = EqualEnergy;
  local_78[0] = 0;
  local_70.ArrayNum = 0;
  local_70.ArrayMax = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_48.SampleRate = (this->SpectrumSettings).SampleRate;
  local_48.BandWidth = (float)local_90._4_4_ / fVar7;
  if ((float)local_90._4_4_ / fVar7 <= __real_322bcc77) {
    local_48.BandWidth = __real_322bcc77;
  }
  if (local_48.SampleRate <= __real_3f800000) {
    local_48.SampleRate = __real_3f800000;
  }
  FPseudoConstantQ::FillArrayWithConstantQBand(&local_48,&local_70,local_78);
  if (0 < local_70.ArrayNum) {
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,local_70.ArrayNum,&local_60,local_58,local_58 + 1);
  }
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_98) &&
      ((FScriptContainerElement *)&local_98 < pFVar2 + (longlong)param_1->ArrayMax * 0x48)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FCQTBandSpec *)(*pcVar3)();
    return pFVar6;
  }
  iVar5 = param_1->ArrayNum;
  if (iVar5 == param_1->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x848,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar5 + 1;
  pFVar2 = (param_1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar2 + (longlong)iVar5 * 0x48 + 8) = local_90;
  pFVar6 = (FCQTBandSpec *)(pFVar2 + (longlong)iVar5 * 0x48);
  *(float *)&pFVar6->_padding_ = local_88;
  pFVar6->_padding_ = (longlong)&___7FBandSpec_FSpectrumBandExtractor_Audio__6B_;
  *(undefined4 *)((longlong)&pFVar6->_padding_ + 4) = local_84;
  *(float *)&pFVar6->_padding_ = local_80;
  pFVar6->_padding_ = (longlong)&___7FCQTBandSpec_FSpectrumBandExtractor_Audio__6B_;
  (pFVar6->Weights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar6->StartIndex = local_78[0];
  (pFVar6->Weights).AllocatorInstance.Data = local_70.AllocatorInstance.Data;
  (pFVar6->Weights).ArrayNum = local_70.ArrayNum;
  (pFVar6->Weights).ArrayMax = local_70.ArrayMax;
  (pFVar6->WorkBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar6->WorkBuffer).AllocatorInstance.Data = local_60.Data;
  (pFVar6->WorkBuffer).ArrayNum = local_58[0];
  (pFVar6->WorkBuffer).ArrayMax = local_58[1];
  return pFVar6;
}

// AddBand<Audio::FSpectrumBandExtractor::FLerpBandSpec> @ 1444e94e0

FLerpBandSpec * __thiscall
Audio::FSpectrumBandExtractor::AddBand<Audio::FSpectrumBandExtractor::FLerpBandSpec>
          (FSpectrumBandExtractor *this,
          TArray<Audio::FSpectrumBandExtractor::FLerpBandSpec,TSizedDefaultAllocator<32>_> *param_1,
          FBandSettings *param_2)

{
  float fVar1;
  EFFTScaling EVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  FLerpBandSpec *pFVar8;
  int iVar9;
  float fVar10;
  undefined **local_38;
  undefined8 local_30;
  float local_28;
  undefined4 local_24;
  float local_20;
  int local_18;
  int local_14;
  float local_10;
  
  local_24 = (**(code **)(this->_padding_ + 0x20))();
  local_30._0_1_ = param_2->Type;
  local_30._1_3_ = *(undefined3 *)&param_2->field_0x1;
  local_30._4_4_ = param_2->CenterFrequency;
  local_28 = param_2->QFactor;
  iVar7 = (this->SpectrumSettings).FFTSize;
  EVar2 = (this->SpectrumSettings).FFTScaling;
  local_38 = &___7FLerpBandSpec_FSpectrumBandExtractor_Audio__6B_;
  fVar10 = (float)iVar7;
  local_20 = fVar10;
  if (fVar10 <= __real_3f800000) {
    local_20 = __real_3f800000;
  }
  if (EVar2 == None) {
LAB_1444e9580:
    local_20 = 1.0;
  }
  else {
    if (EVar2 == MultipliedByFFTSize) {
      local_20 = local_20 * local_20;
    }
    else if (EVar2 != MultipliedBySqrtFFTSize) {
      if (EVar2 == DividedByFFTSize) {
        local_20 = local_20 * local_20;
        goto LAB_1444e9588;
      }
      if (EVar2 == DividedBySqrtFFTSize) goto LAB_1444e9588;
      goto LAB_1444e9580;
    }
    local_20 = __real_3f800000 / local_20;
  }
LAB_1444e9588:
  fVar1 = (this->SpectrumSettings).SampleRate;
  if (fVar1 <= __real_3f800000) {
    fVar1 = __real_3f800000;
  }
  iVar7 = iVar7 / 2;
  fVar10 = ((float)local_30._4_4_ / fVar1) * fVar10;
  iVar9 = (int)ROUND((fVar10 + fVar10) - __real_3f000000) >> 1;
  iVar5 = iVar7;
  if (iVar9 < iVar7) {
    iVar5 = iVar9;
  }
  local_18 = 0;
  if (0 < iVar5) {
    local_18 = iVar5;
  }
  if (iVar9 + 1 < iVar7) {
    iVar7 = iVar9 + 1;
  }
  pFVar3 = (param_1->AllocatorInstance).Data;
  local_14 = 0;
  if (0 < iVar7) {
    local_14 = iVar7;
  }
  local_10 = fVar10 - (float)iVar9;
  if (__real_3f800000 <= fVar10 - (float)iVar9) {
    local_10 = __real_3f800000;
  }
  if (local_10 <= 0.0) {
    local_10 = 0.0;
  }
  if (((pFVar3 <= (FScriptContainerElement *)&local_38) &&
      ((FScriptContainerElement *)&local_38 < pFVar3 + (longlong)param_1->ArrayMax * 0x30)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FLerpBandSpec *)(*pcVar4)();
    return pFVar8;
  }
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  pFVar8 = (FLerpBandSpec *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x30);
  pFVar8->_padding_ = local_30;
  *(float *)&pFVar8->_padding_ = local_28;
  pFVar8->_padding_ = (longlong)&___7FBandSpec_FSpectrumBandExtractor_Audio__6B_;
  *(undefined4 *)((longlong)&pFVar8->_padding_ + 4) = local_24;
  pFVar8->_padding_ = (longlong)&___7FLerpBandSpec_FSpectrumBandExtractor_Audio__6B_;
  *(float *)&pFVar8->_padding_ = local_20;
  pFVar8->LowerIndex = local_18;
  pFVar8->UpperIndex = local_14;
  pFVar8->Alpha = local_10;
  return pFVar8;
}

// AddBand<Audio::FSpectrumBandExtractor::FNNBandSpec> @ 1444e9720

FNNBandSpec * __thiscall
Audio::FSpectrumBandExtractor::AddBand<Audio::FSpectrumBandExtractor::FNNBandSpec>
          (FSpectrumBandExtractor *this,
          TArray<Audio::FSpectrumBandExtractor::FNNBandSpec,TSizedDefaultAllocator<32>_> *param_1,
          FBandSettings *param_2)

{
  EFFTScaling EVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FNNBandSpec *pFVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  undefined **local_38;
  undefined8 local_30;
  float local_28;
  undefined4 local_24;
  float local_20;
  int local_18;
  
  local_24 = (**(code **)(this->_padding_ + 0x20))();
  local_30._0_1_ = param_2->Type;
  local_30._1_3_ = *(undefined3 *)&param_2->field_0x1;
  local_30._4_4_ = param_2->CenterFrequency;
  local_28 = param_2->QFactor;
  iVar5 = (this->SpectrumSettings).FFTSize;
  EVar1 = (this->SpectrumSettings).FFTScaling;
  local_38 = &___7FNNBandSpec_FSpectrumBandExtractor_Audio__6B_;
  fVar9 = (float)iVar5;
  local_20 = fVar9;
  if (fVar9 <= __real_3f800000) {
    local_20 = __real_3f800000;
  }
  if (EVar1 == None) {
LAB_1444e97c0:
    local_20 = 1.0;
  }
  else {
    if (EVar1 == MultipliedByFFTSize) {
      local_20 = local_20 * local_20;
    }
    else if (EVar1 != MultipliedBySqrtFFTSize) {
      if (EVar1 == DividedByFFTSize) {
        local_20 = local_20 * local_20;
        goto LAB_1444e97c8;
      }
      if (EVar1 == DividedBySqrtFFTSize) goto LAB_1444e97c8;
      goto LAB_1444e97c0;
    }
    local_20 = __real_3f800000 / local_20;
  }
LAB_1444e97c8:
  fVar8 = (this->SpectrumSettings).SampleRate;
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (fVar8 <= __real_3f800000) {
    fVar8 = __real_3f800000;
  }
  iVar5 = iVar5 / 2;
  iVar7 = (int)ROUND(((float)local_30._4_4_ / fVar8) * (fVar9 + fVar9) + __real_3f000000) >> 1;
  if (iVar7 < iVar5) {
    iVar5 = iVar7;
  }
  local_18 = 0;
  if (0 < iVar5) {
    local_18 = iVar5;
  }
  if (((pFVar2 <= (FScriptContainerElement *)&local_38) &&
      ((FScriptContainerElement *)&local_38 < pFVar2 + (longlong)param_1->ArrayMax * 0x28)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FNNBandSpec *)(*pcVar3)();
    return pFVar6;
  }
  iVar5 = param_1->ArrayNum;
  if (iVar5 == param_1->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar5 + 1;
  pFVar2 = (param_1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar2 + (longlong)iVar5 * 0x28 + 8) = local_30;
  pFVar6 = (FNNBandSpec *)(pFVar2 + (longlong)iVar5 * 0x28);
  *(float *)&pFVar6->_padding_ = local_28;
  pFVar6->_padding_ = (longlong)&___7FBandSpec_FSpectrumBandExtractor_Audio__6B_;
  *(undefined4 *)((longlong)&pFVar6->_padding_ + 4) = local_24;
  pFVar6->_padding_ = (longlong)&___7FNNBandSpec_FSpectrumBandExtractor_Audio__6B_;
  *(float *)&pFVar6->_padding_ = local_20;
  pFVar6->Index = local_18;
  return pFVar6;
}

// AddBand<Audio::FSpectrumBandExtractor::FQuadraticBandSpec> @ 1444e9900

FQuadraticBandSpec * __thiscall
Audio::FSpectrumBandExtractor::AddBand<Audio::FSpectrumBandExtractor::FQuadraticBandSpec>
          (FSpectrumBandExtractor *this,
          TArray<Audio::FSpectrumBandExtractor::FQuadraticBandSpec,TSizedDefaultAllocator<32>_>
          *param_1,FBandSettings *param_2)

{
  int iVar1;
  EFFTScaling EVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  FQuadraticBandSpec *pFVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  undefined **local_68;
  undefined8 local_60;
  float local_58;
  undefined4 local_54;
  float local_50;
  int local_48;
  int local_44;
  int local_40;
  float local_3c;
  float local_38;
  float local_34;
  
  local_54 = (**(code **)(this->_padding_ + 0x20))();
  local_60._0_1_ = param_2->Type;
  local_60._1_3_ = *(undefined3 *)&param_2->field_0x1;
  local_60._4_4_ = param_2->CenterFrequency;
  iVar7 = (this->SpectrumSettings).FFTSize;
  EVar2 = (this->SpectrumSettings).FFTScaling;
  local_68 = &___7FQuadraticBandSpec_FSpectrumBandExtractor_Audio__6B_;
  fVar10 = (float)iVar7;
  local_50 = fVar10;
  if (fVar10 <= __real_3f800000) {
    local_50 = __real_3f800000;
  }
  if (EVar2 == None) {
LAB_1444e99aa:
    local_50 = 1.0;
  }
  else {
    if (EVar2 == MultipliedByFFTSize) {
      local_50 = local_50 * local_50;
    }
    else if (EVar2 != MultipliedBySqrtFFTSize) {
      if (EVar2 == DividedByFFTSize) {
        local_50 = local_50 * local_50;
        goto LAB_1444e99b1;
      }
      if (EVar2 == DividedBySqrtFFTSize) goto LAB_1444e99b1;
      goto LAB_1444e99aa;
    }
    local_50 = __real_3f800000 / local_50;
  }
LAB_1444e99b1:
  local_58 = param_2->QFactor;
  if (__real_461c4000 <= param_2->QFactor) {
    local_58 = __real_461c4000;
  }
  iVar7 = iVar7 / 2;
  if (local_58 <= __real_38d1b717) {
    local_58 = __real_38d1b717;
  }
  fVar11 = (this->SpectrumSettings).SampleRate;
  if (fVar11 <= __real_3f800000) {
    fVar11 = __real_3f800000;
  }
  fVar10 = ((float)local_60._4_4_ / fVar11) * fVar10;
  iVar9 = (int)ROUND(fVar10 + fVar10 + __real_3f000000) >> 1;
  iVar1 = iVar9 + -1;
  iVar5 = iVar7;
  if (iVar1 < iVar7) {
    iVar5 = iVar1;
  }
  local_40 = 0;
  local_48 = local_40;
  if (0 < iVar5) {
    local_48 = iVar5;
  }
  fVar11 = fVar10 - (float)iVar1;
  iVar5 = iVar7;
  if (iVar9 < iVar7) {
    iVar5 = iVar9;
  }
  local_44 = local_40;
  if (0 < iVar5) {
    local_44 = iVar5;
  }
  if (iVar9 + 1 < iVar7) {
    iVar7 = iVar9 + 1;
  }
  if (0 < iVar7) {
    local_40 = iVar7;
  }
  pFVar3 = (param_1->AllocatorInstance).Data;
  local_38 = ((float)iVar1 - fVar10) * (fVar11 - __real_40000000);
  local_34 = (fVar11 - __real_3f800000) * fVar11 * __real_3f000000;
  local_3c = (fVar11 - __real_3f800000) * (fVar11 - __real_40000000) * __real_3f000000;
  if (((pFVar3 <= (FScriptContainerElement *)&local_68) &&
      ((FScriptContainerElement *)&local_68 < pFVar3 + (longlong)param_1->ArrayMax * 0x38)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FQuadraticBandSpec *)(*pcVar4)();
    return pFVar8;
  }
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  pFVar8 = (FQuadraticBandSpec *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x38);
  pFVar8->_padding_ = local_60;
  *(float *)&pFVar8->_padding_ = local_58;
  pFVar8->_padding_ = (longlong)&___7FBandSpec_FSpectrumBandExtractor_Audio__6B_;
  *(undefined4 *)((longlong)&pFVar8->_padding_ + 4) = local_54;
  pFVar8->_padding_ = (longlong)&___7FQuadraticBandSpec_FSpectrumBandExtractor_Audio__6B_;
  *(float *)&pFVar8->_padding_ = local_50;
  pFVar8->LowerIndex = local_48;
  pFVar8->MidIndex = local_44;
  pFVar8->UpperIndex = local_40;
  pFVar8->LowerWeight = local_3c;
  pFVar8->MidWeight = local_38;
  pFVar8->UpperWeight = local_34;
  return pFVar8;
}

// AddBand @ 1444f5b60

void __thiscall
Audio::FSpectrumBandExtractor::AddBand(FSpectrumBandExtractor *this,FBandSettings *param_1)

{
  EBandType EVar1;
  
  EVar1 = param_1->Type;
  if (EVar1 == NearestNeighbor) {
    AddBand<Audio::FSpectrumBandExtractor::FNNBandSpec>(this,&this->NNBandSpecs,param_1);
    return;
  }
  if (EVar1 != Lerp) {
    if (EVar1 != Quadratic) {
      AddBand<Audio::FSpectrumBandExtractor::FCQTBandSpec>(this,&this->CQTBandSpecs,param_1);
      return;
    }
    AddBand<Audio::FSpectrumBandExtractor::FQuadraticBandSpec>
              (this,&this->QuadraticBandSpecs,param_1);
    return;
  }
  AddBand<Audio::FSpectrumBandExtractor::FLerpBandSpec>(this,&this->LerpBandSpecs,param_1);
  return;
}

// ExtractBands @ 1444fac20

void __thiscall
Audio::FSpectrumBandExtractor::ExtractBands
          (FSpectrumBandExtractor *this,TArray<float,TAlignedHeapAllocator<16>_> *param_1,
          double param_2,TArray<float,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FAutoRange *pFVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  EMetric EVar9;
  int iVar10;
  code *pcVar11;
  float fVar12;
  undefined8 uVar13;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  FScriptContainerElement *pFVar20;
  FScriptContainerElement *pFVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  TArray<float,TSizedDefaultAllocator<32>_> *local_res20;
  undefined1 local_168;
  undefined1 local_167;
  undefined1 local_166 [2];
  int local_164;
  int *local_160;
  int *local_158;
  FScriptContainerElement *local_148;
  int iStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  int iStack_130;
  undefined4 uStack_12c;
  FScriptContainerElement *local_128;
  int iStack_120;
  undefined4 uStack_11c;
  FScriptContainerElement *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  FScriptContainerElement *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  FScriptContainerElement *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  TArrayView<float,int> local_e8;
  TArrayView<float_const_,int> local_d8;
  TArrayView<float,int> local_c8;
  TArrayView<float,int> local_b8;
  TArrayView<float,int> local_a8;
  TArrayView<float,int> local_98;
  TArrayView<float,int> local_88;
  TArrayView<float,int> local_78 [3];
  
  iVar10 = param_1->ArrayNum;
  dVar8 = this->LastTimestamp;
  iVar16 = (this->SpectrumSettings).FFTSize;
  this->LastTimestamp = param_2;
  fVar24 = (float)(param_2 - dVar8);
  local_res20 = param_3;
  if ((iVar10 != iVar16 + 2) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumComplex == (SpectrumSettings.FFTSize + 2)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\SpectrumAnalyzer.cpp"
                          ,0x1de,L""), bVar15)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  piVar1 = &param_3->ArrayNum;
  *piVar1 = 0;
  local_158 = piVar1;
  if (param_3->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
  }
  iVar16 = (**(code **)(this->_padding_ + 0x20))(this);
  pTVar14 = local_res20;
  iVar17 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,iVar16,&local_res20->AllocatorInstance,piVar1,&param_3->ArrayMax);
  memset((pTVar14->AllocatorInstance).Data + (longlong)iVar17 * 4,0,(longlong)iVar16 << 2);
  local_160 = &(this->PowerSpectrum).ArrayNum;
  piVar2 = &(this->PowerSpectrum).ArrayMax;
  *local_160 = 0;
  if ((this->PowerSpectrum).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&(this->PowerSpectrum).AllocatorInstance,0,piVar2);
  }
  if (1 < iVar10) {
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,iVar10 / 2,&(this->PowerSpectrum).AllocatorInstance,local_160,piVar2);
  }
  piVar2 = local_160;
  local_148 = (this->PowerSpectrum).AllocatorInstance.Data;
  iVar10 = *local_160;
  if ((iVar10 < 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar15)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  local_138 = (param_1->AllocatorInstance).Data;
  iVar16 = param_1->ArrayNum;
  iStack_140 = iVar10;
  if ((iVar16 < 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar15)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  local_e8._12_4_ = uStack_13c;
  local_e8.ArrayNum = iStack_140;
  local_d8.DataPtr._0_4_ = (undefined4)local_138;
  local_d8.DataPtr._4_4_ = local_138._4_4_;
  local_d8._12_4_ = uStack_12c;
  local_e8.DataPtr = (float *)local_148;
  iStack_130 = iVar16;
  local_d8.ArrayNum = iVar16;
  ArrayComplexToPower(&local_d8,&local_e8);
  local_164 = *piVar2;
  pFVar20 = (pTVar14->AllocatorInstance).Data;
  iVar10 = (this->NNBandSpecs).ArrayNum;
  pFVar18 = (this->NNBandSpecs).AllocatorInstance.Data;
  iVar16 = *piVar1;
  pFVar21 = (this->PowerSpectrum).AllocatorInstance.Data;
  pFVar19 = pFVar18 + (longlong)iVar10 * 0x28;
  while( true ) {
    if ((this->NNBandSpecs).ArrayNum != iVar10) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Audio::FSpectrumBandExtractor::FNNBandSpec_const_,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar18 == pFVar19) {
      iVar10 = (this->LerpBandSpecs).ArrayNum;
      pFVar19 = (this->LerpBandSpecs).AllocatorInstance.Data;
      pFVar20 = (this->PowerSpectrum).AllocatorInstance.Data;
      pFVar18 = (local_res20->AllocatorInstance).Data;
      iVar16 = local_res20->ArrayNum;
      pFVar21 = pFVar19 + (longlong)iVar10 * 0x30;
      local_164 = *local_160;
      while( true ) {
        if ((this->LerpBandSpecs).ArrayNum != iVar10) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<Audio::FSpectrumBandExtractor::FLerpBandSpec_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (pFVar19 == pFVar21) {
          iVar10 = (this->QuadraticBandSpecs).ArrayNum;
          pFVar19 = (this->QuadraticBandSpecs).AllocatorInstance.Data;
          pFVar20 = (this->PowerSpectrum).AllocatorInstance.Data;
          pFVar18 = (local_res20->AllocatorInstance).Data;
          iVar16 = local_res20->ArrayNum;
          local_164 = *local_160;
          pFVar21 = pFVar19 + (longlong)iVar10 * 0x38;
          while( true ) {
            if ((this->QuadraticBandSpecs).ArrayNum != iVar10) {
              local_res18[0] = 0;
              `TCheckedPointerIterator<Audio::FSpectrumBandExtractor::FQuadraticBandSpec_const_,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(local_res18);
            }
            if (pFVar19 == pFVar21) {
              iVar10 = (this->CQTBandSpecs).ArrayNum;
              pFVar20 = (this->CQTBandSpecs).AllocatorInstance.Data;
              pFVar18 = (this->PowerSpectrum).AllocatorInstance.Data;
              pFVar21 = (local_res20->AllocatorInstance).Data;
              iVar16 = local_res20->ArrayNum;
              pFVar19 = pFVar20 + (longlong)iVar10 * 0x48;
              local_164 = *local_160;
              while( true ) {
                if ((this->CQTBandSpecs).ArrayNum != iVar10) {
                  local_168 = 0;
                  `TCheckedPointerIterator<Audio::FSpectrumBandExtractor::FCQTBandSpec_const_,int,0>
                  ::operator!='::__l2::<lambda_1>::operator()(&local_168);
                }
                piVar1 = local_158;
                pTVar14 = local_res20;
                if (pFVar20 == pFVar19) {
                  EVar9 = (this->Settings).Metric;
                  if (EVar9 == Magnitude) {
                    local_118 = (local_res20->AllocatorInstance).Data;
                    iVar10 = *local_158;
                    if ((iVar10 < 0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("InCount >= 0",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0xeb,L""), bVar15)) {
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    local_b8._12_4_ = uStack_10c;
                    local_b8.ArrayNum = iVar10;
                    local_b8.DataPtr = (float *)local_118;
                    iStack_110 = iVar10;
                    ArraySqrtInPlace(&local_b8);
                  }
                  else if (EVar9 == Decibel) {
                    local_128 = (local_res20->AllocatorInstance).Data;
                    iVar10 = *local_158;
                    fVar22 = (this->Settings).DecibelNoiseFloor;
                    if ((iVar10 < 0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("InCount >= 0",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0xeb,L""), bVar15)) {
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    local_c8._12_4_ = uStack_11c;
                    local_c8.ArrayNum = iVar10;
                    local_c8.DataPtr = (float *)local_128;
                    iStack_120 = iVar10;
                    ArrayPowerToDecibelInPlace(&local_c8,fVar22);
                  }
                  if ((this->Settings).bDoAutoRange == false) {
                    if ((this->Settings).bDoNormalize != false) {
                      Normalize(this,pTVar14);
                      local_f8 = (pTVar14->AllocatorInstance).Data;
                      iStack_f0 = pTVar14->ArrayNum;
                      if ((iStack_f0 < 0) &&
                         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("InCount >= 0",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                              ,0xeb,L""), bVar15)) {
                        pcVar11 = (code *)swi(3);
                        (*pcVar11)();
                        return;
                      }
                      local_78[0]._12_4_ = uStack_ec;
                      local_78[0].ArrayNum = iStack_f0;
                      local_78[0].DataPtr = (float *)local_f8;
                      ArrayClampInPlace(local_78,0.0,__real_3f800000);
                    }
                  }
                  else {
                    Normalize(this,pTVar14);
                    pFVar20 = (pTVar14->AllocatorInstance).Data;
                    pFVar21 = (FScriptContainerElement *)0x0;
                    iVar10 = *piVar1;
                    pFVar19 = pFVar20 + (longlong)iVar10 * 4;
                    pFVar18 = pFVar21;
                    while( true ) {
                      if (*piVar1 != iVar10) {
                        local_167 = 0;
                        `TCheckedPointerIterator<float,int,0>::operator!='::__l2::<lambda_1>::
                        operator()(&local_167);
                      }
                      if (pFVar20 == pFVar19) break;
                      if ((pFVar18 == (FScriptContainerElement *)0x0) ||
                         (*(float *)pFVar20 <= *(float *)pFVar18 &&
                          *(float *)pFVar18 != *(float *)pFVar20)) {
                        pFVar18 = pFVar20;
                      }
                      pFVar20 = pFVar20 + 4;
                    }
                    iVar10 = *piVar1;
                    pFVar20 = (local_res20->AllocatorInstance).Data;
                    pFVar19 = pFVar20 + (longlong)iVar10 * 4;
                    while( true ) {
                      if (*piVar1 != iVar10) {
                        local_166[0] = 0;
                        `TCheckedPointerIterator<float,int,0>::operator!='::__l2::<lambda_1>::
                        operator()(local_166);
                      }
                      if (pFVar20 == pFVar19) break;
                      if ((pFVar21 == (FScriptContainerElement *)0x0) ||
                         (*(float *)pFVar21 <= *(float *)pFVar20 &&
                          *(float *)pFVar20 != *(float *)pFVar21)) {
                        pFVar21 = pFVar20;
                      }
                      pFVar20 = pFVar20 + 4;
                    }
                    if (pFVar18 == (FScriptContainerElement *)0x0) {
                      fVar22 = 0.0;
                    }
                    else {
                      fVar22 = *(float *)pFVar18;
                    }
                    if (pFVar21 == (FScriptContainerElement *)0x0) {
                      fVar23 = 0.0;
                    }
                    else {
                      fVar23 = *(float *)pFVar21;
                    }
                    pFVar5 = &this->AutoRange;
                    if ((this->AutoRange).bAreCurrentValuesValid == false) {
                      (this->AutoRange).CurrentMaximum = fVar23;
                      (this->AutoRange).bAreCurrentValuesValid = true;
                    }
                    else {
                      fVar6 = (this->AutoRange).CurrentMaximum;
                      if (fVar24 <= 0.0) {
                        fVar24 = 0.0;
                      }
                      fVar23 = fVar23 - fVar6;
                      fVar25 = fVar24 * (this->AutoRange).ReleaseTimeConstant;
                      fVar24 = fVar24 * (this->AutoRange).AttackTimeConstant;
                      fVar12 = fVar25;
                      if (0.0 < fVar23) {
                        fVar12 = fVar24;
                      }
                      fVar7 = pFVar5->CurrentMinimum;
                      fVar22 = fVar22 - fVar7;
                      (this->AutoRange).CurrentMaximum = fVar23 * fVar12 + fVar6;
                      if (0.0 <= fVar22) {
                        fVar22 = fVar22 * fVar25 + fVar7;
                      }
                      else {
                        fVar22 = fVar22 * fVar24 + fVar7;
                      }
                    }
                    pFVar5->CurrentMinimum = fVar22;
                    local_108 = (local_res20->AllocatorInstance).Data;
                    iVar10 = local_res20->ArrayNum;
                    if ((iVar10 < 0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("InCount >= 0",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0xeb,L""), bVar15)) {
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    pFVar19 = local_108;
                    uVar13._4_4_ = uStack_fc;
                    uVar13._0_4_ = iVar10;
                    local_a8.DataPtr = (float *)local_108;
                    iStack_100 = iVar10;
                    local_a8._8_8_ = uVar13;
                    ArrayClampInPlace(&local_a8,pFVar5->CurrentMinimum,
                                      (this->AutoRange).CurrentMaximum);
                    local_98.DataPtr = (float *)pFVar19;
                    local_98._8_8_ = uVar13;
                    ArraySubtractByConstantInPlace(&local_98,pFVar5->CurrentMinimum);
                    fVar24 = (this->AutoRange).CurrentMaximum - pFVar5->CurrentMinimum;
                    local_88.DataPtr = (float *)pFVar19;
                    if (fVar24 <= __real_322bcc77) {
                      fVar24 = __real_322bcc77;
                    }
                    local_88._8_8_ = uVar13;
                    ArrayMultiplyByConstantInPlace(&local_88,__real_3f800000 / fVar24);
                  }
                  return;
                }
                if ((*(int *)(pFVar20 + 0x14) < 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("OutIndex >= 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\SpectrumAnalyzer.cpp"
                                        ,0x52,L""), bVar15)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                if ((iVar16 <= *(int *)(pFVar20 + 0x14)) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("OutIndex < OutNum",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\SpectrumAnalyzer.cpp"
                                        ,0x53,L""), bVar15)) break;
                fVar22 = (float)(**(code **)(*(longlong *)pFVar20 + 0x10))
                                          (pFVar20,pFVar18,local_164);
                pFVar3 = pFVar20 + 0x18;
                pFVar4 = pFVar20 + 0x14;
                pFVar20 = pFVar20 + 0x48;
                *(float *)(pFVar21 + (longlong)*(int *)pFVar4 * 4) = fVar22 * *(float *)pFVar3;
              }
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            if ((*(int *)(pFVar19 + 0x14) < 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("OutIndex >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\SpectrumAnalyzer.cpp"
                                    ,0x52,L""), bVar15)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            if ((iVar16 <= *(int *)(pFVar19 + 0x14)) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("OutIndex < OutNum",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\SpectrumAnalyzer.cpp"
                                    ,0x53,L""), bVar15)) break;
            fVar22 = (float)(**(code **)(*(longlong *)pFVar19 + 0x10))(pFVar19,pFVar20,local_164);
            pFVar3 = pFVar19 + 0x18;
            pFVar4 = pFVar19 + 0x14;
            pFVar19 = pFVar19 + 0x38;
            *(float *)(pFVar18 + (longlong)*(int *)pFVar4 * 4) = fVar22 * *(float *)pFVar3;
          }
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if ((*(int *)(pFVar19 + 0x14) < 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("OutIndex >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\SpectrumAnalyzer.cpp"
                                ,0x52,L""), bVar15)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if ((iVar16 <= *(int *)(pFVar19 + 0x14)) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("OutIndex < OutNum",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\SpectrumAnalyzer.cpp"
                                ,0x53,L""), bVar15)) break;
        fVar22 = (float)(**(code **)(*(longlong *)pFVar19 + 0x10))(pFVar19,pFVar20,local_164);
        pFVar3 = pFVar19 + 0x18;
        pFVar4 = pFVar19 + 0x14;
        pFVar19 = pFVar19 + 0x30;
        *(float *)(pFVar18 + (longlong)*(int *)pFVar4 * 4) = fVar22 * *(float *)pFVar3;
      }
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if ((*(int *)(pFVar18 + 0x14) < 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("OutIndex >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\SpectrumAnalyzer.cpp"
                            ,0x52,L""), bVar15)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if ((iVar16 <= *(int *)(pFVar18 + 0x14)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("OutIndex < OutNum",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\SpectrumAnalyzer.cpp"
                            ,0x53,L""), bVar15)) break;
    fVar22 = (float)(**(code **)(*(longlong *)pFVar18 + 0x10))(pFVar18,pFVar21,local_164);
    pFVar3 = pFVar18 + 0x18;
    pFVar4 = pFVar18 + 0x14;
    pFVar18 = pFVar18 + 0x28;
    *(float *)(pFVar20 + (longlong)*(int *)pFVar4 * 4) = fVar22 * *(float *)pFVar3;
  }
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

// GetNumBands @ 144504150

int __thiscall Audio::FSpectrumBandExtractor::GetNumBands(FSpectrumBandExtractor *this)

{
  return (this->CQTBandSpecs).ArrayNum + (this->QuadraticBandSpecs).ArrayNum +
         (this->LerpBandSpecs).ArrayNum + (this->NNBandSpecs).ArrayNum;
}

// Normalize @ 14450ad80

void __thiscall
Audio::FSpectrumBandExtractor::Normalize
          (FSpectrumBandExtractor *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  float *pfVar7;
  float fVar8;
  undefined1 local_res8 [8];
  undefined4 uStack_7c;
  undefined4 uStack_6c;
  undefined4 uStack_5c;
  TArrayView<float,int> local_58;
  TArrayView<float,int> local_48;
  TArrayView<float,int> local_38 [2];
  
  if ((this->Settings).Metric == Decibel) {
    pFVar6 = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    pFVar2 = pFVar6 + (longlong)iVar1 * 4;
    while( true ) {
      pfVar7 = &(this->Settings).DecibelNoiseFloor;
      if (param_1->ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<float,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
        ;
      }
      if (pFVar6 == pFVar2) break;
      iVar5 = _finite((double)*(float *)pFVar6);
      if (iVar5 == 0) {
        *(float *)pFVar6 = (this->Settings).DecibelNoiseFloor;
      }
      pFVar6 = pFVar6 + 4;
    }
    pFVar2 = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    fVar8 = *pfVar7;
    if (iVar1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_58._12_4_ = uStack_7c;
    local_58.ArrayNum = iVar1;
    local_58.DataPtr = (float *)pFVar2;
    ArrayClampMinInPlace(&local_58,fVar8);
    local_48.DataPtr = (float *)(param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    fVar8 = *pfVar7;
    if (iVar1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_48._12_4_ = uStack_6c;
    local_48.ArrayNum = iVar1;
    ArraySubtractByConstantInPlace(&local_48,fVar8);
    fVar8 = (float)((uint)(this->Settings).DecibelNoiseFloor ^
                   __xmm_80000000800000008000000080000000);
    local_38[0].DataPtr = (float *)(param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    if (fVar8 <= __real_3c23d70a) {
      fVar8 = __real_3c23d70a;
    }
    if (iVar1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_38[0]._12_4_ = uStack_5c;
    local_38[0].ArrayNum = iVar1;
    ArrayMultiplyByConstantInPlace(local_38,__real_3f800000 / fVar8);
  }
  return;
}

// RemoveAllBands @ 144516610

void __thiscall Audio::FSpectrumBandExtractor::RemoveAllBands(FSpectrumBandExtractor *this)

{
  int *piVar1;
  int iVar2;
  FNNBandSpec *pFVar3;
  FLerpBandSpec *pFVar4;
  FQuadraticBandSpec *pFVar5;
  FCQTBandSpec *pFVar6;
  
  piVar1 = &(this->NNBandSpecs).ArrayMax;
  pFVar3 = (FNNBandSpec *)(this->NNBandSpecs).AllocatorInstance.Data;
  iVar2 = (this->NNBandSpecs).ArrayNum;
  if ((this->NNBandSpecs).ArrayMax < 0) {
    DestructItems<Audio::FSpectrumBandExtractor::FNNBandSpec,int>(pFVar3,iVar2);
    (this->NNBandSpecs).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&(this->NNBandSpecs).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<Audio::FSpectrumBandExtractor::FNNBandSpec,int>(pFVar3,iVar2);
    (this->NNBandSpecs).ArrayNum = 0;
  }
  piVar1 = &(this->LerpBandSpecs).ArrayMax;
  pFVar4 = (FLerpBandSpec *)(this->LerpBandSpecs).AllocatorInstance.Data;
  iVar2 = (this->LerpBandSpecs).ArrayNum;
  if ((this->LerpBandSpecs).ArrayMax < 0) {
    DestructItems<Audio::FSpectrumBandExtractor::FLerpBandSpec,int>(pFVar4,iVar2);
    (this->LerpBandSpecs).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&(this->LerpBandSpecs).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<Audio::FSpectrumBandExtractor::FLerpBandSpec,int>(pFVar4,iVar2);
    (this->LerpBandSpecs).ArrayNum = 0;
  }
  piVar1 = &(this->QuadraticBandSpecs).ArrayMax;
  pFVar5 = (FQuadraticBandSpec *)(this->QuadraticBandSpecs).AllocatorInstance.Data;
  iVar2 = (this->QuadraticBandSpecs).ArrayNum;
  if ((this->QuadraticBandSpecs).ArrayMax < 0) {
    DestructItems<Audio::FSpectrumBandExtractor::FQuadraticBandSpec,int>(pFVar5,iVar2);
    (this->QuadraticBandSpecs).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0,&(this->QuadraticBandSpecs).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<Audio::FSpectrumBandExtractor::FQuadraticBandSpec,int>(pFVar5,iVar2);
    (this->QuadraticBandSpecs).ArrayNum = 0;
  }
  pFVar6 = (FCQTBandSpec *)(this->CQTBandSpecs).AllocatorInstance.Data;
  piVar1 = &(this->CQTBandSpecs).ArrayMax;
  iVar2 = (this->CQTBandSpecs).ArrayNum;
  if (-1 < (this->CQTBandSpecs).ArrayMax) {
    DestructItems<Audio::FSpectrumBandExtractor::FCQTBandSpec,int>(pFVar6,iVar2);
    (this->CQTBandSpecs).ArrayNum = 0;
    return;
  }
  DestructItems<Audio::FSpectrumBandExtractor::FCQTBandSpec,int>(pFVar6,iVar2);
  (this->CQTBandSpecs).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,0,&(this->CQTBandSpecs).AllocatorInstance,0,piVar1);
  }
  return;
}

// SetSettings @ 14451cd70

void __thiscall
Audio::FSpectrumBandExtractor::SetSettings
          (FSpectrumBandExtractor *this,FSpectrumBandExtractorSettings *param_1)

{
  undefined3 uVar1;
  bool bVar2;
  bool bVar3;
  undefined2 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = __real_3f666666;
  uVar1 = *(undefined3 *)&param_1->field_0x1;
  fVar7 = param_1->DecibelNoiseFloor;
  bVar2 = param_1->bDoNormalize;
  bVar3 = param_1->bDoAutoRange;
  uVar4 = *(undefined2 *)&param_1->field_0xa;
  fVar5 = param_1->AutoRangeReleaseTimeInSeconds;
  (this->Settings).Metric = param_1->Metric;
  *(undefined3 *)&(this->Settings).field_0x1 = uVar1;
  (this->Settings).DecibelNoiseFloor = fVar7;
  (this->Settings).bDoNormalize = bVar2;
  (this->Settings).bDoAutoRange = bVar3;
  *(undefined2 *)&(this->Settings).field_0xa = uVar4;
  (this->Settings).AutoRangeReleaseTimeInSeconds = fVar5;
  (this->Settings).AutoRangeAttackTimeInSeconds = param_1->AutoRangeAttackTimeInSeconds;
  fVar7 = (this->Settings).AutoRangeAttackTimeInSeconds;
  if (fVar7 <= __real_3a83126f) {
    fVar7 = __real_3a83126f;
  }
  (this->AutoRange).AttackTimeConstant = fVar6 / fVar7;
  fVar7 = (this->Settings).AutoRangeReleaseTimeInSeconds;
  if (fVar7 <= __real_3a83126f) {
    fVar7 = __real_3a83126f;
  }
  (this->AutoRange).ReleaseTimeConstant = fVar6 / fVar7;
  return;
}

// SetSpectrumSettings @ 14451cf60

void __thiscall
Audio::FSpectrumBandExtractor::SetSpectrumSettings
          (FSpectrumBandExtractor *this,FSpectrumBandExtractorSpectrumSettings *param_1)

{
  int iVar1;
  bool bVar2;
  EWindowType EVar3;
  undefined2 uVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 auStackX_8 [8];
  
  if ((((param_1->SampleRate == (this->SpectrumSettings).SampleRate) &&
       ((this->SpectrumSettings).FFTSize == param_1->FFTSize)) &&
      ((this->SpectrumSettings).FFTScaling == param_1->FFTScaling)) &&
     ((this->SpectrumSettings).WindowType == param_1->WindowType)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  iVar1 = param_1->FFTSize;
  (this->SpectrumSettings).SampleRate = param_1->SampleRate;
  (this->SpectrumSettings).FFTSize = iVar1;
  EVar3 = param_1->WindowType;
  uVar4 = *(undefined2 *)&param_1->field_0xa;
  (this->SpectrumSettings).FFTScaling = param_1->FFTScaling;
  (this->SpectrumSettings).WindowType = EVar3;
  *(undefined2 *)&(this->SpectrumSettings).field_0xa = uVar4;
  if (bVar2) {
    return;
  }
  pFVar6 = (this->NNBandSpecs).AllocatorInstance.Data;
  iVar1 = (this->NNBandSpecs).ArrayNum;
  pFVar5 = pFVar6 + (longlong)iVar1 * 0x28;
  while( true ) {
    if ((this->NNBandSpecs).ArrayNum != iVar1) {
      `TCheckedPointerIterator<Audio::FSpectrumBandExtractor::FNNBandSpec,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(auStackX_8);
    }
    if (pFVar6 == pFVar5) break;
    (**(code **)(*(longlong *)pFVar6 + 8))(pFVar6,&this->Settings,&this->SpectrumSettings);
    pFVar6 = pFVar6 + 0x28;
  }
  iVar1 = (this->LerpBandSpecs).ArrayNum;
  pFVar5 = (this->LerpBandSpecs).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((this->LerpBandSpecs).ArrayNum != iVar1) {
      `TCheckedPointerIterator<Audio::FSpectrumBandExtractor::FLerpBandSpec,int,0>::operator!='::
      __l2::<lambda_1>::operator()(auStackX_8);
    }
    if (pFVar5 == pFVar6) break;
    (**(code **)(*(longlong *)pFVar5 + 8))(pFVar5,&this->Settings,&this->SpectrumSettings);
    pFVar5 = pFVar5 + 0x30;
  }
  iVar1 = (this->QuadraticBandSpecs).ArrayNum;
  pFVar5 = (this->QuadraticBandSpecs).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x38;
  while( true ) {
    if ((this->QuadraticBandSpecs).ArrayNum != iVar1) {
      `TCheckedPointerIterator<Audio::FSpectrumBandExtractor::FQuadraticBandSpec,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(auStackX_8);
    }
    if (pFVar5 == pFVar6) break;
    (**(code **)(*(longlong *)pFVar5 + 8))(pFVar5,&this->Settings,&this->SpectrumSettings);
    pFVar5 = pFVar5 + 0x38;
  }
  iVar1 = (this->CQTBandSpecs).ArrayNum;
  pFVar6 = (this->CQTBandSpecs).AllocatorInstance.Data;
  pFVar5 = pFVar6 + (longlong)iVar1 * 0x48;
  while( true ) {
    if ((this->CQTBandSpecs).ArrayNum != iVar1) {
      `TCheckedPointerIterator<Audio::FSpectrumBandExtractor::FCQTBandSpec,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(auStackX_8);
    }
    if (pFVar6 == pFVar5) break;
    (**(code **)(*(longlong *)pFVar6 + 8))(pFVar6,&this->Settings,&this->SpectrumSettings);
    pFVar6 = pFVar6 + 0x48;
  }
  return;
}

// UpdateBandSpecs @ 14451ffa0

void __thiscall Audio::FSpectrumBandExtractor::UpdateBandSpecs(FSpectrumBandExtractor *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->NNBandSpecs).AllocatorInstance.Data;
  iVar1 = (this->NNBandSpecs).ArrayNum;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x28;
  while( true ) {
    if ((this->NNBandSpecs).ArrayNum != iVar1) {
      `TCheckedPointerIterator<Audio::FSpectrumBandExtractor::FNNBandSpec,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    (**(code **)(*(longlong *)pFVar3 + 8))(pFVar3,&this->Settings,&this->SpectrumSettings);
    pFVar3 = pFVar3 + 0x28;
  }
  iVar1 = (this->LerpBandSpecs).ArrayNum;
  pFVar2 = (this->LerpBandSpecs).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((this->LerpBandSpecs).ArrayNum != iVar1) {
      `TCheckedPointerIterator<Audio::FSpectrumBandExtractor::FLerpBandSpec,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    (**(code **)(*(longlong *)pFVar2 + 8))(pFVar2,&this->Settings,&this->SpectrumSettings);
    pFVar2 = pFVar2 + 0x30;
  }
  iVar1 = (this->QuadraticBandSpecs).ArrayNum;
  pFVar2 = (this->QuadraticBandSpecs).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x38;
  while( true ) {
    if ((this->QuadraticBandSpecs).ArrayNum != iVar1) {
      `TCheckedPointerIterator<Audio::FSpectrumBandExtractor::FQuadraticBandSpec,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    (**(code **)(*(longlong *)pFVar2 + 8))(pFVar2,&this->Settings,&this->SpectrumSettings);
    pFVar2 = pFVar2 + 0x38;
  }
  iVar1 = (this->CQTBandSpecs).ArrayNum;
  pFVar3 = (this->CQTBandSpecs).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x48;
  while( true ) {
    if ((this->CQTBandSpecs).ArrayNum != iVar1) {
      `TCheckedPointerIterator<Audio::FSpectrumBandExtractor::FCQTBandSpec,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    (**(code **)(*(longlong *)pFVar3 + 8))(pFVar3,&this->Settings,&this->SpectrumSettings);
    pFVar3 = pFVar3 + 0x48;
  }
  return;
}

