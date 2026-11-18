// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 19

// GetOuterWorld @ 148a594f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall
URuntimeHashExternalStreamingObjectBase::GetOuterWorld
          (URuntimeHashExternalStreamingObjectBase *this)

{
  int iVar1;
  UWorld *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UWorld *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->OuterWorld);
  if (pUVar2 != (UWorld *)0x0) {
    pUVar3 = Z_Construct_UClass_UWorld_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UWorld *)0x0;
}

// GetDataLayerInstances @ 148a95120

TSet<TObjectPtr<UDataLayerInstance>,DefaultKeyFuncs<TObjectPtr<UDataLayerInstance>,0>,FDefaultSetAllocator>
* __thiscall
URuntimeHashExternalStreamingObjectBase::GetDataLayerInstances
          (URuntimeHashExternalStreamingObjectBase *this)

{
  TSet<TObjectPtr<UDataLayerInstance>,DefaultKeyFuncs<TObjectPtr<UDataLayerInstance>,0>,FDefaultSetAllocator>
  *pTVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000148a95123. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pTVar1 = (TSet<TObjectPtr<UDataLayerInstance>,DefaultKeyFuncs<TObjectPtr<UDataLayerInstance>,0>,FDefaultSetAllocator>
            *)(**(code **)(this->_padding_ + 0x18))();
  return pTVar1;
}

// GetRootExternalDataLayerInstance @ 148a96f60

UExternalDataLayerInstance * __thiscall
URuntimeHashExternalStreamingObjectBase::GetRootExternalDataLayerInstance
          (URuntimeHashExternalStreamingObjectBase *this)

{
  return *(UExternalDataLayerInstance **)&(this->DataLayerInstances).Elements.field_0x20;
}

// GetWorld @ 148a97130

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall
URuntimeHashExternalStreamingObjectBase::GetWorld(URuntimeHashExternalStreamingObjectBase *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UWorld *pUVar4;
  UClass *pUVar5;
  UWorldPartition *this_00;
  
  if ((this->OwningWorld).bIsSet != false) {
    if ((this->OwningWorld).bIsSet == false) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar4 = (UWorld *)(*pcVar2)();
        return pUVar4;
      }
    }
    pUVar4 = (UWorld *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->OwningWorld);
    return pUVar4;
  }
  pUVar4 = (UWorld *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->OuterWorld);
  if (pUVar4 != (UWorld *)0x0) {
    pUVar5 = Z_Construct_UClass_UWorld_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) goto LAB_148aceac8;
  }
  pUVar4 = (UWorld *)0x0;
LAB_148aceac8:
  this_00 = UWorld::GetWorldPartition(pUVar4);
  pUVar4 = UWorldPartition::GetWorld(this_00);
  return pUVar4;
}

// StaticClass @ 148aa2850

UClass * __cdecl URuntimeHashExternalStreamingObjectBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_URuntimeHashExternalStreamingObjectBase.InnerSingleton ==
      (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"RuntimeHashExternalStreamingObjectBase",
               &Z_Registration_Info_UClass_URuntimeHashExternalStreamingObjectBase.InnerSingleton,
               StaticRegisterNativesURuntimeHashExternalStreamingObjectBase,0x1c8,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<URuntimeHashExternalStreamingObjectBase>,
               InternalVTableHelperCtorCaller<URuntimeHashExternalStreamingObjectBase>,aFStackX_8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URuntimeHashExternalStreamingObjectBase.InnerSingleton;
}

// _getUObject @ 148aa5ae0

UObject * __thiscall
URuntimeHashExternalStreamingObjectBase::_getUObject(URuntimeHashExternalStreamingObjectBase *this)

{
  return (UObject *)&this[-1].DataLayerInstances.Hash;
}

// _getUObject`adjustor{8}' @ 148aa5aec

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   URuntimeHashExternalStreamingObjectBase::_getUObject`adjustor{8}' (void)const __ptr64 */

UObject * __thiscall
URuntimeHashExternalStreamingObjectBase::_getUObject_adjustor_8__
          (URuntimeHashExternalStreamingObjectBase *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((URuntimeHashExternalStreamingObjectBase *)
                       &this[-1].TargetInjectedWorldPartition);
  return (UObject *)pUVar1;
}

// URuntimeHashExternalStreamingObjectBase @ 148ab4d80

URuntimeHashExternalStreamingObjectBase * __thiscall
URuntimeHashExternalStreamingObjectBase::URuntimeHashExternalStreamingObjectBase
          (URuntimeHashExternalStreamingObjectBase *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UObject::UObject((UObject *)this,param_1);
  this_00 = &(this->OuterWorld).SoftObjectPtr.field_0x18;
  *(undefined8 *)&this->SubObjectsToCellRemapping = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined8 *)&(this->SubObjectsToCellRemapping).field_0x8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IWorldPartitionCookPackageObject__;
  this->_padding_ = (longlong)&_vftable__for__IDataLayerInstanceProvider__;
  *(undefined8 *)&(this->SubObjectsToCellRemapping).field_0x20 = 0;
  *(undefined4 *)&(this->SubObjectsToCellRemapping).field_0x28 = 0;
  *(undefined4 *)&(this->SubObjectsToCellRemapping).field_0x2c = 0x80;
  *(undefined4 *)&(this->SubObjectsToCellRemapping).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SubObjectsToCellRemapping).field_0x34 = 0;
  *(undefined8 *)&(this->SubObjectsToCellRemapping).field_0x40 = 0;
  *(undefined4 *)&(this->SubObjectsToCellRemapping).field_0x48 = 0;
  *(undefined8 *)&(this->ContainerResolver).Containers = 0;
  *(undefined8 *)&(this->ContainerResolver).Containers.field_0x8 = 0;
  *(undefined8 *)&(this->ContainerResolver).Containers.field_0x20 = 0;
  *(undefined4 *)&(this->ContainerResolver).Containers.field_0x28 = 0;
  *(undefined4 *)&(this->ContainerResolver).Containers.field_0x2c = 0x80;
  *(undefined4 *)&(this->ContainerResolver).Containers.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ContainerResolver).Containers.field_0x34 = 0;
  *(undefined8 *)&(this->ContainerResolver).Containers.field_0x40 = 0;
  *(undefined4 *)&(this->ContainerResolver).Containers.field_0x48 = 0;
  (this->ContainerResolver).MainContainerPackage.ComparisonIndex = 0;
  (this->ContainerResolver).MainContainerPackage.Number = 0;
  (this->OwningWorld).bIsSet = false;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->OuterWorld).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->OuterWorld).SoftObjectPtr = 0;
  *(undefined8 *)&(this->OuterWorld).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->OuterWorld).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  *(undefined8 *)&this->CellToStreamingData = 0;
  *(undefined8 *)&(this->CellToStreamingData).field_0x8 = 0;
  *(undefined8 *)&(this->CellToStreamingData).field_0x20 = 0;
  *(undefined4 *)&(this->CellToStreamingData).field_0x28 = 0;
  *(undefined4 *)&(this->CellToStreamingData).field_0x2c = 0x80;
  *(undefined4 *)&(this->CellToStreamingData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CellToStreamingData).field_0x34 = 0;
  *(undefined8 *)&(this->CellToStreamingData).field_0x40 = 0;
  *(undefined4 *)&(this->CellToStreamingData).field_0x48 = 0;
  *(undefined8 *)&(this->DataLayerInstances).Elements = 0;
  *(undefined8 *)&(this->DataLayerInstances).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->DataLayerInstances).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->DataLayerInstances).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->DataLayerInstances).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->DataLayerInstances).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DataLayerInstances).Elements.field_0x34 = 0;
  (this->DataLayerInstances).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->DataLayerInstances).HashSize = 0;
  (this->RootExternalDataLayerInstance).field0_0x0.DebugPtr = (UExternalDataLayerInstance *)0x0;
  (this->TargetInjectedWorldPartition).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// URuntimeHashExternalStreamingObjectBase @ 148ab4f00

URuntimeHashExternalStreamingObjectBase * __thiscall
URuntimeHashExternalStreamingObjectBase::URuntimeHashExternalStreamingObjectBase
          (URuntimeHashExternalStreamingObjectBase *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  
  UObject::UObject((UObject *)this,param_1);
  this_00 = &(this->OuterWorld).SoftObjectPtr.field_0x18;
  *(undefined8 *)&this->SubObjectsToCellRemapping = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined8 *)&(this->SubObjectsToCellRemapping).field_0x8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IWorldPartitionCookPackageObject__;
  this->_padding_ = (longlong)&_vftable__for__IDataLayerInstanceProvider__;
  *(undefined8 *)&(this->SubObjectsToCellRemapping).field_0x20 = 0;
  *(undefined4 *)&(this->SubObjectsToCellRemapping).field_0x28 = 0;
  *(undefined4 *)&(this->SubObjectsToCellRemapping).field_0x2c = 0x80;
  *(undefined4 *)&(this->SubObjectsToCellRemapping).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SubObjectsToCellRemapping).field_0x34 = 0;
  *(undefined8 *)&(this->SubObjectsToCellRemapping).field_0x40 = 0;
  *(undefined4 *)&(this->SubObjectsToCellRemapping).field_0x48 = 0;
  *(undefined8 *)&(this->ContainerResolver).Containers = 0;
  *(undefined8 *)&(this->ContainerResolver).Containers.field_0x8 = 0;
  *(undefined8 *)&(this->ContainerResolver).Containers.field_0x20 = 0;
  *(undefined4 *)&(this->ContainerResolver).Containers.field_0x28 = 0;
  *(undefined4 *)&(this->ContainerResolver).Containers.field_0x2c = 0x80;
  *(undefined4 *)&(this->ContainerResolver).Containers.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ContainerResolver).Containers.field_0x34 = 0;
  *(undefined8 *)&(this->ContainerResolver).Containers.field_0x40 = 0;
  *(undefined4 *)&(this->ContainerResolver).Containers.field_0x48 = 0;
  (this->ContainerResolver).MainContainerPackage.ComparisonIndex = 0;
  (this->ContainerResolver).MainContainerPackage.Number = 0;
  (this->OwningWorld).bIsSet = false;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->OuterWorld).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->OuterWorld).SoftObjectPtr = 0;
  *(undefined8 *)&(this->OuterWorld).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->OuterWorld).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  *(undefined8 *)&this->CellToStreamingData = 0;
  *(undefined8 *)&(this->CellToStreamingData).field_0x8 = 0;
  *(undefined8 *)&(this->CellToStreamingData).field_0x20 = 0;
  *(undefined4 *)&(this->CellToStreamingData).field_0x28 = 0;
  *(undefined4 *)&(this->CellToStreamingData).field_0x2c = 0x80;
  *(undefined4 *)&(this->CellToStreamingData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CellToStreamingData).field_0x34 = 0;
  *(undefined8 *)&(this->CellToStreamingData).field_0x40 = 0;
  *(undefined4 *)&(this->CellToStreamingData).field_0x48 = 0;
  *(undefined8 *)&(this->DataLayerInstances).Elements = 0;
  *(undefined8 *)&(this->DataLayerInstances).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->DataLayerInstances).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->DataLayerInstances).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->DataLayerInstances).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->DataLayerInstances).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DataLayerInstances).Elements.field_0x34 = 0;
  (this->DataLayerInstances).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->DataLayerInstances).HashSize = 0;
  (this->RootExternalDataLayerInstance).field0_0x0.DebugPtr = (UExternalDataLayerInstance *)0x0;
  (this->TargetInjectedWorldPartition).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~URuntimeHashExternalStreamingObjectBase @ 148ab7270

void __thiscall
URuntimeHashExternalStreamingObjectBase::~URuntimeHashExternalStreamingObjectBase
          (URuntimeHashExternalStreamingObjectBase *this)

{
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IWorldPartitionCookPackageObject__;
  this->_padding_ = (longlong)&_vftable__for__IDataLayerInstanceProvider__;
  (this->DataLayerInstances).HashSize = 0;
  FVar1 = (this->DataLayerInstances).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UDataLayerInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UDataLayerInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->DataLayerInstances).Elements);
  *(undefined4 *)&(this->CellToStreamingData).field_0x48 = 0;
  pvVar2 = *(void **)&(this->CellToStreamingData).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FWorldPartitionRuntimeCellStreamingData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FWorldPartitionRuntimeCellStreamingData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FWorldPartitionRuntimeCellStreamingData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CellToStreamingData);
  pvVar2 = *(void **)&(this->OuterWorld).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->ContainerResolver).Containers.field_0x48 = 0;
  pvVar2 = *(void **)&(this->ContainerResolver).Containers.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FWorldPartitionRuntimeContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FWorldPartitionRuntimeContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FWorldPartitionRuntimeContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ContainerResolver);
  *(undefined4 *)&(this->SubObjectsToCellRemapping).field_0x48 = 0;
  pvVar2 = *(void **)&(this->SubObjectsToCellRemapping).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SubObjectsToCellRemapping);
  this->_padding_ = (longlong)&___7IDataLayerInstanceProvider__6B_;
  this->_padding_ = (longlong)&___7IWorldPartitionCookPackageObject__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 148aba7e0

void __thiscall
`URuntimeHashExternalStreamingObjectBase::OnStreamingObjectLoaded'::__l5::<lambda_1>::operator()
          (void *this,UWorldPartitionRuntimeCell *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UClass *pUVar5;
  UWorldPartitionLevelStreamingDynamic *pUVar6;
  FString *pFVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  int iVar12;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UWorldPartitionRuntimeCell *)0x0) {
    pFVar7 = GetTypeName<UWorldPartitionRuntimeLevelStreamingCell>(&local_38);
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar9);
  }
  pUVar5 = UWorldPartitionRuntimeLevelStreamingCell::StaticClass();
  iVar12 = (int)pUVar5->_padding_;
  if ((*(int *)(param_1->_padding_ + 0x38) < iVar12) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar12 * 8)
      != &pUVar5->_padding_)) {
    pFVar7 = GetTypeName<UWorldPartitionRuntimeLevelStreamingCell>(&local_28);
    pwVar9 = L"";
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
    pFVar7 = GetFullNameForCastLogError<UWorldPartitionRuntimeCell>(&local_18,param_1);
    if ((pFVar7->Data).ArrayNum != 0) {
      pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar9,pwVar11);
  }
  lVar1 = param_1->_padding_;
  lVar10 = *(longlong *)this;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
  if (*(int *)(lVar10 + 0x120) != *(int *)(lVar10 + 0x14c)) {
    lVar8 = *(longlong *)(lVar10 + 0x158);
    if (*(longlong *)(lVar10 + 0x158) == 0) {
      lVar8 = lVar10 + 0x150;
    }
    iVar12 = *(int *)(lVar8 + (ulonglong)
                              (*(int *)(lVar10 + 0x160) - 1U &
                              (int)((ulonglong)lVar1 >> 0x20) + uVar4) * 4);
    if (iVar12 != -1) {
      lVar10 = *(longlong *)(lVar10 + 0x118);
      do {
        if (*(longlong *)((longlong)iVar12 * 0x40 + lVar10) == lVar1) {
          if (iVar12 != -1) {
            lVar10 = (longlong)iVar12 * 0x40 + lVar10;
            if (lVar10 == 0) goto LAB_148aba8aa;
            goto LAB_148aba8d0;
          }
          break;
        }
        iVar12 = *(int *)((longlong)iVar12 * 0x40 + 0x38 + lVar10);
      } while (iVar12 != -1);
    }
  }
  lVar10 = 0;
LAB_148aba8aa:
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_148aba8d0:
  pUVar6 = UWorldPartitionRuntimeLevelStreamingCell::CreateLevelStreaming
                     ((UWorldPartitionRuntimeLevelStreamingCell *)param_1,(FString *)(lVar10 + 8),
                      (FSoftObjectPath *)(lVar10 + 0x18));
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 != (UWorldPartitionLevelStreamingDynamic *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  param_1[1]._padding_ = (longlong)pUVar6;
  return;
}

// BeginDestroy @ 148ac04a0

void __thiscall
URuntimeHashExternalStreamingObjectBase::BeginDestroy(URuntimeHashExternalStreamingObjectBase *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  
  pUVar3 = FWeakObjectPtr::Get(&(this->TargetInjectedWorldPartition).WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!TargetInjectedWorldPartition.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeHash.cpp"
                       ,0x49,L"Destroying external streaming object that is still injected.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UObject::BeginDestroy((UObject *)this);
  return;
}

// ForEachStreamingCells @ 148aca4d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
URuntimeHashExternalStreamingObjectBase::ForEachStreamingCells
          (URuntimeHashExternalStreamingObjectBase *this,
          TFunctionRef<void___cdecl(UWorldPartitionRuntimeCell_&)> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  UClass *pUVar5;
  ForAnyElementType FVar6;
  undefined1 local_res18 [16];
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_28;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  GetObjectsWithOuter((UObjectBase *)this,&local_28,true,RF_NoFlags,Borrowed);
  iVar4 = local_28.ArrayNum;
  pFVar1 = local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 8;
  FVar6.Data = local_28.AllocatorInstance.Data;
  while( true ) {
    if (local_28.ArrayNum != iVar4) {
      `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (FVar6.Data == pFVar1) break;
    lVar3 = *(longlong *)FVar6.Data;
    if (lVar3 != 0) {
      pUVar5 = UWorldPartitionRuntimeCell::StaticClass();
      iVar2 = (int)pUVar5->_padding_;
      if ((iVar2 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar2 * 8)
          == &pUVar5->_padding_)) {
        (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,lVar3);
      }
    }
    FVar6.Data = FVar6.Data + 8;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// GetDataLayerInstances @ 148accc00

TSet<TObjectPtr<UDataLayerInstance>,DefaultKeyFuncs<TObjectPtr<UDataLayerInstance>,0>,FDefaultSetAllocator>
* __thiscall
URuntimeHashExternalStreamingObjectBase::GetDataLayerInstances
          (URuntimeHashExternalStreamingObjectBase *this)

{
  return (TSet<TObjectPtr<UDataLayerInstance>,DefaultKeyFuncs<TObjectPtr<UDataLayerInstance>,0>,FDefaultSetAllocator>
          *)&(this->CellToStreamingData).field_0x20;
}

// GetLevelMountPointContextObject @ 148acdd10

UObject * __thiscall
URuntimeHashExternalStreamingObjectBase::GetLevelMountPointContextObject
          (URuntimeHashExternalStreamingObjectBase *this)

{
  UObject *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000148acdd18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (UObject *)(**(code **)(this->_padding_ + 0x28))(&this->_padding_);
  return pUVar1;
}

// GetOwningWorld @ 148acea40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall
URuntimeHashExternalStreamingObjectBase::GetOwningWorld
          (URuntimeHashExternalStreamingObjectBase *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UWorld *pUVar4;
  UClass *pUVar5;
  UWorldPartition *this_00;
  
  if ((this->OwningWorld).bIsSet != false) {
    if ((this->OwningWorld).bIsSet == false) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar4 = (UWorld *)(*pcVar2)();
        return pUVar4;
      }
    }
    pUVar4 = (UWorld *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->OwningWorld);
    return pUVar4;
  }
  pUVar4 = (UWorld *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->OuterWorld);
  if (pUVar4 != (UWorld *)0x0) {
    pUVar5 = Z_Construct_UClass_UWorld_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) goto LAB_148aceac8;
  }
  pUVar4 = (UWorld *)0x0;
LAB_148aceac8:
  this_00 = UWorld::GetWorldPartition(pUVar4);
  pUVar4 = UWorldPartition::GetWorld(this_00);
  return pUVar4;
}

// GetPrivateStaticClass @ 148acef00

UClass * __cdecl URuntimeHashExternalStreamingObjectBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URuntimeHashExternalStreamingObjectBase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"RuntimeHashExternalStreamingObjectBase",
               &Z_Registration_Info_UClass_URuntimeHashExternalStreamingObjectBase.InnerSingleton,
               StaticRegisterNativesURuntimeHashExternalStreamingObjectBase,0x1c8,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<URuntimeHashExternalStreamingObjectBase>,
               InternalVTableHelperCtorCaller<URuntimeHashExternalStreamingObjectBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URuntimeHashExternalStreamingObjectBase.InnerSingleton;
}

// OnStreamingObjectLoaded @ 148ad5710

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
URuntimeHashExternalStreamingObjectBase::OnStreamingObjectLoaded
          (URuntimeHashExternalStreamingObjectBase *this,UWorld *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  UWorld *pUVar6;
  UWorldPartition *pUVar7;
  URuntimeHashExternalStreamingObjectBase *local_res8;
  UWorld *local_res18;
  FWeakObjectPtr local_28;
  code *local_20;
  URuntimeHashExternalStreamingObjectBase **local_18;
  
  if (*(int *)&(this->CellToStreamingData).field_0x8 !=
      *(int *)&(this->CellToStreamingData).field_0x34) {
    local_18 = &local_res8;
    local_20 = UE::Core::Private::Function::
               TFunctionRefCaller<`URuntimeHashExternalStreamingObjectBase::OnStreamingObjectLoaded'::__l5::<lambda_1>,void,UWorldPartitionRuntimeCell_&>
               ::Call;
    local_res8 = this;
    ForEachStreamingCells
              (this,(TFunctionRef<void___cdecl(UWorldPartitionRuntimeCell_&)> *)&local_20);
  }
  pUVar4 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->OuterWorld);
  if (pUVar4 == (UObject *)0x0) {
LAB_148ad5788:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetOuterWorld()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeHash.cpp"
                       ,0x7c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    pUVar5 = Z_Construct_UClass_UWorld_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) goto LAB_148ad5788;
  }
  pUVar6 = (UWorld *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->OuterWorld);
  if (pUVar6 == (UWorld *)0x0) {
LAB_148ad57e5:
    pUVar6 = (UWorld *)0x0;
  }
  else {
    pUVar5 = Z_Construct_UClass_UWorld_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(pUVar6->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar5->_padding_)) goto LAB_148ad57e5;
  }
  pUVar7 = UWorld::GetWorldPartition(pUVar6);
  if (pUVar7 == (UWorldPartition *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetOuterWorld()->GetWorldPartition()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeHash.cpp"
                       ,0x7d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar6 = (UWorld *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->OuterWorld);
  if (pUVar6 == (UWorld *)0x0) {
LAB_148ad5851:
    pUVar6 = (UWorld *)0x0;
  }
  else {
    pUVar5 = Z_Construct_UClass_UWorld_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(pUVar6->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar5->_padding_)) goto LAB_148ad5851;
  }
  pUVar7 = UWorld::GetWorldPartition(pUVar6);
  pUVar6 = UWorldPartition::GetWorld(pUVar7);
  if (pUVar6 == (UWorld *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetOuterWorld()->GetWorldPartition()->GetWorld()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeHash.cpp"
                       ,0x7e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar6 = (UWorld *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->OuterWorld);
  if (pUVar6 != (UWorld *)0x0) {
    pUVar5 = Z_Construct_UClass_UWorld_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) goto LAB_148ad58c7;
  }
  pUVar6 = (UWorld *)0x0;
LAB_148ad58c7:
  pUVar7 = UWorld::GetWorldPartition(pUVar6);
  local_res18 = UWorldPartition::GetWorld(pUVar7);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18);
  }
  local_28.ObjectIndex = 0;
  local_28.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18);
  }
  FWeakObjectPtr::operator=(&local_28,(FObjectPtr)&local_res18);
  if ((TOptional<TWeakObjectPtr<UWorld,FWeakObjectPtr>_> *)&local_28 != &this->OwningWorld) {
    (this->OwningWorld).TypedValue.WeakPtr = local_28;
    (this->OwningWorld).bIsSet = true;
  }
  return;
}

// StaticRegisterNativesURuntimeHashExternalStreamingObjectBase @ 148adb800

void __cdecl
URuntimeHashExternalStreamingObjectBase::
StaticRegisterNativesURuntimeHashExternalStreamingObjectBase(void)

{
  return;
}

