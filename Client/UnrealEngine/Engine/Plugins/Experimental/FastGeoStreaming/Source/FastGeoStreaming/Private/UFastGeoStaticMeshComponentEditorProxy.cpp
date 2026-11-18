// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FastGeoStreaming
// Functions: 6

// StaticClass @ 14da06a40

UClass * __cdecl UFastGeoStaticMeshComponentEditorProxy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFastGeoStaticMeshComponentEditorProxy.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FastGeoStreaming",L"FastGeoStaticMeshComponentEditorProxy",
               &Z_Registration_Info_UClass_UFastGeoStaticMeshComponentEditorProxy.InnerSingleton,
               StaticRegisterNativesUFastGeoStaticMeshComponentEditorProxy,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UFastGeoStaticMeshComponentEditorProxy>,
               InternalVTableHelperCtorCaller<UFastGeoStaticMeshComponentEditorProxy>,local_res8,
               UFastGeoPrimitiveComponentEditorProxy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFastGeoStaticMeshComponentEditorProxy.InnerSingleton;
}

// UFastGeoStaticMeshComponentEditorProxy @ 14da1a980

UFastGeoStaticMeshComponentEditorProxy * __thiscall
UFastGeoStaticMeshComponentEditorProxy::UFastGeoStaticMeshComponentEditorProxy
          (UFastGeoStaticMeshComponentEditorProxy *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UFastGeoStaticMeshComponentEditorProxy__6B_;
  return this;
}

// UFastGeoStaticMeshComponentEditorProxy @ 14da1a9b0

UFastGeoStaticMeshComponentEditorProxy * __thiscall
UFastGeoStaticMeshComponentEditorProxy::UFastGeoStaticMeshComponentEditorProxy
          (UFastGeoStaticMeshComponentEditorProxy *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UFastGeoStaticMeshComponentEditorProxy__6B_;
  return this;
}

// ~UFastGeoStaticMeshComponentEditorProxy @ 14da1bb90

void __thiscall
UFastGeoStaticMeshComponentEditorProxy::~UFastGeoStaticMeshComponentEditorProxy
          (UFastGeoStaticMeshComponentEditorProxy *this)

{
  *(undefined ***)this = &___7UFastGeoComponentEditorProxy__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14da2b480

UClass * __cdecl UFastGeoStaticMeshComponentEditorProxy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFastGeoStaticMeshComponentEditorProxy.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FastGeoStreaming",L"FastGeoStaticMeshComponentEditorProxy",
               &Z_Registration_Info_UClass_UFastGeoStaticMeshComponentEditorProxy.InnerSingleton,
               StaticRegisterNativesUFastGeoStaticMeshComponentEditorProxy,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UFastGeoStaticMeshComponentEditorProxy>,
               InternalVTableHelperCtorCaller<UFastGeoStaticMeshComponentEditorProxy>,local_res8,
               UFastGeoPrimitiveComponentEditorProxy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFastGeoStaticMeshComponentEditorProxy.InnerSingleton;
}

// StaticRegisterNativesUFastGeoStaticMeshComponentEditorProxy @ 14da38310

void __cdecl
UFastGeoStaticMeshComponentEditorProxy::StaticRegisterNativesUFastGeoStaticMeshComponentEditorProxy
          (void)

{
  return;
}

