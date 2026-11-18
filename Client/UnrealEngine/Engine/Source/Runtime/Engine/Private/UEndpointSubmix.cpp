// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 1486769d0

UClass * __cdecl UEndpointSubmix::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEndpointSubmix.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"EndpointSubmix",
               &Z_Registration_Info_UClass_UEndpointSubmix.InnerSingleton,
               StaticRegisterNativesUEndpointSubmix,0xa8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UEndpointSubmix>,
               InternalVTableHelperCtorCaller<UEndpointSubmix>,local_res8,
               USoundSubmixBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEndpointSubmix.InnerSingleton;
}

// UEndpointSubmix @ 148696590

UEndpointSubmix * __thiscall
UEndpointSubmix::UEndpointSubmix(UEndpointSubmix *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3c23d70a;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UEndpointSubmix__6B_;
  (this->EndpointType).ComparisonIndex = 0;
  (this->EndpointType).Number = 0;
  (this->EndpointSettingsClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->EndpointSettings).field0_0x0.DebugPtr = (UAudioEndpointSettingsBase *)0x0;
  return this;
}

// UEndpointSubmix @ 148696610

UEndpointSubmix * __thiscall
UEndpointSubmix::UEndpointSubmix(UEndpointSubmix *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3c23d70a;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UEndpointSubmix__6B_;
  IAudioEndpointFactory::GetTypeNameForDefaultEndpoint();
  (this->EndpointSettingsClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->EndpointSettings).field0_0x0.DebugPtr = (UAudioEndpointSettingsBase *)0x0;
  return this;
}

// ~UEndpointSubmix @ 14869b300

void __thiscall UEndpointSubmix::~UEndpointSubmix(UEndpointSubmix *this)

{
  this->_padding_ = (longlong)&___7USoundSubmixBase__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FDynamicChildSubmix>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FDynamicChildSubmix>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FDynamicChildSubmix>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetAudioEndpointForSubmix @ 1486bb2b0

IAudioEndpointFactory * __thiscall UEndpointSubmix::GetAudioEndpointForSubmix(UEndpointSubmix *this)

{
  IAudioEndpointFactory *pIVar1;
  
  pIVar1 = IAudioEndpointFactory::Get(&this->EndpointType);
  return pIVar1;
}

// GetEndpointSettings @ 1486be1d0

UAudioEndpointSettingsBase * __thiscall UEndpointSubmix::GetEndpointSettings(UEndpointSubmix *this)

{
  return (this->EndpointSettings).field0_0x0.DebugPtr;
}

// GetPrivateStaticClass @ 1486c3d00

UClass * __cdecl UEndpointSubmix::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEndpointSubmix.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"EndpointSubmix",
               &Z_Registration_Info_UClass_UEndpointSubmix.InnerSingleton,
               StaticRegisterNativesUEndpointSubmix,0xa8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UEndpointSubmix>,
               InternalVTableHelperCtorCaller<UEndpointSubmix>,local_res8,
               USoundSubmixBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEndpointSubmix.InnerSingleton;
}

// PostLoad @ 1486e0020

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UEndpointSubmix::PostLoad(UEndpointSubmix *this)

{
  ForAnyElementType FVar1;
  FName local_res10;
  FName local_res18 [2];
  FString local_58;
  TArray<FName,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  FString local_28;
  
  IAudioEndpointFactory::GetAvailableEndpointTypes(&local_48);
  if ((FName *)local_48.AllocatorInstance.Data !=
      (FName *)(local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 8)) {
    FVar1.Data = local_48.AllocatorInstance.Data;
    do {
      if (*(FName *)FVar1.Data == this->EndpointType) goto LAB_1486e016f;
      FVar1.Data = FVar1.Data + 8;
    } while ((FName *)FVar1.Data !=
             (FName *)(local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 8));
  }
  IAudioEndpointFactory::GetTypeNameForDefaultEndpoint();
  if (2 < (byte)LogAudio._0_1_) {
    ::FName::ToString(&local_res10,&local_28);
    ::FName::ToString(&this->EndpointType,&local_38);
    local_res18[0] = (FName)this->_padding_;
    ::FName::ToString(local_res18,&local_58);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  this->EndpointType = local_res10;
LAB_1486e016f:
  USoundSubmixBase::PostLoad((USoundSubmixBase *)this);
  if ((FName *)local_48.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUEndpointSubmix @ 1486f1750

void __cdecl UEndpointSubmix::StaticRegisterNativesUEndpointSubmix(void)

{
  return;
}

