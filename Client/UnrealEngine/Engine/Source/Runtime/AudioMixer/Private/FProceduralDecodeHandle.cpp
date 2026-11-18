// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 2

// GetResult @ 146505620

void __thiscall
Audio::FProceduralDecodeHandle::GetResult
          (FProceduralDecodeHandle *this,FProceduralAudioTaskResults *param_1)

{
  FAsyncTaskBase *this_00;
  longlong lVar1;
  undefined1 uVar2;
  undefined3 uVar3;
  
  FAsyncTaskBase::EnsureCompletion(*(FAsyncTaskBase **)&this->field_0x8,true,false);
  this_00 = *(FAsyncTaskBase **)&this->field_0x8;
  FAsyncTaskBase::CheckIdle(this_00);
  uVar2 = *(undefined1 *)((longlong)&this_00[2]._padding_ + 4);
  uVar3 = *(undefined3 *)((longlong)&this_00[2]._padding_ + 5);
  lVar1 = this_00[2]._padding_;
  param_1->NumSamplesWritten = *(undefined4 *)&this_00[2]._padding_;
  param_1->bIsFinished = (bool)uVar2;
  *(undefined3 *)&param_1->field_0x5 = uVar3;
  *(longlong *)&param_1->RelativeRenderCost = lVar1;
  param_1->CPUDuration = (double)this_00[2]._padding_;
  return;
}

// GetType @ 146505bd0

EAudioTaskType __thiscall Audio::FProceduralDecodeHandle::GetType(FProceduralDecodeHandle *this)

{
  return Procedural;
}

