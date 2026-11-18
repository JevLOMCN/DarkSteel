// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 14

// StaticClass @ 146dc9f90

UClass * __cdecl UNavMeshRenderingComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavMeshRenderingComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavMeshRenderingComponent",
               &Z_Registration_Info_UClass_UNavMeshRenderingComponent.InnerSingleton,
               StaticRegisterNativesUNavMeshRenderingComponent,0x640,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavMeshRenderingComponent>,
               InternalVTableHelperCtorCaller<UNavMeshRenderingComponent>,local_res8,
               UDebugDrawComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavMeshRenderingComponent.InnerSingleton;
}

// UNavMeshRenderingComponent @ 146dd8950

UNavMeshRenderingComponent * __thiscall
UNavMeshRenderingComponent::UNavMeshRenderingComponent
          (UNavMeshRenderingComponent *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  UDebugDrawComponent::UDebugDrawComponent((UDebugDrawComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->TimerHandle).Handle = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  FDebugDrawDelegateHelper::FDebugDrawDelegateHelper
            ((FDebugDrawDelegateHelper *)&this->NavMeshDebugDrawDelegateManager);
  (this->NavMeshDebugDrawDelegateManager).bForceRendering = 0;
  (this->NavMeshDebugDrawDelegateManager).bNeedsNewData = 0;
  (this->NavMeshDebugDrawDelegateManager)._padding_ =
       (longlong)&___7FNavMeshDebugDrawDelegateHelper__6B_;
  (this->NavMeshDebugDrawDelegateManager).DebugLabels.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->NavMeshDebugDrawDelegateManager).DebugLabels.ArrayNum = 0;
  (this->NavMeshDebugDrawDelegateManager).DebugLabels.ArrayMax = 0;
  return this;
}

// UNavMeshRenderingComponent @ 146dd8a00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UNavMeshRenderingComponent * __thiscall
UNavMeshRenderingComponent::UNavMeshRenderingComponent
          (UNavMeshRenderingComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  
  UDebugDrawComponent::UDebugDrawComponent((UDebugDrawComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->TimerHandle).Handle = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  FDebugDrawDelegateHelper::FDebugDrawDelegateHelper
            ((FDebugDrawDelegateHelper *)&this->NavMeshDebugDrawDelegateManager);
  (this->NavMeshDebugDrawDelegateManager).bForceRendering = 0;
  (this->NavMeshDebugDrawDelegateManager).bNeedsNewData = 0;
  (this->NavMeshDebugDrawDelegateManager)._padding_ =
       (longlong)&___7FNavMeshDebugDrawDelegateHelper__6B_;
  (this->NavMeshDebugDrawDelegateManager).DebugLabels.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->NavMeshDebugDrawDelegateManager).DebugLabels.ArrayNum = 0;
  (this->NavMeshDebugDrawDelegateManager).DebugLabels.ArrayMax = 0;
  UPrimitiveComponent::SetCollisionProfileName
            ((UPrimitiveComponent *)this,UCollisionProfile::NoCollision_ProfileName,true);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 2;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 & 0xef;
  this->bCollectNavigationData = 0;
  this->bForceUpdate = 0;
  return this;
}

// ~UNavMeshRenderingComponent @ 146dda1e0

void __thiscall
UNavMeshRenderingComponent::~UNavMeshRenderingComponent(UNavMeshRenderingComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  FNavMeshDebugDrawDelegateHelper::~FNavMeshDebugDrawDelegateHelper
            (&this->NavMeshDebugDrawDelegateManager);
  UDebugDrawComponent::~UDebugDrawComponent((UDebugDrawComponent *)this);
  return;
}

// CalcBounds @ 146de2d90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TBoxSphereBounds<double,double> * __thiscall
UNavMeshRenderingComponent::CalcBounds
          (UNavMeshRenderingComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [12];
  double dVar8;
  double dVar9;
  double dVar10;
  UClass *pUVar11;
  TBox<double> *pTVar12;
  UWorld *pUVar13;
  ARecastNavMesh *this_00;
  UNavigationSystemBase *pUVar14;
  double extraout_XMM0_Qb;
  double extraout_XMM0_Qb_00;
  double dVar18;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  char local_b8;
  TBox<double> local_98 [2];
  
  this_00 = (ARecastNavMesh *)this->_padding_;
  local_e8 = 0.0;
  dStack_e0 = 0.0;
  local_d8 = 0.0;
  dStack_d0 = 0.0;
  local_c8 = 0.0;
  dStack_c0 = 0.0;
  if (this_00 == (ARecastNavMesh *)0x0) {
LAB_146de2df4:
    this_00 = (ARecastNavMesh *)0x0;
  }
  else {
    pUVar11 = ARecastNavMesh::GetPrivateStaticClass();
    iVar2 = (int)pUVar11->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar11->_padding_)) goto LAB_146de2df4;
  }
  if (this_00 == (ARecastNavMesh *)0x0) goto LAB_146de2f95;
  pTVar12 = ARecastNavMesh::GetNavMeshBounds(this_00,local_98);
  dVar23 = (pTVar12->Min).field0_0x0._s_0.X;
  dVar8 = (pTVar12->Min).field0_0x0._s_0.Y;
  dVar9 = (pTVar12->Min).field0_0x0._s_0.Z;
  dVar10 = (pTVar12->Max).field0_0x0._s_0.X;
  dVar4 = (pTVar12->Max).field0_0x0._s_0.Y;
  dVar20 = (pTVar12->Max).field0_0x0._s_0.Z;
  uVar1 = pTVar12->IsValid;
  local_c8 = dVar4;
  local_d8 = dVar9;
  dStack_c0 = dVar20;
  dStack_d0 = dVar10;
  local_e8 = dVar23;
  dStack_e0 = dVar8;
  if ((this_00->bDrawOctree == 0) ||
     ((pUVar13 = (UWorld *)this->_padding_, dVar18 = dVar20, pUVar13 == (UWorld *)0x0 &&
      (pUVar13 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
      dVar18 = extraout_XMM0_Qb, pUVar13 == (UWorld *)0x0)))) goto LAB_146de2f95;
  pUVar14 = (pUVar13->NavigationSystem).field0_0x0.DebugPtr;
  if (pUVar14 == (UNavigationSystemBase *)0x0) {
LAB_146de2ea3:
    pUVar14 = (UNavigationSystemBase *)0x0;
  }
  else {
    pUVar11 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar2 = (int)pUVar11->_padding_;
    dVar18 = extraout_XMM0_Qb_00;
    if ((*(int *)(*(longlong *)&pUVar14->field_0x10 + 0x38) < iVar2) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar14->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar11->_padding_)) goto LAB_146de2ea3;
  }
  if ((pUVar14 != (UNavigationSystemBase *)0x0) &&
     (lVar3 = *(longlong *)&pUVar14[0x16].field_0x18, lVar3 != 0)) {
    auVar17 = *(undefined1 (*) [16])(lVar3 + 0x30);
    dVar5 = *(double *)(lVar3 + 0x10) + auVar17._0_8_;
    auVar7._4_8_ = dVar18;
    auVar7._0_4_ = auVar17._4_4_;
    auVar15._0_8_ = auVar7._0_8_ << 0x20;
    auVar15._8_4_ = auVar17._8_4_;
    auVar15._12_4_ = auVar17._12_4_;
    dVar19 = *(double *)(lVar3 + 0x10) - auVar17._0_8_;
    dVar6 = *(double *)(lVar3 + 0x40) + *(double *)(lVar3 + 0x20);
    dVar18 = auVar15._8_8_ + *(double *)(lVar3 + 0x18);
    dVar21 = *(double *)(lVar3 + 0x18) - auVar15._8_8_;
    dVar22 = *(double *)(lVar3 + 0x20) - *(double *)(lVar3 + 0x40);
    local_c8 = dVar18;
    local_d8 = dVar22;
    dStack_c0 = dVar6;
    dStack_d0 = dVar5;
    local_e8 = dVar19;
    dStack_e0 = dVar21;
    if (uVar1 != '\0') {
      dStack_e0 = dVar8;
      if (dVar21 <= dVar8) {
        dStack_e0 = dVar21;
      }
      local_e8 = dVar23;
      if (dVar19 <= dVar23) {
        local_e8 = dVar19;
      }
      local_d8 = dVar9;
      if (dVar22 <= dVar9) {
        local_d8 = dVar22;
      }
      dStack_d0 = dVar10;
      if (dVar10 <= dVar5) {
        dStack_d0 = dVar5;
      }
      dStack_c0 = dVar20;
      if (dVar20 <= dVar6) {
        dStack_c0 = dVar6;
      }
      local_c8 = dVar4;
      if (dVar4 <= dVar18) {
        local_c8 = dVar18;
      }
    }
  }
LAB_146de2f95:
  dVar4 = (dStack_d0 - local_e8) * __real_3fe0000000000000;
  dVar23 = (dStack_c0 - local_d8) * __real_3fe0000000000000;
  dVar20 = (local_c8 - dStack_e0) * __real_3fe0000000000000;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = dVar4 + local_e8;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar20 + dStack_e0;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar23 + local_d8;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar4;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar20;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar23;
  dVar4 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y;
  dVar20 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X;
  dVar23 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z;
  auVar16._0_8_ = dVar4 * dVar4;
  auVar16._8_8_ = 0;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = dVar20 * dVar20 + auVar16._0_8_ + dVar23 * dVar23;
  auVar17 = sqrtpd(auVar16,auVar17);
  __return_storage_ptr__->SphereRadius = auVar17._0_8_;
  return __return_storage_ptr__;
}

// CreateDebugSceneProxy @ 146de6310

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

FDebugRenderSceneProxy * __thiscall
UNavMeshRenderingComponent::CreateDebugSceneProxy(UNavMeshRenderingComponent *this)

{
  int *piVar1;
  TArray<FNavMeshSceneProxyData::FDebugText,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined1 *puVar3;
  int iVar4;
  UGameViewportClient *pUVar5;
  longlong lVar6;
  FDebugText *pFVar7;
  char cVar8;
  UWorld *pUVar9;
  FWorldContext *pFVar10;
  UClass *pUVar11;
  FNavMeshSceneProxy *this_00;
  FNavMeshSceneProxy *pFVar12;
  undefined1 auStackY_178 [32];
  FNavMeshSceneProxyData local_148;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pUVar9 = (UWorld *)this->_padding_;
  pFVar12 = (FNavMeshSceneProxy *)0x0;
  if (pUVar9 == (UWorld *)0x0) {
    pUVar9 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  pFVar10 = UEngine::GetWorldContextFromWorld(GEngine,pUVar9);
  if (((pFVar10 == (FWorldContext *)0x0) ||
      (pUVar5 = (pFVar10->GameViewport).field0_0x0.DebugPtr, pUVar5 == (UGameViewportClient *)0x0))
     || ((pUVar5->EngineShowFlags).Navigation == 0)) {
    this->bCollectNavigationData = 0;
    *(undefined4 *)&this->field_0x5b0 = *(undefined4 *)&this->field_0x5b0;
  }
  else {
    this->bCollectNavigationData = 0;
    this->bCollectNavigationData = 1;
    cVar8 = (**(code **)(this->_padding_ + 0x560))(this);
    if (cVar8 != '\0') {
      lVar6 = this->_padding_;
      if (lVar6 != 0) {
        pUVar11 = ARecastNavMesh::GetPrivateStaticClass();
        iVar4 = (int)pUVar11->_padding_;
        if (((iVar4 <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
            ((longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar4 * 8) ==
             &pUVar11->_padding_)) && ((*(byte *)(lVar6 + 0x358) & 1) != 0)) {
          FNavMeshSceneProxyData::FNavMeshSceneProxyData(&local_148);
          (**(code **)(this->_padding_ + 0xaa0))(this,lVar6,&local_148);
          this_00 = ::operator_new(0x8e0);
          if (this_00 != (FNavMeshSceneProxy *)0x0) {
            pFVar12 = FNavMeshSceneProxy::FNavMeshSceneProxy
                                (this_00,(UPrimitiveComponent *)this,&local_148,false);
          }
          FNavMeshDebugDrawDelegateHelper::SetupFromProxy
                    (&this->NavMeshDebugDrawDelegateManager,pFVar12);
          FNavMeshSceneProxyData::~FNavMeshSceneProxyData(&local_148);
          return (FDebugRenderSceneProxy *)pFVar12;
        }
      }
      pTVar2 = &(this->NavMeshDebugDrawDelegateManager).DebugLabels;
      piVar1 = &(this->NavMeshDebugDrawDelegateManager).DebugLabels.ArrayMax;
      pFVar7 = (FDebugText *)(pTVar2->AllocatorInstance).Data;
      iVar4 = (this->NavMeshDebugDrawDelegateManager).DebugLabels.ArrayNum;
      if (*piVar1 < 0) {
        DestructItems<FNavMeshSceneProxyData::FDebugText,int>(pFVar7,iVar4);
        (this->NavMeshDebugDrawDelegateManager).DebugLabels.ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,0,&pTVar2->AllocatorInstance,0,piVar1);
        }
      }
      else {
        DestructItems<FNavMeshSceneProxyData::FDebugText,int>(pFVar7,iVar4);
        (this->NavMeshDebugDrawDelegateManager).DebugLabels.ArrayNum = 0;
      }
      (this->NavMeshDebugDrawDelegateManager).bNeedsNewData = 1;
    }
  }
  return (FDebugRenderSceneProxy *)pFVar12;
}

// GatherData @ 146dff740

void __thiscall
UNavMeshRenderingComponent::GatherData
          (UNavMeshRenderingComponent *this,ARecastNavMesh *param_1,FNavMeshSceneProxyData *param_2)

{
  uint uVar1;
  TArray<FNavTileRef,TSizedDefaultAllocator<32>_> local_18;
  
  if (param_1 == (ARecastNavMesh *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)&param_1->field_0x518;
    uVar1 = (((uVar1 & 0x20) << 5 | uVar1 & 0x300) << 9 | uVar1 & 4) * 2 |
            (uVar1 >> 2 & 0x7ff00 | uVar1 & 200) >> 1 | uVar1 & 0x13;
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  FNavMeshSceneProxyData::GatherData(param_2,param_1,uVar1,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// GetDebugDrawDelegateHelper @ 146e01440

FDebugDrawDelegateHelper * __thiscall
UNavMeshRenderingComponent::GetDebugDrawDelegateHelper(UNavMeshRenderingComponent *this)

{
  return (FDebugDrawDelegateHelper *)&this->NavMeshDebugDrawDelegateManager;
}

// GetPrivateStaticClass @ 146e0eb40

UClass * __cdecl UNavMeshRenderingComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavMeshRenderingComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavMeshRenderingComponent",
               &Z_Registration_Info_UClass_UNavMeshRenderingComponent.InnerSingleton,
               StaticRegisterNativesUNavMeshRenderingComponent,0x640,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavMeshRenderingComponent>,
               InternalVTableHelperCtorCaller<UNavMeshRenderingComponent>,local_res8,
               UDebugDrawComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavMeshRenderingComponent.InnerSingleton;
}

// IsNavigationShowFlagSet @ 146e158e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl UNavMeshRenderingComponent::IsNavigationShowFlagSet(UWorld *param_1)

{
  UGameViewportClient *pUVar1;
  FWorldContext *pFVar2;
  
  pFVar2 = UEngine::GetWorldContextFromWorld(GEngine,param_1);
  if (((pFVar2 != (FWorldContext *)0x0) &&
      (pUVar1 = (pFVar2->GameViewport).field0_0x0.DebugPtr, pUVar1 != (UGameViewportClient *)0x0))
     && ((pUVar1->EngineShowFlags).Navigation != 0)) {
    return true;
  }
  return false;
}

// OnRegister @ 146e19b90

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

void __thiscall UNavMeshRenderingComponent::OnRegister(UNavMeshRenderingComponent *this)

{
  code *pcVar1;
  bool bVar2;
  UWorld *this_00;
  FTimerManager *this_01;
  undefined8 *puVar3;
  ulong64 uVar4;
  FTimerUnifiedDelegate *pFVar5;
  undefined1 auStackY_d8 [32];
  FDelegateAllocation local_a8;
  UNavMeshRenderingComponent *local_98 [2];
  code *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78;
  undefined8 local_70;
  FTimerUnifiedDelegate local_68;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  UPrimitiveComponent::OnRegister((UPrimitiveComponent *)this);
  this_00 = (UWorld *)this->_padding_;
  if (this_00 == (UWorld *)0x0) {
    this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  this_01 = UWorld::GetTimerManager(this_00);
  uStack_7c = local_70._4_4_;
  local_88 = TimerFunction;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = &local_a8;
  local_a8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_a8.DelegateSize = 0;
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,&local_a8);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNavMeshRenderingComponent____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar3[3] = 0;
    local_98[0] = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)local_98);
    puVar3[4] = local_88;
    puVar3[5] = CONCAT44(uStack_7c,uStack_80);
  }
  pFVar5 = FTimerUnifiedDelegate::FTimerUnifiedDelegate
                     (&local_68,
                      (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
                      &local_a8);
  FTimerManager::InternalSetTimer
            (this_01,&this->TimerHandle,pFVar5,__real_3f800000,true,__real_bf800000);
  if (3 < local_68.VariantDelegate.TypeIndex) {
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
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_68.VariantDelegate.TypeIndex])(&local_68);
  if ((local_a8.DelegateSize != 0) &&
     (local_a8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_a8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_a8,0,0,0x10);
    local_a8.DelegateSize = 0;
  }
  if (local_a8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_a8.DelegateAllocator);
  }
  return;
}

// OnUnregister @ 146e1ae80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNavMeshRenderingComponent::OnUnregister(UNavMeshRenderingComponent *this)

{
  UWorld *this_00;
  FTimerManager *this_01;
  FTimerData *pFVar1;
  
  this_00 = (UWorld *)this->_padding_;
  if (this_00 == (UWorld *)0x0) {
    this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  this_01 = UWorld::GetTimerManager(this_00);
  pFVar1 = FTimerManager::FindTimer(this_01,&this->TimerHandle);
  if (pFVar1 != (FTimerData *)0x0) {
    FTimerManager::InternalClearTimer(this_01,(FTimerHandle)(this->TimerHandle).Handle);
  }
  (this->TimerHandle).Handle = 0;
  UPrimitiveComponent::OnUnregister((UPrimitiveComponent *)this);
  return;
}

// StaticRegisterNativesUNavMeshRenderingComponent @ 146e29e40

void __cdecl UNavMeshRenderingComponent::StaticRegisterNativesUNavMeshRenderingComponent(void)

{
  return;
}

// TimerFunction @ 146e2b540

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNavMeshRenderingComponent::TimerFunction(UNavMeshRenderingComponent *this)

{
  undefined4 uVar1;
  UGameViewportClient *pUVar2;
  UWorld *pUVar3;
  FWorldContext *pFVar4;
  byte bVar5;
  
  pUVar3 = (UWorld *)this->_padding_;
  if (pUVar3 == (UWorld *)0x0) {
    pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  if (this->bForceUpdate == 0) {
    pFVar4 = UEngine::GetWorldContextFromWorld(GEngine,pUVar3);
    if (((pFVar4 == (FWorldContext *)0x0) ||
        (pUVar2 = (pFVar4->GameViewport).field0_0x0.DebugPtr, pUVar2 == (UGameViewportClient *)0x0))
       || ((pUVar2->EngineShowFlags).Navigation == 0)) {
      bVar5 = 0;
      goto LAB_146e2b595;
    }
  }
  bVar5 = 1;
LAB_146e2b595:
  uVar1 = *(undefined4 *)&this->field_0x5b0;
  if (((uint)bVar5 != ZPULL(uVar1,0,1)) && (bVar5 == 1)) {
    *(uint *)&this->field_0x5b0 = (this->bCollectNavigationData ^ 1) & 1 ^ uVar1 & 0xfffffffd;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    return;
  }
  return;
}

