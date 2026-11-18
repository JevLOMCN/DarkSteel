// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 14798e7e0

UClass * __cdecl AVolumetricCloud::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AVolumetricCloud.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"VolumetricCloud",
               &Z_Registration_Info_UClass_AVolumetricCloud.InnerSingleton,
               StaticRegisterNativesAVolumetricCloud,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AVolumetricCloud>,
               InternalVTableHelperCtorCaller<AVolumetricCloud>,local_res8,AInfo::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AVolumetricCloud.InnerSingleton;
}

// AVolumetricCloud @ 1479a3170

AVolumetricCloud * __thiscall
AVolumetricCloud::AVolumetricCloud(AVolumetricCloud *this,FVTableHelper *param_1)

{
  AInfo::AInfo((AInfo *)this,param_1);
  this->_padding_ = (longlong)&___7AVolumetricCloud__6B_;
  (this->VolumetricCloudComponent).field0_0x0.DebugPtr = (UVolumetricCloudComponent *)0x0;
  return this;
}

// AVolumetricCloud @ 1479a31b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AVolumetricCloud * __thiscall
AVolumetricCloud::AVolumetricCloud(AVolumetricCloud *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UVolumetricCloudComponent *pUVar5;
  FName local_res8;
  
  AInfo::AInfo((AInfo *)this,param_1);
  this->_padding_ = (longlong)&___7AVolumetricCloud__6B_;
  (this->VolumetricCloudComponent).field0_0x0.DebugPtr = (UVolumetricCloudComponent *)0x0;
  pFVar3 = ::FName::FName(&local_res8,L"VolumetricCloudComponent");
  FVar2 = *pFVar3;
  pUVar4 = UVolumetricCloudComponent::StaticClass();
  pUVar5 = (UVolumetricCloudComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UVolumetricCloudComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->VolumetricCloudComponent).field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UVolumetricCloudComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  this->_padding_ = (longlong)(this->VolumetricCloudComponent).field0_0x0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  AActor::SetHidden((AActor *)this,false);
  return this;
}

// ~AVolumetricCloud @ 1479a8d50

void __thiscall AVolumetricCloud::~AVolumetricCloud(AVolumetricCloud *this)

{
  this->_padding_ = (longlong)&___7AVolumetricCloud__6B_;
  AInfo::~AInfo((AInfo *)this);
  return;
}

// GetPrivateStaticClass @ 1479cd990

UClass * __cdecl AVolumetricCloud::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AVolumetricCloud.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"VolumetricCloud",
               &Z_Registration_Info_UClass_AVolumetricCloud.InnerSingleton,
               StaticRegisterNativesAVolumetricCloud,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AVolumetricCloud>,
               InternalVTableHelperCtorCaller<AVolumetricCloud>,local_res8,AInfo::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AVolumetricCloud.InnerSingleton;
}

// StaticRegisterNativesAVolumetricCloud @ 1479eddf0

void __cdecl AVolumetricCloud::StaticRegisterNativesAVolumetricCloud(void)

{
  return;
}

