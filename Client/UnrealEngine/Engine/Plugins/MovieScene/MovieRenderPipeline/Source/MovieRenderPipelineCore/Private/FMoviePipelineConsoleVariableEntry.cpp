// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 3

// StaticStruct @ 14dd5c9b0

UScriptStruct * __cdecl FMoviePipelineConsoleVariableEntry::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMoviePipelineConsoleVariableEntry.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UScriptStruct_FMoviePipelineConsoleVariableEntry.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMoviePipelineConsoleVariableEntry,
                         (UObject *)pUVar1,L"MoviePipelineConsoleVariableEntry");
  }
  return Z_Registration_Info_UScriptStruct_FMoviePipelineConsoleVariableEntry.OuterSingleton;
}

// FMoviePipelineConsoleVariableEntry @ 14dd6a110

FMoviePipelineConsoleVariableEntry * __thiscall
FMoviePipelineConsoleVariableEntry::FMoviePipelineConsoleVariableEntry
          (FMoviePipelineConsoleVariableEntry *this,FString *param_1,float param_2,bool param_3)

{
  ::FString::FString(&this->Name,param_1);
  this->Value = param_2;
  this->bIsEnabled = param_3;
  return this;
}

// FMoviePipelineConsoleVariableEntry @ 14dd6a150

FMoviePipelineConsoleVariableEntry * __thiscall
FMoviePipelineConsoleVariableEntry::FMoviePipelineConsoleVariableEntry
          (FMoviePipelineConsoleVariableEntry *this)

{
  this->bIsEnabled = true;
  (this->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.ArrayNum = 0;
  (this->Name).Data.ArrayMax = 0;
  this->Value = 0.0;
  return this;
}

