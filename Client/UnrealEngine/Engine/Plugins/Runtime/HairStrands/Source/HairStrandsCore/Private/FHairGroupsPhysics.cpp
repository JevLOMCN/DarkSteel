// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 6

// StaticStruct @ 14df952b0

UScriptStruct * __cdecl FHairGroupsPhysics::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FHairGroupsPhysics.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HairStrandsCore();
    Z_Registration_Info_UScriptStruct_FHairGroupsPhysics.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FHairGroupsPhysics,(UObject *)pUVar1,
                         L"HairGroupsPhysics");
  }
  return Z_Registration_Info_UScriptStruct_FHairGroupsPhysics.OuterSingleton;
}

// FHairGroupsPhysics @ 14dfacbe0

FHairGroupsPhysics * __thiscall
FHairGroupsPhysics::FHairGroupsPhysics(FHairGroupsPhysics *this,FHairGroupsPhysics *param_1)

{
  UCurveFloat *pUVar1;
  double dVar2;
  float fVar3;
  undefined4 uVar4;
  
  (this->SolverSettings).bEnableDeformation = (param_1->SolverSettings).bEnableDeformation;
  (this->SolverSettings).EnableSimulation = (param_1->SolverSettings).EnableSimulation;
  (this->SolverSettings).NiagaraSolver = (param_1->SolverSettings).NiagaraSolver;
  TPersistentObjectPtr<FSoftObjectPath>::TPersistentObjectPtr<FSoftObjectPath>
            ((TPersistentObjectPtr<FSoftObjectPath> *)&(this->SolverSettings).CustomSystem,
             (TPersistentObjectPtr<FSoftObjectPath> *)&(param_1->SolverSettings).CustomSystem);
  (this->SolverSettings).GravityPreloading = (param_1->SolverSettings).GravityPreloading;
  (this->SolverSettings).SubSteps = (param_1->SolverSettings).SubSteps;
  (this->SolverSettings).IterationCount = (param_1->SolverSettings).IterationCount;
  (this->SolverSettings).bForceVisible = (param_1->SolverSettings).bForceVisible;
  dVar2 = (param_1->ExternalForces).GravityVector.field0_0x0._s_0.Y;
  (this->ExternalForces).GravityVector.field0_0x0._s_0.X =
       (param_1->ExternalForces).GravityVector.field0_0x0._s_0.X;
  (this->ExternalForces).GravityVector.field0_0x0._s_0.Y = dVar2;
  fVar3 = (param_1->ExternalForces).AirDrag;
  uVar4 = *(undefined4 *)&(param_1->ExternalForces).field_0x1c;
  (this->ExternalForces).GravityVector.field0_0x0._s_0.Z =
       (param_1->ExternalForces).GravityVector.field0_0x0._s_0.Z;
  (this->ExternalForces).AirDrag = fVar3;
  *(undefined4 *)&(this->ExternalForces).field_0x1c = uVar4;
  dVar2 = (param_1->ExternalForces).AirVelocity.field0_0x0._s_0.Y;
  (this->ExternalForces).AirVelocity.field0_0x0._s_0.X =
       (param_1->ExternalForces).AirVelocity.field0_0x0._s_0.X;
  (this->ExternalForces).AirVelocity.field0_0x0._s_0.Y = dVar2;
  (this->ExternalForces).AirVelocity.field0_0x0._s_0.Z =
       (param_1->ExternalForces).AirVelocity.field0_0x0._s_0.Z;
  (this->MaterialConstraints).BendConstraint.SolveBend =
       (param_1->MaterialConstraints).BendConstraint.SolveBend;
  (this->MaterialConstraints).BendConstraint.ProjectBend =
       (param_1->MaterialConstraints).BendConstraint.ProjectBend;
  (this->MaterialConstraints).BendConstraint.BendDamping =
       (param_1->MaterialConstraints).BendConstraint.BendDamping;
  (this->MaterialConstraints).BendConstraint.BendStiffness =
       (param_1->MaterialConstraints).BendConstraint.BendStiffness;
  FRichCurve::FRichCurve
            (&(this->MaterialConstraints).BendConstraint.BendScale.EditorCurveData,
             &(param_1->MaterialConstraints).BendConstraint.BendScale.EditorCurveData);
  pUVar1 = (param_1->MaterialConstraints).BendConstraint.BendScale.ExternalCurve.field0_0x0.DebugPtr
  ;
  (this->MaterialConstraints).BendConstraint.BendScale.ExternalCurve.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->MaterialConstraints).StretchConstraint.SolveStretch =
       (param_1->MaterialConstraints).StretchConstraint.SolveStretch;
  (this->MaterialConstraints).StretchConstraint.ProjectStretch =
       (param_1->MaterialConstraints).StretchConstraint.ProjectStretch;
  (this->MaterialConstraints).StretchConstraint.StretchDamping =
       (param_1->MaterialConstraints).StretchConstraint.StretchDamping;
  (this->MaterialConstraints).StretchConstraint.StretchStiffness =
       (param_1->MaterialConstraints).StretchConstraint.StretchStiffness;
  FRichCurve::FRichCurve
            (&(this->MaterialConstraints).StretchConstraint.StretchScale.EditorCurveData,
             &(param_1->MaterialConstraints).StretchConstraint.StretchScale.EditorCurveData);
  pUVar1 = (param_1->MaterialConstraints).StretchConstraint.StretchScale.ExternalCurve.field0_0x0.
           DebugPtr;
  (this->MaterialConstraints).StretchConstraint.StretchScale.ExternalCurve.field0_0x0.DebugPtr =
       pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->MaterialConstraints).CollisionConstraint.SolveCollision =
       (param_1->MaterialConstraints).CollisionConstraint.SolveCollision;
  (this->MaterialConstraints).CollisionConstraint.ProjectCollision =
       (param_1->MaterialConstraints).CollisionConstraint.ProjectCollision;
  (this->MaterialConstraints).CollisionConstraint.StaticFriction =
       (param_1->MaterialConstraints).CollisionConstraint.StaticFriction;
  (this->MaterialConstraints).CollisionConstraint.KineticFriction =
       (param_1->MaterialConstraints).CollisionConstraint.KineticFriction;
  (this->MaterialConstraints).CollisionConstraint.StrandsViscosity =
       (param_1->MaterialConstraints).CollisionConstraint.StrandsViscosity;
  *(undefined8 *)&(this->MaterialConstraints).CollisionConstraint.GridDimension.field0_0x0 =
       *(undefined8 *)&(param_1->MaterialConstraints).CollisionConstraint.GridDimension.field0_0x0;
  (this->MaterialConstraints).CollisionConstraint.GridDimension.field0_0x0._s_0.Z =
       (param_1->MaterialConstraints).CollisionConstraint.GridDimension.field0_0x0._s_0.Z;
  (this->MaterialConstraints).CollisionConstraint.CollisionRadius =
       (param_1->MaterialConstraints).CollisionConstraint.CollisionRadius;
  FRichCurve::FRichCurve
            (&(this->MaterialConstraints).CollisionConstraint.RadiusScale.EditorCurveData,
             &(param_1->MaterialConstraints).CollisionConstraint.RadiusScale.EditorCurveData);
  pUVar1 = (param_1->MaterialConstraints).CollisionConstraint.RadiusScale.ExternalCurve.field0_0x0.
           DebugPtr;
  (this->MaterialConstraints).CollisionConstraint.RadiusScale.ExternalCurve.field0_0x0.DebugPtr =
       pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->StrandsParameters).StrandsSize = (param_1->StrandsParameters).StrandsSize;
  (this->StrandsParameters).StrandsDensity = (param_1->StrandsParameters).StrandsDensity;
  (this->StrandsParameters).StrandsSmoothing = (param_1->StrandsParameters).StrandsSmoothing;
  (this->StrandsParameters).StrandsThickness = (param_1->StrandsParameters).StrandsThickness;
  FRichCurve::FRichCurve
            (&(this->StrandsParameters).ThicknessScale.EditorCurveData,
             &(param_1->StrandsParameters).ThicknessScale.EditorCurveData);
  pUVar1 = (param_1->StrandsParameters).ThicknessScale.ExternalCurve.field0_0x0.DebugPtr;
  (this->StrandsParameters).ThicknessScale.ExternalCurve.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return this;
}

// FHairGroupsPhysics @ 14dface50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FHairGroupsPhysics * __thiscall FHairGroupsPhysics::FHairGroupsPhysics(FHairGroupsPhysics *this)

{
  undefined1 *this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  FHairMaterialConstraints *pFVar3;
  FHairStrandsParameters *pFVar4;
  undefined1 auStack_2b8 [32];
  undefined2 local_298;
  undefined1 local_296;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  FUtf8String local_278;
  float local_268;
  int local_264;
  int local_260;
  bool local_25c;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined1 local_218 [88];
  void *local_1c0;
  undefined4 local_1b8;
  void *local_1b0;
  ForAnyElementType local_198;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  this_00 = &(this->SolverSettings).CustomSystem.SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->SolverSettings).CustomSystem.SoftObjectPtr = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->SolverSettings).CustomSystem.SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->SolverSettings).CustomSystem.SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->SolverSettings).CustomSystem.SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->SolverSettings).bEnableDeformation = false;
  (this->SolverSettings).EnableSimulation = false;
  (this->SolverSettings).NiagaraSolver = AngularSprings;
  (this->SolverSettings).SubSteps = 5;
  (this->SolverSettings).IterationCount = 5;
  (this->SolverSettings).GravityPreloading = 0.0;
  (this->SolverSettings).bForceVisible = false;
  (this->ExternalForces).GravityVector.field0_0x0._s_0.X = 0.0;
  (this->ExternalForces).GravityVector.field0_0x0._s_0.Y = 0.0;
  (this->ExternalForces).GravityVector.field0_0x0._s_0.Z = -981.0;
  (this->ExternalForces).AirDrag = 0.1;
  (this->ExternalForces).AirVelocity.field0_0x0._s_0.X = 0.0;
  (this->ExternalForces).AirVelocity.field0_0x0._s_0.Y = 0.0;
  (this->ExternalForces).AirVelocity.field0_0x0._s_0.Z = 0.0;
  FHairMaterialConstraints::FHairMaterialConstraints(&this->MaterialConstraints);
  FHairStrandsParameters::FHairStrandsParameters(&this->StrandsParameters);
  local_278.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_278.Data.ArrayNum = 0;
  local_278.Data.ArrayMax = 0;
  local_290 = 0;
  uStack_280 = 0;
  local_288 = 0;
  FUtf8String::Reset(&local_278,0);
  (this->SolverSettings).bEnableDeformation = false;
  (this->SolverSettings).EnableSimulation = false;
  (this->SolverSettings).NiagaraSolver = AngularSprings;
  *(undefined8 *)&(this->SolverSettings).CustomSystem.SoftObjectPtr = local_290;
  local_268 = 0.0;
  local_298 = 0;
  local_296 = 4;
  local_264 = 5;
  local_260 = 5;
  local_25c = false;
  *(undefined8 *)&(this->SolverSettings).CustomSystem.SoftObjectPtr.field_0x8 = local_288;
  *(undefined8 *)&(this->SolverSettings).CustomSystem.SoftObjectPtr.field_0x10 = uStack_280;
  if ((FUtf8String *)this_00 != &local_278) {
    if (*(void **)this_00 != (void *)0x0) {
      FMemory::Free(*(void **)this_00);
    }
    *(FScriptContainerElement **)this_00 = local_278.Data.AllocatorInstance.Data;
    *(int *)&(this->SolverSettings).CustomSystem.SoftObjectPtr.field_0x20 = local_278.Data.ArrayNum;
    *(int *)&(this->SolverSettings).CustomSystem.SoftObjectPtr.field_0x24 = local_278.Data.ArrayMax;
    local_278.Data.ArrayNum = 0;
    local_278.Data.ArrayMax = 0;
    local_278.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  (this->SolverSettings).GravityPreloading = local_268;
  (this->SolverSettings).SubSteps = local_264;
  (this->SolverSettings).IterationCount = local_260;
  (this->SolverSettings).bForceVisible = local_25c;
  if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Data.AllocatorInstance.Data);
  }
  uVar2 = __real_c08ea80000000000._4_4_;
  uVar1 = (undefined4)__real_c08ea80000000000;
  uStack_240 = 0x3dcccccd;
  (this->ExternalForces).GravityVector.field0_0x0._s_0.X = 0.0;
  (this->ExternalForces).GravityVector.field0_0x0._s_0.Y = 0.0;
  *(undefined4 *)((longlong)&(this->ExternalForces).GravityVector.field0_0x0 + 0x10) = uVar1;
  *(undefined4 *)((longlong)&(this->ExternalForces).GravityVector.field0_0x0 + 0x14) = uVar2;
  (this->ExternalForces).AirDrag = 0.1;
  *(undefined4 *)&(this->ExternalForces).field_0x1c = uStack_23c;
  (this->ExternalForces).AirVelocity.field0_0x0._s_0.X = 0.0;
  (this->ExternalForces).AirVelocity.field0_0x0._s_0.Y = 0.0;
  (this->ExternalForces).AirVelocity.field0_0x0._s_0.Z = 0.0;
  pFVar3 = FHairMaterialConstraints::FHairMaterialConstraints((FHairMaterialConstraints *)local_218)
  ;
  (this->MaterialConstraints).BendConstraint.SolveBend = (pFVar3->BendConstraint).SolveBend;
  (this->MaterialConstraints).BendConstraint.ProjectBend = (pFVar3->BendConstraint).ProjectBend;
  (this->MaterialConstraints).BendConstraint.BendDamping = (pFVar3->BendConstraint).BendDamping;
  (this->MaterialConstraints).BendConstraint.BendStiffness = (pFVar3->BendConstraint).BendStiffness;
  FRuntimeFloatCurve::operator=
            (&(this->MaterialConstraints).BendConstraint.BendScale,
             &(pFVar3->BendConstraint).BendScale);
  (this->MaterialConstraints).StretchConstraint.SolveStretch =
       (pFVar3->StretchConstraint).SolveStretch;
  (this->MaterialConstraints).StretchConstraint.ProjectStretch =
       (pFVar3->StretchConstraint).ProjectStretch;
  (this->MaterialConstraints).StretchConstraint.StretchDamping =
       (pFVar3->StretchConstraint).StretchDamping;
  (this->MaterialConstraints).StretchConstraint.StretchStiffness =
       (pFVar3->StretchConstraint).StretchStiffness;
  FRuntimeFloatCurve::operator=
            (&(this->MaterialConstraints).StretchConstraint.StretchScale,
             &(pFVar3->StretchConstraint).StretchScale);
  (this->MaterialConstraints).CollisionConstraint.SolveCollision =
       (pFVar3->CollisionConstraint).SolveCollision;
  (this->MaterialConstraints).CollisionConstraint.ProjectCollision =
       (pFVar3->CollisionConstraint).ProjectCollision;
  (this->MaterialConstraints).CollisionConstraint.StaticFriction =
       (pFVar3->CollisionConstraint).StaticFriction;
  (this->MaterialConstraints).CollisionConstraint.KineticFriction =
       (pFVar3->CollisionConstraint).KineticFriction;
  (this->MaterialConstraints).CollisionConstraint.StrandsViscosity =
       (pFVar3->CollisionConstraint).StrandsViscosity;
  *(undefined8 *)&(this->MaterialConstraints).CollisionConstraint.GridDimension.field0_0x0 =
       *(undefined8 *)&(pFVar3->CollisionConstraint).GridDimension.field0_0x0;
  (this->MaterialConstraints).CollisionConstraint.GridDimension.field0_0x0._s_0.Z =
       (pFVar3->CollisionConstraint).GridDimension.field0_0x0._s_0.Z;
  (this->MaterialConstraints).CollisionConstraint.CollisionRadius =
       (pFVar3->CollisionConstraint).CollisionRadius;
  FRuntimeFloatCurve::operator=
            (&(this->MaterialConstraints).CollisionConstraint.RadiusScale,
             &(pFVar3->CollisionConstraint).RadiusScale);
  FHairMaterialConstraints::~FHairMaterialConstraints((FHairMaterialConstraints *)local_218);
  pFVar4 = FHairStrandsParameters::FHairStrandsParameters((FHairStrandsParameters *)local_218);
  (this->StrandsParameters).StrandsSize = pFVar4->StrandsSize;
  (this->StrandsParameters).StrandsDensity = pFVar4->StrandsDensity;
  (this->StrandsParameters).StrandsSmoothing = pFVar4->StrandsSmoothing;
  (this->StrandsParameters).StrandsThickness = pFVar4->StrandsThickness;
  FRuntimeFloatCurve::operator=(&(this->StrandsParameters).ThicknessScale,&pFVar4->ThicknessScale);
  if (local_198.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data);
  }
  local_218._16_8_ = &___7FIndexedCurve__6B_;
  if (local_1b0 != (void *)0x0) {
    FMemory::Free(local_1b0);
  }
  local_1b8 = 0;
  if (local_1c0 != (void *)0x0) {
    FMemory::Free(local_1c0);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_218 + 0x18));
  return this;
}

// ~FHairGroupsPhysics @ 14dfb0660

void __thiscall FHairGroupsPhysics::~FHairGroupsPhysics(FHairGroupsPhysics *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->StrandsParameters).ThicknessScale.EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->StrandsParameters).ThicknessScale.EditorCurveData._padding_ =
       (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->StrandsParameters).ThicknessScale.EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->StrandsParameters).ThicknessScale.EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->StrandsParameters).ThicknessScale.EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->StrandsParameters).ThicknessScale.EditorCurveData._padding_);
  FHairMaterialConstraints::~FHairMaterialConstraints(&this->MaterialConstraints);
  pvVar2 = *(void **)&(this->SolverSettings).CustomSystem.SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  return;
}

// operator== @ 14dfb1f40

bool __thiscall FHairGroupsPhysics::operator==(FHairGroupsPhysics *this,FHairGroupsPhysics *param_1)

{
  if (((((((this->SolverSettings).EnableSimulation == (param_1->SolverSettings).EnableSimulation) &&
         ((this->SolverSettings).bEnableDeformation == (param_1->SolverSettings).bEnableDeformation)
         ) && ((this->SolverSettings).NiagaraSolver == (param_1->SolverSettings).NiagaraSolver)) &&
       ((((this->SolverSettings).SubSteps == (param_1->SolverSettings).SubSteps &&
         ((this->SolverSettings).IterationCount == (param_1->SolverSettings).IterationCount)) &&
        (((this->SolverSettings).bForceVisible == (param_1->SolverSettings).bForceVisible &&
         (((param_1->ExternalForces).GravityVector.field0_0x0._s_0.X ==
           (this->ExternalForces).GravityVector.field0_0x0._s_0.X &&
          ((param_1->ExternalForces).GravityVector.field0_0x0._s_0.Y ==
           (this->ExternalForces).GravityVector.field0_0x0._s_0.Y)))))))) &&
      ((param_1->ExternalForces).GravityVector.field0_0x0._s_0.Z ==
       (this->ExternalForces).GravityVector.field0_0x0._s_0.Z)) &&
     ((((((((param_1->ExternalForces).AirDrag == (this->ExternalForces).AirDrag &&
           ((param_1->ExternalForces).AirVelocity.field0_0x0._s_0.X ==
            (this->ExternalForces).AirVelocity.field0_0x0._s_0.X)) &&
          ((param_1->ExternalForces).AirVelocity.field0_0x0._s_0.Y ==
           (this->ExternalForces).AirVelocity.field0_0x0._s_0.Y)) &&
         (((param_1->ExternalForces).AirVelocity.field0_0x0._s_0.Z ==
           (this->ExternalForces).AirVelocity.field0_0x0._s_0.Z &&
          ((this->MaterialConstraints).BendConstraint.SolveBend ==
           (param_1->MaterialConstraints).BendConstraint.SolveBend)))) &&
        ((this->MaterialConstraints).BendConstraint.ProjectBend ==
         (param_1->MaterialConstraints).BendConstraint.ProjectBend)) &&
       (((((param_1->MaterialConstraints).BendConstraint.BendDamping ==
           (this->MaterialConstraints).BendConstraint.BendDamping &&
          ((param_1->MaterialConstraints).BendConstraint.BendStiffness ==
           (this->MaterialConstraints).BendConstraint.BendStiffness)) &&
         ((((this->MaterialConstraints).StretchConstraint.SolveStretch ==
            (param_1->MaterialConstraints).StretchConstraint.SolveStretch &&
           ((((this->MaterialConstraints).StretchConstraint.ProjectStretch ==
              (param_1->MaterialConstraints).StretchConstraint.ProjectStretch &&
             ((param_1->MaterialConstraints).StretchConstraint.StretchDamping ==
              (this->MaterialConstraints).StretchConstraint.StretchDamping)) &&
            ((param_1->MaterialConstraints).StretchConstraint.StretchStiffness ==
             (this->MaterialConstraints).StretchConstraint.StretchStiffness)))) &&
          ((((this->MaterialConstraints).CollisionConstraint.SolveCollision ==
             (param_1->MaterialConstraints).CollisionConstraint.SolveCollision &&
            ((this->MaterialConstraints).CollisionConstraint.ProjectCollision ==
             (param_1->MaterialConstraints).CollisionConstraint.ProjectCollision)) &&
           ((param_1->MaterialConstraints).CollisionConstraint.KineticFriction ==
            (this->MaterialConstraints).CollisionConstraint.KineticFriction)))))) &&
        (((param_1->MaterialConstraints).CollisionConstraint.StaticFriction ==
          (this->MaterialConstraints).CollisionConstraint.StaticFriction &&
         ((param_1->MaterialConstraints).CollisionConstraint.StrandsViscosity ==
          (this->MaterialConstraints).CollisionConstraint.StrandsViscosity)))))) &&
      ((((param_1->MaterialConstraints).CollisionConstraint.CollisionRadius ==
         (this->MaterialConstraints).CollisionConstraint.CollisionRadius &&
        ((((this->MaterialConstraints).CollisionConstraint.GridDimension.field0_0x0._s_0.X ==
           (param_1->MaterialConstraints).CollisionConstraint.GridDimension.field0_0x0._s_0.X &&
          ((this->MaterialConstraints).CollisionConstraint.GridDimension.field0_0x0._s_0.Y ==
           (param_1->MaterialConstraints).CollisionConstraint.GridDimension.field0_0x0._s_0.Y)) &&
         ((this->MaterialConstraints).CollisionConstraint.GridDimension.field0_0x0._s_0.Z ==
          (param_1->MaterialConstraints).CollisionConstraint.GridDimension.field0_0x0._s_0.Z)))) &&
       ((((this->StrandsParameters).StrandsSize == (param_1->StrandsParameters).StrandsSize &&
         ((param_1->StrandsParameters).StrandsDensity == (this->StrandsParameters).StrandsDensity))
        && (((param_1->StrandsParameters).StrandsSmoothing ==
             (this->StrandsParameters).StrandsSmoothing &&
            ((param_1->StrandsParameters).StrandsThickness ==
             (this->StrandsParameters).StrandsThickness)))))))))) {
    return true;
  }
  return false;
}

// BuildDDCKey @ 14dfb8a80

void __thiscall FHairGroupsPhysics::BuildDDCKey(FHairGroupsPhysics *this,FArchive *param_1)

{
  ::operator<<(param_1,(bool *)this);
  return;
}

