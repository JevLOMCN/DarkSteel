// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// StaticClass @ 147ba7460

UClass * __cdecl AServerStatReplicator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AServerStatReplicator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ServerStatReplicator",
               &Z_Registration_Info_UClass_AServerStatReplicator.InnerSingleton,
               StaticRegisterNativesAServerStatReplicator,0x380,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AServerStatReplicator>,
               InternalVTableHelperCtorCaller<AServerStatReplicator>,local_res8,AInfo::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AServerStatReplicator.InnerSingleton;
}

// AServerStatReplicator @ 147bb83d0

AServerStatReplicator * __thiscall
AServerStatReplicator::AServerStatReplicator(AServerStatReplicator *this,FVTableHelper *param_1)

{
  AInfo::AInfo((AInfo *)this,param_1);
  this->_padding_ = (longlong)&___7AServerStatReplicator__6B_;
  return this;
}

// AServerStatReplicator @ 147bb8400

AServerStatReplicator * __thiscall
AServerStatReplicator::AServerStatReplicator
          (AServerStatReplicator *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  AInfo::AInfo((AInfo *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 8;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 4;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 6;
  this->_padding_ = (longlong)&___7AServerStatReplicator__6B_;
  this->bUpdateStatNet = true;
  this->bOverwriteClientStats = true;
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  return this;
}

// ~AServerStatReplicator @ 147bbe970

void __thiscall AServerStatReplicator::~AServerStatReplicator(AServerStatReplicator *this)

{
  this->_padding_ = (longlong)&___7AServerStatReplicator__6B_;
  AInfo::~AInfo((AInfo *)this);
  return;
}

// BeginPlay @ 147bcad20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AServerStatReplicator::BeginPlay(AServerStatReplicator *this)

{
  ulonglong uVar1;
  FNameEntryId FVar2;
  ENetMode EVar3;
  undefined4 extraout_var;
  UNetDriver *pUVar4;
  undefined1 local_res8 [8];
  
  AActor::BeginPlay((AActor *)this);
  uVar1 = this->_padding_;
  if ((uVar1 == 0) ||
     (FVar2 = FNameEntryId::FromValidEName((EName)local_res8),
     uVar1 == *(uint *)CONCAT44(extraout_var,FVar2.Value))) {
    EVar3 = AActor::InternalGetNetMode((AActor *)this);
  }
  else {
    EVar3 = AActor::InternalGetNetMode((AActor *)this);
  }
  if (EVar3 != NM_Client) {
                    /* WARNING: Could not recover jumptable at 0x000147bcad73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x4a8))(this,0);
    return;
  }
  pUVar4 = AActor::GetNetDriver((AActor *)this);
  pUVar4->bSkipLocalStats = '\x01';
  return;
}

// Destroyed @ 147bd7810

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AServerStatReplicator::Destroyed(AServerStatReplicator *this)

{
  ENetMode EVar1;
  UNetDriver *pUVar2;
  undefined1 local_res8 [8];
  
  if (this->_padding_ != 0) {
    FNameEntryId::FromValidEName((EName)local_res8);
  }
  EVar1 = AActor::InternalGetNetMode((AActor *)this);
  if (EVar1 == NM_Client) {
    pUVar2 = AActor::GetNetDriver((AActor *)this);
    pUVar2->bSkipLocalStats = '\0';
  }
  AActor::Destroyed((AActor *)this);
  return;
}

// GetLifetimeReplicatedProps @ 147be0da0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AServerStatReplicator::GetLifetimeReplicatedProps
          (AServerStatReplicator *this,
          TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_1)

{
  FName FVar1;
  UClass *pUVar2;
  UClass *pUVar3;
  FName *pFVar4;
  FProperty *pFVar5;
  FName local_res18 [2];
  FDoRepLifetimeParams local_38;
  
  pUVar2 = Z_Construct_UClass_AInfo_NoRegister();
  pUVar3 = StaticClass();
  DisableAllReplicatedPropertiesOfClass(pUVar3,pUVar2,IncludeSuper,param_1);
  pFVar4 = ::FName::FName(local_res18,8,L"Channels",FNAME_Add);
  FVar1 = *pFVar4;
  pUVar2 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar2,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  pFVar4 = ::FName::FName(local_res18,6,L"InRate",FNAME_Add);
  FVar1 = *pFVar4;
  pUVar2 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar2,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  pFVar4 = ::FName::FName(local_res18,7,L"OutRate",FNAME_Add);
  FVar1 = *pFVar4;
  pUVar2 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar2,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  pFVar4 = ::FName::FName(local_res18,0x11,L"MaxPacketOverhead",FNAME_Add);
  FVar1 = *pFVar4;
  pUVar2 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar2,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  pFVar4 = ::FName::FName(local_res18,0xf,L"InRateClientMax",FNAME_Add);
  FVar1 = *pFVar4;
  pUVar2 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar2,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  pFVar4 = ::FName::FName(local_res18,0xf,L"InRateClientMin",FNAME_Add);
  FVar1 = *pFVar4;
  pUVar2 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar2,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  pFVar4 = ::FName::FName(local_res18,0xf,L"InRateClientAvg",FNAME_Add);
  FVar1 = *pFVar4;
  pUVar2 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar2,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  pFVar4 = ::FName::FName(local_res18,0x12,L"InPacketsClientMax",FNAME_Add);
  FVar1 = *pFVar4;
  pUVar2 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar2,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  pFVar4 = ::FName::FName(local_res18,0x12,L"InPacketsClientMin",FNAME_Add);
  FVar1 = *pFVar4;
  pUVar2 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar2,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  pFVar4 = ::FName::FName(local_res18,0x12,L"InPacketsClientAvg",FNAME_Add);
  FVar1 = *pFVar4;
  pUVar2 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar2,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  pFVar4 = ::FName::FName(local_res18,0x10,L"OutRateClientMax",FNAME_Add);
  FVar1 = *pFVar4;
  pUVar2 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar2,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  pFVar4 = ::FName::FName(local_res18,0x10,L"OutRateClientMin",FNAME_Add);
  FVar1 = *pFVar4;
  pUVar2 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar2,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  pFVar4 = ::FName::FName(local_res18,0x10,L"OutRateClientAvg",FNAME_Add);
  FVar1 = *pFVar4;
  pUVar2 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar2,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  pFVar4 = ::FName::FName(local_res18,0x13,L"OutPacketsClientMax",FNAME_Add);
  FVar1 = *pFVar4;
  pUVar2 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar2,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  pFVar4 = ::FName::FName(local_res18,0x13,L"OutPacketsClientMin",FNAME_Add);
  FVar1 = *pFVar4;
  pUVar2 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar2,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  pFVar4 = ::FName::FName(local_res18,0x13,L"OutPacketsClientAvg",FNAME_Add);
  FVar1 = *pFVar4;
  pUVar2 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar2,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  pFVar4 = ::FName::FName(local_res18,0xd,L"NetNumClients",FNAME_Add);
  FVar1 = *pFVar4;
  pUVar2 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar2,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  pFVar4 = ::FName::FName(local_res18,9,L"InPackets",FNAME_Add);
  FVar1 = *pFVar4;
  pUVar2 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar2,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  pFVar4 = ::FName::FName(local_res18,10,L"OutPackets",FNAME_Add);
  FVar1 = *pFVar4;
  pUVar2 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar2,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  pFVar4 = ::FName::FName(local_res18,9,L"InBunches",FNAME_Add);
  FVar1 = *pFVar4;
  pUVar2 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar2,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  pFVar4 = ::FName::FName(local_res18,10,L"OutBunches",FNAME_Add);
  FVar1 = *pFVar4;
  pUVar2 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar2,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  pFVar4 = ::FName::FName(local_res18,7,L"OutLoss",FNAME_Add);
  FVar1 = *pFVar4;
  pUVar2 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar2,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  pFVar4 = ::FName::FName(local_res18,6,L"InLoss",FNAME_Add);
  FVar1 = *pFVar4;
  pUVar2 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar2,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  pFVar4 = ::FName::FName(local_res18,0xe,L"VoiceBytesSent",FNAME_Add);
  FVar1 = *pFVar4;
  pUVar2 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar2,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  pFVar4 = ::FName::FName(local_res18,0xe,L"VoiceBytesRecv",FNAME_Add);
  FVar1 = *pFVar4;
  pUVar2 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar2,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  pFVar4 = ::FName::FName(local_res18,0x10,L"VoicePacketsSent",FNAME_Add);
  FVar1 = *pFVar4;
  pUVar2 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar2,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  pFVar4 = ::FName::FName(local_res18,0x10,L"VoicePacketsRecv",FNAME_Add);
  FVar1 = *pFVar4;
  pUVar2 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar2,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  pFVar4 = ::FName::FName(local_res18,0xe,L"PercentInVoice",FNAME_Add);
  FVar1 = *pFVar4;
  pUVar2 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar2,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  pFVar4 = ::FName::FName(local_res18,0xf,L"PercentOutVoice",FNAME_Add);
  FVar1 = *pFVar4;
  pUVar2 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar2,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  pFVar4 = ::FName::FName(local_res18,0x10,L"NumActorChannels",FNAME_Add);
  FVar1 = *pFVar4;
  pUVar2 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar2,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  pFVar4 = ::FName::FName(local_res18,0x13,L"NumConsideredActors",FNAME_Add);
  FVar1 = *pFVar4;
  pUVar2 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar2,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  pFVar4 = ::FName::FName(local_res18,0x11,L"PrioritizedActors",FNAME_Add);
  FVar1 = *pFVar4;
  pUVar2 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar2,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  pFVar4 = ::FName::FName(local_res18,0x11,L"NumRelevantActors",FNAME_Add);
  FVar1 = *pFVar4;
  pUVar2 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar2,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  pFVar4 = ::FName::FName(local_res18,0x18,L"NumRelevantDeletedActors",FNAME_Add);
  FVar1 = *pFVar4;
  pUVar2 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar2,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  pFVar4 = ::FName::FName(local_res18,0x1a,L"NumReplicatedActorAttempts",FNAME_Add);
  FVar1 = *pFVar4;
  pUVar2 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar2,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  pFVar4 = ::FName::FName(local_res18,0x13,L"NumReplicatedActors",FNAME_Add);
  FVar1 = *pFVar4;
  pUVar2 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar2,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  pFVar4 = ::FName::FName(local_res18,9,L"NumActors",FNAME_Add);
  FVar1 = *pFVar4;
  pUVar2 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar2,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  pFVar4 = ::FName::FName(local_res18,0xc,L"NumNetActors",FNAME_Add);
  FVar1 = *pFVar4;
  pUVar2 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar2,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  pFVar4 = ::FName::FName(local_res18,0x10,L"NumDormantActors",FNAME_Add);
  FVar1 = *pFVar4;
  pUVar2 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar2,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  pFVar4 = ::FName::FName(local_res18,0x19,L"NumInitiallyDormantActors",FNAME_Add);
  FVar1 = *pFVar4;
  pUVar2 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar2,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  pFVar4 = ::FName::FName(local_res18,0xf,L"NumNetGUIDsAckd",FNAME_Add);
  FVar1 = *pFVar4;
  pUVar2 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar2,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  pFVar4 = ::FName::FName(local_res18,0x12,L"NumNetGUIDsPending",FNAME_Add);
  FVar1 = *pFVar4;
  pUVar2 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar2,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  pFVar4 = ::FName::FName(local_res18,0x11,L"NumNetGUIDsUnAckd",FNAME_Add);
  FVar1 = *pFVar4;
  pUVar2 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar2,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  pFVar4 = ::FName::FName(local_res18,0xc,L"ObjPathBytes",FNAME_Add);
  FVar1 = *pFVar4;
  pUVar2 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar2,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  pFVar4 = ::FName::FName(local_res18,0xe,L"NetGUIDOutRate",FNAME_Add);
  FVar1 = *pFVar4;
  pUVar2 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar2,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  pFVar4 = ::FName::FName(local_res18,0xd,L"NetGUIDInRate",FNAME_Add);
  FVar1 = *pFVar4;
  pUVar2 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar2,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  pFVar4 = ::FName::FName(local_res18,0xc,L"NetSaturated",FNAME_Add);
  FVar1 = *pFVar4;
  pUVar2 = StaticClass();
  StaticClass();
  pFVar5 = FindFieldChecked<FProperty>((UStruct *)pUVar2,FVar1);
  if ((pFVar5->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar5,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38.Condition = COND_None;
  local_38.RepNotifyCondition = REPNOTIFY_OnChanged;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar5,param_1,&local_38);
  return;
}

// GetPrivateStaticClass @ 147be48a0

UClass * __cdecl AServerStatReplicator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AServerStatReplicator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ServerStatReplicator",
               &Z_Registration_Info_UClass_AServerStatReplicator.InnerSingleton,
               StaticRegisterNativesAServerStatReplicator,0x380,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AServerStatReplicator>,
               InternalVTableHelperCtorCaller<AServerStatReplicator>,local_res8,AInfo::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AServerStatReplicator.InnerSingleton;
}

// StaticRegisterNativesAServerStatReplicator @ 147c03460

void __cdecl AServerStatReplicator::StaticRegisterNativesAServerStatReplicator(void)

{
  return;
}

// Tick @ 147c03d00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AServerStatReplicator::Tick(AServerStatReplicator *this,float param_1)

{
  FName FVar1;
  TStatId TVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_NumActors> FVar4;
  FThreadSafeStaticStat<FStat_STAT_NumNetActors> FVar5;
  FThreadSafeStaticStat<FStat_STAT_InRateClientMax> FVar6;
  FThreadStats *pFVar7;
  FThreadStatsPool *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_InRateClientMin> FVar9;
  FThreadSafeStaticStat<FStat_STAT_InRateClientAvg> FVar10;
  FThreadSafeStaticStat<FStat_STAT_InPacketsClientMax> FVar11;
  FThreadSafeStaticStat<FStat_STAT_InPacketsClientMin> FVar12;
  FThreadSafeStaticStat<FStat_STAT_InPacketsClientAvg> FVar13;
  FThreadSafeStaticStat<FStat_STAT_OutRateClientMax> FVar14;
  FThreadSafeStaticStat<FStat_STAT_OutRateClientMin> FVar15;
  FThreadSafeStaticStat<FStat_STAT_OutRateClientAvg> FVar16;
  FThreadSafeStaticStat<FStat_STAT_OutPacketsClientMax> FVar17;
  FThreadSafeStaticStat<FStat_STAT_OutPacketsClientMin> FVar18;
  FThreadSafeStaticStat<FStat_STAT_OutPacketsClientAvg> FVar19;
  FThreadSafeStaticStat<FStat_STAT_NetNumClients> FVar20;
  uchar auVar21 [8];
  uchar auVar22 [8];
  uchar auVar23 [8];
  uchar auVar24 [8];
  uchar auVar25 [8];
  uchar auVar26 [8];
  uchar auVar27 [8];
  uchar auVar28 [8];
  uchar auVar29 [8];
  uchar auVar30 [8];
  uchar auVar31 [8];
  uchar auVar32 [8];
  uchar auVar33 [8];
  FName local_res8;
  FStatMessage local_38;
  
  AActor::Tick((AActor *)this,param_1);
  if (this->bUpdateStatNet != false) {
    if (this->bOverwriteClientStats != false) {
      TVar2 = FThreadSafeStaticStatInner<FStat_STAT_Channels,1>::GetStatId
                        ((FThreadSafeStaticStatInner<FStat_STAT_Channels,1> *)&StatPtr_STAT_Channels
                        );
      local_res8 = *(FName *)(TVar2.StatIdPtr)->Name;
      FThreadStats::AddMessage<__int64>(local_res8,Set,(ulonglong)this->Channels,false);
      TVar2 = FThreadSafeStaticStatInner<FStat_STAT_MaxPacketOverhead,1>::GetStatId
                        ((FThreadSafeStaticStatInner<FStat_STAT_MaxPacketOverhead,1> *)
                         &StatPtr_STAT_MaxPacketOverhead);
      local_res8 = *(FName *)(TVar2.StatIdPtr)->Name;
      FThreadStats::AddMessage<__int64>(local_res8,Set,(ulonglong)this->MaxPacketOverhead,false);
      TVar2 = FThreadSafeStaticStatInner<FStat_STAT_OutLoss,1>::GetStatId
                        ((FThreadSafeStaticStatInner<FStat_STAT_OutLoss,1> *)&StatPtr_STAT_OutLoss);
      local_res8 = *(FName *)(TVar2.StatIdPtr)->Name;
      FThreadStats::AddMessage<__int64>(local_res8,Set,(ulonglong)this->OutLoss,false);
      TVar2 = FThreadSafeStaticStatInner<FStat_STAT_InLoss,1>::GetStatId
                        ((FThreadSafeStaticStatInner<FStat_STAT_InLoss,1> *)&StatPtr_STAT_InLoss);
      local_res8 = *(FName *)(TVar2.StatIdPtr)->Name;
      FThreadStats::AddMessage<__int64>(local_res8,Set,(ulonglong)this->InLoss,false);
      TVar2 = FThreadSafeStaticStatInner<FStat_STAT_InRate,1>::GetStatId
                        ((FThreadSafeStaticStatInner<FStat_STAT_InRate,1> *)&StatPtr_STAT_InRate);
      local_res8 = *(FName *)(TVar2.StatIdPtr)->Name;
      FThreadStats::AddMessage<__int64>(local_res8,Set,(ulonglong)this->InRate,false);
      TVar2 = FThreadSafeStaticStatInner<FStat_STAT_OutRate,1>::GetStatId
                        ((FThreadSafeStaticStatInner<FStat_STAT_OutRate,1> *)&StatPtr_STAT_OutRate);
      local_res8 = *(FName *)(TVar2.StatIdPtr)->Name;
      FThreadStats::AddMessage<__int64>(local_res8,Set,(ulonglong)this->OutRate,false);
      TVar2 = FThreadSafeStaticStatInner<FStat_STAT_InPackets,1>::GetStatId
                        ((FThreadSafeStaticStatInner<FStat_STAT_InPackets,1> *)
                         &StatPtr_STAT_InPackets);
      local_res8 = *(FName *)(TVar2.StatIdPtr)->Name;
      FThreadStats::AddMessage<__int64>(local_res8,Set,(ulonglong)this->InPackets,false);
      TVar2 = FThreadSafeStaticStatInner<FStat_STAT_OutPackets,1>::GetStatId
                        ((FThreadSafeStaticStatInner<FStat_STAT_OutPackets,1> *)
                         &StatPtr_STAT_OutPackets);
      local_res8 = *(FName *)(TVar2.StatIdPtr)->Name;
      FThreadStats::AddMessage<__int64>(local_res8,Set,(ulonglong)this->OutPackets,false);
      TVar2 = FThreadSafeStaticStatInner<FStat_STAT_InBunches,1>::GetStatId
                        ((FThreadSafeStaticStatInner<FStat_STAT_InBunches,1> *)
                         &StatPtr_STAT_InBunches);
      local_res8 = *(FName *)(TVar2.StatIdPtr)->Name;
      FThreadStats::AddMessage<__int64>(local_res8,Set,(ulonglong)this->InBunches,false);
      TVar2 = FThreadSafeStaticStatInner<FStat_STAT_OutBunches,1>::GetStatId
                        ((FThreadSafeStaticStatInner<FStat_STAT_OutBunches,1> *)
                         &StatPtr_STAT_OutBunches);
      local_res8 = *(FName *)(TVar2.StatIdPtr)->Name;
      FThreadStats::AddMessage<__int64>(local_res8,Set,(ulonglong)this->OutBunches,false);
      TVar2 = FThreadSafeStaticStatInner<FStat_STAT_NetGUIDInRate,1>::GetStatId
                        ((FThreadSafeStaticStatInner<FStat_STAT_NetGUIDInRate,1> *)
                         &StatPtr_STAT_NetGUIDInRate);
      local_res8 = *(FName *)(TVar2.StatIdPtr)->Name;
      FThreadStats::AddMessage<__int64>(local_res8,Set,(ulonglong)this->NetGUIDInRate,false);
      TVar2 = FThreadSafeStaticStatInner<FStat_STAT_NetGUIDOutRate,1>::GetStatId
                        ((FThreadSafeStaticStatInner<FStat_STAT_NetGUIDOutRate,1> *)
                         &StatPtr_STAT_NetGUIDOutRate);
      local_res8 = *(FName *)(TVar2.StatIdPtr)->Name;
      FThreadStats::AddMessage<__int64>(local_res8,Set,(ulonglong)this->NetGUIDOutRate,false);
      TVar2 = FThreadSafeStaticStatInner<FStat_STAT_VoicePacketsSent,1>::GetStatId
                        ((FThreadSafeStaticStatInner<FStat_STAT_VoicePacketsSent,1> *)
                         &StatPtr_STAT_VoicePacketsSent);
      local_res8 = *(FName *)(TVar2.StatIdPtr)->Name;
      FThreadStats::AddMessage<__int64>(local_res8,Set,(ulonglong)this->VoicePacketsSent,false);
      TVar2 = FThreadSafeStaticStatInner<FStat_STAT_VoicePacketsRecv,1>::GetStatId
                        ((FThreadSafeStaticStatInner<FStat_STAT_VoicePacketsRecv,1> *)
                         &StatPtr_STAT_VoicePacketsRecv);
      local_res8 = *(FName *)(TVar2.StatIdPtr)->Name;
      FThreadStats::AddMessage<__int64>(local_res8,Set,(ulonglong)this->VoicePacketsRecv,false);
      TVar2 = FThreadSafeStaticStatInner<FStat_STAT_VoiceBytesSent,1>::GetStatId
                        ((FThreadSafeStaticStatInner<FStat_STAT_VoiceBytesSent,1> *)
                         &StatPtr_STAT_VoiceBytesSent);
      local_res8 = *(FName *)(TVar2.StatIdPtr)->Name;
      FThreadStats::AddMessage<__int64>(local_res8,Set,(ulonglong)this->VoiceBytesSent,false);
      TVar2 = FThreadSafeStaticStatInner<FStat_STAT_VoiceBytesRecv,1>::GetStatId
                        ((FThreadSafeStaticStatInner<FStat_STAT_VoiceBytesRecv,1> *)
                         &StatPtr_STAT_VoiceBytesRecv);
      local_res8 = *(FName *)(TVar2.StatIdPtr)->Name;
      FThreadStats::AddMessage<__int64>(local_res8,Set,(ulonglong)this->VoiceBytesRecv,false);
      TVar2 = FThreadSafeStaticStatInner<FStat_STAT_PercentInVoice,1>::GetStatId
                        ((FThreadSafeStaticStatInner<FStat_STAT_PercentInVoice,1> *)
                         &StatPtr_STAT_PercentInVoice);
      local_res8 = *(FName *)(TVar2.StatIdPtr)->Name;
      FThreadStats::AddMessage<__int64>(local_res8,Set,(ulonglong)this->PercentInVoice,false);
      TVar2 = FThreadSafeStaticStatInner<FStat_STAT_PercentOutVoice,1>::GetStatId
                        ((FThreadSafeStaticStatInner<FStat_STAT_PercentOutVoice,1> *)
                         &StatPtr_STAT_PercentOutVoice);
      local_res8 = *(FName *)(TVar2.StatIdPtr)->Name;
      FThreadStats::AddMessage<__int64>(local_res8,Set,(ulonglong)this->PercentOutVoice,false);
      TVar2 = FThreadSafeStaticStatInner<FStat_STAT_NumActorChannels,1>::GetStatId
                        ((FThreadSafeStaticStatInner<FStat_STAT_NumActorChannels,1> *)
                         &StatPtr_STAT_NumActorChannels);
      local_res8 = *(FName *)(TVar2.StatIdPtr)->Name;
      FThreadStats::AddMessage<__int64>(local_res8,Set,(ulonglong)this->NumActorChannels,false);
      TVar2 = FThreadSafeStaticStatInner<FStat_STAT_NumDormantActors,1>::GetStatId
                        ((FThreadSafeStaticStatInner<FStat_STAT_NumDormantActors,1> *)
                         &StatPtr_STAT_NumDormantActors);
      local_res8 = *(FName *)(TVar2.StatIdPtr)->Name;
      FThreadStats::AddMessage<__int64>(local_res8,Set,(ulonglong)this->NumDormantActors,false);
      FVar4 = StatPtr_STAT_NumActors;
      if (StatPtr_STAT_NumActors == (FThreadSafeStaticStat<FStat_STAT_NumActors>)0x0) {
        pFVar3 = ::FName::FName(&local_res8,"STAT_NumActors");
        FVar4 = (FThreadSafeStaticStat<FStat_STAT_NumActors>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NumActors,*pFVar3,
                           L"Num Actors","STATGROUP_Net","STATCAT_Advanced",L"Net",true,false,
                           ST_int64,false,false,MCR_Invalid);
      }
      local_res8 = *(FName *)FVar4;
      FThreadStats::AddMessage<__int64>(local_res8,Set,(ulonglong)this->NumActors,false);
      FVar5 = StatPtr_STAT_NumNetActors;
      if (StatPtr_STAT_NumNetActors == (FThreadSafeStaticStat<FStat_STAT_NumNetActors>)0x0) {
        pFVar3 = ::FName::FName(&local_res8,"STAT_NumNetActors");
        FVar5 = (FThreadSafeStaticStat<FStat_STAT_NumNetActors>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NumNetActors,*pFVar3,
                           L"Num Network Actors","STATGROUP_Net","STATCAT_Advanced",L"Net",true,
                           false,ST_int64,false,false,MCR_Invalid);
      }
      local_res8 = *(FName *)FVar5;
      FThreadStats::AddMessage<__int64>(local_res8,Set,(ulonglong)this->NumNetActors,false);
      TVar2 = FThreadSafeStaticStatInner<FStat_STAT_NumNetGUIDsAckd,1>::GetStatId
                        ((FThreadSafeStaticStatInner<FStat_STAT_NumNetGUIDsAckd,1> *)
                         &StatPtr_STAT_NumNetGUIDsAckd);
      local_res8 = *(FName *)(TVar2.StatIdPtr)->Name;
      FThreadStats::AddMessage<__int64>(local_res8,Set,(ulonglong)this->NumNetGUIDsAckd,false);
      TVar2 = FThreadSafeStaticStatInner<FStat_STAT_NumNetGUIDsPending,1>::GetStatId
                        ((FThreadSafeStaticStatInner<FStat_STAT_NumNetGUIDsPending,1> *)
                         &StatPtr_STAT_NumNetGUIDsPending);
      local_res8 = *(FName *)(TVar2.StatIdPtr)->Name;
      FThreadStats::AddMessage<__int64>(local_res8,Set,(ulonglong)this->NumNetGUIDsPending,false);
      TVar2 = FThreadSafeStaticStatInner<FStat_STAT_NumNetGUIDsUnAckd,1>::GetStatId
                        ((FThreadSafeStaticStatInner<FStat_STAT_NumNetGUIDsUnAckd,1> *)
                         &StatPtr_STAT_NumNetGUIDsUnAckd);
      local_res8 = *(FName *)(TVar2.StatIdPtr)->Name;
      FThreadStats::AddMessage<__int64>(local_res8,Set,(ulonglong)this->NumNetGUIDsUnAckd,false);
      TVar2 = FThreadSafeStaticStatInner<FStat_STAT_NetSaturated,1>::GetStatId
                        ((FThreadSafeStaticStatInner<FStat_STAT_NetSaturated,1> *)
                         &StatPtr_STAT_NetSaturated);
      local_res8 = *(FName *)(TVar2.StatIdPtr)->Name;
      FThreadStats::AddMessage<__int64>(local_res8,Set,(ulonglong)this->NetSaturated,false);
    }
    FVar6 = StatPtr_STAT_InRateClientMax;
    if (StatPtr_STAT_InRateClientMax == (FThreadSafeStaticStat<FStat_STAT_InRateClientMax>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_InRateClientMax");
      FVar6 = (FThreadSafeStaticStat<FStat_STAT_InRateClientMax>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InRateClientMax,*pFVar3,
                         L"In Rate (bytes) - max among clients","STATGROUP_Net","STATCAT_Advanced",
                         L"Net",true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar1 = *(FName *)FVar6;
    auVar22[4] = '\0';
    auVar22[5] = '\0';
    auVar22[6] = '\0';
    auVar22[7] = '\0';
    auVar22._0_4_ = this->InRateClientMax;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar7 == (FThreadStats *)0x0) {
        pFVar8 = FThreadStatsPool::Get();
        pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
      local_res8 = FVar1;
      local_38.StatData.Pad = auVar22;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar7,&local_38);
      FStatsTrace::Set(&local_res8,(long64)auVar22);
      if (pFVar7->ScopeCount == 0) {
        FThreadStats::Flush(pFVar7,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar7,false,false);
      }
    }
    FVar9 = StatPtr_STAT_InRateClientMin;
    if (StatPtr_STAT_InRateClientMin == (FThreadSafeStaticStat<FStat_STAT_InRateClientMin>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_InRateClientMin");
      FVar9 = (FThreadSafeStaticStat<FStat_STAT_InRateClientMin>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InRateClientMin,*pFVar3,
                         L"In Rate (bytes) - min among clients","STATGROUP_Net","STATCAT_Advanced",
                         L"Net",true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar1 = *(FName *)FVar9;
    auVar23[4] = '\0';
    auVar23[5] = '\0';
    auVar23[6] = '\0';
    auVar23[7] = '\0';
    auVar23._0_4_ = this->InRateClientMin;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar7 == (FThreadStats *)0x0) {
        pFVar8 = FThreadStatsPool::Get();
        pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
      local_res8 = FVar1;
      local_38.StatData.Pad = auVar23;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar7,&local_38);
      FStatsTrace::Set(&local_res8,(long64)auVar23);
      if (pFVar7->ScopeCount == 0) {
        FThreadStats::Flush(pFVar7,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar7,false,false);
      }
    }
    FVar10 = StatPtr_STAT_InRateClientAvg;
    if (StatPtr_STAT_InRateClientAvg == (FThreadSafeStaticStat<FStat_STAT_InRateClientAvg>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_InRateClientAvg");
      FVar10 = (FThreadSafeStaticStat<FStat_STAT_InRateClientAvg>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InRateClientAvg,*pFVar3,
                          L"In Rate (bytes) - avg among clients","STATGROUP_Net","STATCAT_Advanced",
                          L"Net",true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar1 = *(FName *)FVar10;
    auVar24[4] = '\0';
    auVar24[5] = '\0';
    auVar24[6] = '\0';
    auVar24[7] = '\0';
    auVar24._0_4_ = this->InRateClientAvg;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar7 == (FThreadStats *)0x0) {
        pFVar8 = FThreadStatsPool::Get();
        pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
      local_res8 = FVar1;
      local_38.StatData.Pad = auVar24;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar7,&local_38);
      FStatsTrace::Set(&local_res8,(long64)auVar24);
      if (pFVar7->ScopeCount == 0) {
        FThreadStats::Flush(pFVar7,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar7,false,false);
      }
    }
    FVar11 = StatPtr_STAT_InPacketsClientMax;
    if (StatPtr_STAT_InPacketsClientMax == (FThreadSafeStaticStat<FStat_STAT_InPacketsClientMax>)0x0
       ) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_InPacketsClientMax");
      FVar11 = (FThreadSafeStaticStat<FStat_STAT_InPacketsClientMax>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InPacketsClientMax,*pFVar3,
                          L"In Packets - max among clients","STATGROUP_Net","STATCAT_Advanced",
                          L"Net",true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar1 = *(FName *)FVar11;
    auVar25[4] = '\0';
    auVar25[5] = '\0';
    auVar25[6] = '\0';
    auVar25[7] = '\0';
    auVar25._0_4_ = this->InPacketsClientMax;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar7 == (FThreadStats *)0x0) {
        pFVar8 = FThreadStatsPool::Get();
        pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
      local_res8 = FVar1;
      local_38.StatData.Pad = auVar25;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar7,&local_38);
      FStatsTrace::Set(&local_res8,(long64)auVar25);
      if (pFVar7->ScopeCount == 0) {
        FThreadStats::Flush(pFVar7,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar7,false,false);
      }
    }
    FVar12 = StatPtr_STAT_InPacketsClientMin;
    if (StatPtr_STAT_InPacketsClientMin == (FThreadSafeStaticStat<FStat_STAT_InPacketsClientMin>)0x0
       ) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_InPacketsClientMin");
      FVar12 = (FThreadSafeStaticStat<FStat_STAT_InPacketsClientMin>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InPacketsClientMin,*pFVar3,
                          L"In Packets - min among clients","STATGROUP_Net","STATCAT_Advanced",
                          L"Net",true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar1 = *(FName *)FVar12;
    auVar26[4] = '\0';
    auVar26[5] = '\0';
    auVar26[6] = '\0';
    auVar26[7] = '\0';
    auVar26._0_4_ = this->InPacketsClientMin;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar7 == (FThreadStats *)0x0) {
        pFVar8 = FThreadStatsPool::Get();
        pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
      local_res8 = FVar1;
      local_38.StatData.Pad = auVar26;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar7,&local_38);
      FStatsTrace::Set(&local_res8,(long64)auVar26);
      if (pFVar7->ScopeCount == 0) {
        FThreadStats::Flush(pFVar7,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar7,false,false);
      }
    }
    FVar13 = StatPtr_STAT_InPacketsClientAvg;
    if (StatPtr_STAT_InPacketsClientAvg == (FThreadSafeStaticStat<FStat_STAT_InPacketsClientAvg>)0x0
       ) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_InPacketsClientAvg");
      FVar13 = (FThreadSafeStaticStat<FStat_STAT_InPacketsClientAvg>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InPacketsClientAvg,*pFVar3,
                          L"In Packets - avg among clients","STATGROUP_Net","STATCAT_Advanced",
                          L"Net",true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar1 = *(FName *)FVar13;
    auVar27[4] = '\0';
    auVar27[5] = '\0';
    auVar27[6] = '\0';
    auVar27[7] = '\0';
    auVar27._0_4_ = this->InPacketsClientAvg;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar7 == (FThreadStats *)0x0) {
        pFVar8 = FThreadStatsPool::Get();
        pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
      local_res8 = FVar1;
      local_38.StatData.Pad = auVar27;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar7,&local_38);
      FStatsTrace::Set(&local_res8,(long64)auVar27);
      if (pFVar7->ScopeCount == 0) {
        FThreadStats::Flush(pFVar7,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar7,false,false);
      }
    }
    FVar14 = StatPtr_STAT_OutRateClientMax;
    if (StatPtr_STAT_OutRateClientMax == (FThreadSafeStaticStat<FStat_STAT_OutRateClientMax>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_OutRateClientMax");
      FVar14 = (FThreadSafeStaticStat<FStat_STAT_OutRateClientMax>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OutRateClientMax,*pFVar3,
                          L"Out Rate (bytes) - max among clients","STATGROUP_Net","STATCAT_Advanced"
                          ,L"Net",true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar1 = *(FName *)FVar14;
    auVar28[4] = '\0';
    auVar28[5] = '\0';
    auVar28[6] = '\0';
    auVar28[7] = '\0';
    auVar28._0_4_ = this->OutRateClientMax;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar7 == (FThreadStats *)0x0) {
        pFVar8 = FThreadStatsPool::Get();
        pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
      local_res8 = FVar1;
      local_38.StatData.Pad = auVar28;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar7,&local_38);
      FStatsTrace::Set(&local_res8,(long64)auVar28);
      if (pFVar7->ScopeCount == 0) {
        FThreadStats::Flush(pFVar7,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar7,false,false);
      }
    }
    FVar15 = StatPtr_STAT_OutRateClientMin;
    if (StatPtr_STAT_OutRateClientMin == (FThreadSafeStaticStat<FStat_STAT_OutRateClientMin>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_OutRateClientMin");
      FVar15 = (FThreadSafeStaticStat<FStat_STAT_OutRateClientMin>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OutRateClientMin,*pFVar3,
                          L"Out Rate (bytes) - min among clients","STATGROUP_Net","STATCAT_Advanced"
                          ,L"Net",true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar1 = *(FName *)FVar15;
    auVar29[4] = '\0';
    auVar29[5] = '\0';
    auVar29[6] = '\0';
    auVar29[7] = '\0';
    auVar29._0_4_ = this->OutRateClientMin;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar7 == (FThreadStats *)0x0) {
        pFVar8 = FThreadStatsPool::Get();
        pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
      local_res8 = FVar1;
      local_38.StatData.Pad = auVar29;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar7,&local_38);
      FStatsTrace::Set(&local_res8,(long64)auVar29);
      if (pFVar7->ScopeCount == 0) {
        FThreadStats::Flush(pFVar7,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar7,false,false);
      }
    }
    FVar16 = StatPtr_STAT_OutRateClientAvg;
    if (StatPtr_STAT_OutRateClientAvg == (FThreadSafeStaticStat<FStat_STAT_OutRateClientAvg>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_OutRateClientAvg");
      FVar16 = (FThreadSafeStaticStat<FStat_STAT_OutRateClientAvg>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OutRateClientAvg,*pFVar3,
                          L"Out Rate (bytes) - avg among clients","STATGROUP_Net","STATCAT_Advanced"
                          ,L"Net",true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar1 = *(FName *)FVar16;
    auVar30[4] = '\0';
    auVar30[5] = '\0';
    auVar30[6] = '\0';
    auVar30[7] = '\0';
    auVar30._0_4_ = this->OutRateClientAvg;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar7 == (FThreadStats *)0x0) {
        pFVar8 = FThreadStatsPool::Get();
        pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
      local_res8 = FVar1;
      local_38.StatData.Pad = auVar30;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar7,&local_38);
      FStatsTrace::Set(&local_res8,(long64)auVar30);
      if (pFVar7->ScopeCount == 0) {
        FThreadStats::Flush(pFVar7,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar7,false,false);
      }
    }
    FVar17 = StatPtr_STAT_OutPacketsClientMax;
    if (StatPtr_STAT_OutPacketsClientMax ==
        (FThreadSafeStaticStat<FStat_STAT_OutPacketsClientMax>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_OutPacketsClientMax");
      FVar17 = (FThreadSafeStaticStat<FStat_STAT_OutPacketsClientMax>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OutPacketsClientMax,*pFVar3,
                          L"Out Packets - max among clients","STATGROUP_Net","STATCAT_Advanced",
                          L"Net",true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar1 = *(FName *)FVar17;
    auVar31[4] = '\0';
    auVar31[5] = '\0';
    auVar31[6] = '\0';
    auVar31[7] = '\0';
    auVar31._0_4_ = this->OutPacketsClientMax;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar7 == (FThreadStats *)0x0) {
        pFVar8 = FThreadStatsPool::Get();
        pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
      local_res8 = FVar1;
      local_38.StatData.Pad = auVar31;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar7,&local_38);
      FStatsTrace::Set(&local_res8,(long64)auVar31);
      if (pFVar7->ScopeCount == 0) {
        FThreadStats::Flush(pFVar7,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar7,false,false);
      }
    }
    FVar18 = StatPtr_STAT_OutPacketsClientMin;
    if (StatPtr_STAT_OutPacketsClientMin ==
        (FThreadSafeStaticStat<FStat_STAT_OutPacketsClientMin>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_OutPacketsClientMin");
      FVar18 = (FThreadSafeStaticStat<FStat_STAT_OutPacketsClientMin>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OutPacketsClientMin,*pFVar3,
                          L"Out Packets - min among clients","STATGROUP_Net","STATCAT_Advanced",
                          L"Net",true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar1 = *(FName *)FVar18;
    auVar32[4] = '\0';
    auVar32[5] = '\0';
    auVar32[6] = '\0';
    auVar32[7] = '\0';
    auVar32._0_4_ = this->OutPacketsClientMin;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar7 == (FThreadStats *)0x0) {
        pFVar8 = FThreadStatsPool::Get();
        pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
      local_res8 = FVar1;
      local_38.StatData.Pad = auVar32;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar7,&local_38);
      FStatsTrace::Set(&local_res8,(long64)auVar32);
      if (pFVar7->ScopeCount == 0) {
        FThreadStats::Flush(pFVar7,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar7,false,false);
      }
    }
    FVar19 = StatPtr_STAT_OutPacketsClientAvg;
    if (StatPtr_STAT_OutPacketsClientAvg ==
        (FThreadSafeStaticStat<FStat_STAT_OutPacketsClientAvg>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_OutPacketsClientAvg");
      FVar19 = (FThreadSafeStaticStat<FStat_STAT_OutPacketsClientAvg>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OutPacketsClientAvg,*pFVar3,
                          L"Out Packets - avg among clients","STATGROUP_Net","STATCAT_Advanced",
                          L"Net",true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar1 = *(FName *)FVar19;
    auVar33[4] = '\0';
    auVar33[5] = '\0';
    auVar33[6] = '\0';
    auVar33[7] = '\0';
    auVar33._0_4_ = this->OutPacketsClientAvg;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar7 == (FThreadStats *)0x0) {
        pFVar8 = FThreadStatsPool::Get();
        pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
      local_res8 = FVar1;
      local_38.StatData.Pad = auVar33;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar7,&local_38);
      FStatsTrace::Set(&local_res8,(long64)auVar33);
      if (pFVar7->ScopeCount == 0) {
        FThreadStats::Flush(pFVar7,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar7,false,false);
      }
    }
    FVar20 = StatPtr_STAT_NetNumClients;
    if (StatPtr_STAT_NetNumClients == (FThreadSafeStaticStat<FStat_STAT_NetNumClients>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_NetNumClients");
      FVar20 = (FThreadSafeStaticStat<FStat_STAT_NetNumClients>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetNumClients,*pFVar3,
                          L"Num Clients","STATGROUP_Net","STATCAT_Advanced",L"Net",true,false,
                          ST_int64,false,false,MCR_Invalid);
    }
    FVar1 = *(FName *)FVar20;
    auVar21[4] = '\0';
    auVar21[5] = '\0';
    auVar21[6] = '\0';
    auVar21[7] = '\0';
    auVar21._0_4_ = this->NetNumClients;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res8 = FVar1;
      pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar7 == (FThreadStats *)0x0) {
        pFVar8 = FThreadStatsPool::Get();
        pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
      local_res8 = FVar1;
      local_38.StatData.Pad = auVar21;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar7,&local_38);
      FStatsTrace::Set(&local_res8,(long64)auVar21);
      if (pFVar7->ScopeCount == 0) {
        FThreadStats::Flush(pFVar7,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar7,false,false);
      }
    }
  }
  return;
}

// ValidateGeneratedRepEnums @ 147c0c180

void __thiscall
AServerStatReplicator::ValidateGeneratedRepEnums
          (AServerStatReplicator *this,TArray<FRepRecord,TSizedDefaultAllocator<32>_> *param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  FName FVar5;
  int *piVar6;
  
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar6 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&Name_Channels,L"Channels");
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar6 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FName::FName(&Name_InRate,L"InRate");
    _Init_thread_footer(&::_TSS1);
  }
  if ((*piVar6 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    ::FName::FName(&Name_OutRate,L"OutRate");
    _Init_thread_footer(&::_TSS2);
  }
  if ((*piVar6 < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    ::FName::FName(&Name_MaxPacketOverhead,L"MaxPacketOverhead");
    _Init_thread_footer(&::_TSS3);
  }
  if ((*piVar6 < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
    ::FName::FName(&Name_InRateClientMax,L"InRateClientMax");
    _Init_thread_footer(&::_TSS4);
  }
  if ((*piVar6 < ::_TSS5) && (_Init_thread_header(&::_TSS5), ::_TSS5 == -1)) {
    ::FName::FName(&Name_InRateClientMin,L"InRateClientMin");
    _Init_thread_footer(&::_TSS5);
  }
  if ((*piVar6 < ::_TSS6) && (_Init_thread_header(&::_TSS6), ::_TSS6 == -1)) {
    ::FName::FName(&Name_InRateClientAvg,L"InRateClientAvg");
    _Init_thread_footer(&::_TSS6);
  }
  if ((*piVar6 < ::_TSS7) && (_Init_thread_header(&::_TSS7), ::_TSS7 == -1)) {
    ::FName::FName(&Name_InPacketsClientMax,L"InPacketsClientMax");
    _Init_thread_footer(&::_TSS7);
  }
  if ((*piVar6 < ::_TSS8) && (_Init_thread_header(&::_TSS8), ::_TSS8 == -1)) {
    ::FName::FName(&Name_InPacketsClientMin,L"InPacketsClientMin");
    _Init_thread_footer(&::_TSS8);
  }
  if ((*piVar6 < ::_TSS9) && (_Init_thread_header(&::_TSS9), ::_TSS9 == -1)) {
    ::FName::FName(&Name_InPacketsClientAvg,L"InPacketsClientAvg");
    _Init_thread_footer(&::_TSS9);
  }
  if ((*piVar6 < ::_TSS10) && (_Init_thread_header(&::_TSS10), ::_TSS10 == -1)) {
    ::FName::FName(&Name_OutRateClientMax,L"OutRateClientMax");
    _Init_thread_footer(&::_TSS10);
  }
  if ((*piVar6 < ::_TSS11) && (_Init_thread_header(&::_TSS11), ::_TSS11 == -1)) {
    ::FName::FName(&Name_OutRateClientMin,L"OutRateClientMin");
    _Init_thread_footer(&::_TSS11);
  }
  if ((*piVar6 < ::_TSS12) && (_Init_thread_header(&::_TSS12), ::_TSS12 == -1)) {
    ::FName::FName(&Name_OutRateClientAvg,L"OutRateClientAvg");
    _Init_thread_footer(&::_TSS12);
  }
  if ((*piVar6 < ::_TSS13) && (_Init_thread_header(&::_TSS13), ::_TSS13 == -1)) {
    ::FName::FName(&Name_OutPacketsClientMax,L"OutPacketsClientMax");
    _Init_thread_footer(&::_TSS13);
  }
  if ((*piVar6 < ::_TSS14) && (_Init_thread_header(&::_TSS14), ::_TSS14 == -1)) {
    ::FName::FName(&Name_OutPacketsClientMin,L"OutPacketsClientMin");
    _Init_thread_footer(&::_TSS14);
  }
  if ((*piVar6 < ::_TSS15) && (_Init_thread_header(&::_TSS15), ::_TSS15 == -1)) {
    ::FName::FName(&Name_OutPacketsClientAvg,L"OutPacketsClientAvg");
    _Init_thread_footer(&::_TSS15);
  }
  if ((*piVar6 < _TSS16) && (_Init_thread_header(&_TSS16), _TSS16 == -1)) {
    ::FName::FName(&Name_NetNumClients,L"NetNumClients");
    _Init_thread_footer(&_TSS16);
  }
  if ((*piVar6 < _TSS17) && (_Init_thread_header(&_TSS17), _TSS17 == -1)) {
    ::FName::FName(&Name_InPackets,L"InPackets");
    _Init_thread_footer(&_TSS17);
  }
  if ((*piVar6 < _TSS18) && (_Init_thread_header(&_TSS18), _TSS18 == -1)) {
    ::FName::FName(&Name_OutPackets,L"OutPackets");
    _Init_thread_footer(&_TSS18);
  }
  if ((*piVar6 < _TSS19) && (_Init_thread_header(&_TSS19), _TSS19 == -1)) {
    ::FName::FName(&Name_InBunches,L"InBunches");
    _Init_thread_footer(&_TSS19);
  }
  if ((*piVar6 < _TSS20) && (_Init_thread_header(&_TSS20), _TSS20 == -1)) {
    ::FName::FName(&Name_OutBunches,L"OutBunches");
    _Init_thread_footer(&_TSS20);
  }
  if ((*piVar6 < _TSS21) && (_Init_thread_header(&_TSS21), _TSS21 == -1)) {
    ::FName::FName(&Name_OutLoss,L"OutLoss");
    _Init_thread_footer(&_TSS21);
  }
  if ((*piVar6 < _TSS22) && (_Init_thread_header(&_TSS22), _TSS22 == -1)) {
    ::FName::FName(&Name_InLoss,L"InLoss");
    _Init_thread_footer(&_TSS22);
  }
  if ((*piVar6 < _TSS23) && (_Init_thread_header(&_TSS23), _TSS23 == -1)) {
    ::FName::FName(&Name_VoiceBytesSent,L"VoiceBytesSent");
    _Init_thread_footer(&_TSS23);
  }
  if ((*piVar6 < _TSS24) && (_Init_thread_header(&_TSS24), _TSS24 == -1)) {
    ::FName::FName(&Name_VoiceBytesRecv,L"VoiceBytesRecv");
    _Init_thread_footer(&_TSS24);
  }
  if ((*piVar6 < _TSS25) && (_Init_thread_header(&_TSS25), _TSS25 == -1)) {
    ::FName::FName(&Name_VoicePacketsSent,L"VoicePacketsSent");
    _Init_thread_footer(&_TSS25);
  }
  if ((*piVar6 < _TSS26) && (_Init_thread_header(&_TSS26), _TSS26 == -1)) {
    ::FName::FName(&Name_VoicePacketsRecv,L"VoicePacketsRecv");
    _Init_thread_footer(&_TSS26);
  }
  if ((*piVar6 < _TSS27) && (_Init_thread_header(&_TSS27), _TSS27 == -1)) {
    ::FName::FName(&Name_PercentInVoice,L"PercentInVoice");
    _Init_thread_footer(&_TSS27);
  }
  if ((*piVar6 < _TSS28) && (_Init_thread_header(&_TSS28), _TSS28 == -1)) {
    ::FName::FName(&Name_PercentOutVoice,L"PercentOutVoice");
    _Init_thread_footer(&_TSS28);
  }
  if ((*piVar6 < _TSS29) && (_Init_thread_header(&_TSS29), _TSS29 == -1)) {
    ::FName::FName(&Name_NumActorChannels,L"NumActorChannels");
    _Init_thread_footer(&_TSS29);
  }
  if ((*piVar6 < _TSS30) && (_Init_thread_header(&_TSS30), _TSS30 == -1)) {
    ::FName::FName(&Name_NumConsideredActors,L"NumConsideredActors");
    _Init_thread_footer(&_TSS30);
  }
  if ((*piVar6 < _TSS31) && (_Init_thread_header(&_TSS31), _TSS31 == -1)) {
    ::FName::FName(&Name_PrioritizedActors,L"PrioritizedActors");
    _Init_thread_footer(&_TSS31);
  }
  if ((*piVar6 < _TSS32) && (_Init_thread_header(&_TSS32), _TSS32 == -1)) {
    ::FName::FName(&Name_NumRelevantActors,L"NumRelevantActors");
    _Init_thread_footer(&_TSS32);
  }
  if ((*piVar6 < _TSS33) && (_Init_thread_header(&_TSS33), _TSS33 == -1)) {
    ::FName::FName(&Name_NumRelevantDeletedActors,L"NumRelevantDeletedActors");
    _Init_thread_footer(&_TSS33);
  }
  if ((*piVar6 < _TSS34) && (_Init_thread_header(&_TSS34), _TSS34 == -1)) {
    ::FName::FName(&Name_NumReplicatedActorAttempts,L"NumReplicatedActorAttempts");
    _Init_thread_footer(&_TSS34);
  }
  if ((*piVar6 < _TSS35) && (_Init_thread_header(&_TSS35), _TSS35 == -1)) {
    ::FName::FName(&Name_NumReplicatedActors,L"NumReplicatedActors");
    _Init_thread_footer(&_TSS35);
  }
  if ((*piVar6 < _TSS36) && (_Init_thread_header(&_TSS36), _TSS36 == -1)) {
    ::FName::FName(&Name_NumActors,L"NumActors");
    _Init_thread_footer(&_TSS36);
  }
  if ((*piVar6 < _TSS37) && (_Init_thread_header(&_TSS37), _TSS37 == -1)) {
    ::FName::FName(&Name_NumNetActors,L"NumNetActors");
    _Init_thread_footer(&_TSS37);
  }
  if ((*piVar6 < _TSS38) && (_Init_thread_header(&_TSS38), _TSS38 == -1)) {
    ::FName::FName(&Name_NumDormantActors,L"NumDormantActors");
    _Init_thread_footer(&_TSS38);
  }
  if ((*piVar6 < _TSS39) && (_Init_thread_header(&_TSS39), _TSS39 == -1)) {
    ::FName::FName(&Name_NumInitiallyDormantActors,L"NumInitiallyDormantActors");
    _Init_thread_footer(&_TSS39);
  }
  if ((*piVar6 < _TSS40) && (_Init_thread_header(&_TSS40), _TSS40 == -1)) {
    ::FName::FName(&Name_NumNetGUIDsAckd,L"NumNetGUIDsAckd");
    _Init_thread_footer(&_TSS40);
  }
  if ((*piVar6 < _TSS41) && (_Init_thread_header(&_TSS41), _TSS41 == -1)) {
    ::FName::FName(&Name_NumNetGUIDsPending,L"NumNetGUIDsPending");
    _Init_thread_footer(&_TSS41);
  }
  if ((*piVar6 < _TSS42) && (_Init_thread_header(&_TSS42), _TSS42 == -1)) {
    ::FName::FName(&Name_NumNetGUIDsUnAckd,L"NumNetGUIDsUnAckd");
    _Init_thread_footer(&_TSS42);
  }
  if ((*piVar6 < _TSS43) && (_Init_thread_header(&_TSS43), _TSS43 == -1)) {
    ::FName::FName(&Name_ObjPathBytes,L"ObjPathBytes");
    _Init_thread_footer(&_TSS43);
  }
  if ((*piVar6 < _TSS44) && (_Init_thread_header(&_TSS44), _TSS44 == -1)) {
    ::FName::FName(&Name_NetGUIDOutRate,L"NetGUIDOutRate");
    _Init_thread_footer(&_TSS44);
  }
  if ((*piVar6 < _TSS45) && (_Init_thread_header(&_TSS45), _TSS45 == -1)) {
    ::FName::FName(&Name_NetGUIDInRate,L"NetGUIDInRate");
    _Init_thread_footer(&_TSS45);
  }
  if ((*piVar6 < _TSS46) && (_Init_thread_header(&_TSS46), _TSS46 == -1)) {
    ::FName::FName(&Name_NetSaturated,L"NetSaturated");
    _Init_thread_footer(&_TSS46);
  }
  if ((param_1->ArrayNum < 0xb) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xa0);
  bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
  FVar5.ComparisonIndex.Value = 0;
  FVar5.Number = 0;
  FVar4 = FVar5;
  if (bVar3) {
    FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
  }
  if (Name_Channels == FVar4) {
    if ((param_1->ArrayNum < 0xc) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xb0);
    bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
    FVar4 = FVar5;
    if (bVar3) {
      FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
    }
    if (Name_InRate == FVar4) {
      if ((param_1->ArrayNum < 0xd) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xc0);
      bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
      FVar4 = FVar5;
      if (bVar3) {
        FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
      }
      if (Name_OutRate == FVar4) {
        if ((param_1->ArrayNum < 0xe) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xd0);
        bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
        FVar4 = FVar5;
        if (bVar3) {
          FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
        }
        if (Name_MaxPacketOverhead == FVar4) {
          if ((param_1->ArrayNum < 0xf) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xe0);
          bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
          FVar4 = FVar5;
          if (bVar3) {
            FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
          }
          if (Name_InRateClientMax == FVar4) {
            if ((param_1->ArrayNum < 0x10) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xf0);
            bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
            FVar4 = FVar5;
            if (bVar3) {
              FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
            }
            if (Name_InRateClientMin == FVar4) {
              if ((param_1->ArrayNum < 0x11) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x100);
              bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
              FVar4 = FVar5;
              if (bVar3) {
                FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
              }
              if (Name_InRateClientAvg == FVar4) {
                if ((param_1->ArrayNum < 0x12) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x110);
                bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
                FVar4 = FVar5;
                if (bVar3) {
                  FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
                }
                if (Name_InPacketsClientMax == FVar4) {
                  if ((param_1->ArrayNum < 0x13) &&
                     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar3)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x120);
                  bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
                  FVar4 = FVar5;
                  if (bVar3) {
                    FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
                  }
                  if (Name_InPacketsClientMin == FVar4) {
                    if ((param_1->ArrayNum < 0x14) &&
                       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar3)) {
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x130);
                    bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
                    FVar4 = FVar5;
                    if (bVar3) {
                      FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
                    }
                    if (Name_InPacketsClientAvg == FVar4) {
                      if ((param_1->ArrayNum < 0x15) &&
                         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar3)) {
                        pcVar2 = (code *)swi(3);
                        (*pcVar2)();
                        return;
                      }
                      pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x140);
                      bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
                      FVar4 = FVar5;
                      if (bVar3) {
                        FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
                      }
                      if (Name_OutRateClientMax == FVar4) {
                        if ((param_1->ArrayNum < 0x16) &&
                           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar3)) {
                          pcVar2 = (code *)swi(3);
                          (*pcVar2)();
                          return;
                        }
                        pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x150);
                        bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
                        FVar4 = FVar5;
                        if (bVar3) {
                          FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
                        }
                        if (Name_OutRateClientMin == FVar4) {
                          if ((param_1->ArrayNum < 0x17) &&
                             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                ("(Index >= 0) & (Index < ArrayNum)",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x447,
                                                 L"Array index out of bounds: %lld into an array of size %lld"
                                                ), bVar3)) {
                            pcVar2 = (code *)swi(3);
                            (*pcVar2)();
                            return;
                          }
                          pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x160);
                          bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
                          FVar4 = FVar5;
                          if (bVar3) {
                            FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
                          }
                          if (Name_OutRateClientAvg == FVar4) {
                            if ((param_1->ArrayNum < 0x18) &&
                               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                  ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                      
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar3)) {
                              pcVar2 = (code *)swi(3);
                              (*pcVar2)();
                              return;
                            }
                            pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x170);
                            bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
                            FVar4 = FVar5;
                            if (bVar3) {
                              FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
                            }
                            if (Name_OutPacketsClientMax == FVar4) {
                              if ((param_1->ArrayNum < 0x19) &&
                                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                    ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                          
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar3)) {
                                pcVar2 = (code *)swi(3);
                                (*pcVar2)();
                                return;
                              }
                              pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x180);
                              bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
                              FVar4 = FVar5;
                              if (bVar3) {
                                FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
                              }
                              if (Name_OutPacketsClientMin == FVar4) {
                                if ((param_1->ArrayNum < 0x1a) &&
                                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                      ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                              
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar3)) {
                                  pcVar2 = (code *)swi(3);
                                  (*pcVar2)();
                                  return;
                                }
                                pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 400);
                                bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
                                FVar4 = FVar5;
                                if (bVar3) {
                                  FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
                                }
                                if (Name_OutPacketsClientAvg == FVar4) {
                                  if ((param_1->ArrayNum < 0x1b) &&
                                     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                        ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                  
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar3)) {
                                    pcVar2 = (code *)swi(3);
                                    (*pcVar2)();
                                    return;
                                  }
                                  pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x1a0);
                                  bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
                                  FVar4 = FVar5;
                                  if (bVar3) {
                                    FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
                                  }
                                  if (Name_NetNumClients == FVar4) {
                                    if ((param_1->ArrayNum < 0x1c) &&
                                       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                          ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                      
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar3)) {
                                      pcVar2 = (code *)swi(3);
                                      (*pcVar2)();
                                      return;
                                    }
                                    pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x1b0);
                                    bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
                                    FVar4 = FVar5;
                                    if (bVar3) {
                                      FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
                                    }
                                    if (Name_InPackets == FVar4) {
                                      if ((param_1->ArrayNum < 0x1d) &&
                                         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                            ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                          
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar3)) {
                                        pcVar2 = (code *)swi(3);
                                        (*pcVar2)();
                                        return;
                                      }
                                      pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x1c0)
                                      ;
                                      bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
                                      FVar4 = FVar5;
                                      if (bVar3) {
                                        FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
                                      }
                                      if (Name_OutPackets == FVar4) {
                                        if ((param_1->ArrayNum < 0x1e) &&
                                           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                              ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                              
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar3)) {
                                          pcVar2 = (code *)swi(3);
                                          (*pcVar2)();
                                          return;
                                        }
                                        pvVar1 = *(void **)((param_1->AllocatorInstance).Data +
                                                           0x1d0);
                                        bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
                                        FVar4 = FVar5;
                                        if (bVar3) {
                                          FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
                                        }
                                        if (Name_InBunches == FVar4) {
                                          if ((param_1->ArrayNum < 0x1f) &&
                                             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                ("(Index >= 0) & (Index < ArrayNum)"
                                                                 ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar3)) {
                                            pcVar2 = (code *)swi(3);
                                            (*pcVar2)();
                                            return;
                                          }
                                          pvVar1 = *(void **)((param_1->AllocatorInstance).Data +
                                                             0x1e0);
                                          bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
                                          FVar4 = FVar5;
                                          if (bVar3) {
                                            FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
                                          }
                                          if (Name_OutBunches == FVar4) {
                                            if ((param_1->ArrayNum < 0x20) &&
                                               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                  (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar3)) {
                                              pcVar2 = (code *)swi(3);
                                              (*pcVar2)();
                                              return;
                                            }
                                            pvVar1 = *(void **)((param_1->AllocatorInstance).Data +
                                                               0x1f0);
                                            bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
                                            FVar4 = FVar5;
                                            if (bVar3) {
                                              FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
                                            }
                                            if (Name_OutLoss == FVar4) {
                                              if ((param_1->ArrayNum < 0x21) &&
                                                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                    (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar3)) {
                                                pcVar2 = (code *)swi(3);
                                                (*pcVar2)();
                                                return;
                                              }
                                              pvVar1 = *(void **)((param_1->AllocatorInstance).Data
                                                                 + 0x200);
                                              bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
                                              FVar4 = FVar5;
                                              if (bVar3) {
                                                FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
                                              }
                                              if (Name_InLoss == FVar4) {
                                                if ((param_1->ArrayNum < 0x22) &&
                                                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                      (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar3)) {
                                                  pcVar2 = (code *)swi(3);
                                                  (*pcVar2)();
                                                  return;
                                                }
                                                pvVar1 = *(void **)((param_1->AllocatorInstance).
                                                                    Data + 0x210);
                                                bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
                                                FVar4 = FVar5;
                                                if (bVar3) {
                                                  FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
                                                }
                                                if (Name_VoiceBytesSent == FVar4) {
                                                  if ((param_1->ArrayNum < 0x23) &&
                                                     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                        (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar3)) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  pvVar1 = *(void **)((param_1->AllocatorInstance).
                                                                      Data + 0x220);
                                                  bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
                                                  FVar4 = FVar5;
                                                  if (bVar3) {
                                                    FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
                                                  }
                                                  if (Name_VoiceBytesRecv == FVar4) {
                                                    if ((param_1->ArrayNum < 0x24) &&
                                                       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar3)) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  pvVar1 = *(void **)((param_1->AllocatorInstance).
                                                                      Data + 0x230);
                                                  bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
                                                  FVar4 = FVar5;
                                                  if (bVar3) {
                                                    FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
                                                  }
                                                  if (Name_VoicePacketsSent == FVar4) {
                                                    if ((param_1->ArrayNum < 0x25) &&
                                                       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar3)) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  pvVar1 = *(void **)((param_1->AllocatorInstance).
                                                                      Data + 0x240);
                                                  bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
                                                  FVar4 = FVar5;
                                                  if (bVar3) {
                                                    FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
                                                  }
                                                  if (Name_VoicePacketsRecv == FVar4) {
                                                    if ((param_1->ArrayNum < 0x26) &&
                                                       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar3)) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  pvVar1 = *(void **)((param_1->AllocatorInstance).
                                                                      Data + 0x250);
                                                  bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
                                                  FVar4 = FVar5;
                                                  if (bVar3) {
                                                    FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
                                                  }
                                                  if (Name_PercentInVoice == FVar4) {
                                                    if ((param_1->ArrayNum < 0x27) &&
                                                       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar3)) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  pvVar1 = *(void **)((param_1->AllocatorInstance).
                                                                      Data + 0x260);
                                                  bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
                                                  if (bVar3) {
                                                    FVar5 = *(FName *)((longlong)pvVar1 + 0x20);
                                                  }
                                                  if (Name_PercentOutVoice == FVar5) {
                                                    if ((param_1->ArrayNum < 0x28) &&
                                                       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar3)) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  FVar5 = FField::GetFName(*(FField **)
                                                                            ((param_1->
                                                                             AllocatorInstance).Data
                                                                            + 0x270));
                                                  if (Name_NumActorChannels == *(FName *)FVar5) {
                                                    if ((param_1->ArrayNum < 0x29) &&
                                                       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar3)) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  FVar5 = FField::GetFName(*(FField **)
                                                                            ((param_1->
                                                                             AllocatorInstance).Data
                                                                            + 0x280));
                                                  if (Name_NumConsideredActors == *(FName *)FVar5) {
                                                    if ((param_1->ArrayNum < 0x2a) &&
                                                       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar3)) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  FVar5 = FField::GetFName(*(FField **)
                                                                            ((param_1->
                                                                             AllocatorInstance).Data
                                                                            + 0x290));
                                                  if (Name_PrioritizedActors == *(FName *)FVar5) {
                                                    if ((param_1->ArrayNum < 0x2b) &&
                                                       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar3)) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  FVar5 = FField::GetFName(*(FField **)
                                                                            ((param_1->
                                                                             AllocatorInstance).Data
                                                                            + 0x2a0));
                                                  if (Name_NumRelevantActors == *(FName *)FVar5) {
                                                    if ((param_1->ArrayNum < 0x2c) &&
                                                       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar3)) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  FVar5 = FField::GetFName(*(FField **)
                                                                            ((param_1->
                                                                             AllocatorInstance).Data
                                                                            + 0x2b0));
                                                  if (Name_NumRelevantDeletedActors ==
                                                      *(FName *)FVar5) {
                                                    if ((param_1->ArrayNum < 0x2d) &&
                                                       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar3)) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  FVar5 = FField::GetFName(*(FField **)
                                                                            ((param_1->
                                                                             AllocatorInstance).Data
                                                                            + 0x2c0));
                                                  if (Name_NumReplicatedActorAttempts ==
                                                      *(FName *)FVar5) {
                                                    if ((param_1->ArrayNum < 0x2e) &&
                                                       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar3)) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  FVar5 = FField::GetFName(*(FField **)
                                                                            ((param_1->
                                                                             AllocatorInstance).Data
                                                                            + 0x2d0));
                                                  if (Name_NumReplicatedActors == *(FName *)FVar5) {
                                                    if ((param_1->ArrayNum < 0x2f) &&
                                                       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar3)) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  FVar5 = FField::GetFName(*(FField **)
                                                                            ((param_1->
                                                                             AllocatorInstance).Data
                                                                            + 0x2e0));
                                                  if (Name_NumActors == *(FName *)FVar5) {
                                                    if ((param_1->ArrayNum < 0x30) &&
                                                       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar3)) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  FVar5 = FField::GetFName(*(FField **)
                                                                            ((param_1->
                                                                             AllocatorInstance).Data
                                                                            + 0x2f0));
                                                  if (Name_NumNetActors == *(FName *)FVar5) {
                                                    if ((param_1->ArrayNum < 0x31) &&
                                                       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar3)) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  FVar5 = FField::GetFName(*(FField **)
                                                                            ((param_1->
                                                                             AllocatorInstance).Data
                                                                            + 0x300));
                                                  if (Name_NumDormantActors == *(FName *)FVar5) {
                                                    if ((param_1->ArrayNum < 0x32) &&
                                                       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar3)) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  FVar5 = FField::GetFName(*(FField **)
                                                                            ((param_1->
                                                                             AllocatorInstance).Data
                                                                            + 0x310));
                                                  if (Name_NumInitiallyDormantActors ==
                                                      *(FName *)FVar5) {
                                                    if ((param_1->ArrayNum < 0x33) &&
                                                       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar3)) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  FVar5 = FField::GetFName(*(FField **)
                                                                            ((param_1->
                                                                             AllocatorInstance).Data
                                                                            + 800));
                                                  if (Name_NumNetGUIDsAckd == *(FName *)FVar5) {
                                                    if ((param_1->ArrayNum < 0x34) &&
                                                       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar3)) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  FVar5 = FField::GetFName(*(FField **)
                                                                            ((param_1->
                                                                             AllocatorInstance).Data
                                                                            + 0x330));
                                                  if (Name_NumNetGUIDsPending == *(FName *)FVar5) {
                                                    if ((param_1->ArrayNum < 0x35) &&
                                                       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar3)) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  FVar5 = FField::GetFName(*(FField **)
                                                                            ((param_1->
                                                                             AllocatorInstance).Data
                                                                            + 0x340));
                                                  if (Name_NumNetGUIDsUnAckd == *(FName *)FVar5) {
                                                    if ((param_1->ArrayNum < 0x36) &&
                                                       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar3)) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  FVar5 = FField::GetFName(*(FField **)
                                                                            ((param_1->
                                                                             AllocatorInstance).Data
                                                                            + 0x350));
                                                  if (Name_ObjPathBytes == *(FName *)FVar5) {
                                                    if ((param_1->ArrayNum < 0x37) &&
                                                       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar3)) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  FVar5 = FField::GetFName(*(FField **)
                                                                            ((param_1->
                                                                             AllocatorInstance).Data
                                                                            + 0x360));
                                                  if (Name_NetGUIDOutRate == *(FName *)FVar5) {
                                                    if ((param_1->ArrayNum < 0x38) &&
                                                       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar3)) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  FVar5 = FField::GetFName(*(FField **)
                                                                            ((param_1->
                                                                             AllocatorInstance).Data
                                                                            + 0x370));
                                                  if (Name_NetGUIDInRate == *(FName *)FVar5) {
                                                    if ((param_1->ArrayNum < 0x39) &&
                                                       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar3)) {
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  FVar5 = FField::GetFName(*(FField **)
                                                                            ((param_1->
                                                                             AllocatorInstance).Data
                                                                            + 0x380));
                                                  if (Name_NetSaturated == *(FName *)FVar5) {
                                                    return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("bIsValid",
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\ServerStatReplicator.gen.cpp"
                     ,0x265,
                     L"UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AServerStatReplicator"
                    );
  if (!bVar3) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

