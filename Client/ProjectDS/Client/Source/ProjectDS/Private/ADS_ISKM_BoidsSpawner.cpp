// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 19

// StaticClass @ 14b4c9fc0

UClass * __cdecl ADS_ISKM_BoidsSpawner::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_ISKM_BoidsSpawner.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ISKM_BoidsSpawner",
               &Z_Registration_Info_UClass_ADS_ISKM_BoidsSpawner.InnerSingleton,
               StaticRegisterNativesADS_ISKM_BoidsSpawner,0x610,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_ISKM_BoidsSpawner>,
               InternalVTableHelperCtorCaller<ADS_ISKM_BoidsSpawner>,local_res8,
               AWN_ISKM_BoidsActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_ISKM_BoidsSpawner.InnerSingleton;
}

// ADS_ISKM_BoidsSpawner @ 14b4cb170

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADS_ISKM_BoidsSpawner * __thiscall
ADS_ISKM_BoidsSpawner::ADS_ISKM_BoidsSpawner(ADS_ISKM_BoidsSpawner *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  
  AWN_ISKM_BoidsActor::AWN_ISKM_BoidsActor((AWN_ISKM_BoidsActor *)this,param_1);
  this->TileSize = 40.0;
  *(undefined ***)this = &_vftable__for__AActor__;
  this->ISKM_BoidsType = None;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__IWN_ISKM_Controller__;
  (this->InitialProperty).CombackNaviInfoVolume.WeakPtr = (FWeakObjectPtr)0x0;
  (this->TargetList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetList).ArrayNum = 0;
  (this->TargetList).ArrayMax = 0;
  this->bDrawComebackRange = false;
  this->bDrawRunAwayRange = false;
  this->bDrawProwlRange = false;
  this->SqrtSampleNum = 4;
  this->bShowNavInfo = false;
  (this->InitialProperty).StepHeight = 45.0;
  (this->InitialProperty).WalkableZ = 0.71;
  (this->InitialProperty).RunAwayMinRange = 1000.0;
  (this->InitialProperty).RunAwayMaxRange = 2000.0;
  (this->InitialProperty).RunAwayExceptAngle = 45.0;
  (this->InitialProperty).RunAwayRange = 300.0;
  (this->InitialProperty).RunAwayMaxSpeed = 350.0;
  (this->InitialProperty).RunAwayAcceleration = 250.0;
  (this->InitialProperty).CombackCenterPointRage = 0.0;
  (this->InitialProperty).ComebackMaxSpeed = 350.0;
  (this->InitialProperty).ComebackAcceleration = 250.0;
  (this->InitialProperty).ComebackDist = 2000.0;
  (this->InitialProperty).ProwlMinRange = 0.0;
  (this->InitialProperty).ProwlMaxRange = 2000.0;
  (this->InitialProperty).ProwlMaxSpeed = 50.0;
  (this->InitialProperty).ProwlAcceleration = 20.0;
  (this->InitialProperty).ChaseRange = 1000.0;
  (this->InitialProperty).ChaseApproachRange = 50.0;
  (this->InitialProperty).ChaseMaxSpeed = 350.0;
  (this->InitialProperty).ChaseAcceleration = 250.0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ExTransform).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->ExTransform).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ExTransform).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->ExTransform).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ExTransform).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->ExTransform).Scale3D.ZW.m128d_f64 = auVar8;
  (this->NavInfo).BoxLocation.field0_0x0._s_0.X = 0.0;
  (this->NavInfo).BoxLocation.field0_0x0._s_0.Y = 0.0;
  (this->NavInfo).BoxLocation.field0_0x0._s_0.Z = 0.0;
  (this->NavInfo).BoxExtent.field0_0x0._s_0.X = 0.0;
  (this->NavInfo).BoxExtent.field0_0x0._s_0.Y = 0.0;
  (this->NavInfo).BoxExtent.field0_0x0._s_0.Z = 0.0;
  (this->NavInfo).TileSize = 0;
  (this->NavInfo).OnCreateFinish = false;
  *(undefined3 *)&(this->NavInfo).field_0x6d = 0;
  (this->NavInfo).TileGraph.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NavInfo).TileGraph.ArrayNum = 0;
  (this->NavInfo).TileGraph.ArrayMax = 0;
  (this->NavInfo).RootTileList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NavInfo).RootTileList.ArrayNum = 0;
  (this->NavInfo).RootTileList.ArrayMax = 0;
  (this->NavInfo).RootTileNumList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NavInfo).RootTileNumList.ArrayNum = 0;
  (this->NavInfo).RootTileNumList.ArrayMax = 0;
  (this->NavInfo).TileMapWidth = -1;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->NavInfo).TileMapHeight = -1;
  (this->NavInfo).BoxLocation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->NavInfo).BoxLocation.field0_0x0._s_0.Y = (double)uVar9;
  (this->NavInfo).BoxLocation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->NavInfo).BoxExtent.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->NavInfo).BoxExtent.field0_0x0._s_0.Y = (double)uVar9;
  (this->NavInfo).BoxExtent.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->NavInfo).TileSize = 0x32;
  (this->NavInfo).OnCreateFinish = false;
  (this->TileGraphPaintColorData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TileGraphPaintColorData).ArrayNum = 0;
  (this->TileGraphPaintColorData).ArrayMax = 0;
  (this->TileGraphTexture).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  (this->DecalActorMaterial).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  (this->DecalActor).field0_0x0.DebugPtr = (ADecalActor *)0x0;
  (this->BoidsController).Object = (FDS_ISKM_BoidsController *)0x0;
  (this->BoidsController).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~ADS_ISKM_BoidsSpawner @ 14b4cbde0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_ISKM_BoidsSpawner::~ADS_ISKM_BoidsSpawner(ADS_ISKM_BoidsSpawner *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__IWN_ISKM_Controller__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BoidsController).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->TileGraphPaintColorData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NavInfo).RootTileNumList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NavInfo).RootTileList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NavInfo).TileGraph.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TargetList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AWN_ISKM_BoidsActor::~AWN_ISKM_BoidsActor((AWN_ISKM_BoidsActor *)this);
  return;
}

// GetPrivateStaticClass @ 14b4ccea0

UClass * __cdecl ADS_ISKM_BoidsSpawner::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_ISKM_BoidsSpawner.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ISKM_BoidsSpawner",
               &Z_Registration_Info_UClass_ADS_ISKM_BoidsSpawner.InnerSingleton,
               StaticRegisterNativesADS_ISKM_BoidsSpawner,0x610,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_ISKM_BoidsSpawner>,
               InternalVTableHelperCtorCaller<ADS_ISKM_BoidsSpawner>,local_res8,
               AWN_ISKM_BoidsActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_ISKM_BoidsSpawner.InnerSingleton;
}

// StaticRegisterNativesADS_ISKM_BoidsSpawner @ 14b4cdbb0

void __cdecl ADS_ISKM_BoidsSpawner::StaticRegisterNativesADS_ISKM_BoidsSpawner(void)

{
  return;
}

// ADS_ISKM_BoidsSpawner @ 14b863d70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADS_ISKM_BoidsSpawner * __thiscall
ADS_ISKM_BoidsSpawner::ADS_ISKM_BoidsSpawner
          (ADS_ISKM_BoidsSpawner *this,FObjectInitializer *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  
  AWN_ISKM_BoidsActor::AWN_ISKM_BoidsActor((AWN_ISKM_BoidsActor *)this,param_1);
  this->TileSize = 40.0;
  *(undefined ***)this = &_vftable__for__AActor__;
  this->ISKM_BoidsType = None;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__IWN_ISKM_Controller__;
  (this->InitialProperty).CombackNaviInfoVolume.WeakPtr = (FWeakObjectPtr)0x0;
  (this->TargetList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetList).ArrayNum = 0;
  (this->TargetList).ArrayMax = 0;
  this->bDrawComebackRange = false;
  this->bDrawRunAwayRange = false;
  this->bDrawProwlRange = false;
  this->SqrtSampleNum = 4;
  this->bShowNavInfo = false;
  (this->InitialProperty).StepHeight = 45.0;
  (this->InitialProperty).WalkableZ = 0.71;
  (this->InitialProperty).RunAwayMinRange = 1000.0;
  (this->InitialProperty).RunAwayMaxRange = 2000.0;
  (this->InitialProperty).RunAwayExceptAngle = 45.0;
  (this->InitialProperty).RunAwayRange = 300.0;
  (this->InitialProperty).RunAwayMaxSpeed = 350.0;
  (this->InitialProperty).RunAwayAcceleration = 250.0;
  (this->InitialProperty).CombackCenterPointRage = 0.0;
  (this->InitialProperty).ComebackMaxSpeed = 350.0;
  (this->InitialProperty).ComebackAcceleration = 250.0;
  (this->InitialProperty).ComebackDist = 2000.0;
  (this->InitialProperty).ProwlMinRange = 0.0;
  (this->InitialProperty).ProwlMaxRange = 2000.0;
  (this->InitialProperty).ProwlMaxSpeed = 50.0;
  (this->InitialProperty).ProwlAcceleration = 20.0;
  (this->InitialProperty).ChaseRange = 1000.0;
  (this->InitialProperty).ChaseApproachRange = 50.0;
  (this->InitialProperty).ChaseMaxSpeed = 350.0;
  (this->InitialProperty).ChaseAcceleration = 250.0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ExTransform).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->ExTransform).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ExTransform).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->ExTransform).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ExTransform).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->ExTransform).Scale3D.ZW.m128d_f64 = auVar8;
  (this->NavInfo).BoxLocation.field0_0x0._s_0.X = 0.0;
  (this->NavInfo).BoxLocation.field0_0x0._s_0.Y = 0.0;
  (this->NavInfo).BoxLocation.field0_0x0._s_0.Z = 0.0;
  (this->NavInfo).BoxExtent.field0_0x0._s_0.X = 0.0;
  (this->NavInfo).BoxExtent.field0_0x0._s_0.Y = 0.0;
  (this->NavInfo).BoxExtent.field0_0x0._s_0.Z = 0.0;
  (this->NavInfo).TileSize = 0;
  (this->NavInfo).OnCreateFinish = false;
  *(undefined3 *)&(this->NavInfo).field_0x6d = 0;
  (this->NavInfo).TileGraph.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NavInfo).TileGraph.ArrayNum = 0;
  (this->NavInfo).TileGraph.ArrayMax = 0;
  (this->NavInfo).RootTileList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NavInfo).RootTileList.ArrayNum = 0;
  (this->NavInfo).RootTileList.ArrayMax = 0;
  (this->NavInfo).RootTileNumList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NavInfo).RootTileNumList.ArrayNum = 0;
  (this->NavInfo).RootTileNumList.ArrayMax = 0;
  (this->NavInfo).TileMapWidth = -1;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->NavInfo).TileMapHeight = -1;
  (this->NavInfo).BoxLocation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->NavInfo).BoxLocation.field0_0x0._s_0.Y = (double)uVar9;
  (this->NavInfo).BoxLocation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->NavInfo).BoxExtent.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->NavInfo).BoxExtent.field0_0x0._s_0.Y = (double)uVar9;
  (this->NavInfo).BoxExtent.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->NavInfo).TileSize = 0x32;
  (this->NavInfo).OnCreateFinish = false;
  (this->TileGraphPaintColorData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TileGraphPaintColorData).ArrayNum = 0;
  (this->TileGraphPaintColorData).ArrayMax = 0;
  (this->TileGraphTexture).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  (this->DecalActorMaterial).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  (this->DecalActor).field0_0x0.DebugPtr = (ADecalActor *)0x0;
  (this->BoidsController).Object = (FDS_ISKM_BoidsController *)0x0;
  (this->BoidsController).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// Destroyed @ 14b86ec90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall ADS_ISKM_BoidsSpawner::Destroyed(ADS_ISKM_BoidsSpawner *this)

{
  TSharedPtr<FDS_ISKM_BoidsController,1> *this_00;
  FObjectPtr_u_0 *pFVar1;
  longlong lVar2;
  TObjectPtr<USceneComponent> *pTVar3;
  AActor *this_01;
  code *pcVar4;
  bool bVar5;
  UWorld *pUVar6;
  FDS_ISKM_BoidsController *pFVar7;
  UClass *pUVar8;
  FUObjectItem *pFVar9;
  uint uVar10;
  ulonglong uVar11;
  ForAnyElementType FVar12;
  undefined1 local_res8 [8];
  uint local_res10;
  FObjectPtr_u_0 local_res18 [2];
  ForAnyElementType local_68;
  uint local_60;
  int local_5c;
  TSharedPtr<FDS_ISKM_BoidsController,1> local_58;
  
  (this->TileGraphPaintColorData).ArrayNum = 0;
  if ((this->TileGraphPaintColorData).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->TileGraphPaintColorData).AllocatorInstance,0,
               &(this->TileGraphPaintColorData).ArrayMax);
  }
  pUVar6 = AActor::GetWorld((AActor *)this);
  if ((pUVar6 != (UWorld *)0x0) &&
     ((bVar5 = UWorld::IsGameWorld(pUVar6), bVar5 || (bVar5 = UWorld::IsEditorWorld(pUVar6), bVar5))
     )) {
    bVar5 = UWorld::IsGameWorld(pUVar6);
    if ((bVar5) &&
       (this_00 = &this->BoidsController, this_00->Object != (FDS_ISKM_BoidsController *)0x0)) {
      pFVar7 = TSharedPtr<FDS_ISKM_BoidsController,1>::operator->(this_00);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar7->OnStatesAddFinishDelegate);
      local_58.Object = (FDS_ISKM_BoidsController *)0x0;
      local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (this_00 != &local_58) {
        this_00->Object = (FDS_ISKM_BoidsController *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->BoidsController).SharedReferenceCount,&local_58.SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
    }
    lVar2 = *(longlong *)&this->field_0x1b8;
    if ((lVar2 != 0) && (uVar10 = *(uint *)(lVar2 + 0xf0), 0 < (int)uVar10)) {
      local_68.Data = (FScriptContainerElement *)0x0;
      pTVar3 = *(TObjectPtr<USceneComponent> **)(lVar2 + 0xe8);
      local_60 = uVar10;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar10,0,&local_68,uVar10,&local_5c);
      ConstructItems<TObjectPtr<USceneComponent>,TObjectPtr<USceneComponent>,int>
                (local_68.Data,pTVar3,uVar10);
      uVar11 = (ulonglong)(int)local_60;
      local_res10 = local_60;
      pFVar1 = (FObjectPtr_u_0 *)(local_68.Data + uVar11 * 8);
      FVar12.Data = local_68.Data;
      while( true ) {
        if (local_60 != (uint)uVar11) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TObjectPtr<USceneComponent>,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res8);
        }
        if ((FObjectPtr_u_0 *)FVar12.Data == pFVar1) break;
        local_res18[0] = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)FVar12.Data;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14b86ee46:
          if (local_res18[0].Handle != (UObject *)0x0) {
            pUVar8 = Z_Construct_UClass_UBrushComponent_NoRegister();
            bVar5 = FObjectPtr::IsA((FObjectPtr *)local_res18,pUVar8);
            if ((bVar5) && (local_res18[0].Handle != (UObject *)0x0)) {
              this_01 = *(AActor **)&local_res18[0].Handle[4].field_0x8;
              pUVar6 = AActor::GetWorld((AActor *)this);
              UWorld::RemoveActor(pUVar6,this_01,false);
              AActor::Destroy(this_01,false,false);
              pFVar9 = FUObjectArray::IndexToObject
                                 (&GUObjectArray,*(int *)((longlong)&this_01->_padding_ + 4));
              if ((((uint)((ulonglong)(pFVar9->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) != 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("!IsRooted()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                                     ,0xb8,L""), bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              UObjectBase::AtomicallySetFlags((UObjectBase *)this_01,RF_MirroredGarbage);
              pFVar9 = FUObjectArray::IndexToObject
                                 (&GUObjectArray,*(int *)((longlong)&this_01->_padding_ + 4));
              do {
                lVar2 = (pFVar9->field0_0x0).FlagsAndRefCount;
                uVar10 = (uint)((ulonglong)lVar2 >> 0x20);
                if ((uVar10 >> 0x15 & 1) != 0) break;
                if (((ulonglong)pFVar9 & 7) != 0) {
                  FWindowsPlatformAtomics::HandleAtomicsFailure
                            (
                            L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                            );
                }
                LOCK();
                bVar5 = lVar2 == (pFVar9->field0_0x0).FlagsAndRefCount;
                if (bVar5) {
                  (pFVar9->field0_0x0).FlagsAndRefCount =
                       (longlong)(int)uVar10 << 0x20 | (longlong)(int)lVar2 | 0x20000000000000;
                }
                UNLOCK();
              } while (!bVar5);
              pFVar9 = FUObjectArray::IndexToObject
                                 (&GUObjectArray,*(int *)((longlong)&this_01->_padding_ + 4));
              FUObjectItem::ClearRootFlags(pFVar9,Async);
              uVar11 = (ulonglong)local_res10;
            }
          }
        }
        else if (local_res18[0].Handle != (UObject *)0x0) {
          UE::GC::MarkAsReachable(local_res18[0].Handle);
          goto LAB_14b86ee46;
        }
        FVar12.Data = FVar12.Data + 8;
      }
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data);
      }
    }
    (**(code **)(*(longlong *)&this->field_0x2c0 + 0x50))();
    AActor::Destroyed((AActor *)this);
  }
  return;
}

// EndPlay @ 14b86f240

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_ISKM_BoidsSpawner::EndPlay(ADS_ISKM_BoidsSpawner *this,Type param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  if (param_1 == RemovedFromWorld) {
    AWN_ISKM_BoidsActor::UnLoad((AWN_ISKM_BoidsActor *)this);
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->BoidsController != (TSharedPtr<FDS_ISKM_BoidsController,1> *)&local_18) {
      (this->BoidsController).Object = (FDS_ISKM_BoidsController *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->BoidsController).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
  }
  AWN_ISKM_BoidsActor::EndPlay((AWN_ISKM_BoidsActor *)this,param_1);
  return;
}

// GetController @ 14b876960

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

void __thiscall ADS_ISKM_BoidsSpawner::GetController(ADS_ISKM_BoidsSpawner *this)

{
  TSharedPtr<FDS_ISKM_BoidsController,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FDS_ISKM_BoidsController_Raven,1> *pTVar5;
  FSharedReferencer<1> FVar6;
  FDS_ISKM_BoidsController *pFVar7;
  FDS_ISKM_BoidsController *local_a8;
  FSharedReferencer<1> FStack_a0;
  FDS_ISKM_BoidsController *local_98;
  FSharedReferencer<1> FStack_90;
  FDS_ISKM_BoidsController *local_88;
  FSharedReferencer<1> FStack_80;
  FDS_ISKM_BoidsController *local_78;
  FSharedReferencer<1> FStack_70;
  FDS_ISKM_BoidsController *local_68;
  FSharedReferencer<1> FStack_60;
  FDS_ISKM_BoidsController *local_58;
  FSharedReferencer<1> FStack_50;
  FDS_ISKM_BoidsController_Raven *local_48;
  FSharedReferencer<1> local_40;
  undefined8 local_38;
  FSharedReferencer<1> FStack_30;
  TSharedRef<FDS_ISKM_BoidsController_Raven,1> local_28;
  
  pTVar1 = &this->BoidsController;
  FVar6.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_38 = 0;
  FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TSharedPtr<FDS_ISKM_BoidsController,1> *)&local_38) {
    pTVar1->Object = (FDS_ISKM_BoidsController *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->BoidsController).SharedReferenceCount,&FStack_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  switch(this->ISKM_BoidsType) {
  case Hen:
    pTVar4 = ::operator_new(0xa8);
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      local_a8 = ___xmm_00000000000000000000000000000010;
      pFVar7 = (FDS_ISKM_BoidsController *)&DAT_00000010;
      FStack_a0.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar4->SharedReferenceCount = (atomic<int>)0x1;
      pTVar4->WeakReferenceCount = (atomic<int>)0x1;
      pTVar4->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFDS_ISKM_BoidsController_Chicken_Hen___00_SharedPointerInternals__6B_
      ;
      pTVar4[1]._padding_ = 0;
      pTVar4[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[2]._padding_ = 0;
      pTVar4[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[3]._padding_ = 0;
      pTVar4[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[3].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[4]._padding_ = 0;
      pTVar4[4].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[4].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[5]._padding_ = 0;
      pTVar4[5].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[5].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[6]._padding_ = 0;
      pTVar4[6].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[6].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[7]._padding_ = 0;
      pTVar4[7].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[7].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[8]._padding_ = 0;
      pTVar4[8].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[8].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[9]._padding_ = 0;
      pTVar4[9].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[9].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[10]._padding_ = 0;
      FDS_ISKM_BoidsController_Chicken::FDS_ISKM_BoidsController_Chicken
                ((FDS_ISKM_BoidsController_Chicken *)(pTVar4 + 1));
      pFVar7 = (FDS_ISKM_BoidsController *)(pTVar4 + 1);
      pTVar4[1]._padding_ = (longlong)&___7FDS_ISKM_BoidsController_Chicken_Hen__6B_;
      if ((pFVar7 == (FDS_ISKM_BoidsController *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      FStack_a0.ReferenceController = pTVar4;
      FVar6.ReferenceController = pTVar4;
      local_a8 = pFVar7;
    }
    if (pTVar1 != (TSharedPtr<FDS_ISKM_BoidsController,1> *)&local_a8) {
      pTVar1->Object = pFVar7;
      local_a8 = (FDS_ISKM_BoidsController *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->BoidsController).SharedReferenceCount,&FStack_a0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_a0.ReferenceController);
    break;
  case Cock:
    pTVar4 = ::operator_new(0xa8);
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      local_98 = ___xmm_00000000000000000000000000000010;
      pFVar7 = (FDS_ISKM_BoidsController *)&DAT_00000010;
      FStack_90.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar4->SharedReferenceCount = (atomic<int>)0x1;
      pTVar4->WeakReferenceCount = (atomic<int>)0x1;
      pTVar4->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFDS_ISKM_BoidsController_Chicken_Cock___00_SharedPointerInternals__6B_
      ;
      pTVar4[1]._padding_ = 0;
      pTVar4[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[2]._padding_ = 0;
      pTVar4[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[3]._padding_ = 0;
      pTVar4[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[3].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[4]._padding_ = 0;
      pTVar4[4].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[4].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[5]._padding_ = 0;
      pTVar4[5].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[5].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[6]._padding_ = 0;
      pTVar4[6].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[6].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[7]._padding_ = 0;
      pTVar4[7].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[7].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[8]._padding_ = 0;
      pTVar4[8].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[8].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[9]._padding_ = 0;
      pTVar4[9].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[9].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[10]._padding_ = 0;
      FDS_ISKM_BoidsController_Chicken::FDS_ISKM_BoidsController_Chicken
                ((FDS_ISKM_BoidsController_Chicken *)(pTVar4 + 1));
      pFVar7 = (FDS_ISKM_BoidsController *)(pTVar4 + 1);
      pTVar4[1]._padding_ = (longlong)&___7FDS_ISKM_BoidsController_Chicken_Cock__6B_;
      if ((pFVar7 == (FDS_ISKM_BoidsController *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      FStack_90.ReferenceController = pTVar4;
      FVar6.ReferenceController = pTVar4;
      local_98 = pFVar7;
    }
    if (pTVar1 != (TSharedPtr<FDS_ISKM_BoidsController,1> *)&local_98) {
      pTVar1->Object = pFVar7;
      local_98 = (FDS_ISKM_BoidsController *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->BoidsController).SharedReferenceCount,&FStack_90);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_90.ReferenceController);
    break;
  case Chick:
    pTVar4 = ::operator_new(0xa8);
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      local_88 = ___xmm_00000000000000000000000000000010;
      pFVar7 = (FDS_ISKM_BoidsController *)&DAT_00000010;
      FStack_80.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar4->SharedReferenceCount = (atomic<int>)0x1;
      pTVar4->WeakReferenceCount = (atomic<int>)0x1;
      pTVar4->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFDS_ISKM_BoidsController_Chicken_Chick___00_SharedPointerInternals__6B_
      ;
      pTVar4[6]._padding_ = 0;
      pTVar4[7]._padding_ = 0;
      pTVar4[7].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[7].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[8]._padding_ = 0;
      pTVar4[8].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[8].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[9]._padding_ = 0;
      pTVar4[9].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[9].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[10]._padding_ = 0;
      pTVar4[1]._padding_ = (longlong)&___7FDS_ISKM_BoidsController_Chicken_Chick__6B_;
      pTVar4[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[2]._padding_ = 0;
      pTVar4[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[3]._padding_ = 0;
      pTVar4[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[3].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[4]._padding_ = 0;
      pTVar4[4].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[4].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[5]._padding_ = 0;
      pTVar4[5].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[5].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[6].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[6].WeakReferenceCount = (atomic<int>)0x0;
      ::FName::FName((FName *)(pTVar4 + 7),"AS_NPC_Ani_Chi_1_N_03_Lby_Std01");
      ::FName::FName((FName *)&pTVar4[7].SharedReferenceCount,"AS_NPC_Ani_Chi_1_N_03_Lby_Std02");
      ::FName::FName((FName *)(pTVar4 + 8),"AS_NPC_Ani_Chi_1_N_03_Lby_Std03");
      ::FName::FName((FName *)&pTVar4[8].SharedReferenceCount,"AS_NPC_Ani_Chi_1_N_03_Lby_Std04");
      ::FName::FName((FName *)(pTVar4 + 9),"AS_NPC_Ani_Chi_1_N_03_Lby_Std05");
      ::FName::FName((FName *)&pTVar4[9].SharedReferenceCount,"AS_NPC_Ani_Chi_1_N_03_Lby_Walk01");
      ::FName::FName((FName *)(pTVar4 + 10),"AS_NPC_Ani_Chi_1_N_03_Lby_Run01");
      pFVar7 = (FDS_ISKM_BoidsController *)(pTVar4 + 1);
      if ((pFVar7 == (FDS_ISKM_BoidsController *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      FStack_80.ReferenceController = pTVar4;
      FVar6.ReferenceController = pTVar4;
      local_88 = pFVar7;
    }
    if (pTVar1 != (TSharedPtr<FDS_ISKM_BoidsController,1> *)&local_88) {
      pTVar1->Object = pFVar7;
      local_88 = (FDS_ISKM_BoidsController *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->BoidsController).SharedReferenceCount,&FStack_80);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_80.ReferenceController);
    break;
  case Pig:
    pTVar4 = ::operator_new(0xb0);
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      local_78 = ___xmm_00000000000000000000000000000010;
      pFVar7 = (FDS_ISKM_BoidsController *)&DAT_00000010;
      FStack_70.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar4->SharedReferenceCount = (atomic<int>)0x1;
      pTVar4->WeakReferenceCount = (atomic<int>)0x1;
      pTVar4->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFDS_ISKM_BoidsController_Pig___00_SharedPointerInternals__6B_
      ;
      pTVar4[6]._padding_ = 0;
      pTVar4[7]._padding_ = 0;
      pTVar4[7].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[7].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[8]._padding_ = 0;
      pTVar4[8].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[8].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[9]._padding_ = 0;
      pTVar4[9].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[9].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[10]._padding_ = 0;
      pTVar4[10].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[10].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[2]._padding_ = 0;
      pTVar4[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[3]._padding_ = 0;
      pTVar4[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[3].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[4]._padding_ = 0;
      pTVar4[4].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[4].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[5]._padding_ = 0;
      pTVar4[5].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[5].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[1]._padding_ = (longlong)&___7FDS_ISKM_BoidsController_Pig__6B_;
      pTVar4[6].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[6].WeakReferenceCount = (atomic<int>)0x0;
      ::FName::FName((FName *)(pTVar4 + 7),"AS_NPC_Ani_Pig_1_N_01_Lby_Std01");
      ::FName::FName((FName *)&pTVar4[7].SharedReferenceCount,"AS_NPC_Ani_Pig_1_N_01_Lby_Std02");
      ::FName::FName((FName *)(pTVar4 + 8),"AS_NPC_Ani_Pig_1_N_01_Lby_Std03");
      ::FName::FName((FName *)&pTVar4[8].SharedReferenceCount,"AS_NPC_Ani_Pig_1_N_01_Lby_Std04");
      ::FName::FName((FName *)(pTVar4 + 9),"AS_NPC_Ani_Pig_1_N_01_Lby_Std05");
      ::FName::FName((FName *)&pTVar4[9].SharedReferenceCount,"AS_NPC_Ani_Pig_1_N_01_Lby_Std06");
      ::FName::FName((FName *)(pTVar4 + 10),"AS_NPC_Ani_Pig_1_N_01_Lby_Walk01");
      ::FName::FName((FName *)&pTVar4[10].SharedReferenceCount,"AS_NPC_Ani_Pig_1_N_01_Lby_Run01");
      pFVar7 = (FDS_ISKM_BoidsController *)(pTVar4 + 1);
      if ((pFVar7 == (FDS_ISKM_BoidsController *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      FStack_70.ReferenceController = pTVar4;
      FVar6.ReferenceController = pTVar4;
      local_78 = pFVar7;
    }
    if (pTVar1 != (TSharedPtr<FDS_ISKM_BoidsController,1> *)&local_78) {
      pTVar1->Object = pFVar7;
      local_78 = (FDS_ISKM_BoidsController *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->BoidsController).SharedReferenceCount,&FStack_70);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_70.ReferenceController);
    break;
  case Chital:
    pTVar4 = ::operator_new(0xb8);
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      local_68 = ___xmm_00000000000000000000000000000010;
      pFVar7 = (FDS_ISKM_BoidsController *)&DAT_00000010;
      FStack_60.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar4->SharedReferenceCount = (atomic<int>)0x1;
      pTVar4->WeakReferenceCount = (atomic<int>)0x1;
      pTVar4->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFDS_ISKM_BoidsController_Chital___00_SharedPointerInternals__6B_
      ;
      memset(pTVar4 + 1,0,0xa8);
      pTVar4[1]._padding_ = (longlong)&___7FDS_ISKM_BoidsController_Chital__6B_;
      ::FName::FName((FName *)(pTVar4 + 7),"AS_NPC_Animal_11_Chital_1_M_01_Lby_Std01");
      ::FName::FName((FName *)&pTVar4[7].SharedReferenceCount,
                     "AS_NPC_Animal_11_Chital_1_M_01_Lby_Std02");
      ::FName::FName((FName *)(pTVar4 + 8),"AS_NPC_Animal_11_Chital_1_M_01_Lby_Std03");
      ::FName::FName((FName *)&pTVar4[8].SharedReferenceCount,
                     "AS_NPC_Animal_11_Chital_1_M_01_Lby_Std04");
      ::FName::FName((FName *)(pTVar4 + 9),"AS_NPC_Animal_11_Chital_1_M_01_Lby_Std05");
      ::FName::FName((FName *)&pTVar4[9].SharedReferenceCount,
                     "AS_NPC_Animal_11_Chital_1_M_01_Lby_Std06");
      ::FName::FName((FName *)(pTVar4 + 10),"AS_NPC_Animal_11_Chital_1_M_01_Lby_Std07");
      ::FName::FName((FName *)&pTVar4[10].SharedReferenceCount,
                     "AS_NPC_Animal_11_Chital_1_M_01_Lby_Walk01");
      ::FName::FName((FName *)(pTVar4 + 0xb),"AS_NPC_Animal_11_Chital_1_M_01_Lby_Run01");
      pFVar7 = (FDS_ISKM_BoidsController *)(pTVar4 + 1);
      if ((pFVar7 == (FDS_ISKM_BoidsController *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      FStack_60.ReferenceController = pTVar4;
      FVar6.ReferenceController = pTVar4;
      local_68 = pFVar7;
    }
    if (pTVar1 != (TSharedPtr<FDS_ISKM_BoidsController,1> *)&local_68) {
      pTVar1->Object = pFVar7;
      local_68 = (FDS_ISKM_BoidsController *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->BoidsController).SharedReferenceCount,&FStack_60);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_60.ReferenceController);
    break;
  case Duck:
    pTVar4 = ::operator_new(0x98);
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      local_58 = ___xmm_00000000000000000000000000000010;
      pFVar7 = (FDS_ISKM_BoidsController *)&DAT_00000010;
      FStack_50.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar4->SharedReferenceCount = (atomic<int>)0x1;
      pTVar4->WeakReferenceCount = (atomic<int>)0x1;
      pTVar4->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFDS_ISKM_BoidsController_Duck___00_SharedPointerInternals__6B_
      ;
      pTVar4[6]._padding_ = 0;
      pTVar4[7]._padding_ = 0;
      pTVar4[7].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[7].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[8]._padding_ = 0;
      pTVar4[8].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[8].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[9]._padding_ = 0;
      pTVar4[1]._padding_ = (longlong)&___7FDS_ISKM_BoidsController_Duck__6B_;
      pTVar4[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[2]._padding_ = 0;
      pTVar4[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[3]._padding_ = 0;
      pTVar4[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[3].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[4]._padding_ = 0;
      pTVar4[4].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[4].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[5]._padding_ = 0;
      pTVar4[5].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[5].WeakReferenceCount = (atomic<int>)0x0;
      pTVar4[6].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[6].WeakReferenceCount = (atomic<int>)0x0;
      ::FName::FName((FName *)(pTVar4 + 7),"AS_NPC_Ani_Duc_1_N_01_Lby_Std01");
      ::FName::FName((FName *)&pTVar4[7].SharedReferenceCount,"AS_NPC_Ani_Duc_1_N_01_Lby_Std02");
      ::FName::FName((FName *)(pTVar4 + 8),"AS_NPC_Ani_Duc_1_N_01_Lby_Walk01");
      ::FName::FName((FName *)&pTVar4[8].SharedReferenceCount,
                     "AS_NPC_Ani_Duc_1_N_01_Lby_Trans_TakeOff_Land");
      ::FName::FName((FName *)(pTVar4 + 9),"AS_NPC_Ani_Duc_1_N_01_Lby_Fly");
      pFVar7 = (FDS_ISKM_BoidsController *)(pTVar4 + 1);
      if ((pFVar7 == (FDS_ISKM_BoidsController *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      FStack_50.ReferenceController = pTVar4;
      FVar6.ReferenceController = pTVar4;
      local_58 = pFVar7;
    }
    if (pTVar1 != (TSharedPtr<FDS_ISKM_BoidsController,1> *)&local_58) {
      pTVar1->Object = pFVar7;
      local_58 = (FDS_ISKM_BoidsController *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->BoidsController).SharedReferenceCount,&FStack_50);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_50.ReferenceController);
    break;
  case Raven:
    pTVar5 = MakeShared<FDS_ISKM_BoidsController_Raven,1>(&local_28);
    local_40.ReferenceController = (pTVar5->SharedReferenceCount).ReferenceController;
    local_48 = pTVar5->Object;
    if (local_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_40.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_40.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar1 != (TSharedPtr<FDS_ISKM_BoidsController,1> *)&local_48) {
      pTVar1->Object = (FDS_ISKM_BoidsController *)local_48;
      local_48 = (FDS_ISKM_BoidsController_Raven *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->BoidsController).SharedReferenceCount,&local_40);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40.ReferenceController);
    FVar6.ReferenceController = local_28.SharedReferenceCount.ReferenceController;
    break;
  default:
    goto switchD_14b8769e0_default;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
switchD_14b8769e0_default:
  return;
}

// GetMainPlayerTargetActor @ 14b878010

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TWeakObjectPtr<AActor,FWeakObjectPtr> __thiscall
ADS_ISKM_BoidsSpawner::GetMainPlayerTargetActor(ADS_ISKM_BoidsSpawner *this)

{
  FDS_EntityBase *pFVar1;
  undefined8 *puVar2;
  FWeakObjectPtr in_RDX;
  FWeakObjectPtr local_res18;
  undefined8 local_res20;
  
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_res20 = 0;
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
  pFVar1 = FDS_EntityBase::GetMainPlayerEntityBase(true);
  if (pFVar1 == (FDS_EntityBase *)0x0) {
    *(undefined8 *)in_RDX = 0;
    local_res20 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res20);
    return (TWeakObjectPtr<AActor,FWeakObjectPtr>)in_RDX;
  }
  puVar2 = (undefined8 *)(**(code **)(pFVar1->_padding_ + 0x150))(pFVar1);
  *(undefined8 *)in_RDX = *puVar2;
  return (TWeakObjectPtr<AActor,FWeakObjectPtr>)in_RDX;
}

// ISKM_PostUpdateController @ 14b87a0a0

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
ADS_ISKM_BoidsSpawner::ISKM_PostUpdateController
          (ADS_ISKM_BoidsSpawner *this,FWN_ISKM_LodFragment *param_1,float param_2)

{
  int iVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  UWorld *pUVar5;
  VectorRegister4Double *pVVar6;
  VectorRegister4Double *pVVar7;
  longlong lVar8;
  longlong lVar9;
  double *pdVar10;
  undefined1 local_res8 [8];
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_b8;
  TVector<double>_u_0 local_98 [2];
  double local_68;
  double local_50;
  
  AWN_ISKM_BoidsActor::ISKM_PostUpdateController((AWN_ISKM_BoidsActor *)this,param_1,param_2);
  pUVar5 = AActor::GetWorld((AActor *)&this[-1].field_0x350);
  fVar4 = __real_40000000;
  fVar3 = __real_bf800000;
  pVVar7 = &UE::Math::TTransform<double>::Identity.Translation;
  if (this->field_0x228 == '\x01') {
    dVar2 = this[-1].ExTransform.Rotation.XY.m128d_f64[1];
    if (dVar2 == 0.0) {
      pVVar6 = &UE::Math::TTransform<double>::Identity.Translation;
    }
    else {
      pVVar6 = (VectorRegister4Double *)((longlong)dVar2 + 0x210);
    }
    local_d8._s_0.Z = (pVVar6->ZW).m128d_f64[0];
    local_d8._s_0.X = (pVVar6->XY).m128d_f64[0];
    local_d8._s_0.Y = (pVVar6->XY).m128d_f64[1];
    local_b8._s_0.X = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.X;
    local_b8._s_0.Y = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Y;
    local_b8._s_0.Z = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z;
    local_98[0]._s_0.Z = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
    local_98[0]._s_0.X = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
    local_98[0]._s_0.Y = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
    local_68 = local_d8._s_0.Z;
    DrawDebugCircle(pUVar5,(TVector<double> *)&local_d8._s_0,(double)*(float *)&this->field_0x1f0,
                    0x20,&FColor::Red,false,__real_bf800000,'\0',__real_40000000,
                    (TVector<double> *)&local_98[0]._s_0,(TVector<double> *)&local_b8._s_0,false);
  }
  if (this->field_0x22a == '\x01') {
    dVar2 = this[-1].ExTransform.Rotation.XY.m128d_f64[1];
    if (dVar2 != 0.0) {
      pVVar7 = (VectorRegister4Double *)((longlong)dVar2 + 0x210);
    }
    local_b8._s_0.Z = (pVVar7->ZW).m128d_f64[0];
    local_b8._s_0.X = (pVVar7->XY).m128d_f64[0];
    local_b8._s_0.Y = (pVVar7->XY).m128d_f64[1];
    local_d8._s_0.X = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.X;
    local_d8._s_0.Y = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Y;
    local_d8._s_0.Z = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z;
    local_98[0]._s_0.Z = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
    local_98[0]._s_0.X = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
    local_98[0]._s_0.Y = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
    local_68 = local_b8._s_0.Z;
    DrawDebugCircle(pUVar5,(TVector<double> *)&local_b8._s_0,(double)*(float *)&this->field_0x1f8,
                    0x20,&FColor::Blue,false,fVar3,'\0',fVar4,(TVector<double> *)&local_98[0]._s_0,
                    (TVector<double> *)&local_d8._s_0,false);
  }
  if (this->field_0x229 == '\x01') {
    lVar9 = *(longlong *)&this->field_0x188;
    iVar1 = *(int *)&this->field_0x190;
    pdVar10 = (double *)(lVar9 + 0x60);
    lVar8 = (longlong)iVar1 * 0xc0 + lVar9;
    while( true ) {
      if (*(int *)&this->field_0x190 != iVar1) {
        `TCheckedPointerIterator<FWN_ISKM_BoidInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (lVar9 == lVar8) break;
      local_b8._s_0.Z = pdVar10[2];
      local_b8._s_0.X = *pdVar10;
      local_b8._s_0.Y = pdVar10[1];
      local_d8._s_0.X = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.X;
      local_d8._s_0.Y = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Y;
      local_d8._s_0.Z = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z;
      local_98[0]._s_0.Z = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
      local_98[0]._s_0.X = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
      local_98[0]._s_0.Y = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
      local_68 = local_b8._s_0.Z;
      local_50 = local_b8._s_0.Z;
      DrawDebugCircle(pUVar5,(TVector<double> *)&local_b8._s_0,(double)*(float *)&this->field_0x1f0,
                      0x20,&FColor::Green,false,fVar3,'\0',fVar4,
                      (TVector<double> *)&local_98[0]._s_0,(TVector<double> *)&local_d8._s_0,false);
      lVar9 = lVar9 + 0xc0;
      pdVar10 = pdVar10 + 0x18;
    }
  }
  return;
}

// ISKM_PreUpdateController @ 14b87a3f0

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
ADS_ISKM_BoidsSpawner::ISKM_PreUpdateController
          (ADS_ISKM_BoidsSpawner *this,FWN_ISKM_LodFragment *param_1,float param_2)

{
  UObject *pUVar1;
  
  pUVar1 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->field_0x78);
  if (pUVar1 != (UObject *)0x0) {
    UWN_ISKM_Profile::StaticClass();
    return;
  }
  return;
}

// MarkComponentsAsGarbage @ 14b87fb20

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
ADS_ISKM_BoidsSpawner::MarkComponentsAsGarbage(ADS_ISKM_BoidsSpawner *this,bool param_1)

{
  IWN_ISKM_Controller *pIVar1;
  
  if (*(longlong *)&this->field_0x1b8 != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               (*(longlong *)&this->field_0x1b8 + 0x1b0),this);
  }
  if (*(int *)&this->field_0x2d0 != -1) {
    pIVar1 = (IWN_ISKM_Controller *)&this->field_0x2c0;
    (**(code **)(*(longlong *)pIVar1 + 0x50))(pIVar1);
    if (this == (ADS_ISKM_BoidsSpawner *)0x0) {
      pIVar1 = (IWN_ISKM_Controller *)0x0;
    }
    UWN_ISKM_Subsystem::UnregisterController(*(UWN_ISKM_Subsystem **)&this->field_0x2c8,pIVar1);
  }
  AActor::MarkComponentsAsGarbage((AActor *)this,param_1);
  return;
}

// OnAddBoids @ 14b880e20

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
ADS_ISKM_BoidsSpawner::OnAddBoids
          (ADS_ISKM_BoidsSpawner *this,FDS_ISKM_BoidsFSM_ExecutionContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 != (FDS_ISKM_BoidsFSM_ExecutionContext *)0x0) {
    FDS_ISKM_BoidsFSM_ExecutionContext::SetInitialProperty(param_1,&this->InitialProperty);
    if ((this->BoidsController).Object == (FDS_ISKM_BoidsController *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FDS_ISKM_BoidsController::SetNavInfo((this->BoidsController).Object,&this->NavInfo);
  }
  return;
}

// OnConstruction @ 14b888350

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

void __thiscall
ADS_ISKM_BoidsSpawner::OnConstruction(ADS_ISKM_BoidsSpawner *this,TTransform<double> *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined1 auVar9 [16];
  bool bVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  undefined4 uVar22;
  undefined4 uVar33;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  undefined8 uVar38;
  double dVar39;
  undefined8 uVar40;
  double dVar42;
  undefined1 auVar41 [16];
  undefined8 uVar43;
  double dVar44;
  undefined1 auVar45 [16];
  double local_198;
  double local_158;
  
  dVar4 = (this->ExTransform).Translation.ZW.m128d_f64[0] - (param_1->Translation).ZW.m128d_f64[0];
  dVar5 = (this->ExTransform).Translation.ZW.m128d_f64[1] - (param_1->Translation).ZW.m128d_f64[1];
  dVar34 = (this->ExTransform).Translation.XY.m128d_f64[0] - (param_1->Translation).XY.m128d_f64[0];
  dVar36 = (this->ExTransform).Translation.XY.m128d_f64[1] - (param_1->Translation).XY.m128d_f64[1];
  uVar22 = SUB84(__real_3f1a36e2e0000000,0);
  uVar33 = (undefined4)((ulonglong)__real_3f1a36e2e0000000 >> 0x20);
  auVar23._8_4_ = uVar22;
  auVar23._0_8_ = __real_3f1a36e2e0000000;
  auVar23._12_4_ = uVar33;
  auVar24._8_8_ =
       -(ulonglong)
        (auVar23._8_8_ <
        (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) & _UNK_15061cc8c,
                         SUB84(dVar5,0) & _UNK_15061cc88));
  auVar24._0_8_ =
       -(ulonglong)
        (__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  uVar14 = movmskpd((int)this,auVar24);
  lVar21 = -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar36 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar36,0) & _UNK_15061cc88));
  auVar6._8_4_ = (int)lVar21;
  auVar6._0_8_ = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar34,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar6._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
  iVar11 = movmskpd((int)&stack0x00000000,auVar6);
  if ((uVar14 & 0x3fffffff) == 0 && iVar11 == 0) {
    dVar34 = (this->ExTransform).Rotation.ZW.m128d_f64[0];
    dVar36 = (this->ExTransform).Rotation.ZW.m128d_f64[1];
    dVar39 = (this->ExTransform).Rotation.XY.m128d_f64[0];
    dVar42 = (this->ExTransform).Rotation.XY.m128d_f64[1];
    dVar4 = dVar34 - (param_1->Rotation).ZW.m128d_f64[0];
    dVar5 = dVar36 - (param_1->Rotation).ZW.m128d_f64[1];
    dVar34 = dVar34 + (param_1->Rotation).ZW.m128d_f64[0];
    dVar36 = dVar36 + (param_1->Rotation).ZW.m128d_f64[1];
    dVar35 = dVar39 - (param_1->Rotation).XY.m128d_f64[0];
    dVar37 = dVar42 - (param_1->Rotation).XY.m128d_f64[1];
    dVar39 = dVar39 + (param_1->Rotation).XY.m128d_f64[0];
    dVar42 = dVar42 + (param_1->Rotation).XY.m128d_f64[1];
    auVar25._8_4_ = uVar22;
    auVar25._0_8_ = __real_3f1a36e2e0000000;
    auVar25._12_4_ = uVar33;
    auVar26._8_8_ =
         -(ulonglong)
          (auVar25._8_8_ <
          (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) & _UNK_15061cc8c,
                           SUB84(dVar5,0) & _UNK_15061cc88));
    auVar26._0_8_ =
         -(ulonglong)
          (__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    iVar15 = movmskpd(0,auVar26);
    auVar41._0_8_ =
         (double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar39,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar41._8_4_ = SUB84(dVar42,0) & _UNK_15061cc88;
    auVar41._12_4_ = (uint)((ulonglong)dVar42 >> 0x20) & _UNK_15061cc8c;
    auVar27._8_4_ = uVar22;
    auVar27._0_8_ = __real_3f1a36e2e0000000;
    auVar27._12_4_ = uVar33;
    auVar45._0_8_ =
         (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar34,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar45._8_4_ = SUB84(dVar36,0) & _UNK_15061cc88;
    auVar45._12_4_ = (uint)((ulonglong)dVar36 >> 0x20) & _UNK_15061cc8c;
    auVar28._8_8_ =
         -(ulonglong)
          (auVar27._8_8_ <
          (double)CONCAT44((uint)((ulonglong)dVar37 >> 0x20) & _UNK_15061cc8c,
                           SUB84(dVar37,0) & _UNK_15061cc88));
    auVar28._0_8_ =
         -(ulonglong)
          (__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar35,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    uVar14 = movmskpd(iVar11,auVar28);
    uVar16 = iVar15 << 2 | uVar14;
    if (uVar16 != 0) {
      auVar29._8_4_ = uVar22;
      auVar29._0_8_ = __real_3f1a36e2e0000000;
      auVar29._12_4_ = uVar33;
      auVar30._8_8_ = -(ulonglong)(auVar29._8_8_ < auVar45._8_8_);
      auVar30._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar45._0_8_);
      uVar16 = movmskpd(uVar16,auVar30);
      lVar21 = -(ulonglong)(__real_3f1a36e2e0000000 < auVar41._8_8_);
      auVar7._8_4_ = (int)lVar21;
      auVar7._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar41._0_8_);
      auVar7._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
      uVar14 = movmskpd(uVar14,auVar7);
      if ((uVar16 & 0x3fffffff) != 0 || uVar14 != 0) goto LAB_14b888491;
    }
    dVar4 = (this->ExTransform).Scale3D.ZW.m128d_f64[0] - (param_1->Scale3D).ZW.m128d_f64[0];
    dVar5 = (this->ExTransform).Scale3D.ZW.m128d_f64[1] - (param_1->Scale3D).ZW.m128d_f64[1];
    dVar34 = (this->ExTransform).Scale3D.XY.m128d_f64[0] - (param_1->Scale3D).XY.m128d_f64[0];
    dVar36 = (this->ExTransform).Scale3D.XY.m128d_f64[1] - (param_1->Scale3D).XY.m128d_f64[1];
    auVar31._8_4_ = uVar22;
    auVar31._0_8_ = __real_3f1a36e2e0000000;
    auVar31._12_4_ = uVar33;
    auVar32._8_8_ =
         -(ulonglong)
          (auVar31._8_8_ <
          (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) & _UNK_15061cc8c,
                           SUB84(dVar5,0) & _UNK_15061cc88));
    auVar32._0_8_ =
         -(ulonglong)
          (__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    uVar16 = movmskpd(0,auVar32);
    lVar21 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar36 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar36,0) & _UNK_15061cc88));
    auVar9._8_4_ = (int)lVar21;
    auVar9._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar34,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar9._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
    iVar11 = movmskpd(uVar14,auVar9);
    if ((uVar16 & 0x3fffffff) != 0 || iVar11 != 0) goto LAB_14b888491;
  }
  else {
LAB_14b888491:
    iVar11 = (this->NavInfo).TileGraph.ArrayMax;
    (this->NavInfo).TileGraph.ArrayNum = 0;
    if (iVar11 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,(ForAnyElementType *)&this->NavInfo,0,&(this->NavInfo).TileGraph.ArrayMax);
    }
    iVar11 = (this->NavInfo).RootTileList.ArrayMax;
    (this->NavInfo).RootTileList.ArrayNum = 0;
    if (iVar11 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->NavInfo).RootTileList.AllocatorInstance,0,
                 &(this->NavInfo).RootTileList.ArrayMax);
    }
    iVar11 = (this->NavInfo).RootTileNumList.ArrayMax;
    (this->NavInfo).RootTileNumList.ArrayNum = 0;
    if (iVar11 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->NavInfo).RootTileNumList.AllocatorInstance,0,
                 &(this->NavInfo).RootTileNumList.ArrayMax);
    }
    (this->NavInfo).TileMapWidth = -1;
    uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    (this->NavInfo).TileMapHeight = -1;
    (this->NavInfo).BoxLocation.field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (this->NavInfo).BoxLocation.field0_0x0._s_0.Y = (double)uVar8;
    (this->NavInfo).BoxLocation.field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    (this->NavInfo).BoxExtent.field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (this->NavInfo).BoxExtent.field0_0x0._s_0.Y = (double)uVar8;
    (this->NavInfo).BoxExtent.field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    (this->NavInfo).TileSize = 0x32;
    (this->NavInfo).OnCreateFinish = false;
    dVar4 = (param_1->Rotation).XY.m128d_f64[1];
    (this->ExTransform).Rotation.XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
    (this->ExTransform).Rotation.XY.m128d_f64[1] = dVar4;
    dVar4 = (param_1->Rotation).ZW.m128d_f64[1];
    (this->ExTransform).Rotation.ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
    (this->ExTransform).Rotation.ZW.m128d_f64[1] = dVar4;
    dVar4 = (param_1->Translation).XY.m128d_f64[1];
    (this->ExTransform).Translation.XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
    (this->ExTransform).Translation.XY.m128d_f64[1] = dVar4;
    dVar4 = (param_1->Translation).ZW.m128d_f64[1];
    (this->ExTransform).Translation.ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
    (this->ExTransform).Translation.ZW.m128d_f64[1] = dVar4;
    dVar4 = (param_1->Scale3D).XY.m128d_f64[1];
    (this->ExTransform).Scale3D.XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
    (this->ExTransform).Scale3D.XY.m128d_f64[1] = dVar4;
    dVar4 = (param_1->Scale3D).ZW.m128d_f64[1];
    (this->ExTransform).Scale3D.ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
    (this->ExTransform).Scale3D.ZW.m128d_f64[1] = dVar4;
  }
  if (this->field_0x38d == '\x01') {
    if ((this->NavInfo).TileGraph.ArrayNum == 0) {
      this->field_0x38d = 0;
      iVar11 = *(int *)&this->field_0x39c;
      *(undefined4 *)&this->field_0x398 = 0;
    }
    else {
      dVar4 = (this->NavInfo).BoxLocation.field0_0x0._s_0.Z;
      dVar5 = (this->NavInfo).BoxExtent.field0_0x0._s_0.Z;
      dVar34 = (this->NavInfo).BoxExtent.field0_0x0._s_0.X;
      uVar8 = dVar4 - dVar5;
      dVar36 = (this->NavInfo).BoxExtent.field0_0x0._s_0.Y;
      dVar5 = dVar5 + dVar4;
      dVar4 = (this->NavInfo).BoxLocation.field0_0x0._s_0.X;
      dVar39 = (this->NavInfo).BoxLocation.field0_0x0._s_0.Y;
      dVar42 = dVar34 + dVar4;
      lVar21 = *(longlong *)&this->field_0x1b8;
      dVar4 = dVar4 - dVar34;
      dVar34 = dVar36 + dVar39;
      dVar39 = dVar39 - dVar36;
      if (lVar21 == 0) {
        local_198 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uVar40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        uVar43 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      }
      else {
        local_198 = *(double *)(lVar21 + 0x220);
        uVar40 = *(double *)(lVar21 + 0x210);
        uVar43 = *(double *)(lVar21 + 0x218);
      }
      dVar35 = (double)*(float *)&this->field_0x374;
      local_198 = local_198 + dVar35;
      uVar40 = (double)uVar40 + dVar35;
      dVar36 = (double)uVar43 + dVar35;
      if (lVar21 == 0) {
        local_158 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uVar43 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        uVar38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      }
      else {
        local_158 = *(double *)(lVar21 + 0x220);
        uVar43 = *(double *)(lVar21 + 0x210);
        uVar38 = *(double *)(lVar21 + 0x218);
      }
      dVar37 = (double)uVar43 - dVar35;
      dVar44 = (double)uVar38 - dVar35;
      local_158 = local_158 - dVar35;
      if ((((dVar37 <= dVar42) && (dVar4 <= (double)uVar40)) && (dVar44 <= dVar34)) &&
         (((dVar39 <= dVar36 && (local_158 <= dVar5)) && ((double)uVar8 <= local_198)))) {
        puVar1 = &this->field_0x390;
        *(int *)&this->field_0x3a0 = (this->NavInfo).TileSize;
        puVar2 = &this->field_0x39c;
        this->field_0x38d = 1;
        *(undefined4 *)&this->field_0x398 = 0;
        if (*(int *)puVar2 < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,0,(ForAnyElementType *)puVar1,0,(int *)puVar2);
        }
        if (((dVar42 < dVar37) || ((double)uVar40 < dVar4)) ||
           ((dVar34 < dVar44 ||
            (((dVar36 < dVar39 || (dVar5 < local_158)) || (local_198 < (double)uVar8)))))) {
          dVar36 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                   ::__l5::EmptyBox.Max.field0_0x0._8_8_;
          uVar22 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                   ::__l5::EmptyBox.Max.field0_0x0._16_4_;
          uVar33 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                   ::__l5::EmptyBox.Max.field0_0x0._20_4_;
          uVar8 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                  ::__l5::EmptyBox.Min.field0_0x0._s_0.Z;
          uVar43 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                   ::__l5::EmptyBox.Min.field0_0x0._s_0.Y;
          uVar40 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                   ::__l5::EmptyBox.Max.field0_0x0._s_0.X;
          uVar38 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                   ::__l5::EmptyBox.Min.field0_0x0._s_0.X;
        }
        else {
          if ((double)uVar8 <= local_158) {
            uVar8 = local_158;
          }
          if (dVar5 <= local_198) {
            local_198 = dVar5;
          }
          uVar38 = dVar4;
          if (dVar4 <= dVar37) {
            uVar38 = dVar37;
          }
          uVar43 = dVar39;
          if (dVar39 <= dVar44) {
            uVar43 = dVar44;
          }
          if (dVar42 <= (double)uVar40) {
            uVar40 = dVar42;
          }
          if (dVar34 <= dVar36) {
            dVar36 = dVar34;
          }
          uVar22 = SUB84(local_198,0);
          uVar33 = (undefined4)((ulonglong)local_198 >> 0x20);
        }
        dVar5 = __real_3ff0000000000000 / (double)(this->NavInfo).TileSize;
        iVar19 = (int)(((double)uVar40 - dVar4) * dVar5) + -1;
        iVar18 = (int)((dVar36 - dVar39) * dVar5) + -1;
        iVar15 = (int)ROUND(__real_bfe0000000000000 - ((double)uVar38 - dVar4) * (dVar5 + dVar5)) >>
                 1;
        iVar20 = (int)ROUND(__real_bfe0000000000000 - ((double)uVar43 - dVar39) * (dVar5 + dVar5))
                 >> 1;
        iVar11 = -iVar20;
        uVar14 = (iVar18 + iVar20) * (iVar19 + iVar15);
        if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
        }
        if (*(int *)puVar2 < (int)uVar14) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,uVar14,(ForAnyElementType *)puVar1,*(int *)&this->field_0x398,
                     (int *)puVar2);
        }
        for (; iVar20 = -iVar15, iVar11 < iVar18; iVar11 = iVar11 + 1) {
          for (; iVar20 < iVar19; iVar20 = iVar20 + 1) {
            iVar17 = iVar11 * (this->NavInfo).TileMapWidth + iVar20;
            lVar21 = 0;
            uVar14 = iVar17 * 4;
            do {
              uVar16 = 0;
              if ((int)uVar14 < (this->NavInfo).TileGraph.ArrayNum) {
                uVar16 = ~uVar14 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              if ((this->NavInfo).TileGraph.AllocatorInstance.Data[lVar21 + (longlong)iVar17 * 4] ==
                  (FScriptContainerElement)0x1) {
                iVar17 = (this->NavInfo).TileSize;
                iVar12 = *(int *)&this->field_0x398;
                if (iVar12 == *(int *)&this->field_0x39c) {
                  iVar12 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x818,(ForAnyElementType *)puVar1,(int *)&this->field_0x39c);
                }
                *(int *)&this->field_0x398 = iVar12 + 1;
                lVar13 = (longlong)iVar12;
                lVar21 = *(longlong *)puVar1;
                *(double *)(lVar21 + lVar13 * 0x18) = (double)(iVar17 * iVar20) + dVar4;
                *(double *)(lVar21 + lVar13 * 0x18 + 8) = (double)(iVar17 * iVar11) + dVar39;
                *(undefined8 *)(lVar21 + lVar13 * 0x18 + 0x10) = 0;
                break;
              }
              uVar14 = uVar14 + 1;
              lVar21 = lVar21 + 1;
            } while (lVar21 < 4);
          }
        }
        if (*(int *)&this->field_0x398 == 0) {
          this->field_0x38d = 0;
        }
        else {
          *(float *)&this->field_0x388 = (float)(double)CONCAT44(uVar33,uVar22);
          *(float *)&this->field_0x384 = (float)(double)uVar8;
        }
        goto LAB_14b888b41;
      }
      this->field_0x38d = 0;
      iVar11 = *(int *)&this->field_0x39c;
      *(undefined4 *)&this->field_0x398 = 0;
    }
    if (iVar11 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)&this->field_0x390,0,(int *)&this->field_0x39c);
    }
    *(undefined4 *)&this->field_0x3a0 = 0;
  }
LAB_14b888b41:
  AWN_ISKM_BoidsActor::OnConstruction((AWN_ISKM_BoidsActor *)this,param_1);
  return;
}

// OnMainPlayerCreated @ 14b88a280

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_ISKM_BoidsSpawner::OnMainPlayerCreated(ADS_ISKM_BoidsSpawner *this)

{
  FDS_ISKM_BoidsController *pFVar1;
  code *pcVar2;
  FWeakObjectPtr FVar3;
  bool bVar4;
  FDS_EntityBase *pFVar5;
  FWeakObjectPtr *pFVar6;
  TSharedRef<FDS_ISKM_BoidsTargetInfo,1> *pTVar7;
  FWeakObjectPtr local_res10;
  undefined8 local_res18 [2];
  FDS_ISKM_BoidsTargetInfo *local_28;
  TReferenceControllerBase<1> *local_20;
  TSharedRef<FDS_ISKM_BoidsTargetInfo,1> local_18;
  
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &ADS_MainCharacter::MainPlayerSpawnFinishedEventDelegate,this);
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18[0] = 0;
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
  pFVar5 = FDS_EntityBase::GetMainPlayerEntityBase(true);
  if (pFVar5 == (FDS_EntityBase *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6112102155743658399>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\AIBoids\\DS_ISKM_BoidsSpawner.cpp"
                       ,0x19f,"false");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    pFVar6 = (FWeakObjectPtr *)(**(code **)(pFVar5->_padding_ + 0x150))(pFVar5);
    local_res10 = *pFVar6;
    pTVar7 = MakeShared<FDS_ISKM_BoidsTargetInfo,1>(&local_18);
    local_28 = pTVar7->Object;
    local_20 = (pTVar7->SharedReferenceCount).ReferenceController;
    if (local_20 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    FVar3 = local_res10;
    if (local_28 == (FDS_ISKM_BoidsTargetInfo *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (local_28->TargetActor).WeakPtr = FVar3;
    if (local_28 == (FDS_ISKM_BoidsTargetInfo *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_28->TargetType = MainPlayer;
    pFVar1 = (this->BoidsController).Object;
    if (pFVar1 == (FDS_ISKM_BoidsController *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6112102155743658410>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\AIBoids\\DS_ISKM_BoidsSpawner.cpp"
                         ,0x1aa,"false");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      (**(code **)(pFVar1->_padding_ + 0x48))(pFVar1,&local_28);
      AWN_ISKM_BoidsActor::PostInitializeComponents((AWN_ISKM_BoidsActor *)this);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  }
  return;
}

// PostInitializeComponents @ 14b895260

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_ISKM_BoidsSpawner::PostInitializeComponents(ADS_ISKM_BoidsSpawner *this)

{
  TSharedPtr<FDS_ISKM_BoidsController,1> *this_00;
  int iVar1;
  EDS_ISKM_BoidsTargetType EVar2;
  FWeakObjectPtr FVar3;
  code *pcVar4;
  bool bVar5;
  UWorld *this_01;
  FDS_ISKM_BoidsController *pFVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  TSharedRef<FDS_ISKM_BoidsTargetInfo,1> *pTVar9;
  FDS_EntityBase *pFVar10;
  FWeakObjectPtr *pFVar11;
  FWeakObjectPtr *pFVar12;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  ADS_ISKM_BoidsSpawner *local_res20;
  FDS_ISKM_BoidsTargetInfo *local_f8;
  FSharedReferencer<1> FStack_f0;
  FDS_ISKM_BoidsTargetInfo *local_e8;
  FSharedReferencer<1> FStack_e0;
  code *local_d8;
  FSharedReferencer<1> FStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  FSharedReferencer<1> local_b0;
  code *local_a8;
  TReferenceControllerBase<1> *pTStack_a0;
  FDestructionSentinel local_98;
  undefined1 *local_80;
  undefined1 local_70 [16];
  TReferenceControllerBase<1> *local_60;
  TSharedRef<FDS_ISKM_BoidsTargetInfo,1> local_58;
  
  this_01 = AActor::GetWorld((AActor *)this);
  if ((this_01 != (UWorld *)0x0) && (bVar5 = UWorld::IsGameWorld(this_01), bVar5)) {
    GetController(this);
    this_00 = &this->BoidsController;
    if (this_00->Object != (FDS_ISKM_BoidsController *)0x0) {
      AWN_ISKM_BoidsActor::SetController
                ((AWN_ISKM_BoidsActor *)this,(FWN_ISKM_BoidsController *)this_00->Object);
      pFVar6 = TSharedPtr<FDS_ISKM_BoidsController,1>::operator->(this_00);
      local_f8 = (FDS_ISKM_BoidsTargetInfo *)OnAddBoids;
      FStack_f0.ReferenceController = pTStack_a0 & 0xffffffff00000000;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &pFVar6->OnStatesAddFinishDelegate,(FWriteAccessScope *)&local_98);
      local_80 = &(pFVar6->OnStatesAddFinishDelegate).field_0x8;
      puVar7 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_80);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAVFDS_ISKM_BoidsFSM_ExecutionContext___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar8 = FDelegateHandle::GenerateNewID();
        puVar7[2] = uVar8;
        *puVar7 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_ISKM_BoidsSpawner____A6AXPEAVFDS_ISKM_BoidsFSM_ExecutionContext___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (ADS_ISKM_BoidsSpawner *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar7[3] = 0;
        local_res20 = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (ADS_ISKM_BoidsSpawner *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_res20);
        puVar7[4] = local_f8;
        puVar7[5] = FStack_f0.ReferenceController;
      }
      if (local_98.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
      }
      pFVar6 = TSharedPtr<FDS_ISKM_BoidsController,1>::operator->(this_00);
      FDS_ISKM_BoidsController::SetNavInfo(pFVar6,&this->NavInfo);
      iVar1 = (this->TargetList).ArrayNum;
      pFVar11 = (FWeakObjectPtr *)(this->TargetList).AllocatorInstance.Data;
      pFVar12 = pFVar11 + (longlong)iVar1 * 0xe;
      while( true ) {
        if ((this->TargetList).ArrayNum != iVar1) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FDS_ISKM_BoidsTargetInfo,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (pFVar11 == pFVar12) break;
        bVar5 = FWeakObjectPtr::IsValid(pFVar11);
        if (bVar5) {
          local_f8 = (FDS_ISKM_BoidsTargetInfo *)0x0;
          FStack_f0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pTVar9 = MakeShared<FDS_ISKM_BoidsTargetInfo,1>
                             ((TSharedRef<FDS_ISKM_BoidsTargetInfo,1> *)(local_70 + 8));
          local_b0.ReferenceController = (pTVar9->SharedReferenceCount).ReferenceController;
          local_f8 = pTVar9->Object;
          if (local_b0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_b0.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(local_b0.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_b8 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_f0,&local_b0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_b0.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_60);
          FVar3 = *pFVar11;
          if ((local_f8 == (FDS_ISKM_BoidsTargetInfo *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          (local_f8->TargetActor).WeakPtr = FVar3;
          EVar2 = pFVar11[1].ObjectIndex;
          if ((local_f8 == (FDS_ISKM_BoidsTargetInfo *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_f8->TargetType = EVar2;
          if ((this_00->Object == (FDS_ISKM_BoidsController *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          (**(code **)(this_00->Object->_padding_ + 0x48))(this_00->Object,&local_f8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FStack_f0.ReferenceController);
        }
        pFVar11 = pFVar11 + 0xe;
      }
      if ((this_00->Object == (FDS_ISKM_BoidsController *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (**(code **)(this_00->Object->_padding_ + 0x40))();
      local_res18.ObjectIndex = 0;
      local_res18.ObjectSerialNumber = 0;
      local_c8 = 0;
      local_e8 = (FDS_ISKM_BoidsTargetInfo *)0x0;
      FStack_e0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_c8);
      pFVar10 = FDS_EntityBase::GetMainPlayerEntityBase(true);
      if (pFVar10 == (FDS_EntityBase *)0x0) {
        local_res10.ObjectIndex = 0;
        local_res10.ObjectSerialNumber = 0;
        local_c0 = 0;
        FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_c0);
      }
      else {
        pFVar11 = (FWeakObjectPtr *)(**(code **)(pFVar10->_padding_ + 0x150))(pFVar10);
        local_res10 = *pFVar11;
        local_res18 = local_res10;
      }
      bVar5 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)&local_res10,(void *)0x0);
      if (bVar5) {
        FStack_d0.ReferenceController =
             (TReferenceControllerBase<1> *)((ulonglong)FStack_d0.ReferenceController._4_4_ << 0x20)
        ;
        local_d8 = OnMainPlayerCreated;
        local_a8 = OnMainPlayerCreated;
        pTStack_a0 = FStack_d0.ReferenceController;
        TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
        AddUObject<ADS_ISKM_BoidsSpawner>
                  ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                   &ADS_MainCharacter::MainPlayerSpawnFinishedEventDelegate,
                   (ADS_ISKM_BoidsSpawner *)local_70,(pmf_caf0758d *)this);
      }
      else {
        pTVar9 = MakeShared<FDS_ISKM_BoidsTargetInfo,1>(&local_58);
        FStack_d0.ReferenceController = (pTVar9->SharedReferenceCount).ReferenceController;
        local_e8 = pTVar9->Object;
        if (FStack_d0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FStack_d0.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FStack_d0.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_d8 = (code *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_e0,&FStack_d0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_d0.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_58.SharedReferenceCount.ReferenceController);
        FVar3 = local_res10;
        if ((local_e8 == (FDS_ISKM_BoidsTargetInfo *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (local_e8->TargetActor).WeakPtr = FVar3;
        if ((local_e8 == (FDS_ISKM_BoidsTargetInfo *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_e8->TargetType = MainPlayer;
        if ((this_00->Object == (FDS_ISKM_BoidsController *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (**(code **)(this_00->Object->_padding_ + 0x48))(this_00->Object,&local_e8);
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &ADS_MainCharacter::MainPlayerSpawnFinishedEventDelegate,this);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_e0.ReferenceController);
    }
  }
  AWN_ISKM_BoidsActor::PostInitializeComponents((AWN_ISKM_BoidsActor *)this);
  return;
}

// SetSpawnInfoUseNavInfo @ 14b899420

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_ISKM_BoidsSpawner::SetSpawnInfoUseNavInfo(ADS_ISKM_BoidsSpawner *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  double dVar29;
  undefined8 uVar30;
  double dVar31;
  undefined1 auVar32 [16];
  double dVar33;
  double local_178;
  double local_148;
  
  if ((this->NavInfo).TileGraph.ArrayNum == 0) {
    this->field_0x38d = 0;
  }
  else {
    dVar3 = (this->NavInfo).BoxLocation.field0_0x0._s_0.Z;
    dVar4 = (this->NavInfo).BoxExtent.field0_0x0._s_0.Z;
    dVar5 = (this->NavInfo).BoxExtent.field0_0x0._s_0.X;
    uVar8 = dVar3 - dVar4;
    dVar33 = (this->NavInfo).BoxExtent.field0_0x0._s_0.Y;
    dVar4 = dVar4 + dVar3;
    dVar3 = (this->NavInfo).BoxLocation.field0_0x0._s_0.X;
    dVar6 = (this->NavInfo).BoxLocation.field0_0x0._s_0.Y;
    dVar10 = dVar5 + dVar3;
    lVar21 = *(longlong *)&this->field_0x1b8;
    dVar3 = dVar3 - dVar5;
    dVar5 = dVar33 + dVar6;
    dVar6 = dVar6 - dVar33;
    uVar26 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    if (lVar21 == 0) {
      uVar25 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uVar27 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      uVar28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      local_178 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
    else {
      local_178 = *(double *)(lVar21 + 0x220);
      uVar25 = *(undefined4 *)(lVar21 + 0x210);
      uVar27 = *(undefined4 *)(lVar21 + 0x214);
      uVar28 = *(undefined4 *)(lVar21 + 0x218);
      uVar26 = *(undefined4 *)(lVar21 + 0x21c);
    }
    dVar29 = (double)*(float *)&this->field_0x374;
    uVar9 = dVar29 + (double)CONCAT44(uVar27,uVar25);
    dVar33 = dVar29 + (double)CONCAT44(uVar26,uVar28);
    local_178 = dVar29 + local_178;
    if (lVar21 == 0) {
      local_148 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      auVar32 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_16_;
    }
    else {
      local_148 = *(double *)(lVar21 + 0x220);
      auVar32 = *(undefined1 (*) [16])(lVar21 + 0x210);
    }
    dVar11 = auVar32._0_8_ - dVar29;
    dVar31 = auVar32._8_8_ - dVar29;
    local_148 = local_148 - dVar29;
    if ((((dVar11 <= dVar10) && (dVar3 <= (double)uVar9)) && (dVar31 <= dVar5)) &&
       (((dVar6 <= dVar33 && (local_148 <= dVar4)) && ((double)uVar8 <= local_178)))) {
      puVar2 = &this->field_0x390;
      *(int *)&this->field_0x3a0 = (this->NavInfo).TileSize;
      puVar1 = &this->field_0x39c;
      this->field_0x38d = 1;
      *(undefined4 *)&this->field_0x398 = 0;
      if (*(int *)puVar1 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)puVar2,0,(int *)puVar1);
      }
      if (((dVar10 < dVar11) || ((double)uVar9 < dVar3)) ||
         ((dVar5 < dVar31 ||
          (((dVar33 < dVar6 || (dVar4 < local_148)) || (local_178 < (double)uVar8)))))) {
        dVar33 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                 ::__l5::EmptyBox.Max.field0_0x0._8_8_;
        uVar26 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                 ::__l5::EmptyBox.Max.field0_0x0._20_4_;
        uVar25 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                 ::__l5::EmptyBox.Max.field0_0x0._16_4_;
        uVar30 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                 ::__l5::EmptyBox.Min.field0_0x0._s_0.Y;
        uVar8 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                ::__l5::EmptyBox.Min.field0_0x0._s_0.Z;
        uVar12 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                 ::__l5::EmptyBox.Min.field0_0x0._s_0.X;
        uVar9 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                ::__l5::EmptyBox.Max.field0_0x0._s_0.X;
      }
      else {
        if ((double)uVar8 <= local_148) {
          uVar8 = local_148;
        }
        if (dVar4 <= local_178) {
          local_178 = dVar4;
        }
        uVar12 = dVar3;
        if (dVar3 <= dVar11) {
          uVar12 = dVar11;
        }
        uVar30 = dVar6;
        if (dVar6 <= dVar31) {
          uVar30 = dVar31;
        }
        if (dVar10 <= (double)uVar9) {
          uVar9 = dVar10;
        }
        if (dVar5 <= dVar33) {
          dVar33 = dVar5;
        }
        uVar25 = SUB84(local_178,0);
        uVar26 = (undefined4)((ulonglong)local_178 >> 0x20);
      }
      dVar4 = __real_3ff0000000000000 / (double)(this->NavInfo).TileSize;
      iVar17 = (int)(((double)uVar9 - dVar3) * dVar4) + -1;
      iVar20 = (int)((dVar33 - dVar6) * dVar4) + -1;
      iVar19 = (int)ROUND(__real_bfe0000000000000 - ((double)uVar12 - dVar3) * (dVar4 + dVar4)) >> 1
      ;
      iVar23 = (int)ROUND(__real_bfe0000000000000 - ((double)uVar30 - dVar6) * (dVar4 + dVar4)) >> 1
      ;
      iVar24 = -iVar23;
      uVar22 = (iVar20 + iVar23) * (iVar17 + iVar19);
      if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
      }
      if (*(int *)puVar1 < (int)uVar22) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,uVar22,(ForAnyElementType *)puVar2,*(int *)&this->field_0x398,
                   (int *)puVar1);
      }
      do {
        iVar23 = -iVar19;
        if (iVar20 <= iVar24) {
          if (*(int *)&this->field_0x398 == 0) {
            this->field_0x38d = 0;
            return;
          }
          *(float *)&this->field_0x388 = (float)(double)CONCAT44(uVar26,uVar25);
          *(float *)&this->field_0x384 = (float)(double)uVar8;
          return;
        }
        for (; iVar23 < iVar17; iVar23 = iVar23 + 1) {
          iVar18 = iVar24 * (this->NavInfo).TileMapWidth + iVar23;
          uVar22 = iVar18 * 4;
          lVar21 = 0;
          do {
            uVar14 = 0;
            if ((int)uVar22 < (this->NavInfo).TileGraph.ArrayNum) {
              uVar14 = ~uVar22 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if ((this->NavInfo).TileGraph.AllocatorInstance.Data[lVar21 + (longlong)iVar18 * 4] ==
                (FScriptContainerElement)0x1) {
              iVar18 = (this->NavInfo).TileSize;
              iVar15 = *(int *)&this->field_0x398;
              if (iVar15 == *(int *)&this->field_0x39c) {
                iVar15 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x818,(ForAnyElementType *)puVar2,(int *)&this->field_0x39c);
              }
              lVar16 = (longlong)iVar15;
              *(int *)&this->field_0x398 = iVar15 + 1;
              lVar21 = *(longlong *)puVar2;
              *(double *)(lVar21 + lVar16 * 0x18) = (double)(iVar18 * iVar23) + dVar3;
              *(double *)(lVar21 + lVar16 * 0x18 + 8) = (double)(iVar18 * iVar24) + dVar6;
              *(undefined8 *)(lVar21 + lVar16 * 0x18 + 0x10) = 0;
              break;
            }
            uVar22 = uVar22 + 1;
            lVar21 = lVar21 + 1;
          } while (lVar21 < 4);
        }
        iVar24 = iVar24 + 1;
      } while( true );
    }
    this->field_0x38d = 0;
  }
  *(undefined4 *)&this->field_0x398 = 0;
  if (*(int *)&this->field_0x39c < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&this->field_0x390,0,(int *)&this->field_0x39c);
  }
  *(undefined4 *)&this->field_0x3a0 = 0;
  return;
}

// Tick @ 14b89b6e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_ISKM_BoidsSpawner::Tick(ADS_ISKM_BoidsSpawner *this,float param_1)

{
  uint uVar1;
  UFunction *pUVar2;
  UWorld *this_00;
  FLatentActionManager *this_01;
  float afStackX_8 [2];
  
  uVar1 = *(uint *)(*(longlong *)&this->field_0x10 + 0xd4);
  if (((uVar1 >> 0x12 & 1) != 0) || (-1 < (char)uVar1)) {
    afStackX_8[0] = param_1;
    pUVar2 = UObject::FindFunctionChecked((UObject *)this,NAME_AActor_ReceiveTick);
    (**(code **)(*(longlong *)this + 0x260))(this,pUVar2,afStackX_8);
    this_00 = AActor::GetWorld((AActor *)this);
    if (this_00 != (UWorld *)0x0) {
      this_01 = UWorld::GetLatentActionManager(this_00);
      FLatentActionManager::ProcessLatentActions(this_01,(UObject *)this,this_00->DeltaTimeSeconds);
    }
  }
  return;
}

