// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraNanite
// Functions: 22

// StaticClass @ 14da3d980

UClass * __cdecl UNiagaraStaticMeshComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStaticMeshComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NiagaraNanite",L"NiagaraStaticMeshComponent",
               &Z_Registration_Info_UClass_UNiagaraStaticMeshComponent.InnerSingleton,
               StaticRegisterNativesUNiagaraStaticMeshComponent,0x690,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraStaticMeshComponent>,
               InternalVTableHelperCtorCaller<UNiagaraStaticMeshComponent>,local_res8,
               UStaticMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStaticMeshComponent.InnerSingleton;
}

// UNiagaraStaticMeshComponent @ 14da40980

UNiagaraStaticMeshComponent * __thiscall
UNiagaraStaticMeshComponent::UNiagaraStaticMeshComponent
          (UNiagaraStaticMeshComponent *this,FVTableHelper *param_1)

{
  UStaticMeshComponent::UStaticMeshComponent((UStaticMeshComponent *)this,param_1);
  this->bUseCpuOnlyUpdates = false;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->NumInstances = 0;
  this->NumCustomDataFloats = 0;
  *(undefined8 *)&this->PendingCpuUpdateFunction = 0;
  *(undefined8 *)&(this->PendingCpuUpdateFunction).field_0x28 = 0;
  return this;
}

// UNiagaraStaticMeshComponent @ 14da40a10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UNiagaraStaticMeshComponent * __thiscall
UNiagaraStaticMeshComponent::UNiagaraStaticMeshComponent
          (UNiagaraStaticMeshComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UStaticMeshComponent::UStaticMeshComponent((UStaticMeshComponent *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 6);
  *pbVar1 = *pbVar1 & 0xeb;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->bUseCpuOnlyUpdates = false;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->NumInstances = 0;
  this->NumCustomDataFloats = 0;
  *(undefined8 *)&this->PendingCpuUpdateFunction = 0;
  *(undefined8 *)&(this->PendingCpuUpdateFunction).field_0x28 = 0;
  UPrimitiveComponent::SetGenerateOverlapEvents((UPrimitiveComponent *)this,false);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 7);
  *pbVar1 = *pbVar1 & 0xfd;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0x3f;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xfe;
  *(undefined1 *)((longlong)&this->_padding_ + 3) = 2;
  return this;
}

// ~UNiagaraStaticMeshComponent @ 14da40d30

void __thiscall
UNiagaraStaticMeshComponent::~UNiagaraStaticMeshComponent(UNiagaraStaticMeshComponent *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  if (*(longlong *)&this->PendingCpuUpdateFunction != 0) {
    plVar1 = *(longlong **)&(this->PendingCpuUpdateFunction).field_0x28;
    plVar2 = (longlong *)&(this->PendingCpuUpdateFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  UStaticMeshComponent::~UStaticMeshComponent((UStaticMeshComponent *)this);
  return;
}

// BuildTextureStreamingDataImpl @ 14da41890

bool __thiscall
UNiagaraStaticMeshComponent::BuildTextureStreamingDataImpl
          (UNiagaraStaticMeshComponent *this,ETextureStreamingBuildType param_1,Type param_2,
          Type param_3,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_4,
          bool *param_5)

{
  return true;
}

// CalcBounds @ 14da41c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TBoxSphereBounds<double,double> * __thiscall
UNiagaraStaticMeshComponent::CalcBounds
          (UNiagaraStaticMeshComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__
          ,TTransform<double> *param_1)

{
  double dVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  TMatrix<double> *pTVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined1 auStack_168 [32];
  TVector<double>_u_0 local_148;
  double local_130;
  double local_128;
  double local_120;
  undefined1 local_118;
  TVector<double>_u_0 local_110;
  double local_f8;
  double local_f0;
  double local_e8;
  TMatrix<double> local_d8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_168;
  pUVar2 = Z_Construct_UClass_USceneComponent_NoRegister();
  pUVar3 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar2);
  if (pUVar3 == (UObject *)0x0) {
    local_148._s_0.X =
         UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * __real_c024000000000000;
    local_118 = 1;
    local_148._s_0.Z =
         UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z * __real_c024000000000000;
    local_148._s_0.Y =
         UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * __real_c024000000000000;
    local_130 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * __real_4024000000000000;
    local_128 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * __real_4024000000000000;
    local_120 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z * __real_4024000000000000;
    pTVar4 = UE::Math::TTransform<double>::ToMatrixWithScale(param_1,&local_d8);
    UE::Math::TBox<double>::TransformBy
              ((TBox<double> *)&local_148._s_0,(TBox<double> *)&local_110._s_0,pTVar4);
    local_e8 = local_e8 - local_110._s_0.Z;
    local_f0 = local_f0 - local_110._s_0.Y;
    dVar7 = local_e8 * __real_3fe0000000000000;
    dVar1 = (local_f8 - local_110._s_0.X) * __real_3fe0000000000000;
    dVar8 = local_f0 * __real_3fe0000000000000;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.X = dVar1 + local_110._s_0.X;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar8 + local_110._s_0.Y;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar7 + local_110._s_0.Z;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar1;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar8;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar7;
    dVar1 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X;
    auVar5._0_8_ = dVar1 * dVar1;
    auVar5._8_8_ = 0;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = (local_e8 * local_e8 + local_f0 * local_f0) * __real_3fd0000000000000 +
                   auVar5._0_8_;
    auVar6 = sqrtpd(auVar5,auVar6);
    __return_storage_ptr__->SphereRadius = auVar6._0_8_;
  }
  else {
    dVar1 = *(double *)(pUVar3 + 7);
    (__return_storage_ptr__->Origin).field0_0x0._s_0.X = *(double *)&pUVar3[6].field_0x20;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar1;
    dVar1 = *(double *)&pUVar3[7].field_0x10;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = *(double *)&pUVar3[7].field_0x8;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar1;
    dVar1 = *(double *)&pUVar3[7].field_0x20;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = *(double *)&pUVar3[7].field_0x18;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar1;
    __return_storage_ptr__->SphereRadius = *(double *)(pUVar3 + 8);
  }
  return __return_storage_ptr__;
}

// CreateSceneProxy @ 14da429c0

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
UNiagaraStaticMeshComponent::CreateSceneProxy(UNiagaraStaticMeshComponent *this)

{
  FPrimitiveSceneProxy *pFVar1;
  
  if (this->NumInstances < 1) {
    return (FPrimitiveSceneProxy *)0x0;
  }
  pFVar1 = UStaticMeshComponent::CreateSceneProxy((UStaticMeshComponent *)this);
  return pFVar1;
}

// CreateStaticMeshSceneProxy @ 14da429e0

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
UNiagaraStaticMeshComponent::CreateStaticMeshSceneProxy
          (UNiagaraStaticMeshComponent *this,FMaterialAudit *param_1,bool param_2)

{
  FGenericStaticFeatureLevel FVar1;
  code *pcVar2;
  bool bVar3;
  EPSOPrecacheProxyCreationStrategy EVar4;
  FStaticShaderPlatform FVar5;
  UWorld *pUVar6;
  FPrimitiveSceneProxy *pFVar7;
  UWorld *pUVar8;
  FInstancedStaticMeshSceneProxy *this_00;
  FLLMScope local_res8 [2];
  FMemScope local_res20;
  FInstancedStaticMeshSceneProxyDesc local_1d8;
  
  FLLMScope::FLLMScope(local_res8,InstancedMesh,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,InstancedMesh,true);
  if (this->_padding_ == 0) {
    pUVar6 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    if (pUVar6 != (UWorld *)0x0) goto LAB_14da42aa0;
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8626280782807171202>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\NiagaraNanite\\Source\\NiagaraNanite\\Private\\Renderer\\NiagaraStaticMeshComponent.cpp"
                       ,0x82,"GetWorld()");
    if (bVar3) goto code_r0x00014da42aea;
  }
  else {
LAB_14da42aa0:
    pUVar6 = (UWorld *)this->_padding_;
    if (pUVar6 == (UWorld *)0x0) {
      pUVar6 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    if (pUVar6->Scene == (FSceneInterface *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8626280782807171202>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\NiagaraNanite\\Source\\NiagaraNanite\\Private\\Renderer\\NiagaraStaticMeshComponent.cpp"
                         ,0x82,"GetWorld()->Scene");
      if (bVar3) {
code_r0x00014da42aea:
        pcVar2 = (code *)swi(3);
        pFVar7 = (FPrimitiveSceneProxy *)(*pcVar2)();
        return pFVar7;
      }
    }
    else {
      pUVar6 = (UWorld *)this->_padding_;
      if (pUVar6 == (UWorld *)0x0) {
        pUVar6 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
      }
      pUVar8 = (UWorld *)this->_padding_;
      FVar1.FeatureLevel = pUVar6->Scene->FeatureLevel;
      if (pUVar8 == (UWorld *)0x0) {
        pUVar8 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
      }
      FVar5.Platform = FSceneInterface::GetShaderPlatform(pUVar8->Scene);
      bVar3 = UseGPUScene(FVar5,FVar1);
      if (bVar3) {
        bVar3 = UPrimitiveComponent::CheckPSOPrecachingAndBoostPriority
                          ((UPrimitiveComponent *)this,High);
        if (bVar3) {
          EVar4 = GetPSOPrecacheProxyCreationStrategy();
          if (EVar4 == DelayUntilPSOPrecached) goto LAB_14da42a6d;
        }
        FStaticMeshSceneProxyDesc::FStaticMeshSceneProxyDesc
                  ((FStaticMeshSceneProxyDesc *)&local_1d8);
        local_1d8.InstanceMinDrawDistance = 0;
        local_1d8.InstanceStartCullDistance = 0;
        local_1d8._padding_ = (longlong)&___7FInstancedStaticMeshSceneProxyDesc__6B_;
        local_1d8.InstanceDataSceneProxy.Object = (FInstanceDataSceneProxy *)0x0;
        local_1d8.InstanceDataSceneProxy.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_1d8.InstanceEndCullDistance = 0;
        local_1d8.InstanceLODDistanceScale = 1.0;
        local_1d8.bUseGpuLodSelection = false;
        GetSceneProxyDesc(this,&local_1d8);
        if (param_2) {
          this_00 = ::operator_new(0xc20);
          if (this_00 == (FInstancedStaticMeshSceneProxy *)0x0) {
LAB_14da42c39:
            this_00 = (FInstancedStaticMeshSceneProxy *)0x0;
          }
          else {
            Nanite::FSceneProxy::FSceneProxy((FSceneProxy *)this_00,param_1,&local_1d8);
            this_00->field_0x82 = this_00->field_0x82 | 0x80;
            *(undefined ***)this_00 = &___7FNaniteSceneProxy_NiagaraStaticMeshComponentPrivate__6B_;
          }
        }
        else {
          this_00 = ::operator_new(0xdb0);
          if (this_00 == (FInstancedStaticMeshSceneProxy *)0x0) goto LAB_14da42c39;
          pUVar6 = (UWorld *)this->_padding_;
          if (pUVar6 == (UWorld *)0x0) {
            pUVar6 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
          }
          FInstancedStaticMeshSceneProxy::FInstancedStaticMeshSceneProxy
                    (this_00,&local_1d8,(uint)(pUVar6->FeatureLevel).Value);
          this_00->field_0x82 = this_00->field_0x82 | 0x80;
          *(undefined ***)this_00 = &___7FMeshSceneProxy_NiagaraStaticMeshComponentPrivate__6B_;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1d8.InstanceDataSceneProxy.SharedReferenceCount.ReferenceController);
        FStaticMeshSceneProxyDesc::~FStaticMeshSceneProxyDesc
                  ((FStaticMeshSceneProxyDesc *)&local_1d8);
        goto LAB_14da42a6f;
      }
    }
  }
LAB_14da42a6d:
  this_00 = (FInstancedStaticMeshSceneProxy *)0x0;
LAB_14da42a6f:
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return (FPrimitiveSceneProxy *)this_00;
}

// GetMaterialStreamingData @ 14da43310

bool __thiscall
UNiagaraStaticMeshComponent::GetMaterialStreamingData
          (UNiagaraStaticMeshComponent *this,int param_1,FPrimitiveMaterialInfo *param_2)

{
  UStaticMesh *this_00;
  UMaterialInterface *pUVar1;
  FMeshUVChannelInfo *pFVar2;
  
  if ((UObject *)this->_padding_ != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)this->_padding_);
    }
    pUVar1 = UStaticMeshComponent::GetMaterial((UStaticMeshComponent *)this,param_1);
    param_2->Material = pUVar1;
    this_00 = (UStaticMesh *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    pFVar2 = UStaticMesh::GetUVChannelData(this_00,param_1);
    param_2->UVChannelData = pFVar2;
    param_2->PackedRelativeBox = 0xffff0000;
  }
  if (((param_2->Material != (UMaterialInterface *)0x0) &&
      (param_2->UVChannelData != (FMeshUVChannelInfo *)0x0)) && (param_2->PackedRelativeBox != 0)) {
    return true;
  }
  return false;
}

// GetPrivateStaticClass @ 14da43730

UClass * __cdecl UNiagaraStaticMeshComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStaticMeshComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NiagaraNanite",L"NiagaraStaticMeshComponent",
               &Z_Registration_Info_UClass_UNiagaraStaticMeshComponent.InnerSingleton,
               StaticRegisterNativesUNiagaraStaticMeshComponent,0x690,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraStaticMeshComponent>,
               InternalVTableHelperCtorCaller<UNiagaraStaticMeshComponent>,local_res8,
               UStaticMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStaticMeshComponent.InnerSingleton;
}

// GetRenderMatrix @ 14da43980

TMatrix<double> * __thiscall
UNiagaraStaticMeshComponent::GetRenderMatrix
          (UNiagaraStaticMeshComponent *this,TMatrix<double> *__return_storage_ptr__)

{
  UE::Math::TTransform<double>::ToMatrixWithScale
            ((TTransform<double> *)&this->_padding_,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetSceneProxyDesc @ 14da43b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UNiagaraStaticMeshComponent::GetSceneProxyDesc
          (UNiagaraStaticMeshComponent *this,FInstancedStaticMeshSceneProxyDesc *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  UStaticMesh *this_00;
  longlong *plVar10;
  code *pcVar11;
  FAccessTag FVar12;
  TArray<FRenderBounds,TSizedDefaultAllocator<32>_> *pTVar13;
  FCurrentWriterTag FVar14;
  bool bVar15;
  atomic<unsigned_int> aVar16;
  int iVar17;
  TMatrix<double> *pTVar18;
  TBoxSphereBounds<double,double> *pTVar19;
  undefined8 uVar20;
  TReferenceControllerBase<1> *pTVar21;
  uint uVar22;
  longlong *plVar23;
  ushort uVar24;
  int iVar25;
  FInstanceDataSceneProxy *pFVar26;
  TReferenceControllerBase<1> *pTVar27;
  FScriptContainerElement *pFVar28;
  undefined1 auStackY_368 [32];
  FInstanceDataSceneProxy *local_320;
  FSharedReferencer<1> aFStack_318 [2];
  ulonglong local_308;
  FInstanceSceneDataBuffers *local_300;
  TVector<double> *local_2f8;
  TArray<FRenderBounds,TSizedDefaultAllocator<32>_> *local_2f0;
  TArray<float,TSizedDefaultAllocator<32>_> *local_2e8;
  TArray<float,TSizedDefaultAllocator<32>_> *local_2e0;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *local_2d8;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *local_2d0;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *local_2c8;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *local_2c0;
  TArray<FRenderTransform,TSizedDefaultAllocator<32>_> *local_2b8;
  TArray<FRenderTransform,TSizedDefaultAllocator<32>_> *local_2b0;
  TBitArray<FDefaultBitArrayAllocator> *local_2a8;
  int *local_2a0;
  int *local_298;
  FInstanceDataFlags *local_290;
  TBoxSphereBounds<double,double> local_288;
  FInstanceSceneDataBuffers local_248;
  undefined1 local_128 [128];
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_368;
  FInstanceSceneDataBuffers::FInstanceSceneDataBuffers(&local_248,this->bUseCpuOnlyUpdates == false)
  ;
  uVar22 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) * -0x7a143595;
  uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
  aVar16 = (atomic<unsigned_int>)(uVar22 >> 0x10 ^ uVar22);
  FVar12.Kind = Writer;
  FVar12.WriterTag = (uint)aVar16;
  if ((aVar16 == (atomic<unsigned_int>)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("AccessTag.Kind == FAccessTag::EKind::Writer && AccessTag.WriterTag != 0u"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                          ,0xf8,L""), bVar15)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  LOCK();
  bVar15 = local_248.CurrentWriterTag.Value != (atomic<unsigned_int>)0x0;
  FVar14.Value = aVar16;
  if (bVar15) {
    FVar14.Value = local_248.CurrentWriterTag.Value;
  }
  local_248.CurrentWriterTag.Value = FVar14.Value;
  UNLOCK();
  if ((bVar15) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("CurrentWriterTag.Value.compare_exchange_strong(PrevTagValue, AccessTag.WriterTag)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                          ,0xfb,L""), bVar15)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  local_300 = &local_248;
  local_2f8 = &local_248.PrimitiveWorldSpaceOffset;
  local_2f0 = &local_248.InstanceLocalBounds;
  local_2e8 = &local_248.InstanceCustomData;
  local_2e0 = &local_248.InstanceRandomIDs;
  local_2d8 = &local_248.InstanceLightShadowUVBias;
  local_2d0 = &local_248.InstanceSkinningData;
  local_2c8 = &local_248.InstanceHierarchyOffset;
  local_2c0 = &local_248.InstancePayloadExtension;
  local_2b8 = &local_248.InstanceToPrimitiveRelative;
  local_2b0 = &local_248.PrevInstanceToPrimitiveRelative;
  local_2a8 = &local_248.VisibleInstances;
  local_2a0 = &local_248.NumInstancesGPUOnly;
  local_298 = &local_248.NumCustomDataFloats;
  local_290 = &local_248.Flags;
  local_308 = (ulonglong)(uint)aVar16 | 0x100000000;
  pTVar18 = (TMatrix<double> *)(**(code **)(this->_padding_ + 0x808))(this,local_128);
  FInstanceSceneDataBuffers::SetPrimitiveLocalToWorld(&local_248,pTVar18,FVar12);
  *local_298 = this->NumCustomDataFloats;
  pTVar13 = local_2f0;
  iVar25 = local_2f0->ArrayNum;
  if (iVar25 < 1) {
    iVar17 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x18,4,1 - iVar25,&local_2f0->AllocatorInstance,&local_2f0->ArrayNum,
                        &local_2f0->ArrayMax);
    DefaultConstructItems<FRenderBounds,int>
              ((pTVar13->AllocatorInstance).Data + (longlong)iVar17 * 0x18,1 - iVar25);
  }
  else if (1 < iVar25) {
    uVar22 = iVar25 - 1;
    if ((int)uVar22 < 0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x458,
                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                         );
      if (bVar15) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    else if (uVar22 == 0) goto LAB_14da43df5;
    pFVar28 = (pTVar13->AllocatorInstance).Data + 0x18;
    iVar25 = ~uVar22 + pTVar13->ArrayNum;
    if (iVar25 != 0) {
      memmove(pFVar28,pFVar28 + (longlong)(int)uVar22 * 0x18,(longlong)iVar25 * 0x18);
    }
    pTVar13->ArrayNum = pTVar13->ArrayNum - uVar22;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,&pTVar13->AllocatorInstance,pTVar13->ArrayNum,&pTVar13->ArrayMax);
  }
LAB_14da43df5:
  this_00 = (UStaticMesh *)this->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  pTVar19 = UStaticMesh::GetBounds(this_00,&local_288);
  pTVar13 = local_2f0;
  pTVar27 = (TReferenceControllerBase<1> *)0x0;
  dVar1 = (pTVar19->BoxExtent).field0_0x0._s_0.X;
  dVar2 = (pTVar19->Origin).field0_0x0._s_0.X;
  dVar3 = (pTVar19->BoxExtent).field0_0x0._s_0.Y;
  dVar4 = (pTVar19->BoxExtent).field0_0x0._s_0.Z;
  dVar5 = (pTVar19->Origin).field0_0x0._s_0.Y;
  dVar6 = (pTVar19->Origin).field0_0x0._s_0.X;
  dVar7 = (pTVar19->Origin).field0_0x0._s_0.Y;
  dVar8 = (pTVar19->Origin).field0_0x0._s_0.Z;
  dVar9 = (pTVar19->Origin).field0_0x0._s_0.Z;
  if ((local_2f0->ArrayNum < 1) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pFVar28 = (pTVar13->AllocatorInstance).Data;
  *(float *)pFVar28 = (float)(dVar2 - dVar1);
  *(float *)(pFVar28 + 4) = (float)(dVar5 - dVar3);
  *(float *)(pFVar28 + 8) = (float)(dVar8 - dVar4);
  *(float *)(pFVar28 + 0xc) = (float)(dVar1 + dVar6);
  *(float *)(pFVar28 + 0x10) = (float)(dVar3 + dVar7);
  *(float *)(pFVar28 + 0x14) = (float)(dVar4 + dVar9);
  pTVar21 = pTVar27;
  if (0 < *local_298) {
    pTVar21 = (TReferenceControllerBase<1> *)&DAT_00000002;
  }
  uVar24 = (ushort)pTVar21 | local_290->Packed & 0xfffd;
  local_290->Packed = uVar24;
  local_290->Packed = uVar24 | 4;
  if (this->bUseCpuOnlyUpdates == false) {
    *local_2a0 = this->NumInstances;
  }
  else if (*(void **)&this->PendingCpuUpdateFunction == (void *)0x0) {
    local_2b8->ArrayNum = 0;
    if (local_2b8->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,4,0,&local_2b8->AllocatorInstance,0,&local_2b8->ArrayMax);
    }
    local_2b0->ArrayNum = 0;
    if (local_2b0->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,4,0,&local_2b0->AllocatorInstance,0,&local_2b0->ArrayMax);
    }
  }
  else {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->PendingCpuUpdateFunction);
    pcVar11 = *(code **)&this->PendingCpuUpdateFunction;
    plVar10 = *(longlong **)&(this->PendingCpuUpdateFunction).field_0x28;
    plVar23 = (longlong *)&(this->PendingCpuUpdateFunction).field_0x10;
    if (plVar10 != (longlong *)0x0) {
      plVar23 = plVar10;
    }
    uVar20 = (**(code **)(*plVar23 + 8))();
    (*pcVar11)(uVar20,&local_308);
  }
  if (local_248.bInstanceDataIsGPUOnly) {
    local_248.NumInstancesGPUOnly = local_248.InstanceToPrimitiveRelative.ArrayNum;
  }
  if ((local_248.NumInstancesGPUOnly != 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("bInstanceDataIsGPUOnly ? InstanceToPrimitiveRelative.IsEmpty() : (NumInstancesGPUOnly == 0)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                          ,0x117,L""), bVar15)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if ((aVar16 == (atomic<unsigned_int>)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("AccessTag.Kind == FAccessTag::EKind::Writer && AccessTag.WriterTag != 0u"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                          ,0x118,L""), bVar15)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  LOCK();
  bVar15 = aVar16 == local_248.CurrentWriterTag.Value;
  if (bVar15) {
    local_248.CurrentWriterTag.Value = (atomic<unsigned_int>)0x0;
  }
  UNLOCK();
  if ((!bVar15) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("CurrentWriterTag.Value.compare_exchange_strong(PrevTagValue, 0U)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                          ,0x11b,L""), bVar15)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  FInstanceSceneDataBuffers::ValidateData(&local_248);
  FStaticMeshSceneProxyDesc::InitializeFromStaticMeshComponent
            ((FStaticMeshSceneProxyDesc *)param_1,(UStaticMeshComponent *)this);
  pTVar21 = ::operator_new(0x130);
  if (pTVar21 == (TReferenceControllerBase<1> *)0x0) {
    local_320 = ___xmm_00000000000000000000000000000010;
    pFVar26 = (FInstanceDataSceneProxy *)&DAT_00000010;
    aFStack_318[0].ReferenceController = _UNK_150651568;
  }
  else {
    pTVar21->SharedReferenceCount = (atomic<int>)0x1;
    pTVar21->WeakReferenceCount = (atomic<int>)0x1;
    pTVar21->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFInstanceDataSceneProxy___00_SharedPointerInternals__6B_
    ;
    FInstanceDataSceneProxy::FInstanceDataSceneProxy
              ((FInstanceDataSceneProxy *)(pTVar21 + 1),&local_248);
    pFVar26 = (FInstanceDataSceneProxy *)(pTVar21 + 1);
    if ((pFVar26 == (FInstanceDataSceneProxy *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar15)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    LOCK();
    pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
    UNLOCK();
    aFStack_318[0].ReferenceController = pTVar21;
    pTVar27 = pTVar21;
    local_320 = pFVar26;
  }
  if (&param_1->InstanceDataSceneProxy != (TSharedPtr<FInstanceDataSceneProxy,1> *)&local_320) {
    (param_1->InstanceDataSceneProxy).Object = pFVar26;
    local_320 = (FInstanceDataSceneProxy *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(param_1->InstanceDataSceneProxy).SharedReferenceCount,aFStack_318);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_318[0].ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar27);
  param_1->bUseGpuLodSelection = true;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_248.Immutable.SharedReferenceCount.ReferenceController);
  if (local_248.VisibleInstances.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_248.VisibleInstances.AllocatorInstance.SecondaryData);
  }
  if (local_248.PrevInstanceToPrimitiveRelative.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.PrevInstanceToPrimitiveRelative.AllocatorInstance.Data);
  }
  if (local_248.InstanceToPrimitiveRelative.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    FMemory::Free(local_248.InstanceToPrimitiveRelative.AllocatorInstance.Data);
  }
  if (local_248.InstancePayloadExtension.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.InstancePayloadExtension.AllocatorInstance.Data);
  }
  if (local_248.InstanceHierarchyOffset.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.InstanceHierarchyOffset.AllocatorInstance.Data);
  }
  if (local_248.InstanceSkinningData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.InstanceSkinningData.AllocatorInstance.Data);
  }
  if (local_248.InstanceLightShadowUVBias.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_248.InstanceLightShadowUVBias.AllocatorInstance.Data);
  }
  if (local_248.InstanceRandomIDs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.InstanceRandomIDs.AllocatorInstance.Data);
  }
  if (local_248.InstanceCustomData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.InstanceCustomData.AllocatorInstance.Data);
  }
  if (local_248.InstanceLocalBounds.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.InstanceLocalBounds.AllocatorInstance.Data);
  }
  return;
}

// GetStreamingRenderAssetInfo @ 14da44260

void __thiscall
UNiagaraStaticMeshComponent::GetStreamingRenderAssetInfo
          (UNiagaraStaticMeshComponent *this,FStreamingTextureLevelContext *param_1,
          TArray<FStreamingRenderAssetPrimitiveInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  if ((this->NumInstances < 1) && ((double)this->_padding_ <= 0.0)) {
    return;
  }
  UStaticMeshComponent::GetStreamingRenderAssetInfo((UStaticMeshComponent *)this,param_1,param_2);
  return;
}

// IsHLODRelevant @ 14da449d0

bool __thiscall UNiagaraStaticMeshComponent::IsHLODRelevant(UNiagaraStaticMeshComponent *this)

{
  return false;
}

// IsNavigationRelevant @ 14da449e0

bool __thiscall UNiagaraStaticMeshComponent::IsNavigationRelevant(UNiagaraStaticMeshComponent *this)

{
  return false;
}

// IsNavigationRelevant`adjustor{592}' @ 14da449ec

/* [thunk]:public: virtual bool __cdecl
   UNiagaraStaticMeshComponent::IsNavigationRelevant`adjustor{592}' (void)const __ptr64 */

bool __thiscall
UNiagaraStaticMeshComponent::IsNavigationRelevant_adjustor_592__(UNiagaraStaticMeshComponent *this)

{
  bool bVar1;
  
  bVar1 = IsNavigationRelevant((UNiagaraStaticMeshComponent *)&this[-1]._padding_);
  return bVar1;
}

// OnComponentDestroyed @ 14da44cd0

void __thiscall
UNiagaraStaticMeshComponent::OnComponentDestroyed(UNiagaraStaticMeshComponent *this,bool param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->PendingCpuUpdateFunction != 0) {
    plVar1 = *(longlong **)&(this->PendingCpuUpdateFunction).field_0x28;
    plVar2 = (longlong *)&(this->PendingCpuUpdateFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
    *(undefined8 *)&this->PendingCpuUpdateFunction = 0;
  }
  return;
}

// ShouldCreatePhysicsState @ 14da46a90

bool __thiscall
UNiagaraStaticMeshComponent::ShouldCreatePhysicsState(UNiagaraStaticMeshComponent *this)

{
  return false;
}

// StaticRegisterNativesUNiagaraStaticMeshComponent @ 14da46ab0

void __cdecl UNiagaraStaticMeshComponent::StaticRegisterNativesUNiagaraStaticMeshComponent(void)

{
  return;
}

// SupportsStaticLighting @ 14da46ac0

bool __thiscall
UNiagaraStaticMeshComponent::SupportsStaticLighting(UNiagaraStaticMeshComponent *this)

{
  return false;
}

// UpdateInstanceCPU @ 14da46ae0

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
UNiagaraStaticMeshComponent::UpdateInstanceCPU
          (UNiagaraStaticMeshComponent *this,int param_1,
          TFunction<void___cdecl(FInstanceSceneDataBuffers::FWriteView_&)> *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  longlong *plVar10;
  
  if (this->bUseCpuOnlyUpdates != true) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("bUseCpuOnlyUpdates == true",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\NiagaraNanite\\Source\\NiagaraNanite\\Private\\Renderer\\NiagaraStaticMeshComponent.cpp"
                       ,0xcb,L"");
    if (bVar9) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->NumInstances = param_1;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  uVar3 = *(undefined8 *)&this->PendingCpuUpdateFunction;
  uVar4 = *(undefined8 *)&(this->PendingCpuUpdateFunction).field_0x8;
  uVar5 = *(undefined8 *)&(this->PendingCpuUpdateFunction).field_0x10;
  uVar6 = *(undefined8 *)&(this->PendingCpuUpdateFunction).field_0x18;
  uVar7 = *(undefined8 *)&(this->PendingCpuUpdateFunction).field_0x20;
  uVar8 = *(undefined8 *)&(this->PendingCpuUpdateFunction).field_0x28;
  *(undefined8 *)&this->PendingCpuUpdateFunction = *(undefined8 *)param_2;
  *(undefined8 *)&(this->PendingCpuUpdateFunction).field_0x8 = uVar2;
  uVar2 = *(undefined8 *)&param_2->field_0x18;
  *(undefined8 *)&(this->PendingCpuUpdateFunction).field_0x10 = *(undefined8 *)&param_2->field_0x10;
  *(undefined8 *)&(this->PendingCpuUpdateFunction).field_0x18 = uVar2;
  uVar2 = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&(this->PendingCpuUpdateFunction).field_0x20 = *(undefined8 *)&param_2->field_0x20;
  *(undefined8 *)&(this->PendingCpuUpdateFunction).field_0x28 = uVar2;
  *(undefined8 *)param_2 = uVar3;
  *(undefined8 *)&param_2->field_0x8 = uVar4;
  *(undefined8 *)&param_2->field_0x10 = uVar5;
  *(undefined8 *)&param_2->field_0x18 = uVar6;
  *(undefined8 *)&param_2->field_0x20 = uVar7;
  *(undefined8 *)&param_2->field_0x28 = uVar8;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  if (*(longlong *)param_2 != 0) {
    plVar10 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar10 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  return;
}

// UpdateInstanceGPU @ 14da46bb0

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
UNiagaraStaticMeshComponent::UpdateInstanceGPU
          (UNiagaraStaticMeshComponent *this,int param_1,
          TFunction<void___cdecl(FRDGBuilder_&,FGPUSceneWriteDelegateParams_const_&)> *param_2)

{
  FSceneInterface *pFVar1;
  code *pcVar2;
  bool bVar3;
  UWorld *pUVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  longlong *plVar7;
  undefined1 auStack_248 [32];
  undefined1 local_228 [8];
  FDelegateAllocation local_220;
  FDestructionSentinel local_210;
  FDestructionSentinel local_1f8;
  FDelegateAllocation *local_1e0;
  FGPUSceneWriteDelegate local_1d8;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  longlong local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_68;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_248;
  if ((this->bUseCpuOnlyUpdates != false) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bUseCpuOnlyUpdates == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\NiagaraNanite\\Source\\NiagaraNanite\\Private\\Renderer\\NiagaraStaticMeshComponent.cpp"
                         ,0xd4,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (this->NumInstances < param_1) {
    this->NumInstances = param_1;
    UActorComponent::RecreateRenderState_Concurrent((UActorComponent *)this);
  }
  this->NumInstances = param_1;
  pUVar4 = (UWorld *)this->_padding_;
  if (((pUVar4 != (UWorld *)0x0) ||
      (pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar4 != (UWorld *)0x0
      )) && (pUVar4->Scene != (FSceneInterface *)0x0)) {
    local_1b8 = 0;
    uStack_1b0 = 0;
    local_1a8 = 0;
    local_198 = 0;
    local_190 = 1;
    local_18c = 2;
    local_80 = 0;
    local_78 = 0;
    if ((this->_padding_ != this->_padding_) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("SceneProxy == SceneData.SceneProxy",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\PrimitiveComponent.h"
                           ,0x801,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_1a0 = this->_padding_;
    if (local_1a0 != 0) {
      local_68 = *(longlong *)param_2;
      pFVar1 = pUVar4->Scene;
      pcVar2 = *(code **)(pFVar1->_padding_ + 1000);
      local_40 = *(longlong **)&param_2->field_0x28;
      *(undefined8 *)&param_2->field_0x28 = 0;
      local_48 = *(undefined8 *)&param_2->field_0x20;
      local_58 = *(longlong *)&param_2->field_0x10;
      uStack_50 = *(undefined8 *)&param_2->field_0x18;
      if (local_68 != 0) {
        *(undefined8 *)param_2 = 0;
      }
      local_228 = (undefined1  [8])0x0;
      local_220.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_220.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_228,
                 (FWriteAccessScope *)&local_1f8);
      local_1e0 = &local_220;
      puVar5 = UE::Core::Private::DelegateAllocate(0x50,&local_220);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEAVFRDGBuilder__AEBUFGPUSceneWriteDelegateParams___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar6 = FDelegateHandle::GenerateNewID();
        puVar5[2] = uVar6;
        *puVar5 = &TBaseFunctorDelegateInstance<void___cdecl(FRDGBuilder_&,FGPUSceneWriteDelegateParams_const_&),FDefaultDelegateUserPolicy,`UNiagaraStaticMeshComponent::UpdateInstanceGPU'::`18'::<lambda_1>_>
                   ::_vftable_;
        puVar5[4] = local_68;
        puVar5[9] = local_40;
        local_40 = (longlong *)0x0;
        puVar5[6] = local_58;
        puVar5[7] = uStack_50;
        puVar5[8] = local_48;
        if (puVar5[4] != 0) {
          local_68 = 0;
        }
      }
      if (local_1f8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1f8.Accessor,&local_1f8);
      }
      FGPUSceneWriteDelegate::FGPUSceneWriteDelegate
                (&local_1d8,
                 (TDelegate<void___cdecl(FRDGBuilder_&,FGPUSceneWriteDelegateParams_const_&),FDefaultDelegateUserPolicy>
                  *)local_228);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_228,
                 (FWriteAccessScope *)&local_210);
      if ((local_220.DelegateSize != 0) &&
         (local_220.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_220.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_220,0,0,0x10);
        local_220.DelegateSize = 0;
      }
      if (local_210.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_210.Accessor,&local_210);
      }
      if (local_220.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_220.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_228);
      (*pcVar2)(pFVar1,&local_1b8,&local_1d8);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1d8.Delegate);
      local_1d8._padding_ = (longlong)&___7FOneFrameResource__6B_;
      if (local_68 != 0) {
        plVar7 = &local_58;
        if (local_40 != (longlong *)0x0) {
          plVar7 = local_40;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
    }
  }
  if (*(longlong *)param_2 != 0) {
    plVar7 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar7 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  return;
}

