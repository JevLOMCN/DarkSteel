// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 19

// StaticClass @ 14b53bde0

UClass * __cdecl UDS_NPCGimmickData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCGimmickData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCGimmickData",
               &Z_Registration_Info_UClass_UDS_NPCGimmickData.InnerSingleton,
               StaticRegisterNativesUDS_NPCGimmickData,0x1b0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_NPCGimmickData>,
               InternalVTableHelperCtorCaller<UDS_NPCGimmickData>,local_res8,
               UDS_NPCDataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCGimmickData.InnerSingleton;
}

// UDS_NPCGimmickData @ 14b540290

UDS_NPCGimmickData * __thiscall
UDS_NPCGimmickData::UDS_NPCGimmickData(UDS_NPCGimmickData *this,FVTableHelper *param_1)

{
  UDS_DataBase::UDS_DataBase((UDS_DataBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_NPCGimmickData__6B_;
  *(undefined8 *)&this->OnChangeSpawnStateDelegate = 0;
  *(undefined8 *)&(this->OnChangeSpawnStateDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnChangeSpawnStateDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnChangeEnableStateDelegate = 0;
  *(undefined8 *)&(this->OnChangeEnableStateDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnChangeEnableStateDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnChangeOpenStateDelegate = 0;
  *(undefined8 *)&(this->OnChangeOpenStateDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnChangeOpenStateDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnChangeInteractionStateDelegate = 0;
  *(undefined8 *)&(this->OnChangeInteractionStateDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnChangeInteractionStateDelegate).field_0x10 = 0;
  *(undefined8 *)&this->InteractionStartDelegate = 0;
  *(undefined8 *)&(this->InteractionStartDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->InteractionStartDelegate).field_0x10 = 0;
  *(undefined8 *)&this->InteractionCancelDelegate = 0;
  *(undefined8 *)&(this->InteractionCancelDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->InteractionCancelDelegate).field_0x10 = 0;
  *(undefined8 *)&this->InteractionCompleteDelegate = 0;
  *(undefined8 *)&(this->InteractionCompleteDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->InteractionCompleteDelegate).field_0x10 = 0;
  *(undefined8 *)&this->AltarBossSummonCompleteDelegate = 0;
  *(undefined8 *)&(this->AltarBossSummonCompleteDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->AltarBossSummonCompleteDelegate).field_0x10 = 0;
  *(undefined8 *)&this->NPCGimmickInfoMap = 0;
  *(undefined8 *)&(this->NPCGimmickInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->NPCGimmickInfoMap).field_0x20 = 0;
  *(undefined8 *)&(this->OnChangeSpawnStateDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->OnChangeEnableStateDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->OnChangeOpenStateDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->OnChangeInteractionStateDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->InteractionStartDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->InteractionCancelDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->InteractionCompleteDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->AltarBossSummonCompleteDelegate).field_0x18 = 2;
  *(undefined4 *)&(this->NPCGimmickInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->NPCGimmickInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->NPCGimmickInfoMap).field_0x34 = 0;
  *(undefined4 *)&(this->NPCGimmickInfoMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NPCGimmickInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->NPCGimmickInfoMap).field_0x48 = 0;
  this->bIsSpawn = false;
  this->bIsEnabled = false;
  this->bIsOpened = false;
  this->bIsInteraction = false;
  return this;
}

// ~UDS_NPCGimmickData @ 14b5414f0

void __thiscall UDS_NPCGimmickData::~UDS_NPCGimmickData(UDS_NPCGimmickData *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_NPCGimmickData__6B_;
  *(undefined4 *)&(this->NPCGimmickInfoMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->NPCGimmickInfoMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDS_NPCGimmickInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FDS_NPCGimmickInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FDS_NPCGimmickInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NPCGimmickInfoMap);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->AltarBossSummonCompleteDelegate).field_0x8,
             *(int *)&(this->AltarBossSummonCompleteDelegate).field_0x10);
  pvVar1 = *(void **)&(this->AltarBossSummonCompleteDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->AltarBossSummonCompleteDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->InteractionCompleteDelegate).field_0x8,
             *(int *)&(this->InteractionCompleteDelegate).field_0x10);
  pvVar1 = *(void **)&(this->InteractionCompleteDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->InteractionCompleteDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->InteractionCancelDelegate).field_0x8,
             *(int *)&(this->InteractionCancelDelegate).field_0x10);
  pvVar1 = *(void **)&(this->InteractionCancelDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->InteractionCancelDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->InteractionStartDelegate).field_0x8,
             *(int *)&(this->InteractionStartDelegate).field_0x10);
  pvVar1 = *(void **)&(this->InteractionStartDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->InteractionStartDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangeInteractionStateDelegate).field_0x8,
             *(int *)&(this->OnChangeInteractionStateDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnChangeInteractionStateDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangeInteractionStateDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangeOpenStateDelegate).field_0x8,
             *(int *)&(this->OnChangeOpenStateDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnChangeOpenStateDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangeOpenStateDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangeEnableStateDelegate).field_0x8,
             *(int *)&(this->OnChangeEnableStateDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnChangeEnableStateDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangeEnableStateDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangeSpawnStateDelegate).field_0x8,
             *(int *)&(this->OnChangeSpawnStateDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnChangeSpawnStateDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangeSpawnStateDelegate);
  this->_padding_ = (longlong)&___7UDS_NPCDataBase__6B_;
  UDS_DataBase::~UDS_DataBase((UDS_DataBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b542c40

UClass * __cdecl UDS_NPCGimmickData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCGimmickData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCGimmickData",
               &Z_Registration_Info_UClass_UDS_NPCGimmickData.InnerSingleton,
               StaticRegisterNativesUDS_NPCGimmickData,0x1b0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_NPCGimmickData>,
               InternalVTableHelperCtorCaller<UDS_NPCGimmickData>,local_res8,
               UDS_NPCDataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCGimmickData.InnerSingleton;
}

// StaticRegisterNativesUDS_NPCGimmickData @ 14b543a80

void __cdecl UDS_NPCGimmickData::StaticRegisterNativesUDS_NPCGimmickData(void)

{
  return;
}

// __VTableCtorCaller @ 14b545040

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_NPCGimmickData::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_DataBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (UDS_DataBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_DataBase *)0x0) {
    UDS_DataBase::UDS_DataBase(this,param_1);
    this->_padding_ = (longlong)&___7UDS_NPCGimmickData__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 2;
    this[1]._padding_ = 0;
    *(undefined8 *)&this[1].OnDirty = 0;
    *(undefined8 *)&this[1].OnDirty.field_0x8 = 0;
    *(undefined8 *)&this[1].OnDirty.field_0x10 = 2;
    this[1].UniqueKey = 0;
    this[1].MyDataSet.WeakPtr = (FWeakObjectPtr)0x0;
    *(undefined8 *)&this[1].bIsDirty = 0;
    this[2]._padding_ = 2;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 2;
    *(undefined8 *)&this[2].OnDirty = 0;
    *(undefined8 *)&this[2].OnDirty.field_0x8 = 0;
    *(undefined8 *)&this[2].OnDirty.field_0x10 = 0;
    this[2].UniqueKey = 2;
    this[2].MyDataSet.WeakPtr = (FWeakObjectPtr)0x0;
    *(undefined8 *)&this[2].bIsDirty = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 2;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined8 *)&this[3].OnDirty = 2;
    *(undefined8 *)&this[3].OnDirty.field_0x8 = 0;
    *(undefined8 *)&this[3].OnDirty.field_0x10 = 0;
    this[3].UniqueKey = 0;
    this[3].MyDataSet.WeakPtr = (FWeakObjectPtr)0x2;
    *(undefined8 *)&this[3].bIsDirty = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    *(undefined4 *)&this[4]._padding_ = 0;
    *(undefined4 *)((longlong)&this[4]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[4].OnDirty = 0xffffffff;
    *(undefined4 *)&this[4].OnDirty.field_0x4 = 0;
    *(undefined8 *)&this[4].OnDirty.field_0x10 = 0;
    *(undefined4 *)&this[4].UniqueKey = 0;
    this[4].MyDataSet.WeakPtr.ObjectIndex = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// UDS_NPCGimmickData @ 14ba91ba0

UDS_NPCGimmickData * __thiscall
UDS_NPCGimmickData::UDS_NPCGimmickData(UDS_NPCGimmickData *this,FObjectInitializer *param_1)

{
  UDS_NPCDataBase::UDS_NPCDataBase((UDS_NPCDataBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_NPCGimmickData__6B_;
  *(undefined8 *)&this->OnChangeSpawnStateDelegate = 0;
  *(undefined8 *)&(this->OnChangeSpawnStateDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnChangeSpawnStateDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnChangeEnableStateDelegate = 0;
  *(undefined8 *)&(this->OnChangeEnableStateDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnChangeEnableStateDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnChangeOpenStateDelegate = 0;
  *(undefined8 *)&(this->OnChangeOpenStateDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnChangeOpenStateDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnChangeInteractionStateDelegate = 0;
  *(undefined8 *)&(this->OnChangeInteractionStateDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnChangeInteractionStateDelegate).field_0x10 = 0;
  *(undefined8 *)&this->InteractionStartDelegate = 0;
  *(undefined8 *)&(this->InteractionStartDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->InteractionStartDelegate).field_0x10 = 0;
  *(undefined8 *)&this->InteractionCancelDelegate = 0;
  *(undefined8 *)&(this->InteractionCancelDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->InteractionCancelDelegate).field_0x10 = 0;
  *(undefined8 *)&this->InteractionCompleteDelegate = 0;
  *(undefined8 *)&(this->InteractionCompleteDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->InteractionCompleteDelegate).field_0x10 = 0;
  *(undefined8 *)&this->AltarBossSummonCompleteDelegate = 0;
  *(undefined8 *)&(this->AltarBossSummonCompleteDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->AltarBossSummonCompleteDelegate).field_0x10 = 0;
  *(undefined8 *)&this->NPCGimmickInfoMap = 0;
  *(undefined8 *)&(this->NPCGimmickInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->NPCGimmickInfoMap).field_0x20 = 0;
  *(undefined8 *)&(this->OnChangeSpawnStateDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->OnChangeEnableStateDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->OnChangeOpenStateDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->OnChangeInteractionStateDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->InteractionStartDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->InteractionCancelDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->InteractionCompleteDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->AltarBossSummonCompleteDelegate).field_0x18 = 2;
  *(undefined4 *)&(this->NPCGimmickInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->NPCGimmickInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->NPCGimmickInfoMap).field_0x34 = 0;
  *(undefined4 *)&(this->NPCGimmickInfoMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NPCGimmickInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->NPCGimmickInfoMap).field_0x48 = 0;
  this->bIsSpawn = false;
  this->bIsEnabled = false;
  this->bIsOpened = false;
  this->bIsInteraction = false;
  return this;
}

// Created @ 14ba9d6e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_NPCGimmickData::Created(UDS_NPCGimmickData *this)

{
  undefined1 *puVar1;
  TMap<int,FDS_NPCGimmickInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NPCGimmickInfo,0>_>
  *this_00;
  bool bVar2;
  FWeakObjectPtr FVar3;
  int iVar4;
  FDS_NpcBaseTableRow *pFVar5;
  UDS_LogManager *pUVar6;
  FDS_NpcGimmickEventTableRow *pFVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auStackY_1d8 [32];
  uint uVar12;
  wchar_t *pwVar13;
  undefined1 local_1a8 [4];
  int local_1a4;
  uint local_1a0;
  FWeakObjectPtr local_198;
  UDS_NPCGimmickData *local_190;
  FWeakObjectPtr local_188;
  int local_180;
  longlong local_17c;
  undefined1 local_174 [12];
  int *local_168;
  FWeakObjectPtr *local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  iVar4 = UDS_DataBase::GetEntityTableID((UDS_DataBase *)this);
  pFVar5 = FDS_NpcBaseTableRow::Get((longlong)iVar4,true);
  if (pFVar5 == (FDS_NpcBaseTableRow *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar6 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_NPCGimmickData::Created",0x1b,Yes);
    pwVar13 = L"NpcBaseTableRow is nullptr";
    uVar12 = 0x22;
  }
  else {
    if (pFVar5->NpcGimmickType != None) {
      this_00 = &this->NPCGimmickInfoMap;
      bVar2 = 1 < *(int *)&(this->NPCGimmickInfoMap).field_0x48;
      if (!bVar2) {
        TSet<TTuple<int,FDS_NPCGimmickInfo>,TDefaultMapHashableKeyFuncs<int,FDS_NPCGimmickInfo,0>,FDefaultSetAllocator>
        ::UnhashElements((TSet<TTuple<int,FDS_NPCGimmickInfo>,TDefaultMapHashableKeyFuncs<int,FDS_NPCGimmickInfo,0>,FDefaultSetAllocator>
                          *)this_00);
      }
      puVar1 = &(this->NPCGimmickInfoMap).field_0xc;
      *(undefined4 *)&(this->NPCGimmickInfoMap).field_0x8 = 0;
      if (*(int *)puVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
      }
      *(undefined4 *)&(this->NPCGimmickInfoMap).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->NPCGimmickInfoMap).field_0x34 = 0;
      iVar4 = *(int *)&(this->NPCGimmickInfoMap).field_0x2c;
      *(undefined4 *)&(this->NPCGimmickInfoMap).field_0x28 = 0;
      if ((iVar4 < 0) || (0x80 < iVar4)) {
        *(undefined4 *)&(this->NPCGimmickInfoMap).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(this->NPCGimmickInfoMap).field_0x10,0);
      }
      if (bVar2) {
        *(undefined4 *)&(this->NPCGimmickInfoMap).field_0x48 = 1;
        TSet<TTuple<int,FDS_NPCGimmickInfo>,TDefaultMapHashableKeyFuncs<int,FDS_NPCGimmickInfo,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<int,FDS_NPCGimmickInfo>,TDefaultMapHashableKeyFuncs<int,FDS_NPCGimmickInfo,0>,FDefaultSetAllocator>
                  *)this_00);
      }
      local_1a0 = (pFVar5->ID_NpcGimmickEvent).ArrayNum;
      uVar8 = (ulonglong)(int)local_1a0;
      pFVar11 = (pFVar5->ID_NpcGimmickEvent).AllocatorInstance.Data;
      pFVar9 = pFVar11 + uVar8 * 4;
      local_174._4_8_ = pFVar9;
      while( true ) {
        if ((pFVar5->ID_NpcGimmickEvent).ArrayNum != (int)uVar8) {
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a8);
        }
        if (pFVar11 == pFVar9) break;
        local_1a4 = *(int *)pFVar11;
        if ((local_1a4 != 0) &&
           (pFVar7 = FDS_NpcGimmickEventTableRow::Get((longlong)local_1a4,true), iVar4 = local_1a4,
           pFVar7 != (FDS_NpcGimmickEventTableRow *)0x0)) {
          lVar10 = (longlong)local_1a4;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this != (UDS_NPCGimmickData *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          local_198.ObjectIndex = 0;
          local_198.ObjectSerialNumber = 0;
          local_190 = this;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this != (UDS_NPCGimmickData *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=(&local_198,(FObjectPtr)&local_190);
          FVar3 = local_198;
          local_188.ObjectIndex = 0;
          local_188.ObjectSerialNumber = 0;
          local_190 = (UDS_NPCGimmickData *)0x0;
          FWeakObjectPtr::operator=(&local_188,(FObjectPtr)&local_190);
          local_17c = 0;
          local_188 = FVar3;
          local_180 = iVar4;
          pFVar7 = FDS_NpcGimmickEventTableRow::Get(lVar10,true);
          if (pFVar7 != (FDS_NpcGimmickEventTableRow *)0x0) {
            local_17c = (ulonglong)(uint)pFVar7->ActionCountMax << 0x20;
          }
          local_168 = &local_1a4;
          local_160 = &local_188;
          TSet<TTuple<int,FDS_NPCGimmickInfo>,TDefaultMapHashableKeyFuncs<int,FDS_NPCGimmickInfo,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<int_&,FDS_NPCGimmickInfo_&&>_>
                    ((TSet<TTuple<int,FDS_NPCGimmickInfo>,TDefaultMapHashableKeyFuncs<int,FDS_NPCGimmickInfo,0>,FDefaultSetAllocator>
                      *)this_00,(TPairInitializer<int_&,FDS_NPCGimmickInfo_&&> *)local_174,
                     (bool *)&local_168);
          pFVar9 = (FScriptContainerElement *)local_174._4_8_;
        }
        uVar8 = (ulonglong)local_1a0;
        pFVar11 = pFVar11 + 4;
      }
      return;
    }
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar6 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_NPCGimmickData::Created",0x1b,Yes);
    pwVar13 = L"NpcGimmickType is none.";
    uVar12 = 0x28;
  }
  UDS_LogManager::PrintLog(pUVar6,1,Warning,local_158.Ptr,uVar12,pwVar13);
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  return;
}

// Deleted @ 14ba9dcb0

void __thiscall UDS_NPCGimmickData::Deleted(UDS_NPCGimmickData *this)

{
  return;
}

// GetData @ 14baa7400

TWeakObjectPtr<UDS_NPCGimmickData,FWeakObjectPtr> __cdecl
UDS_NPCGimmickData::GetData(ulong64 param_1)

{
  int iVar1;
  bool bVar2;
  UDS_DataSetBase *this;
  TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> this_00;
  UObject *pUVar3;
  UClass *pUVar4;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  undefined1 local_18 [16];
  
  TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)&local_res18);
  bVar2 = TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> *)&local_res18,(void *)0x0);
  if (bVar2) {
    *(undefined8 *)param_1 = 0;
    local_res20 = (UObject *)0x0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res20);
    return (TWeakObjectPtr<UDS_NPCGimmickData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_res18);
  this_00 = UDS_DataSetBase::GetData(this,(ulong64)local_18);
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_NPCGimmickData_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14baa74a6;
  }
  pUVar3 = (UObject *)0x0;
LAB_14baa74a6:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  *(undefined8 *)param_1 = 0;
  local_res20 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res20);
  return (TWeakObjectPtr<UDS_NPCGimmickData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetGimmickInfo @ 14baaae60

FDS_NPCGimmickInfo * __thiscall
UDS_NPCGimmickData::GetGimmickInfo
          (UDS_NPCGimmickData *this,FDS_NPCGimmickInfo *__return_storage_ptr__,int param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  FDS_NPCGimmickInfo *pFVar4;
  undefined1 *puVar5;
  undefined8 local_res8;
  
  if (*(int *)&(this->NPCGimmickInfoMap).field_0x8 != *(int *)&(this->NPCGimmickInfoMap).field_0x34)
  {
    puVar5 = *(undefined1 **)&(this->NPCGimmickInfoMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->NPCGimmickInfoMap).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->NPCGimmickInfoMap).field_0x48 - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->NPCGimmickInfoMap;
      do {
        if (*(int *)((longlong)iVar3 * 0x20 + lVar1) == param_1) {
          pFVar4 = TMapBase<int,FDS_NPCGimmickInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NPCGimmickInfo,0>_>
                   ::FindChecked((TMapBase<int,FDS_NPCGimmickInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NPCGimmickInfo,0>_>
                                  *)&this->NPCGimmickInfoMap,param_1);
          iVar3 = pFVar4->GimmickEventID;
          iVar2 = pFVar4->CurrentActionCount;
          (__return_storage_ptr__->NPCGimmickData).WeakPtr = (pFVar4->NPCGimmickData).WeakPtr;
          __return_storage_ptr__->GimmickEventID = iVar3;
          __return_storage_ptr__->CurrentActionCount = iVar2;
          __return_storage_ptr__->MaxActionCount = pFVar4->MaxActionCount;
          return __return_storage_ptr__;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + lVar1);
      } while (iVar3 != -1);
    }
  }
  (__return_storage_ptr__->NPCGimmickData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)__return_storage_ptr__,(FObjectPtr)&local_res8);
  __return_storage_ptr__->GimmickEventID = 0;
  __return_storage_ptr__->CurrentActionCount = 0;
  __return_storage_ptr__->MaxActionCount = 0;
  return __return_storage_ptr__;
}

// GetGimmickInfoList @ 14baaaf10

TArray<FDS_NPCGimmickInfo,TSizedDefaultAllocator<32>_> * __thiscall
UDS_NPCGimmickData::GetGimmickInfoList
          (UDS_NPCGimmickData *this,
          TArray<FDS_NPCGimmickInfo,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TMapBase<int,FDS_NPCGimmickInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NPCGimmickInfo,0>_>
  ::GenerateValueArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<int,FDS_NPCGimmickInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NPCGimmickInfo,0>_>
              *)&this->NPCGimmickInfoMap,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InitByEntityInfo @ 14bab42c0

void __thiscall UDS_NPCGimmickData::InitByEntityInfo(UDS_NPCGimmickData *this)

{
  return;
}

// ResetData @ 14bac9b60

void __thiscall UDS_NPCGimmickData::ResetData(UDS_NPCGimmickData *this)

{
  return;
}

// SetActionCount @ 14baca950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_NPCGimmickData::SetActionCount(UDS_NPCGimmickData *this,int param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  UDS_LogManager *pUVar3;
  FDS_NPCGimmickInfo *pFVar4;
  undefined1 *puVar5;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (*(int *)&(this->NPCGimmickInfoMap).field_0x8 != *(int *)&(this->NPCGimmickInfoMap).field_0x34)
  {
    puVar5 = *(undefined1 **)&(this->NPCGimmickInfoMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->NPCGimmickInfoMap).field_0x38;
    }
    iVar2 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->NPCGimmickInfoMap).field_0x48 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->NPCGimmickInfoMap;
      do {
        if (*(int *)((longlong)iVar2 * 0x20 + lVar1) == param_1) {
          pFVar4 = TMapBase<int,FDS_NPCGimmickInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NPCGimmickInfo,0>_>
                   ::FindChecked((TMapBase<int,FDS_NPCGimmickInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NPCGimmickInfo,0>_>
                                  *)&this->NPCGimmickInfoMap,param_1);
          pFVar4->CurrentActionCount = param_2;
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + 0x18 + lVar1);
      } while (iVar2 != -1);
    }
  }
  pUVar3 = UDS_LogManager::GetInst();
  if (pUVar3 != (UDS_LogManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_NPCGimmickData::SetActionCount",0x22,Yes);
    UDS_LogManager::PrintLog
              (pUVar3,1,Warning,local_138.Ptr,0x87,L"can not found GimmickEventID: %d");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return;
}

// SetIsEnabled @ 14baccf70

void __thiscall UDS_NPCGimmickData::SetIsEnabled(UDS_NPCGimmickData *this,bool param_1)

{
  this->bIsEnabled = param_1;
  this->bIsInteraction = param_1;
  TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnChangeInteractionStateDelegate,param_1);
  TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnChangeEnableStateDelegate,this->bIsEnabled);
  return;
}

// SetIsInteraction @ 14baccfb0

void __thiscall UDS_NPCGimmickData::SetIsInteraction(UDS_NPCGimmickData *this,bool param_1)

{
  this->bIsInteraction = param_1;
  TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnChangeInteractionStateDelegate,param_1);
  return;
}

// SetIsOpened @ 14baccfd0

void __thiscall UDS_NPCGimmickData::SetIsOpened(UDS_NPCGimmickData *this,bool param_1)

{
  this->bIsOpened = param_1;
  TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnChangeOpenStateDelegate,param_1);
  return;
}

// SetIsSpawn @ 14baccff0

void __thiscall
UDS_NPCGimmickData::SetIsSpawn(UDS_NPCGimmickData *this,bool param_1,bool param_2,bool param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_48;
  
  this->bIsSpawn = param_1;
  this->bIsEnabled = param_2;
  this->bIsOpened = param_3;
  this->bIsInteraction = param_2;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnChangeSpawnStateDelegate,(FWriteAccessScope *)&local_48);
  puVar1 = &(this->OnChangeSpawnStateDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar9 = *(int *)&(this->OnChangeSpawnStateDelegate).field_0x10 - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(this->OnChangeSpawnStateDelegate).field_0x10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->OnChangeSpawnStateDelegate).field_0x8;
      if (((*(int *)(lVar2 + 8 + lVar10) == 0) ||
          (plVar3 = *(longlong **)(lVar2 + lVar10), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(plVar3,param_1,param_2,param_3), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  puVar1 = &(this->OnChangeSpawnStateDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnChangeSpawnStateDelegate,false);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return;
}

