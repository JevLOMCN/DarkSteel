// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 6

// StaticClass @ 14aba8360

UClass * __cdecl UCustomizableObjectResourceDataContainer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCustomizableObjectResourceDataContainer.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObject",L"CustomizableObjectResourceDataContainer",
               &Z_Registration_Info_UClass_UCustomizableObjectResourceDataContainer.InnerSingleton,
               StaticRegisterNativesUCustomizableObjectResourceDataContainer,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UCustomizableObjectResourceDataContainer>,
               InternalVTableHelperCtorCaller<UCustomizableObjectResourceDataContainer>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCustomizableObjectResourceDataContainer.InnerSingleton;
}

// UCustomizableObjectResourceDataContainer @ 14abbd840

UCustomizableObjectResourceDataContainer * __thiscall
UCustomizableObjectResourceDataContainer::UCustomizableObjectResourceDataContainer
          (UCustomizableObjectResourceDataContainer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UCustomizableObjectResourceDataContainer__6B_;
  (this->Data).Type = None;
  FInstancedStruct::FInstancedStruct(&(this->Data).Data);
  return this;
}

// UCustomizableObjectResourceDataContainer @ 14abbd880

UCustomizableObjectResourceDataContainer * __thiscall
UCustomizableObjectResourceDataContainer::UCustomizableObjectResourceDataContainer
          (UCustomizableObjectResourceDataContainer *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UCustomizableObjectResourceDataContainer__6B_;
  (this->Data).Type = None;
  FInstancedStruct::FInstancedStruct(&(this->Data).Data);
  return this;
}

// ~UCustomizableObjectResourceDataContainer @ 14abbf930

void __thiscall
UCustomizableObjectResourceDataContainer::~UCustomizableObjectResourceDataContainer
          (UCustomizableObjectResourceDataContainer *this)

{
  this->_padding_ = (longlong)&___7UCustomizableObjectResourceDataContainer__6B_;
  FInstancedStruct::Reset(&(this->Data).Data);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14abdfe10

UClass * __cdecl UCustomizableObjectResourceDataContainer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCustomizableObjectResourceDataContainer.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObject",L"CustomizableObjectResourceDataContainer",
               &Z_Registration_Info_UClass_UCustomizableObjectResourceDataContainer.InnerSingleton,
               StaticRegisterNativesUCustomizableObjectResourceDataContainer,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UCustomizableObjectResourceDataContainer>,
               InternalVTableHelperCtorCaller<UCustomizableObjectResourceDataContainer>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCustomizableObjectResourceDataContainer.InnerSingleton;
}

// StaticRegisterNativesUCustomizableObjectResourceDataContainer @ 14abf2070

void __cdecl
UCustomizableObjectResourceDataContainer::
StaticRegisterNativesUCustomizableObjectResourceDataContainer(void)

{
  return;
}

