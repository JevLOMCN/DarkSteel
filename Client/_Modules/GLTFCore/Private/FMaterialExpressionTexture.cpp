// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFCore
// Functions: 3

// FMaterialExpressionTexture @ 14e62ad20

FMaterialExpressionTexture * __thiscall
GLTF::FMaterialExpressionTexture::FMaterialExpressionTexture(FMaterialExpressionTexture *this)

{
  FMaterialExpressionInput *pFVar1;
  int *piVar2;
  ForAnyElementType _Src;
  FString local_18;
  
  *(undefined4 *)&this->_padding_ = 4;
  this->_padding_ = 0;
  this->_padding_ = 0;
  pFVar1 = &this->InputCoordinate;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMaterialExpressionTexture_GLTF__6B_;
  ::FString::FString(&local_18,L"InputCoordinate");
  _Src.Data = local_18.Data.AllocatorInstance.Data;
  piVar2 = &(this->InputCoordinate).Name.Data.ArrayMax;
  (pFVar1->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputCoordinate).Name.Data.ArrayNum = local_18.Data.ArrayNum;
  if (local_18.Data.ArrayNum == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)pFVar1,local_18.Data.ArrayNum,
               piVar2);
    memcpy((pFVar1->Name).Data.AllocatorInstance.Data,_Src.Data,(longlong)local_18.Data.ArrayNum * 2
          );
  }
  (this->InputCoordinate).Expression = (FMaterialExpression *)0x0;
  (this->InputCoordinate).OutputIndex = -1;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  this->Texture = (ITextureElement *)0x0;
  return this;
}

// GetInput @ 14e63c730

FMaterialExpressionInput * __thiscall
GLTF::FMaterialExpressionTexture::GetInput(FMaterialExpressionTexture *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FMaterialExpressionInput *pFVar3;
  
  if (param_1 == 0) {
    return &this->InputCoordinate;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_589650665588916122>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTFMaterialExpressions.cpp"
                     ,0x66,"Index == 0");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMaterialExpressionInput *)(*pcVar1)();
    return pFVar3;
  }
  return &this->InputCoordinate;
}

// GetInputCount @ 14e63c7c0

int __thiscall GLTF::FMaterialExpressionTexture::GetInputCount(FMaterialExpressionTexture *this)

{
  return 1;
}

