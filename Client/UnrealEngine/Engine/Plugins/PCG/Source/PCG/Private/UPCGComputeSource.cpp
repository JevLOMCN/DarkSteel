// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// StaticClass @ 14978b8d0

UClass * __cdecl UPCGComputeSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGComputeSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGComputeSource",
               &Z_Registration_Info_UClass_UPCGComputeSource.InnerSingleton,
               StaticRegisterNativesUPCGComputeSource,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGComputeSource>,
               InternalVTableHelperCtorCaller<UPCGComputeSource>,local_res8,
               UComputeSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGComputeSource.InnerSingleton;
}

// UPCGComputeSource @ 1497e09f0

UPCGComputeSource * __thiscall
UPCGComputeSource::UPCGComputeSource(UPCGComputeSource *this,FVTableHelper *param_1)

{
  UComputeSource::UComputeSource((UComputeSource *)this,param_1);
  *(undefined ***)this = &_vftable__for__UComputeSource__;
  *(undefined ***)&this->field_0x38 = &_vftable__for__IPCGNodeSourceTextProvider__;
  return this;
}

// UPCGComputeSource @ 1497e0a30

UPCGComputeSource * __thiscall
UPCGComputeSource::UPCGComputeSource(UPCGComputeSource *this,FObjectInitializer *param_1)

{
  UComputeSource::UComputeSource((UComputeSource *)this,param_1);
  *(undefined ***)this = &_vftable__for__UComputeSource__;
  *(undefined ***)&this->field_0x38 = &_vftable__for__IPCGNodeSourceTextProvider__;
  return this;
}

// ~UPCGComputeSource @ 1497e2e40

void __thiscall UPCGComputeSource::~UPCGComputeSource(UPCGComputeSource *this)

{
  *(undefined ***)this = &_vftable__for__UComputeSource__;
  *(undefined ***)&this->field_0x38 = &___7IPCGNodeSourceTextProvider__6B_;
  UComputeSource::~UComputeSource((UComputeSource *)this);
  return;
}

// GetPrivateStaticClass @ 149817510

UClass * __cdecl UPCGComputeSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGComputeSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGComputeSource",
               &Z_Registration_Info_UClass_UPCGComputeSource.InnerSingleton,
               StaticRegisterNativesUPCGComputeSource,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGComputeSource>,
               InternalVTableHelperCtorCaller<UPCGComputeSource>,local_res8,
               UComputeSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGComputeSource.InnerSingleton;
}

// GetSource @ 14981b7e0

FString * __thiscall
UPCGComputeSource::GetSource(UPCGComputeSource *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<5443852716759580704>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGComputeSource.cpp"
                     ,0x20,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// GetVirtualPath @ 14981d9f0

FString * __thiscall
UPCGComputeSource::GetVirtualPath(UPCGComputeSource *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<5443852716759580716>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGComputeSource.cpp"
                     ,0x2c,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGComputeSource @ 1498471a0

void __cdecl UPCGComputeSource::StaticRegisterNativesUPCGComputeSource(void)

{
  return;
}

// _getUObject @ 14984f620

UObject * __thiscall UPCGComputeSource::_getUObject(UPCGComputeSource *this)

{
  return (UObject *)&this[-1].field_0x8;
}

