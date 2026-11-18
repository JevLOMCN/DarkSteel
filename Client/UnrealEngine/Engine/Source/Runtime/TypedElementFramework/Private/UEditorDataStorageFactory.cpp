// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 18

// StaticClass @ 142c7b8e0

UClass * __cdecl UEditorDataStorageFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEditorDataStorageFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TypedElementFramework",L"EditorDataStorageFactory",
               &Z_Registration_Info_UClass_UEditorDataStorageFactory.InnerSingleton,
               StaticRegisterNativesUEditorDataStorageFactory,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UEditorDataStorageFactory>,
               InternalVTableHelperCtorCaller<UEditorDataStorageFactory>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEditorDataStorageFactory.InnerSingleton;
}

// UEditorDataStorageFactory @ 142c7d550

UEditorDataStorageFactory * __thiscall
UEditorDataStorageFactory::UEditorDataStorageFactory
          (UEditorDataStorageFactory *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UEditorDataStorageFactory__6B_;
  return this;
}

// UEditorDataStorageFactory @ 142c7d580

UEditorDataStorageFactory * __thiscall
UEditorDataStorageFactory::UEditorDataStorageFactory
          (UEditorDataStorageFactory *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UEditorDataStorageFactory__6B_;
  return this;
}

// ~UEditorDataStorageFactory @ 142c7d670

void __thiscall
UEditorDataStorageFactory::~UEditorDataStorageFactory(UEditorDataStorageFactory *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetOrder @ 142c7de80

uchar __thiscall UEditorDataStorageFactory::GetOrder(UEditorDataStorageFactory *this)

{
  return '\x7f';
}

// GetPrivateStaticClass @ 142c7de90

UClass * __cdecl UEditorDataStorageFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEditorDataStorageFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TypedElementFramework",L"EditorDataStorageFactory",
               &Z_Registration_Info_UClass_UEditorDataStorageFactory.InnerSingleton,
               StaticRegisterNativesUEditorDataStorageFactory,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UEditorDataStorageFactory>,
               InternalVTableHelperCtorCaller<UEditorDataStorageFactory>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEditorDataStorageFactory.InnerSingleton;
}

// PreRegister @ 142c7e0a0

void __thiscall
UEditorDataStorageFactory::PreRegister(UEditorDataStorageFactory *this,ICoreProvider *param_1)

{
  return;
}

// PreShutdown @ 142c7e0b0

void __thiscall
UEditorDataStorageFactory::PreShutdown(UEditorDataStorageFactory *this,ICoreProvider *param_1)

{
  return;
}

// RegisterDealiaser @ 142c7e0c0

void __thiscall
UEditorDataStorageFactory::RegisterDealiaser
          (UEditorDataStorageFactory *this,ICompatibilityProvider *param_1)

{
  return;
}

// RegisterPropertySorters @ 142c7e0d0

void __thiscall
UEditorDataStorageFactory::RegisterPropertySorters
          (UEditorDataStorageFactory *this,IUiProvider *param_1)

{
  return;
}

// RegisterQueries @ 142c7e0e0

void __thiscall
UEditorDataStorageFactory::RegisterQueries(UEditorDataStorageFactory *this,ICoreProvider *param_1)

{
  return;
}

// RegisterRegistrationFilters @ 142c7e0f0

void __thiscall
UEditorDataStorageFactory::RegisterRegistrationFilters
          (UEditorDataStorageFactory *this,ICompatibilityProvider *param_1)

{
  return;
}

// RegisterTables @ 142c7e100

void __thiscall
UEditorDataStorageFactory::RegisterTables(UEditorDataStorageFactory *this,ICoreProvider *param_1)

{
  return;
}

// RegisterTables @ 142c7e110

void __thiscall
UEditorDataStorageFactory::RegisterTables
          (UEditorDataStorageFactory *this,ICoreProvider *param_1,ICompatibilityProvider *param_2)

{
  return;
}

// RegisterTickGroups @ 142c7e120

void __thiscall
UEditorDataStorageFactory::RegisterTickGroups
          (UEditorDataStorageFactory *this,ICoreProvider *param_1)

{
  return;
}

// RegisterWidgetConstructors @ 142c7e130

void __thiscall
UEditorDataStorageFactory::RegisterWidgetConstructors
          (UEditorDataStorageFactory *this,ICoreProvider *param_1,IUiProvider *param_2)

{
  return;
}

// RegisterWidgetPurposes @ 142c7e140

void __thiscall
UEditorDataStorageFactory::RegisterWidgetPurposes
          (UEditorDataStorageFactory *this,IUiProvider *param_1)

{
  return;
}

// StaticRegisterNativesUEditorDataStorageFactory @ 142c7e3a0

void __cdecl UEditorDataStorageFactory::StaticRegisterNativesUEditorDataStorageFactory(void)

{
  return;
}

