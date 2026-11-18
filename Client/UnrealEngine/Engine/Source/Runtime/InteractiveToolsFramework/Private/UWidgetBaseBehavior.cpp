// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 6

// StaticClass @ 14962e4b0

UClass * __cdecl UWidgetBaseBehavior::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetBaseBehavior.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"WidgetBaseBehavior",
               &Z_Registration_Info_UClass_UWidgetBaseBehavior.InnerSingleton,
               StaticRegisterNativesUWidgetBaseBehavior,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWidgetBaseBehavior>,
               InternalVTableHelperCtorCaller<UWidgetBaseBehavior>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetBaseBehavior.InnerSingleton;
}

// UWidgetBaseBehavior @ 14963d3e0

UWidgetBaseBehavior * __thiscall
UWidgetBaseBehavior::UWidgetBaseBehavior(UWidgetBaseBehavior *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UWidgetBaseBehavior__6B_;
  return this;
}

// UWidgetBaseBehavior @ 14963d410

UWidgetBaseBehavior * __thiscall
UWidgetBaseBehavior::UWidgetBaseBehavior(UWidgetBaseBehavior *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UWidgetBaseBehavior__6B_;
  return this;
}

// ~UWidgetBaseBehavior @ 14963f620

void __thiscall UWidgetBaseBehavior::~UWidgetBaseBehavior(UWidgetBaseBehavior *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1496585c0

UClass * __cdecl UWidgetBaseBehavior::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetBaseBehavior.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"WidgetBaseBehavior",
               &Z_Registration_Info_UClass_UWidgetBaseBehavior.InnerSingleton,
               StaticRegisterNativesUWidgetBaseBehavior,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWidgetBaseBehavior>,
               InternalVTableHelperCtorCaller<UWidgetBaseBehavior>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetBaseBehavior.InnerSingleton;
}

// StaticRegisterNativesUWidgetBaseBehavior @ 149664dc0

void __cdecl UWidgetBaseBehavior::StaticRegisterNativesUWidgetBaseBehavior(void)

{
  return;
}

