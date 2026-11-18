// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 6

// StaticClass @ 14a875700

UClass * __cdecl UChooserColumn::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UChooserColumn.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Chooser",L"ChooserColumn",
               &Z_Registration_Info_UClass_UChooserColumn.InnerSingleton,
               StaticRegisterNativesUChooserColumn,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UChooserColumn>,InternalVTableHelperCtorCaller<UChooserColumn>,
               aFStackX_8,UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChooserColumn.InnerSingleton;
}

// UChooserColumn @ 14a87d840

UChooserColumn * __thiscall
UChooserColumn::UChooserColumn(UChooserColumn *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UChooserColumn__6B_;
  return this;
}

// UChooserColumn @ 14a87d870

UChooserColumn * __thiscall
UChooserColumn::UChooserColumn(UChooserColumn *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UChooserColumn__6B_;
  return this;
}

// ~UChooserColumn @ 14a87e670

void __thiscall UChooserColumn::~UChooserColumn(UChooserColumn *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14a88a680

UClass * __cdecl UChooserColumn::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChooserColumn.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Chooser",L"ChooserColumn",
               &Z_Registration_Info_UClass_UChooserColumn.InnerSingleton,
               StaticRegisterNativesUChooserColumn,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UChooserColumn>,InternalVTableHelperCtorCaller<UChooserColumn>,
               local_res8,UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChooserColumn.InnerSingleton;
}

// StaticRegisterNativesUChooserColumn @ 14a88fd80

void __cdecl UChooserColumn::StaticRegisterNativesUChooserColumn(void)

{
  return;
}

