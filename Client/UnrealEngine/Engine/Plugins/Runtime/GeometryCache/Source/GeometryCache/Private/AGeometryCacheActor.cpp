// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 8

// StaticClass @ 14c9fe650

UClass * __cdecl AGeometryCacheActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AGeometryCacheActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCache",L"GeometryCacheActor",
               &Z_Registration_Info_UClass_AGeometryCacheActor.InnerSingleton,
               StaticRegisterNativesAGeometryCacheActor,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AGeometryCacheActor>,
               InternalVTableHelperCtorCaller<AGeometryCacheActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AGeometryCacheActor.InnerSingleton;
}

// AGeometryCacheActor @ 14ca054b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AGeometryCacheActor * __thiscall
AGeometryCacheActor::AGeometryCacheActor(AGeometryCacheActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AGeometryCacheActor__6B_;
  (this->GeometryCacheComponent).field0_0x0.DebugPtr = (UGeometryCacheComponent *)0x0;
  return this;
}

// AGeometryCacheActor @ 14ca054f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AGeometryCacheActor * __thiscall
AGeometryCacheActor::AGeometryCacheActor(AGeometryCacheActor *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UGeometryCacheComponent *pUVar4;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AGeometryCacheActor__6B_;
  (this->GeometryCacheComponent).field0_0x0.DebugPtr = (UGeometryCacheComponent *)0x0;
  pFVar2 = ::FName::FName(&local_res8,L"GeometryCacheComponent");
  FVar1 = *pFVar2;
  pUVar3 = UGeometryCacheComponent::StaticClass();
  pUVar4 = (UGeometryCacheComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UGeometryCacheComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->GeometryCacheComponent).field0_0x0.DebugPtr = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UGeometryCacheComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  this->_padding_ = (longlong)(this->GeometryCacheComponent).field0_0x0;
  return this;
}

// ~AGeometryCacheActor @ 14ca089b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AGeometryCacheActor::~AGeometryCacheActor(AGeometryCacheActor *this)

{
  this->_padding_ = (longlong)&___7AGeometryCacheActor__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetGeometryCacheComponent @ 14ca1c3d0

UGeometryCacheComponent * __thiscall
AGeometryCacheActor::GetGeometryCacheComponent(AGeometryCacheActor *this)

{
  return (this->GeometryCacheComponent).field0_0x0.DebugPtr;
}

// GetPrivateStaticClass @ 14ca1e740

UClass * __cdecl AGeometryCacheActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AGeometryCacheActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCache",L"GeometryCacheActor",
               &Z_Registration_Info_UClass_AGeometryCacheActor.InnerSingleton,
               StaticRegisterNativesAGeometryCacheActor,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AGeometryCacheActor>,
               InternalVTableHelperCtorCaller<AGeometryCacheActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AGeometryCacheActor.InnerSingleton;
}

// StaticRegisterNativesAGeometryCacheActor @ 14ca2b8e0

void __cdecl AGeometryCacheActor::StaticRegisterNativesAGeometryCacheActor(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_AGeometryCacheActor_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetGeometryCacheComponent @ 14ca317e0

void __cdecl
AGeometryCacheActor::execGetGeometryCacheComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x11].field_0x18;
  return;
}

