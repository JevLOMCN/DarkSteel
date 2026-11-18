// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// ~FWorldTilesGatherer @ 148a44320

void __thiscall FWorldTilesGatherer::~FWorldTilesGatherer(FWorldTilesGatherer *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->TilesLODCollection).field_0x48 = 0;
  pvVar1 = *(void **)&(this->TilesLODCollection).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FPackageNameAndLODIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FPackageNameAndLODIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FPackageNameAndLODIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TilesLODCollection);
  DestructItems<FString,int>
            ((FString *)(this->TilesCollection).AllocatorInstance.Data,
             (this->TilesCollection).ArrayNum);
  pFVar2 = (this->TilesCollection).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FString,int>
            ((FString *)(this->MapFilesToConsider).AllocatorInstance.Data,
             (this->MapFilesToConsider).ArrayNum);
  pFVar2 = (this->MapFilesToConsider).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7FDirectoryVisitor_IPlatformFile__6B_;
  return;
}

// BuildTileCollection @ 148a4b780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FWorldTilesGatherer::BuildTileCollection(FWorldTilesGatherer *this,FString *param_1)

{
  int *piVar1;
  FName FVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar6;
  UAssetManager *this_01;
  IAssetRegistry *pIVar7;
  ulonglong uVar8;
  FString *pFVar9;
  FName *pFVar10;
  uint uVar11;
  FPackageNameAndLODIndex *_Str;
  wchar_t *pwVar12;
  ForAnyElementType FVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  int iVar18;
  FScriptContainerElement *pFVar19;
  undefined1 auStackY_228 [32];
  FString local_1e8;
  undefined1 local_1d8 [8];
  FString local_1d0;
  int local_1c0;
  uint local_1b8;
  FTopLevelAssetPath local_1a8;
  FSoftObjectPath local_198;
  undefined1 local_178 [16];
  int local_168;
  FString local_160;
  undefined1 local_148 [16];
  FName local_138;
  int local_130;
  int local_12c;
  int local_128;
  FName local_118;
  uint uStack_110;
  uint uStack_10c;
  FString *local_108;
  FName *local_100;
  FString local_f8;
  FName local_e8;
  FName local_e0;
  FTopLevelAssetPath local_d8;
  FString local_c8;
  FString local_b8;
  longlong local_a8 [2];
  longlong local_98;
  FName local_88;
  FName FStack_80;
  FAssetDataTagMapSharedView local_70 [2];
  TReferenceControllerBase<1> *local_60;
  void *local_50;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_228;
  this_00 = FPlatformFileManager::Get();
  pIVar6 = FPlatformFileManager::GetPlatformFile(this_00);
  if ((param_1->Data).ArrayNum == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar6 + 0x1d0))(pIVar6,pwVar12,this);
  this_01 = UAssetManager::Get();
  pIVar7 = UAssetManager::GetAssetRegistry(this_01);
  (**(code **)((longlong)*pIVar7 + 0x220))(pIVar7,&this->MapFilesToConsider,0);
  local_1b8 = (this->MapFilesToConsider).ArrayNum;
  uVar8 = (ulonglong)(int)local_1b8;
  pFVar16 = (this->MapFilesToConsider).AllocatorInstance.Data;
  pFVar19 = pFVar16 + uVar8 * 0x10;
  while( true ) {
    if ((this->MapFilesToConsider).ArrayNum != (int)uVar8) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_1d8);
    }
    if (pFVar16 == pFVar19) break;
    FPackageName::FilenameToLongPackageName(&local_1e8,(FString *)pFVar16);
    pFVar9 = FPackageName::GetLongPackageAssetName(&local_c8,&local_1e8);
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    pFVar10 = ::FName::FName(&local_e8,pwVar12);
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_1e8.Data.ArrayNum != 0) {
      FVar13.Data = local_1e8.Data.AllocatorInstance.Data;
    }
    FVar2 = *pFVar10;
    pFVar10 = ::FName::FName(&local_e0,(wchar_t *)FVar13.Data);
    local_1a8.PackageName.ComparisonIndex.Value = 0;
    local_1a8.PackageName.Number = 0;
    local_1a8.AssetName.ComparisonIndex.Value = 0;
    local_1a8.AssetName.Number = 0;
    FTopLevelAssetPath::TrySetPath(&local_1a8,*pFVar10,FVar2);
    local_d8.PackageName = local_1a8.PackageName;
    local_d8.AssetName = local_1a8.AssetName;
    local_198.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_198.AssetPath.PackageName.Number = 0;
    local_198.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_198.AssetPath.AssetName.Number = 0;
    local_198.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_198.SubPathString.Data.ArrayNum = 0;
    local_198.SubPathString.Data.ArrayMax = 0;
    FSoftObjectPath::SetPath(&local_198,&local_d8);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    (**(code **)((longlong)*pIVar7 + 0x78))(pIVar7,local_a8,&local_198);
    if ((local_a8[0] != 0) && (local_98 != 0)) {
      local_148._0_4_ = local_88.ComparisonIndex.Value;
      local_148._4_4_ = local_88.Number;
      local_148._8_4_ = FStack_80.ComparisonIndex.Value;
      local_148._12_4_ = FStack_80.Number;
      bVar3 = FAssetData::IsRedirectorClassName((FTopLevelAssetPath *)local_148);
      FVar13.Data = local_1e8.Data.AllocatorInstance.Data;
      if (!bVar3) {
        lVar15 = (longlong)local_1e8.Data.ArrayNum;
        local_1d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1d0.Data.ArrayNum = local_1e8.Data.ArrayNum;
        if (local_1e8.Data.ArrayNum == 0) {
          local_1d0.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_1e8.Data.ArrayNum,0,(ForAnyElementType *)&local_1d0,
                     local_1e8.Data.ArrayNum,&local_1d0.Data.ArrayMax);
          memcpy(local_1d0.Data.AllocatorInstance.Data,FVar13.Data,lVar15 * 2);
        }
        local_1c0 = 0;
        uVar4 = ::FString::Find(&local_1e8,L"_LOD",4,IgnoreCase,FromEnd,-1);
        if (uVar4 != 0xffffffff) {
          uVar11 = local_1e8.Data.ArrayNum - 1;
          if (local_1e8.Data.ArrayNum == 0) {
            uVar11 = 0;
          }
          if ((int)uVar4 < (int)uVar11) {
            uVar11 = uVar4;
          }
          uVar17 = 0;
          if (0 < (int)uVar11) {
            uVar17 = uVar11;
          }
          FVar13.Data = (FScriptContainerElement *)L"";
          if (local_1e8.Data.ArrayNum != 0) {
            FVar13.Data = local_1e8.Data.AllocatorInstance.Data;
          }
          ::FString::ConstructFromPtrSize(&local_160,(wchar_t *)FVar13.Data,uVar17);
          pFVar9 = ::FString::FString(&local_b8,L"_LOD");
          iVar5 = (pFVar9->Data).ArrayNum;
          uVar11 = iVar5 + -1 + uVar4;
          if (iVar5 == 0) {
            uVar11 = uVar4;
          }
          ::FString::RightChop(&local_1e8,(FString *)(local_178 + 8),uVar11);
          if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          }
          _Str = (FPackageNameAndLODIndex *)L"";
          if (local_168 != 0) {
            _Str = (FPackageNameAndLODIndex *)local_178._8_8_;
          }
          iVar5 = _wtoi((wchar_t *)_Str);
          if (iVar5 - 1U < 4) {
            iVar18 = local_160.Data.ArrayNum + -1;
            if (local_160.Data.ArrayNum == 0) {
              iVar18 = 0;
            }
            ::FString::AssignRange
                      (&local_1d0,(wchar_t *)local_160.Data.AllocatorInstance.Data,iVar18);
          }
          else {
            iVar5 = -1;
          }
          local_1c0 = iVar5;
          if ((FPackageNameAndLODIndex *)local_178._8_8_ != (FPackageNameAndLODIndex *)0x0) {
            FMemory::Free((void *)local_178._8_8_);
          }
          if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_160.Data.AllocatorInstance.Data);
          }
        }
        local_138 = (FName)local_1d0.Data.AllocatorInstance.Data;
        local_130 = local_1d0.Data.ArrayNum;
        local_12c = local_1d0.Data.ArrayMax;
        local_128 = local_1c0;
        if (local_1c0 != -1) {
          if (local_1c0 == 0) {
            iVar5 = (this->TilesCollection).ArrayNum;
            piVar1 = &(this->TilesCollection).ArrayMax;
            if (iVar5 == *piVar1) {
              iVar5 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&(this->TilesCollection).AllocatorInstance,piVar1);
            }
            (this->TilesCollection).ArrayNum = iVar5 + 1;
            pFVar14 = (this->TilesCollection).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
            *(undefined8 *)pFVar14 = 0;
            *(FScriptContainerElement **)pFVar14 = local_1e8.Data.AllocatorInstance.Data;
            local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            *(int *)(pFVar14 + 8) = local_1e8.Data.ArrayNum;
            *(int *)(pFVar14 + 0xc) = local_1e8.Data.ArrayMax;
            local_1e8.Data.ArrayNum = 0;
            local_1e8.Data.ArrayMax = 0;
          }
          else {
            local_118 = (FName)local_1d0.Data.AllocatorInstance.Data;
            uStack_110 = local_1d0.Data.ArrayNum - 1;
            if (local_1d0.Data.ArrayNum == 0) {
              uStack_110 = 0;
            }
            local_148._12_4_ = uStack_10c;
            local_148._8_4_ = uStack_110;
            local_148._0_8_ = local_1d0.Data.AllocatorInstance.Data;
            FPackageName::GetShortName(&local_f8,(TStringView<wchar_t> *)local_148);
            local_108 = &local_f8;
            local_100 = &local_138;
            TSet<TTuple<FString,FPackageNameAndLODIndex>,TDefaultMapHashableKeyFuncs<FString,FPackageNameAndLODIndex,1>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FString_&&,FPackageNameAndLODIndex_&&>_>
                      ((TSet<TTuple<FString,FPackageNameAndLODIndex>,TDefaultMapHashableKeyFuncs<FString,FPackageNameAndLODIndex,1>,FDefaultSetAllocator>
                        *)&this->TilesLODCollection,
                       (TPairInitializer<FString_&&,FPackageNameAndLODIndex_&&> *)local_178,
                       (bool *)&local_108);
            if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f8.Data.AllocatorInstance.Data);
            }
          }
        }
        if (local_138 != (FName)0x0) {
          FMemory::Free((void *)local_138);
        }
      }
    }
    if (local_50 != (void *)0x0) {
      FMemory::Free(local_50);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
    FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(local_70);
    if (local_198.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.SubPathString.Data.AllocatorInstance.Data);
    }
    if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
    }
    uVar8 = (ulonglong)local_1b8;
    pFVar16 = pFVar16 + 0x10;
  }
  return;
}

// Visit @ 148a6cdd0

bool __thiscall FWorldTilesGatherer::Visit(FWorldTilesGatherer *this,wchar_t *param_1,bool param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FString *pFVar4;
  FString *pFVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  FString local_28;
  FString local_18;
  
  if (!param_2) {
    ::FString::FString(&local_28,param_1);
    pFVar4 = FPackageName::GetMapPackageExtension();
    pFVar5 = FPaths::GetExtension(&local_18,&local_28,true);
    iVar3 = (pFVar4->Data).ArrayNum;
    iVar2 = (pFVar5->Data).ArrayNum;
    if (iVar2 == iVar3) {
      if (iVar2 < 2) {
        bVar7 = true;
      }
      else {
        iVar3 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(pFVar5->Data).AllocatorInstance.Data,
                           (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
        bVar7 = iVar3 == 0;
      }
    }
    else {
      bVar7 = iVar3 + iVar2 == 1;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar7) {
      iVar3 = (this->MapFilesToConsider).ArrayNum;
      piVar1 = &(this->MapFilesToConsider).ArrayMax;
      if (iVar3 == *piVar1) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->MapFilesToConsider).AllocatorInstance,piVar1);
      }
      (this->MapFilesToConsider).ArrayNum = iVar3 + 1;
      pFVar6 = (this->MapFilesToConsider).AllocatorInstance.Data + (longlong)iVar3 * 0x10;
      *(undefined8 *)pFVar6 = 0;
      *(FScriptContainerElement **)pFVar6 = local_28.Data.AllocatorInstance.Data;
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar6 + 8) = local_28.Data.ArrayNum;
      *(int *)(pFVar6 + 0xc) = local_28.Data.ArrayMax;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return true;
}

