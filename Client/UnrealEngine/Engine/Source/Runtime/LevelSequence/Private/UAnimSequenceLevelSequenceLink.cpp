// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LevelSequence
// Functions: 9

// StaticClass @ 146c45ac0

UClass * __cdecl UAnimSequenceLevelSequenceLink::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimSequenceLevelSequenceLink.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LevelSequence",L"AnimSequenceLevelSequenceLink",
               &Z_Registration_Info_UClass_UAnimSequenceLevelSequenceLink.InnerSingleton,
               StaticRegisterNativesUAnimSequenceLevelSequenceLink,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimSequenceLevelSequenceLink>,
               InternalVTableHelperCtorCaller<UAnimSequenceLevelSequenceLink>,local_res8,
               UAssetUserData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimSequenceLevelSequenceLink.InnerSingleton;
}

// UAnimSequenceLevelSequenceLink @ 146c4e4f0

UAnimSequenceLevelSequenceLink * __thiscall
UAnimSequenceLevelSequenceLink::UAnimSequenceLevelSequenceLink
          (UAnimSequenceLevelSequenceLink *this,FVTableHelper *param_1)

{
  UAssetUserData::UAssetUserData((UAssetUserData *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimSequenceLevelSequenceLink__6B_;
  (this->SkelTrackGuid).A = 0;
  (this->SkelTrackGuid).B = 0;
  (this->SkelTrackGuid).C = 0;
  (this->SkelTrackGuid).D = 0;
  (this->PathToLevelSequence).AssetPath.PackageName.ComparisonIndex = 0;
  (this->PathToLevelSequence).AssetPath.PackageName.Number = 0;
  (this->PathToLevelSequence).AssetPath.AssetName.ComparisonIndex = 0;
  (this->PathToLevelSequence).AssetPath.AssetName.Number = 0;
  (this->PathToLevelSequence).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PathToLevelSequence).SubPathString.Data.ArrayNum = 0;
  (this->PathToLevelSequence).SubPathString.Data.ArrayMax = 0;
  return this;
}

// UAnimSequenceLevelSequenceLink @ 146c4e540

UAnimSequenceLevelSequenceLink * __thiscall
UAnimSequenceLevelSequenceLink::UAnimSequenceLevelSequenceLink
          (UAnimSequenceLevelSequenceLink *this,FObjectInitializer *param_1)

{
  UAssetUserData::UAssetUserData((UAssetUserData *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimSequenceLevelSequenceLink__6B_;
  (this->SkelTrackGuid).A = 0;
  (this->SkelTrackGuid).B = 0;
  (this->SkelTrackGuid).C = 0;
  (this->SkelTrackGuid).D = 0;
  (this->PathToLevelSequence).AssetPath.PackageName.ComparisonIndex = 0;
  (this->PathToLevelSequence).AssetPath.PackageName.Number = 0;
  (this->PathToLevelSequence).AssetPath.AssetName.ComparisonIndex = 0;
  (this->PathToLevelSequence).AssetPath.AssetName.Number = 0;
  (this->PathToLevelSequence).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PathToLevelSequence).SubPathString.Data.ArrayNum = 0;
  (this->PathToLevelSequence).SubPathString.Data.ArrayMax = 0;
  return this;
}

// ~UAnimSequenceLevelSequenceLink @ 146c4f030

void __thiscall
UAnimSequenceLevelSequenceLink::~UAnimSequenceLevelSequenceLink
          (UAnimSequenceLevelSequenceLink *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UAnimSequenceLevelSequenceLink__6B_;
  pFVar1 = (this->PathToLevelSequence).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UAssetUserData::~UAssetUserData((UAssetUserData *)this);
  return;
}

// GetPrivateStaticClass @ 146c55530

UClass * __cdecl UAnimSequenceLevelSequenceLink::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimSequenceLevelSequenceLink.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LevelSequence",L"AnimSequenceLevelSequenceLink",
               &Z_Registration_Info_UClass_UAnimSequenceLevelSequenceLink.InnerSingleton,
               StaticRegisterNativesUAnimSequenceLevelSequenceLink,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimSequenceLevelSequenceLink>,
               InternalVTableHelperCtorCaller<UAnimSequenceLevelSequenceLink>,local_res8,
               UAssetUserData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimSequenceLevelSequenceLink.InnerSingleton;
}

// IsEditorOnly @ 146c57a80

bool __thiscall UAnimSequenceLevelSequenceLink::IsEditorOnly(UAnimSequenceLevelSequenceLink *this)

{
  return true;
}

// ResolveLevelSequence @ 146c59e80

ULevelSequence * __thiscall
UAnimSequenceLevelSequenceLink::ResolveLevelSequence(UAnimSequenceLevelSequenceLink *this)

{
  int iVar1;
  ULevelSequence *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (ULevelSequence *)
           FSoftObjectPath::TryLoad(&this->PathToLevelSequence,(FUObjectSerializeContext *)0x0);
  if (pUVar2 != (ULevelSequence *)0x0) {
    pUVar3 = ULevelSequence::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (ULevelSequence *)0x0;
}

// SetLevelSequence @ 146c5b510

void __thiscall
UAnimSequenceLevelSequenceLink::SetLevelSequence
          (UAnimSequenceLevelSequenceLink *this,ULevelSequence *param_1)

{
  FScriptContainerElement *pFVar1;
  FUtf8String *pFVar2;
  FSoftObjectPath local_28;
  
  local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_28.AssetPath.PackageName.Number = 0;
  local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetPath.AssetName.Number = 0;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.SubPathString.Data.ArrayNum = 0;
  local_28.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_28,(UObject *)param_1);
  (this->PathToLevelSequence).AssetPath.PackageName = local_28.AssetPath.PackageName;
  (this->PathToLevelSequence).AssetPath.AssetName = local_28.AssetPath.AssetName;
  pFVar2 = &(this->PathToLevelSequence).SubPathString;
  if (pFVar2 != &local_28.SubPathString) {
    pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar2->Data).AllocatorInstance.Data = local_28.SubPathString.Data.AllocatorInstance.Data;
    (this->PathToLevelSequence).SubPathString.Data.ArrayNum = local_28.SubPathString.Data.ArrayNum;
    (this->PathToLevelSequence).SubPathString.Data.ArrayMax = local_28.SubPathString.Data.ArrayMax;
    local_28.SubPathString.Data.ArrayNum = 0;
    local_28.SubPathString.Data.ArrayMax = 0;
    local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUAnimSequenceLevelSequenceLink @ 146c5c530

void __cdecl
UAnimSequenceLevelSequenceLink::StaticRegisterNativesUAnimSequenceLevelSequenceLink(void)

{
  return;
}

