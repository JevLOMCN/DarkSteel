// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 6

// FNDIHairStrandsData @ 14e0d0de0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FNDIHairStrandsData * __thiscall FNDIHairStrandsData::FNDIHairStrandsData(FNDIHairStrandsData *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->WorldTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->WorldTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->WorldTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->WorldTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->WorldTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->WorldTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->WorldTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->WorldTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->WorldTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->WorldTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->WorldTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->WorldTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->BoneTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->BoneTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->BoneTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->BoneTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->BoneTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->BoneTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->BoneTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->BoneTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->BoneTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->BoneTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->BoneTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->BoneTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->PreviousBoneTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->PreviousBoneTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->PreviousBoneTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->PreviousBoneTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->PreviousBoneTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->PreviousBoneTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->PreviousBoneTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->PreviousBoneTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->PreviousBoneTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->PreviousBoneTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->PreviousBoneTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->PreviousBoneTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  this->HairStrandsBuffer = (FNDIHairStrandsBuffer *)0x0;
  this->HairGroupIndex = -1;
  this->HairGroupInstance = (FHairGroupInstance *)0x0;
  (this->HairGroupInstSource).WeakPtr = (FWeakObjectPtr)0x0;
  ResetDatas(this);
  return this;
}

// CopyDatas @ 14e0db4f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNDIHairStrandsData::CopyDatas(FNDIHairStrandsData *this,FNDIHairStrandsData *param_1)

{
  int iVar1;
  double dVar2;
  undefined8 uVar3;
  bool bVar4;
  UGroomComponent *pUVar5;
  FHairGroupInstance *pFVar6;
  TStaticArray<float,128,4294967295> *pTVar7;
  TStaticArray<float,128,4294967295> *pTVar8;
  longlong lVar9;
  
  if (param_1 != (FNDIHairStrandsData *)0x0) {
    this->HairStrandsBuffer = param_1->HairStrandsBuffer;
    dVar2 = (param_1->WorldTransform).Rotation.XY.m128d_f64[1];
    (this->WorldTransform).Rotation.XY.m128d_f64[0] =
         (param_1->WorldTransform).Rotation.XY.m128d_f64[0];
    (this->WorldTransform).Rotation.XY.m128d_f64[1] = dVar2;
    dVar2 = (param_1->WorldTransform).Rotation.ZW.m128d_f64[1];
    (this->WorldTransform).Rotation.ZW.m128d_f64[0] =
         (param_1->WorldTransform).Rotation.ZW.m128d_f64[0];
    (this->WorldTransform).Rotation.ZW.m128d_f64[1] = dVar2;
    dVar2 = (param_1->WorldTransform).Translation.XY.m128d_f64[1];
    (this->WorldTransform).Translation.XY.m128d_f64[0] =
         (param_1->WorldTransform).Translation.XY.m128d_f64[0];
    (this->WorldTransform).Translation.XY.m128d_f64[1] = dVar2;
    dVar2 = (param_1->WorldTransform).Translation.ZW.m128d_f64[1];
    (this->WorldTransform).Translation.ZW.m128d_f64[0] =
         (param_1->WorldTransform).Translation.ZW.m128d_f64[0];
    (this->WorldTransform).Translation.ZW.m128d_f64[1] = dVar2;
    dVar2 = (param_1->WorldTransform).Scale3D.XY.m128d_f64[1];
    (this->WorldTransform).Scale3D.XY.m128d_f64[0] =
         (param_1->WorldTransform).Scale3D.XY.m128d_f64[0];
    (this->WorldTransform).Scale3D.XY.m128d_f64[1] = dVar2;
    dVar2 = (param_1->WorldTransform).Scale3D.ZW.m128d_f64[1];
    (this->WorldTransform).Scale3D.ZW.m128d_f64[0] =
         (param_1->WorldTransform).Scale3D.ZW.m128d_f64[0];
    (this->WorldTransform).Scale3D.ZW.m128d_f64[1] = dVar2;
    dVar2 = (param_1->BoneTransform).Rotation.XY.m128d_f64[1];
    (this->BoneTransform).Rotation.XY.m128d_f64[0] =
         (param_1->BoneTransform).Rotation.XY.m128d_f64[0];
    (this->BoneTransform).Rotation.XY.m128d_f64[1] = dVar2;
    dVar2 = (param_1->BoneTransform).Rotation.ZW.m128d_f64[1];
    (this->BoneTransform).Rotation.ZW.m128d_f64[0] =
         (param_1->BoneTransform).Rotation.ZW.m128d_f64[0];
    (this->BoneTransform).Rotation.ZW.m128d_f64[1] = dVar2;
    dVar2 = (param_1->BoneTransform).Translation.XY.m128d_f64[1];
    (this->BoneTransform).Translation.XY.m128d_f64[0] =
         (param_1->BoneTransform).Translation.XY.m128d_f64[0];
    (this->BoneTransform).Translation.XY.m128d_f64[1] = dVar2;
    dVar2 = (param_1->BoneTransform).Translation.ZW.m128d_f64[1];
    (this->BoneTransform).Translation.ZW.m128d_f64[0] =
         (param_1->BoneTransform).Translation.ZW.m128d_f64[0];
    (this->BoneTransform).Translation.ZW.m128d_f64[1] = dVar2;
    dVar2 = (param_1->BoneTransform).Scale3D.XY.m128d_f64[1];
    (this->BoneTransform).Scale3D.XY.m128d_f64[0] = (param_1->BoneTransform).Scale3D.XY.m128d_f64[0]
    ;
    (this->BoneTransform).Scale3D.XY.m128d_f64[1] = dVar2;
    dVar2 = (param_1->BoneTransform).Scale3D.ZW.m128d_f64[1];
    (this->BoneTransform).Scale3D.ZW.m128d_f64[0] = (param_1->BoneTransform).Scale3D.ZW.m128d_f64[0]
    ;
    (this->BoneTransform).Scale3D.ZW.m128d_f64[1] = dVar2;
    *(undefined8 *)&(this->BoneLinearVelocity).field0_0x0 =
         *(undefined8 *)&(param_1->BoneLinearVelocity).field0_0x0;
    (this->BoneLinearVelocity).field0_0x0._s_0.Z = (param_1->BoneLinearVelocity).field0_0x0._s_0.Z;
    *(undefined8 *)&(this->BoneAngularVelocity).field0_0x0 =
         *(undefined8 *)&(param_1->BoneAngularVelocity).field0_0x0;
    (this->BoneAngularVelocity).field0_0x0._s_0.Z = (param_1->BoneAngularVelocity).field0_0x0._s_0.Z
    ;
    *(undefined8 *)&(this->BoneLinearAcceleration).field0_0x0 =
         *(undefined8 *)&(param_1->BoneLinearAcceleration).field0_0x0;
    (this->BoneLinearAcceleration).field0_0x0._s_0.Z =
         (param_1->BoneLinearAcceleration).field0_0x0._s_0.Z;
    *(undefined8 *)&(this->BoneAngularAcceleration).field0_0x0 =
         *(undefined8 *)&(param_1->BoneAngularAcceleration).field0_0x0;
    (this->BoneAngularAcceleration).field0_0x0._s_0.Z =
         (param_1->BoneAngularAcceleration).field0_0x0._s_0.Z;
    dVar2 = (param_1->PreviousBoneTransform).Rotation.XY.m128d_f64[1];
    (this->PreviousBoneTransform).Rotation.XY.m128d_f64[0] =
         (param_1->PreviousBoneTransform).Rotation.XY.m128d_f64[0];
    (this->PreviousBoneTransform).Rotation.XY.m128d_f64[1] = dVar2;
    dVar2 = (param_1->PreviousBoneTransform).Rotation.ZW.m128d_f64[1];
    (this->PreviousBoneTransform).Rotation.ZW.m128d_f64[0] =
         (param_1->PreviousBoneTransform).Rotation.ZW.m128d_f64[0];
    (this->PreviousBoneTransform).Rotation.ZW.m128d_f64[1] = dVar2;
    dVar2 = (param_1->PreviousBoneTransform).Translation.XY.m128d_f64[1];
    (this->PreviousBoneTransform).Translation.XY.m128d_f64[0] =
         (param_1->PreviousBoneTransform).Translation.XY.m128d_f64[0];
    (this->PreviousBoneTransform).Translation.XY.m128d_f64[1] = dVar2;
    dVar2 = (param_1->PreviousBoneTransform).Translation.ZW.m128d_f64[1];
    (this->PreviousBoneTransform).Translation.ZW.m128d_f64[0] =
         (param_1->PreviousBoneTransform).Translation.ZW.m128d_f64[0];
    (this->PreviousBoneTransform).Translation.ZW.m128d_f64[1] = dVar2;
    dVar2 = (param_1->PreviousBoneTransform).Scale3D.XY.m128d_f64[1];
    (this->PreviousBoneTransform).Scale3D.XY.m128d_f64[0] =
         (param_1->PreviousBoneTransform).Scale3D.XY.m128d_f64[0];
    (this->PreviousBoneTransform).Scale3D.XY.m128d_f64[1] = dVar2;
    dVar2 = (param_1->PreviousBoneTransform).Scale3D.ZW.m128d_f64[1];
    (this->PreviousBoneTransform).Scale3D.ZW.m128d_f64[0] =
         (param_1->PreviousBoneTransform).Scale3D.ZW.m128d_f64[0];
    (this->PreviousBoneTransform).Scale3D.ZW.m128d_f64[1] = dVar2;
    *(undefined8 *)&(this->PreviousBoneLinearVelocity).field0_0x0 =
         *(undefined8 *)&(param_1->PreviousBoneLinearVelocity).field0_0x0;
    (this->PreviousBoneLinearVelocity).field0_0x0._s_0.Z =
         (param_1->PreviousBoneLinearVelocity).field0_0x0._s_0.Z;
    *(undefined8 *)&(this->PreviousBoneAngularVelocity).field0_0x0 =
         *(undefined8 *)&(param_1->PreviousBoneAngularVelocity).field0_0x0;
    (this->PreviousBoneAngularVelocity).field0_0x0._s_0.Z =
         (param_1->PreviousBoneAngularVelocity).field0_0x0._s_0.Z;
    this->GlobalInterpolation = param_1->GlobalInterpolation;
    this->bSkinningTransfer = param_1->bSkinningTransfer;
    this->BindingType = param_1->BindingType;
    (this->HairGroupInstSource).WeakPtr = (param_1->HairGroupInstSource).WeakPtr;
    this->HairGroupInstance = (FHairGroupInstance *)0x0;
    this->HairGroupIndex = param_1->HairGroupIndex;
    bVar4 = TWeakObjectPtr<UGroomComponent,FWeakObjectPtr>::UEOpEquals
                      (&this->HairGroupInstSource,(void *)0x0);
    if (!bVar4) {
      iVar1 = this->HairGroupIndex;
      pUVar5 = (UGroomComponent *)FWeakObjectPtr::Get(&(this->HairGroupInstSource).WeakPtr);
      pFVar6 = GetHairGroupInstance(pUVar5,iVar1);
      this->HairGroupInstance = pFVar6;
    }
    lVar9 = 4;
    this->ForceReset = param_1->ForceReset;
    this->NumStrands = param_1->NumStrands;
    this->StrandsSize = param_1->StrandsSize;
    this->SubSteps = param_1->SubSteps;
    this->IterationCount = param_1->IterationCount;
    dVar2 = (param_1->GravityVector).field0_0x0._s_0.Y;
    (this->GravityVector).field0_0x0._s_0.X = (param_1->GravityVector).field0_0x0._s_0.X;
    (this->GravityVector).field0_0x0._s_0.Y = dVar2;
    (this->GravityVector).field0_0x0._s_0.Z = (param_1->GravityVector).field0_0x0._s_0.Z;
    this->GravityPreloading = param_1->GravityPreloading;
    this->AirDrag = param_1->AirDrag;
    dVar2 = (param_1->AirVelocity).field0_0x0._s_0.Y;
    (this->AirVelocity).field0_0x0._s_0.X = (param_1->AirVelocity).field0_0x0._s_0.X;
    (this->AirVelocity).field0_0x0._s_0.Y = dVar2;
    (this->AirVelocity).field0_0x0._s_0.Z = (param_1->AirVelocity).field0_0x0._s_0.Z;
    this->SolveBend = param_1->SolveBend;
    this->ProjectBend = param_1->ProjectBend;
    this->BendDamping = param_1->BendDamping;
    this->BendStiffness = param_1->BendStiffness;
    this->SolveStretch = param_1->SolveStretch;
    this->ProjectStretch = param_1->ProjectStretch;
    this->StretchDamping = param_1->StretchDamping;
    this->StretchStiffness = param_1->StretchStiffness;
    this->SolveCollision = param_1->SolveCollision;
    this->ProjectCollision = param_1->ProjectCollision;
    this->StaticFriction = param_1->StaticFriction;
    this->KineticFriction = param_1->KineticFriction;
    this->StrandsViscosity = param_1->StrandsViscosity;
    *(undefined8 *)&(this->GridDimension).field0_0x0 =
         *(undefined8 *)&(param_1->GridDimension).field0_0x0;
    (this->GridDimension).field0_0x0._s_0.Z = (param_1->GridDimension).field0_0x0._s_0.Z;
    this->CollisionRadius = param_1->CollisionRadius;
    this->StrandsDensity = param_1->StrandsDensity;
    this->StrandsSmoothing = param_1->StrandsSmoothing;
    this->StrandsThickness = param_1->StrandsThickness;
    pTVar7 = &this->ParamsScale;
    pTVar8 = &param_1->ParamsScale;
    do {
      uVar3 = *(undefined8 *)(pTVar8->Elements + 2);
      *(undefined8 *)pTVar7->Elements = *(undefined8 *)pTVar8->Elements;
      *(undefined8 *)(pTVar7->Elements + 2) = uVar3;
      uVar3 = *(undefined8 *)(pTVar8->Elements + 6);
      *(undefined8 *)(pTVar7->Elements + 4) = *(undefined8 *)(pTVar8->Elements + 4);
      *(undefined8 *)(pTVar7->Elements + 6) = uVar3;
      uVar3 = *(undefined8 *)(pTVar8->Elements + 10);
      *(undefined8 *)(pTVar7->Elements + 8) = *(undefined8 *)(pTVar8->Elements + 8);
      *(undefined8 *)(pTVar7->Elements + 10) = uVar3;
      uVar3 = *(undefined8 *)(pTVar8->Elements + 0xe);
      *(undefined8 *)(pTVar7->Elements + 0xc) = *(undefined8 *)(pTVar8->Elements + 0xc);
      *(undefined8 *)(pTVar7->Elements + 0xe) = uVar3;
      uVar3 = *(undefined8 *)(pTVar8->Elements + 0x12);
      *(undefined8 *)(pTVar7->Elements + 0x10) = *(undefined8 *)(pTVar8->Elements + 0x10);
      *(undefined8 *)(pTVar7->Elements + 0x12) = uVar3;
      uVar3 = *(undefined8 *)(pTVar8->Elements + 0x16);
      *(undefined8 *)(pTVar7->Elements + 0x14) = *(undefined8 *)(pTVar8->Elements + 0x14);
      *(undefined8 *)(pTVar7->Elements + 0x16) = uVar3;
      uVar3 = *(undefined8 *)(pTVar8->Elements + 0x1a);
      *(undefined8 *)(pTVar7->Elements + 0x18) = *(undefined8 *)(pTVar8->Elements + 0x18);
      *(undefined8 *)(pTVar7->Elements + 0x1a) = uVar3;
      uVar3 = *(undefined8 *)(pTVar8->Elements + 0x1e);
      *(undefined8 *)(pTVar7->Elements + 0x1c) = *(undefined8 *)(pTVar8->Elements + 0x1c);
      *(undefined8 *)(pTVar7->Elements + 0x1e) = uVar3;
      lVar9 = lVar9 + -1;
      pTVar7 = (TStaticArray<float,128,4294967295> *)(pTVar7->Elements + 0x20);
      pTVar8 = (TStaticArray<float,128,4294967295> *)(pTVar8->Elements + 0x20);
    } while (lVar9 != 0);
    this->SkeletalMeshes = param_1->SkeletalMeshes;
    this->TickingGroup = param_1->TickingGroup;
    this->LocalSimulation = param_1->LocalSimulation;
  }
  return;
}

// Init @ 14e0f1d80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FNDIHairStrandsData::Init
          (FNDIHairStrandsData *this,UNiagaraDataInterfaceHairStrands *param_1,
          FNiagaraSystemInstance *param_2)

{
  undefined8 uVar1;
  FNDIHairStrandsBuffer *pFVar2;
  TStaticArray<float,128,4294967295> *pTVar3;
  longlong lVar4;
  FNDIHairStrandsBuffer *pFVar5;
  FNDIHairStrandsInfo local_88;
  
  pFVar5 = (FNDIHairStrandsBuffer *)0x0;
  this->HairStrandsBuffer = (FNDIHairStrandsBuffer *)0x0;
  if (param_1 != (UNiagaraDataInterfaceHairStrands *)0x0) {
    local_88.GroupIndex = 0;
    local_88.LODIndex = 0;
    local_88.NumControlPoints = 0;
    local_88.NumCurves = 0;
    local_88.LocalToWorld.Rotation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_88.LocalToWorld.Rotation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_88.LocalToWorld.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_88.LocalToWorld.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_88.LocalToWorld.Scale3D.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_88.LocalToWorld.Scale3D.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    local_88.bHasValidResources = false;
    UNiagaraDataInterfaceHairStrands::ExtractDatasAndResources(param_1,param_2,&local_88);
    Update(this,param_1,&local_88,0.0);
    pFVar2 = ::operator_new(0x2a0);
    if (pFVar2 != (FNDIHairStrandsBuffer *)0x0) {
      memset(pFVar2,0,0x2a0);
      FRenderResource::FRenderResource((FRenderResource *)pFVar2);
      pFVar2->bValidGeometryType = false;
      pFVar2->_padding_ = (longlong)&___7FNDIHairStrandsBuffer__6B_;
      (pFVar2->BoundingBoxBuffer).Buffer.Reference = (FRDGPooledBuffer *)0x0;
      (pFVar2->BoundingBoxBuffer).PixelFormat = PF_Unknown;
      (pFVar2->BoundingBoxBuffer).TransientRDGBuffer = (FRDGBuffer *)0x0;
      (pFVar2->BoundingBoxBuffer).TransientRDGSRV = (FRDGBufferSRV *)0x0;
      (pFVar2->BoundingBoxBuffer).TransientRDGUAV = (FRDGBufferUAV *)0x0;
      (pFVar2->BoundingBoxBuffer).NumBytes = 0;
      (pFVar2->ParamsScaleBuffer).Buffer.Reference = (FRDGPooledBuffer *)0x0;
      (pFVar2->ParamsScaleBuffer).PixelFormat = PF_Unknown;
      (pFVar2->ParamsScaleBuffer).TransientRDGBuffer = (FRDGBuffer *)0x0;
      (pFVar2->ParamsScaleBuffer).TransientRDGSRV = (FRDGBufferSRV *)0x0;
      (pFVar2->ParamsScaleBuffer).TransientRDGUAV = (FRDGBufferUAV *)0x0;
      (pFVar2->ParamsScaleBuffer).NumBytes = 0;
      pFVar2->CurrentMeshLOD = -1;
      pFVar2->bShouldReset = false;
      pFVar2->ResetCount = 0;
      pFVar5 = pFVar2;
    }
    this->HairStrandsBuffer = pFVar5;
    lVar4 = 4;
    pFVar5->bNeedResouces = local_88.bHasValidResources;
    pTVar3 = &this->ParamsScale;
    pFVar2 = pFVar5;
    do {
      uVar1 = *(undefined8 *)(pTVar3->Elements + 2);
      *(undefined8 *)(pFVar2->ParamsScale).Elements = *(undefined8 *)pTVar3->Elements;
      *(undefined8 *)((pFVar2->ParamsScale).Elements + 2) = uVar1;
      uVar1 = *(undefined8 *)(pTVar3->Elements + 6);
      *(undefined8 *)((pFVar2->ParamsScale).Elements + 4) = *(undefined8 *)(pTVar3->Elements + 4);
      *(undefined8 *)((pFVar2->ParamsScale).Elements + 6) = uVar1;
      uVar1 = *(undefined8 *)(pTVar3->Elements + 10);
      *(undefined8 *)((pFVar2->ParamsScale).Elements + 8) = *(undefined8 *)(pTVar3->Elements + 8);
      *(undefined8 *)((pFVar2->ParamsScale).Elements + 10) = uVar1;
      uVar1 = *(undefined8 *)(pTVar3->Elements + 0xe);
      *(undefined8 *)((pFVar2->ParamsScale).Elements + 0xc) =
           *(undefined8 *)(pTVar3->Elements + 0xc);
      *(undefined8 *)((pFVar2->ParamsScale).Elements + 0xe) = uVar1;
      uVar1 = *(undefined8 *)(pTVar3->Elements + 0x12);
      *(undefined8 *)((pFVar2->ParamsScale).Elements + 0x10) =
           *(undefined8 *)(pTVar3->Elements + 0x10);
      *(undefined8 *)((pFVar2->ParamsScale).Elements + 0x12) = uVar1;
      uVar1 = *(undefined8 *)(pTVar3->Elements + 0x16);
      *(undefined8 *)((pFVar2->ParamsScale).Elements + 0x14) =
           *(undefined8 *)(pTVar3->Elements + 0x14);
      *(undefined8 *)((pFVar2->ParamsScale).Elements + 0x16) = uVar1;
      uVar1 = *(undefined8 *)(pTVar3->Elements + 0x1a);
      *(undefined8 *)((pFVar2->ParamsScale).Elements + 0x18) =
           *(undefined8 *)(pTVar3->Elements + 0x18);
      *(undefined8 *)((pFVar2->ParamsScale).Elements + 0x1a) = uVar1;
      uVar1 = *(undefined8 *)(pTVar3->Elements + 0x1e);
      *(undefined8 *)((pFVar2->ParamsScale).Elements + 0x1c) =
           *(undefined8 *)(pTVar3->Elements + 0x1c);
      *(undefined8 *)((pFVar2->ParamsScale).Elements + 0x1e) = uVar1;
      lVar4 = lVar4 + -1;
      pTVar3 = (TStaticArray<float,128,4294967295> *)(pTVar3->Elements + 0x20);
      pFVar2 = (FNDIHairStrandsBuffer *)&pFVar2->ParamsScale;
    } while (lVar4 != 0);
    pFVar5->bValidGeometryType = false;
    BeginInitResource((FRenderResource *)this->HairStrandsBuffer,(FRenderCommandPipe *)0x0);
    this->ForceReset = true;
  }
  return true;
}

// Release @ 14e0f5060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FNDIHairStrandsData::Release(FNDIHairStrandsData *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FNDIHairStrandsBuffer *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FNDIHairStrandsBuffer *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pFStack_70 = this->HairStrandsBuffer;
  if (pFStack_70 != (FNDIHairStrandsBuffer *)0x0) {
    local_60 = (undefined ***)0x0;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FNDIHairStrandsData::Release'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FNDIHairStrandsData::Release'::`5'::<lambda_1>,1,0>::
                _vftable_;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FNDIHairStrandsData::Release_::__l5::TSTR_DeleteResource498>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      pFStack_40 = pFStack_70;
      local_38 = local_68;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar3 = (FRenderCommandTag *)
               TRenderCommandTag<`FNDIHairStrandsData::Release'::__l5::TSTR_DeleteResource498>::Get
                         ();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar3);
      uVar5 = (ulonglong)local_28;
      if (2 < uVar5) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar4 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar4 = local_30;
          }
          (*(code *)(*pppuVar4)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar4 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar4 = local_60;
      }
      (*(code *)(*pppuVar4)[2])();
    }
    this->HairStrandsBuffer = (FNDIHairStrandsBuffer *)0x0;
  }
  return;
}

// ResetDatas @ 14e0f5b50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FNDIHairStrandsData::ResetDatas(FNDIHairStrandsData *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->WorldTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->WorldTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->WorldTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->WorldTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->WorldTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->WorldTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->WorldTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->WorldTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->WorldTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->WorldTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->WorldTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->WorldTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->BoneTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->BoneTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->BoneTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->BoneTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->BoneTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->BoneTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->BoneTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->BoneTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->BoneTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->BoneTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->BoneTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->BoneTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  *(undefined8 *)&(this->BoneLinearVelocity).field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->BoneLinearVelocity).field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&(this->BoneAngularVelocity).field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->BoneAngularVelocity).field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&(this->BoneLinearAcceleration).field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->BoneLinearAcceleration).field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&(this->BoneAngularAcceleration).field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->BoneAngularAcceleration).field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->PreviousBoneTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->PreviousBoneTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->PreviousBoneTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->PreviousBoneTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->PreviousBoneTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->PreviousBoneTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->PreviousBoneTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->PreviousBoneTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->PreviousBoneTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->PreviousBoneTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->PreviousBoneTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->PreviousBoneTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  *(undefined8 *)&(this->PreviousBoneLinearVelocity).field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->PreviousBoneLinearVelocity).field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&(this->PreviousBoneAngularVelocity).field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->PreviousBoneAngularVelocity).field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  this->GlobalInterpolation = false;
  this->bSkinningTransfer = false;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  this->HairGroupInstance = (FHairGroupInstance *)0x0;
  this->HairGroupIndex = -1;
  this->ForceReset = true;
  this->NumStrands = 0;
  this->StrandsSize = 0;
  this->SubSteps = 5;
  this->IterationCount = 0x14;
  (this->HairGroupInstSource).WeakPtr = local_res8;
  (this->GravityVector).field0_0x0._s_0.X = 0.0;
  (this->GravityVector).field0_0x0._s_0.Y = 0.0;
  (this->GravityVector).field0_0x0._s_0.Z = -981.0;
  this->GravityPreloading = 0.0;
  this->AirDrag = 0.1;
  (this->AirVelocity).field0_0x0._s_0.X = 0.0;
  (this->AirVelocity).field0_0x0._s_0.Y = 0.0;
  (this->AirVelocity).field0_0x0._s_0.Z = 0.0;
  this->SolveBend = true;
  this->ProjectBend = false;
  this->BendDamping = 0.01;
  this->BendStiffness = 0.01;
  this->SolveStretch = true;
  this->ProjectStretch = false;
  this->StretchDamping = 0.01;
  this->StretchStiffness = 1.0;
  this->SolveCollision = true;
  this->ProjectCollision = true;
  this->KineticFriction = 0.1;
  this->StaticFriction = 0.1;
  this->StrandsViscosity = 1.0;
  (this->GridDimension).field0_0x0._s_0.X = 0x1e;
  (this->GridDimension).field0_0x0._s_0.Y = 0x1e;
  (this->GridDimension).field0_0x0._s_0.Z = 0x1e;
  this->CollisionRadius = 1.0;
  this->StrandsDensity = 1.0;
  this->StrandsSmoothing = 0.1;
  this->StrandsThickness = 0.01;
  this->TickingGroup = TG_PrePhysics;
  (this->ParamsScale).Elements[0] = 1.0;
  (this->ParamsScale).Elements[1] = 1.0;
  (this->ParamsScale).Elements[2] = 1.0;
  (this->ParamsScale).Elements[3] = 1.0;
  (this->ParamsScale).Elements[4] = 1.0;
  (this->ParamsScale).Elements[5] = 1.0;
  (this->ParamsScale).Elements[6] = 1.0;
  (this->ParamsScale).Elements[7] = 1.0;
  (this->ParamsScale).Elements[8] = 1.0;
  (this->ParamsScale).Elements[9] = 1.0;
  (this->ParamsScale).Elements[10] = 1.0;
  (this->ParamsScale).Elements[0xb] = 1.0;
  (this->ParamsScale).Elements[0xc] = 1.0;
  (this->ParamsScale).Elements[0xd] = 1.0;
  (this->ParamsScale).Elements[0xe] = 1.0;
  (this->ParamsScale).Elements[0xf] = 1.0;
  (this->ParamsScale).Elements[0x10] = 1.0;
  (this->ParamsScale).Elements[0x11] = 1.0;
  (this->ParamsScale).Elements[0x12] = 1.0;
  (this->ParamsScale).Elements[0x13] = 1.0;
  (this->ParamsScale).Elements[0x14] = 1.0;
  (this->ParamsScale).Elements[0x15] = 1.0;
  (this->ParamsScale).Elements[0x16] = 1.0;
  (this->ParamsScale).Elements[0x17] = 1.0;
  (this->ParamsScale).Elements[0x18] = 1.0;
  (this->ParamsScale).Elements[0x19] = 1.0;
  (this->ParamsScale).Elements[0x1a] = 1.0;
  (this->ParamsScale).Elements[0x1b] = 1.0;
  (this->ParamsScale).Elements[0x1c] = 1.0;
  (this->ParamsScale).Elements[0x1d] = 1.0;
  (this->ParamsScale).Elements[0x1e] = 1.0;
  (this->ParamsScale).Elements[0x1f] = 1.0;
  (this->ParamsScale).Elements[0x20] = 1.0;
  (this->ParamsScale).Elements[0x21] = 1.0;
  (this->ParamsScale).Elements[0x22] = 1.0;
  (this->ParamsScale).Elements[0x23] = 1.0;
  (this->ParamsScale).Elements[0x24] = 1.0;
  (this->ParamsScale).Elements[0x25] = 1.0;
  (this->ParamsScale).Elements[0x26] = 1.0;
  (this->ParamsScale).Elements[0x27] = 1.0;
  (this->ParamsScale).Elements[0x28] = 1.0;
  (this->ParamsScale).Elements[0x29] = 1.0;
  (this->ParamsScale).Elements[0x2a] = 1.0;
  (this->ParamsScale).Elements[0x2b] = 1.0;
  (this->ParamsScale).Elements[0x2c] = 1.0;
  (this->ParamsScale).Elements[0x2d] = 1.0;
  (this->ParamsScale).Elements[0x2e] = 1.0;
  (this->ParamsScale).Elements[0x2f] = 1.0;
  (this->ParamsScale).Elements[0x30] = 1.0;
  (this->ParamsScale).Elements[0x31] = 1.0;
  (this->ParamsScale).Elements[0x32] = 1.0;
  (this->ParamsScale).Elements[0x33] = 1.0;
  (this->ParamsScale).Elements[0x34] = 1.0;
  (this->ParamsScale).Elements[0x35] = 1.0;
  (this->ParamsScale).Elements[0x36] = 1.0;
  (this->ParamsScale).Elements[0x37] = 1.0;
  (this->ParamsScale).Elements[0x38] = 1.0;
  (this->ParamsScale).Elements[0x39] = 1.0;
  (this->ParamsScale).Elements[0x3a] = 1.0;
  (this->ParamsScale).Elements[0x3b] = 1.0;
  (this->ParamsScale).Elements[0x3c] = 1.0;
  (this->ParamsScale).Elements[0x3d] = 1.0;
  (this->ParamsScale).Elements[0x3e] = 1.0;
  (this->ParamsScale).Elements[0x3f] = 1.0;
  (this->ParamsScale).Elements[0x40] = 1.0;
  (this->ParamsScale).Elements[0x41] = 1.0;
  (this->ParamsScale).Elements[0x42] = 1.0;
  (this->ParamsScale).Elements[0x43] = 1.0;
  (this->ParamsScale).Elements[0x44] = 1.0;
  (this->ParamsScale).Elements[0x45] = 1.0;
  (this->ParamsScale).Elements[0x46] = 1.0;
  (this->ParamsScale).Elements[0x47] = 1.0;
  (this->ParamsScale).Elements[0x48] = 1.0;
  (this->ParamsScale).Elements[0x49] = 1.0;
  (this->ParamsScale).Elements[0x4a] = 1.0;
  (this->ParamsScale).Elements[0x4b] = 1.0;
  (this->ParamsScale).Elements[0x4c] = 1.0;
  (this->ParamsScale).Elements[0x4d] = 1.0;
  (this->ParamsScale).Elements[0x4e] = 1.0;
  (this->ParamsScale).Elements[0x4f] = 1.0;
  (this->ParamsScale).Elements[0x50] = 1.0;
  (this->ParamsScale).Elements[0x51] = 1.0;
  (this->ParamsScale).Elements[0x52] = 1.0;
  (this->ParamsScale).Elements[0x53] = 1.0;
  (this->ParamsScale).Elements[0x54] = 1.0;
  (this->ParamsScale).Elements[0x55] = 1.0;
  (this->ParamsScale).Elements[0x56] = 1.0;
  (this->ParamsScale).Elements[0x57] = 1.0;
  (this->ParamsScale).Elements[0x58] = 1.0;
  (this->ParamsScale).Elements[0x59] = 1.0;
  (this->ParamsScale).Elements[0x5a] = 1.0;
  (this->ParamsScale).Elements[0x5b] = 1.0;
  (this->ParamsScale).Elements[0x5c] = 1.0;
  (this->ParamsScale).Elements[0x5d] = 1.0;
  (this->ParamsScale).Elements[0x5e] = 1.0;
  (this->ParamsScale).Elements[0x5f] = 1.0;
  (this->ParamsScale).Elements[0x60] = 1.0;
  (this->ParamsScale).Elements[0x61] = 1.0;
  (this->ParamsScale).Elements[0x62] = 1.0;
  (this->ParamsScale).Elements[99] = 1.0;
  (this->ParamsScale).Elements[100] = 1.0;
  (this->ParamsScale).Elements[0x65] = 1.0;
  (this->ParamsScale).Elements[0x66] = 1.0;
  (this->ParamsScale).Elements[0x67] = 1.0;
  (this->ParamsScale).Elements[0x68] = 1.0;
  (this->ParamsScale).Elements[0x69] = 1.0;
  (this->ParamsScale).Elements[0x6a] = 1.0;
  (this->ParamsScale).Elements[0x6b] = 1.0;
  (this->ParamsScale).Elements[0x6c] = 1.0;
  (this->ParamsScale).Elements[0x6d] = 1.0;
  (this->ParamsScale).Elements[0x6e] = 1.0;
  (this->ParamsScale).Elements[0x6f] = 1.0;
  (this->ParamsScale).Elements[0x70] = 1.0;
  (this->ParamsScale).Elements[0x71] = 1.0;
  (this->ParamsScale).Elements[0x72] = 1.0;
  (this->ParamsScale).Elements[0x73] = 1.0;
  (this->ParamsScale).Elements[0x74] = 1.0;
  (this->ParamsScale).Elements[0x75] = 1.0;
  (this->ParamsScale).Elements[0x76] = 1.0;
  (this->ParamsScale).Elements[0x77] = 1.0;
  (this->ParamsScale).Elements[0x78] = 1.0;
  (this->ParamsScale).Elements[0x79] = 1.0;
  (this->ParamsScale).Elements[0x7a] = 1.0;
  (this->ParamsScale).Elements[0x7b] = 1.0;
  (this->ParamsScale).Elements[0x7c] = 1.0;
  (this->ParamsScale).Elements[0x7d] = 1.0;
  (this->ParamsScale).Elements[0x7e] = 1.0;
  *(undefined8 *)((this->ParamsScale).Elements + 0x7f) = 0x3f800000;
  this->LocalSimulation = false;
  return;
}

// Update @ 14e0f8d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNDIHairStrandsData::Update
          (FNDIHairStrandsData *this,UNiagaraDataInterfaceHairStrands *param_1,
          FNDIHairStrandsInfo *param_2,float param_3)

{
  undefined8 uVar1;
  uint uVar2;
  UGroomAsset *this_00;
  UGroomBindingAsset *this_01;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [12];
  double dVar8;
  FRuntimeFloatCurve *this_02;
  bool bVar9;
  bool bVar10;
  byte bVar11;
  int iVar12;
  UObject *pUVar13;
  USkeletalMesh *pUVar14;
  UObject *pUVar15;
  USkeletalMesh *pUVar16;
  UGroomComponent *pUVar17;
  TArray<FHairGroupsPhysics,TSizedDefaultAllocator<32>_> *pTVar18;
  FWeakObjectPtr FVar19;
  FRichCurve *pFVar20;
  TMatrix<double> *pTVar21;
  ETickingGroup EVar22;
  ETickingGroup EVar23;
  ETickingGroup EVar24;
  longlong lVar25;
  int iVar26;
  ulonglong uVar27;
  FWeakObjectPtr *this_03;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar45;
  float fVar46;
  double dVar47;
  double dVar50;
  undefined1 auVar48 [16];
  double dVar51;
  undefined1 auVar49 [16];
  double dVar52;
  undefined1 in_XMM2 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  double dVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined4 uVar66;
  float fVar67;
  float fVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined4 uVar72;
  undefined4 uVar73;
  float fVar74;
  undefined1 auStack_6f8 [32];
  longlong local_6d8;
  longlong local_6d0;
  FWeakObjectPtr local_6c8;
  FWeakObjectPtr local_6c0;
  FRuntimeFloatCurve *local_6b8;
  FRuntimeFloatCurve *local_6b0;
  FWeakObjectPtr *local_6a8;
  FNDIHairStrandsInfo *local_6a0;
  undefined1 local_698 [16];
  double local_688;
  TTransform<double> local_678;
  TMatrix<double> local_618;
  undefined1 local_598 [96];
  double local_538;
  double dStack_530;
  double local_528;
  double dStack_520;
  TTransform<double> local_518 [2];
  undefined1 local_448 [96];
  double local_3e8;
  double dStack_3e0;
  double local_3d8;
  double dStack_3d0;
  TMatrix<double> local_3c8;
  undefined1 local_348 [96];
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  TMatrix<double> local_2c8;
  TMatrix<double> local_248;
  TMatrix<double> local_1c8;
  TMatrix<double> local_148;
  ulonglong local_c8;
  
  if (param_1 == (UNiagaraDataInterfaceHairStrands *)0x0) {
    return;
  }
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_6f8;
  if (param_2->bHasValidResources == false) {
    return;
  }
  this_03 = &(param_1->SourceComponent).WeakPtr;
  local_6b8 = (FRuntimeFloatCurve *)param_1;
  local_6a8 = this_03;
  local_6a0 = param_2;
  pUVar13 = FWeakObjectPtr::Get(this_03);
  dVar56 = (param_2->LocalToWorld).Rotation.XY.m128d_f64[1];
  this_00 = *(UGroomAsset **)(pUVar13 + 0x24);
  (this->WorldTransform).Rotation.XY.m128d_f64[0] = (param_2->LocalToWorld).Rotation.XY.m128d_f64[0]
  ;
  (this->WorldTransform).Rotation.XY.m128d_f64[1] = dVar56;
  dVar56 = (param_2->LocalToWorld).Rotation.ZW.m128d_f64[1];
  (this->WorldTransform).Rotation.ZW.m128d_f64[0] = (param_2->LocalToWorld).Rotation.ZW.m128d_f64[0]
  ;
  (this->WorldTransform).Rotation.ZW.m128d_f64[1] = dVar56;
  dVar56 = (param_2->LocalToWorld).Translation.XY.m128d_f64[1];
  (this->WorldTransform).Translation.XY.m128d_f64[0] =
       (param_2->LocalToWorld).Translation.XY.m128d_f64[0];
  (this->WorldTransform).Translation.XY.m128d_f64[1] = dVar56;
  dVar56 = (param_2->LocalToWorld).Translation.ZW.m128d_f64[1];
  (this->WorldTransform).Translation.ZW.m128d_f64[0] =
       (param_2->LocalToWorld).Translation.ZW.m128d_f64[0];
  (this->WorldTransform).Translation.ZW.m128d_f64[1] = dVar56;
  dVar56 = (param_2->LocalToWorld).Scale3D.XY.m128d_f64[1];
  (this->WorldTransform).Scale3D.XY.m128d_f64[0] = (param_2->LocalToWorld).Scale3D.XY.m128d_f64[0];
  (this->WorldTransform).Scale3D.XY.m128d_f64[1] = dVar56;
  dVar56 = (param_2->LocalToWorld).Scale3D.ZW.m128d_f64[1];
  (this->WorldTransform).Scale3D.ZW.m128d_f64[0] = (param_2->LocalToWorld).Scale3D.ZW.m128d_f64[0];
  (this->WorldTransform).Scale3D.ZW.m128d_f64[1] = dVar56;
  bVar9 = FWeakObjectPtr::IsValid(this_03);
  uVar27 = 0;
  bVar10 = false;
  if ((((!bVar9) ||
       (bVar9 = TWeakObjectPtr<UGroomComponent,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UGroomComponent,FWeakObjectPtr> *)this_03,(void *)0x0),
       bVar9)) || (pUVar13 = FWeakObjectPtr::Get(this_03), *(longlong *)(pUVar13 + 0x25) == 0)) ||
     (this_00 == (UGroomAsset *)0x0)) {
    this->GlobalInterpolation = false;
  }
  else {
    bVar9 = UGroomAsset::IsGlobalInterpolationEnable(this_00,param_2->GroupIndex,param_2->LODIndex);
    this->GlobalInterpolation = bVar9;
    pUVar13 = FWeakObjectPtr::Get(this_03);
    pUVar14 = UGroomBindingAsset::GetSourceSkeletalMesh(*(UGroomBindingAsset **)(pUVar13 + 0x25));
    if (pUVar14 != (USkeletalMesh *)0x0) {
      pUVar13 = FWeakObjectPtr::Get(this_03);
      pUVar14 = UGroomBindingAsset::GetTargetSkeletalMesh(*(UGroomBindingAsset **)(pUVar13 + 0x25));
      if (pUVar14 != (USkeletalMesh *)0x0) {
        pUVar13 = FWeakObjectPtr::Get(this_03);
        pUVar15 = FWeakObjectPtr::Get(this_03);
        this_01 = *(UGroomBindingAsset **)(pUVar15 + 0x25);
        pUVar14 = UGroomBindingAsset::GetSourceSkeletalMesh
                            (*(UGroomBindingAsset **)(pUVar13 + 0x25));
        pUVar16 = UGroomBindingAsset::GetTargetSkeletalMesh(this_01);
        if (pUVar14 != pUVar16) {
          bVar10 = true;
        }
      }
    }
  }
  this->bSkinningTransfer = bVar10;
  bVar9 = FWeakObjectPtr::IsValid(this_03);
  EVar23 = TG_PrePhysics;
  EVar24 = EVar23;
  if ((bVar9) &&
     (bVar9 = TWeakObjectPtr<UGroomComponent,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UGroomComponent,FWeakObjectPtr> *)this_03,(void *)0x0),
     !bVar9)) {
    local_6c0 = ((TWeakObjectPtr<UGroomComponent,FWeakObjectPtr> *)this_03)->WeakPtr;
    pUVar13 = FWeakObjectPtr::Get(&local_6c0);
    if (pUVar13 != (UObject *)0x0) {
      pUVar13 = FWeakObjectPtr::Get(&local_6c0);
      bVar11 = pUVar13[1].field_0x19;
      pUVar13 = FWeakObjectPtr::Get(&local_6c0);
      if (bVar11 < (byte)pUVar13[1].field_0x18) {
        bVar11 = pUVar13[1].field_0x18;
      }
      EVar22 = TG_LastDemotable;
      if (bVar11 + TG_StartPhysics < TG_LastDemotable) {
        EVar22 = bVar11 + TG_StartPhysics;
      }
      EVar24 = TG_PrePhysics;
      if (EVar22 != TG_PrePhysics) {
        EVar24 = EVar22;
      }
    }
  }
  this->TickingGroup = EVar24;
  bVar9 = FWeakObjectPtr::IsValid(this_03);
  if ((!bVar9) ||
     (bVar9 = TWeakObjectPtr<UGroomComponent,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UGroomComponent,FWeakObjectPtr> *)this_03,(void *)0x0),
     bVar9)) {
    if (this_00 == (UGroomAsset *)0x0) goto LAB_14e0f8f8a;
    bVar9 = UGroomAsset::IsSimulationEnable(this_00,param_2->GroupIndex,param_2->LODIndex);
  }
  else {
    pUVar17 = (UGroomComponent *)FWeakObjectPtr::Get(this_03);
    bVar9 = UGroomComponent::IsSimulationEnable(pUVar17,param_2->GroupIndex,param_2->LODIndex);
    if (this_00 == (UGroomAsset *)0x0) goto LAB_14e0f8f8a;
  }
  pTVar18 = UGroomAsset::GetHairGroupsPhysics(this_00);
  if (((-1 < param_2->GroupIndex) && (param_2->GroupIndex < pTVar18->ArrayNum)) && (bVar9 != false))
  {
    pTVar18 = UGroomAsset::GetHairGroupsPhysics(this_00);
    uVar2 = param_2->GroupIndex;
    if ((int)uVar2 < pTVar18->ArrayNum) {
      EVar23 = ~uVar2 >> 0x1f;
    }
    if ((EVar23 == TG_PrePhysics) &&
       (local_6d8 = (longlong)(int)uVar2, local_6d0 = (longlong)pTVar18->ArrayNum,
       bVar9 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this_02 = local_6b8;
    pFVar3 = (pTVar18->AllocatorInstance).Data;
    lVar25 = (longlong)(int)uVar2 * 0x2e8;
    this->StrandsSize = (uint)(byte)pFVar3[lVar25 + 0x250];
    bVar9 = UNiagaraDataInterfaceHairStrands::IsComponentValid
                      ((UNiagaraDataInterfaceHairStrands *)local_6b8);
    if (bVar9) {
      iVar12 = param_2->GroupIndex;
    }
    else {
      iVar12 = -1;
    }
    this->HairGroupIndex = iVar12;
    bVar9 = UNiagaraDataInterfaceHairStrands::IsComponentValid
                      ((UNiagaraDataInterfaceHairStrands *)this_02);
    if (bVar9) {
      FVar19 = ((TWeakObjectPtr<UGroomComponent,FWeakObjectPtr> *)this_03)->WeakPtr;
    }
    else {
      local_6c8.ObjectIndex = 0;
      local_6c8.ObjectSerialNumber = 0;
      local_6b0 = (FRuntimeFloatCurve *)0x0;
      FWeakObjectPtr::operator=(&local_6c8,(FObjectPtr)&local_6b0);
      FVar19 = local_6c8;
    }
    dVar8 = __real_3ff0000000000000;
    uVar66 = SUB84(__real_3ff0000000000000,0);
    uVar30 = (ulonglong)__real_3ff0000000000000 >> 0x20;
    (this->HairGroupInstSource).WeakPtr = FVar19;
    this->SubSteps = *(int *)(pFVar3 + lVar25 + 0x34);
    this->IterationCount = *(int *)(pFVar3 + lVar25 + 0x38);
    dVar56 = *(double *)(pFVar3 + lVar25 + 0x40 + 8);
    (this->GravityVector).field0_0x0._s_0.X = *(double *)(pFVar3 + lVar25 + 0x40);
    (this->GravityVector).field0_0x0._s_0.Y = dVar56;
    (this->GravityVector).field0_0x0._s_0.Z = *(double *)(pFVar3 + lVar25 + 0x50);
    this->GravityPreloading = *(float *)(pFVar3 + lVar25 + 0x30);
    this->AirDrag = *(float *)(pFVar3 + lVar25 + 0x58);
    dVar56 = *(double *)(pFVar3 + lVar25 + 0x60 + 8);
    (this->AirVelocity).field0_0x0._s_0.X = *(double *)(pFVar3 + lVar25 + 0x60);
    (this->AirVelocity).field0_0x0._s_0.Y = dVar56;
    (this->AirVelocity).field0_0x0._s_0.Z = *(double *)(pFVar3 + lVar25 + 0x70);
    this->SolveBend = (bool)pFVar3[lVar25 + 0x78];
    this->ProjectBend = (bool)pFVar3[lVar25 + 0x79];
    this->BendDamping = *(float *)(pFVar3 + lVar25 + 0x7c);
    this->BendStiffness = *(float *)(pFVar3 + lVar25 + 0x80);
    this->SolveStretch = (bool)pFVar3[lVar25 + 0x110];
    this->ProjectStretch = (bool)pFVar3[lVar25 + 0x111];
    this->StretchDamping = *(float *)(pFVar3 + lVar25 + 0x114);
    this->StretchStiffness = *(float *)(pFVar3 + lVar25 + 0x118);
    this->SolveCollision = (bool)pFVar3[lVar25 + 0x1a8];
    this->ProjectCollision = (bool)pFVar3[lVar25 + 0x1a9];
    this->StaticFriction = *(float *)(pFVar3 + lVar25 + 0x1ac);
    this->KineticFriction = *(float *)(pFVar3 + lVar25 + 0x1b0);
    this->StrandsViscosity = *(float *)(pFVar3 + lVar25 + 0x1b4);
    *(undefined8 *)&(this->GridDimension).field0_0x0 = *(undefined8 *)(pFVar3 + lVar25 + 0x1b8);
    (this->GridDimension).field0_0x0._s_0.Z = *(int *)(pFVar3 + lVar25 + 0x1c0);
    this->CollisionRadius = *(float *)(pFVar3 + lVar25 + 0x1c4);
    this->StrandsDensity = *(float *)(pFVar3 + lVar25 + 0x254);
    this->StrandsSmoothing = *(float *)(pFVar3 + lVar25 + 600);
    this->StrandsThickness = *(float *)(pFVar3 + lVar25 + 0x25c);
    iVar12 = this->StrandsSize;
    if (0 < iVar12) {
      local_6b8 = (FRuntimeFloatCurve *)(pFVar3 + lVar25 + 0x1c8);
      local_6b0 = (FRuntimeFloatCurve *)(pFVar3 + lVar25 + 0x120);
      do {
        iVar26 = (int)uVar27;
        fVar67 = (float)((double)iVar26 / ((double)iVar12 - dVar8));
        pFVar20 = FRuntimeFloatCurve::GetRichCurveConst
                            ((FRuntimeFloatCurve *)(pFVar3 + lVar25 + 0x88));
        fVar33 = FRichCurve::Eval(pFVar20,fVar67,0.0);
        (this->ParamsScale).Elements[iVar26 + 0x20] = fVar33;
        pFVar20 = FRuntimeFloatCurve::GetRichCurveConst
                            ((FRuntimeFloatCurve *)(pFVar3 + lVar25 + 0x120));
        fVar33 = FRichCurve::Eval(pFVar20,fVar67,0.0);
        (this->ParamsScale).Elements[uVar27] = fVar33;
        pFVar20 = FRuntimeFloatCurve::GetRichCurveConst
                            ((FRuntimeFloatCurve *)(pFVar3 + lVar25 + 0x1c8));
        fVar33 = FRichCurve::Eval(pFVar20,fVar67,0.0);
        (this->ParamsScale).Elements[iVar26 + 0x40] = fVar33;
        pFVar20 = FRuntimeFloatCurve::GetRichCurveConst
                            ((FRuntimeFloatCurve *)(pFVar3 + lVar25 + 0x260));
        in_XMM2 = ZEXT816(0);
        fVar33 = FRichCurve::Eval(pFVar20,fVar67,0.0);
        uVar27 = (ulonglong)(iVar26 + 1U);
        (this->ParamsScale).Elements[iVar26 + 0x60] = fVar33;
        iVar12 = this->StrandsSize;
        param_2 = local_6a0;
        this_03 = local_6a8;
      } while ((int)(iVar26 + 1U) < iVar12);
    }
    this->NumStrands = param_2->NumCurves;
    this->LocalSimulation = false;
    *&(this->BoneTransform).Rotation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *&(this->BoneTransform).Rotation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(this->BoneTransform).Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    *&(this->BoneTransform).Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    *&(this->BoneTransform).Scale3D.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    *&(this->BoneTransform).Scale3D.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    bVar9 = FWeakObjectPtr::IsValid(this_03);
    if (!bVar9) {
      return;
    }
    bVar9 = TWeakObjectPtr<UGroomComponent,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UGroomComponent,FWeakObjectPtr> *)this_03,(void *)0x0);
    if (bVar9) {
      return;
    }
    pUVar13 = FWeakObjectPtr::Get(this_03);
    this->LocalSimulation = (bool)pUVar13[0x26].field_0x2;
    pUVar17 = (UGroomComponent *)FWeakObjectPtr::Get(this_03);
    UGroomComponent::BuildSimulationTransform(pUVar17,&this->BoneTransform);
    dVar56 = (this->BoneTransform).Rotation.ZW.m128d_f64[0];
    dVar60 = (this->BoneTransform).Rotation.ZW.m128d_f64[1];
    dVar51 = (this->BoneTransform).Rotation.XY.m128d_f64[0];
    dVar52 = (this->BoneTransform).Rotation.XY.m128d_f64[1];
    dVar47 = dVar56 * dVar56 + dVar51 * dVar51;
    dVar50 = dVar60 * dVar60 + dVar52 * dVar52;
    auVar53._8_4_ = SUB84(dVar50,0);
    auVar53._0_8_ = dVar47;
    auVar53._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
    auVar55._0_8_ = auVar53._8_8_ + dVar47;
    auVar55._8_8_ = dVar47 + dVar50;
    auVar53 = sqrtpd(in_XMM2,auVar55);
    uVar28 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar55._0_8_);
    uVar31 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar55._8_8_);
    uVar29 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar55._0_8_);
    uVar32 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar55._8_8_);
    auVar34 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar53);
    auVar53 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar53);
    auVar35._0_8_ = uVar29 & (ulonglong)(auVar34._0_8_ * dVar51);
    uVar27 = uVar32 & (ulonglong)(auVar34._8_8_ * dVar52);
    auVar35._8_4_ = (undefined4)uVar27;
    auVar35._12_4_ = (undefined4)(uVar27 >> 0x20);
    auVar61._0_8_ = uVar28 & (ulonglong)(auVar53._0_8_ * dVar56);
    uVar27 = uVar31 & (ulonglong)(auVar53._8_8_ * dVar60);
    auVar61._8_4_ = (undefined4)uVar27;
    auVar61._12_4_ = (undefined4)(uVar27 >> 0x20);
    auVar34._4_4_ =
         ~(uint)(uVar29 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
    auVar34._0_4_ = ~(uint)uVar29 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
    auVar34._8_4_ = ~(uint)uVar32 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
    auVar34._12_4_ =
         ~(uint)(uVar32 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
    auVar48._0_4_ = ~(uint)uVar28 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
    auVar48._4_4_ =
         ~(uint)(uVar28 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
    auVar48._8_4_ = ~(uint)uVar31 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
    auVar48._12_4_ =
         ~(uint)(uVar31 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
    *(undefined1 (*) [16])(this->BoneTransform).Rotation.XY.m128d_f64 = auVar35 | auVar34;
    *(undefined1 (*) [16])(this->BoneTransform).Rotation.ZW.m128d_f64 = auVar61 | auVar48;
    UE::Math::TTransform<double>::ToMatrixWithScale
              (&this->BoneTransform,(TMatrix<double> *)local_448);
    UE::Math::TTransform<double>::ToMatrixWithScale(&this->WorldTransform,&local_248);
    if ((param_3 == 0.0) || (this->ForceReset != false)) {
      *(undefined8 *)&(this->BoneLinearVelocity).field0_0x0 =
           UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      (this->BoneLinearVelocity).field0_0x0._s_0.Z =
           UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      *(undefined8 *)&(this->BoneAngularVelocity).field0_0x0 =
           UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      (this->BoneAngularVelocity).field0_0x0._s_0.Z =
           UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      *(undefined8 *)&(this->BoneLinearAcceleration).field0_0x0 =
           UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      (this->BoneLinearAcceleration).field0_0x0._s_0.Z =
           UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      *(undefined8 *)&(this->BoneAngularAcceleration).field0_0x0 =
           UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      (this->BoneAngularAcceleration).field0_0x0._s_0.Z =
           UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    }
    else {
      UE::Math::TTransform<double>::ToMatrixWithScale(&this->PreviousBoneTransform,&local_2c8);
      pTVar21 = UE::Math::TMatrix<double>::Inverse(&local_2c8,&local_1c8);
      VectorMatrixMultiply(&local_3c8,(TMatrix<double> *)local_448,pTVar21);
      local_618.M[0][0] = local_3c8.M[0][0];
      local_618.M[0][1] = local_3c8.M[0][1];
      local_618.M[0][2] = local_3c8.M[0][2];
      local_618.M[0][3] = local_3c8.M[0][3];
      local_618.M[1][0] = local_3c8.M[1][0];
      local_618.M[1][1] = local_3c8.M[1][1];
      local_618.M[1][2] = local_3c8.M[1][2];
      local_618.M[1][3] = local_3c8.M[1][3];
      local_618.M[2][0] = local_3c8.M[2][0];
      local_618.M[2][1] = local_3c8.M[2][1];
      local_618.M[2][2] = local_3c8.M[2][2];
      local_618.M[2][3] = local_3c8.M[2][3];
      local_618.M[3][0] = local_3c8.M[3][0];
      local_618.M[3][1] = local_3c8.M[3][1];
      local_618.M[3][2] = local_3c8.M[3][2];
      local_618.M[3][3] = local_3c8.M[3][3];
      UE::Math::TTransform<double>::SetFromMatrix(local_518,&local_618);
      fVar67 = __real_3f800000;
      fVar33 = *(float *)&pUVar13[0x26].field_0x4;
      if (__real_3f800000 <= *(float *)&pUVar13[0x26].field_0x4) {
        fVar33 = __real_3f800000;
      }
      fVar74 = __real_3f800000 / param_3;
      if (fVar33 <= 0.0) {
        fVar33 = 0.0;
      }
      dVar60 = (double)fVar33;
      dVar56 = dVar8 / (double)param_3;
      auVar62._0_8_ = dVar60 * local_518[0].Translation.XY.m128d_f64[0] * dVar56;
      auVar62._8_8_ = 0;
      fVar68 = (float)(dVar60 * local_518[0].Translation.XY.m128d_f64[1] * dVar56);
      fVar45 = (float)(dVar60 * local_518[0].Translation.ZW.m128d_f64[0] * dVar56);
      (this->BoneLinearVelocity).field0_0x0._s_0.X = (float)auVar62._0_8_;
      (this->BoneLinearVelocity).field0_0x0._s_0.Y = fVar68;
      (this->BoneLinearVelocity).field0_0x0._s_0.Z = fVar45;
      fVar33 = (this->PreviousBoneLinearVelocity).field0_0x0._s_0.Z;
      fVar46 = (this->PreviousBoneLinearVelocity).field0_0x0._s_0.Y;
      (this->BoneLinearAcceleration).field0_0x0._s_0.X =
           ((this->BoneLinearVelocity).field0_0x0._s_0.X -
           (this->PreviousBoneLinearVelocity).field0_0x0._s_0.X) * fVar74;
      (this->BoneLinearAcceleration).field0_0x0._s_0.Y = (fVar68 - fVar46) * fVar74;
      (this->BoneLinearAcceleration).field0_0x0._s_0.Z = (fVar45 - fVar33) * fVar74;
      dVar56 = local_518[0].Rotation.ZW.m128d_f64[0];
      dVar60 = local_518[0].Rotation.XY.m128d_f64[0] * local_518[0].Rotation.XY.m128d_f64[0] +
               dVar56 * dVar56;
      dVar51 = local_518[0].Rotation.XY.m128d_f64[1] * local_518[0].Rotation.XY.m128d_f64[1] + 0.0;
      auVar36._8_4_ = SUB84(dVar51,0);
      auVar36._0_8_ = dVar60;
      auVar36._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
      auVar37._0_8_ = auVar36._8_8_ + dVar60;
      auVar37._8_8_ = dVar60 + dVar51;
      auVar53 = sqrtpd(auVar62,auVar37);
      uVar28 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar37._0_8_)
      ;
      uVar31 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar37._8_8_)
      ;
      auVar34 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar53);
      uVar29 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar37._0_8_)
      ;
      auVar54._0_8_ = (ulonglong)(auVar34._0_8_ * local_518[0].Rotation.XY.m128d_f64[0]) & uVar28;
      uVar27 = uVar31 & (ulonglong)(auVar34._8_8_ * local_518[0].Rotation.XY.m128d_f64[1]);
      auVar54._8_4_ = (undefined4)uVar27;
      auVar54._12_4_ = (undefined4)(uVar27 >> 0x20);
      auVar57._0_4_ = ~(uint)uVar28 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[0],0);
      auVar57._4_4_ =
           ~(uint)(uVar28 >> 0x20) &
           (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[0] >> 0x20);
      auVar57._8_4_ = ~(uint)uVar31 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[1],0);
      auVar57._12_4_ =
           ~(uint)(uVar31 >> 0x20) &
           (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[1] >> 0x20);
      local_698 = auVar54 | auVar57;
      auVar34 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar53);
      local_688 = (double)(CONCAT44(~(uint)(uVar29 >> 0x20) &
                                    (uint)((ulonglong)
                                           (double)GlobalVectorConstants::Float1000.m128_f32[2] >>
                                          0x20),
                                    ~(uint)uVar29 &
                                    SUB84((double)GlobalVectorConstants::Float1000.m128_f32[2],0)) |
                          uVar29 & (ulonglong)(auVar34._0_8_ * dVar56));
      dVar56 = __real_bff0000000000000;
      if (__real_bff0000000000000 <= local_518[0].Rotation.ZW.m128d_f64[1]) {
        uVar72 = local_518[0].Rotation.ZW.m128d_f64[1]._0_4_;
        uVar73 = local_518[0].Rotation.ZW.m128d_f64[1]._4_4_;
        if (dVar8 <= local_518[0].Rotation.ZW.m128d_f64[1]) {
          uVar72 = uVar66;
          uVar73 = (int)uVar30;
        }
        dVar56 = (double)CONCAT44(uVar73,uVar72);
      }
      dVar56 = acos(dVar56);
      auVar34 = *(undefined1 (*) [16])(this->BoneTransform).Rotation.XY.m128d_f64;
      fVar33 = *(float *)&pUVar13[0x26].field_0x8;
      if (fVar67 <= *(float *)&pUVar13[0x26].field_0x8) {
        fVar33 = fVar67;
      }
      dVar8 = (this->BoneTransform).Rotation.ZW.m128d_f64[1];
      dVar56 = dVar56 + dVar56;
      if (fVar33 <= 0.0) {
        fVar33 = 0.0;
      }
      dVar52 = (double)fVar33;
      dVar47 = dVar56 * local_688 * dVar52 * (this->BoneTransform).Scale3D.ZW.m128d_f64[0];
      dVar60 = (this->BoneTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
      auVar53 = *(undefined1 (*) [16])(this->BoneTransform).Rotation.ZW.m128d_f64;
      dVar50 = auVar53._0_8_;
      auVar55 = blendpd(auVar34,auVar53,2);
      dVar51 = (this->BoneTransform).Scale3D.XY.m128d_f64[0] *
               dVar56 * (double)local_698._0_8_ * dVar52;
      dVar52 = (this->BoneTransform).Scale3D.XY.m128d_f64[1] *
               dVar56 * (double)local_698._8_8_ * dVar52;
      uVar66 = (undefined4)((ulonglong)dVar52 >> 0x20);
      auVar69._8_4_ = SUB84(dVar52,0);
      auVar69._0_8_ = dVar51;
      auVar69._12_4_ = uVar66;
      auVar70._0_8_ = auVar69._8_8_ * auVar34._0_8_ - auVar34._8_8_ * dVar51;
      auVar70._8_8_ = dVar47 * auVar34._8_8_ - dVar50 * dVar52;
      auVar38._8_4_ = SUB84(dVar52,0);
      auVar38._0_8_ = dVar51;
      auVar38._12_4_ = uVar66;
      auVar6._8_4_ = SUB84(dVar60,0);
      auVar6._0_8_ = dVar47;
      auVar6._12_4_ = (int)((ulonglong)dVar60 >> 0x20);
      auVar34 = blendpd(auVar38,auVar6,2);
      auVar39._0_8_ = auVar34._0_8_ * dVar50 - auVar55._0_8_ * dVar47;
      auVar39._8_8_ = auVar34._8_8_ * auVar53._8_8_ - auVar55._8_8_ * dVar60;
      auVar34 = *(undefined1 (*) [16])(this->BoneTransform).Rotation.XY.m128d_f64;
      auVar55 = blendpd(auVar70,auVar39,2);
      dVar56 = auVar70._8_8_ + auVar70._8_8_;
      dVar60 = auVar39._0_8_ + auVar39._0_8_;
      uVar66 = (undefined4)((ulonglong)dVar60 >> 0x20);
      auVar71._0_8_ = auVar55._0_8_ + auVar55._0_8_;
      auVar71._8_8_ = auVar55._8_8_ + auVar55._8_8_;
      auVar63._8_4_ = SUB84(dVar60,0);
      auVar63._0_8_ = dVar56;
      auVar63._12_4_ = uVar66;
      auVar58._8_4_ = SUB84(dVar60,0);
      auVar58._0_8_ = dVar56;
      auVar58._12_4_ = uVar66;
      auVar55 = blendpd(auVar34,auVar53,2);
      auVar64._0_8_ = auVar63._8_8_ * auVar34._0_8_ - auVar34._8_8_ * dVar56;
      auVar64._8_8_ = auVar71._0_8_ * auVar34._8_8_ - dVar50 * dVar60;
      auVar34 = blendpd(auVar58,auVar71,2);
      auVar59._0_8_ = auVar34._0_8_ * dVar50 - auVar55._0_8_ * auVar71._0_8_;
      auVar59._8_8_ = auVar34._8_8_ * auVar53._8_8_ - auVar55._8_8_ * auVar71._8_8_;
      auVar40._8_4_ = SUB84(auVar64._8_8_,0);
      auVar40._0_8_ = auVar64._0_8_;
      auVar40._12_4_ = (int)((ulonglong)auVar64._8_8_ >> 0x20);
      dVar56 = dVar56 * dVar8 + dVar51 + auVar40._8_8_;
      dVar60 = dVar60 * dVar8 + dVar52 + auVar59._0_8_;
      auVar34 = blendpd(auVar64,auVar59,2);
      auVar7._4_8_ = auVar59._0_8_;
      auVar7._0_4_ = (int)((ulonglong)dVar56 >> 0x20);
      auVar41._0_8_ = auVar7._0_8_ << 0x20;
      auVar41._8_4_ = SUB84(dVar60,0);
      auVar41._12_4_ = (int)((ulonglong)dVar60 >> 0x20);
      fVar45 = (float)auVar41._8_8_ * fVar74;
      fVar46 = (float)(auVar71._0_8_ * dVar8 + dVar47 + auVar34._0_8_) * fVar74;
      (this->BoneAngularVelocity).field0_0x0._s_0.X = (float)dVar56 * fVar74;
      (this->BoneAngularVelocity).field0_0x0._s_0.Y = fVar45;
      (this->BoneAngularVelocity).field0_0x0._s_0.Z = fVar46;
      fVar33 = (this->PreviousBoneAngularVelocity).field0_0x0._s_0.Y;
      fVar67 = (this->PreviousBoneAngularVelocity).field0_0x0._s_0.Z;
      (this->BoneAngularAcceleration).field0_0x0._s_0.X =
           ((this->BoneAngularVelocity).field0_0x0._s_0.X -
           (this->PreviousBoneAngularVelocity).field0_0x0._s_0.X) * fVar74;
      (this->BoneAngularAcceleration).field0_0x0._s_0.Y = (fVar45 - fVar33) * fVar74;
      (this->BoneAngularAcceleration).field0_0x0._s_0.Z = (fVar46 - fVar67) * fVar74;
    }
    dVar56 = (this->BoneTransform).Rotation.XY.m128d_f64[1];
    fVar33 = (this->BoneLinearVelocity).field0_0x0._s_0.Z;
    dVar8 = (this->BoneTransform).Rotation.ZW.m128d_f64[0];
    dVar60 = (this->BoneTransform).Rotation.ZW.m128d_f64[1];
    (this->PreviousBoneTransform).Rotation.XY.m128d_f64[0] =
         (this->BoneTransform).Rotation.XY.m128d_f64[0];
    (this->PreviousBoneTransform).Rotation.XY.m128d_f64[1] = dVar56;
    dVar56 = (this->BoneTransform).Translation.XY.m128d_f64[0];
    dVar51 = (this->BoneTransform).Translation.XY.m128d_f64[1];
    (this->PreviousBoneTransform).Rotation.ZW.m128d_f64[0] = dVar8;
    (this->PreviousBoneTransform).Rotation.ZW.m128d_f64[1] = dVar60;
    dVar8 = (this->BoneTransform).Translation.ZW.m128d_f64[0];
    dVar60 = (this->BoneTransform).Translation.ZW.m128d_f64[1];
    (this->PreviousBoneTransform).Translation.XY.m128d_f64[0] = dVar56;
    (this->PreviousBoneTransform).Translation.XY.m128d_f64[1] = dVar51;
    dVar56 = (this->BoneTransform).Scale3D.XY.m128d_f64[0];
    dVar51 = (this->BoneTransform).Scale3D.XY.m128d_f64[1];
    (this->PreviousBoneTransform).Translation.ZW.m128d_f64[0] = dVar8;
    (this->PreviousBoneTransform).Translation.ZW.m128d_f64[1] = dVar60;
    dVar8 = (this->BoneTransform).Scale3D.ZW.m128d_f64[0];
    dVar60 = (this->BoneTransform).Scale3D.ZW.m128d_f64[1];
    (this->PreviousBoneTransform).Scale3D.XY.m128d_f64[0] = dVar56;
    (this->PreviousBoneTransform).Scale3D.XY.m128d_f64[1] = dVar51;
    *(undefined8 *)&(this->PreviousBoneLinearVelocity).field0_0x0 =
         *(undefined8 *)&(this->BoneLinearVelocity).field0_0x0;
    uVar1 = *(undefined8 *)&(this->BoneAngularVelocity).field0_0x0;
    (this->PreviousBoneLinearVelocity).field0_0x0._s_0.Z = fVar33;
    fVar33 = (this->BoneAngularVelocity).field0_0x0._s_0.Z;
    *(undefined8 *)&(this->PreviousBoneAngularVelocity).field0_0x0 = uVar1;
    (this->PreviousBoneAngularVelocity).field0_0x0._s_0.Z = fVar33;
    (this->PreviousBoneTransform).Scale3D.ZW.m128d_f64[0] = dVar8;
    (this->PreviousBoneTransform).Scale3D.ZW.m128d_f64[1] = dVar60;
    pTVar21 = UE::Math::TMatrix<double>::Inverse(&local_248,&local_148);
    VectorMatrixMultiply((TMatrix<double> *)local_348,(TMatrix<double> *)local_448,pTVar21);
    local_448._32_8_ = local_348._32_8_;
    local_448._40_8_ = local_348._40_8_;
    local_448._48_8_ = local_348._48_8_;
    local_448._56_8_ = local_348._56_8_;
    local_448._64_8_ = local_348._64_8_;
    local_448._72_8_ = local_348._72_8_;
    local_448._80_16_ = local_348._80_16_;
    local_3e8 = local_2e8;
    dStack_3e0 = dStack_2e0;
    local_3d8 = local_2d8;
    dStack_3d0 = dStack_2d0;
    local_598._32_8_ = local_348._32_8_;
    local_598._40_8_ = local_348._40_8_;
    local_598._48_8_ = local_348._48_8_;
    local_598._56_8_ = local_348._56_8_;
    local_598._64_8_ = local_348._64_8_;
    local_598._72_8_ = local_348._72_8_;
    local_598._80_16_ = local_348._80_16_;
    local_538 = local_2e8;
    dStack_530 = dStack_2e0;
    local_528 = local_2d8;
    dStack_520 = dStack_2d0;
    local_448._0_8_ = local_348._0_8_;
    local_448._8_8_ = local_348._8_8_;
    local_448._16_8_ = local_348._16_8_;
    local_448._24_8_ = local_348._24_8_;
    local_598._0_8_ = local_348._0_8_;
    local_598._8_8_ = local_348._8_8_;
    local_598._16_8_ = local_348._16_8_;
    local_598._24_8_ = local_348._24_8_;
    UE::Math::TTransform<double>::SetFromMatrix(&local_678,(TMatrix<double> *)local_598);
    (this->BoneTransform).Rotation.XY.m128d_f64[0] = local_678.Rotation.XY.m128d_f64[0];
    (this->BoneTransform).Rotation.XY.m128d_f64[1] = local_678.Rotation.XY.m128d_f64[1];
    (this->BoneTransform).Rotation.ZW.m128d_f64[0] = local_678.Rotation.ZW.m128d_f64[0];
    (this->BoneTransform).Rotation.ZW.m128d_f64[1] = local_678.Rotation.ZW.m128d_f64[1];
    (this->BoneTransform).Translation.XY.m128d_f64[0] = local_678.Translation.XY.m128d_f64[0];
    (this->BoneTransform).Translation.XY.m128d_f64[1] = local_678.Translation.XY.m128d_f64[1];
    (this->BoneTransform).Translation.ZW.m128d_f64[0] = local_678.Translation.ZW.m128d_f64[0];
    (this->BoneTransform).Translation.ZW.m128d_f64[1] = local_678.Translation.ZW.m128d_f64[1];
    (this->BoneTransform).Scale3D.XY.m128d_f64[0] = local_678.Scale3D.XY.m128d_f64[0];
    (this->BoneTransform).Scale3D.XY.m128d_f64[1] = local_678.Scale3D.XY.m128d_f64[1];
    (this->BoneTransform).Scale3D.ZW.m128d_f64[0] = local_678.Scale3D.ZW.m128d_f64[0];
    (this->BoneTransform).Scale3D.ZW.m128d_f64[1] = local_678.Scale3D.ZW.m128d_f64[1];
    dVar56 = (this->BoneTransform).Rotation.XY.m128d_f64[0];
    dVar8 = (this->BoneTransform).Rotation.XY.m128d_f64[1];
    dVar60 = (this->BoneTransform).Rotation.ZW.m128d_f64[0];
    dVar51 = (this->BoneTransform).Rotation.ZW.m128d_f64[1];
    dVar52 = dVar60 * dVar60 + dVar56 * dVar56;
    dVar47 = dVar51 * dVar51 + dVar8 * dVar8;
    auVar42._8_4_ = SUB84(dVar47,0);
    auVar42._0_8_ = dVar52;
    auVar42._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
    auVar43._0_8_ = auVar42._8_8_ + dVar52;
    auVar43._8_8_ = dVar52 + dVar47;
    uVar30 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar43._0_8_);
    uVar29 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar43._8_8_);
    uVar28 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar43._0_8_);
    uVar31 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar43._8_8_);
    auVar53 = sqrtpd(local_348._80_16_,auVar43);
    auVar34 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar53);
    auVar53 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar53);
    auVar44._0_8_ = uVar30 & (ulonglong)(auVar34._0_8_ * dVar56);
    uVar27 = uVar29 & (ulonglong)(auVar34._8_8_ * dVar8);
    auVar44._8_4_ = (undefined4)uVar27;
    auVar44._12_4_ = (undefined4)(uVar27 >> 0x20);
    auVar65._0_8_ = uVar28 & (ulonglong)(auVar53._0_8_ * dVar60);
    uVar27 = uVar31 & (ulonglong)(auVar53._8_8_ * dVar51);
    auVar65._8_4_ = (undefined4)uVar27;
    auVar65._12_4_ = (undefined4)(uVar27 >> 0x20);
    auVar5._4_4_ = ~(uint)(uVar30 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_
    ;
    auVar5._0_4_ = ~(uint)uVar30 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
    auVar5._8_4_ = ~(uint)uVar29 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
    auVar5._12_4_ =
         ~(uint)(uVar29 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
    auVar49._0_4_ = ~(uint)uVar28 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
    auVar49._4_4_ =
         ~(uint)(uVar28 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
    auVar49._8_4_ = ~(uint)uVar31 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
    auVar49._12_4_ =
         ~(uint)(uVar31 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
    *(undefined1 (*) [16])(this->BoneTransform).Rotation.XY.m128d_f64 = auVar44 | auVar5;
    *(undefined1 (*) [16])(this->BoneTransform).Rotation.ZW.m128d_f64 = auVar65 | auVar49;
    if (pUVar13[0x25].field_0x20 == '\0') {
      return;
    }
    dVar56 = *(double *)&pUVar13[0x27].field_0x10;
    (this->GravityVector).field0_0x0._s_0.X = *(double *)&pUVar13[0x27].field_0x8;
    (this->GravityVector).field0_0x0._s_0.Y = dVar56;
    (this->GravityVector).field0_0x0._s_0.Z = *(double *)&pUVar13[0x27].field_0x18;
    this->AirDrag = *(float *)&pUVar13[0x27].field_0x20;
    dVar56 = *(double *)&pUVar13[0x28].field_0x8;
    (this->AirVelocity).field0_0x0._s_0.X = *(double *)(pUVar13 + 0x28);
    (this->AirVelocity).field0_0x0._s_0.Y = dVar56;
    (this->AirVelocity).field0_0x0._s_0.Z = *(double *)&pUVar13[0x28].field_0x10;
    this->BendDamping = *(float *)&pUVar13[0x28].field_0x18;
    this->BendStiffness = *(float *)&pUVar13[0x28].field_0x1c;
    this->StretchDamping = *(float *)&pUVar13[0x28].field_0x20;
    this->StretchStiffness = *(float *)&pUVar13[0x28].field_0x24;
    this->StaticFriction = *(float *)(pUVar13 + 0x29);
    this->KineticFriction = *(float *)&pUVar13[0x29].field_0x4;
    this->StrandsViscosity = *(float *)&pUVar13[0x29].field_0x8;
    this->CollisionRadius = *(float *)&pUVar13[0x29].field_0xc;
    return;
  }
LAB_14e0f8f8a:
  ResetDatas(this);
  return;
}

