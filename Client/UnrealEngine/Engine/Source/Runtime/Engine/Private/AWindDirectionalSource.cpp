// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 148998770

UClass * __cdecl AWindDirectionalSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWindDirectionalSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WindDirectionalSource",
               &Z_Registration_Info_UClass_AWindDirectionalSource.InnerSingleton,
               StaticRegisterNativesAWindDirectionalSource,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AWindDirectionalSource>,
               InternalVTableHelperCtorCaller<AWindDirectionalSource>,local_res8,AInfo::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWindDirectionalSource.InnerSingleton;
}

// AWindDirectionalSource @ 1489b3320

AWindDirectionalSource * __thiscall
AWindDirectionalSource::AWindDirectionalSource(AWindDirectionalSource *this,FVTableHelper *param_1)

{
  AInfo::AInfo((AInfo *)this,param_1);
  this->_padding_ = (longlong)&___7AWindDirectionalSource__6B_;
  (this->Component).field0_0x0.DebugPtr = (UWindDirectionalSourceComponent *)0x0;
  return this;
}

// AWindDirectionalSource @ 1489b3360

AWindDirectionalSource * __thiscall
AWindDirectionalSource::AWindDirectionalSource
          (AWindDirectionalSource *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UWindDirectionalSourceComponent *pUVar4;
  FName local_res8;
  
  AInfo::AInfo((AInfo *)this,param_1);
  this->_padding_ = (longlong)&___7AWindDirectionalSource__6B_;
  (this->Component).field0_0x0.DebugPtr = (UWindDirectionalSourceComponent *)0x0;
  pFVar2 = ::FName::FName(&local_res8,L"WindDirectionalSourceComponent0");
  FVar1 = *pFVar2;
  pUVar3 = Z_Construct_UClass_UWindDirectionalSourceComponent_NoRegister();
  pUVar4 = (UWindDirectionalSourceComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UWindDirectionalSourceComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->Component).field0_0x0.DebugPtr = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UWindDirectionalSourceComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  this->_padding_ = (longlong)(this->Component).field0_0x0;
  return this;
}

// ~AWindDirectionalSource @ 1489b91b0

void __thiscall AWindDirectionalSource::~AWindDirectionalSource(AWindDirectionalSource *this)

{
  this->_padding_ = (longlong)&___7AWindDirectionalSource__6B_;
  AInfo::~AInfo((AInfo *)this);
  return;
}

// GetPrivateStaticClass @ 1489eb720

UClass * __cdecl AWindDirectionalSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWindDirectionalSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WindDirectionalSource",
               &Z_Registration_Info_UClass_AWindDirectionalSource.InnerSingleton,
               StaticRegisterNativesAWindDirectionalSource,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AWindDirectionalSource>,
               InternalVTableHelperCtorCaller<AWindDirectionalSource>,local_res8,AInfo::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWindDirectionalSource.InnerSingleton;
}

// StaticRegisterNativesAWindDirectionalSource @ 148a18750

void __cdecl AWindDirectionalSource::StaticRegisterNativesAWindDirectionalSource(void)

{
  return;
}

