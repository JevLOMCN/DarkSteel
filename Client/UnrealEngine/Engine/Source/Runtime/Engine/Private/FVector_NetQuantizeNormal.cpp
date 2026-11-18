// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 1472edfe0

UScriptStruct * __cdecl FVector_NetQuantizeNormal::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FVector_NetQuantizeNormal.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FVector_NetQuantizeNormal.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FVector_NetQuantizeNormal,(UObject *)pUVar1,
                         L"Vector_NetQuantizeNormal");
  }
  return Z_Registration_Info_UScriptStruct_FVector_NetQuantizeNormal.OuterSingleton;
}

// NetSerialize @ 147bf4100

bool __thiscall
FVector_NetQuantizeNormal::NetSerialize
          (FVector_NetQuantizeNormal *this,FArchive *param_1,UPackageMap *param_2,bool *param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int local_res10 [2];
  
  if ((param_1->field_0x28 & 4) != 0) {
    bVar1 = WriteFixedCompressedFloat<1,16,double>(*(double *)this,param_1);
    bVar2 = WriteFixedCompressedFloat<1,16,double>(*(double *)&this->field_0x8,param_1);
    bVar3 = WriteFixedCompressedFloat<1,16,double>(*(double *)&this->field_0x10,param_1);
    *param_3 = bVar3 && (bVar2 && bVar1);
    return true;
  }
  (**(code **)(*(longlong *)param_1 + 0x198))(param_1,local_res10,0x10000);
  *(double *)this = (double)(local_res10[0] + -0x8000) * __real_3f00002000400080;
  (**(code **)(*(longlong *)param_1 + 0x198))(param_1,local_res10,0x10000);
  *(double *)&this->field_0x8 = (double)(local_res10[0] + -0x8000) * __real_3f00002000400080;
  (**(code **)(*(longlong *)param_1 + 0x198))(param_1,local_res10,0x10000);
  *(double *)&this->field_0x10 = (double)(local_res10[0] + -0x8000) * __real_3f00002000400080;
  *param_3 = true;
  return true;
}

