// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 14822c890

UClass * __cdecl UChaosBlueprintLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ChaosBlueprintLibrary",
               &Z_Registration_Info_UClass_UChaosBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUChaosBlueprintLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UChaosBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UChaosBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosBlueprintLibrary.InnerSingleton;
}

// UChaosBlueprintLibrary @ 148251190

UChaosBlueprintLibrary * __thiscall
UChaosBlueprintLibrary::UChaosBlueprintLibrary(UChaosBlueprintLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UChaosBlueprintLibrary__6B_;
  return this;
}

// UChaosBlueprintLibrary @ 1482511c0

UChaosBlueprintLibrary * __thiscall
UChaosBlueprintLibrary::UChaosBlueprintLibrary
          (UChaosBlueprintLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UChaosBlueprintLibrary__6B_;
  return this;
}

// ~UChaosBlueprintLibrary @ 1482535a0

void __thiscall UChaosBlueprintLibrary::~UChaosBlueprintLibrary(UChaosBlueprintLibrary *this)

{
  *(undefined ***)this = &___7UChaosBlueprintLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetEventRelayFromContext @ 1482877d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UChaosEventRelay * __cdecl UChaosBlueprintLibrary::GetEventRelayFromContext(UObject *param_1)

{
  UWorld *this;
  UChaosEventRelay *pUVar1;
  
  if ((GEngine != (UEngine *)0x0) && (param_1 != (UObject *)0x0)) {
    this = UEngine::GetWorldFromContextObject(GEngine,param_1,ReturnNull);
    if (this != (UWorld *)0x0) {
      pUVar1 = UWorld::GetChaosEventRelay(this);
      return pUVar1;
    }
  }
  return (UChaosEventRelay *)0x0;
}

// GetPrivateStaticClass @ 14828beb0

UClass * __cdecl UChaosBlueprintLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ChaosBlueprintLibrary",
               &Z_Registration_Info_UClass_UChaosBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUChaosBlueprintLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UChaosBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UChaosBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosBlueprintLibrary.InnerSingleton;
}

// StaticRegisterNativesUChaosBlueprintLibrary @ 1482b1cd0

void __cdecl UChaosBlueprintLibrary::StaticRegisterNativesUChaosBlueprintLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UChaosBlueprintLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetEventRelayFromContext @ 1482c2390

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UChaosBlueprintLibrary::execGetEventRelayFromContext(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UWorld *this;
  UChaosEventRelay *pUVar2;
  UObject *local_res10 [3];
  
  local_res10[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((GEngine != (UEngine *)0x0) && (local_res10[0] != (UObject *)0x0)) {
    this = UEngine::GetWorldFromContextObject(GEngine,local_res10[0],ReturnNull);
    if (this != (UWorld *)0x0) {
      pUVar2 = UWorld::GetChaosEventRelay(this);
      *(UChaosEventRelay **)param_3 = pUVar2;
      return;
    }
  }
  *(undefined8 *)param_3 = 0;
  return;
}

