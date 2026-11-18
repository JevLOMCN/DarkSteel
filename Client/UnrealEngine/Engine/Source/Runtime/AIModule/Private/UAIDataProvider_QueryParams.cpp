// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 8

// StaticClass @ 146f0d450

UClass * __cdecl UAIDataProvider_QueryParams::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAIDataProvider_QueryParams.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AIDataProvider_QueryParams",
               &Z_Registration_Info_UClass_UAIDataProvider_QueryParams.InnerSingleton,
               StaticRegisterNativesUAIDataProvider_QueryParams,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAIDataProvider_QueryParams>,
               InternalVTableHelperCtorCaller<UAIDataProvider_QueryParams>,local_res8,
               UAIDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAIDataProvider_QueryParams.InnerSingleton;
}

// UAIDataProvider_QueryParams @ 146f29f40

UAIDataProvider_QueryParams * __thiscall
UAIDataProvider_QueryParams::UAIDataProvider_QueryParams
          (UAIDataProvider_QueryParams *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAIDataProvider_QueryParams__6B_;
  (this->ParamName).ComparisonIndex = 0;
  (this->ParamName).Number = 0;
  return this;
}

// UAIDataProvider_QueryParams @ 146f29f70

UAIDataProvider_QueryParams * __thiscall
UAIDataProvider_QueryParams::UAIDataProvider_QueryParams
          (UAIDataProvider_QueryParams *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAIDataProvider_QueryParams__6B_;
  (this->ParamName).ComparisonIndex = 0;
  (this->ParamName).Number = 0;
  return this;
}

// ~UAIDataProvider_QueryParams @ 146f2e660

void __thiscall
UAIDataProvider_QueryParams::~UAIDataProvider_QueryParams(UAIDataProvider_QueryParams *this)

{
  this->_padding_ = (longlong)&___7UAIDataProvider__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BindData @ 146f352d0

void __thiscall
UAIDataProvider_QueryParams::BindData
          (UAIDataProvider_QueryParams *this,UObject *param_1,int param_2)

{
  UEnvQueryManager *this_00;
  float fVar1;
  
  this_00 = UEnvQueryManager::GetCurrent(param_1);
  if (this_00 != (UEnvQueryManager *)0x0) {
    fVar1 = UEnvQueryManager::FindNamedParam(this_00,param_2,this->ParamName);
    this->FloatValue = fVar1;
    this->IntValue = (int)this->FloatValue;
    this->BoolValue = 0.0 < fVar1;
    return;
  }
  this->FloatValue = 0.0;
  this->IntValue = 0;
  this->BoolValue = false;
  return;
}

// GetPrivateStaticClass @ 146f576f0

UClass * __cdecl UAIDataProvider_QueryParams::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAIDataProvider_QueryParams.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AIDataProvider_QueryParams",
               &Z_Registration_Info_UClass_UAIDataProvider_QueryParams.InnerSingleton,
               StaticRegisterNativesUAIDataProvider_QueryParams,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAIDataProvider_QueryParams>,
               InternalVTableHelperCtorCaller<UAIDataProvider_QueryParams>,local_res8,
               UAIDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAIDataProvider_QueryParams.InnerSingleton;
}

// StaticRegisterNativesUAIDataProvider_QueryParams @ 146f76bc0

void __cdecl UAIDataProvider_QueryParams::StaticRegisterNativesUAIDataProvider_QueryParams(void)

{
  return;
}

// ToString @ 146f7a6e0

FString * __thiscall
UAIDataProvider_QueryParams::ToString
          (UAIDataProvider_QueryParams *this,FString *__return_storage_ptr__,FName param_1)

{
  FString local_18;
  
  ::FName::ToString(&this->ParamName,&local_18);
  ::FString::PrintfImpl(__return_storage_ptr__,L"QueryParam.%s");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

