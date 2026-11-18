// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowNodes
// Functions: 2

// FRenderingParameter @ 14dacdc60

FRenderingParameter * __thiscall
UE::Dataflow::FRenderingParameter::FRenderingParameter
          (FRenderingParameter *this,FRenderingParameter *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  ::FString::FString(&this->Name,&param_1->Name);
  pTVar1 = &this->Outputs;
  this->Type = param_1->Type;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Outputs).ArrayMax;
  iVar3 = (param_1->Outputs).ArrayNum;
  _Src = (param_1->Outputs).AllocatorInstance.Data;
  (this->Outputs).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 3);
  }
  this->ViewMode = param_1->ViewMode;
  return this;
}

// ~FRenderingParameter @ 14dace3f0

void __thiscall UE::Dataflow::FRenderingParameter::~FRenderingParameter(FRenderingParameter *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Outputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

