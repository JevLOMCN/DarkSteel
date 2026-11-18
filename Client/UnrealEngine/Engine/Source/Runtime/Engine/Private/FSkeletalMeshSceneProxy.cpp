// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 45

// CanApplyStreamableRenderAssetScaleFactor @ 147ce3d90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FSkeletalMeshSceneProxy::CanApplyStreamableRenderAssetScaleFactor(FSkeletalMeshSceneProxy *this)

{
  return true;
}

// GetCurrentFirstLODIdx_RenderThread @ 147cfc2c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

uchar __thiscall
FSkeletalMeshSceneProxy::GetCurrentFirstLODIdx_RenderThread(FSkeletalMeshSceneProxy *this)

{
  return this->RenderData->CurrentFirstLODIdx;
}

// GetMemoryFootprint @ 147d09180

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

uint __thiscall FSkeletalMeshSceneProxy::GetMemoryFootprint(FSkeletalMeshSceneProxy *this)

{
  return (*(int *)((longlong)&this->_padding_ + 4) + (this->LODSections).ArrayMax * 4 + 0xf4) * 4;
}

// GetPreSkinnedLocalBounds @ 147d0bfb0

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
FSkeletalMeshSceneProxy::GetPreSkinnedLocalBounds
          (FSkeletalMeshSceneProxy *this,TBoxSphereBounds<double,double> *param_1)

{
  double dVar1;
  
  dVar1 = (this->PreSkinnedLocalBounds).Origin.field0_0x0._s_0.Y;
  (param_1->Origin).field0_0x0._s_0.X = (this->PreSkinnedLocalBounds).Origin.field0_0x0._s_0.X;
  (param_1->Origin).field0_0x0._s_0.Y = dVar1;
  dVar1 = (this->PreSkinnedLocalBounds).BoxExtent.field0_0x0._s_0.X;
  (param_1->Origin).field0_0x0._s_0.Z = (this->PreSkinnedLocalBounds).Origin.field0_0x0._s_0.Z;
  (param_1->BoxExtent).field0_0x0._s_0.X = dVar1;
  dVar1 = (this->PreSkinnedLocalBounds).BoxExtent.field0_0x0._s_0.Z;
  (param_1->BoxExtent).field0_0x0._s_0.Y = (this->PreSkinnedLocalBounds).BoxExtent.field0_0x0._s_0.Y
  ;
  (param_1->BoxExtent).field0_0x0._s_0.Z = dVar1;
  param_1->SphereRadius = (this->PreSkinnedLocalBounds).SphereRadius;
  return;
}

// IsRayTracingRelevant @ 147d1a440

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FSkeletalMeshSceneProxy::IsRayTracingRelevant(FSkeletalMeshSceneProxy *this)

{
  return true;
}

// IsRayTracingStaticRelevant @ 147d1a460

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FSkeletalMeshSceneProxy::IsRayTracingStaticRelevant(FSkeletalMeshSceneProxy *this)

{
  return this->bRayTraceStatic;
}

// FSkeletalMeshSceneProxy @ 148622130

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FSkeletalMeshSceneProxy * __thiscall
FSkeletalMeshSceneProxy::FSkeletalMeshSceneProxy
          (FSkeletalMeshSceneProxy *this,FSkinnedMeshSceneProxyDesc *param_1,
          FSkeletalMeshRenderData *param_2)

{
  FSkeletalMeshSceneProxy(this,param_1,param_2,0);
  this->_padding_ = (longlong)&___7FSkeletalMeshSceneProxy__6B_;
  return this;
}

// FSkeletalMeshSceneProxy @ 148622160

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FSkeletalMeshSceneProxy * __thiscall
FSkeletalMeshSceneProxy::FSkeletalMeshSceneProxy
          (FSkeletalMeshSceneProxy *this,FSkinnedMeshSceneProxyDesc *param_1,
          FSkeletalMeshRenderData *param_2,int param_3)

{
  int *piVar1;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar2;
  FMaterialRelevance *pFVar3;
  int *piVar4;
  int *piVar5;
  byte *pbVar6;
  TArray<FSkeletalMeshSceneProxy::FLODSectionElements,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<TTuple<int,UE::Math::TCapsuleShape<double>_>,TSizedDefaultAllocator<32>_> *pTVar8;
  undefined8 *puVar9;
  double *pdVar10;
  double dVar11;
  undefined1 uVar12;
  byte bVar13;
  ushort uVar14;
  FName FVar15;
  FSkeletalMeshObject *pFVar16;
  code *pcVar17;
  FSceneInterface *this_00;
  FScriptContainerElement *pFVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined8 uVar31;
  undefined1 auVar32 [16];
  bool bVar33;
  longlong lVar34;
  double dVar35;
  double dVar36;
  byte bVar37;
  bool bVar38;
  byte bVar39;
  char cVar40;
  bool bVar41;
  int iVar42;
  uint uVar43;
  int iVar44;
  USkinnedAsset *pUVar45;
  UClass *pUVar46;
  FSkinningSceneExtensionProxy *pFVar47;
  UPhysicsAsset *pUVar48;
  UMaterialInterface *pUVar49;
  TOptional<FLinearColor> *pTVar50;
  FSkeletalMeshSceneProxy *pFVar51;
  UMaterial *this_01;
  FMaterialRelevance FVar52;
  longlong lVar53;
  longlong lVar54;
  TQuat<double> *pTVar55;
  uint uVar56;
  uint uVar57;
  AActor *pAVar58;
  FSkeletalMeshRenderData *pFVar59;
  UObject *pUVar60;
  longlong lVar61;
  USkinnedMeshComponent *pUVar62;
  uint uVar63;
  float fVar64;
  float fVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  undefined1 auStackY_3c8 [32];
  byte local_377;
  FIdentityFunctor local_373 [3];
  uint local_370;
  uint local_36c;
  ushort local_368 [4];
  FScriptContainerElement *local_360;
  longlong local_358;
  longlong local_350;
  undefined1 local_348 [16];
  longlong local_338;
  longlong local_330;
  UMaterial *local_328;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *local_320;
  FScriptContainerElement *local_318;
  USkinnedAsset *local_310;
  undefined1 local_308 [16];
  UMaterial *local_2f8;
  undefined4 uStack_2f0;
  uint uStack_2ec;
  UObject *local_2e8;
  UMaterialInterface *local_2e0;
  FSkinnedMeshSceneProxyDesc *local_2d8;
  FSkeletalMeshSceneProxy *local_2d0;
  TVector<double>_u_0 local_2c8;
  undefined1 local_2b0 [8];
  undefined1 local_2a8 [8];
  FString local_2a0;
  FString local_290;
  FString local_280;
  TVector<double>_u_0 local_268;
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  double local_228;
  double dStack_220;
  undefined8 local_218;
  undefined1 local_210 [16];
  undefined1 local_200 [16];
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  double local_1e0;
  double dStack_1d8;
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [16];
  TQuat<double> local_188;
  double local_168;
  double dStack_160;
  double local_158;
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  local_2d8 = param_1;
  local_2d0 = this;
  pUVar45 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(param_1);
  FVar15.ComparisonIndex.Value = *(uint *)&pUVar45->field_0x18;
  FVar15.Number = *(uint *)&pUVar45->field_0x1c;
  FPrimitiveSceneProxy::FPrimitiveSceneProxy
            ((FPrimitiveSceneProxy *)this,(FPrimitiveSceneProxyDesc *)param_1,FVar15);
  this->_padding_ = (longlong)&___7FSkeletalMeshSceneProxy__6B_;
  pAVar58 = (AActor *)param_1->_padding_;
  if (pAVar58 != (AActor *)0x0) {
    pUVar46 = Z_Construct_UClass_AActor_NoRegister();
    iVar44 = (int)pUVar46->_padding_;
    if ((iVar44 <= *(int *)(pAVar58->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pAVar58->_padding_ + 0x30) + (longlong)iVar44 * 8) ==
        &pUVar46->_padding_)) goto LAB_1486221fb;
  }
  pAVar58 = (AActor *)0x0;
LAB_1486221fb:
  this->Owner = pAVar58;
  this->MeshObject = param_1->MeshObject;
  pUVar45 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(param_1);
  pFVar16 = this->MeshObject;
  this->SkinnedAsset = pUVar45;
  pcVar17 = *(code **)(pFVar16->_padding_ + 0x88);
  pUVar45 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(param_1);
  pFVar47 = (FSkinningSceneExtensionProxy *)(*pcVar17)(pFVar16,pUVar45,1);
  (this->SceneExtensionProxy).Ptr = pFVar47;
  this->RenderData = param_2;
  this->ClampedLODIndex = param_3;
  this->NumLODs = '\x01';
  pUVar48 = FSkinnedMeshSceneProxyDesc::GetPhysicsAsset(param_1);
  this->PhysicsAssetForDebug = pUVar48;
  pUVar49 = FSkinnedMeshSceneProxyDesc::GetOverlayMaterial(param_1);
  this->OverlayMaterial = pUVar49;
  fVar64 = FSkinnedMeshSceneProxyDesc::GetOverlayMaterialMaxDrawDistance(param_1);
  this->OverlayMaterialMaxDrawDistance = fVar64;
  pTVar2 = &this->MaterialSlotsOverlayMaterial;
  piVar1 = &(this->MaterialSlotsOverlayMaterial).ArrayMax;
  *piVar1 = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->MaterialSlotsOverlayMaterial).ArrayNum = 0;
  bVar37 = this->field_0x2d8 & 0xfe;
  this->bAnySegmentUsesWorldPositionOffset = false;
  bVar37 = (param_1->field_0x180 * '\x02' ^ bVar37) & 2 ^ bVar37;
  this->field_0x2d8 = bVar37;
  bVar37 = (param_1->field_0x180 << 2 ^ bVar37) & 8 ^ bVar37;
  this->field_0x2d8 = bVar37;
  this->field_0x2d8 = (param_1->field_0x180 << 2 ^ bVar37) & 0x10 ^ bVar37;
  bVar38 = FSkinnedMeshSceneProxyDesc::ShouldDrawDebugSkeleton(param_1);
  this->bDrawDebugSkeleton = '\0';
  fVar64 = __real_3f800000;
  pFVar3 = &this->MaterialRelevance;
  this->field_0x2d8 = this->field_0x2d8 | bVar38 << 6;
  this->bAllowDynamicMeshBounds =
       (float)((uint)(*(float *)&param_1->_padding_ - fVar64) &
              __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77;
  this_00 = (FSceneInterface *)this->_padding_;
  (this->FeatureLevel).Value = (char)this_00->FeatureLevel;
  this->bMaterialsNeedMorphUsage_GameThread = false;
  FSceneInterface::GetShaderPlatform(this_00);
  FSkinnedMeshSceneProxyDesc::GetMaterialRelevance(param_1,(EShaderPlatform)pFVar3);
  (this->LODSections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShadowCapsuleData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(this->MaterialsInUse_GameThread).Elements = 0;
  piVar4 = &(this->LODSections).ArrayNum;
  *piVar4 = 0;
  piVar5 = &(this->LODSections).ArrayMax;
  *piVar5 = 0;
  *(undefined8 *)&(this->MaterialsInUse_GameThread).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->MaterialsInUse_GameThread).Elements.field_0x20 = 0;
  (this->ShadowCapsuleData).ArrayNum = 0;
  (this->ShadowCapsuleData).ArrayMax = 0;
  (this->ShadowCapsuleBoneIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShadowCapsuleBoneIndices).ArrayNum = 0;
  (this->ShadowCapsuleBoneIndices).ArrayMax = 0;
  *(undefined4 *)&(this->MaterialsInUse_GameThread).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->MaterialsInUse_GameThread).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->MaterialsInUse_GameThread).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MaterialsInUse_GameThread).Elements.field_0x34 = 0;
  (this->MaterialsInUse_GameThread).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->MaterialsInUse_GameThread).HashSize = 0;
  local_308._0_8_ = piVar4;
  this->CardRepresentationData = (FCardRepresentationData *)0x0;
  this->RayTracingGeometryGroupHandle = -1;
  pTVar50 = FSkinnedMeshSceneProxyDesc::GetDebugDrawColor(param_1);
  (this->DebugDrawColor).bIsSet = false;
  bVar38 = pTVar50->bIsSet;
  (this->DebugDrawColor).bIsSet = bVar38;
  if (bVar38 != false) {
    uVar31 = *(undefined8 *)((longlong)&(pTVar50->TypedValue).field0_0x0 + 8);
    *(undefined8 *)&(this->DebugDrawColor).TypedValue.field0_0x0 =
         *(undefined8 *)&(pTVar50->TypedValue).field0_0x0;
    *(undefined8 *)((longlong)&(this->DebugDrawColor).TypedValue.field0_0x0 + 8) = uVar31;
  }
  if ((this->MeshObject == (FSkeletalMeshObject *)0x0) &&
     (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                         ("MeshObject",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshSceneProxy.cpp"
                          ,0x86,L""), bVar38)) {
    pcVar17 = (code *)swi(3);
    pFVar51 = (FSkeletalMeshSceneProxy *)(*pcVar17)();
    return pFVar51;
  }
  if ((this->RenderData == (FSkeletalMeshRenderData *)0x0) &&
     (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                         ("RenderData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshSceneProxy.cpp"
                          ,0x87,L""), bVar38)) {
    pcVar17 = (code *)swi(3);
    pFVar51 = (FSkeletalMeshSceneProxy *)(*pcVar17)();
    return pFVar51;
  }
  pUVar62 = (USkinnedMeshComponent *)param_1->_padding_;
  if (pUVar62 != (USkinnedMeshComponent *)0x0) {
    pUVar46 = Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
    iVar44 = (int)pUVar46->_padding_;
    if ((*(int *)(pUVar62->_padding_ + 0x38) < iVar44) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar62->_padding_ + 0x30) + (longlong)iVar44 * 8) !=
        &pUVar46->_padding_)) {
      pUVar62 = (USkinnedMeshComponent *)0x0;
    }
    this->SkinnedMeshComponent = pUVar62;
  }
  pbVar6 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar6 = *pbVar6 | 0x40;
  pFVar47 = (this->SceneExtensionProxy).Ptr;
  bVar37 = *(byte *)((longlong)&this->_padding_ + 4);
  if ((pFVar47 == (FSkinningSceneExtensionProxy *)0x0) || (pFVar47->bUseInstancing == '\0')) {
    bVar39 = 0;
  }
  else {
    bVar39 = 0x80;
  }
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x7f;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | bVar39;
  pFVar59 = this->RenderData;
  *(byte *)((longlong)&this->_padding_ + 4) = bVar37 & 0x7f | bVar39;
  this->NumLODs = (uchar)(pFVar59->LODRenderData).Array.ArrayNum;
  uVar12 = this->field_0x2d8;
  if ((this->bRenderStatic == '\0') && (bVar39 == 0)) {
    bVar37 = 0;
  }
  else {
    bVar37 = 0x20;
  }
  this->field_0x2d8 = uVar12 & 0xdf | bVar37;
  pFVar16 = this->MeshObject;
  *(byte *)((longlong)&this->_padding_ + 1) =
       (~(uVar12 << 3) ^ *(byte *)((longlong)&this->_padding_ + 1)) & 0x7f ^ ~(uVar12 << 3);
  cVar40 = (**(code **)(pFVar16->_padding_ + 0x40))();
  this->field_0x2d8 = (cVar40 << 2 ^ this->field_0x2d8) & 4U ^ this->field_0x2d8;
  if ((((param_1->_padding_ & 0x1001) == 0x1001) && (param_1->bCastCapsuleDirectShadow != '\0')) &&
     ((param_1->_padding_ & 0x10000000000) == 0)) {
    bVar37 = 8;
  }
  else {
    bVar37 = 0;
  }
  pbVar6 = (byte *)((longlong)&this->_padding_ + 7);
  *pbVar6 = *pbVar6 & 0xf7;
  pbVar6 = (byte *)((longlong)&this->_padding_ + 7);
  *pbVar6 = *pbVar6 | bVar37;
  bVar37 = *(byte *)((longlong)&this->_padding_ + 7);
  if ((((param_1->_padding_ & 0x1001) == 0x1001) && (param_1->bCastCapsuleIndirectShadow != '\0'))
     && ((param_1->_padding_ & 0x10000000000) == 0)) {
    bVar39 = 0x10;
  }
  else {
    bVar39 = 0;
  }
  bVar13 = (byte)this->_padding_;
  *(byte *)((longlong)&this->_padding_ + 7) = bVar37 & 0xef | bVar39;
  fVar65 = param_1->CapsuleIndirectShadowMinVisibility;
  if (fVar64 <= param_1->CapsuleIndirectShadowMinVisibility) {
    fVar65 = fVar64;
  }
  if (fVar65 <= 0.0) {
    fVar65 = 0.0;
  }
  *(float *)((longlong)&this->_padding_ + 4) = fVar65;
  if (((bVar13 & 1) == 0) && ((bVar37 & 8) == 0)) {
    bVar37 = 0;
  }
  else {
    bVar37 = 1;
  }
  *(byte *)&this->_padding_ = bVar13 & 0xfe | bVar37;
  FSkinnedMeshSceneProxyDesc::GetPreSkinnedLocalBounds(param_1,&this->PreSkinnedLocalBounds);
  if (pTVar2 != &param_1->MaterialSlotsOverlayMaterial) {
    iVar44 = (param_1->MaterialSlotsOverlayMaterial).ArrayNum;
    local_360 = (param_1->MaterialSlotsOverlayMaterial).AllocatorInstance.Data;
    (this->MaterialSlotsOverlayMaterial).ArrayNum = iVar44;
    if ((iVar44 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar44,*piVar1,&pTVar2->AllocatorInstance,iVar44,piVar1);
      ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
                ((pTVar2->AllocatorInstance).Data,(TObjectPtr<UMaterialInterface> *)local_360,iVar44
                );
    }
  }
  if (param_1->bPerBoneMotionBlur != '\0') {
    pbVar6 = (byte *)((longlong)&this->_padding_ + 2);
    *pbVar6 = *pbVar6 | 0x80;
  }
  local_36c = *(uint *)((longlong)&param_1->_padding_ + 4) >> 0x1b & 0xffffff01;
  bVar37 = *(byte *)((longlong)&this->_padding_ + 3);
  local_377 = 0;
  *(byte *)((longlong)&this->_padding_ + 3) = (param_1->field_0x184 << 6 ^ bVar37) & 0x40 ^ bVar37;
  lVar34 = param_1->_padding_;
  uVar63 = (this->RenderData->LODRenderData).Array.ArrayNum;
  if ((int)uVar63 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar63);
  }
  pTVar7 = &this->LODSections;
  uVar31 = local_308._0_8_;
  if (*piVar5 < (int)uVar63) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar63,&pTVar7->AllocatorInstance,*(int *)local_308._0_8_,piVar5);
  }
  iVar44 = (this->RenderData->LODRenderData).Array.ArrayNum;
  iVar42 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x10,8,iVar44,&pTVar7->AllocatorInstance,(int *)uVar31,piVar5);
  memset((pTVar7->AllocatorInstance).Data + (longlong)iVar42 * 0x10,0,(longlong)iVar44 << 4);
  pFVar59 = this->RenderData;
  local_370 = 0;
  if (0 < (pFVar59->LODRenderData).Array.ArrayNum) {
    local_360 = (FScriptContainerElement *)0x0;
    do {
      pFVar18 = local_360;
      uVar63 = local_370;
      uVar57 = ~local_370;
      uVar43 = 0;
      if ((int)local_370 < (pFVar59->LODRenderData).Array.ArrayNum) {
        uVar43 = uVar57 >> 0x1f;
      }
      if ((uVar43 == 0) &&
         (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar38)) {
        pcVar17 = (code *)swi(3);
        pFVar51 = (FSkeletalMeshSceneProxy *)(*pcVar17)();
        return pFVar51;
      }
      lVar53 = *(longlong *)
                ((pFVar59->LODRenderData).Array.AllocatorInstance.Data + (longlong)pFVar18 * 8);
      local_350 = lVar53;
      pUVar45 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(param_1);
      local_358 = (**(code **)(*(longlong *)pUVar45 + 0x330))(pUVar45,uVar63);
      uVar43 = 0;
      if ((int)uVar63 < *(int *)local_308._0_8_) {
        uVar43 = uVar57 >> 0x1f;
      }
      if ((uVar43 == 0) &&
         (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar38)) {
        pcVar17 = (code *)swi(3);
        pFVar51 = (FSkeletalMeshSceneProxy *)(*pcVar17)();
        return pFVar51;
      }
      uVar63 = *(uint *)(lVar53 + 0x18);
      local_318 = (this->LODSections).AllocatorInstance.Data + (longlong)pFVar18 * 0x10;
      if ((int)uVar63 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar63);
      }
      *(undefined4 *)&local_318[8].field_0x0 = 0;
      if (*(uint *)(local_318 + 0xc) != uVar63) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,uVar63,(ForAnyElementType *)local_318,0,(int *)(local_318 + 0xc));
      }
      uVar63 = 0;
      if (0 < *(int *)(lVar53 + 0x18)) {
        auVar32._8_8_ = 0;
        auVar32._0_8_ = local_348._8_8_;
        local_348 = auVar32 << 0x40;
        local_338 = 0;
        do {
          lVar61 = local_338;
          uVar57 = ~uVar63 >> 0x1f;
          uVar43 = 0;
          if ((int)uVar63 < *(int *)(lVar53 + 0x18)) {
            uVar43 = uVar57;
          }
          if ((uVar43 == 0) &&
             (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar38)) {
            pcVar17 = (code *)swi(3);
            pFVar51 = (FSkeletalMeshSceneProxy *)(*pcVar17)();
            return pFVar51;
          }
          local_330 = *(longlong *)(lVar53 + 0x10);
          uVar14 = *(ushort *)(lVar61 + local_330);
          uVar43 = (uint)uVar14;
          if ((int)uVar63 < *(int *)(local_358 + 0x10)) {
            local_310 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(param_1);
            local_320 = *(TArray<unsigned_short,TSizedDefaultAllocator<32>_> **)
                         (*(longlong *)local_310 + 0x338);
            uVar43 = 0;
            if ((int)uVar63 < *(int *)(local_358 + 0x10)) {
              uVar43 = uVar57;
            }
            if ((uVar43 == 0) &&
               (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar38)) {
              pcVar17 = (code *)swi(3);
              pFVar51 = (FSkeletalMeshSceneProxy *)(*pcVar17)();
              return pFVar51;
            }
            cVar40 = (*(code *)local_320)
                               (local_310,
                                *(undefined4 *)(local_348._0_8_ + *(longlong *)(local_358 + 8)));
            lVar53 = local_358;
            uVar43 = (uint)uVar14;
            if (cVar40 != '\0') {
              uVar43 = 0;
              if ((int)uVar63 < *(int *)(local_358 + 0x10)) {
                uVar43 = uVar57;
              }
              if ((uVar43 == 0) &&
                 (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar38)) {
                pcVar17 = (code *)swi(3);
                pFVar51 = (FSkeletalMeshSceneProxy *)(*pcVar17)();
                return pFVar51;
              }
              uVar43 = *(uint *)(local_348._0_8_ + *(longlong *)(lVar53 + 8));
              pUVar45 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(param_1);
              uVar57 = (**(code **)(*(longlong *)pUVar45 + 0x340))(pUVar45);
              if ((int)uVar43 < (int)uVar57) {
                uVar57 = uVar43;
              }
              uVar43 = 0;
              if (0 < (int)uVar57) {
                uVar43 = uVar57;
              }
            }
          }
          bVar38 = FSkeletalMeshObject::IsMaterialHidden(this->MeshObject,local_370,uVar43);
          this_01 = (UMaterial *)FSkinnedMeshSceneProxyDesc::GetMaterial(param_1,uVar43);
          local_328 = this_01;
          if (((char)local_36c != '\0') ||
             (((GForceDefaultMaterial != false && (this_01 != (UMaterial *)0x0)) &&
              (bVar41 = IsTranslucentBlendMode((UMaterialInterface *)this_01), !bVar41)))) {
            this_01 = UMaterial::GetDefaultMaterial(MD_Surface);
            local_328 = this_01;
            FSceneInterface::GetShaderPlatform((FSceneInterface *)this->_padding_);
            FVar52 = UMaterialInterface::GetRelevance
                               ((UMaterialInterface *)this_01,(EShaderPlatform)local_2b0);
            uVar56 = *(uint *)&pFVar3->field0_0x0 >> 0x12;
            (pFVar3->field0_0x0).Raw = (pFVar3->field0_0x0).Raw | *(ulonglong *)FVar52.field0_0x0;
            uVar57 = *(uint *)FVar52.field0_0x0 >> 0x12;
            if (((byte)(*(uint *)FVar52.field0_0x0 >> 0x12) & 0x3f) < ((byte)uVar56 & 0x3f)) {
              uVar57 = uVar56;
            }
            uVar56 = (uint)(pFVar3->field0_0x0).Raw;
            *(uint *)&pFVar3->field0_0x0 = (uVar57 << 0x12 ^ uVar56) & 0xfc0000 ^ uVar56;
          }
          if (*(int *)(lVar61 + 0x30 + local_330) == 0) {
LAB_148622b21:
            bVar41 = false;
          }
          else {
            if ((*(int *)(lVar61 + 0x30 + local_330) < 1) &&
               (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar41)) {
              pcVar17 = (code *)swi(3);
              pFVar51 = (FSkeletalMeshSceneProxy *)(*pcVar17)();
              return pFVar51;
            }
            bVar41 = true;
            if (*(int *)(*(longlong *)(lVar61 + 0x28 + local_330) + 8) == 0) goto LAB_148622b21;
          }
          if ((this_01 == (UMaterial *)0x0) ||
             (cVar40 = (**(code **)(this_01->_padding_ + 0x378))(this_01,0), cVar40 == '\0')) {
            bVar33 = false;
          }
          else {
            bVar33 = true;
          }
          if (bVar41) {
            if ((this_01 == (UMaterial *)0x0) ||
               (cVar40 = (**(code **)(this_01->_padding_ + 0x378))(this_01,9), cVar40 == '\0')) {
              bVar37 = 0;
            }
            else {
              bVar37 = 1;
            }
            bVar33 = (bool)(bVar37 & bVar33);
          }
          if ((this_01 == (UMaterial *)0x0) || (!bVar33)) {
            if ((2 < (byte)LogSkeletalMesh._0_1_) && ((this_01 != (UMaterial *)0x0 && (!bVar33)))) {
              pUVar45 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(param_1);
              UObjectBaseUtility::GetPathName
                        ((UObjectBaseUtility *)pUVar45,&local_2a0,(UObject *)0x0);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSkeletalMesh);
              if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
              }
            }
            this_01 = UMaterial::GetDefaultMaterial(MD_Surface);
            local_328 = this_01;
            FSceneInterface::GetShaderPlatform((FSceneInterface *)this->_padding_);
            FVar52 = UMaterialInterface::GetRelevance
                               ((UMaterialInterface *)this_01,(EShaderPlatform)local_2a8);
            uVar56 = *(uint *)&pFVar3->field0_0x0 >> 0x12;
            (pFVar3->field0_0x0).Raw = (pFVar3->field0_0x0).Raw | *(ulonglong *)FVar52.field0_0x0;
            uVar57 = *(uint *)FVar52.field0_0x0 >> 0x12;
            if (((byte)(*(uint *)FVar52.field0_0x0 >> 0x12) & 0x3f) < ((byte)uVar56 & 0x3f)) {
              uVar57 = uVar56;
            }
            uVar56 = (uint)(pFVar3->field0_0x0).Raw;
            *(uint *)&pFVar3->field0_0x0 = (uVar57 << 0x12 ^ uVar56) & 0xfc0000 ^ uVar56;
          }
          if ((bVar38) || ((lVar34 & 1) == 0)) {
LAB_148622c7f:
            bVar37 = 0;
          }
          else {
            pUVar45 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(param_1);
            cVar40 = (**(code **)(*(longlong *)pUVar45 + 0x338))(pUVar45,uVar43);
            if ((cVar40 != '\0') && (*(char *)(lVar61 + 0xd + local_330) == '\0'))
            goto LAB_148622c7f;
            bVar37 = 1;
          }
          local_377 = local_377 | bVar37;
          this->field_0x2d8 =
               (*(byte *)((longlong)&(this->MaterialRelevance).field0_0x0 + 5) >> 6 |
               this->bAnySegmentUsesWorldPositionOffset) & 1 ^ this->field_0x2d8 & 0xfe;
          if (((int)uVar43 < 0) || ((this->MaterialSlotsOverlayMaterial).ArrayNum <= (int)uVar43)) {
            pUVar60 = (UObject *)0x0;
          }
          else {
            pUVar60 = *(UObject **)
                       ((this->MaterialSlotsOverlayMaterial).AllocatorInstance.Data +
                       (longlong)(int)uVar43 * 8);
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              if (pUVar60 == (UObject *)0x0) goto LAB_148622d88;
              UE::GC::MarkAsReachable(pUVar60);
            }
            if (pUVar60 != (UObject *)0x0) {
              cVar40 = (**(code **)(*(longlong *)pUVar60 + 0x378))(pUVar60,0);
              if (cVar40 == '\0') {
                if (2 < (byte)LogSkeletalMesh._0_1_) {
                  pUVar45 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(param_1);
                  UObjectBaseUtility::GetPathName
                            ((UObjectBaseUtility *)pUVar45,&local_290,(UObject *)0x0);
                  UE::Logging::Private::BasicLog<3>
                            (&::LOG_Static,(FLogCategoryBase *)&LogSkeletalMesh);
                  if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_290.Data.AllocatorInstance.Data);
                  }
                }
              }
              else if ((char)local_36c == '\0') goto LAB_148622d88;
              pUVar60 = (UObject *)0x0;
              if ((int)uVar43 < (this->MaterialSlotsOverlayMaterial).ArrayNum) {
                *(undefined8 *)
                 ((this->MaterialSlotsOverlayMaterial).AllocatorInstance.Data +
                 (longlong)(int)uVar43 * 8) = 0;
              }
            }
          }
LAB_148622d88:
          pFVar18 = local_318;
          uStack_2f0 = CONCAT31(uStack_2f0._1_3_,bVar37);
          local_2f8 = this_01;
          uStack_2ec = uVar43;
          local_2e8 = pUVar60;
          if (((*(UMaterial ***)&local_318->field_0x0 <= &local_2f8) &&
              (&local_2f8 <
               *(UMaterial ***)&local_318->field_0x0 + (longlong)*(int *)(local_318 + 0xc) * 3)) &&
             (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar38)) {
            pcVar17 = (code *)swi(3);
            pFVar51 = (FSkeletalMeshSceneProxy *)(*pcVar17)();
            return pFVar51;
          }
          iVar44 = *(int *)&pFVar18[8].field_0x0;
          if (iVar44 == *(int *)(pFVar18 + 0xc)) {
            iVar44 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,(ForAnyElementType *)pFVar18,(int *)(pFVar18 + 0xc));
          }
          *(int *)&pFVar18[8].field_0x0 = iVar44 + 1;
          lVar53 = *(longlong *)&pFVar18->field_0x0;
          puVar9 = (undefined8 *)(lVar53 + (longlong)iVar44 * 0x18);
          *puVar9 = local_2f8;
          puVar9[1] = CONCAT44(uStack_2ec,uStack_2f0);
          *(UObject **)(lVar53 + (longlong)iVar44 * 0x18 + 0x10) = local_2e8;
          TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>::
          Emplace<UMaterialInterface_*_const_&>
                    (&this->MaterialsInUse_GameThread,&local_2e0,(bool *)&local_328);
          uVar63 = uVar63 + 1;
          local_338 = local_338 + 0x118;
          local_348._0_8_ = local_348._0_8_ + 4;
          lVar53 = local_350;
        } while ((int)uVar63 < *(int *)(local_350 + 0x18));
      }
      local_370 = local_370 + 1;
      pFVar59 = this->RenderData;
      local_360 = local_360 + 1;
    } while ((int)local_370 < (pFVar59->LODRenderData).Array.ArrayNum);
  }
  pUVar49 = this->OverlayMaterial;
  if (pUVar49 != (UMaterialInterface *)0x0) {
    cVar40 = (**(code **)(pUVar49->_padding_ + 0x378))(pUVar49,0);
    if (cVar40 == '\0') {
      this->OverlayMaterial = (UMaterialInterface *)0x0;
      if (2 < (byte)LogSkeletalMesh._0_1_) {
        pUVar45 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(param_1);
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar45,&local_280,(UObject *)0x0);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSkeletalMesh);
        if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_280.Data.AllocatorInstance.Data);
        }
      }
    }
    else if ((char)local_36c != '\0') {
      this->OverlayMaterial = (UMaterialInterface *)0x0;
    }
  }
  bVar37 = *(byte *)((longlong)&this->_padding_ + 5);
  if (((bVar37 & 2) == 0) || (local_377 == 0)) {
    bVar39 = 0;
  }
  else {
    bVar39 = 2;
  }
  *(byte *)((longlong)&this->_padding_ + 5) = bVar37 & 0xfd | bVar39;
  pUVar45 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(param_1);
  local_310 = (USkinnedAsset *)(**(code **)(*(longlong *)pUVar45 + 0x348))(pUVar45);
  dVar36 = _UNK_150689518;
  dVar35 = ___xmm_00000000000000003ff0000000000000;
  pFVar51 = this;
  if (((local_310 != (USkinnedAsset *)0x0) && ((param_1->_padding_ & 1) != 0)) &&
     ((param_1->bCastCapsuleDirectShadow != '\0' || param_1->bCastCapsuleIndirectShadow != '\0' &&
      (local_36c = 0, 0 < *(int *)((longlong)local_310 + 0x50))))) {
    uVar67 = SUB84(__real_3ff0000000000000,0);
    uVar68 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    local_320 = &this->ShadowCapsuleBoneIndices;
    pTVar8 = &this->ShadowCapsuleData;
    uVar73 = 0;
    uVar74 = 0;
    local_350 = 0;
    local_338 = 0;
    do {
      pUVar45 = local_310;
      lVar34 = local_338;
      uVar63 = 0;
      if ((int)local_36c < *(int *)((longlong)local_310 + 0x50)) {
        uVar63 = ~local_36c >> 0x1f;
      }
      if ((uVar63 == 0) &&
         (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar38)) {
        pcVar17 = (code *)swi(3);
        pFVar51 = (FSkeletalMeshSceneProxy *)(*pcVar17)();
        return pFVar51;
      }
      lVar34 = *(longlong *)(lVar34 + *(longlong *)((longlong)pUVar45 + 0x48));
      iVar44 = FSkinnedMeshSceneProxyDesc::GetBoneIndex(param_1,*(FName *)(lVar34 + 0x28));
      if (iVar44 != -1) {
        pUVar45 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(param_1);
        (**(code **)(*(longlong *)pUVar45 + 0x350))(pUVar45,&local_168,iVar44);
        iVar42 = *(int *)(lVar34 + 0x40);
        lVar53 = (longlong)iVar42;
        uVar63 = 0;
        local_358 = CONCAT44(local_358._4_4_,iVar42);
        local_348._0_8_ = lVar53;
        if (0 < iVar42) {
          lVar61 = 0;
          do {
            uVar43 = 0;
            if ((int)uVar63 < *(int *)(lVar34 + 0x40)) {
              uVar43 = ~uVar63 >> 0x1f;
            }
            if (uVar43 == 0) {
              bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar38) {
                pcVar17 = (code *)swi(3);
                pFVar51 = (FSkeletalMeshSceneProxy *)(*pcVar17)();
                return pFVar51;
              }
              lVar53 = local_348._0_8_;
            }
            lVar54 = *(longlong *)(lVar34 + 0x38);
            pdVar10 = (double *)(lVar61 + 0x30 + lVar54);
            dVar28 = *pdVar10;
            dVar29 = pdVar10[1];
            dVar11 = *(double *)(lVar61 + 0x40 + lVar54);
            iVar42 = (this->ShadowCapsuleData).ArrayNum;
            dVar27 = (double)CONCAT44(uVar68,uVar67);
            dVar25 = local_148 * dVar29 + local_168 * dVar28 + local_128 * dVar11 +
                     local_108 * dVar27;
            dVar26 = dStack_140 * dVar29 + dStack_160 * dVar28 + dStack_120 * dVar11 +
                     dStack_100 * dVar27;
            uVar69 = SUB84(dVar26,0);
            uVar70 = (undefined4)((ulonglong)dVar26 >> 0x20);
            dVar11 = local_158 * dVar28 + local_138 * dVar29 + local_118 * dVar11 +
                     local_f8 * dVar27;
            dVar27 = (double)*(float *)(lVar61 + 0x48 + lVar54);
            uVar71 = SUB84(dVar27,0);
            uVar72 = (undefined4)((ulonglong)dVar27 >> 0x20);
            local_1f0 = 0;
            uStack_1e8 = 0;
            local_1e0 = dVar35;
            dStack_1d8 = dVar36;
            if (iVar42 == (this->ShadowCapsuleData).ArrayMax) {
              iVar42 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x848,&pTVar8->AllocatorInstance,
                                  &(this->ShadowCapsuleData).ArrayMax);
              lVar53 = local_348._0_8_;
            }
            uVar67 = SUB84(__real_3ff0000000000000,0);
            uVar68 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
            (this->ShadowCapsuleData).ArrayNum = iVar42 + 1;
            uVar63 = uVar63 + 1;
            lVar54 = (longlong)iVar42;
            lVar61 = lVar61 + 0x50;
            lVar53 = lVar53 + -1;
            local_210._8_4_ = uVar69;
            local_210._0_8_ = dVar25;
            local_210._12_4_ = uVar70;
            local_348._0_8_ = lVar53;
            pFVar18 = (pTVar8->AllocatorInstance).Data;
            local_200._8_4_ = uVar71;
            local_200._0_8_ = dVar11;
            local_200._12_4_ = uVar72;
            *(int *)(pFVar18 + lVar54 * 0x48) = iVar44;
            auVar19._8_4_ = uVar69;
            auVar19._0_8_ = dVar25;
            auVar19._12_4_ = uVar70;
            *(undefined1 (*) [16])(pFVar18 + lVar54 * 0x48 + 8) = auVar19;
            auVar22._8_4_ = uVar71;
            auVar22._0_8_ = dVar11;
            auVar22._12_4_ = uVar72;
            *(undefined1 (*) [16])(pFVar18 + lVar54 * 0x48 + 0x18) = auVar22;
            *(undefined8 *)(pFVar18 + lVar54 * 0x48 + 0x28) = 0;
            *(undefined8 *)(pFVar18 + lVar54 * 0x48 + 0x28 + 8) = 0;
            *(double *)(pFVar18 + lVar54 * 0x48 + 0x38) = dVar35;
            *(double *)(pFVar18 + lVar54 * 0x48 + 0x38 + 8) = dVar36;
          } while (lVar53 != 0);
        }
        local_370 = *(uint *)(lVar34 + 0x60);
        local_360 = (FScriptContainerElement *)(longlong)(int)local_370;
        uVar63 = 0;
        if (0 < (int)local_370) {
          lVar53 = 0;
          do {
            uVar43 = 0;
            if ((int)uVar63 < *(int *)(lVar34 + 0x60)) {
              uVar43 = ~uVar63 >> 0x1f;
            }
            if ((uVar43 == 0) &&
               (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar38)) {
              pcVar17 = (code *)swi(3);
              pFVar51 = (FSkeletalMeshSceneProxy *)(*pcVar17)();
              return pFVar51;
            }
            lVar61 = *(longlong *)(lVar34 + 0x58);
            local_318 = (FScriptContainerElement *)(double)*(float *)(lVar61 + 100 + lVar53);
            pTVar55 = UE::Math::TRotator<double>::Quaternion
                                ((TRotator<double> *)(lVar61 + 0x48 + lVar53),&local_188);
            local_218 = CONCAT44(uVar74,uVar73);
            dVar25 = pTVar55->X;
            dVar26 = pTVar55->Y;
            dVar28 = pTVar55->Z;
            dVar29 = pTVar55->W;
            local_268._s_0.X = dVar35;
            local_268._s_0.Y = dVar36;
            dVar11 = dVar25 * SphylBasis.Z *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                     dVar29 * SphylBasis.Y +
                     dVar26 * SphylBasis.W *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                     dVar28 * SphylBasis.X *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
            dVar27 = dVar25 * SphylBasis.X *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                     dVar29 * SphylBasis.W +
                     dVar26 * SphylBasis.Y *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                     dVar28 * SphylBasis.Z *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
            local_248._8_4_ = SUB84(dVar11,0);
            local_248._0_8_ =
                 dVar25 * SphylBasis.W *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                 dVar29 * SphylBasis.X +
                 dVar26 * SphylBasis.Z *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                 dVar28 * SphylBasis.Y *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
            local_248._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
            local_238._8_4_ = SUB84(dVar27,0);
            local_238._0_8_ =
                 dVar25 * SphylBasis.Y *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                 dVar29 * SphylBasis.Z +
                 dVar26 * SphylBasis.X *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                 dVar28 * SphylBasis.W *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
            local_238._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
            local_228 = dVar35;
            dStack_220 = dVar36;
            local_268._s_0.Z = (double)CONCAT44(uVar74,uVar73);
            UE::Math::TQuat<double>::RotateVector
                      ((TQuat<double> *)local_248,(TVector<double> *)&local_2c8._s_0,
                       (TVector<double> *)&local_268._s_0);
            dVar25 = (double)CONCAT44(uVar74,uVar73);
            dVar27 = local_2c8._s_0.Y * local_148 + local_2c8._s_0.X * local_168 +
                     local_2c8._s_0.Z * local_128 + dVar25 * local_108;
            dVar11 = local_2c8._s_0.Y * dStack_140 + local_2c8._s_0.X * dStack_160 +
                     local_2c8._s_0.Z * dStack_120 + dVar25 * dStack_100;
            uVar67 = SUB84(dVar11,0);
            uVar68 = (undefined4)((ulonglong)dVar11 >> 0x20);
            local_348._8_4_ = uVar67;
            local_348._0_8_ = dVar27;
            local_348._12_4_ = uVar68;
            iVar42 = (this->ShadowCapsuleData).ArrayNum;
            pdVar10 = (double *)(lVar61 + 0x30 + lVar53);
            dVar29 = *pdVar10;
            dVar30 = pdVar10[1];
            dVar28 = local_2c8._s_0.Y * local_138 + local_2c8._s_0.X * local_158 +
                     local_2c8._s_0.Z * local_118 + dVar25 * local_f8;
            dVar11 = *(double *)(lVar61 + 0x40 + lVar53);
            local_308._8_4_ = SUB84(dVar30 * dStack_140,0);
            local_308._0_8_ = dVar30 * local_148;
            local_308._12_4_ = (int)((ulonglong)(dVar30 * dStack_140) >> 0x20);
            dVar25 = dVar30 * local_148 + dVar29 * local_168 + dVar11 * local_128 +
                     __real_3ff0000000000000 * local_108;
            dVar26 = (double)local_308._8_8_ + dVar29 * dStack_160 + dVar11 * dStack_120 +
                     __real_3ff0000000000000 * dStack_100;
            uVar71 = SUB84(dVar26,0);
            uVar72 = (undefined4)((ulonglong)dVar26 >> 0x20);
            dVar26 = dVar30 * local_138 + dVar29 * local_158 + dVar11 * local_118 +
                     __real_3ff0000000000000 * local_f8;
            dVar11 = (double)*(float *)(lVar61 + 0x60 + lVar53);
            uVar69 = SUB84(dVar11,0);
            uVar70 = (undefined4)((ulonglong)dVar11 >> 0x20);
            if (iVar42 == (this->ShadowCapsuleData).ArrayMax) {
              iVar42 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x848,&pTVar8->AllocatorInstance,
                                  &(this->ShadowCapsuleData).ArrayMax);
            }
            uVar66 = (undefined4)((ulonglong)local_318 >> 0x20);
            (this->ShadowCapsuleData).ArrayNum = iVar42 + 1;
            uVar73 = (undefined4)local_350;
            uVar74 = (undefined4)((ulonglong)local_350 >> 0x20);
            uVar63 = uVar63 + 1;
            lVar53 = lVar53 + 0x68;
            local_360 = local_360 + -1;
            lVar61 = (longlong)iVar42;
            local_1d0._8_4_ = uVar71;
            local_1d0._0_8_ = dVar25;
            local_1d0._12_4_ = uVar72;
            local_1c0._8_4_ = uVar69;
            local_1c0._0_8_ = dVar26;
            local_1c0._12_4_ = uVar70;
            pFVar18 = (pTVar8->AllocatorInstance).Data;
            *(int *)(pFVar18 + lVar61 * 0x48) = iVar44;
            auVar20._8_4_ = uVar71;
            auVar20._0_8_ = dVar25;
            auVar20._12_4_ = uVar72;
            *(undefined1 (*) [16])(pFVar18 + lVar61 * 0x48 + 8) = auVar20;
            auVar23._8_4_ = uVar69;
            auVar23._0_8_ = dVar26;
            auVar23._12_4_ = uVar70;
            *(undefined1 (*) [16])(pFVar18 + lVar61 * 0x48 + 0x18) = auVar23;
            auVar21._8_4_ = uVar67;
            auVar21._0_8_ = dVar27;
            auVar21._12_4_ = uVar68;
            *(undefined1 (*) [16])(pFVar18 + lVar61 * 0x48 + 0x28) = auVar21;
            local_1a0._8_4_ = (int)local_318;
            local_1a0._0_8_ = dVar28;
            local_1a0._12_4_ = uVar66;
            auVar24._8_4_ = (int)local_318;
            auVar24._0_8_ = dVar28;
            auVar24._12_4_ = uVar66;
            *(undefined1 (*) [16])(pFVar18 + lVar61 * 0x48 + 0x38) = auVar24;
            local_1b0._8_4_ = uVar67;
            local_1b0._0_8_ = dVar27;
            local_1b0._12_4_ = uVar68;
          } while (local_360 != (FScriptContainerElement *)0x0);
          local_360 = (FScriptContainerElement *)0x0;
          param_1 = local_2d8;
        }
        if ((0 < (int)local_358) || (0 < (int)local_370)) {
          local_368[0] = (ushort)iVar44;
          TArray<unsigned_short,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned_short>
                    (local_320,local_368);
        }
        uVar67 = SUB84(__real_3ff0000000000000,0);
        uVar68 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      }
      local_36c = local_36c + 1;
      local_338 = local_338 + 8;
      pFVar51 = local_2d0;
    } while ((int)local_36c < *(int *)((longlong)local_310 + 0x50));
  }
  if ((pFVar51->ShadowCapsuleBoneIndices).ArrayNum != 0) {
    AlgoImpl::
    IntroSortInternal<unsigned_short,int,FIdentityFunctor,TDereferenceWrapper<unsigned_short,TLess<void>_>_>
              ((ushort *)(pFVar51->ShadowCapsuleBoneIndices).AllocatorInstance.Data,
               (pFVar51->ShadowCapsuleBoneIndices).ArrayNum,local_373[0],(TLess<void> *)local_373);
  }
  FPrimitiveSceneProxy::EnableGPUSceneSupportFlags((FPrimitiveSceneProxy *)pFVar51);
  bVar38 = IsAllowingApproximateOcclusionQueries();
  if (bVar38) {
    bVar37 = *(byte *)((longlong)&pFVar51->_padding_ + 4);
    if (((bVar37 & 8) == 0) && (pFVar51->bRenderStatic == '\0')) {
      bVar39 = 0;
    }
    else {
      bVar39 = 8;
    }
    *(byte *)((longlong)&pFVar51->_padding_ + 4) = bVar37 & 0xf7 | bVar39;
  }
  pbVar6 = (byte *)((longlong)&pFVar51->_padding_ + 4);
  *pbVar6 = *pbVar6 & 0xf7;
  bVar37 = *(byte *)((longlong)&(pFVar51->MaterialRelevance).field0_0x0 + 4);
  *(byte *)&pFVar51->_padding_ = (byte)pFVar51->_padding_ | 0x20;
  cVar40 = *(char *)((longlong)&(pFVar51->MaterialRelevance).field0_0x0 + 7);
  pbVar6 = (byte *)((longlong)&pFVar51->_padding_ + 4);
  *pbVar6 = *pbVar6 | -((bVar37 & 0xc) != 0) & 8U;
  pbVar6 = (byte *)((longlong)&pFVar51->_padding_ + 5);
  *pbVar6 = *pbVar6 ^ (cVar40 * '\x02' ^ *(byte *)((longlong)&pFVar51->_padding_ + 5)) & 0x40;
  FPrimitiveSceneProxy::UpdateVisibleInLumenScene((FPrimitiveSceneProxy *)pFVar51);
  UpdateLumenCardsFromBounds(pFVar51);
  return pFVar51;
}

// FSkeletalMeshSceneProxy @ 1486237a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FSkeletalMeshSceneProxy * __thiscall
FSkeletalMeshSceneProxy::FSkeletalMeshSceneProxy
          (FSkeletalMeshSceneProxy *this,USkinnedMeshComponent *param_1,
          FSkeletalMeshRenderData *param_2)

{
  int iVar1;
  USkinnedAsset *pUVar2;
  FSkinnedMeshSceneProxyDesc *pFVar3;
  FSkinnedMeshSceneProxyDesc local_198;
  
  pUVar2 = USkinnedMeshComponent::GetSkinnedAsset(param_1);
  iVar1 = (**(code **)(*(longlong *)pUVar2 + 0x448))(pUVar2,0);
  iVar1 = USkinnedMeshComponent::GetValidMinLOD(param_1,iVar1);
  pFVar3 = FSkinnedMeshSceneProxyDesc::FSkinnedMeshSceneProxyDesc(&local_198,param_1);
  FSkeletalMeshSceneProxy(this,pFVar3,param_2,iVar1);
  if (local_198.MaterialSlotsOverlayMaterial.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.MaterialSlotsOverlayMaterial.AllocatorInstance.Data);
  }
  FPrimitiveSceneProxyDesc::~FPrimitiveSceneProxyDesc((FPrimitiveSceneProxyDesc *)&local_198);
  this->SkinnedMeshComponent = param_1;
  this->_padding_ = (longlong)&___7FSkeletalMeshSceneProxy__6B_;
  return this;
}

// ~FSkeletalMeshSceneProxy @ 148625460

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FSkeletalMeshSceneProxy::~FSkeletalMeshSceneProxy(FSkeletalMeshSceneProxy *this)

{
  FCardRepresentationData *pFVar1;
  ForElementType<FSetElementId> FVar2;
  FScriptContainerElement *pFVar3;
  FSkinningSceneExtensionProxy *pFVar4;
  
  this->_padding_ = (longlong)&___7FSkeletalMeshSceneProxy__6B_;
  pFVar1 = this->CardRepresentationData;
  if (pFVar1 != (FCardRepresentationData *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    this->CardRepresentationData = (FCardRepresentationData *)0x0;
  }
  (this->MaterialsInUse_GameThread).HashSize = 0;
  FVar2 = (this->MaterialsInUse_GameThread).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<UMaterialInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UMaterialInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->MaterialsInUse_GameThread).Elements);
  pFVar3 = (this->ShadowCapsuleBoneIndices).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->ShadowCapsuleData).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FSkeletalMeshSceneProxy::FLODSectionElements,int>
            ((FLODSectionElements *)(this->LODSections).AllocatorInstance.Data,
             (this->LODSections).ArrayNum);
  pFVar3 = (this->LODSections).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->MaterialSlotsOverlayMaterial).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar4 = (this->SceneExtensionProxy).Ptr;
  if (pFVar4 != (FSkinningSceneExtensionProxy *)0x0) {
    (**(code **)pFVar4->_padding_)(pFVar4,1);
  }
  FPrimitiveSceneProxy::~FPrimitiveSceneProxy((FPrimitiveSceneProxy *)this);
  return;
}

// operator() @ 1486296e0

void __thiscall
`FSkeletalMeshSceneProxy::UpdateMorphMaterialUsage_GameThread'::__l23::<lambda_1>::operator()
          (void *this)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  
  lVar8 = *(longlong *)((longlong)this + 0x60);
  uVar9 = 0;
  if (0 < *(int *)(lVar8 + 0x300)) {
    lVar11 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar9 < *(int *)(lVar8 + 0x300)) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar8 = *(longlong *)(lVar8 + 0x2f8);
      uVar7 = 0;
      iVar5 = *(int *)(lVar8 + 8 + lVar11);
      if (0 < iVar5) {
        lVar10 = 0;
        do {
          uVar4 = 0;
          if ((int)uVar7 < iVar5) {
            uVar4 = ~uVar7 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar1 = *(ulonglong *)(*(longlong *)(lVar8 + lVar11) + lVar10);
          uVar4 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
          uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
          if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
            lVar6 = (longlong)this + 0x38;
            if (*(longlong *)((longlong)this + 0x40) != 0) {
              lVar6 = *(longlong *)((longlong)this + 0x40);
            }
            iVar5 = *(int *)(lVar6 + (ulonglong)
                                     (*(int *)((longlong)this + 0x48) - 1U & (uVar4 >> 0x10 ^ uVar4)
                                     ) * 4);
            if (iVar5 != -1) {
              do {
                if (*(ulonglong *)(*(longlong *)this + (longlong)iVar5 * 0x10) == uVar1) {
                  *(undefined8 *)(*(longlong *)(lVar8 + lVar11) + lVar10) =
                       *(undefined8 *)((longlong)this + 0x50);
                  break;
                }
                iVar5 = *(int *)(*(longlong *)this + 8 + (longlong)iVar5 * 0x10);
              } while (iVar5 != -1);
            }
          }
          iVar5 = *(int *)(lVar8 + 8 + lVar11);
          uVar7 = uVar7 + 1;
          lVar10 = lVar10 + 0x18;
        } while ((int)uVar7 < iVar5);
      }
      lVar8 = *(longlong *)((longlong)this + 0x60);
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 0x10;
    } while ((int)uVar9 < *(int *)(lVar8 + 0x300));
  }
  uVar9 = *(uint *)(lVar8 + 0x2f0);
  *(ulonglong *)(lVar8 + 0x2f0) =
       *(ulonglong *)(lVar8 + 0x2f0) | *(ulonglong *)((longlong)this + 0x58);
  uVar7 = *(uint *)((longlong)this + 0x58) >> 0x12;
  uVar9 = uVar9 >> 0x12;
  if (((byte)uVar7 & 0x3f) < ((byte)uVar9 & 0x3f)) {
    uVar7 = uVar9;
  }
  uVar9 = (uint)*(undefined8 *)(lVar8 + 0x2f0);
  *(uint *)(lVar8 + 0x2f0) = (uVar7 << 0x12 ^ uVar9) & 0xfc0000 ^ uVar9;
  return;
}

// CanBeOccluded @ 148633090

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FSkeletalMeshSceneProxy::CanBeOccluded(FSkeletalMeshSceneProxy *this)

{
  bool bVar1;
  
  if (((*(byte *)((longlong)&(this->MaterialRelevance).field0_0x0 + 7) & 4) == 0) &&
     ((*(byte *)((longlong)&(this->MaterialRelevance).field0_0x0 + 5) & 2) == 0)) {
    bVar1 = FPrimitiveSceneProxy::ShouldRenderCustomDepth((FPrimitiveSceneProxy *)this);
    if (!bVar1) {
      return true;
    }
  }
  return false;
}

// CreateBaseMeshBatch @ 148635620

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
FSkeletalMeshSceneProxy::CreateBaseMeshBatch
          (FSkeletalMeshSceneProxy *this,FSceneView *param_1,FSkeletalMeshLODRenderData *param_2,
          int param_3,int param_4,FSectionElementInfo *param_5,FMeshBatch *param_6,
          ESkinVertexFactoryMode param_7)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FMeshBatchElement> FVar2;
  code *pcVar3;
  bool bVar4;
  FVertexFactory *pFVar5;
  FMaterialRenderProxy *pFVar6;
  uint uVar7;
  
  uVar7 = 0;
  if (param_4 < (param_2->RenderSections).ArrayNum) {
    uVar7 = (uint)~param_4 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = (param_2->RenderSections).AllocatorInstance.Data;
  if ((pFVar1[(longlong)param_4 * 0x118 + 0x110] == (FScriptContainerElement)0x0) ||
     (param_7 != RayTracing)) {
    pFVar5 = (FVertexFactory *)
             (**(code **)(this->MeshObject->_padding_ + 0x28))
                       (this->MeshObject,param_1,param_3,param_4,param_7);
  }
  else {
    pFVar5 = (FVertexFactory *)
             (**(code **)(this->MeshObject->_padding_ + 0x30))(this->MeshObject,param_3,param_4,1);
  }
  param_6->VertexFactory = pFVar5;
  pFVar6 = (FMaterialRenderProxy *)(**(code **)(param_5->Material->_padding_ + 0x310))();
  param_6->MaterialRenderProxy = pFVar6;
  param_6->SegmentIndex = param_4;
  if ((param_5->bEnableShadowCasting == false) || ((this->_padding_ & 0x20000000000) == 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0x800000;
  }
  param_6->CastRayTracedShadow = 0;
  *(uint *)&param_6->field_0xd4 = *(uint *)&param_6->field_0xd4 | uVar7;
  if ((param_6->Elements).ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar2 = (param_6->Elements).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<FMeshBatchElement>)0x0) {
    param_6 = (FMeshBatch *)FVar2;
  }
  *(undefined4 *)((longlong)param_6 + 0x58) =
       *(undefined4 *)(pFVar1 + (longlong)param_4 * 0x118 + 4);
  if ((param_2->MultiSizeIndexContainer).IndexBuffer == (FRawStaticIndexBuffer16or32Interface *)0x0)
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IndexBuffer != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                       ,0x56,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(FRawStaticIndexBuffer16or32Interface **)((longlong)param_6 + 0x18) =
       (param_2->MultiSizeIndexContainer).IndexBuffer;
  *(undefined4 *)((longlong)param_6 + 0x68) =
       *(undefined4 *)(pFVar1 + (longlong)param_4 * 0x118 + 0x10);
  *(int *)((longlong)param_6 + 0x6c) =
       *(int *)(pFVar1 + (longlong)param_4 * 0x118 + 0x48) +
       *(int *)(pFVar1 + (longlong)param_4 * 0x118 + 0x10) + -1;
  *(longlong *)param_6 = this->_padding_;
  *(undefined4 *)((longlong)param_6 + 0x5c) =
       *(undefined4 *)(pFVar1 + (longlong)param_4 * 0x118 + 8);
  return;
}

// CreateRenderThreadResources @ 148635df0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSkeletalMeshSceneProxy::CreateRenderThreadResources
          (FSkeletalMeshSceneProxy *this,FRHICommandListBase *param_1)

{
  FSkinningSceneExtensionProxy *pFVar1;
  bool bVar2;
  
  bVar2 = IsRayTracingAllowed();
  if (bVar2) {
    this->RayTracingGeometryGroupHandle = this->RenderData->RayTracingGeometryGroupHandle;
  }
  pFVar1 = (this->SceneExtensionProxy).Ptr;
  if (pFVar1 != (FSkinningSceneExtensionProxy *)0x0) {
    (**(code **)(pFVar1->_padding_ + 8))(pFVar1,this->_padding_,param_1);
  }
  return;
}

// DebugDrawPhysicsAsset @ 148636530

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSkeletalMeshSceneProxy::DebugDrawPhysicsAsset
          (FSkeletalMeshSceneProxy *this,int param_1,FMeshElementCollector *param_2,
          FEngineShowFlags *param_3)

{
  UPhysicsAsset *pUVar1;
  code *pcVar2;
  bool bVar3;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  FReferenceSkeleton *pFVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStackY_178 [32];
  TVector<double>_u_0 local_138;
  TMatrix<double> local_118;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_118.M[0][0] = (double)this->_padding_;
  local_118.M[0][1] = (double)this->_padding_;
  local_118.M[0][2] = (double)this->_padding_;
  local_118.M[0][3] = (double)this->_padding_;
  local_118.M[1][0] = (double)this->_padding_;
  local_118.M[1][1] = (double)this->_padding_;
  local_118.M[1][2] = (double)this->_padding_;
  local_118.M[1][3] = (double)this->_padding_;
  local_118.M[2][0] = (double)this->_padding_;
  local_118.M[2][1] = (double)this->_padding_;
  local_118.M[2][2] = (double)this->_padding_;
  local_118.M[2][3] = (double)this->_padding_;
  local_118.M[3][0] = (double)this->_padding_;
  local_118.M[3][1] = (double)this->_padding_;
  local_118.M[3][2] = (double)this->_padding_;
  local_118.M[3][3] = (double)this->_padding_;
  UE::Math::TMatrix<double>::ExtractScaling
            (&local_118,(TVector<double> *)&local_138._s_0,__real_3e45798ee0000000);
  uVar6 = SUB84(local_138._s_0.X,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar7 = (uint)((ulonglong)local_138._0_8_ >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar7,uVar6) &&
        (double)CONCAT44(uVar7,uVar6) != __real_3f1a36e2e0000000) ||
      (uVar6 = SUB84(local_138._s_0.Y,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar7 = (uint)((ulonglong)local_138._8_8_ >> 0x20) &
              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar7,uVar6) &&
      (double)CONCAT44(uVar7,uVar6) != __real_3f1a36e2e0000000)) ||
     (uVar6 = SUB84(local_138._s_0.Z,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar7 = (uint)((ulonglong)local_138._16_8_ >> 0x20) &
             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar7,uVar6) &&
     (double)CONCAT44(uVar7,uVar6) != __real_3f1a36e2e0000000)) {
    UE::Math::TTransform<double>::SetFromMatrix(&local_98,(TMatrix<double> *)&this->_padding_);
    pTVar4 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
             (**(code **)(this->MeshObject->_padding_ + 0x60))();
    if (pTVar4 != (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      if ((this->PhysicsAssetForDebug == (UPhysicsAsset *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("PhysicsAssetForDebug",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshSceneProxy.cpp"
                             ,0x573,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((param_3->Collision != 0) && ((this->_padding_ & 0x20000000) != 0)) {
        pUVar1 = this->PhysicsAssetForDebug;
        pFVar5 = (FReferenceSkeleton *)(**(code **)(*(longlong *)this->SkinnedAsset + 800))();
        UPhysicsAsset::GetCollisionMesh
                  (pUVar1,param_1,param_2,pFVar5,pTVar4,&local_98,(TVector<double> *)&local_138._s_0
                  );
      }
      if (param_3->Constraints != 0) {
        pUVar1 = this->PhysicsAssetForDebug;
        pFVar5 = (FReferenceSkeleton *)(**(code **)(*(longlong *)this->SkinnedAsset + 800))();
        UPhysicsAsset::DrawConstraints
                  (pUVar1,param_1,param_2,pFVar5,pTVar4,&local_98,(float)local_138._s_0.X);
      }
    }
  }
  return;
}

// DebugDrawSkeleton @ 148636750

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSkeletalMeshSceneProxy::DebugDrawSkeleton
          (FSkeletalMeshSceneProxy *this,int param_1,FMeshElementCollector *param_2,
          FEngineShowFlags *param_3)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  TConsoleVariableData<int> *pTVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FPrimitiveDrawInterface *pFVar11;
  longlong *plVar12;
  longlong lVar13;
  USkinnedMeshComponent *pUVar14;
  USkinnedMeshComponent *this_00;
  FName FVar15;
  FReferenceSkeleton *this_01;
  TOptional<FLinearColor> *pTVar16;
  uint uVar17;
  undefined1 auStackY_2c8 [32];
  FWeakObjectPtr local_288;
  longlong local_280;
  longlong local_278;
  FEngineShowFlags *local_270;
  longlong local_268;
  TVector<double>_u_0 local_260;
  TVector<double>_u_0 local_248;
  FLinearColor_u_0 local_230;
  undefined1 local_220 [8];
  undefined1 local_218 [24];
  double dStack_200;
  double local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  double local_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  double local_1b0;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  TTransform<double> local_e8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  local_270 = param_3;
  lVar10 = (**(code **)(this->MeshObject->_padding_ + 0x60))();
  if (lVar10 != 0) {
    UE::Math::TTransform<double>::SetFromMatrix(&local_e8,(TMatrix<double> *)&this->_padding_);
    pFVar11 = FMeshElementCollector::GetPDI(param_2,param_1);
    plVar12 = (longlong *)(**(code **)(this->MeshObject->_padding_ + 0x60))();
    lVar10 = (**(code **)(*(longlong *)this->SkinnedAsset + 800))();
    fVar4 = __real_437f0000;
    fVar3 = __real_40800000;
    fVar2 = __real_3f800000;
    uVar17 = 0;
    if (0 < (int)plVar12[1]) {
      local_268 = (longlong)*(int *)(lVar10 + 0x28);
      local_280 = 0;
      local_278 = 0;
      do {
        lVar10 = local_280;
        if (local_268 == local_278) {
          return;
        }
        if ((this->SkinnedMeshComponent == (USkinnedMeshComponent *)0x0) ||
           (bVar6 = TWeakObjectPtr<USkinnedMeshComponent,FWeakObjectPtr>::UEOpEquals
                              (&this->SkinnedMeshComponent->LeaderPoseComponent,(void *)0x0), bVar6)
           ) {
          this_01 = (FReferenceSkeleton *)(**(code **)(*(longlong *)this->SkinnedAsset + 800))();
          uVar8 = FReferenceSkeleton::GetParentIndex(this_01,uVar17);
          uVar7 = uVar17;
LAB_148636983:
          FLinearColor::MakeFromHSV8
                    ((FLinearColor *)local_218,
                     (uchar)(int)(((float)((int)this->_padding_ * 0xbb38435 + 0x3619636bU >> 9 |
                                          0x3f800000) - fVar2) * fVar4),0xff,0xff);
          pTVar16 = &this->DebugDrawColor;
          if ((this->DebugDrawColor).bIsSet == false) {
            pTVar16 = (TOptional<FLinearColor> *)local_218;
          }
          local_230._0_8_ = *(undefined8 *)&(pTVar16->TypedValue).field0_0x0;
          local_230._8_8_ = *(undefined8 *)((longlong)&(pTVar16->TypedValue).field0_0x0 + 8);
          uVar9 = 0;
          if ((int)uVar7 < (int)plVar12[1]) {
            uVar9 = ~uVar7 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          local_1a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_1a8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          local_1a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_1a8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_1a8.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_1a8.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_1a8.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_1a8.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_1a8.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_1a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_1a8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          local_1a8.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_1a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_1a8.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          UE::Math::TTransform<double>::Multiply
                    (&local_1a8,(TTransform<double> *)((longlong)(int)uVar7 * 0x60 + *plVar12),
                     &local_e8);
          if ((int)uVar8 < 0) {
            local_1d8 = local_e8.Translation.XY.m128d_f64[0];
            dStack_1d0 = local_e8.Translation.XY.m128d_f64[1];
            local_1c8 = local_e8.Translation.ZW.m128d_f64[0];
            local_248._s_0.X = local_e8.Translation.XY.m128d_f64[0];
            local_248._s_0.Y = local_e8.Translation.XY.m128d_f64[1];
            local_248._s_0.Z = local_e8.Translation.ZW.m128d_f64[0];
            local_1c0 = local_1a8.Translation.XY.m128d_f64[0]._0_4_;
            uStack_1bc = local_1a8.Translation.XY.m128d_f64[0]._4_4_;
            uStack_1b8 = local_1a8.Translation.XY.m128d_f64[1]._0_4_;
            uStack_1b4 = local_1a8.Translation.XY.m128d_f64[1]._4_4_;
            local_1b0 = local_1a8.Translation.ZW.m128d_f64[0];
          }
          else {
            uVar7 = 0;
            if ((int)uVar8 < (int)plVar12[1]) {
              uVar7 = ~uVar8 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            local_148.Rotation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[0];
            local_148.Rotation.XY.m128d_f64[1] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[1];
            local_148.Rotation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[2];
            local_148.Rotation.ZW.m128d_f64[1] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[3];
            local_148.Translation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_148.Translation.ZW.m128d_f64[1] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[3];
            local_148.Translation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
            local_148.Translation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_148.Translation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
            local_148.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
            ;
            local_148.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3]
            ;
            local_148.Scale3D.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
            local_148.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
            ;
            local_148.Scale3D.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
            UE::Math::TTransform<double>::Multiply
                      (&local_148,(TTransform<double> *)((longlong)(int)uVar8 * 0x60 + *plVar12),
                       &local_e8);
            local_218._16_8_ = local_148.Translation.XY.m128d_f64[0];
            dStack_200 = local_148.Translation.XY.m128d_f64[1];
            local_1f8 = local_148.Translation.ZW.m128d_f64[0];
            local_248._s_0.X = local_148.Translation.XY.m128d_f64[0];
            local_248._s_0.Y = local_148.Translation.XY.m128d_f64[1];
            local_248._s_0.Z = local_148.Translation.ZW.m128d_f64[0];
            local_1f0 = local_1a8.Translation.XY.m128d_f64[0]._0_4_;
            uStack_1ec = local_1a8.Translation.XY.m128d_f64[0]._4_4_;
            uStack_1e8 = local_1a8.Translation.XY.m128d_f64[1]._0_4_;
            uStack_1e4 = local_1a8.Translation.XY.m128d_f64[1]._4_4_;
            local_1e0 = local_1a8.Translation.ZW.m128d_f64[0];
          }
          pTVar5 = CVarDebugDrawSimpleBones.Ref;
          local_260._s_0.Z = local_1a8.Translation.ZW.m128d_f64[0];
          local_260._0_4_ = local_1a8.Translation.XY.m128d_f64[0]._0_4_;
          local_260._4_4_ = local_1a8.Translation.XY.m128d_f64[0]._4_4_;
          local_260._8_4_ = local_1a8.Translation.XY.m128d_f64[1]._0_4_;
          local_260._12_4_ = local_1a8.Translation.XY.m128d_f64[1]._4_4_;
          if ((local_270->Bones != 0) || (this->bDrawDebugSkeleton != '\0')) {
            bVar6 = IsInParallelRenderingThread();
            if ((!bVar6) &&
               (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<6409875433831007955>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                   ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            if (pTVar5->ShadowedValue[1] == 0) {
              SkeletalDebugRendering::DrawWireBone
                        (pFVar11,(TVector<double> *)&local_248._s_0,
                         (TVector<double> *)&local_260._s_0,(FLinearColor *)&local_230._s_0,
                         SDPG_Foreground,fVar2);
            }
            else {
              (**(code **)(pFVar11->_padding_ + 0x30))();
            }
            pTVar5 = CVarDebugDrawBoneAxes.Ref;
            bVar6 = IsInParallelRenderingThread();
            if ((!bVar6) &&
               (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<6409875433831007955>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                   ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            if (pTVar5->ShadowedValue[1] != 0) {
              SkeletalDebugRendering::DrawAxes(pFVar11,&local_1a8,SDPG_Foreground,0.0,fVar3);
            }
          }
        }
        else {
          local_288 = (this->SkinnedMeshComponent->LeaderPoseComponent).WeakPtr;
          lVar13 = (**(code **)(*(longlong *)this->SkinnedAsset + 800))();
          uVar7 = 0;
          if ((int)uVar17 < *(int *)(lVar13 + 0x28)) {
            uVar7 = ~uVar17 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          FVar15 = *(FName *)(lVar10 + *(longlong *)(lVar13 + 0x20));
          pUVar14 = (USkinnedMeshComponent *)FWeakObjectPtr::Get(&local_288);
          uVar7 = USkinnedMeshComponent::GetBoneIndex(pUVar14,FVar15);
          pUVar14 = (USkinnedMeshComponent *)FWeakObjectPtr::Get(&local_288);
          this_00 = (USkinnedMeshComponent *)FWeakObjectPtr::Get(&local_288);
          FVar15 = USkinnedMeshComponent::GetParentBone(this_00,(FName)local_220);
          uVar8 = USkinnedMeshComponent::GetBoneIndex(pUVar14,*(FName *)FVar15);
          lVar10 = local_280;
          if (-1 < (int)uVar7) goto LAB_148636983;
        }
        local_280 = lVar10 + 0xc;
        local_278 = local_278 + 1;
        uVar17 = uVar17 + 1;
      } while ((int)uVar17 < (int)plVar12[1]);
    }
  }
  return;
}

// DestroyRenderThreadResources @ 148637ce0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FSkeletalMeshSceneProxy::DestroyRenderThreadResources(FSkeletalMeshSceneProxy *this)

{
  FSkinningSceneExtensionProxy *pFVar1;
  
  pFVar1 = (this->SceneExtensionProxy).Ptr;
  if (pFVar1 != (FSkinningSceneExtensionProxy *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148637cef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x10))();
    return;
  }
  return;
}

// DrawStaticElements @ 1486386d0

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
/* WARNING: Enum "ESkinVertexColorChannel": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
FSkeletalMeshSceneProxy::DrawStaticElements
          (FSkeletalMeshSceneProxy *this,FStaticPrimitiveDrawInterface *param_1)

{
  FSectionElementInfo *pFVar1;
  FSkeletalMeshRenderData *pFVar2;
  FSkeletalMeshLODRenderData *pFVar3;
  FSkeletalMeshObject *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  ESceneDepthPriorityGroup EVar8;
  FVertexFactory *pFVar9;
  FMeshBatch *pFVar10;
  ForElementType<FMeshBatchElement> FVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  FSkelMeshRenderSection *pFVar15;
  UMaterialInterface *pUVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  undefined4 uVar22;
  undefined1 auStackY_388 [32];
  FMeshBatch local_300;
  FMeshBatch local_220;
  FMeshBatch local_140;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_388;
  if ((this->MeshObject != (FSkeletalMeshObject *)0x0) && ((this->_padding_ & 0x2000) == 0)) {
    EVar8 = (**(code **)(this->_padding_ + 0x160))();
    uVar18 = (ulonglong)this->ClampedLODIndex;
    if (this->ClampedLODIndex < (int)(uint)this->NumLODs) {
      lVar19 = uVar18 * 8;
      lVar14 = uVar18 << 4;
      lVar20 = uVar18 << 5;
      do {
        pFVar2 = this->RenderData;
        uVar17 = (uint)uVar18;
        uVar12 = ~uVar17 >> 0x1f;
        uVar13 = 0;
        if ((int)uVar17 < (pFVar2->LODRenderData).Array.ArrayNum) {
          uVar13 = uVar12;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar3 = *(FSkeletalMeshLODRenderData **)
                  ((pFVar2->LODRenderData).Array.AllocatorInstance.Data + lVar19);
        if ((0 < (this->LODSections).ArrayNum) &&
           ((pFVar3->StaticVertexBuffers).PositionVertexBuffer.NumVertices != 0)) {
          pFVar4 = this->MeshObject;
          if (((int)uVar17 < 0) || ((pFVar4->LODInfo).ArrayNum <= (int)uVar17)) {
            uVar22 = 0;
          }
          else {
            uVar13 = 0;
            if ((int)uVar17 < (pFVar4->LODInfo).ArrayNum) {
              uVar13 = uVar12;
            }
            if ((uVar13 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar22 = *(undefined4 *)((pFVar4->LODInfo).AllocatorInstance.Data + lVar20 + 0x10);
          }
          uVar13 = 0;
          if ((int)uVar17 < (this->LODSections).ArrayNum) {
            uVar13 = uVar12;
          }
          if ((uVar13 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar5 = (this->LODSections).AllocatorInstance.Data;
          if ((*(int *)(pFVar5 + lVar14 + 8) != (pFVar3->RenderSections).ArrayNum) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("LODSection.SectionElements.Num() == LODData.RenderSections.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshSceneProxy.cpp"
                                 ,0x209,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar13 = 0;
          while ((((int)uVar13 < (pFVar3->RenderSections).ArrayNum && (-1 < (int)uVar13)) &&
                 ((int)uVar13 < *(int *)(pFVar5 + lVar14 + 8)))) {
            if (((int)uVar13 < 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar21 = (longlong)(int)uVar13;
            pFVar15 = (FSkelMeshRenderSection *)
                      ((pFVar3->RenderSections).AllocatorInstance.Data + lVar21 * 0x118);
            pFVar9 = (FVertexFactory *)
                     (**(code **)(this->MeshObject->_padding_ + 0x30))
                               (this->MeshObject,uVar18 & 0xffffffff,uVar13,0);
            if ((pFVar9 == (FVertexFactory *)0x0) || (pFVar15->NumTriangles == 0)) {
LAB_148638b96:
              uVar13 = uVar13 + 1;
            }
            else {
              uVar12 = 0;
              if ((int)uVar13 < *(int *)(pFVar5 + lVar14 + 8)) {
                uVar12 = ~uVar13 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pFVar1 = (FSectionElementInfo *)(*(longlong *)(pFVar5 + lVar14) + lVar21 * 0x18);
              bVar7 = FSkeletalMeshObject::IsMaterialHidden
                                (this->MeshObject,uVar17,
                                 *(int *)(*(longlong *)(pFVar5 + lVar14) + 0xc + lVar21 * 0x18));
              if ((bVar7) || (pFVar15->bDisabled != false)) goto LAB_148638b96;
              FMeshBatch::FMeshBatch(&local_220);
              GetStaticMeshBatch(this,pFVar3,uVar17,pFVar15,uVar13,pFVar1,pFVar9,EVar8,&local_220);
              (**(code **)((longlong)*param_1 + 0x18))(param_1,&local_220,uVar22);
              pUVar16 = pFVar1->PerSectionOverlayMaterial;
              if ((pUVar16 != (UMaterialInterface *)0x0) ||
                 (pUVar16 = this->OverlayMaterial, pUVar16 != (UMaterialInterface *)0x0)) {
                FMeshBatch::FMeshBatch(&local_300);
                pFVar10 = FMeshBatch::FMeshBatch(&local_140,&local_220);
                FMeshBatch::operator=(&local_300,pFVar10);
                FVar11 = (ForElementType<FMeshBatchElement>)&local_140;
                if (local_140.Elements.AllocatorInstance.SecondaryData !=
                    (ForElementType<FMeshBatchElement>)0x0) {
                  FVar11 = local_140.Elements.AllocatorInstance.SecondaryData;
                }
                DestructItems<FMeshBatchElement,int>
                          ((FMeshBatchElement *)FVar11,local_140.Elements.ArrayNum);
                if (local_140.Elements.AllocatorInstance.SecondaryData !=
                    (ForElementType<FMeshBatchElement>)0x0) {
                  FMemory::Free((void *)local_140.Elements.AllocatorInstance.SecondaryData);
                }
                local_300.bOverlayMaterial = 1;
                local_300.bSelectable = 0;
                local_300.CastShadow = 0;
                local_300.MaterialRenderProxy =
                     (FMaterialRenderProxy *)(**(code **)(pUVar16->_padding_ + 0x310))(pUVar16);
                local_300.MeshIdInPrimitive =
                     local_300.MeshIdInPrimitive + (short)(pFVar3->RenderSections).ArrayNum;
                (**(code **)((longlong)*param_1 + 0x18))
                          (param_1,&local_300,this->OverlayMaterialMaxDrawDistance);
                FVar11 = (ForElementType<FMeshBatchElement>)&local_300;
                if (local_300.Elements.AllocatorInstance.SecondaryData !=
                    (ForElementType<FMeshBatchElement>)0x0) {
                  FVar11 = local_300.Elements.AllocatorInstance.SecondaryData;
                }
                DestructItems<FMeshBatchElement,int>
                          ((FMeshBatchElement *)FVar11,local_300.Elements.ArrayNum);
                if (local_300.Elements.AllocatorInstance.SecondaryData !=
                    (ForElementType<FMeshBatchElement>)0x0) {
                  FMemory::Free((void *)local_300.Elements.AllocatorInstance.SecondaryData);
                }
              }
              FVar11 = (ForElementType<FMeshBatchElement>)&local_220;
              if (local_220.Elements.AllocatorInstance.SecondaryData !=
                  (ForElementType<FMeshBatchElement>)0x0) {
                FVar11 = local_220.Elements.AllocatorInstance.SecondaryData;
              }
              DestructItems<FMeshBatchElement,int>
                        ((FMeshBatchElement *)FVar11,local_220.Elements.ArrayNum);
              if (local_220.Elements.AllocatorInstance.SecondaryData ==
                  (ForElementType<FMeshBatchElement>)0x0) goto LAB_148638b96;
              FMemory::Free((void *)local_220.Elements.AllocatorInstance.SecondaryData);
              uVar13 = uVar13 + 1;
            }
          }
        }
        lVar20 = lVar20 + 0x20;
        lVar19 = lVar19 + 8;
        lVar14 = lVar14 + 0x10;
        uVar18 = (ulonglong)(uVar17 + 1);
      } while ((int)(uVar17 + 1) < (int)(uint)this->NumLODs);
    }
  }
  return;
}

// GetCachedGeometry @ 148646490

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __thiscall
FSkeletalMeshSceneProxy::GetCachedGeometry
          (FSkeletalMeshSceneProxy *this,FRDGBuilder *param_1,FCachedGeometry *param_2)

{
  char cVar1;
  
  if (this->MeshObject != (FSkeletalMeshObject *)0x0) {
    cVar1 = (**(code **)(this->MeshObject->_padding_ + 0x90))();
    if (cVar1 != '\0') {
      return true;
    }
  }
  return false;
}

// GetCachedRayTracingInstance @ 1486464d0

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
/* WARNING: Enum "ESkinVertexColorChannel": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

ERayTracingPrimitiveFlags __thiscall
FSkeletalMeshSceneProxy::GetCachedRayTracingInstance
          (FSkeletalMeshSceneProxy *this,FRayTracingInstance *param_1)

{
  FSectionElementInfo *pFVar1;
  FSkeletalMeshRenderData *pFVar2;
  FSkeletalMeshLODRenderData *pFVar3;
  code *pcVar4;
  ERayTracingPrimitiveFlags EVar5;
  bool bVar6;
  ESceneDepthPriorityGroup EVar7;
  int iVar8;
  FVertexFactory *pFVar9;
  FMeshBatch *pFVar10;
  ForElementType<FMeshBatchElement> FVar11;
  uint uVar12;
  ulonglong uVar13;
  FSkelMeshRenderSection *pFVar14;
  UMaterialInterface *pUVar15;
  uint uVar16;
  longlong lVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  undefined1 auStackY_368 [32];
  uint local_314;
  FMeshBatch local_2e0;
  FMeshBatch local_200;
  FMeshBatch local_120;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_368;
  EVar5 = FPrimitiveSceneProxy::GetCachedRayTracingInstance((FPrimitiveSceneProxy *)this,param_1);
  if ((EVar5 & (Dynamic|Skip|Exclude|UnsupportedProxyType)) == None) {
    EVar7 = (**(code **)(this->_padding_ + 0x160))(this);
    local_314 = this->ClampedLODIndex;
    uVar13 = (ulonglong)(int)local_314;
    if ((int)local_314 < (int)(uint)this->NumLODs) {
      lVar19 = uVar13 * 8;
      lVar17 = uVar13 << 4;
      do {
        pFVar2 = this->RenderData;
        uVar12 = (uint)uVar13;
        uVar16 = 0;
        if ((int)uVar12 < (pFVar2->LODRenderData).Array.ArrayNum) {
          uVar16 = ~uVar12 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          EVar5 = (*pcVar4)();
          return EVar5;
        }
        iVar8 = (this->LODSections).ArrayNum;
        pFVar3 = *(FSkeletalMeshLODRenderData **)
                  ((pFVar2->LODRenderData).Array.AllocatorInstance.Data + lVar19);
        if ((0 < iVar8) && ((pFVar3->StaticVertexBuffers).PositionVertexBuffer.NumVertices != 0)) {
          uVar16 = 0;
          if ((int)uVar12 < iVar8) {
            uVar16 = ~uVar12 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            EVar5 = (*pcVar4)();
            return EVar5;
          }
          pFVar18 = (this->LODSections).AllocatorInstance.Data + lVar17;
          if ((*(int *)(pFVar18 + 8) != (pFVar3->RenderSections).ArrayNum) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("LODSection.SectionElements.Num() == LODData.RenderSections.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshSceneProxy.cpp"
                                 ,0x408,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            EVar5 = (*pcVar4)();
            return EVar5;
          }
          uVar16 = 0;
          while (((uVar12 = (uint)uVar13, (int)uVar16 < (pFVar3->RenderSections).ArrayNum &&
                  (-1 < (int)uVar16)) && ((int)uVar16 < *(int *)(pFVar18 + 8)))) {
            if (((int)uVar16 < 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              EVar5 = (*pcVar4)();
              return EVar5;
            }
            pFVar14 = (FSkelMeshRenderSection *)
                      ((pFVar3->RenderSections).AllocatorInstance.Data +
                      (longlong)(int)uVar16 * 0x118);
            pFVar9 = (FVertexFactory *)
                     (**(code **)(this->MeshObject->_padding_ + 0x30))
                               (this->MeshObject,local_314,uVar16,0);
            if ((pFVar9 == (FVertexFactory *)0x0) || (pFVar14->NumTriangles == 0)) {
              uVar13 = (ulonglong)local_314;
              uVar16 = uVar16 + 1;
            }
            else {
              uVar12 = 0;
              if ((int)uVar16 < *(int *)(pFVar18 + 8)) {
                uVar12 = ~uVar16 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                EVar5 = (*pcVar4)();
                return EVar5;
              }
              uVar13 = (ulonglong)local_314;
              pFVar1 = (FSectionElementInfo *)(*(longlong *)pFVar18 + (longlong)(int)uVar16 * 0x18);
              bVar6 = FSkeletalMeshObject::IsMaterialHidden
                                (this->MeshObject,local_314,pFVar1->UseMaterialIndex);
              if ((bVar6) || (pFVar14->bDisabled != false)) {
                uVar16 = uVar16 + 1;
              }
              else {
                FMeshBatch::FMeshBatch(&local_200);
                GetStaticMeshBatch(this,pFVar3,local_314,pFVar14,uVar16,pFVar1,pFVar9,EVar7,
                                   &local_200);
                pFVar10 = (FMeshBatch *)(param_1->Materials).AllocatorInstance.Data;
                if (((pFVar10 <= &local_200) &&
                    (&local_200 < pFVar10 + (param_1->Materials).ArrayMax)) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  EVar5 = (*pcVar4)();
                  return EVar5;
                }
                iVar8 = (param_1->Materials).ArrayNum;
                if (iVar8 == (param_1->Materials).ArrayMax) {
                  iVar8 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x8e0,&(param_1->Materials).AllocatorInstance,
                                     &(param_1->Materials).ArrayMax);
                }
                (param_1->Materials).ArrayNum = iVar8 + 1;
                FMeshBatch::FMeshBatch
                          ((FMeshBatch *)
                           ((param_1->Materials).AllocatorInstance.Data + (longlong)iVar8 * 0xe0),
                           &local_200);
                pUVar15 = pFVar1->PerSectionOverlayMaterial;
                if ((pUVar15 != (UMaterialInterface *)0x0) ||
                   (pUVar15 = this->OverlayMaterial, pUVar15 != (UMaterialInterface *)0x0)) {
                  FMeshBatch::FMeshBatch(&local_2e0);
                  pFVar10 = FMeshBatch::FMeshBatch(&local_120,&local_200);
                  FMeshBatch::operator=(&local_2e0,pFVar10);
                  FVar11 = (ForElementType<FMeshBatchElement>)&local_120;
                  if (local_120.Elements.AllocatorInstance.SecondaryData !=
                      (ForElementType<FMeshBatchElement>)0x0) {
                    FVar11 = local_120.Elements.AllocatorInstance.SecondaryData;
                  }
                  DestructItems<FMeshBatchElement,int>
                            ((FMeshBatchElement *)FVar11,local_120.Elements.ArrayNum);
                  if (local_120.Elements.AllocatorInstance.SecondaryData !=
                      (ForElementType<FMeshBatchElement>)0x0) {
                    FMemory::Free((void *)local_120.Elements.AllocatorInstance.SecondaryData);
                  }
                  local_2e0.bOverlayMaterial = 1;
                  local_2e0.bSelectable = 0;
                  local_2e0.CastShadow = 0;
                  local_2e0.MaterialRenderProxy =
                       (FMaterialRenderProxy *)(**(code **)(pUVar15->_padding_ + 0x310))(pUVar15);
                  pFVar10 = (FMeshBatch *)(param_1->Materials).AllocatorInstance.Data;
                  local_2e0.MeshIdInPrimitive =
                       local_2e0.MeshIdInPrimitive + (short)(pFVar3->RenderSections).ArrayNum;
                  if (((pFVar10 <= &local_2e0) &&
                      (&local_2e0 < pFVar10 + (param_1->Materials).ArrayMax)) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar6)) {
                    pcVar4 = (code *)swi(3);
                    EVar5 = (*pcVar4)();
                    return EVar5;
                  }
                  iVar8 = (param_1->Materials).ArrayNum;
                  if (iVar8 == (param_1->Materials).ArrayMax) {
                    iVar8 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x8e0,&(param_1->Materials).AllocatorInstance,
                                       &(param_1->Materials).ArrayMax);
                  }
                  (param_1->Materials).ArrayNum = iVar8 + 1;
                  FMeshBatch::FMeshBatch
                            ((FMeshBatch *)
                             ((param_1->Materials).AllocatorInstance.Data + (longlong)iVar8 * 0xe0),
                             &local_2e0);
                  FVar11 = (ForElementType<FMeshBatchElement>)&local_2e0;
                  if (local_2e0.Elements.AllocatorInstance.SecondaryData !=
                      (ForElementType<FMeshBatchElement>)0x0) {
                    FVar11 = local_2e0.Elements.AllocatorInstance.SecondaryData;
                  }
                  DestructItems<FMeshBatchElement,int>
                            ((FMeshBatchElement *)FVar11,local_2e0.Elements.ArrayNum);
                  if (local_2e0.Elements.AllocatorInstance.SecondaryData !=
                      (ForElementType<FMeshBatchElement>)0x0) {
                    FMemory::Free((void *)local_2e0.Elements.AllocatorInstance.SecondaryData);
                  }
                }
                FVar11 = (ForElementType<FMeshBatchElement>)&local_200;
                if (local_200.Elements.AllocatorInstance.SecondaryData !=
                    (ForElementType<FMeshBatchElement>)0x0) {
                  FVar11 = local_200.Elements.AllocatorInstance.SecondaryData;
                }
                DestructItems<FMeshBatchElement,int>
                          ((FMeshBatchElement *)FVar11,local_200.Elements.ArrayNum);
                if (local_200.Elements.AllocatorInstance.SecondaryData !=
                    (ForElementType<FMeshBatchElement>)0x0) {
                  FMemory::Free((void *)local_200.Elements.AllocatorInstance.SecondaryData);
                }
                uVar16 = uVar16 + 1;
              }
            }
          }
        }
        local_314 = uVar12 + 1;
        uVar13 = (ulonglong)local_314;
        lVar19 = lVar19 + 8;
        lVar17 = lVar17 + 0x10;
      } while ((int)local_314 < (int)(uint)this->NumLODs);
    }
  }
  return EVar5;
}

// GetCurrentFirstLODIdx_Internal @ 1486487f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

uchar __thiscall
FSkeletalMeshSceneProxy::GetCurrentFirstLODIdx_Internal(FSkeletalMeshSceneProxy *this)

{
  return this->RenderData->CurrentFirstLODIdx;
}

// GetCurrentLODIndex @ 148648910

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall FSkeletalMeshSceneProxy::GetCurrentLODIndex(FSkeletalMeshSceneProxy *this)

{
  int iVar1;
  
  if (this->MeshObject != (FSkeletalMeshObject *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014864891f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(this->MeshObject->_padding_ + 0xa0))();
    return iVar1;
  }
  return 0;
}

// GetDesiredLODLevel_RenderThread @ 148648a80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FDesiredLODLevel __thiscall
FSkeletalMeshSceneProxy::GetDesiredLODLevel_RenderThread
          (FSkeletalMeshSceneProxy *this,FSceneView *param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = (**(code **)(this->MeshObject->_padding_ + 0xa0))();
  uVar1 = (char)iVar2;
  if (iVar2 < this->ClampedLODIndex) {
    uVar1 = (char)this->ClampedLODIndex;
  }
  param_1->field_0x1 = 1;
  *(undefined1 *)param_1 = uVar1;
  return SUB82(param_1,0);
}

// GetDynamicElementsSection @ 148648ca0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSkeletalMeshSceneProxy::GetDynamicElementsSection
          (FSkeletalMeshSceneProxy *this,
          TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,FSceneViewFamily *param_2,
          uint param_3,FSkeletalMeshLODRenderData *param_4,int param_5,int param_6,bool param_7,
          FSectionElementInfo *param_8,bool param_9,FMeshElementCollector *param_10)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  float fVar3;
  FSceneView *pFVar4;
  FSkeletalMeshObject *pFVar5;
  FName FVar6;
  longlong lVar7;
  code *pcVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  FSectionElementInfo *pFVar12;
  FMeshElementCollector *this_00;
  bool bVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_GPUSkinVertices> FVar18;
  FThreadStats *pFVar19;
  FThreadStatsPool *pFVar20;
  FThreadSafeStaticStat<FStat_STAT_SkelMeshTriangles> FVar21;
  FThreadSafeStaticStat<FStat_STAT_SkelMeshDrawCalls> FVar22;
  FCachedSystemScalabilityCVars *pFVar23;
  FMeshBatch *this_01;
  FMaterialRenderProxy *pFVar24;
  uint uVar25;
  uint uVar26;
  ForElementType<FMeshBatchElement> FVar27;
  longlong lVar28;
  FNameEntryId FVar29;
  uint uVar30;
  uint uVar31;
  UMaterialInterface *pUVar32;
  uint uVar33;
  uint uVar34;
  uchar auVar35 [8];
  ForElementType<FMeshBatchElement> FVar36;
  double dVar37;
  double dVar38;
  float fVar39;
  double dVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  uint local_1a8;
  uint local_1a4;
  int local_1a0;
  undefined1 local_19c [4];
  longlong local_198;
  FScriptContainerElement *local_190;
  uint local_188;
  uint uStack_184;
  uint local_180;
  uint uStack_17c;
  uint local_178;
  uint uStack_174;
  FSceneView *local_170;
  uint local_168;
  uint uStack_164;
  uint local_160;
  uint uStack_15c;
  FName local_158;
  ForElementType<FMeshBatchElement> local_150;
  FName local_148;
  FName local_140;
  FName local_138;
  FName local_130;
  FStatMessage local_128;
  FStatMessage local_118;
  FStatMessage local_108;
  FStatMessage local_f8;
  FStatMessage local_e8;
  FSkeletalMeshSceneProxy *local_d8;
  int *local_d0;
  FSectionElementInfo *local_c8;
  FName local_c0;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  FName local_a0 [12];
  
  lVar28 = (longlong)param_6;
  uVar25 = 0;
  if (param_6 < (param_4->RenderSections).ArrayNum) {
    uVar25 = (uint)~param_6 >> 0x1f;
  }
  if ((uVar25 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  fVar11 = __real_7f7fffff;
  uVar25 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar10 = __real_322bcc77;
  iVar14 = param_1->ArrayNum;
  local_1a8 = 0;
  local_190 = (param_4->RenderSections).AllocatorInstance.Data + lVar28 * 0x118;
  if (0 < iVar14) {
    local_1a4 = 1;
    local_198 = 0;
    do {
      lVar28 = local_198;
      if ((param_3 & local_1a4) != 0) {
        uVar26 = 0;
        if ((int)local_1a8 < iVar14) {
          uVar26 = ~local_1a8 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        this_00 = param_10;
        pFVar4 = *(FSceneView **)((param_1->AllocatorInstance).Data + lVar28);
        local_170 = pFVar4;
        iVar14 = TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
                 ::Add(&param_10->MeshBatchStorage,1);
        uVar26 = iVar14 / 0x49;
        uVar15 = 0;
        if ((int)uVar26 < (this_00->MeshBatchStorage).Chunks.Array.ArrayNum) {
          uVar15 = ~uVar26 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar12 = param_8;
        FVar36 = (ForElementType<FMeshBatchElement>)
                 ((ulonglong)(uint)(iVar14 % 0x49) * 0xe0 +
                 (longlong)
                 (this_00->MeshBatchStorage).Chunks.Array.AllocatorInstance.Data[(int)uVar26]);
        local_150 = FVar36;
        CreateBaseMeshBatch(this,pFVar4,param_4,param_5,param_6,param_8,(FMeshBatch *)FVar36,Default
                           );
        if (*(FVertexFactory **)((longlong)FVar36 + 0xa8) != (FVertexFactory *)0x0) {
          *(uint *)((longlong)FVar36 + 0xd4) =
               ((uint)(byte)this->field_0x2d8 << 5 | *(uint *)((longlong)FVar36 + 0xd4)) & 0x40 ^
               *(uint *)((longlong)FVar36 + 0xd4) & 0xfffefc3f | (uint)param_9 << 0x10;
          if ((*(int *)((longlong)FVar36 + 0xa0) < 1) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          FVar27 = FVar36;
          if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar36 + 0x98) !=
              (ForElementType<FMeshBatchElement>)0x0) {
            FVar27 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar36 + 0x98);
          }
          *(undefined4 *)((longlong)FVar27 + 0x68) = *(undefined4 *)(local_190 + 0x10);
          uVar26 = ((uint)(byte)this->_padding_ ^ *(uint *)((longlong)FVar36 + 0xd4)) & 1 ^
                   *(uint *)((longlong)FVar36 + 0xd4);
          *(uint *)((longlong)FVar36 + 0xd4) = uVar26;
          *(uint *)((longlong)FVar36 + 0xd4) =
               ((pFVar12->bEnableShadowCasting & 1) << 2 ^ uVar26 & 0xfffffffb) & 0xffffbfff |
               0x2000;
          pFVar5 = this->MeshObject;
          uVar26 = (**(code **)(pFVar5->_padding_ + 0xf8))(pFVar5);
          iVar14 = param_6;
          FGPUSkinCache::GetVisualizationDebugColor
                    ((FName *)local_19c,
                     (FGPUSkinCacheEntry *)&pFVar4->CurrentGPUSkinCacheVisualizationMode,
                     pFVar5->SkinCacheEntry,uVar26);
          *(undefined1 (*) [4])((longlong)FVar27 + 0x80) = local_19c;
          *(uint *)((longlong)FVar27 + 0x7c) =
               (iVar14 << 0xe ^ *(uint *)((longlong)FVar27 + 0x7c)) & 0xffc03fff ^ iVar14 << 0xe;
          *(undefined1 *)((longlong)FVar36 + 0xd9) = (undefined1)param_5;
          if (*(longlong *)((longlong)FVar36 + 0xb0) == 0) {
            local_d0 = &param_5;
            local_c8 = param_8;
            local_d8 = this;
            bVar13 = `FSkeletalMeshSceneProxy::GetDynamicElementsSection'::__l11::<lambda_1>::
                     operator()(&local_d8);
            if (bVar13) goto LAB_148649057;
          }
          else {
LAB_148649057:
            FMeshElementCollector::AddMesh(this_00,local_1a8,(FMeshBatch *)FVar36);
          }
          uVar26 = *(uint *)(local_190 + 0x48);
          if (this->bIsCPUSkinned != '\0') {
            uVar26 = 0;
          }
          auVar35[4] = '\0';
          auVar35[5] = '\0';
          auVar35[6] = '\0';
          auVar35[7] = '\0';
          auVar35[0] = (char)uVar26;
          auVar35[1] = (char)(uVar26 >> 8);
          auVar35[2] = (char)(uVar26 >> 0x10);
          auVar35[3] = (char)(uVar26 >> 0x18);
          if ((uVar26 != 0) && (FThreadStats::bPrimaryEnable != false)) {
            FVar18 = StatPtr_STAT_GPUSkinVertices;
            if (StatPtr_STAT_GPUSkinVertices ==
                (FThreadSafeStaticStat<FStat_STAT_GPUSkinVertices>)0x0) {
              pFVar17 = ::FName::FName(&local_c0,"STAT_GPUSkinVertices");
              FVar18 = (FThreadSafeStaticStat<FStat_STAT_GPUSkinVertices>)
                       FThreadSafeStaticStatBase::DoSetup
                                 ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GPUSkinVertices,
                                  *pFVar17,L"Skel Verts GPU Skin","STATGROUP_Engine",
                                  "STATCAT_Advanced",L"Engine",true,true,ST_int64,false,false,
                                  MCR_Invalid);
            }
            FVar6 = *(FName *)FVar18;
            FVar29 = FVar6.ComparisonIndex.Value;
            uVar26 = FVar6.Number;
            local_188 = FVar29.Value;
            uStack_184 = uVar26;
            if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
               (FThreadStats::TlsSlot != 0xffffffff)) {
              pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
              if (pFVar19 == (FThreadStats *)0x0) {
                pFVar20 = FThreadStatsPool::Get();
                pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
              }
              local_128.NameAndInfo.Number = uVar26 & 0xffffafff | 0xa000;
              local_158 = FVar6;
              local_128.StatData.Pad = auVar35;
              local_128.NameAndInfo.Index.Value = FVar29.Value;
              FThreadStats::AddStatMessage(pFVar19,&local_128);
              FStatsTrace::Add(&local_158,(long64)auVar35);
              if (pFVar19->ScopeCount == 0) {
                FThreadStats::Flush(pFVar19,false,false);
              }
              else if (FThreadStats::bIsRawStatsActive != false) {
                FThreadStats::FlushRawStats(pFVar19,false,false);
              }
            }
          }
          iVar14 = *(int *)((longlong)FVar36 + 0xa0);
          local_1a0 = 0;
          uVar26 = 0;
          if (iVar14 < 1) {
LAB_148649468:
            if (FThreadStats::bPrimaryEnable != false) {
              FVar22 = StatPtr_STAT_SkelMeshDrawCalls;
              if (StatPtr_STAT_SkelMeshDrawCalls ==
                  (FThreadSafeStaticStat<FStat_STAT_SkelMeshDrawCalls>)0x0) {
                pFVar17 = ::FName::FName(&local_b0,"STAT_SkelMeshDrawCalls");
                FVar22 = (FThreadSafeStaticStat<FStat_STAT_SkelMeshDrawCalls>)
                         FThreadSafeStaticStatBase::DoSetup
                                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SkelMeshDrawCalls,
                                    *pFVar17,L"Skel Mesh Draw Calls","STATGROUP_Engine",
                                    "STATCAT_Advanced",L"Engine",true,true,ST_int64,false,false,
                                    MCR_Invalid);
              }
              FVar6 = *(FName *)FVar22;
              FVar29 = FVar6.ComparisonIndex.Value;
              uVar26 = FVar6.Number;
              local_178 = FVar29.Value;
              uStack_174 = uVar26;
              if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
                 (FThreadStats::TlsSlot != 0xffffffff)) {
                pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
                if (pFVar19 == (FThreadStats *)0x0) {
                  pFVar20 = FThreadStatsPool::Get();
                  pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
                }
                local_108.NameAndInfo.Number = uVar26 & 0xffffafff | 0xa000;
                local_108.StatData.Pad[0] = '\x01';
                local_108.StatData.Pad[1] = '\0';
                local_108.StatData.Pad[2] = '\0';
                local_108.StatData.Pad[3] = '\0';
                local_108.StatData.Pad[4] = '\0';
                local_108.StatData.Pad[5] = '\0';
                local_108.StatData.Pad[6] = '\0';
                local_108.StatData.Pad[7] = '\0';
                local_140 = FVar6;
                local_108.NameAndInfo.Index.Value = FVar29.Value;
                FThreadStats::AddStatMessage(pFVar19,&local_108);
                FStatsTrace::Add(&local_140,1);
                if (pFVar19->ScopeCount == 0) {
                  FThreadStats::Flush(pFVar19,false,false);
                }
                else if (FThreadStats::bIsRawStatsActive != false) {
                  FThreadStats::FlushRawStats(pFVar19,false,false);
                }
              }
            }
          }
          else {
            lVar28 = 0;
            do {
              uVar33 = 0;
              uVar31 = 0;
              uVar15 = uVar31;
              if ((int)uVar26 < iVar14) {
                uVar15 = ~uVar26 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FVar27 = FVar36;
              if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar36 + 0x98) !=
                  (ForElementType<FMeshBatchElement>)0x0) {
                FVar27 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar36 + 0x98);
              }
              if (((*(uint *)(lVar28 + 0x7c + (longlong)FVar27) & 0x400) == 0) ||
                 (lVar7 = *(longlong *)(lVar28 + 0x30 + (longlong)FVar27), lVar7 == 0)) {
                iVar16 = *(int *)(lVar28 + 0x60 + (longlong)FVar27) *
                         *(int *)(lVar28 + 0x5c + (longlong)FVar27);
              }
              else {
                uVar15 = *(uint *)(lVar28 + 0x60 + (longlong)FVar27);
                if (uVar15 < 2) {
                  uVar30 = uVar31;
                  uVar34 = uVar31;
                  if (uVar15 != 0) {
                    iVar14 = *(int *)(lVar28 + 0x5c + (longlong)FVar27);
                    uVar33 = uVar31;
                    goto LAB_1486492d0;
                  }
                }
                else {
                  iVar14 = *(int *)(lVar28 + 0x5c + (longlong)FVar27);
                  uVar30 = uVar33;
                  uVar34 = uVar33;
                  do {
                    uVar9 = uVar33 * 2;
                    uVar33 = uVar33 + 2;
                    uVar30 = uVar30 + ((*(int *)(lVar7 + (ulonglong)(uVar9 + 1) * 4) -
                                       *(int *)(lVar7 + (ulonglong)uVar9 * 4)) + 1) * iVar14;
                    uVar34 = uVar34 + ((*(int *)(lVar7 + (ulonglong)(uVar9 + 3) * 4) -
                                       *(int *)(lVar7 + (ulonglong)(uVar9 + 2) * 4)) + 1) * iVar14;
                  } while (uVar33 < uVar15 - 1);
                  if (uVar33 < uVar15) {
LAB_1486492d0:
                    uVar31 = ((*(int *)(lVar7 + (ulonglong)(uVar33 * 2 + 1) * 4) -
                              *(int *)(lVar7 + (ulonglong)(uVar33 * 2) * 4)) + 1) * iVar14;
                  }
                }
                iVar16 = uVar30 + uVar31 + uVar34;
                FVar36 = local_150;
              }
              iVar14 = *(int *)((longlong)FVar36 + 0xa0);
              local_1a0 = local_1a0 + iVar16;
              uVar26 = uVar26 + 1;
              lVar28 = lVar28 + 0x98;
            } while ((int)uVar26 < iVar14);
            if (local_1a0 == 0) goto LAB_148649468;
            if (FThreadStats::bPrimaryEnable != false) {
              FVar21 = StatPtr_STAT_SkelMeshTriangles;
              if (StatPtr_STAT_SkelMeshTriangles ==
                  (FThreadSafeStaticStat<FStat_STAT_SkelMeshTriangles>)0x0) {
                pFVar17 = ::FName::FName(&local_b8,"STAT_SkelMeshTriangles");
                FVar21 = (FThreadSafeStaticStat<FStat_STAT_SkelMeshTriangles>)
                         FThreadSafeStaticStatBase::DoSetup
                                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SkelMeshTriangles,
                                    *pFVar17,L"Skel Mesh Tris","STATGROUP_Engine","STATCAT_Advanced"
                                    ,L"Engine",true,true,ST_int64,false,false,MCR_Invalid);
              }
              FVar6 = *(FName *)FVar21;
              FVar29 = FVar6.ComparisonIndex.Value;
              uVar26 = FVar6.Number;
              local_180 = FVar29.Value;
              uStack_17c = uVar26;
              if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
                 (FThreadStats::TlsSlot != 0xffffffff)) {
                pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
                if (pFVar19 == (FThreadStats *)0x0) {
                  pFVar20 = FThreadStatsPool::Get();
                  pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
                }
                local_118.NameAndInfo.Number = uVar26 & 0xffffafff | 0xa000;
                local_148 = FVar6;
                local_118.StatData.Pad = (uchar  [8])(longlong)local_1a0;
                local_118.NameAndInfo.Index.Value = FVar29.Value;
                FThreadStats::AddStatMessage(pFVar19,&local_118);
                FStatsTrace::Add(&local_148,(longlong)local_1a0);
                if (pFVar19->ScopeCount == 0) {
                  FThreadStats::Flush(pFVar19,false,false);
                }
                else if (FThreadStats::bIsRawStatsActive != false) {
                  FThreadStats::FlushRawStats(pFVar19,false,false);
                }
              }
              goto LAB_148649468;
            }
          }
          pUVar32 = param_8->PerSectionOverlayMaterial;
          if (((pUVar32 != (UMaterialInterface *)0x0) ||
              (pUVar32 = this->OverlayMaterial, pUVar32 != (UMaterialInterface *)0x0)) &&
             (fVar43 = this->OverlayMaterialMaxDrawDistance, 0.0 <= fVar43)) {
            if (((0.0 < fVar43) && (fVar43 != fVar11)) &&
               ((param_2->EngineShowFlags).DistanceCulledPrimitives == 0)) {
              pFVar23 = GetCachedScalabilityCVars();
              fVar43 = pFVar23->SkeletalMeshOverlayDistanceScale;
              pFVar23 = GetCachedScalabilityCVars();
              fVar42 = pFVar23->FieldOfViewMaxAngleScale;
              fVar39 = fVar42 - pFVar23->FieldOfViewMinAngleScale;
              if (fVar10 < (float)((uint)fVar39 & uVar25)) {
                fVar42 = pFVar23->FieldOfViewMinAngle;
                fVar3 = pFVar23->FieldOfViewMaxAngle;
                fVar41 = local_170->DesiredFOV;
                if (fVar3 <= local_170->DesiredFOV) {
                  fVar41 = fVar3;
                }
                if (fVar41 <= fVar42) {
                  fVar41 = fVar42;
                }
                fVar42 = ((fVar41 - fVar42) / (fVar3 - fVar42)) * fVar39 +
                         pFVar23->FieldOfViewMinAngleScale;
              }
              dVar40 = (double)this->_padding_ -
                       (local_170->ViewMatrices).ViewOrigin.field0_0x0._s_0.Y;
              dVar37 = (double)this->_padding_ -
                       (local_170->ViewMatrices).ViewOrigin.field0_0x0._s_0.Z;
              dVar38 = (double)this->_padding_ -
                       (local_170->ViewMatrices).ViewOrigin.field0_0x0._s_0.X;
              fVar43 = fVar42 * fVar43 * this->OverlayMaterialMaxDrawDistance;
              if (fVar43 * fVar43 < (float)(dVar40 * dVar40 + dVar38 * dVar38 + dVar37 * dVar37))
              goto LAB_1486499cb;
            }
            this_01 = FMeshElementCollector::AllocateMesh(param_10);
            FMeshBatch::operator=(this_01,(FMeshBatch *)FVar36);
            puVar2 = &this_01->field_0xd4;
            this_01->CastShadow = 0;
            this_01->bOverlayMaterial = 1;
            this_01->bSelectable = 0;
            pFVar24 = (FMaterialRenderProxy *)(**(code **)(pUVar32->_padding_ + 0x310))(pUVar32);
            this_01->MaterialRenderProxy = pFVar24;
            this_01->MeshIdInPrimitive =
                 this_01->MeshIdInPrimitive + (short)(param_4->RenderSections).ArrayNum;
            FMeshElementCollector::AddMesh(param_10,local_1a8,this_01);
            iVar14 = FMeshBatch::GetNumPrimitives(this_01);
            if (iVar14 != 0) {
              if (FThreadStats::bPrimaryEnable == false) goto LAB_1486499cb;
              FVar21 = StatPtr_STAT_SkelMeshTriangles;
              if (StatPtr_STAT_SkelMeshTriangles ==
                  (FThreadSafeStaticStat<FStat_STAT_SkelMeshTriangles>)0x0) {
                pFVar17 = ::FName::FName(&local_a8,"STAT_SkelMeshTriangles");
                FVar21 = (FThreadSafeStaticStat<FStat_STAT_SkelMeshTriangles>)
                         FThreadSafeStaticStatBase::DoSetup
                                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SkelMeshTriangles,
                                    *pFVar17,L"Skel Mesh Tris","STATGROUP_Engine","STATCAT_Advanced"
                                    ,L"Engine",true,true,ST_int64,false,false,MCR_Invalid);
              }
              FVar6 = *(FName *)FVar21;
              FVar29 = FVar6.ComparisonIndex.Value;
              uVar26 = FVar6.Number;
              local_168 = FVar29.Value;
              uStack_164 = uVar26;
              if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
                 (FThreadStats::TlsSlot != 0xffffffff)) {
                pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
                if (pFVar19 == (FThreadStats *)0x0) {
                  pFVar20 = FThreadStatsPool::Get();
                  pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
                }
                local_f8.NameAndInfo.Number = uVar26 & 0xffffafff | 0xa000;
                local_138 = FVar6;
                local_f8.StatData.Pad = (uchar  [8])(longlong)iVar14;
                local_f8.NameAndInfo.Index.Value = FVar29.Value;
                FThreadStats::AddStatMessage(pFVar19,&local_f8);
                FStatsTrace::Add(&local_138,(longlong)iVar14);
                if (pFVar19->ScopeCount == 0) {
                  FThreadStats::Flush(pFVar19,false,false);
                }
                else if (FThreadStats::bIsRawStatsActive != false) {
                  FThreadStats::FlushRawStats(pFVar19,false,false);
                }
              }
            }
            if (FThreadStats::bPrimaryEnable != false) {
              FVar22 = StatPtr_STAT_SkelMeshDrawCalls;
              if (StatPtr_STAT_SkelMeshDrawCalls ==
                  (FThreadSafeStaticStat<FStat_STAT_SkelMeshDrawCalls>)0x0) {
                pFVar17 = ::FName::FName(local_a0,"STAT_SkelMeshDrawCalls");
                FVar22 = (FThreadSafeStaticStat<FStat_STAT_SkelMeshDrawCalls>)
                         FThreadSafeStaticStatBase::DoSetup
                                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SkelMeshDrawCalls,
                                    *pFVar17,L"Skel Mesh Draw Calls","STATGROUP_Engine",
                                    "STATCAT_Advanced",L"Engine",true,true,ST_int64,false,false,
                                    MCR_Invalid);
              }
              FVar6 = *(FName *)FVar22;
              FVar29 = FVar6.ComparisonIndex.Value;
              uVar26 = FVar6.Number;
              local_160 = FVar29.Value;
              uStack_15c = uVar26;
              if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
                 (FThreadStats::TlsSlot != 0xffffffff)) {
                pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
                if (pFVar19 == (FThreadStats *)0x0) {
                  pFVar20 = FThreadStatsPool::Get();
                  pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
                }
                local_e8.NameAndInfo.Number = uVar26 & 0xffffafff | 0xa000;
                local_e8.StatData.Pad[0] = '\x01';
                local_e8.StatData.Pad[1] = '\0';
                local_e8.StatData.Pad[2] = '\0';
                local_e8.StatData.Pad[3] = '\0';
                local_e8.StatData.Pad[4] = '\0';
                local_e8.StatData.Pad[5] = '\0';
                local_e8.StatData.Pad[6] = '\0';
                local_e8.StatData.Pad[7] = '\0';
                local_130 = FVar6;
                local_e8.NameAndInfo.Index.Value = FVar29.Value;
                FThreadStats::AddStatMessage(pFVar19,&local_e8);
                FStatsTrace::Add(&local_130,1);
                if (pFVar19->ScopeCount == 0) {
                  FThreadStats::Flush(pFVar19,false,false);
                }
                else if (FThreadStats::bIsRawStatsActive != false) {
                  FThreadStats::FlushRawStats(pFVar19,false,false);
                }
              }
            }
          }
        }
      }
LAB_1486499cb:
      local_1a8 = local_1a8 + 1;
      local_198 = local_198 + 8;
      local_1a4 = local_1a4 << 1 | (uint)((int)local_1a4 < 0);
      iVar14 = param_1->ArrayNum;
    } while ((int)local_1a8 < iVar14);
  }
  return;
}

// GetDynamicMeshElements @ 148649a50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSkeletalMeshSceneProxy::GetDynamicMeshElements
          (FSkeletalMeshSceneProxy *this,
          TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,FSceneViewFamily *param_2,
          uint param_3,FMeshElementCollector *param_4)

{
  int *piVar1;
  FName FVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FSkeletalMeshSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_FSkeletalMeshSceneProxy_GetMeshElements>
  FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  bool bVar11;
  LARGE_INTEGER local_58;
  FStatMessage local_50;
  FName local_40;
  
  FVar10.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FSkeletalMeshSceneProxy_GetMeshElements ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FSkeletalMeshSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_FSkeletalMeshSceneProxy_GetMeshElements>
         )0x0) {
      pFVar5 = ::FName::FName((FName *)&local_58.s,"STAT_FSkeletalMeshSceneProxy_GetMeshElements");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FSkeletalMeshSceneProxy_GetMeshElements,
                 *pFVar5,L"STAT_FSkeletalMeshSceneProxy_GetMeshElements","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar6 = StatPtr_STAT_FSkeletalMeshSceneProxy_GetMeshElements;
  if (StatPtr_STAT_FSkeletalMeshSceneProxy_GetMeshElements ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FSkeletalMeshSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_FSkeletalMeshSceneProxy_GetMeshElements>
       )0x0) {
    pFVar5 = ::FName::FName((FName *)&local_50,"STAT_FSkeletalMeshSceneProxy_GetMeshElements");
    FVar6 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FSkeletalMeshSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_FSkeletalMeshSceneProxy_GetMeshElements>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_FSkeletalMeshSceneProxy_GetMeshElements,*pFVar5,
                         L"STAT_FSkeletalMeshSceneProxy_GetMeshElements","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar2 = *(FName *)FVar6;
  bVar3 = false;
  bVar4 = false;
  local_40.ComparisonIndex.Value = 0;
  local_40.Number = 0;
  FVar8 = FVar2.ComparisonIndex.Value;
  uVar7 = FVar2.Number;
  if ((FVar8.Value == 0) && (uVar7 == 0)) {
    GetMeshElementsConditionallySelectable(this,param_1,param_2,true,param_3,param_4);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_58.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_58.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar3 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_58.s.LowPart = FVar8.Value;
        local_58.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_58.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshSceneProxy.cpp"
                   ,0x23c);
        bVar3 = true;
        bVar4 = true;
      }
    }
    bVar11 = FThreadStats::bPrimaryEnable != false;
    FVar9 = local_40;
    if (bVar11) {
      local_58.s.LowPart = FVar8.Value;
      local_58.s.HighPart = uVar7;
      local_40 = FVar2;
      FThreadStats::AddMessage(FVar2,CycleScopeStart);
      FVar9 = FVar2;
      FVar10.Value = local_40.ComparisonIndex.Value;
    }
    GetMeshElementsConditionallySelectable(this,param_1,param_2,true,param_3,param_4);
    if (bVar4) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar11) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_50.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
        local_50.NameAndInfo.Index.Value = FVar10.Value;
        QueryPerformanceCounter(&local_58);
        local_50.StatData.Pad[4] = '\0';
        local_50.StatData.Pad[5] = '\0';
        local_50.StatData.Pad[6] = '\0';
        local_50.StatData.Pad[7] = '\0';
        local_50.StatData.Pad[0] = local_58.s.LowPart._0_1_;
        local_50.StatData.Pad[1] = local_58.s.LowPart._1_1_;
        local_50.StatData.Pad[2] = local_58.s.LowPart._2_1_;
        local_50.StatData.Pad[3] = local_58.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_50);
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
  }
  return;
}

// GetDynamicRayTracingInstances @ 148649da0

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
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
FSkeletalMeshSceneProxy::GetDynamicRayTracingInstances
          (FSkeletalMeshSceneProxy *this,FRayTracingInstanceCollector *param_1)

{
  longlong *plVar1;
  FSkeletalMeshRenderData *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  TConsoleVariableData<int> *pTVar5;
  TConsoleVariableData<int> *pTVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  FRayTracingGeometry *pFVar14;
  longlong lVar15;
  FRayTracingInstance *pFVar16;
  ForElementType<FMeshBatchElement> FVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  FSkeletalMeshLODRenderData *pFVar21;
  longlong lVar22;
  FRayTracingInstanceCollector *pFVar23;
  FSkeletalMeshSceneProxy *pFVar24;
  undefined1 auStackY_4b8 [32];
  TArray<FRayTracingGeometrySegment,TSizedDefaultAllocator<32>_> local_460;
  FSkeletalMeshLODRenderData *local_450;
  uint local_448;
  int local_444;
  FRayTracingGeometrySegment local_440;
  FScriptContainerElement *local_418;
  FRayTracingInstanceCollector *local_410;
  uint local_408;
  int local_404;
  uint local_400;
  FSkeletalMeshSceneProxy *local_3f8;
  FRayTracingInstance local_3e8;
  FRayTracingGeometry *local_378;
  int local_370;
  longlong local_368;
  FSkeletalMeshSceneProxy *local_360;
  longlong *local_358;
  FRayTracingDynamicGeometryUpdateParams local_348;
  FRayTracingDynamicGeometryUpdateParams local_2b8;
  FRayTracingInstance local_228;
  ForAnyElementType local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8;
  uint local_1a4;
  uint local_1a0;
  uint local_19c;
  FRayTracingGeometry *local_198;
  FRWBuffer *local_190;
  undefined1 local_188;
  undefined4 local_184;
  float local_178 [2];
  float afStack_170 [2];
  float local_168 [2];
  float afStack_160 [2];
  float local_158 [2];
  float afStack_150 [2];
  float local_148 [2];
  float afStack_140 [2];
  undefined1 local_138;
  FRHIResource *local_130;
  FMeshBatch local_128;
  ulonglong local_48;
  
  pTVar5 = CVarRayTracingSkeletalMeshes.Ref;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4b8;
  local_410 = param_1;
  local_3f8 = this;
  bVar8 = IsInParallelRenderingThread();
  if ((!bVar8) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar6 = CVarRayTracingSupportSkeletalMeshes.Ref;
  if (pTVar5->ShadowedValue[1] == 0) {
    return;
  }
  bVar8 = IsInParallelRenderingThread();
  if ((!bVar8) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (pTVar6->ShadowedValue[1] == 0) {
    return;
  }
  iVar10 = (**(code **)(this->MeshObject->_padding_ + 0xe8))();
  if (iVar10 < (int)(uint)this->RenderData->CurrentFirstLODIdx) {
    return;
  }
  pFVar14 = (FRayTracingGeometry *)(**(code **)(this->MeshObject->_padding_ + 0xd0))();
  if (pFVar14 == (FRayTracingGeometry *)0x0) {
    return;
  }
  local_378 = pFVar14;
  if (((pFVar14->Initializer).IndexBuffer.Reference == (FRHIBuffer *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("RayTracingGeometry->Initializer.IndexBuffer.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshSceneProxy.cpp"
                         ,0x447,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((pFVar14->GeometryState & RequiresUpdate) == Invalid) &&
     (bVar8 = FRayTracingGeometry::IsValid(pFVar14), bVar8)) {
    bVar9 = FRayTracingGeometry::IsEvicted(pFVar14);
    bVar8 = false;
    if (bVar9) goto LAB_148649f10;
  }
  else {
LAB_148649f10:
    bVar8 = true;
  }
  uVar18 = 0;
  local_3e8.Materials.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3e8.Materials.ArrayNum = 0;
  local_3e8.Materials.ArrayMax = 0;
  local_3e8.MaterialsView.DataPtr = (FMeshBatch *)0x0;
  local_3e8.MaterialsView.ArrayNum = 0;
  local_3e8.bApplyLocalBoundsTransform = false;
  local_3e8.bThinGeometry = false;
  local_3e8.InstanceLayer = NearField;
  local_3e8.bInstanceMaskAndFlagsDirty = true;
  local_3e8.NumTransforms = 0;
  local_3e8.PrimitiveInstanceIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3e8.PrimitiveInstanceIndices.ArrayNum = 0;
  local_3e8.PrimitiveInstanceIndices.ArrayMax = 0;
  local_3e8.PrimitiveInstanceIndicesView.DataPtr = (uint *)0x0;
  local_3e8.PrimitiveInstanceIndicesView.ArrayNum = 0;
  local_3e8.InstanceTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3e8.InstanceTransforms.ArrayNum = 0;
  local_3e8.InstanceTransforms.ArrayMax = 0;
  local_3e8.InstanceTransformsView.DataPtr = (TMatrix<double> *)0x0;
  local_3e8.InstanceTransformsView.ArrayNum = 0;
  local_3e8.Geometry = pFVar14;
  uVar11 = (**(code **)(this->MeshObject->_padding_ + 0xe8))();
  local_448 = uVar11;
  if (((this->RenderData->LODRenderData).Array.ArrayNum <= (int)uVar11) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("LODIndex < RenderData->LODRenderData.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshSceneProxy.cpp"
                         ,0x451,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = this->RenderData;
  uVar12 = 0;
  if ((int)uVar11 < (pFVar2->LODRenderData).Array.ArrayNum) {
    uVar12 = ~uVar11 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar21 = *(FSkeletalMeshLODRenderData **)
             ((pFVar2->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar11 * 8);
  local_450 = pFVar21;
  if (((this->LODSections).ArrayNum < 1) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_790285883818376108>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshSceneProxy.cpp"
                         ,0x454,"LODSections.Num() > 0"), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar12 = 0;
  if ((int)uVar11 < (this->LODSections).ArrayNum) {
    uVar12 = ~uVar11 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar19 = (this->LODSections).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x10;
  local_418 = pFVar19;
  if ((*(int *)(pFVar19 + 8) != (pFVar21->RenderSections).ArrayNum) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("LODSection.SectionElements.Num() == LODData.RenderSections.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshSceneProxy.cpp"
                         ,0x456,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar23 = local_410;
  if (*(int *)(pFVar19 + 8) == (pFVar14->Initializer).Segments.ArrayNum) {
    iVar10 = (local_410->Views).ArrayNum;
    local_404 = iVar10;
    if ((iVar10 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_400 = pFVar23->VisibilityMap;
    local_370 = 0;
    if (local_400 != 0) {
      for (; (local_400 >> local_370 & 1) == 0; local_370 = local_370 + 1) {
      }
    }
    local_444 = 0x20;
    if (local_400 != 0) {
      local_444 = local_370;
    }
    if (((local_444 < 0) || (iVar10 <= local_444)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Views.IsValidIndex(FirstActiveView)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshSceneProxy.cpp"
                           ,0x464,
                           L"There should be at least one active view when calling GetDynamicRayTracingInstances(...)."
                          ), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar12 = 1;
    uVar11 = uVar18;
LAB_14864a180:
    do {
      pFVar24 = local_3f8;
      if ((((pFVar21->RenderSections).ArrayNum <= (int)uVar11) || ((int)uVar11 < 0)) ||
         (*(int *)(pFVar19 + 8) <= (int)uVar11)) goto LAB_14864a3d0;
      if (((int)uVar11 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar22 = (longlong)(int)uVar11;
      pFVar3 = (local_450->RenderSections).AllocatorInstance.Data;
      pFVar21 = local_450;
      if (pFVar3[lVar22 * 0x118 + 0x110] == (FScriptContainerElement)0x0) {
        uVar13 = 0;
        if ((int)uVar11 < *(int *)(pFVar19 + 8)) {
          uVar13 = ~uVar11 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar15 = *(longlong *)pFVar19;
        FMeshBatch::FMeshBatch(&local_128);
        pFVar24 = local_3f8;
        pFVar21 = local_450;
        CreateBaseMeshBatch(local_3f8,(FSceneView *)0x0,local_450,local_448,uVar11,
                            (FSectionElementInfo *)(lVar15 + lVar22 * 0x18),&local_128,RayTracing);
        if (((local_3e8.Materials.AllocatorInstance.Data <= &local_128) &&
            (&local_128 <
             (FMeshBatch *)
             (local_3e8.Materials.AllocatorInstance.Data +
             (longlong)local_3e8.Materials.ArrayMax * 0xe0))) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar10 = local_3e8.Materials.ArrayNum;
        if (local_3e8.Materials.ArrayNum == local_3e8.Materials.ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x8e0,&local_3e8.Materials.AllocatorInstance,
                              &local_3e8.Materials.ArrayMax);
        }
        local_3e8.Materials.ArrayNum = iVar10 + 1;
        FMeshBatch::FMeshBatch
                  ((FMeshBatch *)
                   (local_3e8.Materials.AllocatorInstance.Data + (longlong)iVar10 * 0xe0),&local_128
                  );
        if (((pFVar24->bAnySegmentUsesWorldPositionOffset) &&
            (pFVar3[lVar22 * 0x118 + 0x110] == (FScriptContainerElement)0x0)) &&
           (local_368 = (**(code **)((local_128.VertexFactory)->_padding_ + 0x30))(),
           (*(uint *)(local_368 + 0x38) & 0x400) == 0)) {
          local_358 = &local_368;
          local_360 = pFVar24;
          bVar9 = `FSkeletalMeshSceneProxy::GetDynamicRayTracingInstances'::__l53::<lambda_1>::
                  operator()(&local_360);
          if (!bVar9) {
            uVar12 = uVar18;
          }
        }
        FVar17 = (ForElementType<FMeshBatchElement>)&local_128;
        if (local_128.Elements.AllocatorInstance.SecondaryData !=
            (ForElementType<FMeshBatchElement>)0x0) {
          FVar17 = local_128.Elements.AllocatorInstance.SecondaryData;
        }
        DestructItems<FMeshBatchElement,int>
                  ((FMeshBatchElement *)FVar17,local_128.Elements.ArrayNum);
        if (local_128.Elements.AllocatorInstance.SecondaryData !=
            (ForElementType<FMeshBatchElement>)0x0) {
          FMemory::Free((void *)local_128.Elements.AllocatorInstance.SecondaryData);
          uVar11 = uVar11 + 1;
          goto LAB_14864a180;
        }
      }
      uVar11 = uVar11 + 1;
    } while( true );
  }
  bVar8 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_790285883818376103>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshSceneProxy.cpp"
                     ,0x459,
                     "LODSection.SectionElements.Num() == RayTracingGeometry->Initializer.Segments.Num()"
                    );
  if (bVar8) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14864aab8:
  if (local_3e8.InstanceTransforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3e8.InstanceTransforms.AllocatorInstance.Data);
  }
  if (local_3e8.PrimitiveInstanceIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3e8.PrimitiveInstanceIndices.AllocatorInstance.Data);
  }
  DestructItems<FMeshBatch,int>
            ((FMeshBatch *)local_3e8.Materials.AllocatorInstance.Data,local_3e8.Materials.ArrayNum);
  if ((FMeshBatch *)local_3e8.Materials.AllocatorInstance.Data != (FMeshBatch *)0x0) {
    FMemory::Free(local_3e8.Materials.AllocatorInstance.Data);
  }
  return;
LAB_14864a3d0:
  if (local_3e8.Materials.ArrayNum != 0) {
    plVar1 = &local_3f8->_padding_;
    if (((local_3e8.InstanceTransforms.AllocatorInstance.Data <= plVar1) &&
        (plVar1 < local_3e8.InstanceTransforms.AllocatorInstance.Data +
                  (longlong)local_3e8.InstanceTransforms.ArrayMax * 0x80)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar10 = local_3e8.InstanceTransforms.ArrayNum;
    if (local_3e8.InstanceTransforms.ArrayNum == local_3e8.InstanceTransforms.ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1080,&local_3e8.InstanceTransforms.AllocatorInstance,
                          &local_3e8.InstanceTransforms.ArrayMax);
    }
    pFVar23 = local_410;
    lVar22 = pFVar24->_padding_;
    local_3e8.InstanceTransforms.ArrayNum = iVar10 + 1;
    lVar15 = (longlong)iVar10 * 0x80;
    *(longlong *)(local_3e8.InstanceTransforms.AllocatorInstance.Data + lVar15) = *plVar1;
    *(longlong *)(local_3e8.InstanceTransforms.AllocatorInstance.Data + lVar15 + 8) = lVar22;
    lVar22 = pFVar24->_padding_;
    *(longlong *)(local_3e8.InstanceTransforms.AllocatorInstance.Data + lVar15 + 0x10) =
         pFVar24->_padding_;
    *(longlong *)(local_3e8.InstanceTransforms.AllocatorInstance.Data + lVar15 + 0x10 + 8) = lVar22;
    lVar22 = pFVar24->_padding_;
    *(longlong *)(local_3e8.InstanceTransforms.AllocatorInstance.Data + lVar15 + 0x20) =
         pFVar24->_padding_;
    *(longlong *)(local_3e8.InstanceTransforms.AllocatorInstance.Data + lVar15 + 0x20 + 8) = lVar22;
    lVar22 = pFVar24->_padding_;
    *(longlong *)(local_3e8.InstanceTransforms.AllocatorInstance.Data + lVar15 + 0x30) =
         pFVar24->_padding_;
    *(longlong *)(local_3e8.InstanceTransforms.AllocatorInstance.Data + lVar15 + 0x30 + 8) = lVar22;
    lVar22 = pFVar24->_padding_;
    *(longlong *)(local_3e8.InstanceTransforms.AllocatorInstance.Data + lVar15 + 0x40) =
         pFVar24->_padding_;
    *(longlong *)(local_3e8.InstanceTransforms.AllocatorInstance.Data + lVar15 + 0x40 + 8) = lVar22;
    lVar22 = pFVar24->_padding_;
    *(longlong *)(local_3e8.InstanceTransforms.AllocatorInstance.Data + lVar15 + 0x50) =
         pFVar24->_padding_;
    *(longlong *)(local_3e8.InstanceTransforms.AllocatorInstance.Data + lVar15 + 0x50 + 8) = lVar22;
    lVar22 = pFVar24->_padding_;
    *(longlong *)(local_3e8.InstanceTransforms.AllocatorInstance.Data + lVar15 + 0x60) =
         pFVar24->_padding_;
    *(longlong *)(local_3e8.InstanceTransforms.AllocatorInstance.Data + lVar15 + 0x60 + 8) = lVar22;
    lVar22 = pFVar24->_padding_;
    *(longlong *)(local_3e8.InstanceTransforms.AllocatorInstance.Data + lVar15 + 0x70) =
         pFVar24->_padding_;
    *(longlong *)(local_3e8.InstanceTransforms.AllocatorInstance.Data + lVar15 + 0x70 + 8) = lVar22;
    local_408 = (pFVar21->StaticVertexBuffers).PositionVertexBuffer.Stride;
    uVar11 = (pFVar21->StaticVertexBuffers).PositionVertexBuffer.NumVertices;
    if ((pFVar24->bAnySegmentUsesWorldPositionOffset) && ((char)uVar12 != '\0')) {
      uVar12 = (pFVar21->RenderSections).ArrayNum;
      local_460.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_460.ArrayNum = 0;
      local_460.ArrayMax = 0;
      if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
      }
      pFVar19 = local_418;
      uVar20 = uVar18;
      uVar13 = local_408;
      if (0 < (int)uVar12) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,uVar12,&local_460.AllocatorInstance,0,&local_460.ArrayMax);
        pFVar19 = local_418;
        uVar13 = local_408;
      }
      for (; ((pFVar14 = local_378, (int)uVar20 < (local_450->RenderSections).ArrayNum &&
              (-1 < (int)uVar20)) && ((int)uVar20 < *(int *)(pFVar19 + 8))); uVar20 = uVar20 + 1) {
        if (((int)uVar20 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar22 = (longlong)(int)uVar20;
        pFVar3 = (local_450->RenderSections).AllocatorInstance.Data;
        uVar12 = 0;
        if ((int)uVar20 < *(int *)(local_418 + 8)) {
          uVar12 = ~uVar20 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar24 = local_3f8;
        pFVar19 = local_418;
        local_440.VertexBuffer.Reference = (FRHIBuffer *)0x0;
        local_440.VertexBufferElementType = VET_Float3;
        local_440.VertexBufferOffset = 0;
        local_440.bForceOpaque = false;
        local_440.bAllowDuplicateAnyHitShaderInvocation = true;
        local_440.bEnabled = true;
        local_440.NumPrimitives = *(uint *)(pFVar3 + lVar22 * 0x118 + 8);
        local_440.FirstPrimitive = *(uint *)(pFVar3 + lVar22 * 0x118 + 4) / 3;
        local_440.VertexBufferStride = uVar13;
        local_440.MaxVertices = uVar11;
        bVar8 = FSkeletalMeshObject::IsMaterialHidden
                          (local_3f8->MeshObject,local_448,
                           *(int *)(*(longlong *)local_418 + 0xc + lVar22 * 0x18));
        if (((bVar8) || (pFVar3[lVar22 * 0x118 + 0x110] != (FScriptContainerElement)0x0)) ||
           (local_440.bEnabled = true, pFVar3[lVar22 * 0x118 + 0xe] == (FScriptContainerElement)0x0)
           ) {
          local_440.bEnabled = false;
        }
        if (((local_460.AllocatorInstance.Data <= &local_440) &&
            (&local_440 <
             (FRayTracingGeometrySegment *)
             (local_460.AllocatorInstance.Data + (longlong)local_460.ArrayMax * 0x28))) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar10 = local_460.ArrayNum;
        if (local_460.ArrayNum == local_460.ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x828,&local_460.AllocatorInstance,&local_460.ArrayMax);
        }
        local_460.ArrayNum = iVar10 + 1;
        pFVar3 = local_460.AllocatorInstance.Data + (longlong)iVar10 * 0x28;
        *(undefined8 *)&pFVar3->field_0x0 = 0;
        *(FRHIBuffer **)&pFVar3->field_0x0 = local_440.VertexBuffer.Reference;
        if (local_440.VertexBuffer.Reference != (FRHIBuffer *)0x0) {
          FRHIResource::AddRef((FRHIResource *)local_440.VertexBuffer.Reference);
        }
        *(EVertexElementType *)(pFVar3 + 8) = local_440.VertexBufferElementType;
        *(uint *)(pFVar3 + 0xc) = local_440.VertexBufferOffset;
        *(uint *)(pFVar3 + 0x10) = local_440.VertexBufferStride;
        *(uint *)(pFVar3 + 0x14) = local_440.MaxVertices;
        *(uint *)(pFVar3 + 0x18) = local_440.FirstPrimitive;
        *(uint *)(pFVar3 + 0x1c) = local_440.NumPrimitives;
        pFVar3[0x20] = (FScriptContainerElement)local_440.bForceOpaque;
        pFVar3[0x21] = (FScriptContainerElement)local_440.bAllowDuplicateAnyHitShaderInvocation;
        pFVar3[0x22] = (FScriptContainerElement)local_440.bEnabled;
        if (local_440.VertexBuffer.Reference != (FRHIBuffer *)0x0) {
          FRHIResource::Release((FRHIResource *)local_440.VertexBuffer.Reference);
        }
      }
      TArray<FRayTracingGeometrySegment,TSizedDefaultAllocator<32>_>::operator=
                (&(local_378->Initializer).Segments,&local_460);
      FVar7.Data = local_3e8.Materials.AllocatorInstance.Data;
      iVar10 = local_3e8.Materials.ArrayNum;
      local_1b8.Data = (FScriptContainerElement *)0x0;
      local_1b0 = CONCAT44(local_1b0._4_4_,local_3e8.Materials.ArrayNum);
      if (local_3e8.Materials.ArrayNum == 0) {
        local_1b0 = local_3e8.Materials._8_8_ & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xe0,8,local_3e8.Materials.ArrayNum,0,&local_1b8,local_3e8.Materials.ArrayNum,
                   (int *)((longlong)&local_1b0 + 4));
        ConstructItems<FMeshBatch,FMeshBatch,int>(local_1b8.Data,(FMeshBatch *)FVar7.Data,iVar10);
      }
      local_1a8 = 0;
      local_198 = pFVar14;
      local_1a4 = (local_450->StaticVertexBuffers).PositionVertexBuffer.NumVertices;
      local_19c = (pFVar14->Initializer).TotalPrimitiveCount;
      local_1a0 = local_1a4 * 0xc;
      local_348.Buffer = (FRWBuffer *)(**(code **)(pFVar24->MeshObject->_padding_ + 0xe0))();
      pFVar23 = local_410;
      local_348.MeshBatches.AllocatorInstance.Data = local_1b8.Data;
      local_348.MeshBatches.ArrayNum = (int)local_1b0;
      local_348.MeshBatches.ArrayMax = local_1b0._4_4_;
      local_348.bUsingIndirectDraw = (bool)local_1a8;
      local_348.NumVertices = local_1a4;
      local_348.VertexBufferSize = local_1a0;
      local_348.NumTriangles = local_19c;
      local_348.Geometry = local_198;
      local_188 = 1;
      local_184 = 0;
      local_178[0] = UE::Math::TMatrix<float>::Identity.M[0][0];
      local_178[1] = UE::Math::TMatrix<float>::Identity.M[0][1];
      afStack_170[0] = UE::Math::TMatrix<float>::Identity.M[0][2];
      afStack_170[1] = UE::Math::TMatrix<float>::Identity.M[0][3];
      local_168[0] = UE::Math::TMatrix<float>::Identity.M[1][0];
      local_168[1] = UE::Math::TMatrix<float>::Identity.M[1][1];
      afStack_160[0] = UE::Math::TMatrix<float>::Identity.M[1][2];
      afStack_160[1] = UE::Math::TMatrix<float>::Identity.M[1][3];
      local_158[0] = UE::Math::TMatrix<float>::Identity.M[2][0];
      local_158[1] = UE::Math::TMatrix<float>::Identity.M[2][1];
      afStack_150[0] = UE::Math::TMatrix<float>::Identity.M[2][2];
      afStack_150[1] = UE::Math::TMatrix<float>::Identity.M[2][3];
      local_148[0] = UE::Math::TMatrix<float>::Identity.M[3][0];
      local_148[1] = UE::Math::TMatrix<float>::Identity.M[3][1];
      afStack_140[0] = UE::Math::TMatrix<float>::Identity.M[3][2];
      afStack_140[1] = UE::Math::TMatrix<float>::Identity.M[3][3];
      local_138 = 0;
      local_1b8.Data = (FScriptContainerElement *)0x0;
      local_1b0 = 0;
      local_348.bApplyWorldPositionOffset = true;
      local_348.InstanceId = 0;
      local_348.WorldToInstance.M[0][0] = UE::Math::TMatrix<float>::Identity.M[0][0];
      local_348.WorldToInstance.M[0][1] = UE::Math::TMatrix<float>::Identity.M[0][1];
      local_348.WorldToInstance.M[0][2] = UE::Math::TMatrix<float>::Identity.M[0][2];
      local_348.WorldToInstance.M[0][3] = UE::Math::TMatrix<float>::Identity.M[0][3];
      local_348.WorldToInstance.M[1][0] = UE::Math::TMatrix<float>::Identity.M[1][0];
      local_348.WorldToInstance.M[1][1] = UE::Math::TMatrix<float>::Identity.M[1][1];
      local_348.WorldToInstance.M[1][2] = UE::Math::TMatrix<float>::Identity.M[1][2];
      local_348.WorldToInstance.M[1][3] = UE::Math::TMatrix<float>::Identity.M[1][3];
      local_348.WorldToInstance.M[2][0] = UE::Math::TMatrix<float>::Identity.M[2][0];
      local_348.WorldToInstance.M[2][1] = UE::Math::TMatrix<float>::Identity.M[2][1];
      local_348.WorldToInstance.M[2][2] = UE::Math::TMatrix<float>::Identity.M[2][2];
      local_348.WorldToInstance.M[2][3] = UE::Math::TMatrix<float>::Identity.M[2][3];
      local_348.WorldToInstance.M[3][0] = UE::Math::TMatrix<float>::Identity.M[3][0];
      local_348.WorldToInstance.M[3][1] = UE::Math::TMatrix<float>::Identity.M[3][1];
      local_348.WorldToInstance.M[3][2] = UE::Math::TMatrix<float>::Identity.M[3][2];
      local_348.WorldToInstance.M[3][3] = UE::Math::TMatrix<float>::Identity.M[3][3];
      local_348.bAlphaMasked = false;
      local_348.IndexBuffer.Reference = (FRHIBuffer *)0x0;
      local_130 = (FRHIResource *)0x0;
      local_190 = local_348.Buffer;
      FRayTracingInstanceCollector::AddRayTracingGeometryUpdate(local_410,local_444,&local_348);
      if (local_130 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_130);
      }
      DestructItems<FMeshBatch,int>((FMeshBatch *)local_1b8.Data,(int)local_1b0);
      if ((FMeshBatch *)local_1b8.Data != (FMeshBatch *)0x0) {
        FMemory::Free(local_1b8.Data);
      }
      DestructItems<FRayTracingGeometrySegment,int>
                ((FRayTracingGeometrySegment *)local_460.AllocatorInstance.Data,local_460.ArrayNum);
      if ((FRayTracingGeometrySegment *)local_460.AllocatorInstance.Data !=
          (FRayTracingGeometrySegment *)0x0) {
        FMemory::Free(local_460.AllocatorInstance.Data);
      }
    }
    else if (bVar8) {
      local_2b8.Geometry = local_378;
      local_2b8.MeshBatches.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2b8.MeshBatches.ArrayNum = 0;
      local_2b8.MeshBatches.ArrayMax = 0;
      local_2b8.bUsingIndirectDraw = false;
      local_2b8.NumVertices = 0;
      local_2b8.VertexBufferSize = 0;
      local_2b8.NumTriangles = 0;
      local_2b8.Buffer = (FRWBuffer *)0x0;
      local_2b8.bApplyWorldPositionOffset = true;
      local_2b8.InstanceId = 0;
      local_2b8.WorldToInstance.M[0][0] = UE::Math::TMatrix<float>::Identity.M[0][0];
      local_2b8.WorldToInstance.M[0][1] = UE::Math::TMatrix<float>::Identity.M[0][1];
      local_2b8.WorldToInstance.M[0][2] = UE::Math::TMatrix<float>::Identity.M[0][2];
      local_2b8.WorldToInstance.M[0][3] = UE::Math::TMatrix<float>::Identity.M[0][3];
      local_2b8.WorldToInstance.M[1][0] = UE::Math::TMatrix<float>::Identity.M[1][0];
      local_2b8.WorldToInstance.M[1][1] = UE::Math::TMatrix<float>::Identity.M[1][1];
      local_2b8.WorldToInstance.M[1][2] = UE::Math::TMatrix<float>::Identity.M[1][2];
      local_2b8.WorldToInstance.M[1][3] = UE::Math::TMatrix<float>::Identity.M[1][3];
      local_2b8.WorldToInstance.M[2][0] = UE::Math::TMatrix<float>::Identity.M[2][0];
      local_2b8.WorldToInstance.M[2][1] = UE::Math::TMatrix<float>::Identity.M[2][1];
      local_2b8.WorldToInstance.M[2][2] = UE::Math::TMatrix<float>::Identity.M[2][2];
      local_2b8.WorldToInstance.M[2][3] = UE::Math::TMatrix<float>::Identity.M[2][3];
      local_2b8.WorldToInstance.M[3][0] = UE::Math::TMatrix<float>::Identity.M[3][0];
      local_2b8.WorldToInstance.M[3][1] = UE::Math::TMatrix<float>::Identity.M[3][1];
      local_2b8.WorldToInstance.M[3][2] = UE::Math::TMatrix<float>::Identity.M[3][2];
      local_2b8.WorldToInstance.M[3][3] = UE::Math::TMatrix<float>::Identity.M[3][3];
      local_2b8.bAlphaMasked = false;
      local_2b8.IndexBuffer.Reference = (FRHIBuffer *)0x0;
      FRayTracingInstanceCollector::AddRayTracingGeometryUpdate(local_410,local_444,&local_2b8);
      DestructItems<FMeshBatch,int>((FMeshBatch *)0x0,0);
    }
    uVar11 = local_400;
    iVar10 = local_404;
    if (0 < local_404) {
      do {
        if ((uVar11 >> (uVar18 & 0x1f) & 1) != 0) {
          pFVar16 = FRayTracingInstance::FRayTracingInstance(&local_228,&local_3e8);
          FRayTracingInstanceCollector::AddRayTracingInstance(pFVar23,uVar18,pFVar16);
        }
        uVar18 = uVar18 + 1;
      } while ((int)uVar18 < iVar10);
    }
  }
  goto LAB_14864aab8;
}

// GetMeshCardRepresentation @ 14864b650

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FCardRepresentationData * __thiscall
FSkeletalMeshSceneProxy::GetMeshCardRepresentation(FSkeletalMeshSceneProxy *this)

{
  return this->CardRepresentationData;
}

// GetMeshElementsConditionallySelectable @ 14864b660

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSkeletalMeshSceneProxy::GetMeshElementsConditionallySelectable
          (FSkeletalMeshSceneProxy *this,
          TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,FSceneViewFamily *param_2,
          bool param_3,uint param_4,FMeshElementCollector *param_5)

{
  FSectionElementInfo *pFVar1;
  int iVar2;
  FSkeletalMeshRenderData *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FSceneViewFamily *pFVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  FPrimitiveDrawInterface *pFVar13;
  FSkeletalMeshLODRenderData *pFVar14;
  FDebugMassData *this_00;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  FDebugMassData *pFVar18;
  bool bVar19;
  undefined1 auStackY_1b8 [32];
  undefined1 local_156 [6];
  FMeshElementCollector *local_150;
  FSkeletalMeshLODRenderData *local_148;
  FSceneViewFamily *local_140;
  TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *local_138;
  FSkeletalMeshRenderData *local_130;
  uint local_128;
  FName local_124;
  FString local_118;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_150 = param_5;
  if (this->MeshObject != (FSkeletalMeshObject *)0x0) {
    bVar19 = -1 < CpuChannel->Enabled;
    local_140 = param_2;
    local_138 = param_1;
    if (bVar19) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId583,"SkeletalMesh",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshSceneProxy.cpp"
                 ,0x247);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId583);
    }
    iVar8 = FSkeletalMeshRenderData::GetFirstValidLODIdx
                      (this->RenderData,(uint)this->RenderData->CurrentFirstLODIdx);
    uVar15 = 0;
    local_130 = (FSkeletalMeshRenderData *)CONCAT44(local_130._4_4_,iVar8);
    if (iVar8 == -1) {
      if (2 < (byte)LogSkeletalMesh._0_1_) {
        local_124 = (FName)this->_padding_;
        ::FName::ToString(&local_124,&local_118);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSkeletalMesh);
        param_5 = local_150;
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
          param_5 = local_150;
        }
      }
    }
    else {
      uVar9 = (**(code **)(this->MeshObject->_padding_ + 0xa0))();
      lVar11 = (longlong)(int)uVar9;
      local_128 = uVar9;
      if (((this->RenderData->LODRenderData).Array.ArrayNum <= (int)uVar9) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("LODIndex < RenderData->LODRenderData.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshSceneProxy.cpp"
                             ,0x255,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar3 = this->RenderData;
      uVar17 = ~uVar9 >> 0x1f;
      uVar10 = 0;
      if ((int)uVar9 < (pFVar3->LODRenderData).Array.ArrayNum) {
        uVar10 = uVar17;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar14 = *(FSkeletalMeshLODRenderData **)
                 ((pFVar3->LODRenderData).Array.AllocatorInstance.Data + lVar11 * 8);
      param_2 = local_140;
      param_5 = local_150;
      param_1 = local_138;
      local_148 = pFVar14;
      if ((0 < (this->LODSections).ArrayNum) && ((int)local_130 <= (int)uVar9)) {
        local_130 = this->RenderData;
        uVar10 = 0;
        if ((int)uVar9 < (local_130->LODRenderData).Array.ArrayNum) {
          uVar10 = uVar17;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((*(int *)(*(longlong *)
                       ((local_130->LODRenderData).Array.AllocatorInstance.Data + lVar11 * 8) + 300)
             == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("RenderData->LODRenderData[LODIndex].GetNumVertices() > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshSceneProxy.cpp"
                               ,0x25a,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar10 = 0;
        if ((int)uVar9 < (this->LODSections).ArrayNum) {
          uVar10 = uVar17;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar16 = (this->LODSections).AllocatorInstance.Data + lVar11 * 0x10;
        if ((*(int *)(pFVar16 + 8) != (pFVar14->RenderSections).ArrayNum) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("LODSection.SectionElements.Num() == LODData.RenderSections.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshSceneProxy.cpp"
                               ,0x25e,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar6 = local_140;
        uVar9 = 0;
        while (((param_2 = local_140, param_5 = local_150, param_1 = local_138,
                (int)uVar9 < (pFVar14->RenderSections).ArrayNum && (-1 < (int)uVar9)) &&
               ((int)uVar9 < *(int *)(pFVar16 + 8)))) {
          if (((int)uVar9 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar11 = (longlong)(int)uVar9;
          pFVar4 = (local_148->RenderSections).AllocatorInstance.Data;
          uVar10 = 0;
          if ((int)uVar9 < *(int *)(pFVar16 + 8)) {
            uVar10 = ~uVar9 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar10 = local_128;
          pFVar1 = (FSectionElementInfo *)(*(longlong *)pFVar16 + lVar11 * 0x18);
          bVar7 = FSkeletalMeshObject::IsMaterialHidden
                            (this->MeshObject,local_128,pFVar1->UseMaterialIndex);
          pFVar14 = local_148;
          if (((bVar7) || (pFVar4[lVar11 * 0x118 + 0x110] != (FScriptContainerElement)0x0)) ||
             (*(int *)(pFVar4 + lVar11 * 0x118 + 8) == 0)) {
            uVar9 = uVar9 + 1;
          }
          else {
            GetDynamicElementsSection
                      (this,local_138,pFVar6,param_4,local_148,uVar10,uVar9,false,pFVar1,param_3,
                       local_150);
            uVar9 = uVar9 + 1;
          }
        }
      }
    }
    if (0 < param_1->ArrayNum) {
      do {
        if ((param_4 >> (uVar15 & 0x1f) & 1) != 0) {
          if (this->PhysicsAssetForDebug != (UPhysicsAsset *)0x0) {
            (**(code **)(this->_padding_ + 600))(this,uVar15,param_5,&param_2->EngineShowFlags);
          }
          if (((param_2->EngineShowFlags).MassProperties != 0) && (0 < (int)this->_padding_)) {
            local_148 = (FSkeletalMeshLODRenderData *)FMeshElementCollector::GetPDI(param_5,uVar15);
            lVar11 = (**(code **)(this->MeshObject->_padding_ + 0x60))();
            if (lVar11 != 0) {
              plVar12 = (longlong *)(**(code **)(this->MeshObject->_padding_ + 0x60))();
              pFVar14 = local_148;
              iVar8 = (int)this->_padding_;
              this_00 = (FDebugMassData *)this->_padding_;
              pFVar18 = this_00 + iVar8;
              while( true ) {
                if ((int)this->_padding_ != iVar8) {
                  local_156[0] = 0;
                  `TCheckedPointerIterator<FPrimitiveSceneProxy::FDebugMassData_const_,int,0>::
                  operator!='::__l2::<lambda_1>::operator()(local_156);
                }
                param_2 = local_140;
                param_1 = local_138;
                if (this_00 == pFVar18) break;
                iVar2 = this_00->BoneIndex;
                if ((-1 < iVar2) && (iVar2 < (int)plVar12[1])) {
                  if ((iVar2 < 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  lVar11 = *plVar12;
                  UE::Math::TTransform<double>::SetFromMatrix
                            (&local_a8,(TMatrix<double> *)&this->_padding_);
                  local_108.Rotation.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[0];
                  local_108.Rotation.XY.m128d_f64[1] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[1];
                  local_108.Rotation.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[2];
                  local_108.Rotation.ZW.m128d_f64[1] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[3];
                  local_108.Translation.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[2];
                  local_108.Translation.ZW.m128d_f64[1] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[3];
                  local_108.Translation.XY.m128d_f64[1]._0_4_ =
                       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
                  local_108.Translation.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
                  local_108.Translation.XY.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20
                            );
                  local_108.Scale3D.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[2];
                  local_108.Scale3D.ZW.m128d_f64[1] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[3];
                  local_108.Scale3D.XY.m128d_f64[1]._0_4_ =
                       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
                  local_108.Scale3D.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[0];
                  local_108.Scale3D.XY.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20
                            );
                  UE::Math::TTransform<double>::Multiply
                            (&local_108,(TTransform<double> *)((longlong)iVar2 * 0x60 + lVar11),
                             &local_a8);
                  FPrimitiveSceneProxy::FDebugMassData::DrawDebugMass
                            (this_00,(FPrimitiveDrawInterface *)pFVar14,&local_108);
                }
                this_00 = this_00 + 1;
              }
            }
          }
          if ((param_2->EngineShowFlags).SkeletalMeshes != 0) {
            lVar11 = this->_padding_;
            pFVar13 = FMeshElementCollector::GetPDI(local_150,uVar15);
            FPrimitiveSceneProxy::RenderBounds
                      ((FPrimitiveSceneProxy *)this,pFVar13,&param_2->EngineShowFlags,
                       (TBoxSphereBounds<double,double> *)&this->_padding_,(lVar11 & 0x600) != 0);
          }
          param_5 = local_150;
          if (((param_2->EngineShowFlags).Bones != 0) || (this->bDrawDebugSkeleton != '\0')) {
            DebugDrawSkeleton(this,uVar15,local_150,&param_2->EngineShowFlags);
          }
        }
        uVar15 = uVar15 + 1;
      } while ((int)uVar15 < param_1->ArrayNum);
    }
    if (bVar19) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// GetOverlayMeshBatch @ 14864c5c0

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
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
FSkeletalMeshSceneProxy::GetOverlayMeshBatch
          (FSkeletalMeshSceneProxy *this,FSkeletalMeshLODRenderData *param_1,
          UMaterialInterface *param_2,FMeshBatch *param_3,FMeshBatch *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  FMeshBatch *pFVar3;
  FMaterialRenderProxy *pFVar4;
  ForElementType<FMeshBatchElement> FVar5;
  undefined1 auStack_118 [32];
  FMeshBatch local_f8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_118;
  pFVar3 = FMeshBatch::FMeshBatch(&local_f8,param_3);
  FMeshBatch::operator=(param_4,pFVar3);
  FVar5 = (ForElementType<FMeshBatchElement>)&local_f8;
  if (local_f8.Elements.AllocatorInstance.SecondaryData != (ForElementType<FMeshBatchElement>)0x0) {
    FVar5 = local_f8.Elements.AllocatorInstance.SecondaryData;
  }
  DestructItems<FMeshBatchElement,int>((FMeshBatchElement *)FVar5,local_f8.Elements.ArrayNum);
  if (local_f8.Elements.AllocatorInstance.SecondaryData != (ForElementType<FMeshBatchElement>)0x0) {
    FMemory::Free((void *)local_f8.Elements.AllocatorInstance.SecondaryData);
  }
  puVar2 = &param_4->field_0xd4;
  param_4->CastShadow = 0;
  param_4->bOverlayMaterial = 1;
  param_4->bSelectable = 0;
  pFVar4 = (FMaterialRenderProxy *)(**(code **)(param_2->_padding_ + 0x310))(param_2);
  param_4->MaterialRenderProxy = pFVar4;
  param_4->MeshIdInPrimitive =
       param_4->MeshIdInPrimitive + (short)(param_1->RenderSections).ArrayNum;
  return;
}

// GetRayTracingGeometryGroupHandle @ 14864ce90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall
FSkeletalMeshSceneProxy::GetRayTracingGeometryGroupHandle(FSkeletalMeshSceneProxy *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = IsInParallelRenderingThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread() || IsInParallelRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshSceneProxy.cpp"
                         ,0x3d6,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
  }
  return this->RayTracingGeometryGroupHandle;
}

// GetShadowShapes @ 14864dcc0

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
FSkeletalMeshSceneProxy::GetShadowShapes
          (FSkeletalMeshSceneProxy *this,TVector<double> *param_1,
          TArray<UE::Math::TCapsuleShape<float>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  FName FVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  bool bVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  bool bVar39;
  bool bVar40;
  int iVar41;
  FName *pFVar42;
  FThreadSafeStaticStat<FStat_STAT_GetShadowShapes> FVar43;
  FScriptContainerElement *pFVar44;
  longlong lVar45;
  FScriptContainerElement *pFVar46;
  FNameEntryId FVar47;
  uint uVar48;
  uint uVar49;
  ulonglong uVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined1 auStackY_348 [32];
  undefined1 local_2e7 [7];
  float local_2e0;
  uint uStack_2dc;
  FColor_u_0 local_2d8 [2];
  FName local_2d0;
  TArray<UE::Math::TCapsuleShape<float>,TSizedDefaultAllocator<32>_> *local_2c8;
  longlong local_2c0;
  FName local_2b8;
  FName local_2b0;
  TVector<double> *local_2a0;
  FScriptContainerElement *local_298;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  longlong local_208;
  int local_200;
  FName local_1f8;
  double local_1f0;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  TMatrix<double> local_168;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_348;
  FVar43 = StatPtr_STAT_GetShadowShapes;
  local_2c8 = param_2;
  local_2a0 = param_1;
  if (StatPtr_STAT_GetShadowShapes == (FThreadSafeStaticStat<FStat_STAT_GetShadowShapes>)0x0) {
    pFVar42 = ::FName::FName(&local_1f8,"STAT_GetShadowShapes");
    FVar43 = (FThreadSafeStaticStat<FStat_STAT_GetShadowShapes>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GetShadowShapes,*pFVar42,
                        L"GetShadowShapes","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar8 = *(FName *)FVar43;
  bVar13 = false;
  bVar14 = false;
  local_2b0.ComparisonIndex.Value = 0;
  local_2b0.Number = 0;
  bVar39 = false;
  bVar40 = false;
  FVar47 = FVar8.ComparisonIndex.Value;
  uVar48 = FVar8.Number;
  if ((FVar47.Value != 0) || (uVar48 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2d8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2d8[0]._s_0,(char *)*(FName *)((longlong)FVar43 + 0x10));
      bVar13 = false;
      bVar14 = true;
      bVar39 = false;
      bVar40 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2d0.ComparisonIndex.Value = FVar47.Value;
        local_2d0.Number = uVar48;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2d0,(wchar_t *)*(FName *)((longlong)FVar43 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshSceneProxy.cpp"
                   ,0x4d7);
        bVar13 = true;
        bVar14 = true;
        bVar39 = true;
        bVar40 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_2e0 = (float)FVar47.Value;
      uStack_2dc = uVar48;
      local_2b8 = FVar8;
      FThreadStats::AddMessage(FVar8,CycleScopeStart);
      bVar39 = true;
      goto LAB_14864de3d;
    }
  }
  bVar14 = bVar40;
  bVar13 = bVar39;
  bVar39 = false;
  local_2b8 = local_2b0;
LAB_14864de3d:
  (**(code **)(this->MeshObject->_padding_ + 0x68))(this->MeshObject,&local_208);
  iVar41 = param_2->ArrayNum;
  uVar50 = (ulonglong)iVar41;
  piVar1 = &param_2->ArrayNum;
  iVar7 = (this->ShadowCapsuleData).ArrayNum;
  uVar48 = iVar7 + iVar41;
  if (iVar41 < (int)uVar48) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,iVar7,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  }
  else {
    if ((int)uVar48 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar48);
    }
    if ((int)uVar48 < iVar41) {
      uVar49 = iVar41 - uVar48;
      if ((int)(uVar49 | uVar48) < 0) {
        bVar40 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar40) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      if (uVar49 != 0) {
        pFVar44 = (local_2c8->AllocatorInstance).Data + (longlong)(int)uVar48 * 0x20;
        iVar41 = (*piVar1 - uVar49) - uVar48;
        if (iVar41 != 0) {
          memmove(pFVar44,pFVar44 + (longlong)(int)uVar49 * 0x20,(longlong)iVar41 << 5);
        }
        *piVar1 = *piVar1 - uVar49;
      }
    }
  }
  iVar41 = (this->ShadowCapsuleData).ArrayNum;
  pFVar44 = (this->ShadowCapsuleData).AllocatorInstance.Data;
  uVar55 = SUB84(__real_3e45798ee0000000,0);
  uVar56 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
  local_298 = pFVar44 + (longlong)iVar41 * 0x48;
  local_2c0 = uVar50 << 5;
  while( true ) {
    pFVar46 = local_298;
    if ((this->ShadowCapsuleData).ArrayNum != iVar41) {
      local_2e7[0] = 0;
      `TCheckedPointerIterator<TTuple<int,UE::Math::TCapsuleShape<double>_>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_2e7);
    }
    FVar8 = local_2b8;
    if (pFVar44 == pFVar46) break;
    uVar48 = *(uint *)pFVar44;
    local_288 = (undefined4)this->_padding_;
    uStack_284 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    uStack_280 = (undefined4)this->_padding_;
    uStack_27c = *(undefined4 *)((longlong)&this->_padding_ + 4);
    local_278 = (undefined4)this->_padding_;
    uStack_274 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    uStack_270 = (undefined4)this->_padding_;
    uStack_26c = *(undefined4 *)((longlong)&this->_padding_ + 4);
    local_268 = (undefined4)this->_padding_;
    uStack_264 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    uStack_260 = (undefined4)this->_padding_;
    uStack_25c = *(undefined4 *)((longlong)&this->_padding_ + 4);
    local_258 = (undefined4)this->_padding_;
    uStack_254 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    uStack_250 = (undefined4)this->_padding_;
    uStack_24c = *(undefined4 *)((longlong)&this->_padding_ + 4);
    local_248 = (undefined4)this->_padding_;
    uStack_244 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    uStack_240 = (undefined4)this->_padding_;
    uStack_23c = *(undefined4 *)((longlong)&this->_padding_ + 4);
    local_238 = (undefined4)this->_padding_;
    uStack_234 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    uStack_230 = (undefined4)this->_padding_;
    uStack_22c = *(undefined4 *)((longlong)&this->_padding_ + 4);
    local_228 = (undefined4)this->_padding_;
    uStack_224 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    uStack_220 = (undefined4)this->_padding_;
    uStack_21c = *(undefined4 *)((longlong)&this->_padding_ + 4);
    local_218 = (undefined4)this->_padding_;
    uStack_214 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    uStack_210 = (undefined4)this->_padding_;
    uStack_20c = *(undefined4 *)((longlong)&this->_padding_ + 4);
    if (-1 < (int)uVar48) {
      if ((int)uVar48 < local_200) {
        uVar49 = 0;
        if ((int)uVar48 < local_200) {
          uVar49 = ~uVar48 >> 0x1f;
        }
        if (uVar49 == 0) {
          bVar40 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar40) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        lVar45 = (longlong)(int)uVar48 * 0x40;
        pfVar3 = (float *)(lVar45 + local_208);
        pfVar4 = (float *)(lVar45 + 0x10 + local_208);
        pfVar5 = (float *)(lVar45 + 0x20 + local_208);
        pfVar6 = (float *)(lVar45 + 0x30 + local_208);
        local_1e8._8_4_ = SUB84((double)pfVar3[1],0);
        local_1e8._0_8_ = (double)*pfVar3;
        local_1e8._12_4_ = (int)((ulonglong)(double)pfVar3[1] >> 0x20);
        local_1d8._8_4_ = SUB84((double)pfVar3[3],0);
        local_1d8._0_8_ = (double)pfVar3[2];
        local_1d8._12_4_ = (int)((ulonglong)(double)pfVar3[3] >> 0x20);
        local_1c8._8_4_ = SUB84((double)pfVar4[1],0);
        local_1c8._0_8_ = (double)*pfVar4;
        local_1c8._12_4_ = (int)((ulonglong)(double)pfVar4[1] >> 0x20);
        local_1b8._8_4_ = SUB84((double)pfVar4[3],0);
        local_1b8._0_8_ = (double)pfVar4[2];
        local_1b8._12_4_ = (int)((ulonglong)(double)pfVar4[3] >> 0x20);
        local_1a8._8_4_ = SUB84((double)pfVar5[1],0);
        local_1a8._0_8_ = (double)*pfVar5;
        local_1a8._12_4_ = (int)((ulonglong)(double)pfVar5[1] >> 0x20);
        local_198._8_4_ = SUB84((double)pfVar5[3],0);
        local_198._0_8_ = (double)pfVar5[2];
        local_198._12_4_ = (int)((ulonglong)(double)pfVar5[3] >> 0x20);
        local_188._8_4_ = SUB84((double)pfVar6[1],0);
        local_188._0_8_ = (double)*pfVar6;
        local_188._12_4_ = (int)((ulonglong)(double)pfVar6[1] >> 0x20);
        local_178._8_4_ = SUB84((double)pfVar6[3],0);
        local_178._0_8_ = (double)pfVar6[2];
        local_178._12_4_ = (int)((ulonglong)(double)pfVar6[3] >> 0x20);
        VectorMatrixMultiply
                  (&local_168,(TMatrix<double> *)local_1e8,(TMatrix<double> *)&this->_padding_);
        local_288 = local_168.M[0][0]._0_4_;
        uStack_284 = local_168.M[0][0]._4_4_;
        uStack_280 = local_168.M[0][1]._0_4_;
        uStack_27c = local_168.M[0][1]._4_4_;
        local_278 = local_168.M[0][2]._0_4_;
        uStack_274 = local_168.M[0][2]._4_4_;
        uStack_270 = local_168.M[0][3]._0_4_;
        uStack_26c = local_168.M[0][3]._4_4_;
        local_268 = local_168.M[1][0]._0_4_;
        uStack_264 = local_168.M[1][0]._4_4_;
        uStack_260 = local_168.M[1][1]._0_4_;
        uStack_25c = local_168.M[1][1]._4_4_;
        local_258 = local_168.M[1][2]._0_4_;
        uStack_254 = local_168.M[1][2]._4_4_;
        uStack_250 = local_168.M[1][3]._0_4_;
        uStack_24c = local_168.M[1][3]._4_4_;
        local_248 = local_168.M[2][0]._0_4_;
        uStack_244 = local_168.M[2][0]._4_4_;
        uStack_240 = local_168.M[2][1]._0_4_;
        uStack_23c = local_168.M[2][1]._4_4_;
        local_238 = local_168.M[2][2]._0_4_;
        uStack_234 = local_168.M[2][2]._4_4_;
        uStack_230 = local_168.M[2][3]._0_4_;
        uStack_22c = local_168.M[2][3]._4_4_;
        local_228 = local_168.M[3][0]._0_4_;
        uStack_224 = local_168.M[3][0]._4_4_;
        uStack_220 = local_168.M[3][1]._0_4_;
        uStack_21c = local_168.M[3][1]._4_4_;
        local_218 = local_168.M[3][2]._0_4_;
        uStack_214 = local_168.M[3][2]._4_4_;
        uStack_210 = local_168.M[3][3]._0_4_;
        uStack_20c = local_168.M[3][3]._4_4_;
      }
    }
    uVar38 = uStack_214;
    uVar37 = local_218;
    uVar36 = uStack_21c;
    uVar35 = uStack_220;
    uVar34 = uStack_224;
    uVar33 = local_228;
    uVar32 = uStack_234;
    uVar31 = local_238;
    uVar30 = uStack_23c;
    uVar29 = uStack_240;
    uVar28 = uStack_244;
    uVar27 = local_248;
    uVar26 = uStack_254;
    uVar25 = local_258;
    uVar24 = uStack_25c;
    uVar23 = uStack_260;
    uVar22 = uStack_264;
    uVar21 = local_268;
    uVar20 = uStack_274;
    uVar19 = local_278;
    uVar18 = uStack_27c;
    uVar17 = uStack_280;
    uVar16 = uStack_284;
    uVar15 = local_288;
    dVar53 = (double)CONCAT44(uStack_284,local_288) * (double)CONCAT44(uStack_284,local_288) +
             (double)CONCAT44(uStack_27c,uStack_280) * (double)CONCAT44(uStack_27c,uStack_280) +
             (double)CONCAT44(uStack_274,local_278) * (double)CONCAT44(uStack_274,local_278);
    if (dVar53 < (double)CONCAT44(uVar56,uVar55) || dVar53 == (double)CONCAT44(uVar56,uVar55)) {
      dVar53 = 0.0;
    }
    else {
      dVar53 = SQRT(dVar53);
    }
    dVar51 = (double)CONCAT44(uStack_264,local_268) * (double)CONCAT44(uStack_264,local_268) +
             (double)CONCAT44(uStack_25c,uStack_260) * (double)CONCAT44(uStack_25c,uStack_260) +
             (double)CONCAT44(uStack_254,local_258) * (double)CONCAT44(uStack_254,local_258);
    if (dVar51 < (double)CONCAT44(uVar56,uVar55) || dVar51 == (double)CONCAT44(uVar56,uVar55)) {
      dVar51 = 0.0;
    }
    else {
      dVar51 = SQRT(dVar51);
    }
    dVar10 = (double)CONCAT44(uStack_244,local_248) * (double)CONCAT44(uStack_244,local_248) +
             (double)CONCAT44(uStack_23c,uStack_240) * (double)CONCAT44(uStack_23c,uStack_240) +
             (double)CONCAT44(uStack_234,local_238) * (double)CONCAT44(uStack_234,local_238);
    if (dVar10 < (double)CONCAT44(uVar56,uVar55) || dVar10 == (double)CONCAT44(uVar56,uVar55)) {
      dVar10 = 0.0;
    }
    else {
      dVar10 = SQRT(dVar10);
    }
    if (dVar51 <= dVar53) {
      dVar51 = dVar53;
    }
    uVar48 = (uint)uVar50;
    if (dVar51 <= dVar10) {
      dVar51 = dVar10;
    }
    uVar49 = 0;
    if ((int)uVar48 < *piVar1) {
      uVar49 = ~uVar48 >> 0x1f;
    }
    local_2e0 = (float)dVar51;
    if (uVar49 == 0) {
      bVar40 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar40) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    dVar11 = *(double *)(pFVar44 + 8);
    dVar12 = *(double *)(pFVar44 + 0x10);
    uVar50 = (ulonglong)(uVar48 + 1);
    dVar53 = *(double *)(pFVar44 + 0x18);
    pFVar46 = (local_2c8->AllocatorInstance).Data + local_2c0;
    local_2c0 = local_2c0 + 0x20;
    dVar52 = __real_3ff0000000000000 * (double)CONCAT44(uVar36,uVar35);
    dVar54 = __real_3ff0000000000000 * (double)CONCAT44(uVar38,uVar37);
    dVar51 = (local_2a0->field0_0x0)._s_0.Y;
    dVar10 = (local_2a0->field0_0x0)._s_0.Z;
    *(float *)pFVar46 =
         (float)(dVar12 * (double)CONCAT44(uVar22,uVar21) + dVar11 * (double)CONCAT44(uVar16,uVar15)
                 + dVar53 * (double)CONCAT44(uVar28,uVar27) +
                 __real_3ff0000000000000 * (double)CONCAT44(uVar34,uVar33) +
                (local_2a0->field0_0x0)._s_0.X);
    *(float *)(pFVar46 + 4) =
         (float)(dVar12 * (double)CONCAT44(uVar24,uVar23) + dVar11 * (double)CONCAT44(uVar18,uVar17)
                 + dVar53 * (double)CONCAT44(uVar30,uVar29) + dVar52 + dVar51);
    *(float *)(pFVar46 + 8) =
         (float)(dVar12 * (double)CONCAT44(uVar26,uVar25) + dVar11 * (double)CONCAT44(uVar20,uVar19)
                 + dVar53 * (double)CONCAT44(uVar32,uVar31) + dVar54 + dVar10);
    *(float *)(pFVar46 + 0xc) = (float)((double)local_2e0 * *(double *)(pFVar44 + 0x20));
    dVar52 = *(double *)(pFVar44 + 0x28);
    dVar11 = *(double *)(pFVar44 + 0x30);
    dVar53 = *(double *)(pFVar44 + 0x38);
    dVar51 = dVar11 * (double)CONCAT44(uStack_264,local_268) +
             dVar52 * (double)CONCAT44(uStack_284,local_288) +
             dVar53 * (double)CONCAT44(uStack_244,local_248) +
             (double)CONCAT44(uStack_224,local_228) * 0.0;
    dVar10 = dVar11 * (double)CONCAT44(uStack_25c,uStack_260) +
             dVar52 * (double)CONCAT44(uStack_27c,uStack_280) +
             dVar53 * (double)CONCAT44(uStack_23c,uStack_240) +
             (double)CONCAT44(uStack_21c,uStack_220) * 0.0;
    uVar55 = SUB84(__real_3e45798ee0000000,0);
    uVar56 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
    dVar53 = dVar11 * (double)CONCAT44(uStack_254,local_258) +
             dVar52 * (double)CONCAT44(uStack_274,local_278) +
             dVar53 * (double)CONCAT44(uStack_234,local_238) +
             (double)CONCAT44(uStack_214,local_218) * 0.0;
    dVar52 = dVar10 * dVar10 + dVar51 * dVar51 + dVar53 * dVar53;
    if (dVar52 <= __real_3e45798ee0000000) {
      dVar51 = 0.0;
      dVar10 = 0.0;
      dVar53 = 0.0;
    }
    else {
      local_1f0 = __real_3ff0000000000000 / SQRT(dVar52);
      dVar51 = local_1f0 * dVar51;
      dVar10 = local_1f0 * dVar10;
      dVar53 = local_1f0 * dVar53;
    }
    *(float *)(pFVar46 + 0x10) = (float)dVar51;
    *(float *)(pFVar46 + 0x14) = (float)dVar10;
    *(float *)(pFVar46 + 0x18) = (float)dVar53;
    pFVar2 = pFVar44 + 0x40;
    pFVar44 = pFVar44 + 0x48;
    *(float *)(pFVar46 + 0x1c) = (float)((double)local_2e0 * *(double *)pFVar2);
  }
  if (bVar14) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar39) {
    FThreadStats::AddMessage(FVar8,CycleScopeEnd);
  }
  return;
}

// GetSkinningSceneExtensionProxy @ 14864f060

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FSkinningSceneExtensionProxy * __thiscall
FSkeletalMeshSceneProxy::GetSkinningSceneExtensionProxy(FSkeletalMeshSceneProxy *this)

{
  return (FSkinningSceneExtensionProxy *)0x0;
}

// GetStaticMeshBatch @ 14864f4f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ESkinVertexColorChannel": Some values do not have unique names */

void __thiscall
FSkeletalMeshSceneProxy::GetStaticMeshBatch
          (FSkeletalMeshSceneProxy *this,FSkeletalMeshLODRenderData *param_1,int param_2,
          FSkelMeshRenderSection *param_3,int param_4,FSectionElementInfo *param_5,
          FVertexFactory *param_6,ESceneDepthPriorityGroup param_7,FMeshBatch *param_8)

{
  ForElementType<FMeshBatchElement> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FMaterialRenderProxy *pFVar5;
  FInstanceDataBufferHeader *pFVar6;
  uint uVar7;
  ForElementType<FMeshBatchElement> FVar8;
  uint uVar9;
  FInstanceDataBufferHeader local_38;
  
  uVar9 = 0;
  if ((param_8->Elements).ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar1 = (param_8->Elements).AllocatorInstance.SecondaryData;
  FVar8 = (ForElementType<FMeshBatchElement>)param_8;
  if (FVar1 != (ForElementType<FMeshBatchElement>)0x0) {
    FVar8 = FVar1;
  }
  param_8->VertexFactory = param_6;
  *(ESceneDepthPriorityGroup *)&param_8->field_0xd4 =
       (param_7 << 10 ^ *(uint *)&param_8->field_0xd4) & 0x1c00 ^ *(uint *)&param_8->field_0xd4;
  pFVar5 = (FMaterialRenderProxy *)(**(code **)(param_5->Material->_padding_ + 0x310))();
  param_8->MaterialRenderProxy = pFVar5;
  uVar7 = ((uint)(byte)this->_padding_ ^ ZPULL(*(undefined4 *)&param_8->field_0xd4,0,1)) & 1 ^
          *(undefined4 *)&param_8->field_0xd4;
  *(uint *)&param_8->field_0xd4 = uVar7;
  bVar3 = param_5->bEnableShadowCasting;
  uVar7 = ((uint)bVar3 * 4 ^ uVar7) & 4 ^ uVar7;
  *(uint *)&param_8->field_0xd4 = uVar7;
  if (((bVar3 & 1U) != 0) && ((this->_padding_ & 0x20000000000) != 0)) {
    uVar9 = 0x800000;
  }
  param_8->LODIndex = (schar)param_2;
  param_8->SegmentIndex = param_4;
  *(uint *)&param_8->field_0xd4 = uVar7 & 0xff7ffc7f | uVar9;
  param_8->MeshIdInPrimitive = (ushort)param_4;
  iVar4 = (**(code **)(this->MeshObject->_padding_ + 0x120))(this->MeshObject,param_2);
  if ((this->bAllowDynamicMeshBounds != 0) && (-1 < iVar4)) {
    param_8->DynamicMeshBoundsIndex = iVar4 + param_4;
  }
  *(longlong *)FVar8 = this->_padding_;
  *(uint *)((longlong)FVar8 + 0x58) = param_3->BaseIndex;
  *(uint *)((longlong)FVar8 + 0x68) = param_3->BaseVertexIndex;
  *(uint *)((longlong)FVar8 + 0x6c) =
       (param_1->StaticVertexBuffers).PositionVertexBuffer.NumVertices - 1;
  *(uint *)((longlong)FVar8 + 0x5c) = param_3->NumTriangles;
  if ((param_1->MultiSizeIndexContainer).IndexBuffer == (FRawStaticIndexBuffer16or32Interface *)0x0)
  {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IndexBuffer != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                       ,0x56,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(FRawStaticIndexBuffer16or32Interface **)((longlong)FVar8 + 0x18) =
       (param_1->MultiSizeIndexContainer).IndexBuffer;
  *(uint *)((longlong)FVar8 + 0x7c) =
       (*(byte *)((longlong)&this->_padding_ + 4) & 0xffffff80) << 6 |
       *(uint *)((longlong)FVar8 + 0x7c) & 0xffffdfff;
  pFVar6 = FPrimitiveSceneProxy::GetInstanceDataHeader((FPrimitiveSceneProxy *)this,&local_38);
  *(int *)((longlong)FVar8 + 0x60) = pFVar6->NumInstances;
  return;
}

// GetStaticRayTracingGeometries @ 14864f700

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<FRayTracingGeometry_*,TSizedDefaultAllocator<32>_> * __thiscall
FSkeletalMeshSceneProxy::GetStaticRayTracingGeometries
          (FSkeletalMeshSceneProxy *this,
          TArray<FRayTracingGeometry_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  TArray<FRayTracingGeometry_*,TSizedDefaultAllocator<32>_> *pTVar7;
  uint uVar8;
  ulonglong uVar9;
  FSkeletalMeshRenderData *pFVar10;
  ulonglong uVar11;
  ForAnyElementType local_38;
  int local_30 [2];
  
  bVar4 = IsRayTracingEnabled();
  if ((!bVar4) || (this->bRayTraceStatic == '\0')) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  uVar9 = 0;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30[0] = 0;
  local_30[1] = 0;
  iVar1 = (this->RenderData->LODRenderData).Array.ArrayNum;
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar1,&local_38,local_30,local_30 + 1);
  memset(local_38.Data + (longlong)iVar5 * 8,0,(longlong)iVar1 << 3);
  pFVar10 = this->RenderData;
  uVar11 = uVar9;
  if (0 < (pFVar10->LODRenderData).Array.ArrayNum) {
    do {
      uVar8 = (uint)uVar9;
      uVar6 = 0;
      if ((int)uVar8 < (pFVar10->LODRenderData).Array.ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<FRayTracingGeometry_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
      lVar2 = *(longlong *)((pFVar10->LODRenderData).Array.AllocatorInstance.Data + uVar11);
      if (*(int *)(lVar2 + 300) != 0) {
        if ((*(int *)(lVar2 + 0x65c) < 1) &&
           (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_790285883818376217>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshSceneProxy.cpp"
                               ,999,"LODRenderData.NumReferencingStaticSkeletalMeshObjects > 0"),
           bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TArray<FRayTracingGeometry_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar7;
        }
        uVar6 = 0;
        if ((int)uVar8 < local_30[0]) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TArray<FRayTracingGeometry_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar7;
        }
        *(longlong *)(local_38.Data + uVar11) = lVar2 + 0x668;
      }
      pFVar10 = this->RenderData;
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar11 = uVar11 + 8;
    } while ((int)(uVar8 + 1) < (pFVar10->LODRenderData).Array.ArrayNum);
  }
  (__return_storage_ptr__->AllocatorInstance).Data = local_38.Data;
  __return_storage_ptr__->ArrayNum = local_30[0];
  __return_storage_ptr__->ArrayMax = local_30[1];
  return __return_storage_ptr__;
}

// GetTypeHash @ 148650360

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ulong64 __thiscall FSkeletalMeshSceneProxy::GetTypeHash(FSkeletalMeshSceneProxy *this)

{
  return 0x155245408;
}

// GetViewRelevance @ 148650eb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPrimitiveViewRelevance * __thiscall
FSkeletalMeshSceneProxy::GetViewRelevance
          (FSkeletalMeshSceneProxy *this,FPrimitiveViewRelevance *__return_storage_ptr__,
          FSceneView *param_1)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  FSceneViewFamily *pFVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  FSkeletalMeshObject::UpdateMinDesiredLODLevel
            (this->MeshObject,param_1,(TBoxSphereBounds<double,double> *)&this->_padding_);
  pFVar4 = param_1->Family;
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  __return_storage_ptr__->bRenderInMainPass = 1;
  bVar5 = FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)this,param_1);
  uVar10 = 0;
  if ((!bVar5) || (uVar7 = 4, (pFVar4->EngineShowFlags).SkeletalMeshes == 0)) {
    uVar7 = uVar10;
  }
  __return_storage_ptr__->bDrawRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 = *(uint *)&__return_storage_ptr__->field_0x8 | uVar7;
  bVar5 = FPrimitiveSceneProxy::IsShadowCast((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bShadowRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar5 << 3;
  uVar7 = uVar10;
  if (((((((this->bRenderStatic != '\0') || (GSkeletalMeshUseCachedMDCs != false)) &&
         (this->MeshObject->bSupportsStaticRelevance != false)) &&
        ((bVar2 = this->RenderData->CurrentFirstLODIdx,
         iVar6 = (**(code **)(this->MeshObject->_padding_ + 0xa0))(), (int)(uint)bVar2 <= iVar6 &&
         (bVar5 = IsRichView(param_1->Family), !bVar5)))) &&
       (((pFVar4->EngineShowFlags).Bounds == 0 &&
        (((pFVar4->EngineShowFlags).Bones == 0 && ((pFVar4->EngineShowFlags).Collision == 0)))))) &&
      ((pFVar4->EngineShowFlags).VisualizeGPUSkinCache == 0)) &&
     ((((this->_padding_ & 0x600) == 0 || ((pFVar4->EngineShowFlags).VertexColors == 0)) &&
      (this->bForceWireframe == '\0')))) {
    uVar7 = 1;
  }
  uVar7 = *(uint *)&__return_storage_ptr__->field_0x8 & 0xfffffffe | uVar7;
  *(uint *)&__return_storage_ptr__->field_0x8 = (~uVar7 * 2 ^ uVar7) & 2 ^ uVar7;
  bVar5 = FPrimitiveSceneProxy::ShouldRenderCustomDepth((FPrimitiveSceneProxy *)this);
  __return_storage_ptr__->bRenderCustomDepth = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar5 << 5;
  uVar9 = ((uint)*(byte *)((longlong)&this->_padding_ + 3) << 4 ^
          *(uint *)&__return_storage_ptr__->field_0x8) & 0x80 ^
          *(uint *)&__return_storage_ptr__->field_0x8;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar9;
  uVar8 = -(uint)((this->_padding_ & 0xc000000) != 0) & 0x40;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar8 | uVar9 & 0xffffffbf;
  uVar7 = uVar10;
  if (*(char *)((longlong)&this->_padding_ + 1) != '\x01') {
    uVar7 = 0x2000;
  }
  uVar7 = uVar7 | uVar8 | uVar9 & 0xffffdfbf;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar7;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       ((uint)*(byte *)((longlong)&this->_padding_ + 7) << 0xe ^ uVar7) & 0x4000 ^ uVar7;
  FMaterialRelevance::SetPrimitiveViewRelevance(&this->MaterialRelevance,__return_storage_ptr__);
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | (char)(*(uint *)&(pFVar4->EngineShowFlags).field_0xc >> 5) << 7;
  cVar3 = (char)this->_padding_;
  if ((((cVar3 == '\x02') || (cVar3 == '\x01')) ||
      (((this->_padding_ & 0x1000000000000) != 0 ||
       ((bVar2 = *(byte *)((longlong)&this->_padding_ + 2), (char)bVar2 < '\0' ||
        ((bVar2 & 0x72) != 0)))))) &&
     ((uVar10 = 0, (__return_storage_ptr__->_padding_ & 0x400000000) != 0 &&
      (__return_storage_ptr__->bRenderInMainPass != 0)))) {
    uVar10 = 0x10;
  }
  __return_storage_ptr__->bVelocityRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 = *(uint *)&__return_storage_ptr__->field_0x8 | uVar10
  ;
  return __return_storage_ptr__;
}

// GetWorldMatrices @ 1486516f0

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

bool __thiscall
FSkeletalMeshSceneProxy::GetWorldMatrices
          (FSkeletalMeshSceneProxy *this,TMatrix<double> *param_1,TMatrix<double> *param_2)

{
  double dVar1;
  bool bVar2;
  TMatrix<double> *pTVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_b8 [32];
  TMatrix<double> local_98;
  ulonglong local_18;
  
  uVar7 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar5 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  dVar1 = (double)this->_padding_;
  param_1->M[0][0] = (double)this->_padding_;
  param_1->M[0][1] = dVar1;
  dVar1 = (double)this->_padding_;
  param_1->M[0][2] = (double)this->_padding_;
  param_1->M[0][3] = dVar1;
  dVar1 = (double)this->_padding_;
  param_1->M[1][0] = (double)this->_padding_;
  param_1->M[1][1] = dVar1;
  dVar1 = (double)this->_padding_;
  param_1->M[1][2] = (double)this->_padding_;
  param_1->M[1][3] = dVar1;
  dVar1 = (double)this->_padding_;
  param_1->M[2][0] = (double)this->_padding_;
  param_1->M[2][1] = dVar1;
  dVar1 = (double)this->_padding_;
  param_1->M[2][2] = (double)this->_padding_;
  param_1->M[2][3] = dVar1;
  dVar1 = (double)this->_padding_;
  param_1->M[3][0] = (double)this->_padding_;
  param_1->M[3][1] = dVar1;
  dVar1 = (double)this->_padding_;
  param_1->M[3][2] = (double)this->_padding_;
  param_1->M[3][3] = dVar1;
  dVar1 = param_1->M[0][0];
  uVar4 = SUB84(dVar1,0) & uVar5;
  uVar6 = (uint)((ulonglong)dVar1 >> 0x20) & uVar7;
  if ((((((__real_3e45798ee0000000 <= (double)CONCAT44(uVar6,uVar4) &&
           (double)CONCAT44(uVar6,uVar4) != __real_3e45798ee0000000) ||
         (dVar1 = param_1->M[0][1], uVar4 = SUB84(dVar1,0) & uVar5,
         uVar6 = (uint)((ulonglong)dVar1 >> 0x20) & uVar7,
         __real_3e45798ee0000000 <= (double)CONCAT44(uVar6,uVar4) &&
         (double)CONCAT44(uVar6,uVar4) != __real_3e45798ee0000000)) ||
        (dVar1 = param_1->M[0][2], uVar4 = SUB84(dVar1,0) & uVar5,
        uVar6 = (uint)((ulonglong)dVar1 >> 0x20) & uVar7,
        __real_3e45798ee0000000 <= (double)CONCAT44(uVar6,uVar4) &&
        (double)CONCAT44(uVar6,uVar4) != __real_3e45798ee0000000)) ||
       ((dVar1 = param_1->M[1][0], uVar4 = SUB84(dVar1,0) & uVar5,
        uVar6 = (uint)((ulonglong)dVar1 >> 0x20) & uVar7,
        __real_3e45798ee0000000 <= (double)CONCAT44(uVar6,uVar4) &&
        (double)CONCAT44(uVar6,uVar4) != __real_3e45798ee0000000 ||
        (dVar1 = param_1->M[1][1], uVar4 = SUB84(dVar1,0) & uVar5,
        uVar6 = (uint)((ulonglong)dVar1 >> 0x20) & uVar7,
        __real_3e45798ee0000000 <= (double)CONCAT44(uVar6,uVar4) &&
        (double)CONCAT44(uVar6,uVar4) != __real_3e45798ee0000000)))) ||
      ((dVar1 = param_1->M[1][2], uVar4 = SUB84(dVar1,0) & uVar5,
       uVar6 = (uint)((ulonglong)dVar1 >> 0x20) & uVar7,
       __real_3e45798ee0000000 <= (double)CONCAT44(uVar6,uVar4) &&
       (double)CONCAT44(uVar6,uVar4) != __real_3e45798ee0000000 ||
       ((dVar1 = param_1->M[2][0], uVar4 = SUB84(dVar1,0) & uVar5,
        uVar6 = (uint)((ulonglong)dVar1 >> 0x20) & uVar7,
        __real_3e45798ee0000000 <= (double)CONCAT44(uVar6,uVar4) &&
        (double)CONCAT44(uVar6,uVar4) != __real_3e45798ee0000000 ||
        (dVar1 = param_1->M[2][1], uVar4 = SUB84(dVar1,0) & uVar5,
        uVar6 = (uint)((ulonglong)dVar1 >> 0x20) & uVar7,
        __real_3e45798ee0000000 <= (double)CONCAT44(uVar6,uVar4) &&
        (double)CONCAT44(uVar6,uVar4) != __real_3e45798ee0000000)))))) ||
     (dVar1 = param_1->M[2][2], uVar5 = SUB84(dVar1,0) & uVar5,
     uVar7 = (uint)((ulonglong)dVar1 >> 0x20) & uVar7,
     __real_3e45798ee0000000 <= (double)CONCAT44(uVar7,uVar5) &&
     (double)CONCAT44(uVar7,uVar5) != __real_3e45798ee0000000)) {
    pTVar3 = UE::Math::TMatrix<double>::InverseFast((TMatrix<double> *)&this->_padding_,&local_98);
    dVar1 = pTVar3->M[0][1];
    param_2->M[0][0] = pTVar3->M[0][0];
    param_2->M[0][1] = dVar1;
    dVar1 = pTVar3->M[0][3];
    param_2->M[0][2] = pTVar3->M[0][2];
    param_2->M[0][3] = dVar1;
    dVar1 = pTVar3->M[1][1];
    param_2->M[1][0] = pTVar3->M[1][0];
    param_2->M[1][1] = dVar1;
    dVar1 = pTVar3->M[1][3];
    param_2->M[1][2] = pTVar3->M[1][2];
    param_2->M[1][3] = dVar1;
    dVar1 = pTVar3->M[2][1];
    param_2->M[2][0] = pTVar3->M[2][0];
    param_2->M[2][1] = dVar1;
    dVar1 = pTVar3->M[2][3];
    param_2->M[2][2] = pTVar3->M[2][2];
    param_2->M[2][3] = dVar1;
    dVar1 = pTVar3->M[3][1];
    param_2->M[3][0] = pTVar3->M[3][0];
    param_2->M[3][1] = dVar1;
    dVar1 = pTVar3->M[3][3];
    bVar2 = true;
    param_2->M[3][2] = pTVar3->M[3][2];
    param_2->M[3][3] = dVar1;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

// HasDynamicIndirectShadowCasterRepresentation @ 1486519c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FSkeletalMeshSceneProxy::HasDynamicIndirectShadowCasterRepresentation(FSkeletalMeshSceneProxy *this)

{
  if (((this->_padding_ & 0x20000000000) != 0) && ((this->_padding_ & 0x1000000000000000) != 0)) {
    return true;
  }
  return false;
}

// HasRayTracingRepresentation @ 1486519e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FSkeletalMeshSceneProxy::HasRayTracingRepresentation(FSkeletalMeshSceneProxy *this)

{
  TConsoleVariableData<int> *pTVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  
  pTVar2 = CVarRayTracingSupportSkeletalMeshes.Ref;
  if (this->bRayTraceStatic != '\0') {
    return true;
  }
  bVar3 = IsInParallelGameThread();
  lVar5 = 4;
  if ((bVar3) || (bVar3 = IsInGameThread(), bVar3)) {
    lVar4 = 0;
  }
  else {
    lVar4 = 4;
  }
  pTVar1 = CVarRayTracingSkeletalMeshes.Ref;
  if (*(int *)((longlong)pTVar2->ShadowedValue + lVar4) != 0) {
    bVar3 = IsInParallelGameThread();
    if ((bVar3) || (bVar3 = IsInGameThread(), bVar3)) {
      lVar5 = 0;
    }
    if (*(int *)((longlong)pTVar1->ShadowedValue + lVar5) == 0) {
      return false;
    }
    return true;
  }
  return false;
}

// IsUsingDistanceCullFade @ 148659fa0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FSkeletalMeshSceneProxy::IsUsingDistanceCullFade(FSkeletalMeshSceneProxy *this)

{
  return (bool)(*(byte *)((longlong)&(this->MaterialRelevance).field0_0x0 + 7) >> 1 & 1);
}

// OnTransformChanged @ 14865abb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSkeletalMeshSceneProxy::OnTransformChanged
          (FSkeletalMeshSceneProxy *this,FRHICommandListBase *param_1)

{
  FSkeletalMeshObject *pFVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar2;
  
  pFVar1 = this->MeshObject;
  UNRECOVERED_JUMPTABLE = *(code **)(pFVar1->_padding_ + 0x108);
  uVar2 = (**(code **)(*(longlong *)this->_padding_ + 0x4e8))();
  (*UNRECOVERED_JUMPTABLE)(pFVar1,&this->_padding_,uVar2);
  pFVar1 = this->MeshObject;
  UNRECOVERED_JUMPTABLE = *(code **)(pFVar1->_padding_ + 0x110);
  uVar2 = (**(code **)(*(longlong *)this->_padding_ + 0x4e8))();
                    /* WARNING: Could not recover jumptable at 0x00014865ac3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pFVar1,&this->_padding_,uVar2);
  return;
}

// UpdateLumenCardsFromBounds @ 14866bdf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall FSkeletalMeshSceneProxy::UpdateLumenCardsFromBounds(FSkeletalMeshSceneProxy *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  byte bVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  TConsoleVariableData<int> *pTVar13;
  atomic<unsigned_int> aVar14;
  bool bVar15;
  FCardRepresentationData *pFVar16;
  FCardRepresentationData *pFVar17;
  EShaderPlatform EVar18;
  double dVar19;
  undefined1 auStack_98 [80];
  undefined1 local_48;
  undefined7 uStack_47;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_98;
  pFVar17 = (FCardRepresentationData *)0x0;
  if (this->CardRepresentationData != (FCardRepresentationData *)0x0) {
    (**(code **)this->CardRepresentationData->_padding_)();
    this->CardRepresentationData = (FCardRepresentationData *)0x0;
  }
  pTVar13 = CVarMeshCardRepresentationSkeletalMesh.Ref;
  if ((this->_padding_ & 0x400000000) == 0) {
    return;
  }
  bVar7 = (this->FeatureLevel).Value;
  if (bVar7 == 5) {
    EVar18 = SP_NumPlatforms;
  }
  else {
    EVar18 = GRHIGlobals.ShaderPlatformForFeatureLevel[bVar7];
  }
  bVar15 = IsInParallelGameThread();
  if (!bVar15) {
    bVar15 = IsInGameThread();
    pFVar16 = (FCardRepresentationData *)&DAT_00000004;
    if (!bVar15) goto LAB_14866be8f;
  }
  pFVar16 = pFVar17;
LAB_14866be8f:
  if ((*(int *)((longlong)pTVar13[-1].ShadowedValue + (longlong)&pFVar16->MeshCardsBuildData) != 0)
     && (bVar15 = DoesPlatformSupportLumenGI(EVar18,false), bVar15)) {
    pFVar16 = ::operator_new(0x98);
    if (pFVar16 != (FCardRepresentationData *)0x0) {
      pFVar16->_padding_ = (longlong)&___7FCardRepresentationData__6B_;
      (pFVar16->MeshCardsBuildData).Bounds.Min.field0_0x0._s_0.X = 0.0;
      (pFVar16->MeshCardsBuildData).Bounds.Min.field0_0x0._s_0.Y = 0.0;
      (pFVar16->MeshCardsBuildData).Bounds.Min.field0_0x0._s_0.Z = 0.0;
      (pFVar16->MeshCardsBuildData).Bounds.Max.field0_0x0._s_0.X = 0.0;
      (pFVar16->MeshCardsBuildData).Bounds.Max.field0_0x0._s_0.Y = 0.0;
      (pFVar16->MeshCardsBuildData).Bounds.Max.field0_0x0._s_0.Z = 0.0;
      (pFVar16->MeshCardsBuildData).Bounds.IsValid = '\0';
      *(undefined8 *)(pFVar16->MeshCardsBuildData).Bounds.Pad = 0;
      (pFVar16->MeshCardsBuildData).CardBuildData.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (pFVar16->MeshCardsBuildData).CardBuildData.ArrayNum = 0;
      (pFVar16->MeshCardsBuildData).CardBuildData.ArrayMax = 0;
      (pFVar16->MeshCardsBuildData).DebugData.Surfels.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (pFVar16->MeshCardsBuildData).DebugData.Surfels.ArrayNum = 0;
      (pFVar16->MeshCardsBuildData).DebugData.Surfels.ArrayMax = 0;
      (pFVar16->MeshCardsBuildData).DebugData.SurfelRays.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (pFVar16->MeshCardsBuildData).DebugData.SurfelRays.ArrayNum = 0;
      (pFVar16->MeshCardsBuildData).DebugData.SurfelRays.ArrayMax = 0;
      (pFVar16->MeshCardsBuildData).DebugData.Clusters.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (pFVar16->MeshCardsBuildData).DebugData.Clusters.ArrayNum = 0;
      (pFVar16->MeshCardsBuildData).DebugData.Clusters.ArrayMax = 0;
      (pFVar16->MeshCardsBuildData).DebugData.NumSurfels = 0;
      (pFVar16->CardRepresentationDataId).Value = 0;
      LOCK();
      UNLOCK();
      aVar14 = (atomic<unsigned_int>)
               ((int)`public:___cdecl_FCardRepresentationData::FCardRepresentationData(void)___ptr64'
                     ::__l2::NextCardRepresentationId + 1);
      (pFVar16->CardRepresentationDataId).Value =
           (uint)`public:___cdecl_FCardRepresentationData::FCardRepresentationData(void)___ptr64'::
                 __l2::NextCardRepresentationId;
      `public:___cdecl_FCardRepresentationData::FCardRepresentationData(void)___ptr64'::__l2::
      NextCardRepresentationId = aVar14;
      pFVar17 = pFVar16;
    }
    this->CardRepresentationData = pFVar17;
    dVar1 = (this->PreSkinnedLocalBounds).Origin.field0_0x0._s_0.X;
    dVar2 = (this->PreSkinnedLocalBounds).BoxExtent.field0_0x0._s_0.Y;
    dVar3 = (this->PreSkinnedLocalBounds).Origin.field0_0x0._s_0.Y;
    dVar4 = (this->PreSkinnedLocalBounds).Origin.field0_0x0._s_0.Z;
    dVar5 = (this->PreSkinnedLocalBounds).BoxExtent.field0_0x0._s_0.X;
    dVar19 = dVar3 - dVar2;
    dVar6 = (this->PreSkinnedLocalBounds).BoxExtent.field0_0x0._s_0.Z;
    local_48 = 1;
    dVar10 = dVar5 + dVar1;
    (pFVar17->MeshCardsBuildData).bMostlyTwoSided = true;
    dVar11 = dVar6 + dVar4;
    auVar9._8_4_ = SUB84(dVar19,0);
    auVar9._0_8_ = dVar1 - dVar5;
    auVar9._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
    *(undefined1 (*) [16])&(pFVar17->MeshCardsBuildData).Bounds.Min.field0_0x0 = auVar9;
    auVar8._8_4_ = SUB84(dVar10,0);
    auVar8._0_8_ = dVar4 - dVar6;
    auVar8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(pFVar17->MeshCardsBuildData).Bounds.Min.field0_0x0 + 0x10) =
         auVar8;
    auVar12._8_4_ = SUB84(dVar11,0);
    auVar12._0_8_ = dVar2 + dVar3;
    auVar12._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(pFVar17->MeshCardsBuildData).Bounds.Max.field0_0x0 + 8) =
         auVar12;
    (pFVar17->MeshCardsBuildData).Bounds.IsValid = 1;
    (pFVar17->MeshCardsBuildData).Bounds.Pad[0] = (char)uStack_47;
    (pFVar17->MeshCardsBuildData).Bounds.Pad[1] = (char)((uint7)uStack_47 >> 8);
    (pFVar17->MeshCardsBuildData).Bounds.Pad[2] = (char)((uint7)uStack_47 >> 0x10);
    (pFVar17->MeshCardsBuildData).Bounds.Pad[3] = (char)((uint7)uStack_47 >> 0x18);
    (pFVar17->MeshCardsBuildData).Bounds.Pad[4] = (char)((uint7)uStack_47 >> 0x20);
    (pFVar17->MeshCardsBuildData).Bounds.Pad[5] = (char)((uint7)uStack_47 >> 0x28);
    (pFVar17->MeshCardsBuildData).Bounds.Pad[6] = (char)((uint7)uStack_47 >> 0x30);
    MeshCardRepresentation::SetCardsFromBounds(&pFVar17->MeshCardsBuildData,Disabled,false);
  }
  return;
}

// UpdateMorphMaterialUsage_GameThread @ 14866c840

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FSkeletalMeshSceneProxy::UpdateMorphMaterialUsage_GameThread
          (FSkeletalMeshSceneProxy *this,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FSkeletalMeshSceneProxy *pFVar1;
  bool bVar2;
  FMaterialRelevance_u_0 FVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  ulonglong *puVar8;
  ulong64 uVar9;
  ulonglong uVar10;
  UMaterial *this_00;
  TFunction_OwnedObject<_public:_void___cdecl_FSkeletalMeshSceneProxy::UpdateMorphMaterialUsage_GameThread(TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_>_&)_::_23_::<lambda_1>,1,1>
  *pTVar11;
  longlong lVar12;
  ForElementType<unsigned_int> FVar13;
  ForAnyElementType FVar14;
  ForAnyElementType _Dst;
  ForElementType<unsigned_int> _Dst_00;
  longlong *plVar15;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  uint *puVar19;
  int iVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong *puVar23;
  int iVar24;
  undefined1 auStackY_1f8 [32];
  FMaterialRelevance_u_0 local_1c8;
  FSkeletalMeshSceneProxy *local_1c0;
  int local_1b8;
  uint uStack_1b4;
  undefined1 *puStack_1b0;
  undefined4 local_1a8;
  int iStack_1a4;
  int iStack_1a0;
  undefined4 uStack_19c;
  UMaterialInterface *local_198;
  FSparseArrayAllocationInfo local_190;
  undefined1 local_178 [32];
  ForElementType<unsigned_int> local_158;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  undefined1 local_140 [8];
  ForAnyElementType local_138;
  uint local_130;
  undefined1 local_128 [12];
  uint uStack_11c;
  TBitArray<FDefaultBitArrayAllocator> local_118;
  int local_f8;
  int local_f4;
  FScriptContainerElement local_f0 [8];
  ForAnyElementType local_e8;
  uint local_e0;
  TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator> *local_d8;
  undefined1 auStack_d0 [32];
  longlong *local_b0;
  undefined1 local_a8 [32];
  void *local_88;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  ForElementType<FSetElementId> local_68;
  int local_60;
  UMaterial *local_58;
  FMaterialRelevance_u_0 local_50;
  FSkeletalMeshSceneProxy *local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  bVar2 = 0 < param_1->ArrayNum;
  if (bVar2 == this->bMaterialsNeedMorphUsage_GameThread) {
    return;
  }
  uVar6 = 1;
  local_118.AllocatorInstance.InlineData._0_8_ =
       &(this->MaterialsInUse_GameThread).Elements.field_0x10;
  this->bMaterialsNeedMorphUsage_GameThread = bVar2;
  local_178._8_4_ = 0;
  local_178._0_8_ = (FScriptContainerElement *)0x0;
  local_178._8_8_ = 0;
  local_158 = (ForElementType<unsigned_int>)0x0;
  local_150 = 0;
  iVar20 = 0;
  local_14c = 0x80;
  local_148 = -1;
  local_144 = 0;
  local_138.Data = (FScriptContainerElement *)0x0;
  local_130 = 0;
  iVar17 = *(int *)&(this->MaterialsInUse_GameThread).Elements.field_0x28;
  local_118.AllocatorInstance.SecondaryData._0_4_ = iVar20;
  local_118.AllocatorInstance.InlineData._12_4_ = 0;
  if (iVar17 != 0) {
    puVar19 = *(uint **)&(this->MaterialsInUse_GameThread).Elements.field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)local_118.AllocatorInstance.InlineData._0_8_;
    }
    uVar18 = *puVar19;
    local_118.AllocatorInstance.SecondaryData._0_4_ = 0;
    iVar20 = 0;
    while (uVar18 == 0) {
      lVar12 = (longlong)iVar20;
      local_118.AllocatorInstance.SecondaryData._0_4_ =
           local_118.AllocatorInstance.SecondaryData._0_4_ + 0x20;
      iVar20 = iVar20 + 1;
      local_118.AllocatorInstance.InlineData._12_4_ = iVar17;
      if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_14866c961;
      uVar18 = puVar19[lVar12 + 1];
    }
    uVar6 = -uVar18 & uVar18;
    uVar16 = (ulonglong)uVar6 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_118.AllocatorInstance.InlineData._12_4_ =
         local_118.AllocatorInstance.SecondaryData._0_4_ + -1 + (int)lVar12;
    if (iVar17 < (int)local_118.AllocatorInstance.InlineData._12_4_) {
      local_118.AllocatorInstance.InlineData._12_4_ = iVar17;
    }
  }
LAB_14866c961:
  stack0xfffffffffffffee0 = CONCAT44(uVar6,iVar20);
  local_128._0_8_ = &this->MaterialsInUse_GameThread;
  local_118.AllocatorInstance.InlineData[8] = 0xff;
  local_118.AllocatorInstance.InlineData[9] = 0xff;
  local_118.AllocatorInstance.InlineData[10] = 0xff;
  local_118.AllocatorInstance.InlineData[0xb] = 0xff;
  uVar4 = local_118.AllocatorInstance.InlineData._8_4_;
  local_118.AllocatorInstance.InlineData[8] = 0xff;
  local_118.AllocatorInstance.InlineData[9] = 0xff;
  local_118.AllocatorInstance.InlineData[10] = 0xff;
  local_118.AllocatorInstance.InlineData[0xb] = 0xff;
  auStack_d0._0_8_ = stack0xfffffffffffffee0;
  local_118.AllocatorInstance.SecondaryData._4_4_ = uStack_19c;
  auStack_d0._24_8_ = local_118.AllocatorInstance.SecondaryData;
  auStack_d0._16_4_ = 0xffffffff;
  local_1c8 = (FMaterialRelevance_u_0)param_1;
  local_1c0 = this;
  local_d8 = (TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>
              *)local_128._0_8_;
  auStack_d0._8_8_ = local_118.AllocatorInstance.InlineData._0_8_;
  auStack_d0._20_4_ = local_118.AllocatorInstance.InlineData._12_4_;
  if ((int)local_118.AllocatorInstance.InlineData._12_4_ <
      *(int *)&(this->MaterialsInUse_GameThread).Elements.field_0x28) {
LAB_14866c9c0:
    FVar3 = local_1c8;
    pFVar1 = *(FSkeletalMeshSceneProxy **)
              (*(longlong *)&local_d8->Elements + (longlong)(int)auStack_d0._20_4_ * 0x10);
    local_1c0 = pFVar1;
    if (pFVar1 != (FSkeletalMeshSceneProxy *)0x0) {
      cVar5 = (**(code **)(pFVar1->_padding_ + 0x378))(pFVar1,0);
      if (cVar5 == '\0') {
        TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>::
        Emplace<UMaterialInterface_*_const_&>
                  ((TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>
                    *)local_178,&local_198,(bool *)&local_1c0);
      }
      else {
        puVar8 = *(ulonglong **)FVar3;
        puVar23 = puVar8 + *(int *)(FVar3.Raw + 8);
        for (; puVar8 != puVar23; puVar8 = puVar8 + 1) {
          if ((FSkeletalMeshSceneProxy *)*puVar8 == pFVar1) {
            if ((this->bMaterialsNeedMorphUsage_GameThread != false) &&
               (cVar5 = (**(code **)(pFVar1->_padding_ + 0x378))(pFVar1), cVar5 == '\0')) {
              if (local_144 == 0) {
                iVar20 = UE::Core::Private::
                         ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x10,8,1,(ForAnyElementType *)local_178,(int *)(local_178 + 8),
                                    (int *)(local_178 + 0xc));
                iVar17 = local_150;
                if (local_150 == 0) {
                  iVar24 = 0;
LAB_14866cae2:
                  if (local_14c < local_150 + 1) {
                    uVar6 = local_14c + 0x1fU >> 5;
                    uVar18 = local_150 + 0x20U >> 5;
                    if (uVar18 < 5) {
                      local_14c = 4;
                    }
                    else {
                      uVar16 = (ulonglong)uVar18;
                      if (uVar6 < 5) {
                        uVar6 = 0;
                      }
                      if (uVar6 == 0) {
                        uVar22 = 4;
                        if (4 < uVar16) {
                          uVar22 = uVar16;
                        }
                      }
                      else {
                        uVar22 = ((ulonglong)uVar18 * 3 >> 3) + 0x10 + uVar16;
                      }
                      uVar9 = FMemory::QuantizeSize(uVar22 * 4,0);
                      local_14c = (int)(uVar9 >> 2);
                      if (local_14c < (int)uVar18) {
                        local_14c = 0x7fffffff;
                      }
                    }
                    local_14c = local_14c << 5;
                    TBitArray<FDefaultBitArrayAllocator>::Realloc
                              ((TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10),local_150)
                    ;
                  }
                  local_150 = local_150 + 1;
                  uVar18 = local_150 >> 0x1f & 0x1f;
                  uVar6 = local_150 + uVar18;
                  iVar7 = (uVar6 & 0x1f) - uVar18;
                  if (iVar7 != 0) {
                    FVar13 = (ForElementType<unsigned_int>)((longlong)local_178 + 0x10);
                    if (local_158 != (ForElementType<unsigned_int>)0x0) {
                      FVar13 = local_158;
                    }
                    puVar19 = (uint *)((longlong)FVar13 + (longlong)((int)uVar6 >> 5) * 4);
                    *puVar19 = *puVar19 & 0xffffffffU >> (0x20U - (char)iVar7 & 0x1f);
                  }
                }
                else {
                  iVar24 = (int)(local_150 + (local_150 >> 0x1f & 0x1fU)) >> 5;
                  if (iVar24 != (int)((local_150 + -1 >> 0x1f & 0x1fU) + local_150 + -1) >> 5)
                  goto LAB_14866cae2;
                  local_150 = local_150 + 1;
                }
                FVar13 = (ForElementType<unsigned_int>)((longlong)local_178 + 0x10);
                if (local_158 != (ForElementType<unsigned_int>)0x0) {
                  FVar13 = local_158;
                }
                puVar19 = (uint *)((longlong)FVar13 + (longlong)iVar24 * 4);
                *puVar19 = *puVar19 & ~(1 << ((byte)iVar17 & 0x1f));
                iVar17 = local_148;
              }
              else {
                local_144 = local_144 + -1;
                iVar17 = *(int *)(local_178._0_8_ + (longlong)local_148 * 0x10 + 4);
                iVar20 = local_148;
                if (local_144 != 0) {
                  *(undefined4 *)(local_178._0_8_ + (longlong)iVar17 * 0x10) = 0xffffffff;
                }
              }
              local_148 = iVar17;
              TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                               *)local_178,&local_190,iVar20);
              if (local_190.Pointer == (ulonglong *)0x0) {
                puVar23 = (ulonglong *)0x0;
              }
              else {
                *(FSkeletalMeshSceneProxy **)local_190.Pointer = pFVar1;
                *(undefined4 *)((longlong)local_190.Pointer + 8) = 0xffffffff;
                puVar23 = local_190.Pointer;
              }
              uVar16 = *puVar23;
              uVar6 = ((uint)(uVar16 >> 0x14) & 0xffff ^ (uint)(uVar16 >> 4)) * -0x7a143595;
              uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
              uVar6 = uVar6 >> 0x10 ^ uVar6;
              if ((local_178._8_4_ - local_144 == 1) || (local_178._8_4_ == local_144))
              goto LAB_14866cd04;
              FVar14.Data = (FScriptContainerElement *)local_140;
              if ((ForElementType<FSetElementId>)local_138.Data !=
                  (ForElementType<FSetElementId>)0x0) {
                FVar14.Data = local_138.Data;
              }
              iVar17 = *(int *)((longlong)FVar14.Data + (ulonglong)(local_130 - 1 & uVar6) * 4);
              if (iVar17 == -1) goto LAB_14866cd04;
              goto LAB_14866cca2;
            }
            break;
          }
        }
      }
    }
    goto LAB_14866cf77;
  }
LAB_14866cfad:
  local_118.AllocatorInstance.InlineData._8_4_ = uVar4;
  uVar6 = local_130;
  if (local_178._8_4_ != local_144) {
    local_118.MaxBits = 0x80;
    local_128._0_8_ = (FScriptContainerElement *)0x0;
    local_e8.Data = (FScriptContainerElement *)0x0;
    stack0xfffffffffffffee0 = 0;
    local_118.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_118.NumBits = 0;
    local_f8 = 0xffffffff;
    local_f4 = 0;
    local_e0 = 0;
    iVar17 = local_178._8_4_;
    if (1 < local_130) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_e8,0,local_130,4);
      iVar17 = local_178._8_4_;
    }
    FVar14.Data = (FScriptContainerElement *)local_140;
    if ((ForElementType<FSetElementId>)local_138.Data != (ForElementType<FSetElementId>)0x0) {
      FVar14.Data = local_138.Data;
    }
    _Dst.Data = local_f0;
    if (local_e8.Data != (FScriptContainerElement *)0x0) {
      _Dst.Data = local_e8.Data;
    }
    if (uVar6 != 0) {
      memcpy(_Dst.Data,FVar14.Data,(longlong)(int)uVar6 << 2);
      iVar17 = local_178._8_4_;
    }
    local_e0 = uVar6;
    TSparseArray<TSparseSetElement<UMaterialInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<UMaterialInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_128,iVar17);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar17,(ForAnyElementType *)local_128,(int *)(local_128 + 8),
               (int *)&uStack_11c);
    local_f8 = local_148;
    local_f4 = local_144;
    local_118.NumBits = 0;
    uVar6 = local_150 + 0x1fU & 0xffffffe0;
    if ((local_118.MaxBits < (int)uVar6) || (0x80 < local_118.MaxBits)) {
      local_118.MaxBits = 0x80;
      if (0x80 < (int)uVar6) {
        local_118.MaxBits = uVar6;
      }
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_118,0);
    }
    local_118.NumBits = local_150;
    if (local_150 != 0) {
      FVar13 = (ForElementType<unsigned_int>)((longlong)local_178 + 0x10);
      if (local_158 != (ForElementType<unsigned_int>)0x0) {
        FVar13 = local_158;
      }
      _Dst_00 = (ForElementType<unsigned_int>)&local_118;
      if (local_118.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        _Dst_00 = local_118.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)_Dst_00,(void *)FVar13,(ulonglong)(local_150 + 0x1fU >> 5) << 2);
    }
    if (iVar17 != 0) {
      memcpy((void *)local_128._0_8_,(void *)local_178._0_8_,(longlong)iVar17 << 4);
    }
    this_00 = UMaterial::GetDefaultMaterial(MD_Surface);
    FSceneInterface::GetShaderPlatform((FSceneInterface *)this->_padding_);
    UMaterialInterface::GetRelevance((UMaterialInterface *)this_00,(EShaderPlatform)&local_1c8);
    local_a8._0_8_ = (FScriptContainerElement *)0x0;
    local_a8._8_8_ = 0;
    local_88 = (void *)0x0;
    local_80 = 0;
    local_7c = 0x80;
    local_78 = 0xffffffff;
    local_74 = 0;
    local_68 = (ForElementType<FSetElementId>)0x0;
    local_60 = 0;
    TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>::
    operator=((TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>
               *)local_a8,
              (TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>
               *)local_128);
    local_50 = local_1c8;
    local_d8 = (TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>
                *)0x0;
    local_58 = this_00;
    local_48 = this;
    local_b0 = FMemory::Malloc(0x70,8);
    pTVar11 = UE::Core::Private::Function::
              TFunction_OwnedObject<`FSkeletalMeshSceneProxy::UpdateMorphMaterialUsage_GameThread'::__l23::<lambda_1>,1,1>
              ::
              TFunction_OwnedObject<_FSkeletalMeshSceneProxy::UpdateMorphMaterialUsage_GameThread_::__l23::<lambda_1>,1,1><_FSkeletalMeshSceneProxy::UpdateMorphMaterialUsage_GameThread_::__l23::<lambda_1>_>
                        (local_b0,(<lambda_1> *)local_a8);
    if (pTVar11 !=
        (TFunction_OwnedObject<_public:_void___cdecl_FSkeletalMeshSceneProxy::UpdateMorphMaterialUsage_GameThread(TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_>_&)_::_23_::<lambda_1>,1,1>
         *)&DAT_fffffffffffffff8) {
      local_d8 = (TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>
                  *)UE::Core::Private::Function::
                    TFunctionRefCaller<`FSkeletalMeshSceneProxy::UpdateMorphMaterialUsage_GameThread'::__l23::<lambda_1>,void>
                    ::Call;
    }
    FRenderCommandDispatcher::
    Enqueue<TRenderCommandTag<_FSkeletalMeshSceneProxy::UpdateMorphMaterialUsage_GameThread_::__l23::TSTR_UpdateSkelProxyLODSectionElementsCmd1565>_>
              (&UE::RenderCommandPipe::SkeletalMesh,(TUniqueFunction<void___cdecl(void)> *)&local_d8
              );
    if (local_d8 !=
        (TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator> *)
        0x0) {
      plVar15 = (longlong *)(auStack_d0 + 8);
      if (local_b0 != (longlong *)0x0) {
        plVar15 = local_b0;
      }
      (**(code **)(*plVar15 + 0x10))();
    }
    local_60 = 0;
    if (local_68 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_68);
    }
    iVar17 = SUB84(local_a8._8_8_,4);
    local_a8._8_8_ = local_a8._8_8_ & 0xffffffff00000000;
    if (iVar17 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)local_a8,0,(int *)(local_a8 + 0xc));
    }
    local_78 = 0xffffffff;
    local_74 = 0;
    local_80 = 0;
    if (0x80 < local_7c) {
      local_7c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10),0);
    }
    if (local_88 != (void *)0x0) {
      FMemory::Free(local_88);
    }
    if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_a8._0_8_);
    }
    local_e0 = 0;
    if (local_e8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data);
    }
    uVar16 = stack0xfffffffffffffee0 >> 0x20;
    stack0xfffffffffffffee0 = stack0xfffffffffffffee0 & 0xffffffff00000000;
    if ((int)uVar16 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)local_128,0,(int *)&uStack_11c);
    }
    local_f8 = 0xffffffff;
    local_f4 = 0;
    local_118.NumBits = 0;
    if (0x80 < (uint)local_118.MaxBits) {
      local_118.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_118,0);
    }
    if (local_118.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_118.AllocatorInstance.SecondaryData);
    }
    if ((FScriptContainerElement *)local_128._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_128._0_8_);
    }
  }
  local_130 = 0;
  if ((ForElementType<FSetElementId>)local_138.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_138.Data);
  }
  TSparseArray<TSparseSetElement<UMaterialInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UMaterialInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<UMaterialInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_178);
  return;
  while (iVar17 = *(int *)(local_178._0_8_ + (longlong)iVar17 * 0x10 + 8), iVar17 != -1) {
LAB_14866cca2:
    if (*(ulonglong *)(local_178._0_8_ + (longlong)iVar17 * 0x10) == uVar16) {
      if (iVar17 != -1) {
        *(ulonglong *)(local_178._0_8_ + (longlong)iVar17 * 0x10) = uVar16;
        TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::RemoveAtUninitialized
                  ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_178,local_190.Index,1);
        goto LAB_14866cf77;
      }
      break;
    }
  }
LAB_14866cd04:
  uVar21 = local_178._8_4_ - local_144;
  uVar18 = 1;
  if (3 < uVar21) {
    uVar16 = (ulonglong)((uVar21 >> 1) + 7) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar18 = 1 << ((byte)lVar12 & 0x1f);
  }
  if (((int)uVar21 < 1) || ((int)uVar18 <= (int)local_130)) {
    uVar6 = local_130 - 1 & uVar6;
    *(uint *)((longlong)puVar23 + 0xc) = uVar6;
    FVar14.Data = (FScriptContainerElement *)local_140;
    if ((ForElementType<FSetElementId>)local_138.Data != (ForElementType<FSetElementId>)0x0) {
      FVar14.Data = local_138.Data;
    }
    uVar16 = (longlong)(int)local_130 - 1U & (longlong)(int)uVar6;
    *(undefined4 *)(puVar23 + 1) = *(undefined4 *)((longlong)FVar14.Data + uVar16 * 4);
    *(int *)((longlong)FVar14.Data + uVar16 * 4) = local_190.Index;
    goto LAB_14866cf77;
  }
  local_130 = uVar18;
  if ((ForElementType<FSetElementId>)local_138.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_138,0,0,4);
  }
  if (uVar18 != 0) {
    uVar6 = uVar18;
    if (uVar18 < 2) {
      if ((ForElementType<FSetElementId>)local_138.Data != (ForElementType<FSetElementId>)0x0) {
        uVar6 = 0;
        goto LAB_14866cd70;
      }
    }
    else {
LAB_14866cd70:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_138,0,uVar6,4);
    }
    if (0 < (int)uVar18) {
      uVar22 = (ulonglong)uVar18;
      uVar16 = 0;
      do {
        FVar14.Data = (FScriptContainerElement *)local_140;
        if ((ForElementType<FSetElementId>)local_138.Data != (ForElementType<FSetElementId>)0x0) {
          FVar14.Data = local_138.Data;
        }
        uVar10 = uVar16 & (longlong)(int)uVar18 - 1U;
        uVar16 = uVar16 + 1;
        *(undefined4 *)((longlong)FVar14.Data + uVar10 * 4) = 0xffffffff;
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
    }
  }
  if (local_130 != 0) {
    puStack_1b0 = local_178 + 0x10;
    local_1b8 = 0;
    uStack_1b4 = 1;
    iStack_1a4 = 0;
    iStack_1a0 = 0;
    if (local_150 != 0) {
      FVar13 = (ForElementType<unsigned_int>)((longlong)local_178 + 0x10);
      if (local_158 != (ForElementType<unsigned_int>)0x0) {
        FVar13 = local_158;
      }
      uVar6 = *(uint *)FVar13;
      iStack_1a0 = 0;
      local_1b8 = 0;
      while (uVar6 == 0) {
        iStack_1a0 = iStack_1a0 + 0x20;
        lVar12 = (longlong)local_1b8;
        local_1b8 = local_1b8 + 1;
        if ((int)(local_150 + -1 + (local_150 + -1 >> 0x1f & 0x1fU)) >> 5 < local_1b8)
        goto LAB_14866ce7e;
        uVar6 = ((uint *)((longlong)FVar13 + 4))[lVar12];
      }
      uStack_1b4 = -uVar6 & uVar6;
      uVar16 = (ulonglong)uStack_1b4 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iStack_1a4 = (int)lVar12 + -1 + iStack_1a0;
      if (local_150 < iStack_1a4) {
LAB_14866ce7e:
        iStack_1a4 = local_150;
      }
    }
    local_1a8 = 0xffffffff;
    local_128._0_8_ = (FScriptContainerElement *)local_178;
    local_118.AllocatorInstance.SecondaryData._4_4_ = uStack_19c;
    local_118.AllocatorInstance.SecondaryData._0_4_ = iStack_1a0;
    stack0xfffffffffffffee0 = CONCAT44(uStack_1b4,local_1b8);
    local_118.AllocatorInstance.InlineData._0_8_ = puStack_1b0;
    local_118.AllocatorInstance.InlineData[8] = 0xff;
    local_118.AllocatorInstance.InlineData[9] = 0xff;
    local_118.AllocatorInstance.InlineData[10] = 0xff;
    local_118.AllocatorInstance.InlineData[0xb] = 0xff;
    local_118.AllocatorInstance.InlineData[0xc] = (undefined1)iStack_1a4;
    local_118.AllocatorInstance.InlineData[0xd] = iStack_1a4._1_1_;
    local_118.AllocatorInstance.InlineData[0xe] = iStack_1a4._2_1_;
    local_118.AllocatorInstance.InlineData[0xf] = iStack_1a4._3_1_;
    if (iStack_1a4 < local_150) {
      do {
        puVar23 = (ulonglong *)
                  ((longlong)(int)local_118.AllocatorInstance.InlineData._12_4_ * 0x10 +
                  *(longlong *)local_128._0_8_);
        uVar6 = ((uint)(*puVar23 >> 0x14) & 0xffff ^ (uint)(*puVar23 >> 4)) * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        uVar6 = (uVar6 >> 0x10 ^ uVar6) & local_130 - 1;
        *(uint *)((longlong)puVar23 + 0xc) = uVar6;
        FVar14.Data = (FScriptContainerElement *)local_140;
        if ((ForElementType<FSetElementId>)local_138.Data != (ForElementType<FSetElementId>)0x0) {
          FVar14.Data = local_138.Data;
        }
        uVar16 = (longlong)(int)local_130 - 1U & (longlong)(int)uVar6;
        *(undefined4 *)(puVar23 + 1) = *(undefined4 *)((longlong)FVar14.Data + uVar16 * 4);
        uVar6 = ~uStack_11c;
        *(undefined4 *)((longlong)FVar14.Data + uVar16 * 4) =
             local_118.AllocatorInstance.InlineData._12_4_;
        local_118.AllocatorInstance.InlineData._8_4_ =
             local_118.AllocatorInstance.InlineData._8_4_ & uVar6;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_128 + 8));
      } while ((int)local_118.AllocatorInstance.InlineData._12_4_ <
               *(int *)(local_118.AllocatorInstance.InlineData._0_8_ + 0x18));
    }
  }
LAB_14866cf77:
  auStack_d0._16_4_ = auStack_d0._16_4_ & ~auStack_d0._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
            ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_d0);
  if (*(int *)(auStack_d0._8_8_ + 0x18) <= (int)auStack_d0._20_4_) goto code_r0x00014866cf9f;
  goto LAB_14866c9c0;
code_r0x00014866cf9f:
  uVar4 = local_118.AllocatorInstance.InlineData._8_4_;
  goto LAB_14866cfad;
}

// operator() @ 15052e610

bool __thiscall
`FSkeletalMeshSceneProxy::GetDynamicRayTracingInstances'::__l53::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10;
  FString local_18;
  
  bVar4 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_790285883818376063>);
  if (bVar2) {
    local_res10 = *(FName *)(*(longlong *)(*(longlong *)this + 0x288) + 0x40);
    ::FName::ToString(&local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_790285883818376063>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15052e6a8;
    }
  }
  bVar2 = false;
LAB_15052e6a8:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15052e6e0

bool __thiscall
`FSkeletalMeshSceneProxy::GetDynamicElementsSection'::__l11::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10;
  FString local_18;
  
  bVar4 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_790285883818376319>);
  if (bVar2) {
    local_res10 = *(FName *)(*(longlong *)this + 0x230);
    ::FName::ToString(&local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_790285883818376319>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15052e784;
    }
  }
  bVar2 = false;
LAB_15052e784:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

