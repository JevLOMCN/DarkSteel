// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// StaticStruct @ 144321990

UScriptStruct * __cdecl FStructNetSerializerConfig::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStructNetSerializerConfig.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IrisCore();
    Z_Registration_Info_UScriptStruct_FStructNetSerializerConfig.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStructNetSerializerConfig,(UObject *)pUVar1,
                         L"StructNetSerializerConfig");
  }
  return Z_Registration_Info_UScriptStruct_FStructNetSerializerConfig.OuterSingleton;
}

// FStructNetSerializerConfig @ 144326eb0

FStructNetSerializerConfig * __thiscall
FStructNetSerializerConfig::FStructNetSerializerConfig(FStructNetSerializerConfig *this)

{
  (this->StateDescriptor).Reference = (FReplicationStateDescriptor *)0x0;
  this->_padding_ = (longlong)&___7FStructNetSerializerConfig__6B_;
  *(undefined4 *)&this->_padding_ = 1;
  return this;
}

// ~FStructNetSerializerConfig @ 144327300

void __thiscall
FStructNetSerializerConfig::~FStructNetSerializerConfig(FStructNetSerializerConfig *this)

{
  FReplicationStateDescriptor *this_00;
  
  this->_padding_ = (longlong)&___7FStructNetSerializerConfig__6B_;
  this_00 = (this->StateDescriptor).Reference;
  if (this_00 != (FReplicationStateDescriptor *)0x0) {
    UE::Net::FReplicationStateDescriptor::Release(this_00);
  }
  this->_padding_ = (longlong)&___7FNetSerializerConfig__6B_;
  return;
}

