// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 7

// FToneGenerator @ 14f0b9220

FToneGenerator * __thiscall
FToneGenerator::FToneGenerator
          (FToneGenerator *this,int param_1,int param_2,int param_3,float param_4,
          FAudioBufferDistanceAttenuationSettings *param_5)

{
  int *piVar1;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  double dVar5;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar6;
  
  ISoundGenerator::ISoundGenerator((ISoundGenerator *)this);
  this->NumChannels = param_2;
  this->_padding_ = (longlong)&___7FToneGenerator__6B_;
  Audio::FSineOsc::FSineOsc(&this->SineOsc);
  piVar1 = &(this->DistanceAttenuationSettings).AttenuationCurve.Points.ArrayMax;
  (this->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DistanceAttenuationSettings).DistanceRange.field0_0x0._s_0.X = 400.0;
  (this->Buffer).ArrayNum = 0;
  (this->Buffer).ArrayMax = 0;
  (this->DistanceAttenuationSettings).DistanceRange.field0_0x0._s_0.Y = 4000.0;
  (this->DistanceAttenuationSettings).AttenuationCurve._padding_ =
       (longlong)&___7FLinearCurve_Audio__6B_;
  this->CurrentDistance = 0.0;
  this->CurrentAttenuation = 1.0;
  (this->DistanceAttenuationSettings).AttenuationDbAtMaxRange = -60.0;
  (this->DistanceAttenuationSettings).AttenuationCurve.Points.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DistanceAttenuationSettings).AttenuationCurve.Points.ArrayNum = 0;
  *piVar1 = 0;
  Audio::FSineOsc::Init(&this->SineOsc,param_1,(float)param_3,param_4,0.0);
  pTVar2 = &(this->DistanceAttenuationSettings).AttenuationCurve.Points;
  dVar5 = (param_5->DistanceRange).field0_0x0._s_0.Y;
  (this->DistanceAttenuationSettings).DistanceRange.field0_0x0._s_0.X =
       (param_5->DistanceRange).field0_0x0._s_0.X;
  (this->DistanceAttenuationSettings).DistanceRange.field0_0x0._s_0.Y = dVar5;
  pTVar6 = &(param_5->AttenuationCurve).Points;
  (this->DistanceAttenuationSettings).AttenuationDbAtMaxRange = param_5->AttenuationDbAtMaxRange;
  if (pTVar2 != pTVar6) {
    iVar3 = (param_5->AttenuationCurve).Points.ArrayNum;
    _Src = (pTVar6->AllocatorInstance).Data;
    iVar4 = (this->DistanceAttenuationSettings).AttenuationCurve.Points.ArrayMax;
    (this->DistanceAttenuationSettings).AttenuationCurve.Points.ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar4 == 0)) {
      (this->DistanceAttenuationSettings).AttenuationCurve.Points.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar3,iVar4,&pTVar2->AllocatorInstance,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3 << 4);
      }
    }
  }
  return this;
}

// ~FToneGenerator @ 14f0bf950

void __thiscall FToneGenerator::~FToneGenerator(FToneGenerator *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->DistanceAttenuationSettings).AttenuationCurve.Points.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Buffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  Audio::FSineOsc::~FSineOsc(&this->SineOsc);
  ISoundGenerator::~ISoundGenerator((ISoundGenerator *)this);
  return;
}

// GetNumChannels @ 14f0da180

int __thiscall FToneGenerator::GetNumChannels(FToneGenerator *this)

{
  return this->NumChannels;
}

// OnGenerateAudio @ 14f0e9b50

int __thiscall FToneGenerator::OnGenerateAudio(FToneGenerator *this,float *param_1,int param_2)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  float fVar7;
  
  if ((this->NumChannels == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumChannels != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\SynthComponentToneGenerator.cpp"
                         ,0x32,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    iVar4 = (*pcVar1)();
    return iVar4;
  }
  fVar2 = __real_3f000000;
  uVar6 = (longlong)param_2 / (longlong)this->NumChannels;
  if (0 < (int)uVar6) {
    lVar5 = 0;
    uVar6 = uVar6 & 0xffffffff;
    do {
      fVar7 = Audio::FSineOsc::ProcessAudio(&this->SineOsc);
      iVar4 = 0;
      if (0 < this->NumChannels) {
        do {
          param_1[lVar5] = fVar7 * fVar2;
          iVar4 = iVar4 + 1;
          lVar5 = lVar5 + 1;
        } while (iVar4 < this->NumChannels);
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return param_2;
}

// SetDistance @ 14f0fa1e0

void __thiscall FToneGenerator::SetDistance(FToneGenerator *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  FToneGenerator *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FToneGenerator::SetDistance'::`2'::<lambda_1>,0,0>::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FToneGenerator::SetDistance'::__l2::<lambda_1>,void>::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  ISoundGenerator::SynthCommand((ISoundGenerator *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetFrequency @ 14f0fc030

void __thiscall FToneGenerator::SetFrequency(FToneGenerator *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  FToneGenerator *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FToneGenerator::SetFrequency'::`2'::<lambda_1>,0,0>::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FToneGenerator::SetFrequency'::__l2::<lambda_1>,void>::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  ISoundGenerator::SynthCommand((ISoundGenerator *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetVolume @ 14f102f90

void __thiscall FToneGenerator::SetVolume(FToneGenerator *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  FToneGenerator *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FToneGenerator::SetVolume'::`2'::<lambda_1>,0,0>::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FToneGenerator::SetVolume'::__l2::<lambda_1>,void>::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  ISoundGenerator::SynthCommand((ISoundGenerator *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

