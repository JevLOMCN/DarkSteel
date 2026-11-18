// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetTags
// Functions: 25

// `dynamic_initializer_for_'LogAssetTags'' @ 14144fd20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAssetTags__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogAssetTags,L"LogAssetTags",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogAssetTags__);
  return;
}

// `dynamic_initializer_for_'ModuleName'' @ 14144fd60

void __cdecl AssetRegistryConstants::_dynamic_initializer_for__ModuleName__(void)

{
  ::FName::FName(&ModuleName,"AssetRegistry");
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantAssetTags'' @ 14144fd80

void __cdecl _dynamic_initializer_for__ModuleRegistrantAssetTags__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "AssetTags";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"AssetTags",9);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FDefaultModuleImpl>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AssetTags_Source_AssetTags_Public_AssetTagsSubsystem_h__Script_AssetTags_1536527727'' @ 14144fdd0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AssetTags_Source_AssetTags_Public_AssetTagsSubsystem_h__Script_AssetTags_1536527727__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AssetTags",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AssetTags_Source_AssetTags_Public_AssetTagsSubsystem_h__Script_AssetTags_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_AssetTags'' @ 14144fe10

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_AssetTags__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xbbcb69dd;
  local_res8[0].DeclarationsHash = 0x436b7146;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_AssetTags,L"/Script/AssetTags",
             &Z_Registration_Info_UPackage__Script_AssetTags,local_res8);
  return;
}

// Z_Construct_UClass_UAssetTagsSubsystem @ 14f00f680

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAssetTagsSubsystem(void)

{
  if (Z_Registration_Info_UClass_UAssetTagsSubsystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAssetTagsSubsystem.OuterSingleton,
               &Z_Construct_UClass_UAssetTagsSubsystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAssetTagsSubsystem.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 14f00f6c0

void __cdecl
Z_Construct_UFunction_UAssetTagsSubsystem_CollectionExists_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UAssetTagsSubsystem_CollectionExists @ 14f00f6d0

UFunction * __cdecl Z_Construct_UFunction_UAssetTagsSubsystem_CollectionExists(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAssetTagsSubsystem_CollectionExists_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAssetTagsSubsystem_GetAssetsInCollection @ 14f00f710

UFunction * __cdecl Z_Construct_UFunction_UAssetTagsSubsystem_GetAssetsInCollection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAssetTagsSubsystem_GetAssetsInCollection_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UPackage__Script_AssetTags @ 14f00f750

UPackage * __cdecl Z_Construct_UPackage__Script_AssetTags(void)

{
  if (Z_Registration_Info_UPackage__Script_AssetTags.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_AssetTags.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_AssetTags.OuterSingleton;
}

// Z_Construct_UFunction_UAssetTagsSubsystem_GetCollections @ 14f00f790

UFunction * __cdecl Z_Construct_UFunction_UAssetTagsSubsystem_GetCollections(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAssetTagsSubsystem_GetCollections_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAsset @ 14f00f890

UFunction * __cdecl Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAsset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAsset_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetData @ 14f00f8d0

UFunction * __cdecl
Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetData_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetPtr @ 14f00f910

UFunction * __cdecl Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetPtr(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetPtr_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAssetTagsSubsystem_K2_GetCollectionsContainingAsset @ 14f00f950

UFunction * __cdecl Z_Construct_UFunction_UAssetTagsSubsystem_K2_GetCollectionsContainingAsset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAssetTagsSubsystem_K2_GetCollectionsContainingAsset_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// HeapSortInternal<FAssetData,int,FIdentityFunctor,TDereferenceWrapper<FAssetData,TLess<void>_>_> @ 14f00f990

void __cdecl
AlgoImpl::
HeapSortInternal<FAssetData,int,FIdentityFunctor,TDereferenceWrapper<FAssetData,TLess<void>_>_>
          (FAssetData *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FAssetData,TLess<void>_> param_4)

{
  code *pcVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  FName FVar5;
  FName FVar6;
  FName FVar7;
  FName FVar8;
  FAssetDataTagMapSharedView_u_0 FVar9;
  FAssetBundleData *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  undefined8 uVar12;
  ForElementType<int> FVar13;
  FAssetDataTagMapSharedView_u_0 FVar14;
  TReferenceControllerBase<1> *pTVar15;
  ForElementType<int> FVar16;
  uint uVar17;
  FSetElementId FVar18;
  uint uVar19;
  int iVar20;
  bool bVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  FAssetData *pFVar26;
  FAssetData *pFVar27;
  FAssetData *pFVar28;
  int iVar29;
  FAssetData *pFVar30;
  FAssetData *pFVar31;
  int iVar32;
  longlong lVar33;
  
  if (param_2 < 0) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar21) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar21) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar22 = (param_2 + -2) / 2;
  iVar24 = iVar22 * 2 + 1;
  iVar25 = iVar24;
  iVar32 = iVar22;
  do {
    while (param_2 <= iVar24) {
LAB_14f00fb60:
      if (iVar32 == 0) {
        iVar24 = param_2 + -1;
        lVar33 = (longlong)iVar24;
        if (0 < iVar24) {
          pFVar26 = param_1 + lVar33;
          do {
            FVar2 = pFVar26->PackagePath;
            iVar22 = (param_1->ChunkIDs).ArrayNum;
            iVar32 = (param_1->ChunkIDs).ArrayMax;
            FVar3 = param_1->PackageName;
            FVar4 = param_1->PackagePath;
            FVar5 = param_1->AssetName;
            FVar6 = param_1->AssetClass;
            FVar7 = (param_1->AssetClassPath).PackageName;
            FVar8 = (param_1->AssetClassPath).AssetName;
            FVar18.Index = (param_1->ChunkArrayRegistryHandle).Index;
            uVar19 = param_1->PackageFlags;
            FVar9 = (param_1->TagsAndValues).field0_0x0;
            pFVar10 = (param_1->TaggedAssetBundles).Object;
            pTVar11 = (param_1->TaggedAssetBundles).SharedReferenceCount.ReferenceController;
            uVar12 = *(undefined8 *)(param_1->ChunkIDs).AllocatorInstance.InlineData;
            FVar13 = (param_1->ChunkIDs).AllocatorInstance.SecondaryData;
            param_1->PackageName = pFVar26->PackageName;
            param_1->PackagePath = FVar2;
            FVar2 = pFVar26->AssetClass;
            param_1->AssetName = pFVar26->AssetName;
            param_1->AssetClass = FVar2;
            FVar2 = (pFVar26->AssetClassPath).AssetName;
            (param_1->AssetClassPath).PackageName = (pFVar26->AssetClassPath).PackageName;
            (param_1->AssetClassPath).AssetName = FVar2;
            uVar17 = pFVar26->PackageFlags;
            FVar14 = (pFVar26->TagsAndValues).field0_0x0;
            param_1->ChunkArrayRegistryHandle =
                 (FSetElementId)(pFVar26->ChunkArrayRegistryHandle).Index;
            param_1->PackageFlags = uVar17;
            (param_1->TagsAndValues).field0_0x0 = FVar14;
            pTVar15 = (pFVar26->TaggedAssetBundles).SharedReferenceCount.ReferenceController;
            (param_1->TaggedAssetBundles).Object = (pFVar26->TaggedAssetBundles).Object;
            (param_1->TaggedAssetBundles).SharedReferenceCount.ReferenceController = pTVar15;
            FVar16 = (pFVar26->ChunkIDs).AllocatorInstance.SecondaryData;
            *(undefined8 *)(param_1->ChunkIDs).AllocatorInstance.InlineData =
                 *(undefined8 *)(pFVar26->ChunkIDs).AllocatorInstance.InlineData;
            (param_1->ChunkIDs).AllocatorInstance.SecondaryData = FVar16;
            iVar25 = (pFVar26->ChunkIDs).ArrayMax;
            (param_1->ChunkIDs).ArrayNum = (pFVar26->ChunkIDs).ArrayNum;
            (param_1->ChunkIDs).ArrayMax = iVar25;
            pFVar26->PackageName = FVar3;
            pFVar26->PackagePath = FVar4;
            pFVar26->AssetName = FVar5;
            pFVar26->AssetClass = FVar6;
            (pFVar26->AssetClassPath).PackageName = FVar7;
            (pFVar26->AssetClassPath).AssetName = FVar8;
            pFVar26->ChunkArrayRegistryHandle = (FSetElementId)FVar18.Index;
            pFVar26->PackageFlags = uVar19;
            (pFVar26->TagsAndValues).field0_0x0 = FVar9;
            (pFVar26->TaggedAssetBundles).Object = pFVar10;
            (pFVar26->TaggedAssetBundles).SharedReferenceCount.ReferenceController = pTVar11;
            *(undefined8 *)(pFVar26->ChunkIDs).AllocatorInstance.InlineData = uVar12;
            (pFVar26->ChunkIDs).AllocatorInstance.SecondaryData = FVar13;
            (pFVar26->ChunkIDs).ArrayNum = iVar22;
            (pFVar26->ChunkIDs).ArrayMax = iVar32;
            iVar25 = 0;
            if (1 < iVar24) {
              do {
                iVar32 = iVar25 * 2;
                iVar22 = iVar32 + 1;
                if (iVar32 + 2 < iVar24) {
                  pFVar27 = param_1 + (longlong)iVar32 + 2;
                  pFVar28 = param_1 + (longlong)iVar32 + 1;
                  if (pFVar27->PackageName == pFVar28->PackageName) {
                    pFVar28 = (FAssetData *)&pFVar28->AssetName;
                    pFVar27 = (FAssetData *)&pFVar27->AssetName;
                  }
                  iVar29 = ::FName::Compare(&pFVar27->PackageName,&pFVar28->PackageName);
                  if (iVar29 < 0) {
                    iVar22 = iVar32;
                  }
                  iVar22 = iVar22 + 1;
                }
                pFVar30 = param_1 + iVar25;
                pFVar31 = param_1 + iVar22;
                pFVar27 = pFVar30;
                pFVar28 = pFVar31;
                if (pFVar30->PackageName == pFVar31->PackageName) {
                  pFVar27 = (FAssetData *)&pFVar30->AssetName;
                  pFVar28 = (FAssetData *)&pFVar31->AssetName;
                }
                iVar25 = ::FName::Compare(&pFVar27->PackageName,&pFVar28->PackageName);
                if (-1 < iVar25) break;
                FVar2 = pFVar31->PackagePath;
                iVar32 = (pFVar30->ChunkIDs).ArrayNum;
                iVar29 = (pFVar30->ChunkIDs).ArrayMax;
                FVar3 = pFVar30->PackageName;
                FVar4 = pFVar30->PackagePath;
                FVar5 = pFVar30->AssetName;
                FVar6 = pFVar30->AssetClass;
                FVar7 = (pFVar30->AssetClassPath).PackageName;
                FVar8 = (pFVar30->AssetClassPath).AssetName;
                FVar18.Index = (pFVar30->ChunkArrayRegistryHandle).Index;
                uVar19 = pFVar30->PackageFlags;
                FVar9 = (pFVar30->TagsAndValues).field0_0x0;
                pFVar10 = (pFVar30->TaggedAssetBundles).Object;
                pTVar11 = (pFVar30->TaggedAssetBundles).SharedReferenceCount.ReferenceController;
                uVar12 = *(undefined8 *)(pFVar30->ChunkIDs).AllocatorInstance.InlineData;
                FVar13 = (pFVar30->ChunkIDs).AllocatorInstance.SecondaryData;
                pFVar30->PackageName = pFVar31->PackageName;
                pFVar30->PackagePath = FVar2;
                FVar2 = pFVar31->AssetClass;
                pFVar30->AssetName = pFVar31->AssetName;
                pFVar30->AssetClass = FVar2;
                FVar2 = (pFVar31->AssetClassPath).AssetName;
                (pFVar30->AssetClassPath).PackageName = (pFVar31->AssetClassPath).PackageName;
                (pFVar30->AssetClassPath).AssetName = FVar2;
                uVar17 = pFVar31->PackageFlags;
                FVar14 = (pFVar31->TagsAndValues).field0_0x0;
                pFVar30->ChunkArrayRegistryHandle =
                     (FSetElementId)(pFVar31->ChunkArrayRegistryHandle).Index;
                pFVar30->PackageFlags = uVar17;
                (pFVar30->TagsAndValues).field0_0x0 = FVar14;
                pTVar15 = (pFVar31->TaggedAssetBundles).SharedReferenceCount.ReferenceController;
                (pFVar30->TaggedAssetBundles).Object = (pFVar31->TaggedAssetBundles).Object;
                (pFVar30->TaggedAssetBundles).SharedReferenceCount.ReferenceController = pTVar15;
                FVar16 = (pFVar31->ChunkIDs).AllocatorInstance.SecondaryData;
                *(undefined8 *)(pFVar30->ChunkIDs).AllocatorInstance.InlineData =
                     *(undefined8 *)(pFVar31->ChunkIDs).AllocatorInstance.InlineData;
                (pFVar30->ChunkIDs).AllocatorInstance.SecondaryData = FVar16;
                iVar25 = (pFVar31->ChunkIDs).ArrayMax;
                (pFVar30->ChunkIDs).ArrayNum = (pFVar31->ChunkIDs).ArrayNum;
                (pFVar30->ChunkIDs).ArrayMax = iVar25;
                pFVar31->PackageName = FVar3;
                pFVar31->PackagePath = FVar4;
                pFVar31->AssetName = FVar5;
                pFVar31->AssetClass = FVar6;
                (pFVar31->AssetClassPath).PackageName = FVar7;
                (pFVar31->AssetClassPath).AssetName = FVar8;
                pFVar31->ChunkArrayRegistryHandle = (FSetElementId)FVar18.Index;
                pFVar31->PackageFlags = uVar19;
                (pFVar31->TagsAndValues).field0_0x0 = FVar9;
                (pFVar31->TaggedAssetBundles).Object = pFVar10;
                (pFVar31->TaggedAssetBundles).SharedReferenceCount.ReferenceController = pTVar11;
                *(undefined8 *)(pFVar31->ChunkIDs).AllocatorInstance.InlineData = uVar12;
                (pFVar31->ChunkIDs).AllocatorInstance.SecondaryData = FVar13;
                (pFVar31->ChunkIDs).ArrayNum = iVar32;
                (pFVar31->ChunkIDs).ArrayMax = iVar29;
                iVar25 = iVar22;
              } while (iVar22 * 2 + 1 < iVar24);
            }
            iVar24 = iVar24 + -1;
            lVar33 = lVar33 + -1;
            pFVar26 = pFVar26 + -1;
          } while (0 < lVar33);
        }
        return;
      }
      iVar22 = iVar32 + -1;
      iVar24 = iVar25 + -2;
      iVar25 = iVar24;
      iVar32 = iVar22;
    }
    iVar24 = iVar22 * 2;
    iVar29 = iVar24 + 1;
    if (iVar24 + 2 < param_2) {
      pFVar26 = param_1 + (longlong)iVar24 + 2;
      pFVar27 = param_1 + (longlong)iVar24 + 1;
      if (pFVar26->PackageName == pFVar27->PackageName) {
        pFVar27 = (FAssetData *)&pFVar27->AssetName;
        pFVar26 = (FAssetData *)&pFVar26->AssetName;
      }
      iVar23 = ::FName::Compare(&pFVar26->PackageName,&pFVar27->PackageName);
      if (iVar23 < 0) {
        iVar29 = iVar24;
      }
      iVar29 = iVar29 + 1;
    }
    pFVar28 = param_1 + iVar22;
    pFVar30 = param_1 + iVar29;
    pFVar26 = pFVar28;
    pFVar27 = pFVar30;
    if (pFVar28->PackageName == pFVar30->PackageName) {
      pFVar26 = (FAssetData *)&pFVar28->AssetName;
      pFVar27 = (FAssetData *)&pFVar30->AssetName;
    }
    iVar24 = ::FName::Compare(&pFVar26->PackageName,&pFVar27->PackageName);
    if (-1 < iVar24) goto LAB_14f00fb60;
    FVar2 = pFVar30->PackagePath;
    iVar24 = iVar29 * 2 + 1;
    iVar23 = (pFVar28->ChunkIDs).ArrayNum;
    iVar20 = (pFVar28->ChunkIDs).ArrayMax;
    FVar3 = pFVar28->PackageName;
    FVar4 = pFVar28->PackagePath;
    FVar5 = pFVar28->AssetName;
    FVar6 = pFVar28->AssetClass;
    FVar7 = (pFVar28->AssetClassPath).PackageName;
    FVar8 = (pFVar28->AssetClassPath).AssetName;
    FVar18.Index = (pFVar28->ChunkArrayRegistryHandle).Index;
    uVar19 = pFVar28->PackageFlags;
    FVar9 = (pFVar28->TagsAndValues).field0_0x0;
    pFVar10 = (pFVar28->TaggedAssetBundles).Object;
    pTVar11 = (pFVar28->TaggedAssetBundles).SharedReferenceCount.ReferenceController;
    uVar12 = *(undefined8 *)(pFVar28->ChunkIDs).AllocatorInstance.InlineData;
    FVar13 = (pFVar28->ChunkIDs).AllocatorInstance.SecondaryData;
    pFVar28->PackageName = pFVar30->PackageName;
    pFVar28->PackagePath = FVar2;
    FVar2 = pFVar30->AssetClass;
    pFVar28->AssetName = pFVar30->AssetName;
    pFVar28->AssetClass = FVar2;
    FVar2 = (pFVar30->AssetClassPath).AssetName;
    (pFVar28->AssetClassPath).PackageName = (pFVar30->AssetClassPath).PackageName;
    (pFVar28->AssetClassPath).AssetName = FVar2;
    uVar17 = pFVar30->PackageFlags;
    FVar14 = (pFVar30->TagsAndValues).field0_0x0;
    pFVar28->ChunkArrayRegistryHandle = (FSetElementId)(pFVar30->ChunkArrayRegistryHandle).Index;
    pFVar28->PackageFlags = uVar17;
    (pFVar28->TagsAndValues).field0_0x0 = FVar14;
    pTVar15 = (pFVar30->TaggedAssetBundles).SharedReferenceCount.ReferenceController;
    (pFVar28->TaggedAssetBundles).Object = (pFVar30->TaggedAssetBundles).Object;
    (pFVar28->TaggedAssetBundles).SharedReferenceCount.ReferenceController = pTVar15;
    FVar16 = (pFVar30->ChunkIDs).AllocatorInstance.SecondaryData;
    *(undefined8 *)(pFVar28->ChunkIDs).AllocatorInstance.InlineData =
         *(undefined8 *)(pFVar30->ChunkIDs).AllocatorInstance.InlineData;
    (pFVar28->ChunkIDs).AllocatorInstance.SecondaryData = FVar16;
    iVar22 = (pFVar30->ChunkIDs).ArrayMax;
    (pFVar28->ChunkIDs).ArrayNum = (pFVar30->ChunkIDs).ArrayNum;
    (pFVar28->ChunkIDs).ArrayMax = iVar22;
    pFVar30->PackageName = FVar3;
    pFVar30->PackagePath = FVar4;
    pFVar30->AssetName = FVar5;
    pFVar30->AssetClass = FVar6;
    (pFVar30->AssetClassPath).PackageName = FVar7;
    (pFVar30->AssetClassPath).AssetName = FVar8;
    pFVar30->ChunkArrayRegistryHandle = (FSetElementId)FVar18.Index;
    pFVar30->PackageFlags = uVar19;
    (pFVar30->TagsAndValues).field0_0x0 = FVar9;
    (pFVar30->TaggedAssetBundles).Object = pFVar10;
    (pFVar30->TaggedAssetBundles).SharedReferenceCount.ReferenceController = pTVar11;
    *(undefined8 *)(pFVar30->ChunkIDs).AllocatorInstance.InlineData = uVar12;
    (pFVar30->ChunkIDs).AllocatorInstance.SecondaryData = FVar13;
    (pFVar30->ChunkIDs).ArrayNum = iVar23;
    (pFVar30->ChunkIDs).ArrayMax = iVar20;
    iVar22 = iVar29;
  } while( true );
}

// InternalConstructor<UAssetTagsSubsystem> @ 14f00fd90

void __cdecl InternalConstructor<UAssetTagsSubsystem>(FObjectInitializer *param_1)

{
  UEngineSubsystem *this;
  
  this = (UEngineSubsystem *)param_1->Obj;
  if (this != (UEngineSubsystem *)0x0) {
    UEngineSubsystem::UEngineSubsystem(this);
    *(undefined ***)this = &___7UAssetTagsSubsystem__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UAssetTagsSubsystem> @ 14f00fdc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAssetTagsSubsystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UEngineSubsystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAssetTagsSubsystem::GetPrivateStaticClass();
  this = (UEngineSubsystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UEngineSubsystem *)0x0) {
    UEngineSubsystem::UEngineSubsystem(this,param_1);
    *(undefined ***)this = &___7UAssetTagsSubsystem__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<FAssetData,int,FIdentityFunctor,TDereferenceWrapper<FAssetData,TLess<void>_>_> @ 14f00fe70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FAssetData,int,FIdentityFunctor,TDereferenceWrapper<FAssetData,TLess<void>_>_>
          (FAssetData *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FAssetData,TLess<void>_> param_4)

{
  FName FVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  FName FVar5;
  FName FVar6;
  FName FVar7;
  FAssetDataTagMapSharedView_u_0 FVar8;
  FAssetBundleData *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  undefined8 uVar11;
  ForElementType<int> FVar12;
  FAssetDataTagMapSharedView_u_0 FVar13;
  TReferenceControllerBase<1> *pTVar14;
  ForElementType<int> FVar15;
  uint uVar16;
  FSetElementId FVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  FAssetData *pFVar21;
  FAssetData *pFVar22;
  FAssetData *pFVar23;
  int iVar24;
  FAssetData *pFVar25;
  FAssetData *pFVar26;
  FAssetData **ppFVar27;
  int iVar28;
  FAssetData *pFVar29;
  FAssetData *pFVar30;
  FAssetData *pFVar31;
  float fVar32;
  undefined1 auStack_3b8 [48];
  FAssetData *local_388;
  FAssetData *local_378;
  FAssetData *local_370;
  undefined4 local_368;
  undefined1 local_360 [744];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_3b8;
  if (1 < param_2) {
    local_370 = param_1 + (longlong)param_2 + -1;
    local_378 = param_1;
    fVar32 = logf((float)param_2 * (float)param_2);
    local_368 = (undefined4)(longlong)fVar32;
    memset(local_360,0,0x2e8);
    ppFVar27 = &local_378;
    do {
      pFVar31 = ppFVar27[1];
      pFVar30 = *ppFVar27;
      local_388 = ppFVar27[2];
      iVar24 = (int)(((longlong)pFVar31 - (longlong)pFVar30) / 0x68) + 1;
      pFVar29 = pFVar30;
      iVar28 = (int)local_388;
      if ((int)local_388 != 0) {
LAB_14f00ff60:
        if (8 < iVar24) {
          FVar1 = pFVar29->PackagePath;
          pFVar23 = pFVar31 + 1;
          pFVar30 = pFVar29 + iVar24 / 2;
          FVar2 = pFVar30->PackageName;
          FVar3 = pFVar30->PackagePath;
          FVar4 = pFVar30->AssetName;
          FVar5 = pFVar30->AssetClass;
          FVar6 = (pFVar30->AssetClassPath).PackageName;
          FVar7 = (pFVar30->AssetClassPath).AssetName;
          FVar17.Index = (pFVar30->ChunkArrayRegistryHandle).Index;
          uVar18 = pFVar30->PackageFlags;
          FVar8 = (pFVar30->TagsAndValues).field0_0x0;
          pFVar9 = (pFVar30->TaggedAssetBundles).Object;
          pTVar10 = (pFVar30->TaggedAssetBundles).SharedReferenceCount.ReferenceController;
          uVar11 = *(undefined8 *)(pFVar30->ChunkIDs).AllocatorInstance.InlineData;
          FVar12 = (pFVar30->ChunkIDs).AllocatorInstance.SecondaryData;
          iVar19 = (pFVar30->ChunkIDs).ArrayNum;
          iVar20 = (pFVar30->ChunkIDs).ArrayMax;
          pFVar30->PackageName = pFVar29->PackageName;
          pFVar30->PackagePath = FVar1;
          FVar1 = pFVar29->AssetClass;
          pFVar30->AssetName = pFVar29->AssetName;
          pFVar30->AssetClass = FVar1;
          FVar1 = (pFVar29->AssetClassPath).AssetName;
          (pFVar30->AssetClassPath).PackageName = (pFVar29->AssetClassPath).PackageName;
          (pFVar30->AssetClassPath).AssetName = FVar1;
          uVar16 = pFVar29->PackageFlags;
          FVar13 = (pFVar29->TagsAndValues).field0_0x0;
          pFVar30->ChunkArrayRegistryHandle =
               (FSetElementId)(pFVar29->ChunkArrayRegistryHandle).Index;
          pFVar30->PackageFlags = uVar16;
          (pFVar30->TagsAndValues).field0_0x0 = FVar13;
          pTVar14 = (pFVar29->TaggedAssetBundles).SharedReferenceCount.ReferenceController;
          (pFVar30->TaggedAssetBundles).Object = (pFVar29->TaggedAssetBundles).Object;
          (pFVar30->TaggedAssetBundles).SharedReferenceCount.ReferenceController = pTVar14;
          FVar15 = (pFVar29->ChunkIDs).AllocatorInstance.SecondaryData;
          *(undefined8 *)(pFVar30->ChunkIDs).AllocatorInstance.InlineData =
               *(undefined8 *)(pFVar29->ChunkIDs).AllocatorInstance.InlineData;
          (pFVar30->ChunkIDs).AllocatorInstance.SecondaryData = FVar15;
          iVar24 = (pFVar29->ChunkIDs).ArrayMax;
          (pFVar30->ChunkIDs).ArrayNum = (pFVar29->ChunkIDs).ArrayNum;
          (pFVar30->ChunkIDs).ArrayMax = iVar24;
          pFVar29->PackageName = FVar2;
          pFVar29->PackagePath = FVar3;
          pFVar29->AssetName = FVar4;
          pFVar29->AssetClass = FVar5;
          (pFVar29->AssetClassPath).PackageName = FVar6;
          (pFVar29->AssetClassPath).AssetName = FVar7;
          pFVar29->ChunkArrayRegistryHandle = (FSetElementId)FVar17.Index;
          pFVar29->PackageFlags = uVar18;
          (pFVar29->TagsAndValues).field0_0x0 = FVar8;
          (pFVar29->TaggedAssetBundles).Object = pFVar9;
          (pFVar29->TaggedAssetBundles).SharedReferenceCount.ReferenceController = pTVar10;
          *(undefined8 *)(pFVar29->ChunkIDs).AllocatorInstance.InlineData = uVar11;
          (pFVar29->ChunkIDs).AllocatorInstance.SecondaryData = FVar12;
          (pFVar29->ChunkIDs).ArrayNum = iVar19;
          (pFVar29->ChunkIDs).ArrayMax = iVar20;
          pFVar30 = pFVar29;
LAB_14f010000:
          pFVar26 = pFVar30;
          pFVar30 = pFVar26 + 1;
          if (pFVar30 <= pFVar31) goto code_r0x00014f010009;
          goto LAB_14f010030;
        }
        for (; pFVar23 = pFVar29, pFVar30 = pFVar29, pFVar29 < pFVar31; pFVar31 = pFVar31 + -1) {
          while (pFVar26 = pFVar23, pFVar30 = pFVar30 + 1, pFVar30 <= pFVar31) {
            pFVar23 = pFVar26;
            pFVar21 = pFVar30;
            if (pFVar26->PackageName == pFVar30->PackageName) {
              pFVar23 = (FAssetData *)&pFVar26->AssetName;
              pFVar21 = (FAssetData *)&pFVar30->AssetName;
            }
            iVar28 = ::FName::Compare(&pFVar23->PackageName,&pFVar21->PackageName);
            pFVar23 = pFVar30;
            if (-1 < iVar28) {
              pFVar23 = pFVar26;
            }
          }
          FVar1 = pFVar26->PackageName;
          FVar2 = pFVar26->PackagePath;
          iVar24 = (pFVar26->ChunkIDs).ArrayNum;
          iVar19 = (pFVar26->ChunkIDs).ArrayMax;
          FVar3 = pFVar26->AssetName;
          FVar4 = pFVar26->AssetClass;
          FVar5 = pFVar31->PackagePath;
          FVar6 = (pFVar26->AssetClassPath).PackageName;
          FVar7 = (pFVar26->AssetClassPath).AssetName;
          FVar17.Index = (pFVar26->ChunkArrayRegistryHandle).Index;
          uVar18 = pFVar26->PackageFlags;
          FVar8 = (pFVar26->TagsAndValues).field0_0x0;
          pFVar9 = (pFVar26->TaggedAssetBundles).Object;
          pTVar10 = (pFVar26->TaggedAssetBundles).SharedReferenceCount.ReferenceController;
          uVar11 = *(undefined8 *)(pFVar26->ChunkIDs).AllocatorInstance.InlineData;
          FVar12 = (pFVar26->ChunkIDs).AllocatorInstance.SecondaryData;
          pFVar26->PackageName = pFVar31->PackageName;
          pFVar26->PackagePath = FVar5;
          FVar5 = pFVar31->AssetClass;
          pFVar26->AssetName = pFVar31->AssetName;
          pFVar26->AssetClass = FVar5;
          FVar5 = (pFVar31->AssetClassPath).AssetName;
          (pFVar26->AssetClassPath).PackageName = (pFVar31->AssetClassPath).PackageName;
          (pFVar26->AssetClassPath).AssetName = FVar5;
          uVar16 = pFVar31->PackageFlags;
          FVar13 = (pFVar31->TagsAndValues).field0_0x0;
          pFVar26->ChunkArrayRegistryHandle =
               (FSetElementId)(pFVar31->ChunkArrayRegistryHandle).Index;
          pFVar26->PackageFlags = uVar16;
          (pFVar26->TagsAndValues).field0_0x0 = FVar13;
          pTVar14 = (pFVar31->TaggedAssetBundles).SharedReferenceCount.ReferenceController;
          (pFVar26->TaggedAssetBundles).Object = (pFVar31->TaggedAssetBundles).Object;
          (pFVar26->TaggedAssetBundles).SharedReferenceCount.ReferenceController = pTVar14;
          FVar15 = (pFVar31->ChunkIDs).AllocatorInstance.SecondaryData;
          *(undefined8 *)(pFVar26->ChunkIDs).AllocatorInstance.InlineData =
               *(undefined8 *)(pFVar31->ChunkIDs).AllocatorInstance.InlineData;
          (pFVar26->ChunkIDs).AllocatorInstance.SecondaryData = FVar15;
          iVar28 = (pFVar31->ChunkIDs).ArrayMax;
          (pFVar26->ChunkIDs).ArrayNum = (pFVar31->ChunkIDs).ArrayNum;
          (pFVar26->ChunkIDs).ArrayMax = iVar28;
          pFVar31->PackageName = FVar1;
          pFVar31->PackagePath = FVar2;
          pFVar31->AssetName = FVar3;
          pFVar31->AssetClass = FVar4;
          (pFVar31->AssetClassPath).PackageName = FVar6;
          (pFVar31->AssetClassPath).AssetName = FVar7;
          pFVar31->ChunkArrayRegistryHandle = (FSetElementId)FVar17.Index;
          pFVar31->PackageFlags = uVar18;
          (pFVar31->TagsAndValues).field0_0x0 = FVar8;
          (pFVar31->TaggedAssetBundles).Object = pFVar9;
          (pFVar31->TaggedAssetBundles).SharedReferenceCount.ReferenceController = pTVar10;
          *(undefined8 *)(pFVar31->ChunkIDs).AllocatorInstance.InlineData = uVar11;
          (pFVar31->ChunkIDs).AllocatorInstance.SecondaryData = FVar12;
          (pFVar31->ChunkIDs).ArrayNum = iVar24;
          (pFVar31->ChunkIDs).ArrayMax = iVar19;
        }
        goto LAB_14f010231;
      }
LAB_14f010218:
      HeapSortInternal<FAssetData,int,FIdentityFunctor,TDereferenceWrapper<FAssetData,TLess<void>_>_>
                (pFVar30,iVar24,param_3,param_4);
LAB_14f010231:
      ppFVar27 = ppFVar27 + -3;
    } while (&local_378 <= ppFVar27);
  }
  return;
code_r0x00014f010009:
  pFVar21 = pFVar29;
  pFVar22 = pFVar30;
  if (pFVar29->PackageName == pFVar30->PackageName) {
    pFVar21 = (FAssetData *)&pFVar29->AssetName;
    pFVar22 = (FAssetData *)&pFVar26[1].AssetName;
  }
  iVar24 = ::FName::Compare(&pFVar21->PackageName,&pFVar22->PackageName);
  if (-1 < iVar24) goto LAB_14f010000;
LAB_14f010030:
  do {
    pFVar21 = pFVar23;
    pFVar23 = pFVar21 + -1;
    if (pFVar23 <= pFVar29) break;
    pFVar22 = pFVar23;
    pFVar25 = pFVar29;
    if (pFVar23->PackageName == pFVar29->PackageName) {
      pFVar22 = (FAssetData *)&pFVar21[-1].AssetName;
      pFVar25 = (FAssetData *)&pFVar29->AssetName;
    }
    iVar24 = ::FName::Compare(&pFVar22->PackageName,&pFVar25->PackageName);
  } while (-1 < iVar24);
  FVar1 = pFVar21[-1].PackagePath;
  if (pFVar30 <= pFVar23) {
    FVar2 = pFVar30->PackageName;
    FVar3 = pFVar26[1].PackagePath;
    FVar4 = pFVar26[1].AssetName;
    FVar5 = pFVar26[1].AssetClass;
    FVar6 = pFVar26[1].AssetClassPath.PackageName;
    FVar7 = pFVar26[1].AssetClassPath.AssetName;
    FVar17.Index = pFVar26[1].ChunkArrayRegistryHandle.Index;
    uVar18 = pFVar26[1].PackageFlags;
    FVar8 = pFVar26[1].TagsAndValues.field0_0x0;
    pFVar9 = pFVar26[1].TaggedAssetBundles.Object;
    pTVar10 = pFVar26[1].TaggedAssetBundles.SharedReferenceCount.ReferenceController;
    uVar11 = *(undefined8 *)pFVar26[1].ChunkIDs.AllocatorInstance.InlineData;
    FVar12 = pFVar26[1].ChunkIDs.AllocatorInstance.SecondaryData;
    iVar19 = pFVar26[1].ChunkIDs.ArrayNum;
    iVar20 = pFVar26[1].ChunkIDs.ArrayMax;
    pFVar30->PackageName = pFVar23->PackageName;
    pFVar26[1].PackagePath = FVar1;
    FVar1 = pFVar21[-1].AssetClass;
    pFVar26[1].AssetName = pFVar21[-1].AssetName;
    pFVar26[1].AssetClass = FVar1;
    FVar1 = pFVar21[-1].AssetClassPath.AssetName;
    pFVar26[1].AssetClassPath.PackageName = pFVar21[-1].AssetClassPath.PackageName;
    pFVar26[1].AssetClassPath.AssetName = FVar1;
    uVar16 = pFVar21[-1].PackageFlags;
    FVar13 = pFVar21[-1].TagsAndValues.field0_0x0;
    pFVar26[1].ChunkArrayRegistryHandle = (FSetElementId)pFVar21[-1].ChunkArrayRegistryHandle.Index;
    pFVar26[1].PackageFlags = uVar16;
    pFVar26[1].TagsAndValues.field0_0x0 = FVar13;
    pTVar14 = pFVar21[-1].TaggedAssetBundles.SharedReferenceCount.ReferenceController;
    pFVar26[1].TaggedAssetBundles.Object = pFVar21[-1].TaggedAssetBundles.Object;
    pFVar26[1].TaggedAssetBundles.SharedReferenceCount.ReferenceController = pTVar14;
    FVar15 = pFVar21[-1].ChunkIDs.AllocatorInstance.SecondaryData;
    *(undefined8 *)pFVar26[1].ChunkIDs.AllocatorInstance.InlineData =
         *(undefined8 *)pFVar21[-1].ChunkIDs.AllocatorInstance.InlineData;
    pFVar26[1].ChunkIDs.AllocatorInstance.SecondaryData = FVar15;
    iVar24 = pFVar21[-1].ChunkIDs.ArrayMax;
    pFVar26[1].ChunkIDs.ArrayNum = pFVar21[-1].ChunkIDs.ArrayNum;
    pFVar26[1].ChunkIDs.ArrayMax = iVar24;
    pFVar23->PackageName = FVar2;
    pFVar21[-1].PackagePath = FVar3;
    pFVar21[-1].AssetName = FVar4;
    pFVar21[-1].AssetClass = FVar5;
    pFVar21[-1].AssetClassPath.PackageName = FVar6;
    pFVar21[-1].AssetClassPath.AssetName = FVar7;
    pFVar21[-1].ChunkArrayRegistryHandle = (FSetElementId)FVar17.Index;
    pFVar21[-1].PackageFlags = uVar18;
    pFVar21[-1].TagsAndValues.field0_0x0 = FVar8;
    pFVar21[-1].TaggedAssetBundles.Object = pFVar9;
    pFVar21[-1].TaggedAssetBundles.SharedReferenceCount.ReferenceController = pTVar10;
    *(undefined8 *)pFVar21[-1].ChunkIDs.AllocatorInstance.InlineData = uVar11;
    pFVar21[-1].ChunkIDs.AllocatorInstance.SecondaryData = FVar12;
    pFVar21[-1].ChunkIDs.ArrayNum = iVar19;
    pFVar21[-1].ChunkIDs.ArrayMax = iVar20;
    goto LAB_14f010000;
  }
  FVar2 = pFVar29->PackageName;
  FVar3 = pFVar29->PackagePath;
  FVar4 = pFVar29->AssetName;
  FVar5 = pFVar29->AssetClass;
  FVar6 = (pFVar29->AssetClassPath).PackageName;
  FVar7 = (pFVar29->AssetClassPath).AssetName;
  iVar28 = iVar28 + -1;
  FVar17.Index = (pFVar29->ChunkArrayRegistryHandle).Index;
  uVar18 = pFVar29->PackageFlags;
  FVar8 = (pFVar29->TagsAndValues).field0_0x0;
  pFVar9 = (pFVar29->TaggedAssetBundles).Object;
  pTVar10 = (pFVar29->TaggedAssetBundles).SharedReferenceCount.ReferenceController;
  uVar11 = *(undefined8 *)(pFVar29->ChunkIDs).AllocatorInstance.InlineData;
  FVar12 = (pFVar29->ChunkIDs).AllocatorInstance.SecondaryData;
  iVar19 = (pFVar29->ChunkIDs).ArrayNum;
  iVar20 = (pFVar29->ChunkIDs).ArrayMax;
  pFVar29->PackageName = pFVar23->PackageName;
  pFVar29->PackagePath = FVar1;
  FVar1 = pFVar21[-1].AssetClass;
  pFVar29->AssetName = pFVar21[-1].AssetName;
  pFVar29->AssetClass = FVar1;
  FVar1 = pFVar21[-1].AssetClassPath.AssetName;
  (pFVar29->AssetClassPath).PackageName = pFVar21[-1].AssetClassPath.PackageName;
  (pFVar29->AssetClassPath).AssetName = FVar1;
  uVar16 = pFVar21[-1].PackageFlags;
  FVar13 = pFVar21[-1].TagsAndValues.field0_0x0;
  pFVar29->ChunkArrayRegistryHandle = (FSetElementId)pFVar21[-1].ChunkArrayRegistryHandle.Index;
  pFVar29->PackageFlags = uVar16;
  (pFVar29->TagsAndValues).field0_0x0 = FVar13;
  pTVar14 = pFVar21[-1].TaggedAssetBundles.SharedReferenceCount.ReferenceController;
  (pFVar29->TaggedAssetBundles).Object = pFVar21[-1].TaggedAssetBundles.Object;
  (pFVar29->TaggedAssetBundles).SharedReferenceCount.ReferenceController = pTVar14;
  FVar15 = pFVar21[-1].ChunkIDs.AllocatorInstance.SecondaryData;
  *(undefined8 *)(pFVar29->ChunkIDs).AllocatorInstance.InlineData =
       *(undefined8 *)pFVar21[-1].ChunkIDs.AllocatorInstance.InlineData;
  (pFVar29->ChunkIDs).AllocatorInstance.SecondaryData = FVar15;
  iVar24 = pFVar21[-1].ChunkIDs.ArrayMax;
  (pFVar29->ChunkIDs).ArrayNum = pFVar21[-1].ChunkIDs.ArrayNum;
  (pFVar29->ChunkIDs).ArrayMax = iVar24;
  pFVar23->PackageName = FVar2;
  pFVar21[-1].PackagePath = FVar3;
  pFVar21[-1].AssetName = FVar4;
  pFVar21[-1].AssetClass = FVar5;
  pFVar21[-1].AssetClassPath.PackageName = FVar6;
  pFVar21[-1].AssetClassPath.AssetName = FVar7;
  pFVar21[-1].ChunkArrayRegistryHandle = (FSetElementId)FVar17.Index;
  pFVar21[-1].PackageFlags = uVar18;
  pFVar21[-1].TagsAndValues.field0_0x0 = FVar8;
  pFVar21[-1].TaggedAssetBundles.Object = pFVar9;
  pFVar21[-1].TaggedAssetBundles.SharedReferenceCount.ReferenceController = pTVar10;
  *(undefined8 *)pFVar21[-1].ChunkIDs.AllocatorInstance.InlineData = uVar11;
  pFVar21[-1].ChunkIDs.AllocatorInstance.SecondaryData = FVar12;
  pFVar21[-1].ChunkIDs.ArrayNum = iVar19;
  pFVar21[-1].ChunkIDs.ArrayMax = iVar20;
  if (((longlong)pFVar23 + (-0x68 - (longlong)pFVar29)) / 0x68 <
      ((longlong)pFVar31 - (longlong)pFVar30) / 0x68) {
    if (pFVar30 < pFVar31) {
      *ppFVar27 = pFVar30;
      ppFVar27[1] = pFVar31;
      *(int *)(ppFVar27 + 2) = iVar28;
      ppFVar27 = ppFVar27 + 3;
    }
    if (pFVar23 <= pFVar29 + 1) goto LAB_14f010231;
    pFVar31 = pFVar21 + -2;
    pFVar30 = pFVar29;
  }
  else {
    if (pFVar29 + 1 < pFVar23) {
      *ppFVar27 = pFVar29;
      ppFVar27[1] = pFVar21 + -2;
      *(int *)(ppFVar27 + 2) = iVar28;
      ppFVar27 = ppFVar27 + 3;
    }
    if (pFVar31 <= pFVar30) goto LAB_14f010231;
  }
  iVar24 = (int)(((longlong)pFVar31 - (longlong)pFVar30) / 0x68) + 1;
  pFVar29 = pFVar30;
  if (iVar28 == 0) goto LAB_14f010218;
  goto LAB_14f00ff60;
}

// `scalar_deleting_destructor' @ 14f0105a0

void * __thiscall
UAssetTagsSubsystem::_scalar_deleting_destructor_(UAssetTagsSubsystem *this,uint param_1)

{
  *(undefined ***)this = &___7UAssetTagsSubsystem__6B_;
  UEngineSubsystem::~UEngineSubsystem((UEngineSubsystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeAssetTagsSubsystem @ 14f010700

void __cdecl EmptyLinkFunctionForGeneratedCodeAssetTagsSubsystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAssetTags_init @ 14f010710

void __cdecl EmptyLinkFunctionForGeneratedCodeAssetTags_init(void)

{
  return;
}

// Z_Construct_UClass_UAssetTagsSubsystem_NoRegister @ 14f0114c0

UClass * __cdecl Z_Construct_UClass_UAssetTagsSubsystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAssetTagsSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AssetTags",L"AssetTagsSubsystem",
               &Z_Registration_Info_UClass_UAssetTagsSubsystem.InnerSingleton,
               UAssetTagsSubsystem::StaticRegisterNativesUAssetTagsSubsystem,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAssetTagsSubsystem>,
               InternalVTableHelperCtorCaller<UAssetTagsSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAssetTagsSubsystem.InnerSingleton;
}

// IMPLEMENT_MODULE_AssetTags @ 14f011e10

void __cdecl IMPLEMENT_MODULE_AssetTags(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogAssetTags'' @ 150471260

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAssetTags__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAssetTags);
  return;
}

