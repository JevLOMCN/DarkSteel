// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 15

// StaticStruct @ 141e481a0

UScriptStruct * __cdecl FAssetBundleData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAssetBundleData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UScriptStruct_FAssetBundleData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAssetBundleData,(UObject *)pUVar1,
                         L"AssetBundleData");
  }
  return Z_Registration_Info_UScriptStruct_FAssetBundleData.OuterSingleton;
}

// AddBundleAsset @ 141e598f0

void __thiscall
FAssetBundleData::AddBundleAsset(FAssetBundleData *this,FName param_1,FSoftObjectPath *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FAssetBundleEntry *pFVar4;
  FTopLevelAssetPath local_18;
  
  if ((param_2->AssetPath).PackageName != (FName)0x0) {
    pFVar4 = FindEntry(this,param_1);
    if (pFVar4 == (FAssetBundleEntry *)0x0) {
      iVar3 = (this->Bundles).ArrayNum;
      piVar1 = &(this->Bundles).ArrayMax;
      if (iVar3 == *piVar1) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)this,piVar1);
      }
      (this->Bundles).ArrayNum = iVar3 + 1;
      pFVar2 = (this->Bundles).AllocatorInstance.Data;
      *(FName *)(pFVar2 + (longlong)iVar3 * 0x18) = param_1;
      pFVar4 = (FAssetBundleEntry *)(pFVar2 + (longlong)iVar3 * 0x18);
      (pFVar4->AssetPaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar4->AssetPaths).ArrayNum = 0;
      (pFVar4->AssetPaths).ArrayMax = 0;
    }
    local_18.PackageName = (param_2->AssetPath).PackageName;
    local_18.AssetName = (param_2->AssetPath).AssetName;
    TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FTopLevelAssetPath>
              (&pFVar4->AssetPaths,&local_18);
  }
  return;
}

// AddBundleAsset @ 141e59980

void __thiscall
FAssetBundleData::AddBundleAsset(FAssetBundleData *this,FName param_1,FTopLevelAssetPath *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FAssetBundleEntry *pFVar4;
  
  if (param_2->PackageName != (FName)0x0) {
    pFVar4 = FindEntry(this,param_1);
    if (pFVar4 == (FAssetBundleEntry *)0x0) {
      iVar3 = (this->Bundles).ArrayNum;
      piVar1 = &(this->Bundles).ArrayMax;
      if (iVar3 == *piVar1) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)this,piVar1);
      }
      (this->Bundles).ArrayNum = iVar3 + 1;
      pFVar2 = (this->Bundles).AllocatorInstance.Data;
      *(FName *)(pFVar2 + (longlong)iVar3 * 0x18) = param_1;
      pFVar4 = (FAssetBundleEntry *)(pFVar2 + (longlong)iVar3 * 0x18);
      (pFVar4->AssetPaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar4->AssetPaths).ArrayNum = 0;
      (pFVar4->AssetPaths).ArrayMax = 0;
    }
    TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<FTopLevelAssetPath_const_&>(&pFVar4->AssetPaths,param_2);
  }
  return;
}

// AddBundleAssetTruncated @ 141e59a10

void __thiscall
FAssetBundleData::AddBundleAssetTruncated
          (FAssetBundleData *this,FName param_1,FSoftObjectPath *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FAssetBundleEntry *pFVar4;
  FTopLevelAssetPath local_18;
  
  if ((param_2->AssetPath).PackageName != (FName)0x0) {
    pFVar4 = FindEntry(this,param_1);
    if (pFVar4 == (FAssetBundleEntry *)0x0) {
      iVar3 = (this->Bundles).ArrayNum;
      piVar1 = &(this->Bundles).ArrayMax;
      if (iVar3 == *piVar1) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)this,piVar1);
      }
      (this->Bundles).ArrayNum = iVar3 + 1;
      pFVar2 = (this->Bundles).AllocatorInstance.Data;
      *(FName *)(pFVar2 + (longlong)iVar3 * 0x18) = param_1;
      pFVar4 = (FAssetBundleEntry *)(pFVar2 + (longlong)iVar3 * 0x18);
      (pFVar4->AssetPaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar4->AssetPaths).ArrayNum = 0;
      (pFVar4->AssetPaths).ArrayMax = 0;
    }
    local_18.PackageName = (param_2->AssetPath).PackageName;
    local_18.AssetName = (param_2->AssetPath).AssetName;
    TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FTopLevelAssetPath>
              (&pFVar4->AssetPaths,&local_18);
  }
  return;
}

// AddBundleAssets @ 141e59aa0

void __thiscall
FAssetBundleData::AddBundleAssets
          (FAssetBundleData *this,FName param_1,
          TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FAssetBundleEntry *pFVar5;
  longlong lVar6;
  FName *pFVar7;
  FName *pFVar8;
  undefined1 local_res18 [8];
  FTopLevelAssetPath local_38;
  
  pFVar5 = FindEntry(this,param_1);
  iVar2 = param_2->ArrayNum;
  pFVar8 = (FName *)(param_2->AllocatorInstance).Data;
  pFVar7 = pFVar8 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_2->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FSoftObjectPath_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar8 == pFVar7) break;
    if (*pFVar8 != (FName)0x0) {
      if (pFVar5 == (FAssetBundleEntry *)0x0) {
        iVar4 = (this->Bundles).ArrayNum;
        piVar1 = &(this->Bundles).ArrayMax;
        if (iVar4 == *piVar1) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,(ForAnyElementType *)this,piVar1);
        }
        lVar6 = (longlong)iVar4;
        (this->Bundles).ArrayNum = iVar4 + 1;
        pFVar3 = (this->Bundles).AllocatorInstance.Data;
        *(FName *)(pFVar3 + lVar6 * 0x18) = param_1;
        *(undefined8 *)(pFVar3 + lVar6 * 0x18 + 8) = 0;
        *(undefined8 *)(pFVar3 + lVar6 * 0x18 + 0x10) = 0;
        pFVar5 = (FAssetBundleEntry *)(pFVar3 + lVar6 * 0x18);
      }
      local_38.PackageName = *pFVar8;
      local_38.AssetName = pFVar8[1];
      TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FTopLevelAssetPath>
                (&pFVar5->AssetPaths,&local_38);
    }
    pFVar8 = pFVar8 + 4;
  }
  return;
}

// AddBundleAssets @ 141e59b80

void __thiscall
FAssetBundleData::AddBundleAssets
          (FAssetBundleData *this,FName param_1,
          TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FAssetBundleEntry *pFVar5;
  longlong lVar6;
  FTopLevelAssetPath *pFVar7;
  FTopLevelAssetPath *pFVar8;
  undefined1 local_res18 [8];
  
  pFVar5 = FindEntry(this,param_1);
  iVar2 = param_2->ArrayNum;
  pFVar8 = (FTopLevelAssetPath *)(param_2->AllocatorInstance).Data;
  pFVar7 = pFVar8 + iVar2;
  while( true ) {
    if (param_2->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FTopLevelAssetPath_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar8 == pFVar7) break;
    if (pFVar8->PackageName != (FName)0x0) {
      if (pFVar5 == (FAssetBundleEntry *)0x0) {
        iVar4 = (this->Bundles).ArrayNum;
        piVar1 = &(this->Bundles).ArrayMax;
        if (iVar4 == *piVar1) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,(ForAnyElementType *)this,piVar1);
        }
        lVar6 = (longlong)iVar4;
        (this->Bundles).ArrayNum = iVar4 + 1;
        pFVar3 = (this->Bundles).AllocatorInstance.Data;
        *(FName *)(pFVar3 + lVar6 * 0x18) = param_1;
        *(undefined8 *)(pFVar3 + lVar6 * 0x18 + 8) = 0;
        *(undefined8 *)(pFVar3 + lVar6 * 0x18 + 0x10) = 0;
        pFVar5 = (FAssetBundleEntry *)(pFVar3 + lVar6 * 0x18);
      }
      TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<FTopLevelAssetPath_const_&>(&pFVar5->AssetPaths,pFVar8);
    }
    pFVar8 = pFVar8 + 1;
  }
  return;
}

// AddBundleAssetsTruncated @ 141e59c60

void __thiscall
FAssetBundleData::AddBundleAssetsTruncated
          (FAssetBundleData *this,FName param_1,
          TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FAssetBundleEntry *pFVar5;
  longlong lVar6;
  FName *pFVar7;
  FName *pFVar8;
  undefined1 local_res18 [8];
  FTopLevelAssetPath local_38;
  
  pFVar5 = FindEntry(this,param_1);
  iVar2 = param_2->ArrayNum;
  pFVar8 = (FName *)(param_2->AllocatorInstance).Data;
  pFVar7 = pFVar8 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_2->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FSoftObjectPath_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar8 == pFVar7) break;
    if (*pFVar8 != (FName)0x0) {
      if (pFVar5 == (FAssetBundleEntry *)0x0) {
        iVar4 = (this->Bundles).ArrayNum;
        piVar1 = &(this->Bundles).ArrayMax;
        if (iVar4 == *piVar1) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,(ForAnyElementType *)this,piVar1);
        }
        lVar6 = (longlong)iVar4;
        (this->Bundles).ArrayNum = iVar4 + 1;
        pFVar3 = (this->Bundles).AllocatorInstance.Data;
        *(FName *)(pFVar3 + lVar6 * 0x18) = param_1;
        *(undefined8 *)(pFVar3 + lVar6 * 0x18 + 8) = 0;
        *(undefined8 *)(pFVar3 + lVar6 * 0x18 + 0x10) = 0;
        pFVar5 = (FAssetBundleEntry *)(pFVar3 + lVar6 * 0x18);
      }
      local_38.PackageName = *pFVar8;
      local_38.AssetName = pFVar8[1];
      TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FTopLevelAssetPath>
                (&pFVar5->AssetPaths,&local_38);
    }
    pFVar8 = pFVar8 + 4;
  }
  return;
}

// ExportTextItem @ 141e5b020

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FAssetBundleData::ExportTextItem
          (FAssetBundleData *this,FString *param_1,FAssetBundleData *param_2,UObject *param_3,
          int param_4,UObject *param_5)

{
  FAssetBundleEntry *pFVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  FAssetBundleEntry *this_00;
  int iVar5;
  int iVar6;
  undefined1 local_res8 [8];
  FAssetBundleEntry local_40;
  
  if ((this->Bundles).ArrayNum == 0) {
    return true;
  }
  if ((param_2 != this) && ((param_2->Bundles).ArrayNum != 0)) {
    return false;
  }
  iVar3 = (param_1->Data).ArrayNum;
  iVar5 = 0;
  iVar4 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar4 = iVar5;
  }
  ::FString::AppendChars(param_1,L"(Bundles=(",10);
  iVar3 = (this->Bundles).ArrayNum;
  this_00 = (FAssetBundleEntry *)(this->Bundles).AllocatorInstance.Data;
  local_40.BundleName.ComparisonIndex.Value = 0;
  local_40.BundleName.Number = 0;
  local_40.AssetPaths.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar1 = this_00 + iVar3;
  local_40.AssetPaths.ArrayNum = 0;
  local_40.AssetPaths.ArrayMax = 0;
  while( true ) {
    if ((this->Bundles).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FAssetBundleEntry_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pFVar1) break;
    bVar2 = FAssetBundleEntry::ExportTextItem(this_00,param_1,&local_40,param_3,param_4,param_5);
    if (!bVar2) {
      iVar3 = (param_1->Data).ArrayNum;
      iVar6 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar6 = iVar5;
      }
      iVar3 = iVar6;
      if (iVar4 < iVar6) {
        iVar3 = iVar4;
      }
      if (0 < iVar3) {
        iVar5 = iVar3;
      }
      ::FString::RemoveAt(param_1,iVar5,iVar6 - iVar5,Default);
      return false;
    }
    ::FString::AppendChar(param_1,L',');
    this_00 = this_00 + 1;
  }
  iVar3 = (param_1->Data).ArrayNum;
  iVar4 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar4 = iVar5;
  }
  if (iVar4 + -1 < iVar4) {
    iVar4 = iVar4 + -1;
  }
  iVar3 = 0;
  if (0 < iVar4) {
    iVar3 = iVar4;
  }
  ::FString::RemoveAt(param_1,iVar3,1,No);
  ::FString::AppendChars(param_1,L"))",2);
  return true;
}

// FindEntry @ 141e5b3f0

FAssetBundleEntry * __thiscall FAssetBundleData::FindEntry(FAssetBundleData *this,FName param_1)

{
  FAssetBundleEntry *pFVar1;
  int iVar2;
  FAssetBundleEntry *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Bundles).ArrayNum;
  pFVar3 = (FAssetBundleEntry *)(this->Bundles).AllocatorInstance.Data;
  pFVar1 = pFVar3 + iVar2;
  while( true ) {
    if ((this->Bundles).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FAssetBundleEntry,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (pFVar3->BundleName == param_1) {
      return pFVar3;
    }
    pFVar3 = pFVar3 + 1;
  }
  return (FAssetBundleEntry *)0x0;
}

// ImportTextItem @ 141e5e230

bool __thiscall
FAssetBundleData::ImportTextItem
          (FAssetBundleData *this,wchar_t **param_1,int param_2,UObject *param_3,
          FOutputDevice *param_4)

{
  wchar_t *pwVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  wchar_t *local_res10;
  FAssetBundleData local_48;
  TStringView<wchar_t> local_38;
  
  pwVar1 = *param_1;
  if (*pwVar1 == L'(') {
    local_38 = UE::AssetBundleEntry::Private::BundlesPrefix;
    iVar4 = FGenericPlatformStricmp::Strnicmp
                      (pwVar1,UE::AssetBundleEntry::Private::BundlesPrefix.DataPtr,10);
    if (iVar4 == 0) {
      local_48.Bundles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_res10 = pwVar1 + local_38.Size;
      local_48.Bundles.ArrayNum = 0;
      local_48.Bundles.ArrayMax = 0;
      iVar4 = 0;
      iVar6 = 0;
      while( true ) {
        if (iVar4 == iVar6) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,(ForAnyElementType *)&local_48,&local_48.Bundles.ArrayMax);
        }
        local_48.Bundles.ArrayNum = iVar4 + 1;
        lVar5 = (longlong)iVar4;
        *(undefined8 *)&local_48.Bundles.AllocatorInstance.Data[lVar5 * 0x18].field_0x0 = 0;
        *(undefined8 *)(local_48.Bundles.AllocatorInstance.Data + lVar5 * 0x18 + 8) = 0;
        *(undefined8 *)(local_48.Bundles.AllocatorInstance.Data + lVar5 * 0x18 + 0x10) = 0;
        bVar3 = FAssetBundleEntry::ImportTextItem
                          ((FAssetBundleEntry *)
                           (local_48.Bundles.AllocatorInstance.Data + lVar5 * 0x18),&local_res10,
                           param_2,param_3,param_4);
        pwVar1 = local_res10;
        if (!bVar3) {
          DestructItems<FAssetBundleEntry,int>
                    ((FAssetBundleEntry *)local_48.Bundles.AllocatorInstance.Data,
                     local_48.Bundles.ArrayNum);
          if ((FAssetBundleEntry *)local_48.Bundles.AllocatorInstance.Data !=
              (FAssetBundleEntry *)0x0) {
            FMemory::Free(local_48.Bundles.AllocatorInstance.Data);
          }
          goto LAB_141e5e3e8;
        }
        if (*local_res10 != L',') break;
        local_res10 = local_res10 + 1;
        iVar4 = local_48.Bundles.ArrayNum;
        iVar6 = local_48.Bundles.ArrayMax;
      }
      local_38 = UE::AssetBundleEntry::Private::BundlesSuffix;
      iVar4 = FGenericPlatformStricmp::Strnicmp
                        (local_res10,UE::AssetBundleEntry::Private::BundlesSuffix.DataPtr,2);
      if (iVar4 == 0) {
        lVar5 = (longlong)local_38.Size;
        if (this != &local_48) {
          DestructItems<FAssetBundleEntry,int>
                    ((FAssetBundleEntry *)(this->Bundles).AllocatorInstance.Data,
                     (this->Bundles).ArrayNum);
          pFVar2 = (this->Bundles).AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          (this->Bundles).AllocatorInstance.Data = local_48.Bundles.AllocatorInstance.Data;
          (this->Bundles).ArrayNum = local_48.Bundles.ArrayNum;
          (this->Bundles).ArrayMax = local_48.Bundles.ArrayMax;
          local_48.Bundles.ArrayNum = 0;
          local_48.Bundles.ArrayMax = 0;
          local_48.Bundles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        *param_1 = pwVar1 + lVar5;
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      DestructItems<FAssetBundleEntry,int>
                ((FAssetBundleEntry *)local_48.Bundles.AllocatorInstance.Data,
                 local_48.Bundles.ArrayNum);
      if ((FAssetBundleEntry *)local_48.Bundles.AllocatorInstance.Data != (FAssetBundleEntry *)0x0)
      {
        FMemory::Free(local_48.Bundles.AllocatorInstance.Data);
      }
    }
    else {
LAB_141e5e3e8:
      local_38 = UE::AssetBundleEntry::Private::EmptyBundles;
      iVar4 = FGenericPlatformStricmp::Strnicmp
                        (*param_1,UE::AssetBundleEntry::Private::EmptyBundles.DataPtr,10);
      if (iVar4 == 0) {
        bVar3 = true;
        *param_1 = *param_1 + local_38.Size;
      }
      else {
        bVar3 = false;
      }
    }
  }
  else {
    bVar3 = true;
  }
  return bVar3;
}

// Reset @ 141e5f7a0

void __thiscall FAssetBundleData::Reset(FAssetBundleData *this)

{
  int *piVar1;
  int iVar2;
  FAssetBundleEntry *pFVar3;
  
  piVar1 = &(this->Bundles).ArrayMax;
  pFVar3 = (FAssetBundleEntry *)(this->Bundles).AllocatorInstance.Data;
  iVar2 = (this->Bundles).ArrayNum;
  if (-1 < (this->Bundles).ArrayMax) {
    DestructItems<FAssetBundleEntry,int>(pFVar3,iVar2);
    (this->Bundles).ArrayNum = 0;
    return;
  }
  DestructItems<FAssetBundleEntry,int>(pFVar3,iVar2);
  (this->Bundles).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  return;
}

// SetBundleAssets @ 141e5fff0

void __thiscall
FAssetBundleData::SetBundleAssets
          (FAssetBundleData *this,FName param_1,
          TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FAssetBundleEntry *pFVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res18 [8];
  undefined8 local_28;
  undefined8 uStack_20;
  
  pFVar9 = FindEntry(this,param_1);
  if (pFVar9 == (FAssetBundleEntry *)0x0) {
    iVar7 = (this->Bundles).ArrayNum;
    piVar1 = &(this->Bundles).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,(ForAnyElementType *)this,piVar1);
    }
    lVar10 = (longlong)iVar7;
    (this->Bundles).ArrayNum = iVar7 + 1;
    pFVar12 = (this->Bundles).AllocatorInstance.Data;
    *(FName *)(pFVar12 + lVar10 * 0x18) = param_1;
    *(undefined8 *)(pFVar12 + lVar10 * 0x18 + 8) = 0;
    *(undefined8 *)(pFVar12 + lVar10 * 0x18 + 0x10) = 0;
    pFVar9 = (FAssetBundleEntry *)(pFVar12 + lVar10 * 0x18);
  }
  uVar3 = param_2->ArrayNum;
  pTVar2 = &pFVar9->AssetPaths;
  if (-1 < (int)uVar3) {
    piVar1 = &(pFVar9->AssetPaths).ArrayMax;
    (pFVar9->AssetPaths).ArrayNum = 0;
    if ((pFVar9->AssetPaths).ArrayMax < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,uVar3,&pTVar2->AllocatorInstance,0,piVar1);
    }
    iVar7 = param_2->ArrayNum;
    pFVar12 = (param_2->AllocatorInstance).Data;
    pFVar11 = pFVar12 + (longlong)iVar7 * 0x20;
    while( true ) {
      if (param_2->ArrayNum != iVar7) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FSoftObjectPath,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar12 == pFVar11) break;
      local_28 = *(undefined8 *)pFVar12;
      uStack_20 = *(undefined8 *)(pFVar12 + 8);
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      if ((pFVar4 <= (FScriptContainerElement *)&local_28) &&
         ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)*piVar1 * 0x10)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar8 = (pFVar9->AssetPaths).ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x410,&pTVar2->AllocatorInstance,piVar1);
      }
      (pFVar9->AssetPaths).ArrayNum = iVar8 + 1;
      pFVar12 = pFVar12 + 0x20;
      pFVar4 = (pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
      *(undefined8 *)pFVar4 = local_28;
      *(undefined8 *)(pFVar4 + 8) = uStack_20;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

// SetBundleAssets @ 141e601b0

void __thiscall
FAssetBundleData::SetBundleAssets
          (FAssetBundleData *this,FName param_1,
          TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FAssetBundleEntry *pFVar5;
  longlong lVar6;
  
  pFVar5 = FindEntry(this,param_1);
  if (pFVar5 == (FAssetBundleEntry *)0x0) {
    iVar4 = (this->Bundles).ArrayNum;
    piVar1 = &(this->Bundles).ArrayMax;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,(ForAnyElementType *)this,piVar1);
    }
    lVar6 = (longlong)iVar4;
    (this->Bundles).ArrayNum = iVar4 + 1;
    pFVar3 = (this->Bundles).AllocatorInstance.Data;
    *(FName *)(pFVar3 + lVar6 * 0x18) = param_1;
    *(undefined8 *)(pFVar3 + lVar6 * 0x18 + 8) = 0;
    *(undefined8 *)(pFVar3 + lVar6 * 0x18 + 0x10) = 0;
    pFVar5 = (FAssetBundleEntry *)(pFVar3 + lVar6 * 0x18);
  }
  pTVar2 = &pFVar5->AssetPaths;
  if (pTVar2 != param_2) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (param_2->AllocatorInstance).Data;
    (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (pFVar5->AssetPaths).ArrayNum = param_2->ArrayNum;
    (pFVar5->AssetPaths).ArrayMax = param_2->ArrayMax;
    param_2->ArrayNum = 0;
    param_2->ArrayMax = 0;
  }
  return;
}

// SetBundleAssetsTruncated @ 141e60260

void __thiscall
FAssetBundleData::SetBundleAssetsTruncated
          (FAssetBundleData *this,FName param_1,
          TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FAssetBundleEntry *pFVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res18 [8];
  undefined8 local_28;
  undefined8 uStack_20;
  
  pFVar9 = FindEntry(this,param_1);
  if (pFVar9 == (FAssetBundleEntry *)0x0) {
    iVar7 = (this->Bundles).ArrayNum;
    piVar1 = &(this->Bundles).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,(ForAnyElementType *)this,piVar1);
    }
    lVar10 = (longlong)iVar7;
    (this->Bundles).ArrayNum = iVar7 + 1;
    pFVar12 = (this->Bundles).AllocatorInstance.Data;
    *(FName *)(pFVar12 + lVar10 * 0x18) = param_1;
    *(undefined8 *)(pFVar12 + lVar10 * 0x18 + 8) = 0;
    *(undefined8 *)(pFVar12 + lVar10 * 0x18 + 0x10) = 0;
    pFVar9 = (FAssetBundleEntry *)(pFVar12 + lVar10 * 0x18);
  }
  uVar3 = param_2->ArrayNum;
  pTVar2 = &pFVar9->AssetPaths;
  if (-1 < (int)uVar3) {
    piVar1 = &(pFVar9->AssetPaths).ArrayMax;
    (pFVar9->AssetPaths).ArrayNum = 0;
    if ((pFVar9->AssetPaths).ArrayMax < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,uVar3,&pTVar2->AllocatorInstance,0,piVar1);
    }
    iVar7 = param_2->ArrayNum;
    pFVar12 = (param_2->AllocatorInstance).Data;
    pFVar11 = pFVar12 + (longlong)iVar7 * 0x20;
    while( true ) {
      if (param_2->ArrayNum != iVar7) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FSoftObjectPath_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar12 == pFVar11) break;
      local_28 = *(undefined8 *)pFVar12;
      uStack_20 = *(undefined8 *)(pFVar12 + 8);
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      if ((pFVar4 <= (FScriptContainerElement *)&local_28) &&
         ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)*piVar1 * 0x10)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar8 = (pFVar9->AssetPaths).ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x410,&pTVar2->AllocatorInstance,piVar1);
      }
      (pFVar9->AssetPaths).ArrayNum = iVar8 + 1;
      pFVar12 = pFVar12 + 0x20;
      pFVar4 = (pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
      *(undefined8 *)pFVar4 = local_28;
      *(undefined8 *)(pFVar4 + 8) = uStack_20;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

// ToDebugString @ 141e60920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FAssetBundleData::ToDebugString(FAssetBundleData *this,FString *__return_storage_ptr__)

{
  uint uVar1;
  bool bVar2;
  FName *pFVar3;
  void *pvVar4;
  ulonglong uVar5;
  FName this_00;
  FName FVar6;
  int iVar7;
  FName *this_01;
  FName *pFVar8;
  undefined1 auStack_288 [32];
  undefined1 local_268 [4];
  uint local_264;
  FString local_260;
  FAssetBundleData *local_250;
  FName *local_248;
  FString *local_240;
  FString local_238;
  FString local_228;
  TStringBuilderBase<wchar_t> local_218;
  wchar_t local_1f8 [220];
  wchar_t local_40 [4];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_288;
  this_01 = (FName *)(this->Bundles).AllocatorInstance.Data;
  local_218.Base = local_1f8;
  local_218.CurPos = local_1f8;
  local_264 = (this->Bundles).ArrayNum;
  uVar5 = (ulonglong)(int)local_264;
  bVar2 = true;
  pFVar8 = this_01 + 2;
  local_218.End = local_40;
  local_218.bIsDynamic = false;
  local_218.bIsExternal = false;
  local_248 = this_01 + uVar5 * 3;
  local_250 = this;
  local_240 = __return_storage_ptr__;
  while( true ) {
    pFVar3 = local_248;
    if ((this->Bundles).ArrayNum != (int)uVar5) {
      `TCheckedPointerIterator<FAssetBundleEntry_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_268);
    }
    if (this_01 == pFVar3) break;
    if (!bVar2) {
      if (local_218.End < local_218.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_218,1);
      }
      pvVar4 = FGenericPlatformString::Memcpy(local_218.CurPos,L"\n",2);
      local_218.CurPos = (wchar_t *)((longlong)pvVar4 + 2);
    }
    uVar1 = (pFVar8->ComparisonIndex).Value;
    bVar2 = true;
    this_00 = pFVar8[-1];
    local_260.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FVar6 = (FName)((longlong)this_00 + (longlong)(int)uVar1 * 0x10);
    local_260.Data.ArrayNum = 0;
    local_260.Data.ArrayMax = 0;
    while( true ) {
      if ((pFVar8->ComparisonIndex).Value != uVar1) {
        `TCheckedPointerIterator<FTopLevelAssetPath_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_268);
      }
      if (this_00 == FVar6) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars(&local_260,L", ",2);
      }
      FTopLevelAssetPath::ToString((FTopLevelAssetPath *)this_00,&local_238);
      iVar7 = local_238.Data.ArrayNum + -1;
      if (local_238.Data.ArrayNum == 0) {
        iVar7 = 0;
      }
      ::FString::AppendChars(&local_260,(wchar_t *)local_238.Data.AllocatorInstance.Data,iVar7);
      if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_238.Data.AllocatorInstance.Data);
      }
      this_00 = (FName)((longlong)this_00 + 0x10);
    }
    ::FName::ToString(this_01,&local_228);
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_218,L"%s -> (%s)");
    this = local_250;
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
    if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_260.Data.AllocatorInstance.Data);
    }
    uVar5 = (ulonglong)local_264;
    bVar2 = false;
    this_01 = this_01 + 3;
    pFVar8 = pFVar8 + 3;
  }
  if (local_218.End < local_218.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_218,1);
  }
  *local_218.CurPos = L'\0';
  ::FString::FString(local_240,local_218.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_218);
  return local_240;
}

