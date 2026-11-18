// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 41

// StaticClass @ 14972cfd0

UClass * __cdecl UPCGProceduralISMComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGProceduralISMComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGProceduralISMComponent",
               &Z_Registration_Info_UClass_UPCGProceduralISMComponent.InnerSingleton,
               StaticRegisterNativesUPCGProceduralISMComponent,0x6e0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGProceduralISMComponent>,
               InternalVTableHelperCtorCaller<UPCGProceduralISMComponent>,local_res8,
               UStaticMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGProceduralISMComponent.InnerSingleton;
}

// UPCGProceduralISMComponent @ 14973c1a0

UPCGProceduralISMComponent * __thiscall
UPCGProceduralISMComponent::UPCGProceduralISMComponent
          (UPCGProceduralISMComponent *this,FVTableHelper *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  UStaticMeshComponent::UStaticMeshComponent((UStaticMeshComponent *)this,param_1);
  dVar4 = __real_407f400000000000;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->NumInstances = 0;
  dVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * dVar4;
  dVar5 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * dVar4;
  dVar4 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z * dVar4;
  dVar3 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * __real_c07f400000000000;
  dVar2 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z * __real_c07f400000000000;
  (this->WorldBounds).Min.field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * __real_c07f400000000000;
  (this->WorldBounds).Min.field0_0x0._s_0.Y = dVar3;
  (this->WorldBounds).Min.field0_0x0._s_0.Z = dVar2;
  (this->WorldBounds).Max.field0_0x0._s_0.X = dVar1;
  (this->WorldBounds).Max.field0_0x0._s_0.Y = dVar5;
  (this->WorldBounds).Max.field0_0x0._s_0.Z = dVar4;
  (this->WorldBounds).IsValid = '\x01';
  (this->StatId).StatIdPtr = &TStatId::TStatId_NAME_None;
  (this->LocalBounds).IsValid = '\0';
  return this;
}

// UPCGProceduralISMComponent @ 14973c2b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UPCGProceduralISMComponent * __thiscall
UPCGProceduralISMComponent::UPCGProceduralISMComponent
          (UPCGProceduralISMComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  TAtomic<FMinimalName> TVar2;
  double dVar3;
  UPCGProceduralISMComponent *pUVar4;
  FUObjectItem *pFVar5;
  FUObjectItem *this_00;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  UStaticMeshComponent::UStaticMeshComponent((UStaticMeshComponent *)this,param_1);
  dVar8 = __real_407f400000000000;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->NumInstances = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  dVar3 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * dVar8;
  dVar9 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * dVar8;
  dVar8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z * dVar8;
  dVar7 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * __real_c07f400000000000;
  dVar6 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z * __real_c07f400000000000;
  (this->WorldBounds).Min.field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * __real_c07f400000000000;
  (this->WorldBounds).Min.field0_0x0._s_0.Y = dVar7;
  (this->WorldBounds).Min.field0_0x0._s_0.Z = dVar6;
  (this->WorldBounds).Max.field0_0x0._s_0.X = dVar3;
  (this->WorldBounds).Max.field0_0x0._s_0.Y = dVar9;
  (this->WorldBounds).Max.field0_0x0._s_0.Z = dVar8;
  (this->WorldBounds).IsValid = '\x01';
  pbVar1 = (byte *)((longlong)&this->_padding_ + 6);
  *pbVar1 = *pbVar1 & 0xeb;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  (this->StatId).StatIdPtr = &TStatId::TStatId_NAME_None;
  (this->LocalBounds).IsValid = '\0';
  UPrimitiveComponent::SetGenerateOverlapEvents((UPrimitiveComponent *)this,false);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 7);
  *pbVar1 = *pbVar1 & 0xfd;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0x3f;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xfe;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 2;
  pUVar4 = (UPCGProceduralISMComponent *)
           UStaticMeshComponent::AdditionalStatObject((UStaticMeshComponent *)this);
  if (pUVar4 == (UPCGProceduralISMComponent *)0x0) {
    pUVar4 = this;
  }
  pFVar5 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&pUVar4->_padding_ + 4));
  TVar2 = ((pFVar5->StatID).StatIdPtr)->Name;
  if ((TVar2._0_4_ == 0) && (TVar2._4_4_ == 0)) {
    this_00 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)((longlong)&pUVar4->_padding_ + 4));
    FUObjectItem::CreateStatID(this_00);
  }
  (this->StatId).StatIdPtr = (pFVar5->StatID).StatIdPtr;
  return this;
}

// ~UPCGProceduralISMComponent @ 14973e610

void __thiscall
UPCGProceduralISMComponent::~UPCGProceduralISMComponent(UPCGProceduralISMComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  UStaticMeshComponent::~UStaticMeshComponent((UStaticMeshComponent *)this);
  return;
}

// BuildTextureStreamingDataImpl @ 149749360

bool __thiscall
UPCGProceduralISMComponent::BuildTextureStreamingDataImpl
          (UPCGProceduralISMComponent *this,ETextureStreamingBuildType param_1,Type param_2,
          Type param_3,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_4,
          bool *param_5)

{
  return true;
}

// CalcBounds @ 149749370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TBoxSphereBounds<double,double> * __thiscall
UPCGProceduralISMComponent::CalcBounds
          (UPCGProceduralISMComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  TBox<double> *pTVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_138 [32];
  TTransform<double> local_118;
  TTransform<double> local_b8;
  TBox<double> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_138;
  auVar7._0_8_ = (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                  *(uint *)((longlong)&this->_padding_ + 4),
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                  (uint)this->_padding_);
  auVar7._8_4_ = _UNK_15061cc88 & (uint)this->_padding_;
  auVar7._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)&this->_padding_ + 4);
  lVar6 = -(ulonglong)
           ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
           (double)CONCAT44(_UNK_15061cc8c & *(uint *)((longlong)&this->_padding_ + 4),
                            _UNK_15061cc88 & (uint)this->_padding_));
  auVar2._8_4_ = (int)lVar6;
  auVar2._0_8_ = -(ulonglong)
                  ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                  (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                   *(uint *)((longlong)&this->_padding_ + 4),
                                   (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                   (uint)this->_padding_));
  auVar2._12_4_ = (int)((ulonglong)lVar6 >> 0x20);
  uVar5 = movmskpd((int)this,auVar2);
  lVar6 = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar7._8_8_);
  auVar1._8_4_ = (int)lVar6;
  auVar1._0_8_ = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar7._0_8_)
  ;
  auVar1._12_4_ = (int)((ulonglong)lVar6 >> 0x20);
  iVar3 = movmskpd((int)local_20,auVar1);
  if ((uVar5 & 0x3fffffff) == 0 && iVar3 == 0) {
    local_118.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_118.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_118.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_118.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_118.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_118.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  else {
    UE::Math::TTransform<double>::InverseFast((TTransform<double> *)&this->_padding_,&local_118);
  }
  local_b8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_b8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_b8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_b8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_b8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_b8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_b8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_b8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_b8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_b8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_b8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_b8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_b8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_b8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_b8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_b8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_b8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_b8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_b8,&local_118,param_1);
  pTVar4 = UE::Math::TBox<double>::InverseTransformBy(&this->WorldBounds,&local_58,&local_b8);
  UE::Math::TBoxSphereBounds<double,double>::TBoxSphereBounds<double,double>
            (__return_storage_ptr__,pTVar4);
  return __return_storage_ptr__;
}

// CreateSceneProxy @ 14974ed30

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
UPCGProceduralISMComponent::CreateSceneProxy(UPCGProceduralISMComponent *this)

{
  FPrimitiveSceneProxy *pFVar1;
  
  if (this->NumInstances < 1) {
    return (FPrimitiveSceneProxy *)0x0;
  }
  (**(code **)(this->_padding_ + 0xbb0))();
  pFVar1 = UStaticMeshComponent::CreateSceneProxy((UStaticMeshComponent *)this);
  return pFVar1;
}

// CreateStaticMeshSceneProxy @ 14974ed70

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
UPCGProceduralISMComponent::CreateStaticMeshSceneProxy
          (UPCGProceduralISMComponent *this,FMaterialAudit *param_1,bool param_2)

{
  FGenericStaticFeatureLevel FVar1;
  code *pcVar2;
  bool bVar3;
  EPSOPrecacheProxyCreationStrategy EVar4;
  FStaticShaderPlatform FVar5;
  UWorld *pUVar6;
  FPrimitiveSceneProxy *pFVar7;
  UWorld *pUVar8;
  FSceneProxy *this_00;
  FInstancedStaticMeshSceneProxy *pFVar9;
  FInstancedStaticMeshSceneProxy *this_01;
  FLLMScope local_res8 [2];
  FMemScope local_res20;
  FString local_1e8;
  FInstancedStaticMeshSceneProxyDesc local_1d8;
  
  FLLMScope::FLLMScope(local_res8,InstancedMesh,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,InstancedMesh,true);
  if ((this->_padding_ == 0) &&
     (pUVar6 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar6 == (UWorld *)0x0)
     ) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6044557769174941475>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Components\\PCGProceduralISMComponent.cpp"
                       ,0xdd,"GetWorld()");
    if (!bVar3) {
      pFVar9 = (FInstancedStaticMeshSceneProxy *)0x0;
      goto LAB_14974f007;
    }
code_r0x00014974ee51:
    pcVar2 = (code *)swi(3);
    pFVar7 = (FPrimitiveSceneProxy *)(*pcVar2)();
    return pFVar7;
  }
  pUVar6 = (UWorld *)this->_padding_;
  if (pUVar6 == (UWorld *)0x0) {
    pUVar6 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  if (pUVar6->Scene == (FSceneInterface *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6044557769174941475>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Components\\PCGProceduralISMComponent.cpp"
                       ,0xdd,"GetWorld()->Scene");
    if (bVar3) goto code_r0x00014974ee51;
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
      if ((!bVar3) ||
         (EVar4 = GetPSOPrecacheProxyCreationStrategy(), EVar4 != DelayUntilPSOPrecached)) {
        FStaticMeshSceneProxyDesc::FStaticMeshSceneProxyDesc
                  ((FStaticMeshSceneProxyDesc *)&local_1d8);
        pFVar9 = (FInstancedStaticMeshSceneProxy *)0x0;
        local_1d8.InstanceLODDistanceScale = 1.0;
        local_1d8.InstanceMinDrawDistance = 0;
        local_1d8.InstanceStartCullDistance = 0;
        local_1d8._padding_ = (longlong)&___7FInstancedStaticMeshSceneProxyDesc__6B_;
        local_1d8.InstanceDataSceneProxy.Object = (FInstanceDataSceneProxy *)0x0;
        local_1d8.InstanceDataSceneProxy.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_1d8.InstanceEndCullDistance = 0;
        local_1d8.bUseGpuLodSelection = false;
        GetSceneProxyDesc(this,&local_1d8);
        if (param_2) {
          this_00 = ::operator_new(0xc20);
          if (this_00 != (FSceneProxy *)0x0) {
            pFVar9 = (FInstancedStaticMeshSceneProxy *)
                     Nanite::FSceneProxy::FSceneProxy(this_00,param_1,&local_1d8);
          }
        }
        else {
          this_01 = ::operator_new(0xdb0);
          if (this_01 != (FInstancedStaticMeshSceneProxy *)0x0) {
            pUVar6 = (UWorld *)this->_padding_;
            if (pUVar6 == (UWorld *)0x0) {
              pUVar6 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
            }
            pFVar9 = FInstancedStaticMeshSceneProxy::FInstancedStaticMeshSceneProxy
                               (this_01,&local_1d8,(uint)(pUVar6->FeatureLevel).Value);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1d8.InstanceDataSceneProxy.SharedReferenceCount.ReferenceController);
        FStaticMeshSceneProxyDesc::~FStaticMeshSceneProxyDesc
                  ((FStaticMeshSceneProxyDesc *)&local_1d8);
        goto LAB_14974f007;
      }
      if (5 < (byte)LogPCG._0_1_) {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_1e8,(UObject *)0x0,None);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
        }
      }
    }
    else if (2 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      pFVar9 = (FInstancedStaticMeshSceneProxy *)0x0;
      goto LAB_14974f007;
    }
  }
  pFVar9 = (FInstancedStaticMeshSceneProxy *)0x0;
LAB_14974f007:
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return (FPrimitiveSceneProxy *)pFVar9;
}

// GetBounds @ 149754700

void __thiscall
UPCGProceduralISMComponent::GetBounds(UPCGProceduralISMComponent *this,TBox<double> *param_1)

{
  double dVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  
  dVar1 = (this->WorldBounds).Min.field0_0x0._s_0.Y;
  (param_1->Min).field0_0x0._s_0.X = (this->WorldBounds).Min.field0_0x0._s_0.X;
  (param_1->Min).field0_0x0._s_0.Y = dVar1;
  dVar1 = (this->WorldBounds).Max.field0_0x0._s_0.X;
  (param_1->Min).field0_0x0._s_0.Z = (this->WorldBounds).Min.field0_0x0._s_0.Z;
  (param_1->Max).field0_0x0._s_0.X = dVar1;
  dVar1 = (this->WorldBounds).Max.field0_0x0._s_0.Z;
  (param_1->Max).field0_0x0._s_0.Y = (this->WorldBounds).Max.field0_0x0._s_0.Y;
  (param_1->Max).field0_0x0._s_0.Z = dVar1;
  uVar2 = (this->WorldBounds).Pad[0];
  uVar3 = (this->WorldBounds).Pad[1];
  uVar4 = (this->WorldBounds).Pad[2];
  uVar5 = (this->WorldBounds).Pad[3];
  uVar6 = (this->WorldBounds).Pad[4];
  uVar7 = (this->WorldBounds).Pad[5];
  uVar8 = (this->WorldBounds).Pad[6];
  param_1->IsValid = (this->WorldBounds).IsValid;
  param_1->Pad[0] = uVar2;
  param_1->Pad[1] = uVar3;
  param_1->Pad[2] = uVar4;
  param_1->Pad[3] = uVar5;
  param_1->Pad[4] = uVar6;
  param_1->Pad[5] = uVar7;
  param_1->Pad[6] = uVar8;
  return;
}

// GetLocalBounds @ 149759e70

TBox<double> * __thiscall
UPCGProceduralISMComponent::GetLocalBounds
          (UPCGProceduralISMComponent *this,TBox<double> *__return_storage_ptr__)

{
  UE::Math::TBox<double>::InverseTransformBy
            (&this->WorldBounds,__return_storage_ptr__,(TTransform<double> *)&this->_padding_);
  return __return_storage_ptr__;
}

// GetMaterialStreamingData @ 149759ea0

bool __thiscall
UPCGProceduralISMComponent::GetMaterialStreamingData
          (UPCGProceduralISMComponent *this,int param_1,FPrimitiveMaterialInfo *param_2)

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

// GetPrivateStaticClass @ 14975c640

UClass * __cdecl UPCGProceduralISMComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGProceduralISMComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGProceduralISMComponent",
               &Z_Registration_Info_UClass_UPCGProceduralISMComponent.InnerSingleton,
               StaticRegisterNativesUPCGProceduralISMComponent,0x6e0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGProceduralISMComponent>,
               InternalVTableHelperCtorCaller<UPCGProceduralISMComponent>,local_res8,
               UStaticMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGProceduralISMComponent.InnerSingleton;
}

// GetRenderMatrix @ 14975d720

TMatrix<double> * __thiscall
UPCGProceduralISMComponent::GetRenderMatrix
          (UPCGProceduralISMComponent *this,TMatrix<double> *__return_storage_ptr__)

{
  UE::Math::TTransform<double>::ToMatrixWithScale
            ((TTransform<double> *)&this->_padding_,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetSceneProxyDesc @ 14975f610

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

void __thiscall
UPCGProceduralISMComponent::GetSceneProxyDesc
          (UPCGProceduralISMComponent *this,FInstancedStaticMeshSceneProxyDesc *param_1)

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
  undefined1 uVar10;
  UStaticMesh *this_00;
  code *pcVar11;
  FAccessTag FVar12;
  FCurrentWriterTag FVar13;
  bool bVar14;
  EShaderPlatform EVar15;
  int iVar16;
  UWorld *pUVar17;
  FPrimitiveMaterialPropertyDescriptor *pFVar18;
  TMatrix<double> *pTVar19;
  TBoxSphereBounds<double,double> *pTVar20;
  TReferenceControllerBase<1> *pTVar21;
  uint uVar22;
  int iVar23;
  TReferenceControllerBase<1> *pTVar24;
  ushort uVar25;
  atomic<unsigned_int> aVar26;
  FInstanceDataSceneProxy *pFVar27;
  undefined1 auStackY_2e8 [32];
  FInstanceDataSceneProxy *local_2a0;
  FSharedReferencer<1> FStack_298;
  FPrimitiveMaterialPropertyDescriptor local_290;
  TBoxSphereBounds<double,double> local_280;
  FInstanceSceneDataBuffers local_248;
  undefined1 local_128 [128];
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  pUVar17 = (UWorld *)this->_padding_;
  pTVar24 = (TReferenceControllerBase<1> *)0x0;
  if (((pUVar17 == (UWorld *)0x0) &&
      (pUVar17 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
      pUVar17 == (UWorld *)0x0)) || (pUVar17->Scene == (FSceneInterface *)0x0)) {
    bVar14 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_6044557769174941353>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Components\\PCGProceduralISMComponent.cpp"
                        ,0x157,"World && World->Scene");
    if (bVar14) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
LAB_14975f6e8:
    uVar25 = 0;
  }
  else {
    EVar15 = FSceneInterface::GetShaderPlatform(pUVar17->Scene);
    pFVar18 = FPrimitiveComponentHelper::GetUsedMaterialPropertyDesc<UPCGProceduralISMComponent>
                        (&local_290,this,EVar15);
    uVar10 = pFVar18->bAnyMaterialHasPerInstanceRandom;
    if (uVar10 == '\0') goto LAB_14975f6e8;
    uVar25 = 1;
  }
  FInstanceSceneDataBuffers::FInstanceSceneDataBuffers(&local_248,true);
  uVar22 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) * -0x7a143595;
  uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
  aVar26 = (atomic<unsigned_int>)(uVar22 >> 0x10 ^ uVar22);
  FVar12.Kind = Writer;
  FVar12.WriterTag = (uint)aVar26;
  if ((aVar26 == (atomic<unsigned_int>)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("AccessTag.Kind == FAccessTag::EKind::Writer && AccessTag.WriterTag != 0u"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                          ,0xf8,L""), bVar14)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  LOCK();
  bVar14 = local_248.CurrentWriterTag.Value != (atomic<unsigned_int>)0x0;
  FVar13.Value = aVar26;
  if (bVar14) {
    FVar13.Value = local_248.CurrentWriterTag.Value;
  }
  local_248.CurrentWriterTag.Value = FVar13.Value;
  UNLOCK();
  if ((bVar14) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("CurrentWriterTag.Value.compare_exchange_strong(PrevTagValue, AccessTag.WriterTag)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                          ,0xfb,L""), bVar14)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pTVar19 = (TMatrix<double> *)(**(code **)(this->_padding_ + 0x808))(this,local_128);
  FInstanceSceneDataBuffers::SetPrimitiveLocalToWorld(&local_248,pTVar19,FVar12);
  local_248.NumInstancesGPUOnly = this->NumInstances;
  local_248.NumCustomDataFloats = this->NumCustomDataFloats;
  if (local_248.InstanceLocalBounds.ArrayNum < 1) {
    iVar23 = 1 - local_248.InstanceLocalBounds.ArrayNum;
    iVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x18,4,iVar23,&local_248.InstanceLocalBounds.AllocatorInstance,
                        &local_248.InstanceLocalBounds.ArrayNum,
                        &local_248.InstanceLocalBounds.ArrayMax);
    DefaultConstructItems<FRenderBounds,int>
              (local_248.InstanceLocalBounds.AllocatorInstance.Data + (longlong)iVar16 * 0x18,iVar23
              );
  }
  else if (1 < local_248.InstanceLocalBounds.ArrayNum) {
    uVar22 = local_248.InstanceLocalBounds.ArrayNum - 1;
    if ((int)uVar22 < 0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x458,
                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                         );
      if (bVar14) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    else if (uVar22 == 0) goto LAB_14975f8c7;
    if (~uVar22 + local_248.InstanceLocalBounds.ArrayNum != 0) {
      memmove(local_248.InstanceLocalBounds.AllocatorInstance.Data + 0x18,
              local_248.InstanceLocalBounds.AllocatorInstance.Data + 0x18 +
              (longlong)(int)uVar22 * 0x18,
              (longlong)(int)(~uVar22 + local_248.InstanceLocalBounds.ArrayNum) * 0x18);
    }
    local_248.InstanceLocalBounds.ArrayNum = local_248.InstanceLocalBounds.ArrayNum - uVar22;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,&local_248.InstanceLocalBounds.AllocatorInstance,
               local_248.InstanceLocalBounds.ArrayNum,&local_248.InstanceLocalBounds.ArrayMax);
  }
LAB_14975f8c7:
  this_00 = (UStaticMesh *)this->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  pTVar20 = UStaticMesh::GetBounds(this_00,&local_280);
  dVar1 = (pTVar20->BoxExtent).field0_0x0._s_0.X;
  dVar2 = (pTVar20->Origin).field0_0x0._s_0.X;
  dVar3 = (pTVar20->BoxExtent).field0_0x0._s_0.Y;
  dVar4 = (pTVar20->BoxExtent).field0_0x0._s_0.Z;
  dVar5 = (pTVar20->Origin).field0_0x0._s_0.Y;
  dVar6 = (pTVar20->Origin).field0_0x0._s_0.X;
  dVar7 = (pTVar20->Origin).field0_0x0._s_0.Y;
  dVar8 = (pTVar20->Origin).field0_0x0._s_0.Z;
  dVar9 = (pTVar20->Origin).field0_0x0._s_0.Z;
  if ((local_248.InstanceLocalBounds.ArrayNum < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  *(float *)local_248.InstanceLocalBounds.AllocatorInstance.Data = (float)(dVar2 - dVar1);
  *(float *)(local_248.InstanceLocalBounds.AllocatorInstance.Data + 4) = (float)(dVar5 - dVar3);
  *(float *)(local_248.InstanceLocalBounds.AllocatorInstance.Data + 8) = (float)(dVar8 - dVar4);
  *(float *)(local_248.InstanceLocalBounds.AllocatorInstance.Data + 0xc) = (float)(dVar1 + dVar6);
  *(float *)(local_248.InstanceLocalBounds.AllocatorInstance.Data + 0x10) = (float)(dVar3 + dVar7);
  *(float *)(local_248.InstanceLocalBounds.AllocatorInstance.Data + 0x14) = (float)(dVar4 + dVar9);
  pTVar21 = pTVar24;
  if (0 < local_248.NumCustomDataFloats) {
    pTVar21 = (TReferenceControllerBase<1> *)&DAT_00000002;
  }
  local_248.Flags.Packed = (ushort)pTVar21 | local_248.Flags.Packed & 0xfffc | uVar25;
  iVar16 = local_248.NumInstancesGPUOnly;
  if (local_248.bInstanceDataIsGPUOnly) {
    iVar16 = local_248.InstanceToPrimitiveRelative.ArrayNum;
  }
  if ((iVar16 != 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("bInstanceDataIsGPUOnly ? InstanceToPrimitiveRelative.IsEmpty() : (NumInstancesGPUOnly == 0)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                          ,0x117,L""), bVar14)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if ((aVar26 == (atomic<unsigned_int>)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("AccessTag.Kind == FAccessTag::EKind::Writer && AccessTag.WriterTag != 0u"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                          ,0x118,L""), bVar14)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  LOCK();
  bVar14 = aVar26 == local_248.CurrentWriterTag.Value;
  if (bVar14) {
    local_248.CurrentWriterTag.Value = (atomic<unsigned_int>)0x0;
  }
  UNLOCK();
  if ((!bVar14) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("CurrentWriterTag.Value.compare_exchange_strong(PrevTagValue, 0U)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                          ,0x11b,L""), bVar14)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  FInstanceSceneDataBuffers::ValidateData(&local_248);
  FStaticMeshSceneProxyDesc::InitializeFromStaticMeshComponent
            ((FStaticMeshSceneProxyDesc *)param_1,(UStaticMeshComponent *)this);
  pTVar21 = ::operator_new(0x130);
  if (pTVar21 == (TReferenceControllerBase<1> *)0x0) {
    local_2a0 = ___xmm_00000000000000000000000000000010;
    pFVar27 = (FInstanceDataSceneProxy *)&DAT_00000010;
    FStack_298.ReferenceController = _UNK_150651568;
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
    pFVar27 = (FInstanceDataSceneProxy *)(pTVar21 + 1);
    if ((pFVar27 == (FInstanceDataSceneProxy *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar14)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    LOCK();
    pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
    UNLOCK();
    FStack_298.ReferenceController = pTVar21;
    pTVar24 = pTVar21;
    local_2a0 = pFVar27;
  }
  if (&param_1->InstanceDataSceneProxy != (TSharedPtr<FInstanceDataSceneProxy,1> *)&local_2a0) {
    (param_1->InstanceDataSceneProxy).Object = pFVar27;
    local_2a0 = (FInstanceDataSceneProxy *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(param_1->InstanceDataSceneProxy).SharedReferenceCount,&FStack_298);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_298.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
  param_1->InstanceMinDrawDistance = this->InstanceMinDrawDistance;
  param_1->InstanceStartCullDistance = this->InstanceStartCullDistance;
  param_1->InstanceEndCullDistance = this->InstanceEndCullDistance;
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

// GetStreamingRenderAssetInfo @ 149762860

void __thiscall
UPCGProceduralISMComponent::GetStreamingRenderAssetInfo
          (UPCGProceduralISMComponent *this,FStreamingTextureLevelContext *param_1,
          TArray<FStreamingRenderAssetPrimitiveInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  if ((this->NumInstances < 1) && ((double)this->_padding_ <= 0.0)) {
    return;
  }
  UStaticMeshComponent::GetStreamingRenderAssetInfo((UStaticMeshComponent *)this,param_1,param_2);
  return;
}

// InitFromDescriptor @ 149768620

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
UPCGProceduralISMComponent::InitFromDescriptor
          (UPCGProceduralISMComponent *this,FPCGProceduralISMComponentDescriptor *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  code *pcVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  FSceneInterface *pFVar7;
  byte bVar8;
  int iVar9;
  
  pcVar4 = *(code **)(this->_padding_ + 0xb28);
  pUVar5 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&param_1->_padding_);
  if (pUVar5 != (UObject *)0x0) {
    pUVar6 = Z_Construct_UClass_UStaticMesh_NoRegister();
    iVar3 = (int)pUVar6->_padding_;
    if ((iVar3 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar3 * 8) ==
        &pUVar6->_padding_)) goto LAB_149768683;
  }
  pUVar5 = (UObject *)0x0;
LAB_149768683:
  (*pcVar4)(this,pUVar5);
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)
             &param_1->_padding_);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UObject *)param_1->_padding_ != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1->_padding_);
  }
  this->_padding_ = param_1->_padding_;
  TArray<TObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<TObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_> *)
             &this->_padding_,
             (TArray<TObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_> *)
             &param_1->_padding_);
  iVar3 = (int)param_1->_padding_;
  if (this->NumInstances != iVar3) {
    this->NumInstances = iVar3;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  iVar3 = *(int *)((longlong)&param_1->_padding_ + 4);
  iVar9 = 0;
  if (0 < iVar3) {
    iVar9 = iVar3;
  }
  if (iVar9 != this->NumCustomDataFloats) {
    this->NumCustomDataFloats = iVar9;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  SetBounds(this,(TBox<double> *)&param_1->_padding_);
  iVar3 = (int)param_1->_padding_;
  if (this->InstanceMinDrawDistance != iVar3) {
    this->InstanceMinDrawDistance = iVar3;
    pFVar7 = UActorComponent::GetScene((UActorComponent *)this);
    if ((pFVar7 != (FSceneInterface *)0x0) && (this->_padding_ != 0)) {
      pFVar7 = UActorComponent::GetScene((UActorComponent *)this);
      pcVar4 = *(code **)(pFVar7->_padding_ + 0x88);
      (*pcVar4)(pFVar7,this,pcVar4,0,0);
    }
  }
  SetCullDistances(this,*(int *)((longlong)&param_1->_padding_ + 4),(int)param_1->_padding_);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FName,TSizedDefaultAllocator<32>_> *)&this->_padding_,&param_1->ComponentTags);
  *(undefined1 *)((longlong)&this->_padding_ + 3) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 4);
  *(undefined1 *)((longlong)&this->_padding_ + 3) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 5);
  *(undefined1 *)&this->_padding_ = *(undefined1 *)((longlong)&param_1->_padding_ + 6);
  *(undefined1 *)((longlong)&this->_padding_ + 2) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 7);
  *(char *)((longlong)&this->_padding_ + 1) = (char)param_1->_padding_;
  *(undefined4 *)&this->_padding_ = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)((longlong)&this->_padding_ + 4) = (int)param_1->_padding_;
  bVar8 = *(byte *)((longlong)&this->_padding_ + 6);
  bVar8 = (*(byte *)((longlong)&param_1->_padding_ + 1) >> 1 ^ bVar8) & 1 ^ bVar8;
  *(byte *)((longlong)&this->_padding_ + 6) = bVar8;
  bVar8 = (*(byte *)((longlong)&param_1->_padding_ + 1) >> 1 ^ bVar8) & 2 ^ bVar8;
  *(byte *)((longlong)&this->_padding_ + 6) = bVar8;
  bVar8 = (*(char *)((longlong)&param_1->_padding_ + 1) << 2 ^ bVar8) & 0x20 ^ bVar8;
  *(byte *)((longlong)&this->_padding_ + 6) = bVar8;
  *(byte *)((longlong)&this->_padding_ + 6) =
       (*(char *)((longlong)&param_1->_padding_ + 1) << 2 ^ bVar8) & 0x40 ^ bVar8;
  bVar8 = *(byte *)((longlong)&this->_padding_ + 7);
  bVar8 = (*(byte *)((longlong)&param_1->_padding_ + 1) >> 5 ^ bVar8) & 1 ^ bVar8;
  *(byte *)((longlong)&this->_padding_ + 7) = bVar8;
  bVar8 = (bVar8 ^ *(byte *)((longlong)&param_1->_padding_ + 1)) & 0x40 ^ bVar8;
  *(byte *)((longlong)&this->_padding_ + 7) = bVar8;
  *(byte *)((longlong)&this->_padding_ + 7) =
       (*(byte *)((longlong)&param_1->_padding_ + 1) >> 2 ^ bVar8) & 0x20 ^ bVar8;
  bVar8 = *(byte *)((longlong)&this->_padding_ + 4);
  bVar8 = (*(char *)((longlong)&param_1->_padding_ + 2) << 6 ^ bVar8) & 0x40 ^ bVar8;
  bVar1 = *(byte *)((longlong)&this->_padding_ + 5);
  *(byte *)((longlong)&this->_padding_ + 4) = bVar8;
  bVar2 = *(byte *)((longlong)&this->_padding_ + 1);
  *(byte *)((longlong)&this->_padding_ + 5) =
       (*(char *)((longlong)&param_1->_padding_ + 2) << 2 ^ bVar1) & 8 ^ bVar1;
  bVar1 = *(byte *)((longlong)&this->_padding_ + 4);
  *(byte *)((longlong)&this->_padding_ + 1) =
       (*(char *)((longlong)&param_1->_padding_ + 2) << 4 ^ bVar2) & 0x40 ^ bVar2;
  bVar2 = *(byte *)((longlong)&this->_padding_ + 7);
  *(byte *)((longlong)&this->_padding_ + 4) =
       (bVar1 ^ *(byte *)((longlong)&param_1->_padding_ + 2)) & 8 ^ bVar1;
  *(byte *)((longlong)&this->_padding_ + 7) =
       (*(byte *)((longlong)&param_1->_padding_ + 2) >> 4 ^ bVar2) & 1 ^ bVar2;
  *(undefined4 *)&this->_padding_ = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(char *)((longlong)&this->_padding_ + 1) = (char)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 1);
  *(byte *)((longlong)&this->_padding_ + 4) =
       (*(char *)((longlong)&param_1->_padding_ + 1) << 3 ^ bVar8) & 8 ^ bVar8;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(char *)((longlong)&this->_padding_ + 1) = (char)param_1->_padding_;
  return;
}

// IsHLODRelevant @ 14976b8c0

bool __thiscall UPCGProceduralISMComponent::IsHLODRelevant(UPCGProceduralISMComponent *this)

{
  return false;
}

// IsNavigationRelevant @ 14976be30

bool __thiscall UPCGProceduralISMComponent::IsNavigationRelevant(UPCGProceduralISMComponent *this)

{
  return false;
}

// IsNavigationRelevant`adjustor{592}' @ 14976be3c

/* [thunk]:public: virtual bool __cdecl
   UPCGProceduralISMComponent::IsNavigationRelevant`adjustor{592}' (void)const __ptr64 */

bool __thiscall
UPCGProceduralISMComponent::IsNavigationRelevant_adjustor_592__(UPCGProceduralISMComponent *this)

{
  bool bVar1;
  
  bVar1 = IsNavigationRelevant((UPCGProceduralISMComponent *)&this[-1]._padding_);
  return bVar1;
}

// PostLoad @ 14976e890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UPCGProceduralISMComponent::PostLoad(UPCGProceduralISMComponent *this)

{
  TMatrix<double> *pTVar1;
  undefined1 auStack_f8 [32];
  TVector<double>_u_0 local_d8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  undefined8 local_a8;
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  UStaticMeshComponent::PostLoad((UStaticMeshComponent *)this);
  if ((this->LocalBounds).IsValid != '\0') {
    pTVar1 = UE::Math::TTransform<double>::ToMatrixWithScale
                       ((TTransform<double> *)&this->_padding_,&local_98);
    UE::Math::TBox<double>::TransformBy(&this->LocalBounds,(TBox<double> *)&local_d8._s_0,pTVar1);
    (this->WorldBounds).Min.field0_0x0._s_0.X = local_d8._s_0.X;
    (this->WorldBounds).Min.field0_0x0._s_0.Y = local_d8._s_0.Y;
    (this->WorldBounds).Min.field0_0x0._s_0.Z = local_d8._s_0.Z;
    (this->WorldBounds).Max.field0_0x0._s_0.X = dStack_c0;
    (this->WorldBounds).Max.field0_0x0._s_0.Y = local_b8;
    (this->WorldBounds).Max.field0_0x0._s_0.Z = dStack_b0;
    (this->WorldBounds).IsValid = (undefined1)local_a8;
    (this->WorldBounds).Pad[0] = local_a8._1_1_;
    (this->WorldBounds).Pad[1] = local_a8._2_1_;
    (this->WorldBounds).Pad[2] = local_a8._3_1_;
    (this->WorldBounds).Pad[3] = local_a8._4_1_;
    (this->WorldBounds).Pad[4] = local_a8._5_1_;
    (this->WorldBounds).Pad[5] = local_a8._6_1_;
    (this->WorldBounds).Pad[6] = local_a8._7_1_;
  }
  return;
}

// SetBounds @ 149775b50

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
UPCGProceduralISMComponent::SetBounds(UPCGProceduralISMComponent *this,TBox<double> *param_1)

{
  uchar uVar1;
  double dVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  bool bVar9;
  
  uVar1 = (this->WorldBounds).IsValid;
  if (param_1->IsValid == '\0') {
    bVar9 = uVar1 == '\0';
  }
  else {
    if ((((uVar1 == '\0') ||
         ((this->WorldBounds).Min.field0_0x0._s_0.X != (param_1->Min).field0_0x0._s_0.X)) ||
        ((this->WorldBounds).Min.field0_0x0._s_0.Y != (param_1->Min).field0_0x0._s_0.Y)) ||
       ((((this->WorldBounds).Min.field0_0x0._s_0.Z != (param_1->Min).field0_0x0._s_0.Z ||
         ((this->WorldBounds).Max.field0_0x0._s_0.X != (param_1->Max).field0_0x0._s_0.X)) ||
        ((this->WorldBounds).Max.field0_0x0._s_0.Y != (param_1->Max).field0_0x0._s_0.Y))))
    goto LAB_149775bbe;
    bVar9 = (this->WorldBounds).Max.field0_0x0._s_0.Z == (param_1->Max).field0_0x0._s_0.Z;
  }
  if (bVar9) {
    return;
  }
LAB_149775bbe:
  dVar2 = (param_1->Min).field0_0x0._s_0.Y;
  (this->WorldBounds).Min.field0_0x0._s_0.X = (param_1->Min).field0_0x0._s_0.X;
  (this->WorldBounds).Min.field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->Max).field0_0x0._s_0.X;
  (this->WorldBounds).Min.field0_0x0._s_0.Z = (param_1->Min).field0_0x0._s_0.Z;
  (this->WorldBounds).Max.field0_0x0._s_0.X = dVar2;
  dVar2 = (param_1->Max).field0_0x0._s_0.Z;
  (this->WorldBounds).Max.field0_0x0._s_0.Y = (param_1->Max).field0_0x0._s_0.Y;
  (this->WorldBounds).Max.field0_0x0._s_0.Z = dVar2;
  uVar1 = param_1->Pad[0];
  uVar3 = param_1->Pad[1];
  uVar4 = param_1->Pad[2];
  uVar5 = param_1->Pad[3];
  uVar6 = param_1->Pad[4];
  uVar7 = param_1->Pad[5];
  uVar8 = param_1->Pad[6];
  (this->WorldBounds).IsValid = param_1->IsValid;
  (this->WorldBounds).Pad[0] = uVar1;
  (this->WorldBounds).Pad[1] = uVar3;
  (this->WorldBounds).Pad[2] = uVar4;
  (this->WorldBounds).Pad[3] = uVar5;
  (this->WorldBounds).Pad[4] = uVar6;
  (this->WorldBounds).Pad[5] = uVar7;
  (this->WorldBounds).Pad[6] = uVar8;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// SetCullDistances @ 149775fb0

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
UPCGProceduralISMComponent::SetCullDistances
          (UPCGProceduralISMComponent *this,int param_1,int param_2)

{
  FSceneInterface *pFVar1;
  
  if ((this->InstanceStartCullDistance != param_1) || (this->InstanceEndCullDistance != param_2)) {
    this->InstanceStartCullDistance = param_1;
    this->InstanceEndCullDistance = param_2;
    pFVar1 = UActorComponent::GetScene((UActorComponent *)this);
    if ((pFVar1 != (FSceneInterface *)0x0) && (this->_padding_ != 0)) {
      pFVar1 = UActorComponent::GetScene((UActorComponent *)this);
      (**(code **)(pFVar1->_padding_ + 0x90))(pFVar1,this);
    }
  }
  return;
}

// SetMinDrawDistance @ 149776420

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
UPCGProceduralISMComponent::SetMinDrawDistance(UPCGProceduralISMComponent *this,int param_1)

{
  code *pcVar1;
  FSceneInterface *pFVar2;
  
  if (this->InstanceMinDrawDistance != param_1) {
    this->InstanceMinDrawDistance = param_1;
    pFVar2 = UActorComponent::GetScene((UActorComponent *)this);
    if ((pFVar2 != (FSceneInterface *)0x0) && (this->_padding_ != 0)) {
      pFVar2 = UActorComponent::GetScene((UActorComponent *)this);
      pcVar1 = *(code **)(pFVar2->_padding_ + 0x88);
      (*pcVar1)(pFVar2,this,pcVar1,0,0);
    }
  }
  return;
}

// SetNumCustomDataFloats @ 149776890

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
UPCGProceduralISMComponent::SetNumCustomDataFloats(UPCGProceduralISMComponent *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_1) {
    iVar1 = param_1;
  }
  if (iVar1 != this->NumCustomDataFloats) {
    this->NumCustomDataFloats = iVar1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    return;
  }
  return;
}

// SetNumInstances @ 1497768c0

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
UPCGProceduralISMComponent::SetNumInstances(UPCGProceduralISMComponent *this,int param_1)

{
  if (this->NumInstances != param_1) {
    this->NumInstances = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    return;
  }
  return;
}

// ShouldCreatePhysicsState @ 149778540

bool __thiscall
UPCGProceduralISMComponent::ShouldCreatePhysicsState(UPCGProceduralISMComponent *this)

{
  return false;
}

// StaticRegisterNativesUPCGProceduralISMComponent @ 149778810

void __cdecl UPCGProceduralISMComponent::StaticRegisterNativesUPCGProceduralISMComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xc;
  local_18.DataPtr = Z_Construct_UClass_UPCGProceduralISMComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SupportsStaticLighting @ 149778950

bool __thiscall UPCGProceduralISMComponent::SupportsStaticLighting(UPCGProceduralISMComponent *this)

{
  return false;
}

// ValidateComponentSetup @ 149778e20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UPCGProceduralISMComponent::ValidateComponentSetup(UPCGProceduralISMComponent *this)

{
  byte *pbVar1;
  byte bVar2;
  
  bVar2 = *(byte *)((longlong)&this->_padding_ + 6);
  if ((bVar2 & 4) != 0) {
    if (2 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
    pbVar1 = (byte *)((longlong)&this->_padding_ + 6);
    *pbVar1 = *pbVar1 & 0xfb;
    bVar2 = *(byte *)((longlong)&this->_padding_ + 6);
  }
  if ((bVar2 & 0x10) != 0) {
    if (2 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
    pbVar1 = (byte *)((longlong)&this->_padding_ + 6);
    *pbVar1 = *pbVar1 & 0xef;
  }
  return;
}

// execClearInstances @ 14977bba0

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
UPCGProceduralISMComponent::execClearInstances(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(int *)&param_1[0x28].field_0x10 != 0) {
    *(undefined4 *)&param_1[0x28].field_0x10 = 0;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
    return;
  }
  return;
}

// execGetBounds @ 14977bdf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UPCGProceduralISMComponent::execGetBounds(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  uchar *puVar17;
  undefined1 auStack_68 [32];
  uchar local_48 [48];
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  puVar17 = local_48;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar17 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = param_1[0x28].field_0x19;
  uVar3 = param_1[0x28].field_0x1a;
  uVar4 = param_1[0x28].field_0x1b;
  uVar5 = param_1[0x28].field_0x1c;
  uVar6 = param_1[0x28].field_0x1d;
  uVar7 = param_1[0x28].field_0x1e;
  uVar8 = param_1[0x28].field_0x1f;
  uVar9 = param_1[0x28].field_0x20;
  uVar10 = param_1[0x28].field_0x21;
  uVar11 = param_1[0x28].field_0x22;
  uVar12 = param_1[0x28].field_0x23;
  uVar13 = param_1[0x28].field_0x24;
  uVar14 = param_1[0x28].field_0x25;
  uVar15 = param_1[0x28].field_0x26;
  uVar16 = param_1[0x28].field_0x27;
  puVar17[0] = param_1[0x28].field_0x18;
  puVar17[1] = uVar2;
  puVar17[2] = uVar3;
  puVar17[3] = uVar4;
  puVar17[4] = uVar5;
  puVar17[5] = uVar6;
  puVar17[6] = uVar7;
  puVar17[7] = uVar8;
  puVar17[8] = uVar9;
  puVar17[9] = uVar10;
  puVar17[10] = uVar11;
  puVar17[0xb] = uVar12;
  puVar17[0xc] = uVar13;
  puVar17[0xd] = uVar14;
  puVar17[0xe] = uVar15;
  puVar17[0xf] = uVar16;
  uVar2 = param_1[0x29].field_0x1;
  uVar3 = param_1[0x29].field_0x2;
  uVar4 = param_1[0x29].field_0x3;
  uVar5 = param_1[0x29].field_0x4;
  uVar6 = param_1[0x29].field_0x5;
  uVar7 = param_1[0x29].field_0x6;
  uVar8 = param_1[0x29].field_0x7;
  uVar9 = param_1[0x29].field_0x8;
  uVar10 = param_1[0x29].field_0x9;
  uVar11 = param_1[0x29].field_0xa;
  uVar12 = param_1[0x29].field_0xb;
  uVar13 = param_1[0x29].field_0xc;
  uVar14 = param_1[0x29].field_0xd;
  uVar15 = param_1[0x29].field_0xe;
  uVar16 = param_1[0x29].field_0xf;
  puVar17[0x10] = param_1[0x29].field_0x0;
  puVar17[0x11] = uVar2;
  puVar17[0x12] = uVar3;
  puVar17[0x13] = uVar4;
  puVar17[0x14] = uVar5;
  puVar17[0x15] = uVar6;
  puVar17[0x16] = uVar7;
  puVar17[0x17] = uVar8;
  puVar17[0x18] = uVar9;
  puVar17[0x19] = uVar10;
  puVar17[0x1a] = uVar11;
  puVar17[0x1b] = uVar12;
  puVar17[0x1c] = uVar13;
  puVar17[0x1d] = uVar14;
  puVar17[0x1e] = uVar15;
  puVar17[0x1f] = uVar16;
  uVar2 = param_1[0x29].field_0x11;
  uVar3 = param_1[0x29].field_0x12;
  uVar4 = param_1[0x29].field_0x13;
  uVar5 = param_1[0x29].field_0x14;
  uVar6 = param_1[0x29].field_0x15;
  uVar7 = param_1[0x29].field_0x16;
  uVar8 = param_1[0x29].field_0x17;
  uVar9 = param_1[0x29].field_0x18;
  uVar10 = param_1[0x29].field_0x19;
  uVar11 = param_1[0x29].field_0x1a;
  uVar12 = param_1[0x29].field_0x1b;
  uVar13 = param_1[0x29].field_0x1c;
  uVar14 = param_1[0x29].field_0x1d;
  uVar15 = param_1[0x29].field_0x1e;
  uVar16 = param_1[0x29].field_0x1f;
  puVar17[0x20] = param_1[0x29].field_0x10;
  puVar17[0x21] = uVar2;
  puVar17[0x22] = uVar3;
  puVar17[0x23] = uVar4;
  puVar17[0x24] = uVar5;
  puVar17[0x25] = uVar6;
  puVar17[0x26] = uVar7;
  puVar17[0x27] = uVar8;
  puVar17[0x28] = uVar9;
  puVar17[0x29] = uVar10;
  puVar17[0x2a] = uVar11;
  puVar17[0x2b] = uVar12;
  puVar17[0x2c] = uVar13;
  puVar17[0x2d] = uVar14;
  puVar17[0x2e] = uVar15;
  puVar17[0x2f] = uVar16;
  uVar2 = param_1[0x29].field_0x21;
  uVar3 = param_1[0x29].field_0x22;
  uVar4 = param_1[0x29].field_0x23;
  uVar5 = param_1[0x29].field_0x24;
  uVar6 = param_1[0x29].field_0x25;
  uVar7 = param_1[0x29].field_0x26;
  uVar8 = param_1[0x29].field_0x27;
  puVar17[0x30] = param_1[0x29].field_0x20;
  puVar17[0x31] = uVar2;
  puVar17[0x32] = uVar3;
  puVar17[0x33] = uVar4;
  puVar17[0x34] = uVar5;
  puVar17[0x35] = uVar6;
  puVar17[0x36] = uVar7;
  puVar17[0x37] = uVar8;
  return;
}

// execGetCullDistances @ 14977bf40

void __cdecl
UPCGProceduralISMComponent::execGetCullDistances(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uchar *puVar5;
  uchar *puVar6;
  uchar local_res8 [8];
  uchar local_res10 [8];
  
  local_res8[0] = '\0';
  local_res8[1] = '\0';
  local_res8[2] = '\0';
  local_res8[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar5 = param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar6 = local_res8;
  if (puVar5 != (uchar *)0x0) {
    puVar6 = puVar5;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar5 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = param_1[0x2a].field_0x5;
  uVar3 = param_1[0x2a].field_0x6;
  uVar4 = param_1[0x2a].field_0x7;
  puVar6[0] = param_1[0x2a].field_0x4;
  puVar6[1] = uVar2;
  puVar6[2] = uVar3;
  puVar6[3] = uVar4;
  uVar2 = param_1[0x2a].field_0x9;
  uVar3 = param_1[0x2a].field_0xa;
  uVar4 = param_1[0x2a].field_0xb;
  puVar5[0] = param_1[0x2a].field_0x8;
  puVar5[1] = uVar2;
  puVar5[2] = uVar3;
  puVar5[3] = uVar4;
  return;
}

// execGetMinDrawDistance @ 14977c030

void __cdecl
UPCGProceduralISMComponent::execGetMinDrawDistance(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uchar *puVar5;
  uchar local_res8 [8];
  
  local_res8[0] = '\0';
  local_res8[1] = '\0';
  local_res8[2] = '\0';
  local_res8[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar5 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = param_1[0x2a].field_0x1;
  uVar3 = param_1[0x2a].field_0x2;
  uVar4 = param_1[0x2a].field_0x3;
  puVar5[0] = param_1[0x2a].field_0x0;
  puVar5[1] = uVar2;
  puVar5[2] = uVar3;
  puVar5[3] = uVar4;
  return;
}

// execGetNumCustomDataFloats @ 14977c0d0

void __cdecl
UPCGProceduralISMComponent::execGetNumCustomDataFloats
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x28].field_0x14;
  return;
}

// execGetNumInstances @ 14977c100

void __cdecl
UPCGProceduralISMComponent::execGetNumInstances(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x28].field_0x10;
  return;
}

// execSetBounds @ 14977c970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UPCGProceduralISMComponent::execSetBounds(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TBox<double> *pTVar2;
  undefined1 auStack_68 [32];
  TBox<double> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_48.IsValid = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  pTVar2 = &local_48;
  if ((TBox<double> *)param_2->MostRecentPropertyAddress != (TBox<double> *)0x0) {
    pTVar2 = (TBox<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetBounds((UPCGProceduralISMComponent *)param_1,pTVar2);
  return;
}

// execSetCullDistances @ 14977ca30

void __cdecl
UPCGProceduralISMComponent::execSetCullDistances(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  int local_res20 [2];
  
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetCullDistances((UPCGProceduralISMComponent *)param_1,local_res20[0],local_res10[0]);
  return;
}

// execSetLocalBounds @ 14977cb00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UPCGProceduralISMComponent::execSetLocalBounds(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [48];
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execSetMinDrawDistance @ 14977cb90

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
UPCGProceduralISMComponent::execSetMinDrawDistance(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FSceneInterface *pFVar3;
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
  if (*(int *)(param_1 + 0x2a) != local_res8[0]) {
    *(int *)(param_1 + 0x2a) = local_res8[0];
    pFVar3 = UActorComponent::GetScene((UActorComponent *)param_1);
    if ((pFVar3 != (FSceneInterface *)0x0) && (*(longlong *)&param_1[0x21].field_0x8 != 0)) {
      pFVar3 = UActorComponent::GetScene((UActorComponent *)param_1);
      pcVar2 = *(code **)(pFVar3->_padding_ + 0x88);
      (*pcVar2)(pFVar3,param_1,pcVar2,0,0);
    }
  }
  return;
}

// execSetNumCustomDataFloats @ 14977cc70

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
UPCGProceduralISMComponent::execSetNumCustomDataFloats
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
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
  iVar2 = 0;
  if (0 < local_res8[0]) {
    iVar2 = local_res8[0];
  }
  if (iVar2 != *(int *)&param_1[0x28].field_0x14) {
    *(int *)&param_1[0x28].field_0x14 = iVar2;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetNumInstances @ 14977cd10

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
UPCGProceduralISMComponent::execSetNumInstances(UObject *param_1,FFrame *param_2,void *param_3)

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
  if (*(int *)&param_1[0x28].field_0x10 != local_res8[0]) {
    *(int *)&param_1[0x28].field_0x10 = local_res8[0];
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

