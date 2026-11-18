// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 46

// StaticClass @ 14b48ec00

UClass * __cdecl UDS_EntityManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_EntityManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_EntityManager",
               &Z_Registration_Info_UClass_UDS_EntityManager.InnerSingleton,
               StaticRegisterNativesUDS_EntityManager,0x178,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_EntityManager>,
               InternalVTableHelperCtorCaller<UDS_EntityManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_EntityManager.InnerSingleton;
}

// UDS_EntityManager @ 14b492560

UDS_EntityManager * __thiscall
UDS_EntityManager::UDS_EntityManager(UDS_EntityManager *this,FVTableHelper *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_EntityManager__6B_;
  *(undefined8 *)&this->OnSpawnEntityEvent = 0;
  *(undefined8 *)&(this->OnSpawnEntityEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnSpawnEntityEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnRemoveEntityEvent = 0;
  *(undefined8 *)&(this->OnRemoveEntityEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnRemoveEntityEvent).field_0x10 = 0;
  (this->EntityList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EntityList).ArrayNum = 0;
  (this->EntityList).ArrayMax = 0;
  *(undefined8 *)&this->EntityTypeMap = 0;
  *(undefined8 *)&(this->EntityTypeMap).field_0x8 = 0;
  *(undefined8 *)&(this->EntityTypeMap).field_0x20 = 0;
  *(undefined8 *)&(this->OnSpawnEntityEvent).field_0x18 = 2;
  *(undefined8 *)&(this->OnRemoveEntityEvent).field_0x18 = 2;
  *(undefined4 *)&(this->EntityTypeMap).field_0x28 = 0;
  *(undefined4 *)&(this->EntityTypeMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->EntityTypeMap).field_0x34 = 0;
  *(undefined4 *)&(this->EntityTypeMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->EntityTypeMap).field_0x40 = 0;
  *(undefined4 *)&(this->EntityTypeMap).field_0x48 = 0;
  *(undefined8 *)&this->DonotDestroyMap = 0;
  *(undefined8 *)&(this->DonotDestroyMap).field_0x8 = 0;
  *(undefined8 *)&(this->DonotDestroyMap).field_0x20 = 0;
  *(undefined4 *)&(this->DonotDestroyMap).field_0x28 = 0;
  *(undefined4 *)&(this->DonotDestroyMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DonotDestroyMap).field_0x34 = 0;
  *(undefined4 *)&(this->DonotDestroyMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DonotDestroyMap).field_0x40 = 0;
  *(undefined4 *)&(this->DonotDestroyMap).field_0x48 = 0;
  *(undefined8 *)&this->EntityMap = 0;
  *(undefined8 *)&(this->EntityMap).field_0x8 = 0;
  *(undefined8 *)&(this->EntityMap).field_0x20 = 0;
  *(undefined4 *)&(this->EntityMap).field_0x28 = 0;
  *(undefined4 *)&(this->EntityMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->EntityMap).field_0x34 = 0;
  *(undefined4 *)&(this->EntityMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->EntityMap).field_0x40 = 0;
  *(undefined4 *)&(this->EntityMap).field_0x48 = 0;
  this->CreateEntityIndex = 0;
  this->EntityViewRangeAdd = 0.0;
  return this;
}

// UDS_EntityManager @ 14b492690

UDS_EntityManager * __thiscall
UDS_EntityManager::UDS_EntityManager(UDS_EntityManager *this,FObjectInitializer *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_EntityManager__6B_;
  *(undefined8 *)&this->OnSpawnEntityEvent = 0;
  *(undefined8 *)&(this->OnSpawnEntityEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnSpawnEntityEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnRemoveEntityEvent = 0;
  *(undefined8 *)&(this->OnRemoveEntityEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnRemoveEntityEvent).field_0x10 = 0;
  (this->EntityList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EntityList).ArrayNum = 0;
  (this->EntityList).ArrayMax = 0;
  *(undefined8 *)&this->EntityTypeMap = 0;
  *(undefined8 *)&(this->EntityTypeMap).field_0x8 = 0;
  *(undefined8 *)&(this->EntityTypeMap).field_0x20 = 0;
  *(undefined8 *)&(this->OnSpawnEntityEvent).field_0x18 = 2;
  *(undefined8 *)&(this->OnRemoveEntityEvent).field_0x18 = 2;
  *(undefined4 *)&(this->EntityTypeMap).field_0x28 = 0;
  *(undefined4 *)&(this->EntityTypeMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->EntityTypeMap).field_0x34 = 0;
  *(undefined4 *)&(this->EntityTypeMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->EntityTypeMap).field_0x40 = 0;
  *(undefined4 *)&(this->EntityTypeMap).field_0x48 = 0;
  *(undefined8 *)&this->DonotDestroyMap = 0;
  *(undefined8 *)&(this->DonotDestroyMap).field_0x8 = 0;
  *(undefined8 *)&(this->DonotDestroyMap).field_0x20 = 0;
  *(undefined4 *)&(this->DonotDestroyMap).field_0x28 = 0;
  *(undefined4 *)&(this->DonotDestroyMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DonotDestroyMap).field_0x34 = 0;
  *(undefined4 *)&(this->DonotDestroyMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DonotDestroyMap).field_0x40 = 0;
  *(undefined4 *)&(this->DonotDestroyMap).field_0x48 = 0;
  *(undefined8 *)&this->EntityMap = 0;
  *(undefined8 *)&(this->EntityMap).field_0x8 = 0;
  *(undefined8 *)&(this->EntityMap).field_0x20 = 0;
  *(undefined4 *)&(this->EntityMap).field_0x28 = 0;
  *(undefined4 *)&(this->EntityMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->EntityMap).field_0x34 = 0;
  *(undefined4 *)&(this->EntityMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->EntityMap).field_0x40 = 0;
  *(undefined4 *)&(this->EntityMap).field_0x48 = 0;
  this->CreateEntityIndex = 0;
  this->EntityViewRangeAdd = 0.0;
  return this;
}

// ~UDS_EntityManager @ 14b493630

void __thiscall UDS_EntityManager::~UDS_EntityManager(UDS_EntityManager *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UDS_EntityManager__6B_;
  *(undefined4 *)&(this->EntityMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->EntityMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EntityMap);
  *(undefined4 *)&(this->DonotDestroyMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DonotDestroyMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DonotDestroyMap);
  *(undefined4 *)&(this->EntityTypeMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->EntityTypeMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_EntityType,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_EntityType,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->EntityTypeMap);
  pFVar2 = (this->EntityList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnRemoveEntityEvent).field_0x8,*(int *)&(this->OnRemoveEntityEvent).field_0x10
            );
  pvVar1 = *(void **)&(this->OnRemoveEntityEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRemoveEntityEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSpawnEntityEvent).field_0x8,*(int *)&(this->OnSpawnEntityEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnSpawnEntityEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSpawnEntityEvent);
  UDS_ManagerBase::~UDS_ManagerBase((UDS_ManagerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b4950e0

UClass * __cdecl UDS_EntityManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_EntityManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_EntityManager",
               &Z_Registration_Info_UClass_UDS_EntityManager.InnerSingleton,
               StaticRegisterNativesUDS_EntityManager,0x178,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_EntityManager>,
               InternalVTableHelperCtorCaller<UDS_EntityManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_EntityManager.InnerSingleton;
}

// StaticRegisterNativesUDS_EntityManager @ 14b495840

void __cdecl UDS_EntityManager::StaticRegisterNativesUDS_EntityManager(void)

{
  return;
}

// AddEntity @ 14baefec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UDS_EntityManager::AddEntity
          (UDS_EntityManager *this,FDS_SpawnInfo *param_1,AActor *param_2,bool param_3)

{
  int *piVar1;
  TMap<EDS_EntityType,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_EntityType,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  EDS_EntityType EVar2;
  byte bVar3;
  int iVar4;
  void *pvVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType _Src;
  AActor *pAVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  UDS_LogManager *pUVar11;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar12;
  undefined1 *puVar13;
  TSparseSetElement<TTuple<EDS_EntityType,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>_>
  *pTVar14;
  undefined1 *puVar15;
  longlong lVar16;
  undefined1 auStackY_1e8 [32];
  undefined1 local_1a4 [4];
  ForAnyElementType local_1a0;
  undefined1 local_198 [8];
  FScriptContainerElement *local_190;
  AActor *local_188;
  AActor *local_180;
  FSparseArrayAllocationInfo local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_190 = (FScriptContainerElement *)param_1->EntityID;
  local_188 = (AActor *)this;
  local_180 = param_2;
  if (*(int *)&(this->EntityMap).field_0x8 != *(int *)&(this->EntityMap).field_0x34) {
    puVar15 = *(undefined1 **)&(this->EntityMap).field_0x40;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = &(this->EntityMap).field_0x38;
    }
    iVar9 = *(int *)(puVar15 +
                    ((ulonglong)(local_190 + ((ulonglong)local_190 >> 0x20) * 0x17) &
                    (ulonglong)(*(int *)&(this->EntityMap).field_0x48 - 1)) * 4);
    if (iVar9 != -1) {
      lVar16 = *(longlong *)&(this->EntityMap).field_0x0;
      do {
        if (*(FScriptContainerElement **)(lVar16 + (longlong)iVar9 * 0x18) == local_190) {
          pUVar11 = UDS_LogManager::GetInst();
          if (pUVar11 != (UDS_LogManager *)0x0) {
            pUVar11 = UDS_LogManager::GetInst();
            local_168._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_168,"UDS_EntityManager::AddEntity",0x1c,Yes);
            UDS_LogManager::PrintLog
                      (pUVar11,1,Warning,local_168.Ptr,0x314,L"Already has EntityID(%d)");
            if ((void *)local_168._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_168._padding_);
            }
          }
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->SpawnInitDelegate);
          pvVar5 = *(void **)&(param_1->SpawnInitDelegate).field_0x8;
          if (pvVar5 != (void *)0x0) {
            FMemory::Free(pvVar5);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)&param_1->SpawnInitDelegate);
          pFVar6 = (param_1->BlueprintPath).Data.AllocatorInstance.Data;
          if (pFVar6 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar6);
          }
          return false;
        }
        iVar9 = *(int *)(lVar16 + 0x10 + (longlong)iVar9 * 0x18);
      } while (iVar9 != -1);
    }
  }
  local_1a0.Data = (FScriptContainerElement *)&local_190;
  local_198 = (undefined1  [8])&local_180;
  TSet<TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned___int64_&,AActor_*_&>_>
            ((TSet<TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              *)&this->EntityMap,(TPairInitializer<unsigned___int64_&,AActor_*_&> *)local_1a4,
             (bool *)(local_1a4 + 4));
  iVar9 = (this->EntityList).ArrayNum;
  piVar1 = &(this->EntityList).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->EntityList).AllocatorInstance,piVar1);
  }
  this_00 = &this->EntityTypeMap;
  (this->EntityList).ArrayNum = iVar9 + 1;
  puVar15 = &(this->EntityTypeMap).field_0x8;
  pTVar14 = (TSparseSetElement<TTuple<EDS_EntityType,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>_>
             *)0x0;
  *(AActor **)((this->EntityList).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_180;
  EVar2 = param_1->EntityType;
  if (*(int *)puVar15 != *(int *)&(this->EntityTypeMap).field_0x34) {
    puVar13 = *(undefined1 **)&(this->EntityTypeMap).field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->EntityTypeMap).field_0x38;
    }
    iVar9 = *(int *)(puVar13 +
                    ((ulonglong)(*(int *)&(this->EntityTypeMap).field_0x48 - 1) & (ulonglong)EVar2)
                    * 4);
    if (iVar9 != -1) {
      do {
        if (*(EDS_EntityType *)((longlong)iVar9 * 0x20 + *(longlong *)&this_00->field_0x0) == EVar2)
        {
          pTVar12 = TMapBase<enum_EDS_EntityType,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_EntityType,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>_>
                    ::FindChecked(this_00,EVar2);
          iVar9 = pTVar12->ArrayNum;
          if (iVar9 == pTVar12->ArrayMax) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&pTVar12->AllocatorInstance,&pTVar12->ArrayMax);
          }
          pTVar12->ArrayNum = iVar9 + 1;
          *(FScriptContainerElement **)((pTVar12->AllocatorInstance).Data + (longlong)iVar9 * 8) =
               local_190;
          goto LAB_14baf02b7;
        }
        iVar9 = *(int *)((longlong)iVar9 * 0x20 + 0x18 + *(longlong *)&this_00->field_0x0);
      } while (iVar9 != -1);
    }
  }
  local_1a0.Data = (FScriptContainerElement *)0x0;
  local_198._0_4_ = 0;
  local_198._4_4_ = 0;
  iVar9 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x808,(ForAnyElementType *)(local_1a4 + 4),(int *)(local_198 + 4));
  local_198._0_4_ = iVar9 + 1;
  *(FScriptContainerElement **)(local_1a0.Data + (longlong)iVar9 * 8) = local_190;
  iVar9 = *(int *)&(this->EntityTypeMap).field_0x34;
  if (iVar9 == 0) {
    iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x20,8,1,(ForAnyElementType *)this_00,(int *)puVar15,
                        (int *)&(this->EntityTypeMap).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->EntityTypeMap).field_0x10,false);
  }
  else {
    iVar10 = *(int *)&(this->EntityTypeMap).field_0x30;
    iVar4 = *(int *)((longlong)iVar10 * 0x20 + 4 + *(longlong *)&this_00->field_0x0);
    iVar9 = iVar9 + -1;
    *(int *)&(this->EntityTypeMap).field_0x30 = iVar4;
    *(int *)&(this->EntityTypeMap).field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)((longlong)iVar4 * 0x20 + *(longlong *)&this_00->field_0x0) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this_00,&local_178,iVar10);
  pvVar5 = local_178.Pointer;
  _Src.Data = local_1a0.Data;
  if (local_178.Pointer !=
      (TSparseSetElement<TTuple<EDS_EntityType,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>_>
       *)0x0) {
    puVar15 = (undefined1 *)((longlong)local_178.Pointer + 8);
    *(EDS_EntityType *)local_178.Pointer = param_1->EntityType;
    *(undefined8 *)puVar15 = 0;
    lVar16 = (longlong)(int)local_198._0_4_;
    *(undefined4 *)((longlong)local_178.Pointer + 0x10) = local_198._0_4_;
    if (local_198._0_4_ == 0) {
      *(undefined4 *)((longlong)local_178.Pointer + 0x14) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_198._0_4_,0,(ForAnyElementType *)puVar15,local_198._0_4_,
                 (int *)((longlong)local_178.Pointer + 0x14));
      memcpy(*(void **)puVar15,_Src.Data,lVar16 << 3);
    }
    *(undefined4 *)((longlong)pvVar5 + 0x18) = 0xffffffff;
    pTVar14 = pvVar5;
  }
  bVar3 = *(byte *)pTVar14;
  local_1a4 = (undefined1  [4])local_178.Index;
  bVar8 = TSet<TTuple<enum_EDS_EntityType,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_EntityType,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(this_00,(uint)bVar3,pTVar14,(int *)local_1a4,(bool *)0x0);
  if (!bVar8) {
    TSet<TTuple<enum_EDS_EntityType,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_EntityType,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink(this_00,(uint)bVar3,pTVar14,(int)local_1a4);
  }
  this = (UDS_EntityManager *)local_188;
  if (local_1a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.Data);
    this = (UDS_EntityManager *)local_188;
  }
LAB_14baf02b7:
  pAVar7 = local_180;
  if (param_3) {
    local_1a0.Data = local_190;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_180 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_180);
    }
    local_198._0_4_ = 0;
    local_198._4_4_ = 0;
    local_188 = pAVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar7 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar7);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)local_198,(FObjectPtr)&local_188);
    local_178._0_8_ = local_1a4 + 4;
    local_178.Pointer = local_198;
    TSet<TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned___int64_&&,TWeakObjectPtr<AActor,FWeakObjectPtr>_&&>_>
              ((TSet<TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                *)&((AActor *)this)->ReplicatedMovement,
               (TPairInitializer<unsigned___int64_&&,TWeakObjectPtr<AActor,FWeakObjectPtr>_&&> *)
               local_1a4,(bool *)&local_178);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->SpawnInitDelegate);
  pvVar5 = *(void **)&(param_1->SpawnInitDelegate).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->SpawnInitDelegate);
  pFVar6 = (param_1->BlueprintPath).Data.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  return true;
}

// BindPlayerData @ 14baf4a30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_EntityManager::BindPlayerData(UDS_EntityManager *this)

{
  FDS_EntityBase *pFVar1;
  ulong64 local_res10 [3];
  
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &ADS_MainCharacter::MainPlayerSpawnFinishedEventDelegate,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,this);
  TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
  ::AddUObject<UDS_EntityManager>
            ((TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
              *)&ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,
             (UDS_EntityManager *)local_res10,(pmf_31c033af)this);
  local_res10[0] = UDS_PlayerData::GetMainPlayerCurrentEntityID();
  pFVar1 = FDS_EntityBase::GetEntityBase(local_res10);
  OnChangedCharacterEvent(this,(FDS_EntityBase *)0x0,pFVar1);
  return;
}

// ClearAllEntity @ 14baf83c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_EntityManager::ClearAllEntity(UDS_EntityManager *this,bool param_1)

{
  int *piVar1;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined8 *puVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  void *pvVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  ForAnyElementType _Src;
  TMap<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>_>
  *pTVar12;
  bool bVar13;
  int iVar14;
  UObject *pUVar15;
  FWeakObjectPtr *pFVar16;
  TWeakObjectPtr<AActor,FWeakObjectPtr> *this_00;
  UDS_DataManager *this_01;
  FDS_EntityBase *pFVar17;
  AActor *pAVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined1 *puVar21;
  int iVar22;
  uint uVar23;
  TMap<EDS_EntityType,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_EntityType,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar24;
  undefined1 *puVar25;
  uint uVar26;
  uint *puVar27;
  void *pvVar28;
  byte *pbVar29;
  TMap<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>_>
  *pTVar30;
  char local_res10 [8];
  int local_res18 [4];
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_1f8;
  FWeakObjectPtr local_1e8;
  FWeakObjectPtr local_1e0;
  ulonglong local_1d8;
  FWeakObjectPtr local_1d0;
  ulonglong local_1c8;
  UObject *local_1c0;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_1b8;
  FWeakObjectPtr local_1a8;
  TMap<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>_>
  *local_1a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_198;
  undefined8 local_178;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_170;
  TMap<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>_>
  *local_150;
  int iStack_148;
  uint uStack_144;
  undefined1 *local_140;
  undefined4 uStack_138;
  int iStack_134;
  int local_130;
  int iStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  TPairInitializer<unsigned___int64_&,TWeakObjectPtr<AActor,FWeakObjectPtr>_&> local_120;
  TPairInitializer<unsigned___int64_const_&,TWeakObjectPtr<AActor,FWeakObjectPtr>_const_&> local_110
  ;
  undefined8 local_100;
  TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> local_f8;
  TMap<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>_>
  *local_f0;
  FSparseArrayAllocationInfo local_e8;
  FSparseArrayAllocationInfo local_d8;
  TMap<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>_>
  *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  ulonglong *local_a0;
  FWeakObjectPtr *local_98;
  ulonglong *local_90;
  FWeakObjectPtr *local_88;
  undefined8 *local_80;
  FWeakObjectPtr *local_78;
  FSparseArrayAllocationInfo local_70;
  undefined1 local_60 [32];
  
  local_1e8.ObjectIndex = 0;
  local_1e8.ObjectSerialNumber = 0;
  local_110.Value = (TWeakObjectPtr<AActor,FWeakObjectPtr> *)0x0;
  local_res10[0] = param_1;
  FWeakObjectPtr::operator=(&local_1e8,(FObjectPtr)&local_110.Value);
  local_1d0.ObjectIndex = 0;
  local_1d0.ObjectSerialNumber = 0;
  local_100 = 0;
  FWeakObjectPtr::operator=(&local_1d0,(FObjectPtr)&local_100);
  local_1d8 = 0;
  local_1c8 = 0;
  ADS_MainCharacter::GetMainPlayer();
  bVar13 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                     ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)&local_1e0,(void *)0x0);
  if (!bVar13) {
    pUVar15 = FWeakObjectPtr::Get(&local_1e0);
    pFVar16 = (FWeakObjectPtr *)
              (**(code **)(*(longlong *)&pUVar15[0x29].field_0x10 + 0x150))
                        (&pUVar15[0x29].field_0x10,local_60);
    local_1e8 = *pFVar16;
    FWeakObjectPtr::Get(&local_1e0);
    local_1d8 = FDS_EntityBase::GetMainPlayerEntityID(true);
    pUVar15 = FWeakObjectPtr::Get(&local_1e0);
    this_00 = (TWeakObjectPtr<AActor,FWeakObjectPtr> *)
              (**(code **)(*(longlong *)&pUVar15[0x29].field_0x10 + 0x1d0))();
    bVar13 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
    if (!bVar13) {
      pUVar15 = FWeakObjectPtr::Get(&local_1e0);
      pFVar16 = (FWeakObjectPtr *)(**(code **)(*(longlong *)&pUVar15[0x29].field_0x10 + 0x1d0))();
      local_1d0 = *pFVar16;
      pUVar15 = FWeakObjectPtr::Get(&local_1e0);
      local_1c8 = (**(code **)(*(longlong *)&pUVar15[0x29].field_0x10 + 0x1d8))();
    }
  }
  this_01 = UDS_DataManager::GetInst();
  pTVar30 = &this->EntityMap;
  local_170._padding_._0_4_ = 0;
  puVar21 = &(this->EntityMap).field_0x10;
  local_170._padding_._4_4_ = 1;
  local_170.UnvisitedBitMask = 0xffffffff;
  local_170.CurrentBitIndex = 0;
  local_170.BaseBitIndex = 0;
  local_170.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar21;
  if (*(int *)&(this->EntityMap).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_170);
  }
  TStack_198._padding_ = CONCAT44(local_170._padding_._4_4_,(undefined4)local_170._padding_);
  TStack_198.UnvisitedBitMask = local_170.UnvisitedBitMask;
  TStack_198.UnvisitedBitMask = local_170.UnvisitedBitMask;
  TStack_198.CurrentBitIndex = local_170.CurrentBitIndex;
  TStack_198._28_4_ = local_170._28_4_;
  TStack_198.BaseBitIndex = local_170.BaseBitIndex;
  TStack_198.Array = local_170.Array;
  TStack_c0.Array = local_170.Array;
  TStack_c0.UnvisitedBitMask = local_170.UnvisitedBitMask;
  TStack_c0.CurrentBitIndex = local_170.CurrentBitIndex;
  TStack_c0.BaseBitIndex = local_170.BaseBitIndex;
  TStack_c0._28_4_ = local_170._28_4_;
  local_1a0 = pTVar30;
  local_c8 = pTVar30;
  TStack_c0._padding_ = TStack_198._padding_;
  if (local_170.CurrentBitIndex < (local_170.Array)->NumBits) {
    do {
      local_1a8 = *(FWeakObjectPtr *)
                   (*(longlong *)&local_c8->field_0x0 + 8 +
                   (longlong)TStack_c0.CurrentBitIndex * 0x18);
      bVar13 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                         ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)&local_1a8,(void *)0x0);
      if ((!bVar13) &&
         (pFVar17 = FDS_EntityBase::GetEntityBaseFromActor
                              ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_1a8),
         pFVar17 != (FDS_EntityBase *)0x0)) {
        uVar19 = pFVar17->EntityID;
        if (*(int *)&(this->DonotDestroyMap).field_0x8 !=
            *(int *)&(this->DonotDestroyMap).field_0x34) {
          puVar7 = *(undefined1 **)&(this->DonotDestroyMap).field_0x40;
          puVar25 = &(this->DonotDestroyMap).field_0x38;
          if (puVar7 != (undefined1 *)0x0) {
            puVar25 = puVar7;
          }
          iVar22 = *(int *)(puVar25 +
                           ((uVar19 >> 0x20) * 0x17 + uVar19 &
                           (ulonglong)(*(int *)&(this->DonotDestroyMap).field_0x48 - 1)) * 4);
          if (iVar22 != -1) {
            do {
              if (*(ulonglong *)(*(longlong *)&this->DonotDestroyMap + (longlong)iVar22 * 0x18) ==
                  uVar19) goto LAB_14baf8689;
              iVar22 = *(int *)(*(longlong *)&this->DonotDestroyMap + 0x10 + (longlong)iVar22 * 0x18
                               );
            } while (iVar22 != -1);
          }
        }
        uVar8 = local_1d8;
        if (((param_1) || (uVar8 = local_1c8, uVar19 != local_1d8)) && (uVar19 != uVar8)) {
          pAVar18 = (AActor *)FWeakObjectPtr::Get(&local_1a8);
          AActor::Destroy(pAVar18,false,true);
          if (this_01 != (UDS_DataManager *)0x0) {
            UDS_DataManager::GetDataSetContainer(this_01,(ulong64)&local_f8);
            bVar13 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                               (&local_f8,(void *)0x0);
            if (!bVar13) {
              UDS_DataManager::RemoveDataSetContainer(this_01,uVar19,true,false);
            }
          }
        }
      }
LAB_14baf8689:
      TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
    } while (TStack_c0.CurrentBitIndex < (TStack_c0.Array)->NumBits);
  }
  piVar1 = &(this->EntityList).ArrayMax;
  (this->EntityList).ArrayNum = 0;
  if ((this->EntityList).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->EntityList).AllocatorInstance,0,piVar1);
  }
  bVar13 = 1 < *(int *)&(this->EntityMap).field_0x48;
  if (!bVar13) {
    TSet<TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                      *)pTVar30);
  }
  puVar7 = &(this->EntityMap).field_0xc;
  *(undefined4 *)&(this->EntityMap).field_0x8 = 0;
  if (*(int *)puVar7 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)pTVar30,0,(int *)puVar7);
  }
  *(undefined4 *)&(this->EntityMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EntityMap).field_0x34 = 0;
  iVar22 = *(int *)&(this->EntityMap).field_0x2c;
  *(undefined4 *)&(this->EntityMap).field_0x28 = 0;
  if ((iVar22 < 0) || (0x80 < iVar22)) {
    *(undefined4 *)&(this->EntityMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc((TBitArray<FDefaultBitArrayAllocator> *)puVar21,0)
    ;
  }
  if (bVar13) {
    *(undefined4 *)&(this->EntityMap).field_0x48 = 1;
    TSet<TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              *)pTVar30);
  }
  pTVar24 = &this->EntityTypeMap;
  bVar13 = 1 < *(int *)&(this->EntityTypeMap).field_0x48;
  if (!bVar13) {
    TSet<TTuple<enum_EDS_EntityType,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_EntityType,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::UnhashElements(pTVar24);
  }
  puVar21 = &(this->EntityTypeMap).field_0x8;
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_EntityType,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(pTVar24,0,*(int *)&(this->EntityTypeMap).field_0x8);
  puVar7 = &(this->EntityTypeMap).field_0xc;
  *(undefined4 *)puVar21 = 0;
  if (*(int *)puVar7 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)pTVar24,0,(int *)puVar7);
  }
  *(undefined4 *)&(this->EntityTypeMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EntityTypeMap).field_0x34 = 0;
  iVar22 = *(int *)&(this->EntityTypeMap).field_0x2c;
  *(undefined4 *)&(this->EntityTypeMap).field_0x28 = 0;
  if ((iVar22 < 0) || (0x80 < iVar22)) {
    *(undefined4 *)&(this->EntityTypeMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->EntityTypeMap).field_0x10,0);
  }
  if (bVar13) {
    *(undefined4 *)&(this->EntityTypeMap).field_0x48 = 1;
    TSet<TTuple<enum_EDS_EntityType,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_EntityType,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Rehash(pTVar24);
  }
  if (local_res10[0] == '\x01') {
    bVar13 = FWeakObjectPtr::IsValid(&local_1e8);
    if ((bVar13) &&
       (pFVar17 = FDS_EntityBase::GetEntityBaseFromActor
                            ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_1e8),
       pFVar17 != (FDS_EntityBase *)0x0)) {
      pAVar18 = (AActor *)FWeakObjectPtr::Get(&local_1e8);
      AActor::Destroy(pAVar18,false,true);
    }
    goto LAB_14baf8d6f;
  }
  pUVar15 = FWeakObjectPtr::Get(&local_1e8);
  iVar22 = (this->EntityList).ArrayNum;
  if (iVar22 == *piVar1) {
    iVar22 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&(this->EntityList).AllocatorInstance,piVar1);
  }
  (this->EntityList).ArrayNum = iVar22 + 1;
  *(UObject **)((this->EntityList).AllocatorInstance.Data + (longlong)iVar22 * 8) = pUVar15;
  local_a0 = &local_1d8;
  local_98 = &local_1e8;
  TSet<TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned___int64_&,TWeakObjectPtr<AActor,FWeakObjectPtr>_&>_>
            ((TSet<TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              *)pTVar30,
             (TPairInitializer<unsigned___int64_&,TWeakObjectPtr<AActor,FWeakObjectPtr>_&> *)
             (local_res18 + 2),(bool *)&local_a0);
  local_1f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f8.ArrayNum = 0;
  local_1f8.ArrayMax = 0;
  iVar22 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&local_1f8.AllocatorInstance,&local_1f8.ArrayMax);
  local_1f8.ArrayNum = iVar22 + 1;
  *(ulonglong *)(local_1f8.AllocatorInstance.Data + (longlong)iVar22 * 8) = local_1d8;
  iVar22 = *(int *)&(this->EntityTypeMap).field_0x34;
  if (iVar22 == 0) {
    iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x20,8,1,(ForAnyElementType *)pTVar24,(int *)puVar21,
                        (int *)&(this->EntityTypeMap).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->EntityTypeMap).field_0x10,false);
  }
  else {
    iVar14 = *(int *)&(this->EntityTypeMap).field_0x30;
    iVar6 = *(int *)((longlong)iVar14 * 0x20 + 4 + *(longlong *)&pTVar24->field_0x0);
    iVar22 = iVar22 + -1;
    *(int *)&(this->EntityTypeMap).field_0x30 = iVar6;
    *(int *)&(this->EntityTypeMap).field_0x34 = iVar22;
    if (iVar22 != 0) {
      *(undefined4 *)((longlong)iVar6 * 0x20 + *(longlong *)&pTVar24->field_0x0) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)pTVar24,&local_e8,iVar14);
  _Src.Data = local_1f8.AllocatorInstance.Data;
  if (local_e8.Pointer !=
      (TSparseSetElement<TTuple<EDS_EntityType,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>_>
       *)0x0) {
    puVar21 = (undefined1 *)((longlong)local_e8.Pointer + 8);
    *(undefined1 *)local_e8.Pointer = 2;
    *(undefined8 *)puVar21 = 0;
    lVar20 = (longlong)local_1f8.ArrayNum;
    *(int *)((longlong)local_e8.Pointer + 0x10) = local_1f8.ArrayNum;
    if (local_1f8.ArrayNum == 0) {
      *(undefined4 *)((longlong)local_e8.Pointer + 0x14) = 0;
      *(undefined4 *)((longlong)local_e8.Pointer + 0x18) = 0xffffffff;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_1f8.ArrayNum,0,(ForAnyElementType *)puVar21,local_1f8.ArrayNum,
                 (int *)((longlong)local_e8.Pointer + 0x14));
      memcpy(*(void **)puVar21,_Src.Data,lVar20 << 3);
      *(undefined4 *)((longlong)local_e8.Pointer + 0x18) = 0xffffffff;
    }
  }
  iVar22 = *(int *)&(this->EntityTypeMap).field_0x8;
  iVar14 = *(int *)&(this->EntityTypeMap).field_0x34;
  bVar4 = *(byte *)local_e8.Pointer;
  if ((iVar22 - iVar14 != 1) && (iVar22 != iVar14)) {
    puVar21 = *(undefined1 **)&(this->EntityTypeMap).field_0x40;
    if (puVar21 == (undefined1 *)0x0) {
      puVar21 = &(this->EntityTypeMap).field_0x38;
    }
    iVar22 = *(int *)(puVar21 +
                     ((ulonglong)(*(int *)&(this->EntityTypeMap).field_0x48 - 1) & (ulonglong)bVar4)
                     * 4);
    if (iVar22 != -1) {
      do {
        if (*(byte *)((longlong)iVar22 * 0x20 + *(longlong *)&pTVar24->field_0x0) == bVar4) {
          local_res10[0] = iVar22 != -1;
          if ((bool)local_res10[0]) {
            pvVar28 = (void *)(*(longlong *)&pTVar24->field_0x0 + (longlong)iVar22 * 0x20);
            pvVar9 = *(void **)((longlong)pvVar28 + 8);
            if (pvVar9 != (void *)0x0) {
              FMemory::Free(pvVar9);
            }
            memmove(pvVar28,local_e8.Pointer,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)pTVar24,local_e8.Index,1);
            local_e8.Index = iVar22;
          }
          if (local_res10[0] != '\0') goto LAB_14baf8ac0;
          break;
        }
        iVar22 = *(int *)((longlong)iVar22 * 0x20 + 0x18 + *(longlong *)&pTVar24->field_0x0);
      } while (iVar22 != -1);
    }
  }
  TSet<TTuple<enum_EDS_EntityType,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_EntityType,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::RehashOrLink(pTVar24,(uint)bVar4,local_e8.Pointer,local_e8.Index);
LAB_14baf8ac0:
  pUVar15 = FWeakObjectPtr::Get(&local_1d0);
  piVar1 = &(this->EntityList).ArrayMax;
  iVar22 = (this->EntityList).ArrayNum;
  if (iVar22 == *piVar1) {
    iVar22 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&(this->EntityList).AllocatorInstance,piVar1);
  }
  (this->EntityList).ArrayNum = iVar22 + 1;
  *(UObject **)((this->EntityList).AllocatorInstance.Data + (longlong)iVar22 * 8) = pUVar15;
  local_90 = &local_1c8;
  local_88 = &local_1d0;
  TSet<TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned___int64_&,TWeakObjectPtr<AActor,FWeakObjectPtr>_&>_>
            ((TSet<TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              *)pTVar30,&local_120,(bool *)&local_90);
  pbVar29 = (byte *)0x0;
  iVar22 = local_1f8.ArrayMax;
  local_1f8._8_8_ = local_1f8._8_8_ & 0xffffffff00000000;
  if (iVar22 == 0) {
LAB_14baf8b61:
    iVar22 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&local_1f8.AllocatorInstance,&local_1f8.ArrayMax);
  }
  else {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&local_1f8.AllocatorInstance,0,&local_1f8.ArrayMax);
    iVar22 = local_1f8.ArrayNum;
    if (local_1f8.ArrayNum == local_1f8.ArrayMax) goto LAB_14baf8b61;
  }
  puVar21 = &(this->EntityTypeMap).field_0x8;
  local_1f8.ArrayNum = iVar22 + 1;
  *(ulonglong *)(local_1f8.AllocatorInstance.Data + (longlong)iVar22 * 8) = local_1c8;
  iVar22 = *(int *)&(this->EntityTypeMap).field_0x34;
  if (iVar22 == 0) {
    iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x20,8,1,(ForAnyElementType *)pTVar24,(int *)puVar21,
                        (int *)&(this->EntityTypeMap).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->EntityTypeMap).field_0x10,false);
  }
  else {
    iVar14 = *(int *)&(this->EntityTypeMap).field_0x30;
    iVar6 = *(int *)((longlong)iVar14 * 0x20 + 4 + *(longlong *)&pTVar24->field_0x0);
    iVar22 = iVar22 + -1;
    *(int *)&(this->EntityTypeMap).field_0x30 = iVar6;
    *(int *)&(this->EntityTypeMap).field_0x34 = iVar22;
    if (iVar22 != 0) {
      *(undefined4 *)((longlong)iVar6 * 0x20 + *(longlong *)&pTVar24->field_0x0) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)pTVar24,&local_d8,iVar14);
  if (local_d8.Pointer != (byte *)0x0) {
    *(byte *)local_d8.Pointer = 6;
    UE::Core::Private::Tuple::
    TTupleBaseElement<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,1,2>::
    TTupleBaseElement<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,1,2><TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_&>
              ((TTupleBaseElement<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,1,2> *)
               ((longlong)local_d8.Pointer + 8),ForwardingConstructor,&local_1f8);
    pbVar29 = (byte *)((longlong)local_d8.Pointer + 0x18);
    pbVar29[0] = 0xff;
    pbVar29[1] = 0xff;
    pbVar29[2] = 0xff;
    pbVar29[3] = 0xff;
    pbVar29 = local_d8.Pointer;
  }
  iVar22 = *(int *)puVar21;
  iVar14 = *(int *)&(this->EntityTypeMap).field_0x34;
  bVar4 = *pbVar29;
  if ((iVar22 - iVar14 != 1) && (iVar22 != iVar14)) {
    puVar21 = *(undefined1 **)&(this->EntityTypeMap).field_0x40;
    if (puVar21 == (undefined1 *)0x0) {
      puVar21 = &(this->EntityTypeMap).field_0x38;
    }
    iVar22 = *(int *)(puVar21 +
                     ((ulonglong)(*(int *)&(this->EntityTypeMap).field_0x48 - 1) & (ulonglong)bVar4)
                     * 4);
    if (iVar22 != -1) {
      lVar20 = *(longlong *)&pTVar24->field_0x0;
      do {
        if (*(byte *)((longlong)iVar22 * 0x20 + lVar20) == bVar4) {
          if (iVar22 != -1) {
            pvVar28 = (void *)((longlong)iVar22 * 0x20 + lVar20);
            pvVar9 = *(void **)((longlong)pvVar28 + 8);
            if (pvVar9 != (void *)0x0) {
              FMemory::Free(pvVar9);
            }
            memmove(pvVar28,pbVar29,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)pTVar24,local_d8.Index,1);
            local_d8.Index = iVar22;
          }
          if (iVar22 != -1) goto LAB_14baf8d60;
          break;
        }
        iVar22 = *(int *)((longlong)iVar22 * 0x20 + 0x18 + lVar20);
      } while (iVar22 != -1);
    }
  }
  uVar26 = *(int *)&(this->EntityTypeMap).field_0x8 - *(int *)&(this->EntityTypeMap).field_0x34;
  if (uVar26 < 4) {
    iVar22 = 1;
  }
  else {
    uVar19 = (ulonglong)((uVar26 >> 1) + 7) * 2 + 1;
    lVar20 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_120.Key._4_4_ = (undefined4)lVar20;
    iVar22 = 1 << ((byte)lVar20 & 0x1f);
  }
  if (((int)uVar26 < 1) || (iVar22 <= *(int *)&(this->EntityTypeMap).field_0x48)) {
    uVar26 = *(int *)&(this->EntityTypeMap).field_0x48 - 1U & (uint)bVar4;
    *(uint *)(pbVar29 + 0x1c) = uVar26;
    puVar21 = *(undefined1 **)&(this->EntityTypeMap).field_0x40;
    if (puVar21 == (undefined1 *)0x0) {
      puVar21 = &(this->EntityTypeMap).field_0x38;
    }
    uVar19 = (longlong)*(int *)&(this->EntityTypeMap).field_0x48 - 1U & (ulonglong)uVar26;
    *(undefined4 *)(pbVar29 + 0x18) = *(undefined4 *)(puVar21 + uVar19 * 4);
    *(int *)(puVar21 + uVar19 * 4) = local_d8.Index;
  }
  else {
    *(int *)&(this->EntityTypeMap).field_0x48 = iVar22;
    TSet<TTuple<enum_EDS_EntityType,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_EntityType,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Rehash(pTVar24);
  }
LAB_14baf8d60:
  if (local_1f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.AllocatorInstance.Data);
  }
LAB_14baf8d6f:
  TStack_198.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->DonotDestroyMap).field_0x10;
  iStack_148 = 0;
  iVar22 = *(int *)&(this->DonotDestroyMap).field_0x28;
  pTVar30 = &this->DonotDestroyMap;
  local_130 = 0;
  uStack_144 = 1;
  iStack_134 = 0;
  if (iVar22 != 0) {
    puVar27 = *(uint **)&(this->DonotDestroyMap).field_0x20;
    if (puVar27 == (uint *)0x0) {
      puVar27 = (uint *)TStack_198.Array;
    }
    uVar26 = *puVar27;
    while (uVar26 == 0) {
      lVar20 = (longlong)iStack_148;
      local_130 = local_130 + 0x20;
      iStack_148 = iStack_148 + 1;
      if ((int)(iVar22 + -1 + (iVar22 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_148) goto LAB_14baf8e05;
      uVar26 = puVar27[lVar20 + 1];
    }
    uStack_144 = -uVar26 & uVar26;
    uVar19 = (ulonglong)uStack_144 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_120.Value._0_4_ = (int)lVar20;
    iStack_134 = local_130 + -1 + (int)local_120.Value;
    if (iVar22 < iStack_134) {
LAB_14baf8e05:
      iStack_134 = iVar22;
    }
  }
  puVar21 = &(this->DonotDestroyMap).field_0x10;
  uVar26 = *(uint *)&(this->DonotDestroyMap).field_0x28;
  iStack_128 = *(int *)&(this->DonotDestroyMap).field_0x8 -
               *(int *)&(this->DonotDestroyMap).field_0x34;
  uVar23 = uVar26 & 0xffffffe0;
  uStack_138 = 0xffffffff;
  TStack_198.CurrentBitIndex = iStack_134;
  TStack_198.UnvisitedBitMask = 0xffffffff;
  TStack_198._padding_ = CONCAT44(uStack_144,iStack_148);
  iVar22 = (int)uVar26 >> 5;
  TStack_198._28_4_ = iStack_134;
  TStack_198.BaseBitIndex = local_130;
  local_178 = CONCAT44(uStack_124,iStack_128);
  local_1a0 = pTVar30;
  local_150 = pTVar30;
  local_140 = (undefined1 *)TStack_198.Array;
  iStack_12c = iStack_134;
  local_f0 = pTVar30;
  if (((int)uVar26 < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  uVar5 = *(uint *)&(this->DonotDestroyMap).field_0x28;
  if (uVar26 != uVar5) {
    puVar7 = *(undefined1 **)&(this->DonotDestroyMap).field_0x20;
    puVar25 = puVar21;
    if (puVar7 != (undefined1 *)0x0) {
      puVar25 = puVar7;
    }
    uVar26 = -1 << ((byte)uVar26 & 0x1f) & *(uint *)(puVar25 + (longlong)iVar22 * 4);
    while (uVar26 == 0) {
      lVar20 = (longlong)iVar22;
      uVar23 = uVar23 + 0x20;
      iVar22 = iVar22 + 1;
      uVar26 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22) goto LAB_14baf8f20;
      uVar26 = *(uint *)(puVar25 + lVar20 * 4 + 4);
    }
    uVar19 = (ulonglong)(-uVar26 & uVar26) * 2 + 1;
    lVar20 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_120.Value._4_4_ = (int)lVar20;
    uVar26 = local_120.Value._4_4_ + -1 + uVar23;
    if ((int)uVar5 < (int)uVar26) {
      uVar26 = uVar5;
    }
  }
LAB_14baf8f20:
  pTVar2 = &this->EntityList;
  pTVar24 = &this->EntityTypeMap;
  while( true ) {
    pTVar12 = local_1a0;
    if (*(int *)&local_1a0->field_0x8 - *(int *)&local_1a0->field_0x34 != (int)local_178) {
      local_res10[0] = '\0';
      `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_198.CurrentBitIndex == uVar26) &&
        (TStack_198.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar21)) &&
       (pTVar12 == pTVar30)) break;
    puVar3 = (undefined8 *)(*(longlong *)pTVar12 + (longlong)TStack_198.CurrentBitIndex * 0x18);
    pFVar16 = (FWeakObjectPtr *)(puVar3 + 1);
    local_1c0 = FWeakObjectPtr::Get(pFVar16);
    pFVar10 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar10 <= (FScriptContainerElement *)&local_1c0) &&
        ((FScriptContainerElement *)&local_1c0 < pFVar10 + (longlong)(this->EntityList).ArrayMax * 8
        )) && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar13)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    iVar22 = (this->EntityList).ArrayNum;
    if (iVar22 == (this->EntityList).ArrayMax) {
      iVar22 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar2->AllocatorInstance,&(this->EntityList).ArrayMax);
    }
    (this->EntityList).ArrayNum = iVar22 + 1;
    *(UObject **)((pTVar2->AllocatorInstance).Data + (longlong)iVar22 * 8) = local_1c0;
    local_80 = puVar3;
    local_78 = pFVar16;
    TSet<TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<unsigned___int64_const_&,TWeakObjectPtr<AActor,FWeakObjectPtr>_const_&>_>
              ((TSet<TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                *)&this->EntityMap,&local_110,(bool *)&local_80);
    pFVar17 = FDS_EntityBase::GetEntityBaseFromActor
                        ((TWeakObjectPtr<AActor,FWeakObjectPtr>)*pFVar16);
    if (pFVar17 != (FDS_EntityBase *)0x0) {
      local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b8.ArrayNum = 0;
      local_1b8.ArrayMax = 0;
      iVar22 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_1b8.AllocatorInstance,&local_1b8.ArrayMax);
      local_1b8.ArrayNum = iVar22 + 1;
      *(undefined8 *)(local_1b8.AllocatorInstance.Data + (longlong)iVar22 * 8) = *puVar3;
      iVar22 = *(int *)&(this->EntityTypeMap).field_0x34;
      if (iVar22 == 0) {
        iVar14 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x20,8,1,(ForAnyElementType *)pTVar24,
                            (int *)&(this->EntityTypeMap).field_0x8,
                            (int *)&(this->EntityTypeMap).field_0xc);
        TBitArray<FDefaultBitArrayAllocator>::Add
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(this->EntityTypeMap).field_0x10,false);
      }
      else {
        iVar14 = *(int *)&(this->EntityTypeMap).field_0x30;
        iVar6 = *(int *)((longlong)iVar14 * 0x20 + 4 + *(longlong *)&pTVar24->field_0x0);
        iVar22 = iVar22 + -1;
        *(int *)&(this->EntityTypeMap).field_0x30 = iVar6;
        *(int *)&(this->EntityTypeMap).field_0x34 = iVar22;
        if (iVar22 != 0) {
          *(undefined4 *)((longlong)iVar6 * 0x20 + *(longlong *)&pTVar24->field_0x0) = 0xffffffff;
        }
      }
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)pTVar24,&local_70,iVar14);
      pvVar9 = local_70.Pointer;
      if (local_70.Pointer !=
          (TSparseSetElement<TTuple<EDS_EntityType,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>_>
           *)0x0) {
        *(EDS_EntityType *)local_70.Pointer = pFVar17->EntityType;
        UE::Core::Private::Tuple::
        TTupleBaseElement<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,1,2>::
        TTupleBaseElement<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,1,2><TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_&>
                  ((TTupleBaseElement<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,1,2> *)
                   ((longlong)local_70.Pointer + 8),ForwardingConstructor,&local_1b8);
        *(undefined4 *)((longlong)pvVar9 + 0x18) = 0xffffffff;
      }
      bVar4 = *(byte *)pvVar9;
      local_res18[0] = local_70.Index;
      bVar13 = TSet<TTuple<enum_EDS_EntityType,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_EntityType,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
               ::TryReplaceExisting(pTVar24,(uint)bVar4,pvVar9,local_res18,(bool *)0x0);
      if (!bVar13) {
        TSet<TTuple<enum_EDS_EntityType,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_EntityType,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::RehashOrLink(pTVar24,(uint)bVar4,pvVar9,local_res18[0]);
      }
      if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.AllocatorInstance.Data);
      }
    }
    TStack_198.UnvisitedBitMask = TStack_198.UnvisitedBitMask & ~TStack_198._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_198);
    pTVar30 = local_f0;
  }
  return;
}

// CreateEntityID @ 14bb00bf0

ulong64 __thiscall UDS_EntityManager::CreateEntityID(UDS_EntityManager *this)

{
  int iVar1;
  
  iVar1 = this->CreateEntityIndex;
  this->CreateEntityIndex = iVar1 + 1;
  return (longlong)(iVar1 + 100);
}

// CreateMainCharacter @ 14bb00c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_EntityManager::CreateMainCharacter(UDS_EntityManager *this,UWorld *param_1)

{
  int iVar1;
  ulong64 uVar2;
  code *pcVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  UObject *pUVar6;
  FDS_UniqueBpTableRow *this_00;
  FDS_ResourceEtcTableRow *pFVar7;
  FString *pFVar8;
  ADS_MainCharacter *this_01;
  UClass *pUVar9;
  double *pdVar10;
  TWeakObjectPtr<UDS_SpringArmComponent,FWeakObjectPtr> TVar11;
  AController *this_02;
  UDS_SpringArmComponent *this_03;
  void *pvVar12;
  FScriptContainerElement *pFVar13;
  FObjectPtr_u_0 this_04;
  undefined1 auStackY_7a8 [32];
  bool local_768 [8];
  FWeakObjectPtr local_760;
  FWeakObjectPtr local_758;
  FWeakObjectPtr local_750;
  float local_748 [2];
  FObjectPtr_u_0 local_740;
  FWeakObjectPtr local_738;
  FWeakObjectPtr local_730;
  FWeakObjectPtr local_728;
  undefined8 local_720;
  double local_718;
  double dStack_710;
  double local_708;
  TVector<double>_u_0 local_700;
  FString local_6e0;
  undefined1 local_6d0 [24];
  undefined1 local_6b8 [192];
  undefined1 local_5f8 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_5d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_7a8;
  if (param_1 == (UWorld *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_5d8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_5d8,"UDS_EntityManager::CreateMainCharacter",0x26,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Warning,local_5d8.Ptr,0x2b4,L"InWorld is nullptr.");
    if ((void *)local_5d8._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_5d8._padding_);
    return;
  }
  ADS_PlayerController::GetPlayerController();
  bVar4 = TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr> *)&local_760,(void *)0x0);
  if (bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2787795673343327559>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_EntityManager.cpp"
                       ,0x2b9,"false");
    if (!bVar4) {
      return;
    }
code_r0x00014bb00e29:
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  UDS_PlayerData::GetData((ulong64)&local_758,UDS_PlayerData::MainPlayerEntityID,false);
  bVar4 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_758,(void *)0x0);
  if (bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2787795673343327556>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_EntityManager.cpp"
                       ,700,"false");
    if (!bVar4) {
      return;
    }
    goto code_r0x00014bb00e29;
  }
  pUVar6 = FWeakObjectPtr::Get(&local_758);
  uVar2 = *(ulong64 *)&pUVar6[8].field_0x10;
  UDS_CharData::GetData((ulong64)&local_730);
  bVar4 = TWeakObjectPtr<UDS_CharData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharData,FWeakObjectPtr> *)&local_730,(void *)0x0);
  if (bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2787795673343327552>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_EntityManager.cpp"
                       ,0x2c0,"false");
    if (!bVar4) {
      return;
    }
    goto code_r0x00014bb00e29;
  }
  UDS_CharInfoData::GetData((ulong64)&local_738);
  bVar4 = TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *)&local_738,(void *)0x0);
  if (bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2787795673343327549>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_EntityManager.cpp"
                       ,0x2c3,"false");
    if (!bVar4) {
      return;
    }
    goto code_r0x00014bb00e29;
  }
  bVar4 = IsSpawnedEntity(this,uVar2);
  if (bVar4) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_4b8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_4b8,"UDS_EntityManager::CreateMainCharacter",0x26,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Warning,local_4b8.Ptr,0x2c8,L"Already spawned. (%llu)");
    pFVar13 = (FScriptContainerElement *)local_4b8._padding_;
    goto LAB_14bb012e1;
  }
  FDS_SpawnInfo::FDS_SpawnInfo((FDS_SpawnInfo *)local_6b8);
  local_6b8[8] = MainCharacter;
  local_6b8._0_8_ = uVar2;
  pUVar6 = FWeakObjectPtr::Get(&local_738);
  local_6b8._12_4_ = *(undefined4 *)&pUVar6[8].field_0x8;
  this_00 = FDS_UniqueBpTableRow::GetRef(1,true);
  pFVar7 = FDS_UniqueBpTableRow::ID_BpLinkTable(this_00);
  pFVar8 = FSoftObjectPath::ToString(&pFVar7->ResourcePath,&local_6e0);
  this_04.Handle = (UObject *)0x0;
  if ((FString *)(local_6b8 + 0x10) != pFVar8) {
    if ((FScriptContainerElement *)local_6b8._16_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_6b8._16_8_);
    }
    local_6b8._16_8_ = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_6b8._24_4_ = (pFVar8->Data).ArrayNum;
    local_6b8._28_4_ = (pFVar8->Data).ArrayMax;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
  }
  if (local_6e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6e0.Data.AllocatorInstance.Data);
  }
  pUVar6 = FWeakObjectPtr::Get(&local_758);
  local_768[0] = true;
  local_700._s_0.X = (double)*(undefined8 *)(pUVar6 + 7);
  local_700._s_0.Y = (double)*(undefined8 *)&pUVar6[7].field_0x8;
  local_700._s_0.Z = *(double *)&pUVar6[7].field_0x10 + __real_4059000000000000;
  pUVar6 = FWeakObjectPtr::Get(&local_758);
  local_748[0] = *(float *)&pUVar6[7].field_0x18;
  pUVar6 = FWeakObjectPtr::Get(&local_730);
  FDS_SpawnService::AdjustSpawnTransform
            ((TTransform<double> *)(local_6b8 + 0x20),(TVector<double> *)&local_700._s_0,
             (float *)&pUVar6[4].field_0x8,local_748,local_768);
  this_01 = (ADS_MainCharacter *)SpawnActor(this,(FDS_SpawnInfo *)local_6b8,param_1,false);
  if (this_01 == (ADS_MainCharacter *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_398._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_398,"UDS_EntityManager::CreateMainCharacter",0x26,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Display,local_398.Ptr,0x2e0,L"Failed to SpawnActor.");
      pvVar12 = (void *)local_398._padding_;
LAB_14bb012aa:
      if (pvVar12 != (void *)0x0) {
        FMemory::Free(pvVar12);
      }
    }
  }
  else {
    pUVar9 = Z_Construct_UClass_ADS_MainCharacter_NoRegister();
    iVar1 = (int)pUVar9->_padding_;
    if ((*(int *)(*(longlong *)&this_01->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&this_01->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar9->_padding_)) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_EntityManager::CreateMainCharacter",0x26,Yes);
        UDS_LogManager::PrintLog(pUVar5,1,Display,local_158.Ptr,0x2e7,L"Failed to SpawnActor.");
        pvVar12 = (void *)local_158._padding_;
        goto LAB_14bb012aa;
      }
    }
    else {
      ADS_MainCharacter::GetCameraBoom(this_01);
      bVar4 = TWeakObjectPtr<UDS_SpringArmComponent,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_SpringArmComponent,FWeakObjectPtr> *)&local_728,
                         (void *)0x0);
      if (bVar4) {
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 != (UDS_LogManager *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          local_278._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_278,"UDS_EntityManager::CreateMainCharacter",0x26,Yes);
          UDS_LogManager::PrintLog(pUVar5,1,Display,local_278.Ptr,0x2ee,L"Failed to SpawnActor.");
          pvVar12 = (void *)local_278._padding_;
          goto LAB_14bb012aa;
        }
      }
      else {
        local_750.ObjectIndex = 0;
        local_750.ObjectSerialNumber = 0;
        local_720 = 0;
        local_718 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
        dStack_710 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
        local_708 = UE::Math::TRotator<double>::ZeroRotator.Roll;
        FWeakObjectPtr::operator=(&local_750,(FObjectPtr)&local_720);
        pUVar6 = FWeakObjectPtr::Get(&local_760);
        local_740 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)&pUVar6[0x13].field_0x18;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14bb01164:
          if ((ADS_MainCharacter *)local_740.Handle != (ADS_MainCharacter *)0x0) {
            pUVar9 = Z_Construct_UClass_ADS_MainCharacter_NoRegister();
            bVar4 = FObjectPtr::IsA((FObjectPtr *)&local_740,pUVar9);
            if (bVar4) {
              this_04 = local_740;
            }
          }
        }
        else if ((ADS_MainCharacter *)local_740.Handle != (ADS_MainCharacter *)0x0) {
          UE::GC::MarkAsReachable(local_740.Handle);
          goto LAB_14bb01164;
        }
        if ((ADS_MainCharacter *)this_04.Handle != (ADS_MainCharacter *)0x0) {
          pUVar6 = FWeakObjectPtr::Get(&local_760);
          pdVar10 = (double *)(**(code **)(*(longlong *)pUVar6 + 0x7a8))(pUVar6,local_6d0);
          local_718 = *pdVar10;
          dStack_710 = pdVar10[1];
          local_708 = pdVar10[2];
          TVar11 = ADS_MainCharacter::GetCameraBoom((ADS_MainCharacter *)this_04.Handle);
                    /* WARNING: Load size is inaccurate */
          local_750 = *TVar11.WeakPtr;
        }
        pUVar6 = FWeakObjectPtr::Get(&local_760);
        (**(code **)(*(longlong *)pUVar6 + 0x7d8))(pUVar6,this_01);
        this_02 = (AController *)FWeakObjectPtr::Get(&local_760);
        AController::Possess(this_02,(APawn *)this_01);
        if ((ADS_MainCharacter *)this_04.Handle != (ADS_MainCharacter *)0x0) {
          pUVar6 = FWeakObjectPtr::Get(&local_760);
          (**(code **)(*(longlong *)pUVar6 + 0x7b0))(pUVar6,&local_718);
          this_03 = (UDS_SpringArmComponent *)FWeakObjectPtr::Get(&local_728);
          UDS_SpringArmComponent::CopyFromOtherSpringArm
                    (this_03,(TWeakObjectPtr<UDS_SpringArmComponent,FWeakObjectPtr>)local_750);
        }
      }
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_5f8);
  if ((void *)local_5f8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_5f8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5f8);
  pFVar13 = (FScriptContainerElement *)local_6b8._16_8_;
LAB_14bb012e1:
  if (pFVar13 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar13);
  }
  return;
}

// Created @ 14bb014b0

void __thiscall UDS_EntityManager::Created(UDS_EntityManager *this)

{
  *(undefined1 *)&this->_padding_ = 0;
  return;
}

// DestroyMainCharacter @ 14bb027f0

void __thiscall UDS_EntityManager::DestroyMainCharacter(UDS_EntityManager *this)

{
  ulong64 uVar1;
  
  uVar1 = GetCurrentMainCharEntityID(this,true);
  RemoveEntity(this,uVar1,false);
  return;
}

// Destroyed @ 14bb02b10

void __thiscall UDS_EntityManager::Destroyed(UDS_EntityManager *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014bb02b13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2d0))();
  return;
}

// FindEntity @ 14bb09380

TWeakObjectPtr<AActor,FWeakObjectPtr> __thiscall
UDS_EntityManager::FindEntity(UDS_EntityManager *this,ulong64 param_1)

{
  longlong lVar1;
  int iVar2;
  FWeakObjectPtr *pFVar3;
  undefined1 *puVar4;
  int in_R8D;
  int in_register_00000084;
  undefined8 local_res8 [4];
  
  if (*(int *)&(this->EntityMap).field_0x8 != *(int *)&(this->EntityMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->EntityMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->EntityMap).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->EntityMap).field_0x48 - 1U &
                              in_register_00000084 * 0x17 + in_R8D) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->EntityMap;
      do {
        if (*(longlong *)(lVar1 + (longlong)iVar2 * 0x18) == CONCAT44(in_register_00000084,in_R8D))
        {
          pFVar3 = &TMapBase<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>_>
                    ::FindChecked((TMapBase<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>_>
                                   *)&this->EntityMap,CONCAT44(in_register_00000084,in_R8D))->
                    WeakPtr;
          *(FWeakObjectPtr *)param_1 = *pFVar3;
          return (TWeakObjectPtr<AActor,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
        }
        iVar2 = *(int *)(lVar1 + 0x10 + (longlong)iVar2 * 0x18);
      } while (iVar2 != -1);
    }
  }
  *(undefined8 *)param_1 = 0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_res8);
  return (TWeakObjectPtr<AActor,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// FindEntityBase @ 14bb09430

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FDS_EntityBase * __thiscall
UDS_EntityManager::FindEntityBase(UDS_EntityManager *this,ulong64 param_1)

{
  longlong lVar1;
  int iVar2;
  FWeakObjectPtr *pFVar3;
  FDS_EntityBase *pFVar4;
  undefined1 *puVar5;
  
  if (*(int *)&(this->EntityMap).field_0x8 != *(int *)&(this->EntityMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->EntityMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->EntityMap).field_0x38;
    }
    iVar2 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->EntityMap).field_0x48 - 1U &
                              (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->EntityMap;
      do {
        if (*(ulong64 *)(lVar1 + (longlong)iVar2 * 0x18) == param_1) {
          pFVar3 = &TMapBase<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>_>
                    ::FindChecked((TMapBase<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>_>
                                   *)&this->EntityMap,param_1)->WeakPtr;
          pFVar4 = FDS_EntityBase::GetEntityBaseFromActor
                             ((TWeakObjectPtr<AActor,FWeakObjectPtr>)*pFVar3);
          return pFVar4;
        }
        iVar2 = *(int *)(lVar1 + 0x10 + (longlong)iVar2 * 0x18);
      } while (iVar2 != -1);
    }
  }
  return (FDS_EntityBase *)0x0;
}

// GetActorClass @ 14bb09790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

UClass * __thiscall UDS_EntityManager::GetActorClass(UDS_EntityManager *this,FString *param_1)

{
  int iVar1;
  undefined4 uVar2;
  UDS_LogManager *pUVar3;
  UClass *pUVar4;
  FString *pFVar5;
  size_t sVar6;
  undefined1 auStackY_1b8 [32];
  TStringView<wchar_t> local_188;
  TStringView<wchar_t> local_178;
  FSoftObjectPath local_168;
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_188.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  pUVar4 = (UClass *)0x0;
  iVar1 = (param_1->Data).ArrayNum;
  local_168.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_168.AssetPath.PackageName.Number = 0;
  local_168.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_168.AssetPath.AssetName.Number = 0;
  local_168.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_178.Size = 0;
  }
  local_168.SubPathString.Data.ArrayNum = 0;
  local_168.SubPathString.Data.ArrayMax = 0;
  local_188.Size = local_178.Size;
  local_178._12_4_ = local_188._12_4_;
  local_178.DataPtr = local_188.DataPtr;
  FSoftObjectPath::SetPath(&local_168,&local_178);
  if (local_168.AssetPath.PackageName == (FName)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_EntityManager::GetActorClass",0x20,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x47d,L"actorClassPath is invalid");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    goto LAB_14bb09947;
  }
  pUVar4 = FSoftClassPath::ResolveClass((FSoftClassPath *)&local_168);
  if (pUVar4 != (UClass *)0x0) goto LAB_14bb09947;
  if (local_168.AssetPath.PackageName == (FName)0x0) {
    pUVar4 = (UClass *)0x0;
    goto LAB_14bb09947;
  }
  local_178.DataPtr = (wchar_t *)0x0;
  local_178._8_8_ = local_178._8_8_ & 0xffffffff00000000;
  pFVar5 = FSoftObjectPath::ToString(&local_168,&local_148);
  if ((pFVar5->Data).ArrayNum == 0) {
    local_188.DataPtr = L"";
LAB_14bb098ec:
    sVar6 = wcslen(local_188.DataPtr);
    uVar2 = (undefined4)sVar6;
  }
  else {
    local_188.DataPtr = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    uVar2 = 0;
    if ((FScriptContainerElement *)local_188.DataPtr != (FScriptContainerElement *)0x0)
    goto LAB_14bb098ec;
  }
  local_188.Size = uVar2;
  pUVar4 = Z_Construct_UClass_AActor_NoRegister();
  pUVar4 = StaticLoadClass(pUVar4,(UObject *)0x0,&local_188,&local_178,0,(UPackageMap *)0x0);
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
LAB_14bb09947:
  if (local_168.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.SubPathString.Data.AllocatorInstance.Data);
  }
  return pUVar4;
}

// GetAllEntityList @ 14bb09990

void __thiscall
UDS_EntityManager::GetAllEntityList
          (UDS_EntityManager *this,TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 == &this->EntityList) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = (this->EntityList).ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar1,&param_1->AllocatorInstance,&param_1->ArrayNum,&param_1->ArrayMax);
    memcpy((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8,
           (this->EntityList).AllocatorInstance.Data,(longlong)iVar1 << 3);
  }
  return;
}

// GetCurrentMainCharEntityBase @ 14bb09f70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FDS_EntityBase * __thiscall
UDS_EntityManager::GetCurrentMainCharEntityBase(UDS_EntityManager *this,bool param_1)

{
  ulong64 uVar1;
  FDS_EntityBase *pFVar2;
  
  uVar1 = GetCurrentMainCharEntityID(this,param_1);
  pFVar2 = FindEntityBase(this,uVar1);
  return pFVar2;
}

// GetCurrentMainCharEntityID @ 14bb09fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
UDS_EntityManager::GetCurrentMainCharEntityID(UDS_EntityManager *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  ulong64 uVar4;
  UObject *pUVar5;
  undefined1 auStackY_298 [32];
  FWeakObjectPtr local_268 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_298;
  if (UDS_PlayerData::MainPlayerEntityID == 0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_258._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_258,"UDS_EntityManager::GetCurrentMainCharEntityID",0x2d,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Display,local_258.Ptr,0x348,L"mainPlayerDataKey is 0");
      if ((void *)local_258._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_258._padding_);
        return 0;
      }
    }
  }
  else {
    UDS_PlayerData::GetData((ulong64)local_268,UDS_PlayerData::MainPlayerEntityID,false);
    bVar2 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)local_268,(void *)0x0);
    if (!bVar2) {
      pUVar5 = FWeakObjectPtr::Get(local_268);
      return *(ulong64 *)&pUVar5[8].field_0x10;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_EntityManager::GetCurrentMainCharEntityID",0x2d,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x34f,L"Failed to get PlayerDataSet.")
      ;
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    if ((param_1) &&
       (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_2787795673343327408>,true,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_EntityManager.cpp"
                           ,0x350,"!bShouldCheckEnsure || false"), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
  }
  return 0;
}

// GetDelationTime @ 14bb0a170

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

float __thiscall UDS_EntityManager::GetDelationTime(UDS_EntityManager *this,ulong64 *param_1)

{
  EDS_EntityType EVar1;
  int iVar2;
  bool bVar3;
  FDS_EntityBase *pFVar4;
  UObject *pUVar5;
  FDS_StuffBaseTableRow *pFVar6;
  FDS_StuffGatherTableRow *pFVar7;
  FDS_NpcBaseTableRow *pFVar8;
  FWeakObjectPtr local_res18 [2];
  
  pFVar4 = FindEntityBase(this,*param_1);
  if (pFVar4 != (FDS_EntityBase *)0x0) {
    UDS_DeathData::GetData((ulong64)local_res18,*param_1,false);
    bVar3 = TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr> *)local_res18,(void *)0x0);
    if (!bVar3) {
      pUVar5 = FWeakObjectPtr::Get(local_res18);
      iVar2 = *(int *)&pUVar5[3].field_0x14;
      if (iVar2 != -2) {
        EVar1 = pFVar4->EntityType;
        if (EVar1 != MainCharacter) {
          if (EVar1 == NetCharacter) {
            return 0.0;
          }
          if (EVar1 == NPC) {
            pFVar8 = FDS_NpcBaseTableRow::Get(pFVar4->TableID,true);
            if (pFVar8 != (FDS_NpcBaseTableRow *)0x0) {
              if (iVar2 == 2) {
                return pFVar8->DisappearClearTime;
              }
              return pFVar8->BodyClearTime;
            }
          }
          else if (((EVar1 == StuffGather) &&
                   (pFVar6 = FDS_StuffBaseTableRow::Get(pFVar4->TableID,true),
                   pFVar6 != (FDS_StuffBaseTableRow *)0x0)) &&
                  (pFVar7 = FDS_StuffGatherTableRow::Get((longlong)pFVar6->ID_StuffValue,true),
                  pFVar7 != (FDS_StuffGatherTableRow *)0x0)) {
            return pFVar7->DieTime;
          }
        }
        return __real_40a00000;
      }
    }
  }
  return 0.0;
}

// GetEntityIDArray @ 14bb0a570

TArray<unsigned___int64,TSizedDefaultAllocator<32>_> * __thiscall
UDS_EntityManager::GetEntityIDArray
          (UDS_EntityManager *this,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<EDS_EntityType,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement FVar2;
  int iVar3;
  undefined1 *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar9;
  undefined1 *puVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res10 [8];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar11 = (param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  pFVar1 = pFVar11 + iVar3;
LAB_14bb0a5b2:
  do {
    if (param_1->ArrayNum != iVar3) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<enum_EDS_EntityType,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar11 == pFVar1) {
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      return __return_storage_ptr__;
    }
    FVar2 = *pFVar11;
    if (*(int *)&(this->EntityTypeMap).field_0x8 != *(int *)&(this->EntityTypeMap).field_0x34) {
      puVar4 = *(undefined1 **)&(this->EntityTypeMap).field_0x40;
      puVar10 = &(this->EntityTypeMap).field_0x38;
      if (puVar4 != (undefined1 *)0x0) {
        puVar10 = puVar4;
      }
      iVar7 = *(int *)(puVar10 +
                      ((ulonglong)(*(int *)&(this->EntityTypeMap).field_0x48 - 1) &
                      (ulonglong)(byte)FVar2) * 4);
      if (iVar7 != -1) {
        do {
          if (*(FScriptContainerElement *)
               ((longlong)iVar7 * 0x20 + *(longlong *)&this->EntityTypeMap) == FVar2) {
            pTVar9 = TMapBase<enum_EDS_EntityType,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_EntityType,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>_>
                     ::FindChecked(&this->EntityTypeMap,(EDS_EntityType)FVar2);
            if (__return_storage_ptr__ == pTVar9) {
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(void*)this != (void*)&Source",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x96e,L"");
              if (bVar6) {
                pcVar5 = (code *)swi(3);
                pTVar9 = (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
                return pTVar9;
              }
            }
            iVar7 = pTVar9->ArrayNum;
            if (iVar7 != 0) {
              iVar8 = UE::Core::Private::
                      ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (8,8,iVar7,&__return_storage_ptr__->AllocatorInstance,
                                 &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax
                                );
              memcpy((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8,
                     (pTVar9->AllocatorInstance).Data,(longlong)iVar7 << 3);
            }
            goto LAB_14bb0a6c1;
          }
          iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + *(longlong *)&this->EntityTypeMap);
        } while (iVar7 != -1);
        pFVar11 = pFVar11 + 1;
        goto LAB_14bb0a5b2;
      }
    }
LAB_14bb0a6c1:
    pFVar11 = pFVar11 + 1;
  } while( true );
}

// GetEntityIDArray @ 14bb0a710

TArray<unsigned___int64,TSizedDefaultAllocator<32>_> * __thiscall
UDS_EntityManager::GetEntityIDArray
          (UDS_EntityManager *this,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          EDS_EntityType param_1)

{
  longlong lVar1;
  FScriptContainerElement *_Src;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined1 *puVar3;
  int iVar4;
  
  if (*(int *)&(this->EntityTypeMap).field_0x8 != *(int *)&(this->EntityTypeMap).field_0x34) {
    puVar3 = *(undefined1 **)&(this->EntityTypeMap).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->EntityTypeMap).field_0x38;
    }
    iVar4 = *(int *)(puVar3 + ((ulonglong)(*(int *)&(this->EntityTypeMap).field_0x48 - 1) &
                              (ulonglong)param_1) * 4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&this->EntityTypeMap;
      do {
        if (*(EDS_EntityType *)((longlong)iVar4 * 0x20 + lVar1) == param_1) {
          if (iVar4 != -1) {
            pTVar2 = TMapBase<enum_EDS_EntityType,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_EntityType,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>_>
                     ::FindChecked(&this->EntityTypeMap,param_1);
            (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
            iVar4 = pTVar2->ArrayNum;
            _Src = (pTVar2->AllocatorInstance).Data;
            __return_storage_ptr__->ArrayNum = iVar4;
            if (iVar4 != 0) {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar4,0,&__return_storage_ptr__->AllocatorInstance,iVar4,
                         &__return_storage_ptr__->ArrayMax);
              memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar4 << 3);
              return __return_storage_ptr__;
            }
            __return_storage_ptr__->ArrayMax = 0;
            return __return_storage_ptr__;
          }
          break;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + lVar1);
      } while (iVar4 != -1);
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetInst @ 14bb0b800

UDS_EntityManager * __cdecl UDS_EntityManager::GetInst(void)

{
  int iVar1;
  UDS_GameInstance *this;
  UClass *pUVar2;
  UDS_EntityManager *pUVar3;
  
  this = UDS_GameInstance::GetInst();
  if (this == (UDS_GameInstance *)0x0) {
    return (UDS_EntityManager *)0x0;
  }
  pUVar2 = Z_Construct_UClass_UDS_EntityManager_NoRegister();
  pUVar3 = (UDS_EntityManager *)UDS_GameInstance::GetManager(this,(FName)pUVar2->_padding_);
  if (pUVar3 != (UDS_EntityManager *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_EntityManager_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return pUVar3;
    }
  }
  return (UDS_EntityManager *)0x0;
}

// Init @ 14bb13520

void __thiscall UDS_EntityManager::Init(UDS_EntityManager *this)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &ADS_MainCharacter::MainPlayerSpawnFinishedEventDelegate,this);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UDS_EntityManager>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &ADS_MainCharacter::MainPlayerSpawnFinishedEventDelegate,
             (UDS_EntityManager *)&stack0x00000010,(pmf_9f5f9e81)this);
  return;
}

// IsEntityExist @ 14bb154f0

bool __thiscall UDS_EntityManager::IsEntityExist(UDS_EntityManager *this,ulong64 param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  if (*(int *)&(this->EntityMap).field_0x8 != *(int *)&(this->EntityMap).field_0x34) {
    puVar2 = *(undefined1 **)&(this->EntityMap).field_0x40;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &(this->EntityMap).field_0x38;
    }
    iVar1 = *(int *)(puVar2 + (ulonglong)
                              (*(int *)&(this->EntityMap).field_0x48 - 1U &
                              (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulong64 *)(*(longlong *)&this->EntityMap + (longlong)iVar1 * 0x18) == param_1)
        goto LAB_14bb1556c;
        iVar1 = *(int *)(*(longlong *)&this->EntityMap + 0x10 + (longlong)iVar1 * 0x18);
      } while (iVar1 != -1);
    }
  }
  iVar1 = -1;
LAB_14bb1556c:
  return iVar1 != -1;
}

// IsSpawnedEntity @ 14bb17130

bool __thiscall UDS_EntityManager::IsSpawnedEntity(UDS_EntityManager *this,ulong64 param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  FWeakObjectPtr *pFVar4;
  undefined1 *puVar5;
  FWeakObjectPtr local_res8;
  undefined8 local_res10 [3];
  
  if (*(int *)&(this->EntityMap).field_0x8 != *(int *)&(this->EntityMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->EntityMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->EntityMap).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->EntityMap).field_0x48 - 1U &
                              (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->EntityMap;
      do {
        if (*(ulong64 *)(lVar1 + (longlong)iVar3 * 0x18) == param_1) {
          pFVar4 = &TMapBase<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>_>
                    ::FindChecked((TMapBase<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>_>
                                   *)&this->EntityMap,param_1)->WeakPtr;
          local_res8 = *pFVar4;
          bVar2 = FWeakObjectPtr::IsValid(&local_res8);
          return bVar2;
        }
        iVar3 = *(int *)(lVar1 + 0x10 + (longlong)iVar3 * 0x18);
      } while (iVar3 != -1);
    }
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  return bVar2;
}

// NotifyLevelSequencePlayingOnSpawn @ 14bb1a5b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_EntityManager::NotifyLevelSequencePlayingOnSpawn
          (UDS_EntityManager *this,FDS_EntityBase *param_1)

{
  undefined1 local_res10 [24];
  
  if (param_1 != (FDS_EntityBase *)0x0) {
    local_res10[0] = UDS_IngameState::IsLevelSequencePlaying();
    (**(code **)(param_1->_padding_ + 0x1a0))(param_1,local_res10);
  }
  return;
}

// NotifyNpcTalkingOnSpawn @ 14bb1a5f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_EntityManager::NotifyNpcTalkingOnSpawn(UDS_EntityManager *this,FDS_EntityBase *param_1)

{
  undefined1 local_res10 [24];
  
  if ((param_1 != (FDS_EntityBase *)0x0) && (param_1->EntityType != Transport)) {
    local_res10[0] = UDS_IngameState::IsNpcTalking();
    (**(code **)(param_1->_padding_ + 0x198))(param_1,local_res10);
  }
  return;
}

// OnChangedCharacterEvent @ 14bb1bba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_EntityManager::OnChangedCharacterEvent
          (UDS_EntityManager *this,FDS_EntityBase *param_1,FDS_EntityBase *param_2)

{
  bool bVar1;
  UDS_CharStatusData *pUVar2;
  FDS_StatusInfo *pFVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_188 [32];
  undefined1 local_158 [272];
  FDS_StatusInfo *local_48;
  wchar_t *local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (param_1 != (FDS_EntityBase *)0x0) {
    FDS_EntityBase::GetCharStatusData(param_1);
    bVar1 = TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> *)local_158,(void *)0x0);
    if (!bVar1) {
      pUVar2 = (UDS_CharStatusData *)FWeakObjectPtr::Get((FWeakObjectPtr *)local_158);
      pFVar3 = UDS_CharStatusData::GetStatusInfo(pUVar2,NormalViewRangeAdd);
      if (pFVar3 != (FDS_StatusInfo *)0x0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &pFVar3->ChangeMaxValueDelegate,this);
      }
    }
  }
  if (param_2 != (FDS_EntityBase *)0x0) {
    FDS_EntityBase::GetCharStatusData(param_2);
    bVar1 = TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> *)(local_158 + 8),
                       (void *)0x0);
    if (!bVar1) {
      pUVar2 = (UDS_CharStatusData *)FWeakObjectPtr::Get((FWeakObjectPtr *)(local_158 + 8));
      pFVar3 = UDS_CharStatusData::GetStatusInfo(pUVar2,NormalViewRangeAdd);
      if (pFVar3 == (FDS_StatusInfo *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 != (UDS_LogManager *)0x0) {
          pUVar4 = UDS_LogManager::GetInst();
          local_48 = pFVar3;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_158 + 0x10),
                     "UDS_EntityManager::OnChangedCharacterEvent",0x2a,Yes);
          UDS_LogManager::PrintLog(pUVar4,1,Warning,local_40,0xff,L"statusInfo is nullptr.");
          if (local_48 != (FDS_StatusInfo *)0x0) {
            FMemory::Free(local_48);
          }
        }
      }
      else {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &pFVar3->ChangeMaxValueDelegate,this);
        TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>::
        AddUObject<UDS_EntityManager>
                  ((TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy> *
                   )&pFVar3->ChangeMaxValueDelegate,(UDS_EntityManager *)local_158,
                   (pmf_ab11550a)this);
        this->EntityViewRangeAdd = pFVar3->MaxValue;
      }
    }
  }
  return;
}

// OnChangedEntityViewRange @ 14bb1bfa0

void __thiscall UDS_EntityManager::OnChangedEntityViewRange(UDS_EntityManager *this,float param_1)

{
  this->EntityViewRangeAdd = param_1;
  return;
}

// OnChangedLevelSequencePlaying @ 14bb1c640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_EntityManager::OnChangedLevelSequencePlaying
          (UDS_EntityManager *this,bool *param_1,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FDS_EntityBase *pFVar6;
  ulonglong uVar7;
  uint uVar8;
  FWeakObjectPtr local_res8;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  TSet<TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              *)&this->EntityMap);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar7 = local_78._24_8_ >> 0x20;
  uVar8 = local_78._28_4_;
  local_18 = (TSet<TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              *)&this->EntityMap;
  if ((int)uVar8 < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      pFVar5 = (param_2->AllocatorInstance).Data;
      pFVar1 = pFVar5 + (longlong)param_2->ArrayNum * 8;
      if (pFVar5 != pFVar1) {
        do {
          if (*(longlong *)pFVar5 == *(longlong *)(*local_48 + (longlong)(int)uVar7 * 0x18))
          goto LAB_14bb1c730;
          pFVar5 = pFVar5 + 8;
        } while (pFVar5 != pFVar1);
      }
      local_res8 = *(FWeakObjectPtr *)(*local_48 + 8 + (longlong)(int)uVar8 * 0x18);
      bVar3 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)&local_res8,(void *)0x0);
      if ((!bVar3) &&
         (pFVar6 = FDS_EntityBase::GetEntityBaseFromActor
                             ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res8),
         pFVar6 != (FDS_EntityBase *)0x0)) {
        (**(code **)(pFVar6->_padding_ + 0x1a0))(pFVar6,param_1);
      }
LAB_14bb1c730:
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar7 = (ulonglong)uStack_2c;
      uVar8 = uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar8 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar8 < 4) {
        iVar4 = 1;
      }
      else {
        uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar4 = 1 << ((byte)lVar2 & 0x1f);
      }
      if (((0 < (int)uVar8) && (local_18->HashSize < iVar4)) || (iVar4 < local_18->HashSize)) {
        local_18->HashSize = iVar4;
        TSet<TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  return;
}

// OnChangedNpcTalking @ 14bb1ca20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_EntityManager::OnChangedNpcTalking
          (UDS_EntityManager *this,bool *param_1,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FDS_EntityBase *pFVar6;
  ulonglong uVar7;
  uint uVar8;
  FWeakObjectPtr local_res8;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  TSet<TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              *)&this->EntityMap);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar7 = local_78._24_8_ >> 0x20;
  uVar8 = local_78._28_4_;
  local_18 = (TSet<TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              *)&this->EntityMap;
  if ((int)uVar8 < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      pFVar5 = (param_2->AllocatorInstance).Data;
      pFVar1 = pFVar5 + (longlong)param_2->ArrayNum * 8;
      if (pFVar5 != pFVar1) {
        do {
          if (*(longlong *)pFVar5 == *(longlong *)(*local_48 + (longlong)(int)uVar7 * 0x18))
          goto LAB_14bb1cb10;
          pFVar5 = pFVar5 + 8;
        } while (pFVar5 != pFVar1);
      }
      local_res8 = *(FWeakObjectPtr *)(*local_48 + 8 + (longlong)(int)uVar8 * 0x18);
      bVar3 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)&local_res8,(void *)0x0);
      if ((!bVar3) &&
         (pFVar6 = FDS_EntityBase::GetEntityBaseFromActor
                             ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res8),
         pFVar6 != (FDS_EntityBase *)0x0)) {
        (**(code **)(pFVar6->_padding_ + 0x198))(pFVar6,param_1);
      }
LAB_14bb1cb10:
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar7 = (ulonglong)uStack_2c;
      uVar8 = uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar8 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar8 < 4) {
        iVar4 = 1;
      }
      else {
        uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar4 = 1 << ((byte)lVar2 & 0x1f);
      }
      if (((0 < (int)uVar8) && (local_18->HashSize < iVar4)) || (iVar4 < local_18->HashSize)) {
        local_18->HashSize = iVar4;
        TSet<TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  return;
}

// OnDummyNetPlayerSpawnInit @ 14bb1da40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_EntityManager::OnDummyNetPlayerSpawnInit(FDS_SpawnInfo *param_1,SpawnCharacterResponse *param_2)

{
  VectorF *pVVar1;
  code *pcVar2;
  bool bVar3;
  UDS_DataManager *pUVar4;
  UDS_LogManager *pUVar5;
  UDS_PlayerData *this;
  UDS_CharData *this_00;
  UDS_CharInfoData *this_01;
  UDS_CharStatusData *this_02;
  UDS_PKDataSet *this_03;
  VectorF *pVVar6;
  UObject *pUVar7;
  UObject *pUVar8;
  undefined1 auStackY_1a8 [32];
  bool local_178 [4];
  float local_174;
  FWeakObjectPtr local_170;
  FWeakObjectPtr local_168;
  FWeakObjectPtr local_160;
  FWeakObjectPtr local_158;
  FWeakObjectPtr local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  pUVar4 = UDS_DataManager::GetInst();
  if (pUVar4 == (UDS_DataManager *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_EntityManager::OnDummyNetPlayerSpawnInit",0x2c,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_148.Ptr,0x204,L"dataMng is nullptr.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    UDS_PlayerData::GetData((ulong64)&local_168,(param_2->_impl_).player_entity_,false);
    bVar3 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_168,(void *)0x0);
    if (bVar3) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2787795673343327730>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_EntityManager.cpp"
                         ,0x20e,"false");
      if (bVar3) {
code_r0x00014bb1dcb9:
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      this = (UDS_PlayerData *)FWeakObjectPtr::Get(&local_168);
      UDS_PlayerData::SetDataBySpawnCharacterResponse(this,param_2);
      UDS_CharData::GetData((ulong64)&local_170);
      bVar3 = TWeakObjectPtr<UDS_CharData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_CharData,FWeakObjectPtr> *)&local_170,(void *)0x0);
      if (bVar3) {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_2787795673343327725>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_EntityManager.cpp"
                           ,0x213,"false");
        if (bVar3) goto code_r0x00014bb1dcb9;
      }
      else {
        this_00 = (UDS_CharData *)FWeakObjectPtr::Get(&local_170);
        UDS_CharData::SetDataBySpawnCharacterResponse(this_00,param_2);
        UDS_CharInfoData::GetData((ulong64)&local_160);
        bVar3 = TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *)&local_160,(void *)0x0
                          );
        if (bVar3) {
          bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_2787795673343327719>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_EntityManager.cpp"
                             ,0x219,"false");
          if (bVar3) goto code_r0x00014bb1dcb9;
        }
        else {
          UDS_CharStatusData::GetData((ulong64)&local_158);
          bVar3 = TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> *)&local_158,
                             (void *)0x0);
          if (bVar3) {
            bVar3 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_2787795673343327716>,false,
                               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_EntityManager.cpp"
                               ,0x21c,"false");
            if (bVar3) goto code_r0x00014bb1dcb9;
          }
          else {
            TDS_DataSetGetter<UDS_PKDataSet>::Get((ulong64)&local_150);
            bVar3 = TWeakObjectPtr<UDS_PKDataSet,FWeakObjectPtr>::UEOpEquals
                              ((TWeakObjectPtr<UDS_PKDataSet,FWeakObjectPtr> *)&local_150,
                               (void *)0x0);
            if (bVar3) {
              bVar3 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_2787795673343327713>,false,
                                 "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_EntityManager.cpp"
                                 ,0x21f,"false");
              if (bVar3) goto code_r0x00014bb1dcb9;
            }
            else {
              this_01 = (UDS_CharInfoData *)FWeakObjectPtr::Get(&local_160);
              UDS_CharInfoData::SetDataBySpawnCharacterResponse(this_01,param_2);
              this_02 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&local_158);
              UDS_CharStatusData::UpdateSpawnCharacterResponse(this_02,param_2);
              this_03 = (UDS_PKDataSet *)FWeakObjectPtr::Get(&local_150);
              UDS_PKDataSet::UpdateSpawnCharacterResponse(this_03,param_2);
              pVVar1 = (param_2->_impl_).direction_;
              local_178[0] = false;
              pVVar6 = &_VectorF_default_instance_._instance;
              if (pVVar1 != (VectorF *)0x0) {
                pVVar6 = pVVar1;
              }
              local_174 = (pVVar6->_impl_).y_;
              pUVar7 = FWeakObjectPtr::Get(&local_170);
              pUVar8 = FWeakObjectPtr::Get(&local_168);
              FDS_SpawnService::AdjustSpawnTransform
                        (&param_1->SpawnTransform,(TVector<double> *)(pUVar8 + 7),
                         (float *)&pUVar7[4].field_0x8,&local_174,local_178);
            }
          }
        }
      }
    }
  }
  return;
}

// OnDummyTransportSpawnInit @ 14bb1dd90

void __cdecl
UDS_EntityManager::OnDummyTransportSpawnInit(FDS_SpawnInfo *param_1,SpawnTransportResponse *param_2)

{
  Vector *pVVar1;
  VectorF *pVVar2;
  code *pcVar3;
  bool bVar4;
  UDS_TransportData *this;
  VectorF *pVVar5;
  UObject *pUVar6;
  Vector *pVVar7;
  bool local_res8 [8];
  float local_res18 [2];
  FWeakObjectPtr local_res20;
  TVector<double>_u_0 local_28;
  
  UDS_TransportData::GetData((ulong64)&local_res20,param_1->EntityID,false);
  bVar4 = TWeakObjectPtr<UDS_TransportData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_TransportData,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2787795673343327635>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_EntityManager.cpp"
                       ,0x26d,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    this = (UDS_TransportData *)FWeakObjectPtr::Get(&local_res20);
    UDS_TransportData::SetSpawnTransportResponseData(this,param_2);
    pVVar1 = (param_2->_impl_).position_;
    local_28._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_28._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    pVVar7 = &_Vector_default_instance_._instance;
    if (pVVar1 != (Vector *)0x0) {
      pVVar7 = pVVar1;
    }
    local_28._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    DS_Util::SetFVector((TVector<double> *)&local_28._s_0,pVVar7);
    pVVar2 = (param_2->_impl_).direction_;
    local_res8[0] = false;
    pVVar5 = &_VectorF_default_instance_._instance;
    if (pVVar2 != (VectorF *)0x0) {
      pVVar5 = pVVar2;
    }
    local_res18[0] = (pVVar5->_impl_).y_;
    pUVar6 = FWeakObjectPtr::Get(&local_res20);
    FDS_SpawnService::AdjustSpawnTransform
              (&param_1->SpawnTransform,(TVector<double> *)&local_28._s_0,
               (float *)&pUVar6[4].field_0x8,local_res18,local_res8);
  }
  return;
}

// RegistLocalEntity @ 14bb2cc90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_EntityManager::RegistLocalEntity
          (UDS_EntityManager *this,FDS_EntityBase *param_1,int param_2,EDS_EntityType param_3,
          bool param_4)

{
  code *pcVar1;
  bool bVar2;
  UDS_DataManager *this_00;
  FWeakObjectPtr *this_01;
  AActor *pAVar3;
  FDS_SpawnInfo *pFVar4;
  ulong64 uVar5;
  undefined1 auStack_248 [32];
  undefined1 local_218;
  undefined1 local_217 [3];
  undefined1 local_214 [12];
  FDS_SpawnInfo local_208;
  undefined1 local_128 [192];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_248;
  this_00 = UDS_DataManager::GetInst();
  if (this_00 == (UDS_DataManager *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_EntityManager.cpp"
                       ,0x283,L"");
    if (bVar2) {
code_r0x00014bb2cd57:
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    uVar5 = (ulong64)(this->CreateEntityIndex + 100);
    this->CreateEntityIndex = this->CreateEntityIndex + 1;
    bVar2 = UDS_DataManager::CreateDataSetContainer(this_00,uVar5,param_3,param_2,param_4);
    if (bVar2) {
      FDS_SpawnInfo::FDS_SpawnInfo((FDS_SpawnInfo *)local_128);
      local_128._0_8_ = uVar5;
      local_128[8] = param_3;
      local_128._12_4_ = param_2;
      (**(code **)(param_1->_padding_ + 0x20))(param_1,local_128);
      this_01 = (FWeakObjectPtr *)(**(code **)(param_1->_padding_ + 0x150))(param_1,local_214);
      pAVar3 = (AActor *)FWeakObjectPtr::Get(this_01);
      pFVar4 = FDS_SpawnInfo::FDS_SpawnInfo(&local_208,(FDS_SpawnInfo *)local_128);
      AddEntity(this,pFVar4,pAVar3,param_4);
      if (param_1->EntityType != Transport) {
        local_218 = UDS_IngameState::IsNpcTalking();
        (**(code **)(param_1->_padding_ + 0x198))(param_1,&local_218);
      }
      local_217[0] = UDS_IngameState::IsLevelSequencePlaying();
      (**(code **)(param_1->_padding_ + 0x1a0))(param_1,local_217);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
      if ((void *)local_68._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_68._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_68);
      if ((FScriptContainerElement *)local_128._16_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_128._16_8_);
      }
    }
    else {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_EntityManager.cpp"
                         ,0x28c,L"");
      if (bVar2) goto code_r0x00014bb2cd57;
    }
  }
  return;
}

// RemoveDelayEntity @ 14bb311a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_EntityManager::RemoveDelayEntity(UDS_EntityManager *this,ulong64 param_1,bool param_2)

{
  FDS_EntityBase *pFVar1;
  float fVar2;
  ulong64 local_res10 [3];
  
  local_res10[0] = param_1;
  fVar2 = GetDelationTime(this,local_res10);
  UDS_GameInstance::GetGameInstanceWorld();
  pFVar1 = FindEntityBase(this,param_1);
  if (pFVar1 != (FDS_EntityBase *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x138))(pFVar1,fVar2);
  }
  return;
}

// RemoveEntity @ 14bb31240

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_EntityManager::RemoveEntity
          (UDS_EntityManager *this,UWorld *param_1,ulong64 param_2,float param_3)

{
  FDS_EntityBase *pFVar1;
  
  pFVar1 = FindEntityBase(this,param_2);
  if (pFVar1 != (FDS_EntityBase *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x138))(pFVar1,param_3);
  }
  return;
}

// RemoveEntity @ 14bb31280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_EntityManager::RemoveEntity(UDS_EntityManager *this,ulong64 param_1,bool param_2)

{
  TMap<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>_>
  *this_00;
  TMap<EDS_EntityType,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_EntityType,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>_>
  *this_01;
  EDS_EntityType EVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  UDS_LogManager *pUVar7;
  FDS_EntityBase *pFVar8;
  FWeakObjectPtr *pFVar9;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar10;
  UDS_DataManager *this_02;
  undefined1 *puVar11;
  undefined1 auStackY_1c8 [32];
  uint uVar12;
  wchar_t *pwVar13;
  EDS_EntityType local_188 [8];
  ulong64 local_180;
  FWeakObjectPtr local_178;
  ulong64 local_170;
  AActor *local_168 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  iVar6 = *(int *)&(this->DonotDestroyMap).field_0x8;
  iVar2 = *(int *)&(this->DonotDestroyMap).field_0x34;
  iVar5 = (int)(param_1 >> 0x20);
  local_180 = param_1;
  if (param_2) {
    local_170 = param_1;
    if (iVar6 != iVar2) {
      TSet<TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
      ::RemoveImpl<unsigned___int64>
                ((TSet<TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                  *)&this->DonotDestroyMap,iVar5 * 0x17 + (int)param_1,&local_170);
    }
  }
  else if (iVar6 != iVar2) {
    puVar11 = *(undefined1 **)&(this->DonotDestroyMap).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->DonotDestroyMap).field_0x38;
    }
    iVar6 = *(int *)(puVar11 +
                    (ulonglong)
                    (*(int *)&(this->DonotDestroyMap).field_0x48 - 1U & iVar5 * 0x17 + (int)param_1)
                    * 4);
    if (iVar6 != -1) {
      lVar3 = *(longlong *)&(this->DonotDestroyMap).field_0x0;
      do {
        if (*(ulong64 *)(lVar3 + (longlong)iVar6 * 0x18) == param_1) {
          return;
        }
        iVar6 = *(int *)(lVar3 + 0x10 + (longlong)iVar6 * 0x18);
      } while (iVar6 != -1);
    }
  }
  bVar4 = UDS_GameInstance::IsPrintEntityVisble();
  if ((bVar4) && (pUVar7 = UDS_LogManager::GetInst(), pUVar7 != (UDS_LogManager *)0x0)) {
    pUVar7 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_EntityManager::RemoveEntity",0x1f,Yes);
    UDS_LogManager::PrintLog(pUVar7,1,Display,local_158.Ptr,0x3a8,L"Remove Entity: %lu");
    if ((void *)local_158._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_158._padding_);
    }
  }
  this_00 = &this->EntityMap;
  if (*(int *)&(this->EntityMap).field_0x8 != *(int *)&(this->EntityMap).field_0x34) {
    puVar11 = *(undefined1 **)&(this->EntityMap).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->EntityMap).field_0x38;
    }
    iVar6 = *(int *)(puVar11 +
                    ((local_180 >> 0x20) * 0x17 + local_180 &
                    (ulonglong)(*(int *)&(this->EntityMap).field_0x48 - 1)) * 4);
    if (iVar6 != -1) {
      do {
        if (*(ulonglong *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar6 * 0x18) == local_180)
        {
          pFVar9 = &TMapBase<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>_>
                    ::FindChecked((TMapBase<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>_>
                                   *)this_00,local_180)->WeakPtr;
          local_178 = *pFVar9;
          goto LAB_14bb31462;
        }
        iVar6 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar6 * 0x18);
      } while (iVar6 != -1);
    }
  }
  local_178.ObjectIndex = 0;
  local_178.ObjectSerialNumber = 0;
  local_170 = 0;
  FWeakObjectPtr::operator=(&local_178,(FObjectPtr)&local_170);
LAB_14bb31462:
  pFVar8 = FindEntityBase(this,local_180);
  bVar4 = FWeakObjectPtr::IsValid(&local_178);
  if (bVar4) {
    if (pFVar8 != (FDS_EntityBase *)0x0) {
      (**(code **)(pFVar8->_padding_ + 0x140))(pFVar8);
      TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>::
      Broadcast((TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
                 *)&this->OnRemoveEntityEvent,&local_180);
      local_168[0] = (AActor *)FWeakObjectPtr::Get(&local_178);
      AActor::Destroy(local_168[0],false,true);
      TArray<AActor_*,TSizedDefaultAllocator<32>_>::Remove(&this->EntityList,local_168);
      local_170 = local_180;
      if (*(int *)&(this->EntityMap).field_0x8 != *(int *)&(this->EntityMap).field_0x34) {
        TSet<TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
        ::RemoveImpl<unsigned___int64>
                  ((TSet<TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                    *)this_00,(int)(local_180 >> 0x20) * 0x17 + (int)local_180,&local_170);
      }
      EVar1 = pFVar8->EntityType;
      this_01 = &this->EntityTypeMap;
      if (*(int *)&(this->EntityTypeMap).field_0x8 != *(int *)&(this->EntityTypeMap).field_0x34) {
        puVar11 = *(undefined1 **)&(this->EntityTypeMap).field_0x40;
        if (puVar11 == (undefined1 *)0x0) {
          puVar11 = &(this->EntityTypeMap).field_0x38;
        }
        iVar6 = *(int *)(puVar11 +
                        ((ulonglong)(*(int *)&(this->EntityTypeMap).field_0x48 - 1) &
                        (ulonglong)EVar1) * 4);
        if (iVar6 != -1) {
          do {
            if (*(EDS_EntityType *)((longlong)iVar6 * 0x20 + *(longlong *)this_01) == EVar1) {
              pTVar10 = TMapBase<enum_EDS_EntityType,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_EntityType,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>_>
                        ::FindChecked(this_01,EVar1);
              TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::Remove(pTVar10,&local_180);
              break;
            }
            iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + *(longlong *)this_01);
          } while (iVar6 != -1);
        }
      }
      pTVar10 = TMapBase<enum_EDS_EntityType,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_EntityType,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>_>
                ::FindChecked(this_01,pFVar8->EntityType);
      if ((pTVar10->ArrayNum < 1) &&
         (local_188[0] = pFVar8->EntityType,
         *(int *)&(this->EntityTypeMap).field_0x8 != *(int *)&(this->EntityTypeMap).field_0x34)) {
        TSet<TTuple<enum_EDS_EntityType,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_EntityType,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::RemoveImpl<enum_EDS_EntityType>(this_01,(uint)local_188[0],local_188);
      }
      if (pFVar8->EntityType == MainCharacter) {
        return;
      }
      this_02 = UDS_DataManager::GetInst();
      if (this_02 == (UDS_DataManager *)0x0) {
        return;
      }
      UDS_DataManager::RemoveDataSetContainer(this_02,pFVar8->EntityID,param_2,false);
      return;
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar7 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_EntityManager::RemoveEntity",0x1f,Yes);
    pwVar13 = L"RemoveEntity Not Found EntityBase : %llu";
    uVar12 = 0x3b6;
  }
  else {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar7 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_EntityManager::RemoveEntity",0x1f,Yes);
    pwVar13 = L"RemoveEntity Not Found EntityActor : %llu";
    uVar12 = 0x3b0;
  }
  UDS_LogManager::PrintLog(pUVar7,1,Warning,local_158.Ptr,uVar12,pwVar13);
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  return;
}

// RemoveEntityList @ 14bb316e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_EntityManager::RemoveEntityList
          (UDS_EntityManager *this,UWorld *param_1,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ulong64 uVar3;
  code *pcVar4;
  bool bVar5;
  UDS_LogManager *pUVar6;
  FDS_EntityBase *pFVar7;
  FScriptContainerElement *pFVar8;
  float fVar9;
  undefined1 auStackY_1a8 [32];
  undefined1 local_178 [8];
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> local_170;
  ulong64 local_168 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if (*(int *)&(this->EntityMap).field_0x8 != *(int *)&(this->EntityMap).field_0x34) {
    FDS_EntityBase::GetMainPlayerEntityID(true);
    UDS_CharStateData::GetData((ulong64)&local_170);
    bVar5 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals(&local_170,(void *)0x0);
    if (bVar5) {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_EntityManager::RemoveEntityList",0x23,Yes);
        UDS_LogManager::PrintLog(pUVar6,1,Warning,local_158.Ptr,0x381,L"charStateData is nullptr.");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2787795673343327358>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_EntityManager.cpp"
                         ,0x382,"false");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      iVar2 = param_2->ArrayNum;
      pFVar8 = (param_2->AllocatorInstance).Data;
      pFVar1 = pFVar8 + (longlong)iVar2 * 8;
      while( true ) {
        if (param_2->ArrayNum != iVar2) {
          `TCheckedPointerIterator<unsigned___int64_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_178);
        }
        if (pFVar8 == pFVar1) break;
        uVar3 = *(ulong64 *)pFVar8;
        local_168[0] = uVar3;
        fVar9 = GetDelationTime(this,local_168);
        pFVar7 = FindEntityBase(this,uVar3);
        if (pFVar7 != (FDS_EntityBase *)0x0) {
          (**(code **)(pFVar7->_padding_ + 0x138))(pFVar7,fVar9);
        }
        pFVar8 = pFVar8 + 8;
      }
    }
  }
  return;
}

// Reset @ 14bb32b40

void __thiscall UDS_EntityManager::Reset(UDS_EntityManager *this)

{
  ClearAllEntity(this,true);
  return;
}

// SetTransportWarpMapLoadingNotify @ 14bb37b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
UDS_EntityManager::SetTransportWarpMapLoadingNotify
          (UDS_EntityManager *this,TransportWarpMapLoadingNotify *param_1)

{
  Vector *pVVar1;
  bool bVar2;
  ulong64 uVar3;
  FDS_EntityBase *this_00;
  UObject *pUVar4;
  UClass *pUVar5;
  UDS_LogManager *pUVar6;
  longlong *plVar7;
  Vector *pVVar8;
  undefined1 auStackY_258 [32];
  EDS_AbilityTagType local_208 [8];
  FString local_200;
  undefined1 local_1e8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_258;
  uVar3 = GetCurrentMainCharEntityID(this,true);
  this_00 = FindEntityBase(this,uVar3);
  bVar2 = false;
  if (this_00 != (FDS_EntityBase *)0x0) {
    pUVar4 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar4,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar5 = Z_Construct_UClass_UDS_TransportWarpContext_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1e8,pUVar5);
    local_1e8._8_8_ = pUVar4;
    pUVar4 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1e8);
    if (local_1e8._64_8_ != 0) {
      plVar7 = (longlong *)(local_1e8 + 0x50);
      if ((longlong *)local_1e8._104_8_ != (longlong *)0x0) {
        plVar7 = (longlong *)local_1e8._104_8_;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    *(ulong64 *)(pUVar4 + 1) = (param_1->_impl_).transport_entity_id_;
    pVVar1 = (param_1->_impl_).warp_location_;
    pVVar8 = &_Vector_default_instance_._instance;
    if (pVVar1 != (Vector *)0x0) {
      pVVar8 = pVVar1;
    }
    DS_Util::SetFVector((TVector<double> *)&pUVar4[1].field_0x8,pVVar8);
    *(uint *)&pUVar4[1].field_0x20 = (param_1->_impl_).warp_island_id_;
    *(double *)(pUVar4 + 2) = (double)(param_1->_impl_).server_wait_time_;
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      ::FString::PrintfImpl(&local_200,L"X=%3.3f Y=%3.3f Z=%3.3f");
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_EntityManager::SetTransportWarpMapLoadingNotify",0x33,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Display,local_168.Ptr,0x370,
                 L"SERIN SetTransportWarpMapLoadingNotify %llu %d %d %s");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
      if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_200.Data.AllocatorInstance.Data);
      }
    }
    local_200.Data.AllocatorInstance.Data = (FScriptContainerElement *)pUVar4;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    local_208[0] = TransportWarp;
    bVar2 = FDS_EntityBase::TryActivateAbility
                      (this_00,local_208,(TObjectPtr<UWN_AbilityContext>)&local_200);
  }
  return bVar2;
}

// SpawnActor @ 14bb38370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

AActor * __thiscall
UDS_EntityManager::SpawnActor
          (UDS_EntityManager *this,FDS_SpawnInfo *param_1,UWorld *param_2,bool param_3)

{
  int *piVar1;
  ulong64 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UDS_LogManager *pUVar6;
  AActor *pAVar7;
  UClass *pUVar8;
  FString *pFVar9;
  size_t sVar10;
  FDS_EntityBase *pFVar11;
  UDS_DataManager *this_00;
  FDS_SpawnInfo *pFVar12;
  FDS_RaidPartyRepo *this_01;
  FDS_RaidPartyMemberInfo *pFVar13;
  UDS_GameInstance *this_02;
  UDS_ManagerBase *pUVar14;
  FDS_MountInfo *pFVar15;
  longlong *plVar16;
  void *pvVar17;
  int iVar18;
  undefined1 auStackY_ba8 [32];
  undefined1 local_b68;
  undefined1 local_b67 [7];
  FSoftObjectPath local_b60;
  TStringView<wchar_t> local_b38;
  FScriptContainerElement *local_b28;
  int iStack_b20;
  undefined4 uStack_b1c;
  UWorld *local_b18;
  uint local_b0c;
  FScriptContainerElement *local_b08;
  int iStack_b00;
  undefined4 uStack_afc;
  TStringView<wchar_t> local_af8;
  TStringView<wchar_t> local_ae8;
  FString local_ad8;
  FReadAccessScope local_ac8;
  FDS_MountInfo local_ab0;
  FDS_SpawnInfo local_a98;
  undefined1 local_9b8 [112];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_948;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_828;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_708;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_5e8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_ba8;
  local_b18 = param_2;
  if (param_1->EntityID == 0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_948._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_948,"UDS_EntityManager::SpawnActor",0x1d,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_948.Ptr,0x10d,L"EntityID is Invalid. EntityID : %llu");
      if ((void *)local_948._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_948._padding_);
      }
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2787795673343327986>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_EntityManager.cpp"
                       ,0x10e,"false");
    if (!bVar4) {
      return (AActor *)0x0;
    }
    pcVar3 = (code *)swi(3);
    pAVar7 = (AActor *)(*pcVar3)();
    return pAVar7;
  }
  bVar4 = UDS_GameInstance::IsPrintEntityVisble();
  if ((bVar4) && (pUVar6 = UDS_LogManager::GetInst(), pUVar6 != (UDS_LogManager *)0x0)) {
    pUVar6 = UDS_LogManager::GetInst();
    local_828._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_828,"UDS_EntityManager::SpawnActor",0x1d,Yes);
    UDS_LogManager::PrintLog(pUVar6,1,Display,local_828.Ptr,0x114,L"Spawn Entity: %llu");
    if ((void *)local_828._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_828._padding_);
    }
  }
  if (param_2 == (UWorld *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_708._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_708,"UDS_EntityManager::SpawnActor",0x1d,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_708.Ptr,0x119,L"GetWorld is invalid");
      if ((void *)local_708._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_708._padding_);
      }
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2787795673343327974>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_EntityManager.cpp"
                       ,0x11a,"false");
    if (!bVar4) {
      return (AActor *)0x0;
    }
    pcVar3 = (code *)swi(3);
    pAVar7 = (AActor *)(*pcVar3)();
    return pAVar7;
  }
  local_b08 = (param_1->BlueprintPath).Data.AllocatorInstance.Data;
  iVar5 = (param_1->BlueprintPath).Data.ArrayNum;
  local_b60.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_b60.AssetPath.PackageName.Number = 0;
  local_b60.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_b60.AssetPath.AssetName.Number = 0;
  local_b60.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b60.SubPathString.Data.ArrayNum = 0;
  local_b60.SubPathString.Data.ArrayMax = 0;
  iVar18 = 0;
  iStack_b00 = iVar5 + -1;
  if (iVar5 == 0) {
    iStack_b00 = iVar18;
  }
  local_af8._12_4_ = uStack_afc;
  local_af8.Size = iStack_b00;
  local_af8.DataPtr = (wchar_t *)local_b08;
  FSoftObjectPath::SetPath(&local_b60,&local_af8);
  if (local_b60.AssetPath.PackageName == (FName)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_5e8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_5e8,"UDS_EntityManager::GetActorClass",0x20,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_5e8.Ptr,0x47d,L"actorClassPath is invalid");
      if ((void *)local_5e8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_5e8._padding_);
      }
    }
    if (local_b60.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b60.SubPathString.Data.AllocatorInstance.Data);
    }
    goto LAB_14bb3875b;
  }
  pUVar8 = FSoftClassPath::ResolveClass((FSoftClassPath *)&local_b60);
  if (pUVar8 == (UClass *)0x0) {
    if (local_b60.AssetPath.PackageName == (FName)0x0) {
      pUVar8 = (UClass *)0x0;
    }
    else {
      local_b38.DataPtr = (wchar_t *)0x0;
      local_b38._8_8_ = (ulonglong)local_b0c << 0x20;
      pFVar9 = FSoftObjectPath::ToString(&local_b60,&local_ad8);
      if ((pFVar9->Data).ArrayNum == 0) {
        local_b28 = (FScriptContainerElement *)0x15060d16c;
LAB_14bb386f1:
        sVar10 = wcslen((wchar_t *)local_b28);
        iVar18 = (int)sVar10;
      }
      else {
        local_b28 = (pFVar9->Data).AllocatorInstance.Data;
        if (local_b28 != (FScriptContainerElement *)0x0) goto LAB_14bb386f1;
      }
      iStack_b20 = iVar18;
      pUVar8 = Z_Construct_UClass_AActor_NoRegister();
      local_ae8._12_4_ = uStack_b1c;
      local_ae8.Size = iStack_b20;
      local_ae8.DataPtr = (wchar_t *)local_b28;
      pUVar8 = StaticLoadClass(pUVar8,(UObject *)0x0,&local_ae8,&local_b38,0,(UPackageMap *)0x0);
      if (local_ad8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_ad8.Data.AllocatorInstance.Data);
      }
    }
  }
  if (local_b60.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b60.SubPathString.Data.AllocatorInstance.Data);
  }
  if (pUVar8 == (UClass *)0x0) {
LAB_14bb3875b:
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_4c8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_4c8,"UDS_EntityManager::SpawnActor",0x1d,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_4c8.Ptr,0x121,L"actorClass is invalid");
      if ((void *)local_4c8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_4c8._padding_);
      }
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2787795673343327966>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_EntityManager.cpp"
                       ,0x122,"false");
    if (!bVar4) {
      return (AActor *)0x0;
    }
    pcVar3 = (code *)swi(3);
    pAVar7 = (AActor *)(*pcVar3)();
    return pAVar7;
  }
  bVar4 = IsSpawnedEntity(this,param_1->EntityID);
  if (bVar4) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_3a8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_3a8,"UDS_EntityManager::SpawnActor",0x1d,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Display,local_3a8.Ptr,0x129,L"Already Spawned EntityID(%llu)");
      if ((void *)local_3a8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_3a8._padding_);
      }
    }
    pFVar11 = FindEntityBase(this,param_1->EntityID);
    if (pFVar11 == (FDS_EntityBase *)0x0) {
      return (AActor *)0x0;
    }
    if (pFVar11->bIsRemoveReserved == false) {
      return (AActor *)0x0;
    }
    RemoveEntity(this,param_1->EntityID,false);
  }
  if (param_3) {
    this_00 = UDS_DataManager::GetInst();
    if (this_00 == (UDS_DataManager *)0x0) {
      return (AActor *)0x0;
    }
    bVar4 = UDS_DataManager::CreateDataSetContainer
                      (this_00,param_1->EntityID,param_1->EntityType,param_1->TableID,false);
    if (!bVar4) {
      return (AActor *)0x0;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->SpawnInitDelegate,
             &local_ac8);
  if ((*(int *)&(param_1->SpawnInitDelegate).field_0x10 != 0) &&
     (plVar16 = *(longlong **)&(param_1->SpawnInitDelegate).field_0x8, plVar16 != (longlong *)0x0))
  {
    (**(code **)(*plVar16 + 0x68))(plVar16,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_ac8);
  FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_9b8);
  local_9b8[0x32] = local_9b8[0x32] | 4;
  local_9b8[0x30] = AlwaysSpawn;
  local_9b8[0x31] = MultiplyWithRoot;
  local_9b8._16_8_ = (AActor *)0x0;
  local_9b8._24_8_ = (APawn *)0x0;
  pAVar7 = UWorld::SpawnActor(local_b18,pUVar8,&param_1->SpawnTransform,
                              (FActorSpawnParameters *)local_9b8);
  if (local_9b8._64_8_ != 0) {
    plVar16 = (longlong *)(local_9b8 + 0x50);
    if ((longlong *)local_9b8._104_8_ != (longlong *)0x0) {
      plVar16 = (longlong *)local_9b8._104_8_;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  if (pAVar7 == (AActor *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) {
      return (AActor *)0x0;
    }
    pUVar6 = UDS_LogManager::GetInst();
    local_288._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_288,"UDS_EntityManager::SpawnActor",0x1d,Yes);
    UDS_LogManager::PrintLog(pUVar6,1,Warning,local_288.Ptr,0x14e,L"entityActor is invalid");
    pvVar17 = (void *)local_288._padding_;
    goto LAB_14bb38b54;
  }
  pFVar12 = FDS_SpawnInfo::FDS_SpawnInfo(&local_a98,param_1);
  AddEntity(this,pFVar12,pAVar7,false);
  this_01 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  pFVar13 = FDS_RaidPartyRepo::GetMyRaidPartyMemberInfo(this_01);
  if (pFVar13->MemberState == DungeonInPlay) {
    this_02 = UDS_GameInstance::GetInst();
    if (this_02 == (UDS_GameInstance *)0x0) {
LAB_14bb38a94:
      pUVar14 = (UDS_ManagerBase *)0x0;
    }
    else {
      pUVar8 = Z_Construct_UClass_UDS_DungeonManager_NoRegister();
      pUVar14 = UDS_GameInstance::GetManager(this_02,(FName)pUVar8->_padding_);
      if (pUVar14 == (UDS_ManagerBase *)0x0) goto LAB_14bb38a94;
      pUVar8 = Z_Construct_UClass_UDS_DungeonManager_NoRegister();
      iVar5 = (int)pUVar8->_padding_;
      if ((*(int *)(pUVar14->_padding_ + 0x38) < iVar5) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar5 * 8) !=
          &pUVar8->_padding_)) goto LAB_14bb38a94;
    }
    iVar5 = (int)pUVar14[5]._padding_;
    piVar1 = (int *)((longlong)&pUVar14[5]._padding_ + 4);
    uVar2 = param_1->EntityID;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&pUVar14[5]._padding_,piVar1);
    }
    *(int *)&pUVar14[5]._padding_ = iVar5 + 1;
    *(ulong64 *)(pUVar14[5]._padding_ + (longlong)iVar5 * 8) = uVar2;
  }
  pFVar11 = FindEntityBase(this,param_1->EntityID);
  if (pFVar11 != (FDS_EntityBase *)0x0) {
    (**(code **)(pFVar11->_padding_ + 0x20))(pFVar11,param_1);
    if (pFVar11->EntityType != Transport) {
      local_b68 = UDS_IngameState::IsNpcTalking();
      (**(code **)(pFVar11->_padding_ + 0x198))(pFVar11,&local_b68);
    }
    local_b67[0] = UDS_IngameState::IsLevelSequencePlaying();
    (**(code **)(pFVar11->_padding_ + 0x1a0))(pFVar11,local_b67);
    UGameplayStatics::FinishSpawningActor(pAVar7,&param_1->SpawnTransform,MultiplyWithRoot);
    pFVar15 = FDS_MountInfo::FDS_MountInfo(&local_ab0,&param_1->MountEntity,&param_1->SeatIndex);
    UDS_MountAbility::TryActivate(param_1->EntityID,pFVar15);
    TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
                *)&this->OnSpawnEntityEvent,&param_1->EntityID);
    return pAVar7;
  }
  pUVar6 = UDS_LogManager::GetInst();
  if (pUVar6 == (UDS_LogManager *)0x0) {
    return (AActor *)0x0;
  }
  pUVar6 = UDS_LogManager::GetInst();
  local_168._padding_ = 0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
            (&local_168,"UDS_EntityManager::SpawnActor",0x1d,Yes);
  UDS_LogManager::PrintLog(pUVar6,1,Warning,local_168.Ptr,0x15d,L"entityBase is invalid");
  pvVar17 = (void *)local_168._padding_;
LAB_14bb38b54:
  if (pvVar17 == (void *)0x0) {
    return (AActor *)0x0;
  }
  FMemory::Free(pvVar17);
  return (AActor *)0x0;
}

// SpawnDummyNetCharacter @ 14bb38c20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UDS_EntityManager::SpawnDummyNetCharacter(UDS_EntityManager *this,bool param_1,ulong64 param_2)

{
  Vector *pVVar1;
  VectorF *pVVar2;
  bool bVar3;
  TWeakObjectPtr<AActor,FWeakObjectPtr> this_00;
  UObject *pUVar4;
  UDS_MovementCore *pUVar5;
  TVector<double> *pTVar6;
  TRotator<double> *pTVar7;
  FDS_UniqueBpTableRow *this_01;
  FDS_ResourceEtcTableRow *pFVar8;
  FString *pFVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  UDS_GameInstance *this_02;
  UWorld *pUVar12;
  Arena *pAVar13;
  undefined1 auStack_268 [32];
  FWeakObjectPtr local_248;
  FWeakObjectPtr local_240;
  FWeakObjectPtr local_238;
  TVector<double>_u_0 local_230;
  FDelegateAllocation *local_218;
  SpawnCharacterResponse local_208;
  undefined1 local_108 [192];
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_268;
  if (param_1) {
    this_00 = FindEntity(this,(ulong64)&local_230);
    bVar3 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)this_00.WeakPtr,(void *)0x0);
    if (bVar3) {
      ADS_MainCharacter::GetMainPlayer();
      bVar3 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)&local_240,(void *)0x0)
      ;
      if (!bVar3) {
        pUVar4 = FWeakObjectPtr::Get(&local_240);
        (**(code **)(*(longlong *)&pUVar4[0x29].field_0x10 + 0x78))();
        bVar3 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_238,(void *)0x0
                          );
        if (!bVar3) {
          FWeakObjectPtr::Get(&local_240);
          UDS_CharInfoData::GetData((ulong64)&local_248);
          bVar3 = TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *)&local_248,
                             (void *)0x0);
          if (!bVar3) {
            server_msg::SpawnCharacterResponse::SpawnCharacterResponse(&local_208,(Arena *)0x0);
            local_208._impl_._has_bits_.has_bits_[0] =
                 (uint  [1])((uint)local_208._impl_._has_bits_.has_bits_[0] | 0x30000);
            local_208._padding_ = (longlong)&___7SpawnCharacterResponse_server_msg__6B_;
            local_208._impl_.player_entity_ = param_2;
            local_208._impl_.entity_id_ = param_2;
            pUVar4 = FWeakObjectPtr::Get(&local_248);
            local_208._impl_.char_id_ = *(int *)&pUVar4[8].field_0x8;
            local_208._impl_._has_bits_.has_bits_[0] =
                 (uint  [1])((uint)local_208._impl_._has_bits_.has_bits_[0] | 0x40004);
            if (local_208._impl_.position_ == (Vector *)0x0) {
              if (((byte)local_208._padding_ & 1) == 0) {
                pAVar13 = (Arena *)(CONCAT71(local_208._padding_._1_7_,(byte)local_208._padding_) &
                                   0xfffffffffffffffe);
              }
              else {
                pAVar13 = *(Arena **)
                           (CONCAT71(local_208._padding_._1_7_,(byte)local_208._padding_) &
                           0xfffffffffffffffe);
              }
              local_208._impl_.position_ =
                   google::protobuf::Arena::DefaultConstruct<Vector>(pAVar13);
            }
            pVVar1 = local_208._impl_.position_;
            local_208._impl_._has_bits_.has_bits_[0] =
                 (uint  [1])((uint)local_208._impl_._has_bits_.has_bits_[0] | 8);
            if (local_208._impl_.direction_ == (VectorF *)0x0) {
              if (((byte)local_208._padding_ & 1) == 0) {
                pAVar13 = (Arena *)(CONCAT71(local_208._padding_._1_7_,(byte)local_208._padding_) &
                                   0xfffffffffffffffe);
              }
              else {
                pAVar13 = *(Arena **)
                           (CONCAT71(local_208._padding_._1_7_,(byte)local_208._padding_) &
                           0xfffffffffffffffe);
              }
              local_208._impl_.direction_ =
                   google::protobuf::Arena::DefaultConstruct<VectorF>(pAVar13);
            }
            pVVar2 = local_208._impl_.direction_;
            pUVar4 = FWeakObjectPtr::Get(&local_248);
            local_208._impl_.skin_id_ = *(int *)&pUVar4[0xd].field_0x18;
            local_208._impl_._has_bits_.has_bits_[0] =
                 (uint  [1])((uint)local_208._impl_._has_bits_.has_bits_[0] | 0x8000000);
            pUVar5 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_238);
            pTVar6 = UDS_MovementCore::GetActorLocation(pUVar5,(TVector<double> *)&local_230._s_0);
            DS_Util::SetVector(pVVar1,pTVar6);
            pUVar5 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_238);
            pTVar7 = UDS_MovementCore::GetActorRotation(pUVar5,(TRotator<double> *)&local_230._s_0);
            DS_Util::SetNetRotate(pVVar2,pTVar7);
            FDS_SpawnInfo::FDS_SpawnInfo((FDS_SpawnInfo *)local_108);
            local_108._0_8_ = local_208._impl_.entity_id_;
            local_108[8] = DummyCharacter;
            pUVar4 = FWeakObjectPtr::Get(&local_248);
            local_108._12_4_ = *(undefined4 *)&pUVar4[8].field_0x8;
            this_01 = FDS_UniqueBpTableRow::GetRef(3,true);
            pFVar8 = FDS_UniqueBpTableRow::ID_BpLinkTable(this_01);
            pFVar9 = FSoftObjectPath::ToString(&pFVar8->ResourcePath,(FString *)&local_230._s_0);
            if ((FString *)(local_108 + 0x10) != pFVar9) {
              if ((FScriptContainerElement *)local_108._16_8_ != (FScriptContainerElement *)0x0) {
                FMemory::Free((void *)local_108._16_8_);
              }
              local_108._16_8_ = (pFVar9->Data).AllocatorInstance.Data;
              (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_108._24_4_ = (pFVar9->Data).ArrayNum;
              local_108._28_4_ = (pFVar9->Data).ArrayMax;
              (pFVar9->Data).ArrayNum = 0;
              (pFVar9->Data).ArrayMax = 0;
            }
            if ((void *)local_230._s_0.X != (void *)0x0) {
              FMemory::Free((void *)local_230._s_0.X);
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
                       (FWriteAccessScope *)&local_230._s_0);
            local_218 = &local_40;
            puVar10 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
            if (puVar10 != (undefined8 *)0x0) {
              *puVar10 = &
                         ___7__TCommonDelegateInstanceState___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnCharacterResponse_server_msg____6B_
              ;
              puVar10[1] = &local_208;
              uVar11 = FDelegateHandle::GenerateNewID();
              puVar10[2] = uVar11;
              *puVar10 = &
                         ___7__TBaseStaticDelegateInstance___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnCharacterResponse_server_msg____6B_
              ;
              puVar10[3] = OnDummyNetPlayerSpawnInit;
            }
            if (local_230._16_1_ == '\0') {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                        ((FMRSWRecursiveAccessDetector *)local_230._s_0.Y,
                         (FDestructionSentinel *)&local_230._s_0);
            }
            this_02 = UDS_GameInstance::GetInst();
            pUVar12 = UGameInstance::GetWorld((UGameInstance *)this_02);
            SpawnActor(this,(FDS_SpawnInfo *)local_108,pUVar12,true);
            TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_48);
            if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
              FMemory::Free((void *)local_40.DelegateAllocator);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_48);
            if ((FScriptContainerElement *)local_108._16_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_108._16_8_);
            }
            server_msg::SpawnCharacterResponse::~SpawnCharacterResponse(&local_208);
          }
        }
      }
    }
  }
  else {
    RemoveEntity(this,param_2,false);
  }
  return;
}

// SpawnDummyTransport @ 14bb38fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UDS_EntityManager::SpawnDummyTransport
          (UDS_EntityManager *this,bool param_1,ulong64 param_2,int param_3)

{
  Vector *pVVar1;
  VectorF *pVVar2;
  bool bVar3;
  TWeakObjectPtr<AActor,FWeakObjectPtr> this_00;
  UObject *pUVar4;
  UDS_MovementCore *pUVar5;
  TVector<double> *pTVar6;
  TRotator<double> *pTVar7;
  FDS_TransportBaseTableRow *this_01;
  FDS_ResourceEtcTableRow *pFVar8;
  FString *pFVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  UDS_GameInstance *this_02;
  UWorld *pUVar12;
  Arena *pAVar13;
  undefined1 auStack_1a8 [32];
  FWeakObjectPtr local_188;
  FWeakObjectPtr local_180;
  SpawnTransportResponse local_178;
  TVector<double>_u_0 local_138;
  FDelegateAllocation *local_120;
  TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> local_118 [2];
  undefined1 local_108 [192];
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  if (param_1) {
    this_00 = FindEntity(this,(ulong64)&local_138);
    bVar3 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)this_00.WeakPtr,(void *)0x0);
    if (bVar3) {
      ADS_MainCharacter::GetMainPlayer();
      bVar3 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)&local_188,(void *)0x0)
      ;
      if (!bVar3) {
        pUVar4 = FWeakObjectPtr::Get(&local_188);
        (**(code **)(*(longlong *)&pUVar4[0x29].field_0x10 + 0x78))();
        bVar3 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_180,(void *)0x0
                          );
        if (!bVar3) {
          FWeakObjectPtr::Get(&local_188);
          UDS_CharInfoData::GetData((ulong64)local_118);
          bVar3 = TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals(local_118,(void *)0x0)
          ;
          if (!bVar3) {
            server_msg::SpawnTransportResponse::SpawnTransportResponse(&local_178,(Arena *)0x0);
            local_178._padding_ = (longlong)&___7SpawnTransportResponse_server_msg__6B_;
            local_178._impl_._has_bits_.has_bits_[0] =
                 (uint  [1])((uint)local_178._impl_._has_bits_.has_bits_[0] | 0xd);
            local_178._impl_.entity_id_ = param_2;
            local_178._impl_.transport_id_ = param_3;
            if (local_178._impl_.position_ == (Vector *)0x0) {
              if (((byte)local_178._padding_ & 1) == 0) {
                pAVar13 = (Arena *)(CONCAT71(local_178._padding_._1_7_,(byte)local_178._padding_) &
                                   0xfffffffffffffffe);
              }
              else {
                pAVar13 = *(Arena **)
                           (CONCAT71(local_178._padding_._1_7_,(byte)local_178._padding_) &
                           0xfffffffffffffffe);
              }
              local_178._impl_.position_ =
                   google::protobuf::Arena::DefaultConstruct<Vector>(pAVar13);
            }
            pVVar1 = local_178._impl_.position_;
            local_178._impl_._has_bits_.has_bits_[0] =
                 (uint  [1])((uint)local_178._impl_._has_bits_.has_bits_[0] | 2);
            if (local_178._impl_.direction_ == (VectorF *)0x0) {
              if (((byte)local_178._padding_ & 1) == 0) {
                pAVar13 = (Arena *)(CONCAT71(local_178._padding_._1_7_,(byte)local_178._padding_) &
                                   0xfffffffffffffffe);
              }
              else {
                pAVar13 = *(Arena **)
                           (CONCAT71(local_178._padding_._1_7_,(byte)local_178._padding_) &
                           0xfffffffffffffffe);
              }
              local_178._impl_.direction_ =
                   google::protobuf::Arena::DefaultConstruct<VectorF>(pAVar13);
            }
            pVVar2 = local_178._impl_.direction_;
            pUVar5 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_180);
            pTVar6 = UDS_MovementCore::GetActorLocation(pUVar5,(TVector<double> *)&local_138._s_0);
            DS_Util::SetVector(pVVar1,pTVar6);
            pUVar5 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_180);
            pTVar7 = UDS_MovementCore::GetActorRotation(pUVar5,(TRotator<double> *)&local_138._s_0);
            DS_Util::SetNetRotate(pVVar2,pTVar7);
            FDS_SpawnInfo::FDS_SpawnInfo((FDS_SpawnInfo *)local_108);
            local_108._0_8_ = local_178._impl_.entity_id_;
            local_108[8] = Transport;
            local_108._12_4_ = local_178._impl_.transport_id_;
            this_01 = FDS_TransportBaseTableRow::GetRef
                                ((longlong)local_178._impl_.transport_id_,true);
            pFVar8 = FDS_TransportBaseTableRow::ID_BpLinkTable(this_01);
            pFVar9 = FSoftObjectPath::ToString(&pFVar8->ResourcePath,(FString *)&local_138._s_0);
            if ((FString *)(local_108 + 0x10) != pFVar9) {
              if ((FScriptContainerElement *)local_108._16_8_ != (FScriptContainerElement *)0x0) {
                FMemory::Free((void *)local_108._16_8_);
              }
              local_108._16_8_ = (pFVar9->Data).AllocatorInstance.Data;
              (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_108._24_4_ = (pFVar9->Data).ArrayNum;
              local_108._28_4_ = (pFVar9->Data).ArrayMax;
              (pFVar9->Data).ArrayNum = 0;
              (pFVar9->Data).ArrayMax = 0;
            }
            if ((void *)local_138._s_0.X != (void *)0x0) {
              FMemory::Free((void *)local_138._s_0.X);
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
                       (FWriteAccessScope *)&local_138._s_0);
            local_120 = &local_40;
            puVar10 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
            if (puVar10 != (undefined8 *)0x0) {
              *puVar10 = &
                         ___7__TCommonDelegateInstanceState___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnTransportResponse_server_msg____6B_
              ;
              puVar10[1] = &local_178;
              uVar11 = FDelegateHandle::GenerateNewID();
              puVar10[2] = uVar11;
              *puVar10 = &
                         ___7__TBaseStaticDelegateInstance___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnTransportResponse_server_msg____6B_
              ;
              puVar10[3] = OnDummyTransportSpawnInit;
            }
            if (local_138._16_1_ == '\0') {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                        ((FMRSWRecursiveAccessDetector *)local_138._s_0.Y,
                         (FDestructionSentinel *)&local_138._s_0);
            }
            this_02 = UDS_GameInstance::GetInst();
            pUVar12 = UGameInstance::GetWorld((UGameInstance *)this_02);
            SpawnActor(this,(FDS_SpawnInfo *)local_108,pUVar12,true);
            TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_48);
            if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
              FMemory::Free((void *)local_40.DelegateAllocator);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_48);
            if ((FScriptContainerElement *)local_108._16_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_108._16_8_);
            }
            server_msg::SpawnTransportResponse::~SpawnTransportResponse(&local_178);
          }
        }
      }
    }
  }
  else {
    RemoveEntity(this,param_2,false);
  }
  return;
}

// UnRegisterEntity @ 14bb3bae0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDS_EntityManager::UnRegisterEntity(UDS_EntityManager *this,ulong64 param_1)

{
  TMap<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>_>
  *this_00;
  bool bVar1;
  int iVar2;
  UDS_DataManager *this_01;
  FWeakObjectPtr *pFVar3;
  undefined1 *puVar4;
  uint uVar5;
  FWeakObjectPtr local_res8;
  AActor *local_res10;
  
  this_00 = &this->EntityMap;
  uVar5 = (int)(param_1 >> 0x20) * 0x17 + (int)param_1;
  if (*(int *)&(this->EntityMap).field_0x8 != *(int *)&(this->EntityMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->EntityMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->EntityMap).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)(*(int *)&(this->EntityMap).field_0x48 - 1U & uVar5) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulong64 *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar2 * 0x18) == param_1) {
          pFVar3 = &TMapBase<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>_>
                    ::FindChecked((TMapBase<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>_>
                                   *)this_00,param_1)->WeakPtr;
          local_res8 = *pFVar3;
          goto LAB_14bb3bb74;
        }
        iVar2 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar2 * 0x18);
      } while (iVar2 != -1);
    }
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = (AActor *)0x0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
LAB_14bb3bb74:
  local_res10 = (AActor *)param_1;
  if (*(int *)&(this->EntityMap).field_0x8 != *(int *)&(this->EntityMap).field_0x34) {
    TSet<TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                *)this_00,uVar5,(ulong64 *)&local_res10);
  }
  bVar1 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar1) {
    local_res10 = (AActor *)FWeakObjectPtr::Get(&local_res8);
    TArray<AActor_*,TSizedDefaultAllocator<32>_>::Remove(&this->EntityList,&local_res10);
  }
  this_01 = UDS_DataManager::GetInst();
  if (this_01 != (UDS_DataManager *)0x0) {
    UDS_DataManager::RemoveDataSetContainer(this_01,param_1,true,false);
  }
  return;
}

