// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 23

// StaticClass @ 14e6d81c0

UClass * __cdecl UInterchangeGeometryCacheFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeGeometryCacheFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeGeometryCacheFactory",
               &Z_Registration_Info_UClass_UInterchangeGeometryCacheFactory.InnerSingleton,
               StaticRegisterNativesUInterchangeGeometryCacheFactory,0x98,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeGeometryCacheFactory>,
               InternalVTableHelperCtorCaller<UInterchangeGeometryCacheFactory>,local_res8,
               UInterchangeFactoryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeGeometryCacheFactory.InnerSingleton;
}

// <lambda_1> @ 14e6dfbc0

<lambda_1> * __thiscall
`UInterchangeGeometryCacheFactory::CreatePayloadTasks'::__l12::<lambda_1>::<lambda_1>
          (void *this,<lambda_1> *param_1)

{
  int iVar1;
  FAnimationPayloadQuery *pFVar2;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->SingleQuery).ArrayNum;
  pFVar2 = (FAnimationPayloadQuery *)(param_1->SingleQuery).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    ConstructItems<UE::Interchange::FAnimationPayloadQuery,UE::Interchange::FAnimationPayloadQuery,int>
              (*(void **)this,pFVar2,iVar1);
  }
  *(TMap<FString,UE::Interchange::FAnimationPayloadData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Interchange::FAnimationPayloadData,0>_>
    **)((longlong)this + 0x10) = param_1->TransformAnimationPayloadResults;
  *(IInterchangeAnimationPayloadInterface **)((longlong)this + 0x18) =
       param_1->AnimSequenceTranslatorPayloadInterface;
  return this;
}

// UInterchangeGeometryCacheFactory @ 14e6e0820

UInterchangeGeometryCacheFactory * __thiscall
UInterchangeGeometryCacheFactory::UInterchangeGeometryCacheFactory
          (UInterchangeGeometryCacheFactory *this,FVTableHelper *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeGeometryCacheFactory__6B_;
  (this->Tracks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tracks).ArrayNum = 0;
  (this->Tracks).ArrayMax = 0;
  (this->ResetAssetOnReimport).Ptr = (FGeometryCacheComponentResetAsset *)0x0;
  *(undefined8 *)&this->TransformAnimationPayloadResults = 0;
  *(undefined8 *)&(this->TransformAnimationPayloadResults).field_0x8 = 0;
  *(undefined8 *)&(this->TransformAnimationPayloadResults).field_0x20 = 0;
  *(undefined4 *)&(this->TransformAnimationPayloadResults).field_0x28 = 0;
  *(undefined4 *)&(this->TransformAnimationPayloadResults).field_0x2c = 0x80;
  *(undefined4 *)&(this->TransformAnimationPayloadResults).field_0x34 = 0;
  *(undefined4 *)&(this->TransformAnimationPayloadResults).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TransformAnimationPayloadResults).field_0x40 = 0;
  *(undefined4 *)&(this->TransformAnimationPayloadResults).field_0x48 = 0;
  return this;
}

// UInterchangeGeometryCacheFactory @ 14e6e0890

UInterchangeGeometryCacheFactory * __thiscall
UInterchangeGeometryCacheFactory::UInterchangeGeometryCacheFactory
          (UInterchangeGeometryCacheFactory *this,FObjectInitializer *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeGeometryCacheFactory__6B_;
  (this->Tracks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tracks).ArrayNum = 0;
  (this->Tracks).ArrayMax = 0;
  (this->ResetAssetOnReimport).Ptr = (FGeometryCacheComponentResetAsset *)0x0;
  *(undefined8 *)&this->TransformAnimationPayloadResults = 0;
  *(undefined8 *)&(this->TransformAnimationPayloadResults).field_0x8 = 0;
  *(undefined8 *)&(this->TransformAnimationPayloadResults).field_0x20 = 0;
  *(undefined4 *)&(this->TransformAnimationPayloadResults).field_0x28 = 0;
  *(undefined4 *)&(this->TransformAnimationPayloadResults).field_0x2c = 0x80;
  *(undefined4 *)&(this->TransformAnimationPayloadResults).field_0x34 = 0;
  *(undefined4 *)&(this->TransformAnimationPayloadResults).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TransformAnimationPayloadResults).field_0x40 = 0;
  *(undefined4 *)&(this->TransformAnimationPayloadResults).field_0x48 = 0;
  return this;
}

// ~UInterchangeGeometryCacheFactory @ 14e6e1560

void __thiscall
UInterchangeGeometryCacheFactory::~UInterchangeGeometryCacheFactory
          (UInterchangeGeometryCacheFactory *this)

{
  void *pvVar1;
  FGeometryCacheComponentResetAsset *pFVar2;
  FScriptContainerElement *pFVar3;
  
  this->_padding_ = (longlong)&___7UInterchangeGeometryCacheFactory__6B_;
  *(undefined4 *)&(this->TransformAnimationPayloadResults).field_0x48 = 0;
  pvVar1 = *(void **)&(this->TransformAnimationPayloadResults).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,UE::Interchange::FAnimationPayloadData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,UE::Interchange::FAnimationPayloadData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,UE::Interchange::FAnimationPayloadData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TransformAnimationPayloadResults);
  pFVar2 = (this->ResetAssetOnReimport).Ptr;
  if (pFVar2 != (FGeometryCacheComponentResetAsset *)0x0) {
    (*(code *)pFVar2[-1].GeometryCacheComponents.AllocatorInstance.Data)
              (&pFVar2[-1].GeometryCacheComponents);
  }
  pFVar3 = (this->Tracks).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  UInterchangeFactoryBase::~UInterchangeFactoryBase((UInterchangeFactoryBase *)this);
  return;
}

// operator() @ 14e6e3a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UGeometryCacheTrackStreamable * __thiscall
`UInterchangeGeometryCacheFactory::BeginImportAsset_GameThread'::__l2::<lambda_1>::operator()
          (void *this,FString *param_1,bool param_2)

{
  FName FVar1;
  UObject *pUVar2;
  FString *pFVar3;
  FName *pFVar4;
  FName FVar5;
  UClass *pUVar6;
  UGeometryCacheTrackStreamable *pUVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  FName local_f8;
  FName local_f0;
  FName local_e8;
  FString local_e0;
  FString local_d0;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  pFVar3 = ::FString::FString(&local_d0,L"_Codec");
  ::FString::ConcatFF(&local_e0,param_1,pFVar3);
  iVar9 = local_e0.Data.ArrayNum + -1;
  if (local_e0.Data.ArrayNum == 0) {
    iVar9 = 0;
  }
  pFVar4 = ::FName::FName(&local_e8,iVar9,(wchar_t *)local_e0.Data.AllocatorInstance.Data,FNAME_Add)
  ;
  FVar1 = *pFVar4;
  FVar5 = (FName)Z_Construct_UClass_UGeometryCacheCodecV1_NoRegister();
  local_108 = 0;
  MakeUniqueObjectName
            ((UObject *)&local_f8,*(UClass **)this,FVar5,FVar1.ComparisonIndex.Value.Value);
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  pUVar2 = *(UObject **)this;
  if (local_f8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (pUVar2,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar6 = Z_Construct_UClass_UGeometryCacheCodecV1_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar6);
  local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_b8._56_8_ = (UPackage *)0x0;
  local_b8._16_4_ = local_f8.ComparisonIndex.Value;
  local_b8._20_4_ = local_f8.Number;
  local_b8._24_4_ = RF_Public;
  local_b8._40_8_ = (UObject *)0x0;
  local_b8[0x20] = false;
  local_b8._8_8_ = pUVar2;
  StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar8 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  iVar9 = (param_1->Data).ArrayNum;
  iVar10 = iVar9 + -1;
  if (iVar9 == 0) {
    iVar10 = 0;
  }
  pFVar4 = ::FName::FName(&local_e8,iVar10,(wchar_t *)(param_1->Data).AllocatorInstance.Data,
                          FNAME_Add);
  FVar1 = *pFVar4;
  FVar5 = (FName)Z_Construct_UClass_UGeometryCacheTrackStreamable_NoRegister();
  local_108 = 0;
  MakeUniqueObjectName
            ((UObject *)&local_f0,*(UClass **)this,FVar5,FVar1.ComparisonIndex.Value.Value);
  pUVar2 = *(UObject **)this;
  if (local_f0 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (pUVar2,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar6 = Z_Construct_UClass_UGeometryCacheTrackStreamable_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar6);
  local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_b8._56_8_ = (UPackage *)0x0;
  local_b8._16_4_ = local_f0.ComparisonIndex.Value;
  local_b8._20_4_ = local_f0.Number;
  local_b8._24_4_ = RF_Public;
  local_b8._40_8_ = (UObject *)0x0;
  local_b8[0x20] = false;
  local_b8._8_8_ = pUVar2;
  pUVar7 = (UGeometryCacheTrackStreamable *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar8 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  return pUVar7;
}

// operator() @ 14e6e4030

void __thiscall
`UInterchangeGeometryCacheFactory::CreatePayloadTasks'::__l12::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  TTuple<FString,UE::Interchange::FAnimationPayloadData> *pTVar4;
  FAnimationPayloadData *pFVar5;
  FAnimationPayloadData *pFVar6;
  bool bVar7;
  undefined1 local_res8 [8];
  FAnimationPayloadData *local_28;
  int local_20;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId122,
               "UInterchangeGeometryCacheFactory::GetAnimationPayloadSingleQuery",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangeGeometryCacheFactory.cpp"
               ,0x7a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId122);
  }
  (**(code **)(**(longlong **)((longlong)this + 0x18) + 0x18))
            (*(longlong **)((longlong)this + 0x18),&local_28,this);
  iVar2 = local_20;
  pFVar5 = local_28 + local_20;
  pFVar6 = local_28;
  while( true ) {
    if (local_20 != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Interchange::FAnimationPayloadData,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar5) break;
    pTVar4 = TSet<TTuple<FString,UE::Interchange::FAnimationPayloadData>,TDefaultMapHashableKeyFuncs<FString,UE::Interchange::FAnimationPayloadData,0>,FDefaultSetAllocator>
             ::Find(*(TSet<TTuple<FString,UE::Interchange::FAnimationPayloadData>,TDefaultMapHashableKeyFuncs<FString,UE::Interchange::FAnimationPayloadData,0>,FDefaultSetAllocator>
                      **)((longlong)this + 0x10),&pFVar6->SceneNodeUniqueID);
    if ((pTVar4 == (TTuple<FString,UE::Interchange::FAnimationPayloadData> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UE::Interchange::FAnimationPayloadData::operator=
              ((FAnimationPayloadData *)&pTVar4->field_0x10,pFVar6);
    pFVar6 = pFVar6 + 1;
  }
  DestructItems<UE::Interchange::FAnimationPayloadData,int>(local_28,local_20);
  if (local_28 != (FAnimationPayloadData *)0x0) {
    FMemory::Free(local_28);
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 14e6e4880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FGeometryCacheMeshData,TSizedDefaultAllocator<32>_> * __thiscall
`UInterchangeGeometryCacheFactory::BeginImportAsset_GameThread'::__l189::<lambda_3>::operator()
          (void *this,
          TArray<FGeometryCacheMeshData,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          int param_1,TArray<FMeshDescription,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  uint uVar4;
  TArray<FGeometryCacheMeshData,TSizedDefaultAllocator<32>_> *pTVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  size_t _Size;
  undefined1 auStackY_5f8 [32];
  TArray<FMeshDescription_const_*,TSizedDefaultAllocator<32>_> local_5a8;
  FScriptContainerElement *local_598;
  FMeshDataConversionArguments local_590;
  FDestructionSentinel local_580;
  FGeometryCacheMeshData local_568;
  FGeometryCacheMeshData local_488;
  undefined1 local_3a8 [8];
  ForAnyElementType local_3a0;
  int local_398;
  undefined2 local_390;
  undefined8 local_38e;
  TVector<double>_u_0 local_380 [5];
  bool local_308;
  FMeshDescription local_2f8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_5f8;
  if (param_2->ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<FGeometryCacheMeshData,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  FMeshDescription::FMeshDescription
            (&local_2f8,(FMeshDescription *)(param_2->AllocatorInstance).Data);
  uVar8 = param_2->ArrayNum;
  local_5a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5a8.ArrayNum = 0;
  local_5a8.ArrayMax = 0;
  if (-1 < (int)uVar8) {
    if (0 < (int)uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar8,&local_5a8.AllocatorInstance,0,&local_5a8.ArrayMax);
    }
    iVar7 = param_2->ArrayNum;
    uVar8 = 1;
    if (1 < iVar7) {
      do {
        uVar4 = 0;
        if ((int)uVar8 < iVar7) {
          uVar4 = ~uVar8 >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            pTVar5 = (TArray<FGeometryCacheMeshData,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
            return pTVar5;
          }
        }
        local_598 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x2c0;
        if ((local_5a8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_598) &&
           ((FScriptContainerElement *)&local_598 <
            local_5a8.AllocatorInstance.Data + (longlong)local_5a8.ArrayMax * 8)) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            pTVar5 = (TArray<FGeometryCacheMeshData,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
            return pTVar5;
          }
        }
        if (local_5a8.ArrayNum == local_5a8.ArrayMax) {
          local_5a8.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_5a8.AllocatorInstance,&local_5a8.ArrayMax);
        }
        lVar6 = (longlong)local_5a8.ArrayNum;
        uVar8 = uVar8 + 1;
        local_5a8.ArrayNum = local_5a8.ArrayNum + 1;
        *(FScriptContainerElement **)(local_5a8.AllocatorInstance.Data + lVar6 * 8) = local_598;
        iVar7 = param_2->ArrayNum;
      } while ((int)uVar8 < iVar7);
    }
    local_3a8 = (undefined1  [8])0x0;
    local_3a0.Data = (FScriptContainerElement *)0x0;
    local_380[0]._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_380[0]._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_398 = 0;
    local_380[0]._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_390._0_1_ = true;
    local_390._1_1_ = true;
    local_38e._0_1_ = false;
    local_38e._1_1_ = false;
    local_38e._2_1_ = false;
    local_38e._3_1_ = false;
    local_38e._4_1_ = false;
    local_38e._5_1_ = false;
    local_38e._6_1_ = false;
    local_38e._7_1_ = false;
    local_308 = false;
    FStaticMeshOperations::AppendMeshDescriptions
              (&local_5a8,&local_2f8,(FAppendSettings *)local_3a8);
    local_590.bUseVelocitiesAsMotionVectors = *(bool *)((longlong)this + 8);
    local_590.FramesPerSecond = (float)*(double *)this;
    local_590.bStoreImportedVertexNumbers = *(bool *)((longlong)this + 9);
    local_590.MaterialOffset = 0;
    local_568.Positions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_568.Positions.ArrayNum = 0;
    local_568.Positions.ArrayMax = 0;
    local_568.BoundingBox.Min.field0_0x0._0_8_ = 0;
    local_568.BoundingBox._8_8_ = 0;
    local_568.TextureCoordinates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_568.TextureCoordinates.ArrayNum = 0;
    local_568.TextureCoordinates.ArrayMax = 0;
    local_568.TangentsX.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_568.TangentsX.ArrayNum = 0;
    local_568.TangentsX.ArrayMax = 0;
    local_568.TangentsZ.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_568.TangentsZ.ArrayNum = 0;
    local_568.TangentsZ.ArrayMax = 0;
    local_568.Colors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_568.Colors.ArrayNum = 0;
    local_568.Colors.ArrayMax = 0;
    local_568.ImportedVertexNumbers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_568.ImportedVertexNumbers.ArrayNum = 0;
    local_568.ImportedVertexNumbers.ArrayMax = 0;
    local_568.MotionVectors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_568.MotionVectors.ArrayNum = 0;
    local_568.MotionVectors.ArrayMax = 0;
    local_568.BatchesInfo.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_568.BatchesInfo.ArrayNum = 0;
    local_568.BatchesInfo.ArrayMax = 0;
    local_568.BoundingBox.Max.field0_0x0._4_8_ = 0;
    local_568.BoundingBox.IsValid = '\0';
    local_568.BoundingBox.Pad[0] = '\0';
    local_568.BoundingBox.Pad[1] = '\0';
    local_568.BoundingBox.Pad[2] = '\0';
    local_568.Indices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_568.Indices.ArrayNum = 0;
    local_568.Indices.ArrayMax = 0;
    local_568.VertexInfo.bHasTangentX = false;
    local_568.VertexInfo.bHasTangentZ = false;
    local_568.VertexInfo.bHasUV0 = false;
    local_568.VertexInfo.bHasColor0 = false;
    local_568.VertexInfo.bHasMotionVectors = false;
    local_568.VertexInfo.bHasImportedVertexNumbers = false;
    local_568.VertexInfo.bConstantUV0 = false;
    local_568.VertexInfo.bConstantColor0 = false;
    local_568.VertexInfo.bConstantIndices = false;
    local_568.TempBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_568.TempBytes.ArrayNum = 0;
    local_568.TempBytes.ArrayMax = 0;
    local_568.Hash = 0;
    UE::GeometryCache::Utils::GetGeometryCacheMeshDataFromMeshDescription
              (&local_568,&local_2f8,&local_590);
    FVar2.Data = local_568.Positions.AllocatorInstance.Data;
    lVar6 = (longlong)local_568.Positions.ArrayNum;
    local_488.Positions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_488.Positions.ArrayNum = local_568.Positions.ArrayNum;
    if (local_568.Positions.ArrayNum == 0) {
      local_488.Positions.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,local_568.Positions.ArrayNum,0,(ForAnyElementType *)&local_488,
                 local_568.Positions.ArrayNum,&local_488.Positions.ArrayMax);
      memcpy(local_488.Positions.AllocatorInstance.Data,FVar2.Data,lVar6 * 0xc);
    }
    FVar2.Data = local_568.TextureCoordinates.AllocatorInstance.Data;
    lVar6 = (longlong)local_568.TextureCoordinates.ArrayNum;
    local_488.TextureCoordinates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_488.TextureCoordinates.ArrayNum = local_568.TextureCoordinates.ArrayNum;
    if (local_568.TextureCoordinates.ArrayNum == 0) {
      local_488.TextureCoordinates.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,local_568.TextureCoordinates.ArrayNum,0,
                 &local_488.TextureCoordinates.AllocatorInstance,
                 local_568.TextureCoordinates.ArrayNum,&local_488.TextureCoordinates.ArrayMax);
      memcpy(local_488.TextureCoordinates.AllocatorInstance.Data,FVar2.Data,lVar6 << 3);
    }
    FVar2.Data = local_568.TangentsX.AllocatorInstance.Data;
    lVar6 = (longlong)local_568.TangentsX.ArrayNum;
    local_488.TangentsX.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_488.TangentsX.ArrayNum = local_568.TangentsX.ArrayNum;
    if (local_568.TangentsX.ArrayNum == 0) {
      local_488.TangentsX.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_568.TangentsX.ArrayNum,0,&local_488.TangentsX.AllocatorInstance,
                 local_568.TangentsX.ArrayNum,&local_488.TangentsX.ArrayMax);
      memcpy(local_488.TangentsX.AllocatorInstance.Data,FVar2.Data,lVar6 << 2);
    }
    FVar2.Data = local_568.TangentsZ.AllocatorInstance.Data;
    lVar6 = (longlong)local_568.TangentsZ.ArrayNum;
    local_488.TangentsZ.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_488.TangentsZ.ArrayNum = local_568.TangentsZ.ArrayNum;
    if (local_568.TangentsZ.ArrayNum == 0) {
      local_488.TangentsZ.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_568.TangentsZ.ArrayNum,0,&local_488.TangentsZ.AllocatorInstance,
                 local_568.TangentsZ.ArrayNum,&local_488.TangentsZ.ArrayMax);
      memcpy(local_488.TangentsZ.AllocatorInstance.Data,FVar2.Data,lVar6 << 2);
    }
    FVar2.Data = local_568.Colors.AllocatorInstance.Data;
    lVar6 = (longlong)local_568.Colors.ArrayNum;
    local_488.Colors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_488.Colors.ArrayNum = local_568.Colors.ArrayNum;
    if (local_568.Colors.ArrayNum == 0) {
      local_488.Colors.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_568.Colors.ArrayNum,0,&local_488.Colors.AllocatorInstance,
                 local_568.Colors.ArrayNum,&local_488.Colors.ArrayMax);
      memcpy(local_488.Colors.AllocatorInstance.Data,FVar2.Data,lVar6 << 2);
    }
    FVar2.Data = local_568.ImportedVertexNumbers.AllocatorInstance.Data;
    lVar6 = (longlong)local_568.ImportedVertexNumbers.ArrayNum;
    local_488.ImportedVertexNumbers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_488.ImportedVertexNumbers.ArrayNum = local_568.ImportedVertexNumbers.ArrayNum;
    if (local_568.ImportedVertexNumbers.ArrayNum == 0) {
      local_488.ImportedVertexNumbers.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_568.ImportedVertexNumbers.ArrayNum,0,
                 &local_488.ImportedVertexNumbers.AllocatorInstance,
                 local_568.ImportedVertexNumbers.ArrayNum,&local_488.ImportedVertexNumbers.ArrayMax)
      ;
      memcpy(local_488.ImportedVertexNumbers.AllocatorInstance.Data,FVar2.Data,lVar6 << 2);
    }
    FVar2.Data = local_568.MotionVectors.AllocatorInstance.Data;
    lVar6 = (longlong)local_568.MotionVectors.ArrayNum;
    local_488.MotionVectors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_488.MotionVectors.ArrayNum = local_568.MotionVectors.ArrayNum;
    if (local_568.MotionVectors.ArrayNum == 0) {
      local_488.MotionVectors.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,local_568.MotionVectors.ArrayNum,0,&local_488.MotionVectors.AllocatorInstance
                 ,local_568.MotionVectors.ArrayNum,&local_488.MotionVectors.ArrayMax);
      memcpy(local_488.MotionVectors.AllocatorInstance.Data,FVar2.Data,lVar6 * 0xc);
    }
    FVar2.Data = local_568.BatchesInfo.AllocatorInstance.Data;
    lVar6 = (longlong)local_568.BatchesInfo.ArrayNum;
    local_488.BatchesInfo.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_488.BatchesInfo.ArrayNum = local_568.BatchesInfo.ArrayNum;
    if (local_568.BatchesInfo.ArrayNum == 0) {
      local_488.BatchesInfo.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,local_568.BatchesInfo.ArrayNum,0,&local_488.BatchesInfo.AllocatorInstance,
                 local_568.BatchesInfo.ArrayNum,&local_488.BatchesInfo.ArrayMax);
      memcpy(local_488.BatchesInfo.AllocatorInstance.Data,FVar2.Data,lVar6 * 0xc);
    }
    FVar2.Data = local_568.Indices.AllocatorInstance.Data;
    lVar6 = (longlong)local_568.Indices.ArrayNum;
    local_488.BoundingBox.Min.field0_0x0._0_8_ = local_568.BoundingBox.Min.field0_0x0._0_8_;
    local_488.BoundingBox._8_8_ = local_568.BoundingBox._8_8_;
    local_488.BoundingBox.Max.field0_0x0._4_8_ = local_568.BoundingBox.Max.field0_0x0._4_8_;
    local_488.BoundingBox.IsValid = local_568.BoundingBox.IsValid;
    local_488.BoundingBox.Pad[0] = local_568.BoundingBox.Pad[0];
    local_488.BoundingBox.Pad[1] = local_568.BoundingBox.Pad[1];
    local_488.BoundingBox.Pad[2] = local_568.BoundingBox.Pad[2];
    local_488.Indices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_488.Indices.ArrayNum = local_568.Indices.ArrayNum;
    if (local_568.Indices.ArrayNum == 0) {
      local_488.Indices.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_568.Indices.ArrayNum,0,&local_488.Indices.AllocatorInstance,
                 local_568.Indices.ArrayNum,&local_488.Indices.ArrayMax);
      memcpy(local_488.Indices.AllocatorInstance.Data,FVar2.Data,lVar6 << 2);
    }
    FVar2.Data = local_568.TempBytes.AllocatorInstance.Data;
    _Size = (size_t)local_568.TempBytes.ArrayNum;
    local_488.VertexInfo.bHasTangentX = local_568.VertexInfo.bHasTangentX;
    local_488.VertexInfo.bHasTangentZ = local_568.VertexInfo.bHasTangentZ;
    local_488.VertexInfo.bHasUV0 = local_568.VertexInfo.bHasUV0;
    local_488.VertexInfo.bHasColor0 = local_568.VertexInfo.bHasColor0;
    local_488.VertexInfo.bHasMotionVectors = local_568.VertexInfo.bHasMotionVectors;
    local_488.VertexInfo.bHasImportedVertexNumbers = local_568.VertexInfo.bHasImportedVertexNumbers;
    local_488.VertexInfo.bConstantUV0 = local_568.VertexInfo.bConstantUV0;
    local_488.VertexInfo.bConstantColor0 = local_568.VertexInfo.bConstantColor0;
    local_488.VertexInfo.bConstantIndices = local_568.VertexInfo.bConstantIndices;
    local_488.TempBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_488.TempBytes.ArrayNum = local_568.TempBytes.ArrayNum;
    if (local_568.TempBytes.ArrayNum == 0) {
      local_488.TempBytes.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_568.TempBytes.ArrayNum,0,&local_488.TempBytes.AllocatorInstance,
                 local_568.TempBytes.ArrayNum,&local_488.TempBytes.ArrayMax);
      memcpy(local_488.TempBytes.AllocatorInstance.Data,FVar2.Data,_Size);
    }
    local_488.Hash = local_568.Hash;
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xd8,8,1,0,&__return_storage_ptr__->AllocatorInstance,1,
               &__return_storage_ptr__->ArrayMax);
    ConstructItems<FGeometryCacheMeshData,FGeometryCacheMeshData,int>
              ((__return_storage_ptr__->AllocatorInstance).Data,&local_488,1);
    if (local_488.TempBytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_488.TempBytes.AllocatorInstance.Data);
    }
    if (local_488.Indices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_488.Indices.AllocatorInstance.Data);
    }
    if (local_488.BatchesInfo.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_488.BatchesInfo.AllocatorInstance.Data);
    }
    if (local_488.MotionVectors.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_488.MotionVectors.AllocatorInstance.Data);
    }
    if (local_488.ImportedVertexNumbers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_488.ImportedVertexNumbers.AllocatorInstance.Data);
    }
    if (local_488.Colors.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_488.Colors.AllocatorInstance.Data);
    }
    if (local_488.TangentsZ.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_488.TangentsZ.AllocatorInstance.Data);
    }
    if (local_488.TangentsX.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_488.TangentsX.AllocatorInstance.Data);
    }
    if (local_488.TextureCoordinates.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_488.TextureCoordinates.AllocatorInstance.Data);
    }
    if (local_488.Positions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_488.Positions.AllocatorInstance.Data);
    }
    if (local_568.TempBytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_568.TempBytes.AllocatorInstance.Data);
    }
    if (local_568.Indices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_568.Indices.AllocatorInstance.Data);
    }
    if (local_568.BatchesInfo.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_568.BatchesInfo.AllocatorInstance.Data);
    }
    if (local_568.MotionVectors.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_568.MotionVectors.AllocatorInstance.Data);
    }
    if (local_568.ImportedVertexNumbers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_568.ImportedVertexNumbers.AllocatorInstance.Data);
    }
    if (local_568.Colors.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_568.Colors.AllocatorInstance.Data);
    }
    if (local_568.TangentsZ.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_568.TangentsZ.AllocatorInstance.Data);
    }
    if (local_568.TangentsX.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_568.TangentsX.AllocatorInstance.Data);
    }
    if (local_568.TextureCoordinates.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_568.TextureCoordinates.AllocatorInstance.Data);
    }
    if (local_568.Positions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_568.Positions.AllocatorInstance.Data);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3a8,
               (FWriteAccessScope *)&local_580);
    if ((local_398 != 0) && (local_3a0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_3a0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_3a0,0,0,0x10);
      local_398 = 0;
    }
    if (local_580.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_580.Accessor,&local_580);
    }
    if (local_3a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_3a8);
    if (local_5a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5a8.AllocatorInstance.Data);
    }
    FMeshDescription::~FMeshDescription(&local_2f8);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
}

// operator() @ 14e6e5210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FGeometryCacheMeshData,TSizedDefaultAllocator<32>_> * __thiscall
`UInterchangeGeometryCacheFactory::BeginImportAsset_GameThread'::__l191::<lambda_4>::operator()
          (void *this,
          TArray<FGeometryCacheMeshData,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          int param_1,TArray<FMeshDescription,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FGeometryCacheMeshData *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  TArray<FMeshDescription,TSizedDefaultAllocator<32>_> *pTVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  TArray<FGeometryCacheMeshData,TSizedDefaultAllocator<32>_> *pTVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  size_t _Size;
  uint uVar15;
  undefined1 auStackY_288 [32];
  int local_238;
  FMeshDataConversionArguments local_230;
  longlong *local_220;
  longlong local_218;
  TArray<FMeshDescription,TSizedDefaultAllocator<32>_> *local_210;
  FGeometryCacheMeshData local_208;
  FGeometryCacheMeshData local_128;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_288;
  uVar15 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar9 = *(uint *)(*(longlong *)this + 8);
  local_220 = this;
  local_210 = param_2;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  if (0 < (int)uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xd8,8,uVar9,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  local_238 = 0;
  if (0 < *(int *)(*(longlong *)this + 8)) {
    local_218 = 0;
    do {
      uVar12 = ~uVar15 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar15 < param_2->ArrayNum) {
        uVar9 = uVar12;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TArray<FGeometryCacheMeshData,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar11;
      }
      bVar8 = FMeshDescription::IsEmpty
                        ((FMeshDescription *)
                         ((local_210->AllocatorInstance).Data + (longlong)(int)uVar15 * 0x2c0));
      if (bVar8) {
        pFVar3 = (FGeometryCacheMeshData *)(__return_storage_ptr__->AllocatorInstance).Data;
        local_128.Positions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_128.BoundingBox.Pad[0] = '\0';
        local_128.BoundingBox.Pad[1] = '\0';
        local_128.BoundingBox.Pad[2] = '\0';
        local_128.VertexInfo.bHasTangentX = false;
        local_128.VertexInfo.bHasTangentZ = false;
        local_128.VertexInfo.bHasUV0 = false;
        local_128.VertexInfo.bHasColor0 = false;
        local_128.VertexInfo.bHasMotionVectors = false;
        local_128.VertexInfo.bHasImportedVertexNumbers = false;
        local_128.VertexInfo.bConstantUV0 = false;
        local_128.VertexInfo.bConstantColor0 = false;
        local_128.VertexInfo.bConstantIndices = false;
        local_128.Positions.ArrayNum = 0;
        local_128.Positions.ArrayMax = 0;
        local_128.TextureCoordinates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_128.TextureCoordinates.ArrayNum = 0;
        local_128.TextureCoordinates.ArrayMax = 0;
        local_128.TangentsX.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_128.TangentsX.ArrayNum = 0;
        local_128.TangentsX.ArrayMax = 0;
        local_128.TangentsZ.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_128.TangentsZ.ArrayNum = 0;
        local_128.TangentsZ.ArrayMax = 0;
        local_128.Colors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_128.Colors.ArrayNum = 0;
        local_128.Colors.ArrayMax = 0;
        local_128.ImportedVertexNumbers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_128.ImportedVertexNumbers.ArrayNum = 0;
        local_128.ImportedVertexNumbers.ArrayMax = 0;
        local_128.MotionVectors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_128.MotionVectors.ArrayNum = 0;
        local_128.MotionVectors.ArrayMax = 0;
        local_128.BatchesInfo.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_128.BatchesInfo.ArrayNum = 0;
        local_128.BatchesInfo.ArrayMax = 0;
        local_128.BoundingBox.Min.field0_0x0._0_8_ = 0;
        local_128.BoundingBox._8_8_ = 0;
        local_128.BoundingBox.Max.field0_0x0._4_8_ = 0;
        local_128.BoundingBox.IsValid = '\0';
        local_128.Indices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_128.Indices.ArrayNum = 0;
        local_128.Indices.ArrayMax = 0;
        local_128.TempBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_128.TempBytes.ArrayNum = 0;
        local_128.TempBytes.ArrayMax = 0;
        local_128.Hash = 0;
        if (((pFVar3 <= &local_128) && (&local_128 < pFVar3 + *piVar1)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TArray<FGeometryCacheMeshData,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar11;
        }
        iVar10 = __return_storage_ptr__->ArrayNum;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x8d8,&__return_storage_ptr__->AllocatorInstance,piVar1);
        }
        __return_storage_ptr__->ArrayNum = iVar10 + 1;
        FGeometryCacheMeshData::FGeometryCacheMeshData
                  ((FGeometryCacheMeshData *)
                   ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar10 * 0xd8),
                   &local_128);
        if (local_128.TempBytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.TempBytes.AllocatorInstance.Data);
        }
        if (local_128.Indices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.Indices.AllocatorInstance.Data);
        }
        if (local_128.BatchesInfo.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.BatchesInfo.AllocatorInstance.Data);
        }
        if (local_128.MotionVectors.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.MotionVectors.AllocatorInstance.Data);
        }
        if (local_128.ImportedVertexNumbers.AllocatorInstance.Data != (FScriptContainerElement *)0x0
           ) {
          FMemory::Free(local_128.ImportedVertexNumbers.AllocatorInstance.Data);
        }
        if (local_128.Colors.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.Colors.AllocatorInstance.Data);
        }
        if (local_128.TangentsZ.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.TangentsZ.AllocatorInstance.Data);
        }
        if (local_128.TangentsX.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.TangentsX.AllocatorInstance.Data);
        }
        if (local_128.TextureCoordinates.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.TextureCoordinates.AllocatorInstance.Data);
        }
        if (local_128.Positions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.Positions.AllocatorInstance.Data);
        }
      }
      else {
        plVar4 = *(longlong **)this;
        local_230.MaterialOffset = local_238;
        local_230.FramesPerSecond = 24.0;
        local_230.bUseVelocitiesAsMotionVectors = true;
        local_230.bStoreImportedVertexNumbers = false;
        uVar9 = 0;
        if ((int)uVar15 < (int)plVar4[1]) {
          uVar9 = uVar12;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TArray<FGeometryCacheMeshData,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar11;
        }
        pTVar6 = local_210;
        local_230.FramesPerSecond = (float)*(double *)(*plVar4 + 0xb0 + local_218);
        local_230._8_2_ = *(undefined2 *)(local_220 + 1);
        local_208.Positions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_208.Positions.ArrayNum = 0;
        local_208.Positions.ArrayMax = 0;
        local_208.TextureCoordinates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_208.TextureCoordinates.ArrayNum = 0;
        local_208.TextureCoordinates.ArrayMax = 0;
        local_208.TangentsX.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_208.TangentsX.ArrayNum = 0;
        local_208.TangentsX.ArrayMax = 0;
        local_208.TangentsZ.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_208.TangentsZ.ArrayNum = 0;
        local_208.TangentsZ.ArrayMax = 0;
        local_208.Colors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_208.Colors.ArrayNum = 0;
        local_208.Colors.ArrayMax = 0;
        local_208.ImportedVertexNumbers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_208.ImportedVertexNumbers.ArrayNum = 0;
        local_208.ImportedVertexNumbers.ArrayMax = 0;
        local_208.MotionVectors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_208.MotionVectors.ArrayNum = 0;
        local_208.MotionVectors.ArrayMax = 0;
        local_208.BatchesInfo.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_208.BatchesInfo.ArrayNum = 0;
        local_208.BatchesInfo.ArrayMax = 0;
        local_208.BoundingBox.Max.field0_0x0._4_8_ = 0;
        local_208.Indices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_208.Indices.ArrayNum = 0;
        local_208.Indices.ArrayMax = 0;
        local_208.TempBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_208.TempBytes.ArrayNum = 0;
        local_208.TempBytes.ArrayMax = 0;
        local_208.Hash = 0;
        local_208.BoundingBox.IsValid = '\0';
        local_208.BoundingBox.Pad[0] = '\0';
        local_208.BoundingBox.Pad[1] = '\0';
        local_208.BoundingBox.Pad[2] = '\0';
        local_208.VertexInfo.bHasTangentX = false;
        local_208.VertexInfo.bHasTangentZ = false;
        local_208.VertexInfo.bHasUV0 = false;
        local_208.VertexInfo.bHasColor0 = false;
        local_208.VertexInfo.bHasMotionVectors = false;
        local_208.VertexInfo.bHasImportedVertexNumbers = false;
        local_208.VertexInfo.bConstantUV0 = false;
        local_208.VertexInfo.bConstantColor0 = false;
        local_208.VertexInfo.bConstantIndices = false;
        uVar9 = 0;
        if ((int)uVar15 < local_210->ArrayNum) {
          uVar9 = uVar12;
        }
        local_208.BoundingBox.Min.field0_0x0._0_8_ = 0;
        local_208.BoundingBox._8_8_ = 0;
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TArray<FGeometryCacheMeshData,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar11;
        }
        UE::GeometryCache::Utils::GetGeometryCacheMeshDataFromMeshDescription
                  (&local_208,
                   (FMeshDescription *)
                   ((pTVar6->AllocatorInstance).Data + (longlong)(int)uVar15 * 0x2c0),&local_230);
        iVar10 = __return_storage_ptr__->ArrayNum;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x8d8,&__return_storage_ptr__->AllocatorInstance,piVar1);
        }
        FVar7.Data = local_208.Positions.AllocatorInstance.Data;
        __return_storage_ptr__->ArrayNum = iVar10 + 1;
        pFVar13 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar10 * 0xd8;
        *(undefined8 *)&pFVar13->field_0x0 = 0;
        lVar14 = (longlong)local_208.Positions.ArrayNum;
        *(int *)&pFVar13[8].field_0x0 = local_208.Positions.ArrayNum;
        if (local_208.Positions.ArrayNum == 0) {
          *(int *)(pFVar13 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,local_208.Positions.ArrayNum,0,(ForAnyElementType *)pFVar13,
                     local_208.Positions.ArrayNum,(int *)(pFVar13 + 0xc));
          memcpy(*(void **)&pFVar13->field_0x0,FVar7.Data,lVar14 * 0xc);
        }
        FVar7.Data = local_208.TextureCoordinates.AllocatorInstance.Data;
        *(undefined8 *)&pFVar13[0x10].field_0x0 = 0;
        lVar14 = (longlong)local_208.TextureCoordinates.ArrayNum;
        *(int *)&pFVar13[0x18].field_0x0 = local_208.TextureCoordinates.ArrayNum;
        if (local_208.TextureCoordinates.ArrayNum == 0) {
          *(int *)(pFVar13 + 0x1c) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,local_208.TextureCoordinates.ArrayNum,0,
                     (ForAnyElementType *)(pFVar13 + 0x10),local_208.TextureCoordinates.ArrayNum,
                     (int *)(pFVar13 + 0x1c));
          memcpy(*(FScriptContainerElement **)&pFVar13[0x10].field_0x0,FVar7.Data,lVar14 << 3);
        }
        FVar7.Data = local_208.TangentsX.AllocatorInstance.Data;
        *(undefined8 *)&pFVar13[0x20].field_0x0 = 0;
        lVar14 = (longlong)local_208.TangentsX.ArrayNum;
        *(int *)&pFVar13[0x28].field_0x0 = local_208.TangentsX.ArrayNum;
        if (local_208.TangentsX.ArrayNum == 0) {
          *(int *)(pFVar13 + 0x2c) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_208.TangentsX.ArrayNum,0,(ForAnyElementType *)(pFVar13 + 0x20),
                     local_208.TangentsX.ArrayNum,(int *)(pFVar13 + 0x2c));
          memcpy(*(FScriptContainerElement **)&pFVar13[0x20].field_0x0,FVar7.Data,lVar14 << 2);
        }
        FVar7.Data = local_208.TangentsZ.AllocatorInstance.Data;
        *(undefined8 *)&pFVar13[0x30].field_0x0 = 0;
        lVar14 = (longlong)local_208.TangentsZ.ArrayNum;
        *(int *)&pFVar13[0x38].field_0x0 = local_208.TangentsZ.ArrayNum;
        if (local_208.TangentsZ.ArrayNum == 0) {
          *(int *)(pFVar13 + 0x3c) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_208.TangentsZ.ArrayNum,0,(ForAnyElementType *)(pFVar13 + 0x30),
                     local_208.TangentsZ.ArrayNum,(int *)(pFVar13 + 0x3c));
          memcpy(*(FScriptContainerElement **)&pFVar13[0x30].field_0x0,FVar7.Data,lVar14 << 2);
        }
        FVar7.Data = local_208.Colors.AllocatorInstance.Data;
        *(undefined8 *)&pFVar13[0x40].field_0x0 = 0;
        lVar14 = (longlong)local_208.Colors.ArrayNum;
        *(int *)&pFVar13[0x48].field_0x0 = local_208.Colors.ArrayNum;
        if (local_208.Colors.ArrayNum == 0) {
          *(int *)(pFVar13 + 0x4c) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_208.Colors.ArrayNum,0,(ForAnyElementType *)(pFVar13 + 0x40),
                     local_208.Colors.ArrayNum,(int *)(pFVar13 + 0x4c));
          memcpy(*(FScriptContainerElement **)&pFVar13[0x40].field_0x0,FVar7.Data,lVar14 << 2);
        }
        FVar7.Data = local_208.ImportedVertexNumbers.AllocatorInstance.Data;
        *(undefined8 *)&pFVar13[0x50].field_0x0 = 0;
        lVar14 = (longlong)local_208.ImportedVertexNumbers.ArrayNum;
        *(int *)&pFVar13[0x58].field_0x0 = local_208.ImportedVertexNumbers.ArrayNum;
        if (local_208.ImportedVertexNumbers.ArrayNum == 0) {
          *(int *)(pFVar13 + 0x5c) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_208.ImportedVertexNumbers.ArrayNum,0,
                     (ForAnyElementType *)(pFVar13 + 0x50),local_208.ImportedVertexNumbers.ArrayNum,
                     (int *)(pFVar13 + 0x5c));
          memcpy(*(FScriptContainerElement **)&pFVar13[0x50].field_0x0,FVar7.Data,lVar14 << 2);
        }
        FVar7.Data = local_208.MotionVectors.AllocatorInstance.Data;
        *(undefined8 *)&pFVar13[0x60].field_0x0 = 0;
        lVar14 = (longlong)local_208.MotionVectors.ArrayNum;
        *(int *)&pFVar13[0x68].field_0x0 = local_208.MotionVectors.ArrayNum;
        if (local_208.MotionVectors.ArrayNum == 0) {
          *(int *)(pFVar13 + 0x6c) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,local_208.MotionVectors.ArrayNum,0,(ForAnyElementType *)(pFVar13 + 0x60),
                     local_208.MotionVectors.ArrayNum,(int *)(pFVar13 + 0x6c));
          memcpy(*(FScriptContainerElement **)&pFVar13[0x60].field_0x0,FVar7.Data,lVar14 * 0xc);
        }
        FVar7.Data = local_208.BatchesInfo.AllocatorInstance.Data;
        *(undefined8 *)&pFVar13[0x70].field_0x0 = 0;
        lVar14 = (longlong)local_208.BatchesInfo.ArrayNum;
        *(int *)&pFVar13[0x78].field_0x0 = local_208.BatchesInfo.ArrayNum;
        if (local_208.BatchesInfo.ArrayNum == 0) {
          *(int *)(pFVar13 + 0x7c) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,local_208.BatchesInfo.ArrayNum,0,(ForAnyElementType *)(pFVar13 + 0x70),
                     local_208.BatchesInfo.ArrayNum,(int *)(pFVar13 + 0x7c));
          memcpy(*(FScriptContainerElement **)&pFVar13[0x70].field_0x0,FVar7.Data,lVar14 * 0xc);
        }
        FVar7.Data = local_208.Indices.AllocatorInstance.Data;
        pFVar2 = pFVar13 + 0xa0;
        *(undefined8 *)&pFVar13[0x80].field_0x0 = local_208.BoundingBox.Min.field0_0x0._0_8_;
        *(undefined8 *)&pFVar13[0x88].field_0x0 = local_208.BoundingBox._8_8_;
        *(undefined8 *)&pFVar13[0x90].field_0x0 = local_208.BoundingBox.Max.field0_0x0._4_8_;
        *(undefined4 *)&pFVar13[0x98].field_0x0 = local_208.BoundingBox._24_4_;
        *(FScriptContainerElement **)&pFVar2->field_0x0 = (FScriptContainerElement *)0x0;
        lVar14 = (longlong)local_208.Indices.ArrayNum;
        *(int *)&pFVar13[0xa8].field_0x0 = local_208.Indices.ArrayNum;
        if (local_208.Indices.ArrayNum == 0) {
          *(int *)(pFVar13 + 0xac) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_208.Indices.ArrayNum,0,(ForAnyElementType *)pFVar2,
                     local_208.Indices.ArrayNum,(int *)(pFVar13 + 0xac));
          memcpy(*(FScriptContainerElement **)&pFVar2->field_0x0,FVar7.Data,lVar14 << 2);
        }
        FVar7.Data = local_208.TempBytes.AllocatorInstance.Data;
        pFVar2 = pFVar13 + 0xc0;
        *(undefined8 *)&pFVar13[0xb0].field_0x0 = local_208.VertexInfo._0_8_;
        pFVar13[0xb8].field_0x0 = local_208.VertexInfo.bConstantIndices;
        *(FScriptContainerElement **)&pFVar2->field_0x0 = (FScriptContainerElement *)0x0;
        _Size = (size_t)local_208.TempBytes.ArrayNum;
        *(int *)&pFVar13[200].field_0x0 = local_208.TempBytes.ArrayNum;
        if (local_208.TempBytes.ArrayNum == 0) {
          *(int *)(pFVar13 + 0xcc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,local_208.TempBytes.ArrayNum,0,(ForAnyElementType *)pFVar2,
                     local_208.TempBytes.ArrayNum,(int *)(pFVar13 + 0xcc));
          memcpy(*(FScriptContainerElement **)&pFVar2->field_0x0,FVar7.Data,_Size);
        }
        local_238 = local_238 + 1;
        *(ulong64 *)&pFVar13[0xd0].field_0x0 = local_208.Hash;
        if (local_208.TempBytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.TempBytes.AllocatorInstance.Data);
        }
        if (local_208.Indices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.Indices.AllocatorInstance.Data);
        }
        if (local_208.BatchesInfo.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.BatchesInfo.AllocatorInstance.Data);
        }
        if (local_208.MotionVectors.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.MotionVectors.AllocatorInstance.Data);
        }
        if (local_208.ImportedVertexNumbers.AllocatorInstance.Data != (FScriptContainerElement *)0x0
           ) {
          FMemory::Free(local_208.ImportedVertexNumbers.AllocatorInstance.Data);
        }
        if (local_208.Colors.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.Colors.AllocatorInstance.Data);
        }
        if (local_208.TangentsZ.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.TangentsZ.AllocatorInstance.Data);
        }
        if (local_208.TangentsX.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.TangentsX.AllocatorInstance.Data);
        }
        if (local_208.TextureCoordinates.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.TextureCoordinates.AllocatorInstance.Data);
        }
        this = local_220;
        if (local_208.Positions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.Positions.AllocatorInstance.Data);
          this = local_220;
        }
      }
      uVar15 = uVar15 + 1;
      local_218 = local_218 + 0xc0;
      param_2 = local_210;
    } while ((int)uVar15 < *(int *)(*(longlong *)this + 8));
  }
  return __return_storage_ptr__;
}

// BackupSourceData @ 14e6e94a0

void __thiscall
UInterchangeGeometryCacheFactory::BackupSourceData
          (UInterchangeGeometryCacheFactory *this,UObject *param_1)

{
  return;
}

// BeginImportAsset_GameThread @ 14e6e9520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FImportAssetResult * __thiscall
UInterchangeGeometryCacheFactory::BeginImportAsset_GameThread
          (UInterchangeGeometryCacheFactory *this,FImportAssetResult *__return_storage_ptr__,
          FImportAssetObjectParams *param_1)

{
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *this_00;
  TArray<FName,TSizedDefaultAllocator<32>_> *this_01;
  int *piVar1;
  TPimplPtr<FGeometryCacheComponentResetAsset,0> *pTVar2;
  double dVar3;
  char cVar4;
  UInterchangeTranslatorBase *this_02;
  UInterchangeGeometryCacheFactoryNode *pUVar5;
  UInterchangeBaseNodeContainer *pUVar6;
  UObject *pUVar7;
  FName FVar8;
  FGeometryCacheComponentResetAsset *pFVar9;
  code *pcVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  __m128 _Var16;
  FFeedbackContext *pFVar17;
  UInterchangeGeometryCacheFactory *pUVar18;
  void *pvVar19;
  UInterchangeGeometryCacheFactoryNode *pUVar20;
  int iVar21;
  uint uVar22;
  UClass *pUVar23;
  void *pvVar24;
  longlong lVar25;
  longlong lVar26;
  UInterchangeCommonPipelineDataFactoryNode *this_03;
  FImportAssetResult *pFVar27;
  UInterchangeSceneNode *this_04;
  UInterchangeSceneNode *pUVar28;
  UInterchangeGeometryCacheNode *this_05;
  UInterchangeBaseNode *pUVar29;
  FString *pFVar30;
  TTuple<FString,UE::Interchange::FAnimationPayloadData> *pTVar31;
  FName *pFVar32;
  UGeometryCache *this_06;
  TArray<UGeometryCacheComponent_*,TSizedDefaultAllocator<32>_> *pTVar33;
  FScriptContainerElement *pFVar34;
  FText *pFVar35;
  FTaskGraphInterface *pFVar36;
  FUObjectItem *pFVar37;
  FStaticBasicLogRecord *pFVar38;
  longlong *plVar39;
  TArray<UGeometryCacheComponent_*,TSizedDefaultAllocator<32>_> *pTVar40;
  undefined ***pppuVar41;
  wchar_t *pwVar42;
  ulonglong uVar43;
  uint uVar44;
  ForAnyElementType this_07;
  char cVar45;
  UInterchangeGeometryCacheFactory *pUVar46;
  FNodeInfo *pFVar47;
  TArray<TObjectPtr<UGeometryCacheTrack>,TSizedDefaultAllocator<32>_> *pTVar48;
  FImportAssetObjectParams *pFVar49;
  FScriptContainerElement *this_08;
  int iVar50;
  bool bVar51;
  bool bVar52;
  undefined1 auStackY_998 [32];
  bool local_948;
  bool local_947;
  char local_946;
  EInterchangeMotionVectorsHandling local_945;
  bool local_944;
  <lambda_1> local_943;
  bool local_942;
  bool local_941;
  bool local_940;
  char local_93f;
  char local_93e;
  char local_93d;
  int local_93c;
  int local_938;
  char local_934;
  ForAnyElementType local_930;
  undefined8 local_928;
  FImportAssetResult *local_920;
  void *local_918;
  UInterchangeGeometryCacheFactoryNode *local_910;
  int local_908 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_900;
  float local_8f0;
  int local_8ec;
  int local_8e8 [2];
  UGeometryCache *local_8e0;
  int local_8d8;
  int local_8d4;
  int local_8d0;
  uint local_8cc;
  UGeometryCacheTrackStreamable *local_8c8;
  UGeometryCacheTrackStreamable *local_8c0;
  UInterchangeGeometryCacheFactory *local_8b8;
  FString *local_8b0;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> local_8a8;
  int *local_898;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_890;
  TArray<FString,TSizedDefaultAllocator<32>_> local_880;
  int local_870 [4];
  undefined4 local_860;
  undefined4 local_85c;
  FImportAssetObjectParams *local_858;
  FString local_850;
  FString local_840;
  UInterchangeGeometryCacheNode *local_830;
  FEvent *local_828;
  TArray<FName,TSizedDefaultAllocator<32>_> local_820;
  FText local_810;
  int local_800;
  int local_7f8;
  UInterchangeBaseNode *local_7f0;
  FEvent *local_7e8;
  undefined8 local_7e0;
  UGeometryCache *local_7d8;
  float local_7d0;
  int local_7cc;
  undefined1 local_7c8;
  undefined1 local_7c7;
  undefined1 local_7c6;
  FSoftObjectPath local_7c0;
  FScriptContainerElement *local_7a0;
  FString local_798;
  FMeshMaterialArrayViewer<TObjectPtr<UMaterialInterface>_> local_788;
  TArrayView<std::nullptr_t,int> local_760;
  TArrayView<std::nullptr_t,int> local_750;
  code *local_740;
  int *local_738;
  code *local_730;
  int *local_728;
  int local_720;
  int local_71c;
  char *local_718;
  FSlowTask *local_710;
  ForAnyElementType *local_708;
  FString *local_700;
  void *local_6f8;
  undefined1 *local_6f0;
  double local_6e8;
  undefined1 local_6e0;
  undefined1 local_6df;
  undefined4 local_6de;
  undefined2 local_6da;
  int *local_6d8;
  _RTL_CRITICAL_SECTION *local_6d0;
  FEvent **local_6c8;
  TArray<TObjectPtr<UGeometryCacheTrack>,TSizedDefaultAllocator<32>_> *local_6c0;
  ForAnyElementType *local_6b8;
  FString *local_6b0;
  int *local_6a8;
  int *local_6a0;
  int local_698;
  int local_694;
  int local_690;
  int local_68c;
  char *local_688;
  FSlowTask *local_680;
  ForAnyElementType *local_678;
  FString *local_670;
  void *local_668;
  undefined1 *local_660;
  ForAnyElementType *local_658;
  undefined1 local_650;
  undefined1 local_64f;
  undefined4 local_64e;
  undefined2 local_64a;
  int *local_648;
  _RTL_CRITICAL_SECTION *local_640;
  FEvent **local_638;
  TArray<TObjectPtr<UGeometryCacheTrack>,TSizedDefaultAllocator<32>_> *local_630;
  ForAnyElementType *local_628;
  FString *local_620;
  longlong local_618;
  longlong local_610;
  int local_608;
  int local_604;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  local_600;
  FName local_5b0;
  longlong local_5a8;
  FString local_5a0;
  FString local_590;
  FSlowTask local_578;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  local_518;
  FString local_4c8;
  undefined1 local_4b8 [128];
  FString local_438;
  FString local_428;
  TUniquePtr<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>_>
  *local_418;
  undefined8 local_410;
  double local_408;
  double dStack_400;
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  double dStack_3e0;
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double dStack_3b0;
  undefined1 local_3a8 [32];
  void *local_388;
  undefined4 local_380;
  uint local_37c;
  undefined4 local_378;
  undefined4 local_374;
  ForElementType<FSetElementId> local_368;
  int local_360;
  TTransform<double> local_358;
  undefined1 local_2f8 [32];
  void *local_2d8;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  void *local_2b8;
  undefined4 local_2b0;
  ForAnyElementType local_2a8;
  long64 lStack_2a0;
  long64 local_298;
  ulong64 local_290;
  undefined8 local_288;
  _RTL_CRITICAL_SECTION local_280;
  code *local_258 [2];
  undefined **local_248;
  code *local_240;
  undefined ***local_230;
  TTransform<double> local_228;
  TTransform<double> local_1c8;
  TTransform<double> local_168;
  _RTL_CRITICAL_SECTION local_108;
  _RTL_CRITICAL_SECTION local_e0;
  FStringFormatArg local_b8;
  FStringFormatArg local_98;
  FStringFormatArg local_78;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_998;
  bVar52 = CpuChannel->Enabled < 0;
  local_920 = __return_storage_ptr__;
  local_8b8 = this;
  local_858 = param_1;
  if (bVar52) {
    local_946 = '\0';
  }
  else {
    local_946 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId136,
               "UInterchangeGeometryCacheFactory::BeginImportAsset_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangeGeometryCacheFactory.cpp"
               ,0x88);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId136);
  }
  cVar45 = !bVar52;
  __return_storage_ptr__->bIsFactorySkipAsset = false;
  __return_storage_ptr__->ImportedObject = (UObject *)0x0;
  this_02 = param_1->Translator;
  if (this_02 != (UInterchangeTranslatorBase *)0x0) {
    pUVar23 = Z_Construct_UClass_UInterchangeMeshPayloadInterface_NoRegister();
    pvVar24 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_02,pUVar23);
    local_918 = pvVar24;
    if (pvVar24 != (void *)0x0) {
      if (param_1->AssetNode == (UInterchangeFactoryBaseNode *)0x0) goto LAB_14e6eb493;
      lVar25 = (**(code **)(param_1->AssetNode->_padding_ + 0x2f8))();
      lVar26 = (**(code **)(this->_padding_ + 0x2b0))(this);
      if (lVar26 == 0) goto LAB_14e6eb493;
      if ((*(int *)(lVar25 + 0x38) < *(int *)(lVar26 + 0x38)) ||
         (*(longlong *)(*(longlong *)(lVar25 + 0x30) + (longlong)*(int *)(lVar26 + 0x38) * 8) !=
          lVar26 + 0x30)) {
        bVar52 = false;
      }
      else {
        bVar52 = true;
      }
      if ((!bVar52) ||
         (pUVar5 = (UInterchangeGeometryCacheFactoryNode *)param_1->AssetNode, local_910 = pUVar5,
         pUVar5 == (UInterchangeGeometryCacheFactoryNode *)0x0)) goto LAB_14e6eb493;
      pUVar23 = Z_Construct_UClass_UInterchangeGeometryCacheFactoryNode_NoRegister();
      iVar21 = (int)pUVar23->_padding_;
      if ((*(int *)(pUVar5->_padding_ + 0x38) < iVar21) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar21 * 8) !=
          &pUVar23->_padding_)) goto LAB_14e6eb493;
      local_8e0 = (UGeometryCache *)param_1->ReimportObject;
      if (local_8e0 == (UGeometryCache *)0x0) {
        local_7c0.AssetPath.PackageName.ComparisonIndex.Value = 0;
        local_7c0.AssetPath.PackageName.Number = 0;
        local_7c0.AssetPath.AssetName.ComparisonIndex.Value = 0;
        local_7c0.AssetPath.AssetName.Number = 0;
        local_7c0.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_7c0.SubPathString.Data.ArrayNum = 0;
        local_7c0.SubPathString.Data.ArrayMax = 0;
        bVar52 = UInterchangeFactoryBaseNode::GetCustomReferenceObject
                           ((UInterchangeFactoryBaseNode *)pUVar5,&local_7c0);
        if (bVar52) {
          local_8e0 = (UGeometryCache *)
                      FSoftObjectPath::TryLoad(&local_7c0,(FUObjectSerializeContext *)0x0);
        }
        if (local_7c0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_7c0.SubPathString.Data.AllocatorInstance.Data);
        }
      }
      local_948 = true;
      UInterchangeGeometryCacheFactoryNode::GetCustomFlattenTracks(pUVar5,&local_948);
      local_8f0 = 0.01;
      UInterchangeGeometryCacheFactoryNode::GetCustomPositionPrecision(pUVar5,&local_8f0);
      local_8ec = 10;
      UInterchangeGeometryCacheFactoryNode::GetCustomNumBitsForUVs(pUVar5,&local_8ec);
      local_8e8[0] = 0;
      local_934 = UInterchangeGeometryCacheFactoryNode::GetCustomStartFrame(pUVar5,local_8e8);
      local_8d8 = 0;
      if ((bool)local_934) {
        local_7f8 = local_8e8[0];
      }
      local_93d = UInterchangeGeometryCacheFactoryNode::GetCustomEndFrame(pUVar5,&local_8d8);
      local_945 = NoMotionVectors;
      if ((bool)local_93d) {
        local_800 = local_8d8;
      }
      UInterchangeGeometryCacheFactoryNode::GetCustomMotionVectorsImport(pUVar5,&local_945);
      local_941 = false;
      UInterchangeGeometryCacheFactoryNode::GetCustomApplyConstantTopologyOptimization
                (pUVar5,&local_941);
      local_944 = false;
      UInterchangeGeometryCacheFactoryNode::GetCustomStoreImportedVertexNumbers(pUVar5,&local_944);
      local_940 = false;
      UInterchangeGeometryCacheFactoryNode::GetCustomOptimizeIndexBuffers(pUVar5,&local_940);
      local_228.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
      ;
      local_228.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
      ;
      local_228.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_228.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_228.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_228.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
      this_03 = UInterchangeCommonPipelineDataFactoryNode::GetUniqueInstance(param_1->NodeContainer)
      ;
      if (this_03 != (UInterchangeCommonPipelineDataFactoryNode *)0x0) {
        UInterchangeCommonPipelineDataFactoryNode::GetCustomGlobalOffsetTransform
                  (this_03,&local_228);
      }
      local_930.Data = (FScriptContainerElement *)0x0;
      local_938 = -0x80000000;
      local_928 = 0;
      local_93c = 0x7fffffff;
      local_947 = true;
      local_900.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_900.ArrayNum = 0;
      local_900.ArrayMax = 0;
      UInterchangeBaseNode::GetTargetNodeUids((UInterchangeBaseNode *)pUVar5,&local_900);
      local_8b0 = &param_1->AssetName;
      local_8cc = 0;
      pFVar49 = param_1;
      iVar21 = -0x80000000;
      pvVar19 = local_918;
      pUVar20 = local_910;
      if (0 < local_900.ArrayNum) {
        do {
          uVar22 = local_8cc;
          uVar44 = 0;
          if ((int)local_8cc < local_900.ArrayNum) {
            uVar44 = ~local_8cc >> 0x1f;
          }
          if ((uVar44 == 0) &&
             (bVar52 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar52)) {
            pcVar10 = (code *)swi(3);
            pFVar27 = (FImportAssetResult *)(*pcVar10)();
            return pFVar27;
          }
          local_358.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_358.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          local_7a0 = local_900.AllocatorInstance.Data + (longlong)(int)uVar22 * 0x10;
          local_358.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_358.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_358.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_358.Translation.XY.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[1];
          local_358.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_358.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_358.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_358.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          local_358.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_358.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          this_04 = (UInterchangeSceneNode *)
                    UInterchangeBaseNodeContainer::GetNode
                              (param_1->NodeContainer,(FString *)local_7a0);
          if (this_04 == (UInterchangeSceneNode *)0x0) {
LAB_14e6e9975:
            pUVar28 = (UInterchangeSceneNode *)0x0;
          }
          else {
            pUVar23 = Z_Construct_UClass_UInterchangeGeometryCacheNode_NoRegister();
            iVar21 = (int)pUVar23->_padding_;
            if ((*(int *)(this_04->_padding_ + 0x38) < iVar21) ||
               (pUVar28 = this_04,
               (longlong *)
               *(undefined1 **)(*(longlong *)(this_04->_padding_ + 0x30) + (longlong)iVar21 * 8) !=
               &pUVar23->_padding_)) goto LAB_14e6e9975;
          }
          if (pUVar28 == (UInterchangeSceneNode *)0x0) {
            if (this_04 != (UInterchangeSceneNode *)0x0) {
              pUVar23 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
              iVar21 = (int)pUVar23->_padding_;
              if ((iVar21 <= *(int *)(this_04->_padding_ + 0x38)) &&
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(this_04->_padding_ + 0x30) + (longlong)iVar21 * 8)
                  == &pUVar23->_padding_)) {
                local_942 = true;
                bVar52 = UInterchangeSceneNode::GetCustomActorVisibility(this_04,&local_942);
                if ((!bVar52) || (local_942 != false)) {
                  local_1c8.Rotation.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[0];
                  local_1c8.Rotation.XY.m128d_f64[1] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[1];
                  local_1c8.Rotation.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[2];
                  local_1c8.Rotation.ZW.m128d_f64[1] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[3];
                  local_1c8.Translation.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
                  local_1c8.Translation.XY.m128d_f64[1] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[1];
                  local_1c8.Translation.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[2];
                  local_1c8.Translation.ZW.m128d_f64[1] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[3];
                  local_1c8.Scale3D.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[0];
                  local_1c8.Scale3D.XY.m128d_f64[1] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[1];
                  local_1c8.Scale3D.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[2];
                  local_1c8.Scale3D.ZW.m128d_f64[1] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[3];
                  bVar52 = UInterchangeSceneNode::GetCustomGlobalTransform
                                     (this_04,param_1->NodeContainer,&local_228,&local_1c8,false);
                  if (bVar52) {
                    local_358.Rotation.XY.m128d_f64[0] = local_1c8.Rotation.XY.m128d_f64[0];
                    local_358.Rotation.XY.m128d_f64[1] = local_1c8.Rotation.XY.m128d_f64[1];
                    local_358.Rotation.ZW.m128d_f64[0] = local_1c8.Rotation.ZW.m128d_f64[0];
                    local_358.Rotation.ZW.m128d_f64[1] = local_1c8.Rotation.ZW.m128d_f64[1];
                    local_358.Translation.XY.m128d_f64[0] = local_1c8.Translation.XY.m128d_f64[0];
                    local_358.Translation.XY.m128d_f64[1] = local_1c8.Translation.XY.m128d_f64[1];
                    local_358.Translation.ZW.m128d_f64[0] = local_1c8.Translation.ZW.m128d_f64[0];
                    local_358.Translation.ZW.m128d_f64[1] = local_1c8.Translation.ZW.m128d_f64[1];
                    local_358.Scale3D.XY.m128d_f64[0] = local_1c8.Scale3D.XY.m128d_f64[0];
                    local_358.Scale3D.XY.m128d_f64[1] = local_1c8.Scale3D.XY.m128d_f64[1];
                    local_358.Scale3D.ZW.m128d_f64[0] = local_1c8.Scale3D.ZW.m128d_f64[0];
                    local_358.Scale3D.ZW.m128d_f64[1] = local_1c8.Scale3D.ZW.m128d_f64[1];
                  }
                  UE::Interchange::Private::MeshHelper::
                  AddSceneNodeGeometricAndPivotToGlobalTransform(&local_358,this_04,true,false);
                  local_840.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_840.Data.ArrayNum = 0;
                  local_840.Data.ArrayMax = 0;
                  UInterchangeSceneNode::GetCustomAssetInstanceUid(this_04,&local_840);
                  this_05 = (UInterchangeGeometryCacheNode *)
                            UInterchangeBaseNodeContainer::GetNode
                                      (param_1->NodeContainer,&local_840);
                  if (this_05 == (UInterchangeGeometryCacheNode *)0x0) {
LAB_14e6e9b11:
                    this_05 = (UInterchangeGeometryCacheNode *)0x0;
                    local_830 = (UInterchangeGeometryCacheNode *)0x0;
                  }
                  else {
                    local_830 = this_05;
                    pUVar23 = Z_Construct_UClass_UInterchangeGeometryCacheNode_NoRegister();
                    iVar21 = (int)pUVar23->_padding_;
                    if ((*(int *)(this_05->_padding_ + 0x38) < iVar21) ||
                       ((longlong *)
                        *(undefined1 **)
                         (*(longlong *)(this_05->_padding_ + 0x30) + (longlong)iVar21 * 8) !=
                        &pUVar23->_padding_)) goto LAB_14e6e9b11;
                  }
                  pUVar29 = UInterchangeBaseNodeContainer::GetNode
                                      (param_1->NodeContainer,&local_840);
                  if (pUVar29 == (UInterchangeBaseNode *)0x0) {
LAB_14e6e9b57:
                    local_7f0 = (UInterchangeBaseNode *)0x0;
                    pUVar29 = (UInterchangeBaseNode *)0x0;
                  }
                  else {
                    local_7f0 = pUVar29;
                    pUVar23 = Z_Construct_UClass_UInterchangeMeshNode_NoRegister();
                    iVar21 = (int)pUVar23->_padding_;
                    if ((*(int *)(pUVar29->_padding_ + 0x38) < iVar21) ||
                       ((longlong *)
                        *(undefined1 **)
                         (*(longlong *)(pUVar29->_padding_ + 0x30) + (longlong)iVar21 * 8) !=
                        &pUVar23->_padding_)) goto LAB_14e6e9b57;
                  }
                  if (local_840.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_840.Data.AllocatorInstance.Data);
                  }
                  pUVar46 = local_8b8;
                  if (pUVar29 == (UInterchangeBaseNode *)0x0) goto LAB_14e6ea288;
                  local_408 = local_358.Rotation.XY.m128d_f64[0];
                  dStack_400 = local_358.Rotation.XY.m128d_f64[1];
                  local_3f8 = local_358.Rotation.ZW.m128d_f64[0];
                  dStack_3f0 = local_358.Rotation.ZW.m128d_f64[1];
                  local_438.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_428.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_418 = (TUniquePtr<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>_>
                               *)0x0;
                  local_3e8 = local_358.Translation.XY.m128d_f64[0];
                  dStack_3e0 = local_358.Translation.XY.m128d_f64[1];
                  local_3d8 = local_358.Translation.ZW.m128d_f64[0];
                  dStack_3d0 = local_358.Translation.ZW.m128d_f64[1];
                  local_438.Data.ArrayNum = 0;
                  local_438.Data.ArrayMax = 0;
                  local_428.Data.ArrayNum = 0;
                  local_428.Data.ArrayMax = 0;
                  local_410 = 0;
                  local_3c8 = local_358.Scale3D.XY.m128d_f64[0];
                  dStack_3c0 = local_358.Scale3D.XY.m128d_f64[1];
                  local_3b8 = local_358.Scale3D.ZW.m128d_f64[0];
                  dStack_3b0 = local_358.Scale3D.ZW.m128d_f64[1];
                  if (0 < *(int *)&(local_8b8->TransformAnimationPayloadResults).field_0x8 -
                          *(int *)&(local_8b8->TransformAnimationPayloadResults).field_0x34) {
                    do {
                      pFVar30 = UInterchangeBaseNode::GetUniqueID
                                          ((UInterchangeBaseNode *)this_04,&local_5a0);
                      pTVar31 = TSet<TTuple<FString,UE::Interchange::FAnimationPayloadData>,TDefaultMapHashableKeyFuncs<FString,UE::Interchange::FAnimationPayloadData,0>,FDefaultSetAllocator>
                                ::Find((TSet<TTuple<FString,UE::Interchange::FAnimationPayloadData>,TDefaultMapHashableKeyFuncs<FString,UE::Interchange::FAnimationPayloadData,0>,FDefaultSetAllocator>
                                        *)&pUVar46->TransformAnimationPayloadResults,pFVar30);
                      pUVar28 = (UInterchangeSceneNode *)&pTVar31->field_0x10;
                      if (pTVar31 == (TTuple<FString,UE::Interchange::FAnimationPayloadData> *)0x0)
                      {
                        pUVar28 = (UInterchangeSceneNode *)0x0;
                      }
                      if (local_5a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_5a0.Data.AllocatorInstance.Data);
                      }
                      if (pUVar28 == (UInterchangeSceneNode *)0x0) {
                        local_168.Rotation.XY.m128d_f64[0] =
                             (double)GlobalVectorConstants::Float0001.m128_f32[0];
                        local_168.Rotation.XY.m128d_f64[1] =
                             (double)GlobalVectorConstants::Float0001.m128_f32[1];
                        local_168.Rotation.ZW.m128d_f64[0] =
                             (double)GlobalVectorConstants::Float0001.m128_f32[2];
                        local_168.Rotation.ZW.m128d_f64[1] =
                             (double)GlobalVectorConstants::Float0001.m128_f32[3];
                        local_168.Translation.XY.m128d_f64[0] =
                             (double)GlobalVectorConstants::FloatZero.m128_f32[0];
                        local_168.Translation.XY.m128d_f64[1] =
                             (double)GlobalVectorConstants::FloatZero.m128_f32[1];
                        local_168.Translation.ZW.m128d_f64[0] =
                             (double)GlobalVectorConstants::FloatZero.m128_f32[2];
                        local_168.Translation.ZW.m128d_f64[1] =
                             (double)GlobalVectorConstants::FloatZero.m128_f32[3];
                        local_168.Scale3D.XY.m128d_f64[0] =
                             (double)GlobalVectorConstants::Float1110.m128_f32[0];
                        local_168.Scale3D.XY.m128d_f64[1] =
                             (double)GlobalVectorConstants::Float1110.m128_f32[1];
                        local_168.Scale3D.ZW.m128d_f64[0] =
                             (double)GlobalVectorConstants::Float1110.m128_f32[2];
                        local_168.Scale3D.ZW.m128d_f64[1] =
                             (double)GlobalVectorConstants::Float1110.m128_f32[3];
                        bVar52 = UInterchangeSceneNode::GetCustomLocalTransform(this_04,&local_168);
                        if (bVar52) {
                          `UInterchangeGeometryCacheFactory::BeginImportAsset_GameThread'::__l2::
                          FAnimatedTransformStack::AddTransform(&local_438,&local_168);
                        }
                      }
                      else {
                        local_908[0] = (int)(double)pUVar28->_padding_;
                        local_898 = &(pUVar28->Macro_CustomLocalTransformKey).Key.Data.ArrayNum;
                        if (((local_438.Data.AllocatorInstance.Data <=
                              (FScriptContainerElement *)&local_898) &&
                            ((FScriptContainerElement *)&local_898 <
                             local_438.Data.AllocatorInstance.Data +
                             (longlong)local_438.Data.ArrayMax * 8)) &&
                           (bVar52 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                ,
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x7a5,
                                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                               ), bVar52)) {
                          pcVar10 = (code *)swi(3);
                          pFVar27 = (FImportAssetResult *)(*pcVar10)();
                          return pFVar27;
                        }
                        iVar21 = local_438.Data.ArrayNum;
                        if (local_438.Data.ArrayNum == local_438.Data.ArrayMax) {
                          iVar21 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x808,(ForAnyElementType *)&local_438,
                                              &local_438.Data.ArrayMax);
                        }
                        local_438.Data.ArrayNum = iVar21 + 1;
                        *(int **)(local_438.Data.AllocatorInstance.Data + (longlong)iVar21 * 8) =
                             local_898;
                        if (((local_428.Data.AllocatorInstance.Data <=
                              (FScriptContainerElement *)local_908) &&
                            ((FScriptContainerElement *)local_908 <
                             local_428.Data.AllocatorInstance.Data +
                             (longlong)local_428.Data.ArrayMax * 4)) &&
                           (bVar52 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                ,
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x7a5,
                                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                               ), bVar52)) {
                          pcVar10 = (code *)swi(3);
                          pFVar27 = (FImportAssetResult *)(*pcVar10)();
                          return pFVar27;
                        }
                        iVar21 = local_428.Data.ArrayNum;
                        if (local_428.Data.ArrayNum == local_428.Data.ArrayMax) {
                          iVar21 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x404,(ForAnyElementType *)&local_428,
                                              &local_428.Data.ArrayMax);
                        }
                        local_428.Data.ArrayNum = iVar21 + 1;
                        *(int *)(local_428.Data.AllocatorInstance.Data + (longlong)iVar21 * 4) =
                             local_908[0];
                      }
                      pUVar6 = param_1->NodeContainer;
                      pFVar30 = UInterchangeBaseNode::GetParentUid
                                          ((UInterchangeBaseNode *)this_04,&local_590);
                      this_04 = (UInterchangeSceneNode *)
                                UInterchangeBaseNodeContainer::GetNode(pUVar6,pFVar30);
                      if (this_04 == (UInterchangeSceneNode *)0x0) {
LAB_14e6e9eb0:
                        this_04 = (UInterchangeSceneNode *)0x0;
                      }
                      else {
                        pUVar23 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
                        iVar21 = (int)pUVar23->_padding_;
                        if ((*(int *)(this_04->_padding_ + 0x38) < iVar21) ||
                           ((longlong *)
                            *(undefined1 **)
                             (*(longlong *)(this_04->_padding_ + 0x30) + (longlong)iVar21 * 8) !=
                            &pUVar23->_padding_)) goto LAB_14e6e9eb0;
                      }
                      if (local_590.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_590.Data.AllocatorInstance.Data);
                      }
                      this_05 = local_830;
                    } while (this_04 != (UInterchangeSceneNode *)0x0);
                  }
                  iVar21 = (int)local_928;
                  if ((int)local_928 == local_928._4_4_) {
                    iVar21 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x10c0,&local_930,(int *)((longlong)&local_928 + 4));
                  }
                  local_928 = CONCAT44(local_928._4_4_,iVar21 + 1);
                  this_08 = local_930.Data + (longlong)iVar21 * 0xc0;
                  *(undefined8 *)(this_08 + 0x18) = 0;
                  pFVar34 = this_08 + 0x20;
                  *(undefined8 *)(this_08 + 0x50) = 0;
                  *(undefined8 *)(this_08 + 0x58) = 0;
                  pFVar15 = this_08 + 0x30;
                  *(undefined8 *)(this_08 + 0x60) = 0;
                  *(undefined8 *)(this_08 + 0x68) = 0;
                  *(undefined8 *)(this_08 + 0x70) = 0;
                  *(undefined8 *)(this_08 + 0x78) = 0;
                  *(undefined8 *)(this_08 + 0x80) = 0;
                  *(undefined8 *)(this_08 + 0x88) = 0;
                  *(undefined8 *)(this_08 + 0x90) = 0;
                  *(undefined8 *)(this_08 + 0x98) = 0;
                  *(undefined8 *)(this_08 + 0xa0) = 0;
                  *(undefined8 *)(this_08 + 0xa8) = 0;
                  *(undefined8 *)(this_08 + 0xb0) = 0;
                  *(undefined8 *)(this_08 + 0xb8) = 0;
                  (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&this_08->field_0x0)->
                  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
                  *(undefined8 *)&this_08[8].field_0x0 = 0;
                  *(undefined8 *)pFVar34 = 0;
                  *(undefined8 *)(this_08 + 0x28) = 0;
                  *(undefined8 *)pFVar15 = 0;
                  *(undefined8 *)(this_08 + 0x38) = 0;
                  *(undefined8 *)(this_08 + 0x40) = 0;
                  *(undefined8 *)(this_08 + 0x48) = 0;
                  *(undefined8 *)(this_08 + 0x10) = 0;
                  _Var16 = GlobalVectorConstants::Float0001;
                  fVar11 = GlobalVectorConstants::Float0001.m128_f32[1];
                  *(double *)(this_08 + 0x50) = (double)GlobalVectorConstants::Float0001.m128_f32[0]
                  ;
                  *(double *)(this_08 + 0x58) = (double)fVar11;
                  *(double *)(this_08 + 0x60) = (double)_Var16.m128_f32[2];
                  *(double *)(this_08 + 0x68) = (double)_Var16.m128_f32[3];
                  fVar11 = GlobalVectorConstants::FloatZero.m128_f32[1];
                  fVar12 = GlobalVectorConstants::FloatZero.m128_f32[2];
                  fVar13 = GlobalVectorConstants::FloatZero.m128_f32[3];
                  *(double *)(this_08 + 0x70) = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
                  ;
                  *(double *)(this_08 + 0x78) = (double)fVar11;
                  *(double *)(this_08 + 0x80) = (double)fVar12;
                  *(double *)(this_08 + 0x88) = (double)fVar13;
                  _Var16 = GlobalVectorConstants::Float1110;
                  fVar11 = GlobalVectorConstants::Float1110.m128_f32[1];
                  *(double *)(this_08 + 0x90) = (double)GlobalVectorConstants::Float1110.m128_f32[0]
                  ;
                  *(double *)(this_08 + 0x98) = (double)fVar11;
                  *(double *)(this_08 + 0xa0) = (double)_Var16.m128_f32[2];
                  *(double *)(this_08 + 0xa8) = (double)_Var16.m128_f32[3];
                  *(undefined8 *)(this_08 + 0xb0) = 0x4038000000000000;
                  this_08[0xb8] = (FScriptContainerElement)0x1;
                  ::FString::operator=((FString *)this_08,(FString *)local_7a0);
                  *(UInterchangeBaseNode **)(this_08 + 0x10) = local_7f0;
                  if (pFVar34 != (FScriptContainerElement *)&local_438) {
                    if (*(void **)pFVar34 != (void *)0x0) {
                      FMemory::Free(*(void **)pFVar34);
                    }
                    *(FScriptContainerElement **)pFVar34 = local_438.Data.AllocatorInstance.Data;
                    local_438.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    *(int *)(this_08 + 0x28) = local_438.Data.ArrayNum;
                    *(int *)(this_08 + 0x2c) = local_438.Data.ArrayMax;
                    local_438.Data.ArrayNum = 0;
                    local_438.Data.ArrayMax = 0;
                  }
                  if (pFVar15 != (FScriptContainerElement *)&local_428) {
                    if (*(void **)pFVar15 != (void *)0x0) {
                      FMemory::Free(*(void **)pFVar15);
                    }
                    *(FScriptContainerElement **)pFVar15 = local_428.Data.AllocatorInstance.Data;
                    local_428.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    *(int *)(this_08 + 0x38) = local_428.Data.ArrayNum;
                    *(int *)(this_08 + 0x3c) = local_428.Data.ArrayMax;
                    local_428.Data.ArrayNum = 0;
                    local_428.Data.ArrayMax = 0;
                  }
                  pFVar34 = this_08 + 0x40;
                  if (pFVar34 != (FScriptContainerElement *)&local_418) {
                    DestructItems<TUniquePtr<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>_>,int>
                              (*(TUniquePtr<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>_>
                                 **)pFVar34,*(int *)(this_08 + 0x48));
                    if (*(void **)pFVar34 != (void *)0x0) {
                      FMemory::Free(*(void **)pFVar34);
                    }
                    *(TUniquePtr<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>_>
                      **)pFVar34 = local_418;
                    local_418 = (TUniquePtr<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>_>
                                 *)0x0;
                    *(int *)(this_08 + 0x48) = (int)local_410;
                    *(int *)(this_08 + 0x4c) = local_410._4_4_;
                    local_410 = 0;
                  }
                  *(double *)(this_08 + 0x50) = local_408;
                  *(double *)(this_08 + 0x58) = dStack_400;
                  *(double *)(this_08 + 0x60) = local_3f8;
                  *(double *)(this_08 + 0x68) = dStack_3f0;
                  *(double *)(this_08 + 0x70) = local_3e8;
                  *(double *)(this_08 + 0x78) = dStack_3e0;
                  *(double *)(this_08 + 0x80) = local_3d8;
                  *(double *)(this_08 + 0x88) = dStack_3d0;
                  *(double *)(this_08 + 0x90) = local_3c8;
                  *(double *)(this_08 + 0x98) = dStack_3c0;
                  *(double *)(this_08 + 0xa0) = local_3b8;
                  *(double *)(this_08 + 0xa8) = dStack_3b0;
                  if (this_05 != (UInterchangeGeometryCacheNode *)0x0) {
                    UInterchangeGeometryCacheNode::GetCustomHasConstantTopology
                              (this_05,(bool *)(this_08 + 0xb8));
                    local_947 = (bool)(local_947 & (byte)this_08[0xb8]);
                    local_8d4 = 0;
                    UInterchangeGeometryCacheNode::GetCustomStartFrame(this_05,&local_8d4);
                    local_8d0 = 0;
                    iVar21 = local_8d4;
                    if (local_8d4 < local_938) {
                      iVar21 = local_938;
                    }
                    local_938 = iVar21;
                    UInterchangeGeometryCacheNode::GetCustomEndFrame(this_05,&local_8d0);
                    iVar21 = local_8d0;
                    if (local_93c < local_8d0) {
                      iVar21 = local_93c;
                    }
                    local_93c = iVar21;
                    UInterchangeGeometryCacheNode::GetCustomFrameRate
                              (this_05,(double *)(this_08 + 0xb0));
                  }
                  DestructItems<TUniquePtr<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>_>,int>
                            (local_418,(int)local_410);
                  if (local_418 !=
                      (TUniquePtr<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>_>
                       *)0x0) {
                    FMemory::Free(local_418);
                  }
                  if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_428.Data.AllocatorInstance.Data);
                  }
                  if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_438.Data.AllocatorInstance.Data);
                  }
                }
                goto LAB_14e6ea2e4;
              }
            }
            bVar52 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<2803355437913604397>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangeGeometryCacheFactory.cpp"
                                ,0x12d,"SceneNode");
            if (bVar52) {
              pcVar10 = (code *)swi(3);
              pFVar27 = (FImportAssetResult *)(*pcVar10)();
              return pFVar27;
            }
            if (2 < (byte)LogInterchangeImport._0_1_) {
              if ((param_1->AssetName).Data.ArrayNum == 0) {
                pFVar38 = &::LOG_Static;
              }
              else {
                pFVar38 = &::LOG_Static;
              }
LAB_14e6ea2d8:
              UE::Logging::Private::BasicLog<3>(pFVar38,(FLogCategoryBase *)&LogInterchangeImport);
            }
          }
          else {
            local_358.Rotation.XY.m128d_f64[0] = local_228.Rotation.XY.m128d_f64[0];
            local_358.Rotation.XY.m128d_f64[1] = local_228.Rotation.XY.m128d_f64[1];
            local_358.Rotation.ZW.m128d_f64[0] = local_228.Rotation.ZW.m128d_f64[0];
            local_358.Rotation.ZW.m128d_f64[1] = local_228.Rotation.ZW.m128d_f64[1];
            local_358.Translation.XY.m128d_f64[0] = local_228.Translation.XY.m128d_f64[0];
            local_358.Translation.XY.m128d_f64[1] = local_228.Translation.XY.m128d_f64[1];
            local_358.Translation.ZW.m128d_f64[0] = local_228.Translation.ZW.m128d_f64[0];
            local_358.Translation.ZW.m128d_f64[1] = local_228.Translation.ZW.m128d_f64[1];
            local_358.Scale3D.XY.m128d_f64[0] = local_228.Scale3D.XY.m128d_f64[0];
            local_358.Scale3D.XY.m128d_f64[1] = local_228.Scale3D.XY.m128d_f64[1];
            local_358.Scale3D.ZW.m128d_f64[0] = local_228.Scale3D.ZW.m128d_f64[0];
            local_358.Scale3D.ZW.m128d_f64[1] = local_228.Scale3D.ZW.m128d_f64[1];
LAB_14e6ea288:
            bVar52 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<2803355437913604433>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangeGeometryCacheFactory.cpp"
                                ,0x151,"MeshNode");
            if (bVar52) {
              pcVar10 = (code *)swi(3);
              pFVar27 = (FImportAssetResult *)(*pcVar10)();
              return pFVar27;
            }
            if (2 < (byte)LogInterchangeImport._0_1_) {
              pFVar38 = &::LOG_Static;
              goto LAB_14e6ea2d8;
            }
          }
LAB_14e6ea2e4:
          local_8cc = local_8cc + 1;
          pFVar49 = local_858;
          cVar45 = local_946;
          iVar21 = local_938;
          pvVar19 = pvVar24;
          pUVar20 = pUVar5;
        } while ((int)local_8cc < local_900.ArrayNum);
      }
      local_910 = pUVar20;
      local_918 = pvVar19;
      local_938 = iVar21;
      if (local_934 != '\0') {
        local_938 = local_7f8;
      }
      if (local_93d != '\0') {
        local_93c = local_800;
      }
      if (local_93c <= local_938) {
        local_93c = local_938 + 1;
      }
      if ((int)local_928 == 0) {
        iVar21 = local_900.ArrayNum;
        if (1 < (byte)LogInterchangeImport._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeImport)
          ;
          goto LAB_14e6ea369;
        }
      }
      else {
        if (local_8e0 == (UGeometryCache *)0x0) {
          if ((pFVar49->AssetName).Data.ArrayNum == 0) {
            pwVar42 = L"";
          }
          else {
            pwVar42 = (wchar_t *)(pFVar49->AssetName).Data.AllocatorInstance.Data;
          }
          pFVar32 = ::FName::FName(&local_5b0,pwVar42);
          pUVar7 = pFVar49->Parent;
          local_7e0 = 0;
          FVar8 = *pFVar32;
          if (FVar8 == (FName)0x0) {
            FObjectInitializer::AssertIfInConstructor
                      (pUVar7,
                       L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                      );
          }
          pUVar23 = Z_Construct_UClass_UGeometryCache_NoRegister();
          FStaticConstructObjectParameters::FStaticConstructObjectParameters
                    ((FStaticConstructObjectParameters *)local_4b8,pUVar23);
          local_4b8._48_8_ = (FObjectInstancingGraph *)0x0;
          local_4b8._56_8_ = (UPackage *)0x0;
          local_4b8._24_4_ = RF_Standalone|RF_Public;
          local_4b8._40_8_ = (UObject *)0x0;
          local_4b8[0x20] = false;
          local_4b8._8_8_ = pUVar7;
          local_4b8._16_8_ = FVar8;
          this_06 = (UGeometryCache *)
                    StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_4b8);
          local_8e0 = this_06;
          if (local_4b8._64_8_ != 0) {
            plVar39 = (longlong *)(local_4b8 + 0x50);
            if ((longlong *)local_4b8._104_8_ != (longlong *)0x0) {
              plVar39 = (longlong *)local_4b8._104_8_;
            }
            (**(code **)(*plVar39 + 0x10))();
          }
          pUVar46 = local_8b8;
          if (this_06 != (UGeometryCache *)0x0) {
LAB_14e6ea600:
            pFVar30 = local_8b0;
            pUVar18 = local_8b8;
            local_7c7 = local_945 == CalculateMotionVectorsDuringImport;
            iVar21 = (int)local_928;
            uVar43 = (ulonglong)(int)local_928;
            local_7cc = local_8ec;
            local_7c8 = local_941;
            local_7c6 = local_940;
            local_948 = (bool)(local_948 & 1 < (int)local_928);
            local_7d0 = local_8f0;
            local_7d8 = this_06;
            if (local_948 == false) {
              pFVar47 = (FNodeInfo *)(local_930.Data + uVar43 * 0xc0);
              this_07.Data = local_930.Data;
              while( true ) {
                if ((int)uVar43 != iVar21) {
                  local_943 = (<lambda_1>)0x0;
                  `TCheckedPointerIterator<`UInterchangeGeometryCacheFactory::BeginImportAsset_GameThread'::__l2::FNodeInfo,int,0>
                  ::operator!='::__l2::<lambda_1>::operator()(&local_943);
                }
                pFVar30 = local_8b0;
                this_06 = local_8e0;
                cVar45 = local_946;
                if ((FNodeInfo *)this_07.Data == pFVar47) break;
                local_880.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_880.ArrayNum = 0;
                local_880.ArrayMax = 0;
                ::FString::ParseIntoArray((FString *)this_07.Data,&local_880,L"/",true);
                uVar44 = local_880.ArrayNum - 1;
                uVar22 = 0;
                if ((int)uVar44 < local_880.ArrayNum) {
                  uVar22 = ~uVar44 >> 0x1f;
                }
                if ((uVar22 == 0) &&
                   (bVar52 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar52)) {
                  pcVar10 = (code *)swi(3);
                  pFVar27 = (FImportAssetResult *)(*pcVar10)();
                  return pFVar27;
                }
                local_850.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_850.Data.ArrayNum =
                     *(int *)(local_880.AllocatorInstance.Data + (longlong)(int)uVar44 * 0x10 + 8);
                lVar25 = (longlong)local_850.Data.ArrayNum;
                pvVar24 = *(void **)(local_880.AllocatorInstance.Data + (longlong)(int)uVar44 * 0x10
                                    );
                if (local_850.Data.ArrayNum == 0) {
                  local_850.Data.ArrayMax = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (2,2,local_850.Data.ArrayNum,0,(ForAnyElementType *)&local_850,
                             local_850.Data.ArrayNum,&local_850.Data.ArrayMax);
                  memcpy(local_850.Data.AllocatorInstance.Data,pvVar24,lVar25 * 2);
                }
                local_8c0 = `UInterchangeGeometryCacheFactory::BeginImportAsset_GameThread'::__l2::
                            <lambda_1>::operator()
                                      (&local_7d8,&local_850,
                                       ((FNodeInfo *)this_07.Data)->bConstantTopology);
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (local_8c0 != (UGeometryCacheTrackStreamable *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)local_8c0);
                }
                pFVar34 = (pUVar18->Tracks).AllocatorInstance.Data;
                if (((pFVar34 <= (FScriptContainerElement *)&local_8c0) &&
                    ((FScriptContainerElement *)&local_8c0 <
                     pFVar34 + (longlong)(pUVar18->Tracks).ArrayMax * 8)) &&
                   (bVar52 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar52)) {
                  pcVar10 = (code *)swi(3);
                  pFVar27 = (FImportAssetResult *)(*pcVar10)();
                  return pFVar27;
                }
                iVar50 = (pUVar18->Tracks).ArrayNum;
                piVar1 = &(pUVar18->Tracks).ArrayMax;
                if (iVar50 == *piVar1) {
                  iVar50 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&(pUVar18->Tracks).AllocatorInstance,piVar1);
                }
                (pUVar18->Tracks).ArrayNum = iVar50 + 1;
                *(UGeometryCacheTrackStreamable **)
                 ((pUVar18->Tracks).AllocatorInstance.Data + (longlong)iVar50 * 8) = local_8c0;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (local_8c0 != (UGeometryCacheTrackStreamable *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)local_8c0);
                }
                if (local_850.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_850.Data.AllocatorInstance.Data);
                }
                DestructItems<FString,int>
                          ((FString *)local_880.AllocatorInstance.Data,local_880.ArrayNum);
                if (local_880.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_880.AllocatorInstance.Data);
                }
                uVar43 = local_928 & 0xffffffff;
                this_07.Data = this_07.Data + 0xc0;
              }
            }
            else {
              pTVar48 = &pUVar46->Tracks;
              local_8c8 = `UInterchangeGeometryCacheFactory::BeginImportAsset_GameThread'::__l2::
                          <lambda_1>::operator()(&local_7d8,local_8b0,local_947);
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (local_8c8 != (UGeometryCacheTrackStreamable *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)local_8c8);
              }
              pFVar34 = (pTVar48->AllocatorInstance).Data;
              if (((pFVar34 <= (FScriptContainerElement *)&local_8c8) &&
                  ((FScriptContainerElement *)&local_8c8 <
                   pFVar34 + (longlong)(pUVar46->Tracks).ArrayMax * 8)) &&
                 (bVar52 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar52)) {
                pcVar10 = (code *)swi(3);
                pFVar27 = (FImportAssetResult *)(*pcVar10)();
                return pFVar27;
              }
              iVar21 = (pUVar46->Tracks).ArrayNum;
              piVar1 = &(pUVar46->Tracks).ArrayMax;
              if (iVar21 == *piVar1) {
                iVar21 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&pTVar48->AllocatorInstance,piVar1);
              }
              (pUVar46->Tracks).ArrayNum = iVar21 + 1;
              *(UGeometryCacheTrackStreamable **)
               ((pTVar48->AllocatorInstance).Data + (longlong)iVar21 * 8) = local_8c8;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (local_8c8 != (UGeometryCacheTrackStreamable *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)local_8c8);
              }
            }
            pFVar49 = local_858;
            pUVar5 = local_910;
            local_37c = 0x80;
            local_378 = 0xffffffff;
            pUVar7 = local_858->ReimportObject;
            local_3a8._0_8_ = (FScriptContainerElement *)0x0;
            local_3a8._8_8_ = 0;
            local_388 = (void *)0x0;
            local_380 = 0;
            local_374 = 0;
            local_368 = (ForElementType<FSetElementId>)0x0;
            local_360 = 0;
            UInterchangeMeshFactoryNode::GetSlotMaterialDependencies
                      ((UInterchangeMeshFactoryNode *)local_910,
                       (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                        *)local_3a8);
            pUVar6 = pFVar49->NodeContainer;
            local_600.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
            local_600.Elements._48_8_ = _UNK_150631d98;
            local_600.Elements._0_8_ = 0;
            local_600.Elements._8_8_ = 0;
            local_600.Elements._32_8_ = 0;
            local_600.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
            local_600.HashSize = 0;
            TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
            ::operator=(&local_600,
                        (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                         *)local_3a8);
            local_230 = (undefined ***)0x0;
            local_248 = &
                        ___7__TFunction_OwnedObject_P6AXAEAU__TObjectPtr_VUMaterialInterface_____Z_0A__0A__Function_Private_Core_UE__6B_
            ;
            local_788.Materials = &this_06->Materials;
            local_788.MaterialSlotNames = &this_06->MaterialSlotNames;
            local_240 = `UE::Interchange::Private::MeshHelper::
                        GeometryCacheFactorySetupAssetMaterialArray'::__l2::<lambda_1>::
                        <lambda_invoker_cdecl>;
            local_788.EmplaceMaterialFunctor =
                 (TFunction<void___cdecl(TObjectPtr<UMaterialInterface>_&)> *)local_258;
            local_258[0] = UE::Core::Private::Function::
                           TFunctionRefCaller<void_(__cdecl*)(TObjectPtr<UMaterialInterface>_&),void,TObjectPtr<UMaterialInterface>_&>
                           ::Call;
            local_788.MeshMaterialArrayViewer.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            local_788.MeshMaterialArrayViewer.ArrayNum = 0;
            local_788.MeshMaterialArrayViewer.ArrayMax = 0;
            UE::Interchange::Private::MeshHelper::
            FMeshMaterialArrayViewer<TObjectPtr<UMaterialInterface>_>::RebuildViewer(&local_788);
            local_518.Elements._0_8_ = 0;
            local_518.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
            local_518.Elements._48_8_ = _UNK_150631d98;
            local_518.Elements._8_8_ = 0;
            local_518.Elements._32_8_ = 0;
            local_518.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
            local_518.HashSize = 0;
            TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
            ::operator=(&local_518,&local_600);
            UE::Interchange::Private::MeshHelper::
            InternalMeshFactorySetupAssetMaterialArray<TObjectPtr<UMaterialInterface>_>
                      (&local_788,
                       (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                        *)&local_518,pUVar6,pUVar7 != (UObject *)0x0);
            if (local_788.MeshMaterialArrayViewer.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_788.MeshMaterialArrayViewer.AllocatorInstance.Data);
            }
            if (local_258[0] != (code *)0x0) {
              pppuVar41 = &local_248;
              if (local_230 != (undefined ***)0x0) {
                pppuVar41 = local_230;
              }
              (*(code *)(*pppuVar41)[2])();
            }
            local_600.HashSize = 0;
            if (local_600.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_600.Hash.SecondaryData);
            }
            TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&local_600.Elements);
            local_360 = 0;
            if (local_368 != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_368);
            }
            TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                               *)local_3a8,0,local_3a8._8_4_);
            iVar21 = SUB84(local_3a8._8_8_,4);
            local_3a8._8_8_ = local_3a8._8_8_ & 0xffffffff00000000;
            if (iVar21 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x28,8,0,(ForAnyElementType *)local_3a8,0,(int *)(local_3a8 + 0xc));
            }
            local_378 = 0xffffffff;
            local_374 = 0;
            local_380 = 0;
            if (0x80 < local_37c) {
              local_37c = 0x80;
              TBitArray<FDefaultBitArrayAllocator>::Realloc
                        ((TBitArray<FDefaultBitArrayAllocator> *)(local_3a8 + 0x10),0);
            }
            if (local_388 != (void *)0x0) {
              FMemory::Free(local_388);
            }
            if ((FScriptContainerElement *)local_3a8._0_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_3a8._0_8_);
            }
            iVar21 = local_938;
            iVar50 = local_93c - local_938;
            pFVar30 = ::FString::FString(&local_4c8,pFVar30);
            FStringFormatArg::FStringFormatArg(&local_b8,pFVar30);
            FStringFormatArg::FStringFormatArg(&local_98,0);
            FStringFormatArg::FStringFormatArg(&local_78,iVar50);
            local_890.ArrayNum = 3;
            local_890.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,3,0,&local_890.AllocatorInstance,3,&local_890.ArrayMax);
            ConstructItems<FStringFormatArg,FStringFormatArg,int>
                      (local_890.AllocatorInstance.Data,&local_b8,3);
            ::FString::FormatImpl(&local_798,L"Importing frames for {0} ({1}/{2})",&local_890);
            DestructItems<FStringFormatArg,int>
                      ((FStringFormatArg *)local_890.AllocatorInstance.Data,local_890.ArrayNum);
            if ((FStringFormatArg *)local_890.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
              FMemory::Free(local_890.AllocatorInstance.Data);
            }
            if (local_78.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_78.StringValue.Data.AllocatorInstance.Data);
            }
            if (local_98.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_98.StringValue.Data.AllocatorInstance.Data);
            }
            if (local_b8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_b8.StringValue.Data.AllocatorInstance.Data);
            }
            pFVar17 = GWarn;
            pFVar35 = FText::FromString(&local_810,&local_798);
            FSlowTask::FSlowTask(&local_578,(float)(local_93c - iVar21),pFVar35,true,pFVar17);
            FSlowTask::Initialize(&local_578);
            if (local_810.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_810.TextData.Reference + 0x10))();
            }
            FSlowTask::MakeDialog(&local_578,true,false);
            bVar52 = FApp::ShouldUseThreadingForPerformance();
            if (bVar52) {
              pFVar36 = FTaskGraphInterface::Get();
              iVar21 = (**(code **)((longlong)*pFVar36 + 0x20))(pFVar36);
            }
            else {
              iVar21 = 1;
            }
            local_2f8._0_8_ = (void *)0x0;
            local_2f8._8_8_ = 0;
            local_2d8 = (void *)0x0;
            iVar14 = GGeometryCacheParallelFrameReads;
            if (iVar21 < GGeometryCacheParallelFrameReads) {
              iVar14 = iVar21;
            }
            local_2d0 = 0;
            local_2cc = 0x80;
            local_2c8 = 0xffffffff;
            local_2c4 = 0;
            local_2b8 = (void *)0x0;
            local_2b0 = 0;
            local_2a8.Data = (FScriptContainerElement *)0x0;
            lStack_2a0 = 0;
            local_298 = 0;
            local_290 = 0;
            local_288._0_4_ = 0.1;
            local_288._4_4_ = 0;
            InitializeCriticalSectionAndSpinCount(&local_280,4000);
            UInterchangeMeshFactoryNode::CopyPayloadKeyStorageAttributes
                      ((UInterchangeBaseNode *)pUVar5,(FAttributeStorage *)local_2f8);
            bVar52 = local_944;
            iVar21 = 1;
            if (1 < iVar14) {
              iVar21 = iVar14;
            }
            pTVar48 = &local_8b8->Tracks;
            bVar51 = local_945 == ImportVelocitiesAsMotionVectors;
            if (local_948 == false) {
              local_870[3] = local_938;
              InitializeCriticalSectionAndSpinCount(&local_e0,4000);
              local_828 = FGenericPlatformProcess::GetSynchEventFromPool(false);
              local_860 = 0;
              local_85c = 0;
              local_93e = '\0';
              local_690 = local_938;
              local_68c = local_93c;
              local_688 = &local_93e;
              local_680 = &local_578;
              local_678 = &local_930;
              local_668 = local_918;
              local_660 = local_2f8;
              local_658 = &local_930;
              local_64e = local_810._10_4_;
              local_64a = local_810._14_2_;
              local_648 = local_870 + 3;
              local_640 = &local_e0;
              local_638 = &local_828;
              local_628 = &local_930;
              local_618 = (longlong)&local_860;
              local_610 = (longlong)&local_85c;
              local_730 = UE::Core::Private::Function::
                          TFunctionRefCaller<``UInterchangeGeometryCacheFactory::BeginImportAsset_GameThread'::__l2::<lambda_2>::operator()<`UInterchangeGeometryCacheFactory::BeginImportAsset_GameThread'::__l191::<lambda_4>_>'::__l2::<lambda_2>,void,int>
                          ::Call;
              local_728 = &local_690;
              local_670 = local_8b0;
              local_620 = local_8b0;
              local_64f = bVar52;
              local_750.DataPtr = (void **)0x0;
              local_750.ArrayNum = 0;
              local_650 = bVar51;
              local_630 = pTVar48;
              local_608 = iVar50;
              local_604 = iVar21;
              ParallelForImpl::
              ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                        (L"ParallelFor Task",iVar21,1,(TFunctionRef<void___cdecl(int)> *)&local_730,
                         local_943,None,&local_750);
              FGenericPlatformProcess::ReturnSynchEventToPool(local_828);
              cVar4 = local_93e;
              DeleteCriticalSection(&local_e0);
            }
            else {
              if (((int)local_928 < 1) &&
                 (bVar52 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar52)) {
                pcVar10 = (code *)swi(3);
                pFVar27 = (FImportAssetResult *)(*pcVar10)();
                return pFVar27;
              }
              bVar52 = local_944;
              dVar3 = *(double *)(local_930.Data + 0xb0);
              local_870[0] = local_938;
              InitializeCriticalSectionAndSpinCount(&local_108,4000);
              local_7e8 = FGenericPlatformProcess::GetSynchEventFromPool(false);
              local_870[1] = 0;
              local_870[2] = 0;
              local_93f = '\0';
              local_720 = local_938;
              local_71c = local_93c;
              local_718 = &local_93f;
              local_710 = &local_578;
              local_708 = &local_930;
              local_6f8 = local_918;
              local_6f0 = local_2f8;
              local_6de = local_810._10_4_;
              local_6da = local_810._14_2_;
              local_6d8 = local_870;
              local_6d0 = &local_108;
              local_6c8 = &local_7e8;
              local_6b8 = &local_930;
              local_6a8 = local_870 + 1;
              local_6a0 = local_870 + 2;
              local_740 = UE::Core::Private::Function::
                          TFunctionRefCaller<``UInterchangeGeometryCacheFactory::BeginImportAsset_GameThread'::__l2::<lambda_2>::operator()<`UInterchangeGeometryCacheFactory::BeginImportAsset_GameThread'::__l189::<lambda_3>_>'::__l2::<lambda_2>,void,int>
                          ::Call;
              local_738 = &local_720;
              local_700 = local_8b0;
              local_6b0 = local_8b0;
              local_6df = bVar52;
              local_760.DataPtr = (void **)0x0;
              local_760.ArrayNum = 0;
              local_6e8 = dVar3;
              local_6e0 = bVar51;
              local_6c0 = pTVar48;
              local_698 = iVar50;
              local_694 = iVar21;
              ParallelForImpl::
              ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                        (L"ParallelFor Task",iVar21,1,(TFunctionRef<void___cdecl(int)> *)&local_740,
                         local_943,None,&local_760);
              FGenericPlatformProcess::ReturnSynchEventToPool(local_7e8);
              cVar4 = local_93f;
              DeleteCriticalSection(&local_108);
            }
            if (cVar4 == '\0') {
              UGeometryCache::SetFrameStartEnd(this_06,local_938,local_93c);
              pFVar27 = local_920;
              local_920->ImportedObject = (UObject *)this_06;
              DeleteCriticalSection(&local_280);
              if (local_2a8.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2a8.Data);
              }
              local_2b0 = 0;
              if (local_2b8 != (void *)0x0) {
                FMemory::Free(local_2b8);
              }
              TSparseArray<TSparseSetElement<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::Empty((TSparseArray<TSparseSetElement<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_2f8,0);
              if (local_2d8 != (void *)0x0) {
                FMemory::Free(local_2d8);
              }
              if ((void *)local_2f8._0_8_ != (void *)0x0) {
                FMemory::Free((void *)local_2f8._0_8_);
              }
              FSlowTask::Destroy(&local_578);
              if (local_578.FrameMessage.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_578.FrameMessage.TextData.Reference + 0x10))();
              }
              if (local_578.DefaultMessage.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_578.DefaultMessage.TextData.Reference + 0x10))();
              }
              if (local_798.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_798.Data.AllocatorInstance.Data);
              }
              DestructItems<FString,int>
                        ((FString *)local_900.AllocatorInstance.Data,local_900.ArrayNum);
              if (local_900.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_900.AllocatorInstance.Data);
              }
              DestructItems<_UInterchangeGeometryCacheFactory::BeginImportAsset_GameThread_::__l2::FNodeInfo,int>
                        ((FNodeInfo *)local_930.Data,(int)local_928);
              if ((FNodeInfo *)local_930.Data != (FNodeInfo *)0x0) {
                FMemory::Free(local_930.Data);
              }
              if (cVar45 == '\0') {
                return pFVar27;
              }
              FCpuProfilerTrace::OutputEndEvent();
              return pFVar27;
            }
            pFVar37 = FUObjectArray::IndexToObject
                                (&GUObjectArray,*(int *)((longlong)&this_06->_padding_ + 4));
            if ((((ulonglong)((pFVar37->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x1e & 1) != 0) &&
               (bVar52 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!IsRooted()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                                    ,0xb8,L""), bVar52)) {
              pcVar10 = (code *)swi(3);
              pFVar27 = (FImportAssetResult *)(*pcVar10)();
              return pFVar27;
            }
            UObjectBase::AtomicallySetFlags((UObjectBase *)this_06,RF_MirroredGarbage);
            pFVar37 = FUObjectArray::IndexToObject
                                (&GUObjectArray,*(int *)((longlong)&this_06->_padding_ + 4));
            FUObjectItem::ThisThreadAtomicallySetFlag(pFVar37,Garbage);
            pFVar37 = FUObjectArray::IndexToObject
                                (&GUObjectArray,*(int *)((longlong)&this_06->_padding_ + 4));
            FUObjectItem::ClearRootFlags(pFVar37,Async);
            DeleteCriticalSection(&local_280);
            if (local_2a8.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2a8.Data);
            }
            local_2b0 = 0;
            if (local_2b8 != (void *)0x0) {
              FMemory::Free(local_2b8);
            }
            TSparseArray<TSparseSetElement<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::Empty((TSparseArray<TSparseSetElement<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_2f8,0);
            if (local_2d8 != (void *)0x0) {
              FMemory::Free(local_2d8);
            }
            if ((void *)local_2f8._0_8_ != (void *)0x0) {
              FMemory::Free((void *)local_2f8._0_8_);
            }
            FSlowTask::Destroy(&local_578);
            if (local_578.FrameMessage.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_578.FrameMessage.TextData.Reference + 0x10))();
            }
            if (local_578.DefaultMessage.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_578.DefaultMessage.TextData.Reference + 0x10))();
            }
            if (local_798.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_798.Data.AllocatorInstance.Data);
            }
            goto LAB_14e6ea369;
          }
        }
        else {
          this_06 = Cast<UGeometryCache,UObject>((UObject *)local_8e0);
          local_8e0 = this_06;
          if (this_06 != (UGeometryCache *)0x0) {
            pTVar33 = ::operator_new(0x30);
            pTVar40 = (TArray<UGeometryCacheComponent_*,TSizedDefaultAllocator<32>_> *)0x0;
            if (pTVar33 != (TArray<UGeometryCacheComponent_*,TSizedDefaultAllocator<32>_> *)0x0) {
              pTVar33->ArrayNum = 0;
              pTVar33->ArrayMax = 0;
              (pTVar33->AllocatorInstance).Data =
                   (FScriptContainerElement *)
                   UE::Core::Private::PimplPtr::DeleterFunc<FGeometryCacheComponentResetAsset>;
              FGeometryCacheComponentResetAsset::FGeometryCacheComponentResetAsset
                        ((FGeometryCacheComponentResetAsset *)(pTVar33 + 1),this_06);
              pTVar40 = pTVar33;
            }
            pUVar46 = local_8b8;
            pTVar2 = &local_8b8->ResetAssetOnReimport;
            if ((TPimplPtr<FGeometryCacheComponentResetAsset,0> *)&local_5a8 == pTVar2) {
              if ((FGeometryCacheComponentResetAsset *)(pTVar40 + 1) !=
                  (FGeometryCacheComponentResetAsset *)0x0) {
                pFVar34 = (pTVar40->AllocatorInstance).Data;
                goto LAB_14e6ea529;
              }
            }
            else {
              pFVar9 = pTVar2->Ptr;
              pTVar2->Ptr = (FGeometryCacheComponentResetAsset *)(pTVar40 + 1);
              if (pFVar9 != (FGeometryCacheComponentResetAsset *)0x0) {
                pFVar34 = pFVar9[-1].GeometryCacheComponents.AllocatorInstance.Data;
                pTVar40 = &pFVar9[-1].GeometryCacheComponents;
LAB_14e6ea529:
                (*(code *)pFVar34)(pTVar40);
              }
            }
            iVar21 = (this_06->Materials).ArrayNum;
            this_00 = &this_06->Materials;
            pFVar34 = (this_00->AllocatorInstance).Data;
            local_8a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_8a8.ArrayNum = iVar21;
            if (iVar21 == 0) {
              local_8a8.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar21,0,&local_8a8.AllocatorInstance,iVar21,&local_8a8.ArrayMax);
              ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
                        (local_8a8.AllocatorInstance.Data,(TObjectPtr<UMaterialInterface> *)pFVar34,
                         iVar21);
            }
            this_01 = &this_06->MaterialSlotNames;
            local_820.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            TArray<FName,TSizedDefaultAllocator<32>_>::CopyToEmpty<FName,int>
                      (&local_820,(FName *)(this_01->AllocatorInstance).Data,
                       (this_06->MaterialSlotNames).ArrayNum,0);
            UGeometryCache::ClearForReimporting(this_06);
            if (this_00 != &local_8a8) {
              TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>::
              CopyToEmpty<TObjectPtr<UMaterialInterface>,int>
                        (this_00,(TObjectPtr<UMaterialInterface> *)local_8a8.AllocatorInstance.Data,
                         local_8a8.ArrayNum,(this_06->Materials).ArrayMax);
            }
            if (this_01 != &local_820) {
              TArray<FName,TSizedDefaultAllocator<32>_>::CopyToEmpty<FName,int>
                        (this_01,(FName *)local_820.AllocatorInstance.Data,local_820.ArrayNum,
                         (this_06->MaterialSlotNames).ArrayMax);
            }
            if ((FName *)local_820.AllocatorInstance.Data != (FName *)0x0) {
              FMemory::Free(local_820.AllocatorInstance.Data);
            }
            if (local_8a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_8a8.AllocatorInstance.Data);
            }
            goto LAB_14e6ea600;
          }
        }
        if ((pFVar49->ReimportObject == (UObject *)0x0) && (2 < (byte)LogInterchangeImport._0_1_)) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeImport)
          ;
        }
LAB_14e6ea369:
        iVar21 = local_900.ArrayNum;
      }
      DestructItems<FString,int>((FString *)local_900.AllocatorInstance.Data,iVar21);
      if (local_900.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_900.AllocatorInstance.Data);
      }
      DestructItems<_UInterchangeGeometryCacheFactory::BeginImportAsset_GameThread_::__l2::FNodeInfo,int>
                ((FNodeInfo *)local_930.Data,(int)local_928);
      if ((FNodeInfo *)local_930.Data != (FNodeInfo *)0x0) {
        FMemory::Free(local_930.Data);
      }
      goto LAB_14e6eb493;
    }
  }
  if (1 < (byte)LogInterchangeImport._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeImport);
  }
LAB_14e6eb493:
  if (cVar45 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return local_920;
}

// ClearBackupSourceData @ 14e6ec140

void __thiscall
UInterchangeGeometryCacheFactory::ClearBackupSourceData
          (UInterchangeGeometryCacheFactory *this,UObject *param_1)

{
  return;
}

// CreatePayloadTasks @ 14e6eda50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UInterchangeGeometryCacheFactory::CreatePayloadTasks
          (UInterchangeGeometryCacheFactory *this,FImportAssetObjectParams *param_1,bool param_2,
          TArray<TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>,TSizedDefaultAllocator<32>_>
          *param_3)

{
  FString *pFVar1;
  ulonglong uVar2;
  UInterchangeTranslatorBase *this_00;
  UInterchangeGeometryCacheFactoryNode *this_01;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ForAnyElementType FVar8;
  FAnimationPayloadData *this_02;
  void *_Src;
  longlong *plVar9;
  bool bVar10;
  UClass *pUVar11;
  void *pvVar12;
  TReferenceControllerBase<1> *pTVar13;
  byte bVar14;
  TReferenceControllerBase<1> *pTVar15;
  int iVar16;
  longlong lVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  TReferenceControllerBase<1> *pTVar22;
  bool bVar23;
  undefined1 auStackY_378 [32];
  undefined1 local_327;
  undefined1 local_326;
  ForAnyElementType local_320;
  int local_318;
  int local_314;
  ForAnyElementType local_310;
  undefined8 local_308;
  FAnimationPayloadData *local_300;
  void *local_2f8;
  TReferenceControllerBase<1> *local_2f0;
  TReferenceControllerBase<1> *local_2e8;
  void *local_2e0;
  FString local_2d8;
  EInterchangeAnimationPayLoadType local_2c8;
  longlong *local_2c0;
  uint uStack_2b8;
  uint uStack_2b4;
  TBitArray<FDefaultBitArrayAllocator> *local_2b0;
  undefined4 uStack_2a8;
  uint uStack_2a4;
  uint local_2a0;
  uint uStack_29c;
  int iStack_298;
  undefined4 uStack_294;
  int local_290;
  int local_28c;
  TPairInitializer<FString_const_&,UE::Interchange::FAnimationPayloadData_&&> local_288;
  code *local_278;
  undefined4 local_268;
  undefined4 uStack_264;
  atomic<int> aStack_260;
  atomic<int> aStack_25c;
  longlong local_258;
  undefined8 *local_250;
  FString local_248;
  FString local_238;
  EInterchangeAnimationPayLoadType local_228;
  double local_220;
  double dStack_218;
  double dStack_210;
  void *local_208;
  int local_200;
  int local_1fc;
  FString local_1f8;
  FRichCurve *local_1e8;
  undefined8 local_1e0;
  FString *local_1d8;
  undefined8 local_1d0;
  void *local_1c8;
  undefined8 local_1c0;
  FInterchangeStepCurve *local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  void *local_190;
  undefined8 local_188;
  FString local_180;
  EInterchangeAnimationPayLoadType local_170;
  undefined1 local_168;
  longlong *local_160;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_158;
  undefined8 uStack_138;
  undefined1 local_128 [64];
  TOptional<FString>_u_0 local_e8;
  FString *local_d8;
  FString *local_d0;
  undefined1 local_c8 [32];
  uint *local_a8;
  uint local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int local_94;
  void *local_88;
  undefined4 local_80;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_378;
  bVar23 = -1 < CpuChannel->Enabled;
  local_326 = param_2;
  if (bVar23) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId87,"UInterchangeGeometryCacheFactory::CreatePayloadTasks",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangeGeometryCacheFactory.cpp"
               ,0x57);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId87);
  }
  this_00 = param_1->Translator;
  if (this_00 != (UInterchangeTranslatorBase *)0x0) {
    pUVar11 = Z_Construct_UClass_UInterchangeAnimationPayloadInterface_NoRegister();
    pvVar12 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar11);
    if ((pvVar12 != (void *)0x0) &&
       (this_01 = (UInterchangeGeometryCacheFactoryNode *)param_1->AssetNode,
       this_01 != (UInterchangeGeometryCacheFactoryNode *)0x0)) {
      pUVar11 = Z_Construct_UClass_UInterchangeGeometryCacheFactoryNode_NoRegister();
      iVar16 = (int)pUVar11->_padding_;
      if ((iVar16 <= *(int *)(this_01->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar16 * 8) ==
          &pUVar11->_padding_)) {
        local_c8._0_8_ = 0;
        local_c8._8_8_ = 0;
        local_a8 = (uint *)0x0;
        uVar18 = 0;
        local_a0 = 0;
        local_94 = 0;
        local_88 = (void *)0x0;
        local_80 = 0;
        local_9c = 0x80;
        local_98 = 0xffffffff;
        UInterchangeGeometryCacheFactoryNode::GetSceneNodeAnimationPayloadKeys
                  (this_01,(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                            *)local_c8);
        local_288.Value = (FAnimationPayloadData *)&this->TransformAnimationPayloadResults;
        TSet<TTuple<FString,UE::Interchange::FAnimationPayloadData>,TDefaultMapHashableKeyFuncs<FString,UE::Interchange::FAnimationPayloadData,0>,FDefaultSetAllocator>
        ::Reserve((TSet<TTuple<FString,UE::Interchange::FAnimationPayloadData>,TDefaultMapHashableKeyFuncs<FString,UE::Interchange::FAnimationPayloadData,0>,FDefaultSetAllocator>
                   *)local_288.Value,local_c8._8_4_ - local_94);
        uVar20 = local_a0;
        local_2a0 = 0;
        uStack_2b4 = 1;
        uStack_2a4 = local_2a0;
        if (local_a0 != 0) {
          puVar19 = (uint *)(local_c8 + 0x10);
          if (local_a8 != (uint *)0x0) {
            puVar19 = local_a8;
          }
          uVar21 = *puVar19;
          uVar18 = 0;
          local_2a0 = 0;
          while (uVar21 == 0) {
            uVar18 = uVar18 + 1;
            local_2a0 = local_2a0 + 0x20;
            uStack_2a4 = local_a0;
            if ((int)(((int)(local_a0 - 1) >> 0x1f & 0x1fU) + (local_a0 - 1)) >> 5 < (int)uVar18)
            goto LAB_14e6edc6f;
            uVar21 = puVar19[(int)uVar18];
          }
          uStack_2b4 = -uVar21 & uVar21;
          uVar2 = (ulonglong)uStack_2b4 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          local_290 = (int)lVar17;
          uStack_2a4 = local_290 + -1 + local_2a0;
          if ((int)local_a0 < (int)uStack_2a4) {
            uStack_2a4 = local_a0;
          }
        }
LAB_14e6edc6f:
        local_2c0 = (longlong *)local_c8;
        local_2b0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10);
        uVar21 = local_a0 & 0xffffffe0;
        iStack_298 = local_c8._8_4_ - local_94;
        uStack_2a8 = 0xffffffff;
        TStack_158.CurrentBitIndex = uStack_2a4;
        TStack_158.UnvisitedBitMask = 0xffffffff;
        TStack_158._padding_ = CONCAT44(uStack_2b4,uVar18);
        iVar16 = (int)local_a0 >> 5;
        TStack_158._28_4_ = uStack_2a4;
        TStack_158.BaseBitIndex = local_2a0;
        uStack_138 = CONCAT44(uStack_294,iStack_298);
        bVar14 = (byte)local_a0;
        local_2e0 = pvVar12;
        uStack_2b8 = uVar18;
        uStack_29c = uStack_2a4;
        local_160 = local_2c0;
        TStack_158.Array = local_2b0;
        if (((int)local_a0 < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        this_02 = local_288.Value;
        pvVar12 = local_2e0;
        uVar7 = _UNK_151444f58;
        uVar6 = ___xmm_0000000000000000403e000000000000;
        uVar5 = __real_3fa1111111111111;
        if (uVar20 != local_a0) {
          puVar19 = (uint *)(local_c8 + 0x10);
          if (local_a8 != (uint *)0x0) {
            puVar19 = local_a8;
          }
          uVar18 = -1 << (bVar14 & 0x1f) & puVar19[iVar16];
          while (uVar18 == 0) {
            iVar16 = iVar16 + 1;
            uVar21 = uVar21 + 0x20;
            uVar20 = local_a0;
            if ((int)(((int)(local_a0 - 1) >> 0x1f & 0x1fU) + (local_a0 - 1)) >> 5 < iVar16)
            goto LAB_14e6eddae;
            uVar18 = puVar19[iVar16];
          }
          uVar2 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
          lVar17 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          local_28c = (int)lVar17;
          uVar20 = local_28c + -1 + uVar21;
          if ((int)local_a0 < (int)uVar20) {
            uVar20 = local_a0;
          }
        }
LAB_14e6eddae:
        while( true ) {
          plVar9 = local_160;
          pTVar15 = (TReferenceControllerBase<1> *)0x0;
          if ((int)local_160[1] - *(int *)((longlong)local_160 + 0x34) != (int)uStack_138) {
            local_327 = 0;
            `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_327);
          }
          if (((TStack_158.CurrentBitIndex == uVar20) &&
              (TStack_158.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10))) &&
             (plVar9 == (longlong *)local_c8)) break;
          pFVar1 = (FString *)(*plVar9 + (longlong)TStack_158.CurrentBitIndex * 0x28);
          ::FString::FString(&local_2d8,pFVar1 + 1);
          local_2c8 = GEOMETRY_CACHE_TRANSFORM;
          ::FString::FString(&local_248,pFVar1);
          ::FString::FString(&local_238,&local_2d8);
          local_228 = local_2c8;
          dStack_218 = 0.0;
          dStack_210 = 0.0;
          local_220 = 0.0;
          local_208 = (void *)0x0;
          local_200 = 0;
          local_1fc = -1;
          ::FString::FString(&local_1f8,pFVar1);
          local_198 = uVar5;
          local_1e8 = (FRichCurve *)0x0;
          local_1e0 = 0;
          local_1d8 = (FString *)0x0;
          local_1d0 = 0;
          local_1c8 = (void *)0x0;
          local_1c0 = 0;
          local_1b8 = (FInterchangeStepCurve *)0x0;
          local_1b0 = 0;
          local_1a8 = uVar6;
          uStack_1a0 = uVar7;
          local_190 = (void *)0x0;
          local_188 = 0;
          ::FString::FString(&local_180,&local_2d8);
          local_170 = local_2c8;
          local_d0 = &local_1f8;
          local_168 = 0;
          local_d8 = pFVar1;
          TSet<TTuple<FString,UE::Interchange::FAnimationPayloadData>,TDefaultMapHashableKeyFuncs<FString,UE::Interchange::FAnimationPayloadData,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FString_const_&,UE::Interchange::FAnimationPayloadData_&&>_>
                    ((TSet<TTuple<FString,UE::Interchange::FAnimationPayloadData>,TDefaultMapHashableKeyFuncs<FString,UE::Interchange::FAnimationPayloadData,0>,FDefaultSetAllocator>
                      *)this_02,&local_288,(bool *)&local_d8);
          if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_180.Data.AllocatorInstance.Data);
          }
          if (local_190 != (void *)0x0) {
            FMemory::Free(local_190);
          }
          DestructItems<FInterchangeStepCurve,int>(local_1b8,(int)local_1b0);
          if (local_1b8 != (FInterchangeStepCurve *)0x0) {
            FMemory::Free(local_1b8);
          }
          if (local_1c8 != (void *)0x0) {
            FMemory::Free(local_1c8);
          }
          DestructItems<FString,int>(local_1d8,(int)local_1d0);
          if (local_1d8 != (FString *)0x0) {
            FMemory::Free(local_1d8);
          }
          DestructItems<FRichCurve,int>(local_1e8,(int)local_1e0);
          if (local_1e8 != (FRichCurve *)0x0) {
            FMemory::Free(local_1e8);
          }
          if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
          }
          ::FString::FString((FString *)local_128,&local_248);
          ::FString::FString((FString *)(local_128 + 0x10),&local_238);
          _Src = local_208;
          local_128._40_8_ = local_220;
          local_128._48_8_ = dStack_218;
          local_128[0x20] = local_228;
          local_128._56_8_ = dStack_210;
          local_e8.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_e8.TypedValue.Data.ArrayNum = 0;
          local_e8.TypedValue.Data.ArrayMax = -1;
          if (local_1fc != -1) {
            lVar17 = (longlong)local_200;
            local_e8.TypedValue.Data.ArrayNum = local_200;
            if (local_200 == 0) {
              local_e8.TypedValue.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_200,0,(ForAnyElementType *)(local_128 + 0x40),local_200,
                         (int *)(local_128 + 0x4c));
              memcpy((void *)local_e8.TypedValue.Data.AllocatorInstance.Data,_Src,lVar17 * 2);
            }
          }
          local_320.Data = (FScriptContainerElement *)0x0;
          local_318 = 1;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x50,8,1,0,&local_320,1,&local_314);
          ConstructItems<UE::Interchange::FAnimationPayloadQuery,UE::Interchange::FAnimationPayloadQuery,int>
                    (local_320.Data,(FAnimationPayloadQuery *)local_128,1);
          if ((local_e8.TypedValue.Data.ArrayMax != -1) &&
             (local_e8.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free((void *)local_e8.TypedValue.Data.AllocatorInstance.Data);
          }
          if ((FScriptContainerElement *)local_128._16_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_128._16_8_);
          }
          if ((FScriptContainerElement *)local_128._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_128._0_8_);
          }
          iVar16 = local_318;
          FVar8.Data = local_320.Data;
          local_310.Data = (FScriptContainerElement *)0x0;
          local_308 = CONCAT44(local_308._4_4_,local_318);
          if (local_318 == 0) {
            local_308 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,8,local_318,0,&local_310,local_318,(int *)((longlong)&local_308 + 4));
            ConstructItems<UE::Interchange::FAnimationPayloadQuery,UE::Interchange::FAnimationPayloadQuery,int>
                      (local_310.Data,(FAnimationPayloadQuery *)FVar8.Data,iVar16);
          }
          local_300 = this_02;
          local_2f8 = pvVar12;
          pTVar13 = ::operator_new(0xb0);
          if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
            pTVar22 = (TReferenceControllerBase<1> *)&DAT_00000010;
          }
          else {
            pTVar13->SharedReferenceCount = (atomic<int>)0x1;
            pTVar13->WeakReferenceCount = (atomic<int>)0x1;
            local_278 = (code *)0x0;
            pTVar13->_padding_ =
                 (longlong)
                 &
                 ___7__TIntrusiveReferenceController_VFInterchangeTaskLambda_Interchange_UE___00_SharedPointerInternals__6B_
            ;
            local_250 = (undefined8 *)0x0;
            local_250 = FMemory::Malloc(0x28,8);
            local_250[1] = 0;
            *local_250 = &UE::Core::Private::Function::
                          TFunction_OwnedObject<`UInterchangeGeometryCacheFactory::CreatePayloadTasks'::`12'::<lambda_1>,0,1>
                          ::_vftable_;
            local_250[1] = local_310.Data;
            local_310.Data = (FScriptContainerElement *)0x0;
            *(int *)(local_250 + 2) = (int)local_308;
            *(undefined4 *)((longlong)local_250 + 0x14) = local_308._4_4_;
            local_308 = 0;
            local_250[3] = local_300;
            local_250[4] = local_2f8;
            if (local_250 + 1 != (undefined8 *)0x0) {
              local_278 = UE::Core::Private::Function::
                          TFunctionRefCaller<`UInterchangeGeometryCacheFactory::CreatePayloadTasks'::__l12::<lambda_1>,void>
                          ::Call;
            }
            pTVar13[1]._padding_ = (longlong)&___7FInterchangeTaskBase_Interchange_UE__6B_;
            InitializeCriticalSectionAndSpinCount
                      ((LPCRITICAL_SECTION)&pTVar13[1].SharedReferenceCount,4000);
            pTVar13[1]._padding_ = (longlong)&___7FInterchangeTaskLambda_Interchange_UE__6B_;
            *(undefined1 *)&pTVar13[7]._padding_ = local_326;
            pTVar13[4]._padding_ = -1;
            *(undefined1 *)&pTVar13[4].SharedReferenceCount = 0;
            pTVar13[5]._padding_ = 0;
            pTVar13[5].SharedReferenceCount = (atomic<int>)0x0;
            pTVar13[5].WeakReferenceCount = (atomic<int>)0x0;
            pTVar13[6]._padding_ = 0;
            pTVar13[6].SharedReferenceCount = (atomic<int>)0x0;
            pTVar13[6].WeakReferenceCount = (atomic<int>)0x0;
            pTVar13[8]._padding_ = (longlong)local_278;
            *(undefined8 **)&pTVar13[10].SharedReferenceCount = local_250;
            *(undefined4 *)&pTVar13[9]._padding_ = local_268;
            *(undefined4 *)((longlong)&pTVar13[9]._padding_ + 4) = uStack_264;
            pTVar13[9].SharedReferenceCount = aStack_260;
            pTVar13[9].WeakReferenceCount = aStack_25c;
            local_250 = (undefined8 *)0x0;
            pTVar13[10]._padding_ = local_258;
            if (pTVar13[8]._padding_ == 0) {
              if (local_278 != (code *)0x0) {
                (**(code **)(CONCAT44(uStack_264,local_268) + 0x10))(&local_268);
              }
            }
            else {
              local_278 = (code *)0x0;
            }
            pTVar22 = pTVar13 + 1;
            if ((pTVar22 == (TReferenceControllerBase<1> *)0x0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InObject != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x246,L""), bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            LOCK();
            pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
            UNLOCK();
            pTVar15 = pTVar13;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar15);
          DestructItems<UE::Interchange::FAnimationPayloadQuery,int>
                    ((FAnimationPayloadQuery *)local_310.Data,(int)local_308);
          if ((FAnimationPayloadQuery *)local_310.Data != (FAnimationPayloadQuery *)0x0) {
            FMemory::Free(local_310.Data);
          }
          if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
            UNLOCK();
          }
          pFVar3 = (param_3->AllocatorInstance).Data;
          local_2f0 = pTVar22;
          local_2e8 = pTVar15;
          if (((pFVar3 <= (FScriptContainerElement *)&local_2f0) &&
              ((FScriptContainerElement *)&local_2f0 < pFVar3 + (longlong)param_3->ArrayMax * 0x10))
             && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar16 = param_3->ArrayNum;
          if (iVar16 == param_3->ArrayMax) {
            iVar16 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&param_3->AllocatorInstance,&param_3->ArrayMax);
          }
          param_3->ArrayNum = iVar16 + 1;
          pFVar3 = (param_3->AllocatorInstance).Data;
          *(TReferenceControllerBase<1> **)(pFVar3 + (longlong)iVar16 * 0x10) = local_2f0;
          *(TReferenceControllerBase<1> **)(pFVar3 + (longlong)iVar16 * 0x10 + 8) = local_2e8;
          local_2e8 = (TReferenceControllerBase<1> *)0x0;
          local_2f0 = (TReferenceControllerBase<1> *)0x0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar15);
          DestructItems<UE::Interchange::FAnimationPayloadQuery,int>
                    ((FAnimationPayloadQuery *)local_320.Data,local_318);
          if ((FAnimationPayloadQuery *)local_320.Data != (FAnimationPayloadQuery *)0x0) {
            FMemory::Free(local_320.Data);
          }
          if ((local_1fc != -1) && (local_208 != (void *)0x0)) {
            FMemory::Free(local_208);
          }
          if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_238.Data.AllocatorInstance.Data);
          }
          if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_248.Data.AllocatorInstance.Data);
          }
          if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
          }
          TStack_158.UnvisitedBitMask = TStack_158.UnvisitedBitMask & ~TStack_158._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_158);
        }
        local_80 = 0;
        if (local_88 != (void *)0x0) {
          FMemory::Free(local_88);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_c8);
      }
    }
  }
  if (bVar23) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// EndImportAsset_GameThread @ 14e6ef1b0

/* WARNING: Enum "Type": Some values do not have unique names */

FImportAssetResult * __thiscall
UInterchangeGeometryCacheFactory::EndImportAsset_GameThread
          (UInterchangeGeometryCacheFactory *this,FImportAssetResult *__return_storage_ptr__,
          FImportAssetObjectParams *param_1)

{
  UInterchangeFactoryBaseNode *pUVar1;
  FGeometryCacheComponentResetAsset *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  UClass *pUVar8;
  FImportAssetResult *pFVar9;
  size_t sVar10;
  UObject *pUVar11;
  bool bVar12;
  FScriptContainerElement *local_38;
  undefined4 uStack_2c;
  TStringView<wchar_t> local_28;
  
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId781,
               "UInterchangeGeometryCacheFactory::EndImportAsset_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangeGeometryCacheFactory.cpp"
               ,0x30d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId781);
  }
  pUVar1 = param_1->AssetNode;
  __return_storage_ptr__->bIsFactorySkipAsset = false;
  __return_storage_ptr__->ImportedObject = (UObject *)0x0;
  if (pUVar1 == (UInterchangeFactoryBaseNode *)0x0) {
LAB_14e6ef42e:
    if (bVar12) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    return __return_storage_ptr__;
  }
  lVar6 = (**(code **)(pUVar1->_padding_ + 0x2f8))();
  lVar7 = (**(code **)(this->_padding_ + 0x2b0))(this);
  if (lVar7 == 0) goto LAB_14e6ef42e;
  if ((*(int *)(lVar6 + 0x38) < *(int *)(lVar7 + 0x38)) ||
     (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
      lVar7 + 0x30)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) goto LAB_14e6ef42e;
  pUVar1 = param_1->AssetNode;
  if (pUVar1 == (UInterchangeFactoryBaseNode *)0x0) goto LAB_14e6ef407;
  pUVar8 = Z_Construct_UClass_UInterchangeGeometryCacheFactoryNode_NoRegister();
  iVar5 = (int)pUVar8->_padding_;
  if ((*(int *)(pUVar1->_padding_ + 0x38) < iVar5) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar1->_padding_ + 0x30) + (longlong)iVar5 * 8) !=
      &pUVar8->_padding_)) goto LAB_14e6ef407;
  lVar6 = (**(code **)(pUVar1->_padding_ + 0x2f8))(pUVar1);
  if ((lVar6 == 0) || (lVar7 = (**(code **)(this->_padding_ + 0x2b0))(this), lVar7 == 0)) {
LAB_14e6ef2fe:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("GeometryCacheClass && GeometryCacheClass->IsChildOf(GetFactoryClass())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangeGeometryCacheFactory.cpp"
                       ,0x31c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FImportAssetResult *)(*pcVar3)();
      return pFVar9;
    }
  }
  else {
    if ((*(int *)(lVar6 + 0x38) < *(int *)(lVar7 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
        lVar7 + 0x30)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_14e6ef2fe;
  }
  if ((param_1->AssetName).Data.ArrayNum == 0) {
    local_38 = (FScriptContainerElement *)0x15060d16c;
LAB_14e6ef340:
    sVar10 = wcslen((wchar_t *)local_38);
    iVar5 = (int)sVar10;
  }
  else {
    local_38 = (param_1->AssetName).Data.AllocatorInstance.Data;
    iVar5 = 0;
    if (local_38 != (FScriptContainerElement *)0x0) goto LAB_14e6ef340;
  }
  local_28._12_4_ = uStack_2c;
  local_28.Size = iVar5;
  local_28.DataPtr = (wchar_t *)local_38;
  pUVar11 = StaticFindObject((UClass *)0x0,param_1->Parent,&local_28,None);
  if (pUVar11 != (UObject *)0x0) {
    pUVar8 = Z_Construct_UClass_UGeometryCache_NoRegister();
    iVar5 = (int)pUVar8->_padding_;
    if ((iVar5 <= *(int *)(*(longlong *)&pUVar11->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar11->field_0x10 + 0x30) + (longlong)iVar5 * 8) ==
        &pUVar8->_padding_)) {
      pFVar2 = (this->ResetAssetOnReimport).Ptr;
      __return_storage_ptr__->ImportedObject = pUVar11;
      if (pFVar2 != (FGeometryCacheComponentResetAsset *)0x0) {
        (this->ResetAssetOnReimport).Ptr = (FGeometryCacheComponentResetAsset *)0x0;
        (*(code *)pFVar2[-1].GeometryCacheComponents.AllocatorInstance.Data)();
      }
      goto LAB_14e6ef407;
    }
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<2803355437913604897>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangeGeometryCacheFactory.cpp"
                     ,0x321,"GeometryCache");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pFVar9 = (FImportAssetResult *)(*pcVar3)();
    return pFVar9;
  }
  if (1 < (byte)LogInterchangeImport._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeImport);
  }
LAB_14e6ef407:
  if (!bVar12) {
    return __return_storage_ptr__;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return __return_storage_ptr__;
}

// GetFactoryAssetType @ 14e6efc00

EInterchangeFactoryAssetType __thiscall
UInterchangeGeometryCacheFactory::GetFactoryAssetType(UInterchangeGeometryCacheFactory *this)

{
  return Meshes;
}

// GetFactoryClass @ 14e6efc50

UClass * __thiscall
UInterchangeGeometryCacheFactory::GetFactoryClass(UInterchangeGeometryCacheFactory *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryCache.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCache",L"GeometryCache",
               &Z_Registration_Info_UClass_UGeometryCache.InnerSingleton,
               UGeometryCache::StaticRegisterNativesUGeometryCache,0xa0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGeometryCache>,
               InternalVTableHelperCtorCaller<UGeometryCache>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryCache.InnerSingleton;
}

// GetPrivateStaticClass @ 14e6f0c90

UClass * __cdecl UInterchangeGeometryCacheFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeGeometryCacheFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeGeometryCacheFactory",
               &Z_Registration_Info_UClass_UInterchangeGeometryCacheFactory.InnerSingleton,
               StaticRegisterNativesUInterchangeGeometryCacheFactory,0x98,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeGeometryCacheFactory>,
               InternalVTableHelperCtorCaller<UInterchangeGeometryCacheFactory>,local_res8,
               UInterchangeFactoryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeGeometryCacheFactory.InnerSingleton;
}

// GetSourceFilenames @ 14e6f1110

bool __thiscall
UInterchangeGeometryCacheFactory::GetSourceFilenames
          (UInterchangeGeometryCacheFactory *this,UObject *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  return false;
}

// ImportAsset_Async @ 14e6f2710

/* WARNING: Enum "Type": Some values do not have unique names */

FImportAssetResult * __thiscall
UInterchangeGeometryCacheFactory::ImportAsset_Async
          (UInterchangeGeometryCacheFactory *this,FImportAssetResult *__return_storage_ptr__,
          FImportAssetObjectParams *param_1)

{
  int iVar1;
  UInterchangeFactoryBaseNode *pUVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  FImportAssetResult *pFVar9;
  FStaticBasicLogRecord *pFVar10;
  bool bVar11;
  TOptional<FMD5Hash> local_38;
  
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId744,"UInterchangeGeometryCacheFactory::ImportAsset_Async",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangeGeometryCacheFactory.cpp"
               ,0x2e8);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId744);
  }
  pUVar2 = param_1->AssetNode;
  __return_storage_ptr__->bIsFactorySkipAsset = false;
  __return_storage_ptr__->ImportedObject = (UObject *)0x0;
  if (pUVar2 != (UInterchangeFactoryBaseNode *)0x0) {
    lVar5 = (**(code **)(pUVar2->_padding_ + 0x2f8))();
    lVar6 = (**(code **)(this->_padding_ + 0x2b0))(this);
    if (lVar6 != 0) {
      if ((*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38)) ||
         (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
          lVar6 + 0x30)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && (pUVar2 = param_1->AssetNode, pUVar2 != (UInterchangeFactoryBaseNode *)0x0)) {
        pUVar7 = Z_Construct_UClass_UInterchangeGeometryCacheFactoryNode_NoRegister();
        iVar1 = (int)pUVar7->_padding_;
        if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar7->_padding_)) {
          pUVar8 = param_1->Parent;
          pUVar7 = (UClass *)(**(code **)(this->_padding_ + 0x2b0))(this);
          pUVar8 = UE::Interchange::FFactoryCommon::AsyncFindObject
                             (pUVar2,pUVar7,pUVar8,&param_1->AssetName);
          if (pUVar8 == (UObject *)0x0) {
            if ((byte)LogInterchangeImport._0_1_ < 2) goto LAB_14e6f28ff;
            if ((param_1->AssetName).Data.ArrayNum == 0) {
              pFVar10 = &::LOG_Static;
            }
            else {
              pFVar10 = &::LOG_Static;
            }
          }
          else {
            pUVar7 = Z_Construct_UClass_UGeometryCache_NoRegister();
            iVar1 = (int)pUVar7->_padding_;
            if ((iVar1 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
                &pUVar7->_padding_)) {
              UInterchangeSourceData::GetFileContentHash(param_1->SourceData,&local_38);
              __return_storage_ptr__->ImportedObject = pUVar8;
              goto LAB_14e6f28ff;
            }
            bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<2803355437913604862>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangeGeometryCacheFactory.cpp"
                               ,0x2fe,"GeometryCache");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pFVar9 = (FImportAssetResult *)(*pcVar3)();
              return pFVar9;
            }
            if ((byte)LogInterchangeImport._0_1_ < 2) goto LAB_14e6f28ff;
            pFVar10 = &::LOG_Static;
          }
          UE::Logging::Private::BasicLog<2>(pFVar10,(FLogCategoryBase *)&LogInterchangeImport);
        }
      }
    }
  }
LAB_14e6f28ff:
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// ReinstateSourceData @ 14e6fa590

void __thiscall
UInterchangeGeometryCacheFactory::ReinstateSourceData
          (UInterchangeGeometryCacheFactory *this,UObject *param_1)

{
  return;
}

// SetSourceFilename @ 14e6fb3a0

bool __thiscall
UInterchangeGeometryCacheFactory::SetSourceFilename
          (UInterchangeGeometryCacheFactory *this,UObject *param_1,FString *param_2,int param_3)

{
  return false;
}

// SetupObject_GameThread @ 14e6fb9e0

void __thiscall
UInterchangeGeometryCacheFactory::SetupObject_GameThread
          (UInterchangeGeometryCacheFactory *this,FSetupObjectParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId839,
               "UInterchangeGeometryCacheFactory::SetupObject_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangeGeometryCacheFactory.cpp"
               ,0x347);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId839);
  }
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\InterchangeFactoryBase.h"
                         ,0x125,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (!bVar3) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// StaticRegisterNativesUInterchangeGeometryCacheFactory @ 14e6fcd70

void __cdecl
UInterchangeGeometryCacheFactory::StaticRegisterNativesUInterchangeGeometryCacheFactory(void)

{
  return;
}

