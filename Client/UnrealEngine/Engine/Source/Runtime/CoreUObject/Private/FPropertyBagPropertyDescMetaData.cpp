// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// StaticStruct @ 141f53d70

UScriptStruct * __cdecl FPropertyBagPropertyDescMetaData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPropertyBagPropertyDescMetaData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UScriptStruct_FPropertyBagPropertyDescMetaData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPropertyBagPropertyDescMetaData,
                         (UObject *)pUVar1,L"PropertyBagPropertyDescMetaData");
  }
  return Z_Registration_Info_UScriptStruct_FPropertyBagPropertyDescMetaData.OuterSingleton;
}

// Serialize @ 141f9c150

void __thiscall
FPropertyBagPropertyDescMetaData::Serialize
          (FPropertyBagPropertyDescMetaData *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,this);
  ::operator<<(param_1,&this->Value);
  return;
}

