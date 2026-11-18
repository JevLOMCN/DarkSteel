// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 1482cda10

UClass * __cdecl APhysicsConstraintActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APhysicsConstraintActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicsConstraintActor",
               &Z_Registration_Info_UClass_APhysicsConstraintActor.InnerSingleton,
               StaticRegisterNativesAPhysicsConstraintActor,0x2e0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<APhysicsConstraintActor>,
               InternalVTableHelperCtorCaller<APhysicsConstraintActor>,local_res8,
               ARigidBodyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APhysicsConstraintActor.InnerSingleton;
}

// APhysicsConstraintActor @ 1482d8130

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

APhysicsConstraintActor * __thiscall
APhysicsConstraintActor::APhysicsConstraintActor
          (APhysicsConstraintActor *this,FVTableHelper *param_1)

{
  ARigidBodyBase::ARigidBodyBase((ARigidBodyBase *)this,param_1);
  this->_padding_ = (longlong)&___7APhysicsConstraintActor__6B_;
  (this->ConstraintComp).field0_0x0.DebugPtr = (UPhysicsConstraintComponent *)0x0;
  (this->ConstraintActor1_DEPRECATED).field0_0x0.DebugPtr = (AActor *)0x0;
  (this->ConstraintActor2_DEPRECATED).field0_0x0.DebugPtr = (AActor *)0x0;
  return this;
}

// APhysicsConstraintActor @ 1482d8170

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

APhysicsConstraintActor * __thiscall
APhysicsConstraintActor::APhysicsConstraintActor
          (APhysicsConstraintActor *this,FObjectInitializer *param_1)

{
  FName FVar1;
  void *pvVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UPhysicsConstraintComponent *pUVar5;
  ulonglong uVar6;
  FName local_res8;
  
  ARigidBodyBase::ARigidBodyBase((ARigidBodyBase *)this,param_1);
  uVar6 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7APhysicsConstraintActor__6B_;
  pvVar2 = ThreadLocalStoragePointer;
  (this->ConstraintComp).field0_0x0.DebugPtr = (UPhysicsConstraintComponent *)0x0;
  (this->ConstraintActor1_DEPRECATED).field0_0x0.DebugPtr = (AActor *)0x0;
  (this->ConstraintActor2_DEPRECATED).field0_0x0.DebugPtr = (AActor *)0x0;
  if (*(int *)(*(longlong *)((longlong)pvVar2 + uVar6 * 8) + 0x9d4c) < ::_TSS0) {
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
      atexit(`APhysicsConstraintActor::APhysicsConstraintActor'::__l2::
             _dynamic_atexit_destructor_for__ConstructorStatics__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pFVar3 = ::FName::FName(&local_res8,L"MyConstraintComp");
  FVar1 = *pFVar3;
  pUVar4 = UPhysicsConstraintComponent::StaticClass();
  pUVar5 = (UPhysicsConstraintComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UPhysicsConstraintComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->ConstraintComp).field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UPhysicsConstraintComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  this->_padding_ = (longlong)(this->ConstraintComp).field0_0x0;
  AActor::SetHidden((AActor *)this,true);
  return this;
}

// ~APhysicsConstraintActor @ 1482dd8c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall APhysicsConstraintActor::~APhysicsConstraintActor(APhysicsConstraintActor *this)

{
  this->_padding_ = (longlong)&___7APhysicsConstraintActor__6B_;
  ARigidBodyBase::~ARigidBodyBase((ARigidBodyBase *)this);
  return;
}

// GetPrivateStaticClass @ 14830bd80

UClass * __cdecl APhysicsConstraintActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APhysicsConstraintActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicsConstraintActor",
               &Z_Registration_Info_UClass_APhysicsConstraintActor.InnerSingleton,
               StaticRegisterNativesAPhysicsConstraintActor,0x2e0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<APhysicsConstraintActor>,
               InternalVTableHelperCtorCaller<APhysicsConstraintActor>,local_res8,
               ARigidBodyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APhysicsConstraintActor.InnerSingleton;
}

// PostLoad @ 148317f40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall APhysicsConstraintActor::PostLoad(APhysicsConstraintActor *this)

{
  undefined1 uVar1;
  UPhysicsConstraintComponent *pUVar2;
  AActor *pAVar3;
  FPackageFileVersion FVar4;
  
  AActor::PostLoad((AActor *)this);
  FVar4 = UObjectBaseUtility::GetLinkerUEVersion((UObjectBaseUtility *)this);
  if ((*(int *)FVar4 < 0xf6) &&
     (pUVar2 = (this->ConstraintComp).field0_0x0.DebugPtr,
     pUVar2 != (UPhysicsConstraintComponent *)0x0)) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pAVar3 = (this->ConstraintActor1_DEPRECATED).field0_0x0.DebugPtr, pAVar3 != (AActor *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pAVar3);
    }
    (pUVar2->ConstraintActor1).field0_0x0 = (this->ConstraintActor1_DEPRECATED).field0_0x0;
    pUVar2 = (this->ConstraintComp).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pAVar3 = (this->ConstraintActor2_DEPRECATED).field0_0x0.DebugPtr, pAVar3 != (AActor *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pAVar3);
    }
    (pUVar2->ConstraintActor2).field0_0x0 = (this->ConstraintActor2_DEPRECATED).field0_0x0;
    pUVar2 = (this->ConstraintComp).field0_0x0.DebugPtr;
    uVar1 = (pUVar2->ConstraintInstance).ProfileInstance.field_0x80;
    (pUVar2->ConstraintInstance).ProfileInstance.field_0x80 =
         ((pUVar2->ConstraintInstance).ProfileInstance.bDisableCollision ^
         this->bDisableCollision_DEPRECATED) & 1 ^ uVar1;
  }
  return;
}

// StaticRegisterNativesAPhysicsConstraintActor @ 1483239e0

void __cdecl APhysicsConstraintActor::StaticRegisterNativesAPhysicsConstraintActor(void)

{
  return;
}

