// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FastGeoStreaming
// Functions: 6

// StaticClass @ 14da06660

UClass * __cdecl UFastGeoInstancedStaticMeshComponentEditorProxy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFastGeoInstancedStaticMeshComponentEditorProxy.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FastGeoStreaming",L"FastGeoInstancedStaticMeshComponentEditorProxy",
               &Z_Registration_Info_UClass_UFastGeoInstancedStaticMeshComponentEditorProxy.
                InnerSingleton,StaticRegisterNativesUFastGeoInstancedStaticMeshComponentEditorProxy,
               0x30,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UFastGeoInstancedStaticMeshComponentEditorProxy>,
               InternalVTableHelperCtorCaller<UFastGeoInstancedStaticMeshComponentEditorProxy>,
               local_res8,UFastGeoStaticMeshComponentEditorProxy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFastGeoInstancedStaticMeshComponentEditorProxy.InnerSingleton;
}

// UFastGeoInstancedStaticMeshComponentEditorProxy @ 14da1a8c0

UFastGeoInstancedStaticMeshComponentEditorProxy * __thiscall
UFastGeoInstancedStaticMeshComponentEditorProxy::UFastGeoInstancedStaticMeshComponentEditorProxy
          (UFastGeoInstancedStaticMeshComponentEditorProxy *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UFastGeoInstancedStaticMeshComponentEditorProxy__6B_;
  return this;
}

// UFastGeoInstancedStaticMeshComponentEditorProxy @ 14da1a8f0

UFastGeoInstancedStaticMeshComponentEditorProxy * __thiscall
UFastGeoInstancedStaticMeshComponentEditorProxy::UFastGeoInstancedStaticMeshComponentEditorProxy
          (UFastGeoInstancedStaticMeshComponentEditorProxy *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UFastGeoInstancedStaticMeshComponentEditorProxy__6B_;
  return this;
}

// ~UFastGeoInstancedStaticMeshComponentEditorProxy @ 14da1bb50

void __thiscall
UFastGeoInstancedStaticMeshComponentEditorProxy::~UFastGeoInstancedStaticMeshComponentEditorProxy
          (UFastGeoInstancedStaticMeshComponentEditorProxy *this)

{
  *(undefined ***)this = &___7UFastGeoComponentEditorProxy__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14da2b300

UClass * __cdecl UFastGeoInstancedStaticMeshComponentEditorProxy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFastGeoInstancedStaticMeshComponentEditorProxy.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FastGeoStreaming",L"FastGeoInstancedStaticMeshComponentEditorProxy",
               &Z_Registration_Info_UClass_UFastGeoInstancedStaticMeshComponentEditorProxy.
                InnerSingleton,StaticRegisterNativesUFastGeoInstancedStaticMeshComponentEditorProxy,
               0x30,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UFastGeoInstancedStaticMeshComponentEditorProxy>,
               InternalVTableHelperCtorCaller<UFastGeoInstancedStaticMeshComponentEditorProxy>,
               local_res8,UFastGeoStaticMeshComponentEditorProxy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFastGeoInstancedStaticMeshComponentEditorProxy.InnerSingleton;
}

// StaticRegisterNativesUFastGeoInstancedStaticMeshComponentEditorProxy @ 14da382f0

void __cdecl
UFastGeoInstancedStaticMeshComponentEditorProxy::
StaticRegisterNativesUFastGeoInstancedStaticMeshComponentEditorProxy(void)

{
  return;
}

