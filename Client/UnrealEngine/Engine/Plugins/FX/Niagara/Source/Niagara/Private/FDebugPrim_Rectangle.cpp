// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// PersistentVMBindings @ 148ea3f70

PersistentVMBindings * __thiscall
NDIDebugDrawLocal::FDebugPrim_Rectangle::PersistentVMBindings::PersistentVMBindings
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
  iVar1 = (this->LocationWSParam).Data.AdvanceOffset;
  (this->LocationWSParam).Data.InputPtr = (ENiagaraCoordinateSpace *)pfVar3;
  iVar2 = param_1->PerInstanceFnInstanceIdx;
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
  FNDIInputParam<UE::Math::TVector2<float>_>::FNDIInputParam<UE::Math::TVector2<float>_>
            (&this->ExtentsParam,param_1);
  (this->HalfExtentsParam).Data.InputPtr = (FNiagaraBool *)0x0;
  (this->HalfExtentsParam).Data.StartPtr = (FNiagaraBool *)0x0;
  (this->HalfExtentsParam).Data.AdvanceOffset = 0;
  pFVar4 = (FNiagaraBool *)
           FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->HalfExtentsParam).Data.AdvanceOffset);
  (this->HalfExtentsParam).Data.InputPtr = pFVar4;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  iVar2 = (this->HalfExtentsParam).Data.AdvanceOffset;
  (this->HalfExtentsParam).Data.InputPtr = pFVar4 + iVar1 * iVar2;
  (this->HalfExtentsParam).Data.StartPtr = pFVar4 + iVar1 * iVar2;
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            (&this->XAxisParam,param_1);
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            (&this->YAxisParam,param_1);
  (this->AxisCoordinateSpace).Data.InputPtr = (ENiagaraCoordinateSpace *)0x0;
  (this->AxisCoordinateSpace).Data.StartPtr = (ENiagaraCoordinateSpace *)0x0;
  (this->AxisCoordinateSpace).Data.AdvanceOffset = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->AxisCoordinateSpace).Data.AdvanceOffset);
  iVar1 = (this->AxisCoordinateSpace).Data.AdvanceOffset;
  (this->AxisCoordinateSpace).Data.InputPtr = (ENiagaraCoordinateSpace *)pfVar3;
  iVar2 = param_1->PerInstanceFnInstanceIdx;
  (this->AxisCoordinateSpace).Data.InputPtr = (ENiagaraCoordinateSpace *)(pfVar3 + iVar1 * iVar2);
  (this->AxisCoordinateSpace).Data.StartPtr = (ENiagaraCoordinateSpace *)(pfVar3 + iVar1 * iVar2);
  (this->NumXSegmentsParam).Data.InputPtr = (int *)0x0;
  (this->NumXSegmentsParam).Data.StartPtr = (int *)0x0;
  (this->NumXSegmentsParam).Data.AdvanceOffset = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->NumXSegmentsParam).Data.AdvanceOffset);
  iVar1 = (this->NumXSegmentsParam).Data.AdvanceOffset;
  (this->NumXSegmentsParam).Data.InputPtr = (int *)pfVar3;
  iVar2 = param_1->PerInstanceFnInstanceIdx;
  (this->NumXSegmentsParam).Data.InputPtr = (int *)(pfVar3 + iVar1 * iVar2);
  (this->NumXSegmentsParam).Data.StartPtr = (int *)(pfVar3 + iVar1 * iVar2);
  (this->NumYSegmentsParam).Data.InputPtr = (int *)0x0;
  (this->NumYSegmentsParam).Data.StartPtr = (int *)0x0;
  (this->NumYSegmentsParam).Data.AdvanceOffset = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->NumYSegmentsParam).Data.AdvanceOffset);
  (this->NumYSegmentsParam).Data.InputPtr = (int *)pfVar3;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  iVar2 = (this->NumYSegmentsParam).Data.AdvanceOffset;
  (this->NumYSegmentsParam).Data.InputPtr = (int *)(pfVar3 + iVar1 * iVar2);
  (this->NumYSegmentsParam).Data.StartPtr = (int *)(pfVar3 + iVar1 * iVar2);
  (this->UnboundedParam).Data.InputPtr = (FNiagaraBool *)0x0;
  (this->UnboundedParam).Data.StartPtr = (FNiagaraBool *)0x0;
  (this->UnboundedParam).Data.AdvanceOffset = 0;
  pFVar4 = (FNiagaraBool *)
           FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,&(this->UnboundedParam).Data.AdvanceOffset);
  (this->UnboundedParam).Data.InputPtr = pFVar4;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  iVar2 = (this->UnboundedParam).Data.AdvanceOffset;
  (this->UnboundedParam).Data.InputPtr = pFVar4 + iVar1 * iVar2;
  (this->UnboundedParam).Data.StartPtr = pFVar4 + iVar1 * iVar2;
  FNDIInputParam<FLinearColor>::FNDIInputParam<FLinearColor>(&this->ColorParam,param_1);
  return this;
}

