// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// StaticStruct @ 149d768a0

UScriptStruct * __cdecl FPCGMeshSelectorWeightedEntry::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGMeshSelectorWeightedEntry.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGMeshSelectorWeightedEntry.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGMeshSelectorWeightedEntry,(UObject *)pUVar1,
                         L"PCGMeshSelectorWeightedEntry");
  }
  return Z_Registration_Info_UScriptStruct_FPCGMeshSelectorWeightedEntry.OuterSingleton;
}

// FPCGMeshSelectorWeightedEntry @ 149e35520

FPCGMeshSelectorWeightedEntry * __thiscall
FPCGMeshSelectorWeightedEntry::FPCGMeshSelectorWeightedEntry
          (FPCGMeshSelectorWeightedEntry *this,TSoftObjectPtr<UStaticMesh> *param_1,int param_2)

{
  void *pvVar1;
  
  FPCGSoftISMComponentDescriptor::FPCGSoftISMComponentDescriptor(&this->Descriptor);
  this->Weight = param_2;
  (this->Descriptor)._padding_ = *(longlong *)&param_1->SoftObjectPtr;
  FSoftObjectPath::operator=
            ((FSoftObjectPath *)&(this->Descriptor)._padding_,
             (FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8);
  pvVar1 = *(void **)&(param_1->SoftObjectPtr).field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  return this;
}

