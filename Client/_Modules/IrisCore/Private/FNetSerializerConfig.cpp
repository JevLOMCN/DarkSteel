// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 2

// StaticStruct @ 1441f3470

UScriptStruct * __cdecl FNetSerializerConfig::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNetSerializerConfig.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_IrisCore();
    Z_Registration_Info_UScriptStruct_FNetSerializerConfig.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNetSerializerConfig,(UObject *)pUVar1,
                         L"NetSerializerConfig");
  }
  return Z_Registration_Info_UScriptStruct_FNetSerializerConfig.OuterSingleton;
}

// ~FNetSerializerConfig @ 1443270d0

void __thiscall FNetSerializerConfig::~FNetSerializerConfig(FNetSerializerConfig *this)

{
  this->_padding_ = (longlong)&___7FNetSerializerConfig__6B_;
  return;
}

