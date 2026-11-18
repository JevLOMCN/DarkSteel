// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 2

// FEnvironmentVertexInterface @ 14ad39530

FEnvironmentVertexInterface * __thiscall
Metasound::FEnvironmentVertexInterface::FEnvironmentVertexInterface
          (FEnvironmentVertexInterface *this,FEnvironmentVertexInterface *param_1)

{
  int iVar1;
  FEnvironmentVertex *pFVar2;
  
  *(undefined8 *)this = 0;
  iVar1 = *(int *)&param_1->field_0x8;
  pFVar2 = *(FEnvironmentVertex **)param_1;
  *(int *)&this->field_0x8 = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)&this->field_0xc = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar1,0,(ForAnyElementType *)this,iVar1,(int *)&this->field_0xc);
  ConstructItems<Metasound::FEnvironmentVertex,Metasound::FEnvironmentVertex,int>
            (*(void **)this,pFVar2,iVar1);
  return this;
}

// FEnvironmentVertexInterface @ 14ad395c0

FEnvironmentVertexInterface * __thiscall
Metasound::FEnvironmentVertexInterface::FEnvironmentVertexInterface
          (FEnvironmentVertexInterface *this,
          TArray<Metasound::FEnvironmentVertex,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar3 = (param_1->AllocatorInstance).Data;
  (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = param_1->ArrayNum;
  iVar2 = param_1->ArrayMax;
  param_1->ArrayNum = 0;
  param_1->ArrayMax = 0;
  *(FScriptContainerElement **)this = pFVar3;
  *(int *)&this->field_0x8 = iVar1;
  *(int *)&this->field_0xc = iVar2;
  pFVar3 = (param_1->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return this;
}

