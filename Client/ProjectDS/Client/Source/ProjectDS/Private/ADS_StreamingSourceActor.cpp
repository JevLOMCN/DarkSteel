// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// StaticClass @ 14b5a1e10

UClass * __cdecl ADS_StreamingSourceActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_StreamingSourceActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_StreamingSourceActor",
               &Z_Registration_Info_UClass_ADS_StreamingSourceActor.InnerSingleton,
               StaticRegisterNativesADS_StreamingSourceActor,0x300,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_StreamingSourceActor>,
               InternalVTableHelperCtorCaller<ADS_StreamingSourceActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_StreamingSourceActor.InnerSingleton;
}

// ADS_StreamingSourceActor @ 14b5a2920

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADS_StreamingSourceActor * __thiscall
ADS_StreamingSourceActor::ADS_StreamingSourceActor
          (ADS_StreamingSourceActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->bIsLoadComplete = false;
  this->_padding_ = (longlong)&___7ADS_StreamingSourceActor__6B_;
  this->CheckStreamingCompleteTick = 0.0;
  (this->QuerySourceList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QuerySourceList).ArrayNum = 0;
  (this->QuerySourceList).ArrayMax = 0;
  *(undefined8 *)&this->StreamingCompleteNotify = 0;
  *(undefined8 *)&(this->StreamingCompleteNotify).field_0x8 = 0;
  *(undefined4 *)&(this->StreamingCompleteNotify).field_0x10 = 0;
  return this;
}

// ~ADS_StreamingSourceActor @ 14b5a2b50

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_StreamingSourceActor::~ADS_StreamingSourceActor(ADS_StreamingSourceActor *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7ADS_StreamingSourceActor__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->StreamingCompleteNotify);
  pvVar1 = *(void **)&(this->StreamingCompleteNotify).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->StreamingCompleteNotify);
  DestructItems<FWorldPartitionStreamingQuerySource,int>
            ((FWorldPartitionStreamingQuerySource *)(this->QuerySourceList).AllocatorInstance.Data,
             (this->QuerySourceList).ArrayNum);
  pFVar2 = (this->QuerySourceList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 14b5a3460

UClass * __cdecl ADS_StreamingSourceActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_StreamingSourceActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_StreamingSourceActor",
               &Z_Registration_Info_UClass_ADS_StreamingSourceActor.InnerSingleton,
               StaticRegisterNativesADS_StreamingSourceActor,0x300,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_StreamingSourceActor>,
               InternalVTableHelperCtorCaller<ADS_StreamingSourceActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_StreamingSourceActor.InnerSingleton;
}

// StaticRegisterNativesADS_StreamingSourceActor @ 14b5a37d0

void __cdecl ADS_StreamingSourceActor::StaticRegisterNativesADS_StreamingSourceActor(void)

{
  return;
}

// ADS_StreamingSourceActor @ 14b999180

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADS_StreamingSourceActor * __thiscall
ADS_StreamingSourceActor::ADS_StreamingSourceActor
          (ADS_StreamingSourceActor *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  UWorldPartitionStreamingSourceComponent *pUVar6;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  this->_padding_ = (longlong)&___7ADS_StreamingSourceActor__6B_;
  this->bIsLoadComplete = false;
  this->CheckStreamingCompleteTick = 0.0;
  (this->QuerySourceList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QuerySourceList).ArrayNum = 0;
  (this->QuerySourceList).ArrayMax = 0;
  *(undefined8 *)&this->StreamingCompleteNotify = 0;
  *(undefined8 *)&(this->StreamingCompleteNotify).field_0x8 = 0;
  *(undefined4 *)&(this->StreamingCompleteNotify).field_0x10 = 0;
  pFVar3 = ::FName::FName(&local_res8,L"SceneComponent");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_USceneComponent_NoRegister();
  pUVar5 = UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  this->_padding_ = (longlong)pUVar5;
  pFVar3 = ::FName::FName(&local_res8,L"StreamingSourceComponent");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_NoRegister();
  pUVar6 = (UWorldPartitionStreamingSourceComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  this->StreamingSourceComp = pUVar6;
  pUVar6->bStreamingSourceEnabled = true;
  this->StreamingSourceComp->Priority = Highest;
  return this;
}

// BeginPlay @ 14b99b8a0

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_StreamingSourceActor::BeginPlay(ADS_StreamingSourceActor *this)

{
  AActor::BeginPlay((AActor *)this);
  MakeQueryByActorLocation(this);
  return;
}

// BindStreamingCompleteNotify @ 14b99bfd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ADS_StreamingSourceActor::BindStreamingCompleteNotify
          (ADS_StreamingSourceActor *this,TWeakObjectPtr<UObject,FWeakObjectPtr> param_1,
          FName *param_2)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  UFunction *pUVar7;
  FWeakObjectPtr local_res10 [2];
  undefined1 auStackY_1a8 [32];
  UObject *local_178;
  FDestructionSentinel local_170;
  undefined1 *local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_res10[0] = param_1.WeakPtr;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->StreamingCompleteNotify);
  bVar2 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(local_res10);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->StreamingCompleteNotify,(FWriteAccessScope *)&local_170);
    local_158 = &(this->StreamingCompleteNotify).field_0x8;
    puVar5 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_158);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBU__TTransform_N_Math_UE__AEBUFDS_StreamingCompleteNotifyData___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[2] = uVar6;
      *puVar5 = &
                ___7__TBaseUFunctionDelegateInstance_VUObject____A6AXAEBU__TTransform_N_Math_UE__AEBUFDS_StreamingCompleteNotifyData___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      *(FName *)(puVar5 + 4) = *param_2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      puVar5[5] = 0;
      local_178 = pUVar4;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 5),(FObjectPtr)&local_178);
      if ((*param_2 == (FName)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("InFunctionName != NAME_None",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                             ,0x56,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (pUVar4 != (UObject *)0x0) {
        pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)(puVar5 + 5));
        pUVar7 = UObject::FindFunctionChecked(pUVar4,*param_2);
        puVar5[3] = pUVar7;
      }
    }
    if (local_170.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_170.Accessor,&local_170);
    }
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"ADS_StreamingSourceActor::BindStreamingCompleteNotify",0x35,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Display,local_148.Ptr,0x62,L"InOwnerPtr is invalid");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  return;
}

// DisableStreamingSource @ 14b9a6e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall ADS_StreamingSourceActor::DisableStreamingSource(ADS_StreamingSourceActor *this)

{
  int *piVar1;
  int iVar2;
  FWorldPartitionStreamingQuerySource *pFVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (this->StreamingSourceComp == (UWorldPartitionStreamingSourceComponent *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"ADS_StreamingSourceActor::DisableStreamingSource",0x30,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_138.Ptr,0x7a,L"StreamingSourceComp is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    piVar1 = &(this->QuerySourceList).ArrayMax;
    pFVar3 = (FWorldPartitionStreamingQuerySource *)(this->QuerySourceList).AllocatorInstance.Data;
    iVar2 = (this->QuerySourceList).ArrayNum;
    if ((this->QuerySourceList).ArrayMax < 0) {
      DestructItems<FWorldPartitionStreamingQuerySource,int>(pFVar3,iVar2);
      (this->QuerySourceList).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x108,8,0,&(this->QuerySourceList).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FWorldPartitionStreamingQuerySource,int>(pFVar3,iVar2);
      (this->QuerySourceList).ArrayNum = 0;
    }
    this->StreamingSourceComp->bStreamingSourceEnabled = false;
  }
  return;
}

// EnableStreamingSource @ 14b9a7240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall ADS_StreamingSourceActor::EnableStreamingSource(ADS_StreamingSourceActor *this)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (this->StreamingSourceComp == (UWorldPartitionStreamingSourceComponent *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"ADS_StreamingSourceActor::EnableStreamingSource",0x2f,Yes);
      UDS_LogManager::PrintLog
                (pUVar1,1,Warning,local_138.Ptr,0x6d,L"StreamingSourceComp is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    this->bIsLoadComplete = false;
    MakeQueryByActorLocation(this);
    this->StreamingSourceComp->bStreamingSourceEnabled = true;
  }
  return;
}

// IsStreamingSourceEnabled @ 14b9b79f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall ADS_StreamingSourceActor::IsStreamingSourceEnabled(ADS_StreamingSourceActor *this)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (this->StreamingSourceComp == (UWorldPartitionStreamingSourceComponent *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"ADS_StreamingSourceActor::IsStreamingSourceEnabled",0x32,Yes);
      UDS_LogManager::PrintLog
                (pUVar1,1,Warning,local_138.Ptr,0x86,L"StreamingSourceComp is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    return false;
  }
  return this->StreamingSourceComp->bStreamingSourceEnabled;
}

// LoadComplete @ 14b9b96f0

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ADS_StreamingSourceActor::LoadComplete(ADS_StreamingSourceActor *this)

{
  longlong *plVar1;
  TTransform<double> *pTVar2;
  FReadAccessScope local_28;
  
  pTVar2 = (TTransform<double> *)(this->_padding_ + 0x1f0);
  if (this->_padding_ == 0) {
    pTVar2 = &UE::Math::TTransform<double>::Identity;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->StreamingCompleteNotify,&local_28);
  if ((*(int *)&(this->StreamingCompleteNotify).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->StreamingCompleteNotify).field_0x8, plVar1 != (longlong *)0x0))
  {
    (**(code **)(*plVar1 + 0x68))(plVar1,pTVar2,&this->NotifyData);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->StreamingCompleteNotify);
  return;
}

// MakeQueryByActorLocation @ 14b9bb330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall ADS_StreamingSourceActor::MakeQueryByActorLocation(ADS_StreamingSourceActor *this)

{
  double dVar1;
  FWorldPartitionStreamingQuerySource *pFVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  uint uVar6;
  int iVar7;
  UDS_LogManager *pUVar8;
  UObject *pUVar9;
  FPayload *pFVar10;
  TRotator<double> *pTVar11;
  ForAnyElementType FVar12;
  int iVar13;
  FRotationConversionCache *this_00;
  ulonglong uVar14;
  void *pvVar15;
  uint uVar16;
  longlong lVar17;
  int iVar18;
  uint *puVar19;
  FName FVar20;
  bool bVar21;
  longlong lVar22;
  undefined1 auVar23 [16];
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auStackY_308 [32];
  undefined1 local_2d8 [12];
  uint uStack_2cc;
  undefined1 *local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  TRotator<double> local_2a8;
  int iStack_290;
  int iStack_28c;
  int local_288;
  undefined4 uStack_284;
  FName local_278;
  FWeakObjectPtr local_270;
  TVector<double>_u_0 local_268;
  undefined4 local_250;
  undefined1 local_24c;
  void *local_248;
  undefined8 local_240;
  undefined2 local_238;
  double local_230;
  double dStack_228;
  undefined8 local_220;
  undefined1 local_218;
  undefined1 local_210 [32];
  uint *local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [8];
  ForAnyElementType local_1d0;
  int local_1c8;
  TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_1c0;
  void *local_180;
  undefined4 local_178;
  void *local_170;
  undefined8 local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_308;
  FVar20 = (FName)&(this->QuerySourceList).ArrayMax;
  pFVar2 = (FWorldPartitionStreamingQuerySource *)(this->QuerySourceList).AllocatorInstance.Data;
  iVar7 = (this->QuerySourceList).ArrayNum;
  local_278 = FVar20;
  if ((this->QuerySourceList).ArrayMax < 0) {
    DestructItems<FWorldPartitionStreamingQuerySource,int>(pFVar2,iVar7);
    (this->QuerySourceList).ArrayNum = 0;
    if (*(int *)FVar20 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x108,8,0,&(this->QuerySourceList).AllocatorInstance,0,(int *)FVar20);
    }
  }
  else {
    DestructItems<FWorldPartitionStreamingQuerySource,int>(pFVar2,iVar7);
    (this->QuerySourceList).ArrayNum = 0;
  }
  iVar7 = 0;
  UDS_CommonSetting::GetInst();
  uVar24 = 0;
  bVar5 = TWeakObjectPtr<UDS_CommonSetting,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CommonSetting,FWeakObjectPtr> *)&local_270,(void *)0x0);
  if (bVar5) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar8 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"ADS_StreamingSourceActor::MakeQueryByActorLocation",0x32,Yes);
    UDS_LogManager::PrintLog(pUVar8,1,Warning,local_158.Ptr,0x94,L"commonSetting is nullptr.");
    pvVar15 = (void *)local_158._padding_;
  }
  else {
    lVar22 = this->_padding_;
    local_248 = (void *)0x0;
    local_240 = 0;
    local_210._0_8_ = (FScriptContainerElement *)0x0;
    local_210._8_8_ = 0;
    local_1f0 = (uint *)0x0;
    local_1e8 = ___xmm_00000000ffffffff0000008000000000;
    uStack_1e0 = _UNK_150631d98;
    local_1d0.Data = (FScriptContainerElement *)0x0;
    iVar18 = 0;
    local_1c8 = 0;
    local_1c0._0_8_ = 0;
    local_1c0._8_8_ = 0;
    local_1c0._32_8_ = 0;
    local_1c0._40_8_ = ___xmm_00000000ffffffff0000008000000000;
    local_1c0._48_8_ = _UNK_150631d98;
    local_180 = (void *)0x0;
    local_178 = 0;
    local_170 = (void *)0x0;
    local_168 = 0;
    local_268._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    local_268._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    local_268._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    local_268._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    local_268._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (lVar22 != 0) {
      local_268._0_4_ = *(undefined4 *)(lVar22 + 0x210);
      local_268._4_4_ = *(undefined4 *)(lVar22 + 0x214);
      local_268._8_4_ = *(undefined4 *)(lVar22 + 0x218);
      local_268._12_4_ = *(undefined4 *)(lVar22 + 0x21c);
      local_268._s_0.Z = *(double *)(lVar22 + 0x220);
    }
    pUVar9 = FWeakObjectPtr::Get(&local_270);
    lVar22 = this->_padding_;
    local_250 = *(undefined4 *)&pUVar9[1].field_0x8;
    local_24c = 0;
    local_238 = 0x100;
    if (lVar22 == 0) {
      uVar24 = SUB84(UE::Math::TRotator<double>::ZeroRotator.Roll,0);
      uVar25 = (undefined4)((ulonglong)UE::Math::TRotator<double>::ZeroRotator.Roll >> 0x20);
      local_230 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      dStack_228 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    }
    else {
      local_2d8._0_8_ = *(undefined8 *)(lVar22 + 0x1f0);
      unique0x10000593 = *(undefined1 **)(lVar22 + 0x1f8);
      local_2c8 = *(undefined1 **)(lVar22 + 0x200);
      uStack_2c0 = *(double *)(lVar22 + 0x208);
      this_00 = (FRotationConversionCache *)(lVar22 + 0x1e0);
      pFVar10 = FRotationConversionCache::GetOrCreatePayload(this_00);
      auVar23._8_8_ = -(ulonglong)((pFVar10->CachedQuat).W != uStack_2c0);
      auVar23._0_8_ = -(ulonglong)((pFVar10->CachedQuat).Z != (double)local_2c8);
      uVar16 = movmskpd(uVar24,auVar23);
      lVar22 = -(ulonglong)((pFVar10->CachedQuat).Y != (double)stack0xfffffffffffffd30);
      auVar4._8_4_ = (int)lVar22;
      auVar4._0_8_ = -(ulonglong)((pFVar10->CachedQuat).X != (double)local_2d8._0_8_);
      auVar4._12_4_ = (int)((ulonglong)lVar22 >> 0x20);
      iVar13 = movmskpd((int)this_00,auVar4);
      if ((uVar16 & 0x3fffffff) != 0 || iVar13 != 0) {
        (pFVar10->CachedQuat).X = (double)local_2d8._0_8_;
        (pFVar10->CachedQuat).Y = (double)stack0xfffffffffffffd30;
        (pFVar10->CachedQuat).Z = (double)local_2c8;
        (pFVar10->CachedQuat).W = uStack_2c0;
        pTVar11 = UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_2d8,&local_2a8);
        dVar1 = pTVar11->Yaw;
        (pFVar10->CachedRotator).Pitch = pTVar11->Pitch;
        (pFVar10->CachedRotator).Yaw = dVar1;
        (pFVar10->CachedRotator).Roll = pTVar11->Roll;
      }
      dVar1 = (pFVar10->CachedRotator).Roll;
      uVar24 = SUB84(dVar1,0);
      uVar25 = (undefined4)((ulonglong)dVar1 >> 0x20);
      local_230 = (pFVar10->CachedRotator).Pitch;
      dStack_228 = (pFVar10->CachedRotator).Yaw;
    }
    local_218 = 0;
    local_220 = CONCAT44(uVar25,uVar24);
    bVar5 = 1 < local_1c8;
    if (!bVar5) {
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::UnhashElements
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_210);
    }
    bVar21 = local_210._12_4_ != 0;
    local_210._8_8_ = (ulonglong)(uint)local_210._12_4_ << 0x20;
    if (bVar21) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)local_210,0,(int *)(local_210 + 0xc));
    }
    uVar16 = local_1e8._4_4_;
    uStack_1e0 = 0xffffffff;
    local_1e8 = (ulonglong)local_1e8._4_4_ << 0x20;
    if (0x80 < uVar16) {
      local_1e8 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_210 + 0x10),0);
    }
    uVar16 = 1;
    if (bVar5) {
      local_1c8 = 1;
      if (((ForElementType<FSetElementId>)local_1d0.Data != (ForElementType<FSetElementId>)0x0) &&
         (TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1d0,0,0,4),
         (ForElementType<FSetElementId>)local_1d0.Data != (ForElementType<FSetElementId>)0x0)) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1d0,0,0,4);
      }
      FVar12.Data = (FScriptContainerElement *)local_1d8;
      if ((ForElementType<FSetElementId>)local_1d0.Data != (ForElementType<FSetElementId>)0x0) {
        FVar12.Data = local_1d0.Data;
      }
      *(undefined4 *)FVar12.Data = 0xffffffff;
      if (local_1c8 != 0) {
        local_2c8 = local_210 + 0x10;
        local_2a8.Pitch = (double)&DAT_100000000;
        local_2a8.Roll._4_4_ = 0;
        iStack_290 = 0;
        if ((int)local_1e8 != 0) {
          puVar19 = (uint *)(local_210 + 0x10);
          if (local_1f0 != (uint *)0x0) {
            puVar19 = local_1f0;
          }
          uVar6 = *puVar19;
          iVar13 = iVar7;
          while (uVar6 == 0) {
            iStack_290 = iStack_290 + 0x20;
            lVar22 = (longlong)iVar13;
            iVar13 = iVar13 + 1;
            uVar14 = (ulonglong)local_2a8.Pitch >> 0x20;
            local_2a8.Pitch = (double)CONCAT44((int)uVar14,iVar13);
            if ((int)((int)local_1e8 + -1 + ((int)local_1e8 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13)
            goto LAB_14b9bb74e;
            uVar6 = (puVar19 + 1)[lVar22];
          }
          local_2a8.Pitch = (double)CONCAT44(-uVar6 & uVar6,SUB84(local_2a8.Pitch,0));
          uVar14 = (ulonglong)(-uVar6 & uVar6) * 2 + 1;
          lVar22 = 0x3f;
          if (uVar14 != 0) {
            for (; uVar14 >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          local_2a8.Roll._4_4_ = (int)lVar22 + -1 + iStack_290;
          if ((int)local_1e8 < local_2a8.Roll._4_4_) {
LAB_14b9bb74e:
            local_2a8.Roll._4_4_ = (int)local_1e8;
          }
        }
        local_2a8.Roll._0_4_ = 0xffffffff;
        local_2d8._0_8_ = local_210;
        uStack_2c0 = (double)CONCAT44(local_2a8.Roll._4_4_,0xffffffff);
        local_2b8 = CONCAT44(iStack_28c,iStack_290);
        stack0xfffffffffffffd30 = (undefined1 *)local_2a8.Pitch;
        FVar20 = local_278;
        local_2a8.Yaw = (double)local_2c8;
        iVar13 = local_2a8.Roll._4_4_;
        if (local_2a8.Roll._4_4_ < (int)local_1e8) {
          do {
            lVar22 = *(longlong *)local_2d8._0_8_;
            lVar17 = (longlong)iVar13;
            uVar3 = *(undefined8 *)(lVar22 + lVar17 * 0x10);
            uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
            uVar6 = local_1c8 - 1U & uVar6 + (int)((ulonglong)uVar3 >> 0x20);
            *(uint *)(lVar22 + 0xc + lVar17 * 0x10) = uVar6;
            FVar12.Data = (FScriptContainerElement *)local_1d8;
            if ((ForElementType<FSetElementId>)local_1d0.Data != (ForElementType<FSetElementId>)0x0)
            {
              FVar12.Data = local_1d0.Data;
            }
            uVar14 = (longlong)local_1c8 - 1U & (longlong)(int)uVar6;
            *(undefined4 *)(lVar22 + 8 + lVar17 * 0x10) =
                 *(undefined4 *)((longlong)FVar12.Data + uVar14 * 4);
            *(int *)((longlong)FVar12.Data + uVar14 * 4) = iVar13;
            uStack_2c0 = (double)CONCAT44(uStack_2c0._4_4_,(uint)uStack_2c0 & ~uStack_2cc);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_2d8 + 8));
            FVar20 = local_278;
            iVar13 = uStack_2c0._4_4_;
          } while (uStack_2c0._4_4_ < *(int *)(local_2c8 + 0x18));
        }
      }
    }
    pUVar9 = FWeakObjectPtr::Get(&local_270);
    local_2d8._0_8_ = &pUVar9[1].field_0x10;
    iVar13 = *(int *)&pUVar9[2].field_0x10;
    local_2c8 = &pUVar9[1].field_0x20;
    local_288 = iVar18;
    iStack_28c = iVar7;
    if (iVar13 != 0) {
      puVar19 = *(uint **)&pUVar9[2].field_0x8;
      if (*(uint **)&pUVar9[2].field_0x8 == (uint *)0x0) {
        puVar19 = (uint *)local_2c8;
      }
      uVar6 = *puVar19;
      local_288 = iVar7;
      iVar18 = iVar7;
      while (uVar6 == 0) {
        lVar22 = (longlong)iVar18;
        local_288 = local_288 + 0x20;
        iVar18 = iVar18 + 1;
        iStack_28c = iVar13;
        if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14b9bb87b;
        uVar6 = puVar19[lVar22 + 1];
      }
      uVar16 = -uVar6 & uVar6;
      uVar14 = (ulonglong)uVar16 * 2 + 1;
      lVar22 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      iStack_28c = local_288 + -1 + (int)lVar22;
      if (iVar13 < iStack_28c) {
        iStack_28c = iVar13;
      }
    }
LAB_14b9bb87b:
    local_2a8.Yaw = (double)CONCAT44(uVar16,iVar18);
    iStack_290 = -1;
    stack0xfffffffffffffd30 = (undefined1 *)local_2a8.Yaw;
    uStack_284 = uStack_2c0._4_4_;
    local_2b8 = CONCAT44(uStack_2c0._4_4_,local_288);
    uStack_2c0 = (double)CONCAT44(iStack_28c,0xffffffff);
    local_2a8.Pitch = (double)local_2d8._0_8_;
    iVar7 = iStack_28c;
    local_2a8.Roll = (double)local_2c8;
    if (iStack_28c < *(int *)&pUVar9[2].field_0x10) {
      do {
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                  ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_210,&local_278
                   ,(bool *)((longlong)iVar7 * 0x10 + *(longlong *)local_2d8._0_8_));
        uStack_2c0 = (double)CONCAT44(uStack_2c0._4_4_,(uint)uStack_2c0 & ~uStack_2cc);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_2d8 + 8));
        iVar7 = uStack_2c0._4_4_;
      } while (uStack_2c0._4_4_ < *(int *)(local_2c8 + 0x18));
    }
    iVar7 = (this->QuerySourceList).ArrayNum;
    if (iVar7 == (this->QuerySourceList).ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x108,8,&(this->QuerySourceList).AllocatorInstance,(int *)FVar20);
    }
    (this->QuerySourceList).ArrayNum = iVar7 + 1;
    FWorldPartitionStreamingQuerySource::FWorldPartitionStreamingQuerySource
              ((FWorldPartitionStreamingQuerySource *)
               ((this->QuerySourceList).AllocatorInstance.Data + (longlong)iVar7 * 0x108),
               (FWorldPartitionStreamingQuerySource *)&local_268._s_0);
    if (local_170 != (void *)0x0) {
      FMemory::Free(local_170);
    }
    local_178 = 0;
    if (local_180 != (void *)0x0) {
      FMemory::Free(local_180);
    }
    TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_1c0);
    local_1c8 = 0;
    if ((ForElementType<FSetElementId>)local_1d0.Data != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free(local_1d0.Data);
    }
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_210);
    pvVar15 = local_248;
  }
  if (pvVar15 != (void *)0x0) {
    FMemory::Free(pvVar15);
  }
  return;
}

// PostInitializeComponents @ 14b9c0440

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_StreamingSourceActor::PostInitializeComponents(ADS_StreamingSourceActor *this)

{
  byte *pbVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_AActor::PostInitializeComponents(void)_::_2_::FStat_STAT_Actor_PostInitComponents>
  FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  FColor_u_0 aFStackX_8 [2];
  FName FStackX_10;
  LARGE_INTEGER LStackX_18;
  FName FStackX_20;
  FName FStack_58;
  FName FStack_50;
  FStatMessage FStack_40;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_Actor_PostInitComponents ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_AActor::PostInitializeComponents(void)_::_2_::FStat_STAT_Actor_PostInitComponents>
           )0x0) {
        pFVar8 = ::FName::FName(&FStackX_20,"STAT_Actor_PostInitComponents");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Actor_PostInitComponents,*pFVar8,
                   L"STAT_Actor_PostInitComponents","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                   true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar9 = StatPtr_STAT_Actor_PostInitComponents;
  if (StatPtr_STAT_Actor_PostInitComponents ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_AActor::PostInitializeComponents(void)_::_2_::FStat_STAT_Actor_PostInitComponents>
       )0x0) {
    pFVar8 = ::FName::FName(&FStack_58,"STAT_Actor_PostInitComponents");
    FVar9 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_AActor::PostInitializeComponents(void)_::_2_::FStat_STAT_Actor_PostInitComponents>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Actor_PostInitComponents,*pFVar8
                         ,L"STAT_Actor_PostInitComponents","STATGROUP_Quick","STATCAT_Advanced",
                         L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar9;
  bVar4 = false;
  bVar6 = false;
  FStack_50.ComparisonIndex.Value = 0;
  FStack_50.Number = 0;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      aFStackX_8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&aFStackX_8[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        FStackX_10.ComparisonIndex.Value = FVar11.Value;
        FStackX_10.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&FStackX_10,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Actor.cpp"
                   ,0x1992);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      LStackX_18.s.LowPart = FVar11.Value;
      LStackX_18.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar5 = true;
      goto LAB_1473ac0a2;
    }
  }
  bVar5 = false;
  FVar12 = FStack_50;
LAB_1473ac0a2:
  if (this == (ADS_StreamingSourceActor *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Test",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                       ,0x760,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((uint)this->_padding_ >> 0x1e & 1) == 0) {
    pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
    *pbVar1 = *pbVar1 | 2;
    AActor::UpdateAllReplicatedComponents((AActor *)this);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      FStack_40.NameAndInfo.Index = FVar12.ComparisonIndex.Value;
      FStack_40.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&LStackX_18);
      FStack_40.StatData.Pad[4] = '\0';
      FStack_40.StatData.Pad[5] = '\0';
      FStack_40.StatData.Pad[6] = '\0';
      FStack_40.StatData.Pad[7] = '\0';
      FStack_40.StatData.Pad[0] = LStackX_18.s.LowPart._0_1_;
      FStack_40.StatData.Pad[1] = LStackX_18.s.LowPart._1_1_;
      FStack_40.StatData.Pad[2] = LStackX_18.s.LowPart._2_1_;
      FStack_40.StatData.Pad[3] = LStackX_18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&FStack_40);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// SetStreamingCompleteNotifyData @ 14b9c54d0

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ADS_StreamingSourceActor::SetStreamingCompleteNotifyData
          (ADS_StreamingSourceActor *this,FDS_StreamingCompleteNotifyData *param_1)

{
  return;
}

// Tick @ 14b9c79b0

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_StreamingSourceActor::Tick(ADS_StreamingSourceActor *this,float param_1)

{
  int iVar1;
  bool bVar2;
  UWorld *pUVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UWorldPartitionSubsystem *this_00;
  FTimerManager *this_01;
  float fVar6;
  
  AActor::Tick((AActor *)this,param_1);
  if (this->bIsLoadComplete == true) {
    return;
  }
  if ((this->QuerySourceList).ArrayNum == 0) {
    return;
  }
  fVar6 = param_1 + this->CheckStreamingCompleteTick;
  bVar2 = fVar6 < __real_3dcccccd;
  this->CheckStreamingCompleteTick = fVar6;
  if (bVar2) {
    return;
  }
  this->CheckStreamingCompleteTick = 0.0;
  if (UDS_GameInstance::StaticInstance == (UDS_GameInstance *)0x0) {
    return;
  }
  pUVar3 = UGameInstance::GetWorld((UGameInstance *)UDS_GameInstance::StaticInstance);
  if (pUVar3 == (UWorld *)0x0) {
    return;
  }
  pUVar4 = Z_Construct_UClass_UWorldPartitionSubsystem_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar4 != (UClass *)0x0) goto LAB_14b9c7a5c;
  }
  else if (pUVar4 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
LAB_14b9c7a5c:
    pUVar5 = Z_Construct_UClass_UWorldPartitionSubsystem_NoRegister();
    if (pUVar5 != (UClass *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)pUVar4->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_14b9c7a8c;
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_14b9c7a8c:
  this_00 = (UWorldPartitionSubsystem *)
            FSubsystemCollectionBase::GetSubsystemInternal
                      ((FSubsystemCollectionBase *)&pUVar3->SubsystemCollection,pUVar4);
  if (this_00 != (UWorldPartitionSubsystem *)0x0) {
    bVar2 = UWorldPartitionSubsystem::IsStreamingCompleted
                      (this_00,Activated,&this->QuerySourceList,true);
    this->bIsLoadComplete = bVar2;
    if (bVar2) {
      this_01 = FDS_TimerManager::Get((UObject *)0x0);
      FTimerManager::SetTimerForNextTick<ADS_StreamingSourceActor>
                (this_01,(ADS_StreamingSourceActor *)&stack0x00000008,(pmf_ca1e675b)this);
    }
  }
  return;
}

