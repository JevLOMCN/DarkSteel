// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProxyTable
// Functions: 6

// StaticClass @ 14cf24e70

UClass * __cdecl UChooserParameterProxyTable::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChooserParameterProxyTable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProxyTable",L"ChooserParameterProxyTable",
               &Z_Registration_Info_UClass_UChooserParameterProxyTable.InnerSingleton,
               StaticRegisterNativesUChooserParameterProxyTable,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UChooserParameterProxyTable>,
               InternalVTableHelperCtorCaller<UChooserParameterProxyTable>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChooserParameterProxyTable.InnerSingleton;
}

// UChooserParameterProxyTable @ 14cf26710

UChooserParameterProxyTable * __thiscall
UChooserParameterProxyTable::UChooserParameterProxyTable
          (UChooserParameterProxyTable *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UChooserParameterProxyTable__6B_;
  return this;
}

// UChooserParameterProxyTable @ 14cf26740

UChooserParameterProxyTable * __thiscall
UChooserParameterProxyTable::UChooserParameterProxyTable
          (UChooserParameterProxyTable *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UChooserParameterProxyTable__6B_;
  return this;
}

// ~UChooserParameterProxyTable @ 14cf26910

void __thiscall
UChooserParameterProxyTable::~UChooserParameterProxyTable(UChooserParameterProxyTable *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14cf277f0

UClass * __cdecl UChooserParameterProxyTable::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChooserParameterProxyTable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProxyTable",L"ChooserParameterProxyTable",
               &Z_Registration_Info_UClass_UChooserParameterProxyTable.InnerSingleton,
               StaticRegisterNativesUChooserParameterProxyTable,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UChooserParameterProxyTable>,
               InternalVTableHelperCtorCaller<UChooserParameterProxyTable>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChooserParameterProxyTable.InnerSingleton;
}

// StaticRegisterNativesUChooserParameterProxyTable @ 14cf285d0

void __cdecl UChooserParameterProxyTable::StaticRegisterNativesUChooserParameterProxyTable(void)

{
  return;
}

