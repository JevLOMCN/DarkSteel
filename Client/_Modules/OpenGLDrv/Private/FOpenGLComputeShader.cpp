// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 7

// FOpenGLComputeShader @ 145be0730

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FOpenGLComputeShader * __thiscall
FOpenGLComputeShader::FOpenGLComputeShader
          (FOpenGLComputeShader *this,TArrayView<unsigned_char_const_,int> *param_1,
          FSHAHash *param_2)

{
  TArrayView<unsigned_char_const_,int> local_18;
  
  FRHIShader::FRHIShader((FRHIShader *)this,RRT_ComputeShader,SF_Compute);
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  this->_padding_ = (longlong)&___7FRHIComputeShader__6B_;
  this->_padding_ = 0;
  FOpenGLShader::FOpenGLShader
            ((FOpenGLShader *)&this->_padding_,&local_18,param_2,0x91b9,
             (FShaderResourceTable *)&this->_padding_,(FRHIShader *)this);
  this->_padding_ = (longlong)&___7FOpenGLComputeShader__6B_;
  this->LinkedProgram = (FOpenGLLinkedProgram *)0x0;
  return this;
}

// ConditionalyCompile @ 145bf8d00

void __thiscall FOpenGLComputeShader::ConditionalyCompile(FOpenGLComputeShader *this)

{
  if ((int)this->_padding_ == 0) {
    FOpenGLShader::Compile((FOpenGLShader *)&this->_padding_,0x91b9);
    return;
  }
  return;
}

// GetTextureNeeds @ 145c04790

TBitArray<FDefaultBitArrayAllocator> * __thiscall
FOpenGLComputeShader::GetTextureNeeds(FOpenGLComputeShader *this,int *param_1)

{
  *param_1 = (int)this->LinkedProgram->_padding_;
  return (TBitArray<FDefaultBitArrayAllocator> *)&this->LinkedProgram->_padding_;
}

// GetUAVNeeds @ 145c04870

TBitArray<FDefaultBitArrayAllocator> * __thiscall
FOpenGLComputeShader::GetUAVNeeds(FOpenGLComputeShader *this,int *param_1)

{
  *param_1 = *(int *)((longlong)&this->LinkedProgram->_padding_ + 4);
  return (TBitArray<FDefaultBitArrayAllocator> *)&this->LinkedProgram->_padding_;
}

// MaxTextureStageUsed @ 145c0d8d0

int __thiscall FOpenGLComputeShader::MaxTextureStageUsed(FOpenGLComputeShader *this)

{
  return (int)this->LinkedProgram->_padding_;
}

// NeedsTextureStage @ 145c0dcd0

bool __thiscall FOpenGLComputeShader::NeedsTextureStage(FOpenGLComputeShader *this,int param_1)

{
  FOpenGLLinkedProgram *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong *plVar5;
  
  pFVar1 = this->LinkedProgram;
  if ((param_1 < 0) || ((int)pFVar1->_padding_ <= param_1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  plVar5 = (longlong *)pFVar1->_padding_;
  if ((longlong *)pFVar1->_padding_ == (longlong *)0x0) {
    plVar5 = &pFVar1->_padding_;
  }
  return (*(uint *)((longlong)plVar5 +
                   (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
          (param_1 & 0x1fU) & 1) != 0;
}

// NeedsUAVStage @ 145c0dd60

bool __thiscall FOpenGLComputeShader::NeedsUAVStage(FOpenGLComputeShader *this,int param_1)

{
  FOpenGLLinkedProgram *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong *plVar5;
  
  pFVar1 = this->LinkedProgram;
  if ((param_1 < 0) || ((int)pFVar1->_padding_ <= param_1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  plVar5 = (longlong *)pFVar1->_padding_;
  if ((longlong *)pFVar1->_padding_ == (longlong *)0x0) {
    plVar5 = &pFVar1->_padding_;
  }
  return (*(uint *)((longlong)plVar5 +
                   (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
          (param_1 & 0x1fU) & 1) != 0;
}

