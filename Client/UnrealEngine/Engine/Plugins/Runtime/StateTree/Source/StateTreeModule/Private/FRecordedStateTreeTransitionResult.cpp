// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 2

// StaticStruct @ 14d4d92e0

UScriptStruct * __cdecl FRecordedStateTreeTransitionResult::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRecordedStateTreeTransitionResult.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FRecordedStateTreeTransitionResult.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRecordedStateTreeTransitionResult,
                         (UObject *)pUVar1,L"RecordedStateTreeTransitionResult");
  }
  return Z_Registration_Info_UScriptStruct_FRecordedStateTreeTransitionResult.OuterSingleton;
}

// FRecordedStateTreeTransitionResult @ 14d4e9f00

FRecordedStateTreeTransitionResult * __thiscall
FRecordedStateTreeTransitionResult::FRecordedStateTreeTransitionResult
          (FRecordedStateTreeTransitionResult *this,FStateTreeTransitionResult *param_1)

{
  (this->States).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->States).ArrayNum = 0;
  (this->States).ArrayMax = 0;
  (this->Events).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Events).ArrayNum = 0;
  (this->Events).ArrayMax = 0;
  this->Priority = None;
  return this;
}

