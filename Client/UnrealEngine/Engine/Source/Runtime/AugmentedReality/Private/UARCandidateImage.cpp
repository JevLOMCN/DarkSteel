// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 11

// StaticClass @ 14cf2c940

UClass * __cdecl UARCandidateImage::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARCandidateImage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARCandidateImage",
               &Z_Registration_Info_UClass_UARCandidateImage.InnerSingleton,
               StaticRegisterNativesUARCandidateImage,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UARCandidateImage>,
               InternalVTableHelperCtorCaller<UARCandidateImage>,local_res8,UDataAsset::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARCandidateImage.InnerSingleton;
}

// UARCandidateImage @ 14cf40c70

UARCandidateImage * __thiscall
UARCandidateImage::UARCandidateImage(UARCandidateImage *this,FVTableHelper *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UARCandidateImage__6B_;
  (this->CandidateTexture).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  (this->FriendlyName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FriendlyName).Data.ArrayNum = 0;
  (this->FriendlyName).Data.ArrayMax = 0;
  return this;
}

// UARCandidateImage @ 14cf40cb0

UARCandidateImage * __thiscall
UARCandidateImage::UARCandidateImage(UARCandidateImage *this,FObjectInitializer *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UARCandidateImage__6B_;
  (this->CandidateTexture).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  (this->FriendlyName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FriendlyName).Data.ArrayNum = 0;
  (this->FriendlyName).Data.ArrayMax = 0;
  return this;
}

// ~UARCandidateImage @ 14cf43ff0

void __thiscall UARCandidateImage::~UARCandidateImage(UARCandidateImage *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UARCandidateImage__6B_;
  pFVar1 = (this->FriendlyName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDataAsset::~UDataAsset((UDataAsset *)this);
  return;
}

// GetPrivateStaticClass @ 14cf53f20

UClass * __cdecl UARCandidateImage::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARCandidateImage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARCandidateImage",
               &Z_Registration_Info_UClass_UARCandidateImage.InnerSingleton,
               StaticRegisterNativesUARCandidateImage,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UARCandidateImage>,
               InternalVTableHelperCtorCaller<UARCandidateImage>,local_res8,UDataAsset::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARCandidateImage.InnerSingleton;
}

// StaticRegisterNativesUARCandidateImage @ 14cf60e60

void __cdecl UARCandidateImage::StaticRegisterNativesUARCandidateImage(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UARCandidateImage_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetCandidateTexture @ 14cf6dc00

void __cdecl
UARCandidateImage::execGetCandidateTexture(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[1].field_0x8;
  return;
}

// execGetFriendlyName @ 14cf6e190

void __cdecl UARCandidateImage::execGetFriendlyName(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::FString::operator=(param_3,(FString *)&param_1[1].field_0x10);
  return;
}

// execGetOrientation @ 14cf6f330

void __cdecl UARCandidateImage::execGetOrientation(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = *(undefined1 *)(param_1 + 2);
  return;
}

// execGetPhysicalHeight @ 14cf6f390

void __cdecl
UARCandidateImage::execGetPhysicalHeight(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[1].field_0x24;
  return;
}

// execGetPhysicalWidth @ 14cf6f3c0

void __cdecl UARCandidateImage::execGetPhysicalWidth(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[1].field_0x20;
  return;
}

