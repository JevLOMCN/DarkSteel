// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// StaticClass @ 14b5b94e0

UClass * __cdecl UDS_TimeCoolDown::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_TimeCoolDown.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TimeCoolDown",
               &Z_Registration_Info_UClass_UDS_TimeCoolDown.InnerSingleton,
               StaticRegisterNativesUDS_TimeCoolDown,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_TimeCoolDown>,
               InternalVTableHelperCtorCaller<UDS_TimeCoolDown>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_TimeCoolDown.InnerSingleton;
}

// UDS_TimeCoolDown @ 14b5bd5c0

UDS_TimeCoolDown * __thiscall
UDS_TimeCoolDown::UDS_TimeCoolDown(UDS_TimeCoolDown *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_TimeCoolDown__6B_;
  this->EntityID = 0;
  *(undefined8 *)&this->CoolDownMap = 0;
  *(undefined8 *)&(this->CoolDownMap).field_0x8 = 0;
  *(undefined8 *)&(this->CoolDownMap).field_0x20 = 0;
  *(undefined4 *)&(this->CoolDownMap).field_0x28 = 0;
  *(undefined4 *)&(this->CoolDownMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CoolDownMap).field_0x34 = 0;
  *(undefined4 *)&(this->CoolDownMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CoolDownMap).field_0x40 = 0;
  *(undefined4 *)&(this->CoolDownMap).field_0x48 = 0;
  *(undefined8 *)&this->CoolDownTimerHandleMap = 0;
  *(undefined8 *)&(this->CoolDownTimerHandleMap).field_0x8 = 0;
  *(undefined8 *)&(this->CoolDownTimerHandleMap).field_0x20 = 0;
  *(undefined4 *)&(this->CoolDownTimerHandleMap).field_0x28 = 0;
  *(undefined4 *)&(this->CoolDownTimerHandleMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CoolDownTimerHandleMap).field_0x34 = 0;
  *(undefined4 *)&(this->CoolDownTimerHandleMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CoolDownTimerHandleMap).field_0x40 = 0;
  *(undefined4 *)&(this->CoolDownTimerHandleMap).field_0x48 = 0;
  return this;
}

// UDS_TimeCoolDown @ 14b5bd660

UDS_TimeCoolDown * __thiscall
UDS_TimeCoolDown::UDS_TimeCoolDown(UDS_TimeCoolDown *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_TimeCoolDown__6B_;
  this->EntityID = 0;
  *(undefined8 *)&this->CoolDownMap = 0;
  *(undefined8 *)&(this->CoolDownMap).field_0x8 = 0;
  *(undefined8 *)&(this->CoolDownMap).field_0x20 = 0;
  *(undefined4 *)&(this->CoolDownMap).field_0x28 = 0;
  *(undefined4 *)&(this->CoolDownMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CoolDownMap).field_0x34 = 0;
  *(undefined4 *)&(this->CoolDownMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CoolDownMap).field_0x40 = 0;
  *(undefined4 *)&(this->CoolDownMap).field_0x48 = 0;
  *(undefined8 *)&this->CoolDownTimerHandleMap = 0;
  *(undefined8 *)&(this->CoolDownTimerHandleMap).field_0x8 = 0;
  *(undefined8 *)&(this->CoolDownTimerHandleMap).field_0x20 = 0;
  *(undefined4 *)&(this->CoolDownTimerHandleMap).field_0x28 = 0;
  *(undefined4 *)&(this->CoolDownTimerHandleMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CoolDownTimerHandleMap).field_0x34 = 0;
  *(undefined4 *)&(this->CoolDownTimerHandleMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CoolDownTimerHandleMap).field_0x40 = 0;
  *(undefined4 *)&(this->CoolDownTimerHandleMap).field_0x48 = 0;
  return this;
}

// ~UDS_TimeCoolDown @ 14b5be210

void __thiscall UDS_TimeCoolDown::~UDS_TimeCoolDown(UDS_TimeCoolDown *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_TimeCoolDown__6B_;
  *(undefined4 *)&(this->CoolDownTimerHandleMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CoolDownTimerHandleMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_CoolDownType,FTimerHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_CoolDownType,FTimerHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->CoolDownTimerHandleMap);
  *(undefined4 *)&(this->CoolDownMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CoolDownMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_CoolDownType,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_CoolDownType,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->CoolDownMap);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b5bfd20

UClass * __cdecl UDS_TimeCoolDown::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_TimeCoolDown.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TimeCoolDown",
               &Z_Registration_Info_UClass_UDS_TimeCoolDown.InnerSingleton,
               StaticRegisterNativesUDS_TimeCoolDown,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_TimeCoolDown>,
               InternalVTableHelperCtorCaller<UDS_TimeCoolDown>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_TimeCoolDown.InnerSingleton;
}

// StaticRegisterNativesUDS_TimeCoolDown @ 14b5c00f0

void __cdecl UDS_TimeCoolDown::StaticRegisterNativesUDS_TimeCoolDown(void)

{
  return;
}

// ClearAll @ 14bb54d70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_TimeCoolDown::ClearAll(UDS_TimeCoolDown *this)

{
  undefined1 *puVar1;
  TMap<EDS_CoolDownType,FTimerHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_CoolDownType,FTimerHandle,0>_>
  *this_00;
  FScriptContainerElement *pFVar2;
  int iVar3;
  bool bVar4;
  FTimerManager *this_01;
  FTimerData *pFVar5;
  ulonglong uVar6;
  ForAnyElementType FVar7;
  undefined1 local_res8 [8];
  TArray<FTimerHandle,TSizedDefaultAllocator<32>_> local_38;
  
  this_00 = &this->CoolDownTimerHandleMap;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  TMapBase<enum_EDS_CoolDownType,FTimerHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CoolDownType,FTimerHandle,0>_>
  ::GenerateValueArray<TSizedDefaultAllocator<32>_>(this_00,&local_38);
  iVar3 = local_38.ArrayNum;
  uVar6 = (ulonglong)local_38.ArrayNum;
  pFVar2 = local_38.AllocatorInstance.Data + uVar6 * 8;
  FVar7.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar6 != iVar3) {
      `TCheckedPointerIterator<FTimerHandle,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar7.Data == pFVar2) break;
    this_01 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar5 = FTimerManager::FindTimer(this_01,(FTimerHandle *)FVar7.Data);
    if (pFVar5 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(this_01,(FTimerHandle)*(ulong64 *)FVar7.Data);
    }
    *(ulong64 *)FVar7.Data = 0;
    FVar7.Data = FVar7.Data + 8;
    uVar6 = local_38._8_8_ & 0xffffffff;
  }
  bVar4 = 1 < *(int *)&(this->CoolDownMap).field_0x48;
  if (!bVar4) {
    TSet<TTuple<enum_EDS_CoolDownType,double>,TDefaultMapHashableKeyFuncs<enum_EDS_CoolDownType,double,0>,FDefaultSetAllocator>
    ::UnhashElements(&this->CoolDownMap);
  }
  puVar1 = &(this->CoolDownMap).field_0xc;
  *(undefined4 *)&(this->CoolDownMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&this->CoolDownMap,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->CoolDownMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CoolDownMap).field_0x34 = 0;
  iVar3 = *(int *)&(this->CoolDownMap).field_0x2c;
  *(undefined4 *)&(this->CoolDownMap).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->CoolDownMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->CoolDownMap).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->CoolDownMap).field_0x48 = 1;
    TSet<TTuple<enum_EDS_CoolDownType,double>,TDefaultMapHashableKeyFuncs<enum_EDS_CoolDownType,double,0>,FDefaultSetAllocator>
    ::Rehash(&this->CoolDownMap);
  }
  bVar4 = 1 < *(int *)&(this->CoolDownTimerHandleMap).field_0x48;
  if (!bVar4) {
    TSet<TTuple<enum_EDS_CoolDownType,FTimerHandle>,TDefaultMapHashableKeyFuncs<enum_EDS_CoolDownType,FTimerHandle,0>,FDefaultSetAllocator>
    ::UnhashElements(this_00);
  }
  puVar1 = &(this->CoolDownTimerHandleMap).field_0xc;
  *(undefined4 *)&(this->CoolDownTimerHandleMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->CoolDownTimerHandleMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CoolDownTimerHandleMap).field_0x34 = 0;
  iVar3 = *(int *)&(this->CoolDownTimerHandleMap).field_0x2c;
  *(undefined4 *)&(this->CoolDownTimerHandleMap).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->CoolDownTimerHandleMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->CoolDownTimerHandleMap).field_0x10,0)
    ;
  }
  if (bVar4) {
    *(undefined4 *)&(this->CoolDownTimerHandleMap).field_0x48 = 1;
    TSet<TTuple<enum_EDS_CoolDownType,FTimerHandle>,TDefaultMapHashableKeyFuncs<enum_EDS_CoolDownType,FTimerHandle,0>,FDefaultSetAllocator>
    ::Rehash(this_00);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// GetCoolDownEndTime @ 14bb63e60

double __thiscall
UDS_TimeCoolDown::GetCoolDownEndTime(UDS_TimeCoolDown *this,EDS_CoolDownType param_1)

{
  double *pdVar1;
  
  pdVar1 = TMapBase<enum_EDS_CoolDownType,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CoolDownType,double,0>_>
           ::Find(&this->CoolDownMap,param_1);
  if (pdVar1 != (double *)0x0) {
    return *pdVar1;
  }
  return 0.0;
}

// GetCoolDownRemainTime @ 14bb63f40

double __thiscall
UDS_TimeCoolDown::GetCoolDownRemainTime(UDS_TimeCoolDown *this,EDS_CoolDownType param_1)

{
  double *pdVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  pdVar1 = TMapBase<enum_EDS_CoolDownType,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CoolDownType,double,0>_>
           ::Find(&this->CoolDownMap,param_1);
  if (pdVar1 == (double *)0x0) {
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = SUB84(*pdVar1,0);
    uVar4 = (undefined4)((ulonglong)*pdVar1 >> 0x20);
  }
  dVar2 = UDS_TimeUtilManager::GetCurrentServerTime();
  dVar2 = (double)CONCAT44(uVar4,uVar3) - dVar2;
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  return dVar2;
}

// GetCoolDownTime @ 14bb64060

double __cdecl UDS_TimeCoolDown::GetCoolDownTime(EDS_CoolDownType param_1)

{
  FDS_TimeCoolDownTableRow *pFVar1;
  
  pFVar1 = FDS_TimeCoolDownTableRow::GetRef((longlong)(int)param_1,true);
  return (double)pFVar1->CoolTime;
}

// HasCoolDown @ 14bb69930

bool __thiscall UDS_TimeCoolDown::HasCoolDown(UDS_TimeCoolDown *this,EDS_CoolDownType param_1)

{
  double *pdVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  pdVar1 = TMapBase<enum_EDS_CoolDownType,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CoolDownType,double,0>_>
           ::Find(&this->CoolDownMap,param_1);
  if (pdVar1 == (double *)0x0) {
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = SUB84(*pdVar1,0);
    uVar4 = (undefined4)((ulonglong)*pdVar1 >> 0x20);
  }
  dVar2 = UDS_TimeUtilManager::GetCurrentServerTime();
  dVar2 = (double)CONCAT44(uVar4,uVar3) - dVar2;
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  return 0.0 < dVar2;
}

// Initialize @ 14bb6ddf0

void __thiscall UDS_TimeCoolDown::Initialize(UDS_TimeCoolDown *this,ulong64 param_1)

{
  this->EntityID = param_1;
  return;
}

// RemoveCoolDown @ 14bb83ae0

void __thiscall UDS_TimeCoolDown::RemoveCoolDown(UDS_TimeCoolDown *this,EDS_CoolDownType param_1)

{
  EDS_CoolDownType local_res10 [6];
  
  if (*(int *)&(this->CoolDownMap).field_0x8 != *(int *)&(this->CoolDownMap).field_0x34) {
    local_res10[0] = param_1;
    TSet<TTuple<enum_EDS_CoolDownType,double>,TDefaultMapHashableKeyFuncs<enum_EDS_CoolDownType,double,0>,FDefaultSetAllocator>
    ::RemoveImpl<enum_EDS_CoolDownType>(&this->CoolDownMap,param_1,local_res10);
  }
  if (*(int *)&(this->CoolDownTimerHandleMap).field_0x8 !=
      *(int *)&(this->CoolDownTimerHandleMap).field_0x34) {
    local_res10[0] = param_1;
    TSet<TTuple<enum_EDS_CoolDownType,FTimerHandle>,TDefaultMapHashableKeyFuncs<enum_EDS_CoolDownType,FTimerHandle,0>,FDefaultSetAllocator>
    ::RemoveImpl<enum_EDS_CoolDownType>(&this->CoolDownTimerHandleMap,param_1,local_res10);
  }
  return;
}

// StartCoolDown @ 14bb90c70

FTimerHandle __thiscall
UDS_TimeCoolDown::StartCoolDown(UDS_TimeCoolDown *this,EDS_CoolDownType param_1,double param_2)

{
  code *pcVar1;
  bool bVar2;
  FDS_TimeCoolDownTableRow *pFVar3;
  double *pdVar4;
  FTimerHandle FVar5;
  undefined4 in_register_00000014;
  undefined8 *puVar6;
  EDS_CoolDownType in_R8D;
  double dVar7;
  undefined4 in_XMM3_Da;
  undefined4 in_XMM3_Db;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 local_res8 [16];
  EDS_CoolDownType local_res18 [2];
  double local_res20;
  EDS_CoolDownType *local_68;
  double *local_60;
  EDS_CoolDownType *local_58;
  undefined8 *local_50;
  
  puVar6 = (undefined8 *)CONCAT44(in_register_00000014,param_1);
  local_res18[0] = in_R8D;
  dVar7 = UDS_TimeUtilManager::GetCurrentServerTime();
  if ((double)CONCAT44(in_XMM3_Db,in_XMM3_Da) < 0.0 ||
      (double)CONCAT44(in_XMM3_Db,in_XMM3_Da) == 0.0) {
    pFVar3 = FDS_TimeCoolDownTableRow::GetRef((longlong)(int)local_res18[0],true);
    local_res20 = (double)pFVar3->CoolTime;
  }
  else {
    local_res20 = (double)CONCAT44(in_XMM3_Db,in_XMM3_Da) - dVar7;
  }
  local_res20 = local_res20 + dVar7;
  pdVar4 = TMapBase<enum_EDS_CoolDownType,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CoolDownType,double,0>_>
           ::Find(&this->CoolDownMap,local_res18[0]);
  if (pdVar4 == (double *)0x0) {
    uVar8 = 0;
    uVar9 = 0;
  }
  else {
    uVar8 = SUB84(*pdVar4,0);
    uVar9 = (undefined4)((ulonglong)*pdVar4 >> 0x20);
  }
  dVar7 = UDS_TimeUtilManager::GetCurrentServerTime();
  dVar7 = (double)CONCAT44(uVar9,uVar8) - dVar7;
  if (dVar7 <= 0.0) {
    dVar7 = 0.0;
  }
  if (0.0 < dVar7) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6995243256816599010>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_TimeCoolDownManager.cpp"
                       ,0x1e,"HasCoolDown(InCoolDownType) == false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar5.Handle = (*pcVar1)();
      return (FTimerHandle)FVar5.Handle;
    }
  }
  local_68 = local_res18;
  *puVar6 = 0;
  local_60 = &local_res20;
  TSet<TTuple<enum_EDS_CoolDownType,double>,TDefaultMapHashableKeyFuncs<enum_EDS_CoolDownType,double,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_CoolDownType_&,double_&>_>
            (&this->CoolDownMap,(TPairInitializer<EDS_CoolDownType_&,double_&> *)local_res8,
             (bool *)&local_68);
  local_58 = local_res18;
  local_50 = puVar6;
  TSet<TTuple<enum_EDS_CoolDownType,FTimerHandle>,TDefaultMapHashableKeyFuncs<enum_EDS_CoolDownType,FTimerHandle,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_CoolDownType_&,FTimerHandle_&>_>
            (&this->CoolDownTimerHandleMap,
             (TPairInitializer<EDS_CoolDownType_&,FTimerHandle_&> *)(local_res8 + 8),
             (bool *)&local_58);
  return (FTimerHandle)(ulong64)puVar6;
}

