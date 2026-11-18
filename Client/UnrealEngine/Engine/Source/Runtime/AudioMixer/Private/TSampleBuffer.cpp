// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 1

// operator= @ 1464dd2b0

TSampleBuffer<short> * __thiscall
Audio::TSampleBuffer<short>::operator=(TSampleBuffer<short> *this,TSampleBuffer<short> *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = param_1->NumSamples;
  this->NumSamples = uVar3;
  this->NumFrames = param_1->NumFrames;
  this->NumChannels = param_1->NumChannels;
  this->SampleRate = param_1->SampleRate;
  this->SampleDuration = param_1->SampleDuration;
  if (-1 < (int)uVar3) {
    piVar1 = &(this->RawPCMData).ArrayMax;
    piVar2 = &(this->RawPCMData).ArrayNum;
    *piVar2 = 0;
    if ((this->RawPCMData).ArrayMax < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar3,(ForAnyElementType *)this,0,piVar1);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,this->NumSamples,(ForAnyElementType *)this,piVar2,piVar1);
    memcpy((this->RawPCMData).AllocatorInstance.Data,(param_1->RawPCMData).AllocatorInstance.Data,
           (longlong)this->NumSamples * 2);
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

