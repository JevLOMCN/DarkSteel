// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 97

// StaticClass @ 14c9fea10

UClass * __cdecl UGeometryCacheComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryCacheComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCache",L"GeometryCacheComponent",
               &Z_Registration_Info_UClass_UGeometryCacheComponent.InnerSingleton,
               StaticRegisterNativesUGeometryCacheComponent,0x620,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UGeometryCacheComponent>,
               InternalVTableHelperCtorCaller<UGeometryCacheComponent>,local_res8,
               UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryCacheComponent.InnerSingleton;
}

// UGeometryCacheComponent @ 14ca07c00

UGeometryCacheComponent * __thiscall
UGeometryCacheComponent::UGeometryCacheComponent
          (UGeometryCacheComponent *this,FVTableHelper *param_1)

{
  UMeshComponent::UMeshComponent((UMeshComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  (this->GeometryCache).field0_0x0.DebugPtr = (UGeometryCache *)0x0;
  (this->TrackSections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TrackSections).ArrayNum = 0;
  (this->TrackSections).ArrayMax = 0;
  return this;
}

// UGeometryCacheComponent @ 14ca07c80

UGeometryCacheComponent * __thiscall
UGeometryCacheComponent::UGeometryCacheComponent
          (UGeometryCacheComponent *this,FObjectInitializer *param_1)

{
  UMeshComponent::UMeshComponent((UMeshComponent *)this,param_1);
  this->bRunning = true;
  this->bLooping = true;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  this->field_0x42 = this->field_0x42 | 2;
  (this->GeometryCache).field0_0x0.DebugPtr = (UGeometryCache *)0x0;
  (this->TrackSections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TrackSections).ArrayNum = 0;
  (this->TrackSections).ArrayMax = 0;
  this->ElapsedTime = 0.0;
  this->StartTimeOffset = 0.0;
  this->bManualTick = false;
  this->bOverrideWireframeColor = false;
  this->bExtrapolateFrames = true;
  this->PlayDirection = 1.0;
  this->Duration = 0.0;
  this->PlaybackSpeed = 1.0;
  this->MotionVectorScale = 1.0;
  (this->WireframeOverrideColor).field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Green.field0_0x0;
  return this;
}

// ~UGeometryCacheComponent @ 14ca096b0

void __thiscall UGeometryCacheComponent::~UGeometryCacheComponent(UGeometryCacheComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  pFVar1 = (this->TrackSections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMeshComponent::~UMeshComponent((UMeshComponent *)this);
  return;
}

// BeginDestroy @ 14ca0e3f0

void __thiscall UGeometryCacheComponent::BeginDestroy(UGeometryCacheComponent *this)

{
  int *piVar1;
  code *UNRECOVERED_JUMPTABLE;
  IGeometryCacheStreamingManager *pIVar2;
  
  UMeshComponent::BeginDestroy((UMeshComponent *)this);
  (this->GeometryCache).field0_0x0.DebugPtr = (UGeometryCache *)0x0;
  piVar1 = &(this->TrackSections).ArrayMax;
  this->NumTracks = 0;
  (this->TrackSections).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc0,0x10,0,&(this->TrackSections).AllocatorInstance,0,piVar1);
  }
  FRenderCommandFence::BeginFence((FRenderCommandFence *)&this->field_0x538,RenderThread);
  pIVar2 = IGeometryCacheStreamingManager::Get();
  UNRECOVERED_JUMPTABLE = *(code **)(pIVar2->_padding_ + 0xc0);
                    /* WARNING: Could not recover jumptable at 0x00014ca0e463. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pIVar2,this,UNRECOVERED_JUMPTABLE);
  return;
}

// CalcBounds @ 14ca0f880

TBoxSphereBounds<double,double> * __thiscall
UGeometryCacheComponent::CalcBounds
          (UGeometryCacheComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  TMatrix<double> local_88;
  
  UE::Math::TTransform<double>::ToMatrixWithScale(param_1,&local_88);
  UE::Math::TBoxSphereBounds<double,double>::TransformBy
            (&this->LocalBounds,__return_storage_ptr__,&local_88);
  return __return_storage_ptr__;
}

// ClearTrackData @ 14ca0fea0

void __thiscall UGeometryCacheComponent::ClearTrackData(UGeometryCacheComponent *this)

{
  int *piVar1;
  
  this->NumTracks = 0;
  piVar1 = &(this->TrackSections).ArrayMax;
  (this->TrackSections).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc0,0x10,0,&(this->TrackSections).AllocatorInstance,0,piVar1);
  }
  return;
}

// CollectPSOPrecacheData @ 14ca100f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UGeometryCacheComponent::CollectPSOPrecacheData
          (UGeometryCacheComponent *this,FPSOPrecacheParams *param_1,
          TArray<FMaterialInterfacePSOPrecacheParams,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  longlong *plVar1;
  ForElementType<FMaterialInterfacePSOPrecacheParams> FVar2;
  ForElementType<FPSOPrecacheVertexFactoryData> *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  int iVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  ForElementType<FPSOPrecacheVertexFactoryData> *pFVar13;
  ulonglong uVar14;
  ForElementType<FPSOPrecacheVertexFactoryData> *pFVar15;
  ForElementType<FMaterialInterfacePSOPrecacheParams> FVar16;
  undefined8 *puVar17;
  ForElementType<FPSOPrecacheVertexFactoryData> *pFVar18;
  longlong *plVar19;
  undefined1 *puVar20;
  undefined1 auStackY_368 [32];
  undefined1 local_318;
  undefined1 local_317 [7];
  FVertexBuffer *local_310;
  undefined4 uStack_308;
  undefined4 uStack_304;
  longlong *local_300;
  int local_2f8;
  FPSOPrecacheParams_u_0 *local_2f0;
  longlong *local_2e8;
  FVertexBuffer local_2e0;
  FRHIResource *local_2b0;
  FVertexBuffer local_2a8;
  FRHIResource *local_278;
  FVertexBuffer local_270;
  FRHIResource *local_240;
  FVertexBuffer local_238;
  FRHIResource *local_208;
  FVertexBuffer local_1f8;
  FRHIResource *local_1c8;
  FVertexBuffer local_1c0;
  FRHIResource *local_190;
  FPSOPrecacheVertexFactoryData local_188;
  undefined1 local_178 [48];
  ForElementType<FVertexStreamComponent> local_148;
  uint local_108;
  int local_104;
  FVertexBuffer *local_100;
  undefined8 local_f8;
  FVertexBuffer *local_f0;
  undefined8 local_e8;
  bool local_e0;
  TArray<FVertexElement,TFixedAllocator<17>_> local_d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_368;
  local_178._16_8_ = (FVertexBuffer *)0x0;
  local_178._24_4_ = 0;
  local_178[0x1c] = '\0';
  local_178[0x1d] = '\0';
  local_178[0x1e] = '\0';
  local_178[0x1f] = Default;
  local_178._32_8_ = (FVertexBuffer *)0x0;
  local_178._40_4_ = 0;
  local_178[0x2c] = '\0';
  local_178[0x2d] = '\0';
  local_178[0x2e] = '\0';
  local_178[0x2f] = Default;
  local_100 = (FVertexBuffer *)0x0;
  local_f8._0_4_ = 0;
  local_f8._4_1_ = '\0';
  local_f8._5_1_ = '\0';
  local_f8._6_1_ = '\0';
  local_f8._7_1_ = Default;
  local_f0 = (FVertexBuffer *)0x0;
  local_e8._0_4_ = 0;
  local_e8._4_1_ = '\0';
  local_e8._5_1_ = '\0';
  local_e8._6_1_ = '\0';
  local_e8._7_1_ = Default;
  local_104 = 4;
  local_e0 = true;
  local_2f0 = &param_1->field0_0x0;
  FVertexBuffer::FVertexBuffer(&local_1f8);
  local_1c8 = (FRHIResource *)0x0;
  local_1f8._padding_ = (longlong)&___7FGeomCacheVertexBuffer__6B_;
  FVertexBuffer::FVertexBuffer(&local_1c0);
  local_1c0._padding_ = (longlong)&___7FGeomCacheVertexBuffer__6B_;
  local_190 = (FRHIResource *)0x0;
  FVertexBuffer::FVertexBuffer(&local_238);
  local_208 = (FRHIResource *)0x0;
  local_238._padding_ = (longlong)&___7FGeomCacheTangentBuffer__6B_;
  FVertexBuffer::FVertexBuffer(&local_270);
  local_240 = (FRHIResource *)0x0;
  local_270._padding_ = (longlong)&___7FGeomCacheTangentBuffer__6B_;
  FVertexBuffer::FVertexBuffer(&local_2a8);
  local_2a8._padding_ = (longlong)&___7FGeomCacheVertexBuffer__6B_;
  local_278 = (FRHIResource *)0x0;
  FVertexBuffer::FVertexBuffer(&local_2e0);
  local_2b0 = (FRHIResource *)0x0;
  local_2e0._padding_ = (longlong)&___7FGeomCacheColorBuffer__6B_;
  local_178._0_8_ = &local_1f8;
  local_178._8_4_ = 0;
  local_178[0xc] = '\0';
  local_178[0xd] = '\f';
  local_178[0xe] = '\x03';
  local_178[0xf] = Default;
  local_108 = 0;
  if (local_104 != 0) {
    UE::Core::Private::ReallocTo<0,TFixedAllocator<4>::ForElementType<FVertexStreamComponent>_>
              (0x10,8,0,(ForElementType<FVertexStreamComponent> *)(local_178 + 0x30),0,
               (int *)(local_178 + 0x74));
  }
  local_310 = &local_2a8;
  uStack_308 = 0;
  uStack_304 = 0x20800;
  if (((local_178 + 0x30 <= &local_310) &&
      (&local_310 < local_178 + (longlong)local_104 * 0x10 + 0x30)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (local_108 == local_104) {
    local_108 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<4>::ForElementType<FVertexStreamComponent>_>
                          (0x810,(ForElementType<FVertexStreamComponent> *)(local_178 + 0x30),
                           (int *)(local_178 + 0x74));
  }
  lVar12 = (longlong)(int)local_108;
  puVar17 = (undefined8 *)(local_178 + 0x30);
  local_108 = local_108 + 1;
  *(FVertexBuffer **)(local_178 + lVar12 * 0x10 + 0x30) = local_310;
  *(ulonglong *)(local_178 + lVar12 * 0x10 + 0x38) = CONCAT44(uStack_304,uStack_308);
  uVar9 = local_108;
  uVar14 = (ulonglong)(int)local_108;
  local_178._16_8_ = &local_238;
  local_178._32_8_ = &local_270;
  local_100 = &local_2e0;
  local_f0 = &local_1c0;
  lVar12 = uVar14 * 0x10;
  local_178._24_4_ = 0;
  local_178[0x1c] = '\0';
  local_178[0x1d] = '\x04';
  local_178[0x1e] = '\x05';
  local_178[0x1f] = Default;
  local_178._40_4_ = 0;
  local_178[0x2c] = '\0';
  local_178[0x2d] = '\x04';
  local_178[0x2e] = '\x05';
  local_178[0x2f] = Default;
  local_f8._0_4_ = 0;
  local_f8._4_1_ = '\0';
  local_f8._5_1_ = '\x04';
  local_f8._6_1_ = '\b';
  local_f8._7_1_ = Default;
  local_e8._0_4_ = 0;
  local_e8._4_1_ = '\0';
  local_e8._5_1_ = '\f';
  local_e8._6_1_ = '\x03';
  local_e8._7_1_ = Default;
  local_178._0_8_ = (FVertexBuffer *)0x0;
  while( true ) {
    if ((uint)uVar14 != uVar9) {
      local_318 = 0;
      `TCheckedPointerIterator<FVertexStreamComponent,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_318);
    }
    if (puVar17 == (undefined8 *)(local_178 + lVar12 + 0x30)) break;
    *puVar17 = 0;
    puVar17 = puVar17 + 2;
    uVar14 = (ulonglong)local_108;
  }
  local_178._16_8_ = (FVertexBuffer *)0x0;
  local_178._32_8_ = (FVertexBuffer *)0x0;
  local_100 = (FVertexBuffer *)0x0;
  local_f0 = (FVertexBuffer *)0x0;
  if (local_2b0 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_2b0);
  }
  FVertexBuffer::~FVertexBuffer(&local_2e0);
  if (local_278 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_278);
  }
  FVertexBuffer::~FVertexBuffer(&local_2a8);
  if (local_240 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_240);
  }
  FVertexBuffer::~FVertexBuffer(&local_270);
  if (local_208 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_208);
  }
  FVertexBuffer::~FVertexBuffer(&local_238);
  if (local_190 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_190);
  }
  FVertexBuffer::~FVertexBuffer(&local_1c0);
  if (local_1c8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_1c8);
  }
  FVertexBuffer::~FVertexBuffer(&local_1f8);
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0x11;
  FGeometryCacheVertexVertexFactory::GetVertexElements
            (GMaxRHIFeatureLevel,Default,(FDataType *)local_178,&local_d8);
  (**(code **)(*(longlong *)this + 0xa90))(this,&local_300);
  iVar6 = local_2f8;
  local_2e8 = local_300 + local_2f8;
  plVar19 = local_300;
  do {
    plVar1 = local_2e8;
    if (local_2f8 != iVar6) {
      local_317[0] = 0;
      `TCheckedPointerIterator<UMaterialInterface_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_317);
    }
    if (plVar19 == plVar1) {
      if (local_300 != (longlong *)0x0) {
        FMemory::Free(local_300);
      }
      return;
    }
    plVar1 = (longlong *)*plVar19;
    if ((plVar1 != (longlong *)0x0) &&
       (cVar8 = (**(code **)(*plVar1 + 0x378))(plVar1,0xd), cVar8 != '\0')) {
      uVar9 = param_2->ArrayNum;
      if (uVar9 == param_2->ArrayMax) {
        uVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMaterialInterfacePSOPrecacheParams>_>
                          (0x848,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = uVar9 + 1;
      FVar2 = (param_2->AllocatorInstance).SecondaryData;
      FVar16 = (ForElementType<FMaterialInterfacePSOPrecacheParams>)param_2;
      if (FVar2 != (ForElementType<FMaterialInterfacePSOPrecacheParams>)0x0) {
        FVar16 = FVar2;
      }
      DefaultConstructItems<FMaterialInterfacePSOPrecacheParams,int>
                ((void *)((longlong)(int)uVar9 * 0x48 + (longlong)FVar16),1);
      uVar10 = 0;
      if ((int)uVar9 < param_2->ArrayNum) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar2 = (param_2->AllocatorInstance).SecondaryData;
      FVar16 = (ForElementType<FMaterialInterfacePSOPrecacheParams>)param_2;
      if (FVar2 != (ForElementType<FMaterialInterfacePSOPrecacheParams>)0x0) {
        FVar16 = FVar2;
      }
      puVar20 = (undefined1 *)((longlong)FVar16 + (longlong)(int)uVar9 * 0x48);
      *(longlong **)(puVar20 + 8) = plVar1;
      pFVar18 = (ForElementType<FPSOPrecacheVertexFactoryData> *)(puVar20 + 0x18);
      *puVar20 = 0;
      pFVar13 = (ForElementType<FPSOPrecacheVertexFactoryData> *)
                FPSOPrecacheVertexFactoryData::FPSOPrecacheVertexFactoryData
                          (&local_188,&FGeometryCacheVertexVertexFactory::StaticType,&local_d8);
      pFVar3 = *(ForElementType<FPSOPrecacheVertexFactoryData> **)(puVar20 + 0x38);
      pFVar15 = pFVar18;
      if (pFVar3 != (ForElementType<FPSOPrecacheVertexFactoryData> *)0x0) {
        pFVar15 = pFVar3;
      }
      if (pFVar15 <= pFVar13) {
        pFVar15 = pFVar18;
        if (pFVar3 != (ForElementType<FPSOPrecacheVertexFactoryData> *)0x0) {
          pFVar15 = pFVar3;
        }
        if ((pFVar13 < (ForElementType<FPSOPrecacheVertexFactoryData> *)
                       (pFVar15->InlineData + (longlong)*(int *)(puVar20 + 0x44) * 0x10)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar11 = *(int *)(puVar20 + 0x40);
      if (iVar11 == *(int *)(puVar20 + 0x44)) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPSOPrecacheVertexFactoryData>_>
                           (0x810,pFVar18,(int *)(puVar20 + 0x44));
      }
      *(int *)(puVar20 + 0x40) = iVar11 + 1;
      uVar5 = *(undefined8 *)(pFVar13->InlineData + 8);
      if (*(ForElementType<FPSOPrecacheVertexFactoryData> **)(puVar20 + 0x38) !=
          (ForElementType<FPSOPrecacheVertexFactoryData> *)0x0) {
        pFVar18 = *(ForElementType<FPSOPrecacheVertexFactoryData> **)(puVar20 + 0x38);
      }
      *(undefined8 *)(pFVar18->InlineData + (longlong)iVar11 * 0x10) =
           *(undefined8 *)pFVar13->InlineData;
      *(undefined8 *)(pFVar18->InlineData + (longlong)iVar11 * 0x10 + 8) = uVar5;
      *(FPSOPrecacheParams_u_0 *)(puVar20 + 0x10) = *local_2f0;
    }
    plVar19 = plVar19 + 1;
  } while( true );
}

// CreateSceneProxy @ 14ca115d0

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
UGeometryCacheComponent::CreateSceneProxy(UGeometryCacheComponent *this)

{
  IGeometryCacheStreamingManager *pIVar1;
  FGeometryCacheSceneProxy *this_00;
  code *local_38 [2];
  undefined **local_28;
  FGeometryCacheSceneProxy *local_20;
  undefined8 local_10;
  
  pIVar1 = IGeometryCacheStreamingManager::Get();
  (**(code **)(pIVar1->_padding_ + 200))(pIVar1,this);
  this_00 = ::operator_new(0x370);
  if (this_00 != (FGeometryCacheSceneProxy *)0x0) {
    local_10 = 0;
    local_28 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FGeometryCacheSceneProxy::FGeometryCacheSceneProxy'::`1'::<lambda_24_>,0,0>
                ::_vftable_;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FGeometryCacheSceneProxy::FGeometryCacheSceneProxy'::__l1::<lambda_24_>,FGeomCacheTrackProxy_*>
                  ::Call;
    local_20 = this_00;
    FGeometryCacheSceneProxy::FGeometryCacheSceneProxy
              (this_00,this,(TFunction<FGeomCacheTrackProxy_*___cdecl(void)> *)local_38);
    *(undefined ***)this_00 = &___7FGeometryCacheSceneProxy__6B_;
    return (FPrimitiveSceneProxy *)this_00;
  }
  return (FPrimitiveSceneProxy *)0x0;
}

// CreateTrackSection @ 14ca11670

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
UGeometryCacheComponent::CreateTrackSection(UGeometryCacheComponent *this,int param_1)

{
  TArray<FTrackRenderData,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  FScriptContainerElement *_Dst;
  uint uVar7;
  uint uVar8;
  float fVar9;
  
  piVar6 = &(this->TrackSections).ArrayNum;
  iVar5 = *piVar6;
  if (iVar5 <= param_1) {
    uVar7 = param_1 + 1;
    pTVar1 = &this->TrackSections;
    if (iVar5 < (int)uVar7) {
      iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xc0,0x10,uVar7 - iVar5,&pTVar1->AllocatorInstance,piVar6,
                         &(this->TrackSections).ArrayMax);
      DefaultConstructItems<FTrackRenderData,int>
                ((pTVar1->AllocatorInstance).Data + (longlong)iVar4 * 0xc0,uVar7 - iVar5);
    }
    else {
      if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
      }
      if ((int)uVar7 < iVar5) {
        uVar8 = iVar5 - uVar7;
        if (((int)(uVar8 | uVar7) < 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (uVar8 != 0) {
          _Dst = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar7 * 0xc0;
          iVar5 = ((this->TrackSections).ArrayNum - uVar8) - uVar7;
          if (iVar5 != 0) {
            memmove(_Dst,_Dst + (longlong)(int)uVar8 * 0xc0,(longlong)iVar5 * 0xc0);
          }
          piVar6 = &(this->TrackSections).ArrayNum;
          *piVar6 = *piVar6 - uVar8;
        }
      }
    }
  }
  fVar9 = this->StartTimeOffset;
  if (__real_46610000 <= this->StartTimeOffset) {
    fVar9 = __real_46610000;
  }
  if (fVar9 <= __real_c6610000) {
    fVar9 = __real_c6610000;
  }
  UpdateTrackSection(this,param_1,fVar9 + this->ElapsedTime);
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// FinishDestroy @ 14ca16430

void __thiscall UGeometryCacheComponent::FinishDestroy(UGeometryCacheComponent *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(int *)&this->field_0x340 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SceneData.AttachmentCounter.GetValue() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\PrimitiveComponent.cpp"
                       ,0x79d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UObject::FinishDestroy((UObject *)this);
  return;
}

// GetAnimationTime @ 14ca1a740

float __thiscall UGeometryCacheComponent::GetAnimationTime(UGeometryCacheComponent *this)

{
  float fVar1;
  
  fVar1 = this->StartTimeOffset;
  if (__real_46610000 <= this->StartTimeOffset) {
    fVar1 = __real_46610000;
  }
  if (fVar1 <= __real_c6610000) {
    fVar1 = __real_c6610000;
  }
  return fVar1 + this->ElapsedTime;
}

// GetDuration @ 14ca1aed0

float __thiscall UGeometryCacheComponent::GetDuration(UGeometryCacheComponent *this)

{
  return this->Duration;
}

// GetElapsedTime @ 14ca1c240

float __thiscall UGeometryCacheComponent::GetElapsedTime(UGeometryCacheComponent *this)

{
  return this->ElapsedTime;
}

// GetFrameAtTime @ 14ca1c2e0

int __thiscall UGeometryCacheComponent::GetFrameAtTime(UGeometryCacheComponent *this,float param_1)

{
  UGeometryCache *pUVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  pUVar1 = (this->GeometryCache).field0_0x0.DebugPtr;
  if ((pUVar1 == (UGeometryCache *)0x0) ||
     (iVar4 = pUVar1->EndFrame - pUVar1->StartFrame, iVar4 + 1 < 2)) {
    fVar5 = 0.0;
    if (pUVar1 == (UGeometryCache *)0x0) {
      iVar3 = -1;
    }
    else {
      iVar3 = pUVar1->EndFrame - pUVar1->StartFrame;
    }
  }
  else {
    iVar3 = pUVar1->EndFrame - pUVar1->StartFrame;
    fVar5 = this->Duration / (float)iVar4;
  }
  iVar4 = (int)ROUND((param_1 + param_1) / fVar5 + __real_3f000000) >> 1;
  if (iVar4 < iVar3) {
    iVar3 = iVar4;
  }
  iVar4 = 0;
  iVar2 = iVar4;
  if (0 < iVar3) {
    iVar2 = iVar3;
  }
  if (pUVar1 != (UGeometryCache *)0x0) {
    iVar4 = pUVar1->StartFrame;
  }
  return iVar4 + iVar2;
}

// GetGeometryCache @ 14ca1c3c0

UGeometryCache * __thiscall UGeometryCacheComponent::GetGeometryCache(UGeometryCacheComponent *this)

{
  return (this->GeometryCache).field0_0x0.DebugPtr;
}

// GetManualTick @ 14ca1dd10

bool __thiscall UGeometryCacheComponent::GetManualTick(UGeometryCacheComponent *this)

{
  return this->bManualTick;
}

// GetMaterial @ 14ca1dd20

UMaterialInterface * __thiscall
UGeometryCacheComponent::GetMaterial(UGeometryCacheComponent *this,int param_1)

{
  UGeometryCache *pUVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UMaterialInterface *pUVar5;
  longlong lVar6;
  
  pUVar5 = (UMaterialInterface *)0x0;
  lVar6 = (longlong)param_1;
  if ((-1 < param_1) && (param_1 < *(int *)&this->field_0x550)) {
    uVar4 = 0;
    if (param_1 < *(int *)&this->field_0x550) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pUVar5 = (UMaterialInterface *)(*pcVar2)();
      return pUVar5;
    }
    if (*(longlong *)(*(longlong *)&this->field_0x548 + lVar6 * 8) != 0) {
      uVar4 = 0;
      if (param_1 < *(int *)&this->field_0x550) {
        uVar4 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pUVar5 = (UMaterialInterface *)(*pcVar2)();
        return pUVar5;
      }
      return *(UMaterialInterface **)(*(longlong *)&this->field_0x548 + lVar6 * 8);
    }
  }
  pUVar1 = (this->GeometryCache).field0_0x0.DebugPtr;
  if (pUVar1 != (UGeometryCache *)0x0) {
    if ((-1 < param_1) && (param_1 < (pUVar1->Materials).ArrayNum)) {
      uVar4 = 0;
      if (param_1 < (pUVar1->Materials).ArrayNum) {
        uVar4 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pUVar5 = (UMaterialInterface *)(*pcVar2)();
        return pUVar5;
      }
      pUVar5 = *(UMaterialInterface **)((pUVar1->Materials).AllocatorInstance.Data + lVar6 * 8);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        return pUVar5;
      }
      if (pUVar5 != (UMaterialInterface *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
  }
  return pUVar5;
}

// GetMaterialIndex @ 14ca1deb0

int __thiscall
UGeometryCacheComponent::GetMaterialIndex(UGeometryCacheComponent *this,FName param_1)

{
  TObjectPtr<UGeometryCache>_u_0 TVar1;
  FName *pFVar2;
  FName *pFVar3;
  
  TVar1 = (this->GeometryCache).field0_0x0;
  if (TVar1.DebugPtr != (UGeometryCache *)0x0) {
    pFVar2 = *(FName **)((longlong)TVar1 + 0x40);
    for (pFVar3 = pFVar2; pFVar3 != pFVar2 + ((TVar1.DebugPtr)->MaterialSlotNames).ArrayNum;
        pFVar3 = pFVar3 + 1) {
      if (*pFVar3 == param_1) {
        return (int)((longlong)pFVar3 - (longlong)pFVar2 >> 3);
      }
    }
  }
  return -1;
}

// GetMaterialSlotNames @ 14ca1df00

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UGeometryCacheComponent::GetMaterialSlotNames
          (UGeometryCacheComponent *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  UGeometryCache *pUVar2;
  FScriptContainerElement *_Src;
  bool bVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  ForAnyElementType *pFVar6;
  ForAnyElementType local_28;
  int local_20;
  int iStack_1c;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  pUVar2 = (this->GeometryCache).field0_0x0.DebugPtr;
  FVar5.Data = (FScriptContainerElement *)0x0;
  if (pUVar2 == (UGeometryCache *)0x0) {
    local_10 = 0;
    pFVar6 = &local_18;
    bVar4 = false;
    bVar3 = true;
  }
  else {
    local_28.Data = (FScriptContainerElement *)0x0;
    iVar1 = (pUVar2->MaterialSlotNames).ArrayNum;
    _Src = (pUVar2->MaterialSlotNames).AllocatorInstance.Data;
    local_20 = iVar1;
    if (iVar1 == 0) {
      iStack_1c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar1,0,&local_28,iVar1,&iStack_1c);
      memcpy(local_28.Data,_Src,(longlong)iVar1 << 3);
    }
    pFVar6 = &local_28;
    bVar4 = true;
    bVar3 = false;
    FVar5.Data = local_28.Data;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = FVar5.Data;
  pFVar6->Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = *(int *)&pFVar6[1].Data;
  iVar1 = *(int *)((longlong)&pFVar6[1].Data + 4);
  pFVar6[1].Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayMax = iVar1;
  if (bVar3) {
    if (local_18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data);
    }
  }
  if ((bVar4) && (local_28.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data);
  }
  return __return_storage_ptr__;
}

// GetMotionVectorScale @ 14ca1e670

float __thiscall UGeometryCacheComponent::GetMotionVectorScale(UGeometryCacheComponent *this)

{
  float fVar1;
  
  fVar1 = this->MotionVectorScale;
  if (__real_42c80000 <= this->MotionVectorScale) {
    fVar1 = __real_42c80000;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  return fVar1;
}

// GetNumMaterials @ 14ca1e690

int __thiscall UGeometryCacheComponent::GetNumMaterials(UGeometryCacheComponent *this)

{
  UGeometryCache *pUVar1;
  
  pUVar1 = (this->GeometryCache).field0_0x0.DebugPtr;
  if (pUVar1 != (UGeometryCache *)0x0) {
    return (pUVar1->Materials).ArrayNum;
  }
  return 0;
}

// GetNumberOfFrames @ 14ca1e6b0

int __thiscall UGeometryCacheComponent::GetNumberOfFrames(UGeometryCacheComponent *this)

{
  UGeometryCache *pUVar1;
  
  pUVar1 = (this->GeometryCache).field0_0x0.DebugPtr;
  if (pUVar1 != (UGeometryCache *)0x0) {
    return (pUVar1->EndFrame - pUVar1->StartFrame) + 1;
  }
  return 0;
}

// GetNumberOfTracks @ 14ca1e6e0

int __thiscall UGeometryCacheComponent::GetNumberOfTracks(UGeometryCacheComponent *this)

{
  UGeometryCache *pUVar1;
  
  pUVar1 = (this->GeometryCache).field0_0x0.DebugPtr;
  if (pUVar1 != (UGeometryCache *)0x0) {
    return (pUVar1->Tracks).ArrayNum;
  }
  return 0;
}

// GetOverrideWireframeColor @ 14ca1e700

bool __thiscall UGeometryCacheComponent::GetOverrideWireframeColor(UGeometryCacheComponent *this)

{
  return this->bOverrideWireframeColor;
}

// GetPlaybackDirection @ 14ca1e710

float __thiscall UGeometryCacheComponent::GetPlaybackDirection(UGeometryCacheComponent *this)

{
  return this->PlayDirection;
}

// GetPlaybackSpeed @ 14ca1e720

float __thiscall UGeometryCacheComponent::GetPlaybackSpeed(UGeometryCacheComponent *this)

{
  float fVar1;
  
  fVar1 = this->PlaybackSpeed;
  if (__real_44000000 <= this->PlaybackSpeed) {
    fVar1 = __real_44000000;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  return fVar1;
}

// GetPrivateStaticClass @ 14ca1ed20

UClass * __cdecl UGeometryCacheComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryCacheComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCache",L"GeometryCacheComponent",
               &Z_Registration_Info_UClass_UGeometryCacheComponent.InnerSingleton,
               StaticRegisterNativesUGeometryCacheComponent,0x620,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UGeometryCacheComponent>,
               InternalVTableHelperCtorCaller<UGeometryCacheComponent>,local_res8,
               UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryCacheComponent.InnerSingleton;
}

// GetStartTimeOffset @ 14ca1f730

float __thiscall UGeometryCacheComponent::GetStartTimeOffset(UGeometryCacheComponent *this)

{
  return this->StartTimeOffset;
}

// GetTimeAtFrame @ 14ca1fab0

float __thiscall UGeometryCacheComponent::GetTimeAtFrame(UGeometryCacheComponent *this,int param_1)

{
  UGeometryCache *pUVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  pUVar1 = (this->GeometryCache).field0_0x0.DebugPtr;
  if ((pUVar1 == (UGeometryCache *)0x0) ||
     (iVar3 = pUVar1->EndFrame - pUVar1->StartFrame, iVar3 + 1 < 2)) {
    fVar5 = this->Duration;
    fVar4 = 0.0;
    if (pUVar1 == (UGeometryCache *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = pUVar1->StartFrame;
    }
  }
  else {
    fVar5 = this->Duration;
    iVar2 = pUVar1->StartFrame;
    fVar4 = fVar5 / (float)iVar3;
  }
  fVar4 = (float)(param_1 - iVar2) * fVar4;
  if (fVar5 <= fVar4) {
    fVar4 = fVar5;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  return fVar4;
}

// GetWireframeOverrideColor @ 14ca20010

FLinearColor * __thiscall
UGeometryCacheComponent::GetWireframeOverrideColor
          (UGeometryCacheComponent *this,FLinearColor *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)&(this->WireframeOverrideColor).field0_0x0 + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       *(undefined8 *)&(this->WireframeOverrideColor).field0_0x0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
  return __return_storage_ptr__;
}

// InvalidateTrackSampleIndices @ 14ca23570

void __thiscall UGeometryCacheComponent::InvalidateTrackSampleIndices(UGeometryCacheComponent *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->TrackSections).ArrayNum;
  pFVar2 = (this->TrackSections).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0xc0;
  while( true ) {
    if ((this->TrackSections).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FTrackRenderData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar2 == pFVar3) break;
    *(undefined8 *)(pFVar2 + 0xb8) = 0xffffffffffffffff;
    pFVar2 = pFVar2 + 0xc0;
  }
  return;
}

// IsExtrapolatingFrames @ 14ca235f0

bool __thiscall UGeometryCacheComponent::IsExtrapolatingFrames(UGeometryCacheComponent *this)

{
  return this->bExtrapolateFrames;
}

// IsLooping @ 14ca23600

bool __thiscall UGeometryCacheComponent::IsLooping(UGeometryCacheComponent *this)

{
  return this->bLooping;
}

// IsMaterialSlotNameValid @ 14ca23790

bool __thiscall
UGeometryCacheComponent::IsMaterialSlotNameValid(UGeometryCacheComponent *this,FName param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(longlong *)this + 0x698))();
  return iVar1 != -1;
}

// IsPlaying @ 14ca237b0

bool __thiscall UGeometryCacheComponent::IsPlaying(UGeometryCacheComponent *this)

{
  return this->bRunning;
}

// IsPlayingReversed @ 14ca237c0

bool __thiscall UGeometryCacheComponent::IsPlayingReversed(UGeometryCacheComponent *this)

{
  return (float)((uint)(this->PlayDirection - __real_bf800000) &
                __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77;
}

// JumpAnimationToTime @ 14ca23d20

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
UGeometryCacheComponent::JumpAnimationToTime
          (UGeometryCacheComponent *this,float param_1,bool param_2,bool param_3,bool param_4)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  code **ppcVar4;
  int iVar5;
  ulonglong uVar6;
  byte bVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  float fStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  code *local_d8 [2];
  code *local_c8 [3];
  code **local_b0;
  undefined1 local_a8 [40];
  code **local_80;
  byte local_78;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_118;
  iVar5 = 0;
  bVar7 = 0;
  this->ElapsedTime = param_1;
  if (0 < this->NumTracks) {
    do {
      bVar2 = UpdateTrackSection(this,iVar5,param_1);
      bVar7 = bVar7 | bVar2;
      iVar5 = iVar5 + 1;
    } while (iVar5 < this->NumTracks);
    if (bVar7 != 0) {
      UpdateLocalBounds(this);
      UActorComponent::MarkRenderTransformDirty((UActorComponent *)this);
    }
  }
  if (param_2) {
    fVar9 = this->PlaybackSpeed;
  }
  else {
    fVar9 = 0.0;
  }
  local_f8 = *(longlong *)&this->field_0x530;
  if (local_f8 != 0) {
    fVar8 = this->MotionVectorScale;
    if (__real_42c80000 <= this->MotionVectorScale) {
      fVar8 = __real_42c80000;
    }
    uStack_ec._0_2_ = CONCAT11(param_3,param_4);
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    local_d8[0] = (code *)0x0;
    local_b0 = FMemory::Malloc(0x20,8);
    *local_b0 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`UGeometryCacheComponent::JumpAnimationToTime'::`10'::<lambda_1>,1,1>
                         ::_vftable_;
    *(undefined4 *)(local_b0 + 1) = (undefined4)local_f8;
    *(undefined4 *)((longlong)local_b0 + 0xc) = local_f8._4_4_;
    *(float *)(local_b0 + 2) = param_1;
    *(undefined4 *)((longlong)local_b0 + 0x14) = uStack_ec;
    local_b0[3] = (code *)CONCAT44(fVar8,fVar9);
    if (local_b0 + 1 != (code **)0x0) {
      local_d8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UGeometryCacheComponent::JumpAnimationToTime'::__l10::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    local_e8 = CONCAT44(fVar8,fVar9);
    fStack_f0 = param_1;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UGeometryCacheComponent::JumpAnimationToTime_::__l10::TSTR_FGeometryCacheUpdateAnimation107>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_d8);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_a8._0_8_ = local_d8[0];
      local_80 = local_b0;
      local_b0 = (code **)0x0;
      local_a8._16_8_ = local_c8[0];
      local_a8._24_8_ = local_c8[1];
      local_a8._32_8_ = local_c8[2];
      local_d8[0] = (code *)0x0;
      local_78 = 2;
      pFVar3 = (FRenderCommandTag *)
               TRenderCommandTag<`UGeometryCacheComponent::JumpAnimationToTime'::__l10::TSTR_FGeometryCacheUpdateAnimation107>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_a8,pFVar3);
      uVar6 = (ulonglong)local_78;
      if (2 < uVar6) {
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
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar6] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_a8._0_8_ != (code *)0x0) {
          ppcVar4 = (code **)(local_a8 + 0x10);
          if (local_80 != (code **)0x0) {
            ppcVar4 = local_80;
          }
          (**(code **)(*ppcVar4 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar6])(local_a8);
      }
    }
    if (local_d8[0] != (code *)0x0) {
      ppcVar4 = local_d8 + 2;
      if (local_b0 != (code **)0x0) {
        ppcVar4 = local_b0;
      }
      (**(code **)(*ppcVar4 + 0x10))();
    }
  }
  return;
}

// OnObjectReimported @ 14ca24360

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
UGeometryCacheComponent::OnObjectReimported(UGeometryCacheComponent *this,UGeometryCache *param_1)

{
  UGeometryCache *pUVar1;
  bool bVar2;
  
  pUVar1 = (this->GeometryCache).field0_0x0.DebugPtr;
  if (pUVar1 == (UGeometryCache *)0x0) {
    bVar2 = param_1 == (UGeometryCache *)0x0;
  }
  else {
    bVar2 = pUVar1 == param_1;
  }
  if (bVar2) {
    ReleaseResources(this);
    FRenderCommandFence::Wait((FRenderCommandFence *)&this->field_0x538,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UGeometryCache *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->GeometryCache).field0_0x0.DebugPtr = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// OnRegister @ 14ca243e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UGeometryCacheComponent::OnRegister(UGeometryCacheComponent *this)

{
  int *piVar1;
  IGeometryCacheStreamingManager *pIVar2;
  
  this->NumTracks = 0;
  piVar1 = &(this->TrackSections).ArrayMax;
  (this->TrackSections).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc0,0x10,0,&(this->TrackSections).AllocatorInstance,0,piVar1);
  }
  SetupTrackData(this);
  pIVar2 = IGeometryCacheStreamingManager::Get();
  (**(code **)(pIVar2->_padding_ + 0xb8))(pIVar2,this);
  UPrimitiveComponent::OnRegister((UPrimitiveComponent *)this);
  return;
}

// OnUnregister @ 14ca245c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UGeometryCacheComponent::OnUnregister(UGeometryCacheComponent *this)

{
  int *piVar1;
  IGeometryCacheStreamingManager *pIVar2;
  
  pIVar2 = IGeometryCacheStreamingManager::Get();
  (**(code **)(pIVar2->_padding_ + 0xc0))(pIVar2,this);
  UPrimitiveComponent::OnUnregister((UPrimitiveComponent *)this);
  this->NumTracks = 0;
  piVar1 = &(this->TrackSections).ArrayMax;
  (this->TrackSections).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc0,0x10,0,&(this->TrackSections).AllocatorInstance,0,piVar1);
  }
  return;
}

// Pause @ 14ca24630

void __thiscall UGeometryCacheComponent::Pause(UGeometryCacheComponent *this)

{
  this->bRunning = this->bRunning == false;
  return;
}

// Play @ 14ca24650

void __thiscall UGeometryCacheComponent::Play(UGeometryCacheComponent *this)

{
  code *UNRECOVERED_JUMPTABLE;
  IGeometryCacheStreamingManager *pIVar1;
  
  this->bRunning = true;
  this->PlayDirection = 1.0;
  pIVar1 = IGeometryCacheStreamingManager::Get();
  UNRECOVERED_JUMPTABLE = *(code **)(pIVar1->_padding_ + 200);
                    /* WARNING: Could not recover jumptable at 0x00014ca24684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pIVar1,this,UNRECOVERED_JUMPTABLE);
  return;
}

// PlayFromStart @ 14ca24690

void __thiscall UGeometryCacheComponent::PlayFromStart(UGeometryCacheComponent *this)

{
  code *UNRECOVERED_JUMPTABLE;
  IGeometryCacheStreamingManager *pIVar1;
  
  this->ElapsedTime = 0.0;
  this->bRunning = true;
  this->PlayDirection = 1.0;
  pIVar1 = IGeometryCacheStreamingManager::Get();
  UNRECOVERED_JUMPTABLE = *(code **)(pIVar1->_padding_ + 200);
                    /* WARNING: Could not recover jumptable at 0x00014ca246ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pIVar1,this,UNRECOVERED_JUMPTABLE);
  return;
}

// PlayReversed @ 14ca246e0

void __thiscall UGeometryCacheComponent::PlayReversed(UGeometryCacheComponent *this)

{
  code *UNRECOVERED_JUMPTABLE;
  IGeometryCacheStreamingManager *pIVar1;
  
  this->PlayDirection = -1.0;
  this->bRunning = true;
  pIVar1 = IGeometryCacheStreamingManager::Get();
  UNRECOVERED_JUMPTABLE = *(code **)(pIVar1->_padding_ + 200);
                    /* WARNING: Could not recover jumptable at 0x00014ca24714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pIVar1,this,UNRECOVERED_JUMPTABLE);
  return;
}

// PlayReversedFromEnd @ 14ca24720

void __thiscall UGeometryCacheComponent::PlayReversedFromEnd(UGeometryCacheComponent *this)

{
  code *UNRECOVERED_JUMPTABLE;
  IGeometryCacheStreamingManager *pIVar1;
  
  this->ElapsedTime = this->Duration;
  this->PlayDirection = -1.0;
  this->bRunning = true;
  pIVar1 = IGeometryCacheStreamingManager::Get();
  UNRECOVERED_JUMPTABLE = *(code **)(pIVar1->_padding_ + 200);
                    /* WARNING: Could not recover jumptable at 0x00014ca24760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pIVar1,this,UNRECOVERED_JUMPTABLE);
  return;
}

// PostLoad @ 14ca24e80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UGeometryCacheComponent::PostLoad(UGeometryCacheComponent *this)

{
  UPrimitiveComponent::PostLoad((UPrimitiveComponent *)this);
                    /* WARNING: Could not recover jumptable at 0x00014ca24e99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x378))(this);
  return;
}

// ReleaseResources @ 14ca29350

void __thiscall UGeometryCacheComponent::ReleaseResources(UGeometryCacheComponent *this)

{
  int *piVar1;
  
  (this->GeometryCache).field0_0x0.DebugPtr = (UGeometryCache *)0x0;
  this->NumTracks = 0;
  piVar1 = &(this->TrackSections).ArrayMax;
  (this->TrackSections).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc0,0x10,0,&(this->TrackSections).AllocatorInstance,0,piVar1);
  }
  FRenderCommandFence::BeginFence((FRenderCommandFence *)&this->field_0x538,RenderThread);
  return;
}

// ResetAnimationTime @ 14ca29a90

void __thiscall UGeometryCacheComponent::ResetAnimationTime(UGeometryCacheComponent *this)

{
  this->ElapsedTime = 0.0;
  return;
}

// SetCurrentTime @ 14ca2aa50

void __thiscall UGeometryCacheComponent::SetCurrentTime(UGeometryCacheComponent *this,float param_1)

{
  float fVar1;
  
  if (this->bRunning != false) {
    this->bRunning = false;
  }
  fVar1 = this->Duration;
  if (param_1 <= this->Duration) {
    fVar1 = param_1;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  JumpAnimationToTime(this,fVar1,false,
                      (float)((uint)(this->PlayDirection - __real_bf800000) &
                             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77,
                      this->bLooping);
  return;
}

// SetExtrapolateFrames @ 14ca2ab50

void __thiscall
UGeometryCacheComponent::SetExtrapolateFrames(UGeometryCacheComponent *this,bool param_1)

{
  this->bExtrapolateFrames = param_1;
  return;
}

// SetGeometryCache @ 14ca2ab80

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

bool __thiscall
UGeometryCacheComponent::SetGeometryCache(UGeometryCacheComponent *this,UGeometryCache *param_1)

{
  int *piVar1;
  UGeometryCache *pUVar2;
  longlong lVar3;
  ITextData *pIVar4;
  code *pcVar5;
  undefined1 uVar6;
  FMessageLog *this_00;
  FString *pFVar7;
  FText *pFVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  IGeometryCacheStreamingManager *pIVar11;
  FStreamingManagerCollection *pFVar12;
  bool bVar13;
  FName local_res8;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_d8;
  FTextFormat local_c8;
  FText local_b8;
  FFormatArgumentValue local_a8;
  TSharedRef<FTokenizedMessage,1> local_88;
  FText local_78;
  FString local_68;
  FText local_58;
  FTextFormat local_48;
  FMessageLog local_38;
  
  pUVar2 = (this->GeometryCache).field0_0x0.DebugPtr;
  if (pUVar2 == (UGeometryCache *)0x0) {
    bVar13 = param_1 == (UGeometryCache *)0x0;
  }
  else {
    bVar13 = pUVar2 == param_1;
  }
  if (bVar13) {
    bVar13 = false;
  }
  else {
    lVar3 = *(longlong *)&this->field_0xa8;
    bVar13 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
    if ((((bVar13) || ((this->field_0x98 & 1) == 0)) || (this->field_0x1ab != '\0')) || (lVar3 == 0)
       ) {
      pIVar11 = IGeometryCacheStreamingManager::Get();
      (**(code **)(pIVar11->_padding_ + 0xc0))(pIVar11);
      ReleaseResources(this);
      FRenderCommandFence::Wait((FRenderCommandFence *)&this->field_0x538,false);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UGeometryCache *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      (this->GeometryCache).field0_0x0.DebugPtr = param_1;
      this->NumTracks = 0;
      piVar1 = &(this->TrackSections).ArrayMax;
      (this->TrackSections).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc0,0x10,0,&(this->TrackSections).AllocatorInstance,0,piVar1);
      }
      SetupTrackData(this);
      pIVar11 = IGeometryCacheStreamingManager::Get();
      (**(code **)(pIVar11->_padding_ + 0xb8))(pIVar11,this);
      UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
      UActorComponent::RecreatePhysicsState((UActorComponent *)this);
      pFVar12 = IStreamingManager::Get();
      (**(code **)(pFVar12->_padding_ + 0x70))(pFVar12,this);
      (**(code **)(*(longlong *)this + 0x5b0))(this);
      bVar13 = true;
    }
    else {
      ::FName::FName(&local_res8,"PIE");
      this_00 = FMessageLog::FMessageLog(&local_38,&local_res8);
      pFVar7 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_68,(UObject *)0x0);
      pFVar8 = FText::FromString(&local_58,pFVar7);
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_78,L"GeometryCacheComponent",L"SetGeometryCache",
                          L"Calling SetGeometryCache on \'{0}\' but Mobility is Static.");
      pFVar10 = FTextFormat::FTextFormat(&local_48,pFVar9,Default);
      local_a8.Type = Text;
      FText::FText((FText *)&local_a8.TextValue,pFVar8);
      if ((local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0xbd,
                              L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                             ), bVar13)) {
        pcVar5 = (code *)swi(3);
        uVar6 = (*pcVar5)();
        return (bool)uVar6;
      }
      local_d8.ArrayNum = 1;
      local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,0,&local_d8.AllocatorInstance,1,&local_d8.ArrayMax);
      ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                (local_d8.AllocatorInstance.Data,&local_a8,1);
      local_c8.TextFormatData.Object = (pFVar10->TextFormatData).Object;
      local_c8.TextFormatData.SharedReferenceCount.ReferenceController =
           (pFVar10->TextFormatData).SharedReferenceCount.ReferenceController;
      if (local_c8.TextFormatData.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_c8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_c8.TextFormatData.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      FText::Format(&local_b8,&local_c8,&local_d8);
      DestructItems<FFormatArgumentValue,int>
                ((FFormatArgumentValue *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
      if ((FFormatArgumentValue *)local_d8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
        FMemory::Free(local_d8.AllocatorInstance.Data);
      }
      if (local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar10->TextFormatData).SharedReferenceCount.ReferenceController);
      pIVar4 = (pFVar8->TextData).Reference;
      if (pIVar4 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar4 + 0x10))();
      }
      FMessageLog::Warning(this_00,&local_88,&local_b8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.SharedReferenceCount.ReferenceController);
      if (local_b8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
      }
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      FMessageLog::~FMessageLog(&local_38);
      bVar13 = false;
    }
  }
  return bVar13;
}

// SetLooping @ 14ca2aed0

void __thiscall UGeometryCacheComponent::SetLooping(UGeometryCacheComponent *this,bool param_1)

{
  this->bLooping = param_1;
  return;
}

// SetManualTick @ 14ca2aee0

void __thiscall UGeometryCacheComponent::SetManualTick(UGeometryCacheComponent *this,bool param_1)

{
  this->bManualTick = param_1;
  return;
}

// SetMotionVectorScale @ 14ca2b090

void __thiscall
UGeometryCacheComponent::SetMotionVectorScale(UGeometryCacheComponent *this,float param_1)

{
  if (__real_42c80000 <= param_1) {
    param_1 = __real_42c80000;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  this->MotionVectorScale = param_1;
  return;
}

// SetOverrideWireframeColor @ 14ca2b320

void __thiscall
UGeometryCacheComponent::SetOverrideWireframeColor(UGeometryCacheComponent *this,bool param_1)

{
  this->bOverrideWireframeColor = param_1;
  return;
}

// SetPlaybackSpeed @ 14ca2b330

void __thiscall
UGeometryCacheComponent::SetPlaybackSpeed(UGeometryCacheComponent *this,float param_1)

{
  if (__real_44000000 <= param_1) {
    param_1 = __real_44000000;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  this->PlaybackSpeed = param_1;
  return;
}

// SetStartTimeOffset @ 14ca2b6a0

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
UGeometryCacheComponent::SetStartTimeOffset(UGeometryCacheComponent *this,float param_1)

{
  if (__real_322bcc77 <
      (float)((uint)(this->StartTimeOffset - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->StartTimeOffset = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    return;
  }
  return;
}

// SetWireframeOverrideColor @ 14ca2b6d0

void __thiscall
UGeometryCacheComponent::SetWireframeOverrideColor
          (UGeometryCacheComponent *this,FLinearColor *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->WireframeOverrideColor).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  *(undefined8 *)((longlong)&(this->WireframeOverrideColor).field0_0x0 + 8) = uVar1;
  return;
}

// SetupTrackData @ 14ca2b7d0

void __thiscall UGeometryCacheComponent::SetupTrackData(UGeometryCacheComponent *this)

{
  int iVar1;
  UGeometryCache *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  
  pUVar2 = (this->GeometryCache).field0_0x0.DebugPtr;
  if (pUVar2 != (UGeometryCache *)0x0) {
    iVar1 = (pUVar2->Tracks).ArrayNum;
    uVar7 = 0;
    this->NumTracks = iVar1;
    this->Duration = 0.0;
    if (0 < iVar1) {
      lVar6 = 0;
      do {
        CreateTrackSection(this,uVar7);
        pUVar2 = (this->GeometryCache).field0_0x0.DebugPtr;
        uVar5 = 0;
        if ((int)uVar7 < (pUVar2->Tracks).ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        fVar8 = (float)(**(code **)(**(longlong **)((pUVar2->Tracks).AllocatorInstance.Data + lVar6)
                                   + 0x2e0))();
        uVar7 = uVar7 + 1;
        fVar9 = this->Duration;
        if (this->Duration <= fVar8) {
          fVar9 = fVar8;
        }
        lVar6 = lVar6 + 8;
        this->Duration = fVar9;
      } while ((int)uVar7 < this->NumTracks);
    }
  }
  UpdateLocalBounds(this);
  return;
}

// StaticRegisterNativesUGeometryCacheComponent @ 14ca2ba20

void __cdecl UGeometryCacheComponent::StaticRegisterNativesUGeometryCacheComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x1e;
  local_18.DataPtr = Z_Construct_UClass_UGeometryCacheComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StepAnimationFrame @ 14ca2ba90

void __thiscall
UGeometryCacheComponent::StepAnimationFrame(UGeometryCacheComponent *this,bool param_1)

{
  UGeometryCache *pUVar1;
  int iVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  
  pUVar1 = (this->GeometryCache).field0_0x0.DebugPtr;
  if (pUVar1 == (UGeometryCache *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (pUVar1->EndFrame - pUVar1->StartFrame) + 1;
  }
  fVar5 = this->Duration;
  fVar6 = __real_3f800000 / fVar5;
  fVar4 = this->PlaybackSpeed;
  if (__real_44000000 <= this->PlaybackSpeed) {
    fVar4 = __real_44000000;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  fVar4 = (float)(__real_3ff0000000000000 /
                 (double)((int)ROUND((fVar6 + fVar6) * (float)iVar2 + __real_3f000000) >> 1)) *
          this->PlayDirection * fVar4 + this->ElapsedTime;
  if (this->bLooping == false) {
    if (fVar4 <= fVar5) {
      fVar5 = fVar4;
    }
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
  }
  else {
    auVar3 = roundps(ZEXT816(0),ZEXT416((uint)(fVar6 * fVar4)),1);
    fVar5 = fVar4 - auVar3._0_4_ * fVar5;
  }
  JumpAnimationToTime(this,fVar5,this->bRunning,param_1,this->bLooping);
  return;
}

// Stop @ 14ca2bb80

void __thiscall UGeometryCacheComponent::Stop(UGeometryCacheComponent *this)

{
  this->bRunning = false;
  return;
}

// TickAtThisTime @ 14ca2c180

void __thiscall
UGeometryCacheComponent::TickAtThisTime
          (UGeometryCacheComponent *this,float param_1,bool param_2,bool param_3,bool param_4)

{
  if (((this->bManualTick != false) &&
      ((this->GeometryCache).field0_0x0.DebugPtr != (UGeometryCache *)0x0)) &&
     (this->bRunning != false)) {
    JumpAnimationToTime(this,param_1,param_2,param_3,param_4);
    return;
  }
  return;
}

// TickComponent @ 14ca2c1c0

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
UGeometryCacheComponent::TickComponent
          (UGeometryCacheComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_GeometryCacheComponent_TickComponent> FVar8;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar9;
  uint uVar10;
  code **ppcVar11;
  FNameEntryId FVar12;
  FName FVar13;
  int iVar14;
  ulonglong uVar15;
  byte bVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStackY_1a8 [32];
  FColor_u_0 local_148 [2];
  FName local_140;
  uint local_138;
  uint uStack_134;
  FName local_130;
  undefined8 local_120;
  float fStack_118;
  undefined4 uStack_114;
  float local_110;
  float fStack_10c;
  float fStack_108;
  undefined4 uStack_104;
  FName local_100;
  code *local_f8 [2];
  code *local_e8 [3];
  code **local_d0;
  undefined1 local_c8 [40];
  code **local_a0;
  byte local_98;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  iVar14 = 0;
  FVar8 = StatPtr_STAT_GeometryCacheComponent_TickComponent;
  if (StatPtr_STAT_GeometryCacheComponent_TickComponent ==
      (FThreadSafeStaticStat<FStat_STAT_GeometryCacheComponent_TickComponent>)0x0) {
    pFVar7 = ::FName::FName(&local_100,"STAT_GeometryCacheComponent_TickComponent");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_GeometryCacheComponent_TickComponent>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &StatPtr_STAT_GeometryCacheComponent_TickComponent,*pFVar7,L"Component Tick",
                       "STATGROUP_GeometryCache","STATCAT_Advanced",L"GeometryCache",true,true,
                       ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar8;
  bVar2 = false;
  bVar4 = false;
  local_130.ComparisonIndex.Value = 0;
  local_130.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar10 = FVar13.Number;
  if ((FVar12.Value == 0) && (uVar10 == 0)) {
LAB_14ca2c31c:
    bVar3 = false;
    FVar13 = local_130;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_148[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_148[0]._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_140.ComparisonIndex.Value = FVar12.Value;
        local_140.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_140,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheComponent.cpp"
                   ,0x9d);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14ca2c31c;
    local_138 = FVar12.Value;
    uStack_134 = uVar10;
    FThreadStats::AddMessage(FVar13,CycleScopeStart);
    bVar3 = true;
  }
  if ((((this->GeometryCache).field0_0x0.DebugPtr == (UGeometryCache *)0x0) ||
      (this->bRunning == false)) || (this->bManualTick != false)) goto LAB_14ca2c67a;
  fVar17 = this->PlaybackSpeed;
  if (__real_44000000 <= this->PlaybackSpeed) {
    fVar17 = __real_44000000;
  }
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  fVar17 = fVar17 * param_1 * this->PlayDirection + this->ElapsedTime;
  this->ElapsedTime = fVar17;
  if (this->bLooping == false) {
    if (0.0 <= fVar17) {
      if (fVar17 <= this->Duration) goto LAB_14ca2c3e3;
      this->ElapsedTime = this->Duration;
    }
    else {
      this->ElapsedTime = 0.0;
    }
    this->bRunning = false;
  }
  else if (fVar17 < 0.0) {
    this->ElapsedTime = fVar17 + this->Duration;
  }
LAB_14ca2c3e3:
  fVar5 = __real_c6610000;
  fVar17 = __real_46610000;
  bVar16 = 0;
  if (0 < this->NumTracks) {
    do {
      fVar19 = this->StartTimeOffset;
      if (fVar17 <= this->StartTimeOffset) {
        fVar19 = fVar17;
      }
      if (fVar19 <= fVar5) {
        fVar19 = fVar5;
      }
      bVar6 = UpdateTrackSection(this,iVar14,fVar19 + this->ElapsedTime);
      bVar16 = bVar16 | bVar6;
      iVar14 = iVar14 + 1;
    } while (iVar14 < this->NumTracks);
    if (bVar16 != 0) {
      UpdateLocalBounds(this);
    }
  }
  UActorComponent::MarkRenderTransformDirty((UActorComponent *)this);
  if (this->bRunning == false) {
    fVar19 = 0.0;
  }
  else {
    fVar19 = this->PlaybackSpeed;
  }
  if (*(longlong *)&this->field_0x530 != 0) {
    fVar18 = this->StartTimeOffset;
    if (fVar17 <= this->StartTimeOffset) {
      fVar18 = fVar17;
    }
    local_f8[0] = (code *)0x0;
    fVar17 = this->MotionVectorScale;
    if (__real_42c80000 <= this->MotionVectorScale) {
      fVar17 = __real_42c80000;
    }
    if (fVar18 <= fVar5) {
      fVar18 = fVar5;
    }
    uStack_114._0_2_ =
         CONCAT11((float)((uint)(this->PlayDirection - __real_bf800000) &
                         __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77,this->bLooping);
    if (fVar17 <= 0.0) {
      fVar17 = 0.0;
    }
    fVar18 = fVar18 + this->ElapsedTime;
    local_120 = *(longlong *)&this->field_0x530;
    local_d0 = FMemory::Malloc(0x28,8);
    *local_d0 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`UGeometryCacheComponent::TickComponent'::`27'::<lambda_1>,1,1>
                         ::_vftable_;
    *(undefined4 *)(local_d0 + 1) = (undefined4)local_120;
    *(undefined4 *)((longlong)local_d0 + 0xc) = local_120._4_4_;
    *(float *)(local_d0 + 2) = fVar18;
    *(undefined4 *)((longlong)local_d0 + 0x14) = uStack_114;
    *(float *)(local_d0 + 3) = fVar19;
    *(float *)((longlong)local_d0 + 0x1c) = fVar19;
    *(float *)(local_d0 + 4) = fVar17;
    *(undefined4 *)((longlong)local_d0 + 0x24) = uStack_104;
    if (local_d0 + 1 != (code **)0x0) {
      local_f8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UGeometryCacheComponent::TickComponent'::__l27::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    fStack_118 = fVar18;
    local_110 = fVar19;
    fStack_10c = fVar19;
    fStack_108 = fVar17;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UGeometryCacheComponent::TickComponent_::__l27::TSTR_FGeometryCacheUpdateAnimation211>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_f8);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_c8._0_8_ = local_f8[0];
      local_a0 = local_d0;
      local_d0 = (code **)0x0;
      local_c8._16_8_ = local_e8[0];
      local_c8._24_8_ = local_e8[1];
      local_c8._32_8_ = local_e8[2];
      local_f8[0] = (code *)0x0;
      local_98 = 2;
      pFVar9 = (FRenderCommandTag *)
               TRenderCommandTag<`UGeometryCacheComponent::TickComponent'::__l27::TSTR_FGeometryCacheUpdateAnimation211>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_c8,pFVar9);
      uVar15 = (ulonglong)local_98;
      if ((2 < uVar15) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar6)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar15] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_c8._0_8_ != (code *)0x0) {
          ppcVar11 = (code **)(local_c8 + 0x10);
          if (local_a0 != (code **)0x0) {
            ppcVar11 = local_a0;
          }
          (**(code **)(*ppcVar11 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar15])(local_c8);
      }
    }
    if (local_f8[0] != (code *)0x0) {
      ppcVar11 = local_f8 + 2;
      if (local_d0 != (code **)0x0) {
        ppcVar11 = local_d0;
      }
      (**(code **)(*ppcVar11 + 0x10))();
    }
  }
LAB_14ca2c67a:
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar3) {
    FThreadStats::AddMessage(FVar13,CycleScopeEnd);
  }
  return;
}

// UpdateLocalBounds @ 14ca2d8c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UGeometryCacheComponent::UpdateLocalBounds(UGeometryCacheComponent *this)

{
  double dVar1;
  double dVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  TBox<double> *pTVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
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
  undefined1 auStack_118 [32];
  undefined1 local_f8 [8];
  double local_f0;
  double dStack_e8;
  double local_e0;
  double dStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  double local_c0;
  TBox<double> local_b8;
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStack_118;
  iVar4 = (this->TrackSections).ArrayNum;
  pFVar10 = (this->TrackSections).AllocatorInstance.Data;
  local_f0 = 0.0;
  dStack_e8 = 0.0;
  uVar3._0_1_ = '\0';
  local_e0 = 0.0;
  dStack_d8 = 0.0;
  pFVar11 = pFVar10 + (longlong)iVar4 * 0xc0;
  local_d0 = 0.0;
  uStack_c8 = 0.0;
  local_c0 = (double)(ulonglong)local_c0._0_1_;
  uVar22 = 0;
  uVar23 = 0;
  uVar24 = 0;
  uVar25 = 0;
  uVar7 = 0;
  uVar8 = 0;
  uVar19 = 0;
  uVar21 = 0;
  uVar14 = 0;
  uVar17 = 0;
  uVar13 = 0;
  uVar16 = 0;
  do {
    while( true ) {
      uVar27 = uVar8;
      uVar26 = uVar7;
      if ((this->TrackSections).ArrayNum != iVar4) {
        `TCheckedPointerIterator<FTrackRenderData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_f8);
      }
      if (pFVar10 == pFVar11) {
        if ((char)uVar3 == '\0') {
          local_c0 = 0.0;
          local_f0 = 0.0;
          dStack_e8 = 0.0;
          local_e0 = 0.0;
          dStack_d8 = 0.0;
          local_d0 = 0.0;
          uStack_c8 = 0.0;
        }
        else {
          dVar1 = (double)CONCAT44(uVar23,uVar22) - (double)CONCAT44(uVar21,uVar19);
          dVar2 = (double)CONCAT44(uVar25,uVar24) - (double)CONCAT44(uVar16,uVar13);
          dVar6 = (double)CONCAT44(uVar27,uVar26) - (double)CONCAT44(uVar17,uVar14);
          dStack_d8 = dVar1 * __real_3fe0000000000000;
          local_d0 = dVar2 * __real_3fe0000000000000;
          uStack_c8 = dVar6 * __real_3fe0000000000000;
          local_f0 = dStack_d8 + (double)CONCAT44(uVar21,uVar19);
          dStack_e8 = local_d0 + (double)CONCAT44(uVar16,uVar13);
          local_e0 = uStack_c8 + (double)CONCAT44(uVar17,uVar14);
          local_c0 = SQRT((dVar1 * dVar1 + dVar2 * dVar2 + dVar6 * dVar6) * __real_3fd0000000000000)
          ;
        }
        (this->LocalBounds).Origin.field0_0x0._s_0.X = local_f0;
        (this->LocalBounds).Origin.field0_0x0._s_0.Y = dStack_e8;
        (this->LocalBounds).Origin.field0_0x0._s_0.Z = local_e0;
        (this->LocalBounds).BoxExtent.field0_0x0._s_0.X = dStack_d8;
        lVar5 = *(longlong *)this;
        *(undefined4 *)((longlong)&(this->LocalBounds).BoxExtent.field0_0x0 + 8) =
             (undefined4)local_d0;
        *(undefined4 *)((longlong)&(this->LocalBounds).BoxExtent.field0_0x0 + 0xc) = local_d0._4_4_;
        *(undefined4 *)((longlong)&(this->LocalBounds).BoxExtent.field0_0x0 + 0x10) =
             (undefined4)uStack_c8;
        *(undefined4 *)((longlong)&(this->LocalBounds).BoxExtent.field0_0x0 + 0x14) =
             uStack_c8._4_4_;
        (this->LocalBounds).SphereRadius = local_c0;
        (**(code **)(lVar5 + 0x5b0))(this);
        return;
      }
      pTVar9 = UE::Math::TBox<double>::TransformBy
                         ((TBox<double> *)(pFVar10 + 0x80),&local_b8,(TMatrix<double> *)pFVar10);
      if ((char)uVar3 == '\0') break;
      if (pTVar9->IsValid == '\0') goto LAB_14ca2da45;
      dVar1 = *(double *)&(pTVar9->Min).field0_0x0;
      pFVar10 = pFVar10 + 0xc0;
      dVar2 = *(double *)((longlong)&(pTVar9->Min).field0_0x0 + 8);
      uVar12 = SUB84(dVar1,0);
      uVar15 = (int)((ulonglong)dVar1 >> 0x20);
      if ((double)CONCAT44(uVar21,uVar19) <= dVar1) {
        uVar12 = uVar19;
        uVar15 = uVar21;
      }
      uVar18 = SUB84(dVar2,0);
      uVar20 = (int)((ulonglong)dVar2 >> 0x20);
      if ((double)CONCAT44(uVar16,uVar13) <= dVar2) {
        uVar18 = uVar13;
        uVar20 = uVar16;
      }
      dVar1 = *(double *)((longlong)&(pTVar9->Min).field0_0x0 + 0x10);
      uVar13 = SUB84(dVar1,0);
      uVar16 = (int)((ulonglong)dVar1 >> 0x20);
      if ((double)CONCAT44(uVar17,uVar14) <= dVar1) {
        uVar13 = uVar14;
        uVar16 = uVar17;
      }
      dVar1 = *(double *)&(pTVar9->Max).field0_0x0;
      uVar19 = SUB84(dVar1,0);
      uVar21 = (int)((ulonglong)dVar1 >> 0x20);
      if (dVar1 <= (double)CONCAT44(uVar23,uVar22)) {
        uVar19 = uVar22;
        uVar21 = uVar23;
      }
      dVar1 = *(double *)((longlong)&(pTVar9->Max).field0_0x0 + 8);
      uVar14 = SUB84(dVar1,0);
      uVar17 = (int)((ulonglong)dVar1 >> 0x20);
      if (dVar1 <= (double)CONCAT44(uVar25,uVar24)) {
        uVar14 = uVar24;
        uVar17 = uVar25;
      }
      dVar1 = *(double *)((longlong)&(pTVar9->Max).field0_0x0 + 0x10);
      uVar22 = uVar19;
      uVar23 = uVar21;
      uVar24 = uVar14;
      uVar25 = uVar17;
      uVar7 = SUB84(dVar1,0);
      uVar8 = (int)((ulonglong)dVar1 >> 0x20);
      uVar19 = uVar12;
      uVar21 = uVar15;
      uVar14 = uVar13;
      uVar17 = uVar16;
      uVar13 = uVar18;
      uVar16 = uVar20;
      if (dVar1 <= (double)CONCAT44(uVar27,uVar26)) {
        uVar7 = uVar26;
        uVar8 = uVar27;
      }
    }
    if (pTVar9->IsValid != '\0') {
      uVar19 = *(undefined4 *)&(pTVar9->Min).field0_0x0;
      uVar21 = *(undefined4 *)((longlong)&(pTVar9->Min).field0_0x0 + 4);
      uVar13 = *(undefined4 *)((longlong)&(pTVar9->Min).field0_0x0 + 8);
      uVar16 = *(undefined4 *)((longlong)&(pTVar9->Min).field0_0x0 + 0xc);
      uVar14 = *(undefined4 *)((longlong)&(pTVar9->Min).field0_0x0 + 0x10);
      uVar17 = *(undefined4 *)((longlong)&(pTVar9->Min).field0_0x0 + 0x14);
      uVar22 = *(undefined4 *)&(pTVar9->Max).field0_0x0;
      uVar23 = *(undefined4 *)((longlong)&(pTVar9->Max).field0_0x0 + 4);
      uVar24 = *(undefined4 *)((longlong)&(pTVar9->Max).field0_0x0 + 8);
      uVar25 = *(undefined4 *)((longlong)&(pTVar9->Max).field0_0x0 + 0xc);
      uVar26 = *(undefined4 *)((longlong)&(pTVar9->Max).field0_0x0 + 0x10);
      uVar27 = *(undefined4 *)((longlong)&(pTVar9->Max).field0_0x0 + 0x14);
      uVar3._0_1_ = pTVar9->IsValid;
      uVar3._1_1_ = pTVar9->Pad[0];
      uVar3._2_1_ = pTVar9->Pad[1];
      uVar3._3_1_ = pTVar9->Pad[2];
      uVar3._4_1_ = pTVar9->Pad[3];
      uVar3._5_1_ = pTVar9->Pad[4];
      uVar3._6_1_ = pTVar9->Pad[5];
      uVar3._7_1_ = pTVar9->Pad[6];
      local_c0 = (double)uVar3;
    }
LAB_14ca2da45:
    pFVar10 = pFVar10 + 0xc0;
    uVar7 = uVar26;
    uVar8 = uVar27;
  } while( true );
}

// UpdateTrackSection @ 14ca30680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UGeometryCacheComponent::UpdateTrackSection(UGeometryCacheComponent *this,int param_1,float param_2)

{
  int iVar1;
  UGeometryCache *pUVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_138 [32];
  FScriptContainerElement *local_118;
  undefined8 *local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8;
  undefined7 uStack_d7;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  lVar11 = (longlong)param_1;
  if (((((this->TrackSections).ArrayNum <= param_1) ||
       (pUVar2 = (this->GeometryCache).field0_0x0.DebugPtr, pUVar2 == (UGeometryCache *)0x0)) ||
      ((pUVar2->Tracks).ArrayNum <= param_1)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TrackIndex < TrackSections.Num() && GeometryCache != nullptr && TrackIndex < GeometryCache->Tracks.Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheComponent.cpp"
                         ,0x15f,L"Invalid SectionIndex"), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  pUVar2 = (this->GeometryCache).field0_0x0.DebugPtr;
  iVar1 = (pUVar2->Tracks).ArrayNum;
  uVar10 = 0;
  if (param_1 < iVar1) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (local_118 = (FScriptContainerElement *)lVar11, local_110 = (undefined8 *)(longlong)iVar1,
     bVar6 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar6
     )) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  plVar3 = *(longlong **)((pUVar2->Tracks).AllocatorInstance.Data + lVar11 * 8);
  iVar1 = (this->TrackSections).ArrayNum;
  uVar10 = 0;
  if (param_1 < iVar1) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (local_118 = (FScriptContainerElement *)lVar11, local_110 = (undefined8 *)(longlong)iVar1,
     bVar6 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar6
     )) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  pFVar4 = (this->TrackSections).AllocatorInstance.Data;
  lVar11 = lVar11 * 0xc0;
  (**(code **)(*plVar3 + 0x310))(plVar3,param_2,this->bLooping);
  local_118 = (FScriptContainerElement *)&local_c8;
  local_d8 = 0;
  cVar8 = (**(code **)(*plVar3 + 0x2b0))(plVar3,param_2,this->bLooping,pFVar4 + lVar11 + 0xb8);
  local_118 = pFVar4 + lVar11 + 0xbc;
  local_110 = &local_108;
  cVar9 = (**(code **)(*plVar3 + 0x2b8))
                    (plVar3,param_2,this->bLooping,
                     this->PlayDirection <= 0.0 && this->PlayDirection != 0.0);
  if (cVar9 != '\0') {
    *(undefined8 *)(pFVar4 + lVar11 + 0x80) = local_108;
    *(undefined8 *)(pFVar4 + lVar11 + 0x80 + 8) = uStack_100;
    *(undefined8 *)(pFVar4 + lVar11 + 0x90) = local_f8;
    *(undefined8 *)(pFVar4 + lVar11 + 0x90 + 8) = uStack_f0;
    *(undefined8 *)(pFVar4 + lVar11 + 0xa0) = local_e8;
    *(undefined8 *)(pFVar4 + lVar11 + 0xa0 + 8) = uStack_e0;
    *(ulonglong *)(pFVar4 + lVar11 + 0xb0) = CONCAT71(uStack_d7,local_d8);
  }
  if (cVar8 != '\0') {
    *(undefined8 *)(pFVar4 + lVar11) = local_c8;
    *(undefined8 *)(pFVar4 + lVar11 + 8) = uStack_c0;
    *(undefined8 *)(pFVar4 + lVar11 + 0x10) = local_b8;
    *(undefined8 *)(pFVar4 + lVar11 + 0x10 + 8) = uStack_b0;
    *(undefined8 *)(pFVar4 + lVar11 + 0x20) = local_a8;
    *(undefined8 *)(pFVar4 + lVar11 + 0x20 + 8) = uStack_a0;
    *(undefined8 *)(pFVar4 + lVar11 + 0x30) = local_98;
    *(undefined8 *)(pFVar4 + lVar11 + 0x30 + 8) = uStack_90;
    *(undefined8 *)(pFVar4 + lVar11 + 0x40) = local_88;
    *(undefined8 *)(pFVar4 + lVar11 + 0x40 + 8) = uStack_80;
    *(undefined8 *)(pFVar4 + lVar11 + 0x50) = local_78;
    *(undefined8 *)(pFVar4 + lVar11 + 0x50 + 8) = uStack_70;
    *(undefined8 *)(pFVar4 + lVar11 + 0x60) = local_68;
    *(undefined8 *)(pFVar4 + lVar11 + 0x60 + 8) = uStack_60;
    *(undefined8 *)(pFVar4 + lVar11 + 0x70) = local_58;
    *(undefined8 *)(pFVar4 + lVar11 + 0x70 + 8) = uStack_50;
  }
  return cVar8 != '\0' || cVar9 != '\0';
}

// execGetAnimationTime @ 14ca31730

void __cdecl
UGeometryCacheComponent::execGetAnimationTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = *(float *)&param_1[0x23].field_0x24;
  if (__real_46610000 <= *(float *)&param_1[0x23].field_0x24) {
    fVar1 = __real_46610000;
  }
  if (fVar1 <= __real_c6610000) {
    fVar1 = __real_c6610000;
  }
  *(float *)param_3 = fVar1 + *(float *)&param_1[0x24].field_0xc;
  return;
}

// execGetDuration @ 14ca31780

void __cdecl
UGeometryCacheComponent::execGetDuration(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x26].field_0xc;
  return;
}

// execGetElapsedTime @ 14ca317b0

void __cdecl
UGeometryCacheComponent::execGetElapsedTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x24].field_0xc;
  return;
}

// execGetMotionVectorScale @ 14ca31810

void __cdecl
UGeometryCacheComponent::execGetMotionVectorScale(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = *(float *)&param_1[0x24].field_0x4;
  if (__real_42c80000 <= *(float *)&param_1[0x24].field_0x4) {
    fVar1 = __real_42c80000;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  *(float *)param_3 = fVar1;
  return;
}

// execGetNumberOfFrames @ 14ca31850

void __cdecl
UGeometryCacheComponent::execGetNumberOfFrames(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar1 = *(longlong *)&param_1[0x23].field_0x18;
  if (lVar1 != 0) {
    *(int *)param_3 = (*(int *)(lVar1 + 0x94) - *(int *)(lVar1 + 0x90)) + 1;
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetNumberOfTracks @ 14ca31890

void __cdecl
UGeometryCacheComponent::execGetNumberOfTracks(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0x23].field_0x18 != 0) {
    *(undefined4 *)param_3 = *(undefined4 *)(*(longlong *)&param_1[0x23].field_0x18 + 0x58);
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetOverrideWireframeColor @ 14ca318d0

void __cdecl
UGeometryCacheComponent::execGetOverrideWireframeColor
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x26].field_0x11;
  return;
}

// execGetPlaybackDirection @ 14ca31900

void __cdecl
UGeometryCacheComponent::execGetPlaybackDirection(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x26].field_0x8;
  return;
}

// execGetPlaybackSpeed @ 14ca31930

void __cdecl
UGeometryCacheComponent::execGetPlaybackSpeed(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = *(float *)(param_1 + 0x24);
  if (__real_44000000 <= *(float *)(param_1 + 0x24)) {
    fVar1 = __real_44000000;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  *(float *)param_3 = fVar1;
  return;
}

// execGetStartTimeOffset @ 14ca31970

void __cdecl
UGeometryCacheComponent::execGetStartTimeOffset(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x23].field_0x24;
  return;
}

// execGetWireframeOverrideColor @ 14ca319a0

void __cdecl
UGeometryCacheComponent::execGetWireframeOverrideColor
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = *(undefined8 *)&param_1[0x26].field_0x1c;
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x26].field_0x14;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  return;
}

// execIsExtrapolatingFrames @ 14ca319d0

void __cdecl
UGeometryCacheComponent::execIsExtrapolatingFrames(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x23].field_0x22;
  return;
}

// execIsLooping @ 14ca31a00

void __cdecl UGeometryCacheComponent::execIsLooping(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x23].field_0x21;
  return;
}

// execIsPlaying @ 14ca31a30

void __cdecl UGeometryCacheComponent::execIsPlaying(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x23].field_0x20;
  return;
}

// execIsPlayingReversed @ 14ca31a60

void __cdecl
UGeometryCacheComponent::execIsPlayingReversed(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 =
       (float)((uint)(*(float *)&param_1[0x26].field_0x8 - __real_bf800000) &
              __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77;
  return;
}

// execPause @ 14ca31aa0

void __cdecl UGeometryCacheComponent::execPause(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x23].field_0x20 = param_1[0x23].field_0x20 == '\0';
  return;
}

// execPlay @ 14ca31ad0

void __cdecl UGeometryCacheComponent::execPlay(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  IGeometryCacheStreamingManager *pIVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x23].field_0x20 = 1;
  *(undefined4 *)&param_1[0x26].field_0x8 = 0x3f800000;
  pIVar1 = IGeometryCacheStreamingManager::Get();
  UNRECOVERED_JUMPTABLE = *(code **)(pIVar1->_padding_ + 200);
                    /* WARNING: Could not recover jumptable at 0x00014ca31b19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pIVar1,param_1,UNRECOVERED_JUMPTABLE);
  return;
}

// execPlayFromStart @ 14ca31b30

void __cdecl
UGeometryCacheComponent::execPlayFromStart(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  IGeometryCacheStreamingManager *pIVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[0x24].field_0xc = 0;
  param_1[0x23].field_0x20 = 1;
  *(undefined4 *)&param_1[0x26].field_0x8 = 0x3f800000;
  pIVar1 = IGeometryCacheStreamingManager::Get();
  UNRECOVERED_JUMPTABLE = *(code **)(pIVar1->_padding_ + 200);
                    /* WARNING: Could not recover jumptable at 0x00014ca31b81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pIVar1,param_1,UNRECOVERED_JUMPTABLE);
  return;
}

// execPlayReversed @ 14ca31b90

void __cdecl
UGeometryCacheComponent::execPlayReversed(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  IGeometryCacheStreamingManager *pIVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[0x26].field_0x8 = 0xbf800000;
  param_1[0x23].field_0x20 = 1;
  pIVar1 = IGeometryCacheStreamingManager::Get();
  UNRECOVERED_JUMPTABLE = *(code **)(pIVar1->_padding_ + 200);
                    /* WARNING: Could not recover jumptable at 0x00014ca31bd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pIVar1,param_1,UNRECOVERED_JUMPTABLE);
  return;
}

// execPlayReversedFromEnd @ 14ca31bf0

void __cdecl
UGeometryCacheComponent::execPlayReversedFromEnd(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  IGeometryCacheStreamingManager *pIVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[0x24].field_0xc = *(undefined4 *)&param_1[0x26].field_0xc;
  *(undefined4 *)&param_1[0x26].field_0x8 = 0xbf800000;
  param_1[0x23].field_0x20 = 1;
  pIVar1 = IGeometryCacheStreamingManager::Get();
  UNRECOVERED_JUMPTABLE = *(code **)(pIVar1->_padding_ + 200);
                    /* WARNING: Could not recover jumptable at 0x00014ca31c45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pIVar1,param_1,UNRECOVERED_JUMPTABLE);
  return;
}

// execSetExtrapolateFrames @ 14ca31c50

void __cdecl
UGeometryCacheComponent::execSetExtrapolateFrames(UObject *param_1,FFrame *param_2,void *param_3)

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
  param_1[0x23].field_0x22 = local_res8[0] != 0;
  return;
}

// execSetGeometryCache @ 14ca31ce0

void __cdecl
UGeometryCacheComponent::execSetGeometryCache(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  UGeometryCache *local_res10;
  
  local_res10 = (UGeometryCache *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SetGeometryCache((UGeometryCacheComponent *)param_1,local_res10);
  *(bool *)param_3 = bVar2;
  return;
}

// execSetLooping @ 14ca31d80

void __cdecl UGeometryCacheComponent::execSetLooping(UObject *param_1,FFrame *param_2,void *param_3)

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
  param_1[0x23].field_0x21 = local_res8[0] != 0;
  return;
}

// execSetMotionVectorScale @ 14ca321d0

void __cdecl
UGeometryCacheComponent::execSetMotionVectorScale(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res8 [2];
  
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  if (__real_42c80000 <= local_res8[0]) {
    local_res8[0] = __real_42c80000;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res8[0] <= 0.0) {
    local_res8[0] = 0.0;
  }
  *(float *)&param_1[0x24].field_0x4 = local_res8[0];
  return;
}

// execSetOverrideWireframeColor @ 14ca32270

void __cdecl
UGeometryCacheComponent::execSetOverrideWireframeColor
          (UObject *param_1,FFrame *param_2,void *param_3)

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
  param_1[0x26].field_0x11 = local_res8[0] != 0;
  return;
}

// execSetPlaybackSpeed @ 14ca32300

void __cdecl
UGeometryCacheComponent::execSetPlaybackSpeed(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res8 [2];
  
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  if (__real_44000000 <= local_res8[0]) {
    local_res8[0] = __real_44000000;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res8[0] <= 0.0) {
    local_res8[0] = 0.0;
  }
  *(float *)(param_1 + 0x24) = local_res8[0];
  return;
}

// execSetStartTimeOffset @ 14ca323a0

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
UGeometryCacheComponent::execSetStartTimeOffset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res8 [2];
  
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (__real_322bcc77 <
      (float)((uint)(*(float *)&param_1[0x23].field_0x24 - local_res8[0]) &
             __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    *(float *)&param_1[0x23].field_0x24 = local_res8[0];
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetWireframeOverrideColor @ 14ca32450

void __cdecl
UGeometryCacheComponent::execSetWireframeOverrideColor
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)&param_1[0x26].field_0x14 = local_18;
  *(undefined8 *)&param_1[0x26].field_0x1c = uStack_10;
  return;
}

// execStop @ 14ca324d0

void __cdecl UGeometryCacheComponent::execStop(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x23].field_0x20 = 0;
  return;
}

// execTickAtThisTime @ 14ca32500

void __cdecl
UGeometryCacheComponent::execTickAtThisTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  bool bVar3;
  int local_res8 [2];
  int local_res10 [4];
  int local_res20 [2];
  float local_38 [4];
  
  local_38[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
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
  bVar2 = local_res8[0] != 0;
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar3 = local_res10[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((param_1[0x26].field_0x10 != '\0') && (*(longlong *)&param_1[0x23].field_0x18 != 0)) &&
     (param_1[0x23].field_0x20 != '\0')) {
    JumpAnimationToTime((UGeometryCacheComponent *)param_1,local_38[0],bVar2,bVar3,
                        local_res20[0] != 0);
  }
  return;
}

