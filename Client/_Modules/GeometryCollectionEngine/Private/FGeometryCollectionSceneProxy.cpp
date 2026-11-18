// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 19

// FGeometryCollectionSceneProxy @ 1463a20b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FGeometryCollectionSceneProxy * __thiscall
FGeometryCollectionSceneProxy::FGeometryCollectionSceneProxy
          (FGeometryCollectionSceneProxy *this,UGeometryCollectionComponent *param_1)

{
  float fVar1;
  float fVar2;
  UGeometryCollection *pUVar3;
  FGeometryCollection *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  undefined8 uVar7;
  FColor FVar8;
  undefined4 extraout_var;
  undefined8 *puVar10;
  float fVar11;
  byte *pbVar9;
  
  FPrimitiveSceneProxy::FPrimitiveSceneProxy
            ((FPrimitiveSceneProxy *)this,(UPrimitiveComponent *)param_1,(FName)0x0);
  FGeometryCollectionSceneProxyBase::FGeometryCollectionSceneProxyBase
            ((FGeometryCollectionSceneProxyBase *)&this->field_0x280,param_1,false);
  *(undefined ***)this = &_vftable__for__FPrimitiveSceneProxy__;
  (this->GeometryCollection).Object = (FGeometryCollection *)0x0;
  *(undefined ***)&this->field_0x280 = &_vftable__for__FGeometryCollectionSceneProxyBase__;
  (this->GeometryCollection).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FCollisionResponseContainer::FCollisionResponseContainer(&this->CollisionResponse);
  this->bRenderResourcesCreated = false;
  pUVar3 = (param_1->RestCollection).field0_0x0.DebugPtr;
  if (pUVar3 != (UGeometryCollection *)0x0) {
    pFVar4 = (pUVar3->GeometryCollection).Object;
    pTVar5 = (pUVar3->GeometryCollection).SharedReferenceCount.ReferenceController;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = (this->GeometryCollection).SharedReferenceCount.ReferenceController;
    (this->GeometryCollection).Object = pFVar4;
    (this->GeometryCollection).SharedReferenceCount.ReferenceController = pTVar5;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  FPrimitiveSceneProxy::EnableGPUSceneSupportFlags((FPrimitiveSceneProxy *)this);
  this->field_0x82 = this->field_0x82 | 0x80;
  FVar8 = UMeshComponent::GetWireframeColorForSceneProxy((UMeshComponent *)param_1);
  pbVar9 = (byte *)CONCAT44(extraout_var,FVar8.field0_0x0);
  fVar1 = FLinearColor::sRGBToLinearTable[pbVar9[1]];
  fVar2 = FLinearColor::sRGBToLinearTable[*pbVar9];
  fVar11 = (float)pbVar9[3] * __real_3b808081;
  *(float *)&this->field_0x30 = FLinearColor::sRGBToLinearTable[pbVar9[2]];
  *(float *)&this->field_0x34 = fVar1;
  *(float *)&this->field_0x38 = fVar2;
  *(float *)&this->field_0x3c = fVar11;
  puVar10 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x5c8))(param_1);
  uVar7 = puVar10[1];
  *(undefined8 *)&(this->CollisionResponse).field0_0x0 = *puVar10;
  *(undefined8 *)((longlong)&(this->CollisionResponse).field0_0x0 + 8) = uVar7;
  uVar7 = puVar10[3];
  *(undefined8 *)((longlong)&(this->CollisionResponse).field0_0x0 + 0x10) = puVar10[2];
  *(undefined8 *)((longlong)&(this->CollisionResponse).field0_0x0 + 0x18) = uVar7;
  return this;
}

// ~FGeometryCollectionSceneProxy @ 1463a5680

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
FGeometryCollectionSceneProxy::~FGeometryCollectionSceneProxy(FGeometryCollectionSceneProxy *this)

{
  *(undefined ***)this = &_vftable__for__FPrimitiveSceneProxy__;
  *(undefined ***)&this->field_0x280 = &_vftable__for__FGeometryCollectionSceneProxyBase__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->GeometryCollection).SharedReferenceCount.ReferenceController);
  FGeometryCollectionSceneProxyBase::~FGeometryCollectionSceneProxyBase
            ((FGeometryCollectionSceneProxyBase *)&this->field_0x280);
  FPrimitiveSceneProxy::~FPrimitiveSceneProxy((FPrimitiveSceneProxy *)this);
  return;
}

// AllowInstanceCullingOcclusionQueries @ 1463aa350

bool __thiscall
FGeometryCollectionSceneProxy::AllowInstanceCullingOcclusionQueries
          (FGeometryCollectionSceneProxy *this)

{
  return true;
}

// CreateRenderThreadResources @ 1463af2f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGeometryCollectionSceneProxy::CreateRenderThreadResources
          (FGeometryCollectionSceneProxy *this,FRHICommandListBase *param_1)

{
  FGeometryCollectionSceneProxyBase::CreateRenderThreadResources
            ((FGeometryCollectionSceneProxyBase *)&this->field_0x280,param_1);
  this->bRenderResourcesCreated = true;
  FGeometryCollectionSceneProxyBase::SetDynamicData_RenderThread
            ((FGeometryCollectionSceneProxyBase *)&this->field_0x280,param_1,
             *(FGeometryCollectionDynamicData **)&this->field_0x568);
  if ((((*(int *)&this->field_0x298 != 0) && (*(longlong *)&this->field_0x568 != 0)) &&
      (this->bRenderResourcesCreated != false)) && (this->field_0x548 != '\0')) {
    FGeometryCollectionSceneProxyBase::GetCurrentTransformBuffer
              ((FGeometryCollectionSceneProxyBase *)&this->field_0x280);
    FGeometryCollectionSceneProxyBase::GetCurrentPrevTransformBuffer
              ((FGeometryCollectionSceneProxyBase *)&this->field_0x280);
  }
  return;
}

// DestroyRenderThreadResources @ 1463b0420

void __thiscall
FGeometryCollectionSceneProxy::DestroyRenderThreadResources(FGeometryCollectionSceneProxy *this)

{
  FGeometryCollectionSceneProxyBase::DestroyRenderThreadResources
            ((FGeometryCollectionSceneProxyBase *)&this->field_0x280);
  return;
}

// GetAllocatedSize @ 1463b2bf0

uint __thiscall FGeometryCollectionSceneProxy::GetAllocatedSize(FGeometryCollectionSceneProxy *this)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)&this->field_0x104;
  uVar2 = FGeometryCollectionSceneProxyBase::GetAllocatedSize
                    ((FGeometryCollectionSceneProxyBase *)&this->field_0x280);
  return uVar2 + iVar1 * 4;
}

// GetDynamicMeshElements @ 1463b3610

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGeometryCollectionSceneProxy::GetDynamicMeshElements
          (FGeometryCollectionSceneProxy *this,
          TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,FSceneViewFamily *param_2,
          uint param_3,FMeshElementCollector *param_4)

{
  undefined1 *puVar1;
  byte bVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  FNameEntryId FVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FGeometryCollectionSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_GeometryCollectionSceneProxy_GetDynamicMeshElements>
  FVar16;
  longlong lVar17;
  UMaterial *pUVar18;
  ForElementType<FMaterialRenderProxy_*> FVar19;
  FMaterialRenderProxy *pFVar20;
  FColoredMaterialRenderProxy *pFVar21;
  undefined4 extraout_var;
  FPrimitiveDrawInterface *pFVar22;
  byte bVar23;
  ForElementType<FMeshBatchElement> FVar24;
  ForElementType<FMeshBatchElement> FVar25;
  uint uVar26;
  longlong lVar27;
  undefined1 auStackY_2b8 [32];
  FName local_248;
  uint local_240;
  uint local_23c;
  longlong local_238;
  FColor_u_0 local_230;
  FColor local_22c;
  longlong local_228;
  FSceneViewFamily *local_220;
  FName local_218;
  TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *local_210;
  FNameEntryId local_208;
  uint uStack_204;
  FName local_200;
  undefined1 local_1f0 [4];
  FName local_1ec;
  FName local_1e4;
  FLinearColor_u_0 local_1dc;
  FLinearColor_u_0 local_1cc;
  undefined1 local_1b8 [256];
  ForElementType<FMaterialRenderProxy_*> local_b8;
  int local_b0;
  int local_ac;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  local_220 = param_2;
  local_210 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_GeometryCollectionSceneProxy_GetDynamicMeshElements ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FGeometryCollectionSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_GeometryCollectionSceneProxy_GetDynamicMeshElements>
         )0x0) {
      pFVar15 = ::FName::FName(&local_1ec,"STAT_GeometryCollectionSceneProxy_GetDynamicMeshElements"
                              );
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_GeometryCollectionSceneProxy_GetDynamicMeshElements,*pFVar15,
                 L"STAT_GeometryCollectionSceneProxy_GetDynamicMeshElements","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar16 = StatPtr_STAT_GeometryCollectionSceneProxy_GetDynamicMeshElements;
  if (StatPtr_STAT_GeometryCollectionSceneProxy_GetDynamicMeshElements ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FGeometryCollectionSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_GeometryCollectionSceneProxy_GetDynamicMeshElements>
       )0x0) {
    pFVar15 = ::FName::FName(&local_1e4,"STAT_GeometryCollectionSceneProxy_GetDynamicMeshElements");
    FVar16 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FGeometryCollectionSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_GeometryCollectionSceneProxy_GetDynamicMeshElements>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_GeometryCollectionSceneProxy_GetDynamicMeshElements,*pFVar15
                          ,L"STAT_GeometryCollectionSceneProxy_GetDynamicMeshElements",
                          "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                          false,MCR_Invalid);
  }
  local_248 = *(FName *)FVar16;
  bVar5 = false;
  bVar6 = false;
  local_200.ComparisonIndex.Value = 0;
  local_200.Number = 0;
  bVar8 = false;
  bVar9 = false;
  if ((local_248.ComparisonIndex.Value.Value != 0) || (local_248.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_230.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_230._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar5 = false;
      bVar6 = true;
      bVar8 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_218.ComparisonIndex.Value = local_248.ComparisonIndex.Value.Value;
        local_218.Number = local_248.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_218,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionSceneProxy.cpp"
                   ,0x3db);
        bVar5 = true;
        bVar6 = true;
        bVar8 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(local_248,CycleScopeStart);
      bVar8 = true;
      goto LAB_1463b37c2;
    }
  }
  bVar6 = bVar9;
  bVar5 = bVar8;
  bVar8 = false;
  local_248 = local_200;
LAB_1463b37c2:
  if (*(int *)&this->field_0x298 != 0) {
    bVar9 = AllowDebugViewmodes();
    if ((!bVar9) || (local_240 = 0x40, (param_2->EngineShowFlags).Wireframe == 0)) {
      local_240 = 0;
    }
    bVar23 = this->field_0x79 & 6;
    if (((param_2->EngineShowFlags).Collision == 0) ||
       (bVar9 = true, (this->field_0x7b & 0x20) == 0)) {
      bVar9 = false;
    }
    if (((param_2->EngineShowFlags).CollisionVisibility == 0 &&
         (param_2->EngineShowFlags).CollisionPawn == 0) &&
       (local_23c = 0, param_2 = local_220, 0 < param_1->ArrayNum)) {
      do {
        if ((param_3 >> (local_23c & 0x1f) & 1) != 0) {
          iVar12 = *(int *)&this->field_0x2a8;
          uVar26 = 0;
          local_b8 = (ForElementType<FMaterialRenderProxy_*>)0x0;
          local_b0 = 0;
          local_ac = 0x20;
          if (0 < iVar12) {
            lVar27 = 0;
            do {
              uVar11 = 0;
              if ((int)uVar26 < iVar12) {
                uVar11 = ~uVar26 >> 0x1f;
              }
              if ((uVar11 == 0) &&
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
              bVar2 = *(byte *)(*(longlong *)&this->field_0x2a0 + 2 + lVar27);
              if ((int)(uint)bVar2 < *(int *)&this->field_0x558) {
                if ((*(int *)&this->field_0x558 <= (int)(uint)bVar2) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                lVar17 = (**(code **)(**(longlong **)
                                        (*(longlong *)&this->field_0x550 + (ulonglong)bVar2 * 8) +
                                     0x310))();
                if (lVar17 == 0) goto LAB_1463b3936;
              }
              else {
LAB_1463b3936:
                pUVar18 = UMaterial::GetDefaultMaterial(MD_Surface);
                lVar17 = (**(code **)(pUVar18->_padding_ + 0x310))(pUVar18);
              }
              FVar19 = (ForElementType<FMaterialRenderProxy_*>)local_1b8;
              if (local_b8 != (ForElementType<FMaterialRenderProxy_*>)0x0) {
                FVar19 = local_b8;
              }
              local_238 = lVar17;
              if ((ulonglong)FVar19 <= &local_238) {
                FVar19 = (ForElementType<FMaterialRenderProxy_*>)local_1b8;
                if (local_b8 != (ForElementType<FMaterialRenderProxy_*>)0x0) {
                  FVar19 = local_b8;
                }
                if ((&local_238 < (longlong *)((longlong)FVar19 + (longlong)local_ac * 8)) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar10)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
              if (local_b0 == local_ac) {
                local_b0 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FMaterialRenderProxy_*>_>
                                     (0x808,(ForElementType<FMaterialRenderProxy_*> *)local_1b8,
                                      &local_ac);
              }
              FVar19 = (ForElementType<FMaterialRenderProxy_*>)local_1b8;
              if (local_b8 != (ForElementType<FMaterialRenderProxy_*>)0x0) {
                FVar19 = local_b8;
              }
              lVar17 = (longlong)local_b0;
              uVar26 = uVar26 + 1;
              lVar27 = lVar27 + 0x14;
              local_b0 = local_b0 + 1;
              *(longlong *)((longlong)FVar19 + lVar17 * 8) = local_238;
              iVar12 = *(int *)&this->field_0x2a8;
            } while ((int)uVar26 < iVar12);
          }
          uVar26 = 0;
          local_228 = 0;
          if (0 < iVar12) {
            lVar27 = 0;
            do {
              uVar11 = 0;
              if ((int)uVar26 < iVar12) {
                uVar11 = ~uVar26 >> 0x1f;
              }
              if ((uVar11 == 0) &&
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
              lVar17 = *(longlong *)&this->field_0x2a0;
              iVar12 = TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
                       ::Add(&param_4->MeshBatchStorage,1);
              uVar11 = iVar12 / 0x49;
              uVar13 = 0;
              if ((int)uVar11 < (param_4->MeshBatchStorage).Chunks.Array.ArrayNum) {
                uVar13 = ~uVar11 >> 0x1f;
              }
              if ((uVar13 == 0) &&
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
              lVar7 = local_228;
              FVar25 = (ForElementType<FMeshBatchElement>)
                       ((longlong)
                        (param_4->MeshBatchStorage).Chunks.Array.AllocatorInstance.Data[(int)uVar11]
                       + (ulonglong)(uint)(iVar12 % 0x49) * 0xe0);
              *(uint *)((longlong)FVar25 + 0xd4) = *(uint *)((longlong)FVar25 + 0xd4) & 0xffffffbf;
              *(uint *)((longlong)FVar25 + 0xd4) = *(uint *)((longlong)FVar25 + 0xd4) | local_240;
              *(undefined1 **)((longlong)FVar25 + 0xa8) = &this->field_0x310;
              uVar11 = 0;
              if ((int)uVar26 < local_b0) {
                uVar11 = ~uVar26 >> 0x1f;
              }
              if ((uVar11 == 0) &&
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
              FVar19 = (ForElementType<FMaterialRenderProxy_*>)local_1b8;
              if (local_b8 != (ForElementType<FMaterialRenderProxy_*>)0x0) {
                FVar19 = local_b8;
              }
              *(FMaterialRenderProxy **)((longlong)FVar25 + 0xb0) =
                   *(FMaterialRenderProxy **)((longlong)FVar19 + lVar7 * 8);
              *(uint *)((longlong)FVar25 + 0xd4) =
                   ((byte)this->field_0x78 & 1 ^ *(uint *)((longlong)FVar25 + 0xd4) & 0xfffffffe) &
                   0xffffe07f | 0x2000;
              if ((((bVar23 != 0) && ((local_220->EngineShowFlags).VertexColors != 0)) &&
                  (bVar10 = AllowDebugViewmodes(), bVar10)) &&
                 (pFVar20 = MeshPaintVisualize::GetMaterialRenderProxy
                                      (bVar23 != 0,(bool)((byte)this->field_0x79 >> 4 & 1)),
                 pFVar20 != (FMaterialRenderProxy *)0x0)) {
                FMeshElementCollector::RegisterOneFrameMaterialProxy(param_4,pFVar20);
                *(FMaterialRenderProxy **)((longlong)FVar25 + 0xb0) = pFVar20;
              }
              if ((*(int *)((longlong)FVar25 + 0xa0) < 1) &&
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
              FVar24 = FVar25;
              if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar25 + 0x98) !=
                  (ForElementType<FMeshBatchElement>)0x0) {
                FVar24 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar25 + 0x98);
              }
              *(undefined8 *)((longlong)FVar24 + 0x18) = *(undefined8 *)&this->field_0x290;
              *(undefined8 *)FVar24 = *(undefined8 *)&this->field_0x258;
              *(int *)((longlong)FVar24 + 0x58) = *(int *)(lVar27 + 4 + lVar17) * 3;
              *(undefined4 *)((longlong)FVar24 + 0x5c) = *(undefined4 *)(lVar27 + 8 + lVar17);
              *(undefined4 *)((longlong)FVar24 + 0x68) = *(undefined4 *)(lVar27 + 0xc + lVar17);
              *(undefined4 *)((longlong)FVar24 + 0x6c) = *(undefined4 *)(lVar27 + 0x10 + lVar17);
              FMeshElementCollector::AddMesh(param_4,local_23c,(FMeshBatch *)FVar25);
              iVar12 = *(int *)&this->field_0x2a8;
              local_228 = lVar7 + 1;
              uVar26 = uVar26 + 1;
              lVar27 = lVar27 + 0x14;
            } while ((int)uVar26 < iVar12);
          }
          param_1 = local_210;
          if (local_b8 != (ForElementType<FMaterialRenderProxy_*>)0x0) {
            FMemory::Free((void *)local_b8);
            param_1 = local_210;
          }
        }
        local_23c = local_23c + 1;
        param_2 = local_220;
      } while ((int)local_23c < param_1->ArrayNum);
    }
    uVar26 = 0;
    if (0 < param_1->ArrayNum) {
      do {
        if ((param_3 >> (uVar26 & 0x1f) & 1) != 0) {
          if ((((this->field_0x7b & 0x20) != 0) &&
              (((((param_2->EngineShowFlags).CollisionPawn != 0 &&
                 ((this->CollisionResponse).field0_0x0._s_0.Pawn != '\0')) ||
                (((param_2->EngineShowFlags).CollisionVisibility != 0 &&
                 ((this->CollisionResponse).field0_0x0._s_0.Visibility != '\0')))) ||
               ((param_2->EngineShowFlags).Collision != 0)))) &&
             (((this->GeometryCollection).Object != (FGeometryCollection *)0x0 &&
              (bVar10 = AllowDebugViewmodes(), bVar10)))) {
            UE::Math::TTransform<double>::SetFromMatrix
                      (&local_a8,(TMatrix<double> *)&this->field_0x110);
            if (bVar9) {
              local_1dc._0_8_ = *(undefined8 *)&this->field_0x30;
              local_1dc._8_8_ = *(undefined8 *)&this->field_0x38;
              FLinearColor::ToFColorSRGB((FLinearColor *)&local_1dc._s_0);
              if (((this->GeometryCollection).Object == (FGeometryCollection *)0x0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x44d,L""), bVar10)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              GeometryCollectionDebugDraw::DrawWireframe
                        ((this->GeometryCollection).Object,&local_a8,param_4,uVar26,&local_22c);
            }
            else {
              pFVar21 = ::operator_new(0xe0);
              if (pFVar21 == (FColoredMaterialRenderProxy *)0x0) {
                pFVar21 = (FColoredMaterialRenderProxy *)0x0;
              }
              else {
                FVar14 = FNameEntryId::FromValidEName((EName)local_1f0);
                local_1cc._s_0.R = (float)*(undefined4 *)&this->field_0x30;
                local_1cc._s_0.G = (float)*(undefined4 *)&this->field_0x34;
                local_1cc._s_0.B = (float)*(undefined4 *)&this->field_0x38;
                local_1cc._s_0.A = (float)*(undefined4 *)&this->field_0x3c;
                uStack_204 = 0;
                local_208.Value = *(uint *)CONCAT44(extraout_var,FVar14.Value);
                pFVar20 = (FMaterialRenderProxy *)
                          (**(code **)(((GEngine->ShadedLevelColorationUnlitMaterial).field0_0x0.
                                       DebugPtr)->_padding_ + 0x310))();
                FVar4.Number = uStack_204;
                FVar4.ComparisonIndex.Value = local_208.Value;
                pFVar21 = FColoredMaterialRenderProxy::FColoredMaterialRenderProxy
                                    (pFVar21,pFVar20,(FLinearColor *)&local_1cc._s_0,FVar4);
              }
              FMeshElementCollector::RegisterOneFrameMaterialProxy
                        (param_4,(FMaterialRenderProxy *)pFVar21);
              if (((this->GeometryCollection).Object == (FGeometryCollection *)0x0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x44d,L""), bVar10)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              GeometryCollectionDebugDraw::DrawSolid
                        ((this->GeometryCollection).Object,&local_a8,param_4,uVar26,
                         (FMaterialRenderProxy *)pFVar21);
            }
          }
          bVar23 = this->field_0x79;
          pFVar22 = FMeshElementCollector::GetPDI(param_4,uVar26);
          FPrimitiveSceneProxy::RenderBounds
                    ((FPrimitiveSceneProxy *)this,pFVar22,&param_2->EngineShowFlags,
                     (TBoxSphereBounds<double,double> *)&this->field_0x190,(bVar23 & 6) != 0);
        }
        uVar26 = uVar26 + 1;
      } while ((int)uVar26 < param_1->ArrayNum);
    }
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar8) {
    FThreadStats::AddMessage(local_248,CycleScopeEnd);
  }
  return;
}

// GetDynamicRayTracingInstances @ 1463b45f0

void __thiscall
FGeometryCollectionSceneProxy::GetDynamicRayTracingInstances
          (FGeometryCollectionSceneProxy *this,FRayTracingInstanceCollector *param_1)

{
  FGeometryCollectionSceneProxyBase::GetDynamicRayTracingInstances
            ((FGeometryCollectionSceneProxyBase *)&this->field_0x280,param_1,
             (TMatrix<double> *)&this->field_0x110,*(FRHIUniformBuffer **)&this->field_0x258,
             (bool)((byte)this->field_0x82 >> 2 & 1));
  return;
}

// GetMaterial @ 1463b6100

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FMaterialRenderProxy * __thiscall
FGeometryCollectionSceneProxy::GetMaterial
          (FGeometryCollectionSceneProxy *this,FMeshElementCollector *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMaterialRenderProxy *pFVar4;
  UMaterial *pUVar5;
  
  if ((-1 < param_2) && (param_2 < *(int *)&this->field_0x558)) {
    uVar3 = 0;
    if (param_2 < *(int *)&this->field_0x558) {
      uVar3 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMaterialRenderProxy *)(*pcVar1)();
      return pFVar4;
    }
    pFVar4 = (FMaterialRenderProxy *)
             (**(code **)(**(longlong **)(*(longlong *)&this->field_0x550 + (longlong)param_2 * 8) +
                         0x310))();
    if (pFVar4 != (FMaterialRenderProxy *)0x0) {
      return pFVar4;
    }
  }
  pUVar5 = UMaterial::GetDefaultMaterial(MD_Surface);
  pFVar4 = (FMaterialRenderProxy *)(**(code **)(pUVar5->_padding_ + 0x310))(pUVar5);
  return pFVar4;
}

// GetMemoryFootprint @ 1463b61d0

uint __thiscall
FGeometryCollectionSceneProxy::GetMemoryFootprint(FGeometryCollectionSceneProxy *this)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)&this->field_0x104;
  uVar2 = FGeometryCollectionSceneProxyBase::GetAllocatedSize
                    ((FGeometryCollectionSceneProxyBase *)&this->field_0x280);
  return uVar2 + iVar1 * 4 + 0x810;
}

// GetPreSkinnedLocalBounds @ 1463b72e0

void __thiscall
FGeometryCollectionSceneProxy::GetPreSkinnedLocalBounds
          (FGeometryCollectionSceneProxy *this,TBoxSphereBounds<double,double> *param_1)

{
  double dVar1;
  
  dVar1 = *(double *)&this->field_0x2e0;
  (param_1->Origin).field0_0x0._s_0.X = *(double *)&this->field_0x2d8;
  (param_1->Origin).field0_0x0._s_0.Y = dVar1;
  dVar1 = *(double *)&this->field_0x2f0;
  (param_1->Origin).field0_0x0._s_0.Z = *(double *)&this->field_0x2e8;
  (param_1->BoxExtent).field0_0x0._s_0.X = dVar1;
  dVar1 = *(double *)&this->field_0x300;
  (param_1->BoxExtent).field0_0x0._s_0.Y = *(double *)&this->field_0x2f8;
  (param_1->BoxExtent).field0_0x0._s_0.Z = dVar1;
  param_1->SphereRadius = *(double *)&this->field_0x308;
  return;
}

// GetTypeHash @ 1463b8d50

ulong64 __thiscall FGeometryCollectionSceneProxy::GetTypeHash(FGeometryCollectionSceneProxy *this)

{
  return 0x1551abf88;
}

// GetVertexFactory @ 1463b8d90

FVertexFactory * __thiscall
FGeometryCollectionSceneProxy::GetVertexFactory(FGeometryCollectionSceneProxy *this)

{
  return (FVertexFactory *)&this->field_0x310;
}

// GetViewRelevance @ 1463b8de0

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
FGeometryCollectionSceneProxy::GetViewRelevance
          (FGeometryCollectionSceneProxy *this,FPrimitiveViewRelevance *__return_storage_ptr__,
          FSceneView *param_1)

{
  byte *pbVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  __return_storage_ptr__->bRenderInMainPass = 1;
  bVar2 = FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bDrawRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar2 << 2;
  bVar2 = FPrimitiveSceneProxy::IsShadowCast((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bShadowRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar2 << 3 | 2;
  uVar3 = ((uint)(byte)this->field_0x7b << 4 ^ *(uint *)&__return_storage_ptr__->field_0x8) & 0x80 ^
          *(uint *)&__return_storage_ptr__->field_0x8;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar3;
  uVar4 = 0;
  if (this->field_0x89 != '\x01') {
    uVar4 = 0x2000;
  }
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar4 | uVar3 & 0xffffdfff;
  bVar2 = FPrimitiveSceneProxy::ShouldRenderCustomDepth((FPrimitiveSceneProxy *)this);
  __return_storage_ptr__->bRenderCustomDepth = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar2 << 5;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 ^
       ((uint)(byte)this->field_0x7f << 0xe ^ *(uint *)&__return_storage_ptr__->field_0x8) & 0x4000;
  FMaterialRelevance::SetPrimitiveViewRelevance
            ((FMaterialRelevance *)&this->field_0x2d0,__return_storage_ptr__);
  if (((((this->field_0x68 == '\x02') || (this->field_0x68 == '\x01')) ||
       ((this->field_0x86 & 1) != 0)) ||
      (((char)this->field_0x82 < '\0' || (uVar4 = 0, (this->field_0x82 & 0x72) != 0)))) &&
     ((uVar4 = 0, (__return_storage_ptr__->_padding_ & 0x400000000) != 0 &&
      (__return_storage_ptr__->bRenderInMainPass != 0)))) {
    uVar4 = 0x10;
  }
  __return_storage_ptr__->bVelocityRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 = *(uint *)&__return_storage_ptr__->field_0x8 | uVar4;
  return __return_storage_ptr__;
}

// HasRayTracingRepresentation @ 1463b9110

bool __thiscall
FGeometryCollectionSceneProxy::HasRayTracingRepresentation(FGeometryCollectionSceneProxy *this)

{
  return (bool)this->field_0x680;
}

// IsRayTracingRelevant @ 1463bcb20

bool __thiscall
FGeometryCollectionSceneProxy::IsRayTracingRelevant(FGeometryCollectionSceneProxy *this)

{
  return true;
}

// IsRayTracingStaticRelevant @ 1463bcb40

bool __thiscall
FGeometryCollectionSceneProxy::IsRayTracingStaticRelevant(FGeometryCollectionSceneProxy *this)

{
  return false;
}

// SetDynamicData_RenderThread @ 1463c8860

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGeometryCollectionSceneProxy::SetDynamicData_RenderThread
          (FGeometryCollectionSceneProxy *this,FRHICommandListBase *param_1,
          FGeometryCollectionDynamicData *param_2)

{
  FGeometryCollectionSceneProxyBase::SetDynamicData_RenderThread
            ((FGeometryCollectionSceneProxyBase *)&this->field_0x280,param_1,param_2);
  if ((((*(int *)&this->field_0x298 != 0) && (*(longlong *)&this->field_0x568 != 0)) &&
      (this->bRenderResourcesCreated != false)) && (this->field_0x548 != '\0')) {
    FGeometryCollectionSceneProxyBase::GetCurrentTransformBuffer
              ((FGeometryCollectionSceneProxyBase *)&this->field_0x280);
    FGeometryCollectionSceneProxyBase::GetCurrentPrevTransformBuffer
              ((FGeometryCollectionSceneProxyBase *)&this->field_0x280);
  }
  return;
}

// ShowCollisionMeshes @ 1463c9af0

bool __thiscall
FGeometryCollectionSceneProxy::ShowCollisionMeshes
          (FGeometryCollectionSceneProxy *this,FEngineShowFlags *param_1)

{
  undefined1 *puVar1;
  
  if ((this->field_0x7b & 0x20) == 0) {
    return false;
  }
  if (((param_1->CollisionPawn == 0) || ((this->CollisionResponse).field0_0x0._s_0.Pawn == '\0')) &&
     ((param_1->CollisionVisibility == 0 ||
      ((this->CollisionResponse).field0_0x0._s_0.Visibility == '\0')))) {
    return param_1->Collision;
  }
  return true;
}

