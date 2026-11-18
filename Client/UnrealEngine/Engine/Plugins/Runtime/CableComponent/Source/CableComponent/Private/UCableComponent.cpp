// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CableComponent
// Functions: 35

// StaticClass @ 14f011fe0

UClass * __cdecl UCableComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCableComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CableComponent",L"CableComponent",
               &Z_Registration_Info_UClass_UCableComponent.InnerSingleton,
               StaticRegisterNativesUCableComponent,0x760,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UCableComponent>,
               InternalVTableHelperCtorCaller<UCableComponent>,local_res8,
               UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCableComponent.InnerSingleton;
}

// UCableComponent @ 14f013850

UCableComponent * __thiscall
UCableComponent::UCableComponent(UCableComponent *this,FVTableHelper *param_1)

{
  TWeakObjectPtr<AActor,FWeakObjectPtr> *this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 local_res8;
  
  UMeshComponent::UMeshComponent((UMeshComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this_00 = &(this->AttachEndTo).OtherActor;
  (this->AttachEndTo)._padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  (this->AttachEndTo)._padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  (this->AttachEndTo)._padding_ = 0;
  (this->AttachEndTo)._padding_ = 0;
  this_00->WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_res8);
  (this->AttachEndToSocketName).ComparisonIndex = 0;
  (this->AttachEndToSocketName).Number = 0;
  this->bUseSubstepping = true;
  this->bSkipCableUpdateWhenNotVisible = false;
  this->bSkipCableUpdateWhenNotOwnerRecentlyRendered = false;
  this->bResetAfterTeleport = false;
  this->TeleportDistanceThreshold = 500.0;
  this->TeleportRotationThreshold = 0.0;
  this->bTeleportAfterReattach = false;
  (this->Particles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Particles).ArrayNum = 0;
  (this->Particles).ArrayMax = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->LastTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->LastTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->LastTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->LastTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->LastTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->LastTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->LastTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->LastTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->LastTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->LastTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->LastTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->LastTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->LastEndPointTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->LastEndPointTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->LastEndPointTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->LastEndPointTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->LastEndPointTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->LastEndPointTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->LastEndPointTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->LastEndPointTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->LastEndPointTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->LastEndPointTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->LastEndPointTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->LastEndPointTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  return this;
}

// UCableComponent @ 14f0139f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UCableComponent * __thiscall
UCableComponent::UCableComponent(UCableComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  TWeakObjectPtr<AActor,FWeakObjectPtr> *this_00;
  double dVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  undefined8 local_res8;
  
  UMeshComponent::UMeshComponent((UMeshComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this_00 = &(this->AttachEndTo).OtherActor;
  (this->AttachEndTo)._padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  (this->AttachEndTo)._padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  (this->AttachEndTo)._padding_ = 0;
  (this->AttachEndTo)._padding_ = 0;
  this_00->WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_res8);
  (this->AttachEndToSocketName).ComparisonIndex = 0;
  (this->AttachEndToSocketName).Number = 0;
  (this->Particles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Particles).ArrayNum = 0;
  (this->Particles).ArrayMax = 0;
  this->bUseSubstepping = true;
  this->bSkipCableUpdateWhenNotVisible = false;
  this->bSkipCableUpdateWhenNotOwnerRecentlyRendered = false;
  this->bResetAfterTeleport = false;
  this->TeleportDistanceThreshold = 500.0;
  this->TeleportRotationThreshold = 0.0;
  this->bTeleportAfterReattach = false;
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->LastTransform).Rotation.XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar5,0);
  auVar7._0_8_ = (double)fVar4;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(this->LastTransform).Rotation.ZW.m128d_f64 = auVar7;
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->LastTransform).Translation.XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar5,0);
  auVar9._0_8_ = (double)fVar4;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(this->LastTransform).Translation.ZW.m128d_f64 = auVar9;
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar10._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar10._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar10._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->LastTransform).Scale3D.XY.m128d_f64 = auVar10;
  auVar11._8_4_ = SUB84((double)fVar5,0);
  auVar11._0_8_ = (double)fVar4;
  auVar11._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(this->LastTransform).Scale3D.ZW.m128d_f64 = auVar11;
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar12._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar12._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar12._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->LastEndPointTransform).Rotation.XY.m128d_f64 = auVar12;
  auVar13._8_4_ = SUB84((double)fVar5,0);
  auVar13._0_8_ = (double)fVar4;
  auVar13._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(this->LastEndPointTransform).Rotation.ZW.m128d_f64 = auVar13;
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar14._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar14._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar14._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->LastEndPointTransform).Translation.XY.m128d_f64 = auVar14;
  auVar15._8_4_ = SUB84((double)fVar5,0);
  auVar15._0_8_ = (double)fVar4;
  auVar15._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(this->LastEndPointTransform).Translation.ZW.m128d_f64 = auVar15;
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar16._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar16._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar16._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->LastEndPointTransform).Scale3D.XY.m128d_f64 = auVar16;
  auVar17._8_4_ = SUB84((double)fVar5,0);
  auVar17._0_8_ = (double)fVar4;
  auVar17._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(this->LastEndPointTransform).Scale3D.ZW.m128d_f64 = auVar17;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 | 0x80;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 8;
  this->bAttachStart = true;
  this->bAttachEnd = true;
  this->CableWidth = 10.0;
  this->NumSegments = 10;
  this->NumSides = 4;
  (this->EndLocation).field0_0x0._s_0.X = 100.0;
  (this->EndLocation).field0_0x0._s_0.Y = 0.0;
  (this->EndLocation).field0_0x0._s_0.Z = 0.0;
  this->CableLength = 100.0;
  this->SubstepTime = 0.02;
  this->SolverIterations = 1;
  this->TileMaterial = 1.0;
  this->CollisionFriction = 0.2;
  this->CableGravityScale = 1.0;
  GetEndPositions(this,&this->LastStartPoint,&this->LastEndPoint);
  dVar2 = (double)this->_padding_;
  bVar3 = this->bAttachStart;
  (this->LastTransform).Rotation.XY.m128d_f64[0] = (double)this->_padding_;
  (this->LastTransform).Rotation.XY.m128d_f64[1] = dVar2;
  dVar2 = (double)this->_padding_;
  (this->LastTransform).Rotation.ZW.m128d_f64[0] = (double)this->_padding_;
  (this->LastTransform).Rotation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (double)this->_padding_;
  (this->LastTransform).Translation.XY.m128d_f64[0] = (double)this->_padding_;
  (this->LastTransform).Translation.XY.m128d_f64[1] = dVar2;
  dVar2 = (double)this->_padding_;
  (this->LastTransform).Translation.ZW.m128d_f64[0] = (double)this->_padding_;
  (this->LastTransform).Translation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (double)this->_padding_;
  (this->LastTransform).Scale3D.XY.m128d_f64[0] = (double)this->_padding_;
  (this->LastTransform).Scale3D.XY.m128d_f64[1] = dVar2;
  dVar2 = (double)this->_padding_;
  dVar18 = (double)this->_padding_;
  dVar19 = (double)this->_padding_;
  (this->LastEndPointTransform).Rotation.XY.m128d_f64[0] = (double)this->_padding_;
  (this->LastEndPointTransform).Rotation.XY.m128d_f64[1] = dVar19;
  this->bLastStartAttached = bVar3;
  dVar19 = (double)this->_padding_;
  dVar20 = (double)this->_padding_;
  bVar3 = this->bAttachEnd;
  (this->LastTransform).Scale3D.ZW.m128d_f64[0] = dVar2;
  (this->LastTransform).Scale3D.ZW.m128d_f64[1] = dVar18;
  this->bLastEndAttached = bVar3;
  dVar2 = (double)this->_padding_;
  (this->LastEndPointTransform).Rotation.ZW.m128d_f64[0] = (double)this->_padding_;
  (this->LastEndPointTransform).Rotation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (double)this->_padding_;
  dVar18 = (double)this->_padding_;
  (this->LastEndPointTransform).Translation.XY.m128d_f64[0] = dVar19;
  (this->LastEndPointTransform).Translation.XY.m128d_f64[1] = dVar20;
  dVar19 = (double)this->_padding_;
  dVar20 = (double)this->_padding_;
  (this->LastEndPointTransform).Translation.ZW.m128d_f64[0] = dVar2;
  (this->LastEndPointTransform).Translation.ZW.m128d_f64[1] = dVar18;
  dVar2 = (double)this->_padding_;
  dVar18 = (double)this->_padding_;
  (this->LastEndPointTransform).Scale3D.XY.m128d_f64[0] = dVar19;
  (this->LastEndPointTransform).Scale3D.XY.m128d_f64[1] = dVar20;
  dVar19 = (this->EndLocation).field0_0x0._s_0.X;
  dVar20 = (this->EndLocation).field0_0x0._s_0.Y;
  (this->LastEndPointTransform).Scale3D.ZW.m128d_f64[0] = dVar2;
  (this->LastEndPointTransform).Scale3D.ZW.m128d_f64[1] = dVar18;
  dVar2 = (this->EndLocation).field0_0x0._s_0.Z;
  (this->LastEndLocation).field0_0x0._s_0.X = dVar19;
  (this->LastEndLocation).field0_0x0._s_0.Y = dVar20;
  (this->LastEndLocation).field0_0x0._s_0.Z = dVar2;
  UPrimitiveComponent::SetCollisionProfileName
            ((UPrimitiveComponent *)this,UCollisionProfile::PhysicsActor_ProfileName,true);
  return this;
}

// ~UCableComponent @ 14f013f30

void __thiscall UCableComponent::~UCableComponent(UCableComponent *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  pFVar1 = (this->Particles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = (void *)(this->AttachEndTo)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UMeshComponent::~UMeshComponent((UMeshComponent *)this);
  return;
}

// ApplyWorldOffset @ 14f0146f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UCableComponent::ApplyWorldOffset(UCableComponent *this,TVector<double> *param_1,bool param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  USceneComponent::ApplyWorldOffset((USceneComponent *)this,param_1,param_2);
  iVar1 = (this->Particles).ArrayNum;
  pFVar2 = (this->Particles).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x38;
  while( true ) {
    if ((this->Particles).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FCableParticle,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar2 == pFVar3) break;
    *(double *)(pFVar2 + 8) = (param_1->field0_0x0)._s_0.X + *(double *)(pFVar2 + 8);
    *(double *)(pFVar2 + 0x10) = *(double *)(pFVar2 + 0x10) + (param_1->field0_0x0)._s_0.Y;
    *(double *)(pFVar2 + 0x18) = (param_1->field0_0x0)._s_0.Z + *(double *)(pFVar2 + 0x18);
    *(double *)(pFVar2 + 0x20) = *(double *)(pFVar2 + 0x20) + (param_1->field0_0x0)._s_0.X;
    *(double *)(pFVar2 + 0x28) = *(double *)(pFVar2 + 0x28) + (param_1->field0_0x0)._s_0.Y;
    *(double *)(pFVar2 + 0x30) = (param_1->field0_0x0)._s_0.Z + *(double *)(pFVar2 + 0x30);
    pFVar2 = pFVar2 + 0x38;
  }
  return;
}

// CalcBounds @ 14f0152d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TBoxSphereBounds<double,double> * __thiscall
UCableComponent::CalcBounds
          (UCableComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  bool bVar15;
  bool bVar16;
  TBoxSphereBounds<double,double> *pTVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar37;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  uint uVar38;
  uint uVar42;
  uint uVar43;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  uint uVar44;
  undefined4 uVar45;
  double dVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined4 uVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  undefined1 local_1d8 [16];
  TVector<double>_u_0 local_1c8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  undefined8 local_198;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_178 [16];
  double local_168;
  TMatrix<double> local_158 [2];
  
  bVar15 = false;
  uVar18 = 0;
  local_218 = 0.0;
  dStack_210 = 0.0;
  dStack_1f0 = 0.0;
  local_1f8 = 0.0;
  local_208 = 0.0;
  dStack_200 = 0.0;
  if (0 < (this->Particles).ArrayNum) {
    lVar19 = 0;
    local_188 = 0;
    uStack_180 = 0;
    local_1d8 = ZEXT816(0);
    dVar6 = dStack_210;
    dVar7 = local_218;
    do {
      uVar38 = 0;
      if ((int)uVar18 < (this->Particles).ArrayNum) {
        uVar38 = ~uVar18 >> 0x1f;
      }
      if ((uVar38 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar4 = (code *)swi(3);
        pTVar17 = (TBoxSphereBounds<double,double> *)(*pcVar4)();
        return pTVar17;
      }
      pFVar3 = (this->Particles).AllocatorInstance.Data;
      dVar46 = (double)this->_padding_ *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar50 = (double)this->_padding_ *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      uVar45 = (undefined4)((ulonglong)dVar50 >> 0x20);
      dVar5 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0]
      ;
      dVar8 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1]
      ;
      pFVar1 = pFVar3 + lVar19 + 8;
      dVar24 = *(double *)(pFVar3 + lVar19 + 0x18) - (double)this->_padding_;
      dVar11 = *(double *)pFVar1 - (double)this->_padding_;
      dVar12 = *(double *)(pFVar1 + 8) - (double)this->_padding_;
      uVar54 = (undefined4)((ulonglong)dVar12 >> 0x20);
      auVar34._8_4_ = SUB84(dVar50,0);
      auVar34._0_8_ = dVar46;
      auVar34._12_4_ = uVar45;
      auVar39._8_4_ = SUB84(dVar50,0);
      auVar39._0_8_ = dVar46;
      auVar39._12_4_ = uVar45;
      dVar37 = auVar34._8_8_;
      auVar55._8_4_ = SUB84(dVar12,0);
      auVar55._0_8_ = dVar11;
      auVar55._12_4_ = uVar54;
      auVar48._8_4_ = SUB84(dVar8,0);
      auVar48._0_8_ = dVar5;
      auVar48._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      auVar40 = blendpd(auVar39,auVar48,2);
      auVar25._8_4_ = SUB84(dVar5,0);
      auVar25._0_8_ = dVar37;
      auVar25._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      auVar31._8_4_ = SUB84(dVar12,0);
      auVar31._0_8_ = dVar11;
      auVar31._12_4_ = uVar54;
      auVar56._0_8_ = auVar55._8_8_ * dVar46 - dVar37 * dVar11;
      auVar56._8_8_ = dVar24 * dVar50 - auVar25._8_8_ * dVar12;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = dVar24;
      auVar32 = blendpd(auVar31,auVar13,2);
      auVar33._0_8_ = auVar32._0_8_ * dVar5 - auVar40._0_8_ * dVar24;
      auVar33._8_8_ = auVar32._8_8_ * dVar8 - auVar40._8_8_ * 0.0;
      dVar9 = auVar56._8_8_ + auVar56._8_8_;
      dVar10 = auVar33._0_8_ + auVar33._0_8_;
      uVar45 = SUB84(dVar10,0);
      uVar54 = (undefined4)((ulonglong)dVar10 >> 0x20);
      auVar32 = blendpd(auVar56,auVar33,2);
      auVar57._0_8_ = auVar32._0_8_ + auVar32._0_8_;
      auVar57._8_8_ = auVar32._8_8_ + auVar32._8_8_;
      auVar51._8_4_ = uVar45;
      auVar51._0_8_ = dVar9;
      auVar51._12_4_ = uVar54;
      auVar26._8_4_ = uVar45;
      auVar26._0_8_ = dVar9;
      auVar26._12_4_ = uVar54;
      auVar32._0_8_ = this->_padding_;
      auVar32._8_8_ = this->_padding_;
      auVar47._8_4_ = uVar45;
      auVar47._0_8_ = dVar9;
      auVar47._12_4_ = uVar54;
      auVar52._0_8_ = auVar51._8_8_ * dVar46 - dVar9 * dVar37;
      auVar52._8_8_ = auVar57._0_8_ * dVar50 - auVar26._8_8_ * dVar5;
      auVar48 = blendpd(auVar47,auVar57,2);
      auVar27._8_4_ = SUB84(auVar57._8_8_,0);
      auVar27._0_8_ = auVar57._0_8_;
      auVar27._12_4_ = (int)((ulonglong)auVar57._8_8_ >> 0x20);
      auVar49._0_8_ = auVar48._0_8_ * dVar5 - auVar57._0_8_ * auVar40._0_8_;
      auVar49._8_8_ = auVar48._8_8_ * dVar8 - auVar27._8_8_ * auVar40._8_8_;
      uVar2 = this->_padding_;
      auVar41._0_8_ =
           (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar41._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_ & _UNK_15061cc88;
      auVar41._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_ & _UNK_15061cc8c;
      lVar20 = -(ulonglong)
                ((double)CONCAT44((uint)((ulonglong)auVar32._0_8_ >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  (uint)auVar32._0_8_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                                 ) <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
      lVar22 = -(ulonglong)
                ((double)CONCAT44((uint)((ulonglong)auVar32._8_8_ >> 0x20) & _UNK_15061cc8c,
                                  (uint)auVar32._8_8_ & _UNK_15061cc88) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
      auVar32 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar32);
      auVar28._8_4_ = SUB84(auVar52._8_8_,0);
      auVar28._0_8_ = auVar52._0_8_;
      auVar28._12_4_ = (int)((ulonglong)auVar52._8_8_ >> 0x20);
      auVar40._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar40._0_8_ = uVar2;
      auVar40._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar40 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar40);
      lVar21 = -(ulonglong)(auVar41._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[2])
      ;
      lVar23 = -(ulonglong)(auVar41._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[3])
      ;
      local_218 = (double)CONCAT44(~(uint)((ulonglong)lVar20 >> 0x20) & auVar32._4_4_,
                                   ~(uint)lVar20 & auVar32._0_4_) *
                  (dVar9 * dVar8 + dVar11 + auVar28._8_8_);
      dStack_210 = (double)CONCAT44(~(uint)((ulonglong)lVar22 >> 0x20) & auVar32._12_4_,
                                    ~(uint)lVar22 & auVar32._8_4_) *
                   (dVar10 * dVar8 + dVar12 + auVar49._0_8_);
      uVar45 = SUB84(dStack_210,0);
      uVar54 = (undefined4)((ulonglong)dStack_210 >> 0x20);
      uVar38 = (uint)lVar21;
      uVar42 = (uint)((ulonglong)lVar21 >> 0x20);
      uVar43 = (uint)lVar23;
      uVar44 = (uint)((ulonglong)lVar23 >> 0x20);
      auVar35._0_4_ = ~uVar38 & auVar40._0_4_;
      auVar35._4_4_ = ~uVar42 & auVar40._4_4_;
      auVar35._8_4_ = ~uVar43 & auVar40._8_4_;
      auVar35._12_4_ = ~uVar44 & auVar40._12_4_;
      auVar29._0_4_ = (uint)local_188 & uVar38;
      auVar29._4_4_ = local_188._4_4_ & uVar42;
      auVar29._8_4_ = (uint)uStack_180 & uVar43;
      auVar29._12_4_ = uStack_180._4_4_ & uVar44;
      local_178._8_4_ = uVar45;
      local_178._0_8_ = local_218;
      local_178._12_4_ = uVar54;
      auVar32 = blendpd(auVar52,auVar49,2);
      local_168 = SUB168(auVar35 | auVar29,0) * (auVar57._0_8_ * dVar8 + dVar24 + auVar32._0_8_);
      if (bVar15) {
        if (local_218 <= dVar7) {
          dVar7 = local_218;
        }
        if (local_168 <= local_208) {
          local_208 = local_168;
        }
        auVar14._4_8_ = SUB168(auVar35 | auVar29,8) * (auVar57._8_8_ * dVar8 + 0.0 + auVar32._8_8_);
        auVar14._0_4_ = (int)((ulonglong)local_218 >> 0x20);
        auVar36._0_8_ = auVar14._0_8_ << 0x20;
        auVar36._8_4_ = uVar45;
        auVar36._12_4_ = uVar54;
        dVar46 = auVar36._8_8_;
        dStack_200 = (double)local_1d8._0_8_;
        if ((double)local_1d8._0_8_ <= local_218) {
          dStack_200 = local_218;
        }
        if (dVar46 <= dVar6) {
          dVar6 = dVar46;
        }
        if (local_1f8 <= dVar46) {
          local_1f8 = dStack_210;
        }
        if (dStack_1f0 <= local_168) {
          dStack_1f0 = local_168;
        }
        local_1d8._0_8_ = dStack_200;
        local_218 = dVar7;
        dStack_210 = dVar6;
      }
      else {
        bVar15 = true;
        local_1d8._8_4_ = uVar45;
        local_1d8._0_8_ = local_218;
        local_1d8._12_4_ = uVar54;
        local_1f8 = dStack_210;
        dStack_200 = local_218;
        local_208 = local_168;
        dStack_1f0 = local_168;
      }
      uVar18 = uVar18 + 1;
      lVar19 = lVar19 + 0x38;
      dVar6 = dStack_210;
      dVar7 = local_218;
    } while ((int)uVar18 < (this->Particles).ArrayNum);
  }
  dVar6 = (double)(this->CableWidth * __real_3f000000);
  auVar30._8_8_ = 0;
  auVar30._0_8_ = __real_3fe0000000000000;
  dVar50 = (dVar6 + local_1f8) - (dStack_210 - dVar6);
  dVar46 = (dVar6 + dStack_200) - (local_218 - dVar6);
  dVar7 = (dVar6 + dStack_1f0) - (local_208 - dVar6);
  local_1a8 = dVar50 * __real_3fe0000000000000;
  local_1b0 = dVar46 * __real_3fe0000000000000;
  local_1a0 = dVar7 * __real_3fe0000000000000;
  local_1c8._s_0.Y = (dStack_210 - dVar6) + local_1a8;
  local_1c8._s_0.X = (local_218 - dVar6) + local_1b0;
  local_1c8._s_0.Z = (local_208 - dVar6) + local_1a0;
  auVar53._0_8_ = (dVar50 * dVar50 + dVar46 * dVar46 + dVar7 * dVar7) * __real_3fd0000000000000;
  auVar53._8_8_ = 0;
  auVar32 = sqrtpd(auVar30,auVar53);
  local_198 = auVar32._0_8_;
  UE::Math::TTransform<double>::ToMatrixWithScale(param_1,local_158);
  UE::Math::TBoxSphereBounds<double,double>::TransformBy
            ((TBoxSphereBounds<double,double> *)&local_1c8._s_0,__return_storage_ptr__,local_158);
  return __return_storage_ptr__;
}

// CreateRenderState_Concurrent @ 14f015e00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UCableComponent::CreateRenderState_Concurrent
          (UCableComponent *this,FRegisterComponentContext *param_1)

{
  UPrimitiveComponent::CreateRenderState_Concurrent((UPrimitiveComponent *)this,param_1);
  FRegisterComponentContext::SendRenderDynamicData(param_1,(UPrimitiveComponent *)this);
  return;
}

// CreateSceneProxy @ 14f015e30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall UCableComponent::CreateSceneProxy(UCableComponent *this)

{
  FCableSceneProxy *pFVar1;
  
  pFVar1 = ::operator_new(0x870);
  if (pFVar1 != (FCableSceneProxy *)0x0) {
    pFVar1 = FCableSceneProxy::FCableSceneProxy(pFVar1,this);
    return (FPrimitiveSceneProxy *)pFVar1;
  }
  return (FPrimitiveSceneProxy *)0x0;
}

// DoTeleportCorrections @ 14f015ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UCableComponent::DoTeleportCorrections
          (UCableComponent *this,TVector<double> *param_1,TVector<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  bool bVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  UCableComponent *pUVar16;
  UClass *pUVar17;
  double *pdVar18;
  TTransform<double> *pTVar19;
  TTransform<double> *pTVar20;
  uint uVar21;
  char cVar22;
  longlong lVar23;
  uint uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  longlong lVar27;
  uint uVar28;
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
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
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  double dVar70;
  double dVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  double dVar83;
  double dVar84;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  double dVar93;
  undefined4 uVar97;
  undefined4 uVar98;
  undefined4 uVar99;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined4 uVar100;
  double dVar101;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  float fVar106;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined4 uVar118;
  undefined4 uVar119;
  undefined4 uVar120;
  undefined4 uVar121;
  undefined4 uVar122;
  undefined4 uVar123;
  undefined4 uVar124;
  undefined4 uVar125;
  undefined4 uVar126;
  undefined4 uVar127;
  undefined4 uVar128;
  undefined4 uVar129;
  undefined4 uVar130;
  undefined4 uVar131;
  undefined4 uVar132;
  undefined4 uVar133;
  undefined4 uVar134;
  undefined4 uVar135;
  undefined4 uVar136;
  undefined4 uVar137;
  undefined1 auStack_628 [32];
  longlong local_608;
  longlong local_600;
  undefined8 local_5f8;
  undefined1 local_5e8 [32];
  undefined1 local_5c8 [16];
  double local_5b8;
  TTransform<double> local_5a8;
  double local_548;
  double dStack_540;
  double local_538;
  undefined1 local_530 [16];
  double local_520;
  undefined1 local_518 [16];
  double local_508;
  TTransform<double> local_4f8;
  TTransform<double> local_498;
  TTransform<double> local_438;
  TTransform<double> local_3d8;
  TTransform<double> local_378;
  TTransform<double> local_318;
  TTransform<double> local_2b8;
  TTransform<double> local_258;
  undefined1 local_1f8 [96];
  TTransform<double> local_198;
  TTransform<double> local_138;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_628;
  local_4f8.Rotation.XY.m128d_f64[0] = (double)this->_padding_;
  local_4f8.Rotation.XY.m128d_f64[1] = (double)this->_padding_;
  local_4f8.Rotation.ZW.m128d_f64[0] = (double)this->_padding_;
  local_4f8.Rotation.ZW.m128d_f64[1] = (double)this->_padding_;
  local_4f8.Translation.XY.m128d_f64[0] = (double)this->_padding_;
  local_4f8.Translation.XY.m128d_f64[1] = (double)this->_padding_;
  local_4f8.Translation.ZW.m128d_f64[0] = (double)this->_padding_;
  local_4f8.Translation.ZW.m128d_f64[1] = (double)this->_padding_;
  local_4f8.Scale3D.XY.m128d_f64[0] = (double)this->_padding_;
  local_4f8.Scale3D.XY.m128d_f64[1] = (double)this->_padding_;
  local_4f8.Scale3D.ZW.m128d_f64[0] = (double)this->_padding_;
  local_4f8.Scale3D.ZW.m128d_f64[1] = (double)this->_padding_;
  pUVar16 = (UCableComponent *)
            FComponentReference::GetComponent(&this->AttachEndTo,(AActor *)this->_padding_);
  if (pUVar16 == (UCableComponent *)0x0) {
LAB_14f015fa9:
    pUVar16 = this;
  }
  else {
    pUVar17 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar15 = (int)pUVar17->_padding_;
    if ((*(int *)(pUVar16->_padding_ + 0x38) < iVar15) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar16->_padding_ + 0x30) + (longlong)iVar15 * 8) !=
        &pUVar17->_padding_)) goto LAB_14f015fa9;
  }
  uVar25 = 0;
  local_5f8 = 0;
  if (this->AttachEndToSocketName == (FName)0x0) {
    local_5a8.Rotation.XY.m128d_f64[0] = (double)pUVar16->_padding_;
    local_5a8.Rotation.XY.m128d_f64[1] = (double)pUVar16->_padding_;
    local_5a8.Rotation.ZW.m128d_f64[0] = (double)pUVar16->_padding_;
    local_5a8.Rotation.ZW.m128d_f64[1] = (double)pUVar16->_padding_;
    local_5a8.Translation.XY.m128d_f64[0] = (double)pUVar16->_padding_;
    local_5a8.Translation.XY.m128d_f64[1] = (double)pUVar16->_padding_;
    local_5a8.Scale3D.XY.m128d_f64[0] = (double)pUVar16->_padding_;
    local_5a8.Scale3D.XY.m128d_f64[1] = (double)pUVar16->_padding_;
    local_5a8.Translation.ZW.m128d_f64[0] = (double)pUVar16->_padding_;
    local_5a8.Translation.ZW.m128d_f64[1] = (double)pUVar16->_padding_;
    local_5a8.Scale3D.ZW.m128d_f64[0] = (double)pUVar16->_padding_;
    local_5a8.Scale3D.ZW.m128d_f64[1] = (double)pUVar16->_padding_;
  }
  else {
    pdVar18 = (double *)
              (**(code **)(pUVar16->_padding_ + 0x520))
                        (pUVar16,local_1f8,this->AttachEndToSocketName,0);
    local_5a8.Rotation.XY.m128d_f64[0] = *pdVar18;
    local_5a8.Rotation.XY.m128d_f64[1] = pdVar18[1];
    local_5a8.Rotation.ZW.m128d_f64[0] = pdVar18[2];
    local_5a8.Rotation.ZW.m128d_f64[1] = pdVar18[3];
    local_5a8.Translation.XY.m128d_f64[0] = pdVar18[4];
    local_5a8.Translation.XY.m128d_f64[1] = pdVar18[5];
    local_5a8.Scale3D.XY.m128d_f64[0] = pdVar18[8];
    local_5a8.Scale3D.XY.m128d_f64[1] = pdVar18[9];
    local_5a8.Translation.ZW.m128d_f64[0] = pdVar18[6];
    local_5a8.Translation.ZW.m128d_f64[1] = pdVar18[7];
    local_5a8.Scale3D.ZW.m128d_f64[0] = pdVar18[10];
    local_5a8.Scale3D.ZW.m128d_f64[1] = pdVar18[0xb];
  }
  bVar14 = this->bAttachStart;
  if ((bVar14 == false) || (this->bLastStartAttached != false)) {
    cVar22 = this->bAttachEnd;
    if (((bool)cVar22 == false) || (this->bLastEndAttached != false)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
  }
  else {
    cVar22 = this->bAttachEnd;
    bVar12 = true;
  }
  if ((bVar14 == this->bLastStartAttached) && ((bool)cVar22 == this->bLastEndAttached)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if ((bVar14 == false) && (cVar22 == '\0')) goto LAB_14f016ef5;
  if ((!bVar12) || (this->bTeleportAfterReattach == false)) {
    dVar93 = (this->LastStartPoint).field0_0x0._s_0.X - (param_1->field0_0x0)._s_0.X;
    dVar29 = (this->LastStartPoint).field0_0x0._s_0.Y - (param_1->field0_0x0)._s_0.Y;
    dVar101 = (this->LastStartPoint).field0_0x0._s_0.Z - (param_1->field0_0x0)._s_0.Z;
    dVar70 = (this->LastEndPoint).field0_0x0._s_0.X - (param_2->field0_0x0)._s_0.X;
    dVar50 = (this->LastEndPoint).field0_0x0._s_0.Y - (param_2->field0_0x0)._s_0.Y;
    dVar83 = (this->LastEndPoint).field0_0x0._s_0.Z - (param_2->field0_0x0)._s_0.Z;
    fVar106 = this->TeleportDistanceThreshold * this->TeleportDistanceThreshold;
    if ((fVar106 <= 0.0) ||
       (((float)(dVar29 * dVar29 + dVar93 * dVar93 + dVar101 * dVar101) <= fVar106 &&
        ((float)(dVar50 * dVar50 + dVar70 * dVar70 + dVar83 * dVar83) <= fVar106)))) {
      if ((bVar13) || (((this->bAttachStart != false && (cVar22 != '\0')) && (pUVar16 != this))))
      goto LAB_14f016ef5;
      pTVar20 = &local_5a8;
      if (cVar22 == '\0') {
        pTVar20 = &local_4f8;
      }
      auVar113 = *(undefined1 (*) [16])(pTVar20->Rotation).ZW.m128d_f64;
      pTVar19 = &this->LastEndPointTransform;
      if (cVar22 == '\0') {
        pTVar19 = &this->LastTransform;
      }
      auVar53 = *(undefined1 (*) [16])(pTVar19->Rotation).ZW.m128d_f64;
      local_498.Translation.XY.m128d_f64[0] = (pTVar19->Translation).XY.m128d_f64[0];
      local_498.Translation.XY.m128d_f64[1] = (pTVar19->Translation).XY.m128d_f64[1];
      local_498.Translation.ZW.m128d_f64[0] = (pTVar19->Translation).ZW.m128d_f64[0];
      local_498.Translation.ZW.m128d_f64[1] = (pTVar19->Translation).ZW.m128d_f64[1];
      local_498.Scale3D.XY.m128d_f64[0] = (pTVar19->Scale3D).XY.m128d_f64[0];
      local_498.Scale3D.XY.m128d_f64[1] = (pTVar19->Scale3D).XY.m128d_f64[1];
      local_498.Scale3D.ZW.m128d_f64[0] = (pTVar19->Scale3D).ZW.m128d_f64[0];
      local_498.Scale3D.ZW.m128d_f64[1] = (pTVar19->Scale3D).ZW.m128d_f64[1];
      auVar8._4_8_ = local_498.Scale3D.XY.m128d_f64[1];
      auVar8._0_4_ = auVar113._4_4_;
      auVar94._0_8_ = auVar8._0_8_ << 0x20;
      auVar94._8_4_ = auVar113._8_4_;
      auVar94._12_4_ = auVar113._12_4_;
      auVar9._4_8_ = local_498.Scale3D.ZW.m128d_f64[1];
      auVar9._0_4_ = auVar53._4_4_;
      auVar51._0_8_ = auVar9._0_8_ << 0x20;
      auVar51._8_4_ = auVar53._8_4_;
      auVar51._12_4_ = auVar53._12_4_;
      dVar29 = auVar51._8_8_ * auVar94._8_8_ + auVar53._0_8_ * auVar113._0_8_ +
               (pTVar19->Rotation).XY.m128d_f64[0] * (pTVar20->Rotation).XY.m128d_f64[0] +
               (pTVar19->Rotation).XY.m128d_f64[1] * (pTVar20->Rotation).XY.m128d_f64[1];
      dVar50 = (dVar29 + dVar29) * dVar29 - __real_3ff0000000000000;
      dVar29 = __real_bff0000000000000;
      if ((__real_bff0000000000000 <= dVar50) &&
         (dVar29 = dVar50, __real_3ff0000000000000 <= dVar50)) {
        dVar29 = __real_3ff0000000000000;
      }
      fVar106 = this->TeleportRotationThreshold;
      if ((fVar106 <= 0.0) ||
         (dVar29 = acos(dVar29),
         (float)((uint)(float)dVar29 & __xmm_7fffffff7fffffff7fffffff7fffffff) * __real_42652ee0 <=
         fVar106)) goto LAB_14f016ef5;
    }
  }
  local_5c8._0_8_ =
       (this->EndLocation).field0_0x0._s_0.X - (this->LastEndLocation).field0_0x0._s_0.X;
  dVar29 = (this->EndLocation).field0_0x0._s_0.Y - (this->LastEndLocation).field0_0x0._s_0.Y;
  local_5b8 = (this->EndLocation).field0_0x0._s_0.Z - (this->LastEndLocation).field0_0x0._s_0.Z;
  local_5c8._8_8_ = dVar29;
  if ((bVar13) || (this->bResetAfterTeleport != false)) {
LAB_14f016da8:
    dVar29 = (param_2->field0_0x0)._s_0.X;
    dVar50 = (param_2->field0_0x0)._s_0.Y;
    dVar70 = (param_2->field0_0x0)._s_0.Z;
    dVar83 = (param_1->field0_0x0)._s_0.X;
    dVar93 = (param_1->field0_0x0)._s_0.Y;
    dVar101 = (param_1->field0_0x0)._s_0.Z;
    uVar26 = uVar25;
    if (-1 < this->NumSegments) {
      do {
        iVar15 = (this->Particles).ArrayNum;
        local_600 = (longlong)iVar15;
        uVar24 = (uint)uVar26;
        uVar21 = 0;
        if ((int)uVar24 < iVar15) {
          uVar21 = ~uVar24 >> 0x1f;
        }
        if (uVar21 == 0) {
          local_608 = (longlong)(int)uVar24;
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar14) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        pFVar1 = (this->Particles).AllocatorInstance.Data;
        dVar84 = (double)((float)(int)uVar24 / (float)this->NumSegments);
        dVar71 = dVar84 * (dVar29 - dVar83) + (param_1->field0_0x0)._s_0.X;
        dVar30 = dVar84 * (dVar50 - dVar93) + (param_1->field0_0x0)._s_0.Y;
        dVar84 = dVar84 * (dVar70 - dVar101) + (param_1->field0_0x0)._s_0.Z;
        *(double *)(pFVar1 + uVar25 + 8) = dVar71;
        *(double *)(pFVar1 + uVar25 + 8 + 8) = dVar30;
        *(double *)(pFVar1 + uVar25 + 0x20) = dVar71;
        *(double *)(pFVar1 + uVar25 + 0x20 + 8) = dVar30;
        *(double *)(pFVar1 + uVar25 + 0x18) = dVar84;
        *(double *)(pFVar1 + uVar25 + 0x30) = dVar84;
        uVar25 = uVar25 + 0x38;
        uVar26 = (ulonglong)(uVar24 + 1);
      } while ((int)(uVar24 + 1) <= this->NumSegments);
    }
    goto LAB_14f016ef5;
  }
  if (this->bAttachStart == false) {
LAB_14f016802:
    pTVar20 = &local_4f8;
    if (pUVar16 != this) {
      pTVar20 = &local_5a8;
    }
    pTVar19 = &this->LastTransform;
    local_498.Translation.XY.m128d_f64[0] = (pTVar20->Translation).XY.m128d_f64[0];
    local_498.Translation.XY.m128d_f64[1] = (pTVar20->Translation).XY.m128d_f64[1];
    local_498.Translation.ZW.m128d_f64[0] = (pTVar20->Translation).ZW.m128d_f64[0];
    local_498.Translation.ZW.m128d_f64[1] = (pTVar20->Translation).ZW.m128d_f64[1];
    local_498.Rotation.XY.m128d_f64 = *&(pTVar20->Rotation).XY.m128d_f64;
    local_498.Rotation.ZW.m128d_f64 = *&(pTVar20->Rotation).ZW.m128d_f64;
    local_498.Scale3D.XY.m128d_f64[0] = (pTVar20->Scale3D).XY.m128d_f64[0];
    local_498.Scale3D.XY.m128d_f64[1] = (pTVar20->Scale3D).XY.m128d_f64[1];
    local_498.Scale3D.ZW.m128d_f64[0] = (pTVar20->Scale3D).ZW.m128d_f64[0];
    local_498.Scale3D.ZW.m128d_f64[1] = (pTVar20->Scale3D).ZW.m128d_f64[1];
    if (pUVar16 != this) {
      pTVar19 = &this->LastEndPointTransform;
    }
    auVar108._0_8_ = local_5b8 * local_498.Scale3D.ZW.m128d_f64[0];
    auVar108._8_8_ = local_498.Scale3D.ZW.m128d_f64[1] * 0.0;
    dVar93 = local_498.Rotation.ZW.m128d_f64[1];
    auVar94 = blendpd((undefined1  [16])local_498.Rotation.XY.m128d_f64,
                      (undefined1  [16])local_498.Rotation.ZW.m128d_f64,2);
    dVar70 = local_498.Rotation.XY.m128d_f64[1];
    local_5c8._8_4_ = SUB84(dVar29,0);
    local_5c8._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
    dVar50 = (double)local_5c8._0_8_ * local_498.Scale3D.XY.m128d_f64[0];
    dVar29 = dVar29 * local_498.Scale3D.XY.m128d_f64[1];
    uVar98 = (undefined4)((ulonglong)dVar29 >> 0x20);
    auVar113._8_4_ = local_498.Rotation.ZW.m128d_f64[0]._0_4_;
    auVar113._0_8_ = dVar70;
    auVar113._12_4_ = local_498.Rotation.ZW.m128d_f64[0]._4_4_;
    auVar114._8_4_ = SUB84(dVar29,0);
    auVar114._0_8_ = dVar50;
    auVar114._12_4_ = uVar98;
    auVar61._8_4_ = SUB84(dVar29,0);
    auVar61._0_8_ = dVar50;
    auVar61._12_4_ = uVar98;
    auVar53 = blendpd(auVar61,auVar108,2);
    auVar115._0_8_ = auVar114._8_8_ * (pTVar20->Rotation).XY.m128d_f64[0] - dVar70 * dVar50;
    auVar115._8_8_ = auVar108._0_8_ * (pTVar20->Rotation).XY.m128d_f64[1] - auVar113._8_8_ * dVar29;
    auVar104._8_4_ = SUB84(auVar115._8_8_,0);
    auVar104._0_8_ = auVar115._0_8_;
    auVar104._12_4_ = (int)((ulonglong)auVar115._8_8_ >> 0x20);
    auVar62._0_8_ =
         auVar53._0_8_ * local_498.Rotation.ZW.m128d_f64[0] - auVar94._0_8_ * auVar108._0_8_;
    auVar62._8_8_ = auVar53._8_8_ * dVar93 - auVar94._8_8_ * auVar108._8_8_;
    auVar113 = blendpd(auVar115,auVar62,2);
    dVar83 = auVar104._8_8_ + auVar104._8_8_;
    dVar101 = auVar62._0_8_ + auVar62._0_8_;
    auVar116._0_8_ = auVar113._0_8_ + auVar113._0_8_;
    auVar116._8_8_ = auVar113._8_8_ + auVar113._8_8_;
    uVar98 = SUB84(dVar101,0);
    auVar76._8_4_ = uVar98;
    auVar76._0_8_ = dVar83;
    uVar100 = (undefined4)((ulonglong)dVar101 >> 0x20);
    auVar76._12_4_ = uVar100;
    auVar53._8_4_ = uVar98;
    auVar53._0_8_ = dVar83;
    auVar53._12_4_ = uVar100;
    auVar63._8_4_ = uVar98;
    auVar63._0_8_ = dVar83;
    auVar63._12_4_ = uVar100;
    auVar113 = blendpd(auVar63,auVar116,2);
    auVar77._0_8_ = auVar76._8_8_ * (pTVar20->Rotation).XY.m128d_f64[0] - dVar83 * dVar70;
    auVar77._8_8_ =
         auVar116._0_8_ * (pTVar20->Rotation).XY.m128d_f64[1] -
         auVar53._8_8_ * local_498.Rotation.ZW.m128d_f64[0];
    auVar41._8_4_ = SUB84(auVar116._8_8_,0);
    auVar41._0_8_ = auVar116._0_8_;
    auVar41._12_4_ = (int)((ulonglong)auVar116._8_8_ >> 0x20);
    auVar64._0_8_ =
         auVar113._0_8_ * (pTVar20->Rotation).ZW.m128d_f64[0] - auVar116._0_8_ * auVar94._0_8_;
    auVar64._8_8_ =
         auVar113._8_8_ * (pTVar20->Rotation).ZW.m128d_f64[1] - auVar41._8_8_ * auVar94._8_8_;
    auVar42._8_4_ = SUB84(auVar77._8_8_,0);
    auVar42._0_8_ = auVar77._0_8_;
    auVar42._12_4_ = (int)((ulonglong)auVar77._8_8_ >> 0x20);
    local_548 = dVar83 * dVar93 + dVar50 + auVar42._8_8_;
    dStack_540 = dVar101 * dVar93 + dVar29 + auVar64._0_8_;
    auVar113 = blendpd(auVar77,auVar64,2);
    local_2b8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_2b8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_2b8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_2b8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    auVar10._4_8_ = local_2b8.Rotation.ZW.m128d_f64[1];
    auVar10._0_4_ = (int)((ulonglong)local_548 >> 0x20);
    auVar43._0_8_ = auVar10._0_8_ << 0x20;
    auVar43._8_4_ = SUB84(dStack_540,0);
    auVar43._12_4_ = (int)((ulonglong)dStack_540 >> 0x20);
    local_2b8.Translation.XY.m128d_f64[1] = auVar43._8_8_;
    local_538 = auVar116._0_8_ * dVar93 + auVar108._0_8_ + auVar113._0_8_;
    auVar113 = *(undefined1 (*) [16])(pTVar19->Scale3D).XY.m128d_f64;
    auVar95._0_8_ =
         (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar113._4_4_,
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar113._0_4_);
    auVar95._8_4_ = _UNK_15061cc88 & auVar113._8_4_;
    auVar95._12_4_ = _UNK_15061cc8c & auVar113._12_4_;
    local_2b8.Translation.ZW.m128d_f64[1] = 0.0;
    local_2b8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_2b8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_2b8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_2b8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    dVar29 = (double)GlobalVectorConstants::SmallNumber.m128_f32[0];
    dVar50 = (double)GlobalVectorConstants::SmallNumber.m128_f32[1];
    dVar70 = (double)GlobalVectorConstants::SmallNumber.m128_f32[2];
    auVar53 = *(undefined1 (*) [16])(pTVar19->Scale3D).ZW.m128d_f64;
    auVar44._8_4_ = SUB84((double)GlobalVectorConstants::SmallNumber.m128_f32[3],0);
    auVar44._0_8_ = dVar70;
    auVar44._12_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::SmallNumber.m128_f32[3] >> 0x20);
    auVar65._0_8_ =
         (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar53._4_4_,
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar53._0_4_);
    auVar65._8_4_ = _UNK_15061cc88 & auVar53._8_4_;
    auVar65._12_4_ = _UNK_15061cc8c & auVar53._12_4_;
    auVar45._8_8_ = -(ulonglong)(auVar44._8_8_ < auVar65._8_8_);
    auVar45._0_8_ = -(ulonglong)(dVar70 < auVar65._0_8_);
    auVar66._8_4_ = SUB84(dVar50,0);
    auVar66._0_8_ = dVar29;
    auVar66._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
    uVar21 = movmskpd((int)&local_5a8,auVar45);
    auVar67._8_8_ = -(ulonglong)(auVar66._8_8_ < auVar95._8_8_);
    auVar67._0_8_ = -(ulonglong)(dVar29 < auVar95._0_8_);
    iVar15 = movmskpd((int)pTVar20,auVar67);
    if ((uVar21 & 0x3fffffff) == 0 && iVar15 == 0) {
      local_3d8.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
      ;
      local_3d8.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
      ;
      local_3d8.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_3d8.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_3d8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_3d8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    }
    else {
      auVar11._4_8_ = local_2b8.Translation.XY.m128d_f64[1];
      auVar11._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
      auVar78._0_8_ = auVar11._0_8_ << 0x20;
      auVar78._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar78._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar79._8_8_ = auVar78._8_8_;
      auVar79._0_8_ = auVar53._0_8_;
      dVar101 = (pTVar19->Rotation).XY.m128d_f64[0] *
                GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar30 = (pTVar19->Rotation).XY.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      uVar118 = SUB84(dVar30,0);
      uVar119 = (undefined4)((ulonglong)dVar30 >> 0x20);
      dVar83 = (pTVar19->Rotation).ZW.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar93 = (pTVar19->Rotation).ZW.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      uVar100 = (undefined4)((ulonglong)dVar93 >> 0x20);
      auVar113 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar113);
      lVar23 = -(ulonglong)
                ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar53._4_4_,
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar53._0_4_) <=
                dVar70);
      lVar27 = -(ulonglong)(auVar95._8_8_ <= dVar50);
      local_5e8._0_8_ =
           CONCAT44(~(uint)(-(ulonglong)(auVar95._0_8_ <= dVar29) >> 0x20) & auVar113._4_4_,
                    ~(uint)-(ulonglong)(auVar95._0_8_ <= dVar29) & auVar113._0_4_);
      local_5e8._8_4_ = ~(uint)lVar27 & auVar113._8_4_;
      local_5e8._12_4_ = ~(uint)((ulonglong)lVar27 >> 0x20) & auVar113._12_4_;
      dVar50 = (double)local_5e8._0_8_ * (pTVar19->Translation).XY.m128d_f64[0];
      dVar29 = (double)CONCAT44(local_5e8._12_4_,local_5e8._8_4_);
      dVar29 = dVar29 * (pTVar19->Translation).XY.m128d_f64[1];
      uVar98 = (undefined4)((ulonglong)dVar29 >> 0x20);
      auVar113 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar79);
      auVar80._8_4_ = uVar118;
      auVar80._0_8_ = dVar101;
      auVar80._12_4_ = uVar119;
      dVar70 = auVar80._8_8_;
      local_3d8.Scale3D.ZW.m128d_f64[0] =
           (double)CONCAT44(~(uint)((ulonglong)lVar23 >> 0x20) & auVar113._4_4_,
                            ~(uint)lVar23 & auVar113._0_4_);
      local_3d8.Rotation.XY.m128d_f64[1]._0_4_ = uVar118;
      local_3d8.Rotation.XY.m128d_f64[0] = dVar101;
      local_3d8.Rotation.XY.m128d_f64[1]._4_4_ = uVar119;
      local_3d8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar93,0);
      local_3d8.Rotation.ZW.m128d_f64[0] = dVar83;
      local_3d8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar100;
      auVar46._8_4_ = SUB84(dVar83,0);
      auVar46._0_8_ = dVar70;
      auVar46._12_4_ = (int)((ulonglong)dVar83 >> 0x20);
      auVar109._8_4_ = SUB84(dVar29,0);
      auVar109._0_8_ = dVar50;
      auVar109._12_4_ = uVar98;
      auVar117._0_8_ = local_3d8.Scale3D.ZW.m128d_f64[0] * (pTVar19->Translation).ZW.m128d_f64[0];
      auVar117._8_8_ = (pTVar19->Translation).ZW.m128d_f64[1] * 0.0;
      auVar105._8_4_ = uVar118;
      auVar105._0_8_ = dVar101;
      auVar105._12_4_ = uVar119;
      auVar68._8_4_ = SUB84(dVar29,0);
      auVar68._0_8_ = dVar50;
      auVar68._12_4_ = uVar98;
      auVar113 = blendpd(auVar68,auVar117,2);
      auVar110._0_8_ = auVar109._8_8_ * dVar101 - dVar70 * dVar50;
      auVar110._8_8_ = auVar117._0_8_ * dVar30 - auVar46._8_8_ * dVar29;
      auVar96._8_4_ = SUB84(auVar110._8_8_,0);
      auVar96._0_8_ = auVar110._0_8_;
      auVar96._12_4_ = (int)((ulonglong)auVar110._8_8_ >> 0x20);
      auVar7._8_4_ = SUB84(dVar93,0);
      auVar7._0_8_ = dVar83;
      auVar7._12_4_ = uVar100;
      auVar53 = blendpd(auVar105,auVar7,2);
      auVar69._0_8_ = auVar113._0_8_ * dVar83 - auVar53._0_8_ * auVar117._0_8_;
      auVar69._8_8_ = auVar113._8_8_ * dVar93 - auVar53._8_8_ * auVar117._8_8_;
      dVar71 = auVar96._8_8_ + auVar96._8_8_;
      dVar84 = auVar69._0_8_ + auVar69._0_8_;
      auVar113 = blendpd(auVar110,auVar69,2);
      auVar111._0_8_ = auVar113._0_8_ + auVar113._0_8_;
      auVar111._8_8_ = auVar113._8_8_ + auVar113._8_8_;
      uVar98 = SUB84(dVar84,0);
      auVar91._8_4_ = uVar98;
      auVar91._0_8_ = dVar71;
      uVar100 = (undefined4)((ulonglong)dVar84 >> 0x20);
      auVar91._12_4_ = uVar100;
      auVar47._8_4_ = uVar98;
      auVar47._0_8_ = dVar71;
      auVar47._12_4_ = uVar100;
      auVar81._8_4_ = uVar98;
      auVar81._0_8_ = dVar71;
      auVar81._12_4_ = uVar100;
      auVar113 = blendpd(auVar81,auVar111,2);
      auVar92._0_8_ = auVar91._8_8_ * dVar101 - dVar71 * dVar70;
      auVar92._8_8_ = auVar111._0_8_ * dVar30 - auVar47._8_8_ * dVar83;
      auVar48._8_4_ = SUB84(auVar111._8_8_,0);
      auVar48._0_8_ = auVar111._0_8_;
      auVar48._12_4_ = (int)((ulonglong)auVar111._8_8_ >> 0x20);
      auVar82._0_8_ = auVar113._0_8_ * dVar83 - auVar111._0_8_ * auVar53._0_8_;
      auVar82._8_8_ = auVar113._8_8_ * dVar93 - auVar48._8_8_ * auVar53._8_8_;
      auVar49._8_4_ = SUB84(auVar92._8_8_,0);
      auVar49._0_8_ = auVar92._0_8_;
      auVar49._12_4_ = (int)((ulonglong)auVar92._8_8_ >> 0x20);
      auVar113 = blendpd(auVar92,auVar82,2);
      local_3d8.Translation.ZW.m128d_f64[1] = 0.0;
      local_3d8.Translation.ZW.m128d_f64[0] =
           0.0 - (auVar111._0_8_ * dVar93 + auVar117._0_8_ + auVar113._0_8_);
      local_3d8.Translation.XY.m128d_f64[1] = 0.0 - (dVar84 * dVar93 + dVar29 + auVar82._0_8_);
      local_3d8.Translation.XY.m128d_f64[0] = 0.0 - (dVar71 * dVar93 + dVar50 + auVar49._8_8_);
      local_3d8.Scale3D.XY.m128d_f64[1] = (double)local_5e8._8_8_;
      local_3d8.Scale3D.XY.m128d_f64[0] = (double)local_5e8._0_8_;
      local_3d8.Scale3D.ZW.m128d_f64[1] = 0.0;
    }
    local_258.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_258.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_258.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_258.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_2b8.Translation.XY.m128d_f64[0] = local_548;
    local_2b8.Translation.ZW.m128d_f64[0] = local_538;
    local_258.Rotation.XY.m128d_f64[0] = local_2b8.Rotation.XY.m128d_f64[0];
    local_258.Rotation.XY.m128d_f64[1] = local_2b8.Rotation.XY.m128d_f64[1];
    local_258.Rotation.ZW.m128d_f64[0] = local_2b8.Rotation.ZW.m128d_f64[0];
    local_258.Rotation.ZW.m128d_f64[1] = local_2b8.Rotation.ZW.m128d_f64[1];
    local_258.Scale3D.XY.m128d_f64[0] = local_2b8.Scale3D.XY.m128d_f64[0];
    local_258.Scale3D.XY.m128d_f64[1] = local_2b8.Scale3D.XY.m128d_f64[1];
    local_258.Scale3D.ZW.m128d_f64[0] = local_2b8.Scale3D.ZW.m128d_f64[0];
    local_258.Scale3D.ZW.m128d_f64[1] = local_2b8.Scale3D.ZW.m128d_f64[1];
    UE::Math::TTransform<double>::Multiply(&local_258,&local_3d8,&local_498);
    local_378.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_378.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_378.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_378.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_378.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_378.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_378.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_378.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_378.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_378.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_378.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_378.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply(&local_378,&local_2b8,&local_258);
    uVar98 = local_378.Rotation.ZW.m128d_f64[0]._0_4_;
    uVar100 = local_378.Rotation.ZW.m128d_f64[0]._4_4_;
    uVar118 = local_378.Rotation.ZW.m128d_f64[1]._0_4_;
    uVar119 = local_378.Rotation.ZW.m128d_f64[1]._4_4_;
    uVar120 = local_378.Rotation.XY.m128d_f64[0]._0_4_;
    uVar121 = local_378.Rotation.XY.m128d_f64[0]._4_4_;
    uVar122 = local_378.Rotation.XY.m128d_f64[1]._0_4_;
    uVar123 = local_378.Rotation.XY.m128d_f64[1]._4_4_;
    uVar124 = local_378.Translation.XY.m128d_f64[0]._0_4_;
    uVar125 = local_378.Translation.XY.m128d_f64[0]._4_4_;
    uVar126 = local_378.Translation.XY.m128d_f64[1]._0_4_;
    uVar127 = local_378.Translation.XY.m128d_f64[1]._4_4_;
    uVar128 = local_378.Translation.ZW.m128d_f64[0]._0_4_;
    uVar129 = local_378.Translation.ZW.m128d_f64[0]._4_4_;
    uVar130 = local_378.Scale3D.XY.m128d_f64[0]._0_4_;
    uVar131 = local_378.Scale3D.XY.m128d_f64[0]._4_4_;
    uVar132 = local_378.Scale3D.XY.m128d_f64[1]._0_4_;
    uVar133 = local_378.Scale3D.XY.m128d_f64[1]._4_4_;
    uVar134 = local_378.Scale3D.ZW.m128d_f64[0]._0_4_;
    uVar135 = local_378.Scale3D.ZW.m128d_f64[0]._4_4_;
    uVar136 = local_378.Scale3D.ZW.m128d_f64[1]._0_4_;
    uVar137 = local_378.Scale3D.ZW.m128d_f64[1]._4_4_;
LAB_14f016484:
    iVar15 = this->NumSegments + -1;
  }
  else {
    if (cVar22 != '\0') {
      if ((0.0 < dVar29 * dVar29 + (double)local_5c8._0_8_ * (double)local_5c8._0_8_ +
                 local_5b8 * local_5b8) || (pUVar16 != this)) goto LAB_14f016da8;
      pTVar20 = UE::Math::TTransform<double>::Inverse(&this->LastTransform,&local_198);
      local_438.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_438.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_438.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_438.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_438.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_438.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_438.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_438.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_438.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_438.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_438.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_438.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      UE::Math::TTransform<double>::Multiply(&local_438,pTVar20,&local_4f8);
      uVar25 = 1;
      uVar98 = local_438.Rotation.ZW.m128d_f64[0]._0_4_;
      uVar100 = local_438.Rotation.ZW.m128d_f64[0]._4_4_;
      uVar118 = local_438.Rotation.ZW.m128d_f64[1]._0_4_;
      uVar119 = local_438.Rotation.ZW.m128d_f64[1]._4_4_;
      uVar120 = local_438.Rotation.XY.m128d_f64[0]._0_4_;
      uVar121 = local_438.Rotation.XY.m128d_f64[0]._4_4_;
      uVar122 = local_438.Rotation.XY.m128d_f64[1]._0_4_;
      uVar123 = local_438.Rotation.XY.m128d_f64[1]._4_4_;
      uVar124 = local_438.Translation.XY.m128d_f64[0]._0_4_;
      uVar125 = local_438.Translation.XY.m128d_f64[0]._4_4_;
      uVar126 = local_438.Translation.XY.m128d_f64[1]._0_4_;
      uVar127 = local_438.Translation.XY.m128d_f64[1]._4_4_;
      uVar128 = local_438.Translation.ZW.m128d_f64[0]._0_4_;
      uVar129 = local_438.Translation.ZW.m128d_f64[0]._4_4_;
      uVar130 = local_438.Scale3D.XY.m128d_f64[0]._0_4_;
      uVar131 = local_438.Scale3D.XY.m128d_f64[0]._4_4_;
      uVar132 = local_438.Scale3D.XY.m128d_f64[1]._0_4_;
      uVar133 = local_438.Scale3D.XY.m128d_f64[1]._4_4_;
      uVar134 = local_438.Scale3D.ZW.m128d_f64[0]._0_4_;
      uVar135 = local_438.Scale3D.ZW.m128d_f64[0]._4_4_;
      uVar136 = local_438.Scale3D.ZW.m128d_f64[1]._0_4_;
      uVar137 = local_438.Scale3D.ZW.m128d_f64[1]._4_4_;
      goto LAB_14f016484;
    }
    if (this->bAttachStart == false) goto LAB_14f016802;
    pTVar20 = UE::Math::TTransform<double>::Inverse(&this->LastTransform,&local_138);
    local_318.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_318.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_318.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_318.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_318.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_318.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_318.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_318.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_318.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_318.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_318.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_318.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply(&local_318,pTVar20,&local_4f8);
    iVar15 = this->NumSegments;
    uVar25 = 1;
    uVar98 = local_318.Rotation.ZW.m128d_f64[0]._0_4_;
    uVar100 = local_318.Rotation.ZW.m128d_f64[0]._4_4_;
    uVar118 = local_318.Rotation.ZW.m128d_f64[1]._0_4_;
    uVar119 = local_318.Rotation.ZW.m128d_f64[1]._4_4_;
    uVar120 = local_318.Rotation.XY.m128d_f64[0]._0_4_;
    uVar121 = local_318.Rotation.XY.m128d_f64[0]._4_4_;
    uVar122 = local_318.Rotation.XY.m128d_f64[1]._0_4_;
    uVar123 = local_318.Rotation.XY.m128d_f64[1]._4_4_;
    uVar124 = local_318.Translation.XY.m128d_f64[0]._0_4_;
    uVar125 = local_318.Translation.XY.m128d_f64[0]._4_4_;
    uVar126 = local_318.Translation.XY.m128d_f64[1]._0_4_;
    uVar127 = local_318.Translation.XY.m128d_f64[1]._4_4_;
    uVar128 = local_318.Translation.ZW.m128d_f64[0]._0_4_;
    uVar129 = local_318.Translation.ZW.m128d_f64[0]._4_4_;
    uVar130 = local_318.Scale3D.XY.m128d_f64[0]._0_4_;
    uVar131 = local_318.Scale3D.XY.m128d_f64[0]._4_4_;
    uVar132 = local_318.Scale3D.XY.m128d_f64[1]._0_4_;
    uVar133 = local_318.Scale3D.XY.m128d_f64[1]._4_4_;
    uVar134 = local_318.Scale3D.ZW.m128d_f64[0]._0_4_;
    uVar135 = local_318.Scale3D.ZW.m128d_f64[0]._4_4_;
    uVar136 = local_318.Scale3D.ZW.m128d_f64[1]._0_4_;
    uVar137 = local_318.Scale3D.ZW.m128d_f64[1]._4_4_;
  }
  if ((longlong)uVar25 <= (longlong)iVar15) {
    auVar107._4_4_ = uVar121;
    auVar107._0_4_ = uVar120;
    auVar107._8_4_ = uVar122;
    auVar107._12_4_ = uVar123;
    auVar112._4_4_ = uVar121;
    auVar112._0_4_ = uVar120;
    auVar112._8_4_ = uVar122;
    auVar112._12_4_ = uVar123;
    dVar29 = (double)CONCAT44(uVar119,uVar118);
    lVar23 = uVar25 * 0x38;
    dVar50 = (double)CONCAT44(uVar100,uVar98);
    dVar70 = auVar107._8_8_;
    auVar6._4_4_ = uVar100;
    auVar6._0_4_ = uVar98;
    auVar6._8_4_ = uVar118;
    auVar6._12_4_ = uVar119;
    auVar113 = blendpd(auVar112,auVar6,2);
    lVar27 = ((longlong)iVar15 - uVar25) + 1;
    do {
      iVar15 = (this->Particles).ArrayNum;
      local_600 = (longlong)iVar15;
      uVar24 = (uint)uVar25;
      uVar28 = ~uVar24 >> 0x1f;
      uVar21 = 0;
      if ((int)uVar24 < iVar15) {
        uVar21 = uVar28;
      }
      if (uVar21 == 0) {
        local_608 = (longlong)(int)uVar24;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar14) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar2 = (this->Particles).AllocatorInstance.Data;
      iVar15 = (this->Particles).ArrayNum;
      local_600 = (longlong)iVar15;
      pFVar1 = pFVar2 + lVar23 + 8;
      dVar83 = *(double *)pFVar1 * (double)CONCAT44(uVar131,uVar130);
      dVar93 = *(double *)(pFVar1 + 8) * (double)CONCAT44(uVar133,uVar132);
      uVar21 = 0;
      if ((int)uVar24 < iVar15) {
        uVar21 = uVar28;
      }
      auVar102._0_8_ = *(double *)(pFVar2 + lVar23 + 0x18) * (double)CONCAT44(uVar135,uVar134);
      auVar102._8_8_ = (double)CONCAT44(uVar137,uVar136) * 0.0;
      uVar97 = SUB84(dVar93,0);
      auVar85._8_4_ = uVar97;
      auVar85._0_8_ = dVar83;
      uVar99 = (undefined4)((ulonglong)dVar93 >> 0x20);
      auVar85._12_4_ = uVar99;
      auVar31._8_4_ = uVar97;
      auVar31._0_8_ = dVar83;
      auVar31._12_4_ = uVar99;
      auVar52._8_4_ = uVar97;
      auVar52._0_8_ = dVar83;
      auVar52._12_4_ = uVar99;
      auVar53 = blendpd(auVar52,auVar102,2);
      auVar86._0_8_ = auVar85._8_8_ * (double)CONCAT44(uVar121,uVar120) - dVar83 * dVar70;
      auVar86._8_8_ = auVar102._0_8_ * (double)CONCAT44(uVar123,uVar122) - auVar31._8_8_ * dVar50;
      auVar32._8_4_ = SUB84(auVar102._8_8_,0);
      auVar32._0_8_ = auVar102._0_8_;
      auVar32._12_4_ = (int)((ulonglong)auVar102._8_8_ >> 0x20);
      dVar71 = auVar113._0_8_;
      dVar84 = auVar113._8_8_;
      auVar54._0_8_ = auVar53._0_8_ * (double)CONCAT44(uVar100,uVar98) - auVar102._0_8_ * dVar71;
      auVar54._8_8_ = auVar53._8_8_ * (double)CONCAT44(uVar119,uVar118) - auVar32._8_8_ * dVar84;
      auVar53 = blendpd(auVar86,auVar54,2);
      dVar101 = auVar86._8_8_ + auVar86._8_8_;
      dVar30 = auVar54._0_8_ + auVar54._0_8_;
      uVar97 = SUB84(dVar30,0);
      uVar99 = (undefined4)((ulonglong)dVar30 >> 0x20);
      auVar87._0_8_ = auVar53._0_8_ + auVar53._0_8_;
      auVar87._8_8_ = auVar53._8_8_ + auVar53._8_8_;
      auVar72._8_4_ = uVar97;
      auVar72._0_8_ = dVar101;
      auVar72._12_4_ = uVar99;
      auVar33._8_4_ = uVar97;
      auVar33._0_8_ = dVar101;
      auVar33._12_4_ = uVar99;
      auVar55._8_4_ = uVar97;
      auVar55._0_8_ = dVar101;
      auVar55._12_4_ = uVar99;
      auVar53 = blendpd(auVar55,auVar87,2);
      auVar73._0_8_ = auVar72._8_8_ * (double)CONCAT44(uVar121,uVar120) - dVar101 * dVar70;
      auVar73._8_8_ = auVar87._0_8_ * (double)CONCAT44(uVar123,uVar122) - auVar33._8_8_ * dVar50;
      auVar34._8_4_ = SUB84(auVar87._8_8_,0);
      auVar34._0_8_ = auVar87._0_8_;
      auVar34._12_4_ = (int)((ulonglong)auVar87._8_8_ >> 0x20);
      auVar56._0_8_ = auVar53._0_8_ * (double)CONCAT44(uVar100,uVar98) - auVar87._0_8_ * dVar71;
      auVar56._8_8_ = auVar53._8_8_ * (double)CONCAT44(uVar119,uVar118) - auVar34._8_8_ * dVar84;
      auVar35._8_4_ = SUB84(auVar73._8_8_,0);
      auVar35._0_8_ = auVar73._0_8_;
      auVar35._12_4_ = (int)((ulonglong)auVar73._8_8_ >> 0x20);
      auVar53 = blendpd(auVar73,auVar56,2);
      dVar83 = dVar101 * dVar29 + dVar83 + auVar35._8_8_ + (double)CONCAT44(uVar125,uVar124);
      dVar93 = dVar30 * (double)CONCAT44(uVar119,uVar118) + dVar93 + auVar56._0_8_ +
               (double)CONCAT44(uVar127,uVar126);
      uVar97 = SUB84(dVar93,0);
      uVar99 = (undefined4)((ulonglong)dVar93 >> 0x20);
      local_520 = auVar87._0_8_ * dVar29 + auVar102._0_8_ + auVar53._0_8_ +
                  (double)CONCAT44(uVar129,uVar128);
      local_530._8_4_ = uVar97;
      local_530._0_8_ = dVar83;
      local_530._12_4_ = uVar99;
      local_5e8._0_8_ = local_520;
      dVar93 = local_520;
      if (uVar21 == 0) {
        local_608 = (longlong)(int)uVar24;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar14) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        dVar93 = (double)local_5e8._0_8_;
      }
      pFVar1 = (this->Particles).AllocatorInstance.Data;
      auVar4._8_4_ = uVar97;
      auVar4._0_8_ = dVar83;
      auVar4._12_4_ = uVar99;
      *(undefined1 (*) [16])(pFVar1 + lVar23 + 8) = auVar4;
      *(double *)(pFVar1 + lVar23 + 0x18) = dVar93;
      iVar15 = (this->Particles).ArrayNum;
      local_600 = (longlong)iVar15;
      uVar21 = 0;
      if ((int)uVar24 < iVar15) {
        uVar21 = uVar28;
      }
      if (uVar21 == 0) {
        local_608 = (longlong)(int)uVar24;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar14) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar2 = (this->Particles).AllocatorInstance.Data;
      iVar15 = (this->Particles).ArrayNum;
      local_600 = (longlong)iVar15;
      pFVar1 = pFVar2 + lVar23 + 0x20;
      dVar83 = *(double *)pFVar1 * (double)CONCAT44(uVar131,uVar130);
      dVar93 = *(double *)(pFVar1 + 8) * (double)CONCAT44(uVar133,uVar132);
      uVar21 = 0;
      if ((int)uVar24 < iVar15) {
        uVar21 = ~uVar24 >> 0x1f;
      }
      auVar103._0_8_ = *(double *)(pFVar2 + lVar23 + 0x30) * (double)CONCAT44(uVar135,uVar134);
      auVar103._8_8_ = (double)CONCAT44(uVar137,uVar136) * 0.0;
      uVar97 = SUB84(dVar93,0);
      auVar88._8_4_ = uVar97;
      auVar88._0_8_ = dVar83;
      uVar99 = (undefined4)((ulonglong)dVar93 >> 0x20);
      auVar88._12_4_ = uVar99;
      auVar36._8_4_ = uVar97;
      auVar36._0_8_ = dVar83;
      auVar36._12_4_ = uVar99;
      auVar57._8_4_ = uVar97;
      auVar57._0_8_ = dVar83;
      auVar57._12_4_ = uVar99;
      auVar53 = blendpd(auVar57,auVar103,2);
      auVar89._0_8_ = auVar88._8_8_ * (double)CONCAT44(uVar121,uVar120) - dVar83 * dVar70;
      auVar89._8_8_ = auVar103._0_8_ * (double)CONCAT44(uVar123,uVar122) - auVar36._8_8_ * dVar50;
      auVar37._8_4_ = SUB84(auVar103._8_8_,0);
      auVar37._0_8_ = auVar103._0_8_;
      auVar37._12_4_ = (int)((ulonglong)auVar103._8_8_ >> 0x20);
      auVar58._0_8_ = auVar53._0_8_ * (double)CONCAT44(uVar100,uVar98) - auVar103._0_8_ * dVar71;
      auVar58._8_8_ = auVar53._8_8_ * (double)CONCAT44(uVar119,uVar118) - auVar37._8_8_ * dVar84;
      auVar53 = blendpd(auVar89,auVar58,2);
      dVar101 = auVar89._8_8_ + auVar89._8_8_;
      dVar30 = auVar58._0_8_ + auVar58._0_8_;
      uVar97 = SUB84(dVar30,0);
      uVar99 = (undefined4)((ulonglong)dVar30 >> 0x20);
      auVar90._0_8_ = auVar53._0_8_ + auVar53._0_8_;
      auVar90._8_8_ = auVar53._8_8_ + auVar53._8_8_;
      auVar74._8_4_ = uVar97;
      auVar74._0_8_ = dVar101;
      auVar74._12_4_ = uVar99;
      auVar38._8_4_ = uVar97;
      auVar38._0_8_ = dVar101;
      auVar38._12_4_ = uVar99;
      auVar59._8_4_ = uVar97;
      auVar59._0_8_ = dVar101;
      auVar59._12_4_ = uVar99;
      auVar53 = blendpd(auVar59,auVar90,2);
      auVar75._0_8_ = auVar74._8_8_ * (double)CONCAT44(uVar121,uVar120) - dVar101 * dVar70;
      auVar75._8_8_ = auVar90._0_8_ * (double)CONCAT44(uVar123,uVar122) - auVar38._8_8_ * dVar50;
      auVar39._8_4_ = SUB84(auVar90._8_8_,0);
      auVar39._0_8_ = auVar90._0_8_;
      auVar39._12_4_ = (int)((ulonglong)auVar90._8_8_ >> 0x20);
      auVar60._0_8_ = auVar53._0_8_ * (double)CONCAT44(uVar100,uVar98) - auVar90._0_8_ * dVar71;
      auVar60._8_8_ = auVar53._8_8_ * (double)CONCAT44(uVar119,uVar118) - auVar39._8_8_ * dVar84;
      auVar40._8_4_ = SUB84(auVar75._8_8_,0);
      auVar40._0_8_ = auVar75._0_8_;
      auVar40._12_4_ = (int)((ulonglong)auVar75._8_8_ >> 0x20);
      auVar53 = blendpd(auVar75,auVar60,2);
      dVar83 = dVar101 * dVar29 + dVar83 + auVar40._8_8_ + (double)CONCAT44(uVar125,uVar124);
      dVar93 = dVar30 * (double)CONCAT44(uVar119,uVar118) + dVar93 + auVar60._0_8_ +
               (double)CONCAT44(uVar127,uVar126);
      uVar97 = SUB84(dVar93,0);
      uVar99 = (undefined4)((ulonglong)dVar93 >> 0x20);
      local_508 = auVar90._0_8_ * dVar29 + auVar103._0_8_ + auVar53._0_8_ +
                  (double)CONCAT44(uVar129,uVar128);
      local_518._8_4_ = uVar97;
      local_518._0_8_ = dVar83;
      local_518._12_4_ = uVar99;
      local_5e8._0_8_ = local_508;
      dVar93 = local_508;
      if (uVar21 == 0) {
        local_608 = (longlong)(int)uVar24;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar14) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        dVar93 = (double)local_5e8._0_8_;
      }
      pFVar1 = (this->Particles).AllocatorInstance.Data;
      uVar25 = (ulonglong)(uVar24 + 1);
      auVar5._8_4_ = uVar97;
      auVar5._0_8_ = dVar83;
      auVar5._12_4_ = uVar99;
      *(undefined1 (*) [16])(pFVar1 + lVar23 + 0x20) = auVar5;
      *(double *)(pFVar1 + lVar23 + 0x30) = dVar93;
      lVar23 = lVar23 + 0x38;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
  }
LAB_14f016ef5:
  bVar14 = this->bAttachStart;
  (this->LastTransform).Rotation.XY.m128d_f64[0] = local_4f8.Rotation.XY.m128d_f64[0];
  (this->LastTransform).Rotation.XY.m128d_f64[1] = local_4f8.Rotation.XY.m128d_f64[1];
  (this->LastTransform).Rotation.ZW.m128d_f64[0] = local_4f8.Rotation.ZW.m128d_f64[0];
  (this->LastTransform).Rotation.ZW.m128d_f64[1] = local_4f8.Rotation.ZW.m128d_f64[1];
  (this->LastTransform).Translation.XY.m128d_f64[0] = local_4f8.Translation.XY.m128d_f64[0];
  (this->LastTransform).Translation.XY.m128d_f64[1] = local_4f8.Translation.XY.m128d_f64[1];
  (this->LastTransform).Translation.ZW.m128d_f64[0] = local_4f8.Translation.ZW.m128d_f64[0];
  (this->LastTransform).Translation.ZW.m128d_f64[1] = local_4f8.Translation.ZW.m128d_f64[1];
  (this->LastTransform).Scale3D.XY.m128d_f64[0] = local_4f8.Scale3D.XY.m128d_f64[0];
  (this->LastTransform).Scale3D.XY.m128d_f64[1] = local_4f8.Scale3D.XY.m128d_f64[1];
  (this->LastEndPointTransform).Rotation.XY.m128d_f64[0] = local_5a8.Rotation.XY.m128d_f64[0];
  (this->LastEndPointTransform).Rotation.XY.m128d_f64[1] = local_5a8.Rotation.XY.m128d_f64[1];
  (this->LastTransform).Scale3D.ZW.m128d_f64[0] = local_4f8.Scale3D.ZW.m128d_f64[0];
  (this->LastTransform).Scale3D.ZW.m128d_f64[1] = local_4f8.Scale3D.ZW.m128d_f64[1];
  (this->LastEndPointTransform).Rotation.ZW.m128d_f64[0] = local_5a8.Rotation.ZW.m128d_f64[0];
  (this->LastEndPointTransform).Rotation.ZW.m128d_f64[1] = local_5a8.Rotation.ZW.m128d_f64[1];
  (this->LastEndPointTransform).Translation.XY.m128d_f64[0] = local_5a8.Translation.XY.m128d_f64[0];
  (this->LastEndPointTransform).Translation.XY.m128d_f64[1] = local_5a8.Translation.XY.m128d_f64[1];
  (this->LastEndPointTransform).Translation.ZW.m128d_f64[0] = local_5a8.Translation.ZW.m128d_f64[0];
  (this->LastEndPointTransform).Translation.ZW.m128d_f64[1] = local_5a8.Translation.ZW.m128d_f64[1];
  (this->LastEndPointTransform).Scale3D.XY.m128d_f64[0] = local_5a8.Scale3D.XY.m128d_f64[0];
  (this->LastEndPointTransform).Scale3D.XY.m128d_f64[1] = local_5a8.Scale3D.XY.m128d_f64[1];
  dVar50 = (this->EndLocation).field0_0x0._s_0.X;
  dVar70 = (this->EndLocation).field0_0x0._s_0.Y;
  (this->LastEndPointTransform).Scale3D.ZW.m128d_f64[0] = local_5a8.Scale3D.ZW.m128d_f64[0];
  (this->LastEndPointTransform).Scale3D.ZW.m128d_f64[1] = local_5a8.Scale3D.ZW.m128d_f64[1];
  dVar29 = (this->EndLocation).field0_0x0._s_0.Z;
  (this->LastEndLocation).field0_0x0._s_0.X = dVar50;
  (this->LastEndLocation).field0_0x0._s_0.Y = dVar70;
  (this->LastEndLocation).field0_0x0._s_0.Z = dVar29;
  dVar29 = (param_1->field0_0x0)._s_0.Y;
  (this->LastStartPoint).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->LastStartPoint).field0_0x0._s_0.Y = dVar29;
  (this->LastStartPoint).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  dVar29 = (param_2->field0_0x0)._s_0.Y;
  (this->LastEndPoint).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
  (this->LastEndPoint).field0_0x0._s_0.Y = dVar29;
  dVar29 = (param_2->field0_0x0)._s_0.Z;
  this->bLastStartAttached = bVar14;
  this->bLastEndAttached = this->bAttachEnd;
  (this->LastEndPoint).field0_0x0._s_0.Z = dVar29;
  return;
}

// DoesSocketExist @ 14f017030

bool __thiscall UCableComponent::DoesSocketExist(UCableComponent *this,FName param_1)

{
  if ((param_1 != CableEndSocketName) && (param_1 != CableStartSocketName)) {
    return false;
  }
  return true;
}

// GetAttachedActor @ 14f017be0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall UCableComponent::GetAttachedActor(UCableComponent *this)

{
  AActor *pAVar1;
  
  pAVar1 = (AActor *)FWeakObjectPtr::Get(&(this->AttachEndTo).OtherActor.WeakPtr);
  return pAVar1;
}

// GetAttachedComponent @ 14f017c00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

USceneComponent * __thiscall UCableComponent::GetAttachedComponent(UCableComponent *this)

{
  int iVar1;
  USceneComponent *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (USceneComponent *)
           FComponentReference::GetComponent(&this->AttachEndTo,(AActor *)this->_padding_);
  if (pUVar2 != (USceneComponent *)0x0) {
    pUVar3 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (USceneComponent *)0x0;
}

// GetCableParticleLocations @ 14f017c60

void __thiscall
UCableComponent::GetCableParticleLocations
          (UCableComponent *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&param_1->AllocatorInstance,0,piVar1);
  }
  pFVar9 = (this->Particles).AllocatorInstance.Data;
  iVar2 = (this->Particles).ArrayNum;
  pFVar10 = pFVar9 + 8;
  pFVar11 = pFVar9 + (longlong)iVar2 * 0x38;
  while( true ) {
    if ((this->Particles).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FCableParticle_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar9 == pFVar11) break;
    pFVar3 = (param_1->AllocatorInstance).Data;
    if ((pFVar3 <= pFVar10) && (pFVar10 < pFVar3 + (longlong)*piVar1 * 0x18)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar8 = param_1->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&param_1->AllocatorInstance,piVar1);
    }
    pFVar9 = pFVar9 + 0x38;
    param_1->ArrayNum = iVar8 + 1;
    uVar6 = *(undefined8 *)(pFVar10 + 8);
    pFVar4 = (param_1->AllocatorInstance).Data;
    pFVar3 = pFVar4 + (longlong)iVar8 * 0x18;
    *(undefined8 *)pFVar3 = *(undefined8 *)pFVar10;
    *(undefined8 *)(pFVar3 + 8) = uVar6;
    pFVar3 = pFVar10 + 0x10;
    pFVar10 = pFVar10 + 0x38;
    *(undefined8 *)(pFVar4 + (longlong)iVar8 * 0x18 + 0x10) = *(undefined8 *)pFVar3;
  }
  return;
}

// GetEndPositions @ 14f018ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UCableComponent::GetEndPositions
          (UCableComponent *this,TVector<double> *param_1,TVector<double> *param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  UCableComponent *pUVar6;
  UClass *pUVar7;
  undefined1 (*pauVar8) [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  undefined1 auVar15 [16];
  double dVar17;
  undefined1 auVar16 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  undefined4 uVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined1 local_c8 [96];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_118;
  dVar17 = (double)this->_padding_;
  dVar14 = (double)this->_padding_;
  (param_1->field0_0x0)._s_0.X = (double)this->_padding_;
  (param_1->field0_0x0)._s_0.Y = dVar17;
  (param_1->field0_0x0)._s_0.Z = dVar14;
  pUVar6 = (UCableComponent *)
           FComponentReference::GetComponent(&this->AttachEndTo,(AActor *)this->_padding_);
  if (pUVar6 != (UCableComponent *)0x0) {
    pUVar7 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar2 = (int)pUVar7->_padding_;
    if ((iVar2 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar7->_padding_)) goto LAB_14f01906b;
  }
  pUVar6 = this;
LAB_14f01906b:
  local_f8 = 0;
  if (this->AttachEndToSocketName == (FName)0x0) {
    dVar26 = (this->EndLocation).field0_0x0._s_0.Z * (double)pUVar6->_padding_;
    dVar23 = (double)pUVar6->_padding_ * 0.0;
    dVar5 = (double)pUVar6->_padding_;
    dVar14 = (double)pUVar6->_padding_ * (this->EndLocation).field0_0x0._s_0.X;
    dVar17 = (double)pUVar6->_padding_ * (this->EndLocation).field0_0x0._s_0.Y;
    uVar25 = (undefined4)((ulonglong)dVar17 >> 0x20);
    auVar29._0_8_ = pUVar6->_padding_;
    auVar29._8_8_ = pUVar6->_padding_;
    auVar10._0_8_ = pUVar6->_padding_;
    auVar10._8_8_ = pUVar6->_padding_;
    auVar10 = blendpd(auVar29,auVar10,2);
    auVar35._8_4_ = SUB84(dVar17,0);
    auVar35._0_8_ = dVar14;
    auVar35._12_4_ = uVar25;
    auVar12._8_4_ = SUB84(dVar17,0);
    auVar12._0_8_ = dVar14;
    auVar12._12_4_ = uVar25;
    auVar36._0_8_ = auVar35._8_8_ * (double)auVar29._0_8_ - (double)auVar29._8_8_ * dVar14;
    auVar36._8_8_ = dVar26 * (double)auVar29._8_8_ - (double)pUVar6->_padding_ * dVar17;
    auVar18._0_8_ = pUVar6->_padding_;
    auVar18._8_8_ = pUVar6->_padding_;
    auVar4._8_4_ = SUB84(dVar23,0);
    auVar4._0_8_ = dVar26;
    auVar4._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
    auVar29 = blendpd(auVar12,auVar4,2);
    auVar13._0_8_ = auVar29._0_8_ * (double)pUVar6->_padding_ - auVar10._0_8_ * dVar26;
    auVar13._8_8_ = auVar29._8_8_ * (double)pUVar6->_padding_ - auVar10._8_8_ * dVar23;
    auVar29 = blendpd(auVar36,auVar13,2);
    dVar23 = auVar36._8_8_ + auVar36._8_8_;
    dVar24 = auVar13._0_8_ + auVar13._0_8_;
    auVar37._0_8_ = auVar29._0_8_ + auVar29._0_8_;
    auVar37._8_8_ = auVar29._8_8_ + auVar29._8_8_;
    uVar25 = (undefined4)((ulonglong)dVar24 >> 0x20);
    auVar21._8_4_ = SUB84(dVar24,0);
    auVar21._0_8_ = dVar23;
    auVar21._12_4_ = uVar25;
    auVar10 = blendpd(auVar21,auVar37,2);
    auVar30._8_4_ = SUB84(dVar24,0);
    auVar30._0_8_ = dVar23;
    auVar30._12_4_ = uVar25;
    auVar1._0_8_ = pUVar6->_padding_;
    auVar1._8_8_ = pUVar6->_padding_;
    auVar29 = blendpd(auVar18,auVar1,2);
    auVar22._0_8_ = auVar10._0_8_ * (double)pUVar6->_padding_ - auVar29._0_8_ * auVar37._0_8_;
    auVar22._8_8_ = auVar10._8_8_ * (double)pUVar6->_padding_ - auVar29._8_8_ * auVar37._8_8_;
    auVar31._0_8_ = auVar30._8_8_ * (double)auVar18._0_8_ - (double)auVar18._8_8_ * dVar23;
    auVar31._8_8_ = auVar37._0_8_ * (double)auVar18._8_8_ - (double)pUVar6->_padding_ * dVar24;
    auVar16._8_4_ = SUB84(auVar31._8_8_,0);
    auVar16._0_8_ = auVar31._0_8_;
    auVar16._12_4_ = (int)((ulonglong)auVar31._8_8_ >> 0x20);
    auVar29 = blendpd(auVar31,auVar22,2);
    dVar14 = auVar16._8_8_ + dVar23 * dVar5 + dVar14 + (double)pUVar6->_padding_;
    dVar17 = auVar22._0_8_ + dVar24 * dVar5 + dVar17 + (double)pUVar6->_padding_;
    dVar26 = auVar29._0_8_ + auVar37._0_8_ * dVar5 + dVar26 + (double)pUVar6->_padding_;
  }
  else {
    pauVar8 = (undefined1 (*) [16])
              (**(code **)(pUVar6->_padding_ + 0x520))
                        (pUVar6,local_c8,this->AttachEndToSocketName,0);
    dVar26 = (this->EndLocation).field0_0x0._s_0.Z * *(double *)pauVar8[5];
    dVar23 = *(double *)(pauVar8[5] + 8) * 0.0;
    dVar5 = *(double *)(pauVar8[1] + 8);
    dVar14 = *(double *)pauVar8[4] * (this->EndLocation).field0_0x0._s_0.X;
    dVar17 = *(double *)(pauVar8[4] + 8) * (this->EndLocation).field0_0x0._s_0.Y;
    uVar25 = (undefined4)((ulonglong)dVar17 >> 0x20);
    auVar29 = *pauVar8;
    auVar18 = blendpd(auVar29,pauVar8[1],2);
    auVar32._8_4_ = SUB84(dVar17,0);
    auVar32._0_8_ = dVar14;
    auVar32._12_4_ = uVar25;
    auVar9._8_4_ = SUB84(dVar17,0);
    auVar9._0_8_ = dVar14;
    auVar9._12_4_ = uVar25;
    auVar33._0_8_ = auVar32._8_8_ * auVar29._0_8_ - auVar29._8_8_ * dVar14;
    auVar33._8_8_ = dVar26 * auVar29._8_8_ - *(double *)pauVar8[1] * dVar17;
    auVar29 = *pauVar8;
    auVar3._8_4_ = SUB84(dVar23,0);
    auVar3._0_8_ = dVar26;
    auVar3._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
    auVar10 = blendpd(auVar9,auVar3,2);
    auVar11._0_8_ = auVar10._0_8_ * *(double *)pauVar8[1] - auVar18._0_8_ * dVar26;
    auVar11._8_8_ = auVar10._8_8_ * *(double *)(pauVar8[1] + 8) - auVar18._8_8_ * dVar23;
    auVar10 = blendpd(auVar33,auVar11,2);
    dVar23 = auVar33._8_8_ + auVar33._8_8_;
    dVar24 = auVar11._0_8_ + auVar11._0_8_;
    auVar34._0_8_ = auVar10._0_8_ + auVar10._0_8_;
    auVar34._8_8_ = auVar10._8_8_ + auVar10._8_8_;
    uVar25 = (undefined4)((ulonglong)dVar24 >> 0x20);
    auVar19._8_4_ = SUB84(dVar24,0);
    auVar19._0_8_ = dVar23;
    auVar19._12_4_ = uVar25;
    auVar18 = blendpd(auVar19,auVar34,2);
    auVar27._8_4_ = SUB84(dVar24,0);
    auVar27._0_8_ = dVar23;
    auVar27._12_4_ = uVar25;
    auVar10 = blendpd(auVar29,pauVar8[1],2);
    auVar20._0_8_ = auVar18._0_8_ * *(double *)pauVar8[1] - auVar10._0_8_ * auVar34._0_8_;
    auVar20._8_8_ = auVar18._8_8_ * *(double *)(pauVar8[1] + 8) - auVar10._8_8_ * auVar34._8_8_;
    auVar28._0_8_ = auVar27._8_8_ * auVar29._0_8_ - auVar29._8_8_ * dVar23;
    auVar28._8_8_ = auVar34._0_8_ * auVar29._8_8_ - *(double *)pauVar8[1] * dVar24;
    auVar15._8_4_ = SUB84(auVar28._8_8_,0);
    auVar15._0_8_ = auVar28._0_8_;
    auVar15._12_4_ = (int)((ulonglong)auVar28._8_8_ >> 0x20);
    auVar29 = blendpd(auVar28,auVar20,2);
    dVar14 = auVar15._8_8_ + dVar23 * dVar5 + dVar14 + *(double *)pauVar8[2];
    dVar17 = auVar20._0_8_ + dVar24 * dVar5 + dVar17 + *(double *)(pauVar8[2] + 8);
    dVar26 = auVar29._0_8_ + auVar34._0_8_ * dVar5 + dVar26 + *(double *)pauVar8[3];
  }
  (param_2->field0_0x0)._s_0.X = dVar14;
  (param_2->field0_0x0)._s_0.Y = dVar17;
  (param_2->field0_0x0)._s_0.Z = dVar26;
  return;
}

// GetNumMaterials @ 14f019350

int __thiscall UCableComponent::GetNumMaterials(UCableComponent *this)

{
  return 1;
}

// GetPrivateStaticClass @ 14f019420

UClass * __cdecl UCableComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCableComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CableComponent",L"CableComponent",
               &Z_Registration_Info_UClass_UCableComponent.InnerSingleton,
               StaticRegisterNativesUCableComponent,0x760,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UCableComponent>,
               InternalVTableHelperCtorCaller<UCableComponent>,local_res8,
               UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCableComponent.InnerSingleton;
}

// GetSocketTransform @ 14f0194e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTransform<double> * __thiscall
UCableComponent::GetSocketTransform
          (UCableComponent *this,TTransform<double> *__return_storage_ptr__,FName param_1,
          ERelativeTransformSpace param_2)

{
  double dVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  undefined1 auVar7 [12];
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  TTransform<double> *pTVar12;
  TVector<double> *pTVar13;
  uint uVar14;
  TVector<double>_u_0 *this_00;
  uint uVar15;
  uint uVar16;
  undefined1 auVar17 [16];
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  longlong local_1a0;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_180;
  TVector<double>_u_0 local_168;
  TVector<double>_u_0 local_150;
  double local_128;
  TVector<double> local_120;
  TQuat<double> local_108;
  TVector<double> local_e8;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  iVar2 = (this->Particles).ArrayNum;
  if (((param_1 == CableEndSocketName) || (param_1 == CableStartSocketName)) && (1 < iVar2)) {
    if (param_1 == CableEndSocketName) {
      uVar16 = iVar2 - 1;
      uVar14 = 0;
      if ((int)uVar16 < iVar2) {
        uVar14 = ~uVar16 >> 0x1f;
      }
      if (uVar14 == 0) {
        local_1a8 = (longlong)(int)uVar16;
        local_1a0 = (longlong)iVar2;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar6 = (code *)swi(3);
          pTVar12 = (TTransform<double> *)(*pcVar6)();
          return pTVar12;
        }
      }
      uVar15 = iVar2 - 2;
      pFVar3 = (this->Particles).AllocatorInstance.Data;
      local_128 = *(double *)(pFVar3 + (longlong)(int)uVar16 * 0x38 + 0x18);
      uVar18 = SUB84(local_128,0);
      uVar19 = (undefined4)((ulonglong)local_128 >> 0x20);
      auVar17 = *(undefined1 (*) [16])(pFVar3 + (longlong)(int)uVar16 * 0x38 + 8);
      uVar20 = auVar17._0_4_;
      uVar21 = auVar17._4_4_;
      uVar22 = auVar17._8_4_;
      uVar23 = auVar17._12_4_;
      iVar2 = (this->Particles).ArrayNum;
      uVar14 = 0;
      if ((int)uVar15 < iVar2) {
        uVar14 = ~uVar15 >> 0x1f;
      }
      if (uVar14 == 0) {
        local_1a8 = (longlong)(int)uVar15;
        local_1a0 = (longlong)iVar2;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar6 = (code *)swi(3);
          pTVar12 = (TTransform<double> *)(*pcVar6)();
          return pTVar12;
        }
      }
      pTVar13 = &local_120;
      pFVar4 = (this->Particles).AllocatorInstance.Data;
      pFVar3 = pFVar4 + (longlong)(int)uVar15 * 0x38 + 8;
      local_168._s_0.X = auVar17._0_8_ - *(double *)pFVar3;
      local_168._s_0.Y = auVar17._8_8_ - *(double *)(pFVar3 + 8);
      local_168._s_0.Z = local_128 - *(double *)(pFVar4 + (longlong)(int)uVar15 * 0x38 + 0x18);
      this_00 = &local_168;
    }
    else {
      pFVar3 = (this->Particles).AllocatorInstance.Data;
      pTVar13 = &local_e8;
      this_00 = &local_198;
      auVar17 = *(undefined1 (*) [16])(pFVar3 + 8);
      uVar20 = auVar17._0_4_;
      uVar21 = auVar17._4_4_;
      uVar22 = auVar17._8_4_;
      uVar23 = auVar17._12_4_;
      dVar1 = *(double *)(pFVar3 + 0x18);
      uVar18 = SUB84(dVar1,0);
      uVar19 = (undefined4)((ulonglong)dVar1 >> 0x20);
      local_198._s_0.X = *(double *)(pFVar3 + 0x40) - auVar17._0_8_;
      local_198._s_0.Z = *(double *)(pFVar3 + 0x50) - dVar1;
      auVar7._4_8_ = *(double *)(pFVar3 + 0x48);
      auVar7._0_4_ = uVar21;
      auVar17._0_8_ = auVar7._0_8_ << 0x20;
      auVar17._8_4_ = uVar22;
      auVar17._12_4_ = uVar23;
      local_198._s_0.Y = *(double *)(pFVar3 + 0x48) - auVar17._8_8_;
    }
    pTVar13 = UE::Math::TVector<double>::GetSafeNormal
                        ((TVector<double> *)&this_00->_s_0,pTVar13,__real_3e45798ee0000000,
                         &UE::Math::TVector<double>::ZeroVector);
    local_198._s_0.Z = (double)CONCAT44(uVar19,uVar18);
    local_150._s_0.Z = 0.0;
    local_180._s_0.X = (pTVar13->field0_0x0)._s_0.X;
    local_180._s_0.Y = (pTVar13->field0_0x0)._s_0.Y;
    local_180._s_0.Z = (pTVar13->field0_0x0)._s_0.Z;
    local_150._s_0.X = ___xmm_00000000000000003ff0000000000000;
    local_150._s_0.Y = _UNK_150689518;
    UE::Math::TQuat<double>::FindBetweenVectors
              (&local_108,(TVector<double> *)&local_150._s_0,(TVector<double> *)&local_180._s_0);
    dVar10 = _UNK_150689688;
    dVar9 = ___xmm_3ff00000000000003ff0000000000000;
    dVar8 = _UNK_150689518;
    dVar1 = ___xmm_00000000000000003ff0000000000000;
    local_c8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
    local_c8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
    local_c8.Rotation.XY.m128d_f64[0] = local_108.X;
    local_c8.Rotation.XY.m128d_f64[1] = local_108.Y;
    local_c8.Rotation.ZW.m128d_f64[0] = local_108.Z;
    local_c8.Rotation.ZW.m128d_f64[1] = local_108.W;
    local_c8.Translation.ZW.m128d_f64[0] = local_198._s_0.Z;
    local_c8.Translation.ZW.m128d_f64[1] = 0.0;
    local_c8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
    local_c8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
    if (param_2 == RTS_World) {
      (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_108.X;
      (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_108.Y;
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_108.Z;
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_108.W;
      *(undefined4 *)(__return_storage_ptr__->Translation).XY.m128d_f64 = uVar20;
      *(undefined4 *)((longlong)(__return_storage_ptr__->Translation).XY.m128d_f64 + 4) = uVar21;
      *(undefined4 *)((__return_storage_ptr__->Translation).XY.m128d_f64 + 1) = uVar22;
      *(undefined4 *)((longlong)(__return_storage_ptr__->Translation).XY.m128d_f64 + 0xc) = uVar23;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_198._s_0.Z;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar9;
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar10;
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar1;
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar8;
      return __return_storage_ptr__;
    }
    local_c8.Translation.XY.m128d_f64[0]._0_4_ = uVar20;
    local_c8.Translation.XY.m128d_f64[0]._4_4_ = uVar21;
    local_c8.Translation.XY.m128d_f64[1]._0_4_ = uVar22;
    local_c8.Translation.XY.m128d_f64[1]._4_4_ = uVar23;
    if (param_2 == RTS_Actor) {
      if (this->_padding_ != 0) {
        lVar5 = *(longlong *)(this->_padding_ + 0x1b8);
        if (lVar5 != 0) {
          UE::Math::TTransform<double>::GetRelativeTransform
                    (&local_c8,__return_storage_ptr__,(TTransform<double> *)(lVar5 + 0x1f0));
          return __return_storage_ptr__;
        }
        UE::Math::TTransform<double>::GetRelativeTransform
                  (&local_c8,__return_storage_ptr__,&UE::Math::TTransform<double>::Identity);
        return __return_storage_ptr__;
      }
    }
    else if (param_2 == RTS_Component) {
      UE::Math::TTransform<double>::GetRelativeTransform
                (&local_c8,__return_storage_ptr__,(TTransform<double> *)&this->_padding_);
      return __return_storage_ptr__;
    }
  }
  USceneComponent::GetSocketTransform
            ((USceneComponent *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// HasAnySockets @ 14f0199e0

bool __thiscall UCableComponent::HasAnySockets(UCableComponent *this)

{
  return 1 < (this->Particles).ArrayNum;
}

// OnRegister @ 14f019b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UCableComponent::OnRegister(UCableComponent *this)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  AActor *pAVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  bool bVar10;
  uint uVar11;
  UCableComponent *pUVar12;
  UClass *pUVar13;
  double *pdVar14;
  longlong lVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  double dVar25;
  undefined1 auStackY_178 [32];
  TVector<double>_u_0 local_140;
  TVector<double>_u_0 local_128 [2];
  undefined1 local_f8 [96];
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_178;
  UPrimitiveComponent::OnRegister((UPrimitiveComponent *)this);
  piVar1 = &(this->Particles).ArrayMax;
  piVar2 = &(this->Particles).ArrayNum;
  uVar17 = 0;
  iVar16 = this->NumSegments + 1;
  *piVar2 = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,&(this->Particles).AllocatorInstance,0,piVar1);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x38,8,iVar16,&(this->Particles).AllocatorInstance,piVar2,piVar1);
  GetEndPositions(this,(TVector<double> *)&local_140._s_0,(TVector<double> *)&local_128[0]._s_0);
  uVar23 = (undefined4)local_128[0]._s_0.Z;
  uVar24 = (undefined4)((ulonglong)local_128[0]._16_8_ >> 0x20);
  dVar21 = (double)local_128[0]._16_8_ - local_140._s_0.Z;
  dVar22 = (double)local_128[0]._8_8_ - local_140._s_0.Y;
  lVar15 = (longlong)iVar16;
  dVar9 = (double)local_128[0]._0_8_ - local_140._s_0.X;
  uVar19 = uVar17;
  if (0 < iVar16) {
    do {
      uVar18 = (uint)uVar19;
      uVar11 = 0;
      if ((int)uVar18 < *piVar2) {
        uVar11 = ~uVar18 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar16 = this->NumSegments;
      pFVar3 = (this->Particles).AllocatorInstance.Data;
      pFVar3[uVar17] = (FScriptContainerElement)0x1;
      dVar25 = (double)((float)(int)uVar18 / (float)iVar16);
      dVar8 = dVar25 * dVar9 + local_140._s_0.X;
      dVar20 = dVar25 * dVar22 + local_140._s_0.Y;
      dVar25 = dVar25 * dVar21 + local_140._s_0.Z;
      uVar23 = SUB84(dVar20,0);
      uVar24 = (undefined4)((ulonglong)dVar20 >> 0x20);
      auVar6._8_4_ = uVar23;
      auVar6._0_8_ = dVar8;
      auVar6._12_4_ = uVar24;
      *(undefined1 (*) [16])(pFVar3 + uVar17 + 8) = auVar6;
      auVar7._8_4_ = uVar23;
      auVar7._0_8_ = dVar8;
      auVar7._12_4_ = uVar24;
      *(undefined1 (*) [16])(pFVar3 + uVar17 + 0x20) = auVar7;
      *(double *)(pFVar3 + uVar17 + 0x18) = dVar25;
      *(double *)(pFVar3 + uVar17 + 0x30) = dVar25;
      uVar17 = uVar17 + 0x38;
      lVar15 = lVar15 + -1;
      uVar19 = (ulonglong)(uVar18 + 1);
    } while (lVar15 != 0);
    uVar23 = (undefined4)local_128[0]._s_0.Z;
    uVar24 = (undefined4)((ulonglong)local_128[0]._16_8_ >> 0x20);
  }
  pAVar4 = (AActor *)this->_padding_;
  (this->LastStartPoint).field0_0x0._s_0.X = local_140._s_0.X;
  (this->LastStartPoint).field0_0x0._s_0.Y = local_140._s_0.Y;
  dVar22 = (this->EndLocation).field0_0x0._s_0.X;
  dVar9 = (this->EndLocation).field0_0x0._s_0.Y;
  (this->LastEndPoint).field0_0x0._s_0.X = (double)local_128[0]._0_8_;
  (this->LastEndPoint).field0_0x0._s_0.Y = (double)local_128[0]._8_8_;
  dVar21 = (this->EndLocation).field0_0x0._s_0.Z;
  (this->LastEndLocation).field0_0x0._s_0.X = dVar22;
  (this->LastEndLocation).field0_0x0._s_0.Y = dVar9;
  dVar22 = (double)this->_padding_;
  (this->LastTransform).Rotation.XY.m128d_f64[0] = (double)this->_padding_;
  (this->LastTransform).Rotation.XY.m128d_f64[1] = dVar22;
  dVar22 = (double)this->_padding_;
  dVar9 = (double)this->_padding_;
  (this->LastEndLocation).field0_0x0._s_0.Z = dVar21;
  dVar21 = (double)this->_padding_;
  (this->LastTransform).Rotation.ZW.m128d_f64[0] = (double)this->_padding_;
  (this->LastTransform).Rotation.ZW.m128d_f64[1] = dVar21;
  dVar21 = (double)this->_padding_;
  dVar8 = (double)this->_padding_;
  (this->LastTransform).Translation.XY.m128d_f64[0] = dVar22;
  (this->LastTransform).Translation.XY.m128d_f64[1] = dVar9;
  dVar22 = (double)this->_padding_;
  dVar9 = (double)this->_padding_;
  (this->LastTransform).Translation.ZW.m128d_f64[0] = dVar21;
  (this->LastTransform).Translation.ZW.m128d_f64[1] = dVar8;
  dVar21 = (double)this->_padding_;
  dVar8 = (double)this->_padding_;
  (this->LastTransform).Scale3D.XY.m128d_f64[0] = dVar22;
  (this->LastTransform).Scale3D.XY.m128d_f64[1] = dVar9;
  (this->LastTransform).Scale3D.ZW.m128d_f64[0] = dVar21;
  (this->LastTransform).Scale3D.ZW.m128d_f64[1] = dVar8;
  (this->LastStartPoint).field0_0x0._s_0.Z = local_140._s_0.Z;
  (this->LastEndPoint).field0_0x0._s_0.Z = (double)CONCAT44(uVar24,uVar23);
  pUVar12 = (UCableComponent *)FComponentReference::GetComponent(&this->AttachEndTo,pAVar4);
  if (pUVar12 != (UCableComponent *)0x0) {
    pUVar13 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar16 = (int)pUVar13->_padding_;
    if ((iVar16 <= *(int *)(pUVar12->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar16 * 8) ==
        &pUVar13->_padding_)) goto LAB_14f019e40;
  }
  pUVar12 = this;
LAB_14f019e40:
  if (this->AttachEndToSocketName == (FName)0x0) {
    dVar21 = (double)pUVar12->_padding_;
    (this->LastEndPointTransform).Rotation.XY.m128d_f64[0] = (double)pUVar12->_padding_;
    (this->LastEndPointTransform).Rotation.XY.m128d_f64[1] = dVar21;
    dVar21 = (double)pUVar12->_padding_;
    (this->LastEndPointTransform).Rotation.ZW.m128d_f64[0] = (double)pUVar12->_padding_;
    (this->LastEndPointTransform).Rotation.ZW.m128d_f64[1] = dVar21;
    dVar21 = (double)pUVar12->_padding_;
    (this->LastEndPointTransform).Translation.XY.m128d_f64[0] = (double)pUVar12->_padding_;
    (this->LastEndPointTransform).Translation.XY.m128d_f64[1] = dVar21;
    dVar21 = (double)pUVar12->_padding_;
    (this->LastEndPointTransform).Translation.ZW.m128d_f64[0] = (double)pUVar12->_padding_;
    (this->LastEndPointTransform).Translation.ZW.m128d_f64[1] = dVar21;
    dVar21 = (double)pUVar12->_padding_;
    (this->LastEndPointTransform).Scale3D.XY.m128d_f64[0] = (double)pUVar12->_padding_;
    (this->LastEndPointTransform).Scale3D.XY.m128d_f64[1] = dVar21;
    dVar21 = (double)pUVar12->_padding_;
    dVar22 = (double)pUVar12->_padding_;
  }
  else {
    pdVar14 = (double *)
              (**(code **)(pUVar12->_padding_ + 0x520))
                        (pUVar12,local_f8,this->AttachEndToSocketName,0);
    dVar21 = pdVar14[1];
    (this->LastEndPointTransform).Rotation.XY.m128d_f64[0] = *pdVar14;
    (this->LastEndPointTransform).Rotation.XY.m128d_f64[1] = dVar21;
    dVar21 = pdVar14[3];
    (this->LastEndPointTransform).Rotation.ZW.m128d_f64[0] = pdVar14[2];
    (this->LastEndPointTransform).Rotation.ZW.m128d_f64[1] = dVar21;
    dVar21 = pdVar14[5];
    (this->LastEndPointTransform).Translation.XY.m128d_f64[0] = pdVar14[4];
    (this->LastEndPointTransform).Translation.XY.m128d_f64[1] = dVar21;
    dVar21 = pdVar14[7];
    (this->LastEndPointTransform).Translation.ZW.m128d_f64[0] = pdVar14[6];
    (this->LastEndPointTransform).Translation.ZW.m128d_f64[1] = dVar21;
    dVar21 = pdVar14[9];
    (this->LastEndPointTransform).Scale3D.XY.m128d_f64[0] = pdVar14[8];
    (this->LastEndPointTransform).Scale3D.XY.m128d_f64[1] = dVar21;
    dVar21 = pdVar14[10];
    dVar22 = pdVar14[0xb];
  }
  this->bLastStartAttached = this->bAttachStart;
  this->bLastEndAttached = this->bAttachEnd;
  (this->LastEndPointTransform).Scale3D.ZW.m128d_f64[0] = dVar21;
  (this->LastEndPointTransform).Scale3D.ZW.m128d_f64[1] = dVar22;
  return;
}

// OnVisibilityChanged @ 14f019f70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UCableComponent::OnVisibilityChanged(UCableComponent *this)

{
  longlong lVar1;
  undefined1 uVar2;
  
  USceneComponent::OnVisibilityChanged((USceneComponent *)this);
  if (this->bSkipCableUpdateWhenNotVisible != false) {
    lVar1 = this->_padding_;
    uVar2 = (**(code **)(lVar1 + 0x560))(this);
    (**(code **)(lVar1 + 0x420))(this,uVar2);
  }
  return;
}

// PerformCableCollision @ 14f019fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UCableComponent::PerformCableCollision(UCableComponent *this)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  UWorld *this_00;
  bool bVar12;
  bool bVar13;
  int iVar14;
  ECollisionChannel EVar15;
  uint uVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_Cable_CollisionTime> FVar18;
  undefined8 *puVar19;
  FName FVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 auStackY_358 [32];
  FColor_u_0 local_2e8 [2];
  FName local_2e0;
  undefined8 local_2d8;
  FName local_2c8;
  FName local_2c0;
  TStatId local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined4 uStack_290;
  undefined1 uStack_28c;
  undefined2 uStack_28b;
  undefined1 uStack_289;
  FName local_288;
  FName local_280;
  FName local_278;
  FCollisionResponseContainer_u_0 local_270;
  undefined1 local_248 [72];
  double local_200;
  double local_1f8;
  float local_1a8;
  int local_1a4;
  byte local_19b;
  FWeakObjectPtr local_190;
  FWeakObjectPtr FStack_188;
  IActorInstanceManagerInterface *local_180;
  undefined8 uStack_178;
  FCollisionQueryParams local_148;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_358;
  uVar21 = 0;
  FVar18 = StatPtr_STAT_Cable_CollisionTime;
  if (StatPtr_STAT_Cable_CollisionTime == (FThreadSafeStaticStat<FStat_STAT_Cable_CollisionTime>)0x0
     ) {
    pFVar17 = ::FName::FName(&local_288,"STAT_Cable_CollisionTime");
    FVar18 = (FThreadSafeStaticStat<FStat_STAT_Cable_CollisionTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Cable_CollisionTime,*pFVar17,
                        L"Cable Collision","STATGROUP_CableComponent","STATCAT_Advanced",L"Cable",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar18;
  bVar8 = false;
  bVar9 = false;
  local_2c0.ComparisonIndex.Value = 0;
  local_2c0.Number = 0;
  bVar12 = false;
  bVar13 = false;
  if ((FVar20.ComparisonIndex.Value.Value != 0) || (FVar20.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2e8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2e8[0]._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar8 = false;
      bVar9 = true;
      bVar12 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2e0.ComparisonIndex.Value = FVar20.ComparisonIndex.Value.Value;
        local_2e0.Number = FVar20.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2e0,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CableComponent\\Source\\CableComponent\\Private\\CableComponent.cpp"
                   ,0x355);
        bVar8 = true;
        bVar9 = true;
        bVar12 = true;
        bVar13 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_2c8 = FVar20;
      FThreadStats::AddMessage(FVar20,CycleScopeStart);
      bVar12 = true;
      goto LAB_14f01a13a;
    }
  }
  bVar9 = bVar13;
  bVar8 = bVar12;
  bVar12 = false;
  local_2c8 = local_2c0;
  FVar20 = local_2c0;
LAB_14f01a13a:
  local_2d8 = (UWorld *)this->_padding_;
  if (((local_2d8 != (UWorld *)0x0) ||
      (local_2d8 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
      local_2d8 != (UWorld *)0x0)) &&
     (iVar14 = (**(code **)(this->_padding_ + 0x5e0))(this), iVar14 != 0)) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      StatPtr_CableCollision =
           (FThreadSafeStaticStat<_public:___cdecl__private:_void___cdecl_UCableComponent::PerformCableCollision(void)_::_5_::<lambda_2>::operator()(void)const_::_2_::FStat_CableCollision>
            )0x0;
      pFVar17 = ::FName::FName(&local_280,"CableCollision");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_CableCollision,*pFVar17,L"CableCollision",
                 "STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",true,true,ST_int64,
                 true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS0);
    }
    local_2b0.StatIdPtr = (TStatIdData *)StatPtr_CableCollision;
    if (StatPtr_CableCollision ==
        (FThreadSafeStaticStat<_public:___cdecl__private:_void___cdecl_UCableComponent::PerformCableCollision(void)_::_5_::<lambda_2>::operator()(void)const_::_2_::FStat_CableCollision>
         )0x0) {
      pFVar17 = ::FName::FName(&local_278,"CableCollision");
      local_2b0.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_CableCollision,*pFVar17,
                      L"CableCollision","STATGROUP_CollisionTags","STATCAT_Advanced",
                      L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
    }
    if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&::StaticName,"CableCollision");
      _Init_thread_footer(&::_TSS0);
    }
    FCollisionQueryParams::FCollisionQueryParams
              (&local_148,::StaticName,&local_2b0,false,(AActor *)0x0);
    EVar15 = (**(code **)(this->_padding_ + 0x5f0))(this);
    puVar19 = (undefined8 *)(**(code **)(this->_padding_ + 0x5c8))(this);
    FCollisionResponseContainer::FCollisionResponseContainer
              ((FCollisionResponseContainer *)&local_270._s_0);
    this_00 = local_2d8;
    fVar11 = __real_3f000000;
    fVar10 = __real_38d1b717;
    local_270._0_8_ = *puVar19;
    local_270._8_8_ = puVar19[1];
    local_270._16_8_ = puVar19[2];
    local_270._24_8_ = puVar19[3];
    uVar23 = uVar21;
    if (0 < (this->Particles).ArrayNum) {
      do {
        uVar22 = (uint)uVar23;
        uVar16 = 0;
        if ((int)uVar22 < (this->Particles).ArrayNum) {
          uVar16 = ~uVar22 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (this->Particles).AllocatorInstance.Data;
        if (pFVar2[uVar21] != (FScriptContainerElement)0x0) {
          memset(local_248,0,0x100);
          uStack_28b = 0;
          local_2a8 = 0;
          uStack_2a0 = 0;
          local_298 = 0;
          local_190.ObjectIndex = 0;
          local_190.ObjectSerialNumber = 0;
          FStack_188.ObjectIndex = 0;
          FStack_188.ObjectSerialNumber = 0;
          uStack_289 = 0;
          uStack_290 = 0xffffffff;
          uStack_28c = 0;
          uStack_178._0_4_ = -1;
          uStack_178._4_1_ = Invalid;
          uStack_178._5_3_ = 0;
          local_248._4_4_ = 1.0;
          local_1a4 = -1;
          local_180 = (IActorInstanceManagerInterface *)0x0;
          local_2d8 = (UWorld *)CONCAT44(this->CableWidth * fVar11,2);
          bVar13 = UWorld::SweepSingleByChannel
                             (this_00,(FHitResult *)local_248,
                              (TVector<double> *)(pFVar2 + uVar21 + 0x20),
                              (TVector<double> *)(pFVar2 + uVar21 + 8),
                              &UE::Math::TQuat<double>::Identity,EVar15,
                              (FCollisionShape *)&local_2d8,&local_148,
                              (FCollisionResponseParams *)&local_270._s_0);
          if (bVar13) {
            if ((local_19b & 2) == 0) {
              *(undefined8 *)(pFVar2 + uVar21 + 8) = local_248._16_8_;
              *(undefined8 *)(pFVar2 + uVar21 + 0x10) = local_248._24_8_;
              *(undefined8 *)(pFVar2 + uVar21 + 0x18) = local_248._32_8_;
            }
            else {
              dVar24 = (double)local_1a8;
              *(double *)(pFVar2 + uVar21 + 8) =
                   dVar24 * (double)local_248._64_8_ + *(double *)(pFVar2 + uVar21 + 8);
              *(double *)(pFVar2 + uVar21 + 0x10) =
                   dVar24 * local_200 + *(double *)(pFVar2 + uVar21 + 0x10);
              *(double *)(pFVar2 + uVar21 + 0x18) =
                   dVar24 * local_1f8 + *(double *)(pFVar2 + uVar21 + 0x18);
            }
            dVar25 = *(double *)(pFVar2 + uVar21 + 8) - *(double *)(pFVar2 + uVar21 + 0x20);
            dVar26 = *(double *)(pFVar2 + uVar21 + 0x10) - *(double *)(pFVar2 + uVar21 + 0x28);
            dVar27 = *(double *)(pFVar2 + uVar21 + 0x18) - *(double *)(pFVar2 + uVar21 + 0x30);
            dVar24 = (double)(float)(dVar25 * (double)local_248._64_8_ + local_200 * dVar26 +
                                    local_1f8 * dVar27);
            dVar5 = *(double *)(pFVar2 + uVar21 + 0x20) + dVar24 * (double)local_248._64_8_;
            dVar6 = *(double *)(pFVar2 + uVar21 + 0x28) + dVar24 * local_200;
            dVar7 = *(double *)(pFVar2 + uVar21 + 0x30) + dVar24 * local_1f8;
            *(double *)(pFVar2 + uVar21 + 0x20) = dVar5;
            *(double *)(pFVar2 + uVar21 + 0x28) = dVar6;
            *(double *)(pFVar2 + uVar21 + 0x30) = dVar7;
            if (fVar10 < this->CollisionFriction) {
              dVar4 = (double)this->CollisionFriction;
              *(double *)(pFVar2 + uVar21 + 0x20) =
                   (dVar25 - dVar24 * (double)local_248._64_8_) * dVar4 + dVar5;
              *(double *)(pFVar2 + uVar21 + 0x28) = (dVar26 - dVar24 * local_200) * dVar4 + dVar6;
              *(double *)(pFVar2 + uVar21 + 0x30) = (dVar27 - dVar24 * local_1f8) * dVar4 + dVar7;
            }
          }
        }
        uVar21 = uVar21 + 0x38;
        FVar20 = local_2c8;
        uVar23 = (ulonglong)(uVar22 + 1);
      } while ((int)(uVar22 + 1) < (this->Particles).ArrayNum);
    }
    if (local_148.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_148.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
    }
    if (local_148.IgnoreComponents.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_148.IgnoreComponents.AllocatorInstance.SecondaryData);
    }
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar12) {
    FThreadStats::AddMessage(FVar20,CycleScopeEnd);
  }
  return;
}

// PerformSubstep @ 14f01a740

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCableComponent::PerformSubstep(UCableComponent *this,float param_1,TVector<double> *param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_Cable_SimTime> FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  LARGE_INTEGER local_res8;
  FName local_res20;
  FStatMessage local_48 [2];
  
  FVar10.Value = 0;
  FVar6 = StatPtr_STAT_Cable_SimTime;
  if (StatPtr_STAT_Cable_SimTime == (FThreadSafeStaticStat<FStat_STAT_Cable_SimTime>)0x0) {
    pFVar5 = ::FName::FName(&local_res20,"STAT_Cable_SimTime");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_Cable_SimTime>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Cable_SimTime,*pFVar5,L"Cable Sim"
                       ,"STATGROUP_CableComponent","STATCAT_Advanced",L"Cable",true,true,ST_int64,
                       true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar8.Value;
        local_res8.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CableComponent\\Source\\CableComponent\\Private\\CableComponent.cpp"
                   ,0x392);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar8.Value;
      local_res8.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      FVar10.Value = FVar8.Value;
      goto LAB_14f01a8a4;
    }
  }
  bVar3 = false;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
LAB_14f01a8a4:
  VerletIntegrate(this,param_1,param_2);
  SolveConstraints(this);
  if (this->bEnableCollision != false) {
    PerformCableCollision(this);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48[0].NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      local_48[0].NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(&local_res8);
      local_48[0].StatData.Pad[4] = '\0';
      local_48[0].StatData.Pad[5] = '\0';
      local_48[0].StatData.Pad[6] = '\0';
      local_48[0].StatData.Pad[7] = '\0';
      local_48[0].StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_48[0].StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_48[0].StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_48[0].StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_48);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// QuerySupportedSockets @ 14f01a9d0

void __thiscall
UCableComponent::QuerySupportedSockets
          (UCableComponent *this,
          TArray<FComponentSocketDescription,TSizedDefaultAllocator<32>_> *param_1)

{
  FName *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FName local_28;
  undefined4 local_20;
  FName local_1c;
  undefined4 local_14;
  
  pFVar1 = (FName *)(param_1->AllocatorInstance).Data;
  local_28 = CableEndSocketName;
  local_20 = CONCAT31(local_20._1_3_,2);
  if ((pFVar1 <= &local_28) &&
     (&local_28 < (FName *)((longlong)pFVar1 + (longlong)param_1->ArrayMax * 0xc))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = param_1->ArrayNum;
  if (iVar5 == param_1->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar5 + 1;
  local_14 = CONCAT31(local_14._1_3_,2);
  pFVar2 = (param_1->AllocatorInstance).Data;
  *(FName *)(pFVar2 + (longlong)iVar5 * 0xc) = local_28;
  *(undefined4 *)(pFVar2 + (longlong)iVar5 * 0xc + 8) = local_20;
  pFVar1 = (FName *)(param_1->AllocatorInstance).Data;
  local_1c = CableStartSocketName;
  if ((pFVar1 <= &local_1c) &&
     (&local_1c < (FName *)((longlong)pFVar1 + (longlong)param_1->ArrayMax * 0xc))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = param_1->ArrayNum;
  if (iVar5 == param_1->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar5 + 1;
  pFVar2 = (param_1->AllocatorInstance).Data;
  *(FName *)(pFVar2 + (longlong)iVar5 * 0xc) = local_1c;
  *(undefined4 *)(pFVar2 + (longlong)iVar5 * 0xc + 8) = local_14;
  return;
}

// SendRenderDynamicData_Concurrent @ 14f01ab70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UCableComponent::SendRenderDynamicData_Concurrent(UCableComponent *this)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  uint uVar18;
  ForAnyElementType *pFVar19;
  undefined ***pppuVar20;
  int iVar21;
  longlong lVar22;
  uint uVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar39;
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined4 uVar46;
  undefined4 uVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auStackY_178 [32];
  code *local_108 [2];
  undefined **local_f8;
  longlong local_f0;
  ForAnyElementType *local_e8;
  undefined ***local_e0;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (this->_padding_ != 0) {
    pFVar19 = ::operator_new(0x10);
    if (pFVar19 == (ForAnyElementType *)0x0) {
      pFVar19 = (ForAnyElementType *)0x0;
    }
    else {
      pFVar19->Data = (FScriptContainerElement *)0x0;
      pFVar19[1].Data = (FScriptContainerElement *)0x0;
    }
    iVar21 = this->NumSegments + 1;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar21,pFVar19,(int *)(pFVar19 + 1),(int *)((longlong)&pFVar19[1].Data + 4));
    uVar16 = _UNK_15061cc8c;
    uVar15 = _UNK_15061cc88;
    uVar14 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar13 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar23 = 0;
    if (0 < iVar21) {
      lVar22 = 0;
      lVar25 = 0;
      lVar24 = 0;
      do {
        uVar18 = 0;
        if ((int)uVar23 < (this->Particles).ArrayNum) {
          uVar18 = ~uVar23 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->Particles).AllocatorInstance.Data;
        dVar39 = (double)this->_padding_ *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        dVar40 = (double)this->_padding_ *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        dVar5 = (double)this->_padding_ *
                GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
        dVar6 = (double)this->_padding_ *
                GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
        pFVar1 = pFVar3 + lVar24 + 8;
        dVar29 = *(double *)(pFVar3 + lVar24 + 0x18) - (double)this->_padding_;
        dVar9 = *(double *)pFVar1 - (double)this->_padding_;
        dVar10 = *(double *)(pFVar1 + 8) - (double)this->_padding_;
        uVar46 = (undefined4)((ulonglong)dVar10 >> 0x20);
        auVar37._8_4_ = SUB84(dVar40,0);
        auVar37._0_8_ = dVar39;
        auVar37._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
        auVar30._8_4_ = SUB84(dVar5,0);
        auVar30._0_8_ = dVar40;
        auVar30._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        auVar38._8_4_ = SUB84(dVar6,0);
        auVar38._0_8_ = dVar5;
        auVar38._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        auVar38 = blendpd(auVar37,auVar38,2);
        auVar48._8_4_ = SUB84(dVar10,0);
        auVar48._0_8_ = dVar9;
        auVar48._12_4_ = uVar46;
        auVar34._8_4_ = SUB84(dVar10,0);
        auVar34._0_8_ = dVar9;
        auVar34._12_4_ = uVar46;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = dVar29;
        auVar35 = blendpd(auVar34,auVar11,2);
        auVar49._0_8_ = auVar48._8_8_ * dVar39 - dVar40 * dVar9;
        auVar49._8_8_ = dVar29 * dVar40 - auVar30._8_8_ * dVar10;
        auVar36._0_8_ = auVar35._0_8_ * dVar5 - auVar38._0_8_ * dVar29;
        auVar36._8_8_ = auVar35._8_8_ * dVar6 - auVar38._8_8_ * 0.0;
        auVar35 = blendpd(auVar49,auVar36,2);
        dVar7 = auVar49._8_8_ + auVar49._8_8_;
        dVar8 = auVar36._0_8_ + auVar36._0_8_;
        uVar46 = SUB84(dVar8,0);
        uVar47 = (undefined4)((ulonglong)dVar8 >> 0x20);
        auVar50._0_8_ = auVar35._0_8_ + auVar35._0_8_;
        auVar50._8_8_ = auVar35._8_8_ + auVar35._8_8_;
        auVar44._8_4_ = uVar46;
        auVar44._0_8_ = dVar7;
        auVar44._12_4_ = uVar47;
        auVar31._8_4_ = uVar46;
        auVar31._0_8_ = dVar7;
        auVar31._12_4_ = uVar47;
        auVar41._8_4_ = uVar46;
        auVar41._0_8_ = dVar7;
        auVar41._12_4_ = uVar47;
        auVar42 = blendpd(auVar41,auVar50,2);
        auVar45._0_8_ = auVar44._8_8_ * dVar39 - dVar7 * dVar40;
        auVar45._8_8_ = auVar50._0_8_ * dVar40 - auVar31._8_8_ * dVar5;
        auVar32._8_4_ = SUB84(auVar50._8_8_,0);
        auVar32._0_8_ = auVar50._0_8_;
        auVar32._12_4_ = (int)((ulonglong)auVar50._8_8_ >> 0x20);
        auVar35._0_8_ = this->_padding_;
        auVar35._8_8_ = this->_padding_;
        auVar43._0_8_ = auVar42._0_8_ * dVar5 - auVar50._0_8_ * auVar38._0_8_;
        auVar43._8_8_ = auVar42._8_8_ * dVar6 - auVar32._8_8_ * auVar38._8_8_;
        uVar2 = this->_padding_;
        lVar26 = -(ulonglong)
                  ((double)CONCAT44((uint)((ulonglong)auVar35._0_8_ >> 0x20) & uVar14,
                                    (uint)auVar35._0_8_ & uVar13) <=
                  (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
        lVar28 = -(ulonglong)
                  ((double)CONCAT44((uint)((ulonglong)auVar35._8_8_ >> 0x20) & uVar16,
                                    (uint)auVar35._8_8_ & uVar15) <=
                  (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
        lVar27 = -(ulonglong)
                  ((double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) & uVar14,(uint)uVar2 & uVar13)
                  <= (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
        auVar33._8_4_ = SUB84(auVar45._8_8_,0);
        auVar33._0_8_ = auVar45._0_8_;
        auVar33._12_4_ = (int)((ulonglong)auVar45._8_8_ >> 0x20);
        auVar38 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar35);
        auVar42._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
        auVar42._0_8_ = uVar2;
        auVar42._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
        auVar35 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar42);
        dVar5 = (double)CONCAT44(~(uint)((ulonglong)lVar28 >> 0x20) & auVar38._12_4_,
                                 ~(uint)lVar28 & auVar38._8_4_) *
                (dVar8 * dVar6 + dVar10 + auVar43._0_8_);
        auVar42 = blendpd(auVar45,auVar43,2);
        uVar18 = 0;
        if ((int)uVar23 < *(int *)&pFVar19[1].Data) {
          uVar18 = ~uVar23 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar1 = pFVar19->Data;
        uVar23 = uVar23 + 1;
        lVar22 = lVar22 + 1;
        lVar24 = lVar24 + 0x38;
        auVar12._8_4_ = SUB84(dVar5,0);
        auVar12._0_8_ =
             (double)CONCAT44(~(uint)((ulonglong)lVar26 >> 0x20) & auVar38._4_4_,
                              ~(uint)lVar26 & auVar38._0_4_) *
             (dVar7 * dVar6 + dVar9 + auVar33._8_8_);
        auVar12._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        *(undefined1 (*) [16])(pFVar1 + lVar25) = auVar12;
        *(double *)(pFVar1 + lVar25 + 0x10) =
             (double)CONCAT44(~(uint)((ulonglong)lVar27 >> 0x20) & auVar35._4_4_,
                              ~(uint)lVar27 & auVar35._0_4_) *
             (auVar50._0_8_ * dVar6 + dVar29 + auVar42._0_8_);
        lVar25 = lVar25 + 0x18;
      } while (lVar22 < iVar21);
    }
    local_e0 = (undefined ***)0x0;
    local_f8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UCableComponent::SendRenderDynamicData_Concurrent'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    local_f0 = this->_padding_;
    local_108[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`UCableComponent::SendRenderDynamicData_Concurrent'::__l5::<lambda_1>,void,FRHICommandList_&>
                   ::Call;
    local_e8 = pFVar19;
    FRenderCommandDispatcher::
    Enqueue<TRenderCommandTag<_UCableComponent::SendRenderDynamicData_Concurrent_::__l5::TSTR_FSendCableDynamicData1251>_>
              (&UE::RenderCommandPipe::Cable,
               (TUniqueFunction<void___cdecl(FRHICommandList_&)> *)local_108);
    if (local_108[0] != (code *)0x0) {
      pppuVar20 = &local_f8;
      if (local_e0 != (undefined ***)0x0) {
        pppuVar20 = local_e0;
      }
      (*(code *)(*pppuVar20)[2])();
    }
  }
  return;
}

// SetAttachEndTo @ 14f01b030

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UCableComponent::SetAttachEndTo(UCableComponent *this,AActor *param_1,FName param_2,FName param_3)

{
  AActor *local_res8;
  
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->AttachEndTo).OtherActor.WeakPtr,(FObjectPtr)&local_res8);
  this->AttachEndToSocketName = param_3;
  (this->AttachEndTo)._padding_ = (longlong)param_2;
  return;
}

// SetAttachEndToComponent @ 14f01b0b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UCableComponent::SetAttachEndToComponent
          (UCableComponent *this,USceneComponent *param_1,FName param_2)

{
  USceneComponent *local_res8;
  
  if (param_1 == (USceneComponent *)0x0) {
    local_res8 = (USceneComponent *)0x0;
  }
  else {
    local_res8 = (USceneComponent *)param_1->_padding_;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  FWeakObjectPtr::operator=(&(this->AttachEndTo).OtherActor.WeakPtr,(FObjectPtr)&local_res8);
  (this->AttachEndTo)._padding_ = 0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=
            ((FWeakObjectPtr *)&(this->AttachEndTo)._padding_,(FObjectPtr)&local_res8);
  this->AttachEndToSocketName = param_2;
  return;
}

// SolveConstraints @ 14f01b170

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCableComponent::SolveConstraints(UCableComponent *this)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  double dVar13;
  bool bVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_Cable_SolveTime> FVar16;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  int iVar17;
  uint uVar18;
  FName FVar19;
  ulonglong uVar20;
  FScriptContainerElement *pFVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint uVar24;
  ulonglong uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  FColor_u_0 local_res10 [2];
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_128;
  double local_120;
  double local_118;
  FName local_110;
  FStatMessage local_100 [12];
  
  uVar23 = 0;
  FVar16 = StatPtr_STAT_Cable_SolveTime;
  if (StatPtr_STAT_Cable_SolveTime == (FThreadSafeStaticStat<FStat_STAT_Cable_SolveTime>)0x0) {
    pFVar15 = ::FName::FName(&local_128,"STAT_Cable_SolveTime");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_Cable_SolveTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Cable_SolveTime,*pFVar15,
                        L"Cable Solve","STATGROUP_CableComponent","STATCAT_Advanced",L"Cable",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar16;
  bVar10 = false;
  bVar12 = false;
  local_110.ComparisonIndex.Value = 0;
  local_110.Number = 0;
  if ((FVar19.ComparisonIndex.Value.Value != 0) || (FVar19.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar10 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar19.ComparisonIndex.Value.Value;
        local_res18.Number = FVar19.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CableComponent\\Source\\CableComponent\\Private\\CableComponent.cpp"
                   ,0x336);
        bVar10 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar19,CycleScopeStart);
      bVar11 = true;
      goto LAB_14f01b2cd;
    }
  }
  bVar11 = false;
  FVar19 = local_110;
LAB_14f01b2cd:
  dVar13 = __real_3fe0000000000000;
  iVar17 = this->NumSegments;
  fVar29 = this->CableLength / (float)iVar17;
  uVar25 = uVar23;
  if (0 < this->SolverIterations) {
    do {
      uVar20 = uVar23;
      uVar22 = uVar23;
      if (0 < iVar17) {
        do {
          uVar18 = (uint)uVar20;
          uVar24 = 0;
          if ((int)uVar18 < (this->Particles).ArrayNum) {
            uVar24 = ~uVar18 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar18 = uVar18 + 1;
          pFVar21 = (this->Particles).AllocatorInstance.Data + uVar22;
          uVar24 = 0;
          if ((int)uVar18 < (this->Particles).ArrayNum) {
            uVar24 = ~uVar18 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar5 = (this->Particles).AllocatorInstance.Data;
          dVar2 = *(double *)(pFVar21 + 8);
          dVar3 = *(double *)(pFVar21 + 0x10);
          dVar4 = *(double *)(pFVar21 + 0x18);
          dVar33 = *(double *)(pFVar5 + uVar22 + 0x40) - dVar2;
          dVar34 = *(double *)(pFVar5 + uVar22 + 0x48) - dVar3;
          dVar8 = *(double *)(pFVar5 + uVar22 + 0x50) - dVar4;
          auVar26._0_8_ = dVar34 * dVar34;
          auVar26._8_8_ = 0;
          dVar32 = dVar33 * dVar33 + auVar26._0_8_ + dVar8 * dVar8;
          auVar27._8_8_ = 0;
          auVar27._0_8_ = dVar32;
          auVar27 = sqrtpd(auVar26,auVar27);
          dVar9 = 0.0;
          dVar31 = 0.0;
          dVar30 = __real_3ff0000000000000;
          if (__real_3e45798ee0000000 < dVar32) {
            local_120 = __real_3ff0000000000000 / SQRT(dVar32);
            dVar9 = dVar8 * local_120;
            dVar31 = dVar34 * local_120;
            dVar30 = dVar33 * local_120;
          }
          dVar32 = (double)((float)auVar27._0_8_ - fVar29);
          dVar30 = dVar32 * dVar30;
          dVar31 = dVar32 * dVar31;
          dVar32 = dVar32 * dVar9;
          if (*pFVar21 == (FScriptContainerElement)0x0) {
            if (pFVar5[uVar22 + 0x38] != (FScriptContainerElement)0x0) {
              *(double *)(pFVar5 + uVar22 + 0x40) = *(double *)(pFVar5 + uVar22 + 0x40) - dVar30;
              *(double *)(pFVar5 + uVar22 + 0x48) = *(double *)(pFVar5 + uVar22 + 0x48) - dVar31;
              *(double *)(pFVar5 + uVar22 + 0x50) = *(double *)(pFVar5 + uVar22 + 0x50) - dVar32;
            }
          }
          else if (pFVar5[uVar22 + 0x38] == (FScriptContainerElement)0x0) {
            *(double *)(pFVar21 + 8) = dVar2 + dVar30;
            *(double *)(pFVar21 + 0x10) = dVar3 + dVar31;
            *(double *)(pFVar21 + 0x18) = dVar4 + dVar32;
          }
          else {
            *(double *)(pFVar21 + 8) = dVar2 + dVar30 * dVar13;
            *(double *)(pFVar21 + 0x10) = dVar3 + dVar31 * dVar13;
            *(double *)(pFVar21 + 0x18) = dVar4 + dVar32 * dVar13;
            *(double *)(pFVar5 + uVar22 + 0x40) =
                 *(double *)(pFVar5 + uVar22 + 0x40) - dVar30 * dVar13;
            *(double *)(pFVar5 + uVar22 + 0x48) =
                 *(double *)(pFVar5 + uVar22 + 0x48) - dVar31 * dVar13;
            *(double *)(pFVar5 + uVar22 + 0x50) =
                 *(double *)(pFVar5 + uVar22 + 0x50) - dVar32 * dVar13;
          }
          iVar17 = this->NumSegments;
          uVar20 = (ulonglong)uVar18;
          uVar22 = uVar22 + 0x38;
        } while ((int)uVar18 < iVar17);
      }
      if ((this->bEnableStiffness != false) && (0 < iVar17 + -1)) {
        uVar20 = uVar23;
        uVar22 = uVar23;
        do {
          uVar18 = (uint)uVar20;
          uVar24 = 0;
          if ((int)uVar18 < (this->Particles).ArrayNum) {
            uVar24 = ~uVar18 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar21 = (this->Particles).AllocatorInstance.Data;
          uVar24 = 0;
          if ((int)(uVar18 + 2) < (this->Particles).ArrayNum) {
            uVar24 = ~(uVar18 + 2) >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar5 = (this->Particles).AllocatorInstance.Data;
          dVar2 = *(double *)(pFVar21 + uVar22 + 8);
          dVar3 = *(double *)(pFVar21 + uVar22 + 0x10);
          dVar4 = *(double *)(pFVar21 + uVar22 + 0x18);
          dVar33 = *(double *)(pFVar5 + uVar22 + 0x78) - dVar2;
          dVar34 = *(double *)(pFVar5 + uVar22 + 0x80) - dVar3;
          dVar8 = *(double *)(pFVar5 + uVar22 + 0x88) - dVar4;
          auVar28._0_8_ = dVar34 * dVar34;
          auVar28._8_8_ = 0;
          dVar32 = dVar33 * dVar33 + auVar28._0_8_ + dVar8 * dVar8;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = dVar32;
          auVar27 = sqrtpd(auVar28,auVar7);
          if (dVar32 <= __real_3e45798ee0000000) {
            dVar8 = 0.0;
            dVar34 = 0.0;
            dVar32 = __real_3ff0000000000000;
          }
          else {
            local_118 = __real_3ff0000000000000 / SQRT(dVar32);
            dVar8 = dVar8 * local_118;
            dVar34 = dVar34 * local_118;
            dVar32 = dVar33 * local_118;
          }
          dVar33 = (double)((float)auVar27._0_8_ - (fVar29 + fVar29));
          dVar32 = dVar33 * dVar32;
          dVar34 = dVar33 * dVar34;
          dVar33 = dVar33 * dVar8;
          if (pFVar21[uVar22] == (FScriptContainerElement)0x0) {
            if (pFVar5[uVar22 + 0x70] != (FScriptContainerElement)0x0) {
              *(double *)(pFVar5 + uVar22 + 0x78) = *(double *)(pFVar5 + uVar22 + 0x78) - dVar32;
              *(double *)(pFVar5 + uVar22 + 0x80) = *(double *)(pFVar5 + uVar22 + 0x80) - dVar34;
              *(double *)(pFVar5 + uVar22 + 0x88) = *(double *)(pFVar5 + uVar22 + 0x88) - dVar33;
            }
          }
          else if (pFVar5[uVar22 + 0x70] == (FScriptContainerElement)0x0) {
            *(double *)(pFVar21 + uVar22 + 8) = dVar32 + dVar2;
            *(double *)(pFVar21 + uVar22 + 0x10) = dVar34 + dVar3;
            *(double *)(pFVar21 + uVar22 + 0x18) = dVar33 + dVar4;
          }
          else {
            *(double *)(pFVar21 + uVar22 + 8) = dVar32 * dVar13 + dVar2;
            *(double *)(pFVar21 + uVar22 + 0x10) = dVar34 * dVar13 + dVar3;
            *(double *)(pFVar21 + uVar22 + 0x18) = dVar33 * dVar13 + dVar4;
            *(double *)(pFVar5 + uVar22 + 0x78) =
                 *(double *)(pFVar5 + uVar22 + 0x78) - dVar32 * dVar13;
            *(double *)(pFVar5 + uVar22 + 0x80) =
                 *(double *)(pFVar5 + uVar22 + 0x80) - dVar34 * dVar13;
            *(double *)(pFVar5 + uVar22 + 0x88) =
                 *(double *)(pFVar5 + uVar22 + 0x88) - dVar33 * dVar13;
          }
          iVar17 = this->NumSegments;
          uVar20 = (ulonglong)(uVar18 + 1);
          uVar22 = uVar22 + 0x38;
        } while ((int)(uVar18 + 1) < iVar17 + -1);
      }
      uVar24 = (int)uVar25 + 1;
      uVar25 = (ulonglong)uVar24;
    } while ((int)uVar24 < this->SolverIterations);
  }
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar11) && (FVar19 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_100[0].NameAndInfo.Index = FVar19.ComparisonIndex.Value;
      local_100[0].NameAndInfo.Number = FVar19.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_100[0].StatData.Pad[4] = '\0';
      local_100[0].StatData.Pad[5] = '\0';
      local_100[0].StatData.Pad[6] = '\0';
      local_100[0].StatData.Pad[7] = '\0';
      local_100[0].StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_100[0].StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_100[0].StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_100[0].StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_100);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// StaticRegisterNativesUCableComponent @ 14f01ba30

void __cdecl UCableComponent::StaticRegisterNativesUCableComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UCableComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickComponent @ 14f01ba70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UCableComponent::TickComponent
          (UCableComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  UWorld *this_00;
  TQuat<double> *pTVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement FVar8;
  float fVar9;
  float fVar10;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_90;
  TVector<double>_u_0 local_78;
  TRotator<double> local_60;
  TQuat<double> local_48 [2];
  
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  if ((this->bSkipCableUpdateWhenNotVisible != false) &&
     (cVar3 = (**(code **)(this->_padding_ + 0x560))(this), cVar3 == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x00014f01babd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x420))(this,0);
    return;
  }
  if (((this->bSkipCableUpdateWhenNotOwnerRecentlyRendered == false) ||
      ((AActor *)this->_padding_ == (AActor *)0x0)) ||
     (bVar4 = AActor::WasRecentlyRendered((AActor *)this->_padding_,__real_40000000), bVar4)) {
    this_00 = (UWorld *)this->_padding_;
    if (this_00 == (UWorld *)0x0) {
      this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    fVar9 = UWorld::GetGravityZ(this_00);
    local_78._s_0.X = 0.0;
    local_78._s_0.Y = 0.0;
    local_78._s_0.Z = (double)this->CableGravityScale * (double)fVar9;
    GetEndPositions(this,(TVector<double> *)&local_90._s_0,(TVector<double> *)&local_a8._s_0);
    if (((this->Particles).ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar7 = (this->Particles).AllocatorInstance.Data;
    FVar8 = (FScriptContainerElement)(this->bAttachStart == false);
    if (!(bool)FVar8) {
      *(double *)(pFVar7 + 0x20) = local_90._s_0.X;
      *(double *)(pFVar7 + 0x28) = local_90._s_0.Y;
      *(double *)(pFVar7 + 8) = local_90._s_0.X;
      *(double *)(pFVar7 + 0x10) = local_90._s_0.Y;
      *(double *)(pFVar7 + 0x30) = local_90._s_0.Z;
      *(double *)(pFVar7 + 0x18) = local_90._s_0.Z;
    }
    *pFVar7 = FVar8;
    uVar1 = this->NumSegments;
    uVar5 = 0;
    if ((int)uVar1 < (this->Particles).ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar7 = (this->Particles).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x38;
    FVar8 = (FScriptContainerElement)(this->bAttachEnd == false);
    if (!(bool)FVar8) {
      *(double *)(pFVar7 + 0x20) = local_a8._s_0.X;
      *(double *)(pFVar7 + 0x28) = local_a8._s_0.Y;
      *(double *)(pFVar7 + 8) = local_a8._s_0.X;
      *(double *)(pFVar7 + 0x10) = local_a8._s_0.Y;
      *(double *)(pFVar7 + 0x30) = local_a8._s_0.Z;
      *(double *)(pFVar7 + 0x18) = local_a8._s_0.Z;
    }
    *pFVar7 = FVar8;
    DoTeleportCorrections(this,(TVector<double> *)&local_90._s_0,(TVector<double> *)&local_a8._s_0);
    fVar9 = param_1 + this->TimeRemainder;
    fVar10 = this->SubstepTime;
    if (this->SubstepTime <= __real_3ba3d70a) {
      fVar10 = __real_3ba3d70a;
    }
    this->TimeRemainder = fVar9;
    if (fVar10 < fVar9) {
      cVar3 = this->bUseSubstepping;
      do {
        if (cVar3 != '\0') {
          fVar9 = fVar10;
        }
        PerformSubstep(this,fVar9,(TVector<double> *)&local_78._s_0);
        cVar3 = this->bUseSubstepping;
        if ((bool)cVar3 == false) {
          this->TimeRemainder = 0.0;
          fVar9 = 0.0;
        }
        else {
          fVar9 = this->TimeRemainder - fVar10;
          this->TimeRemainder = fVar9;
        }
      } while (fVar10 < fVar9);
    }
    UActorComponent::MarkRenderDynamicDataDirty((UActorComponent *)this);
    local_60.Pitch = (double)this->_padding_;
    local_60.Yaw = (double)this->_padding_;
    local_60.Roll = (double)this->_padding_;
    pTVar6 = FRotationConversionCache::RotatorToQuat
                       ((FRotationConversionCache *)&this->_padding_,local_48,&local_60);
    USceneComponent::UpdateComponentToWorldWithParent
              ((USceneComponent *)this,(USceneComponent *)this->_padding_,(FName)this->_padding_,
               None,pTVar6,None);
  }
  return;
}

// VerletIntegrate @ 14f01bd70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCableComponent::VerletIntegrate(UCableComponent *this,float param_1,TVector<double> *param_2)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  int iVar23;
  uint uVar24;
  FName *pFVar25;
  FThreadSafeStaticStat<FStat_STAT_Cable_IntegrateTime> FVar26;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar27;
  FName FVar28;
  ulonglong uVar29;
  uint uVar30;
  ulonglong uVar31;
  longlong lVar32;
  double dVar33;
  FName local_res8;
  FColor_u_0 local_res10 [2];
  LARGE_INTEGER local_res20;
  FName local_a8;
  FName local_a0;
  FStatMessage local_90 [5];
  
  uVar29 = 0;
  FVar26 = StatPtr_STAT_Cable_IntegrateTime;
  if (StatPtr_STAT_Cable_IntegrateTime == (FThreadSafeStaticStat<FStat_STAT_Cable_IntegrateTime>)0x0
     ) {
    pFVar25 = ::FName::FName(&local_a8,"STAT_Cable_IntegrateTime");
    FVar26 = (FThreadSafeStaticStat<FStat_STAT_Cable_IntegrateTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Cable_IntegrateTime,*pFVar25,
                        L"Cable Integrate","STATGROUP_CableComponent","STATCAT_Advanced",L"Cable",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar28 = *(FName *)FVar26;
  bVar19 = false;
  bVar21 = false;
  local_a0.ComparisonIndex.Value = 0;
  local_a0.Number = 0;
  FVar27 = FVar28.ComparisonIndex.Value;
  uVar24 = FVar28.Number;
  if ((FVar27.Value != 0) || (uVar24 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar26 + 0x10));
      bVar19 = false;
      bVar21 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.ComparisonIndex.Value = FVar27.Value;
        local_res8.Number = uVar24;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res8,(wchar_t *)*(FName *)((longlong)FVar26 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CableComponent\\Source\\CableComponent\\Private\\CableComponent.cpp"
                   ,0x2ff);
        bVar19 = true;
        bVar21 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.s.LowPart = FVar27.Value;
      local_res20.s.HighPart = uVar24;
      FThreadStats::AddMessage(FVar28,CycleScopeStart);
      bVar20 = true;
      goto LAB_14f01bedd;
    }
  }
  bVar20 = false;
  FVar28 = local_a0;
LAB_14f01bedd:
  iVar23 = this->NumSegments + 1;
  lVar32 = (longlong)iVar23;
  uVar31 = uVar29;
  if (0 < iVar23) {
    do {
      uVar30 = (uint)uVar31;
      uVar24 = 0;
      if ((int)uVar30 < (this->Particles).ArrayNum) {
        uVar24 = ~uVar30 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar8 = (this->Particles).AllocatorInstance.Data;
      if (pFVar8[uVar29] != (FScriptContainerElement)0x0) {
        dVar12 = *(double *)(pFVar8 + uVar29 + 8);
        dVar11 = *(double *)(pFVar8 + uVar29 + 8 + 8);
        dVar2 = *(double *)(pFVar8 + uVar29 + 0x18);
        dVar3 = *(double *)(pFVar8 + uVar29 + 0x30);
        dVar13 = (this->CableForce).field0_0x0._s_0.X;
        dVar14 = (this->CableForce).field0_0x0._s_0.Y;
        dVar15 = (param_2->field0_0x0)._s_0.X;
        dVar16 = (param_2->field0_0x0)._s_0.Y;
        dVar4 = (this->CableForce).field0_0x0._s_0.Z;
        dVar5 = *(double *)(pFVar8 + uVar29 + 0x18);
        dVar17 = *(double *)(pFVar8 + uVar29 + 0x20);
        dVar18 = *(double *)(pFVar8 + uVar29 + 0x20 + 8);
        dVar6 = (param_2->field0_0x0)._s_0.Z;
        uVar7 = *(undefined8 *)(pFVar8 + uVar29 + 0x18);
        *(double *)(pFVar8 + uVar29 + 0x20) = dVar12;
        *(double *)(pFVar8 + uVar29 + 0x20 + 8) = dVar11;
        *(undefined8 *)(pFVar8 + uVar29 + 0x30) = uVar7;
        dVar33 = (double)(param_1 * param_1);
        dVar11 = (dVar14 + dVar16) * dVar33 + (dVar11 - dVar18) + dVar11;
        auVar10._8_4_ = SUB84(dVar11,0);
        auVar10._0_8_ = (dVar13 + dVar15) * dVar33 + (dVar12 - dVar17) + dVar12;
        auVar10._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
        *(undefined1 (*) [16])(pFVar8 + uVar29 + 8) = auVar10;
        *(double *)(pFVar8 + uVar29 + 0x18) = (dVar2 - dVar3) + dVar5 + (dVar4 + dVar6) * dVar33;
      }
      uVar29 = uVar29 + 0x38;
      lVar32 = lVar32 + -1;
      uVar31 = (ulonglong)(uVar30 + 1);
    } while (lVar32 != 0);
  }
  if (bVar21) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar20) && (FVar28 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_90[0].NameAndInfo.Index = FVar28.ComparisonIndex.Value;
      local_90[0].NameAndInfo.Number = FVar28.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_90[0].StatData.Pad[4] = '\0';
      local_90[0].StatData.Pad[5] = '\0';
      local_90[0].StatData.Pad[6] = '\0';
      local_90[0].StatData.Pad[7] = '\0';
      local_90[0].StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_90[0].StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_90[0].StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_90[0].StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_90);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// execGetAttachedActor @ 14f01c220

void __cdecl UCableComponent::execGetAttachedActor(UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[0x24].field_0x18);
  *(UObject **)param_3 = pUVar1;
  return;
}

// execGetAttachedComponent @ 14f01c260

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UCableComponent::execGetAttachedComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  UActorComponent *pUVar2;
  UClass *pUVar3;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = FComponentReference::GetComponent
                     ((FComponentReference *)&param_1[0x23].field_0x20,
                      *(AActor **)&param_1[4].field_0x8);
  if (pUVar2 != (UActorComponent *)0x0) {
    pUVar3 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      *(UActorComponent **)param_3 = pUVar2;
      return;
    }
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetCableParticleLocations @ 14f01c2f0

void __cdecl
UCableComponent::execGetCableParticleLocations(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FProperty *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  ForAnyElementType *pFVar12;
  longlong lVar13;
  undefined1 local_res8 [8];
  ForAnyElementType local_38;
  undefined8 local_30;
  
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar12 = &local_38;
  if ((ForAnyElementType *)param_2->MostRecentPropertyAddress != (ForAnyElementType *)0x0) {
    pFVar12 = (ForAnyElementType *)param_2->MostRecentPropertyAddress;
  }
  piVar1 = (int *)((longlong)&pFVar12[1].Data + 4);
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&pFVar12[1].Data = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,pFVar12,0,piVar1);
  }
  lVar11 = *(longlong *)(param_1 + 0x28);
  iVar3 = *(int *)&param_1[0x28].field_0x8;
  pFVar10 = (FScriptContainerElement *)(lVar11 + 8);
  lVar13 = (longlong)iVar3 * 0x38 + lVar11;
  while( true ) {
    if (*(int *)&param_1[0x28].field_0x8 != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FCableParticle_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (lVar11 == lVar13) break;
    if ((pFVar12->Data <= pFVar10) && (pFVar10 < pFVar12->Data + (longlong)*piVar1 * 0x18)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar9 = *(int *)&pFVar12[1].Data;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,pFVar12,piVar1);
    }
    lVar11 = lVar11 + 0x38;
    *(int *)&pFVar12[1].Data = iVar9 + 1;
    uVar7 = *(undefined8 *)(pFVar10 + 8);
    pFVar5 = pFVar12->Data;
    pFVar2 = pFVar5 + (longlong)iVar9 * 0x18;
    *(undefined8 *)pFVar2 = *(undefined8 *)pFVar10;
    *(undefined8 *)(pFVar2 + 8) = uVar7;
    pFVar2 = pFVar10 + 0x10;
    pFVar10 = pFVar10 + 0x38;
    *(undefined8 *)(pFVar5 + (longlong)iVar9 * 0x18 + 0x10) = *(undefined8 *)pFVar2;
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return;
}

// execSetAttachEndTo @ 14f01c4c0

void __cdecl UCableComponent::execSetAttachEndTo(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  undefined8 local_res10;
  UObject *local_res20;
  UObject *local_28 [2];
  
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  uVar3 = local_res10;
  uVar2 = local_res8;
  local_28[0] = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res20);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&param_1[0x24].field_0x18,(FObjectPtr)local_28);
  *(undefined8 *)&param_1[0x24].field_0x20 = uVar2;
  *(undefined8 *)&param_1[0x23].field_0x20 = uVar3;
  return;
}

// execSetAttachEndToComponent @ 14f01c600

void __cdecl
UCableComponent::execSetAttachEndToComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  undefined8 local_res8;
  UObject *local_res10 [2];
  UObject *local_res20;
  
  pUVar4 = (UObject *)0x0;
  local_res10[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar3 = local_res10[0];
  uVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] != (UObject *)0x0) {
    pUVar4 = *(UObject **)&local_res10[0][4].field_0x8;
  }
  local_res20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&param_1[0x24].field_0x18,(FObjectPtr)&local_res20);
  *(undefined8 *)&param_1[0x23].field_0x20 = 0;
  local_res20 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&param_1[0x24].field_0x10,(FObjectPtr)&local_res20);
  *(undefined8 *)&param_1[0x24].field_0x20 = uVar2;
  return;
}

