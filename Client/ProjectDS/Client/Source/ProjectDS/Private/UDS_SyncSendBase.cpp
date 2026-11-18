// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// StaticClass @ 14b5af350

UClass * __cdecl UDS_SyncSendBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SyncSendBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SyncSendBase",
               &Z_Registration_Info_UClass_UDS_SyncSendBase.InnerSingleton,
               StaticRegisterNativesUDS_SyncSendBase,0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_SyncSendBase>,
               InternalVTableHelperCtorCaller<UDS_SyncSendBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SyncSendBase.InnerSingleton;
}

// UDS_SyncSendBase @ 14b5b1e90

UDS_SyncSendBase * __thiscall
UDS_SyncSendBase::UDS_SyncSendBase(UDS_SyncSendBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IDS_SyncSendInterface__;
  (this->OwnerActor).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OwnerMovementCore).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OwnerCharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  this->SendSkip = false;
  return this;
}

// ~UDS_SyncSendBase @ 14b5b28f0

void __thiscall UDS_SyncSendBase::~UDS_SyncSendBase(UDS_SyncSendBase *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IDS_SyncSendInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b5b48c0

UClass * __cdecl UDS_SyncSendBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SyncSendBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SyncSendBase",
               &Z_Registration_Info_UClass_UDS_SyncSendBase.InnerSingleton,
               StaticRegisterNativesUDS_SyncSendBase,0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_SyncSendBase>,
               InternalVTableHelperCtorCaller<UDS_SyncSendBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SyncSendBase.InnerSingleton;
}

// StaticRegisterNativesUDS_SyncSendBase @ 14b5b5950

void __cdecl UDS_SyncSendBase::StaticRegisterNativesUDS_SyncSendBase(void)

{
  return;
}

// _getUObject @ 14b5b7490

UObject * __thiscall UDS_SyncSendBase::_getUObject(UDS_SyncSendBase *this)

{
  return (UObject *)&this[-1]._padding_;
}

// UDS_SyncSendBase @ 14bba9470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_SyncSendBase * __thiscall
UDS_SyncSendBase::UDS_SyncSendBase(UDS_SyncSendBase *this,FObjectInitializer *param_1)

{
  FString *pFVar1;
  size_t sVar2;
  UClass *pUVar3;
  UEnum *this_00;
  FName *pFVar4;
  long64 lVar5;
  UDS_LogManager *pUVar6;
  longlong lVar7;
  ForAnyElementType FVar8;
  undefined1 auStackY_1d8 [32];
  FString local_198;
  TStringView<wchar_t> local_188;
  ForAnyElementType local_178;
  int local_170;
  int local_16c;
  FString local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IDS_SyncSendInterface__;
  (this->OwnerActor).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OwnerMovementCore).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OwnerCharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  this->SendSkip = false;
  local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_198.Data.ArrayNum = 0;
  local_198.Data.ArrayMax = 0;
  if (this->_padding_ != 0) {
    local_188.DataPtr = *(wchar_t **)(this->_padding_ + 0x18);
    ::FName::ToString((FName *)&local_188,&local_198);
  }
  pFVar1 = ::FString::Replace(&local_198,&local_168,L"DS_",L"",IgnoreCase);
  if (&local_198 != pFVar1) {
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
    local_198.Data.AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_198.Data.ArrayNum = (pFVar1->Data).ArrayNum;
    local_198.Data.ArrayMax = (pFVar1->Data).ArrayMax;
    (pFVar1->Data).ArrayNum = 0;
    (pFVar1->Data).ArrayMax = 0;
  }
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_168,"EDS_SyncSendType");
  FVar8.Data = local_198.Data.AllocatorInstance.Data;
  lVar7 = (longlong)local_198.Data.ArrayNum;
  local_178.Data = (FScriptContainerElement *)0x0;
  local_170 = local_198.Data.ArrayNum;
  local_188.Size = 0;
  if (local_198.Data.ArrayNum == 0) {
    local_16c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_198.Data.ArrayNum,0,&local_178,local_198.Data.ArrayNum,&local_16c);
    memcpy(local_178.Data,FVar8.Data,lVar7 * 2);
  }
  if (local_168.Data.ArrayNum == 0) {
    local_188.DataPtr = L"";
  }
  else {
    local_188.DataPtr = (wchar_t *)local_168.Data.AllocatorInstance.Data;
    if (local_168.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_14bba95fb;
  }
  sVar2 = wcslen(local_188.DataPtr);
  local_188.Size = (int)sVar2;
LAB_14bba95fb:
  pUVar3 = Z_Construct_UClass_UEnum_NoRegister();
  this_00 = (UEnum *)StaticFindFirstObjectSafe(pUVar3,&local_188,None,NoLogging,(wchar_t *)0x0);
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_170 != 0) {
    FVar8.Data = local_178.Data;
  }
  pFVar4 = ::FName::FName((FName *)&local_188,(wchar_t *)FVar8.Data);
  lVar5 = UEnum::GetValueByName(this_00,*pFVar4,None);
  if (local_178.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data);
  }
  this->SyncSendType = (EDS_SyncSendType)lVar5;
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  if ((this->SyncSendType == ~SyncSendBase) &&
     (pUVar6 = UDS_LogManager::GetInst(), pUVar6 != (UDS_LogManager *)0x0)) {
    pUVar6 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_SyncSendBase::UDS_SyncSendBase",0x22,Yes);
    UDS_LogManager::PrintLog(pUVar6,1,Warning,local_158.Ptr,0x1f,L"Null EDS_SyncSendType");
    if ((void *)local_158._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_158._padding_);
    }
  }
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  return this;
}

// GetAccelerationValue @ 14bbbb060

float __thiscall
UDS_SyncSendBase::GetAccelerationValue(UDS_SyncSendBase *this,int param_1,float param_2)

{
  UObject *pUVar1;
  uint uVar2;
  float fVar3;
  
  if ((char)param_1 != '\0') {
    uVar2 = param_1 & 0xff;
    if (uVar2 == 1) {
      pUVar1 = FWeakObjectPtr::Get(&(this->OwnerMovementCore).WeakPtr);
                    /* WARNING: Could not recover jumptable at 0x00014bbbb0bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      fVar3 = (float)(**(code **)(*(longlong *)pUVar1 + 0x3b0))
                               (pUVar1,*(code **)(*(longlong *)pUVar1 + 0x3b0));
      return fVar3;
    }
    if ((uVar2 != 2) && (uVar2 == 3)) {
      pUVar1 = FWeakObjectPtr::Get(&(this->OwnerMovementCore).WeakPtr);
      uVar2 = (**(code **)(*(longlong *)pUVar1 + 0x3c0))(pUVar1);
      return (float)(uVar2 ^ __xmm_80000000800000008000000080000000);
    }
  }
  return 0.0;
}

// GetNowMoveStateType @ 14bbbc9f0

int __thiscall
UDS_SyncSendBase::GetNowMoveStateType(UDS_SyncSendBase *this,FDS_NetSyncData *param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  double dVar3;
  int iVar4;
  UDS_MovementCore *this_00;
  float fVar5;
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 in_XMM3 [16];
  double dVar8;
  double dVar9;
  
  dVar3 = __real_3f1a36e2e0000000;
  dVar8 = (param_1->TransformValue).field0_0x0._s_0.X;
  dVar9 = (param_1->TransformValue).field0_0x0._s_0.Y;
  auVar6._0_8_ = dVar9 * dVar9 + dVar8 * dVar8;
  auVar6._8_8_ = 0;
  auVar6 = sqrtpd(auVar6,auVar6);
  if (__real_3f1a36e2e0000000 < auVar6._0_8_) {
    this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get(&(this->OwnerMovementCore).WeakPtr);
    fVar5 = UDS_MovementCore::GetMaxMoveSpeed(this_00);
    dVar8 = (param_1->TransformValue).field0_0x0._s_0.X;
    dVar9 = (param_1->TransformValue).field0_0x0._s_0.Y;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = dVar9 * dVar9 + dVar8 * dVar8;
    auVar6 = sqrtpd(in_XMM3,auVar2);
    dVar7 = auVar6._0_8_ - (double)fVar5;
    if (dVar3 < (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      uVar1 = *(undefined8 *)&(param_1->InputValue).field0_0x0;
      if ((dVar3 < (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
         (uVar1 = *(undefined8 *)((longlong)&(param_1->InputValue).field0_0x0 + 8), iVar4 = 3,
         dVar3 < (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
        iVar4 = 1;
      }
    }
    else {
      iVar4 = 2;
    }
  }
  else {
    iVar4 = 0;
  }
  if ((float)(dVar8 * (param_1->VelocityVector).field0_0x0._s_0.X +
              dVar9 * (param_1->VelocityVector).field0_0x0._s_0.Y +
             (param_1->TransformValue).field0_0x0._s_0.Z *
             (param_1->VelocityVector).field0_0x0._s_0.Z) < 0.0) {
    iVar4 = 3;
  }
  return iVar4;
}

// Initialize @ 14bbc0aa0

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
UDS_SyncSendBase::Initialize
          (UDS_SyncSendBase *this,TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> param_1)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  UDS_LogManager *pUVar3;
  FWeakObjectPtr *this_00;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar4;
  undefined1 auStackY_178 [32];
  uint uVar5;
  wchar_t *pwVar6;
  UObject *local_148;
  undefined1 local_140 [8];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  *(FWeakObjectPtr *)((longlong)&this->_padding_ + 4) = param_1.WeakPtr;
  pFVar2 = FDS_EntityBase::GetEntityBaseFromActor
                     ((TWeakObjectPtr<AActor,FWeakObjectPtr>)param_1.WeakPtr);
  if (pFVar2 == (FDS_EntityBase *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_SyncSendBase::Initialize",0x1c,Yes);
    pwVar6 = L"OwnerEntityBase is nullptr.";
    uVar5 = 0x2a;
  }
  else {
    this_00 = (FWeakObjectPtr *)(**(code **)(pFVar2->_padding_ + 0x78))(pFVar2,local_140);
    local_148 = FWeakObjectPtr::Get(this_00);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_148 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_148);
    }
    FWeakObjectPtr::operator=
              ((FWeakObjectPtr *)((longlong)&this->_padding_ + 4),(FObjectPtr)&local_148);
    bVar1 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)
                       ((longlong)&this->_padding_ + 4),(void *)0x0);
    if (!bVar1) {
      TVar4 = UDS_CharStateData::GetData((ulong64)local_140);
      *(undefined8 *)((longlong)&this->_padding_ + 4) = *(undefined8 *)TVar4.WeakPtr;
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_SyncSendBase::Initialize",0x1c,Yes);
    pwVar6 = L"OwnerMovementCore is nullptr.";
    uVar5 = 0x31;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,uVar5,pwVar6);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// IsAvailableSync @ 14bbc3130

bool __thiscall
UDS_SyncSendBase::IsAvailableSync(UDS_SyncSendBase *this,FDS_NetSyncData *param_1,float param_2)

{
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return false;
}

// OnEnter @ 14bbc9060

void __thiscall UDS_SyncSendBase::OnEnter(UDS_SyncSendBase *this,FDS_NetSyncData *param_1)

{
  return;
}

// OnExit @ 14bbc9690

void __thiscall UDS_SyncSendBase::OnExit(UDS_SyncSendBase *this,FDS_NetSyncData *param_1)

{
  return;
}

// SyncTick @ 14bbe2530

void __thiscall UDS_SyncSendBase::SyncTick(UDS_SyncSendBase *this,float param_1)

{
  return;
}

