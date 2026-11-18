// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LevelSequence
// Functions: 3

// StaticStruct @ 146c45eb0

UScriptStruct * __cdecl FLevelSequenceAnimSequenceLinkItem::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLevelSequenceAnimSequenceLinkItem.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LevelSequence();
    Z_Registration_Info_UScriptStruct_FLevelSequenceAnimSequenceLinkItem.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem,
                         (UObject *)pUVar1,L"LevelSequenceAnimSequenceLinkItem");
  }
  return Z_Registration_Info_UScriptStruct_FLevelSequenceAnimSequenceLinkItem.OuterSingleton;
}

// ResolveAnimSequence @ 146c598e0

UAnimSequence * __thiscall
FLevelSequenceAnimSequenceLinkItem::ResolveAnimSequence(FLevelSequenceAnimSequenceLinkItem *this)

{
  int iVar1;
  UAnimSequence *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UAnimSequence *)
           FSoftObjectPath::TryLoad(&this->PathToAnimSequence,(FUObjectSerializeContext *)0x0);
  if (pUVar2 != (UAnimSequence *)0x0) {
    pUVar3 = Z_Construct_UClass_UAnimSequence_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UAnimSequence *)0x0;
}

// SetAnimSequence @ 146c5af90

void __thiscall
FLevelSequenceAnimSequenceLinkItem::SetAnimSequence
          (FLevelSequenceAnimSequenceLinkItem *this,UAnimSequence *param_1)

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
  (this->PathToAnimSequence).AssetPath.PackageName = local_28.AssetPath.PackageName;
  (this->PathToAnimSequence).AssetPath.AssetName = local_28.AssetPath.AssetName;
  pFVar2 = &(this->PathToAnimSequence).SubPathString;
  if (pFVar2 != &local_28.SubPathString) {
    pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar2->Data).AllocatorInstance.Data = local_28.SubPathString.Data.AllocatorInstance.Data;
    (this->PathToAnimSequence).SubPathString.Data.ArrayNum = local_28.SubPathString.Data.ArrayNum;
    (this->PathToAnimSequence).SubPathString.Data.ArrayMax = local_28.SubPathString.Data.ArrayMax;
    local_28.SubPathString.Data.ArrayNum = 0;
    local_28.SubPathString.Data.ArrayMax = 0;
    local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

