// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FastGeoStreaming
// Functions: 6

// StaticClass @ 14da06720

UClass * __cdecl UFastGeoPrimitiveComponentEditorProxy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFastGeoPrimitiveComponentEditorProxy.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FastGeoStreaming",L"FastGeoPrimitiveComponentEditorProxy",
               &Z_Registration_Info_UClass_UFastGeoPrimitiveComponentEditorProxy.InnerSingleton,
               StaticRegisterNativesUFastGeoPrimitiveComponentEditorProxy,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UFastGeoPrimitiveComponentEditorProxy>,
               InternalVTableHelperCtorCaller<UFastGeoPrimitiveComponentEditorProxy>,local_res8,
               UFastGeoComponentEditorProxy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFastGeoPrimitiveComponentEditorProxy.InnerSingleton;
}

// UFastGeoPrimitiveComponentEditorProxy @ 14da1a920

UFastGeoPrimitiveComponentEditorProxy * __thiscall
UFastGeoPrimitiveComponentEditorProxy::UFastGeoPrimitiveComponentEditorProxy
          (UFastGeoPrimitiveComponentEditorProxy *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UFastGeoPrimitiveComponentEditorProxy__6B_;
  return this;
}

// UFastGeoPrimitiveComponentEditorProxy @ 14da1a950

UFastGeoPrimitiveComponentEditorProxy * __thiscall
UFastGeoPrimitiveComponentEditorProxy::UFastGeoPrimitiveComponentEditorProxy
          (UFastGeoPrimitiveComponentEditorProxy *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UFastGeoPrimitiveComponentEditorProxy__6B_;
  return this;
}

// ~UFastGeoPrimitiveComponentEditorProxy @ 14da1bb70

void __thiscall
UFastGeoPrimitiveComponentEditorProxy::~UFastGeoPrimitiveComponentEditorProxy
          (UFastGeoPrimitiveComponentEditorProxy *this)

{
  *(undefined ***)this = &___7UFastGeoComponentEditorProxy__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14da2b3c0

UClass * __cdecl UFastGeoPrimitiveComponentEditorProxy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFastGeoPrimitiveComponentEditorProxy.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FastGeoStreaming",L"FastGeoPrimitiveComponentEditorProxy",
               &Z_Registration_Info_UClass_UFastGeoPrimitiveComponentEditorProxy.InnerSingleton,
               StaticRegisterNativesUFastGeoPrimitiveComponentEditorProxy,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UFastGeoPrimitiveComponentEditorProxy>,
               InternalVTableHelperCtorCaller<UFastGeoPrimitiveComponentEditorProxy>,local_res8,
               UFastGeoComponentEditorProxy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFastGeoPrimitiveComponentEditorProxy.InnerSingleton;
}

// StaticRegisterNativesUFastGeoPrimitiveComponentEditorProxy @ 14da38300

void __cdecl
UFastGeoPrimitiveComponentEditorProxy::StaticRegisterNativesUFastGeoPrimitiveComponentEditorProxy
          (void)

{
  return;
}

