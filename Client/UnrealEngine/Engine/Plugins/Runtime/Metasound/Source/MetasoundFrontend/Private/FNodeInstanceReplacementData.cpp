// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 1

// FNodeInstanceReplacementData @ 14adddfe0

FNodeInstanceReplacementData * __thiscall
FMetaSoundFrontendDocumentBuilder::FNodeInstanceReplacementData::FNodeInstanceReplacementData
          (FNodeInstanceReplacementData *this,FNodeInstanceReplacementData *param_1)

{
  uchar *puVar1;
  UScriptStruct *pUVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  puVar1 = (param_1->Configuration).InstancedStruct.StructMemory;
  pUVar2 = (param_1->Configuration).InstancedStruct.ScriptStruct.field0_0x0.DebugPtr;
  (this->Configuration).InstancedStruct.ScriptStruct.field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->Configuration).InstancedStruct.StructMemory = puVar1;
  (param_1->Configuration).InstancedStruct.ScriptStruct.field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  (param_1->Configuration).InstancedStruct.StructMemory = (uchar *)0x0;
  pUVar2 = (param_1->ClassInterfaceOverride).InstancedStruct.ScriptStruct.field0_0x0.DebugPtr;
  puVar1 = (param_1->ClassInterfaceOverride).InstancedStruct.StructMemory;
  (this->ClassInterfaceOverride).InstancedStruct.ScriptStruct.field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->ClassInterfaceOverride).InstancedStruct.StructMemory = puVar1;
  (param_1->ClassInterfaceOverride).InstancedStruct.ScriptStruct.field0_0x0.DebugPtr =
       (UScriptStruct *)0x0;
  (param_1->ClassInterfaceOverride).InstancedStruct.StructMemory = (uchar *)0x0;
  TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo,0>,FDefaultSetAllocator>
            ((TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo,0>,FDefaultSetAllocator>
              *)&this->InputConnections,
             (TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo,0>,FDefaultSetAllocator>
              *)&param_1->InputConnections);
  TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo,0>,FDefaultSetAllocator>
            ((TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo,0>,FDefaultSetAllocator>
              *)&this->OutputConnections,
             (TSet<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo,0>,FDefaultSetAllocator>
              *)&param_1->OutputConnections);
  uVar3 = (param_1->NodeID).B;
  uVar4 = (param_1->NodeID).C;
  uVar5 = (param_1->NodeID).D;
  (this->NodeID).A = (param_1->NodeID).A;
  (this->NodeID).B = uVar3;
  (this->NodeID).C = uVar4;
  (this->NodeID).D = uVar5;
  uVar3 = (param_1->PageID).B;
  uVar4 = (param_1->PageID).C;
  uVar5 = (param_1->PageID).D;
  (this->PageID).A = (param_1->PageID).A;
  (this->PageID).B = uVar3;
  (this->PageID).C = uVar4;
  (this->PageID).D = uVar5;
  return this;
}

