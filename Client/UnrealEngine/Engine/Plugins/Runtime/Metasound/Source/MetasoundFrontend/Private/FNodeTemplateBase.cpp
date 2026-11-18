// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 2

// CreateFrontendTemplateNodeConfiguration @ 14ae67d00

TInstancedStruct<FMetaSoundFrontendTemplateNodeConfiguration> * __thiscall
Metasound::Frontend::FNodeTemplateBase::CreateFrontendTemplateNodeConfiguration
          (FNodeTemplateBase *this,
          TInstancedStruct<FMetaSoundFrontendTemplateNodeConfiguration> *__return_storage_ptr__)

{
  (__return_storage_ptr__->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  (__return_storage_ptr__->InstancedStruct).StructMemory = (uchar *)0x0;
  FInstancedStruct::FInstancedStruct(&__return_storage_ptr__->InstancedStruct);
  return __return_storage_ptr__;
}

// FindNodeClassInputDefaults @ 14ae72870

TArray<FMetasoundFrontendClassInputDefault,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FNodeTemplateBase::FindNodeClassInputDefaults
          (FNodeTemplateBase *this,FMetaSoundFrontendDocumentBuilder *param_1,FGuid *param_2,
          FGuid *param_3,FName param_4)

{
  FMetasoundFrontendClassInput *pFVar1;
  code *pcVar2;
  bool bVar3;
  FMetasoundFrontendVertex *pFVar4;
  FMetasoundFrontendNode *pFVar5;
  TArray<FMetasoundFrontendClassInputDefault,TSizedDefaultAllocator<32>_> *pTVar6;
  FMetasoundFrontendClass *this_00;
  FMetasoundFrontendClassInterface *pFVar7;
  FMetasoundFrontendClassInput *this_01;
  
  pFVar4 = FMetaSoundFrontendDocumentBuilder::FindNodeInput(param_1,param_3,param_4,param_2);
  if (pFVar4 != (FMetasoundFrontendVertex *)0x0) {
    pFVar5 = FMetaSoundFrontendDocumentBuilder::FindNode(param_1,param_3,param_2);
    if ((pFVar5 == (FMetasoundFrontendNode *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Node",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeTemplateRegistry.cpp"
                           ,0x72,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArray<FMetasoundFrontendClassInputDefault,TSizedDefaultAllocator<32>_> *)
               (*pcVar2)();
      return pTVar6;
    }
    this_00 = FMetaSoundFrontendDocumentBuilder::FindDependency(param_1,&pFVar5->ClassID);
    if (this_00 != (FMetasoundFrontendClass *)0x0) {
      pFVar7 = FMetasoundFrontendClass::GetInterfaceForNode(this_00,pFVar5);
      FMetasoundFrontendClassMetadata::GetType(&this_00->Metadata);
      this_01 = (FMetasoundFrontendClassInput *)(pFVar7->Inputs).AllocatorInstance.Data;
      pFVar1 = this_01 + (pFVar7->Inputs).ArrayNum;
      if (this_01 != pFVar1) {
        do {
          if ((FName)this_01->_padding_ == pFVar4->Name) {
            pTVar6 = FMetasoundFrontendClassInput::GetDefaults(this_01);
            return pTVar6;
          }
          this_01 = this_01 + 1;
        } while (this_01 != pFVar1);
      }
    }
  }
  return (TArray<FMetasoundFrontendClassInputDefault,TSizedDefaultAllocator<32>_> *)0x0;
}

