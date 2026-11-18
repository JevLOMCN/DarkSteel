// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 4

// FSourceEffectDynamicsProcessor @ 14f0b7ec0

FSourceEffectDynamicsProcessor * __thiscall
FSourceEffectDynamicsProcessor::FSourceEffectDynamicsProcessor(FSourceEffectDynamicsProcessor *this)

{
  FSoundEffectBase::FSoundEffectBase((FSoundEffectBase *)this);
  *(undefined8 *)&this->field_0x80 = 0xffffffffffffffff;
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined8 *)&this->field_0x78 = 0;
  *(undefined ***)this = &___7FSourceEffectDynamicsProcessor__6B_;
  Audio::FDynamicsProcessor::FDynamicsProcessor(&this->DynamicsProcessor);
  this->bBypass = false;
  return this;
}

// Init @ 14f0e3fc0

void __thiscall
FSourceEffectDynamicsProcessor::Init
          (FSourceEffectDynamicsProcessor *this,FSoundEffectSourceInitData *param_1)

{
  LOCK();
  *(undefined4 *)&this->field_0x5c = 1;
  UNLOCK();
  Audio::FDynamicsProcessor::Init
            (&this->DynamicsProcessor,param_1->SampleRate,param_1->NumSourceChannels);
  return;
}

// OnPresetChanged @ 14f0ec990

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSourceEffectDynamicsProcessor::OnPresetChanged(FSourceEffectDynamicsProcessor *this)

{
  undefined1 *lpCriticalSection;
  FDynamicsProcessor *this_00;
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  uint uVar4;
  Type TVar5;
  Type TVar6;
  uint local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined8 local_48;
  
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x4c);
  if (pUVar2 == (UObject *)0x0) {
LAB_14f0eca31:
    local_98 = 0x100;
    fStack_94 = (float)___xmm_c0c0000042c800004120000040400000;
    fStack_90 = (float)((ulonglong)___xmm_c0c0000042c800004120000040400000 >> 0x20);
    fStack_8c = (float)_UNK_15314de48;
    fStack_7c = (float)_UNK_15314dd88;
    uStack_78 = (undefined4)((ulonglong)_UNK_15314dd88 >> 0x20);
    local_48 = CONCAT44(local_74,uStack_78) | 0x300000000;
    fStack_88 = (float)((ulonglong)_UNK_15314de48 >> 0x20);
    fStack_84 = (float)___xmm_0000000000000000412000003fc00000;
    fStack_80 = (float)((ulonglong)___xmm_0000000000000000412000003fc00000 >> 0x20);
  }
  else {
    pUVar3 = USourceEffectDynamicsProcessorPreset::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) goto LAB_14f0eca31;
    lpCriticalSection = &pUVar2[2].field_0x18;
    if (lpCriticalSection == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_98 = *(uint *)&pUVar2[3].field_0x18;
    fStack_94 = *(float *)&pUVar2[3].field_0x1c;
    fStack_90 = *(float *)&pUVar2[3].field_0x20;
    fStack_8c = *(float *)&pUVar2[3].field_0x24;
    fStack_88 = *(float *)(pUVar2 + 4);
    fStack_84 = *(float *)&pUVar2[4].field_0x4;
    fStack_80 = *(float *)&pUVar2[4].field_0x8;
    fStack_7c = *(float *)&pUVar2[4].field_0xc;
    local_48 = *(ulonglong *)&pUVar2[4].field_0x10;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  TVar6 = Peak;
  uVar4 = local_98 & 0xff;
  if ((char)local_98 == '\0') {
LAB_14f0ecaab:
    TVar5 = Compressor;
  }
  else if (uVar4 == 1) {
    TVar5 = Limiter;
  }
  else if (uVar4 == 2) {
    TVar5 = Expander;
  }
  else if (uVar4 == 3) {
    TVar5 = Gate;
  }
  else {
    if (uVar4 != 4) goto LAB_14f0ecaab;
    TVar5 = UpwardsCompressor;
  }
  this_00 = &this->DynamicsProcessor;
  Audio::FDynamicsProcessor::SetProcessingMode(this_00,TVar5);
  uVar4 = (uint)(CONCAT44(fStack_94,local_98) >> 8) & 0xff;
  if ((char)(local_98 >> 8) != '\0') {
    if (uVar4 == 1) {
      TVar6 = RootMeanSquared;
      goto LAB_14f0ecae2;
    }
    if (uVar4 == 2) goto LAB_14f0ecae2;
  }
  TVar6 = MeanSquared;
LAB_14f0ecae2:
  Audio::FDynamicsProcessor::SetPeakMode(this_00,TVar6);
  Audio::FDynamicsProcessor::SetLookaheadMsec(this_00,fStack_94);
  Audio::FDynamicsProcessor::SetAttackTime(this_00,fStack_90);
  Audio::FDynamicsProcessor::SetReleaseTime(this_00,fStack_8c);
  Audio::FDynamicsProcessor::SetThreshold(this_00,fStack_88);
  Audio::FDynamicsProcessor::SetRatio(this_00,fStack_84);
  Audio::FDynamicsProcessor::SetKneeBandwidth(this_00,fStack_80);
  Audio::FDynamicsProcessor::SetInputGain(this_00,fStack_7c);
  Audio::FDynamicsProcessor::SetOutputGain(this_00,(float)local_48);
  Audio::FDynamicsProcessor::SetAnalogMode(this_00,(bool)((byte)(local_48._4_4_ >> 1) & 1));
  Audio::FDynamicsProcessor::SetChannelLinkMode
            (this_00,(EDynamicsProcessorChannelLinkMode)(local_48 >> 0x20) & Average);
  return;
}

// ProcessAudio @ 14f0f2950

void __thiscall
FSourceEffectDynamicsProcessor::ProcessAudio
          (FSourceEffectDynamicsProcessor *this,FSoundEffectSourceInputData *param_1,float *param_2)

{
  Audio::FDynamicsProcessor::ProcessAudio
            (&this->DynamicsProcessor,param_1->InputSourceEffectBufferPtr,param_1->NumSamples,
             param_2,(float *)0x0,(float *)0x0);
  return;
}

