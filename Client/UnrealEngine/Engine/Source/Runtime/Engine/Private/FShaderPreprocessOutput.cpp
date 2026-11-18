// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// operator= @ 148513990

FShaderPreprocessOutput * __thiscall
FShaderPreprocessOutput::operator=(FShaderPreprocessOutput *this,FShaderPreprocessOutput *param_1)

{
  TArray<FShaderCompilerError,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  FShaderDiagnosticRemapper *pFVar5;
  TArray<FShaderDiagnosticData,TSizedDefaultAllocator<32>_> *pTVar6;
  int iVar7;
  FShaderCompilerError *pFVar8;
  FSourceBlock *pFVar9;
  FScriptContainerElement *_Src;
  FShaderDiagnosticData *pFVar10;
  int iVar11;
  
  FShaderSource::operator=(&this->PreprocessedSource,&param_1->PreprocessedSource);
  FShaderSource::operator=(&this->OriginalPreprocessedSource,&param_1->OriginalPreprocessedSource);
  iVar7 = (param_1->WideSource).Data.ArrayNum;
  iVar11 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar11 = 0;
  }
  ::FString::AssignRange
            (&this->WideSource,(wchar_t *)(param_1->WideSource).Data.AllocatorInstance.Data,iVar11);
  iVar7 = (param_1->WideSourceUnstripped).Data.ArrayNum;
  iVar11 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar11 = 0;
  }
  ::FString::AssignRange
            (&this->WideSourceUnstripped,
             (wchar_t *)(param_1->WideSourceUnstripped).Data.AllocatorInstance.Data,iVar11);
  pTVar1 = &this->Errors;
  if (pTVar1 != &param_1->Errors) {
    DestructItems<FShaderCompilerError,int>
              ((FShaderCompilerError *)(pTVar1->AllocatorInstance).Data,(this->Errors).ArrayNum);
    iVar11 = (param_1->Errors).ArrayNum;
    piVar2 = &(this->Errors).ArrayMax;
    pFVar8 = (FShaderCompilerError *)(param_1->Errors).AllocatorInstance.Data;
    (this->Errors).ArrayNum = iVar11;
    if ((iVar11 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,iVar11,*piVar2,&pTVar1->AllocatorInstance,iVar11,piVar2);
      ConstructItems<FShaderCompilerError,FShaderCompilerError,int>
                ((pTVar1->AllocatorInstance).Data,pFVar8,iVar11);
    }
  }
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            (&this->PragmaDirectives,&param_1->PragmaDirectives);
  pFVar5 = &this->Remapper;
  if (pFVar5 != &param_1->Remapper) {
    DestructItems<FShaderDiagnosticRemapper::FSourceBlock,int>
              ((FSourceBlock *)(pFVar5->Blocks).AllocatorInstance.Data,
               (this->Remapper).Blocks.ArrayNum);
    iVar11 = (param_1->Remapper).Blocks.ArrayNum;
    piVar2 = &(this->Remapper).Blocks.ArrayMax;
    pFVar9 = (FSourceBlock *)(param_1->Remapper).Blocks.AllocatorInstance.Data;
    iVar7 = *piVar2;
    (this->Remapper).Blocks.ArrayNum = iVar11;
    if ((iVar11 == 0) && (iVar7 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar11,iVar7,(ForAnyElementType *)pFVar5,iVar11,piVar2);
      ConstructItems<FShaderDiagnosticRemapper::FSourceBlock,FShaderDiagnosticRemapper::FSourceBlock,int>
                ((pFVar5->Blocks).AllocatorInstance.Data,pFVar9,iVar11);
    }
  }
  pTVar3 = &(param_1->Remapper).StrippedLineOffsets;
  pTVar4 = &(this->Remapper).StrippedLineOffsets;
  if (pTVar4 != pTVar3) {
    iVar11 = (param_1->Remapper).StrippedLineOffsets.ArrayNum;
    piVar2 = &(this->Remapper).StrippedLineOffsets.ArrayMax;
    _Src = (pTVar3->AllocatorInstance).Data;
    iVar7 = *piVar2;
    (this->Remapper).StrippedLineOffsets.ArrayNum = iVar11;
    if ((iVar11 == 0) && (iVar7 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar11,iVar7,&pTVar4->AllocatorInstance,iVar11,piVar2);
      if (iVar11 != 0) {
        memcpy((pTVar4->AllocatorInstance).Data,_Src,(longlong)iVar11 << 2);
      }
    }
  }
  this->PreprocessTime = param_1->PreprocessTime;
  pTVar6 = &this->ShaderDiagnosticDatas;
  this->bSucceeded = param_1->bSucceeded;
  this->bIsSecondary = param_1->bIsSecondary;
  if (pTVar6 != &param_1->ShaderDiagnosticDatas) {
    DestructItems<FShaderDiagnosticData,int>
              ((FShaderDiagnosticData *)(pTVar6->AllocatorInstance).Data,
               (this->ShaderDiagnosticDatas).ArrayNum);
    iVar11 = (param_1->ShaderDiagnosticDatas).ArrayNum;
    piVar2 = &(this->ShaderDiagnosticDatas).ArrayMax;
    pFVar10 = (FShaderDiagnosticData *)(param_1->ShaderDiagnosticDatas).AllocatorInstance.Data;
    (this->ShaderDiagnosticDatas).ArrayNum = iVar11;
    if ((iVar11 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar11,*piVar2,&pTVar6->AllocatorInstance,iVar11,piVar2);
      ConstructItems<FShaderDiagnosticData,FShaderDiagnosticData,int>
                ((pTVar6->AllocatorInstance).Data,pFVar10,iVar11);
    }
  }
  return this;
}

