// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_MCS
// Functions: 29

// StaticClass @ 14acca8a0

UClass * __cdecl UWN_MCS_COICore::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_MCS_COICore.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_MCS",L"WN_MCS_COICore",
               &Z_Registration_Info_UClass_UWN_MCS_COICore.InnerSingleton,
               StaticRegisterNativesUWN_MCS_COICore,0x310,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UWN_MCS_COICore>,
               InternalVTableHelperCtorCaller<UWN_MCS_COICore>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_MCS_COICore.InnerSingleton;
}

// UWN_MCS_COICore @ 14accb3c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UWN_MCS_COICore * __thiscall
UWN_MCS_COICore::UWN_MCS_COICore(UWN_MCS_COICore *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  this->bInitializeCOIAsync = true;
  this->bInitializeCOIOnRegister = true;
  this->bUpdateMeshOnRegister = true;
  this->bAutoApplyMeshToSKMComp = true;
  this_00 = &(this->COIObjectPtr).SoftObjectPtr.field_0x18;
  this->bAllowPendingUpdateMesh = true;
  this->bUseFirstNameIfMissing = true;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined8 *)&this->MeshUpdateCompletionCallbacks = 0;
  *(undefined8 *)&(this->MeshUpdateCompletionCallbacks).field_0x8 = 0;
  *(undefined8 *)&(this->MeshUpdateCompletionCallbacks).field_0x10 = 0;
  *(undefined8 *)&(this->MeshUpdateCompletionCallbacks).field_0x18 = 2;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->COIObjectPtr).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->COIObjectPtr).SoftObjectPtr = 0;
  *(undefined8 *)&(this->COIObjectPtr).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->COIObjectPtr).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->COComponentName).ComparisonIndex = 0;
  (this->COComponentName).Number = 0;
  (this->CO).field0_0x0.DebugPtr = (UCustomizableObject *)0x0;
  (this->COI).field0_0x0.DebugPtr = (UCustomizableObjectInstance *)0x0;
  (this->COIUsage).field0_0x0.DebugPtr = (UCustomizableObjectInstanceUsage *)0x0;
  (this->LoadingCOIUsage).field0_0x0.DebugPtr = (UCustomizableObjectInstanceUsage *)0x0;
  this->bUseTemplateCOI = false;
  TQueue<FWN_MCS_MeshUpdateParams,1>::TQueue<FWN_MCS_MeshUpdateParams,1>
            (&this->PendingMeshUpdateParams);
  (this->MeshUpdateParams).ID = 0xffffffff;
  *(undefined8 *)&(this->MeshUpdateParams).Callback = 0;
  *(undefined8 *)&(this->MeshUpdateParams).Callback.field_0x8 = 0;
  *(undefined4 *)&(this->MeshUpdateParams).Callback.field_0x10 = 0;
  (this->MeshUpdateParams).InPolicy = Async_Med;
  return this;
}

// UWN_MCS_COICore @ 14accb4c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UWN_MCS_COICore * __thiscall
UWN_MCS_COICore::UWN_MCS_COICore(UWN_MCS_COICore *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  this->bInitializeCOIAsync = true;
  this->bInitializeCOIOnRegister = true;
  this->bUpdateMeshOnRegister = true;
  this->bAutoApplyMeshToSKMComp = true;
  this_00 = &(this->COIObjectPtr).SoftObjectPtr.field_0x18;
  this->bAllowPendingUpdateMesh = true;
  this->bUseFirstNameIfMissing = true;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined8 *)&this->MeshUpdateCompletionCallbacks = 0;
  *(undefined8 *)&(this->MeshUpdateCompletionCallbacks).field_0x8 = 0;
  *(undefined8 *)&(this->MeshUpdateCompletionCallbacks).field_0x10 = 0;
  *(undefined8 *)&(this->MeshUpdateCompletionCallbacks).field_0x18 = 2;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->COIObjectPtr).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->COIObjectPtr).SoftObjectPtr = 0;
  *(undefined8 *)&(this->COIObjectPtr).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->COIObjectPtr).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->COComponentName).ComparisonIndex = 0;
  (this->COComponentName).Number = 0;
  (this->CO).field0_0x0.DebugPtr = (UCustomizableObject *)0x0;
  (this->COI).field0_0x0.DebugPtr = (UCustomizableObjectInstance *)0x0;
  (this->COIUsage).field0_0x0.DebugPtr = (UCustomizableObjectInstanceUsage *)0x0;
  (this->LoadingCOIUsage).field0_0x0.DebugPtr = (UCustomizableObjectInstanceUsage *)0x0;
  this->bUseTemplateCOI = false;
  TQueue<FWN_MCS_MeshUpdateParams,1>::TQueue<FWN_MCS_MeshUpdateParams,1>
            (&this->PendingMeshUpdateParams);
  (this->MeshUpdateParams).ID = 0xffffffff;
  *(undefined8 *)&(this->MeshUpdateParams).Callback = 0;
  *(undefined8 *)&(this->MeshUpdateParams).Callback.field_0x8 = 0;
  *(undefined4 *)&(this->MeshUpdateParams).Callback.field_0x10 = 0;
  (this->MeshUpdateParams).InPolicy = Async_Med;
  return this;
}

// ~UWN_MCS_COICore @ 14accb640

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWN_MCS_COICore::~UWN_MCS_COICore(UWN_MCS_COICore *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MeshUpdateParams).Callback);
  pvVar1 = *(void **)&(this->MeshUpdateParams).Callback.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MeshUpdateParams).Callback);
  TQueue<FWN_MCS_MeshUpdateParams,1>::~TQueue<FWN_MCS_MeshUpdateParams,1>
            (&this->PendingMeshUpdateParams);
  pvVar1 = *(void **)&(this->COIObjectPtr).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->MeshUpdateCompletionCallbacks).field_0x8,
             *(int *)&(this->MeshUpdateCompletionCallbacks).field_0x10);
  pvVar1 = *(void **)&(this->MeshUpdateCompletionCallbacks).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MeshUpdateCompletionCallbacks);
  USceneComponent::~USceneComponent((USceneComponent *)this);
  return;
}

// operator() @ 14accb700

void __thiscall
`UWN_MCS_COICore::OnRegister'::__l11::<lambda_1>::operator()
          (void *this,FSoftObjectPath *param_1,UWN_MCS_COICore *param_2,bool param_3)

{
  UObject *pUVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UObject *local_res8;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  int local_18;
  EWN_MCS_MeshUpdatePolicy local_10;
  
  TVar2 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 8));
                    /* WARNING: Load size is inaccurate */
  pUVar1 = *TVar2.Object;
  *(undefined8 *)TVar2.Object = 0;
  if (local_res8 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(local_res8);
  }
  if (pUVar1 != (UObject *)0x0) {
    local_30._0_4_ = 0xffffffff;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_18 = 0;
    local_10 = Async_Med;
    UWN_MCS_COICore::UpdateMeshAsync(*(UWN_MCS_COICore **)this,(FWN_MCS_MeshUpdateParams *)local_30)
    ;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_48);
    if ((local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
      local_18 = 0;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (FStack_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar1);
  }
  return;
}

// operator() @ 14accb800

void __thiscall
`UWN_MCS_COICore::InitializeCOIAsync'::__l2::<lambda_2>::operator()
          (void *this,FSoftObjectPath *param_1,UObject *param_2)

{
  int iVar1;
  UWN_MCS_COICore *this_00;
  longlong *plVar2;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar3;
  UClass *pUVar4;
  UObject *local_res8;
  FReadAccessScope local_28;
  
  TVar3 = FWeakObjectPtr::Pin(this);
  this_00 = *(UWN_MCS_COICore **)TVar3.Object;
  *(undefined8 *)TVar3.Object = 0;
  if (local_res8 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(local_res8);
  }
  if (this_00 == (UWN_MCS_COICore *)0x0) {
    **(undefined1 **)((longlong)this + 0x20) = 1;
    return;
  }
  if (param_2 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UCustomizableObjectInstance_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14accb86b;
  }
  param_2 = (UObject *)0x0;
LAB_14accb86b:
  UWN_MCS_COICore::InitializeCOIImpl(this_00,(UCustomizableObjectInstance *)param_2);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_28);
  if ((*(int *)((longlong)this + 0x18) != 0) &&
     (plVar2 = *(longlong **)((longlong)this + 0x10), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x68))(plVar2,&(this_00->COIObjectPtr).SoftObjectPtr.field_0x8,this_00,1)
    ;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this_00);
  return;
}

// ApplyMeshToSkeletalMeshComponent @ 14accbaf0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UWN_MCS_COICore::ApplyMeshToSkeletalMeshComponent(UWN_MCS_COICore *this)

{
  byte *pbVar1;
  int iVar2;
  USkeletalMeshComponent *this_00;
  UCustomizableObjectInstanceUsage *pUVar3;
  code *pcVar4;
  UCustomizableObjectInstance *this_01;
  UClass *pUVar5;
  FName FVar6;
  USkeletalMesh *pUVar7;
  FStaticBasicLogRecord *pFVar8;
  FName local_res8;
  FString local_28;
  
  this_00 = *(USkeletalMeshComponent **)&this->field_0xd0;
  if (this_00 != (USkeletalMeshComponent *)0x0) {
    pUVar5 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar2 = (int)pUVar5->_padding_;
    if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar5->_padding_)) {
      if ((this->COI).field0_0x0.DebugPtr == (UCustomizableObjectInstance *)0x0) {
        if ((byte)MCS._0_1_ < 3) {
          return false;
        }
        local_res8.ComparisonIndex.Value = *(uint *)&this->field_0x18;
        local_res8.Number = *(uint *)&this->field_0x1c;
        ::FName::ToString(&local_res8,&local_28);
        pFVar8 = &::LOG_Static;
      }
      else {
        pUVar3 = (this->COIUsage).field0_0x0.DebugPtr;
        if (pUVar3 == (UCustomizableObjectInstanceUsage *)0x0) {
          if ((byte)MCS._0_1_ < 3) {
            return false;
          }
          local_res8.ComparisonIndex.Value = *(uint *)&this->field_0x18;
          local_res8.Number = *(uint *)&this->field_0x1c;
          ::FName::ToString(&local_res8,&local_28);
          pFVar8 = &::LOG_Static;
        }
        else {
          if ((this->COComponentName != sCOCompilingName) &&
             ((pUVar7 = (USkeletalMesh *)0x0, this->bUseFirstNameIfMissing != false ||
              (local_res8.ComparisonIndex.Value = 0, local_res8.Number = 0,
              this->COComponentName != (FName)0x0)))) {
            UCustomizableObjectInstanceUsage::AttachTo(pUVar3,this_00);
            pbVar1 = (byte *)((longlong)&this_00->_padding_ + 1);
            *pbVar1 = *pbVar1 | 0x80;
            USkeletalMeshComponent::SetUpdateAnimationInEditor(this_00,true);
            *(undefined1 *)((longlong)&this_00->_padding_ + 4) = 0;
            UMeshComponent::EmptyOverrideMaterials((UMeshComponent *)this_00);
            pUVar3 = (this->COIUsage).field0_0x0.DebugPtr;
            pcVar4 = *(code **)(this_00->_padding_ + 0xb48);
            if (pUVar3 != (UCustomizableObjectInstanceUsage *)0x0) {
              this_01 = (this->COI).field0_0x0.DebugPtr;
              FVar6 = UCustomizableObjectInstanceUsage::GetComponentName(pUVar3);
              pUVar7 = UCustomizableObjectInstance::GetComponentMeshSkeletalMesh
                                 (this_01,(FName *)FVar6);
            }
            (*pcVar4)(this_00,pUVar7,1);
            return true;
          }
          if ((byte)MCS._0_1_ < 3) {
            return false;
          }
          local_res8.ComparisonIndex.Value = *(uint *)&this->field_0x18;
          local_res8.Number = *(uint *)&this->field_0x1c;
          ::FName::ToString(&local_res8,&local_28);
          pFVar8 = &::LOG_Static;
        }
      }
      goto LAB_14accbca8;
    }
  }
  if ((byte)MCS._0_1_ < 3) {
    return false;
  }
  local_res8.ComparisonIndex.Value = *(uint *)&this->field_0x18;
  local_res8.Number = *(uint *)&this->field_0x1c;
  ::FName::ToString(&local_res8,&local_28);
  pFVar8 = &::LOG_Static;
LAB_14accbca8:
  UE::Logging::Private::BasicLog<3>(pFVar8,(FLogCategoryBase *)&MCS);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return false;
}

// CalcBounds @ 14accbcf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TBoxSphereBounds<double,double> * __thiscall
UWN_MCS_COICore::CalcBounds
          (UWN_MCS_COICore *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  double dVar1;
  double dVar2;
  UCustomizableObjectInstanceUsage *this_00;
  UCustomizableObjectInstance *this_01;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  FName FVar10;
  USkeletalMesh *pUVar11;
  double *pdVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 local_160 [24];
  undefined4 local_148;
  undefined4 uStack_144;
  TMatrix<double> local_128 [2];
  
  this_00 = (this->COIUsage).field0_0x0.DebugPtr;
  if (this_00 == (UCustomizableObjectInstanceUsage *)0x0) {
    pUVar11 = (USkeletalMesh *)0x0;
  }
  else {
    this_01 = (this->COI).field0_0x0.DebugPtr;
    FVar10 = UCustomizableObjectInstanceUsage::GetComponentName(this_00);
    pUVar11 = UCustomizableObjectInstance::GetComponentMeshSkeletalMesh(this_01,(FName *)FVar10);
  }
  if (pUVar11 != (USkeletalMesh *)0x0) {
    pdVar12 = (double *)(**(code **)(pUVar11->_padding_ + 0x3e0))(pUVar11,local_160);
    dVar1 = pdVar12[1];
    (__return_storage_ptr__->Origin).field0_0x0._s_0.X = *pdVar12;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar1;
    dVar1 = pdVar12[3];
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = pdVar12[2];
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar1;
    dVar1 = pdVar12[5];
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = pdVar12[4];
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar1;
    __return_storage_ptr__->SphereRadius = pdVar12[6];
    UE::Math::TTransform<double>::ToMatrixWithScale(param_1,local_128);
    dVar7 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X;
    dVar13 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y;
    dVar8 = (__return_storage_ptr__->Origin).field0_0x0._s_0.X;
    dVar9 = (__return_storage_ptr__->Origin).field0_0x0._s_0.Y;
    dVar1 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z;
    dVar2 = (__return_storage_ptr__->Origin).field0_0x0._s_0.Z;
    dVar5 = (double)CONCAT44((uint)((ulonglong)(dVar13 * local_128[0].M[1][0]) >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar13 * local_128[0].M[1][0],0) &
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
            (double)CONCAT44((uint)((ulonglong)(dVar7 * local_128[0].M[0][0]) >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar7 * local_128[0].M[0][0],0) &
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
            (double)CONCAT44((uint)((ulonglong)(dVar1 * local_128[0].M[2][0]) >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar1 * local_128[0].M[2][0],0) &
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    dVar6 = (double)CONCAT44((uint)((ulonglong)(dVar13 * local_128[0].M[1][1]) >> 0x20) &
                             _UNK_15061cc8c,SUB84(dVar13 * local_128[0].M[1][1],0) & _UNK_15061cc88)
            + (double)CONCAT44((uint)((ulonglong)(dVar7 * local_128[0].M[0][1]) >> 0x20) &
                               _UNK_15061cc8c,SUB84(dVar7 * local_128[0].M[0][1],0) & _UNK_15061cc88
                              ) +
            (double)CONCAT44((uint)((ulonglong)(dVar1 * local_128[0].M[2][1]) >> 0x20) &
                             _UNK_15061cc8c,SUB84(dVar1 * local_128[0].M[2][1],0) & _UNK_15061cc88);
    dVar7 = (double)CONCAT44((uint)((ulonglong)(dVar13 * local_128[0].M[1][2]) >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar13 * local_128[0].M[1][2],0) &
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
            (double)CONCAT44((uint)((ulonglong)(dVar7 * local_128[0].M[0][2]) >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar7 * local_128[0].M[0][2],0) &
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
            (double)CONCAT44((uint)((ulonglong)(dVar1 * local_128[0].M[2][2]) >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar1 * local_128[0].M[2][2],0) &
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar14._0_8_ =
         local_128[0].M[1][0] * local_128[0].M[1][0] + local_128[0].M[0][0] * local_128[0].M[0][0] +
         local_128[0].M[2][0] * local_128[0].M[2][0];
    auVar14._8_8_ =
         local_128[0].M[1][1] * local_128[0].M[1][1] + local_128[0].M[0][1] * local_128[0].M[0][1] +
         local_128[0].M[2][1] * local_128[0].M[2][1];
    auVar15._8_4_ = SUB84(auVar14._8_8_,0);
    auVar15._0_8_ = auVar14._8_8_;
    auVar15._12_4_ = (int)((ulonglong)auVar14._8_8_ >> 0x20);
    auVar15 = maxpd(auVar14,auVar15);
    dVar1 = local_128[0].M[1][2] * local_128[0].M[1][2] +
            local_128[0].M[0][2] * local_128[0].M[0][2] +
            local_128[0].M[2][2] * local_128[0].M[2][2];
    dVar13 = SQRT(dVar7 * dVar7 + dVar5 * dVar5 + dVar6 * dVar6);
    auVar4._8_4_ = SUB84(dVar1,0);
    auVar4._0_8_ = dVar1;
    auVar4._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    auVar15 = maxpd(auVar15,auVar4);
    dVar1 = SQRT(auVar15._0_8_) * __return_storage_ptr__->SphereRadius;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.X =
         local_128[0].M[1][0] * dVar9 + local_128[0].M[0][0] * dVar8 + dVar2 * local_128[0].M[2][0]
         + local_128[0].M[3][0];
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Y =
         local_128[0].M[1][1] * dVar9 + local_128[0].M[0][1] * dVar8 + dVar2 * local_128[0].M[2][1]
         + local_128[0].M[3][1];
    if (dVar1 <= dVar13) {
      dVar13 = dVar1;
    }
    local_148 = SUB84(dVar5,0);
    uStack_144 = (undefined4)((ulonglong)dVar5 >> 0x20);
    auVar3._8_4_ = local_148;
    auVar3._0_8_ = local_128[0].M[1][2] * dVar9 + local_128[0].M[0][2] * dVar8 +
                   dVar2 * local_128[0].M[2][2] + local_128[0].M[3][2];
    auVar3._12_4_ = uStack_144;
    *(undefined1 (*) [16])((longlong)&(__return_storage_ptr__->Origin).field0_0x0 + 0x10) = auVar3;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar6;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar7;
    __return_storage_ptr__->SphereRadius = dVar13;
    return __return_storage_ptr__;
  }
  dVar2 = (param_1->Translation).XY.m128d_f64[1];
  dVar1 = (param_1->Translation).ZW.m128d_f64[0];
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = (param_1->Translation).XY.m128d_f64[0];
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar2;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = 50.0;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = 50.0;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar1;
  dVar1 = (__return_storage_ptr__->Origin).field0_0x0._s_0.Z + __real_4059000000000000;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = 100.0;
  __return_storage_ptr__->SphereRadius = 122.47448713915891;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// Deinitialize @ 14accc390

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWN_MCS_COICore::Deinitialize(UWN_MCS_COICore *this,bool param_1)

{
  int iVar1;
  UMeshComponent *this_00;
  UClass *pUVar2;
  
  if ((param_1) &&
     (this_00 = *(UMeshComponent **)&this->field_0xd0, this_00 != (UMeshComponent *)0x0)) {
    pUVar2 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      UMeshComponent::EmptyOverrideMaterials(this_00);
      (**(code **)(this_00->_padding_ + 0xb48))(this_00,0,1);
      UActorComponent::MarkRenderStateDirty((UActorComponent *)this_00);
    }
  }
  TQueue<FWN_MCS_MeshUpdateParams,1>::Empty(&this->PendingMeshUpdateParams);
  (this->LoadingCOIUsage).field0_0x0.DebugPtr = (UCustomizableObjectInstanceUsage *)0x0;
  (this->COIUsage).field0_0x0.DebugPtr = (UCustomizableObjectInstanceUsage *)0x0;
  (this->COI).field0_0x0.DebugPtr = (UCustomizableObjectInstance *)0x0;
  (this->CO).field0_0x0.DebugPtr = (UCustomizableObject *)0x0;
  return;
}

// GetCOComponentName @ 14accc6f0

FName __thiscall UWN_MCS_COICore::GetCOComponentName(UWN_MCS_COICore *this)

{
  UCustomizableObjectInstanceUsage *this_00;
  FName FVar1;
  FName in_RDX;
  
  this_00 = (this->COIUsage).field0_0x0.DebugPtr;
  if (this_00 == (UCustomizableObjectInstanceUsage *)0x0) {
    FVar1 = this->COComponentName;
    if (FVar1 == sCOCompilingName) {
      FVar1.ComparisonIndex.Value = 0;
      FVar1.Number = 0;
    }
    *(FName *)in_RDX = FVar1;
    return in_RDX;
  }
  FVar1 = UCustomizableObjectInstanceUsage::GetComponentName(this_00);
  *(FName *)in_RDX = *(FName *)FVar1;
  return in_RDX;
}

// GetCOComponentNames @ 14accc750

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UWN_MCS_COICore::GetCOComponentNames
          (UWN_MCS_COICore *this,TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  UCustomizableObjectInstance *this_00;
  UCustomizableObject *this_01;
  FName FVar4;
  int iVar5;
  undefined1 local_res8 [8];
  ForAnyElementType local_28;
  undefined8 local_20;
  
  this_01 = (this->CO).field0_0x0.DebugPtr;
  if ((this_01 == (UCustomizableObject *)0x0) &&
     ((this_00 = TSoftObjectPtr<UCustomizableObjectInstance>::LoadSynchronous(&this->COIObjectPtr),
      this_00 == (UCustomizableObjectInstance *)0x0 ||
      (this_01 = UCustomizableObjectInstance::GetCustomizableObject(this_00),
      this_01 == (UCustomizableObject *)0x0)))) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  iVar5 = 0;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = 0;
  iVar2 = UCustomizableObject::GetComponentCount(this_01);
  uVar1 = iVar2 + 1;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (local_20._4_4_ < (int)uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar1,&local_28,(int)local_20,(int *)((longlong)&local_20 + 4));
  }
  iVar3 = (int)local_20;
  if ((int)local_20 == local_20._4_4_) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&local_28,(int *)((longlong)&local_20 + 4));
  }
  *(undefined8 *)(local_28.Data + (longlong)iVar3 * 8) = 0;
  local_20._0_4_ = iVar3 + 1;
  if (0 < iVar2) {
    do {
      FVar4 = UCustomizableObject::GetComponentName(this_01,(int)local_res8);
      if ((int)local_20 == local_20._4_4_) {
        local_20._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&local_28,(int *)((longlong)&local_20 + 4));
      }
      iVar3 = (int)local_20 + 1;
      iVar5 = iVar5 + 1;
      *(undefined8 *)(local_28.Data + (longlong)(int)local_20 * 8) = *(undefined8 *)FVar4;
      local_20._0_4_ = iVar3;
    } while (iVar5 < iVar2);
  }
  (__return_storage_ptr__->AllocatorInstance).Data = local_28.Data;
  __return_storage_ptr__->ArrayNum = (int)local_20;
  __return_storage_ptr__->ArrayMax = local_20._4_4_;
  return __return_storage_ptr__;
}

// GetCOComponentSkeletalMesh @ 14accc8d0

USkeletalMesh * __thiscall UWN_MCS_COICore::GetCOComponentSkeletalMesh(UWN_MCS_COICore *this)

{
  UCustomizableObjectInstanceUsage *this_00;
  UCustomizableObjectInstance *this_01;
  FName FVar1;
  USkeletalMesh *pUVar2;
  
  this_00 = (this->COIUsage).field0_0x0.DebugPtr;
  if (this_00 == (UCustomizableObjectInstanceUsage *)0x0) {
    return (USkeletalMesh *)0x0;
  }
  this_01 = (this->COI).field0_0x0.DebugPtr;
  FVar1 = UCustomizableObjectInstanceUsage::GetComponentName(this_00);
  pUVar2 = UCustomizableObjectInstance::GetComponentMeshSkeletalMesh(this_01,(FName *)FVar1);
  return pUVar2;
}

// GetIntParameterSelectedOption @ 14accc940

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
UWN_MCS_COICore::GetIntParameterSelectedOption
          (UWN_MCS_COICore *this,FString *__return_storage_ptr__,FString *param_1)

{
  UCustomizableObjectInstance *this_00;
  FString *pFVar1;
  FName local_res8 [4];
  FString local_18;
  
  this_00 = (this->COI).field0_0x0.DebugPtr;
  if (this_00 == (UCustomizableObjectInstance *)0x0) {
    if (2 < (byte)MCS._0_1_) {
      local_res8[0].ComparisonIndex.Value = *(uint *)&this->field_0x18;
      local_res8[0].Number = *(uint *)&this->field_0x1c;
      ::FName::ToString(local_res8,&local_18);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&MCS);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  pFVar1 = UCustomizableObjectInstance::GetIntParameterSelectedOption(this_00,param_1,-1);
  ::FString::FString(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14accca10

UClass * __cdecl UWN_MCS_COICore::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_MCS_COICore.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_MCS",L"WN_MCS_COICore",
               &Z_Registration_Info_UClass_UWN_MCS_COICore.InnerSingleton,
               StaticRegisterNativesUWN_MCS_COICore,0x310,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UWN_MCS_COICore>,
               InternalVTableHelperCtorCaller<UWN_MCS_COICore>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_MCS_COICore.InnerSingleton;
}

// HasValidCOComponentName @ 14acccb10

bool __thiscall UWN_MCS_COICore::HasValidCOComponentName(UWN_MCS_COICore *this)

{
  if (this->COComponentName == sCOCompilingName) {
    return false;
  }
  if (this->bUseFirstNameIfMissing == false) {
    return this->COComponentName != (FName)0x0;
  }
  return true;
}

// HasValidMesh @ 14acccb40

bool __thiscall UWN_MCS_COICore::HasValidMesh(UWN_MCS_COICore *this)

{
  UCustomizableObjectInstanceUsage *this_00;
  USkeletalMeshComponent *pUVar1;
  USkeletalMeshComponent *pUVar2;
  
  this_00 = (this->COIUsage).field0_0x0.DebugPtr;
  if (this_00 != (UCustomizableObjectInstanceUsage *)0x0) {
    pUVar1 = *(USkeletalMeshComponent **)&this->field_0xd0;
    pUVar2 = UCustomizableObjectInstanceUsage::GetAttachParent(this_00);
    if (pUVar2 == pUVar1) {
      return true;
    }
  }
  return false;
}

// InitializeCOI @ 14acccb90

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UWN_MCS_COICore::InitializeCOI
          (UWN_MCS_COICore *this,FSoftObjectPath *param_1,FName param_2,bool param_3)

{
  bool bVar1;
  UCustomizableObjectInstance *pUVar2;
  FString local_38;
  undefined1 local_28 [16];
  FUtf8String local_18;
  
  if ((param_1->AssetPath).PackageName == (FName)0x0) {
    if (2 < (byte)MCS._0_1_) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,(FString *)local_28,(UObject *)0x0)
      ;
      FSoftObjectPath::GetLongPackageName(param_1,&local_38);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&MCS);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_28._0_8_);
      }
    }
    bVar1 = false;
  }
  else {
    local_28._0_8_ = (param_1->AssetPath).PackageName;
    local_28._8_8_ = (param_1->AssetPath).AssetName;
    FUtf8String::FUtf8String(&local_18,&param_1->SubPathString);
    *(undefined8 *)&(this->COIObjectPtr).SoftObjectPtr = 0;
    *(undefined8 *)&(this->COIObjectPtr).SoftObjectPtr.field_0x8 = local_28._0_8_;
    *(undefined8 *)&(this->COIObjectPtr).SoftObjectPtr.field_0x10 = local_28._8_8_;
    FUtf8String::operator=((FUtf8String *)&(this->COIObjectPtr).SoftObjectPtr.field_0x18,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    this->COComponentName = param_2;
    this->bUseTemplateCOI = param_3;
    pUVar2 = TSoftObjectPtr<UCustomizableObjectInstance>::LoadSynchronous(&this->COIObjectPtr);
    bVar1 = InitializeCOIImpl(this,pUVar2);
  }
  return bVar1;
}

// InitializeCOIAsync @ 14accccc0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UWN_MCS_COICore::InitializeCOIAsync
          (UWN_MCS_COICore *this,
          TDelegate<void___cdecl(FSoftObjectPath_const_&,UWN_MCS_COICore_*,bool),FDefaultDelegateUserPolicy>
          *param_1,FSoftObjectPath *param_2,FName param_3,bool param_4)

{
  undefined1 auVar1 [8];
  bool bVar2;
  int iVar3;
  UObject *pUVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy> *this_00;
  char local_res8 [8];
  FWeakObjectPtr local_res10;
  UWN_MCS_COICore *local_res18;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  undefined1 local_b0 [24];
  FDelegateAllocation *local_98;
  undefined1 local_90 [8];
  undefined1 local_88 [24];
  char *local_70;
  FLoadAssetAsyncOptionalParams local_68;
  
  local_res8[0] = '\0';
  pUVar4 = FSoftObjectPath::ResolveObject(param_2);
  if (pUVar4 != (UObject *)0x0) {
    bVar2 = InitializeCOI(this,param_2,param_3,param_4);
    local_res8[0] = '\x01';
    TDelegate<void___cdecl(FSoftObjectPath_const_&,UWN_MCS_COICore_*,bool),FDefaultDelegateUserPolicy>
    ::ExecuteIfBound(param_1,param_2,this,bVar2);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
    if (*(void **)&param_1->field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&param_1->field_0x8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)param_1);
    return bVar2;
  }
  if ((param_2->AssetPath).PackageName == (FName)0x0) {
    if (2 < (byte)MCS._0_1_) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,(FString *)local_b0,(UObject *)0x0)
      ;
      FSoftObjectPath::GetLongPackageName(param_2,(FString *)local_90);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&MCS);
      if ((FWeakObjectPtr)local_90 != (FWeakObjectPtr)0x0) {
        FMemory::Free((void *)local_90);
      }
      if ((FName)local_b0._0_8_ != (FName)0x0) {
        FMemory::Free((void *)local_b0._0_8_);
      }
    }
    local_res8[0] = '\x01';
  }
  else {
    local_b0._0_8_ = (param_2->AssetPath).PackageName;
    local_b0._8_8_ = (param_2->AssetPath).AssetName;
    FUtf8String::FUtf8String((FUtf8String *)(local_b0 + 0x10),&param_2->SubPathString);
    *(undefined8 *)&(this->COIObjectPtr).SoftObjectPtr = 0;
    *(undefined8 *)&(this->COIObjectPtr).SoftObjectPtr.field_0x8 = local_b0._0_8_;
    *(undefined8 *)&(this->COIObjectPtr).SoftObjectPtr.field_0x10 = local_b0._8_8_;
    FUtf8String::operator=
              ((FUtf8String *)&(this->COIObjectPtr).SoftObjectPtr.field_0x18,
               (FUtf8String *)(local_b0 + 0x10));
    if ((void *)CONCAT71(local_b0._17_7_,local_b0[0x10]) != (void *)0x0) {
      FMemory::Free((void *)CONCAT71(local_b0._17_7_,local_b0[0x10]));
    }
    this->bUseTemplateCOI = param_4;
    this->COComponentName = param_3;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
    local_90._0_4_ = local_res10.ObjectIndex;
    local_90._4_4_ = local_res10.ObjectSerialNumber;
    TDelegate<void___cdecl(FSoftObjectPath_const_&,UWN_MCS_COICore_*,bool),FDefaultDelegateUserPolicy>
    ::
    TDelegate<void___cdecl(FSoftObjectPath_const_&,UWN_MCS_COICore_*,bool),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FSoftObjectPath_const_&,UWN_MCS_COICore_*,bool),FDefaultDelegateUserPolicy>
                *)local_88,param_1);
    local_70 = local_res8;
    local_c8 = (undefined1  [8])0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)local_b0);
    local_98 = &local_c0;
    puVar5 = UE::Core::Private::DelegateAllocate(0x40,&local_c0);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBUFSoftObjectPath__PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[2] = uVar6;
      *puVar5 = &TBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,`UWN_MCS_COICore::InitializeCOIAsync'::`2'::<lambda_2>_>
                 ::_vftable_;
      ((FWeakObjectPtr *)(puVar5 + 3))->ObjectIndex = local_90._0_4_;
      ((FWeakObjectPtr *)(puVar5 + 3))->ObjectSerialNumber = local_90._4_4_;
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar5 + 4),
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_88);
      puVar5[7] = local_70;
    }
    if (local_b0[0x10] == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_b0._8_8_,(FDestructionSentinel *)local_b0);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_88);
    if ((void *)local_88._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_88._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_88);
    this_00 = TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
              ::
              TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
                        ((TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
                          *)local_90,
                         (TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
                          *)local_c8);
    local_68.PackagePriority = 0;
    local_68.InstancingContext = (FLinkerInstancingContext *)0x0;
    local_68.LoadFlags = 0;
    local_68.ProgressDelegate.Object = (FLoadPackageAsyncProgressDelegate *)0x0;
    local_68.ProgressDelegate.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b0,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
    iVar3 = FSoftObjectPath::LoadAsync
                      ((FSoftObjectPath *)&(this->COIObjectPtr).SoftObjectPtr.field_0x8,
                       (TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
                        *)local_b0,&local_68);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
    if (*(void **)&this_00->field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&this_00->field_0x8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)this_00);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (iVar3 != -1) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
                 (FWriteAccessScope *)local_b0);
      if ((local_c0.DelegateSize != 0) &&
         (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_c0,0,0,0x10);
        local_c0.DelegateSize = 0;
      }
      if (local_b0[0x10] == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)local_b0._8_8_,(FDestructionSentinel *)local_b0);
      }
      if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_c0.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_c8);
      if (local_res8[0] != '\0') {
        TDelegate<void___cdecl(FSoftObjectPath_const_&,UWN_MCS_COICore_*,bool),FDefaultDelegateUserPolicy>
        ::ExecuteIfBound(param_1,param_2,this,true);
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
      if (*(void **)&param_1->field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&param_1->field_0x8);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)param_1);
      return true;
    }
    if (2 < (byte)MCS._0_1_) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,(FString *)local_b0,(UObject *)0x0)
      ;
      FSoftObjectPath::GetLongPackageName
                ((FSoftObjectPath *)&(this->COIObjectPtr).SoftObjectPtr.field_0x8,
                 (FString *)local_90);
      auVar1 = local_90;
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&MCS);
      if ((FWeakObjectPtr)auVar1 != (FWeakObjectPtr)0x0) {
        FMemory::Free((void *)auVar1);
      }
      if ((FName)local_b0._0_8_ != (FName)0x0) {
        FMemory::Free((void *)local_b0._0_8_);
      }
    }
    local_res8[0] = '\x01';
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)local_b0);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_b0[0x10] == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_b0._8_8_,(FDestructionSentinel *)local_b0);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_c8);
    if (local_res8[0] == '\0') goto LAB_14accd0bb;
  }
  TDelegate<void___cdecl(FSoftObjectPath_const_&,UWN_MCS_COICore_*,bool),FDefaultDelegateUserPolicy>
  ::ExecuteIfBound(param_1,param_2,this,false);
LAB_14accd0bb:
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return false;
}

// InitializeCOIImpl @ 14accd1b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UWN_MCS_COICore::InitializeCOIImpl(UWN_MCS_COICore *this,UCustomizableObjectInstance *param_1)

{
  FName FVar1;
  code *pcVar2;
  UCustomizableObject *pUVar3;
  FName *pFVar4;
  FName FVar5;
  UClass *pUVar6;
  UPackage *pUVar7;
  UCustomizableObjectInstance *pUVar8;
  FString *pFVar9;
  FStaticBasicLogRecord *pFVar10;
  ForAnyElementType FVar11;
  wchar_t *pwVar12;
  FName local_res10;
  FName local_res18;
  FString local_48;
  FString local_38;
  
  if (param_1 == (UCustomizableObjectInstance *)0x0) {
    if ((byte)MCS._0_1_ < 3) {
      return false;
    }
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_38,(UObject *)0x0);
    FSoftObjectPath::GetLongPackageName
              ((FSoftObjectPath *)&(this->COIObjectPtr).SoftObjectPtr.field_0x8,&local_48);
    pFVar10 = &::LOG_Static;
  }
  else {
    pUVar3 = UCustomizableObjectInstance::GetCustomizableObject(param_1);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
       (pUVar3 == (UCustomizableObject *)0x0)) {
      (this->CO).field0_0x0.DebugPtr = pUVar3;
      if (pUVar3 == (UCustomizableObject *)0x0) {
        if ((byte)MCS._0_1_ < 3) {
          return false;
        }
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_38,(UObject *)0x0);
        FSoftObjectPath::GetLongPackageName
                  ((FSoftObjectPath *)&(this->COIObjectPtr).SoftObjectPtr.field_0x8,&local_48);
        pFVar10 = &::LOG_Static;
        goto LAB_14accd219;
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
      (this->CO).field0_0x0.DebugPtr = pUVar3;
    }
    if ((this->COComponentName == sCOCompilingName) ||
       ((this->bUseFirstNameIfMissing == false && (this->COComponentName == (FName)0x0)))) {
      if ((byte)MCS._0_1_ < 3) {
        return false;
      }
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_38,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&MCS);
      goto LAB_14accd4b0;
    }
    if (this->bUseTemplateCOI == false) {
      FSoftObjectPath::GetAssetName
                ((FSoftObjectPath *)&(this->COIObjectPtr).SoftObjectPtr.field_0x8,&local_48);
      FVar11.Data = (FScriptContainerElement *)L"";
      if (local_48.Data.ArrayNum != 0) {
        FVar11.Data = local_48.Data.AllocatorInstance.Data;
      }
      pFVar4 = ::FName::FName(&local_res18,(wchar_t *)FVar11.Data);
      FVar1 = *pFVar4;
      FVar5 = (FName)Z_Construct_UClass_UCustomizableObjectInstance_NoRegister();
      pUVar6 = (UClass *)GetTransientPackage();
      MakeUniqueObjectName((UObject *)&local_res10,pUVar6,FVar5,FVar1.ComparisonIndex.Value.Value);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      pUVar7 = GetTransientPackage();
      pUVar8 = UCustomizableObjectInstance::CloneStatic(param_1,(UObject *)pUVar7);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar8 != (UCustomizableObjectInstance *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      (this->COI).field0_0x0.DebugPtr = pUVar8;
      pcVar2 = *(code **)(pUVar8->_padding_ + 0x170);
      pUVar7 = GetTransientPackage();
      pFVar9 = ::FName::ToString(&local_res10,&local_38);
      if ((pFVar9->Data).ArrayNum == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
      }
      (*pcVar2)(pUVar8,pwVar12,pUVar7,0);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      UCustomizableObjectInstance::SetObject
                ((this->COI).field0_0x0.DebugPtr,(this->CO).field0_0x0.DebugPtr);
      UCustomizableObjectInstance::SetBuildParameterRelevancy((this->COI).field0_0x0.DebugPtr,true);
    }
    else {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      (this->COI).field0_0x0.DebugPtr = param_1;
    }
    if ((this->COI).field0_0x0.DebugPtr != (UCustomizableObjectInstance *)0x0) {
      return true;
    }
    if ((byte)MCS._0_1_ < 3) {
      return false;
    }
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_38,(UObject *)0x0);
    FSoftObjectPath::GetLongPackageName
              ((FSoftObjectPath *)&(this->COIObjectPtr).SoftObjectPtr.field_0x8,&local_48);
    pFVar10 = &::LOG_Static;
  }
LAB_14accd219:
  UE::Logging::Private::BasicLog<3>(pFVar10,(FLogCategoryBase *)&MCS);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
LAB_14accd4b0:
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return false;
}

// IsReadyToUpdateMesh @ 14accd510

bool __thiscall UWN_MCS_COICore::IsReadyToUpdateMesh(UWN_MCS_COICore *this)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  
  if (((this->field_0x98 & 1) != 0) &&
     ((this->CO).field0_0x0.DebugPtr != (UCustomizableObject *)0x0)) {
    pUVar2 = TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)&this->COIObjectPtr);
    if (pUVar2 != (UObject *)0x0) {
      pUVar3 = Z_Construct_UClass_UCustomizableObjectInstance_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar3->_padding_)) &&
          ((this->COI).field0_0x0.DebugPtr != (UCustomizableObjectInstance *)0x0)) &&
         ((this->COComponentName != sCOCompilingName &&
          ((this->bUseFirstNameIfMissing != false || (this->COComponentName != (FName)0x0)))))) {
        return true;
      }
    }
  }
  return false;
}

// OnRegister @ 14accd660

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWN_MCS_COICore::OnRegister(UWN_MCS_COICore *this)

{
  TDelegate<void___cdecl(unsigned_int,UWN_MCS_COICore_*,EWN_MCS_MeshUpdateResult),FDefaultDelegateUserPolicy>
  *this_00;
  bool bVar1;
  int iVar2;
  FName FVar3;
  TNode *pTVar4;
  UMeshComponent *this_01;
  undefined8 *puVar5;
  ulong64 uVar6;
  TDelegate<void___cdecl(FSoftObjectPath_const_&,UWN_MCS_COICore_*,bool),FDefaultDelegateUserPolicy>
  *pTVar7;
  UObject *pUVar8;
  UClass *pUVar9;
  TNode *pTVar10;
  FName local_res8;
  UWN_MCS_COICore *local_res10;
  FDestructionSentinel local_88;
  undefined1 local_70 [16];
  int local_60;
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  ForAnyElementType local_48;
  undefined1 *local_40;
  EWN_MCS_MeshUpdatePolicy local_38;
  
  USceneComponent::OnRegister((USceneComponent *)this);
  if (((*(longlong *)&(this->COIObjectPtr).SoftObjectPtr.field_0x8 == 0) ||
      (local_res8.ComparisonIndex.Value = 0, local_res8.Number = 0,
      this->COComponentName == (FName)0x0)) || (this->bInitializeCOIOnRegister == false)) {
    this_01 = *(UMeshComponent **)&this->field_0xd0;
    if (this_01 != (UMeshComponent *)0x0) {
      pUVar9 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
      iVar2 = (int)pUVar9->_padding_;
      if ((iVar2 <= *(int *)(this_01->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar9->_padding_)) {
        UMeshComponent::EmptyOverrideMaterials(this_01);
        (**(code **)(this_01->_padding_ + 0xb48))(this_01,0,1);
        UActorComponent::MarkRenderStateDirty((UActorComponent *)this_01);
      }
    }
    TQueue<FWN_MCS_MeshUpdateParams,1>::Empty(&this->PendingMeshUpdateParams);
    (this->LoadingCOIUsage).field0_0x0.DebugPtr = (UCustomizableObjectInstanceUsage *)0x0;
    (this->COIUsage).field0_0x0.DebugPtr = (UCustomizableObjectInstanceUsage *)0x0;
    (this->COI).field0_0x0.DebugPtr = (UCustomizableObjectInstance *)0x0;
    (this->CO).field0_0x0.DebugPtr = (UCustomizableObject *)0x0;
    return;
  }
  TQueue<FWN_MCS_MeshUpdateParams,1>::Empty(&this->PendingMeshUpdateParams);
  (this->LoadingCOIUsage).field0_0x0.DebugPtr = (UCustomizableObjectInstanceUsage *)0x0;
  (this->COIUsage).field0_0x0.DebugPtr = (UCustomizableObjectInstanceUsage *)0x0;
  (this->COI).field0_0x0.DebugPtr = (UCustomizableObjectInstance *)0x0;
  (this->CO).field0_0x0.DebugPtr = (UCustomizableObject *)0x0;
  if (this->bInitializeCOIAsync != false) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_res10 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res8,(FObjectPtr)&local_res10);
    local_70._0_8_ = (atomic<unsigned___int64>)0x0;
    local_70._8_8_ = (atomic<unsigned___int64> *)0x0;
    local_60 = 0;
    if (this->bUpdateMeshOnRegister != false) {
      local_88.Accessor = (FMRSWRecursiveAccessDetector *)local_res8;
      local_88._0_8_ = this;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_70,
                 (FWriteAccessScope *)local_58);
      local_40 = local_70 + 8;
      puVar5 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)(local_70 + 8));
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEBUFSoftObjectPath__PEAVUWN_MCS_COICore___N_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar6 = FDelegateHandle::GenerateNewID();
        puVar5[2] = uVar6;
        *puVar5 = &TBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UWN_MCS_COICore_*,bool),FDefaultDelegateUserPolicy,`UWN_MCS_COICore::OnRegister'::`11'::<lambda_1>_>
                   ::_vftable_;
        puVar5[3] = local_88._0_8_;
        *(FMRSWRecursiveAccessDetector **)(puVar5 + 4) = local_88.Accessor;
      }
      if (local_48.Data._0_1_ == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)local_50,(FDestructionSentinel *)local_58);
      }
    }
    bVar1 = this->bUseTemplateCOI;
    FVar3 = this->COComponentName;
    pTVar7 = TDelegate<void___cdecl(FSoftObjectPath_const_&,UWN_MCS_COICore_*,bool),FDefaultDelegateUserPolicy>
             ::
             TDelegate<void___cdecl(FSoftObjectPath_const_&,UWN_MCS_COICore_*,bool),FDefaultDelegateUserPolicy>
                       ((TDelegate<void___cdecl(FSoftObjectPath_const_&,UWN_MCS_COICore_*,bool),FDefaultDelegateUserPolicy>
                         *)&local_88,
                        (TDelegate<void___cdecl(FSoftObjectPath_const_&,UWN_MCS_COICore_*,bool),FDefaultDelegateUserPolicy>
                         *)local_70);
    InitializeCOIAsync(this,pTVar7,(FSoftObjectPath *)&(this->COIObjectPtr).SoftObjectPtr.field_0x8,
                       FVar3,bVar1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_70,
               (FWriteAccessScope *)&local_88);
    if ((local_60 != 0) &&
       ((FMRSWRecursiveAccessDetector *)local_70._8_8_ != (FMRSWRecursiveAccessDetector *)0x0)) {
      (**(code **)*(atomic<unsigned___int64> *)local_70._8_8_)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)(local_70 + 8),0,0,0x10);
      local_60 = 0;
    }
    if (local_88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
    }
    if ((FMRSWRecursiveAccessDetector *)local_70._8_8_ != (FMRSWRecursiveAccessDetector *)0x0) {
      FMemory::Free((void *)local_70._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_70);
    return;
  }
  InitializeCOI(this,(FSoftObjectPath *)&(this->COIObjectPtr).SoftObjectPtr.field_0x8,
                this->COComponentName,this->bUseTemplateCOI);
  if (this->bUpdateMeshOnRegister == false) {
    return;
  }
  local_58._0_4_ = ~Reader;
  local_50 = (undefined1  [8])0x0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = (undefined1 *)((ulonglong)local_40 & 0xffffffff00000000);
  local_38 = Async_Med;
  if ((((this->field_0x98 & 1) != 0) &&
      ((this->CO).field0_0x0.DebugPtr != (UCustomizableObject *)0x0)) &&
     (pUVar8 = TPersistentObjectPtr<FSoftObjectPath>::Get
                         ((TPersistentObjectPtr<FSoftObjectPath> *)&this->COIObjectPtr),
     pUVar8 != (UObject *)0x0)) {
    pUVar9 = Z_Construct_UClass_UCustomizableObjectInstance_NoRegister();
    iVar2 = (int)pUVar9->_padding_;
    if ((((iVar2 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar9->_padding_)) &&
        (((this->COI).field0_0x0.DebugPtr != (UCustomizableObjectInstance *)0x0 &&
         (this->COComponentName != sCOCompilingName)))) &&
       ((this->bUseFirstNameIfMissing != false ||
        (local_res8.ComparisonIndex.Value = 0, local_res8.Number = 0,
        this->COComponentName != (FName)0x0)))) {
      if ((this->LoadingCOIUsage).field0_0x0.DebugPtr == (UCustomizableObjectInstanceUsage *)0x0) {
        UpdateMeshAsyncImpl(this,(FWN_MCS_MeshUpdateParams *)local_58);
      }
      else {
        pTVar10 = ::operator_new(0x30);
        if (pTVar10 != (TNode *)0x0) {
          pTVar10->NextNode = (TNode *)0x0;
          (pTVar10->Item).ID = local_58._0_4_;
          this_00 = &(pTVar10->Item).Callback;
          *(undefined8 *)this_00 = 0;
          *(undefined8 *)&(pTVar10->Item).Callback.field_0x8 = 0;
          *(undefined4 *)&(pTVar10->Item).Callback.field_0x10 = 0;
          TDelegate<void___cdecl(unsigned_int,UWN_MCS_COICore_*,enum_EWN_MCS_MeshUpdateResult),FDefaultDelegateUserPolicy>
          ::CopyFrom<FDefaultDelegateUserPolicy>
                    (this_00,(TDelegate<void___cdecl(unsigned_int,UWN_MCS_COICore_*,EWN_MCS_MeshUpdateResult),FDefaultDelegateUserPolicy>
                              *)local_50);
          (pTVar10->Item).InPolicy = local_38;
          pTVar4 = (this->PendingMeshUpdateParams).Head;
          (this->PendingMeshUpdateParams).Head = pTVar10;
          pTVar4->NextNode = pTVar10;
        }
      }
      goto LAB_14accd9e2;
    }
  }
  if (2 < (byte)MCS._0_1_) {
    local_res8.ComparisonIndex.Value = *(uint *)&this->field_0x18;
    local_res8.Number = *(uint *)&this->field_0x1c;
    ::FName::ToString(&local_res8,(FString *)&local_88);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&MCS);
    if ((UWN_MCS_COICore *)local_88._0_8_ != (UWN_MCS_COICore *)0x0) {
      FMemory::Free((void *)local_88._0_8_);
    }
  }
LAB_14accd9e2:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_50,
             (FWriteAccessScope *)local_70);
  if (((int)local_40 != 0) && (local_48.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_48.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,0x10);
    local_40 = (undefined1 *)((ulonglong)local_40 & 0xffffffff00000000);
  }
  if (local_60._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_70._8_8_,(FDestructionSentinel *)local_70);
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_50);
  return;
}

// OnUnregister @ 14accdaf0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWN_MCS_COICore::OnUnregister(UWN_MCS_COICore *this)

{
  *(undefined8 *)&this->field_0xc0 = 0;
  UActorComponent::OnUnregister((UActorComponent *)this);
  return;
}

// OnUpdateMeshComplete @ 14accdb00

void __thiscall
UWN_MCS_COICore::OnUpdateMeshComplete
          (UWN_MCS_COICore *this,uint param_1,EWN_MCS_MeshUpdateResult param_2)

{
  return;
}

// StaticRegisterNativesUWN_MCS_COICore @ 14accdcd0

void __cdecl UWN_MCS_COICore::StaticRegisterNativesUWN_MCS_COICore(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UWN_MCS_COICore_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateMeshAsync @ 14accdd30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UWN_MCS_COICore::UpdateMeshAsync(UWN_MCS_COICore *this,FWN_MCS_MeshUpdateParams *param_1)

{
  TDelegate<void___cdecl(unsigned_int,UWN_MCS_COICore_*,EWN_MCS_MeshUpdateResult),FDefaultDelegateUserPolicy>
  *this_00;
  int iVar1;
  TNode *pTVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  TNode *pTVar5;
  FName local_res8;
  FString local_18;
  
  if ((((this->field_0x98 & 1) != 0) &&
      ((this->CO).field0_0x0.DebugPtr != (UCustomizableObject *)0x0)) &&
     (pUVar3 = TPersistentObjectPtr<FSoftObjectPath>::Get
                         ((TPersistentObjectPtr<FSoftObjectPath> *)&this->COIObjectPtr),
     pUVar3 != (UObject *)0x0)) {
    pUVar4 = Z_Construct_UClass_UCustomizableObjectInstance_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) &&
        (((this->COI).field0_0x0.DebugPtr != (UCustomizableObjectInstance *)0x0 &&
         (this->COComponentName != sCOCompilingName)))) &&
       ((this->bUseFirstNameIfMissing != false ||
        (local_res8.ComparisonIndex.Value = 0, local_res8.Number = 0,
        this->COComponentName != (FName)0x0)))) {
      if ((this->LoadingCOIUsage).field0_0x0.DebugPtr == (UCustomizableObjectInstanceUsage *)0x0) {
        UpdateMeshAsyncImpl(this,param_1);
        return;
      }
      pTVar5 = ::operator_new(0x30);
      if (pTVar5 == (TNode *)0x0) {
        return;
      }
      pTVar5->NextNode = (TNode *)0x0;
      (pTVar5->Item).ID = param_1->ID;
      this_00 = &(pTVar5->Item).Callback;
      *(undefined8 *)this_00 = 0;
      *(undefined8 *)&(pTVar5->Item).Callback.field_0x8 = 0;
      *(undefined4 *)&(pTVar5->Item).Callback.field_0x10 = 0;
      TDelegate<void___cdecl(unsigned_int,UWN_MCS_COICore_*,enum_EWN_MCS_MeshUpdateResult),FDefaultDelegateUserPolicy>
      ::CopyFrom<FDefaultDelegateUserPolicy>(this_00,&param_1->Callback);
      (pTVar5->Item).InPolicy = param_1->InPolicy;
      pTVar2 = (this->PendingMeshUpdateParams).Head;
      (this->PendingMeshUpdateParams).Head = pTVar5;
      pTVar2->NextNode = pTVar5;
      return;
    }
  }
  if (2 < (byte)MCS._0_1_) {
    local_res8.ComparisonIndex.Value = *(uint *)&this->field_0x18;
    local_res8.Number = *(uint *)&this->field_0x1c;
    ::FName::ToString(&local_res8,&local_18);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&MCS);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// UpdateMeshAsyncImpl @ 14accdec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UWN_MCS_COICore::UpdateMeshAsyncImpl(UWN_MCS_COICore *this,FWN_MCS_MeshUpdateParams *param_1)

{
  EWN_MCS_MeshUpdatePolicy EVar1;
  FName FVar2;
  UCustomizableObjectInstance *this_00;
  FName *pFVar3;
  FName FVar4;
  UClass *pUVar5;
  UPackage *pUVar6;
  UCustomizableObjectInstanceUsage *pUVar7;
  longlong *plVar8;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_118;
  FWeakObjectPtr local_110;
  FName local_108;
  FName local_100;
  undefined1 local_f8 [24];
  FName local_e0;
  UWN_MCS_COICore *local_d8;
  FReadAccessScope local_d0;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  (this->MeshUpdateParams).ID = param_1->ID;
  TDelegate<void___cdecl(unsigned_int,UWN_MCS_COICore_*,enum_EWN_MCS_MeshUpdateResult),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>(&(this->MeshUpdateParams).Callback,&param_1->Callback);
  EVar1 = param_1->InPolicy;
  (this->MeshUpdateParams).InPolicy = EVar1;
  pFVar3 = ::FName::FName(&local_100,"COIUsage");
  FVar2 = *pFVar3;
  FVar4 = (FName)Z_Construct_UClass_UCustomizableObjectInstanceUsage_NoRegister();
  pUVar5 = (UClass *)GetTransientPackage();
  local_128 = 0;
  MakeUniqueObjectName((UObject *)&local_e0,pUVar5,FVar4,FVar2.ComparisonIndex.Value.Value);
  pUVar6 = GetTransientPackage();
  if (local_e0 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar5 = Z_Construct_UClass_UCustomizableObjectInstanceUsage_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar5);
  local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_b8._56_8_ = (UPackage *)0x0;
  local_b8._16_4_ = local_e0.ComparisonIndex.Value;
  local_b8._20_4_ = local_e0.Number;
  local_b8._24_4_ = RF_Transient;
  local_b8._40_8_ = (UObject *)0x0;
  local_b8[0x20] = false;
  local_b8._8_8_ = pUVar6;
  pUVar7 = (UCustomizableObjectInstanceUsage *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar8 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 != (UCustomizableObjectInstanceUsage *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (this->LoadingCOIUsage).field0_0x0.DebugPtr = pUVar7;
  local_118.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_110.ObjectIndex = 0;
  local_110.ObjectSerialNumber = 0;
  local_108.ComparisonIndex.Value = 0;
  local_108.Number = 0;
  ::FName::FName(&local_100,"UpdateMeshCompleteImpl");
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_118,(FWriteAccessScope *)local_f8);
  local_d8 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UWN_MCS_COICore *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_110,(FObjectPtr)&local_d8);
  local_108 = local_100;
  if (local_f8[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_f8._8_8_,(FDestructionSentinel *)local_f8);
  }
  this_00 = (this->COI).field0_0x0.DebugPtr;
  local_f8._0_8_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_118,&local_d0);
  local_f8._8_4_ = local_110.ObjectIndex;
  local_f8._12_4_ = local_110.ObjectSerialNumber;
  local_f8._16_4_ = local_108.ComparisonIndex.Value;
  local_f8._20_4_ = local_108.Number;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_d0);
  UCustomizableObjectInstance::UpdateSkeletalMeshAsyncResult
            (this_00,(FInstanceUpdateDelegate *)local_f8,true,EVar1 == Async_High);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_118.AccessDetector);
  return;
}

// UpdateMeshCompleteImpl @ 14acce0e0

void __thiscall
UWN_MCS_COICore::UpdateMeshCompleteImpl(UWN_MCS_COICore *this,FUpdateContext *param_1)

{
  undefined1 *puVar1;
  UCustomizableObjectInstanceUsage *pUVar2;
  longlong lVar3;
  longlong *plVar4;
  TNode *pTVar5;
  TNode *pTVar6;
  void *pvVar7;
  code *pcVar8;
  byte bVar9;
  byte bVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  char cVar14;
  FName FVar15;
  ForAnyElementType FVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  undefined1 local_res8;
  bool local_res10;
  FName local_108;
  TArray<FName,TSizedDefaultAllocator<32>_> local_100;
  undefined8 local_f0;
  undefined1 auStack_e8 [8];
  ForAnyElementType local_e0;
  ulonglong uStack_d8;
  undefined8 local_d0;
  undefined1 local_c8 [8];
  undefined1 local_c0 [8];
  ForAnyElementType FStack_b8;
  int local_b0;
  EWN_MCS_MeshUpdatePolicy local_a8;
  FDestructionSentinel local_a0;
  FDestructionSentinel local_88;
  FDestructionSentinel local_70;
  FReadAccessScope local_58;
  
  switch(param_1->UpdateResult) {
  case Success:
    local_res8 = 0;
    bVar9 = 1;
    goto LAB_14acce149;
  case Warning:
    local_res8 = 1;
    bVar9 = 1;
    goto LAB_14acce149;
  default:
    local_res8 = 2;
    break;
  case ErrorOptimized:
    local_res8 = 3;
    break;
  case ErrorReplaced:
    local_res8 = 4;
    break;
  case ErrorDiscarded:
    local_res8 = 5;
    break;
  case Error16BitBoneIndex:
    local_res8 = 6;
  }
  bVar9 = 0;
LAB_14acce149:
  if ((((((this->field_0x98 & 1) == 0) ||
        ((this->COI).field0_0x0.DebugPtr == (UCustomizableObjectInstance *)0x0)) ||
       ((this->LoadingCOIUsage).field0_0x0.DebugPtr == (UCustomizableObjectInstanceUsage *)0x0)) ||
      (this->COComponentName == sCOCompilingName)) ||
     ((this->bUseFirstNameIfMissing == false && (this->COComponentName == (FName)0x0)))) {
    bVar10 = 0;
  }
  else {
    bVar10 = 1;
  }
  if ((bool)(bVar10 & bVar9)) {
    if ((UE::GC::GIsIncrementalReachabilityPending) &&
       (pUVar2 = (this->LoadingCOIUsage).field0_0x0.DebugPtr,
       pUVar2 != (UCustomizableObjectInstanceUsage *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    pUVar2 = (this->LoadingCOIUsage).field0_0x0.DebugPtr;
    (this->COIUsage).field0_0x0.DebugPtr = pUVar2;
    UCustomizableObjectInstanceUsage::SetSkipSetReferenceSkeletalMesh(pUVar2,true);
    UCustomizableObjectInstanceUsage::SetCustomizableObjectInstance
              ((this->COIUsage).field0_0x0.DebugPtr,(this->COI).field0_0x0.DebugPtr);
    uVar18 = 0;
    if (this->bUseFirstNameIfMissing == true) {
      GetCOComponentNames(this,&local_100);
      iVar11 = local_100.ArrayNum;
      local_108.ComparisonIndex.Value = 0;
      local_108.Number = 0;
      if (((local_100.AllocatorInstance.Data <= &local_108) &&
          (&local_108 <
           (FName *)(local_100.AllocatorInstance.Data + (longlong)local_100.ArrayMax * 8))) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar23 = 0;
      if (iVar11 != 0) {
        local_res10 = *(FName *)local_100.AllocatorInstance.Data != local_108;
        FVar15 = local_108;
        uVar20 = uVar18;
        uVar24 = uVar18;
        do {
          uVar17 = (uint)uVar20;
          uVar19 = uVar17;
          do {
            uVar18 = uVar18 + 1;
            uVar19 = uVar19 + 1;
            uVar20 = (ulonglong)uVar19;
            if ((longlong)iVar11 <= (longlong)uVar18) break;
          } while (local_res10 ==
                   (*(FName *)(local_100.AllocatorInstance.Data + uVar18 * 8) != FVar15));
          if (local_res10 != false) {
            uVar22 = (uint)uVar24;
            if (uVar22 != uVar17) {
              memmove(local_100.AllocatorInstance.Data + (longlong)(int)uVar22 * 8,
                      local_100.AllocatorInstance.Data + (longlong)(int)uVar17 * 8,
                      (longlong)(int)(uVar19 - uVar17) << 3);
              FVar15 = local_108;
            }
            uVar24 = (ulonglong)(uVar22 + (uVar19 - uVar17));
          }
          iVar23 = (int)uVar24;
          local_res10 = (bool)(local_res10 ^ 1);
          local_100.ArrayNum = iVar23;
        } while ((longlong)uVar18 < (longlong)iVar11);
      }
      if ((FName *)local_100.AllocatorInstance.Data !=
          (FName *)(local_100.AllocatorInstance.Data + (longlong)iVar23 * 8)) {
        FVar16.Data = local_100.AllocatorInstance.Data;
        do {
          if (*(FName *)FVar16.Data == this->COComponentName) goto LAB_14acce397;
          FVar16.Data = FVar16.Data + 8;
        } while ((FName *)FVar16.Data !=
                 (FName *)(local_100.AllocatorInstance.Data + (longlong)iVar23 * 8));
      }
      if (iVar23 != 0) {
        if ((iVar23 < 1) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        this->COComponentName = *(FName *)local_100.AllocatorInstance.Data;
      }
LAB_14acce397:
      if ((FName *)local_100.AllocatorInstance.Data != (FName *)0x0) {
        FMemory::Free(local_100.AllocatorInstance.Data);
      }
    }
    UCustomizableObjectInstanceUsage::SetComponentName
              ((this->COIUsage).field0_0x0.DebugPtr,&this->COComponentName);
    (this->LoadingCOIUsage).field0_0x0.DebugPtr = (UCustomizableObjectInstanceUsage *)0x0;
    if (this->bAutoApplyMeshToSKMComp != false) {
      ApplyMeshToSkeletalMeshComponent(this);
    }
  }
  else {
    (this->LoadingCOIUsage).field0_0x0.DebugPtr = (UCustomizableObjectInstanceUsage *)0x0;
  }
  (**(code **)(*(longlong *)this + 0x640))(this,(this->MeshUpdateParams).ID);
  uVar19 = (this->MeshUpdateParams).ID;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->MeshUpdateCompletionCallbacks,(FWriteAccessScope *)&local_a0);
  puVar1 = &(this->MeshUpdateCompletionCallbacks).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar12 = false;
  uVar17 = *(int *)&(this->MeshUpdateCompletionCallbacks).field_0x10 - 1;
  if (-1 < (int)uVar17) {
    lVar21 = (longlong)(int)uVar17 << 4;
    bVar12 = false;
    do {
      uVar22 = 0;
      if ((int)uVar17 < *(int *)&(this->MeshUpdateCompletionCallbacks).field_0x10) {
        uVar22 = ~uVar17 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar3 = *(longlong *)&(this->MeshUpdateCompletionCallbacks).field_0x8;
      if (((*(int *)(lVar3 + 8 + lVar21) == 0) ||
          (plVar4 = *(longlong **)(lVar3 + lVar21), plVar4 == (longlong *)0x0)) ||
         (cVar14 = (**(code **)(*plVar4 + 0x68))(plVar4,uVar19,this,local_res8), cVar14 == '\0')) {
        bVar12 = true;
      }
      lVar21 = lVar21 + -0x10;
      uVar17 = uVar17 - 1;
    } while (-1 < (int)uVar17);
  }
  puVar1 = &(this->MeshUpdateCompletionCallbacks).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar12) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->MeshUpdateCompletionCallbacks,false);
  }
  if (local_a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
  }
  uVar19 = (this->MeshUpdateParams).ID;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->MeshUpdateParams).Callback,&local_58);
  if ((*(int *)&(this->MeshUpdateParams).Callback.field_0x10 != 0) &&
     (plVar4 = *(longlong **)&(this->MeshUpdateParams).Callback.field_0x8, plVar4 != (longlong *)0x0
     )) {
    (**(code **)(*plVar4 + 0x68))(plVar4,uVar19,this,local_res8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MeshUpdateParams).Callback);
  if ((bool)(bVar10 & bVar9)) {
    local_c8._0_4_ = 0xffffffff;
    local_c0 = (undefined1  [8])0x0;
    FStack_b8.Data = (FScriptContainerElement *)0x0;
    local_b0 = 0;
    local_a8 = Async_Med;
    pTVar5 = ((this->PendingMeshUpdateParams).Tail)->NextNode;
    if (pTVar5 != (TNode *)0x0) {
      local_c8._0_4_ = (pTVar5->Item).ID;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c0,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)&(pTVar5->Item).Callback);
      local_a8 = (pTVar5->Item).InPolicy;
      pTVar6 = (this->PendingMeshUpdateParams).Tail;
      (this->PendingMeshUpdateParams).Tail = pTVar5;
      local_d0 = 1;
      local_f0 = 0xffffffff;
      auStack_e8 = (undefined1  [8])0x0;
      local_e0.Data = (FScriptContainerElement *)0x0;
      uStack_d8 = 0;
      (pTVar5->Item).ID = 0xffffffff;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pTVar5->Item).Callback,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_e8);
      (pTVar5->Item).InPolicy = (EWN_MCS_MeshUpdatePolicy)local_d0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_e8,
                 (FWriteAccessScope *)&local_88);
      if (((int)uStack_d8 != 0) && (local_e0.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_e0.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_e0,0,0,0x10);
        uStack_d8 = uStack_d8 & 0xffffffff00000000;
      }
      if (local_88.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
      }
      if (local_e0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_e8);
      if (pTVar6 != (TNode *)0x0) {
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pTVar6->Item).Callback);
        pvVar7 = *(void **)&(pTVar6->Item).Callback.field_0x8;
        if (pvVar7 != (void *)0x0) {
          FMemory::Free(pvVar7);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)&(pTVar6->Item).Callback);
        ::operator_delete(pTVar6,0x30);
      }
      UpdateMeshAsyncImpl(this,(FWN_MCS_MeshUpdateParams *)local_c8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c0,
               (FWriteAccessScope *)&local_70);
    if ((local_b0 != 0) && (FStack_b8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_b8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_b8,0,0,0x10);
      local_b0 = 0;
    }
    if (local_70.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
    }
    if (FStack_b8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_b8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_c0);
  }
  else {
    TQueue<FWN_MCS_MeshUpdateParams,1>::Empty(&this->PendingMeshUpdateParams);
  }
  return;
}

// execGetCOComponentNames @ 14acce840

void __cdecl
UWN_MCS_COICore::execGetCOComponentNames(UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar1 = GetCOComponentNames((UWN_MCS_COICore *)param_1,&local_18);
  if (param_3 != pTVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar1->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar1->ArrayMax;
    pTVar1->ArrayNum = 0;
    pTVar1->ArrayMax = 0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execUpdateMeshCompleteImpl @ 14acce8c0

void __cdecl
UWN_MCS_COICore::execUpdateMeshCompleteImpl(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FUpdateContext *pFVar2;
  FUpdateContext local_18;
  
  local_18.UpdateResult = Success;
  local_18.Instance.field0_0x0.DebugPtr = (TObjectPtr<UCustomizableObjectInstance>_u_0)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar2 = &local_18;
  if ((FUpdateContext *)param_2->MostRecentPropertyAddress != (FUpdateContext *)0x0) {
    pFVar2 = (FUpdateContext *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UpdateMeshCompleteImpl((UWN_MCS_COICore *)param_1,pFVar2);
  return;
}

