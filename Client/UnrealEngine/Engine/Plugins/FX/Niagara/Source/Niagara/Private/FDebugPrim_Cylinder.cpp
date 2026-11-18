// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// PersistentVMBindings @ 148ea39d0

PersistentVMBindings * __thiscall
NDIDebugDrawLocal::FDebugPrim_Cylinder::PersistentVMBindings::PersistentVMBindings
          (PersistentVMBindings *this,FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  FNiagaraBool *pFVar4;
  
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            (&this->LocationParam,param_1);
  (this->LocationWSParam).Data.InputPtr = (ENiagaraCoordinateSpace *)0x0;
  (this->LocationWSParam).Data.StartPtr = (ENiagaraCoordinateSpace *)0x0;
  (this->LocationWSParam).Data.AdvanceOffset = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->LocationWSParam).Data.AdvanceOffset);
  (this->LocationWSParam).Data.InputPtr = (ENiagaraCoordinateSpace *)pfVar3;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  iVar2 = (this->LocationWSParam).Data.AdvanceOffset;
  (this->LocationWSParam).Data.InputPtr = (ENiagaraCoordinateSpace *)(pfVar3 + iVar1 * iVar2);
  (this->LocationWSParam).Data.StartPtr = (ENiagaraCoordinateSpace *)(pfVar3 + iVar1 * iVar2);
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
  (this->HeightParam).Data.InputPtr = (float *)0x0;
  (this->HeightParam).Data.StartPtr = (float *)0x0;
  (this->HeightParam).Data.AdvanceOffset = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->HeightParam).Data.AdvanceOffset);
  (this->HeightParam).Data.InputPtr = pfVar3;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  iVar2 = (this->HeightParam).Data.AdvanceOffset;
  (this->HeightParam).Data.InputPtr = pfVar3 + iVar1 * iVar2;
  (this->HeightParam).Data.StartPtr = pfVar3 + iVar1 * iVar2;
  (this->IsHalfHeightParam).Data.InputPtr = (FNiagaraBool *)0x0;
  (this->IsHalfHeightParam).Data.StartPtr = (FNiagaraBool *)0x0;
  (this->IsHalfHeightParam).Data.AdvanceOffset = 0;
  pFVar4 = (FNiagaraBool *)
           FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->IsHalfHeightParam).Data.AdvanceOffset);
  (this->IsHalfHeightParam).Data.InputPtr = pFVar4;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  iVar2 = (this->IsHalfHeightParam).Data.AdvanceOffset;
  (this->IsHalfHeightParam).Data.InputPtr = pFVar4 + iVar1 * iVar2;
  (this->IsHalfHeightParam).Data.StartPtr = pFVar4 + iVar1 * iVar2;
  (this->HemisphereXParam).Data.InputPtr = (FNiagaraBool *)0x0;
  (this->HemisphereXParam).Data.StartPtr = (FNiagaraBool *)0x0;
  (this->HemisphereXParam).Data.AdvanceOffset = 0;
  pFVar4 = (FNiagaraBool *)
           FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->HemisphereXParam).Data.AdvanceOffset);
  iVar1 = (this->HemisphereXParam).Data.AdvanceOffset;
  (this->HemisphereXParam).Data.InputPtr = pFVar4;
  iVar2 = param_1->PerInstanceFnInstanceIdx;
  (this->HemisphereXParam).Data.InputPtr = pFVar4 + iVar1 * iVar2;
  (this->HemisphereXParam).Data.StartPtr = pFVar4 + iVar1 * iVar2;
  (this->HemisphereYParam).Data.InputPtr = (FNiagaraBool *)0x0;
  (this->HemisphereYParam).Data.StartPtr = (FNiagaraBool *)0x0;
  (this->HemisphereYParam).Data.AdvanceOffset = 0;
  pFVar4 = (FNiagaraBool *)
           FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->HemisphereYParam).Data.AdvanceOffset);
  iVar1 = (this->HemisphereYParam).Data.AdvanceOffset;
  (this->HemisphereYParam).Data.InputPtr = pFVar4;
  iVar2 = param_1->PerInstanceFnInstanceIdx;
  (this->HemisphereYParam).Data.InputPtr = pFVar4 + iVar1 * iVar2;
  (this->HemisphereYParam).Data.StartPtr = pFVar4 + iVar1 * iVar2;
  (this->OrientationAxisParam).Data.InputPtr = (ENiagaraOrientationAxis *)0x0;
  (this->OrientationAxisParam).Data.StartPtr = (ENiagaraOrientationAxis *)0x0;
  (this->OrientationAxisParam).Data.AdvanceOffset = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->OrientationAxisParam).Data.AdvanceOffset);
  (this->OrientationAxisParam).Data.InputPtr = (ENiagaraOrientationAxis *)pfVar3;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  iVar2 = (this->OrientationAxisParam).Data.AdvanceOffset;
  (this->OrientationAxisParam).Data.InputPtr = (ENiagaraOrientationAxis *)(pfVar3 + iVar1 * iVar2);
  (this->OrientationAxisParam).Data.StartPtr = (ENiagaraOrientationAxis *)(pfVar3 + iVar1 * iVar2);
  (this->OrientationAxisCoordinateSpaceParam).Data.InputPtr = (ENiagaraCoordinateSpace *)0x0;
  (this->OrientationAxisCoordinateSpaceParam).Data.StartPtr = (ENiagaraCoordinateSpace *)0x0;
  (this->OrientationAxisCoordinateSpaceParam).Data.AdvanceOffset = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->OrientationAxisCoordinateSpaceParam).Data.AdvanceOffset);
  (this->OrientationAxisCoordinateSpaceParam).Data.InputPtr = (ENiagaraCoordinateSpace *)pfVar3;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  iVar2 = (this->OrientationAxisCoordinateSpaceParam).Data.AdvanceOffset;
  (this->OrientationAxisCoordinateSpaceParam).Data.InputPtr =
       (ENiagaraCoordinateSpace *)(pfVar3 + iVar1 * iVar2);
  (this->OrientationAxisCoordinateSpaceParam).Data.StartPtr =
       (ENiagaraCoordinateSpace *)(pfVar3 + iVar1 * iVar2);
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            (&this->NonUniformScaleParam,param_1);
  (this->NumRadiusSegmentsParam).Data.InputPtr = (int *)0x0;
  (this->NumRadiusSegmentsParam).Data.StartPtr = (int *)0x0;
  (this->NumRadiusSegmentsParam).Data.AdvanceOffset = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->NumRadiusSegmentsParam).Data.AdvanceOffset);
  iVar1 = (this->NumRadiusSegmentsParam).Data.AdvanceOffset;
  (this->NumRadiusSegmentsParam).Data.InputPtr = (int *)pfVar3;
  iVar2 = param_1->PerInstanceFnInstanceIdx;
  (this->NumRadiusSegmentsParam).Data.InputPtr = (int *)(pfVar3 + iVar1 * iVar2);
  (this->NumRadiusSegmentsParam).Data.StartPtr = (int *)(pfVar3 + iVar1 * iVar2);
  (this->NumHeightSegmentsParam).Data.InputPtr = (int *)0x0;
  (this->NumHeightSegmentsParam).Data.StartPtr = (int *)0x0;
  (this->NumHeightSegmentsParam).Data.AdvanceOffset = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->NumHeightSegmentsParam).Data.AdvanceOffset);
  iVar1 = (this->NumHeightSegmentsParam).Data.AdvanceOffset;
  (this->NumHeightSegmentsParam).Data.InputPtr = (int *)pfVar3;
  iVar2 = param_1->PerInstanceFnInstanceIdx;
  (this->NumHeightSegmentsParam).Data.InputPtr = (int *)(pfVar3 + iVar1 * iVar2);
  (this->NumHeightSegmentsParam).Data.StartPtr = (int *)(pfVar3 + iVar1 * iVar2);
  FNDIInputParam<FLinearColor>::FNDIInputParam<FLinearColor>(&this->ColorParam,param_1);
  return this;
}

