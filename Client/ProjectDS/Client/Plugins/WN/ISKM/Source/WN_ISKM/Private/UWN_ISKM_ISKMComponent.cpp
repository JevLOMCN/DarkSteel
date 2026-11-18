// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_ISKM
// Functions: 26

// StaticClass @ 14a8381e0

UClass * __cdecl UWN_ISKM_ISKMComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_ISKM_ISKMComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_ISKM",L"WN_ISKM_ISKMComponent",
               &Z_Registration_Info_UClass_UWN_ISKM_ISKMComponent.InnerSingleton,
               StaticRegisterNativesUWN_ISKM_ISKMComponent,0x630,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UWN_ISKM_ISKMComponent>,
               InternalVTableHelperCtorCaller<UWN_ISKM_ISKMComponent>,local_res8,
               UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_ISKM_ISKMComponent.InnerSingleton;
}

// UWN_ISKM_ISKMComponent @ 14a83f1a0

UWN_ISKM_ISKMComponent * __thiscall
UWN_ISKM_ISKMComponent::UWN_ISKM_ISKMComponent(UWN_ISKM_ISKMComponent *this,FVTableHelper *param_1)

{
  FWN_UniqueIndexAllocator *this_00;
  
  UMeshComponent::UMeshComponent((UMeshComponent *)this,param_1);
  this_00 = &this->IndexAllocator;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  (this->Profile).field0_0x0.DebugPtr = (UWN_ISKM_Profile *)0x0;
  (this->SkeletalMesh).field0_0x0.DebugPtr = (USkeletalMesh *)0x0;
  this_00->Granularity = 0x20;
  this_00->BaseIndex = 0;
  (this->IndexAllocator).NumIndices = 0;
  (this->IndexAllocator).FreedIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IndexAllocator).FreedIndices.ArrayNum = 0;
  (this->IndexAllocator).FreedIndices.ArrayMax = 0;
  FWN_UniqueIndexAllocator::TryResize(this_00);
  (this->InstanceDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceDatas).ArrayNum = 0;
  (this->InstanceDatas).ArrayMax = 0;
  this->NumCustomDataFloatsPerInst = 0;
  (this->CustomDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomDatas).ArrayNum = 0;
  (this->CustomDatas).ArrayMax = 0;
  this->DynamicDataToRender = (FWN_ISKM_DynamicData *)0x0;
  return this;
}

// UWN_ISKM_ISKMComponent @ 14a83f270

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWN_ISKM_ISKMComponent * __thiscall
UWN_ISKM_ISKMComponent::UWN_ISKM_ISKMComponent
          (UWN_ISKM_ISKMComponent *this,FObjectInitializer *param_1)

{
  int *piVar1;
  FWN_UniqueIndexAllocator *this_00;
  TArray<FWN_ISKM_InstanceData,TSizedDefaultAllocator<32>_> *pTVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  
  UMeshComponent::UMeshComponent((UMeshComponent *)this,param_1);
  this_00 = &this->IndexAllocator;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  (this->Profile).field0_0x0.DebugPtr = (UWN_ISKM_Profile *)0x0;
  (this->SkeletalMesh).field0_0x0.DebugPtr = (USkeletalMesh *)0x0;
  this_00->Granularity = 0x20;
  this_00->BaseIndex = 0;
  (this->IndexAllocator).NumIndices = 0;
  (this->IndexAllocator).FreedIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IndexAllocator).FreedIndices.ArrayNum = 0;
  (this->IndexAllocator).FreedIndices.ArrayMax = 0;
  FWN_UniqueIndexAllocator::TryResize(this_00);
  bVar3 = this->field_0x42;
  pTVar2 = &this->InstanceDatas;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->InstanceDatas).ArrayNum = 0;
  this->field_0x42 = bVar3 & 0xf9;
  piVar1 = &(this->InstanceDatas).ArrayMax;
  *piVar1 = 0;
  this->NumCustomDataFloatsPerInst = 0;
  (this->CustomDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomDatas).ArrayNum = 0;
  (this->CustomDatas).ArrayMax = 0;
  this->DynamicDataToRender = (FWN_ISKM_DynamicData *)0x0;
  FTickFunction::SetTickFunctionEnable((FTickFunction *)&this->field_0x38,false);
  FWN_ISKM_DataArrayPool<FWN_ISKM_InstanceData>::Acquire(&GWN_InstanceDataArrayPool,pTVar2,-1);
  FWN_ISKM_DataArrayPool<float>::Acquire(&GWN_CustomDataArrayPool,&this->CustomDatas,-1);
  bVar4 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar4) {
    iVar6 = (this->IndexAllocator).NumIndices - (this->IndexAllocator).BaseIndex;
    iVar5 = (this->InstanceDatas).ArrayNum;
    if (iVar5 < iVar6) {
      iVar6 = iVar6 - iVar5;
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x80,0x10,iVar6,&pTVar2->AllocatorInstance,&(this->InstanceDatas).ArrayNum,
                         piVar1);
      DefaultConstructItems<FWN_ISKM_InstanceData,int>
                ((pTVar2->AllocatorInstance).Data + (longlong)iVar5 * 0x80,iVar6);
    }
  }
  this->field_0x27e = this->field_0x27e & 0xbf;
  this->field_0x27e = this->field_0x27e | 0x20;
  this->field_0x9a = this->field_0x9a & 0x7f;
  this->field_0x9b = this->field_0x9b | 1;
  this->field_0x1ab = 2;
  return this;
}

// ~UWN_ISKM_ISKMComponent @ 14a840000

void __thiscall UWN_ISKM_ISKMComponent::~UWN_ISKM_ISKMComponent(UWN_ISKM_ISKMComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  pFVar1 = (this->CustomDatas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InstanceDatas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->IndexAllocator).FreedIndices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMeshComponent::~UMeshComponent((UMeshComponent *)this);
  return;
}

// operator() @ 14a840b50

void __thiscall
`UWN_ISKM_ISKMComponent::SendRenderDynamicData_Concurrent'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  longlong lVar1;
  uint *puVar2;
  code *pcVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)this;
  puVar2 = *(uint **)((longlong)this + 8);
  if (puVar2 != *(uint **)(lVar1 + 0x3b0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InDynamicData == UpdatedDynamicData",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_Renderer.cpp"
                       ,0x172,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(longlong *)(lVar1 + 0x3a8) != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DynamicData == nullptr",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_Renderer.cpp"
                       ,0x173,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *puVar2 = GFrameNumberRenderThread;
  *(uint **)(lVar1 + 0x3a8) = puVar2;
  return;
}

// operator() @ 14a840c60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UWN_ISKM_ISKMComponent::RefreshRenderingData'::__l9::<lambda_1>::operator()(void *this,int param_1)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float local_48;
  float fStack_44;
  
  lVar6 = *(longlong *)((longlong)this + 0x10);
  lVar9 = (longlong)param_1 * 0x20;
  *(undefined1 (*) [16])(lVar9 + lVar6) = ___xmm_7f7fffff7f7fffff7f7fffff7f7fffff;
  *(undefined1 (*) [16])(lVar9 + 0x10 + lVar6) = ___xmm_ff7fffffff7fffffff7fffffff7fffff;
  iVar10 = *(int *)((longlong)this + 4) * param_1;
  iVar7 = 0;
  if (0 < *(int *)((longlong)this + 4)) {
    lVar8 = (longlong)iVar10;
    lVar6 = lVar8 << 7;
    do {
      if (*(int *)this <= iVar7 + iVar10) {
        return;
      }
      lVar2 = *(longlong *)((longlong)this + 8);
      if ((*(byte *)(lVar2 + 2 + lVar6) & 3) != 0) {
        auVar11 = *(undefined1 (*) [16])(lVar2 + 0x50 + lVar6);
        fVar3 = auVar11._8_4_;
        fVar1 = *(float *)(lVar2 + 0x74 + lVar6);
        lVar2 = *(longlong *)((longlong)this + 0x10);
        local_48 = auVar11._0_4_;
        fStack_44 = auVar11._4_4_;
        fStack_44 = fVar1 + fStack_44;
        if (lVar8 == 0) {
          auVar4._4_4_ = fStack_44 - fVar1;
          auVar4._0_4_ = local_48 - fVar1;
          auVar4._8_4_ = fVar3 - fVar1;
          auVar4._12_4_ = 0;
          *(undefined1 (*) [16])(lVar2 + lVar9) = auVar4;
          auVar5._4_4_ = fStack_44 + fVar1;
          auVar5._0_4_ = local_48 + fVar1;
          auVar5._8_4_ = fVar3 + fVar1;
          auVar5._12_4_ = 0;
          *(undefined1 (*) [16])(lVar2 + 0x10 + lVar9) = auVar5;
        }
        else {
          auVar12._0_4_ = local_48 - fVar1;
          auVar12._4_4_ = fStack_44 - fVar1;
          auVar12._8_4_ = fVar3 - fVar1;
          auVar12._12_4_ = 0;
          auVar11 = minps(*(undefined1 (*) [16])(lVar2 + lVar9),auVar12);
          *(undefined1 (*) [16])(lVar2 + lVar9) = auVar11;
          auVar11._4_4_ = fStack_44 + fVar1;
          auVar11._0_4_ = local_48 + fVar1;
          auVar11._8_4_ = fVar3 + fVar1;
          auVar11._12_4_ = 0;
          auVar11 = maxps(*(undefined1 (*) [16])(lVar2 + 0x10 + lVar9),auVar11);
          *(undefined1 (*) [16])(lVar2 + 0x10 + lVar9) = auVar11;
        }
      }
      iVar7 = iVar7 + 1;
      lVar8 = lVar8 + 1;
      lVar6 = lVar6 + 0x80;
    } while (iVar7 < *(int *)((longlong)this + 4));
  }
  return;
}

// AddInstance @ 14a843390

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
UWN_ISKM_ISKMComponent::AddInstance(UWN_ISKM_ISKMComponent *this,TTransform<float> *param_1)

{
  int iVar1;
  
  iVar1 = FWN_UniqueIndexAllocator::Acquire(&this->IndexAllocator);
  if ((this->InstanceDatas).ArrayNum <= iVar1) {
    TArray<FWN_ISKM_InstanceData,TSizedDefaultAllocator<32>_>::SetNum
              (&this->InstanceDatas,
               (this->IndexAllocator).NumIndices - (this->IndexAllocator).BaseIndex,No);
    TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (&this->CustomDatas,this->NumCustomDataFloatsPerInst * (this->InstanceDatas).ArrayNum,
               No);
  }
  return iVar1;
}

// BeginDestroy @ 14a843bd0

void __thiscall UWN_ISKM_ISKMComponent::BeginDestroy(UWN_ISKM_ISKMComponent *this)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&GWN_InstanceDataArrayPool);
  uVar1 = (this->InstanceDatas).ArrayMax;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  (this->InstanceDatas).ArrayNum = 0;
  if (GWN_InstanceDataArrayPool.FreedDataArrays.ArrayNum ==
      GWN_InstanceDataArrayPool.FreedDataArrays.ArrayMax) {
    GWN_InstanceDataArrayPool.FreedDataArrays.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&GWN_InstanceDataArrayPool.FreedDataArrays.AllocatorInstance,
                    &GWN_InstanceDataArrayPool.FreedDataArrays.ArrayMax);
  }
  pFVar2 = GWN_InstanceDataArrayPool.FreedDataArrays.AllocatorInstance.Data +
           (longlong)GWN_InstanceDataArrayPool.FreedDataArrays.ArrayNum * 0x10;
  GWN_InstanceDataArrayPool.FreedDataArrays.ArrayNum =
       GWN_InstanceDataArrayPool.FreedDataArrays.ArrayNum + 1;
  *(undefined8 *)pFVar2 = 0;
  *(FScriptContainerElement **)pFVar2 = (this->InstanceDatas).AllocatorInstance.Data;
  (this->InstanceDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar2 + 8) = (this->InstanceDatas).ArrayNum;
  *(int *)(pFVar2 + 0xc) = (this->InstanceDatas).ArrayMax;
  (this->InstanceDatas).ArrayNum = 0;
  (this->InstanceDatas).ArrayMax = 0;
  GWN_InstanceDataArrayPool.NumAllocated = GWN_InstanceDataArrayPool.NumAllocated + -1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&GWN_InstanceDataArrayPool);
  EnterCriticalSection((LPCRITICAL_SECTION)&GWN_CustomDataArrayPool);
  uVar1 = (this->CustomDatas).ArrayMax;
  if (-1 < (int)uVar1) {
    (this->CustomDatas).ArrayNum = 0;
    if (GWN_CustomDataArrayPool.FreedDataArrays.ArrayNum ==
        GWN_CustomDataArrayPool.FreedDataArrays.ArrayMax) {
      GWN_CustomDataArrayPool.FreedDataArrays.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,&GWN_CustomDataArrayPool.FreedDataArrays.AllocatorInstance,
                      &GWN_CustomDataArrayPool.FreedDataArrays.ArrayMax);
    }
    pFVar2 = GWN_CustomDataArrayPool.FreedDataArrays.AllocatorInstance.Data +
             (longlong)GWN_CustomDataArrayPool.FreedDataArrays.ArrayNum * 0x10;
    GWN_CustomDataArrayPool.FreedDataArrays.ArrayNum =
         GWN_CustomDataArrayPool.FreedDataArrays.ArrayNum + 1;
    *(undefined8 *)pFVar2 = 0;
    *(FScriptContainerElement **)pFVar2 = (this->CustomDatas).AllocatorInstance.Data;
    (this->CustomDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar2 + 8) = (this->CustomDatas).ArrayNum;
    *(int *)(pFVar2 + 0xc) = (this->CustomDatas).ArrayMax;
    (this->CustomDatas).ArrayNum = 0;
    (this->CustomDatas).ArrayMax = 0;
    GWN_CustomDataArrayPool.NumAllocated = GWN_CustomDataArrayPool.NumAllocated + -1;
    LeaveCriticalSection((LPCRITICAL_SECTION)&GWN_CustomDataArrayPool);
    UMeshComponent::BeginDestroy((UMeshComponent *)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
}

// CalcBounds @ 14a844630

TBoxSphereBounds<double,double> * __thiscall
UWN_ISKM_ISKMComponent::CalcBounds
          (UWN_ISKM_ISKMComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar1 = (this->BoundsOfInstances).Origin.field0_0x0._s_0.Y;
  dVar2 = (this->BoundsOfInstances).Origin.field0_0x0._s_0.Z;
  dVar3 = (this->BoundsOfInstances).BoxExtent.field0_0x0._s_0.X;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X =
       (this->BoundsOfInstances).Origin.field0_0x0._s_0.X;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar1;
  dVar4 = (this->BoundsOfInstances).BoxExtent.field0_0x0._s_0.Y;
  dVar5 = (this->BoundsOfInstances).BoxExtent.field0_0x0._s_0.Z;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar2;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar3;
  dVar1 = (this->BoundsOfInstances).SphereRadius;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar4;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar5;
  __return_storage_ptr__->SphereRadius = dVar1;
  return __return_storage_ptr__;
}

// CreateRenderState_Concurrent @ 14a846780

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
UWN_ISKM_ISKMComponent::CreateRenderState_Concurrent
          (UWN_ISKM_ISKMComponent *this,FRegisterComponentContext *param_1)

{
  UPrimitiveComponent::CreateRenderState_Concurrent((UPrimitiveComponent *)this,param_1);
  if (*(longlong *)&this->field_0x530 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014a8467a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0x398))(this);
    return;
  }
  return;
}

// CreateSceneProxy @ 14a846ba0

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
UWN_ISKM_ISKMComponent::CreateSceneProxy(UWN_ISKM_ISKMComponent *this)

{
  UWN_ISKM_Profile *this_00;
  FName FVar1;
  FWN_ISKM_SkeletalMeshInfo *pFVar2;
  FWN_ISKM_Proxy *pFVar3;
  
  if ((((this->IndexAllocator).NumIndices - (this->IndexAllocator).FreedIndices.ArrayNum !=
        (this->IndexAllocator).BaseIndex) &&
      ((this->SkeletalMesh).field0_0x0.DebugPtr != (USkeletalMesh *)0x0)) &&
     (this_00 = (this->Profile).field0_0x0.DebugPtr, this_00 != (UWN_ISKM_Profile *)0x0)) {
    FVar1 = UE::CoreUObject::Private::GetFName((UObject *)&stack0x00000008);
    pFVar2 = UWN_ISKM_Profile::FindSkeletalMeshInfo(this_00,*(FName *)FVar1);
    if (pFVar2 != (FWN_ISKM_SkeletalMeshInfo *)0x0) {
      pFVar3 = ::operator_new(0x4f0);
      if (pFVar3 != (FWN_ISKM_Proxy *)0x0) {
        FVar1.ComparisonIndex.Value = *(uint *)&this->field_0x18;
        FVar1.Number = *(uint *)&this->field_0x1c;
        pFVar3 = FWN_ISKM_Proxy::FWN_ISKM_Proxy(pFVar3,this,FVar1);
        return (FPrimitiveSceneProxy *)pFVar3;
      }
    }
  }
  return (FPrimitiveSceneProxy *)0x0;
}

// GetInstanceCustomDatas @ 14a84a860

float * __thiscall
UWN_ISKM_ISKMComponent::GetInstanceCustomDatas
          (UWN_ISKM_ISKMComponent *this,int param_1,int *param_2)

{
  *param_2 = this->NumCustomDataFloatsPerInst;
  if (this->NumCustomDataFloatsPerInst == 0) {
    return (float *)0x0;
  }
  return (float *)((this->CustomDatas).AllocatorInstance.Data +
                  (longlong)(this->NumCustomDataFloatsPerInst * param_1) * 4);
}

// GetInstanceData @ 14a84a990

FWN_ISKM_InstanceData * __thiscall
UWN_ISKM_ISKMComponent::GetInstanceData(UWN_ISKM_ISKMComponent *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FWN_ISKM_InstanceData *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->InstanceDatas).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FWN_ISKM_InstanceData *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FWN_ISKM_InstanceData *)
         ((this->InstanceDatas).AllocatorInstance.Data + (longlong)param_1 * 0x80);
}

// GetMaterial @ 14a84ab30

UMaterialInterface * __thiscall
UWN_ISKM_ISKMComponent::GetMaterial(UWN_ISKM_ISKMComponent *this,int param_1)

{
  USkeletalMesh *pUVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  longlong *plVar5;
  UMaterialInterface *pUVar6;
  uint uVar7;
  
  pUVar1 = (this->SkeletalMesh).field0_0x0.DebugPtr;
  if (pUVar1 != (USkeletalMesh *)0x0) {
    cVar3 = (**(code **)(pUVar1->_padding_ + 0x338))(pUVar1,param_1);
    if (cVar3 != '\0') {
      plVar5 = (longlong *)
               (**(code **)(((this->SkeletalMesh).field0_0x0.DebugPtr)->_padding_ + 0x3c8))();
      uVar7 = 0;
      if (param_1 < (int)plVar5[1]) {
        uVar7 = (uint)~param_1 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pUVar6 = (UMaterialInterface *)(*pcVar2)();
          return pUVar6;
        }
      }
      return *(UMaterialInterface **)(*plVar5 + (longlong)param_1 * 0x30);
    }
  }
  return (UMaterialInterface *)0x0;
}

// GetMaterialIndex @ 14a84abf0

int __thiscall UWN_ISKM_ISKMComponent::GetMaterialIndex(UWN_ISKM_ISKMComponent *this,FName param_1)

{
  USkeletalMesh *pUVar1;
  int iVar2;
  TArray<FSkeletalMaterial,TSizedDefaultAllocator<32>_> *this_00;
  
  pUVar1 = (this->SkeletalMesh).field0_0x0.DebugPtr;
  if (pUVar1 == (USkeletalMesh *)0x0) {
    return -1;
  }
  this_00 = (TArray<FSkeletalMaterial,TSizedDefaultAllocator<32>_> *)
            (**(code **)(pUVar1->_padding_ + 0x3c8))();
  iVar2 = TArray<FSkeletalMaterial,TSizedDefaultAllocator<32>_>::
          FindLastByPredicate<_UWN_ISKM_ISKMComponent::GetMaterialIndex_::__l2::<lambda_1>_>
                    (this_00,(<lambda_1>)param_1,this_00->ArrayNum);
  return iVar2;
}

// GetMaterialSlotNames @ 14a84ac40

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UWN_ISKM_ISKMComponent::GetMaterialSlotNames
          (UWN_ISKM_ISKMComponent *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  USkeletalMesh *pUVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong *plVar7;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  ForAnyElementType local_28;
  int local_20;
  int iStack_1c;
  
  pUVar2 = (this->SkeletalMesh).field0_0x0.DebugPtr;
  uVar9 = 0;
  if (pUVar2 == (USkeletalMesh *)0x0) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = 0;
  iStack_1c = 0;
  plVar7 = (longlong *)(**(code **)(pUVar2->_padding_ + 0x3c8))();
  uVar6 = *(uint *)(plVar7 + 1);
  lVar10 = (longlong)(int)uVar6;
  if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
  }
  if (iStack_1c < (int)uVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar6,&local_28,local_20,&iStack_1c);
  }
  uVar12 = uVar9;
  if (0 < (int)uVar6) {
    do {
      uVar11 = (uint)uVar9;
      uVar6 = 0;
      if ((int)uVar11 < (int)plVar7[1]) {
        uVar6 = ~uVar11 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar8;
      }
      lVar3 = *plVar7;
      if (local_20 == iStack_1c) {
        local_20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_28,&iStack_1c);
      }
      iVar1 = local_20 + 1;
      uVar9 = (ulonglong)(uVar11 + 1);
      *(undefined8 *)(local_28.Data + (longlong)local_20 * 8) = *(undefined8 *)(lVar3 + 8 + uVar12);
      lVar10 = lVar10 + -1;
      uVar12 = uVar12 + 0x30;
      local_20 = iVar1;
    } while (lVar10 != 0);
  }
  (__return_storage_ptr__->AllocatorInstance).Data = local_28.Data;
  __return_storage_ptr__->ArrayNum = local_20;
  __return_storage_ptr__->ArrayMax = iStack_1c;
  return __return_storage_ptr__;
}

// GetNumMaterials @ 14a84ade0

int __thiscall UWN_ISKM_ISKMComponent::GetNumMaterials(UWN_ISKM_ISKMComponent *this)

{
  USkeletalMesh *pUVar1;
  int iVar2;
  
  pUVar1 = (this->SkeletalMesh).field0_0x0.DebugPtr;
  if (pUVar1 == (USkeletalMesh *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014a84adf2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar2 = (**(code **)(pUVar1->_padding_ + 0x340))();
  return iVar2;
}

// GetPrivateStaticClass @ 14a84b2c0

UClass * __cdecl UWN_ISKM_ISKMComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_ISKM_ISKMComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_ISKM",L"WN_ISKM_ISKMComponent",
               &Z_Registration_Info_UClass_UWN_ISKM_ISKMComponent.InnerSingleton,
               StaticRegisterNativesUWN_ISKM_ISKMComponent,0x630,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UWN_ISKM_ISKMComponent>,
               InternalVTableHelperCtorCaller<UWN_ISKM_ISKMComponent>,local_res8,
               UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_ISKM_ISKMComponent.InnerSingleton;
}

// IsMaterialSlotNameValid @ 14a850100

bool __thiscall
UWN_ISKM_ISKMComponent::IsMaterialSlotNameValid(UWN_ISKM_ISKMComponent *this,FName param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(longlong *)this + 0x698))();
  return iVar1 != -1;
}

// RefreshRenderingData @ 14a851180

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
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UWN_ISKM_ISKMComponent::RefreshRenderingData(UWN_ISKM_ISKMComponent *this)

{
  int iVar1;
  int iVar2;
  FWN_ISKM_InstanceData *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  <lambda_2> <Var10;
  int *piVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  FTlsAutoCleanup *pFVar16;
  void *pvVar17;
  FWN_ISKM_DynamicData *pFVar18;
  int iVar19;
  longlong lVar20;
  float *pfVar21;
  ulonglong uVar22;
  __m128 *p_Var23;
  ulonglong uVar24;
  longlong lVar25;
  FScriptContainerElement *pFVar26;
  ulonglong uVar27;
  int iVar28;
  ulong64 uVar29;
  uint uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar35;
  undefined1 auVar34 [16];
  double dVar36;
  double dVar37;
  double dVar38;
  uint uVar39;
  uint uVar40;
  undefined1 auVar41 [16];
  <lambda_1> local_188 [4];
  uint local_184;
  undefined1 local_180;
  undefined1 local_17f;
  undefined1 local_17e;
  undefined1 local_17d;
  undefined1 local_17c [4];
  undefined1 local_178 [8];
  float fStack_170;
  undefined1 local_168 [8];
  float fStack_160;
  <lambda_2> local_158;
  int local_150;
  int local_14c;
  FMemMark local_148;
  int *local_120;
  FScriptContainerElement *local_118;
  FScriptContainerElement *local_110;
  UWN_ISKM_ISKMComponent *local_108;
  uint local_100;
  int local_fc;
  FScriptContainerElement *local_f8;
  void *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  code *local_d8;
  undefined1 *local_d0;
  code *local_c8;
  <lambda_1> *local_c0;
  TArrayView<std::nullptr_t,int> local_b8;
  code *local_a8;
  uint *local_a0;
  code *local_98;
  undefined1 *local_90;
  code *local_88;
  undefined1 *local_80;
  code *local_78;
  undefined1 *local_70;
  
  iVar13 = (this->IndexAllocator).BaseIndex;
  iVar2 = (this->IndexAllocator).NumIndices;
  local_108 = this;
  if (iVar2 - (this->IndexAllocator).FreedIndices.ArrayNum == iVar13) {
    pFVar18 = this->DynamicDataToRender;
    if (pFVar18 != (FWN_ISKM_DynamicData *)0x0) {
      FWN_ISKM_DynamicData::~FWN_ISKM_DynamicData(pFVar18);
      ::operator_delete(pFVar18,0x28);
      this->DynamicDataToRender = (FWN_ISKM_DynamicData *)0x0;
    }
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    return;
  }
  uVar30 = iVar2 - iVar13;
  local_184 = uVar30;
  iVar13 = FWindowsPlatformMisc::NumberOfCores();
  if (iVar13 < 1) {
    iVar13 = 1;
  }
  puVar15 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_e0 = &local_180;
  local_e8 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar16 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_e8,puVar15);
  local_148.Mem = (FMemStackBase *)(pFVar16 + 2);
  local_148.Top = (local_148.Mem)->Top;
  local_148.SavedChunk = *(FTaggedMemory **)(pFVar16 + 4);
  local_148.bPopped = false;
  local_148.NextTopmostMark = *(FMemMark **)(pFVar16 + 5);
  pFVar16[5] = (FTlsAutoCleanup)&local_148;
  *(int *)(pFVar16 + 6) = *(int *)(pFVar16 + 6) + 1;
  puVar15 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_d0 = &local_17f;
  local_d8 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar16 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_d8,puVar15);
  pFVar26 = (this->InstanceDatas).AllocatorInstance.Data;
  lVar25 = (longlong)iVar13;
  local_14c = *(int *)(pFVar16 + 6);
  puVar15 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_c0 = local_188;
  local_c8 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar16 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_c8,puVar15);
  uVar29 = 8;
  if (0xf < (ulonglong)(lVar25 << 5)) {
    uVar29 = 0x10;
  }
  pvVar17 = FMemStackBase::Alloc((FMemStackBase *)(pFVar16 + 2),lVar25 << 5,uVar29);
  local_fc = (int)((uVar30 - 1) + iVar13 & -iVar13) / iVar13;
  uVar24 = 0;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<`UWN_ISKM_ISKMComponent::RefreshRenderingData'::__l9::<lambda_1>,void,int>
             ::Call;
  local_a0 = &local_100;
  local_b8.DataPtr = (void **)0x0;
  local_b8.ArrayNum = 0;
  local_100 = uVar30;
  local_f8 = pFVar26;
  local_f0 = pvVar17;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar13,1,(TFunctionRef<void___cdecl(int)> *)&local_a8,local_188[0],
             None,&local_b8);
  fVar6 = __real_3f000000;
  bVar12 = true;
  _local_178 = ___xmm_7f7fffff7f7fffff7f7fffff7f7fffff;
  _local_168 = ___xmm_ff7fffffff7fffffff7fffffff7fffff;
  uVar22 = uVar24;
  auVar34 = ___xmm_7f7fffff7f7fffff7f7fffff7f7fffff;
  auVar41 = ___xmm_ff7fffffff7fffffff7fffffff7fffff;
  if (3 < lVar25) {
    pfVar21 = (float *)((longlong)pvVar17 + 0x48);
    lVar20 = (lVar25 - 4U >> 2) + 1;
    uVar22 = lVar20 * 4;
    do {
      if (((pfVar21[-0x12] < pfVar21[-0xe] || pfVar21[-0x12] == pfVar21[-0xe]) &&
          (pfVar21[-0x11] < pfVar21[-0xd] || pfVar21[-0x11] == pfVar21[-0xd])) &&
         (pfVar21[-0x10] < pfVar21[-0xc] || pfVar21[-0x10] == pfVar21[-0xc])) {
        if (bVar12) {
          auVar34 = *(undefined1 (*) [16])(pfVar21 + -0x12);
          bVar12 = false;
          auVar41 = *(undefined1 (*) [16])(pfVar21 + -0xe);
          _local_178 = auVar34;
          _local_168 = auVar41;
        }
        else {
          auVar34 = minps(auVar34,*(undefined1 (*) [16])(pfVar21 + -0x12));
          auVar41 = maxps(auVar41,*(undefined1 (*) [16])(pfVar21 + -0xe));
          _local_178 = auVar34;
          _local_168 = auVar41;
        }
      }
      if (((pfVar21[-10] < pfVar21[-6] || pfVar21[-10] == pfVar21[-6]) &&
          (pfVar21[-9] < pfVar21[-5] || pfVar21[-9] == pfVar21[-5])) &&
         (pfVar21[-8] < pfVar21[-4] || pfVar21[-8] == pfVar21[-4])) {
        if (bVar12) {
          auVar34 = *(undefined1 (*) [16])(pfVar21 + -10);
          bVar12 = false;
          auVar41 = *(undefined1 (*) [16])(pfVar21 + -6);
          _local_178 = auVar34;
          _local_168 = auVar41;
        }
        else {
          auVar34 = minps(auVar34,*(undefined1 (*) [16])(pfVar21 + -10));
          auVar41 = maxps(auVar41,*(undefined1 (*) [16])(pfVar21 + -6));
          _local_178 = auVar34;
          _local_168 = auVar41;
        }
      }
      if (((pfVar21[-2] < pfVar21[2] || pfVar21[-2] == pfVar21[2]) &&
          (pfVar21[-1] < pfVar21[3] || pfVar21[-1] == pfVar21[3])) &&
         (*pfVar21 < pfVar21[4] || *pfVar21 == pfVar21[4])) {
        if (bVar12) {
          auVar34 = *(undefined1 (*) [16])(pfVar21 + -2);
          bVar12 = false;
          auVar41 = *(undefined1 (*) [16])(pfVar21 + 2);
          _local_178 = auVar34;
          _local_168 = auVar41;
        }
        else {
          auVar34 = minps(auVar34,*(undefined1 (*) [16])(pfVar21 + -2));
          auVar41 = maxps(auVar41,*(undefined1 (*) [16])(pfVar21 + 2));
          _local_178 = auVar34;
          _local_168 = auVar41;
        }
      }
      if (((pfVar21[6] < pfVar21[10] || pfVar21[6] == pfVar21[10]) &&
          (pfVar21[7] < pfVar21[0xb] || pfVar21[7] == pfVar21[0xb])) &&
         (pfVar21[8] < pfVar21[0xc] || pfVar21[8] == pfVar21[0xc])) {
        if (bVar12) {
          auVar34 = *(undefined1 (*) [16])(pfVar21 + 6);
          bVar12 = false;
          auVar41 = *(undefined1 (*) [16])(pfVar21 + 10);
          _local_178 = auVar34;
          _local_168 = auVar41;
        }
        else {
          auVar34 = minps(auVar34,*(undefined1 (*) [16])(pfVar21 + 6));
          auVar41 = maxps(auVar41,*(undefined1 (*) [16])(pfVar21 + 10));
          _local_178 = auVar34;
          _local_168 = auVar41;
        }
      }
      pfVar21 = pfVar21 + 0x20;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
  }
  if ((longlong)uVar22 < lVar25) {
    pfVar21 = (float *)(uVar22 * 0x20 + 4 + (longlong)pvVar17);
    lVar25 = lVar25 - uVar22;
    do {
      if (((pfVar21[-1] < pfVar21[3] || pfVar21[-1] == pfVar21[3]) &&
          (*pfVar21 < pfVar21[4] || *pfVar21 == pfVar21[4])) &&
         (pfVar21[1] < pfVar21[5] || pfVar21[1] == pfVar21[5])) {
        if (bVar12) {
          auVar34 = *(undefined1 (*) [16])(pfVar21 + -1);
          bVar12 = false;
          auVar41 = *(undefined1 (*) [16])(pfVar21 + 3);
          _local_178 = auVar34;
          _local_168 = auVar41;
        }
        else {
          auVar34 = minps(auVar34,*(undefined1 (*) [16])(pfVar21 + -1));
          auVar41 = maxps(auVar41,*(undefined1 (*) [16])(pfVar21 + 3));
          _local_178 = auVar34;
          _local_168 = auVar41;
        }
      }
      pfVar21 = pfVar21 + 8;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
  }
  if (auVar34._0_4_ <= auVar41._0_4_) {
    fVar33 = auVar41._4_4_;
    fVar31 = auVar41._8_4_;
    fVar35 = auVar34._4_4_;
    fVar32 = auVar34._8_4_;
    if ((fVar35 <= fVar33) && (fVar32 <= fVar31)) goto LAB_14a8515a7;
  }
  auVar34._0_12_ = ZEXT812(0);
  auVar34._12_4_ = 0;
  fVar31 = 0.0;
  fVar33 = 0.0;
  fVar32 = 0.0;
  fVar35 = 0.0;
  auVar41 = ZEXT816(0);
  _local_178 = auVar34;
  _local_168 = auVar34;
LAB_14a8515a7:
  dVar38 = (double)((fVar33 - fVar35) * __real_3f000000);
  dVar37 = (double)((auVar41._0_4_ - auVar34._0_4_) * __real_3f000000);
  dVar36 = (double)((fVar31 - fVar32) * __real_3f000000);
  (this->BoundsOfInstances).Origin.field0_0x0._s_0.X =
       (double)((auVar41._0_4_ + auVar34._0_4_) * __real_3f000000);
  (this->BoundsOfInstances).Origin.field0_0x0._s_0.Y =
       (double)(((float)local_168._4_4_ + (float)local_178._4_4_) * fVar6);
  (this->BoundsOfInstances).Origin.field0_0x0._s_0.Z = (double)((fStack_160 + fStack_170) * fVar6);
  *(double *)&(this->BoundsOfInstances).BoxExtent.field0_0x0 = dVar37;
  *(double *)((longlong)&(this->BoundsOfInstances).BoxExtent.field0_0x0 + 8) = dVar38;
  *(double *)((longlong)&(this->BoundsOfInstances).BoxExtent.field0_0x0 + 0x10) = dVar36;
  dVar38 = (double)CONCAT44((uint)((ulonglong)dVar38 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar38,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  uVar39 = SUB84(dVar37,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar40 = (uint)((ulonglong)dVar37 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (dVar38 <= (double)CONCAT44(uVar40,uVar39)) {
    dVar38 = (double)CONCAT44(uVar40,uVar39);
  }
  dVar37 = (double)CONCAT44((uint)((ulonglong)dVar36 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar36,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  if (dVar38 <= dVar37) {
    dVar38 = dVar37;
  }
  (this->BoundsOfInstances).SphereRadius = (double)(float)dVar38;
  pFVar18 = this->DynamicDataToRender;
  iVar13 = this->NumCustomDataFloatsPerInst;
  local_150 = iVar13;
  if (pFVar18 != (FWN_ISKM_DynamicData *)0x0) {
    FWN_ISKM_DynamicData::~FWN_ISKM_DynamicData(pFVar18);
    ::operator_delete(pFVar18,0x28);
    this->DynamicDataToRender = (FWN_ISKM_DynamicData *)0x0;
  }
  pFVar18 = ::operator_new(0x28);
  if (pFVar18 == (FWN_ISKM_DynamicData *)0x0) {
    pFVar18 = (FWN_ISKM_DynamicData *)0x0;
  }
  else {
    pFVar18->CreationFrameNumber = GFrameNumberRenderThread;
    (pFVar18->InstanceDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar18->InstanceDatas).ArrayNum = 0;
    (pFVar18->InstanceDatas).ArrayMax = 0;
    (pFVar18->CustomDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar18->CustomDatas).ArrayNum = 0;
    (pFVar18->CustomDatas).ArrayMax = 0;
    FWN_ISKM_DataArrayPool<FWN_ISKM_InstanceData>::Acquire
              (&GWN_InstanceDataArrayPool,&pFVar18->InstanceDatas,uVar30);
    if (0 < iVar13) {
      FWN_ISKM_DataArrayPool<float>::Acquire
                (&GWN_CustomDataArrayPool,&pFVar18->CustomDatas,iVar13 * uVar30);
    }
  }
  this->DynamicDataToRender = pFVar18;
  TArray<FWN_ISKM_InstanceData,TSizedDefaultAllocator<32>_>::SetNum
            (&pFVar18->InstanceDatas,uVar30,No);
  TArray<float,TSizedDefaultAllocator<32>_>::SetNum
            (&this->DynamicDataToRender->CustomDatas,iVar13 * uVar30,No);
  local_118 = (this->CustomDatas).AllocatorInstance.Data;
  pFVar3 = (FWN_ISKM_InstanceData *)(this->InstanceDatas).AllocatorInstance.Data;
  pFVar26 = (this->DynamicDataToRender->InstanceDatas).AllocatorInstance.Data;
  local_110 = (this->DynamicDataToRender->CustomDatas).AllocatorInstance.Data;
  puVar15 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_90 = &local_17e;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar16 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_98,puVar15);
  uVar22 = (longlong)(int)local_184 * 4;
  uVar30 = 8;
  if (0xf < uVar22) {
    uVar30 = 0x10;
  }
  local_158.srcInstDatas =
       FMemStackBase::Alloc((FMemStackBase *)(pFVar16 + 2),uVar22,(ulonglong)uVar30);
  puVar15 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_80 = &local_17d;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar16 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_88,puVar15);
  local_120 = FMemStackBase::Alloc((FMemStackBase *)(pFVar16 + 2),uVar22,(ulonglong)uVar30);
  <Var10.srcInstDatas = local_158.srcInstDatas;
  iVar9 = _UNK_150631e0c;
  iVar8 = _UNK_150631e08;
  iVar7 = __xmm_00000003000000020000000100000000._4_4_;
  iVar2 = (int)__xmm_00000003000000020000000100000000;
  lVar25 = (longlong)(int)local_184;
  uVar22 = uVar24;
  if ((0 < (int)local_184) && (0xf < local_184)) {
    uVar30 = local_184 & 0x8000000f;
    if ((int)uVar30 < 0) {
      uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
    }
    p_Var23 = &((local_158.srcInstDatas)->PrevTransform).Translation;
    iVar28 = 8;
    do {
      iVar14 = iVar28 + -4;
      iVar19 = (int)uVar22;
      p_Var23[-2].m128_i32[0] = iVar19 + iVar2;
      *(int *)((longlong)p_Var23 + -0x1c) = iVar19 + iVar7;
      *(int *)((longlong)p_Var23 + -0x18) = iVar19 + iVar8;
      *(int *)((longlong)p_Var23 + -0x14) = iVar19 + iVar9;
      iVar1 = iVar28 + 4;
      uVar22 = (ulonglong)(iVar19 + 0x10U);
      (((TTransform<float> *)(p_Var23 + -1))->Rotation).m128_i32[0] = iVar14 + iVar2;
      *(int *)((longlong)p_Var23 + -0xc) = iVar14 + iVar7;
      *(int *)((longlong)p_Var23 + -8) = iVar14 + iVar8;
      *(int *)((longlong)p_Var23 + -4) = iVar14 + iVar9;
      p_Var23->m128_i32[0] = iVar28 + iVar2;
      p_Var23->m128_i32[1] = iVar28 + iVar7;
      p_Var23->m128_i32[2] = iVar28 + iVar8;
      p_Var23->m128_i32[3] = iVar28 + iVar9;
      p_Var23[1].m128_i32[0] = iVar1 + iVar2;
      *(int *)((longlong)p_Var23 + 0x14) = iVar1 + iVar7;
      *(int *)((longlong)p_Var23 + 0x18) = iVar1 + iVar8;
      *(int *)((longlong)p_Var23 + 0x1c) = iVar1 + iVar9;
      p_Var23 = p_Var23 + 4;
      iVar28 = iVar28 + 0x10;
    } while ((int)(iVar19 + 0x10U) < (int)(local_184 - uVar30));
  }
  for (lVar20 = (longlong)(int)uVar22; lVar20 < lVar25; lVar20 = lVar20 + 1) {
    *(int *)(&(local_158.srcInstDatas)->bFirstTransform + lVar20 * 4) = (int)uVar22;
    uVar22 = (ulonglong)((int)uVar22 + 1);
  }
  local_158.srcInstDatas = pFVar3;
  RadixSort32<int,int,_UWN_ISKM_ISKMComponent::RefreshRenderingData_::__l27::<lambda_2>_>
            (local_120,(int *)<Var10.srcInstDatas,local_184,&local_158);
  local_184 = 0;
  uVar22 = uVar24;
  uVar27 = uVar24;
  if (0 < lVar25) {
    do {
      local_184 = (uint)uVar27;
      iVar2 = local_120[uVar22];
      iVar13 = local_150;
      if ((pFVar3[iVar2].Flags & VisibleFlags) == Invalid) break;
      uVar5 = *(undefined8 *)&pFVar3[iVar2].GlobalFrameIndices_B;
      local_184 = local_184 + 1;
      *(undefined8 *)pFVar26 = *(undefined8 *)(pFVar3 + iVar2);
      *(undefined8 *)(pFVar26 + 8) = uVar5;
      uVar22 = uVar22 + 1;
      uVar29 = pFVar3[iVar2].PrevTransform.Rotation.m128_u64[1];
      *(ulong64 *)(pFVar26 + 0x10) = pFVar3[iVar2].PrevTransform.Rotation.m128_u64[0];
      *(ulong64 *)(pFVar26 + 0x18) = uVar29;
      uVar29 = pFVar3[iVar2].PrevTransform.Translation.m128_u64[1];
      *(ulong64 *)(pFVar26 + 0x20) = pFVar3[iVar2].PrevTransform.Translation.m128_u64[0];
      *(ulong64 *)(pFVar26 + 0x28) = uVar29;
      uVar29 = pFVar3[iVar2].PrevTransform.Scale3D.m128_u64[1];
      *(ulong64 *)(pFVar26 + 0x30) = pFVar3[iVar2].PrevTransform.Scale3D.m128_u64[0];
      *(ulong64 *)(pFVar26 + 0x38) = uVar29;
      uVar29 = pFVar3[iVar2].Transform.Rotation.m128_u64[1];
      *(ulong64 *)(pFVar26 + 0x40) = pFVar3[iVar2].Transform.Rotation.m128_u64[0];
      *(ulong64 *)(pFVar26 + 0x48) = uVar29;
      uVar29 = pFVar3[iVar2].Transform.Translation.m128_u64[1];
      *(ulong64 *)(pFVar26 + 0x50) = pFVar3[iVar2].Transform.Translation.m128_u64[0];
      *(ulong64 *)(pFVar26 + 0x58) = uVar29;
      uVar29 = pFVar3[iVar2].Transform.Scale3D.m128_u64[1];
      *(ulong64 *)(pFVar26 + 0x60) = pFVar3[iVar2].Transform.Scale3D.m128_u64[0];
      *(ulong64 *)(pFVar26 + 0x68) = uVar29;
      uVar5 = *(undefined8 *)&pFVar3[iVar2].field_0x78;
      *(undefined8 *)(pFVar26 + 0x70) = *(undefined8 *)&pFVar3[iVar2].DistanceFromCamera;
      *(undefined8 *)(pFVar26 + 0x78) = uVar5;
      pFVar26 = pFVar26 + 0x80;
      uVar27 = (ulonglong)local_184;
    } while ((longlong)uVar22 < lVar25);
  }
  uVar30 = local_184;
  TArray<FWN_ISKM_InstanceData,TSizedDefaultAllocator<32>_>::SetNum
            (&this->DynamicDataToRender->InstanceDatas,local_184,No);
  pFVar26 = local_118;
  piVar11 = local_120;
  if (0 < iVar13) {
    uVar39 = uVar30;
    if (0 < (int)uVar30) {
      uVar22 = uVar24;
      do {
        memcpy(local_110 + (longlong)(int)uVar24 * 4,
               pFVar26 + (longlong)(iVar13 * piVar11[uVar22]) * 4,(longlong)iVar13);
        uVar24 = (ulonglong)(uint)((int)uVar24 + iVar13);
        uVar22 = uVar22 + 1;
        this = local_108;
        uVar39 = local_184;
      } while ((longlong)uVar22 < (longlong)(int)uVar30);
    }
    TArray<float,TSizedDefaultAllocator<32>_>::SetNum
              (&this->DynamicDataToRender->CustomDatas,uVar39,No);
  }
  puVar15 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_70 = local_17c;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar16 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_78,puVar15);
  if ((local_14c != *(int *)(pFVar16 + 6)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("numMarks == FMemStack::Get().GetNumMarks()",
                          "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_ISKMComponent.cpp"
                          ,0x145,L""), bVar12)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  if (local_148.bPopped == false) {
    if (((local_148.Mem)->TopMark != &local_148) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mem.TopMark == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                            ,0x215,L""), bVar12)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_148.bPopped = true;
    (local_148.Mem)->NumMarks = (local_148.Mem)->NumMarks + -1;
    if (local_148.SavedChunk != (local_148.Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_148.Mem,local_148.SavedChunk);
    }
    (local_148.Mem)->Top = local_148.Top;
    (local_148.Mem)->TopMark = local_148.NextTopmostMark;
  }
  return;
}

// RemoveAllInstances @ 14a852a70

void __thiscall UWN_ISKM_ISKMComponent::RemoveAllInstances(UWN_ISKM_ISKMComponent *this)

{
  int iVar1;
  uint uVar2;
  
  (this->IndexAllocator).NumIndices = (this->IndexAllocator).BaseIndex;
  iVar1 = (this->IndexAllocator).FreedIndices.ArrayMax;
  (this->IndexAllocator).FreedIndices.ArrayNum = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->IndexAllocator).FreedIndices.AllocatorInstance,0,
               &(this->IndexAllocator).FreedIndices.ArrayMax);
  }
  FWN_UniqueIndexAllocator::TryResize(&this->IndexAllocator);
  uVar2 = (this->CustomDatas).ArrayMax;
  if (-1 < (int)uVar2) {
    (this->CustomDatas).ArrayNum = 0;
    uVar2 = (this->InstanceDatas).ArrayMax;
    if (-1 < (int)uVar2) {
      (this->InstanceDatas).ArrayNum = 0;
      return;
    }
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

// RemoveInstance @ 14a852f30

void __thiscall UWN_ISKM_ISKMComponent::RemoveInstance(UWN_ISKM_ISKMComponent *this,int param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  
  FWN_UniqueIndexAllocator::Release(&this->IndexAllocator,param_1);
  uVar7 = 0;
  if (param_1 < (this->InstanceDatas).ArrayNum) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->InstanceDatas).AllocatorInstance.Data;
  lVar8 = (longlong)param_1 * 0x80;
  pFVar2[lVar8] = (FScriptContainerElement)0x1;
  *(undefined2 *)(pFVar2 + lVar8 + 2) = 0;
  *(undefined8 *)(pFVar2 + lVar8 + 4) = 0xffffffffffffffff;
  *(undefined4 *)(pFVar2 + lVar8 + 0xc) = 0;
  auVar4._8_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  auVar4._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  auVar4._12_4_ = 0;
  *(undefined1 (*) [16])(pFVar2 + lVar8 + 0x30) = auVar4;
  auVar5._8_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  auVar5._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  auVar5._12_4_ = 0;
  *(undefined1 (*) [16])(pFVar2 + lVar8 + 0x60) = auVar5;
  iVar1 = this->NumCustomDataFloatsPerInst;
  if (0 < iVar1) {
    memset((this->CustomDatas).AllocatorInstance.Data + (longlong)(iVar1 * param_1) * 4,0,
           (longlong)iVar1 << 2);
  }
  return;
}

// SendRenderDynamicData_Concurrent @ 14a853620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UWN_ISKM_ISKMComponent::SendRenderDynamicData_Concurrent(UWN_ISKM_ISKMComponent *this)

{
  int *piVar1;
  FWN_ISKM_DynamicData *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_ISKM_SendRenderDynamicData> FVar9;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar10;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  uint uVar11;
  code **ppcVar12;
  FNameEntryId FVar13;
  FName FVar14;
  ulonglong uVar15;
  undefined1 auStackY_148 [32];
  FColor_u_0 local_e8 [2];
  LARGE_INTEGER local_e0;
  FName local_d8;
  FName local_d0;
  FStatMessage local_c0;
  FName local_b0;
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  undefined1 local_78 [40];
  code **local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  FVar9 = StatPtr_STAT_ISKM_SendRenderDynamicData;
  if (StatPtr_STAT_ISKM_SendRenderDynamicData ==
      (FThreadSafeStaticStat<FStat_STAT_ISKM_SendRenderDynamicData>)0x0) {
    pFVar8 = ::FName::FName(&local_b0,"STAT_ISKM_SendRenderDynamicData");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_ISKM_SendRenderDynamicData>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ISKM_SendRenderDynamicData,*pFVar8
                       ,L"SendRenderDynamicData","STATGROUP_ISKM","STATCAT_Advanced",L"ISKM",true,
                       true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar9;
  bVar4 = false;
  bVar6 = false;
  local_d0.ComparisonIndex.Value = 0;
  local_d0.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar11 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_e8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_e8[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d8.ComparisonIndex.Value = FVar13.Value;
        local_d8.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_d8,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_ISKMComponent.cpp"
                   ,0x1a1);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_e0.s.LowPart = FVar13.Value;
      local_e0.s.HighPart = uVar11;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar5 = true;
      goto LAB_14a853774;
    }
  }
  bVar5 = false;
  FVar14 = local_d0;
LAB_14a853774:
  UActorComponent::SendRenderDynamicData_Concurrent((UActorComponent *)this);
  pFVar2 = this->DynamicDataToRender;
  if ((pFVar2 != (FWN_ISKM_DynamicData *)0x0) &&
     (pcVar3 = *(code **)&this->field_0x530, pcVar3 != (code *)0x0)) {
    this->DynamicDataToRender = (FWN_ISKM_DynamicData *)0x0;
    local_a8[0] = (code *)0x0;
    local_80 = FMemory::Malloc(0x20,8);
    *local_80 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`UWN_ISKM_ISKMComponent::SendRenderDynamicData_Concurrent'::`2'::<lambda_1>,1,1>
                         ::_vftable_;
    local_80[1] = pcVar3;
    local_80[2] = (code *)pFVar2;
    local_80[3] = (code *)this;
    if (local_80 + 1 != (code **)0x0) {
      local_a8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UWN_ISKM_ISKMComponent::SendRenderDynamicData_Concurrent'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UWN_ISKM_ISKMComponent::SendRenderDynamicData_Concurrent_::__l2::TSTR_ISKM_SendRenderDynamicData435>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_78._0_8_ = local_a8[0];
      local_50 = local_80;
      local_80 = (code **)0x0;
      local_78._16_8_ = local_98[0];
      local_78._24_8_ = local_98[1];
      local_78._32_8_ = local_98[2];
      local_a8[0] = (code *)0x0;
      local_48 = 2;
      pFVar10 = (FRenderCommandTag *)
                TRenderCommandTag<`UWN_ISKM_ISKMComponent::SendRenderDynamicData_Concurrent'::__l2::TSTR_ISKM_SendRenderDynamicData435>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_78,pFVar10);
      uVar15 = (ulonglong)local_48;
      if (2 < uVar15) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar15] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_78._0_8_ != (code *)0x0) {
          ppcVar12 = (code **)(local_78 + 0x10);
          if (local_50 != (code **)0x0) {
            ppcVar12 = local_50;
          }
          (**(code **)(*ppcVar12 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar15])(local_78);
      }
    }
    if (local_a8[0] != (code *)0x0) {
      ppcVar12 = local_a8 + 2;
      if (local_80 != (code **)0x0) {
        ppcVar12 = local_80;
      }
      (**(code **)(*ppcVar12 + 0x10))();
    }
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_02 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_02 == (FThreadStats *)0x0) {
      this_03 = FThreadStatsPool::Get();
      this_02 = FThreadStatsPool::GetFromPool(this_03);
    }
    if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
      local_c0.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_c0.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_e0);
      local_c0.StatData.Pad[4] = '\0';
      local_c0.StatData.Pad[5] = '\0';
      local_c0.StatData.Pad[6] = '\0';
      local_c0.StatData.Pad[7] = '\0';
      local_c0.StatData.Pad[0] = local_e0.s.LowPart._0_1_;
      local_c0.StatData.Pad[1] = local_e0.s.LowPart._1_1_;
      local_c0.StatData.Pad[2] = local_e0.s.LowPart._2_1_;
      local_c0.StatData.Pad[3] = local_e0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_02,&local_c0);
      piVar1 = &this_02->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_02,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_02,false,false);
      }
    }
  }
  return;
}

// SetNumCustomDataFloats @ 14a854430

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UWN_ISKM_ISKMComponent::SetNumCustomDataFloats(UWN_ISKM_ISKMComponent *this,int param_1)

{
  int iVar1;
  
  this->NumCustomDataFloatsPerInst = param_1;
  if (param_1 == 0) {
    (this->CustomDatas).ArrayNum = 0;
    if ((this->CustomDatas).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->CustomDatas).AllocatorInstance,0,&(this->CustomDatas).ArrayMax);
      return;
    }
  }
  else {
    iVar1 = ((this->IndexAllocator).NumIndices - (this->IndexAllocator).BaseIndex) * param_1;
    if ((this->CustomDatas).ArrayNum < iVar1) {
      TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed(&this->CustomDatas,iVar1,No);
      return;
    }
  }
  return;
}

// ShouldRecreateProxyOnUpdateTransform @ 14a855000

bool __thiscall
UWN_ISKM_ISKMComponent::ShouldRecreateProxyOnUpdateTransform(UWN_ISKM_ISKMComponent *this)

{
  return false;
}

// StaticRegisterNativesUWN_ISKM_ISKMComponent @ 14a855f30

void __cdecl UWN_ISKM_ISKMComponent::StaticRegisterNativesUWN_ISKM_ISKMComponent(void)

{
  return;
}

