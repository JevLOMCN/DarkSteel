// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1487d7590

UClass * __cdecl UAudioSubsystemCollectionRoot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioSubsystemCollectionRoot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AudioSubsystemCollectionRoot",
               &Z_Registration_Info_UClass_UAudioSubsystemCollectionRoot.InnerSingleton,
               StaticRegisterNativesUAudioSubsystemCollectionRoot,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioSubsystemCollectionRoot>,
               InternalVTableHelperCtorCaller<UAudioSubsystemCollectionRoot>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioSubsystemCollectionRoot.InnerSingleton;
}

// UAudioSubsystemCollectionRoot @ 148809b60

UAudioSubsystemCollectionRoot * __thiscall
UAudioSubsystemCollectionRoot::UAudioSubsystemCollectionRoot
          (UAudioSubsystemCollectionRoot *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->OwningDeviceID = 0xffffffff;
  this->_padding_ = (longlong)&___7UAudioSubsystemCollectionRoot__6B_;
  return this;
}

// UAudioSubsystemCollectionRoot @ 148809b90

UAudioSubsystemCollectionRoot * __thiscall
UAudioSubsystemCollectionRoot::UAudioSubsystemCollectionRoot
          (UAudioSubsystemCollectionRoot *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->OwningDeviceID = 0xffffffff;
  this->_padding_ = (longlong)&___7UAudioSubsystemCollectionRoot__6B_;
  return this;
}

// ~UAudioSubsystemCollectionRoot @ 14880d150

void __thiscall
UAudioSubsystemCollectionRoot::~UAudioSubsystemCollectionRoot(UAudioSubsystemCollectionRoot *this)

{
  this->_padding_ = (longlong)&___7UAudioSubsystemCollectionRoot__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1488404b0

UClass * __cdecl UAudioSubsystemCollectionRoot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioSubsystemCollectionRoot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AudioSubsystemCollectionRoot",
               &Z_Registration_Info_UClass_UAudioSubsystemCollectionRoot.InnerSingleton,
               StaticRegisterNativesUAudioSubsystemCollectionRoot,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioSubsystemCollectionRoot>,
               InternalVTableHelperCtorCaller<UAudioSubsystemCollectionRoot>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioSubsystemCollectionRoot.InnerSingleton;
}

// StaticRegisterNativesUAudioSubsystemCollectionRoot @ 14885ac10

void __cdecl UAudioSubsystemCollectionRoot::StaticRegisterNativesUAudioSubsystemCollectionRoot(void)

{
  return;
}

