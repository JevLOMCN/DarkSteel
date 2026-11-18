// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1487d6dc0

UClass * __cdecl USubtitleAssetUserData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubtitleAssetUserData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SubtitleAssetUserData",
               &Z_Registration_Info_UClass_USubtitleAssetUserData.InnerSingleton,
               StaticRegisterNativesUSubtitleAssetUserData,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USubtitleAssetUserData>,
               InternalVTableHelperCtorCaller<USubtitleAssetUserData>,local_res8,
               UAssetUserData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubtitleAssetUserData.InnerSingleton;
}

// USubtitleAssetUserData @ 14880a080

USubtitleAssetUserData * __thiscall
USubtitleAssetUserData::USubtitleAssetUserData(USubtitleAssetUserData *this,FVTableHelper *param_1)

{
  UAssetUserData::UAssetUserData((UAssetUserData *)this,param_1);
  this->_padding_ = (longlong)&___7USubtitleAssetUserData__6B_;
  (this->Subtitles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Subtitles).ArrayNum = 0;
  (this->Subtitles).ArrayMax = 0;
  return this;
}

// USubtitleAssetUserData @ 14880a0c0

USubtitleAssetUserData * __thiscall
USubtitleAssetUserData::USubtitleAssetUserData
          (USubtitleAssetUserData *this,FObjectInitializer *param_1)

{
  UAssetUserData::UAssetUserData((UAssetUserData *)this,param_1);
  this->_padding_ = (longlong)&___7USubtitleAssetUserData__6B_;
  (this->Subtitles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Subtitles).ArrayNum = 0;
  (this->Subtitles).ArrayMax = 0;
  return this;
}

// ~USubtitleAssetUserData @ 14880d410

void __thiscall USubtitleAssetUserData::~USubtitleAssetUserData(USubtitleAssetUserData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7USubtitleAssetUserData__6B_;
  DestructItems<FSubtitleAssetData,int>
            ((FSubtitleAssetData *)(this->Subtitles).AllocatorInstance.Data,
             (this->Subtitles).ArrayNum);
  pFVar1 = (this->Subtitles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UAssetUserData::~UAssetUserData((UAssetUserData *)this);
  return;
}

// GetPrivateStaticClass @ 148840a80

UClass * __cdecl USubtitleAssetUserData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubtitleAssetUserData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SubtitleAssetUserData",
               &Z_Registration_Info_UClass_USubtitleAssetUserData.InnerSingleton,
               StaticRegisterNativesUSubtitleAssetUserData,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USubtitleAssetUserData>,
               InternalVTableHelperCtorCaller<USubtitleAssetUserData>,local_res8,
               UAssetUserData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubtitleAssetUserData.InnerSingleton;
}

// StaticRegisterNativesUSubtitleAssetUserData @ 14885acc0

void __cdecl USubtitleAssetUserData::StaticRegisterNativesUSubtitleAssetUserData(void)

{
  return;
}

