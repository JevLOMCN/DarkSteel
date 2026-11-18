// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LevelSequence
// Functions: 5

// StaticStruct @ 146c475e0

UScriptStruct * __cdecl FLevelSequenceBindingReference::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLevelSequenceBindingReference.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LevelSequence();
    Z_Registration_Info_UScriptStruct_FLevelSequenceBindingReference.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceBindingReference,(UObject *)pUVar1,
                         L"LevelSequenceBindingReference");
  }
  return Z_Registration_Info_UScriptStruct_FLevelSequenceBindingReference.OuterSingleton;
}

// FLevelSequenceBindingReference @ 146c4e020

FLevelSequenceBindingReference * __thiscall
FLevelSequenceBindingReference::FLevelSequenceBindingReference
          (FLevelSequenceBindingReference *this,UObject *param_1,UObject *param_2)

{
  FString *pFVar1;
  FUtf8String *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  FLevelSequenceBindingReference *pFVar7;
  UClass *pUVar8;
  FString *pFVar9;
  FString local_78;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  FString local_58;
  TStringView<wchar_t> local_48;
  FSoftObjectPath local_38;
  
  pFVar1 = &this->ObjectPath;
  (this->PackageName_DEPRECATED).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PackageName_DEPRECATED).Data.ArrayNum = 0;
  (this->PackageName_DEPRECATED).Data.ArrayMax = 0;
  (this->ExternalObjectPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->ExternalObjectPath).AssetPath.PackageName.Number = 0;
  (this->ExternalObjectPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->ExternalObjectPath).AssetPath.AssetName.Number = 0;
  (this->ExternalObjectPath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ExternalObjectPath).SubPathString.Data.ArrayNum = 0;
  (this->ExternalObjectPath).SubPathString.Data.ArrayMax = 0;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectPath).Data.ArrayNum = 0;
  (this->ObjectPath).Data.ArrayMax = 0;
  if (((param_2 == (UObject *)0x0) || (param_1 == (UObject *)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContext && InObject",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LevelSequence\\Private\\LevelSequenceBindingReference.cpp"
                         ,0x1e,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar7 = (FLevelSequenceBindingReference *)(*pcVar5)();
    return pFVar7;
  }
  pUVar8 = Z_Construct_UClass_UWorld_NoRegister();
  iVar3 = (int)pUVar8->_padding_;
  if (((*(int *)(*(longlong *)&param_2->field_0x10 + 0x38) < iVar3) ||
      ((longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
       &pUVar8->_padding_)) &&
     (bVar6 = UObjectBaseUtility::IsIn((UObjectBaseUtility *)param_1,param_2), bVar6)) {
    pFVar9 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_58,param_2);
    if (pFVar1 != pFVar9) {
      pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pFVar1->Data).AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
      (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->ObjectPath).Data.ArrayNum = (pFVar9->Data).ArrayNum;
      (this->ObjectPath).Data.ArrayMax = (pFVar9->Data).ArrayMax;
      (pFVar9->Data).ArrayNum = 0;
      (pFVar9->Data).ArrayMax = 0;
    }
  }
  else {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_78,(UObject *)0x0);
    local_68 = local_78.Data.AllocatorInstance.Data;
    local_38.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_38.AssetPath.PackageName.Number = 0;
    local_38.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_38.AssetPath.AssetName.Number = 0;
    local_38.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.SubPathString.Data.ArrayNum = 0;
    local_38.SubPathString.Data.ArrayMax = 0;
    if (local_78.Data.ArrayNum == 0) {
      iStack_60 = 0;
    }
    else {
      iStack_60 = local_78.Data.ArrayNum + -1;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_78.Data.AllocatorInstance.Data;
    FSoftObjectPath::SetPath(&local_38,&local_48);
    pFVar2 = &(this->ExternalObjectPath).SubPathString;
    (this->ExternalObjectPath).AssetPath.PackageName = local_38.AssetPath.PackageName;
    (this->ExternalObjectPath).AssetPath.AssetName = local_38.AssetPath.AssetName;
    if (pFVar2 != &local_38.SubPathString) {
      pFVar4 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pFVar2->Data).AllocatorInstance.Data = local_38.SubPathString.Data.AllocatorInstance.Data;
      (this->ExternalObjectPath).SubPathString.Data.ArrayNum = local_38.SubPathString.Data.ArrayNum;
      (this->ExternalObjectPath).SubPathString.Data.ArrayMax = local_38.SubPathString.Data.ArrayMax;
      local_38.SubPathString.Data.ArrayNum = 0;
      local_38.SubPathString.Data.ArrayMax = 0;
      local_38.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    local_58.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
    if (local_38.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.SubPathString.Data.AllocatorInstance.Data);
      local_58.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return this;
}

// operator== @ 146c4f730

bool __thiscall
FLevelSequenceBindingReference::operator==
          (FLevelSequenceBindingReference *this,FLevelSequenceBindingReference *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  bVar2 = FSoftObjectPath::operator==(&this->ExternalObjectPath,&param_1->ExternalObjectPath);
  if (bVar2) {
    iVar3 = (this->ObjectPath).Data.ArrayNum;
    iVar1 = (param_1->ObjectPath).Data.ArrayNum;
    if (iVar3 == iVar1) {
      if (iVar3 < 2) {
        return true;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(this->ObjectPath).Data.AllocatorInstance.Data,
                         (wchar_t *)(param_1->ObjectPath).Data.AllocatorInstance.Data);
      bVar2 = iVar3 == 0;
    }
    else {
      bVar2 = iVar3 + iVar1 == 1;
    }
    if (bVar2) {
      return true;
    }
  }
  return false;
}

// PostSerialize @ 146c582b0

void __thiscall
FLevelSequenceBindingReference::PostSerialize
          (FLevelSequenceBindingReference *this,FArchive *param_1)

{
  FString local_28;
  TStringView<wchar_t> local_18;
  
  if (((param_1->field_0x28 & 1) != 0) && (1 < (this->PackageName_DEPRECATED).Data.ArrayNum)) {
    ::FString::ConcatFC((FString *)&local_18,&this->PackageName_DEPRECATED,L".");
    ::FString::ConcatFF(&local_28,(FString *)&local_18,&this->ObjectPath);
    if (local_18.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_18.DataPtr);
    }
    local_18.Size = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      local_18.Size = 0;
    }
    local_18.DataPtr = (wchar_t *)local_28.Data.AllocatorInstance.Data;
    FSoftObjectPath::SetPath(&this->ExternalObjectPath,&local_18);
    ::FString::Reset(&this->ObjectPath,0);
    ::FString::Reset(&this->PackageName_DEPRECATED,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Resolve @ 146c59590

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UObject * __thiscall
FLevelSequenceBindingReference::Resolve
          (FLevelSequenceBindingReference *this,UObject *param_1,FResolveBindingParams *param_2)

{
  FName FVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  size_t sVar6;
  UObject *pUVar7;
  FString *pFVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  int iVar13;
  UObject *local_res10;
  UObject *local_res20;
  FScriptContainerElement *local_88;
  undefined4 uStack_7c;
  TStringView<wchar_t> local_78;
  FString local_68;
  FString local_58;
  FSoftObjectPath local_48;
  
  if (param_1 == (UObject *)0x0) {
LAB_146c597d2:
    local_res20 = (UObject *)0x0;
    if ((((this->ExternalObjectPath).AssetPath.PackageName != (FName)0x0) &&
        (param_2->WorldPartitionResolveData != (FWorldPartitionResolveData *)0x0)) &&
       (bVar4 = FWorldPartitionResolveData::ResolveObject
                          (param_2->WorldPartitionResolveData,param_2->StreamingWorld,
                           &this->ExternalObjectPath,&local_res20), bVar4)) {
      return local_res20;
    }
    local_48.SubPathString.Data.ArrayNum = (this->ExternalObjectPath).SubPathString.Data.ArrayNum;
    sVar6 = (size_t)local_48.SubPathString.Data.ArrayNum;
    local_48.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.AssetPath.PackageName = (this->ExternalObjectPath).AssetPath.PackageName;
    local_48.AssetPath.AssetName = (this->ExternalObjectPath).AssetPath.AssetName;
    pFVar10 = (this->ExternalObjectPath).SubPathString.Data.AllocatorInstance.Data;
    if (local_48.SubPathString.Data.ArrayNum == 0) {
      local_48.SubPathString.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_48.SubPathString.Data.ArrayNum,0,
                 (ForAnyElementType *)&local_48.SubPathString,local_48.SubPathString.Data.ArrayNum,
                 &local_48.SubPathString.Data.ArrayMax);
      memcpy(local_48.SubPathString.Data.AllocatorInstance.Data,pFVar10,sVar6);
    }
    FSoftObjectPath::PreSavePath(&local_48,(bool *)0x0);
    pUVar7 = FSoftObjectPath::ResolveObject(&local_48);
    if (local_48.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.SubPathString.Data.AllocatorInstance.Data);
    }
    return pUVar7;
  }
  pUVar5 = Z_Construct_UClass_AActor_NoRegister();
  iVar9 = (int)pUVar5->_padding_;
  if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar9) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar9 * 8) !=
      &pUVar5->_padding_)) {
    pUVar5 = Z_Construct_UClass_ULevel_NoRegister();
    iVar9 = (int)pUVar5->_padding_;
    if ((iVar9 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       (((((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar9 * 8) ==
           &pUVar5->_padding_ &&
          (FVar1 = (param_2->StreamedLevelAssetPath).PackageName, FVar1 != (FName)0x0)) &&
         ((this->ExternalObjectPath).AssetPath.PackageName == FVar1)) &&
        ((this->ExternalObjectPath).AssetPath.AssetName ==
         (param_2->StreamedLevelAssetPath).AssetName)))) {
      bVar4 = UE::IsSavingPackage((UObject *)0x0);
      if ((bVar4) || (GIsGarbageCollecting != false)) {
        return (UObject *)0x0;
      }
      pFVar10 = (FScriptContainerElement *)0x0;
      plVar2 = *(longlong **)&param_1->field_0x20;
      local_res10 = (UObject *)0x0;
      if ((plVar2 == (longlong *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContextOuter",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LevelSequence\\Private\\LevelSequenceBindingReference.cpp"
                             ,0x55,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pUVar7 = (UObject *)(*pcVar3)();
        return pUVar7;
      }
      iVar13 = 0;
      pcVar3 = *(code **)(*plVar2 + 0x88);
      iVar9 = (this->ExternalObjectPath).SubPathString.Data.ArrayNum;
      iVar12 = iVar9 + -1;
      if (iVar9 == 0) {
        iVar12 = iVar13;
      }
      pFVar8 = ::FString::ConstructFromPtrSize
                         (&local_68,
                          (uchar *)(this->ExternalObjectPath).SubPathString.Data.AllocatorInstance.
                                   Data,iVar12);
      if (&local_58 != pFVar8) {
        pFVar10 = (pFVar8->Data).AllocatorInstance.Data;
        (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar13 = (pFVar8->Data).ArrayNum;
        (pFVar8->Data).ArrayNum = 0;
        (pFVar8->Data).ArrayMax = 0;
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      pFVar11 = (FScriptContainerElement *)L"";
      if (iVar13 != 0) {
        pFVar11 = pFVar10;
      }
      (*pcVar3)(plVar2,pFVar11,&local_res10,0);
      if (pFVar10 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar10);
      }
      return local_res10;
    }
    goto LAB_146c597d2;
  }
  if ((this->ExternalObjectPath).AssetPath.PackageName != (FName)0x0) {
    return (UObject *)0x0;
  }
  bVar4 = UE::IsSavingPackage((UObject *)0x0);
  if (bVar4) {
    return (UObject *)0x0;
  }
  if (GIsGarbageCollecting != false) {
    return (UObject *)0x0;
  }
  if ((this->ObjectPath).Data.ArrayNum == 0) {
    local_88 = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    local_88 = (this->ObjectPath).Data.AllocatorInstance.Data;
    iVar9 = 0;
    if (local_88 == (FScriptContainerElement *)0x0) goto LAB_146c5962d;
  }
  sVar6 = wcslen((wchar_t *)local_88);
  iVar9 = (int)sVar6;
LAB_146c5962d:
  pUVar5 = Z_Construct_UClass_UObject_NoRegister();
  local_78._12_4_ = uStack_7c;
  local_78.Size = iVar9;
  local_78.DataPtr = (wchar_t *)local_88;
  pUVar7 = StaticFindObject(pUVar5,param_1,&local_78,None);
  return pUVar7;
}

