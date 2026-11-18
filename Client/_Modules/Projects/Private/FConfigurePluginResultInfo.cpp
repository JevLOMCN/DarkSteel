// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Projects
// Functions: 1

// operator= @ 141e0fe30

FConfigurePluginResultInfo * __thiscall
FPluginManager::FConfigurePluginResultInfo::operator=
          (FConfigurePluginResultInfo *this,FConfigurePluginResultInfo *param_1)

{
  TArray<FPluginReferenceDescriptor_const_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FPluginReferenceDescriptor_const_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  
  pTVar1 = &param_1->ReferenceChain;
  this->Code = param_1->Code;
  pTVar2 = &this->ReferenceChain;
  this->PluginReference = param_1->PluginReference;
  if (pTVar2 != pTVar1) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ReferenceChain).ArrayNum = (param_1->ReferenceChain).ArrayNum;
    (this->ReferenceChain).ArrayMax = (param_1->ReferenceChain).ArrayMax;
    (param_1->ReferenceChain).ArrayNum = 0;
    (param_1->ReferenceChain).ArrayMax = 0;
  }
  return this;
}

