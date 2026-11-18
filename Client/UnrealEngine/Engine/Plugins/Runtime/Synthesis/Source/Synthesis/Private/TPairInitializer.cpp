// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 1

// operator<enum_EAudioMixerChannel::Type,TArray<enum_EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>_>_TTuple<enum_EAudioMixerChannel::Type,TArray<enum_EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>_> @ 14f0aabd0

TTuple<EAudioMixerChannel::Type,TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>_> *
__thiscall
TPairInitializer<enum_EAudioMixerChannel::Type_const_&,TArray<enum_EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>_const_&>
::
operator<enum_EAudioMixerChannel::Type,TArray<enum_EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>_>_TTuple<enum_EAudioMixerChannel::Type,TArray<enum_EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>_>
          (void *this,
          TTuple<EAudioMixerChannel::Type,TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  void *_Src;
  
  puVar3 = *(undefined8 **)((longlong)this + 8);
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined4 *)__return_storage_ptr__ = **(undefined4 **)this;
  *(undefined8 *)puVar1 = 0;
  iVar2 = *(int *)(puVar3 + 1);
  _Src = (void *)*puVar3;
  *(int *)&__return_storage_ptr__->field_0x10 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x14 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x14);
    memcpy(*(void **)puVar1,_Src,(longlong)iVar2 << 2);
  }
  return __return_storage_ptr__;
}

