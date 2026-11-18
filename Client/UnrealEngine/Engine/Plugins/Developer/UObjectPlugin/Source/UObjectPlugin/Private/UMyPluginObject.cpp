// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UObjectPlugin
// Functions: 6

// StaticClass @ 14e2cc710

UClass * __cdecl UMyPluginObject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMyPluginObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UObjectPlugin",L"MyPluginObject",
               &Z_Registration_Info_UClass_UMyPluginObject.InnerSingleton,
               StaticRegisterNativesUMyPluginObject,0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMyPluginObject>,InternalVTableHelperCtorCaller<UMyPluginObject>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMyPluginObject.InnerSingleton;
}

// UMyPluginObject @ 14e2ccb80

UMyPluginObject * __thiscall
UMyPluginObject::UMyPluginObject(UMyPluginObject *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMyPluginObject__6B_;
  (this->MyStruct).TestString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MyStruct).TestString.Data.ArrayNum = 0;
  (this->MyStruct).TestString.Data.ArrayMax = 0;
  return this;
}

// UMyPluginObject @ 14e2ccbc0

UMyPluginObject * __thiscall
UMyPluginObject::UMyPluginObject(UMyPluginObject *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMyPluginObject__6B_;
  (this->MyStruct).TestString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MyStruct).TestString.Data.ArrayNum = 0;
  (this->MyStruct).TestString.Data.ArrayMax = 0;
  return this;
}

// ~UMyPluginObject @ 14e2ccc00

void __thiscall UMyPluginObject::~UMyPluginObject(UMyPluginObject *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMyPluginObject__6B_;
  pFVar1 = (this->MyStruct).TestString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14e2cccd0

UClass * __cdecl UMyPluginObject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMyPluginObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UObjectPlugin",L"MyPluginObject",
               &Z_Registration_Info_UClass_UMyPluginObject.InnerSingleton,
               StaticRegisterNativesUMyPluginObject,0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMyPluginObject>,InternalVTableHelperCtorCaller<UMyPluginObject>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMyPluginObject.InnerSingleton;
}

// StaticRegisterNativesUMyPluginObject @ 14e2ccdb0

void __cdecl UMyPluginObject::StaticRegisterNativesUMyPluginObject(void)

{
  return;
}

