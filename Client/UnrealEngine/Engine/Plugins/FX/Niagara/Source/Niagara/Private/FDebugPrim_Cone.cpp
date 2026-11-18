// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// PersistentVMBindings @ 148ea3770

PersistentVMBindings * __thiscall
NDIDebugDrawLocal::FDebugPrim_Cone::PersistentVMBindings::PersistentVMBindings
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
  (this->AngleParam).Data.InputPtr = (float *)0x0;
  (this->AngleParam).Data.StartPtr = (float *)0x0;
  (this->AngleParam).Data.AdvanceOffset = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->AngleParam).Data.AdvanceOffset);
  iVar1 = (this->AngleParam).Data.AdvanceOffset;
  (this->AngleParam).Data.InputPtr = pfVar3;
  iVar2 = param_1->PerInstanceFnInstanceIdx;
  (this->AngleParam).Data.InputPtr = pfVar3 + iVar1 * iVar2;
  (this->AngleParam).Data.StartPtr = pfVar3 + iVar1 * iVar2;
  (this->LengthParam).Data.InputPtr = (float *)0x0;
  (this->LengthParam).Data.StartPtr = (float *)0x0;
  (this->LengthParam).Data.AdvanceOffset = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->LengthParam).Data.AdvanceOffset);
  iVar1 = (this->LengthParam).Data.AdvanceOffset;
  (this->LengthParam).Data.InputPtr = pfVar3;
  iVar2 = param_1->PerInstanceFnInstanceIdx;
  (this->LengthParam).Data.InputPtr = pfVar3 + iVar1 * iVar2;
  (this->LengthParam).Data.StartPtr = pfVar3 + iVar1 * iVar2;
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
  (this->NumRadiusSegmentsParam).Data.InputPtr = (int *)0x0;
  (this->NumRadiusSegmentsParam).Data.StartPtr = (int *)0x0;
  (this->NumRadiusSegmentsParam).Data.AdvanceOffset = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->NumRadiusSegmentsParam).Data.AdvanceOffset);
  (this->NumRadiusSegmentsParam).Data.InputPtr = (int *)pfVar3;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  iVar2 = (this->NumRadiusSegmentsParam).Data.AdvanceOffset;
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

