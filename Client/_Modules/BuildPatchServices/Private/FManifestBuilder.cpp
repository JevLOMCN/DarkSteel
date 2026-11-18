// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 6

// FManifestBuilder @ 1432239f0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FManifestBuilder * __thiscall
BuildPatchServices::FManifestBuilder::FManifestBuilder
          (FManifestBuilder *this,IFileSystem *param_1,FManifestBuilderConfig *param_2,
          FManifestDetails *param_3)

{
  TSharedRef<FBuildPatchAppManifest,1> *this_00;
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  ulong64 uVar5;
  TMap<FString,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariant,0>_>
  *pTVar6;
  bool bVar7;
  uint uVar8;
  FBuildPatchAppManifest *pFVar9;
  FManifestBuilder *pFVar10;
  longlong lVar11;
  char *pcVar12;
  undefined7 uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined1 *puVar18;
  uint *puVar19;
  TMap<FString,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariant,0>_>
  *pTVar20;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  ulong64 local_338;
  ulong64 local_330;
  FString local_328;
  TMap<FString,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariant,0>_>
  *local_318;
  uint uStack_310;
  uint uStack_30c;
  undefined1 *local_308;
  undefined4 uStack_300;
  uint uStack_2fc;
  uint local_2f8;
  uint uStack_2f4;
  int iStack_2f0;
  undefined4 uStack_2ec;
  TRawPtrProxy<FBuildPatchAppManifest> local_2e8;
  ulong64 local_2e0;
  TMap<FString,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariant,0>_>
  *local_2d8;
  ulong64 local_2d0;
  TMap<FString,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariant,0>_>
  *local_2c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2c0;
  undefined8 uStack_2a0;
  FMemoryReader local_298;
  FMemoryReader local_1e8;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  FArchiveState local_108;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  FBuildPatchAppManifest *pFVar17;
  
  this->FileSystem = param_1;
  this->_padding_ = (longlong)&___7FManifestBuilder_BuildPatchServices__6B_;
  (this->Config).bAllowEmptyBuilds = param_2->bAllowEmptyBuilds;
  pFVar9 = ::operator_new(0x2b8);
  pFVar17 = (FBuildPatchAppManifest *)0x0;
  local_2e8.Object = pFVar17;
  if (pFVar9 != (FBuildPatchAppManifest *)0x0) {
    local_2e8.Object = FBuildPatchAppManifest::FBuildPatchAppManifest(pFVar9);
  }
  this_00 = &this->Manifest;
  TSharedRef<FBuildPatchAppManifest,1>::TSharedRef<FBuildPatchAppManifest,1><FBuildPatchAppManifest>
            (this_00,&local_2e8);
  TMap<FString,BuildPatchServices::FFileAttributes,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FFileAttributes,0>_>
  ::
  TMap<FString,BuildPatchServices::FFileAttributes,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FFileAttributes,0>_>
            (&this->FileAttributesMap,&param_3->FileAttributesMap);
  (this->BuildStructureAdded).Head = (FBlockEntry *)0x0;
  (this->BuildStructureAdded).Tail = (FBlockEntry *)0x0;
  *(undefined8 *)&this->AllMatches = 0;
  *(undefined8 *)&(this->AllMatches).field_0x8 = 0;
  *(undefined8 *)&(this->AllMatches).field_0x20 = 0;
  uVar16 = 0;
  *(undefined4 *)&(this->AllMatches).field_0x28 = 0;
  *(undefined4 *)&(this->AllMatches).field_0x2c = 0x80;
  *(undefined4 *)&(this->AllMatches).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AllMatches).field_0x34 = 0;
  *(undefined8 *)&(this->AllMatches).field_0x40 = 0;
  *(undefined4 *)&(this->AllMatches).field_0x48 = 0;
  pFVar9 = this_00->Object;
  this->bFinalizationSucceeded = false;
  (pFVar9->ManifestMeta).FeatureLevel = param_3->FeatureLevel;
  (this_00->Object->ManifestMeta).bIsFileData = false;
  (this_00->Object->ManifestMeta).AppID = param_3->AppId;
  ::FString::operator=(&(this_00->Object->ManifestMeta).AppName,&param_3->AppName);
  ::FString::operator=(&(this_00->Object->ManifestMeta).BuildVersion,&param_3->BuildVersion);
  ::FString::operator=(&(this_00->Object->ManifestMeta).LaunchExe,&param_3->LaunchExe);
  ::FString::operator=(&(this_00->Object->ManifestMeta).LaunchCommand,&param_3->LaunchCommand);
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
            (&(this_00->Object->ManifestMeta).PrereqIds,&param_3->PrereqIds);
  ::FString::operator=(&(this_00->Object->ManifestMeta).PrereqName,&param_3->PrereqName);
  ::FString::operator=(&(this_00->Object->ManifestMeta).PrereqPath,&param_3->PrereqPath);
  pcVar12 = (char *)&param_3->PrereqArgs;
  ::FString::operator=(&(this_00->Object->ManifestMeta).PrereqArgs,(FString *)pcVar12);
  puVar1 = &(param_3->CustomFields).field_0x10;
  uVar3 = *(uint *)&(param_3->CustomFields).field_0x28;
  pTVar20 = &param_3->CustomFields;
  uStack_30c = 1;
  local_2f8 = 0;
  uStack_2fc = local_2f8;
  if (uVar3 != 0) {
    puVar19 = *(uint **)&(param_3->CustomFields).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    pcVar12 = (char *)0x0;
    uVar8 = *puVar19;
    pFVar9 = pFVar17;
    local_2f8 = 0;
    uVar16 = 0;
    while (uVar8 == 0) {
      iVar14 = (int)pFVar17;
      local_2f8 = (int)pFVar9 + 0x20;
      pFVar9 = (FBuildPatchAppManifest *)(ulonglong)local_2f8;
      uVar16 = iVar14 + 1;
      pFVar17 = (FBuildPatchAppManifest *)(ulonglong)uVar16;
      uStack_2fc = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar16)
      goto LAB_143223c11;
      uVar8 = puVar19[(longlong)iVar14 + 1];
    }
    uStack_30c = -uVar8 & uVar8;
    uVar2 = (ulonglong)uStack_30c * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res18 = (int)lVar11;
    uStack_2fc = (local_2f8 - 1) + local_res18;
    if ((int)uVar3 < (int)uStack_2fc) {
      uStack_2fc = uVar3;
    }
  }
LAB_143223c11:
  uVar8 = *(uint *)&(param_3->CustomFields).field_0x28;
  uVar15 = uVar8 & 0xffffffe0;
  iStack_2f0 = *(int *)&(param_3->CustomFields).field_0x8 -
               *(int *)&(param_3->CustomFields).field_0x34;
  uStack_300 = 0xffffffff;
  TStack_2c0._padding_ = CONCAT44(uStack_30c,uVar16);
  TStack_2c0.CurrentBitIndex = uStack_2fc;
  TStack_2c0.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar8 >> 5;
  TStack_2c0._28_4_ = uStack_2fc;
  TStack_2c0.BaseBitIndex = local_2f8;
  uStack_2a0 = CONCAT44(uStack_2ec,iStack_2f0);
  local_318 = pTVar20;
  uStack_310 = uVar16;
  local_308 = puVar1;
  uStack_2f4 = uStack_2fc;
  local_2d8 = pTVar20;
  local_2c8 = pTVar20;
  TStack_2c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if (((int)uVar8 < 0) || ((int)uVar3 < (int)uVar8)) {
    pcVar12 = &::s_C__Workspace_UnrealEngine_Engin;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x7af,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FManifestBuilder *)(*pcVar4)();
      return pFVar10;
    }
  }
  uVar3 = *(uint *)&(param_3->CustomFields).field_0x28;
  if (uVar8 != uVar3) {
    puVar18 = *(undefined1 **)&(param_3->CustomFields).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    pcVar12 = (char *)0x0;
    uVar16 = -1 << ((byte)uVar8 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar14 * 4);
    while (uVar16 == 0) {
      lVar11 = (longlong)iVar14;
      uVar15 = uVar15 + 0x20;
      iVar14 = iVar14 + 1;
      uVar8 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_143223d30;
      uVar16 = *(uint *)(puVar18 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    uVar8 = local_res20 + -1 + uVar15;
    if ((int)uVar3 < (int)uVar8) {
      uVar8 = uVar3;
    }
  }
LAB_143223d30:
  while( true ) {
    pTVar6 = local_2c8;
    if (*(int *)&local_2c8->field_0x8 - *(int *)&local_2c8->field_0x34 != (int)uStack_2a0) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_2c0.CurrentBitIndex == uVar8) &&
        (TStack_2c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == pTVar20)
       ) break;
    lVar11 = (longlong)TStack_2c0.CurrentBitIndex * 0x30 + *(longlong *)pTVar6;
    iVar14 = *(int *)(lVar11 + 0x10);
    if ((iVar14 == 10) || (iVar14 == 8)) {
      pFVar17 = this_00->Object;
      pcVar4 = *(code **)(pFVar17->_padding_ + 0x108);
      if (iVar14 != 8) {
        pcVar12 = 
        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Variant.h";
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Type == TVariantTraits<T>::GetType()) || ((TVariantTraits<T>::GetType() == EVariantTypes::UInt8) && (Type == EVariantTypes::Enum))"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Variant.h"
                           ,0x164,L"");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FManifestBuilder *)(*pcVar4)();
          return pFVar10;
        }
      }
      local_1e8._padding_ = 0;
      local_1e8._padding_ = 0;
      local_1e8._padding_ = 0;
      local_1e8._padding_ = 0;
      local_1e8._padding_ = 0;
      local_1e8._padding_ = 0;
      local_1e8._padding_ = 0;
      local_1e8._padding_ = 0;
      local_1e8._padding_ = 0;
      local_1e8._padding_ = 0;
      local_1e8._padding_ = 0;
      local_1e8._padding_ = 0;
      local_1e8._padding_ = 0;
      local_1e8._padding_ = 0;
      local_1e8._padding_ = 0;
      local_1e8._padding_ = 0;
      local_1e8._padding_ = 0;
      local_1e8._padding_ = 0;
      FArchiveState::FArchiveState((FArchiveState *)&local_1e8);
      local_1e8._padding_ = 0;
      local_1e8._padding_ = (longlong)&___7FMemoryReader__6B_;
      local_1e8.Bytes = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(lVar11 + 0x18);
      uVar13 = (undefined7)((ulonglong)pcVar12 >> 8);
      local_1e8.LimitSize = 0x7fffffffffffffff;
      FArchiveState::SetIsLoading((FArchiveState *)&local_1e8,true);
      (**(code **)(local_1e8._padding_ + 0x108))(&local_1e8,CONCAT71(uVar13,1));
      if (*(ulong64 **)(local_1e8._padding_ + 8) < *(ulong64 **)local_1e8._padding_ + 1) {
        if ((local_1e8._padding_ & 0x10000U) == 0) {
          if (*(code **)(local_1e8._padding_ + 0x188) == FMemoryReader::Serialize) {
            FMemoryReader::Serialize(&local_1e8,&local_330,8);
          }
          else {
            (**(code **)(local_1e8._padding_ + 0x188))();
          }
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)&local_1e8,&local_330);
        }
      }
      else {
        local_330 = **(ulong64 **)local_1e8._padding_;
        *(longlong *)local_1e8._padding_ = *(longlong *)local_1e8._padding_ + 8;
      }
      uVar5 = local_330;
      FArchive::~FArchive((FArchive *)&local_1e8);
      local_2d0 = uVar5;
      pcVar12 = local_118;
      (*pcVar4)(pFVar17,pcVar12,lVar11,&local_2d0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_118._8_8_);
    }
    else if ((iVar14 - 0xcU < 4) || (iVar14 - 0x1dU < 4)) {
      pFVar17 = this_00->Object;
      pcVar4 = *(code **)(pFVar17->_padding_ + 0x100);
      if (iVar14 != 0xf) {
        pcVar12 = 
        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Variant.h";
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Type == TVariantTraits<T>::GetType()) || ((TVariantTraits<T>::GetType() == EVariantTypes::UInt8) && (Type == EVariantTypes::Enum))"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Variant.h"
                           ,0x164,L"");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FManifestBuilder *)(*pcVar4)();
          return pFVar10;
        }
      }
      local_298._padding_ = 0;
      local_298._padding_ = 0;
      local_298._padding_ = 0;
      local_298._padding_ = 0;
      local_298._padding_ = 0;
      local_298._padding_ = 0;
      local_298._padding_ = 0;
      local_298._padding_ = 0;
      local_298._padding_ = 0;
      local_298._padding_ = 0;
      local_298._padding_ = 0;
      local_298._padding_ = 0;
      local_298._padding_ = 0;
      local_298._padding_ = 0;
      local_298._padding_ = 0;
      local_298._padding_ = 0;
      local_298._padding_ = 0;
      local_298._padding_ = 0;
      FArchiveState::FArchiveState((FArchiveState *)&local_298);
      local_298._padding_ = 0;
      local_298._padding_ = (longlong)&___7FMemoryReader__6B_;
      local_298.Bytes = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(lVar11 + 0x18);
      uVar13 = (undefined7)((ulonglong)pcVar12 >> 8);
      local_298.LimitSize = 0x7fffffffffffffff;
      FArchiveState::SetIsLoading((FArchiveState *)&local_298,true);
      (**(code **)(local_298._padding_ + 0x108))(&local_298,CONCAT71(uVar13,1));
      if (*(ulong64 **)(local_298._padding_ + 8) < *(ulong64 **)local_298._padding_ + 1) {
        if ((local_298._padding_ & 0x10000U) == 0) {
          if (*(code **)(local_298._padding_ + 0x188) == FMemoryReader::Serialize) {
            FMemoryReader::Serialize(&local_298,&local_338,8);
          }
          else {
            (**(code **)(local_298._padding_ + 0x188))();
          }
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)&local_298,&local_338);
        }
      }
      else {
        local_338 = **(ulong64 **)local_298._padding_;
        *(longlong *)local_298._padding_ = *(longlong *)local_298._padding_ + 8;
      }
      uVar5 = local_338;
      FArchive::~FArchive((FArchive *)&local_298);
      local_2e0 = uVar5;
      pcVar12 = local_128;
      (*pcVar4)(pFVar17,pcVar12,lVar11,&local_2e0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_128._8_8_);
      pTVar20 = local_2d8;
    }
    else if (iVar14 == 0x18) {
      pFVar17 = this_00->Object;
      local_108._padding_ = 0;
      local_108.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
      local_108.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
      local_108.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
      local_108.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
      local_108._40_8_ = 0;
      pcVar4 = *(code **)(pFVar17->_padding_ + 0x110);
      local_328.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_328.Data.ArrayNum = 0;
      local_328.Data.ArrayMax = 0;
      local_108.ArSerializingDefaults = 0;
      local_108.ArPortFlags = 0;
      local_108.ArMaxSerializeSize = 0;
      local_108.ArUEVer.FileVersionUE4 = 0;
      local_108.ArUEVer.FileVersionUE5 = 0;
      local_108.ArLicenseeUEVer = 0;
      local_108.ArEngineVer.Major = 0;
      local_108.ArEngineVer.Minor = 0;
      local_108.ArEngineVer.Patch = 0;
      local_108.ArEngineVer._6_2_ = 0;
      local_108.ArEngineVer.Changelist = 0;
      local_108.CustomVersionContainer = (FCustomVersionContainer *)0x0;
      local_108.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
      local_108.SavePackageData = (FArchiveSavePackageData *)0x0;
      local_108.SerializedProperty = (FProperty *)0x0;
      local_108.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
      local_108.bCustomVersionsAreReset = false;
      local_108._129_7_ = 0;
      local_108.NextProxy = (FArchiveState *)0x0;
      FArchiveState::FArchiveState(&local_108);
      local_78 = 0;
      local_108._padding_ = (longlong)&___7FMemoryReader__6B_;
      local_70 = lVar11 + 0x18;
      uVar13 = (undefined7)((ulonglong)pcVar12 >> 8);
      local_68 = 0x7fffffffffffffff;
      FArchiveState::SetIsLoading(&local_108,true);
      (**(code **)(local_108._padding_ + 0x108))(&local_108,CONCAT71(uVar13,1));
      ::operator<<((FArchive *)&local_108,&local_328);
      FArchive::~FArchive((FArchive *)&local_108);
      pcVar12 = local_138;
      (*pcVar4)(pFVar17,pcVar12,lVar11,&local_328);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_138._8_8_);
      if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_328.Data.AllocatorInstance.Data);
      }
    }
    TStack_2c0.UnvisitedBitMask = TStack_2c0.UnvisitedBitMask & ~TStack_2c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2c0);
  }
  return this;
}

// ~FManifestBuilder @ 143228820

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall BuildPatchServices::FManifestBuilder::~FManifestBuilder(FManifestBuilder *this)

{
  void *pvVar1;
  FBlockEntry *pFVar2;
  
  this->_padding_ = (longlong)&___7FManifestBuilder_BuildPatchServices__6B_;
  *(undefined4 *)&(this->AllMatches).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AllMatches).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,TArray<BuildPatchServices::FBlockStructure,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,TArray<BuildPatchServices::FBlockStructure,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,TArray<BuildPatchServices::FBlockStructure,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AllMatches);
  pFVar2 = (this->BuildStructureAdded).Head;
  while (pFVar2 != (FBlockEntry *)0x0) {
    (this->BuildStructureAdded).Tail = pFVar2->Next;
    pFVar2->Prev = (FBlockEntry *)0x0;
    pFVar2->Next = (FBlockEntry *)0x0;
    ::operator_delete(pFVar2,0x20);
    pFVar2 = (this->BuildStructureAdded).Tail;
    (this->BuildStructureAdded).Head = pFVar2;
  }
  *(undefined4 *)&(this->FileAttributesMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->FileAttributesMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,BuildPatchServices::FFileAttributes>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,BuildPatchServices::FFileAttributes>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,BuildPatchServices::FFileAttributes>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FileAttributesMap);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Manifest).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IManifestBuilder_BuildPatchServices__6B_;
  return;
}

// AddChunkMatch @ 143232980

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
BuildPatchServices::FManifestBuilder::AddChunkMatch
          (FManifestBuilder *this,FGuid *param_1,FBlockStructure *param_2)

{
  FBlockEntry *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FBlockStructure *pFVar5;
  ulong64 uVar6;
  TArray<BuildPatchServices::FBlockStructure,TSizedDefaultAllocator<32>_> *pTVar7;
  FString local_38;
  FBlockStructure local_28;
  
  pFVar5 = FBlockStructure::Intersect(&this->BuildStructureAdded,&local_28,param_2);
  pFVar1 = pFVar5->Head;
  while (local_28.Head != (FBlockEntry *)0x0) {
    local_28.Tail = (local_28.Head)->Next;
    (local_28.Head)->Prev = (FBlockEntry *)0x0;
    (local_28.Head)->Next = (FBlockEntry *)0x0;
    ::operator_delete(local_28.Head,0x20);
    local_28.Head = local_28.Tail;
  }
  if ((pFVar1 != (FBlockEntry *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BuildStructureAdded.Intersect(Structure).GetHead() == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Generation\\ManifestBuilder.cpp"
                         ,0x6b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FBlockStructure::Add(&this->BuildStructureAdded,param_2,FromStart);
  uVar6 = CityHash64((char *)param_1,0x10);
  pTVar7 = TMapBase<FGuid,TArray<BuildPatchServices::FBlockStructure,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<BuildPatchServices::FBlockStructure,TSizedDefaultAllocator<32>_>,0>_>
           ::FindOrAddImpl<FGuid_const_&>
                     ((TMapBase<FGuid,TArray<BuildPatchServices::FBlockStructure,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<BuildPatchServices::FBlockStructure,TSizedDefaultAllocator<32>_>,0>_>
                       *)&this->AllMatches,(uint)uVar6,param_1);
  pFVar5 = (FBlockStructure *)(pTVar7->AllocatorInstance).Data;
  if (((pFVar5 <= param_2) && (param_2 < pFVar5 + pTVar7->ArrayMax)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = pTVar7->ArrayNum;
  if (iVar4 == pTVar7->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar7->AllocatorInstance,&pTVar7->ArrayMax);
  }
  pTVar7->ArrayNum = iVar4 + 1;
  FBlockStructure::FBlockStructure
            ((FBlockStructure *)((pTVar7->AllocatorInstance).Data + (longlong)iVar4 * 0x10),param_2)
  ;
  if (5 < (byte)LogManifestBuilder._0_1_) {
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    FGuid::AppendString(param_1,&local_38,Digits);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogManifestBuilder);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// FinalizeData @ 143250850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
BuildPatchServices::FManifestBuilder::FinalizeData
          (FManifestBuilder *this,
          TArray<BuildPatchServices::FFileSpan,TSizedDefaultAllocator<32>_> *param_1,
          TArray<BuildPatchServices::FChunkInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  ulonglong uVar4;
  int iVar5;
  FBuildPatchAppManifest *pFVar6;
  FScriptContainerElement *pFVar7;
  void *_Src;
  ForAnyElementType _Src_00;
  FGuid *pFVar8;
  FBlockEntry *pFVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  TArray<BuildPatchServices::FChunkInfo,TSizedDefaultAllocator<32>_> *pTVar13;
  longlong *plVar14;
  bool bVar15;
  undefined1 uVar16;
  bool bVar17;
  char cVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_> *pTVar23;
  ulong64 uVar24;
  FFileManifest **ppFVar25;
  ulong64 uVar26;
  byte bVar27;
  uint uVar28;
  FStaticBasicLogRecord *pFVar29;
  uint uVar30;
  ulonglong uVar31;
  wchar_t *pwVar32;
  longlong lVar33;
  FChunkDataList *pFVar34;
  FScriptContainerElement *pFVar35;
  uint uVar36;
  uint *puVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  TArray<BuildPatchServices::FFileSpan,TSizedDefaultAllocator<32>_> *pTVar40;
  FScriptContainerElement *pFVar41;
  undefined1 auStackY_2d8 [32];
  undefined1 local_288;
  undefined1 local_287 [7];
  ForAnyElementType local_280;
  undefined8 local_278;
  undefined1 local_270 [4];
  uint local_26c;
  undefined8 local_268;
  TArray<BuildPatchServices::FChunkInfo,TSizedDefaultAllocator<32>_> *local_260;
  FBuildPatchAppManifest *local_258;
  longlong *local_250;
  uint uStack_248;
  uint uStack_244;
  TBitArray<FDefaultBitArrayAllocator> *local_240;
  undefined4 uStack_238;
  uint uStack_234;
  uint local_230;
  undefined4 uStack_22c;
  int iStack_228;
  undefined4 uStack_224;
  FString local_220;
  TArray<BuildPatchServices::FFileSpan,TSizedDefaultAllocator<32>_> *local_210;
  FString local_208;
  int local_1f8;
  int local_1f4;
  undefined1 local_1f0 [16];
  longlong *local_1e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d8;
  longlong *local_1b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1b0;
  undefined8 uStack_190;
  TStringView<wchar_t> local_188;
  TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_> local_170 [2];
  undefined4 local_144;
  undefined4 local_124;
  undefined1 local_118 [32];
  uint *local_f8;
  uint local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  int local_e4;
  ForElementType<FSetElementId> local_d8;
  int local_d0;
  undefined2 local_c8;
  char local_c6;
  undefined1 local_c0 [32];
  uint *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ForElementType<FSetElementId> local_80;
  int local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  ulonglong local_50;
  
  uVar12 = _UNK_150631d98;
  uVar4 = ___xmm_00000000ffffffff0000008000000000;
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  pFVar41 = (param_1->AllocatorInstance).Data;
  local_26c = param_1->ArrayNum;
  uVar31 = (ulonglong)(int)local_26c;
  local_118._0_8_ = 0;
  local_118._8_8_ = 0;
  local_258 = (FBuildPatchAppManifest *)(pFVar41 + uVar31 * 0x48);
  local_f8 = (uint *)0x0;
  local_f0 = 0;
  local_ec = 0x80;
  local_e8 = 0xffffffff;
  local_e4 = 0;
  local_d8 = (ForElementType<FSetElementId>)0x0;
  local_d0 = 0;
  local_268 = 1;
  local_260 = param_2;
  local_210 = param_1;
  local_1f0._8_8_ = this;
  while( true ) {
    pTVar40 = local_210;
    pFVar6 = local_258;
    uVar21 = (uint)local_268;
    if (local_210->ArrayNum != (int)uVar31) {
      local_288 = 0;
      `TCheckedPointerIterator<BuildPatchServices::FFileSpan_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_288);
    }
    if ((FBuildPatchAppManifest *)pFVar41 == pFVar6) break;
    if (*(int *)(pFVar41 + 8) == 0) {
      pwVar32 = L"";
      uVar19 = 0;
    }
    else {
      pwVar32 = *(wchar_t **)pFVar41;
      uVar19 = *(int *)(pFVar41 + 8) - 1;
    }
    uVar19 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar19,pwVar32);
    iVar20 = TSet<TTuple<FString,BuildPatchServices::FFileAttributes>,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FFileAttributes,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>
                       ((TSet<TTuple<FString,BuildPatchServices::FFileAttributes>,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FFileAttributes,0>,FDefaultSetAllocator>
                         *)&this->FileAttributesMap,uVar19,(FString *)pFVar41);
    if ((iVar20 == -1) ||
       (lVar33 = (longlong)iVar20 * 0x70 + *(longlong *)&this->FileAttributesMap, lVar33 == 0)) {
      local_c8 = 0;
      local_c6 = '\0';
      local_c0._0_8_ = (FScriptContainerElement *)0x0;
      local_c0._8_8_ = 0;
      local_a0 = (uint *)0x0;
      local_98 = uVar4;
      uStack_90 = uVar12;
      local_80 = (ForElementType<FSetElementId>)0x0;
      local_78 = 0;
    }
    else {
      local_c8 = *(undefined2 *)(lVar33 + 0x10);
      local_c6 = *(char *)(lVar33 + 0x12);
      local_c0._0_8_ = (FScriptContainerElement *)0x0;
      local_c0._8_8_ = 0;
      local_a0 = (uint *)0x0;
      local_98 = uVar4;
      uStack_90 = uVar12;
      local_80 = (ForElementType<FSetElementId>)0x0;
      local_78 = 0;
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
                ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_c0,
                 (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(lVar33 + 0x18));
    }
    pFVar6 = (this->Manifest).Object;
    iVar20 = (pFVar6->FileManifestList).FileList.ArrayNum;
    piVar3 = &(pFVar6->FileManifestList).FileList.ArrayMax;
    if (iVar20 == *piVar3) {
      iVar20 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x860,(ForAnyElementType *)&pFVar6->FileManifestList,piVar3);
    }
    (pFVar6->FileManifestList).FileList.ArrayNum = iVar20 + 1;
    DefaultConstructItems<BuildPatchServices::FFileManifest,int>
              ((pFVar6->FileManifestList).FileList.AllocatorInstance.Data + (longlong)iVar20 * 0x60,
               uVar21);
    pFVar6 = (this->Manifest).Object;
    iVar20 = (pFVar6->FileManifestList).FileList.ArrayNum;
    uVar30 = iVar20 - 1;
    uVar19 = 0;
    if ((int)uVar30 < iVar20) {
      uVar19 = ~uVar30 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar10 = (code *)swi(3);
      uVar16 = (*pcVar10)();
      return (bool)uVar16;
    }
    iVar20 = (pFVar6->FileManifestList).FileList.ArrayNum;
    pFVar7 = (pFVar6->FileManifestList).FileList.AllocatorInstance.Data;
    pFVar35 = pFVar7 + (longlong)iVar20 * 0x60 + -0x60;
    if (pFVar35 != pFVar41) {
      iVar22 = *(int *)(pFVar41 + 8);
      pFVar1 = pFVar7 + (longlong)iVar20 * 0x60 + -0x54;
      _Src = *(void **)pFVar41;
      iVar5 = *(int *)pFVar1;
      *(int *)(pFVar7 + (longlong)iVar20 * 0x60 + -0x58) = iVar22;
      if ((iVar22 == 0) && (iVar5 == 0)) {
        *(int *)pFVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar22,iVar5,(ForAnyElementType *)pFVar35,iVar22,(int *)pFVar1);
        if (iVar22 != 0) {
          memcpy(*(FScriptContainerElement **)&pFVar35->field_0x0,_Src,(longlong)iVar22 * 2);
        }
      }
      uVar21 = (uint)local_268;
    }
    uVar31 = 0;
    uVar36 = 0;
    uVar11 = *(undefined8 *)(pFVar41 + 0x28);
    local_280.Data = (FScriptContainerElement *)0x0;
    uVar19 = 0;
    local_278 = 0;
    *(undefined8 *)(pFVar7 + (longlong)iVar20 * 0x60 + -0x40) =
         *(undefined8 *)&pFVar41[0x20].field_0x0;
    *(undefined8 *)(pFVar7 + (longlong)iVar20 * 0x60 + -0x38) = uVar11;
    *(undefined4 *)(pFVar7 + (longlong)iVar20 * 0x60 + -0x30) =
         *(undefined4 *)&pFVar41[0x30].field_0x0;
    uVar30 = local_c0._8_4_ - uStack_90._4_4_;
    if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar30);
    }
    uVar38 = uVar31;
    if (0 < (int)uVar30) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar30,&local_280,0,(int *)((longlong)&local_278 + 4));
      uVar38 = local_278 & 0xffffffff;
    }
    uVar30 = (uint)uVar38;
    local_230 = uVar19;
    if ((int)local_98 != 0) {
      puVar37 = (uint *)(local_c0 + 0x10);
      if (local_a0 != (uint *)0x0) {
        puVar37 = local_a0;
      }
      uVar28 = *puVar37;
      uVar39 = uVar31;
      local_230 = uVar36;
      uVar19 = uVar36;
      while (uVar28 == 0) {
        iVar22 = (int)uVar31;
        local_230 = (int)uVar39 + 0x20;
        uVar39 = (ulonglong)local_230;
        uVar19 = iVar22 + 1;
        uVar31 = (ulonglong)uVar19;
        if ((int)((int)local_98 + -1 + ((int)local_98 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar19) {
          uVar31 = local_98 & 0xffffffff;
          goto LAB_143250bfd;
        }
        uVar28 = (puVar37 + 1)[iVar22];
      }
      uVar21 = -uVar28 & uVar28;
      uVar31 = (ulonglong)uVar21 * 2 + 1;
      lVar33 = 0x3f;
      if (uVar31 != 0) {
        for (; uVar31 >> lVar33 == 0; lVar33 = lVar33 + -1) {
        }
      }
      local_1f8 = (int)lVar33;
      uVar28 = local_1f8 + -1 + local_230;
      uVar31 = (ulonglong)uVar28;
      if ((int)local_98 < (int)uVar28) {
        uVar31 = local_98 & 0xffffffff;
      }
    }
LAB_143250bfd:
    local_250 = (longlong *)local_c0;
    local_240 = (TBitArray<FDefaultBitArrayAllocator> *)(local_c0 + 0x10);
    uStack_238 = 0xffffffff;
    uStack_234 = (uint)uVar31;
    uStack_22c = local_144;
    TStack_1d8._padding_ = CONCAT44(uVar21,uVar19);
    TStack_1d8.CurrentBitIndex = uStack_234;
    TStack_1d8.UnvisitedBitMask = 0xffffffff;
    TStack_1d8._28_4_ = local_144;
    TStack_1d8.BaseBitIndex = local_230;
    uStack_248 = uVar19;
    uStack_244 = uVar21;
    local_1e0 = local_250;
    TStack_1d8.Array = local_240;
    if ((int)uStack_234 < (int)local_98) {
      do {
        pFVar35 = (FScriptContainerElement *)(*local_1e0 + (longlong)(int)uVar31 * 0x18);
        iVar22 = (int)uVar38;
        if ((local_280.Data <= pFVar35) &&
           (pFVar35 < local_280.Data + (longlong)local_278._4_4_ * 0x10)) {
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar15) {
            pcVar10 = (code *)swi(3);
            uVar16 = (*pcVar10)();
            return (bool)uVar16;
          }
          iVar22 = (int)local_278;
        }
        if (iVar22 == local_278._4_4_) {
          iVar22 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_280,(int *)((longlong)&local_278 + 4));
        }
        local_278 = CONCAT44(local_278._4_4_,iVar22 + 1);
        ::FString::FString((FString *)(local_280.Data + (longlong)iVar22 * 0x10),(FString *)pFVar35)
        ;
        TStack_1d8.UnvisitedBitMask = TStack_1d8.UnvisitedBitMask & ~TStack_1d8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d8);
        uVar31 = (ulonglong)(uint)TStack_1d8.CurrentBitIndex;
        uVar38 = local_278 & 0xffffffff;
        uVar30 = (uint)local_278;
      } while (TStack_1d8.CurrentBitIndex < (TStack_1d8.Array)->NumBits);
    }
    pFVar35 = pFVar7 + (longlong)iVar20 * 0x60 + -0x28;
    if (pFVar35 != (FScriptContainerElement *)&local_280) {
      DestructItems<FString,int>
                (*(FString **)&pFVar35->field_0x0,*(int *)(pFVar7 + (longlong)iVar20 * 0x60 + -0x20)
                );
      if (*(void **)&pFVar35->field_0x0 != (void *)0x0) {
        FMemory::Free(*(void **)&pFVar35->field_0x0);
      }
      *(FScriptContainerElement **)&pFVar35->field_0x0 = local_280.Data;
      *(int *)(pFVar7 + (longlong)iVar20 * 0x60 + -0x20) = (int)local_278;
      *(int *)(pFVar7 + (longlong)iVar20 * 0x60 + -0x1c) = local_278._4_4_;
      local_278 = 0;
      local_280.Data = (FScriptContainerElement *)0x0;
      uVar30 = uVar36;
    }
    DestructItems<FString,int>((FString *)local_280.Data,uVar30);
    if (local_280.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_280.Data);
    }
    pFVar35 = pFVar7 + (longlong)iVar20 * 0x60 + -0x50;
    if (pFVar35 != pFVar41 + 0x38) {
      iVar22 = *(int *)&pFVar41[0x40].field_0x0;
      pFVar1 = pFVar7 + (longlong)iVar20 * 0x60 + -0x44;
                    /* WARNING: Load size is inaccurate */
      _Src_00.Data = pFVar41[0x38];
      iVar5 = *(int *)pFVar1;
      *(int *)(pFVar7 + (longlong)iVar20 * 0x60 + -0x48) = iVar22;
      if ((iVar22 == 0) && (iVar5 == 0)) {
        *(int *)pFVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar22,iVar5,(ForAnyElementType *)pFVar35,iVar22,(int *)pFVar1);
        if (iVar22 != 0) {
          memcpy(*(FScriptContainerElement **)&pFVar35->field_0x0,_Src_00.Data,(longlong)iVar22 * 2)
          ;
        }
      }
    }
    if ((char)local_c8 != '\0') {
      pFVar7[(longlong)iVar20 * 0x60 + -0x2c] =
           (FScriptContainerElement)((byte)pFVar7[(longlong)iVar20 * 0x60 + -0x2c] | 1);
    }
    if (local_c8._1_1_ != '\0') {
      pFVar7[(longlong)iVar20 * 0x60 + -0x2c] =
           (FScriptContainerElement)((byte)pFVar7[(longlong)iVar20 * 0x60 + -0x2c] | 2);
    }
    if ((local_c6 != '\0') || (pFVar41[0x34] != (FScriptContainerElement)0x0)) {
      pFVar7[(longlong)iVar20 * 0x60 + -0x2c] =
           (FScriptContainerElement)((byte)pFVar7[(longlong)iVar20 * 0x60 + -0x2c] | 4);
    }
    pTVar23 = GetChunkPartsForFile
                        (this,local_170,*(ulong64 *)(pFVar41 + 0x18),
                         *(ulong64 *)&pFVar41[0x10].field_0x0,
                         (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)local_118);
    pTVar2 = (TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_> *)
             (pFVar7 + (longlong)iVar20 * 0x60 + -0x18);
    if (pTVar2 != pTVar23) {
      pFVar35 = (pTVar2->AllocatorInstance).Data;
      if (pFVar35 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar35);
      }
      (pTVar2->AllocatorInstance).Data = (pTVar23->AllocatorInstance).Data;
      (pTVar23->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar7 + (longlong)iVar20 * 0x60 + -0x10) = pTVar23->ArrayNum;
      *(int *)(pFVar7 + (longlong)iVar20 * 0x60 + -0xc) = pTVar23->ArrayMax;
      pTVar23->ArrayNum = 0;
      pTVar23->ArrayMax = 0;
    }
    if (local_170[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170[0].AllocatorInstance.Data);
    }
    local_78 = 0;
    if (local_80 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_80);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_c0,0,local_c0._8_4_);
    bVar15 = local_c0._12_4_ != 0;
    local_c0._8_8_ = (ulonglong)(uint)local_c0._12_4_ << 0x20;
    if (bVar15) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)local_c0,0,(int *)(local_c0 + 0xc));
    }
    uVar21 = local_98._4_4_;
    uStack_90 = 0xffffffff;
    local_98 = (ulonglong)local_98._4_4_ << 0x20;
    if (0x80 < uVar21) {
      local_98 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_c0 + 0x10),0);
    }
    if (local_a0 != (uint *)0x0) {
      FMemory::Free(local_a0);
    }
    if ((FScriptContainerElement *)local_c0._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_c0._0_8_);
    }
    uVar31 = (ulonglong)local_26c;
    pFVar41 = pFVar41 + 0x48;
  }
  if (5 < (byte)LogManifestBuilder._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogManifestBuilder);
  }
  pTVar13 = local_260;
  pFVar6 = (this->Manifest).Object;
  pFVar34 = &pFVar6->ChunkDataList;
  if (&pFVar34->ChunkList != local_260) {
    pFVar41 = (pFVar34->ChunkList).AllocatorInstance.Data;
    if (pFVar41 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar41);
    }
    (pFVar34->ChunkList).AllocatorInstance.Data = (pTVar13->AllocatorInstance).Data;
    (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (pFVar6->ChunkDataList).ChunkList.ArrayNum = pTVar13->ArrayNum;
    (pFVar6->ChunkDataList).ChunkList.ArrayMax = pTVar13->ArrayMax;
    pTVar13->ArrayNum = 0;
    pTVar13->ArrayMax = 0;
  }
  local_258 = (this->Manifest).Object;
  iVar20 = (local_258->ChunkDataList).ChunkList.ArrayNum;
  if (iVar20 != 0) {
    pFVar8 = (FGuid *)(local_258->ChunkDataList).ChunkList.AllocatorInstance.Data;
    uVar30 = 0;
    uVar21 = 0;
    uVar24 = CityHash64((char *)pFVar8,0x10);
    iVar22 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindIndexByHash<FGuid>
                       ((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)local_118,
                        (uint)uVar24,pFVar8);
    bVar15 = iVar22 != -1;
    uVar19 = uVar21;
joined_r0x00014325102a:
    do {
      local_26c = uVar19;
      uVar21 = uVar21 + 1;
      if ((int)uVar21 < iVar20) {
        uVar24 = CityHash64((char *)(pFVar8 + (longlong)(int)uVar21 * 4),0x10);
        iVar22 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindIndexByHash<FGuid>
                           ((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)local_118,
                            (uint)uVar24,pFVar8 + (longlong)(int)uVar21 * 4);
        uVar19 = local_26c;
        if (bVar15 == (iVar22 != -1)) goto joined_r0x00014325102a;
      }
      iVar22 = uVar21 - local_26c;
      if (bVar15 != false) {
        if (uVar30 != local_26c) {
          memmove(pFVar8 + (longlong)(int)uVar30 * 4,pFVar8 + (longlong)(int)local_26c * 4,
                  (longlong)iVar22 << 6);
        }
        uVar30 = uVar30 + iVar22;
      }
      bVar15 = (bool)(bVar15 ^ 1);
      uVar19 = uVar21;
    } while ((int)uVar21 < iVar20);
    (local_258->ChunkDataList).ChunkList.ArrayNum = uVar30;
    this = (FManifestBuilder *)local_1f0._8_8_;
    pTVar40 = local_210;
  }
  if (5 < (byte)LogManifestBuilder._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogManifestBuilder);
  }
  FFileManifestList::OnPostLoad(&((this->Manifest).Object)->FileManifestList);
  FBuildPatchAppManifest::InitLookups((this->Manifest).Object);
  iVar20 = pTVar40->ArrayNum;
  pFVar35 = (pTVar40->AllocatorInstance).Data;
  pFVar41 = pFVar35 + (longlong)iVar20 * 0x48;
  while( true ) {
    if (pTVar40->ArrayNum != iVar20) {
      local_287[0] = 0;
      `TCheckedPointerIterator<BuildPatchServices::FFileSpan_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_287);
    }
    uVar21 = local_f0;
    if (pFVar35 == pFVar41) break;
    local_188.DataPtr = *(wchar_t **)pFVar35;
    local_188.Size = *(int *)(pFVar35 + 8) + -1;
    if (*(int *)(pFVar35 + 8) == 0) {
      local_188.Size = 0;
    }
    ppFVar25 = TMapBase<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*,0>_>
               ::FindChecked((TMapBase<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*,0>_>
                              *)&((this->Manifest).Object)->FileManifestLookup,&local_188);
    if (((*ppFVar25)->FileSize != *(ulong64 *)(pFVar35 + 0x10)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Manifest->FileManifestLookup[FileSpan.Filename]->FileSize == FileSpan.Size"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Generation\\ManifestBuilder.cpp"
                            ,0x9f,L""), bVar15)) {
      pcVar10 = (code *)swi(3);
      uVar16 = (*pcVar10)();
      return (bool)uVar16;
    }
    pFVar35 = pFVar35 + 0x48;
  }
  bVar15 = true;
  uStack_248 = 0;
  local_230 = 0;
  uStack_234 = 0;
  if (local_f0 == 0) {
LAB_143251221:
    uStack_244 = (uint)local_268;
  }
  else {
    puVar37 = (uint *)(local_118 + 0x10);
    if (local_f8 != (uint *)0x0) {
      puVar37 = local_f8;
    }
    uStack_244 = *puVar37;
    while (uStack_244 == 0) {
      lVar33 = (longlong)(int)uStack_248;
      local_230 = local_230 + 0x20;
      uStack_248 = uStack_248 + 1;
      uStack_234 = local_f0;
      if ((int)((local_f0 - 1) + ((int)(local_f0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_248)
      goto LAB_143251221;
      uStack_244 = puVar37[lVar33 + 1];
    }
    uStack_244 = -uStack_244 & uStack_244;
    uVar4 = (ulonglong)uStack_244 * 2 + 1;
    lVar33 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar33 == 0; lVar33 = lVar33 + -1) {
      }
    }
    local_1f4 = (int)lVar33;
    uStack_234 = local_230 + -1 + local_1f4;
    if ((int)local_f0 < (int)uStack_234) {
      uStack_234 = local_f0;
    }
  }
  local_250 = (longlong *)local_118;
  uStack_22c = local_124;
  local_240 = (TBitArray<FDefaultBitArrayAllocator> *)(local_118 + 0x10);
  uVar19 = local_f0 & 0xffffffe0;
  iStack_228 = local_118._8_4_ - local_e4;
  uStack_238 = 0xffffffff;
  TStack_1b0.CurrentBitIndex = uStack_234;
  TStack_1b0.UnvisitedBitMask = 0xffffffff;
  TStack_1b0._padding_ = CONCAT44(uStack_244,uStack_248);
  iVar20 = (int)local_f0 >> 5;
  TStack_1b0._28_4_ = local_124;
  TStack_1b0.BaseBitIndex = local_230;
  uStack_190 = CONCAT44(uStack_224,iStack_228);
  bVar27 = (byte)local_f0;
  local_1b8 = local_250;
  TStack_1b0.Array = local_240;
  if (((int)local_f0 < 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar17)) {
    pcVar10 = (code *)swi(3);
    uVar16 = (*pcVar10)();
    return (bool)uVar16;
  }
  if (uVar21 != local_f0) {
    puVar37 = (uint *)(local_118 + 0x10);
    if (local_f8 != (uint *)0x0) {
      puVar37 = local_f8;
    }
    uVar21 = -1 << (bVar27 & 0x1f) & puVar37[iVar20];
    while (uVar21 == 0) {
      lVar33 = (longlong)iVar20;
      uVar19 = uVar19 + 0x20;
      iVar20 = iVar20 + 1;
      uVar21 = local_f0;
      if ((int)((local_f0 - 1) + ((int)(local_f0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
      goto LAB_143251333;
      uVar21 = puVar37[lVar33 + 1];
    }
    uVar4 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar33 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar33 == 0; lVar33 = lVar33 + -1) {
      }
    }
    uVar21 = (uVar19 - 1) + (int)lVar33;
    if ((int)local_f0 < (int)uVar21) {
      uVar21 = local_f0;
    }
  }
LAB_143251333:
  while( true ) {
    plVar14 = local_1b8;
    if ((int)local_1b8[1] - *(int *)((longlong)local_1b8 + 0x34) != (int)uStack_190) {
      `TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_270);
    }
    if (((TStack_1b0.CurrentBitIndex == uVar21) &&
        (TStack_1b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_118 + 0x10))) &&
       (plVar14 == (longlong *)local_118)) break;
    pFVar8 = (FGuid *)(*plVar14 + (longlong)TStack_1b0.CurrentBitIndex * 0x18);
    pFVar6 = (this->Manifest).Object;
    cVar18 = (**(code **)(pFVar6->_padding_ + 0x208))(pFVar6,pFVar8);
    if (cVar18 == '\0') {
      if (1 < (byte)LogManifestBuilder._0_1_) {
        local_220.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_220.Data.ArrayNum = 0;
        local_220.Data.ArrayMax = 0;
        FGuid::AppendString(pFVar8,&local_220,Digits);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogManifestBuilder);
        if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_220.Data.AllocatorInstance.Data);
        }
      }
      bVar15 = false;
    }
    TStack_1b0.UnvisitedBitMask = TStack_1b0.UnvisitedBitMask & ~TStack_1b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1b0);
  }
  if (!bVar15) goto LAB_143251553;
  pFVar6 = (this->Manifest).Object;
  if ((*(int *)&(pFVar6->ManifestMeta).PrereqIds.Elements.field_0x8 ==
       *(int *)&(pFVar6->ManifestMeta).PrereqIds.Elements.field_0x34) &&
     (1 < (pFVar6->ManifestMeta).PrereqPath.Data.ArrayNum)) {
    if (4 < (byte)LogManifestBuilder._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogManifestBuilder);
    }
    pFVar6 = (this->Manifest).Object;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    (**(code **)(pFVar6->_padding_ + 0xb8))(pFVar6,&(pFVar6->ManifestMeta).PrereqPath,&local_68);
    pFVar6 = (this->Manifest).Object;
    local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_208.Data.ArrayNum = 0;
    local_208.Data.ArrayMax = 0;
    BytesToHex((uchar *)&local_68,0x14,&local_208);
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
              (&(pFVar6->ManifestMeta).PrereqIds,(FString *)local_1f0,(bool *)&local_208);
    if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data.AllocatorInstance.Data);
    }
  }
  uVar24 = 0;
  pFVar9 = (this->BuildStructureAdded).Head;
  if (pFVar9 == (FBlockEntry *)0x0) {
    bVar15 = true;
LAB_1432514f3:
    if ((this->Config).bAllowEmptyBuilds != false) goto LAB_14325150c;
    if ((byte)LogManifestBuilder._0_1_ < 2) goto LAB_143251553;
    pFVar29 = &::LOG_Static;
  }
  else {
    bVar15 = pFVar9->Next == (FBlockEntry *)0x0;
    uVar24 = pFVar9->Size;
    if (uVar24 == 0) goto LAB_1432514f3;
LAB_14325150c:
    if (bVar15) {
      uVar26 = (**(code **)(((this->Manifest).Object)->_padding_ + 0x78))();
      if (uVar24 == uVar26) {
        this->bFinalizationSucceeded = true;
        local_d0 = 0;
        if (local_d8 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_d8);
        }
        TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_118);
        pFVar41 = (local_260->AllocatorInstance).Data;
        if (pFVar41 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar41);
        }
        return true;
      }
      if ((byte)LogManifestBuilder._0_1_ < 2) goto LAB_143251553;
      pFVar29 = &::LOG_Static;
    }
    else {
      if ((byte)LogManifestBuilder._0_1_ < 2) goto LAB_143251553;
      pFVar29 = (FStaticBasicLogRecord *)&PTR_u_Build_structure_150a7de48;
    }
  }
  UE::Logging::Private::BasicLog<2>(pFVar29,(FLogCategoryBase *)&LogManifestBuilder);
LAB_143251553:
  local_d0 = 0;
  if (local_d8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_d8);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_118);
  pFVar41 = (local_260->AllocatorInstance).Data;
  if (pFVar41 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar41);
  }
  return false;
}

// GetChunkPartsForFile @ 143254d30

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_> * __thiscall
BuildPatchServices::FManifestBuilder::GetChunkPartsForFile
          (FManifestBuilder *this,
          TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_> *__return_storage_ptr__
          ,ulong64 param_1,ulong64 param_2,
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_3)

{
  ulong64 *puVar1;
  FFileBlock *pFVar2;
  uint uVar3;
  ulonglong *puVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  TMap<FGuid,TArray<BuildPatchServices::FBlockStructure,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<BuildPatchServices::FBlockStructure,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar9;
  bool bVar10;
  TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_> *pTVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  undefined8 *puVar16;
  ForAnyElementType FVar17;
  uint uVar18;
  uint uVar19;
  bool *pbVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  ForElementType<unsigned_int> FVar24;
  uint *puVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulong64 uVar28;
  undefined1 local_res8 [8];
  TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_> *local_res10;
  undefined1 local_res18 [8];
  ulonglong local_res20;
  undefined1 local_108 [8];
  ForAnyElementType local_100;
  uint local_f8;
  uint uStack_f4;
  undefined1 local_f0 [4];
  uint local_ec;
  ForElementType<unsigned_int> local_e8;
  uint local_e0;
  bool *local_d8;
  undefined8 *local_d0;
  TMap<FGuid,TArray<BuildPatchServices::FBlockStructure,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<BuildPatchServices::FBlockStructure,TSizedDefaultAllocator<32>_>,0>_>
  *local_c8;
  uint uStack_c0;
  uint uStack_bc;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  uint uStack_ac;
  uint local_a8;
  uint uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  int local_98;
  int local_94;
  undefined1 local_90 [16];
  undefined8 *local_80;
  TMap<FGuid,TArray<BuildPatchServices::FBlockStructure,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<BuildPatchServices::FBlockStructure,TSizedDefaultAllocator<32>_>,0>_>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  uVar14 = param_1 + param_2;
  uVar27 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  uVar26 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  uStack_c0 = 0;
  local_e8 = (ForElementType<unsigned_int>)&(this->AllMatches).field_0x10;
  local_100.Data = (FScriptContainerElement *)0x0;
  local_f8 = 0;
  uStack_f4 = 0;
  local_c8 = &this->AllMatches;
  uVar3 = *(uint *)&(this->AllMatches).field_0x28;
  uStack_bc = 1;
  local_a8 = 0;
  uStack_ac = uStack_c0;
  if (uVar3 != 0) {
    puVar25 = *(uint **)&(this->AllMatches).field_0x20;
    if (puVar25 == (uint *)0x0) {
      puVar25 = (uint *)&(this->AllMatches).field_0x10;
    }
    uVar19 = *puVar25;
    uVar23 = uVar27;
    uVar21 = uVar27;
    local_a8 = 0;
    uStack_c0 = 0;
    while (uVar19 == 0) {
      iVar15 = (int)uVar23;
      local_a8 = (int)uVar21 + 0x20;
      uVar21 = (ulonglong)local_a8;
      uStack_c0 = iVar15 + 1;
      uVar23 = (ulonglong)uStack_c0;
      uStack_ac = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_c0)
      goto LAB_143254e14;
      uVar19 = puVar25[(longlong)iVar15 + 1];
    }
    uStack_bc = -uVar19 & uVar19;
    uVar23 = (ulonglong)uStack_bc * 2 + 1;
    lVar12 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_98 = (int)lVar12;
    uStack_ac = (local_a8 - 1) + local_98;
    if ((int)uVar3 < (int)uStack_ac) {
      uStack_ac = uVar3;
    }
  }
LAB_143254e14:
  local_b8 = &(this->AllMatches).field_0x10;
  iStack_a0 = *(int *)&(this->AllMatches).field_0x8 - *(int *)&(this->AllMatches).field_0x34;
  uVar19 = *(uint *)&(this->AllMatches).field_0x28;
  uStack_b0 = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uStack_bc,uStack_c0);
  uVar18 = uVar19 & 0xffffffe0;
  TStack_70.CurrentBitIndex = uStack_ac;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar19 >> 5;
  TStack_70._28_4_ = uStack_ac;
  TStack_70.BaseBitIndex = local_a8;
  uStack_50 = CONCAT44(uStack_9c,iStack_a0);
  local_res10 = __return_storage_ptr__;
  local_res20 = param_2;
  local_ec = uVar19;
  uStack_a4 = uStack_ac;
  local_90._8_8_ = local_c8;
  local_78 = local_c8;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_b8;
  if ((((int)uVar19 < 0) || ((int)uVar3 < (int)uVar19)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
    return pTVar11;
  }
  uVar3 = *(int *)((longlong)local_e8 + 0x18);
  if (uVar19 != uVar3) {
    FVar24 = *(ForElementType<unsigned_int> *)((longlong)local_e8 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_e8 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar24 = local_e8;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)((longlong)FVar24 + (longlong)iVar15 * 4);
    while (uVar27 = uVar26, uVar19 == 0) {
      lVar12 = (longlong)iVar15;
      uVar18 = uVar18 + 0x20;
      iVar15 = iVar15 + 1;
      uVar19 = uVar3;
      local_ec = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_143254f30;
      uVar19 = *(uint *)((undefined1 *)((longlong)FVar24 + 4) + lVar12 * 4);
    }
    uVar26 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_94 = (int)lVar12;
    uVar19 = local_94 + -1 + uVar18;
    local_ec = uVar19;
    if ((int)uVar3 < (int)uVar19) {
      uVar19 = uVar3;
      local_ec = uVar3;
    }
  }
LAB_143254f30:
  do {
    pTVar9 = local_78;
    if (*(int *)&local_78->field_0x8 - *(int *)&local_78->field_0x34 != (int)uStack_50) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FGuid,TArray<BuildPatchServices::FBlockStructure,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    lVar12 = (longlong)TStack_70.CurrentBitIndex;
    if (((TStack_70.CurrentBitIndex == uVar19) &&
        ((ForElementType<unsigned_int>)TStack_70.Array == local_e8)) &&
       (pTVar9 == (TMap<FGuid,TArray<BuildPatchServices::FBlockStructure,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<BuildPatchServices::FBlockStructure,TSizedDefaultAllocator<32>_>,0>_>
                   *)local_90._8_8_)) {
      if ((uVar27 != local_res20) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("SizeCountCheck == FileSize",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Generation\\ManifestBuilder.cpp"
                              ,0x10a,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        pTVar11 = (TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar11;
      }
      AlgoImpl::
      IntroSortInternal<BuildPatchServices::FFileBlock,int,FIdentityFunctor,TDereferenceWrapper<BuildPatchServices::FFileBlock,_BuildPatchServices::FManifestBuilder::GetChunkPartsForFile_::__l2::FFileBlockSort>_>
                ((FFileBlock *)local_100.Data,local_f8,local_res20._0_1_,(FFileBlockSort *)local_f0)
      ;
      uVar3 = local_f8;
      pTVar11 = local_res10;
      uVar14 = (ulonglong)(int)local_f8;
      pFVar2 = (FFileBlock *)(local_100.Data + uVar14 * 0x28);
      FVar17.Data = local_100.Data;
      while( true ) {
        if ((uint)uVar14 != uVar3) {
          local_108[0] = 0;
          `TCheckedPointerIterator<BuildPatchServices::FFileBlock,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_108);
        }
        if ((FFileBlock *)FVar17.Data == pFVar2) break;
        iVar15 = pTVar11->ArrayNum;
        if (iVar15 == pTVar11->ArrayMax) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x418,&pTVar11->AllocatorInstance,&pTVar11->ArrayMax);
        }
        pTVar11->ArrayNum = iVar15 + 1;
        DefaultConstructItems<BuildPatchServices::FChunkPart,int>
                  ((pTVar11->AllocatorInstance).Data + (longlong)iVar15 * 0x18,1);
        uVar18 = pTVar11->ArrayNum - 1;
        uVar19 = 0;
        if ((int)uVar18 < pTVar11->ArrayNum) {
          uVar19 = ~uVar18 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          pTVar11 = (TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_> *)
                    (*pcVar6)();
          return pTVar11;
        }
        lVar12 = (longlong)pTVar11->ArrayNum;
        uVar7 = *(undefined8 *)&(((FFileBlock *)FVar17.Data)->ChunkGuid).C;
        pFVar5 = (pTVar11->AllocatorInstance).Data;
        *(undefined8 *)(pFVar5 + lVar12 * 0x18 + -0x18) =
             *(undefined8 *)&((FFileBlock *)FVar17.Data)->ChunkGuid;
        *(undefined8 *)(pFVar5 + lVar12 * 0x18 + -0x18 + 8) = uVar7;
        *(int *)(pFVar5 + lVar12 * 0x18 + -8) = (int)((FFileBlock *)FVar17.Data)->ChunkOffset;
        puVar1 = &((FFileBlock *)FVar17.Data)->Size;
        FVar17.Data = FVar17.Data + 0x28;
        *(int *)(pFVar5 + lVar12 * 0x18 + -4) = (int)*puVar1;
        uVar14 = (ulonglong)local_f8;
      }
      if ((FFileBlock *)local_100.Data != (FFileBlock *)0x0) {
        FMemory::Free(local_100.Data);
      }
      return pTVar11;
    }
    lVar22 = *(longlong *)pTVar9;
    puVar16 = *(undefined8 **)(lVar22 + 0x10 + lVar12 * 0x28);
    pbVar20 = (bool *)(lVar22 + lVar12 * 0x28);
    local_e0 = *(uint *)(lVar22 + 0x18 + lVar12 * 0x28);
    uVar26 = (ulonglong)(int)local_e0;
    local_80 = puVar16 + uVar26 * 2;
    local_d8 = pbVar20;
    while( true ) {
      puVar8 = local_80;
      local_d0 = puVar16;
      if (*(int *)(pbVar20 + 0x18) != (int)uVar26) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<BuildPatchServices::FBlockStructure_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res18);
      }
      if (puVar16 == puVar8) break;
      lVar12 = 0;
      for (puVar4 = (ulonglong *)*puVar16; puVar4 != (ulonglong *)0x0;
          puVar4 = (ulonglong *)puVar4[3]) {
        uVar23 = *puVar4;
        uVar26 = puVar4[1] + uVar23;
        if ((uVar23 < uVar14) && (param_1 < uVar26)) {
          uVar28 = param_1;
          if (param_1 < uVar23) {
            uVar28 = uVar23;
          }
          uVar21 = uVar14;
          if (uVar26 < uVar14) {
            uVar21 = uVar26;
          }
          lVar12 = lVar12 + (uVar28 - uVar23);
          lVar22 = uVar21 - uVar28;
          if ((lVar22 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IntersectSize > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Generation\\ManifestBuilder.cpp"
                                  ,0xfc,L""), bVar10)) {
            pcVar6 = (code *)swi(3);
            pTVar11 = (TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_> *)
                      (*pcVar6)();
            return pTVar11;
          }
          uVar27 = uVar27 + lVar22;
          if (local_f8 == uStack_f4) {
            local_f8 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x828,&local_100,(int *)&uStack_f4);
          }
          lVar13 = (longlong)(int)local_f8;
          local_f8 = local_f8 + 1;
          uVar7 = *(undefined8 *)(local_d8 + 8);
          *(undefined8 *)&local_100.Data[lVar13 * 0x28].field_0x0 = *(undefined8 *)local_d8;
          *(undefined8 *)(local_100.Data + lVar13 * 0x28 + 8) = uVar7;
          *(ulong64 *)(local_100.Data + lVar13 * 0x28 + 0x10) = uVar28;
          *(longlong *)(local_100.Data + lVar13 * 0x28 + 0x18) = lVar12;
          *(longlong *)(local_100.Data + lVar13 * 0x28 + 0x20) = lVar22;
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                    (param_3,(FGuid *)local_90,local_d8);
          lVar12 = lVar12 + (puVar4[1] - uVar28) + *puVar4;
        }
        else {
          lVar12 = lVar12 + puVar4[1];
        }
        pbVar20 = local_d8;
      }
      puVar16 = local_d0 + 2;
      uVar26 = (ulonglong)local_e0;
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    uVar19 = local_ec;
  } while( true );
}

// SaveToFile @ 143266070

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
BuildPatchServices::FManifestBuilder::SaveToFile(FManifestBuilder *this,FString *param_1)

{
  FBuildPatchAppManifest *pFVar1;
  char cVar2;
  char cVar3;
  wchar_t *pwVar4;
  bool bVar5;
  ForAnyElementType FVar6;
  FString local_18;
  
  if (this->bFinalizationSucceeded != false) {
    ::FString::ConcatFC(&local_18,param_1,L"tmp");
    pFVar1 = (this->Manifest).Object;
    cVar2 = (**(code **)(pFVar1->_padding_ + 0x170))
                      (pFVar1,&local_18,(pFVar1->ManifestMeta).FeatureLevel);
    pwVar4 = L"";
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar6.Data = local_18.Data.AllocatorInstance.Data;
    }
    if ((param_1->Data).ArrayNum != 0) {
      pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    cVar3 = (**(code **)((longlong)*this->FileSystem + 0x70))(this->FileSystem,pwVar4,FVar6.Data);
    if ((cVar3 == '\0') || (cVar2 == '\0')) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return bVar5;
  }
  if (1 < (byte)LogManifestBuilder._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogManifestBuilder);
  }
  return false;
}

