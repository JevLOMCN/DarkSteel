// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 18

// StaticClass @ 14758a010

UClass * __cdecl ASkeletalMeshActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ASkeletalMeshActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SkeletalMeshActor",
               &Z_Registration_Info_UClass_ASkeletalMeshActor.InnerSingleton,
               StaticRegisterNativesASkeletalMeshActor,0x340,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ASkeletalMeshActor>,
               InternalVTableHelperCtorCaller<ASkeletalMeshActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ASkeletalMeshActor.InnerSingleton;
}

// ASkeletalMeshActor @ 1475a40c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ASkeletalMeshActor * __thiscall
ASkeletalMeshActor::ASkeletalMeshActor(ASkeletalMeshActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ASkeletalMeshActor__6B_;
  (this->SkeletalMeshComponent).field0_0x0.DebugPtr = (USkeletalMeshComponent *)0x0;
  (this->ReplicatedMesh).field0_0x0.DebugPtr = (USkeletalMesh *)0x0;
  (this->ReplicatedPhysAsset).field0_0x0.DebugPtr = (UPhysicsAsset *)0x0;
  (this->ReplicatedMaterial0).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->ReplicatedMaterial1).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  *(undefined8 *)&this->CurrentlyPlayingMontages = 0;
  *(undefined8 *)&(this->CurrentlyPlayingMontages).field_0x8 = 0;
  *(undefined8 *)&(this->CurrentlyPlayingMontages).field_0x20 = 0;
  *(undefined4 *)&(this->CurrentlyPlayingMontages).field_0x28 = 0;
  *(undefined4 *)&(this->CurrentlyPlayingMontages).field_0x2c = 0x80;
  *(undefined4 *)&(this->CurrentlyPlayingMontages).field_0x34 = 0;
  *(undefined4 *)&(this->CurrentlyPlayingMontages).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CurrentlyPlayingMontages).field_0x40 = 0;
  *(undefined4 *)&(this->CurrentlyPlayingMontages).field_0x48 = 0;
  return this;
}

// ASkeletalMeshActor @ 1475a4150

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ASkeletalMeshActor * __thiscall
ASkeletalMeshActor::ASkeletalMeshActor(ASkeletalMeshActor *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  USkeletalMeshComponent *pUVar4;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ASkeletalMeshActor__6B_;
  (this->SkeletalMeshComponent).field0_0x0.DebugPtr = (USkeletalMeshComponent *)0x0;
  (this->ReplicatedMesh).field0_0x0.DebugPtr = (USkeletalMesh *)0x0;
  (this->ReplicatedPhysAsset).field0_0x0.DebugPtr = (UPhysicsAsset *)0x0;
  (this->ReplicatedMaterial0).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->ReplicatedMaterial1).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  *(undefined8 *)&this->CurrentlyPlayingMontages = 0;
  *(undefined8 *)&(this->CurrentlyPlayingMontages).field_0x8 = 0;
  *(undefined8 *)&(this->CurrentlyPlayingMontages).field_0x20 = 0;
  *(undefined4 *)&(this->CurrentlyPlayingMontages).field_0x28 = 0;
  *(undefined4 *)&(this->CurrentlyPlayingMontages).field_0x2c = 0x80;
  *(undefined4 *)&(this->CurrentlyPlayingMontages).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CurrentlyPlayingMontages).field_0x34 = 0;
  *(undefined8 *)&(this->CurrentlyPlayingMontages).field_0x40 = 0;
  *(undefined4 *)&(this->CurrentlyPlayingMontages).field_0x48 = 0;
  pFVar2 = ::FName::FName(&local_res8,L"SkeletalMeshComponent0");
  FVar1 = *pFVar2;
  pUVar3 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  pUVar4 = (USkeletalMeshComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (USkeletalMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->SkeletalMeshComponent).field0_0x0.DebugPtr = pUVar4;
  *(undefined1 *)((longlong)&pUVar4->_padding_ + 4) = 1;
  pUVar4 = (this->SkeletalMeshComponent).field0_0x0.DebugPtr;
  (**(code **)(pUVar4->_padding_ + 0x788))(pUVar4,UCollisionProfile::PhysicsActor_ProfileName,1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 = (this->SkeletalMeshComponent).field0_0x0.DebugPtr,
     pUVar4 != (USkeletalMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  this->_padding_ = (longlong)(this->SkeletalMeshComponent).field0_0x0;
  this->bShouldDoAnimNotifies = 1;
  return this;
}

// ~ASkeletalMeshActor @ 1475a9690

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ASkeletalMeshActor::~ASkeletalMeshActor(ASkeletalMeshActor *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7ASkeletalMeshActor__6B_;
  *(undefined4 *)&(this->CurrentlyPlayingMontages).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CurrentlyPlayingMontages).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<UAnimMontage,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<UAnimMontage,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<UAnimMontage,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CurrentlyPlayingMontages);
  AActor::~AActor((AActor *)this);
  return;
}

// GetDetailedInfoInternal @ 1475d4510

FString * __thiscall
ASkeletalMeshActor::GetDetailedInfoInternal
          (ASkeletalMeshActor *this,FString *__return_storage_ptr__)

{
  USkeletalMeshComponent *pUVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  void *local_18 [2];
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pUVar1 = (this->SkeletalMeshComponent).field0_0x0.DebugPtr;
  if (pUVar1 == (USkeletalMeshComponent *)0x0) {
    ::FString::operator=(__return_storage_ptr__,L"No_SkeletalMeshComponent");
  }
  else {
    pFVar3 = (FString *)(**(code **)(pUVar1->_padding_ + 0x48))(pUVar1,local_18);
    if (__return_storage_ptr__ != pFVar3) {
      pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar3->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetLifetimeReplicatedProps @ 1475d4bd0

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
ASkeletalMeshActor::GetLifetimeReplicatedProps
          (ASkeletalMeshActor *this,TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  FProperty *pFVar4;
  FName local_res18 [2];
  FDoRepLifetimeParams local_38;
  
  AActor::GetLifetimeReplicatedProps((AActor *)this,param_1);
  pFVar2 = ::FName::FName(local_res18,0xe,L"ReplicatedMesh",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  pFVar4 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((pFVar4->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar4,(FString *)&local_38);
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
  RegisterReplicatedLifetimeProperty(pFVar4,param_1,&local_38);
  pFVar2 = ::FName::FName(local_res18,0x13,L"ReplicatedPhysAsset",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  pFVar4 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((pFVar4->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar4,(FString *)&local_38);
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
  RegisterReplicatedLifetimeProperty(pFVar4,param_1,&local_38);
  pFVar2 = ::FName::FName(local_res18,0x13,L"ReplicatedMaterial0",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  pFVar4 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((pFVar4->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar4,(FString *)&local_38);
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
  RegisterReplicatedLifetimeProperty(pFVar4,param_1,&local_38);
  pFVar2 = ::FName::FName(local_res18,0x13,L"ReplicatedMaterial1",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  pFVar4 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((pFVar4->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar4,(FString *)&local_38);
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
  RegisterReplicatedLifetimeProperty(pFVar4,param_1,&local_38);
  return;
}

// GetPrivateStaticClass @ 1475db2c0

UClass * __cdecl ASkeletalMeshActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ASkeletalMeshActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SkeletalMeshActor",
               &Z_Registration_Info_UClass_ASkeletalMeshActor.InnerSingleton,
               StaticRegisterNativesASkeletalMeshActor,0x340,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ASkeletalMeshActor>,
               InternalVTableHelperCtorCaller<ASkeletalMeshActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ASkeletalMeshActor.InnerSingleton;
}

// OnRep_ReplicatedMaterial0 @ 1475e87f0

void __thiscall ASkeletalMeshActor::OnRep_ReplicatedMaterial0(ASkeletalMeshActor *this)

{
  USkeletalMeshComponent *pUVar1;
  
  pUVar1 = (this->SkeletalMeshComponent).field0_0x0.DebugPtr;
                    /* WARNING: Could not recover jumptable at 0x0001475e8806. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pUVar1->_padding_ + 0x6b8))(pUVar1,0,(this->ReplicatedMaterial0).field0_0x0.DebugPtr)
  ;
  return;
}

// OnRep_ReplicatedMaterial1 @ 1475e8820

void __thiscall ASkeletalMeshActor::OnRep_ReplicatedMaterial1(ASkeletalMeshActor *this)

{
  USkeletalMeshComponent *pUVar1;
  
  pUVar1 = (this->SkeletalMeshComponent).field0_0x0.DebugPtr;
                    /* WARNING: Could not recover jumptable at 0x0001475e8839. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pUVar1->_padding_ + 0x6b8))(pUVar1,1,(this->ReplicatedMaterial1).field0_0x0.DebugPtr)
  ;
  return;
}

// OnRep_ReplicatedMesh @ 1475e8850

void __thiscall ASkeletalMeshActor::OnRep_ReplicatedMesh(ASkeletalMeshActor *this)

{
  USkeletalMeshComponent *pUVar1;
  
  pUVar1 = (this->SkeletalMeshComponent).field0_0x0.DebugPtr;
                    /* WARNING: Could not recover jumptable at 0x0001475e8864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pUVar1->_padding_ + 0xb48))(pUVar1,(this->ReplicatedMesh).field0_0x0.DebugPtr,1);
  return;
}

// OnRep_ReplicatedPhysAsset @ 1475e8880

void __thiscall ASkeletalMeshActor::OnRep_ReplicatedPhysAsset(ASkeletalMeshActor *this)

{
  USkeletalMeshComponent *pUVar1;
  
  pUVar1 = (this->SkeletalMeshComponent).field0_0x0.DebugPtr;
                    /* WARNING: Could not recover jumptable at 0x0001475e8894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pUVar1->_padding_ + 0xb40))(pUVar1,(this->ReplicatedPhysAsset).field0_0x0.DebugPtr,0)
  ;
  return;
}

// PostInitializeComponents @ 1475e9f00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ASkeletalMeshActor::PostInitializeComponents(ASkeletalMeshActor *this)

{
  USkeletalMeshComponent *pUVar1;
  USkeletalMesh *pUVar2;
  UPhysicsAsset *pUVar3;
  
  AActor::PostInitializeComponents((AActor *)this);
  if (((char)this->_padding_ == '\x03') &&
     (pUVar1 = (this->SkeletalMeshComponent).field0_0x0.DebugPtr,
     pUVar1 != (USkeletalMeshComponent *)0x0)) {
    pUVar2 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar1);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (USkeletalMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->ReplicatedMesh).field0_0x0.DebugPtr = pUVar2;
  }
  pUVar1 = (this->SkeletalMeshComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (USkeletalMeshComponent *)0x0) {
    pUVar3 = USkinnedMeshComponent::GetPhysicsAsset((USkinnedMeshComponent *)pUVar1);
    (this->ReplicatedPhysAsset).field0_0x0.DebugPtr = pUVar3;
  }
  return;
}

// StaticRegisterNativesASkeletalMeshActor @ 1475feb90

void __cdecl ASkeletalMeshActor::StaticRegisterNativesASkeletalMeshActor(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_ASkeletalMeshActor_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// ValidateGeneratedRepEnums @ 1476037d0

void __thiscall
ASkeletalMeshActor::ValidateGeneratedRepEnums
          (ASkeletalMeshActor *this,TArray<FRepRecord,TSizedDefaultAllocator<32>_> *param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  int *piVar5;
  FName FVar6;
  
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar5 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&Name_ReplicatedMesh,L"ReplicatedMesh");
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar5 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FName::FName(&Name_ReplicatedPhysAsset,L"ReplicatedPhysAsset");
    _Init_thread_footer(&::_TSS1);
  }
  if ((*piVar5 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    ::FName::FName(&Name_ReplicatedMaterial0,L"ReplicatedMaterial0");
    _Init_thread_footer(&::_TSS2);
  }
  if ((*piVar5 < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    ::FName::FName(&Name_ReplicatedMaterial1,L"ReplicatedMaterial1");
    _Init_thread_footer(&::_TSS3);
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
  FVar6.ComparisonIndex.Value = 0;
  FVar6.Number = 0;
  FVar4 = FVar6;
  if (bVar3) {
    FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
  }
  if (Name_ReplicatedMesh == FVar4) {
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
    FVar4 = FVar6;
    if (bVar3) {
      FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
    }
    if (Name_ReplicatedPhysAsset == FVar4) {
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
      FVar4 = FVar6;
      if (bVar3) {
        FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
      }
      if (Name_ReplicatedMaterial0 == FVar4) {
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
        if (bVar3) {
          FVar6 = *(FName *)((longlong)pvVar1 + 0x20);
        }
        if (Name_ReplicatedMaterial1 == FVar6) {
          return;
        }
      }
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("bIsValid",
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\SkeletalMeshActor.gen.cpp"
                     ,0x168,
                     L"UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASkeletalMeshActor"
                    );
  if (!bVar3) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// execOnRep_ReplicatedMaterial0 @ 147606ac0

void __cdecl
ASkeletalMeshActor::execOnRep_ReplicatedMaterial0(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147606ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x770))();
  return;
}

// execOnRep_ReplicatedMaterial1 @ 147606af0

void __cdecl
ASkeletalMeshActor::execOnRep_ReplicatedMaterial1(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147606b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x778))();
  return;
}

// execOnRep_ReplicatedMesh @ 147606b20

void __cdecl
ASkeletalMeshActor::execOnRep_ReplicatedMesh(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147606b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x760))();
  return;
}

// execOnRep_ReplicatedPhysAsset @ 147606b50

void __cdecl
ASkeletalMeshActor::execOnRep_ReplicatedPhysAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147606b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x768))();
  return;
}

