// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// FNDIInputParam<UE::Math::TQuat<float>_> @ 148ea1730

FNDIInputParam<UE::Math::TQuat<float>_> * __thiscall
FNDIInputParam<UE::Math::TQuat<float>_>::FNDIInputParam<UE::Math::TQuat<float>_>
          (FNDIInputParam<UE::Math::TQuat<float>_> *this,FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  float *pfVar2;
  
  (this->X).InputPtr = (float *)0x0;
  (this->X).StartPtr = (float *)0x0;
  (this->X).AdvanceOffset = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,&(this->X).AdvanceOffset);
  (this->X).InputPtr = pfVar2;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  (this->X).InputPtr = pfVar2 + (this->X).AdvanceOffset * iVar1;
  (this->X).StartPtr = pfVar2 + (this->X).AdvanceOffset * iVar1;
  (this->Y).InputPtr = (float *)0x0;
  (this->Y).StartPtr = (float *)0x0;
  (this->Y).AdvanceOffset = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,&(this->Y).AdvanceOffset);
  (this->Y).InputPtr = pfVar2;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  (this->Y).InputPtr = pfVar2 + iVar1 * (this->Y).AdvanceOffset;
  (this->Y).StartPtr = pfVar2 + iVar1 * (this->Y).AdvanceOffset;
  (this->Z).InputPtr = (float *)0x0;
  (this->Z).StartPtr = (float *)0x0;
  (this->Z).AdvanceOffset = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,&(this->Z).AdvanceOffset);
  (this->Z).InputPtr = pfVar2;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  (this->Z).InputPtr = pfVar2 + (this->Z).AdvanceOffset * iVar1;
  (this->Z).StartPtr = pfVar2 + (this->Z).AdvanceOffset * iVar1;
  (this->W).InputPtr = (float *)0x0;
  (this->W).StartPtr = (float *)0x0;
  (this->W).AdvanceOffset = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,&(this->W).AdvanceOffset);
  (this->W).InputPtr = pfVar2;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  (this->W).InputPtr = pfVar2 + (this->W).AdvanceOffset * iVar1;
  (this->W).StartPtr = pfVar2 + (this->W).AdvanceOffset * iVar1;
  return this;
}

// FNDIInputParam<UE::Math::TVector2<float>_> @ 148ea1830

FNDIInputParam<UE::Math::TVector2<float>_> * __thiscall
FNDIInputParam<UE::Math::TVector2<float>_>::FNDIInputParam<UE::Math::TVector2<float>_>
          (FNDIInputParam<UE::Math::TVector2<float>_> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  float *pfVar2;
  
  (this->X).InputPtr = (float *)0x0;
  (this->X).StartPtr = (float *)0x0;
  (this->X).AdvanceOffset = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,&(this->X).AdvanceOffset);
  (this->X).InputPtr = pfVar2;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  (this->X).InputPtr = pfVar2 + (this->X).AdvanceOffset * iVar1;
  (this->X).StartPtr = pfVar2 + (this->X).AdvanceOffset * iVar1;
  (this->Y).InputPtr = (float *)0x0;
  (this->Y).StartPtr = (float *)0x0;
  (this->Y).AdvanceOffset = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,&(this->Y).AdvanceOffset);
  (this->Y).InputPtr = pfVar2;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  (this->Y).InputPtr = pfVar2 + (this->Y).AdvanceOffset * iVar1;
  (this->Y).StartPtr = pfVar2 + (this->Y).AdvanceOffset * iVar1;
  return this;
}

// FNDIInputParam<UE::Math::TVector<float>_> @ 148ea18d0

FNDIInputParam<UE::Math::TVector<float>_> * __thiscall
FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
          (FNDIInputParam<UE::Math::TVector<float>_> *this,FVectorVMExternalFunctionContext *param_1
          )

{
  int iVar1;
  float *pfVar2;
  
  (this->X).InputPtr = (float *)0x0;
  (this->X).StartPtr = (float *)0x0;
  (this->X).AdvanceOffset = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,&(this->X).AdvanceOffset);
  (this->X).InputPtr = pfVar2;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  (this->X).InputPtr = pfVar2 + (this->X).AdvanceOffset * iVar1;
  (this->X).StartPtr = pfVar2 + (this->X).AdvanceOffset * iVar1;
  (this->Y).InputPtr = (float *)0x0;
  (this->Y).StartPtr = (float *)0x0;
  (this->Y).AdvanceOffset = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,&(this->Y).AdvanceOffset);
  (this->Y).InputPtr = pfVar2;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  (this->Y).InputPtr = pfVar2 + (this->Y).AdvanceOffset * iVar1;
  (this->Y).StartPtr = pfVar2 + (this->Y).AdvanceOffset * iVar1;
  (this->Z).InputPtr = (float *)0x0;
  (this->Z).StartPtr = (float *)0x0;
  (this->Z).AdvanceOffset = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,&(this->Z).AdvanceOffset);
  (this->Z).InputPtr = pfVar2;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  (this->Z).InputPtr = pfVar2 + (this->Z).AdvanceOffset * iVar1;
  (this->Z).StartPtr = pfVar2 + (this->Z).AdvanceOffset * iVar1;
  return this;
}

// FNDIInputParam<FLinearColor> @ 148ea19a0

FNDIInputParam<FLinearColor> * __thiscall
FNDIInputParam<FLinearColor>::FNDIInputParam<FLinearColor>
          (FNDIInputParam<FLinearColor> *this,FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  float *pfVar2;
  
  (this->R).InputPtr = (float *)0x0;
  (this->R).StartPtr = (float *)0x0;
  (this->R).AdvanceOffset = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,&(this->R).AdvanceOffset);
  (this->R).InputPtr = pfVar2;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  (this->R).InputPtr = pfVar2 + (this->R).AdvanceOffset * iVar1;
  (this->R).StartPtr = pfVar2 + (this->R).AdvanceOffset * iVar1;
  (this->G).InputPtr = (float *)0x0;
  (this->G).StartPtr = (float *)0x0;
  (this->G).AdvanceOffset = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,&(this->G).AdvanceOffset);
  (this->G).InputPtr = pfVar2;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  (this->G).InputPtr = pfVar2 + iVar1 * (this->G).AdvanceOffset;
  (this->G).StartPtr = pfVar2 + iVar1 * (this->G).AdvanceOffset;
  (this->B).InputPtr = (float *)0x0;
  (this->B).StartPtr = (float *)0x0;
  (this->B).AdvanceOffset = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,&(this->B).AdvanceOffset);
  (this->B).InputPtr = pfVar2;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  (this->B).InputPtr = pfVar2 + (this->B).AdvanceOffset * iVar1;
  (this->B).StartPtr = pfVar2 + (this->B).AdvanceOffset * iVar1;
  (this->A).InputPtr = (float *)0x0;
  (this->A).StartPtr = (float *)0x0;
  (this->A).AdvanceOffset = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,&(this->A).AdvanceOffset);
  (this->A).InputPtr = pfVar2;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  (this->A).InputPtr = pfVar2 + (this->A).AdvanceOffset * iVar1;
  (this->A).StartPtr = pfVar2 + (this->A).AdvanceOffset * iVar1;
  return this;
}

// FNDIInputParam<FNiagaraPosition> @ 148ea1aa0

FNDIInputParam<FNiagaraPosition> * __thiscall
FNDIInputParam<FNiagaraPosition>::FNDIInputParam<FNiagaraPosition>
          (FNDIInputParam<FNiagaraPosition> *this,FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  float *pfVar2;
  
  (this->X).InputPtr = (float *)0x0;
  (this->X).StartPtr = (float *)0x0;
  (this->X).AdvanceOffset = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,&(this->X).AdvanceOffset);
  (this->X).InputPtr = pfVar2;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  (this->X).InputPtr = pfVar2 + (this->X).AdvanceOffset * iVar1;
  (this->X).StartPtr = pfVar2 + (this->X).AdvanceOffset * iVar1;
  (this->Y).InputPtr = (float *)0x0;
  (this->Y).StartPtr = (float *)0x0;
  (this->Y).AdvanceOffset = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,&(this->Y).AdvanceOffset);
  (this->Y).InputPtr = pfVar2;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  (this->Y).InputPtr = pfVar2 + (this->Y).AdvanceOffset * iVar1;
  (this->Y).StartPtr = pfVar2 + (this->Y).AdvanceOffset * iVar1;
  (this->Z).InputPtr = (float *)0x0;
  (this->Z).StartPtr = (float *)0x0;
  (this->Z).AdvanceOffset = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,&(this->Z).AdvanceOffset);
  (this->Z).InputPtr = pfVar2;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  (this->Z).InputPtr = pfVar2 + (this->Z).AdvanceOffset * iVar1;
  (this->Z).StartPtr = pfVar2 + (this->Z).AdvanceOffset * iVar1;
  return this;
}

// FNDIInputParam<float> @ 148f7de00

FNDIInputParam<float> * __thiscall
FNDIInputParam<float>::FNDIInputParam<float>
          (FNDIInputParam<float> *this,FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  float *pfVar2;
  
  (this->Data).InputPtr = (float *)0x0;
  (this->Data).StartPtr = (float *)0x0;
  (this->Data).AdvanceOffset = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,&(this->Data).AdvanceOffset);
  (this->Data).InputPtr = pfVar2;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  (this->Data).InputPtr = pfVar2 + iVar1 * (this->Data).AdvanceOffset;
  (this->Data).StartPtr = pfVar2 + iVar1 * (this->Data).AdvanceOffset;
  return this;
}

// FNDIInputParam<UE::Math::TVector4<float>_> @ 1490ad930

FNDIInputParam<UE::Math::TVector4<float>_> * __thiscall
FNDIInputParam<UE::Math::TVector4<float>_>::FNDIInputParam<UE::Math::TVector4<float>_>
          (FNDIInputParam<UE::Math::TVector4<float>_> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  float *pfVar2;
  
  (this->X).InputPtr = (float *)0x0;
  (this->X).StartPtr = (float *)0x0;
  (this->X).AdvanceOffset = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,&(this->X).AdvanceOffset);
  (this->X).InputPtr = pfVar2;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  (this->X).InputPtr = pfVar2 + (this->X).AdvanceOffset * iVar1;
  (this->X).StartPtr = pfVar2 + (this->X).AdvanceOffset * iVar1;
  (this->Y).InputPtr = (float *)0x0;
  (this->Y).StartPtr = (float *)0x0;
  (this->Y).AdvanceOffset = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,&(this->Y).AdvanceOffset);
  (this->Y).InputPtr = pfVar2;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  (this->Y).InputPtr = pfVar2 + iVar1 * (this->Y).AdvanceOffset;
  (this->Y).StartPtr = pfVar2 + iVar1 * (this->Y).AdvanceOffset;
  (this->Z).InputPtr = (float *)0x0;
  (this->Z).StartPtr = (float *)0x0;
  (this->Z).AdvanceOffset = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,&(this->Z).AdvanceOffset);
  (this->Z).InputPtr = pfVar2;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  (this->Z).InputPtr = pfVar2 + (this->Z).AdvanceOffset * iVar1;
  (this->Z).StartPtr = pfVar2 + (this->Z).AdvanceOffset * iVar1;
  (this->W).InputPtr = (float *)0x0;
  (this->W).StartPtr = (float *)0x0;
  (this->W).AdvanceOffset = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,&(this->W).AdvanceOffset);
  (this->W).InputPtr = pfVar2;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  (this->W).InputPtr = pfVar2 + (this->W).AdvanceOffset * iVar1;
  (this->W).StartPtr = pfVar2 + (this->W).AdvanceOffset * iVar1;
  return this;
}

