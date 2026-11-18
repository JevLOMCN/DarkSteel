// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 6

// StaticClass @ 149f1ea30

UClass * __cdecl APCGVolume::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APCGVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGVolume",&Z_Registration_Info_UClass_APCGVolume.InnerSingleton,
               StaticRegisterNativesAPCGVolume,0x300,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,
               L"Engine",InternalConstructor<APCGVolume>,InternalVTableHelperCtorCaller<APCGVolume>,
               local_res8,AVolume::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APCGVolume.InnerSingleton;
}

// APCGVolume @ 149f30db0

APCGVolume * __thiscall APCGVolume::APCGVolume(APCGVolume *this,FVTableHelper *param_1)

{
  AVolume::AVolume((AVolume *)this,param_1);
  this->_padding_ = (longlong)&___7APCGVolume__6B_;
  (this->PCGComponent).field0_0x0.DebugPtr = (UPCGComponent *)0x0;
  return this;
}

// APCGVolume @ 149f30df0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

APCGVolume * __thiscall APCGVolume::APCGVolume(APCGVolume *this,FObjectInitializer *param_1)

{
  FName FVar1;
  UPrimitiveComponent *this_00;
  bool bVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UPCGComponent *pUVar5;
  FName local_res8;
  
  AVolume::AVolume((AVolume *)this,param_1);
  this->_padding_ = (longlong)&___7APCGVolume__6B_;
  (this->PCGComponent).field0_0x0.DebugPtr = (UPCGComponent *)0x0;
  pFVar3 = ::FName::FName(&local_res8,L"PCG Component");
  FVar1 = *pFVar3;
  pUVar4 = Z_Construct_UClass_UPCGComponent_NoRegister();
  pUVar5 = (UPCGComponent *)
           FObjectInitializer::CreateDefaultSubobject
                     (param_1,(UObject *)this,FVar1,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UPCGComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->PCGComponent).field0_0x0.DebugPtr = pUVar5;
  bVar2 = PCGHelpers::IsNewObjectAndNotDefault((UObject *)this,true);
  if ((bVar2) &&
     (this_00 = (UPrimitiveComponent *)this->_padding_, this_00 != (UPrimitiveComponent *)0x0)) {
    (**(code **)(*(longlong *)this_00 + 0x790))(this_00);
    (**(code **)(*(longlong *)this_00 + 0x9f8))(this_00);
    UPrimitiveComponent::SetGenerateOverlapEvents(this_00,false);
  }
  return this;
}

// ~APCGVolume @ 149f34220

void __thiscall APCGVolume::~APCGVolume(APCGVolume *this)

{
  this->_padding_ = (longlong)&___7APCGVolume__6B_;
  AVolume::~AVolume((AVolume *)this);
  return;
}

// GetPrivateStaticClass @ 149f4cb70

UClass * __cdecl APCGVolume::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APCGVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGVolume",&Z_Registration_Info_UClass_APCGVolume.InnerSingleton,
               StaticRegisterNativesAPCGVolume,0x300,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,
               L"Engine",InternalConstructor<APCGVolume>,InternalVTableHelperCtorCaller<APCGVolume>,
               local_res8,AVolume::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APCGVolume.InnerSingleton;
}

// StaticRegisterNativesAPCGVolume @ 149f63870

void __cdecl APCGVolume::StaticRegisterNativesAPCGVolume(void)

{
  return;
}

