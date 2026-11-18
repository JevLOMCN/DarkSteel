// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 147

// UStaticMeshComponent @ 1479a7840

UStaticMeshComponent * __thiscall
UStaticMeshComponent::UStaticMeshComponent(UStaticMeshComponent *this,FVTableHelper *param_1)

{
  FLightmassPrimitiveSettings *pFVar1;
  
  UMeshComponent::UMeshComponent((UMeshComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  pFVar1->bUseTwoSidedLighting = 0;
  pFVar1->bUseVertexNormalForHemisphereGather = 0;
  pFVar1->bUseEmissiveForStaticLighting = 0;
  pFVar1->bShadowIndirectOnly = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->StaticMeshComponentInterface =
       (FActorStaticMeshComponentInterface)&___7FActorStaticMeshComponentInterface__6B_;
  (this->StaticMesh).field0_0x0.DebugPtr = (UStaticMesh *)0x0;
  this->WorldPositionOffsetDisableDistance = 0;
  (this->MeshPaintTextureCooked).field0_0x0.DebugPtr = (UTexture *)0x0;
  (this->MeshPaintTextureOverride).field0_0x0.DebugPtr = (UTexture *)0x0;
  (this->MaterialCacheTileCount).field0_0x0._s_0.X = 8;
  (this->MaterialCacheTileCount).field0_0x0._s_0.Y = 8;
  (this->MaterialCacheTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialCacheTextures).ArrayNum = 0;
  (this->MaterialCacheTextures).ArrayMax = 0;
  (this->LODData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LODData).ArrayNum = 0;
  (this->LODData).ArrayMax = 0;
  (this->StreamingTextureData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StreamingTextureData).ArrayNum = 0;
  (this->StreamingTextureData).ArrayMax = 0;
  (this->LightmassSettings).EmissiveLightFalloffExponent = 8.0;
  (this->LightmassSettings).EmissiveLightExplicitInfluenceRadius = 0.0;
  (this->LightmassSettings).EmissiveBoost = 1.0;
  (this->LightmassSettings).DiffuseBoost = 1.0;
  (this->LightmassSettings).FullyOccludedSamplesFraction = 1.0;
  *(undefined8 *)&this->OnGetNaniteResourcesEvent = 0;
  *(undefined8 *)&(this->OnGetNaniteResourcesEvent).field_0x8 = 0;
  *(undefined4 *)&(this->OnGetNaniteResourcesEvent).field_0x10 = 0;
  return this;
}

// UStaticMeshComponent @ 1479a7960

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UStaticMeshComponent * __thiscall
UStaticMeshComponent::UStaticMeshComponent(UStaticMeshComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FLightmassPrimitiveSettings *pFVar2;
  undefined1 *puVar3;
  FBodyInstance *pFVar4;
  
  UMeshComponent::UMeshComponent((UMeshComponent *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xfd;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  pFVar2->bUseTwoSidedLighting = 0;
  pFVar2->bUseVertexNormalForHemisphereGather = 0;
  pFVar2->bUseEmissiveForStaticLighting = 0;
  pFVar2->bShadowIndirectOnly = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  (this->StaticMesh).field0_0x0.DebugPtr = (UStaticMesh *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->WorldPositionOffsetDisableDistance = 0;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->StaticMeshComponentInterface =
       (FActorStaticMeshComponentInterface)&___7FActorStaticMeshComponentInterface__6B_;
  (this->MeshPaintTextureCooked).field0_0x0.DebugPtr = (UTexture *)0x0;
  (this->MeshPaintTextureOverride).field0_0x0.DebugPtr = (UTexture *)0x0;
  (this->MaterialCacheTileCount).field0_0x0._s_0.X = 8;
  (this->MaterialCacheTileCount).field0_0x0._s_0.Y = 8;
  (this->MaterialCacheTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialCacheTextures).ArrayNum = 0;
  (this->MaterialCacheTextures).ArrayMax = 0;
  (this->LODData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LODData).ArrayNum = 0;
  (this->LODData).ArrayMax = 0;
  (this->StreamingTextureData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StreamingTextureData).ArrayNum = 0;
  (this->StreamingTextureData).ArrayMax = 0;
  (this->LightmassSettings).EmissiveLightFalloffExponent = 8.0;
  (this->LightmassSettings).EmissiveLightExplicitInfluenceRadius = 0.0;
  (this->LightmassSettings).EmissiveBoost = 1.0;
  (this->LightmassSettings).DiffuseBoost = 1.0;
  (this->LightmassSettings).FullyOccludedSamplesFraction = 1.0;
  *(undefined8 *)&this->OnGetNaniteResourcesEvent = 0;
  *(undefined8 *)&(this->OnGetNaniteResourcesEvent).field_0x8 = 0;
  *(undefined4 *)&(this->OnGetNaniteResourcesEvent).field_0x10 = 0;
  UPrimitiveComponent::SetCollisionProfileName
            ((UPrimitiveComponent *)this,UCollisionProfile::BlockAllDynamic_ProfileName,true);
  this->bOverrideLightMapRes = '\0';
  this->bUseDefaultCollision = '\0';
  this->bPrecachedPSOs = '\0';
  this->bOverrideNavigationExport = '\0';
  this->bUseSubDivisions = '\x01';
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 | 0x10;
  this->bSupportMeshPainting = '\x01';
  this->bForceNavigationObstacle = '\x01';
  this->bEnableVertexColorMeshPainting = '\x01';
  this->bEnableTextureColorMeshPainting = '\x01';
  (this->WireframeColorOverride).field0_0x0.Bits = 0xffffffff;
  this->MinLOD = 0;
  this->OverriddenLightMapRes = 0x40;
  this->SubDivisionStepSize = 0x20;
  this->StreamingDistanceMultiplier = 1.0;
  *(undefined1 *)((longlong)&this->_padding_ + 5) = 1;
  puVar3 = &this->field_0x5ac;
  this->bForceNaniteForMasked = '\0';
  this->bMipLevelCallbackRegistered = '\0';
  this->bInitialEvaluateWorldPositionOffset = '\0';
  this->bEvaluateWorldPositionOffsetInRayTracing = '\0';
  this->bWorldPositionOffsetWritesVelocity = '\x01';
  this->bEvaluateWorldPositionOffset = '\x01';
  this->bForceDisableNanite = '\0';
  this->bDisallowNanite = '\0';
  this->DistanceFieldIndirectShadowMinVisibility = 0.1;
  pFVar4 = UPrimitiveComponent::GetBodyInstance((UPrimitiveComponent *)this,(FName)0x0,true,-1);
  *(byte *)&pFVar4->_padding_ = (byte)pFVar4->_padding_ | 0x20;
  return this;
}

// ~UStaticMeshComponent @ 1479a99e0

void __thiscall UStaticMeshComponent::~UStaticMeshComponent(UStaticMeshComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGetNaniteResourcesEvent);
  pFVar1 = (this->StreamingTextureData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FStaticMeshComponentLODInfo,int>
            ((FStaticMeshComponentLODInfo *)(this->LODData).AllocatorInstance.Data,
             (this->LODData).ArrayNum);
  pFVar1 = (this->LODData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialCacheTextures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMeshComponent::~UMeshComponent((UMeshComponent *)this);
  return;
}

// AddReferencedObjects @ 1479afd00

void __cdecl
UStaticMeshComponent::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  int iVar1;
  UStaticMeshComponent *pUVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res18 [16];
  
  pUVar2 = CastChecked<UStaticMeshComponent,UObject>(param_1);
  UActorComponent::AddReferencedObjects((UObject *)pUVar2,param_2);
  iVar1 = (pUVar2->LODData).ArrayNum;
  pFVar3 = (pUVar2->LODData).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x50;
  while( true ) {
    if ((pUVar2->LODData).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FStaticMeshComponentLODInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar3 == pFVar4) break;
    if (*(FMeshMapBuildData **)(pFVar3 + 0x28) != (FMeshMapBuildData *)0x0) {
      FMeshMapBuildData::AddReferencedObjects(*(FMeshMapBuildData **)(pFVar3 + 0x28),param_2);
    }
    pFVar3 = pFVar3 + 0x50;
  }
  return;
}

// AllowsAsyncPhysicsStateCreation @ 1479b1b00

bool __thiscall UStaticMeshComponent::AllowsAsyncPhysicsStateCreation(UStaticMeshComponent *this)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  
  if (((this->_padding_ & 0x20) != 0) && (lVar2 = this->_padding_, lVar2 != 0)) {
    pUVar3 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    iVar1 = (int)pUVar3->_padding_;
    if (((iVar1 <= *(int *)(lVar2 + 0x38)) &&
        ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar3->_padding_)) &&
       ((*(char *)((longlong)&this->_padding_ + 3) == '\x02' ||
        ((this->_padding_ & 0x400000000) == 0)))) {
      return false;
    }
  }
  return true;
}

// AllowsAsyncPhysicsStateDestruction @ 1479b1b80

bool __thiscall UStaticMeshComponent::AllowsAsyncPhysicsStateDestruction(UStaticMeshComponent *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001479b1b83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)this->_padding_)();
  return (bool)uVar1;
}

// ApplyComponentInstanceData @ 1479b2db0

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
UStaticMeshComponent::ApplyComponentInstanceData
          (UStaticMeshComponent *this,FStaticMeshComponentInstanceData *param_1)

{
  FScriptContainerElement *pFVar1;
  UStaticMesh *pUVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  undefined7 extraout_var;
  UWorld *pUVar17;
  UActorComponent *pUVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  UStaticMeshComponent *pUVar22;
  uint uVar23;
  UStaticMeshComponent *pUVar24;
  UStaticMeshComponent *pUVar25;
  UStaticMeshComponent *pUVar26;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  longlong local_res8;
  longlong local_res10;
  undefined8 local_res18;
  UWorld *local_res20;
  FComponentReregisterContextBase local_f8;
  FWeakObjectPtr local_f0;
  FWeakObjectPtr FStack_e8;
  UStaticMeshComponent *local_e0;
  FString local_d8;
  double local_c8;
  double local_c0;
  double local_b8;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FAssetLog local_80 [2];
  
  if ((param_1 == (FStaticMeshComponentInstanceData *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StaticMeshInstanceData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\StaticMeshComponent.cpp"
                          ,0xb8c,L""), bVar14)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar2 = (this->StaticMesh).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  if (pUVar2 != (param_1->StaticMesh).field0_0x0.DebugPtr) {
    return;
  }
  uVar15 = (param_1->CachedStaticLighting).ArrayNum / 2;
  local_res10 = (longlong)(int)uVar15;
  pUVar22 = this;
  bVar14 = UPrimitiveComponent::HasStaticLighting((UPrimitiveComponent *)this);
  pUVar24 = (UStaticMeshComponent *)0x0;
  if ((!bVar14) || ((int)uVar15 < 1)) goto LAB_1479b3288;
  dVar28 = *(double *)&param_1->field_0xf0 - (double)this->_padding_;
  dVar30 = *(double *)&param_1->field_0xf8 - (double)this->_padding_;
  dVar32 = *(double *)&param_1->field_0xe0 - (double)this->_padding_;
  dVar34 = *(double *)&param_1->field_0xe8 - (double)this->_padding_;
  lVar27 = -(ulonglong)
            (__real_3f50624de0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar30,0) & _UNK_15061cc88));
  auVar4._8_4_ = (int)lVar27;
  auVar4._0_8_ = -(ulonglong)
                  (__real_3f50624de0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar28,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar4._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
  uVar19 = movmskpd((int)pUVar22,auVar4);
  lVar27 = -(ulonglong)
            (__real_3f50624de0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar34,0) & _UNK_15061cc88));
  auVar9._8_4_ = (int)lVar27;
  auVar9._0_8_ = -(ulonglong)
                  (__real_3f50624de0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar32 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar32,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar9._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
  iVar16 = movmskpd((int)CONCAT71(extraout_var,bVar14),auVar9);
  local_c8 = __real_3f50624de0000000;
  uVar23 = 0;
  if ((uVar19 & 0x3fffffff) == 0 && iVar16 == 0) {
    local_c0 = __real_3f50624de0000000;
    dVar29 = *(double *)&param_1->field_0xd0 - (double)this->_padding_;
    dVar31 = *(double *)&param_1->field_0xd8 - (double)this->_padding_;
    dVar32 = *(double *)&param_1->field_0xd0 + (double)this->_padding_;
    dVar34 = *(double *)&param_1->field_0xd8 + (double)this->_padding_;
    dVar33 = *(double *)&param_1->field_0xc0 - (double)this->_padding_;
    dVar35 = *(double *)&param_1->field_0xc8 - (double)this->_padding_;
    dVar28 = *(double *)&param_1->field_0xc0 + (double)this->_padding_;
    dVar30 = *(double *)&param_1->field_0xc8 + (double)this->_padding_;
    lVar27 = -(ulonglong)
              (__real_3f50624de0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar31 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar31,0) & _UNK_15061cc88));
    auVar5._8_4_ = (int)lVar27;
    auVar5._0_8_ = -(ulonglong)
                    (__real_3f50624de0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar29 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar29,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar5._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
    iVar20 = movmskpd(0,auVar5);
    lVar27 = -(ulonglong)
              (__real_3f50624de0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar35,0) & _UNK_15061cc88));
    auVar6._8_4_ = (int)lVar27;
    auVar6._0_8_ = -(ulonglong)
                    (__real_3f50624de0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar33,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar6._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
    uVar19 = movmskpd(iVar16,auVar6);
    uVar21 = iVar20 << 2 | uVar19;
    if (uVar21 != 0) {
      lVar27 = -(ulonglong)
                (__real_3f50624de0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar34,0) & _UNK_15061cc88));
      auVar7._8_4_ = (int)lVar27;
      auVar7._0_8_ = -(ulonglong)
                      (__real_3f50624de0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar32 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar32,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar7._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
      uVar21 = movmskpd(uVar21,auVar7);
      lVar27 = -(ulonglong)
                (__real_3f50624de0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar30,0) & _UNK_15061cc88));
      auVar10._8_4_ = (int)lVar27;
      auVar10._0_8_ =
           -(ulonglong)
            (__real_3f50624de0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar28,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar10._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
      uVar19 = movmskpd(uVar19,auVar10);
      if ((uVar21 & 0x3fffffff) != 0 || uVar19 != 0) goto LAB_1479b3175;
    }
    dVar28 = *(double *)&param_1->field_0x110 - (double)this->_padding_;
    dVar30 = *(double *)&param_1->field_0x118 - (double)this->_padding_;
    dVar32 = *(double *)&param_1->field_0x100 - (double)this->_padding_;
    dVar34 = *(double *)&param_1->field_0x108 - (double)this->_padding_;
    local_b8 = __real_3f50624de0000000;
    lVar27 = -(ulonglong)
              (__real_3f50624de0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar30,0) & _UNK_15061cc88));
    auVar8._8_4_ = (int)lVar27;
    auVar8._0_8_ = -(ulonglong)
                    (__real_3f50624de0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar28,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar8._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
    uVar21 = movmskpd(0,auVar8);
    lVar27 = -(ulonglong)
              (__real_3f50624de0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar34,0) & _UNK_15061cc88));
    auVar11._8_4_ = (int)lVar27;
    auVar11._0_8_ =
         -(ulonglong)
          (__real_3f50624de0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar32 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar32,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar11._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
    iVar16 = movmskpd(uVar19,auVar11);
    if ((uVar21 & 0x3fffffff) == 0 && iVar16 == 0) {
      SetLODDataCount(this,uVar15,uVar15);
      if (0 < (int)uVar15) {
        local_res8 = 0;
        pUVar22 = pUVar24;
        pUVar25 = pUVar24;
        pUVar26 = pUVar24;
        do {
          uVar19 = (uint)pUVar26;
          uVar15 = uVar23;
          if ((int)uVar19 < (param_1->CachedStaticLighting).ArrayNum) {
            uVar15 = ~uVar19 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar21 = (uint)pUVar22;
          pFVar1 = (FScriptContainerElement *)
                   ((longlong)&pUVar25->_padding_ +
                   (longlong)(param_1->CachedStaticLighting).AllocatorInstance.Data);
          uVar12 = *(undefined8 *)pFVar1;
          uVar13 = *(undefined8 *)(pFVar1 + 8);
          uVar15 = uVar23;
          if ((int)uVar21 < (this->LODData).ArrayNum) {
            uVar15 = ~uVar21 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar1 = (this->LODData).AllocatorInstance.Data + local_res8;
          *(undefined8 *)pFVar1 = uVar12;
          *(undefined8 *)(pFVar1 + 8) = uVar13;
          uVar15 = uVar23;
          if ((int)(uVar19 + 1) < (param_1->CachedStaticLighting).ArrayNum) {
            uVar15 = ~(uVar19 + 1) >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar1 = (FScriptContainerElement *)
                   ((longlong)&pUVar25->_padding_ +
                   (longlong)(param_1->CachedStaticLighting).AllocatorInstance.Data);
          uVar12 = *(undefined8 *)pFVar1;
          uVar13 = *(undefined8 *)(pFVar1 + 8);
          uVar15 = uVar23;
          if ((int)uVar21 < (this->LODData).ArrayNum) {
            uVar15 = ~uVar21 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pUVar22 = (UStaticMeshComponent *)(ulonglong)(uVar21 + 1);
          pUVar26 = (UStaticMeshComponent *)(ulonglong)(uVar19 + 2);
          pUVar25 = (UStaticMeshComponent *)&pUVar25->_padding_;
          pFVar1 = (this->LODData).AllocatorInstance.Data + local_res8 + 0x10;
          *(undefined8 *)pFVar1 = uVar12;
          *(undefined8 *)(pFVar1 + 8) = uVar13;
          local_res8 = local_res8 + 0x50;
          local_res10 = local_res10 + -1;
        } while (local_res10 != 0);
      }
      goto LAB_1479b3288;
    }
  }
LAB_1479b3175:
  if ((FReadOnlyCVARCache::bAllowStaticLighting != false) && (2 < (byte)LogStaticMesh._0_1_)) {
    UE::Math::TTransform<double>::ToString((TTransform<double> *)&param_1->field_0xc0,&local_90);
    UE::Math::TTransform<double>::ToString((TTransform<double> *)&this->_padding_,&local_a0);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_b0,(UObject *)0x0);
    ::FString::PrintfImpl
              (&local_d8,
               L"Cached component instance data transform did not match!  Discarding cached lighting data which will cause lighting to be unbuilt.\n%s\nCurrent: %s Cached: %s"
              );
    local_80[0].Path = (wchar_t *)0x0;
    local_80[0].PackagePath = (FPackagePath *)0x0;
    local_80[0].Object = (UObject *)this;
    UE::Core::Private::RecordAssetLog
              ((FName *)&LogStaticMesh.field_0x4,Warning,local_80,&local_d8,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\StaticMeshComponent.cpp"
               ,0xbae);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
  }
LAB_1479b3288:
  if ((this->bSupportMeshPainting != 0) && (this->bEnableVertexColorMeshPainting != '\0')) {
    local_f8.ScenesToUpdateAllPrimitiveSceneInfos =
         (TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator> *)0x0;
    local_res18 = 0;
    local_f0.ObjectIndex = 0;
    local_f0.ObjectSerialNumber = 0;
    FStack_e8.ObjectIndex = 0;
    FStack_e8.ObjectSerialNumber = 0;
    FWeakObjectPtr::operator=(&FStack_e8,(FObjectPtr)&local_res18);
    local_f8.ScenesToUpdateAllPrimitiveSceneInfos =
         (TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator> *)0x0;
    local_res20 = FComponentReregisterContextBase::UnRegister(&local_f8,(UActorComponent *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UWorld *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res20);
    }
    FWeakObjectPtr::operator=(&FStack_e8,(FObjectPtr)&local_res20);
    bVar14 = FWeakObjectPtr::IsValid(&FStack_e8);
    local_e0 = pUVar24;
    if (bVar14) {
      local_e0 = this;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_e0 != (UStaticMeshComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_e0);
    }
    FWeakObjectPtr::operator=(&local_f0,(FObjectPtr)&local_e0);
    FStaticMeshComponentInstanceData::ApplyVertexColorData(param_1,this);
    bVar14 = FWeakObjectPtr::IsValid(&local_f0);
    if ((bVar14) && (bVar14 = FWeakObjectPtr::IsValid(&FStack_e8), bVar14)) {
      pUVar17 = (UWorld *)FWeakObjectPtr::Get(&FStack_e8);
      pUVar18 = (UActorComponent *)FWeakObjectPtr::Get(&local_f0);
      FComponentReregisterContextBase::ReRegister(&local_f8,pUVar18,pUVar17);
    }
  }
  TArray<FStreamingTextureBuildInfo,TSizedDefaultAllocator<32>_>::operator=
            (&this->StreamingTextureData,&param_1->StreamingTextureData);
  return;
}

// AreNativePropertiesIdenticalTo @ 1479b3ac0

bool __thiscall
UStaticMeshComponent::AreNativePropertiesIdenticalTo(UStaticMeshComponent *this,UObject *param_1)

{
  UStaticMeshComponent *pUVar1;
  
  pUVar1 = CastChecked<UStaticMeshComponent,UObject>(param_1);
  if (((this->LODData).ArrayNum == 0) && ((pUVar1->LODData).ArrayNum == 0)) {
    return true;
  }
  return false;
}

// BeginDestroy @ 1479b4780

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UStaticMeshComponent::BeginDestroy(UStaticMeshComponent *this)

{
  UStaticMesh *pUVar1;
  FRenderResource *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  if (((bool)this->bMipLevelCallbackRegistered) &&
     (pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr, pUVar1 != (UStaticMesh *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    UStreamableRenderAsset::RemoveMipLevelChangeCallback
              ((UStreamableRenderAsset *)pUVar1,(UPrimitiveComponent *)this);
    this->bMipLevelCallbackRegistered = '\0';
  }
  UMeshComponent::BeginDestroy((UMeshComponent *)this);
  uVar6 = 0;
  if (0 < (this->LODData).ArrayNum) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->LODData).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = *(FRenderResource **)((this->LODData).AllocatorInstance.Data + lVar7 + 0x40);
      if (pFVar2 != (FRenderResource *)0x0) {
        BeginReleaseResource(pFVar2,(FRenderCommandPipe *)0x0);
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x50;
    } while ((int)uVar6 < (this->LODData).ArrayNum);
  }
  FRenderCommandFence::BeginFence((FRenderCommandFence *)&this->_padding_,RenderThread);
  return;
}

// BeginPlay @ 1479b48b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UStaticMeshComponent::BeginPlay(UStaticMeshComponent *this)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  
  UActorComponent::BeginPlay((UActorComponent *)this);
  lVar3 = (**(code **)(this->_padding_ + 0x818))(this,0,0,0xffffffff);
  if (((lVar3 != 0) && ((*(byte *)(lVar3 + 8) & 1) != 0)) && (*(longlong *)(lVar3 + 0x108) == 0)) {
    bVar1 = *(byte *)((longlong)&this->_padding_ + 2);
    *(byte *)((longlong)&this->_padding_ + 2) = bVar1 | 4;
    (**(code **)(this->_padding_ + 0x518))(this,&FDetachmentTransformRules::KeepWorldTransform);
    bVar2 = *(byte *)((longlong)&this->_padding_ + 2);
    *(byte *)((longlong)&this->_padding_ + 2) = (bVar2 ^ bVar1) & 4 ^ bVar2;
  }
  return;
}

// BuildTextureStreamingDataImpl @ 1479b62c0

bool __thiscall
UStaticMeshComponent::BuildTextureStreamingDataImpl
          (UStaticMeshComponent *this,ETextureStreamingBuildType param_1,Type param_2,Type param_3,
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_4,bool *param_5)

{
  *param_5 = false;
  return true;
}

// CalcBounds @ 1479b69e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TBoxSphereBounds<double,double> * __thiscall
UStaticMeshComponent::CalcBounds
          (UStaticMeshComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  double dVar1;
  double dVar2;
  UStaticMesh *pUVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  TBoxSphereBounds<double,double> *pTVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  TBoxSphereBounds<double,double> local_1a8;
  double dStack_150;
  TMatrix<double> local_138 [2];
  
  pUVar3 = (this->StaticMesh).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar3 == (UStaticMesh *)0x0) goto LAB_1479b6d0d;
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  if (pUVar3 != (UStaticMesh *)0x0) {
    pUVar3 = (this->StaticMesh).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    pTVar15 = UStaticMesh::GetBounds(pUVar3,&local_1a8);
    UE::Math::TTransform<double>::ToMatrixWithScale(param_1,local_138);
    dVar9 = (pTVar15->BoxExtent).field0_0x0._s_0.X;
    dVar16 = (pTVar15->BoxExtent).field0_0x0._s_0.Y;
    dVar12 = (pTVar15->Origin).field0_0x0._s_0.X;
    dVar13 = (pTVar15->Origin).field0_0x0._s_0.Y;
    dVar1 = (pTVar15->BoxExtent).field0_0x0._s_0.Z;
    dVar2 = (pTVar15->Origin).field0_0x0._s_0.Z;
    dVar11 = (double)CONCAT44((uint)((ulonglong)(local_138[0].M[1][0] * dVar16) >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(local_138[0].M[1][0] * dVar16,0) &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
             (double)CONCAT44((uint)((ulonglong)(local_138[0].M[0][0] * dVar9) >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(local_138[0].M[0][0] * dVar9,0) &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
             (double)CONCAT44((uint)((ulonglong)(dVar1 * local_138[0].M[2][0]) >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar1 * local_138[0].M[2][0],0) &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    dVar17 = (double)CONCAT44((uint)((ulonglong)(local_138[0].M[1][1] * dVar16) >> 0x20) &
                              _UNK_15061cc8c,SUB84(local_138[0].M[1][1] * dVar16,0) & _UNK_15061cc88
                             ) +
             (double)CONCAT44((uint)((ulonglong)(local_138[0].M[0][1] * dVar9) >> 0x20) &
                              _UNK_15061cc8c,SUB84(local_138[0].M[0][1] * dVar9,0) & _UNK_15061cc88)
             + (double)CONCAT44((uint)((ulonglong)(dVar1 * local_138[0].M[2][1]) >> 0x20) &
                                _UNK_15061cc8c,
                                SUB84(dVar1 * local_138[0].M[2][1],0) & _UNK_15061cc88);
    dVar9 = (double)CONCAT44((uint)((ulonglong)(local_138[0].M[1][2] * dVar16) >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(local_138[0].M[1][2] * dVar16,0) &
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
            (double)CONCAT44((uint)((ulonglong)(local_138[0].M[0][2] * dVar9) >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(local_138[0].M[0][2] * dVar9,0) &
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
            (double)CONCAT44((uint)((ulonglong)(dVar1 * local_138[0].M[2][2]) >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar1 * local_138[0].M[2][2],0) &
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    local_138[0].M[3][1] =
         local_138[0].M[1][1] * dVar13 + local_138[0].M[0][1] * dVar12 +
         local_138[0].M[2][1] * dVar2 + local_138[0].M[3][1];
    auVar18._0_8_ =
         local_138[0].M[1][0] * local_138[0].M[1][0] + local_138[0].M[0][0] * local_138[0].M[0][0] +
         local_138[0].M[2][0] * local_138[0].M[2][0];
    auVar18._8_8_ =
         local_138[0].M[1][1] * local_138[0].M[1][1] + local_138[0].M[0][1] * local_138[0].M[0][1] +
         local_138[0].M[2][1] * local_138[0].M[2][1];
    dVar1 = local_138[0].M[1][2] * local_138[0].M[1][2] +
            local_138[0].M[0][2] * local_138[0].M[0][2] +
            local_138[0].M[2][2] * local_138[0].M[2][2];
    auVar19._8_4_ = SUB84(auVar18._8_8_,0);
    auVar19._0_8_ = auVar18._8_8_;
    auVar19._12_4_ = (int)((ulonglong)auVar18._8_8_ >> 0x20);
    auVar19 = maxpd(auVar18,auVar19);
    auVar7._8_4_ = SUB84(dVar1,0);
    auVar7._0_8_ = dVar1;
    auVar7._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    auVar19 = maxpd(auVar19,auVar7);
    auVar10._8_4_ = SUB84(dVar17,0);
    auVar10._0_8_ = dVar11;
    auVar10._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
    dVar16 = (double)*(float *)((longlong)&this->_padding_ + 4);
    dVar17 = SQRT(dVar9 * dVar9 + dVar11 * dVar11 + dVar17 * dVar17);
    dVar1 = SQRT(auVar19._0_8_) * pTVar15->SphereRadius;
    auVar8._8_4_ = SUB84(local_138[0].M[3][1],0);
    auVar8._0_8_ = local_138[0].M[1][0] * dVar13 + local_138[0].M[0][0] * dVar12 +
                   local_138[0].M[2][0] * dVar2 + local_138[0].M[3][0];
    auVar8._12_4_ = (int)((ulonglong)local_138[0].M[3][1] >> 0x20);
    *(undefined1 (*) [16])&(__return_storage_ptr__->Origin).field0_0x0 = auVar8;
    if (dVar1 <= dVar17) {
      dVar17 = dVar1;
    }
    dStack_150 = auVar10._8_8_;
    auVar4._8_4_ = SUB84(dVar9,0);
    auVar4._0_8_ = dStack_150;
    auVar4._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    local_1a8.BoxExtent.field0_0x0._s_0.Z = auVar4._8_8_;
    auVar6._8_4_ = SUB84(dVar11 * dVar16,0);
    auVar6._0_8_ = local_138[0].M[1][2] * dVar13 + local_138[0].M[0][2] * dVar12 +
                   local_138[0].M[2][2] * dVar2 + local_138[0].M[3][2];
    auVar6._12_4_ = (int)((ulonglong)(dVar11 * dVar16) >> 0x20);
    *(undefined1 (*) [16])((longlong)&(__return_storage_ptr__->Origin).field0_0x0 + 0x10) = auVar6;
    auVar5._8_4_ = SUB84(local_1a8.BoxExtent.field0_0x0._s_0.Z * dVar16,0);
    auVar5._0_8_ = dStack_150 * dVar16;
    auVar5._12_4_ = (int)((ulonglong)(local_1a8.BoxExtent.field0_0x0._s_0.Z * dVar16) >> 0x20);
    *(undefined1 (*) [16])((longlong)&(__return_storage_ptr__->BoxExtent).field0_0x0 + 8) = auVar5;
    __return_storage_ptr__->SphereRadius = dVar16 * dVar17;
    return __return_storage_ptr__;
  }
LAB_1479b6d0d:
  dVar2 = (param_1->Translation).XY.m128d_f64[1];
  dVar1 = (param_1->Translation).ZW.m128d_f64[0];
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = (param_1->Translation).XY.m128d_f64[0];
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar2;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar1;
  uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = (double)uVar14;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  __return_storage_ptr__->SphereRadius = 0.0;
  return __return_storage_ptr__;
}

// CanEditSimulatePhysics @ 1479b7940

bool __thiscall UStaticMeshComponent::CanEditSimulatePhysics(UStaticMeshComponent *this)

{
  TEnumAsByte<ECollisionTraceFlag> TVar1;
  UBodySetupCore *this_00;
  undefined7 extraout_var;
  
  this_00 = (UBodySetupCore *)(**(code **)(this->_padding_ + 0x800))();
  if (this_00 == (UBodySetupCore *)0x0) {
    return false;
  }
  if (((int)((int)this_00[3]._padding_ + (int)this_00[3]._padding_ + *(int *)&this_00[2].PhysicsType
             + (int)this_00[2]._padding_ + (int)this_00[2]._padding_ + (int)this_00[2]._padding_ +
             this_00[1].BoneName.ComparisonIndex.Value + (int)this_00[1]._padding_ +
            (int)this_00[1]._padding_) < 1) &&
     (TVar1 = UBodySetupCore::GetCollisionTraceFlag(this_00),
     *(char *)CONCAT71(extraout_var,TVar1.Value) != '\x03')) {
    return false;
  }
  return true;
}

// CanMeshPaintTextureColors @ 1479b79b0

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

bool __thiscall UStaticMeshComponent::CanMeshPaintTextureColors(UStaticMeshComponent *this)

{
  UStaticMesh *this_00;
  bool bVar1;
  EShaderPlatform EVar2;
  FSceneInterface *this_01;
  
  if ((((this->bSupportMeshPainting != 0) && (this->bEnableTextureColorMeshPainting != '\0')) &&
      (this_00 = (this->StaticMesh).field0_0x0.DebugPtr, this_00 != (UStaticMesh *)0x0)) &&
     (bVar1 = UStaticMesh::CanMeshPaintTextureColors(this_00), bVar1)) {
    this_01 = UActorComponent::GetScene((UActorComponent *)this);
    if (this_01 != (FSceneInterface *)0x0) {
      EVar2 = FSceneInterface::GetShaderPlatform(this_01);
      bVar1 = MeshPaintVirtualTexture::IsSupported(EVar2);
      if (!bVar1) {
        return false;
      }
    }
    return true;
  }
  return false;
}

// CanMeshPaintVertexColors @ 1479b7a20

bool __thiscall UStaticMeshComponent::CanMeshPaintVertexColors(UStaticMeshComponent *this)

{
  bool bVar1;
  
  if ((this->bSupportMeshPainting != 0) && (this->bEnableVertexColorMeshPainting != '\0')) {
    bVar1 = ShouldCreateNaniteProxy(this,(FMaterialAudit *)0x0);
    if (!bVar1) {
      return true;
    }
  }
  return false;
}

// CollectPSOPrecacheData @ 1479b8c00

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UStaticMeshComponent::CollectPSOPrecacheData
          (UStaticMeshComponent *this,FPSOPrecacheParams *param_1,
          TArray<FMaterialInterfacePSOPrecacheParams,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  UStaticMesh *pUVar1;
  bool bVar2;
  FStaticMeshRenderData *pFVar3;
  FVertexFactoryType *pFVar4;
  code *local_138;
  int *local_130;
  int local_128 [2];
  TArray<FStaticMeshComponentLODInfo,TSizedDefaultAllocator<32>_> *local_120;
  FMaterialAudit local_118;
  
  pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 == (UStaticMesh *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  else if (pUVar1 == (UStaticMesh *)0x0) {
    return;
  }
  pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  pFVar3 = UStaticMesh::GetRenderData(pUVar1);
  if (pFVar3 != (FStaticMeshRenderData *)0x0) {
    pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    local_128[0] = pUVar1->LightMapCoordinateIndex;
    local_118.bCompatibleWithLumenCardSharing = '\0';
    local_118.bHasSky = '\0';
    local_118.bHasMasked = '\0';
    local_118.bHasAnyError = '\0';
    local_120 = &this->LODData;
    local_118.AssetName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.AssetName.Data.ArrayNum = 0;
    local_118.AssetName.Data.ArrayMax = 0;
    local_118.Entries.AllocatorInstance.SecondaryData =
         (ForElementType<Nanite::FMaterialAuditEntry>)0x0;
    local_118.Entries.ArrayNum = 0;
    local_118.FallbackMaterial = (UMaterialInterface *)0x0;
    local_118.Entries.ArrayMax = 4;
    bVar2 = Nanite::FNaniteResourcesHelper::ShouldCreateNaniteProxy<UStaticMeshComponent>
                      (this,&local_118);
    local_130 = local_128;
    local_138 = UE::Core::Private::Function::
                TFunctionRefCaller<`FStaticMeshComponentHelper::CollectPSOPrecacheData<UStaticMeshComponent>'::__l2::<lambda_1>,void,FStaticMeshLODResources_const_&,int,bool,TArray<FVertexElement,TFixedAllocator<17>_>_&>
                ::Call;
    pFVar4 = &FNaniteVertexFactory::StaticType;
    if (!bVar2) {
      pFVar4 = &FLocalVertexFactory::StaticType;
    }
    FStaticMeshComponentHelper::CollectPSOPrecacheDataImpl<UStaticMeshComponent>
              (this,pFVar4,param_1,
               (TFunctionRef<void___cdecl(FStaticMeshLODResources_const_&,int,bool,TArray<FVertexElement,TFixedAllocator<17>_>_&)>
                *)&local_138,param_2);
    if (local_118.Entries.AllocatorInstance.SecondaryData !=
        (ForElementType<Nanite::FMaterialAuditEntry>)0x0) {
      FMemory::Free((void *)local_118.Entries.AllocatorInstance.SecondaryData);
    }
    if (local_118.AssetName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.AssetName.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// CollectPSOPrecacheDataImpl @ 1479b8d70

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UStaticMeshComponent::CollectPSOPrecacheDataImpl
          (UStaticMeshComponent *this,FVertexFactoryType *param_1,FPSOPrecacheParams *param_2,
          TFunctionRef<void___cdecl(FStaticMeshLODResources_const_&,int,bool,TArray<FVertexElement,TFixedAllocator<17>_>_&)>
          *param_3,TArray<FMaterialInterfacePSOPrecacheParams,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                   *param_4)

{
  TFunctionRef<void___cdecl(FStaticMeshLODResources_const_&,int,bool,TArray<FVertexElement,TFixedAllocator<17>_>_&)>
  local_18;
  
  local_18._0_8_ = *(undefined8 *)param_3;
  local_18._8_8_ = *(undefined8 *)&param_3->field_0x8;
  FStaticMeshComponentHelper::CollectPSOPrecacheDataImpl<UStaticMeshComponent>
            (this,param_1,param_2,&local_18,param_4);
  return;
}

// CreateRenderState_Concurrent @ 1479bbcf0

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
UStaticMeshComponent::CreateRenderState_Concurrent
          (UStaticMeshComponent *this,FRegisterComponentContext *param_1)

{
  FLLMScope local_res18 [2];
  FMemScope local_res20;
  
  FLLMScope::FLLMScope(local_res18,StaticMesh,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,StaticMesh,true);
  UPrimitiveComponent::CreateRenderState_Concurrent((UPrimitiveComponent *)this,param_1);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res18);
  return;
}

// DoCustomNavigableGeometryExport @ 1479be790

bool __thiscall
UStaticMeshComponent::DoCustomNavigableGeometryExport
          (UStaticMeshComponent *this,FNavigableGeometryExport *param_1)

{
  UStaticMesh *this_00;
  char cVar1;
  bool bVar2;
  UNavCollisionBase *pUVar3;
  byte bVar4;
  longlong *local_res8;
  
  if (((((double)this[-1].StaticMeshComponentInterface != 0.0) ||
       (*(double *)&this[-1].OnGetNaniteResourcesEvent != 0.0)) ||
      (*(double *)&this[-1].OnGetNaniteResourcesEvent.field_0x8 != 0.0)) &&
     (this_00 = (UStaticMesh *)this->_padding_, this_00 != (UStaticMesh *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    cVar1 = (**(code **)(this_00->_padding_ + 0x10))();
    if (((cVar1 == '\0') ||
        (local_res8 = &this[-1]._padding_,
        bVar2 = `FStaticMeshComponentHelper::DoCustomNavigableGeometryExport<UStaticMeshComponent>'
                ::__l9::<lambda_1>::operator()(&local_res8), bVar2)) &&
       (pUVar3 = UStaticMesh::GetNavCollision(this_00), pUVar3 != (UNavCollisionBase *)0x0)) {
      bVar4 = *(byte *)((longlong)&this->_padding_ + 5);
      if ((bVar4 & 0x10) == 0) {
        bVar4 = pUVar3->field_0x28;
      }
      else {
        bVar4 = bVar4 >> 5;
      }
      if (((bVar4 & 1) != 0) ||
         (cVar1 = (**(code **)(pUVar3->_padding_ + 0x2c0))
                            (pUVar3,&this[-1].StreamingDistanceMultiplier,param_1), cVar1 != '\0'))
      {
        return false;
      }
    }
  }
  return true;
}

// DoesSocketExist @ 1479be890

bool __thiscall UStaticMeshComponent::DoesSocketExist(UStaticMeshComponent *this,FName param_1)

{
  UStaticMeshSocket *pUVar1;
  
  pUVar1 = GetSocketByName(this,param_1);
  return pUVar1 != (UStaticMeshSocket *)0x0;
}

// ExportCustomProperties @ 1479c0b90

void __thiscall
UStaticMeshComponent::ExportCustomProperties
          (UStaticMeshComponent *this,FOutputDevice *param_1,uint param_2)

{
  FColorVertexBuffer *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FStaticMeshComponentLODInfo *this_01;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  FString local_48;
  FString local_38;
  
  uVar5 = 0;
  uVar6 = uVar5;
  if (0 < (this->LODData).ArrayNum) {
    do {
      if ((0xff < param_2) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumSpaces >= 0 && NumSpaces <= TCStringSpcHelper<T>::MAX_SPACES",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                             ,0x272,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FOutputDevice::LogfImpl(param_1,L"%sCustomProperties ");
      uVar4 = (uint)uVar5;
      uVar3 = 0;
      if ((int)uVar4 < (this->LODData).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_01 = (FStaticMeshComponentLODInfo *)((this->LODData).AllocatorInstance.Data + uVar6);
      if ((0 < (this_01->PaintedVertices).ArrayNum) ||
         (this_01->OverrideVertexColors != (FColorVertexBuffer *)0x0)) {
        FOutputDevice::LogfImpl(param_1,L"CustomLODData LOD=%d ");
      }
      if (0 < (this_01->PaintedVertices).ArrayNum) {
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_48.Data.ArrayNum = 0;
        local_48.Data.ArrayMax = 0;
        FStaticMeshComponentLODInfo::ExportText(this_01,&local_48);
        FOutputDevice::Log(param_1,&local_48);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      this_00 = this_01->OverrideVertexColors;
      if ((this_00 != (FColorVertexBuffer *)0x0) && (this_00->NumVertices != 0)) {
        local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_38.Data.ArrayNum = 0;
        local_38.Data.ArrayMax = 0;
        FColorVertexBuffer::ExportText(this_00,&local_38);
        FOutputDevice::Log(param_1,&local_38);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      FOutputDevice::Log(param_1,L"\r\n");
      uVar5 = (ulonglong)(uVar4 + 1);
      uVar6 = uVar6 + 0x50;
    } while ((int)(uVar4 + 1) < (this->LODData).ArrayNum);
  }
  return;
}

// GetBlueprintCreatedComponentIndex @ 1479c4400

int __thiscall UStaticMeshComponent::GetBlueprintCreatedComponentIndex(UStaticMeshComponent *this)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 local_res8 [8];
  
  lVar3 = this->_padding_;
  iVar5 = 0;
  plVar4 = *(longlong **)(lVar3 + 0x2a8);
  iVar2 = *(int *)(lVar3 + 0x2b0);
  plVar1 = plVar4 + iVar2;
  while( true ) {
    if (*(int *)(lVar3 + 0x2b0) != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UActorComponent>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (plVar4 == plVar1) break;
    if ((UStaticMeshComponent *)*plVar4 == this) {
      return iVar5;
    }
    iVar5 = iVar5 + 1;
    plVar4 = plVar4 + 1;
  }
  return -1;
}

// GetBodySetup @ 1479c4540

UBodySetup * __thiscall UStaticMeshComponent::GetBodySetup(UStaticMeshComponent *this)

{
  UStaticMesh *pUVar1;
  
  pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
  if (pUVar1 != (UStaticMesh *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    return (pUVar1->BodySetup).field0_0x0.DebugPtr;
  }
  return (UBodySetup *)0x0;
}

// GetComponentInstanceData @ 1479c59b0

TStructOnScope<FActorComponentInstanceData> * __thiscall
UStaticMeshComponent::GetComponentInstanceData
          (UStaticMeshComponent *this,
          TStructOnScope<FActorComponentInstanceData> *__return_storage_ptr__)

{
  UScriptStruct *pUVar1;
  uint uVar2;
  UPackage *pUVar3;
  FStaticMeshComponentInstanceData *this_00;
  int iVar4;
  uint uVar5;
  UScriptStruct *local_res8;
  
  FStructOnScope::FStructOnScope((FStructOnScope *)__return_storage_ptr__);
  *(undefined ***)__return_storage_ptr__ = &___7__TStructOnScope_UFActorComponentInstanceData____6B_
  ;
  FStructOnScope::Destroy((FStructOnScope *)__return_storage_ptr__);
  if (Z_Registration_Info_UScriptStruct_FStaticMeshComponentInstanceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FStaticMeshComponentInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData,
                         (UObject *)pUVar3,L"StaticMeshComponentInstanceData");
    if (Z_Registration_Info_UScriptStruct_FStaticMeshComponentInstanceData.OuterSingleton ==
        (UScriptStruct *)0x0) {
      return __return_storage_ptr__;
    }
  }
  pUVar1 = Z_Registration_Info_UScriptStruct_FStaticMeshComponentInstanceData.OuterSingleton;
  local_res8 = Z_Registration_Info_UScriptStruct_FStaticMeshComponentInstanceData.OuterSingleton;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable
              ((UObject *)
               Z_Registration_Info_UScriptStruct_FStaticMeshComponentInstanceData.OuterSingleton);
  }
  FWeakObjectPtr::operator=
            ((FWeakObjectPtr *)&__return_storage_ptr__->field_0x8,(FObjectPtr)&local_res8);
  iVar4 = (int)*(short *)((longlong)&pUVar1->_padding_ + 4);
  uVar5 = (int)pUVar1->_padding_ + -1 + iVar4 & ~(iVar4 - 1U);
  uVar2 = 1;
  if (uVar5 != 0) {
    uVar2 = uVar5;
  }
  this_00 = FMemory::Malloc((longlong)(int)uVar2,0);
  *(FStaticMeshComponentInstanceData **)&__return_storage_ptr__->field_0x10 = this_00;
  FStaticMeshComponentInstanceData::FStaticMeshComponentInstanceData(this_00,this);
  __return_storage_ptr__->field_0x20 = 1;
  return __return_storage_ptr__;
}

// GetDefaultMaterialSlotsOverlayMaterial @ 1479c5b20

void __thiscall
UStaticMeshComponent::GetDefaultMaterialSlotsOverlayMaterial
          (UStaticMeshComponent *this,
          TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  UStaticMesh *pUVar3;
  FScriptContainerElement *pFVar4;
  UObject *pUVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_1->AllocatorInstance,0,piVar1);
  }
  pUVar3 = (this->StaticMesh).field0_0x0.DebugPtr;
  if (pUVar3 != (UStaticMesh *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    pUVar3 = (this->StaticMesh).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    pFVar9 = (pUVar3->StaticMaterials).AllocatorInstance.Data;
    iVar2 = (pUVar3->StaticMaterials).ArrayNum;
    pFVar10 = pFVar9 + 0x30;
    pFVar11 = pFVar9 + (longlong)iVar2 * 0x38;
    while( true ) {
      if ((pUVar3->StaticMaterials).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FStaticMaterial_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar9 == pFVar11) break;
      pFVar4 = (param_1->AllocatorInstance).Data;
      if (((pFVar4 <= pFVar10) && (pFVar10 < pFVar4 + (longlong)*piVar1 * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar8 = param_1->ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,piVar1);
      }
      pFVar4 = (param_1->AllocatorInstance).Data;
      param_1->ArrayNum = iVar8 + 1;
      pUVar5 = *(UObject **)pFVar10;
      *(UObject **)(pFVar4 + (longlong)iVar8 * 8) = pUVar5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      pFVar9 = pFVar9 + 0x38;
      pFVar10 = pFVar10 + 0x38;
    }
  }
  return;
}

// GetDetailedInfoInternal @ 1479c5f00

FString * __thiscall
UStaticMeshComponent::GetDetailedInfoInternal
          (UStaticMeshComponent *this,FString *__return_storage_ptr__)

{
  UStaticMesh *pUVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar1 == (UStaticMesh *)0x0) goto LAB_1479c5fc7;
  }
  else {
    if (pUVar1 == (UStaticMesh *)0x0) {
LAB_1479c5fc7:
      ::FString::operator=(__return_storage_ptr__,L"No_StaticMesh");
      return __return_storage_ptr__;
    }
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  pFVar3 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar1,&local_18,(UObject *)0x0);
  if (__return_storage_ptr__ != pFVar3) {
    pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return __return_storage_ptr__;
  }
  FMemory::Free(local_18.Data.AllocatorInstance.Data);
  return __return_storage_ptr__;
}

// GetEstimatedLightAndShadowMapMemoryUsage @ 1479c9540

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
UStaticMeshComponent::GetEstimatedLightAndShadowMapMemoryUsage
          (UStaticMeshComponent *this,int *param_1,int *param_2,int *param_3,int *param_4,
          int *param_5,bool *param_6,bool *param_7)

{
  UStaticMesh *pUVar1;
  bool *pbVar2;
  bool *pbVar3;
  bool bVar4;
  undefined4 local_res8 [2];
  
  pbVar3 = param_7;
  pbVar2 = param_6;
  *param_1 = 0;
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  *param_6 = false;
  *param_7 = false;
  param_4._0_4_ = 0;
  local_res8[0] = 0;
  (**(code **)(this->_padding_ + 0xb60))(this,&param_4,local_res8);
  param_7._0_4_ = 0;
  param_6._0_4_ = 0;
  *param_5 = (int)param_4;
  (**(code **)(this->_padding_ + 0x7b8))(this,&param_7,&param_6);
  bVar4 = UPrimitiveComponent::HasStaticLighting((UPrimitiveComponent *)this);
  if ((bVar4) && (pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr, pUVar1 != (UStaticMesh *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    bVar4 = (bool)(**(code **)(this->_padding_ + 0xb50))(this);
    *pbVar3 = bVar4;
    bVar4 = (bool)(**(code **)(this->_padding_ + 0xb48))(this,param_7._0_4_,param_6._0_4_);
    *pbVar2 = bVar4;
    (**(code **)(this->_padding_ + 0xb58))(this,(int)param_4,local_res8[0],param_1,param_2);
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}

// GetEstimatedLightMapResolution @ 1479c9670

void __thiscall
UStaticMeshComponent::GetEstimatedLightMapResolution
          (UStaticMeshComponent *this,int *param_1,int *param_2)

{
  UStaticMesh *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int local_res8 [2];
  
  pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
  if (pUVar1 == (UStaticMesh *)0x0) {
    *param_1 = 0;
    *param_2 = 0;
    return;
  }
  if (UE::GC::GIsIncrementalReachabilityPending) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  if (this->bOverrideLightMapRes == '\0') {
    pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    *param_1 = pUVar1->LightMapResolution;
    pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    iVar4 = pUVar1->LightMapResolution;
  }
  else {
    if (this->OverriddenLightMapRes == 0) goto LAB_1479c971d;
    *param_1 = this->OverriddenLightMapRes;
    iVar4 = this->OverriddenLightMapRes;
  }
  *param_2 = iVar4;
LAB_1479c971d:
  if (*param_1 != 0) {
    return;
  }
  local_res8[0] = 0;
  bVar3 = FConfigCacheIni::GetInt
                    (GConfig,L"DevOptions.StaticLighting",L"DefaultStaticMeshLightingRes",local_res8
                     ,&GLightmassIni);
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GConfig->GetInt(L\"DevOptions.StaticLighting\", L\"DefaultStaticMeshLightingRes\", TempInt, GLightmassIni)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\StaticMeshComponent.cpp"
                         ,0xa7b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *param_1 = local_res8[0];
  *param_2 = local_res8[0];
  return;
}

// GetLifetimeReplicatedProps @ 1479ca5d0

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
UStaticMeshComponent::GetLifetimeReplicatedProps
          (UStaticMeshComponent *this,TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_1
          )

{
  FRepPropertyDescriptor local_38;
  FDoRepLifetimeParams local_28;
  
  USceneComponent::GetLifetimeReplicatedProps((USceneComponent *)this,param_1);
  local_28.bIsPushBased = true;
  local_28.Condition = COND_None;
  local_28.RepNotifyCondition = REPNOTIFY_OnChanged;
  local_28.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38.RepIndex = 0x11;
  local_38.PropertyName = L"StaticMesh";
  local_38.ArrayDim = 1;
  RegisterReplicatedLifetimeProperty(&local_38,param_1,&local_28);
  return;
}

// GetLightAndShadowMapMemoryUsage @ 1479ca630

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
UStaticMeshComponent::GetLightAndShadowMapMemoryUsage
          (UStaticMeshComponent *this,int *param_1,int *param_2)

{
  UStaticMesh *pUVar1;
  bool bVar2;
  char cVar3;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  
  *param_2 = 0;
  *param_1 = 0;
  local_res10[0] = 0;
  local_res8[0] = 0;
  (**(code **)(this->_padding_ + 0x7b8))(this,local_res10,local_res8);
  bVar2 = UPrimitiveComponent::HasStaticLighting((UPrimitiveComponent *)this);
  if ((bVar2) && (pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr, pUVar1 != (UStaticMesh *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    cVar3 = (**(code **)(this->_padding_ + 0xb48))(this,local_res10[0],local_res8[0]);
    if (cVar3 == '\x01') {
      (**(code **)(this->_padding_ + 0xb58))(this,local_res10[0],local_res8[0],param_1,param_2);
    }
  }
  return;
}

// GetLightMapResolution @ 1479ca6e0

bool __thiscall
UStaticMeshComponent::GetLightMapResolution(UStaticMeshComponent *this,int *param_1,int *param_2)

{
  UStaticMesh *pUVar1;
  
  pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
  if (pUVar1 == (UStaticMesh *)0x0) {
    *param_1 = 0;
    *param_2 = 0;
    return false;
  }
  if (UE::GC::GIsIncrementalReachabilityPending) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  if (this->bOverrideLightMapRes != '\0') {
    *param_1 = this->OverriddenLightMapRes;
    *param_2 = this->OverriddenLightMapRes;
    return true;
  }
  pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  *param_1 = pUVar1->LightMapResolution;
  pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  *param_2 = pUVar1->LightMapResolution;
  return true;
}

// GetLocalBounds @ 1479ca9e0

void __thiscall
UStaticMeshComponent::GetLocalBounds
          (UStaticMeshComponent *this,TVector<double> *param_1,TVector<double> *param_2)

{
  UStaticMesh *pUVar1;
  TVector<double>_u_0 local_78;
  double local_60;
  double local_58;
  double local_50;
  
  pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 == (UStaticMesh *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  if (pUVar1 != (UStaticMesh *)0x0) {
    pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    UStaticMesh::GetBounds(pUVar1,(TBoxSphereBounds<double,double> *)&local_78._s_0);
    (param_1->field0_0x0)._s_0.X = local_78._s_0.X - local_60;
    (param_1->field0_0x0)._s_0.Y = local_78._s_0.Y - local_58;
    (param_1->field0_0x0)._s_0.Z = local_78._s_0.Z - local_50;
    (param_2->field0_0x0)._s_0.X = local_78._s_0.X + local_60;
    (param_2->field0_0x0)._s_0.Y = local_78._s_0.Y + local_58;
    (param_2->field0_0x0)._s_0.Z = local_50 + local_78._s_0.Z;
  }
  return;
}

// GetMaterial @ 1479cb570

UMaterialInterface * __thiscall
UStaticMeshComponent::GetMaterial(UStaticMeshComponent *this,int param_1,bool param_2)

{
  UMaterialInterface *pUVar1;
  
  pUVar1 = FStaticMeshComponentHelper::GetMaterial<UStaticMeshComponent>(this,param_1,param_2,false)
  ;
  return pUVar1;
}

// GetMaterial @ 1479cb580

UMaterialInterface * __thiscall
UStaticMeshComponent::GetMaterial(UStaticMeshComponent *this,int param_1)

{
  UMaterialInterface *pUVar1;
  
  pUVar1 = FStaticMeshComponentHelper::GetMaterial<UStaticMeshComponent>(this,param_1,false,false);
  return pUVar1;
}

// GetMaterialCacheVirtualTexture @ 1479cb5f0

UMaterialCacheVirtualTexture * __thiscall
UStaticMeshComponent::GetMaterialCacheVirtualTexture(UStaticMeshComponent *this,FGuid *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UMaterialCacheVirtualTexture *pUVar3;
  UMaterialCacheVirtualTextureTag *pUVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  
  pFVar8 = (this->MaterialCacheTextures).AllocatorInstance.Data;
  iVar2 = (this->MaterialCacheTextures).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->MaterialCacheTextures).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMaterialCacheVirtualTexture>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar1) break;
    pUVar3 = *(UMaterialCacheVirtualTexture **)pFVar8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UMaterialCacheVirtualTexture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    pUVar4 = (pUVar3->Tag).field0_0x0.DebugPtr;
    if (pUVar4 == (UMaterialCacheVirtualTextureTag *)0x0) {
      uVar6 = 0;
      uVar5 = 0;
      uVar7 = 0;
      uVar9 = 0;
    }
    else {
      uVar6 = (pUVar4->Guid).A;
      uVar9 = (pUVar4->Guid).B;
      uVar7 = (pUVar4->Guid).C;
      uVar5 = (pUVar4->Guid).D;
    }
    if (((uVar5 == param_1->D && uVar7 == param_1->C) && uVar6 == param_1->A) && uVar9 == param_1->B
       ) {
      return pUVar3;
    }
    pFVar8 = pFVar8 + 8;
  }
  return (UMaterialCacheVirtualTexture *)0x0;
}

// GetMaterialFromCollisionFaceIndex @ 1479cb6e0

UMaterialInterface * __thiscall
UStaticMeshComponent::GetMaterialFromCollisionFaceIndex
          (UStaticMeshComponent *this,int param_1,int *param_2)

{
  int iVar1;
  UStaticMesh *this_00;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FStaticMeshRenderData *pFVar6;
  UMaterialInterface *pUVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  
  *param_2 = 0;
  this_00 = (this->StaticMesh).field0_0x0.DebugPtr;
  if (this_00 != (UStaticMesh *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    pFVar6 = UStaticMesh::GetRenderData(this_00);
    if ((pFVar6 != (FStaticMeshRenderData *)0x0) && (-1 < param_1)) {
      iVar1 = this_00->LODForCollision;
      pFVar6 = UStaticMesh::GetRenderData(this_00);
      if ((iVar1 < 0) || ((pFVar6->LODResources).Array.ArrayNum <= iVar1)) {
        return (UMaterialInterface *)0x0;
      }
      if ((iVar1 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pUVar7 = (UMaterialInterface *)(*pcVar3)();
        return pUVar7;
      }
      iVar10 = 0;
      uVar9 = 0;
      lVar2 = *(longlong *)
               ((pFVar6->LODResources).Array.AllocatorInstance.Data + (longlong)iVar1 * 8);
      if (0 < *(int *)(lVar2 + 0x38)) {
        lVar11 = 0;
        do {
          uVar5 = 0;
          if ((int)uVar9 < *(int *)(lVar2 + 0x38)) {
            uVar5 = ~uVar9 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pUVar7 = (UMaterialInterface *)(*pcVar3)();
            return pUVar7;
          }
          lVar8 = lVar2 + 0x10;
          if (*(longlong *)(lVar2 + 0x30) != 0) {
            lVar8 = *(longlong *)(lVar2 + 0x30);
          }
          if ((*(char *)(lVar8 + 0x14 + lVar11) != '\0') &&
             (iVar10 = iVar10 + *(int *)(lVar8 + 8 + lVar11), param_1 < iVar10)) {
            pUVar7 = FStaticMeshComponentHelper::GetMaterial<UStaticMeshComponent>
                               (this,*(int *)(lVar8 + lVar11),false,false);
            *param_2 = uVar9;
            return pUVar7;
          }
          uVar9 = uVar9 + 1;
          lVar11 = lVar11 + 0x1c;
        } while ((int)uVar9 < *(int *)(lVar2 + 0x38));
      }
      return (UMaterialInterface *)0x0;
    }
  }
  return (UMaterialInterface *)0x0;
}

// GetMaterialIndex @ 1479cb8a0

int __thiscall UStaticMeshComponent::GetMaterialIndex(UStaticMeshComponent *this,FName param_1)

{
  UStaticMesh *pUVar1;
  int iVar2;
  
  pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
  if (pUVar1 != (UStaticMesh *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    iVar2 = UStaticMesh::GetMaterialIndex(pUVar1,param_1);
    return iVar2;
  }
  return -1;
}

// GetMaterialSlotNames @ 1479cb920

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UStaticMeshComponent::GetMaterialSlotNames
          (UStaticMeshComponent *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UStaticMesh *pUVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
  if (pUVar1 == (UStaticMesh *)0x0) {
    return __return_storage_ptr__;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  uVar8 = 0;
  if (0 < (pUVar1->StaticMaterials).ArrayNum) {
    lVar10 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (pUVar1->StaticMaterials).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      pFVar9 = (pUVar1->StaticMaterials).AllocatorInstance.Data + lVar10 + 8;
      if (((pFVar2 <= pFVar9) && (pFVar9 < pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8))
         && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == __return_storage_ptr__->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 0x38;
      *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) =
           *(undefined8 *)pFVar9;
    } while ((int)uVar8 < (pUVar1->StaticMaterials).ArrayNum);
  }
  return __return_storage_ptr__;
}

// GetMaterialStreamingData @ 1479cbab0

bool __thiscall
UStaticMeshComponent::GetMaterialStreamingData
          (UStaticMeshComponent *this,int param_1,FPrimitiveMaterialInfo *param_2)

{
  UStaticMesh *pUVar1;
  UMaterialInterface *pUVar2;
  FMeshUVChannelInfo *pFVar3;
  
  pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
  if (pUVar1 != (UStaticMesh *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    pUVar2 = FStaticMeshComponentHelper::GetMaterial<UStaticMeshComponent>(this,param_1,false,false)
    ;
    param_2->Material = pUVar2;
    pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    pFVar3 = UStaticMesh::GetUVChannelData(pUVar1,param_1);
    param_2->UVChannelData = pFVar3;
    param_2->PackedRelativeBox = 0xffff0000;
  }
  if (((param_2->Material != (UMaterialInterface *)0x0) &&
      (param_2->UVChannelData != (FMeshUVChannelInfo *)0x0)) && (param_2->PackedRelativeBox != 0)) {
    return true;
  }
  return false;
}

// GetMeshMapBuildData @ 1479cc1b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FMeshMapBuildData * __thiscall
UStaticMeshComponent::GetMeshMapBuildData
          (UStaticMeshComponent *this,FStaticMeshComponentLODInfo *param_1,bool param_2)

{
  int iVar1;
  UStaticMesh *pUVar2;
  FStaticMeshRenderData *pFVar3;
  UMapBuildDataRegistry *this_00;
  FMeshMapBuildData *pFVar4;
  FGuid local_18;
  
  pUVar2 = (this->StaticMesh).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar2 == (UStaticMesh *)0x0) {
      return (FMeshMapBuildData *)0x0;
    }
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  else if (pUVar2 == (UStaticMesh *)0x0) {
    return (FMeshMapBuildData *)0x0;
  }
  pUVar2 = (this->StaticMesh).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  pFVar3 = UStaticMesh::GetRenderData(pUVar2);
  if (pFVar3 != (FStaticMeshRenderData *)0x0) {
    pUVar2 = (this->StaticMesh).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    pFVar3 = UStaticMesh::GetRenderData(pUVar2);
    pUVar2 = (this->StaticMesh).field0_0x0.DebugPtr;
    iVar1 = (pFVar3->LODResources).Array.ArrayNum;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    pFVar3 = UStaticMesh::GetRenderData(pUVar2);
    if ((pFVar3->bLODsShareStaticLighting != false) || (iVar1 == (this->LODData).ArrayNum)) {
      pFVar4 = (param_1->OverrideMapBuildData).Ptr;
      if (pFVar4 != (FMeshMapBuildData *)0x0) {
        return pFVar4;
      }
      this_00 = UMapBuildDataRegistry::Get((UActorComponent *)this);
      if (this_00 != (UMapBuildDataRegistry *)0x0) {
        local_18.A = (param_1->MapBuildDataId).A;
        local_18.B = (param_1->MapBuildDataId).B;
        local_18.C = (param_1->MapBuildDataId).C;
        local_18.D = (param_1->MapBuildDataId).D;
        if (!param_2) {
          pFVar4 = UMapBuildDataRegistry::GetMeshBuildDataDuringBuild(this_00,&local_18);
          return pFVar4;
        }
        pFVar4 = UMapBuildDataRegistry::GetMeshBuildData(this_00,&local_18);
        return pFVar4;
      }
    }
  }
  return (FMeshMapBuildData *)0x0;
}

// GetMeshPaintTexture @ 1479cc2f0

UTexture * __thiscall UStaticMeshComponent::GetMeshPaintTexture(UStaticMeshComponent *this)

{
  return (this->MeshPaintTextureCooked).field0_0x0.DebugPtr;
}

// GetMeshPaintTextureCoordinateIndex @ 1479cc300

int __thiscall UStaticMeshComponent::GetMeshPaintTextureCoordinateIndex(UStaticMeshComponent *this)

{
  int iVar1;
  UStaticMesh *pUVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = UStaticMesh::GetNumTexCoords((this->StaticMesh).field0_0x0.DebugPtr,0);
  if (this->bOverrideMeshPaintTextureCoordinateIndex != '\0') {
    iVar1 = iVar4 + -1;
    if (this->OverriddenMeshPaintTextureCoordinateIndex < iVar4 + -1) {
      iVar1 = this->OverriddenMeshPaintTextureCoordinateIndex;
    }
    iVar4 = 0;
    if (0 < iVar1) {
      iVar4 = iVar1;
    }
    return iVar4;
  }
  pUVar2 = (this->StaticMesh).field0_0x0.DebugPtr;
  if (pUVar2 != (UStaticMesh *)0x0) {
    iVar1 = pUVar2->MeshPaintTextureCoordinateIndex;
    iVar3 = iVar4 + -1;
    if (iVar1 < iVar4 + -1) {
      iVar3 = iVar1;
    }
    iVar4 = 0;
    if (0 < iVar3) {
      iVar4 = iVar3;
    }
    return iVar4;
  }
  return 0;
}

// GetMeshPaintTextureResolution @ 1479cc370

int __thiscall UStaticMeshComponent::GetMeshPaintTextureResolution(UStaticMeshComponent *this)

{
  UStaticMesh *pUVar1;
  uint uVar2;
  int iVar3;
  
  if (this->bOverrideMeshPaintTextureResolution == '\0') {
    pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
    if (pUVar1 == (UStaticMesh *)0x0) goto LAB_1479cc3a7;
    iVar3 = pUVar1->MeshPaintTextureResolution;
  }
  else {
    iVar3 = this->OverriddenMeshPaintTextureResolution;
  }
  if (0 < iVar3) {
    uVar2 = MeshPaintVirtualTexture::GetAlignedTextureSize(iVar3);
    return uVar2;
  }
LAB_1479cc3a7:
  pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
  if (pUVar1 != (UStaticMesh *)0x0) {
    iVar3 = UStaticMesh::GetNumVertices(pUVar1,0);
    uVar2 = MeshPaintVirtualTexture::GetDefaultTextureSize(iVar3);
    return uVar2;
  }
  uVar2 = MeshPaintVirtualTexture::GetDefaultTextureSize(0);
  return uVar2;
}

// GetNaniteAuditMaterial @ 1479cc410

UMaterialInterface * __thiscall
UStaticMeshComponent::GetNaniteAuditMaterial(UStaticMeshComponent *this,int param_1)

{
  UMaterialInterface *pUVar1;
  
  pUVar1 = FStaticMeshComponentHelper::GetMaterial<UStaticMeshComponent>(this,param_1,true,false);
  return pUVar1;
}

// GetNaniteResources @ 1479cc440

FResources * __thiscall UStaticMeshComponent::GetNaniteResources(UStaticMeshComponent *this)

{
  UStaticMesh *pUVar1;
  char cVar2;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *pTVar3;
  FResources *pFVar4;
  FStaticMeshRenderData *pFVar5;
  atomic<unsigned___int64> aVar6;
  FReadAccessScope local_28;
  
  pTVar3 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
           (**(code **)(this->_padding_ + 0xba0))();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(pTVar3,&local_28);
  if ((*(int *)&pTVar3[2].AccessDetector.State != 0) &&
     (aVar6 = pTVar3[1].AccessDetector.State, aVar6 != (atomic<unsigned___int64>)0x0)) {
    cVar2 = (**(code **)(*(longlong *)aVar6 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      pTVar3 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               (**(code **)(this->_padding_ + 0xba0))(this);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(pTVar3,&local_28);
      if (*(int *)&pTVar3[2].AccessDetector.State == 0) {
        aVar6 = (atomic<unsigned___int64>)0x0;
      }
      else {
        aVar6 = pTVar3[1].AccessDetector.State;
      }
      pFVar4 = (FResources *)(**(code **)(*(longlong *)aVar6 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return pFVar4;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
  if (pUVar1 != (UStaticMesh *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    pFVar5 = UStaticMesh::GetRenderData(pUVar1);
    if (pFVar5 != (FStaticMeshRenderData *)0x0) {
      pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStaticMesh *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      pFVar5 = UStaticMesh::GetRenderData(pUVar1);
      return (pFVar5->NaniteResourcesPtr).Ptr;
    }
  }
  return (FResources *)0x0;
}

// GetNavigationBounds @ 1479cc650

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
UStaticMeshComponent::GetNavigationBounds
          (UStaticMeshComponent *this,TBox<double> *__return_storage_ptr__)

{
  UStaticMesh *this_00;
  
  this_00 = (UStaticMesh *)this->_padding_;
  if (this_00 != (UStaticMesh *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    UStaticMesh::GetNavigationBounds
              (this_00,__return_storage_ptr__,
               (TTransform<double> *)&this[-1].StreamingDistanceMultiplier);
    return __return_storage_ptr__;
  }
  UPrimitiveComponent::GetNavigationBounds((UPrimitiveComponent *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetNavigationData @ 1479cc6d0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
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
UStaticMeshComponent::GetNavigationData(UStaticMeshComponent *this,FNavigationRelevantData *param_1)

{
  UStaticMesh *this_00;
  UNavCollisionBase *pUVar1;
  byte bVar2;
  
  UPrimitiveComponent::GetNavigationData((UPrimitiveComponent *)this,param_1);
  if (((((double)this[-1].StaticMeshComponentInterface != 0.0) ||
       (*(double *)&this[-1].OnGetNaniteResourcesEvent != 0.0)) ||
      (*(double *)&this[-1].OnGetNaniteResourcesEvent.field_0x8 != 0.0)) &&
     (this_00 = (UStaticMesh *)this->_padding_, this_00 != (UStaticMesh *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    pUVar1 = UStaticMesh::GetNavCollision(this_00);
    if (pUVar1 != (UNavCollisionBase *)0x0) {
      bVar2 = *(byte *)((longlong)&this->_padding_ + 5);
      if ((bVar2 & 0x10) == 0) {
        bVar2 = pUVar1->field_0x28;
      }
      else {
        bVar2 = bVar2 >> 5;
      }
      if ((bVar2 & 1) != 0) {
        (**(code **)(pUVar1->_padding_ + 0x2c8))
                  (pUVar1,&param_1->Modifiers,&this[-1].StreamingDistanceMultiplier);
      }
    }
  }
  return;
}

// GetNumMaterials @ 1479cc7b0

int __thiscall UStaticMeshComponent::GetNumMaterials(UStaticMeshComponent *this)

{
  UStaticMesh *pUVar1;
  
  pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
  if (pUVar1 != (UStaticMesh *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    return (pUVar1->StaticMaterials).ArrayNum;
  }
  return 0;
}

// GetPrimitiveStats @ 1479cd460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UStaticMeshComponent::GetPrimitiveStats(UStaticMeshComponent *this,FPrimitiveStats *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  UStaticMesh *this_00;
  FStaticMeshLODResources *this_01;
  FStaticMeshSectionArray *pFVar5;
  code *pcVar6;
  undefined2 *puVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  FScriptContainerElement FVar10;
  int iVar11;
  FStaticMeshRenderData *pFVar12;
  ulong64 uVar13;
  FStaticMeshSectionArray *pFVar14;
  FScriptContainerElement *pFVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auStackY_1e8 [32];
  undefined2 local_198;
  undefined1 local_196;
  undefined1 local_195;
  uint local_194;
  ulonglong local_190;
  FScriptContainerElement *local_188;
  int *piStack_180;
  undefined8 local_178;
  TArray<FPrimitiveLODStats,TSizedDefaultAllocator<32>_> *local_170;
  FScriptContainerElement *local_168;
  FScriptContainerElement *local_160;
  int *piStack_158;
  int local_150;
  undefined4 uStack_14c;
  undefined1 local_148 [72];
  void *local_100;
  undefined4 local_f8;
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_f0;
  void *local_b0;
  undefined4 local_a8;
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_a0;
  void *local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  this_00 = (this->StaticMesh).field0_0x0.DebugPtr;
  if ((this_00 != (UStaticMesh *)0x0) &&
     (local_170 = &param_1->LODStats, pFVar12 = UStaticMesh::GetRenderData(this_00),
     pFVar12 != (FStaticMeshRenderData *)0x0)) {
    pFVar12 = UStaticMesh::GetRenderData((this->StaticMesh).field0_0x0.DebugPtr);
    uVar3 = (pFVar12->LODResources).Array.ArrayNum;
    piVar1 = &(pFVar12->LODResources).Array.ArrayNum;
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    piVar2 = &(param_1->LODStats).ArrayMax;
    if (*piVar2 < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,uVar3,(ForAnyElementType *)param_1,(param_1->LODStats).ArrayNum,piVar2);
    }
    pFVar15 = (pFVar12->LODResources).Array.AllocatorInstance.Data;
    uVar16 = 0;
    local_150 = *piVar1;
    local_168 = pFVar15 + (longlong)local_150 * 8;
    local_178 = CONCAT44(uStack_14c,local_150);
    local_194 = 0;
    local_190 = 0;
    uVar17 = uVar16;
    piStack_180 = piVar1;
    local_160 = pFVar15;
    piStack_158 = piVar1;
    while( true ) {
      pFVar8 = local_168;
      local_188 = pFVar15;
      if (*piStack_180 != (int)local_178) {
        local_196 = 0;
        `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_196);
      }
      if (pFVar15 == pFVar8) break;
      this_01 = *(FStaticMeshLODResources **)pFVar15;
      TArray<FPrimitiveLODStats,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
                (&param_1->LODStats,(int)uVar17,1);
      pFVar15 = (param_1->LODStats).AllocatorInstance.Data + uVar16;
      *(int *)pFVar15 = (int)uVar17;
      *(undefined8 *)(pFVar15 + 4) = 1;
      *(undefined2 *)(pFVar15 + 0xc) = 0x100;
      *(undefined8 *)(pFVar15 + 0x10) = 0;
      *(undefined8 *)(pFVar15 + 0x18) = 0;
      *(undefined8 *)(pFVar15 + 0x20) = 0;
      *(undefined4 *)(pFVar15 + 4) = *(undefined4 *)&(this_01->Sections).field_0x28;
      pFVar15[0xc] = this_01->bIsOptionalLOD;
      if (this_01->bBuffersInlined == 0) {
        bVar9 = FBulkData::DoesExist((FBulkData *)&this_01->StreamingBulkData);
        FVar10 = (FScriptContainerElement)0x0;
        if (bVar9) goto LAB_1479cd601;
      }
      else {
LAB_1479cd601:
        FVar10 = (FScriptContainerElement)0x1;
      }
      pFVar15[0xd] = FVar10;
      FResourceSizeEx::FResourceSizeEx((FResourceSizeEx *)local_148);
      FStaticMeshLODResources::GetResourceSizeEx(this_01,(FResourceSizeEx *)local_148);
      uVar13 = FResourceSizeEx::GetTotalMemoryBytes((FResourceSizeEx *)local_148);
      *(ulong64 *)(pFVar15 + 0x10) = uVar13;
      pFVar14 = &this_01->Sections;
      pFVar5 = *(FStaticMeshSectionArray **)&(this_01->Sections).field_0x20;
      iVar4 = *(int *)&(this_01->Sections).field_0x28;
      if (pFVar5 != (FStaticMeshSectionArray *)0x0) {
        pFVar14 = pFVar5;
      }
      puVar7 = (undefined2 *)&pFVar14->field_0x0;
      while( true ) {
        if (*(int *)&(this_01->Sections).field_0x28 != iVar4) {
          local_195 = 0;
          `TCheckedPointerIterator<FStaticMeshSection_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_195);
        }
        if (pFVar14 == (FStaticMeshSectionArray *)(puVar7 + (longlong)iVar4 * 0xe)) break;
        local_198 = *(undefined2 *)pFVar14;
        if (((*(undefined2 **)(pFVar15 + 0x18) <= &local_198) &&
            (&local_198 < *(undefined2 **)(pFVar15 + 0x18) + *(int *)(pFVar15 + 0x24))) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar11 = *(int *)(pFVar15 + 0x20);
        if (iVar11 == *(int *)(pFVar15 + 0x24)) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x202,(ForAnyElementType *)(pFVar15 + 0x18),(int *)(pFVar15 + 0x24));
        }
        *(int *)(pFVar15 + 0x20) = iVar11 + 1;
        *(undefined2 *)(*(longlong *)(pFVar15 + 0x18) + (longlong)iVar11 * 2) = local_198;
        *(int *)(pFVar15 + 8) = *(int *)(pFVar15 + 8) + *(int *)&pFVar14->field_0x8;
        pFVar14 = (FStaticMeshSectionArray *)&pFVar14->field_0x1c;
      }
      local_194 = local_194 + 1;
      uVar17 = (ulonglong)local_194;
      uVar16 = local_190 + 0x28;
      local_58 = 0;
      local_190 = uVar16;
      if (local_60 != (void *)0x0) {
        FMemory::Free(local_60);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_a0);
      local_a8 = 0;
      if (local_b0 != (void *)0x0) {
        FMemory::Free(local_b0);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_f0);
      local_f8 = 0;
      if (local_100 != (void *)0x0) {
        FMemory::Free(local_100);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(local_148 + 8));
      pFVar15 = local_188 + 8;
      param_1 = (FPrimitiveStats *)local_170;
    }
  }
  return;
}

// GetPrivateStaticClass @ 1479ce1b0

UClass * __cdecl UStaticMeshComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStaticMeshComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"StaticMeshComponent",
               &Z_Registration_Info_UClass_UStaticMeshComponent.InnerSingleton,
               StaticRegisterNativesUStaticMeshComponent,0x650,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_UStaticMeshComponent,L"Engine",InternalConstructor<UStaticMeshComponent>,
               InternalVTableHelperCtorCaller<UStaticMeshComponent>,local_res8,
               UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStaticMeshComponent.InnerSingleton;
}

// GetSocketByName @ 1479d0b30

UStaticMeshSocket * __thiscall
UStaticMeshComponent::GetSocketByName(UStaticMeshComponent *this,FName param_1)

{
  UStaticMesh *pUVar1;
  UStaticMeshSocket *pUVar2;
  
  pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
  if (pUVar1 != (UStaticMesh *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    pUVar2 = UStaticMesh::FindSocket(pUVar1,param_1);
    return pUVar2;
  }
  return (UStaticMeshSocket *)0x0;
}

// GetSocketTransform @ 1479d11c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UStaticMeshComponent::GetSocketTransform
          (UStaticMeshComponent *this,TTransform<double> *__return_storage_ptr__,FName param_1,
          ERelativeTransformSpace param_2)

{
  longlong lVar1;
  bool bVar2;
  UStaticMeshSocket *this_00;
  undefined1 auStack_a8 [32];
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if ((param_1 != (FName)0x0) &&
     (this_00 = GetSocketByName(this,param_1), this_00 != (UStaticMeshSocket *)0x0)) {
    local_88.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_88.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_88.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_88.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_88.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_88.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_88.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_88.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_88.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_88.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_88.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_88.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_88.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_88.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_88.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_88.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_88.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_88.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    bVar2 = UStaticMeshSocket::GetSocketTransform(this_00,&local_88,this);
    if (bVar2) {
      if (param_2 == RTS_World) {
        (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_88.Rotation.XY.m128d_f64[0];
        (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_88.Rotation.XY.m128d_f64[1];
        (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_88.Rotation.ZW.m128d_f64[0];
        (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_88.Rotation.ZW.m128d_f64[1];
        (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_88.Translation.XY.m128d_f64[0]
        ;
        (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_88.Translation.XY.m128d_f64[1]
        ;
        (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_88.Translation.ZW.m128d_f64[0]
        ;
        (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = local_88.Translation.ZW.m128d_f64[1]
        ;
        (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_88.Scale3D.XY.m128d_f64[0];
        (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = local_88.Scale3D.XY.m128d_f64[1];
        (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = local_88.Scale3D.ZW.m128d_f64[0];
        (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = local_88.Scale3D.ZW.m128d_f64[1];
        return __return_storage_ptr__;
      }
      if (param_2 == RTS_Actor) {
        if (this->_padding_ != 0) {
          lVar1 = *(longlong *)(this->_padding_ + 0x1b8);
          if (lVar1 != 0) {
            UE::Math::TTransform<double>::GetRelativeTransform
                      (&local_88,__return_storage_ptr__,(TTransform<double> *)(lVar1 + 0x1f0));
            return __return_storage_ptr__;
          }
          UE::Math::TTransform<double>::GetRelativeTransform
                    (&local_88,__return_storage_ptr__,&UE::Math::TTransform<double>::Identity);
          return __return_storage_ptr__;
        }
      }
      else if (param_2 == RTS_Component) {
        UE::Math::TTransform<double>::GetRelativeTransform
                  (&local_88,__return_storage_ptr__,(TTransform<double> *)&this->_padding_);
        return __return_storage_ptr__;
      }
    }
  }
  USceneComponent::GetSocketTransform
            ((USceneComponent *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// GetStaticLightMapResolution @ 1479d1b70

int __thiscall UStaticMeshComponent::GetStaticLightMapResolution(UStaticMeshComponent *this)

{
  int local_res8 [2];
  int local_res10 [6];
  
  (**(code **)(this->_padding_ + 0x7b8))(this,local_res10,local_res8);
  if (local_res8[0] < local_res10[0]) {
    local_res8[0] = local_res10[0];
  }
  return local_res8[0];
}

// GetStreamingRenderAssetInfo @ 1479d1be0

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
UStaticMeshComponent::GetStreamingRenderAssetInfo
          (UStaticMeshComponent *this,FStreamingTextureLevelContext *param_1,
          TArray<FStreamingRenderAssetPrimitiveInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  int iVar4;
  UStaticMesh *pUVar5;
  FLightMap *pFVar6;
  FShadowMap *pFVar7;
  code *pcVar8;
  char cVar9;
  bool bVar10;
  bool bVar11;
  EStreamableRenderAssetType EVar12;
  uint uVar13;
  FStaticMeshRenderData *pFVar14;
  UMapBuildDataRegistry *this_00;
  FMeshMapBuildData *pFVar15;
  FLightMap2D *this_01;
  UTexture2D *pUVar16;
  FShadowMap2D *this_02;
  undefined8 *puVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  TArray<FStreamingTextureBuildInfo,TSizedDefaultAllocator<32>_> *pTVar20;
  TArray<FStreamingTextureBuildInfo,TSizedDefaultAllocator<32>_> *pTVar21;
  uint uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  double dVar26;
  longlong local_res8;
  FGuid local_68 [2];
  
  if (this->bIgnoreInstanceForTextureStreaming == '\0') {
    pUVar5 = (this->StaticMesh).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      if (pUVar5 == (UStaticMesh *)0x0) {
        return;
      }
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    else if (pUVar5 == (UStaticMesh *)0x0) {
      return;
    }
    pUVar5 = (this->StaticMesh).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    cVar9 = (**(code **)(pUVar5->_padding_ + 0x10))();
    if (cVar9 == '\0') {
      pUVar5 = (this->StaticMesh).field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UStaticMesh *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      bVar10 = UStaticMesh::HasValidRenderData(pUVar5,true,-1);
      if (!bVar10) {
        pUVar5 = (this->StaticMesh).field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UStaticMesh *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)pUVar5);
        }
        bVar10 = UStaticMesh::HasValidNaniteData(pUVar5);
        if (!bVar10) {
          return;
        }
      }
      bVar10 = UPrimitiveComponent::CanSkipGetTextureStreamingRenderAssetInfo
                         ((UPrimitiveComponent *)this);
      pTVar20 = (TArray<FStreamingTextureBuildInfo,TSizedDefaultAllocator<32>_> *)0x0;
      if (!bVar10) {
        pTVar21 = &this->StreamingTextureData;
        if (*(char *)((longlong)&this->_padding_ + 3) != '\0') {
          pTVar21 = pTVar20;
        }
        UMeshComponent::GetStreamingTextureInfoInner
                  ((UMeshComponent *)this,param_1,pTVar21,this->StreamingDistanceMultiplier,param_2)
        ;
      }
      dVar26 = __real_3e45798ee0000000;
      if (0 < (this->LODData).ArrayNum) {
        local_res8 = 0;
        do {
          pFVar15 = (FMeshMapBuildData *)0x0;
          uVar22 = (uint)pTVar20;
          uVar13 = 0;
          if ((int)uVar22 < (this->LODData).ArrayNum) {
            uVar13 = ~uVar22 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar19 = (this->LODData).AllocatorInstance.Data;
          pUVar5 = (this->StaticMesh).field0_0x0.DebugPtr;
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
            if (pUVar5 != (UStaticMesh *)0x0) goto LAB_1479d1dda;
LAB_1479d1ead:
            this_01 = (FLightMap2D *)0x0;
          }
          else {
            if (pUVar5 == (UStaticMesh *)0x0) goto LAB_1479d1ead;
            UE::GC::MarkAsReachable((UObject *)pUVar5);
LAB_1479d1dda:
            pUVar5 = (this->StaticMesh).field0_0x0.DebugPtr;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar5 != (UStaticMesh *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar5);
            }
            pFVar14 = UStaticMesh::GetRenderData(pUVar5);
            if (pFVar14 == (FStaticMeshRenderData *)0x0) goto LAB_1479d1ead;
            pUVar5 = (this->StaticMesh).field0_0x0.DebugPtr;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar5 != (UStaticMesh *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar5);
            }
            pFVar14 = UStaticMesh::GetRenderData(pUVar5);
            pUVar5 = (this->StaticMesh).field0_0x0.DebugPtr;
            iVar4 = (pFVar14->LODResources).Array.ArrayNum;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar5 != (UStaticMesh *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar5);
            }
            pFVar14 = UStaticMesh::GetRenderData(pUVar5);
            if ((pFVar14->bLODsShareStaticLighting == false) && (iVar4 != (this->LODData).ArrayNum))
            {
LAB_1479d1eab:
              pFVar15 = (FMeshMapBuildData *)0x0;
              goto LAB_1479d1ead;
            }
            pFVar15 = *(FMeshMapBuildData **)(pFVar19 + local_res8 + 0x28);
            if (pFVar15 == (FMeshMapBuildData *)0x0) {
              this_00 = UMapBuildDataRegistry::Get((UActorComponent *)this);
              if (this_00 == (UMapBuildDataRegistry *)0x0) goto LAB_1479d1eab;
              pFVar19 = pFVar19 + local_res8 + 0x10;
              local_68[0]._0_8_ = *(undefined8 *)pFVar19;
              local_68[0]._8_8_ = *(undefined8 *)(pFVar19 + 8);
              pFVar15 = UMapBuildDataRegistry::GetMeshBuildData(this_00,local_68);
              if (pFVar15 == (FMeshMapBuildData *)0x0) goto LAB_1479d1ead;
            }
            pFVar6 = (pFVar15->LightMap).Reference;
            if (pFVar6 == (FLightMap *)0x0) goto LAB_1479d1ead;
            this_01 = (FLightMap2D *)(**(code **)(pFVar6->_padding_ + 0x30))();
          }
          bVar10 = AllowHighQualityLightmaps((FGenericStaticFeatureLevel)param_1->FeatureLevel);
          if ((((this_01 != (FLightMap2D *)0x0) &&
               (bVar11 = FLightMap2D::IsValid(this_01,bVar10 ^ 1), bVar11)) &&
              (dVar26 < (this_01->CoordinateScale).field0_0x0._s_0.X)) &&
             (dVar26 < (this_01->CoordinateScale).field0_0x0._s_0.Y)) {
            pUVar5 = (this->StaticMesh).field0_0x0.DebugPtr;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar5 != (UStaticMesh *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar5);
            }
            dVar1 = *(double *)&(this_01->CoordinateScale).field0_0x0;
            uVar23 = SUB84(dVar1,0);
            uVar24 = (undefined4)((ulonglong)dVar1 >> 0x20);
            dVar2 = *(double *)((longlong)&(this_01->CoordinateScale).field0_0x0 + 8);
            if (dVar2 <= dVar1) {
              uVar23 = SUB84(dVar2,0);
              uVar24 = (undefined4)((ulonglong)dVar2 >> 0x20);
            }
            uVar13 = param_2->ArrayNum;
            fVar25 = (float)((double)pUVar5->LightmapUVDensity / (double)CONCAT44(uVar24,uVar23));
            if (uVar13 == param_2->ArrayMax) {
              uVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x850,&param_2->AllocatorInstance,&param_2->ArrayMax);
            }
            param_2->ArrayNum = uVar13 + 1;
            uVar18 = 0;
            if ((int)uVar13 < (int)(uVar13 + 1)) {
              uVar18 = ~uVar13 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar19 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar13 * 0x50;
            if (pFVar19 != (FScriptContainerElement *)0x0) {
              pUVar16 = FLightMap2D::GetTexture(this_01,bVar10 ^ 1);
              *(UTexture2D **)pFVar19 = pUVar16;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar16 != (UTexture2D *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)pUVar16);
              }
              lVar3 = this->_padding_;
              *(longlong *)(pFVar19 + 8) = this->_padding_;
              *(longlong *)(pFVar19 + 0x10) = lVar3;
              lVar3 = this->_padding_;
              *(longlong *)(pFVar19 + 0x18) = this->_padding_;
              *(longlong *)(pFVar19 + 0x20) = lVar3;
              lVar3 = this->_padding_;
              *(longlong *)(pFVar19 + 0x28) = this->_padding_;
              *(longlong *)(pFVar19 + 0x30) = lVar3;
              lVar3 = this->_padding_;
              *(uint *)(pFVar19 + 0x48) = *(uint *)(pFVar19 + 0x48) & 0xfffffffe;
              *(uint *)(pFVar19 + 0x48) = *(uint *)(pFVar19 + 0x48) | 2;
              *(float *)(pFVar19 + 0x40) = fVar25;
              *(longlong *)(pFVar19 + 0x38) = lVar3;
              *(undefined4 *)(pFVar19 + 0x44) = 0xffff0000;
            }
            uVar13 = param_2->ArrayNum;
            if (uVar13 == param_2->ArrayMax) {
              uVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x850,&param_2->AllocatorInstance,&param_2->ArrayMax);
            }
            param_2->ArrayNum = uVar13 + 1;
            uVar18 = 0;
            if ((int)uVar13 < (int)(uVar13 + 1)) {
              uVar18 = ~uVar13 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar19 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar13 * 0x50;
            if (pFVar19 != (FScriptContainerElement *)0x0) {
              pUVar16 = FLightMap2D::GetAOMaterialMaskTexture(this_01);
              *(UTexture2D **)pFVar19 = pUVar16;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar16 != (UTexture2D *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)pUVar16);
              }
              lVar3 = this->_padding_;
              *(longlong *)(pFVar19 + 8) = this->_padding_;
              *(longlong *)(pFVar19 + 0x10) = lVar3;
              lVar3 = this->_padding_;
              *(longlong *)(pFVar19 + 0x18) = this->_padding_;
              *(longlong *)(pFVar19 + 0x20) = lVar3;
              lVar3 = this->_padding_;
              *(longlong *)(pFVar19 + 0x28) = this->_padding_;
              *(longlong *)(pFVar19 + 0x30) = lVar3;
              lVar3 = this->_padding_;
              *(uint *)(pFVar19 + 0x48) = *(uint *)(pFVar19 + 0x48) & 0xfffffffe;
              *(uint *)(pFVar19 + 0x48) = *(uint *)(pFVar19 + 0x48) | 2;
              *(float *)(pFVar19 + 0x40) = fVar25;
              *(longlong *)(pFVar19 + 0x38) = lVar3;
              *(undefined4 *)(pFVar19 + 0x44) = 0xffff0000;
            }
            uVar13 = param_2->ArrayNum;
            if (uVar13 == param_2->ArrayMax) {
              uVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x850,&param_2->AllocatorInstance,&param_2->ArrayMax);
            }
            param_2->ArrayNum = uVar13 + 1;
            uVar18 = 0;
            if ((int)uVar13 < (int)(uVar13 + 1)) {
              uVar18 = ~uVar13 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar19 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar13 * 0x50;
            if (pFVar19 != (FScriptContainerElement *)0x0) {
              pUVar16 = FLightMap2D::GetSkyOcclusionTexture(this_01);
              *(UTexture2D **)pFVar19 = pUVar16;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar16 != (UTexture2D *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)pUVar16);
              }
              lVar3 = this->_padding_;
              *(longlong *)(pFVar19 + 8) = this->_padding_;
              *(longlong *)(pFVar19 + 0x10) = lVar3;
              lVar3 = this->_padding_;
              *(longlong *)(pFVar19 + 0x18) = this->_padding_;
              *(longlong *)(pFVar19 + 0x20) = lVar3;
              lVar3 = this->_padding_;
              *(longlong *)(pFVar19 + 0x28) = this->_padding_;
              *(longlong *)(pFVar19 + 0x30) = lVar3;
              lVar3 = this->_padding_;
              *(uint *)(pFVar19 + 0x48) = *(uint *)(pFVar19 + 0x48) & 0xfffffffe;
              *(uint *)(pFVar19 + 0x48) = *(uint *)(pFVar19 + 0x48) | 2;
              *(float *)(pFVar19 + 0x40) = fVar25;
              *(longlong *)(pFVar19 + 0x38) = lVar3;
              *(undefined4 *)(pFVar19 + 0x44) = 0xffff0000;
            }
          }
          if ((((pFVar15 != (FMeshMapBuildData *)0x0) &&
               (pFVar7 = (pFVar15->ShadowMap).Reference, pFVar7 != (FShadowMap *)0x0)) &&
              (this_02 = (FShadowMap2D *)(**(code **)(pFVar7->_padding_ + 0x28))(),
              this_02 != (FShadowMap2D *)0x0)) &&
             ((((this_02->Texture).field0_0x0.DebugPtr != (UShadowMapTexture2D *)0x0 &&
               (dVar26 < (this_02->CoordinateScale).field0_0x0._s_0.X)) &&
              (dVar26 < (this_02->CoordinateScale).field0_0x0._s_0.Y)))) {
            pUVar5 = (this->StaticMesh).field0_0x0.DebugPtr;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar5 != (UStaticMesh *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar5);
            }
            fVar25 = pUVar5->LightmapUVDensity;
            dVar1 = *(double *)((longlong)&(this_02->CoordinateScale).field0_0x0 + 8);
            uVar23 = SUB84(dVar1,0);
            uVar24 = (undefined4)((ulonglong)dVar1 >> 0x20);
            dVar2 = *(double *)&(this_02->CoordinateScale).field0_0x0;
            if (dVar2 <= dVar1) {
              uVar23 = SUB84(dVar2,0);
              uVar24 = (undefined4)((ulonglong)dVar2 >> 0x20);
            }
            uVar13 = param_2->ArrayNum;
            if (uVar13 == param_2->ArrayMax) {
              uVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x850,&param_2->AllocatorInstance,&param_2->ArrayMax);
            }
            param_2->ArrayNum = uVar13 + 1;
            uVar18 = 0;
            if ((int)uVar13 < (int)(uVar13 + 1)) {
              uVar18 = ~uVar13 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar19 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar13 * 0x50;
            if (pFVar19 != (FScriptContainerElement *)0x0) {
              pUVar16 = FShadowMap2D::GetTexture(this_02);
              *(UTexture2D **)pFVar19 = pUVar16;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar16 != (UTexture2D *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)pUVar16);
              }
              lVar3 = this->_padding_;
              *(longlong *)(pFVar19 + 8) = this->_padding_;
              *(longlong *)(pFVar19 + 0x10) = lVar3;
              lVar3 = this->_padding_;
              *(longlong *)(pFVar19 + 0x18) = this->_padding_;
              *(longlong *)(pFVar19 + 0x20) = lVar3;
              lVar3 = this->_padding_;
              *(longlong *)(pFVar19 + 0x28) = this->_padding_;
              *(longlong *)(pFVar19 + 0x30) = lVar3;
              lVar3 = this->_padding_;
              *(uint *)(pFVar19 + 0x48) = *(uint *)(pFVar19 + 0x48) & 0xfffffffe;
              *(uint *)(pFVar19 + 0x48) = *(uint *)(pFVar19 + 0x48) | 2;
              *(float *)(pFVar19 + 0x40) = (float)((double)fVar25 / (double)CONCAT44(uVar24,uVar23))
              ;
              *(longlong *)(pFVar19 + 0x38) = lVar3;
              *(undefined4 *)(pFVar19 + 0x44) = 0xffff0000;
            }
          }
          local_res8 = local_res8 + 0x50;
          pTVar20 = (TArray<FStreamingTextureBuildInfo,TSizedDefaultAllocator<32>_> *)
                    (ulonglong)(uVar22 + 1);
        } while ((int)(uVar22 + 1) < (this->LODData).ArrayNum);
      }
      pUVar5 = (this->StaticMesh).field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UStaticMesh *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      if (((pUVar5->_padding_ & 1) != 0) &&
         (*(byte *)((longlong)&pUVar5->_padding_ + 1) < *(byte *)((longlong)&pUVar5->_padding_ + 3))
         ) {
        pUVar5 = (this->StaticMesh).field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UStaticMesh *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)pUVar5);
        }
        EVar12 = UStaticMesh::GetRenderAssetType(pUVar5);
        if (EVar12 == StaticMesh) {
          if (this->ForcedLodModel < 1) {
            if ((this->_padding_ & 1) == 0) {
              dVar26 = 0.0;
            }
            else {
              dVar26 = (double)this->_padding_ + (double)this->_padding_;
            }
          }
          else {
            pUVar5 = (this->StaticMesh).field0_0x0.DebugPtr;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar5 != (UStaticMesh *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar5);
            }
            pFVar14 = UStaticMesh::GetRenderData(pUVar5);
            dVar26 = (double)((this->ForcedLodModel - (pFVar14->LODResources).Array.ArrayNum) + -1);
          }
          puVar17 = operator_new<FStreamingRenderAssetPrimitiveInfo,TSizedDefaultAllocator<32>_>
                              (0x50,param_2);
          if (puVar17 != (undefined8 *)0x0) {
            pUVar5 = (this->StaticMesh).field0_0x0.DebugPtr;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar5 != (UStaticMesh *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar5);
            }
            *puVar17 = pUVar5;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar5 != (UStaticMesh *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar5);
            }
            lVar3 = this->_padding_;
            puVar17[1] = this->_padding_;
            puVar17[2] = lVar3;
            lVar3 = this->_padding_;
            puVar17[3] = this->_padding_;
            puVar17[4] = lVar3;
            lVar3 = this->_padding_;
            puVar17[5] = this->_padding_;
            puVar17[6] = lVar3;
            lVar3 = this->_padding_;
            *(undefined4 *)((longlong)puVar17 + 0x44) = 0xffff0000;
            *(uint *)(puVar17 + 9) = *(uint *)(puVar17 + 9) & 0xfffffffd | 1;
            puVar17[7] = lVar3;
            *(float *)(puVar17 + 8) = (float)dVar26;
          }
        }
      }
    }
  }
  return;
}

// GetTextureLightAndShadowMapMemoryUsage @ 1479d3050

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
UStaticMeshComponent::GetTextureLightAndShadowMapMemoryUsage
          (UStaticMeshComponent *this,int param_1,int param_2,int *param_3,int *param_4)

{
  bool bVar1;
  UWorld *pUVar2;
  FGenericStaticFeatureLevel FVar3;
  float fVar4;
  
  *param_4 = (int)((float)param_1 * __real_3faa3d71 * (float)param_2);
  pUVar2 = (UWorld *)this->_padding_;
  if ((pUVar2 != (UWorld *)0x0) ||
     (pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
     FVar3.FeatureLevel = GMaxRHIFeatureLevel, pUVar2 != (UWorld *)0x0)) {
    FVar3.FeatureLevel = (uint)(pUVar2->FeatureLevel).Value;
  }
  fVar4 = (float)param_1 * ___real_402a3d71 * (float)param_2;
  bVar1 = AllowHighQualityLightmaps(FVar3);
  if (!bVar1) {
    *param_3 = (int)(fVar4 * __real_3f000000);
    return;
  }
  *param_3 = (int)fVar4;
  return;
}

// GetTextureStreamingTransformScale @ 1479d33f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall UStaticMeshComponent::GetTextureStreamingTransformScale(UStaticMeshComponent *this)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auVar8 [16];
  
  uVar7 = (uint)__xmm_7fffffffffffffff7fffffffffffffff & (uint)this->_padding_;
  uVar9 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_ & *(uint *)((longlong)&this->_padding_ + 4);
  auVar8._0_8_ = CONCAT44(uVar9,uVar7);
  auVar8._8_4_ = _UNK_15061cc88 & (uint)this->_padding_;
  auVar8._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)&this->_padding_ + 4);
  uVar10 = (uint)__xmm_7fffffffffffffff7fffffffffffffff & (uint)this->_padding_;
  uVar11 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_ & *(uint *)((longlong)&this->_padding_ + 4);
  uVar12 = _UNK_15061cc88 & (uint)this->_padding_;
  uVar13 = _UNK_15061cc8c & *(uint *)((longlong)&this->_padding_ + 4);
  auVar5._12_4_ = uVar11;
  auVar5._8_4_ = uVar10;
  auVar5._0_8_ = auVar8._0_8_;
  auVar4._4_4_ = uVar13;
  auVar4._0_4_ = uVar12;
  auVar3._4_4_ = uVar11;
  auVar3._0_4_ = uVar10;
  auVar3._8_4_ = uVar12;
  auVar3._12_4_ = uVar13;
  auVar4._8_4_ = uVar7;
  auVar4._12_4_ = uVar9;
  auVar4 = maxpd(auVar3,auVar4);
  auVar5 = maxpd(auVar4,auVar5);
  auVar2._4_4_ = uVar11;
  auVar2._0_4_ = uVar10;
  auVar2._8_4_ = uVar12;
  auVar2._12_4_ = uVar13;
  auVar1._4_4_ = uVar13;
  auVar1._0_4_ = uVar12;
  auVar4 = blendpd(auVar2,auVar8,2);
  auVar6._8_4_ = auVar8._8_4_;
  auVar6._0_8_ = auVar8._0_8_;
  auVar6._12_4_ = auVar8._12_4_;
  auVar4 = maxpd(auVar6,auVar4);
  auVar1._8_4_ = auVar8._8_4_;
  auVar1._12_4_ = auVar8._12_4_;
  maxpd(auVar4,auVar1);
  return (float)auVar5._0_8_;
}

// GetUsedMaterials @ 1479d4270

void __thiscall
UStaticMeshComponent::GetUsedMaterials
          (UStaticMeshComponent *this,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  UStaticMesh *pUVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  bool abStackX_8 [8];
  UStaticMeshComponent *pUStackX_20;
  UMaterialInterface *pUStack_38;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> TStack_30;
  code *pcStack_20;
  UStaticMeshComponent **ppUStack_18;
  
  pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
  if (pUVar1 != (UStaticMesh *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    ppUStack_18 = &pUStackX_20;
    pcStack_20 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FStaticMeshComponentHelper::GetUsedMaterials<UStaticMeshComponent>'::__l5::<lambda_1>,UMaterialInterface_*,int>
                 ::Call;
    pUStackX_20 = this;
    UStaticMesh::GetUsedMaterials
              (pUVar1,param_1,(TFunctionRef<UMaterialInterface_*___cdecl(int)> *)&pcStack_20);
    bVar4 = IsRayTracingAllowed();
    if (bVar4) {
      pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStaticMesh *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      if (pUVar1->bSupportRayTracing != '\0') {
        bVar4 = Nanite::FNaniteResourcesHelper::ShouldCreateNaniteProxy<UStaticMeshComponent>
                          (this,(FMaterialAudit *)0x0);
        if ((bVar4) && (Nanite::GEnableNaniteMaterialOverrides != 0)) {
          FStaticMeshComponentHelper::GetUsedRayTracingOnlyMaterials<UStaticMeshComponent>
                    (this,param_1);
        }
      }
    }
    if (0 < param_1->ArrayNum) {
      TStack_30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStack_30.ArrayNum = 0;
      TStack_30.ArrayMax = 0;
      UMeshComponent::GetMaterialSlotsOverlayMaterial((UMeshComponent *)this,&TStack_30);
      abStackX_8[0] = false;
      FMaterialOverlayHelper::AppendAllOverlayMaterial(&TStack_30,param_1,abStackX_8);
      if (abStackX_8[0] != false) {
        pUStack_38 = UMeshComponent::GetOverlayMaterial((UMeshComponent *)this);
        if (pUStack_38 != (UMaterialInterface *)0x0) {
          pFVar2 = (param_1->AllocatorInstance).Data;
          if ((pFVar2 <= (FScriptContainerElement *)&pUStack_38) &&
             ((FScriptContainerElement *)&pUStack_38 < pFVar2 + (longlong)param_1->ArrayMax * 8)) {
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
                              (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
          }
          param_1->ArrayNum = iVar5 + 1;
          *(UMaterialInterface **)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 8) =
               pUStack_38;
        }
      }
      if (TStack_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(TStack_30.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// GetUsedTextures @ 1479d4340

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
UStaticMeshComponent::GetUsedTextures
          (UStaticMeshComponent *this,TArray<UTexture_*,TSizedDefaultAllocator<32>_> *param_1,
          Type param_2)

{
  UTexture *local_res8;
  
  local_res8 = (UTexture *)(**(code **)(this->_padding_ + 0xaf0))();
  if (local_res8 != (UTexture *)0x0) {
    TArray<UTexture_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UTexture_*_const_&>
              (param_1,&local_res8);
  }
  UPrimitiveComponent::GetUsedTextures((UPrimitiveComponent *)this,param_1,param_2);
  return;
}

// GetWireframeColor @ 1479d5590

FColor __thiscall UStaticMeshComponent::GetWireframeColor(UStaticMeshComponent *this)

{
  FColor_u_0 *in_RDX;
  
  if (this->bOverrideWireframeColor != '\0') {
    *in_RDX = (this->WireframeColorOverride).field0_0x0;
    return (FColor)SUB84(in_RDX,0);
  }
  UMeshComponent::GetWireframeColorForSceneProxy((UMeshComponent *)this);
  return (FColor)SUB84(in_RDX,0);
}

// HasAnySockets @ 1479d5760

bool __thiscall UStaticMeshComponent::HasAnySockets(UStaticMeshComponent *this)

{
  UStaticMesh *pUVar1;
  
  pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 == (UStaticMesh *)0x0) {
      return false;
    }
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  else if (pUVar1 == (UStaticMesh *)0x0) {
    return false;
  }
  pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  if ((pUVar1->Sockets).ArrayNum < 1) {
    return false;
  }
  return true;
}

// HasLightmapTextureCoordinates @ 1479d57d0

bool __thiscall UStaticMeshComponent::HasLightmapTextureCoordinates(UStaticMeshComponent *this)

{
  UStaticMesh *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  FStaticMeshRenderData *pFVar5;
  uint uVar6;
  uint uVar7;
  
  this_00 = (this->StaticMesh).field0_0x0.DebugPtr;
  if (this_00 != (UStaticMesh *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    if (-1 < this_00->LightMapCoordinateIndex) {
      pFVar5 = UStaticMesh::GetRenderData(this_00);
      if (pFVar5 != (FStaticMeshRenderData *)0x0) {
        pFVar5 = UStaticMesh::GetRenderData(this_00);
        if (0 < (pFVar5->LODResources).Array.ArrayNum) {
          uVar4 = UStaticMesh::GetMinLODIdx(this_00,false);
          pFVar5 = UStaticMesh::GetRenderData(this_00);
          uVar7 = (pFVar5->LODResources).Array.ArrayNum - 1;
          if ((int)uVar4 < (int)uVar7) {
            uVar7 = uVar4;
          }
          uVar4 = this_00->LightMapCoordinateIndex;
          pFVar5 = UStaticMesh::GetRenderData(this_00);
          uVar6 = 0;
          if ((int)uVar7 < (pFVar5->LODResources).Array.ArrayNum) {
            uVar6 = ~uVar7 >> 0x1f;
          }
          if (uVar6 == 0) {
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              uVar3 = (*pcVar1)();
              return (bool)uVar3;
            }
          }
          return uVar4 < *(uint *)(*(longlong *)
                                    ((pFVar5->LODResources).Array.AllocatorInstance.Data +
                                    (longlong)(int)uVar7 * 8) + 0x178);
        }
      }
    }
  }
  return false;
}

// HasValidNaniteData @ 1479d5a50

bool __thiscall UStaticMeshComponent::HasValidNaniteData(UStaticMeshComponent *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(this->_padding_ + 0xb30))();
  if (lVar1 != 0) {
    return 0 < *(int *)(lVar1 + 0x70);
  }
  return false;
}

// HasValidSettingsForStaticLighting @ 1479d5a80

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
UStaticMeshComponent::HasValidSettingsForStaticLighting(UStaticMeshComponent *this,bool param_1)

{
  UStaticMesh *pUVar1;
  bool bVar2;
  char cVar3;
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  
  if (param_1) {
    pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      if (pUVar1 == (UStaticMesh *)0x0) {
        return true;
      }
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    else if (pUVar1 == (UStaticMesh *)0x0) {
      return true;
    }
  }
  local_res18[0] = 0;
  local_res10[0] = 0;
  (**(code **)(this->_padding_ + 0x7b8))(this,local_res18,local_res10);
  bVar2 = UPrimitiveComponent::HasStaticLighting((UPrimitiveComponent *)this);
  if ((bVar2) && (pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr, pUVar1 != (UStaticMesh *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    cVar3 = (**(code **)(this->_padding_ + 0xb48))(this,local_res18[0],local_res10[0]);
    if (cVar3 != '\0') {
      return true;
    }
  }
  return false;
}

// ImportCustomProperties @ 1479d5b40

void __thiscall
UStaticMeshComponent::ImportCustomProperties
          (UStaticMeshComponent *this,wchar_t *param_1,FFeedbackContext *param_2)

{
  wchar_t wVar1;
  code *pcVar2;
  wchar_t *pwVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  FColorVertexBuffer *this_00;
  FColorVertexBuffer *this_01;
  wchar_t *pwVar8;
  ForAnyElementType FVar9;
  FStaticMeshComponentLODInfo *this_02;
  wchar_t *local_res10;
  uint local_res18 [2];
  FString local_28;
  
  local_res10 = param_1;
  if ((param_1 == (wchar_t *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SourceText",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\StaticMeshComponent.cpp"
                         ,0x72d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_2 == (FFeedbackContext *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Warn",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\StaticMeshComponent.cpp"
                         ,0x72e,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar4 = FParse::Command(&local_res10,L"CustomLODData",true);
  if (bVar4) {
    this_01 = (FColorVertexBuffer *)0x0;
    bVar4 = FParse::Value(local_res10,L"LOD=",(int *)local_res18);
    FVar9.Data = (FScriptContainerElement *)this_01;
    if (bVar4) {
      ::FString::PrintfImpl(&local_28,L"%d");
      FVar9.Data = local_28.Data.AllocatorInstance.Data;
      bVar4 = local_28.Data.ArrayNum == 0;
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar5 = local_28.Data.ArrayNum - 1;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      if (bVar4) {
        uVar5 = 0;
      }
      local_res10 = local_res10 + (longlong)(int)uVar5 + 4;
      if (-1 < (int)local_res18[0]) {
        SetLODDataCount(this,local_res18[0] + 1,local_res18[0] + 1);
      }
    }
    uVar5 = local_res18[0];
    uVar6 = 0;
    if ((int)local_res18[0] < (this->LODData).ArrayNum) {
      uVar6 = ~local_res18[0] >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this_02 = (FStaticMeshComponentLODInfo *)
              ((this->LODData).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x50);
    FStaticMeshComponentLODInfo::ImportText(this_02,&local_res10);
    if (local_res10 != (wchar_t *)0x0) {
      wVar1 = *local_res10;
      pwVar3 = local_res10;
      while (wVar1 != L'\0') {
        pwVar8 = pwVar3 + 1;
        if (((wchar_t)(wVar1 - (-(ushort)((ushort)wVar1 - 0x61 < 0x1a) & 0x20)) == 0x43) &&
           (iVar7 = FGenericPlatformStricmp::Strnicmp(pwVar8,L"olorVertexData",0xe), iVar7 == 0)) {
          if (pwVar3 != (wchar_t *)0x0) {
            local_res10 = pwVar3;
            RemoveInstanceVertexColorsFromLOD(this,local_res18[0]);
            if ((this_02->OverrideVertexColors != (FColorVertexBuffer *)0x0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("LODInfo.OverrideVertexColors == nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\StaticMeshComponent.cpp"
                                   ,0x757,L""), bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            this_00 = ::operator_new(0x50);
            if (this_00 != (FColorVertexBuffer *)0x0) {
              this_01 = FColorVertexBuffer::FColorVertexBuffer(this_00);
            }
            this_02->OverrideVertexColors = this_01;
            FColorVertexBuffer::ImportText(this_01,local_res10);
            if ((this_02->OverrideVertexColors->Stride == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("LODInfo.OverrideVertexColors->GetStride() > 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\StaticMeshComponent.cpp"
                                   ,0x75b,L""), bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          break;
        }
        pwVar3 = pwVar8;
        wVar1 = *pwVar8;
      }
    }
    if ((FColorVertexBuffer *)FVar9.Data != (FColorVertexBuffer *)0x0) {
      FMemory::Free(FVar9.Data);
    }
  }
  return;
}

// InitResources @ 1479d80b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UStaticMeshComponent::InitResources(UStaticMeshComponent *this)

{
  FScriptContainerElement *pFVar1;
  FRenderResource *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_InstVertexColorMemory> FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  longlong lVar10;
  uchar auVar11 [8];
  FName local_res10;
  FName local_res18;
  FStatMessage local_48;
  
  uVar9 = 0;
  if (0 < (this->LODData).ArrayNum) {
    lVar10 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < (this->LODData).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar1 = (this->LODData).AllocatorInstance.Data;
      pFVar2 = *(FRenderResource **)(pFVar1 + lVar10 + 0x40);
      if (pFVar2 != (FRenderResource *)0x0) {
        BeginInitResource(pFVar2,(FRenderCommandPipe *)0x0);
        uVar6 = FColorVertexBuffer::GetAllocatedSize
                          (*(FColorVertexBuffer **)(pFVar1 + lVar10 + 0x40));
        auVar11[4] = '\0';
        auVar11[5] = '\0';
        auVar11[6] = '\0';
        auVar11[7] = '\0';
        auVar11[0] = (char)uVar6;
        auVar11[1] = (char)(uVar6 >> 8);
        auVar11[2] = (char)(uVar6 >> 0x10);
        auVar11[3] = (char)(uVar6 >> 0x18);
        if (uVar6 != 0) {
          FVar8 = StatPtr_STAT_InstVertexColorMemory;
          if (StatPtr_STAT_InstVertexColorMemory ==
              (FThreadSafeStaticStat<FStat_STAT_InstVertexColorMemory>)0x0) {
            pFVar7 = ::FName::FName(&local_res18,"STAT_InstVertexColorMemory");
            FVar8 = (FThreadSafeStaticStat<FStat_STAT_InstVertexColorMemory>)
                    FThreadSafeStaticStatBase::DoSetup
                              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InstVertexColorMemory,
                               *pFVar7,L"StaticMesh VxColor Inst Mem","STATGROUP_MemoryStaticMesh",
                               "STATCAT_Advanced",L"Memory StaticMesh",true,false,ST_int64,false,
                               false,MCR_Physical);
          }
          FVar3 = *(FName *)FVar8;
          if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            this_00 = TlsGetValue(FThreadStats::TlsSlot);
            if (this_00 == (FThreadStats *)0x0) {
              this_01 = FThreadStatsPool::Get();
              this_00 = FThreadStatsPool::GetFromPool(this_01);
            }
            local_48.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
            local_res10 = FVar3;
            local_48.StatData.Pad = auVar11;
            local_48.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
            FThreadStats::AddStatMessage(this_00,&local_48);
            FStatsTrace::Add(&local_res10,(long64)auVar11);
            if (this_00->ScopeCount == 0) {
              FThreadStats::Flush(this_00,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(this_00,false,false);
            }
          }
        }
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x50;
    } while ((int)uVar9 < (this->LODData).ArrayNum);
  }
  return;
}

// IsHLODRelevant @ 1479da4b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UStaticMeshComponent::IsHLODRelevant(UStaticMeshComponent *this)

{
  UStaticMesh *pUVar1;
  bool bVar2;
  char cVar3;
  
  bVar2 = UActorComponent::CanBeHLODRelevant((UActorComponent *)this);
  if (bVar2) {
    pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar1 == (UStaticMesh *)0x0) {
        return false;
      }
    }
    else {
      if (pUVar1 == (UStaticMesh *)0x0) {
        return false;
      }
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    cVar3 = (**(code **)(this->_padding_ + 0x560))(this);
    if (cVar3 != '\0') {
      return *(char *)((longlong)&this->_padding_ + 3) != '\x02';
    }
  }
  return false;
}

// IsMaterialSlotNameValid @ 1479da5c0

bool __thiscall
UStaticMeshComponent::IsMaterialSlotNameValid(UStaticMeshComponent *this,FName param_1)

{
  byte extraout_var;
  
  (**(code **)(this->_padding_ + 0x698))();
  return (bool)(extraout_var >> 7 ^ 1);
}

// IsNavigationRelevant @ 1479da600

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall UStaticMeshComponent::IsNavigationRelevant(UStaticMeshComponent *this)

{
  UStaticMesh *this_00;
  char cVar1;
  bool bVar2;
  
  this_00 = (this->StaticMesh).field0_0x0.DebugPtr;
  if (this_00 != (UStaticMesh *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    cVar1 = (**(code **)(this_00->_padding_ + 0x10))();
    if (cVar1 == '\0') {
      bVar2 = UStaticMesh::IsNavigationRelevant(this_00);
      if (bVar2) {
        bVar2 = UPrimitiveComponent::IsNavigationRelevant((UPrimitiveComponent *)this);
        if (bVar2) {
          return true;
        }
      }
    }
  }
  return false;
}

// IsPostLoadThreadSafe @ 1479da6b0

bool __thiscall UStaticMeshComponent::IsPostLoadThreadSafe(UStaticMeshComponent *this)

{
  return false;
}

// IsShown @ 1479da860

bool __thiscall UStaticMeshComponent::IsShown(UStaticMeshComponent *this,FEngineShowFlags *param_1)

{
  return param_1->StaticMeshes;
}

// NotifyIfStaticMeshChanged @ 1479db340

void __thiscall UStaticMeshComponent::NotifyIfStaticMeshChanged(UStaticMeshComponent *this)

{
  return;
}

// OnAsyncDestroyPhysicsStateEnd_GameThread @ 1479db6f0

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
UStaticMeshComponent::OnAsyncDestroyPhysicsStateEnd_GameThread(UStaticMeshComponent *this)

{
  byte *pbVar1;
  char cVar2;
  
  UPrimitiveComponent::OnAsyncDestroyPhysicsStateEnd_GameThread((UPrimitiveComponent *)this);
  cVar2 = (**(code **)(*(longlong *)&this[-1].LightmassSettings.EmissiveLightExplicitInfluenceRadius
                      + 0x4e0))(&this[-1].LightmassSettings.EmissiveLightExplicitInfluenceRadius);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 ^ (cVar2 << 6 ^ *(byte *)((longlong)&this->_padding_ + 2)) & 0x40;
  FNavigationSystem::UpdateComponentData
            ((UActorComponent *)&this[-1].LightmassSettings.EmissiveLightExplicitInfluenceRadius);
  return;
}

// OnCreatePhysicsState @ 1479db9d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UStaticMeshComponent::OnCreatePhysicsState(UStaticMeshComponent *this)

{
  byte bVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  
  UPrimitiveComponent::OnCreatePhysicsState((UPrimitiveComponent *)this);
  cVar4 = (**(code **)(this->_padding_ + 0x4e0))(this);
  bVar1 = *(byte *)((longlong)&this->_padding_ + 2);
  lVar2 = this->_padding_;
  *(byte *)((longlong)&this->_padding_ + 2) = (cVar4 << 6 ^ bVar1) & 0x40 ^ bVar1;
  if ((lVar2 != 0) && ((this->_padding_ & 0x18) == 8)) {
    return;
  }
  if (*(int *)((longlong)&this->_padding_ + 4) == 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsPreRegistering()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\StaticMeshComponent.cpp"
                       ,0x3c1,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FNavigationSystem::UpdateComponentData((UActorComponent *)this);
  return;
}

// OnDestroyPhysicsState @ 1479dba60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UStaticMeshComponent::OnDestroyPhysicsState(UStaticMeshComponent *this)

{
  byte bVar1;
  char cVar2;
  
  UPrimitiveComponent::OnDestroyPhysicsState((UPrimitiveComponent *)this);
  cVar2 = (**(code **)(this->_padding_ + 0x4e0))(this);
  bVar1 = *(byte *)((longlong)&this->_padding_ + 2);
  *(byte *)((longlong)&this->_padding_ + 2) = (cVar2 << 6 ^ bVar1) & 0x40 ^ bVar1;
  FNavigationSystem::UpdateComponentData((UActorComponent *)this);
  return;
}

// OnRegister @ 1479dc580

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

void __thiscall UStaticMeshComponent::OnRegister(UStaticMeshComponent *this)

{
  bool bVar1;
  UWorld *pUVar2;
  TMatrix<double> *this_00;
  wchar_t *pwVar3;
  bool bVar4;
  double dVar5;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId816,"UStaticMeshComponent::OnRegister",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\StaticMeshComponent.cpp"
               ,0x330);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId816);
  }
  if (*(int *)((longlong)&this->_padding_ + 4) != 2) {
    UpdateCollisionFromStaticMesh(this);
  }
  UpdateMapBuildDataId(this);
  UPrimitiveComponent::OnRegister((UPrimitiveComponent *)this);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar3 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar3,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if ((((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
      (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
       false)) && (bVar1 = IsComponentPSOPrecachingEnabled(), bVar1)) {
    if ((this->bPrecachedPSOs != '\0') &&
       ((this->_padding_ != 0 ||
        (pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
        pUVar2 != (UWorld *)0x0)))) {
      pUVar2 = (UWorld *)this->_padding_;
      if (pUVar2 == (UWorld *)0x0) {
        pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
      }
      bVar1 = UWorld::IsGameWorld(pUVar2);
      if (bVar1) {
        this_00 = (TMatrix<double> *)(**(code **)(this->_padding_ + 0x808))(this,local_98);
        dVar5 = UE::Math::TMatrix<double>::Determinant(this_00);
        if (0.0 <= dVar5) goto LAB_1479dc6c2;
      }
    }
    (**(code **)(this->_padding_ + 0x378))(this);
  }
LAB_1479dc6c2:
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// OnRep_StaticMesh @ 1479dc990

void __thiscall
UStaticMeshComponent::OnRep_StaticMesh(UStaticMeshComponent *this,UStaticMesh *param_1)

{
  UStaticMesh *pUVar1;
  bool bVar2;
  
  pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
  if (pUVar1 == (UStaticMesh *)0x0) {
    bVar2 = param_1 == (UStaticMesh *)0x0;
  }
  else {
    bVar2 = pUVar1 == param_1;
  }
  if (!bVar2) {
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->StaticMesh).field0_0x0.DebugPtr = param_1;
    (**(code **)(this->_padding_ + 0xb28))(this,pUVar1);
  }
  return;
}

// OnUnregister @ 1479dca70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UStaticMeshComponent::OnUnregister(UStaticMeshComponent *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UMaterialCacheVirtualTexture *this_00;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  UPrimitiveComponent::OnUnregister((UPrimitiveComponent *)this);
  pFVar4 = (this->MaterialCacheTextures).AllocatorInstance.Data;
  iVar3 = (this->MaterialCacheTextures).ArrayNum;
  pFVar2 = pFVar4 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->MaterialCacheTextures).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<UMaterialCacheVirtualTexture>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar2) break;
    this_00 = *(UMaterialCacheVirtualTexture **)pFVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_00 != (UMaterialCacheVirtualTexture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    UMaterialCacheVirtualTexture::Unregister(this_00);
    pFVar4 = pFVar4 + 8;
  }
  piVar1 = &(this->MaterialCacheTextures).ArrayMax;
  (this->MaterialCacheTextures).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->MaterialCacheTextures).AllocatorInstance,0,piVar1);
  }
  this->bPrecachedPSOs = '\0';
  return;
}

// PostApplyToComponent @ 1479ddd50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UStaticMeshComponent::PostApplyToComponent(UStaticMeshComponent *this)

{
  FComponentReregisterContext FStack_28;
  
  if (((this->_padding_ & 1) != 0) && ((this->_padding_ & 0x4000) != 0)) {
    FComponentReregisterContext::FComponentReregisterContext
              (&FStack_28,(UActorComponent *)this,
               (TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator> *)
               0x0);
    FComponentReregisterContext::~FComponentReregisterContext(&FStack_28);
  }
  return;
}

// PostInitProperties @ 1479dddc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UStaticMeshComponent::PostInitProperties(UStaticMeshComponent *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  
  UPrimitiveComponent::PostInitProperties((UPrimitiveComponent *)this);
  uVar6 = 0;
  if (0 < (this->LODData).ArrayNum) {
    lVar5 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->LODData).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar6 = uVar6 + 1;
      *(UStaticMeshComponent **)((this->LODData).AllocatorInstance.Data + lVar5 + 0x48) = this;
      lVar5 = lVar5 + 0x50;
    } while ((int)uVar6 < (this->LODData).ArrayNum);
  }
  bVar1 = this->field_0x5ac;
  this->field_0x5ac = (bVar1 << 3 ^ bVar1) & 0x40 ^ bVar1;
  return;
}

// PostLoad @ 1479de0a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UStaticMeshComponent::PostLoad(UStaticMeshComponent *this)

{
  char cVar1;
  int iVar2;
  UStaticMesh *pUVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  FLLMScope local_res10 [2];
  FMemScope local_res18;
  
  FLLMScope::FLLMScope(local_res10,StaticMesh,false,None,Default,true);
  FMemScope::FMemScope(&local_res18,StaticMesh,true);
  pUVar3 = (this->StaticMesh).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar3 == (UStaticMesh *)0x0) goto LAB_1479de122;
  }
  else {
    if (pUVar3 == (UStaticMesh *)0x0) goto LAB_1479de122;
    UE::GC::MarkAsReachable((UObject *)pUVar3);
    pUVar3 = (this->StaticMesh).field0_0x0.DebugPtr;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  UObject::ConditionalPostLoad((UObject *)pUVar3);
LAB_1479de122:
  UPrimitiveComponent::PostLoad((UPrimitiveComponent *)this);
  if (PRIVATE_GIsRunningCommandlet == false) {
    pFVar6 = (this->LODData).AllocatorInstance.Data;
    iVar2 = (this->LODData).ArrayNum;
    pFVar4 = pFVar6 + 0x3c;
    pFVar5 = pFVar6 + (longlong)iVar2 * 0x50;
    while( true ) {
      if ((this->LODData).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FStaticMeshComponentLODInfo,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar6 == pFVar5) break;
      *(undefined4 *)(pFVar4 + -4) = 0;
      if (*(int *)pFVar4 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,0x10,0,(ForAnyElementType *)(pFVar4 + -0xc),0,(int *)pFVar4);
      }
      pFVar6 = pFVar6 + 0x50;
      pFVar4 = pFVar4 + 0x50;
    }
  }
  if (this->bDisallowMeshPaintPerInstance_DEPRECATED != '\0') {
    this->bEnableVertexColorMeshPainting = '\0';
  }
  iVar2 = 4;
  if (4 < this->OverriddenLightMapRes) {
    iVar2 = this->OverriddenLightMapRes;
  }
  this->OverriddenLightMapRes = iVar2;
  InitResources(this);
  pUVar3 = (this->StaticMesh).field0_0x0.DebugPtr;
  if (pUVar3 != (UStaticMesh *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    pUVar3 = (this->StaticMesh).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    cVar1 = (**(code **)(pUVar3->_padding_ + 0x10))();
    if (cVar1 == '\0') {
      (**(code **)(this->_padding_ + 0x378))(this);
    }
  }
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// PostReinitProperties @ 1479de750

void __thiscall UStaticMeshComponent::PostReinitProperties(UStaticMeshComponent *this)

{
  byte bVar1;
  
  UObject::PostReinitProperties((UObject *)this);
  bVar1 = this->field_0x5ac;
  this->field_0x5ac = (bVar1 << 3 ^ bVar1) & 0x40 ^ bVar1;
  return;
}

// PrecachePSOs @ 1479de9d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UStaticMeshComponent::PrecachePSOs(UStaticMeshComponent *this)

{
  UPrimitiveComponent::PrecachePSOs((UPrimitiveComponent *)this);
  this->bPrecachedPSOs = '\x01';
  return;
}

// PrestreamMeshLODs @ 1479def60

bool __thiscall UStaticMeshComponent::PrestreamMeshLODs(UStaticMeshComponent *this,float param_1)

{
  UStaticMesh *this_00;
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FStreamingManagerCollection *pFVar6;
  IConsoleManager *pIVar7;
  
  this_00 = (this->StaticMesh).field0_0x0.DebugPtr;
  if (this_00 == (UStaticMesh *)0x0) {
    return false;
  }
  if (UE::GC::GIsIncrementalReachabilityPending) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pIVar7 = IConsoleManager::Get();
      CVarAllowFastForceResident =
           (IConsoleVariable *)
           (**(code **)((longlong)*pIVar7 + 0xc0))(pIVar7,L"r.Streaming.AllowFastForceResident");
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (CVarAllowFastForceResident != (IConsoleVariable *)0x0) {
    iVar5 = (**(code **)(*(longlong *)CVarAllowFastForceResident + 200))();
    if (iVar5 != 0) {
      bVar2 = 0x10;
      goto LAB_1479defda;
    }
  }
  bVar2 = 0;
LAB_1479defda:
  *(byte *)&this_00->_padding_ = (byte)this_00->_padding_ & 0xef;
  *(byte *)&this_00->_padding_ = (byte)this_00->_padding_ | bVar2;
  UStreamableRenderAsset::SetForceMipLevelsToBeResident((UStreamableRenderAsset *)this_00,param_1,0)
  ;
  pFVar6 = IStreamingManager::Get();
  if (pFVar6->RenderAssetStreamingManager == (FRenderAssetStreamingManager *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("RenderAssetStreamingManager != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ContentStreaming.cpp"
                       ,0x405,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001479df043. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(pFVar6->RenderAssetStreamingManager->_padding_ + 0xa0))
                    (pFVar6->RenderAssetStreamingManager,this_00);
  return (bool)uVar4;
}

// PropagateLightingScenarioChange @ 1479df150

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UStaticMeshComponent::PropagateLightingScenarioChange(UStaticMeshComponent *this)

{
  code *pcVar1;
  bool bVar2;
  FUObjectItem *pFVar3;
  FString local_38;
  FComponentRecreateRenderStateContext local_28;
  
  local_28.ScenesToUpdateAllPrimitiveSceneInfos =
       (TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator> *)0x0;
  local_28.Component = (UActorComponent *)0x0;
  local_28.ComponentInterface = (IPrimitiveComponent *)0x0;
  if ((this == (UStaticMeshComponent *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InComponent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ComponentRecreateRenderStateContext.h"
                         ,0x28,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar3 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
  if (((uint)((ulonglong)(pFVar3->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) != 0) {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_38,(UObject *)0x0,None);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InComponent->IsUnreachable()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ComponentRecreateRenderStateContext.h"
                       ,0x29,L"%s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->_padding_ & 3) == 3) {
    (**(code **)(this->_padding_ + 0x3a8))(this);
    local_28.Component = (UActorComponent *)this;
    UpdateAllPrimitiveSceneInfosForSingleComponent
              ((UActorComponent *)this,local_28.ScenesToUpdateAllPrimitiveSceneInfos);
  }
  FComponentRecreateRenderStateContext::~FComponentRecreateRenderStateContext(&local_28);
  return;
}

// QuerySupportedSockets @ 1479e0af0

void __thiscall
UStaticMeshComponent::QuerySupportedSockets
          (UStaticMeshComponent *this,
          TArray<FComponentSocketDescription,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  UStaticMesh *pUVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  pUVar2 = (this->StaticMesh).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar2 == (UStaticMesh *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  else if (pUVar2 == (UStaticMesh *)0x0) {
    return;
  }
  uVar8 = 0;
  lVar9 = 0;
  while( true ) {
    pUVar2 = (this->StaticMesh).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    if ((pUVar2->Sockets).ArrayNum <= (int)uVar8) {
      return;
    }
    pUVar2 = (this->StaticMesh).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    uVar6 = 0;
    if ((int)uVar8 < (pUVar2->Sockets).ArrayNum) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) break;
    lVar3 = *(longlong *)((pUVar2->Sockets).AllocatorInstance.Data + lVar9);
    if (lVar3 != 0) {
      uVar6 = param_1->ArrayNum;
      if (uVar6 == param_1->ArrayMax) {
        uVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = uVar6 + 1;
      uVar7 = 0;
      if ((int)uVar6 < (int)(uVar6 + 1)) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar6 * 0xc;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        *(undefined8 *)pFVar1 = *(undefined8 *)(lVar3 + 0x28);
        pFVar1[8] = (FScriptContainerElement)0x2;
      }
    }
    uVar8 = uVar8 + 1;
    lVar9 = lVar9 + 8;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// RegisterLODStreamingCallback @ 1479e2c50

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
UStaticMeshComponent::RegisterLODStreamingCallback
          (UStaticMeshComponent *this,
          TFunction<void___cdecl(UPrimitiveComponent_*,UStreamableRenderAsset_*,ELODStreamingCallbackResult)>
          *param_1,TFunction<void___cdecl(UPrimitiveComponent_*,UStreamableRenderAsset_*,ELODStreamingCallbackResult)>
                   *param_2,float param_3,float param_4)

{
  UStaticMesh *this_00;
  
  this_00 = (this->StaticMesh).field0_0x0.DebugPtr;
  if (this_00 != (UStaticMesh *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    UStreamableRenderAsset::RegisterMipLevelChangeCallback
              ((UStreamableRenderAsset *)this_00,(UPrimitiveComponent *)this,param_3,param_1,param_4
               ,param_2);
    this->bMipLevelCallbackRegistered = '\x01';
  }
  return;
}

// RegisterLODStreamingCallback @ 1479e2ce0

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
UStaticMeshComponent::RegisterLODStreamingCallback
          (UStaticMeshComponent *this,
          TFunction<void___cdecl(UPrimitiveComponent_*,UStreamableRenderAsset_*,ELODStreamingCallbackResult)>
          *param_1,int param_2,float param_3,bool param_4)

{
  UStaticMesh *this_00;
  
  this_00 = (this->StaticMesh).field0_0x0.DebugPtr;
  if (this_00 != (UStaticMesh *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    if (param_2 < 0) {
      param_2 = UStaticMesh::GetMinLODIdx(this_00,true);
    }
    UStreamableRenderAsset::RegisterMipLevelChangeCallback
              ((UStreamableRenderAsset *)this_00,(UPrimitiveComponent *)this,param_2,param_3,param_4
               ,param_1);
    this->bMipLevelCallbackRegistered = '\x01';
  }
  return;
}

// ReleaseMaterialCacheTextures @ 1479e32c0

void __thiscall UStaticMeshComponent::ReleaseMaterialCacheTextures(UStaticMeshComponent *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UMaterialCacheVirtualTexture *this_00;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar3 = (this->MaterialCacheTextures).ArrayNum;
  pFVar4 = (this->MaterialCacheTextures).AllocatorInstance.Data;
  pFVar2 = pFVar4 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->MaterialCacheTextures).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<UMaterialCacheVirtualTexture>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar2) break;
    this_00 = *(UMaterialCacheVirtualTexture **)pFVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_00 != (UMaterialCacheVirtualTexture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    UMaterialCacheVirtualTexture::Unregister(this_00);
    pFVar4 = pFVar4 + 8;
  }
  piVar1 = &(this->MaterialCacheTextures).ArrayMax;
  (this->MaterialCacheTextures).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->MaterialCacheTextures).AllocatorInstance,0,piVar1);
  }
  return;
}

// ReleaseResources @ 1479e3470

void __thiscall UStaticMeshComponent::ReleaseResources(UStaticMeshComponent *this)

{
  FRenderResource *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->LODData).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->LODData).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = *(FRenderResource **)((this->LODData).AllocatorInstance.Data + lVar6 + 0x40);
      if (pFVar1 != (FRenderResource *)0x0) {
        BeginReleaseResource(pFVar1,(FRenderCommandPipe *)0x0);
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x50;
    } while ((int)uVar5 < (this->LODData).ArrayNum);
  }
  FRenderCommandFence::BeginFence((FRenderCommandFence *)&this->_padding_,RenderThread);
  return;
}

// RemoveInstanceVertexColorsFromLOD @ 1479e3bf0

void __thiscall
UStaticMeshComponent::RemoveInstanceVertexColorsFromLOD(UStaticMeshComponent *this,int param_1)

{
  int *piVar1;
  UStaticMesh *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FStaticMeshComponentLODInfo *this_00;
  
  pUVar2 = (this->StaticMesh).field0_0x0.DebugPtr;
  if (pUVar2 != (UStaticMesh *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    pUVar2 = (this->StaticMesh).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    iVar5 = UStaticMesh::GetNumLODs(pUVar2);
    if ((param_1 < iVar5) && (param_1 < (this->LODData).ArrayNum)) {
      if ((param_1 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_00 = (FStaticMeshComponentLODInfo *)
                ((this->LODData).AllocatorInstance.Data + (longlong)param_1 * 0x50);
      if (this_00->OverrideVertexColors != (FColorVertexBuffer *)0x0) {
        FStaticMeshComponentLODInfo::CleanUp(this_00);
        FlushRenderingCommands();
      }
      piVar1 = &(this_00->PaintedVertices).ArrayMax;
      (this_00->PaintedVertices).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,0x10,0,&(this_00->PaintedVertices).AllocatorInstance,0,piVar1);
      }
    }
  }
  return;
}

// RequiresGameThreadEndOfFrameRecreate @ 1479e4bf0

bool __thiscall
UStaticMeshComponent::RequiresGameThreadEndOfFrameRecreate(UStaticMeshComponent *this)

{
  return false;
}

// Serialize @ 1479e6510

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UStaticMeshComponent::Serialize(UStaticMeshComponent *this,FArchive *param_1)

{
  uint *puVar1;
  byte bVar2;
  ulonglong *puVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  UObject *this_00;
  longlong lVar9;
  uint uVar10;
  FLLMScope local_res8 [2];
  uint local_res10 [2];
  TObjectPtr<UTexture>_u_0 local_res18;
  FMemScope local_res20;
  
  FLLMScope::FLLMScope(local_res8,StaticMesh,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,StaticMesh,true);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FRenderingObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteSeasonBranchObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  iVar7 = FArchiveState::CustomVer
                    ((FArchiveState *)param_1,&FFortniteSeasonBranchObjectVersion::GUID);
  if ((iVar7 < 4) &&
     (iVar7 = FArchiveState::CustomVer
                        ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID),
     iVar7 < 0x44)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if (((param_1->field_0x28 & 1) != 0) && (bVar6)) {
    this_00 = UObject::GetArchetype((UObject *)this);
    bVar5 = UObject::IsInBlueprint(this_00);
    if (!bVar5) {
      this->bEvaluateWorldPositionOffset = '\0';
    }
  }
  UPrimitiveComponent::Serialize((UPrimitiveComponent *)this,param_1);
  TArrayPrivateFriend::Serialize<FStaticMeshComponentLODInfo,TSizedDefaultAllocator<32>_>
            (param_1,&this->LODData);
  if (((param_1->field_0x28 & 1) != 0) && (uVar10 = 0, 0 < (this->LODData).ArrayNum)) {
    lVar9 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar10 < (this->LODData).ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar10 = uVar10 + 1;
      *(UStaticMeshComponent **)((this->LODData).AllocatorInstance.Data + lVar9 + 0x48) = this;
      lVar9 = lVar9 + 0x50;
    } while ((int)uVar10 < (this->LODData).ArrayNum);
  }
  if (((param_1->field_0x28 & 1) != 0) && (bVar6)) {
    bVar2 = this->field_0x5ac;
    this->field_0x5ac = (bVar2 << 2 ^ bVar2) & 0x20 ^ bVar2 | 8;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    bVar6 = UObjectBaseUtility::IsTemplate
                      ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
    if ((bVar6) && (this->bUseDefaultCollision != '\0')) {
      UpdateCollisionFromStaticMesh(this);
      FBodyInstance::FixupData((FBodyInstance *)&this->_padding_,(UObject *)this);
    }
    if ((param_1->field_0x28 & 1) != 0) {
      bVar2 = this->field_0x5ac;
      this->field_0x5ac = (bVar2 << 3 ^ bVar2) & 0x40 ^ bVar2;
    }
  }
  iVar7 = FArchiveState::CustomVer((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID)
  ;
  if (iVar7 < 0xa6) goto LAB_1479e67e9;
  if ((*(longlong *)&param_1->field_0x68 == 0) ||
     (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)) {
    uVar10 = 0;
  }
  else {
    uVar10 = 1;
  }
  bVar6 = SUB41(uVar10,0);
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_res10[0] = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_res10[0] = uVar10;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    if (1 < local_res10[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar10 = local_res10[0];
    if ((param_1->field_0x28 & 1) != 0) goto LAB_1479e67a9;
  }
  else {
    uVar10 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
LAB_1479e67a9:
    bVar6 = uVar10 != 0;
  }
  if (bVar6 != false) {
    if ((param_1->field_0x28 & 4) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x150))(param_1);
    }
    else {
      local_res18 = (this->MeshPaintTextureCooked).field0_0x0;
      (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&local_res18);
    }
  }
LAB_1479e67e9:
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Serialize @ 1479e6820

void __thiscall
UStaticMeshComponent::Serialize(UStaticMeshComponent *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SetCollisionProfileName @ 1479e6e10

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
UStaticMeshComponent::SetCollisionProfileName(UStaticMeshComponent *this,FName param_1,bool param_2)

{
  UPrimitiveComponent::SetCollisionProfileName((UPrimitiveComponent *)this,param_1,param_2);
  this->bUseDefaultCollision = '\0';
  return;
}

// SetDistanceFieldSelfShadowBias @ 1479e7ce0

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
UStaticMeshComponent::SetDistanceFieldSelfShadowBias(UStaticMeshComponent *this,float param_1)

{
  UStaticMesh *pUVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FSceneInterface *pFVar5;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar6;
  undefined ***pppuVar7;
  ulonglong uVar8;
  undefined1 auStack_c8 [32];
  float local_a8;
  undefined4 uStack_a4;
  longlong lStack_a0;
  code *local_98 [2];
  undefined **local_88;
  float fStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined ***local_70;
  undefined1 local_68 [16];
  undefined **local_58 [3];
  undefined ***local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((param_1 != this->DistanceFieldSelfShadowBias) &&
     (pFVar5 = UActorComponent::GetScene((UActorComponent *)this), pFVar5 != (FSceneInterface *)0x0)
     ) {
    pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
    this->DistanceFieldSelfShadowBias = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar1 == (UStaticMesh *)0x0) {
        return;
      }
    }
    else {
      if (pUVar1 == (UStaticMesh *)0x0) {
        return;
      }
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if (this->bOverrideDistanceFieldSelfShadowBias == '\0') {
      pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStaticMesh *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      local_a8 = pUVar1->DistanceFieldSelfShadowBias;
    }
    else {
      local_a8 = this->DistanceFieldSelfShadowBias;
    }
    lVar2 = this->_padding_;
    if (local_a8 <= 0.0) {
      local_a8 = 0.0;
    }
    lStack_a0._0_4_ = (undefined4)lVar2;
    lStack_a0._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
    local_70 = (undefined ***)0x0;
    local_88 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UStaticMeshComponent::SetDistanceFieldSelfShadowBias'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UStaticMeshComponent::SetDistanceFieldSelfShadowBias'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    uStack_7c = uStack_a4;
    uStack_78 = (undefined4)lStack_a0;
    uStack_74 = lStack_a0._4_4_;
    lStack_a0 = lVar2;
    fStack_80 = local_a8;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UStaticMeshComponent::SetDistanceFieldSelfShadowBias_::__l5::TSTR_UpdateDFSelfShadowBiasCmd2478>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58[1]._4_4_ = uStack_7c;
      local_58[1]._0_4_ = fStack_80;
      local_58[2]._4_4_ = uStack_74;
      local_58[2]._0_4_ = uStack_78;
      local_68._0_8_ = local_98[0];
      local_40 = local_70;
      local_58[0] = local_88;
      local_98[0] = (code *)0x0;
      local_38 = 2;
      pFVar6 = (FRenderCommandTag *)
               TRenderCommandTag<`UStaticMeshComponent::SetDistanceFieldSelfShadowBias'::__l5::TSTR_UpdateDFSelfShadowBiasCmd2478>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_68,pFVar6);
      uVar8 = (ulonglong)local_38;
      if ((2 < uVar8) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_68._0_8_ != (code *)0x0) {
          pppuVar7 = (undefined ***)(local_68 + 0x10);
          if (local_40 != (undefined ***)0x0) {
            pppuVar7 = local_40;
          }
          (*(code *)(*pppuVar7)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8])(local_68);
      }
    }
    if (local_98[0] != (code *)0x0) {
      pppuVar7 = &local_88;
      if (local_70 != (undefined ***)0x0) {
        pppuVar7 = local_70;
      }
      (*(code *)(*pppuVar7)[2])();
    }
    pFVar5 = UActorComponent::GetScene((UActorComponent *)this);
    (**(code **)(pFVar5->_padding_ + 200))(pFVar5,this);
  }
  return;
}

// SetEvaluateWorldPositionOffset @ 1479e8390

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
UStaticMeshComponent::SetEvaluateWorldPositionOffset(UStaticMeshComponent *this,bool param_1)

{
  UStaticMesh *pUVar1;
  FSceneInterface *pFVar2;
  
  if (this->bEvaluateWorldPositionOffset != param_1) {
    this->field_0x5ac = this->field_0x5ac & 0xf7 | param_1 << 3;
    pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
    if (pUVar1 != (UStaticMesh *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      pFVar2 = UActorComponent::GetScene((UActorComponent *)this);
      if ((pFVar2 != (FSceneInterface *)0x0) &&
         ((FPrimitiveSceneProxy *)this->_padding_ != (FPrimitiveSceneProxy *)0x0)) {
        FPrimitiveSceneProxy::SetEvaluateWorldPositionOffset_GameThread
                  ((FPrimitiveSceneProxy *)this->_padding_,param_1);
        UActorComponent::MarkRenderTransformDirty((UActorComponent *)this);
      }
    }
  }
  return;
}

// SetEvaluateWorldPositionOffsetInRayTracing @ 1479e8420

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
UStaticMeshComponent::SetEvaluateWorldPositionOffsetInRayTracing
          (UStaticMeshComponent *this,bool param_1)

{
  undefined1 uVar1;
  UStaticMesh *pUVar2;
  code *pcVar3;
  bool bVar4;
  FSceneInterface *pFVar5;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar6;
  undefined ***pppuVar7;
  ulonglong uVar8;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined7 uStack_97;
  longlong lStack_90;
  code *local_88 [2];
  undefined **local_78 [2];
  longlong lStack_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48 [2];
  longlong local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar2 = (this->StaticMesh).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar2 == (UStaticMesh *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  else if (pUVar2 == (UStaticMesh *)0x0) {
    return;
  }
  pFVar5 = UActorComponent::GetScene((UActorComponent *)this);
  if (((pFVar5 != (FSceneInterface *)0x0) && (lStack_90 = this->_padding_, lStack_90 != 0)) &&
     (uVar1 = this->field_0x5ac, this->field_0x5ac = uVar1 & 0xdf | param_1 << 5,
     this->bEvaluateWorldPositionOffsetInRayTracing != param_1)) {
    local_78[1]._1_7_ = uStack_97;
    local_78[1]._0_1_ = param_1;
    local_78[0] = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`UStaticMeshComponent::SetEvaluateWorldPositionOffsetInRayTracing'::`8'::<lambda_1>,1,0>
                   ::_vftable_;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UStaticMeshComponent::SetEvaluateWorldPositionOffsetInRayTracing'::__l8::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    local_60 = (undefined ***)0x0;
    local_98 = param_1;
    lStack_68 = lStack_90;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UStaticMeshComponent::SetEvaluateWorldPositionOffsetInRayTracing_::__l8::TSTR_UpdateEvaluateWPORTCmd2508>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48[0] = local_78[0];
      local_48[1] = local_78[1];
      local_38 = lStack_68;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar6 = (FRenderCommandTag *)
               TRenderCommandTag<`UStaticMeshComponent::SetEvaluateWorldPositionOffsetInRayTracing'::__l8::TSTR_UpdateEvaluateWPORTCmd2508>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar6);
      uVar8 = (ulonglong)local_28;
      if ((2 < uVar8) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar7 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar7 = local_30;
          }
          (*(code *)(*pppuVar7)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar7 = local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar7 = local_60;
      }
      (*(code *)(*pppuVar7)[2])();
    }
  }
  return;
}

// SetForceDisableNanite @ 1479e8780

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UStaticMeshComponent::SetForceDisableNanite(UStaticMeshComponent *this,bool param_1)

{
  byte bVar1;
  bool bVar2;
  
  this->bForceDisableNanite = '\0';
  this->field_0x5ac = this->field_0x5ac | param_1 << 2;
  if (this->_padding_ != 0) {
    bVar1 = *(byte *)(this->_padding_ + 0x81);
    bVar2 = ShouldCreateNaniteProxy(this,(FMaterialAudit *)0x0);
    if ((bool)(bVar1 >> 1 & 1) != bVar2) {
      UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    }
  }
  return;
}

// SetForcedLodModel @ 1479e87e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UStaticMeshComponent::SetForcedLodModel(UStaticMeshComponent *this,int param_1)

{
  if (this->ForcedLodModel != param_1) {
    this->ForcedLodModel = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    return;
  }
  return;
}

// SetMeshPaintTexture @ 1479e9490

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
UStaticMeshComponent::SetMeshPaintTexture(UStaticMeshComponent *this,UTexture *param_1)

{
  UTexture *pUVar1;
  
  pUVar1 = (UTexture *)(**(code **)(this->_padding_ + 0xaf0))();
  if (pUVar1 != param_1) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTexture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->MeshPaintTextureCooked).field0_0x0.DebugPtr = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetMeshPaintTextureOverride @ 1479e94f0

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
UStaticMeshComponent::SetMeshPaintTextureOverride(UStaticMeshComponent *this,UTexture *param_1)

{
  UTexture *pUVar1;
  bool bVar2;
  
  pUVar1 = (this->MeshPaintTextureOverride).field0_0x0.DebugPtr;
  if (pUVar1 == (UTexture *)0x0) {
    bVar2 = param_1 == (UTexture *)0x0;
  }
  else {
    bVar2 = pUVar1 == param_1;
  }
  if (!bVar2) {
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UTexture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->MeshPaintTextureOverride).field0_0x0.DebugPtr = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetReverseCulling @ 1479eaa70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UStaticMeshComponent::SetReverseCulling(UStaticMeshComponent *this,bool param_1)

{
  if (param_1 != this->bReverseCulling) {
    this->field_0x5af = this->field_0x5af & 0xfe | param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    return;
  }
  return;
}

// SetStaticMesh @ 1479ebe50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall UStaticMeshComponent::SetStaticMesh(UStaticMeshComponent *this,UStaticMesh *param_1)

{
  byte bVar1;
  UStaticMesh *pUVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  undefined1 uVar6;
  UWorld *this_00;
  FMessageLog *this_01;
  FString *pFVar7;
  FText *pFVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  FStaticMeshRenderData *pFVar11;
  FStreamingManagerCollection *pFVar12;
  wchar_t *pwVar13;
  bool bVar14;
  FName local_res8;
  FName local_res18 [2];
  TSharedRef<FTokenizedMessage,1> local_c8;
  FText local_b8;
  FText local_a8;
  FString local_98;
  FString local_88;
  FText local_78;
  FTextFormat local_68;
  FMessageLog local_58;
  
  pUVar2 = (this->StaticMesh).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar2 == (UStaticMesh *)0x0) goto LAB_1479ebffd;
    UE::GC::MarkAsReachable((UObject *)pUVar2);
LAB_1479ebe86:
    bVar14 = pUVar2 == param_1;
  }
  else {
    if (pUVar2 != (UStaticMesh *)0x0) goto LAB_1479ebe86;
LAB_1479ebffd:
    bVar14 = param_1 == (UStaticMesh *)0x0;
  }
  if (bVar14) {
    return false;
  }
  this_00 = (UWorld *)this->_padding_;
  lVar3 = this->_padding_;
  if ((((this_00 != (UWorld *)0x0) ||
       (this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
       this_00 != (UWorld *)0x0)) && (bVar14 = UWorld::HasBegunPlay(this_00), bVar14)) &&
     (((bVar14 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this),
       !bVar14 && ((this->_padding_ & 1) != 0)) &&
      ((*(char *)((longlong)&this->_padding_ + 3) == '\0' && (lVar3 != 0)))))) {
    ::FName::FName(&local_res8,"PIE");
    this_01 = FMessageLog::FMessageLog(&local_58,&local_res8);
    pFVar7 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_98,(UObject *)0x0);
    pFVar8 = FText::FromString(&local_78,pFVar7);
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_a8,L"StaticMeshComponent",L"SetMeshOnStatic",
                        L"Calling SetStaticMesh on \'{0}\' but Mobility is Static.");
    pFVar10 = FTextFormat::FTextFormat(&local_68,pFVar9,Default);
    pFVar8 = FText::Format<FText>(&local_b8,pFVar10,pFVar8);
    FMessageLog::Warning(this_01,&local_c8,pFVar8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.SharedReferenceCount.ReferenceController);
    if (local_b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
    }
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    FMessageLog::~FMessageLog(&local_58);
    return false;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (param_1 == (UStaticMesh *)0x0)) {
    (this->StaticMesh).field0_0x0.DebugPtr = param_1;
    if (param_1 == (UStaticMesh *)0x0) goto LAB_1479ec1fb;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->StaticMesh).field0_0x0.DebugPtr = param_1;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  cVar5 = (**(code **)(param_1->_padding_ + 0x10))();
  if ((cVar5 == '\0') &&
     (pFVar11 = UStaticMesh::GetRenderData((this->StaticMesh).field0_0x0.DebugPtr),
     pFVar11 != (FStaticMeshRenderData *)0x0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
         _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__),
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
       == -1)) {
      pwVar13 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar13,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
    if ((((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false))
        && (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline
            == false)) &&
       (((((this->StaticMesh).field0_0x0.DebugPtr)->_padding_ & 0x10) == 0 &&
        (pFVar11 = UStaticMesh::GetRenderData((this->StaticMesh).field0_0x0.DebugPtr),
        pFVar11->bIsInitialized == false)))) {
      local_res18[0] = (FName)((this->StaticMesh).field0_0x0.DebugPtr)->_padding_;
      ::FName::ToString(local_res18,&local_88);
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StaticMesh->GetRenderData()->IsInitialized()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\StaticMeshComponent.cpp"
                          ,0x942,
                          L"Uninitialized Renderdata for Mesh: %s, Mesh NeedsLoad: %i, Mesh NeedsPostLoad: %i, Mesh Loaded: %i, Mesh NeedInit: %i, Mesh IsDefault: %i"
                         );
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (bVar14) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
  }
LAB_1479ec1fb:
  (**(code **)(this->_padding_ + 0x378))(this);
  if ((this->_padding_ & 2) == 0) {
    cVar5 = (**(code **)(this->_padding_ + 0x380))();
    if (cVar5 != '\0') {
      UActorComponent::RecreateRenderState_Concurrent((UActorComponent *)this);
    }
  }
  else {
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  UActorComponent::RecreatePhysicsState((UActorComponent *)this);
  cVar5 = (**(code **)(this->_padding_ + 0x4e0))(this);
  bVar1 = *(byte *)((longlong)&this->_padding_ + 2);
  *(byte *)((longlong)&this->_padding_ + 2) = (cVar5 << 6 ^ bVar1) & 0x40 ^ bVar1;
  pFVar12 = IStreamingManager::Get();
  (**(code **)(pFVar12->_padding_ + 0x70))(pFVar12,this);
  (**(code **)(this->_padding_ + 0x5b0))(this);
  FNavigationSystem::UpdateComponentData((UActorComponent *)this);
  UMeshComponent::MarkCachedMaterialParameterNameIndicesDirty((UMeshComponent *)this);
  return true;
}

// SetStaticMeshInternal @ 1479ec2f0

void __thiscall
UStaticMeshComponent::SetStaticMeshInternal(UStaticMeshComponent *this,UStaticMesh *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->StaticMesh).field0_0x0.DebugPtr = param_1;
    return;
  }
  (this->StaticMesh).field0_0x0.DebugPtr = param_1;
  return;
}

// SetWorldPositionOffsetDisableDistance @ 1479ed1b0

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
UStaticMeshComponent::SetWorldPositionOffsetDisableDistance(UStaticMeshComponent *this,int param_1)

{
  UStaticMesh *pUVar1;
  longlong *plVar2;
  FSceneInterface *pFVar3;
  
  if (this->WorldPositionOffsetDisableDistance != param_1) {
    this->WorldPositionOffsetDisableDistance = param_1;
    pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
    if (pUVar1 != (UStaticMesh *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      pFVar3 = UActorComponent::GetScene((UActorComponent *)this);
      if ((pFVar3 != (FSceneInterface *)0x0) &&
         (plVar2 = (longlong *)this->_padding_, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
        UActorComponent::MarkRenderTransformDirty((UActorComponent *)this);
      }
    }
  }
  return;
}

// ShouldCreatePhysicsState @ 1479edaa0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall UStaticMeshComponent::ShouldCreatePhysicsState(UStaticMeshComponent *this)

{
  UStaticMesh *pUVar1;
  bool bVar2;
  char cVar3;
  
  bVar2 = UPrimitiveComponent::ShouldCreatePhysicsState((UPrimitiveComponent *)this);
  if ((bVar2) && (pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr, pUVar1 != (UStaticMesh *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    cVar3 = (**(code **)(pUVar1->_padding_ + 0x10))();
    if (cVar3 == '\0') {
      return true;
    }
  }
  return false;
}

// ShouldCreateRenderState @ 1479edb20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UStaticMeshComponent::ShouldCreateRenderState(UStaticMeshComponent *this)

{
  UStaticMesh *pUVar1;
  char cVar2;
  FString *pFVar3;
  FStaticBasicLogRecord *pFVar4;
  FString local_18;
  
  pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 != (UStaticMesh *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
LAB_1479edb4f:
      pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStaticMesh *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      cVar2 = (**(code **)(pUVar1->_padding_ + 0x10))();
      if (cVar2 == '\0') {
        return true;
      }
      if ((byte)LogStaticMesh._0_1_ < 6) {
        return false;
      }
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0,None);
      pFVar4 = &::LOG_Static;
      goto LAB_1479edc02;
    }
  }
  else if (pUVar1 != (UStaticMesh *)0x0) goto LAB_1479edb4f;
  if ((byte)LogStaticMesh._0_1_ < 6) {
    return false;
  }
  pFVar3 = UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0,None)
  ;
  if ((pFVar3->Data).ArrayNum == 0) {
    pFVar4 = &::LOG_Static;
  }
  else {
    pFVar4 = &::LOG_Static;
  }
LAB_1479edc02:
  UE::Logging::Private::BasicLog<6>(pFVar4,(FLogCategoryBase *)&LogStaticMesh);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// ShouldExportAsObstacle @ 1479edc40

bool __thiscall
UStaticMeshComponent::ShouldExportAsObstacle(UStaticMeshComponent *this,UNavCollisionBase *param_1)

{
  if (this->bOverrideNavigationExport != '\0') {
    return this->bForceNavigationObstacle;
  }
  return param_1->bIsDynamicObstacle;
}

// ShouldIncrementalPreRegister @ 1479edc60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UStaticMeshComponent::ShouldIncrementalPreRegister(UStaticMeshComponent *this,UWorld *param_1)

{
  bool bVar1;
  
  UpdateCollisionFromStaticMesh(this);
  bVar1 = UActorComponent::ShouldIncrementalPreRegister((UActorComponent *)this,param_1);
  return bVar1;
}

// StaticRegisterNativesUStaticMeshComponent @ 1479edff0

void __cdecl UStaticMeshComponent::StaticRegisterNativesUStaticMeshComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xc;
  local_18.DataPtr = Z_Construct_UClass_UStaticMeshComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SupportsDefaultCollision @ 1479ee320

bool __thiscall UStaticMeshComponent::SupportsDefaultCollision(UStaticMeshComponent *this)

{
  UStaticMesh *pUVar1;
  UBodySetup *pUVar2;
  UBodySetup *pUVar3;
  
  pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
  if (pUVar1 != (UStaticMesh *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    pUVar2 = (pUVar1->BodySetup).field0_0x0.DebugPtr;
    pUVar3 = (UBodySetup *)(**(code **)(this->_padding_ + 0x800))(this);
    if (pUVar3 == pUVar2) {
      return true;
    }
  }
  return false;
}

// SupportsDitheredLODTransitions @ 1479ee3a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UStaticMeshComponent::SupportsDitheredLODTransitions
          (UStaticMeshComponent *this,EShaderPlatform param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  undefined1 local_res18 [16];
  longlong *local_18;
  int local_10;
  
  bVar3 = AllowDitheredLODTransition(param_1);
  if (!bVar3) {
    return false;
  }
  (**(code **)(this->_padding_ + 0xa90))(this,&local_18);
  iVar2 = local_10;
  plVar1 = local_18 + local_10;
  plVar5 = local_18;
  while( true ) {
    if (local_10 != iVar2) {
      `TCheckedPointerIterator<UMaterialInterface_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (plVar5 == plVar1) break;
    if ((longlong *)*plVar5 != (longlong *)0x0) {
      cVar4 = (**(code **)(*(longlong *)*plVar5 + 0x488))();
      if (cVar4 == '\0') {
        bVar3 = false;
LAB_1479ee41a:
        if (local_18 != (longlong *)0x0) {
          FMemory::Free(local_18);
        }
        return bVar3;
      }
    }
    plVar5 = plVar5 + 1;
  }
  bVar3 = true;
  goto LAB_1479ee41a;
}

// SupportsDitheredLODTransitions @ 1479ee450

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UStaticMeshComponent::SupportsDitheredLODTransitions(UStaticMeshComponent *this,Type param_1)

{
  code *UNRECOVERED_JUMPTABLE_00;
  undefined1 uVar1;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(this->_padding_ + 0xb78);
  if (param_1 == Num) {
                    /* WARNING: Could not recover jumptable at 0x0001479ee464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE_00)(this,0x9b);
    return (bool)uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001479ee475. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE_00)(this,GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_1]);
  return (bool)uVar1;
}

// UpdateCollisionFromStaticMesh @ 1479f1600

void __thiscall UStaticMeshComponent::UpdateCollisionFromStaticMesh(UStaticMeshComponent *this)

{
  UStaticMesh *pUVar1;
  char cVar2;
  UBodySetup *pUVar3;
  
  pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
  if (pUVar1 != (UStaticMesh *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    cVar2 = (**(code **)(pUVar1->_padding_ + 0x10))();
    if (cVar2 != '\0') {
      return;
    }
  }
  if (((this->bUseDefaultCollision != '\0') &&
      (cVar2 = (**(code **)(this->_padding_ + 0xb70))(this), cVar2 != '\0')) &&
     (pUVar3 = (UBodySetup *)(**(code **)(this->_padding_ + 0x800))(this),
     pUVar3 != (UBodySetup *)0x0)) {
    FBodyInstance::UseExternalCollisionProfile((FBodyInstance *)&this->_padding_,pUVar3);
    return;
  }
  return;
}

// UpdateMapBuildDataId @ 1479f19b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UStaticMeshComponent::UpdateMapBuildDataId(UStaticMeshComponent *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  FGuid *pFVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  FGuid local_58;
  FGuid local_48;
  FGuid local_38;
  FGuid local_28;
  
  if ((this->_padding_ != 0) && (iVar1 = (this->LODData).ArrayNum, iVar1 != 0)) {
    if ((iVar1 < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar2 = (this->LODData).AllocatorInstance.Data;
    if (((*(int *)(pFVar2 + 0xc) != 0 || *(int *)(pFVar2 + 8) != 0) || *(int *)(pFVar2 + 4) != 0) ||
        *(int *)pFVar2 != 0) {
      FActorInstanceGuid::GetActorInstanceGuid(&local_58,(AActor *)this->_padding_);
      if (((this->LODData).ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar10 = FGuid::Combine(&local_48,(FGuid *)(this->LODData).AllocatorInstance.Data,&local_58);
      uVar9 = pFVar10->A;
      uVar4 = pFVar10->B;
      uVar5 = pFVar10->C;
      uVar6 = pFVar10->D;
      if (((this->LODData).ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->LODData).AllocatorInstance.Data;
      uVar13 = 1;
      *(uint *)(pFVar2 + 0x10) = uVar9;
      *(uint *)(pFVar2 + 0x14) = uVar4;
      *(uint *)(pFVar2 + 0x18) = uVar5;
      *(uint *)(pFVar2 + 0x1c) = uVar6;
      if (1 < (this->LODData).ArrayNum) {
        lVar12 = 0x50;
        do {
          if (((this->LODData).ArrayNum < 1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar10 = GetMapDataIdForLOD(&local_38,(FGuid *)(this->LODData).AllocatorInstance.Data,
                                       uVar13);
          uVar11 = ~uVar13 >> 0x1f;
          uVar9 = pFVar10->A;
          uVar4 = pFVar10->B;
          uVar5 = pFVar10->C;
          uVar6 = pFVar10->D;
          uVar8 = 0;
          if ((int)uVar13 < (this->LODData).ArrayNum) {
            uVar8 = uVar11;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = (this->LODData).AllocatorInstance.Data + lVar12;
          *(uint *)pFVar2 = uVar9;
          *(uint *)(pFVar2 + 4) = uVar4;
          *(uint *)(pFVar2 + 8) = uVar5;
          *(uint *)(pFVar2 + 0xc) = uVar6;
          uVar9 = 0;
          if ((int)uVar13 < (this->LODData).ArrayNum) {
            uVar9 = uVar11;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar10 = FGuid::Combine(&local_28,
                                   (FGuid *)((this->LODData).AllocatorInstance.Data +
                                            (longlong)(int)uVar13 * 0x50),&local_58);
          uVar9 = pFVar10->A;
          uVar4 = pFVar10->B;
          uVar5 = pFVar10->C;
          uVar6 = pFVar10->D;
          uVar8 = 0;
          if ((int)uVar13 < (this->LODData).ArrayNum) {
            uVar8 = uVar11;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar13 = uVar13 + 1;
          pFVar2 = (this->LODData).AllocatorInstance.Data + lVar12 + 0x10;
          *(uint *)pFVar2 = uVar9;
          *(uint *)(pFVar2 + 4) = uVar4;
          *(uint *)(pFVar2 + 8) = uVar5;
          *(uint *)(pFVar2 + 0xc) = uVar6;
          lVar12 = lVar12 + 0x50;
        } while ((int)uVar13 < (this->LODData).ArrayNum);
      }
    }
  }
  return;
}

// UpdateMaterialCacheTextures @ 1479f1cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UStaticMeshComponent::UpdateMaterialCacheTextures(UStaticMeshComponent *this)

{
  int *piVar1;
  TArray<TObjectPtr<UMaterialCacheVirtualTexture>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  UObject *pUVar4;
  code *pcVar5;
  undefined8 *puVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  UMaterialInterface *pUVar10;
  UClass *pUVar11;
  UObject *pUVar12;
  longlong *plVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  FScriptContainerElement *pFVar18;
  int iVar19;
  int iVar20;
  undefined1 auStack_198 [32];
  UObject **local_178;
  FScriptContainerElement *local_170;
  longlong local_168;
  longlong local_160;
  undefined8 local_158;
  undefined1 local_148;
  undefined1 local_147 [3];
  int local_144;
  UObject *local_140;
  uint local_138;
  undefined8 local_128;
  int iStack_120;
  int iStack_11c;
  undefined8 *local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_198;
  local_144 = 0;
  iVar9 = 0;
  iVar8 = (**(code **)(this->_padding_ + 0x810))();
  if (0 < iVar8) {
    do {
      pUVar10 = FStaticMeshComponentHelper::GetMaterial<UStaticMeshComponent>
                          (this,iVar9,false,false);
      if (pUVar10 != (UMaterialInterface *)0x0) {
        local_d8 = 0;
        uStack_d0 = 0;
        local_f8 = (**(code **)(pUVar10->_padding_ + 0x2f0))(pUVar10,&local_d8);
        local_138 = *(uint *)(local_f8 + 0x470);
        uVar15 = (ulonglong)(int)local_138;
        puVar17 = *(undefined8 **)(local_f8 + 0x468);
        local_f0 = puVar17 + uVar15;
        while( true ) {
          puVar6 = local_f0;
          local_118 = puVar17;
          if (*(int *)(local_f8 + 0x470) != (int)uVar15) {
            local_148 = 0;
            `TCheckedPointerIterator<TObjectPtr<UMaterialCacheVirtualTextureTag>_const_,int,0>::
            operator!='::__l2::<lambda_1>::operator()(&local_148);
          }
          iVar9 = local_144;
          if (puVar17 == puVar6) break;
          pUVar4 = (UObject *)*puVar17;
          if (pUVar4 == (UObject *)0x0) {
            local_108 = 0;
            uStack_100 = 0;
            local_128 = (UStaticMeshComponent *)0x0;
            iStack_120 = 0;
            iStack_11c = 0;
          }
          else {
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar4);
            }
            local_128 = *(UStaticMeshComponent **)(pUVar4 + 2);
            iStack_120 = *(int *)&pUVar4[2].field_0x8;
            iStack_11c = *(int *)&pUVar4[2].field_0xc;
          }
          pTVar2 = &this->MaterialCacheTextures;
          pFVar18 = (pTVar2->AllocatorInstance).Data;
          iVar9 = (this->MaterialCacheTextures).ArrayNum;
          pFVar3 = pFVar18 + (longlong)iVar9 * 8;
          while( true ) {
            if ((this->MaterialCacheTextures).ArrayNum != iVar9) {
              local_147[0] = 0;
              `TCheckedPointerIterator<TObjectPtr<UMaterialCacheVirtualTexture>_const_,int,0>::
              operator!='::__l2::<lambda_1>::operator()(local_147);
            }
            if (pFVar18 == pFVar3) break;
            pUVar12 = *(UObject **)pFVar18;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar12);
            }
            lVar16 = *(longlong *)&pUVar12[8].field_0x20;
            if (lVar16 == 0) {
              iVar19 = 0;
              iVar20 = 0;
              local_e8 = 0;
              iVar8 = 0;
              local_e0 = 0;
              iVar14 = iVar8;
            }
            else {
              iVar8 = *(int *)(lVar16 + 0x50);
              iStack_c4 = *(int *)(lVar16 + 0x54);
              iVar20 = *(int *)(lVar16 + 0x58);
              iStack_bc = *(int *)(lVar16 + 0x5c);
              iVar14 = iStack_bc;
              local_c8 = iVar8;
              iStack_c0 = iVar20;
              iVar19 = iStack_c4;
            }
            if ((((int)local_128 == iVar8 && iStack_11c == iVar14) && iStack_120 == iVar20) &&
                local_128._4_4_ == iVar19) goto LAB_1479f203e;
            pFVar18 = pFVar18 + 8;
          }
          FObjectInitializer::AssertIfInConstructor
                    ((UObject *)this,
                     L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                    );
          pUVar11 = Z_Construct_UClass_UMaterialCacheVirtualTexture_NoRegister();
          FStaticConstructObjectParameters::FStaticConstructObjectParameters
                    ((FStaticConstructObjectParameters *)local_b8,pUVar11);
          local_b8._8_8_ = this;
          pUVar12 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
          if (local_b8._64_8_ != 0) {
            plVar13 = (longlong *)(local_b8 + 0x50);
            if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
              plVar13 = (longlong *)local_b8._104_8_;
            }
            (**(code **)(*plVar13 + 0x10))();
          }
          local_128 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)&pUVar12[8].field_0x10,(FObjectPtr)&local_128)
          ;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar4);
          }
          *(UObject **)&pUVar12[8].field_0x20 = pUVar4;
          *(TIntPoint<int>_u_0 *)(pUVar12 + 9) = (this->MaterialCacheTileCount).field0_0x0;
          (**(code **)(*(longlong *)pUVar12 + 0x330))(pUVar12,0);
          local_140 = pUVar12;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar12);
          }
          pFVar3 = (pTVar2->AllocatorInstance).Data;
          if ((pFVar3 <= (FScriptContainerElement *)&local_140) &&
             (lVar16 = (longlong)(this->MaterialCacheTextures).ArrayMax,
             (FScriptContainerElement *)&local_140 < pFVar3 + lVar16 * 8)) {
            local_160 = (longlong)(this->MaterialCacheTextures).ArrayNum;
            local_158 = 8;
            local_178 = &local_140;
            local_170 = pFVar3;
            local_168 = lVar16;
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
          iVar9 = (this->MaterialCacheTextures).ArrayNum;
          piVar1 = &(this->MaterialCacheTextures).ArrayMax;
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&pTVar2->AllocatorInstance,piVar1);
          }
          (this->MaterialCacheTextures).ArrayNum = iVar9 + 1;
          *(UObject **)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_140;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_140 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_140);
          }
LAB_1479f203e:
          puVar17 = local_118 + 1;
          uVar15 = (ulonglong)local_138;
        }
      }
      iVar9 = iVar9 + 1;
      local_144 = iVar9;
      iVar8 = (**(code **)(this->_padding_ + 0x810))(this);
    } while (iVar9 < iVar8);
  }
  return;
}

// UpdateStaticLightingData @ 1479f3cd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UStaticMeshComponent::UpdateStaticLightingData(UStaticMeshComponent *this)

{
  UStaticMesh *this_00;
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FGuid *pFVar7;
  IConsoleManager *pIVar8;
  longlong *plVar9;
  TConsoleVariableData<int> *pTVar10;
  FScriptContainerElement *pFVar11;
  TConsoleVariableData<int> *pTVar12;
  FGuid local_38;
  FGuid local_28;
  
  pTVar12 = (TConsoleVariableData<int> *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar8 = IConsoleManager::Get();
    plVar9 = (longlong *)(**(code **)((longlong)*pIVar8 + 0xc0))(pIVar8,L"r.AllowStaticLighting",1);
    pTVar10 = pTVar12;
    if (plVar9 != (longlong *)0x0) {
      pTVar10 = (TConsoleVariableData<int> *)(**(code **)(*plVar9 + 0x68))(plVar9);
    }
    AllowStaticLightingVar = pTVar10;
    _Init_thread_footer(&::_TSS0);
  }
  pTVar10 = AllowStaticLightingVar;
  if (AllowStaticLightingVar != (TConsoleVariableData<int> *)0x0) {
    bVar4 = IsInParallelGameThread();
    if (((!bVar4) && (bVar4 = IsInGameThread(), !bVar4)) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0"), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (pTVar10->ShadowedValue[0] == 0) {
      return;
    }
  }
  bVar4 = UPrimitiveComponent::HasStaticLighting((UPrimitiveComponent *)this);
  if ((bVar4) && (this_00 = (this->StaticMesh).field0_0x0.DebugPtr, this_00 != (UStaticMesh *)0x0))
  {
    uVar5 = UStaticMesh::GetNumLODs(this_00);
    uVar6 = (this->LODData).ArrayNum;
    if (uVar6 != uVar5) {
      uVar5 = UStaticMesh::GetNumLODs((this->StaticMesh).field0_0x0.DebugPtr);
      SetLODDataCount(this,uVar5,uVar6);
    }
  }
  pTVar10 = pTVar12;
  if (0 < (this->LODData).ArrayNum) {
    do {
      uVar5 = (uint)pTVar12;
      uVar6 = 0;
      if ((int)uVar5 < (this->LODData).ArrayNum) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar11 = (FScriptContainerElement *)
                ((longlong)pTVar10->ShadowedValue + (longlong)(this->LODData).AllocatorInstance.Data
                );
      if (((*(int *)(pFVar11 + 0xc) == 0 && *(int *)(pFVar11 + 8) == 0) &&
          *(int *)(pFVar11 + 4) == 0) && *(int *)pFVar11 == 0) {
        if ((uVar5 == 0) || (lVar1 = *(longlong *)(pFVar11 + 0x48), lVar1 == 0)) {
          pFVar7 = FGuid::NewGuid(&local_28);
        }
        else {
          if ((*(int *)(lVar1 + 0x600) < 1) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar7 = GetMapDataIdForLOD(&local_38,*(FGuid **)(lVar1 + 0x5f8),uVar5);
        }
        uVar3 = *(undefined8 *)&pFVar7->C;
        *(undefined8 *)pFVar11 = *(undefined8 *)pFVar7;
        *(undefined8 *)(pFVar11 + 8) = uVar3;
      }
      if ((((*(int *)(pFVar11 + 0x1c) == 0 && *(int *)(pFVar11 + 0x18) == 0) &&
           *(int *)(pFVar11 + 0x14) == 0) && *(int *)(pFVar11 + 0x10) == 0) &&
         (*(UStaticMeshComponent **)(pFVar11 + 0x48) != (UStaticMeshComponent *)0x0)) {
        UpdateMapBuildDataId(*(UStaticMeshComponent **)(pFVar11 + 0x48));
      }
      pTVar12 = (TConsoleVariableData<int> *)(ulonglong)(uVar5 + 1);
      pTVar10 = pTVar10 + 10;
    } while ((int)(uVar5 + 1) < (this->LODData).ArrayNum);
  }
  return;
}

// UseNaniteOverrideMaterials @ 1479f3f80

bool __thiscall
UStaticMeshComponent::UseNaniteOverrideMaterials(UStaticMeshComponent *this,bool param_1)

{
  bool bVar1;
  
  if ((!param_1) &&
     (bVar1 = Nanite::FNaniteResourcesHelper::ShouldCreateNaniteProxy<UStaticMeshComponent>
                        (this,(FMaterialAudit *)0x0), !bVar1)) {
    return false;
  }
  if (Nanite::GEnableNaniteMaterialOverrides == 0) {
    return false;
  }
  return true;
}

// UseNaniteOverrideMaterials @ 1479f3fb0

bool __thiscall UStaticMeshComponent::UseNaniteOverrideMaterials(UStaticMeshComponent *this)

{
  bool bVar1;
  
  bVar1 = Nanite::FNaniteResourcesHelper::ShouldCreateNaniteProxy<UStaticMeshComponent>
                    (this,(FMaterialAudit *)0x0);
  if ((bVar1) && (Nanite::GEnableNaniteMaterialOverrides != 0)) {
    return true;
  }
  return false;
}

// UsesOnlyUnlitMaterials @ 1479f3fe0

/* WARNING: Removing unreachable block (ram,0x0001479f41db) */

bool __thiscall UStaticMeshComponent::UsesOnlyUnlitMaterials(UStaticMeshComponent *this)

{
  UStaticMesh *pUVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FStaticMeshRenderData *pFVar6;
  UMaterialInterface *pUVar7;
  longlong *plVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  
  pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
  if (pUVar1 != (UStaticMesh *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    pFVar6 = UStaticMesh::GetRenderData(pUVar1);
    if (pFVar6 != (FStaticMeshRenderData *)0x0) {
      uVar15 = 0;
      lVar14 = 0;
      while( true ) {
        pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStaticMesh *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)pUVar1);
        }
        pFVar6 = UStaticMesh::GetRenderData(pUVar1);
        if ((pFVar6->LODResources).Array.ArrayNum <= (int)uVar15) {
          return true;
        }
        pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStaticMesh *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)pUVar1);
        }
        pFVar6 = UStaticMesh::GetRenderData(pUVar1);
        uVar10 = 0;
        if ((int)uVar15 < (pFVar6->LODResources).Array.ArrayNum) {
          uVar10 = ~uVar15 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) break;
        lVar2 = *(longlong *)((pFVar6->LODResources).Array.AllocatorInstance.Data + lVar14);
        lVar12 = 0;
        for (iVar11 = 0; iVar11 < *(int *)(lVar2 + 0x38); iVar11 = iVar11 + 1) {
          if ((iVar11 < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          lVar13 = lVar2 + 0x10;
          if (*(longlong *)(lVar2 + 0x30) != 0) {
            lVar13 = *(longlong *)(lVar2 + 0x30);
          }
          pUVar7 = FStaticMeshComponentHelper::GetMaterial<UStaticMeshComponent>
                             (this,*(int *)(lVar12 + lVar13),false,false);
          if (((pUVar7 == (UMaterialInterface *)0x0) ||
              (plVar8 = (longlong *)(**(code **)(pUVar7->_padding_ + 0x2d8))(pUVar7),
              plVar8 == (longlong *)0x0)) ||
             (pbVar9 = (byte *)(**(code **)(*plVar8 + 0x468))(plVar8,local_res8), (*pbVar9 & 1) == 0
             )) {
            return false;
          }
          lVar12 = lVar12 + 0x1c;
        }
        uVar15 = uVar15 + 1;
        lVar14 = lVar14 + 8;
      }
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  return false;
}

// UsesTextureLightmaps @ 1479f4220

bool __thiscall
UStaticMeshComponent::UsesTextureLightmaps(UStaticMeshComponent *this,int param_1,int param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0xb50))();
  if (((cVar1 != '\0') && (0 < param_1)) && (0 < param_2)) {
    return true;
  }
  return false;
}

// ValidateGeneratedRepEnums @ 1479f57d0

void __thiscall
UStaticMeshComponent::ValidateGeneratedRepEnums
          (UStaticMeshComponent *this,TArray<FRepRecord,TSizedDefaultAllocator<32>_> *param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&Name_StaticMesh,L"StaticMesh");
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (param_1->ArrayNum < 0x12) {
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
  pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x110);
  bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
  if (bVar3) {
    FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
  }
  else {
    FVar4.ComparisonIndex.Value = 0;
    FVar4.Number = 0;
  }
  if (Name_StaticMesh != FVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\StaticMeshComponent.gen.cpp"
                       ,0x649,
                       L"UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UStaticMeshComponent"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// execGetInitialEvaluateWorldPositionOffset @ 1479fb970

void __cdecl
UStaticMeshComponent::execGetInitialEvaluateWorldPositionOffset
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)param_3 = (byte)param_1[0x24].field_0xc >> 6 & 1;
  return;
}

// execGetLocalBounds @ 1479fc080

void __cdecl
UStaticMeshComponent::execGetLocalBounds(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UStaticMesh *this;
  double *pdVar3;
  double *pdVar4;
  double local_a8 [3];
  double local_90 [3];
  TVector<double>_u_0 local_78;
  double local_60;
  double local_58;
  double local_50;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  pdVar3 = (double *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pdVar4 = local_a8;
  if (pdVar3 != (double *)0x0) {
    pdVar4 = pdVar3;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_90);
  }
  pdVar3 = local_90;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar3 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = *(UObject **)(param_1 + 0x24);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar2 == (UObject *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable(pUVar2);
  }
  if (pUVar2 != (UObject *)0x0) {
    this = *(UStaticMesh **)(param_1 + 0x24);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    UStaticMesh::GetBounds(this,(TBoxSphereBounds<double,double> *)&local_78._s_0);
    *pdVar4 = local_78._s_0.X - local_60;
    pdVar4[1] = local_78._s_0.Y - local_58;
    pdVar4[2] = local_78._s_0.Z - local_50;
    *pdVar3 = local_78._s_0.X + local_60;
    pdVar3[1] = local_78._s_0.Y + local_58;
    pdVar3[2] = local_78._s_0.Z + local_50;
  }
  return;
}

// execOnRep_StaticMesh @ 147a033b0

void __cdecl
UStaticMeshComponent::execOnRep_StaticMesh(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  bool bVar4;
  UObject *local_res8;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar3 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = *(UObject **)(param_1 + 0x24);
  if (pUVar2 == (UObject *)0x0) {
    bVar4 = local_res8 == (UObject *)0x0;
  }
  else {
    bVar4 = pUVar2 == local_res8;
  }
  if (!bVar4) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    *(UObject **)(param_1 + 0x24) = pUVar3;
    (**(code **)(*(longlong *)param_1 + 0xb28))(param_1,pUVar2);
  }
  return;
}

// execSetDistanceFieldSelfShadowBias @ 147a04870

void __cdecl
UStaticMeshComponent::execSetDistanceFieldSelfShadowBias
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetDistanceFieldSelfShadowBias((UStaticMeshComponent *)param_1,local_res10[0]);
  return;
}

// execSetEvaluateWorldPositionOffset @ 147a05300

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
UStaticMeshComponent::execSetEvaluateWorldPositionOffset
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSceneInterface *pFVar2;
  bool bVar3;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar3 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((bool)((byte)param_1[0x24].field_0xc >> 3 & 1) != bVar3) {
    param_1[0x24].field_0xc = param_1[0x24].field_0xc & 0xf7 | bVar3 << 3;
    if (*(UObject **)(param_1 + 0x24) != (UObject *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(*(UObject **)(param_1 + 0x24));
      }
      pFVar2 = UActorComponent::GetScene((UActorComponent *)param_1);
      if ((pFVar2 != (FSceneInterface *)0x0) &&
         (*(FPrimitiveSceneProxy **)&param_1[0x21].field_0x8 != (FPrimitiveSceneProxy *)0x0)) {
        FPrimitiveSceneProxy::SetEvaluateWorldPositionOffset_GameThread
                  (*(FPrimitiveSceneProxy **)&param_1[0x21].field_0x8,bVar3);
        UActorComponent::MarkRenderTransformDirty((UActorComponent *)param_1);
      }
    }
  }
  return;
}

// execSetEvaluateWorldPositionOffsetInRayTracing @ 147a05400

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

void __cdecl
UStaticMeshComponent::execSetEvaluateWorldPositionOffsetInRayTracing
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  byte bVar1;
  FProperty *pFVar2;
  UObject *pUVar3;
  code *pcVar4;
  FSceneInterface *pFVar5;
  FRenderCommandList *this;
  FCommandList *this_00;
  FRenderCommandTag *pFVar6;
  undefined ***pppuVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_d8 [32];
  int local_b8 [2];
  undefined1 local_b0;
  undefined7 uStack_af;
  longlong lStack_a8;
  code *local_98 [2];
  undefined **local_88 [2];
  longlong lStack_78;
  undefined ***local_70;
  undefined1 local_68 [16];
  undefined **local_58 [2];
  longlong local_48;
  undefined ***local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_b8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_b8);
  }
  bVar9 = local_b8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = *(UObject **)(param_1 + 0x24);
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar3 == (UObject *)0x0) {
      return;
    }
  }
  else {
    if (pUVar3 == (UObject *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable(pUVar3);
  }
  pFVar5 = UActorComponent::GetScene((UActorComponent *)param_1);
  if (((pFVar5 != (FSceneInterface *)0x0) &&
      (lStack_a8 = *(longlong *)&param_1[0x21].field_0x8, lStack_a8 != 0)) &&
     (bVar1 = param_1[0x24].field_0xc, param_1[0x24].field_0xc = bVar1 & 0xdf | bVar9 << 5,
     (bool)(bVar1 >> 5 & 1) != bVar9)) {
    local_88[0] = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`UStaticMeshComponent::SetEvaluateWorldPositionOffsetInRayTracing'::`8'::<lambda_1>,1,0>
                   ::_vftable_;
    local_88[1]._1_7_ = uStack_af;
    local_88[1]._0_1_ = bVar9;
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UStaticMeshComponent::SetEvaluateWorldPositionOffsetInRayTracing'::__l8::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    local_70 = (undefined ***)0x0;
    local_b0 = bVar9;
    lStack_78 = lStack_a8;
    this = FRenderCommandList::GetInstanceTLS();
    if (this == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UStaticMeshComponent::SetEvaluateWorldPositionOffsetInRayTracing_::__l8::TSTR_UpdateEvaluateWPORTCmd2508>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
    }
    else {
      this_00 = FRenderCommandList::GetRenderThread(this);
      local_68._0_8_ = local_98[0];
      local_40 = local_70;
      local_58[0] = local_88[0];
      local_58[1] = local_88[1];
      local_48 = lStack_78;
      local_98[0] = (code *)0x0;
      local_38 = 2;
      pFVar6 = (FRenderCommandTag *)
               TRenderCommandTag<`UStaticMeshComponent::SetEvaluateWorldPositionOffsetInRayTracing'::__l8::TSTR_UpdateEvaluateWPORTCmd2508>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_00,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_68,pFVar6);
      uVar8 = (ulonglong)local_38;
      if ((2 < uVar8) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_68._0_8_ != (code *)0x0) {
          pppuVar7 = (undefined ***)(local_68 + 0x10);
          if (local_40 != (undefined ***)0x0) {
            pppuVar7 = local_40;
          }
          (*(code *)(*pppuVar7)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8])(local_68);
      }
    }
    if (local_98[0] != (code *)0x0) {
      pppuVar7 = local_88;
      if (local_70 != (undefined ***)0x0) {
        pppuVar7 = local_70;
      }
      (*(code *)(*pppuVar7)[2])();
    }
  }
  return;
}

// execSetForceDisableNanite @ 147a05b00

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
UStaticMeshComponent::execSetForceDisableNanite(UObject *param_1,FFrame *param_2,void *param_3)

{
  byte bVar1;
  FProperty *pFVar2;
  longlong lVar3;
  bool bVar4;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x24].field_0xc = param_1[0x24].field_0xc & 0xfb;
  lVar3 = *(longlong *)&param_1[0x21].field_0x8;
  param_1[0x24].field_0xc = param_1[0x24].field_0xc | -(local_res8[0] != 0) & 4U;
  if (lVar3 != 0) {
    bVar1 = *(byte *)(lVar3 + 0x81);
    bVar4 = ShouldCreateNaniteProxy((UStaticMeshComponent *)param_1,(FMaterialAudit *)0x0);
    if ((bool)(bVar1 >> 1 & 1) != bVar4) {
      UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
    }
  }
  return;
}

// execSetForcedLodModel @ 147a05bd0

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
UStaticMeshComponent::execSetForcedLodModel(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(int *)&param_1[0x23].field_0x18 != local_res8[0]) {
    *(int *)&param_1[0x23].field_0x18 = local_res8[0];
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetReverseCulling @ 147a084e0

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
UStaticMeshComponent::execSetReverseCulling(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res8[0] != 0) != (bool)(param_1[0x24].field_0xf & 1)) {
    param_1[0x24].field_0xf = param_1[0x24].field_0xf & 0xfe | local_res8[0] != 0;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetStaticMesh @ 147a0a080

void __cdecl UStaticMeshComponent::execSetStaticMesh(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0xb28))(param_1,local_res8);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execSetWorldPositionOffsetDisableDistance @ 147a0b280

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
UStaticMeshComponent::execSetWorldPositionOffsetDisableDistance
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  longlong *plVar3;
  int iVar4;
  FSceneInterface *pFVar5;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  iVar4 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(int *)&param_1[0x24].field_0x8 != local_res8[0]) {
    pUVar2 = *(UObject **)(param_1 + 0x24);
    *(int *)&param_1[0x24].field_0x8 = local_res8[0];
    if (pUVar2 != (UObject *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      pFVar5 = UActorComponent::GetScene((UActorComponent *)param_1);
      if ((pFVar5 != (FSceneInterface *)0x0) &&
         (plVar3 = *(longlong **)&param_1[0x21].field_0x8, plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x10))(plVar3,iVar4);
        UActorComponent::MarkRenderTransformDirty((UActorComponent *)param_1);
      }
    }
  }
  return;
}

// execUpdateInitialEvaluateWorldPositionOffset @ 147a0b6b0

void __cdecl
UStaticMeshComponent::execUpdateInitialEvaluateWorldPositionOffset
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  byte bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = param_1[0x24].field_0xc;
  param_1[0x24].field_0xc = (bVar1 << 3 ^ bVar1) & 0x40 ^ bVar1;
  return;
}

// AdditionalStatObject @ 1487882e0

UObject * __thiscall UStaticMeshComponent::AdditionalStatObject(UStaticMeshComponent *this)

{
  UStaticMesh *pUVar1;
  
  pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (UObject *)pUVar1;
}

// AllocateStaticLightingMesh @ 1487885e0

FStaticMeshStaticLightingMesh * __thiscall
UStaticMeshComponent::AllocateStaticLightingMesh
          (UStaticMeshComponent *this,int param_1,
          TArray<ULightComponent_*,TSizedDefaultAllocator<32>_> *param_2)

{
  FStaticMeshStaticLightingMesh *pFVar1;
  
  pFVar1 = ::operator_new(0x250);
  if (pFVar1 != (FStaticMeshStaticLightingMesh *)0x0) {
    pFVar1 = FStaticMeshStaticLightingMesh::FStaticMeshStaticLightingMesh
                       (pFVar1,this,param_1,param_2);
    return pFVar1;
  }
  return (FStaticMeshStaticLightingMesh *)0x0;
}

// CreateSceneProxy @ 1487919c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall UStaticMeshComponent::CreateSceneProxy(UStaticMeshComponent *this)

{
  FPrimitiveSceneProxy *pFVar1;
  
  pFVar1 = FStaticMeshComponentHelper::CreateSceneProxy<UStaticMeshComponent,0>
                     (this,(ESceneProxyCreationError *)0x0);
  return pFVar1;
}

// CreateStaticMeshSceneProxy @ 1487919d0

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

FPrimitiveSceneProxy * __thiscall
UStaticMeshComponent::CreateStaticMeshSceneProxy
          (UStaticMeshComponent *this,FMaterialAudit *param_1,bool param_2)

{
  FSceneProxy *pFVar1;
  FSceneProxy *pFVar2;
  undefined4 local_res18 [2];
  FMemScope local_res20;
  TSharedPtr<FInstanceDataSceneProxy,1> local_1b8;
  FStaticMeshSceneProxyDesc local_1a8;
  
  pFVar2 = (FSceneProxy *)0x0;
  local_res18[0] = 0;
  FLLMScope::FLLMScope((FLLMScope *)local_res18,StaticMesh,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,StaticMesh,true);
  if (param_2) {
    pFVar1 = ::operator_new(0xc20);
    if (pFVar1 != (FSceneProxy *)0x0) {
      local_1b8.Object = (FInstanceDataSceneProxy *)0x0;
      local_1b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar2 = Nanite::FSceneProxy::FSceneProxy(pFVar1,param_1,this,&local_1b8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1b8.SharedReferenceCount.ReferenceController);
    }
  }
  else {
    pFVar1 = ::operator_new(0xb90);
    if (pFVar1 != (FSceneProxy *)0x0) {
      FPrimitiveSceneProxyDesc::FPrimitiveSceneProxyDesc((FPrimitiveSceneProxyDesc *)&local_1a8);
      local_1a8._padding_._0_4_ = (uint)local_1a8._padding_ | 0x10000001;
      local_1a8.OverrideMaterials.DataPtr = (TObjectPtr<UMaterialInterface> *)0x0;
      local_1a8.OverrideMaterials.ArrayNum = 0;
      local_1a8.MaterialSlotsOverlayMaterial.AllocatorInstance.Data = (FScriptContainerElement *)0x0
      ;
      local_1a8.bUseProvidedMaterialRelevance = 0;
      local_1a8.bForceNaniteForMasked = 0;
      local_1a8.bForceDisableNanite = 0;
      local_1a8.bDisallowNanite = 0;
      local_1a8.bDisplayNaniteFallbackMesh = 0;
      local_1a8.bSortTriangles = 0;
      local_1a8.bEvaluateWorldPositionOffsetInRayTracing = 0;
      local_1a8.bOverrideDistanceFieldSelfShadowBias = 0;
      local_1a8.bCastDistanceFieldIndirectShadow = 0;
      local_1a8.bOverrideMinLOD = 0;
      local_1a8.bEvaluateWorldPositionOffset = 1;
      local_1a8.bDrawMeshCollisionIfSimple = 0;
      local_1a8.bDrawMeshCollisionIfComplex = 0;
      local_1a8.bReverseCulling = 0;
      local_1a8.MaterialSlotsOverlayMaterial.ArrayNum = 0;
      local_1a8.MaterialSlotsOverlayMaterial.ArrayMax = 0;
      local_1a8.MaterialCacheTextures.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a8.MaterialCacheTextures.ArrayNum = 0;
      local_1a8.MaterialCacheTextures.ArrayMax = 0;
      local_1a8.LODData.DataPtr = (FStaticMeshComponentLODInfo *)0x0;
      local_1a8.LODData.ArrayNum = 0;
      local_1a8.LODParentPrimitive = (UObject *)0x0;
      local_1a8.MeshPaintTexture = (UTexture *)0x0;
      local_1a8.MaterialRelevance.field0_0x0.Raw = (FMaterialRelevance_u_0)0x0;
      local_1a8.MeshPaintTextureCoordinateIndex = 0;
      local_1a8.MaterialCacheTextureCoordinateIndex = 0;
      local_1a8.CollisionResponseContainer.bIsSet = false;
      local_1a8.LightmapType = Default;
      local_1a8.StaticMesh = (UStaticMesh *)0x0;
      local_1a8.BodySetup = (UBodySetup *)0x0;
      local_1a8.WireframeColor.field0_0x0.Bits = (FColor_u_0)0xff00ffff;
      local_1a8.NaniteResources = (FResources *)0x0;
      local_1a8.OverlayMaterial.field0_0x0.DebugPtr = (TObjectPtr<UMaterialInterface>_u_0)0x0;
      local_1a8._padding_ = (longlong)&___7FStaticMeshSceneProxyDesc__6B_;
      local_1a8.OverlayMaterialMaxDrawDistance = ___xmm_3dcccccd000000000000000000000000;
      local_1a8.NanitePixelProgrammableDistance = _UNK_1509250e4;
      local_1a8.DistanceFieldSelfShadowBias = _UNK_1509250e8;
      local_1a8.DistanceFieldIndirectShadowMinVisibility = _UNK_1509250ec;
      local_1a8.ForcedLodModel = 0;
      local_1a8.MinLOD = 0;
      local_1a8.WorldPositionOffsetDisableDistance = 0;
      local_1a8.StaticLightMapResolution = 0;
      FStaticMeshSceneProxyDesc::InitializeFromStaticMeshComponent(&local_1a8,this);
      FStaticMeshSceneProxy::FStaticMeshSceneProxy((FStaticMeshSceneProxy *)pFVar1,&local_1a8,false)
      ;
      local_1a8._padding_ = (longlong)&___7FStaticMeshSceneProxyDesc__6B_;
      if (local_1a8.MaterialCacheTextures.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_1a8.MaterialCacheTextures.AllocatorInstance.Data);
      }
      if (local_1a8.MaterialSlotsOverlayMaterial.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.MaterialSlotsOverlayMaterial.AllocatorInstance.Data);
      }
      FPrimitiveSceneProxyDesc::~FPrimitiveSceneProxyDesc((FPrimitiveSceneProxyDesc *)&local_1a8);
      pFVar1->_padding_ = (longlong)&___7FStaticMeshSceneProxy__6B_;
      pFVar2 = pFVar1;
    }
    (**(code **)(this->_padding_ + 0x898))(this,pFVar2);
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope((FLLMScope *)local_res18);
  return (FPrimitiveSceneProxy *)pFVar2;
}

// GetDiffuseBoost @ 14879d780

float __thiscall UStaticMeshComponent::GetDiffuseBoost(UStaticMeshComponent *this,int param_1)

{
  return (this->LightmassSettings).DiffuseBoost;
}

// GetEmissiveBoost @ 1487a0410

float __thiscall UStaticMeshComponent::GetEmissiveBoost(UStaticMeshComponent *this,int param_1)

{
  return (this->LightmassSettings).EmissiveBoost;
}

// GetStaticLightingType @ 1487a4840

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ELightMapInteractionType __thiscall
UStaticMeshComponent::GetStaticLightingType(UStaticMeshComponent *this)

{
  UStaticMesh *pUVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  ELightmapType EVar5;
  bool bVar6;
  ELightMapInteractionType EVar7;
  FStaticMeshRenderData *pFVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int local_res8 [2];
  int local_res10 [2];
  
  uVar11 = 0;
  cVar4 = (**(code **)(this->_padding_ + 0x7a8))(this,0);
  if (cVar4 == '\0') {
    return LMIT_None;
  }
  EVar5 = UPrimitiveComponent::GetLightmapType((UPrimitiveComponent *)this);
  uVar12 = uVar11;
  if (EVar5 != ForceVolumetric) {
    while( true ) {
      pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStaticMesh *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      pFVar8 = UStaticMesh::GetRenderData(pUVar1);
      uVar10 = (uint)uVar11;
      if ((pFVar8->LODResources).Array.ArrayNum <= (int)uVar10) {
        return LMIT_None;
      }
      pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStaticMesh *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      pFVar8 = UStaticMesh::GetRenderData(pUVar1);
      uVar9 = 0;
      if ((int)uVar10 < (pFVar8->LODResources).Array.ArrayNum) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) break;
      lVar2 = *(longlong *)((pFVar8->LODResources).Array.AllocatorInstance.Data + uVar12);
      local_res8[0] = 0;
      local_res10[0] = 0;
      (**(code **)(this->_padding_ + 0x7b8))(this,local_res8,local_res10);
      if ((0 < local_res8[0]) && (0 < local_res10[0])) {
        pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStaticMesh *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)pUVar1);
        }
        if (-1 < pUVar1->LightMapCoordinateIndex) {
          pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStaticMesh *)0x0)
             ) {
            UE::GC::MarkAsReachable((UObject *)pUVar1);
          }
          if ((uint)pUVar1->LightMapCoordinateIndex < *(uint *)(lVar2 + 0x178)) {
            return LMIT_Texture;
          }
        }
      }
      uVar11 = (ulonglong)(uVar10 + 1);
      uVar12 = uVar12 + 8;
    }
    pcVar3 = (code *)swi(3);
    EVar7 = (*pcVar3)();
    return EVar7;
  }
  return LMIT_GlobalVolume;
}

// InvalidateLightingCacheDetailed @ 1487aeac0

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
UStaticMeshComponent::InvalidateLightingCacheDetailed
          (UStaticMeshComponent *this,bool param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  UPrimitiveComponent::InvalidateLightingCacheDetailed((UPrimitiveComponent *)this,param_1,param_2);
  uVar6 = 0;
  uVar7 = uVar6;
  if (0 < (this->LODData).ArrayNum) {
    do {
      uVar5 = (uint)uVar6;
      uVar4 = 0;
      if ((int)uVar5 < (this->LODData).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->LODData).AllocatorInstance.Data;
      uVar6 = (ulonglong)(uVar5 + 1);
      *(undefined8 *)(pFVar1 + uVar7 + 8) = 0;
      *(undefined8 *)(pFVar1 + uVar7) = 0;
      *(undefined8 *)(pFVar1 + uVar7 + 0x18) = 0;
      *(undefined8 *)(pFVar1 + uVar7 + 0x10) = 0;
      uVar7 = uVar7 + 0x50;
    } while ((int)(uVar5 + 1) < (this->LODData).ArrayNum);
  }
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// IsPrecomputedLightingValid @ 1487af170

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall UStaticMeshComponent::IsPrecomputedLightingValid(UStaticMeshComponent *this)

{
  ELightmapType EVar1;
  FMeshMapBuildData *pFVar2;
  
  EVar1 = UPrimitiveComponent::GetLightmapType((UPrimitiveComponent *)this);
  if (EVar1 == ForceVolumetric) {
    return true;
  }
  if (0 < (this->LODData).ArrayNum) {
    pFVar2 = GetMeshMapBuildData(this,(FStaticMeshComponentLODInfo *)
                                      (this->LODData).AllocatorInstance.Data,true);
    return pFVar2 != (FMeshMapBuildData *)0x0;
  }
  return false;
}

// SetLODDataCount @ 1487c24e0

bool __thiscall
UStaticMeshComponent::SetLODDataCount(UStaticMeshComponent *this,uint param_1,uint param_2)

{
  int *piVar1;
  TArray<FStaticMeshComponentLODInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FStaticMeshComponentLODInfo *this_00;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  if ((8 < param_2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("MaxSize <= 8",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMeshSceneProxy.cpp"
                         ,0x27d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  uVar7 = (this->LODData).ArrayNum;
  if (param_2 < uVar7) {
    pTVar2 = &this->LODData;
    uVar6 = param_2;
    if ((int)param_2 < (int)uVar7) {
      do {
        uVar7 = 0;
        if ((int)uVar6 < (this->LODData).ArrayNum) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        FStaticMeshComponentLODInfo::ReleaseOverrideVertexColorsAndBlock
                  ((FStaticMeshComponentLODInfo *)
                   ((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x50));
        uVar7 = (this->LODData).ArrayNum;
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)uVar7);
    }
    uVar7 = uVar7 - param_2;
    if (((int)(uVar7 | param_2) < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if (uVar7 != 0) {
      TArray<FStaticMeshComponentLODInfo,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                (pTVar2,param_2,uVar7);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,&pTVar2->AllocatorInstance,(this->LODData).ArrayNum,
                 &(this->LODData).ArrayMax);
      return true;
    }
  }
  else {
    if (param_1 <= uVar7) {
      return false;
    }
    pTVar2 = &this->LODData;
    if ((int)param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)param_1);
    }
    piVar1 = &(this->LODData).ArrayMax;
    if ((this->LODData).ArrayMax < (int)param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,param_1,&pTVar2->AllocatorInstance,uVar7,piVar1);
    }
    uVar7 = param_1 - (this->LODData).ArrayNum;
    if (uVar7 != 0) {
      uVar8 = (ulonglong)uVar7;
      do {
        uVar7 = (this->LODData).ArrayNum;
        if (uVar7 == *piVar1) {
          uVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x850,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->LODData).ArrayNum = uVar7 + 1;
        uVar6 = 0;
        if ((int)uVar7 < (int)(uVar7 + 1)) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        this_00 = (FStaticMeshComponentLODInfo *)
                  ((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar7 * 0x50);
        if (this_00 != (FStaticMeshComponentLODInfo *)0x0) {
          FStaticMeshComponentLODInfo::FStaticMeshComponentLODInfo(this_00,this);
        }
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  return true;
}

// SetStaticLightingMapping @ 1487c3570

bool __thiscall
UStaticMeshComponent::SetStaticLightingMapping(UStaticMeshComponent *this,bool param_1,int param_2)

{
  UStaticMesh *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int local_res8 [2];
  int local_res20 [2];
  
  pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
  if (pUVar1 != (UStaticMesh *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    uVar4 = this->field_0x5ae;
    if (param_1) {
      if (param_2 != 0) {
        this->OverriddenLightMapRes = param_2;
        this->field_0x5ae = uVar4 | 4;
        UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
        return true;
      }
      if (this->bOverrideLightMapRes == '\0') {
        pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStaticMesh *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)pUVar1);
        }
        if (pUVar1->LightMapResolution == 0) {
          if (this->OverriddenLightMapRes == 0) {
            local_res20[0] = 0;
            bVar3 = FConfigCacheIni::GetInt
                              (GConfig,L"DevOptions.StaticLighting",L"DefaultStaticMeshLightingRes",
                               local_res20,&GLightmassIni);
            if (!bVar3) {
              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("GConfig->GetInt(L\"DevOptions.StaticLighting\", L\"DefaultStaticMeshLightingRes\", TempInt, GLightmassIni)"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMeshLight.cpp"
                                 ,0x243,L"");
              if (bVar3) {
                pcVar2 = (code *)swi(3);
                uVar4 = (*pcVar2)();
                return (bool)uVar4;
              }
            }
            this->OverriddenLightMapRes = local_res20[0];
          }
LAB_1487c37ed:
          this->bOverrideLightMapRes = '\x01';
          UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
          return true;
        }
      }
      else if (this->OverriddenLightMapRes == 0) {
        pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStaticMesh *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)pUVar1);
        }
        if (pUVar1->LightMapResolution == 0) {
          local_res8[0] = 0;
          bVar3 = FConfigCacheIni::GetInt
                            (GConfig,L"DevOptions.StaticLighting",L"DefaultStaticMeshLightingRes",
                             local_res8,&GLightmassIni);
          if (!bVar3) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("GConfig->GetInt(L\"DevOptions.StaticLighting\", L\"DefaultStaticMeshLightingRes\", TempInt, GLightmassIni)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMeshLight.cpp"
                               ,0x229,L"");
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
          }
          this->OverriddenLightMapRes = local_res8[0];
          UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
          return true;
        }
LAB_1487c35fe:
        this->bOverrideLightMapRes = '\0';
        UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
        return true;
      }
    }
    else if (this->bOverrideLightMapRes == '\0') {
      pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStaticMesh *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      if (pUVar1->LightMapResolution != 0) {
        this->OverriddenLightMapRes = 0;
        goto LAB_1487c37ed;
      }
    }
    else if (this->OverriddenLightMapRes != 0) {
      pUVar1 = (this->StaticMesh).field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStaticMesh *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      if (pUVar1->LightMapResolution != 0) {
        this->OverriddenLightMapRes = 0;
        UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
        return true;
      }
      goto LAB_1487c35fe;
    }
  }
  return false;
}

// ShouldCreateNaniteProxy @ 1487c3a60

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

bool __thiscall
UStaticMeshComponent::ShouldCreateNaniteProxy(UStaticMeshComponent *this,FMaterialAudit *param_1)

{
  undefined1 uVar1;
  bool bVar2;
  char cVar3;
  EShaderPlatform EVar4;
  FSceneInterface *pFVar5;
  UWorld *pUVar6;
  undefined1 auStack_138 [32];
  FMaterialAudit local_118;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_138;
  if (this->bDisallowNanite == '\0' && this->bForceDisableNanite == '\0') {
    pFVar5 = UActorComponent::GetScene((UActorComponent *)this);
    EVar4 = GMaxRHIShaderPlatform;
    if (pFVar5 != (FSceneInterface *)0x0) {
      pFVar5 = UActorComponent::GetScene((UActorComponent *)this);
      EVar4 = FSceneInterface::GetShaderPlatform(pFVar5);
    }
    bVar2 = UseNanite(EVar4,true,true);
    if ((bVar2) && (cVar3 = (**(code **)(this->_padding_ + 0xb38))(this), cVar3 != '\0')) {
      local_118.bCompatibleWithLumenCardSharing = '\0';
      local_118.bHasSky = '\0';
      local_118.bHasMasked = '\0';
      local_118.bHasAnyError = '\0';
      local_118.AssetName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.AssetName.Data.ArrayNum = 0;
      local_118.AssetName.Data.ArrayMax = 0;
      local_118.Entries.AllocatorInstance.SecondaryData =
           (ForElementType<Nanite::FMaterialAuditEntry>)0x0;
      local_118.Entries.ArrayNum = 0;
      local_118.Entries.ArrayMax = 4;
      local_118.FallbackMaterial = (UMaterialInterface *)0x0;
      Nanite::FNaniteResourcesHelper::AuditMaterials<UStaticMeshComponent>
                (this,&local_118,param_1 != (FMaterialAudit *)0x0);
      pUVar6 = (UWorld *)this->_padding_;
      if (pUVar6 == (UWorld *)0x0) {
        pUVar6 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
      }
      bVar2 = Nanite::IsMaskingAllowed(pUVar6,this->bForceNaniteForMasked);
      if (((local_118.bHasAnyError == 0) && (local_118.bHasSky == '\0')) &&
         ((bVar2 || (local_118.bHasMasked == '\0')))) {
        if (param_1 != (FMaterialAudit *)0x0) {
          Nanite::FMaterialAudit::operator=(param_1,&local_118);
        }
        if (local_118.Entries.AllocatorInstance.SecondaryData !=
            (ForElementType<Nanite::FMaterialAuditEntry>)0x0) {
          FMemory::Free((void *)local_118.Entries.AllocatorInstance.SecondaryData);
        }
        if (local_118.AssetName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.AssetName.Data.AllocatorInstance.Data);
        }
        return true;
      }
      if (local_118.Entries.AllocatorInstance.SecondaryData !=
          (ForElementType<Nanite::FMaterialAuditEntry>)0x0) {
        FMemory::Free((void *)local_118.Entries.AllocatorInstance.SecondaryData);
      }
      if (local_118.AssetName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.AssetName.Data.AllocatorInstance.Data);
      }
    }
  }
  return false;
}

// ShouldRecreateProxyOnUpdateTransform @ 1487c3d80

bool __thiscall
UStaticMeshComponent::ShouldRecreateProxyOnUpdateTransform(UStaticMeshComponent *this)

{
  return *(char *)((longlong)&this->_padding_ + 3) != '\x02';
}

