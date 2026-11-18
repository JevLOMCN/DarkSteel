// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 1

// TColumn<FTestColumnD><FTestColumnD> @ 142cccc50

TColumn<FTestColumnD> * __thiscall
UE::Editor::DataStorage::Queries::TColumn<FTestColumnD>::TColumn<FTestColumnD><FTestColumnD>
          (TColumn<FTestColumnD> *this,FName *param_1)

{
  uint uVar1;
  FWeakObjectPtr local_res8;
  UScriptStruct *local_res10;
  
  local_res10 = FTestColumnD::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)local_res10);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)local_res10);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  *(int *)&this->field_0x0 = local_res8.ObjectIndex;
  *(int *)&this->field_0x4 = local_res8.ObjectSerialNumber;
  uVar1 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar1;
  return this;
}

