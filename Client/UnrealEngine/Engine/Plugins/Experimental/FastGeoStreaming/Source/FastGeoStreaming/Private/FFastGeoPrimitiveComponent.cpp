// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FastGeoStreaming
// Functions: 54

// FFastGeoPrimitiveComponent @ 14da18d20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FFastGeoPrimitiveComponent * __thiscall
FFastGeoPrimitiveComponent::FFastGeoPrimitiveComponent
          (FFastGeoPrimitiveComponent *this,FFastGeoPrimitiveComponent *param_1)

{
  int *piVar1;
  FCustomPrimitiveData *pFVar2;
  TArray<URuntimeVirtualTexture_*,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  longlong lVar9;
  double dVar10;
  uint uVar11;
  FPlatformRWLock *pFVar12;
  byte bVar13;
  
  this->_padding_ = (longlong)&___7IFastGeoElement__6B_;
  lVar8 = param_1->_padding_;
  lVar9 = param_1->_padding_;
  this->_padding_ = (longlong)&___7FFastGeoComponent__6B_;
  this->_padding_ = lVar8;
  this->_padding_ = lVar9;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  this->_padding_ = (longlong)&___7FFastGeoPrimitiveComponent__6B_;
  dVar10 = (param_1->LocalTransform).Rotation.XY.m128d_f64[1];
  uVar5 = this->field_0x160;
  (this->LocalTransform).Rotation.XY.m128d_f64[0] =
       (param_1->LocalTransform).Rotation.XY.m128d_f64[0];
  (this->LocalTransform).Rotation.XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->LocalTransform).Rotation.ZW.m128d_f64[1];
  (this->LocalTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->LocalTransform).Rotation.ZW.m128d_f64[0];
  (this->LocalTransform).Rotation.ZW.m128d_f64[1] = dVar10;
  dVar10 = (param_1->LocalTransform).Translation.XY.m128d_f64[1];
  (this->LocalTransform).Translation.XY.m128d_f64[0] =
       (param_1->LocalTransform).Translation.XY.m128d_f64[0];
  (this->LocalTransform).Translation.XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->LocalTransform).Translation.ZW.m128d_f64[1];
  (this->LocalTransform).Translation.ZW.m128d_f64[0] =
       (param_1->LocalTransform).Translation.ZW.m128d_f64[0];
  (this->LocalTransform).Translation.ZW.m128d_f64[1] = dVar10;
  dVar10 = (param_1->LocalTransform).Scale3D.XY.m128d_f64[1];
  (this->LocalTransform).Scale3D.XY.m128d_f64[0] = (param_1->LocalTransform).Scale3D.XY.m128d_f64[0]
  ;
  (this->LocalTransform).Scale3D.XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->LocalTransform).Scale3D.ZW.m128d_f64[1];
  (this->LocalTransform).Scale3D.ZW.m128d_f64[0] = (param_1->LocalTransform).Scale3D.ZW.m128d_f64[0]
  ;
  (this->LocalTransform).Scale3D.ZW.m128d_f64[1] = dVar10;
  dVar10 = (param_1->WorldTransform).Rotation.XY.m128d_f64[1];
  (this->WorldTransform).Rotation.XY.m128d_f64[0] =
       (param_1->WorldTransform).Rotation.XY.m128d_f64[0];
  (this->WorldTransform).Rotation.XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->WorldTransform).Rotation.ZW.m128d_f64[1];
  (this->WorldTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->WorldTransform).Rotation.ZW.m128d_f64[0];
  (this->WorldTransform).Rotation.ZW.m128d_f64[1] = dVar10;
  dVar10 = (param_1->WorldTransform).Translation.XY.m128d_f64[1];
  (this->WorldTransform).Translation.XY.m128d_f64[0] =
       (param_1->WorldTransform).Translation.XY.m128d_f64[0];
  (this->WorldTransform).Translation.XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->WorldTransform).Translation.ZW.m128d_f64[1];
  (this->WorldTransform).Translation.ZW.m128d_f64[0] =
       (param_1->WorldTransform).Translation.ZW.m128d_f64[0];
  (this->WorldTransform).Translation.ZW.m128d_f64[1] = dVar10;
  dVar10 = (param_1->WorldTransform).Scale3D.XY.m128d_f64[1];
  (this->WorldTransform).Scale3D.XY.m128d_f64[0] = (param_1->WorldTransform).Scale3D.XY.m128d_f64[0]
  ;
  (this->WorldTransform).Scale3D.XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->WorldTransform).Scale3D.ZW.m128d_f64[1];
  (this->WorldTransform).Scale3D.ZW.m128d_f64[0] = (param_1->WorldTransform).Scale3D.ZW.m128d_f64[0]
  ;
  (this->WorldTransform).Scale3D.ZW.m128d_f64[1] = dVar10;
  dVar10 = (param_1->LocalBounds).Origin.field0_0x0._s_0.Y;
  (this->LocalBounds).Origin.field0_0x0._s_0.X = (param_1->LocalBounds).Origin.field0_0x0._s_0.X;
  (this->LocalBounds).Origin.field0_0x0._s_0.Y = dVar10;
  dVar10 = (param_1->LocalBounds).BoxExtent.field0_0x0._s_0.X;
  (this->LocalBounds).Origin.field0_0x0._s_0.Z = (param_1->LocalBounds).Origin.field0_0x0._s_0.Z;
  (this->LocalBounds).BoxExtent.field0_0x0._s_0.X = dVar10;
  dVar10 = (param_1->LocalBounds).BoxExtent.field0_0x0._s_0.Z;
  (this->LocalBounds).BoxExtent.field0_0x0._s_0.Y =
       (param_1->LocalBounds).BoxExtent.field0_0x0._s_0.Y;
  (this->LocalBounds).BoxExtent.field0_0x0._s_0.Z = dVar10;
  (this->LocalBounds).SphereRadius = (param_1->LocalBounds).SphereRadius;
  dVar10 = (param_1->WorldBounds).Origin.field0_0x0._s_0.Y;
  (this->WorldBounds).Origin.field0_0x0._s_0.X = (param_1->WorldBounds).Origin.field0_0x0._s_0.X;
  (this->WorldBounds).Origin.field0_0x0._s_0.Y = dVar10;
  dVar10 = (param_1->WorldBounds).BoxExtent.field0_0x0._s_0.X;
  (this->WorldBounds).Origin.field0_0x0._s_0.Z = (param_1->WorldBounds).Origin.field0_0x0._s_0.Z;
  (this->WorldBounds).BoxExtent.field0_0x0._s_0.X = dVar10;
  dVar10 = (param_1->WorldBounds).BoxExtent.field0_0x0._s_0.Z;
  (this->WorldBounds).BoxExtent.field0_0x0._s_0.Y =
       (param_1->WorldBounds).BoxExtent.field0_0x0._s_0.Y;
  (this->WorldBounds).BoxExtent.field0_0x0._s_0.Z = dVar10;
  (this->WorldBounds).SphereRadius = (param_1->WorldBounds).SphereRadius;
  bVar13 = (this->bIsVisible ^ param_1->bIsVisible) & 1 ^ uVar5;
  this->field_0x160 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x160) & 2 ^ bVar13;
  this->field_0x160 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x160) & 4 ^ bVar13;
  this->field_0x160 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x160) & 8 ^ bVar13;
  this->field_0x160 = bVar13;
  this->field_0x160 = (bVar13 ^ param_1->field_0x160) & 0x10 ^ bVar13;
  pFVar2 = &this->CustomPrimitiveData;
  piVar1 = &(this->CustomPrimitiveData).Data.ArrayMax;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar6 = (param_1->CustomPrimitiveData).Data.ArrayNum;
  pFVar7 = (param_1->CustomPrimitiveData).Data.AllocatorInstance.Data;
  (this->CustomPrimitiveData).Data.ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar6,0,(ForAnyElementType *)pFVar2,iVar6,piVar1);
    memcpy((pFVar2->Data).AllocatorInstance.Data,pFVar7,(longlong)iVar6 << 2);
  }
  (this->DetailMode).Value = (param_1->DetailMode).Value;
  (this->bHasCustomNavigableGeometry).Value = (param_1->bHasCustomNavigableGeometry).Value;
  FBodyInstance::FBodyInstance(&this->BodyInstance,&param_1->BodyInstance);
  pTVar3 = &this->RuntimeVirtualTextures;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->RuntimeVirtualTextures).ArrayMax;
  iVar6 = (param_1->RuntimeVirtualTextures).ArrayNum;
  pFVar7 = (param_1->RuntimeVirtualTextures).AllocatorInstance.Data;
  (this->RuntimeVirtualTextures).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar6,0,&pTVar3->AllocatorInstance,iVar6,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar7,(longlong)iVar6 << 3);
  }
  (this->BodyInstanceOwner)._padding_ =
       (longlong)FFastGeoPhysicsBodyInstanceOwner::NAME_FastGeoPhysicsBodyInstanceOwner;
  (this->BodyInstanceOwner)._padding_ =
       (longlong)&FFastGeoPhysicsBodyInstanceOwner::_vftable__for__FChaosUserDefinedEntity__;
  (this->BodyInstanceOwner)._padding_ =
       (longlong)&FFastGeoPhysicsBodyInstanceOwner::_vftable__for__IPhysicsBodyInstanceOwner__;
  (this->BodyInstanceOwner).OwnerComponent = (FFastGeoPrimitiveComponent *)0x0;
  (this->BodyInstanceOwner).OwnerContainer.WeakPtr = (FWeakObjectPtr)0x0;
  (this->PrimitiveSceneData).bAlwaysVisible = 0;
  (this->PrimitiveSceneData).SceneProxy = (FPrimitiveSceneProxy *)0x0;
  (this->PrimitiveSceneData).LastRenderTime = -1000.0;
  (this->PrimitiveSceneData).LastRenderTimeOnScreen = -1000.0;
  (this->PrimitiveSceneData).AttachmentCounter.Counter = 0;
  (this->PrimitiveSceneData).PrimitiveSceneId.PrimIDValue = 0;
  (this->PrimitiveSceneData).OwnerLastRenderTimePtr = (FActorLastRenderTime *)0x0;
  LOCK();
  UNLOCK();
  uVar11 = FPrimitiveSceneInfoData::NextPrimitiveId.Counter + 1;
  FPrimitiveSceneInfoData::NextPrimitiveId.Counter =
       FPrimitiveSceneInfoData::NextPrimitiveId.Counter + 1;
  (this->PrimitiveSceneData).PrimitiveSceneId.PrimIDValue = uVar11;
  (this->AsyncTermBodyPayload).bIsSet = false;
  this->ProxyState = None;
  this->bRenderStateDirty = false;
  (this->MaterialPSOPrecacheRequestIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialPSOPrecacheRequestIDs).ArrayNum = 0;
  (this->MaterialPSOPrecacheRequestIDs).ArrayMax = 0;
  this->LatestPSOPrecacheJobSetCompleted = (atomic<int>)0x0;
  this->LatestPSOPrecacheJobSet = 0;
  this->bPSOPrecacheCalled = (atomic<bool>)0x0;
  this->bPSOPrecacheRequired = (atomic<bool>)0x0;
  this->PSOPrecacheRequestPriority = (atomic<EPSOPrecachePriority>)0x0;
  pFVar12 = ::operator_new(8);
  if (pFVar12 == (FPlatformRWLock *)0x0) {
    (this->Lock).Ptr = (FPlatformRWLock *)0x0;
  }
  else {
    (pFVar12->Mutex).Mutex.Ptr = (void *)0x0;
    (this->Lock).Ptr = pFVar12;
  }
  return this;
}

// FFastGeoPrimitiveComponent @ 14da190d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FFastGeoPrimitiveComponent * __thiscall
FFastGeoPrimitiveComponent::FFastGeoPrimitiveComponent
          (FFastGeoPrimitiveComponent *this,int param_1,FFastGeoElementType *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
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
  FFastGeoElementType *pFVar18;
  uint uVar19;
  FPlatformRWLock *pFVar20;
  
  *(int *)&this->_padding_ = param_1;
  this->_padding_ = (longlong)&___7FFastGeoPrimitiveComponent__6B_;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  pFVar18 = param_2->ParentType;
  this->_padding_ = *(longlong *)param_2;
  this->_padding_ = (longlong)pFVar18;
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->LocalTransform).Rotation.XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar5,0);
  auVar7._0_8_ = (double)fVar4;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(this->LocalTransform).Rotation.ZW.m128d_f64 = auVar7;
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->LocalTransform).Translation.XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar5,0);
  auVar9._0_8_ = (double)fVar4;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(this->LocalTransform).Translation.ZW.m128d_f64 = auVar9;
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar10._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar10._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar10._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->LocalTransform).Scale3D.XY.m128d_f64 = auVar10;
  auVar11._8_4_ = SUB84((double)fVar5,0);
  auVar11._0_8_ = (double)fVar4;
  auVar11._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(this->LocalTransform).Scale3D.ZW.m128d_f64 = auVar11;
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar12._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar12._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar12._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->WorldTransform).Rotation.XY.m128d_f64 = auVar12;
  auVar13._8_4_ = SUB84((double)fVar5,0);
  auVar13._0_8_ = (double)fVar4;
  auVar13._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(this->WorldTransform).Rotation.ZW.m128d_f64 = auVar13;
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar14._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar14._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar14._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->WorldTransform).Translation.XY.m128d_f64 = auVar14;
  auVar15._8_4_ = SUB84((double)fVar5,0);
  auVar15._0_8_ = (double)fVar4;
  auVar15._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(this->WorldTransform).Translation.ZW.m128d_f64 = auVar15;
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar16._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar16._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar16._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->WorldTransform).Scale3D.XY.m128d_f64 = auVar16;
  auVar17._8_4_ = SUB84((double)fVar5,0);
  auVar17._0_8_ = (double)fVar4;
  auVar17._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(this->WorldTransform).Scale3D.ZW.m128d_f64 = auVar17;
  (this->LocalBounds).Origin.field0_0x0._s_0.X = 0.0;
  (this->LocalBounds).Origin.field0_0x0._s_0.Y = 0.0;
  puVar2 = &this->field_0x160;
  this->bIsVisible = '\x01';
  this->bCanEverAffectNavigation = '\0';
  this->bRasterizeAsFilledConvexVolume = '\0';
  this->bFillCollisionUnderneathForNavmesh = '\0';
  this->bStaticWhenNotMoveable = '\x01';
  (this->LocalBounds).Origin.field0_0x0._s_0.Z = 0.0;
  (this->LocalBounds).BoxExtent.field0_0x0._s_0.X = 0.0;
  (this->LocalBounds).BoxExtent.field0_0x0._s_0.Y = 0.0;
  (this->LocalBounds).BoxExtent.field0_0x0._s_0.Z = 0.0;
  (this->LocalBounds).SphereRadius = 0.0;
  (this->WorldBounds).Origin.field0_0x0._s_0.X = 0.0;
  (this->WorldBounds).Origin.field0_0x0._s_0.Y = 0.0;
  (this->WorldBounds).Origin.field0_0x0._s_0.Z = 0.0;
  (this->WorldBounds).BoxExtent.field0_0x0._s_0.X = 0.0;
  (this->WorldBounds).BoxExtent.field0_0x0._s_0.Y = 0.0;
  (this->WorldBounds).BoxExtent.field0_0x0._s_0.Z = 0.0;
  (this->WorldBounds).SphereRadius = 0.0;
  (this->CustomPrimitiveData).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomPrimitiveData).Data.ArrayNum = 0;
  (this->CustomPrimitiveData).Data.ArrayMax = 0;
  this->DetailMode = '\0';
  this->bHasCustomNavigableGeometry = '\0';
  FBodyInstance::FBodyInstance(&this->BodyInstance);
  (this->RuntimeVirtualTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RuntimeVirtualTextures).ArrayNum = 0;
  (this->RuntimeVirtualTextures).ArrayMax = 0;
  (this->BodyInstanceOwner)._padding_ =
       (longlong)FFastGeoPhysicsBodyInstanceOwner::NAME_FastGeoPhysicsBodyInstanceOwner;
  (this->BodyInstanceOwner)._padding_ =
       (longlong)&FFastGeoPhysicsBodyInstanceOwner::_vftable__for__FChaosUserDefinedEntity__;
  (this->BodyInstanceOwner)._padding_ =
       (longlong)&FFastGeoPhysicsBodyInstanceOwner::_vftable__for__IPhysicsBodyInstanceOwner__;
  (this->BodyInstanceOwner).OwnerComponent = (FFastGeoPrimitiveComponent *)0x0;
  (this->BodyInstanceOwner).OwnerContainer.WeakPtr = (FWeakObjectPtr)0x0;
  (this->PrimitiveSceneData).SceneProxy = (FPrimitiveSceneProxy *)0x0;
  (this->PrimitiveSceneData).LastRenderTime = -1000.0;
  (this->PrimitiveSceneData).LastRenderTimeOnScreen = -1000.0;
  (this->PrimitiveSceneData).bAlwaysVisible = 0;
  (this->PrimitiveSceneData).AttachmentCounter.Counter = 0;
  (this->PrimitiveSceneData).PrimitiveSceneId.PrimIDValue = 0;
  (this->PrimitiveSceneData).OwnerLastRenderTimePtr = (FActorLastRenderTime *)0x0;
  LOCK();
  UNLOCK();
  uVar19 = FPrimitiveSceneInfoData::NextPrimitiveId.Counter + 1;
  FPrimitiveSceneInfoData::NextPrimitiveId.Counter =
       FPrimitiveSceneInfoData::NextPrimitiveId.Counter + 1;
  (this->PrimitiveSceneData).PrimitiveSceneId.PrimIDValue = uVar19;
  (this->AsyncTermBodyPayload).bIsSet = false;
  this->ProxyState = None;
  this->bRenderStateDirty = false;
  (this->MaterialPSOPrecacheRequestIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialPSOPrecacheRequestIDs).ArrayNum = 0;
  (this->MaterialPSOPrecacheRequestIDs).ArrayMax = 0;
  this->LatestPSOPrecacheJobSetCompleted = (atomic<int>)0x0;
  this->LatestPSOPrecacheJobSet = 0;
  this->bPSOPrecacheCalled = (atomic<bool>)0x0;
  this->bPSOPrecacheRequired = (atomic<bool>)0x0;
  this->PSOPrecacheRequestPriority = (atomic<EPSOPrecachePriority>)0x0;
  pFVar20 = ::operator_new(8);
  if (pFVar20 != (FPlatformRWLock *)0x0) {
    (pFVar20->Mutex).Mutex.Ptr = (void *)0x0;
    (this->Lock).Ptr = pFVar20;
    return this;
  }
  (this->Lock).Ptr = (FPlatformRWLock *)0x0;
  return this;
}

// ~FFastGeoPrimitiveComponent @ 14da1b700

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FFastGeoPrimitiveComponent::~FFastGeoPrimitiveComponent(FFastGeoPrimitiveComponent *this)

{
  FPlatformRWLock *SRWLock;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  
  SRWLock = (this->Lock).Ptr;
  if (SRWLock != (FPlatformRWLock *)0x0) {
    BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    if (BVar3 == '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsLocked()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                         ,0x48,L"Destroying a lock that is still held!");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
    ::operator_delete(SRWLock,8);
  }
  pFVar1 = (this->MaterialPSOPrecacheRequestIDs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->BodyInstanceOwner)._padding_ = (longlong)&___7FChaosUserDefinedEntity__6B_;
  pFVar1 = (this->RuntimeVirtualTextures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FBodyInstance::~FBodyInstance(&this->BodyInstance);
  pFVar1 = (this->CustomPrimitiveData).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IFastGeoElement__6B_;
  return;
}

// AdditionalStatObject @ 14da20590

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UObject * __thiscall
FFastGeoPrimitiveComponent::AdditionalStatObject(FFastGeoPrimitiveComponent *this)

{
  return (UObject *)0x0;
}

// ApplyWorldTransform @ 14da20820

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

void __thiscall
FFastGeoPrimitiveComponent::ApplyWorldTransform
          (FFastGeoPrimitiveComponent *this,TTransform<double> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 auStack_98 [32];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetOwnerComponentCluster()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoComponent.cpp"
                       ,0x32,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)(*(longlong *)(this->_padding_ + 0x18) + 0x110) != '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GetOwnerContainer()->IsRegistered()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoPrimitiveComponent.cpp"
                       ,0xc5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_78.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_78.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_78.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_78.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_78.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_78.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_78.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_78.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_78.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_78.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_78.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_78.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_78.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_78.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_78.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_78.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_78.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_78.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_78,&this->LocalTransform,param_1);
  (this->WorldTransform).Rotation.XY.m128d_f64[0] = local_78.Rotation.XY.m128d_f64[0];
  (this->WorldTransform).Rotation.XY.m128d_f64[1] = local_78.Rotation.XY.m128d_f64[1];
  (this->WorldTransform).Rotation.ZW.m128d_f64[0] = local_78.Rotation.ZW.m128d_f64[0];
  (this->WorldTransform).Rotation.ZW.m128d_f64[1] = local_78.Rotation.ZW.m128d_f64[1];
  (this->WorldTransform).Translation.XY.m128d_f64[0] = local_78.Translation.XY.m128d_f64[0];
  (this->WorldTransform).Translation.XY.m128d_f64[1] = local_78.Translation.XY.m128d_f64[1];
  (this->WorldTransform).Translation.ZW.m128d_f64[0] = local_78.Translation.ZW.m128d_f64[0];
  (this->WorldTransform).Translation.ZW.m128d_f64[1] = local_78.Translation.ZW.m128d_f64[1];
  (this->WorldTransform).Scale3D.XY.m128d_f64[0] = local_78.Scale3D.XY.m128d_f64[0];
  (this->WorldTransform).Scale3D.XY.m128d_f64[1] = local_78.Scale3D.XY.m128d_f64[1];
  (this->WorldTransform).Scale3D.ZW.m128d_f64[0] = local_78.Scale3D.ZW.m128d_f64[0];
  (this->WorldTransform).Scale3D.ZW.m128d_f64[1] = local_78.Scale3D.ZW.m128d_f64[1];
  return;
}

// BuildSceneDesc @ 14da22140

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneDesc * __thiscall
FFastGeoPrimitiveComponent::BuildSceneDesc
          (FFastGeoPrimitiveComponent *this,FPrimitiveSceneDesc *__return_storage_ptr__)

{
  FPrimitiveSceneInfoData *pFVar1;
  double dVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  FPrimitiveSceneDesc *pFVar6;
  FPrimitiveSceneProxyDesc *pFVar7;
  TMatrix<double> local_88;
  
  pFVar1 = &this->PrimitiveSceneData;
  if (pFVar1->SceneProxy == (FPrimitiveSceneProxy *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSceneProxy()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoPrimitiveComponent.cpp"
                       ,0x14b,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FPrimitiveSceneDesc *)(*pcVar3)();
      return pFVar6;
    }
  }
  pFVar7 = (FPrimitiveSceneProxyDesc *)(**(code **)(this->_padding_ + 0xa8))(this);
  __return_storage_ptr__->bShouldAddtoScene = true;
  __return_storage_ptr__->bRecreateProxyOnUpdateTransform = false;
  __return_storage_ptr__->bIsUnreachable = false;
  __return_storage_ptr__->bBulkReregister = false;
  __return_storage_ptr__->LightingAttachmentComponentId = 0;
  __return_storage_ptr__->LodParentComponentId = 0;
  __return_storage_ptr__->ProxyDesc = (FPrimitiveSceneProxyDesc *)0x0;
  __return_storage_ptr__->PrimitiveSceneData = (FPrimitiveSceneInfoData *)0x0;
  __return_storage_ptr__->SceneProxy = (FPrimitiveSceneProxy *)0x0;
  __return_storage_ptr__->Mobility = Movable;
  __return_storage_ptr__->PrimitiveComponentInterface = (IPrimitiveComponent *)0x0;
  __return_storage_ptr__->PrimitiveUObject = (UObject *)0x0;
  __return_storage_ptr__->World = (UWorld *)0x0;
  __return_storage_ptr__->SceneProxy = pFVar1->SceneProxy;
  __return_storage_ptr__->ProxyDesc = pFVar7;
  __return_storage_ptr__->PrimitiveSceneData = pFVar1;
  UE::Math::TTransform<double>::ToMatrixWithScale(&this->WorldTransform,&local_88);
  (__return_storage_ptr__->RenderMatrix).M[0][0] = local_88.M[0][0];
  (__return_storage_ptr__->RenderMatrix).M[0][1] = local_88.M[0][1];
  (__return_storage_ptr__->RenderMatrix).M[0][2] = local_88.M[0][2];
  (__return_storage_ptr__->RenderMatrix).M[0][3] = local_88.M[0][3];
  (__return_storage_ptr__->RenderMatrix).M[1][0] = local_88.M[1][0];
  (__return_storage_ptr__->RenderMatrix).M[1][1] = local_88.M[1][1];
  (__return_storage_ptr__->RenderMatrix).M[1][2] = local_88.M[1][2];
  (__return_storage_ptr__->RenderMatrix).M[1][3] = local_88.M[1][3];
  (__return_storage_ptr__->RenderMatrix).M[2][0] = local_88.M[2][0];
  (__return_storage_ptr__->RenderMatrix).M[2][1] = local_88.M[2][1];
  (__return_storage_ptr__->RenderMatrix).M[2][2] = local_88.M[2][2];
  (__return_storage_ptr__->RenderMatrix).M[2][3] = local_88.M[2][3];
  (__return_storage_ptr__->RenderMatrix).M[3][0] = local_88.M[3][0];
  (__return_storage_ptr__->RenderMatrix).M[3][1] = local_88.M[3][1];
  (__return_storage_ptr__->RenderMatrix).M[3][2] = local_88.M[3][2];
  (__return_storage_ptr__->RenderMatrix).M[3][3] = local_88.M[3][3];
  dVar4 = (this->WorldTransform).Translation.XY.m128d_f64[1];
  dVar2 = (this->WorldTransform).Translation.ZW.m128d_f64[0];
  (__return_storage_ptr__->AttachmentRootPosition).field0_0x0._s_0.X =
       (this->WorldTransform).Translation.XY.m128d_f64[0];
  (__return_storage_ptr__->AttachmentRootPosition).field0_0x0._s_0.Y = dVar4;
  (__return_storage_ptr__->AttachmentRootPosition).field0_0x0._s_0.Z = dVar2;
  dVar2 = (this->LocalBounds).Origin.field0_0x0._s_0.Y;
  (__return_storage_ptr__->LocalBounds).Origin.field0_0x0._s_0.X =
       (this->LocalBounds).Origin.field0_0x0._s_0.X;
  (__return_storage_ptr__->LocalBounds).Origin.field0_0x0._s_0.Y = dVar2;
  dVar2 = (this->LocalBounds).BoxExtent.field0_0x0._s_0.X;
  (__return_storage_ptr__->LocalBounds).Origin.field0_0x0._s_0.Z =
       (this->LocalBounds).Origin.field0_0x0._s_0.Z;
  (__return_storage_ptr__->LocalBounds).BoxExtent.field0_0x0._s_0.X = dVar2;
  dVar2 = (this->LocalBounds).BoxExtent.field0_0x0._s_0.Z;
  (__return_storage_ptr__->LocalBounds).BoxExtent.field0_0x0._s_0.Y =
       (this->LocalBounds).BoxExtent.field0_0x0._s_0.Y;
  (__return_storage_ptr__->LocalBounds).BoxExtent.field0_0x0._s_0.Z = dVar2;
  (__return_storage_ptr__->LocalBounds).SphereRadius = (this->LocalBounds).SphereRadius;
  dVar2 = (this->WorldBounds).Origin.field0_0x0._s_0.Y;
  (__return_storage_ptr__->Bounds).Origin.field0_0x0._s_0.X =
       (this->WorldBounds).Origin.field0_0x0._s_0.X;
  (__return_storage_ptr__->Bounds).Origin.field0_0x0._s_0.Y = dVar2;
  dVar2 = (this->WorldBounds).BoxExtent.field0_0x0._s_0.X;
  (__return_storage_ptr__->Bounds).Origin.field0_0x0._s_0.Z =
       (this->WorldBounds).Origin.field0_0x0._s_0.Z;
  (__return_storage_ptr__->Bounds).BoxExtent.field0_0x0._s_0.X = dVar2;
  dVar2 = (this->WorldBounds).BoxExtent.field0_0x0._s_0.Z;
  (__return_storage_ptr__->Bounds).BoxExtent.field0_0x0._s_0.Y =
       (this->WorldBounds).BoxExtent.field0_0x0._s_0.Y;
  (__return_storage_ptr__->Bounds).BoxExtent.field0_0x0._s_0.Z = dVar2;
  (__return_storage_ptr__->Bounds).SphereRadius = (this->WorldBounds).SphereRadius;
  __return_storage_ptr__->Mobility = (uint)(pFVar7->Mobility).Value;
  return __return_storage_ptr__;
}

// CheckPSOPrecachingAndBoostPriority @ 14da23230

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
FFastGeoPrimitiveComponent::CheckPSOPrecachingAndBoostPriority
          (FFastGeoPrimitiveComponent *this,EPSOPrecachePriority param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  
  if ((this->bPSOPrecacheRequired == (atomic<bool>)0x0) &&
     (this->LatestPSOPrecacheJobSetCompleted == (atomic<int>)this->LatestPSOPrecacheJobSet)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  bVar2 = IsComponentPSOPrecachingEnabled();
  if (((bVar2) && (this->bPSOPrecacheCalled == (atomic<bool>)0x0)) &&
     (this->bPSOPrecacheRequired == (atomic<bool>)0x0)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3035093976077042399>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoPrimitiveComponent.cpp"
                       ,0x2df,
                       "!IsComponentPSOPrecachingEnabled() || bPSOPrecacheCalled || bPSOPrecacheRequired"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (1 < (byte)(param_1 - High)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewPSOPrecachePriority == EPSOPrecachePriority::High || NewPSOPrecachePriority == EPSOPrecachePriority::Highest"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoPrimitiveComponent.cpp"
                       ,0x2e0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if ((bVar4 != false) && ((byte)this->PSOPrecacheRequestPriority < param_1)) {
    if (this->LatestPSOPrecacheJobSetCompleted != (atomic<int>)this->LatestPSOPrecacheJobSet) {
      BoostPSOPriority(param_1,&this->MaterialPSOPrecacheRequestIDs);
    }
    LOCK();
    this->PSOPrecacheRequestPriority = (atomic<EPSOPrecachePriority>)param_1;
    UNLOCK();
  }
  return bVar4;
}

// CollectPSOPrecacheData @ 14da23970

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FFastGeoPrimitiveComponent::CollectPSOPrecacheData
          (FFastGeoPrimitiveComponent *this,FPSOPrecacheParams *param_1,
          TArray<FMaterialInterfacePSOPrecacheParams,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  return;
}

// CreateRenderState @ 14da25ab0

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

void __thiscall
FFastGeoPrimitiveComponent::CreateRenderState
          (FFastGeoPrimitiveComponent *this,FRegisterComponentContext *param_1)

{
  FPrimitiveSceneInfoData *pFVar1;
  FPlatformRWLock *SRWLock;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  UWorld *pUVar5;
  longlong lVar6;
  FLinearColor *pFVar7;
  EProxyCreationState EVar8;
  FSceneInterface *pFVar9;
  undefined1 auStack_248 [32];
  int local_228 [6];
  double local_210;
  TMatrix<double> local_208;
  longlong local_188 [2];
  FPrimitiveSceneInfoData *local_178;
  FPrimitiveSceneProxy *local_170;
  undefined8 local_168;
  undefined4 local_160;
  uint local_15c;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  double local_128;
  double local_120;
  double dStack_118;
  double local_110;
  double dStack_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_248;
  SRWLock = (this->Lock).Ptr;
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  this->ProxyState = Creating;
  this->bRenderStateDirty = false;
  pUVar5 = FFastGeoComponent::GetWorld((FFastGeoComponent *)this);
  pFVar9 = (FSceneInterface *)0x0;
  if (((pUVar5 == (UWorld *)0x0) || (pFVar9 = pUVar5->Scene, pFVar9 == (FSceneInterface *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Scene",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoPrimitiveComponent.cpp"
                         ,0x166,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar6 = (**(code **)(this->_padding_ + 0xc0))(this,local_228);
  EVar8 = None;
  if (lVar6 == 0) {
    if (local_228[0] == 1) {
      EVar8 = Delayed;
    }
    this->ProxyState = EVar8;
  }
  else {
    pFVar7 = &FLinearColor::White;
    if (UFastGeoWorldSubsystem::bEnableDebugView != false) {
      pFVar7 = &FLinearColor::Blue;
    }
    pFVar1 = &this->PrimitiveSceneData;
    uVar3 = *(undefined8 *)((longlong)&pFVar7->field0_0x0 + 8);
    *(undefined8 *)(lVar6 + 0x40) = *(undefined8 *)&pFVar7->field0_0x0;
    *(undefined8 *)(lVar6 + 0x48) = uVar3;
    if (pFVar1->SceneProxy == (FPrimitiveSceneProxy *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetSceneProxy()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoPrimitiveComponent.cpp"
                         ,0x16c,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((pFVar1->SceneProxy == (FPrimitiveSceneProxy *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("GetSceneProxy()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoPrimitiveComponent.cpp"
                             ,0x14b,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    lVar6 = (**(code **)(this->_padding_ + 0xa8))(this);
    local_170 = pFVar1->SceneProxy;
    local_188[1] = 0;
    local_168 = 0;
    local_160 = 1;
    local_50 = 0;
    local_48 = 0;
    local_188[0] = lVar6;
    local_178 = pFVar1;
    UE::Math::TTransform<double>::ToMatrixWithScale(&this->WorldTransform,&local_208);
    local_e8 = local_208.M[0][0];
    dStack_e0 = local_208.M[0][1];
    local_d8 = local_208.M[0][2];
    dStack_d0 = local_208.M[0][3];
    local_c8 = local_208.M[1][0];
    dStack_c0 = local_208.M[1][1];
    local_b8 = local_208.M[1][2];
    dStack_b0 = local_208.M[1][3];
    local_a8 = local_208.M[2][0];
    dStack_a0 = local_208.M[2][1];
    local_98 = local_208.M[2][2];
    dStack_90 = local_208.M[2][3];
    local_88 = local_208.M[3][0];
    dStack_80 = local_208.M[3][1];
    local_210 = (this->WorldTransform).Translation.ZW.m128d_f64[0];
    local_78 = local_208.M[3][2];
    dStack_70 = local_208.M[3][3];
    local_68 = (this->WorldTransform).Translation.XY.m128d_f64[0];
    dStack_60 = (this->WorldTransform).Translation.XY.m128d_f64[1];
    local_120 = (this->LocalBounds).Origin.field0_0x0._s_0.X;
    dStack_118 = (this->LocalBounds).Origin.field0_0x0._s_0.Y;
    local_110 = (this->LocalBounds).Origin.field0_0x0._s_0.Z;
    dStack_108 = (this->LocalBounds).BoxExtent.field0_0x0._s_0.X;
    local_100 = (this->LocalBounds).BoxExtent.field0_0x0._s_0.Y;
    dStack_f8 = (this->LocalBounds).BoxExtent.field0_0x0._s_0.Z;
    local_f0 = (this->LocalBounds).SphereRadius;
    local_158 = (this->WorldBounds).Origin.field0_0x0._s_0.X;
    dStack_150 = (this->WorldBounds).Origin.field0_0x0._s_0.Y;
    local_148 = (this->WorldBounds).Origin.field0_0x0._s_0.Z;
    dStack_140 = (this->WorldBounds).BoxExtent.field0_0x0._s_0.X;
    local_138 = *(undefined4 *)((longlong)&(this->WorldBounds).BoxExtent.field0_0x0 + 8);
    uStack_134 = *(undefined4 *)((longlong)&(this->WorldBounds).BoxExtent.field0_0x0 + 0xc);
    uStack_130 = *(undefined4 *)((longlong)&(this->WorldBounds).BoxExtent.field0_0x0 + 0x10);
    uStack_12c = *(undefined4 *)((longlong)&(this->WorldBounds).BoxExtent.field0_0x0 + 0x14);
    local_128 = (this->WorldBounds).SphereRadius;
    local_15c = (uint)*(byte *)(lVar6 + 0x88);
    local_58 = local_210;
    (**(code **)pFVar9->_padding_)(pFVar9,local_188);
    this->ProxyState = Created;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// DestroyRenderState @ 14da26c60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FFastGeoPrimitiveComponent::DestroyRenderState
          (FFastGeoPrimitiveComponent *this,FFastGeoDestroyRenderStateContext *param_1)

{
  int *piVar1;
  FPlatformRWLock *SRWLock;
  FPrimitiveSceneProxy *pFVar2;
  FScriptContainerElement *pFVar3;
  FSceneInterface *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FPrimitiveSceneProxy *local_28;
  ForAnyElementType local_20;
  undefined4 local_18;
  int local_14 [3];
  
  SRWLock = (this->Lock).Ptr;
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  if ((this->PrimitiveSceneData).SceneProxy != (FPrimitiveSceneProxy *)0x0) {
    if (this->ProxyState != Created) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ProxyState == EProxyCreationState::Created",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoPrimitiveComponent.cpp"
                         ,0x19f,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar2 = (this->PrimitiveSceneData).SceneProxy;
    local_28 = pFVar2;
    if (param_1 == (FFastGeoDestroyRenderStateContext *)0x0) {
      pFVar4 = pFVar2->Scene;
      local_20.Data = (FScriptContainerElement *)0x0;
      local_18 = 1;
      pcVar5 = *(code **)(pFVar4->_padding_ + 0x40);
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,1,0,&local_20,1,local_14);
      *(FPrimitiveSceneProxy **)local_20.Data = pFVar2;
      (*pcVar5)(pFVar4,&local_20);
      if (local_20.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_20.Data);
      }
    }
    else {
      pFVar3 = (param_1->PrimitiveSceneProxies).AllocatorInstance.Data;
      if ((pFVar3 <= (FScriptContainerElement *)&local_28) &&
         ((FScriptContainerElement *)&local_28 <
          pFVar3 + (longlong)(param_1->PrimitiveSceneProxies).ArrayMax * 8)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar7 = (param_1->PrimitiveSceneProxies).ArrayNum;
      piVar1 = &(param_1->PrimitiveSceneProxies).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(param_1->PrimitiveSceneProxies).AllocatorInstance,piVar1);
      }
      (param_1->PrimitiveSceneProxies).ArrayNum = iVar7 + 1;
      *(FPrimitiveSceneProxy **)
       ((param_1->PrimitiveSceneProxies).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_28;
    }
    (this->PrimitiveSceneData).SceneProxy = (FPrimitiveSceneProxy *)0x0;
    this->ProxyState = Pending;
    this->bRenderStateDirty = false;
  }
                    /* WARNING: Could not recover jumptable at 0x00014da26e31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// DoCustomNavigableGeometryExport @ 14da27290

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
FFastGeoPrimitiveComponent::DoCustomNavigableGeometryExport
          (FFastGeoPrimitiveComponent *this,FNavigableGeometryExport *param_1)

{
  return true;
}

// GetBounds @ 14da29a10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TBoxSphereBounds<double,double> * __thiscall
FFastGeoPrimitiveComponent::GetBounds(FFastGeoPrimitiveComponent *this)

{
  return &this->WorldBounds;
}

// GetCollisionResponseToChannel @ 14da29a90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ECollisionResponse __thiscall
FFastGeoPrimitiveComponent::GetCollisionResponseToChannel
          (FFastGeoPrimitiveComponent *this,ECollisionChannel param_1)

{
  return (ECollisionResponse)
         (this->BodyInstance).CollisionResponses.ResponseToChannels.field0_0x0.EnumArray
         [(int)param_1];
}

// GetComplexPhysicalMaterials @ 14da29b40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FFastGeoPrimitiveComponent::GetComplexPhysicalMaterials
          (FFastGeoPrimitiveComponent *this,
          TArray<UPhysicalMaterial_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FPhysicalMaterialMaskParams,TSizedDefaultAllocator<32>_> *param_2)

{
  return;
}

// GetLastRenderTimeOnScreen @ 14da2a6e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall
FFastGeoPrimitiveComponent::GetLastRenderTimeOnScreen(FFastGeoPrimitiveComponent *this)

{
  return (this->PrimitiveSceneData).LastRenderTimeOnScreen;
}

// GetMobility @ 14da2a840

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

Type __thiscall FFastGeoPrimitiveComponent::GetMobility(FFastGeoPrimitiveComponent *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(this->_padding_ + 0xa0))();
  return (Type)*(byte *)(lVar1 + 0x88);
}

// GetNavigationBounds @ 14da2a930

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TBox<double> * __thiscall
FFastGeoPrimitiveComponent::GetNavigationBounds
          (FFastGeoPrimitiveComponent *this,TBox<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar1 = (this->WorldBounds).Origin.field0_0x0._s_0.X;
  dVar2 = (this->WorldBounds).BoxExtent.field0_0x0._s_0.X;
  dVar3 = (this->WorldBounds).Origin.field0_0x0._s_0.Y;
  dVar4 = (this->WorldBounds).BoxExtent.field0_0x0._s_0.Y;
  dVar5 = (this->WorldBounds).BoxExtent.field0_0x0._s_0.Z;
  dVar6 = (this->WorldBounds).Origin.field0_0x0._s_0.Z;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar1 - dVar2;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar3 - dVar4;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar6 - dVar5;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar1 + dVar2;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar3 + dVar4;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar6 + dVar5;
  __return_storage_ptr__->IsValid = '\x01';
  return __return_storage_ptr__;
}

// GetNavigationData @ 14da2ac80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
FFastGeoPrimitiveComponent::GetNavigationData
          (FFastGeoPrimitiveComponent *this,FNavigationRelevantData *param_1)

{
  undefined1 uVar1;
  FDestructionSentinel local_78;
  undefined1 local_60 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  ForAnyElementType FStack_50;
  int local_48;
  ForAnyElementType local_40;
  undefined8 local_38;
  ForAnyElementType local_30;
  undefined8 local_28;
  ForAnyElementType local_20;
  undefined8 local_18;
  uint local_10;
  ENavigationDataResolution local_c;
  
  uVar1 = this->field_0x160;
  if (this->bFillCollisionUnderneathForNavmesh != '\0' ||
      this->bRasterizeAsFilledConvexVolume != '\0') {
    local_60._0_4_ = local_60._0_4_ & 0xfffffffe;
    local_c = Invalid;
    local_48 = 0;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38._0_4_ = 0;
    local_38._4_4_ = 0;
    local_10 = (((byte)uVar1 & 8) * 2 | (byte)uVar1 & 4) << 2 | local_10 & 0xffffff80;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28._0_4_ = 0;
    local_28._4_4_ = 0;
    local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_50.Data = (FScriptContainerElement *)0x0;
    local_20.Data = (FScriptContainerElement *)0x0;
    local_18._0_4_ = 0;
    local_18._4_4_ = 0;
    FCompositeNavModifier::Add(&param_1->Modifiers,(FCompositeNavModifier *)local_60);
    if (local_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data);
    }
    DestructItems<FSimpleLinkNavModifier,int>((FSimpleLinkNavModifier *)local_30.Data,(int)local_28)
    ;
    if ((FSimpleLinkNavModifier *)local_30.Data != (FSimpleLinkNavModifier *)0x0) {
      FMemory::Free(local_30.Data);
    }
    DestructItems<FAreaNavModifier,int>((FAreaNavModifier *)local_40.Data,(int)local_38);
    if ((FAreaNavModifier *)local_40.Data != (FAreaNavModifier *)0x0) {
      FMemory::Free(local_40.Data);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_58,(FWriteAccessScope *)&local_78);
    if ((local_48 != 0) && (FStack_50.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_50.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_50,0,0,0x10);
      local_48 = 0;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    if (FStack_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_50.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  }
  return;
}

// GetPhysicalMaterial @ 14da2b0e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UPhysicalMaterial * __thiscall
FFastGeoPrimitiveComponent::GetPhysicalMaterial(FFastGeoPrimitiveComponent *this)

{
  return (UPhysicalMaterial *)0x0;
}

// GetRenderMatrix @ 14da2b6f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TMatrix<double> * __thiscall
FFastGeoPrimitiveComponent::GetRenderMatrix
          (FFastGeoPrimitiveComponent *this,TMatrix<double> *__return_storage_ptr__)

{
  UE::Math::TTransform<double>::ToMatrixWithScale(&this->WorldTransform,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetScene @ 14da2b720

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FSceneInterface * __thiscall FFastGeoPrimitiveComponent::GetScene(FFastGeoPrimitiveComponent *this)

{
  UWorld *pUVar1;
  
  pUVar1 = FFastGeoComponent::GetWorld((FFastGeoComponent *)this);
  if (pUVar1 != (UWorld *)0x0) {
    return pUVar1->Scene;
  }
  return (FSceneInterface *)0x0;
}

// GetSceneProxy @ 14da2b750

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall
FFastGeoPrimitiveComponent::GetSceneProxy(FFastGeoPrimitiveComponent *this)

{
  return (this->PrimitiveSceneData).SceneProxy;
}

// GetSourceObject @ 14da2b980

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UObject * __thiscall FFastGeoPrimitiveComponent::GetSourceObject(FFastGeoPrimitiveComponent *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  
  if (this->_padding_ != 0) {
    return *(UObject **)(this->_padding_ + 0x18);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("GetOwnerComponentCluster()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoComponent.cpp"
                     ,0x32,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UObject *)(*pcVar1)();
    return pUVar3;
  }
  return *(UObject **)(this->_padding_ + 0x18);
}

// GetTransform @ 14da2bbd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TTransform<double> * __thiscall
FFastGeoPrimitiveComponent::GetTransform(FFastGeoPrimitiveComponent *this)

{
  return &this->WorldTransform;
}

// GetUsedMaterialPropertyDesc @ 14da2bcc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FPrimitiveMaterialPropertyDescriptor * __thiscall
FFastGeoPrimitiveComponent::GetUsedMaterialPropertyDesc
          (FFastGeoPrimitiveComponent *this,
          FPrimitiveMaterialPropertyDescriptor *__return_storage_ptr__,EShaderPlatform param_1)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FPrimitiveMaterialPropertyDescriptor *pFVar6;
  FPrimitiveMaterialPropertyDescriptor local_18;
  
  pFVar6 = FPrimitiveComponentHelper::GetUsedMaterialPropertyDesc<FFastGeoPrimitiveComponent>
                     (&local_18,this,param_1);
  fVar1 = pFVar6->MaxWorldPositionOffsetDisplacement;
  bVar2 = pFVar6->bAnyMaterialHasWorldPositionOffset;
  bVar3 = pFVar6->bAnyMaterialHasPixelAnimation;
  bVar4 = pFVar6->bAnyMaterialHasPerInstanceCustomData;
  bVar5 = pFVar6->bAnyMaterialHasPerInstanceRandom;
  (__return_storage_ptr__->MinMaxMaterialDisplacement).field0_0x0 =
       (pFVar6->MinMaxMaterialDisplacement).field0_0x0;
  __return_storage_ptr__->MaxWorldPositionOffsetDisplacement = fVar1;
  __return_storage_ptr__->bAnyMaterialHasWorldPositionOffset = bVar2;
  __return_storage_ptr__->bAnyMaterialHasPixelAnimation = bVar3;
  __return_storage_ptr__->bAnyMaterialHasPerInstanceCustomData = bVar4;
  __return_storage_ptr__->bAnyMaterialHasPerInstanceRandom = bVar5;
  return __return_storage_ptr__;
}

// GetUsedMaterialPropertyDesc @ 14da2bcf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

FPrimitiveMaterialPropertyDescriptor * __thiscall
FFastGeoPrimitiveComponent::GetUsedMaterialPropertyDesc
          (FFastGeoPrimitiveComponent *this,
          FPrimitiveMaterialPropertyDescriptor *__return_storage_ptr__,Type param_1)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FPrimitiveMaterialPropertyDescriptor *pFVar6;
  EShaderPlatform EVar7;
  FPrimitiveMaterialPropertyDescriptor local_18;
  
  if (param_1 == Num) {
    EVar7 = SP_NumPlatforms;
  }
  else {
    EVar7 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_1];
  }
  pFVar6 = FPrimitiveComponentHelper::GetUsedMaterialPropertyDesc<FFastGeoPrimitiveComponent>
                     (&local_18,this,EVar7);
  fVar1 = pFVar6->MaxWorldPositionOffsetDisplacement;
  bVar2 = pFVar6->bAnyMaterialHasWorldPositionOffset;
  bVar3 = pFVar6->bAnyMaterialHasPixelAnimation;
  bVar4 = pFVar6->bAnyMaterialHasPerInstanceCustomData;
  bVar5 = pFVar6->bAnyMaterialHasPerInstanceRandom;
  (__return_storage_ptr__->MinMaxMaterialDisplacement).field0_0x0 =
       (pFVar6->MinMaxMaterialDisplacement).field0_0x0;
  __return_storage_ptr__->MaxWorldPositionOffsetDisplacement = fVar1;
  __return_storage_ptr__->bAnyMaterialHasWorldPositionOffset = bVar2;
  __return_storage_ptr__->bAnyMaterialHasPixelAnimation = bVar3;
  __return_storage_ptr__->bAnyMaterialHasPerInstanceCustomData = bVar4;
  __return_storage_ptr__->bAnyMaterialHasPerInstanceRandom = bVar5;
  return __return_storage_ptr__;
}

// HasCustomNavigableGeometry @ 14da2c110

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

Type __thiscall
FFastGeoPrimitiveComponent::HasCustomNavigableGeometry(FFastGeoPrimitiveComponent *this)

{
  return (Type)(this->bHasCustomNavigableGeometry).Value;
}

// InitializeDynamicProperties @ 14da2c4d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FFastGeoPrimitiveComponent::InitializeDynamicProperties(FFastGeoPrimitiveComponent *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetOwnerComponentCluster()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoComponent.cpp"
                       ,0x32,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FBodyInstance::FixupData(&this->BodyInstance,*(UObject **)(this->_padding_ + 0x18));
  return;
}

// InitializeSceneProxyDescDynamicProperties @ 14da2cfb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FFastGeoPrimitiveComponent::InitializeSceneProxyDescDynamicProperties
          (FFastGeoPrimitiveComponent *this)

{
  int iVar1;
  TAtomic<FMinimalName> TVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  EPSOPrecacheProxyCreationStrategy EVar6;
  uint uVar7;
  UWorld *pUVar8;
  longlong lVar9;
  longlong lVar10;
  FUObjectItem *pFVar11;
  FUObjectItem *this_00;
  TStatIdData *pTVar12;
  FSceneInterface *pFVar13;
  uint uVar14;
  undefined4 uStack_c;
  
  pUVar8 = FFastGeoComponent::GetWorld((FFastGeoComponent *)this);
  if ((pUVar8 == (UWorld *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetWorld()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoPrimitiveComponent.cpp"
                         ,0x128,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pUVar8 = FFastGeoComponent::GetWorld((FFastGeoComponent *)this);
  if (((pUVar8 == (UWorld *)0x0) || (pUVar8->Scene == (FSceneInterface *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetScene()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoPrimitiveComponent.cpp"
                         ,0x129,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar9 = (**(code **)(this->_padding_ + 0xa8))(this);
  *(uint *)(lVar9 + 0x98) = (this->PrimitiveSceneData).PrimitiveSceneId.PrimIDValue;
  lVar10 = (**(code **)(this->_padding_ + 0x48))(this);
  if (lVar10 == 0) {
    pTVar12 = &TStatId::TStatId_NAME_None;
  }
  else {
    pFVar11 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(lVar10 + 0xc));
    TVar2 = ((pFVar11->StatID).StatIdPtr)->Name;
    if ((TVar2._0_4_ == 0) && (TVar2._4_4_ == 0)) {
      this_00 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(lVar10 + 0xc));
      FUObjectItem::CreateStatID(this_00);
    }
    pTVar12 = (pFVar11->StatID).StatIdPtr;
  }
  *(TStatIdData **)(lVar9 + 0x68) = pTVar12;
  if ((this->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetOwnerComponentCluster()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoComponent.cpp"
                         ,0x32,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(this->_padding_ + 0x18);
  pUVar8 = FFastGeoComponent::GetWorld((FFastGeoComponent *)this);
  *(UWorld **)(lVar9 + 0x18) = pUVar8;
  *(FCustomPrimitiveData **)(lVar9 + 0x40) = &this->CustomPrimitiveData;
  pUVar8 = FFastGeoComponent::GetWorld((FFastGeoComponent *)this);
  pFVar13 = (FSceneInterface *)0x0;
  uVar14 = 0;
  if (pUVar8 != (UWorld *)0x0) {
    pFVar13 = pUVar8->Scene;
  }
  *(FSceneInterface **)(lVar9 + 0x48) = pFVar13;
  *(Type *)(lVar9 + 0xb0) = pFVar13->FeatureLevel;
  iVar1 = (this->RuntimeVirtualTextures).ArrayNum;
  pFVar3 = (this->RuntimeVirtualTextures).AllocatorInstance.Data;
  if ((iVar1 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(FScriptContainerElement **)(lVar9 + 0x20) = pFVar3;
  *(ulonglong *)(lVar9 + 0x28) = CONCAT44(uStack_c,iVar1);
  if ((this->bPSOPrecacheRequired != (atomic<bool>)0x0) ||
     (this->LatestPSOPrecacheJobSetCompleted != (atomic<int>)this->LatestPSOPrecacheJobSet)) {
    EVar6 = GetPSOPrecacheProxyCreationStrategy();
    uVar7 = 0x8000000;
    if (EVar6 == UseDefaultMaterialUntilPSOPrecached) goto LAB_14da2d1a0;
  }
  uVar7 = uVar14;
LAB_14da2d1a0:
  *(uint *)(lVar9 + 0x74) = *(uint *)(lVar9 + 0x74) & 0xf7ffffff;
  *(uint *)(lVar9 + 0x74) = *(uint *)(lVar9 + 0x74) | uVar7;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&NAME_FastGeoPrimitiveComponent,L"FastGeoPrimitiveComponent");
    _Init_thread_footer(&::_TSS0);
  }
  *(FName *)(lVar9 + 0xb4) = NAME_FastGeoPrimitiveComponent;
  uVar7 = (uint)this->_padding_;
  if ((uVar7 == FFastGeoInstancedStaticMeshComponent::Type.ID) ||
     (((((FFastGeoElementType *)this->_padding_ != (FFastGeoElementType *)0x0 &&
        (bVar5 = FFastGeoElementType::IsA
                           ((FFastGeoElementType *)this->_padding_,
                            &FFastGeoInstancedStaticMeshComponent::Type), bVar5)) ||
       (uVar7 == FFastGeoProceduralISMComponent::Type.ID)) ||
      (((FFastGeoElementType *)this->_padding_ != (FFastGeoElementType *)0x0 &&
       (bVar5 = FFastGeoElementType::IsA
                          ((FFastGeoElementType *)this->_padding_,
                           &FFastGeoProceduralISMComponent::Type), bVar5)))))) {
    uVar14 = 1;
  }
  if (((*(uint *)(lVar9 + 0x74) >> 0x16 & 1) != uVar14) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SceneProxyDesc.bIsInstancedStaticMesh == (this->IsA<FFastGeoInstancedStaticMeshComponent>() || this->IsA<FFastGeoProceduralISMComponent>())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoPrimitiveComponent.cpp"
                         ,0x145,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  UpdateVisibility(this);
  return;
}

// IsCollisionEnabled @ 14da2d680

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall FFastGeoPrimitiveComponent::IsCollisionEnabled(FFastGeoPrimitiveComponent *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(this->_padding_ + 0xa0))();
  return (bool)((byte)(*(uint *)(lVar1 + 0x74) >> 0x11) & 1);
}

// IsDrawnInGame @ 14da2d880

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall FFastGeoPrimitiveComponent::IsDrawnInGame(FFastGeoPrimitiveComponent *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(this->_padding_ + 0xa0))();
  if ((*(uint *)(lVar1 + 0x74) & 0x800) != 0) {
    lVar1 = (**(code **)(this->_padding_ + 0xa0))(this);
    if ((*(uint *)(lVar1 + 0x74) & 0x40000) == 0) {
      return true;
    }
  }
  return false;
}

// IsFirstPersonRelevant @ 14da2d8e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall FFastGeoPrimitiveComponent::IsFirstPersonRelevant(FFastGeoPrimitiveComponent *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(this->_padding_ + 0xa0))();
  return (*(uint *)(lVar1 + 0x74) & 0x300) != 0;
}

// IsNavigationRelevant @ 14da2dca0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall FFastGeoPrimitiveComponent::IsNavigationRelevant(FFastGeoPrimitiveComponent *this)

{
  uchar uVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  char cStack_36;
  char cStack_32;
  
  if (this->bCanEverAffectNavigation != '\0') {
    iVar4 = (**(code **)(this->_padding_ + 0x90))();
    if (1 < iVar4) {
      return true;
    }
    uVar2 = *(undefined8 *)&(this->BodyInstance).CollisionResponses.ResponseToChannels.field0_0x0;
    cVar3 = (**(code **)(this->_padding_ + 0x10))(this);
    if ((cVar3 != '\0') &&
       (((uVar1 = (this->BodyInstance).CollisionEnabled.Value, uVar1 == '\x01' || (uVar1 == '\x03'))
        || (uVar1 == '\x05')))) {
      cStack_36 = (char)((ulonglong)uVar2 >> 0x10);
      cStack_32 = (char)((ulonglong)uVar2 >> 0x30);
      if (cStack_36 == '\x02') {
        return true;
      }
      if (cStack_32 == '\x02') {
        return true;
      }
    }
  }
  return false;
}

// IsPSOPrecaching @ 14da2de20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall FFastGeoPrimitiveComponent::IsPSOPrecaching(FFastGeoPrimitiveComponent *this)

{
  if ((this->bPSOPrecacheRequired == (atomic<bool>)0x0) &&
     (this->LatestPSOPrecacheJobSetCompleted == (atomic<int>)this->LatestPSOPrecacheJobSet)) {
    return false;
  }
  return true;
}

// IsRenderStateCreated @ 14da2df10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall FFastGeoPrimitiveComponent::IsRenderStateCreated(FFastGeoPrimitiveComponent *this)

{
  return this->ProxyState == Created;
}

// IsRenderStateDelayed @ 14da2df30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall FFastGeoPrimitiveComponent::IsRenderStateDelayed(FFastGeoPrimitiveComponent *this)

{
  return this->ProxyState == Delayed;
}

// IsRenderStateDirty @ 14da2df50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall FFastGeoPrimitiveComponent::IsRenderStateDirty(FFastGeoPrimitiveComponent *this)

{
  return this->bRenderStateDirty;
}

// IsStaticPhysics @ 14da2e150

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall FFastGeoPrimitiveComponent::IsStaticPhysics(FFastGeoPrimitiveComponent *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(this->_padding_ + 0xa0))();
  if ((*(char *)(lVar1 + 0x88) != '\x02') && (this->bStaticWhenNotMoveable != '\0')) {
    return true;
  }
  return false;
}

// MarkPrecachePSOsRequired @ 14da2e580

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FFastGeoPrimitiveComponent::MarkPrecachePSOsRequired(FFastGeoPrimitiveComponent *this)

{
  bool bVar1;
  wchar_t *pwVar2;
  
  if (this->bPSOPrecacheCalled == (atomic<bool>)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
       ) {
      _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
      if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
          _thread_safe_static_guard_0__ == -1) {
        pwVar2 = FCommandLine::Get();
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
             FParse::Param(pwVar2,L"nullrhi");
        _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__);
      }
    }
    if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
       (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
        false)) {
      bVar1 = IsComponentPSOPrecachingEnabled();
      if (bVar1) {
        LOCK();
        this->bPSOPrecacheRequired = (atomic<bool>)0x1;
        UNLOCK();
        LOCK();
        this->PSOPrecacheRequestPriority = (atomic<EPSOPrecachePriority>)0x0;
        UNLOCK();
      }
    }
  }
  return;
}

// MarkRenderStateDirty @ 14da2e640

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FFastGeoPrimitiveComponent::MarkRenderStateDirty(FFastGeoPrimitiveComponent *this)

{
  TArray<FWeakFastGeoComponent,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FWeakObjectPtr *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UWorld *this_00;
  UFastGeoWorldSubsystem *pUVar8;
  undefined1 local_28 [32];
  
  if (((this->ProxyState == Created) || (this->ProxyState == Delayed)) &&
     (this->bRenderStateDirty == false)) {
    this->bRenderStateDirty = true;
    this_00 = FFastGeoComponent::GetWorld((FFastGeoComponent *)this);
    pUVar8 = UWorld::GetSubsystem<UFastGeoWorldSubsystem>(this_00);
    if (pUVar8 == (UFastGeoWorldSubsystem *)0x0) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3035093976077042252>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoPrimitiveComponent.cpp"
                         ,0x24c,"WorldSubsystem");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      pTVar1 = &pUVar8->ComponentsPendingRecreate;
      FWeakFastGeoComponent::FWeakFastGeoComponent
                ((FWeakFastGeoComponent *)local_28,(FFastGeoComponent *)this);
      pFVar4 = (pTVar1->AllocatorInstance).Data;
      if ((pFVar4 <= (FScriptContainerElement *)local_28) &&
         ((FScriptContainerElement *)local_28 <
          pFVar4 + (longlong)(pUVar8->ComponentsPendingRecreate).ArrayMax * 0x18)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar7 = (pUVar8->ComponentsPendingRecreate).ArrayNum;
      piVar2 = &(pUVar8->ComponentsPendingRecreate).ArrayMax;
      if (iVar7 == *piVar2) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x418,&pTVar1->AllocatorInstance,piVar2);
      }
      (pUVar8->ComponentsPendingRecreate).ArrayNum = iVar7 + 1;
      pFVar4 = (pTVar1->AllocatorInstance).Data;
      pFVar3 = (FWeakObjectPtr *)(pFVar4 + (longlong)iVar7 * 0x18);
      pFVar3->ObjectIndex = local_28._0_4_;
      pFVar3->ObjectSerialNumber = local_28._4_4_;
      pFVar3[1].ObjectIndex = local_28._8_4_;
      pFVar3[1].ObjectSerialNumber = local_28._12_4_;
      *(undefined8 *)(pFVar4 + (longlong)iVar7 * 0x18 + 0x10) = local_28._16_8_;
    }
  }
  return;
}

// OnAsyncCreatePhysicsState @ 14da2ea00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FFastGeoPrimitiveComponent::OnAsyncCreatePhysicsState(FFastGeoPrimitiveComponent *this)

{
  FBodyInstance *this_00;
  __m128d *p_Var1;
  VectorRegister4Double *pVVar2;
  FFastGeoPhysicsBodyInstanceOwner *this_01;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  double *pdVar6;
  double dVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  Type TVar11;
  UBodySetup *pUVar12;
  FInitBodySpawnParams *pFVar13;
  UWorld *pUVar14;
  FSingleParticlePhysicsProxy *pFVar15;
  FLockedPhysicsObjectExternalInterface<1> *pFVar16;
  IPhysicsBodyInstanceOwner *pIVar17;
  bool bVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  undefined1 auStackY_1b8 [32];
  FString local_178;
  TArrayView<Chaos::FPhysicsObject_*_const,int> local_168;
  FInitBodySpawnParams local_158 [5];
  TArrayView<Chaos::FPhysicsObject_*_const,int> local_148;
  double local_138;
  FLockedPhysicsObjectExternalInterface<1> local_128;
  TTransform<double> local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId433,"FFastGeoPrimitiveComponent::OnAsyncCreatePhysicsState",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoPrimitiveComponent.cpp"
               ,0x1b1);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId433);
  }
  FFastGeoComponent::OnAsyncCreatePhysicsState((FFastGeoComponent *)this);
  this_00 = &this->BodyInstance;
  bVar10 = FBodyInstance::IsValidBodyInstance(this_00);
  if ((!bVar10) &&
     (pUVar12 = (UBodySetup *)(**(code **)(this->_padding_ + 8))(this),
     uVar9 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     uVar8 = (uint)__xmm_7fffffffffffffff7fffffffffffffff, pUVar12 != (UBodySetup *)0x0)) {
    local_108.Rotation.XY.m128d_f64[0] = (this->WorldTransform).Rotation.XY.m128d_f64[0];
    local_108.Rotation.XY.m128d_f64[1] = (this->WorldTransform).Rotation.XY.m128d_f64[1];
    local_108.Rotation.ZW.m128d_f64[0] = (this->WorldTransform).Rotation.ZW.m128d_f64[0];
    local_108.Rotation.ZW.m128d_f64[1] = (this->WorldTransform).Rotation.ZW.m128d_f64[1];
    uVar19 = SUB84(__real_3f1a36e2e0000000,0);
    uVar20 = (uint)((ulonglong)__real_3f1a36e2e0000000 >> 0x20);
    p_Var1 = &(this->WorldTransform).Scale3D.ZW;
    uVar21 = *(uint *)p_Var1->m128d_f64;
    uVar22 = *(uint *)((longlong)(this->WorldTransform).Scale3D.ZW.m128d_f64 + 4);
    local_108.Scale3D.ZW.m128d_f64[0] = p_Var1->m128d_f64[0];
    local_108.Scale3D.ZW.m128d_f64[1] = (this->WorldTransform).Scale3D.ZW.m128d_f64[1];
    pVVar2 = &(this->WorldTransform).Scale3D;
    uVar4 = *(uint *)(pVVar2->XY).m128d_f64;
    uVar5 = *(uint *)((longlong)(this->WorldTransform).Scale3D.XY.m128d_f64 + 4);
    local_108.Scale3D.XY.m128d_f64[0] = (pVVar2->XY).m128d_f64[0];
    pdVar6 = (this->WorldTransform).Scale3D.XY.m128d_f64 + 1;
    uVar23 = *(uint *)pdVar6;
    uVar24 = *(uint *)((longlong)(this->WorldTransform).Scale3D.XY.m128d_f64 + 0xc);
    local_108.Scale3D.XY.m128d_f64[1] = *pdVar6;
    local_108.Translation.XY.m128d_f64[0] = (this->WorldTransform).Translation.XY.m128d_f64[0];
    local_108.Translation.XY.m128d_f64[1] = (this->WorldTransform).Translation.XY.m128d_f64[1];
    uVar25 = uVar4 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar26 = uVar5 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    local_108.Translation.ZW.m128d_f64[0] = (this->WorldTransform).Translation.ZW.m128d_f64[0];
    local_108.Translation.ZW.m128d_f64[1] = (this->WorldTransform).Translation.ZW.m128d_f64[1];
    if (((double)CONCAT44(uVar26,uVar25) < __real_3f1a36e2e0000000 ||
         (double)CONCAT44(uVar26,uVar25) == __real_3f1a36e2e0000000) &&
       (((double)CONCAT44(uVar24 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          uVar23 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
         __real_3f1a36e2e0000000 &&
        ((double)CONCAT44(uVar22 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          uVar21 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
         __real_3f1a36e2e0000000)))) {
      local_108.Scale3D.XY.m128d_f64[0] = ___xmm_3f1a36e2e00000003f1a36e2e0000000;
      local_108.Scale3D.XY.m128d_f64[1] = _UNK_150afcaf8;
      local_108.Scale3D.ZW.m128d_f64[0] = __real_3f1a36e2e0000000;
      local_108.Scale3D.ZW.m128d_f64[1] = 0.0;
    }
    local_138 = local_108.Scale3D.ZW.m128d_f64[0];
    TVar11 = FBodyInstance::GetCollisionEnabled_CheckOwner(this_00);
    dVar7 = __real_3e45798ee2308c3a;
    if (TVar11 != NoCollision) {
      bVar10 = (double)CONCAT44(uVar26,uVar25) == __real_3e45798ee2308c3a;
      bVar3 = (double)CONCAT44(uVar26,uVar25) < __real_3e45798ee2308c3a;
      if (((bVar3 || bVar10) ||
          ((double)CONCAT44(uVar24 & uVar9,uVar23 & uVar8) <= __real_3e45798ee2308c3a)) ||
         ((double)CONCAT44(uVar22 & uVar9,uVar21 & uVar8) <= __real_3e45798ee2308c3a)) {
        if (2 < (byte)LogFastGeoStreaming._0_1_) {
          ::FString::PrintfImpl(&local_178,L"X=%3.3f Y=%3.3f Z=%3.3f");
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogFastGeoStreaming);
          if ((FPhysicsObject *)local_178.Data.AllocatorInstance.Data != (FPhysicsObject *)0x0) {
            FMemory::Free(local_178.Data.AllocatorInstance.Data);
          }
        }
        if ((double)CONCAT44(uVar22 & uVar9,uVar21 & uVar8) <= dVar7) {
          uVar21 = uVar19;
          uVar22 = uVar20;
        }
        if ((double)CONCAT44(uVar24 & uVar9,uVar23 & uVar8) <= dVar7) {
          uVar23 = uVar19;
          uVar24 = uVar20;
        }
        if (!bVar3 && !bVar10) {
          uVar19 = uVar4;
          uVar20 = uVar5;
        }
        local_108.Scale3D.ZW.m128d_f64[0] = (double)CONCAT44(uVar22,uVar21);
        local_138 = (double)CONCAT44(uVar22,uVar21);
        local_108.Scale3D.ZW.m128d_f64[1] = 0.0;
        local_108.Scale3D.XY.m128d_f64[0] = (double)CONCAT44(uVar20,uVar19);
        local_108.Scale3D.XY.m128d_f64[1] = (double)CONCAT44(uVar24,uVar23);
      }
    }
    this_01 = &this->BodyInstanceOwner;
    FFastGeoPhysicsBodyInstanceOwner::Initialize(this_01,this);
    bVar10 = (bool)(**(code **)(this->_padding_ + 200))(this);
    pFVar13 = FInitBodySpawnParams::FInitBodySpawnParams(local_158,bVar10,false);
    pUVar14 = FFastGeoComponent::GetWorld((FFastGeoComponent *)this);
    pIVar17 = (IPhysicsBodyInstanceOwner *)&(this->BodyInstanceOwner)._padding_;
    if (this_01 == (FFastGeoPhysicsBodyInstanceOwner *)0x0) {
      pIVar17 = (IPhysicsBodyInstanceOwner *)0x0;
    }
    FBodyInstance::InitBody
              (this_00,pUVar12,&local_108,(UPrimitiveComponent *)0x0,pUVar14->PhysicsScene,pFVar13,
               pIVar17);
    pFVar15 = FBodyInstance::GetPhysicsActor(this_00);
    if ((pFVar15 != (FSingleParticlePhysicsProxy *)0x0) &&
       (bVar10 = FBodyInstance::IsValidBodyInstance(this_00), bVar10)) {
      pFVar15 = FBodyInstance::GetPhysicsActor(this_00);
      local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)(pFVar15->Reference).Ptr;
      if ((FPhysicsObject *)local_178.Data.AllocatorInstance.Data != (FPhysicsObject *)0x0) {
        local_148.DataPtr = (FPhysicsObject **)&local_178;
        local_168.DataPtr = (FPhysicsObject **)&local_178;
        local_148.ArrayNum = 1;
        local_148._12_4_ = local_168._12_4_;
        local_168.ArrayNum = 1;
        pFVar16 = FPhysicsObjectExternalInterface::LockWrite(&local_128,&local_148);
        Chaos::FWritePhysicsObjectInterface<0>::SetUserDefinedEntity
                  (&pFVar16->Interface,&local_168,(FChaosUserDefinedEntity *)this_01);
        FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_128.Lock);
      }
    }
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// OnAsyncDestroyPhysicsState @ 14da2f590

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FFastGeoPrimitiveComponent::OnAsyncDestroyPhysicsState(FFastGeoPrimitiveComponent *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  FLockedPhysicsObjectExternalInterface<1> *pFVar4;
  bool bVar5;
  FPhysicsObject *local_res8;
  undefined4 uStack_5c;
  undefined4 uStack_4c;
  TArrayView<Chaos::FPhysicsObject_*_const,int> local_48;
  TArrayView<Chaos::FPhysicsObject_*_const,int> local_38;
  FLockedPhysicsObjectExternalInterface<1> local_28;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId504,"FFastGeoPrimitiveComponent::OnAsyncDestroyPhysicsState"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoPrimitiveComponent.cpp"
               ,0x1f8);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId504);
  }
  if ((this->AsyncTermBodyPayload).bIsSet == false) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3035093976077042171>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoPrimitiveComponent.cpp"
                       ,0x1fb,"AsyncTermBodyPayload.IsSet()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    if ((this->AsyncTermBodyPayload).TypedValue.ActorHandle == (FSingleParticlePhysicsProxy *)0x0) {
      local_res8 = (FPhysicsObject *)0x0;
    }
    else {
      if (((this->AsyncTermBodyPayload).bIsSet == false) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_res8 = (((this->AsyncTermBodyPayload).TypedValue.ActorHandle)->Reference).Ptr;
      if (local_res8 != (FPhysicsObject *)0x0) {
        local_48.DataPtr = &local_res8;
        local_48._12_4_ = uStack_5c;
        local_48.ArrayNum = 1;
        local_38.DataPtr = &local_res8;
        local_38._12_4_ = uStack_4c;
        local_38.ArrayNum = 1;
        pFVar4 = FPhysicsObjectExternalInterface::LockWrite(&local_28,&local_48);
        Chaos::FWritePhysicsObjectInterface<0>::SetUserDefinedEntity
                  (&pFVar4->Interface,&local_38,(FChaosUserDefinedEntity *)0x0);
        FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28.Lock);
      }
    }
    if (((this->AsyncTermBodyPayload).bIsSet == false) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FBodyInstance::AsyncTermBody(&(this->AsyncTermBodyPayload).TypedValue);
    if ((this->AsyncTermBodyPayload).bIsSet != false) {
      (this->AsyncTermBodyPayload).bIsSet = false;
    }
  }
  cVar3 = (**(code **)(this->_padding_ + 0x10))(this);
  if ((cVar3 == '\0') &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCollisionEnabled()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoComponent.cpp"
                         ,0x62,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// OnAsyncDestroyPhysicsStateBegin_GameThread @ 14da2fa60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FFastGeoPrimitiveComponent::OnAsyncDestroyPhysicsStateBegin_GameThread
          (FFastGeoPrimitiveComponent *this)

{
  code *pcVar1;
  FWeakObjectPtr FVar2;
  undefined7 uVar3;
  bool bVar4;
  FAsyncTermBodyPayload *pFVar5;
  FAsyncTermBodyPayload local_28;
  
  if ((this->AsyncTermBodyPayload).bIsSet != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!AsyncTermBodyPayload.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoPrimitiveComponent.cpp"
                       ,0x1e7,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar5 = FBodyInstance::StartAsyncTermBody_GameThread(&this->BodyInstance,&local_28);
  if ((TOptional<FBodyInstance::FAsyncTermBodyPayload> *)pFVar5 != &this->AsyncTermBodyPayload) {
    FVar2 = (pFVar5->OwnerComponent).WeakPtr;
    (this->AsyncTermBodyPayload).TypedValue.ActorHandle = pFVar5->ActorHandle;
    (this->AsyncTermBodyPayload).TypedValue.OwnerComponent.WeakPtr = FVar2;
    uVar3 = *(undefined7 *)&pFVar5->field_0x11;
    (this->AsyncTermBodyPayload).TypedValue.bNotifyRigidBodyCollision =
         pFVar5->bNotifyRigidBodyCollision;
    *(undefined7 *)&(this->AsyncTermBodyPayload).TypedValue.field_0x11 = uVar3;
    (this->AsyncTermBodyPayload).bIsSet = true;
  }
  bVar4 = FBodyInstance::IsValidBodyInstance(&this->BodyInstance);
  if (bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!BodyInstance.IsValidBodyInstance()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoPrimitiveComponent.cpp"
                       ,0x1e9,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((int)this->_padding_ != 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PhysicsStateCreation == EPhysicsStateCreation::Created",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoComponent.cpp"
                       ,0x5c,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)&this->_padding_ = 3;
  return;
}

// OnAsyncDestroyPhysicsStateEnd_GameThread @ 14da2fd60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FFastGeoPrimitiveComponent::OnAsyncDestroyPhysicsStateEnd_GameThread
          (FFastGeoPrimitiveComponent *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((int)this->_padding_ != 3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PhysicsStateCreation == EPhysicsStateCreation::Destroying",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoComponent.cpp"
                       ,0x67,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)&this->_padding_ = 0;
  FFastGeoPhysicsBodyInstanceOwner::Initialize
            (&this->BodyInstanceOwner,(FFastGeoPrimitiveComponent *)0x0);
  return;
}

// OnPrecacheFinished @ 14da314c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FFastGeoPrimitiveComponent::OnPrecacheFinished(FFastGeoPrimitiveComponent *this,int param_1)

{
  TArray<FWeakFastGeoComponent,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FWeakObjectPtr *pFVar3;
  atomic<int> aVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  atomic<int> aVar10;
  int iVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<_public:_void___cdecl_FFastGeoPrimitiveComponent::OnPrecacheFinished(int)_::_2_::FStat_STAT_PSOPrecacheFinishedTask>
  FVar13;
  UWorld *this_00;
  UFastGeoWorldSubsystem *pUVar14;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar15;
  FNameEntryId FVar16;
  FName FVar17;
  bool bVar18;
  FName local_res8;
  FColor_u_0 local_res10 [2];
  LARGE_INTEGER local_res18;
  FName local_res20;
  FName local_78;
  FName local_70;
  FStatMessage local_60;
  undefined1 local_50 [32];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_PSOPrecacheFinishedTask ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FFastGeoPrimitiveComponent::OnPrecacheFinished(int)_::_2_::FStat_STAT_PSOPrecacheFinishedTask>
         )0x0) {
      pFVar12 = ::FName::FName(&local_res20,"STAT_PSOPrecacheFinishedTask");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PSOPrecacheFinishedTask,*pFVar12,
                 L"STAT_PSOPrecacheFinishedTask","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                 true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar13 = StatPtr_STAT_PSOPrecacheFinishedTask;
  if (StatPtr_STAT_PSOPrecacheFinishedTask ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FFastGeoPrimitiveComponent::OnPrecacheFinished(int)_::_2_::FStat_STAT_PSOPrecacheFinishedTask>
       )0x0) {
    pFVar12 = ::FName::FName(&local_78,"STAT_PSOPrecacheFinishedTask");
    FVar13 = (FThreadSafeStaticStat<_public:_void___cdecl_FFastGeoPrimitiveComponent::OnPrecacheFinished(int)_::_2_::FStat_STAT_PSOPrecacheFinishedTask>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PSOPrecacheFinishedTask,
                          *pFVar12,L"STAT_PSOPrecacheFinishedTask","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar13;
  bVar7 = false;
  bVar9 = false;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  FVar16 = FVar17.ComparisonIndex.Value;
  uVar15 = FVar17.Number;
  if ((FVar16.Value != 0) || (uVar15 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar7 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.ComparisonIndex.Value = FVar16.Value;
        local_res8.Number = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res8,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoPrimitiveComponent.cpp"
                   ,0x295);
        bVar7 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar16.Value;
      local_res18.s.HighPart = uVar15;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar8 = true;
      goto LAB_14da3163b;
    }
  }
  bVar8 = false;
  FVar17 = local_70;
LAB_14da3163b:
  aVar10 = this->LatestPSOPrecacheJobSetCompleted;
  do {
    if (param_1 <= (int)aVar10) break;
    LOCK();
    aVar4 = this->LatestPSOPrecacheJobSetCompleted;
    bVar18 = aVar10 == aVar4;
    if (bVar18) {
      this->LatestPSOPrecacheJobSetCompleted = (atomic<int>)param_1;
      aVar4 = aVar10;
    }
    aVar10 = aVar4;
    UNLOCK();
  } while (!bVar18);
  if (((this->ProxyState == Created) || (this->ProxyState == Delayed)) &&
     (this->bRenderStateDirty == false)) {
    this->bRenderStateDirty = true;
    this_00 = FFastGeoComponent::GetWorld((FFastGeoComponent *)this);
    pUVar14 = UWorld::GetSubsystem<UFastGeoWorldSubsystem>(this_00);
    if (pUVar14 == (UFastGeoWorldSubsystem *)0x0) {
      bVar18 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<3035093976077042252>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoPrimitiveComponent.cpp"
                          ,0x24c,"WorldSubsystem");
      if (bVar18) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else {
      pTVar1 = &pUVar14->ComponentsPendingRecreate;
      FWeakFastGeoComponent::FWeakFastGeoComponent
                ((FWeakFastGeoComponent *)local_50,(FFastGeoComponent *)this);
      pFVar5 = (pTVar1->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)local_50) &&
          ((FScriptContainerElement *)local_50 <
           pFVar5 + (longlong)(pUVar14->ComponentsPendingRecreate).ArrayMax * 0x18)) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar18)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar11 = (pUVar14->ComponentsPendingRecreate).ArrayNum;
      piVar2 = &(pUVar14->ComponentsPendingRecreate).ArrayMax;
      if (iVar11 == *piVar2) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x418,&pTVar1->AllocatorInstance,piVar2);
      }
      (pUVar14->ComponentsPendingRecreate).ArrayNum = iVar11 + 1;
      pFVar5 = (pTVar1->AllocatorInstance).Data;
      pFVar3 = (FWeakObjectPtr *)(pFVar5 + (longlong)iVar11 * 0x18);
      pFVar3->ObjectIndex = local_50._0_4_;
      pFVar3->ObjectSerialNumber = local_50._4_4_;
      pFVar3[1].ObjectIndex = local_50._8_4_;
      pFVar3[1].ObjectSerialNumber = local_50._12_4_;
      *(undefined8 *)(pFVar5 + (longlong)iVar11 * 0x18 + 0x10) = local_50._16_8_;
    }
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar8) && (FVar17 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_60.NameAndInfo.Index = FVar17.ComparisonIndex.Value;
      local_60.NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_60.StatData.Pad[4] = '\0';
      local_60.StatData.Pad[5] = '\0';
      local_60.StatData.Pad[6] = '\0';
      local_60.StatData.Pad[7] = '\0';
      local_60.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_60.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_60.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_60.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_60);
      piVar2 = &this_01->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_01,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// PrecachePSOs @ 14da31f10

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
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FFastGeoPrimitiveComponent::PrecachePSOs(FFastGeoPrimitiveComponent *this)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  ForElementType<FMaterialInterfacePSOPrecacheParams> FVar3;
  atomic<unsigned_int> aVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  EPSOPrecacheProxyCreationStrategy EVar8;
  FTaskBase *this_00;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar9;
  ForElementType<FMaterialInterfacePSOPrecacheParams> FVar10;
  ulonglong uVar11;
  FTaskBase *this_01;
  bool bVar12;
  undefined1 auStackY_1d8 [32];
  EExtendedTaskPriority local_1a8;
  ETaskPriority local_1a7;
  undefined1 local_1a6 [6];
  FPSOPrecacheParams_u_0 local_1a0;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_198;
  TArray<FMaterialInterfacePSOPrecacheParams,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_168;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId769,"FFastGeoPrimitiveComponent::PrecachePSOs",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoPrimitiveComponent.cpp"
               ,0x301);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId769);
  }
  if ((this->bPSOPrecacheRequired == (atomic<bool>)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("bPSOPrecacheRequired",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoPrimitiveComponent.cpp"
                         ,0x302,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this_01 = (FTaskBase *)0x0;
  piVar2 = &(this->MaterialPSOPrecacheRequestIDs).ArrayMax;
  (this->MaterialPSOPrecacheRequestIDs).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->MaterialPSOPrecacheRequestIDs).AllocatorInstance,0,piVar2);
  }
  local_1a0.Data = (ulonglong)(local_1a0.Data._0_4_ & 0x8000) | 0x13c00;
  SetupPrecachePSOParams(this,(FPSOPrecacheParams *)&local_1a0._s_0);
  local_168.AllocatorInstance.SecondaryData =
       (ForElementType<FMaterialInterfacePSOPrecacheParams>)0x0;
  local_168.ArrayNum = 0;
  local_168.ArrayMax = 4;
  (**(code **)(this->_padding_ + 0xf0))(this,&local_1a0,&local_168);
  iVar5 = local_168.ArrayNum;
  uVar11 = (ulonglong)local_168.ArrayNum;
  FVar10 = (ForElementType<FMaterialInterfacePSOPrecacheParams>)&local_168;
  if (local_168.AllocatorInstance.SecondaryData !=
      (ForElementType<FMaterialInterfacePSOPrecacheParams>)0x0) {
    FVar10 = local_168.AllocatorInstance.SecondaryData;
  }
  FVar3 = (ForElementType<FMaterialInterfacePSOPrecacheParams>)((longlong)FVar10 + uVar11 * 0x48);
  while( true ) {
    if ((uint)uVar11 != iVar5) {
      `TCheckedPointerIterator<FMaterialInterfacePSOPrecacheParams,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_1a6);
    }
    if (FVar10 == FVar3) break;
    *(atomic<EPSOPrecachePriority> *)FVar10 = this->PSOPrecacheRequestPriority;
    FVar10 = (ForElementType<FMaterialInterfacePSOPrecacheParams>)((longlong)FVar10 + 0x48);
    uVar11 = (ulonglong)(uint)local_168.ArrayNum;
  }
  local_198.AllocatorInstance.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  local_198.ArrayNum = 0;
  local_198.ArrayMax = 4;
  PrecacheMaterialPSOs(&local_168,&this->MaterialPSOPrecacheRequestIDs,&local_198);
  EVar8 = GetPSOPrecacheProxyCreationStrategy();
  if (EVar8 != AlwaysCreate) {
    this->LatestPSOPrecacheJobSet = this->LatestPSOPrecacheJobSet + 1;
    this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xf8,8);
    if (this_00 != (FTaskBase *)0x0) {
      FBaseGraphTask::FBaseGraphTask((FBaseGraphTask *)this_00,&local_198);
      this_00->_padding_ = (longlong)&___7__TGraphTask_UFFastGeoPSOPrecacheFinishedTask____6B_;
      this_01 = this_00;
    }
    iVar5 = this->LatestPSOPrecacheJobSet;
    FWeakFastGeoComponent::FWeakFastGeoComponent
              ((FWeakFastGeoComponent *)(this_01 + 1),(FFastGeoComponent *)this);
    *(int *)&this_01[1]._padding_ = iVar5;
    UE::Tasks::Private::TranslatePriority(GameThread,&local_1a7,&local_1a8);
    UE::Tasks::Private::FTaskBase::Init(this_01,L"GraphTask",local_1a7,local_1a8,None);
    if (this_01 == (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0xf8);
    }
    else {
      LOCK();
      this_01->RefCount = (atomic<unsigned_int>)((int)this_01->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(this_01,0xf8);
      LOCK();
      paVar1 = &this_01->RefCount;
      aVar4 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar4 == (atomic<unsigned_int>)0x1) {
        (**(code **)this_01->_padding_)(this_01,1);
      }
    }
  }
  LOCK();
  this->bPSOPrecacheCalled = (atomic<bool>)0x1;
  UNLOCK();
  LOCK();
  this->bPSOPrecacheRequired = (atomic<bool>)0x0;
  UNLOCK();
  FVar9 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_198;
  if (local_198.AllocatorInstance.SecondaryData !=
      (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar9 = local_198.AllocatorInstance.SecondaryData;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)FVar9,local_198.ArrayNum);
  if (local_198.AllocatorInstance.SecondaryData !=
      (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FMemory::Free((void *)local_198.AllocatorInstance.SecondaryData);
  }
  FVar10 = (ForElementType<FMaterialInterfacePSOPrecacheParams>)&local_168;
  if (local_168.AllocatorInstance.SecondaryData !=
      (ForElementType<FMaterialInterfacePSOPrecacheParams>)0x0) {
    FVar10 = local_168.AllocatorInstance.SecondaryData;
  }
  DestructItems<FMaterialInterfacePSOPrecacheParams,int>
            ((FMaterialInterfacePSOPrecacheParams *)FVar10,local_168.ArrayNum);
  if (local_168.AllocatorInstance.SecondaryData !=
      (ForElementType<FMaterialInterfacePSOPrecacheParams>)0x0) {
    FMemory::Free((void *)local_168.AllocatorInstance.SecondaryData);
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// RequestRecreateRenderStateWhenPSOPrecacheFinished @ 14da33a80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FFastGeoPrimitiveComponent::RequestRecreateRenderStateWhenPSOPrecacheFinished
          (FFastGeoPrimitiveComponent *this,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  int iVar3;
  EPSOPrecacheProxyCreationStrategy EVar4;
  FTaskBase *this_00;
  EExtendedTaskPriority local_res8 [8];
  ETaskPriority local_res18 [8];
  
  EVar4 = GetPSOPrecacheProxyCreationStrategy();
  if (EVar4 != AlwaysCreate) {
    this->LatestPSOPrecacheJobSet = this->LatestPSOPrecacheJobSet + 1;
    this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xf8,8);
    if (this_00 == (FTaskBase *)0x0) {
      this_00 = (FTaskBase *)0x0;
    }
    else {
      FBaseGraphTask::FBaseGraphTask((FBaseGraphTask *)this_00,param_1);
      this_00->_padding_ = (longlong)&___7__TGraphTask_UFFastGeoPSOPrecacheFinishedTask____6B_;
    }
    iVar3 = this->LatestPSOPrecacheJobSet;
    FWeakFastGeoComponent::FWeakFastGeoComponent
              ((FWeakFastGeoComponent *)(this_00 + 1),(FFastGeoComponent *)this);
    *(int *)&this_00[1]._padding_ = iVar3;
    UE::Tasks::Private::TranslatePriority(GameThread,local_res18,local_res8);
    UE::Tasks::Private::FTaskBase::Init(this_00,L"GraphTask",local_res18[0],local_res8[0],None);
    if (this_00 == (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0xf8);
    }
    else {
      LOCK();
      this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0xf8);
      LOCK();
      paVar1 = &this_00->RefCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<unsigned_int>)0x1) {
        (**(code **)this_00->_padding_)(this_00,1);
      }
    }
  }
  LOCK();
  this->bPSOPrecacheCalled = (atomic<bool>)0x1;
  UNLOCK();
  return;
}

// Serialize @ 14da342b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FFastGeoPrimitiveComponent::Serialize(FFastGeoPrimitiveComponent *this,FArchive *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  undefined4 *puVar3;
  ulonglong *puVar4;
  uchar *puVar5;
  undefined1 *puVar6;
  uint *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  UScriptStruct *this_00;
  longlong lVar10;
  byte bVar11;
  uint uVar12;
  bool bVar13;
  uint local_res8 [2];
  
  plVar1 = &this->_padding_;
  puVar3 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,plVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)plVar1);
    }
  }
  else {
    *(undefined4 *)plVar1 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  UE::Math::operator<<(param_1,&this->LocalTransform);
  UE::Math::operator<<(param_1,&this->WorldTransform);
  UE::Math::operator<<(param_1,&this->LocalBounds);
  UE::Math::operator<<(param_1,&this->WorldBounds);
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  puVar9 = &param_1->field_0x28;
  bVar13 = this->bIsVisible;
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) != 0) goto LAB_14da343c7;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14da343c7:
    bVar13 = uVar12 != 0;
  }
  bVar11 = this->field_0x160;
  if (this->bIsVisible != bVar13) {
    bVar11 = bVar11 & 0xfe | bVar13;
    this->field_0x160 = bVar11;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = (bool)(bVar11 >> 1 & 1);
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) != 0) goto LAB_14da3444e;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14da3444e:
    bVar13 = uVar12 != 0;
  }
  bVar11 = this->field_0x160;
  if (this->bStaticWhenNotMoveable != bVar13) {
    bVar11 = bVar11 & 0xfd | bVar13 * '\x02';
    this->field_0x160 = bVar11;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = (bool)(bVar11 >> 2 & 1);
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) != 0) goto LAB_14da344db;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14da344db:
    bVar13 = uVar12 != 0;
  }
  bVar11 = this->field_0x160;
  if (this->bFillCollisionUnderneathForNavmesh != bVar13) {
    bVar11 = bVar11 & 0xfb | bVar13 << 2;
    this->field_0x160 = bVar11;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = (bool)(bVar11 >> 3 & 1);
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) != 0) goto LAB_14da3456a;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14da3456a:
    bVar13 = uVar12 != 0;
  }
  bVar11 = this->field_0x160;
  if (this->bRasterizeAsFilledConvexVolume != bVar13) {
    bVar11 = bVar11 & 0xf7 | bVar13 << 3;
    this->field_0x160 = bVar11;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = (bool)(bVar11 >> 4 & 1);
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) != 0) goto LAB_14da345f9;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14da345f9:
    bVar13 = uVar12 != 0;
  }
  if (this->bCanEverAffectNavigation != bVar13) {
    this->field_0x160 = this->field_0x160 & 0xef | bVar13 << 4;
  }
  TArrayPrivateFriend::Serialize<float,TSizedDefaultAllocator<32>_>
            (param_1,&(this->CustomPrimitiveData).Data);
  puVar5 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->DetailMode,1);
  }
  else {
    (this->DetailMode).Value = *puVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar5 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->bHasCustomNavigableGeometry,1);
  }
  else {
    (this->bHasCustomNavigableGeometry).Value = *puVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  TArrayPrivateFriend::Serialize<URuntimeVirtualTexture_*,TSizedDefaultAllocator<32>_>
            (param_1,&this->RuntimeVirtualTextures);
  this_00 = FBodyInstance::StaticStruct();
  UScriptStruct::SerializeItem(this_00,param_1,&this->BodyInstance,(void *)0x0);
  lVar10 = (**(code **)(this->_padding_ + 0xa8))(this);
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = (bool)(*(byte *)(lVar10 + 0x70) & 1);
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) != 0) goto LAB_14da3474b;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14da3474b:
    bVar13 = uVar12 != 0;
  }
  uVar12 = *(uint *)(lVar10 + 0x70);
  if ((uVar12 & 1) != (uint)bVar13) {
    uVar12 = uVar12 & 0xfffffffe | (uint)bVar13;
    *(uint *)(lVar10 + 0x70) = uVar12;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = (bool)((byte)(uVar12 >> 1) & 1);
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) != 0) goto LAB_14da347cc;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14da347cc:
    bVar13 = uVar12 != 0;
  }
  uVar12 = *(uint *)(lVar10 + 0x70);
  if ((uVar12 >> 1 & 1) != (uint)bVar13) {
    uVar12 = uVar12 & 0xfffffffd | (uint)bVar13 + (uint)bVar13;
    *(uint *)(lVar10 + 0x70) = uVar12;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = (bool)((byte)(uVar12 >> 2) & 1);
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) != 0) goto LAB_14da34853;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14da34853:
    bVar13 = uVar12 != 0;
  }
  uVar12 = *(uint *)(lVar10 + 0x70);
  if ((uVar12 >> 2 & 1) != (uint)bVar13) {
    uVar12 = (uint)bVar13 * 4 | uVar12 & 0xfffffffb;
    *(uint *)(lVar10 + 0x70) = uVar12;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = (bool)((byte)(uVar12 >> 3) & 1);
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) != 0) goto LAB_14da348e1;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14da348e1:
    bVar13 = uVar12 != 0;
  }
  uVar12 = *(uint *)(lVar10 + 0x70);
  if ((uVar12 >> 3 & 1) != (uint)bVar13) {
    uVar12 = (uint)bVar13 * 8 | uVar12 & 0xfffffff7;
    *(uint *)(lVar10 + 0x70) = uVar12;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = (bool)((byte)(uVar12 >> 5) & 1);
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) != 0) goto LAB_14da3496f;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14da3496f:
    bVar13 = uVar12 != 0;
  }
  uVar12 = *(uint *)(lVar10 + 0x70);
  if ((uVar12 >> 5 & 1) != (uint)bVar13) {
    uVar12 = (uint)bVar13 << 5 | uVar12 & 0xffffffdf;
    *(uint *)(lVar10 + 0x70) = uVar12;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = (bool)((byte)(uVar12 >> 6) & 1);
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) != 0) goto LAB_14da349fc;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14da349fc:
    bVar13 = uVar12 != 0;
  }
  uVar12 = *(uint *)(lVar10 + 0x70);
  if ((uVar12 >> 6 & 1) != (uint)bVar13) {
    uVar12 = (uint)bVar13 << 6 | uVar12 & 0xffffffbf;
    *(uint *)(lVar10 + 0x70) = uVar12;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = (bool)((byte)(uVar12 >> 7) & 1);
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) != 0) goto LAB_14da34a89;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14da34a89:
    bVar13 = uVar12 != 0;
  }
  uVar12 = *(uint *)(lVar10 + 0x70);
  if ((uVar12 >> 7 & 1) != (uint)bVar13) {
    uVar12 = (uint)bVar13 << 7 | uVar12 & 0xffffff7f;
    *(uint *)(lVar10 + 0x70) = uVar12;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = (bool)((byte)(uVar12 >> 8) & 1);
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) != 0) goto LAB_14da34b17;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14da34b17:
    bVar13 = uVar12 != 0;
  }
  uVar12 = *(uint *)(lVar10 + 0x70);
  if ((uVar12 >> 8 & 1) != (uint)bVar13) {
    uVar12 = (uint)bVar13 << 8 | uVar12 & 0xfffffeff;
    *(uint *)(lVar10 + 0x70) = uVar12;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = (bool)((byte)(uVar12 >> 9) & 1);
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) != 0) goto LAB_14da34ba5;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14da34ba5:
    bVar13 = uVar12 != 0;
  }
  uVar12 = *(uint *)(lVar10 + 0x70);
  if ((uVar12 >> 9 & 1) != (uint)bVar13) {
    uVar12 = (uint)bVar13 << 9 | uVar12 & 0xfffffdff;
    *(uint *)(lVar10 + 0x70) = uVar12;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = (bool)((byte)(uVar12 >> 10) & 1);
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) != 0) goto LAB_14da34c33;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14da34c33:
    bVar13 = uVar12 != 0;
  }
  uVar12 = *(uint *)(lVar10 + 0x70);
  if ((uVar12 >> 10 & 1) != (uint)bVar13) {
    uVar12 = (uint)bVar13 << 10 | uVar12 & 0xfffffbff;
    *(uint *)(lVar10 + 0x70) = uVar12;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = (bool)((byte)(uVar12 >> 0xb) & 1);
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) != 0) goto LAB_14da34cc1;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14da34cc1:
    bVar13 = uVar12 != 0;
  }
  uVar12 = *(uint *)(lVar10 + 0x70);
  if ((uVar12 >> 0xb & 1) != (uint)bVar13) {
    uVar12 = (uint)bVar13 << 0xb | uVar12 & 0xfffff7ff;
    *(uint *)(lVar10 + 0x70) = uVar12;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = (bool)((byte)(uVar12 >> 0xc) & 1);
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) != 0) goto LAB_14da34d4f;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14da34d4f:
    bVar13 = uVar12 != 0;
  }
  uVar12 = *(uint *)(lVar10 + 0x70);
  if ((uVar12 >> 0xc & 1) != (uint)bVar13) {
    uVar12 = uVar12 & 0xffffefff | (uint)bVar13 << 0xc;
    *(uint *)(lVar10 + 0x70) = uVar12;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = (bool)((byte)(uVar12 >> 0xd) & 1);
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) != 0) goto LAB_14da34dd8;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14da34dd8:
    bVar13 = uVar12 != 0;
  }
  uVar12 = *(uint *)(lVar10 + 0x70);
  if ((uVar12 >> 0xd & 1) != (uint)bVar13) {
    uVar12 = uVar12 & 0xffffdfff | (uint)bVar13 << 0xd;
    *(uint *)(lVar10 + 0x70) = uVar12;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = (bool)((byte)(uVar12 >> 0xe) & 1);
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) != 0) goto LAB_14da34e61;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14da34e61:
    bVar13 = uVar12 != 0;
  }
  uVar12 = *(uint *)(lVar10 + 0x70);
  if ((uVar12 >> 0xe & 1) != (uint)bVar13) {
    uVar12 = uVar12 & 0xffffbfff | (uint)bVar13 << 0xe;
    *(uint *)(lVar10 + 0x70) = uVar12;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = (bool)((byte)(uVar12 >> 0xf) & 1);
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) != 0) goto LAB_14da34eea;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14da34eea:
    bVar13 = uVar12 != 0;
  }
  uVar12 = *(uint *)(lVar10 + 0x70);
  if ((uVar12 >> 0xf & 1) != (uint)bVar13) {
    uVar12 = (uint)bVar13 << 0xf | uVar12 & 0xffff7fff;
    *(uint *)(lVar10 + 0x70) = uVar12;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = (bool)((byte)(uVar12 >> 0x10) & 1);
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) != 0) goto LAB_14da34f78;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14da34f78:
    bVar13 = uVar12 != 0;
  }
  uVar12 = *(uint *)(lVar10 + 0x70);
  if ((uVar12 >> 0x10 & 1) != (uint)bVar13) {
    uVar12 = (uint)bVar13 << 0x10 | uVar12 & 0xfffeffff;
    *(uint *)(lVar10 + 0x70) = uVar12;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = (bool)((byte)(uVar12 >> 0x11) & 1);
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) != 0) goto LAB_14da35006;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14da35006:
    bVar13 = uVar12 != 0;
  }
  uVar12 = *(uint *)(lVar10 + 0x70);
  if ((uVar12 >> 0x11 & 1) != (uint)bVar13) {
    uVar12 = (uint)bVar13 << 0x11 | uVar12 & 0xfffdffff;
    *(uint *)(lVar10 + 0x70) = uVar12;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = (bool)((byte)(uVar12 >> 0x12) & 1);
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) != 0) goto LAB_14da35094;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14da35094:
    bVar13 = uVar12 != 0;
  }
  uVar12 = *(uint *)(lVar10 + 0x70);
  if ((uVar12 >> 0x12 & 1) != (uint)bVar13) {
    uVar12 = uVar12 & 0xfffbffff | (uint)bVar13 << 0x12;
    *(uint *)(lVar10 + 0x70) = uVar12;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = (bool)((byte)(uVar12 >> 0x13) & 1);
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) != 0) goto LAB_14da3511d;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14da3511d:
    bVar13 = uVar12 != 0;
  }
  uVar12 = *(uint *)(lVar10 + 0x70);
  if ((uVar12 >> 0x13 & 1) != (uint)bVar13) {
    uVar12 = uVar12 & 0xfff7ffff | (uint)bVar13 << 0x13;
    *(uint *)(lVar10 + 0x70) = uVar12;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = (bool)((byte)(uVar12 >> 0x14) & 1);
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) != 0) goto LAB_14da351a6;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14da351a6:
    bVar13 = uVar12 != 0;
  }
  uVar12 = *(uint *)(lVar10 + 0x70);
  if ((uVar12 >> 0x14 & 1) != (uint)bVar13) {
    uVar12 = uVar12 & 0xffefffff | (uint)bVar13 << 0x14;
    *(uint *)(lVar10 + 0x70) = uVar12;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = (bool)((byte)(uVar12 >> 0x15) & 1);
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) != 0) goto LAB_14da3522f;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14da3522f:
    bVar13 = uVar12 != 0;
  }
  uVar12 = *(uint *)(lVar10 + 0x70);
  if ((uVar12 >> 0x15 & 1) != (uint)bVar13) {
    uVar12 = uVar12 & 0xffdfffff | (uint)bVar13 << 0x15;
    *(uint *)(lVar10 + 0x70) = uVar12;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = (bool)((byte)(uVar12 >> 0x16) & 1);
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) != 0) goto LAB_14da352b8;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14da352b8:
    bVar13 = uVar12 != 0;
  }
  uVar12 = *(uint *)(lVar10 + 0x70);
  if ((uVar12 >> 0x16 & 1) != (uint)bVar13) {
    uVar12 = uVar12 & 0xffbfffff | (uint)bVar13 << 0x16;
    *(uint *)(lVar10 + 0x70) = uVar12;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = (bool)((byte)(uVar12 >> 0x17) & 1);
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) != 0) goto LAB_14da35341;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14da35341:
    bVar13 = uVar12 != 0;
  }
  uVar12 = *(uint *)(lVar10 + 0x70);
  if ((uVar12 >> 0x17 & 1) != (uint)bVar13) {
    uVar12 = uVar12 & 0xff7fffff | (uint)bVar13 << 0x17;
    *(uint *)(lVar10 + 0x70) = uVar12;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = (bool)((byte)(uVar12 >> 0x18) & 1);
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) != 0) goto LAB_14da353ca;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14da353ca:
    bVar13 = uVar12 != 0;
  }
  uVar12 = *(uint *)(lVar10 + 0x70);
  if ((uVar12 >> 0x18 & 1) != (uint)bVar13) {
    uVar12 = uVar12 & 0xfeffffff | (uint)bVar13 << 0x18;
    *(uint *)(lVar10 + 0x70) = uVar12;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = (bool)((byte)(uVar12 >> 0x19) & 1);
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) != 0) goto LAB_14da35453;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14da35453:
    bVar13 = uVar12 != 0;
  }
  uVar12 = *(uint *)(lVar10 + 0x70);
  if ((uVar12 >> 0x19 & 1) != (uint)bVar13) {
    uVar12 = uVar12 & 0xfdffffff | (uint)bVar13 << 0x19;
    *(uint *)(lVar10 + 0x70) = uVar12;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = (bool)((byte)(uVar12 >> 0x1a) & 1);
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) != 0) goto LAB_14da354dc;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14da354dc:
    bVar13 = uVar12 != 0;
  }
  uVar12 = *(uint *)(lVar10 + 0x70);
  if ((uVar12 >> 0x1a & 1) != (uint)bVar13) {
    uVar12 = uVar12 & 0xfbffffff | (uint)bVar13 << 0x1a;
    *(uint *)(lVar10 + 0x70) = uVar12;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = (bool)((byte)(uVar12 >> 0x1b) & 1);
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) != 0) goto LAB_14da35565;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14da35565:
    bVar13 = uVar12 != 0;
  }
  uVar12 = *(uint *)(lVar10 + 0x70);
  if ((uVar12 >> 0x1b & 1) != (uint)bVar13) {
    uVar12 = uVar12 & 0xf7ffffff | (uint)bVar13 << 0x1b;
    *(uint *)(lVar10 + 0x70) = uVar12;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = (bool)((byte)(uVar12 >> 0x1c) & 1);
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) != 0) goto LAB_14da355ee;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14da355ee:
    bVar13 = uVar12 != 0;
  }
  uVar12 = *(uint *)(lVar10 + 0x70);
  if ((uVar12 >> 0x1c & 1) != (uint)bVar13) {
    uVar12 = uVar12 & 0xefffffff | (uint)bVar13 << 0x1c;
    *(uint *)(lVar10 + 0x70) = uVar12;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = (bool)((byte)(uVar12 >> 0x1e) & 1);
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) != 0) goto LAB_14da35677;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14da35677:
    bVar13 = uVar12 != 0;
  }
  if ((*(uint *)(lVar10 + 0x70) >> 0x1e & 1) != (uint)bVar13) {
    *(uint *)(lVar10 + 0x70) = (uint)bVar13 << 0x1e | *(uint *)(lVar10 + 0x70) & 0xbfffffff;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = (bool)((byte)(*(uint *)(lVar10 + 0x74) >> 1) & 1);
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) != 0) goto LAB_14da356fe;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14da356fe:
    bVar13 = uVar12 != 0;
  }
  uVar12 = *(uint *)(lVar10 + 0x74);
  if ((uVar12 >> 1 & 1) != (uint)bVar13) {
    uVar12 = uVar12 & 0xfffffffd | (uint)bVar13 + (uint)bVar13;
    *(uint *)(lVar10 + 0x74) = uVar12;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = (bool)((byte)(uVar12 >> 2) & 1);
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) != 0) goto LAB_14da35785;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14da35785:
    bVar13 = uVar12 != 0;
  }
  uVar12 = *(uint *)(lVar10 + 0x74);
  if ((uVar12 >> 2 & 1) != (uint)bVar13) {
    uVar12 = uVar12 & 0xfffffffb | (uint)bVar13 * 4;
    *(uint *)(lVar10 + 0x74) = uVar12;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = (bool)((byte)(uVar12 >> 3) & 1);
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) != 0) goto LAB_14da35811;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14da35811:
    bVar13 = uVar12 != 0;
  }
  uVar12 = *(uint *)(lVar10 + 0x74);
  if ((uVar12 >> 3 & 1) != (uint)bVar13) {
    uVar12 = uVar12 & 0xfffffff7 | (uint)bVar13 * 8;
    *(uint *)(lVar10 + 0x74) = uVar12;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = (bool)((byte)(uVar12 >> 4) & 1);
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) != 0) goto LAB_14da3589d;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14da3589d:
    bVar13 = uVar12 != 0;
  }
  uVar12 = *(uint *)(lVar10 + 0x74);
  if ((uVar12 >> 4 & 1) != (uint)bVar13) {
    uVar12 = uVar12 & 0xffffffef | (uint)bVar13 << 4;
    *(uint *)(lVar10 + 0x74) = uVar12;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = (bool)((byte)(uVar12 >> 5) & 1);
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) != 0) goto LAB_14da35925;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14da35925:
    bVar13 = uVar12 != 0;
  }
  uVar12 = *(uint *)(lVar10 + 0x74);
  if ((uVar12 >> 5 & 1) != (uint)bVar13) {
    uVar12 = uVar12 & 0xffffffdf | (uint)bVar13 << 5;
    *(uint *)(lVar10 + 0x74) = uVar12;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = (bool)((byte)(uVar12 >> 6) & 1);
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) != 0) goto LAB_14da359ad;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14da359ad:
    bVar13 = uVar12 != 0;
  }
  uVar12 = *(uint *)(lVar10 + 0x74);
  if ((uVar12 >> 6 & 1) != (uint)bVar13) {
    uVar12 = uVar12 & 0xffffffbf | (uint)bVar13 << 6;
    *(uint *)(lVar10 + 0x74) = uVar12;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = (bool)((byte)(uVar12 >> 7) & 1);
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) != 0) goto LAB_14da35a35;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14da35a35:
    bVar13 = uVar12 != 0;
  }
  uVar12 = *(uint *)(lVar10 + 0x74);
  if ((uVar12 >> 7 & 1) != (uint)bVar13) {
    uVar12 = uVar12 & 0xffffff7f | (uint)bVar13 << 7;
    *(uint *)(lVar10 + 0x74) = uVar12;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = (bool)((byte)(uVar12 >> 8) & 1);
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) != 0) goto LAB_14da35abe;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14da35abe:
    bVar13 = uVar12 != 0;
  }
  uVar12 = *(uint *)(lVar10 + 0x74);
  if ((uVar12 >> 8 & 1) != (uint)bVar13) {
    uVar12 = (uint)bVar13 << 8 | uVar12 & 0xfffffeff;
    *(uint *)(lVar10 + 0x74) = uVar12;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = (bool)((byte)(uVar12 >> 9) & 1);
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) != 0) goto LAB_14da35b4c;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14da35b4c:
    bVar13 = uVar12 != 0;
  }
  uVar12 = *(uint *)(lVar10 + 0x74);
  if ((uVar12 >> 9 & 1) != (uint)bVar13) {
    uVar12 = (uint)bVar13 << 9 | uVar12 & 0xfffffdff;
    *(uint *)(lVar10 + 0x74) = uVar12;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = (bool)((byte)(uVar12 >> 0x11) & 1);
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) != 0) goto LAB_14da35bda;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14da35bda:
    bVar13 = uVar12 != 0;
  }
  uVar12 = *(uint *)(lVar10 + 0x74);
  if ((uVar12 >> 0x11 & 1) != (uint)bVar13) {
    uVar12 = (uint)bVar13 << 0x11 | uVar12 & 0xfffdffff;
    *(uint *)(lVar10 + 0x74) = uVar12;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = (bool)((byte)(uVar12 >> 0x12) & 1);
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) != 0) goto LAB_14da35c68;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14da35c68:
    bVar13 = uVar12 != 0;
  }
  uVar12 = *(uint *)(lVar10 + 0x74);
  if ((uVar12 >> 0x12 & 1) != (uint)bVar13) {
    uVar12 = (uint)bVar13 << 0x12 | uVar12 & 0xfffbffff;
    *(uint *)(lVar10 + 0x74) = uVar12;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = (bool)((byte)(uVar12 >> 0x14) & 1);
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) != 0) goto LAB_14da35cf6;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14da35cf6:
    bVar13 = uVar12 != 0;
  }
  uVar12 = *(uint *)(lVar10 + 0x74);
  if ((uVar12 >> 0x14 & 1) != (uint)bVar13) {
    uVar12 = (uint)bVar13 << 0x14 | uVar12 & 0xffefffff;
    *(uint *)(lVar10 + 0x74) = uVar12;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = (bool)((byte)(uVar12 >> 0x16) & 1);
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) != 0) goto LAB_14da35d84;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14da35d84:
    bVar13 = uVar12 != 0;
  }
  uVar12 = *(uint *)(lVar10 + 0x74);
  if ((uVar12 >> 0x16 & 1) != (uint)bVar13) {
    uVar12 = (uint)bVar13 << 0x16 | uVar12 & 0xffbfffff;
    *(uint *)(lVar10 + 0x74) = uVar12;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = (bool)((byte)(uVar12 >> 0x17) & 1);
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) != 0) goto LAB_14da35e12;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14da35e12:
    bVar13 = uVar12 != 0;
  }
  uVar12 = *(uint *)(lVar10 + 0x74);
  if ((uVar12 >> 0x17 & 1) != (uint)bVar13) {
    uVar12 = (uint)bVar13 << 0x17 | uVar12 & 0xff7fffff;
    *(uint *)(lVar10 + 0x74) = uVar12;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = (bool)((byte)(uVar12 >> 0x18) & 1);
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) != 0) goto LAB_14da35ea0;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14da35ea0:
    bVar13 = uVar12 != 0;
  }
  uVar12 = *(uint *)(lVar10 + 0x74);
  if ((uVar12 >> 0x18 & 1) != (uint)bVar13) {
    uVar12 = uVar12 & 0xfeffffff | (uint)bVar13 << 0x18;
    *(uint *)(lVar10 + 0x74) = uVar12;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = (bool)((byte)(uVar12 >> 0x19) & 1);
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) != 0) goto LAB_14da35f29;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14da35f29:
    bVar13 = uVar12 != 0;
  }
  uVar12 = *(uint *)(lVar10 + 0x74);
  if ((uVar12 >> 0x19 & 1) != (uint)bVar13) {
    uVar12 = uVar12 & 0xfdffffff | (uint)bVar13 << 0x19;
    *(uint *)(lVar10 + 0x74) = uVar12;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = (bool)((byte)(uVar12 >> 0x1a) & 1);
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) != 0) goto LAB_14da35fb2;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14da35fb2:
    bVar13 = uVar12 != 0;
  }
  if ((*(uint *)(lVar10 + 0x74) >> 0x1a & 1) != (uint)bVar13) {
    *(uint *)(lVar10 + 0x74) = *(uint *)(lVar10 + 0x74) & 0xfbffffff | (uint)bVar13 << 0x1a;
  }
  puVar6 = (undefined1 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined1 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar6 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,lVar10 + 0x88,1);
  }
  else {
    *(undefined1 *)(lVar10 + 0x88) = *puVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar2 = (uint *)(lVar10 + 0x78);
  puVar7 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar7;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar2 = (uint *)(lVar10 + 0x7c);
  puVar6 = &param_1->field_0x2a;
  puVar7 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
    if ((*puVar6 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar7;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar8 = (undefined1 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined1 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar8 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,lVar10 + 0x8b,1);
  }
  else {
    *(undefined1 *)(lVar10 + 0x8b) = *puVar8;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar8 = (undefined1 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined1 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar8 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,lVar10 + 0x87,1);
  }
  else {
    *(undefined1 *)(lVar10 + 0x87) = *puVar8;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar2 = (uint *)(lVar10 + 0x80);
  puVar7 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
    if ((*puVar6 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar7;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar8 = (undefined1 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined1 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar8 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,lVar10 + 0x8c,1);
  }
  else {
    *(undefined1 *)(lVar10 + 0x8c) = *puVar8;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = (bool)(*(byte *)(lVar10 + 0x84) & 1);
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) != 0) goto LAB_14da36204;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14da36204:
    bVar13 = uVar12 != 0;
  }
  bVar11 = *(byte *)(lVar10 + 0x84);
  if ((bool)(bVar11 & 1) != bVar13) {
    bVar11 = bVar11 & 0xfe | bVar13;
    *(byte *)(lVar10 + 0x84) = bVar11;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = (bool)(bVar11 >> 1 & 1);
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) != 0) goto LAB_14da36289;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_14da36289:
    bVar13 = uVar12 != 0;
  }
  bVar11 = *(byte *)(lVar10 + 0x84);
  if ((bool)(bVar11 >> 1 & 1) != bVar13) {
    bVar11 = bVar11 & 0xfd | bVar13 * '\x02';
    *(byte *)(lVar10 + 0x84) = bVar11;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  bVar13 = (bool)(bVar11 >> 2 & 1);
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar9 & 1) == 0) {
      local_res8[0] = (uint)bVar13;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar12 = local_res8[0];
    if ((*puVar9 & 1) == 0) goto LAB_14da3631d;
  }
  else {
    uVar12 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
  }
  bVar13 = uVar12 != 0;
LAB_14da3631d:
  if ((bool)(*(byte *)(lVar10 + 0x84) >> 2 & 1) != bVar13) {
    *(byte *)(lVar10 + 0x84) = bVar13 << 2 | *(byte *)(lVar10 + 0x84) & 0xfb;
  }
  puVar9 = (undefined1 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined1 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar9 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,lVar10 + 0x85,1);
  }
  else {
    *(undefined1 *)(lVar10 + 0x85) = *puVar9;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar9 = (undefined1 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined1 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar9 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,lVar10 + 0x89,1);
  }
  else {
    *(undefined1 *)(lVar10 + 0x89) = *puVar9;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar9 = (undefined1 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined1 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar9 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,lVar10 + 0x86,1);
  }
  else {
    *(undefined1 *)(lVar10 + 0x86) = *puVar9;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar9 = (undefined1 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined1 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar9 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,lVar10 + 0x8a,1);
  }
  else {
    *(undefined1 *)(lVar10 + 0x8a) = *puVar9;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar9 = (undefined1 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined1 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar9 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,lVar10 + 0x8e,1);
  }
  else {
    *(undefined1 *)(lVar10 + 0x8e) = *puVar9;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar2 = (uint *)(lVar10 + 0x90);
  puVar7 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
    if ((*puVar6 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar7;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar9 = (undefined1 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined1 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar9 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,lVar10 + 0x8f,1);
  }
  else {
    *(undefined1 *)(lVar10 + 0x8f) = *puVar9;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar2 = (uint *)(lVar10 + 0x9c);
  puVar7 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
    if ((*puVar6 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar7;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar2 = (uint *)(lVar10 + 0xa0);
  puVar7 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
    if ((*puVar6 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar7;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar2 = (uint *)(lVar10 + 0xa4);
  puVar7 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
    if ((*puVar6 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar7;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar2 = (uint *)(lVar10 + 0xa8);
  puVar7 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
    if ((*puVar6 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar7;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar2 = (uint *)(lVar10 + 0xac);
  puVar7 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
    if ((*puVar6 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar7;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar9 = (undefined1 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined1 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar9 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,lVar10 + 0x8d,1);
  }
  else {
    *(undefined1 *)(lVar10 + 0x8d) = *puVar9;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar2 = (uint *)(lVar10 + 0x94);
  puVar7 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
    if ((*puVar6 & 1) != 0) {
      FArchive::SerializeByteOrderSwapped(param_1,puVar2);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00014da366ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
    return;
  }
  *puVar2 = *puVar7;
  **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  return;
}

// SetCollisionEnabled @ 14da37da0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FFastGeoPrimitiveComponent::SetCollisionEnabled(FFastGeoPrimitiveComponent *this,bool param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(this->_padding_ + 0xa8))();
  *(uint *)(lVar1 + 0x74) = *(uint *)(lVar1 + 0x74) & 0xfffdffff;
  *(uint *)(lVar1 + 0x74) = *(uint *)(lVar1 + 0x74) | (uint)param_1 << 0x11;
  return;
}

// SetupPrecachePSOParams @ 14da37ec0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FFastGeoPrimitiveComponent::SetupPrecachePSOParams
          (FFastGeoPrimitiveComponent *this,FPSOPrecacheParams *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 local_res8 [8];
  undefined8 *local_18;
  undefined8 local_10;
  
  lVar6 = (**(code **)(this->_padding_ + 0xa8))();
  uVar7 = 0;
  uVar9 = (ulonglong)*(uint *)(lVar6 + 0x70) & 0xfffffffffffffc00;
  uVar9 = (uVar9 ^ (param_1->field0_0x0).Data) & 0xfffffffffffffbff ^ uVar9;
  (param_1->field0_0x0).Data = uVar9;
  uVar10 = ((ulonglong)*(uint *)(lVar6 + 0x70) & 0xfffffffffffffe00) * 4;
  uVar10 = (uVar9 ^ uVar10) & 0xfffffffffffff7ff ^ uVar10;
  (param_1->field0_0x0).Data = uVar10;
  uVar3 = *(uint *)(lVar6 + 0x74) >> 0x17;
  uVar9 = (ulonglong)uVar3 << 0xc;
  uVar9 = (uVar10 ^ uVar9) & 0xffffffffffffefff ^ uVar9;
  (param_1->field0_0x0).Data = uVar9;
  if (((uVar3 & 1) == 0) || (uVar10 = 0x8000, *(char *)(lVar6 + 0x89) == '\0')) {
    uVar10 = uVar7;
  }
  uVar10 = uVar9 & 0xffffffffffff7fff | uVar10;
  (param_1->field0_0x0).Data = uVar10;
  uVar9 = ((ulonglong)*(uint *)(lVar6 + 0x70) & 0xffffffffffff8000) * 2;
  uVar9 = (uVar9 ^ uVar10) & 0xfffffffffffeffff ^ uVar9;
  (param_1->field0_0x0).Data = uVar9;
  uVar10 = (ulonglong)*(uint *)(lVar6 + 0x70) << 0xd;
  uVar10 = (uVar9 ^ uVar10) & 0xffffffffffffdfff ^ uVar10;
  (param_1->field0_0x0).Data = uVar10;
  uVar9 = ((ulonglong)*(uint *)(lVar6 + 0x70) & 0xfffffffffffffe00) << 5;
  uVar9 = (uVar10 ^ uVar9) & 0xffffffffffffbfff ^ uVar9;
  (param_1->field0_0x0).Data = uVar9;
  uVar10 = (ulonglong)(*(uint *)(lVar6 + 0x70) >> 2) & 0x3ffffffffff80000;
  uVar10 = (uVar9 ^ uVar10) & 0xfffffffffff7ffff ^ uVar10;
  (param_1->field0_0x0).Data = uVar10;
  uVar9 = (ulonglong)*(byte *)(lVar6 + 0x88) << 0x15;
  (param_1->field0_0x0).Data = (uVar10 ^ uVar9) & 0xfffffffffe1fffff ^ uVar9;
  switch(*(undefined1 *)(lVar6 + 0x8c)) {
  case 1:
    uVar7 = 0x4000000;
    break;
  case 2:
    uVar7 = 0x8000000;
    break;
  case 3:
    uVar7 = 0xc000000;
    break;
  case 4:
    uVar7 = 0x10000000;
    break;
  case 5:
    uVar7 = 0x14000000;
    break;
  case 6:
    uVar7 = 0x18000000;
    break;
  case 7:
    uVar7 = 0x1c000000;
    break;
  case 8:
    uVar7 = 0x20000000;
    break;
  case 9:
    uVar7 = 0x24000000;
    break;
  default:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\PrimitiveComponent.h"
                       ,0xad,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  case 0:
  }
  (param_1->field0_0x0).Data = (param_1->field0_0x0).Data & 0xffffffffc3ffffff;
  (param_1->field0_0x0).Data = (param_1->field0_0x0).Data | uVar7;
  local_18 = (undefined8 *)0x0;
  local_10 = 0;
  (**(code **)(this->_padding_ + 0x68))(this,&local_18,0);
  iVar4 = (int)local_10;
  puVar1 = local_18 + (int)local_10;
  puVar8 = local_18;
  while( true ) {
    if ((int)local_10 != iVar4) {
      `TCheckedPointerIterator<UMaterialInterface_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (puVar8 == puVar1) goto LAB_14da380df;
    if (((UMaterialInterface *)*puVar8 != (UMaterialInterface *)0x0) &&
       (bVar5 = UMaterialInterface::IsUsingWorldPositionOffset_Concurrent
                          ((UMaterialInterface *)*puVar8,GMaxRHIShaderPlatform), bVar5)) break;
    puVar8 = puVar8 + 1;
  }
  (param_1->field0_0x0).Data = (param_1->field0_0x0).Data | 0x2000000;
LAB_14da380df:
  if (local_18 != (undefined8 *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// ShouldCreateRenderState @ 14da38170

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
FFastGeoPrimitiveComponent::ShouldCreateRenderState(FFastGeoPrimitiveComponent *this)

{
  byte bVar1;
  FCachedSystemScalabilityCVars *pFVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
  {
    _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
    if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1) {
      pwVar4 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar4,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    bVar1 = (this->DetailMode).Value;
    pFVar2 = GetCachedScalabilityCVars();
    if ((int)(uint)bVar1 <= pFVar2->DetailMode) {
      lVar3 = (**(code **)(this->_padding_ + 0xa0))(this);
      if (((this->bIsVisible != 0) && ((*(uint *)(lVar3 + 0x74) & 0x40000) == 0)) ||
         (((*(uint *)(lVar3 + 0x70) & 0x110000) != 0 || ((*(byte *)(lVar3 + 0x74) & 0x40) != 0)))) {
        return true;
      }
    }
  }
  return false;
}

// ShouldRenderProxyFallbackToDefaultMaterial @ 14da38270

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
FFastGeoPrimitiveComponent::ShouldRenderProxyFallbackToDefaultMaterial
          (FFastGeoPrimitiveComponent *this)

{
  EPSOPrecacheProxyCreationStrategy EVar1;
  
  if ((this->bPSOPrecacheRequired != (atomic<bool>)0x0) ||
     (this->LatestPSOPrecacheJobSetCompleted != (atomic<int>)this->LatestPSOPrecacheJobSet)) {
    EVar1 = GetPSOPrecacheProxyCreationStrategy();
    if (EVar1 == UseDefaultMaterialUntilPSOPrecached) {
      return true;
    }
  }
  return false;
}

// ShouldSkipNavigationDirtyAreaOnAddOrRemove @ 14da382c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
FFastGeoPrimitiveComponent::ShouldSkipNavigationDirtyAreaOnAddOrRemove
          (FFastGeoPrimitiveComponent *this)

{
  return false;
}

// UpdateVisibility @ 14da39580

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FFastGeoPrimitiveComponent::UpdateVisibility(FFastGeoPrimitiveComponent *this)

{
  uint *puVar1;
  char cVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  
  lVar3 = (**(code **)(this->_padding_ + 0xa8))();
  if ((this->bIsVisible == 0) ||
     (cVar2 = (**(code **)(*(longlong *)this->_padding_ + 0x20))(), cVar2 == '\0')) {
    *(uint *)(lVar3 + 0x74) = *(uint *)(lVar3 + 0x74) & 0xfffff7ff;
    uVar4 = *(uint *)(lVar3 + 0x74);
  }
  else {
    puVar1 = (uint *)(lVar3 + 0x74);
    uVar5 = 0x800;
    *puVar1 = *puVar1 | 0x800;
    uVar4 = *puVar1;
    if (FastGeo::GShowFastGeo != 0) goto LAB_14da395d7;
  }
  uVar5 = 0;
LAB_14da395d7:
  *(uint *)(lVar3 + 0x74) = uVar4 & 0xfffff7ff | uVar5;
  return;
}

