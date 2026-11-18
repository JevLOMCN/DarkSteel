// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 7

// FSubmixEffectFlexiverb @ 14f0b8a50

FSubmixEffectFlexiverb * __thiscall
FSubmixEffectFlexiverb::FSubmixEffectFlexiverb(FSubmixEffectFlexiverb *this)

{
  FSoundEffectBase::FSoundEffectBase((FSoundEffectBase *)this);
  *(undefined4 *)&this->field_0x70 = 0xffffffff;
  *(undefined ***)this = &___7FSubmixEffectFlexiverb__6B_;
  *(undefined8 *)&this->field_0x78 = 0;
  *(undefined4 *)&this->field_0x80 = 0;
  *(undefined4 *)&this->field_0x84 = 0xffffffff;
  (this->Flexiverb).PrivateSettings.Complexity = 4.0;
  (this->Flexiverb).PrivateSettings.DecayTime = 6.0;
  (this->Flexiverb).PrivateSettings.PreDelay = 6.0;
  (this->Flexiverb).PrivateSettings.RoomDampening = 220.0;
  Audio::FDelay::FDelay(&(this->Flexiverb).PreDelayLine);
  (this->Flexiverb).DelayLines.ArrayNum = 0;
  (this->Flexiverb).DelayLines.ArrayMax = 0;
  (this->Flexiverb).APFArray.ArrayNum = 0;
  (this->Flexiverb).APFArray.ArrayMax = 0;
  (this->Flexiverb).DampeningArray.ArrayNum = 0;
  (this->Flexiverb).DampeningArray.ArrayMax = 0;
  (this->Flexiverb).DecayFactor = 0.0;
  (this->Flexiverb).ScatteringMatrixLength = 0;
  (this->Flexiverb).DelayLines.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Flexiverb).APFArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Flexiverb).DampeningArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Params).bChanged = false;
  (this->Params).CurrentParams.Complexity = 4.0;
  (this->Params).CurrentParams.DecayTime = 6.0;
  (this->Params).CurrentParams.PreDelay = 6.0;
  (this->Params).CurrentParams.RoomDampening = 220.0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&(this->Params).CritSect,4000);
  this->bIsEnabled = false;
  return this;
}

// GetDesiredInputChannelCountOverride @ 14f0d92c0

uint __thiscall
FSubmixEffectFlexiverb::GetDesiredInputChannelCountOverride(FSubmixEffectFlexiverb *this)

{
  return 2;
}

// Init @ 14f0e51e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSubmixEffectFlexiverb::Init(FSubmixEffectFlexiverb *this,FSoundEffectSubmixInitData *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FFlexiverb *this_00;
  float fVar1;
  int iVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  FDelayAPF *pFVar7;
  FDelay *this_01;
  FDelay *pFVar8;
  float *pfVar9;
  undefined1 local_res8 [8];
  FFlexiverbSettings local_a8;
  FDelayAPF local_98;
  
  uVar5 = _UNK_15314de28;
  uVar4 = ___xmm_435c000040c0000040c0000040800000;
  lpCriticalSection = &(this->Params).CritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (this->Params).bChanged = true;
    uVar6 = ___xmm_435c000040c0000040c0000040800000;
    ___xmm_435c000040c0000040c0000040800000 = (float)uVar4;
    _UNK_15314de24 = SUB84(uVar4,4);
    fVar1 = _UNK_15314de24;
    (this->Params).CurrentParams.Complexity = ___xmm_435c000040c0000040c0000040800000;
    ___xmm_435c000040c0000040c0000040800000 = uVar6;
    uVar6 = _UNK_15314de28;
    (this->Params).CurrentParams.DecayTime = fVar1;
    _UNK_15314de28 = (float)uVar5;
    _UNK_15314de2c = SUB84(uVar5,4);
    fVar1 = _UNK_15314de2c;
    (this->Params).CurrentParams.PreDelay = _UNK_15314de28;
    _UNK_15314de28 = uVar6;
    (this->Params).CurrentParams.RoomDampening = fVar1;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    fVar3 = __real_40000000;
    fVar1 = param_1->SampleRate;
    this_00 = &this->Flexiverb;
    local_a8._0_8_ = uVar4;
    local_a8._8_8_ = uVar5;
    this_00->SampleRate = (float)(int)fVar1;
    Audio::FDelay::Init(&(this->Flexiverb).PreDelayLine,(float)(int)fVar1,fVar3);
    Audio::FFlexiverb::SetSettings(this_00,&local_a8);
    pFVar7 = Audio::FDelayAPF::FDelayAPF(&local_98);
    TArray<Audio::FDelayAPF,TSizedDefaultAllocator<32>_>::Init(&(this->Flexiverb).APFArray,pFVar7,4)
    ;
    Audio::FDelayAPF::~FDelayAPF(&local_98);
    iVar2 = (this->Flexiverb).APFArray.ArrayNum;
    pfVar9 = Audio::APFAmountFactor;
    this_01 = (FDelay *)(this->Flexiverb).APFArray.AllocatorInstance.Data;
    pFVar8 = (FDelay *)((longlong)this_01 + (longlong)iVar2 * 0x60);
    while( true ) {
      if ((this->Flexiverb).APFArray.ArrayNum != iVar2) {
        `TCheckedPointerIterator<Audio::FDelayAPF,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (this_01 == pFVar8) break;
      Audio::FDelay::Init(this_01,this_00->SampleRate,fVar3);
      fVar1 = *pfVar9;
      pfVar9 = pfVar9 + 1;
      Audio::FDelay::SetDelaySamples(this_01,fVar1);
      this_01 = (FDelay *)&this_01[1].AudioBuffer;
    }
    this->bIsEnabled = true;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// OnPresetChanged @ 14f0eef90

void __thiscall FSubmixEffectFlexiverb::OnPresetChanged(FSubmixEffectFlexiverb *this)

{
  undefined1 *lpCriticalSection;
  FWindowsRecursiveMutex *lpCriticalSection_00;
  UObject *pUVar1;
  UClass *pUVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x4c);
  if (pUVar1 == (UObject *)0x0) {
LAB_14f0ef003:
    uVar3 = 0x41200000;
    uVar4 = 0x40e00000;
    uVar5 = 0x435c0000;
    iVar6 = 2;
  }
  else {
    pUVar2 = USubmixEffectFlexiverbPreset::StaticClass();
    iVar6 = (int)pUVar2->_padding_;
    if ((*(int *)(*(longlong *)&pUVar1->field_0x10 + 0x38) < iVar6) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar1->field_0x10 + 0x30) + (longlong)iVar6 * 8) !=
        &pUVar2->_padding_)) goto LAB_14f0ef003;
    lpCriticalSection = &pUVar1[2].field_0x18;
    if (lpCriticalSection == (undefined1 *)0x0) goto LAB_14f0ef0a7;
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar3 = *(undefined4 *)&pUVar1[3].field_0x18;
    uVar4 = *(undefined4 *)&pUVar1[3].field_0x1c;
    uVar5 = *(undefined4 *)&pUVar1[3].field_0x20;
    iVar6 = *(int *)&pUVar1[3].field_0x24;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  lpCriticalSection_00 = &(this->Params).CritSect;
  if (lpCriticalSection_00 != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
    (this->Params).bChanged = true;
    (this->Params).CurrentParams.Complexity = (float)iVar6;
    (this->Params).CurrentParams.DecayTime = (float)uVar4;
    (this->Params).CurrentParams.PreDelay = (float)uVar3;
    (this->Params).CurrentParams.RoomDampening = (float)uVar5;
                    /* WARNING: Could not recover jumptable at 0x00014f0ef0a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
    return;
  }
LAB_14f0ef0a7:
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// OnProcessAudio @ 14f0f0480

void __thiscall
FSubmixEffectFlexiverb::OnProcessAudio
          (FSubmixEffectFlexiverb *this,FSoundEffectSubmixInputData *param_1,
          FSoundEffectSubmixOutputData *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FFlexiverbSettings local_28;
  
  lpCriticalSection = &(this->Params).CritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((this->Params).bChanged == false) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    else {
      local_28.Complexity = (this->Params).CurrentParams.Complexity;
      local_28.DecayTime = (this->Params).CurrentParams.DecayTime;
      local_28.PreDelay = (this->Params).CurrentParams.PreDelay;
      local_28.RoomDampening = (this->Params).CurrentParams.RoomDampening;
      (this->Params).bChanged = false;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      Audio::FFlexiverb::SetSettings(&this->Flexiverb,&local_28);
    }
    iVar4 = 0;
    pFVar5 = (param_1->AudioBuffer->AllocatorInstance).Data;
    pFVar1 = (param_2->AudioBuffer->AllocatorInstance).Data;
    if (0 < param_2->AudioBuffer->ArrayNum) {
      iVar2 = param_2->NumChannels;
      uVar3 = (ulonglong)(uint)param_1->NumChannels;
      do {
        Audio::FFlexiverb::ProcessAudioFrame
                  (&this->Flexiverb,(float *)pFVar5,(int)uVar3,
                   (float *)(pFVar1 + (longlong)iVar4 * 4),iVar2);
        uVar3 = (ulonglong)param_1->NumChannels;
        iVar2 = param_2->NumChannels;
        iVar4 = iVar4 + iVar2;
        pFVar5 = pFVar5 + uVar3 * 4;
      } while (iVar4 < param_2->AudioBuffer->ArrayNum);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetEffectParameters @ 14f0fa420

void __thiscall
FSubmixEffectFlexiverb::SetEffectParameters
          (FSubmixEffectFlexiverb *this,FFlexiverbSettings *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar1;
  float fVar2;
  float fVar3;
  
  lpCriticalSection = &(this->Params).CritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (this->Params).bChanged = true;
    fVar1 = param_1->DecayTime;
    fVar2 = param_1->PreDelay;
    fVar3 = param_1->RoomDampening;
    (this->Params).CurrentParams.Complexity = param_1->Complexity;
    (this->Params).CurrentParams.DecayTime = fVar1;
    (this->Params).CurrentParams.PreDelay = fVar2;
    (this->Params).CurrentParams.RoomDampening = fVar3;
                    /* WARNING: Could not recover jumptable at 0x00014f0fa46d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// UpdateParameters @ 14f1091c0

void __thiscall FSubmixEffectFlexiverb::UpdateParameters(FSubmixEffectFlexiverb *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FFlexiverbSettings local_18;
  
  lpCriticalSection = &(this->Params).CritSect;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->Params).bChanged != false) {
    local_18.Complexity = (this->Params).CurrentParams.Complexity;
    local_18.DecayTime = (this->Params).CurrentParams.DecayTime;
    local_18.PreDelay = (this->Params).CurrentParams.PreDelay;
    local_18.RoomDampening = (this->Params).CurrentParams.RoomDampening;
    (this->Params).bChanged = false;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    Audio::FFlexiverb::SetSettings(&this->Flexiverb,&local_18);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f10922d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

