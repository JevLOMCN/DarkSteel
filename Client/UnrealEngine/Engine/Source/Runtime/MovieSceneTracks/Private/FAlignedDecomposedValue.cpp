// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// FAlignedDecomposedValue @ 14660ec30

FAlignedDecomposedValue * __thiscall
UE::MovieScene::FAlignedDecomposedValue::FAlignedDecomposedValue(FAlignedDecomposedValue *this)

{
  (this->Value).Result.Absolute.Total = 0.0;
  (this->Value).Result.Absolute.TotalWeight = 0.0;
  (this->Value).Result.Additive = 0.0;
  (this->Value).AllDecomposedOverrides.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Value).AllDecomposedOverrides.ArrayNum = 0;
  (this->Value).AllDecomposedOverrides.ArrayMax = 0;
  (this->Value).DecomposedAbsolutes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Value).DecomposedAbsolutes.ArrayNum = 0;
  (this->Value).DecomposedAbsolutes.ArrayMax = 0;
  (this->Value).DecomposedAdditives.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Value).DecomposedAdditives.ArrayNum = 0;
  (this->Value).DecomposedAdditives.ArrayMax = 0;
  (this->Value).DecomposedOverrides.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Value).DecomposedOverrides.ArrayNum = 0;
  (this->Value).DecomposedOverrides.ArrayMax = 0;
  return this;
}

// ~FAlignedDecomposedValue @ 146620900

void __thiscall
UE::MovieScene::FAlignedDecomposedValue::~FAlignedDecomposedValue(FAlignedDecomposedValue *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Value).DecomposedOverrides.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Value).DecomposedAdditives.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Value).DecomposedAbsolutes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Value).AllDecomposedOverrides.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

