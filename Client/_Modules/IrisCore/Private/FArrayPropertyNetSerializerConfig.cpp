// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// StaticStruct @ 144321740

UScriptStruct * __cdecl FArrayPropertyNetSerializerConfig::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FArrayPropertyNetSerializerConfig.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IrisCore();
    Z_Registration_Info_UScriptStruct_FArrayPropertyNetSerializerConfig.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FArrayPropertyNetSerializerConfig,
                         (UObject *)pUVar1,L"ArrayPropertyNetSerializerConfig");
  }
  return Z_Registration_Info_UScriptStruct_FArrayPropertyNetSerializerConfig.OuterSingleton;
}

// FArrayPropertyNetSerializerConfig @ 144326ad0

FArrayPropertyNetSerializerConfig * __thiscall
FArrayPropertyNetSerializerConfig::FArrayPropertyNetSerializerConfig
          (FArrayPropertyNetSerializerConfig *this)

{
  *(undefined4 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7FArrayPropertyNetSerializerConfig__6B_;
  this->MaxElementCount = 0;
  this->ElementCountBitCount = 0;
  *(undefined8 *)&this->Property = 0;
  *(undefined8 *)&(this->Property).field_0x8 = 0;
  *(undefined8 *)&(this->Property).field_0x10 = 0;
  *(undefined8 *)&(this->Property).field_0x18 = 0;
  (this->StateDescriptor).Reference = (FReplicationStateDescriptor *)0x0;
  return this;
}

// ~FArrayPropertyNetSerializerConfig @ 144326f80

void __thiscall
FArrayPropertyNetSerializerConfig::~FArrayPropertyNetSerializerConfig
          (FArrayPropertyNetSerializerConfig *this)

{
  FReplicationStateDescriptor *this_00;
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FArrayPropertyNetSerializerConfig__6B_;
  this_00 = (this->StateDescriptor).Reference;
  if (this_00 != (FReplicationStateDescriptor *)0x0) {
    UE::Net::FReplicationStateDescriptor::Release(this_00);
  }
  pvVar1 = *(void **)&(this->Property).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7FNetSerializerConfig__6B_;
  return;
}

