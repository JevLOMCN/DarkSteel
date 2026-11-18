// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 147eea180

UScriptStruct * __cdecl FParameterGroupData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FParameterGroupData.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FParameterGroupData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FParameterGroupData,(UObject *)pUVar1,
                         L"ParameterGroupData");
  }
  return Z_Registration_Info_UScriptStruct_FParameterGroupData.OuterSingleton;
}

// FParameterGroupData @ 147ef03a0

FParameterGroupData * __thiscall FParameterGroupData::FParameterGroupData(FParameterGroupData *this)

{
  FScriptContainerElement *pFVar1;
  FParameterGroupData *pFVar2;
  FString local_18;
  
  (this->GroupName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupName).Data.ArrayNum = 0;
  (this->GroupName).Data.ArrayMax = 0;
  pFVar2 = (FParameterGroupData *)::FString::FString(&local_18,L"");
  if (this != pFVar2) {
    pFVar1 = (this->GroupName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->GroupName).Data.AllocatorInstance.Data = (pFVar2->GroupName).Data.AllocatorInstance.Data;
    (pFVar2->GroupName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->GroupName).Data.ArrayNum = (pFVar2->GroupName).Data.ArrayNum;
    (this->GroupName).Data.ArrayMax = (pFVar2->GroupName).Data.ArrayMax;
    (pFVar2->GroupName).Data.ArrayNum = 0;
    (pFVar2->GroupName).Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  this->GroupSortPriority = 0;
  return this;
}

