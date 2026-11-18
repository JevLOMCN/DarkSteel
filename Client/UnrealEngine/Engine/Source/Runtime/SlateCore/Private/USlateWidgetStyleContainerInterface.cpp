// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 6

// StaticClass @ 14252e540

UClass * __cdecl USlateWidgetStyleContainerInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USlateWidgetStyleContainerInterface.InnerSingleton == (UClass *)0x0
     ) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SlateCore",L"SlateWidgetStyleContainerInterface",
               &Z_Registration_Info_UClass_USlateWidgetStyleContainerInterface.InnerSingleton,
               StaticRegisterNativesUSlateWidgetStyleContainerInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USlateWidgetStyleContainerInterface>,
               InternalVTableHelperCtorCaller<USlateWidgetStyleContainerInterface>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USlateWidgetStyleContainerInterface.InnerSingleton;
}

// USlateWidgetStyleContainerInterface @ 142549f60

USlateWidgetStyleContainerInterface * __thiscall
USlateWidgetStyleContainerInterface::USlateWidgetStyleContainerInterface
          (USlateWidgetStyleContainerInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7USlateWidgetStyleContainerInterface__6B_;
  return this;
}

// USlateWidgetStyleContainerInterface @ 142549f90

USlateWidgetStyleContainerInterface * __thiscall
USlateWidgetStyleContainerInterface::USlateWidgetStyleContainerInterface
          (USlateWidgetStyleContainerInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7USlateWidgetStyleContainerInterface__6B_;
  return this;
}

// ~USlateWidgetStyleContainerInterface @ 14254c9c0

void __thiscall
USlateWidgetStyleContainerInterface::~USlateWidgetStyleContainerInterface
          (USlateWidgetStyleContainerInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 142582680

UClass * __cdecl USlateWidgetStyleContainerInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USlateWidgetStyleContainerInterface.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SlateCore",L"SlateWidgetStyleContainerInterface",
               &Z_Registration_Info_UClass_USlateWidgetStyleContainerInterface.InnerSingleton,
               StaticRegisterNativesUSlateWidgetStyleContainerInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USlateWidgetStyleContainerInterface>,
               InternalVTableHelperCtorCaller<USlateWidgetStyleContainerInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USlateWidgetStyleContainerInterface.InnerSingleton;
}

// StaticRegisterNativesUSlateWidgetStyleContainerInterface @ 1425a8790

void __cdecl
USlateWidgetStyleContainerInterface::StaticRegisterNativesUSlateWidgetStyleContainerInterface(void)

{
  return;
}

