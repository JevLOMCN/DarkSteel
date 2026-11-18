// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 3

// Init @ 14f0e5060

void __thiscall
FSourceEffectStereoDelay::Init(FSourceEffectStereoDelay *this,FSoundEffectSourceInitData *param_1)

{
  float fVar1;
  
  fVar1 = __real_40000000;
  LOCK();
  *(undefined4 *)&this->field_0x5c = 1;
  UNLOCK();
  Audio::FDelayStereo::Init(&this->DelayStereo,param_1->SampleRate,param_1->NumSourceChannels,fVar1)
  ;
  return;
}

// OnPresetChanged @ 14f0eea40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FSourceEffectStereoDelay::OnPresetChanged(FSourceEffectStereoDelay *this)

{
  undefined1 *lpCriticalSection;
  FDelayStereo *this_00;
  int iVar1;
  undefined1 auVar2 [16];
  UObject *pUVar3;
  UClass *pUVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  Type local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined4 uStack_40;
  
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x4c);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = USourceEffectStereoDelayPreset::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14f0eea8b;
  }
  pUVar3 = (UObject *)0x0;
LAB_14f0eea8b:
  if (pUVar3 == (UObject *)0x0) {
    local_58 = PingPong;
    fStack_54 = (float)___xmm_3ecccccd3e4ccccd3dcccccd43fa0000;
    fStack_50 = (float)((ulonglong)___xmm_3ecccccd3e4ccccd3dcccccd43fa0000 >> 0x20);
    fStack_4c = (float)_UNK_15314dde8;
    fStack_48 = (float)((ulonglong)_UNK_15314dde8 >> 0x20);
    uVar6 = 0;
    uStack_40 = 0;
    fVar7 = 20000.0;
    fVar5 = __real_40000000;
  }
  else {
    lpCriticalSection = &pUVar3[2].field_0x18;
    if (lpCriticalSection == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_58 = *(Type *)&pUVar3[3].field_0x18;
    fStack_54 = *(float *)&pUVar3[3].field_0x1c;
    fStack_50 = *(float *)&pUVar3[3].field_0x20;
    fStack_4c = *(float *)&pUVar3[3].field_0x24;
    fStack_48 = *(float *)(pUVar3 + 4);
    uVar6 = *(undefined4 *)&pUVar3[4].field_0x4;
    uStack_40 = *(undefined4 *)&pUVar3[4].field_0x8;
    fVar7 = *(float *)&pUVar3[4].field_0xc;
    fVar5 = *(float *)&pUVar3[4].field_0x10;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  this_00 = &this->DelayStereo;
  Audio::FDelayStereo::SetDelayTimeMsec(this_00,fStack_54);
  Audio::FDelayStereo::SetFeedback(this_00,fStack_50);
  Audio::FDelayStereo::SetWetLevel(this_00,fStack_48);
  Audio::FDelayStereo::SetDelayRatio(this_00,fStack_4c);
  Audio::FDelayStereo::SetMode(this_00,local_58 & 0xff);
  Audio::FDelayStereo::SetFilterEnabled(this_00,SUB41(uStack_40,0));
  auVar2._4_4_ = uVar6;
  auVar2._0_4_ = fStack_48;
  auVar2._8_4_ = uStack_40;
  auVar2._12_4_ = fVar7;
  Audio::FDelayStereo::SetFilterSettings(this_00,auVar2._9_4_ & 0xff,fVar7,fVar5);
  return;
}

// ProcessAudio @ 14f0f3d90

void __thiscall
FSourceEffectStereoDelay::ProcessAudio
          (FSourceEffectStereoDelay *this,FSoundEffectSourceInputData *param_1,float *param_2)

{
  Audio::FDelayStereo::ProcessAudio
            (&this->DelayStereo,param_1->InputSourceEffectBufferPtr,param_1->NumSamples,param_2);
  return;
}

