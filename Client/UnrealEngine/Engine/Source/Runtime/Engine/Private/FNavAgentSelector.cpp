// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 1472ea910

UScriptStruct * __cdecl FNavAgentSelector::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNavAgentSelector.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FNavAgentSelector.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNavAgentSelector,(UObject *)pUVar1,
                         L"NavAgentSelector");
  }
  return Z_Registration_Info_UScriptStruct_FNavAgentSelector.OuterSingleton;
}

// FNavAgentSelector @ 14737aa20

FNavAgentSelector * __thiscall
FNavAgentSelector::FNavAgentSelector(FNavAgentSelector *this,uint param_1)

{
  (this->field0_0x0).PackedBits = param_1;
  return this;
}

// Serialize @ 1473b4300

bool __thiscall FNavAgentSelector::Serialize(FNavAgentSelector *this,FArchive *param_1)

{
  FNavAgentSelector_u_0 *pFVar1;
  
  pFVar1 = (FNavAgentSelector_u_0 *)**(undefined8 **)&param_1->field_0x8;
  if (pFVar1 + 1 <= (FNavAgentSelector_u_0 *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    this->field0_0x0 = *pFVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return true;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,4);
    return true;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)this);
  return true;
}

