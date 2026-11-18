// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// PersistentVMBindings @ 148ea44e0

PersistentVMBindings * __thiscall
NDIDebugDrawLocal::FDebugPrim_Torus::PersistentVMBindings::PersistentVMBindings
          (PersistentVMBindings *this,FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  
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
  (this->OffsetWSParam).Data.InputPtr = (ENiagaraCoordinateSpace *)pfVar3;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  iVar2 = (this->OffsetWSParam).Data.AdvanceOffset;
  (this->OffsetWSParam).Data.InputPtr = (ENiagaraCoordinateSpace *)(pfVar3 + iVar1 * iVar2);
  (this->OffsetWSParam).Data.StartPtr = (ENiagaraCoordinateSpace *)(pfVar3 + iVar1 * iVar2);
  (this->MajorRadiusParam).Data.InputPtr = (float *)0x0;
  (this->MajorRadiusParam).Data.StartPtr = (float *)0x0;
  (this->MajorRadiusParam).Data.AdvanceOffset = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->MajorRadiusParam).Data.AdvanceOffset);
  iVar1 = (this->MajorRadiusParam).Data.AdvanceOffset;
  (this->MajorRadiusParam).Data.InputPtr = pfVar3;
  iVar2 = param_1->PerInstanceFnInstanceIdx;
  (this->MajorRadiusParam).Data.InputPtr = pfVar3 + iVar1 * iVar2;
  (this->MajorRadiusParam).Data.StartPtr = pfVar3 + iVar1 * iVar2;
  (this->MinorRadiusParam).Data.InputPtr = (float *)0x0;
  (this->MinorRadiusParam).Data.StartPtr = (float *)0x0;
  (this->MinorRadiusParam).Data.AdvanceOffset = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->MinorRadiusParam).Data.AdvanceOffset);
  iVar1 = (this->MinorRadiusParam).Data.AdvanceOffset;
  (this->MinorRadiusParam).Data.InputPtr = pfVar3;
  iVar2 = param_1->PerInstanceFnInstanceIdx;
  (this->MinorRadiusParam).Data.InputPtr = pfVar3 + iVar1 * iVar2;
  (this->MinorRadiusParam).Data.StartPtr = pfVar3 + iVar1 * iVar2;
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            (&this->OrientationAxisParam,param_1);
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
  (this->MajorRadiusSegments).Data.InputPtr = (int *)0x0;
  (this->MajorRadiusSegments).Data.StartPtr = (int *)0x0;
  (this->MajorRadiusSegments).Data.AdvanceOffset = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->MajorRadiusSegments).Data.AdvanceOffset);
  (this->MajorRadiusSegments).Data.InputPtr = (int *)pfVar3;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  iVar2 = (this->MajorRadiusSegments).Data.AdvanceOffset;
  (this->MajorRadiusSegments).Data.InputPtr = (int *)(pfVar3 + iVar1 * iVar2);
  (this->MajorRadiusSegments).Data.StartPtr = (int *)(pfVar3 + iVar1 * iVar2);
  (this->MinorRadiusSegments).Data.InputPtr = (int *)0x0;
  (this->MinorRadiusSegments).Data.StartPtr = (int *)0x0;
  (this->MinorRadiusSegments).Data.AdvanceOffset = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->MinorRadiusSegments).Data.AdvanceOffset);
  iVar1 = (this->MinorRadiusSegments).Data.AdvanceOffset;
  (this->MinorRadiusSegments).Data.InputPtr = (int *)pfVar3;
  iVar2 = param_1->PerInstanceFnInstanceIdx;
  (this->MinorRadiusSegments).Data.InputPtr = (int *)(pfVar3 + iVar1 * iVar2);
  (this->MinorRadiusSegments).Data.StartPtr = (int *)(pfVar3 + iVar1 * iVar2);
  FNDIInputParam<FLinearColor>::FNDIInputParam<FLinearColor>(&this->ColorParam,param_1);
  return this;
}

