// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 2

// FEditorStorageQueryConditionCompileContext @ 142c96a40

FEditorStorageQueryConditionCompileContext * __thiscall
UE::Editor::DataStorage::Queries::FEditorStorageQueryConditionCompileContext::
FEditorStorageQueryConditionCompileContext
          (FEditorStorageQueryConditionCompileContext *this,ICoreProvider *param_1)

{
  this->DataStorage = param_1;
  this->_padding_ =
       (longlong)&___7FEditorStorageQueryConditionCompileContext_Queries_DataStorage_Editor_UE__6B_;
  return this;
}

// GenerateDynamicColumn @ 142caca40

UScriptStruct * __thiscall
UE::Editor::DataStorage::Queries::FEditorStorageQueryConditionCompileContext::GenerateDynamicColumn
          (FEditorStorageQueryConditionCompileContext *this,FDynamicColumnDescription *param_1)

{
  UScriptStruct *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000142caca47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (UScriptStruct *)(**(code **)((longlong)*this->DataStorage + 0x128))();
  return pUVar1;
}

