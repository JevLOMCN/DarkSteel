// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneCapture
// Functions: 8

// StaticClass @ 146bd0aa0

UClass * __cdecl UCompressedImageSequenceProtocol::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCompressedImageSequenceProtocol.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"CompressedImageSequenceProtocol",
               &Z_Registration_Info_UClass_UCompressedImageSequenceProtocol.InnerSingleton,
               StaticRegisterNativesUCompressedImageSequenceProtocol,0xe0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,
               L"EditorPerProjectUserSettings",InternalConstructor<UCompressedImageSequenceProtocol>
               ,InternalVTableHelperCtorCaller<UCompressedImageSequenceProtocol>,local_res8,
               UImageSequenceProtocol::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCompressedImageSequenceProtocol.InnerSingleton;
}

// UCompressedImageSequenceProtocol @ 146bd83a0

UCompressedImageSequenceProtocol * __thiscall
UCompressedImageSequenceProtocol::UCompressedImageSequenceProtocol
          (UCompressedImageSequenceProtocol *this,FVTableHelper *param_1)

{
  UImageSequenceProtocol::UImageSequenceProtocol((UImageSequenceProtocol *)this,param_1);
  this->_padding_ = (longlong)&___7UCompressedImageSequenceProtocol__6B_;
  return this;
}

// ~UCompressedImageSequenceProtocol @ 146bd9460

void __thiscall
UCompressedImageSequenceProtocol::~UCompressedImageSequenceProtocol
          (UCompressedImageSequenceProtocol *this)

{
  this->_padding_ = (longlong)&___7UCompressedImageSequenceProtocol__6B_;
  UImageSequenceProtocol::~UImageSequenceProtocol((UImageSequenceProtocol *)this);
  return;
}

// AddFormatMappingsImpl @ 146bdb1e0

void __thiscall
UCompressedImageSequenceProtocol::AddFormatMappingsImpl
          (UCompressedImageSequenceProtocol *this,
          TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
          *param_1)

{
  TPairInitializer<FString_&&,FStringFormatArg_&&> local_res8 [2];
  FString *local_48;
  FStringFormatArg *local_40;
  FString local_38;
  FStringFormatArg local_28;
  
  FStringFormatArg::FStringFormatArg(&local_28,this->CompressionQuality);
  ::FString::FString(&local_38,L"quality");
  local_48 = &local_38;
  local_40 = &local_28;
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
            ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
              *)param_1,local_res8,(bool *)&local_48);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.StringValue.Data.AllocatorInstance.Data);
  }
  return;
}

// GetCompressionQuality @ 146bdffb0

int __thiscall
UCompressedImageSequenceProtocol::GetCompressionQuality(UCompressedImageSequenceProtocol *this)

{
  return this->CompressionQuality;
}

// GetPrivateStaticClass @ 146be0420

UClass * __cdecl UCompressedImageSequenceProtocol::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCompressedImageSequenceProtocol.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"CompressedImageSequenceProtocol",
               &Z_Registration_Info_UClass_UCompressedImageSequenceProtocol.InnerSingleton,
               StaticRegisterNativesUCompressedImageSequenceProtocol,0xe0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,
               L"EditorPerProjectUserSettings",InternalConstructor<UCompressedImageSequenceProtocol>
               ,InternalVTableHelperCtorCaller<UCompressedImageSequenceProtocol>,local_res8,
               UImageSequenceProtocol::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCompressedImageSequenceProtocol.InnerSingleton;
}

// SetupImpl @ 146be7cf0

bool __thiscall UCompressedImageSequenceProtocol::SetupImpl(UCompressedImageSequenceProtocol *this)

{
  bool bVar1;
  int iVar2;
  wchar_t *pwVar3;
  int iVar4;
  
  pwVar3 = FCommandLine::Get();
  FParse::Value(pwVar3,L"-MovieQuality=",&this->CompressionQuality);
  iVar4 = 100;
  if (this->CompressionQuality < 100) {
    iVar4 = this->CompressionQuality;
  }
  iVar2 = 1;
  if (1 < iVar4) {
    iVar2 = iVar4;
  }
  this->CompressionQuality = iVar2;
  bVar1 = UImageSequenceProtocol::SetupImpl((UImageSequenceProtocol *)this);
  return bVar1;
}

// StaticRegisterNativesUCompressedImageSequenceProtocol @ 146be8cc0

void __cdecl
UCompressedImageSequenceProtocol::StaticRegisterNativesUCompressedImageSequenceProtocol(void)

{
  return;
}

