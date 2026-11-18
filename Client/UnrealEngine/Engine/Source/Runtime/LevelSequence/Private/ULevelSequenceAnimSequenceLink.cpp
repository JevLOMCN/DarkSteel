// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LevelSequence
// Functions: 7

// StaticClass @ 146c46190

UClass * __cdecl ULevelSequenceAnimSequenceLink::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelSequenceAnimSequenceLink.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LevelSequence",L"LevelSequenceAnimSequenceLink",
               &Z_Registration_Info_UClass_ULevelSequenceAnimSequenceLink.InnerSingleton,
               StaticRegisterNativesULevelSequenceAnimSequenceLink,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULevelSequenceAnimSequenceLink>,
               InternalVTableHelperCtorCaller<ULevelSequenceAnimSequenceLink>,local_res8,
               UAssetUserData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelSequenceAnimSequenceLink.InnerSingleton;
}

// ULevelSequenceAnimSequenceLink @ 146c4e720

ULevelSequenceAnimSequenceLink * __thiscall
ULevelSequenceAnimSequenceLink::ULevelSequenceAnimSequenceLink
          (ULevelSequenceAnimSequenceLink *this,FVTableHelper *param_1)

{
  UAssetUserData::UAssetUserData((UAssetUserData *)this,param_1);
  this->_padding_ = (longlong)&___7ULevelSequenceAnimSequenceLink__6B_;
  (this->AnimSequenceLinks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimSequenceLinks).ArrayNum = 0;
  (this->AnimSequenceLinks).ArrayMax = 0;
  return this;
}

// ULevelSequenceAnimSequenceLink @ 146c4e760

ULevelSequenceAnimSequenceLink * __thiscall
ULevelSequenceAnimSequenceLink::ULevelSequenceAnimSequenceLink
          (ULevelSequenceAnimSequenceLink *this,FObjectInitializer *param_1)

{
  UAssetUserData::UAssetUserData((UAssetUserData *)this,param_1);
  this->_padding_ = (longlong)&___7ULevelSequenceAnimSequenceLink__6B_;
  (this->AnimSequenceLinks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimSequenceLinks).ArrayNum = 0;
  (this->AnimSequenceLinks).ArrayMax = 0;
  return this;
}

// ~ULevelSequenceAnimSequenceLink @ 146c4f120

void __thiscall
ULevelSequenceAnimSequenceLink::~ULevelSequenceAnimSequenceLink
          (ULevelSequenceAnimSequenceLink *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ULevelSequenceAnimSequenceLink__6B_;
  DestructItems<FLevelSequenceAnimSequenceLinkItem,int>
            ((FLevelSequenceAnimSequenceLinkItem *)(this->AnimSequenceLinks).AllocatorInstance.Data,
             (this->AnimSequenceLinks).ArrayNum);
  pFVar1 = (this->AnimSequenceLinks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UAssetUserData::~UAssetUserData((UAssetUserData *)this);
  return;
}

// GetPrivateStaticClass @ 146c55820

UClass * __cdecl ULevelSequenceAnimSequenceLink::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelSequenceAnimSequenceLink.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LevelSequence",L"LevelSequenceAnimSequenceLink",
               &Z_Registration_Info_UClass_ULevelSequenceAnimSequenceLink.InnerSingleton,
               StaticRegisterNativesULevelSequenceAnimSequenceLink,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULevelSequenceAnimSequenceLink>,
               InternalVTableHelperCtorCaller<ULevelSequenceAnimSequenceLink>,local_res8,
               UAssetUserData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelSequenceAnimSequenceLink.InnerSingleton;
}

// IsEditorOnly @ 146c57a90

bool __thiscall ULevelSequenceAnimSequenceLink::IsEditorOnly(ULevelSequenceAnimSequenceLink *this)

{
  return true;
}

// StaticRegisterNativesULevelSequenceAnimSequenceLink @ 146c5c5a0

void __cdecl
ULevelSequenceAnimSequenceLink::StaticRegisterNativesULevelSequenceAnimSequenceLink(void)

{
  return;
}

