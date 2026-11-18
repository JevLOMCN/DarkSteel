// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// PersistentVMBindings @ 148ea3d50

PersistentVMBindings * __thiscall
NDIDebugDrawLocal::FDebugPrim_Grid3D::PersistentVMBindings::PersistentVMBindings
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
  iVar1 = (this->OffsetWSParam).Data.AdvanceOffset;
  (this->OffsetWSParam).Data.InputPtr = (ENiagaraCoordinateSpace *)pfVar3;
  iVar2 = param_1->PerInstanceFnInstanceIdx;
  (this->OffsetWSParam).Data.InputPtr = (ENiagaraCoordinateSpace *)(pfVar3 + iVar1 * iVar2);
  (this->OffsetWSParam).Data.StartPtr = (ENiagaraCoordinateSpace *)(pfVar3 + iVar1 * iVar2);
  FNDIInputParam<UE::Math::TQuat<float>_>::FNDIInputParam<UE::Math::TQuat<float>_>
            (&this->RotationParam,param_1);
  (this->RotationCoordinateSpace).Data.InputPtr = (ENiagaraCoordinateSpace *)0x0;
  (this->RotationCoordinateSpace).Data.StartPtr = (ENiagaraCoordinateSpace *)0x0;
  (this->RotationCoordinateSpace).Data.AdvanceOffset = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->RotationCoordinateSpace).Data.AdvanceOffset);
  iVar1 = (this->RotationCoordinateSpace).Data.AdvanceOffset;
  (this->RotationCoordinateSpace).Data.InputPtr = (ENiagaraCoordinateSpace *)pfVar3;
  iVar2 = param_1->PerInstanceFnInstanceIdx;
  (this->RotationCoordinateSpace).Data.InputPtr =
       (ENiagaraCoordinateSpace *)(pfVar3 + iVar1 * iVar2);
  (this->RotationCoordinateSpace).Data.StartPtr =
       (ENiagaraCoordinateSpace *)(pfVar3 + iVar1 * iVar2);
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            (&this->ExtentsParam,param_1);
  (this->NumCellsXParam).Data.InputPtr = (int *)0x0;
  (this->NumCellsXParam).Data.StartPtr = (int *)0x0;
  (this->NumCellsXParam).Data.AdvanceOffset = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->NumCellsXParam).Data.AdvanceOffset);
  (this->NumCellsXParam).Data.InputPtr = (int *)pfVar3;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  iVar2 = (this->NumCellsXParam).Data.AdvanceOffset;
  (this->NumCellsXParam).Data.InputPtr = (int *)(pfVar3 + iVar1 * iVar2);
  (this->NumCellsXParam).Data.StartPtr = (int *)(pfVar3 + iVar1 * iVar2);
  (this->NumCellsYParam).Data.InputPtr = (int *)0x0;
  (this->NumCellsYParam).Data.StartPtr = (int *)0x0;
  (this->NumCellsYParam).Data.AdvanceOffset = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->NumCellsYParam).Data.AdvanceOffset);
  (this->NumCellsYParam).Data.InputPtr = (int *)pfVar3;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  iVar2 = (this->NumCellsYParam).Data.AdvanceOffset;
  (this->NumCellsYParam).Data.InputPtr = (int *)(pfVar3 + iVar1 * iVar2);
  (this->NumCellsYParam).Data.StartPtr = (int *)(pfVar3 + iVar1 * iVar2);
  (this->NumCellsZParam).Data.InputPtr = (int *)0x0;
  (this->NumCellsZParam).Data.StartPtr = (int *)0x0;
  (this->NumCellsZParam).Data.AdvanceOffset = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->NumCellsZParam).Data.AdvanceOffset);
  iVar1 = (this->NumCellsZParam).Data.AdvanceOffset;
  (this->NumCellsZParam).Data.InputPtr = (int *)pfVar3;
  iVar2 = param_1->PerInstanceFnInstanceIdx;
  (this->NumCellsZParam).Data.InputPtr = (int *)(pfVar3 + iVar1 * iVar2);
  (this->NumCellsZParam).Data.StartPtr = (int *)(pfVar3 + iVar1 * iVar2);
  FNDIInputParam<FLinearColor>::FNDIInputParam<FLinearColor>(&this->ColorParam,param_1);
  return this;
}

