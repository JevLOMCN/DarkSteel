// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// StaticStruct @ 141fb3d20

UScriptStruct * __cdecl FFieldCookedMetaDataKey::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFieldCookedMetaDataKey.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UScriptStruct_FFieldCookedMetaDataKey.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFieldCookedMetaDataKey,(UObject *)pUVar1,
                         L"FieldCookedMetaDataKey");
  }
  return Z_Registration_Info_UScriptStruct_FFieldCookedMetaDataKey.OuterSingleton;
}

// FFieldCookedMetaDataKey @ 141fbda90

FFieldCookedMetaDataKey * __thiscall
FFieldCookedMetaDataKey::FFieldCookedMetaDataKey(FFieldCookedMetaDataKey *this)

{
  int *piVar1;
  
  piVar1 = &(this->FieldPath).ArrayMax;
  (this->FieldPath).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FieldPath).ArrayNum = 0;
  *piVar1 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,2,(ForAnyElementType *)this,0,piVar1);
  return this;
}

