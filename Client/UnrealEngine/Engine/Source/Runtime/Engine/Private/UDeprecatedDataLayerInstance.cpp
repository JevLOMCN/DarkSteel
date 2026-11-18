// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// StaticClass @ 148a26fc0

UClass * __cdecl UDeprecatedDataLayerInstance::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDeprecatedDataLayerInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DeprecatedDataLayerInstance",
               &Z_Registration_Info_UClass_UDeprecatedDataLayerInstance.InnerSingleton,
               StaticRegisterNativesUDeprecatedDataLayerInstance,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDeprecatedDataLayerInstance>,
               InternalVTableHelperCtorCaller<UDeprecatedDataLayerInstance>,local_res8,
               UDataLayerInstance::StaticClass,AWorldDataLayers::StaticClass);
  }
  return Z_Registration_Info_UClass_UDeprecatedDataLayerInstance.InnerSingleton;
}

// UDeprecatedDataLayerInstance @ 148a42bb0

UDeprecatedDataLayerInstance * __thiscall
UDeprecatedDataLayerInstance::UDeprecatedDataLayerInstance
          (UDeprecatedDataLayerInstance *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDeprecatedDataLayerInstance__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Label).ComparisonIndex = 0;
  (this->Label).Number = 0;
  (this->DeprecatedDataLayerFName).ComparisonIndex = 0;
  (this->DeprecatedDataLayerFName).Number = 0;
  return this;
}

// UDeprecatedDataLayerInstance @ 148a42bf0

UDeprecatedDataLayerInstance * __thiscall
UDeprecatedDataLayerInstance::UDeprecatedDataLayerInstance
          (UDeprecatedDataLayerInstance *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDeprecatedDataLayerInstance__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Label).ComparisonIndex = 0;
  (this->Label).Number = 0;
  (this->DeprecatedDataLayerFName).ComparisonIndex = 0;
  (this->DeprecatedDataLayerFName).Number = 0;
  this->DataLayerType = Editor;
  return this;
}

// ~UDeprecatedDataLayerInstance @ 148a44860

void __thiscall
UDeprecatedDataLayerInstance::~UDeprecatedDataLayerInstance(UDeprecatedDataLayerInstance *this)

{
  this->_padding_ = (longlong)&___7UDataLayerInstance__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetDataLayerFName @ 148a55840

FName __thiscall UDeprecatedDataLayerInstance::GetDataLayerFName(UDeprecatedDataLayerInstance *this)

{
  FName FVar1;
  FName in_RDX;
  
  FVar1 = this->DeprecatedDataLayerFName;
  if (FVar1 == (FName)0x0) {
    FVar1 = (FName)this->_padding_;
  }
  *(FName *)in_RDX = FVar1;
  return in_RDX;
}

// GetDataLayerFullName @ 148a55c90

FString * __thiscall
UDeprecatedDataLayerInstance::GetDataLayerFullName
          (UDeprecatedDataLayerInstance *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = ::FName::ToString(&this->Label,&local_18);
  ::FString::ConcatCF(__return_storage_ptr__,L"Deprecated_",pFVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetDataLayerShortName @ 148a57300

FString * __thiscall
UDeprecatedDataLayerInstance::GetDataLayerShortName
          (UDeprecatedDataLayerInstance *this,FString *__return_storage_ptr__)

{
  ::FName::ToString(&this->Label,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetDebugColor @ 148a573b0

FColor __thiscall UDeprecatedDataLayerInstance::GetDebugColor(UDeprecatedDataLayerInstance *this)

{
  FColor_u_0 *in_RDX;
  
  *in_RDX = (this->DebugColor).field0_0x0;
  return (FColor)SUB84(in_RDX,0);
}

// GetPrivateStaticClass @ 148a5a6e0

UClass * __cdecl UDeprecatedDataLayerInstance::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDeprecatedDataLayerInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DeprecatedDataLayerInstance",
               &Z_Registration_Info_UClass_UDeprecatedDataLayerInstance.InnerSingleton,
               StaticRegisterNativesUDeprecatedDataLayerInstance,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDeprecatedDataLayerInstance>,
               InternalVTableHelperCtorCaller<UDeprecatedDataLayerInstance>,local_res8,
               UDataLayerInstance::StaticClass,AWorldDataLayers::StaticClass);
  }
  return Z_Registration_Info_UClass_UDeprecatedDataLayerInstance.InnerSingleton;
}

// GetType @ 148a5b460

EDataLayerType __thiscall UDeprecatedDataLayerInstance::GetType(UDeprecatedDataLayerInstance *this)

{
  return this->DataLayerType;
}

// IsRuntime @ 148a5eba0

bool __thiscall UDeprecatedDataLayerInstance::IsRuntime(UDeprecatedDataLayerInstance *this)

{
  return this->DataLayerType == Runtime;
}

// StaticRegisterNativesUDeprecatedDataLayerInstance @ 148a6a4b0

void __cdecl UDeprecatedDataLayerInstance::StaticRegisterNativesUDeprecatedDataLayerInstance(void)

{
  return;
}

