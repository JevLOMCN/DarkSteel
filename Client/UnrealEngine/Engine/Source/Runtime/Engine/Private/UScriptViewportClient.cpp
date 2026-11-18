// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147c87540

UClass * __cdecl UScriptViewportClient::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UScriptViewportClient.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ScriptViewportClient",
               &Z_Registration_Info_UClass_UScriptViewportClient.InnerSingleton,
               StaticRegisterNativesUScriptViewportClient,0x70,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UScriptViewportClient>,
               InternalVTableHelperCtorCaller<UScriptViewportClient>,aFStackX_8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UScriptViewportClient.InnerSingleton;
}

// UScriptViewportClient @ 148510000

UScriptViewportClient * __thiscall
UScriptViewportClient::UScriptViewportClient(UScriptViewportClient *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  FCommonViewportClient::FCommonViewportClient((FCommonViewportClient *)&this->field_0x30);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__FCommonViewportClient__;
  return this;
}

// UScriptViewportClient @ 148510050

UScriptViewportClient * __thiscall
UScriptViewportClient::UScriptViewportClient
          (UScriptViewportClient *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  FCommonViewportClient::FCommonViewportClient((FCommonViewportClient *)&this->field_0x30);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__FCommonViewportClient__;
  return this;
}

// ~UScriptViewportClient @ 148511820

void __thiscall UScriptViewportClient::~UScriptViewportClient(UScriptViewportClient *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__FCommonViewportClient__;
  FCommonViewportClient::~FCommonViewportClient((FCommonViewportClient *)&this->field_0x30);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14852c520

UClass * __cdecl UScriptViewportClient::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UScriptViewportClient.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ScriptViewportClient",
               &Z_Registration_Info_UClass_UScriptViewportClient.InnerSingleton,
               StaticRegisterNativesUScriptViewportClient,0x70,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UScriptViewportClient>,
               InternalVTableHelperCtorCaller<UScriptViewportClient>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UScriptViewportClient.InnerSingleton;
}

// StaticRegisterNativesUScriptViewportClient @ 148548540

void __cdecl UScriptViewportClient::StaticRegisterNativesUScriptViewportClient(void)

{
  return;
}

