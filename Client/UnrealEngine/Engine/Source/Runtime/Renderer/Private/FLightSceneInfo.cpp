// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 19

// FLightSceneInfo @ 144c1dde0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

FLightSceneInfo * __thiscall
FLightSceneInfo::FLightSceneInfo(FLightSceneInfo *this,FLightSceneProxy *param_1,bool param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  FSceneInterface *pFVar4;
  FScene *pFVar5;
  FLightSceneInfo *pFVar6;
  uint uVar7;
  
  if ((GRecordInteractionShadowPrimitives == 0) || (param_1->LightType == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  this->bRecordInteractionShadowPrimitives = bVar3;
  (this->InteractionShadowPrimitives).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InteractionShadowPrimitives).ArrayNum = 0;
  (this->InteractionShadowPrimitives).ArrayMax = 0;
  this->Proxy = param_1;
  this->DynamicInteractionOftenMovingPrimitiveList = (FLightPrimitiveInteraction *)0x0;
  this->DynamicInteractionStaticPrimitiveList = (FLightPrimitiveInteraction *)0x0;
  bVar2 = param_1->LightType;
  (this->OctreeId).ElementIndex = -1;
  *(undefined8 *)&this->PrevPersistentShadows = 0;
  *(undefined8 *)&(this->PrevPersistentShadows).field_0x8 = 0;
  *(undefined8 *)&(this->PrevPersistentShadows).field_0x20 = 0;
  this->Type = (uint)bVar2;
  this->Id = -1;
  (this->OctreeId).NodeIndex = 0xffffffff;
  *(undefined4 *)&(this->PrevPersistentShadows).field_0x28 = 0;
  *(undefined4 *)&(this->PrevPersistentShadows).field_0x2c = 0x80;
  *(undefined4 *)&(this->PrevPersistentShadows).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PrevPersistentShadows).field_0x34 = 0;
  *(undefined8 *)&(this->PrevPersistentShadows).field_0x40 = 0;
  *(undefined4 *)&(this->PrevPersistentShadows).field_0x48 = 0;
  *(undefined8 *)&this->PersistentShadows = 0;
  *(undefined8 *)&(this->PersistentShadows).field_0x8 = 0;
  *(undefined8 *)&(this->PersistentShadows).field_0x20 = 0;
  *(undefined4 *)&(this->PersistentShadows).field_0x28 = 0;
  *(undefined4 *)&(this->PersistentShadows).field_0x2c = 0x80;
  *(undefined4 *)&(this->PersistentShadows).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PersistentShadows).field_0x34 = 0;
  *(undefined8 *)&(this->PersistentShadows).field_0x40 = 0;
  *(undefined4 *)&(this->PersistentShadows).field_0x48 = 0;
  this->DynamicShadowMapChannel = -1;
  bVar2 = (**(code **)(param_1->LightComponent->_padding_ + 0x630))();
  uVar7 = (bVar2 & 1 ^ *(uint *)&this->field_0xe4 & 0xfffffffe) & 0xfffffffd | (uint)param_2 * 2;
  *(uint *)&this->field_0xe4 = uVar7;
  *(uint *)&this->field_0xe4 =
       (*(int *)&param_1->LightComponent->field_0x328 << 2 ^ uVar7) & 4 ^ uVar7;
  this->BloomScale = param_1->LightComponent->BloomScale;
  this->BloomThreshold = param_1->LightComponent->BloomThreshold;
  this->BloomMaxBrightness = param_1->LightComponent->BloomMaxBrightness;
  (this->BloomTint).field0_0x0 = (param_1->LightComponent->BloomTint).field0_0x0;
  this->NumUnbuiltInteractions = 0;
  bVar3 = (bool)(**(code **)(this->Proxy->_padding_ + 0xa8))();
  this->bCreatePerObjectShadowsForDynamicObjects = bVar3;
  pFVar4 = UActorComponent::GetScene((UActorComponent *)param_1->LightComponent);
  pFVar5 = (FScene *)(**(code **)(pFVar4->_padding_ + 0x420))(pFVar4);
  this->Scene = pFVar5;
  if (this->bVisible == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bVisible || false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\LightSceneInfo.cpp"
                       ,0x4f,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FLightSceneInfo *)(*pcVar1)();
      return pFVar6;
    }
  }
  return this;
}

// AddToScene @ 144c2a9d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall FLightSceneInfo::AddToScene(FLightSceneInfo *this)

{
  int *piVar1;
  int *piVar2;
  undefined1 *puVar3;
  uchar uVar4;
  FScene *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  EShadingPath EVar10;
  int iVar11;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar12;
  FScriptContainerElement *pFVar13;
  FLightSceneInfoCompact *this_00;
  undefined1 auStackY_618 [32];
  undefined1 local_5c8 [8];
  <lambda_1> local_5c0;
  double local_5b0;
  double dStack_5a8;
  double local_5a0;
  undefined4 local_598;
  undefined4 uStack_594;
  double local_590;
  double dStack_588;
  double local_580;
  undefined4 local_578;
  undefined4 uStack_574;
  TVector4<double>_u_0 local_568;
  undefined4 local_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined4 local_538;
  undefined4 uStack_534;
  undefined8 local_530;
  TVector4<double>_u_0 local_528;
  undefined4 local_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined4 local_4f8;
  undefined4 uStack_4f4;
  undefined8 local_4f0;
  TVector<double>_u_0 local_4e8;
  double local_4d0;
  double local_4c8;
  double local_4c0;
  double local_4b8;
  FPrimitiveSceneInfoCompact local_4b0;
  TArray<FLightSceneInfoCompact,TSizedInlineAllocator<16,32,TAlignedHeapAllocator<16>_>_> local_468;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_618;
  bVar9 = false;
  piVar1 = &this->Id;
  this_00 = (FLightSceneInfoCompact *)((longlong)*piVar1 * 0x40 + *(longlong *)&this->Scene->Lights)
  ;
  EVar10 = FSceneInterface::GetShadingPath(*(Type *)&this->Scene->field_0x8);
  if (((EVar10 == Mobile) && (bVar8 = ShouldRenderLightViewIndependent(this), bVar8)) &&
     ((uVar4 = this->Proxy->LightType, uVar4 == '\x03' || ((byte)(uVar4 - 1) < 2)))) {
    bVar9 = true;
  }
  if ((this->Proxy->bStaticLighting != '\0' ||
       (this->Proxy->bCastDynamicShadow != '\0' || this->Proxy->bCastStaticShadow != '\0')) ||
     (bVar9)) {
    pFVar5 = this->Scene;
    if (this_00->LightType == 0) {
      pTVar12 = &pFVar5->DirectionalShadowCastingLightIDs;
      pFVar6 = (pTVar12->AllocatorInstance).Data;
      if (((pFVar6 <= piVar1) &&
          (piVar1 < pFVar6 + (longlong)(pFVar5->DirectionalShadowCastingLightIDs).ArrayMax * 4)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar11 = (pFVar5->DirectionalShadowCastingLightIDs).ArrayNum;
      piVar2 = &(pFVar5->DirectionalShadowCastingLightIDs).ArrayMax;
      if (iVar11 == *piVar2) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar12->AllocatorInstance,piVar2);
      }
      (pFVar5->DirectionalShadowCastingLightIDs).ArrayNum = iVar11 + 1;
      *(int *)((pTVar12->AllocatorInstance).Data + (longlong)iVar11 * 4) = *piVar1;
      pFVar5 = this->Scene;
      pFVar13 = (pFVar5->Primitives).AllocatorInstance.Data;
      iVar11 = (pFVar5->Primitives).ArrayNum;
      pFVar6 = pFVar13 + (longlong)iVar11 * 8;
      while( true ) {
        if ((pFVar5->Primitives).ArrayNum != iVar11) {
          `TCheckedPointerIterator<FPrimitiveSceneInfo_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_5c8);
        }
        if (pFVar13 == pFVar6) break;
        FPrimitiveSceneInfoCompact::FPrimitiveSceneInfoCompact
                  (&local_4b0,*(FPrimitiveSceneInfo **)pFVar13);
        local_4e8._s_0.X = local_4b0.Bounds.Origin.field0_0x0._s_0.X;
        local_4e8._s_0.Y = local_4b0.Bounds.Origin.field0_0x0._s_0.Y;
        local_4e8._s_0.Z = local_4b0.Bounds.Origin.field0_0x0._s_0.Z;
        local_4d0 = (double)local_4b0.Bounds.BoxExtent.field0_0x0._s_0.X;
        local_4c8 = (double)local_4b0.Bounds.BoxExtent.field0_0x0._s_0.Y;
        local_4c0 = (double)local_4b0.Bounds.BoxExtent.field0_0x0._s_0.Z;
        local_4b8 = (double)local_4b0.Bounds.SphereRadius;
        bVar9 = FLightSceneInfoCompact::AffectsPrimitive
                          (this_00,(TBoxSphereBounds<double,double> *)&local_4e8._s_0,
                           local_4b0.Proxy);
        if (bVar9) {
          FLightPrimitiveInteraction::Create(this,local_4b0.PrimitiveSceneInfo);
        }
        pFVar13 = pFVar13 + 8;
      }
    }
    else {
      local_468.ArrayMax = 0x10;
      local_468.AllocatorInstance.SecondaryData = (ForElementType<FLightSceneInfoCompact>)0x0;
      local_468.ArrayNum = 0;
      (**(code **)(this_00->LightSceneInfo->Proxy->_padding_ + 0x10))();
      local_568._s_0.X = local_5b0;
      local_568._s_0.Y = dStack_5a8;
      local_568._s_0.Z = local_5a0;
      local_538 = local_598;
      uStack_534 = uStack_594;
      local_548 = local_598;
      uStack_544 = uStack_594;
      uStack_540 = local_598;
      uStack_53c = uStack_594;
      local_568._s_0.W = 0.0;
      local_530 = 0;
      TOctree2<FLightSceneInfoCompact,FLightOctreeSemantics>::AddElementInternal
                (&pFVar5->LocalShadowCastingLightOctree,0,
                 &(pFVar5->LocalShadowCastingLightOctree).RootNodeContext,
                 (FBoxCenterAndExtent *)&local_568._s_0,this_00,&local_468);
      if (local_468.AllocatorInstance.SecondaryData != (ForElementType<FLightSceneInfoCompact>)0x0)
      {
        FMemory::Free((void *)local_468.AllocatorInstance.SecondaryData);
      }
      pFVar5 = this->Scene;
      local_5c0.LightSceneInfoCompact = this_00;
      local_5c0.__this = this;
      (**(code **)(this->Proxy->_padding_ + 0x10))();
      local_528._s_0.X = local_590;
      local_528._s_0.Y = dStack_588;
      local_528._s_0.Z = local_580;
      local_528._s_0.W = 0.0;
      local_4f8 = local_578;
      uStack_4f4 = uStack_574;
      local_4f0 = 0;
      local_508 = local_578;
      uStack_504 = uStack_574;
      uStack_500 = local_578;
      uStack_4fc = uStack_574;
      TOctree2<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics>::
      FindElementsWithBoundsTestInternal<_FLightSceneInfo::AddToScene_::__l17::<lambda_1>_>
                (&pFVar5->PrimitiveOctree,0,&(pFVar5->PrimitiveOctree).RootNodeContext,
                 (FBoxCenterAndExtent *)&local_528._s_0,&local_5c0);
    }
  }
  return;
}

// CreateLightPrimitiveInteraction @ 144c32c50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall
FLightSceneInfo::CreateLightPrimitiveInteraction
          (FLightSceneInfo *this,FLightSceneInfoCompact *param_1,FPrimitiveSceneInfoCompact *param_2
          )

{
  bool bVar1;
  TVector<double>_u_0 local_48;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  
  local_48._s_0.X = (param_2->Bounds).Origin.field0_0x0._s_0.X;
  local_48._s_0.Y = (param_2->Bounds).Origin.field0_0x0._s_0.Y;
  local_48._s_0.Z = (param_2->Bounds).Origin.field0_0x0._s_0.Z;
  local_30 = (double)(param_2->Bounds).BoxExtent.field0_0x0._s_0.X;
  local_28 = (double)(param_2->Bounds).BoxExtent.field0_0x0._s_0.Y;
  local_20 = (double)(param_2->Bounds).BoxExtent.field0_0x0._s_0.Z;
  local_18 = (double)(param_2->Bounds).SphereRadius;
  bVar1 = FLightSceneInfoCompact::AffectsPrimitive
                    (param_1,(TBoxSphereBounds<double,double> *)&local_48._s_0,param_2->Proxy);
  if (bVar1) {
    FLightPrimitiveInteraction::Create(this,param_2->PrimitiveSceneInfo);
  }
  return;
}

// Detach @ 144c36ad0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall FLightSceneInfo::Detach(FLightSceneInfo *this)

{
  int *piVar1;
  FLightPrimitiveInteraction *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  bVar4 = IsInRenderingThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\LightSceneInfo.cpp"
                         ,0xa8,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  piVar1 = &(this->InteractionShadowPrimitives).ArrayMax;
  (this->InteractionShadowPrimitives).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->InteractionShadowPrimitives).AllocatorInstance,0,piVar1);
  }
  pFVar2 = this->DynamicInteractionOftenMovingPrimitiveList;
  while (pFVar2 != (FLightPrimitiveInteraction *)0x0) {
    FLightPrimitiveInteraction::Destroy(pFVar2);
    pFVar2 = this->DynamicInteractionOftenMovingPrimitiveList;
  }
  pFVar2 = this->DynamicInteractionStaticPrimitiveList;
  while (pFVar2 != (FLightPrimitiveInteraction *)0x0) {
    FLightPrimitiveInteraction::Destroy(pFVar2);
    pFVar2 = this->DynamicInteractionStaticPrimitiveList;
  }
  return;
}

// GetBoundingBox @ 144c421f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

FBoxCenterAndExtent * __thiscall
FLightSceneInfo::GetBoundingBox(FLightSceneInfo *this,FBoxCenterAndExtent *__return_storage_ptr__)

{
  double local_28;
  double dStack_20;
  double local_18;
  undefined4 local_10;
  undefined4 uStack_c;
  
  (**(code **)(this->Proxy->_padding_ + 0x10))(this->Proxy,&local_28);
  (__return_storage_ptr__->Center).field0_0x0._s_0.W = 0.0;
  (__return_storage_ptr__->Center).field0_0x0._s_0.X = local_28;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Y = dStack_20;
  (__return_storage_ptr__->Extent).field0_0x0._s_0.W = 0.0;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Z = local_18;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Extent).field0_0x0 + 0x10) = local_10;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Extent).field0_0x0 + 0x14) = uStack_c;
  *(undefined4 *)&(__return_storage_ptr__->Extent).field0_0x0 = local_10;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Extent).field0_0x0 + 4) = uStack_c;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Extent).field0_0x0 + 8) = local_10;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Extent).field0_0x0 + 0xc) = uStack_c;
  return __return_storage_ptr__;
}

// GetDynamicInteractionOftenMovingPrimitiveList @ 144c44110

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

FLightPrimitiveInteraction * __thiscall
FLightSceneInfo::GetDynamicInteractionOftenMovingPrimitiveList(FLightSceneInfo *this)

{
  return this->DynamicInteractionOftenMovingPrimitiveList;
}

// GetDynamicInteractionStaticPrimitiveList @ 144c44120

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

FLightPrimitiveInteraction * __thiscall
FLightSceneInfo::GetDynamicInteractionStaticPrimitiveList(FLightSceneInfo *this)

{
  return this->DynamicInteractionStaticPrimitiveList;
}

// GetDynamicShadowMapChannel @ 144c44130

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

int __thiscall FLightSceneInfo::GetDynamicShadowMapChannel(FLightSceneInfo *this)

{
  if (this->Proxy->bStaticShadowing != '\0') {
    return this->Proxy->PreviewShadowMapChannel;
  }
  return this->DynamicShadowMapChannel;
}

// GetInteractionShadowPrimitives @ 144c44520

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

TArray<FLightPrimitiveInteraction_*,TSizedDefaultAllocator<32>_> * __thiscall
FLightSceneInfo::GetInteractionShadowPrimitives(FLightSceneInfo *this)

{
  TArray<FLightPrimitiveInteraction_*,TSizedDefaultAllocator<32>_> *pTVar1;
  
  pTVar1 = &this->InteractionShadowPrimitives;
  if (this->bRecordInteractionShadowPrimitives == false) {
    pTVar1 = (TArray<FLightPrimitiveInteraction_*,TSizedDefaultAllocator<32>_> *)0x0;
  }
  return pTVar1;
}

// IsPrecomputedLightingValid @ 144c537c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

bool __thiscall FLightSceneInfo::IsPrecomputedLightingValid(FLightSceneInfo *this)

{
  if (((this->bPrecomputedLightingIsValid == 0) ||
      (GWholeSceneShadowUnbuiltInteractionThreshold <= this->NumUnbuiltInteractions)) &&
     (this->Proxy->bStaticShadowing != '\0')) {
    return false;
  }
  return true;
}

// PackExtraData @ 144c54450

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

uint __thiscall
FLightSceneInfo::PackExtraData
          (FLightSceneInfo *this,bool param_1,bool param_2,bool param_3,bool param_4)

{
  FLightSceneProxy *pFVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  pFVar1 = this->Proxy;
  if (pFVar1->bStaticShadowing == '\0') {
    iVar10 = this->DynamicShadowMapChannel;
  }
  else {
    iVar10 = pFVar1->PreviewShadowMapChannel;
  }
  iVar2 = pFVar1->ShadowMapChannel;
  if (!param_1) {
    iVar2 = -1;
  }
  uVar9 = 0;
  uVar3 = uVar9;
  if (iVar10 == 3) {
    uVar3 = 0x80;
  }
  uVar4 = uVar9;
  if (iVar10 == 2) {
    uVar4 = 0x40;
  }
  if (iVar10 == 1) {
    uVar9 = 0x20;
  }
  uVar5 = 0;
  uVar6 = uVar5;
  if (iVar10 == 0) {
    uVar6 = 0x10;
  }
  uVar7 = uVar5;
  if (iVar2 == 3) {
    uVar7 = 8;
  }
  uVar8 = uVar5;
  if (iVar2 == 2) {
    uVar8 = 4;
  }
  if (iVar2 == 1) {
    uVar5 = 2;
  }
  return ((((((pFVar1->bCastVolumetricShadow * 2 | (uint)param_4) * 2 | (uint)param_3) << 3 |
            (byte)pFVar1->field_0x1db & 4) << 7 | (uint)param_2) << 3 | (uint)pFVar1->LightType) <<
          2 | (byte)pFVar1->field_0x1d8 & 0x10) << 9 |
         ((uint)pFVar1->LightFunctionAtlasLightIndex << 7 | (uint)pFVar1->LightingChannelMask) << 8
         | uVar3 | uVar4 | uVar9 | uVar6 | uVar7 | uVar8 | uVar5 | (uint)(iVar2 == 0);
}

// RemoveFromScene @ 144c553f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FLightSceneInfo::RemoveFromScene(FLightSceneInfo *this)

{
  int *piVar1;
  FLightPrimitiveInteraction *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  if ((this->OctreeId).NodeIndex == 0xffffffff) {
    TArray<int,TSizedDefaultAllocator<32>_>::RemoveSwap
              (&this->Scene->DirectionalShadowCastingLightIDs,&this->Id,Default);
  }
  else {
    TOctree2<FLightSceneInfoCompact,FLightOctreeSemantics>::RemoveElement
              (&this->Scene->LocalShadowCastingLightOctree,this->OctreeId);
    (this->OctreeId).NodeIndex = 0xffffffff;
    (this->OctreeId).ElementIndex = -1;
  }
  TSet<TTuple<int,TArray<FCachedShadowMapData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FCachedShadowMapData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Remove((TSet<TTuple<int,TArray<FCachedShadowMapData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FCachedShadowMapData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            *)&this->Scene->CachedShadowMaps,this->Id);
  bVar4 = IsInRenderingThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\LightSceneInfo.cpp"
                         ,0xa8,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  piVar1 = &(this->InteractionShadowPrimitives).ArrayMax;
  (this->InteractionShadowPrimitives).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->InteractionShadowPrimitives).AllocatorInstance,0,piVar1);
  }
  pFVar2 = this->DynamicInteractionOftenMovingPrimitiveList;
  while (pFVar2 != (FLightPrimitiveInteraction *)0x0) {
    FLightPrimitiveInteraction::Destroy(pFVar2);
    pFVar2 = this->DynamicInteractionOftenMovingPrimitiveList;
  }
  pFVar2 = this->DynamicInteractionStaticPrimitiveList;
  while (pFVar2 != (FLightPrimitiveInteraction *)0x0) {
    FLightPrimitiveInteraction::Destroy(pFVar2);
    pFVar2 = this->DynamicInteractionStaticPrimitiveList;
  }
  return;
}

// SetDynamicShadowMapChannel @ 144c5d1a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall FLightSceneInfo::SetDynamicShadowMapChannel(FLightSceneInfo *this,int param_1)

{
  if (this->Proxy->bStaticShadowing == '\0') {
    this->DynamicShadowMapChannel = param_1;
  }
  return;
}

// SetupMobileMovableLocalLightShadowParameters @ 144c5ebb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

bool __thiscall
FLightSceneInfo::SetupMobileMovableLocalLightShadowParameters
          (FLightSceneInfo *this,FViewInfo *param_1,
          TArrayView<FVisibleLightInfo_const_,int> *param_2,
          FMobileMovableLocalLightShadowParameters *param_3)

{
  int *piVar1;
  float fVar2;
  uchar uVar3;
  FLightSceneProxy *pFVar4;
  FProjectedShadowInfo *this_00;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  float fVar9;
  char cVar10;
  bool bVar11;
  undefined1 uVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<_public:_bool___cdecl_FLightSceneInfo::SetupMobileMovableLocalLightShadowParameters(FViewInfo_const_&,TArrayView<FVisibleLightInfo_const_,int>,FMobileMovableLocalLightShadowParameters_&)const_::_2_::FStat_STAT_FLightSceneProxy_SetupMobileMovableLocalLightShadowParameters>
  FVar17;
  FVisibleLightInfo *pFVar18;
  ForElementType<float> FVar19;
  longlong lVar20;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  undefined8 uVar21;
  IPooledRenderTarget *pIVar22;
  FNameEntryId FVar23;
  FName FVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  undefined1 auStackY_348 [32];
  FColor_u_0 local_2e8 [2];
  LARGE_INTEGER local_2e0;
  FName local_2d8;
  FName local_2d0;
  FViewInfo *local_2c0;
  FStatMessage local_2b8;
  FName local_2a8;
  FName local_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  TMatrix<double> local_208;
  TMatrix<double> local_188;
  TMatrix<double> local_108;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_348;
  local_2c0 = param_1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_FLightSceneProxy_SetupMobileMovableLocalLightShadowParameters ==
          (FThreadSafeStaticStat<_public:_bool___cdecl_FLightSceneInfo::SetupMobileMovableLocalLightShadowParameters(FViewInfo_const_&,TArrayView<FVisibleLightInfo_const_,int>,FMobileMovableLocalLightShadowParameters_&)const_::_2_::FStat_STAT_FLightSceneProxy_SetupMobileMovableLocalLightShadowParameters>
           )0x0) {
        pFVar16 = ::FName::FName(&local_2a8,
                                 "STAT_FLightSceneProxy_SetupMobileMovableLocalLightShadowParameters"
                                );
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_FLightSceneProxy_SetupMobileMovableLocalLightShadowParameters,
                   *pFVar16,L"STAT_FLightSceneProxy_SetupMobileMovableLocalLightShadowParameters",
                   "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
                   MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar17 = StatPtr_STAT_FLightSceneProxy_SetupMobileMovableLocalLightShadowParameters;
  if (StatPtr_STAT_FLightSceneProxy_SetupMobileMovableLocalLightShadowParameters ==
      (FThreadSafeStaticStat<_public:_bool___cdecl_FLightSceneInfo::SetupMobileMovableLocalLightShadowParameters(FViewInfo_const_&,TArrayView<FVisibleLightInfo_const_,int>,FMobileMovableLocalLightShadowParameters_&)const_::_2_::FStat_STAT_FLightSceneProxy_SetupMobileMovableLocalLightShadowParameters>
       )0x0) {
    pFVar16 = ::FName::FName(&local_2a0,
                             "STAT_FLightSceneProxy_SetupMobileMovableLocalLightShadowParameters");
    FVar17 = (FThreadSafeStaticStat<_public:_bool___cdecl_FLightSceneInfo::SetupMobileMovableLocalLightShadowParameters(FViewInfo_const_&,TArrayView<FVisibleLightInfo_const_,int>,FMobileMovableLocalLightShadowParameters_&)const_::_2_::FStat_STAT_FLightSceneProxy_SetupMobileMovableLocalLightShadowParameters>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &
                          StatPtr_STAT_FLightSceneProxy_SetupMobileMovableLocalLightShadowParameters
                          ,*pFVar16,
                          L"STAT_FLightSceneProxy_SetupMobileMovableLocalLightShadowParameters",
                          "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                          false,MCR_Invalid);
  }
  local_2d0.ComparisonIndex.Value = 0;
  local_2d0.Number = 0;
  bVar6 = false;
  bVar8 = false;
  FVar24 = *(FName *)FVar17;
  FVar23 = FVar24.ComparisonIndex.Value;
  uVar14 = FVar24.Number;
  if ((FVar23.Value == 0) && (uVar14 == 0)) {
LAB_144c5ed44:
    bVar7 = false;
    FVar24 = local_2d0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2e8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2e8[0]._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2d8.ComparisonIndex.Value = FVar23.Value;
        local_2d8.Number = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2d8,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\LightSceneInfo.cpp"
                   ,0x13f);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_144c5ed44;
    local_2e0.s.LowPart = FVar23.Value;
    local_2e0.s.HighPart = uVar14;
    FThreadStats::AddMessage(FVar24,CycleScopeStart);
    bVar7 = true;
  }
  cVar10 = (**(code **)(this->Proxy->_padding_ + 0x40))();
  if (cVar10 == '\0') {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Proxy->IsLocalLight()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\LightSceneInfo.cpp"
                        ,0x141,L"");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      uVar12 = (*pcVar5)();
      return (bool)uVar12;
    }
  }
  pFVar4 = this->Proxy;
  uVar3 = pFVar4->LightType;
  (**(code **)(pFVar4->_padding_ + 0x78))(pFVar4,&local_298);
  if ((*(uint *)(param_1->_padding_ + 0x50) & 0x800000) != 0) {
    uVar14 = GetShadowQuality();
    if ((uVar14 != 0) && (uVar3 == '\x02')) {
      pFVar18 = TArrayView<FVisibleLightInfo_const_,int>::operator[](param_2,this->Id);
      if (0 < (pFVar18->AllProjectedShadows).ArrayNum) {
        pFVar18 = TArrayView<FVisibleLightInfo_const_,int>::operator[](param_2,this->Id);
        iVar15 = (pFVar18->AllProjectedShadows).ArrayNum;
        uVar25 = iVar15 - 1;
        uVar14 = 0;
        if ((int)uVar25 < iVar15) {
          uVar14 = ~uVar25 >> 0x1f;
        }
        if (uVar14 == 0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar5 = (code *)swi(3);
            uVar12 = (*pcVar5)();
            return (bool)uVar12;
          }
        }
        if ((pFVar18->AllProjectedShadows).AllocatorInstance.Data
            [(longlong)(pFVar18->AllProjectedShadows).ArrayNum + -1]->bAllocated != 0) {
          bVar11 = true;
          pFVar18 = TArrayView<FVisibleLightInfo_const_,int>::operator[](param_2,this->Id);
          iVar15 = (pFVar18->AllProjectedShadows).ArrayNum;
          uVar25 = iVar15 - 1;
          uVar14 = 0;
          if ((int)uVar25 < iVar15) {
            uVar14 = ~uVar25 >> 0x1f;
          }
          if (uVar14 == 0) {
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar13) {
              pcVar5 = (code *)swi(3);
              uVar12 = (*pcVar5)();
              return (bool)uVar12;
            }
          }
          this_00 = (pFVar18->AllProjectedShadows).AllocatorInstance.Data
                    [(longlong)(pFVar18->AllProjectedShadows).ArrayNum + -1];
          fVar26 = FProjectedShadowInfo::ComputeTransitionSize(this_00);
          fVar9 = __real_3f800000;
          fVar26 = __real_3f800000 / fVar26;
          if ((this_00->FadeAlphas).ArrayNum < 1) {
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar13) {
              pcVar5 = (code *)swi(3);
              uVar12 = (*pcVar5)();
              return (bool)uVar12;
            }
          }
          FVar19 = (this_00->FadeAlphas).AllocatorInstance.SecondaryData;
          if (FVar19 == (ForElementType<float>)0x0) {
            FVar19 = (ForElementType<float>)&this_00->FadeAlphas;
          }
          fVar2 = *(float *)FVar19;
          fVar27 = FProjectedShadowInfo::GetShaderReceiverDepthBias(this_00);
          (param_3->SpotLightShadowSharpenAndFadeFractionAndReceiverDepthBiasAndSoftTransitionScale)
          .field0_0x0._s_0.X = this->Proxy->ShadowSharpen * __real_40e00000 + fVar9;
          (param_3->SpotLightShadowSharpenAndFadeFractionAndReceiverDepthBiasAndSoftTransitionScale)
          .field0_0x0._s_0.Y = fVar2;
          (param_3->SpotLightShadowSharpenAndFadeFractionAndReceiverDepthBiasAndSoftTransitionScale)
          .field0_0x0._s_0.Z = fVar27;
          (param_3->SpotLightShadowSharpenAndFadeFractionAndReceiverDepthBiasAndSoftTransitionScale)
          .field0_0x0._s_0.W = fVar26;
          FProjectedShadowInfo::GetWorldToShadowMatrix
                    (this_00,&local_108,&param_3->SpotLightShadowmapMinMax,(TIntPoint<int> *)0x0);
          local_208.M[1][0] = ___xmm_3ff00000000000000000000000000000;
          local_208.M[1][1] = _UNK_15061cbc8;
          local_208.M[0][2] = 0.0;
          local_208.M[0][3] = 0.0;
          local_208.M[1][2] = 0.0;
          local_208.M[1][3] = 0.0;
          local_208.M[2][0] = 0.0;
          local_208.M[2][1] = 0.0;
          local_208.M[3][0] = local_298;
          local_208.M[3][1] = dStack_290;
          local_208.M[3][2] = local_288;
          local_208.M[3][3] = __real_3ff0000000000000;
          local_208.M[0][0] = ___xmm_00000000000000003ff0000000000000;
          local_208.M[0][1] = _UNK_150689518;
          local_208.M[2][2] = ___xmm_00000000000000003ff0000000000000;
          local_208.M[2][3] = _UNK_150689518;
          VectorMatrixMultiply(&local_188,&local_208,&local_108);
          *(ulonglong *)(param_3->SpotLightShadowWorldToShadowMatrix).M[0] =
               CONCAT44((float)local_188.M[0][1],(float)local_188.M[0][0]);
          *(ulonglong *)((param_3->SpotLightShadowWorldToShadowMatrix).M[0] + 2) =
               CONCAT44((float)local_188.M[0][3],(float)local_188.M[0][2]);
          (param_3->SpotLightShadowWorldToShadowMatrix).M[1][0] = (float)local_188.M[1][0];
          (param_3->SpotLightShadowWorldToShadowMatrix).M[1][1] = (float)local_188.M[1][1];
          (param_3->SpotLightShadowWorldToShadowMatrix).M[1][2] = (float)local_188.M[1][2];
          (param_3->SpotLightShadowWorldToShadowMatrix).M[1][3] = (float)local_188.M[1][3];
          (param_3->SpotLightShadowWorldToShadowMatrix).M[2][0] = (float)local_188.M[2][0];
          (param_3->SpotLightShadowWorldToShadowMatrix).M[2][1] = (float)local_188.M[2][1];
          (param_3->SpotLightShadowWorldToShadowMatrix).M[2][2] = (float)local_188.M[2][2];
          (param_3->SpotLightShadowWorldToShadowMatrix).M[2][3] = (float)local_188.M[2][3];
          *(ulonglong *)(param_3->SpotLightShadowWorldToShadowMatrix).M[3] =
               CONCAT44((float)local_188.M[3][1],(float)local_188.M[3][0]);
          *(ulonglong *)((param_3->SpotLightShadowWorldToShadowMatrix).M[3] + 2) =
               CONCAT44((float)local_188.M[3][3],(float)local_188.M[3][2]);
          if ((this_00->VirtualShadowMapPerLightCacheEntry).Object ==
              (FVirtualShadowMapPerLightCacheEntry *)0x0) {
            pIVar22 = (this_00->RenderTargets).DepthTarget;
            if (pIVar22 == (IPooledRenderTarget *)0x0) {
              if ((this_00->RenderTargets).ColorTargets.ArrayNum < 1) {
                bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ColorTargets.Num() > 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowRendering.h"
                                    ,0xe3,L"");
                if (bVar13) {
                  pcVar5 = (code *)swi(3);
                  uVar12 = (*pcVar5)();
                  return (bool)uVar12;
                }
              }
              if ((this_00->RenderTargets).ColorTargets.ArrayNum < 1) {
                bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar13) {
                  pcVar5 = (code *)swi(3);
                  uVar12 = (*pcVar5)();
                  return (bool)uVar12;
                }
              }
              pIVar22 = *(this_00->RenderTargets).ColorTargets.AllocatorInstance.Data;
            }
            lVar20 = (**(code **)(pIVar22->_padding_ + 0x10))();
            uVar21 = *(undefined8 *)(lVar20 + 0x2c);
            iVar15 = (int)((ulonglong)uVar21 >> 0x20);
          }
          else {
            iVar15 = 0x4000;
            uVar21 = 0x4000;
          }
          (param_3->LocalLightShadowBufferSize).field0_0x0._s_0.X = (float)(int)uVar21;
          (param_3->LocalLightShadowBufferSize).field0_0x0._s_0.Y = (float)iVar15;
          (param_3->LocalLightShadowBufferSize).field0_0x0._s_0.Z = fVar9 / (float)(int)uVar21;
          (param_3->LocalLightShadowBufferSize).field0_0x0._s_0.W = fVar9 / (float)iVar15;
          param_3->LocalLightShadowTexture =
               (((this_00->RenderTargets).DepthTarget)->RenderTargetItem).TargetableTexture.
               Reference;
          param_3->LocalLightShadowSampler =
               TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource.StateRHI.Reference;
          param_1 = local_2c0;
          goto LAB_144c5f167;
        }
      }
    }
  }
  bVar11 = false;
LAB_144c5f167:
  uVar14 = GetShadowedBits((FSceneView *)param_1,this,false);
  param_3->ShadowedBits = uVar14;
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar24 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_2b8.NameAndInfo.Index = FVar24.ComparisonIndex.Value;
      local_2b8.NameAndInfo.Number = FVar24.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_2e0);
      local_2b8.StatData.Pad[4] = '\0';
      local_2b8.StatData.Pad[5] = '\0';
      local_2b8.StatData.Pad[6] = '\0';
      local_2b8.StatData.Pad[7] = '\0';
      local_2b8.StatData.Pad[0] = local_2e0.s.LowPart._0_1_;
      local_2b8.StatData.Pad[1] = local_2e0.s.LowPart._1_1_;
      local_2b8.StatData.Pad[2] = local_2e0.s.LowPart._2_1_;
      local_2b8.StatData.Pad[3] = local_2e0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_2b8);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return bVar11;
}

// ShouldCreateLightPrimitiveInteraction @ 144c5fe50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

bool __thiscall
FLightSceneInfo::ShouldCreateLightPrimitiveInteraction
          (FLightSceneInfo *this,FLightSceneInfoCompact *param_1,FPrimitiveSceneInfoCompact *param_2
          )

{
  bool bVar1;
  FShouldCreateResult *pFVar2;
  FShouldCreateResult local_res20;
  TVector<double>_u_0 local_48;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  
  local_48._s_0.X = (param_2->Bounds).Origin.field0_0x0._s_0.X;
  local_48._s_0.Y = (param_2->Bounds).Origin.field0_0x0._s_0.Y;
  local_48._s_0.Z = (param_2->Bounds).Origin.field0_0x0._s_0.Z;
  local_30 = (double)(param_2->Bounds).BoxExtent.field0_0x0._s_0.X;
  local_28 = (double)(param_2->Bounds).BoxExtent.field0_0x0._s_0.Y;
  local_20 = (double)(param_2->Bounds).BoxExtent.field0_0x0._s_0.Z;
  local_18 = (double)(param_2->Bounds).SphereRadius;
  bVar1 = FLightSceneInfoCompact::AffectsPrimitive
                    (param_1,(TBoxSphereBounds<double,double> *)&local_48._s_0,param_2->Proxy);
  if (bVar1) {
    pFVar2 = FLightPrimitiveInteraction::ShouldCreate(&local_res20,this,param_2->PrimitiveSceneInfo)
    ;
    return pFVar2->bShouldCreate;
  }
  return false;
}

// ShouldRecordShadowSubjectsForMobile @ 144c602d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

bool __thiscall FLightSceneInfo::ShouldRecordShadowSubjectsForMobile(FLightSceneInfo *this)

{
  undefined1 *puVar1;
  uint uVar2;
  FLightSceneProxy *pFVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  bool bVar12;
  char cVar13;
  IConsoleManager *pIVar14;
  longlong *plVar15;
  TConsoleVariableData<int> *pTVar16;
  TConsoleVariableData<int> *pTVar17;
  
  bVar6 = FReadOnlyCVARCache::bMobileEnableMovableLightCSMShaderCulling;
  bVar5 = FReadOnlyCVARCache::bMobileEnableStaticAndCSMShadowReceivers;
  if (this->Proxy == (FLightSceneProxy *)0x0) {
    return false;
  }
  pTVar17 = (TConsoleVariableData<int> *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar14 = IConsoleManager::Get();
    plVar15 = (longlong *)
              (**(code **)((longlong)*pIVar14 + 0xc0))
                        (pIVar14,L"r.Mobile.Shadow.CSMShaderCullingMethod",1);
    pTVar16 = pTVar17;
    if (plVar15 != (longlong *)0x0) {
      pTVar16 = (TConsoleVariableData<int> *)(**(code **)(*plVar15 + 0x68))(plVar15);
    }
    CVarMobileCSMShaderCullingMethod = pTVar16;
    _Init_thread_footer(&::_TSS0);
  }
  pTVar16 = CVarMobileCSMShaderCullingMethod;
  bVar12 = IsInParallelGameThread();
  if ((!bVar12) && (bVar12 = IsInGameThread(), !bVar12)) {
    pTVar17 = (TConsoleVariableData<int> *)&DAT_00000004;
  }
  uVar2 = *(uint *)((longlong)pTVar16->ShadowedValue + (longlong)pTVar17->ShadowedValue);
  pFVar3 = this->Proxy;
  if (pFVar3->bMovable != '\0') {
    bVar12 = ShouldRenderLightViewIndependent(this);
    if ((pFVar3->bStaticShadowing == '\x01' && pFVar3->bCastDynamicShadow == '\x01') &&
       (((this->bPrecomputedLightingIsValid == 0 ||
         (GWholeSceneShadowUnbuiltInteractionThreshold <= this->NumUnbuiltInteractions)) &&
        (pFVar3->bStaticShadowing != '\0')))) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (((bVar12) && (pFVar3->bCastDynamicShadow != '\0')) &&
       ((pFVar3->bStaticLighting == '\0' || (bVar4)))) {
      bVar12 = true;
      goto LAB_144c603bf;
    }
  }
  bVar12 = false;
LAB_144c603bf:
  if ((bVar5) && (cVar13 = (**(code **)(pFVar3->_padding_ + 0xb0))(), cVar13 != '\0')) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if ((bVar6) && (bVar12)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if (((uVar2 & 0xf) - 2 < 2) && ((bVar5 || (bVar6)))) {
    return true;
  }
  return false;
}

// ShouldRenderLight @ 144c60500

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

bool __thiscall
FLightSceneInfo::ShouldRenderLight(FLightSceneInfo *this,FViewInfo *param_1,bool param_2)

{
  int iVar1;
  ELightComponentType EVar2;
  FLightSceneProxy *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  
  if (this->bVisible == 0) {
LAB_144c605ee:
    bVar6 = false;
  }
  else {
    uVar10 = this->Id;
    iVar1 = (param_1->VisibleLightInfos).ArrayNum;
    if (param_2) {
      uVar9 = 0;
      if ((int)uVar10 < iVar1) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      uVar10 = *(uint *)&(param_1->VisibleLightInfos).AllocatorInstance.Data[(int)uVar10].field_0x30
               >> 1;
    }
    else {
      uVar9 = 0;
      if ((int)uVar10 < iVar1) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      uVar10 = *(uint *)&(param_1->VisibleLightInfos).AllocatorInstance.Data[(int)uVar10].field_0x30
      ;
    }
    if ((uVar10 & 1) == 0) goto LAB_144c605ee;
    bVar6 = true;
  }
  EVar2 = this->Type;
  bVar5 = bVar6;
  if (EVar2 == LightType_Directional) {
    bVar8 = *(byte *)(param_1->_padding_ + 0x4c) & 2;
  }
  else {
    if (EVar2 == LightType_Point) {
      bVar5 = false;
      if ((*(byte *)(param_1->_padding_ + 0x4c) & 4) != 0) {
        bVar5 = bVar6;
      }
      goto LAB_144c6065a;
    }
    if (EVar2 == LightType_NumBits) {
      bVar5 = false;
      if ((*(byte *)(param_1->_padding_ + 0x4c) & 8) != 0) {
        bVar5 = bVar6;
      }
      goto LAB_144c6065a;
    }
    if (EVar2 != LightType_Rect) goto LAB_144c6065a;
    bVar8 = *(byte *)(param_1->_padding_ + 0x4c) & 0x10;
  }
  if (bVar8 == 0) {
    return false;
  }
LAB_144c6065a:
  if (bVar5) {
    pFVar3 = this->Proxy;
    if (*(char *)((longlong)&param_1->_padding_ + 2) != '\0') {
      if (GTestMobilityForStaticSceneMembership == 0) {
        bVar8 = (byte)pFVar3->field_0x1d8 >> 3;
      }
      else {
        bVar8 = ~pFVar3->bMovable;
      }
      if ((bVar8 & 1) == 0) {
        return false;
      }
    }
    if (((pFVar3->ViewLightingChannelMask & *(byte *)((longlong)&param_1->_padding_ + 1)) != 0) &&
       ((((pFVar3->LightingChannelMask & 1) != 0 || (param_1->bUsesLightingChannels != 0)) ||
        (param_2)))) {
      return true;
    }
  }
  return false;
}

// ShouldRenderLightViewIndependent @ 144c607c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

bool __thiscall FLightSceneInfo::ShouldRenderLightViewIndependent(FLightSceneInfo *this)

{
  float fVar1;
  FLightSceneProxy *pFVar2;
  
  pFVar2 = this->Proxy;
  fVar1 = (pFVar2->Color).field0_0x0._s_0.R;
  if ((((__real_3727c5ac <= fVar1 * fVar1) ||
       (fVar1 = (pFVar2->Color).field0_0x0._s_0.G, __real_3727c5ac <= fVar1 * fVar1)) ||
      (fVar1 = (pFVar2->Color).field0_0x0._s_0.B, __real_3727c5ac <= fVar1 * fVar1)) &&
     ((pFVar2->bStaticLighting == '\0' ||
      (((this->bPrecomputedLightingIsValid == 0 ||
        (GWholeSceneShadowUnbuiltInteractionThreshold <= this->NumUnbuiltInteractions)) &&
       (pFVar2->bStaticShadowing != '\0')))))) {
    return true;
  }
  return false;
}

// ShouldRenderViewIndependentWholeSceneShadows @ 144c60c40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

bool __thiscall FLightSceneInfo::ShouldRenderViewIndependentWholeSceneShadows(FLightSceneInfo *this)

{
  undefined1 *puVar1;
  bool bVar2;
  bool bVar3;
  
  bVar3 = ShouldRenderLightViewIndependent(this);
  if ((this->Proxy->bStaticShadowing == '\x01' && this->Proxy->bCastDynamicShadow == '\x01') &&
     (((this->bPrecomputedLightingIsValid == 0 ||
       (GWholeSceneShadowUnbuiltInteractionThreshold <= this->NumUnbuiltInteractions)) &&
      (this->Proxy->bStaticShadowing != '\0')))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (((bVar3) && (this->Proxy->bCastDynamicShadow != '\0')) &&
     ((this->Proxy->bStaticLighting == '\0' || (bVar2)))) {
    return true;
  }
  return false;
}

