// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsControl
// Functions: 6

// StaticClass @ 14d9b4f90

UClass * __cdecl APhysicsControlActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APhysicsControlActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PhysicsControl",L"PhysicsControlActor",
               &Z_Registration_Info_UClass_APhysicsControlActor.InnerSingleton,
               StaticRegisterNativesAPhysicsControlActor,0x2d0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<APhysicsControlActor>,
               InternalVTableHelperCtorCaller<APhysicsControlActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APhysicsControlActor.InnerSingleton;
}

// APhysicsControlActor @ 14d9be0f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

APhysicsControlActor * __thiscall
APhysicsControlActor::APhysicsControlActor(APhysicsControlActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7APhysicsControlActor__6B_;
  (this->ControlComponent).field0_0x0.DebugPtr = (UPhysicsControlComponent *)0x0;
  (this->ControlInitializerComponent).field0_0x0.DebugPtr =
       (UPhysicsControlInitializerComponent *)0x0;
  return this;
}

// APhysicsControlActor @ 14d9be130

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

APhysicsControlActor * __thiscall
APhysicsControlActor::APhysicsControlActor(APhysicsControlActor *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FName FVar2;
  void *pvVar3;
  FName *pFVar4;
  UClass *pUVar5;
  UPhysicsControlComponent *pUVar6;
  UPhysicsControlInitializerComponent *pUVar7;
  ulonglong uVar8;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  uVar8 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7APhysicsControlActor__6B_;
  pvVar3 = ThreadLocalStoragePointer;
  (this->ControlComponent).field0_0x0.DebugPtr = (UPhysicsControlComponent *)0x0;
  (this->ControlInitializerComponent).field0_0x0.DebugPtr =
       (UPhysicsControlInitializerComponent *)0x0;
  if (*(int *)(*(longlong *)((longlong)pvVar3 + uVar8 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FGCObject::RegisterGCObject((FGCObject *)&::ConstructorStatics);
      ::ConstructorStatics.KBSJointTexture.Object.field0_0x0 =
           (TObjectPtr<UTexture2D>_u_0)(FObjectPtr)0x0;
      ::ConstructorStatics.KBSJointTexture._padding_ =
           (longlong)&___7__FObjectFinderOptional_VUTexture2D___ConstructorHelpers__6B_;
      ::ConstructorStatics.KBSJointTexture.LoadFlags = 0;
      ::ConstructorStatics.KBSJointTexture.ObjectToFind = L"/Engine/EditorResources/S_KBSJoint";
      ::FName::FName(&::ConstructorStatics.NAME_Physics,L"Physics");
      atexit(`APhysicsControlActor::APhysicsControlActor'::__l2::
             _dynamic_atexit_destructor_for__ConstructorStatics__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pFVar4 = ::FName::FName(&local_res8,L"MyControlComponent");
  FVar2 = *pFVar4;
  pUVar5 = UPhysicsControlComponent::StaticClass();
  pUVar6 = (UPhysicsControlComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar5,pUVar5,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 != (UPhysicsControlComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->ControlComponent).field0_0x0.DebugPtr = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 != (UPhysicsControlComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  this->_padding_ = (longlong)(this->ControlComponent).field0_0x0;
  pFVar4 = ::FName::FName(&local_res8,L"MyControlInitializerComponent");
  FVar2 = *pFVar4;
  pUVar5 = UPhysicsControlInitializerComponent::StaticClass();
  pUVar7 = (UPhysicsControlInitializerComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar5,pUVar5,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 != (UPhysicsControlInitializerComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (this->ControlInitializerComponent).field0_0x0.DebugPtr = pUVar7;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  AActor::SetHidden((AActor *)this,true);
  return this;
}

// ~APhysicsControlActor @ 14d9c0e50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall APhysicsControlActor::~APhysicsControlActor(APhysicsControlActor *this)

{
  this->_padding_ = (longlong)&___7APhysicsControlActor__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 14d9de870

UClass * __cdecl APhysicsControlActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APhysicsControlActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PhysicsControl",L"PhysicsControlActor",
               &Z_Registration_Info_UClass_APhysicsControlActor.InnerSingleton,
               StaticRegisterNativesAPhysicsControlActor,0x2d0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<APhysicsControlActor>,
               InternalVTableHelperCtorCaller<APhysicsControlActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APhysicsControlActor.InnerSingleton;
}

// StaticRegisterNativesAPhysicsControlActor @ 14d9edb70

void __cdecl APhysicsControlActor::StaticRegisterNativesAPhysicsControlActor(void)

{
  return;
}

