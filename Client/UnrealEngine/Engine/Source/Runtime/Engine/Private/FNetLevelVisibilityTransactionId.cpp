// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 147b9de40

UScriptStruct * __cdecl FNetLevelVisibilityTransactionId::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNetLevelVisibilityTransactionId.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FNetLevelVisibilityTransactionId.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNetLevelVisibilityTransactionId,
                         (UObject *)pUVar1,L"NetLevelVisibilityTransactionId");
  }
  return Z_Registration_Info_UScriptStruct_FNetLevelVisibilityTransactionId.OuterSingleton;
}

// NetSerialize @ 147bf32a0

bool __thiscall
FNetLevelVisibilityTransactionId::NetSerialize
          (FNetLevelVisibilityTransactionId *this,FArchive *param_1,UPackageMap *param_2,
          bool *param_3)

{
  byte local_res10 [8];
  uint local_res20 [2];
  
  if ((param_1->field_0x28 & 1) == 0) {
    local_res20[0] = this->Data & 0x7fffffff;
    local_res10[0] = (byte)(this->Data >> 0x1f);
    (**(code **)(*(longlong *)param_1 + 400))(param_1,local_res10);
    (**(code **)(*(longlong *)param_1 + 0x1a0))(param_1,local_res20);
  }
  else {
    local_res10[0] = 0;
    local_res20[0] = 0;
    (**(code **)(*(longlong *)param_1 + 400))(param_1,local_res10);
    (**(code **)(*(longlong *)param_1 + 0x1a0))(param_1,local_res20);
    this->Data = -(uint)(local_res10[0] != 0) & 0x80000000 | local_res20[0] & 0x7fffffff;
  }
  *param_3 = (bool)(~((byte)param_1->field_0x29 >> 1) & 1);
  return true;
}

