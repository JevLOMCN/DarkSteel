// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_CS
// Functions: 16

// StaticClass @ 14a69cc10

UClass * __cdecl UWN_CS_Subsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_CS_Subsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_CS",L"WN_CS_Subsystem",
               &Z_Registration_Info_UClass_UWN_CS_Subsystem.InnerSingleton,
               StaticRegisterNativesUWN_CS_Subsystem,0x48,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UWN_CS_Subsystem>,
               InternalVTableHelperCtorCaller<UWN_CS_Subsystem>,local_res8,
               UTickableWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_CS_Subsystem.InnerSingleton;
}

// UWN_CS_Subsystem @ 14a6a2770

UWN_CS_Subsystem * __thiscall
UWN_CS_Subsystem::UWN_CS_Subsystem(UWN_CS_Subsystem *this,FVTableHelper *param_1)

{
  UTickableWorldSubsystem::UTickableWorldSubsystem((UTickableWorldSubsystem *)this,param_1);
  *(undefined ***)this = &_vftable__for__UWorldSubsystem__;
  *(undefined ***)&this->field_0x38 = &_vftable__for__FTickableGameObject__;
  return this;
}

// UWN_CS_Subsystem @ 14a6a27b0

UWN_CS_Subsystem * __thiscall UWN_CS_Subsystem::UWN_CS_Subsystem(UWN_CS_Subsystem *this)

{
  UTickableWorldSubsystem::UTickableWorldSubsystem((UTickableWorldSubsystem *)this);
  *(undefined ***)this = &_vftable__for__UWorldSubsystem__;
  *(undefined ***)&this->field_0x38 = &_vftable__for__FTickableGameObject__;
  return this;
}

// ~UWN_CS_Subsystem @ 14a6a2d30

void __thiscall UWN_CS_Subsystem::~UWN_CS_Subsystem(UWN_CS_Subsystem *this)

{
  *(undefined ***)this = &_vftable__for__UWorldSubsystem__;
  *(undefined ***)&this->field_0x38 = &_vftable__for__FTickableGameObject__;
  UTickableWorldSubsystem::~UTickableWorldSubsystem((UTickableWorldSubsystem *)this);
  return;
}

// BeginDestroy @ 14a6a3640

void __thiscall UWN_CS_Subsystem::BeginDestroy(UWN_CS_Subsystem *this)

{
  UWN_CS_Subsystem *apUStackX_8 [4];
  
  UObject::BeginDestroy((UObject *)this);
  if (this->field_0x40 != '\0') {
    apUStackX_8[0] = this;
    `UTickableWorldSubsystem::BeginDestroy'::__l2::<lambda_1>::operator()(apUStackX_8);
  }
  return;
}

// Deinitialize @ 14a6a6b00

void __thiscall UWN_CS_Subsystem::Deinitialize(UWN_CS_Subsystem *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->field_0x40 == '\0') {
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
  this->field_0x40 = 0;
  FTickableGameObject::SetTickableTickType((FTickableGameObject *)&this->field_0x38,Never);
  return;
}

// GetPrivateStaticClass @ 14a6a8df0

UClass * __cdecl UWN_CS_Subsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_CS_Subsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_CS",L"WN_CS_Subsystem",
               &Z_Registration_Info_UClass_UWN_CS_Subsystem.InnerSingleton,
               StaticRegisterNativesUWN_CS_Subsystem,0x48,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UWN_CS_Subsystem>,
               InternalVTableHelperCtorCaller<UWN_CS_Subsystem>,local_res8,
               UTickableWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_CS_Subsystem.InnerSingleton;
}

// GetStatId @ 14a6a8ef0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall UWN_CS_Subsystem::GetStatId(UWN_CS_Subsystem *this)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UWN_CS_Subsystem::GetStatId(void)const_::_2_::FStat_UWN_CS_Subsystem>
  FVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_UWN_CS_Subsystem ==
          (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UWN_CS_Subsystem::GetStatId(void)const_::_2_::FStat_UWN_CS_Subsystem>
           )0x0) {
        pFVar1 = ::FName::FName(&local_res10,"UWN_CS_Subsystem");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_UWN_CS_Subsystem,*pFVar1,
                   L"UWN_CS_Subsystem","STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",true,
                   true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar2 = StatPtr_UWN_CS_Subsystem;
  if (StatPtr_UWN_CS_Subsystem ==
      (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UWN_CS_Subsystem::GetStatId(void)const_::_2_::FStat_UWN_CS_Subsystem>
       )0x0) {
    pFVar1 = ::FName::FName(&local_res10,"UWN_CS_Subsystem");
    FVar2 = (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UWN_CS_Subsystem::GetStatId(void)const_::_2_::FStat_UWN_CS_Subsystem>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_UWN_CS_Subsystem,*pFVar1,
                         L"UWN_CS_Subsystem","STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",
                         true,true,ST_int64,true,false,MCR_Invalid);
  }
  in_RDX->Name = (TAtomic<FMinimalName>)FVar2;
  return (TStatId)in_RDX;
}

// GetTickableGameObjectWorld @ 14a6a9050

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UWN_CS_Subsystem::GetTickableGameObjectWorld(UWN_CS_Subsystem *this)

{
  UWorld *pUVar1;
  
  pUVar1 = UWorldSubsystem::GetWorld((UWorldSubsystem *)&this[-1].field_0x10);
  return pUVar1;
}

// Initialize @ 14a6a9150

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
UWN_CS_Subsystem::Initialize(UWN_CS_Subsystem *this,FSubsystemCollectionBase *param_1)

{
  UWorld *pUVar1;
  IAnimationBudgetAllocator *pIVar2;
  
  UTickableWorldSubsystem::Initialize((UTickableWorldSubsystem *)this,param_1);
  pUVar1 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  pIVar2 = IAnimationBudgetAllocator::Get(pUVar1);
  if (pIVar2 != (IAnimationBudgetAllocator *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014a6a9184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar2 + 0x58))(pIVar2,1,*(code **)((longlong)*pIVar2 + 0x58));
    return;
  }
  return;
}

// IsTickableInEditor @ 14a6a91d0

bool __thiscall UWN_CS_Subsystem::IsTickableInEditor(UWN_CS_Subsystem *this)

{
  return (bool)(~(byte)(*(uint *)&this[-1].field_0x18 >> 4) & 1);
}

// IsTickableWhenPaused @ 14a6a91f0

bool __thiscall UWN_CS_Subsystem::IsTickableWhenPaused(UWN_CS_Subsystem *this)

{
  return (bool)(~(byte)(*(uint *)&this[-1].field_0x18 >> 4) & 1);
}

// PostInitialize @ 14a6a9b00

void __thiscall UWN_CS_Subsystem::PostInitialize(UWN_CS_Subsystem *this)

{
  UWN_CS_Subsystem *apUStackX_8 [4];
  
  if ((this->field_0x30 & 1) != 0) {
    apUStackX_8[0] = this;
    `UWorldSubsystem::PostInitialize'::__l2::<lambda_1>::operator()(apUStackX_8);
    this->field_0x30 = this->field_0x30 | 1;
    return;
  }
  this->field_0x30 = this->field_0x30 | 1;
  return;
}

// ShouldCreateSubsystem @ 14a6aad10

bool __thiscall UWN_CS_Subsystem::ShouldCreateSubsystem(UWN_CS_Subsystem *this,UObject *param_1)

{
  return true;
}

// StaticRegisterNativesUWN_CS_Subsystem @ 14a6aad70

void __cdecl UWN_CS_Subsystem::StaticRegisterNativesUWN_CS_Subsystem(void)

{
  return;
}

// Tick @ 14a6aad80

void __thiscall UWN_CS_Subsystem::Tick(UWN_CS_Subsystem *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->field_0x8 == '\0') {
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

