// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 51

// FPackageReader @ 142b4e2a0

FPackageReader * __thiscall FPackageReader::FPackageReader(FPackageReader *this)

{
  FArchiveState::FArchiveState((FArchiveState *)this);
  this->_padding_ = (longlong)&___7FPackageReader__6B_;
  (this->LongPackageName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LongPackageName).Data.ArrayNum = 0;
  (this->LongPackageName).Data.ArrayMax = 0;
  (this->PackageFilename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PackageFilename).Data.ArrayNum = 0;
  (this->PackageFilename).Data.ArrayMax = 0;
  this->Loader = (FArchive *)0x0;
  FPackageFileSummary::FPackageFileSummary(&this->PackageFileSummary);
  (this->NameMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NameMap).ArrayNum = 0;
  (this->NameMap).ArrayMax = 0;
  (this->ImportMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ImportMap).ArrayNum = 0;
  (this->ImportMap).ArrayMax = 0;
  (this->ExportMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExportMap).ArrayNum = 0;
  (this->ExportMap).ArrayMax = 0;
  (this->DependsMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DependsMap).ArrayNum = 0;
  (this->DependsMap).ArrayMax = 0;
  (this->SoftPackageReferenceList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SoftPackageReferenceList).ArrayNum = 0;
  (this->SoftPackageReferenceList).ArrayMax = 0;
  (this->SoftObjectPathMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SoftObjectPathMap).ArrayNum = 0;
  (this->SoftObjectPathMap).ArrayMax = 0;
  (this->GatherableTextDataMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GatherableTextDataMap).ArrayNum = 0;
  (this->GatherableTextDataMap).ArrayMax = 0;
  (this->ThumbnailMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ThumbnailMap).ArrayNum = 0;
  (this->ThumbnailMap).ArrayMax = 0;
  this->PackageFileSize = 0;
  this->AssetRegistryDependencyDataOffset = -1;
  this->AssetRegistryVersion = 0xffffffff;
  this->bLoaderOwner = false;
  (**(code **)(this->_padding_ + 200))(this,1);
  (**(code **)(this->_padding_ + 0x108))(this,1);
  return this;
}

// ~FPackageReader @ 142b4f310

void __thiscall FPackageReader::~FPackageReader(FPackageReader *this)

{
  FArchive *pFVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FPackageReader__6B_;
  pFVar1 = this->Loader;
  if ((pFVar1 != (FArchive *)0x0) && (this->bLoaderOwner != false)) {
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
  }
  pFVar2 = (this->ThumbnailMap).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FGatherableTextData,int>
            ((FGatherableTextData *)(this->GatherableTextDataMap).AllocatorInstance.Data,
             (this->GatherableTextDataMap).ArrayNum);
  pFVar2 = (this->GatherableTextDataMap).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FSoftObjectPath,int>
            ((FSoftObjectPath *)(this->SoftObjectPathMap).AllocatorInstance.Data,
             (this->SoftObjectPathMap).ArrayNum);
  pFVar2 = (this->SoftObjectPathMap).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SoftPackageReferenceList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TArray<FPackageIndex,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FPackageIndex,TSizedDefaultAllocator<32>_> *)
             (this->DependsMap).AllocatorInstance.Data,(this->DependsMap).ArrayNum);
  pFVar2 = (this->DependsMap).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ExportMap).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ImportMap).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->NameMap).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FPackageFileSummary::~FPackageFileSummary(&this->PackageFileSummary);
  pFVar2 = (this->PackageFilename).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->LongPackageName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FArchive::~FArchive((FArchive *)this);
  return;
}

// operator<< @ 142b4f990

/* WARNING: Enum "Type": Some values do not have unique names */

FArchive * __thiscall FPackageReader::operator<<(FPackageReader *this,FName *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  code *pcVar3;
  bool bVar4;
  FArchive *pFVar5;
  FName FVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint local_res8 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  
  plVar1 = (longlong *)this->_padding_;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((this->_padding_ & 0x10000) == 0) {
      (**(code **)(this->_padding_ + 0x188))(this,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  lVar9 = (longlong)(int)local_res8[0];
  if (((int)local_res8[0] < 0) || ((this->NameMap).ArrayNum <= (int)local_res8[0])) {
    if (2 < (byte)LogAssetRegistry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
    }
    FArchiveState::SetError((FArchiveState *)this);
    return (FArchive *)this;
  }
  FVar6.ComparisonIndex.Value = 0;
  FVar6.Number = 0;
  uVar7 = 0;
  if ((int)local_res8[0] < (this->NameMap).ArrayNum) {
    uVar7 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FArchive *)(*pcVar3)();
    return pFVar5;
  }
  plVar1 = (longlong *)this->_padding_;
  puVar2 = (uint *)*plVar1;
  if (*(longlong *)((this->NameMap).AllocatorInstance.Data + lVar9 * 8) == 0) {
    if ((uint *)plVar1[1] < puVar2 + 1) {
      if ((this->_padding_ & 0x10000) == 0) {
        (**(code **)(this->_padding_ + 0x188))(this,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res20);
        FVar6.ComparisonIndex.Value = 0;
        FVar6.Number = 0;
      }
    }
    else {
      *plVar1 = (longlong)(puVar2 + 1);
    }
  }
  else {
    if ((uint *)plVar1[1] < puVar2 + 1) {
      if ((this->_padding_ & 0x10000) == 0) {
        (**(code **)(this->_padding_ + 0x188))(this,local_res18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res18);
      }
    }
    else {
      local_res18[0] = *puVar2;
      *plVar1 = *plVar1 + 4;
    }
    uVar7 = local_res18[0];
    lVar9 = (longlong)(int)local_res8[0];
    uVar8 = 0;
    if ((int)local_res8[0] < (this->NameMap).ArrayNum) {
      uVar8 = ~local_res8[0] >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FArchive *)(*pcVar3)();
      return pFVar5;
    }
    FVar6.Number = uVar7;
    FVar6.ComparisonIndex.Value = *(uint *)((this->NameMap).AllocatorInstance.Data + lVar9 * 8);
  }
  *param_1 = FVar6;
  return (FArchive *)this;
}

// operator() @ 142b50ac0

FSoftObjectPath * __thiscall
`FPackageReader::ConvertLinkerTableToPaths'::__l2::<lambda_1>::operator()
          (void *this,FPackageIndex param_1)

{
  FUtf8String *pFVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  TSet<TTuple<FPackageIndex,FSoftObjectPath>,TDefaultMapHashableKeyFuncs<FPackageIndex,FSoftObjectPath,0>,FDefaultSetAllocator>
  *this_00;
  code *pcVar5;
  bool bVar6;
  FSoftObjectPath *pFVar7;
  FString *pFVar8;
  FString *pFVar9;
  uint uVar10;
  uint *puVar11;
  FPackageIndex FVar12;
  FSoftObjectPath *pFVar13;
  int iVar14;
  longlong *plVar15;
  int iVar16;
  int iVar17;
  TPairInitializer<FPackageIndex_const_&,FSoftObjectPath_const_&> local_res8;
  FName local_res18;
  undefined8 local_res20;
  FName local_248;
  FName FStack_240;
  FScriptContainerElement *local_238;
  undefined8 local_230;
  FString local_228;
  FString local_218;
  FTopLevelAssetPath local_208;
  FTopLevelAssetPath local_1f8;
  FTopLevelAssetPath local_1e8;
  FTopLevelAssetPath local_1d8;
  FTopLevelAssetPath local_1c8;
  TStringOverload<FString> local_1b8;
  TStringOverload<FString> local_1a8;
  FString local_198;
  FSoftObjectPath **local_188;
  FName *local_180;
  FTopLevelAssetPath local_178;
  FTopLevelAssetPath local_168;
  FTopLevelAssetPath local_158;
  FString local_148;
  FTopLevelAssetPath local_138;
  FString local_128;
  FString local_118;
  FTopLevelAssetPath local_108;
  FString local_f8;
  FString local_e8;
  FSoftObjectPath local_d8;
  FSoftObjectPath local_b8;
  FSoftObjectPath local_98;
  FSoftObjectPath local_78;
  FSoftObjectPath local_58;
  
  piVar2 = *(int **)((longlong)this + 0x28);
  *piVar2 = *piVar2 + 1;
  local_res8.Value._0_4_ = param_1.Index;
  if ((*(int *)((longlong)this + 0x30) * 2 + 2 < *piVar2) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PackageReader.cpp"
                         ,0x5bc,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar7 = (FSoftObjectPath *)(*pcVar5)();
    return pFVar7;
  }
  piVar2 = *(int **)((longlong)this + 0x28);
  if (local_res8.Value._0_4_ == 0) {
    pFVar7 = *(FSoftObjectPath **)((longlong)this + 0x20);
  }
  else {
    plVar3 = *(longlong **)((longlong)this + 0x10);
    pFVar13 = (FSoftObjectPath *)0x0;
    iVar16 = 0;
    if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
      plVar15 = (longlong *)plVar3[8];
      if ((longlong *)plVar3[8] == (longlong *)0x0) {
        plVar15 = plVar3 + 7;
      }
      uVar10 = *(uint *)((longlong)plVar15 +
                        (ulonglong)((int)plVar3[9] - 1U & local_res8.Value._0_4_) * 4);
      if (uVar10 != 0xffffffff) {
        do {
          puVar11 = (uint *)((longlong)(int)uVar10 * 0x30 + *plVar3);
          if (*puVar11 == local_res8.Value._0_4_) {
            pFVar7 = (FSoftObjectPath *)(puVar11 + 2);
            if (puVar11 == (uint *)0x0) {
              pFVar7 = pFVar13;
            }
            if (pFVar7 != (FSoftObjectPath *)0x0) goto LAB_142b5120b;
            break;
          }
          uVar10 = puVar11[10];
        } while (uVar10 != 0xffffffff);
      }
    }
    local_res18.ComparisonIndex.Value = 0;
    local_res18.Number = 0;
    FVar12.Index = iVar16;
    if (local_res8.Value._0_4_ < 1) {
      if ((-1 < local_res8.Value._0_4_) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsImport()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                             ,0x55,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar7 = (FSoftObjectPath *)(*pcVar5)();
        return pFVar7;
      }
      plVar3 = *(longlong **)this;
      iVar17 = -1 - local_res8.Value._0_4_;
      if (iVar17 < (int)plVar3[1]) {
        if ((iVar17 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar7 = (FSoftObjectPath *)(*pcVar5)();
          return pFVar7;
        }
        lVar4 = *plVar3;
        local_res18 = *(FName *)((longlong)iVar17 * 0x38 + lVar4);
        FVar12.Index = *(int *)((longlong)iVar17 * 0x38 + 8 + lVar4);
      }
    }
    else {
      if ((local_res8.Value._0_4_ < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsExport()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                             ,0x5b,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar7 = (FSoftObjectPath *)(*pcVar5)();
        return pFVar7;
      }
      plVar3 = *(longlong **)((longlong)this + 8);
      iVar17 = local_res8.Value._0_4_ - 1;
      if (iVar17 < (int)plVar3[1]) {
        if ((iVar17 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar7 = (FSoftObjectPath *)(*pcVar5)();
          return pFVar7;
        }
        lVar4 = *plVar3;
        local_res18 = *(FName *)((longlong)iVar17 * 0x68 + lVar4);
        FVar12.Index = *(int *)((longlong)iVar17 * 0x68 + 8 + lVar4);
      }
    }
    local_248.ComparisonIndex.Value = 0;
    local_248.Number = 0;
    FStack_240.ComparisonIndex.Value = 0;
    FStack_240.Number = 0;
    local_238 = (FScriptContainerElement *)0x0;
    local_230 = 0;
    if (local_res18 != (FName)0x0) {
      pFVar7 = UE::Core::Private::Function::
               TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,FSoftObjectPath_&___cdecl(FPackageIndex)>
               ::operator()(*(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,FSoftObjectPath_&___cdecl(FPackageIndex)>
                              **)((longlong)this + 0x18),FVar12);
      if ((pFVar7->AssetPath).PackageName == (FName)0x0) {
        if (local_res8.Value._0_4_ < 1) {
          local_res20 = 0;
          local_1f8.PackageName.ComparisonIndex.Value = 0;
          local_1f8.PackageName.Number = 0;
          local_1f8.AssetName.ComparisonIndex.Value = 0;
          local_1f8.AssetName.Number = 0;
          FTopLevelAssetPath::TrySetPath(&local_1f8,local_res18,(FName)0x0);
          local_168.PackageName = local_1f8.PackageName;
          local_168.AssetName = local_1f8.AssetName;
          pFVar7 = FSoftObjectPath::ConstructFromAssetPath(&local_b8,&local_168);
          local_248 = (pFVar7->AssetPath).PackageName;
          FStack_240 = (pFVar7->AssetPath).AssetName;
          pFVar1 = &pFVar7->SubPathString;
          local_f8.Data.AllocatorInstance.Data = local_b8.SubPathString.Data.AllocatorInstance.Data;
          if ((FUtf8String *)&local_238 != pFVar1) {
            if (local_238 != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_238);
            }
            local_238 = (pFVar1->Data).AllocatorInstance.Data;
            (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_230._0_4_ = (pFVar7->SubPathString).Data.ArrayNum;
            local_230._4_4_ = (pFVar7->SubPathString).Data.ArrayMax;
            (pFVar7->SubPathString).Data.ArrayNum = 0;
            (pFVar7->SubPathString).Data.ArrayMax = 0;
            local_f8.Data.AllocatorInstance.Data =
                 local_b8.SubPathString.Data.AllocatorInstance.Data;
          }
        }
        else {
          local_208.PackageName.ComparisonIndex.Value = 0;
          local_208.PackageName.Number = 0;
          local_208.AssetName.ComparisonIndex.Value = 0;
          local_208.AssetName.Number = 0;
          FTopLevelAssetPath::TrySetPath(&local_208,*(FName *)((longlong)this + 0x34),local_res18);
          local_178.PackageName = local_208.PackageName;
          local_178.AssetName = local_208.AssetName;
          pFVar7 = FSoftObjectPath::ConstructFromAssetPath(&local_d8,&local_178);
          local_248 = (pFVar7->AssetPath).PackageName;
          FStack_240 = (pFVar7->AssetPath).AssetName;
          pFVar1 = &pFVar7->SubPathString;
          local_f8.Data.AllocatorInstance.Data = local_d8.SubPathString.Data.AllocatorInstance.Data;
          if ((FUtf8String *)&local_238 != pFVar1) {
            if (local_238 != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_238);
            }
            local_238 = (pFVar1->Data).AllocatorInstance.Data;
            (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_230._0_4_ = (pFVar7->SubPathString).Data.ArrayNum;
            local_230._4_4_ = (pFVar7->SubPathString).Data.ArrayMax;
            (pFVar7->SubPathString).Data.ArrayNum = 0;
            (pFVar7->SubPathString).Data.ArrayMax = 0;
            local_f8.Data.AllocatorInstance.Data =
                 local_d8.SubPathString.Data.AllocatorInstance.Data;
          }
        }
      }
      else if ((pFVar7->AssetPath).AssetName == (FName)0x0) {
        local_1e8.PackageName.ComparisonIndex.Value = 0;
        local_1e8.PackageName.Number = 0;
        local_1e8.AssetName.ComparisonIndex.Value = 0;
        local_1e8.AssetName.Number = 0;
        FTopLevelAssetPath::TrySetPath(&local_1e8,(pFVar7->AssetPath).PackageName,local_res18);
        local_158.PackageName = local_1e8.PackageName;
        local_158.AssetName = local_1e8.AssetName;
        pFVar7 = FSoftObjectPath::ConstructFromAssetPath(&local_98,&local_158);
        local_248 = (pFVar7->AssetPath).PackageName;
        FStack_240 = (pFVar7->AssetPath).AssetName;
        pFVar1 = &pFVar7->SubPathString;
        local_f8.Data.AllocatorInstance.Data = local_98.SubPathString.Data.AllocatorInstance.Data;
        if ((FUtf8String *)&local_238 != pFVar1) {
          if (local_238 != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_238);
          }
          local_238 = (pFVar1->Data).AllocatorInstance.Data;
          (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_230._0_4_ = (pFVar7->SubPathString).Data.ArrayNum;
          local_230._4_4_ = (pFVar7->SubPathString).Data.ArrayMax;
          (pFVar7->SubPathString).Data.ArrayNum = 0;
          (pFVar7->SubPathString).Data.ArrayMax = 0;
          local_f8.Data.AllocatorInstance.Data = local_98.SubPathString.Data.AllocatorInstance.Data;
        }
      }
      else {
        iVar17 = (pFVar7->SubPathString).Data.ArrayNum;
        iVar14 = iVar17 + -1;
        if (iVar17 == 0) {
          iVar14 = 0;
        }
        pFVar8 = ::FString::ConstructFromPtrSize
                           (&local_148,(uchar *)(pFVar7->SubPathString).Data.AllocatorInstance.Data,
                            iVar14);
        iVar17 = iVar16;
        if (&local_e8 != pFVar8) {
          pFVar13 = (FSoftObjectPath *)(pFVar8->Data).AllocatorInstance.Data;
          (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar17 = (pFVar8->Data).ArrayNum;
          (pFVar8->Data).ArrayNum = 0;
          (pFVar8->Data).ArrayMax = 0;
        }
        if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.Data.AllocatorInstance.Data);
        }
        if (pFVar13 != (FSoftObjectPath *)0x0) {
          FMemory::Free(pFVar13);
        }
        if (iVar17 < 2) {
          pFVar8 = ::FName::ToString(&local_res18,&local_128);
          local_1b8.String.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
          (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1b8.String.Data.ArrayNum = (pFVar8->Data).ArrayNum;
          local_1b8.String.Data.ArrayMax = (pFVar8->Data).ArrayMax;
          (pFVar8->Data).ArrayNum = 0;
          (pFVar8->Data).ArrayMax = 0;
          local_1d8.PackageName.ComparisonIndex.Value = 0;
          local_1d8.PackageName.Number = 0;
          local_1d8.AssetName.ComparisonIndex.Value = 0;
          local_1d8.AssetName.Number = 0;
          FTopLevelAssetPath::TrySetPath
                    (&local_1d8,(pFVar7->AssetPath).PackageName,(pFVar7->AssetPath).AssetName);
          local_138.PackageName = local_1d8.PackageName;
          local_138.AssetName = local_1d8.AssetName;
          pFVar7 = FSoftObjectPath::ConstructFromAssetPathAndSubpath
                             (&local_78,&local_138,&local_1b8);
          local_248 = (pFVar7->AssetPath).PackageName;
          FStack_240 = (pFVar7->AssetPath).AssetName;
          pFVar1 = &pFVar7->SubPathString;
          if ((FUtf8String *)&local_238 != pFVar1) {
            if (local_238 != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_238);
            }
            local_238 = (pFVar1->Data).AllocatorInstance.Data;
            (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_230._0_4_ = (pFVar7->SubPathString).Data.ArrayNum;
            local_230._4_4_ = (pFVar7->SubPathString).Data.ArrayMax;
            (pFVar7->SubPathString).Data.ArrayNum = 0;
            (pFVar7->SubPathString).Data.ArrayMax = 0;
          }
          local_f8.Data.AllocatorInstance.Data = local_128.Data.AllocatorInstance.Data;
          if (local_78.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_78.SubPathString.Data.AllocatorInstance.Data);
            local_f8.Data.AllocatorInstance.Data = local_128.Data.AllocatorInstance.Data;
          }
        }
        else {
          pFVar8 = ::FName::ToString(&local_res18,&local_f8);
          iVar17 = (pFVar7->SubPathString).Data.ArrayNum;
          local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_228.Data.ArrayNum = 0;
          local_228.Data.ArrayMax = 0;
          iVar14 = iVar17 + -1;
          if (iVar17 == 0) {
            iVar14 = iVar16;
          }
          pFVar9 = ::FString::ConstructFromPtrSize
                             (&local_118,
                              (uchar *)(pFVar7->SubPathString).Data.AllocatorInstance.Data,iVar14);
          if (&local_228 != pFVar9) {
            if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_228.Data.AllocatorInstance.Data);
            }
            local_228.Data.AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
            (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_228.Data.ArrayNum = (pFVar9->Data).ArrayNum;
            local_228.Data.ArrayMax = (pFVar9->Data).ArrayMax;
            (pFVar9->Data).ArrayNum = 0;
            (pFVar9->Data).ArrayMax = 0;
          }
          if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_118.Data.AllocatorInstance.Data);
          }
          ::FString::ConcatFC(&local_198,&local_228,L".");
          ::FString::ConcatFF(&local_218,&local_198,pFVar8);
          local_1a8.String.Data.AllocatorInstance.Data = local_218.Data.AllocatorInstance.Data;
          local_1a8.String.Data.ArrayNum = local_218.Data.ArrayNum;
          local_1a8.String.Data.ArrayMax = local_218.Data.ArrayMax;
          local_218.Data.ArrayNum = 0;
          local_218.Data.ArrayMax = 0;
          local_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1c8.PackageName.ComparisonIndex.Value = 0;
          local_1c8.PackageName.Number = 0;
          local_1c8.AssetName.ComparisonIndex.Value = 0;
          local_1c8.AssetName.Number = 0;
          FTopLevelAssetPath::TrySetPath
                    (&local_1c8,(pFVar7->AssetPath).PackageName,(pFVar7->AssetPath).AssetName);
          local_108.PackageName = local_1c8.PackageName;
          local_108.AssetName = local_1c8.AssetName;
          pFVar7 = FSoftObjectPath::ConstructFromAssetPathAndSubpath
                             (&local_58,&local_108,&local_1a8);
          local_248 = (pFVar7->AssetPath).PackageName;
          FStack_240 = (pFVar7->AssetPath).AssetName;
          pFVar1 = &pFVar7->SubPathString;
          if ((FUtf8String *)&local_238 != pFVar1) {
            if (local_238 != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_238);
            }
            local_238 = (pFVar1->Data).AllocatorInstance.Data;
            (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_230._0_4_ = (pFVar7->SubPathString).Data.ArrayNum;
            local_230._4_4_ = (pFVar7->SubPathString).Data.ArrayMax;
            (pFVar7->SubPathString).Data.ArrayNum = 0;
            (pFVar7->SubPathString).Data.ArrayMax = 0;
          }
          if (local_58.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_58.SubPathString.Data.AllocatorInstance.Data);
          }
          if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_218.Data.AllocatorInstance.Data);
          }
          if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_198.Data.AllocatorInstance.Data);
          }
          if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_228.Data.AllocatorInstance.Data);
          }
        }
      }
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
    }
    this_00 = *(TSet<TTuple<FPackageIndex,FSoftObjectPath>,TDefaultMapHashableKeyFuncs<FPackageIndex,FSoftObjectPath,0>,FDefaultSetAllocator>
                **)((longlong)this + 0x10);
    local_188 = &local_res8.Value;
    local_180 = &local_248;
    TSet<TTuple<FPackageIndex,FSoftObjectPath>,TDefaultMapHashableKeyFuncs<FPackageIndex,FSoftObjectPath,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FPackageIndex_const_&,FSoftObjectPath_const_&>_>
              (this_00,&local_res8,(bool *)&local_188);
    lVar4 = *(longlong *)&this_00->Elements;
    if (local_238 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238);
    }
    pFVar7 = (FSoftObjectPath *)(lVar4 + (longlong)(int)local_res8.Key * 0x30 + 8);
  }
LAB_142b5120b:
  *piVar2 = *piVar2 + -1;
  return pFVar7;
}

// operator() @ 142b517b0

FSoftObjectPath * __thiscall
`FPackageReader::ReadLinkerObjects'::__l2::<lambda_1>::operator()
          (void *this,FSoftObjectPath *__return_storage_ptr__,FPackageIndex param_1)

{
  longlong *plVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  bool bVar5;
  FSoftObjectPath *pFVar6;
  FSoftObjectPath local_f8;
  FSoftObjectPath local_d8;
  wchar_t *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  wchar_t *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  wchar_t *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  FSoftObjectPath local_58;
  FSoftObjectPath local_38;
  
  if (param_1.Index == 0) {
    (__return_storage_ptr__->AssetPath).PackageName.ComparisonIndex = 0;
    (__return_storage_ptr__->AssetPath).PackageName.Number = 0;
    local_b8 = L"/Script/CoreUObject.Class";
    (__return_storage_ptr__->AssetPath).AssetName.ComparisonIndex = 0;
    (__return_storage_ptr__->AssetPath).AssetName.Number = 0;
    (__return_storage_ptr__->SubPathString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->SubPathString).Data.ArrayNum = 0;
    (__return_storage_ptr__->SubPathString).Data.ArrayMax = 0;
    uStack_b0 = 0x19;
    local_88._12_4_ = uStack_ac;
    local_88.Size = 0x19;
    local_88.DataPtr = L"/Script/CoreUObject.Class";
    FSoftObjectPath::SetPath(__return_storage_ptr__,&local_88);
  }
  else {
    if (param_1.Index < 1) {
      if ((-1 < param_1.Index) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsImport()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                             ,0x55,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FSoftObjectPath *)(*pcVar2)();
        return pFVar6;
      }
      plVar1 = *(longlong **)((longlong)this + 8);
      if (~param_1.Index < (int)plVar1[1]) {
        if ((-1 < param_1.Index) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FSoftObjectPath *)(*pcVar2)();
          return pFVar6;
        }
        pFVar6 = FSoftObjectPath::FSoftObjectPath
                           (&local_38,(FSoftObjectPath *)((longlong)~param_1.Index * 0x20 + *plVar1)
                           );
        bVar5 = true;
        bVar4 = false;
      }
      else {
        uStack_90 = 0x17;
        local_98 = L"/Script/Unknown.Unknown";
        local_68._12_4_ = uStack_8c;
        local_68.Size = 0x17;
        local_68.DataPtr = L"/Script/Unknown.Unknown";
        local_d8.AssetPath.PackageName.ComparisonIndex.Value = 0;
        local_d8.AssetPath.PackageName.Number = 0;
        local_d8.AssetPath.AssetName.ComparisonIndex.Value = 0;
        local_d8.AssetPath.AssetName.Number = 0;
        local_d8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d8.SubPathString.Data.ArrayNum = 0;
        local_d8.SubPathString.Data.ArrayMax = 0;
        FSoftObjectPath::SetPath(&local_d8,&local_68);
        pFVar6 = &local_d8;
        bVar5 = false;
        bVar4 = true;
      }
      FVar3 = (pFVar6->AssetPath).AssetName;
      (__return_storage_ptr__->AssetPath).PackageName = (pFVar6->AssetPath).PackageName;
      (__return_storage_ptr__->AssetPath).AssetName = FVar3;
      (__return_storage_ptr__->SubPathString).Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->SubPathString).Data.AllocatorInstance.Data =
           (pFVar6->SubPathString).Data.AllocatorInstance.Data;
      (pFVar6->SubPathString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->SubPathString).Data.ArrayNum = (pFVar6->SubPathString).Data.ArrayNum;
      (__return_storage_ptr__->SubPathString).Data.ArrayMax = (pFVar6->SubPathString).Data.ArrayMax;
      (pFVar6->SubPathString).Data.ArrayNum = 0;
      (pFVar6->SubPathString).Data.ArrayMax = 0;
      if ((bVar4) &&
         (local_d8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_d8.SubPathString.Data.AllocatorInstance.Data);
      }
    }
    else {
      plVar1 = *(longlong **)this;
      if (param_1.Index + -1 < (int)plVar1[1]) {
        if ((param_1.Index + -1 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FSoftObjectPath *)(*pcVar2)();
          return pFVar6;
        }
        pFVar6 = FSoftObjectPath::FSoftObjectPath
                           (&local_58,
                            (FSoftObjectPath *)(*plVar1 + (longlong)param_1.Index * 0x20 + -0x20));
        bVar5 = true;
        bVar4 = false;
      }
      else {
        uStack_a0 = 0x17;
        local_a8 = L"/Script/Unknown.Unknown";
        local_78._12_4_ = uStack_9c;
        local_78.Size = 0x17;
        local_78.DataPtr = L"/Script/Unknown.Unknown";
        local_f8.AssetPath.PackageName.ComparisonIndex.Value = 0;
        local_f8.AssetPath.PackageName.Number = 0;
        local_f8.AssetPath.AssetName.ComparisonIndex.Value = 0;
        local_f8.AssetPath.AssetName.Number = 0;
        local_f8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_f8.SubPathString.Data.ArrayNum = 0;
        local_f8.SubPathString.Data.ArrayMax = 0;
        FSoftObjectPath::SetPath(&local_f8,&local_78);
        pFVar6 = &local_f8;
        bVar5 = false;
        bVar4 = true;
      }
      FVar3 = (pFVar6->AssetPath).AssetName;
      (__return_storage_ptr__->AssetPath).PackageName = (pFVar6->AssetPath).PackageName;
      (__return_storage_ptr__->AssetPath).AssetName = FVar3;
      (__return_storage_ptr__->SubPathString).Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->SubPathString).Data.AllocatorInstance.Data =
           (pFVar6->SubPathString).Data.AllocatorInstance.Data;
      (pFVar6->SubPathString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->SubPathString).Data.ArrayNum = (pFVar6->SubPathString).Data.ArrayNum;
      (__return_storage_ptr__->SubPathString).Data.ArrayMax = (pFVar6->SubPathString).Data.ArrayMax;
      (pFVar6->SubPathString).Data.ArrayNum = 0;
      (pFVar6->SubPathString).Data.ArrayMax = 0;
      local_38.SubPathString.Data.AllocatorInstance.Data =
           local_58.SubPathString.Data.AllocatorInstance.Data;
      if ((bVar4) &&
         (local_f8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_f8.SubPathString.Data.AllocatorInstance.Data);
        local_38.SubPathString.Data.AllocatorInstance.Data =
             local_58.SubPathString.Data.AllocatorInstance.Data;
      }
    }
    if ((bVar5) &&
       (local_38.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_38.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// ApplyRelocationToImportMapAndSoftPackageReferenceList @ 142b54e00

void __thiscall
FPackageReader::ApplyRelocationToImportMapAndSoftPackageReferenceList
          (FPackageReader *this,TStringView<wchar_t> *param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2,
          TArray<TTuple<FName,UE::AssetRegistry::EExtraDependencyFlags>,TSizedDefaultAllocator<32>_>
          *param_3)

{
  return;
}

// ConvertLinkerTableToPaths @ 142b57170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FPackageReader::ConvertLinkerTableToPaths
          (FName param_1,TArray<FObjectExport,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FObjectImport,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *param_4,
          TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *param_5)

{
  int iVar1;
  FSoftObjectPath *pFVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined8 uVar13;
  FSoftObjectPath *pFVar14;
  ForAnyElementType FVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  FScriptContainerElement *pFVar21;
  ForElementType<unsigned_int> FVar22;
  uint uVar23;
  undefined1 auStack_218 [32];
  FSoftObjectPath *local_1f8;
  FSoftObjectPath *local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  undefined4 local_1c8 [2];
  int local_1c0 [2];
  int local_1b8;
  TArray<FObjectImport,TSizedDefaultAllocator<32>_> *local_1b0;
  int local_1a8;
  uint uStack_1a4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1a0;
  undefined4 local_198;
  int iStack_194;
  int iStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 local_180;
  void *local_178;
  undefined8 local_170;
  undefined4 local_168;
  int local_164;
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_160;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_158;
  TArray<FObjectImport,TSizedDefaultAllocator<32>_> *local_138;
  TArray<FObjectExport,TSizedDefaultAllocator<32>_> *pTStack_130;
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_128;
  code **ppcStack_120;
  undefined8 *local_118;
  undefined4 *puStack_110;
  uint local_108;
  FNameEntryId FStack_104;
  uint uStack_100;
  undefined4 uStack_fc;
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_f8;
  FScriptContainerElement local_c0 [8];
  ForAnyElementType local_b8;
  uint local_b0;
  code *local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  longlong *plStack_80;
  code *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_218;
  local_1b8 = param_3->ArrayNum;
  iVar1 = param_2->ArrayNum;
  local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar17 = local_1b8 + iVar1;
  local_f8.Data.ArrayNum = 0;
  local_f8.Data.ArrayMax = 0;
  local_f8.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_f8.AllocationFlags.NumBits = 0;
  local_f8.AllocationFlags.MaxBits = 0x80;
  local_f8.FirstFreeIndex = -1;
  local_f8.NumFreeIndices = 0;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 0;
  local_a8 = (code *)0x0;
  plStack_80 = (longlong *)0x0;
  local_188 = 0;
  local_180 = 0;
  local_178 = (void *)0x0;
  local_170 = 0;
  local_1c8[0] = 0;
  local_1b0 = param_3;
  if (uVar17 == 0) goto LAB_142b5744b;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar17);
  }
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve(&local_f8,uVar17);
  uVar23 = 1;
  if (3 < uVar17) {
    uVar19 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_168 = (undefined4)lVar16;
    uVar23 = 1 << ((byte)lVar16 & 0x1f);
  }
  if ((local_b0 != 0) && ((int)uVar23 <= (int)local_b0)) goto LAB_142b5744b;
  local_b0 = uVar23;
  if (local_b8.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_b8,0,0,4);
  }
  if (uVar23 != 0) {
    uVar18 = uVar23;
    if (uVar23 < 2) {
      if (local_b8.Data != (FScriptContainerElement *)0x0) {
        uVar18 = 0;
        goto LAB_142b572a0;
      }
    }
    else {
LAB_142b572a0:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_b8,0,uVar18,4);
    }
    if (0 < (int)uVar23) {
      uVar20 = (ulonglong)uVar23;
      uVar19 = 0;
      do {
        FVar15.Data = local_c0;
        if (local_b8.Data != (FScriptContainerElement *)0x0) {
          FVar15.Data = local_b8.Data;
        }
        uVar11 = uVar19 & (longlong)(int)uVar23 - 1U;
        uVar19 = uVar19 + 1;
        *(undefined4 *)(FVar15.Data + uVar11 * 4) = 0xffffffff;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
  }
  if (local_b0 != 0) {
    pTStack_1a0 = &local_f8.AllocationFlags;
    local_1a8 = 0;
    uStack_1a4 = 1;
    iStack_194 = 0;
    iStack_190 = 0;
    if (local_f8.AllocationFlags.NumBits != 0) {
      FVar22 = (ForElementType<unsigned_int>)&local_f8.AllocationFlags;
      if (local_f8.AllocationFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar22 = local_f8.AllocationFlags.AllocatorInstance.SecondaryData;
      }
      uVar23 = *(uint *)FVar22;
      local_1a8 = 0;
      iStack_190 = 0;
      while (uVar23 == 0) {
        iStack_190 = iStack_190 + 0x20;
        lVar16 = (longlong)local_1a8;
        local_1a8 = local_1a8 + 1;
        if ((int)(local_f8.AllocationFlags.NumBits + -1 +
                 (local_f8.AllocationFlags.NumBits + -1 >> 0x1f & 0x1fU)) >> 5 < local_1a8)
        goto LAB_142b573af;
        uVar23 = *(uint *)((uchar *)((longlong)FVar22 + 4) + lVar16 * 4);
      }
      uStack_1a4 = -uVar23 & uVar23;
      uVar19 = (ulonglong)uStack_1a4 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      local_164 = (int)lVar16;
      iStack_194 = local_164 + -1 + iStack_190;
      if (local_f8.AllocationFlags.NumBits < iStack_194) {
LAB_142b573af:
        iStack_194 = local_f8.AllocationFlags.NumBits;
      }
    }
    local_198 = 0xffffffff;
    local_160 = &local_f8;
    local_158._padding_ = CONCAT44(uStack_1a4,local_1a8);
    local_158.CurrentBitIndex = iStack_194;
    local_158.UnvisitedBitMask = 0xffffffff;
    local_158._28_4_ = uStack_18c;
    local_158.BaseBitIndex = iStack_190;
    iVar9 = iStack_194;
    local_158.Array = pTStack_1a0;
    if (iStack_194 < local_f8.AllocationFlags.NumBits) {
      do {
        pFVar21 = (local_160->Data).AllocatorInstance.Data + (longlong)iVar9 * 0x30;
        uVar23 = local_b0 - 1 & *(uint *)pFVar21;
        *(uint *)(pFVar21 + 0x2c) = uVar23;
        FVar15.Data = local_c0;
        if (local_b8.Data != (FScriptContainerElement *)0x0) {
          FVar15.Data = local_b8.Data;
        }
        uVar19 = (longlong)(int)local_b0 - 1U & (longlong)(int)uVar23;
        *(uint *)(pFVar21 + 0x28) = *(uint *)(FVar15.Data + uVar19 * 4);
        *(int *)(FVar15.Data + uVar19 * 4) = iVar9;
        local_158.UnvisitedBitMask = local_158.UnvisitedBitMask & ~local_158._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_158);
        iVar9 = local_158.CurrentBitIndex;
      } while (local_158.CurrentBitIndex < (local_158.Array)->NumBits);
    }
  }
LAB_142b5744b:
  iVar9 = 0;
  local_138 = local_1b0;
  local_128 = &local_f8;
  ppcStack_120 = &local_a8;
  local_118 = &local_188;
  puStack_110 = local_1c8;
  FStack_104 = param_1.ComparisonIndex.Value;
  uStack_100 = param_1.Number;
  local_78 = (code *)0x0;
  pTStack_130 = param_2;
  local_108 = uVar17;
  plVar12 = FMemory::Malloc(0x48,8);
  plStack_50 = plStack_80;
  uVar7 = uStack_8c;
  uVar6 = uStack_90;
  uVar5 = uStack_94;
  uVar4 = local_98;
  uVar13 = uStack_a0;
  pcVar3 = local_a8;
  *plVar12 = (longlong)
             &UE::Core::Private::Function::
              TFunction_OwnedObject<`FPackageReader::ConvertLinkerTableToPaths'::`2'::<lambda_1>,0,1>
              ::_vftable_;
  plVar12[1] = (longlong)local_138;
  plVar12[2] = (longlong)pTStack_130;
  plVar12[3] = (longlong)local_128;
  plVar12[4] = (longlong)ppcStack_120;
  plVar12[5] = (longlong)local_118;
  plVar12[6] = (longlong)puStack_110;
  plVar12[7] = CONCAT44(FStack_104.Value,local_108);
  plVar12[8] = CONCAT44(uStack_fc,uStack_100);
  if (plVar12 + 1 != (longlong *)0x0) {
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`FPackageReader::ConvertLinkerTableToPaths'::__l2::<lambda_1>,FSoftObjectPath_&,FPackageIndex>
               ::Call;
  }
  local_a8 = local_78;
  uStack_a0 = uStack_70;
  local_88 = local_58;
  uStack_84 = uStack_54;
  plStack_80 = plVar12;
  local_98 = local_68;
  uStack_94 = uStack_64;
  uStack_90 = uStack_60;
  uStack_8c = uStack_5c;
  local_78 = pcVar3;
  uStack_70 = uVar13;
  local_68 = uVar4;
  uStack_64 = uVar5;
  uStack_60 = uVar6;
  uStack_5c = uVar7;
  if (pcVar3 != (code *)0x0) {
    plVar12 = (longlong *)&local_68;
    if (plStack_50 != (longlong *)0x0) {
      plVar12 = plStack_50;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>::Reset(param_4,iVar1);
  if (0 < iVar1) {
    do {
      iVar9 = iVar9 + 1;
      local_1c0[0] = iVar9;
      UE::Core::Private::Function::CheckCallable(local_a8);
      pcVar3 = local_a8;
      plVar12 = (longlong *)&local_98;
      if (plStack_80 != (longlong *)0x0) {
        plVar12 = plStack_80;
      }
      uVar13 = (**(code **)(*plVar12 + 8))();
      pFVar14 = (FSoftObjectPath *)(*pcVar3)(uVar13,local_1c0);
      pFVar2 = (FSoftObjectPath *)(param_4->AllocatorInstance).Data;
      if ((pFVar2 <= pFVar14) && (pFVar14 < pFVar2 + param_4->ArrayMax)) {
        local_1e0 = (longlong)param_4->ArrayNum;
        local_1d8 = 0x20;
        local_1f8 = pFVar14;
        local_1f0 = pFVar2;
        local_1e8 = (longlong)param_4->ArrayMax;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar10 = param_4->ArrayNum;
      if (iVar10 == param_4->ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&param_4->AllocatorInstance,&param_4->ArrayMax);
      }
      param_4->ArrayNum = iVar10 + 1;
      FSoftObjectPath::FSoftObjectPath
                ((FSoftObjectPath *)((param_4->AllocatorInstance).Data + (longlong)iVar10 * 0x20),
                 pFVar14);
    } while (iVar9 < iVar1);
  }
  iVar1 = local_1b8;
  uVar17 = 0;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>::Reset(param_5,local_1b8);
  if (0 < iVar1) {
    do {
      local_1b0 = (TArray<FObjectImport,TSizedDefaultAllocator<32>_> *)
                  CONCAT44(local_1b0._4_4_,~uVar17);
      UE::Core::Private::Function::CheckCallable(local_a8);
      pcVar3 = local_a8;
      plVar12 = (longlong *)&local_98;
      if (plStack_80 != (longlong *)0x0) {
        plVar12 = plStack_80;
      }
      uVar13 = (**(code **)(*plVar12 + 8))();
      pFVar14 = (FSoftObjectPath *)(*pcVar3)(uVar13,&local_1b0);
      pFVar2 = (FSoftObjectPath *)(param_5->AllocatorInstance).Data;
      if ((pFVar2 <= pFVar14) && (pFVar14 < pFVar2 + param_5->ArrayMax)) {
        local_1e0 = (longlong)param_5->ArrayNum;
        local_1d8 = 0x20;
        local_1f8 = pFVar14;
        local_1f0 = pFVar2;
        local_1e8 = (longlong)param_5->ArrayMax;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar9 = param_5->ArrayNum;
      if (iVar9 == param_5->ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&param_5->AllocatorInstance,&param_5->ArrayMax);
      }
      param_5->ArrayNum = iVar9 + 1;
      FSoftObjectPath::FSoftObjectPath
                ((FSoftObjectPath *)((param_5->AllocatorInstance).Data + (longlong)iVar9 * 0x20),
                 pFVar14);
      uVar17 = uVar17 + 1;
    } while ((int)uVar17 < iVar1);
  }
  if (local_178 != (void *)0x0) {
    FMemory::Free(local_178);
  }
  if (local_a8 != (code *)0x0) {
    plVar12 = (longlong *)&local_98;
    if (plStack_80 != (longlong *)0x0) {
      plVar12 = plStack_80;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  local_b0 = 0;
  if (local_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<FPackageIndex,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPackageIndex,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPackageIndex,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_f8);
  return;
}

// GetArchiveName @ 142b58c60

FString * __thiscall
FPackageReader::GetArchiveName(FPackageReader *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PackageFilename);
  return __return_storage_ptr__;
}

// GetDependsMap @ 142b58e50

bool __thiscall
FPackageReader::GetDependsMap
          (FPackageReader *this,
          TArray<TArray<FPackageIndex,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  int *piVar1;
  int iVar2;
  TArray<FPackageIndex,TSizedDefaultAllocator<32>_> *pTVar3;
  bool bVar4;
  
  bVar4 = SerializeDependsMap(this);
  if (!bVar4) {
    return false;
  }
  if (param_1 != &this->DependsMap) {
    DestructItems<TArray<FPackageIndex,TSizedDefaultAllocator<32>_>,int>
              ((TArray<FPackageIndex,TSizedDefaultAllocator<32>_> *)
               (param_1->AllocatorInstance).Data,param_1->ArrayNum);
    iVar2 = (this->DependsMap).ArrayNum;
    piVar1 = &param_1->ArrayMax;
    pTVar3 = (TArray<FPackageIndex,TSizedDefaultAllocator<32>_> *)
             (this->DependsMap).AllocatorInstance.Data;
    param_1->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return true;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,*piVar1,&param_1->AllocatorInstance,iVar2,piVar1);
    ConstructItems<TArray<FPackageIndex,TSizedDefaultAllocator<32>_>,TArray<FPackageIndex,TSizedDefaultAllocator<32>_>,int>
              ((param_1->AllocatorInstance).Data,pTVar3,iVar2);
  }
  return true;
}

// GetExports @ 142b58f10

bool __thiscall
FPackageReader::GetExports
          (FPackageReader *this,TArray<FObjectExport,TSizedDefaultAllocator<32>_> *param_1)

{
  bool bVar1;
  
  bVar1 = SerializeNameMap(this);
  if (bVar1) {
    bVar1 = SerializeExportMap(this);
    if (bVar1) {
      TArray<FObjectExport,TSizedDefaultAllocator<32>_>::operator=(param_1,&this->ExportMap);
      return true;
    }
  }
  return false;
}

// GetGatherableTextData @ 142b58f70

bool __thiscall
FPackageReader::GetGatherableTextData
          (FPackageReader *this,TArray<FGatherableTextData,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FGatherableTextData *pFVar3;
  bool bVar4;
  
  bVar4 = SerializeGatherableTextDataMap(this);
  if (!bVar4) {
    return false;
  }
  if (param_1 != &this->GatherableTextDataMap) {
    DestructItems<FGatherableTextData,int>
              ((FGatherableTextData *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
    iVar2 = (this->GatherableTextDataMap).ArrayNum;
    piVar1 = &param_1->ArrayMax;
    pFVar3 = (FGatherableTextData *)(this->GatherableTextDataMap).AllocatorInstance.Data;
    param_1->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return true;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,8,iVar2,*piVar1,&param_1->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FGatherableTextData,FGatherableTextData,int>
              ((param_1->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return true;
}

// GetImports @ 142b59100

bool __thiscall
FPackageReader::GetImports
          (FPackageReader *this,TArray<FObjectImport,TSizedDefaultAllocator<32>_> *param_1)

{
  bool bVar1;
  
  bVar1 = SerializeNameMap(this);
  if (bVar1) {
    bVar1 = SerializeImportMap(this);
    if (bVar1) {
      TArray<FObjectImport,TSizedDefaultAllocator<32>_>::operator=(param_1,&this->ImportMap);
      return true;
    }
  }
  return false;
}

// GetLongPackageName @ 142b59160

FString * __thiscall
FPackageReader::GetLongPackageName(FPackageReader *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if (1 < (this->LongPackageName).Data.ArrayNum) {
    ::FString::operator=(__return_storage_ptr__,&this->LongPackageName);
    return __return_storage_ptr__;
  }
  bVar2 = FPackageName::TryConvertFilenameToLongPackageName
                    (&this->PackageFilename,__return_storage_ptr__,(FString *)0x0,None);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TryGetLongPackageName(Result)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PackageReader.cpp"
                       ,0x12a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetNames @ 142b591e0

bool __thiscall
FPackageReader::GetNames(FPackageReader *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  bool bVar1;
  
  bVar1 = SerializeNameMap(this);
  if (!bVar1) {
    return false;
  }
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=(param_1,&this->NameMap);
  return true;
}

// GetPackageFileSummary @ 142b59230

FPackageFileSummary * __thiscall FPackageReader::GetPackageFileSummary(FPackageReader *this)

{
  return &this->PackageFileSummary;
}

// GetPackageFlags @ 142b59240

uint __thiscall FPackageReader::GetPackageFlags(FPackageReader *this)

{
  return (this->PackageFileSummary).PackageFlags;
}

// GetSoftObjectPaths @ 142b596c0

bool __thiscall
FPackageReader::GetSoftObjectPaths
          (FPackageReader *this,TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FSoftObjectPath *pFVar3;
  bool bVar4;
  
  bVar4 = SerializeNameMap(this);
  if (bVar4) {
    bVar4 = SerializeSoftObjectPathMap(this);
    if (bVar4) {
      if (param_1 != &this->SoftObjectPathMap) {
        DestructItems<FSoftObjectPath,int>
                  ((FSoftObjectPath *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
        iVar2 = (this->SoftObjectPathMap).ArrayNum;
        piVar1 = &param_1->ArrayMax;
        pFVar3 = (FSoftObjectPath *)(this->SoftObjectPathMap).AllocatorInstance.Data;
        param_1->ArrayNum = iVar2;
        if ((iVar2 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
          return true;
        }
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,iVar2,*piVar1,&param_1->AllocatorInstance,iVar2,piVar1);
        ConstructItems<FSoftObjectPath,FSoftObjectPath,int>
                  ((param_1->AllocatorInstance).Data,pFVar3,iVar2);
      }
      return true;
    }
  }
  return false;
}

// GetSoftPackageReferenceList @ 142b59790

bool __thiscall
FPackageReader::GetSoftPackageReferenceList
          (FPackageReader *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  bool bVar1;
  
  bVar1 = SerializeNameMap(this);
  if (bVar1) {
    bVar1 = SerializeSoftPackageReferenceList(this);
    if (bVar1) {
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=(param_1,&this->SoftPackageReferenceList);
      return true;
    }
  }
  return false;
}

// GetThumbnails @ 142b59bc0

bool __thiscall
FPackageReader::GetThumbnails
          (FPackageReader *this,
          TArray<FObjectFullNameAndThumbnail,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  bool bVar3;
  
  bVar3 = SerializeThumbnailMap(this);
  if (!bVar3) {
    return false;
  }
  if (param_1 != &this->ThumbnailMap) {
    iVar2 = (this->ThumbnailMap).ArrayNum;
    piVar1 = &param_1->ArrayMax;
    _Src = (this->ThumbnailMap).AllocatorInstance.Data;
    param_1->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return true;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar2,*piVar1,&param_1->AllocatorInstance,iVar2,piVar1);
    if (iVar2 != 0) {
      memcpy((param_1->AllocatorInstance).Data,_Src,(longlong)iVar2 * 0x18);
    }
  }
  return true;
}

// OpenPackageFile @ 142b5d580

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FPackageReader::OpenPackageFile(FPackageReader *this,EOpenPackageResult *param_1)

{
  EOpenPackageResult EVar1;
  int iVar2;
  undefined8 this_00;
  bool bVar3;
  ulonglong uVar4;
  FName this_01;
  long64 lVar5;
  FStaticBasicLogRecord *pFVar6;
  ForAnyElementType FVar7;
  int iVar8;
  wchar_t *pwVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  uint local_res10;
  TArray<FCustomVersionDifference,TSizedDefaultAllocator<32>_> local_98;
  undefined1 local_88 [16];
  FString local_78;
  TOptional<FCustomVersion> local_68;
  
  *param_1 = Success;
  if (this->Loader == (FArchive *)0x0) {
    *param_1 = NoLoader;
    return false;
  }
  ::operator<<((FArchive *)this,&this->PackageFileSummary);
  if (((this->PackageFileSummary).Tag != -0x61d57c3f) || ((this->_padding_ & 0x200) != 0)) {
    if (1 < (byte)LogAssetRegistry._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
    }
    *param_1 = MalformedTag;
    return false;
  }
  bVar3 = FPackageFileSummary::IsFileVersionValid(&this->PackageFileSummary);
  if ((!bVar3) && (bVar3 = IsEnforcePackageCompatibleVersionCheck(), bVar3)) {
    if (2 < (byte)LogAssetRegistry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
    }
    *param_1 = Unversioned;
    return false;
  }
  if (((this->PackageFileSummary).FileVersionUE.FileVersionUE4 < 0xd6) &&
     (bVar3 = IsEnforcePackageCompatibleVersionCheck(), bVar3)) {
    if (2 < (byte)LogAssetRegistry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
    }
    *param_1 = VersionTooOld;
    return false;
  }
  if (((GPackageFileUEVersion.FileVersionUE4 <
        (this->PackageFileSummary).FileVersionUE.FileVersionUE4) ||
      (GPackageFileUEVersion.FileVersionUE5 <
       (this->PackageFileSummary).FileVersionUE.FileVersionUE5)) &&
     (bVar3 = IsEnforcePackageCompatibleVersionCheck(), bVar3)) {
    if ((byte)LogAssetRegistry._0_1_ < 3) goto LAB_142b5d7c4;
    if ((this->PackageFilename).Data.ArrayNum == 0) {
      pFVar6 = &::LOG_Static;
    }
    else {
      pFVar6 = &::LOG_Static;
    }
  }
  else {
    if (((this->PackageFileSummary).FileVersionLicenseeUE <= GPackageFileLicenseeUEVersion) ||
       (bVar3 = IsEnforcePackageCompatibleVersionCheck(), !bVar3)) {
      if ((this->PackageFilename).Data.ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(this->PackageFilename).Data.AllocatorInstance.Data;
      }
      FCurrentCustomVersions::Compare
                (&local_98,&(this->PackageFileSummary).CustomVersionContainer.Versions,pwVar9);
      uVar4 = (ulonglong)local_98.ArrayNum;
      pFVar10 = local_98.AllocatorInstance.Data + uVar4 * 0x10;
      local_res10 = local_98.ArrayNum;
      FVar7.Data = local_98.AllocatorInstance.Data;
      do {
        while( true ) {
          if (local_98.ArrayNum != (uint)uVar4) {
            `TCheckedPointerIterator<FCustomVersionDifference,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(local_res8);
          }
          if (FVar7.Data == pFVar10) {
            (**(code **)(this->_padding_ + 0x110))(this,(this->PackageFileSummary).FileVersionUE);
            (**(code **)(this->_padding_ + 0x118))
                      (this,(this->PackageFileSummary).FileVersionLicenseeUE);
            (**(code **)(this->_padding_ + 0x120))
                      (this,&(this->PackageFileSummary).SavedByEngineVersion);
            (**(code **)(this->_padding_ + 0x68))
                      (this,&(this->PackageFileSummary).CustomVersionContainer);
            (**(code **)(this->_padding_ + 0xf8))(this);
            lVar5 = (**(code **)(*(longlong *)this->Loader + 0x30))();
            iVar8 = (this->LongPackageName).Data.ArrayNum;
            this->PackageFileSize = lVar5;
            if (iVar8 < 2) {
              iVar2 = (this->PackageFileSummary).PackageName.Data.ArrayNum;
              iVar8 = iVar2 + -1;
              if (iVar2 == 0) {
                iVar8 = 0;
              }
              ::FString::AssignRange
                        (&this->LongPackageName,
                         (wchar_t *)
                         (this->PackageFileSummary).PackageName.Data.AllocatorInstance.Data,iVar8);
            }
            EVar1 = *param_1;
            if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_98.AllocatorInstance.Data);
              return EVar1 == Success;
            }
            return EVar1 == Success;
          }
          iVar8 = *(int *)FVar7.Data;
          local_88._0_8_ = *(undefined8 *)FVar7.Data;
          local_88._8_8_ = *(undefined8 *)(FVar7.Data + 8);
          if (iVar8 != 0) break;
          bVar3 = IsEnforcePackageCompatibleVersionCheck();
          if (bVar3) {
            uVar4 = (ulonglong)local_res10;
            FVar7.Data = FVar7.Data + 0x10;
            *param_1 = CustomVersionMissing;
          }
          else {
LAB_142b5d98d:
            uVar4 = (ulonglong)local_res10;
            FVar7.Data = FVar7.Data + 0x10;
          }
        }
        if (iVar8 != 3) {
          if ((iVar8 == 1) &&
             (bVar3 = IsEnforcePackageCompatibleVersionCheck(), this_00 = local_88._8_8_, bVar3)) {
            local_88._0_4_ = ((FGuid *)local_88._8_8_)->A;
            local_88._4_4_ = ((FGuid *)local_88._8_8_)->B;
            local_88._8_8_ = *(undefined8 *)&((FGuid *)local_88._8_8_)->C;
            FCustomVersionContainer::GetVersion
                      (&(this->PackageFileSummary).CustomVersionContainer,(FGuid *)local_88);
            FCurrentCustomVersions::Get(&local_68,(FGuid *)this_00);
            if (1 < (byte)LogAssetRegistry._0_1_) {
              this_01 = FCustomVersion::GetFriendlyName((FCustomVersion *)this_00);
              ::FName::ToString((FName *)this_01,&local_78);
              UE::Logging::Private::BasicLog<2>
                        ((FStaticBasicLogRecord *)&PTR_u_Package_is_unlo_15099c178,
                         (FLogCategoryBase *)&LogAssetRegistry);
              if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_78.Data.AllocatorInstance.Data);
              }
            }
            *param_1 = VersionTooNew;
          }
          goto LAB_142b5d98d;
        }
        bVar3 = IsEnforcePackageCompatibleVersionCheck();
        if (!bVar3) goto LAB_142b5d98d;
        uVar4 = (ulonglong)local_res10;
        FVar7.Data = FVar7.Data + 0x10;
        *param_1 = CustomVersionInvalid;
      } while( true );
    }
    if ((byte)LogAssetRegistry._0_1_ < 3) goto LAB_142b5d7c4;
    pFVar6 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar6,(FLogCategoryBase *)&LogAssetRegistry);
LAB_142b5d7c4:
  *param_1 = VersionTooNew;
  return false;
}

// OpenPackageFile @ 142b5dad0

bool __thiscall
FPackageReader::OpenPackageFile
          (FPackageReader *this,FArchive *param_1,TStringView<wchar_t> *param_2,
          EOpenPackageResult *param_3)

{
  FString *pFVar1;
  undefined8 uVar2;
  wchar_t *pwVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  EOpenPackageResult *pEVar9;
  EOpenPackageResult local_res8 [8];
  void *local_18 [2];
  
  if (this->Loader != (FArchive *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Loader",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PackageReader.cpp"
                       ,0x78,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  uVar2 = *(undefined8 *)&param_2->Size;
  pwVar3 = param_2->DataPtr;
  this->Loader = param_1;
  this->bLoaderOwner = false;
  ::FString::AssignRange(&this->LongPackageName,pwVar3,(int)uVar2);
  puVar8 = (undefined8 *)(**(code **)(*(longlong *)this->Loader + 0x18))(this->Loader,local_18);
  pFVar1 = &this->PackageFilename;
  if (pFVar1 != (FString *)puVar8) {
    pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)*puVar8;
    *puVar8 = 0;
    (this->PackageFilename).Data.ArrayNum = *(int *)(puVar8 + 1);
    (this->PackageFilename).Data.ArrayMax = *(int *)((longlong)puVar8 + 0xc);
    puVar8[1] = 0;
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  local_res8[0] = Success;
  pEVar9 = local_res8;
  if (param_3 != (EOpenPackageResult *)0x0) {
    pEVar9 = param_3;
  }
  bVar6 = OpenPackageFile(this,pEVar9);
  return bVar6;
}

// OpenPackageFile @ 142b5dbd0

bool __thiscall
FPackageReader::OpenPackageFile
          (FPackageReader *this,TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2,
          EOpenPackageResult *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  IFileManager *pIVar4;
  FArchive *pFVar5;
  EOpenPackageResult *pEVar6;
  wchar_t *pwVar7;
  EOpenPackageResult local_res8 [8];
  
  pwVar7 = L"";
  if (this->Loader != (FArchive *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Loader",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PackageReader.cpp"
                       ,0x6d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  ::FString::AssignRange(&this->LongPackageName,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size)
  ;
  ::FString::AssignRange(&this->PackageFilename,param_2->DataPtr,(int)*(undefined8 *)&param_2->Size)
  ;
  pIVar4 = IFileManager::Get();
  if ((this->PackageFilename).Data.ArrayNum != 0) {
    pwVar7 = (wchar_t *)(this->PackageFilename).Data.AllocatorInstance.Data;
  }
  pFVar5 = (FArchive *)(**(code **)((longlong)*pIVar4 + 0x18))(pIVar4,pwVar7,0);
  this->Loader = pFVar5;
  this->bLoaderOwner = true;
  pEVar6 = local_res8;
  if (param_3 != (EOpenPackageResult *)0x0) {
    pEVar6 = param_3;
  }
  local_res8[0] = Success;
  bVar2 = OpenPackageFile(this,pEVar6);
  return bVar2;
}

// OpenPackageFile @ 142b5dcc0

bool __thiscall
FPackageReader::OpenPackageFile
          (FPackageReader *this,TStringView<wchar_t> *param_1,EOpenPackageResult *param_2)

{
  code *pcVar1;
  wchar_t *pwVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 uVar5;
  IFileManager *pIVar6;
  FArchive *pFVar7;
  EOpenPackageResult *pEVar8;
  wchar_t *pwVar9;
  EOpenPackageResult local_res8 [8];
  
  pwVar9 = L"";
  pwVar2 = param_1->DataPtr;
  uVar3 = *(undefined8 *)&param_1->Size;
  if (this->Loader != (FArchive *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Loader",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PackageReader.cpp"
                       ,0x6d,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
  }
  ::FString::AssignRange(&this->LongPackageName,(wchar_t *)0x0,0);
  ::FString::AssignRange(&this->PackageFilename,pwVar2,(int)uVar3);
  pIVar6 = IFileManager::Get();
  if ((this->PackageFilename).Data.ArrayNum != 0) {
    pwVar9 = (wchar_t *)(this->PackageFilename).Data.AllocatorInstance.Data;
  }
  pFVar7 = (FArchive *)(**(code **)((longlong)*pIVar6 + 0x18))(pIVar6,pwVar9,0);
  this->Loader = pFVar7;
  this->bLoaderOwner = true;
  pEVar8 = local_res8;
  if (param_2 != (EOpenPackageResult *)0x0) {
    pEVar8 = param_2;
  }
  local_res8[0] = Success;
  bVar4 = OpenPackageFile(this,pEVar8);
  return bVar4;
}

// OpenPackageFile @ 142b5dde0

bool __thiscall
FPackageReader::OpenPackageFile
          (FPackageReader *this,TUniquePtr<FArchive,TDefaultDelete<FArchive>_> param_1,
          EOpenPackageResult *param_2)

{
  FString *pFVar1;
  FArchive *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  EOpenPackageResult *pEVar8;
  EOpenPackageResult local_res8 [8];
  void *local_28 [2];
  
  if (this->Loader != (FArchive *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Loader",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PackageReader.cpp"
                       ,0x83,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
                    /* WARNING: Load size is inaccurate */
  pFVar2 = *param_1.Ptr;
  *(undefined8 *)param_1.Ptr = 0;
  this->Loader = pFVar2;
  this->bLoaderOwner = true;
  ::FString::Empty(&this->LongPackageName);
  puVar7 = (undefined8 *)(**(code **)(*(longlong *)this->Loader + 0x18))(this->Loader,local_28);
  pFVar1 = &this->PackageFilename;
  if (pFVar1 != (FString *)puVar7) {
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)*puVar7;
    *puVar7 = 0;
    (this->PackageFilename).Data.ArrayNum = *(int *)(puVar7 + 1);
    (this->PackageFilename).Data.ArrayMax = *(int *)((longlong)puVar7 + 0xc);
    puVar7[1] = 0;
  }
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  local_res8[0] = Success;
  pEVar8 = local_res8;
  if (param_2 != (EOpenPackageResult *)0x0) {
    pEVar8 = param_2;
  }
  bVar5 = OpenPackageFile(this,pEVar8);
  puVar7 = *(undefined8 **)param_1.Ptr;
  if (puVar7 != (undefined8 *)0x0) {
    (**(code **)*puVar7)(puVar7,1);
  }
  return bVar5;
}

// Precache @ 142b5e380

bool __thiscall FPackageReader::Precache(FPackageReader *this,long64 param_1,long64 param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (this->Loader == (FArchive *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Loader",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PackageReader.cpp"
                       ,0x569,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142b5e3e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*(longlong *)this->Loader + 0x1f0))(this->Loader,param_1,param_2);
  return (bool)uVar3;
}

// ReadAssetDataFromThumbnailCache @ 142b5ed80

bool __thiscall
FPackageReader::ReadAssetDataFromThumbnailCache
          (FPackageReader *this,TArray<FAssetData_*,TSizedDefaultAllocator<32>_> *param_1)

{
  uint uVar1;
  FName FVar2;
  FName FVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FName FVar6;
  FName FVar7;
  bool bVar8;
  undefined1 uVar9;
  FString *pFVar10;
  FAssetData *this_00;
  FName *pFVar11;
  FAssetData *pFVar12;
  int iVar13;
  ulonglong uVar14;
  FName *this_01;
  undefined1 local_res18 [8];
  uint local_res20;
  FAssetData *local_158;
  FString local_150;
  FString local_140;
  FString local_130;
  FTopLevelAssetPath local_120;
  FString local_110;
  FName *local_100;
  FString local_f8;
  FAssetDataTagMap local_e8;
  FScriptContainerElement *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  FScriptContainerElement *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  FName local_a8;
  FName local_a0;
  FName local_98;
  FString local_90;
  TStringView<wchar_t> local_78;
  TArrayView<int_const_,int> local_68;
  FTopLevelAssetPath local_58 [2];
  
  bVar8 = SerializeThumbnailMap(this);
  if (!bVar8) {
    return false;
  }
  local_res20 = (this->ThumbnailMap).ArrayNum;
  uVar14 = (ulonglong)(int)local_res20;
  this_01 = (FName *)(this->ThumbnailMap).AllocatorInstance.Data;
  pFVar11 = this_01 + uVar14 * 3;
  local_100 = pFVar11;
  while( true ) {
    pFVar12 = (FAssetData *)0x0;
    if ((this->ThumbnailMap).ArrayNum != (int)uVar14) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FObjectFullNameAndThumbnail,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (this_01 == pFVar11) {
      return true;
    }
    local_130.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_130.Data.ArrayNum = 0;
    local_130.Data.ArrayMax = 0;
    local_150.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_150.Data.ArrayNum = 0;
    local_150.Data.ArrayMax = 0;
    local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_140.Data.ArrayNum = 0;
    local_140.Data.ArrayMax = 0;
    local_110.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_110.Data.ArrayNum = 0;
    local_110.Data.ArrayMax = 0;
    pFVar10 = ::FName::ToString(this_01,&local_90);
    FPackageName::SplitFullObjectPath(pFVar10,&local_130,&local_150,&local_140,&local_110,true);
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    FPackageName::GetLongPackagePath(&local_f8,&local_150);
    this_00 = ::operator_new(0x68);
    if (this_00 != (FAssetData *)0x0) {
      local_b8 = (this->PackageFileSummary).ChunkIDs.AllocatorInstance.Data;
      iVar13 = (this->PackageFileSummary).ChunkIDs.ArrayNum;
      uVar1 = (this->PackageFileSummary).PackageFlags;
      if ((iVar13 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      local_c8 = local_130.Data.AllocatorInstance.Data;
      local_e8._padding_ = 0;
      local_e8._padding_ = 0;
      iStack_c0 = local_130.Data.ArrayNum + -1;
      if (local_130.Data.ArrayNum == 0) {
        iStack_c0 = 0;
      }
      local_e8.RefCount.Counter = 0;
      local_e8._20_4_ = 0;
      local_78._12_4_ = uStack_bc;
      local_78.Size = iStack_c0;
      local_78.DataPtr = (wchar_t *)local_130.Data.AllocatorInstance.Data;
      local_120.PackageName.ComparisonIndex.Value = 0;
      local_120.PackageName.Number = 0;
      local_120.AssetName.ComparisonIndex.Value = 0;
      local_120.AssetName.Number = 0;
      iStack_b0 = iVar13;
      FTopLevelAssetPath::TrySetPath(&local_120,&local_78);
      FVar7 = local_120.AssetName;
      FVar6 = local_120.PackageName;
      iVar13 = local_140.Data.ArrayNum + -1;
      if (local_140.Data.ArrayNum == 0) {
        iVar13 = 0;
      }
      pFVar11 = ::FName::FName(&local_a8,iVar13,(wchar_t *)local_140.Data.AllocatorInstance.Data,
                               FNAME_Add);
      FVar2 = *pFVar11;
      iVar13 = local_f8.Data.ArrayNum + -1;
      if (local_f8.Data.ArrayNum == 0) {
        iVar13 = 0;
      }
      pFVar11 = ::FName::FName(&local_a0,iVar13,(wchar_t *)local_f8.Data.AllocatorInstance.Data,
                               FNAME_Add);
      FVar3 = *pFVar11;
      iVar13 = local_150.Data.ArrayNum + -1;
      if (local_150.Data.ArrayNum == 0) {
        iVar13 = 0;
      }
      pFVar11 = ::FName::FName(&local_98,iVar13,(wchar_t *)local_150.Data.AllocatorInstance.Data,
                               FNAME_Add);
      local_68._12_4_ = uStack_ac;
      local_68.ArrayNum = iStack_b0;
      local_68.DataPtr = (int *)local_b8;
      local_58[0].PackageName = FVar6;
      local_58[0].AssetName = FVar7;
      pFVar12 = FAssetData::FAssetData
                          (this_00,*pFVar11,FVar3,FVar2,local_58,&local_e8,&local_68,uVar1);
      pFVar11 = local_100;
    }
    pFVar4 = (param_1->AllocatorInstance).Data;
    local_158 = pFVar12;
    if (((pFVar4 <= (FScriptContainerElement *)&local_158) &&
        ((FScriptContainerElement *)&local_158 < pFVar4 + (longlong)param_1->ArrayMax * 8)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) break;
    iVar13 = param_1->ArrayNum;
    if (iVar13 == param_1->ArrayMax) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar13 + 1;
    *(FAssetData **)((param_1->AllocatorInstance).Data + (longlong)iVar13 * 8) = local_158;
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
    if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
    uVar14 = (ulonglong)local_res20;
    this_01 = this_01 + 3;
  }
  pcVar5 = (code *)swi(3);
  uVar9 = (*pcVar5)();
  return (bool)uVar9;
}

// ReadAssetRegistryData @ 142b5f150

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FPackageReader::ReadAssetRegistryData
          (FPackageReader *this,TArray<FAssetData_*,TSizedDefaultAllocator<32>_> *param_1,
          bool *param_2)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FText *pFVar5;
  FTextFormat *pFVar6;
  ForAnyElementType FVar7;
  FString *pFVar8;
  EReadPackageDataMainErrorCode local_res8 [2];
  FString local_238;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_228
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_218
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_208
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_1f8
  ;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FFormatArgumentValue local_1a8;
  FFormatArgumentValue local_188;
  FFormatArgumentValue local_168;
  FFormatArgumentValue local_148;
  FText local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FText local_e8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FText local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FTextFormat local_68;
  FTextFormat local_58;
  FTextFormat local_48;
  FTextFormat local_38;
  
  *param_2 = false;
  if ((int)(this->PackageFileSummary).PackageFlags < 0) {
    bVar3 = ReadAssetRegistryDataFromCookedPackage(this,param_1,param_2);
    return bVar3;
  }
  bVar3 = SerializeNameMap(this);
  if (((!bVar3) || (bVar3 = SerializeImportMap(this), !bVar3)) ||
     (bVar3 = SerializeExportMap(this), !bVar3)) {
    return false;
  }
  bVar3 = StartSerializeSection(this,(longlong)(this->PackageFileSummary).AssetRegistryDataOffset);
  if (!bVar3) {
    bVar3 = ReadAssetDataFromThumbnailCache(this,param_1);
    if (!bVar3) {
      param_1->ArrayNum = 0;
      if (param_1->ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
      }
    }
    return true;
  }
  uVar1 = (this->LongPackageName).Data.ArrayNum;
  local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_238.Data.ArrayNum = 0;
  local_238.Data.ArrayMax = 0;
  if ((int)uVar1 < 2) {
    bVar3 = FPackageName::TryConvertFilenameToLongPackageName
                      (&this->PackageFilename,&local_238,(FString *)0x0,None);
    if (bVar3) goto LAB_142b5f2d3;
  }
  else {
    if (&local_238 != &this->LongPackageName) {
      _Src = (this->LongPackageName).Data.AllocatorInstance.Data;
      local_238.Data.ArrayMax = 0;
      local_238.Data.ArrayNum = uVar1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar1,0,(ForAnyElementType *)&local_238,uVar1,&local_238.Data.ArrayMax);
      memcpy(local_238.Data.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 * 2);
    }
LAB_142b5f2d3:
    pFVar8 = &this->PackageFilename;
    bVar3 = UE::AssetRegistry::ReadPackageDataMain
                      ((FArchive *)this,&local_238,&this->PackageFileSummary,
                       &this->AssetRegistryDependencyDataOffset,param_1,local_res8,&this->ImportMap,
                       &this->ExportMap);
    if (bVar3) {
      bVar3 = true;
      goto LAB_142b5f49a;
    }
    if (local_res8[0] == InvalidObjectCount) {
      local_1f8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1f8.Pairs.ArrayNum = 0;
      local_1f8.Pairs.ArrayMax = 0;
      pFVar5 = FText::FromString(&local_98,pFVar8);
      local_148.Type = Text;
      FText::FText((FText *)&local_148.TextValue,pFVar5);
      if ((local_148.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      ::FString::FString(&local_1b8,L"FileName");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_1f8,&local_1b8,&local_148);
      if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
      }
      if (local_148.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_148.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      }
      if (2 < (byte)LogAssetRegistry._0_1_) {
        pFVar5 = FText::AsLocalizable_Advanced_LocText
                           (&local_78,L"AssetRegistry",
                            L"EReadPackageDataMainErrorCode::InvalidObjectCount",
                            L"Package is unloadable: {FileName}. Reason: EReadPackageDataMainErrorCode::InvalidObjectCount."
                           );
        pFVar6 = FTextFormat::FTextFormat(&local_38,pFVar5,Default);
        pFVar5 = FText::Format(&local_88,pFVar6,&local_1f8);
        FText::ToString(pFVar5);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
        if (local_88.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
        }
        if (local_78.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
        }
      }
      DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                ((TTuple<FString,FFormatArgumentValue> *)local_1f8.Pairs.AllocatorInstance.Data,
                 local_1f8.Pairs.ArrayNum);
      FVar7.Data = local_1f8.Pairs.AllocatorInstance.Data;
    }
    else if (local_res8[0] == InvalidTagCount) {
      local_208.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_208.Pairs.ArrayNum = 0;
      local_208.Pairs.ArrayMax = 0;
      pFVar5 = FText::FromString(&local_c8,pFVar8);
      local_168.Type = Text;
      FText::FText((FText *)&local_168.TextValue,pFVar5);
      if ((local_168.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      ::FString::FString(&local_1c8,L"FileName");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_208,&local_1c8,&local_168);
      if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
      }
      if (local_168.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_168.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_c8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
      }
      if (2 < (byte)LogAssetRegistry._0_1_) {
        pFVar5 = FText::AsLocalizable_Advanced_LocText
                           (&local_a8,L"AssetRegistry",
                            L"EReadPackageDataMainErrorCode::InvalidTagCount",
                            L"Package is unloadable: {FileName}. Reason: EReadPackageDataMainErrorCode::InvalidTagCount."
                           );
        pFVar6 = FTextFormat::FTextFormat(&local_48,pFVar5,Default);
        pFVar5 = FText::Format(&local_b8,pFVar6,&local_208);
        FText::ToString(pFVar5);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
        if (local_b8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
        }
        if (local_a8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
        }
      }
      DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                ((TTuple<FString,FFormatArgumentValue> *)local_208.Pairs.AllocatorInstance.Data,
                 local_208.Pairs.ArrayNum);
      FVar7.Data = local_208.Pairs.AllocatorInstance.Data;
    }
    else if (local_res8[0] == InvalidTag) {
      local_218.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_218.Pairs.ArrayNum = 0;
      local_218.Pairs.ArrayMax = 0;
      pFVar5 = FText::FromString(&local_f8,pFVar8);
      local_188.Type = Text;
      FText::FText((FText *)&local_188.TextValue,pFVar5);
      if ((local_188.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      ::FString::FString(&local_1d8,L"FileName");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_218,&local_1d8,&local_188);
      if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
      if (local_188.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_188.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_f8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
      }
      if (2 < (byte)LogAssetRegistry._0_1_) {
        pFVar5 = FText::AsLocalizable_Advanced_LocText
                           (&local_d8,L"AssetRegistry",L"EReadPackageDataMainErrorCode::InvalidTag",
                            L"Package is unloadable: {FileName}. Reason: EReadPackageDataMainErrorCode::InvalidTag."
                           );
        pFVar6 = FTextFormat::FTextFormat(&local_58,pFVar5,Default);
        pFVar5 = FText::Format(&local_e8,pFVar6,&local_218);
        FText::ToString(pFVar5);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
        if (local_e8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
        }
        if (local_d8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
        }
      }
      DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                ((TTuple<FString,FFormatArgumentValue> *)local_218.Pairs.AllocatorInstance.Data,
                 local_218.Pairs.ArrayNum);
      FVar7.Data = local_218.Pairs.AllocatorInstance.Data;
    }
    else {
      local_228.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_228.Pairs.ArrayNum = 0;
      local_228.Pairs.ArrayMax = 0;
      pFVar5 = FText::FromString(&local_128,pFVar8);
      local_1a8.Type = Text;
      FText::FText((FText *)&local_1a8.TextValue,pFVar5);
      if ((local_1a8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      ::FString::FString(&local_1e8,L"FileName");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_228,&local_1e8,&local_1a8);
      if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
      }
      if (local_1a8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_1a8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_128.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
      }
      if (2 < (byte)LogAssetRegistry._0_1_) {
        pFVar5 = FText::AsLocalizable_Advanced_LocText
                           (&local_108,L"AssetRegistry",L"EReadPackageDataMainErrorCode::Unknown",
                            L"Package is unloadable: {FileName}. Reason: EReadPackageDataMainErrorCode::Unknown."
                           );
        pFVar6 = FTextFormat::FTextFormat(&local_68,pFVar5,Default);
        pFVar5 = FText::Format(&local_118,pFVar6,&local_228);
        FText::ToString(pFVar5);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
        if (local_118.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
        }
        if (local_108.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
        }
      }
      DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                ((TTuple<FString,FFormatArgumentValue> *)local_228.Pairs.AllocatorInstance.Data,
                 local_228.Pairs.ArrayNum);
      FVar7.Data = local_228.Pairs.AllocatorInstance.Data;
    }
    if ((TTuple<FString,FFormatArgumentValue> *)FVar7.Data !=
        (TTuple<FString,FFormatArgumentValue> *)0x0) {
      FMemory::Free(FVar7.Data);
    }
  }
  bVar3 = false;
LAB_142b5f49a:
  if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// ReadAssetRegistryDataFromCookedPackage @ 142b5f900

bool __thiscall
FPackageReader::ReadAssetRegistryDataFromCookedPackage
          (FPackageReader *this,TArray<FAssetData_*,TSizedDefaultAllocator<32>_> *param_1,
          bool *param_2)

{
  FScriptContainerElement *pFVar1;
  FName FVar2;
  FName FVar3;
  code *pcVar4;
  FName FVar5;
  FName FVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  UClass *this_00;
  FString *pFVar11;
  FAssetData *this_01;
  FName *pFVar12;
  FAssetData *pFVar13;
  ulonglong uVar14;
  ForAnyElementType FVar15;
  uint uVar16;
  uint uVar17;
  FName *pFVar18;
  bool bVar19;
  undefined1 local_res8 [8];
  FString local_138;
  FString local_128;
  FAssetData *local_118;
  uint local_110;
  FName *local_108;
  FTopLevelAssetPath local_100;
  FString local_f0;
  void *local_e0;
  FAssetDataTagMap local_d8;
  FScriptContainerElement *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  int *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  FName local_98;
  FName local_90;
  FString local_88;
  TStringView<wchar_t> local_78;
  TArrayView<int_const_,int> local_68;
  FTopLevelAssetPath local_58 [2];
  
  uVar16 = (this->LongPackageName).Data.ArrayNum;
  bVar19 = false;
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.Data.ArrayNum = 0;
  local_128.Data.ArrayMax = 0;
  if ((int)uVar16 < 2) {
    bVar8 = FPackageName::TryConvertFilenameToLongPackageName
                      (&this->PackageFilename,&local_128,(FString *)0x0,None);
    if (!bVar8) {
      bVar8 = false;
      goto LAB_142b5fec6;
    }
  }
  else if (&local_128 != &this->LongPackageName) {
    pFVar1 = (this->LongPackageName).Data.AllocatorInstance.Data;
    local_128.Data.ArrayMax = 0;
    local_128.Data.ArrayNum = uVar16;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar16,0,(ForAnyElementType *)&local_128,uVar16,&local_128.Data.ArrayMax);
    memcpy(local_128.Data.AllocatorInstance.Data,pFVar1,(longlong)(int)uVar16 * 2);
  }
  bVar8 = false;
  if (0x1e4 < (int)this->_padding_) {
    FPackageName::GetLongPackagePath(&local_f0,&local_128);
    bVar7 = SerializeNameMap(this);
    if (((!bVar7) || (bVar7 = SerializeImportMap(this), !bVar7)) ||
       (bVar7 = SerializeExportMap(this), !bVar7)) {
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
      goto LAB_142b5fec6;
    }
    local_110 = (this->ExportMap).ArrayNum;
    uVar14 = (ulonglong)(int)local_110;
    pFVar18 = (FName *)(this->ExportMap).AllocatorInstance.Data;
    pFVar12 = pFVar18 + uVar14 * 0xd;
    bVar8 = false;
    local_108 = pFVar12;
    while( true ) {
      if ((this->ExportMap).ArrayNum != (int)uVar14) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FObjectExport,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar18 == pFVar12) break;
      if ((pFVar18[9].Number & 0x10) != 0) {
        uVar16 = pFVar18[1].Number;
        local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_138.Data.ArrayNum = 0;
        local_138.Data.ArrayMax = 0;
        if (uVar16 == 0) {
          this_00 = Z_Construct_UClass_UClass_NoRegister();
          pFVar11 = UObjectBaseUtility::GetPathName
                              ((UObjectBaseUtility *)this_00,&local_88,(UObject *)0x0);
          if (&local_138 != pFVar11) {
            if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_138.Data.AllocatorInstance.Data);
            }
            local_138.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
            (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_138.Data.ArrayNum = (pFVar11->Data).ArrayNum;
            local_138.Data.ArrayMax = (pFVar11->Data).ArrayMax;
            (pFVar11->Data).ArrayNum = 0;
            (pFVar11->Data).ArrayMax = 0;
          }
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
        }
        else if ((int)uVar16 < 1) {
          if ((int)uVar16 < 0) {
            if (((uVar16 >> 0x1f & (uint)((int)~uVar16 < (this->ImportMap).ArrayNum)) == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              uVar9 = (*pcVar4)();
              return (bool)uVar9;
            }
            pFVar12 = (FName *)((this->ImportMap).AllocatorInstance.Data +
                               (longlong)(int)~uVar16 * 0x38);
            if ((-1 < (int)pFVar12[1].ComparisonIndex.Value) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsImport()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                   ,0x55,L""), bVar8)) {
              pcVar4 = (code *)swi(3);
              uVar9 = (*pcVar4)();
              return (bool)uVar9;
            }
            uVar16 = pFVar12[1].ComparisonIndex.Value;
            uVar17 = ~uVar16;
            if ((((byte)(uVar16 >> 0x1f) & (int)uVar17 < (this->ImportMap).ArrayNum) == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              uVar9 = (*pcVar4)();
              return (bool)uVar9;
            }
            ::FName::AppendString
                      ((FName *)((this->ImportMap).AllocatorInstance.Data +
                                (longlong)(int)uVar17 * 0x38),&local_138);
            ::FString::AppendChar(&local_138,L'.');
            ::FName::AppendString(pFVar12,&local_138);
          }
        }
        else {
          uVar16 = uVar16 - 1;
          uVar17 = 0;
          if ((int)uVar16 < (this->ExportMap).ArrayNum) {
            uVar17 = ~uVar16 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return (bool)uVar9;
          }
          pFVar1 = (this->ExportMap).AllocatorInstance.Data;
          uVar17 = local_128.Data.ArrayNum - 1;
          if (local_128.Data.ArrayNum == 0) {
            uVar17 = 0;
          }
          ::FString::AssignRange(&local_138,(wchar_t *)local_128.Data.AllocatorInstance.Data,uVar17)
          ;
          ::FString::AppendChar(&local_138,L'.');
          ::FName::AppendString((FName *)(pFVar1 + (longlong)(int)uVar16 * 0x68),&local_138);
        }
        pFVar13 = (FAssetData *)0x0;
        this_01 = ::operator_new(0x68);
        if (this_01 != (FAssetData *)0x0) {
          uVar16 = (this->PackageFileSummary).PackageFlags;
          local_b8 = local_138.Data.AllocatorInstance.Data;
          local_d8._padding_ = 0;
          local_d8._padding_ = 0;
          local_e0 = (void *)0x0;
          iStack_b0 = local_138.Data.ArrayNum + -1;
          if (local_138.Data.ArrayNum == 0) {
            iStack_b0 = 0;
          }
          local_a8 = (int *)0x0;
          local_78._12_4_ = uStack_ac;
          local_78.Size = iStack_b0;
          local_78.DataPtr = (wchar_t *)local_138.Data.AllocatorInstance.Data;
          iStack_a0 = 0;
          local_d8.RefCount.Counter = 0;
          local_d8._20_4_ = 0;
          local_100.PackageName.ComparisonIndex.Value = 0;
          local_100.PackageName.Number = 0;
          local_100.AssetName.ComparisonIndex.Value = 0;
          local_100.AssetName.Number = 0;
          FTopLevelAssetPath::TrySetPath(&local_100,&local_78);
          FVar6 = local_100.AssetName;
          FVar5 = local_100.PackageName;
          FVar15.Data = (FScriptContainerElement *)L"";
          if (local_f0.Data.ArrayNum != 0) {
            FVar15.Data = local_f0.Data.AllocatorInstance.Data;
          }
          FVar2 = *pFVar18;
          pFVar12 = ::FName::FName(&local_98,(wchar_t *)FVar15.Data);
          FVar15.Data = (FScriptContainerElement *)L"";
          if (local_128.Data.ArrayNum != 0) {
            FVar15.Data = local_128.Data.AllocatorInstance.Data;
          }
          FVar3 = *pFVar12;
          pFVar12 = ::FName::FName(&local_90,(wchar_t *)FVar15.Data);
          local_68._12_4_ = uStack_9c;
          local_68.ArrayNum = iStack_a0;
          local_68.DataPtr = local_a8;
          local_58[0].PackageName = FVar5;
          local_58[0].AssetName = FVar6;
          pFVar13 = FAssetData::FAssetData
                              (this_01,*pFVar12,FVar3,FVar2,local_58,&local_d8,&local_68,uVar16);
          bVar19 = true;
        }
        pFVar1 = (param_1->AllocatorInstance).Data;
        local_118 = pFVar13;
        if (((pFVar1 <= (FScriptContainerElement *)&local_118) &&
            ((FScriptContainerElement *)&local_118 < pFVar1 + (longlong)param_1->ArrayMax * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        iVar10 = param_1->ArrayNum;
        if (iVar10 == param_1->ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar10 + 1;
        *(FAssetData **)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_118;
        if ((bVar19) && (bVar19 = false, local_e0 != (void *)0x0)) {
          FMemory::Free(local_e0);
        }
        bVar8 = true;
        pFVar12 = local_108;
        if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
          pFVar12 = local_108;
        }
      }
      uVar14 = (ulonglong)local_110;
      pFVar18 = pFVar18 + 0xd;
    }
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
  }
  bVar19 = bVar8 == false;
  bVar8 = true;
  *param_2 = bVar19;
LAB_142b5fec6:
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  return bVar8;
}

// ReadDependencyData @ 142b5ff20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FPackageReader::ReadDependencyData
          (FPackageReader *this,FPackageDependencyData *param_1,EReadOptions param_2)

{
  uint *puVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined1 uVar5;
  EPackageExtension EVar6;
  int iVar7;
  FName *pFVar8;
  FPackageCustomVersionsHandle *pFVar9;
  uint uVar10;
  ForAnyElementType FVar11;
  undefined1 auStackY_248 [32];
  FString local_208;
  TArray<TTuple<FName,UE::AssetRegistry::EExtraDependencyFlags>,TSizedDefaultAllocator<32>_>
  local_1f8;
  FPackageTrailer local_1e8;
  FCustomVersion *local_1b8;
  int iStack_1b0;
  undefined4 uStack_1ac;
  FScriptContainerElement *local_1a8;
  uint uStack_1a0;
  undefined4 uStack_19c;
  FObjectImport *local_198;
  int iStack_190;
  undefined4 uStack_18c;
  FName local_188 [2];
  TArrayView<FCustomVersion_const_,int> local_178;
  TStringView<wchar_t> local_168;
  TArrayView<FObjectImport_const_,int> local_158;
  FPackageCustomVersionsHandle local_148;
  undefined1 local_138 [96];
  undefined1 local_d8 [32];
  void *local_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  void *local_98;
  undefined4 local_90;
  TBitArray<FDefaultBitArrayAllocator> local_88;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_248;
  uVar10 = (this->LongPackageName).Data.ArrayNum;
  local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_208.Data.ArrayNum = 0;
  local_208.Data.ArrayMax = 0;
  if ((int)uVar10 < 2) {
    bVar4 = FPackageName::TryConvertFilenameToLongPackageName
                      (&this->PackageFilename,&local_208,(FString *)0x0,None);
    if (bVar4) goto LAB_142b5fffc;
  }
  else {
    if (&local_208 != &this->LongPackageName) {
      _Src = (this->LongPackageName).Data.AllocatorInstance.Data;
      local_208.Data.ArrayMax = 0;
      local_208.Data.ArrayNum = uVar10;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar10,0,(ForAnyElementType *)&local_208,uVar10,&local_208.Data.ArrayMax);
      memcpy(local_208.Data.AllocatorInstance.Data,_Src,(longlong)(int)uVar10 * 2);
    }
LAB_142b5fffc:
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_208.Data.ArrayNum != 0) {
      FVar11.Data = local_208.Data.AllocatorInstance.Data;
    }
    pFVar8 = ::FName::FName(local_188,(wchar_t *)FVar11.Data);
    param_1->PackageName = *pFVar8;
    if ((param_2 & Default) == None) {
LAB_142b60023:
      bVar4 = true;
      goto LAB_142b6042e;
    }
    bVar4 = SerializeNameMap(this);
    if (bVar4) {
      bVar4 = SerializeImportMap(this);
      if (bVar4) {
        if ((param_2 & PackageData) != None) {
          param_1->bHasPackageData = true;
          (param_1->PackageData).DiskSize = this->PackageFileSize;
          local_1b8 = (FCustomVersion *)
                      (this->PackageFileSummary).CustomVersionContainer.Versions.AllocatorInstance.
                      Data;
          iVar7 = (this->PackageFileSummary).CustomVersionContainer.Versions.ArrayNum;
          if (iVar7 < 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L"");
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              uVar5 = (*pcVar2)();
              return (bool)uVar5;
            }
          }
          local_178._12_4_ = uStack_1ac;
          local_178.ArrayNum = iVar7;
          local_178.DataPtr = local_1b8;
          iStack_1b0 = iVar7;
          pFVar9 = UE::AssetRegistry::FPackageCustomVersionsHandle::FindOrAdd(&local_148,&local_178)
          ;
          iVar7 = (pFVar9->Ptr).ArrayNum;
          uVar3 = *(undefined4 *)&(pFVar9->Ptr).field_0xc;
          (param_1->PackageData).CustomVersions.Ptr.DataPtr = (pFVar9->Ptr).DataPtr;
          (param_1->PackageData).CustomVersions.Ptr.ArrayNum = iVar7;
          *(undefined4 *)&(param_1->PackageData).CustomVersions.Ptr.field_0xc = uVar3;
          (param_1->PackageData).FileVersionUE = (this->PackageFileSummary).FileVersionUE;
          (param_1->PackageData).FileVersionLicenseeUE =
               (this->PackageFileSummary).FileVersionLicenseeUE;
          bVar4 = FEngineVersionBase::IsLicenseeVersion
                            ((FEngineVersionBase *)&(this->PackageFileSummary).SavedByEngineVersion)
          ;
          puVar1 = &(param_1->PackageData).Flags;
          *puVar1 = *puVar1 & 0xfffffffe;
          puVar1 = &(param_1->PackageData).Flags;
          *puVar1 = *puVar1 | (uint)bVar4;
          local_1a8 = (this->PackageFilename).Data.AllocatorInstance.Data;
          iVar7 = (this->PackageFilename).Data.ArrayNum;
          uVar10 = 0;
          uStack_1a0 = iVar7 - 1;
          if (iVar7 == 0) {
            uStack_1a0 = uVar10;
          }
          local_168._12_4_ = uStack_19c;
          local_168.Size = uStack_1a0;
          local_168.DataPtr = (wchar_t *)local_1a8;
          EVar6 = FPackagePath::ParseExtension(&local_168,(int *)0x0);
          puVar1 = &(param_1->PackageData).Flags;
          *puVar1 = *puVar1 | 0x80000000;
          (param_1->PackageData).Extension = EVar6;
          bVar4 = SerializeImportedClasses
                            (this,&this->ImportMap,&(param_1->PackageData).ImportedClasses);
          if (!bVar4) goto LAB_142b6042c;
          bVar4 = StartSerializeSection(this,(this->PackageFileSummary).PayloadTocOffset);
          if (bVar4) {
            local_1e8.TrailerPositionInFile = ___xmm_0000000000000000ffffffffffffffff;
            local_1e8.Header.Tag = _UNK_15076adc8;
            local_1e8.Header.Version = -1;
            local_1e8.Header.HeaderLength = 0;
            local_1e8.Header.PayloadsDataLength = 0;
            local_1e8.Header.PayloadLookupTable.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            local_1e8.Header.PayloadLookupTable.ArrayNum = 0;
            local_1e8.Header.PayloadLookupTable.ArrayMax = 0;
            bVar4 = UE::FPackageTrailer::TryLoad(&local_1e8,(FArchive *)this);
            if (bVar4) {
              iVar7 = UE::FPackageTrailer::GetNumPayloads(&local_1e8,Virtualized);
              if (0 < iVar7) {
                uVar10 = 2;
              }
              (param_1->PackageData).Flags = (param_1->PackageData).Flags & 0xfffffffd | uVar10;
            }
            else {
              puVar1 = &(param_1->PackageData).Flags;
              *puVar1 = *puVar1 & 0xfffffffd;
            }
            if (local_1e8.Header.PayloadLookupTable.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1e8.Header.PayloadLookupTable.AllocatorInstance.Data);
            }
          }
          else {
            puVar1 = &(param_1->PackageData).Flags;
            *puVar1 = *puVar1 & 0xfffffffd;
          }
        }
        if ((param_2 & Dependencies) == None) goto LAB_142b60023;
        param_1->bHasDependencyData = true;
        bVar4 = SerializeSoftPackageReferenceList(this);
        if (bVar4) {
          local_138._0_8_ = (FScriptContainerElement *)0x0;
          local_138._8_4_ = 0;
          local_138._12_4_ = 0;
          local_138._16_8_ = (FScriptContainerElement *)0x0;
          local_138._24_4_ = 0;
          local_138._28_4_ = 0;
          local_138._32_8_ = (FCellImport *)0x0;
          local_138._40_4_ = 0;
          local_138._44_4_ = 0;
          local_138._48_8_ = (FCellExport *)0x0;
          local_138._56_4_ = 0;
          local_138._60_4_ = 0;
          local_138._64_8_ = (TArray<FPackageIndex,TSizedDefaultAllocator<32>_> *)0x0;
          local_138._72_4_ = 0;
          local_138._76_4_ = 0;
          local_138._80_8_ = (FScriptContainerElement *)0x0;
          local_138._88_4_ = 0;
          local_138._92_4_ = 0;
          local_d8._0_8_ = (FScriptContainerElement *)0x0;
          local_d8._8_8_ = 0;
          local_b8 = (void *)0x0;
          local_b0 = 0;
          local_ac = 0x80;
          local_a8 = 0xffffffff;
          local_a4 = 0;
          local_98 = (void *)0x0;
          local_90 = 0;
          bVar4 = SerializeSearchableNamesMap(this,(FLinkerTables *)local_138);
          if (bVar4) {
            local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
            local_68.NumBits = 0;
            local_68.MaxBits = 0x80;
            local_88.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
            local_88.NumBits = 0;
            local_88.MaxBits = 0x80;
            local_1f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1f8.ArrayNum = 0;
            local_1f8.ArrayMax = 0;
            bVar4 = SerializeAssetRegistryDependencyData(this,&local_68,&local_88,&local_1f8);
            if (bVar4) {
              local_198 = (FObjectImport *)(this->ImportMap).AllocatorInstance.Data;
              iVar7 = (this->ImportMap).ArrayNum;
              if (iVar7 < 0) {
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L"");
                if (bVar4) {
                  pcVar2 = (code *)swi(3);
                  uVar5 = (*pcVar2)();
                  return (bool)uVar5;
                }
              }
              local_158._12_4_ = uStack_18c;
              local_158.ArrayNum = iVar7;
              local_158.DataPtr = local_198;
              iStack_190 = iVar7;
              FPackageDependencyData::LoadDependenciesFromPackageHeader
                        (param_1,param_1->PackageName,&local_158,&this->SoftPackageReferenceList,
                         (TMap<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                          *)local_d8,&local_68,&local_88,&local_1f8);
              if (local_1f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1f8.AllocatorInstance.Data);
              }
              if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
              }
              if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
              }
              local_90 = 0;
              if (local_98 != (void *)0x0) {
                FMemory::Free(local_98);
              }
              TSparseArray<TSparseSetElement<TTuple<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                 *)local_d8,0,local_d8._8_4_);
              iVar7 = SUB84(local_d8._8_8_,4);
              local_d8._8_8_ = local_d8._8_8_ & 0xffffffff00000000;
              if (iVar7 != 0) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x20,8,0,(ForAnyElementType *)local_d8,0,(int *)(local_d8 + 0xc));
              }
              local_a8 = 0xffffffff;
              local_a4 = 0;
              local_b0 = 0;
              if (0x80 < local_ac) {
                local_ac = 0x80;
                TBitArray<FDefaultBitArrayAllocator>::Realloc
                          ((TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10),0);
              }
              if (local_b8 != (void *)0x0) {
                FMemory::Free(local_b8);
              }
              if ((FScriptContainerElement *)local_d8._0_8_ != (FScriptContainerElement *)0x0) {
                FMemory::Free((void *)local_d8._0_8_);
              }
              if ((FScriptContainerElement *)local_138._80_8_ != (FScriptContainerElement *)0x0) {
                FMemory::Free((void *)local_138._80_8_);
              }
              DestructItems<TArray<FPackageIndex,TSizedDefaultAllocator<32>_>,int>
                        ((TArray<FPackageIndex,TSizedDefaultAllocator<32>_> *)local_138._64_8_,
                         local_138._72_4_);
              if ((TArray<FPackageIndex,TSizedDefaultAllocator<32>_> *)local_138._64_8_ !=
                  (TArray<FPackageIndex,TSizedDefaultAllocator<32>_> *)0x0) {
                FMemory::Free((void *)local_138._64_8_);
              }
              DestructItems<FCellExport,int>((FCellExport *)local_138._48_8_,local_138._56_4_);
              if ((FCellExport *)local_138._48_8_ != (FCellExport *)0x0) {
                FMemory::Free((void *)local_138._48_8_);
              }
              DestructItems<FCellImport,int>((FCellImport *)local_138._32_8_,local_138._40_4_);
              if ((FCellImport *)local_138._32_8_ != (FCellImport *)0x0) {
                FMemory::Free((void *)local_138._32_8_);
              }
              if ((FScriptContainerElement *)local_138._16_8_ != (FScriptContainerElement *)0x0) {
                FMemory::Free((void *)local_138._16_8_);
              }
              if ((FScriptContainerElement *)local_138._0_8_ != (FScriptContainerElement *)0x0) {
                FMemory::Free((void *)local_138._0_8_);
                bVar4 = true;
                goto LAB_142b6042e;
              }
              goto LAB_142b60023;
            }
            if (local_1f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1f8.AllocatorInstance.Data);
            }
            if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
            }
            if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
            }
          }
          local_90 = 0;
          if (local_98 != (void *)0x0) {
            FMemory::Free(local_98);
          }
          TSparseArray<TSparseSetElement<TTuple<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                             *)local_d8,0,local_d8._8_4_);
          iVar7 = SUB84(local_d8._8_8_,4);
          local_d8._8_8_ = local_d8._8_8_ & 0xffffffff00000000;
          if (iVar7 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,0,(ForAnyElementType *)local_d8,0,(int *)(local_d8 + 0xc));
          }
          local_a8 = 0xffffffff;
          local_a4 = 0;
          local_b0 = 0;
          if (0x80 < local_ac) {
            local_ac = 0x80;
            TBitArray<FDefaultBitArrayAllocator>::Realloc
                      ((TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10),0);
          }
          if (local_b8 != (void *)0x0) {
            FMemory::Free(local_b8);
          }
          if ((FScriptContainerElement *)local_d8._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_d8._0_8_);
          }
          if ((FScriptContainerElement *)local_138._80_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_138._80_8_);
          }
          DestructItems<TArray<FPackageIndex,TSizedDefaultAllocator<32>_>,int>
                    ((TArray<FPackageIndex,TSizedDefaultAllocator<32>_> *)local_138._64_8_,
                     local_138._72_4_);
          if ((TArray<FPackageIndex,TSizedDefaultAllocator<32>_> *)local_138._64_8_ !=
              (TArray<FPackageIndex,TSizedDefaultAllocator<32>_> *)0x0) {
            FMemory::Free((void *)local_138._64_8_);
          }
          DestructItems<FCellExport,int>((FCellExport *)local_138._48_8_,local_138._56_4_);
          if ((FCellExport *)local_138._48_8_ != (FCellExport *)0x0) {
            FMemory::Free((void *)local_138._48_8_);
          }
          DestructItems<FCellImport,int>((FCellImport *)local_138._32_8_,local_138._40_4_);
          if ((FCellImport *)local_138._32_8_ != (FCellImport *)0x0) {
            FMemory::Free((void *)local_138._32_8_);
          }
          if ((FScriptContainerElement *)local_138._16_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_138._16_8_);
          }
          if ((FScriptContainerElement *)local_138._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_138._0_8_);
          }
        }
      }
    }
  }
LAB_142b6042c:
  bVar4 = false;
LAB_142b6042e:
  if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.Data.AllocatorInstance.Data);
  }
  return bVar4;
}

// ReadEditorOnlyFlags @ 142b60680

bool __thiscall
FPackageReader::ReadEditorOnlyFlags
          (FPackageReader *this,TBitArray<FDefaultBitArrayAllocator> *param_1,
          TBitArray<FDefaultBitArrayAllocator> *param_2)

{
  bool bVar1;
  
  bVar1 = SerializeNameMap(this);
  if (bVar1) {
    bVar1 = SerializeImportMap(this);
    if (bVar1) {
      bVar1 = SerializeSoftPackageReferenceList(this);
      if (bVar1) {
        bVar1 = SerializeEditorOnlyFlags(this,param_1,param_2);
        if (bVar1) {
          return true;
        }
      }
    }
  }
  return false;
}

// ReadImportedClasses @ 142b60700

bool __thiscall
FPackageReader::ReadImportedClasses
          (FPackageReader *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  bool bVar1;
  
  bVar1 = SerializeNameMap(this);
  if (bVar1) {
    bVar1 = SerializeImportMap(this);
    if (bVar1) {
      bVar1 = SerializeImportedClasses(this,&this->ImportMap,param_1);
      if (bVar1) {
        return true;
      }
    }
  }
  return false;
}

// ReadLinkerObjects @ 142b60760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FPackageReader::ReadLinkerObjects
          (FPackageReader *this,
          TMap<FSoftObjectPath,FPackageReader::FObjectData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>_>
          *param_1,TMap<FSoftObjectPath,FPackageReader::FObjectData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>_>
                   *param_2,
          TMap<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_> *param_3)

{
  FUtf8String *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool *this_00;
  FPackageReader *pFVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  FName *pFVar8;
  FSoftObjectPath *pFVar9;
  ForElementType<unsigned_int> FVar10;
  ForAnyElementType FVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  TArray<FObjectImport,TSizedDefaultAllocator<32>_> *pTVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  TSet<TTuple<FSoftObjectPath,FPackageReader::FObjectData>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>,FDefaultSetAllocator>
  *this_01;
  int iVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined1 auStackY_268 [32];
  undefined1 local_228;
  undefined1 local_227;
  undefined1 local_226 [2];
  int local_224;
  FString local_220;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_210;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_200;
  longlong local_1f0;
  int local_1e8;
  TArray<FObjectImport,TSizedDefaultAllocator<32>_> *local_1e0;
  TSet<TTuple<FSoftObjectPath,FPackageReader::FObjectData>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>,FDefaultSetAllocator>
  *local_1d8;
  FName local_1d0;
  FName FStack_1c8;
  FScriptContainerElement *local_1c0;
  undefined8 local_1b8;
  undefined1 local_1b0;
  FName local_1a8;
  FName FStack_1a0;
  FScriptContainerElement *local_198;
  undefined8 local_190;
  undefined1 local_188;
  TSet<TTuple<FSoftObjectPath,FPackageReader::FObjectData>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>,FDefaultSetAllocator>
  *local_180;
  FTopLevelAssetPath local_178;
  undefined1 local_168 [8];
  TPairInitializer<FName_const_&,bool_&&> local_160;
  FKeyComparisonClass<_public:_bool___cdecl_FPackageReader::ReadLinkerObjects(TMap<FSoftObjectPath,FPackageReader::FObjectData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>_>_&,TMap<FSoftObjectPath,FPackageReader::FObjectData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>_>_&,TMap<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_>_&)_::_2_::<lambda_2>_>
  local_150;
  FKeyComparisonClass<_public:_bool___cdecl_FPackageReader::ReadLinkerObjects(TMap<FSoftObjectPath,FPackageReader::FObjectData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>_>_&,TMap<FSoftObjectPath,FPackageReader::FObjectData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>_>_&,TMap<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_>_&)_::_2_::<lambda_2>_>
  local_148;
  FPackageReader *local_140;
  FKeyComparisonClass<FNameLexicalLess> local_138;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *local_130;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *local_128;
  FScriptContainerElement *local_120;
  FName *local_118;
  FScriptContainerElement *local_110;
  FName *local_108;
  FScriptContainerElement *local_100;
  undefined1 *local_f8;
  FTopLevelAssetPath local_e8;
  FName local_d8;
  FSoftObjectPath local_d0;
  FSoftObjectPath local_b0;
  TBitArray<FDefaultBitArrayAllocator> local_90;
  TBitArray<FDefaultBitArrayAllocator> local_70;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_1d8 = (TSet<TTuple<FSoftObjectPath,FPackageReader::FObjectData>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>,FDefaultSetAllocator>
               *)param_2;
  local_180 = (TSet<TTuple<FSoftObjectPath,FPackageReader::FObjectData>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>,FDefaultSetAllocator>
               *)param_1;
  local_160.Value = (bool *)param_3;
  local_140 = this;
  bVar5 = SerializeNameMap(this);
  if ((((bVar5) && (bVar5 = SerializeImportMap(this), bVar5)) &&
      (bVar5 = SerializeExportMap(this), bVar5)) &&
     (bVar5 = SerializeSoftPackageReferenceList(this), bVar5)) {
    local_70.MaxBits = 0x80;
    local_70.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_70.NumBits = 0;
    local_90.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_90.NumBits = 0;
    local_90.MaxBits = 0x80;
    bVar5 = SerializeEditorOnlyFlags(this,&local_70,&local_90);
    if (bVar5) {
      local_1e0 = &this->ImportMap;
      iVar13 = (this->ExportMap).ArrayNum;
      local_200.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_200.ArrayNum = 0;
      local_200.ArrayMax = 0;
      local_210.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_210.ArrayNum = 0;
      local_210.ArrayMax = 0;
      local_220.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_220.Data.ArrayNum = 0;
      local_220.Data.ArrayMax = 0;
      uVar20 = (this->LongPackageName).Data.ArrayNum;
      iVar19 = (this->ImportMap).ArrayNum;
      local_1e8 = (this->SoftPackageReferenceList).ArrayNum;
      local_1f0 = CONCAT44(local_1f0._4_4_,iVar19);
      local_224 = iVar13;
      if ((int)uVar20 < 2) {
        bVar5 = FPackageName::TryConvertFilenameToLongPackageName
                          (&this->PackageFilename,&local_220,(FString *)0x0,None);
        if ((!bVar5) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TryGetLongPackageName(Result)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PackageReader.cpp"
                               ,0x12a,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
      }
      else if (&local_220 != &this->LongPackageName) {
        pFVar2 = (this->LongPackageName).Data.AllocatorInstance.Data;
        local_220.Data.ArrayMax = 0;
        local_220.Data.ArrayNum = uVar20;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar20,0,(ForAnyElementType *)&local_220,uVar20,&local_220.Data.ArrayMax);
        memcpy(local_220.Data.AllocatorInstance.Data,pFVar2,(longlong)(int)uVar20 * 2);
        iVar13 = local_224;
      }
      FVar11.Data = (FScriptContainerElement *)L"";
      if (local_220.Data.ArrayNum != 0) {
        FVar11.Data = local_220.Data.AllocatorInstance.Data;
      }
      pFVar8 = ::FName::FName(&local_d8,(wchar_t *)FVar11.Data);
      pTVar15 = local_1e0;
      ConvertLinkerTableToPaths(*pFVar8,&this->ExportMap,local_1e0,&local_200,&local_210);
      if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_220.Data.AllocatorInstance.Data);
      }
      local_130 = &local_200;
      local_128 = &local_210;
      TSet<TTuple<FSoftObjectPath,FPackageReader::FObjectData>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>,FDefaultSetAllocator>
      ::Reserve((TSet<TTuple<FSoftObjectPath,FPackageReader::FObjectData>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>,FDefaultSetAllocator>
                 *)param_1,iVar13);
      uVar18 = 0;
      uVar12 = uVar18;
      uVar17 = uVar18;
      if (0 < iVar13) {
        do {
          uVar7 = (uint)uVar18;
          local_1c0 = (FScriptContainerElement *)0x0;
          local_1d0.ComparisonIndex.Value = 0;
          local_1d0.Number = 0;
          FStack_1c8.ComparisonIndex.Value = 0;
          FStack_1c8.Number = 0;
          uVar20 = 0;
          if ((int)uVar7 < (this->ExportMap).ArrayNum) {
            uVar20 = ~uVar7 >> 0x1f;
          }
          local_1b8 = 0;
          local_1b0 = 1;
          if ((uVar20 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          pFVar9 = `FPackageReader::ReadLinkerObjects'::__l2::<lambda_1>::operator()
                             (&local_130,&local_d0,
                              (FPackageIndex)
                              *(int *)((this->ExportMap).AllocatorInstance.Data + uVar12 + 0xc));
          local_1d0 = (pFVar9->AssetPath).PackageName;
          FStack_1c8 = (pFVar9->AssetPath).AssetName;
          pFVar1 = &pFVar9->SubPathString;
          if ((FUtf8String *)&local_1c0 != pFVar1) {
            if (local_1c0 != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1c0);
            }
            local_1c0 = (pFVar1->Data).AllocatorInstance.Data;
            (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1b8._0_4_ = (pFVar9->SubPathString).Data.ArrayNum;
            local_1b8._4_4_ = (pFVar9->SubPathString).Data.ArrayMax;
            (pFVar9->SubPathString).Data.ArrayNum = 0;
            (pFVar9->SubPathString).Data.ArrayMax = 0;
          }
          if (local_d0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_d0.SubPathString.Data.AllocatorInstance.Data);
          }
          local_1b0 = 1;
          uVar20 = 0;
          if ((int)uVar7 < local_200.ArrayNum) {
            uVar20 = ~uVar7 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          local_118 = &local_1d0;
          local_120 = local_200.AllocatorInstance.Data + uVar17;
          TSet<TTuple<FSoftObjectPath,FPackageReader::FObjectData>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FSoftObjectPath_const_&,FPackageReader::FObjectData_&&>_>
                    (local_180,
                     (TPairInitializer<FSoftObjectPath_const_&,FPackageReader::FObjectData_&&> *)
                     local_168,(bool *)&local_120);
          if (local_1c0 != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c0);
          }
          uVar18 = (ulonglong)(uVar7 + 1);
          uVar12 = uVar12 + 0x68;
          uVar17 = uVar17 + 0x20;
        } while ((int)(uVar7 + 1) < local_224);
        pTVar15 = local_1e0;
        iVar19 = (int)local_1f0;
      }
      this_01 = local_1d8;
      TSet<TTuple<FSoftObjectPath,FPackageReader::FObjectData>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>,FDefaultSetAllocator>
      ::Reserve(local_1d8,iVar19);
      uVar12 = 0;
      local_1f0 = (longlong)iVar19;
      if (0 < iVar19) {
        uVar20 = 1;
        uVar17 = uVar12;
        uVar18 = uVar12;
        uVar21 = uVar12;
        do {
          uVar14 = (uint)uVar12;
          local_1a8.ComparisonIndex.Value = 0;
          local_1a8.Number = 0;
          FStack_1a0.ComparisonIndex.Value = 0;
          FStack_1a0.Number = 0;
          local_198 = (FScriptContainerElement *)0x0;
          uVar7 = 0;
          if ((int)uVar14 < pTVar15->ArrayNum) {
            uVar7 = ~uVar14 >> 0x1f;
          }
          local_190 = 0;
          local_188 = 1;
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          pFVar2 = (pTVar15->AllocatorInstance).Data;
          local_178.PackageName.ComparisonIndex.Value = 0;
          local_178.PackageName.Number = 0;
          local_178.AssetName.ComparisonIndex.Value = 0;
          local_178.AssetName.Number = 0;
          FTopLevelAssetPath::TrySetPath
                    (&local_178,*(FName *)(pFVar2 + uVar17 + 0xc),*(FName *)(pFVar2 + uVar17 + 0x14)
                    );
          local_e8.PackageName = local_178.PackageName;
          local_e8.AssetName = local_178.AssetName;
          pFVar9 = FSoftObjectPath::ConstructFromAssetPath(&local_b0,&local_e8);
          local_1a8 = (pFVar9->AssetPath).PackageName;
          FStack_1a0 = (pFVar9->AssetPath).AssetName;
          pFVar1 = &pFVar9->SubPathString;
          if ((FUtf8String *)&local_198 != pFVar1) {
            if (local_198 != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_198);
            }
            local_198 = (pFVar1->Data).AllocatorInstance.Data;
            (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_190._0_4_ = (pFVar9->SubPathString).Data.ArrayNum;
            local_190._4_4_ = (pFVar9->SubPathString).Data.ArrayMax;
            (pFVar9->SubPathString).Data.ArrayNum = 0;
            (pFVar9->SubPathString).Data.ArrayMax = 0;
          }
          if (local_b0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_b0.SubPathString.Data.AllocatorInstance.Data);
          }
          if ((((int)uVar14 < 0) || (local_70.NumBits <= (int)uVar14)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          FVar10 = (ForElementType<unsigned_int>)&local_70;
          if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar10 = local_70.AllocatorInstance.SecondaryData;
          }
          uVar7 = uVar14;
          if ((int)uVar14 < 0) {
            uVar7 = uVar14 + 0x1f;
          }
          local_188 = (*(uint *)((longlong)FVar10 + (longlong)((int)uVar7 >> 5) * 4) & uVar20) != 0;
          uVar7 = 0;
          if ((int)uVar14 < local_210.ArrayNum) {
            uVar7 = ~uVar14 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          local_108 = &local_1a8;
          local_110 = local_210.AllocatorInstance.Data + uVar18;
          TSet<TTuple<FSoftObjectPath,FPackageReader::FObjectData>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FSoftObjectPath_const_&,FPackageReader::FObjectData_&&>_>
                    (local_1d8,
                     (TPairInitializer<FSoftObjectPath_const_&,FPackageReader::FObjectData_&&> *)
                     (local_168 + 4),(bool *)&local_110);
          if (local_198 != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_198);
          }
          uVar12 = (ulonglong)(uVar14 + 1);
          uVar20 = uVar20 << 1 | (uint)((int)uVar20 < 0);
          uVar21 = uVar21 + 1;
          uVar17 = uVar17 + 0x38;
          uVar18 = uVar18 + 0x20;
          pTVar15 = local_1e0;
          this_01 = local_1d8;
        } while ((longlong)uVar21 < local_1f0);
      }
      this_00 = local_160.Value;
      iVar13 = local_1e8;
      uVar7 = 1;
      TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>::
      Reserve((TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>
               *)local_160.Value,local_1e8);
      pFVar4 = local_140;
      uVar20 = 0;
      if (0 < iVar13) {
        lVar16 = 0;
        do {
          if ((local_90.NumBits <= (int)uVar20) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          FVar10 = (ForElementType<unsigned_int>)&local_90;
          if (local_90.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar10 = local_90.AllocatorInstance.SecondaryData;
          }
          local_228 = (*(uint *)((longlong)FVar10 + (ulonglong)(uVar20 >> 5) * 4) & uVar7) != 0;
          uVar14 = 0;
          if ((int)uVar20 < (pFVar4->SoftPackageReferenceList).ArrayNum) {
            uVar14 = ~uVar20 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          local_100 = (pFVar4->SoftPackageReferenceList).AllocatorInstance.Data + lVar16 * 8;
          local_f8 = &local_228;
          TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<FName_const_&,bool_&&>_>
                    ((TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>
                      *)this_00,&local_160,(bool *)&local_100);
          uVar20 = uVar20 + 1;
          uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
          lVar16 = lVar16 + 1;
        } while ((int)uVar20 < iVar13);
      }
      local_148.Predicate.Predicate =
           (TDereferenceWrapper<FSoftObjectPath,_public:_bool___cdecl_FPackageReader::ReadLinkerObjects(TMap<FSoftObjectPath,FPackageReader::FObjectData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>_>_&,TMap<FSoftObjectPath,FPackageReader::FObjectData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>_>_&,TMap<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_>_&)_::_2_::<lambda_2>_>
            )&local_227;
      TSet<TTuple<FSoftObjectPath,FPackageReader::FObjectData>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>,FDefaultSetAllocator>
      ::
      Sort<TSortableMapBase<FSoftObjectPath,FPackageReader::FObjectData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>_>::FKeyComparisonClass<_FPackageReader::ReadLinkerObjects_::__l2::<lambda_2>_>_>
                (local_180,&local_148);
      local_150.Predicate.Predicate =
           (TDereferenceWrapper<FSoftObjectPath,_public:_bool___cdecl_FPackageReader::ReadLinkerObjects(TMap<FSoftObjectPath,FPackageReader::FObjectData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>_>_&,TMap<FSoftObjectPath,FPackageReader::FObjectData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>_>_&,TMap<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_>_&)_::_2_::<lambda_2>_>
            )&local_227;
      TSet<TTuple<FSoftObjectPath,FPackageReader::FObjectData>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>,FDefaultSetAllocator>
      ::
      Sort<TSortableMapBase<FSoftObjectPath,FPackageReader::FObjectData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>_>::FKeyComparisonClass<_FPackageReader::ReadLinkerObjects_::__l2::<lambda_2>_>_>
                (this_01,&local_150);
      local_138.Predicate.Predicate = (TDereferenceWrapper<FName,FNameLexicalLess>)local_226;
      TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>::
      Sort<TSortableMapBase<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_>::FKeyComparisonClass<FNameLexicalLess>_>
                ((TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>
                  *)this_00,&local_138);
      bVar5 = true;
      DestructItems<FSoftObjectPath,int>
                ((FSoftObjectPath *)local_210.AllocatorInstance.Data,local_210.ArrayNum);
      if ((FSoftObjectPath *)local_210.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
        FMemory::Free(local_210.AllocatorInstance.Data);
      }
      DestructItems<FSoftObjectPath,int>
                ((FSoftObjectPath *)local_200.AllocatorInstance.Data,local_200.ArrayNum);
      if ((FSoftObjectPath *)local_200.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
        FMemory::Free(local_200.AllocatorInstance.Data);
      }
    }
    else {
      bVar5 = false;
    }
    if (local_90.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_90.AllocatorInstance.SecondaryData);
    }
    if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_70.AllocatorInstance.SecondaryData);
    }
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}

// Seek @ 142b64db0

void __thiscall FPackageReader::Seek(FPackageReader *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Loader == (FArchive *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Loader",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PackageReader.cpp"
                       ,0x56f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (**(code **)(*(longlong *)this->Loader + 0x1b8))(this->Loader,param_1);
  if ((this->Loader->field_0x29 & 2) != 0) {
    FArchiveState::SetError((FArchiveState *)this);
  }
  return;
}

// Serialize @ 142b650f0

void __thiscall FPackageReader::Serialize(FPackageReader *this,void *param_1,long64 param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Loader == (FArchive *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Loader",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PackageReader.cpp"
                       ,0x55f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (**(code **)(*(longlong *)this->Loader + 0x188))(this->Loader,param_1,param_2);
  if ((this->Loader->field_0x29 & 2) != 0) {
    FArchiveState::SetError((FArchiveState *)this);
  }
  return;
}

// SerializeAssetRegistryDependencyData @ 142b65180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FPackageReader::SerializeAssetRegistryDependencyData
          (FPackageReader *this,TBitArray<FDefaultBitArrayAllocator> *param_1,
          TBitArray<FDefaultBitArrayAllocator> *param_2,
          TArray<TTuple<FName,UE::AssetRegistry::EExtraDependencyFlags>,TSizedDefaultAllocator<32>_>
          *param_3)

{
  ForElementType<unsigned_int> FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  undefined1 auStack_168 [32];
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_148
  ;
  FString local_138;
  FFormatArgumentValue local_128;
  FText local_108;
  FText local_f8;
  FText local_e8;
  FTextFormat local_d8;
  FReadPackageDataDependenciesArgs local_c8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_168;
  local_c8.AssetRegistryDependencyDataOffset = this->AssetRegistryDependencyDataOffset;
  local_c8.NumImports = (this->ImportMap).ArrayNum;
  local_c8.NumSoftPackageReferences = (this->SoftPackageReferenceList).ArrayNum;
  local_c8.PackageVersion = (this->PackageFileSummary).FileVersionUE;
  local_c8.ImportUsedInGame.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_c8.ImportUsedInGame.NumBits = 0;
  local_c8.ImportUsedInGame.MaxBits = 0x80;
  local_c8.SoftPackageUsedInGame.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0
  ;
  local_c8.SoftPackageUsedInGame.NumBits = 0;
  local_c8.SoftPackageUsedInGame.MaxBits = 0x80;
  local_c8.ExtraPackageDependencies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ExtraPackageDependencies.ArrayNum = 0;
  local_c8.ExtraPackageDependencies.ArrayMax = 0;
  local_c8.AssetRegistryDependencyDataSize = 0;
  local_c8.BinaryNameAwareArchive = (FArchive *)this;
  FArchiveState::ClearError((FArchiveState *)this);
  FArchiveState::ClearError((FArchiveState *)this->Loader);
  bVar4 = UE::AssetRegistry::ReadPackageDataDependencies(&local_c8);
  if (bVar4) {
    if (param_1 != &local_c8.ImportUsedInGame) {
      if (local_c8.ImportUsedInGame.AllocatorInstance.SecondaryData ==
          (ForElementType<unsigned_int>)0x0) {
        *(undefined8 *)(param_1->AllocatorInstance).InlineData =
             local_c8.ImportUsedInGame.AllocatorInstance.InlineData._0_8_;
        *(undefined8 *)((param_1->AllocatorInstance).InlineData + 8) =
             local_c8.ImportUsedInGame.AllocatorInstance.InlineData._8_8_;
      }
      FVar1 = (param_1->AllocatorInstance).SecondaryData;
      if (FVar1 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      (param_1->AllocatorInstance).SecondaryData =
           local_c8.ImportUsedInGame.AllocatorInstance.SecondaryData;
      param_1->NumBits = local_c8.ImportUsedInGame.NumBits;
      param_1->MaxBits = local_c8.ImportUsedInGame.MaxBits;
      local_c8.ImportUsedInGame.NumBits = 0;
      local_c8.ImportUsedInGame.MaxBits = 0;
      local_c8.ImportUsedInGame.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    }
    if (param_2 != &local_c8.SoftPackageUsedInGame) {
      if (local_c8.SoftPackageUsedInGame.AllocatorInstance.SecondaryData ==
          (ForElementType<unsigned_int>)0x0) {
        *(undefined8 *)(param_2->AllocatorInstance).InlineData =
             local_c8.SoftPackageUsedInGame.AllocatorInstance.InlineData._0_8_;
        *(undefined8 *)((param_2->AllocatorInstance).InlineData + 8) =
             local_c8.SoftPackageUsedInGame.AllocatorInstance.InlineData._8_8_;
      }
      FVar1 = (param_2->AllocatorInstance).SecondaryData;
      if (FVar1 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      (param_2->AllocatorInstance).SecondaryData =
           local_c8.SoftPackageUsedInGame.AllocatorInstance.SecondaryData;
      param_2->NumBits = local_c8.SoftPackageUsedInGame.NumBits;
      param_2->MaxBits = local_c8.SoftPackageUsedInGame.MaxBits;
      local_c8.SoftPackageUsedInGame.NumBits = 0;
      local_c8.SoftPackageUsedInGame.MaxBits = 0;
      local_c8.SoftPackageUsedInGame.AllocatorInstance.SecondaryData =
           (ForElementType<unsigned_int>)0x0;
    }
    if (param_3 != &local_c8.ExtraPackageDependencies) {
      pFVar2 = (param_3->AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (param_3->AllocatorInstance).Data = local_c8.ExtraPackageDependencies.AllocatorInstance.Data;
      param_3->ArrayNum = local_c8.ExtraPackageDependencies.ArrayNum;
      param_3->ArrayMax = local_c8.ExtraPackageDependencies.ArrayMax;
      local_c8.ExtraPackageDependencies.ArrayNum = 0;
      local_c8.ExtraPackageDependencies.ArrayMax = 0;
      local_c8.ExtraPackageDependencies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    bVar4 = true;
  }
  else {
    local_148.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_148.Pairs.ArrayNum = 0;
    local_148.Pairs.ArrayMax = 0;
    pFVar6 = FText::FromString(&local_108,&this->PackageFilename);
    local_128.Type = Text;
    FText::FText((FText *)&local_128.TextValue,pFVar6);
    if ((local_128.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    ::FString::FString(&local_138,L"FileName");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_148,&local_138,&local_128);
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    if (local_128.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_128.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    if (local_108.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
    }
    if (2 < (byte)LogAssetRegistry._0_1_) {
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_e8,L"AssetRegistry",L"SerializeAssetRegistryDependencyData",
                          L"Package is unloadable: {FileName}. Reason: SerializeAssetRegistryDependencyData."
                         );
      pFVar7 = FTextFormat::FTextFormat(&local_d8,pFVar6,Default);
      pFVar6 = FText::Format(&local_f8,pFVar7,&local_148);
      FText::ToString(pFVar6);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
      if (local_f8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
      }
      if (local_e8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
      }
    }
    DestructItems<TTuple<FString,FFormatArgumentValue>,int>
              ((TTuple<FString,FFormatArgumentValue> *)local_148.Pairs.AllocatorInstance.Data,
               local_148.Pairs.ArrayNum);
    if ((TTuple<FString,FFormatArgumentValue> *)local_148.Pairs.AllocatorInstance.Data !=
        (TTuple<FString,FFormatArgumentValue> *)0x0) {
      FMemory::Free(local_148.Pairs.AllocatorInstance.Data);
    }
    bVar4 = false;
  }
  if (local_c8.ExtraPackageDependencies.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.ExtraPackageDependencies.AllocatorInstance.Data);
  }
  if (local_c8.SoftPackageUsedInGame.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_c8.SoftPackageUsedInGame.AllocatorInstance.SecondaryData);
  }
  if (local_c8.ImportUsedInGame.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
     ) {
    FMemory::Free((void *)local_c8.ImportUsedInGame.AllocatorInstance.SecondaryData);
  }
  return bVar4;
}

// SerializeDependsMap @ 142b654b0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FPackageReader::SerializeDependsMap(FPackageReader *this)

{
  int *piVar1;
  TArray<TArray<FPackageIndex,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  longlong lVar10;
  TArray<FPackageIndex,TSizedDefaultAllocator<32>_> *pTVar11;
  int iVar12;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_198
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_188
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_178
  ;
  FString local_168;
  FString local_158;
  FString local_148;
  FFormatArgumentValue local_138;
  FFormatArgumentValue local_118;
  FFormatArgumentValue local_f8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FText local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FTextFormat local_48;
  FTextFormat local_38;
  FTextFormat local_28;
  
  if ((((this->DependsMap).ArrayNum < 1) &&
      (iVar12 = (this->PackageFileSummary).DependsOffset, 0 < iVar12)) &&
     (0 < (this->PackageFileSummary).ExportCount)) {
    bVar5 = StartSerializeSection(this,(longlong)iVar12);
    if (bVar5) {
      uVar3 = (this->PackageFileSummary).ExportCount;
      lVar10 = (**(code **)(this->_padding_ + 0x28))(this);
      if (lVar10 + (int)uVar3 <= this->PackageFileSize) {
        pTVar2 = &this->DependsMap;
        if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
        }
        piVar1 = &(this->DependsMap).ArrayMax;
        if ((this->DependsMap).ArrayMax < (int)uVar3) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,uVar3,&pTVar2->AllocatorInstance,(this->DependsMap).ArrayNum,piVar1);
        }
        iVar12 = 0;
        if (0 < (this->PackageFileSummary).ExportCount) {
          do {
            iVar7 = (this->DependsMap).ArrayNum;
            if (iVar7 == *piVar1) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&pTVar2->AllocatorInstance,piVar1);
              (this->DependsMap).ArrayNum = iVar7;
            }
            (this->DependsMap).ArrayNum = iVar7 + 1;
            pTVar11 = (TArray<FPackageIndex,TSizedDefaultAllocator<32>_> *)
                      ((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x10);
            (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
            pTVar11->ArrayNum = 0;
            pTVar11->ArrayMax = 0;
            TArrayPrivateFriend::Serialize<FPackageIndex,TSizedDefaultAllocator<32>_>
                      ((FArchive *)this,pTVar11);
            if ((this->_padding_ & 0x200) != 0) {
              local_178.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_178.Pairs.ArrayNum = 0;
              local_178.Pairs.ArrayMax = 0;
              pFVar8 = FText::FromString(&local_78,&this->PackageFilename);
              local_f8.Type = Text;
              FText::FText((FText *)&local_f8.TextValue,pFVar8);
              if ((local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0)
                 && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsSet()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                        ,0xbd,
                                        L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                       ), bVar5)) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
              ::FString::FString(&local_148,L"FileName");
              TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
              ::Emplace<FString,FFormatArgumentValue>(&local_178,&local_148,&local_f8);
              if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_148.Data.AllocatorInstance.Data);
              }
              if (local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)
                             *(ITextData *)
                              local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))()
                ;
              }
              if (local_78.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
              }
              if (2 < (byte)LogAssetRegistry._0_1_) {
                pFVar8 = FText::AsLocalizable_Advanced_LocText
                                   (&local_58,L"AssetRegistry",L"SerializeDependsMapInvalidEntry",
                                    L"Package is unloadable: {FileName}. Reason: SerializeDependsMapInvalidEntry."
                                   );
                pFVar9 = FTextFormat::FTextFormat(&local_28,pFVar8,Default);
                pFVar8 = FText::Format(&local_68,pFVar9,&local_178);
                FText::ToString(pFVar8);
                UE::Logging::Private::BasicLog<3>
                          (&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
                if (local_68.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
                }
                if (local_58.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
                }
              }
              DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                        ((TTuple<FString,FFormatArgumentValue> *)
                         local_178.Pairs.AllocatorInstance.Data,local_178.Pairs.ArrayNum);
              if ((TTuple<FString,FFormatArgumentValue> *)local_178.Pairs.AllocatorInstance.Data !=
                  (TTuple<FString,FFormatArgumentValue> *)0x0) {
                FMemory::Free(local_178.Pairs.AllocatorInstance.Data);
              }
              pTVar11 = (TArray<FPackageIndex,TSizedDefaultAllocator<32>_> *)
                        (this->DependsMap).AllocatorInstance.Data;
              iVar12 = (this->DependsMap).ArrayNum;
              if (-1 < (this->DependsMap).ArrayMax) {
                DestructItems<TArray<FPackageIndex,TSizedDefaultAllocator<32>_>,int>(pTVar11,iVar12)
                ;
                (this->DependsMap).ArrayNum = 0;
                return false;
              }
              DestructItems<TArray<FPackageIndex,TSizedDefaultAllocator<32>_>,int>(pTVar11,iVar12);
              (this->DependsMap).ArrayNum = 0;
              if ((this->DependsMap).ArrayMax != 0) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,8,0,&(this->DependsMap).AllocatorInstance,0,piVar1);
              }
              goto LAB_142b65a6e;
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 < (this->PackageFileSummary).ExportCount);
        }
        goto LAB_142b658a3;
      }
      local_188.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_188.Pairs.ArrayNum = 0;
      local_188.Pairs.ArrayMax = 0;
      pFVar8 = FText::FromString(&local_a8,&this->PackageFilename);
      local_118.Type = Text;
      FText::FText((FText *)&local_118.TextValue,pFVar8);
      if ((local_118.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      ::FString::FString(&local_158,L"FileName");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_188,&local_158,&local_118);
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
      if (local_118.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_118.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
      }
      if (2 < (byte)LogAssetRegistry._0_1_) {
        pFVar8 = FText::AsLocalizable_Advanced_LocText
                           (&local_88,L"AssetRegistry",L"SerializeDependsMapInvalidExportCount",
                            L"Package is unloadable: {FileName}. Reason: SerializeDependsMapInvalidExportCount."
                           );
        pFVar9 = FTextFormat::FTextFormat(&local_38,pFVar8,Default);
        pFVar8 = FText::Format(&local_98,pFVar9,&local_188);
        FText::ToString(pFVar8);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
        if (local_98.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
        }
        if (local_88.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
        }
      }
      DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                ((TTuple<FString,FFormatArgumentValue> *)local_188.Pairs.AllocatorInstance.Data,
                 local_188.Pairs.ArrayNum);
      if ((TTuple<FString,FFormatArgumentValue> *)local_188.Pairs.AllocatorInstance.Data !=
          (TTuple<FString,FFormatArgumentValue> *)0x0) {
        FMemory::Free(local_188.Pairs.AllocatorInstance.Data);
        return false;
      }
    }
    else {
      local_198.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_198.Pairs.ArrayNum = 0;
      local_198.Pairs.ArrayMax = 0;
      pFVar8 = FText::FromString(&local_d8,&this->PackageFilename);
      local_138.Type = Text;
      FText::FText((FText *)&local_138.TextValue,pFVar8);
      if ((local_138.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      ::FString::FString(&local_168,L"FileName");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_198,&local_168,&local_138);
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
      if (local_138.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_138.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_d8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
      }
      if (2 < (byte)LogAssetRegistry._0_1_) {
        pFVar8 = FText::AsLocalizable_Advanced_LocText
                           (&local_b8,L"AssetRegistry",L"SerializeDependsMapInvalidOffset",
                            L"Package is unloadable: {FileName}. Reason: SerializeDependsMapInvalidOffset."
                           );
        pFVar9 = FTextFormat::FTextFormat(&local_48,pFVar8,Default);
        pFVar8 = FText::Format(&local_c8,pFVar9,&local_198);
        FText::ToString(pFVar8);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
        if (local_c8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
        }
        if (local_b8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
        }
      }
      DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                ((TTuple<FString,FFormatArgumentValue> *)local_198.Pairs.AllocatorInstance.Data,
                 local_198.Pairs.ArrayNum);
      if ((TTuple<FString,FFormatArgumentValue> *)local_198.Pairs.AllocatorInstance.Data !=
          (TTuple<FString,FFormatArgumentValue> *)0x0) {
        FMemory::Free(local_198.Pairs.AllocatorInstance.Data);
        return false;
      }
    }
LAB_142b65a6e:
    bVar5 = false;
  }
  else {
LAB_142b658a3:
    bVar5 = true;
  }
  return bVar5;
}

// SerializeEditorOnlyFlags @ 142b65a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FPackageReader::SerializeEditorOnlyFlags
          (FPackageReader *this,TBitArray<FDefaultBitArrayAllocator> *param_1,
          TBitArray<FDefaultBitArrayAllocator> *param_2)

{
  uint *puVar1;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  ForElementType<unsigned_int> FVar10;
  uint uVar11;
  undefined1 auStack_208 [32];
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_1e8
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_1d8
  ;
  EReadPackageDataMainErrorCode local_1c8 [2];
  FDeserializePackageData local_1c0;
  FString local_1b0;
  FString local_1a0;
  FFormatArgumentValue local_190;
  FFormatArgumentValue local_170;
  FText local_150;
  FText local_140;
  FText local_130;
  FText local_120;
  FText local_110;
  FText local_100;
  FTextFormat local_f0;
  FTextFormat local_e0;
  FReadPackageDataDependenciesArgs local_c8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_208;
  if (((this->AssetRegistryDependencyDataOffset == -1) &&
      (-1 < (int)(this->PackageFileSummary).PackageFlags)) &&
     (bVar4 = StartSerializeSection
                        (this,(longlong)(this->PackageFileSummary).AssetRegistryDataOffset), bVar4))
  {
    local_1c0.DependencyDataOffset = -1;
    local_1c0.ObjectCount = 0;
    bVar4 = UE::AssetRegistry::FDeserializePackageData::DoSerialize
                      (&local_1c0,(FArchive *)this,&this->PackageFileSummary,local_1c8);
    if (!bVar4) {
      local_1e8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1e8.Pairs.ArrayNum = 0;
      local_1e8.Pairs.ArrayMax = 0;
      pFVar8 = FText::FromString(&local_150,&this->PackageFilename);
      local_190.Type = Text;
      FText::FText((FText *)&local_190.TextValue,pFVar8);
      if ((local_190.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      ::FString::FString(&local_1b0,L"FileName");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_1e8,&local_1b0,&local_190);
      if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
      }
      if (local_190.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_190.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_150.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_150.TextData.Reference + 0x10))();
      }
      if (2 < (byte)LogAssetRegistry._0_1_) {
        pFVar8 = FText::AsLocalizable_Advanced_LocText
                           (&local_130,L"AssetRegistry",
                            L"EReadPackageDataMainErrorCode::InvalidTagCount",
                            L"Package is unloadable: {FileName}. Reason: EReadPackageDataMainErrorCode::InvalidTagCount."
                           );
        pFVar9 = FTextFormat::FTextFormat(&local_f0,pFVar8,Default);
        pFVar8 = FText::Format(&local_140,pFVar9,&local_1e8);
        FText::ToString(pFVar8);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
        if (local_140.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_140.TextData.Reference + 0x10))();
        }
        if (local_130.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_130.TextData.Reference + 0x10))();
        }
      }
      DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                ((TTuple<FString,FFormatArgumentValue> *)local_1e8.Pairs.AllocatorInstance.Data,
                 local_1e8.Pairs.ArrayNum);
      if ((TTuple<FString,FFormatArgumentValue> *)local_1e8.Pairs.AllocatorInstance.Data !=
          (TTuple<FString,FFormatArgumentValue> *)0x0) {
        FMemory::Free(local_1e8.Pairs.AllocatorInstance.Data);
      }
      return false;
    }
    this->AssetRegistryDependencyDataOffset = local_1c0.DependencyDataOffset;
  }
  if (this->AssetRegistryDependencyDataOffset == -1) {
    iVar7 = (this->ImportMap).ArrayNum;
    param_1->NumBits = iVar7;
    uVar6 = iVar7 + 0x1f;
    uVar11 = uVar6 >> 5;
    if (uVar6 >> 5 != 0) {
      if (param_1->MaxBits + 0x1fU >> 5 < uVar11) {
        TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
        ResizeAllocation(&param_1->AllocatorInstance,0,uVar11,4);
        param_1->MaxBits = uVar11 << 5;
      }
      FVar2 = (param_1->AllocatorInstance).SecondaryData;
      FVar10 = (ForElementType<unsigned_int>)param_1;
      if (FVar2 != (ForElementType<unsigned_int>)0x0) {
        FVar10 = FVar2;
      }
      if (uVar11 < 9) {
        iVar7 = -1;
      }
      else {
        iVar7 = 0xff;
      }
      memset((void *)FVar10,iVar7,(ulonglong)uVar11 << 2);
      uVar11 = param_1->NumBits >> 0x1f & 0x1f;
      uVar6 = param_1->NumBits + uVar11;
      iVar7 = (uVar6 & 0x1f) - uVar11;
      if (iVar7 != 0) {
        FVar2 = (param_1->AllocatorInstance).SecondaryData;
        if (FVar2 != (ForElementType<unsigned_int>)0x0) {
          param_1 = (TBitArray<FDefaultBitArrayAllocator> *)FVar2;
        }
        puVar1 = (uint *)((longlong)param_1 + (longlong)((int)uVar6 >> 5) * 4);
        *puVar1 = *puVar1 & 0xffffffffU >> (-(char)iVar7 & 0x1fU);
      }
    }
    iVar7 = (this->SoftPackageReferenceList).ArrayNum;
    param_2->NumBits = iVar7;
    uVar6 = iVar7 + 0x1f;
    uVar11 = uVar6 >> 5;
    if (uVar6 >> 5 != 0) {
      if (param_2->MaxBits + 0x1fU >> 5 < uVar11) {
        TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
        ResizeAllocation(&param_2->AllocatorInstance,0,uVar11,4);
        param_2->MaxBits = uVar11 << 5;
      }
      FVar2 = (param_2->AllocatorInstance).SecondaryData;
      FVar10 = (ForElementType<unsigned_int>)param_2;
      if (FVar2 != (ForElementType<unsigned_int>)0x0) {
        FVar10 = FVar2;
      }
      if (uVar11 < 9) {
        iVar7 = -1;
      }
      else {
        iVar7 = 0xff;
      }
      memset((void *)FVar10,iVar7,(ulonglong)uVar11 << 2);
      uVar11 = param_2->NumBits >> 0x1f & 0x1f;
      uVar6 = param_2->NumBits + uVar11;
      iVar7 = (uVar6 & 0x1f) - uVar11;
      if (iVar7 != 0) {
        FVar2 = (param_2->AllocatorInstance).SecondaryData;
        if (FVar2 != (ForElementType<unsigned_int>)0x0) {
          param_2 = (TBitArray<FDefaultBitArrayAllocator> *)FVar2;
        }
        puVar1 = (uint *)((longlong)param_2 + (longlong)((int)uVar6 >> 5) * 4);
        *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar7 & 0x1f);
      }
    }
    bVar4 = true;
  }
  else {
    FArchiveState::ClearError((FArchiveState *)this);
    FArchiveState::ClearError((FArchiveState *)this->Loader);
    local_c8.AssetRegistryDependencyDataOffset = this->AssetRegistryDependencyDataOffset;
    local_c8.NumImports = (this->ImportMap).ArrayNum;
    local_c8.NumSoftPackageReferences = (this->SoftPackageReferenceList).ArrayNum;
    local_c8.PackageVersion = (this->PackageFileSummary).FileVersionUE;
    local_c8.ImportUsedInGame.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_c8.ImportUsedInGame.NumBits = 0;
    local_c8.ImportUsedInGame.MaxBits = 0x80;
    local_c8.SoftPackageUsedInGame.AllocatorInstance.SecondaryData =
         (ForElementType<unsigned_int>)0x0;
    local_c8.SoftPackageUsedInGame.NumBits = 0;
    local_c8.SoftPackageUsedInGame.MaxBits = 0x80;
    local_c8.ExtraPackageDependencies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.ExtraPackageDependencies.ArrayNum = 0;
    local_c8.ExtraPackageDependencies.ArrayMax = 0;
    local_c8.AssetRegistryDependencyDataSize = 0;
    local_c8.BinaryNameAwareArchive = (FArchive *)this;
    bVar4 = UE::AssetRegistry::ReadPackageDataDependencies(&local_c8);
    if (bVar4) {
      if (param_1 != &local_c8.ImportUsedInGame) {
        if (local_c8.ImportUsedInGame.AllocatorInstance.SecondaryData ==
            (ForElementType<unsigned_int>)0x0) {
          *(undefined8 *)(param_1->AllocatorInstance).InlineData =
               local_c8.ImportUsedInGame.AllocatorInstance.InlineData._0_8_;
          *(undefined8 *)((param_1->AllocatorInstance).InlineData + 8) =
               local_c8.ImportUsedInGame.AllocatorInstance.InlineData._8_8_;
        }
        FVar2 = (param_1->AllocatorInstance).SecondaryData;
        if (FVar2 != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)FVar2);
        }
        (param_1->AllocatorInstance).SecondaryData =
             local_c8.ImportUsedInGame.AllocatorInstance.SecondaryData;
        param_1->NumBits = local_c8.ImportUsedInGame.NumBits;
        param_1->MaxBits = local_c8.ImportUsedInGame.MaxBits;
        local_c8.ImportUsedInGame.NumBits = 0;
        local_c8.ImportUsedInGame.MaxBits = 0;
        local_c8.ImportUsedInGame.AllocatorInstance.SecondaryData =
             (ForElementType<unsigned_int>)0x0;
      }
      if (param_2 != &local_c8.SoftPackageUsedInGame) {
        if (local_c8.SoftPackageUsedInGame.AllocatorInstance.SecondaryData ==
            (ForElementType<unsigned_int>)0x0) {
          *(undefined8 *)(param_2->AllocatorInstance).InlineData =
               local_c8.SoftPackageUsedInGame.AllocatorInstance.InlineData._0_8_;
          *(undefined8 *)((param_2->AllocatorInstance).InlineData + 8) =
               local_c8.SoftPackageUsedInGame.AllocatorInstance.InlineData._8_8_;
        }
        FVar2 = (param_2->AllocatorInstance).SecondaryData;
        if (FVar2 != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)FVar2);
        }
        (param_2->AllocatorInstance).SecondaryData =
             local_c8.SoftPackageUsedInGame.AllocatorInstance.SecondaryData;
        param_2->NumBits = local_c8.SoftPackageUsedInGame.NumBits;
        param_2->MaxBits = local_c8.SoftPackageUsedInGame.MaxBits;
        local_c8.SoftPackageUsedInGame.NumBits = 0;
        local_c8.SoftPackageUsedInGame.MaxBits = 0;
        local_c8.SoftPackageUsedInGame.AllocatorInstance.SecondaryData =
             (ForElementType<unsigned_int>)0x0;
      }
      bVar4 = true;
    }
    else {
      local_1d8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1d8.Pairs.ArrayNum = 0;
      local_1d8.Pairs.ArrayMax = 0;
      pFVar8 = FText::FromString(&local_120,&this->PackageFilename);
      local_170.Type = Text;
      FText::FText((FText *)&local_170.TextValue,pFVar8);
      if ((local_170.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      ::FString::FString(&local_1a0,L"FileName");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_1d8,&local_1a0,&local_170);
      if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
      }
      if (local_170.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_170.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_120.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_120.TextData.Reference + 0x10))();
      }
      if (2 < (byte)LogAssetRegistry._0_1_) {
        pFVar8 = FText::AsLocalizable_Advanced_LocText
                           (&local_100,L"AssetRegistry",L"SerializeAssetRegistryDependencyData",
                            L"Package is unloadable: {FileName}. Reason: SerializeAssetRegistryDependencyData."
                           );
        pFVar9 = FTextFormat::FTextFormat(&local_e0,pFVar8,Default);
        pFVar8 = FText::Format(&local_110,pFVar9,&local_1d8);
        FText::ToString(pFVar8);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
        if (local_110.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_110.TextData.Reference + 0x10))();
        }
        if (local_100.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
        }
      }
      DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                ((TTuple<FString,FFormatArgumentValue> *)local_1d8.Pairs.AllocatorInstance.Data,
                 local_1d8.Pairs.ArrayNum);
      if ((TTuple<FString,FFormatArgumentValue> *)local_1d8.Pairs.AllocatorInstance.Data !=
          (TTuple<FString,FFormatArgumentValue> *)0x0) {
        FMemory::Free(local_1d8.Pairs.AllocatorInstance.Data);
      }
      bVar4 = false;
    }
    if (local_c8.ExtraPackageDependencies.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_c8.ExtraPackageDependencies.AllocatorInstance.Data);
    }
    if (local_c8.SoftPackageUsedInGame.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_c8.SoftPackageUsedInGame.AllocatorInstance.SecondaryData);
    }
    if (local_c8.ImportUsedInGame.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_c8.ImportUsedInGame.AllocatorInstance.SecondaryData);
    }
  }
  return bVar4;
}

// SerializeExportMap @ 142b66100

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FPackageReader::SerializeExportMap(FPackageReader *this)

{
  int *piVar1;
  TArray<FObjectExport,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  longlong lVar10;
  FObjectExport *pFVar11;
  int iVar12;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_198
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_188
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_178
  ;
  FString local_168;
  FString local_158;
  FString local_148;
  FFormatArgumentValue local_138;
  FFormatArgumentValue local_118;
  FFormatArgumentValue local_f8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FText local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FTextFormat local_48;
  FTextFormat local_38;
  FTextFormat local_28;
  
  if (((this->ExportMap).ArrayNum < 1) && (0 < (this->PackageFileSummary).ExportCount)) {
    bVar5 = StartSerializeSection(this,(longlong)(this->PackageFileSummary).ExportOffset);
    if (bVar5) {
      uVar3 = (this->PackageFileSummary).ExportCount;
      lVar10 = (**(code **)(this->_padding_ + 0x28))(this);
      if (lVar10 + (int)uVar3 <= this->PackageFileSize) {
        pTVar2 = &this->ExportMap;
        if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
        }
        piVar1 = &(this->ExportMap).ArrayMax;
        if ((this->ExportMap).ArrayMax < (int)uVar3) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x68,8,uVar3,&pTVar2->AllocatorInstance,(this->ExportMap).ArrayNum,piVar1);
        }
        iVar12 = 0;
        if (0 < (this->PackageFileSummary).ExportCount) {
          do {
            iVar7 = (this->ExportMap).ArrayNum;
            if (iVar7 == *piVar1) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x868,&pTVar2->AllocatorInstance,piVar1);
              (this->ExportMap).ArrayNum = iVar7;
            }
            (this->ExportMap).ArrayNum = iVar7 + 1;
            pFVar11 = FObjectExport::FObjectExport
                                ((FObjectExport *)
                                 ((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x68));
            ::operator<<((FArchive *)this,pFVar11);
            if ((this->_padding_ & 0x200) != 0) {
              local_178.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_178.Pairs.ArrayNum = 0;
              local_178.Pairs.ArrayMax = 0;
              pFVar8 = FText::FromString(&local_78,&this->PackageFilename);
              local_f8.Type = Text;
              FText::FText((FText *)&local_f8.TextValue,pFVar8);
              if ((local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0)
                 && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsSet()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                        ,0xbd,
                                        L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                       ), bVar5)) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
              ::FString::FString(&local_148,L"FileName");
              TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
              ::Emplace<FString,FFormatArgumentValue>(&local_178,&local_148,&local_f8);
              if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_148.Data.AllocatorInstance.Data);
              }
              if (local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)
                             *(ITextData *)
                              local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))()
                ;
              }
              if (local_78.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
              }
              if (2 < (byte)LogAssetRegistry._0_1_) {
                pFVar8 = FText::AsLocalizable_Advanced_LocText
                                   (&local_58,L"AssetRegistry",L"SerializeExportMapInvalidExport",
                                    L"Package is unloadable: {FileName}. Reason: SerializeExportMapInvalidExport."
                                   );
                pFVar9 = FTextFormat::FTextFormat(&local_28,pFVar8,Default);
                pFVar8 = FText::Format(&local_68,pFVar9,&local_178);
                FText::ToString(pFVar8);
                UE::Logging::Private::BasicLog<3>
                          (&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
                if (local_68.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
                }
                if (local_58.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
                }
              }
              DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                        ((TTuple<FString,FFormatArgumentValue> *)
                         local_178.Pairs.AllocatorInstance.Data,local_178.Pairs.ArrayNum);
              if ((TTuple<FString,FFormatArgumentValue> *)local_178.Pairs.AllocatorInstance.Data !=
                  (TTuple<FString,FFormatArgumentValue> *)0x0) {
                FMemory::Free(local_178.Pairs.AllocatorInstance.Data);
              }
              (this->ExportMap).ArrayNum = 0;
              if ((this->ExportMap).ArrayMax < 0) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x68,8,0,&(this->ExportMap).AllocatorInstance,0,piVar1);
              }
              goto LAB_142b6669b;
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 < (this->PackageFileSummary).ExportCount);
        }
        goto LAB_142b664ee;
      }
      local_188.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_188.Pairs.ArrayNum = 0;
      local_188.Pairs.ArrayMax = 0;
      pFVar8 = FText::FromString(&local_a8,&this->PackageFilename);
      local_118.Type = Text;
      FText::FText((FText *)&local_118.TextValue,pFVar8);
      if ((local_118.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      ::FString::FString(&local_158,L"FileName");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_188,&local_158,&local_118);
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
      if (local_118.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_118.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
      }
      if (2 < (byte)LogAssetRegistry._0_1_) {
        pFVar8 = FText::AsLocalizable_Advanced_LocText
                           (&local_88,L"AssetRegistry",L"SerializeExportMapInvalidExportCount",
                            L"Package is unloadable: {FileName}. Reason: SerializeExportMapInvalidExportCount."
                           );
        pFVar9 = FTextFormat::FTextFormat(&local_38,pFVar8,Default);
        pFVar8 = FText::Format(&local_98,pFVar9,&local_188);
        FText::ToString(pFVar8);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
        if (local_98.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
        }
        if (local_88.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
        }
      }
      DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                ((TTuple<FString,FFormatArgumentValue> *)local_188.Pairs.AllocatorInstance.Data,
                 local_188.Pairs.ArrayNum);
      if ((TTuple<FString,FFormatArgumentValue> *)local_188.Pairs.AllocatorInstance.Data !=
          (TTuple<FString,FFormatArgumentValue> *)0x0) {
        FMemory::Free(local_188.Pairs.AllocatorInstance.Data);
        return false;
      }
    }
    else {
      local_198.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_198.Pairs.ArrayNum = 0;
      local_198.Pairs.ArrayMax = 0;
      pFVar8 = FText::FromString(&local_d8,&this->PackageFilename);
      local_138.Type = Text;
      FText::FText((FText *)&local_138.TextValue,pFVar8);
      if ((local_138.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      ::FString::FString(&local_168,L"FileName");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_198,&local_168,&local_138);
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
      if (local_138.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_138.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_d8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
      }
      if (2 < (byte)LogAssetRegistry._0_1_) {
        pFVar8 = FText::AsLocalizable_Advanced_LocText
                           (&local_b8,L"AssetRegistry",L"SerializeExportMapInvalidExportOffset",
                            L"Package is unloadable: {FileName}. Reason: SerializeExportMapInvalidExportOffset."
                           );
        pFVar9 = FTextFormat::FTextFormat(&local_48,pFVar8,Default);
        pFVar8 = FText::Format(&local_c8,pFVar9,&local_198);
        FText::ToString(pFVar8);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
        if (local_c8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
        }
        if (local_b8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
        }
      }
      DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                ((TTuple<FString,FFormatArgumentValue> *)local_198.Pairs.AllocatorInstance.Data,
                 local_198.Pairs.ArrayNum);
      if ((TTuple<FString,FFormatArgumentValue> *)local_198.Pairs.AllocatorInstance.Data !=
          (TTuple<FString,FFormatArgumentValue> *)0x0) {
        FMemory::Free(local_198.Pairs.AllocatorInstance.Data);
        return false;
      }
    }
LAB_142b6669b:
    bVar5 = false;
  }
  else {
LAB_142b664ee:
    bVar5 = true;
  }
  return bVar5;
}

// SerializeGatherableTextDataMap @ 142b666c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FPackageReader::SerializeGatherableTextDataMap(FPackageReader *this)

{
  int *piVar1;
  TArray<FGatherableTextData,TSizedDefaultAllocator<32>_> *this_00;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  longlong lVar9;
  ForAnyElementType FVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  undefined1 auStackY_258 [32];
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_228
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_218
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_208
  ;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FFormatArgumentValue local_1c8;
  FFormatArgumentValue local_1a8;
  FFormatArgumentValue local_188;
  FText local_168;
  FText local_158;
  FText local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FText local_e8;
  FTextFormat local_d8;
  FTextFormat local_c8;
  FTextFormat local_b8;
  undefined1 local_a8 [32];
  undefined1 local_88 [24];
  undefined8 uStack_70;
  void *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  void *local_48;
  ulonglong uStack_40;
  ForAnyElementType local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_258;
  this_00 = &this->GatherableTextDataMap;
  if ((((this->GatherableTextDataMap).ArrayNum < 1) &&
      (0 < (this->PackageFileSummary).GatherableTextDataCount)) &&
     (iVar11 = (this->PackageFileSummary).GatherableTextDataOffset, 0 < iVar11)) {
    bVar4 = StartSerializeSection(this,(longlong)iVar11);
    if (bVar4) {
      iVar11 = (this->PackageFileSummary).GatherableTextDataCount;
      lVar9 = (**(code **)(this->_padding_ + 0x28))(this);
      if (lVar9 + iVar11 * 0x14 <= this->PackageFileSize) {
        TArray<FGatherableTextData,TSizedDefaultAllocator<32>_>::Reset(this_00,iVar11);
        iVar11 = 0;
        if (0 < (this->PackageFileSummary).GatherableTextDataCount) {
          do {
            local_a8._0_8_ = (TTuple<FString,FFormatArgumentValue> *)0x0;
            local_88._0_8_ = (FScriptContainerElement *)0x0;
            uStack_50 = 0;
            local_88._8_8_ = 0;
            local_68 = (void *)0x0;
            uStack_60 = 0x8000000000;
            local_58 = 0xffffffff;
            local_48 = (void *)0x0;
            uStack_40 = 0;
            local_a8._8_4_ = 0;
            local_a8._12_4_ = 0;
            local_a8._16_8_ = (FScriptContainerElement *)0x0;
            local_a8._24_4_ = 0;
            local_a8._28_4_ = 0;
            local_88._16_8_ = 0;
            uStack_70 = 0;
            local_38.Data = (FScriptContainerElement *)0x0;
            local_30._0_4_ = 0;
            local_30._4_4_ = 0;
            FGatherableTextData::StreamArchive((FGatherableTextData *)local_a8,(FArchive *)this);
            if ((this->_padding_ & 0x200) != 0) {
              local_208.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_208.Pairs.ArrayNum = 0;
              local_208.Pairs.ArrayMax = 0;
              pFVar7 = FText::FromString(&local_108,&this->PackageFilename);
              local_188.Type = Text;
              FText::FText((FText *)&local_188.TextValue,pFVar7);
              if ((local_188.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0)
                 && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsSet()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                        ,0xbd,
                                        L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                       ), bVar4)) {
                pcVar2 = (code *)swi(3);
                uVar5 = (*pcVar2)();
                return (bool)uVar5;
              }
              ::FString::FString(&local_1d8,L"FileName");
              TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
              ::Emplace<FString,FFormatArgumentValue>(&local_208,&local_1d8,&local_188);
              if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
              }
              if (local_188.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)
              {
                (**(code **)((longlong)
                             *(ITextData *)
                              local_188.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
                          ();
              }
              if (local_108.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
              }
              if (2 < (byte)LogAssetRegistry._0_1_) {
                pFVar7 = FText::AsLocalizable_Advanced_LocText
                                   (&local_e8,L"AssetRegistry",
                                    L"SerializeGatherableTextDataMapInvalidEntry",
                                    L"Package is unloadable: {FileName}. Reason: SerializeGatherableTextDataMapInvalidEntry."
                                   );
                pFVar8 = FTextFormat::FTextFormat(&local_b8,pFVar7,Default);
                pFVar7 = FText::Format(&local_f8,pFVar8,&local_208);
                FText::ToString(pFVar7);
                UE::Logging::Private::BasicLog<3>
                          (&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
                if (local_f8.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
                }
                if (local_e8.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
                }
              }
              DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                        ((TTuple<FString,FFormatArgumentValue> *)
                         local_208.Pairs.AllocatorInstance.Data,local_208.Pairs.ArrayNum);
              if ((TTuple<FString,FFormatArgumentValue> *)local_208.Pairs.AllocatorInstance.Data !=
                  (TTuple<FString,FFormatArgumentValue> *)0x0) {
                FMemory::Free(local_208.Pairs.AllocatorInstance.Data);
              }
              TArray<FGatherableTextData,TSizedDefaultAllocator<32>_>::Reset(this_00,0);
              DestructItems<FTextSourceSiteContext,int>
                        ((FTextSourceSiteContext *)local_38.Data,(int)local_30);
              if ((FTextSourceSiteContext *)local_38.Data != (FTextSourceSiteContext *)0x0) {
                FMemory::Free(local_38.Data);
              }
              uStack_40 = uStack_40 & 0xffffffff00000000;
              if (local_48 != (void *)0x0) {
                FMemory::Free(local_48);
              }
              TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                 *)local_88,0,local_88._8_4_);
              iVar11 = SUB84(local_88._8_8_,4);
              local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
              if (iVar11 != 0) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x28,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
              }
              uVar3 = uStack_60._4_4_;
              local_58 = 0xffffffff;
              uStack_60 = (ulonglong)uStack_60._4_4_ << 0x20;
              if (0x80 < uVar3) {
                uStack_60 = 0x8000000000;
                TBitArray<FDefaultBitArrayAllocator>::Realloc
                          ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
              }
              if (local_68 != (void *)0x0) {
                FMemory::Free(local_68);
              }
              if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
                FMemory::Free((void *)local_88._0_8_);
              }
              FVar10.Data = (FScriptContainerElement *)local_a8._0_8_;
              if ((FScriptContainerElement *)local_a8._16_8_ != (FScriptContainerElement *)0x0) {
                FMemory::Free((void *)local_a8._16_8_);
                FVar10.Data = (FScriptContainerElement *)local_a8._0_8_;
              }
              goto LAB_142b66f3f;
            }
            iVar6 = (this->GatherableTextDataMap).ArrayNum;
            piVar1 = &(this->GatherableTextDataMap).ArrayMax;
            if (iVar6 == *piVar1) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x880,&this_00->AllocatorInstance,piVar1);
            }
            (this->GatherableTextDataMap).ArrayNum = iVar6 + 1;
            pFVar12 = (this_00->AllocatorInstance).Data + (longlong)iVar6 * 0x80;
            *(undefined8 *)pFVar12 = 0;
            *(undefined8 *)pFVar12 = local_a8._0_8_;
            local_a8._0_8_ = (FScriptContainerElement *)0x0;
            *(undefined4 *)(pFVar12 + 8) = local_a8._8_4_;
            *(undefined4 *)(pFVar12 + 0xc) = local_a8._12_4_;
            local_a8._8_4_ = 0;
            local_a8._12_4_ = 0;
            *(undefined8 *)(pFVar12 + 0x10) = 0;
            *(undefined8 *)(pFVar12 + 0x10) = local_a8._16_8_;
            local_a8._16_8_ = (FScriptContainerElement *)0x0;
            *(undefined4 *)(pFVar12 + 0x18) = local_a8._24_4_;
            *(undefined4 *)(pFVar12 + 0x1c) = local_a8._28_4_;
            local_a8._24_4_ = 0;
            local_a8._28_4_ = 0;
            FLocMetadataObject::FLocMetadataObject
                      ((FLocMetadataObject *)(pFVar12 + 0x20),(FLocMetadataObject *)local_88);
            *(undefined8 *)(pFVar12 + 0x70) = 0;
            *(FScriptContainerElement **)(pFVar12 + 0x70) = local_38.Data;
            local_38.Data = (FScriptContainerElement *)0x0;
            *(int *)(pFVar12 + 0x78) = (int)local_30;
            *(int *)(pFVar12 + 0x7c) = local_30._4_4_;
            local_30._0_4_ = 0;
            local_30._4_4_ = 0;
            DestructItems<FTextSourceSiteContext,int>((FTextSourceSiteContext *)0x0,0);
            if (local_38.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_38.Data);
            }
            uStack_40 = uStack_40 & 0xffffffff00000000;
            if (local_48 != (void *)0x0) {
              FMemory::Free(local_48);
            }
            TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                               *)local_88,0,local_88._8_4_);
            iVar6 = SUB84(local_88._8_8_,4);
            local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
            if (iVar6 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x28,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
            }
            uVar3 = uStack_60._4_4_;
            local_58 = 0xffffffff;
            uStack_60 = (ulonglong)uStack_60._4_4_ << 0x20;
            if (0x80 < uVar3) {
              uStack_60 = 0x8000000000;
              TBitArray<FDefaultBitArrayAllocator>::Realloc
                        ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
            }
            if (local_68 != (void *)0x0) {
              FMemory::Free(local_68);
            }
            if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_88._0_8_);
            }
            if ((FScriptContainerElement *)local_a8._16_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_a8._16_8_);
            }
            if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_a8._0_8_);
            }
            iVar11 = iVar11 + 1;
          } while (iVar11 < (this->PackageFileSummary).GatherableTextDataCount);
        }
        goto LAB_142b66cb1;
      }
      local_218.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_218.Pairs.ArrayNum = 0;
      local_218.Pairs.ArrayMax = 0;
      pFVar7 = FText::FromString(&local_138,&this->PackageFilename);
      local_1a8.Type = Text;
      FText::FText((FText *)&local_1a8.TextValue,pFVar7);
      if ((local_1a8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      ::FString::FString(&local_1e8,L"FileName");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_218,&local_1e8,&local_1a8);
      if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
      }
      if (local_1a8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_1a8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_138.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
      }
      if (2 < (byte)LogAssetRegistry._0_1_) {
        pFVar7 = FText::AsLocalizable_Advanced_LocText
                           (&local_118,L"AssetRegistry",
                            L"SerializeGatherableTextDataMapInvalidCount",
                            L"Package is unloadable: {FileName}. Reason: SerializeGatherableTextDataMapInvalidCount."
                           );
        pFVar8 = FTextFormat::FTextFormat(&local_c8,pFVar7,Default);
        pFVar7 = FText::Format(&local_128,pFVar8,&local_218);
        FText::ToString(pFVar7);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
        if (local_128.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
        }
        if (local_118.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
        }
      }
      DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                ((TTuple<FString,FFormatArgumentValue> *)local_218.Pairs.AllocatorInstance.Data,
                 local_218.Pairs.ArrayNum);
      FVar10.Data = local_218.Pairs.AllocatorInstance.Data;
    }
    else {
      local_228.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_228.Pairs.ArrayNum = 0;
      local_228.Pairs.ArrayMax = 0;
      pFVar7 = FText::FromString(&local_168,&this->PackageFilename);
      local_1c8.Type = Text;
      FText::FText((FText *)&local_1c8.TextValue,pFVar7);
      if ((local_1c8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      ::FString::FString(&local_1f8,L"FileName");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_228,&local_1f8,&local_1c8);
      if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
      }
      if (local_1c8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_1c8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_168.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
      }
      if (2 < (byte)LogAssetRegistry._0_1_) {
        pFVar7 = FText::AsLocalizable_Advanced_LocText
                           (&local_148,L"AssetRegistry",
                            L"SerializeGatherableTextDataMapInvalidOffset",
                            L"Package is unloadable: {FileName}. Reason: SerializeGatherableTextDataMapInvalidOffset."
                           );
        pFVar8 = FTextFormat::FTextFormat(&local_d8,pFVar7,Default);
        pFVar7 = FText::Format(&local_158,pFVar8,&local_228);
        FText::ToString(pFVar7);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
        if (local_158.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
        }
        if (local_148.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
        }
      }
      DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                ((TTuple<FString,FFormatArgumentValue> *)local_228.Pairs.AllocatorInstance.Data,
                 local_228.Pairs.ArrayNum);
      FVar10.Data = local_228.Pairs.AllocatorInstance.Data;
    }
LAB_142b66f3f:
    if ((TTuple<FString,FFormatArgumentValue> *)FVar10.Data !=
        (TTuple<FString,FFormatArgumentValue> *)0x0) {
      FMemory::Free(FVar10.Data);
    }
    bVar4 = false;
  }
  else {
LAB_142b66cb1:
    bVar4 = true;
  }
  return bVar4;
}

// SerializeImportMap @ 142b66f60

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FPackageReader::SerializeImportMap(FPackageReader *this)

{
  int *piVar1;
  TArray<FObjectImport,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  longlong lVar10;
  FObjectImport *pFVar11;
  int iVar12;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_198
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_188
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_178
  ;
  FString local_168;
  FString local_158;
  FString local_148;
  FFormatArgumentValue local_138;
  FFormatArgumentValue local_118;
  FFormatArgumentValue local_f8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FText local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FTextFormat local_48;
  FTextFormat local_38;
  FTextFormat local_28;
  
  if (((this->ImportMap).ArrayNum < 1) && (0 < (this->PackageFileSummary).ImportCount)) {
    bVar5 = StartSerializeSection(this,(longlong)(this->PackageFileSummary).ImportOffset);
    if (bVar5) {
      uVar3 = (this->PackageFileSummary).ImportCount;
      lVar10 = (**(code **)(this->_padding_ + 0x28))(this);
      if (lVar10 + (int)uVar3 <= this->PackageFileSize) {
        pTVar2 = &this->ImportMap;
        if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
        }
        piVar1 = &(this->ImportMap).ArrayMax;
        if ((this->ImportMap).ArrayMax < (int)uVar3) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x38,8,uVar3,&pTVar2->AllocatorInstance,(this->ImportMap).ArrayNum,piVar1);
        }
        iVar12 = 0;
        if (0 < (this->PackageFileSummary).ImportCount) {
          do {
            iVar7 = (this->ImportMap).ArrayNum;
            if (iVar7 == *piVar1) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x838,&pTVar2->AllocatorInstance,piVar1);
              (this->ImportMap).ArrayNum = iVar7;
            }
            (this->ImportMap).ArrayNum = iVar7 + 1;
            pFVar11 = FObjectImport::FObjectImport
                                ((FObjectImport *)
                                 ((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x38));
            ::operator<<((FArchive *)this,pFVar11);
            if ((this->_padding_ & 0x200) != 0) {
              local_178.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_178.Pairs.ArrayNum = 0;
              local_178.Pairs.ArrayMax = 0;
              pFVar8 = FText::FromString(&local_78,&this->PackageFilename);
              local_f8.Type = Text;
              FText::FText((FText *)&local_f8.TextValue,pFVar8);
              if ((local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0)
                 && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsSet()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                        ,0xbd,
                                        L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                       ), bVar5)) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
              ::FString::FString(&local_148,L"FileName");
              TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
              ::Emplace<FString,FFormatArgumentValue>(&local_178,&local_148,&local_f8);
              if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_148.Data.AllocatorInstance.Data);
              }
              if (local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)
                             *(ITextData *)
                              local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))()
                ;
              }
              if (local_78.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
              }
              if (2 < (byte)LogAssetRegistry._0_1_) {
                pFVar8 = FText::AsLocalizable_Advanced_LocText
                                   (&local_58,L"AssetRegistry",L"SerializeImportMapInvalidImport",
                                    L"Package is unloadable: {FileName}. Reason: SerializeImportMapInvalidImport."
                                   );
                pFVar9 = FTextFormat::FTextFormat(&local_28,pFVar8,Default);
                pFVar8 = FText::Format(&local_68,pFVar9,&local_178);
                FText::ToString(pFVar8);
                UE::Logging::Private::BasicLog<3>
                          (&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
                if (local_68.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
                }
                if (local_58.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
                }
              }
              DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                        ((TTuple<FString,FFormatArgumentValue> *)
                         local_178.Pairs.AllocatorInstance.Data,local_178.Pairs.ArrayNum);
              if ((TTuple<FString,FFormatArgumentValue> *)local_178.Pairs.AllocatorInstance.Data !=
                  (TTuple<FString,FFormatArgumentValue> *)0x0) {
                FMemory::Free(local_178.Pairs.AllocatorInstance.Data);
              }
              (this->ImportMap).ArrayNum = 0;
              if ((this->ImportMap).ArrayMax < 0) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x38,8,0,&(this->ImportMap).AllocatorInstance,0,piVar1);
              }
              goto LAB_142b674fb;
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 < (this->PackageFileSummary).ImportCount);
        }
        goto LAB_142b6734e;
      }
      local_188.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_188.Pairs.ArrayNum = 0;
      local_188.Pairs.ArrayMax = 0;
      pFVar8 = FText::FromString(&local_a8,&this->PackageFilename);
      local_118.Type = Text;
      FText::FText((FText *)&local_118.TextValue,pFVar8);
      if ((local_118.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      ::FString::FString(&local_158,L"FileName");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_188,&local_158,&local_118);
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
      if (local_118.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_118.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
      }
      if (2 < (byte)LogAssetRegistry._0_1_) {
        pFVar8 = FText::AsLocalizable_Advanced_LocText
                           (&local_88,L"AssetRegistry",L"SerializeImportMapInvalidImportCount",
                            L"Package is unloadable: {FileName}. Reason: SerializeImportMapInvalidImportCount."
                           );
        pFVar9 = FTextFormat::FTextFormat(&local_38,pFVar8,Default);
        pFVar8 = FText::Format(&local_98,pFVar9,&local_188);
        FText::ToString(pFVar8);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
        if (local_98.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
        }
        if (local_88.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
        }
      }
      DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                ((TTuple<FString,FFormatArgumentValue> *)local_188.Pairs.AllocatorInstance.Data,
                 local_188.Pairs.ArrayNum);
      if ((TTuple<FString,FFormatArgumentValue> *)local_188.Pairs.AllocatorInstance.Data !=
          (TTuple<FString,FFormatArgumentValue> *)0x0) {
        FMemory::Free(local_188.Pairs.AllocatorInstance.Data);
        return false;
      }
    }
    else {
      local_198.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_198.Pairs.ArrayNum = 0;
      local_198.Pairs.ArrayMax = 0;
      pFVar8 = FText::FromString(&local_d8,&this->PackageFilename);
      local_138.Type = Text;
      FText::FText((FText *)&local_138.TextValue,pFVar8);
      if ((local_138.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      ::FString::FString(&local_168,L"FileName");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_198,&local_168,&local_138);
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
      if (local_138.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_138.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_d8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
      }
      if (2 < (byte)LogAssetRegistry._0_1_) {
        pFVar8 = FText::AsLocalizable_Advanced_LocText
                           (&local_b8,L"AssetRegistry",L"SerializeImportMapInvalidImportOffset",
                            L"Package is unloadable: {FileName}. Reason: SerializeImportMapInvalidImportOffset."
                           );
        pFVar9 = FTextFormat::FTextFormat(&local_48,pFVar8,Default);
        pFVar8 = FText::Format(&local_c8,pFVar9,&local_198);
        FText::ToString(pFVar8);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
        if (local_c8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
        }
        if (local_b8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
        }
      }
      DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                ((TTuple<FString,FFormatArgumentValue> *)local_198.Pairs.AllocatorInstance.Data,
                 local_198.Pairs.ArrayNum);
      if ((TTuple<FString,FFormatArgumentValue> *)local_198.Pairs.AllocatorInstance.Data !=
          (TTuple<FString,FFormatArgumentValue> *)0x0) {
        FMemory::Free(local_198.Pairs.AllocatorInstance.Data);
        return false;
      }
    }
LAB_142b674fb:
    bVar5 = false;
  }
  else {
LAB_142b6734e:
    bVar5 = true;
  }
  return bVar5;
}

// SerializeImportedClasses @ 142b67520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FPackageReader::SerializeImportedClasses
          (FPackageReader *this,TArray<FObjectImport,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2)

{
  wchar_t wVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar4;
  longlong *plVar5;
  void *pvVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  FText *pFVar10;
  FTextFormat *pFVar11;
  longlong lVar12;
  ulonglong uVar13;
  ForElementType<FName> FVar14;
  FName *pFVar15;
  ForAnyElementType FVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  ForElementType<unsigned_int> FVar21;
  ForElementType<FName> FVar22;
  uint uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  undefined1 auStackY_d78 [32];
  undefined1 local_d28;
  FIdentityFunctor local_d27 [3];
  int local_d24;
  wchar_t local_d20 [4];
  int local_d18 [2];
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_d10
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_d00
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_cf0
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_ce0
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_cd0
  ;
  int local_cc0;
  uint uStack_cbc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_cb8;
  undefined4 local_cb0;
  uint uStack_cac;
  int iStack_ca8;
  undefined4 uStack_ca4;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_ca0;
  FPackageReader *local_c98;
  int local_c90;
  undefined4 local_c8c;
  int local_c88;
  int local_c84;
  int local_c80;
  longlong *local_c78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_c70;
  longlong *local_c50;
  int iStack_c48;
  uint uStack_c44;
  TBitArray<FDefaultBitArrayAllocator> *local_c40;
  undefined4 uStack_c38;
  uint uStack_c34;
  int local_c30;
  undefined4 uStack_c2c;
  int iStack_c28;
  undefined4 uStack_c24;
  longlong *local_c20;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c18;
  undefined8 uStack_bf8;
  FString local_bf0;
  FString local_be0;
  FString local_bd0;
  FString local_bc0;
  FSparseArrayAllocationInfo local_bb0;
  FString local_ba0;
  FFormatArgumentValue local_b90;
  FFormatArgumentValue local_b70;
  FFormatArgumentValue local_b50;
  FFormatArgumentValue local_b30;
  FFormatArgumentValue local_b10;
  FText local_af0;
  FText local_ae0;
  FText local_ad0;
  FText local_ac0;
  FText local_ab0;
  FText local_aa0;
  FText local_a90;
  FName local_a80;
  FText local_a78;
  FText local_a68;
  FText local_a58;
  FText local_a48;
  FText local_a38;
  FText local_a28;
  FText local_a18;
  FText local_a08;
  FTextFormat local_9f8;
  FTextFormat local_9e8;
  FTextFormat local_9d8;
  FTextFormat local_9c8;
  FTextFormat local_9b8;
  FObjectExport local_9a8;
  undefined4 local_91c;
  undefined1 local_918 [32];
  ForElementType<unsigned_int> local_8f8;
  uint local_8f0;
  int local_8ec;
  int local_8e8;
  int local_8e4;
  undefined1 local_8e0 [8];
  ForAnyElementType local_8d8;
  uint local_8d0;
  ForElementType<FName> local_8c8;
  int local_898;
  int local_894 [3];
  TStringBuilderBase<wchar_t> local_888;
  wchar_t local_868 [1035];
  wchar_t local_52 [5];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_d78;
  uVar26 = 0;
  local_c98 = this;
  local_ca0 = param_2;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  local_918._0_8_ = (FScriptContainerElement *)0x0;
  local_918._8_8_ = 0;
  local_8f8 = (ForElementType<unsigned_int>)0x0;
  local_8f0 = 0;
  local_8ec = 0x80;
  local_8e8 = -1;
  local_8e4 = 0;
  local_8d8.Data = (FScriptContainerElement *)0x0;
  local_8d0 = 0;
  uVar24 = uVar26;
  if ((this->PackageFileSummary).ExportCount < 1) {
LAB_142b679ce:
    uVar18 = (uint)uVar24;
    iVar20 = param_1->ArrayNum;
    uVar25 = uVar26;
    if (0 < iVar20) {
      do {
        uVar23 = (uint)uVar25;
        uVar18 = 0;
        if ((int)uVar23 < iVar20) {
          uVar18 = ~uVar23 >> 0x1f;
        }
        if (uVar18 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            uVar8 = (*pcVar3)();
            return (bool)uVar8;
          }
          uVar24 = (ulonglong)local_8f0;
        }
        pFVar2 = (param_1->AllocatorInstance).Data;
        if ((*(FName *)(pFVar2 + uVar26 + 0xc) != CoreUObjectPackageName) ||
           (*(FName *)(pFVar2 + uVar26 + 0x14) != ScriptStructName)) goto LAB_142b67f8a;
        if (local_8e4 == 0) {
          iVar9 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0xc,4,1,(ForAnyElementType *)local_918,(int *)(local_918 + 8),
                             (int *)(local_918 + 0xc));
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_918 + 0x10),false);
          iVar20 = local_8e8;
        }
        else {
          local_8e4 = local_8e4 + -1;
          iVar20 = *(int *)(local_918._0_8_ + (longlong)local_8e8 * 0xc + 4);
          iVar9 = local_8e8;
          if (local_8e4 != 0) {
            *(undefined4 *)(local_918._0_8_ + (longlong)iVar20 * 0xc) = 0xffffffff;
          }
        }
        local_8e8 = iVar20;
        TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_918,&local_bb0,iVar9);
        pvVar6 = local_bb0.Pointer;
        if (local_bb0.Pointer != (TSparseSetElement<int> *)0x0) {
          *(uint *)local_bb0.Pointer = uVar23;
          *(undefined4 *)((longlong)local_bb0.Pointer + 4) = 0xffffffff;
        }
        uVar18 = *(uint *)local_bb0.Pointer;
        local_d24 = local_bb0.Index;
        bVar7 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::TryReplaceExisting
                          ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_918,uVar18
                           ,local_bb0.Pointer,&local_d24,(bool *)0x0);
        if (bVar7) {
LAB_142b67f83:
          uVar24 = (ulonglong)local_8f0;
        }
        else {
          uVar19 = 1;
          uVar17 = local_918._8_4_ - local_8e4;
          if (3 < uVar17) {
            uVar24 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
            lVar12 = 0x3f;
            if (uVar24 != 0) {
              for (; uVar24 >> lVar12 == 0; lVar12 = lVar12 + -1) {
              }
            }
            local_c8c = (int)lVar12;
            uVar19 = 1 << ((byte)lVar12 & 0x1f);
          }
          if (((int)uVar17 < 1) || ((int)uVar19 <= (int)local_8d0)) {
            uVar18 = local_8d0 - 1 & uVar18;
            *(uint *)((longlong)pvVar6 + 8) = uVar18;
            FVar16.Data = (FScriptContainerElement *)local_8e0;
            if ((ForElementType<FSetElementId>)local_8d8.Data != (ForElementType<FSetElementId>)0x0)
            {
              FVar16.Data = local_8d8.Data;
            }
            uVar24 = (longlong)(int)local_8d0 - 1U & (longlong)(int)uVar18;
            *(undefined4 *)((longlong)pvVar6 + 4) =
                 *(undefined4 *)((longlong)FVar16.Data + uVar24 * 4);
            *(int *)((longlong)FVar16.Data + uVar24 * 4) = local_d24;
            goto LAB_142b67f83;
          }
          local_8d0 = uVar19;
          if ((ForElementType<FSetElementId>)local_8d8.Data != (ForElementType<FSetElementId>)0x0) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_8d8,0,0,4);
          }
          if (uVar19 != 0) {
            uVar18 = uVar19;
            if (uVar19 < 2) {
              if ((ForElementType<FSetElementId>)local_8d8.Data !=
                  (ForElementType<FSetElementId>)0x0) {
                uVar18 = 0;
                goto LAB_142b67d7a;
              }
            }
            else {
LAB_142b67d7a:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_8d8,0,uVar18,4);
            }
            if (0 < (int)uVar19) {
              uVar25 = (ulonglong)uVar19;
              uVar24 = 0;
              do {
                FVar16.Data = (FScriptContainerElement *)local_8e0;
                if ((ForElementType<FSetElementId>)local_8d8.Data !=
                    (ForElementType<FSetElementId>)0x0) {
                  FVar16.Data = local_8d8.Data;
                }
                uVar13 = uVar24 & (longlong)(int)uVar19 - 1U;
                uVar24 = uVar24 + 1;
                *(undefined4 *)((longlong)FVar16.Data + uVar13 * 4) = 0xffffffff;
                uVar25 = uVar25 - 1;
              } while (uVar25 != 0);
            }
          }
          uVar24 = (ulonglong)local_8f0;
          if (local_8d0 != 0) {
            uStack_cbc = 1;
            local_cc0 = 0;
            pTStack_cb8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_918 + 0x10);
            local_cb0 = 0xffffffff;
            uStack_cac = 0;
            iStack_ca8 = 0;
            if (local_8f0 != 0) {
              FVar21 = (ForElementType<unsigned_int>)((longlong)local_918 + 0x10);
              if (local_8f8 != (ForElementType<unsigned_int>)0x0) {
                FVar21 = local_8f8;
              }
              uVar18 = *(uint *)FVar21;
              while (uVar18 == 0) {
                lVar12 = (longlong)local_cc0;
                iStack_ca8 = iStack_ca8 + 0x20;
                local_cc0 = local_cc0 + 1;
                if ((int)((local_8f0 - 1) + ((int)(local_8f0 - 1) >> 0x1f & 0x1fU)) >> 5 < local_cc0
                   ) goto LAB_142b67e99;
                uVar18 = ((uint *)((longlong)FVar21 + 4))[lVar12];
                local_cb0 = 0xffffffff;
              }
              uStack_cbc = -uVar18 & uVar18;
              uVar25 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
              lVar12 = 0x3f;
              if (uVar25 != 0) {
                for (; uVar25 >> lVar12 == 0; lVar12 = lVar12 + -1) {
                }
              }
              local_c88 = (int)lVar12;
              uStack_cac = (int)lVar12 + -1 + iStack_ca8;
              if ((int)local_8f0 < (int)uStack_cac) {
LAB_142b67e99:
                uStack_cac = local_8f0;
              }
            }
            local_cb0 = 0xffffffff;
            local_c78 = (longlong *)local_918;
            local_c70._padding_ = CONCAT44(uStack_cbc,local_cc0);
            local_c70.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_918 + 0x10);
            local_c70.UnvisitedBitMask = 0xffffffff;
            local_c70.CurrentBitIndex = uStack_cac;
            local_c70.BaseBitIndex = iStack_ca8;
            local_c70._28_4_ = uStack_ca4;
            uVar18 = uStack_cac;
            if ((int)uStack_cac < (int)local_8f0) {
              do {
                uVar17 = local_8d0 - 1 & *(uint *)(*local_c78 + (longlong)(int)uVar18 * 0xc);
                lVar12 = *local_c78 + (longlong)(int)uVar18 * 0xc;
                *(uint *)(lVar12 + 8) = uVar17;
                FVar16.Data = (FScriptContainerElement *)local_8e0;
                if ((ForElementType<FSetElementId>)local_8d8.Data !=
                    (ForElementType<FSetElementId>)0x0) {
                  FVar16.Data = local_8d8.Data;
                }
                uVar24 = (longlong)(int)local_8d0 - 1U & (longlong)(int)uVar17;
                *(undefined4 *)(lVar12 + 4) = *(undefined4 *)((longlong)FVar16.Data + uVar24 * 4);
                *(uint *)((longlong)FVar16.Data + uVar24 * 4) = uVar18;
                local_c70.UnvisitedBitMask = local_c70.UnvisitedBitMask & ~local_c70._padding_._4_4_
                ;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_c70);
                uVar18 = local_c70.CurrentBitIndex;
              } while (local_c70.CurrentBitIndex < (local_c70.Array)->NumBits);
              goto LAB_142b67f83;
            }
          }
        }
LAB_142b67f8a:
        uVar18 = (uint)uVar24;
        iVar20 = param_1->ArrayNum;
        uVar26 = uVar26 + 0x38;
        uVar25 = (ulonglong)(uVar23 + 1);
      } while ((int)(uVar23 + 1) < iVar20);
    }
    local_8c8.SecondaryData = (ForElementType<FName>)0x0;
    local_888.Base = local_868;
    local_c30 = 0;
    iStack_c48 = 0;
    local_898 = 0;
    local_888.CurPos = local_868;
    local_894[0] = 5;
    local_888.End = local_52;
    local_888.bIsDynamic = false;
    local_888.bIsExternal = false;
    uStack_c44 = 1;
    uStack_c34 = 0;
    if (uVar18 != 0) {
      FVar21 = (ForElementType<unsigned_int>)((longlong)local_918 + 0x10);
      if (local_8f8 != (ForElementType<unsigned_int>)0x0) {
        FVar21 = local_8f8;
      }
      uVar23 = *(uint *)FVar21;
      iStack_c48 = 0;
      while (uVar23 == 0) {
        lVar12 = (longlong)iStack_c48;
        local_c30 = local_c30 + 0x20;
        iStack_c48 = iStack_c48 + 1;
        uStack_c34 = uVar18;
        if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_c48)
        goto LAB_142b6806f;
        uVar23 = ((uint *)((longlong)FVar21 + 4))[lVar12];
      }
      uStack_c44 = -uVar23 & uVar23;
      uVar26 = (ulonglong)uStack_c44 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar26 != 0) {
        for (; uVar26 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uStack_c34 = local_c30 + -1 + (int)lVar12;
      local_c80 = (int)lVar12;
      if ((int)uVar18 < (int)uStack_c34) {
        uStack_c34 = uVar18;
      }
    }
LAB_142b6806f:
    local_c50 = (longlong *)local_918;
    uStack_c2c = local_91c;
    local_c40 = (TBitArray<FDefaultBitArrayAllocator> *)(local_918 + 0x10);
    uVar23 = uVar18 & 0xffffffe0;
    uStack_c38 = 0xffffffff;
    iStack_c28 = local_918._8_4_ - local_8e4;
    local_c20 = (longlong *)local_918;
    TStack_c18._padding_ = CONCAT44(uStack_c44,iStack_c48);
    iVar20 = (int)uVar18 >> 5;
    TStack_c18.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_918 + 0x10);
    TStack_c18.UnvisitedBitMask = 0xffffffff;
    TStack_c18.CurrentBitIndex = uStack_c34;
    TStack_c18.BaseBitIndex = local_c30;
    TStack_c18._28_4_ = local_91c;
    uStack_bf8 = CONCAT44(uStack_c24,local_918._8_4_ - local_8e4);
    uVar17 = uVar18;
    if (((int)uVar18 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), uVar17 = local_8f0, bVar7)) {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return (bool)uVar8;
    }
    if (uVar18 != uVar17) {
      FVar21 = (ForElementType<unsigned_int>)((longlong)local_918 + 0x10);
      if (local_8f8 != (ForElementType<unsigned_int>)0x0) {
        FVar21 = local_8f8;
      }
      uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)((longlong)FVar21 + (longlong)iVar20 * 4);
      while (uVar18 == 0) {
        lVar12 = (longlong)iVar20;
        uVar23 = uVar23 + 0x20;
        iVar20 = iVar20 + 1;
        uVar18 = uVar17;
        if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
        goto LAB_142b68190;
        uVar18 = ((uint *)((longlong)FVar21 + 4))[lVar12];
      }
      uVar26 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar26 != 0) {
        for (; uVar26 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_c84 = (int)lVar12;
      uVar18 = local_c84 + -1 + uVar23;
      if ((int)uVar17 < (int)uVar18) {
        uVar18 = uVar17;
      }
    }
LAB_142b68190:
    do {
      plVar5 = local_c20;
      if ((int)local_c20[1] - *(int *)((longlong)local_c20 + 0x34) != (int)uStack_bf8) {
        local_d28 = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_d28);
      }
      if (((TStack_c18.CurrentBitIndex == uVar18) &&
          (TStack_c18.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_918 + 0x10))) &&
         (plVar5 == (longlong *)local_918)) {
        AlgoImpl::
        IntroSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,FNameLexicalLess>_>
                  ((FName *)(local_ca0->AllocatorInstance).Data,local_ca0->ArrayNum,local_d27[0],
                   (FNameLexicalLess *)local_d27);
        bVar7 = true;
LAB_142b68942:
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_888);
        if (local_8c8.SecondaryData != (ForElementType<FName>)0x0) {
          FMemory::Free((void *)local_8c8.SecondaryData);
        }
        goto LAB_142b6896f;
      }
      uVar23 = *(uint *)(*plVar5 + (longlong)TStack_c18.CurrentBitIndex * 0xc);
      local_898 = 0;
      if ((local_894[0] < 0) && (local_894[0] != 0)) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                  (8,4,0,&local_8c8,0,local_894);
      }
      local_888.CurPos = local_888.Base;
      if (((int)uVar23 < 0) || (iVar20 = param_1->ArrayNum, iVar20 <= (int)uVar23)) {
        local_cd0.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_cd0.Pairs.ArrayNum = 0;
        local_cd0.Pairs.ArrayMax = 0;
        pFVar10 = FText::FromString(&local_ab0,&local_c98->PackageFilename);
        local_b10.Type = Text;
        FText::FText((FText *)&local_b10.TextValue,pFVar10);
        if ((local_b10.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0xbd,
                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                              ), bVar7)) {
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return (bool)uVar8;
        }
        ::FString::FString(&local_bf0,L"FileName");
        TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
        Emplace<FString,FFormatArgumentValue>(&local_cd0,&local_bf0,&local_b10);
        if (local_bf0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_bf0.Data.AllocatorInstance.Data);
        }
        if (local_b10.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_b10.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        if (local_ab0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_ab0.TextData.Reference + 0x10))();
        }
        if (2 < (byte)LogAssetRegistry._0_1_) {
          pFVar10 = FText::AsLocalizable_Advanced_LocText
                              (&local_a90,L"AssetRegistry",
                               L"SerializeImportedClassesInvalidClassIndex",
                               L"Package is unloadable: {FileName}. Reason: SerializeImportedClassesInvalidClassIndex."
                              );
          pFVar11 = FTextFormat::FTextFormat(&local_9f8,pFVar10,Default);
          pFVar10 = FText::Format(&local_aa0,pFVar11,&local_cd0);
          FText::ToString(pFVar10);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
          if (local_aa0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_aa0.TextData.Reference + 0x10))();
          }
          if (local_a90.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_a90.TextData.Reference + 0x10))();
          }
        }
        DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                  ((TTuple<FString,FFormatArgumentValue> *)local_cd0.Pairs.AllocatorInstance.Data,
                   local_cd0.Pairs.ArrayNum);
        FVar16.Data = local_cd0.Pairs.AllocatorInstance.Data;
LAB_142b68936:
        if ((TTuple<FString,FFormatArgumentValue> *)FVar16.Data !=
            (TTuple<FString,FFormatArgumentValue> *)0x0) {
          FMemory::Free(FVar16.Data);
        }
        bVar7 = false;
        goto LAB_142b68942;
      }
      while( true ) {
        uVar17 = 0;
        if ((int)uVar23 < iVar20) {
          uVar17 = ~uVar23 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return (bool)uVar8;
        }
        FVar22 = (ForElementType<FName>)
                 ((ulonglong)uVar23 * 0x38 + (longlong)(param_1->AllocatorInstance).Data);
        FVar14 = (ForElementType<FName>)&local_8c8;
        if (local_8c8.SecondaryData != (ForElementType<FName>)0x0) {
          FVar14 = local_8c8.SecondaryData;
        }
        if ((ulonglong)FVar14 <= (ulonglong)FVar22) {
          FVar14 = (ForElementType<FName>)&local_8c8;
          if (local_8c8.SecondaryData != (ForElementType<FName>)0x0) {
            FVar14 = local_8c8.SecondaryData;
          }
          if (((ulonglong)FVar22 < (ulonglong)((longlong)FVar14 + (longlong)local_894[0] * 8)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar3 = (code *)swi(3);
            uVar8 = (*pcVar3)();
            return (bool)uVar8;
          }
        }
        if (local_898 == local_894[0]) {
          local_898 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                                (0x408,&local_8c8,local_894);
        }
        lVar12 = (longlong)local_898;
        FVar14 = (ForElementType<FName>)&local_8c8;
        if (local_8c8.SecondaryData != (ForElementType<FName>)0x0) {
          FVar14 = local_8c8.SecondaryData;
        }
        local_898 = local_898 + 1;
        *(undefined8 *)((longlong)FVar14 + lVar12 * 8) = *(undefined8 *)FVar22;
        iVar20 = local_898;
        uVar17 = *(uint *)((longlong)FVar22 + 8);
        if (-1 < (int)uVar17) break;
        uVar23 = ~uVar17;
        if ((-1 < (int)uVar17) || (iVar20 = param_1->ArrayNum, iVar20 <= (int)uVar23)) {
          local_ce0.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_ce0.Pairs.ArrayNum = 0;
          local_ce0.Pairs.ArrayMax = 0;
          pFVar10 = FText::FromString(&local_ae0,&local_c98->PackageFilename);
          local_b30.Type = Text;
          FText::FText((FText *)&local_b30.TextValue,pFVar10);
          if ((local_b30.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar7)) {
            pcVar3 = (code *)swi(3);
            uVar8 = (*pcVar3)();
            return (bool)uVar8;
          }
          ::FString::FString(&local_ba0,L"FileName");
          TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
          Emplace<FString,FFormatArgumentValue>(&local_ce0,&local_ba0,&local_b30);
          if (local_ba0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_ba0.Data.AllocatorInstance.Data);
          }
          if (local_b30.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)
                         *(ITextData *)local_b30.TextValue.field0_0x0.TypedValue.TextData.Reference
                        + 0x10))();
          }
          if (local_ae0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_ae0.TextData.Reference + 0x10))();
          }
          if (2 < (byte)LogAssetRegistry._0_1_) {
            pFVar10 = FText::AsLocalizable_Advanced_LocText
                                (&local_ac0,L"AssetRegistry",
                                 L"SerializeImportedClassesInvalidImportInParentChain",
                                 L"Package is unloadable: {FileName}. Reason: SerializeImportedClassesInvalidImportInParentChain."
                                );
            pFVar11 = FTextFormat::FTextFormat(&local_9b8,pFVar10,Default);
            pFVar10 = FText::Format(&local_ad0,pFVar11,&local_ce0);
            FText::ToString(pFVar10);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
            if (local_ad0.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_ad0.TextData.Reference + 0x10))();
            }
            if (local_ac0.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_ac0.TextData.Reference + 0x10))();
            }
          }
          DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                    ((TTuple<FString,FFormatArgumentValue> *)local_ce0.Pairs.AllocatorInstance.Data,
                     local_ce0.Pairs.ArrayNum);
          FVar16.Data = local_ce0.Pairs.AllocatorInstance.Data;
          goto LAB_142b68936;
        }
      }
      if (uVar17 == 0) {
        if ((local_898 < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumTokens >= 1",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PackageReader.cpp"
                               ,0x3dc,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return (bool)uVar8;
        }
        local_d20[0] = L'.';
        local_d20[1] = L':';
        uVar17 = iVar20 - 1;
        local_d20[2] = 0x2e;
        iVar9 = 0;
        uVar23 = 0;
        if ((int)uVar17 < local_898) {
          uVar23 = ~uVar17 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return (bool)uVar8;
        }
        FVar14 = (ForElementType<FName>)&local_8c8;
        if (local_8c8.SecondaryData != (ForElementType<FName>)0x0) {
          FVar14 = local_8c8.SecondaryData;
        }
        ::FName::AppendString((FName *)((longlong)FVar14 + (longlong)(int)uVar17 * 8),&local_888);
        uVar23 = iVar20 - 2;
        if (-1 < (int)uVar23) {
          lVar12 = (longlong)(int)uVar23;
          do {
            wVar1 = local_d20[iVar9];
            if (local_888.End < local_888.CurPos + 1) {
              TStringBuilderBase<wchar_t>::Extend(&local_888,1);
            }
            *local_888.CurPos = wVar1;
            iVar20 = iVar9 + 1;
            local_888.CurPos = local_888.CurPos + 1;
            iVar9 = 2;
            if (iVar20 < 2) {
              iVar9 = iVar20;
            }
            uVar17 = 0;
            if ((int)uVar23 < local_898) {
              uVar17 = ~uVar23 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar3 = (code *)swi(3);
              uVar8 = (*pcVar3)();
              return (bool)uVar8;
            }
            FVar14 = (ForElementType<FName>)&local_8c8;
            if (local_8c8.SecondaryData != (ForElementType<FName>)0x0) {
              FVar14 = local_8c8.SecondaryData;
            }
            ::FName::AppendString((FName *)((longlong)FVar14 + lVar12 * 8),&local_888);
            lVar12 = lVar12 + -1;
            uVar23 = uVar23 - 1;
          } while (-1 < (int)uVar23);
        }
        pTVar4 = local_ca0;
        iVar20 = local_ca0->ArrayNum;
        if (iVar20 == local_ca0->ArrayMax) {
          iVar20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_ca0->AllocatorInstance,&local_ca0->ArrayMax);
        }
        pTVar4->ArrayNum = iVar20 + 1;
        pFVar2 = (pTVar4->AllocatorInstance).Data;
        pFVar15 = ::FName::FName(&local_a80,
                                 (int)((longlong)local_888.CurPos - (longlong)local_888.Base >> 1),
                                 local_888.Base,FNAME_Add);
        *(FName *)(pFVar2 + (longlong)iVar20 * 8) = *pFVar15;
      }
      else if (((int)uVar17 < 1) &&
              (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ObjectImport.OuterIndex.IsExport()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PackageReader.cpp"
                                  ,0x3d1,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      TStack_c18.UnvisitedBitMask = TStack_c18.UnvisitedBitMask & ~TStack_c18._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c18);
    } while( true );
  }
  bVar7 = StartSerializeSection(this,(longlong)(this->PackageFileSummary).ExportOffset);
  if (bVar7) {
    iVar20 = (this->PackageFileSummary).ExportCount;
    lVar12 = (**(code **)(this->_padding_ + 0x28))(this);
    if (lVar12 + iVar20 <= this->PackageFileSize) {
      FObjectExport::FObjectExport(&local_9a8);
      if (0 < (this->PackageFileSummary).ExportCount) {
        do {
          ::operator<<((FArchive *)this,&local_9a8);
          if ((this->_padding_ & 0x200) != 0) {
            local_cf0.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_cf0.Pairs.ArrayNum = 0;
            local_cf0.Pairs.ArrayMax = 0;
            pFVar10 = FText::FromString(&local_a18,&this->PackageFilename);
            local_b50.Type = Text;
            FText::FText((FText *)&local_b50.TextValue,pFVar10);
            if ((local_b50.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0)
               && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsSet()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                      ,0xbd,
                                      L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                     ), bVar7)) {
              pcVar3 = (code *)swi(3);
              uVar8 = (*pcVar3)();
              return (bool)uVar8;
            }
            ::FString::FString(&local_bc0,L"FileName");
            TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
            ::Emplace<FString,FFormatArgumentValue>(&local_cf0,&local_bc0,&local_b50);
            if (local_bc0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_bc0.Data.AllocatorInstance.Data);
            }
            if (local_b50.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)
                           *(ITextData *)
                            local_b50.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))();
            }
            if (local_a18.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_a18.TextData.Reference + 0x10))();
            }
            if (2 < (byte)LogAssetRegistry._0_1_) {
              pFVar10 = FText::AsLocalizable_Advanced_LocText
                                  (&local_af0,L"AssetRegistry",L"SerializeExportMapInvalidExport",
                                   L"Package is unloadable: {FileName}. Reason: SerializeExportMapInvalidExport."
                                  );
              pFVar11 = FTextFormat::FTextFormat(&local_9c8,pFVar10,Default);
              pFVar10 = FText::Format(&local_a08,pFVar11,&local_cf0);
              FText::ToString(pFVar10);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry)
              ;
              if (local_a08.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_a08.TextData.Reference + 0x10))();
              }
              if (local_af0.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_af0.TextData.Reference + 0x10))();
              }
            }
            DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                      ((TTuple<FString,FFormatArgumentValue> *)
                       local_cf0.Pairs.AllocatorInstance.Data,local_cf0.Pairs.ArrayNum);
            FVar16.Data = local_cf0.Pairs.AllocatorInstance.Data;
            goto LAB_142b67c38;
          }
          if (local_9a8.ClassIndex.Index < 0) {
            if ((-1 < local_9a8.ClassIndex.Index) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsImport()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                   ,0x55,L""), bVar7)) {
              pcVar3 = (code *)swi(3);
              uVar8 = (*pcVar3)();
              return (bool)uVar8;
            }
            local_d18[0] = -1 - local_9a8.ClassIndex.Index;
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
                      ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_918,&local_c90
                       ,(bool *)local_d18);
          }
          uVar18 = (int)uVar24 + 1;
          uVar24 = (ulonglong)uVar18;
        } while ((int)uVar18 < (this->PackageFileSummary).ExportCount);
      }
      uVar24 = (ulonglong)local_8f0;
      goto LAB_142b679ce;
    }
    local_d10.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d10.Pairs.ArrayNum = 0;
    local_d10.Pairs.ArrayMax = 0;
    pFVar10 = FText::FromString(&local_a48,&this->PackageFilename);
    local_b70.Type = Text;
    FText::FText((FText *)&local_b70.TextValue,pFVar10);
    if ((local_b70.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar7)) {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return (bool)uVar8;
    }
    ::FString::FString(&local_bd0,L"FileName");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_d10,&local_bd0,&local_b70);
    if (local_bd0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_bd0.Data.AllocatorInstance.Data);
    }
    if (local_b70.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_b70.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    if (local_a48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a48.TextData.Reference + 0x10))();
    }
    if (2 < (byte)LogAssetRegistry._0_1_) {
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_a28,L"AssetRegistry",L"SerializeExportMapInvalidExportCount",
                           L"Package is unloadable: {FileName}. Reason: SerializeExportMapInvalidExportCount."
                          );
      pFVar11 = FTextFormat::FTextFormat(&local_9d8,pFVar10,Default);
      pFVar10 = FText::Format(&local_a38,pFVar11,&local_d10);
      FText::ToString(pFVar10);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
      if (local_a38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a38.TextData.Reference + 0x10))();
      }
      if (local_a28.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a28.TextData.Reference + 0x10))();
      }
    }
    DestructItems<TTuple<FString,FFormatArgumentValue>,int>
              ((TTuple<FString,FFormatArgumentValue> *)local_d10.Pairs.AllocatorInstance.Data,
               local_d10.Pairs.ArrayNum);
    FVar16.Data = local_d10.Pairs.AllocatorInstance.Data;
  }
  else {
    local_d00.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d00.Pairs.ArrayNum = 0;
    local_d00.Pairs.ArrayMax = 0;
    pFVar10 = FText::FromString(&local_a78,&this->PackageFilename);
    local_b90.Type = Text;
    FText::FText((FText *)&local_b90.TextValue,pFVar10);
    if ((local_b90.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar7)) {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return (bool)uVar8;
    }
    ::FString::FString(&local_be0,L"FileName");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_d00,&local_be0,&local_b90);
    if (local_be0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_be0.Data.AllocatorInstance.Data);
    }
    if (local_b90.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_b90.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    if (local_a78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a78.TextData.Reference + 0x10))();
    }
    if (2 < (byte)LogAssetRegistry._0_1_) {
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_a58,L"AssetRegistry",L"SerializeExportMapInvalidExportOffset",
                           L"Package is unloadable: {FileName}. Reason: SerializeExportMapInvalidExportOffset."
                          );
      pFVar11 = FTextFormat::FTextFormat(&local_9e8,pFVar10,Default);
      pFVar10 = FText::Format(&local_a68,pFVar11,&local_d00);
      FText::ToString(pFVar10);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
      if (local_a68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a68.TextData.Reference + 0x10))();
      }
      if (local_a58.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a58.TextData.Reference + 0x10))();
      }
    }
    DestructItems<TTuple<FString,FFormatArgumentValue>,int>
              ((TTuple<FString,FFormatArgumentValue> *)local_d00.Pairs.AllocatorInstance.Data,
               local_d00.Pairs.ArrayNum);
    FVar16.Data = local_d00.Pairs.AllocatorInstance.Data;
  }
LAB_142b67c38:
  if ((TTuple<FString,FFormatArgumentValue> *)FVar16.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(FVar16.Data);
  }
  bVar7 = false;
LAB_142b6896f:
  local_8d0 = 0;
  if ((ForElementType<FSetElementId>)local_8d8.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_8d8.Data);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_918);
  return bVar7;
}

// SerializeNameMap @ 142b68cc0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FPackageReader::SerializeNameMap(FPackageReader *this)

{
  int *piVar1;
  int *piVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar3;
  FName *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  longlong lVar9;
  FName *pFVar10;
  int local_res8 [2];
  TLogFieldName<char_const_(&)[12]> local_res10;
  TLogFieldName<char_const_(&)[11]> local_res18;
  TLogFieldName<char_const_(&)[9]> local_res20;
  TLogFieldName<char_const_(&)[12]> local_888;
  TLogFieldName<char_const_(&)[11]> local_880;
  TLogFieldName<char_const_(&)[10]> local_878;
  TLogFieldName<char_const_(&)[9]> local_870;
  TLogFieldName<char_const_(&)[10]> local_868;
  TLogFieldName<char_const_(&)[9]> local_860;
  FName local_858 [2];
  FNameEntrySerialized local_848;
  
  if (((this->NameMap).ArrayNum < 1) &&
     (piVar1 = &(this->PackageFileSummary).NameCount, 0 < *piVar1)) {
    piVar2 = &(this->PackageFileSummary).NameOffset;
    bVar6 = StartSerializeSection(this,(longlong)*piVar2);
    if (bVar6) {
      lVar9 = (**(code **)(this->_padding_ + 0x28))(this);
      if (lVar9 + *piVar1 <= this->PackageFileSize) {
        local_res8[0] = 0;
        if (0 < *piVar1) {
          do {
            local_848.bIsWide = false;
            local_848.NonCasePreservingHash = 0;
            local_848.CasePreservingHash = 0;
            ::operator<<((FArchive *)this,&local_848);
            if ((this->_padding_ & 0x200) != 0) {
              if (2 < (byte)LogAssetRegistry._0_1_) {
                local_868.Name = (char (*) [10])0x15099cd90;
                local_860.Name = (char (*) [9])0x150682810;
                UE::Logging::Private::
                LogWithFields<UE::Logging::Private::FStaticLocalizedLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[9]>,FString_&,UE::Logging::Private::TLogFieldName<char_const_(&)[10]>,int_&>
                          ((FLogCategoryBase *)&LogAssetRegistry,&::LOG_Static,&local_860,
                           &this->PackageFilename,&local_868,local_res8);
              }
              piVar1 = &(this->NameMap).ArrayMax;
              (this->NameMap).ArrayNum = 0;
              if (*piVar1 < 0) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,4,0,&(this->NameMap).AllocatorInstance,0,piVar1);
              }
              goto LAB_142b68fd8;
            }
            pTVar3 = &this->NameMap;
            pFVar10 = ::FName::FName(local_858,&local_848);
            pFVar4 = (FName *)(pTVar3->AllocatorInstance).Data;
            if (((pFVar4 <= pFVar10) && (pFVar10 < pFVar4 + (this->NameMap).ArrayMax)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
            iVar8 = (this->NameMap).ArrayNum;
            piVar2 = &(this->NameMap).ArrayMax;
            if (iVar8 == *piVar2) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x408,&pTVar3->AllocatorInstance,piVar2);
            }
            (this->NameMap).ArrayNum = iVar8 + 1;
            *(FName *)((pTVar3->AllocatorInstance).Data + (longlong)iVar8 * 8) = *pFVar10;
            local_res8[0] = local_res8[0] + 1;
          } while (local_res8[0] < *piVar1);
        }
        goto LAB_142b68f37;
      }
      if (2 < (byte)LogAssetRegistry._0_1_) {
        local_888.Name = (char (*) [12])0x15099cd60;
        local_880.Name = (char (*) [11])0x15099cd70;
        local_878.Name = (char (*) [10])0x15099cd80;
        local_870.Name = (char (*) [9])0x150682810;
        UE::Logging::Private::
        LogWithFields<UE::Logging::Private::FStaticLocalizedLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[9]>,FString_&,UE::Logging::Private::TLogFieldName<char_const_(&)[10]>,int_&,UE::Logging::Private::TLogFieldName<char_const_(&)[11]>,int_&,UE::Logging::Private::TLogFieldName<char_const_(&)[12]>,__int64_&>
                  ((FLogCategoryBase *)&LogAssetRegistry,&::LOG_Static,&local_870,
                   &this->PackageFilename,&local_878,piVar1,&local_880,piVar2,&local_888,
                   &this->PackageFileSize);
        return false;
      }
    }
    else if (2 < (byte)LogAssetRegistry._0_1_) {
      local_res10.Name = (char (*) [12])0x15099cd60;
      local_res18.Name = (char (*) [11])0x15099cd70;
      local_res20.Name = (char (*) [9])0x150682810;
      UE::Logging::Private::
      LogWithFields<UE::Logging::Private::FStaticLocalizedLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[9]>,FString_&,UE::Logging::Private::TLogFieldName<char_const_(&)[11]>,int_&,UE::Logging::Private::TLogFieldName<char_const_(&)[12]>,__int64_&>
                ((FLogCategoryBase *)&LogAssetRegistry,&::LOG_Static,&local_res20,
                 &this->PackageFilename,&local_res18,piVar2,&local_res10,&this->PackageFileSize);
      return false;
    }
LAB_142b68fd8:
    bVar6 = false;
  }
  else {
LAB_142b68f37:
    bVar6 = true;
  }
  return bVar6;
}

// SerializePackageTrailer @ 142b68ff0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FPackageReader::SerializePackageTrailer(FPackageReader *this,FAssetPackageData *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  FPackageTrailer local_38;
  
  bVar1 = StartSerializeSection(this,(this->PackageFileSummary).PayloadTocOffset);
  if (!bVar1) {
    param_1->Flags = param_1->Flags & 0xfffffffd;
    return true;
  }
  local_38.TrailerPositionInFile = ___xmm_0000000000000000ffffffffffffffff;
  local_38.Header.Tag = _UNK_15076adc8;
  local_38.Header.Version = -1;
  uVar2 = 0;
  local_38.Header.HeaderLength = 0;
  local_38.Header.PayloadsDataLength = 0;
  local_38.Header.PayloadLookupTable.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Header.PayloadLookupTable.ArrayNum = 0;
  local_38.Header.PayloadLookupTable.ArrayMax = 0;
  bVar1 = UE::FPackageTrailer::TryLoad(&local_38,(FArchive *)this);
  if (bVar1) {
    iVar3 = UE::FPackageTrailer::GetNumPayloads(&local_38,Virtualized);
    if (0 < iVar3) {
      uVar2 = 2;
    }
    uVar2 = param_1->Flags & 0xfffffffd | uVar2;
  }
  else {
    uVar2 = param_1->Flags & 0xfffffffd;
  }
  param_1->Flags = uVar2;
  if (local_38.Header.PayloadLookupTable.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Header.PayloadLookupTable.AllocatorInstance.Data);
  }
  return true;
}

// SerializeSearchableNamesMap @ 142b692f0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FPackageReader::SerializeSearchableNamesMap(FPackageReader *this,FLinkerTables *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FText *pFVar5;
  FTextFormat *pFVar6;
  ForAnyElementType FVar7;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_108
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_f8;
  FString local_e8;
  FString local_d8;
  FFormatArgumentValue local_c8;
  FFormatArgumentValue local_a8;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FTextFormat local_28;
  FTextFormat local_18;
  
  if (((int)this->_padding_ < 0x1fe) ||
     (iVar1 = (this->PackageFileSummary).SearchableNamesOffset, iVar1 < 1)) {
LAB_142b69612:
    bVar3 = true;
  }
  else {
    bVar3 = StartSerializeSection(this,(longlong)iVar1);
    if (bVar3) {
      FLinkerTables::SerializeSearchableNamesMap(param_1,(FArchive *)this);
      if ((this->_padding_ & 0x200) == 0) goto LAB_142b69612;
      local_f8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f8.Pairs.ArrayNum = 0;
      local_f8.Pairs.ArrayMax = 0;
      pFVar5 = FText::FromString(&local_58,&this->PackageFilename);
      local_a8.Type = Text;
      FText::FText((FText *)&local_a8.TextValue,pFVar5);
      if ((local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      ::FString::FString(&local_d8,L"FileName");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_f8,&local_d8,&local_a8);
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      if (local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_58.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
      }
      if (2 < (byte)LogAssetRegistry._0_1_) {
        pFVar5 = FText::AsLocalizable_Advanced_LocText
                           (&local_38,L"AssetRegistry",
                            L"SerializeSearchableNamesMapInvalidSearchableNamesMap",
                            L"Package is unloadable: {FileName}. Reason: SerializeSearchableNamesMapInvalidSearchableNamesMap."
                           );
        pFVar6 = FTextFormat::FTextFormat(&local_18,pFVar5,Default);
        pFVar5 = FText::Format(&local_48,pFVar6,&local_f8);
        FText::ToString(pFVar5);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
        if (local_48.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
        }
        if (local_38.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
        }
      }
      DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                ((TTuple<FString,FFormatArgumentValue> *)local_f8.Pairs.AllocatorInstance.Data,
                 local_f8.Pairs.ArrayNum);
      FVar7.Data = local_f8.Pairs.AllocatorInstance.Data;
    }
    else {
      local_108.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_108.Pairs.ArrayNum = 0;
      local_108.Pairs.ArrayMax = 0;
      pFVar5 = FText::FromString(&local_88,&this->PackageFilename);
      local_c8.Type = Text;
      FText::FText((FText *)&local_c8.TextValue,pFVar5);
      if ((local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      ::FString::FString(&local_e8,L"FileName");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_108,&local_e8,&local_c8);
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      if (local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      if (2 < (byte)LogAssetRegistry._0_1_) {
        pFVar5 = FText::AsLocalizable_Advanced_LocText
                           (&local_68,L"AssetRegistry",L"SerializeSearchableNamesMapInvalidOffset",
                            L"Package is unloadable: {FileName}. Reason: SerializeSearchableNamesMapInvalidOffset."
                           );
        pFVar6 = FTextFormat::FTextFormat(&local_28,pFVar5,Default);
        pFVar5 = FText::Format(&local_78,pFVar6,&local_108);
        FText::ToString(pFVar5);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
        if (local_78.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
        }
        if (local_68.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
        }
      }
      DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                ((TTuple<FString,FFormatArgumentValue> *)local_108.Pairs.AllocatorInstance.Data,
                 local_108.Pairs.ArrayNum);
      FVar7.Data = local_108.Pairs.AllocatorInstance.Data;
    }
    if ((TTuple<FString,FFormatArgumentValue> *)FVar7.Data !=
        (TTuple<FString,FFormatArgumentValue> *)0x0) {
      FMemory::Free(FVar7.Data);
    }
    bVar3 = false;
  }
  return bVar3;
}

// SerializeSoftObjectPathMap @ 142b69630

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FPackageReader::SerializeSoftObjectPathMap(FPackageReader *this)

{
  int *piVar1;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *this_00;
  uint uVar2;
  FSoftObjectPath *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  longlong lVar11;
  ForAnyElementType FVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  size_t _Size;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_1c8
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_1b8
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_1a8
  ;
  FSoftObjectPath local_198;
  FString local_178;
  FString local_168;
  FString local_158;
  FFormatArgumentValue local_148;
  FFormatArgumentValue local_128;
  FFormatArgumentValue local_108;
  FText local_e8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FText local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FTextFormat local_58;
  FTextFormat local_48;
  FTextFormat local_38;
  
  this_00 = &this->SoftObjectPathMap;
  if ((((this->SoftObjectPathMap).ArrayNum < 1) &&
      (iVar13 = (this->PackageFileSummary).SoftObjectPathsOffset, 0 < iVar13)) &&
     (0 < (this->PackageFileSummary).SoftObjectPathsCount)) {
    bVar6 = StartSerializeSection(this,(longlong)iVar13);
    if (bVar6) {
      if ((int)this->_padding_ < 0x202) {
        iVar13 = 8;
      }
      else {
        iVar13 = 0x18;
        if ((int)((ulonglong)this->_padding_ >> 0x20) < 0x3ef) {
          iVar13 = 0x10;
        }
      }
      uVar2 = (this->PackageFileSummary).SoftObjectPathsCount;
      lVar11 = (**(code **)(this->_padding_ + 0x28))(this);
      if (lVar11 + (int)(uVar2 * iVar13) <= this->PackageFileSize) {
        if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
        }
        piVar1 = &(this->SoftObjectPathMap).ArrayMax;
        if ((this->SoftObjectPathMap).ArrayMax < (int)uVar2) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,uVar2,&this_00->AllocatorInstance,(this->SoftObjectPathMap).ArrayNum,
                     piVar1);
        }
        iVar13 = 0;
        if (0 < (this->PackageFileSummary).SoftObjectPathsCount) {
          do {
            local_198.AssetPath.PackageName.ComparisonIndex.Value = 0;
            local_198.AssetPath.PackageName.Number = 0;
            local_198.AssetPath.AssetName.ComparisonIndex.Value = 0;
            local_198.AssetPath.AssetName.Number = 0;
            local_198.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_198.SubPathString.Data.ArrayNum = 0;
            local_198.SubPathString.Data.ArrayMax = 0;
            FSoftObjectPath::SerializePath(&local_198,(FArchive *)this);
            if ((this->_padding_ & 0x200) != 0) {
              local_1a8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_1a8.Pairs.ArrayNum = 0;
              local_1a8.Pairs.ArrayMax = 0;
              pFVar9 = FText::FromString(&local_88,&this->PackageFilename);
              local_108.Type = Text;
              FText::FText((FText *)&local_108.TextValue,pFVar9);
              if ((local_108.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0)
                 && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsSet()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                        ,0xbd,
                                        L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                       ), bVar6)) {
                pcVar5 = (code *)swi(3);
                uVar7 = (*pcVar5)();
                return (bool)uVar7;
              }
              ::FString::FString(&local_158,L"FileName");
              TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
              ::Emplace<FString,FFormatArgumentValue>(&local_1a8,&local_158,&local_108);
              if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_158.Data.AllocatorInstance.Data);
              }
              if (local_108.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)
              {
                (**(code **)((longlong)
                             *(ITextData *)
                              local_108.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
                          ();
              }
              if (local_88.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
              }
              if (2 < (byte)LogAssetRegistry._0_1_) {
                pFVar9 = FText::AsLocalizable_Advanced_LocText
                                   (&local_68,L"AssetRegistry",
                                    L"SerializeSoftObjectPathMapInvalidPath",
                                    L"Package is unloadable: {FileName}. Reason: SerializeSoftObjectPathMapInvalidPath."
                                   );
                pFVar10 = FTextFormat::FTextFormat(&local_38,pFVar9,Default);
                pFVar9 = FText::Format(&local_78,pFVar10,&local_1a8);
                FText::ToString(pFVar9);
                UE::Logging::Private::BasicLog<3>
                          (&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
                if (local_78.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
                }
                if (local_68.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
                }
              }
              DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                        ((TTuple<FString,FFormatArgumentValue> *)
                         local_1a8.Pairs.AllocatorInstance.Data,local_1a8.Pairs.ArrayNum);
              if ((TTuple<FString,FFormatArgumentValue> *)local_1a8.Pairs.AllocatorInstance.Data !=
                  (TTuple<FString,FFormatArgumentValue> *)0x0) {
                FMemory::Free(local_1a8.Pairs.AllocatorInstance.Data);
              }
              TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>::Reset(this_00,0);
              FVar12.Data = local_198.SubPathString.Data.AllocatorInstance.Data;
              goto LAB_142b69cd2;
            }
            pFVar3 = (FSoftObjectPath *)(this_00->AllocatorInstance).Data;
            if (((pFVar3 <= &local_198) && (&local_198 < pFVar3 + *piVar1)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
            iVar8 = (this->SoftObjectPathMap).ArrayNum;
            if (iVar8 == *piVar1) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x820,&this_00->AllocatorInstance,piVar1);
            }
            FVar12.Data = local_198.SubPathString.Data.AllocatorInstance.Data;
            (this->SoftObjectPathMap).ArrayNum = iVar8 + 1;
            pFVar4 = (this_00->AllocatorInstance).Data;
            lVar11 = (longlong)iVar8 * 0x20;
            *(FName *)(pFVar4 + lVar11) = local_198.AssetPath.PackageName;
            ((FName *)(pFVar4 + lVar11))[1] = local_198.AssetPath.AssetName;
            pFVar14 = pFVar4 + lVar11 + 0x10;
            *(undefined8 *)&pFVar14->field_0x0 = 0;
            _Size = (size_t)local_198.SubPathString.Data.ArrayNum;
            *(int *)&pFVar14[8].field_0x0 = local_198.SubPathString.Data.ArrayNum;
            if (local_198.SubPathString.Data.ArrayNum == 0) {
              *(undefined4 *)(pFVar4 + lVar11 + 0x1c) = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,local_198.SubPathString.Data.ArrayNum,0,(ForAnyElementType *)pFVar14,
                         local_198.SubPathString.Data.ArrayNum,(int *)(pFVar4 + lVar11 + 0x1c));
              memcpy(*(void **)&pFVar14->field_0x0,FVar12.Data,_Size);
            }
            if ((TTuple<FString,FFormatArgumentValue> *)
                local_198.SubPathString.Data.AllocatorInstance.Data !=
                (TTuple<FString,FFormatArgumentValue> *)0x0) {
              FMemory::Free(local_198.SubPathString.Data.AllocatorInstance.Data);
            }
            iVar13 = iVar13 + 1;
          } while (iVar13 < (this->PackageFileSummary).SoftObjectPathsCount);
        }
        goto LAB_142b69b33;
      }
      local_1b8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b8.Pairs.ArrayNum = 0;
      local_1b8.Pairs.ArrayMax = 0;
      pFVar9 = FText::FromString(&local_b8,&this->PackageFilename);
      local_128.Type = Text;
      FText::FText((FText *)&local_128.TextValue,pFVar9);
      if ((local_128.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      ::FString::FString(&local_168,L"FileName");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_1b8,&local_168,&local_128);
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
      if (local_128.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_128.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_b8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
      }
      if (2 < (byte)LogAssetRegistry._0_1_) {
        pFVar9 = FText::AsLocalizable_Advanced_LocText
                           (&local_98,L"AssetRegistry",L"SerializeSoftObjectPathMapInvalidCount",
                            L"Package is unloadable: {FileName}. Reason: SerializeSoftObjectPathMapInvalidCount."
                           );
        pFVar10 = FTextFormat::FTextFormat(&local_48,pFVar9,Default);
        pFVar9 = FText::Format(&local_a8,pFVar10,&local_1b8);
        FText::ToString(pFVar9);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
        if (local_a8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
        }
        if (local_98.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
        }
      }
      DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                ((TTuple<FString,FFormatArgumentValue> *)local_1b8.Pairs.AllocatorInstance.Data,
                 local_1b8.Pairs.ArrayNum);
      FVar12.Data = local_1b8.Pairs.AllocatorInstance.Data;
    }
    else {
      local_1c8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1c8.Pairs.ArrayNum = 0;
      local_1c8.Pairs.ArrayMax = 0;
      pFVar9 = FText::FromString(&local_e8,&this->PackageFilename);
      local_148.Type = Text;
      FText::FText((FText *)&local_148.TextValue,pFVar9);
      if ((local_148.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      ::FString::FString(&local_178,L"FileName");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_1c8,&local_178,&local_148);
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
      if (local_148.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_148.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_e8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
      }
      if (2 < (byte)LogAssetRegistry._0_1_) {
        pFVar9 = FText::AsLocalizable_Advanced_LocText
                           (&local_c8,L"AssetRegistry",
                            L"SerializeSoftObjectPathMapListInvalidOffset",
                            L"Package is unloadable: {FileName}. Reason: SerializeSoftObjectPathMapListInvalidOffset."
                           );
        pFVar10 = FTextFormat::FTextFormat(&local_58,pFVar9,Default);
        pFVar9 = FText::Format(&local_d8,pFVar10,&local_1c8);
        FText::ToString(pFVar9);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
        if (local_d8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
        }
        if (local_c8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
        }
      }
      DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                ((TTuple<FString,FFormatArgumentValue> *)local_1c8.Pairs.AllocatorInstance.Data,
                 local_1c8.Pairs.ArrayNum);
      FVar12.Data = local_1c8.Pairs.AllocatorInstance.Data;
    }
LAB_142b69cd2:
    if ((TTuple<FString,FFormatArgumentValue> *)FVar12.Data !=
        (TTuple<FString,FFormatArgumentValue> *)0x0) {
      FMemory::Free(FVar12.Data);
    }
    bVar6 = false;
  }
  else {
LAB_142b69b33:
    bVar6 = true;
  }
  return bVar6;
}

// SerializeSoftPackageReferenceList @ 142b69d00

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FPackageReader::SerializeSoftPackageReferenceList(FPackageReader *this)

{
  int *piVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  FName *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  FText *pFVar10;
  FTextFormat *pFVar11;
  longlong lVar12;
  FString *pFVar13;
  FName *pFVar14;
  ForAnyElementType FVar15;
  int iVar16;
  FName local_res8;
  FString local_268;
  undefined8 local_258;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_250
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_240
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_230
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_220
  ;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FFormatArgumentValue local_1d0;
  FFormatArgumentValue local_1b0;
  FFormatArgumentValue local_190;
  FFormatArgumentValue local_170;
  FText local_150;
  FText local_140;
  FText local_130;
  FText local_120;
  FText local_110;
  FText local_100;
  FString local_f0;
  FString local_e0;
  FText local_d0;
  FText local_c0;
  FText local_b0;
  FText local_a0;
  FText local_90;
  FText local_80;
  FTextFormat local_70;
  FTextFormat local_60;
  FTextFormat local_50;
  FTextFormat local_40;
  
  if (((((this->SoftPackageReferenceList).ArrayNum < 1) && (0x17f < (int)this->_padding_)) &&
      (iVar9 = (this->PackageFileSummary).SoftPackageReferencesOffset, 0 < iVar9)) &&
     (0 < (this->PackageFileSummary).SoftPackageReferencesCount)) {
    bVar7 = StartSerializeSection(this,(longlong)iVar9);
    if (bVar7) {
      uVar3 = (this->PackageFileSummary).SoftPackageReferencesCount;
      lVar12 = (**(code **)(this->_padding_ + 0x28))(this);
      if (lVar12 + (int)uVar3 <= this->PackageFileSize) {
        pTVar2 = &this->SoftPackageReferenceList;
        if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
        }
        piVar1 = &(this->SoftPackageReferenceList).ArrayMax;
        if ((this->SoftPackageReferenceList).ArrayMax < (int)uVar3) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,uVar3,&pTVar2->AllocatorInstance,(this->SoftPackageReferenceList).ArrayNum,
                     piVar1);
        }
        iVar9 = (this->PackageFileSummary).SoftPackageReferencesCount;
        iVar16 = 0;
        if ((int)this->_padding_ < 0x202) {
          if (0 < iVar9) {
            do {
              local_268.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_268.Data.ArrayNum = 0;
              local_268.Data.ArrayMax = 0;
              ::operator<<((FArchive *)this,&local_268);
              if ((this->_padding_ & 0x200) != 0) {
                local_230.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_230.Pairs.ArrayNum = 0;
                local_230.Pairs.ArrayMax = 0;
                pFVar10 = FText::FromString(&local_d0,&this->PackageFilename);
                local_190.Type = Text;
                FText::FText((FText *)&local_190.TextValue,pFVar10);
                if ((local_190.TextValue.field0_0x0.TypedValue.TextData.Reference ==
                     (ITextData *)0x0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsSet()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                       ,0xbd,
                                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                      ), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  uVar8 = (*pcVar6)();
                  return (bool)uVar8;
                }
                ::FString::FString(&local_1f0,L"FileName");
                TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
                ::Emplace<FString,FFormatArgumentValue>(&local_230,&local_1f0,&local_190);
                if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
                }
                if (local_190.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0
                   ) {
                  (**(code **)((longlong)
                               *(ITextData *)
                                local_190.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10)
                  )();
                }
                if (local_d0.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_d0.TextData.Reference + 0x10))();
                }
                if (2 < (byte)LogAssetRegistry._0_1_) {
                  pFVar10 = FText::AsLocalizable_Advanced_LocText
                                      (&local_b0,L"AssetRegistry",
                                       L"SerializeSoftPackageReferenceListInvalidReferencePreSoftObjectPath"
                                       ,
                                       L"Package is unloadable: {FileName}. Reason: SerializeSoftPackageReferenceListInvalidReferencePreSoftObjectPath."
                                      );
                  pFVar11 = FTextFormat::FTextFormat(&local_50,pFVar10,Default);
                  pFVar10 = FText::Format(&local_c0,pFVar11,&local_230);
                  FText::ToString(pFVar10);
                  UE::Logging::Private::BasicLog<3>
                            (&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
                  if (local_c0.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_c0.TextData.Reference + 0x10))();
                  }
                  if (local_b0.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_b0.TextData.Reference + 0x10))();
                  }
                }
                DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                          ((TTuple<FString,FFormatArgumentValue> *)
                           local_230.Pairs.AllocatorInstance.Data,local_230.Pairs.ArrayNum);
                if ((TTuple<FString,FFormatArgumentValue> *)local_230.Pairs.AllocatorInstance.Data
                    != (TTuple<FString,FFormatArgumentValue> *)0x0) {
                  FMemory::Free(local_230.Pairs.AllocatorInstance.Data);
                }
                (this->SoftPackageReferenceList).ArrayNum = 0;
                if (*piVar1 < 0) {
                  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (8,4,0,&pTVar2->AllocatorInstance,0,piVar1);
                }
                if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_268.Data.AllocatorInstance.Data);
                  return false;
                }
                goto LAB_142b6a6d4;
              }
              if ((int)this->_padding_ < 0x1e4) {
                pFVar13 = FPackageName::GetNormalizedObjectPath(&local_f0,&local_268);
                if (&local_268 != pFVar13) {
                  if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_268.Data.AllocatorInstance.Data);
                  }
                  local_268.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
                  (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_268.Data.ArrayNum = (pFVar13->Data).ArrayNum;
                  local_268.Data.ArrayMax = (pFVar13->Data).ArrayMax;
                  (pFVar13->Data).ArrayNum = 0;
                  (pFVar13->Data).ArrayMax = 0;
                }
                if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_f0.Data.AllocatorInstance.Data);
                }
                if (1 < local_268.Data.ArrayNum) {
                  pFVar13 = FPackageName::ObjectPathToPackageName(&local_e0,&local_268);
                  if (&local_268 != pFVar13) {
                    if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_268.Data.AllocatorInstance.Data);
                    }
                    local_268.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
                    (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_268.Data.ArrayNum = (pFVar13->Data).ArrayNum;
                    local_268.Data.ArrayMax = (pFVar13->Data).ArrayMax;
                    (pFVar13->Data).ArrayNum = 0;
                    (pFVar13->Data).ArrayMax = 0;
                  }
                  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
                  }
                }
              }
              FVar15.Data = (FScriptContainerElement *)L"";
              if (local_268.Data.ArrayNum != 0) {
                FVar15.Data = local_268.Data.AllocatorInstance.Data;
              }
              pFVar14 = ::FName::FName(&local_res8,(wchar_t *)FVar15.Data);
              pFVar4 = (FName *)(pTVar2->AllocatorInstance).Data;
              if (((pFVar4 <= pFVar14) && (pFVar14 < pFVar4 + *piVar1)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar7)) {
                pcVar6 = (code *)swi(3);
                uVar8 = (*pcVar6)();
                return (bool)uVar8;
              }
              iVar9 = (this->SoftPackageReferenceList).ArrayNum;
              if (iVar9 == *piVar1) {
                iVar9 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x408,&pTVar2->AllocatorInstance,piVar1);
              }
              (this->SoftPackageReferenceList).ArrayNum = iVar9 + 1;
              *(FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 8) = *pFVar14;
              if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_268.Data.AllocatorInstance.Data);
              }
              iVar16 = iVar16 + 1;
            } while (iVar16 < (this->PackageFileSummary).SoftPackageReferencesCount);
          }
        }
        else if (0 < iVar9) {
          do {
            local_258 = 0;
            (**(code **)(this->_padding_ + 0x178))(this,&local_258);
            if ((this->_padding_ & 0x200) != 0) {
              local_220.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_220.Pairs.ArrayNum = 0;
              local_220.Pairs.ArrayMax = 0;
              pFVar10 = FText::FromString(&local_a0,&this->PackageFilename);
              local_170.Type = Text;
              FText::FText((FText *)&local_170.TextValue,pFVar10);
              if ((local_170.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0)
                 && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsSet()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                        ,0xbd,
                                        L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                       ), bVar7)) {
                pcVar6 = (code *)swi(3);
                uVar8 = (*pcVar6)();
                return (bool)uVar8;
              }
              ::FString::FString(&local_1e0,L"FileName");
              TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
              ::Emplace<FString,FFormatArgumentValue>(&local_220,&local_1e0,&local_170);
              if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
              }
              if (local_170.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)
              {
                (**(code **)((longlong)
                             *(ITextData *)
                              local_170.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
                          ();
              }
              if (local_a0.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_a0.TextData.Reference + 0x10))();
              }
              if (2 < (byte)LogAssetRegistry._0_1_) {
                pFVar10 = FText::AsLocalizable_Advanced_LocText
                                    (&local_80,L"AssetRegistry",
                                     L"SerializeSoftPackageReferenceListInvalidReference",
                                     L"Package is unloadable: {FileName}. Reason: SerializeSoftPackageReferenceListInvalidReference."
                                    );
                pFVar11 = FTextFormat::FTextFormat(&local_40,pFVar10,Default);
                pFVar10 = FText::Format(&local_90,pFVar11,&local_220);
                FText::ToString(pFVar10);
                UE::Logging::Private::BasicLog<3>
                          (&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
                if (local_90.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
                }
                if (local_80.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
                }
              }
              DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                        ((TTuple<FString,FFormatArgumentValue> *)
                         local_220.Pairs.AllocatorInstance.Data,local_220.Pairs.ArrayNum);
              if ((TTuple<FString,FFormatArgumentValue> *)local_220.Pairs.AllocatorInstance.Data !=
                  (TTuple<FString,FFormatArgumentValue> *)0x0) {
                FMemory::Free(local_220.Pairs.AllocatorInstance.Data);
              }
              (this->SoftPackageReferenceList).ArrayNum = 0;
              if (*piVar1 < 0) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,4,0,&pTVar2->AllocatorInstance,0,piVar1);
              }
              goto LAB_142b6a6d4;
            }
            pFVar5 = (pTVar2->AllocatorInstance).Data;
            if (((pFVar5 <= (FScriptContainerElement *)&local_258) &&
                ((FScriptContainerElement *)&local_258 < pFVar5 + (longlong)*piVar1 * 8)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar6 = (code *)swi(3);
              uVar8 = (*pcVar6)();
              return (bool)uVar8;
            }
            iVar9 = (this->SoftPackageReferenceList).ArrayNum;
            if (iVar9 == *piVar1) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x408,&pTVar2->AllocatorInstance,piVar1);
              (this->SoftPackageReferenceList).ArrayNum = iVar9;
            }
            iVar16 = iVar16 + 1;
            (this->SoftPackageReferenceList).ArrayNum = iVar9 + 1;
            *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_258;
          } while (iVar16 < (this->PackageFileSummary).SoftPackageReferencesCount);
        }
        goto LAB_142b6a292;
      }
      local_240.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_240.Pairs.ArrayNum = 0;
      local_240.Pairs.ArrayMax = 0;
      pFVar10 = FText::FromString(&local_120,&this->PackageFilename);
      local_1b0.Type = Text;
      FText::FText((FText *)&local_1b0.TextValue,pFVar10);
      if ((local_1b0.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      ::FString::FString(&local_200,L"FileName");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_240,&local_200,&local_1b0);
      if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_200.Data.AllocatorInstance.Data);
      }
      if (local_1b0.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_1b0.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_120.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_120.TextData.Reference + 0x10))();
      }
      if (2 < (byte)LogAssetRegistry._0_1_) {
        pFVar10 = FText::AsLocalizable_Advanced_LocText
                            (&local_100,L"AssetRegistry",
                             L"SerializeSoftPackageReferenceListInvalidReferencesCount",
                             L"Package is unloadable: {FileName}. Reason: SerializeSoftPackageReferenceListInvalidReferencesCount."
                            );
        pFVar11 = FTextFormat::FTextFormat(&local_60,pFVar10,Default);
        pFVar10 = FText::Format(&local_110,pFVar11,&local_240);
        FText::ToString(pFVar10);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
        if (local_110.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_110.TextData.Reference + 0x10))();
        }
        if (local_100.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
        }
      }
      DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                ((TTuple<FString,FFormatArgumentValue> *)local_240.Pairs.AllocatorInstance.Data,
                 local_240.Pairs.ArrayNum);
      if ((TTuple<FString,FFormatArgumentValue> *)local_240.Pairs.AllocatorInstance.Data !=
          (TTuple<FString,FFormatArgumentValue> *)0x0) {
        FMemory::Free(local_240.Pairs.AllocatorInstance.Data);
        return false;
      }
    }
    else {
      local_250.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_250.Pairs.ArrayNum = 0;
      local_250.Pairs.ArrayMax = 0;
      pFVar10 = FText::FromString(&local_150,&this->PackageFilename);
      local_1d0.Type = Text;
      FText::FText((FText *)&local_1d0.TextValue,pFVar10);
      if ((local_1d0.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      ::FString::FString(&local_210,L"FileName");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_250,&local_210,&local_1d0);
      if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_210.Data.AllocatorInstance.Data);
      }
      if (local_1d0.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_1d0.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_150.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_150.TextData.Reference + 0x10))();
      }
      if (2 < (byte)LogAssetRegistry._0_1_) {
        pFVar10 = FText::AsLocalizable_Advanced_LocText
                            (&local_130,L"AssetRegistry",
                             L"SerializeSoftPackageReferenceListInvalidReferencesOffset",
                             L"Package is unloadable: {FileName}. Reason: SerializeSoftPackageReferenceListInvalidReferencesOffset."
                            );
        pFVar11 = FTextFormat::FTextFormat(&local_70,pFVar10,Default);
        pFVar10 = FText::Format(&local_140,pFVar11,&local_250);
        FText::ToString(pFVar10);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
        if (local_140.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_140.TextData.Reference + 0x10))();
        }
        if (local_130.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_130.TextData.Reference + 0x10))();
        }
      }
      DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                ((TTuple<FString,FFormatArgumentValue> *)local_250.Pairs.AllocatorInstance.Data,
                 local_250.Pairs.ArrayNum);
      if ((TTuple<FString,FFormatArgumentValue> *)local_250.Pairs.AllocatorInstance.Data !=
          (TTuple<FString,FFormatArgumentValue> *)0x0) {
        FMemory::Free(local_250.Pairs.AllocatorInstance.Data);
        return false;
      }
    }
LAB_142b6a6d4:
    bVar7 = false;
  }
  else {
LAB_142b6a292:
    bVar7 = true;
  }
  return bVar7;
}

// SerializeThumbnailMap @ 142b6a810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FPackageReader::SerializeThumbnailMap(FPackageReader *this)

{
  FString *pFVar1;
  TArray<FObjectFullNameAndThumbnail,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  FText *pFVar10;
  FTextFormat *pFVar11;
  longlong lVar12;
  void *pvVar13;
  TStringBuilderBase<wchar_t> *pTVar14;
  FName *pFVar15;
  ForAnyElementType FVar16;
  ForAnyElementType FVar17;
  ulong64 uVar18;
  int iVar19;
  undefined1 auStackY_b98 [32];
  uint local_b58;
  uint local_b54;
  FString local_b50;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_b40
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_b30
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_b20
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_b10
  ;
  FString local_b00;
  FString local_af0;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_ae0
  ;
  FString *local_ad0;
  FName local_ac8;
  FName FStack_ac0;
  uint local_ab8;
  undefined4 uStack_ab4;
  FString local_ab0;
  FString local_aa0;
  FString local_a90;
  FString local_a80;
  FString local_a70;
  FFormatArgumentValue local_a60;
  FFormatArgumentValue local_a40;
  FFormatArgumentValue local_a20;
  FFormatArgumentValue local_a00;
  FFormatArgumentValue local_9e0;
  FText local_9c0;
  FText local_9b0;
  FText local_9a0;
  FText local_990;
  FText local_980;
  FText local_970;
  FText local_960;
  FText local_950;
  FText local_940;
  FText local_930;
  FName local_920;
  FText local_918;
  FText local_908;
  FText local_8f8;
  FText local_8e8;
  FText local_8d8;
  FTextFormat local_8c8;
  FTextFormat local_8b8;
  FTextFormat local_8a8;
  FTextFormat local_898;
  FTextFormat local_888;
  TStringBuilderBase<wchar_t> local_878;
  wchar_t local_858 [1035];
  wchar_t local_42 [5];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_b98;
  if (((this->ThumbnailMap).ArrayNum < 1) &&
     (iVar19 = (this->PackageFileSummary).ThumbnailTableOffset, 0 < iVar19)) {
    bVar7 = StartSerializeSection(this,(longlong)iVar19);
    iVar19 = 0;
    if (bVar7) {
      uVar3 = (this->LongPackageName).Data.ArrayNum;
      local_b50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b50.Data.ArrayNum = 0;
      local_b50.Data.ArrayMax = 0;
      if ((int)uVar3 < 2) {
        pFVar1 = &this->PackageFilename;
        local_ad0 = pFVar1;
        bVar7 = FPackageName::TryConvertFilenameToLongPackageName
                          (pFVar1,&local_b50,(FString *)0x0,None);
        if (bVar7) goto LAB_142b6aa5f;
        local_b30.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b30.Pairs.ArrayNum = 0;
        local_b30.Pairs.ArrayMax = 0;
        pFVar10 = FText::FromString(&local_8e8,pFVar1);
        local_a40.Type = Text;
        FText::FText((FText *)&local_a40.TextValue,pFVar10);
        if ((local_a40.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0xbd,
                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        ::FString::FString(&local_a90,L"FileName");
        TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
        Emplace<FString,FFormatArgumentValue>(&local_b30,&local_a90,&local_a40);
        if (local_a90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a90.Data.AllocatorInstance.Data);
        }
        if (local_a40.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_a40.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        if (local_8e8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_8e8.TextData.Reference + 0x10))();
        }
        if (2 < (byte)LogAssetRegistry._0_1_) {
          pFVar10 = FText::AsLocalizable_Advanced_LocText
                              (&local_9c0,L"AssetRegistry",L"SerializeThumbnailMapNoPackageName",
                               L"Package is unloadable: {FileName}. Reason: SerializeThumbnailMapNoPackageName."
                              );
          pFVar11 = FTextFormat::FTextFormat(&local_8c8,pFVar10,Default);
          pFVar10 = FText::Format(&local_8d8,pFVar11,&local_b30);
          FText::ToString(pFVar10);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
          if (local_8d8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_8d8.TextData.Reference + 0x10))();
          }
          if (local_9c0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_9c0.TextData.Reference + 0x10))();
          }
        }
        DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                  ((TTuple<FString,FFormatArgumentValue> *)local_b30.Pairs.AllocatorInstance.Data,
                   local_b30.Pairs.ArrayNum);
        FVar16.Data = local_b30.Pairs.AllocatorInstance.Data;
      }
      else {
        if (&local_b50 != &this->LongPackageName) {
          pFVar4 = (this->LongPackageName).Data.AllocatorInstance.Data;
          local_b50.Data.ArrayMax = 0;
          local_b50.Data.ArrayNum = uVar3;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,uVar3,0,(ForAnyElementType *)&local_b50,uVar3,&local_b50.Data.ArrayMax);
          memcpy(local_b50.Data.AllocatorInstance.Data,pFVar4,(longlong)(int)uVar3 * 2);
        }
        local_ad0 = &this->PackageFilename;
LAB_142b6aa5f:
        plVar5 = (longlong *)this->_padding_;
        local_b58 = 0;
        if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
          if ((this->_padding_ & 0x10000) == 0) {
            (**(code **)(this->_padding_ + 0x188))(this,&local_b58,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped((FArchive *)this,&local_b58);
          }
        }
        else {
          local_b58 = *(uint *)*plVar5;
          *plVar5 = *plVar5 + 4;
        }
        if (((this->_padding_ & 0x200) == 0) && (-1 < (int)local_b58)) {
          iVar9 = (this->PackageFileSummary).GatherableTextDataCount;
          lVar12 = (**(code **)(this->_padding_ + 0x28))(this);
          if (lVar12 + iVar9 * 0x14 <= this->PackageFileSize) {
            pTVar2 = &this->ThumbnailMap;
            if ((int)local_b58 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)local_b58);
            }
            (this->ThumbnailMap).ArrayNum = 0;
            if ((this->ThumbnailMap).ArrayMax < (int)local_b58) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,8,local_b58,&pTVar2->AllocatorInstance,0,
                         &(this->ThumbnailMap).ArrayMax);
            }
            if (0 < (int)local_b58) {
              do {
                local_af0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_af0.Data.ArrayNum = 0;
                local_af0.Data.ArrayMax = 0;
                ::operator<<((FArchive *)this,&local_af0);
                local_b00.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_b00.Data.ArrayNum = 0;
                local_b00.Data.ArrayMax = 0;
                ::operator<<((FArchive *)this,&local_b00);
                plVar5 = (longlong *)this->_padding_;
                local_b54 = 0;
                if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
                  if ((this->_padding_ & 0x10000) == 0) {
                    (**(code **)(this->_padding_ + 0x188))(this,&local_b54,4);
                  }
                  else {
                    FArchive::SerializeByteOrderSwapped((FArchive *)this,&local_b54);
                  }
                }
                else {
                  local_b54 = *(uint *)*plVar5;
                  *plVar5 = *plVar5 + 4;
                }
                FVar16.Data = local_af0.Data.AllocatorInstance.Data;
                if ((this->_padding_ & 0x200) != 0) {
                  local_b10.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_b10.Pairs.ArrayNum = 0;
                  local_b10.Pairs.ArrayMax = 0;
                  pFVar10 = FText::FromString(&local_980,local_ad0);
                  local_a00.Type = Text;
                  FText::FText((FText *)&local_a00.TextValue,pFVar10);
                  if ((local_a00.TextValue.field0_0x0.TypedValue.TextData.Reference ==
                       (ITextData *)0x0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsSet()",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                         ,0xbd,
                                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                        ), bVar7)) {
                    pcVar6 = (code *)swi(3);
                    uVar8 = (*pcVar6)();
                    return (bool)uVar8;
                  }
                  ::FString::FString(&local_a70,L"FileName");
                  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
                  ::Emplace<FString,FFormatArgumentValue>(&local_b10,&local_a70,&local_a00);
                  if (local_a70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_a70.Data.AllocatorInstance.Data);
                  }
                  if (local_a00.TextValue.field0_0x0.TypedValue.TextData.Reference !=
                      (ITextData *)0x0) {
                    (**(code **)((longlong)
                                 *(ITextData *)
                                  local_a00.TextValue.field0_0x0.TypedValue.TextData.Reference +
                                0x10))();
                  }
                  if (local_980.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_980.TextData.Reference + 0x10))();
                  }
                  if (2 < (byte)LogAssetRegistry._0_1_) {
                    pFVar10 = FText::AsLocalizable_Advanced_LocText
                                        (&local_960,L"AssetRegistry",
                                         L"SerializeThumbnailMapInvalidEntry",
                                         L"Package is unloadable: {FileName}. Reason: SerializeThumbnailMapInvalidEntry."
                                        );
                    pFVar11 = FTextFormat::FTextFormat(&local_8a8,pFVar10,Default);
                    pFVar10 = FText::Format(&local_970,pFVar11,&local_b10);
                    FText::ToString(pFVar10);
                    UE::Logging::Private::BasicLog<3>
                              (&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
                    if (local_970.TextData.Reference != (ITextData *)0x0) {
                      (**(code **)((longlong)*local_970.TextData.Reference + 0x10))();
                    }
                    if (local_960.TextData.Reference != (ITextData *)0x0) {
                      (**(code **)((longlong)*local_960.TextData.Reference + 0x10))();
                    }
                  }
                  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                            ((TTuple<FString,FFormatArgumentValue> *)
                             local_b10.Pairs.AllocatorInstance.Data,local_b10.Pairs.ArrayNum);
                  if ((TTuple<FString,FFormatArgumentValue> *)local_b10.Pairs.AllocatorInstance.Data
                      != (TTuple<FString,FFormatArgumentValue> *)0x0) {
                    FMemory::Free(local_b10.Pairs.AllocatorInstance.Data);
                  }
                  FVar16.Data = local_af0.Data.AllocatorInstance.Data;
                  if (local_b00.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_b00.Data.AllocatorInstance.Data);
                    FVar16.Data = local_af0.Data.AllocatorInstance.Data;
                  }
                  goto LAB_142b6b372;
                }
                local_878.Base = local_858;
                local_878.End = local_42;
                FStack_ac0.ComparisonIndex.Value = 0;
                FStack_ac0.Number = 0;
                local_878.CurPos = local_858;
                local_878.bIsDynamic = false;
                local_878.bIsExternal = false;
                iVar9 = local_af0.Data.ArrayNum + -1;
                if (local_af0.Data.ArrayNum == 0) {
                  iVar9 = 0;
                }
                uVar18 = (ulong64)iVar9;
                if (local_42 < local_858 + uVar18) {
                  TStringBuilderBase<wchar_t>::Extend(&local_878,uVar18);
                }
                if (iVar9 != 0) {
                  pvVar13 = FGenericPlatformString::Memcpy(local_878.CurPos,FVar16.Data,uVar18 * 2);
                  local_878.CurPos = (wchar_t *)((longlong)pvVar13 + uVar18 * 2);
                }
                pTVar14 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_878,L" ",1);
                iVar9 = local_b50.Data.ArrayNum + -1;
                if (local_b50.Data.ArrayNum == 0) {
                  iVar9 = 0;
                }
                pTVar14 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                                    (pTVar14,(wchar_t *)local_b50.Data.AllocatorInstance.Data,iVar9)
                ;
                pTVar14 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar14,L".",1);
                iVar9 = local_b00.Data.ArrayNum + -1;
                if (local_b00.Data.ArrayNum == 0) {
                  iVar9 = 0;
                }
                TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                          (pTVar14,(wchar_t *)local_b00.Data.AllocatorInstance.Data,iVar9);
                pFVar15 = ::FName::FName(&local_920,
                                         (int)((longlong)local_878.CurPos - (longlong)local_878.Base
                                              >> 1),local_878.Base,FNAME_Add);
                local_ac8 = *pFVar15;
                TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_878);
                local_ab8 = local_b54;
                iVar9 = (this->ThumbnailMap).ArrayNum;
                if (iVar9 == (this->ThumbnailMap).ArrayMax) {
                  iVar9 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x818,&pTVar2->AllocatorInstance,&(this->ThumbnailMap).ArrayMax
                                    );
                }
                (this->ThumbnailMap).ArrayNum = iVar9 + 1;
                pFVar4 = (pTVar2->AllocatorInstance).Data;
                pFVar15 = (FName *)(pFVar4 + (longlong)iVar9 * 0x18);
                *pFVar15 = local_ac8;
                pFVar15[1] = FStack_ac0;
                *(ulonglong *)(pFVar4 + (longlong)iVar9 * 0x18 + 0x10) =
                     CONCAT44(uStack_ab4,local_ab8);
                if (local_b00.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_b00.Data.AllocatorInstance.Data);
                }
                if ((TTuple<FString,FFormatArgumentValue> *)local_af0.Data.AllocatorInstance.Data !=
                    (TTuple<FString,FFormatArgumentValue> *)0x0) {
                  FMemory::Free(local_af0.Data.AllocatorInstance.Data);
                }
                iVar19 = iVar19 + 1;
              } while (iVar19 < (int)local_b58);
            }
            if ((TTuple<FString,FFormatArgumentValue> *)local_b50.Data.AllocatorInstance.Data !=
                (TTuple<FString,FFormatArgumentValue> *)0x0) {
              FMemory::Free(local_b50.Data.AllocatorInstance.Data);
            }
            goto LAB_142b6b04e;
          }
          local_b20.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_b20.Pairs.ArrayNum = 0;
          local_b20.Pairs.ArrayMax = 0;
          pFVar10 = FText::FromString(&local_9b0,&this->PackageFilename);
          local_a20.Type = Text;
          FText::FText((FText *)&local_a20.TextValue,pFVar10);
          if ((local_a20.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar7)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          ::FString::FString(&local_a80,L"FileName");
          TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
          Emplace<FString,FFormatArgumentValue>(&local_b20,&local_a80,&local_a20);
          if (local_a80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a80.Data.AllocatorInstance.Data);
          }
          if (local_a20.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)
                         *(ITextData *)local_a20.TextValue.field0_0x0.TypedValue.TextData.Reference
                        + 0x10))();
          }
          if (local_9b0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_9b0.TextData.Reference + 0x10))();
          }
          if (2 < (byte)LogAssetRegistry._0_1_) {
            pFVar10 = FText::AsLocalizable_Advanced_LocText
                                (&local_990,L"AssetRegistry",L"SerializeThumbnailMapInvalidCount",
                                 L"Package is unloadable: {FileName}. Reason: SerializeThumbnailMapInvalidCount."
                                );
            pFVar11 = FTextFormat::FTextFormat(&local_8b8,pFVar10,Default);
            pFVar10 = FText::Format(&local_9a0,pFVar11,&local_b20);
            FText::ToString(pFVar10);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
            if (local_9a0.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_9a0.TextData.Reference + 0x10))();
            }
            if (local_990.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_990.TextData.Reference + 0x10))();
            }
          }
          DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                    ((TTuple<FString,FFormatArgumentValue> *)local_b20.Pairs.AllocatorInstance.Data,
                     local_b20.Pairs.ArrayNum);
          FVar16.Data = local_b20.Pairs.AllocatorInstance.Data;
        }
        else {
          local_ae0.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_ae0.Pairs.ArrayNum = 0;
          local_ae0.Pairs.ArrayMax = 0;
          pFVar10 = FText::FromString(&local_950,&this->PackageFilename);
          local_9e0.Type = Text;
          FText::FText((FText *)&local_9e0.TextValue,pFVar10);
          if ((local_9e0.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar7)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          ::FString::FString(&local_ab0,L"FileName");
          TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
          Emplace<FString,FFormatArgumentValue>(&local_ae0,&local_ab0,&local_9e0);
          if (local_ab0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_ab0.Data.AllocatorInstance.Data);
          }
          if (local_9e0.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)
                         *(ITextData *)local_9e0.TextValue.field0_0x0.TypedValue.TextData.Reference
                        + 0x10))();
          }
          if (local_950.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_950.TextData.Reference + 0x10))();
          }
          if (2 < (byte)LogAssetRegistry._0_1_) {
            pFVar10 = FText::AsLocalizable_Advanced_LocText
                                (&local_930,L"AssetRegistry",L"SerializeThumbnailMapInvalidCount",
                                 L"Package is unloadable: {FileName}. Reason: SerializeThumbnailMapInvalidCount."
                                );
            pFVar11 = FTextFormat::FTextFormat(&local_898,pFVar10,Default);
            pFVar10 = FText::Format(&local_940,pFVar11,&local_ae0);
            FText::ToString(pFVar10);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
            if (local_940.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_940.TextData.Reference + 0x10))();
            }
            if (local_930.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_930.TextData.Reference + 0x10))();
            }
          }
          DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                    ((TTuple<FString,FFormatArgumentValue> *)local_ae0.Pairs.AllocatorInstance.Data,
                     local_ae0.Pairs.ArrayNum);
          FVar16.Data = local_ae0.Pairs.AllocatorInstance.Data;
        }
      }
LAB_142b6b372:
      FVar17.Data = local_b50.Data.AllocatorInstance.Data;
      if ((TTuple<FString,FFormatArgumentValue> *)FVar16.Data !=
          (TTuple<FString,FFormatArgumentValue> *)0x0) {
        FMemory::Free(FVar16.Data);
        FVar17.Data = local_b50.Data.AllocatorInstance.Data;
      }
    }
    else {
      local_b40.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b40.Pairs.ArrayNum = 0;
      local_b40.Pairs.ArrayMax = 0;
      pFVar10 = FText::FromString(&local_918,&this->PackageFilename);
      local_a60.Type = Text;
      FText::FText((FText *)&local_a60.TextValue,pFVar10);
      if ((local_a60.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      ::FString::FString(&local_aa0,L"FileName");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_b40,&local_aa0,&local_a60);
      if (local_aa0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_aa0.Data.AllocatorInstance.Data);
      }
      if (local_a60.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_a60.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_918.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_918.TextData.Reference + 0x10))();
      }
      if (2 < (byte)LogAssetRegistry._0_1_) {
        pFVar10 = FText::AsLocalizable_Advanced_LocText
                            (&local_8f8,L"AssetRegistry",L"SerializeThumbnailMapInvalidOffset",
                             L"Package is unloadable: {FileName}. Reason: SerializeThumbnailMapInvalidOffset."
                            );
        pFVar11 = FTextFormat::FTextFormat(&local_888,pFVar10,Default);
        pFVar10 = FText::Format(&local_908,pFVar11,&local_b40);
        FText::ToString(pFVar10);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
        if (local_908.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_908.TextData.Reference + 0x10))();
        }
        if (local_8f8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_8f8.TextData.Reference + 0x10))();
        }
      }
      DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                ((TTuple<FString,FFormatArgumentValue> *)local_b40.Pairs.AllocatorInstance.Data,
                 local_b40.Pairs.ArrayNum);
      FVar17.Data = local_b40.Pairs.AllocatorInstance.Data;
    }
    if ((TTuple<FString,FFormatArgumentValue> *)FVar17.Data !=
        (TTuple<FString,FFormatArgumentValue> *)0x0) {
      FMemory::Free(FVar17.Data);
    }
    bVar7 = false;
  }
  else {
LAB_142b6b04e:
    bVar7 = true;
  }
  return bVar7;
}

// StartSerializeSection @ 142b6bac0

bool __thiscall FPackageReader::StartSerializeSection(FPackageReader *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (this->Loader == (FArchive *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Loader",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PackageReader.cpp"
                       ,0x130,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if ((0 < param_1) && (param_1 <= this->PackageFileSize)) {
    FArchiveState::ClearError((FArchiveState *)this);
    FArchiveState::ClearError((FArchiveState *)this->Loader);
    (**(code **)(this->_padding_ + 0x1b8))(this,param_1);
    return (bool)((byte)~*(byte *)((longlong)&this->_padding_ + 1) >> 1 & 1);
  }
  return false;
}

// Tell @ 142b6bb90

long64 __thiscall FPackageReader::Tell(FPackageReader *this)

{
  code *pcVar1;
  bool bVar2;
  long64 lVar3;
  
  if (this->Loader == (FArchive *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Loader",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PackageReader.cpp"
                       ,0x579,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      lVar3 = (*pcVar1)();
      return lVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142b6bbd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar3 = (**(code **)(*(longlong *)this->Loader + 0x28))();
  return lVar3;
}

// TotalSize @ 142b6cc50

long64 __thiscall FPackageReader::TotalSize(FPackageReader *this)

{
  code *pcVar1;
  bool bVar2;
  long64 lVar3;
  
  if (this->Loader == (FArchive *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Loader",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PackageReader.cpp"
                       ,0x57f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      lVar3 = (*pcVar1)();
      return lVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142b6cc98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar3 = (**(code **)(*(longlong *)this->Loader + 0x30))();
  return lVar3;
}

// TryGetLongPackageName @ 142b6ccb0

bool __thiscall FPackageReader::TryGetLongPackageName(FPackageReader *this,FString *param_1)

{
  bool bVar1;
  
  if (1 < (this->LongPackageName).Data.ArrayNum) {
    ::FString::operator=(param_1,&this->LongPackageName);
    return true;
  }
  bVar1 = FPackageName::TryConvertFilenameToLongPackageName
                    (&this->PackageFilename,param_1,(FString *)0x0,None);
  return bVar1;
}

