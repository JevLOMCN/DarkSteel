// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 147eea840

UScriptStruct * __cdecl FMaterialCachedParameterEntry::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMaterialCachedParameterEntry.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FMaterialCachedParameterEntry.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMaterialCachedParameterEntry,(UObject *)pUVar1,
                         L"MaterialCachedParameterEntry");
  }
  return Z_Registration_Info_UScriptStruct_FMaterialCachedParameterEntry.OuterSingleton;
}

// FMaterialCachedParameterEntry @ 147ef00a0

FMaterialCachedParameterEntry * __thiscall
FMaterialCachedParameterEntry::FMaterialCachedParameterEntry(FMaterialCachedParameterEntry *this)

{
  *(undefined8 *)&(this->ParameterInfoSet).Elements = 0;
  *(undefined8 *)&(this->ParameterInfoSet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ParameterInfoSet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ParameterInfoSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ParameterInfoSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ParameterInfoSet).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->ParameterInfoSet).Elements.field_0x30 = 0xffffffff;
  (this->ParameterInfoSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ParameterInfoSet).HashSize = 0;
  return this;
}

// ~FMaterialCachedParameterEntry @ 147ef2680

void __thiscall
FMaterialCachedParameterEntry::~FMaterialCachedParameterEntry(FMaterialCachedParameterEntry *this)

{
  ForElementType<FSetElementId> FVar1;
  
  (this->ParameterInfoSet).HashSize = 0;
  FVar1 = (this->ParameterInfoSet).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FMaterialParameterInfo>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FMaterialParameterInfo>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FMaterialParameterInfo>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

