// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b4e4320

UClass * __cdecl UDS_LoginModuleClient::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_LoginModuleClient.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LoginModuleClient",
               &Z_Registration_Info_UClass_UDS_LoginModuleClient.InnerSingleton,
               StaticRegisterNativesUDS_LoginModuleClient,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_LoginModuleClient>,
               InternalVTableHelperCtorCaller<UDS_LoginModuleClient>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_LoginModuleClient.InnerSingleton;
}

// UDS_LoginModuleClient @ 14b4e8650

UDS_LoginModuleClient * __thiscall
UDS_LoginModuleClient::UDS_LoginModuleClient(UDS_LoginModuleClient *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UDS_LoginModuleClient__6B_;
  return this;
}

// GetPrivateStaticClass @ 14b4eb230

UClass * __cdecl UDS_LoginModuleClient::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_LoginModuleClient.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LoginModuleClient",
               &Z_Registration_Info_UClass_UDS_LoginModuleClient.InnerSingleton,
               StaticRegisterNativesUDS_LoginModuleClient,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_LoginModuleClient>,
               InternalVTableHelperCtorCaller<UDS_LoginModuleClient>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_LoginModuleClient.InnerSingleton;
}

// StaticRegisterNativesUDS_LoginModuleClient @ 14b4ec0d0

void __cdecl UDS_LoginModuleClient::StaticRegisterNativesUDS_LoginModuleClient(void)

{
  return;
}

// UDS_LoginModuleClient @ 14b999ca0

UDS_LoginModuleClient * __thiscall
UDS_LoginModuleClient::UDS_LoginModuleClient
          (UDS_LoginModuleClient *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UDS_LoginModuleClient__6B_;
  return this;
}

// ~UDS_LoginModuleClient @ 14b999f30

void __thiscall UDS_LoginModuleClient::~UDS_LoginModuleClient(UDS_LoginModuleClient *this)

{
  *(undefined ***)this = &___7UDS_LoginModuleClient__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Init @ 14b9b6270

void __thiscall UDS_LoginModuleClient::Init(UDS_LoginModuleClient *this)

{
  return;
}

// IsValidClients @ 14b9b7d90

bool __thiscall UDS_LoginModuleClient::IsValidClients(UDS_LoginModuleClient *this)

{
  return true;
}

