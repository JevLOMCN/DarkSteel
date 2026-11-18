// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FastGeoStreaming
// Functions: 14

// FFastGeoProceduralISMComponent @ 14da19340

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FFastGeoProceduralISMComponent * __thiscall
FFastGeoProceduralISMComponent::FFastGeoProceduralISMComponent
          (FFastGeoProceduralISMComponent *this,int param_1,FFastGeoElementType *param_2)

{
  FInstancedStaticMeshSceneProxyDesc *this_00;
  FFastGeoElementType local_18;
  
  local_18.ID = param_2->ID;
  local_18._4_4_ = *(undefined4 *)&param_2->field_0x4;
  local_18.ParentType = param_2->ParentType;
  FFastGeoPrimitiveComponent::FFastGeoPrimitiveComponent
            ((FFastGeoPrimitiveComponent *)this,param_1,&local_18);
  this->_padding_ = (longlong)&___7FFastGeoProceduralISMComponent__6B_;
  this_00 = &this->SceneProxyDesc;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->NumInstances = 0;
  this->NumCustomDataFloats = 0;
  (this->PrimitiveBoundsOverride).Min.field0_0x0._s_0.X = 0.0;
  (this->PrimitiveBoundsOverride).Min.field0_0x0._s_0.Y = 0.0;
  (this->PrimitiveBoundsOverride).Min.field0_0x0._s_0.Z = 0.0;
  (this->PrimitiveBoundsOverride).Max.field0_0x0._s_0.X = 0.0;
  (this->PrimitiveBoundsOverride).Max.field0_0x0._s_0.Y = 0.0;
  (this->PrimitiveBoundsOverride).Max.field0_0x0._s_0.Z = 0.0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->PrimitiveBoundsOverride).IsValid = '\0';
  (this->PrimitiveBoundsOverride).Pad[0] = '\0';
  (this->PrimitiveBoundsOverride).Pad[1] = '\0';
  (this->PrimitiveBoundsOverride).Pad[2] = '\0';
  (this->PrimitiveBoundsOverride).Pad[3] = '\0';
  (this->PrimitiveBoundsOverride).Pad[4] = '\0';
  (this->PrimitiveBoundsOverride).Pad[5] = '\0';
  (this->PrimitiveBoundsOverride).Pad[6] = '\0';
  memset(this_00,0,0x1b8);
  FStaticMeshSceneProxyDesc::FStaticMeshSceneProxyDesc((FStaticMeshSceneProxyDesc *)this_00);
  (this->SceneProxyDesc).InstanceMinDrawDistance = 0;
  (this->SceneProxyDesc).InstanceStartCullDistance = 0;
  this_00->_padding_ = (longlong)&___7FInstancedStaticMeshSceneProxyDesc__6B_;
  (this->SceneProxyDesc).InstanceDataSceneProxy.Object = (FInstanceDataSceneProxy *)0x0;
  (this->SceneProxyDesc).InstanceDataSceneProxy.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->SceneProxyDesc).InstanceEndCullDistance = 0;
  (this->SceneProxyDesc).bUseGpuLodSelection = false;
  (this->SceneProxyDesc).InstanceLODDistanceScale = 1.0;
  (this->DataProxy).Object = (FInstanceDataSceneProxy *)0x0;
  (this->DataProxy).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~FFastGeoProceduralISMComponent @ 14da1b7d0

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
FFastGeoProceduralISMComponent::~FFastGeoProceduralISMComponent
          (FFastGeoProceduralISMComponent *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DataProxy).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SceneProxyDesc).InstanceDataSceneProxy.SharedReferenceCount.ReferenceController)
  ;
  FStaticMeshSceneProxyDesc::~FStaticMeshSceneProxyDesc
            ((FStaticMeshSceneProxyDesc *)&this->SceneProxyDesc);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FFastGeoPrimitiveComponent::~FFastGeoPrimitiveComponent((FFastGeoPrimitiveComponent *)this);
  return;
}

// ApplyWorldTransform @ 14da20980

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
FFastGeoProceduralISMComponent::ApplyWorldTransform
          (FFastGeoProceduralISMComponent *this,TTransform<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  TBox<double> *pTVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  TBox<double> local_88 [2];
  
  FFastGeoPrimitiveComponent::ApplyWorldTransform((FFastGeoPrimitiveComponent *)this,param_1);
  pTVar6 = UE::Math::TBox<double>::InverseTransformBy
                     (&this->PrimitiveBoundsOverride,local_88,(TTransform<double> *)&this->_padding_
                     );
  dVar4 = (pTVar6->Max).field0_0x0._s_0.X - (pTVar6->Min).field0_0x0._s_0.X;
  dVar1 = (pTVar6->Min).field0_0x0._s_0.Y;
  dVar5 = (pTVar6->Max).field0_0x0._s_0.Y - dVar1;
  dVar2 = (pTVar6->Min).field0_0x0._s_0.Z;
  dVar3 = (pTVar6->Max).field0_0x0._s_0.Z - dVar2;
  dVar11 = dVar4 * __real_3fe0000000000000;
  dVar10 = dVar5 * __real_3fe0000000000000;
  dVar9 = dVar3 * __real_3fe0000000000000;
  this->_padding_ = (longlong)(dVar11 + (pTVar6->Min).field0_0x0._s_0.X);
  auVar7._0_8_ = dVar9 + dVar2;
  auVar7._8_8_ = 0;
  this->_padding_ = (longlong)(dVar10 + dVar1);
  this->_padding_ = (longlong)auVar7._0_8_;
  this->_padding_ = (longlong)dVar11;
  this->_padding_ = (longlong)dVar10;
  this->_padding_ = (longlong)dVar9;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = (dVar5 * dVar5 + dVar4 * dVar4 + dVar3 * dVar3) * __real_3fd0000000000000;
  auVar8 = sqrtpd(auVar7,auVar8);
  this->_padding_ = auVar8._0_8_;
  return;
}

// BuildInstanceData @ 14da21cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TSharedPtr<FInstanceDataSceneProxy,1> * __thiscall
FFastGeoProceduralISMComponent::BuildInstanceData(FFastGeoProceduralISMComponent *this)

{
  FPrimitiveMaterialPropertyDescriptor FVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FAccessTag FVar5;
  bool bVar6;
  EShaderPlatform EVar7;
  int iVar8;
  UWorld *pUVar9;
  FPrimitiveMaterialPropertyDescriptor *pFVar10;
  longlong lVar11;
  TBoxSphereBounds<double,double> *pTVar12;
  TSharedPtr<FInstanceDataSceneProxy,1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  ushort uVar15;
  uint uVar16;
  FSceneInterface *this_00;
  FInstanceDataSceneProxy *pFVar17;
  ulonglong uVar18;
  float fVar19;
  undefined1 auStack_358 [32];
  float *local_338;
  FScriptContainerElement *local_330;
  longlong local_328;
  longlong local_320;
  undefined8 local_318;
  float local_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  float local_2f8;
  float fStack_2f4;
  TSharedPtr<FInstanceDataSceneProxy,1> local_2f0;
  TVector<float>_u_0 local_2e0;
  TVector2<float>_u_0 local_2d0 [3];
  FWriteView local_2b8;
  TBoxSphereBounds<double,double> local_238;
  FInstanceSceneDataBuffers local_1f8;
  TMatrix<double> local_d8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_358;
  FInstanceSceneDataBuffers::FInstanceSceneDataBuffers(&local_1f8,true);
  local_2d0[0]._s_0.Y = 1.4013e-45;
  uVar16 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) * -0x7a143595;
  uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
  local_2d0[0]._0_4_ = uVar16 >> 0x10 ^ uVar16;
  uVar18 = (ulonglong)(uint)local_2d0[0]._0_4_;
  FVar5.Kind = Writer;
  FVar5.WriterTag = local_2d0[0]._0_4_;
  FInstanceSceneDataBuffers::BeginWriteAccess(&local_1f8,&local_2b8,FVar5);
  UE::Math::TTransform<double>::ToMatrixWithScale((TTransform<double> *)&this->_padding_,&local_d8);
  FInstanceSceneDataBuffers::SetPrimitiveLocalToWorld
            (&local_1f8,&local_d8,(FAccessTag)(uVar18 | 0x100000000));
  pUVar9 = FFastGeoComponent::GetWorld((FFastGeoComponent *)this);
  if (pUVar9 == (UWorld *)0x0) {
    this_00 = (FSceneInterface *)0x0;
  }
  else {
    this_00 = pUVar9->Scene;
  }
  EVar7 = FSceneInterface::GetShaderPlatform(this_00);
  pFVar10 = FPrimitiveComponentHelper::GetUsedMaterialPropertyDesc<FFastGeoPrimitiveComponent>
                      ((FPrimitiveMaterialPropertyDescriptor *)&local_2d0[0]._s_0,
                       (FFastGeoPrimitiveComponent *)this,EVar7);
  FVar1 = *pFVar10;
  fVar19 = (float)(FVar1.MinMaxMaterialDisplacement.field0_0x0._0_4_ ^
                  __xmm_80000000800000008000000080000000);
  if (fVar19 <= FVar1.MinMaxMaterialDisplacement.field0_0x0._4_4_) {
    fVar19 = FVar1.MinMaxMaterialDisplacement.field0_0x0._4_4_;
  }
  FISMCInstanceDataSceneProxy::GetLocalBoundsPadExtent
            ((TVector<float> *)&local_2e0._s_0,local_2b8.PrimitiveToRelativeWorld,
             fVar19 + FVar1.MaxWorldPositionOffsetDisplacement);
  lVar11 = (**(code **)(this->_padding_ + 0x110))(this);
  pTVar12 = UStaticMesh::GetBounds(*(UStaticMesh **)(lVar11 + 0x100),&local_238);
  fStack_304 = (float)((pTVar12->Origin).field0_0x0._s_0.Y - (pTVar12->BoxExtent).field0_0x0._s_0.Y)
               - local_2e0._s_0.Y;
  fStack_300 = (float)((pTVar12->Origin).field0_0x0._s_0.Z - (pTVar12->BoxExtent).field0_0x0._s_0.Z)
               - local_2e0._s_0.Z;
  fStack_2fc = (float)((pTVar12->BoxExtent).field0_0x0._s_0.X + (pTVar12->Origin).field0_0x0._s_0.X)
               + local_2e0._s_0.X;
  local_2f8 = (float)((pTVar12->Origin).field0_0x0._s_0.Y + (pTVar12->BoxExtent).field0_0x0._s_0.Y)
              + local_2e0._s_0.Y;
  fStack_2f4 = (float)((pTVar12->Origin).field0_0x0._s_0.Z + (pTVar12->BoxExtent).field0_0x0._s_0.Z)
               + local_2e0._s_0.Z;
  local_308 = (float)((pTVar12->Origin).field0_0x0._s_0.X - (pTVar12->BoxExtent).field0_0x0._s_0.X)
              - local_2e0._s_0.X;
  if ((*(byte *)local_2b8.Flags & 0x20) != 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!View.Flags.bHasPerInstanceLocalBounds",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoProceduralISMComponent.cpp"
                       ,0x7b,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar13 = (TSharedPtr<FInstanceDataSceneProxy,1> *)(*pcVar4)();
      return pTVar13;
    }
  }
  pFVar2 = ((local_2b8.InstanceLocalBounds)->AllocatorInstance).Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_308) &&
     ((FScriptContainerElement *)&local_308 <
      pFVar2 + (longlong)(local_2b8.InstanceLocalBounds)->ArrayMax * 0x18)) {
    local_320 = (longlong)(local_2b8.InstanceLocalBounds)->ArrayNum;
    local_318 = 0x18;
    local_338 = &local_308;
    local_330 = pFVar2;
    local_328 = (longlong)(local_2b8.InstanceLocalBounds)->ArrayMax;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar13 = (TSharedPtr<FInstanceDataSceneProxy,1> *)(*pcVar4)();
      return pTVar13;
    }
  }
  iVar8 = (local_2b8.InstanceLocalBounds)->ArrayNum;
  if (iVar8 == (local_2b8.InstanceLocalBounds)->ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x418,&(local_2b8.InstanceLocalBounds)->AllocatorInstance,
                       &(local_2b8.InstanceLocalBounds)->ArrayMax);
  }
  (local_2b8.InstanceLocalBounds)->ArrayNum = iVar8 + 1;
  pFVar3 = ((local_2b8.InstanceLocalBounds)->AllocatorInstance).Data;
  pFVar2 = pFVar3 + (longlong)iVar8 * 0x18;
  *(ulonglong *)pFVar2 = CONCAT44(fStack_304,local_308);
  *(ulonglong *)(pFVar2 + 8) = CONCAT44(fStack_2fc,fStack_300);
  *(ulonglong *)(pFVar3 + (longlong)iVar8 * 0x18 + 0x10) = CONCAT44(fStack_2f4,local_2f8);
  *local_2b8.NumInstancesGPUOnly = this->NumInstances;
  *local_2b8.NumCustomDataFloats = this->NumCustomDataFloats;
  uVar15 = 0;
  if (0 < this->NumCustomDataFloats) {
    uVar15 = 2;
  }
  (local_2b8.Flags)->Packed =
       uVar15 | (local_2b8.Flags)->Packed & 0xfffc |
       (ushort)(FVar1.bAnyMaterialHasPerInstanceRandom & 1);
  FInstanceSceneDataBuffers::EndWriteAccess(&local_1f8,FVar5);
  FInstanceSceneDataBuffers::ValidateData(&local_1f8);
  pTVar14 = ::operator_new(0x130);
  if (pTVar14 == (TReferenceControllerBase<1> *)0x0) {
    pTVar14 = (TReferenceControllerBase<1> *)0x0;
    local_2f0.Object = ___xmm_00000000000000000000000000000010;
    pFVar17 = (FInstanceDataSceneProxy *)&DAT_00000010;
    local_2f0.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar14->SharedReferenceCount = (atomic<int>)0x1;
    pTVar14->WeakReferenceCount = (atomic<int>)0x1;
    pTVar14->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFInstanceDataSceneProxy___00_SharedPointerInternals__6B_
    ;
    FInstanceDataSceneProxy::FInstanceDataSceneProxy
              ((FInstanceDataSceneProxy *)(pTVar14 + 1),&local_1f8);
    pFVar17 = (FInstanceDataSceneProxy *)(pTVar14 + 1);
    if (pFVar17 == (FInstanceDataSceneProxy *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pTVar13 = (TSharedPtr<FInstanceDataSceneProxy,1> *)(*pcVar4)();
        return pTVar13;
      }
    }
    LOCK();
    pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
    UNLOCK();
    local_2f0.SharedReferenceCount.ReferenceController = pTVar14;
    local_2f0.Object = pFVar17;
  }
  pTVar13 = &this->DataProxy;
  if (pTVar13 != &local_2f0) {
    pTVar13->Object = pFVar17;
    local_2f0.Object = (FInstanceDataSceneProxy *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->DataProxy).SharedReferenceCount,&local_2f0.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2f0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  FInstanceSceneDataBuffers::~FInstanceSceneDataBuffers(&local_1f8);
  return pTVar13;
}

// CollectPSOPrecacheData @ 14da23980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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

void __thiscall
FFastGeoProceduralISMComponent::CollectPSOPrecacheData
          (FFastGeoProceduralISMComponent *this,FPSOPrecacheParams *param_1,
          TArray<FMaterialInterfacePSOPrecacheParams,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  bool bVar1;
  longlong lVar2;
  FStaticMeshRenderData *pFVar3;
  FVertexFactoryType *pFVar4;
  undefined1 auStackY_188 [32];
  code *local_158;
  undefined4 *local_150;
  undefined4 local_148 [2];
  TGlobalResource<FInstancedStaticMeshComponentHelper::FDummyStaticMeshInstanceBuffer,1> *local_140;
  FFastGeoProceduralISMComponent *local_138;
  FMaterialAudit local_128;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  lVar2 = (**(code **)(this->_padding_ + 0x110))();
  if (*(longlong *)(lVar2 + 0x100) != 0) {
    lVar2 = (**(code **)(this->_padding_ + 0x110))(this);
    pFVar3 = UStaticMesh::GetRenderData(*(UStaticMesh **)(lVar2 + 0x100));
    if (pFVar3 != (FStaticMeshRenderData *)0x0) {
      bVar1 = UseGPUScene((FStaticShaderPlatform)GMaxRHIShaderPlatform,
                          (FGenericStaticFeatureLevel)GMaxRHIFeatureLevel);
      lVar2 = (**(code **)(this->_padding_ + 0x110))(this);
      local_128.Entries.ArrayMax = 4;
      local_128.AssetName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_128.AssetName.Data.ArrayNum = 0;
      local_128.AssetName.Data.ArrayMax = 0;
      local_128.Entries.AllocatorInstance.SecondaryData =
           (ForElementType<Nanite::FMaterialAuditEntry>)0x0;
      local_148[0] = *(undefined4 *)(*(longlong *)(lVar2 + 0x100) + 0x1c0);
      local_140 = &FInstancedStaticMeshComponentHelper::DummyStaticMeshInstanceBuffer;
      if (bVar1) {
        local_140 = (TGlobalResource<FInstancedStaticMeshComponentHelper::FDummyStaticMeshInstanceBuffer,1>
                     *)0x0;
      }
      local_128.bCompatibleWithLumenCardSharing = '\0';
      local_128.bHasSky = '\0';
      local_128.bHasMasked = '\0';
      local_128.bHasAnyError = '\0';
      local_128.Entries.ArrayNum = 0;
      local_128.FallbackMaterial = (UMaterialInterface *)0x0;
      local_138 = this;
      bVar1 = Nanite::FNaniteResourcesHelper::
              ShouldCreateNaniteProxy<FFastGeoProceduralISMComponent>(this,&local_128);
      local_150 = local_148;
      pFVar4 = &FNaniteVertexFactory::StaticType;
      local_158 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FInstancedStaticMeshComponentHelper::CollectPSOPrecacheData<FFastGeoProceduralISMComponent>'::__l2::<lambda_1>,void,FStaticMeshLODResources_const_&,int,bool,TArray<FVertexElement,TFixedAllocator<17>_>_&>
                  ::Call;
      if (!bVar1) {
        pFVar4 = &FInstancedStaticMeshVertexFactory::StaticType;
      }
      FStaticMeshComponentHelper::CollectPSOPrecacheDataImpl<FFastGeoProceduralISMComponent>
                (this,pFVar4,param_1,
                 (TFunctionRef<void___cdecl(FStaticMeshLODResources_const_&,int,bool,TArray<FVertexElement,TFixedAllocator<17>_>_&)>
                  *)&local_158,param_2);
      if (local_128.Entries.AllocatorInstance.SecondaryData !=
          (ForElementType<Nanite::FMaterialAuditEntry>)0x0) {
        FMemory::Free((void *)local_128.Entries.AllocatorInstance.SecondaryData);
      }
      if (local_128.AssetName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.AssetName.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// CreateStaticMeshSceneProxy @ 14da26580

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

FPrimitiveSceneProxy * __thiscall
FFastGeoProceduralISMComponent::CreateStaticMeshSceneProxy
          (FFastGeoProceduralISMComponent *this,FMaterialAudit *param_1,bool param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FInstanceDataSceneProxy *pFVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  UWorld *pUVar6;
  FPrimitiveSceneProxy *pFVar7;
  TSharedPtr<FInstanceDataSceneProxy,1> *pTVar8;
  FSceneProxy *this_00;
  FInstancedStaticMeshSceneProxy *pFVar9;
  
  pUVar6 = FFastGeoComponent::GetWorld((FFastGeoComponent *)this);
  if (pUVar6 == (UWorld *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetWorld()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoProceduralISMComponent.cpp"
                       ,0x8c,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FPrimitiveSceneProxy *)(*pcVar3)();
      return pFVar7;
    }
  }
  if ((this->SceneProxyDesc)._padding_ == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("SceneProxyDesc.Scene",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoProceduralISMComponent.cpp"
                       ,0x8d,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FPrimitiveSceneProxy *)(*pcVar3)();
      return pFVar7;
    }
  }
  if (this->NumInstances < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumInstances > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoProceduralISMComponent.cpp"
                       ,0x8e,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FPrimitiveSceneProxy *)(*pcVar3)();
      return pFVar7;
    }
  }
  pTVar8 = BuildInstanceData(this);
  pTVar1 = (pTVar8->SharedReferenceCount).ReferenceController;
  pFVar2 = pTVar8->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this->SceneProxyDesc).InstanceDataSceneProxy.SharedReferenceCount.ReferenceController;
  (this->SceneProxyDesc).InstanceDataSceneProxy.Object = pFVar2;
  (this->SceneProxyDesc).InstanceDataSceneProxy.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (param_2) {
    this_00 = ::operator_new(0xc20);
    if (this_00 != (FSceneProxy *)0x0) {
      pFVar9 = (FInstancedStaticMeshSceneProxy *)
               Nanite::FSceneProxy::FSceneProxy(this_00,param_1,&this->SceneProxyDesc);
      goto LAB_14da266ba;
    }
  }
  else {
    pFVar9 = ::operator_new(0xdb0);
    if (pFVar9 != (FInstancedStaticMeshSceneProxy *)0x0) {
      pFVar9 = FInstancedStaticMeshSceneProxy::FInstancedStaticMeshSceneProxy
                         (pFVar9,&this->SceneProxyDesc,(Type)(this->SceneProxyDesc)._padding_);
      goto LAB_14da266ba;
    }
  }
  pFVar9 = (FInstancedStaticMeshSceneProxy *)0x0;
LAB_14da266ba:
  this->_padding_ = (longlong)pFVar9;
  return (FPrimitiveSceneProxy *)pFVar9;
}

// GetSceneProxyDesc @ 14da2b7a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPrimitiveSceneProxyDesc * __thiscall
FFastGeoProceduralISMComponent::GetSceneProxyDesc(FFastGeoProceduralISMComponent *this)

{
  return (FPrimitiveSceneProxyDesc *)&this->SceneProxyDesc;
}

// GetSceneProxyDesc @ 14da2b7b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPrimitiveSceneProxyDesc * __thiscall
FFastGeoProceduralISMComponent::GetSceneProxyDesc(FFastGeoProceduralISMComponent *this)

{
  return (FPrimitiveSceneProxyDesc *)&this->SceneProxyDesc;
}

// GetStaticMeshSceneProxyDesc @ 14da2bb90

FStaticMeshSceneProxyDesc * __thiscall
FFastGeoProceduralISMComponent::GetStaticMeshSceneProxyDesc(FFastGeoProceduralISMComponent *this)

{
  return (FStaticMeshSceneProxyDesc *)&this->SceneProxyDesc;
}

// GetStaticMeshSceneProxyDesc @ 14da2bba0

FStaticMeshSceneProxyDesc * __thiscall
FFastGeoProceduralISMComponent::GetStaticMeshSceneProxyDesc(FFastGeoProceduralISMComponent *this)

{
  return (FStaticMeshSceneProxyDesc *)&this->SceneProxyDesc;
}

// InitializeFromComponentDescriptor @ 14da2c7c0

void __thiscall
FFastGeoProceduralISMComponent::InitializeFromComponentDescriptor
          (FFastGeoProceduralISMComponent *this,FProceduralISMComponentDescriptor *param_1)

{
  int *piVar1;
  longlong *plVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Src;
  UMaterialInterface *pUVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  uchar uVar16;
  uchar uVar17;
  uchar uVar18;
  uchar uVar19;
  uchar uVar20;
  uchar uVar21;
  uchar uVar22;
  double dVar23;
  TBox<double> *pTVar24;
  UObject *pUVar25;
  UClass *pUVar26;
  uint uVar27;
  uint uVar28;
  double dVar29;
  undefined1 in_XMM2 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  double dVar33;
  double dVar34;
  TBox<double> local_b8 [2];
  
  this->NumInstances = param_1->NumInstances;
  this->NumCustomDataFloats = param_1->NumCustomFloats;
  dVar3 = (param_1->WorldBounds).Min.field0_0x0._s_0.Y;
  (this->PrimitiveBoundsOverride).Min.field0_0x0._s_0.X =
       (param_1->WorldBounds).Min.field0_0x0._s_0.X;
  (this->PrimitiveBoundsOverride).Min.field0_0x0._s_0.Y = dVar3;
  dVar3 = (param_1->WorldBounds).Max.field0_0x0._s_0.X;
  (this->PrimitiveBoundsOverride).Min.field0_0x0._s_0.Z =
       (param_1->WorldBounds).Min.field0_0x0._s_0.Z;
  (this->PrimitiveBoundsOverride).Max.field0_0x0._s_0.X = dVar3;
  dVar3 = (param_1->WorldBounds).Max.field0_0x0._s_0.Z;
  (this->PrimitiveBoundsOverride).Max.field0_0x0._s_0.Y =
       (param_1->WorldBounds).Max.field0_0x0._s_0.Y;
  (this->PrimitiveBoundsOverride).Max.field0_0x0._s_0.Z = dVar3;
  uVar16 = (param_1->WorldBounds).Pad[0];
  uVar17 = (param_1->WorldBounds).Pad[1];
  uVar18 = (param_1->WorldBounds).Pad[2];
  uVar19 = (param_1->WorldBounds).Pad[3];
  uVar20 = (param_1->WorldBounds).Pad[4];
  uVar21 = (param_1->WorldBounds).Pad[5];
  uVar22 = (param_1->WorldBounds).Pad[6];
  (this->PrimitiveBoundsOverride).IsValid = (param_1->WorldBounds).IsValid;
  (this->PrimitiveBoundsOverride).Pad[0] = uVar16;
  (this->PrimitiveBoundsOverride).Pad[1] = uVar17;
  (this->PrimitiveBoundsOverride).Pad[2] = uVar18;
  (this->PrimitiveBoundsOverride).Pad[3] = uVar19;
  (this->PrimitiveBoundsOverride).Pad[4] = uVar20;
  (this->PrimitiveBoundsOverride).Pad[5] = uVar21;
  (this->PrimitiveBoundsOverride).Pad[6] = uVar22;
  pTVar24 = UE::Math::TBox<double>::InverseTransformBy
                      (&this->PrimitiveBoundsOverride,local_b8,
                       (TTransform<double> *)&this->_padding_);
  dVar23 = __real_3fe0000000000000;
  dVar3 = (pTVar24->Min).field0_0x0._s_0.X;
  dVar12 = (pTVar24->Max).field0_0x0._s_0.X - dVar3;
  dVar15 = (pTVar24->Max).field0_0x0._s_0.Z - (pTVar24->Min).field0_0x0._s_0.Z;
  dVar32 = (pTVar24->Max).field0_0x0._s_0.Y - (pTVar24->Min).field0_0x0._s_0.Y;
  dVar33 = dVar12 * __real_3fe0000000000000;
  dVar29 = dVar32 * __real_3fe0000000000000;
  dVar3 = dVar3 + dVar33;
  dVar34 = dVar15 * __real_3fe0000000000000;
  dVar7 = dVar29 + (pTVar24->Min).field0_0x0._s_0.Y;
  dVar9 = dVar34 + (pTVar24->Min).field0_0x0._s_0.Z;
  auVar13._8_4_ = SUB84(dVar7,0);
  auVar13._0_8_ = dVar3;
  auVar13._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  this->_padding_ = (longlong)dVar3;
  this->_padding_ = auVar13._8_8_;
  auVar30._8_4_ = SUB84(dVar33,0);
  auVar30._0_8_ = dVar9;
  auVar30._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
  this->_padding_ = (longlong)dVar9;
  this->_padding_ = auVar30._8_8_;
  this->_padding_ = (longlong)dVar29;
  this->_padding_ = (longlong)dVar34;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = (dVar12 * dVar12 + dVar32 * dVar32 + dVar15 * dVar15) * __real_3fd0000000000000;
  auVar30 = sqrtpd(in_XMM2,auVar10);
  this->_padding_ = auVar30._0_8_;
  dVar29 = (param_1->WorldBounds).Max.field0_0x0._s_0.Y -
           (param_1->WorldBounds).Min.field0_0x0._s_0.Y;
  dVar3 = (param_1->WorldBounds).Min.field0_0x0._s_0.X;
  dVar15 = (param_1->WorldBounds).Max.field0_0x0._s_0.Z -
           (param_1->WorldBounds).Min.field0_0x0._s_0.Z;
  dVar12 = (param_1->WorldBounds).Max.field0_0x0._s_0.X - dVar3;
  auVar31._0_8_ = dVar29 * dVar29;
  auVar31._8_8_ = 0;
  dVar34 = dVar12 * dVar23;
  dVar7 = dVar29 * dVar23 + (param_1->WorldBounds).Min.field0_0x0._s_0.Y;
  dVar9 = dVar15 * dVar23 + (param_1->WorldBounds).Min.field0_0x0._s_0.Z;
  dVar3 = dVar3 + dVar34;
  auVar14._8_4_ = SUB84(dVar7,0);
  auVar14._0_8_ = dVar3;
  auVar14._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  this->_padding_ = (longlong)dVar3;
  this->_padding_ = auVar14._8_8_;
  auVar8._8_4_ = SUB84(dVar34,0);
  auVar8._0_8_ = dVar9;
  auVar8._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
  this->_padding_ = (longlong)dVar9;
  this->_padding_ = auVar8._8_8_;
  this->_padding_ = (longlong)(dVar29 * dVar23);
  this->_padding_ = (longlong)(dVar15 * dVar23);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = (dVar12 * dVar12 + auVar31._0_8_ + dVar15 * dVar15) * __real_3fd0000000000000;
  auVar30 = sqrtpd(auVar31,auVar11);
  this->_padding_ = auVar30._0_8_;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             &param_1->OverrideMaterials);
  plVar2 = &this->_padding_;
  if ((TArray<TObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_> *)plVar2 !=
      &param_1->RuntimeVirtualTextures) {
    iVar4 = (param_1->RuntimeVirtualTextures).ArrayNum;
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    iVar5 = *piVar1;
    _Src = (param_1->RuntimeVirtualTextures).AllocatorInstance.Data;
    *(int *)&this->_padding_ = iVar4;
    if ((iVar4 == 0) && (iVar5 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar4,iVar5,(ForAnyElementType *)plVar2,iVar4,piVar1);
      if (iVar4 != 0) {
        memcpy((void *)*plVar2,_Src,(longlong)iVar4 << 3);
      }
    }
  }
  pUVar25 = TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&param_1->StaticMesh);
  if (pUVar25 != (UObject *)0x0) {
    pUVar26 = Z_Construct_UClass_UStaticMesh_NoRegister();
    iVar4 = (int)pUVar26->_padding_;
    if ((iVar4 <= *(int *)(*(longlong *)&pUVar25->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar25->field_0x10 + 0x30) + (longlong)iVar4 * 8) ==
        &pUVar26->_padding_)) goto LAB_14da2ca94;
  }
  pUVar25 = (UObject *)0x0;
LAB_14da2ca94:
  (this->SceneProxyDesc)._padding_ = (longlong)pUVar25;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 = (param_1->OverlayMaterial).field0_0x0.DebugPtr, pUVar6 != (UMaterialInterface *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->SceneProxyDesc)._padding_ = (longlong)(param_1->OverlayMaterial).field0_0x0;
  *(float *)((longlong)&(this->SceneProxyDesc)._padding_ + 4) =
       (float)param_1->InstanceMinDrawDistance;
  (this->SceneProxyDesc).InstanceStartCullDistance = param_1->InstanceStartCullDistance;
  (this->SceneProxyDesc).InstanceEndCullDistance = param_1->InstanceEndCullDistance;
  *(uchar *)&(this->SceneProxyDesc)._padding_ = (param_1->Mobility).Value;
  *(ERuntimeVirtualTextureMainPassType *)((longlong)&(this->SceneProxyDesc)._padding_ + 5) =
       param_1->VirtualTextureRenderPassType;
  *(FLightingChannels *)((longlong)&(this->SceneProxyDesc)._padding_ + 4) =
       param_1->LightingChannels;
  *(ERendererStencilMask *)((longlong)&(this->SceneProxyDesc)._padding_ + 4) =
       param_1->CustomDepthStencilWriteMask;
  *(int *)&(this->SceneProxyDesc)._padding_ = param_1->VirtualTextureCullMips;
  *(int *)&(this->SceneProxyDesc)._padding_ = param_1->TranslucencySortPriority;
  *(int *)&(this->SceneProxyDesc)._padding_ = param_1->CustomDepthStencilValue;
  uVar27 = (uint)(this->SceneProxyDesc)._padding_;
  uVar27 = ((uint)(byte)param_1->field_0xc1 << 8 ^ uVar27) & 0x100 ^ uVar27;
  *(uint *)&(this->SceneProxyDesc)._padding_ = uVar27;
  *(int *)((longlong)&(this->SceneProxyDesc)._padding_ + 4) = param_1->RayTracingGroupId;
  *(ERayTracingGroupCullingPriority *)((longlong)&(this->SceneProxyDesc)._padding_ + 5) =
       param_1->RayTracingGroupCullingPriority;
  uVar27 = (param_1->bCastShadow ^ uVar27) & 1 ^ uVar27;
  *(uint *)&(this->SceneProxyDesc)._padding_ = uVar27;
  uVar27 = ((uint)(byte)param_1->field_0xc1 << 0xc ^ uVar27) & 0x4000 ^ uVar27;
  *(uint *)&(this->SceneProxyDesc)._padding_ = uVar27;
  uVar27 = ((uint)(byte)param_1->field_0xc1 << 9 ^ uVar27) & 0x1000 ^ uVar27;
  *(uint *)&(this->SceneProxyDesc)._padding_ = uVar27;
  uVar27 = ((uint)(byte)param_1->field_0xc1 << 9 ^ uVar27) & 0x2000 ^ uVar27;
  *(uint *)&(this->SceneProxyDesc)._padding_ = uVar27;
  uVar27 = ((uint)(byte)param_1->field_0xc1 << 0xe ^ uVar27) & 0x80000 ^ uVar27;
  *(uint *)&(this->SceneProxyDesc)._padding_ = uVar27;
  uVar27 = ((uint)(byte)param_1->field_0xc1 << 0xf ^ uVar27) & 0x200000 ^ uVar27;
  *(uint *)&(this->SceneProxyDesc)._padding_ = uVar27;
  uVar27 = ((byte)param_1->field_0xc1 & 0xffffff80) << 0xd | uVar27 & 0xffefffff;
  *(uint *)&(this->SceneProxyDesc)._padding_ = uVar27;
  uVar27 = ((uint)(byte)param_1->field_0xc2 * 2 ^ uVar27) & 2 ^ uVar27;
  *(uint *)&(this->SceneProxyDesc)._padding_ = uVar27;
  *(uint *)&(this->SceneProxyDesc)._padding_ =
       ((uint)(byte)param_1->field_0xc2 << 0x1b ^ uVar27) & 0x10000000 ^ uVar27;
  uVar27 = *(uint *)((longlong)&(this->SceneProxyDesc)._padding_ + 4);
  uVar27 = ((byte)param_1->field_0xc2 ^ uVar27) & 4 ^ uVar27;
  uVar28 = *(uint *)((longlong)&(this->SceneProxyDesc)._padding_ + 4);
  *(uint *)((longlong)&(this->SceneProxyDesc)._padding_ + 4) = uVar27;
  uVar28 = ((byte)param_1->field_0xc2 ^ uVar28) & 8 ^ uVar28;
  *(uint *)((longlong)&(this->SceneProxyDesc)._padding_ + 4) = uVar28;
  *(uint *)((longlong)&(this->SceneProxyDesc)._padding_ + 4) =
       (param_1->bReverseCulling ^ uVar28) & 1 ^ uVar28;
  *(int *)&(this->SceneProxyDesc)._padding_ = param_1->WorldPositionOffsetDisableDistance;
  *(EShadowCacheInvalidationBehavior *)((longlong)&(this->SceneProxyDesc)._padding_ + 6) =
       param_1->ShadowCacheInvalidationBehavior;
  *(uint *)((longlong)&(this->SceneProxyDesc)._padding_ + 4) = uVar27 | 0x400000;
  return;
}

// InitializeSceneProxyDescDynamicProperties @ 14da2d2c0

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
FFastGeoProceduralISMComponent::InitializeSceneProxyDescDynamicProperties
          (FFastGeoProceduralISMComponent *this)

{
  longlong *plVar1;
  uint *puVar2;
  int iVar3;
  TObjectPtr<UMaterialInterface> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FStaticMeshSceneProxyDesc *this_00;
  FResources *pFVar7;
  UBodySetup *pUVar8;
  UWorld *pUVar9;
  FSceneInterface *this_01;
  FMaterialRelevance local_res8;
  undefined4 uStack_c;
  
  FFastGeoPrimitiveComponent::InitializeSceneProxyDescDynamicProperties
            ((FFastGeoPrimitiveComponent *)this);
  this_00 = (FStaticMeshSceneProxyDesc *)(**(code **)(this->_padding_ + 0x118))(this);
  pTVar4 = (TObjectPtr<UMaterialInterface> *)this->_padding_;
  iVar3 = (int)this->_padding_;
  if (iVar3 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  (this_00->OverrideMaterials).DataPtr = pTVar4;
  *(ulonglong *)&(this_00->OverrideMaterials).ArrayNum = CONCAT44(uStack_c,iVar3);
  pFVar7 = FFastGeoStaticMeshComponentBase::GetNaniteResources
                     ((FFastGeoStaticMeshComponentBase *)this);
  this_00->NaniteResources = pFVar7;
  pUVar8 = (UBodySetup *)(**(code **)(this->_padding_ + 8))(this);
  this_00->BodySetup = pUVar8;
  pUVar9 = FFastGeoComponent::GetWorld((FFastGeoComponent *)this);
  if (pUVar9 == (UWorld *)0x0) {
    this_01 = (FSceneInterface *)0x0;
  }
  else {
    this_01 = pUVar9->Scene;
  }
  FSceneInterface::GetShaderPlatform(this_01);
  FMeshComponentHelper::GetMaterialRelevance<FFastGeoMeshComponent>
            ((FFastGeoMeshComponent *)&local_res8,(EShaderPlatform)this);
  FStaticMeshSceneProxyDesc::SetMaterialRelevance(this_00,&local_res8);
  FStaticMeshSceneProxyDesc::SetCollisionResponseToChannels
            (this_00,(FCollisionResponseContainer *)&this->_padding_);
  plVar1 = &(this->SceneProxyDesc)._padding_;
  *(uint *)plVar1 = (uint)*plVar1 & 0xfffd7fff;
  puVar2 = (uint *)((longlong)&(this->SceneProxyDesc)._padding_ + 4);
  *puVar2 = *puVar2 & 0xfffdffff;
  return;
}

// IsNavigationRelevant @ 14da2dd30

bool __thiscall
FFastGeoProceduralISMComponent::IsNavigationRelevant(FFastGeoProceduralISMComponent *this)

{
  return false;
}

// Serialize @ 14da36710

void __thiscall
FFastGeoProceduralISMComponent::Serialize(FFastGeoProceduralISMComponent *this,FArchive *param_1)

{
  uint *puVar1;
  int *piVar2;
  float *pfVar3;
  undefined1 *puVar4;
  int *piVar5;
  float *pfVar6;
  ulonglong *puVar7;
  bool bVar8;
  uint local_res8 [2];
  
  FFastGeoStaticMeshComponentBase::Serialize((FFastGeoStaticMeshComponentBase *)this,param_1);
  piVar2 = &this->NumInstances;
  piVar5 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar2 = &this->NumCustomDataFloats;
  puVar4 = &param_1->field_0x2a;
  piVar5 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar5 + 1) {
    if ((*puVar4 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  UE::Math::operator<<(param_1,&this->PrimitiveBoundsOverride);
  pfVar3 = &(this->SceneProxyDesc).InstanceLODDistanceScale;
  pfVar6 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar6 + 1) {
    if ((*puVar4 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar3);
    }
  }
  else {
    *pfVar3 = *pfVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar2 = &(this->SceneProxyDesc).InstanceMinDrawDistance;
  piVar5 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar5 + 1) {
    if ((*puVar4 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar2 = &(this->SceneProxyDesc).InstanceStartCullDistance;
  piVar5 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar5 + 1) {
    if ((*puVar4 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar2 = &(this->SceneProxyDesc).InstanceEndCullDistance;
  piVar5 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar5 + 1) {
    if ((*puVar4 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar7 = *(ulonglong **)&param_1->field_0x8;
  bVar8 = (this->SceneProxyDesc).bUseGpuLodSelection;
  puVar1 = (uint *)*puVar7 + 1;
  if ((uint *)puVar7[1] < puVar1) {
    local_res8[0] = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_res8[0] = (uint)(bVar8 != false);
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    if ((param_1->field_0x28 & 1) == 0) goto LAB_14da36951;
  }
  else {
    local_res8[0] = *(uint *)*puVar7;
    *puVar7 = (ulonglong)puVar1;
  }
  bVar8 = local_res8[0] != 0;
LAB_14da36951:
  if ((this->SceneProxyDesc).bUseGpuLodSelection != bVar8) {
    (this->SceneProxyDesc).bUseGpuLodSelection = bVar8;
  }
  return;
}

