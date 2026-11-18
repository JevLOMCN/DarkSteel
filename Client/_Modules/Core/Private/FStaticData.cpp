// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// ~FStaticData @ 14191c4b0

void __thiscall FPaths::FStaticData::~FStaticData(FStaticData *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->RelativePathToRoot).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->RestrictedSlashedFolderNames).AllocatorInstance.Data,
             (this->RestrictedSlashedFolderNames).ArrayNum);
  pFVar1 = (this->RestrictedSlashedFolderNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->RestrictedFolderNames).AllocatorInstance.Data,
             (this->RestrictedFolderNames).ArrayNum);
  pFVar1 = (this->RestrictedFolderNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->GameLocalizationPaths).AllocatorInstance.Data,
             (this->GameLocalizationPaths).ArrayNum);
  pFVar1 = (this->GameLocalizationPaths).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->ToolTipLocalizationPaths).AllocatorInstance.Data,
             (this->ToolTipLocalizationPaths).ArrayNum);
  pFVar1 = (this->ToolTipLocalizationPaths).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->PropertyNameLocalizationPaths).AllocatorInstance.Data,
             (this->PropertyNameLocalizationPaths).ArrayNum);
  pFVar1 = (this->PropertyNameLocalizationPaths).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->CookedEditorLocalizationPaths).AllocatorInstance.Data,
             (this->CookedEditorLocalizationPaths).ArrayNum);
  pFVar1 = (this->CookedEditorLocalizationPaths).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->EditorLocalizationPaths).AllocatorInstance.Data,
             (this->EditorLocalizationPaths).ArrayNum);
  pFVar1 = (this->EditorLocalizationPaths).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->EngineLocalizationPaths).AllocatorInstance.Data,
             (this->EngineLocalizationPaths).ArrayNum);
  pFVar1 = (this->EngineLocalizationPaths).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UserFolder).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ShaderDir).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EngineSavedDir).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GameSavedDir).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UserDirArg).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GameProjectFilePath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00014191c63e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

