// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 14732c2f0

UClass * __cdecl USMInstanceProxyEditingObject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USMInstanceProxyEditingObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SMInstanceProxyEditingObject",
               &Z_Registration_Info_UClass_USMInstanceProxyEditingObject.InnerSingleton,
               StaticRegisterNativesUSMInstanceProxyEditingObject,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USMInstanceProxyEditingObject>,
               InternalVTableHelperCtorCaller<USMInstanceProxyEditingObject>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USMInstanceProxyEditingObject.InnerSingleton;
}

// USMInstanceProxyEditingObject @ 147330ec0

USMInstanceProxyEditingObject * __thiscall
USMInstanceProxyEditingObject::USMInstanceProxyEditingObject
          (USMInstanceProxyEditingObject *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7USMInstanceProxyEditingObject__6B_;
  return this;
}

// USMInstanceProxyEditingObject @ 147330ef0

USMInstanceProxyEditingObject * __thiscall
USMInstanceProxyEditingObject::USMInstanceProxyEditingObject
          (USMInstanceProxyEditingObject *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7USMInstanceProxyEditingObject__6B_;
  return this;
}

// ~USMInstanceProxyEditingObject @ 1473313a0

void __thiscall
USMInstanceProxyEditingObject::~USMInstanceProxyEditingObject(USMInstanceProxyEditingObject *this)

{
  *(undefined ***)this = &___7USMInstanceProxyEditingObject__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147332880

UClass * __cdecl USMInstanceProxyEditingObject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USMInstanceProxyEditingObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SMInstanceProxyEditingObject",
               &Z_Registration_Info_UClass_USMInstanceProxyEditingObject.InnerSingleton,
               StaticRegisterNativesUSMInstanceProxyEditingObject,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USMInstanceProxyEditingObject>,
               InternalVTableHelperCtorCaller<USMInstanceProxyEditingObject>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USMInstanceProxyEditingObject.InnerSingleton;
}

// Initialize @ 147333260

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
USMInstanceProxyEditingObject::Initialize
          (USMInstanceProxyEditingObject *this,FSMInstanceElementId *param_1)

{
  return;
}

// Shutdown @ 147333360

void __thiscall USMInstanceProxyEditingObject::Shutdown(USMInstanceProxyEditingObject *this)

{
  return;
}

// StaticRegisterNativesUSMInstanceProxyEditingObject @ 147333400

void __cdecl USMInstanceProxyEditingObject::StaticRegisterNativesUSMInstanceProxyEditingObject(void)

{
  return;
}

// SyncProxyStateFromInstance @ 1473334d0

bool __thiscall
USMInstanceProxyEditingObject::SyncProxyStateFromInstance(USMInstanceProxyEditingObject *this)

{
  return false;
}

