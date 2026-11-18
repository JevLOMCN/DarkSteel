// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 3

// Init @ 14f0e5090

void __thiscall
FSourceEffectWaveShaper::Init(FSourceEffectWaveShaper *this,FSoundEffectSourceInitData *param_1)

{
  LOCK();
  *(undefined4 *)&this->field_0x5c = 1;
  UNLOCK();
  Audio::FWaveShaper::Init(&this->WaveShaper,param_1->SampleRate);
  this->NumChannels = param_1->NumSourceChannels;
  return;
}

// OnPresetChanged @ 14f0eebc0

void __thiscall FSourceEffectWaveShaper::OnPresetChanged(FSourceEffectWaveShaper *this)

{
  undefined1 *lpCriticalSection;
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  undefined8 local_res8;
  
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x4c);
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = USourceEffectWaveShaperPreset::StaticClass();
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
      local_res8 = *(ulonglong *)&pUVar2[3].field_0x18;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      goto LAB_14f0eec68;
    }
  }
  local_res8 = (ulonglong)__real_3f800000;
LAB_14f0eec68:
  Audio::FWaveShaper::SetAmount(&this->WaveShaper,(float)local_res8);
  Audio::FWaveShaper::SetOutputGainDb(&this->WaveShaper,local_res8._4_4_);
  return;
}

// ProcessAudio @ 14f0f3dc0

void __thiscall
FSourceEffectWaveShaper::ProcessAudio
          (FSourceEffectWaveShaper *this,FSoundEffectSourceInputData *param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_1->NumSamples) {
    iVar1 = this->NumChannels;
    do {
      iVar2 = 0;
      if (0 < iVar1) {
        lVar3 = (longlong)iVar4 * 4;
        do {
          Audio::FWaveShaper::ProcessAudio
                    (&this->WaveShaper,
                     *(float *)((longlong)param_1->InputSourceEffectBufferPtr + lVar3),
                     param_2 + (iVar2 + iVar4));
          iVar1 = this->NumChannels;
          lVar3 = lVar3 + 4;
          iVar2 = iVar2 + 1;
        } while (iVar2 < iVar1);
      }
      iVar4 = iVar4 + iVar1;
    } while (iVar4 < param_1->NumSamples);
  }
  return;
}

