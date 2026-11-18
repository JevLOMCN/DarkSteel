// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 1

// FShaderFunctionDefinition @ 14e157430

FShaderFunctionDefinition * __thiscall
FShaderFunctionDefinition::FShaderFunctionDefinition
          (FShaderFunctionDefinition *this,FShaderFunctionDefinition *param_1)

{
  TArray<FShaderParamTypeDefinition,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FShaderParamTypeDefinition *pFVar4;
  
  ::FString::FString(&this->Name,&param_1->Name);
  pTVar1 = &this->ParamTypes;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ParamTypes).ArrayMax;
  iVar3 = (param_1->ParamTypes).ArrayNum;
  pFVar4 = (FShaderParamTypeDefinition *)(param_1->ParamTypes).AllocatorInstance.Data;
  (this->ParamTypes).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FShaderParamTypeDefinition,FShaderParamTypeDefinition,int>
              ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
  }
  this->bHasReturnType = param_1->bHasReturnType;
  return this;
}

