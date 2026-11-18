// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 2

// Emplace<FOpenGLLinkedProgram::FComputeProgram,FOpenGLLinkedProgram_&,FOpenGLComputeShader_*_&> @ 145bd89f0

/* WARNING: Enum "EShaderStage": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FOpenGLLinkedProgram::FGraphicsProgram,FOpenGLLinkedProgram::FComputeProgram>
::Emplace<FOpenGLLinkedProgram::FComputeProgram,FOpenGLLinkedProgram_&,FOpenGLComputeShader_*_&>
          (TVariant<FEmptyVariantState,FOpenGLLinkedProgram::FGraphicsProgram,FOpenGLLinkedProgram::FComputeProgram>
           *this,FOpenGLLinkedProgram *param_1,FOpenGLComputeShader **param_2)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  
  bVar1 = this->TypeIndex;
  if (2 < (ulonglong)bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FOpenGLLinkedProgram::FGraphicsProgram,FOpenGLLinkedProgram::FComputeProgram>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar1])(this);
  FOpenGLLinkedProgram::FShaderStage::FShaderStage
            ((FShaderStage *)this,(FOpenGLLinkedProgramBase *)param_1,
             (FOpenGLShader *)&(*param_2)->_padding_,NUM_NON_COMPUTE_SHADER_STAGES,0);
  this->TypeIndex = '\x02';
  return;
}

// Emplace<FOpenGLLinkedProgram::FGraphicsProgram,FOpenGLLinkedProgram_&,FOpenGLVertexShader_*_&,FOpenGLPixelShader_*_&,FOpenGLGeometryShader_*_&> @ 145bd8e50

/* WARNING: Enum "EShaderStage": Some values do not have unique names */

void __thiscall
TVariant<FEmptyVariantState,FOpenGLLinkedProgram::FGraphicsProgram,FOpenGLLinkedProgram::FComputeProgram>
::
Emplace<FOpenGLLinkedProgram::FGraphicsProgram,FOpenGLLinkedProgram_&,FOpenGLVertexShader_*_&,FOpenGLPixelShader_*_&,FOpenGLGeometryShader_*_&>
          (TVariant<FEmptyVariantState,FOpenGLLinkedProgram::FGraphicsProgram,FOpenGLLinkedProgram::FComputeProgram>
           *this,FOpenGLLinkedProgram *param_1,FOpenGLVertexShader **param_2,
          FOpenGLPixelShader **param_3,FOpenGLGeometryShader **param_4)

{
  byte bVar1;
  FOpenGLPixelShader *pFVar2;
  FOpenGLGeometryShader *pFVar3;
  code *pcVar4;
  bool bVar5;
  
  bVar1 = this->TypeIndex;
  if (2 < (ulonglong)bVar1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FOpenGLLinkedProgram::FGraphicsProgram,FOpenGLLinkedProgram::FComputeProgram>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar1])(this);
  pFVar2 = *param_3;
  pFVar3 = *param_4;
  FOpenGLLinkedProgram::FShaderStage::FShaderStage
            ((FShaderStage *)this,(FOpenGLLinkedProgramBase *)param_1,
             (FOpenGLShader *)&(*param_2)->field_0x108,SHADER_STAGE_VERTEX,0);
  FOpenGLLinkedProgram::FShaderStage::FShaderStage
            ((FShaderStage *)&this->_padding_,(FOpenGLLinkedProgramBase *)param_1,
             (FOpenGLShader *)&pFVar2->field_0x108,SHADER_STAGE_PIXEL,
             (uint)*(byte *)((longlong)&this->_padding_ + 5));
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = pFVar2->field_0x18c;
  if (pFVar3 != (FOpenGLGeometryShader *)0x0) {
    FOpenGLLinkedProgram::FShaderStage::FShaderStage
              ((FShaderStage *)&this->_padding_,(FOpenGLLinkedProgramBase *)param_1,
               (FOpenGLShader *)&pFVar3->field_0x108,SHADER_STAGE_GEOMETRY,
               (uint)*(byte *)((longlong)&this->_padding_ + 5) +
               (uint)*(byte *)((longlong)&this->_padding_ + 5));
    *(undefined1 *)&this->_padding_ = 1;
  }
  this->TypeIndex = '\x01';
  return;
}

