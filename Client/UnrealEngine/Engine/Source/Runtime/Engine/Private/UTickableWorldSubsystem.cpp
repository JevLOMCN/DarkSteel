// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 14

// UTickableWorldSubsystem @ 14880a240

UTickableWorldSubsystem * __thiscall
UTickableWorldSubsystem::UTickableWorldSubsystem
          (UTickableWorldSubsystem *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfc;
  this->_padding_ = (longlong)&___7UWorldSubsystem__6B_;
  FTickableGameObject::FTickableGameObject((FTickableGameObject *)&this->_padding_,NewObject);
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  this->bInitialized = false;
  return this;
}

// UTickableWorldSubsystem @ 14880a2a0

UTickableWorldSubsystem * __thiscall
UTickableWorldSubsystem::UTickableWorldSubsystem(UTickableWorldSubsystem *this)

{
  UObject::UObject((UObject *)this);
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfc;
  this->_padding_ = (longlong)&___7UWorldSubsystem__6B_;
  FTickableGameObject::FTickableGameObject((FTickableGameObject *)&this->_padding_,Never);
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  this->bInitialized = false;
  return this;
}

// ~UTickableWorldSubsystem @ 14880d4d0

void __thiscall UTickableWorldSubsystem::~UTickableWorldSubsystem(UTickableWorldSubsystem *this)

{
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  FTickableGameObject::~FTickableGameObject((FTickableGameObject *)&this->_padding_);
  this->_padding_ = (longlong)&___7USubsystem__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BeginDestroy @ 148823720

void __thiscall UTickableWorldSubsystem::BeginDestroy(UTickableWorldSubsystem *this)

{
  UTickableWorldSubsystem *local_res8 [4];
  
  UObject::BeginDestroy((UObject *)this);
  if (this->bInitialized != false) {
    local_res8[0] = this;
    `UTickableWorldSubsystem::BeginDestroy'::__l2::<lambda_1>::operator()(local_res8);
  }
  return;
}

// Deinitialize @ 14882e450

void __thiscall UTickableWorldSubsystem::Deinitialize(UTickableWorldSubsystem *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bInitialized == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bInitialized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Subsystems\\WorldSubsystem.cpp"
                       ,0x93,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->bInitialized = false;
  FTickableGameObject::SetTickableTickType((FTickableGameObject *)&this->_padding_,Never);
  return;
}

// GetPrivateStaticClass @ 148840d80

UClass * __cdecl UTickableWorldSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTickableWorldSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TickableWorldSubsystem",
               &Z_Registration_Info_UClass_UTickableWorldSubsystem.InnerSingleton,
               StaticRegisterNativesUTickableWorldSubsystem,0x48,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UTickableWorldSubsystem>,
               InternalVTableHelperCtorCaller<UTickableWorldSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTickableWorldSubsystem.InnerSingleton;
}

// GetTickableGameObjectWorld @ 148843bd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall
UTickableWorldSubsystem::GetTickableGameObjectWorld(UTickableWorldSubsystem *this)

{
  int iVar1;
  UWorld *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UWorld *)this[-1]._padding_;
  if (pUVar2 != (UWorld *)0x0) {
    pUVar3 = Z_Construct_UClass_UWorld_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UWorld *)0x0;
}

// GetTickableTickType @ 148843c20

ETickableTickType __thiscall
UTickableWorldSubsystem::GetTickableTickType(UTickableWorldSubsystem *this)

{
  bool bVar1;
  ETickableTickType EVar2;
  
  bVar1 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)&this[-1]._padding_,
                     RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar1) {
    EVar2 = Never;
    if ((char)this->_padding_ != '\0') {
      EVar2 = Conditional;
    }
    return EVar2;
  }
  return Never;
}

// Initialize @ 148847290

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
UTickableWorldSubsystem::Initialize(UTickableWorldSubsystem *this,FSubsystemCollectionBase *param_1)

{
  int iVar1;
  UWorld *this_00;
  code *pcVar2;
  bool bVar3;
  ETickableTickType EVar4;
  UClass *pUVar5;
  UTickableWorldSubsystem *local_res8;
  UTickableWorldSubsystem *local_res18 [2];
  
  this_00 = (UWorld *)this->_padding_;
  if (this_00 != (UWorld *)0x0) {
    pUVar5 = Z_Construct_UClass_UWorld_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      if (((this->_padding_ & 1) == 0) && (this_00->bIsWorldInitialized != '\0')) {
        (**(code **)(this->_padding_ + 0x2c8))(this);
        if ((this->_padding_ & 1) == 0) {
          local_res8 = this;
          `UWorldSubsystem::EnsureHasCalledPostInitialize'::__l2::<lambda_1>::operator()
                    (&local_res8);
        }
      }
      if ((this->_padding_ & 2) == 0) {
        bVar3 = UWorld::HasBegunPlay(this_00);
        if (bVar3) {
          (**(code **)(this->_padding_ + 0x2d8))(this,this_00);
          if ((this->_padding_ & 2) == 0) {
            local_res18[0] = this;
            `UWorldSubsystem::EnsureHasCalledBeginPlay'::__l2::<lambda_1>::operator()(local_res18);
          }
        }
      }
    }
  }
  if (this->bInitialized != false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bInitialized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Subsystems\\WorldSubsystem.cpp"
                       ,0x89,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->bInitialized = true;
  EVar4 = (**(code **)(this->_padding_ + 8))(&this->_padding_);
  FTickableGameObject::SetTickableTickType((FTickableGameObject *)&this->_padding_,EVar4);
  return;
}

// IsAllowedToTick @ 148847ed0

bool __thiscall UTickableWorldSubsystem::IsAllowedToTick(UTickableWorldSubsystem *this)

{
  longlong *local_res8 [4];
  
  local_res8[0] = &this[-1]._padding_;
  if ((char)this->_padding_ == '\0') {
    `UTickableWorldSubsystem::IsAllowedToTick'::__l2::<lambda_1>::operator()(local_res8);
    return (bool)(char)this->_padding_;
  }
  return (bool)(char)this->_padding_;
}

// StaticRegisterNativesUTickableWorldSubsystem @ 14885ad00

void __cdecl UTickableWorldSubsystem::StaticRegisterNativesUTickableWorldSubsystem(void)

{
  return;
}

// Tick @ 14885b680

void __thiscall UTickableWorldSubsystem::Tick(UTickableWorldSubsystem *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((char)this->_padding_ == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Subsystems\\WorldSubsystem.cpp"
                       ,0x83,L"Ticking should have been disabled for an uninitialized subsystem!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// operator() @ 150531be0

bool __thiscall `UTickableWorldSubsystem::BeginDestroy'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6317575628862259042>);
  if (bVar2) {
    UObjectBaseUtility::GetFullName(*(UObjectBaseUtility **)this,&local_18,(UObject *)0x0,None);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6317575628862259042>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150531c4d;
    }
  }
  bVar2 = false;
LAB_150531c4d:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150531de0

bool __thiscall `UTickableWorldSubsystem::IsAllowedToTick'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6317575628862259076>);
  if (bVar2) {
    UObjectBaseUtility::GetFullName(*(UObjectBaseUtility **)this,&local_18,(UObject *)0x0,None);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6317575628862259076>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150531e4d;
    }
  }
  bVar2 = false;
LAB_150531e4d:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

