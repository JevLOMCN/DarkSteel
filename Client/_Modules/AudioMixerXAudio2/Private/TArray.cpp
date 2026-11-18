// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixerXAudio2
// Functions: 1

// CopyToEmpty<enum_EAudioMixerChannel::Type,int> @ 148d3b460

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TArray<enum_EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>::
CopyToEmpty<enum_EAudioMixerChannel::Type,int>(void *this,Type *param_1,int param_2,int param_3)

{
  *(int *)((longlong)this + 8) = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    *(undefined4 *)((longlong)this + 0xc) = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,param_2,param_3,this,param_2,(int *)((longlong)this + 0xc));
  if (param_2 != 0) {
    memcpy(*(void **)this,param_1,(longlong)param_2 << 2);
  }
  return;
}

