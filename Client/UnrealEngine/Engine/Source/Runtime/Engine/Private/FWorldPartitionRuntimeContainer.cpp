// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 148aa8e20

UScriptStruct * __cdecl FWorldPartitionRuntimeContainer::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWorldPartitionRuntimeContainer.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FWorldPartitionRuntimeContainer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWorldPartitionRuntimeContainer,(UObject *)pUVar1
                         ,L"WorldPartitionRuntimeContainer");
  }
  return Z_Registration_Info_UScriptStruct_FWorldPartitionRuntimeContainer.OuterSingleton;
}

// GetAllocatedSize @ 148acaf70

ulong64 __thiscall
FWorldPartitionRuntimeContainer::GetAllocatedSize(FWorldPartitionRuntimeContainer *this)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *(uint *)&(this->ContainerInstances).field_0x48;
  if (uVar1 < 2) {
    lVar2 = 0;
  }
  else {
    lVar2 = (longlong)(int)uVar1 << 2;
  }
  return lVar2 + (ulonglong)((*(int *)&(this->ContainerInstances).field_0x2c + 0x1fU >> 5) << 2) +
         (longlong)*(int *)&(this->ContainerInstances).field_0xc * 0x28;
}

