// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGenerator
// Functions: 1

// operator= @ 14b2a8870

FInputVertexInterfaceData * __thiscall
Metasound::FInputVertexInterfaceData::operator=
          (FInputVertexInterfaceData *this,FInputVertexInterfaceData *param_1)

{
  TArray<Metasound::VertexDataPrivate::FInputBinding,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<Metasound::VertexDataPrivate::FInputBinding,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<Metasound::VertexPrivate::FSubInterfaceLayout,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<Metasound::VertexPrivate::FSubInterfaceLayout,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  
  pTVar1 = &param_1->Bindings;
  pTVar2 = &this->Bindings;
  this->bIsVertexInterfaceFrozen = param_1->bIsVertexInterfaceFrozen;
  if (pTVar2 != pTVar1) {
    DestructItems<Metasound::VertexDataPrivate::FInputBinding,int>
              ((FInputBinding *)(pTVar2->AllocatorInstance).Data,(this->Bindings).ArrayNum);
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Bindings).ArrayNum = (param_1->Bindings).ArrayNum;
    (this->Bindings).ArrayMax = (param_1->Bindings).ArrayMax;
    (param_1->Bindings).ArrayNum = 0;
    (param_1->Bindings).ArrayMax = 0;
  }
  pTVar3 = &param_1->SubInterfaces;
  pTVar4 = &this->SubInterfaces;
  if (pTVar4 != pTVar3) {
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)(pTVar4->AllocatorInstance).Data,
               (this->SubInterfaces).ArrayNum);
    pFVar5 = (pTVar4->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->SubInterfaces).ArrayNum = (param_1->SubInterfaces).ArrayNum;
    (this->SubInterfaces).ArrayMax = (param_1->SubInterfaces).ArrayMax;
    (param_1->SubInterfaces).ArrayNum = 0;
    (param_1->SubInterfaces).ArrayMax = 0;
  }
  return this;
}

