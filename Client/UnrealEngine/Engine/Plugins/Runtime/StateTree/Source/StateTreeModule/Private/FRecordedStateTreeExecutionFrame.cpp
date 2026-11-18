// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 2

// StaticStruct @ 14d4d9260

UScriptStruct * __cdecl FRecordedStateTreeExecutionFrame::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRecordedStateTreeExecutionFrame.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FRecordedStateTreeExecutionFrame.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRecordedStateTreeExecutionFrame,
                         (UObject *)pUVar1,L"RecordedStateTreeExecutionFrame");
  }
  return Z_Registration_Info_UScriptStruct_FRecordedStateTreeExecutionFrame.OuterSingleton;
}

// FRecordedStateTreeExecutionFrame @ 14d4e9eb0

FRecordedStateTreeExecutionFrame * __thiscall
FRecordedStateTreeExecutionFrame::FRecordedStateTreeExecutionFrame
          (FRecordedStateTreeExecutionFrame *this,FStateTreeExecutionFrame *param_1)

{
  (this->StateTree).field0_0x0.DebugPtr = (UStateTree *)0x0;
  (this->RootState).Index = FStateTreeStateHandle::Root.Index;
  (this->ActiveStates).StateIDs[0] = 0;
  (this->ActiveStates).StateIDs[1] = 0;
  (this->ActiveStates).StateIDs[2] = 0;
  (this->ActiveStates).StateIDs[3] = 0;
  (this->ActiveStates).StateIDs[4] = 0;
  (this->ActiveStates).StateIDs[5] = 0;
  (this->ActiveStates).StateIDs[6] = 0;
  (this->ActiveStates).StateIDs[7] = 0;
  (this->ActiveStates).States[0] = 0xffff;
  (this->ActiveStates).States[1] = 0xffff;
  (this->ActiveStates).States[2] = 0xffff;
  (this->ActiveStates).States[3] = 0xffff;
  (this->ActiveStates).States[4] = 0xffff;
  (this->ActiveStates).States[5] = 0xffff;
  (this->ActiveStates).States[6] = 0xffff;
  (this->ActiveStates).States[7] = 0xffff;
  (this->ActiveStates).NumStates = '\0';
  this->bIsGlobalFrame = '\0';
  return this;
}

