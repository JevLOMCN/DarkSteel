// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// StaticClass @ 14b579af0

UClass * __cdecl UDS_RecvTamingProcess::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_RecvTamingProcess.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RecvTamingProcess",
               &Z_Registration_Info_UClass_UDS_RecvTamingProcess.InnerSingleton,
               StaticRegisterNativesUDS_RecvTamingProcess,0x90,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_RecvTamingProcess>,
               InternalVTableHelperCtorCaller<UDS_RecvTamingProcess>,local_res8,
               UDS_RecvProcessBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_RecvTamingProcess.InnerSingleton;
}

// UDS_RecvTamingProcess @ 14b57e000

UDS_RecvTamingProcess * __thiscall
UDS_RecvTamingProcess::UDS_RecvTamingProcess(UDS_RecvTamingProcess *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined4 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x50 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined8 *)&this->field_0x70 = 0;
  this->field_0x78 = 0;
  *(undefined8 *)&this->field_0x80 = 0;
  *(undefined ***)this = &___7UDS_RecvTamingProcess__6B_;
  return this;
}

// ~UDS_RecvTamingProcess @ 14b57e770

void __thiscall UDS_RecvTamingProcess::~UDS_RecvTamingProcess(UDS_RecvTamingProcess *this)

{
  *(undefined ***)this = &___7UDS_RecvProcessBase__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x28);
  if (*(void **)&this->field_0x30 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x30);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x28);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b580640

UClass * __cdecl UDS_RecvTamingProcess::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_RecvTamingProcess.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RecvTamingProcess",
               &Z_Registration_Info_UClass_UDS_RecvTamingProcess.InnerSingleton,
               StaticRegisterNativesUDS_RecvTamingProcess,0x90,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_RecvTamingProcess>,
               InternalVTableHelperCtorCaller<UDS_RecvTamingProcess>,local_res8,
               UDS_RecvProcessBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_RecvTamingProcess.InnerSingleton;
}

// StaticRegisterNativesUDS_RecvTamingProcess @ 14b5809e0

void __cdecl UDS_RecvTamingProcess::StaticRegisterNativesUDS_RecvTamingProcess(void)

{
  return;
}

// UDS_RecvTamingProcess @ 14bba9130

UDS_RecvTamingProcess * __thiscall
UDS_RecvTamingProcess::UDS_RecvTamingProcess
          (UDS_RecvTamingProcess *this,FObjectInitializer *param_1)

{
  UDS_RecvProcessBase::UDS_RecvProcessBase((UDS_RecvProcessBase *)this,param_1);
  *(undefined ***)this = &___7UDS_RecvTamingProcess__6B_;
  return this;
}

// HandleDebugInfo @ 14bbbfac0

void __thiscall
UDS_RecvTamingProcess::HandleDebugInfo(UDS_RecvTamingProcess *this,FDS_NetSyncData *param_1)

{
  return;
}

// Initialize @ 14bbc0600

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
UDS_RecvTamingProcess::Initialize
          (UDS_RecvTamingProcess *this,TWeakObjectPtr<AActor,FWeakObjectPtr> param_1)

{
  EDS_EntityType EVar1;
  FDS_EntityBase *pFVar2;
  undefined8 *puVar3;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar4;
  TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> TVar5;
  TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr> TVar6;
  TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> TVar7;
  undefined1 auStackX_18 [16];
  
  pFVar2 = FDS_EntityBase::GetEntityBaseFromActor(param_1);
  if (pFVar2 != (FDS_EntityBase *)0x0) {
    *(ulong64 *)&this->field_0x70 = pFVar2->EntityID;
    EVar1 = pFVar2->EntityType;
    this->field_0x78 = EVar1;
    *(long64 *)&this->field_0x80 = pFVar2->TableID;
    if (EVar1 == DummyCharacter) {
      FDS_EntityBase::GetMainPlayerEntityBase(true);
    }
    puVar3 = (undefined8 *)(**(code **)(pFVar2->_padding_ + 0x150))(pFVar2,auStackX_18);
    *(undefined8 *)&this->field_0x40 = *puVar3;
    puVar3 = (undefined8 *)(**(code **)(pFVar2->_padding_ + 0x78))(pFVar2,auStackX_18);
    *(undefined8 *)&this->field_0x48 = *puVar3;
    TVar4 = UDS_CharStateData::GetData((ulong64)auStackX_18);
    *(undefined8 *)&this->field_0x50 = *(undefined8 *)TVar4.WeakPtr;
    TVar5 = UDS_CharInfoData::GetData((ulong64)auStackX_18);
    *(undefined8 *)&this->field_0x58 = *(undefined8 *)TVar5.WeakPtr;
    TVar6 = UDS_EntityData::GetData((ulong64)auStackX_18,*(ulong64 *)&this->field_0x70);
    *(undefined8 *)&this->field_0x60 = *(undefined8 *)TVar6.WeakPtr;
    TVar7 = UDS_CharStatusData::GetData((ulong64)auStackX_18);
    *(undefined8 *)&this->field_0x68 = *(undefined8 *)TVar7.WeakPtr;
  }
  return;
}

// IsActiveRecvProcess @ 14bbc3070

bool __thiscall
UDS_RecvTamingProcess::IsActiveRecvProcess(UDS_RecvTamingProcess *this,FDS_NetSyncData *param_1)

{
  bool bVar1;
  UDS_CharStateData *this_00;
  EDS_CharDetailState local_res8 [8];
  
  bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&this->field_0x50,
                     (void *)0x0);
  if (!bVar1) {
    this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x50);
    local_res8[0] = Interaction_NPCTaming;
    bVar1 = UDS_CharStateData::HasCharDetailState(this_00,local_res8);
    return bVar1;
  }
  return false;
}

// OnEnter @ 14bbc8d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_RecvTamingProcess::OnEnter(UDS_RecvTamingProcess *this,FDS_NetSyncData *param_1)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar1 = UDS_LogManager::GetInst();
  if (pUVar1 != (UDS_LogManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_RecvTamingProcess::OnEnter",0x1e,Yes);
    UDS_LogManager::PrintLog(pUVar1,1,Display,local_138.Ptr,0x1a,L"Enter UDS_RecvTamingProcess");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return;
}

// OnExit @ 14bbc94e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_RecvTamingProcess::OnExit(UDS_RecvTamingProcess *this,FDS_NetSyncData *param_1)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar1 = UDS_LogManager::GetInst();
  if (pUVar1 != (UDS_LogManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_RecvTamingProcess::OnExit",0x1d,Yes);
    UDS_LogManager::PrintLog(pUVar1,1,Display,local_138.Ptr,0x22,L"Exit UDS_RecvTamingProcess");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return;
}

// RecvSyncTick @ 14bbd73c0

void __thiscall
UDS_RecvTamingProcess::RecvSyncTick
          (UDS_RecvTamingProcess *this,FDS_NetSyncData *param_1,float param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014bbd73c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x2e0))();
  return;
}

