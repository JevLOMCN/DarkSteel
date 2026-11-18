// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 6

// FData @ 1463a10d0

FData * __thiscall FGeometryCollectionParticlesData::FData::FData(FData *this)

{
  (this->RequiredDataFlags).Words[0] = 0;
  (this->SyncedDataFlags).Words[0] = 0;
  *(undefined8 *)&(this->X).field_0x8 = 0;
  *(undefined ***)&this->Geometry =
       &___7__TArrayCollectionArray_PEBVFImplicitObject_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->X).field_0x10 = 0;
  *(undefined ***)&this->GeometryType = &___7__TArrayCollectionArray_E_Chaos__6B_;
  *(undefined ***)&this->GeometryLevelSetGrid =
       &___7__TArrayCollectionArray_V__TUniformGrid_N_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->I = &___7__TArrayCollectionArray_V__PMatrix_N_02_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->InvI = &___7__TArrayCollectionArray_V__PMatrix_N_02_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->CollisionParticlesSize = &___7__TArrayCollectionArray_H_Chaos__6B_;
  *(undefined ***)&this->Island = &___7__TArrayCollectionArray_H_Chaos__6B_;
  *(undefined ***)&this->X = &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->R).field_0x8 = 0;
  *(undefined8 *)&(this->R).field_0x10 = 0;
  *(undefined ***)&this->R = &___7__TArrayCollectionArray_V__TRotation_N_02_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->Geometry).field_0x8 = 0;
  *(undefined8 *)&(this->Geometry).field_0x10 = 0;
  *(undefined8 *)&(this->GeometryType).field_0x8 = 0;
  *(undefined8 *)&(this->GeometryType).field_0x10 = 0;
  *(undefined8 *)&(this->GeometryIsConvex).field_0x8 = 0;
  *(undefined8 *)&(this->GeometryIsConvex).field_0x10 = 0;
  *(undefined ***)&this->GeometryIsConvex = &___7__TArrayCollectionArray__N_Chaos__6B_;
  *(undefined8 *)&(this->GeometryHasBoundingBox).field_0x8 = 0;
  *(undefined8 *)&(this->GeometryHasBoundingBox).field_0x10 = 0;
  *(undefined ***)&this->GeometryHasBoundingBox = &___7__TArrayCollectionArray__N_Chaos__6B_;
  *(undefined8 *)&(this->GeometryBoxMin).field_0x8 = 0;
  *(undefined8 *)&(this->GeometryBoxMin).field_0x10 = 0;
  *(undefined ***)&this->GeometryBoxMin =
       &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->GeometryBoxMax).field_0x8 = 0;
  *(undefined8 *)&(this->GeometryBoxMax).field_0x10 = 0;
  *(undefined ***)&this->GeometryBoxMax =
       &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->GeometrySphereCenter).field_0x8 = 0;
  *(undefined8 *)&(this->GeometrySphereCenter).field_0x10 = 0;
  *(undefined ***)&this->GeometrySphereCenter =
       &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->GeometrySphereRadius).field_0x8 = 0;
  *(undefined8 *)&(this->GeometrySphereRadius).field_0x10 = 0;
  *(undefined ***)&this->GeometrySphereRadius = &___7__TArrayCollectionArray_N_Chaos__6B_;
  *(undefined8 *)&(this->GeometryLevelSetGrid).field_0x8 = 0;
  *(undefined8 *)&(this->GeometryLevelSetGrid).field_0x10 = 0;
  *(undefined8 *)&(this->V).field_0x8 = 0;
  *(undefined8 *)&(this->V).field_0x10 = 0;
  *(undefined ***)&this->V = &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->W).field_0x8 = 0;
  *(undefined8 *)&(this->W).field_0x10 = 0;
  *(undefined ***)&this->W = &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->F).field_0x8 = 0;
  *(undefined8 *)&(this->F).field_0x10 = 0;
  *(undefined ***)&this->F = &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->Torque).field_0x8 = 0;
  *(undefined8 *)&(this->Torque).field_0x10 = 0;
  *(undefined ***)&this->Torque = &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->I).field_0x8 = 0;
  *(undefined8 *)&(this->I).field_0x10 = 0;
  *(undefined8 *)&(this->InvI).field_0x8 = 0;
  *(undefined8 *)&(this->InvI).field_0x10 = 0;
  *(undefined8 *)&(this->M).field_0x8 = 0;
  *(undefined8 *)&(this->M).field_0x10 = 0;
  *(undefined ***)&this->M = &___7__TArrayCollectionArray_N_Chaos__6B_;
  *(undefined8 *)&(this->InvM).field_0x8 = 0;
  *(undefined8 *)&(this->InvM).field_0x10 = 0;
  *(undefined ***)&this->InvM = &___7__TArrayCollectionArray_N_Chaos__6B_;
  *(undefined8 *)&(this->CollisionParticlesSize).field_0x8 = 0;
  *(undefined8 *)&(this->CollisionParticlesSize).field_0x10 = 0;
  *(undefined8 *)&(this->Disabled).field_0x8 = 0;
  *(undefined8 *)&(this->Disabled).field_0x10 = 0;
  *(undefined ***)&this->Disabled = &___7__TArrayCollectionArray__N_Chaos__6B_;
  *(undefined8 *)&(this->Sleeping).field_0x8 = 0;
  *(undefined8 *)&(this->Sleeping).field_0x10 = 0;
  *(undefined ***)&this->Sleeping = &___7__TArrayCollectionArray__N_Chaos__6B_;
  *(undefined8 *)&(this->Island).field_0x8 = 0;
  *(undefined8 *)&(this->Island).field_0x10 = 0;
  *(undefined8 *)&(this->P).field_0x8 = 0;
  *(undefined ***)&this->ConnectivityEdges =
       &
       ___7__TArrayCollectionArray_V__TArray_U__TConnectivityEdge_N_Chaos__V__TSizedDefaultAllocator__0CA______Chaos__6B_
  ;
  *(undefined ***)&this->ChildToParentMap =
       &___7__TArrayCollectionArray_V__TRigidTransform_N_02_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->P).field_0x10 = 0;
  *(undefined ***)&this->P = &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->Q).field_0x8 = 0;
  *(undefined8 *)&(this->Q).field_0x10 = 0;
  *(undefined ***)&this->Q = &___7__TArrayCollectionArray_V__TRotation_N_02_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->PreV).field_0x8 = 0;
  *(undefined8 *)&(this->PreV).field_0x10 = 0;
  *(undefined ***)&this->PreV = &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->PreW).field_0x8 = 0;
  *(undefined8 *)&(this->PreW).field_0x10 = 0;
  *(undefined ***)&this->PreW = &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->ConnectivityEdges).field_0x8 = 0;
  *(undefined8 *)&(this->ConnectivityEdges).field_0x10 = 0;
  *(undefined8 *)&(this->ChildToParentMap).field_0x8 = 0;
  *(undefined8 *)&(this->ChildToParentMap).field_0x10 = 0;
  return this;
}

// ~FData @ 1463a4f70

void __thiscall FGeometryCollectionParticlesData::FData::~FData(FData *this)

{
  void *pvVar1;
  
  *(undefined ***)&this->ChildToParentMap =
       &___7__TArrayCollectionArray_V__TRigidTransform_N_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->ChildToParentMap).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->ConnectivityEdges =
       &
       ___7__TArrayCollectionArray_V__TArray_U__TConnectivityEdge_N_Chaos__V__TSizedDefaultAllocator__0CA______Chaos__6B_
  ;
  DestructItems<TArray<Chaos::TConnectivityEdge<double>,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<Chaos::TConnectivityEdge<double>,TSizedDefaultAllocator<32>_> **)
              &(this->ConnectivityEdges).field_0x8,*(int *)&(this->ConnectivityEdges).field_0x10);
  pvVar1 = *(void **)&(this->ConnectivityEdges).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->PreW = &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->PreW).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->PreV = &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->PreV).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->Q = &___7__TArrayCollectionArray_V__TRotation_N_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->Q).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->P = &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->P).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->Island = &___7__TArrayCollectionArray_H_Chaos__6B_;
  pvVar1 = *(void **)&(this->Island).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->Sleeping = &___7__TArrayCollectionArray__N_Chaos__6B_;
  pvVar1 = *(void **)&(this->Sleeping).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->Disabled = &___7__TArrayCollectionArray__N_Chaos__6B_;
  pvVar1 = *(void **)&(this->Disabled).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->CollisionParticlesSize = &___7__TArrayCollectionArray_H_Chaos__6B_;
  pvVar1 = *(void **)&(this->CollisionParticlesSize).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->InvM = &___7__TArrayCollectionArray_N_Chaos__6B_;
  pvVar1 = *(void **)&(this->InvM).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->M = &___7__TArrayCollectionArray_N_Chaos__6B_;
  pvVar1 = *(void **)&(this->M).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->InvI = &___7__TArrayCollectionArray_V__PMatrix_N_02_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->InvI).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->I = &___7__TArrayCollectionArray_V__PMatrix_N_02_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->I).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->Torque = &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->Torque).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->F = &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->F).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->W = &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->W).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->V = &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->V).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->GeometryLevelSetGrid =
       &___7__TArrayCollectionArray_V__TUniformGrid_N_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->GeometryLevelSetGrid).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->GeometrySphereRadius = &___7__TArrayCollectionArray_N_Chaos__6B_;
  pvVar1 = *(void **)&(this->GeometrySphereRadius).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->GeometrySphereCenter =
       &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->GeometrySphereCenter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->GeometryBoxMax =
       &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->GeometryBoxMax).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->GeometryBoxMin =
       &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->GeometryBoxMin).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->GeometryHasBoundingBox = &___7__TArrayCollectionArray__N_Chaos__6B_;
  pvVar1 = *(void **)&(this->GeometryHasBoundingBox).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->GeometryIsConvex = &___7__TArrayCollectionArray__N_Chaos__6B_;
  pvVar1 = *(void **)&(this->GeometryIsConvex).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->GeometryType = &___7__TArrayCollectionArray_E_Chaos__6B_;
  pvVar1 = *(void **)&(this->GeometryType).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->Geometry =
       &___7__TArrayCollectionArray_PEBVFImplicitObject_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->Geometry).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->R = &___7__TArrayCollectionArray_V__TRotation_N_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->R).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->X = &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->X).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  return;
}

// Copy @ 1463ae9e0

void __thiscall
FGeometryCollectionParticlesData::FData::Copy
          (FData *this,EGeometryCollectionParticlesData param_1,FPBDRigidsSolver *param_2,
          TManagedArray<FGuid> *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_2 == (FPBDRigidsSolver *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Solver",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionParticlesData.cpp"
                       ,0x85,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Reset @ 1463c3a10

void __thiscall
FGeometryCollectionParticlesData::FData::Reset(FData *this,EGeometryCollectionParticlesData param_1)

{
  switch(param_1) {
  case X:
                    /* WARNING: Could not recover jumptable at 0x0001463c3a3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)&this->X + 8))(&this->X,0);
    return;
  case R:
                    /* WARNING: Could not recover jumptable at 0x0001463c3a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)&this->R + 8))(&this->R,0);
    return;
  case Geometry:
                    /* WARNING: Could not recover jumptable at 0x0001463c3a56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)&this->Geometry + 8))(&this->Geometry,0);
    return;
  case GeometryType:
                    /* WARNING: Could not recover jumptable at 0x0001463c3a64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)&this->GeometryType + 8))(&this->GeometryType,0);
    return;
  case GeometryIsConvex:
                    /* WARNING: Could not recover jumptable at 0x0001463c3a72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)&this->GeometryIsConvex + 8))(&this->GeometryIsConvex,0);
    return;
  case GeometryHasBoundingBox:
                    /* WARNING: Could not recover jumptable at 0x0001463c3a82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)&this->GeometryHasBoundingBox + 8))(&this->GeometryHasBoundingBox,0);
    return;
  case GeometryBoxMin:
                    /* WARNING: Could not recover jumptable at 0x0001463c3a92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)&this->GeometryBoxMin + 8))(&this->GeometryBoxMin,0);
    return;
  case GeometryBoxMax:
                    /* WARNING: Could not recover jumptable at 0x0001463c3aa2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)&this->GeometryBoxMax + 8))(&this->GeometryBoxMax,0);
    return;
  case GeometrySphereCenter:
                    /* WARNING: Could not recover jumptable at 0x0001463c3ab2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)&this->GeometrySphereCenter + 8))(&this->GeometrySphereCenter,0);
    return;
  case GeometrySphereRadius:
                    /* WARNING: Could not recover jumptable at 0x0001463c3ac2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)&this->GeometrySphereRadius + 8))(&this->GeometrySphereRadius,0);
    return;
  case GeometryLevelSetGrid:
                    /* WARNING: Could not recover jumptable at 0x0001463c3ad2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)&this->GeometryLevelSetGrid + 8))(&this->GeometryLevelSetGrid,0);
    return;
  case V:
                    /* WARNING: Could not recover jumptable at 0x0001463c3ae2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)&this->V + 8))(&this->V,0);
    return;
  case W:
                    /* WARNING: Could not recover jumptable at 0x0001463c3af2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)&this->W + 8))(&this->W,0);
    return;
  case F:
                    /* WARNING: Could not recover jumptable at 0x0001463c3b02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)&this->F + 8))(&this->F,0);
    return;
  case Torque:
                    /* WARNING: Could not recover jumptable at 0x0001463c3b12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)&this->Torque + 8))(&this->Torque,0);
    return;
  case I:
                    /* WARNING: Could not recover jumptable at 0x0001463c3b22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)&this->I + 8))(&this->I,0);
    return;
  case InvI:
                    /* WARNING: Could not recover jumptable at 0x0001463c3b32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)&this->InvI + 8))(&this->InvI,0);
    return;
  case M:
                    /* WARNING: Could not recover jumptable at 0x0001463c3b42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)&this->M + 8))(&this->M,0);
    return;
  case InvM:
                    /* WARNING: Could not recover jumptable at 0x0001463c3b52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)&this->InvM + 8))(&this->InvM,0);
    return;
  case CollisionParticlesSize:
                    /* WARNING: Could not recover jumptable at 0x0001463c3b62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)&this->CollisionParticlesSize + 8))(&this->CollisionParticlesSize,0);
    return;
  case Disabled:
                    /* WARNING: Could not recover jumptable at 0x0001463c3b72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)&this->Disabled + 8))(&this->Disabled,0);
    return;
  case Sleeping:
                    /* WARNING: Could not recover jumptable at 0x0001463c3b82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)&this->Sleeping + 8))(&this->Sleeping,0);
    return;
  case Island:
                    /* WARNING: Could not recover jumptable at 0x0001463c3b92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)&this->Island + 8))(&this->Island,0);
    return;
  case P:
                    /* WARNING: Could not recover jumptable at 0x0001463c3ba2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)&this->P + 8))(&this->P,0);
    return;
  case Q:
                    /* WARNING: Could not recover jumptable at 0x0001463c3bb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)&this->Q + 8))(&this->Q,0);
    return;
  case PreV:
                    /* WARNING: Could not recover jumptable at 0x0001463c3bc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)&this->PreV + 8))(&this->PreV,0);
    return;
  case PreW:
                    /* WARNING: Could not recover jumptable at 0x0001463c3bd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)&this->PreW + 8))(&this->PreW,0);
    return;
  case ConnectivityEdges:
                    /* WARNING: Could not recover jumptable at 0x0001463c3be2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)&this->ConnectivityEdges + 8))(&this->ConnectivityEdges,0);
    return;
  case ChildToParentMap:
                    /* WARNING: Could not recover jumptable at 0x0001463c3bf2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)&this->ChildToParentMap + 8))(&this->ChildToParentMap,0);
    return;
  default:
    return;
  }
}

// SetAllDataSyncFlag @ 1463c7080

void __thiscall FGeometryCollectionParticlesData::FData::SetAllDataSyncFlag(FData *this)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 1;
  do {
    if (((int)uVar4 < 0) || (0x1c < uVar4)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StaticBitArray.h"
                         ,0xaf,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar4 = uVar4 + 1;
    uVar3 = uVar5 >> 6;
    uVar5 = uVar5 + 1;
    (&this->RequiredDataFlags)[uVar3].Words[0] = (&this->RequiredDataFlags)[uVar3].Words[0] | uVar6;
    uVar6 = uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0);
  } while (uVar4 < 0x1d);
  return;
}

// ToString @ 1463cb130

FString * __thiscall
FGeometryCollectionParticlesData::FData::ToString
          (FData *this,FString *__return_storage_ptr__,int param_1,wchar_t *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  lVar7 = (longlong)param_1;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  uVar6 = (uint)~param_1 >> 0x1f;
  if (((this->SyncedDataFlags).Words[0] & 1) != 0) {
    uVar3 = 0;
    if (param_1 < *(int *)&(this->X).field_0x10) {
      uVar3 = uVar6;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
    ::FString::PrintfImpl(&local_2f8,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_308,L"X: %s");
    iVar5 = local_308.Data.ArrayNum + -1;
    if (local_308.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_308.Data.AllocatorInstance.Data,iVar5);
    if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_308.Data.AllocatorInstance.Data);
    }
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
  }
  if (((this->SyncedDataFlags).Words[0] & 2) != 0) {
    uVar3 = 0;
    if (param_1 < *(int *)&(this->R).field_0x10) {
      uVar3 = uVar6;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
    ::FString::PrintfImpl(&local_2d8,L"X=%.9f Y=%.9f Z=%.9f W=%.9f");
    ::FString::PrintfImpl(&local_2e8,L"%sR: %s");
    iVar5 = local_2e8.Data.ArrayNum + -1;
    if (local_2e8.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_2e8.Data.AllocatorInstance.Data,iVar5);
    if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
    }
    if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
    }
  }
  if (((this->SyncedDataFlags).Words[0] & 8) != 0) {
    uVar3 = 0;
    if (param_1 < *(int *)&(this->GeometryType).field_0x10) {
      uVar3 = uVar6;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
    switch(*(undefined1 *)(*(longlong *)&(this->GeometryType).field_0x8 + lVar7)) {
    case 0:
      break;
    case 1:
      break;
    case 2:
      break;
    default:
      break;
    case 4:
      break;
    case 5:
      break;
    case 6:
    }
    ::FString::PrintfImpl(&local_2c8,L"%sGeometryType: %s");
    iVar5 = local_2c8.Data.ArrayNum + -1;
    if (local_2c8.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_2c8.Data.AllocatorInstance.Data,iVar5);
    if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
    }
  }
  if (((this->SyncedDataFlags).Words[0] & 0x10) != 0) {
    uVar3 = 0;
    if (param_1 < *(int *)&(this->GeometryIsConvex).field_0x10) {
      uVar3 = uVar6;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
    ::FString::PrintfImpl(&local_2b8,L"%sGeometryIsConvex: %d");
    iVar5 = local_2b8.Data.ArrayNum + -1;
    if (local_2b8.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_2b8.Data.AllocatorInstance.Data,iVar5);
    if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
    }
  }
  if (((this->SyncedDataFlags).Words[0] & 0x20) != 0) {
    uVar3 = 0;
    if (param_1 < *(int *)&(this->GeometryHasBoundingBox).field_0x10) {
      uVar3 = uVar6;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
    ::FString::PrintfImpl(&local_2a8,L"%sGeometryHasBoundingBox: %d");
    iVar5 = local_2a8.Data.ArrayNum + -1;
    if (local_2a8.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_2a8.Data.AllocatorInstance.Data,iVar5);
    if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
    }
  }
  if (((this->SyncedDataFlags).Words[0] & 0x40) != 0) {
    uVar3 = 0;
    if (param_1 < *(int *)&(this->GeometryBoxMin).field_0x10) {
      uVar3 = uVar6;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
    ::FString::PrintfImpl(&local_288,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_298,L"%sGeometryBoxMin: %s");
    iVar5 = local_298.Data.ArrayNum + -1;
    if (local_298.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_298.Data.AllocatorInstance.Data,iVar5);
    if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.Data.AllocatorInstance.Data);
    }
    if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Data.AllocatorInstance.Data);
    }
  }
  if (((this->SyncedDataFlags).Words[0] & 0x80) != 0) {
    uVar3 = 0;
    if (param_1 < *(int *)&(this->GeometryBoxMax).field_0x10) {
      uVar3 = uVar6;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
    ::FString::PrintfImpl(&local_268,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_278,L"%sGeometryBoxMax: %s");
    iVar5 = local_278.Data.ArrayNum + -1;
    if (local_278.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_278.Data.AllocatorInstance.Data,iVar5);
    if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Data.AllocatorInstance.Data);
    }
    if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Data.AllocatorInstance.Data);
    }
  }
  if (((uint)(this->SyncedDataFlags).Words[0] >> 8 & 1) != 0) {
    uVar6 = 0;
    if (param_1 < *(int *)&(this->GeometrySphereCenter).field_0x10) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
    ::FString::PrintfImpl(&local_248,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_258,L"%sGeometrySphereCenter: %s");
    iVar5 = local_258.Data.ArrayNum + -1;
    if (local_258.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_258.Data.AllocatorInstance.Data,iVar5);
    if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Data.AllocatorInstance.Data);
    }
    if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.Data.AllocatorInstance.Data);
    }
  }
  if (((uint)(this->SyncedDataFlags).Words[0] >> 9 & 1) != 0) {
    uVar6 = 0;
    if (param_1 < *(int *)&(this->GeometrySphereRadius).field_0x10) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
    ::FString::PrintfImpl(&local_238,L"%sGeometrySphereRadius: %f");
    iVar5 = local_238.Data.ArrayNum + -1;
    if (local_238.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_238.Data.AllocatorInstance.Data,iVar5);
    if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.Data.AllocatorInstance.Data);
    }
  }
  if (((uint)(this->SyncedDataFlags).Words[0] >> 10 & 1) != 0) {
    uVar6 = 0;
    if (param_1 < *(int *)&(this->GeometryLevelSetGrid).field_0x10) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
    ::FString::PrintfImpl(&local_208,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_218,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_228,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_1e8,L"Counts X=%d Y=%d Z=%d, Dx %s, MinCorner %s, MaxCorner %s");
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_1f8,L"%sGeometryLevelSetGrid: %s");
    iVar5 = local_1f8.Data.ArrayNum + -1;
    if (local_1f8.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_1f8.Data.AllocatorInstance.Data,iVar5);
    if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
    }
    if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
    }
  }
  if (((uint)(this->SyncedDataFlags).Words[0] >> 0xb & 1) != 0) {
    uVar6 = 0;
    if (param_1 < *(int *)&(this->V).field_0x10) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
    ::FString::PrintfImpl(&local_1c8,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_1d8,L"%sV: %s");
    iVar5 = local_1d8.Data.ArrayNum + -1;
    if (local_1d8.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_1d8.Data.AllocatorInstance.Data,iVar5);
    if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
  }
  if (((uint)(this->SyncedDataFlags).Words[0] >> 0xc & 1) != 0) {
    uVar6 = 0;
    if (param_1 < *(int *)&(this->W).field_0x10) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
    ::FString::PrintfImpl(&local_1a8,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_1b8,L"%sW: %s");
    iVar5 = local_1b8.Data.ArrayNum + -1;
    if (local_1b8.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_1b8.Data.AllocatorInstance.Data,iVar5);
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
  }
  if (((uint)(this->SyncedDataFlags).Words[0] >> 0xd & 1) != 0) {
    uVar6 = 0;
    if (param_1 < *(int *)&(this->F).field_0x10) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
    ::FString::PrintfImpl(&local_188,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_198,L"%sF: %s");
    iVar5 = local_198.Data.ArrayNum + -1;
    if (local_198.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_198.Data.AllocatorInstance.Data,iVar5);
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
  }
  if (((uint)(this->SyncedDataFlags).Words[0] >> 0xe & 1) != 0) {
    uVar6 = 0;
    if (param_1 < *(int *)&(this->Torque).field_0x10) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
    ::FString::PrintfImpl(&local_168,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_178,L"%sTorque: %s");
    iVar5 = local_178.Data.ArrayNum + -1;
    if (local_178.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_178.Data.AllocatorInstance.Data,iVar5);
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
  }
  if (((uint)(this->SyncedDataFlags).Words[0] >> 0xf & 1) != 0) {
    uVar6 = 0;
    if (param_1 < *(int *)&(this->I).field_0x10) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
    UE::Math::TMatrix<double>::ToString
              ((TMatrix<double> *)(lVar7 * 0x80 + *(longlong *)&(this->I).field_0x8),&local_58);
    ::FString::PrintfImpl(&local_158,L"%sI: %s");
    iVar5 = local_158.Data.ArrayNum + -1;
    if (local_158.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_158.Data.AllocatorInstance.Data,iVar5);
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (((uint)(this->SyncedDataFlags).Words[0] >> 0x10 & 1) != 0) {
    uVar6 = 0;
    if (param_1 < *(int *)&(this->InvI).field_0x10) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
    UE::Math::TMatrix<double>::ToString
              ((TMatrix<double> *)(lVar7 * 0x80 + *(longlong *)&(this->InvI).field_0x8),&local_48);
    ::FString::PrintfImpl(&local_148,L"%sInvI: %s");
    iVar5 = local_148.Data.ArrayNum + -1;
    if (local_148.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_148.Data.AllocatorInstance.Data,iVar5);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (((uint)(this->SyncedDataFlags).Words[0] >> 0x11 & 1) != 0) {
    uVar6 = 0;
    if (param_1 < *(int *)&(this->M).field_0x10) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
    ::FString::PrintfImpl(&local_138,L"%sM: %f");
    iVar5 = local_138.Data.ArrayNum + -1;
    if (local_138.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_138.Data.AllocatorInstance.Data,iVar5);
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
  }
  if (((uint)(this->SyncedDataFlags).Words[0] >> 0x12 & 1) != 0) {
    uVar6 = 0;
    if (param_1 < *(int *)&(this->InvM).field_0x10) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
    ::FString::PrintfImpl(&local_128,L"%sInvM: %f");
    iVar5 = local_128.Data.ArrayNum + -1;
    if (local_128.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_128.Data.AllocatorInstance.Data,iVar5);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  if (((uint)(this->SyncedDataFlags).Words[0] >> 0x13 & 1) != 0) {
    uVar6 = 0;
    if (param_1 < *(int *)&(this->CollisionParticlesSize).field_0x10) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
    ::FString::PrintfImpl(&local_118,L"%sCollisionParticlesSize: %d");
    iVar5 = local_118.Data.ArrayNum + -1;
    if (local_118.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_118.Data.AllocatorInstance.Data,iVar5);
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
  }
  if (((uint)(this->SyncedDataFlags).Words[0] >> 0x14 & 1) != 0) {
    uVar6 = 0;
    if (param_1 < *(int *)&(this->Disabled).field_0x10) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
    ::FString::PrintfImpl(&local_108,L"%sDisabled: %d");
    iVar5 = local_108.Data.ArrayNum + -1;
    if (local_108.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_108.Data.AllocatorInstance.Data,iVar5);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
  }
  if (((uint)(this->SyncedDataFlags).Words[0] >> 0x15 & 1) != 0) {
    uVar6 = 0;
    if (param_1 < *(int *)&(this->Sleeping).field_0x10) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
    ::FString::PrintfImpl(&local_f8,L"%sSleeping: %d");
    iVar5 = local_f8.Data.ArrayNum + -1;
    if (local_f8.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_f8.Data.AllocatorInstance.Data,iVar5);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  if (((uint)(this->SyncedDataFlags).Words[0] >> 0x16 & 1) != 0) {
    uVar6 = 0;
    if (param_1 < *(int *)&(this->Island).field_0x10) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
    ::FString::PrintfImpl(&local_e8,L"%sIsland: %d");
    iVar5 = local_e8.Data.ArrayNum + -1;
    if (local_e8.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_e8.Data.AllocatorInstance.Data,iVar5);
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
  }
  if (((uint)(this->SyncedDataFlags).Words[0] >> 0x17 & 1) != 0) {
    uVar6 = 0;
    if (param_1 < *(int *)&(this->P).field_0x10) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
    ::FString::PrintfImpl(&local_c8,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_d8,L"%sP: %s");
    iVar5 = local_d8.Data.ArrayNum + -1;
    if (local_d8.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_d8.Data.AllocatorInstance.Data,iVar5);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  if (((uint)(this->SyncedDataFlags).Words[0] >> 0x18 & 1) != 0) {
    uVar6 = 0;
    if (param_1 < *(int *)&(this->Q).field_0x10) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
    ::FString::PrintfImpl(&local_a8,L"X=%.9f Y=%.9f Z=%.9f W=%.9f");
    ::FString::PrintfImpl(&local_b8,L"%sQ: %s");
    iVar5 = local_b8.Data.ArrayNum + -1;
    if (local_b8.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_b8.Data.AllocatorInstance.Data,iVar5);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  if (((uint)(this->SyncedDataFlags).Words[0] >> 0x19 & 1) != 0) {
    uVar6 = 0;
    if (param_1 < *(int *)&(this->PreV).field_0x10) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
    ::FString::PrintfImpl(&local_88,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_98,L"%sPreV: %s");
    iVar5 = local_98.Data.ArrayNum + -1;
    if (local_98.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_98.Data.AllocatorInstance.Data,iVar5);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  if (((uint)(this->SyncedDataFlags).Words[0] >> 0x1a & 1) != 0) {
    uVar6 = 0;
    if (param_1 < *(int *)&(this->PreW).field_0x10) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
    ::FString::PrintfImpl(&local_68,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_78,L"%sPreW: %s");
    iVar5 = local_78.Data.ArrayNum + -1;
    if (local_78.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_78.Data.AllocatorInstance.Data,iVar5);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

