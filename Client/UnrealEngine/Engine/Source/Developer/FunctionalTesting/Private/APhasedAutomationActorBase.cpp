// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 8

// StaticClass @ 148c70030

UClass * __cdecl APhasedAutomationActorBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APhasedAutomationActorBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"PhasedAutomationActorBase",
               &Z_Registration_Info_UClass_APhasedAutomationActorBase.InnerSingleton,
               StaticRegisterNativesAPhasedAutomationActorBase,0x2c0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<APhasedAutomationActorBase>,
               InternalVTableHelperCtorCaller<APhasedAutomationActorBase>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APhasedAutomationActorBase.InnerSingleton;
}

// APhasedAutomationActorBase @ 148c7ea10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

APhasedAutomationActorBase * __thiscall
APhasedAutomationActorBase::APhasedAutomationActorBase
          (APhasedAutomationActorBase *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  *(undefined ***)this = &___7APhasedAutomationActorBase__6B_;
  return this;
}

// APhasedAutomationActorBase @ 148c7ea40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

APhasedAutomationActorBase * __thiscall
APhasedAutomationActorBase::APhasedAutomationActorBase
          (APhasedAutomationActorBase *this,FObjectInitializer *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  *(undefined ***)this = &___7APhasedAutomationActorBase__6B_;
  return this;
}

// ~APhasedAutomationActorBase @ 148c80b10

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
APhasedAutomationActorBase::~APhasedAutomationActorBase(APhasedAutomationActorBase *this)

{
  *(undefined ***)this = &___7APhasedAutomationActorBase__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 148c91500

UClass * __cdecl APhasedAutomationActorBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APhasedAutomationActorBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"PhasedAutomationActorBase",
               &Z_Registration_Info_UClass_APhasedAutomationActorBase.InnerSingleton,
               StaticRegisterNativesAPhasedAutomationActorBase,0x2c0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<APhasedAutomationActorBase>,
               InternalVTableHelperCtorCaller<APhasedAutomationActorBase>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APhasedAutomationActorBase.InnerSingleton;
}

// OnFunctionalTestingBegin @ 148c95760

void __thiscall
APhasedAutomationActorBase::OnFunctionalTestingBegin(APhasedAutomationActorBase *this)

{
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_APhasedAutomationActorBase_OnFunctionalTestingBegin);
                    /* WARNING: Could not recover jumptable at 0x000148c9578d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,0,*(code **)(*(longlong *)this + 0x260));
  return;
}

// OnFunctionalTestingComplete @ 148c957a0

void __thiscall
APhasedAutomationActorBase::OnFunctionalTestingComplete(APhasedAutomationActorBase *this)

{
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_APhasedAutomationActorBase_OnFunctionalTestingComplete);
                    /* WARNING: Could not recover jumptable at 0x000148c957cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,0,*(code **)(*(longlong *)this + 0x260));
  return;
}

// StaticRegisterNativesAPhasedAutomationActorBase @ 148c9d3e0

void __cdecl APhasedAutomationActorBase::StaticRegisterNativesAPhasedAutomationActorBase(void)

{
  return;
}

