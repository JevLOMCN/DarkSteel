// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaAssets
// Functions: 8

// StaticClass @ 146c16490

UClass * __cdecl UStreamMediaSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStreamMediaSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaAssets",L"StreamMediaSource",
               &Z_Registration_Info_UClass_UStreamMediaSource.InnerSingleton,
               StaticRegisterNativesUStreamMediaSource,0x98,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UStreamMediaSource>,
               InternalVTableHelperCtorCaller<UStreamMediaSource>,local_res8,
               UBaseMediaSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStreamMediaSource.InnerSingleton;
}

// UStreamMediaSource @ 146c1dd80

UStreamMediaSource * __thiscall
UStreamMediaSource::UStreamMediaSource(UStreamMediaSource *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMediaOptions__;
  this->_padding_ = 0;
  (this->StreamUrl).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StreamUrl).Data.ArrayNum = 0;
  (this->StreamUrl).Data.ArrayMax = 0;
  return this;
}

// UStreamMediaSource @ 146c1ddf0

UStreamMediaSource * __thiscall
UStreamMediaSource::UStreamMediaSource(UStreamMediaSource *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMediaOptions__;
  this->_padding_ = 0;
  (this->StreamUrl).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StreamUrl).Data.ArrayNum = 0;
  (this->StreamUrl).Data.ArrayMax = 0;
  return this;
}

// ~UStreamMediaSource @ 146c1ee00

void __thiscall UStreamMediaSource::~UStreamMediaSource(UStreamMediaSource *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMediaOptions__;
  pFVar1 = (this->StreamUrl).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&UMediaSource::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UMediaSource::_vftable__for__IMediaOptions__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146c2d0f0

UClass * __cdecl UStreamMediaSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStreamMediaSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaAssets",L"StreamMediaSource",
               &Z_Registration_Info_UClass_UStreamMediaSource.InnerSingleton,
               StaticRegisterNativesUStreamMediaSource,0x98,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UStreamMediaSource>,
               InternalVTableHelperCtorCaller<UStreamMediaSource>,local_res8,
               UBaseMediaSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStreamMediaSource.InnerSingleton;
}

// GetUrl @ 146c2e270

FString * __thiscall
UStreamMediaSource::GetUrl(UStreamMediaSource *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->StreamUrl);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUStreamMediaSource @ 146c38040

void __cdecl UStreamMediaSource::StaticRegisterNativesUStreamMediaSource(void)

{
  return;
}

// Validate @ 146c3a9e0

bool __thiscall UStreamMediaSource::Validate(UStreamMediaSource *this)

{
  int iVar1;
  
  iVar1 = ::FString::Find(&this->StreamUrl,L"://",3,IgnoreCase,FromStart,-1);
  return iVar1 != -1;
}

