// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// FEditorScriptExecutionGuard @ 1421fdfb0

FEditorScriptExecutionGuard * __thiscall
FEditorScriptExecutionGuard::FEditorScriptExecutionGuard(FEditorScriptExecutionGuard *this)

{
  code *pcVar1;
  bool bVar2;
  FEditorScriptExecutionGuard *pFVar3;
  
  this->bOldGAllowScriptExecutionInEditor = GAllowActorScriptExecutionInEditor;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ScriptCore.cpp"
                       ,0x196,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FEditorScriptExecutionGuard *)(*pcVar1)();
      return pFVar3;
    }
  }
  GAllowActorScriptExecutionInEditor = true;
  return this;
}

// ~FEditorScriptExecutionGuard @ 142200c40

void __thiscall
FEditorScriptExecutionGuard::~FEditorScriptExecutionGuard(FEditorScriptExecutionGuard *this)

{
  GAllowActorScriptExecutionInEditor = this->bOldGAllowScriptExecutionInEditor;
  return;
}

