// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 13

// StaticClass @ 146e7a2b0

UClass * __cdecl UAISubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISubsystem",
               &Z_Registration_Info_UClass_UAISubsystem.InnerSingleton,
               StaticRegisterNativesUAISubsystem,0x38,8,CLASS_Intrinsic|CLASS_DefaultConfig,
               CASTCLASS_None,L"Engine",InternalConstructor<UAISubsystem>,
               InternalVTableHelperCtorCaller<UAISubsystem>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISubsystem.InnerSingleton;
}

// UAISubsystem @ 146e80bd0

UAISubsystem * __thiscall UAISubsystem::UAISubsystem(UAISubsystem *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  FTickableGameObject::FTickableGameObject((FTickableGameObject *)&this->_padding_,NewObject);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  (this->AISystem).field0_0x0.DebugPtr = (UAISystem *)0x0;
  return this;
}

// UAISubsystem @ 146e80c20

/* WARNING: Enum "Type": Some values do not have unique names */

UAISubsystem * __thiscall UAISubsystem::UAISubsystem(UAISubsystem *this,FObjectInitializer *param_1)

{
  int iVar1;
  UClass *pUVar2;
  longlong lVar3;
  UAISystem *pUVar4;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  UObject::UObject((UObject *)this,param_1);
  FTickableGameObject::FTickableGameObject((FTickableGameObject *)&this->_padding_,NewObject);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  (this->AISystem).field0_0x0.DebugPtr = (UAISystem *)0x0;
  if (((uint)this->_padding_ >> 4 & 1) != 0) {
    return this;
  }
  pUVar4 = (UAISystem *)this->_padding_;
  if (pUVar4 == (UAISystem *)0x0) {
LAB_146e80c94:
    pUVar4 = (UAISystem *)0x0;
  }
  else {
    pUVar2 = UAISystem::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar2->_padding_)) goto LAB_146e80c94;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar4 == (UAISystem *)0x0)) {
    (this->AISystem).field0_0x0.DebugPtr = pUVar4;
    if (pUVar4 != (UAISystem *)0x0) goto LAB_146e80d0a;
    lVar3 = (**(code **)(*(longlong *)this->_padding_ + 0x180))();
    if ((lVar3 == 0) || (pUVar4 = *(UAISystem **)(lVar3 + 0x1b8), pUVar4 == (UAISystem *)0x0)) {
LAB_146e80cee:
      pUVar4 = (UAISystem *)0x0;
    }
    else {
      pUVar2 = UAISystem::StaticClass();
      iVar1 = (int)pUVar2->_padding_;
      if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar2->_padding_)) goto LAB_146e80cee;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UAISystem *)0x0))
    goto LAB_146e80cfe;
  }
  else {
LAB_146e80cfe:
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->AISystem).field0_0x0.DebugPtr = pUVar4;
LAB_146e80d0a:
  if ((1 < (byte)LogAISub._0_1_) && (pUVar4 == (UAISystem *)0x0)) {
    if (this->_padding_ == 0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res8 = *(FName *)(this->_padding_ + 0x18);
      ::FName::ToString(&local_res8,&local_28);
    }
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAISub);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((((this->AISystem).field0_0x0.DebugPtr == (UAISystem *)0x0) &&
      ((UObjectBaseUtility *)this->_padding_ != (UObjectBaseUtility *)0x0)) &&
     (PRIVATE_GIsRunningCommandlet != false)) {
    UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this->_padding_);
  }
  return this;
}

// ~UAISubsystem @ 146e81d90

void __thiscall UAISubsystem::~UAISubsystem(UAISubsystem *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  FTickableGameObject::~FTickableGameObject((FTickableGameObject *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// BeginDestroy @ 146e85640

void __thiscall UAISubsystem::BeginDestroy(UAISubsystem *this)

{
  UObject::BeginDestroy((UObject *)this);
  FTickableGameObject::SetTickableTickType((FTickableGameObject *)&this->_padding_,Never);
  return;
}

// GetPrivateStaticClass @ 146e8f260

UClass * __cdecl UAISubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISubsystem",
               &Z_Registration_Info_UClass_UAISubsystem.InnerSingleton,
               StaticRegisterNativesUAISubsystem,0x38,8,CLASS_Intrinsic|CLASS_DefaultConfig,
               CASTCLASS_None,L"Engine",InternalConstructor<UAISubsystem>,
               InternalVTableHelperCtorCaller<UAISubsystem>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISubsystem.InnerSingleton;
}

// GetStatId @ 146e8fc00

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall UAISubsystem::GetStatId(UAISubsystem *this)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UAISubsystem::GetStatId(void)const_::_2_::FStat_UAISubsystem>
  FVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_UAISubsystem ==
          (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UAISubsystem::GetStatId(void)const_::_2_::FStat_UAISubsystem>
           )0x0) {
        pFVar1 = ::FName::FName(&local_res10,"UAISubsystem");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_UAISubsystem,*pFVar1,L"UAISubsystem",
                   "STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",true,true,ST_int64,true,
                   false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar2 = StatPtr_UAISubsystem;
  if (StatPtr_UAISubsystem ==
      (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UAISubsystem::GetStatId(void)const_::_2_::FStat_UAISubsystem>
       )0x0) {
    pFVar1 = ::FName::FName(&local_res10,"UAISubsystem");
    FVar2 = (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UAISubsystem::GetStatId(void)const_::_2_::FStat_UAISubsystem>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_UAISubsystem,*pFVar1,L"UAISubsystem",
                         "STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",true,true,ST_int64,
                         true,false,MCR_Invalid);
  }
  in_RDX->Name = (TAtomic<FMinimalName>)FVar2;
  return (TStatId)in_RDX;
}

// GetTickableGameObjectWorld @ 146e90070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UAISubsystem::GetTickableGameObjectWorld(UAISubsystem *this)

{
  int iVar1;
  UClass *pUVar2;
  UWorld *pUVar3;
  
  if (this->_padding_ == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146e900c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar3 = (UWorld *)(**(code **)((this[-1].AISystem.field0_0x0.DebugPtr)->_padding_ + 0x180))();
    return pUVar3;
  }
  pUVar3 = *(UWorld **)(this->_padding_ + 0x20);
  if (pUVar3 != (UWorld *)0x0) {
    pUVar2 = Z_Construct_UClass_UWorld_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return pUVar3;
    }
  }
  return (UWorld *)0x0;
}

// GetTickableTickType @ 146e900d0

ETickableTickType __thiscall UAISubsystem::GetTickableTickType(UAISubsystem *this)

{
  ETickableTickType EVar1;
  
  if (((this[-1]._padding_ & 0x10) != 0) || (EVar1 = Always, this->_padding_ == 0)) {
    EVar1 = Never;
  }
  return EVar1;
}

// GetWorld @ 146e90160

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UAISubsystem::GetWorld(UAISubsystem *this)

{
  int iVar1;
  UAISystem *pUVar2;
  UClass *pUVar3;
  UWorld *pUVar4;
  
  pUVar2 = (this->AISystem).field0_0x0.DebugPtr;
  if (pUVar2 == (UAISystem *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146e901b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar4 = (UWorld *)(**(code **)(*(longlong *)this->_padding_ + 0x180))();
    return pUVar4;
  }
  pUVar4 = (UWorld *)pUVar2->_padding_;
  if (pUVar4 != (UWorld *)0x0) {
    pUVar3 = Z_Construct_UClass_UWorld_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar4;
    }
  }
  return (UWorld *)0x0;
}

// StaticRegisterNativesUAISubsystem @ 146ea0190

void __cdecl UAISubsystem::StaticRegisterNativesUAISubsystem(void)

{
  return;
}

// Tick @ 146ea1a20

void __thiscall UAISubsystem::Tick(UAISubsystem *this,float param_1)

{
  return;
}

// GetWorldFast @ 146f5adb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UAISubsystem::GetWorldFast(UAISubsystem *this)

{
  int iVar1;
  UAISystem *pUVar2;
  UClass *pUVar3;
  UWorld *pUVar4;
  
  pUVar2 = (this->AISystem).field0_0x0.DebugPtr;
  if (pUVar2 == (UAISystem *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146f5ae02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar4 = (UWorld *)(**(code **)(*(longlong *)this->_padding_ + 0x180))();
    return pUVar4;
  }
  pUVar4 = (UWorld *)pUVar2->_padding_;
  if (pUVar4 != (UWorld *)0x0) {
    pUVar3 = Z_Construct_UClass_UWorld_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar4;
    }
  }
  return (UWorld *)0x0;
}

