// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 1

// operator<enum_EMetaSoundOutputAudioFormat,Metasound::Engine::FOutputAudioFormatInfo>_TTuple<enum_EMetaSoundOutputAudioFormat,Metasound::Engine::FOutputAudioFormatInfo> @ 14b305730

TTuple<EMetaSoundOutputAudioFormat,Metasound::Engine::FOutputAudioFormatInfo> * __thiscall
TPairInitializer<enum_EMetaSoundOutputAudioFormat_const_&,Metasound::Engine::FOutputAudioFormatInfo_const_&>
::
operator<enum_EMetaSoundOutputAudioFormat,Metasound::Engine::FOutputAudioFormatInfo>_TTuple<enum_EMetaSoundOutputAudioFormat,Metasound::Engine::FOutputAudioFormatInfo>
          (void *this,
          TTuple<EMetaSoundOutputAudioFormat,Metasound::Engine::FOutputAudioFormatInfo>
          *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  void *_Src;
  undefined8 uVar4;
  
  puVar3 = *(undefined8 **)((longlong)this + 8);
  puVar1 = &__return_storage_ptr__->field_0x18;
  *(undefined1 *)__return_storage_ptr__ = **(undefined1 **)this;
  uVar4 = puVar3[1];
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = *puVar3;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = uVar4;
  *(undefined8 *)puVar1 = 0;
  iVar2 = *(int *)(puVar3 + 3);
  _Src = (void *)puVar3[2];
  *(int *)&__return_storage_ptr__->field_0x20 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x24 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x24);
    memcpy(*(void **)puVar1,_Src,(longlong)iVar2 << 3);
  }
  return __return_storage_ptr__;
}

