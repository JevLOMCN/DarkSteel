// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// FInstancedStructPropertyNetSerializerInfo @ 1442f6230

FInstancedStructPropertyNetSerializerInfo * __thiscall
UE::Net::FInstancedStructPropertyNetSerializerInfo::FInstancedStructPropertyNetSerializerInfo
          (FInstancedStructPropertyNetSerializerInfo *this)

{
  FNameEntryId FVar1;
  uint uVar2;
  FName *pFVar3;
  FName local_res8 [4];
  
  pFVar3 = ::FName::FName(local_res8,"InstancedStruct");
  FVar1.Value = (pFVar3->ComparisonIndex).Value;
  uVar2 = pFVar3->Number;
  *(FNetSerializer **)&this->field_0x10 =
       &FInstancedStructNetSerializerNetSerializerInfo::Serializer;
  *(undefined ***)this = &___7FInstancedStructPropertyNetSerializerInfo_Net_UE__6B_;
  *(undefined8 *)&this->field_0x18 = 0;
  *(uint *)&this->field_0x8 = FVar1.Value;
  *(uint *)&this->field_0xc = uVar2;
  return this;
}

// BuildNetSerializerConfig @ 1442fbde0

FNetSerializerConfig * __thiscall
UE::Net::FInstancedStructPropertyNetSerializerInfo::BuildNetSerializerConfig
          (FInstancedStructPropertyNetSerializerInfo *this,void *param_1,FProperty *param_2)

{
  FInstancedStructNetSerializerConfig *pFVar1;
  
  pFVar1 = FInstancedStructNetSerializerConfig::FInstancedStructNetSerializerConfig(param_1);
  InitInstancedStructNetSerializerConfig(pFVar1,param_2);
  return (FNetSerializerConfig *)pFVar1;
}

// CanUseDefaultConfig @ 1442fc670

bool __thiscall
UE::Net::FInstancedStructPropertyNetSerializerInfo::CanUseDefaultConfig
          (FInstancedStructPropertyNetSerializerInfo *this,FProperty *param_1)

{
  return false;
}

