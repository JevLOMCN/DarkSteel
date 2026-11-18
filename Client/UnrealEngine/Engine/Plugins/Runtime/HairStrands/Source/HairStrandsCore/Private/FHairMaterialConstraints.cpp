// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 5

// StaticStruct @ 14df95220

UScriptStruct * __cdecl FHairMaterialConstraints::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FHairMaterialConstraints.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HairStrandsCore();
    Z_Registration_Info_UScriptStruct_FHairMaterialConstraints.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FHairMaterialConstraints,(UObject *)pUVar1,
                         L"HairMaterialConstraints");
  }
  return Z_Registration_Info_UScriptStruct_FHairMaterialConstraints.OuterSingleton;
}

// FHairMaterialConstraints @ 14dfad260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FHairMaterialConstraints * __thiscall
FHairMaterialConstraints::FHairMaterialConstraints(FHairMaterialConstraints *this)

{
  FHairBendConstraint *pFVar1;
  FHairStretchConstraint *pFVar2;
  FHairCollisionConstraint *pFVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [24];
  undefined1 local_b0 [16];
  undefined1 local_a0 [56];
  undefined4 local_68;
  void *local_60;
  undefined4 local_58;
  void *local_50;
  ForAnyElementType local_48;
  TObjectPtr<UCurveFloat>_u_0 local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  FHairBendConstraint::FHairBendConstraint(&this->BendConstraint);
  FHairStretchConstraint::FHairStretchConstraint(&this->StretchConstraint);
  FHairCollisionConstraint::FHairCollisionConstraint(&this->CollisionConstraint);
  pFVar1 = FHairBendConstraint::FHairBendConstraint((FHairBendConstraint *)local_c8);
  (this->BendConstraint).SolveBend = pFVar1->SolveBend;
  (this->BendConstraint).ProjectBend = pFVar1->ProjectBend;
  (this->BendConstraint).BendDamping = pFVar1->BendDamping;
  (this->BendConstraint).BendStiffness = pFVar1->BendStiffness;
  FRuntimeFloatCurve::operator=(&(this->BendConstraint).BendScale,&pFVar1->BendScale);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  local_c8._16_8_ = &___7FIndexedCurve__6B_;
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  local_68 = 0;
  if ((void *)local_a0._48_8_ != (void *)0x0) {
    FMemory::Free((void *)local_a0._48_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_b0);
  pFVar2 = FHairStretchConstraint::FHairStretchConstraint((FHairStretchConstraint *)local_c8);
  (this->StretchConstraint).SolveStretch = pFVar2->SolveStretch;
  (this->StretchConstraint).ProjectStretch = pFVar2->ProjectStretch;
  (this->StretchConstraint).StretchDamping = pFVar2->StretchDamping;
  (this->StretchConstraint).StretchStiffness = pFVar2->StretchStiffness;
  FRuntimeFloatCurve::operator=(&(this->StretchConstraint).StretchScale,&pFVar2->StretchScale);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  local_c8._16_8_ = &___7FIndexedCurve__6B_;
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  local_68 = 0;
  if ((void *)local_a0._48_8_ != (void *)0x0) {
    FMemory::Free((void *)local_a0._48_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_b0);
  pFVar3 = FHairCollisionConstraint::FHairCollisionConstraint((FHairCollisionConstraint *)local_c8);
  (this->CollisionConstraint).SolveCollision = pFVar3->SolveCollision;
  (this->CollisionConstraint).ProjectCollision = pFVar3->ProjectCollision;
  (this->CollisionConstraint).StaticFriction = pFVar3->StaticFriction;
  (this->CollisionConstraint).KineticFriction = pFVar3->KineticFriction;
  (this->CollisionConstraint).StrandsViscosity = pFVar3->StrandsViscosity;
  *(undefined8 *)&(this->CollisionConstraint).GridDimension.field0_0x0 =
       *(undefined8 *)&(pFVar3->GridDimension).field0_0x0;
  (this->CollisionConstraint).GridDimension.field0_0x0._s_0.Z =
       (pFVar3->GridDimension).field0_0x0._s_0.Z;
  (this->CollisionConstraint).CollisionRadius = pFVar3->CollisionRadius;
  FRuntimeFloatCurve::operator=(&(this->CollisionConstraint).RadiusScale,&pFVar3->RadiusScale);
  if (local_38.DebugPtr != (UCurveFloat *)0x0) {
    FMemory::Free(local_38.DebugPtr);
  }
  local_b0._8_8_ = &___7FIndexedCurve__6B_;
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  local_58 = 0;
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_a0);
  return this;
}

// ~FHairMaterialConstraints @ 14dfb06f0

void __thiscall FHairMaterialConstraints::~FHairMaterialConstraints(FHairMaterialConstraints *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->CollisionConstraint).RadiusScale.EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->CollisionConstraint).RadiusScale.EditorCurveData._padding_ =
       (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->CollisionConstraint).RadiusScale.EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->CollisionConstraint).RadiusScale.EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->CollisionConstraint).RadiusScale.EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->CollisionConstraint).RadiusScale.EditorCurveData._padding_);
  pFVar1 = (this->StretchConstraint).StretchScale.EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->StretchConstraint).StretchScale.EditorCurveData._padding_ =
       (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->StretchConstraint).StretchScale.EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->StretchConstraint).StretchScale.EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->StretchConstraint).StretchScale.EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->StretchConstraint).StretchScale.EditorCurveData._padding_);
  pFVar1 = (this->BendConstraint).BendScale.EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->BendConstraint).BendScale.EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->BendConstraint).BendScale.EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->BendConstraint).BendScale.EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->BendConstraint).BendScale.EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->BendConstraint).BendScale.EditorCurveData._padding_);
  return;
}

// operator= @ 14dfb18f0

FHairMaterialConstraints * __thiscall
FHairMaterialConstraints::operator=
          (FHairMaterialConstraints *this,FHairMaterialConstraints *param_1)

{
  (this->BendConstraint).SolveBend = (param_1->BendConstraint).SolveBend;
  (this->BendConstraint).ProjectBend = (param_1->BendConstraint).ProjectBend;
  (this->BendConstraint).BendDamping = (param_1->BendConstraint).BendDamping;
  (this->BendConstraint).BendStiffness = (param_1->BendConstraint).BendStiffness;
  FRuntimeFloatCurve::operator=
            (&(this->BendConstraint).BendScale,&(param_1->BendConstraint).BendScale);
  (this->StretchConstraint).SolveStretch = (param_1->StretchConstraint).SolveStretch;
  (this->StretchConstraint).ProjectStretch = (param_1->StretchConstraint).ProjectStretch;
  (this->StretchConstraint).StretchDamping = (param_1->StretchConstraint).StretchDamping;
  (this->StretchConstraint).StretchStiffness = (param_1->StretchConstraint).StretchStiffness;
  FRuntimeFloatCurve::operator=
            (&(this->StretchConstraint).StretchScale,&(param_1->StretchConstraint).StretchScale);
  (this->CollisionConstraint).SolveCollision = (param_1->CollisionConstraint).SolveCollision;
  (this->CollisionConstraint).ProjectCollision = (param_1->CollisionConstraint).ProjectCollision;
  (this->CollisionConstraint).StaticFriction = (param_1->CollisionConstraint).StaticFriction;
  (this->CollisionConstraint).KineticFriction = (param_1->CollisionConstraint).KineticFriction;
  (this->CollisionConstraint).StrandsViscosity = (param_1->CollisionConstraint).StrandsViscosity;
  *(undefined8 *)&(this->CollisionConstraint).GridDimension.field0_0x0 =
       *(undefined8 *)&(param_1->CollisionConstraint).GridDimension.field0_0x0;
  (this->CollisionConstraint).GridDimension.field0_0x0._s_0.Z =
       (param_1->CollisionConstraint).GridDimension.field0_0x0._s_0.Z;
  (this->CollisionConstraint).CollisionRadius = (param_1->CollisionConstraint).CollisionRadius;
  FRuntimeFloatCurve::operator=
            (&(this->CollisionConstraint).RadiusScale,&(param_1->CollisionConstraint).RadiusScale);
  return this;
}

// operator== @ 14dfb22a0

bool __thiscall
FHairMaterialConstraints::operator==
          (FHairMaterialConstraints *this,FHairMaterialConstraints *param_1)

{
  if ((((((((this->BendConstraint).SolveBend == (param_1->BendConstraint).SolveBend) &&
          ((this->BendConstraint).ProjectBend == (param_1->BendConstraint).ProjectBend)) &&
         ((param_1->BendConstraint).BendDamping == (this->BendConstraint).BendDamping)) &&
        (((param_1->BendConstraint).BendStiffness == (this->BendConstraint).BendStiffness &&
         ((this->StretchConstraint).SolveStretch == (param_1->StretchConstraint).SolveStretch)))) &&
       (((this->StretchConstraint).ProjectStretch == (param_1->StretchConstraint).ProjectStretch &&
        (((param_1->StretchConstraint).StretchDamping == (this->StretchConstraint).StretchDamping &&
         ((param_1->StretchConstraint).StretchStiffness ==
          (this->StretchConstraint).StretchStiffness)))))) &&
      ((this->CollisionConstraint).SolveCollision == (param_1->CollisionConstraint).SolveCollision))
     && (((((this->CollisionConstraint).ProjectCollision ==
            (param_1->CollisionConstraint).ProjectCollision &&
           ((param_1->CollisionConstraint).KineticFriction ==
            (this->CollisionConstraint).KineticFriction)) &&
          ((param_1->CollisionConstraint).StaticFriction ==
           (this->CollisionConstraint).StaticFriction)) &&
         ((((param_1->CollisionConstraint).StrandsViscosity ==
            (this->CollisionConstraint).StrandsViscosity &&
           ((param_1->CollisionConstraint).CollisionRadius ==
            (this->CollisionConstraint).CollisionRadius)) &&
          (((this->CollisionConstraint).GridDimension.field0_0x0._s_0.X ==
            (param_1->CollisionConstraint).GridDimension.field0_0x0._s_0.X &&
           (((this->CollisionConstraint).GridDimension.field0_0x0._s_0.Y ==
             (param_1->CollisionConstraint).GridDimension.field0_0x0._s_0.Y &&
            ((this->CollisionConstraint).GridDimension.field0_0x0._s_0.Z ==
             (param_1->CollisionConstraint).GridDimension.field0_0x0._s_0.Z)))))))))) {
    return true;
  }
  return false;
}

