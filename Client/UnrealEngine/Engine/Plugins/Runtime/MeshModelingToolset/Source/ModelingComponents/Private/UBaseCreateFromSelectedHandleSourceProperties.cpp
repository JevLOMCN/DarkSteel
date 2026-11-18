// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 6

// StaticClass @ 14ca41b00

UClass * __cdecl UBaseCreateFromSelectedHandleSourceProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBaseCreateFromSelectedHandleSourceProperties.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"BaseCreateFromSelectedHandleSourceProperties",
               &Z_Registration_Info_UClass_UBaseCreateFromSelectedHandleSourceProperties.
                InnerSingleton,StaticRegisterNativesUBaseCreateFromSelectedHandleSourceProperties,
               0xe0,8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UBaseCreateFromSelectedHandleSourceProperties>,
               InternalVTableHelperCtorCaller<UBaseCreateFromSelectedHandleSourceProperties>,
               local_res8,UOnAcceptHandleSourcesProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBaseCreateFromSelectedHandleSourceProperties.InnerSingleton;
}

// UBaseCreateFromSelectedHandleSourceProperties @ 14ca67360

UBaseCreateFromSelectedHandleSourceProperties * __thiscall
UBaseCreateFromSelectedHandleSourceProperties::UBaseCreateFromSelectedHandleSourceProperties
          (UBaseCreateFromSelectedHandleSourceProperties *this,FVTableHelper *param_1)

{
  UOnAcceptHandleSourcesProperties::UOnAcceptHandleSourcesProperties
            ((UOnAcceptHandleSourcesProperties *)this,param_1);
  this->_padding_ = (longlong)&___7UBaseCreateFromSelectedHandleSourceProperties__6B_;
  this->OutputWriteTo = NewObject;
  (this->OutputNewName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputNewName).Data.ArrayNum = 0;
  (this->OutputNewName).Data.ArrayMax = 0;
  (this->OutputExistingName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputExistingName).Data.ArrayNum = 0;
  (this->OutputExistingName).Data.ArrayMax = 0;
  return this;
}

// UBaseCreateFromSelectedHandleSourceProperties @ 14ca673b0

UBaseCreateFromSelectedHandleSourceProperties * __thiscall
UBaseCreateFromSelectedHandleSourceProperties::UBaseCreateFromSelectedHandleSourceProperties
          (UBaseCreateFromSelectedHandleSourceProperties *this,FObjectInitializer *param_1)

{
  UOnAcceptHandleSourcesProperties::UOnAcceptHandleSourcesProperties
            ((UOnAcceptHandleSourcesProperties *)this,param_1);
  this->_padding_ = (longlong)&___7UBaseCreateFromSelectedHandleSourceProperties__6B_;
  this->OutputWriteTo = NewObject;
  (this->OutputNewName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputNewName).Data.ArrayNum = 0;
  (this->OutputNewName).Data.ArrayMax = 0;
  (this->OutputExistingName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputExistingName).Data.ArrayNum = 0;
  (this->OutputExistingName).Data.ArrayMax = 0;
  return this;
}

// ~UBaseCreateFromSelectedHandleSourceProperties @ 14ca6b2e0

void __thiscall
UBaseCreateFromSelectedHandleSourceProperties::~UBaseCreateFromSelectedHandleSourceProperties
          (UBaseCreateFromSelectedHandleSourceProperties *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UBaseCreateFromSelectedHandleSourceProperties__6B_;
  pFVar1 = (this->OutputExistingName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OutputNewName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UOnAcceptHandleSourcesProperties::~UOnAcceptHandleSourcesProperties
            ((UOnAcceptHandleSourcesProperties *)this);
  return;
}

// GetPrivateStaticClass @ 14ca90c00

UClass * __cdecl UBaseCreateFromSelectedHandleSourceProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBaseCreateFromSelectedHandleSourceProperties.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"BaseCreateFromSelectedHandleSourceProperties",
               &Z_Registration_Info_UClass_UBaseCreateFromSelectedHandleSourceProperties.
                InnerSingleton,StaticRegisterNativesUBaseCreateFromSelectedHandleSourceProperties,
               0xe0,8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UBaseCreateFromSelectedHandleSourceProperties>,
               InternalVTableHelperCtorCaller<UBaseCreateFromSelectedHandleSourceProperties>,
               local_res8,UOnAcceptHandleSourcesProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBaseCreateFromSelectedHandleSourceProperties.InnerSingleton;
}

// StaticRegisterNativesUBaseCreateFromSelectedHandleSourceProperties @ 14caa7090

void __cdecl
UBaseCreateFromSelectedHandleSourceProperties::
StaticRegisterNativesUBaseCreateFromSelectedHandleSourceProperties(void)

{
  return;
}

