// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 2

// FOpenGLVertexShader @ 145be5f40

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FOpenGLVertexShader * __thiscall
FOpenGLVertexShader::FOpenGLVertexShader
          (FOpenGLVertexShader *this,TArrayView<unsigned_char_const_,int> *param_1,FSHAHash *param_2
          )

{
  TArrayView<unsigned_char_const_,int> local_18;
  
  FRHIShader::FRHIShader((FRHIShader *)this,RRT_VertexShader,SF_Vertex);
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  *(undefined ***)this = &___7FRHIVertexShader__6B_;
  FOpenGLShader::FOpenGLShader
            ((FOpenGLShader *)&this->field_0x108,&local_18,param_2,0x8b31,
             (FShaderResourceTable *)&this->field_0x18,(FRHIShader *)this);
  *(undefined ***)this = &___7FOpenGLVertexShader__6B_;
  return this;
}

// ConditionalyCompile @ 145bf8d60

void __thiscall FOpenGLVertexShader::ConditionalyCompile(FOpenGLVertexShader *this)

{
  if (*(int *)&this->field_0x108 == 0) {
    FOpenGLShader::Compile((FOpenGLShader *)&this->field_0x108,0x8b31);
    return;
  }
  return;
}

