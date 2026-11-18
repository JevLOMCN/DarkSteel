// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 3

// Init @ 14f0e4e80

void __thiscall
FSourceEffectPhaser::Init(FSourceEffectPhaser *this,FSoundEffectSourceInitData *param_1)

{
  LOCK();
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  UNLOCK();
  Audio::FPhaser::Init(&this->Phaser,param_1->SampleRate,param_1->NumSourceChannels);
  return;
}

// OnPresetChanged @ 14f0ee4e0

void __thiscall FSourceEffectPhaser::OnPresetChanged(FSourceEffectPhaser *this)

{
  undefined1 *lpCriticalSection;
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  undefined1 auVar4 [16];
  
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = USourceEffectPhaserPreset::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      lpCriticalSection = &pUVar2[2].field_0x18;
      if (lpCriticalSection == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      auVar4 = *(undefined1 (*) [16])&pUVar2[3].field_0x18;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      goto LAB_14f0ee571;
    }
  }
  auVar4._8_8_ = 0x3e99999a;
  auVar4._0_8_ = 0x400000003e4ccccd;
LAB_14f0ee571:
  Audio::FPhaser::SetFrequency(&this->Phaser,auVar4._4_4_);
  Audio::FPhaser::SetWetLevel(&this->Phaser,auVar4._0_4_);
  Audio::FPhaser::SetQuadPhase(&this->Phaser,auVar4[0xd]);
  Audio::FPhaser::SetFeedback(&this->Phaser,auVar4._8_4_);
  Audio::FPhaser::SetLFOType(&this->Phaser,auVar4._12_4_ & 0xff);
  return;
}

// ProcessAudio @ 14f0f39c0

void __thiscall
FSourceEffectPhaser::ProcessAudio
          (FSourceEffectPhaser *this,FSoundEffectSourceInputData *param_1,float *param_2)

{
  Audio::FPhaser::ProcessAudio
            (&this->Phaser,param_1->InputSourceEffectBufferPtr,param_1->NumSamples,param_2);
  return;
}

