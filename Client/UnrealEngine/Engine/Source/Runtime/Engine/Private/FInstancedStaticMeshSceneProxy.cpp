// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 37

// FInstancedStaticMeshSceneProxy @ 147cc53d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FInstancedStaticMeshSceneProxy * __thiscall
FInstancedStaticMeshSceneProxy::FInstancedStaticMeshSceneProxy
          (FInstancedStaticMeshSceneProxy *this,FInstancedStaticMeshSceneProxyDesc *param_1,
          Type param_2)

{
  UStaticMesh *this_00;
  TReferenceControllerBase<1> *pTVar1;
  
  FStaticMeshSceneProxy::FStaticMeshSceneProxy
            ((FStaticMeshSceneProxy *)this,(FStaticMeshSceneProxyDesc *)param_1,true);
  this->bAnySegmentUsesWorldPositionOffset = false;
  this->bUseGpuLodSelection = false;
  *(undefined ***)this = &___7FInstancedStaticMeshSceneProxy__6B_;
  this->StaticMesh = (UStaticMesh *)param_1->_padding_;
  FInstancedStaticMeshRenderData::FInstancedStaticMeshRenderData
            (&this->InstancedRenderData,param_1,param_2);
  this_00 = this->StaticMesh;
  this->InstanceLODDistanceScale = param_1->InstanceLODDistanceScale;
  (this->RayTracingDynamicInstanceData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RayTracingDynamicInstanceData).ArrayNum = 0;
  (this->RayTracingDynamicInstanceData).ArrayMax = 0;
  this->CachedRayTracingLODIndex = -1;
  UStaticMesh::GetBounds(this_00,&this->StaticMeshBounds);
  *(undefined8 *)&this->LODLooseUniformBuffers = 0;
  *(undefined8 *)&(this->LODLooseUniformBuffers).field_0x8 = 0;
  *(undefined8 *)&(this->LODLooseUniformBuffers).field_0x20 = 0;
  *(undefined4 *)&(this->LODLooseUniformBuffers).field_0x28 = 0;
  *(undefined4 *)&(this->LODLooseUniformBuffers).field_0x2c = 0x80;
  *(undefined4 *)&(this->LODLooseUniformBuffers).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LODLooseUniformBuffers).field_0x34 = 0;
  *(undefined8 *)&(this->LODLooseUniformBuffers).field_0x40 = 0;
  *(undefined4 *)&(this->LODLooseUniformBuffers).field_0x48 = 0;
  this->RayTracingLooseUniformBuffer =
       (TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>)0x0;
  (this->InstanceDataSceneProxy).Object = (param_1->InstanceDataSceneProxy).Object;
  pTVar1 = (param_1->InstanceDataSceneProxy).SharedReferenceCount.ReferenceController;
  (this->InstanceDataSceneProxy).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SetupProxy(this,param_1);
  return this;
}

// FInstancedStaticMeshSceneProxy @ 147cc54f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FInstancedStaticMeshSceneProxy * __thiscall
FInstancedStaticMeshSceneProxy::FInstancedStaticMeshSceneProxy
          (FInstancedStaticMeshSceneProxy *this,UInstancedStaticMeshComponent *param_1,Type param_2)

{
  UStaticMesh *this_00;
  code *pcVar1;
  bool bVar2;
  FInstancedStaticMeshSceneProxy *pFVar3;
  FSharedReferencer<1> local_1d0;
  FInstancedStaticMeshSceneProxyDesc local_1c8;
  
  memset(&local_1c8,0,0x1b8);
  FStaticMeshSceneProxyDesc::FStaticMeshSceneProxyDesc((FStaticMeshSceneProxyDesc *)&local_1c8);
  local_1c8.InstanceLODDistanceScale = 1.0;
  local_1c8.InstanceDataSceneProxy.Object = (FInstanceDataSceneProxy *)0x0;
  local_1c8._padding_ = (longlong)&___7FInstancedStaticMeshSceneProxyDesc__6B_;
  local_1c8.InstanceDataSceneProxy.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_1c8.InstanceMinDrawDistance = 0;
  local_1c8.InstanceStartCullDistance = 0;
  local_1c8.InstanceEndCullDistance = 0;
  local_1c8.bUseGpuLodSelection = false;
  FStaticMeshSceneProxyDesc::InitializeFromStaticMeshComponent
            ((FStaticMeshSceneProxyDesc *)&local_1c8,(UStaticMeshComponent *)param_1);
  local_1d0.ReferenceController =
       (param_1->PrimitiveInstanceDataManager).Proxy.SharedReferenceCount.ReferenceController;
  local_1c8.InstanceDataSceneProxy.Object =
       (FInstanceDataSceneProxy *)(param_1->PrimitiveInstanceDataManager).Proxy.Object;
  if (local_1d0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1d0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_1d0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&local_1c8.InstanceDataSceneProxy.SharedReferenceCount,&local_1d0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d0.ReferenceController);
  if ((local_1c8._padding_ != 0) &&
     ((FISMCInstanceDataSceneProxy *)local_1c8.InstanceDataSceneProxy.Object ==
      (FISMCInstanceDataSceneProxy *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GetScene() || InstanceDataSceneProxy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                       ,0x5a3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FInstancedStaticMeshSceneProxy *)(*pcVar1)();
      return pFVar3;
    }
  }
  local_1c8.InstanceLODDistanceScale = param_1->InstanceLODDistanceScale;
  local_1c8.InstanceMinDrawDistance = param_1->InstanceMinDrawDistance;
  local_1c8.InstanceStartCullDistance = param_1->InstanceStartCullDistance;
  local_1c8.InstanceEndCullDistance = param_1->InstanceEndCullDistance;
  local_1c8.bUseGpuLodSelection = param_1->bUseGpuLodSelection;
  FStaticMeshSceneProxy::FStaticMeshSceneProxy
            ((FStaticMeshSceneProxy *)this,(FStaticMeshSceneProxyDesc *)&local_1c8,true);
  this->StaticMesh = (UStaticMesh *)local_1c8._padding_;
  *(undefined ***)this = &___7FInstancedStaticMeshSceneProxy__6B_;
  this->bAnySegmentUsesWorldPositionOffset = false;
  this->bUseGpuLodSelection = false;
  FInstancedStaticMeshRenderData::FInstancedStaticMeshRenderData
            (&this->InstancedRenderData,&local_1c8,param_2);
  this_00 = this->StaticMesh;
  this->InstanceLODDistanceScale = local_1c8.InstanceLODDistanceScale;
  (this->RayTracingDynamicInstanceData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RayTracingDynamicInstanceData).ArrayNum = 0;
  (this->RayTracingDynamicInstanceData).ArrayMax = 0;
  this->CachedRayTracingLODIndex = -1;
  UStaticMesh::GetBounds(this_00,&this->StaticMeshBounds);
  *(undefined8 *)&this->LODLooseUniformBuffers = 0;
  *(undefined8 *)&(this->LODLooseUniformBuffers).field_0x8 = 0;
  *(undefined8 *)&(this->LODLooseUniformBuffers).field_0x20 = 0;
  *(undefined4 *)&(this->LODLooseUniformBuffers).field_0x28 = 0;
  *(undefined4 *)&(this->LODLooseUniformBuffers).field_0x2c = 0x80;
  *(undefined4 *)&(this->LODLooseUniformBuffers).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LODLooseUniformBuffers).field_0x34 = 0;
  *(undefined8 *)&(this->LODLooseUniformBuffers).field_0x40 = 0;
  *(undefined4 *)&(this->LODLooseUniformBuffers).field_0x48 = 0;
  (this->InstanceDataSceneProxy).Object = local_1c8.InstanceDataSceneProxy.Object;
  this->RayTracingLooseUniformBuffer =
       (TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>)0x0;
  (this->InstanceDataSceneProxy).SharedReferenceCount.ReferenceController =
       local_1c8.InstanceDataSceneProxy.SharedReferenceCount.ReferenceController;
  if (local_1c8.InstanceDataSceneProxy.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1c8.InstanceDataSceneProxy.SharedReferenceCount.ReferenceController)->
    SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1c8.InstanceDataSceneProxy.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  SetupProxy(this,&local_1c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c8.InstanceDataSceneProxy.SharedReferenceCount.ReferenceController);
  FStaticMeshSceneProxyDesc::~FStaticMeshSceneProxyDesc((FStaticMeshSceneProxyDesc *)&local_1c8);
  *(undefined ***)this = &___7FInstancedStaticMeshSceneProxy__6B_;
  return this;
}

// ~FInstancedStaticMeshSceneProxy @ 147cc8b00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FInstancedStaticMeshSceneProxy::~FInstancedStaticMeshSceneProxy
          (FInstancedStaticMeshSceneProxy *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined ***)this = &___7FInstancedStaticMeshSceneProxy__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InstanceDataSceneProxy).SharedReferenceCount.ReferenceController);
  if (this->RayTracingLooseUniformBuffer !=
      (TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>)0x0) {
    FRHIResource::Release((FRHIResource *)this->RayTracingLooseUniformBuffer);
  }
  *(undefined4 *)&(this->LODLooseUniformBuffers).field_0x48 = 0;
  pvVar1 = *(void **)&(this->LODLooseUniformBuffers).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LODLooseUniformBuffers);
  DestructItems<FInstancedStaticMeshSceneProxy::FRayTracingDynamicInstanceData,int>
            ((FRayTracingDynamicInstanceData *)
             (this->RayTracingDynamicInstanceData).AllocatorInstance.Data,
             (this->RayTracingDynamicInstanceData).ArrayNum);
  pFVar2 = (this->RayTracingDynamicInstanceData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TIndirectArray<FInstancedStaticMeshVertexFactory,TSizedDefaultAllocator<32>_>::
  ~TIndirectArray<FInstancedStaticMeshVertexFactory,TSizedDefaultAllocator<32>_>
            (&(this->InstancedRenderData).RayTracingProxyVertexFactories);
  TIndirectArray<FInstancedStaticMeshVertexFactory,TSizedDefaultAllocator<32>_>::
  ~TIndirectArray<FInstancedStaticMeshVertexFactory,TSizedDefaultAllocator<32>_>
            (&(this->InstancedRenderData).VertexFactories);
  FStaticMeshSceneProxy::~FStaticMeshSceneProxy((FStaticMeshSceneProxy *)this);
  return;
}

// CanSetupInstancedMeshBatch @ 147ce4000

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FInstancedStaticMeshSceneProxy::CanSetupInstancedMeshBatch
          (FInstancedStaticMeshSceneProxy *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 *puVar5;
  
  if ((*(int *)&(this->LODLooseUniformBuffers).field_0x8 -
       *(int *)&(this->LODLooseUniformBuffers).field_0x34 !=
       (this->InstancedRenderData).VertexFactories.Array.ArrayNum) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("LODLooseUniformBuffers.Num() == InstancedRenderData.VertexFactories.Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                         ,0x63c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if (*(int *)&(this->LODLooseUniformBuffers).field_0x8 !=
      *(int *)&(this->LODLooseUniformBuffers).field_0x34) {
    puVar5 = *(undefined1 **)&(this->LODLooseUniformBuffers).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->LODLooseUniformBuffers).field_0x38;
    }
    iVar4 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->LODLooseUniformBuffers).field_0x48 - 1U & param_1) *
                              4);
    if (iVar4 != -1) {
      do {
        if (*(int *)(*(longlong *)&this->LODLooseUniformBuffers + (longlong)iVar4 * 0x18) == param_1
           ) {
          if ((this->InstancedRenderData).VertexFactories.Array.ArrayNum <= param_1) {
            return false;
          }
          return true;
        }
        iVar4 = *(int *)(*(longlong *)&this->LODLooseUniformBuffers + 0x10 + (longlong)iVar4 * 0x18)
        ;
      } while (iVar4 != -1);
    }
  }
  return false;
}

// CanSetupRayTracingInstancedMeshBatch @ 147ce40d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FInstancedStaticMeshSceneProxy::CanSetupRayTracingInstancedMeshBatch
          (FInstancedStaticMeshSceneProxy *this,int param_1)

{
  return param_1 < (this->InstancedRenderData).RayTracingProxyVertexFactories.Array.ArrayNum;
}

// CreateHitProxies @ 147ce8ae0

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

HHitProxy * __thiscall
FInstancedStaticMeshSceneProxy::CreateHitProxies
          (FInstancedStaticMeshSceneProxy *this,IPrimitiveComponent *param_1,
          TArray<TRefCountPtr<HHitProxy>,TSizedDefaultAllocator<32>_> *param_2)

{
  HHitProxy *pHVar1;
  
  if ((this->field_0x85 & 0x40) != 0) {
    return (HHitProxy *)0x0;
  }
  pHVar1 = FPrimitiveSceneProxy::CreateHitProxies((FPrimitiveSceneProxy *)this,param_1,param_2);
  return pHVar1;
}

// CreateHitProxies @ 147ce8b00

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

HHitProxy * __thiscall
FInstancedStaticMeshSceneProxy::CreateHitProxies
          (FInstancedStaticMeshSceneProxy *this,UPrimitiveComponent *param_1,
          TArray<TRefCountPtr<HHitProxy>,TSizedDefaultAllocator<32>_> *param_2)

{
  HHitProxy *pHVar1;
  
  if ((this->field_0x85 & 0x40) != 0) {
    return (HHitProxy *)0x0;
  }
  pHVar1 = FPrimitiveSceneProxy::CreateHitProxies
                     ((FPrimitiveSceneProxy *)this,
                      (IPrimitiveComponent *)&param_1->PrimitiveComponentInterface,param_2);
  return pHVar1;
}

// CreateLooseUniformBuffer @ 147ce8b70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters> __thiscall
FInstancedStaticMeshSceneProxy::CreateLooseUniformBuffer
          (FInstancedStaticMeshSceneProxy *this,FSceneView *param_1,FInstancingUserData *param_2,
          uint param_3,uint param_4,EUniformBufferUsage param_5)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  FRHIResource *this_00;
  code *pcVar4;
  double dVar5;
  double dVar6;
  FInstancedStaticMeshRenderData *pFVar7;
  FStaticMeshRenderData *pFVar8;
  undefined8 uVar9;
  TConsoleVariableData<float> *pTVar10;
  TConsoleVariableData<int> *pTVar11;
  bool bVar12;
  uint uVar13;
  TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters> TVar14;
  FCachedSystemScalabilityCVars *pFVar15;
  TVector<double> *pTVar16;
  FInstancedStaticMeshVFLooseUniformShaderParameters *pFVar17;
  FInstancedStaticMeshVFLooseUniformShaderParameters *pFVar18;
  int iVar19;
  longlong lVar20;
  undefined4 in_register_0000008c;
  int iVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  double dVar26;
  undefined1 auVar27 [16];
  double dVar31;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar32;
  undefined1 auVar33 [16];
  double dVar36;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar37;
  undefined1 auVar38 [16];
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  double dVar44;
  float fVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  EUniformBufferValidation in_stack_00000038;
  float local_318;
  undefined8 local_308;
  ulonglong uStack_300;
  FLLMScope local_2f8 [2];
  undefined1 local_2f0 [12];
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  undefined8 local_2d8;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  TVector4<float>_u_0 TStack_2c0;
  undefined1 auStack_2b0 [16];
  FMemScope local_2a0;
  bool local_298 [8];
  undefined1 *local_290;
  TVector4<float>_u_0 local_288;
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  undefined8 local_268;
  undefined8 uStack_260;
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  undefined8 local_238;
  ulonglong uStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  undefined1 local_210 [16];
  double local_200;
  double local_1f8;
  TTransform<double> local_1e8;
  TMatrix<double> local_188;
  TVector<double> local_108;
  TVector<double> local_f0 [7];
  
  lVar20 = CONCAT44(in_register_0000008c,param_3);
  fVar41 = 0.0;
  fVar42 = 0.0;
  fVar43 = 0.0;
  fStack_24c = 0.0;
  local_2c8 = ___xmm_000000007f7fffff0080000000800000;
  uStack_2c4 = _UNK_1518ecda4;
  TStack_2c0._s_0.X = _UNK_1518ecda8;
  TStack_2c0._s_0.Y = _UNK_1518ecdac;
  TStack_2c0._8_8_ = 0;
  auStack_2b0._0_8_ = 0;
  fStack_2e4 = _UNK_150689644;
  local_2f0._8_4_ = ___xmm_3f800000000000000000000000000000;
  fStack_2dc = _UNK_15068964c;
  fStack_2e0 = _UNK_150689648;
  fVar22 = __real_7f7fffff;
  fVar23 = __real_00800000;
  fVar32 = __real_3f800000;
  fStack_274 = _UNK_1518ecda4;
  fVar40 = ___xmm_3f800000000000000000000000000000;
  fVar25 = _UNK_150689644;
  fVar39 = _UNK_150689648;
  fStack_23c = _UNK_15068964c;
  if ((lVar20 == 0) || (param_4 == 0)) goto LAB_147ce92ad;
  if ((param_2 == (FInstancingUserData *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("View",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                          ,0x508,L""), bVar12)) {
    pcVar4 = (code *)swi(3);
    TVar14 = (TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>)(*pcVar4)();
    return TVar14;
  }
  pTVar11 = CVarMinLOD.Ref;
  iVar2 = *(int *)(lVar20 + 0x20);
  iVar19 = *(int *)(*(longlong *)(lVar20 + 8) + 8) + -1;
  bVar12 = IsInParallelRenderingThread();
  if ((!bVar12) &&
     (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar12)) {
    pcVar4 = (code *)swi(3);
    TVar14 = (TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>)(*pcVar4)();
    return TVar14;
  }
  if (pTVar11->ShadowedValue[1] < iVar19) {
    iVar19 = pTVar11->ShadowedValue[1];
  }
  iVar21 = iVar2;
  if ((-1 < iVar19) && (iVar21 = iVar19, iVar19 < iVar2)) {
    iVar21 = iVar2;
  }
  local_1e8.Scale3D.XY.m128d_f64[0] = *(double *)(lVar20 + 0x28);
  local_1e8.Scale3D.XY.m128d_f64[1] = *(double *)(lVar20 + 0x30);
  lVar3 = *(longlong *)(lVar20 + 8);
  local_1e8.Rotation.ZW.m128d_f64[0] = UE::Math::TQuat<double>::Identity.Z;
  local_1e8.Rotation.ZW.m128d_f64[1] = UE::Math::TQuat<double>::Identity.W;
  local_1e8.Rotation.XY.m128d_f64[0] = UE::Math::TQuat<double>::Identity.X;
  local_1e8.Rotation.XY.m128d_f64[1] = UE::Math::TQuat<double>::Identity.Y;
  local_1e8.Translation.XY.m128d_f64[0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_1e8.Translation.XY.m128d_f64[1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_1e8.Translation.ZW.m128d_f64[0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_1e8.Translation.ZW.m128d_f64[1] = 0.0;
  local_1e8.Scale3D.ZW.m128d_f64[0] = *(double *)(lVar20 + 0x38);
  local_1e8.Scale3D.ZW.m128d_f64[1] = 0.0;
  UE::Math::TTransform<double>::ToMatrixWithScale(&local_1e8,&local_188);
  pTVar10 = CVarFoliageMinimumScreenSize.Ref;
  auVar48 = *(undefined1 (*) [16])(lVar3 + 0x68);
  auVar47 = *(undefined1 (*) [16])(lVar3 + 0x50);
  dVar26 = *(double *)(lVar3 + 0x78);
  dVar1 = *(double *)(lVar3 + 0x60);
  dVar37 = auVar48._0_8_;
  auVar27._8_4_ = auVar48._0_4_;
  auVar27._0_8_ = dVar37;
  auVar27._12_4_ = auVar48._4_4_;
  dVar44 = auVar47._8_8_;
  dVar5 = auVar47._0_8_;
  dVar6 = auVar48._8_8_;
  dVar31 = auVar27._8_8_ * local_188.M[0][1];
  auVar33._8_4_ = SUB84(dVar26,0);
  auVar33._0_8_ = dVar26;
  auVar33._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
  dVar36 = auVar33._8_8_ * local_188.M[2][1];
  auVar28._0_8_ =
       (double)CONCAT44((uint)((ulonglong)(dVar37 * local_188.M[0][0]) >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar37 * local_188.M[0][0],0) &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar28._8_4_ = SUB84(dVar31,0) & _UNK_15061cc88;
  auVar28._12_4_ = (uint)((ulonglong)dVar31 >> 0x20) & _UNK_15061cc8c;
  auVar34._0_8_ =
       (double)CONCAT44((uint)((ulonglong)(dVar26 * local_188.M[2][0]) >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar26 * local_188.M[2][0],0) &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar34._8_4_ = SUB84(dVar36,0) & _UNK_15061cc88;
  auVar34._12_4_ = (uint)((ulonglong)dVar36 >> 0x20) & _UNK_15061cc8c;
  auVar38._8_4_ = auVar47._8_4_;
  auVar38._0_8_ = dVar44;
  auVar38._12_4_ = auVar47._12_4_;
  auVar29._8_4_ = auVar47._0_4_;
  auVar29._0_8_ = dVar5;
  auVar29._12_4_ = auVar47._4_4_;
  dVar31 = (double)CONCAT44((uint)((ulonglong)(dVar6 * local_188.M[1][0]) >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar6 * local_188.M[1][0],0) &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff) + auVar28._0_8_ +
           auVar34._0_8_;
  dVar36 = (double)CONCAT44((uint)((ulonglong)(dVar6 * local_188.M[1][1]) >> 0x20) & _UNK_15061cc8c,
                            SUB84(dVar6 * local_188.M[1][1],0) & _UNK_15061cc88) + auVar28._8_8_ +
           auVar34._8_8_;
  auVar35._8_4_ = SUB84(dVar1,0);
  auVar35._0_8_ = dVar1;
  auVar35._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  local_228 = dVar44 * local_188.M[1][0] + dVar5 * local_188.M[0][0] + dVar1 * local_188.M[2][0] +
              local_188.M[3][0];
  dStack_220 = auVar38._8_8_ * local_188.M[1][1] + auVar29._8_8_ * local_188.M[0][1] +
               auVar35._8_8_ * local_188.M[2][1] + local_188.M[3][1];
  local_218 = dVar44 * local_188.M[1][2] + dVar5 * local_188.M[0][2] + dVar1 * local_188.M[2][2] +
              local_188.M[3][2];
  local_200 = (double)CONCAT44((uint)((ulonglong)(dVar6 * local_188.M[1][2]) >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar6 * local_188.M[1][2],0) &
                               (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
              (double)CONCAT44((uint)((ulonglong)(dVar37 * local_188.M[0][2]) >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar37 * local_188.M[0][2],0) &
                               (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
              (double)CONCAT44((uint)((ulonglong)(dVar26 * local_188.M[2][2]) >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar26 * local_188.M[2][2],0) &
                               (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  local_210._8_4_ = SUB84(dVar36,0);
  local_210._0_8_ = dVar31;
  local_210._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
  auVar46._0_8_ =
       local_188.M[1][0] * local_188.M[1][0] + local_188.M[0][0] * local_188.M[0][0] +
       local_188.M[2][0] * local_188.M[2][0];
  auVar46._8_8_ =
       local_188.M[1][1] * local_188.M[1][1] + local_188.M[0][1] * local_188.M[0][1] +
       local_188.M[2][1] * local_188.M[2][1];
  auVar47._8_4_ = SUB84(auVar46._8_8_,0);
  auVar47._0_8_ = auVar46._0_8_;
  auVar47._12_4_ = (int)((ulonglong)auVar46._8_8_ >> 0x20);
  auVar30._8_8_ = auVar46._8_8_;
  auVar30._0_8_ = auVar47._8_8_;
  auVar47 = maxpd(auVar46,auVar30);
  dVar26 = local_188.M[1][2] * local_188.M[1][2] + local_188.M[0][2] * local_188.M[0][2] +
           local_188.M[2][2] * local_188.M[2][2];
  auVar48._8_4_ = SUB84(dVar26,0);
  auVar48._0_8_ = dVar26;
  auVar48._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
  auVar48 = maxpd(auVar47,auVar48);
  local_1f8 = SQRT(local_200 * local_200 + dVar31 * dVar31 + dVar36 * dVar36);
  dVar26 = SQRT(auVar48._0_8_) * *(double *)(lVar3 + 0x80);
  if (dVar26 <= local_1f8) {
    local_1f8 = dVar26;
  }
  fVar40 = (float)local_1f8;
  if (__real_3ff0000000000000 < (double)param_2[0xc].MeshRenderData ||
      __real_3ff0000000000000 == (double)param_2[0xc].MeshRenderData) {
    fVar25 = 0.0;
  }
  else {
    bVar12 = IsInParallelRenderingThread();
    if ((!bVar12) &&
       (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar12)) {
      pcVar4 = (code *)swi(3);
      TVar14 = (TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>)(*pcVar4)();
      return TVar14;
    }
    fVar25 = pTVar10->ShadowedValue[1];
  }
  pTVar10 = CVarRandomLODRange.Ref;
  fVar39 = *(float *)(lVar20 + 0x1c);
  bVar12 = IsInParallelRenderingThread();
  if ((!bVar12) &&
     (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar12)) {
    pcVar4 = (code *)swi(3);
    TVar14 = (TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>)(*pcVar4)();
    return TVar14;
  }
  fVar32 = pTVar10->ShadowedValue[1];
  pFVar15 = GetCachedScalabilityCVars();
  fVar42 = __real_7f7fffff;
  fVar43 = pFVar15->ViewDistanceScale;
  TStack_2c0._s_0.Z = (float)__real_bf800000;
  if (param_5 == UniformBuffer_SingleDraw) {
    TStack_2c0._s_0.Z = (float)0;
  }
  auStack_2b0._0_4_ = 0x3f800000;
  TStack_2c0._s_0.W = (float)((uint)TStack_2c0._s_0.Z ^ __xmm_80000000800000008000000080000000);
  fVar22 = __real_7f7fffff;
  if (0.0 < fVar25) {
    fVar22 = ComputeBoundsDrawDistance
                       (fVar25,fVar40,(TMatrix<double> *)&param_2[10].InstancingOffset);
    fVar22 = fVar22 * fVar39;
  }
  fVar41 = fVar22;
  if ((0.0 < (float)*(int *)(lVar20 + 0x18)) &&
     (fVar41 = (float)*(int *)(lVar20 + 0x18) * fVar43, fVar22 <= fVar41)) {
    fVar41 = fVar22;
  }
  fVar22 = fVar41;
  if ((int)param_5 < *(int *)(*(longlong *)(lVar20 + 8) + 8) + -1) {
    fVar23 = ComputeBoundsDrawDistance
                       (*(float *)(*(longlong *)(lVar20 + 8) + 0x20 +
                                  (ulonglong)(param_5 + UniformBuffer_SingleFrame) * 4),fVar40,
                        (TMatrix<double> *)&param_2[10].InstancingOffset);
    fVar22 = fVar23 * fVar39;
    if (fVar41 <= fVar23 * fVar39) {
      fVar22 = fVar41;
    }
  }
  fVar45 = fVar22;
  if (iVar21 < (int)param_5) {
    fVar24 = ComputeBoundsDrawDistance
                       (*(float *)(*(longlong *)(lVar20 + 8) + 0x20 + (ulonglong)param_5 * 4),fVar40
                        ,(TMatrix<double> *)&param_2[10].InstancingOffset);
    fVar45 = __real_00800000;
    fVar23 = fVar24 * fVar39;
    if (fVar41 <= fVar24 * fVar39) goto LAB_147ce90a2;
  }
  else {
LAB_147ce90a2:
    fVar22 = fVar45;
    fVar23 = __real_00800000;
  }
  fVar41 = __real_00800000;
  if (0.0 < fVar25) {
    fVar42 = ComputeBoundsDrawDistance
                       (fVar25,fVar40,(TMatrix<double> *)&param_2[10].InstancingOffset);
    fVar42 = fVar42 * fVar39;
  }
  fVar25 = fVar42;
  if ((0.0 < (float)*(int *)(lVar20 + 0x18)) &&
     (fVar25 = (float)*(int *)(lVar20 + 0x18) * fVar43, fVar42 <= fVar25)) {
    fVar25 = fVar42;
  }
  TStack_2c0._s_0.X = fVar25;
  if ((int)param_5 < *(int *)(*(longlong *)(lVar20 + 8) + 8) + -1) {
    fVar43 = ComputeBoundsDrawDistance
                       (*(float *)(*(longlong *)(lVar20 + 8) + 0x20 +
                                  (ulonglong)(param_5 + UniformBuffer_SingleFrame) * 4),fVar40,
                        (TMatrix<double> *)&param_2[10].InstancingOffset);
    TStack_2c0._s_0.X = fVar43 * fVar39;
    if (fVar25 <= fVar43 * fVar39) {
      TStack_2c0._s_0.X = fVar25;
    }
  }
  local_318 = fVar41;
  if (iVar21 < (int)param_5) {
    fVar40 = ComputeBoundsDrawDistance
                       (*(float *)(*(longlong *)(lVar20 + 8) + 0x20 + (ulonglong)param_5 * 4),fVar40
                        ,(TMatrix<double> *)&param_2[10].InstancingOffset);
    local_318 = fVar40 * fVar39;
    if (fVar25 <= fVar40 * fVar39) {
      TStack_2c0._s_0.X = 1.1754944e-38;
      local_318 = fVar41;
    }
  }
  pFVar7 = param_2[0x22].RenderData;
  pFVar8 = param_2[0x22].MeshRenderData;
  dVar26 = *(double *)&param_2[0x22].MinDrawDistance;
  pTVar16 = FSceneView::GetTemporalLODOrigin((FSceneView *)param_2,&local_108,0,true);
  fVar41 = (float)((double)pFVar7 + (pTVar16->field0_0x0)._s_0.X);
  fVar42 = (float)((double)pFVar8 + (pTVar16->field0_0x0)._s_0.Y);
  fVar43 = (float)(dVar26 + (pTVar16->field0_0x0)._s_0.Z);
  local_2d8 = dVar26;
  pTVar16 = FSceneView::GetTemporalLODOrigin((FSceneView *)param_2,local_f0,1,true);
  fVar40 = (float)((double)pFVar7 + (pTVar16->field0_0x0)._s_0.X);
  fVar39 = (float)(dVar26 + (pTVar16->field0_0x0)._s_0.Z);
  fVar25 = (float)((double)pFVar8 + (pTVar16->field0_0x0)._s_0.Y);
  fStack_23c = FSceneView::GetTemporalLODTransition((FSceneView *)param_2);
  fStack_24c = __real_3f800000 - fStack_23c;
  fStack_2e4 = fVar25;
  local_2f0._8_4_ = fVar40;
  fStack_2dc = fStack_23c;
  fStack_2e0 = fVar39;
  fStack_274 = local_318;
LAB_147ce92ad:
  uStack_300 = _UNK_1518ecdb8;
  uVar9 = ___xmm_3f8000003f800000000000007f7fffff;
  fVar45 = __real_3f800000;
  local_308 = ___xmm_3f8000003f800000000000007f7fffff;
  local_288._s_0.X = 1.1754944e-38;
  local_288._s_0.Y = fVar23;
  local_288._s_0.Z = fVar22;
  local_288._s_0.W = fVar32;
  local_278 = (float)local_2c8;
  fStack_270 = TStack_2c0._s_0.X;
  fStack_26c = TStack_2c0._s_0.Y;
  local_268 = TStack_2c0._8_8_;
  uStack_260 = auStack_2b0._0_8_;
  local_258 = fVar41;
  fStack_254 = fVar42;
  fStack_250 = fVar43;
  local_248 = fVar40;
  fStack_244 = fVar25;
  fStack_240 = fVar39;
  if (lVar20 != 0) {
    pFVar15 = GetCachedScalabilityCVars();
    pTVar11 = CVarCullAllInVertexShader.Ref;
    fVar32 = (float)*(int *)(lVar20 + 0x18) * pFVar15->ViewDistanceScale;
    fVar22 = (float)*(int *)(lVar20 + 0x14) * pFVar15->ViewDistanceScale;
    local_308 = CONCAT44((int)((ulonglong)uVar9 >> 0x20),fVar22);
    if (0.0 < fVar32) {
      if (fVar32 <= fVar22) {
        local_308 = CONCAT44(0x3f800000,fVar22);
      }
      else {
        local_308 = CONCAT44(fVar45 / (fVar32 - fVar22),fVar22);
      }
    }
    bVar12 = IsInParallelRenderingThread();
    if ((!bVar12) &&
       (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar12)) {
      pcVar4 = (code *)swi(3);
      TVar14 = (TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>)(*pcVar4)();
      return TVar14;
    }
    if (pTVar11->ShadowedValue[1] < 1) {
      if (*(char *)(lVar20 + 0x24) == '\0') {
        uStack_300 = uStack_300 & 0xffffffff00000000;
      }
      if (*(char *)(lVar20 + 0x25) == '\0') {
        uStack_300 = uStack_300 & 0xffffffff;
      }
    }
    else {
      uStack_300 = 0;
    }
  }
  local_238 = local_308;
  uStack_230 = uStack_300;
  bVar12 = IsInRenderingThread();
  if (!bVar12) {
    CreateUniformBufferImmediate<FInstancedStaticMeshVFLooseUniformShaderParameters>
              ((FInstancedStaticMeshVFLooseUniformShaderParameters *)param_1,
               (EUniformBufferUsage)&local_288,in_stack_00000038);
    return (TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>)param_1;
  }
  FLLMScope::FLLMScope(local_2f8,InstancedMesh,false,None,Default,true);
  FMemScope::FMemScope(&local_2a0,InstancedMesh,true);
  bVar12 = IsInRenderingThread();
  if ((!bVar12) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInRenderingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                          ,0x4e5,L""), bVar12)) {
    pcVar4 = (code *)swi(3);
    TVar14 = (TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>)(*pcVar4)();
    return TVar14;
  }
  uVar13 = ::GetTypeHash((FInstancedStaticMeshVFLooseUniformShaderParameters *)&local_288._s_0);
  if (GInstancedStaticMeshVFUniformsCache._40_4_ != GInstancedStaticMeshVFUniformsCache._84_4_) {
    lVar20 = 0x15520c658;
    if (GInstancedStaticMeshVFUniformsCache._96_8_ != 0) {
      lVar20 = GInstancedStaticMeshVFUniformsCache._96_8_;
    }
    fVar32 = *(float *)(lVar20 + (ulonglong)
                                 (GInstancedStaticMeshVFUniformsCache._104_4_ - 1 & uVar13) * 4);
    lVar20 = GInstancedStaticMeshVFUniformsCache._32_8_;
    while (fVar32 != -NAN) {
      pFVar18 = (FInstancedStaticMeshVFLooseUniformShaderParameters *)
                ((longlong)(int)fVar32 * 0x80 + lVar20);
      bVar12 = ::operator==(pFVar18,(FInstancedStaticMeshVFLooseUniformShaderParameters *)
                                    &local_288._s_0);
      if (bVar12) {
        pFVar17 = pFVar18 + 1;
        if (pFVar18 == (FInstancedStaticMeshVFLooseUniformShaderParameters *)0x0) {
          pFVar17 = (FInstancedStaticMeshVFLooseUniformShaderParameters *)0x0;
        }
        if (pFVar17 != (FInstancedStaticMeshVFLooseUniformShaderParameters *)0x0) {
          *(undefined8 *)param_1 = 0;
          this_00 = *(FRHIResource **)&(pFVar17->InstancingViewZCompareZero).field0_0x0;
          *(FRHIResource **)param_1 = this_00;
          if (this_00 != (FRHIResource *)0x0) {
            FRHIResource::AddRef(this_00);
          }
          goto LAB_147ce9536;
        }
        break;
      }
      fVar32 = pFVar18[1].InstancingViewZCompareOne.field0_0x0._s_0.X;
    }
  }
  CreateUniformBufferImmediate<FInstancedStaticMeshVFLooseUniformShaderParameters>
            ((FInstancedStaticMeshVFLooseUniformShaderParameters *)local_2f0,
             (EUniformBufferUsage)&local_288,in_stack_00000038);
  if (((int)(GInstancedStaticMeshVFUniformsCache._40_4_ - GInstancedStaticMeshVFUniformsCache._84_4_
            ) < 10) && (in_stack_00000038 == 2)) {
    local_298 = (bool  [8])&local_288;
    local_290 = local_2f0;
    TSet<TTuple<FInstancedStaticMeshVFLooseUniformShaderParameters,TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>_>,TDefaultMapHashableKeyFuncs<FInstancedStaticMeshVFLooseUniformShaderParameters,TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FInstancedStaticMeshVFLooseUniformShaderParameters_const_&,TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>_const_&>_>
              ((TSet<TTuple<FInstancedStaticMeshVFLooseUniformShaderParameters,TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>_>,TDefaultMapHashableKeyFuncs<FInstancedStaticMeshVFLooseUniformShaderParameters,TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>,0>,FDefaultSetAllocator>
                *)&GInstancedStaticMeshVFUniformsCache.field_0x20,
               (TPairInitializer<FInstancedStaticMeshVFLooseUniformShaderParameters_const_&,TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>_const_&>
                *)(auStack_2b0 + 8),local_298);
  }
  *(undefined8 *)param_1 = local_2f0._0_8_;
  local_2f0._0_8_ = 0;
LAB_147ce9536:
  FMemScope::~FMemScope(&local_2a0);
  FLLMScope::~FLLMScope(local_2f8);
  return (TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>)param_1;
}

// CreateRenderThreadResources @ 147ce9e80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FInstancedStaticMeshSceneProxy::CreateRenderThreadResources
          (FInstancedStaticMeshSceneProxy *this,FRHICommandListBase *param_1)

{
  TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters> this_00;
  code *pcVar1;
  bool bVar2;
  FStaticMeshInstanceBuffer *pFVar3;
  TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters> TVar4;
  EUniformBufferUsage EVar5;
  TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters> *pTVar6;
  uint uVar7;
  EUniformBufferUsage local_res8;
  TPairInitializer<unsigned_int_&&,TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>_const_&>
  local_res18;
  FRHIResource *local_48;
  FSceneViewFamily *local_40;
  FSceneViewStateInterface *local_38;
  
  if (((this->InstanceDataSceneProxy).Object == (FInstanceDataSceneProxy *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceDataSceneProxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                         ,0x647,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FStaticMeshSceneProxy::CreateRenderThreadResources((FStaticMeshSceneProxy *)this,param_1);
  if (((this->InstanceDataSceneProxy).Object == (FInstanceDataSceneProxy *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar3 = (FStaticMeshInstanceBuffer *)
           (**(code **)(((this->InstanceDataSceneProxy).Object)->_padding_ + 0x20))();
  FInstancedStaticMeshRenderData::BindBuffersToVertexFactories
            (&this->InstancedRenderData,param_1,pFVar3);
  EVar5 = UniformBuffer_SingleDraw;
  uVar7 = (int)this + 0xbe0;
  if (0 < *(int *)&this->field_0x290) {
    local_40 = (FSceneViewFamily *)&local_res8;
    local_38 = (FSceneViewStateInterface *)&local_res18.Value;
    do {
      CreateLooseUniformBuffer
                (this,(FSceneView *)&local_res18.Value,(FInstancingUserData *)0x0,uVar7,0,EVar5);
      local_res8 = EVar5;
      TSet<TTuple<unsigned_int,TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<unsigned_int_&&,TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>_const_&>_>
                ((TSet<TTuple<unsigned_int,TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>,0>,FDefaultSetAllocator>
                  *)&this->LODLooseUniformBuffers,&local_res18,(bool *)&local_40);
      if ((FRHIResource *)local_res18.Value != (FRHIResource *)0x0) {
        FRHIResource::Release((FRHIResource *)local_res18.Value);
      }
      EVar5 = EVar5 + UniformBuffer_SingleFrame;
    } while ((int)EVar5 < *(int *)&this->field_0x290);
  }
  TVar4 = CreateLooseUniformBuffer
                    (this,(FSceneView *)&local_48,(FInstancingUserData *)0x0,uVar7,0,
                     UniformBuffer_SingleDraw);
  pTVar6 = &this->RayTracingLooseUniformBuffer;
  if ((TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>)pTVar6 != TVar4) {
    this_00 = *pTVar6;
    *pTVar6 = *(TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters> *)TVar4;
    *(undefined8 *)TVar4 = 0;
    if (this_00 != (TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  if (local_48 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_48);
  }
  return;
}

// DestroyRenderThreadResources @ 147cede60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FInstancedStaticMeshSceneProxy::DestroyRenderThreadResources(FInstancedStaticMeshSceneProxy *this)

{
  FInstancedStaticMeshRenderData::ReleaseResources
            (&this->InstancedRenderData,*(FSceneInterface **)&this->field_0x220,this->StaticMesh);
  FStaticMeshSceneProxy::DestroyRenderThreadResources((FStaticMeshSceneProxy *)this);
  ReleaseRayTracingDynamicInstances(this);
  return;
}

// GetDistanceFieldAtlasData @ 147cfc8b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FInstancedStaticMeshSceneProxy::GetDistanceFieldAtlasData
          (FInstancedStaticMeshSceneProxy *this,FDistanceFieldVolumeData **param_1,float *param_2)

{
  *param_1 = *(FDistanceFieldVolumeData **)&this->field_0x2a8;
  *param_2 = *(float *)&this->field_0xb0;
  return;
}

// GetDynamicMeshElements @ 147d009c0

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
FInstancedStaticMeshSceneProxy::GetDynamicMeshElements
          (FInstancedStaticMeshSceneProxy *this,
          TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,FSceneViewFamily *param_2,
          uint param_3,FMeshElementCollector *param_4)

{
  int *piVar1;
  byte bVar2;
  undefined4 uVar3;
  FSceneView *pFVar4;
  longlong *plVar5;
  FRHIResource *this_00;
  longlong lVar6;
  double dVar7;
  FInstanceDataSceneProxy *pFVar8;
  code *pcVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  char cVar15;
  EUniformBufferUsage EVar16;
  EUniformBufferUsage EVar17;
  int iVar18;
  ESceneDepthPriorityGroup EVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FInstancedStaticMeshSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_InstancedStaticMeshSceneProxy_GetMeshElements>
  FVar21;
  FThreadSafeStaticStat<FStat_STAT_StaticMeshTriangles> FVar22;
  FThreadStats *pFVar23;
  FThreadStatsPool *pFVar24;
  undefined8 uVar25;
  FPrimitiveDrawInterface *pFVar26;
  uint uVar27;
  ForElementType<FMeshBatchElement> FVar28;
  ForElementType<FMeshBatchElement> FVar29;
  int iVar30;
  ForElementType<FMeshBatchElement> FVar31;
  longlong lVar32;
  FName FVar33;
  uint uVar34;
  uint uVar35;
  ForElementType<FMeshBatchElement> FVar36;
  FNameEntryId FVar37;
  int iVar38;
  int iVar39;
  uint local_134;
  int local_12c;
  int local_120;
  int local_11c;
  uint local_118;
  longlong local_110;
  FColor_u_0 local_108;
  EUniformBufferUsage local_104;
  uint local_100;
  int local_fc;
  FName local_f8;
  uint local_f0;
  uint uStack_ec;
  uint local_e8;
  uint uStack_e4;
  longlong local_e0;
  FRHIResource *local_d8;
  FName local_d0;
  FName local_c8;
  FName local_b8;
  TVector<double>_u_0 local_b0;
  FConvexVolume *local_98;
  FStatMessage local_90;
  FStatMessage local_80;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58 [3];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_InstancedStaticMeshSceneProxy_GetMeshElements ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FInstancedStaticMeshSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_InstancedStaticMeshSceneProxy_GetMeshElements>
         )0x0) {
      pFVar20 = ::FName::FName(&local_70,"STAT_InstancedStaticMeshSceneProxy_GetMeshElements");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_InstancedStaticMeshSceneProxy_GetMeshElements,*pFVar20,
                 L"STAT_InstancedStaticMeshSceneProxy_GetMeshElements","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar21 = StatPtr_STAT_InstancedStaticMeshSceneProxy_GetMeshElements;
  if (StatPtr_STAT_InstancedStaticMeshSceneProxy_GetMeshElements ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FInstancedStaticMeshSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_InstancedStaticMeshSceneProxy_GetMeshElements>
       )0x0) {
    pFVar20 = ::FName::FName(&local_68,"STAT_InstancedStaticMeshSceneProxy_GetMeshElements");
    FVar21 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FInstancedStaticMeshSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_InstancedStaticMeshSceneProxy_GetMeshElements>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_InstancedStaticMeshSceneProxy_GetMeshElements,*pFVar20,
                          L"STAT_InstancedStaticMeshSceneProxy_GetMeshElements","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar33 = *(FName *)FVar21;
  bVar11 = false;
  bVar12 = false;
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  bVar13 = false;
  bVar14 = false;
  if ((FVar33.ComparisonIndex.Value.Value != 0) || (FVar33.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_108.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_108._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
      bVar11 = false;
      bVar12 = true;
      bVar13 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f8.ComparisonIndex.Value = FVar33.ComparisonIndex.Value.Value;
        local_f8.Number = FVar33.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_f8,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                   ,0x44d);
        bVar11 = true;
        bVar12 = true;
        bVar13 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_d0 = FVar33;
      FThreadStats::AddMessage(FVar33,CycleScopeStart);
      bVar13 = true;
      goto LAB_147d00b51;
    }
  }
  bVar12 = bVar14;
  bVar11 = bVar13;
  bVar13 = false;
  local_d0 = local_c8;
  FVar33 = local_c8;
LAB_147d00b51:
  local_b0._s_0.Z = (double)&this->UserData_AllInstances;
  local_98 = (FConvexVolume *)&this->UserData_DeselectedInstances;
  iVar18 = param_1->ArrayNum;
  local_134 = 0;
  if (0 < iVar18) {
    local_110 = 0;
    local_118 = 1;
    do {
      if ((param_3 & local_118) != 0) {
        uVar27 = 0;
        if ((int)local_134 < iVar18) {
          uVar27 = ~local_134 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar4 = *(FSceneView **)((param_1->AllocatorInstance).Data + local_110);
        local_b0._s_0.Y = (double)FMeshElementCollector::GetPDI(param_4,local_134);
        EVar16 = FStaticMeshRenderData::GetFirstValidLODIdx
                           (*(FStaticMeshRenderData **)&this->field_0x280,
                            (uint)(*(FStaticMeshRenderData **)&this->field_0x280)->
                                  CurrentFirstLODIdx);
        EVar17 = (**(code **)(*(longlong *)this + 0x20))(this,pFVar4);
        plVar5 = *(longlong **)&this->field_0x280;
        if ((int)EVar16 < (int)EVar17) {
          EVar16 = EVar17;
        }
        uVar27 = 0;
        if ((int)EVar16 < (int)plVar5[1]) {
          uVar27 = ~EVar16 >> 0x1f;
        }
        local_104 = EVar16;
        if ((uVar27 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar32 = *(longlong *)(*plVar5 + (longlong)(int)EVar16 * 8);
        local_e0 = lVar32;
        CreateLooseUniformBuffer
                  (this,(FSceneView *)&local_d8,(FInstancingUserData *)pFVar4,
                   SUB84(local_b0._s_0.Z,0),0,EVar16);
        local_11c = 0;
        if (0 < *(int *)(lVar32 + 0x38)) {
          do {
            local_fc = (**(code **)(*(longlong *)this + 600))(this);
            local_120 = 0;
            if (0 < local_fc) {
              do {
                iVar18 = TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
                         ::Add(&param_4->MeshBatchStorage,1);
                uVar27 = iVar18 / 0x49;
                uVar35 = 0;
                if ((int)uVar27 < (param_4->MeshBatchStorage).Chunks.Array.ArrayNum) {
                  uVar35 = ~uVar27 >> 0x1f;
                }
                if ((uVar35 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                FVar31 = (ForElementType<FMeshBatchElement>)
                         ((ulonglong)(uint)(iVar18 % 0x49) * 0xe0 +
                         (longlong)
                         (param_4->MeshBatchStorage).Chunks.Array.AllocatorInstance.Data
                         [(int)uVar27]);
                pcVar9 = *(code **)(*(longlong *)this + 0x268);
                EVar19 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                                   ((FPrimitiveSceneProxy *)this,pFVar4);
                cVar15 = (*pcVar9)(this,local_104,local_120,local_11c,(char)EVar19,0,1,FVar31);
                uVar25 = local_b0._s_0.Z;
                if (cVar15 != '\0') {
                  if ((*(int *)((longlong)FVar31 + 0xa0) < 1) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar14)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  FVar36 = FVar31;
                  if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar31 + 0x98) !=
                      (ForElementType<FMeshBatchElement>)0x0) {
                    FVar36 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar31 + 0x98);
                  }
                  *(undefined8 *)((longlong)FVar36 + 0x38) = uVar25;
                  if ((*(int *)((longlong)FVar31 + 0xa0) < 1) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar14)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  FVar36 = FVar31;
                  if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar31 + 0x98) !=
                      (ForElementType<FMeshBatchElement>)0x0) {
                    FVar36 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar31 + 0x98);
                  }
                  *(uint *)((longlong)FVar36 + 0x7c) =
                       *(uint *)((longlong)FVar36 + 0x7c) & 0xfffffeff;
                  if ((*(int *)((longlong)FVar31 + 0xa0) < 1) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar14)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  FVar36 = FVar31;
                  if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar31 + 0x98) !=
                      (ForElementType<FMeshBatchElement>)0x0) {
                    FVar36 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar31 + 0x98);
                  }
                  this_00 = *(FRHIResource **)((longlong)FVar36 + 0x10);
                  if (this_00 != local_d8) {
                    *(FRHIResource **)((longlong)FVar36 + 0x10) = local_d8;
                    if (local_d8 != (FRHIResource *)0x0) {
                      FRHIResource::AddRef(local_d8);
                    }
                    if (this_00 != (FRHIResource *)0x0) {
                      FRHIResource::Release(this_00);
                    }
                  }
                  uVar27 = *(uint *)((longlong)FVar31 + 0xd4) & 0x8000 ^
                           (*(uint *)((longlong)FVar31 + 0xd4) | 0x2000);
                  *(uint *)((longlong)FVar31 + 0xd4) = uVar27 & 0x4000 ^ uVar27;
                  if (pFVar4->bRenderFirstInstanceOnly != false) {
                    iVar18 = *(int *)((longlong)FVar31 + 0xa0);
                    uVar27 = 0;
                    if (0 < iVar18) {
                      lVar32 = 0;
                      do {
                        uVar35 = 0;
                        if ((int)uVar27 < iVar18) {
                          uVar35 = ~uVar27 >> 0x1f;
                        }
                        if ((uVar35 == 0) &&
                           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar14)) {
                          pcVar9 = (code *)swi(3);
                          (*pcVar9)();
                          return;
                        }
                        FVar36 = FVar31;
                        if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar31 + 0x98) !=
                            (ForElementType<FMeshBatchElement>)0x0) {
                          FVar36 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar31 + 0x98);
                        }
                        uVar3 = 1;
                        if (*(int *)((longlong)FVar36 + 0x60 + lVar32) == 0) {
                          uVar3 = *(undefined4 *)((longlong)FVar36 + 0x60 + lVar32);
                        }
                        uVar35 = 0;
                        if ((int)uVar27 < *(int *)((longlong)FVar31 + 0xa0)) {
                          uVar35 = ~uVar27 >> 0x1f;
                        }
                        if ((uVar35 == 0) &&
                           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar14)) {
                          pcVar9 = (code *)swi(3);
                          (*pcVar9)();
                          return;
                        }
                        FVar36 = FVar31;
                        if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar31 + 0x98) !=
                            (ForElementType<FMeshBatchElement>)0x0) {
                          FVar36 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar31 + 0x98);
                        }
                        uVar27 = uVar27 + 1;
                        *(undefined4 *)((longlong)FVar36 + 0x60 + lVar32) = uVar3;
                        lVar32 = lVar32 + 0x98;
                        iVar18 = *(int *)((longlong)FVar31 + 0xa0);
                      } while ((int)uVar27 < iVar18);
                    }
                  }
                  FMeshElementCollector::AddMesh(param_4,local_134,(FMeshBatch *)FVar31);
                  iVar18 = *(int *)((longlong)FVar31 + 0xa0);
                  uVar27 = 0;
                  local_12c = 0;
                  if (0 < iVar18) {
                    lVar32 = 0;
                    do {
                      uVar35 = 0;
                      if ((int)uVar27 < iVar18) {
                        uVar35 = ~uVar27 >> 0x1f;
                      }
                      if ((uVar35 == 0) &&
                         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar14)) {
                        pcVar9 = (code *)swi(3);
                        (*pcVar9)();
                        return;
                      }
                      FVar36 = FVar31;
                      if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar31 + 0x98) !=
                          (ForElementType<FMeshBatchElement>)0x0) {
                        FVar36 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar31 + 0x98);
                      }
                      if (((*(uint *)((longlong)FVar36 + 0x7c + lVar32) & 0x400) == 0) ||
                         (lVar6 = *(longlong *)((longlong)FVar36 + 0x30 + lVar32), lVar6 == 0)) {
                        iVar38 = *(int *)((longlong)FVar36 + 0x60 + lVar32) *
                                 *(int *)((longlong)FVar36 + 0x5c + lVar32);
                      }
                      else {
                        uVar35 = *(uint *)((longlong)FVar36 + 0x60 + lVar32);
                        iVar18 = 0;
                        iVar39 = 0;
                        iVar38 = 0;
                        uVar34 = 0;
                        if (uVar35 < 2) {
                          if (uVar35 != 0) {
                            iVar38 = *(int *)((longlong)FVar36 + 0x5c + lVar32);
                            goto LAB_147d01140;
                          }
                        }
                        else {
                          iVar38 = *(int *)((longlong)FVar36 + 0x5c + lVar32);
                          do {
                            uVar10 = uVar34 * 2;
                            uVar34 = uVar34 + 2;
                            iVar18 = iVar18 + ((*(int *)(lVar6 + (ulonglong)(uVar10 + 1) * 4) -
                                               *(int *)(lVar6 + (ulonglong)uVar10 * 4)) + 1) *
                                              iVar38;
                            iVar39 = iVar39 + ((*(int *)(lVar6 + (ulonglong)(uVar10 + 3) * 4) -
                                               *(int *)(lVar6 + (ulonglong)(uVar10 + 2) * 4)) + 1) *
                                              iVar38;
                          } while (uVar34 < uVar35 - 1);
                          if (uVar35 <= uVar34) {
                            iVar38 = iVar39 + iVar18;
                            goto LAB_147d0116d;
                          }
LAB_147d01140:
                          iVar38 = ((*(int *)(lVar6 + (ulonglong)(uVar34 * 2 + 1) * 4) -
                                    *(int *)(lVar6 + (ulonglong)(uVar34 * 2) * 4)) + 1) * iVar38;
                        }
                        iVar38 = iVar39 + iVar18 + iVar38;
                      }
LAB_147d0116d:
                      iVar18 = *(int *)((longlong)FVar31 + 0xa0);
                      local_12c = local_12c + iVar38;
                      uVar27 = uVar27 + 1;
                      lVar32 = lVar32 + 0x98;
                    } while ((int)uVar27 < iVar18);
                    if ((local_12c != 0) && (FThreadStats::bPrimaryEnable != false)) {
                      FVar22 = StatPtr_STAT_StaticMeshTriangles;
                      if (StatPtr_STAT_StaticMeshTriangles ==
                          (FThreadSafeStaticStat<FStat_STAT_StaticMeshTriangles>)0x0) {
                        pFVar20 = ::FName::FName(&local_60,"STAT_StaticMeshTriangles");
                        FVar22 = (FThreadSafeStaticStat<FStat_STAT_StaticMeshTriangles>)
                                 FThreadSafeStaticStatBase::DoSetup
                                           ((FThreadSafeStaticStatBase *)
                                            &StatPtr_STAT_StaticMeshTriangles,*pFVar20,
                                            L"Static Mesh Tris","STATGROUP_Engine",
                                            "STATCAT_Advanced",L"Engine",true,true,ST_int64,false,
                                            false,MCR_Invalid);
                      }
                      FVar33 = *(FName *)FVar22;
                      FVar37 = FVar33.ComparisonIndex.Value;
                      uVar27 = FVar33.Number;
                      local_f0 = FVar37.Value;
                      uStack_ec = uVar27;
                      if (((FVar33 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)
                          ) && (FThreadStats::TlsSlot != 0xffffffff)) {
                        pFVar23 = TlsGetValue(FThreadStats::TlsSlot);
                        if (pFVar23 == (FThreadStats *)0x0) {
                          pFVar24 = FThreadStatsPool::Get();
                          pFVar23 = FThreadStatsPool::GetFromPool(pFVar24);
                        }
                        local_90.NameAndInfo.Number = uVar27 & 0xffffafff | 0xa000;
                        local_b8 = FVar33;
                        local_90.StatData.Pad = (uchar  [8])(longlong)local_12c;
                        local_90.NameAndInfo.Index.Value = FVar37.Value;
                        FThreadStats::AddStatMessage(pFVar23,&local_90);
                        FStatsTrace::Add(&local_b8,(longlong)local_12c);
                        if (pFVar23->ScopeCount == 0) {
                          FThreadStats::Flush(pFVar23,false,false);
                        }
                        else if (FThreadStats::bIsRawStatsActive != false) {
                          FThreadStats::FlushRawStats(pFVar23,false,false);
                        }
                      }
                    }
                  }
                  if (*(longlong *)&this->field_0x2b8 != 0) {
                    iVar18 = TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
                             ::Add(&param_4->MeshBatchStorage,1);
                    uVar27 = iVar18 / 0x49;
                    uVar35 = 0;
                    if ((int)uVar27 < (param_4->MeshBatchStorage).Chunks.Array.ArrayNum) {
                      uVar35 = ~uVar27 >> 0x1f;
                    }
                    if ((uVar35 == 0) &&
                       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar14)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    FVar36 = (ForElementType<FMeshBatchElement>)
                             ((ulonglong)(uint)(iVar18 % 0x49) * 0xe0 +
                             (longlong)
                             (param_4->MeshBatchStorage).Chunks.Array.AllocatorInstance.Data
                             [(int)uVar27]);
                    if (FVar36 != FVar31) {
                      FVar28 = FVar36;
                      if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar36 + 0x98) !=
                          (ForElementType<FMeshBatchElement>)0x0) {
                        FVar28 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar36 + 0x98);
                      }
                      DestructItems<FMeshBatchElement,int>
                                ((FMeshBatchElement *)FVar28,*(int *)((longlong)FVar36 + 0xa0));
                      piVar1 = (int *)((longlong)FVar36 + 0xa4);
                      iVar18 = *(int *)((longlong)FVar31 + 0xa0);
                      FVar28 = FVar31;
                      if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar31 + 0x98) !=
                          (ForElementType<FMeshBatchElement>)0x0) {
                        FVar28 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar31 + 0x98);
                      }
                      *(int *)((longlong)FVar36 + 0xa0) = iVar18;
                      if ((iVar18 == 0) && (*piVar1 == 0)) {
                        *piVar1 = 1;
                      }
                      else {
                        UE::Core::Private::
                        ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshBatchElement>_>
                                  (0x98,8,iVar18,*piVar1,(ForElementType<FMeshBatchElement> *)FVar36
                                   ,iVar18,piVar1);
                        FVar29 = FVar36;
                        if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar36 + 0x98) !=
                            (ForElementType<FMeshBatchElement>)0x0) {
                          FVar29 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar36 + 0x98);
                        }
                        ConstructItems<FMeshBatchElement,FMeshBatchElement,int>
                                  ((void *)FVar29,(FMeshBatchElement *)FVar28,iVar18);
                      }
                    }
                    *(undefined8 *)((longlong)FVar36 + 0xa8) =
                         *(undefined8 *)((longlong)FVar31 + 0xa8);
                    *(undefined8 *)((longlong)FVar36 + 0xb0) =
                         *(undefined8 *)((longlong)FVar31 + 0xb0);
                    *(undefined8 *)((longlong)FVar36 + 0xb8) =
                         *(undefined8 *)((longlong)FVar31 + 0xb8);
                    *(undefined4 *)((longlong)FVar36 + 0xc0) =
                         *(undefined4 *)((longlong)FVar31 + 0xc0);
                    *(undefined4 *)((longlong)FVar36 + 0xc4) =
                         *(undefined4 *)((longlong)FVar31 + 0xc4);
                    *(undefined4 *)((longlong)FVar36 + 200) =
                         *(undefined4 *)((longlong)FVar31 + 200);
                    *(undefined4 *)((longlong)FVar36 + 0xcc) =
                         *(undefined4 *)((longlong)FVar31 + 0xcc);
                    *(undefined2 *)((longlong)FVar36 + 0xd0) =
                         *(undefined2 *)((longlong)FVar31 + 0xd0);
                    *(undefined1 *)((longlong)FVar36 + 0xd2) =
                         *(undefined1 *)((longlong)FVar31 + 0xd2);
                    uVar27 = (*(uint *)((longlong)FVar36 + 0xd4) ^
                             *(uint *)((longlong)FVar31 + 0xd4)) & 1 ^
                             *(uint *)((longlong)FVar36 + 0xd4);
                    *(uint *)((longlong)FVar36 + 0xd4) = uVar27;
                    uVar27 = (uVar27 ^ *(uint *)((longlong)FVar31 + 0xd4)) & 2 ^ uVar27;
                    *(uint *)((longlong)FVar36 + 0xd4) = uVar27;
                    uVar27 = (uVar27 ^ *(uint *)((longlong)FVar31 + 0xd4)) & 4 ^ uVar27;
                    *(uint *)((longlong)FVar36 + 0xd4) = uVar27;
                    uVar27 = (uVar27 ^ *(uint *)((longlong)FVar31 + 0xd4)) & 8 ^ uVar27;
                    *(uint *)((longlong)FVar36 + 0xd4) = uVar27;
                    uVar27 = (uVar27 ^ *(uint *)((longlong)FVar31 + 0xd4)) & 0x10 ^ uVar27;
                    *(uint *)((longlong)FVar36 + 0xd4) = uVar27;
                    uVar27 = (uVar27 ^ *(uint *)((longlong)FVar31 + 0xd4)) & 0x20 ^ uVar27;
                    *(uint *)((longlong)FVar36 + 0xd4) = uVar27;
                    uVar27 = (uVar27 ^ *(uint *)((longlong)FVar31 + 0xd4)) & 0x40 ^ uVar27;
                    *(uint *)((longlong)FVar36 + 0xd4) = uVar27;
                    uVar27 = (uVar27 ^ *(uint *)((longlong)FVar31 + 0xd4)) & 0x380 ^ uVar27;
                    *(uint *)((longlong)FVar36 + 0xd4) = uVar27;
                    uVar27 = (uVar27 ^ *(uint *)((longlong)FVar31 + 0xd4)) & 0x1c00 ^ uVar27;
                    *(uint *)((longlong)FVar36 + 0xd4) = uVar27;
                    uVar27 = (uVar27 ^ *(uint *)((longlong)FVar31 + 0xd4)) & 0x2000 ^ uVar27;
                    *(uint *)((longlong)FVar36 + 0xd4) = uVar27;
                    uVar27 = (uVar27 ^ *(uint *)((longlong)FVar31 + 0xd4)) & 0x4000 ^ uVar27;
                    *(uint *)((longlong)FVar36 + 0xd4) = uVar27;
                    uVar27 = (uVar27 ^ *(uint *)((longlong)FVar31 + 0xd4)) & 0x8000 ^ uVar27;
                    *(uint *)((longlong)FVar36 + 0xd4) = uVar27;
                    uVar27 = (uVar27 ^ *(uint *)((longlong)FVar31 + 0xd4)) & 0x10000 ^ uVar27;
                    *(uint *)((longlong)FVar36 + 0xd4) = uVar27;
                    uVar27 = (uVar27 ^ *(uint *)((longlong)FVar31 + 0xd4)) & 0x20000 ^ uVar27;
                    *(uint *)((longlong)FVar36 + 0xd4) = uVar27;
                    uVar27 = (uVar27 ^ *(uint *)((longlong)FVar31 + 0xd4)) & 0x40000 ^ uVar27;
                    *(uint *)((longlong)FVar36 + 0xd4) = uVar27;
                    uVar27 = (uVar27 ^ *(uint *)((longlong)FVar31 + 0xd4)) & 0x380000 ^ uVar27;
                    *(uint *)((longlong)FVar36 + 0xd4) = uVar27;
                    uVar27 = (uVar27 ^ *(uint *)((longlong)FVar31 + 0xd4)) & 0x400000 ^ uVar27;
                    *(uint *)((longlong)FVar36 + 0xd4) = uVar27;
                    uVar27 = (uVar27 ^ *(uint *)((longlong)FVar31 + 0xd4)) & 0x800000 ^ uVar27;
                    *(uint *)((longlong)FVar36 + 0xd4) = uVar27;
                    uVar27 = (uVar27 ^ *(uint *)((longlong)FVar31 + 0xd4)) & 0x1000000 ^ uVar27;
                    *(uint *)((longlong)FVar36 + 0xd4) = uVar27;
                    uVar27 = (uVar27 ^ *(uint *)((longlong)FVar31 + 0xd4)) & 0x2000000 ^ uVar27;
                    *(uint *)((longlong)FVar36 + 0xd4) = uVar27;
                    uVar27 = (uVar27 ^ *(uint *)((longlong)FVar31 + 0xd4)) & 0x4000000 ^ uVar27;
                    *(uint *)((longlong)FVar36 + 0xd4) = uVar27;
                    uVar27 = (uVar27 ^ *(uint *)((longlong)FVar31 + 0xd4)) & 0x8000000 ^ uVar27;
                    *(uint *)((longlong)FVar36 + 0xd4) = uVar27;
                    *(undefined1 *)((longlong)FVar36 + 0xd8) =
                         *(undefined1 *)((longlong)FVar31 + 0xd8);
                    *(undefined1 *)((longlong)FVar36 + 0xd9) =
                         *(undefined1 *)((longlong)FVar31 + 0xd9);
                    *(uint *)((longlong)FVar36 + 0xd4) = uVar27 & 0xfffefffb | 0x400000;
                    uVar25 = (**(code **)(**(longlong **)&this->field_0x2b8 + 0x310))();
                    *(undefined8 *)((longlong)FVar36 + 0xb0) = uVar25;
                    *(short *)((longlong)FVar36 + 0xd0) =
                         *(short *)((longlong)FVar36 + 0xd0) + *(short *)(local_e0 + 0x38);
                    FMeshElementCollector::AddMesh(param_4,local_134,(FMeshBatch *)FVar36);
                    iVar18 = *(int *)((longlong)FVar36 + 0xa0);
                    uVar27 = 0;
                    local_12c = 0;
                    if (0 < iVar18) {
                      lVar32 = 0;
                      do {
                        uVar35 = 0;
                        if ((int)uVar27 < iVar18) {
                          uVar35 = ~uVar27 >> 0x1f;
                        }
                        if ((uVar35 == 0) &&
                           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar14)) {
                          pcVar9 = (code *)swi(3);
                          (*pcVar9)();
                          return;
                        }
                        FVar31 = FVar36;
                        if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar36 + 0x98) !=
                            (ForElementType<FMeshBatchElement>)0x0) {
                          FVar31 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar36 + 0x98);
                        }
                        if (((*(uint *)((longlong)FVar31 + 0x7c + lVar32) & 0x400) == 0) ||
                           (lVar6 = *(longlong *)((longlong)FVar31 + 0x30 + lVar32), lVar6 == 0)) {
                          iVar38 = *(int *)((longlong)FVar31 + 0x60 + lVar32) *
                                   *(int *)((longlong)FVar31 + 0x5c + lVar32);
                        }
                        else {
                          local_100 = *(uint *)((longlong)FVar31 + 0x60 + lVar32);
                          iVar30 = 0;
                          iVar38 = 0;
                          iVar39 = 0;
                          iVar18 = 0;
                          uVar35 = 0;
                          if (local_100 < 2) {
                            if (local_100 != 0) {
                              iVar18 = *(int *)((longlong)FVar31 + 0x5c + lVar32);
                              iVar39 = 0;
                              goto LAB_147d01800;
                            }
                          }
                          else {
                            iVar18 = *(int *)((longlong)FVar31 + 0x5c + lVar32);
                            do {
                              uVar34 = uVar35 * 2;
                              uVar35 = uVar35 + 2;
                              iVar30 = iVar30 + ((*(int *)(lVar6 + (ulonglong)(uVar34 + 1) * 4) -
                                                 *(int *)(lVar6 + (ulonglong)uVar34 * 4)) + 1) *
                                                iVar18;
                              iVar38 = iVar38 + ((*(int *)(lVar6 + (ulonglong)(uVar34 + 3) * 4) -
                                                 *(int *)(lVar6 + (ulonglong)(uVar34 + 2) * 4)) + 1)
                                                * iVar18;
                            } while (uVar35 < local_100 - 1);
                            iVar39 = iVar38;
                            if (local_100 <= uVar35) {
                              iVar38 = iVar38 + iVar30;
                              goto LAB_147d0182d;
                            }
LAB_147d01800:
                            iVar18 = ((*(int *)(lVar6 + (ulonglong)(uVar35 * 2 + 1) * 4) -
                                      *(int *)(lVar6 + (ulonglong)(uVar35 * 2) * 4)) + 1) * iVar18;
                          }
                          iVar38 = iVar39 + iVar30 + iVar18;
                        }
LAB_147d0182d:
                        iVar18 = *(int *)((longlong)FVar36 + 0xa0);
                        local_12c = local_12c + iVar38;
                        uVar27 = uVar27 + 1;
                        lVar32 = lVar32 + 0x98;
                      } while ((int)uVar27 < iVar18);
                      if ((local_12c != 0) && (FThreadStats::bPrimaryEnable != false)) {
                        FVar22 = StatPtr_STAT_StaticMeshTriangles;
                        if (StatPtr_STAT_StaticMeshTriangles ==
                            (FThreadSafeStaticStat<FStat_STAT_StaticMeshTriangles>)0x0) {
                          pFVar20 = ::FName::FName(local_58,"STAT_StaticMeshTriangles");
                          FVar22 = (FThreadSafeStaticStat<FStat_STAT_StaticMeshTriangles>)
                                   FThreadSafeStaticStatBase::DoSetup
                                             ((FThreadSafeStaticStatBase *)
                                              &StatPtr_STAT_StaticMeshTriangles,*pFVar20,
                                              L"Static Mesh Tris","STATGROUP_Engine",
                                              "STATCAT_Advanced",L"Engine",true,true,ST_int64,false,
                                              false,MCR_Invalid);
                        }
                        dVar7 = *(double *)FVar22;
                        uVar35 = SUB84(dVar7,0);
                        uVar27 = (uint)((ulonglong)dVar7 >> 0x20);
                        local_e8 = uVar35;
                        uStack_e4 = uVar27;
                        if (((dVar7 != 0.0) && (FThreadStats::bPrimaryDisableForever == false)) &&
                           (FThreadStats::TlsSlot != 0xffffffff)) {
                          pFVar23 = TlsGetValue(FThreadStats::TlsSlot);
                          if (pFVar23 == (FThreadStats *)0x0) {
                            pFVar24 = FThreadStatsPool::Get();
                            pFVar23 = FThreadStatsPool::GetFromPool(pFVar24);
                          }
                          local_80.NameAndInfo.Number = uVar27 & 0xffffafff | 0xa000;
                          local_b0._0_8_ = dVar7;
                          local_80.StatData.Pad = (uchar  [8])(longlong)local_12c;
                          local_80.NameAndInfo.Index.Value = uVar35;
                          FThreadStats::AddStatMessage(pFVar23,&local_80);
                          FStatsTrace::Add((FName *)&local_b0._s_0,(longlong)local_12c);
                          if (pFVar23->ScopeCount == 0) {
                            FThreadStats::Flush(pFVar23,false,false);
                          }
                          else if (FThreadStats::bIsRawStatsActive != false) {
                            FThreadStats::FlushRawStats(pFVar23,false,false);
                          }
                        }
                      }
                    }
                  }
                }
                local_120 = local_120 + 1;
                lVar32 = local_e0;
              } while (local_120 < local_fc);
            }
            local_11c = local_11c + 1;
          } while (local_11c < *(int *)(lVar32 + 0x38));
        }
        if (local_d8 != (FRHIResource *)0x0) {
          FRHIResource::Release(local_d8);
        }
        FPrimitiveSceneProxy::RenderBounds
                  ((FPrimitiveSceneProxy *)this,(FPrimitiveDrawInterface *)local_b0._s_0.Y,
                   &pFVar4->Family->EngineShowFlags,
                   (TBoxSphereBounds<double,double> *)&this->field_0x190,(this->field_0x79 & 6) != 0
                  );
        if (((pFVar4->Family->EngineShowFlags).VisualizeInstanceUpdates != 0) &&
           (pFVar8 = (this->InstanceDataSceneProxy).Object, pFVar8 != (FInstanceDataSceneProxy *)0x0
           )) {
          pcVar9 = *(code **)(pFVar8->_padding_ + 0x18);
          pFVar26 = FMeshElementCollector::GetPDI(param_4,local_134);
          (*pcVar9)(pFVar8,pFVar26,~(param_2->EngineShowFlags).Game & 1);
        }
        bVar14 = AllowDebugViewmodes();
        if ((bVar14) && ((param_2->EngineShowFlags).InstancedStaticMeshes != 0)) {
          bVar2 = this->field_0x79;
          pFVar26 = FMeshElementCollector::GetPDI(param_4,local_134);
          FPrimitiveSceneProxy::RenderBounds
                    ((FPrimitiveSceneProxy *)this,pFVar26,&param_2->EngineShowFlags,
                     (TBoxSphereBounds<double,double> *)&this->field_0x190,(bVar2 & 6) != 0);
        }
      }
      local_134 = local_134 + 1;
      local_110 = local_110 + 8;
      local_118 = local_118 << 1 | (uint)((int)local_118 < 0);
      iVar18 = param_1->ArrayNum;
      FVar33 = local_d0;
    } while ((int)local_134 < iVar18);
  }
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar13) {
    FThreadStats::AddMessage(FVar33,CycleScopeEnd);
  }
  return;
}

// GetDynamicRayTracingInstances @ 147d01c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FInstancedStaticMeshSceneProxy::GetDynamicRayTracingInstances
          (FInstancedStaticMeshSceneProxy *this,FRayTracingInstanceCollector *param_1)

{
  float fVar1;
  longlong *plVar2;
  TIndirectArray<FStaticMeshRayTracingProxyLOD,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined8 uVar4;
  ForAnyElementType FVar5;
  FMeshBatch *pFVar6;
  FScriptContainerElement *pFVar7;
  void *pvVar8;
  code *pcVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  TConsoleVariableData<int> *pTVar20;
  TConsoleVariableData<float> *pTVar21;
  TConsoleVariableData<float> *pTVar22;
  FRayTracingInstanceCollector *pFVar23;
  bool bVar24;
  byte bVar25;
  char cVar26;
  bool bVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  uint uVar31;
  uint uVar32;
  FInstanceSceneDataBuffers *pFVar33;
  FInstanceDataBufferHeader *pFVar34;
  ForElementType<UE::Math::TVector<double>_> *pFVar35;
  longlong lVar36;
  FCachedSystemScalabilityCVars *pFVar37;
  longlong lVar38;
  ForElementType<FMeshBatchElement> FVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  ForElementType<UE::Math::TVector<double>_> FVar42;
  uint uVar43;
  int iVar44;
  uint uVar45;
  longlong lVar46;
  ForAnyElementType FVar47;
  ForElementType<UE::Math::TVector<double>_> *pFVar48;
  ForElementType<UE::Math::TVector<double>_> FVar49;
  FScriptContainerElement *pFVar50;
  uint uVar51;
  FRayTracingGeometry *pFVar52;
  FScriptContainerElement *pFVar53;
  float fVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  undefined4 uVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  double dVar82;
  double dVar83;
  double dVar84;
  double dVar85;
  undefined4 uVar86;
  undefined4 uVar87;
  undefined4 uVar88;
  undefined4 uVar89;
  undefined4 uVar90;
  undefined4 uVar91;
  undefined4 uVar92;
  undefined4 uVar93;
  undefined1 auVar94 [16];
  undefined1 auStackY_7f8 [32];
  ForAnyElementType local_7a8;
  uint local_7a0;
  uint uStack_79c;
  TLess<void> local_798 [4];
  uint local_794;
  uint local_790;
  uint local_78c;
  undefined1 local_788;
  undefined1 local_787;
  undefined1 local_786;
  undefined1 local_785;
  undefined1 local_784 [4];
  uint local_780;
  uint local_77c;
  ForAnyElementType local_778;
  undefined8 local_770;
  ForAnyElementType local_768;
  undefined8 local_760;
  longlong local_758;
  ForAnyElementType local_750;
  undefined8 local_748;
  undefined1 local_740 [4];
  uint local_73c;
  uint local_738;
  FRayTracingGeometry *local_730;
  uint local_728;
  FVisibleInstance local_724;
  FInstancedStaticMeshSceneProxy *local_718;
  FRayTracingInstanceCollector *local_710;
  FVisibleInstance local_708;
  FScriptContainerElement *local_700;
  FVisibleInstance local_6f8;
  FInstanceSceneDataBuffers *local_6f0;
  FRayTracingGeometry *local_6e8;
  ForAnyElementType local_6e0;
  int local_6d8;
  int local_6d4;
  FMeshBatch *local_6d0;
  int iStack_6c8;
  undefined4 uStack_6c4;
  undefined8 local_6c0;
  ForAnyElementType local_6b8;
  undefined8 local_6b0;
  uint *local_6a8;
  int iStack_6a0;
  undefined4 uStack_69c;
  void *local_698;
  undefined8 local_690;
  TMatrix<double> *local_688;
  int iStack_680;
  undefined4 uStack_67c;
  undefined8 local_678;
  undefined8 local_670;
  undefined8 local_668;
  TVector<float>_u_0 local_660;
  float local_654;
  float local_650;
  float local_64c;
  TVector<float>_u_0 local_648;
  float local_63c;
  float local_638;
  float local_634;
  TVector<float>_u_0 local_630;
  float local_624;
  float local_620;
  float local_61c;
  int local_618;
  FRayTracingInstance local_610;
  FRayTracingInstance local_5a0;
  TVector<double>_u_0 local_530 [2];
  double local_500;
  FRayTracingDynamicGeometryUpdateParams local_4f8;
  FInstanceDataBufferHeader local_468;
  ForAnyElementType local_458;
  undefined8 local_450;
  undefined1 local_448;
  uint local_444;
  uint local_440;
  uint local_43c;
  FRayTracingGeometry *local_438;
  FRWBuffer *local_430;
  undefined1 local_428;
  uint local_424;
  float local_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  float local_408;
  float fStack_404;
  float fStack_400;
  float fStack_3fc;
  float local_3f8;
  float fStack_3f4;
  float fStack_3f0;
  float fStack_3ec;
  float local_3e8;
  float fStack_3e4;
  float fStack_3e0;
  float fStack_3dc;
  undefined1 local_3d8;
  FRHIResource *local_3d0;
  FMeshBatch local_3c8;
  ForElementType<UE::Math::TVector<double>_> local_2e8;
  uint local_2b0;
  uint local_2ac;
  TVector<double>_u_0 local_2a8;
  double local_290;
  double local_288;
  double local_280;
  undefined1 local_278;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  double local_258;
  double dStack_250;
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
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined1 local_1f8 [16];
  TMatrix<double> local_1e8;
  undefined1 local_168 [128];
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_7f8;
  if (((this->field_0x2d8 & 0xc) != 0) &&
     (local_718 = this, local_710 = param_1,
     iVar28 = TConsoleVariableData<int>::GetValueOnRenderThread(CVarRayTracingRenderInstances.Ref),
     iVar28 != 0)) {
    if ((this->field_0x2d8 & 1) == 0) {
      local_788 = 0;
      bVar24 = `FInstancedStaticMeshSceneProxy::GetDynamicRayTracingInstances'::__l9::<lambda_1>::
               operator()(&local_788);
      if (!bVar24) {
        return;
      }
    }
    pFVar33 = FPrimitiveSceneProxy::GetInstanceSceneDataBuffers
                        ((FPrimitiveSceneProxy *)this,SynchronizeUpdateTask);
    local_6f0 = pFVar33;
    bVar24 = FInstanceSceneDataBuffers::IsInstanceDataGPUOnly(pFVar33,(FAccessTag)0x0);
    if ((bVar24) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("!InstanceSceneDataBuffers->IsInstanceDataGPUOnly()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                            ,0x73d,
                            L"FInstancedStaticMeshSceneProxy does not support dynamic ray tracing geometry when IsInstanceDataGPUOnly()."
                           ), bVar24)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar34 = FPrimitiveSceneProxy::GetInstanceDataHeader((FPrimitiveSceneProxy *)this,&local_468);
    uVar43 = pFVar34->NumInstances;
    if (uVar43 != 0) {
      local_794 = uVar43;
      if (((pFVar33 == (FInstanceSceneDataBuffers *)0x0) ||
          (uVar29 = FInstanceSceneDataBuffers::GetNumInstances(pFVar33,(FAccessTag)0x0),
          uVar29 != uVar43)) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("InstanceSceneDataBuffers && InstanceSceneDataBuffers->GetNumInstances() == InstanceCount"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                              ,0x746,L""), bVar24)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FRayTracingInstanceCollector::AddReferencedGeometryGroup
                (param_1,*(int *)(*(longlong *)&this->field_0x280 + 0x88));
      uVar43 = *(int *)(*(longlong *)&this->field_0x280 + 8) - 1;
      uVar29 = TConsoleVariableData<int>::GetValueOnRenderThread
                         (CVarRayTracingInstancedStaticMeshesMinLOD.Ref);
      if ((int)uVar29 < (int)uVar43) {
        uVar43 = uVar29;
      }
      uVar29 = 0;
      if (0 < (int)uVar43) {
        uVar29 = uVar43;
      }
      local_78c = 0;
      if (*(char *)(*(longlong *)(*(longlong *)&this->field_0x280 + 0x48) + 0x18) != '\0') {
        bVar25 = FStaticMeshSceneProxy::GetCurrentFirstLODIdx_Internal
                           ((FStaticMeshSceneProxy *)this);
        local_78c = (uint)bVar25;
        if ((int)(uint)bVar25 < (int)uVar29) {
          local_78c = uVar29;
        }
      }
      fVar54 = __real_3c23d70a;
      plVar2 = *(longlong **)(*(longlong *)&this->field_0x280 + 0x48);
      iVar28 = (int)plVar2[1];
      if ((int)local_78c < iVar28) {
        lVar46 = (longlong)(int)local_78c << 3;
LAB_147d01dd1:
        uVar43 = local_78c;
        uVar29 = 0;
        if ((int)local_78c < iVar28) {
          uVar29 = ~local_78c >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar52 = *(FRayTracingGeometry **)(*(longlong *)(*plVar2 + lVar46) + 8);
        local_730 = pFVar52;
        bVar24 = FRayTracingGeometry::HasPendingBuildRequest(pFVar52);
        if (bVar24) {
          FRayTracingGeometry::BoostBuildPriority(pFVar52,fVar54);
        }
        else {
          bVar24 = FRayTracingGeometry::IsValid(pFVar52);
          if ((bVar24) && (bVar24 = FRayTracingGeometry::IsEvicted(pFVar52), !bVar24)) {
            if (pFVar52 == (FRayTracingGeometry *)0x0) {
              return;
            }
            pFVar50 = (param_1->Views).AllocatorInstance.Data;
            uVar29 = (param_1->Views).ArrayNum;
            local_77c = uVar29;
            local_700 = pFVar50;
            if (((int)uVar29 < 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar24)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            local_738 = local_710->VisibilityMap;
            local_618 = 0;
            if (local_738 != 0) {
              for (; (local_738 >> local_618 & 1) == 0; local_618 = local_618 + 1) {
              }
            }
            local_728 = 0x20;
            if (local_738 != 0) {
              local_728 = local_618;
            }
            if ((((int)local_728 < 0) || ((int)uVar29 <= (int)local_728)) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Views.IsValidIndex(FirstActiveViewIndex)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                                    ,0x772,
                                    L"There should be at least one active view when calling GetDynamicRayTracingInstances(...)."
                                   ), bVar24)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pTVar3 = (this->InstancedRenderData).RayTracingProxyLODs;
            local_768.Data = (FScriptContainerElement *)0x0;
            local_760 = 0;
            local_73c = ~uVar43 >> 0x1f;
            uVar51 = 0;
            if ((int)uVar43 < (pTVar3->Array).ArrayNum) {
              uVar51 = local_73c;
            }
            if ((uVar51 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            uVar51 = local_73c;
            lVar46 = (longlong)(int)uVar43;
            iVar28 = *(int *)(*(longlong *)
                               (*(longlong *)((pTVar3->Array).AllocatorInstance.Data + lVar46 * 8) +
                               0x10) + 0x28);
            iVar44 = 0;
            uVar31 = uVar43;
            local_758 = lVar46;
            if (0 < iVar28) {
              do {
                local_730 = pFVar52;
                local_78c = uVar31;
                local_3c8.Elements.AllocatorInstance.SecondaryData =
                     (ForElementType<FMeshBatchElement>)0x0;
                local_3c8.bUseForLumenSurfaceCacheCapture = 0;
                local_3c8.bUseForWaterInfoTextureDepth = 0;
                local_3c8.bViewDependentArguments = 0;
                local_3c8.bForceTwoSidedInRayTracing = 0;
                local_3c8.CastRayTracedShadow = 1;
                local_3c8.bOverlayMaterial = 0;
                local_3c8.RuntimeVirtualTextureMaterialType = 0;
                local_3c8.bRenderToVirtualTexture = 0;
                local_3c8.bDitheredLODTransition = 0;
                local_3c8.bSelectable = 1;
                local_3c8.bUseSelectionOutline = 1;
                local_3c8.bUseWireframeSelectionColoring = 0;
                local_3c8.bCanApplyViewModeOverrides = 0;
                local_3c8.DepthPriorityGroup = 0;
                local_3c8.Type = 0;
                local_3c8.bWireframe = 0;
                local_3c8.bUseAsOccluder = 1;
                local_3c8.bUseForDepthPass = 1;
                local_3c8.bUseForMaterial = 1;
                local_3c8.CastShadow = 1;
                local_3c8.bDisableBackfaceCulling = 0;
                local_3c8.ReverseCulling = 0;
                local_3c8.Elements.ArrayMax = 1;
                local_3c8.LCI = (FLightCacheInterface *)0x0;
                local_3c8.VertexFactory = (FVertexFactory *)0x0;
                local_3c8.MaterialRenderProxy = (FMaterialRenderProxy *)0x0;
                local_3c8.BatchHitProxyId.Index = -1;
                local_3c8.DynamicMeshBoundsIndex = -1;
                local_3c8.TessellationDisablingShadowMapMeshSize = 0.0;
                local_3c8.SegmentIndex = -1;
                local_3c8.MeshIdInPrimitive = 0;
                local_3c8.LODIndex = -1;
                local_3c8.VisualizeHLODIndex = -1;
                local_3c8.VisualizeLODIndex = -1;
                local_3c8.Elements.ArrayNum = 1;
                DefaultConstructItems<FMeshBatchElement,int>(&local_3c8,1);
                if (*(char *)(*(longlong *)(*(longlong *)&this->field_0x280 + 0x48) + 0x18) == '\0')
                {
                  cVar26 = (**(code **)(*(longlong *)this + 0x270))(this,uVar43,0,iVar44);
                }
                else {
                  cVar26 = (**(code **)(*(longlong *)this + 0x268))();
                }
                if (cVar26 != '\0') {
                  if (*(char *)(*(longlong *)(*(longlong *)&this->field_0x280 + 0x48) + 0x18) ==
                      '\0') {
                    uVar29 = 0;
                    if ((int)uVar43 <
                        (this->InstancedRenderData).RayTracingProxyVertexFactories.Array.ArrayNum) {
                      uVar29 = uVar51;
                    }
                    if ((uVar29 == 0) &&
                       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar24)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    if ((local_3c8.VertexFactory !=
                         *(FVertexFactory **)
                          ((this->InstancedRenderData).RayTracingProxyVertexFactories.Array.
                           AllocatorInstance.Data + lVar46 * 8)) &&
                       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                           ("MeshBatch.VertexFactory == &InstancedRenderData.RayTracingProxyVertexFactories[LODIndex]"
                                            ,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                                            ,0x797,L""), bVar24)) goto code_r0x000147d021bf;
                  }
                  else {
                    uVar29 = 0;
                    if ((int)uVar43 < (this->InstancedRenderData).VertexFactories.Array.ArrayNum) {
                      uVar29 = uVar51;
                    }
                    if ((uVar29 == 0) &&
                       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar24)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    if ((local_3c8.VertexFactory !=
                         *(FVertexFactory **)
                          ((this->InstancedRenderData).VertexFactories.Array.AllocatorInstance.Data
                          + lVar46 * 8)) &&
                       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                           ("MeshBatch.VertexFactory == &InstancedRenderData.VertexFactories[LODIndex]"
                                            ,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                                            ,0x793,L""), bVar24)) {
code_r0x000147d021bf:
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                  }
                  local_3c8.ReverseCulling = *(uint *)&this->field_0xb10 >> 1;
                  if (((local_768.Data <= &local_3c8) &&
                      (&local_3c8 <
                       (FMeshBatch *)(local_768.Data + (longlong)local_760._4_4_ * 0xe0))) &&
                     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar24)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  iVar30 = (int)local_760;
                  if ((int)local_760 == local_760._4_4_) {
                    iVar30 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x8e0,&local_768,(int *)((longlong)&local_760 + 4));
                  }
                  local_760 = CONCAT44(local_760._4_4_,iVar30 + 1);
                  FMeshBatch::FMeshBatch
                            ((FMeshBatch *)(local_768.Data + (longlong)iVar30 * 0xe0),&local_3c8);
                }
                FVar39 = (ForElementType<FMeshBatchElement>)&local_3c8;
                if (local_3c8.Elements.AllocatorInstance.SecondaryData !=
                    (ForElementType<FMeshBatchElement>)0x0) {
                  FVar39 = local_3c8.Elements.AllocatorInstance.SecondaryData;
                }
                DestructItems<FMeshBatchElement,int>
                          ((FMeshBatchElement *)FVar39,local_3c8.Elements.ArrayNum);
                if (local_3c8.Elements.AllocatorInstance.SecondaryData !=
                    (ForElementType<FMeshBatchElement>)0x0) {
                  FMemory::Free((void *)local_3c8.Elements.AllocatorInstance.SecondaryData);
                }
                iVar44 = iVar44 + 1;
                pFVar52 = local_730;
                pFVar50 = local_700;
                uVar29 = local_77c;
                uVar31 = local_78c;
              } while (iVar44 < iVar28);
            }
            local_750.Data = (FScriptContainerElement *)0x0;
            local_748 = 0;
            local_7a8.Data = (FScriptContainerElement *)0x0;
            local_7a0 = 0;
            uStack_79c = 0;
            local_778.Data = (FScriptContainerElement *)0x0;
            local_770 = 0;
            uVar31 = TConsoleVariableData<int>::GetValueOnRenderThread
                               (CVarRayTracingSimulatedInstanceCount.Ref);
            pFVar23 = local_710;
            uVar51 = local_794;
            if (uVar31 != 0xffffffff) {
              uVar32 = local_794;
              if (uVar31 < local_794) {
                uVar32 = uVar31;
              }
              uVar51 = 1;
              if (1 < uVar32) {
                uVar51 = uVar32;
              }
            }
            uVar31 = 0x100;
            if (uVar51 < 0x100) {
              uVar31 = uVar51;
            }
            local_780 = uVar31;
            if ((this->field_0x2d8 & 8) != 0) {
              if ((local_710->_padding_ == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("RHICmdList",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshElementCollector.h"
                                      ,0x46,L""), bVar24)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              SetupRayTracingDynamicInstances
                        (this,(FRHICommandListBase *)pFVar23->_padding_,uVar31,uVar43);
              iVar28 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (4,4,uVar31,&local_750,(int *)&local_748,
                                  (int *)((longlong)&local_748 + 4));
              memset(local_750.Data + (longlong)iVar28 * 4,0,(longlong)(int)uVar31 << 2);
              iVar28 = (int)local_748;
              uVar40 = (ulonglong)(int)local_748;
              pFVar53 = local_750.Data + uVar40 * 4;
              FVar47.Data = local_750.Data;
              while( true ) {
                if ((int)uVar40 != iVar28) {
                  local_787 = 0;
                  `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(&local_787);
                }
                if (FVar47.Data == pFVar53) break;
                *(undefined4 *)FVar47.Data = 0xffffffff;
                FVar47.Data = FVar47.Data + 4;
                uVar40 = local_748 & 0xffffffff;
              }
              if ((int)local_780 < 0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidArrayNum((ulonglong)local_780);
              }
              uVar29 = local_77c;
              if (local_770._4_4_ < (int)local_780) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x70,8,local_780,&local_778,(uint)local_770,
                           (int *)((longlong)&local_770 + 4));
                uVar29 = local_77c;
              }
            }
            if ((int)local_794 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)local_794);
            }
            if ((int)uStack_79c < (int)local_794) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,4,local_794,&local_7a8,local_7a0,(int *)&uStack_79c);
            }
            local_2e8.SecondaryData.Data = (TVector<double> *)0x0;
            local_2b0 = 0;
            local_2ac = 2;
            if ((int)uVar29 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar29);
            }
            if (2 < (int)uVar29) {
              UE::Core::Private::
              ReallocTo<2,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<UE::Math::TVector<double>_>_>
                        (0x18,8,uVar29,&local_2e8,0,(int *)&local_2ac);
            }
            pFVar53 = pFVar50 + (longlong)(int)uVar29 * 8;
            pTVar20 = CVarRayTracingRenderInstancesCulling.Ref;
            for (; CVarRayTracingRenderInstancesCulling.Ref = pTVar20, pFVar50 != pFVar53;
                pFVar50 = pFVar50 + 8) {
              lVar46 = *(longlong *)pFVar50;
              pFVar48 = (ForElementType<UE::Math::TVector<double>_> *)(lVar46 + 0xc30);
              pFVar35 = &local_2e8;
              if ((ForElementType<UE::Math::TVector<double>_> *)local_2e8.SecondaryData.Data !=
                  (ForElementType<UE::Math::TVector<double>_> *)0x0) {
                pFVar35 = (ForElementType<UE::Math::TVector<double>_> *)local_2e8.SecondaryData.Data
                ;
              }
              if (pFVar35 <= pFVar48) {
                pFVar35 = &local_2e8;
                if ((ForElementType<UE::Math::TVector<double>_> *)local_2e8.SecondaryData.Data !=
                    (ForElementType<UE::Math::TVector<double>_> *)0x0) {
                  pFVar35 = (ForElementType<UE::Math::TVector<double>_> *)
                            local_2e8.SecondaryData.Data;
                }
                if ((pFVar48 < (ForElementType<UE::Math::TVector<double>_> *)
                               (pFVar35->InlineData + (longlong)(int)local_2ac * 0x18)) &&
                   (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar24)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
              }
              if (local_2b0 == local_2ac) {
                local_2b0 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<UE::Math::TVector<double>_>_>
                                      (0x818,&local_2e8,(int *)&local_2ac);
              }
              lVar36 = (longlong)(int)local_2b0;
              local_2b0 = local_2b0 + 1;
              uVar4 = *(undefined8 *)(lVar46 + 0xc38);
              FVar42.Data = (TVector<double> *)&local_2e8;
              if ((ForElementType<UE::Math::TVector<double>_> *)local_2e8.SecondaryData.Data !=
                  (ForElementType<UE::Math::TVector<double>_> *)0x0) {
                FVar42.Data = local_2e8.SecondaryData.Data;
              }
              *(undefined8 *)
               (((ForElementType<UE::Math::TVector<double>_> *)FVar42.Data)->InlineData +
               lVar36 * 0x18) = *(undefined8 *)pFVar48->InlineData;
              *(undefined8 *)
               (((ForElementType<UE::Math::TVector<double>_> *)FVar42.Data)->InlineData +
                lVar36 * 0x18 + 8) = uVar4;
              *(undefined8 *)
               (((ForElementType<UE::Math::TVector<double>_> *)FVar42.Data)->InlineData +
               lVar36 * 0x18 + 0x10) = *(undefined8 *)(lVar46 + 0xc40);
              pTVar20 = CVarRayTracingRenderInstancesCulling.Ref;
            }
            bVar24 = IsInParallelRenderingThread();
            if ((!bVar24) &&
               (bVar24 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<6409875433831007955>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x6d3,"IsInParallelRenderingThread()"), bVar24)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            uVar51 = local_794;
            pTVar21 = CVarRayTracingInstancesCullAngle.Ref;
            fVar54 = __real_7f800000;
            uVar29 = __xmm_7fffffff7fffffff7fffffff7fffffff;
            auVar59._8_8_ = 0;
            auVar59._0_8_ = __real_3fd0000000000000;
            if (pTVar20->ShadowedValue[1] < 1) {
              uVar31 = 0;
              if (local_794 != 0) {
                do {
                  local_724.DistanceToView = -1.0;
                  local_724.InstanceIndex = uVar31;
                  if (((local_7a8.Data <= &local_724) &&
                      (&local_724 <
                       (FVisibleInstance *)(local_7a8.Data + (longlong)(int)uStack_79c * 8))) &&
                     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar24)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  if (local_7a0 == uStack_79c) {
                    local_7a0 = UE::Core::Private::
                                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                          (0x408,&local_7a8,(int *)&uStack_79c);
                  }
                  uVar32 = local_7a0 + 1;
                  uVar31 = uVar31 + 1;
                  *(ulonglong *)(local_7a8.Data + (longlong)(int)local_7a0 * 8) =
                       CONCAT44(local_724.DistanceToView,local_724.InstanceIndex);
                  local_7a0 = uVar32;
                } while (uVar31 < uVar51);
              }
            }
            else {
              bVar24 = IsInParallelRenderingThread();
              if ((!bVar24) &&
                 (bVar24 = UE::Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<6409875433831007955>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                      ,0x6d3,"IsInParallelRenderingThread()"), bVar24)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              fVar78 = pTVar21->ShadowedValue[1];
              if (__real_4333e666 <= pTVar21->ShadowedValue[1]) {
                fVar78 = __real_4333e666;
              }
              fVar78 = fVar78 * __real_3f000000;
              pFVar37 = GetCachedScalabilityCVars();
              pTVar21 = CVarRayTracingInstancesCullClusterRadius.Ref;
              iVar28 = (this->UserData_AllInstances).MinDrawDistance;
              fVar79 = pFVar37->ViewDistanceScale;
              fVar81 = (float)(this->UserData_AllInstances).EndCullDistance *
                       pFVar37->ViewDistanceScale;
              if ((fVar78 < 0.0) || (0.0 < fVar81)) {
                bVar24 = IsInParallelRenderingThread();
                if ((!bVar24) &&
                   (bVar24 = UE::Assert::Private::ExecCheckImplInternal
                                       (&bGEnsureHasExecuted<6409875433831007955>,false,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                        ,0x6d3,"IsInParallelRenderingThread()"), bVar24)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pTVar22 = CVarRayTracingInstancesLowScaleThreshold.Ref;
                if (fVar81 <= 0.0) {
                  fVar81 = fVar54;
                }
                fVar78 = pTVar21->ShadowedValue[1];
                if (fVar81 <= pTVar21->ShadowedValue[1]) {
                  fVar78 = fVar81;
                }
                bVar24 = IsInParallelRenderingThread();
                if ((!bVar24) &&
                   (bVar24 = UE::Assert::Private::ExecCheckImplInternal
                                       (&bGEnsureHasExecuted<6409875433831007955>,false,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                        ,0x6d3,"IsInParallelRenderingThread()"), bVar24)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pTVar21 = CVarRayTracingInstancesLowScaleCullRadius.Ref;
                fVar81 = pTVar22->ShadowedValue[1];
                bVar24 = IsInParallelRenderingThread();
                if ((!bVar24) &&
                   (bVar24 = UE::Assert::Private::ExecCheckImplInternal
                                       (&bGEnsureHasExecuted<6409875433831007955>,false,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                        ,0x6d3,"IsInParallelRenderingThread()"), bVar24)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                uVar51 = local_794;
                fVar1 = pTVar21->ShadowedValue[1];
                if ((fVar81 <= 0.0) || (fVar1 <= 0.0)) {
                  bVar24 = false;
                }
                else {
                  bVar24 = true;
                }
                uVar31 = 0;
                this = local_718;
                fVar54 = __real_7f800000;
                uVar43 = local_78c;
                if (local_794 != 0) {
                  do {
                    pFVar33 = local_6f0;
                    if (((local_6f0->CurrentWriterTag).Value != (atomic<unsigned_int>)0x0) &&
                       (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                           ("AccessTag.Kind == FAccessTag::EKind::Reader && CurrentWriterTag.Value == 0u || AccessTag.Kind == FAccessTag::EKind::Writer && CurrentWriterTag.Value == AccessTag.WriterTag"
                                            ,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                                            ,0x182,L""), bVar27)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    local_668 = 0;
                    FInstanceSceneDataBuffers::GetInstancePrimitiveRelativeBounds
                              (pFVar33,(FRenderBounds *)&local_648._s_0,uVar31,(FAccessTag)0x0);
                    uVar43 = local_2b0;
                    FVar42.Data = (TVector<double> *)&local_2e8;
                    if ((ForElementType<UE::Math::TVector<double>_> *)local_2e8.SecondaryData.Data
                        != (ForElementType<UE::Math::TVector<double>_> *)0x0) {
                      FVar42.Data = local_2e8.SecondaryData.Data;
                    }
                    uVar40 = (ulonglong)(int)local_2b0;
                    lVar46 = uVar40 * 0x18;
                    dVar10 = (double)local_648._s_0.X;
                    dVar15 = (double)local_648._s_0.Y;
                    dVar84 = (double)local_63c - dVar10;
                    dVar16 = (double)local_638 - dVar15;
                    dVar55 = (double)local_648._s_0.Z;
                    dVar19 = (double)local_634 - dVar55;
                    dVar85 = dVar84 * __real_3fe0000000000000;
                    dVar18 = dVar16 * __real_3fe0000000000000;
                    dVar83 = dVar19 * __real_3fe0000000000000;
                    dVar17 = (pFVar33->PrimitiveWorldSpaceOffset).field0_0x0._s_0.X;
                    dVar57 = (pFVar33->PrimitiveWorldSpaceOffset).field0_0x0._s_0.Y;
                    dVar82 = (pFVar33->PrimitiveWorldSpaceOffset).field0_0x0._s_0.Z;
                    auVar94._8_8_ = 0;
                    auVar94._0_8_ =
                         (dVar16 * dVar16 + dVar84 * dVar84 + dVar19 * dVar19) * auVar59._0_8_;
                    auVar59 = sqrtpd(auVar59,auVar94);
                    FVar49.Data = (TVector<double> *)&local_2e8;
                    fVar54 = __real_7f800000;
                    if ((ForElementType<UE::Math::TVector<double>_> *)local_2e8.SecondaryData.Data
                        != (ForElementType<UE::Math::TVector<double>_> *)0x0) {
                      FVar49.Data = local_2e8.SecondaryData.Data;
                    }
                    while( true ) {
                      fVar80 = fVar54;
                      if ((uint)uVar40 != uVar43) {
                        local_785 = 0;
                        `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2
                        ::<lambda_1>::operator()(&local_785);
                        uVar40 = (ulonglong)local_2b0;
                      }
                      if ((ForElementType<UE::Math::TVector<double>_> *)FVar49.Data ==
                          (ForElementType<UE::Math::TVector<double>_> *)
                          (((ForElementType<UE::Math::TVector<double>_> *)FVar42.Data)->InlineData +
                          lVar46)) break;
                      dVar19 = *(double *)
                                ((ForElementType<UE::Math::TVector<double>_> *)FVar49.Data)->
                                InlineData - (dVar85 + dVar10 + dVar17);
                      dVar84 = *(double *)
                                (((ForElementType<UE::Math::TVector<double>_> *)FVar49.Data)->
                                 InlineData + 8) - (dVar18 + dVar15 + dVar57);
                      dVar16 = *(double *)
                                (((ForElementType<UE::Math::TVector<double>_> *)FVar49.Data)->
                                 InlineData + 0x10) - (dVar83 + dVar55 + dVar82);
                      FVar49.Data = (TVector<double> *)
                                    (((ForElementType<UE::Math::TVector<double>_> *)FVar49.Data)->
                                     InlineData + 0x18);
                      auVar61._0_8_ = dVar84 * dVar84;
                      auVar61._8_8_ = 0;
                      auVar14._8_8_ = 0;
                      auVar14._0_8_ = dVar19 * dVar19 + auVar61._0_8_ + dVar16 * dVar16;
                      auVar94 = sqrtpd(auVar61,auVar14);
                      fVar54 = (float)auVar94._0_8_;
                      if (fVar80 <= (float)auVar94._0_8_) {
                        fVar54 = fVar80;
                      }
                    }
                    fVar54 = (float)((uint)(fVar80 - (float)auVar59._0_8_) & uVar29);
                    if (((((float)iVar28 * fVar79 <= fVar80) && (fVar80 <= fVar78)) ||
                        (fVar78 <= 0.0)) &&
                       (((fVar81 <= (float)auVar59._0_8_ || (!bVar24)) || (fVar54 <= fVar1)))) {
                      local_6f8.InstanceIndex = uVar31;
                      local_6f8.DistanceToView = fVar54;
                      if (((local_7a8.Data <= &local_6f8) &&
                          (&local_6f8 <
                           (FVisibleInstance *)(local_7a8.Data + (longlong)(int)uStack_79c * 8))) &&
                         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar27)) {
                        pcVar9 = (code *)swi(3);
                        (*pcVar9)();
                        return;
                      }
                      if (local_7a0 == uStack_79c) {
                        local_7a0 = UE::Core::Private::
                                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                              (0x408,&local_7a8,(int *)&uStack_79c);
                      }
                      *(ulonglong *)(local_7a8.Data + (longlong)(int)local_7a0 * 8) =
                           CONCAT44(local_6f8.DistanceToView,local_6f8.InstanceIndex);
                      local_7a0 = local_7a0 + 1;
                    }
                    auVar59._8_8_ = 0;
                    auVar59._0_8_ = __real_3fd0000000000000;
                    uVar31 = uVar31 + 1;
                    this = local_718;
                    pFVar52 = local_730;
                    fVar54 = __real_7f800000;
                    uVar43 = local_78c;
                  } while (uVar31 < uVar51);
                }
              }
              else {
                fVar78 = tanf(fVar78 * __real_3c8efa36);
                pFVar33 = local_6f0;
                uVar51 = 0;
                if (local_794 == 0) {
                  auVar59._8_8_ = 0;
                  auVar59._0_8_ = __real_3fd0000000000000;
                }
                else {
                  do {
                    if (((pFVar33->CurrentWriterTag).Value != (atomic<unsigned_int>)0x0) &&
                       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                           ("AccessTag.Kind == FAccessTag::EKind::Reader && CurrentWriterTag.Value == 0u || AccessTag.Kind == FAccessTag::EKind::Writer && CurrentWriterTag.Value == AccessTag.WriterTag"
                                            ,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                                            ,0x182,L""), bVar24)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    local_670 = 0;
                    FInstanceSceneDataBuffers::GetInstancePrimitiveRelativeBounds
                              (pFVar33,(FRenderBounds *)&local_660._s_0,uVar51,(FAccessTag)0x0);
                    local_2a8._s_0.X = (double)local_660._s_0.X;
                    local_278 = 1;
                    local_2a8._s_0.Y = (double)local_660._s_0.Y;
                    local_2a8._s_0.Z = (double)local_660._s_0.Z;
                    local_290 = (double)local_654;
                    local_288 = (double)local_650;
                    local_280 = (double)local_64c;
                    UE::Math::TBoxSphereBounds<double,double>::TBoxSphereBounds<double,double>
                              ((TBoxSphereBounds<double,double> *)&local_530[0]._s_0,
                               (TBox<double> *)&local_2a8._s_0);
                    uVar43 = local_2b0;
                    uVar40 = (ulonglong)(int)local_2b0;
                    FVar42.Data = (TVector<double> *)&local_2e8;
                    if ((ForElementType<UE::Math::TVector<double>_> *)local_2e8.SecondaryData.Data
                        != (ForElementType<UE::Math::TVector<double>_> *)0x0) {
                      FVar42.Data = local_2e8.SecondaryData.Data;
                    }
                    dVar82 = (double)local_530[0]._0_8_ +
                             (pFVar33->PrimitiveWorldSpaceOffset).field0_0x0._s_0.X;
                    dVar17 = (double)local_530[0]._8_8_ +
                             (pFVar33->PrimitiveWorldSpaceOffset).field0_0x0._s_0.Y;
                    dVar57 = (double)local_530[0]._16_8_ +
                             (pFVar33->PrimitiveWorldSpaceOffset).field0_0x0._s_0.Z;
                    FVar49.Data = (TVector<double> *)&local_2e8;
                    if ((ForElementType<UE::Math::TVector<double>_> *)local_2e8.SecondaryData.Data
                        != (ForElementType<UE::Math::TVector<double>_> *)0x0) {
                      FVar49.Data = local_2e8.SecondaryData.Data;
                    }
                    lVar46 = uVar40 * 0x18;
                    fVar79 = fVar54;
                    local_530[0]._0_8_ = dVar82;
                    local_530[0]._8_8_ = dVar17;
                    local_530[0]._16_8_ = dVar57;
                    while( true ) {
                      fVar81 = fVar79;
                      if ((uint)uVar40 != uVar43) {
                        local_786 = 0;
                        `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2
                        ::<lambda_1>::operator()(&local_786);
                        uVar40 = (ulonglong)local_2b0;
                      }
                      if ((ForElementType<UE::Math::TVector<double>_> *)FVar49.Data ==
                          (ForElementType<UE::Math::TVector<double>_> *)
                          (((ForElementType<UE::Math::TVector<double>_> *)FVar42.Data)->InlineData +
                          lVar46)) break;
                      dVar15 = *(double *)
                                ((ForElementType<UE::Math::TVector<double>_> *)FVar49.Data)->
                                InlineData - dVar82;
                      dVar55 = *(double *)
                                (((ForElementType<UE::Math::TVector<double>_> *)FVar49.Data)->
                                 InlineData + 8) - dVar17;
                      dVar10 = *(double *)
                                (((ForElementType<UE::Math::TVector<double>_> *)FVar49.Data)->
                                 InlineData + 0x10) - dVar57;
                      FVar49.Data = (TVector<double> *)
                                    (((ForElementType<UE::Math::TVector<double>_> *)FVar49.Data)->
                                     InlineData + 0x18);
                      auVar58._0_8_ = dVar55 * dVar55;
                      auVar58._8_8_ = 0;
                      auVar11._8_8_ = 0;
                      auVar11._0_8_ = dVar15 * dVar15 + auVar58._0_8_ + dVar10 * dVar10;
                      auVar59 = sqrtpd(auVar58,auVar11);
                      fVar79 = (float)auVar59._0_8_;
                      if (fVar81 <= (float)auVar59._0_8_) {
                        fVar79 = fVar81;
                      }
                    }
                    if (fVar81 * fVar78 <= (float)local_500) {
                      local_708.DistanceToView = (float)((uint)(fVar81 - (float)local_500) & uVar29)
                      ;
                      local_708.InstanceIndex = uVar51;
                      if (((local_7a8.Data <= &local_708) &&
                          (&local_708 <
                           (FVisibleInstance *)(local_7a8.Data + (longlong)(int)uStack_79c * 8))) &&
                         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar24)) {
                        pcVar9 = (code *)swi(3);
                        (*pcVar9)();
                        return;
                      }
                      if (local_7a0 == uStack_79c) {
                        local_7a0 = UE::Core::Private::
                                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                              (0x408,&local_7a8,(int *)&uStack_79c);
                      }
                      *(ulonglong *)(local_7a8.Data + (longlong)(int)local_7a0 * 8) =
                           CONCAT44(local_708.DistanceToView,local_708.InstanceIndex);
                      local_7a0 = local_7a0 + 1;
                    }
                    uVar51 = uVar51 + 1;
                  } while (uVar51 < local_794);
                  auVar59._8_8_ = 0;
                  auVar59._0_8_ = __real_3fd0000000000000;
                  pFVar52 = local_730;
                  uVar43 = local_78c;
                }
              }
            }
            pTVar21 = CVarRayTracingInstancesSimulationClusterRadius.Ref;
            uVar51 = 0;
            if (((this->field_0x2d8 & 8) != 0) && (0 < (int)local_7a0)) {
              bVar24 = IsInParallelRenderingThread();
              if ((!bVar24) &&
                 (bVar24 = UE::Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<6409875433831007955>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                      ,0x6d3,"IsInParallelRenderingThread()"), bVar24)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              fVar78 = pTVar21->ShadowedValue[1];
              local_700 = (FScriptContainerElement *)CONCAT44(local_700._4_4_,fVar78);
              if ((0.0 < fVar78) && (local_780 < local_7a0)) {
                iVar28 = TConsoleVariableData<int>::GetValueOnRenderThread
                                   (CVarRayTracingRenderInstancesCulling.Ref);
                pFVar33 = local_6f0;
                dVar17 = __real_3fe0000000000000;
                if ((iVar28 == 0) && (local_7a0 != 0)) {
                  do {
                    if (((pFVar33->CurrentWriterTag).Value != (atomic<unsigned_int>)0x0) &&
                       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                           ("AccessTag.Kind == FAccessTag::EKind::Reader && CurrentWriterTag.Value == 0u || AccessTag.Kind == FAccessTag::EKind::Writer && CurrentWriterTag.Value == AccessTag.WriterTag"
                                            ,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                                            ,0x182,L""), bVar24)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    local_678 = 0;
                    FInstanceSceneDataBuffers::GetInstancePrimitiveRelativeBounds
                              (pFVar33,(FRenderBounds *)&local_630._s_0,uVar51,(FAccessTag)0x0);
                    uVar43 = local_2b0;
                    FVar42.Data = (TVector<double> *)&local_2e8;
                    if ((ForElementType<UE::Math::TVector<double>_> *)local_2e8.SecondaryData.Data
                        != (ForElementType<UE::Math::TVector<double>_> *)0x0) {
                      FVar42.Data = local_2e8.SecondaryData.Data;
                    }
                    uVar40 = (ulonglong)(int)local_2b0;
                    FVar49.Data = (TVector<double> *)&local_2e8;
                    if ((ForElementType<UE::Math::TVector<double>_> *)local_2e8.SecondaryData.Data
                        != (ForElementType<UE::Math::TVector<double>_> *)0x0) {
                      FVar49.Data = local_2e8.SecondaryData.Data;
                    }
                    lVar46 = uVar40 * 0x18;
                    dVar15 = (double)local_630._s_0.X;
                    dVar55 = (double)local_630._s_0.Y;
                    dVar83 = (double)local_624 - dVar15;
                    dVar18 = (double)local_620 - dVar55;
                    dVar16 = (double)local_630._s_0.Z;
                    dVar19 = (double)local_61c - dVar16;
                    dVar57 = (pFVar33->PrimitiveWorldSpaceOffset).field0_0x0._s_0.X;
                    dVar82 = (pFVar33->PrimitiveWorldSpaceOffset).field0_0x0._s_0.Y;
                    dVar10 = (pFVar33->PrimitiveWorldSpaceOffset).field0_0x0._s_0.Z;
                    auVar12._8_8_ = 0;
                    auVar12._0_8_ =
                         (dVar83 * dVar83 + dVar18 * dVar18 + dVar19 * dVar19) * auVar59._0_8_;
                    auVar94 = sqrtpd(auVar59,auVar12);
                    fVar78 = fVar54;
                    while( true ) {
                      fVar79 = fVar78;
                      if ((uint)uVar40 != uVar43) {
                        local_784[0] = 0;
                        `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2
                        ::<lambda_1>::operator()(local_784);
                        uVar40 = (ulonglong)local_2b0;
                      }
                      if ((ForElementType<UE::Math::TVector<double>_> *)FVar49.Data ==
                          (ForElementType<UE::Math::TVector<double>_> *)
                          (((ForElementType<UE::Math::TVector<double>_> *)FVar42.Data)->InlineData +
                          lVar46)) break;
                      dVar84 = *(double *)
                                ((ForElementType<UE::Math::TVector<double>_> *)FVar49.Data)->
                                InlineData - (dVar83 * dVar17 + dVar15 + dVar57);
                      dVar85 = *(double *)
                                (((ForElementType<UE::Math::TVector<double>_> *)FVar49.Data)->
                                 InlineData + 8) - (dVar18 * dVar17 + dVar55 + dVar82);
                      dVar56 = *(double *)
                                (((ForElementType<UE::Math::TVector<double>_> *)FVar49.Data)->
                                 InlineData + 0x10) - (dVar19 * dVar17 + dVar16 + dVar10);
                      FVar49.Data = (TVector<double> *)
                                    (((ForElementType<UE::Math::TVector<double>_> *)FVar49.Data)->
                                     InlineData + 0x18);
                      auVar60._0_8_ = dVar56 * dVar56;
                      auVar60._8_8_ = 0;
                      auVar13._8_8_ = 0;
                      auVar13._0_8_ = dVar85 * dVar85 + dVar84 * dVar84 + auVar60._0_8_;
                      auVar59 = sqrtpd(auVar60,auVar13);
                      fVar78 = (float)auVar59._0_8_;
                      if (fVar79 <= (float)auVar59._0_8_) {
                        fVar78 = fVar79;
                      }
                    }
                    uVar43 = 0;
                    if ((int)uVar51 < (int)local_7a0) {
                      uVar43 = ~uVar51 >> 0x1f;
                    }
                    if ((uVar43 == 0) &&
                       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar24)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    auVar59._8_8_ = 0;
                    auVar59._0_8_ = __real_3fd0000000000000;
                    lVar46 = (longlong)(int)uVar51;
                    uVar51 = uVar51 + 1;
                    *(uint *)(local_7a8.Data + lVar46 * 8 + 4) =
                         (uint)(fVar79 - (float)auVar94._0_8_) & uVar29;
                  } while (uVar51 < local_7a0);
                  this = local_718;
                  fVar78 = local_700._0_4_;
                  uVar43 = local_78c;
                }
                uVar29 = local_7a0 - 1;
                uVar31 = 0;
                uVar51 = local_7a0;
                if (uVar29 != 0) {
                  do {
                    uVar32 = 0;
                    if ((int)uVar29 < (int)uVar51) {
                      uVar32 = ~uVar29 >> 0x1f;
                    }
                    if ((uVar32 == 0) &&
                       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), uVar51 = local_7a0, bVar24)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    lVar46 = (longlong)(int)uVar29;
                    if (*(float *)(local_7a8.Data + lVar46 * 8 + 4) <= fVar78) {
                      uVar32 = 0;
                      if ((int)uVar29 < (int)uVar51) {
                        uVar32 = ~uVar29 >> 0x1f;
                      }
                      if ((uVar32 == 0) &&
                         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), uVar51 = local_7a0, bVar24)) {
                        pcVar9 = (code *)swi(3);
                        (*pcVar9)();
                        return;
                      }
                      FVar47.Data = local_7a8.Data;
                      uVar32 = 0;
                      if ((int)uVar31 < (int)uVar51) {
                        uVar32 = ~uVar31 >> 0x1f;
                      }
                      if ((uVar32 == 0) &&
                         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar24)) {
                        pcVar9 = (code *)swi(3);
                        (*pcVar9)();
                        return;
                      }
                      lVar36 = (longlong)(int)uVar31;
                      uVar31 = uVar31 + 1;
                      uVar4 = *(undefined8 *)(local_7a8.Data + lVar36 * 8);
                      *(undefined8 *)(local_7a8.Data + lVar36 * 8) =
                           *(undefined8 *)(FVar47.Data + lVar46 * 8);
                      *(undefined8 *)(FVar47.Data + lVar46 * 8) = uVar4;
                      uVar51 = local_7a0;
                    }
                    else {
                      uVar29 = uVar29 - 1;
                    }
                    pFVar52 = local_730;
                  } while (uVar31 < uVar29);
                }
                FVar47.Data = local_7a8.Data;
                if (((int)uVar31 < 0) &&
                   (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                       ("ArrayNum >= 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0xfe,L""), bVar24)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                AlgoImpl::
                IntroSortInternal<_FInstancedStaticMeshSceneProxy::GetDynamicRayTracingInstances_::__l2::FVisibleInstance,int,UE::Core::Private::TProjectionMemberData<float__FInstancedStaticMeshSceneProxy::GetDynamicRayTracingInstances_::__l2::FVisibleInstance::*>,TLess<void>_>
                          ((FVisibleInstance *)FVar47.Data,uVar31,
                           (TProjectionMemberData<float__public:_virtual_void___cdecl_FInstancedStaticMeshSceneProxy::GetDynamicRayTracingInstances(FRayTracingInstanceCollector_&)_::_2_::FVisibleInstance::*>
                            )0x4,local_798[0]);
              }
            }
            uVar29 = local_780;
            local_6c0 = 0x1000000;
            local_6e0.Data = (FScriptContainerElement *)0x0;
            local_6d4 = 0;
            local_6d0 = (FMeshBatch *)0x0;
            iStack_6c8 = 0;
            local_6b8.Data = (FScriptContainerElement *)0x0;
            local_6b0 = 0;
            local_6a8 = (uint *)0x0;
            iStack_6a0 = 0;
            local_698 = (void *)0x0;
            local_690 = 0;
            local_688 = (TMatrix<double> *)0x0;
            iStack_680 = 0;
            local_6e8 = pFVar52;
            DestructItems<FMeshBatch,int>((FMeshBatch *)0x0,0);
            FVar47.Data = local_768.Data;
            iVar28 = (int)local_760;
            local_6d8 = (int)local_760;
            if (((int)local_760 != 0) || (local_6d4 != 0)) {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xe0,8,(int)local_760,local_6d4,&local_6e0,(int)local_760,&local_6d4);
              ConstructItems<FMeshBatch,FMeshBatch,int>
                        (local_6e0.Data,(FMeshBatch *)FVar47.Data,iVar28);
            }
            if (local_6b0._4_4_ < (int)local_794) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,local_794,&local_6b8,(int)local_6b0,(int *)((longlong)&local_6b0 + 4));
            }
            uVar31 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
            uVar51 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
            dVar17 = __real_3e45798ee0000000;
            uVar41 = (ulonglong)(int)local_7a0;
            local_730 = (FRayTracingGeometry *)(local_7a8.Data + uVar41 * 8);
            local_700 = (FScriptContainerElement *)CONCAT44(local_700._4_4_,local_7a0);
            uVar40 = uVar41;
            pFVar52 = local_730;
            FVar47.Data = local_7a8.Data;
            lVar46 = local_758;
            do {
              while( true ) {
                if ((int)uVar41 != (int)uVar40) {
                  local_798[0] = (TLess<void>)0x0;
                  `TCheckedPointerIterator<`FInstancedStaticMeshSceneProxy::GetDynamicRayTracingInstances'::__l2::FVisibleInstance,int,0>
                  ::operator!='::__l2::<lambda_1>::operator()(local_798);
                }
                uVar45 = local_738;
                uVar32 = local_77c;
                if ((FRayTracingGeometry *)FVar47.Data == pFVar52) {
                  if ((0 < (int)local_6b0) &&
                     (uVar43 = 0, iVar28 = (int)local_6b0, 0 < (int)local_77c)) {
                    do {
                      iVar44 = local_6d8;
                      FVar47.Data = local_6e0.Data;
                      if ((uVar45 >> (uVar43 & 0x1f) & 1) != 0) {
                        local_610.Geometry = local_6e8;
                        local_610.Materials.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                        local_610.Materials.ArrayNum = local_6d8;
                        if (local_6d8 == 0) {
                          local_610.Materials.ArrayMax = 0;
                        }
                        else {
                          UE::Core::Private::
                          ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0xe0,8,local_6d8,0,&local_610.Materials.AllocatorInstance,
                                     local_6d8,&local_610.Materials.ArrayMax);
                          ConstructItems<FMeshBatch,FMeshBatch,int>
                                    (local_610.Materials.AllocatorInstance.Data,
                                     (FMeshBatch *)FVar47.Data,iVar44);
                          iVar28 = (int)local_6b0;
                        }
                        FVar47.Data = local_6b8.Data;
                        local_610.bApplyLocalBoundsTransform = (bool)(undefined1)local_6c0;
                        local_610.bThinGeometry = (bool)local_6c0._1_1_;
                        local_610.InstanceLayer = local_6c0._2_1_;
                        local_610.bInstanceMaskAndFlagsDirty = (bool)local_6c0._3_1_;
                        local_610.NumTransforms = local_6c0._4_4_;
                        local_610.PrimitiveInstanceIndices.AllocatorInstance.Data =
                             (FScriptContainerElement *)0x0;
                        local_610.MaterialsView._12_4_ = uStack_6c4;
                        local_610.MaterialsView.ArrayNum = iStack_6c8;
                        local_610.MaterialsView.DataPtr = local_6d0;
                        local_610.PrimitiveInstanceIndices.ArrayNum = iVar28;
                        if (iVar28 == 0) {
                          local_610.PrimitiveInstanceIndices.ArrayMax = 0;
                        }
                        else {
                          UE::Core::Private::
                          ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (4,4,iVar28,0,
                                     &local_610.PrimitiveInstanceIndices.AllocatorInstance,iVar28,
                                     &local_610.PrimitiveInstanceIndices.ArrayMax);
                          memcpy(local_610.PrimitiveInstanceIndices.AllocatorInstance.Data,
                                 FVar47.Data,(longlong)iVar28 << 2);
                        }
                        pvVar8 = local_698;
                        lVar46 = (longlong)(int)local_690;
                        local_610.PrimitiveInstanceIndicesView._12_4_ = uStack_69c;
                        local_610.PrimitiveInstanceIndicesView.ArrayNum = iStack_6a0;
                        local_610.InstanceTransforms.AllocatorInstance.Data =
                             (FScriptContainerElement *)0x0;
                        local_610.InstanceTransforms.ArrayNum = (int)local_690;
                        local_610.PrimitiveInstanceIndicesView.DataPtr = local_6a8;
                        if ((int)local_690 == 0) {
                          local_610.InstanceTransforms.ArrayMax = 0;
                        }
                        else {
                          UE::Core::Private::
                          ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x80,0x10,(int)local_690,0,
                                     &local_610.InstanceTransforms.AllocatorInstance,(int)local_690,
                                     &local_610.InstanceTransforms.ArrayMax);
                          memcpy(local_610.InstanceTransforms.AllocatorInstance.Data,pvVar8,
                                 lVar46 << 7);
                        }
                        local_610.InstanceTransformsView._12_4_ = uStack_67c;
                        local_610.InstanceTransformsView.ArrayNum = iStack_680;
                        local_610.InstanceTransformsView.DataPtr = local_688;
                        FRayTracingInstanceCollector::AddRayTracingInstance
                                  (local_710,uVar43,&local_610);
                        iVar28 = (int)local_6b0;
                      }
                      uVar43 = uVar43 + 1;
                    } while ((int)uVar43 < (int)uVar32);
                  }
                  uVar40 = (ulonglong)(int)(uint)local_770;
                  local_728 = (uint)local_770;
                  pFVar50 = local_778.Data + 0x38;
                  pFVar53 = local_778.Data + uVar40 * 0x70;
                  while( true ) {
                    if ((uint)local_770 != (int)uVar40) {
                      `TCheckedPointerIterator<FRayTracingInstance,int,0>::operator!='::__l2::
                      <lambda_1>::operator()(local_740);
                    }
                    pFVar23 = local_710;
                    if (pFVar50 + -0x38 == pFVar53) break;
                    uVar29 = 0;
                    uVar43 = local_738;
                    if (0 < (int)uVar32) {
                      do {
                        if ((uVar43 >> (uVar29 & 0x1f) & 1) != 0) {
                          iVar28 = *(int *)(pFVar50 + -0x28);
                          local_5a0.Geometry = *(FRayTracingGeometry **)(pFVar50 + -0x38);
                          pFVar6 = *(FMeshBatch **)(pFVar50 + -0x30);
                          local_5a0.Materials.AllocatorInstance.Data =
                               (FScriptContainerElement *)0x0;
                          local_5a0.Materials.ArrayNum = iVar28;
                          if (iVar28 == 0) {
                            local_5a0.Materials.ArrayMax = 0;
                          }
                          else {
                            UE::Core::Private::
                            ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0xe0,8,iVar28,0,&local_5a0.Materials.AllocatorInstance,iVar28
                                       ,&local_5a0.Materials.ArrayMax);
                            ConstructItems<FMeshBatch,FMeshBatch,int>
                                      (local_5a0.Materials.AllocatorInstance.Data,pFVar6,iVar28);
                          }
                          local_5a0.bApplyLocalBoundsTransform = *(bool *)(pFVar50 + -0x10);
                          local_5a0.PrimitiveInstanceIndices.ArrayNum = *(int *)pFVar50;
                          lVar46 = (longlong)local_5a0.PrimitiveInstanceIndices.ArrayNum;
                          pFVar7 = (((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)
                                    (pFVar50 + -8))->AllocatorInstance).Data;
                          local_5a0.bThinGeometry = *(bool *)(pFVar50 + -0xf);
                          local_5a0.InstanceLayer = *(ERayTracingInstanceLayer *)(pFVar50 + -0xe);
                          local_5a0.bInstanceMaskAndFlagsDirty = *(bool *)(pFVar50 + -0xd);
                          local_5a0.NumTransforms = *(uint *)(pFVar50 + -0xc);
                          local_5a0.PrimitiveInstanceIndices.AllocatorInstance.Data =
                               (FScriptContainerElement *)0x0;
                          local_5a0.MaterialsView.DataPtr = *(FMeshBatch **)(pFVar50 + -0x20);
                          local_5a0.MaterialsView._8_8_ = *(undefined8 *)(pFVar50 + -0x18);
                          if (local_5a0.PrimitiveInstanceIndices.ArrayNum == 0) {
                            local_5a0.PrimitiveInstanceIndices.ArrayMax = 0;
                          }
                          else {
                            UE::Core::Private::
                            ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (4,4,local_5a0.PrimitiveInstanceIndices.ArrayNum,0,
                                       &local_5a0.PrimitiveInstanceIndices.AllocatorInstance,
                                       local_5a0.PrimitiveInstanceIndices.ArrayNum,
                                       &local_5a0.PrimitiveInstanceIndices.ArrayMax);
                            memcpy(local_5a0.PrimitiveInstanceIndices.AllocatorInstance.Data,pFVar7,
                                   lVar46 << 2);
                          }
                          local_5a0.InstanceTransforms.ArrayNum = *(int *)(pFVar50 + 0x20);
                          lVar46 = (longlong)local_5a0.InstanceTransforms.ArrayNum;
                          pvVar8 = *(void **)(pFVar50 + 0x18);
                          local_5a0.InstanceTransforms.AllocatorInstance.Data =
                               (FScriptContainerElement *)0x0;
                          local_5a0.PrimitiveInstanceIndicesView.DataPtr = *(uint **)(pFVar50 + 8);
                          local_5a0.PrimitiveInstanceIndicesView._8_8_ =
                               *(undefined8 *)(pFVar50 + 0x10);
                          if (local_5a0.InstanceTransforms.ArrayNum == 0) {
                            local_5a0.InstanceTransforms.ArrayMax = 0;
                          }
                          else {
                            UE::Core::Private::
                            ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x80,0x10,local_5a0.InstanceTransforms.ArrayNum,0,
                                       &local_5a0.InstanceTransforms.AllocatorInstance,
                                       local_5a0.InstanceTransforms.ArrayNum,
                                       &local_5a0.InstanceTransforms.ArrayMax);
                            memcpy(local_5a0.InstanceTransforms.AllocatorInstance.Data,pvVar8,
                                   lVar46 << 7);
                          }
                          local_5a0.InstanceTransformsView.DataPtr =
                               *(TMatrix<double> **)(pFVar50 + 0x28);
                          local_5a0.InstanceTransformsView._8_8_ = *(undefined8 *)(pFVar50 + 0x30);
                          FRayTracingInstanceCollector::AddRayTracingInstance
                                    (pFVar23,uVar29,&local_5a0);
                          uVar43 = local_738;
                        }
                        uVar29 = uVar29 + 1;
                      } while ((int)uVar29 < (int)uVar32);
                      uVar40 = (ulonglong)local_728;
                    }
                    pFVar50 = pFVar50 + 0x70;
                  }
                  if (local_698 != (void *)0x0) {
                    FMemory::Free(local_698);
                  }
                  if (local_6b8.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_6b8.Data);
                  }
                  DestructItems<FMeshBatch,int>((FMeshBatch *)local_6e0.Data,local_6d8);
                  if ((FMeshBatch *)local_6e0.Data != (FMeshBatch *)0x0) {
                    FMemory::Free(local_6e0.Data);
                  }
                  if ((ForElementType<UE::Math::TVector<double>_> *)local_2e8.SecondaryData.Data !=
                      (ForElementType<UE::Math::TVector<double>_> *)0x0) {
                    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                              (local_2e8.SecondaryData.Data);
                  }
                  DestructItems<FRayTracingInstance,int>
                            ((FRayTracingInstance *)local_778.Data,(uint)local_770);
                  if ((FRayTracingInstance *)local_778.Data != (FRayTracingInstance *)0x0) {
                    FMemory::Free(local_778.Data);
                  }
                  if ((FVisibleInstance *)local_7a8.Data != (FVisibleInstance *)0x0) {
                    FMemory::Free(local_7a8.Data);
                  }
                  if (local_750.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_750.Data);
                  }
                  DestructItems<FMeshBatch,int>((FMeshBatch *)local_768.Data,(int)local_760);
                  if ((FMeshBatch *)local_768.Data == (FMeshBatch *)0x0) {
                    return;
                  }
                  FMemory::Free(local_768.Data);
                  return;
                }
                local_790 = ((FVisibleInstance *)FVar47.Data)->InstanceIndex;
                FInstanceSceneDataBuffers::GetInstanceToWorld
                          (local_6f0,&local_1e8,local_790,(FAccessTag)0x0);
                uVar29 = local_790 % uVar29;
                lVar36 = (longlong)(int)uVar29;
                if ((this->field_0x2d8 & 8) != 0) break;
LAB_147d03c24:
                if (((local_6b8.Data <= (FScriptContainerElement *)&local_790) &&
                    ((FScriptContainerElement *)&local_790 <
                     local_6b8.Data + (longlong)local_6b0._4_4_ * 4)) &&
                   (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar24)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                iVar28 = (int)local_6b0;
                if ((int)local_6b0 == local_6b0._4_4_) {
                  iVar28 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&local_6b8,(int *)((longlong)&local_6b0 + 4));
                }
                local_6b0 = CONCAT44(local_6b0._4_4_,iVar28 + 1);
                FVar47.Data = FVar47.Data + 8;
                *(uint *)(local_6b8.Data + (longlong)iVar28 * 4) = local_790;
                uVar41 = (ulonglong)local_7a0;
                uVar40 = (ulonglong)local_700 & 0xffffffff;
                uVar29 = local_780;
              }
              uVar32 = 0;
              if ((int)uVar43 <
                  (this->InstancedRenderData).RayTracingProxyVertexFactories.Array.ArrayNum) {
                uVar32 = local_73c;
              }
              if ((uVar32 == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , lVar46 = local_758, bVar24)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              lVar38 = (**(code **)(**(longlong **)
                                      ((this->InstancedRenderData).RayTracingProxyVertexFactories.
                                       Array.AllocatorInstance.Data + lVar46 * 8) + 0x30))();
              if ((*(uint *)(lVar38 + 0x38) & 0x400) == 0) goto LAB_147d03c24;
              uVar45 = ~uVar29 >> 0x1f;
              uVar32 = 0;
              if ((int)uVar29 < (int)local_748) {
                uVar32 = uVar45;
              }
              if ((uVar32 == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar24)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              if (*(int *)(local_750.Data + lVar36 * 4) == -1) {
                plVar2 = *(longlong **)(*(longlong *)&this->field_0x280 + 0x48);
                uVar32 = 0;
                if ((int)uVar43 < (int)plVar2[1]) {
                  uVar32 = local_73c;
                }
                if ((uVar32 == 0) &&
                   (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar24)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                uVar43 = *(uint *)(*(longlong *)(*(longlong *)(*plVar2 + local_758 * 8) + 0x18) +
                                  0xfc);
                uVar32 = 0;
                if ((int)uVar29 < (this->RayTracingDynamicInstanceData).ArrayNum) {
                  uVar32 = uVar45;
                }
                if ((uVar32 == 0) &&
                   (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar24)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pFVar52 = (FRayTracingGeometry *)
                          ((this->RayTracingDynamicInstanceData).AllocatorInstance.Data +
                          lVar36 * 0x130);
                uVar62 = (uint)local_770;
                uVar32 = 0;
                if ((int)uVar29 < (int)local_748) {
                  uVar32 = uVar45;
                }
                if ((uVar32 == 0) &&
                   (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar24)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                *(undefined4 *)(local_750.Data + lVar36 * 4) = uVar62;
                iVar28 = (uint)local_770;
                if ((uint)local_770 == local_770._4_4_) {
                  iVar28 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x870,&local_778,(int *)((longlong)&local_770 + 4));
                }
                local_770 = CONCAT44(local_770._4_4_,iVar28 + 1);
                pFVar50 = local_778.Data + (longlong)iVar28 * 0x70;
                DefaultConstructItems<FRayTracingInstance,int>(pFVar50,1);
                *(FRayTracingGeometry **)&pFVar50->field_0x0 = pFVar52;
                pFVar53 = pFVar50 + 8;
                if (pFVar53 != (FScriptContainerElement *)&local_768) {
                    /* WARNING: Load size is inaccurate */
                  DestructItems<FMeshBatch,int>((FMeshBatch *)*pFVar53,*(int *)(pFVar50 + 0x10));
                  FVar5.Data = local_768.Data;
                  iVar28 = (int)local_760;
                  pFVar7 = pFVar50 + 0x14;
                  *(int *)(pFVar50 + 0x10) = (int)local_760;
                  if (((int)local_760 == 0) && (*(int *)pFVar7 == 0)) {
                    *(int *)pFVar7 = 0;
                  }
                  else {
                    UE::Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0xe0,8,(int)local_760,*(int *)pFVar7,(ForAnyElementType *)pFVar53,
                               (int)local_760,(int *)pFVar7);
                    /* WARNING: Load size is inaccurate */
                    ConstructItems<FMeshBatch,FMeshBatch,int>
                              (*pFVar53,(FMeshBatch *)FVar5.Data,iVar28);
                  }
                }
                if (*(int *)(pFVar50 + 0x3c) < (int)local_794) {
                  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,local_794,(ForAnyElementType *)(pFVar50 + 0x30),
                             *(int *)(pFVar50 + 0x38),(int *)(pFVar50 + 0x3c));
                }
                iVar28 = *(int *)(pFVar50 + 0x10);
                    /* WARNING: Load size is inaccurate */
                FVar5.Data = *pFVar53;
                local_458.Data = (FScriptContainerElement *)0x0;
                local_450 = CONCAT44(local_450._4_4_,iVar28);
                if (iVar28 == 0) {
                  local_450 = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0xe0,8,iVar28,0,&local_458,iVar28,(int *)((longlong)&local_450 + 4));
                  ConstructItems<FMeshBatch,FMeshBatch,int>
                            (local_458.Data,(FMeshBatch *)FVar5.Data,iVar28);
                }
                local_43c = (pFVar52->Initializer).TotalPrimitiveCount;
                local_440 = uVar43 * 0xc;
                local_448 = 0;
                local_430 = (FRWBuffer *)0x0;
                local_428 = 1;
                local_424 = local_790;
                local_444 = uVar43;
                local_438 = pFVar52;
                if ((((((dVar17 < (double)CONCAT44((uint)((ulonglong)local_1e8.M[0][0] >> 0x20) &
                                                   uVar31,SUB84(local_1e8.M[0][0],0) & uVar51)) ||
                       (dVar17 < (double)CONCAT44((uint)((ulonglong)local_1e8.M[0][1] >> 0x20) &
                                                  uVar31,SUB84(local_1e8.M[0][1],0) & uVar51))) ||
                      (dVar17 < (double)CONCAT44((uint)((ulonglong)local_1e8.M[0][2] >> 0x20) &
                                                 uVar31,SUB84(local_1e8.M[0][2],0) & uVar51))) ||
                     ((dVar17 < (double)CONCAT44((uint)((ulonglong)local_1e8.M[1][0] >> 0x20) &
                                                 uVar31,SUB84(local_1e8.M[1][0],0) & uVar51) ||
                      (dVar17 < (double)CONCAT44((uint)((ulonglong)local_1e8.M[1][1] >> 0x20) &
                                                 uVar31,SUB84(local_1e8.M[1][1],0) & uVar51))))) ||
                    ((dVar17 < (double)CONCAT44((uint)((ulonglong)local_1e8.M[1][2] >> 0x20) &
                                                uVar31,SUB84(local_1e8.M[1][2],0) & uVar51) ||
                     ((dVar17 < (double)CONCAT44((uint)((ulonglong)local_1e8.M[2][0] >> 0x20) &
                                                 uVar31,SUB84(local_1e8.M[2][0],0) & uVar51) ||
                      (dVar17 < (double)CONCAT44((uint)((ulonglong)local_1e8.M[2][1] >> 0x20) &
                                                 uVar31,SUB84(local_1e8.M[2][1],0) & uVar51)))))))
                   || (uVar62 = UE::Math::TMatrix<double>::Identity.M[1][0]._0_4_,
                      uVar63 = UE::Math::TMatrix<double>::Identity.M[1][0]._4_4_,
                      uVar64 = UE::Math::TMatrix<double>::Identity.M[1][1]._0_4_,
                      uVar65 = UE::Math::TMatrix<double>::Identity.M[1][1]._4_4_,
                      uVar66 = UE::Math::TMatrix<double>::Identity.M[1][2]._0_4_,
                      uVar67 = UE::Math::TMatrix<double>::Identity.M[1][2]._4_4_,
                      uVar68 = UE::Math::TMatrix<double>::Identity.M[1][3]._0_4_,
                      uVar69 = UE::Math::TMatrix<double>::Identity.M[1][3]._4_4_,
                      uVar70 = UE::Math::TMatrix<double>::Identity.M[0][0]._0_4_,
                      uVar71 = UE::Math::TMatrix<double>::Identity.M[0][0]._4_4_,
                      uVar72 = UE::Math::TMatrix<double>::Identity.M[0][1]._0_4_,
                      uVar73 = UE::Math::TMatrix<double>::Identity.M[0][1]._4_4_,
                      uVar74 = UE::Math::TMatrix<double>::Identity.M[2][0]._0_4_,
                      uVar75 = UE::Math::TMatrix<double>::Identity.M[2][0]._4_4_,
                      uVar76 = UE::Math::TMatrix<double>::Identity.M[2][1]._0_4_,
                      uVar77 = UE::Math::TMatrix<double>::Identity.M[2][1]._4_4_,
                      uVar86 = UE::Math::TMatrix<double>::Identity.M[2][2]._0_4_,
                      uVar87 = UE::Math::TMatrix<double>::Identity.M[2][2]._4_4_,
                      uVar88 = UE::Math::TMatrix<double>::Identity.M[2][3]._0_4_,
                      uVar89 = UE::Math::TMatrix<double>::Identity.M[2][3]._4_4_,
                      uVar90 = UE::Math::TMatrix<double>::Identity.M[3][0]._0_4_,
                      uVar91 = UE::Math::TMatrix<double>::Identity.M[3][0]._4_4_,
                      uVar92 = UE::Math::TMatrix<double>::Identity.M[3][1]._0_4_,
                      uVar93 = UE::Math::TMatrix<double>::Identity.M[3][1]._4_4_,
                      auVar59 = (undefined1  [16])UE::Math::TMatrix<double>::Identity.M[3]._16_16_,
                      dVar57 = UE::Math::TMatrix<double>::Identity.M[0][2],
                      dVar82 = UE::Math::TMatrix<double>::Identity.M[0][3],
                      dVar17 < (double)CONCAT44((uint)((ulonglong)local_1e8.M[2][2] >> 0x20) &
                                                uVar31,SUB84(local_1e8.M[2][2],0) & uVar51))) {
                  FMath::MatrixInverse((TMatrix<double> *)local_168,&local_1e8);
                  uVar62 = local_168._32_4_;
                  uVar63 = local_168._36_4_;
                  uVar64 = local_168._40_4_;
                  uVar65 = local_168._44_4_;
                  uVar66 = local_168._48_4_;
                  uVar67 = local_168._52_4_;
                  uVar68 = local_168._56_4_;
                  uVar69 = local_168._60_4_;
                  uVar70 = local_168._0_4_;
                  uVar71 = local_168._4_4_;
                  uVar72 = local_168._8_4_;
                  uVar73 = local_168._12_4_;
                  uVar74 = local_168._64_4_;
                  uVar75 = local_168._68_4_;
                  uVar76 = local_168._72_4_;
                  uVar77 = local_168._76_4_;
                  uVar86 = local_168._80_4_;
                  uVar87 = local_168._84_4_;
                  uVar88 = local_168._88_4_;
                  uVar89 = local_168._92_4_;
                  uVar90 = local_168._96_4_;
                  uVar91 = local_168._100_4_;
                  uVar92 = local_168._104_4_;
                  uVar93 = local_168._108_4_;
                  auVar59 = local_168._112_16_;
                  dVar57 = (double)local_168._16_8_;
                  dVar82 = (double)local_168._24_8_;
                }
                local_4f8.WorldToInstance.M[0][0] = (float)(double)CONCAT44(uVar71,uVar70);
                local_4f8.WorldToInstance.M[0][1] = (float)(double)CONCAT44(uVar73,uVar72);
                local_4f8.MeshBatches.AllocatorInstance.Data = local_458.Data;
                local_4f8.MeshBatches.ArrayNum = (int)local_450;
                local_4f8.WorldToInstance.M[0][2] = (float)dVar57;
                local_4f8.WorldToInstance.M[0][3] = (float)dVar82;
                local_3d8 = 0;
                local_458.Data = (FScriptContainerElement *)0x0;
                local_4f8.WorldToInstance.M[1][0] = (float)(double)CONCAT44(uVar63,uVar62);
                local_4f8.WorldToInstance.M[1][1] = (float)(double)CONCAT44(uVar65,uVar64);
                local_4f8.MeshBatches.ArrayMax = local_450._4_4_;
                local_450 = 0;
                local_4f8.WorldToInstance.M[1][2] = (float)(double)CONCAT44(uVar67,uVar66);
                local_4f8.WorldToInstance.M[1][3] = (float)(double)CONCAT44(uVar69,uVar68);
                local_4f8.bAlphaMasked = false;
                local_4f8.IndexBuffer.Reference = (FRHIBuffer *)0x0;
                local_3d0 = (FRHIResource *)0x0;
                local_4f8.WorldToInstance.M[2][0] = (float)(double)CONCAT44(uVar75,uVar74);
                local_4f8.WorldToInstance.M[2][1] = (float)(double)CONCAT44(uVar77,uVar76);
                local_4f8.WorldToInstance.M[2][2] = (float)(double)CONCAT44(uVar87,uVar86);
                local_4f8.WorldToInstance.M[2][3] = (float)(double)CONCAT44(uVar89,uVar88);
                local_4f8.WorldToInstance.M[3][0] = (float)(double)CONCAT44(uVar91,uVar90);
                local_4f8.WorldToInstance.M[3][1] = (float)(double)CONCAT44(uVar93,uVar92);
                local_4f8.WorldToInstance.M[3][2] = (float)auVar59._0_8_;
                local_4f8.WorldToInstance.M[3][3] = (float)auVar59._8_8_;
                local_4f8.bUsingIndirectDraw = (bool)local_448;
                local_4f8.NumVertices = local_444;
                local_4f8.VertexBufferSize = local_440;
                local_4f8.NumTriangles = local_43c;
                local_4f8.Geometry = local_438;
                local_4f8.Buffer = local_430;
                local_4f8.bApplyWorldPositionOffset = (bool)local_428;
                local_4f8.InstanceId = local_424;
                local_418 = local_4f8.WorldToInstance.M[0][0];
                fStack_414 = local_4f8.WorldToInstance.M[0][1];
                fStack_410 = local_4f8.WorldToInstance.M[0][2];
                fStack_40c = local_4f8.WorldToInstance.M[0][3];
                local_408 = local_4f8.WorldToInstance.M[1][0];
                fStack_404 = local_4f8.WorldToInstance.M[1][1];
                fStack_400 = local_4f8.WorldToInstance.M[1][2];
                fStack_3fc = local_4f8.WorldToInstance.M[1][3];
                local_3f8 = local_4f8.WorldToInstance.M[2][0];
                fStack_3f4 = local_4f8.WorldToInstance.M[2][1];
                fStack_3f0 = local_4f8.WorldToInstance.M[2][2];
                fStack_3ec = local_4f8.WorldToInstance.M[2][3];
                local_3e8 = local_4f8.WorldToInstance.M[3][0];
                fStack_3e4 = local_4f8.WorldToInstance.M[3][1];
                fStack_3e0 = local_4f8.WorldToInstance.M[3][2];
                fStack_3dc = local_4f8.WorldToInstance.M[3][3];
                local_268 = uVar70;
                uStack_264 = uVar71;
                uStack_260 = uVar72;
                uStack_25c = uVar73;
                local_258 = dVar57;
                dStack_250 = dVar82;
                local_248 = uVar62;
                uStack_244 = uVar63;
                uStack_240 = uVar64;
                uStack_23c = uVar65;
                local_238 = uVar66;
                uStack_234 = uVar67;
                uStack_230 = uVar68;
                uStack_22c = uVar69;
                local_228 = uVar74;
                uStack_224 = uVar75;
                uStack_220 = uVar76;
                uStack_21c = uVar77;
                local_218 = uVar86;
                uStack_214 = uVar87;
                uStack_210 = uVar88;
                uStack_20c = uVar89;
                local_208 = uVar90;
                uStack_204 = uVar91;
                uStack_200 = uVar92;
                uStack_1fc = uVar93;
                local_1f8 = auVar59;
                FRayTracingInstanceCollector::AddRayTracingGeometryUpdate
                          (local_710,local_728,&local_4f8);
                if (local_3d0 != (FRHIResource *)0x0) {
                  FRHIResource::Release(local_3d0);
                }
                DestructItems<FMeshBatch,int>((FMeshBatch *)local_458.Data,(int)local_450);
                this = local_718;
                lVar46 = local_758;
                uVar43 = local_78c;
                if ((FMeshBatch *)local_458.Data != (FMeshBatch *)0x0) {
                  FMemory::Free(local_458.Data);
                  this = local_718;
                  lVar46 = local_758;
                  uVar43 = local_78c;
                }
              }
              else {
                uVar32 = 0;
                if ((int)uVar29 < (int)local_748) {
                  uVar32 = uVar45;
                }
                if ((uVar32 == 0) &&
                   (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar24)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                uVar29 = *(uint *)(local_750.Data + lVar36 * 4);
                uVar32 = 0;
                if ((int)uVar29 < (int)(uint)local_770) {
                  uVar32 = ~uVar29 >> 0x1f;
                }
                if ((uVar32 == 0) &&
                   (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar24)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pFVar50 = local_778.Data + (longlong)(int)uVar29 * 0x70;
              }
              if (((*(uint **)(pFVar50 + 0x30) <= &local_790) &&
                  (&local_790 < *(uint **)(pFVar50 + 0x30) + *(int *)(pFVar50 + 0x3c))) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar24)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              iVar28 = *(int *)(pFVar50 + 0x38);
              if (iVar28 == *(int *)(pFVar50 + 0x3c)) {
                iVar28 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,(ForAnyElementType *)(pFVar50 + 0x30),
                                    (int *)(pFVar50 + 0x3c));
              }
              FVar47.Data = FVar47.Data + 8;
              *(int *)(pFVar50 + 0x38) = iVar28 + 1;
              *(uint *)(*(longlong *)(pFVar50 + 0x30) + (longlong)iVar28 * 4) = local_790;
              uVar41 = (ulonglong)local_7a0;
              uVar40 = (ulonglong)local_700 & 0xffffffff;
              pFVar52 = local_730;
              uVar29 = local_780;
            } while( true );
          }
        }
        iVar28 = (int)plVar2[1];
        local_78c = uVar43 + 1;
        lVar46 = lVar46 + 8;
        if (iVar28 <= (int)local_78c) {
          return;
        }
        goto LAB_147d01dd1;
      }
    }
  }
  return;
}

// GetGpuLodInstanceRadius @ 147d05060

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

float __thiscall
FInstancedStaticMeshSceneProxy::GetGpuLodInstanceRadius(FInstancedStaticMeshSceneProxy *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (this->bUseGpuLodSelection != false) {
    dVar1 = (this->StaticMeshBounds).BoxExtent.field0_0x0._s_0.X;
    dVar2 = (this->StaticMeshBounds).BoxExtent.field0_0x0._s_0.Y;
    dVar3 = (this->StaticMeshBounds).BoxExtent.field0_0x0._s_0.Z;
    auVar4._0_8_ = dVar1 * dVar1;
    auVar4._8_8_ = 0;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = dVar2 * dVar2 + auVar4._0_8_ + dVar3 * dVar3;
    auVar5 = sqrtpd(auVar4,auVar5);
    return (float)auVar5._0_8_;
  }
  return 0.0;
}

// GetInstanceDataUpdateTaskInfo @ 147d06280

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FInstanceDataUpdateTaskInfo * __thiscall
FInstancedStaticMeshSceneProxy::GetInstanceDataUpdateTaskInfo(FInstancedStaticMeshSceneProxy *this)

{
  code *pcVar1;
  bool bVar2;
  FInstanceDataUpdateTaskInfo *pFVar3;
  
  if ((this->InstanceDataSceneProxy).Object == (FInstanceDataSceneProxy *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FInstanceDataUpdateTaskInfo *)(*pcVar1)();
      return pFVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147d062c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar3 = (FInstanceDataUpdateTaskInfo *)
           (**(code **)(((this->InstanceDataSceneProxy).Object)->_padding_ + 0x10))();
  return pFVar3;
}

// GetInstanceDrawDistanceMinMax @ 147d063d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FInstancedStaticMeshSceneProxy::GetInstanceDrawDistanceMinMax
          (FInstancedStaticMeshSceneProxy *this,TVector2<float> *param_1)

{
  int iVar1;
  undefined8 local_res8;
  
  iVar1 = (this->UserData_AllInstances).EndCullDistance;
  if (0 < iVar1) {
    local_res8._4_4_ = (float)iVar1;
    local_res8._0_4_ = (float)(this->UserData_AllInstances).MinDrawDistance;
    param_1->field0_0x0 = local_res8;
    return true;
  }
  param_1->field0_0x0 = (TVector2<float>_u_0)0x0;
  return false;
}

// GetLightRelevance @ 147d08dc0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
FInstancedStaticMeshSceneProxy::GetLightRelevance
          (FInstancedStaticMeshSceneProxy *this,FLightSceneProxy *param_1,bool *param_2,
          bool *param_3,bool *param_4,bool *param_5)

{
  FInstanceDataBufferHeader *pFVar1;
  FInstanceDataBufferHeader local_18;
  
  FStaticMeshSceneProxy::GetLightRelevance
            ((FStaticMeshSceneProxy *)this,param_1,param_2,param_3,param_4,param_5);
  pFVar1 = FPrimitiveSceneProxy::GetInstanceDataHeader((FPrimitiveSceneProxy *)this,&local_18);
  if (pFVar1->NumInstances == 0) {
    *param_3 = false;
  }
  return;
}

// GetLodScreenSizeScale @ 147d08fc0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

float __thiscall
FInstancedStaticMeshSceneProxy::GetLodScreenSizeScale(FInstancedStaticMeshSceneProxy *this)

{
  float fVar1;
  
  fVar1 = __real_3f800000;
  if (0.0 < this->InstanceLODDistanceScale) {
    fVar1 = __real_3f800000 / this->InstanceLODDistanceScale;
  }
  return fVar1;
}

// GetMeshElement @ 147d091a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FInstancedStaticMeshSceneProxy::GetMeshElement
          (FInstancedStaticMeshSceneProxy *this,int param_1,int param_2,int param_3,uchar param_4,
          bool param_5,bool param_6,FMeshBatch *param_7)

{
  bool bVar1;
  
  bVar1 = CanSetupInstancedMeshBatch(this,param_1);
  if ((bVar1) &&
     (bVar1 = FStaticMeshSceneProxy::GetMeshElement
                        ((FStaticMeshSceneProxy *)this,param_1,param_2,param_3,param_4,param_5,
                         param_6,param_7), bVar1)) {
    SetupInstancedMeshBatch(this,param_1,param_2,param_7);
    return true;
  }
  return false;
}

// GetNumMeshBatches @ 147d09880

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __thiscall
FInstancedStaticMeshSceneProxy::GetNumMeshBatches(FInstancedStaticMeshSceneProxy *this)

{
  return 1;
}

// GetPreSkinnedLocalBounds @ 147d0bf70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FInstancedStaticMeshSceneProxy::GetPreSkinnedLocalBounds
          (FInstancedStaticMeshSceneProxy *this,TBoxSphereBounds<double,double> *param_1)

{
  double dVar1;
  
  dVar1 = (this->StaticMeshBounds).Origin.field0_0x0._s_0.Y;
  (param_1->Origin).field0_0x0._s_0.X = (this->StaticMeshBounds).Origin.field0_0x0._s_0.X;
  (param_1->Origin).field0_0x0._s_0.Y = dVar1;
  dVar1 = (this->StaticMeshBounds).BoxExtent.field0_0x0._s_0.X;
  (param_1->Origin).field0_0x0._s_0.Z = (this->StaticMeshBounds).Origin.field0_0x0._s_0.Z;
  (param_1->BoxExtent).field0_0x0._s_0.X = dVar1;
  dVar1 = (this->StaticMeshBounds).BoxExtent.field0_0x0._s_0.Z;
  (param_1->BoxExtent).field0_0x0._s_0.Y = (this->StaticMeshBounds).BoxExtent.field0_0x0._s_0.Y;
  (param_1->BoxExtent).field0_0x0._s_0.Z = dVar1;
  param_1->SphereRadius = (this->StaticMeshBounds).SphereRadius;
  return;
}

// GetRayTracingMeshElement @ 147d0cd60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FInstancedStaticMeshSceneProxy::GetRayTracingMeshElement
          (FInstancedStaticMeshSceneProxy *this,int param_1,int param_2,int param_3,uchar param_4,
          FMeshBatch *param_5)

{
  bool bVar1;
  
  if ((param_1 < (this->InstancedRenderData).RayTracingProxyVertexFactories.Array.ArrayNum) &&
     (bVar1 = FStaticMeshSceneProxy::GetRayTracingMeshElement
                        ((FStaticMeshSceneProxy *)this,param_1,param_2,param_3,param_4,param_5),
     bVar1)) {
    SetupRayTracingInstancedMeshBatch(this,param_1,param_2,param_5);
    return true;
  }
  return false;
}

// GetRayTracingWPOConfig @ 147d0cde0

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

void __thiscall
FInstancedStaticMeshSceneProxy::GetRayTracingWPOConfig
          (FInstancedStaticMeshSceneProxy *this,bool *param_1,bool *param_2)

{
  int iVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  longlong lVar5;
  FInstanceSceneDataBuffers *pFVar6;
  FString local_18;
  
  FStaticMeshSceneProxy::GetRayTracingWPOConfig((FStaticMeshSceneProxy *)this,param_1,param_2);
  pTVar3 = CVarRayTracingInstancesEvaluateWPO.Ref;
  bVar4 = IsInParallelGameThread();
  if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
    lVar5 = 0;
  }
  else {
    lVar5 = 4;
  }
  iVar1 = *(int *)((longlong)pTVar3->ShadowedValue + lVar5);
  bVar4 = iVar1 != 0;
  if (iVar1 < 0) {
    bVar4 = *param_2;
  }
  *param_2 = bVar4;
  *param_2 = (bool)(this->bAnySegmentUsesWorldPositionOffset & bVar4);
  pFVar6 = FPrimitiveSceneProxy::GetInstanceSceneDataBuffers
                     ((FPrimitiveSceneProxy *)this,SynchronizeUpdateTask);
  if (((pFVar6->CurrentWriterTag).Value != (atomic<unsigned_int>)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("AccessTag.Kind == FAccessTag::EKind::Reader && CurrentWriterTag.Value == 0u || AccessTag.Kind == FAccessTag::EKind::Writer && CurrentWriterTag.Value == AccessTag.WriterTag"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                         ,0x182,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (pFVar6->bInstanceDataIsGPUOnly) {
    if (2 < (byte)LogStaticMesh._0_1_) {
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)this->StaticMesh,&local_18,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    *param_2 = false;
  }
  return;
}

// GetShadowMeshElement @ 147d0dcf0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FInstancedStaticMeshSceneProxy::GetShadowMeshElement
          (FInstancedStaticMeshSceneProxy *this,int param_1,int param_2,uchar param_3,
          FMeshBatch *param_4,bool param_5)

{
  bool bVar1;
  
  bVar1 = CanSetupInstancedMeshBatch(this,param_1);
  if ((bVar1) &&
     (bVar1 = FStaticMeshSceneProxy::GetShadowMeshElement
                        ((FStaticMeshSceneProxy *)this,param_1,param_2,param_3,param_4,param_5),
     bVar1)) {
    SetupInstancedMeshBatch(this,param_1,param_2,param_4);
    return true;
  }
  return false;
}

// GetTypeHash @ 147d0fe40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

ulong64 __thiscall FInstancedStaticMeshSceneProxy::GetTypeHash(FInstancedStaticMeshSceneProxy *this)

{
  return 0x15520e0c8;
}

// GetViewRelevance @ 147d138f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
FInstancedStaticMeshSceneProxy::GetViewRelevance
          (FInstancedStaticMeshSceneProxy *this,FPrimitiveViewRelevance *__return_storage_ptr__,
          FSceneView *param_1)

{
  byte *pbVar1;
  undefined8 uVar2;
  FPrimitiveViewRelevance *pFVar3;
  FPrimitiveViewRelevance local_18;
  
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  __return_storage_ptr__->bRenderInMainPass = 1;
  if ((param_1->Family->EngineShowFlags).InstancedStaticMeshes != 0) {
    pFVar3 = FStaticMeshSceneProxy::GetViewRelevance
                       ((FStaticMeshSceneProxy *)this,&local_18,param_1);
    uVar2 = *(undefined8 *)&pFVar3->field_0x8;
    __return_storage_ptr__->_padding_ = pFVar3->_padding_;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar2;
  }
  return __return_storage_ptr__;
}

// GetWireframeMeshElement @ 147d13940

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FInstancedStaticMeshSceneProxy::GetWireframeMeshElement
          (FInstancedStaticMeshSceneProxy *this,int param_1,int param_2,
          FMaterialRenderProxy *param_3,uchar param_4,bool param_5,FMeshBatch *param_6)

{
  bool bVar1;
  
  bVar1 = CanSetupInstancedMeshBatch(this,param_1);
  if ((bVar1) &&
     (bVar1 = FStaticMeshSceneProxy::GetWireframeMeshElement
                        ((FStaticMeshSceneProxy *)this,param_1,param_2,param_3,param_4,param_5,
                         param_6), bVar1)) {
    SetupInstancedMeshBatch(this,param_1,param_2,param_6);
    return true;
  }
  return false;
}

// IsDetailMesh @ 147d1a310

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall FInstancedStaticMeshSceneProxy::IsDetailMesh(FInstancedStaticMeshSceneProxy *this)

{
  return true;
}

// ReleaseRayTracingDynamicInstances @ 147d21510

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FInstancedStaticMeshSceneProxy::ReleaseRayTracingDynamicInstances
          (FInstancedStaticMeshSceneProxy *this)

{
  int *piVar1;
  TArray<FInstancedStaticMeshSceneProxy::FRayTracingDynamicInstanceData,TSizedDefaultAllocator<32>_>
  *pTVar2;
  int iVar3;
  FRHIResource *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  pTVar2 = &this->RayTracingDynamicInstanceData;
  iVar3 = (this->RayTracingDynamicInstanceData).ArrayNum;
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  pFVar6 = pFVar5 + (longlong)iVar3 * 0x130;
  while( true ) {
    if ((this->RayTracingDynamicInstanceData).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FInstancedStaticMeshSceneProxy::FRayTracingDynamicInstanceData,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) break;
    (**(code **)(*(longlong *)pFVar5 + 0x20))(pFVar5);
    *(undefined4 *)(pFVar5 + 0x118) = 0;
    pFVar4 = *(FRHIResource **)(pFVar5 + 0x100);
    if (pFVar4 != (FRHIResource *)0x0) {
      *(longlong *)(pFVar5 + 0x100) = 0;
      FRHIResource::Release(pFVar4);
    }
    pFVar4 = *(FRHIResource **)(pFVar5 + 0x108);
    if (pFVar4 != (FRHIResource *)0x0) {
      *(longlong *)(pFVar5 + 0x108) = 0;
      FRHIResource::Release(pFVar4);
    }
    pFVar4 = *(FRHIResource **)(pFVar5 + 0x110);
    if (pFVar4 != (FRHIResource *)0x0) {
      *(longlong *)(pFVar5 + 0x110) = 0;
      FRHIResource::Release(pFVar4);
    }
    pFVar5 = pFVar5 + 0x130;
  }
  DestructItems<FInstancedStaticMeshSceneProxy::FRayTracingDynamicInstanceData,int>
            ((FRayTracingDynamicInstanceData *)(pTVar2->AllocatorInstance).Data,
             (this->RayTracingDynamicInstanceData).ArrayNum);
  piVar1 = &(this->RayTracingDynamicInstanceData).ArrayMax;
  (this->RayTracingDynamicInstanceData).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x130,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  return;
}

// SetEvaluateWorldPositionOffsetInRayTracing @ 147d29910

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FInstancedStaticMeshSceneProxy::SetEvaluateWorldPositionOffsetInRayTracing
          (FInstancedStaticMeshSceneProxy *this,FRHICommandListBase *param_1,bool param_2)

{
  byte bVar1;
  
  bVar1 = this->field_0x2d8;
  if ((bVar1 & 1) != 0) {
    FStaticMeshSceneProxy::SetEvaluateWorldPositionOffsetInRayTracing
              ((FStaticMeshSceneProxy *)this,param_1,param_2);
    if (((bVar1 & 8) != 0) && ((this->field_0x2d8 & 8) == 0)) {
      ReleaseRayTracingDynamicInstances(this);
    }
    (**(code **)(**(longlong **)&this->field_0x220 + 0x4f8))(*(longlong **)&this->field_0x220,this);
  }
  return;
}

// SetInstanceCullDistance_RenderThread @ 147d29eb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
FInstancedStaticMeshSceneProxy::SetInstanceCullDistance_RenderThread
          (FInstancedStaticMeshSceneProxy *this,float param_1,float param_2)

{
  TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters> this_00;
  int iVar1;
  TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters> TVar2;
  int iVar3;
  EUniformBufferUsage EVar4;
  TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters> *pTVar5;
  FRHIResource *local_res8;
  EUniformBufferUsage local_res10 [2];
  TPairInitializer<unsigned_int_&&,TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>_const_&>
  local_res18;
  EUniformBufferUsage *local_38;
  FRHIResource **local_30;
  
  iVar3 = (int)param_1;
  EVar4 = UniformBuffer_SingleDraw;
  iVar1 = (int)param_2;
  (this->UserData_AllInstances).StartCullDistance = iVar3;
  (this->UserData_SelectedInstances).StartCullDistance = iVar3;
  (this->UserData_DeselectedInstances).StartCullDistance = iVar3;
  (this->UserData_AllInstances).EndCullDistance = iVar1;
  (this->UserData_SelectedInstances).EndCullDistance = iVar1;
  (this->UserData_DeselectedInstances).EndCullDistance = iVar1;
  if (0 < *(int *)&this->field_0x290) {
    local_38 = local_res10;
    local_30 = &local_res8;
    do {
      CreateLooseUniformBuffer
                (this,(FSceneView *)&local_res8,(FInstancingUserData *)0x0,(int)this + 0xbe0,0,EVar4
                );
      local_res10[0] = EVar4;
      TSet<TTuple<unsigned_int,TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<unsigned_int_&&,TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>_const_&>_>
                ((TSet<TTuple<unsigned_int,TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>,0>,FDefaultSetAllocator>
                  *)&this->LODLooseUniformBuffers,&local_res18,(bool *)&local_38);
      if (local_res8 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_res8);
      }
      EVar4 = EVar4 + UniformBuffer_SingleFrame;
    } while ((int)EVar4 < *(int *)&this->field_0x290);
  }
  TVar2 = CreateLooseUniformBuffer
                    (this,(FSceneView *)&local_res8,(FInstancingUserData *)0x0,(int)this + 0xbe0,0,
                     UniformBuffer_SingleDraw);
  pTVar5 = &this->RayTracingLooseUniformBuffer;
  if ((TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>)pTVar5 != TVar2) {
    this_00 = *pTVar5;
    *pTVar5 = *(TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters> *)TVar2;
    *(undefined8 *)TVar2 = 0;
    if (this_00 != (TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  return;
}

// SetupInstancedMeshBatch @ 147d2bba0

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

void __thiscall
FInstancedStaticMeshSceneProxy::SetupInstancedMeshBatch
          (FInstancedStaticMeshSceneProxy *this,int param_1,int param_2,FMeshBatch *param_3)

{
  uchar *puVar1;
  Type TVar2;
  ForElementType<FMeshBatchElement> FVar3;
  TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters> this_00;
  TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters> this_01;
  code *pcVar4;
  TConsoleVariableData<int> *pTVar5;
  bool bVar6;
  TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters> *pTVar7;
  FMaterial *pFVar8;
  FInstanceDataBufferHeader *pFVar9;
  uint uVar10;
  ForElementType<FMeshBatchElement> FVar11;
  FInstanceDataBufferHeader local_18;
  
  uVar10 = 0;
  if (param_1 < (this->InstancedRenderData).VertexFactories.Array.ArrayNum) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  param_3->VertexFactory =
       *(FVertexFactory **)
        ((this->InstancedRenderData).VertexFactories.Array.AllocatorInstance.Data +
        (longlong)param_1 * 8);
  if ((param_3->Elements).ArrayNum < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FVar3 = (param_3->Elements).AllocatorInstance.SecondaryData;
  FVar11 = (ForElementType<FMeshBatchElement>)param_3;
  if (FVar3 != (ForElementType<FMeshBatchElement>)0x0) {
    FVar11 = FVar3;
  }
  *(FInstancingUserData **)((longlong)FVar11 + 0x38) = &this->UserData_AllInstances;
  uVar10 = *(uint *)((longlong)FVar11 + 0x7c) & 0xfffffeff;
  puVar1 = (uchar *)((longlong)FVar11 + 0x70);
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  *(uint *)((longlong)FVar11 + 0x7c) = (uVar10 ^ param_1) & 0xf ^ uVar10;
  *(undefined8 *)FVar11 = *(undefined8 *)&this->field_0x258;
  pTVar7 = TMapBase<unsigned_int,TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>,0>_>
           ::FindChecked((TMapBase<unsigned_int,TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>,0>_>
                          *)&this->LODLooseUniformBuffers,param_1);
  this_00 = *(TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters> *)
             ((longlong)FVar11 + 0x10);
  this_01 = *pTVar7;
  if (this_00 != this_01) {
    *(TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters> *)
     ((longlong)FVar11 + 0x10) = this_01;
    if (this_01 != (TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_01);
    }
    if (this_00 != (TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  *(uint *)((longlong)FVar11 + 0x7c) = *(uint *)((longlong)FVar11 + 0x7c) | 0x800;
  if ((param_3->MaterialRenderProxy != (FMaterialRenderProxy *)0x0) &&
     (TVar2 = *(Type *)(*(longlong *)&this->field_0x220 + 8), 1 < (int)TVar2)) {
    pFVar8 = FMaterialRenderProxy::GetIncompleteMaterialWithFallback
                       (param_3->MaterialRenderProxy,TVar2);
    bVar6 = IsTranslucentBlendMode(pFVar8);
    *(uint *)((longlong)FVar11 + 0x7c) = *(uint *)((longlong)FVar11 + 0x7c) & 0xffffefff;
    *(uint *)((longlong)FVar11 + 0x7c) = *(uint *)((longlong)FVar11 + 0x7c) | (uint)bVar6 << 0xc;
  }
  pTVar5 = CVarISMFetchInstanceCountFromScene.Ref;
  bVar6 = IsInParallelRenderingThread();
  if (!bVar6) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(uint *)((longlong)FVar11 + 0x7c) =
       -(uint)(pTVar5->ShadowedValue[1] != 0) & 0x2000 |
       *(uint *)((longlong)FVar11 + 0x7c) & 0xffffdfff;
  pFVar9 = FPrimitiveSceneProxy::GetInstanceDataHeader((FPrimitiveSceneProxy *)this,&local_18);
  *(int *)((longlong)FVar11 + 0x60) = pFVar9->NumInstances;
  return;
}

// SetupProxy @ 147d2c6d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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

void __thiscall
FInstancedStaticMeshSceneProxy::SetupProxy
          (FInstancedStaticMeshSceneProxy *this,FInstancedStaticMeshSceneProxyDesc *param_1)

{
  longlong lVar1;
  FGenericStaticFeatureLevel FVar2;
  longlong lVar3;
  longlong *plVar4;
  FSceneInterface *this_00;
  code *pcVar5;
  undefined1 auVar6 [16];
  double dVar7;
  byte bVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  FInstancedStaticMeshRenderData *pFVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  int iVar18;
  undefined2 uVar19;
  undefined8 uVar20;
  TConsoleVariableData<int> *pTVar21;
  bool bVar22;
  char cVar23;
  bool bVar24;
  byte bVar25;
  FStaticShaderPlatform FVar26;
  uint uVar27;
  FInstanceSceneDataBuffers *pFVar28;
  UMaterial *pUVar29;
  FStaticMeshRenderData *pFVar30;
  TBox<double> *pTVar31;
  longlong lVar32;
  uint uVar33;
  longlong lVar34;
  longlong lVar35;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  byte local_98;
  byte local_97;
  uint local_94;
  FInstancedStaticMeshSceneProxyDesc *local_90;
  FString local_88;
  TBox<double> local_78;
  ulonglong local_40;
  
  pTVar21 = CVarISMFetchInstanceCountFromScene.Ref;
  local_40 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_90 = param_1;
  bVar22 = IsInParallelGameThread();
  if ((bVar22) || (bVar22 = IsInGameThread(), bVar22)) {
    lVar34 = 0;
  }
  else {
    lVar34 = 4;
  }
  this->field_0x80 =
       -(*(int *)((longlong)pTVar21->ShadowedValue + lVar34) != 0) & 0x80U | this->field_0x80 & 0x7f
  ;
  if (((this->InstanceDataSceneProxy).Object == (FInstanceDataSceneProxy *)0x0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar22)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar28 = (FInstanceSceneDataBuffers *)
            (**(code **)(((this->InstanceDataSceneProxy).Object)->_padding_ + 8))();
  FPrimitiveSceneProxy::SetupInstanceSceneDataBuffers((FPrimitiveSceneProxy *)this,pFVar28);
  this->bAnySegmentUsesWorldPositionOffset = false;
  local_94 = 0;
  if (0 < *(int *)&this->field_0x290) {
    lVar34 = 0;
    do {
      uVar33 = 0;
      if ((int)local_94 < *(int *)&this->field_0x290) {
        uVar33 = ~local_94 >> 0x1f;
      }
      if (uVar33 == 0) {
        local_a8 = (longlong)(int)local_94;
        local_a0 = (longlong)*(int *)&this->field_0x290;
        bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar22) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      lVar3 = *(longlong *)&this->field_0x288;
      uVar33 = 0;
      if (0 < *(int *)(lVar34 + 0x50 + lVar3)) {
        lVar1 = lVar34 + lVar3;
        lVar35 = 0;
        do {
          uVar27 = 0;
          if ((int)uVar33 < *(int *)(lVar1 + 0x50)) {
            uVar27 = ~uVar33 >> 0x1f;
          }
          if (uVar27 == 0) {
            local_a8 = (longlong)(int)uVar33;
            local_a0 = (longlong)*(int *)(lVar1 + 0x50);
            bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar22) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          lVar32 = lVar1 + 0x30;
          if (*(longlong *)(lVar1 + 0x48) != 0) {
            lVar32 = *(longlong *)(lVar1 + 0x48);
          }
          cVar23 = (**(code **)(**(longlong **)(lVar35 + lVar32) + 0x378))
                             (*(longlong **)(lVar35 + lVar32),7);
          if (cVar23 == '\0') {
            pUVar29 = UMaterial::GetDefaultMaterial(MD_Surface);
            *(UMaterial **)(lVar35 + lVar32) = pUVar29;
          }
          bVar22 = this->bAnySegmentUsesWorldPositionOffset;
          bVar24 = UMaterialInterface::IsUsingWorldPositionOffset_Concurrent
                             (*(UMaterialInterface **)(lVar35 + lVar32),GMaxRHIShaderPlatform);
          uVar33 = uVar33 + 1;
          lVar35 = lVar35 + 0x18;
          this->bAnySegmentUsesWorldPositionOffset = (bool)(bVar24 | bVar22);
        } while ((int)uVar33 < *(int *)(lVar34 + 0x50 + lVar3));
      }
      local_94 = local_94 + 1;
      lVar34 = lVar34 + 0x80;
      param_1 = local_90;
    } while ((int)local_94 < *(int *)&this->field_0x290);
  }
  lVar34 = 4;
  bVar25 = this->field_0x2d8;
  if ((bVar25 & 1) != 0) {
    if ((((this->field_0x82 & 1) == 0) || (this->bAnySegmentUsesWorldPositionOffset == false)) ||
       ((param_1->_padding_ & 0x8000000000) == 0)) {
      bVar25 = bVar25 | 2;
      this->field_0x2d8 = bVar25;
    }
    else {
      (**(code **)(*(longlong *)this + 0x290))(this,&local_98);
      bVar25 = this->field_0x2d8;
      bVar8 = (local_98 & 1) * '\x02';
      this->field_0x2d8 = bVar8 | bVar25 & 0xfd;
      bVar25 = (local_97 & 1) << 3 | bVar8 | bVar25 & 0xf5;
    }
  }
  plVar4 = *(longlong **)&this->field_0x2b8;
  this->field_0x2d8 = bVar25 & 0xef;
  if ((plVar4 != (longlong *)0x0) &&
     (cVar23 = (**(code **)(*plVar4 + 0x378))(plVar4,7), cVar23 == '\0')) {
    pUVar29 = UMaterial::GetDefaultMaterial(MD_Surface);
    *(UMaterial **)&this->field_0x2b8 = pUVar29;
    if (1 < (byte)LogStaticMesh._0_1_) {
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)param_1->_padding_,&local_88,(UObject *)0x0);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
  }
  pFVar30 = UStaticMesh::GetRenderData((UStaticMesh *)param_1->_padding_);
  (this->UserData_AllInstances).MeshRenderData = pFVar30;
  (this->UserData_AllInstances).MinDrawDistance = param_1->InstanceMinDrawDistance;
  (this->UserData_AllInstances).StartCullDistance = param_1->InstanceStartCullDistance;
  (this->UserData_AllInstances).EndCullDistance = param_1->InstanceEndCullDistance;
  (this->UserData_AllInstances).LODDistanceScale = 1.0;
  pTVar31 = UStaticMesh::GetBoundingBox((UStaticMesh *)param_1->_padding_,&local_78);
  dVar9 = (pTVar31->Min).field0_0x0._s_0.Y;
  dVar7 = (pTVar31->Min).field0_0x0._s_0.Z;
  dVar10 = (pTVar31->Max).field0_0x0._s_0.Y;
  dVar11 = (pTVar31->Max).field0_0x0._s_0.Z;
  (this->UserData_AllInstances).InstancingOffset.field0_0x0._s_0.X =
       ((pTVar31->Max).field0_0x0._s_0.X + (pTVar31->Min).field0_0x0._s_0.X) *
       __real_3fe0000000000000;
  dVar7 = (dVar11 + dVar7) * _UNK_150689678;
  auVar6._8_4_ = SUB84(dVar7,0);
  auVar6._0_8_ = (dVar10 + dVar9) * ___xmm_3fe00000000000003fe0000000000000;
  auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(this->UserData_AllInstances).InstancingOffset.field0_0x0 + 8) =
       auVar6;
  this_00 = *(FSceneInterface **)&this->field_0x220;
  (this->UserData_AllInstances).MinLOD = *(int *)&this->field_0xb0c;
  (this->UserData_AllInstances).bRenderSelected = true;
  (this->UserData_AllInstances).bRenderUnselected = true;
  (this->UserData_AllInstances).RenderData = (FInstancedStaticMeshRenderData *)0x0;
  uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->UserData_AllInstances).AverageInstancesScale.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->UserData_AllInstances).AverageInstancesScale.field0_0x0._s_0.Y = (double)uVar20;
  (this->UserData_AllInstances).AverageInstancesScale.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  pFVar30 = (this->UserData_AllInstances).MeshRenderData;
  iVar14 = (this->UserData_AllInstances).MinDrawDistance;
  iVar15 = (this->UserData_AllInstances).StartCullDistance;
  iVar16 = (this->UserData_AllInstances).EndCullDistance;
  fVar17 = (this->UserData_AllInstances).LODDistanceScale;
  (this->UserData_SelectedInstances).RenderData = (this->UserData_AllInstances).RenderData;
  (this->UserData_SelectedInstances).MeshRenderData = pFVar30;
  iVar18 = (this->UserData_AllInstances).MinLOD;
  bVar22 = (this->UserData_AllInstances).bRenderSelected;
  bVar24 = (this->UserData_AllInstances).bRenderUnselected;
  uVar19 = *(undefined2 *)&(this->UserData_AllInstances).field_0x26;
  dVar7 = (this->UserData_AllInstances).AverageInstancesScale.field0_0x0._s_0.X;
  (this->UserData_SelectedInstances).MinDrawDistance = iVar14;
  (this->UserData_SelectedInstances).StartCullDistance = iVar15;
  (this->UserData_SelectedInstances).EndCullDistance = iVar16;
  (this->UserData_SelectedInstances).LODDistanceScale = fVar17;
  dVar9 = (this->UserData_AllInstances).AverageInstancesScale.field0_0x0._s_0.Y;
  dVar10 = (this->UserData_AllInstances).AverageInstancesScale.field0_0x0._s_0.Z;
  (this->UserData_SelectedInstances).MinLOD = iVar18;
  (this->UserData_SelectedInstances).bRenderSelected = bVar22;
  (this->UserData_SelectedInstances).bRenderUnselected = bVar24;
  *(undefined2 *)&(this->UserData_SelectedInstances).field_0x26 = uVar19;
  (this->UserData_SelectedInstances).AverageInstancesScale.field0_0x0._s_0.X = dVar7;
  dVar11 = (this->UserData_AllInstances).InstancingOffset.field0_0x0._s_0.X;
  dVar12 = (this->UserData_AllInstances).InstancingOffset.field0_0x0._s_0.Y;
  (this->UserData_SelectedInstances).AverageInstancesScale.field0_0x0._s_0.Y = dVar9;
  (this->UserData_SelectedInstances).AverageInstancesScale.field0_0x0._s_0.Z = dVar10;
  dVar7 = (this->UserData_AllInstances).InstancingOffset.field0_0x0._s_0.Z;
  (this->UserData_SelectedInstances).InstancingOffset.field0_0x0._s_0.X = dVar11;
  (this->UserData_SelectedInstances).InstancingOffset.field0_0x0._s_0.Y = dVar12;
  pFVar13 = (this->UserData_AllInstances).RenderData;
  pFVar30 = (this->UserData_AllInstances).MeshRenderData;
  (this->UserData_SelectedInstances).InstancingOffset.field0_0x0._s_0.Z = dVar7;
  iVar14 = (this->UserData_AllInstances).MinDrawDistance;
  iVar15 = (this->UserData_AllInstances).StartCullDistance;
  iVar16 = (this->UserData_AllInstances).EndCullDistance;
  fVar17 = (this->UserData_AllInstances).LODDistanceScale;
  (this->UserData_SelectedInstances).bRenderUnselected = false;
  (this->UserData_DeselectedInstances).RenderData = pFVar13;
  (this->UserData_DeselectedInstances).MeshRenderData = pFVar30;
  iVar18 = (this->UserData_AllInstances).MinLOD;
  bVar22 = (this->UserData_AllInstances).bRenderSelected;
  bVar24 = (this->UserData_AllInstances).bRenderUnselected;
  uVar19 = *(undefined2 *)&(this->UserData_AllInstances).field_0x26;
  dVar7 = (this->UserData_AllInstances).AverageInstancesScale.field0_0x0._s_0.X;
  (this->UserData_DeselectedInstances).MinDrawDistance = iVar14;
  (this->UserData_DeselectedInstances).StartCullDistance = iVar15;
  (this->UserData_DeselectedInstances).EndCullDistance = iVar16;
  (this->UserData_DeselectedInstances).LODDistanceScale = fVar17;
  dVar9 = (this->UserData_AllInstances).AverageInstancesScale.field0_0x0._s_0.Y;
  dVar10 = (this->UserData_AllInstances).AverageInstancesScale.field0_0x0._s_0.Z;
  (this->UserData_DeselectedInstances).MinLOD = iVar18;
  (this->UserData_DeselectedInstances).bRenderSelected = bVar22;
  (this->UserData_DeselectedInstances).bRenderUnselected = bVar24;
  *(undefined2 *)&(this->UserData_DeselectedInstances).field_0x26 = uVar19;
  (this->UserData_DeselectedInstances).AverageInstancesScale.field0_0x0._s_0.X = dVar7;
  dVar11 = (this->UserData_AllInstances).InstancingOffset.field0_0x0._s_0.X;
  dVar12 = (this->UserData_AllInstances).InstancingOffset.field0_0x0._s_0.Y;
  (this->UserData_DeselectedInstances).AverageInstancesScale.field0_0x0._s_0.Y = dVar9;
  (this->UserData_DeselectedInstances).AverageInstancesScale.field0_0x0._s_0.Z = dVar10;
  dVar7 = (this->UserData_AllInstances).InstancingOffset.field0_0x0._s_0.Z;
  (this->UserData_DeselectedInstances).InstancingOffset.field0_0x0._s_0.X = dVar11;
  (this->UserData_DeselectedInstances).InstancingOffset.field0_0x0._s_0.Y = dVar12;
  (this->UserData_DeselectedInstances).InstancingOffset.field0_0x0._s_0.Z = dVar7;
  (this->UserData_DeselectedInstances).bRenderSelected = false;
  FVar2.FeatureLevel = this_00->FeatureLevel;
  FVar26.Platform = FSceneInterface::GetShaderPlatform(this_00);
  bVar22 = UseGPUScene(FVar26,FVar2);
  pTVar21 = CVarGpuLodSelection.Ref;
  bVar24 = IsInParallelGameThread();
  if ((bVar24) || (bVar24 = IsInGameThread(), bVar24)) {
    lVar34 = 0;
  }
  if (((param_1->bUseGpuLodSelection == false) || (!bVar22)) ||
     (*(int *)((longlong)pTVar21->ShadowedValue + lVar34) == 0)) {
    this->bUseGpuLodSelection = false;
    if (!bVar22) {
      return;
    }
  }
  else {
    this->bUseGpuLodSelection = true;
  }
  FVar26.Platform = FSceneInterface::GetShaderPlatform(*(FSceneInterface **)&this->field_0x220);
  bVar22 = PlatformGPUSceneUsesUniformBufferView(FVar26);
  if (bVar22) {
    this->field_0x80 = this->field_0x80 | 0x40;
    uVar33 = 0;
    if (0 < *(int *)&this->field_0x290) {
      lVar34 = 0;
      do {
        local_a0 = (longlong)*(int *)&this->field_0x290;
        uVar27 = 0;
        if ((int)uVar33 < *(int *)&this->field_0x290) {
          uVar27 = ~uVar33 >> 0x1f;
        }
        if (uVar27 == 0) {
          local_a8 = (longlong)(int)uVar33;
          bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar22) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        uVar33 = uVar33 + 1;
        *(undefined1 *)(*(longlong *)&this->field_0x288 + 8 + lVar34) = 0;
        lVar34 = lVar34 + 0x80;
      } while ((int)uVar33 < *(int *)&this->field_0x290);
    }
  }
  return;
}

// SetupRayTracingDynamicInstances @ 147d2ccd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
FInstancedStaticMeshSceneProxy::SetupRayTracingDynamicInstances
          (FInstancedStaticMeshSceneProxy *this,FRHICommandListBase *param_1,int param_2,int param_3
          )

{
  int *piVar1;
  FRHIResource *pFVar2;
  longlong *plVar3;
  longlong lVar4;
  FRayTracingGeometrySegment *pFVar5;
  code *pcVar6;
  FRayTracingGeometry *pFVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  ForAnyElementType FVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  undefined1 auStackY_198 [32];
  undefined1 local_158;
  undefined1 local_157 [7];
  FRayTracingGeometry *local_150;
  FRHICommandListBase *local_148;
  longlong local_140;
  FRayTracingGeometryInitializer local_138;
  FRHIBuffer *local_c8;
  uint local_c0;
  ERayTracingGeometryType local_bc;
  uint local_b8;
  undefined2 local_b4;
  undefined1 local_b2;
  undefined1 local_b1;
  ERayTracingGeometryInitializerType local_b0;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  FResourceArrayUploadInterface *local_98;
  uint local_90 [2];
  uint auStack_88 [2];
  uint local_80 [2];
  FRHIRayTracingGeometry *local_78;
  FName local_70;
  uint local_68;
  FName local_64;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_198;
  iVar10 = (this->RayTracingDynamicInstanceData).ArrayNum;
  uVar13 = (ulonglong)(uint)param_2;
  if ((param_2 != iVar10) || (param_3 != this->CachedRayTracingLODIndex)) {
    this->CachedRayTracingLODIndex = param_3;
    pFVar11 = (this->RayTracingDynamicInstanceData).AllocatorInstance.Data;
    pFVar14 = pFVar11 + (longlong)iVar10 * 0x130;
    local_148 = param_1;
    while( true ) {
      if ((this->RayTracingDynamicInstanceData).ArrayNum != iVar10) {
        local_158 = 0;
        `TCheckedPointerIterator<FInstancedStaticMeshSceneProxy::FRayTracingDynamicInstanceData,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_158);
      }
      if (pFVar11 == pFVar14) break;
      (**(code **)(*(longlong *)pFVar11 + 0x20))(pFVar11);
      *(undefined4 *)(pFVar11 + 0x118) = 0;
      pFVar2 = *(FRHIResource **)(pFVar11 + 0x100);
      if (pFVar2 != (FRHIResource *)0x0) {
        *(longlong *)(pFVar11 + 0x100) = 0;
        FRHIResource::Release(pFVar2);
      }
      pFVar2 = *(FRHIResource **)(pFVar11 + 0x108);
      if (pFVar2 != (FRHIResource *)0x0) {
        *(longlong *)(pFVar11 + 0x108) = 0;
        FRHIResource::Release(pFVar2);
      }
      pFVar2 = *(FRHIResource **)(pFVar11 + 0x110);
      if (pFVar2 != (FRHIResource *)0x0) {
        *(longlong *)(pFVar11 + 0x110) = 0;
        FRHIResource::Release(pFVar2);
      }
      pFVar11 = pFVar11 + 0x130;
    }
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar13);
    }
    DestructItems<FInstancedStaticMeshSceneProxy::FRayTracingDynamicInstanceData,int>
              ((FRayTracingDynamicInstanceData *)
               (this->RayTracingDynamicInstanceData).AllocatorInstance.Data,
               (this->RayTracingDynamicInstanceData).ArrayNum);
    piVar1 = &(this->RayTracingDynamicInstanceData).ArrayMax;
    (this->RayTracingDynamicInstanceData).ArrayNum = 0;
    if (*piVar1 != param_2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x130,8,param_2,&(this->RayTracingDynamicInstanceData).AllocatorInstance,0,piVar1);
    }
    plVar3 = *(longlong **)(*(longlong *)&this->field_0x280 + 0x48);
    uVar9 = 0;
    if (param_3 < (int)plVar3[1]) {
      uVar9 = (uint)~param_3 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_140 = *(longlong *)(*plVar3 + (longlong)param_3 * 8);
    if (0 < param_2) {
      do {
        lVar4 = local_140;
        iVar10 = (this->RayTracingDynamicInstanceData).ArrayNum;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x130,8,&(this->RayTracingDynamicInstanceData).AllocatorInstance,
                              piVar1);
        }
        (this->RayTracingDynamicInstanceData).ArrayNum = iVar10 + 1;
        local_150 = (FRayTracingGeometry *)
                    ((this->RayTracingDynamicInstanceData).AllocatorInstance.Data +
                    (longlong)iVar10 * 0x130);
        DefaultConstructItems<FInstancedStaticMeshSceneProxy::FRayTracingDynamicInstanceData,int>
                  (local_150,1);
        lVar4 = *(longlong *)(lVar4 + 8);
        local_c8 = *(FRHIBuffer **)(lVar4 + 0x70);
        if (local_c8 != (FRHIBuffer *)0x0) {
          FRHIResource::AddRef((FRHIResource *)local_c8);
        }
        local_c0 = *(uint *)(lVar4 + 0x78);
        local_bc = *(ERayTracingGeometryType *)(lVar4 + 0x7c);
        local_b8 = *(uint *)(lVar4 + 0x80);
        local_b4 = *(undefined2 *)(lVar4 + 0x84);
        local_b2 = *(undefined1 *)(lVar4 + 0x86);
        local_b1 = *(undefined1 *)(lVar4 + 0x87);
        local_b0 = *(ERayTracingGeometryInitializerType *)(lVar4 + 0x88);
        local_a8.Data = (FScriptContainerElement *)0x0;
        iVar10 = *(int *)(lVar4 + 0x98);
        pFVar5 = *(FRayTracingGeometrySegment **)(lVar4 + 0x90);
        local_a0 = CONCAT44(local_a0._4_4_,iVar10);
        if (iVar10 == 0) {
          local_a0 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,iVar10,0,&local_a8,iVar10,(int *)((longlong)&local_a0 + 4));
          ConstructItems<FRayTracingGeometrySegment,FRayTracingGeometrySegment,int>
                    (local_a8.Data,pFVar5,iVar10);
        }
        local_98 = *(FResourceArrayUploadInterface **)(lVar4 + 0xa0);
        local_90 = *(uint (*) [2])(lVar4 + 0xa8);
        auStack_88 = *(uint (*) [2])(lVar4 + 0xb0);
        local_80 = *(uint (*) [2])(lVar4 + 0xb8);
        local_78 = *(FRHIRayTracingGeometry **)(lVar4 + 0xc0);
        local_70 = *(FName *)(lVar4 + 200);
        local_68 = *(uint *)(lVar4 + 0xd0);
        local_64 = *(FName *)(lVar4 + 0xd4);
        iVar10 = (int)local_a0;
        pFVar11 = local_a8.Data + (longlong)(int)local_a0 * 0x28;
        FVar12.Data = local_a8.Data;
        while( true ) {
          if ((int)local_a0 != iVar10) {
            `TCheckedPointerIterator<FRayTracingGeometrySegment,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_157);
          }
          pFVar7 = local_150;
          if (FVar12.Data == pFVar11) break;
          pFVar2 = *(FRHIResource **)FVar12.Data;
          if (pFVar2 != (FRHIResource *)0x0) {
            *(undefined8 *)FVar12.Data = 0;
            FRHIResource::Release(pFVar2);
          }
          FVar12.Data = FVar12.Data + 0x28;
        }
        local_138.IndexBuffer.Reference = local_c8;
        local_138.IndexBufferOffset = local_c0;
        local_138.GeometryType = local_bc;
        local_138.TotalPrimitiveCount = local_b8;
        local_138.bAllowCompaction = (bool)local_b2;
        local_138.bTemplate = (bool)local_b1;
        local_138.Type = local_b0;
        local_138.Segments.AllocatorInstance.Data = local_a8.Data;
        local_138.Segments.ArrayNum = (int)local_a0;
        local_138.Segments.ArrayMax = local_a0._4_4_;
        local_138.OfflineData = local_98;
        local_138.SourceGeometry = local_78;
        local_138.DebugName.Number = local_68;
        local_138.OfflineDataHeader.Reserved[0] = local_90[0];
        local_138.OfflineDataHeader.Reserved[1] = local_90[1];
        local_138.OfflineDataHeader.Reserved[2] = auStack_88[0];
        local_138.OfflineDataHeader.Reserved[3] = auStack_88[1];
        local_138.OwnerName = local_64;
        local_b4 = 0x101;
        local_c8 = (FRHIBuffer *)0x0;
        local_138.bFastBuild = true;
        local_138.bAllowUpdate = true;
        local_a8.Data = (FScriptContainerElement *)0x0;
        local_a0 = 0;
        local_138.OfflineDataHeader.Reserved[4] = local_80[0];
        local_138.OfflineDataHeader.Reserved[5] = local_80[1];
        local_138.DebugName.Name = local_70;
        FRayTracingGeometry::SetInitializer(local_150,&local_138);
        (**(code **)(pFVar7->_padding_ + 0x18))(pFVar7,local_148);
        DestructItems<FRayTracingGeometrySegment,int>
                  ((FRayTracingGeometrySegment *)local_a8.Data,(int)local_a0);
        if ((FRayTracingGeometrySegment *)local_a8.Data != (FRayTracingGeometrySegment *)0x0) {
          FMemory::Free(local_a8.Data);
        }
        if (local_c8 != (FRHIBuffer *)0x0) {
          FRHIResource::Release((FRHIResource *)local_c8);
        }
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
  return;
}

// SetupRayTracingInstancedMeshBatch @ 147d2d170

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

void __thiscall
FInstancedStaticMeshSceneProxy::SetupRayTracingInstancedMeshBatch
          (FInstancedStaticMeshSceneProxy *this,int param_1,int param_2,FMeshBatch *param_3)

{
  uchar *puVar1;
  Type TVar2;
  ForElementType<FMeshBatchElement> FVar3;
  TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters> this_00;
  TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters> this_01;
  code *pcVar4;
  TConsoleVariableData<int> *pTVar5;
  bool bVar6;
  FMaterial *pFVar7;
  FInstanceDataBufferHeader *pFVar8;
  uint uVar9;
  ForElementType<FMeshBatchElement> FVar10;
  FInstanceDataBufferHeader local_18;
  
  uVar9 = 0;
  if (param_1 < (this->InstancedRenderData).RayTracingProxyVertexFactories.Array.ArrayNum) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  param_3->VertexFactory =
       *(FVertexFactory **)
        ((this->InstancedRenderData).RayTracingProxyVertexFactories.Array.AllocatorInstance.Data +
        (longlong)param_1 * 8);
  if ((param_3->Elements).ArrayNum < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FVar3 = (param_3->Elements).AllocatorInstance.SecondaryData;
  FVar10 = (ForElementType<FMeshBatchElement>)param_3;
  if (FVar3 != (ForElementType<FMeshBatchElement>)0x0) {
    FVar10 = FVar3;
  }
  *(FInstancingUserData **)((longlong)FVar10 + 0x38) = &this->UserData_AllInstances;
  uVar9 = *(uint *)((longlong)FVar10 + 0x7c) & 0xfffffeff;
  puVar1 = (uchar *)((longlong)FVar10 + 0x70);
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  *(uint *)((longlong)FVar10 + 0x7c) = (uVar9 ^ param_1) & 0xf ^ uVar9;
  *(undefined8 *)FVar10 = *(undefined8 *)&this->field_0x258;
  this_00 = this->RayTracingLooseUniformBuffer;
  this_01 = *(TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters> *)
             ((longlong)FVar10 + 0x10);
  if (this_01 != this_00) {
    *(TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters> *)
     ((longlong)FVar10 + 0x10) = this_00;
    if (this_00 != (TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00);
    }
    if (this_01 != (TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
  }
  *(uint *)((longlong)FVar10 + 0x7c) = *(uint *)((longlong)FVar10 + 0x7c) | 0x800;
  if ((param_3->MaterialRenderProxy != (FMaterialRenderProxy *)0x0) &&
     (TVar2 = *(Type *)(*(longlong *)&this->field_0x220 + 8), 1 < (int)TVar2)) {
    pFVar7 = FMaterialRenderProxy::GetIncompleteMaterialWithFallback
                       (param_3->MaterialRenderProxy,TVar2);
    bVar6 = IsTranslucentBlendMode(pFVar7);
    *(uint *)((longlong)FVar10 + 0x7c) = *(uint *)((longlong)FVar10 + 0x7c) & 0xffffefff;
    *(uint *)((longlong)FVar10 + 0x7c) = *(uint *)((longlong)FVar10 + 0x7c) | (uint)bVar6 << 0xc;
  }
  pTVar5 = CVarISMFetchInstanceCountFromScene.Ref;
  bVar6 = IsInParallelRenderingThread();
  if (!bVar6) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(uint *)((longlong)FVar10 + 0x7c) =
       -(uint)(pTVar5->ShadowedValue[1] != 0) & 0x2000 |
       *(uint *)((longlong)FVar10 + 0x7c) & 0xffffdfff;
  pFVar8 = FPrimitiveSceneProxy::GetInstanceDataHeader((FPrimitiveSceneProxy *)this,&local_18);
  *(int *)((longlong)FVar10 + 0x60) = pFVar8->NumInstances;
  return;
}

// UpdateInstances_RenderThread @ 147d38510

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FInstancedStaticMeshSceneProxy::UpdateInstances_RenderThread
          (FInstancedStaticMeshSceneProxy *this,FRHICommandListBase *param_1,
          TBoxSphereBounds<double,double> *param_2,TBoxSphereBounds<double,double> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FStaticMeshInstanceBuffer *pFVar3;
  
  if ((this->InstanceDataSceneProxy).Object == (FInstanceDataSceneProxy *)0x0) {
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
  pFVar3 = (FStaticMeshInstanceBuffer *)
           (**(code **)(((this->InstanceDataSceneProxy).Object)->_padding_ + 0x20))();
  if (pFVar3 != (FStaticMeshInstanceBuffer *)0x0) {
    FInstancedStaticMeshRenderData::BindBuffersToVertexFactories
              (&this->InstancedRenderData,param_1,pFVar3);
  }
  FPrimitiveSceneProxy::UpdateInstances_RenderThread
            ((FPrimitiveSceneProxy *)this,param_1,param_2,param_3);
  return;
}

// operator() @ 15051b6d0

bool __thiscall
`FInstancedStaticMeshSceneProxy::GetDynamicRayTracingInstances'::__l9::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1853197200457205557>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1853197200457205557>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

