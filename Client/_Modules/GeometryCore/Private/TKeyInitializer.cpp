// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 1

// operator<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>_TTuple<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_> @ 14332f260

TTuple<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_> * __thiscall
TKeyInitializer<int_&>::
operator<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>_TTuple<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>
          (TKeyInitializer<int_&> *this,
          TTuple<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>
          *__return_storage_ptr__)

{
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  *(int *)__return_storage_ptr__ = *this->Key;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = local_58;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = uStack_50;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = local_48;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = uStack_40;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = local_38;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = uStack_30;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = local_28;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = uStack_20;
  if (*(void **)&__return_storage_ptr__->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&__return_storage_ptr__->field_0x48);
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x50 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x54 = 0x10;
  return __return_storage_ptr__;
}

