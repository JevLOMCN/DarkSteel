// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkComponents
// Functions: 26

// StaticClass @ 14d08ffd0

UClass * __cdecl ULiveLinkComponentController::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkComponentController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkComponents",L"LiveLinkComponentController",
               &Z_Registration_Info_UClass_ULiveLinkComponentController.InnerSingleton,
               StaticRegisterNativesULiveLinkComponentController,0x180,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkComponentController>,
               InternalVTableHelperCtorCaller<ULiveLinkComponentController>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkComponentController.InnerSingleton;
}

// ULiveLinkComponentController @ 14d091ac0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULiveLinkComponentController * __thiscall
ULiveLinkComponentController::ULiveLinkComponentController
          (ULiveLinkComponentController *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->SubjectRepresentation).Subject.Name = (FName)0x0;
  (this->SubjectRepresentation).Role.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  *(undefined8 *)&this->ControllerMap = 0;
  *(undefined8 *)&(this->ControllerMap).field_0x8 = 0;
  *(undefined8 *)&(this->ControllerMap).field_0x20 = 0;
  *(undefined4 *)&(this->ControllerMap).field_0x28 = 0;
  *(undefined4 *)&(this->ControllerMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ControllerMap).field_0x34 = 0;
  *(undefined4 *)&(this->ControllerMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ControllerMap).field_0x40 = 0;
  *(undefined4 *)&(this->ControllerMap).field_0x48 = 0;
  *(undefined8 *)&this->OnLiveLinkUpdated = 0;
  *(undefined8 *)&(this->OnLiveLinkUpdated).field_0x8 = 0;
  *(undefined8 *)&(this->OnLiveLinkUpdated).field_0x10 = 0;
  *(undefined8 *)&this->OnControllerMapUpdatedDelegate = 0;
  *(undefined8 *)&(this->OnControllerMapUpdatedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnControllerMapUpdatedDelegate).field_0x10 = 0;
  this->bUpdateInPreviewEditor = false;
  (this->bIsSpawnableCache).bIsSet = false;
  *(undefined8 *)&this->LiveLinkControllersTickedDelegate = 0;
  *(undefined8 *)&(this->LiveLinkControllersTickedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->LiveLinkControllersTickedDelegate).field_0x10 = 0;
  this->bDisableEvaluateLiveLinkWhenSpawnable = true;
  this->bEvaluateLiveLink = true;
  *(undefined8 *)&(this->LiveLinkControllersTickedDelegate).field_0x18 = 2;
  return this;
}

// ULiveLinkComponentController @ 14d091bb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULiveLinkComponentController * __thiscall
ULiveLinkComponentController::ULiveLinkComponentController(ULiveLinkComponentController *this)

{
  byte *pbVar1;
  FObjectInitializer *pFVar2;
  
  pFVar2 = FObjectInitializer::Get();
  UActorComponent::UActorComponent((UActorComponent *)this,pFVar2);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->SubjectRepresentation).Subject.Name = (FName)0x0;
  (this->SubjectRepresentation).Role.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  *(undefined8 *)&this->ControllerMap = 0;
  *(undefined8 *)&(this->ControllerMap).field_0x8 = 0;
  *(undefined8 *)&(this->ControllerMap).field_0x20 = 0;
  *(undefined4 *)&(this->ControllerMap).field_0x28 = 0;
  *(undefined4 *)&(this->ControllerMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ControllerMap).field_0x34 = 0;
  *(undefined4 *)&(this->ControllerMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ControllerMap).field_0x40 = 0;
  *(undefined4 *)&(this->ControllerMap).field_0x48 = 0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 6;
  *(undefined8 *)&this->OnLiveLinkUpdated = 0;
  *(undefined8 *)&(this->OnLiveLinkUpdated).field_0x8 = 0;
  *(undefined8 *)&(this->OnLiveLinkUpdated).field_0x10 = 0;
  *(undefined8 *)&this->OnControllerMapUpdatedDelegate = 0;
  *(undefined8 *)&(this->OnControllerMapUpdatedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnControllerMapUpdatedDelegate).field_0x10 = 0;
  (this->bIsSpawnableCache).bIsSet = false;
  *(undefined8 *)&this->LiveLinkControllersTickedDelegate = 0;
  *(undefined8 *)&(this->LiveLinkControllersTickedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->LiveLinkControllersTickedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->LiveLinkControllersTickedDelegate).field_0x18 = 2;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 | 0x80;
  *(undefined1 *)&this->_padding_ = 0;
  this->bUpdateInEditor = true;
  this->bDisableEvaluateLiveLinkWhenSpawnable = true;
  this->bEvaluateLiveLink = true;
  this->bUpdateInPreviewEditor = false;
  this->bIsDirty = false;
  return this;
}

// ~ULiveLinkComponentController @ 14d092300

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
ULiveLinkComponentController::~ULiveLinkComponentController(ULiveLinkComponentController *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->LiveLinkControllersTickedDelegate).field_0x8,
             *(int *)&(this->LiveLinkControllersTickedDelegate).field_0x10);
  pvVar1 = *(void **)&(this->LiveLinkControllersTickedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->LiveLinkControllersTickedDelegate);
  pvVar1 = *(void **)&(this->OnControllerMapUpdatedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnControllerMapUpdatedDelegate);
  pvVar1 = *(void **)&(this->OnLiveLinkUpdated).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLiveLinkUpdated);
  *(undefined4 *)&(this->ControllerMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ControllerMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ControllerMap);
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// CleanupControllersInMap @ 14d092ae0

void __thiscall
ULiveLinkComponentController::CleanupControllersInMap(ULiveLinkComponentController *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar12 = 0;
  puVar1 = &(this->ControllerMap).field_0x10;
  iVar3 = *(int *)&(this->ControllerMap).field_0x28;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->ControllerMap).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14d092b8d;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar8 = local_res10 + -1 + iVar14;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14d092b8d:
  uVar11 = *(uint *)&(this->ControllerMap).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar7,iVar12);
  TStack_50.CurrentBitIndex = iVar8;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_50._28_4_ = iVar8;
  TStack_50.BaseBitIndex = iVar14;
  uStack_30 = CONCAT44(uStack_5c,
                       *(int *)&(this->ControllerMap).field_0x8 -
                       *(int *)&(this->ControllerMap).field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->ControllerMap).field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&(this->ControllerMap).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14d092c90;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_14d092c90:
  while( true ) {
    if (*(int *)&(this->ControllerMap).field_0x8 - *(int *)&(this->ControllerMap).field_0x34 !=
        (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TTuple<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar11) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    plVar4 = *(longlong **)
              (*(longlong *)&this->ControllerMap + 8 + (longlong)TStack_50.CurrentBitIndex * 0x18);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x2e8))();
    }
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return;
}

// DestroyComponent @ 14d092d10

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
ULiveLinkComponentController::DestroyComponent(ULiveLinkComponentController *this,bool param_1)

{
  CleanupControllersInMap(this);
  UActorComponent::DestroyComponent((UActorComponent *)this,param_1);
  return;
}

// GetControlledComponent @ 14d0931a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UActorComponent * __thiscall
ULiveLinkComponentController::GetControlledComponent
          (ULiveLinkComponentController *this,TSubclassOf<ULiveLinkRole> param_1)

{
  UObject *pUVar1;
  TObjectPtr<ULiveLinkControllerBase> this_00;
  TObjectPtr<ULiveLinkControllerBase>_u_0 *pTVar2;
  AActor *pAVar3;
  UActorComponent *pUVar4;
  UObject *local_res8;
  
  pUVar1 = *(UObject **)param_1.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  pTVar2 = &TMapBase<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>_>
            ::Find((TMapBase<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>_>
                    *)&this->ControllerMap,(TSubclassOf<ULiveLinkRole_const_>)&local_res8)->
            field0_0x0;
  if ((pTVar2 != (TObjectPtr<ULiveLinkControllerBase>_u_0 *)0x0) &&
     (this_00.field0_0x0 = (TObjectPtr<ULiveLinkControllerBase>_u_0)pTVar2->DebugPtr,
     this_00.field0_0x0 != (ULiveLinkControllerBase *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00.field0_0x0);
    }
    pAVar3 = ULiveLinkControllerBase::GetOuterActor((ULiveLinkControllerBase *)this_00.field0_0x0);
    pUVar4 = FComponentReference::GetComponent
                       ((FComponentReference *)((longlong)this_00.field0_0x0 + 0x28),pAVar3);
    return pUVar4;
  }
  return (UActorComponent *)0x0;
}

// GetControllerClassForRoleClass @ 14d093250

TSubclassOf<ULiveLinkControllerBase> __thiscall
ULiveLinkComponentController::GetControllerClassForRoleClass
          (ULiveLinkComponentController *this,TSubclassOf<ULiveLinkRole> param_1)

{
  int iVar1;
  UObject *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  TSubclassOf<ULiveLinkControllerBase> *pTVar5;
  UClass *pUVar6;
  TSubclassOf<ULiveLinkRole> *in_R8;
  UClass *local_res10;
  TArray<TSubclassOf<ULiveLinkControllerBase>,TSizedDefaultAllocator<32>_> local_18;
  
  *(undefined8 *)param_1.Class.field0_0x0 = 0;
  pUVar4 = ULiveLinkComponentSettings::StaticClass();
  if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar4);
  }
  pUVar2 = (pUVar4->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar4 = (in_R8->Class).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  local_res10 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  pTVar5 = TMapBase<TSubclassOf<ULiveLinkRole>,TSubclassOf<ULiveLinkControllerBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TSubclassOf<ULiveLinkControllerBase>,0>_>
           ::Find((TMapBase<TSubclassOf<ULiveLinkRole>,TSubclassOf<ULiveLinkControllerBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TSubclassOf<ULiveLinkControllerBase>,0>_>
                   *)(pUVar2 + 1),(TSubclassOf<ULiveLinkRole_const_>)&local_res10);
  if (((pTVar5 != (TSubclassOf<ULiveLinkControllerBase> *)0x0) &&
      (pUVar4 = (pTVar5->Class).field0_0x0.DebugPtr, pUVar4 != (UClass *)0x0)) &&
     (pUVar6 = ULiveLinkControllerBase::StaticClass(), pUVar6 != (UClass *)0x0)) {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar4->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (pUVar4 = (pTVar5->Class).field0_0x0.DebugPtr, pUVar4 != (UClass *)0x0)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      *(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0 = (pTVar5->Class).field0_0x0;
      return (TObjectPtr<UClass>)param_1.Class.field0_0x0;
    }
  }
  ULiveLinkControllerBase::GetControllersForRole(&local_18,in_R8);
  if (0 < local_18.ArrayNum) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)local_18.AllocatorInstance.Data != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(*(UObject **)local_18.AllocatorInstance.Data);
    }
    *(undefined8 *)param_1.Class.field0_0x0 = *(undefined8 *)local_18.AllocatorInstance.Data;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return (TObjectPtr<UClass>)param_1.Class.field0_0x0;
}

// GetPrivateStaticClass @ 14d0939d0

UClass * __cdecl ULiveLinkComponentController::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkComponentController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkComponents",L"LiveLinkComponentController",
               &Z_Registration_Info_UClass_ULiveLinkComponentController.InnerSingleton,
               StaticRegisterNativesULiveLinkComponentController,0x180,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkComponentController>,
               InternalVTableHelperCtorCaller<ULiveLinkComponentController>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkComponentController.InnerSingleton;
}

// GetSelectedRoleHierarchyClasses @ 14d093d70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TArray<TSubclassOf<ULiveLinkRole>,TSizedDefaultAllocator<32>_> * __thiscall
ULiveLinkComponentController::GetSelectedRoleHierarchyClasses
          (ULiveLinkComponentController *this,
          TArray<TSubclassOf<ULiveLinkRole>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TSubclassOf<ULiveLinkRole> param_1)

{
  int iVar1;
  TObjectPtr<UClass>_u_0 *pTVar2;
  code *pcVar3;
  bool bVar4;
  EInternalObjectFlags EVar5;
  uint uVar6;
  int iVar7;
  UClass *pUVar8;
  TArray<TSubclassOf<ULiveLinkRole>,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  TObjectPtr<UClass>_u_0 local_38;
  TObjectIterator<UClass> local_30;
  
  lVar13 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  lVar10 = *(longlong *)param_1.Class.field0_0x0;
  if ((lVar10 != 0) &&
     (pUVar8 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar8 != (UClass *)0x0)) {
    iVar7 = (int)pUVar8->_padding_;
    if ((*(int *)(lVar10 + 0x38) < iVar7) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar7 * 8) !=
        &pUVar8->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && (*(longlong *)param_1.Class.field0_0x0 != 0)) {
      local_30.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_30.ObjectArray.ArrayNum = 0;
      local_30.ObjectArray.ArrayMax = 0;
      local_30.Index = 0xffffffff;
      EVar5 = UE::GetAsyncLoadingInternalFlagsExclusion();
      pUVar8 = Z_Construct_UClass_UClass_NoRegister();
      GetObjectsOfClass(pUVar8,&local_30.ObjectArray,true,RF_ClassDefaultObject,
                        EVar5 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
      TObjectIterator<UClass>::Advance(&local_30);
      while ((lVar10 = (longlong)local_30.Index, -1 < local_30.Index &&
             (local_30.Index < local_30.ObjectArray.ArrayNum))) {
        uVar12 = 0;
        uVar6 = uVar12;
        if (local_30.Index < local_30.ObjectArray.ArrayNum) {
          uVar6 = (uint)~local_30.Index >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pTVar9 = (TArray<TSubclassOf<ULiveLinkRole>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar9;
          }
        }
        if ((*(uint *)(*(longlong *)(local_30.ObjectArray.AllocatorInstance.Data + lVar10 * 8) +
                      0xd4) & 0x2000001) == 0) {
          lVar10 = *(longlong *)param_1.Class.field0_0x0;
          lVar11 = lVar13;
          iVar7 = local_30.ObjectArray.ArrayNum;
          if (lVar10 != 0) {
            pUVar8 = Z_Construct_UClass_ULiveLinkRole_NoRegister();
            iVar7 = local_30.ObjectArray.ArrayNum;
            if (pUVar8 != (UClass *)0x0) {
              iVar1 = (int)pUVar8->_padding_;
              if ((*(int *)(lVar10 + 0x38) < iVar1) ||
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar1 * 8)
                  != &pUVar8->_padding_)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              if (bVar4) {
                lVar11 = *(longlong *)param_1.Class.field0_0x0;
              }
            }
          }
          lVar10 = (longlong)local_30.Index;
          uVar6 = uVar12;
          if (local_30.Index < iVar7) {
            uVar6 = (uint)~local_30.Index >> 0x1f;
          }
          if (uVar6 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pTVar9 = (TArray<TSubclassOf<ULiveLinkRole>,TSizedDefaultAllocator<32>_> *)(*pcVar3)()
              ;
              return pTVar9;
            }
            iVar7 = local_30.ObjectArray.ArrayNum;
          }
          lVar10 = *(longlong *)(local_30.ObjectArray.AllocatorInstance.Data + lVar10 * 8);
          if (lVar10 != 0) {
            if ((*(int *)(lVar11 + 0x38) < *(int *)(lVar10 + 0x38)) ||
               (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8)
                != lVar10 + 0x30)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) {
              lVar10 = (longlong)local_30.Index;
              if (local_30.Index < iVar7) {
                uVar12 = (uint)~local_30.Index >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pTVar9 = (TArray<TSubclassOf<ULiveLinkRole>,TSizedDefaultAllocator<32>_> *)
                         (*pcVar3)();
                return pTVar9;
              }
              local_38 = (TObjectPtr<UClass>_u_0)
                         ((TObjectPtr<UClass>_u_0 *)
                         (local_30.ObjectArray.AllocatorInstance.Data + lVar10 * 8))->DebugPtr;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (local_38.DebugPtr != (UClass *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)local_38.DebugPtr);
              }
              iVar7 = TArray<TSubclassOf<ULiveLinkRole>,TSizedDefaultAllocator<32>_>::Find
                                (__return_storage_ptr__,
                                 (TSubclassOf<ULiveLinkRole> *)&local_38.ObjectPtr);
              if (iVar7 == -1) {
                pTVar2 = (TObjectPtr<UClass>_u_0 *)(__return_storage_ptr__->AllocatorInstance).Data;
                if (((pTVar2 <= &local_38) &&
                    (&local_38 < pTVar2 + __return_storage_ptr__->ArrayMax)) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  pTVar9 = (TArray<TSubclassOf<ULiveLinkRole>,TSizedDefaultAllocator<32>_> *)
                           (*pcVar3)();
                  return pTVar9;
                }
                iVar7 = __return_storage_ptr__->ArrayNum;
                if (iVar7 == __return_storage_ptr__->ArrayMax) {
                  iVar7 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x808,&__return_storage_ptr__->AllocatorInstance,
                                     &__return_storage_ptr__->ArrayMax);
                }
                __return_storage_ptr__->ArrayNum = iVar7 + 1;
                ((TObjectPtr<UClass>_u_0 *)
                ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8))->DebugPtr
                     = (UClass *)local_38;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (local_38.DebugPtr != (UClass *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)local_38.DebugPtr);
                }
              }
            }
          }
        }
        TObjectIterator<UClass>::Advance(&local_30);
      }
      if (local_30.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.ObjectArray.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// InitializeController @ 14d094130

void __thiscall
ULiveLinkComponentController::InitializeController
          (ULiveLinkComponentController *this,ULiveLinkControllerBase *param_1)

{
  return;
}

// IsControllerMapOutdated @ 14d094190

bool __thiscall
ULiveLinkComponentController::IsControllerMapOutdated(ULiveLinkComponentController *this)

{
  TObjectPtr<UClass>_u_0 *pTVar1;
  TObjectPtr<UClass>_u_0 TVar2;
  TObjectPtr<ULiveLinkControllerBase> *pTVar3;
  int iVar4;
  bool bVar5;
  ForAnyElementType FVar6;
  TObjectPtr<UClass>_u_0 local_res8;
  TArray<TSubclassOf<ULiveLinkRole>,TSizedDefaultAllocator<32>_> local_28;
  
  local_res8 = (TObjectPtr<UClass>_u_0)(this->SubjectRepresentation).Role.Class.field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
  }
  GetSelectedRoleHierarchyClasses(this,&local_28,(TSubclassOf<ULiveLinkRole>)&local_res8);
  iVar4 = local_28.ArrayNum;
  if (*(int *)&(this->ControllerMap).field_0x8 - *(int *)&(this->ControllerMap).field_0x34 == iVar4)
  {
    pTVar1 = (TObjectPtr<UClass>_u_0 *)(local_28.AllocatorInstance.Data + (longlong)iVar4 * 8);
    FVar6.Data = local_28.AllocatorInstance.Data;
    while( true ) {
      if (local_28.ArrayNum != iVar4) {
        `TCheckedPointerIterator<TSubclassOf<ULiveLinkRole>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if ((TObjectPtr<UClass>_u_0 *)FVar6.Data == pTVar1) {
        bVar5 = false;
        goto LAB_14d09427a;
      }
      TVar2 = (TObjectPtr<UClass>_u_0)*(TObjectPtr<UClass>_u_0 *)FVar6.Data;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar2.DebugPtr != (UClass *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
      }
      local_res8 = TVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar2.DebugPtr != (UClass *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
      }
      pTVar3 = TMapBase<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>_>
               ::Find((TMapBase<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>_>
                       *)&this->ControllerMap,(TSubclassOf<ULiveLinkRole_const_>)&local_res8);
      if (pTVar3 == (TObjectPtr<ULiveLinkControllerBase> *)0x0) break;
      FVar6.Data = FVar6.Data + 8;
    }
  }
  bVar5 = true;
LAB_14d09427a:
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return bVar5;
}

// OnRegister @ 14d094530

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULiveLinkComponentController::OnRegister(ULiveLinkComponentController *this)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  FName *pFVar8;
  FModuleManager *this_00;
  IModuleInterface *pIVar9;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *pTVar10;
  uint uVar11;
  longlong lVar12;
  FName local_res8;
  FName local_res10;
  FString local_58;
  FDestructionSentinel local_48;
  
  UActorComponent::OnRegister((UActorComponent *)this);
  this->bIsDirty = true;
  pFVar8 = ::FName::FName(&local_res10,L"LiveLinkComponents");
  local_res8 = *pFVar8;
  this_00 = FModuleManager::Get();
  bVar4 = FModuleManager::IsModuleLoaded(this_00,local_res8);
  if (!bVar4) {
    ::FName::ToString(&local_res8,&local_58);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ModuleManager.IsModuleLoaded(ModuleName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Modules\\ModuleManager.h"
                       ,0x15a,L"Tried to get module interface for unloaded module: \'%s\'");
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pIVar9 = FModuleManager::GetModule(this_00,local_res8);
  pTVar10 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
            (**(code **)((longlong)*pIVar9 + 0x40))(pIVar9);
  bVar4 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound(pTVar10);
  if (bVar4) {
    pTVar10 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
              (**(code **)((longlong)*pIVar9 + 0x40))(pIVar9);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar10,
               (FWriteAccessScope *)&local_48);
    pTVar10->InvocationListLockCount = pTVar10->InvocationListLockCount + 1;
    bVar4 = false;
    uVar11 = (pTVar10->InvocationList).ArrayNum - 1;
    if (-1 < (int)uVar11) {
      lVar12 = (longlong)(int)uVar11 << 4;
      bVar4 = false;
      do {
        uVar7 = 0;
        if ((int)uVar11 < (pTVar10->InvocationList).ArrayNum) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar1 = (pTVar10->InvocationList).AllocatorInstance.Data;
        if (((*(int *)(pFVar1 + lVar12 + 8) == 0) ||
            (plVar2 = *(longlong **)(pFVar1 + lVar12), plVar2 == (longlong *)0x0)) ||
           (cVar6 = (**(code **)(*plVar2 + 0x68))(), cVar6 == '\0')) {
          bVar4 = true;
        }
        lVar12 = lVar12 + -0x10;
        uVar11 = uVar11 - 1;
      } while (-1 < (int)uVar11);
    }
    pTVar10->InvocationListLockCount = pTVar10->InvocationListLockCount + -1;
    if (bVar4) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(pTVar10,false);
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
  }
  return;
}

// OnSubjectRoleChanged @ 14d094720

void __thiscall
ULiveLinkComponentController::OnSubjectRoleChanged(ULiveLinkComponentController *this)

{
  undefined1 *puVar1;
  TMap<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>_>
  *this_00;
  int iVar2;
  int iVar3;
  UObject *pUVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined8 uVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  TSubclassOf<ULiveLinkControllerBase> *pTVar10;
  uint uVar11;
  ForAnyElementType FVar12;
  TObjectPtr<UClass>_u_0 TVar13;
  TObjectPtr<UClass>_u_0 local_res8;
  TObjectPtr<UClass>_u_0 local_res10;
  TObjectPtr<UClass>_u_0 local_res18;
  FScriptContainerElement *local_res20;
  TArray<TSubclassOf<ULiveLinkRole>,TSizedDefaultAllocator<32>_> local_78;
  FReadAccessScope local_68;
  
  CleanupControllersInMap(this);
  pUVar9 = (this->SubjectRepresentation).Role.Class.field0_0x0.DebugPtr;
  if ((pUVar9 != (UClass *)0x0) &&
     (pUVar8 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar8 != (UClass *)0x0)) {
    iVar3 = (int)pUVar8->_padding_;
    if (((int)pUVar9->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar3 * 8) != &pUVar8->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((bVar5) &&
       (TVar13 = (TObjectPtr<UClass>_u_0)
                 (this->SubjectRepresentation).Role.Class.field0_0x0.DebugPtr,
       TVar13.DebugPtr != (UClass *)0x0)) {
      local_res8 = TVar13;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)TVar13.DebugPtr);
      }
      GetSelectedRoleHierarchyClasses(this,&local_78,(TSubclassOf<ULiveLinkRole>)&local_res8);
      TSet<TTuple<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>,FDefaultSetAllocator>
      ::Empty((TSet<TTuple<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>,FDefaultSetAllocator>
               *)&this->ControllerMap,local_78.ArrayNum);
      iVar3 = local_78.ArrayNum;
      local_res20 = local_78.AllocatorInstance.Data + (longlong)local_78.ArrayNum * 8;
      FVar12.Data = local_78.AllocatorInstance.Data;
      while( true ) {
        pFVar6 = local_res20;
        if (local_78.ArrayNum != iVar3) {
          `TCheckedPointerIterator<TSubclassOf<ULiveLinkRole>,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(&local_res8);
        }
        if (FVar12.Data == pFVar6) break;
        TVar13.DebugPtr = *(UClass **)FVar12.Data;
        if ((TVar13 != (TObjectPtr<UClass>_u_0)0x0) &&
           (pUVar9 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar9 != (UClass *)0x0)) {
          iVar2 = (int)pUVar9->_padding_;
          if (((int)(TVar13.DebugPtr)->_padding_ < iVar2) ||
             ((longlong *)*(undefined1 **)((TVar13.DebugPtr)->_padding_ + (longlong)iVar2 * 8) !=
              &pUVar9->_padding_)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if ((bVar5) &&
             (TVar13.DebugPtr = *(UClass **)FVar12.Data, TVar13 != (TObjectPtr<UClass>_u_0)0x0)) {
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)TVar13.DebugPtr);
            }
            uVar11 = ((uint)((ulonglong)TVar13.DebugPtr >> 0x14) & 0xffff ^
                     (uint)((ulonglong)TVar13.DebugPtr >> 4)) * -0x7a143595;
            uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
            TMapBase<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>_>
            ::FindOrAddImpl<TSubclassOf<ULiveLinkRole>_const_&>
                      ((TMapBase<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>_>
                        *)&this->ControllerMap,uVar11 >> 0x10 ^ uVar11,
                       (TSubclassOf<ULiveLinkRole> *)FVar12.Data);
            local_res8.DebugPtr = *(UClass **)FVar12.Data;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_res8 != (TObjectPtr<UClass>_u_0)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
            }
            pUVar9 = ULiveLinkComponentSettings::StaticClass();
            if ((pUVar9->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
              UClass::InternalCreateDefaultObjectWrapper(pUVar9);
            }
            TVar13 = local_res8;
            pUVar4 = (pUVar9->ClassDefaultObject).field0_0x0.DebugPtr;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_res8.DebugPtr != (UClass *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
            }
            local_res10.DebugPtr = TVar13.DebugPtr;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (TVar13.DebugPtr != (UClass *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)TVar13.DebugPtr);
            }
            pTVar10 = TMapBase<TSubclassOf<ULiveLinkRole>,TSubclassOf<ULiveLinkControllerBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TSubclassOf<ULiveLinkControllerBase>,0>_>
                      ::Find((TMapBase<TSubclassOf<ULiveLinkRole>,TSubclassOf<ULiveLinkControllerBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TSubclassOf<ULiveLinkControllerBase>,0>_>
                              *)(pUVar4 + 1),(TSubclassOf<ULiveLinkRole_const_>)&local_res10);
            if (((pTVar10 == (TSubclassOf<ULiveLinkControllerBase> *)0x0) ||
                (pUVar9 = (pTVar10->Class).field0_0x0.DebugPtr, pUVar9 == (UClass *)0x0)) ||
               (pUVar8 = ULiveLinkControllerBase::StaticClass(), pUVar8 == (UClass *)0x0)) {
LAB_14d094976:
              ULiveLinkControllerBase::GetControllersForRole
                        ((TArray<TSubclassOf<ULiveLinkControllerBase>,TSizedDefaultAllocator<32>_> *
                         )&local_68,(TSubclassOf<ULiveLinkRole> *)&local_res8.ObjectPtr);
              uVar7 = local_68.DestructionSentinel._0_8_;
              TVar13.DebugPtr = (UClass *)0x0;
              if (0 < (int)local_68.DestructionSentinel.Accessor) {
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (*(UObject **)local_68.DestructionSentinel._0_8_ != (UObject *)0x0)) {
                  UE::GC::MarkAsReachable(*(UObject **)local_68.DestructionSentinel._0_8_);
                }
                TVar13.DebugPtr = *(UClass **)uVar7;
              }
              if ((FScriptContainerElement *)uVar7 != (FScriptContainerElement *)0x0) {
                FMemory::Free((void *)uVar7);
              }
            }
            else {
              iVar2 = (int)pUVar8->_padding_;
              if (((int)pUVar9->_padding_ < iVar2) ||
                 ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar2 * 8) !=
                  &pUVar8->_padding_)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              if ((!bVar5) ||
                 (pUVar9 = (pTVar10->Class).field0_0x0.DebugPtr, pUVar9 == (UClass *)0x0))
              goto LAB_14d094976;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)pUVar9);
              }
              TVar13.DebugPtr = (pTVar10->Class).field0_0x0.DebugPtr;
            }
            local_res8 = TVar13;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (TVar13.DebugPtr != (UClass *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)TVar13.DebugPtr);
            }
            local_res18.DebugPtr = *(UClass **)FVar12.Data;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_res18 != (TObjectPtr<UClass>_u_0)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_res18.DebugPtr);
            }
            SetControllerClassForRole
                      (this,(TSubclassOf<ULiveLinkRole>)&local_res18,
                       (TSubclassOf<ULiveLinkControllerBase>)&local_res8);
          }
        }
        FVar12.Data = FVar12.Data + 8;
      }
      if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.AllocatorInstance.Data);
      }
      goto LAB_14d094ac2;
    }
  }
  this_00 = &this->ControllerMap;
  bVar5 = 1 < *(int *)&(this->ControllerMap).field_0x48;
  if (!bVar5) {
    TSet<TTuple<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->ControllerMap).field_0xc;
  *(undefined4 *)&(this->ControllerMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ControllerMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ControllerMap).field_0x34 = 0;
  iVar3 = *(int *)&(this->ControllerMap).field_0x2c;
  *(undefined4 *)&(this->ControllerMap).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->ControllerMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ControllerMap).field_0x10,0);
  }
  if (bVar5) {
    *(undefined4 *)&(this->ControllerMap).field_0x48 = 1;
    TSet<TTuple<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>,FDefaultSetAllocator>
              *)this_00);
  }
LAB_14d094ac2:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnControllerMapUpdatedDelegate,&local_68);
  iVar3 = *(int *)&(this->OnControllerMapUpdatedDelegate).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_68);
  if (0 < iVar3) {
    FEditorScriptExecutionGuard::FEditorScriptExecutionGuard
              ((FEditorScriptExecutionGuard *)&local_res8.ObjectPtr);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->OnControllerMapUpdatedDelegate,(void *)0x0);
    FEditorScriptExecutionGuard::~FEditorScriptExecutionGuard
              ((FEditorScriptExecutionGuard *)&local_res8.ObjectPtr);
  }
  return;
}

// PostLoad @ 14d094b30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULiveLinkComponentController::PostLoad(ULiveLinkComponentController *this)

{
  UActorComponent::PostLoad((UActorComponent *)this);
  return;
}

// Serialize @ 14d094ea0

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
ULiveLinkComponentController::Serialize(ULiveLinkComponentController *this,FArchive *param_1)

{
  byte *pbVar1;
  bool bVar2;
  int iVar3;
  TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_> *pTVar4;
  uint uVar5;
  TPairInitializer<UActorComponent_*_&&,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>_&&>
  TStackX_10;
  undefined1 auStack_28 [8];
  undefined8 uStack_20;
  TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_> **ppTStack_18;
  undefined1 *puStack_10;
  
  UObject::Serialize((UObject *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFrameworkObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))
            (param_1,&FFortniteReleaseBranchCustomObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) != 0) &&
     (((*(uint *)&param_1->field_0x34 >> 0x16 & 1) != 0 ||
      ((*(uint *)&param_1->field_0x34 >> 0xc & 1) == 0)))) {
    bVar2 = UObjectBaseUtility::IsTemplate
                      ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
    if (!bVar2) {
      pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
      *pbVar1 = *pbVar1 | 4;
    }
  }
  iVar3 = FArchiveState::CustomVer
                    ((FArchiveState *)param_1,&FFortniteReleaseBranchCustomObjectVersion::GUID);
  if (3 < iVar3) {
    if ((param_1->field_0x28 & 1) == 0) {
      AcquireSRWLockShared((PSRWLOCK)&UActorComponent::AllUCSModifiedPropertiesLock);
      pTVar4 = TMapBase<UActorComponent_*,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UActorComponent_*,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>,0>_>
               ::Find((TMapBase<UActorComponent_*,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UActorComponent_*,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>,0>_>
                       *)&UActorComponent::AllUCSModifiedProperties,(UActorComponent *)this);
      if (pTVar4 == (TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_> *)0x0) {
        auStack_28 = (undefined1  [8])pTVar4;
        uStack_20 = pTVar4;
        TArrayPrivateFriend::Serialize<FSimpleMemberReference,TSizedDefaultAllocator<32>_>
                  (param_1,(TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_> *)auStack_28)
        ;
        if (auStack_28 != (undefined1  [8])0x0) {
          FMemory::Free((void *)auStack_28);
        }
      }
      else {
        TArrayPrivateFriend::Serialize<FSimpleMemberReference,TSizedDefaultAllocator<32>_>
                  (param_1,pTVar4);
      }
      ReleaseSRWLockShared((PSRWLOCK)&UActorComponent::AllUCSModifiedPropertiesLock);
    }
    else {
      auStack_28 = (undefined1  [8])0x0;
      uStack_20._0_4_ = 0;
      uStack_20._4_4_ = 0;
      TArrayPrivateFriend::Serialize<FSimpleMemberReference,TSizedDefaultAllocator<32>_>
                (param_1,(TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_> *)auStack_28);
      AcquireSRWLockExclusive((PSRWLOCK)&UActorComponent::AllUCSModifiedPropertiesLock);
      if ((int)uStack_20 < 1) {
        TStackX_10.Key = (UActorComponent **)this;
        if (UActorComponent::AllUCSModifiedProperties._8_4_ !=
            UActorComponent::AllUCSModifiedProperties._52_4_) {
          uVar5 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) *
                  -0x7a143595;
          uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
          TSet<TTuple<UActorComponent_*,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UActorComponent_*,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::RemoveImpl<UActorComponent_const_*>
                    ((TSet<TTuple<UActorComponent_*,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UActorComponent_*,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&UActorComponent::AllUCSModifiedProperties,uVar5 >> 0x10 ^ uVar5,
                     (UActorComponent **)&TStackX_10);
        }
      }
      else {
        ppTStack_18 = &TStackX_10.Value;
        puStack_10 = auStack_28;
        TStackX_10.Value = (TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_> *)this;
        TSet<TTuple<UActorComponent_*,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UActorComponent_*,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<UActorComponent_*_&&,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>_&&>_>
                  ((TSet<TTuple<UActorComponent_*,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UActorComponent_*,TArray<FSimpleMemberReference,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    *)&UActorComponent::AllUCSModifiedProperties,&TStackX_10,(bool *)&ppTStack_18);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&UActorComponent::AllUCSModifiedPropertiesLock);
      if (auStack_28 != (undefined1  [8])0x0) {
        FMemory::Free((void *)auStack_28);
        return;
      }
    }
  }
  return;
}

// Serialize @ 14d094eb0

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
ULiveLinkComponentController::Serialize
          (ULiveLinkComponentController *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UActorComponent::Serialize((UActorComponent *)this,pFVar1);
  return;
}

// SetControlledComponent @ 14d095070

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
ULiveLinkComponentController::SetControlledComponent
          (ULiveLinkComponentController *this,TSubclassOf<ULiveLinkRole> param_1,
          UActorComponent *param_2)

{
  TObjectPtr<ULiveLinkControllerBase> TVar1;
  TObjectPtr<ULiveLinkControllerBase>_u_0 *pTVar2;
  UObject *local_res8;
  
  local_res8 = *(UObject **)param_1.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  pTVar2 = &TMapBase<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>_>
            ::Find((TMapBase<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>_>
                    *)&this->ControllerMap,(TSubclassOf<ULiveLinkRole_const_>)&local_res8)->
            field0_0x0;
  if ((pTVar2 != (TObjectPtr<ULiveLinkControllerBase>_u_0 *)0x0) &&
     (TVar1.field0_0x0 = (TObjectPtr<ULiveLinkControllerBase>_u_0)pTVar2->DebugPtr,
     TVar1.field0_0x0 != (ULiveLinkControllerBase *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
    }
    (**(code **)(*(longlong *)TVar1.field0_0x0 + 0x2d8))(TVar1.field0_0x0,param_2);
  }
  return;
}

// SetControllerClassForRole @ 14d0950f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
ULiveLinkComponentController::SetControllerClassForRole
          (ULiveLinkComponentController *this,TSubclassOf<ULiveLinkRole> param_1,
          TSubclassOf<ULiveLinkControllerBase> param_2)

{
  TObjectPtr<UClass>_u_0 TVar1;
  UObject *pUVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  TObjectPtr<ULiveLinkControllerBase>_u_0 *pTVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  ULiveLinkControllerBase *pUVar10;
  uint uVar11;
  longlong *plVar12;
  UClass *pUVar13;
  undefined1 auStack_e8 [32];
  TObjectPtr<UClass>_u_0 local_c8 [2];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  TVar1 = *(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (TVar1.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
  }
  local_c8[0] = TVar1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (TVar1.DebugPtr != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar1.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
  }
  uVar11 = ((uint)((ulonglong)TVar1.DebugPtr >> 0x14) & 0xffff ^
           (uint)((ulonglong)TVar1.DebugPtr >> 4)) * -0x7a143595;
  uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
  iVar6 = TSet<TTuple<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TSubclassOf<ULiveLinkRole_const_>_>
                    ((TSet<TTuple<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>,FDefaultSetAllocator>
                      *)&this->ControllerMap,uVar11 >> 0x10 ^ uVar11,
                     (TSubclassOf<ULiveLinkRole_const_> *)&local_c8[0].ObjectPtr);
  if (iVar6 != -1) {
    pUVar2 = *(UObject **)param_1.Class.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    uVar11 = ((uint)((ulonglong)pUVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar2 >> 4)) *
             -0x7a143595;
    uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
    pTVar7 = &TMapBase<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>_>
              ::FindOrAddImpl<TSubclassOf<ULiveLinkRole>_const_&>
                        ((TMapBase<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>_>
                          *)&this->ControllerMap,uVar11 >> 0x10 ^ uVar11,
                         (TSubclassOf<ULiveLinkRole> *)param_1.Class.field0_0x0)->field0_0x0;
    pUVar13 = (UClass *)0x0;
    if (pTVar7->DebugPtr != (ULiveLinkControllerBase *)0x0) {
      lVar3 = *(longlong *)param_2.Class.field0_0x0;
      pUVar9 = pUVar13;
      if ((lVar3 != 0) && (pUVar8 = ULiveLinkControllerBase::StaticClass(), pUVar8 != (UClass *)0x0)
         ) {
        iVar6 = (int)pUVar8->_padding_;
        if ((*(int *)(lVar3 + 0x38) < iVar6) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar6 * 8) !=
            &pUVar8->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          pUVar9 = *(UClass **)param_2.Class.field0_0x0;
        }
      }
      pUVar10 = pTVar7->DebugPtr;
      if ((UClass *)pUVar10->_padding_ == pUVar9) goto LAB_14d0953a9;
      if (pUVar10 != (ULiveLinkControllerBase *)0x0) {
        (**(code **)(pUVar10->_padding_ + 0x2e8))();
      }
    }
    lVar3 = *(longlong *)param_2.Class.field0_0x0;
    if ((lVar3 != 0) && (pUVar9 = ULiveLinkControllerBase::StaticClass(), pUVar9 != (UClass *)0x0))
    {
      iVar6 = (int)pUVar9->_padding_;
      if ((*(int *)(lVar3 + 0x38) < iVar6) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar6 * 8) !=
          &pUVar9->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && (*(longlong *)param_2.Class.field0_0x0 != 0)) {
        lVar5 = this->_padding_;
        lVar3 = *(longlong *)param_2.Class.field0_0x0;
        local_c8[0].DebugPtr = (UClass *)0x0;
        if ((lVar3 != 0) &&
           (pUVar9 = ULiveLinkControllerBase::StaticClass(), pUVar9 != (UClass *)0x0)) {
          iVar6 = (int)pUVar9->_padding_;
          if ((*(int *)(lVar3 + 0x38) < iVar6) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar6 * 8) !=
              &pUVar9->_padding_)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            pUVar13 = *(UClass **)param_2.Class.field0_0x0;
          }
        }
        TVar1 = local_c8[0];
        if (local_c8[0].DebugPtr == (UClass *)0x0) {
          FObjectInitializer::AssertIfInConstructor
                    ((UObject *)this,
                     L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                    );
        }
        pUVar9 = ULiveLinkControllerBase::StaticClass();
        CheckIsClassChildOf_Internal(pUVar9,pUVar13);
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_b8,pUVar13);
        local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
        local_b8._56_8_ = (UPackage *)0x0;
        local_b8._16_8_ = TVar1;
        local_b8._40_8_ = (UObject *)0x0;
        local_b8[0x20] = false;
        local_b8._8_8_ = this;
        local_b8._24_4_ = (EObjectFlags)lVar5 & (RF_ArchetypeObject|RF_Transactional|RF_Public);
        pUVar10 = (ULiveLinkControllerBase *)
                  StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
        if (local_b8._64_8_ != 0) {
          plVar12 = (longlong *)(local_b8 + 0x50);
          if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
            plVar12 = (longlong *)local_b8._104_8_;
          }
          (**(code **)(*plVar12 + 0x10))();
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar10 != (ULiveLinkControllerBase *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar10);
        }
        pTVar7->DebugPtr = pUVar10;
        goto LAB_14d0953a9;
      }
    }
    pTVar7->DebugPtr = (ULiveLinkControllerBase *)0x0;
  }
LAB_14d0953a9:
  this->bIsDirty = true;
  return;
}

// SetSubjectRepresentation @ 14d095450

void __thiscall
ULiveLinkComponentController::SetSubjectRepresentation
          (ULiveLinkComponentController *this,FLiveLinkSubjectRepresentation *param_1)

{
  TObjectPtr<UClass>_u_0 *pTVar1;
  UClass *pUVar2;
  TObjectPtr<UClass>_u_0 TVar3;
  TObjectPtr<ULiveLinkControllerBase> *pTVar4;
  int iVar5;
  ForAnyElementType FVar6;
  TObjectPtr<UClass>_u_0 local_res8;
  TArray<TSubclassOf<ULiveLinkRole>,TSizedDefaultAllocator<32>_> local_28;
  
  (this->SubjectRepresentation).Subject.Name = (param_1->Subject).Name;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (param_1->Role).Class.field0_0x0.DebugPtr, pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  local_res8 = (TObjectPtr<UClass>_u_0)(param_1->Role).Class.field0_0x0.DebugPtr;
  (this->SubjectRepresentation).Role.Class.field0_0x0.DebugPtr = (UClass *)local_res8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8.DebugPtr != (UClass *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
  }
  GetSelectedRoleHierarchyClasses(this,&local_28,(TSubclassOf<ULiveLinkRole>)&local_res8);
  iVar5 = local_28.ArrayNum;
  if (*(int *)&(this->ControllerMap).field_0x8 - *(int *)&(this->ControllerMap).field_0x34 == iVar5)
  {
    pTVar1 = (TObjectPtr<UClass>_u_0 *)(local_28.AllocatorInstance.Data + (longlong)iVar5 * 8);
    FVar6.Data = local_28.AllocatorInstance.Data;
    while( true ) {
      if (local_28.ArrayNum != iVar5) {
        `TCheckedPointerIterator<TSubclassOf<ULiveLinkRole>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if ((TObjectPtr<UClass>_u_0 *)FVar6.Data == pTVar1) {
        if (local_28.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_28.AllocatorInstance.Data);
        return;
      }
      TVar3 = (TObjectPtr<UClass>_u_0)*(TObjectPtr<UClass>_u_0 *)FVar6.Data;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar3.DebugPtr != (UClass *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
      }
      local_res8 = TVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar3.DebugPtr != (UClass *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
      }
      pTVar4 = TMapBase<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>_>
               ::Find((TMapBase<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>_>
                       *)&this->ControllerMap,(TSubclassOf<ULiveLinkRole_const_>)&local_res8);
      if (pTVar4 == (TObjectPtr<ULiveLinkControllerBase> *)0x0) break;
      FVar6.Data = FVar6.Data + 8;
    }
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  OnSubjectRoleChanged(this);
  return;
}

// StaticRegisterNativesULiveLinkComponentController @ 14d0955a0

void __cdecl ULiveLinkComponentController::StaticRegisterNativesULiveLinkComponentController(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_ULiveLinkComponentController_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickComponent @ 14d095ba0

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
ULiveLinkComponentController::TickComponent
          (ULiveLinkComponentController *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  TOptional<bool> *pTVar1;
  TMulticastDelegate<void___cdecl(ULiveLinkComponentController_const_*,FLiveLinkSubjectFrameData_const_&),FDefaultDelegateUserPolicy>
  *this_00;
  ulonglong uVar2;
  uint uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  code *pcVar6;
  TConsoleVariableData<bool> *pTVar7;
  TMap<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>_>
  *pTVar8;
  bool bVar9;
  char cVar10;
  bool bVar11;
  UWorld *pUVar12;
  IModularFeatures *pIVar13;
  longlong lVar14;
  UClass *this_01;
  int iVar15;
  longlong *plVar16;
  uint uVar17;
  longlong *plVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  undefined1 *puVar22;
  undefined1 local_res8 [8];
  FEditorScriptExecutionGuard local_178;
  char local_177 [3];
  float local_174;
  int local_170;
  int local_16c;
  TObjectPtr<UClass>_u_0 local_168;
  TMap<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>_>
  *local_160;
  uint uStack_158;
  uint uStack_154;
  undefined1 *local_150;
  undefined4 uStack_148;
  uint uStack_144;
  uint local_140;
  undefined4 uStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  TMap<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>_>
  *local_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_128;
  undefined8 uStack_108;
  FName local_100;
  UClass *local_f8;
  FDestructionSentinel local_f0;
  FStructOnScope local_d8;
  FStructOnScope local_b0;
  FReadAccessScope local_88 [2];
  undefined4 local_54;
  
  pUVar12 = (UWorld *)this->_padding_;
  if ((((pUVar12 != (UWorld *)0x0) ||
       (pUVar12 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
       pUVar12 != (UWorld *)0x0)) && ((pUVar12->WorldType).Value == '\x04')) &&
     (this->bUpdateInPreviewEditor == false)) {
    return;
  }
  if ((this->bIsDirty != false) || ((this->bIsSpawnableCache).bIsSet == false)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&SequencerActorTag,L"SequencerActor");
      _Init_thread_footer(&::_TSS0);
    }
    if (((AActor *)this->_padding_ == (AActor *)0x0) ||
       (bVar9 = AActor::ActorHasTag((AActor *)this->_padding_,SequencerActorTag), !bVar9)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    pTVar1 = &this->bIsSpawnableCache;
    if ((TOptional<bool> *)local_177 != pTVar1) {
      pTVar1->TypedValue = bVar9;
      (this->bIsSpawnableCache).bIsSet = true;
    }
    if (((this->bIsSpawnableCache).bIsSet == false) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((pTVar1->TypedValue != false) && (this->bDisableEvaluateLiveLinkWhenSpawnable != false)) {
      this->bEvaluateLiveLink = false;
    }
  }
  pIVar13 = IModularFeatures::Get();
  lVar14 = (**(code **)((longlong)*pIVar13 + 0x20))(pIVar13,ILiveLinkClient::ModularFeatureName,0);
  plVar18 = (longlong *)0x0;
  plVar16 = (longlong *)(lVar14 + -8);
  if (lVar14 == 0) {
    plVar16 = plVar18;
  }
  if ((pUVar12 != (UWorld *)0x0) && ((pUVar12->WorldType).Value == '\x03')) {
    this_01 = ULiveLinkComponentSettings::StaticClass();
    if ((this_01->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_01);
    }
    if ((*(char *)((this_01->ClassDefaultObject).field0_0x0.DebugPtr + 3) != '\0') &&
       (cVar10 = (**(code **)(*plVar16 + 0x1c8))(plVar16), cVar10 != '\0')) {
      (**(code **)(*plVar16 + 0x1c0))(plVar16);
    }
  }
  FStructOnScope::FStructOnScope(&local_d8);
  FStructOnScope::FStructOnScope(&local_b0);
  pTVar7 = CVarEnableLiveLinkEvaluation.Ref;
  if (this->bEvaluateLiveLink != false) {
    bVar9 = IsInParallelGameThread();
    if (((!bVar9) && (bVar9 = IsInGameThread(), !bVar9)) &&
       (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0"), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (pTVar7->ShadowedValue[0] != false) {
      local_168 = (TObjectPtr<UClass>_u_0)
                  (this->SubjectRepresentation).Role.Class.field0_0x0.DebugPtr;
      pcVar6 = *(code **)(*plVar16 + 0x198);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_168.DebugPtr != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_168.DebugPtr);
      }
      cVar10 = (*pcVar6)(plVar16,(this->SubjectRepresentation).Subject.Name,&local_168,&local_d8);
      goto LAB_14d095dff;
    }
  }
  cVar10 = '\0';
LAB_14d095dff:
  local_150 = &(this->ControllerMap).field_0x10;
  uStack_158 = 0;
  uVar17 = *(uint *)&(this->ControllerMap).field_0x28;
  local_160 = &this->ControllerMap;
  uStack_154 = 1;
  uStack_144 = uStack_158;
  local_140 = uStack_158;
  if (uVar17 != 0) {
    puVar20 = *(uint **)&(this->ControllerMap).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)local_150;
    }
    uVar21 = *puVar20;
    plVar16 = plVar18;
    local_140 = 0;
    uStack_158 = 0;
    while (uVar21 == 0) {
      iVar15 = (int)plVar18;
      local_140 = (int)plVar16 + 0x20;
      plVar16 = (longlong *)(ulonglong)local_140;
      uStack_158 = iVar15 + 1;
      plVar18 = (longlong *)(ulonglong)uStack_158;
      if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_158)
      goto LAB_14d095e96;
      uVar21 = puVar20[(longlong)iVar15 + 1];
    }
    uStack_154 = -uVar21 & uVar21;
    uVar2 = (ulonglong)uStack_154 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_170 = (int)lVar14;
    uStack_144 = (local_140 - 1) + local_170;
    if ((int)uVar17 < (int)uStack_144) {
LAB_14d095e96:
      uStack_144 = uVar17;
    }
  }
  puVar22 = &(this->ControllerMap).field_0x10;
  uVar17 = *(uint *)&(this->ControllerMap).field_0x28;
  uStack_13c = local_54;
  iStack_138 = *(int *)&(this->ControllerMap).field_0x8 - *(int *)&(this->ControllerMap).field_0x34;
  uVar21 = uVar17 & 0xffffffe0;
  uStack_148 = 0xffffffff;
  TStack_128.CurrentBitIndex = uStack_144;
  TStack_128.UnvisitedBitMask = 0xffffffff;
  TStack_128._padding_ = CONCAT44(uStack_154,uStack_158);
  iVar15 = (int)uVar17 >> 5;
  TStack_128._28_4_ = local_54;
  TStack_128.BaseBitIndex = local_140;
  uStack_108 = CONCAT44(uStack_134,iStack_138);
  local_130 = local_160;
  TStack_128.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_150;
  if (((int)uVar17 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar3 = *(uint *)&(this->ControllerMap).field_0x28;
  if (uVar17 != uVar3) {
    puVar4 = *(undefined1 **)&(this->ControllerMap).field_0x20;
    puVar19 = puVar22;
    if (puVar4 != (undefined1 *)0x0) {
      puVar19 = puVar4;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar15 * 4);
    while (uVar17 == 0) {
      lVar14 = (longlong)iVar15;
      uVar21 = uVar21 + 0x20;
      iVar15 = iVar15 + 1;
      uVar17 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14d095fb0;
      uVar17 = *(uint *)(puVar19 + lVar14 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_16c = (int)lVar14;
    uVar17 = local_16c + -1 + uVar21;
    if ((int)uVar3 < (int)uVar17) {
      uVar17 = uVar3;
    }
  }
LAB_14d095fb0:
  while( true ) {
    pTVar8 = local_130;
    if (*(int *)&local_130->field_0x8 - *(int *)&local_130->field_0x34 != (int)uStack_108) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_128.CurrentBitIndex == uVar17) &&
        (TStack_128.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar22)) &&
       (pTVar8 == &this->ControllerMap)) break;
    plVar18 = *(longlong **)(*(longlong *)pTVar8 + 8 + (longlong)TStack_128.CurrentBitIndex * 0x18);
    if (plVar18 != (longlong *)0x0) {
      if (this->bIsDirty != false) {
        local_f8 = (this->SubjectRepresentation).Role.Class.field0_0x0.DebugPtr;
        pcVar6 = *(code **)(*plVar18 + 0x2e0);
        local_100 = (this->SubjectRepresentation).Subject.Name;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_f8 != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_f8);
        }
        (*pcVar6)(plVar18,&local_100);
        (**(code **)(*plVar18 + 0x2b0))(plVar18);
      }
      if (cVar10 != '\0') {
        (**(code **)(*plVar18 + 0x2b8))(plVar18,param_1,&local_d8);
      }
    }
    TStack_128.UnvisitedBitMask = TStack_128.UnvisitedBitMask & ~TStack_128._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_128);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnLiveLinkUpdated,
             local_88);
  iVar15 = *(int *)&(this->OnLiveLinkUpdated).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (local_88);
  if (0 < iVar15) {
    FEditorScriptExecutionGuard::FEditorScriptExecutionGuard(&local_178);
    local_174 = param_1;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnLiveLinkUpdated,
               &local_174);
    FEditorScriptExecutionGuard::~FEditorScriptExecutionGuard(&local_178);
  }
  if (cVar10 != '\0') {
    this_00 = &this->LiveLinkControllersTickedDelegate;
    bVar9 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
    if (bVar9) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FWriteAccessScope *)&local_f0);
      puVar22 = &(this->LiveLinkControllersTickedDelegate).field_0x1c;
      *(int *)puVar22 = *(int *)puVar22 + 1;
      bVar9 = false;
      uVar17 = *(int *)&(this->LiveLinkControllersTickedDelegate).field_0x10 - 1;
      if (-1 < (int)uVar17) {
        lVar14 = (longlong)(int)uVar17 << 4;
        bVar9 = false;
        do {
          uVar21 = 0;
          if ((int)uVar17 < *(int *)&(this->LiveLinkControllersTickedDelegate).field_0x10) {
            uVar21 = ~uVar17 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar5 = *(longlong *)&(this->LiveLinkControllersTickedDelegate).field_0x8;
          if (((*(int *)(lVar14 + 8 + lVar5) == 0) ||
              (plVar18 = *(longlong **)(lVar14 + lVar5), plVar18 == (longlong *)0x0)) ||
             (cVar10 = (**(code **)(*plVar18 + 0x68))(plVar18,this,&local_d8), cVar10 == '\0')) {
            bVar9 = true;
          }
          lVar14 = lVar14 + -0x10;
          uVar17 = uVar17 - 1;
        } while (-1 < (int)uVar17);
      }
      puVar22 = &(this->LiveLinkControllersTickedDelegate).field_0x1c;
      *(int *)puVar22 = *(int *)puVar22 + -1;
      if (bVar9) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
      }
      if (local_f0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f0.Accessor,&local_f0);
      }
    }
  }
  this->bIsDirty = false;
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  FStructOnScope::~FStructOnScope(&local_b0);
  FStructOnScope::~FStructOnScope(&local_d8);
  return;
}

// execGetControlledComponent @ 14d096a00

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
ULiveLinkComponentController::execGetControlledComponent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TObjectPtr<ULiveLinkControllerBase> this;
  UObject *pUVar2;
  TObjectPtr<ULiveLinkControllerBase>_u_0 *pTVar3;
  AActor *pAVar4;
  UActorComponent *pUVar5;
  UObject *local_res8;
  UObject *local_res10;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (local_res8 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res8);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
  }
  local_res10 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  pTVar3 = &TMapBase<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>_>
            ::Find((TMapBase<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>_>
                    *)&param_1[5].field_0x8,(TSubclassOf<ULiveLinkRole_const_>)&local_res10)->
            field0_0x0;
  if ((pTVar3 != (TObjectPtr<ULiveLinkControllerBase>_u_0 *)0x0) &&
     (this.field0_0x0 = (TObjectPtr<ULiveLinkControllerBase>_u_0)pTVar3->DebugPtr,
     this.field0_0x0 != (ULiveLinkControllerBase *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this.field0_0x0);
    }
    pAVar4 = ULiveLinkControllerBase::GetOuterActor((ULiveLinkControllerBase *)this.field0_0x0);
    pUVar5 = FComponentReference::GetComponent
                       ((FComponentReference *)((longlong)this.field0_0x0 + 0x28),pAVar4);
    *(UActorComponent **)param_3 = pUVar5;
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetSubjectRepresentation @ 14d096b40

void __cdecl
ULiveLinkComponentController::execGetSubjectRepresentation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = *(undefined8 *)&param_1[4].field_0x20;
  pUVar2 = *(UObject **)(param_1 + 5);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  *(undefined8 *)param_3 = uVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  *(UObject **)((longlong)param_3 + 8) = pUVar2;
  return;
}

// execSetControlledComponent @ 14d096bc0

void __cdecl
ULiveLinkComponentController::execSetControlledComponent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TObjectPtr<ULiveLinkControllerBase> TVar2;
  undefined8 uVar3;
  UObject *pUVar4;
  TObjectPtr<ULiveLinkControllerBase>_u_0 *pTVar5;
  undefined8 local_res8;
  UObject *local_res10 [2];
  UObject *local_res20;
  
  local_res10[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar4 = local_res10[0];
  uVar3 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10[0]);
  }
  local_res20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  pTVar5 = &TMapBase<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>_>
            ::Find((TMapBase<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>_>
                    *)&param_1[5].field_0x8,(TSubclassOf<ULiveLinkRole_const_>)&local_res20)->
            field0_0x0;
  if ((pTVar5 != (TObjectPtr<ULiveLinkControllerBase>_u_0 *)0x0) &&
     (TVar2.field0_0x0 = (TObjectPtr<ULiveLinkControllerBase>_u_0)pTVar5->DebugPtr,
     TVar2.field0_0x0 != (ULiveLinkControllerBase *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)TVar2.field0_0x0);
    }
    (**(code **)(*(longlong *)TVar2.field0_0x0 + 0x2d8))(TVar2.field0_0x0,uVar3);
  }
  return;
}

// execSetSubjectRepresentation @ 14d096d00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
ULiveLinkComponentController::execSetSubjectRepresentation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptContainerElement *pFVar1;
  FProperty *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  UObject *pUVar5;
  bool bVar6;
  EInternalObjectFlags EVar7;
  uint uVar8;
  int iVar9;
  UClass *pUVar10;
  UObject *pUVar11;
  TObjectPtr<ULiveLinkControllerBase> *pTVar12;
  UObject *pUVar13;
  longlong lVar14;
  ForAnyElementType FVar15;
  UObject *pUVar16;
  uint uVar17;
  ForAnyElementType FVar18;
  undefined1 local_res10 [8];
  UObject *local_res20;
  UObject *local_78;
  ForAnyElementType local_70;
  undefined8 local_68;
  undefined8 local_60;
  UObject *local_58;
  TObjectIterator<UClass> local_50;
  
  pUVar13 = (UObject *)0x0;
  local_60 = 0;
  local_58 = (UObject *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  pUVar5 = local_58;
  uVar4 = local_60;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_58 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_58);
  }
  *(undefined8 *)&param_1[4].field_0x20 = uVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  *(UObject **)(param_1 + 5) = pUVar5;
  uVar17 = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar5 == (UObject *)0x0)) {
    local_70.Data = (FScriptContainerElement *)0x0;
    local_68 = 0;
    if (pUVar5 == (UObject *)0x0) goto LAB_14d0971aa;
  }
  else {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_68 = 0;
  local_70.Data = (FScriptContainerElement *)0x0;
  pUVar10 = Z_Construct_UClass_ULiveLinkRole_NoRegister();
  if (pUVar10 != (UClass *)0x0) {
    iVar9 = (int)pUVar10->_padding_;
    if ((*(int *)&pUVar5[1].field_0x10 < iVar9) ||
       ((longlong *)*(undefined1 **)(*(longlong *)&pUVar5[1].field_0x8 + (longlong)iVar9 * 8) !=
        &pUVar10->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      local_50.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_50.ObjectArray.ArrayNum = 0;
      local_50.ObjectArray.ArrayMax = 0;
      local_50.Index = 0xffffffff;
      EVar7 = UE::GetAsyncLoadingInternalFlagsExclusion();
      pUVar10 = Z_Construct_UClass_UClass_NoRegister();
      GetObjectsOfClass(pUVar10,&local_50.ObjectArray,true,RF_ClassDefaultObject,
                        EVar7 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
LAB_14d096e7c:
      do {
        TObjectIterator<UClass>::Advance(&local_50);
        lVar14 = (longlong)local_50.Index;
        if ((local_50.Index < 0) || (local_50.ObjectArray.ArrayNum <= local_50.Index))
        goto LAB_14d097191;
        uVar8 = uVar17;
        if (local_50.Index < local_50.ObjectArray.ArrayNum) {
          uVar8 = (uint)~local_50.Index >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((*(uint *)(*(longlong *)(local_50.ObjectArray.AllocatorInstance.Data + lVar14 * 8) +
                      0xd4) & 0x2000001) == 0) {
          pUVar10 = Z_Construct_UClass_ULiveLinkRole_NoRegister();
          if (pUVar10 == (UClass *)0x0) {
LAB_14d096f26:
            pUVar11 = pUVar13;
          }
          else {
            iVar9 = (int)pUVar10->_padding_;
            if ((*(int *)&pUVar5[1].field_0x10 < iVar9) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)&pUVar5[1].field_0x8 + (longlong)iVar9 * 8) !=
                &pUVar10->_padding_)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            pUVar11 = pUVar5;
            if (!bVar6) goto LAB_14d096f26;
          }
          lVar14 = (longlong)local_50.Index;
          uVar8 = uVar17;
          if (local_50.Index < local_50.ObjectArray.ArrayNum) {
            uVar8 = (uint)~local_50.Index >> 0x1f;
          }
          if (uVar8 == 0) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          lVar14 = *(longlong *)(local_50.ObjectArray.AllocatorInstance.Data + lVar14 * 8);
          if (lVar14 != 0) {
            if ((*(int *)&pUVar11[1].field_0x10 < *(int *)(lVar14 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)&pUVar11[1].field_0x8 + (longlong)*(int *)(lVar14 + 0x38) * 8) !=
                lVar14 + 0x30)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (bVar6) {
              lVar14 = (longlong)local_50.Index;
              uVar8 = uVar17;
              if (local_50.Index < local_50.ObjectArray.ArrayNum) {
                uVar8 = (uint)~local_50.Index >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              local_78 = *(UObject **)(local_50.ObjectArray.AllocatorInstance.Data + lVar14 * 8);
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (local_78 != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(local_78);
              }
              FVar18.Data = local_70.Data;
              pFVar1 = local_70.Data + (longlong)(int)local_68 * 8;
              FVar15.Data = local_70.Data;
              if (local_70.Data != pFVar1) {
                do {
                  pUVar11 = *(UObject **)FVar15.Data;
                  pUVar16 = pUVar13;
                  if ((pUVar11 != (UObject *)0x0) &&
                     (pUVar10 = Z_Construct_UClass_ULiveLinkRole_NoRegister(),
                     pUVar10 != (UClass *)0x0)) {
                    iVar9 = (int)pUVar10->_padding_;
                    if ((*(int *)&pUVar11[1].field_0x10 < iVar9) ||
                       ((longlong *)
                        *(undefined1 **)(*(longlong *)&pUVar11[1].field_0x8 + (longlong)iVar9 * 8)
                        != &pUVar10->_padding_)) {
                      bVar6 = false;
                    }
                    else {
                      bVar6 = true;
                    }
                    if (bVar6) {
                      pUVar16 = *(UObject **)FVar15.Data;
                    }
                  }
                  pUVar11 = local_78;
                  if ((local_78 == (UObject *)0x0) ||
                     (pUVar10 = Z_Construct_UClass_ULiveLinkRole_NoRegister(),
                     pUVar10 == (UClass *)0x0)) {
LAB_14d0970aa:
                    pUVar11 = pUVar13;
                  }
                  else {
                    iVar9 = (int)pUVar10->_padding_;
                    if ((*(int *)&pUVar11[1].field_0x10 < iVar9) ||
                       ((longlong *)
                        *(undefined1 **)(*(longlong *)&pUVar11[1].field_0x8 + (longlong)iVar9 * 8)
                        != &pUVar10->_padding_)) {
                      bVar6 = false;
                    }
                    else {
                      bVar6 = true;
                    }
                    pUVar11 = local_78;
                    if (!bVar6) goto LAB_14d0970aa;
                  }
                  if (pUVar16 == pUVar11) {
                    if ((int)((longlong)FVar15.Data - (longlong)FVar18.Data >> 3) != -1)
                    goto LAB_14d096e7c;
                    break;
                  }
                  FVar15.Data = FVar15.Data + 8;
                } while (FVar15.Data != pFVar1);
              }
              iVar9 = (int)local_68;
              if ((local_70.Data <= (FScriptContainerElement *)&local_78) &&
                 ((FScriptContainerElement *)&local_78 <
                  local_70.Data + (longlong)local_68._4_4_ * 8)) {
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  );
                if (bVar6) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                iVar9 = (int)local_68;
              }
              if (iVar9 == local_68._4_4_) {
                iVar9 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x808,&local_70,(int *)((longlong)&local_68 + 4));
              }
              local_68 = CONCAT44(local_68._4_4_,iVar9 + 1);
              *(UObject **)(local_70.Data + (longlong)iVar9 * 8) = local_78;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (local_78 != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(local_78);
              }
            }
          }
        }
      } while( true );
    }
  }
LAB_14d0971a3:
  pUVar13 = (UObject *)(local_68 & 0xffffffff);
LAB_14d0971aa:
  iVar9 = (int)pUVar13;
  if (*(int *)&param_1[5].field_0x10 - *(int *)&param_1[6].field_0x14 == iVar9) {
    pFVar1 = local_70.Data + (longlong)iVar9 * 8;
    FVar18.Data = local_70.Data;
    while( true ) {
      if ((int)pUVar13 != iVar9) {
        `TCheckedPointerIterator<TSubclassOf<ULiveLinkRole>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (FVar18.Data == pFVar1) {
        if (local_70.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_70.Data);
        return;
      }
      pUVar13 = *(UObject **)FVar18.Data;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar13);
      }
      local_res20 = pUVar13;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar13);
      }
      pTVar12 = TMapBase<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>_>
                ::Find((TMapBase<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>_>
                        *)&param_1[5].field_0x8,(TSubclassOf<ULiveLinkRole_const_>)&local_res20);
      if (pTVar12 == (TObjectPtr<ULiveLinkControllerBase> *)0x0) break;
      pUVar13 = (UObject *)(local_68 & 0xffffffff);
      FVar18.Data = FVar18.Data + 8;
    }
    if (local_70.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data);
    }
  }
  else if (local_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data);
    OnSubjectRoleChanged((ULiveLinkComponentController *)param_1);
    return;
  }
  OnSubjectRoleChanged((ULiveLinkComponentController *)param_1);
  return;
LAB_14d097191:
  if (local_50.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.ObjectArray.AllocatorInstance.Data);
  }
  goto LAB_14d0971a3;
}

