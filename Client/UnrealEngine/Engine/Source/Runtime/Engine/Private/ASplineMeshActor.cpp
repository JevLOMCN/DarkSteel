// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 1486fd360

UClass * __cdecl ASplineMeshActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ASplineMeshActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SplineMeshActor",
               &Z_Registration_Info_UClass_ASplineMeshActor.InnerSingleton,
               StaticRegisterNativesASplineMeshActor,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ASplineMeshActor>,
               InternalVTableHelperCtorCaller<ASplineMeshActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ASplineMeshActor.InnerSingleton;
}

// ASplineMeshActor @ 14870f900

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ASplineMeshActor * __thiscall
ASplineMeshActor::ASplineMeshActor(ASplineMeshActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ASplineMeshActor__6B_;
  (this->SplineMeshComponent).field0_0x0.DebugPtr = (USplineMeshComponent *)0x0;
  return this;
}

// ASplineMeshActor @ 14870f940

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ASplineMeshActor * __thiscall
ASplineMeshActor::ASplineMeshActor(ASplineMeshActor *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  USplineMeshComponent *pUVar5;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ASplineMeshActor__6B_;
  (this->SplineMeshComponent).field0_0x0.DebugPtr = (USplineMeshComponent *)0x0;
  AActor::SetCanBeDamaged((AActor *)this,false);
  pFVar3 = ::FName::FName(&local_res8,L"SplineMeshComponent0");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_USplineMeshComponent_NoRegister();
  pUVar5 = (USplineMeshComponent *)
           FObjectInitializer::CreateDefaultSubobject
                     (param_1,(UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (USplineMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->SplineMeshComponent).field0_0x0.DebugPtr = pUVar5;
  (**(code **)(pUVar5->_padding_ + 0x788))(pUVar5,UCollisionProfile::BlockAll_ProfileName,1);
  *(undefined1 *)((longlong)&((this->SplineMeshComponent).field0_0x0.DebugPtr)->_padding_ + 3) = 0;
  UPrimitiveComponent::SetGenerateOverlapEvents
            ((UPrimitiveComponent *)(this->SplineMeshComponent).field0_0x0.DebugPtr,false);
  ((this->SplineMeshComponent).field0_0x0.DebugPtr)->bAllowSplineEditingPerInstance = '\x01';
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 = (this->SplineMeshComponent).field0_0x0.DebugPtr,
     pUVar5 != (USplineMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  this->_padding_ = (longlong)(this->SplineMeshComponent).field0_0x0;
  return this;
}

// ~ASplineMeshActor @ 148714050

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ASplineMeshActor::~ASplineMeshActor(ASplineMeshActor *this)

{
  this->_padding_ = (longlong)&___7ASplineMeshActor__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetDetailedInfoInternal @ 14873ad90

FString * __thiscall
ASplineMeshActor::GetDetailedInfoInternal(ASplineMeshActor *this,FString *__return_storage_ptr__)

{
  USplineMeshComponent *pUVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  
  if ((this->SplineMeshComponent).field0_0x0.DebugPtr == (USplineMeshComponent *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SplineMeshComponent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SplineMeshActor.cpp"
                       ,0x24,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
  }
  pUVar1 = (this->SplineMeshComponent).field0_0x0.DebugPtr;
  (**(code **)(pUVar1->_padding_ + 0x48))(pUVar1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14873e460

UClass * __cdecl ASplineMeshActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ASplineMeshActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SplineMeshActor",
               &Z_Registration_Info_UClass_ASplineMeshActor.InnerSingleton,
               StaticRegisterNativesASplineMeshActor,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ASplineMeshActor>,
               InternalVTableHelperCtorCaller<ASplineMeshActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ASplineMeshActor.InnerSingleton;
}

// GetSplineMeshComponent @ 14873fb90

USplineMeshComponent * __thiscall ASplineMeshActor::GetSplineMeshComponent(ASplineMeshActor *this)

{
  return (this->SplineMeshComponent).field0_0x0.DebugPtr;
}

// SetMobility @ 14875b140

void __thiscall ASplineMeshActor::SetMobility(ASplineMeshActor *this,Type param_1)

{
  USplineMeshComponent *pUVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->SplineMeshComponent).field0_0x0.DebugPtr == (USplineMeshComponent *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SplineMeshComponent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SplineMeshActor.cpp"
                       ,0x2a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar1 = (this->SplineMeshComponent).field0_0x0.DebugPtr;
                    /* WARNING: Could not recover jumptable at 0x00014875b195. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pUVar1->_padding_ + 0x5f8))(pUVar1,param_1);
  return;
}

// StaticRegisterNativesASplineMeshActor @ 14875d090

void __cdecl ASplineMeshActor::StaticRegisterNativesASplineMeshActor(void)

{
  return;
}

