// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 10

// StaticClass @ 1471b4960

UClass * __cdecl UMassEntitySubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassEntitySubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntity",L"MassEntitySubsystem",
               &Z_Registration_Info_UClass_UMassEntitySubsystem.InnerSingleton,
               StaticRegisterNativesUMassEntitySubsystem,0x50,8,CLASS_Intrinsic|CLASS_DefaultConfig,
               CASTCLASS_None,L"Mass",InternalConstructor<UMassEntitySubsystem>,
               InternalVTableHelperCtorCaller<UMassEntitySubsystem>,local_res8,
               UMassSubsystemBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassEntitySubsystem.InnerSingleton;
}

// UMassEntitySubsystem @ 1471dd1c0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

UMassEntitySubsystem * __thiscall
UMassEntitySubsystem::UMassEntitySubsystem(UMassEntitySubsystem *this,FVTableHelper *param_1)

{
  UWorldSubsystem::UWorldSubsystem((UWorldSubsystem *)this,param_1);
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xf8;
  this->_padding_ = (longlong)&___7UMassEntitySubsystem__6B_;
  (this->EntityManager).Object = (FMassEntityManager *)0x0;
  (this->EntityManager).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UMassEntitySubsystem @ 1471dd200

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

UMassEntitySubsystem * __thiscall
UMassEntitySubsystem::UMassEntitySubsystem(UMassEntitySubsystem *this)

{
  code *pcVar1;
  bool bVar2;
  FMassEntityManager *this_00;
  UMassEntitySubsystem *pUVar3;
  TRawPtrProxy<FMassEntityManager> local_res8;
  
  UWorldSubsystem::UWorldSubsystem((UWorldSubsystem *)this);
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xf8;
  this->_padding_ = (longlong)&___7UMassEntitySubsystem__6B_;
  this_00 = ::operator_new(0x7d8);
  if (this_00 == (FMassEntityManager *)0x0) {
    local_res8.Object = (FMassEntityManager *)0x0;
  }
  else {
    local_res8.Object = FMassEntityManager::FMassEntityManager(this_00,(UObject *)this);
    if ((((local_res8.Object != (FMassEntityManager *)0x0) && ((local_res8.Object)->_padding_ != 0))
        && ((local_res8.Object)->_padding_ != 0)) &&
       (0 < *(int *)((local_res8.Object)->_padding_ + 8))) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UMassEntitySubsystem *)(*pcVar1)();
        return pUVar3;
      }
    }
  }
  TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1><FMassEntityManager>
            (&this->EntityManager,&local_res8);
  return this;
}

// ~UMassEntitySubsystem @ 1471e0df0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall UMassEntitySubsystem::~UMassEntitySubsystem(UMassEntitySubsystem *this)

{
  this->_padding_ = (longlong)&___7UMassEntitySubsystem__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->EntityManager).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7UMassSubsystemBase__6B_;
  UWorldSubsystem::~UWorldSubsystem((UWorldSubsystem *)this);
  return;
}

// Deinitialize @ 147210d40

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall UMassEntitySubsystem::Deinitialize(UMassEntitySubsystem *this)

{
  TSharedPtr<FMassEntityManager,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  pTVar1 = &this->EntityManager;
  if ((this->EntityManager).Object == (FMassEntityManager *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FMassEntityManager::Deinitialize(pTVar1->Object);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TSharedPtr<FMassEntityManager,1> *)&local_18) {
    pTVar1->Object = (FMassEntityManager *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->EntityManager).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  *(undefined1 *)&this->_padding_ = 0;
  return;
}

// GetPrivateStaticClass @ 147224850

UClass * __cdecl UMassEntitySubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassEntitySubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntity",L"MassEntitySubsystem",
               &Z_Registration_Info_UClass_UMassEntitySubsystem.InnerSingleton,
               StaticRegisterNativesUMassEntitySubsystem,0x50,8,CLASS_Intrinsic|CLASS_DefaultConfig,
               CASTCLASS_None,L"Mass",InternalConstructor<UMassEntitySubsystem>,
               InternalVTableHelperCtorCaller<UMassEntitySubsystem>,local_res8,
               UMassSubsystemBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassEntitySubsystem.InnerSingleton;
}

// GetResourceSizeEx @ 147226c00

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UMassEntitySubsystem::GetResourceSizeEx(UMassEntitySubsystem *this,FResourceSizeEx *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  UObject::GetResourceSizeEx((UObject *)this,param_1);
  if ((this->EntityManager).Object == (FMassEntityManager *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FMassEntityManager::GetResourceSizeEx((this->EntityManager).Object,param_1);
  return;
}

// Initialize @ 14722f380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UMassEntitySubsystem::Initialize(UMassEntitySubsystem *this,FSubsystemCollectionBase *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  TSharedRef<FMassEntityManager,1> *pTVar6;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  FSubsystemTypeTraits local_57;
  FSubsystemTypeTraits local_55 [2];
  undefined1 local_50 [16];
  TSharedRef<FMassEntityManager,1> local_40;
  TVariant<FMassEntityManager_InitParams_SingleThreaded,FMassEntityManager_InitParams_Concurrent>
  local_30;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_78;
  UWorldSubsystem::Initialize((UWorldSubsystem *)this,param_1);
  if ((this->_padding_ & 1) != 0) {
    local_58 = 0;
    `UMassSubsystemBase::Initialize'::__l2::<lambda_1>::operator()(&local_58);
  }
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 1;
  lVar2 = this->_padding_;
  pUVar5 = StaticClass();
  bVar4 = true;
  if (pUVar5 != (UClass *)0x0) {
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      bVar4 = false;
    }
    if (bVar4) goto LAB_14722f42b;
  }
  local_50._8_8_ = this->_padding_;
  local_57.bGameThreadOnly = true;
  local_57.bThreadSafeWrite = false;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UObject *)local_50._8_8_ != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_50._8_8_);
  }
  UE::Mass::Subsystems::RegisterSubsystemType
            (param_1,(TSubclassOf<USubsystem>)((longlong)local_50 + 8),&local_57);
LAB_14722f42b:
  local_30.TypeIndex = UE::Mass::Private::bEnableMassConcurrentReserveRuntime != false;
  if ((bool)local_30.TypeIndex) {
    local_50._4_4_ = UE::Mass::Private::ConcurrentReserveMaxEntitiesPerPage;
    local_50._0_4_ = UE::Mass::Private::ConcurrentReserveMaxEntityCount;
    local_30._0_8_ = local_50._0_8_;
  }
  if (((this->EntityManager).Object == (FMassEntityManager *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FMassEntityManager::Initialize((this->EntityManager).Object,&local_30);
  UE::Mass::Private::HandleLateCreation
            ((UWorldSubsystem *)this,*(FInitializationState *)&this->_padding_);
  local_50._0_8_ = this->_padding_;
  local_55[0].bGameThreadOnly = true;
  local_55[0].bThreadSafeWrite = false;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UObject *)local_50._0_8_ != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_50._0_8_);
  }
  pTVar6 = TSharedPtr<FMassEntityManager,1>::ToSharedRef(&this->EntityManager,&local_40);
  UE::Mass::Subsystems::RegisterSubsystemType(pTVar6,(TSubclassOf<USubsystem>)local_50,local_55);
  return;
}

// PostInitialize @ 14723d240

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall UMassEntitySubsystem::PostInitialize(UMassEntitySubsystem *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 local_res8 [32];
  
  UWorldSubsystem::PostInitialize((UWorldSubsystem *)this);
  if ((this->_padding_ & 2) != 0) {
    local_res8[0] = 0;
    `UMassSubsystemBase::PostInitialize'::__l2::<lambda_1>::operator()(local_res8);
  }
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 2;
  if ((this->EntityManager).Object == (FMassEntityManager *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FMassEntityManager::PostInitialize((this->EntityManager).Object);
  return;
}

// StaticRegisterNativesUMassEntitySubsystem @ 147250710

void __cdecl UMassEntitySubsystem::StaticRegisterNativesUMassEntitySubsystem(void)

{
  return;
}

