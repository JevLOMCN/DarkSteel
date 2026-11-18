// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 12

// FSubmixEffectFilter @ 14f0b89b0

FSubmixEffectFilter * __thiscall FSubmixEffectFilter::FSubmixEffectFilter(FSubmixEffectFilter *this)

{
  FSoundEffectBase::FSoundEffectBase((FSoundEffectBase *)this);
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FSubmixEffectFilter__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0xffffffff;
  this->SampleRate = 0.0;
  Audio::FOnePoleFilter::FOnePoleFilter(&this->OnePoleFilter);
  Audio::FStateVariableFilter::FStateVariableFilter(&this->StateVariableFilter);
  Audio::FLadderFilter::FLadderFilter(&this->LadderFilter);
  this->CurrentFilter = (IFilter *)0x0;
  this->FilterAlgorithm = OnePole;
  this->FilterType = LowPass;
  this->FilterFrequency = 0.0;
  this->FilterFrequencyMod = 0.0;
  this->FilterQ = 0.0;
  this->FilterQMod = 0.0;
  this->NumChannels = 0;
  return this;
}

// ~FSubmixEffectFilter @ 14f0bf5d0

void __thiscall FSubmixEffectFilter::~FSubmixEffectFilter(FSubmixEffectFilter *this)

{
  Audio::FLadderFilter::~FLadderFilter(&this->LadderFilter);
  Audio::FStateVariableFilter::~FStateVariableFilter(&this->StateVariableFilter);
  Audio::FOnePoleFilter::~FOnePoleFilter(&this->OnePoleFilter);
  FSoundEffectBase::~FSoundEffectBase((FSoundEffectBase *)this);
  return;
}

// Init @ 14f0e51b0

void __thiscall
FSubmixEffectFilter::Init(FSubmixEffectFilter *this,FSoundEffectSubmixInitData *param_1)

{
  this->SampleRate = param_1->SampleRate;
  this->CurrentFilter = (IFilter *)&this->OnePoleFilter;
  this->NumChannels = 2;
  InitFilter(this);
  return;
}

// InitFilter @ 14f0e67e0

void __thiscall FSubmixEffectFilter::InitFilter(FSubmixEffectFilter *this)

{
  (**(code **)((this->OnePoleFilter)._padding_ + 8))
            (&this->OnePoleFilter,this->SampleRate,this->NumChannels,0,0);
  (**(code **)((this->StateVariableFilter)._padding_ + 8))
            (&this->StateVariableFilter,this->SampleRate,this->NumChannels,0,0);
  (**(code **)((this->LadderFilter)._padding_ + 8))
            (&this->LadderFilter,this->SampleRate,this->NumChannels,0,0);
  (**(code **)(this->CurrentFilter->_padding_ + 0x48))(this->CurrentFilter,this->FilterType);
  (**(code **)(this->CurrentFilter->_padding_ + 0x10))(this->CurrentFilter,this->FilterFrequency);
  (**(code **)(this->CurrentFilter->_padding_ + 0x20))(this->CurrentFilter,this->FilterQ);
  (**(code **)(this->CurrentFilter->_padding_ + 0x18))(this->CurrentFilter,this->FilterFrequencyMod)
  ;
                    /* WARNING: Could not recover jumptable at 0x00014f0e68cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->CurrentFilter->_padding_ + 0x28))(this->CurrentFilter,this->FilterQMod);
  return;
}

// OnPresetChanged @ 14f0eede0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FSubmixEffectFilter::OnPresetChanged(FSubmixEffectFilter *this)

{
  undefined1 *lpCriticalSection;
  int iVar1;
  float fVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  ESubmixFilterAlgorithm EVar5;
  ESubmixFilterType EVar6;
  float fVar7;
  float fVar8;
  undefined8 local_28;
  
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = USubmixEffectFilterPreset::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      lpCriticalSection = &pUVar3[2].field_0x18;
      if (lpCriticalSection == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      local_28 = *(ulonglong *)&pUVar3[3].field_0x18;
      fVar7 = *(float *)&pUVar3[3].field_0x20;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      goto LAB_14f0eee80;
    }
  }
  local_28 = 0x469c400000000000;
  fVar7 = __real_40000000;
LAB_14f0eee80:
  fVar2 = __real_322bcc77;
  EVar5 = (ESubmixFilterAlgorithm)(local_28 >> 8);
  EVar6 = (ESubmixFilterType)local_28;
  if (EVar5 == this->FilterAlgorithm) {
    fVar8 = this->SampleRate * ___real_3efd70a4;
    if (local_28._4_4_ <= fVar8) {
      fVar8 = local_28._4_4_;
    }
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    if (__real_322bcc77 <
        (float)((uint)(fVar8 - this->FilterFrequency) &
               (uint)___xmm_7fffffff7fffffff7fffffff7fffffff)) {
      this->FilterFrequency = fVar8;
      (**(code **)(this->CurrentFilter->_padding_ + 0x10))();
    }
    if (fVar2 < (float)((uint)(fVar7 - this->FilterQ) &
                       (uint)___xmm_7fffffff7fffffff7fffffff7fffffff)) {
      this->FilterQ = fVar7;
      (**(code **)(this->CurrentFilter->_padding_ + 0x20))();
    }
    if (this->FilterType != EVar6) {
      this->FilterType = EVar6;
      (**(code **)(this->CurrentFilter->_padding_ + 0x48))(this->CurrentFilter,local_28 & 0xff);
    }
  }
  else {
    this->FilterFrequency = local_28._4_4_;
    this->FilterType = EVar6;
    this->FilterQ = fVar7;
    SetFilterAlgorithm(this,EVar5);
  }
  return;
}

// OnProcessAudio @ 14f0f0400

void __thiscall
FSubmixEffectFilter::OnProcessAudio
          (FSubmixEffectFilter *this,FSoundEffectSubmixInputData *param_1,
          FSoundEffectSubmixOutputData *param_2)

{
  (**(code **)(this->CurrentFilter->_padding_ + 0x58))();
  if (this->NumChannels != param_1->NumChannels) {
    this->NumChannels = param_1->NumChannels;
    InitFilter(this);
  }
                    /* WARNING: Could not recover jumptable at 0x00014f0f0468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->CurrentFilter->_padding_ + 0x70))
            (this->CurrentFilter,(param_1->AudioBuffer->AllocatorInstance).Data,
             param_1->AudioBuffer->ArrayNum,(param_2->AudioBuffer->AllocatorInstance).Data);
  return;
}

// SetFilterAlgorithm @ 14f0fb2f0

void __thiscall
FSubmixEffectFilter::SetFilterAlgorithm(FSubmixEffectFilter *this,ESubmixFilterAlgorithm param_1)

{
  IFilter *pIVar1;
  
  if (param_1 == this->FilterAlgorithm) {
    return;
  }
  this->FilterAlgorithm = param_1;
  if (param_1 == OnePole) {
    pIVar1 = (IFilter *)&this->OnePoleFilter;
  }
  else if (param_1 == StateVariable) {
    pIVar1 = (IFilter *)&this->StateVariableFilter;
  }
  else {
    if (param_1 != Ladder) goto LAB_14f0fb33c;
    pIVar1 = (IFilter *)&this->LadderFilter;
  }
  this->CurrentFilter = pIVar1;
LAB_14f0fb33c:
  (**(code **)(this->CurrentFilter->_padding_ + 0x48))(this->CurrentFilter,this->FilterType);
  (**(code **)(this->CurrentFilter->_padding_ + 0x10))(this->CurrentFilter,this->FilterFrequency);
  (**(code **)(this->CurrentFilter->_padding_ + 0x20))(this->CurrentFilter,this->FilterQ);
  (**(code **)(this->CurrentFilter->_padding_ + 0x18))(this->CurrentFilter,this->FilterFrequencyMod)
  ;
                    /* WARNING: Could not recover jumptable at 0x00014f0fb3a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->CurrentFilter->_padding_ + 0x28))(this->CurrentFilter,this->FilterQMod);
  return;
}

// SetFilterCutoffFrequency @ 14f0fb460

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSubmixEffectFilter::SetFilterCutoffFrequency(FSubmixEffectFilter *this,float param_1)

{
  float fVar1;
  
  fVar1 = this->SampleRate * ___real_3efd70a4;
  if (param_1 <= fVar1) {
    fVar1 = param_1;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  if (__real_322bcc77 <
      (float)((uint)(fVar1 - this->FilterFrequency) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->FilterFrequency = fVar1;
                    /* WARNING: Could not recover jumptable at 0x00014f0fb4ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->CurrentFilter->_padding_ + 0x10))(this->CurrentFilter,fVar1);
    return;
  }
  return;
}

// SetFilterCutoffFrequencyMod @ 14f0fb500

void __thiscall
FSubmixEffectFilter::SetFilterCutoffFrequencyMod(FSubmixEffectFilter *this,float param_1)

{
  if (__real_322bcc77 <
      (float)((uint)(param_1 - this->FilterFrequencyMod) & __xmm_7fffffff7fffffff7fffffff7fffffff))
  {
    this->FilterFrequencyMod = param_1;
                    /* WARNING: Could not recover jumptable at 0x00014f0fb52d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->CurrentFilter->_padding_ + 0x18))();
    return;
  }
  return;
}

// SetFilterQ @ 14f0fbc30

void __thiscall FSubmixEffectFilter::SetFilterQ(FSubmixEffectFilter *this,float param_1)

{
  if (__real_322bcc77 <
      (float)((uint)(param_1 - this->FilterQ) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->FilterQ = param_1;
                    /* WARNING: Could not recover jumptable at 0x00014f0fbc5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->CurrentFilter->_padding_ + 0x20))();
    return;
  }
  return;
}

// SetFilterQMod @ 14f0fbdd0

void __thiscall FSubmixEffectFilter::SetFilterQMod(FSubmixEffectFilter *this,float param_1)

{
  if (__real_322bcc77 <
      (float)((uint)(param_1 - this->FilterQMod) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->FilterQMod = param_1;
                    /* WARNING: Could not recover jumptable at 0x00014f0fbdfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->CurrentFilter->_padding_ + 0x28))();
    return;
  }
  return;
}

// SetFilterType @ 14f0fbf60

void __thiscall
FSubmixEffectFilter::SetFilterType(FSubmixEffectFilter *this,ESubmixFilterType param_1)

{
  if (this->FilterType != param_1) {
    this->FilterType = param_1;
                    /* WARNING: Could not recover jumptable at 0x00014f0fbf7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->CurrentFilter->_padding_ + 0x48))(this->CurrentFilter,param_1);
    return;
  }
  return;
}

