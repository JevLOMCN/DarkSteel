// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b5ba7f0

UClass * __cdecl UDS_SystemModuleClient::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SystemModuleClient.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SystemModuleClient",
               &Z_Registration_Info_UClass_UDS_SystemModuleClient.InnerSingleton,
               StaticRegisterNativesUDS_SystemModuleClient,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SystemModuleClient>,
               InternalVTableHelperCtorCaller<UDS_SystemModuleClient>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SystemModuleClient.InnerSingleton;
}

// UDS_SystemModuleClient @ 14b5bcc70

UDS_SystemModuleClient * __thiscall
UDS_SystemModuleClient::UDS_SystemModuleClient(UDS_SystemModuleClient *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UDS_SystemModuleClient__6B_;
  return this;
}

// GetPrivateStaticClass @ 14b5bf5b0

UClass * __cdecl UDS_SystemModuleClient::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SystemModuleClient.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SystemModuleClient",
               &Z_Registration_Info_UClass_UDS_SystemModuleClient.InnerSingleton,
               StaticRegisterNativesUDS_SystemModuleClient,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SystemModuleClient>,
               InternalVTableHelperCtorCaller<UDS_SystemModuleClient>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SystemModuleClient.InnerSingleton;
}

// StaticRegisterNativesUDS_SystemModuleClient @ 14b5c0050

void __cdecl UDS_SystemModuleClient::StaticRegisterNativesUDS_SystemModuleClient(void)

{
  return;
}

// UDS_SystemModuleClient @ 14b999d10

UDS_SystemModuleClient * __thiscall
UDS_SystemModuleClient::UDS_SystemModuleClient
          (UDS_SystemModuleClient *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UDS_SystemModuleClient__6B_;
  return this;
}

// ~UDS_SystemModuleClient @ 14b999f50

void __thiscall UDS_SystemModuleClient::~UDS_SystemModuleClient(UDS_SystemModuleClient *this)

{
  *(undefined ***)this = &___7UDS_SystemModuleClient__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Init @ 14b9b6280

void __thiscall UDS_SystemModuleClient::Init(UDS_SystemModuleClient *this)

{
  return;
}

// IsValidClients @ 14b9b7da0

bool __thiscall UDS_SystemModuleClient::IsValidClients(UDS_SystemModuleClient *this)

{
  return true;
}

