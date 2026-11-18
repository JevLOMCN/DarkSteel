// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 54

// StaticClass @ 148073fc0

UClass * __cdecl UOnlineEngineInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOnlineEngineInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"OnlineEngineInterface",
               &Z_Registration_Info_UClass_UOnlineEngineInterface.InnerSingleton,
               StaticRegisterNativesUOnlineEngineInterface,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UOnlineEngineInterface>,
               InternalVTableHelperCtorCaller<UOnlineEngineInterface>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOnlineEngineInterface.InnerSingleton;
}

// UOnlineEngineInterface @ 14808c2b0

UOnlineEngineInterface * __thiscall
UOnlineEngineInterface::UOnlineEngineInterface(UOnlineEngineInterface *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UOnlineEngineInterface__6B_;
  return this;
}

// UOnlineEngineInterface @ 14808c2e0

UOnlineEngineInterface * __thiscall
UOnlineEngineInterface::UOnlineEngineInterface
          (UOnlineEngineInterface *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UOnlineEngineInterface__6B_;
  return this;
}

// ~UOnlineEngineInterface @ 14808f620

void __thiscall UOnlineEngineInterface::~UOnlineEngineInterface(UOnlineEngineInterface *this)

{
  *(undefined ***)this = &___7UOnlineEngineInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AutoLogin @ 148097d10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UOnlineEngineInterface::AutoLogin
          (UOnlineEngineInterface *this,UWorld *param_1,int param_2,
          TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy> *param_3)

{
  return false;
}

// BindToExternalUIOpening @ 148097fc0

void __thiscall
UOnlineEngineInterface::BindToExternalUIOpening
          (UOnlineEngineInterface *this,
          TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *param_1)

{
  return;
}

// ClearVoicePackets @ 148099ef0

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
UOnlineEngineInterface::ClearVoicePackets(UOnlineEngineInterface *this,UWorld *param_1)

{
  return;
}

// CloseWebURL @ 148099f60

bool __thiscall UOnlineEngineInterface::CloseWebURL(UOnlineEngineInterface *this)

{
  return false;
}

// CreateUniquePlayerIdWrapper @ 14809dd30

FUniqueNetIdWrapper * __thiscall
UOnlineEngineInterface::CreateUniquePlayerIdWrapper
          (UOnlineEngineInterface *this,FUniqueNetIdWrapper *__return_storage_ptr__,FString *param_1
          ,FName param_2)

{
  *(undefined4 *)&(__return_storage_ptr__->Variant).field_0x11 = 0;
  *(undefined2 *)&(__return_storage_ptr__->Variant).field_0x15 = 0;
  (__return_storage_ptr__->Variant).field_0x17 = 0;
  __return_storage_ptr__->_padding_ = (longlong)&___7FUniqueNetIdWrapper__6B_;
  (__return_storage_ptr__->Variant)._padding_ = 0;
  (__return_storage_ptr__->Variant)._padding_ = 0;
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// DestroyOnlineSubsystem @ 14809f1a0

void __thiscall
UOnlineEngineInterface::DestroyOnlineSubsystem(UOnlineEngineInterface *this,FName param_1)

{
  return;
}

// DoesInstanceExist @ 14809f1f0

bool __thiscall
UOnlineEngineInterface::DoesInstanceExist(UOnlineEngineInterface *this,FName param_1)

{
  return false;
}

// DoesSessionExist @ 14809f2d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UOnlineEngineInterface::DoesSessionExist(UOnlineEngineInterface *this,UWorld *param_1,FName param_2)

{
  return false;
}

// DumpChatState @ 14809f2f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UOnlineEngineInterface::DumpChatState(UOnlineEngineInterface *this,UWorld *param_1)

{
  return;
}

// DumpPartyState @ 14809f300

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UOnlineEngineInterface::DumpPartyState(UOnlineEngineInterface *this,UWorld *param_1)

{
  return;
}

// DumpSessionState @ 14809f310

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
UOnlineEngineInterface::DumpSessionState(UOnlineEngineInterface *this,UWorld *param_1)

{
  return;
}

// DumpVoiceState @ 14809f320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UOnlineEngineInterface::DumpVoiceState(UOnlineEngineInterface *this,UWorld *param_1)

{
  return;
}

// EndSession @ 14809f6d0

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
UOnlineEngineInterface::EndSession
          (UOnlineEngineInterface *this,UWorld *param_1,FName param_2,
          TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *param_3)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_28);
  if ((*(int *)&param_3->field_0x10 != 0) &&
     (plVar1 = *(longlong **)&param_3->field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_2,0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// Get @ 1480a36b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UOnlineEngineInterface * __cdecl UOnlineEngineInterface::Get(void)

{
  bool bVar1;
  wchar_t *pwVar2;
  size_t sVar3;
  UClass *pUVar4;
  UPackage *pUVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  FUObjectItem *this;
  longlong *plVar8;
  int iVar9;
  undefined1 auStackY_108 [32];
  bool local_d8 [8];
  FString local_d0;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_108;
  if (Singleton != (UOnlineEngineInterface *)0x0) {
    return Singleton;
  }
  local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.Data.ArrayNum = 0;
  local_d0.Data.ArrayMax = 0;
  FConfigCacheIni::GetString
            (GConfig,L"/Script/Engine.OnlineEngineInterface",L"ClassName",&local_d0,&GEngineIni);
  pwVar2 = FCommandLine::Get();
  local_d8[0] = FParse::Param(pwVar2,L"bUseOnlineServices");
  if (local_d8[0]) {
    ::FString::operator=
              (&local_d0,L"/Script/OnlineSubsystemUtils.OnlineServicesEngineInterfaceImpl");
  }
  bVar1 = FConfigCacheIni::GetBool
                    (GConfig,L"/Script/Engine.OnlineEngineInterface",L"bUseOnlineServicesV2",
                     local_d8,&GEngineIni);
  iVar9 = 0;
  if (bVar1) {
    pwVar2 = L"/Script/OnlineSubsystemUtils.OnlineEngineInterfaceImpl";
    if (local_d8[0] != false) {
      pwVar2 = L"/Script/OnlineSubsystemUtils.OnlineServicesEngineInterfaceImpl";
    }
    ::FString::operator=(&local_d0,pwVar2);
    if (2 < (byte)LogOnlineEngine._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineEngine);
    }
  }
  if (1 < local_d0.Data.ArrayNum) {
    local_a8.DataPtr = (wchar_t *)0x0;
    local_a8._8_8_ = local_a8._8_8_ & 0xffffffff00000000;
    if (local_d0.Data.ArrayNum == 0) {
      local_b8.DataPtr = L"";
LAB_1480a37e8:
      sVar3 = wcslen(local_b8.DataPtr);
      iVar9 = (int)sVar3;
    }
    else {
      local_b8.DataPtr = (wchar_t *)local_d0.Data.AllocatorInstance.Data;
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_1480a37e8;
    }
    local_b8.Size = iVar9;
    pUVar4 = StaticClass();
    pUVar4 = StaticLoadClass(pUVar4,(UObject *)0x0,&local_b8,&local_a8,0x2000,(UPackageMap *)0x0);
    if (pUVar4 != (UClass *)0x0) goto LAB_1480a3839;
  }
  pUVar4 = StaticClass();
LAB_1480a3839:
  local_b8.DataPtr = (wchar_t *)0x0;
  pUVar5 = GetTransientPackage();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar5,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = StaticClass();
  CheckIsClassChildOf_Internal(pUVar6,pUVar4);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar4);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._16_4_ = 0;
  local_98._20_4_ = 0;
  local_98._24_4_ = RF_NoFlags;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = pUVar5;
  pUVar7 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar8 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  Singleton = (UOnlineEngineInterface *)pUVar7;
  this = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar7->field_0xc);
  FUObjectItem::SetRootFlags(this,RootSet);
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  return Singleton;
}

// GetDefaultOnlineSubsystemName @ 1480a4390

FName __thiscall UOnlineEngineInterface::GetDefaultOnlineSubsystemName(UOnlineEngineInterface *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetLocalPacket @ 1480a46f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSharedPtr<FVoicePacket,1> * __thiscall
UOnlineEngineInterface::GetLocalPacket
          (UOnlineEngineInterface *this,TSharedPtr<FVoicePacket,1> *__return_storage_ptr__,
          UWorld *param_1,uchar param_2)

{
  __return_storage_ptr__->Object = (FVoicePacket *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetNumLocalTalkers @ 1480a6c30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
UOnlineEngineInterface::GetNumLocalTalkers(UOnlineEngineInterface *this,UWorld *param_1)

{
  return 0;
}

// GetNumPIELogins @ 1480a6c40

int __thiscall UOnlineEngineInterface::GetNumPIELogins(UOnlineEngineInterface *this)

{
  return 0;
}

// GetOnlineIdentifier @ 1480a7fd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FName __thiscall
UOnlineEngineInterface::GetOnlineIdentifier(UOnlineEngineInterface *this,FWorldContext *param_1)

{
  *(undefined8 *)param_1 = 0;
  return (FName)param_1;
}

// GetPIELoginCommandLineArgs @ 1480a86a0

FString * __thiscall
UOnlineEngineInterface::GetPIELoginCommandLineArgs
          (UOnlineEngineInterface *this,FString *__return_storage_ptr__,int param_1)

{
  ::FString::FString(__return_storage_ptr__,L"");
  return __return_storage_ptr__;
}

// GetPlayerNickname @ 1480a8b00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __thiscall
UOnlineEngineInterface::GetPlayerNickname
          (UOnlineEngineInterface *this,FString *__return_storage_ptr__,UWorld *param_1,
          FUniqueNetIdWrapper *param_2)

{
  ::FString::FString(__return_storage_ptr__,L"INVALID");
  return __return_storage_ptr__;
}

// GetPlayerPlatformNickname @ 1480a8b30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UOnlineEngineInterface::GetPlayerPlatformNickname
          (UOnlineEngineInterface *this,UWorld *param_1,int param_2,FString *param_3)

{
  return false;
}

// GetPrivateStaticClass @ 1480a9f90

UClass * __cdecl UOnlineEngineInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOnlineEngineInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"OnlineEngineInterface",
               &Z_Registration_Info_UClass_UOnlineEngineInterface.InnerSingleton,
               StaticRegisterNativesUOnlineEngineInterface,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UOnlineEngineInterface>,
               InternalVTableHelperCtorCaller<UOnlineEngineInterface>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOnlineEngineInterface.InnerSingleton;
}

// GetReplicationHashForSubsystem @ 1480aa910

uchar __thiscall
UOnlineEngineInterface::GetReplicationHashForSubsystem(UOnlineEngineInterface *this,FName param_1)

{
  return '\0';
}

// GetResolvedConnectString @ 1480aaab0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UOnlineEngineInterface::GetResolvedConnectString
          (UOnlineEngineInterface *this,UWorld *param_1,FName param_2,FString *param_3)

{
  return false;
}

// GetSessionJoinability @ 1480aaac0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UOnlineEngineInterface::GetSessionJoinability
          (UOnlineEngineInterface *this,UWorld *param_1,FName param_2,FJoinabilitySettings *param_3)

{
  return false;
}

// GetSubsystemFromReplicationHash @ 1480aac90

FName __thiscall
UOnlineEngineInterface::GetSubsystemFromReplicationHash(UOnlineEngineInterface *this,uchar param_1)

{
  FName FVar1;
  undefined7 in_register_00000011;
  
  *(undefined8 *)CONCAT71(in_register_00000011,param_1) = 0;
  FVar1._1_7_ = in_register_00000011;
  FVar1.ComparisonIndex.Value._0_1_ = param_1;
  return FVar1;
}

// GetUniquePlayerIdWrapper @ 1480ab330

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FUniqueNetIdWrapper * __thiscall
UOnlineEngineInterface::GetUniquePlayerIdWrapper
          (UOnlineEngineInterface *this,FUniqueNetIdWrapper *__return_storage_ptr__,UWorld *param_1,
          int param_2,FName param_3)

{
  *(undefined4 *)&(__return_storage_ptr__->Variant).field_0x11 = 0;
  *(undefined2 *)&(__return_storage_ptr__->Variant).field_0x15 = 0;
  (__return_storage_ptr__->Variant).field_0x17 = 0;
  __return_storage_ptr__->_padding_ = (longlong)&___7FUniqueNetIdWrapper__6B_;
  (__return_storage_ptr__->Variant)._padding_ = 0;
  (__return_storage_ptr__->Variant)._padding_ = 0;
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// IsCompatibleUniqueNetId @ 1480b3710

bool __thiscall
UOnlineEngineInterface::IsCompatibleUniqueNetId
          (UOnlineEngineInterface *this,FUniqueNetIdWrapper *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong *plVar4;
  FName FVar5;
  ulonglong uVar6;
  undefined1 local_res10 [16];
  
  uVar6 = (ulonglong)(param_1->Variant).TypeIndex;
  if (1 < uVar6) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<struct_UE::Online::OnlineIdHandleTags::FAccount>_>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar6 + 4) != '\0') {
    plVar4 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))(this,local_res10);
    FVar5 = FUniqueNetIdWrapper::GetType(param_1);
    if (*(longlong *)FVar5 == *plVar4) {
      return true;
    }
  }
  return false;
}

// IsLoaded @ 1480b3c60

bool __thiscall UOnlineEngineInterface::IsLoaded(UOnlineEngineInterface *this,FName param_1)

{
  return false;
}

// IsLoggedIn @ 1480b3c80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UOnlineEngineInterface::IsLoggedIn(UOnlineEngineInterface *this,UWorld *param_1,int param_2)

{
  return false;
}

// LoginPIEInstance @ 1480b7c50

void __thiscall
UOnlineEngineInterface::LoginPIEInstance
          (UOnlineEngineInterface *this,FName param_1,int param_2,int param_3,
          TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy> *param_4)

{
  longlong *plVar1;
  FString local_38;
  FReadAccessScope local_28;
  
  ::FString::FString(&local_38,L"Not implemented");
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_4,&local_28);
  if ((*(int *)&param_4->field_0x10 != 0) &&
     (plVar1 = *(longlong **)&param_4->field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_2,0,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// MuteRemoteTalker @ 1480b8830

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UOnlineEngineInterface::MuteRemoteTalker
          (UOnlineEngineInterface *this,UWorld *param_1,uchar param_2,FUniqueNetIdWrapper *param_3,
          bool param_4)

{
  return false;
}

// RegisterPlayer @ 1480c4a20

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
UOnlineEngineInterface::RegisterPlayer
          (UOnlineEngineInterface *this,UWorld *param_1,FName param_2,FUniqueNetIdWrapper *param_3,
          bool param_4)

{
  return;
}

// SerializeRemotePacket @ 1480d23e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSharedPtr<FVoicePacket,1> * __thiscall
UOnlineEngineInterface::SerializeRemotePacket
          (UOnlineEngineInterface *this,TSharedPtr<FVoicePacket,1> *__return_storage_ptr__,
          UWorld *param_1,UNetConnection *param_2,FArchive *param_3)

{
  __return_storage_ptr__->Object = (FVoicePacket *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// SetForceDedicated @ 1480d31d0

void __thiscall
UOnlineEngineInterface::SetForceDedicated(UOnlineEngineInterface *this,FName param_1,bool param_2)

{
  return;
}

// SetShouldTryOnlinePIE @ 1480d3960

void __thiscall
UOnlineEngineInterface::SetShouldTryOnlinePIE(UOnlineEngineInterface *this,bool param_1)

{
  return;
}

// ShowAchievementsUI @ 1480d46d0

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
UOnlineEngineInterface::ShowAchievementsUI(UOnlineEngineInterface *this,UWorld *param_1,int param_2)

{
  return;
}

// ShowLeaderboardUI @ 1480d46e0

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
UOnlineEngineInterface::ShowLeaderboardUI
          (UOnlineEngineInterface *this,UWorld *param_1,FString *param_2)

{
  return;
}

// ShowWebURL @ 1480d46f0

void __thiscall
UOnlineEngineInterface::ShowWebURL
          (UOnlineEngineInterface *this,FString *param_1,FShowWebUrlParams *param_2,
          TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> *param_3)

{
  return;
}

// ShutdownOnlineSubsystem @ 1480d4700

void __thiscall
UOnlineEngineInterface::ShutdownOnlineSubsystem(UOnlineEngineInterface *this,FName param_1)

{
  return;
}

// StartNetworkedVoice @ 1480d55a0

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
UOnlineEngineInterface::StartNetworkedVoice
          (UOnlineEngineInterface *this,UWorld *param_1,uchar param_2)

{
  return;
}

// StartSession @ 1480d55c0

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
UOnlineEngineInterface::StartSession
          (UOnlineEngineInterface *this,UWorld *param_1,FName param_2,
          TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *param_3)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_28);
  if ((*(int *)&param_3->field_0x10 != 0) &&
     (plVar1 = *(longlong **)&param_3->field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_2,0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// StaticRegisterNativesUOnlineEngineInterface @ 1480d57a0

void __cdecl UOnlineEngineInterface::StaticRegisterNativesUOnlineEngineInterface(void)

{
  return;
}

// StopNetworkedVoice @ 1480d5820

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
UOnlineEngineInterface::StopNetworkedVoice
          (UOnlineEngineInterface *this,UWorld *param_1,uchar param_2)

{
  return;
}

// SupportsOnlinePIE @ 1480d5a60

bool __thiscall UOnlineEngineInterface::SupportsOnlinePIE(UOnlineEngineInterface *this)

{
  return false;
}

// UnmuteRemoteTalker @ 1480e0250

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UOnlineEngineInterface::UnmuteRemoteTalker
          (UOnlineEngineInterface *this,UWorld *param_1,uchar param_2,FUniqueNetIdWrapper *param_3,
          bool param_4)

{
  return false;
}

// UnregisterPlayer @ 1480e05f0

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
UOnlineEngineInterface::UnregisterPlayer
          (UOnlineEngineInterface *this,UWorld *param_1,FName param_2,FUniqueNetIdWrapper *param_3)

{
  return;
}

// UnregisterPlayers @ 1480e0600

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
UOnlineEngineInterface::UnregisterPlayers
          (UOnlineEngineInterface *this,UWorld *param_1,FName param_2,
          TArray<FUniqueNetIdWrapper,TSizedDefaultAllocator<32>_> *param_3)

{
  return;
}

// UpdateSessionJoinability @ 1480e1bb0

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
UOnlineEngineInterface::UpdateSessionJoinability
          (UOnlineEngineInterface *this,UWorld *param_1,FName param_2,bool param_3,bool param_4,
          bool param_5,bool param_6)

{
  return;
}

