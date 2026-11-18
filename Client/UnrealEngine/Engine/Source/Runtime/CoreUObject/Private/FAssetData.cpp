// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 35

// StaticStruct @ 141e6aa30

UScriptStruct * __cdecl FAssetData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAssetData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UScriptStruct_FAssetData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAssetData,(UObject *)pUVar1,L"AssetData");
  }
  return Z_Registration_Info_UScriptStruct_FAssetData.OuterSingleton;
}

// GetTagValue<FName> @ 141e762d0

bool __thiscall FAssetData::GetTagValue<FName>(FAssetData *this,FName param_1,FName *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FName FVar4;
  FName *pFVar5;
  int iVar6;
  FValueHandle local_res8;
  undefined8 *local_res20;
  FName local_10;
  
  FAssetDataTagMapSharedView::FindTag(&this->TagsAndValues,(FName)&local_res20);
  if (local_res20 == (undefined8 *)0x0) {
    return false;
  }
  if ((longlong)local_res20 < 0) {
    local_res8.Id = SUB84(local_res20,0);
    local_res8.StoreIndex = (uint)((ulonglong)local_res20 >> 0x20) & 0x7fffffff;
    FVar4 = FixedTagPrivate::FValueHandle::AsName(&local_res8);
    *param_2 = *(FName *)FVar4;
    return true;
  }
  if (local_res20 == (undefined8 *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                       ,0x587,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  iVar6 = *(int *)(local_res20 + 1) + -1;
  if (*(int *)(local_res20 + 1) == 0) {
    iVar6 = 0;
  }
  pFVar5 = ::FName::FName(&local_10,iVar6,(wchar_t *)*local_res20,FNAME_Add);
  *param_2 = *pFVar5;
  return true;
}

// GetTagValueRef<FName> @ 141e763c0

FName __thiscall FAssetData::GetTagValueRef<FName>(FAssetData *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  FName *pFVar4;
  int iVar5;
  FValueHandle local_res8;
  undefined8 *local_res10;
  FName local_18 [2];
  
  FAssetDataTagMapSharedView::FindTag(&this->TagsAndValues,(FName)&local_res10);
  if (local_res10 == (undefined8 *)0x0) {
    *(undefined8 *)param_1 = 0;
    return param_1;
  }
  if ((longlong)local_res10 < 0) {
    local_res8.Id = SUB84(local_res10,0);
    local_res8.StoreIndex = (uint)((ulonglong)local_res10 >> 0x20) & 0x7fffffff;
    FVar3 = FixedTagPrivate::FValueHandle::AsName(&local_res8);
    *(undefined8 *)param_1 = *(undefined8 *)FVar3;
    return param_1;
  }
  if (local_res10 == (undefined8 *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                       ,0x587,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FName)(*pcVar1)();
      return FVar3;
    }
  }
  iVar5 = *(int *)(local_res10 + 1) + -1;
  if (*(int *)(local_res10 + 1) == 0) {
    iVar5 = 0;
  }
  pFVar4 = ::FName::FName(local_18,iVar5,(wchar_t *)*local_res10,FNAME_Add);
  *(FName *)param_1 = *pFVar4;
  return param_1;
}

// FAssetData @ 141e83290

FAssetData * __thiscall
FAssetData::FAssetData
          (FAssetData *this,FString *param_1,FString *param_2,FTopLevelAssetPath *param_3,
          FAssetDataTagMap *param_4,TArrayView<int_const_,int> *param_5,uint param_6)

{
  FName FVar1;
  FName FVar2;
  FAssetDataTagMap *pFVar3;
  int iVar4;
  FName *pFVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  int iVar8;
  wchar_t *pwVar9;
  FScriptContainerElement *pFVar10;
  ForAnyElementType FVar11;
  FString local_28;
  
  if ((param_1->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&this->PackageName,pwVar9);
  pFVar3 = param_4;
  FVar1 = param_3->PackageName;
  FVar2 = param_3->AssetName;
  (this->PackagePath).ComparisonIndex = 0;
  (this->PackagePath).Number = 0;
  (this->AssetName).ComparisonIndex = 0;
  (this->AssetName).Number = 0;
  (this->AssetClass).ComparisonIndex = 0;
  (this->AssetClass).Number = 0;
  (this->AssetClassPath).PackageName = FVar1;
  (this->AssetClassPath).AssetName = FVar2;
  (this->ChunkArrayRegistryHandle).Index = -1;
  (this->TagsAndValues).field0_0x0.Loose = (FAssetDataTagMap *)0x0;
  (this->TaggedAssetBundles).Object = (FAssetBundleData *)0x0;
  (this->TaggedAssetBundles).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ChunkIDs).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  this->PackageFlags = param_6;
  (this->ChunkIDs).ArrayNum = 0;
  (this->ChunkIDs).ArrayMax = 2;
  SetTagsAndAssetBundles(this,param_4);
  pFVar6 = (param_1->Data).AllocatorInstance.Data;
  iVar4 = (param_1->Data).ArrayNum;
  pFVar10 = pFVar6 + (longlong)iVar4 * 2;
  do {
    if (pFVar10 == pFVar6) goto LAB_141e8334f;
    pFVar10 = pFVar10 + -2;
  } while (*(short *)pFVar10 != 0x2f);
  iVar7 = (int)((longlong)pFVar10 - (longlong)pFVar6 >> 1);
  if (iVar7 == -1) {
LAB_141e8334f:
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = iVar4;
    if (iVar4 == 0) {
      local_28.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar4,0,(ForAnyElementType *)&local_28,iVar4,&local_28.Data.ArrayMax);
      memcpy(local_28.Data.AllocatorInstance.Data,pFVar6,(longlong)iVar4 * 2);
    }
  }
  else {
    iVar8 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar8 = 0;
    }
    if (iVar7 < iVar8) {
      iVar8 = iVar7;
    }
    iVar7 = 0;
    if (0 < iVar8) {
      iVar7 = iVar8;
    }
    pFVar10 = (FScriptContainerElement *)L"";
    if (iVar4 != 0) {
      pFVar10 = pFVar6;
    }
    ::FString::ConstructFromPtrSize(&local_28,(wchar_t *)pFVar10,iVar7);
  }
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar11.Data = local_28.Data.AllocatorInstance.Data;
  }
  pFVar5 = ::FName::FName((FName *)&param_4,(wchar_t *)FVar11.Data);
  this->PackagePath = *pFVar5;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  iVar4 = (param_2->Data).ArrayNum;
  pFVar10 = (param_2->Data).AllocatorInstance.Data;
  iVar7 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar7 = 0;
  }
  pFVar6 = pFVar10 + ((longlong)iVar7 + -1) * 2;
  while ((pFVar6 != pFVar10 + -2 &&
         (((-(ulonglong)(*(ushort *)pFVar6 < 0x40) & 0x400400000000000) >>
           ((byte)*(ushort *)pFVar6 & 0x3f) & 1) == 0))) {
    pFVar6 = pFVar6 + -2;
  }
  iVar8 = iVar7 - (int)((longlong)(pFVar6 + (2 - (longlong)pFVar10)) >> 1);
  iVar4 = iVar7;
  if (iVar8 < iVar7) {
    iVar4 = iVar8;
  }
  iVar8 = 0;
  if (0 < iVar4) {
    iVar8 = iVar4;
  }
  pFVar5 = ::FName::FName((FName *)&param_4,iVar8,
                          (wchar_t *)(pFVar10 + ((longlong)iVar7 - (longlong)iVar8) * 2),FNAME_Add);
  this->AssetName = *pFVar5;
  SetChunkIDs(this,param_5);
  DestructItems<TTuple<FName,FString>,int>
            ((TTuple<FName,FString> *)pFVar3->_padding_,(int)pFVar3->_padding_);
  if ((void *)pFVar3->_padding_ != (void *)0x0) {
    FMemory::Free((void *)pFVar3->_padding_);
  }
  return this;
}

// FAssetData @ 141e83500

/* WARNING: Enum "Type": Some values do not have unique names */

FAssetData * __thiscall
FAssetData::FAssetData
          (FAssetData *this,FString *param_1,FString *param_2,FName param_3,
          FAssetDataTagMap *param_4,TArrayView<int_const_,int> *param_5,uint param_6)

{
  FAssetDataTagMap *pFVar1;
  FTopLevelAssetPath *pFVar2;
  TArrayView<int_const_,int> local_68;
  FTopLevelAssetPath local_58;
  FTopLevelAssetPath local_48;
  FAssetDataTagMap local_38;
  
  pFVar1 = FAssetDataTagMap::FAssetDataTagMap(&local_38,param_4);
  local_68.DataPtr = param_5->DataPtr;
  local_68.ArrayNum = param_5->ArrayNum;
  local_68._12_4_ = *(undefined4 *)&param_5->field_0xc;
  pFVar2 = TryConvertShortClassNameToPathName(&local_48,param_3,Warning);
  local_58.PackageName = pFVar2->PackageName;
  local_58.AssetName = pFVar2->AssetName;
  FAssetData(this,param_1,param_2,&local_58,pFVar1,&local_68,param_6);
  DestructItems<TTuple<FName,FString>,int>
            ((TTuple<FName,FString> *)param_4->_padding_,(int)param_4->_padding_);
  if ((void *)param_4->_padding_ != (void *)0x0) {
    FMemory::Free((void *)param_4->_padding_);
  }
  return this;
}

// FAssetData @ 141e835e0

FAssetData * __thiscall
FAssetData::FAssetData(FAssetData *this,UObject *param_1,ECreationFlags param_2)

{
  FAssetData(this,param_1,param_2,Uncategorized);
  return this;
}

// FAssetData @ 141e83600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FAssetData * __thiscall
FAssetData::FAssetData
          (FAssetData *this,UObject *param_1,ECreationFlags param_2,EAssetRegistryTagsCaller param_3
          )

{
  code *pcVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  UPackage *pUVar5;
  FName *pFVar6;
  FString *pFVar7;
  FAssetRegistryTagsContext FVar8;
  FAssetData *pFVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  ulonglong uVar12;
  ForAnyElementType FVar13;
  undefined1 auStackY_188 [32];
  FString local_140;
  FName local_130;
  FString local_128;
  FScriptContainerElement *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  TArrayView<int_const_,int> local_108;
  FName local_f8;
  FAssetRegistryTagsContext local_f0;
  TStringView<wchar_t> local_e8;
  FString local_d8;
  undefined1 local_c8 [72];
  undefined4 local_80;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  (this->ChunkArrayRegistryHandle).Index = -1;
  (this->PackageName).ComparisonIndex = 0;
  (this->PackageName).Number = 0;
  (this->PackagePath).ComparisonIndex = 0;
  (this->PackagePath).Number = 0;
  (this->AssetName).ComparisonIndex = 0;
  (this->AssetName).Number = 0;
  (this->AssetClass).ComparisonIndex = 0;
  (this->AssetClass).Number = 0;
  (this->AssetClassPath).PackageName.ComparisonIndex = 0;
  (this->AssetClassPath).PackageName.Number = 0;
  (this->AssetClassPath).AssetName.ComparisonIndex = 0;
  (this->AssetClassPath).AssetName.Number = 0;
  this->PackageFlags = 0;
  (this->TagsAndValues).field0_0x0.Loose = (FAssetDataTagMap *)0x0;
  (this->TaggedAssetBundles).Object = (FAssetBundleData *)0x0;
  (this->TaggedAssetBundles).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ChunkIDs).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  (this->ChunkIDs).ArrayNum = 0;
  (this->ChunkIDs).ArrayMax = 2;
  if (param_1 != (UObject *)0x0) {
    pUVar5 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_1);
    uVar2 = *(undefined4 *)((longlong)&pUVar5->_padding_ + 4);
    (this->PackageName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&pUVar5->_padding_;
    (this->PackageName).Number = uVar2;
    local_130 = (FName)pUVar5->_padding_;
    ::FName::ToString(&local_130,&local_128);
    FVar13.Data = local_128.Data.AllocatorInstance.Data;
    pFVar11 = local_128.Data.AllocatorInstance.Data + (longlong)local_128.Data.ArrayNum * 2;
    do {
      if (pFVar11 == local_128.Data.AllocatorInstance.Data) goto LAB_141e836df;
      pFVar11 = pFVar11 + -2;
    } while (*(wchar_t *)pFVar11 != L'/');
    iVar10 = (int)((longlong)pFVar11 - (longlong)local_128.Data.AllocatorInstance.Data >> 1);
    if (iVar10 == -1) {
LAB_141e836df:
      local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_140.Data.ArrayNum = local_128.Data.ArrayNum;
      if (local_128.Data.ArrayNum == 0) {
        local_140.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_128.Data.ArrayNum,0,(ForAnyElementType *)&local_140,
                   local_128.Data.ArrayNum,&local_140.Data.ArrayMax);
        memcpy(local_140.Data.AllocatorInstance.Data,FVar13.Data,
               (longlong)local_128.Data.ArrayNum * 2);
      }
    }
    else {
      iVar4 = local_128.Data.ArrayNum + -1;
      if (local_128.Data.ArrayNum == 0) {
        iVar4 = 0;
      }
      if (iVar10 < iVar4) {
        iVar4 = iVar10;
      }
      iVar10 = 0;
      if (0 < iVar4) {
        iVar10 = iVar4;
      }
      FVar13.Data = (FScriptContainerElement *)L"";
      if (local_128.Data.ArrayNum != 0) {
        FVar13.Data = local_128.Data.AllocatorInstance.Data;
      }
      ::FString::ConstructFromPtrSize(&local_140,(wchar_t *)FVar13.Data,iVar10);
    }
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_140.Data.ArrayNum != 0) {
      FVar13.Data = local_140.Data.AllocatorInstance.Data;
    }
    pFVar6 = ::FName::FName(&local_f8,(wchar_t *)FVar13.Data);
    this->PackagePath = *pFVar6;
    if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
    uVar2 = *(undefined4 *)&param_1->field_0x1c;
    (this->AssetName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_1->field_0x18;
    (this->AssetName).Number = uVar2;
    pFVar7 = UObjectBaseUtility::GetPathName
                       (*(UObjectBaseUtility **)&param_1->field_0x10,&local_d8,(UObject *)0x0);
    local_118 = (pFVar7->Data).AllocatorInstance.Data;
    iVar10 = (pFVar7->Data).ArrayNum;
    iStack_110 = iVar10 + -1;
    if (iVar10 == 0) {
      iStack_110 = 0;
    }
    local_e8._12_4_ = uStack_10c;
    local_e8.Size = iStack_110;
    local_e8.DataPtr = (wchar_t *)local_118;
    FTopLevelAssetPath::TrySetPath(&this->AssetClassPath,&local_e8);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if ((param_2 & SkipAssetRegistryTagsGathering) == None) {
      FAssetRegistryTagsContextData::FAssetRegistryTagsContextData
                ((FAssetRegistryTagsContextData *)local_c8,param_1,param_3);
      FVar8.Data = (FAssetRegistryTagsContextData *)
                   FAssetRegistryTagsContext::FAssetRegistryTagsContext
                             (&local_f0,(FAssetRegistryTagsContextData *)local_c8);
      UObject::GetAssetRegistryTags(param_1,FVar8,this);
      local_80 = 0;
      if ((void *)local_c8._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_c8._64_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_c8);
    }
    uVar12 = (ulonglong)_tls_index;
    this->PackageFlags = (uint)pUVar5->PackageFlagsPrivate;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar12 * 8) + 0x9d4c) <
         `public:_class_TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_UPackage::GetChunkIDs(void)const___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_class_TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_UPackage::GetChunkIDs(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_class_TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_UPackage::GetChunkIDs(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      atexit(`UPackage::GetChunkIDs'::__l2::_dynamic_atexit_destructor_for__Dummy__);
      _Init_thread_footer(&`public:_class_TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_UPackage::GetChunkIDs(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    iVar10 = DAT_155015f08;
    local_108.DataPtr = _Dummy;
    if ((DAT_155015f08 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar9 = (FAssetData *)(*pcVar1)();
      return pFVar9;
    }
    local_108.ArrayNum = iVar10;
    SetChunkIDs(this,&local_108);
  }
  return this;
}

// FAssetData @ 141e83950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FAssetData * __thiscall
FAssetData::FAssetData
          (FAssetData *this,FName param_1,FName param_2,FName param_3,FName param_4,
          FAssetDataTagMap *param_5,TArrayView<int_const_,int> *param_6,uint param_7)

{
  FName FVar1;
  FName FVar2;
  FAssetDataTagMap *pFVar3;
  FTopLevelAssetPath *pFVar4;
  undefined1 auStack_8e8 [32];
  FName local_8c8 [2];
  TArrayView<int_const_,int> local_8b8;
  FTopLevelAssetPath local_8a8;
  FAssetDataTagMap local_898;
  TStringBuilderBase<wchar_t> local_878;
  wchar_t local_858 [1035];
  wchar_t local_42 [5];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_8e8;
  pFVar3 = FAssetDataTagMap::FAssetDataTagMap(&local_898,param_5);
  local_8b8.DataPtr = param_6->DataPtr;
  local_8b8.ArrayNum = param_6->ArrayNum;
  local_8b8._12_4_ = *(undefined4 *)&param_6->field_0xc;
  pFVar4 = TryConvertShortClassNameToPathName(&local_8a8,param_4,Warning);
  FVar1 = pFVar4->PackageName;
  FVar2 = pFVar4->AssetName;
  this->PackageName = param_1;
  this->PackagePath = param_2;
  this->AssetName = param_3;
  (this->AssetClass).ComparisonIndex = 0;
  (this->AssetClass).Number = 0;
  (this->AssetClassPath).PackageName = FVar1;
  (this->AssetClassPath).AssetName = FVar2;
  (this->TagsAndValues).field0_0x0.Loose = (FAssetDataTagMap *)0x0;
  (this->TaggedAssetBundles).Object = (FAssetBundleData *)0x0;
  (this->TaggedAssetBundles).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ChunkIDs).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  (this->ChunkArrayRegistryHandle).Index = -1;
  this->PackageFlags = param_7;
  (this->ChunkIDs).ArrayNum = 0;
  (this->ChunkIDs).ArrayMax = 2;
  SetTagsAndAssetBundles(this,pFVar3);
  local_8c8[0] = this->PackageName;
  local_878.Base = local_858;
  local_878.bIsDynamic = false;
  local_878.bIsExternal = false;
  local_878.CurPos = local_858;
  local_878.End = local_42;
  ::FName::AppendString(local_8c8,&local_878);
  if (local_878.End < local_878.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_878,1);
  }
  *local_878.CurPos = L'.';
  local_878.CurPos = local_878.CurPos + 1;
  ::FName::AppendString(&this->AssetName,&local_878);
  SetChunkIDs(this,&local_8b8);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_878);
  DestructItems<TTuple<FName,FString>,int>
            ((TTuple<FName,FString> *)pFVar3->_padding_,(int)pFVar3->_padding_);
  if ((void *)pFVar3->_padding_ != (void *)0x0) {
    FMemory::Free((void *)pFVar3->_padding_);
  }
  DestructItems<TTuple<FName,FString>,int>
            ((TTuple<FName,FString> *)param_5->_padding_,(int)param_5->_padding_);
  if ((void *)param_5->_padding_ != (void *)0x0) {
    FMemory::Free((void *)param_5->_padding_);
  }
  return this;
}

// FAssetData @ 141e83b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FAssetData * __thiscall
FAssetData::FAssetData
          (FAssetData *this,FName param_1,FName param_2,FName param_3,FTopLevelAssetPath *param_4,
          FAssetDataTagMap *param_5,TArrayView<int_const_,int> *param_6,uint param_7)

{
  FName FVar1;
  FName FVar2;
  undefined1 auStack_888 [32];
  FName local_868 [2];
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1035];
  wchar_t local_22 [5];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_888;
  this->PackageName = param_1;
  FVar1 = param_4->PackageName;
  FVar2 = param_4->AssetName;
  this->PackagePath = param_2;
  this->AssetName = param_3;
  (this->AssetClass).ComparisonIndex = 0;
  (this->AssetClass).Number = 0;
  (this->AssetClassPath).PackageName = FVar1;
  (this->AssetClassPath).AssetName = FVar2;
  (this->TagsAndValues).field0_0x0.Loose = (FAssetDataTagMap *)0x0;
  (this->TaggedAssetBundles).Object = (FAssetBundleData *)0x0;
  (this->TaggedAssetBundles).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ChunkIDs).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  (this->ChunkArrayRegistryHandle).Index = -1;
  this->PackageFlags = param_7;
  (this->ChunkIDs).ArrayNum = 0;
  (this->ChunkIDs).ArrayMax = 2;
  SetTagsAndAssetBundles(this,param_5);
  local_868[0] = this->PackageName;
  local_858.Base = local_838;
  local_858.bIsDynamic = false;
  local_858.bIsExternal = false;
  local_858.CurPos = local_838;
  local_858.End = local_22;
  ::FName::AppendString(local_868,&local_858);
  if (local_858.End < local_858.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_858,1);
  }
  *local_858.CurPos = L'.';
  local_858.CurPos = local_858.CurPos + 1;
  ::FName::AppendString(&this->AssetName,&local_858);
  SetChunkIDs(this,param_6);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
  DestructItems<TTuple<FName,FString>,int>
            ((TTuple<FName,FString> *)param_5->_padding_,(int)param_5->_padding_);
  if ((void *)param_5->_padding_ != (void *)0x0) {
    FMemory::Free((void *)param_5->_padding_);
  }
  return this;
}

// operator() @ 141e8cac0

void __thiscall
`FAssetData::NetworkWrite'::__l8::<lambda_1>::operator()
          (void *this,TTuple<FName,FAssetTagValueRef> *param_1)

{
  FCbWriter *pFVar1;
  FName FVar2;
  void *_Src;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  ForAnyElementType _Src_00;
  FValueHandle local_res8;
  ForAnyElementType local_98;
  int local_90;
  int local_8c;
  FString local_88;
  FString local_78;
  char *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  char *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  TStringView<char8_t> local_48;
  TStringView<char8_t> local_38;
  
  local_res8.StoreIndex = 0;
  FCbWriter::BeginObject(*(FCbWriter **)this);
  pFVar1 = *(FCbWriter **)this;
  local_68 = "K";
  bVar4 = true;
  bVar5 = false;
  uStack_60 = 1;
  local_48._12_4_ = uStack_5c;
  local_48.Size = 1;
  local_48.DataPtr = "K";
  FCbWriter::SetNameOrAddString(pFVar1,&local_48);
  FVar2.ComparisonIndex.Value = *(uint *)&param_1->field_0x0;
  FVar2.Number = *(uint *)&param_1->field_0x4;
  FCbWriter::operator<<(pFVar1,FVar2);
  pFVar1 = *(FCbWriter **)this;
  local_58 = "V";
  uStack_50 = 1;
  local_38._12_4_ = uStack_4c;
  local_38.Size = 1;
  local_38.DataPtr = "V";
  FCbWriter::SetNameOrAddString(pFVar1,&local_38);
  lVar6 = *(longlong *)&param_1->field_0x8;
  if (lVar6 < 0) {
    local_res8.Id = SUB84(lVar6,0);
    local_res8.StoreIndex = (uint)((ulonglong)lVar6 >> 0x20) & 0x7fffffff;
    FixedTagPrivate::FValueHandle::AsString<1>(&local_res8,&local_78);
    _Src_00.Data = local_78.Data.AllocatorInstance.Data;
  }
  else {
    if (lVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                         ,0x587,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_98.Data = (FScriptContainerElement *)0x0;
    local_90 = *(int *)(*(undefined8 **)&param_1->field_0x8 + 1);
    lVar6 = (longlong)local_90;
    _Src = (void *)**(undefined8 **)&param_1->field_0x8;
    if (local_90 == 0) {
      local_8c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_90,0,&local_98,local_90,&local_8c);
      memcpy(local_98.Data,_Src,lVar6 * 2);
    }
    bVar4 = false;
    bVar5 = true;
    _Src_00.Data = local_98.Data;
    local_78.Data.ArrayNum = local_90;
  }
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = local_78.Data.ArrayNum;
  if (local_78.Data.ArrayNum == 0) {
    local_88.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_78.Data.ArrayNum,0,(ForAnyElementType *)&local_88,local_78.Data.ArrayNum,
               &local_88.Data.ArrayMax);
    memcpy(local_88.Data.AllocatorInstance.Data,_Src_00.Data,(longlong)local_78.Data.ArrayNum * 2);
  }
  if ((bVar5) && (local_98.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_98.Data);
  }
  if ((bVar4) && (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  FCbWriter::operator<<(pFVar1,&local_88);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  FCbWriter::EndObject(*(FCbWriter **)this);
  return;
}

// AddChunkID @ 141e8e1d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FAssetData::AddChunkID(FAssetData *this,int param_1)

{
  void *_Src;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FSetElementId FVar4;
  ForElementType<int> FVar5;
  undefined4 extraout_var;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  undefined1 auStackY_d8 [32];
  int local_88 [2];
  TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> local_80;
  FAssetData *local_68;
  ForElementType<int> local_60;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_88[0] = param_1;
  local_68 = this;
  GetChunkIDs(this,(TArrayView<int_const_,int> *)&local_80.AllocatorInstance.SecondaryData);
  uVar8 = 0;
  iVar3 = local_80.ArrayNum;
  if (0 < iVar3) {
    uVar11 = local_80._16_8_ & 0xffffffff;
    do {
      uVar9 = (uint)uVar11;
      uVar10 = uVar9 >> 1;
      uVar11 = (ulonglong)uVar10;
      iVar6 = uVar10 + (int)uVar8;
      if (*(int *)((longlong)local_80.AllocatorInstance.SecondaryData + (longlong)iVar6 * 4) <
          local_88[0]) {
        uVar8 = (ulonglong)(iVar6 + (uVar9 & 1));
      }
    } while (uVar10 != 0);
    if ((int)uVar8 < 0) goto LAB_141e8e2a8;
  }
  uVar9 = (uint)uVar8;
  if ((int)uVar9 < iVar3) {
    uVar10 = 0;
    if ((int)uVar9 < iVar3) {
      uVar10 = ~uVar9 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (*(int *)((longlong)local_80.AllocatorInstance.SecondaryData + uVar8 * 4) == local_88[0]) {
      return;
    }
  }
LAB_141e8e2a8:
  iVar7 = (int)uVar8;
  iVar6 = iVar3;
  if (iVar7 < iVar3) {
    iVar6 = iVar7;
  }
  iVar13 = 0;
  if (0 < iVar6) {
    iVar13 = iVar6;
  }
  if ((iVar13 < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar6 = iVar3;
  if (iVar3 - iVar7 < iVar3) {
    iVar6 = iVar3 - iVar7;
  }
  iVar7 = 0;
  if (0 < iVar6) {
    iVar7 = iVar6;
  }
  _Src = (void *)((longlong)local_80.AllocatorInstance.SecondaryData +
                 ((longlong)iVar3 - (longlong)iVar7) * 4);
  if ((iVar7 < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_4c = 2;
  uVar9 = iVar3 + 1;
  local_60.SecondaryData = (ForElementType<int>)0x0;
  local_50 = 0;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  if (2 < (int)uVar9) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,uVar9,&local_60,0,&local_4c);
  }
  if (((local_80.AllocatorInstance.SecondaryData == (ForElementType<int>)0x0) && (iVar13 != 0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr != nullptr || Count == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x9c1,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                    (4,4,iVar13,&local_60,&local_50,&local_4c);
  FVar5 = (ForElementType<int>)&local_60;
  if (local_60.SecondaryData != (ForElementType<int>)0x0) {
    FVar5 = local_60.SecondaryData;
  }
  if (iVar13 != 0) {
    memcpy((void *)((longlong)FVar5 + (longlong)iVar3 * 4),
           (void *)local_80.AllocatorInstance.SecondaryData,(longlong)iVar13 << 2);
  }
  FVar5 = (ForElementType<int>)&local_60;
  if (local_60.SecondaryData != (ForElementType<int>)0x0) {
    FVar5 = local_60.SecondaryData;
  }
  if ((ulonglong)FVar5 <= local_88) {
    FVar5 = (ForElementType<int>)&local_60;
    if (local_60.SecondaryData != (ForElementType<int>)0x0) {
      FVar5 = local_60.SecondaryData;
    }
    if ((local_88 < (int *)((longlong)FVar5 + (longlong)local_4c * 4)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (local_50 == local_4c) {
    local_50 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                         (0x404,&local_60,&local_4c);
  }
  lVar12 = (longlong)local_50;
  local_50 = local_50 + 1;
  FVar5 = (ForElementType<int>)&local_60;
  if (local_60.SecondaryData != (ForElementType<int>)0x0) {
    FVar5 = local_60.SecondaryData;
  }
  *(int *)((longlong)FVar5 + lVar12 * 4) = local_88[0];
  if (((_Src == (void *)0x0) && (iVar7 != 0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr != nullptr || Count == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x9c1,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                    (4,4,iVar7,&local_60,&local_50,&local_4c);
  FVar5 = (ForElementType<int>)&local_60;
  if (local_60.SecondaryData != (ForElementType<int>)0x0) {
    FVar5 = local_60.SecondaryData;
  }
  if (iVar7 != 0) {
    memcpy((void *)((longlong)FVar5 + (longlong)iVar3 * 4),_Src,(longlong)iVar7 * 4);
  }
  FVar4 = UE::AssetRegistry::FChunkArrayRegistry::FindOrAddSorted
                    (&UE::AssetRegistry::GChunkArrayRegistry,&local_80);
  (local_68->ChunkArrayRegistryHandle).Index = *(int *)CONCAT44(extraout_var,FVar4.Index);
  if (local_60.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_60.SecondaryData);
  }
  return;
}

// AppendObjectPath @ 141e905a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FAssetData::AppendObjectPath(FAssetData *this,FString *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_8a8 [32];
  FString local_888;
  FString local_878;
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1035];
  wchar_t local_32 [5];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_8a8;
  local_868.CurPos = local_848;
  local_868.Base = local_848;
  local_868.bIsDynamic = false;
  local_868.bIsExternal = false;
  local_868.End = local_32;
  if ((this->PackageName != (FName)0x0) && (this->AssetName != (FName)0x0)) {
    ::FName::AppendString(&this->PackageName,&local_868);
    if (local_868.End < local_868.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,1);
    }
    *local_868.CurPos = L'.';
    local_868.CurPos = local_868.CurPos + 1;
    ::FName::AppendString(&this->AssetName,&local_868);
  }
  pFVar1 = ::FString::ConstructFromPtrSize
                     (&local_888,local_868.Base,
                      (int)((longlong)local_868.CurPos - (longlong)local_868.Base >> 1));
  pFVar2 = (FScriptContainerElement *)0x0;
  iVar3 = 0;
  if (&local_878 != pFVar1) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar3 = (pFVar1->Data).ArrayNum;
    (pFVar1->Data).ArrayNum = 0;
    (pFVar1->Data).ArrayMax = 0;
  }
  if (local_888.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_888.Data.AllocatorInstance.Data);
  }
  iVar4 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar4 = 0;
  }
  ::FString::AppendChars(param_1,(wchar_t *)pFVar2,iVar4);
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
  return;
}

// ClearChunkIDs @ 141e91fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FAssetData::ClearChunkIDs(FAssetData *this)

{
  undefined1 auStack_58 [32];
  FIdentityFunctor local_38;
  TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> local_34;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  local_34._12_8_ = (void *)0x0;
  local_34.ArrayMax = 0;
  local_1c = 2;
  AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TLess<void>_>
            ((int *)(local_34.AllocatorInstance.InlineData + 4),0,local_38,(TLess<void>)local_38);
  UE::AssetRegistry::FChunkArrayRegistry::FindOrAddSorted
            (&UE::AssetRegistry::GChunkArrayRegistry,&local_34);
  (this->ChunkArrayRegistryHandle).Index = local_34.AllocatorInstance.InlineData._0_4_;
  if ((void *)local_34._12_8_ != (void *)0x0) {
    FMemory::Free((void *)local_34._12_8_);
  }
  return;
}

// GetChunkArrayRegistryAllocatedSize @ 141e9f670

ulong64 __cdecl FAssetData::GetChunkArrayRegistryAllocatedSize(void)

{
  ulong64 uVar1;
  
  uVar1 = UE::AssetRegistry::FChunkArrayRegistry::GetAllocatedSize
                    (&UE::AssetRegistry::GChunkArrayRegistry);
  return uVar1;
}

// GetChunkIDs @ 141e9f690

/* WARNING: Enum "Type": Some values do not have unique names */

TArrayView<int_const_,int> * __thiscall
FAssetData::GetChunkIDs(FAssetData *this,TArrayView<int_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  TArrayView<int_const_,int> *pTVar5;
  longlong lVar6;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_c;
  
  if (((this->ChunkIDs).ArrayNum != 0) && (1 < (byte)LogAssetData._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAssetData);
  }
  iVar1 = (this->ChunkArrayRegistryHandle).Index;
  __return_storage_ptr__->DataPtr = (int *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  if (iVar1 != -1) {
    AcquireSRWLockShared((PSRWLOCK)&UE::AssetRegistry::GChunkArrayRegistry.Lock);
    lVar6 = (longlong)iVar1 * 0x20 +
            UE::AssetRegistry::GChunkArrayRegistry.ChunkArrays.Elements._0_8_;
    iVar1 = *(int *)(lVar6 + 0x10);
    lVar4 = *(longlong *)(lVar6 + 8);
    if (*(longlong *)(lVar6 + 8) == 0) {
      lVar4 = lVar6;
    }
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<int_const_,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
    local_18 = (undefined4)lVar4;
    uStack_14 = (undefined4)((ulonglong)lVar4 >> 0x20);
    *(undefined4 *)&__return_storage_ptr__->DataPtr = local_18;
    *(undefined4 *)((longlong)&__return_storage_ptr__->DataPtr + 4) = uStack_14;
    __return_storage_ptr__->ArrayNum = iVar1;
    *(undefined4 *)&__return_storage_ptr__->field_0xc = uStack_c;
    ReleaseSRWLockShared((PSRWLOCK)&UE::AssetRegistry::GChunkArrayRegistry.Lock);
  }
  return __return_storage_ptr__;
}

// GetClass @ 141e9f760

UClass * __thiscall FAssetData::GetClass(FAssetData *this,EResolveClass param_1)

{
  FTopLevelAssetPath *this_00;
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  FString *pFVar4;
  size_t sVar5;
  FName *pFVar6;
  FNameEntryId FVar7;
  TStringView<wchar_t> local_48;
  undefined1 local_38 [16];
  FString local_28 [2];
  
  if ((this->PackageName == (FName)0x0) || (this->AssetName == (FName)0x0)) {
    return (UClass *)0x0;
  }
  this_00 = &this->AssetClassPath;
  FVar1 = this_00->PackageName;
  FVar2 = (this->AssetClassPath).AssetName;
  pUVar3 = Z_Construct_UClass_UClass_NoRegister();
  local_38._0_8_ = FVar1;
  local_38._8_8_ = FVar2;
  pUVar3 = (UClass *)StaticFindObject(pUVar3,(FTopLevelAssetPath *)local_38,None);
  if (pUVar3 != (UClass *)0x0) {
    return pUVar3;
  }
  pFVar4 = FTopLevelAssetPath::ToString(this_00,(FString *)local_38);
  FLinkerLoad::FindNewPathNameForClass((FString *)&local_48,pFVar4,false);
  if ((FName)local_38._0_8_ != (FName)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  FVar7.Value = 0;
  pUVar3 = (UClass *)0x0;
  if (1 < local_48.Size) {
    local_38._0_8_ = local_48.DataPtr;
    if ((FName)local_48.DataPtr != (FName)0x0) {
      sVar5 = wcslen(local_48.DataPtr);
      FVar7.Value = (uint)sVar5;
    }
    local_38._8_4_ = FVar7.Value;
    pUVar3 = Z_Construct_UClass_UClass_NoRegister();
    pUVar3 = (UClass *)StaticFindObject(pUVar3,(UObject *)0x0,(TStringView<wchar_t> *)local_38,None)
    ;
  }
  if ((FName)local_48.DataPtr != (FName)0x0) {
    FMemory::Free(local_48.DataPtr);
  }
  if (pUVar3 != (UClass *)0x0) {
    return pUVar3;
  }
  if (param_1 != Yes) {
    return (UClass *)0x0;
  }
  local_48.Size = 0;
  local_48._12_4_ = 0;
  local_48.DataPtr = (wchar_t *)0x0;
  pFVar6 = (FName *)FTopLevelAssetPath::ToString(this_00,local_28);
  if (pFVar6[1].ComparisonIndex.Value == 0) {
    local_38._0_8_ = L"";
  }
  else {
    local_38._0_8_ = *pFVar6;
    FVar7.Value = 0;
    if ((FName)local_38._0_8_ == (FName)0x0) goto LAB_141e9f89d;
  }
  sVar5 = wcslen((wchar_t *)local_38._0_8_);
  FVar7.Value = (uint)sVar5;
LAB_141e9f89d:
  local_38._8_4_ = FVar7.Value;
  pUVar3 = Z_Construct_UClass_UClass_NoRegister();
  pUVar3 = (UClass *)
           StaticLoadObject(pUVar3,(UObject *)0x0,(TStringView<wchar_t> *)local_38,&local_48,0,
                            (UPackageMap *)0x0,true,(FLinkerInstancingContext *)0x0);
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  return pUVar3;
}

// GetObjectPathString @ 141ea19e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FAssetData::GetObjectPathString(FAssetData *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  undefined1 auStack_888 [32];
  FString local_868;
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1035];
  wchar_t local_22 [5];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_888;
  local_858.CurPos = local_838;
  local_858.Base = local_838;
  local_858.bIsDynamic = false;
  local_858.bIsExternal = false;
  local_858.End = local_22;
  if ((this->PackageName != (FName)0x0) && (this->AssetName != (FName)0x0)) {
    ::FName::AppendString(&this->PackageName,&local_858);
    if (local_858.End < local_858.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_858,1);
    }
    *local_858.CurPos = L'.';
    local_858.CurPos = local_858.CurPos + 1;
    ::FName::AppendString(&this->AssetName,&local_858);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar2 = ::FString::ConstructFromPtrSize
                     (&local_868,local_858.Base,
                      (int)((longlong)local_858.CurPos - (longlong)local_858.Base >> 1));
  if (__return_storage_ptr__ != pFVar2) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_868.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_868.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
  return __return_storage_ptr__;
}

// GetPrimaryAssetId @ 141ea1e70

FPrimaryAssetId * __thiscall
FAssetData::GetPrimaryAssetId(FAssetData *this,FPrimaryAssetId *__return_storage_ptr__)

{
  FName local_res18;
  FName local_res20;
  
  GetTagValueRef<FName>(this,(FName)&local_res18);
  GetTagValueRef<FName>(this,(FName)&local_res20);
  if ((local_res18 != (FName)0x0) && (local_res20 != (FName)0x0)) {
    (__return_storage_ptr__->PrimaryAssetType).Name = local_res18;
    __return_storage_ptr__->PrimaryAssetName = local_res20;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->PrimaryAssetType).Name = (FName)0x0;
  (__return_storage_ptr__->PrimaryAssetName).ComparisonIndex = 0;
  (__return_storage_ptr__->PrimaryAssetName).Number = 0;
  return __return_storage_ptr__;
}

// GetSoftObjectPath @ 141ea2b90

FSoftObjectPath * __thiscall
FAssetData::GetSoftObjectPath(FAssetData *this,FSoftObjectPath *__return_storage_ptr__)

{
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,this->PackageName,this->AssetName);
  local_18.PackageName = local_28.PackageName;
  local_18.AssetName = local_28.AssetName;
  FSoftObjectPath::ConstructFromAssetPath(__return_storage_ptr__,&local_18);
  return __return_storage_ptr__;
}

// GetVersePath @ 141ea3240

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FVersePath * __thiscall
FAssetData::GetVersePath(FAssetData *this,FVersePath *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  wchar_t *pwVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  UClass *this_00;
  FName *pFVar8;
  IPluginManager *pIVar9;
  FVersePath *pFVar10;
  undefined8 *puVar11;
  FName FVar12;
  int iVar13;
  int iVar14;
  undefined1 auStack_1cf8 [32];
  bool local_1cd8;
  char local_1cd7;
  FName local_1cd0;
  FVersePath local_1cc8;
  FVersePath local_1cb8;
  FTopLevelAssetPath local_1ca8;
  longlong *local_1c98;
  TReferenceControllerBase<1> *local_1c90;
  undefined1 local_1c88 [8];
  FName local_1c80;
  FString local_1c78;
  FString local_1c68;
  FScriptContainerElement *local_1c58;
  int iStack_1c50;
  undefined4 uStack_1c4c;
  FString local_1c48;
  FName local_1c38;
  FName local_1c30;
  TStringBuilderBase<wchar_t> *local_1c28;
  TStringBuilderBase<wchar_t> *local_1c20;
  FName local_1c18 [2];
  TStringView<wchar_t> local_1c08;
  TStringView<wchar_t> local_1bf8;
  wchar_t *local_1be8;
  undefined4 local_1be0;
  int local_1bdc;
  FTopLevelAssetPath local_1bd8;
  FName local_1bc8 [2];
  TStringView<wchar_t> local_1bb8;
  undefined4 local_1ba8;
  undefined4 uStack_1ba4;
  int iStack_1ba0;
  undefined4 uStack_1b9c;
  TStringView<wchar_t> local_1b98;
  TStringBuilderBase<wchar_t> local_1b88;
  FScriptContainerElement local_1b68 [256];
  TStringBuilderBase<wchar_t> local_1a68;
  wchar_t local_1a48 [128];
  TStringBuilderBase<wchar_t> local_1948;
  wchar_t local_1928 [1035];
  wchar_t local_1112 [5];
  TStringBuilderBase<wchar_t> local_1108;
  wchar_t local_10e8 [1035];
  wchar_t local_8d2 [5];
  TStringBuilderBase<wchar_t> local_8c8;
  wchar_t local_8a8 [1035];
  wchar_t local_92 [5];
  TStringView<wchar_t> local_88;
  undefined8 local_78;
  int iStack_70;
  wchar_t *local_68;
  undefined4 local_60;
  int local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1cf8;
  if ((this->PackageName == (FName)0x0) || (this->AssetName == (FName)0x0)) {
    (__return_storage_ptr__->PathString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->PathString).Data.ArrayNum = 0;
    (__return_storage_ptr__->PathString).Data.ArrayMax = 0;
    return __return_storage_ptr__;
  }
  this_00 = Z_Construct_UClass_UVerseClass_NoRegister();
  UStruct::GetStructPathName((UStruct *)this_00,&local_1bd8);
  if (((this->AssetClassPath).PackageName == local_1bd8.PackageName) &&
     ((this->AssetClassPath).AssetName == local_1bd8.AssetName)) {
    local_1c80.ComparisonIndex.Value = 0;
    local_1c80.Number = 0;
    local_1cd0.ComparisonIndex.Value = 0;
    local_1cd0.Number = 0;
    bVar5 = GetTagValue<FName>(this,UVerseClass::PackageVersePathTagName,&local_1c80);
    if ((bVar5) &&
       (bVar5 = GetTagValue<FName>(this,UVerseClass::PackageRelativeVersePathTagName,&local_1cd0),
       bVar5)) {
      local_1108.Base = local_10e8;
      local_1108.bIsDynamic = false;
      local_1108.bIsExternal = false;
      local_1108.CurPos = local_10e8;
      local_1108.End = local_8d2;
      ::FName::ToString(&local_1c80,&local_1108);
      local_1948.Base = local_1928;
      local_1948.bIsDynamic = false;
      local_1948.bIsExternal = false;
      local_1948.CurPos = local_1928;
      local_1948.End = local_1112;
      ::FName::ToString(&local_1cd0,&local_1948);
      local_1bf8.DataPtr = local_1108.Base;
      local_1bf8.Size = (int)((longlong)local_1108.CurPos - (longlong)local_1108.Base >> 1);
      local_1bf8._12_4_ = local_1c48.Data.ArrayMax;
      local_1be8 = local_1948.Base;
      local_1be0 = (undefined4)((longlong)local_1948.CurPos - (longlong)local_1948.Base >> 1);
      local_1cc8.PathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1cc8.PathString.Data.ArrayNum = 0;
      local_1cc8.PathString.Data.ArrayMax = 0;
      local_1bdc = local_1c48.Data.ArrayMax;
      FPaths::CombineInternal(&local_1c68,&local_1bf8,2);
      bVar5 = UE::Core::FVersePath::TryMake(&local_1cc8,&local_1c68,(FText *)0x0);
      if (local_1c68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c68.Data.AllocatorInstance.Data);
      }
      if (bVar5) {
        (__return_storage_ptr__->PathString).Data.AllocatorInstance.Data =
             local_1cc8.PathString.Data.AllocatorInstance.Data;
        (__return_storage_ptr__->PathString).Data.ArrayNum = local_1cc8.PathString.Data.ArrayNum;
        (__return_storage_ptr__->PathString).Data.ArrayMax = local_1cc8.PathString.Data.ArrayMax;
        local_1cc8.PathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1cc8.PathString.Data.ArrayNum = 0;
        local_1cc8.PathString.Data.ArrayMax = 0;
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1948);
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1108);
        return __return_storage_ptr__;
      }
      if (local_1cc8.PathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1cc8.PathString.Data.AllocatorInstance.Data);
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1948);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1108);
    }
    (__return_storage_ptr__->PathString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->PathString).Data.ArrayNum = 0;
    (__return_storage_ptr__->PathString).Data.ArrayMax = 0;
    return __return_storage_ptr__;
  }
  FVar12 = this->AssetName;
  bVar5 = UE::AssetRegistry::Private::FVersePathHelper::IsGeneratedBlueprintClass
                    (&UE::AssetRegistry::Private::GVersePathHelper,&this->AssetClassPath);
  iVar13 = 0;
  if (bVar5) {
    local_1c38 = this->AssetName;
    local_8c8.Base = local_8a8;
    local_8c8.bIsDynamic = false;
    local_8c8.bIsExternal = false;
    local_8c8.CurPos = local_8a8;
    local_8c8.End = local_92;
    ::FName::AppendString(&local_1c38,&local_8c8);
    local_1cd0 = (FName)local_8c8.Base;
    iVar14 = (int)((longlong)local_8c8.CurPos - (longlong)local_8c8.Base >> 1);
    iVar6 = iVar14;
    if (2 < iVar14) {
      iVar6 = 2;
    }
    iVar7 = iVar13;
    if (0 < iVar6) {
      iVar7 = iVar6;
    }
    if ((iVar7 == 2) &&
       (iVar6 = wcsncmp(L"_C",(wchar_t *)
                              ((longlong)local_8c8.Base + ((longlong)iVar14 - (longlong)iVar7) * 2),
                        2), iVar6 == 0)) {
      if (iVar14 + -2 < iVar14) {
        iVar14 = iVar14 + -2;
      }
      iVar6 = iVar13;
      if (0 < iVar14) {
        iVar6 = iVar14;
      }
      pFVar8 = ::FName::FName(local_1bc8,iVar6,(wchar_t *)local_1cd0,FNAME_Add);
      FVar12 = *pFVar8;
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_8c8);
  }
  local_1ca8.PackageName.ComparisonIndex.Value = 0;
  local_1ca8.PackageName.Number = 0;
  local_1ca8.AssetName.ComparisonIndex.Value = 0;
  local_1ca8.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_1ca8,this->PackageName,FVar12);
  if ((local_1ca8.PackageName == (FName)0x0) || (local_1ca8.AssetName == (FName)0x0)) {
    (__return_storage_ptr__->PathString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->PathString).Data.ArrayNum = 0;
    (__return_storage_ptr__->PathString).Data.ArrayMax = 0;
    return __return_storage_ptr__;
  }
  local_1b88.Base = (wchar_t *)local_1b68;
  local_1b88.bIsDynamic = false;
  local_1b88.bIsExternal = false;
  local_1b88.CurPos = (wchar_t *)local_1b68;
  local_1c30 = local_1ca8.PackageName;
  local_1b88.End = (wchar_t *)&local_1a68;
  ::FName::ToString(&local_1c30,&local_1b88);
  pwVar4 = local_1b88.Base;
  local_1c68.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_1b88.Base;
  iVar6 = (int)((longlong)local_1b88.CurPos - (longlong)local_1b88.Base >> 1);
  local_1bb8._12_4_ = local_1c68.Data.ArrayMax;
  local_1bb8.Size = iVar6;
  local_1bb8.DataPtr = local_1b88.Base;
  local_1cd8 = false;
  local_1c68.Data.ArrayNum = iVar6;
  FPathViews::GetMountPointNameFromPath(&local_1c08,&local_1bb8,&local_1cd8,true);
  if ((local_1c08.Size == 0) || (local_1cd8 != false)) {
    (__return_storage_ptr__->PathString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->PathString).Data.ArrayNum = 0;
    (__return_storage_ptr__->PathString).Data.ArrayMax = 0;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1b88);
    return __return_storage_ptr__;
  }
  pIVar9 = IPluginManager::Get();
  local_1ba8 = local_1c08.DataPtr._0_4_;
  uStack_1ba4 = local_1c08.DataPtr._4_4_;
  iStack_1ba0 = local_1c08.Size;
  uStack_1b9c = local_1c08._12_4_;
  (**(code **)((longlong)*pIVar9 + 0x70))(pIVar9,&local_1c98);
  if (local_1c98 != (longlong *)0x0) {
    if ((local_1c98 == (longlong *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FVersePath *)(*pcVar3)();
      return pFVar10;
    }
    puVar11 = (undefined8 *)(**(code **)(*local_1c98 + 0x78))();
    if (1 < *(int *)(puVar11 + 1)) {
      iVar7 = (iVar6 - local_1c08.Size) + -1;
      iVar14 = iVar6;
      if (iVar7 < iVar6) {
        iVar14 = iVar7;
      }
      iVar7 = iVar13;
      if (0 < iVar14) {
        iVar7 = iVar14;
      }
      pFVar1 = (FScriptContainerElement *)
               ((longlong)pwVar4 + ((longlong)iVar6 - (longlong)iVar7) * 2);
      local_1b98._12_4_ = uStack_1c4c;
      local_1c58 = pFVar1;
      iStack_1c50 = iVar7;
      local_1b98.Size = iVar7;
      local_1b98.DataPtr = (wchar_t *)pFVar1;
      iVar6 = UE::String::FindLastChar(&local_1b98,L'/',CaseSensitive);
      if (iVar6 == -1) {
        local_1c20 = &local_1b88;
        bVar5 = `FPackageName::GetVersePath'::__l21::<lambda_2>::operator()(&local_1c20);
        if (!bVar5) goto LAB_141ea36a6;
      }
      else {
        if (iVar6 == iVar7 + -1) {
          local_1c28 = &local_1b88;
          bVar5 = `FPackageName::GetVersePath'::__l18::<lambda_1>::operator()(&local_1c28);
          if (!bVar5) goto LAB_141ea36a6;
        }
        iVar14 = iVar7;
        if (iVar6 < iVar7) {
          iVar14 = iVar6;
        }
        iVar7 = iVar13;
        local_1c58 = pFVar1;
        iStack_1c50 = iVar13;
        if (0 < iVar14) {
          iVar7 = iVar14;
          iStack_1c50 = iVar14;
        }
      }
      local_1a68.Base = local_1a48;
      local_1a68.bIsDynamic = false;
      local_1a68.bIsExternal = false;
      local_1a68.CurPos = local_1a48;
      local_1a68.End = (wchar_t *)&local_1948;
      local_1c18[0] = local_1ca8.AssetName;
      ::FName::ToString(local_1c18,&local_1a68);
      local_88.DataPtr = (wchar_t *)*puVar11;
      local_88.Size = *(int *)(puVar11 + 1) + -1;
      if (*(int *)(puVar11 + 1) == 0) {
        local_88.Size = 0;
      }
      local_68 = local_1a68.Base;
      local_60 = (undefined4)((longlong)local_1a68.CurPos - (longlong)local_1a68.Base >> 1);
      local_5c = local_1c48.Data.ArrayMax;
      iStack_70 = iVar7;
      local_78 = pFVar1;
      FPaths::CombineInternal(&local_1c78,&local_88,3);
      local_1cb8.PathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1cb8.PathString.Data.ArrayNum = 0;
      local_1cb8.PathString.Data.ArrayMax = 0;
      bVar5 = UE::Core::FVersePath::TryMake(&local_1cb8,&local_1c78,(FText *)0x0);
      if (!bVar5) {
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        if ((*(uint *)(lVar2 + 0xc84) & 1) == 0) {
          *(uint *)(lVar2 + 0xc84) = *(uint *)(lVar2 + 0xc84) | 1;
          __tlregdtor(`FPackageName::GetVersePath'::__l26::
                      _dynamic_atexit_destructor_for__AlreadyLogged__);
        }
        local_1cd7 = '\0';
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                  ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(lVar2 + 0xc30),
                   (FString *)local_1c88,(bool *)&local_1c78);
        if ((local_1cd7 == '\0') && (3 < (byte)LogCore._0_1_)) {
          FTopLevelAssetPath::ToString(&local_1ca8,&local_1c48);
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
          if (local_1c48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c48.Data.AllocatorInstance.Data);
          }
        }
      }
      (__return_storage_ptr__->PathString).Data.AllocatorInstance.Data =
           local_1cb8.PathString.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->PathString).Data.ArrayNum = local_1cb8.PathString.Data.ArrayNum;
      (__return_storage_ptr__->PathString).Data.ArrayMax = local_1cb8.PathString.Data.ArrayMax;
      local_1cb8.PathString.Data.ArrayNum = 0;
      local_1cb8.PathString.Data.ArrayMax = 0;
      local_1cb8.PathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_1c78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c78.Data.AllocatorInstance.Data);
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1a68);
      goto LAB_141ea36ad;
    }
  }
LAB_141ea36a6:
  (__return_storage_ptr__->PathString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->PathString).Data.ArrayNum = 0;
  (__return_storage_ptr__->PathString).Data.ArrayMax = 0;
LAB_141ea36ad:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1c90);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1b88);
  return __return_storage_ptr__;
}

// HasSameChunkIDs @ 141ea4ed0

bool __thiscall FAssetData::HasSameChunkIDs(FAssetData *this,FAssetData *param_1)

{
  return (this->ChunkArrayRegistryHandle).Index == (param_1->ChunkArrayRegistryHandle).Index;
}

// IsRedirectorClassName @ 141ea9d40

bool __cdecl FAssetData::IsRedirectorClassName(FTopLevelAssetPath *param_1)

{
  FTopLevelAssetPath local_18;
  
  local_18.PackageName.ComparisonIndex.Value = 0;
  local_18.PackageName.Number = 0;
  local_18.AssetName.ComparisonIndex.Value = 0;
  local_18.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath
            (&local_18,UE::AssetRegistry::ScriptPackageNameCoreUObject,
             UE::AssetRegistry::ClassNameObjectRedirector);
  if ((param_1->PackageName == local_18.PackageName) && (param_1->AssetName == local_18.AssetName))
  {
    return true;
  }
  return false;
}

// IsTopLevelAsset @ 141eaa400

bool __thiscall FAssetData::IsTopLevelAsset(FAssetData *this)

{
  return true;
}

// IsTopLevelAsset @ 141eaa410

bool __cdecl FAssetData::IsTopLevelAsset(UObject *param_1)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  
  if ((param_1 != (UObject *)0x0) && (lVar2 = *(longlong *)&param_1->field_0x20, lVar2 != 0)) {
    pUVar3 = Z_Construct_UClass_UPackage_NoRegister();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      return true;
    }
  }
  return false;
}

// IsUAsset @ 141eaa460

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl FAssetData::IsUAsset(UObject *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  int iVar3;
  int iVar4;
  UPackage *pUVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_10d8 [32];
  TStringView<wchar_t> local_10b8;
  TStringBuilderBase<wchar_t> local_10a8;
  wchar_t local_1088 [1035];
  wchar_t local_872 [5];
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1035];
  wchar_t local_32 [5];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_10d8;
  if (param_1 != (UObject *)0x0) {
    pUVar5 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_1);
    local_868.bIsDynamic = false;
    local_868.bIsExternal = false;
    local_868.Base = local_848;
    local_868.CurPos = local_848;
    local_868.End = local_32;
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,(UObject *)pUVar5,&local_868);
    local_10a8.Base = local_1088;
    local_10a8.bIsDynamic = false;
    local_10a8.bIsExternal = false;
    local_10a8.CurPos = local_1088;
    local_10a8.End = local_872;
    local_10b8.DataPtr = (wchar_t *)pUVar5->_padding_;
    ::FName::AppendString((FName *)&local_10b8,&local_10a8);
    pwVar2 = local_868.Base;
    pwVar1 = local_10a8.Base;
    lVar9 = (longlong)local_868.CurPos - (longlong)local_868.Base;
    iVar8 = (int)((longlong)local_10a8.CurPos - (longlong)local_10a8.Base >> 1);
    local_10b8.Size = iVar8;
    local_10b8.DataPtr = local_10a8.Base;
    iVar3 = UE::String::FindLastChar(&local_10b8,L'/',CaseSensitive);
    iVar4 = iVar3 + 1;
    iVar6 = 0x7fffffff;
    if (iVar4 < 0) {
      iVar6 = iVar3 + -0x80000000;
    }
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    if (iVar8 < iVar4) {
      iVar4 = iVar8;
    }
    iVar3 = iVar8 - iVar4;
    if (iVar6 < iVar8 - iVar4) {
      iVar3 = iVar6;
    }
    iVar6 = 0;
    if (0 < iVar3) {
      iVar6 = iVar3;
    }
    iVar3 = (int)(lVar9 >> 1);
    if (((iVar6 == iVar3) &&
        (((iVar6 == 0 || (iVar3 == 0)) ||
         (iVar4 = FGenericPlatformStricmp::Strnicmp(pwVar1 + iVar4,pwVar2,(longlong)iVar3),
         iVar4 == 0)))) && (iVar6 == iVar3)) {
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_10a8);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
    return bVar7;
  }
  return false;
}

// NetworkWrite @ 141eaddb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FAssetData::NetworkWrite(FAssetData *this,FCbWriter *param_1,bool param_2)

{
  ForElementType<int> FVar1;
  FAssetDataTagMap *pFVar2;
  FAssetBundleData *this_00;
  uint uVar3;
  FString *pFVar4;
  ulonglong uVar5;
  ForElementType<int> FVar6;
  undefined1 auStackY_a8 [32];
  TArrayView<int_const_,int> local_68;
  TStringView<char8_t> local_58;
  undefined1 local_48 [8];
  ForElementType<int> local_40;
  uint local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  FCbWriter::BeginObject(param_1);
  if (param_2) {
    local_68.ArrayNum = 1;
    local_68.DataPtr = (int *)0x1507d6564;
    FCbWriter::SetNameOrAddString(param_1,(TStringView<char8_t> *)&local_68);
    FCbWriter::operator<<(param_1,this->PackagePath);
    local_68.ArrayNum = 1;
    local_68.DataPtr = (int *)0x1507d6568;
    FCbWriter::SetNameOrAddString(param_1,(TStringView<char8_t> *)&local_68);
    FCbWriter::operator<<(param_1,this->PackageName);
  }
  local_68.ArrayNum = 1;
  local_68.DataPtr = (int *)0x15078dce0;
  FCbWriter::SetNameOrAddString(param_1,(TStringView<char8_t> *)&local_68);
  FCbWriter::operator<<(param_1,this->AssetName);
  local_68.ArrayNum = 1;
  local_68.DataPtr = (int *)0x150649088;
  FCbWriter::SetNameOrAddString(param_1,(TStringView<char8_t> *)&local_68);
  pFVar4 = FTopLevelAssetPath::ToString(&this->AssetClassPath,(FString *)&local_58);
  FCbWriter::operator<<(param_1,pFVar4);
  if (local_58.DataPtr != (uchar *)0x0) {
    FMemory::Free(local_58.DataPtr);
  }
  if ((*(byte *)&(this->TagsAndValues).field0_0x0 & 1) == 0) {
    pFVar2 = (this->TagsAndValues).field0_0x0.Loose;
    if (pFVar2 != (FAssetDataTagMap *)0x0) {
      uVar3 = (uint)pFVar2->_padding_;
      goto LAB_141eadeef;
    }
LAB_141eadef3:
    if ((this->TaggedAssetBundles).Object == (FAssetBundleData *)0x0) goto LAB_141eae018;
  }
  else {
    uVar3 = (uint)(this->TagsAndValues).field0_0x0.Fixed.Num;
LAB_141eadeef:
    if (uVar3 == 0) goto LAB_141eadef3;
  }
  local_68.ArrayNum = 1;
  local_68.DataPtr = (int *)0x1507d656c;
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_68);
  FCbWriter::BeginArray(param_1);
  FAssetDataTagMapSharedView::ForEach<_FAssetData::NetworkWrite_::__l8::<lambda_1>_>
            (&this->TagsAndValues,(<lambda_1>)param_1);
  this_00 = (this->TaggedAssetBundles).Object;
  if (this_00 != (FAssetBundleData *)0x0) {
    local_68.DataPtr = (int *)0x0;
    local_68.ArrayNum = 0;
    local_68._12_4_ = 0;
    local_58.DataPtr = (uchar *)0x0;
    local_58.Size = 0;
    local_58._12_4_ = 0;
    FAssetBundleData::ExportTextItem
              (this_00,(FString *)&local_68,(FAssetBundleData *)&local_58,(UObject *)0x0,0,
               (UObject *)0x0);
    DestructItems<FAssetBundleEntry,int>((FAssetBundleEntry *)local_58.DataPtr,local_58.Size);
    if ((FAssetBundleEntry *)local_58.DataPtr != (FAssetBundleEntry *)0x0) {
      FMemory::Free(local_58.DataPtr);
    }
    FCbWriter::BeginObject(param_1);
    local_58.Size = 1;
    local_58.DataPtr = "K";
    FCbWriter::SetNameOrAddString(param_1,&local_58);
    FCbWriter::operator<<(param_1,GAssetBundleDataName);
    local_58.Size = 1;
    local_58.DataPtr = "V";
    FCbWriter::SetNameOrAddString(param_1,&local_58);
    FCbWriter::operator<<(param_1,(FString *)&local_68);
    FCbWriter::EndObject(param_1);
    if (local_68.DataPtr != (int *)0x0) {
      FMemory::Free(local_68.DataPtr);
    }
  }
  FCbWriter::EndArray(param_1);
LAB_141eae018:
  GetChunkIDs(this,&local_68);
  uVar3 = local_68.ArrayNum;
  if (uVar3 != 0) {
    local_40.SecondaryData = (ForElementType<int>)0x0;
    local_30 = uVar3;
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,uVar3,0,&local_40,uVar3,&local_2c);
    FVar6 = (ForElementType<int>)&local_40;
    if (local_40.SecondaryData != (ForElementType<int>)0x0) {
      FVar6 = local_40.SecondaryData;
    }
    memcpy((void *)FVar6,local_68.DataPtr,(longlong)(int)uVar3 << 2);
    local_68.ArrayNum = 1;
    local_68.DataPtr = (int *)0x1507d6570;
    FCbWriter::SetNameOrAddString(param_1,(TStringView<char8_t> *)&local_68);
    FCbWriter::BeginArray(param_1);
    uVar3 = local_30;
    uVar5 = (ulonglong)(int)local_30;
    FVar6 = (ForElementType<int>)&local_40;
    if (local_40.SecondaryData != (ForElementType<int>)0x0) {
      FVar6 = local_40.SecondaryData;
    }
    FVar1 = (ForElementType<int>)((longlong)FVar6 + uVar5 * 4);
    while( true ) {
      if ((uint)uVar5 != uVar3) {
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_48);
      }
      if (FVar6 == FVar1) break;
      FCbWriter::AddInteger(param_1,*(int *)FVar6);
      uVar5 = (ulonglong)local_30;
      FVar6 = (ForElementType<int>)((longlong)FVar6 + 4);
    }
    FCbWriter::EndArray(param_1);
    if (local_40.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_40.SecondaryData);
    }
  }
  FCbWriter::EndObject(param_1);
  return;
}

// SerializeForCacheOldVersionWithTagsAndBundles @ 141ebb580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAssetData::SerializeForCacheOldVersionWithTagsAndBundles
          (FAssetData *this,FArchive *param_1,Type param_2,
          _func___cdecl_void_FArchive_ptr_FAssetData_ptr_Type *param_3)

{
  uchar *puVar1;
  uint *puVar2;
  int *_Src;
  uint *puVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  FSetElementId FVar9;
  longlong *plVar10;
  FTopLevelAssetPath *pFVar11;
  TArrayView<int_const_,int> *pTVar12;
  undefined4 extraout_var;
  ForElementType<int> FVar13;
  int iVar14;
  int iVar15;
  undefined1 auStackY_c8 [32];
  undefined8 local_88;
  TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> local_80;
  TArrayView<int_const_,int> local_68;
  TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_88 = 0;
  if ((int)param_2 < 0xf) {
    (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_88);
  }
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->PackagePath);
  if ((int)param_2 < 0xe) {
    (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->AssetClass);
    pFVar11 = TryConvertShortClassNameToPathName
                        ((FTopLevelAssetPath *)(local_80.AllocatorInstance.InlineData + 4),
                         this->AssetClass,NoLogging);
    uVar5 = (pFVar11->PackageName).Number;
    uVar6 = (pFVar11->AssetName).ComparisonIndex.Value;
    uVar7 = (pFVar11->AssetName).Number;
    (this->AssetClassPath).PackageName.ComparisonIndex.Value =
         (pFVar11->PackageName).ComparisonIndex.Value;
    (this->AssetClassPath).PackageName.Number = uVar5;
    (this->AssetClassPath).AssetName.ComparisonIndex.Value = uVar6;
    (this->AssetClassPath).AssetName.Number = uVar7;
  }
  else {
    plVar10 = (longlong *)(**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->AssetClassPath)
    ;
    (**(code **)(*plVar10 + 0x178))(plVar10,&(this->AssetClassPath).AssetName);
  }
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,this);
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->AssetName);
  (*param_3)(param_1,this,param_2);
  local_58.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 2;
  if ((param_1->field_0x28 & 4) == 0) {
    TArrayPrivateFriend::Serialize<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
              (param_1,&local_58);
    FVar13 = (ForElementType<int>)&local_58;
    if (local_58.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FVar13 = local_58.AllocatorInstance.SecondaryData;
    }
    if ((local_58.ArrayNum != 0) && (iVar14 = local_58.ArrayNum + -1, iVar14 != 0)) {
      iVar15 = *(int *)FVar13;
      do {
        puVar1 = (uchar *)((longlong)FVar13 + 4);
        FVar13 = (ForElementType<int>)((longlong)FVar13 + 4);
        if (*(int *)puVar1 < iVar15) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Algo::IsSorted(SerializedChunkIDs)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetData.cpp"
                             ,0x30e,L"");
          if (bVar8) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          break;
        }
        iVar14 = iVar14 + -1;
        iVar15 = *(int *)puVar1;
      } while (iVar14 != 0);
    }
    FVar9 = UE::AssetRegistry::FChunkArrayRegistry::FindOrAddSorted
                      (&UE::AssetRegistry::GChunkArrayRegistry,&local_80);
    (this->ChunkArrayRegistryHandle).Index = *(int *)CONCAT44(extraout_var,FVar9.Index);
  }
  else {
    pTVar12 = GetChunkIDs(this,&local_68);
    iVar14 = pTVar12->ArrayNum;
    _Src = pTVar12->DataPtr;
    local_58.ArrayNum = iVar14;
    if ((iVar14 != 0) || (local_58.ArrayMax != 0)) {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                (4,4,iVar14,local_58.ArrayMax,&local_58.AllocatorInstance,iVar14,&local_58.ArrayMax)
      ;
      FVar13 = (ForElementType<int>)&local_58;
      if (local_58.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FVar13 = local_58.AllocatorInstance.SecondaryData;
      }
      if (iVar14 != 0) {
        memcpy((void *)FVar13,_Src,(longlong)iVar14 << 2);
      }
    }
    TArrayPrivateFriend::Serialize<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
              (param_1,&local_58);
  }
  puVar2 = &this->PackageFlags;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  if (local_58.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_58.AllocatorInstance.SecondaryData);
  }
  return;
}

// SerializeForCacheWithTagsAndBundles @ 141ebb860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAssetData::SerializeForCacheWithTagsAndBundles
          (FAssetData *this,FArchive *param_1,
          _func___cdecl_void_FArchive_ptr_FAssetData_ptr_Type *param_2)

{
  uchar *puVar1;
  uint *puVar2;
  int *_Src;
  uint *puVar3;
  code *pcVar4;
  bool bVar5;
  FSetElementId FVar6;
  longlong *plVar7;
  TArrayView<int_const_,int> *pTVar8;
  undefined4 extraout_var;
  ForElementType<int> FVar9;
  int iVar10;
  int iVar11;
  undefined1 auStackY_98 [32];
  TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> local_58;
  TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_98;
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->PackagePath);
  plVar7 = (longlong *)(**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->AssetClassPath);
  (**(code **)(*plVar7 + 0x178))(plVar7,&(this->AssetClassPath).AssetName);
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,this);
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->AssetName);
  (*param_2)(param_1,this,LatestVersion);
  local_40.ArrayMax = 2;
  local_40.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_40.ArrayNum = 0;
  if ((param_1->field_0x28 & 4) == 0) {
    TArrayPrivateFriend::Serialize<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
              (param_1,&local_40);
    FVar9 = (ForElementType<int>)&local_40;
    if (local_40.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FVar9 = local_40.AllocatorInstance.SecondaryData;
    }
    if ((local_40.ArrayNum != 0) && (iVar10 = local_40.ArrayNum + -1, iVar10 != 0)) {
      iVar11 = *(int *)FVar9;
      do {
        puVar1 = (uchar *)((longlong)FVar9 + 4);
        FVar9 = (ForElementType<int>)((longlong)FVar9 + 4);
        if (*(int *)puVar1 < iVar11) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Algo::IsSorted(SerializedChunkIDs)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetData.cpp"
                             ,0x30e,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          break;
        }
        iVar10 = iVar10 + -1;
        iVar11 = *(int *)puVar1;
      } while (iVar10 != 0);
    }
    FVar6 = UE::AssetRegistry::FChunkArrayRegistry::FindOrAddSorted
                      (&UE::AssetRegistry::GChunkArrayRegistry,&local_58);
    (this->ChunkArrayRegistryHandle).Index = *(int *)CONCAT44(extraout_var,FVar6.Index);
  }
  else {
    pTVar8 = GetChunkIDs(this,(TArrayView<int_const_,int> *)
                              &local_58.AllocatorInstance.SecondaryData);
    iVar10 = pTVar8->ArrayNum;
    _Src = pTVar8->DataPtr;
    local_40.ArrayNum = iVar10;
    if ((iVar10 != 0) || (local_40.ArrayMax != 0)) {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                (4,4,iVar10,local_40.ArrayMax,&local_40.AllocatorInstance,iVar10,&local_40.ArrayMax)
      ;
      FVar9 = (ForElementType<int>)&local_40;
      if (local_40.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FVar9 = local_40.AllocatorInstance.SecondaryData;
      }
      if (iVar10 != 0) {
        memcpy((void *)FVar9,_Src,(longlong)iVar10 << 2);
      }
    }
    TArrayPrivateFriend::Serialize<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
              (param_1,&local_40);
  }
  puVar2 = &this->PackageFlags;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  if (local_40.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_40.AllocatorInstance.SecondaryData);
  }
  return;
}

// SetChunkIDs @ 141ebc090

void __thiscall
FAssetData::SetChunkIDs
          (FAssetData *this,
          TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *param_1)

{
  ForElementType<int> FVar1;
  ForElementType<int> FVar2;
  int local_res8;
  
  FVar1 = (param_1->AllocatorInstance).SecondaryData;
  FVar2 = (ForElementType<int>)param_1;
  if (FVar1 != (ForElementType<int>)0x0) {
    FVar2 = FVar1;
  }
  AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TLess<void>_>
            ((int *)FVar2,param_1->ArrayNum,local_res8._0_1_,(TLess<void>)local_res8._0_1_);
  UE::AssetRegistry::FChunkArrayRegistry::FindOrAddSorted
            (&UE::AssetRegistry::GChunkArrayRegistry,
             (TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)&local_res8);
  (this->ChunkArrayRegistryHandle).Index = local_res8;
  return;
}

// SetChunkIDs @ 141ebc0f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FAssetData::SetChunkIDs(FAssetData *this,TArrayView<int_const_,int> *param_1)

{
  int *_Src;
  uchar *puVar1;
  longlong lVar2;
  undefined1 auStackY_78 [32];
  FIdentityFunctor local_38;
  TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> local_34;
  int local_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_78;
  local_34.ArrayMax = param_1->ArrayNum;
  lVar2 = (longlong)local_34.ArrayMax;
  _Src = param_1->DataPtr;
  local_34._12_8_ = (uchar *)0x0;
  if (local_34.ArrayMax == 0) {
    local_1c = 2;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,local_34.ArrayMax,0,
               (ForElementType<int> *)(local_34.AllocatorInstance.InlineData + 4),local_34.ArrayMax,
               &local_1c);
    puVar1 = local_34.AllocatorInstance.InlineData + 4;
    if ((uchar *)local_34._12_8_ != (uchar *)0x0) {
      puVar1 = (uchar *)local_34._12_8_;
    }
    memcpy(puVar1,_Src,lVar2 << 2);
  }
  puVar1 = local_34.AllocatorInstance.InlineData + 4;
  if ((uchar *)local_34._12_8_ != (uchar *)0x0) {
    puVar1 = (uchar *)local_34._12_8_;
  }
  AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TLess<void>_>
            ((int *)puVar1,local_34.ArrayMax,local_38,(TLess<void>)local_38);
  UE::AssetRegistry::FChunkArrayRegistry::FindOrAddSorted
            (&UE::AssetRegistry::GChunkArrayRegistry,&local_34);
  if ((uchar *)local_34._12_8_ != (uchar *)0x0) {
    FMemory::Free((void *)local_34._12_8_);
  }
  (this->ChunkArrayRegistryHandle).Index = local_34.AllocatorInstance.InlineData._0_4_;
  return;
}

// SetTagsAndAssetBundles @ 141ebc3f0

/* WARNING: Removing unreachable block (ram,0x000141ebc7f4) */
/* WARNING: Removing unreachable block (ram,0x000141ebc807) */
/* WARNING: Removing unreachable block (ram,0x000141ebc80c) */
/* WARNING: Removing unreachable block (ram,0x000141ebc7e0) */
/* WARNING: Removing unreachable block (ram,0x000141ebc7ef) */
/* WARNING: Removing unreachable block (ram,0x000141ebc787) */
/* WARNING: Removing unreachable block (ram,0x000141ebc7a0) */
/* WARNING: Removing unreachable block (ram,0x000141ebc7c5) */
/* WARNING: Removing unreachable block (ram,0x000141ebc7c6) */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FAssetData::SetTagsAndAssetBundles(FAssetData *this,FAssetDataTagMap *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  TSharedPtr<FAssetBundleData,1> *pTVar8;
  FAssetDataTagMap *pFVar9;
  FAssetDataTagMap *pFVar10;
  int iVar11;
  longlong lVar12;
  FAssetDataTagMap *pFVar13;
  FKeyForward local_res8;
  FAssetDataTagMapSharedView_u_0 local_res10;
  FAssetData *local_res18;
  FName local_res20;
  FAssetDataTagMap *local_88;
  ulonglong uStack_80;
  undefined8 local_78;
  FSharedReferencer<1> FStack_70;
  FAssetData *local_68;
  FAssetDataTagMap **local_60;
  TSharedPtr<FAssetBundleData,1> local_58;
  undefined8 local_48 [2];
  
  pFVar10 = (FAssetDataTagMap *)0x0;
  uStack_80 = uStack_80 & 0xffffffff00000000;
  pFVar13 = pFVar10;
  local_88 = param_1;
  do {
    pFVar9 = local_88;
    iVar11 = (int)pFVar13;
    uVar6 = 0;
    uVar5 = 0;
    if ((iVar11 < 0) || ((int)local_88->_padding_ <= iVar11)) {
      local_res20 = GAssetBundleDataName;
      uVar7 = Algo::
              BinarySearchBy<TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
                        ((TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_> *)param_1,
                         &local_res20,local_res8,(FNameFastLess)local_res8);
      pFVar13 = pFVar10;
      if (uVar7 == 0xffffffff) {
        local_78 = 0;
        FStack_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_58.SharedReferenceCount.ReferenceController = FStack_70.ReferenceController;
        if (&this->TaggedAssetBundles != (TSharedPtr<FAssetBundleData,1> *)&local_78) {
          (this->TaggedAssetBundles).Object = (FAssetBundleData *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->TaggedAssetBundles).SharedReferenceCount,&FStack_70);
          local_58.SharedReferenceCount.ReferenceController = FStack_70.ReferenceController;
        }
      }
      else {
        if ((int)uVar7 < (int)param_1->_padding_) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        puVar1 = (undefined8 *)(param_1->_padding_ + ((longlong)(int)uVar7 * 3 + 1) * 8);
        if (local_48 != puVar1) {
          pFVar13 = (FAssetDataTagMap *)*puVar1;
          *puVar1 = 0;
          uVar6 = *(uint *)(puVar1 + 1);
          puVar1[1] = 0;
        }
        TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_>::RemoveAt
                  ((TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_> *)param_1,uVar7,
                   Default);
        pFVar9 = (FAssetDataTagMap *)L"";
        if (uVar6 != 0) {
          pFVar9 = pFVar13;
        }
        pTVar8 = UE::AssetData::Private::ParseAssetBundles(&local_58,(wchar_t *)pFVar9,this);
        if (&this->TaggedAssetBundles != pTVar8) {
          (this->TaggedAssetBundles).Object = pTVar8->Object;
          pTVar8->Object = (FAssetBundleData *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->TaggedAssetBundles).SharedReferenceCount,&pTVar8->SharedReferenceCount)
          ;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
      if ((int)param_1->_padding_ < 1) {
        local_res10 = (this->TagsAndValues).field0_0x0;
        (this->TagsAndValues).field0_0x0.Loose = (FAssetDataTagMap *)0x0;
        FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView
                  ((FAssetDataTagMapSharedView *)&local_res10.Fixed);
      }
      else {
        pFVar9 = ::operator_new(0x18);
        if (pFVar9 != (FAssetDataTagMap *)0x0) {
          pFVar9->_padding_ = 0;
          pFVar9->_padding_ = param_1->_padding_;
          param_1->_padding_ = 0;
          *(int *)&pFVar9->_padding_ = (int)param_1->_padding_;
          *(undefined4 *)((longlong)&pFVar9->_padding_ + 4) =
               *(undefined4 *)((longlong)&param_1->_padding_ + 4);
          param_1->_padding_ = 0;
          (pFVar9->RefCount).Counter = 0;
          pFVar10 = pFVar9;
        }
        LOCK();
        (pFVar10->RefCount).Counter = (pFVar10->RefCount).Counter + 1;
        UNLOCK();
        local_res10 = (this->TagsAndValues).field0_0x0;
        (this->TagsAndValues).field0_0x0.Loose = pFVar10;
        FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView
                  ((FAssetDataTagMapSharedView *)&local_res10.Fixed);
      }
      if (pFVar13 != (FAssetDataTagMap *)0x0) {
        FMemory::Free(pFVar13);
      }
      return;
    }
    if ((iVar11 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar13 = local_88;
    lVar12 = (longlong)(int)(uint)uStack_80;
    iVar2 = (int)local_88->_padding_;
    if (*(longlong *)(pFVar9->_padding_ + (longlong)iVar11 * 0x18) == 0) {
      if ((int)(uint)uStack_80 < iVar2) {
        uVar5 = ~(uint)uStack_80 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(longlong *)(pFVar13->_padding_ + lVar12 * 0x18) == 0) {
        local_res18 = this;
        `FAssetData::SetTagsAndAssetBundles'::__l7::<lambda_1>::operator()(&local_res18);
      }
LAB_141ebc5bc:
      TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_>::RemoveAt
                ((TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_> *)local_88,
                 (uint)uStack_80,Default);
      uStack_80 = CONCAT44(uStack_80._4_4_,(uint)uStack_80 + -1);
    }
    else {
      if ((int)(uint)uStack_80 < iVar2) {
        uVar5 = ~(uint)uStack_80 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar9 = local_88;
      if (*(int *)(pFVar13->_padding_ + 0x10 + lVar12 * 0x18) < 2) {
        lVar12 = (longlong)(int)(uint)uStack_80;
        if ((int)(uint)uStack_80 < (int)local_88->_padding_) {
          uVar6 = ~(uint)uStack_80 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(int *)(pFVar9->_padding_ + 0x10 + lVar12 * 0x18) < 2) {
          local_60 = &local_88;
          local_68 = this;
          `FAssetData::SetTagsAndAssetBundles'::__l10::<lambda_2>::operator()(&local_68);
        }
        goto LAB_141ebc5bc;
      }
    }
    pFVar13 = (FAssetDataTagMap *)(ulonglong)((uint)uStack_80 + 1);
    uStack_80 = CONCAT44(uStack_80._4_4_,(uint)uStack_80 + 1);
  } while( true );
}

// TryConvertShortClassNameToPathName @ 141ebf880

/* WARNING: Enum "Type": Some values do not have unique names */

FTopLevelAssetPath * __cdecl
FAssetData::TryConvertShortClassNameToPathName
          (FTopLevelAssetPath *__return_storage_ptr__,FName param_1,Type param_2)

{
  FName FVar1;
  UClass *pUVar2;
  FName *pFVar3;
  ForAnyElementType FVar4;
  Type TVar5;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_58;
  FString local_48;
  FString local_38;
  TStringView<wchar_t> local_28;
  
  (__return_storage_ptr__->PackageName).ComparisonIndex = 0;
  (__return_storage_ptr__->PackageName).Number = 0;
  (__return_storage_ptr__->AssetName).ComparisonIndex = 0;
  (__return_storage_ptr__->AssetName).Number = 0;
  if (param_1 != (FName)0x0) {
    local_res10 = param_1;
    ::FName::ToString(&local_res10,&local_48);
    TVar5 = param_2;
    if ((byte)(param_2 - Fatal) < 3) {
      TVar5 = Warning;
    }
    local_38.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    local_38.Data.ArrayNum = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      local_38.Data.ArrayNum = 0;
    }
    pUVar2 = Z_Construct_UClass_UStruct_NoRegister();
    local_28.Size = local_38.Data.ArrayNum;
    local_28.DataPtr = (wchar_t *)local_38.Data.AllocatorInstance.Data;
    UClass::TryConvertShortTypeNameToPathName
              (&local_58,pUVar2,&local_28,TVar5,
               L"AssetRegistry trying to convert short name to path name");
    __return_storage_ptr__->PackageName = local_58.PackageName;
    __return_storage_ptr__->AssetName = local_58.AssetName;
    if (__return_storage_ptr__->PackageName == (FName)0x0) {
      FLinkerLoad::FindNewPathNameForClass(&local_38,&local_48,false);
      local_28.Size = local_38.Data.ArrayNum + -1;
      if (local_38.Data.ArrayNum == 0) {
        local_28.Size = 0;
      }
      for (FVar4.Data = local_38.Data.AllocatorInstance.Data;
          FVar4.Data != local_38.Data.AllocatorInstance.Data + (longlong)local_28.Size * 2;
          FVar4.Data = FVar4.Data + 2) {
        if (*(short *)FVar4.Data == 0x2f) {
          local_28.DataPtr = (wchar_t *)local_38.Data.AllocatorInstance.Data;
          local_58.PackageName.ComparisonIndex.Value = 0;
          local_58.PackageName.Number = 0;
          local_58.AssetName.ComparisonIndex.Value = 0;
          local_58.AssetName.Number = 0;
          FTopLevelAssetPath::TrySetPath(&local_58,&local_28);
          goto LAB_141ebf9a9;
        }
      }
      local_28.DataPtr = (wchar_t *)local_38.Data.AllocatorInstance.Data;
      pUVar2 = Z_Construct_UClass_UStruct_NoRegister();
      UClass::TryConvertShortTypeNameToPathName
                (&local_58,pUVar2,&local_28,TVar5,
                 L"AssetRegistry trying to convert redirected short name to path name");
LAB_141ebf9a9:
      FVar1 = local_res10;
      __return_storage_ptr__->PackageName = local_58.PackageName;
      __return_storage_ptr__->AssetName = local_58.AssetName;
      if (__return_storage_ptr__->PackageName == (FName)0x0) {
        pFVar3 = ::FName::FName(&local_res8,L"/Unknown");
        local_58.PackageName.ComparisonIndex.Value = 0;
        local_58.PackageName.Number = 0;
        local_58.AssetName.ComparisonIndex.Value = 0;
        local_58.AssetName.Number = 0;
        FTopLevelAssetPath::TrySetPath(&local_58,*pFVar3,FVar1);
        __return_storage_ptr__->PackageName = local_58.PackageName;
        __return_storage_ptr__->AssetName = local_58.AssetName;
        if (param_2 != NoLogging) {
          FTopLevelAssetPath::ToString(__return_storage_ptr__,(FString *)&local_58);
          ::FName::ToString(&local_res10,(FString *)&local_28);
          FMsg::LogfImpl("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetData.cpp"
                         ,0x3c3,(FName *)&LogAssetData.field_0x4,param_2,
                         L"Failed to convert deprecated short class name \"%s\" to path name. Using \"%s\""
                        );
          if ((FScriptContainerElement *)local_28.DataPtr != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.DataPtr);
          }
          if (local_58.PackageName != (FName)0x0) {
            FMemory::Free((void *)local_58.PackageName);
          }
        }
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// TryNetworkRead @ 141ec1b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FAssetData::TryNetworkRead(FAssetData *this,FCbFieldView *param_1,bool param_2,FName param_3)

{
  uchar *puVar1;
  undefined4 *puVar2;
  ECbFieldError EVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  FSetElementId FVar11;
  TStringView<wchar_t> *pTVar12;
  FName *pFVar13;
  ulong64 uVar14;
  FCbFieldView *pFVar15;
  TTuple<FName,FString> *pTVar16;
  FCbArrayView *this_00;
  undefined4 extraout_var;
  ForElementType<int> FVar17;
  FString *pFVar18;
  int iVar19;
  bool bVar20;
  FName local_res20;
  undefined1 auStackY_5f8 [32];
  FKeyForward local_5c8;
  FName local_5c0;
  FAssetDataTagMap local_5b8;
  FCbObjectView local_5a0;
  FString local_590;
  undefined8 local_580;
  FAssetDataTagMap local_578;
  undefined1 local_560 [24];
  TCbFieldIterator<FCbFieldView> local_548;
  TCbFieldIterator<FCbFieldView> local_530;
  TStringView<wchar_t> local_518;
  char *local_508;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  char *local_4f8;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  char *local_4e8;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  FCbFieldView local_4d8;
  char *local_4c8;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  FScriptContainerElement *local_4b8;
  uint uStack_4b0;
  undefined4 uStack_4ac;
  char *local_4a8;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  FCbFieldView local_498;
  FCbFieldView local_488;
  char *local_478;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  char *local_468;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  FCbFieldView local_458;
  char *local_448;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  TStringView<char8_t> local_438;
  FCbFieldView local_428;
  FCbFieldView local_418;
  TStringView<char8_t> local_408;
  FCbFieldView local_3f8;
  FCbFieldView local_3e8;
  TStringView<char8_t> local_3d8;
  FCbFieldView local_3c8;
  FCbFieldView local_3b8;
  TStringView<wchar_t> local_3a8;
  TStringView<char8_t> local_398;
  TStringView<char8_t> local_388;
  FCbFieldView local_378;
  TStringView<char8_t> local_368;
  FCbFieldView local_358;
  TStringView<char8_t> local_348;
  FCbFieldView local_338;
  FCbFieldView local_328;
  FName local_318 [2];
  TStringView<char8_t> local_308;
  FCbFieldView local_2f8;
  FCbFieldView local_2e8;
  FCbArrayView local_2d8;
  TStringView<wchar_t> local_2c8;
  wchar_t *local_2b8;
  undefined8 uStack_2b0;
  FCbFieldView local_2a8;
  FCbFieldView local_298;
  ForElementType<int> local_288;
  int local_278;
  int local_274 [3];
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [256];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_5f8;
  local_res20 = param_3;
  local_560._16_8_ = this;
  FCbFieldView::AsObjectView(param_1,&local_5a0);
  EVar3 = param_1->Error;
  local_508 = "N";
  uStack_500 = 1;
  local_308._12_4_ = uStack_4fc;
  local_308.Size = 1;
  local_308.DataPtr = "N";
  FCbObjectView::FindView(&local_5a0,&local_2f8,&local_308);
  local_2e8.TypeWithFlags = local_2f8.TypeWithFlags;
  local_2e8.Error = local_2f8.Error;
  local_2e8._2_2_ = local_2f8._2_2_;
  local_2e8.NameLen = local_2f8.NameLen;
  local_2e8.Value = local_2f8.Value;
  bVar5 = ::LoadFromCompactBinary(&local_2e8,&this->AssetName);
  bVar20 = false;
  if (EVar3 == None) {
    bVar20 = bVar5;
  }
  if (param_2) {
    uStack_4f0 = 1;
    local_4f8 = "P";
    local_438._12_4_ = uStack_4ec;
    local_438.Size = 1;
    local_438.DataPtr = "P";
    FCbObjectView::FindView(&local_5a0,&local_428,&local_438);
    local_418.TypeWithFlags = local_428.TypeWithFlags;
    local_418.Error = local_428.Error;
    local_418._2_2_ = local_428._2_2_;
    local_418.NameLen = local_428.NameLen;
    local_418.Value = local_428.Value;
    bVar5 = ::LoadFromCompactBinary(&local_418,&this->PackagePath);
    uStack_4e0 = 1;
    local_4e8 = "Q";
    local_408._12_4_ = uStack_4dc;
    local_408.Size = 1;
    local_408.DataPtr = "Q";
    FCbObjectView::FindView(&local_5a0,&local_3f8,&local_408);
    local_3e8.TypeWithFlags = local_3f8.TypeWithFlags;
    local_3e8.Error = local_3f8.Error;
    local_3e8._2_2_ = local_3f8._2_2_;
    local_3e8.NameLen = local_3f8.NameLen;
    local_3e8.Value = local_3f8.Value;
    bVar6 = ::LoadFromCompactBinary(&local_3e8,&this->PackageName);
    bVar20 = (bool)(bVar20 & bVar5 & bVar6);
  }
  else {
    if (bVar5) {
      local_268.Base = local_248;
      local_268.bIsDynamic = false;
      local_268.bIsExternal = false;
      local_268.CurPos = local_248;
      local_268.End = (wchar_t *)local_48;
      ::FName::AppendString(&local_res20,&local_268);
      local_518.DataPtr = local_268.Base;
      local_518.Size = (int)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1);
      pTVar12 = FPathViews::GetPath(&local_2c8,&local_518);
      local_2b8 = pTVar12->DataPtr;
      uStack_2b0 = *(undefined8 *)&pTVar12->Size;
      pFVar13 = ::FName::FName(local_318,(int)*(undefined8 *)&pTVar12->Size,local_2b8,FNAME_Add);
      this->PackagePath = *pFVar13;
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
    }
    else {
      local_580 = 0;
      (this->PackagePath).ComparisonIndex = 0;
      (this->PackagePath).Number = 0;
    }
    this->PackageName = local_res20;
  }
  uStack_4c0 = 1;
  local_4c8 = "C";
  local_3d8._12_4_ = uStack_4bc;
  local_3d8.Size = 1;
  local_3d8.DataPtr = "C";
  local_590.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_590.Data.ArrayNum = 0;
  local_590.Data.ArrayMax = 0;
  FCbObjectView::FindView(&local_5a0,&local_3c8,&local_3d8);
  local_3b8.TypeWithFlags = local_3c8.TypeWithFlags;
  local_3b8.Error = local_3c8.Error;
  local_3b8._2_2_ = local_3c8._2_2_;
  local_3b8.NameLen = local_3c8.NameLen;
  local_3b8.Value = local_3c8.Value;
  bVar5 = ::LoadFromCompactBinary(&local_3b8,&local_590);
  if (bVar5) {
    local_4b8 = local_590.Data.AllocatorInstance.Data;
    uStack_4b0 = local_590.Data.ArrayNum - 1;
    if (local_590.Data.ArrayNum == 0) {
      uStack_4b0 = 0;
    }
    local_3a8._12_4_ = uStack_4ac;
    local_3a8.Size = uStack_4b0;
    local_3a8.DataPtr = (wchar_t *)local_590.Data.AllocatorInstance.Data;
    bVar5 = FTopLevelAssetPath::TrySetPath(&this->AssetClassPath,&local_3a8);
    bVar20 = (bool)(bVar20 & bVar5);
  }
  else {
    (this->AssetClassPath).AssetName.ComparisonIndex = 0;
    (this->AssetClassPath).AssetName.Number = 0;
    bVar20 = false;
    (this->AssetClassPath).PackageName.ComparisonIndex = 0;
    (this->AssetClassPath).PackageName.Number = 0;
  }
  uStack_4a0 = 1;
  local_4a8 = "T";
  local_398._12_4_ = uStack_49c;
  local_398.Size = 1;
  local_398.DataPtr = "T";
  FCbObjectView::FindView(&local_5a0,&local_498,&local_398);
  FCbFieldView::AsArrayView(&local_498,(FCbArrayView *)&local_488);
  if (local_498.Error == None) {
    local_5b8._padding_ = 0;
    local_5b8._padding_ = 0;
    local_5b8.RefCount.Counter = 0;
    uVar14 = FCbArrayView::Num((FCbArrayView *)&local_488);
    iVar10 = (int)uVar14;
    if ((uVar14 != (longlong)iVar10) || (iVar10 < 0)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar14 & 0xffffffff);
      }
    }
    if (local_5b8._padding_._4_4_ < iVar10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar10,(ForAnyElementType *)&local_5b8,(int)local_5b8._padding_,
                 (int *)((longlong)&local_5b8._padding_ + 4));
    }
    FCbFieldView::CreateViewIterator(&local_488,(FCbFieldViewIterator *)&local_548);
    while (((byte)local_548._padding_ & 0x1f) != 0) {
      local_478 = "K";
      uStack_470 = 1;
      local_5c0.ComparisonIndex.Value = 0;
      local_5c0.Number = 0;
      local_388._12_4_ = uStack_46c;
      local_388.Size = 1;
      local_388.DataPtr = "K";
      pFVar15 = FCbFieldView::operator[](&local_458,&local_2a8,&local_388);
      local_378.TypeWithFlags = pFVar15->TypeWithFlags;
      local_378.Error = pFVar15->Error;
      local_378._2_2_ = *(undefined2 *)&pFVar15->field_0x2;
      local_378.NameLen = pFVar15->NameLen;
      local_378.Value = pFVar15->Value;
      bVar5 = ::LoadFromCompactBinary(&local_378,&local_5c0);
      local_560._8_4_ = local_5c0.ComparisonIndex.Value;
      local_560._12_4_ = local_5c0.Number;
      uVar8 = Algo::
              BinarySearchBy<TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
                        ((TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_> *)&local_5b8,
                         (FName *)(local_560 + 8),local_5c8,(FNameFastLess)local_5c8);
      if (uVar8 == 0xffffffff) {
LAB_141ec1ffd:
        pTVar16 = TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::
                  AllocateMemoryForEmplace<FName_const_&>
                            ((TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess> *)
                             &local_5b8,&local_5c0);
        pFVar18 = (FString *)&pTVar16->field_0x8;
        *(uint *)&pTVar16->field_0x0 = local_5c0.ComparisonIndex.Value;
        *(uint *)&pTVar16->field_0x4 = local_5c0.Number;
        *(undefined8 *)pFVar18 = 0;
        *(undefined8 *)&pTVar16->field_0x10 = 0;
      }
      else {
        uVar9 = 0;
        if ((int)uVar8 < (int)local_5b8._padding_) {
          uVar9 = ~uVar8 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        pFVar18 = (FString *)
                  &((TTuple<FName,FString> *)(local_5b8._padding_ + (longlong)(int)uVar8 * 0x18))->
                   field_0x8;
        if (pFVar18 == (FString *)0x0) goto LAB_141ec1ffd;
      }
      local_468 = "V";
      uStack_460 = 1;
      local_368._12_4_ = uStack_45c;
      local_368.Size = 1;
      local_368.DataPtr = "V";
      pFVar15 = FCbFieldView::operator[](&local_458,&local_298,&local_368);
      local_358.TypeWithFlags = pFVar15->TypeWithFlags;
      local_358.Error = pFVar15->Error;
      local_358._2_2_ = *(undefined2 *)&pFVar15->field_0x2;
      local_358.NameLen = pFVar15->NameLen;
      local_358.Value = pFVar15->Value;
      bVar6 = ::LoadFromCompactBinary(&local_358,pFVar18);
      bVar20 = (bool)(bVar20 & bVar5 & bVar6);
      TCbFieldIterator<FCbFieldView>::operator++(&local_548);
      this = (FAssetData *)local_560._16_8_;
    }
    SetTagsAndAssetBundles(this,&local_5b8);
    DestructItems<TTuple<FName,FString>,int>
              ((TTuple<FName,FString> *)local_5b8._padding_,(int)local_5b8._padding_);
    pTVar16 = (TTuple<FName,FString> *)local_5b8._padding_;
  }
  else {
    local_578._padding_ = 0;
    local_578._padding_ = 0;
    local_578.RefCount.Counter = 0;
    local_578._20_4_ = 0;
    SetTagsAndAssetBundles(this,&local_578);
    DestructItems<TTuple<FName,FString>,int>
              ((TTuple<FName,FString> *)local_578._padding_,(int)local_578._padding_);
    pTVar16 = (TTuple<FName,FString> *)local_578._padding_;
  }
  if (pTVar16 != (TTuple<FName,FString> *)0x0) {
    FMemory::Free(pTVar16);
  }
  uStack_440 = 1;
  local_448 = "I";
  local_348._12_4_ = uStack_43c;
  local_348.Size = 1;
  local_348.DataPtr = "I";
  local_288.SecondaryData = (ForElementType<int>)0x0;
  local_278 = 0;
  local_274[0] = 2;
  FCbObjectView::FindView(&local_5a0,&local_338,&local_348);
  local_4d8.TypeWithFlags = local_338.TypeWithFlags;
  local_4d8.Error = local_338.Error;
  local_4d8._2_2_ = local_338._2_2_;
  local_4d8.NameLen = local_338.NameLen;
  local_4d8.Value = local_338.Value;
  this_00 = FCbFieldView::AsArrayView(&local_4d8,&local_2d8);
  uVar14 = FCbArrayView::Num(this_00);
  if (uVar14 < 0x80000000) {
    iVar10 = (int)uVar14;
    if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar14 & 0xffffffff);
    }
    if (local_274[0] < iVar10) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                (4,4,iVar10,&local_288,0,local_274);
    }
    FCbFieldView::CreateViewIterator(&local_4d8,(FCbFieldViewIterator *)&local_530);
    iVar10 = local_278;
    while (local_278 = iVar10, ((byte)local_530._padding_ & 0x1f) != 0) {
      if (iVar10 == local_274[0]) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                           (0x404,&local_288,local_274);
      }
      local_278 = iVar10 + 1;
      FVar17 = (ForElementType<int>)&local_288;
      if (local_288.SecondaryData != (ForElementType<int>)0x0) {
        FVar17 = local_288.SecondaryData;
      }
      puVar2 = (undefined4 *)((longlong)FVar17 + (longlong)iVar10 * 4);
      *puVar2 = 0;
      local_328.Value = (void *)local_530._padding_;
      uVar14 = FCbFieldView::AsInteger(&local_328,0,(FIntegerParams)0x3f);
      *puVar2 = (int)uVar14;
      TCbFieldIterator<FCbFieldView>::operator++(&local_530);
      iVar10 = local_278;
    }
  }
  else {
    UE::Serialization::Private::LogFieldTooLargeForArrayWarning(uVar14);
  }
  FVar17 = (ForElementType<int>)&local_288;
  if (local_288.SecondaryData != (ForElementType<int>)0x0) {
    FVar17 = local_288.SecondaryData;
  }
  if ((local_278 != 0) && (iVar10 = local_278 + -1, iVar10 != 0)) {
    iVar19 = *(int *)FVar17;
    do {
      puVar1 = (uchar *)((longlong)FVar17 + 4);
      FVar17 = (ForElementType<int>)((longlong)FVar17 + 4);
      if (*(int *)puVar1 < iVar19) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Algo::IsSorted(SerializedChunkIDs)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetData.cpp"
                           ,0x389,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        break;
      }
      iVar10 = iVar10 + -1;
      iVar19 = *(int *)puVar1;
    } while (iVar10 != 0);
  }
  FVar11 = UE::AssetRegistry::FChunkArrayRegistry::FindOrAddSorted
                     (&UE::AssetRegistry::GChunkArrayRegistry,
                      (TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
                      local_560);
  (this->ChunkArrayRegistryHandle).Index = *(int *)CONCAT44(extraout_var,FVar11.Index);
  if (local_288.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_288.SecondaryData);
  }
  if (local_590.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_590.Data.AllocatorInstance.Data);
  }
  return bVar20;
}

// operator() @ 1504820b0

bool __thiscall `FAssetData::SetTagsAndAssetBundles'::__l7::<lambda_1>::operator()(void *this)

{
  int iVar1;
  FAssetData *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FString *pFVar5;
  bool bVar6;
  int iVar7;
  FString local_28;
  FString local_18;
  
  bVar6 = false;
  bVar3 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_693677036945800551>);
  if (bVar3) {
    this_00 = *(FAssetData **)this;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    ::FString::Reset(&local_28,0);
    pFVar5 = FTopLevelAssetPath::ToString(&this_00->AssetClassPath,&local_18);
    iVar1 = (pFVar5->Data).ArrayNum;
    iVar7 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar7 = 0;
    }
    ::FString::AppendChars(&local_28,(wchar_t *)(pFVar5->Data).AllocatorInstance.Data,iVar7);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    ::FString::AppendChar(&local_28,L' ');
    FAssetData::AppendObjectPath(this_00,&local_28);
    bVar6 = true;
    bVar3 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_693677036945800551>,&::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_15048217f;
    }
  }
  bVar3 = false;
  if (!bVar6) {
    return false;
  }
LAB_15048217f:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (!bVar3) {
    return false;
  }
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return (bool)uVar4;
}

// operator() @ 150482220

bool __thiscall `FAssetData::SetTagsAndAssetBundles'::__l10::<lambda_2>::operator()(void *this)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  FAssetData *this_00;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  FString *pFVar10;
  int iVar11;
  FString local_48;
  FString local_38;
  FString local_28;
  
  bVar5 = false;
  bVar7 = false;
  bVar6 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_693677036945800543>);
  if (bVar6) {
    uVar1 = *(uint *)(*(longlong **)((longlong)this + 8) + 1);
    plVar3 = (longlong *)**(longlong **)((longlong)this + 8);
    uVar9 = 0;
    if ((int)uVar1 < (int)plVar3[1]) {
      uVar9 = ~uVar1 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    ::FName::ToString((FName *)(*plVar3 + (longlong)(int)uVar1 * 0x18),&local_28);
    this_00 = *(FAssetData **)this;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    ::FString::Reset(&local_48,0);
    pFVar10 = FTopLevelAssetPath::ToString(&this_00->AssetClassPath,&local_38);
    iVar2 = (pFVar10->Data).ArrayNum;
    iVar11 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar11 = 0;
    }
    ::FString::AppendChars(&local_48,(wchar_t *)(pFVar10->Data).AllocatorInstance.Data,iVar11);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    ::FString::AppendChar(&local_48,L' ');
    FAssetData::AppendObjectPath(this_00,&local_48);
    bVar5 = true;
    bVar7 = true;
    bVar6 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_693677036945800543>,&::ENSURE_Static);
    if (bVar6) {
      bVar6 = true;
      goto LAB_15048238c;
    }
  }
  bVar6 = false;
LAB_15048238c:
  if ((bVar7) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar5) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  return false;
}

