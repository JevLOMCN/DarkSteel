// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 3

// Init @ 14f0e4220

void __thiscall
FSourceEffectFoldbackDistortion::Init
          (FSourceEffectFoldbackDistortion *this,FSoundEffectSourceInitData *param_1)

{
  LOCK();
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  UNLOCK();
  Audio::FFoldbackDistortion::Init
            (&this->FoldbackDistortion,param_1->SampleRate,param_1->NumSourceChannels);
  return;
}

// OnPresetChanged @ 14f0ed600

void __thiscall
FSourceEffectFoldbackDistortion::OnPresetChanged(FSourceEffectFoldbackDistortion *this)

{
  undefined1 *lpCriticalSection;
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  float fVar4;
  undefined8 local_28;
  
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = USourceEffectFoldbackDistortionPreset::StaticClass();
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
      local_28 = *(longlong *)&pUVar2[3].field_0x18;
      fVar4 = *(float *)&pUVar2[3].field_0x20;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      goto LAB_14f0ed69f;
    }
  }
  local_28 = (ulonglong)__real_c0c00000 << 0x20;
  fVar4 = __real_c0400000;
LAB_14f0ed69f:
  Audio::FFoldbackDistortion::SetInputGainDb(&this->FoldbackDistortion,(float)local_28);
  Audio::FFoldbackDistortion::SetThresholdDb(&this->FoldbackDistortion,local_28._4_4_);
  Audio::FFoldbackDistortion::SetOutputGainDb(&this->FoldbackDistortion,fVar4);
  return;
}

// ProcessAudio @ 14f0f3230

void __thiscall
FSourceEffectFoldbackDistortion::ProcessAudio
          (FSourceEffectFoldbackDistortion *this,FSoundEffectSourceInputData *param_1,float *param_2
          )

{
  Audio::FFoldbackDistortion::ProcessAudio
            (&this->FoldbackDistortion,param_1->InputSourceEffectBufferPtr,param_1->NumSamples,
             param_2);
  return;
}

