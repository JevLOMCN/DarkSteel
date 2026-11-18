// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FastGeoStreaming
// Functions: 6

// StaticClass @ 14da06430

UClass * __cdecl UFastGeoComponentEditorProxy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFastGeoComponentEditorProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FastGeoStreaming",L"FastGeoComponentEditorProxy",
               &Z_Registration_Info_UClass_UFastGeoComponentEditorProxy.InnerSingleton,
               StaticRegisterNativesUFastGeoComponentEditorProxy,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UFastGeoComponentEditorProxy>,
               InternalVTableHelperCtorCaller<UFastGeoComponentEditorProxy>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFastGeoComponentEditorProxy.InnerSingleton;
}

// UFastGeoComponentEditorProxy @ 14da1a6e0

UFastGeoComponentEditorProxy * __thiscall
UFastGeoComponentEditorProxy::UFastGeoComponentEditorProxy
          (UFastGeoComponentEditorProxy *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UFastGeoComponentEditorProxy__6B_;
  return this;
}

// UFastGeoComponentEditorProxy @ 14da1a710

UFastGeoComponentEditorProxy * __thiscall
UFastGeoComponentEditorProxy::UFastGeoComponentEditorProxy
          (UFastGeoComponentEditorProxy *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UFastGeoComponentEditorProxy__6B_;
  return this;
}

// ~UFastGeoComponentEditorProxy @ 14da1ba20

void __thiscall
UFastGeoComponentEditorProxy::~UFastGeoComponentEditorProxy(UFastGeoComponentEditorProxy *this)

{
  *(undefined ***)this = &___7UFastGeoComponentEditorProxy__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14da2b190

UClass * __cdecl UFastGeoComponentEditorProxy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFastGeoComponentEditorProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FastGeoStreaming",L"FastGeoComponentEditorProxy",
               &Z_Registration_Info_UClass_UFastGeoComponentEditorProxy.InnerSingleton,
               StaticRegisterNativesUFastGeoComponentEditorProxy,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UFastGeoComponentEditorProxy>,
               InternalVTableHelperCtorCaller<UFastGeoComponentEditorProxy>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFastGeoComponentEditorProxy.InnerSingleton;
}

// StaticRegisterNativesUFastGeoComponentEditorProxy @ 14da382d0

void __cdecl UFastGeoComponentEditorProxy::StaticRegisterNativesUFastGeoComponentEditorProxy(void)

{
  return;
}

