// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 6

// StaticClass @ 14962e390

UClass * __cdecl UToolFrameworkComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToolFrameworkComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"ToolFrameworkComponent",
               &Z_Registration_Info_UClass_UToolFrameworkComponent.InnerSingleton,
               StaticRegisterNativesUToolFrameworkComponent,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UToolFrameworkComponent>,
               InternalVTableHelperCtorCaller<UToolFrameworkComponent>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToolFrameworkComponent.InnerSingleton;
}

// UToolFrameworkComponent @ 14963d300

UToolFrameworkComponent * __thiscall
UToolFrameworkComponent::UToolFrameworkComponent
          (UToolFrameworkComponent *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UToolFrameworkComponent__6B_;
  return this;
}

// UToolFrameworkComponent @ 14963d330

UToolFrameworkComponent * __thiscall
UToolFrameworkComponent::UToolFrameworkComponent
          (UToolFrameworkComponent *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UToolFrameworkComponent__6B_;
  return this;
}

// ~UToolFrameworkComponent @ 14963f5f0

void __thiscall UToolFrameworkComponent::~UToolFrameworkComponent(UToolFrameworkComponent *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 149658440

UClass * __cdecl UToolFrameworkComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToolFrameworkComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"ToolFrameworkComponent",
               &Z_Registration_Info_UClass_UToolFrameworkComponent.InnerSingleton,
               StaticRegisterNativesUToolFrameworkComponent,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UToolFrameworkComponent>,
               InternalVTableHelperCtorCaller<UToolFrameworkComponent>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToolFrameworkComponent.InnerSingleton;
}

// StaticRegisterNativesUToolFrameworkComponent @ 149664da0

void __cdecl UToolFrameworkComponent::StaticRegisterNativesUToolFrameworkComponent(void)

{
  return;
}

