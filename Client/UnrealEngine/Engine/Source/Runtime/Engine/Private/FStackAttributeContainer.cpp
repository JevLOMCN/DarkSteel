// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// operator= @ 1474b6bb0

FStackAttributeContainer * __thiscall
UE::Anim::FStackAttributeContainer::operator=
          (FStackAttributeContainer *this,FStackAttributeContainer *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  if (this != param_1) {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              (*(TArray<int,TSizedDefaultAllocator<32>_> **)this,*(int *)&this->field_0x8);
    if (*(void **)this != (void *)0x0) {
      FMemory::Free(*(void **)this);
    }
    *(undefined8 *)this = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)&this->field_0x8 = *(undefined4 *)&param_1->field_0x8;
    *(undefined4 *)&this->field_0xc = *(undefined4 *)&param_1->field_0xc;
    *(undefined8 *)&param_1->field_0x8 = 0;
  }
  puVar1 = &param_1->field_0x10;
  puVar2 = &this->field_0x10;
  if (puVar2 != puVar1) {
    DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
              (*(TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> **)puVar2,
               *(int *)&this->field_0x18);
    if (*(void **)puVar2 != (void *)0x0) {
      FMemory::Free(*(void **)puVar2);
    }
    *(undefined8 *)puVar2 = *(undefined8 *)puVar1;
    *(undefined8 *)puVar1 = 0;
    *(undefined4 *)&this->field_0x18 = *(undefined4 *)&param_1->field_0x18;
    *(undefined4 *)&this->field_0x1c = *(undefined4 *)&param_1->field_0x1c;
    *(undefined8 *)&param_1->field_0x18 = 0;
  }
  puVar1 = &param_1->field_0x20;
  puVar2 = &this->field_0x20;
  if (puVar2 != puVar1) {
    DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
              (*(TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
                 **)puVar2,*(int *)&this->field_0x28);
    if (*(void **)puVar2 != (void *)0x0) {
      FMemory::Free(*(void **)puVar2);
    }
    *(undefined8 *)puVar2 = *(undefined8 *)puVar1;
    *(undefined8 *)puVar1 = 0;
    *(undefined4 *)&this->field_0x28 = *(undefined4 *)&param_1->field_0x28;
    *(undefined4 *)&this->field_0x2c = *(undefined4 *)&param_1->field_0x2c;
    *(undefined8 *)&param_1->field_0x28 = 0;
  }
  puVar2 = &param_1->field_0x30;
  puVar1 = &this->field_0x30;
  if (puVar1 != puVar2) {
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
    }
    *(undefined8 *)puVar1 = *(undefined8 *)puVar2;
    *(undefined8 *)puVar2 = 0;
    *(undefined4 *)&this->field_0x38 = *(undefined4 *)&param_1->field_0x38;
    *(undefined4 *)&this->field_0x3c = *(undefined4 *)&param_1->field_0x3c;
    *(undefined8 *)&param_1->field_0x38 = 0;
  }
  return this;
}

