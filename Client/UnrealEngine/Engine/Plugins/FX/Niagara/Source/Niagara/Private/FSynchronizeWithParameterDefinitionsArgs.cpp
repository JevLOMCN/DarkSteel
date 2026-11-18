// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// FSynchronizeWithParameterDefinitionsArgs @ 149023320

FSynchronizeWithParameterDefinitionsArgs * __thiscall
FSynchronizeWithParameterDefinitionsArgs::FSynchronizeWithParameterDefinitionsArgs
          (FSynchronizeWithParameterDefinitionsArgs *this)

{
  (this->SpecificDefinitionsUniqueIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpecificDefinitionsUniqueIds).ArrayNum = 0;
  (this->SpecificDefinitionsUniqueIds).ArrayMax = 0;
  (this->SpecificDestScriptVarIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpecificDestScriptVarIds).ArrayNum = 0;
  (this->SpecificDestScriptVarIds).ArrayMax = 0;
  this->bForceGatherDefinitions = false;
  this->bForceSynchronizeParameters = false;
  this->bSubscribeAllNameMatchParameters = false;
  (this->AdditionalParameterDefinitions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalParameterDefinitions).ArrayNum = 0;
  (this->AdditionalParameterDefinitions).ArrayMax = 0;
  (this->AdditionalOldToNewNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalOldToNewNames).ArrayNum = 0;
  (this->AdditionalOldToNewNames).ArrayMax = 0;
  return this;
}

