// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FMaterialShaderParameters @ 14472dd00

FMaterialShaderParameters * __thiscall
FMaterialShaderParameters::FMaterialShaderParameters
          (FMaterialShaderParameters *this,FMaterialShaderParameters *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  longlong lVar4;
  
  lVar4 = param_1->_padding_;
  pTVar1 = &this->MaterialShaderTags;
  piVar2 = &(this->MaterialShaderTags).ArrayMax;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar4;
  lVar4 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar4;
  lVar4 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar4;
  this->_padding_ = param_1->_padding_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->MaterialShaderTags).ArrayNum;
  _Src = (param_1->MaterialShaderTags).AllocatorInstance.Data;
  (this->MaterialShaderTags).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 3);
  }
  return this;
}

