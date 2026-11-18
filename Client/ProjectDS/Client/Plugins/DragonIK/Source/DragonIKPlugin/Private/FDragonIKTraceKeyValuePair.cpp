// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DragonIKPlugin
// Functions: 2

// StaticStruct @ 14d2a4390

UScriptStruct * __cdecl FDragonIKTraceKeyValuePair::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDragonIKTraceKeyValuePair.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DragonIKPlugin();
    Z_Registration_Info_UScriptStruct_FDragonIKTraceKeyValuePair.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDragonIKTraceKeyValuePair,(UObject *)pUVar1,
                         L"DragonIKTraceKeyValuePair");
  }
  return Z_Registration_Info_UScriptStruct_FDragonIKTraceKeyValuePair.OuterSingleton;
}

// FDragonIKTraceKeyValuePair @ 14d2a59c0

FDragonIKTraceKeyValuePair * __thiscall
FDragonIKTraceKeyValuePair::FDragonIKTraceKeyValuePair(FDragonIKTraceKeyValuePair *this)

{
  ::FName::FName(&this->Key,L"");
  (this->BoneName).ComparisonIndex = 0;
  (this->BoneName).Number = 0;
  memset(&this->hit_result,0,0x100);
  (this->hit_result).HitObjectHandle.ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
  (this->hit_result).HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
  (this->hit_result).Time = 1.0;
  (this->hit_result).MyItem = -1;
  (this->hit_result).HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  (this->hit_result).HitObjectHandle.InstanceIndex = -1;
  (this->hit_result).HitObjectHandle.ResolutionStatus = Invalid;
  *(undefined3 *)&(this->hit_result).HitObjectHandle.field_0x1d = 0;
  return this;
}

