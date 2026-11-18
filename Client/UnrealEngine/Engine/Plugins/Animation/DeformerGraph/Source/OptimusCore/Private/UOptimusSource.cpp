// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 10

// StaticClass @ 14e119ae0

UClass * __cdecl UOptimusSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusSource",
               &Z_Registration_Info_UClass_UOptimusSource.InnerSingleton,
               StaticRegisterNativesUOptimusSource,0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusSource>,InternalVTableHelperCtorCaller<UOptimusSource>,
               local_res8,UComputeSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusSource.InnerSingleton;
}

// UOptimusSource @ 14e15d540

UOptimusSource * __thiscall
UOptimusSource::UOptimusSource(UOptimusSource *this,FVTableHelper *param_1)

{
  UComputeSource::UComputeSource((UComputeSource *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UComputeSource__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusShaderTextProvider__;
  (this->SourceText).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceText).Data.ArrayNum = 0;
  (this->SourceText).Data.ArrayMax = 0;
  return this;
}

// UOptimusSource @ 14e15d580

UOptimusSource * __thiscall
UOptimusSource::UOptimusSource(UOptimusSource *this,FObjectInitializer *param_1)

{
  UComputeSource::UComputeSource((UComputeSource *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UComputeSource__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusShaderTextProvider__;
  (this->SourceText).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceText).Data.ArrayNum = 0;
  (this->SourceText).Data.ArrayMax = 0;
  return this;
}

// ~UOptimusSource @ 14e164140

void __thiscall UOptimusSource::~UOptimusSource(UOptimusSource *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UComputeSource__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusShaderTextProvider__;
  pFVar1 = (this->SourceText).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IOptimusShaderTextProvider__6B_;
  UComputeSource::~UComputeSource((UComputeSource *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d9840

UClass * __cdecl UOptimusSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusSource",
               &Z_Registration_Info_UClass_UOptimusSource.InnerSingleton,
               StaticRegisterNativesUOptimusSource,0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusSource>,InternalVTableHelperCtorCaller<UOptimusSource>,
               local_res8,UComputeSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusSource.InnerSingleton;
}

// GetSource @ 14e1e3d80

FString * __thiscall UOptimusSource::GetSource(UOptimusSource *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->SourceText);
  return __return_storage_ptr__;
}

// GetVirtualPath @ 14e1e9970

FString * __thiscall
UOptimusSource::GetVirtualPath(UOptimusSource *this,FString *__return_storage_ptr__)

{
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,__return_storage_ptr__,(UObject *)0x0);
  Optimus::ConvertObjectPathToShaderFilePath(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// SetSource @ 14e2228b0

void __thiscall UOptimusSource::SetSource(UOptimusSource *this,FString *param_1)

{
  ::FString::operator=(&this->SourceText,param_1);
  return;
}

// StaticRegisterNativesUOptimusSource @ 14e225f50

void __cdecl UOptimusSource::StaticRegisterNativesUOptimusSource(void)

{
  return;
}

// _getUObject @ 14e2390b0

UObject * __thiscall UOptimusSource::_getUObject(UOptimusSource *this)

{
  return (UObject *)&this[-1]._padding_;
}

