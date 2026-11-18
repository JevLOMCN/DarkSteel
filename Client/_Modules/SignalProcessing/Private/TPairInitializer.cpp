// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 1

// operator<enum_Audio::EMusicalScale::Scale,Audio::ScaleDegreeSet>_TTuple<enum_Audio::EMusicalScale::Scale,Audio::ScaleDegreeSet> @ 1444e9150

TTuple<Audio::EMusicalScale::Scale,Audio::ScaleDegreeSet> * __thiscall
TPairInitializer<enum_Audio::EMusicalScale::Scale_const_&,Audio::ScaleDegreeSet_const_&>::
operator<enum_Audio::EMusicalScale::Scale,Audio::ScaleDegreeSet>_TTuple<enum_Audio::EMusicalScale::Scale,Audio::ScaleDegreeSet>
          (void *this,
          TTuple<Audio::EMusicalScale::Scale,Audio::ScaleDegreeSet> *__return_storage_ptr__)

{
  int iVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined1 *puVar4;
  
  puVar2 = *(undefined8 **)((longlong)this + 8);
  puVar4 = &__return_storage_ptr__->field_0x8;
  *(undefined4 *)__return_storage_ptr__ = **(undefined4 **)this;
  *(undefined8 *)puVar4 = 0;
  iVar1 = *(int *)(puVar2 + 1);
  pvVar3 = (void *)*puVar2;
  *(int *)&__return_storage_ptr__->field_0x10 = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x14 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar1,0,(ForAnyElementType *)puVar4,iVar1,
               (int *)&__return_storage_ptr__->field_0x14);
    memcpy(*(void **)puVar4,pvVar3,(longlong)iVar1 << 2);
  }
  puVar4 = &__return_storage_ptr__->field_0x18;
  *(undefined8 *)puVar4 = 0;
  iVar1 = *(int *)(puVar2 + 3);
  pvVar3 = (void *)puVar2[2];
  *(int *)&__return_storage_ptr__->field_0x20 = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x24 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar1,0,(ForAnyElementType *)puVar4,iVar1,
               (int *)&__return_storage_ptr__->field_0x24);
    memcpy(*(void **)puVar4,pvVar3,(longlong)iVar1 << 2);
  }
  return __return_storage_ptr__;
}

