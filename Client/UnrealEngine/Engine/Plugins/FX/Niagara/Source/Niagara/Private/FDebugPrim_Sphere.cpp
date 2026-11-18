// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// PersistentVMBindings @ 148ea41e0

PersistentVMBindings * __thiscall
NDIDebugDrawLocal::FDebugPrim_Sphere::PersistentVMBindings::PersistentVMBindings
          (PersistentVMBindings *this,FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  FNiagaraBool *pFVar4;
  
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            (&this->CenterParam,param_1);
  (this->CenterWSParam).Data.InputPtr = (ENiagaraCoordinateSpace *)0x0;
  (this->CenterWSParam).Data.StartPtr = (ENiagaraCoordinateSpace *)0x0;
  (this->CenterWSParam).Data.AdvanceOffset = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->CenterWSParam).Data.AdvanceOffset);
  (this->CenterWSParam).Data.InputPtr = (ENiagaraCoordinateSpace *)pfVar3;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  iVar2 = (this->CenterWSParam).Data.AdvanceOffset;
  (this->CenterWSParam).Data.InputPtr = (ENiagaraCoordinateSpace *)(pfVar3 + iVar1 * iVar2);
  (this->CenterWSParam).Data.StartPtr = (ENiagaraCoordinateSpace *)(pfVar3 + iVar1 * iVar2);
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            (&this->OffsetParam,param_1);
  (this->OffsetWSParam).Data.InputPtr = (ENiagaraCoordinateSpace *)0x0;
  (this->OffsetWSParam).Data.StartPtr = (ENiagaraCoordinateSpace *)0x0;
  (this->OffsetWSParam).Data.AdvanceOffset = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->OffsetWSParam).Data.AdvanceOffset);
  iVar1 = (this->OffsetWSParam).Data.AdvanceOffset;
  (this->OffsetWSParam).Data.InputPtr = (ENiagaraCoordinateSpace *)pfVar3;
  iVar2 = param_1->PerInstanceFnInstanceIdx;
  (this->OffsetWSParam).Data.InputPtr = (ENiagaraCoordinateSpace *)(pfVar3 + iVar1 * iVar2);
  (this->OffsetWSParam).Data.StartPtr = (ENiagaraCoordinateSpace *)(pfVar3 + iVar1 * iVar2);
  (this->RadiusParam).Data.InputPtr = (float *)0x0;
  (this->RadiusParam).Data.StartPtr = (float *)0x0;
  (this->RadiusParam).Data.AdvanceOffset = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->RadiusParam).Data.AdvanceOffset);
  iVar1 = (this->RadiusParam).Data.AdvanceOffset;
  (this->RadiusParam).Data.InputPtr = pfVar3;
  iVar2 = param_1->PerInstanceFnInstanceIdx;
  (this->RadiusParam).Data.InputPtr = pfVar3 + iVar1 * iVar2;
  (this->RadiusParam).Data.StartPtr = pfVar3 + iVar1 * iVar2;
  (this->RadiusWSParam).Data.InputPtr = (ENiagaraCoordinateSpace *)0x0;
  (this->RadiusWSParam).Data.StartPtr = (ENiagaraCoordinateSpace *)0x0;
  (this->RadiusWSParam).Data.AdvanceOffset = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->RadiusWSParam).Data.AdvanceOffset);
  (this->RadiusWSParam).Data.InputPtr = (ENiagaraCoordinateSpace *)pfVar3;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  iVar2 = (this->RadiusWSParam).Data.AdvanceOffset;
  (this->RadiusWSParam).Data.InputPtr = (ENiagaraCoordinateSpace *)(pfVar3 + iVar1 * iVar2);
  (this->RadiusWSParam).Data.StartPtr = (ENiagaraCoordinateSpace *)(pfVar3 + iVar1 * iVar2);
  (this->HemiXParam).Data.InputPtr = (FNiagaraBool *)0x0;
  (this->HemiXParam).Data.StartPtr = (FNiagaraBool *)0x0;
  (this->HemiXParam).Data.AdvanceOffset = 0;
  pFVar4 = (FNiagaraBool *)
           FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->HemiXParam).Data.AdvanceOffset);
  (this->HemiXParam).Data.InputPtr = pFVar4;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  iVar2 = (this->HemiXParam).Data.AdvanceOffset;
  (this->HemiXParam).Data.InputPtr = pFVar4 + iVar1 * iVar2;
  (this->HemiXParam).Data.StartPtr = pFVar4 + iVar1 * iVar2;
  (this->HemiYParam).Data.InputPtr = (FNiagaraBool *)0x0;
  (this->HemiYParam).Data.StartPtr = (FNiagaraBool *)0x0;
  (this->HemiYParam).Data.AdvanceOffset = 0;
  pFVar4 = (FNiagaraBool *)
           FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->HemiYParam).Data.AdvanceOffset);
  iVar1 = (this->HemiYParam).Data.AdvanceOffset;
  (this->HemiYParam).Data.InputPtr = pFVar4;
  iVar2 = param_1->PerInstanceFnInstanceIdx;
  (this->HemiYParam).Data.InputPtr = pFVar4 + iVar1 * iVar2;
  (this->HemiYParam).Data.StartPtr = pFVar4 + iVar1 * iVar2;
  (this->HemiZParam).Data.InputPtr = (FNiagaraBool *)0x0;
  (this->HemiZParam).Data.StartPtr = (FNiagaraBool *)0x0;
  (this->HemiZParam).Data.AdvanceOffset = 0;
  pFVar4 = (FNiagaraBool *)
           FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->HemiZParam).Data.AdvanceOffset);
  iVar1 = (this->HemiZParam).Data.AdvanceOffset;
  (this->HemiZParam).Data.InputPtr = pFVar4;
  iVar2 = param_1->PerInstanceFnInstanceIdx;
  (this->HemiZParam).Data.InputPtr = pFVar4 + iVar1 * iVar2;
  (this->HemiZParam).Data.StartPtr = pFVar4 + iVar1 * iVar2;
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            (&this->OrientationAxisParam,param_1);
  (this->RotationWSParam).Data.InputPtr = (ENiagaraCoordinateSpace *)0x0;
  (this->RotationWSParam).Data.StartPtr = (ENiagaraCoordinateSpace *)0x0;
  (this->RotationWSParam).Data.AdvanceOffset = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->RotationWSParam).Data.AdvanceOffset);
  (this->RotationWSParam).Data.InputPtr = (ENiagaraCoordinateSpace *)pfVar3;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  iVar2 = (this->RotationWSParam).Data.AdvanceOffset;
  (this->RotationWSParam).Data.InputPtr = (ENiagaraCoordinateSpace *)(pfVar3 + iVar1 * iVar2);
  (this->RotationWSParam).Data.StartPtr = (ENiagaraCoordinateSpace *)(pfVar3 + iVar1 * iVar2);
  FNDIInputParam<UE::Math::TQuat<float>_>::FNDIInputParam<UE::Math::TQuat<float>_>
            (&this->AdditionalRotationParam,param_1);
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            (&this->NonUniformScaleParam,param_1);
  (this->SegmentsParam).Data.InputPtr = (int *)0x0;
  (this->SegmentsParam).Data.StartPtr = (int *)0x0;
  (this->SegmentsParam).Data.AdvanceOffset = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->SegmentsParam).Data.AdvanceOffset);
  (this->SegmentsParam).Data.InputPtr = (int *)pfVar3;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  iVar2 = (this->SegmentsParam).Data.AdvanceOffset;
  (this->SegmentsParam).Data.InputPtr = (int *)(pfVar3 + iVar1 * iVar2);
  (this->SegmentsParam).Data.StartPtr = (int *)(pfVar3 + iVar1 * iVar2);
  FNDIInputParam<FLinearColor>::FNDIInputParam<FLinearColor>(&this->ColorParam,param_1);
  return this;
}

