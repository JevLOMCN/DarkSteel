// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1488efac0

UClass * __cdecl AVectorFieldVolume::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AVectorFieldVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"VectorFieldVolume",
               &Z_Registration_Info_UClass_AVectorFieldVolume.InnerSingleton,
               StaticRegisterNativesAVectorFieldVolume,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AVectorFieldVolume>,
               InternalVTableHelperCtorCaller<AVectorFieldVolume>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AVectorFieldVolume.InnerSingleton;
}

// AVectorFieldVolume @ 1489054b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

AVectorFieldVolume * __thiscall
AVectorFieldVolume::AVectorFieldVolume(AVectorFieldVolume *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AVectorFieldVolume__6B_;
  (this->VectorFieldComponent).field0_0x0.DebugPtr = (UVectorFieldComponent *)0x0;
  return this;
}

// AVectorFieldVolume @ 1489054f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

AVectorFieldVolume * __thiscall
AVectorFieldVolume::AVectorFieldVolume(AVectorFieldVolume *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UVectorFieldComponent *pUVar4;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AVectorFieldVolume__6B_;
  (this->VectorFieldComponent).field0_0x0.DebugPtr = (UVectorFieldComponent *)0x0;
  pFVar2 = ::FName::FName(&local_res8,L"VectorFieldComponent0");
  FVar1 = *pFVar2;
  pUVar3 = Z_Construct_UClass_UVectorFieldComponent_NoRegister();
  pUVar4 = (UVectorFieldComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UVectorFieldComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->VectorFieldComponent).field0_0x0.DebugPtr = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UVectorFieldComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  this->_padding_ = (longlong)(this->VectorFieldComponent).field0_0x0;
  return this;
}

// ~AVectorFieldVolume @ 14890d380

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AVectorFieldVolume::~AVectorFieldVolume(AVectorFieldVolume *this)

{
  this->_padding_ = (longlong)&___7AVectorFieldVolume__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 14895aea0

UClass * __cdecl AVectorFieldVolume::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AVectorFieldVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"VectorFieldVolume",
               &Z_Registration_Info_UClass_AVectorFieldVolume.InnerSingleton,
               StaticRegisterNativesAVectorFieldVolume,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AVectorFieldVolume>,
               InternalVTableHelperCtorCaller<AVectorFieldVolume>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AVectorFieldVolume.InnerSingleton;
}

// StaticRegisterNativesAVectorFieldVolume @ 148982a40

void __cdecl AVectorFieldVolume::StaticRegisterNativesAVectorFieldVolume(void)

{
  return;
}

