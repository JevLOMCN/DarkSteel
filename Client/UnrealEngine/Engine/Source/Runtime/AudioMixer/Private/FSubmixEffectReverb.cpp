// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 9

// FSubmixEffectReverb @ 14653e4a0

FSubmixEffectReverb * __thiscall FSubmixEffectReverb::FSubmixEffectReverb(FSubmixEffectReverb *this)

{
  FSoundEffectBase::FSoundEffectBase((FSoundEffectBase *)this);
  *(undefined4 *)&this->field_0x70 = 0xffffffff;
  *(undefined8 *)&this->field_0x78 = 0;
  *(undefined ***)this = &___7FSubmixEffectReverb__6B_;
  *(undefined4 *)&this->field_0x80 = 0;
  *(undefined4 *)&this->field_0x84 = 0xffffffff;
  (this->PlateReverb).Ptr = (FPlateReverbFast *)0x0;
  (this->ReverbParams).bChanged = false;
  Audio::FPlateReverbFastSettings::FPlateReverbFastSettings(&(this->ReverbParams).CurrentParams);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&(this->ReverbParams).CritSect,4000);
  (this->WetDryParams).bChanged = false;
  (this->WetDryParams).CurrentParams.WetLevel = 1.0;
  (this->WetDryParams).CurrentParams.DryLevel = 0.0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&(this->WetDryParams).CritSect,4000);
  (this->WetInputBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WetInputBuffer).ArrayNum = 0;
  (this->WetInputBuffer).ArrayMax = 0;
  (this->DecayCurve)._padding_ = 0;
  (this->DecayCurve)._padding_ = 0;
  (this->DecayCurve)._padding_ = 0;
  (this->CurrentWetDry).WetLevel = -1.0;
  (this->CurrentWetDry).DryLevel = -1.0;
  *(undefined4 *)&(this->DecayCurve)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->DecayCurve)._padding_ + 4) = 0x80;
  *(undefined4 *)&(this->DecayCurve)._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&(this->DecayCurve)._padding_ + 4) = 0;
  (this->DecayCurve)._padding_ = 0;
  *(undefined4 *)&(this->DecayCurve)._padding_ = 0;
  (this->DecayCurve)._padding_ = 0;
  (this->DecayCurve)._padding_ = 0;
  (this->DecayCurve)._padding_ = (longlong)&___7FRichCurve__6B_;
  *(undefined4 *)&(this->DecayCurve)._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&(this->DecayCurve)._padding_ + 4) = 0x404;
  (this->DecayCurve).Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DecayCurve).Keys.ArrayNum = 0;
  (this->DecayCurve).Keys.ArrayMax = 0;
  this->SampleRate = 1.0;
  return this;
}

// GetDesiredInputChannelCountOverride @ 146557540

uint __thiscall FSubmixEffectReverb::GetDesiredInputChannelCountOverride(FSubmixEffectReverb *this)

{
  return 2;
}

// GetDryLevel @ 1465575a0

float __thiscall FSubmixEffectReverb::GetDryLevel(FSubmixEffectReverb *this)

{
  return (this->CurrentWetDry).DryLevel;
}

// Init @ 14655daf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSubmixEffectReverb::Init(FSubmixEffectReverb *this,FSoundEffectSubmixInitData *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FRichCurve *this_00;
  TUniquePtr<Audio::FPlateReverbFast,TDefaultDelete<Audio::FPlateReverbFast>_> *pTVar1;
  FPlateReverbFast *this_01;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  FPlateReverbFast *pFVar6;
  undefined1 uVar7;
  float fVar8;
  FLLMScope local_res8 [2];
  FKeyHandle local_res10 [4];
  FMemScope local_res20;
  undefined4 in_stack_ffffffffffffff98;
  uint3 uVar10;
  FKeyHandle FVar9;
  undefined8 local_58;
  FPlateReverbFastSettings local_50;
  
  uVar10 = (uint3)((uint)in_stack_ffffffffffffff98 >> 8);
  uVar7 = 0;
  FLLMScope::FLLMScope(local_res8,AudioMixer,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,AudioMixer,true);
  Audio::FPlateReverbFastSettings::FPlateReverbFastSettings(&local_50);
  uVar4 = _UNK_1512ea068;
  uVar2 = ___xmm_3f19999a3f0a3d710000000000000000;
  lpCriticalSection = &(this->ReverbParams).CritSect;
  this->SampleRate = param_1->SampleRate;
  uVar5 = _UNK_1512ea068;
  uVar3 = ___xmm_3f19999a3f0a3d710000000000000000;
  local_50.EarlyReflections.Decay = 0.9;
  local_50.EarlyReflections.Absorption = 0.7;
  local_50.EarlyReflections.Gain = 1.0;
  local_50.EarlyReflections.PreDelayMsec = 0.0;
  local_50.EarlyReflections.Bandwidth = 0.8;
  local_50.LateReflections.Dampening = 0.35;
  local_50.LateReflections.Decay = 0.15;
  local_50.LateReflections.Density = 0.85;
  ___xmm_3f19999a3f0a3d710000000000000000 = (float)uVar2;
  _UNK_1512ea064 = SUB84(uVar2,4);
  local_50.LateReflections.LateDelayMsec = ___xmm_3f19999a3f0a3d710000000000000000;
  local_50.LateReflections.LateGainDB = _UNK_1512ea064;
  _UNK_1512ea068 = (float)uVar4;
  _UNK_1512ea06c = SUB84(uVar4,4);
  local_50.LateReflections.Bandwidth = _UNK_1512ea068;
  local_50.LateReflections.Diffusion = _UNK_1512ea06c;
  ___xmm_3f19999a3f0a3d710000000000000000 = uVar3;
  _UNK_1512ea068 = uVar5;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  (this->ReverbParams).bChanged = true;
  (this->ReverbParams).CurrentParams.EarlyReflections.Gain = local_50.EarlyReflections.Gain;
  (this->ReverbParams).CurrentParams.EarlyReflections.PreDelayMsec =
       local_50.EarlyReflections.PreDelayMsec;
  (this->ReverbParams).CurrentParams.EarlyReflections.Bandwidth =
       local_50.EarlyReflections.Bandwidth;
  (this->ReverbParams).CurrentParams.EarlyReflections.Decay = local_50.EarlyReflections.Decay;
  (this->ReverbParams).CurrentParams.EarlyReflections.Absorption =
       local_50.EarlyReflections.Absorption;
  (this->ReverbParams).CurrentParams.LateReflections.LateDelayMsec =
       local_50.LateReflections.LateDelayMsec;
  (this->ReverbParams).CurrentParams.LateReflections.LateGainDB =
       local_50.LateReflections.LateGainDB;
  (this->ReverbParams).CurrentParams.LateReflections.Bandwidth = local_50.LateReflections.Bandwidth;
  (this->ReverbParams).CurrentParams.LateReflections.Diffusion = local_50.LateReflections.Diffusion;
  (this->ReverbParams).CurrentParams.LateReflections.Dampening = local_50.LateReflections.Dampening;
  (this->ReverbParams).CurrentParams.LateReflections.Decay = local_50.LateReflections.Decay;
  (this->ReverbParams).CurrentParams.LateReflections.Density = local_50.LateReflections.Density;
  (this->ReverbParams).CurrentParams.bEnableEarlyReflections = local_50.bEnableEarlyReflections;
  (this->ReverbParams).CurrentParams.bEnableLateReflections = local_50.bEnableLateReflections;
  (this->ReverbParams).CurrentParams.QuadBehavior = local_50.QuadBehavior;
  (this->ReverbParams).CurrentParams.field_0x33 = local_50._51_1_;
  fVar8 = local_50.EarlyReflections.Absorption;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  this_00 = &this->DecayCurve;
  FKeyHandle::FKeyHandle(local_res10);
  FVar9.Index = (uint)uVar10 << 8;
  FRichCurve::AddKey(this_00,fVar8,0.0,(bool)uVar7,FVar9);
  FKeyHandle::FKeyHandle(local_res10);
  FVar9.Index = FVar9.Index & 0xffffff00;
  FRichCurve::AddKey(this_00,fVar8,__real_40000000,(bool)uVar7,FVar9);
  FKeyHandle::FKeyHandle(local_res10);
  FVar9.Index = FVar9.Index & 0xffffff00;
  FRichCurve::AddKey(this_00,fVar8,__real_40a00000,(bool)uVar7,FVar9);
  FKeyHandle::FKeyHandle(local_res10);
  FVar9.Index = FVar9.Index & 0xffffff00;
  FRichCurve::AddKey(this_00,fVar8,__real_41200000,(bool)uVar7,FVar9);
  FKeyHandle::FKeyHandle(local_res10);
  FVar9.Index = FVar9.Index & 0xffffff00;
  FRichCurve::AddKey(this_00,fVar8,__real_41900000,(bool)uVar7,FVar9);
  FKeyHandle::FKeyHandle(local_res10);
  FVar9.Index = FVar9.Index & 0xffffff00;
  FRichCurve::AddKey(this_00,fVar8,__real_41980000,(bool)uVar7,FVar9);
  FKeyHandle::FKeyHandle(local_res10);
  FRichCurve::AddKey(this_00,fVar8,__real_41a00000,(bool)uVar7,
                     (FKeyHandle)(FVar9.Index & 0xffffff00));
  if (DisableSubmixReverbCVarFast == 0) {
    pFVar6 = ::operator_new(0x5d8);
    if (pFVar6 == (FPlateReverbFast *)0x0) {
      pFVar6 = (FPlateReverbFast *)0x0;
    }
    else {
      pFVar6 = Audio::FPlateReverbFast::FPlateReverbFast(pFVar6,this->SampleRate,0x200,&local_50);
    }
    pTVar1 = &this->PlateReverb;
    if (pTVar1 == (TUniquePtr<Audio::FPlateReverbFast,TDefaultDelete<Audio::FPlateReverbFast>_> *)
                  &local_58) {
      if (pFVar6 == (FPlateReverbFast *)0x0) goto LAB_14655dd9a;
      Audio::FPlateReverbFast::~FPlateReverbFast(pFVar6);
    }
    else {
      this_01 = pTVar1->Ptr;
      pTVar1->Ptr = pFVar6;
      if (this_01 == (FPlateReverbFast *)0x0) goto LAB_14655dd9a;
      Audio::FPlateReverbFast::~FPlateReverbFast(this_01);
      pFVar6 = this_01;
    }
    ::operator_delete(pFVar6,0x5d8);
  }
LAB_14655dd9a:
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// OnPresetChanged @ 1465641e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FSubmixEffectReverb::OnPresetChanged(FSubmixEffectReverb *this)

{
  undefined1 *lpCriticalSection;
  FWindowsRecursiveMutex *lpCriticalSection_00;
  int iVar1;
  undefined1 auVar2 [16];
  float fVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  undefined1 local_f8;
  undefined1 local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float local_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float local_c4;
  float fStack_c0;
  char local_bc;
  FAudioReverbEffect local_b8 [2];
  
  FLLMScope::FLLMScope(local_res8,AudioMixer,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,AudioMixer,true);
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x4c);
  if (pUVar4 == (UObject *)0x0) {
LAB_14656425f:
    pUVar4 = (UObject *)0x0;
  }
  else {
    pUVar5 = USubmixEffectReverbPreset::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) goto LAB_14656425f;
  }
  fVar10 = 0.0;
  if (pUVar4 == (UObject *)0x0) {
    fStack_d8 = (float)((ulonglong)_UNK_1512ea078 >> 0x20);
    local_d4 = (float)___xmm_000000003fa147ae3f547ae13f7e76c9;
    fStack_d0 = (float)((ulonglong)___xmm_000000003fa147ae3f547ae13f7e76c9 >> 0x20);
    fStack_cc = (float)_UNK_1512ea058;
    local_f8 = 0;
    fVar7 = 0.007;
    fVar8 = 0.89;
    fVar9 = 0.05;
    local_e8 = 0;
    fStack_e4 = (float)___xmm_3f59999a3f59999a3fbeb8523dcccccd;
    fStack_e0 = (float)((ulonglong)___xmm_3f59999a3f59999a3fbeb8523dcccccd >> 0x20);
    fStack_dc = (float)_UNK_1512ea078;
    local_bc = '\0';
    fStack_c8 = (float)((ulonglong)_UNK_1512ea058 >> 0x20);
    local_c4 = 0.3;
    fStack_c0 = 0.0;
  }
  else {
    lpCriticalSection = &pUVar4[2].field_0x18;
    if (lpCriticalSection == (undefined1 *)0x0) goto LAB_1465644d7;
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_f8 = (undefined1)*(undefined4 *)&pUVar4[3].field_0x18;
    fVar7 = *(float *)&pUVar4[3].field_0x1c;
    fVar8 = *(float *)&pUVar4[3].field_0x20;
    fVar9 = *(float *)&pUVar4[3].field_0x24;
    local_e8 = (undefined1)*(undefined4 *)(pUVar4 + 4);
    fStack_e4 = *(float *)&pUVar4[4].field_0x4;
    fStack_e0 = *(float *)&pUVar4[4].field_0x8;
    fStack_dc = *(float *)&pUVar4[4].field_0xc;
    fStack_d8 = *(float *)&pUVar4[4].field_0x10;
    local_d4 = *(float *)&pUVar4[4].field_0x14;
    fStack_d0 = *(float *)&pUVar4[4].field_0x18;
    fStack_cc = *(float *)&pUVar4[4].field_0x1c;
    fStack_c8 = *(float *)&pUVar4[4].field_0x20;
    local_c4 = *(float *)&pUVar4[4].field_0x24;
    fStack_c0 = *(float *)(pUVar4 + 5);
    local_bc = (char)*(undefined4 *)&pUVar4[5].field_0x4;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  FAudioReverbEffect::FAudioReverbEffect(local_b8);
  fVar3 = __real_41200000;
  if (local_bc == '\0') {
    auVar6._4_4_ = local_c4;
    auVar6._0_4_ = local_c4;
    auVar6._8_4_ = local_c4;
    auVar6._12_4_ = local_c4;
    if (__real_41200000 <= local_c4) {
      auVar6._0_4_ = __real_41200000;
    }
    if (auVar6._0_4_ <= 0.0) {
      auVar2._12_4_ = 0;
      auVar2._0_12_ = auVar6._4_12_;
      auVar6 = auVar2 << 0x20;
    }
    local_b8[0].Volume = auVar6._0_4_;
  }
  else {
    local_b8[0].Volume = 0.0;
  }
  local_b8[0].Density = fStack_dc;
  local_b8[0].Diffusion = fStack_d8;
  local_b8[0].Gain = fStack_c8;
  local_b8[0].GainHF = fVar8;
  local_b8[0].DecayTime = fStack_e0;
  local_b8[0].DecayHFRatio = fStack_d0;
  local_b8[0].ReflectionsGain = fVar9;
  local_b8[0].ReflectionsDelay = fVar7;
  local_b8[0].LateGain = fStack_cc;
  local_b8[0].LateDelay = fStack_e4;
  local_b8[0].AirAbsorptionGainHF = local_d4;
  local_b8[0].bBypassEarlyReflections = (bool)local_f8;
  local_b8[0].bBypassLateReflections = (bool)local_e8;
  (**(code **)(*(longlong *)this + 0x10))(this,local_b8);
  fVar7 = __real_3f800000;
  if (local_bc == '\0') {
    fVar10 = local_c4;
    if (fVar3 <= local_c4) {
      fVar10 = fVar3;
    }
    fVar7 = fStack_c0;
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
  }
  lpCriticalSection_00 = &(this->WetDryParams).CritSect;
  if (lpCriticalSection_00 != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
    (this->WetDryParams).CurrentParams.WetLevel = fVar10;
    (this->WetDryParams).CurrentParams.DryLevel = fVar7;
    (this->WetDryParams).bChanged = true;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
    local_b8[0]._padding_ = (longlong)&___7FAudioEffectParameters__6B_;
    FMemScope::~FMemScope(&local_res10);
    FLLMScope::~FLLMScope(local_res8);
    return;
  }
LAB_1465644d7:
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// OnProcessAudio @ 146564ce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSubmixEffectReverb::OnProcessAudio
          (FSubmixEffectReverb *this,FSoundEffectSubmixInputData *param_1,
          FSoundEffectSubmixOutputData *param_2)

{
  int *piVar1;
  TUniquePtr<Audio::FPlateReverbFast,TDefaultDelete<Audio::FPlateReverbFast>_> *pTVar2;
  FWindowsRecursiveMutex *pFVar3;
  TArray<float,TAlignedHeapAllocator<16>_> *this_00;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  FName FVar7;
  code *pcVar8;
  bool bVar9;
  FPlateReverbFast *pFVar10;
  FPlateReverbFast *this_01;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_AudioMixerSubmixReverb> FVar12;
  FPlateReverbFastSettings *pFVar13;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  uint uVar14;
  FNameEntryId FVar15;
  FName FVar16;
  EQuadBehavior EVar17;
  FPlateReverbFast *pFVar18;
  float fVar19;
  FLLMScope local_res10 [2];
  FColor_u_0 local_res18 [2];
  uint local_res20;
  FName local_168;
  uint local_160;
  uint uStack_15c;
  FName local_158;
  LARGE_INTEGER local_148;
  FMemScope local_140;
  FStatMessage local_138;
  FPlateReverbFastSettings local_128;
  FScriptContainerElement *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  FScriptContainerElement *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  FName local_c0;
  TArrayView<float,int> local_b8;
  TArrayView<float_const_,int> local_a8;
  FPlateReverbFastSettings local_98;
  
  FLLMScope::FLLMScope(local_res10,AudioMixer,false,None,Default,true);
  FMemScope::FMemScope(&local_140,AudioMixer,true);
  if ((param_1->NumChannels != 2) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InData.NumChannels == 2",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Effects\\AudioMixerSubmixEffectReverb.cpp"
                         ,0x8d,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((param_2->NumChannels < 2) || (DisableSubmixReverbCVarFast == 1)) goto LAB_146565306;
  pTVar2 = &this->PlateReverb;
  pFVar18 = (FPlateReverbFast *)0x0;
  if (pTVar2->Ptr == (FPlateReverbFast *)0x0) {
    Audio::FPlateReverbFastSettings::FPlateReverbFastSettings(&local_98);
    pFVar3 = &(this->ReverbParams).CritSect;
    if (pFVar3 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar3);
    local_98.EarlyReflections.Gain = (this->ReverbParams).CurrentParams.EarlyReflections.Gain;
    local_98.EarlyReflections.PreDelayMsec =
         (this->ReverbParams).CurrentParams.EarlyReflections.PreDelayMsec;
    local_98.EarlyReflections.Bandwidth =
         (this->ReverbParams).CurrentParams.EarlyReflections.Bandwidth;
    local_98.EarlyReflections.Decay = (this->ReverbParams).CurrentParams.EarlyReflections.Decay;
    local_98.bEnableEarlyReflections = (this->ReverbParams).CurrentParams.bEnableEarlyReflections;
    local_98.bEnableLateReflections = (this->ReverbParams).CurrentParams.bEnableLateReflections;
    local_98.QuadBehavior = (this->ReverbParams).CurrentParams.QuadBehavior;
    local_98._51_1_ = (this->ReverbParams).CurrentParams.field_0x33;
    local_98.EarlyReflections.Absorption =
         (this->ReverbParams).CurrentParams.EarlyReflections.Absorption;
    local_98.LateReflections.LateDelayMsec =
         (this->ReverbParams).CurrentParams.LateReflections.LateDelayMsec;
    local_98.LateReflections.LateGainDB =
         (this->ReverbParams).CurrentParams.LateReflections.LateGainDB;
    local_98.LateReflections.Bandwidth =
         (this->ReverbParams).CurrentParams.LateReflections.Bandwidth;
    local_98.LateReflections.Diffusion =
         (this->ReverbParams).CurrentParams.LateReflections.Diffusion;
    local_98.LateReflections.Dampening =
         (this->ReverbParams).CurrentParams.LateReflections.Dampening;
    local_98.LateReflections.Decay = (this->ReverbParams).CurrentParams.LateReflections.Decay;
    local_98.LateReflections.Density = (this->ReverbParams).CurrentParams.LateReflections.Density;
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar3);
    pFVar10 = ::operator_new(0x5d8);
    this_01 = pFVar18;
    if (pFVar10 != (FPlateReverbFast *)0x0) {
      this_01 = Audio::FPlateReverbFast::FPlateReverbFast(pFVar10,this->SampleRate,0x200,&local_98);
    }
    if (pTVar2 == (TUniquePtr<Audio::FPlateReverbFast,TDefaultDelete<Audio::FPlateReverbFast>_> *)
                  &local_c8) {
      if (this_01 != (FPlateReverbFast *)0x0) {
        Audio::FPlateReverbFast::~FPlateReverbFast(this_01);
        goto LAB_146564e63;
      }
    }
    else {
      pFVar10 = pTVar2->Ptr;
      pTVar2->Ptr = this_01;
      if (pFVar10 != (FPlateReverbFast *)0x0) {
        Audio::FPlateReverbFast::~FPlateReverbFast(pFVar10);
        this_01 = pFVar10;
LAB_146564e63:
        ::operator_delete(this_01,0x5d8);
      }
    }
  }
  if (__CsvProfilerStat155 == false) {
    FCsvProfilerTrace::OutputInlineStat("SubmixReverb",_GCsvCategory_Audio.Index);
    __CsvProfilerStat155 = true;
  }
  local_res20 = _GCsvCategory_Audio.Index;
  FCsvProfiler::BeginStat("SubmixReverb",_GCsvCategory_Audio.Index,"CSV_SubmixReverb");
  FVar12 = StatPtr_STAT_AudioMixerSubmixReverb;
  if (StatPtr_STAT_AudioMixerSubmixReverb ==
      (FThreadSafeStaticStat<FStat_STAT_AudioMixerSubmixReverb>)0x0) {
    pFVar11 = ::FName::FName(&local_c0,"STAT_AudioMixerSubmixReverb");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_AudioMixerSubmixReverb>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioMixerSubmixReverb,*pFVar11,
                        L"Submix Reverb","STATGROUP_AudioMixer","STATCAT_Advanced",L"AudioMixer",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar7 = *(FName *)FVar12;
  local_158.ComparisonIndex.Value = 0;
  local_158.Number = 0;
  FVar15 = FVar7.ComparisonIndex.Value;
  uVar14 = FVar7.Number;
  if ((FVar15.Value != 0) || (FVar16 = local_158, uVar14 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      pFVar18 = (FPlateReverbFast *)&DAT_00000001;
      if (-1 < CpuChannel->Enabled) {
        local_168.ComparisonIndex.Value = FVar15.Value;
        local_168.Number = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_168,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Effects\\AudioMixerSubmixEffectReverb.cpp"
                   ,0x9c);
        pFVar18 = (FPlateReverbFast *)&DAT_00000003;
      }
    }
    FVar16 = local_158;
    if (FThreadStats::bPrimaryEnable != false) {
      local_160 = FVar15.Value;
      uStack_15c = uVar14;
      FThreadStats::AddMessage(FVar7,CycleScopeStart);
      pFVar18 = (FPlateReverbFast *)(ulonglong)(byte)((byte)pFVar18 | 4);
      FVar16 = FVar7;
    }
  }
  Audio::FPlateReverbFastSettings::FPlateReverbFastSettings(&local_128);
  if (pTVar2->Ptr != (FPlateReverbFast *)0x0) {
    pFVar3 = &(this->ReverbParams).CritSect;
    if (pFVar3 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar3);
    if ((this->ReverbParams).bChanged == false) {
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar3);
    }
    else {
      local_128.EarlyReflections.Gain = (this->ReverbParams).CurrentParams.EarlyReflections.Gain;
      local_128.EarlyReflections.PreDelayMsec =
           (this->ReverbParams).CurrentParams.EarlyReflections.PreDelayMsec;
      local_128.EarlyReflections.Bandwidth =
           (this->ReverbParams).CurrentParams.EarlyReflections.Bandwidth;
      local_128.EarlyReflections.Decay = (this->ReverbParams).CurrentParams.EarlyReflections.Decay;
      local_128.bEnableEarlyReflections = (this->ReverbParams).CurrentParams.bEnableEarlyReflections
      ;
      local_128.bEnableLateReflections = (this->ReverbParams).CurrentParams.bEnableLateReflections;
      local_128.QuadBehavior = (this->ReverbParams).CurrentParams.QuadBehavior;
      local_128._51_1_ = (this->ReverbParams).CurrentParams.field_0x33;
      local_128._16_8_ =
           *(undefined8 *)&(this->ReverbParams).CurrentParams.EarlyReflections.Absorption;
      local_128.LateReflections.LateGainDB =
           (this->ReverbParams).CurrentParams.LateReflections.LateGainDB;
      local_128.LateReflections.Bandwidth =
           (this->ReverbParams).CurrentParams.LateReflections.Bandwidth;
      (this->ReverbParams).bChanged = false;
      local_128.LateReflections.Diffusion =
           (this->ReverbParams).CurrentParams.LateReflections.Diffusion;
      local_128.LateReflections.Dampening =
           (this->ReverbParams).CurrentParams.LateReflections.Dampening;
      local_128.LateReflections.Decay = (this->ReverbParams).CurrentParams.LateReflections.Decay;
      local_128.LateReflections.Density = (this->ReverbParams).CurrentParams.LateReflections.Density
      ;
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar3);
      Audio::FPlateReverbFast::SetSettings(pTVar2->Ptr,&local_128);
    }
  }
  if (DisableQuadReverbCVarFast == 0) {
    EVar17 = (EnableReverbStereoFlipForQuadCVarFast != 0) + QuadMatched;
  }
  else {
    EVar17 = StereoOnly;
  }
  if ((pTVar2->Ptr != (FPlateReverbFast *)0x0) &&
     (pFVar13 = Audio::FPlateReverbFast::GetSettings(pTVar2->Ptr), pFVar13->QuadBehavior != EVar17))
  {
    local_128.EarlyReflections.Gain = (pFVar13->EarlyReflections).Gain;
    local_128.EarlyReflections.PreDelayMsec = (pFVar13->EarlyReflections).PreDelayMsec;
    local_128.EarlyReflections.Bandwidth = (pFVar13->EarlyReflections).Bandwidth;
    local_128.EarlyReflections.Decay = (pFVar13->EarlyReflections).Decay;
    local_128._16_8_ = *(undefined8 *)&(pFVar13->EarlyReflections).Absorption;
    local_128.LateReflections.LateGainDB = (pFVar13->LateReflections).LateGainDB;
    local_128.LateReflections.Bandwidth = (pFVar13->LateReflections).Bandwidth;
    local_128.LateReflections.Diffusion = (pFVar13->LateReflections).Diffusion;
    local_128.LateReflections.Dampening = (pFVar13->LateReflections).Dampening;
    local_128.LateReflections.Decay = (pFVar13->LateReflections).Decay;
    local_128.LateReflections.Density = (pFVar13->LateReflections).Density;
    uVar5._0_1_ = pFVar13->bEnableEarlyReflections;
    uVar5._1_1_ = pFVar13->bEnableLateReflections;
    uVar5._2_1_ = pFVar13->QuadBehavior;
    uVar5._3_1_ = pFVar13->field_0x33;
    local_128._48_2_ = SUB42(uVar5,0);
    local_128.QuadBehavior = EVar17;
    local_128._51_1_ = uVar5._3_1_;
    Audio::FPlateReverbFast::SetSettings(pTVar2->Ptr,&local_128);
  }
  fVar19 = (this->CurrentWetDry).WetLevel;
  pFVar3 = &(this->WetDryParams).CritSect;
  if (pFVar3 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)pFVar3);
  if ((this->WetDryParams).bChanged != false) {
    (this->WetDryParams).bChanged = false;
    this->CurrentWetDry = (this->WetDryParams).CurrentParams;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)pFVar3);
  if (fVar19 < 0.0) {
    fVar19 = (this->CurrentWetDry).WetLevel;
  }
  this_00 = &this->WetInputBuffer;
  (this->WetInputBuffer).ArrayNum = 0;
  if ((this->WetInputBuffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&this_00->AllocatorInstance,0,&(this->WetInputBuffer).ArrayMax);
  }
  iVar6 = param_1->AudioBuffer->ArrayNum;
  if (0 < iVar6) {
    TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed(this_00,iVar6);
    local_e8 = (this_00->AllocatorInstance).Data;
    iStack_e0 = (this->WetInputBuffer).ArrayNum;
    fVar4 = (this->CurrentWetDry).WetLevel;
    if ((iStack_e0 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_d8 = (param_1->AudioBuffer->AllocatorInstance).Data;
    iVar6 = param_1->AudioBuffer->ArrayNum;
    if ((iVar6 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_b8._12_4_ = uStack_dc;
    local_b8.ArrayNum = iStack_e0;
    local_a8._12_4_ = uStack_cc;
    local_a8.ArrayNum = iVar6;
    local_a8.DataPtr = (float *)local_d8;
    local_b8.DataPtr = (float *)local_e8;
    iStack_d0 = iVar6;
    Audio::ArrayMixIn(&local_a8,&local_b8,fVar19,fVar4);
  }
  Audio::FPlateReverbFast::ProcessAudio
            ((this->PlateReverb).Ptr,&this->WetInputBuffer,param_1->NumChannels,param_2->AudioBuffer
             ,param_2->NumChannels);
  if (((ulonglong)pFVar18 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (((ulonglong)pFVar18 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((((ulonglong)pFVar18 & 4) != 0) && (FVar16 != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_02 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_02 == (FThreadStats *)0x0) {
      this_03 = FThreadStatsPool::Get();
      this_02 = FThreadStatsPool::GetFromPool(this_03);
    }
    if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
      local_138.NameAndInfo.Index = FVar16.ComparisonIndex.Value;
      local_138.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_148);
      local_138.StatData.Pad[4] = '\0';
      local_138.StatData.Pad[5] = '\0';
      local_138.StatData.Pad[6] = '\0';
      local_138.StatData.Pad[7] = '\0';
      local_138.StatData.Pad[0] = local_148.s.LowPart._0_1_;
      local_138.StatData.Pad[1] = local_148.s.LowPart._1_1_;
      local_138.StatData.Pad[2] = local_148.s.LowPart._2_1_;
      local_138.StatData.Pad[3] = local_148.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_02,&local_138);
      piVar1 = &this_02->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_02,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_02,false,false);
      }
    }
  }
  FCsvProfiler::EndStat("SubmixReverb",local_res20);
LAB_146565306:
  FMemScope::~FMemScope(&local_140);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// SetParameters @ 146573720

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FSubmixEffectReverb::SetParameters(FSubmixEffectReverb *this,FAudioEffectParameters *param_1)

{
  FWindowsRecursiveMutex *pFVar1;
  float fVar2;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  FPlateReverbFastSettings local_58;
  
  FLLMScope::FLLMScope(local_res8,AudioMixer,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,AudioMixer,true);
  Audio::FPlateReverbFastSettings::FPlateReverbFastSettings(&local_58);
  local_58.EarlyReflections.Gain = *(float *)&param_1[5].field_0x4 * ___real_3ea2067b;
  if (__real_3f800000 <= local_58.EarlyReflections.Gain) {
    local_58.EarlyReflections.Gain = __real_3f800000;
  }
  local_58.bEnableLateReflections = param_1[8].field_0x5 == '\0';
  local_58.bEnableEarlyReflections = param_1[8].field_0x4 == '\0';
  local_58.EarlyReflections.PreDelayMsec = *(float *)(param_1 + 6) * ___real_40555555;
  if (__real_3f800000 <= *(float *)(param_1 + 6) * ___real_40555555) {
    local_58.EarlyReflections.PreDelayMsec = __real_3f800000;
  }
  if (local_58.EarlyReflections.Gain <= 0.0) {
    local_58.EarlyReflections.Gain = 0.0;
  }
  if (local_58.EarlyReflections.PreDelayMsec <= 0.0) {
    local_58.EarlyReflections.PreDelayMsec = 0.0;
  }
  local_58.EarlyReflections.PreDelayMsec = local_58.EarlyReflections.PreDelayMsec * __real_43960000;
  local_58.EarlyReflections.Bandwidth = __real_3f800000 - *(float *)(param_1 + 4);
  if (__real_3f800000 <= __real_3f800000 - *(float *)(param_1 + 4)) {
    local_58.EarlyReflections.Bandwidth = __real_3f800000;
  }
  if (local_58.EarlyReflections.Bandwidth <= 0.0) {
    local_58.EarlyReflections.Bandwidth = 0.0;
  }
  local_58.LateReflections.LateDelayMsec = *(float *)(param_1 + 7) * __real_41200000;
  if (__real_3f800000 <= *(float *)(param_1 + 7) * __real_41200000) {
    local_58.LateReflections.LateDelayMsec = __real_3f800000;
  }
  if (local_58.LateReflections.LateDelayMsec <= 0.0) {
    local_58.LateReflections.LateDelayMsec = 0.0;
  }
  local_58.LateReflections.LateGainDB = *(float *)&param_1[3].field_0x4;
  if (__real_3f800000 <= *(float *)&param_1[3].field_0x4) {
    local_58.LateReflections.LateGainDB = __real_3f800000;
  }
  local_58.LateReflections.LateDelayMsec = local_58.LateReflections.LateDelayMsec * __real_42c80000;
  if (local_58.LateReflections.LateGainDB <= 0.0) {
    local_58.LateReflections.LateGainDB = 0.0;
  }
  fVar2 = *(float *)&param_1[7].field_0x4;
  if (__real_3f800000 <= *(float *)&param_1[7].field_0x4) {
    fVar2 = __real_3f800000;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  local_58.LateReflections.Diffusion =
       (*(float *)(param_1 + 3) - __real_3d4ccccd) * ___real_3f86bca2;
  if (__real_3f800000 <= local_58.LateReflections.Diffusion) {
    local_58.LateReflections.Diffusion = __real_3f800000;
  }
  local_58.LateReflections.Bandwidth = fVar2 * __real_3f000000 + __real_3dcccccd;
  if (local_58.LateReflections.Diffusion <= 0.0) {
    local_58.LateReflections.Diffusion = 0.0;
  }
  local_58.LateReflections.Diffusion = local_58.LateReflections.Diffusion * __real_3f733333;
  local_58.LateReflections.Dampening =
       (*(float *)(param_1 + 5) - __real_3d4ccccd) * ___real_3f06bca1;
  if (__real_3f800000 <= local_58.LateReflections.Dampening) {
    local_58.LateReflections.Dampening = __real_3f800000;
  }
  if (local_58.LateReflections.Dampening <= 0.0) {
    local_58.LateReflections.Dampening = 0.0;
  }
  local_58.LateReflections.Dampening = local_58.LateReflections.Dampening * __real_3f7fbe77;
  fVar2 = *(float *)&param_1[2].field_0x4 * ___real_3f86bca2;
  if (__real_3f800000 <= fVar2) {
    fVar2 = __real_3f800000;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  local_58.LateReflections.Density = fVar2 * __real_3f70a3d7 + __real_3d75c28f;
  local_58.LateReflections.Decay =
       FRichCurve::Eval(&this->DecayCurve,*(float *)&param_1[4].field_0x4,0.0);
  fVar2 = local_58.LateReflections.LateGainDB;
  if (local_58.LateReflections.LateGainDB <= __real_322bcc77) {
    fVar2 = __real_322bcc77;
  }
  local_58.LateReflections.LateGainDB = logf(fVar2);
  local_58.LateReflections.LateGainDB = local_58.LateReflections.LateGainDB * __real_410af967;
  pFVar1 = &(this->ReverbParams).CritSect;
  if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
    (this->ReverbParams).bChanged = true;
    (this->ReverbParams).CurrentParams.EarlyReflections.Gain = local_58.EarlyReflections.Gain;
    (this->ReverbParams).CurrentParams.EarlyReflections.PreDelayMsec =
         local_58.EarlyReflections.PreDelayMsec;
    (this->ReverbParams).CurrentParams.EarlyReflections.Bandwidth =
         local_58.EarlyReflections.Bandwidth;
    (this->ReverbParams).CurrentParams.EarlyReflections.Decay = local_58.EarlyReflections.Decay;
    (this->ReverbParams).CurrentParams.EarlyReflections.Absorption =
         local_58.EarlyReflections.Absorption;
    (this->ReverbParams).CurrentParams.LateReflections.LateDelayMsec =
         local_58.LateReflections.LateDelayMsec;
    (this->ReverbParams).CurrentParams.LateReflections.LateGainDB =
         local_58.LateReflections.LateGainDB;
    (this->ReverbParams).CurrentParams.LateReflections.Bandwidth =
         local_58.LateReflections.Bandwidth;
    (this->ReverbParams).CurrentParams.LateReflections.Diffusion =
         local_58.LateReflections.Diffusion;
    (this->ReverbParams).CurrentParams.LateReflections.Dampening =
         local_58.LateReflections.Dampening;
    (this->ReverbParams).CurrentParams.LateReflections.Decay = local_58.LateReflections.Decay;
    (this->ReverbParams).CurrentParams.LateReflections.Density = local_58.LateReflections.Density;
    (this->ReverbParams).CurrentParams.bEnableEarlyReflections = local_58.bEnableEarlyReflections;
    (this->ReverbParams).CurrentParams.bEnableLateReflections = local_58.bEnableLateReflections;
    (this->ReverbParams).CurrentParams.QuadBehavior = local_58.QuadBehavior;
    (this->ReverbParams).CurrentParams.field_0x33 = local_58._51_1_;
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
    fVar2 = *(float *)(param_1 + 2);
    pFVar1 = &(this->WetDryParams).CritSect;
    if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
      (this->WetDryParams).CurrentParams.WetLevel = fVar2;
      (this->WetDryParams).bChanged = true;
      (this->WetDryParams).CurrentParams.DryLevel = 0.0;
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
      FMemScope::~FMemScope(&local_res10);
      FLLMScope::~FLLMScope(local_res8);
      return true;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SupportsDefaultReverb @ 146578d40

bool __thiscall FSubmixEffectReverb::SupportsDefaultReverb(FSubmixEffectReverb *this)

{
  return true;
}

// UpdateParameters @ 14657c7a0

void __thiscall FSubmixEffectReverb::UpdateParameters(FSubmixEffectReverb *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined4 uVar1;
  FPlateReverbFast *this_00;
  FPlateReverbFastSettings *pFVar2;
  EQuadBehavior EVar3;
  FPlateReverbFastSettings local_48;
  
  Audio::FPlateReverbFastSettings::FPlateReverbFastSettings(&local_48);
  if ((this->PlateReverb).Ptr != (FPlateReverbFast *)0x0) {
    lpCriticalSection = &(this->ReverbParams).CritSect;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((this->ReverbParams).bChanged == false) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    else {
      local_48.EarlyReflections.Gain = (this->ReverbParams).CurrentParams.EarlyReflections.Gain;
      local_48.EarlyReflections.PreDelayMsec =
           (this->ReverbParams).CurrentParams.EarlyReflections.PreDelayMsec;
      local_48.EarlyReflections.Bandwidth =
           (this->ReverbParams).CurrentParams.EarlyReflections.Bandwidth;
      local_48.EarlyReflections.Decay = (this->ReverbParams).CurrentParams.EarlyReflections.Decay;
      local_48.bEnableEarlyReflections = (this->ReverbParams).CurrentParams.bEnableEarlyReflections;
      local_48.bEnableLateReflections = (this->ReverbParams).CurrentParams.bEnableLateReflections;
      local_48.QuadBehavior = (this->ReverbParams).CurrentParams.QuadBehavior;
      local_48._51_1_ = (this->ReverbParams).CurrentParams.field_0x33;
      local_48._16_8_ =
           *(undefined8 *)&(this->ReverbParams).CurrentParams.EarlyReflections.Absorption;
      local_48.LateReflections.LateGainDB =
           (this->ReverbParams).CurrentParams.LateReflections.LateGainDB;
      local_48.LateReflections.Bandwidth =
           (this->ReverbParams).CurrentParams.LateReflections.Bandwidth;
      (this->ReverbParams).bChanged = false;
      local_48.LateReflections.Diffusion =
           (this->ReverbParams).CurrentParams.LateReflections.Diffusion;
      local_48.LateReflections.Dampening =
           (this->ReverbParams).CurrentParams.LateReflections.Dampening;
      local_48.LateReflections.Decay = (this->ReverbParams).CurrentParams.LateReflections.Decay;
      local_48.LateReflections.Density = (this->ReverbParams).CurrentParams.LateReflections.Density;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      Audio::FPlateReverbFast::SetSettings((this->PlateReverb).Ptr,&local_48);
    }
  }
  if (DisableQuadReverbCVarFast == 0) {
    EVar3 = (EnableReverbStereoFlipForQuadCVarFast != 0) + QuadMatched;
  }
  else {
    EVar3 = StereoOnly;
  }
  this_00 = (this->PlateReverb).Ptr;
  if (this_00 != (FPlateReverbFast *)0x0) {
    pFVar2 = Audio::FPlateReverbFast::GetSettings(this_00);
    if (pFVar2->QuadBehavior != EVar3) {
      local_48.EarlyReflections.Gain = (pFVar2->EarlyReflections).Gain;
      local_48.EarlyReflections.PreDelayMsec = (pFVar2->EarlyReflections).PreDelayMsec;
      local_48.EarlyReflections.Bandwidth = (pFVar2->EarlyReflections).Bandwidth;
      local_48.EarlyReflections.Decay = (pFVar2->EarlyReflections).Decay;
      local_48._16_8_ = *(undefined8 *)&(pFVar2->EarlyReflections).Absorption;
      local_48.LateReflections.LateGainDB = (pFVar2->LateReflections).LateGainDB;
      local_48.LateReflections.Bandwidth = (pFVar2->LateReflections).Bandwidth;
      local_48.LateReflections.Diffusion = (pFVar2->LateReflections).Diffusion;
      local_48.LateReflections.Dampening = (pFVar2->LateReflections).Dampening;
      local_48.LateReflections.Decay = (pFVar2->LateReflections).Decay;
      local_48.LateReflections.Density = (pFVar2->LateReflections).Density;
      uVar1._0_1_ = pFVar2->bEnableEarlyReflections;
      uVar1._1_1_ = pFVar2->bEnableLateReflections;
      uVar1._2_1_ = pFVar2->QuadBehavior;
      uVar1._3_1_ = pFVar2->field_0x33;
      local_48._48_2_ = SUB42(uVar1,0);
      local_48.QuadBehavior = EVar3;
      local_48._51_1_ = uVar1._3_1_;
      Audio::FPlateReverbFast::SetSettings((this->PlateReverb).Ptr,&local_48);
    }
  }
  return;
}

