// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 3

// FQueryConditionQuery @ 142c97910

FQueryConditionQuery * __thiscall
UE::Editor::DataStorage::Queries::FQueryConditionQuery::FQueryConditionQuery
          (FQueryConditionQuery *this,FQueryDescription *param_1)

{
  this->Query = param_1;
  return this;
}

// Compile @ 142ca7e50

FQueryDescription * __thiscall
UE::Editor::DataStorage::Queries::FQueryConditionQuery::Compile(FQueryConditionQuery *this)

{
  return this->Query;
}

// DependsOn @ 142caa720

FDependency __thiscall
UE::Editor::DataStorage::Queries::FQueryConditionQuery::DependsOn(FQueryConditionQuery *this)

{
  FQueryDescription *in_RDX;
  
  *(FQueryDescription **)(in_RDX->Callback).BeforeGroups.AllocatorInstance.InlineData = this->Query;
  return (FDependency)in_RDX;
}

