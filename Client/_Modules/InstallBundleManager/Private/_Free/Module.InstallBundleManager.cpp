// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InstallBundleManager
// Functions: 160

// AllDownloadsCompletedDelegate'' @ 141164b00

void __cdecl `dynamic_initializer_for_'IInstallBundleManager::AllDownloadsCompletedDelegate__(void)

{
  atexit(`dynamic_atexit_destructor_for_'IInstallBundleManager::AllDownloadsCompletedDelegate__);
  return;
}

// InitCompleteDelegate'' @ 141164b20

void __cdecl `dynamic_initializer_for_'IInstallBundleManager::InitCompleteDelegate__(void)

{
  atexit(`dynamic_atexit_destructor_for_'IInstallBundleManager::InitCompleteDelegate__);
  return;
}

// InstallBundleChunkDownloadMetricsDelegate'' @ 141164b40

void __cdecl
`dynamic_initializer_for_'IInstallBundleManager::InstallBundleChunkDownloadMetricsDelegate__(void)

{
  atexit(`dynamic_atexit_destructor_for_'IInstallBundleManager::
         InstallBundleChunkDownloadMetricsDelegate__);
  return;
}

// InstallBundleCompleteDelegate'' @ 141164b60

void __cdecl `dynamic_initializer_for_'IInstallBundleManager::InstallBundleCompleteDelegate__(void)

{
  atexit(`dynamic_atexit_destructor_for_'IInstallBundleManager::InstallBundleCompleteDelegate__);
  return;
}

// PatchCheckCompleteDelegate'' @ 141164b80

void __cdecl `dynamic_initializer_for_'IInstallBundleManager::PatchCheckCompleteDelegate__(void)

{
  atexit(`dynamic_atexit_destructor_for_'IInstallBundleManager::PatchCheckCompleteDelegate__);
  return;
}

// PausedBundleDelegate'' @ 141164ba0

void __cdecl `dynamic_initializer_for_'IInstallBundleManager::PausedBundleDelegate__(void)

{
  atexit(`dynamic_atexit_destructor_for_'IInstallBundleManager::PausedBundleDelegate__);
  return;
}

// ReleasedDelegate'' @ 141164bc0

void __cdecl `dynamic_initializer_for_'IInstallBundleManager::ReleasedDelegate__(void)

{
  atexit(`dynamic_atexit_destructor_for_'IInstallBundleManager::ReleasedDelegate__);
  return;
}

// ReportingDelegate'' @ 141164be0

void __cdecl `dynamic_initializer_for_'IInstallBundleManager::ReportingDelegate__(void)

{
  atexit(`dynamic_atexit_destructor_for_'IInstallBundleManager::ReportingDelegate__);
  return;
}

// Tag'' @ 141164c00

void __cdecl
`dynamic_initializer_for_'InstallBundleUtil::FInstallBundleManagerKeepAwake::Tag__(void)

{
  ::FName::FName(&InstallBundleUtil::FInstallBundleManagerKeepAwake::Tag,
                 L"InstallBundleManagerKeepAwake");
  return;
}

// TagWithRendering'' @ 141164c20

void __cdecl
`dynamic_initializer_for_'InstallBundleUtil::FInstallBundleManagerKeepAwake::TagWithRendering__
          (void)

{
  ::FName::FName(&InstallBundleUtil::FInstallBundleManagerKeepAwake::TagWithRendering,
                 L"InstallBundleManagerKeepAwakeWithRendering");
  return;
}

// `dynamic_initializer_for_'LogInstallBundleManager'' @ 141164c40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogInstallBundleManager__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogInstallBundleManager,L"LogInstallBundleManager",Display,All);
  atexit(_dynamic_atexit_destructor_for__LogInstallBundleManager__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantInstallBundleManager'' @ 141164c80

void __cdecl _dynamic_initializer_for__ModuleRegistrantInstallBundleManager__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "InstallBundleManager";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"InstallBundleManager",0x14);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FInstallBundleManagerModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_InstallBundleManager'' @ 141164cd0

void __cdecl _dynamic_initializer_for___GCsvCategory_InstallBundleManager__(void)

{
  FString::operator=(&_GCsvCategory_InstallBundleManager.Name,L"InstallBundleManager");
  _GCsvCategory_InstallBundleManager.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_InstallBundleManager.Name,false,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_InstallBundleManager__);
  return;
}

// `scalar_deleting_destructor' @ 148bbc770

void * __thiscall
FInstallBundleManagerModule::_scalar_deleting_destructor_
          (FInstallBundleManagerModule *this,uint param_1)

{
  *this = (FInstallBundleManagerModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// AllOf<TMap<FString,InstallBundleUtil::FContentRequestStateStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::FContentRequestStateStats,0>_>,`InstallBundleUtil::FContentRequestStatsMap::StatsEnd'::__l5::<lambda_2>_> @ 148bbd3f0

bool __cdecl
Algo::
AllOf<TMap<FString,InstallBundleUtil::FContentRequestStateStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::FContentRequestStateStats,0>_>,_InstallBundleUtil::FContentRequestStatsMap::StatsEnd_::__l5::<lambda_2>_>
          (TMap<FString,InstallBundleUtil::FContentRequestStateStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::FContentRequestStateStats,0>_>
           *param_1,<lambda_2> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar12 = 0;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_148bbd48d;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar8 = (int)lVar9 + -1 + iVar14;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_148bbd48d:
  uVar11 = *(uint *)&param_1->field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar7,iVar12);
  TStack_50.CurrentBitIndex = iVar8;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_50._28_4_ = iVar8;
  TStack_50.BaseBitIndex = iVar14;
  uStack_30 = CONCAT44(uStack_5c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  uVar7 = *(uint *)&param_1->field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_148bbd590;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_148bbd590:
  while( true ) {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TTuple<FString,InstallBundleUtil::FContentRequestStateStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar11) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    if (*(char *)((longlong)TStack_50.CurrentBitIndex * 0x38 + 0x28 + *(longlong *)param_1) != '\0')
    {
      return false;
    }
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return true;
}

// AllOf<TMap<FString,InstallBundleUtil::FContentRequestStateStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::FContentRequestStateStats,0>_>,`InstallBundleUtil::FContentRequestStatsMap::StatsReset'::__l5::<lambda_2>_> @ 148bbd610

bool __cdecl
Algo::
AllOf<TMap<FString,InstallBundleUtil::FContentRequestStateStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::FContentRequestStateStats,0>_>,_InstallBundleUtil::FContentRequestStatsMap::StatsReset_::__l5::<lambda_2>_>
          (TMap<FString,InstallBundleUtil::FContentRequestStateStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::FContentRequestStateStats,0>_>
           *param_1,<lambda_2> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar12 = 0;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_148bbd6ad;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar8 = (int)lVar9 + -1 + iVar14;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_148bbd6ad:
  uVar11 = *(uint *)&param_1->field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar7,iVar12);
  TStack_50.CurrentBitIndex = iVar8;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_50._28_4_ = iVar8;
  TStack_50.BaseBitIndex = iVar14;
  uStack_30 = CONCAT44(uStack_5c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  uVar7 = *(uint *)&param_1->field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_148bbd7b0;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_148bbd7b0:
  while( true ) {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TTuple<FString,InstallBundleUtil::FContentRequestStateStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar11) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    if (*(char *)((longlong)TStack_50.CurrentBitIndex * 0x38 + 0x28 + *(longlong *)param_1) != '\0')
    {
      return false;
    }
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return true;
}

// ConstructItems<FBuildInstallerStat,FBuildInstallerStat,int> @ 148bbd830

void __cdecl
ConstructItems<FBuildInstallerStat,FBuildInstallerStat,int>
          (void *param_1,FBuildInstallerStat *param_2,int param_3)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  FName *pFVar5;
  
  if (param_3 != 0) {
    pFVar4 = (FName *)((longlong)param_1 + 8);
    pFVar5 = &param_2->StatName;
    do {
      pFVar4[-1] = *(FName *)((longlong)pFVar4 + (longlong)param_2 + (-8 - (longlong)param_1));
      *pFVar4 = *pFVar5;
      bVar1 = (byte)pFVar5[3].ComparisonIndex.Value;
      *(byte *)&pFVar4[3].ComparisonIndex.Value = bVar1;
      if ((5 < bVar1) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xec,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<bool,int,__int64,float,double,FString>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                  ::__l2::CopyConstructors)[bVar1])(pFVar4 + 1,pFVar5 + 1);
      pFVar5 = pFVar5 + 5;
      pFVar4 = pFVar4 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FInstallBundleReport,FInstallBundleReport,int> @ 148bbd8f0

void __cdecl
ConstructItems<FInstallBundleReport,FInstallBundleReport,int>
          (void *param_1,FInstallBundleReport *param_2,int param_3)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  char *pcVar4;
  bool *pbVar5;
  
  if (param_3 != 0) {
    pcVar4 = (char *)((longlong)param_1 + 0x48);
    pbVar5 = &(param_2->State).bIsSet;
    do {
      *(undefined ***)(pbVar5 + (longlong)param_1 + (-0x48 - (longlong)param_2)) =
           &___7FInstallBundleReport__6B_;
      *(undefined8 *)(pcVar4 + -0x40) = *(undefined8 *)(pbVar5 + -0x40);
      (((FString *)(pcVar4 + -0x38))->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pcVar4[-0x30] = '\0';
      pcVar4[-0x2f] = '\0';
      pcVar4[-0x2e] = '\0';
      pcVar4[-0x2d] = '\0';
      pcVar4[-0x2c] = -1;
      pcVar4[-0x2b] = -1;
      pcVar4[-0x2a] = -1;
      pcVar4[-0x29] = -1;
      if (*(int *)(pbVar5 + -0x2c) != -1) {
        FString::FString((FString *)(pcVar4 + -0x38),(FString *)(pbVar5 + -0x38));
      }
      *pcVar4 = '\0';
      bVar3 = *pbVar5;
      *pcVar4 = bVar3;
      if (bVar3 != false) {
        bVar1 = pbVar5[-8];
        pcVar4[-8] = bVar1;
        if ((3 < bVar1) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xec,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                    ::__l2::CopyConstructors)[bVar1])
                  (pcVar4 + -0x28,
                   (TOptional<TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>_>
                    *)(pbVar5 + -0x28));
      }
      pcVar4 = pcVar4 + 0x50;
      pbVar5 = pbVar5 + 0x50;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FInstallBundleSourceReport,FInstallBundleSourceReport,int> @ 148bbda00

void __cdecl
ConstructItems<FInstallBundleSourceReport,FInstallBundleSourceReport,int>
          (void *param_1,FInstallBundleSourceReport *param_2,int param_3)

{
  int iVar1;
  FInstallBundleReport *pFVar2;
  undefined8 *puVar3;
  int *piVar4;
  
  if (param_3 != 0) {
    puVar3 = (undefined8 *)((longlong)param_1 + 8);
    piVar4 = &(param_2->Bundles).ArrayNum;
    do {
      *(undefined ***)((longlong)piVar4 + (longlong)param_1 + (-0x28 - (longlong)param_2)) =
           &___7FInstallBundleSourceReport__6B_;
      *puVar3 = *(undefined8 *)(piVar4 + -8);
      (((FString *)(puVar3 + 1))->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)(puVar3 + 2) = 0;
      *(undefined4 *)((longlong)puVar3 + 0x14) = 0xffffffff;
      if (piVar4[-3] != -1) {
        FString::FString((FString *)(puVar3 + 1),(FString *)(piVar4 + -6));
      }
      puVar3[3] = 0;
      iVar1 = *piVar4;
      pFVar2 = (FInstallBundleReport *)
               (((TArray<FInstallBundleReport,TSizedDefaultAllocator<32>_> *)(piVar4 + -2))->
               AllocatorInstance).Data;
      *(int *)(puVar3 + 4) = iVar1;
      if (iVar1 == 0) {
        *(int *)((longlong)puVar3 + 0x24) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,8,iVar1,0,(ForAnyElementType *)(puVar3 + 3),iVar1,
                   (int *)((longlong)puVar3 + 0x24));
        ConstructItems<FInstallBundleReport,FInstallBundleReport,int>
                  (((ForAnyElementType *)(puVar3 + 3))->Data,pFVar2,iVar1);
      }
      puVar3 = puVar3 + 6;
      piVar4 = piVar4 + 0xc;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FInstallBundleReport,int> @ 148bbdb20

void __cdecl DefaultConstructItems<FInstallBundleReport,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined ***)(lVar1 + -0xc) = &___7FInstallBundleReport__6B_;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined4 *)(lVar1 + 0xc) = 0;
      *(undefined4 *)(lVar1 + 0x10) = 0xffffffff;
      *(undefined1 *)(lVar1 + 0x3c) = 0;
      lVar1 = lVar1 + 0x50;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FInstallBundleSourceReport,int> @ 148bbdb60

void __cdecl DefaultConstructItems<FInstallBundleSourceReport,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined ***)(lVar1 + -0xc) = &___7FInstallBundleSourceReport__6B_;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined4 *)(lVar1 + 0xc) = 0;
      *(undefined4 *)(lVar1 + 0x10) = 0xffffffff;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined8 *)(lVar1 + 0x1c) = 0;
      lVar1 = lVar1 + 0x30;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FBuildInstallerStat,int> @ 148bbdbe0

void __cdecl DestructItems<FBuildInstallerStat,int>(FBuildInstallerStat *param_1,int param_2)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<bool,int,__int64,float,double,FString> *pTVar4;
  
  while( true ) {
    if (param_2 == 0) {
      return;
    }
    pTVar4 = &param_1->StatValue;
    bVar1 = pTVar4->TypeIndex;
    if ((5 < (ulonglong)bVar1) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) break;
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,int,__int64,float,double,FString>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[bVar1])(pTVar4);
    param_1 = (FBuildInstallerStat *)(pTVar4 + 1);
    param_2 = param_2 + -1;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// DestructItems<FInstallBundleReport,int> @ 148bbdc70

void __cdecl DestructItems<FInstallBundleReport,int>(FInstallBundleReport *param_1,int param_2)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  uchar *puVar4;
  
  if (param_2 != 0) {
    puVar4 = &(param_1->State).TypedValue.TypeIndex;
    do {
      if (puVar4[8] != 0) {
        bVar1 = *puVar4;
        if ((3 < (ulonglong)bVar1) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[bVar1])
                  ((TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>
                    *)(puVar4 + -0x20));
      }
      if ((*(int *)(puVar4 + -0x24) != -1) && (*(void **)(puVar4 + -0x30) != (void *)0x0)) {
        FMemory::Free(*(void **)(puVar4 + -0x30));
      }
      FJsonSerializable::~FJsonSerializable((FJsonSerializable *)(puVar4 + -0x40));
      puVar4 = puVar4 + 0x50;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FInstallBundleRequestResultInfo,int> @ 148bbdd20

void __cdecl
DestructItems<FInstallBundleRequestResultInfo,int>
          (FInstallBundleRequestResultInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  FText *pFVar3;
  
  if (param_2 != 0) {
    pFVar3 = &param_1->OptionalErrorText;
    do {
      pFVar1 = (((FString *)(pFVar3 + 1))->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pIVar2 = (pFVar3->TextData).Reference;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))();
      }
      pFVar3 = pFVar3 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FInstallBundleSourceReport,int> @ 148bbdd70

void __cdecl
DestructItems<FInstallBundleSourceReport,int>(FInstallBundleSourceReport *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FInstallBundleReport,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Bundles;
    do {
      DestructItems<FInstallBundleReport,int>
                ((FInstallBundleReport *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if ((*(int *)((longlong)&((TOptional<FString> *)(pTVar2 + -1))->field0_0x0 + 0xc) != -1) &&
         (pFVar1 = (((TOptional<FString> *)(pTVar2 + -1))->field0_0x0).TypedValue.Data.
                   AllocatorInstance.Data, pFVar1 != (FScriptContainerElement *)0x0)) {
        FMemory::Free(pFVar1);
      }
      FJsonSerializable::~FJsonSerializable((FJsonSerializable *)(pTVar2 + -2));
      pTVar2 = pTVar2 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TUniquePtr<UE::IoStore::FOnDemandMountArgs,TDefaultDelete<UE::IoStore::FOnDemandMountArgs>_>,int> @ 148bbdde0

void __cdecl
DestructItems<TUniquePtr<UE::IoStore::FOnDemandMountArgs,TDefaultDelete<UE::IoStore::FOnDemandMountArgs>_>,int>
          (TUniquePtr<UE::IoStore::FOnDemandMountArgs,TDefaultDelete<UE::IoStore::FOnDemandMountArgs>_>
           *param_1,int param_2)

{
  FOnDemandMountArgs *this;
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    this = param_1->Ptr;
    if (this != (FOnDemandMountArgs *)0x0) {
      UE::IoStore::FOnDemandHostGroup::~FOnDemandHostGroup(&this->HostGroup);
      pFVar1 = (this->FilePath).Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (this->TocRelativeUrl).Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (this->MountId).Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      TDefaultDelete<UE::IoStore::FOnDemandToc>::operator()
                ((TDefaultDelete<UE::IoStore::FOnDemandToc> *)this,(this->Toc).Ptr);
      operator_delete(this,0x58);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<FAsyncTask<InstallBundleUtil::FInstallBundleWork>,TDefaultDelete<FAsyncTask<InstallBundleUtil::FInstallBundleWork>_>_>,int> @ 148bbde70

void __cdecl
DestructItems<TUniquePtr<FAsyncTask<InstallBundleUtil::FInstallBundleWork>,TDefaultDelete<FAsyncTask<InstallBundleUtil::FInstallBundleWork>_>_>,int>
          (TUniquePtr<FAsyncTask<InstallBundleUtil::FInstallBundleWork>,TDefaultDelete<FAsyncTask<InstallBundleUtil::FInstallBundleWork>_>_>
           *param_1,int param_2)

{
  FAsyncTask<InstallBundleUtil::FInstallBundleWork> *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FAsyncTask<InstallBundleUtil::FInstallBundleWork> *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FRegexPattern,int> @ 148bbdeb0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl DestructItems<FRegexPattern,int>(FRegexPattern *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Implementation).SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FName,FInstallBundleCache::FBundleCacheInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,FInstallBundleCache::FBundleCacheInfo>,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,FInstallBundleCache::FBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>_>::FValueComparisonClass<FInstallBundleCache::FCacheSortPredicate>_>_>_> @ 148bc0a60

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FName,FInstallBundleCache::FBundleCacheInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,FInstallBundleCache::FBundleCacheInfo>,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,FInstallBundleCache::FBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>_>::FValueComparisonClass<FInstallBundleCache::FCacheSortPredicate>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<FName,FInstallBundleCache::FBundleCacheInfo>,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,FInstallBundleCache::FBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>_>::FValueComparisonClass<FInstallBundleCache::FCacheSortPredicate>_>_>
          param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>_s_1 TVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_> *pTVar17;
  int iVar18;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_> *pTVar19;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_> *pTVar20;
  
  if (param_2 < 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar11) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar11) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar12 = (param_2 + -2) / 2;
  iVar13 = iVar12 * 2 + 1;
  iVar18 = iVar13;
  iVar15 = iVar12;
  do {
    while (param_2 <= iVar13) {
LAB_148bc0bd1:
      if (iVar15 == 0) {
        iVar13 = param_2 + -1;
        lVar16 = (longlong)iVar13;
        if (0 < iVar13) {
          pTVar17 = param_1 + lVar16;
          do {
            uVar2 = *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 8);
            iVar18 = 0;
            TVar3 = param_1->_s_1;
            uVar4 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            uVar5 = *(undefined8 *)((param_1->ElementData).Pad + 0x10);
            uVar6 = *(undefined8 *)((param_1->ElementData).Pad + 0x18);
            uVar7 = *(undefined8 *)((param_1->ElementData).Pad + 0x20);
            uVar8 = *(undefined8 *)((param_1->ElementData).Pad + 0x28);
            uVar9 = *(undefined8 *)((param_1->ElementData).Pad + 0x30);
            uVar10 = *(undefined8 *)((param_1->ElementData).Pad + 0x38);
            param_1->_s_1 = pTVar17->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar2;
            uVar2 = *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x18);
            *(undefined8 *)((param_1->ElementData).Pad + 0x10) =
                 *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x10);
            *(undefined8 *)((param_1->ElementData).Pad + 0x18) = uVar2;
            uVar2 = *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x28);
            *(undefined8 *)((param_1->ElementData).Pad + 0x20) =
                 *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x20);
            *(undefined8 *)((param_1->ElementData).Pad + 0x28) = uVar2;
            uVar2 = *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x38);
            *(undefined8 *)((param_1->ElementData).Pad + 0x30) =
                 *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x30);
            *(undefined8 *)((param_1->ElementData).Pad + 0x38) = uVar2;
            pTVar17->_s_1 = TVar3;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 8) = uVar4;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x10) = uVar5;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x18) = uVar6;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x20) = uVar7;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x28) = uVar8;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x30) = uVar9;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x38) = uVar10;
            if (1 < iVar13) {
              do {
                iVar15 = iVar18 * 2;
                iVar12 = iVar15 + 1;
                if (iVar15 + 2 < iVar13) {
                  bVar11 = FInstallBundleCache::FCacheSortPredicate::operator()
                                     (((((param_4.Predicate)->Predicate).Predicate)->Predicate).
                                      Predicate,
                                      (FBundleCacheInfo *)
                                      ((longlong)(iVar15 + 2) * 0x40 + 8 + (longlong)param_1),
                                      (FBundleCacheInfo *)
                                      ((longlong)iVar12 * 0x40 + 8 + (longlong)param_1));
                  if (bVar11) {
                    iVar12 = iVar15;
                  }
                  iVar12 = iVar12 + 1;
                }
                pTVar19 = param_1 + iVar12;
                pTVar20 = param_1 + iVar18;
                bVar11 = FInstallBundleCache::FCacheSortPredicate::operator()
                                   (((((param_4.Predicate)->Predicate).Predicate)->Predicate).
                                    Predicate,
                                    (FBundleCacheInfo *)((longlong)(pTVar20->ElementData).Pad + 8),
                                    (FBundleCacheInfo *)((pTVar19->ElementData).Pad + 8));
                if (!bVar11) break;
                uVar2 = *(undefined8 *)((pTVar19->ElementData).Pad + 8);
                TVar3 = pTVar20->_s_1;
                uVar4 = *(undefined8 *)((longlong)(pTVar20->ElementData).Pad + 8);
                uVar5 = *(undefined8 *)((longlong)(pTVar20->ElementData).Pad + 0x10);
                uVar6 = *(undefined8 *)((longlong)(pTVar20->ElementData).Pad + 0x18);
                uVar7 = *(undefined8 *)((longlong)(pTVar20->ElementData).Pad + 0x20);
                uVar8 = *(undefined8 *)((longlong)(pTVar20->ElementData).Pad + 0x28);
                uVar9 = *(undefined8 *)((longlong)(pTVar20->ElementData).Pad + 0x30);
                uVar10 = *(undefined8 *)((longlong)(pTVar20->ElementData).Pad + 0x38);
                pTVar20->_s_1 = pTVar19->_s_1;
                *(undefined8 *)((longlong)(pTVar20->ElementData).Pad + 8) = uVar2;
                uVar2 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x18);
                *(undefined8 *)((longlong)(pTVar20->ElementData).Pad + 0x10) =
                     *(undefined8 *)((pTVar19->ElementData).Pad + 0x10);
                *(undefined8 *)((longlong)(pTVar20->ElementData).Pad + 0x18) = uVar2;
                uVar2 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x28);
                *(undefined8 *)((longlong)(pTVar20->ElementData).Pad + 0x20) =
                     *(undefined8 *)((pTVar19->ElementData).Pad + 0x20);
                *(undefined8 *)((longlong)(pTVar20->ElementData).Pad + 0x28) = uVar2;
                uVar2 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x38);
                *(undefined8 *)((longlong)(pTVar20->ElementData).Pad + 0x30) =
                     *(undefined8 *)((pTVar19->ElementData).Pad + 0x30);
                *(undefined8 *)((longlong)(pTVar20->ElementData).Pad + 0x38) = uVar2;
                pTVar19->_s_1 = TVar3;
                *(undefined8 *)((pTVar19->ElementData).Pad + 8) = uVar4;
                *(undefined8 *)((pTVar19->ElementData).Pad + 0x10) = uVar5;
                *(undefined8 *)((pTVar19->ElementData).Pad + 0x18) = uVar6;
                *(undefined8 *)((pTVar19->ElementData).Pad + 0x20) = uVar7;
                *(undefined8 *)((pTVar19->ElementData).Pad + 0x28) = uVar8;
                *(undefined8 *)((pTVar19->ElementData).Pad + 0x30) = uVar9;
                *(undefined8 *)((pTVar19->ElementData).Pad + 0x38) = uVar10;
                iVar18 = iVar12;
              } while (iVar12 * 2 + 1 < iVar13);
            }
            iVar13 = iVar13 + -1;
            lVar16 = lVar16 + -1;
            pTVar17 = pTVar17 + -1;
          } while (0 < lVar16);
        }
        return;
      }
      iVar12 = iVar15 + -1;
      iVar13 = iVar18 + -2;
      iVar18 = iVar13;
      iVar15 = iVar12;
    }
    iVar13 = iVar12 * 2;
    iVar14 = iVar13 + 1;
    if (iVar13 + 2 < param_2) {
      bVar11 = FInstallBundleCache::FCacheSortPredicate::operator()
                         (((((param_4.Predicate)->Predicate).Predicate)->Predicate).Predicate,
                          (FBundleCacheInfo *)
                          ((longlong)(iVar13 + 2) * 0x40 + 8 + (longlong)param_1),
                          (FBundleCacheInfo *)((longlong)iVar14 * 0x40 + 8 + (longlong)param_1));
      if (bVar11) {
        iVar14 = iVar13;
      }
      iVar14 = iVar14 + 1;
    }
    pTVar17 = param_1 + iVar14;
    pTVar19 = param_1 + iVar12;
    bVar11 = FInstallBundleCache::FCacheSortPredicate::operator()
                       (((((param_4.Predicate)->Predicate).Predicate)->Predicate).Predicate,
                        (FBundleCacheInfo *)((longlong)(pTVar19->ElementData).Pad + 8),
                        (FBundleCacheInfo *)((pTVar17->ElementData).Pad + 8));
    if (!bVar11) goto LAB_148bc0bd1;
    uVar2 = *(undefined8 *)((pTVar17->ElementData).Pad + 8);
    iVar13 = iVar14 * 2 + 1;
    TVar3 = pTVar19->_s_1;
    uVar4 = *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 8);
    uVar5 = *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x10);
    uVar6 = *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x18);
    uVar7 = *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x20);
    uVar8 = *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x28);
    uVar9 = *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x30);
    uVar10 = *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x38);
    pTVar19->_s_1 = pTVar17->_s_1;
    *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 8) = uVar2;
    uVar2 = *(undefined8 *)((pTVar17->ElementData).Pad + 0x18);
    *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x10) =
         *(undefined8 *)((pTVar17->ElementData).Pad + 0x10);
    *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x18) = uVar2;
    uVar2 = *(undefined8 *)((pTVar17->ElementData).Pad + 0x28);
    *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x20) =
         *(undefined8 *)((pTVar17->ElementData).Pad + 0x20);
    *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x28) = uVar2;
    uVar2 = *(undefined8 *)((pTVar17->ElementData).Pad + 0x38);
    *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x30) =
         *(undefined8 *)((pTVar17->ElementData).Pad + 0x30);
    *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x38) = uVar2;
    pTVar17->_s_1 = TVar3;
    *(undefined8 *)((pTVar17->ElementData).Pad + 8) = uVar4;
    *(undefined8 *)((pTVar17->ElementData).Pad + 0x10) = uVar5;
    *(undefined8 *)((pTVar17->ElementData).Pad + 0x18) = uVar6;
    *(undefined8 *)((pTVar17->ElementData).Pad + 0x20) = uVar7;
    *(undefined8 *)((pTVar17->ElementData).Pad + 0x28) = uVar8;
    *(undefined8 *)((pTVar17->ElementData).Pad + 0x30) = uVar9;
    *(undefined8 *)((pTVar17->ElementData).Pad + 0x38) = uVar10;
    iVar12 = iVar14;
  } while( true );
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FName,FInstallBundleCache::FBundleCacheInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,FInstallBundleCache::FBundleCacheInfo>,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,FInstallBundleCache::FBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>_>::FValueComparisonClass<FInstallBundleCache::FCacheSortPredicate>_>_>_> @ 148bc0d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FName,FInstallBundleCache::FBundleCacheInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,FInstallBundleCache::FBundleCacheInfo>,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,FInstallBundleCache::FBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>_>::FValueComparisonClass<FInstallBundleCache::FCacheSortPredicate>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<FName,FInstallBundleCache::FBundleCacheInfo>,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,FInstallBundleCache::FBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>_>::FValueComparisonClass<FInstallBundleCache::FCacheSortPredicate>_>_>
          param_4)

{
  undefined8 uVar1;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>_s_1 TVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_> *pTVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_> *pTVar14;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_> **ppTVar15;
  int iVar16;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_> *pTVar17;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_> *pTVar18;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_> *pTVar19;
  float fVar20;
  undefined1 auStack_388 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_> *local_358;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_> *local_348;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_> *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar20 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar20;
    memset(local_330,0,0x2e8);
    ppTVar15 = &local_348;
    do {
      pTVar19 = ppTVar15[1];
      pTVar18 = *ppTVar15;
      local_358 = ppTVar15[2];
      iVar11 = (int)((longlong)pTVar19 - (longlong)pTVar18 >> 6) + 1;
      pTVar17 = pTVar18;
      iVar16 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_148bc0e20:
        if (8 < iVar11) {
          uVar1 = *(undefined8 *)((pTVar17->ElementData).Pad + 8);
          pTVar12 = pTVar19 + 1;
          pTVar18 = pTVar17 + iVar11 / 2;
          TVar2 = pTVar18->_s_1;
          uVar3 = *(undefined8 *)((longlong)(pTVar18->ElementData).Pad + 8);
          uVar4 = *(undefined8 *)((longlong)(pTVar18->ElementData).Pad + 0x10);
          uVar5 = *(undefined8 *)((longlong)(pTVar18->ElementData).Pad + 0x18);
          uVar6 = *(undefined8 *)((longlong)(pTVar18->ElementData).Pad + 0x20);
          uVar7 = *(undefined8 *)((longlong)(pTVar18->ElementData).Pad + 0x28);
          uVar8 = *(undefined8 *)((longlong)(pTVar18->ElementData).Pad + 0x30);
          uVar9 = *(undefined8 *)((longlong)(pTVar18->ElementData).Pad + 0x38);
          pTVar18->_s_1 = pTVar17->_s_1;
          *(undefined8 *)((longlong)(pTVar18->ElementData).Pad + 8) = uVar1;
          uVar1 = *(undefined8 *)((pTVar17->ElementData).Pad + 0x18);
          *(undefined8 *)((longlong)(pTVar18->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar17->ElementData).Pad + 0x10);
          *(undefined8 *)((longlong)(pTVar18->ElementData).Pad + 0x18) = uVar1;
          uVar1 = *(undefined8 *)((pTVar17->ElementData).Pad + 0x28);
          *(undefined8 *)((longlong)(pTVar18->ElementData).Pad + 0x20) =
               *(undefined8 *)((pTVar17->ElementData).Pad + 0x20);
          *(undefined8 *)((longlong)(pTVar18->ElementData).Pad + 0x28) = uVar1;
          uVar1 = *(undefined8 *)((pTVar17->ElementData).Pad + 0x38);
          *(undefined8 *)((longlong)(pTVar18->ElementData).Pad + 0x30) =
               *(undefined8 *)((pTVar17->ElementData).Pad + 0x30);
          *(undefined8 *)((longlong)(pTVar18->ElementData).Pad + 0x38) = uVar1;
          pTVar17->_s_1 = TVar2;
          *(undefined8 *)((pTVar17->ElementData).Pad + 8) = uVar3;
          *(undefined8 *)((pTVar17->ElementData).Pad + 0x10) = uVar4;
          *(undefined8 *)((pTVar17->ElementData).Pad + 0x18) = uVar5;
          *(undefined8 *)((pTVar17->ElementData).Pad + 0x20) = uVar6;
          *(undefined8 *)((pTVar17->ElementData).Pad + 0x28) = uVar7;
          *(undefined8 *)((pTVar17->ElementData).Pad + 0x30) = uVar8;
          *(undefined8 *)((pTVar17->ElementData).Pad + 0x38) = uVar9;
          pTVar18 = pTVar17;
LAB_148bc0e83:
          pTVar14 = pTVar18;
          pTVar18 = pTVar14 + 1;
          if (pTVar18 <= pTVar19) goto code_r0x000148bc0e8c;
          goto LAB_148bc0ea3;
        }
        for (; pTVar18 = pTVar17, pTVar12 = pTVar17, pTVar17 < pTVar19; pTVar19 = pTVar19 + -1) {
          while (pTVar14 = pTVar18, pTVar18 = pTVar12 + 1, pTVar18 <= pTVar19) {
            bVar10 = FInstallBundleCache::FCacheSortPredicate::operator()
                               (((((param_4.Predicate)->Predicate).Predicate)->Predicate).Predicate,
                                (FBundleCacheInfo *)((pTVar14->ElementData).Pad + 8),
                                (FBundleCacheInfo *)((longlong)pTVar12 + 0x48));
            pTVar12 = pTVar18;
            if (!bVar10) {
              pTVar18 = pTVar14;
            }
          }
          TVar2 = pTVar14->_s_1;
          uVar1 = *(undefined8 *)((pTVar14->ElementData).Pad + 8);
          uVar3 = *(undefined8 *)((pTVar14->ElementData).Pad + 0x10);
          uVar4 = *(undefined8 *)((pTVar14->ElementData).Pad + 0x18);
          uVar5 = *(undefined8 *)((pTVar14->ElementData).Pad + 0x20);
          uVar6 = *(undefined8 *)((pTVar14->ElementData).Pad + 0x28);
          uVar7 = *(undefined8 *)((pTVar19->ElementData).Pad + 8);
          uVar8 = *(undefined8 *)((pTVar14->ElementData).Pad + 0x30);
          uVar9 = *(undefined8 *)((pTVar14->ElementData).Pad + 0x38);
          pTVar14->_s_1 = pTVar19->_s_1;
          *(undefined8 *)((pTVar14->ElementData).Pad + 8) = uVar7;
          uVar7 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x18);
          *(undefined8 *)((pTVar14->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar19->ElementData).Pad + 0x10);
          *(undefined8 *)((pTVar14->ElementData).Pad + 0x18) = uVar7;
          uVar7 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x28);
          *(undefined8 *)((pTVar14->ElementData).Pad + 0x20) =
               *(undefined8 *)((pTVar19->ElementData).Pad + 0x20);
          *(undefined8 *)((pTVar14->ElementData).Pad + 0x28) = uVar7;
          uVar7 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x38);
          *(undefined8 *)((pTVar14->ElementData).Pad + 0x30) =
               *(undefined8 *)((pTVar19->ElementData).Pad + 0x30);
          *(undefined8 *)((pTVar14->ElementData).Pad + 0x38) = uVar7;
          pTVar19->_s_1 = TVar2;
          *(undefined8 *)((pTVar19->ElementData).Pad + 8) = uVar1;
          *(undefined8 *)((pTVar19->ElementData).Pad + 0x10) = uVar3;
          *(undefined8 *)((pTVar19->ElementData).Pad + 0x18) = uVar4;
          *(undefined8 *)((pTVar19->ElementData).Pad + 0x20) = uVar5;
          *(undefined8 *)((pTVar19->ElementData).Pad + 0x28) = uVar6;
          *(undefined8 *)((pTVar19->ElementData).Pad + 0x30) = uVar8;
          *(undefined8 *)((pTVar19->ElementData).Pad + 0x38) = uVar9;
        }
        goto LAB_148bc0fe0;
      }
LAB_148bc0fcf:
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FName,FInstallBundleCache::FBundleCacheInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,FInstallBundleCache::FBundleCacheInfo>,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,FInstallBundleCache::FBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>_>::FValueComparisonClass<FInstallBundleCache::FCacheSortPredicate>_>_>_>
                (pTVar18,iVar11,param_3,param_4);
LAB_148bc0fe0:
      ppTVar15 = ppTVar15 + -3;
    } while (&local_348 <= ppTVar15);
  }
  return;
code_r0x000148bc0e8c:
  bVar10 = FInstallBundleCache::FCacheSortPredicate::operator()
                     (((((param_4.Predicate)->Predicate).Predicate)->Predicate).Predicate,
                      (FBundleCacheInfo *)((pTVar17->ElementData).Pad + 8),
                      (FBundleCacheInfo *)((longlong)pTVar14 + 0x48));
  if (!bVar10) goto LAB_148bc0e83;
LAB_148bc0ea3:
  do {
    pTVar13 = pTVar12;
    pTVar12 = pTVar13 + -1;
    if (pTVar12 <= pTVar17) break;
    bVar10 = FInstallBundleCache::FCacheSortPredicate::operator()
                       (((((param_4.Predicate)->Predicate).Predicate)->Predicate).Predicate,
                        (FBundleCacheInfo *)((longlong)pTVar13 + -0x38),
                        (FBundleCacheInfo *)((pTVar17->ElementData).Pad + 8));
  } while (!bVar10);
  uVar1 = *(undefined8 *)((longlong)pTVar13 + -0x38);
  if (pTVar18 <= pTVar12) {
    TVar2 = pTVar18->_s_1;
    uVar3 = *(undefined8 *)((longlong)pTVar14 + 0x48);
    uVar4 = *(undefined8 *)((longlong)pTVar14 + 0x50);
    uVar5 = *(undefined8 *)((longlong)pTVar14 + 0x58);
    uVar6 = *(undefined8 *)((longlong)pTVar14 + 0x60);
    uVar7 = *(undefined8 *)((longlong)pTVar14 + 0x68);
    uVar8 = *(undefined8 *)((longlong)pTVar14 + 0x70);
    uVar9 = *(undefined8 *)((longlong)pTVar14 + 0x78);
    pTVar18->_s_1 = pTVar12->_s_1;
    *(undefined8 *)((longlong)pTVar14 + 0x48) = uVar1;
    uVar1 = *(undefined8 *)((longlong)pTVar13 + -0x28);
    *(undefined8 *)((longlong)pTVar14 + 0x50) = *(undefined8 *)((longlong)pTVar13 + -0x30);
    *(undefined8 *)((longlong)pTVar14 + 0x58) = uVar1;
    uVar1 = *(undefined8 *)((longlong)pTVar13 + -0x18);
    *(undefined8 *)((longlong)pTVar14 + 0x60) = *(undefined8 *)((longlong)pTVar13 + -0x20);
    *(undefined8 *)((longlong)pTVar14 + 0x68) = uVar1;
    uVar1 = *(undefined8 *)((longlong)pTVar13 + -8);
    *(undefined8 *)((longlong)pTVar14 + 0x70) = *(undefined8 *)((longlong)pTVar13 + -0x10);
    *(undefined8 *)((longlong)pTVar14 + 0x78) = uVar1;
    pTVar12->_s_1 = TVar2;
    *(undefined8 *)((longlong)pTVar13 + -0x38) = uVar3;
    *(undefined8 *)((longlong)pTVar13 + -0x30) = uVar4;
    *(undefined8 *)((longlong)pTVar13 + -0x28) = uVar5;
    *(undefined8 *)((longlong)pTVar13 + -0x20) = uVar6;
    *(undefined8 *)((longlong)pTVar13 + -0x18) = uVar7;
    *(undefined8 *)((longlong)pTVar13 + -0x10) = uVar8;
    *(undefined8 *)((longlong)pTVar13 + -8) = uVar9;
    goto LAB_148bc0e83;
  }
  TVar2 = pTVar17->_s_1;
  uVar3 = *(undefined8 *)((pTVar17->ElementData).Pad + 8);
  uVar4 = *(undefined8 *)((pTVar17->ElementData).Pad + 0x10);
  uVar5 = *(undefined8 *)((pTVar17->ElementData).Pad + 0x18);
  uVar6 = *(undefined8 *)((pTVar17->ElementData).Pad + 0x20);
  uVar7 = *(undefined8 *)((pTVar17->ElementData).Pad + 0x28);
  iVar16 = iVar16 + -1;
  uVar8 = *(undefined8 *)((pTVar17->ElementData).Pad + 0x30);
  uVar9 = *(undefined8 *)((pTVar17->ElementData).Pad + 0x38);
  pTVar17->_s_1 = pTVar12->_s_1;
  *(undefined8 *)((pTVar17->ElementData).Pad + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)pTVar13 + -0x28);
  *(undefined8 *)((pTVar17->ElementData).Pad + 0x10) = *(undefined8 *)((longlong)pTVar13 + -0x30);
  *(undefined8 *)((pTVar17->ElementData).Pad + 0x18) = uVar1;
  uVar1 = *(undefined8 *)((longlong)pTVar13 + -0x18);
  *(undefined8 *)((pTVar17->ElementData).Pad + 0x20) = *(undefined8 *)((longlong)pTVar13 + -0x20);
  *(undefined8 *)((pTVar17->ElementData).Pad + 0x28) = uVar1;
  uVar1 = *(undefined8 *)((longlong)pTVar13 + -8);
  *(undefined8 *)((pTVar17->ElementData).Pad + 0x30) = *(undefined8 *)((longlong)pTVar13 + -0x10);
  *(undefined8 *)((pTVar17->ElementData).Pad + 0x38) = uVar1;
  pTVar12->_s_1 = TVar2;
  *(undefined8 *)((longlong)pTVar13 + -0x38) = uVar3;
  *(undefined8 *)((longlong)pTVar13 + -0x30) = uVar4;
  *(undefined8 *)((longlong)pTVar13 + -0x28) = uVar5;
  *(undefined8 *)((longlong)pTVar13 + -0x20) = uVar6;
  *(undefined8 *)((longlong)pTVar13 + -0x18) = uVar7;
  *(undefined8 *)((longlong)pTVar13 + -0x10) = uVar8;
  *(undefined8 *)((longlong)pTVar13 + -8) = uVar9;
  if ((longlong)((longlong)pTVar12 + (-0x40 - (longlong)pTVar17) & 0xffffffffffffffc0U) <
      (longlong)((longlong)pTVar19 - (longlong)pTVar18 & 0xffffffffffffffc0U)) {
    if (pTVar18 < pTVar19) {
      *ppTVar15 = pTVar18;
      ppTVar15[1] = pTVar19;
      *(int *)(ppTVar15 + 2) = iVar16;
      ppTVar15 = ppTVar15 + 3;
    }
    if (pTVar12 <= pTVar17 + 1) goto LAB_148bc0fe0;
    pTVar19 = pTVar13 + -2;
    pTVar18 = pTVar17;
  }
  else {
    if (pTVar17 + 1 < pTVar12) {
      *ppTVar15 = pTVar17;
      ppTVar15[1] = pTVar13 + -2;
      *(int *)(ppTVar15 + 2) = iVar16;
      ppTVar15 = ppTVar15 + 3;
    }
    if (pTVar19 <= pTVar18) goto LAB_148bc0fe0;
  }
  iVar11 = (int)((longlong)pTVar19 - (longlong)pTVar18 >> 6) + 1;
  pTVar17 = pTVar18;
  if (iVar16 == 0) goto LAB_148bc0fcf;
  goto LAB_148bc0e20;
}

// Merge<TTuple<FString,TArray<FRegexPattern,TSizedDefaultAllocator<32>_>_>,FIdentityFunctor,TDereferenceWrapper<TTuple<FString,TArray<FRegexPattern,TSizedDefaultAllocator<32>_>_>,`InstallBundleUtil::LoadBundleRegexFromConfig'::__l2::<lambda_1>_>_> @ 148bc1210

void __cdecl
AlgoImpl::
Merge<TTuple<FString,TArray<FRegexPattern,TSizedDefaultAllocator<32>_>_>,FIdentityFunctor,TDereferenceWrapper<TTuple<FString,TArray<FRegexPattern,TSizedDefaultAllocator<32>_>_>,_InstallBundleUtil::LoadBundleRegexFromConfig_::__l2::<lambda_1>_>_>
          (TTuple<FString,TArray<FRegexPattern,TSizedDefaultAllocator<32>_>_> *param_1,int param_2,
          int param_3,FIdentityFunctor param_4,
          TDereferenceWrapper<TTuple<FString,TArray<FRegexPattern,TSizedDefaultAllocator<32>_>_>,,TArray<TTuple<FString,TArray<FRegexPattern,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>___cdecl_InstallBundleUtil::LoadBundleRegexFromConfig(FConfigFile_const_&,TFunctionRef<bool___cdecl(FConfigFile_const_&,FString_const_&)>)_::_2_::<lambda_1>_>
          param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  TTuple<FString,TArray<FRegexPattern,TSizedDefaultAllocator<32>_>_> *pTVar9;
  TTuple<FString,TArray<FRegexPattern,TSizedDefaultAllocator<32>_>_> *pTVar11;
  int iVar12;
  TTuple<FString,TArray<FRegexPattern,TSizedDefaultAllocator<32>_>_> *pTVar13;
  TTuple<FString,TArray<FRegexPattern,TSizedDefaultAllocator<32>_>_> *pTVar14;
  TTuple<FString,TArray<FRegexPattern,TSizedDefaultAllocator<32>_>_> *pTVar15;
  uint uVar16;
  uint uVar17;
  int local_58;
  TTuple<FString,TArray<FRegexPattern,TSizedDefaultAllocator<32>_>_> *pTVar10;
  
  if (0 < param_2) {
    local_58 = 0;
    do {
      if (param_3 <= param_2) {
        return;
      }
      iVar12 = 0;
      if (0 < param_2 - local_58) {
        uVar17 = param_2 - local_58;
        iVar12 = 0;
        do {
          uVar16 = uVar17 >> 1;
          bVar6 = `InstallBundleUtil::LoadBundleRegexFromConfig'::__l2::<lambda_1>::operator()
                            (param_5.Predicate,param_1 + param_2,
                             param_1 + (longlong)(int)(uVar16 + iVar12) + (longlong)local_58);
          if (!bVar6) {
            iVar12 = uVar16 + iVar12 + (uVar17 & 1);
          }
          uVar17 = uVar16;
        } while (uVar16 != 0);
      }
      local_58 = local_58 + iVar12;
      if (param_2 <= local_58) {
        return;
      }
      iVar12 = 0;
      pTVar13 = param_1 + local_58;
      uVar17 = param_3 - param_2;
      if (0 < (int)uVar17) {
        do {
          uVar16 = uVar17 >> 1;
          bVar6 = `InstallBundleUtil::LoadBundleRegexFromConfig'::__l2::<lambda_1>::operator()
                            (param_5.Predicate,
                             param_1 + (longlong)(int)(uVar16 + iVar12) + (longlong)param_2,pTVar13)
          ;
          if (bVar6) {
            iVar12 = uVar16 + iVar12 + (uVar17 & 1);
          }
          uVar17 = uVar16;
        } while (uVar16 != 0);
      }
      iVar7 = (iVar12 - local_58) + param_2;
      iVar8 = param_2 - local_58;
      if ((iVar8 != 0) && (iVar8 < iVar7)) {
        pTVar9 = pTVar13 + iVar8;
        pTVar14 = pTVar13;
        pTVar10 = pTVar13 + iVar8;
        do {
          while( true ) {
            pTVar11 = pTVar9 + 1;
            pTVar15 = pTVar14 + 1;
            uVar1 = *(undefined8 *)&pTVar9->field_0x8;
            uVar2 = *(undefined8 *)pTVar14;
            uVar3 = *(undefined8 *)&pTVar14->field_0x8;
            uVar4 = *(undefined8 *)&pTVar14->field_0x10;
            uVar5 = *(undefined8 *)&pTVar14->field_0x18;
            *(undefined8 *)pTVar14 = *(undefined8 *)pTVar9;
            *(undefined8 *)&pTVar14->field_0x8 = uVar1;
            uVar1 = *(undefined8 *)&pTVar9->field_0x18;
            *(undefined8 *)&pTVar14->field_0x10 = *(undefined8 *)&pTVar9->field_0x10;
            *(undefined8 *)&pTVar14->field_0x18 = uVar1;
            *(undefined8 *)pTVar9 = uVar2;
            *(undefined8 *)&pTVar9->field_0x8 = uVar3;
            *(undefined8 *)&pTVar9->field_0x10 = uVar4;
            *(undefined8 *)&pTVar9->field_0x18 = uVar5;
            pTVar14 = pTVar15;
            if (pTVar11 == pTVar13 + iVar7) break;
            pTVar9 = pTVar11;
            if (pTVar15 == pTVar10) {
              pTVar10 = pTVar11;
            }
          }
          pTVar9 = pTVar10;
        } while (pTVar15 != pTVar10);
      }
      local_58 = local_58 + 1 + iVar12;
      param_2 = param_2 + iVar12;
    } while (local_58 < param_2);
  }
  return;
}

// NoneOf<TArray<FRegexPattern,TSizedDefaultAllocator<32>_>,``InstallBundleUtil::MatchBundleRegex'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_> @ 148bc1560

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __cdecl
Algo::
NoneOf<TArray<FRegexPattern,TSizedDefaultAllocator<32>_>,__InstallBundleUtil::MatchBundleRegex_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
          (TArray<FRegexPattern,TSizedDefaultAllocator<32>_> *param_1,<lambda_1> param_2)

{
  int iVar1;
  bool bVar2;
  FRegexMatcher *this;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  FRegexMatcher local_38;
  
  iVar1 = param_1->ArrayNum;
  pFVar4 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar4 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FRegexPattern_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar3) break;
    this = FRegexMatcher::FRegexMatcher(&local_38,(FRegexPattern *)pFVar4,param_2.Path);
    bVar2 = FRegexMatcher::FindNext(this);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.Implementation.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.Pattern.Implementation.SharedReferenceCount.ReferenceController);
    if (bVar2) {
      return false;
    }
    pFVar4 = pFVar4 + 0x10;
  }
  return true;
}

// RotateInternal<TTuple<FString,TArray<FRegexPattern,TSizedDefaultAllocator<32>_>_>_> @ 148bc1d80

int __cdecl
AlgoImpl::RotateInternal<TTuple<FString,TArray<FRegexPattern,TSizedDefaultAllocator<32>_>_>_>
          (TTuple<FString,TArray<FRegexPattern,TSizedDefaultAllocator<32>_>_> *param_1,int param_2,
          int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  TTuple<FString,TArray<FRegexPattern,TSizedDefaultAllocator<32>_>_> *pTVar6;
  TTuple<FString,TArray<FRegexPattern,TSizedDefaultAllocator<32>_>_> *pTVar8;
  TTuple<FString,TArray<FRegexPattern,TSizedDefaultAllocator<32>_>_> *pTVar9;
  TTuple<FString,TArray<FRegexPattern,TSizedDefaultAllocator<32>_>_> *pTVar10;
  TTuple<FString,TArray<FRegexPattern,TSizedDefaultAllocator<32>_>_> *pTVar7;
  
  if (param_3 != 0) {
    if (param_2 <= param_3) {
      return 0;
    }
    pTVar6 = param_1 + param_3;
    pTVar9 = param_1;
    pTVar7 = param_1 + param_3;
    do {
      while( true ) {
        pTVar8 = pTVar6 + 1;
        pTVar10 = pTVar9 + 1;
        uVar1 = *(undefined8 *)&pTVar6->field_0x8;
        uVar2 = *(undefined8 *)pTVar9;
        uVar3 = *(undefined8 *)&pTVar9->field_0x8;
        uVar4 = *(undefined8 *)&pTVar9->field_0x10;
        uVar5 = *(undefined8 *)&pTVar9->field_0x18;
        *(undefined8 *)pTVar9 = *(undefined8 *)pTVar6;
        *(undefined8 *)&pTVar9->field_0x8 = uVar1;
        uVar1 = *(undefined8 *)&pTVar6->field_0x18;
        *(undefined8 *)&pTVar9->field_0x10 = *(undefined8 *)&pTVar6->field_0x10;
        *(undefined8 *)&pTVar9->field_0x18 = uVar1;
        *(undefined8 *)pTVar6 = uVar2;
        *(undefined8 *)&pTVar6->field_0x8 = uVar3;
        *(undefined8 *)&pTVar6->field_0x10 = uVar4;
        *(undefined8 *)&pTVar6->field_0x18 = uVar5;
        pTVar9 = pTVar10;
        if (pTVar8 == param_1 + param_2) break;
        pTVar6 = pTVar8;
        if (pTVar10 == pTVar7) {
          pTVar7 = pTVar8;
        }
      }
      pTVar6 = pTVar7;
    } while (pTVar10 != pTVar7);
    param_2 = param_2 - param_3;
  }
  return param_2;
}

// StableSortInternal<TTuple<FString,TArray<FRegexPattern,TSizedDefaultAllocator<32>_>_>,FIdentityFunctor,TDereferenceWrapper<TTuple<FString,TArray<FRegexPattern,TSizedDefaultAllocator<32>_>_>,`InstallBundleUtil::LoadBundleRegexFromConfig'::__l2::<lambda_1>_>_> @ 148bc1eb0

void __cdecl
AlgoImpl::
StableSortInternal<TTuple<FString,TArray<FRegexPattern,TSizedDefaultAllocator<32>_>_>,FIdentityFunctor,TDereferenceWrapper<TTuple<FString,TArray<FRegexPattern,TSizedDefaultAllocator<32>_>_>,_InstallBundleUtil::LoadBundleRegexFromConfig_::__l2::<lambda_1>_>_>
          (TTuple<FString,TArray<FRegexPattern,TSizedDefaultAllocator<32>_>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          TDereferenceWrapper<TTuple<FString,TArray<FRegexPattern,TSizedDefaultAllocator<32>_>_>,,TArray<TTuple<FString,TArray<FRegexPattern,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>___cdecl_InstallBundleUtil::LoadBundleRegexFromConfig(FConfigFile_const_&,TFunctionRef<bool___cdecl(FConfigFile_const_&,FString_const_&)>)_::_2_::<lambda_1>_>
          param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  TTuple<FString,TArray<FRegexPattern,TSizedDefaultAllocator<32>_>_> *pTVar11;
  int iVar12;
  TTuple<FString,TArray<FRegexPattern,TSizedDefaultAllocator<32>_>_> *pTVar13;
  
  iVar8 = 0;
  if (0 < param_2) {
    pTVar13 = param_1 + 1;
    pTVar11 = param_1;
    do {
      if ((iVar8 + 1 < param_2) &&
         (bVar7 = `InstallBundleUtil::LoadBundleRegexFromConfig'::__l2::<lambda_1>::operator()
                            (param_4.Predicate,pTVar13,pTVar11), bVar7)) {
        uVar2 = *(undefined8 *)&pTVar11[1].field_0x8;
        uVar3 = *(undefined8 *)pTVar11;
        uVar4 = *(undefined8 *)&pTVar11->field_0x8;
        uVar5 = *(undefined8 *)&pTVar11->field_0x10;
        uVar6 = *(undefined8 *)&pTVar11->field_0x18;
        *(undefined8 *)pTVar11 = *(undefined8 *)(pTVar11 + 1);
        *(undefined8 *)&pTVar11->field_0x8 = uVar2;
        uVar2 = *(undefined8 *)&pTVar11[1].field_0x18;
        *(undefined8 *)&pTVar11->field_0x10 = *(undefined8 *)&pTVar11[1].field_0x10;
        *(undefined8 *)&pTVar11->field_0x18 = uVar2;
        *(undefined8 *)(pTVar11 + 1) = uVar3;
        *(undefined8 *)&pTVar11[1].field_0x8 = uVar4;
        *(undefined8 *)&pTVar11[1].field_0x10 = uVar5;
        *(undefined8 *)&pTVar11[1].field_0x18 = uVar6;
      }
      iVar8 = iVar8 + 2;
      pTVar13 = pTVar13 + 2;
      pTVar11 = pTVar11 + 2;
    } while (iVar8 < param_2);
  }
  iVar8 = 2;
  if (2 < param_2) {
    do {
      iVar1 = iVar8 * 2;
      iVar9 = 0;
      iVar10 = param_2;
      do {
        iVar12 = iVar10;
        if (iVar1 <= iVar10) {
          iVar12 = iVar1;
        }
        Merge<TTuple<FString,TArray<FRegexPattern,TSizedDefaultAllocator<32>_>_>,FIdentityFunctor,TDereferenceWrapper<TTuple<FString,TArray<FRegexPattern,TSizedDefaultAllocator<32>_>_>,_InstallBundleUtil::LoadBundleRegexFromConfig_::__l2::<lambda_1>_>_>
                  (param_1 + iVar9,iVar8,iVar12,param_3,param_4);
        iVar9 = iVar9 + iVar1;
        iVar10 = iVar10 + iVar8 * -2;
      } while (iVar9 < param_2);
      iVar8 = iVar1;
    } while (iVar1 < param_2);
  }
  return;
}

// TLexToString<enum_EInstallBundleInstallState,wchar_t_const_*_[3],3> @ 148bc1fd0

wchar_t * __cdecl
InstallBundleUtil::TLexToString<enum_EInstallBundleInstallState,wchar_t_const_*_[3],3>
          (EInstallBundleInstallState param_1,wchar_t *(*param_2) [3])

{
  if (param_1 < Count) {
    return (*param_2)[(int)param_1];
  }
  return L"";
}

// TLexToString<enum_EInstallBundleManagerInitResult,wchar_t_const_*_[14],14> @ 148bc1ff0

wchar_t * __cdecl
InstallBundleUtil::TLexToString<enum_EInstallBundleManagerInitResult,wchar_t_const_*_[14],14>
          (EInstallBundleManagerInitResult param_1,wchar_t *(*param_2) [14])

{
  if (param_1 < Count) {
    return (*param_2)[(int)param_1];
  }
  return L"";
}

// TLexToString<enum_EInstallBundleManagerPatchCheckResult,wchar_t_const_*_[5],5> @ 148bc2010

wchar_t * __cdecl
InstallBundleUtil::TLexToString<enum_EInstallBundleManagerPatchCheckResult,wchar_t_const_*_[5],5>
          (EInstallBundleManagerPatchCheckResult param_1,wchar_t *(*param_2) [5])

{
  if (param_1 < Count) {
    return (*param_2)[param_1];
  }
  return L"";
}

// TLexToString<enum_EInstallBundlePriority,wchar_t_const_*_[3],3> @ 148bc2030

wchar_t * __cdecl
InstallBundleUtil::TLexToString<enum_EInstallBundlePriority,wchar_t_const_*_[3],3>
          (EInstallBundlePriority param_1,wchar_t *(*param_2) [3])

{
  if (param_1 < Count) {
    return (*param_2)[param_1];
  }
  return L"";
}

// TLexToString<enum_EInstallBundleReleaseResult,wchar_t_const_*_[4],4> @ 148bc2050

wchar_t * __cdecl
InstallBundleUtil::TLexToString<enum_EInstallBundleReleaseResult,wchar_t_const_*_[4],4>
          (EInstallBundleReleaseResult param_1,wchar_t *(*param_2) [4])

{
  if (param_1 < Count) {
    return (*param_2)[param_1];
  }
  return L"";
}

// TLexToString<enum_EInstallBundleResult,wchar_t_const_*_[12],12> @ 148bc2070

wchar_t * __cdecl
InstallBundleUtil::TLexToString<enum_EInstallBundleResult,wchar_t_const_*_[12],12>
          (EInstallBundleResult param_1,wchar_t *(*param_2) [12])

{
  if (param_1 < Count) {
    return (*param_2)[param_1];
  }
  return L"";
}

// TLexToString<enum_EInstallBundleSourceType,wchar_t_const_*_[5],5> @ 148bc2090

wchar_t * __cdecl
InstallBundleUtil::TLexToString<enum_EInstallBundleSourceType,wchar_t_const_*_[5],5>
          (EInstallBundleSourceType param_1,wchar_t *(*param_2) [5])

{
  if (param_1 < Count) {
    return (*param_2)[(int)param_1];
  }
  return L"";
}

// TLexToString<enum_EInstallBundleSourceUpdateBundleInfoResult,wchar_t_const_*_[5],5> @ 148bc20b0

wchar_t * __cdecl
InstallBundleUtil::
TLexToString<enum_EInstallBundleSourceUpdateBundleInfoResult,wchar_t_const_*_[5],5>
          (EInstallBundleSourceUpdateBundleInfoResult param_1,wchar_t *(*param_2) [5])

{
  if (param_1 < Count) {
    return (*param_2)[param_1];
  }
  return L"";
}

// TLexToString<enum_EInstallBundleStatus,wchar_t_const_*_[4],4> @ 148bc20d0

wchar_t * __cdecl
InstallBundleUtil::TLexToString<enum_EInstallBundleStatus,wchar_t_const_*_[4],4>
          (EInstallBundleStatus param_1,wchar_t *(*param_2) [4])

{
  if (param_1 < Count) {
    return (*param_2)[(int)param_1];
  }
  return L"";
}

// ~TFunction_OwnedObject<`FInstallManagerBundleReportCache::Load'::__l2::<lambda_1>,1,1> @ 148bc3500

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstallManagerBundleReportCache::Load'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FInstallManagerBundleReportCache::Load_::__l2::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FInstallManagerBundleReportCache::Load'::`2'::<lambda_1>,1,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x18));
  return;
}

// ~TFunction_OwnedObject<`FInstallManagerBundleReportCache::SetReport'::__l2::<lambda_1>,1,1> @ 148bc3520

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstallManagerBundleReportCache::SetReport'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FInstallManagerBundleReportCache::SetReport_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FInstallManagerBundleReportCache::SetReport'::`2'::<lambda_1>,1,1>::
        _vftable_;
  DestructItems<FInstallBundleSourceReport,int>
            (*(FInstallBundleSourceReport **)((longlong)this + 0x40),*(int *)((longlong)this + 0x48)
            );
  if (*(void **)((longlong)this + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x40));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  FJsonSerializable::~FJsonSerializable((FJsonSerializable *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`FInstallManagerBundleReportCache::Load'::__l2::<lambda_2>,1,1> @ 148bc3570

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstallManagerBundleReportCache::Load'::__l2::<lambda_2>,1,1>::
~TFunction_OwnedObject<_FInstallManagerBundleReportCache::Load_::__l2::<lambda_2>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FInstallManagerBundleReportCache::Load'::`2'::<lambda_2>,1,1>::
        _vftable_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x20));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x18));
  return;
}

// operator() @ 148bc4e80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
`InstallBundleUtil::LoadBundleRegexFromConfig'::__l2::<lambda_1>::operator()
          (void *this,TTuple<FString,TArray<FRegexPattern,TSizedDefaultAllocator<32>_>_> *param_1,
          TTuple<FString,TArray<FRegexPattern,TSizedDefaultAllocator<32>_>_> *param_2)

{
  TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
  *pTVar1;
  bool bVar2;
  FString *pFVar3;
  FConfigSection *pFVar4;
  ForAnyElementType FVar5;
  int local_res8 [2];
  int local_res20 [2];
  FString local_48;
  FString local_38;
  FString local_28;
  
  local_res20[0] = 0x7fffffff;
  local_res8[0] = 0x7fffffff;
  pFVar3 = InstallBundleUtil::GetInstallBundleSectionPrefix();
  ::FString::ConcatFF(&local_38,pFVar3,(FString *)param_1);
  pFVar3 = InstallBundleUtil::GetInstallBundleSectionPrefix();
  ::FString::ConcatFF(&local_48,pFVar3,(FString *)param_2);
  pTVar1 = *(TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
             **)this;
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar5.Data = local_38.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_28,(wchar_t *)FVar5.Data);
  AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  pFVar4 = TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
           ::Find(pTVar1,&local_28);
  ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (((pFVar4 == (FConfigSection *)0x0) ||
      (bVar2 = FConfigSection::GetInt(pFVar4,L"Order",local_res20), !bVar2)) &&
     (2 < (byte)LogInstallBundleManager._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInstallBundleManager);
  }
  pTVar1 = *(TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
             **)this;
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar5.Data = local_48.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_28,(wchar_t *)FVar5.Data);
  AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  pFVar4 = TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
           ::Find(pTVar1,&local_28);
  ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (((pFVar4 == (FConfigSection *)0x0) ||
      (bVar2 = FConfigSection::GetInt(pFVar4,L"Order",local_res8), !bVar2)) &&
     (2 < (byte)LogInstallBundleManager._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInstallBundleManager);
  }
  bVar2 = local_res20[0] < local_res8[0];
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// `vcall'{144,{flat}}'_}' @ 148bc5340

/* [thunk]: __cdecl
   InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::`vcall'{144,{flat}}' }' */

void __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::_vcall__144__flat______
          (FPersistentStatContainerBase *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148bc5343. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))();
  return;
}

// `vcall'{184,{flat}}'_}' @ 148bc5350

/* [thunk]: __cdecl
   InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::`vcall'{184,{flat}}' }' */

void __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::_vcall__184__flat______
          (FPersistentStatContainerBase *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148bc5353. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xb8))();
  return;
}

// `vcall'{192,{flat}}'_}' @ 148bc5360

/* [thunk]: __cdecl
   InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::`vcall'{192,{flat}}' }' */

void __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::_vcall__192__flat______
          (FPersistentStatContainerBase *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148bc5363. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xc0))();
  return;
}

// `scalar_deleting_destructor' @ 148bc5370

void * __thiscall
FAsyncTask<InstallBundleUtil::FInstallBundleWork>::_scalar_deleting_destructor_
          (FAsyncTask<InstallBundleUtil::FInstallBundleWork> *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&(this->Task).OnCompleteFunc != 0) {
    plVar1 = *(longlong **)&(this->Task).OnCompleteFunc.field_0x28;
    plVar2 = (longlong *)&(this->Task).OnCompleteFunc.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&(this->Task).WorkFunc != 0) {
    plVar1 = *(longlong **)&(this->Task).WorkFunc.field_0x28;
    plVar2 = (longlong *)&(this->Task).WorkFunc.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  FAsyncTaskBase::~FAsyncTaskBase((FAsyncTaskBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bc53f0

void * __thiscall
FAutoDeleteAsyncTask<InstallBundleUtil::FInstallBundleWork>::_scalar_deleting_destructor_
          (FAutoDeleteAsyncTask<InstallBundleUtil::FInstallBundleWork> *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  
  if (*(longlong *)&(this->Task).OnCompleteFunc != 0) {
    plVar3 = *(longlong **)&(this->Task).OnCompleteFunc.field_0x28;
    plVar5 = (longlong *)&(this->Task).OnCompleteFunc.field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar5 = plVar3;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (*(longlong *)&(this->Task).WorkFunc != 0) {
    plVar3 = *(longlong **)&(this->Task).WorkFunc.field_0x28;
    plVar5 = (longlong *)&(this->Task).WorkFunc.field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar5 = plVar3;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  this->_padding_ = (longlong)&___7IQueuedWork__6B_;
  puVar4 = (undefined8 *)this->_padding_;
  if (puVar4 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar4 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bc54a0

void * __thiscall
IBaseDelegateInstance<void___cdecl(FInstallBundlePauseInfo),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FInstallBundlePauseInfo),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bc54d0

void * __thiscall
IBaseDelegateInstance<void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bc5500

void * __thiscall
TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,void___cdecl(FInstallBundlePauseInfo),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,void___cdecl(FInstallBundlePauseInfo),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bc5530

void * __thiscall
TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bc5560

void * __thiscall
TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,bool___cdecl(float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FInstallBundleCombinedProgressTracker,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bc5590

void * __thiscall
TBaseRawMethodDelegateInstance<0,InstallBundleUtil::PersistentStats::FPersistentStatContainerBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,InstallBundleUtil::PersistentStats::FPersistentStatContainerBase,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bc55c0

void * __thiscall
TBaseRawMethodDelegateInstance<0,InstallBundleUtil::PersistentStats::FPersistentStatContainerBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,InstallBundleUtil::PersistentStats::FPersistentStatContainerBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bc55f0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FInstallBundlePauseInfo),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FInstallBundlePauseInfo),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bc5620

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FInstallBundleRequestResultInfo),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bc5650

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstallManagerBundleReportCache::Load'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FInstallManagerBundleReportCache::Load'::`2'::<lambda_1>,1,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bc56a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstallManagerBundleReportCache::SetReport'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FInstallManagerBundleReportCache::SetReport'::`2'::<lambda_1>,1,1>::
        _vftable_;
  DestructItems<FInstallBundleSourceReport,int>
            (*(FInstallBundleSourceReport **)((longlong)this + 0x40),*(int *)((longlong)this + 0x48)
            );
  if (*(void **)((longlong)this + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x40));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  FJsonSerializable::~FJsonSerializable((FJsonSerializable *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bc5720

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstallManagerBundleReportCache::Load'::__l2::<lambda_2>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FInstallManagerBundleReportCache::Load'::`2'::<lambda_2>,1,1>::
        _vftable_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x20));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bc5780

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FInstallManagerBundleReport,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FInstallManagerBundleReport,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bc57c0

void * __thiscall
InstallBundleUtil::PersistentStats::FBundlePersistentStats::_scalar_deleting_destructor_
          (FBundlePersistentStats *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FBundlePersistentStats_PersistentStats_InstallBundleUtil__6B_;
  pFVar1 = (this->BundleName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FPersistentStatsBase::~FPersistentStatsBase((FPersistentStatsBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bc5820

void * __thiscall
FInstallBundleCache::_scalar_deleting_destructor_(FInstallBundleCache *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  *(undefined4 *)&(this->CacheInfo).field_0x48 = 0;
  this->_padding_ = (longlong)&___7FInstallBundleCache__6B_;
  pvVar3 = *(void **)&(this->CacheInfo).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FInstallBundleCache::FBundleCacheInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FInstallBundleCache::FBundleCacheInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FInstallBundleCache::FBundleCacheInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CacheInfo);
  *(undefined4 *)&(this->PerSourceCacheInfo).field_0x48 = 0;
  pvVar3 = *(void **)&(this->PerSourceCacheInfo).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PerSourceCacheInfo);
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bc58d0

void * __thiscall
FInstallBundleReport::_scalar_deleting_destructor_(FInstallBundleReport *this,uint param_1)

{
  ~FInstallBundleReport(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bc5910

void * __thiscall
FInstallBundleSourceReport::_scalar_deleting_destructor_
          (FInstallBundleSourceReport *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FInstallBundleReport,int>
            ((FInstallBundleReport *)(this->Bundles).AllocatorInstance.Data,(this->Bundles).ArrayNum
            );
  pFVar1 = (this->Bundles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((*(int *)((longlong)&(this->TargetVersion).field0_0x0 + 0xc) != -1) &&
     (pFVar1 = (this->TargetVersion).field0_0x0.TypedValue.Data.AllocatorInstance.Data,
     pFVar1 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar1);
  }
  FJsonSerializable::~FJsonSerializable((FJsonSerializable *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bc5980

void * __thiscall
FInstallManagerBundleReport::_scalar_deleting_destructor_
          (FInstallManagerBundleReport *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FInstallBundleSourceReport,int>
            ((FInstallBundleSourceReport *)(this->SourceReports).AllocatorInstance.Data,
             (this->SourceReports).ArrayNum);
  pFVar1 = (this->SourceReports).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SessionId).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FJsonSerializable::~FJsonSerializable((FJsonSerializable *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bc59f0

void * __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatContainerBase::_scalar_deleting_destructor_
          (FPersistentStatContainerBase *this,uint param_1)

{
  ~FPersistentStatContainerBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bc5a30

void * __thiscall
InstallBundleUtil::PersistentStats::FPersistentStatsBase::_scalar_deleting_destructor_
          (FPersistentStatsBase *this,uint param_1)

{
  ~FPersistentStatsBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bc5a70

void * __thiscall
InstallBundleUtil::PersistentStats::FPersistentTimerData::_scalar_deleting_destructor_
          (FPersistentTimerData *this,uint param_1)

{
  FJsonSerializable::~FJsonSerializable((FJsonSerializable *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bc5ab0

void * __thiscall
InstallBundleUtil::PersistentStats::FSessionPersistentStats::_scalar_deleting_destructor_
          (FSessionPersistentStats *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FSessionPersistentStats_PersistentStats_InstallBundleUtil__6B_;
  DestructItems<FString,int>
            ((FString *)(this->RequiredBundles).AllocatorInstance.Data,
             (this->RequiredBundles).ArrayNum);
  pFVar1 = (this->RequiredBundles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SessionName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FPersistentStatsBase::~FPersistentStatsBase((FPersistentStatsBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bc5b30

void * __thiscall
FInstallBundleReport::FStateInstalling::_scalar_deleting_destructor_
          (FStateInstalling *this,uint param_1)

{
  FJsonSerializable::~FJsonSerializable((FJsonSerializable *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bc5b70

void * __thiscall
FInstallBundleReport::FStateUpdatable::_scalar_deleting_destructor_
          (FStateUpdatable *this,uint param_1)

{
  FJsonSerializable::~FJsonSerializable((FJsonSerializable *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bc5bb0

void * __thiscall
FInstallBundleReport::FStateUpdated::_scalar_deleting_destructor_(FStateUpdated *this,uint param_1)

{
  FJsonSerializable::~FJsonSerializable((FJsonSerializable *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bc5bf0

void * __thiscall
FInstallBundleReport::FStateUpdating::_scalar_deleting_destructor_
          (FStateUpdating *this,uint param_1)

{
  FJsonSerializable::~FJsonSerializable((FJsonSerializable *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// AllInstallBundlePredicate @ 148bc6040

bool __cdecl InstallBundleUtil::AllInstallBundlePredicate(FConfigFile *param_1,FString *param_2)

{
  return true;
}

// CleanupInstallBundleAsyncIOTasks @ 148bc6370

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
InstallBundleUtil::CleanupInstallBundleAsyncIOTasks
          (TArray<TUniquePtr<FAsyncTask<InstallBundleUtil::FInstallBundleWork>,TDefaultDelete<FAsyncTask<InstallBundleUtil::FInstallBundleWork>_>_>,TSizedDefaultAllocator<32>_>
           *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  FAsyncTaskBase *this;
  FQueuedThreadPool *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  FScriptContainerElement *pFVar13;
  bool bVar14;
  char cVar15;
  bool bVar16;
  uint uVar17;
  FName *pFVar18;
  TStatIdData *pTVar19;
  FThreadStats *pFVar20;
  FThreadStatsPool *pFVar21;
  ulonglong uVar22;
  FNameEntryId FVar23;
  FName FVar24;
  FScriptContainerElement *pFVar25;
  FName FVar26;
  undefined1 local_res10 [8];
  FColor_u_0 local_res18 [2];
  FColor_u_0 local_res20 [2];
  FName local_d8;
  uint local_d0;
  uint uStack_cc;
  FName local_c8;
  uint local_c0;
  uint uStack_bc;
  FName local_b8;
  FName local_a8;
  LARGE_INTEGER local_98;
  LARGE_INTEGER local_90;
  FScriptContainerElement *local_88;
  FStatMessage local_80;
  FStatMessage local_70;
  FName local_60;
  FName local_58 [3];
  
  uVar2 = param_1->ArrayNum;
  uVar22 = (ulonglong)(int)uVar2;
  pFVar25 = (param_1->AllocatorInstance).Data;
  local_88 = pFVar25 + uVar22 * 8;
LAB_148bc63b2:
  do {
    pFVar13 = local_88;
    if (param_1->ArrayNum != (int)uVar22) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<FAsyncTask<InstallBundleUtil::FInstallBundleWork>,TDefaultDelete<FAsyncTask<InstallBundleUtil::FInstallBundleWork>_>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar25 == pFVar13) {
      return;
    }
    if ((*(longlong *)pFVar25 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Task",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InstallBundleManager\\Private\\InstallBundleUtils.cpp"
                            ,0x180,L""), bVar14)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    this = *(FAsyncTaskBase **)pFVar25;
    pFVar4 = this->QueuedPool;
    if (pFVar4 != (FQueuedThreadPool *)0x0) {
      cVar15 = (**(code **)((longlong)*pFVar4 + 0x20))(pFVar4,this);
      iVar3 = (this->WorkNotFinishedCounter).Counter;
      if (cVar15 != '\0') {
        if ((iVar3 != 1) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("WorkNotFinishedCounter.GetValue() == 1",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                                ,0x1e8,L""), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        LOCK();
        (this->WorkNotFinishedCounter).Counter = (this->WorkNotFinishedCounter).Counter + -1;
        UNLOCK();
        FAsyncTaskBase::FinishThreadedWork(this);
        pFVar25 = pFVar25 + 8;
        uVar22 = (ulonglong)uVar2;
        this->QueuedPool = (FQueuedThreadPool *)0x0;
        goto LAB_148bc63b2;
      }
      if (iVar3 != 0) {
        (**(code **)(this->_padding_ + 0x40))(this);
      }
    }
    lVar5 = *(longlong *)pFVar25;
    if (*(longlong *)(lVar5 + 0x48) != 0) {
      bVar14 = -1 < CpuChannel->Enabled;
      if (bVar14) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&`private:_void___cdecl_FAsyncTaskBase::SyncCompletion(bool)___ptr64'::__l5::
                    __CpuProfilerEventSpecId343,"FAsyncTask::SyncCompletion",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                   ,0x157);
        FCpuProfilerTrace::OutputBeginEvent
                  (`private:_void___cdecl_FAsyncTaskBase::SyncCompletion(bool)___ptr64'::__l5::
                   __CpuProfilerEventSpecId343);
      }
      pFVar18 = *(FName **)(lVar5 + 0x68);
      bVar11 = false;
      bVar10 = false;
      local_b8.ComparisonIndex.Value = 0;
      local_b8.Number = 0;
      FVar26 = *pFVar18;
      FVar23 = FVar26.ComparisonIndex.Value;
      uVar17 = FVar26.Number;
      if ((FVar23.Value == 0) && (uVar17 == 0)) {
LAB_148bc657e:
        bVar12 = false;
        FVar26 = local_b8;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_res18[0].Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res18[0]._s_0,(char *)pFVar18[2]);
          bVar11 = false;
          bVar10 = true;
          if (-1 < CpuChannel->Enabled) {
            local_d8.ComparisonIndex.Value = FVar23.Value;
            local_d8.Number = uVar17;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_d8,(wchar_t *)pFVar18[1],
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                       ,0x158);
            bVar11 = true;
            bVar10 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_148bc657e;
        local_d0 = FVar23.Value;
        uStack_cc = uVar17;
        local_b8 = FVar26;
        FThreadStats::AddMessage(FVar26,CycleScopeStart);
        bVar11 = false;
        bVar12 = true;
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `private:_void___cdecl_FAsyncTaskBase::SyncCompletion(bool)___ptr64'::__l5::
           _thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`private:_void___cdecl_FAsyncTaskBase::SyncCompletion(bool)___ptr64'
                               ::__l5::_thread_safe_static_guard_0__),
         `private:_void___cdecl_FAsyncTaskBase::SyncCompletion(bool)___ptr64'::__l5::
         _thread_safe_static_guard_0__ == -1)) {
        _StatPtr_STAT_FAsyncTask_SyncCompletion = (TStatIdData *)0x0;
        pFVar18 = ::FName::FName(&local_60,"STAT_FAsyncTask_SyncCompletion");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &`private:_void___cdecl_FAsyncTaskBase::SyncCompletion(bool)___ptr64'::__l5::
                    StatPtr_STAT_FAsyncTask_SyncCompletion,*pFVar18,L"FAsyncTask::SyncCompletion",
                   "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",L"ThreadPool Async Tasks",
                   true,true,ST_int64,true,false,MCR_Invalid);
        _Init_thread_footer(&`private:_void___cdecl_FAsyncTaskBase::SyncCompletion(bool)___ptr64'::
                             __l5::_thread_safe_static_guard_0__);
      }
      pTVar19 = _StatPtr_STAT_FAsyncTask_SyncCompletion;
      if (_StatPtr_STAT_FAsyncTask_SyncCompletion == (TStatIdData *)0x0) {
        pFVar18 = ::FName::FName(local_58,"STAT_FAsyncTask_SyncCompletion");
        pTVar19 = FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)
                             &`private:_void___cdecl_FAsyncTaskBase::SyncCompletion(bool)___ptr64'::
                              __l5::StatPtr_STAT_FAsyncTask_SyncCompletion,*pFVar18,
                             L"FAsyncTask::SyncCompletion","STATGROUP_ThreadPoolAsyncTasks",
                             "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,
                             false,MCR_Invalid);
      }
      FVar24 = *(FName *)&pTVar19->Name;
      bVar8 = false;
      bVar7 = false;
      local_a8.ComparisonIndex.Value = 0;
      local_a8.Number = 0;
      FVar23 = FVar24.ComparisonIndex.Value;
      uVar17 = FVar24.Number;
      if ((FVar23.Value == 0) && (uVar17 == 0)) {
LAB_148bc66c8:
        bVar9 = false;
        FVar24 = local_a8;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_res20[0].Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_res20[0]._s_0,(pTVar19->StatDescriptionAnsi).Ptr);
          bVar8 = false;
          bVar7 = true;
          if (-1 < CpuChannel->Enabled) {
            local_c8.ComparisonIndex.Value = FVar23.Value;
            local_c8.Number = uVar17;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_c8,(pTVar19->StatDescriptionWide).Ptr,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                       ,0x159);
            bVar8 = true;
            bVar7 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_148bc66c8;
        local_c0 = FVar23.Value;
        uStack_bc = uVar17;
        local_a8 = FVar24;
        FThreadStats::AddMessage(FVar24,CycleScopeStart);
        bVar9 = true;
      }
      if ((*(longlong *)(lVar5 + 0x40) == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("DoneEvent",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                              ,0x15b,L""), bVar16)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      (**(code **)(**(longlong **)(lVar5 + 0x40) + 0x20))(*(longlong **)(lVar5 + 0x40),0xffffffff);
      *(undefined8 *)(lVar5 + 0x48) = 0;
      if (bVar7) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar8) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar9) && (FVar24 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar20 == (FThreadStats *)0x0) {
          pFVar21 = FThreadStatsPool::Get();
          pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
        }
        if (pFVar20->bWaitForExplicitFlush < pFVar20->ScopeCount) {
          local_80.NameAndInfo.Index = FVar24.ComparisonIndex.Value;
          local_80.NameAndInfo.Number = FVar24.Number & 0xffff6fff | 0x6000;
          QueryPerformanceCounter(&local_98);
          local_80.StatData.Pad[4] = '\0';
          local_80.StatData.Pad[5] = '\0';
          local_80.StatData.Pad[6] = '\0';
          local_80.StatData.Pad[7] = '\0';
          local_80.StatData.Pad[0] = local_98.s.LowPart._0_1_;
          local_80.StatData.Pad[1] = local_98.s.LowPart._1_1_;
          local_80.StatData.Pad[2] = local_98.s.LowPart._2_1_;
          local_80.StatData.Pad[3] = local_98.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(pFVar20,&local_80);
          piVar1 = &pFVar20->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(pFVar20,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar20,false,false);
          }
        }
      }
      if (bVar10) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar11) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (((bVar12) && (FVar26 != (FName)0x0)) &&
         ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff))))
      {
        pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar20 == (FThreadStats *)0x0) {
          pFVar21 = FThreadStatsPool::Get();
          pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
        }
        if (pFVar20->bWaitForExplicitFlush < pFVar20->ScopeCount) {
          local_70.NameAndInfo.Index = FVar26.ComparisonIndex.Value;
          local_70.NameAndInfo.Number = FVar26.Number & 0xffff6fff | 0x6000;
          QueryPerformanceCounter(&local_90);
          local_70.StatData.Pad[4] = '\0';
          local_70.StatData.Pad[5] = '\0';
          local_70.StatData.Pad[6] = '\0';
          local_70.StatData.Pad[7] = '\0';
          local_70.StatData.Pad[0] = local_90.s.LowPart._0_1_;
          local_70.StatData.Pad[1] = local_90.s.LowPart._1_1_;
          local_70.StatData.Pad[2] = local_90.s.LowPart._2_1_;
          local_70.StatData.Pad[3] = local_90.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(pFVar20,&local_70);
          piVar1 = &pFVar20->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(pFVar20,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar20,false,false);
          }
        }
      }
      if (bVar14) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    if ((*(int *)(lVar5 + 0x38) != 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("WorkNotFinishedCounter.GetValue() == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                            ,0x16d,L""), bVar14)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (((*(longlong *)(lVar5 + 0x48) != 0) &&
        (::FDebug::DumpStackTraceToLog(Warning), *(longlong *)(lVar5 + 0x48) != 0)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("!QueuedPool",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                            ,0x16f,L""), bVar14)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((*(int *)(lVar5 + 0x38) != 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("WorkNotFinishedCounter.GetValue() == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                            ,0x16d,L""), bVar14)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (((*(longlong *)(lVar5 + 0x48) != 0) &&
        (::FDebug::DumpStackTraceToLog(Warning), *(longlong *)(lVar5 + 0x48) != 0)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("!QueuedPool",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                            ,0x16f,L""), bVar14)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar25 = pFVar25 + 8;
    uVar22 = (ulonglong)uVar2;
  } while( true );
}

// FinishInstallBundleAsyncIOTasks @ 148bc93b0

void __cdecl
InstallBundleUtil::FinishInstallBundleAsyncIOTasks
          (TArray<TUniquePtr<FAsyncTask<InstallBundleUtil::FInstallBundleWork>,TDefaultDelete<FAsyncTask<InstallBundleUtil::FInstallBundleWork>_>_>,TSizedDefaultAllocator<32>_>
           *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FAsyncTaskBase *this;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  FEvent **ppFVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 local_res8 [8];
  ForAnyElementType local_28;
  undefined8 local_20;
  
  iVar6 = param_1->ArrayNum;
  uVar9 = 0;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = 0;
  uVar12 = uVar9;
  if (0 < iVar6) {
    do {
      uVar11 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar11 < iVar6) {
        uVar5 = ~uVar11 >> 0x1f;
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
      pFVar2 = (param_1->AllocatorInstance).Data;
      pFVar1 = pFVar2 + uVar12 * 8;
      if ((*(longlong *)(pFVar2 + uVar12 * 8) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Task",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InstallBundleManager\\Private\\InstallBundleUtils.cpp"
                             ,0x16b,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (((*(FAsyncTaskBase **)pFVar1)->WorkNotFinishedCounter).Counter == 0) {
        FAsyncTaskBase::SyncCompletion(*(FAsyncTaskBase **)pFVar1,false);
        if (((local_28.Data <= pFVar1) && (pFVar1 < local_28.Data + (longlong)local_20._4_4_ * 8))
           && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = (int)local_20;
        if ((int)local_20 == local_20._4_4_) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_28,(int *)((longlong)&local_20 + 4));
        }
        local_20 = CONCAT44(local_20._4_4_,iVar6 + 1);
        *(undefined8 *)(local_28.Data + (longlong)iVar6 * 8) = *(undefined8 *)pFVar1;
        *(undefined8 *)pFVar1 = 0;
        uVar5 = 0;
        if ((int)uVar11 < param_1->ArrayNum) {
          uVar5 = ~uVar11 >> 0x1f;
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
        TArray<TUniquePtr<FAsyncTask<InstallBundleUtil::FInstallBundleWork>,TDefaultDelete<FAsyncTask<InstallBundleUtil::FInstallBundleWork>_>_>,TSizedDefaultAllocator<32>_>
        ::RemoveAtSwapImpl(param_1,uVar11);
      }
      else {
        uVar9 = (ulonglong)(uVar11 + 1);
        uVar12 = uVar12 + 1;
      }
      iVar6 = param_1->ArrayNum;
    } while ((int)uVar9 < iVar6);
  }
  iVar6 = (int)local_20;
  pFVar1 = local_28.Data + (longlong)(int)local_20 * 8;
  FVar10.Data = local_28.Data;
  while( true ) {
    if ((int)local_20 != iVar6) {
      `TCheckedPointerIterator<TUniquePtr<FAsyncTask<InstallBundleUtil::FInstallBundleWork>,TDefaultDelete<FAsyncTask<InstallBundleUtil::FInstallBundleWork>_>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar10.Data == pFVar1) break;
    this = *(FAsyncTaskBase **)FVar10.Data;
    FAsyncTaskBase::CheckIdle(this);
    if ((void *)this[1]._padding_ != (void *)0x0) {
      UE::Core::Private::Function::CheckCallable((void *)this[1]._padding_);
      pcVar3 = (code *)this[1]._padding_;
      ppFVar8 = &this[1].DoneEvent;
      if ((FEvent **)this[1].RequiredMemory != (FEvent **)0x0) {
        ppFVar8 = (FEvent **)this[1].RequiredMemory;
      }
      uVar7 = (**(code **)&(*ppFVar8)->EventId)();
      (*pcVar3)(uVar7);
    }
    FVar10.Data = FVar10.Data + 8;
  }
  DestructItems<TUniquePtr<FAsyncTask<InstallBundleUtil::FInstallBundleWork>,TDefaultDelete<FAsyncTask<InstallBundleUtil::FInstallBundleWork>_>_>,int>
            ((TUniquePtr<FAsyncTask<InstallBundleUtil::FInstallBundleWork>,TDefaultDelete<FAsyncTask<InstallBundleUtil::FInstallBundleWork>_>_>
              *)local_28.Data,(int)local_20);
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// GetAppVersion @ 148bca4a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl InstallBundleUtil::GetAppVersion(FString *__return_storage_ptr__)

{
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_138._padding_ = 0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,"Windows",7,Yes);
  FApp::GetBuildVersion();
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s-%s");
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return __return_storage_ptr__;
}

// GetAssociatedBGTimerName @ 148bca550

ETimingStatNames __cdecl
InstallBundleUtil::PersistentStats::GetAssociatedBGTimerName(ETimingStatNames param_1)

{
  ETimingStatNames local_res8 [8];
  ETimingStatNames *local_res10 [3];
  
  switch(param_1) {
  case TotalTime_Real:
  case TotalTime_FG:
  case TotalTime_BG:
    return TotalTime_BG;
  case ChunkDBDownloadTime_Real:
  case ChunkDBDownloadTime_FG:
  case ChunkDBDownloadTime_BG:
    return ChunkDBDownloadTime_BG;
  case InstallTime_Real:
  case InstallTime_FG:
  case InstallTime_BG:
    return InstallTime_BG;
  case PSOTime_Real:
  case PSOTime_FG:
  case PSOTime_BG:
    return PSOTime_BG;
  default:
    local_res10[0] = local_res8;
    local_res8[0] = param_1;
    `InstallBundleUtil::PersistentStats::GetAssociatedBGTimerName'::__l2::<lambda_1>::operator()
              (local_res10);
    return NumStatNames;
  }
}

// GetAssociatedFGTimerName @ 148bca5f0

ETimingStatNames __cdecl
InstallBundleUtil::PersistentStats::GetAssociatedFGTimerName(ETimingStatNames param_1)

{
  ETimingStatNames local_res8 [8];
  ETimingStatNames *local_res10 [3];
  
  switch(param_1) {
  case TotalTime_Real:
  case TotalTime_FG:
  case TotalTime_BG:
    return TotalTime_FG;
  case ChunkDBDownloadTime_Real:
  case ChunkDBDownloadTime_FG:
  case ChunkDBDownloadTime_BG:
    return ChunkDBDownloadTime_FG;
  case InstallTime_Real:
  case InstallTime_FG:
  case InstallTime_BG:
    return InstallTime_FG;
  case PSOTime_Real:
  case PSOTime_FG:
  case PSOTime_BG:
    return PSOTime_FG;
  default:
    local_res10[0] = local_res8;
    local_res8[0] = param_1;
    `InstallBundleUtil::PersistentStats::GetAssociatedFGTimerName'::__l2::<lambda_1>::operator()
              (local_res10);
    return NumStatNames;
  }
}

// GetAssociatedRealTimerName @ 148bca690

ETimingStatNames __cdecl
InstallBundleUtil::PersistentStats::GetAssociatedRealTimerName(ETimingStatNames param_1)

{
  ETimingStatNames local_res8 [8];
  ETimingStatNames *local_res10 [3];
  
  switch(param_1) {
  case TotalTime_Real:
  case TotalTime_FG:
  case TotalTime_BG:
    return TotalTime_Real;
  case ChunkDBDownloadTime_Real:
  case ChunkDBDownloadTime_FG:
  case ChunkDBDownloadTime_BG:
    return ChunkDBDownloadTime_Real;
  case InstallTime_Real:
  case InstallTime_FG:
  case InstallTime_BG:
    return InstallTime_Real;
  case PSOTime_Real:
  case PSOTime_FG:
  case PSOTime_BG:
    return PSOTime_Real;
  default:
    local_res10[0] = local_res8;
    local_res8[0] = param_1;
    `InstallBundleUtil::PersistentStats::GetAssociatedRealTimerName'::__l2::<lambda_1>::operator()
              (local_res10);
    return NumStatNames;
  }
}

// GetConfiguredBundleSources @ 148bcad20

bool __cdecl
InstallBundleUtil::GetConfiguredBundleSources
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ForAnyElementType this;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_88 [16];
  undefined8 local_78;
  TArray<FString,TSizedDefaultAllocator<32>_> local_70;
  TArray<FString,TSizedDefaultAllocator<32>_> local_60;
  FScriptContainerElement *local_50;
  FScriptContainerElement *local_48;
  
  local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.ArrayNum = 0;
  local_60.ArrayMax = 0;
  iVar4 = FConfigCacheIni::GetArray
                    (GConfig,L"InstallBundleManager.FallbackBundleSources",L"FallbackBundleSources",
                     &local_60,&GInstallBundleIni);
  if (iVar4 == 0) {
LAB_148bcaf1f:
    local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.ArrayNum = 0;
    local_70.ArrayMax = 0;
    iVar4 = FConfigCacheIni::GetArray
                      (GConfig,L"InstallBundleManager.BundleSources",L"DefaultBundleSources",
                       &local_70,&GInstallBundleIni);
    if (iVar4 == 0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8365718388407795576>,true,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InstallBundleManager\\Private\\InstallBundleUtils.cpp"
                         ,0x88,
                         "GConfig->GetArray(BundleSourceSection, L\"DefaultBundleSources\", ConfigBundleSources, GInstallBundleIni)"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      bVar2 = false;
    }
    else {
      if (param_1 != &local_70) {
        DestructItems<FString,int>((FString *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
        pFVar8 = (param_1->AllocatorInstance).Data;
        if (pFVar8 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar8);
        }
        (param_1->AllocatorInstance).Data = local_70.AllocatorInstance.Data;
        param_1->ArrayNum = local_70.ArrayNum;
        param_1->ArrayMax = local_70.ArrayMax;
        local_70.ArrayNum = 0;
        local_70.ArrayMax = 0;
        local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      bVar2 = true;
    }
    DestructItems<FString,int>((FString *)local_70.AllocatorInstance.Data,local_70.ArrayNum);
    if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.AllocatorInstance.Data);
    }
  }
  else {
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Empty((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
             *)param_2,local_60.ArrayNum);
    iVar4 = local_60.ArrayNum;
    uVar6 = (ulonglong)local_60.ArrayNum;
    pFVar8 = local_60.AllocatorInstance.Data + uVar6 * 0x10;
    this.Data = local_60.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar6 != iVar4) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (this.Data == pFVar8) goto LAB_148bcaf1f;
      ::FString::ReplaceInline((FString *)this.Data,L"(",L"",IgnoreCase);
      ::FString::ReplaceInline((FString *)this.Data,L")",L"",IgnoreCase);
      local_88._8_8_ = (FScriptContainerElement *)0x0;
      local_78 = 0;
      iVar5 = ::FString::ParseIntoArrayWS
                        ((FString *)this.Data,
                         (TArray<FString,TSizedDefaultAllocator<32>_> *)(local_88 + 8),L",",true);
      if (iVar5 != 2) break;
      if ((int)local_78 < 2) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      pFVar7 = (FScriptContainerElement *)(local_88._8_8_ + 0x10);
      if (((int)local_78 < 1) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      local_50 = (FScriptContainerElement *)local_88._8_8_;
      local_48 = pFVar7;
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
                ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                  *)param_2,(TPairInitializer<FString_&&,FString_&&> *)local_88,(bool *)&local_50);
      DestructItems<FString,int>((FString *)local_88._8_8_,(int)local_78);
      if ((FScriptContainerElement *)local_88._8_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_88._8_8_);
      }
      uVar6 = local_60._8_8_ & 0xffffffff;
      this.Data = this.Data + 0x10;
    }
    `InstallBundleUtil::GetConfiguredBundleSources'::__l12::<lambda_1>::operator()(local_res20);
    DestructItems<FString,int>((FString *)local_88._8_8_,(int)local_78);
    if ((FScriptContainerElement *)local_88._8_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_88._8_8_);
    }
    bVar2 = false;
  }
  DestructItems<FString,int>((FString *)local_60.AllocatorInstance.Data,local_60.ArrayNum);
  if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetInstallBundlePauseReason @ 148bcb670

wchar_t * __cdecl InstallBundleUtil::GetInstallBundlePauseReason(EInstallBundlePauseFlags param_1)

{
  wchar_t *pwVar1;
  
  if ((param_1 & UserPaused) != None) {
    return L"UserPaused";
  }
  if ((param_1 & NoInternetConnection) != None) {
    return L"NoInternetConnection";
  }
  pwVar1 = L"";
  if ((param_1 & OnCellularNetwork) != None) {
    pwVar1 = L"OnCellularNetwork";
  }
  return pwVar1;
}

// GetInstallBundleSectionPrefix @ 148bcb6b0

FString * __cdecl InstallBundleUtil::GetInstallBundleSectionPrefix(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&Prefix,L"InstallBundleDefinition ");
      atexit(`InstallBundleUtil::GetInstallBundleSectionPrefix'::__l2::
             _dynamic_atexit_destructor_for__Prefix__);
      _Init_thread_footer(&::_TSS0);
      return &Prefix;
    }
  }
  return &Prefix;
}

// GetInstallBundleSourceTypeNameTable @ 148bcb740

FInstallBundleSourceTypeNameTable * __cdecl GetInstallBundleSourceTypeNameTable(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      FInstallBundleSourceTypeNameTable::FInstallBundleSourceTypeNameTable
                (&InstallBundleSourceTypeNameTable);
      atexit(`GetInstallBundleSourceTypeNameTable'::__l2::
             _dynamic_atexit_destructor_for__InstallBundleSourceTypeNameTable__);
      _Init_thread_footer(&_TSS0);
      return &InstallBundleSourceTypeNameTable;
    }
  }
  return &InstallBundleSourceTypeNameTable;
}

// GetMountOptionsFromConfig @ 148bcc280

bool __cdecl
InstallBundleUtil::GetMountOptionsFromConfig
          (TStringView<wchar_t> *param_1,FConfigMountOptions *param_2)

{
  bool bVar1;
  FConfigFile *this;
  FString *pFVar2;
  FConfigSection *this_00;
  ForAnyElementType FVar3;
  FString local_28;
  FString local_18;
  
  this = FConfigCacheIni::FindConfigFile(GConfig,&GInstallBundleIni);
  if (this != (FConfigFile *)0x0) {
    pFVar2 = GetInstallBundleSectionPrefix();
    ::FString::ConcatFR(&local_28,pFVar2,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar3.Data = local_28.Data.AllocatorInstance.Data;
    }
    bVar1 = FConfigFile::DoesSectionExist(this,(wchar_t *)FVar3.Data);
    if (bVar1) {
      param_2->bWithSoftReferences = false;
      FVar3.Data = (FScriptContainerElement *)L"";
      if (local_28.Data.ArrayNum != 0) {
        FVar3.Data = local_28.Data.AllocatorInstance.Data;
      }
      ::FString::FString(&local_18,(wchar_t *)FVar3.Data);
      AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
      this_00 = TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
                ::Find((TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
                        *)this,&local_18);
      ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (this_00 != (FConfigSection *)0x0) {
        FConfigSection::GetBool(this_00,L"bMountSoftReferences",&param_2->bWithSoftReferences);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      return true;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// GetTypeHash @ 148bcdeb0

uint __cdecl InstallBundleUtil::GetTypeHash(FContentRequestStatsKey *param_1)

{
  FName FVar1;
  uint uVar2;
  uint uVar3;
  
  FVar1 = param_1->BundleName;
  uVar2 = ((uint)((ulonglong)param_1->Cookie >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Cookie >> 4)) * -0x7a143595;
  uVar3 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  uVar2 = uVar2 + FVar1.Number;
  return (uVar2 >> 2) + 0x9e3779b9 + (uVar3 >> 0x10 ^ uVar3) + uVar2 * 0x40 ^ uVar2;
}

// HasInstallBundleInConfig @ 148bce390

bool __cdecl InstallBundleUtil::HasInstallBundleInConfig(FString *param_1)

{
  bool bVar1;
  FConfigFile *this;
  FString *pFVar2;
  ForAnyElementType FVar3;
  FString local_18;
  
  this = FConfigCacheIni::FindConfigFile(GConfig,&GInstallBundleIni);
  if (this != (FConfigFile *)0x0) {
    pFVar2 = GetInstallBundleSectionPrefix();
    ::FString::ConcatFF(&local_18,pFVar2,param_1);
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar3.Data = local_18.Data.AllocatorInstance.Data;
    }
    bVar1 = FConfigFile::DoesSectionExist(this,(wchar_t *)FVar3.Data);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return bVar1;
  }
  return false;
}

// HasInternetConnection @ 148bce420

bool __cdecl InstallBundleUtil::HasInternetConnection(ENetworkConnectionType param_1)

{
  return 1 < (byte)(param_1 - None);
}

// IsPlatformInstallBundlePredicate @ 148bcf220

bool __cdecl
InstallBundleUtil::IsPlatformInstallBundlePredicate(FConfigFile *param_1,FString *param_2)

{
  bool bVar1;
  FConfigSection *pFVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  int local_res10 [2];
  FString local_38;
  FString local_28;
  
  pwVar4 = L"";
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  if ((param_2->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_28,pwVar3);
  AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  pFVar2 = TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
           ::Find((TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
                   *)param_1,&local_28);
  ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (pFVar2 != (FConfigSection *)0x0) {
    FConfigSection::GetString(pFVar2,L"PlatformChunkName",&local_38);
  }
  local_res10[0] = 0;
  if (local_38.Data.ArrayNum < 2) {
    if ((param_2->Data).ArrayNum != 0) {
      pwVar4 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    ::FString::FString(&local_28,pwVar4);
    AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    pFVar2 = TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
             ::Find((TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
                     *)param_1,&local_28);
    ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (pFVar2 != (FConfigSection *)0x0) {
      bVar1 = FConfigSection::GetInt(pFVar2,L"PlatformChunkID",local_res10);
      if ((bVar1) && (local_res10[0] < 0)) {
        bVar1 = false;
        goto LAB_148bcf33b;
      }
    }
  }
  bVar1 = true;
LAB_148bcf33b:
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// IsTimerBG @ 148bcf3f0

bool __cdecl InstallBundleUtil::PersistentStats::IsTimerBG(ETimingStatNames param_1)

{
  ETimingStatNames local_res8 [8];
  ETimingStatNames *local_res10 [3];
  
  switch(param_1) {
  case TotalTime_Real:
  case TotalTime_FG:
  case ChunkDBDownloadTime_Real:
  case ChunkDBDownloadTime_FG:
  case InstallTime_Real:
  case InstallTime_FG:
  case PSOTime_Real:
  case PSOTime_FG:
    break;
  case TotalTime_BG:
  case ChunkDBDownloadTime_BG:
  case InstallTime_BG:
  case PSOTime_BG:
    return true;
  default:
    local_res10[0] = local_res8;
    local_res8[0] = param_1;
    `InstallBundleUtil::PersistentStats::IsTimerBG'::__l2::<lambda_1>::operator()(local_res10);
  }
  return false;
}

// IsTimerFG @ 148bcf470

bool __cdecl InstallBundleUtil::PersistentStats::IsTimerFG(ETimingStatNames param_1)

{
  ETimingStatNames local_res8 [8];
  ETimingStatNames *local_res10 [3];
  
  switch(param_1) {
  case TotalTime_Real:
  case TotalTime_BG:
  case ChunkDBDownloadTime_Real:
  case ChunkDBDownloadTime_BG:
  case InstallTime_Real:
  case InstallTime_BG:
  case PSOTime_Real:
  case PSOTime_BG:
    break;
  case TotalTime_FG:
  case ChunkDBDownloadTime_FG:
  case InstallTime_FG:
  case PSOTime_FG:
    return true;
  default:
    local_res10[0] = local_res8;
    local_res8[0] = param_1;
    `InstallBundleUtil::PersistentStats::IsTimerFG'::__l2::<lambda_1>::operator()(local_res10);
  }
  return false;
}

// IsTimerReal @ 148bcf4f0

bool __cdecl InstallBundleUtil::PersistentStats::IsTimerReal(ETimingStatNames param_1)

{
  ETimingStatNames local_res8 [8];
  ETimingStatNames *local_res10 [3];
  
  switch(param_1) {
  case TotalTime_Real:
  case ChunkDBDownloadTime_Real:
  case InstallTime_Real:
  case PSOTime_Real:
    return true;
  case TotalTime_FG:
  case TotalTime_BG:
  case ChunkDBDownloadTime_FG:
  case ChunkDBDownloadTime_BG:
  case InstallTime_FG:
  case InstallTime_BG:
  case PSOTime_FG:
  case PSOTime_BG:
    break;
  default:
    local_res10[0] = local_res8;
    local_res8[0] = param_1;
    `InstallBundleUtil::PersistentStats::IsTimerReal'::__l2::<lambda_1>::operator()(local_res10);
  }
  return false;
}

// LexFromString @ 148bcf5f0

void __cdecl LexFromString(EInstallBundleSourceType *param_1,wchar_t *param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  EInstallBundleSourceType EVar3;
  wchar_t **ppwVar4;
  
  *param_1 = Count;
  ppwVar4 = Strings;
  EVar3 = Bulk;
  while( true ) {
    if (EVar3 < Count) {
      pwVar2 = *ppwVar4;
    }
    else {
      pwVar2 = L"";
    }
    iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,param_2);
    if (iVar1 == 0) break;
    EVar3 = EVar3 + Launcher;
    ppwVar4 = ppwVar4 + 1;
    if (EVar3 == Count) {
      return;
    }
  }
  *param_1 = EVar3;
  return;
}

// LexToString @ 148bcf670

wchar_t * __cdecl LexToString(FInstallBundleSourceType *param_1)

{
  return (param_1->NameStr).DataPtr;
}

// LexToString @ 148bcf680

wchar_t * __cdecl LexToString(ECombinedBundleStatus param_1)

{
  return Strings[(int)param_1];
}

// LexToString @ 148bcf6a0

wchar_t * __cdecl LexToString(EInstallBundleInstallState param_1)

{
  if (param_1 < Count) {
    return Strings[(int)param_1];
  }
  return L"";
}

// LexToString @ 148bcf6d0

wchar_t * __cdecl LexToString(EInstallBundleManagerInitResult param_1)

{
  if (param_1 < Count) {
    return Strings[(int)param_1];
  }
  return L"";
}

// LexToString @ 148bcf700

wchar_t * __cdecl LexToString(EInstallBundleManagerPatchCheckResult param_1)

{
  if (param_1 < Count) {
    return Strings[param_1];
  }
  return L"";
}

// LexToString @ 148bcf730

wchar_t * __cdecl LexToString(EInstallBundlePriority param_1)

{
  if (param_1 < Count) {
    return Strings[param_1];
  }
  return L"";
}

// LexToString @ 148bcf760

wchar_t * __cdecl LexToString(EInstallBundleReleaseResult param_1)

{
  if (param_1 < Count) {
    return Strings[param_1];
  }
  return L"";
}

// LexToString @ 148bcf790

wchar_t * __cdecl LexToString(EInstallBundleResult param_1)

{
  if (param_1 < Count) {
    return Strings[param_1];
  }
  return L"";
}

// LexToString @ 148bcf7c0

wchar_t * __cdecl LexToString(EInstallBundleSourceType param_1)

{
  if (param_1 < Count) {
    return Strings[(int)param_1];
  }
  return L"";
}

// LexToString @ 148bcf7f0

wchar_t * __cdecl LexToString(EInstallBundleSourceUpdateBundleInfoResult param_1)

{
  if (param_1 < Count) {
    return Strings[param_1];
  }
  return L"";
}

// LexToString @ 148bcf820

wchar_t * __cdecl LexToString(EInstallBundleStatus param_1)

{
  if (param_1 < Count) {
    return Strings[(int)param_1];
  }
  return L"";
}

// LexToString @ 148bcf850

FString * __cdecl InstallBundleUtil::PersistentStats::LexToString(ECountStatNames param_1)

{
  int *piVar1;
  ECountStatNames local_res8 [8];
  ECountStatNames *local_res10 [3];
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  local_res8[0] = param_1;
  if (*piVar1 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&NumResumedFromBackground,L"NumResumedFromBackground");
      atexit(`InstallBundleUtil::PersistentStats::LexToString'::__l2::
             _dynamic_atexit_destructor_for__NumResumedFromBackground__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar1 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      ::FString::FString(&NumResumedFromLaunch,L"NumResumedFromLaunch");
      atexit(`InstallBundleUtil::PersistentStats::LexToString'::__l2::
             _dynamic_atexit_destructor_for__NumResumedFromLaunch__);
      _Init_thread_footer(&::_TSS1);
    }
  }
  if (*piVar1 < ::_TSS2) {
    _Init_thread_header(&::_TSS2);
    if (::_TSS2 == -1) {
      ::FString::FString(&NumBackgrounded,L"NumBackgrounded");
      atexit(`InstallBundleUtil::PersistentStats::LexToString'::__l2::
             _dynamic_atexit_destructor_for__NumBackgrounded__);
      _Init_thread_footer(&::_TSS2);
    }
  }
  if (*piVar1 < ::_TSS3) {
    _Init_thread_header(&::_TSS3);
    if (::_TSS3 == -1) {
      ::FString::FString(&Unknown,L"<Unknown PersistentStats::ETimingStatNames Value>");
      atexit(`InstallBundleUtil::PersistentStats::LexToString'::__l2::
             _dynamic_atexit_destructor_for__Unknown__);
      _Init_thread_footer(&::_TSS3);
    }
  }
  if (local_res8[0] == NumResumedFromBackground) {
    return &NumResumedFromBackground;
  }
  if (local_res8[0] == NumResumedFromLaunch) {
    return &NumResumedFromLaunch;
  }
  if (local_res8[0] != NumBackgrounded) {
    local_res10[0] = local_res8;
    `InstallBundleUtil::PersistentStats::LexToString'::__l2::<lambda_1>::operator()(local_res10);
    return &Unknown;
  }
  return &NumBackgrounded;
}

// LexToString @ 148bcfa40

FString * __cdecl InstallBundleUtil::PersistentStats::LexToString(ETimingStatNames param_1)

{
  int *piVar1;
  ETimingStatNames local_res8 [8];
  ETimingStatNames *local_res10 [3];
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  local_res8[0] = param_1;
  if ((*piVar1 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(&TotalTime_Real,L"TotalTime_Real");
    atexit(`InstallBundleUtil::PersistentStats::LexToString'::__l2::
           _dynamic_atexit_destructor_for__TotalTime_Real__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar1 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FString::FString(&TotalTime_FG,L"TotalTime_FG");
    atexit(`InstallBundleUtil::PersistentStats::LexToString'::__l2::
           _dynamic_atexit_destructor_for__TotalTime_FG__);
    _Init_thread_footer(&::_TSS1);
  }
  if ((*piVar1 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    ::FString::FString(&TotalTime_BG,L"TotalTime_BG");
    atexit(`InstallBundleUtil::PersistentStats::LexToString'::__l2::
           _dynamic_atexit_destructor_for__TotalTime_BG__);
    _Init_thread_footer(&::_TSS2);
  }
  if ((*piVar1 < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    ::FString::FString(&ChunkDBDownloadTime_Real,L"ChunkDBDownloadTime_Real");
    atexit(`InstallBundleUtil::PersistentStats::LexToString'::__l2::
           _dynamic_atexit_destructor_for__ChunkDBDownloadTime_Real__);
    _Init_thread_footer(&::_TSS3);
  }
  if ((*piVar1 < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
    ::FString::FString(&ChunkDBDownloadTime_FG,L"ChunkDBDownloadTime_FG");
    atexit(`InstallBundleUtil::PersistentStats::LexToString'::__l2::
           _dynamic_atexit_destructor_for__ChunkDBDownloadTime_FG__);
    _Init_thread_footer(&::_TSS4);
  }
  if ((*piVar1 < ::_TSS5) && (_Init_thread_header(&::_TSS5), ::_TSS5 == -1)) {
    ::FString::FString(&ChunkDBDownloadTime_BG,L"ChunkDBDownloadTime_BG");
    atexit(`InstallBundleUtil::PersistentStats::LexToString'::__l2::
           _dynamic_atexit_destructor_for__ChunkDBDownloadTime_BG__);
    _Init_thread_footer(&::_TSS5);
  }
  if ((*piVar1 < ::_TSS6) && (_Init_thread_header(&::_TSS6), ::_TSS6 == -1)) {
    ::FString::FString(&InstallTime_Real,L"InstallTime_Real");
    atexit(`InstallBundleUtil::PersistentStats::LexToString'::__l2::
           _dynamic_atexit_destructor_for__InstallTime_Real__);
    _Init_thread_footer(&::_TSS6);
  }
  if ((*piVar1 < ::_TSS7) && (_Init_thread_header(&::_TSS7), ::_TSS7 == -1)) {
    ::FString::FString(&InstallTime_FG,L"InstallTime_FG");
    atexit(`InstallBundleUtil::PersistentStats::LexToString'::__l2::
           _dynamic_atexit_destructor_for__InstallTime_FG__);
    _Init_thread_footer(&::_TSS7);
  }
  if ((*piVar1 < ::_TSS8) && (_Init_thread_header(&::_TSS8), ::_TSS8 == -1)) {
    ::FString::FString(&InstallTime_BG,L"InstallTime_BG");
    atexit(`InstallBundleUtil::PersistentStats::LexToString'::__l2::
           _dynamic_atexit_destructor_for__InstallTime_BG__);
    _Init_thread_footer(&::_TSS8);
  }
  if ((*piVar1 < ::_TSS9) && (_Init_thread_header(&::_TSS9), ::_TSS9 == -1)) {
    ::FString::FString(&PSOTime_Real,L"PSOTime_Real");
    atexit(`InstallBundleUtil::PersistentStats::LexToString'::__l2::
           _dynamic_atexit_destructor_for__PSOTime_Real__);
    _Init_thread_footer(&::_TSS9);
  }
  if ((*piVar1 < ::_TSS10) && (_Init_thread_header(&::_TSS10), ::_TSS10 == -1)) {
    ::FString::FString(&PSOTime_FG,L"PSOTime_FG");
    atexit(`InstallBundleUtil::PersistentStats::LexToString'::__l2::
           _dynamic_atexit_destructor_for__PSOTime_FG__);
    _Init_thread_footer(&::_TSS10);
  }
  if ((*piVar1 < ::_TSS11) && (_Init_thread_header(&::_TSS11), ::_TSS11 == -1)) {
    ::FString::FString(&PSOTime_BG,L"PSOTime_BG");
    atexit(`InstallBundleUtil::PersistentStats::LexToString'::__l2::
           _dynamic_atexit_destructor_for__PSOTime_BG__);
    _Init_thread_footer(&::_TSS11);
  }
  if ((*piVar1 < ::_TSS12) && (_Init_thread_header(&::_TSS12), ::_TSS12 == -1)) {
    ::FString::FString(&Unknown,L"<Unknown PersistentStats::ETimingStatNames Value>");
    atexit(`InstallBundleUtil::PersistentStats::LexToString'::__l2::
           _dynamic_atexit_destructor_for__Unknown__);
    _Init_thread_footer(&::_TSS12);
  }
  switch(local_res8[0]) {
  case TotalTime_Real:
    return &TotalTime_Real;
  case TotalTime_FG:
    return &TotalTime_FG;
  case TotalTime_BG:
    return &TotalTime_BG;
  case ChunkDBDownloadTime_Real:
    return &ChunkDBDownloadTime_Real;
  case ChunkDBDownloadTime_FG:
    return &ChunkDBDownloadTime_FG;
  case ChunkDBDownloadTime_BG:
    return &ChunkDBDownloadTime_BG;
  case InstallTime_Real:
    return &InstallTime_Real;
  case InstallTime_FG:
    return &InstallTime_FG;
  case InstallTime_BG:
    return &InstallTime_BG;
  case PSOTime_Real:
    return &PSOTime_Real;
  case PSOTime_FG:
    return &PSOTime_FG;
  case PSOTime_BG:
    return &PSOTime_BG;
  default:
    local_res10[0] = local_res8;
    `InstallBundleUtil::PersistentStats::LexToString'::__l2::<lambda_1>::operator()(local_res10);
    return &Unknown;
  }
}

// LexTryParseString @ 148bcfff0

bool __cdecl LexTryParseString(EInstallBundlePriority *param_1,wchar_t *param_2)

{
  int iVar1;
  
  iVar1 = FGenericPlatformStricmp::Stricmp(param_2,L"High");
  if (iVar1 == 0) {
    *param_1 = High;
    return true;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(param_2,L"Normal");
  if (iVar1 == 0) {
    *param_1 = Normal;
    return true;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(param_2,L"Low");
  if (iVar1 == 0) {
    *param_1 = Low;
    return true;
  }
  return false;
}

// LoadBundleRegexFromConfig @ 148bd02b0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TArray<TTuple<FString,TArray<FRegexPattern,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
* __cdecl InstallBundleUtil::LoadBundleRegexFromConfig
                    (TArray<TTuple<FString,TArray<FRegexPattern,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
                     *__return_storage_ptr__,FConfigFile *param_1,
                    TFunctionRef<bool___cdecl(FConfigFile_const_&,FString_const_&)> *param_2)

{
  longlong *plVar1;
  uint uVar2;
  code *pcVar3;
  FConfigFile *pFVar4;
  bool bVar5;
  char cVar6;
  TArray<TTuple<FString,TArray<FRegexPattern,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  *pTVar7;
  FString *pFVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  wchar_t *pwVar12;
  int iVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  longlong *plVar18;
  FString *this;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res10 [8];
  TFunctionRef<bool___cdecl(FConfigFile_const_&,FString_const_&)> *local_res18;
  int local_res20;
  ForAnyElementType local_108;
  undefined8 local_100;
  TArray<FString,TSizedDefaultAllocator<32>_> local_f8;
  ForAnyElementType local_e8;
  undefined8 local_e0;
  FScriptContainerElement *local_d8;
  undefined8 local_d0;
  FConfigFile *local_c8;
  int iStack_c0;
  uint uStack_bc;
  longlong *local_b8;
  undefined4 uStack_b0;
  uint uStack_ac;
  int local_a8;
  uint uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  FConfigFile *local_98;
  FString local_90;
  FConfigFile *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  int iStack_58;
  undefined4 uStack_54;
  
  iVar13 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_res18 = param_2;
  AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  uVar16 = (uint)param_1->_padding_;
  plVar1 = &param_1->_padding_;
  uStack_bc = 1;
  uStack_ac = 0;
  iStack_c0 = iVar13;
  local_a8 = iVar13;
  if (uVar16 != 0) {
    plVar18 = (longlong *)param_1->_padding_;
    if ((longlong *)param_1->_padding_ == (longlong *)0x0) {
      plVar18 = plVar1;
    }
    uVar15 = (uint)*plVar18;
    while (uVar15 == 0) {
      lVar10 = (longlong)iStack_c0;
      local_a8 = local_a8 + 0x20;
      iStack_c0 = iStack_c0 + 1;
      uStack_ac = uVar16;
      if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_c0)
      goto LAB_148bd036e;
      uVar15 = *(uint *)((longlong)plVar18 + lVar10 * 4 + 4);
    }
    uStack_bc = ~(uVar15 - 1) & uVar15;
    uVar11 = (ulonglong)uStack_bc * 2 + 1;
    lVar10 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res20 = (int)lVar10;
    uStack_ac = local_a8 + -1 + local_res20;
    if ((int)uVar16 < (int)uStack_ac) {
      uStack_ac = uVar16;
    }
  }
LAB_148bd036e:
  iStack_a0 = (int)param_1->_padding_ - *(int *)((longlong)&param_1->_padding_ + 4);
  TStack_78._padding_ = CONCAT44(uStack_bc,iStack_c0);
  uStack_b0 = 0xffffffff;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  uStack_54 = uStack_9c;
  local_c8 = param_1;
  local_b8 = plVar1;
  uStack_a4 = uStack_ac;
  local_80 = param_1;
  TStack_78.CurrentBitIndex = uStack_ac;
  TStack_78.BaseBitIndex = local_a8;
  TStack_78._28_4_ = uStack_ac;
  iStack_58 = iStack_a0;
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar1;
  ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  uVar16 = (uint)param_1->_padding_;
  iVar13 = (int)uVar16 >> 5;
  uVar15 = uVar16 & 0xffffffe0;
  if ((int)uVar16 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x7af,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TArray<TTuple<FString,TArray<FRegexPattern,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
                *)(*pcVar3)();
      return pTVar7;
    }
  }
  uVar2 = (uint)param_1->_padding_;
  if (uVar16 != uVar2) {
    plVar18 = (longlong *)param_1->_padding_;
    if ((longlong *)param_1->_padding_ == (longlong *)0x0) {
      plVar18 = plVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)((longlong)plVar18 + (longlong)iVar13 * 4);
    while (uVar16 == 0) {
      lVar10 = (longlong)iVar13;
      uVar15 = uVar15 + 0x20;
      iVar13 = iVar13 + 1;
      uVar16 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_148bd047a;
      uVar16 = *(uint *)((longlong)plVar18 + lVar10 * 4 + 4);
    }
    uVar11 = (ulonglong)(~(uVar16 - 1) & uVar16) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar16 = (int)lVar10 + -1 + uVar15;
    if ((int)uVar2 < (int)uVar16) {
      uVar16 = uVar2;
    }
  }
LAB_148bd047a:
  ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  while( true ) {
    pFVar4 = local_80;
    if ((int)local_80->_padding_ - *(int *)((longlong)&local_80->_padding_ + 4) != iStack_58) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FConfigSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_78.CurrentBitIndex == uVar16) &&
        (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)&param_1->_padding_)) &&
       (pFVar4 == param_1)) break;
    this = (FString *)((longlong)TStack_78.CurrentBitIndex * 0x110 + pFVar4->_padding_);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        ::FString::FString(&Prefix,L"InstallBundleDefinition ");
        atexit(`InstallBundleUtil::GetInstallBundleSectionPrefix'::__l2::
               _dynamic_atexit_destructor_for__Prefix__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    iVar13 = Prefix.Data.ArrayNum + -1;
    FVar14.Data = Prefix.Data.AllocatorInstance.Data;
    if (Prefix.Data.ArrayNum == 0) {
      iVar13 = 0;
      FVar14.Data = (FScriptContainerElement *)L"";
    }
    bVar5 = ::FString::StartsWith(this,(wchar_t *)FVar14.Data,iVar13,IgnoreCase);
    if (bVar5) {
      cVar6 = (**(code **)local_res18)(*(undefined8 *)&local_res18->field_0x8,param_1,this);
      if (cVar6 != '\0') {
        local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_f8.ArrayNum = 0;
        local_f8.ArrayMax = 0;
        if ((this->Data).ArrayNum == 0) {
          pwVar12 = L"";
        }
        else {
          pwVar12 = (wchar_t *)(this->Data).AllocatorInstance.Data;
        }
        iVar13 = FConfigFile::GetArray(param_1,pwVar12,L"FileRegex",&local_f8);
        if (iVar13 != 0) {
          uVar11 = local_f8._8_8_ & 0xffffffff;
          local_100._0_4_ = 0;
          local_108.Data = (FScriptContainerElement *)0x0;
          local_100 = 0;
          if (local_f8.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum(uVar11);
          }
          if (0 < local_f8.ArrayNum) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,local_f8.ArrayNum,&local_108,0,(int *)((longlong)&local_100 + 4));
            uVar11 = local_f8._8_8_ & 0xffffffff;
          }
          iVar9 = (int)uVar11;
          pFVar17 = local_f8.AllocatorInstance.Data + (longlong)iVar9 * 0x10;
          FVar14.Data = local_f8.AllocatorInstance.Data;
          iVar13 = (int)local_100;
          while( true ) {
            if ((int)uVar11 != iVar9) {
              `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_res10);
              iVar13 = (int)local_100;
            }
            if (FVar14.Data == pFVar17) break;
            if (iVar13 == local_100._4_4_) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&local_108,(int *)((longlong)&local_100 + 4));
            }
            local_100 = CONCAT44(local_100._4_4_,iVar13 + 1);
            FRegexPattern::FRegexPattern
                      ((FRegexPattern *)(local_108.Data + (longlong)iVar13 * 0x10),
                       (FString *)FVar14.Data,CaseInsensitive);
            uVar11 = local_f8._8_8_ & 0xffffffff;
            FVar14.Data = FVar14.Data + 0x10;
            iVar13 = (int)local_100;
          }
          pFVar8 = GetInstallBundleSectionPrefix();
          iVar9 = (pFVar8->Data).ArrayNum;
          iVar13 = iVar9 + -1;
          if (iVar9 == 0) {
            iVar13 = 0;
          }
          ::FString::RightChop(this,&local_90,iVar13);
          FVar14.Data = local_90.Data.AllocatorInstance.Data;
          local_e8.Data = (FScriptContainerElement *)0x0;
          iVar13 = local_90.Data.ArrayNum;
          local_e0 = CONCAT44(local_e0._4_4_,iVar13);
          if (iVar13 == 0) {
            local_e0 = local_90.Data._8_8_ & 0xffffffff;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar13,0,&local_e8,iVar13,(int *)((longlong)&local_e0 + 4));
            memcpy(local_e8.Data,FVar14.Data,(longlong)iVar13 * 2);
          }
          local_d8 = local_108.Data;
          local_d0._0_4_ = (undefined4)local_100;
          local_d0._4_4_ = local_100._4_4_;
          iVar13 = __return_storage_ptr__->ArrayNum;
          local_108.Data = (FScriptContainerElement *)0x0;
          local_100 = 0;
          if (iVar13 == __return_storage_ptr__->ArrayMax) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x820,&__return_storage_ptr__->AllocatorInstance,
                                &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar13 + 1;
          pFVar17 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar13 * 0x20;
          *(undefined8 *)pFVar17 = 0;
          *(FScriptContainerElement **)pFVar17 = local_e8.Data;
          local_e8.Data = (FScriptContainerElement *)0x0;
          *(undefined4 *)(pFVar17 + 8) = (undefined4)local_e0;
          *(undefined4 *)(pFVar17 + 0xc) = local_e0._4_4_;
          local_e0 = 0;
          *(undefined8 *)(pFVar17 + 0x10) = 0;
          *(FScriptContainerElement **)(pFVar17 + 0x10) = local_d8;
          local_d8 = (void *)0x0;
          *(undefined4 *)(pFVar17 + 0x18) = (undefined4)local_d0;
          *(undefined4 *)(pFVar17 + 0x1c) = local_d0._4_4_;
          local_d0 = 0;
          DestructItems<FRegexPattern,int>((FRegexPattern *)0x0,0);
          if (local_d8 != (void *)0x0) {
            FMemory::Free(local_d8);
          }
          if (local_e8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e8.Data);
          }
          if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_90.Data.AllocatorInstance.Data);
          }
          DestructItems<FRegexPattern,int>((FRegexPattern *)local_108.Data,(int)local_100);
          if (local_108.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Data);
          }
        }
        DestructItems<FString,int>((FString *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
        if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.AllocatorInstance.Data);
        }
      }
    }
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  }
  local_98 = param_1;
  AlgoImpl::
  StableSortInternal<TTuple<FString,TArray<FRegexPattern,TSizedDefaultAllocator<32>_>_>,FIdentityFunctor,TDereferenceWrapper<TTuple<FString,TArray<FRegexPattern,TSizedDefaultAllocator<32>_>_>,_InstallBundleUtil::LoadBundleRegexFromConfig_::__l2::<lambda_1>_>_>
            ((TTuple<FString,TArray<FRegexPattern,TSizedDefaultAllocator<32>_>_> *)
             (__return_storage_ptr__->AllocatorInstance).Data,__return_storage_ptr__->ArrayNum,
             local_res8[0],(<lambda_1> *)&local_98);
  return __return_storage_ptr__;
}

// MatchBundleRegex @ 148bd0fd0

bool __cdecl
InstallBundleUtil::MatchBundleRegex
          (TArray<TTuple<FString,TArray<FRegexPattern,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
           *param_1,FString *param_2,FString *param_3)

{
  int iVar1;
  bool bVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x20;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<TTuple<FString,TArray<FRegexPattern,TSizedDefaultAllocator<32>_>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) goto LAB_148bd1040;
    bVar2 = Algo::
            NoneOf<TArray<FRegexPattern,TSizedDefaultAllocator<32>_>,__InstallBundleUtil::MatchBundleRegex_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
                      ((TArray<FRegexPattern,TSizedDefaultAllocator<32>_> *)(pFVar3 + 0x10),
                       (<lambda_1>)param_2);
    if (!bVar2) break;
    pFVar3 = pFVar3 + 0x20;
  }
  if (pFVar3 == (FScriptContainerElement *)0x0) {
LAB_148bd1040:
    bVar2 = false;
  }
  else {
    ::FString::operator=(param_3,(FString *)pFVar3);
    bVar2 = true;
  }
  return bVar2;
}

// SplitHostUrl @ 148bd8260

/* WARNING: Removing unreachable block (ram,0x000148bd832a) */
/* WARNING: Removing unreachable block (ram,0x000148bd8370) */

bool __cdecl
InstallBundleUtil::SplitHostUrl
          (TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2,TStringView<wchar_t> *param_3
          )

{
  int iVar1;
  wchar_t *pwVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int iStack_60;
  TStringView<wchar_t> local_48 [2];
  
  iVar1 = param_1->Size;
  pwVar2 = param_1->DataPtr;
  local_48[0].DataPtr = L"file://";
  iVar4 = iVar1;
  if (7 < iVar1) {
    iVar4 = 7;
  }
  local_48[0].Size = 7;
  param_3->DataPtr = (wchar_t *)0x0;
  *(undefined8 *)&param_3->Size = 0;
  param_2->DataPtr = (wchar_t *)0x0;
  *(undefined8 *)&param_2->Size = 0;
  iVar5 = 0;
  if (0 < iVar4) {
    iVar5 = iVar4;
  }
  iVar4 = 0;
  if ((iVar5 == 7) && (iVar5 = FGenericPlatformStricmp::Strnicmp(L"http://",pwVar2,7), iVar5 == 0))
  {
    iStack_60 = 7;
  }
  else {
    iVar5 = iVar1;
    if (8 < iVar1) {
      iVar5 = 8;
    }
    iVar6 = 0;
    if (0 < iVar5) {
      iVar6 = iVar5;
    }
    if ((iVar6 == 8) &&
       (iVar5 = FGenericPlatformStricmp::Strnicmp(L"https://",pwVar2,8), iVar5 == 0)) {
      iStack_60 = 8;
    }
    else {
      iVar5 = iVar1;
      if (7 < iVar1) {
        iVar5 = 7;
      }
      iVar6 = iVar4;
      if (0 < iVar5) {
        iVar6 = iVar5;
      }
      if ((iVar6 != 7) ||
         (iVar5 = FGenericPlatformStricmp::Strnicmp(L"file://",pwVar2,7), iVar5 != 0)) {
        return false;
      }
      iStack_60 = local_48[0].Size;
    }
  }
  iVar5 = iVar1;
  if (iVar1 - iStack_60 < iVar1) {
    iVar5 = iVar1 - iStack_60;
  }
  iVar6 = iVar4;
  if (0 < iVar5) {
    iVar6 = iVar5;
  }
  uVar3 = local_48[0]._12_4_;
  local_48[0].Size = iVar6;
  local_48[0].DataPtr = pwVar2 + ((longlong)iVar1 - (longlong)iVar6);
  iVar5 = UE::String::FindFirstChar(local_48,L'/',CaseSensitive);
  if (iVar5 == -1) {
    param_2->DataPtr = pwVar2 + ((longlong)iVar1 - (longlong)iVar6);
    param_2->Size = iVar6;
    *(undefined4 *)&param_2->field_0xc = uVar3;
    bVar7 = param_2->Size != 0;
  }
  else {
    iVar6 = iVar1;
    if (iVar5 + iStack_60 < iVar1) {
      iVar6 = iVar5 + iStack_60;
    }
    iVar5 = iVar4;
    if (0 < iVar6) {
      iVar5 = iVar6;
    }
    param_2->DataPtr = pwVar2;
    param_2->Size = iVar5;
    *(undefined4 *)&param_2->field_0xc = local_48[0]._12_4_;
    iVar6 = iVar1 - param_2->Size;
    iVar5 = iVar1;
    if (iVar6 < iVar1) {
      iVar5 = iVar6;
    }
    if (0 < iVar5) {
      iVar4 = iVar5;
    }
    bVar7 = true;
    param_3->DataPtr = pwVar2 + ((longlong)iVar1 - (longlong)iVar4);
    param_3->Size = iVar4;
    *(undefined4 *)&param_3->field_0xc = local_48[0]._12_4_;
  }
  return bVar7;
}

// StartInstallBundleAsyncIOTask @ 148bd8d10

void __cdecl
InstallBundleUtil::StartInstallBundleAsyncIOTask
          (TArray<TUniquePtr<FAsyncTask<InstallBundleUtil::FInstallBundleWork>,TDefaultDelete<FAsyncTask<InstallBundleUtil::FInstallBundleWork>_>_>,TSizedDefaultAllocator<32>_>
           *param_1,TUniqueFunction<void___cdecl(void)> *param_2,
          TUniqueFunction<void___cdecl(void)> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FAsyncTask<InstallBundleUtil::FInstallBundleWork> *this;
  longlong *plVar5;
  FAsyncTask<InstallBundleUtil::FInstallBundleWork> *local_28 [2];
  
  this = ::operator_new(0xd0);
  local_28[0] = (FAsyncTask<InstallBundleUtil::FInstallBundleWork> *)0x0;
  if (this != (FAsyncTask<InstallBundleUtil::FInstallBundleWork> *)0x0) {
    local_28[0] = FAsyncTask<InstallBundleUtil::FInstallBundleWork>::
                  FAsyncTask<InstallBundleUtil::FInstallBundleWork><TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(void)>_>
                            (this,param_2,param_3);
  }
  FAsyncTaskBase::Start
            ((FAsyncTaskBase *)local_28[0],false,GIOThreadPool,Normal,None,-1,(wchar_t *)0x0);
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)local_28) &&
     ((FScriptContainerElement *)local_28 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(FAsyncTask<InstallBundleUtil::FInstallBundleWork> **)
   ((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_28[0];
  local_28[0] = (FAsyncTask<InstallBundleUtil::FInstallBundleWork> *)0x0;
  if (*(longlong *)param_2 != 0) {
    plVar5 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar5 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (*(longlong *)param_3 != 0) {
    plVar5 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar5 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  return;
}

// StartInstallBundleAsyncIOTask @ 148bd8e60

void __cdecl
InstallBundleUtil::StartInstallBundleAsyncIOTask
          (FQueuedThreadPool *param_1,
          TArray<TUniquePtr<FAsyncTask<InstallBundleUtil::FInstallBundleWork>,TDefaultDelete<FAsyncTask<InstallBundleUtil::FInstallBundleWork>_>_>,TSizedDefaultAllocator<32>_>
          *param_2,TUniqueFunction<void___cdecl(void)> *param_3,
          TUniqueFunction<void___cdecl(void)> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FAsyncTask<InstallBundleUtil::FInstallBundleWork> *this;
  longlong *plVar5;
  FAsyncTask<InstallBundleUtil::FInstallBundleWork> *local_28 [2];
  
  this = ::operator_new(0xd0);
  local_28[0] = (FAsyncTask<InstallBundleUtil::FInstallBundleWork> *)0x0;
  if (this != (FAsyncTask<InstallBundleUtil::FInstallBundleWork> *)0x0) {
    local_28[0] = FAsyncTask<InstallBundleUtil::FInstallBundleWork>::
                  FAsyncTask<InstallBundleUtil::FInstallBundleWork><TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(void)>_>
                            (this,param_3,param_4);
  }
  FAsyncTaskBase::Start((FAsyncTaskBase *)local_28[0],false,param_1,Normal,None,-1,(wchar_t *)0x0);
  pFVar1 = (param_2->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)local_28) &&
     ((FScriptContainerElement *)local_28 < pFVar1 + (longlong)param_2->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar4 + 1;
  *(FAsyncTask<InstallBundleUtil::FInstallBundleWork> **)
   ((param_2->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_28[0];
  local_28[0] = (FAsyncTask<InstallBundleUtil::FInstallBundleWork> *)0x0;
  if (*(longlong *)param_3 != 0) {
    plVar5 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar5 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (*(longlong *)param_4 != 0) {
    plVar5 = (longlong *)&param_4->field_0x10;
    if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
      plVar5 = *(longlong **)&param_4->field_0x28;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  return;
}

// StartInstallBundleAsyncIOTask @ 148bd8fb0

void __cdecl
InstallBundleUtil::StartInstallBundleAsyncIOTask
          (FQueuedThreadPool *param_1,TUniqueFunction<void___cdecl(void)> *param_2)

{
  FAutoDeleteAsyncTask<InstallBundleUtil::FInstallBundleWork> *pFVar1;
  longlong *plVar2;
  FAutoDeleteAsyncTask<InstallBundleUtil::FInstallBundleWork> *this;
  TUniqueFunction<void___cdecl(void)> local_68;
  TUniqueFunction<void___cdecl(void)> local_38;
  
  pFVar1 = ::operator_new(0xa0);
  this = (FAutoDeleteAsyncTask<InstallBundleUtil::FInstallBundleWork> *)0x0;
  if (pFVar1 != (FAutoDeleteAsyncTask<InstallBundleUtil::FInstallBundleWork> *)0x0) {
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ =
         (longlong)&___7__FAutoDeleteAsyncTask_VFInstallBundleWork_InstallBundleUtil____6B_;
    local_68._0_8_ = *(undefined8 *)param_2;
    local_68._40_8_ = *(undefined8 *)&param_2->field_0x28;
    *(undefined8 *)&param_2->field_0x28 = 0;
    local_68._32_8_ = *(undefined8 *)&param_2->field_0x20;
    local_38._0_8_ = 0;
    local_38._40_8_ = 0;
    local_68._16_8_ = *(undefined8 *)&param_2->field_0x10;
    local_68._24_8_ = *(undefined8 *)&param_2->field_0x18;
    if (local_68._0_8_ != 0) {
      *(undefined8 *)param_2 = 0;
    }
    FInstallBundleWork::FInstallBundleWork(&pFVar1->Task,&local_68,&local_38);
    this = pFVar1;
  }
  UE::FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&this->_padding_);
  if (param_1 == (FQueuedThreadPool *)0x0) {
    FAutoDeleteAsyncTask<InstallBundleUtil::FInstallBundleWork>::DoWork(this);
  }
  else {
    (**(code **)((longlong)*param_1 + 0x18))(param_1,this,3);
  }
  if (*(longlong *)param_2 != 0) {
    plVar2 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar2 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return;
}

// StartInstallBundleAsyncIOTask @ 148bd90a0

void __cdecl
InstallBundleUtil::StartInstallBundleAsyncIOTask(TUniqueFunction<void___cdecl(void)> *param_1)

{
  longlong lVar1;
  FQueuedThreadPool *pFVar2;
  FAutoDeleteAsyncTask<InstallBundleUtil::FInstallBundleWork> *pFVar3;
  longlong *plVar4;
  FAutoDeleteAsyncTask<InstallBundleUtil::FInstallBundleWork> *this;
  longlong local_98;
  longlong local_88 [3];
  longlong *local_70;
  undefined1 local_68 [48];
  TUniqueFunction<void___cdecl(void)> local_38;
  
  lVar1 = *(longlong *)param_1;
  this = (FAutoDeleteAsyncTask<InstallBundleUtil::FInstallBundleWork> *)0x0;
  local_70 = *(longlong **)&param_1->field_0x28;
  *(undefined8 *)&param_1->field_0x28 = 0;
  local_88[2] = *(longlong *)&param_1->field_0x20;
  local_88[0] = *(longlong *)&param_1->field_0x10;
  local_88[1] = *(longlong *)&param_1->field_0x18;
  if (lVar1 != 0) {
    *(undefined8 *)param_1 = 0;
  }
  pFVar2 = GIOThreadPool;
  pFVar3 = ::operator_new(0xa0);
  local_98 = lVar1;
  if (pFVar3 != (FAutoDeleteAsyncTask<InstallBundleUtil::FInstallBundleWork> *)0x0) {
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ =
         (longlong)&___7__FAutoDeleteAsyncTask_VFInstallBundleWork_InstallBundleUtil____6B_;
    local_38._0_8_ = 0;
    local_38._40_8_ = 0;
    local_68._40_8_ = local_70;
    local_70 = (longlong *)0x0;
    local_68._16_8_ = local_88[0];
    local_68._24_8_ = local_88[1];
    local_68._32_8_ = local_88[2];
    if (lVar1 != 0) {
      local_98 = 0;
    }
    local_68._0_8_ = lVar1;
    FInstallBundleWork::FInstallBundleWork
              (&pFVar3->Task,(TUniqueFunction<void___cdecl(void)> *)local_68,&local_38);
    this = pFVar3;
  }
  UE::FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&this->_padding_);
  if (pFVar2 == (FQueuedThreadPool *)0x0) {
    FAutoDeleteAsyncTask<InstallBundleUtil::FInstallBundleWork>::DoWork(this);
  }
  else {
    (**(code **)((longlong)*pFVar2 + 0x18))(pFVar2,this,3);
  }
  if (local_98 != 0) {
    plVar4 = local_88;
    if (local_70 != (longlong *)0x0) {
      plVar4 = local_70;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)param_1 != 0) {
    plVar4 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return;
}

// IMPLEMENT_MODULE_InstallBundleManager @ 148bdea10

void __cdecl IMPLEMENT_MODULE_InstallBundleManager(void)

{
  return;
}

// AllDownloadsCompletedDelegate'' @ 15040a820

void __cdecl
`dynamic_atexit_destructor_for_'IInstallBundleManager::AllDownloadsCompletedDelegate__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &IInstallBundleManager::AllDownloadsCompletedDelegate,(FWriteAccessScope *)&local_28);
  if ((IInstallBundleManager::AllDownloadsCompletedDelegate._16_4_ != 0) &&
     (IInstallBundleManager::AllDownloadsCompletedDelegate._8_8_ != 0)) {
    (*(code *)**(undefined8 **)IInstallBundleManager::AllDownloadsCompletedDelegate._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&IInstallBundleManager::AllDownloadsCompletedDelegate.field_0x8,
               0,0,0x10);
    IInstallBundleManager::AllDownloadsCompletedDelegate._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IInstallBundleManager::AllDownloadsCompletedDelegate._8_8_ != 0) {
    FMemory::Free((void *)IInstallBundleManager::AllDownloadsCompletedDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&IInstallBundleManager::AllDownloadsCompletedDelegate);
  return;
}

// InitCompleteDelegate'' @ 15040a8c0

void __cdecl `dynamic_atexit_destructor_for_'IInstallBundleManager::InitCompleteDelegate__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             IInstallBundleManager::InitCompleteDelegate._8_8_,
             IInstallBundleManager::InitCompleteDelegate._16_4_);
  if (IInstallBundleManager::InitCompleteDelegate._8_8_ != 0) {
    FMemory::Free((void *)IInstallBundleManager::InitCompleteDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&IInstallBundleManager::InitCompleteDelegate);
  return;
}

// InstallBundleChunkDownloadMetricsDelegate'' @ 15040a900

void __cdecl
`dynamic_atexit_destructor_for_'IInstallBundleManager::InstallBundleChunkDownloadMetricsDelegate__
          (void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             IInstallBundleManager::InstallBundleChunkDownloadMetricsDelegate._8_8_,
             IInstallBundleManager::InstallBundleChunkDownloadMetricsDelegate._16_4_);
  if (IInstallBundleManager::InstallBundleChunkDownloadMetricsDelegate._8_8_ != 0) {
    FMemory::Free((void *)IInstallBundleManager::InstallBundleChunkDownloadMetricsDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &IInstallBundleManager::InstallBundleChunkDownloadMetricsDelegate);
  return;
}

// InstallBundleCompleteDelegate'' @ 15040a940

void __cdecl
`dynamic_atexit_destructor_for_'IInstallBundleManager::InstallBundleCompleteDelegate__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             IInstallBundleManager::InstallBundleCompleteDelegate._8_8_,
             IInstallBundleManager::InstallBundleCompleteDelegate._16_4_);
  if (IInstallBundleManager::InstallBundleCompleteDelegate._8_8_ != 0) {
    FMemory::Free((void *)IInstallBundleManager::InstallBundleCompleteDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&IInstallBundleManager::InstallBundleCompleteDelegate);
  return;
}

// PatchCheckCompleteDelegate'' @ 15040a980

void __cdecl
`dynamic_atexit_destructor_for_'IInstallBundleManager::PatchCheckCompleteDelegate__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             IInstallBundleManager::PatchCheckCompleteDelegate._8_8_,
             IInstallBundleManager::PatchCheckCompleteDelegate._16_4_);
  if (IInstallBundleManager::PatchCheckCompleteDelegate._8_8_ != 0) {
    FMemory::Free((void *)IInstallBundleManager::PatchCheckCompleteDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&IInstallBundleManager::PatchCheckCompleteDelegate);
  return;
}

// PausedBundleDelegate'' @ 15040a9c0

void __cdecl `dynamic_atexit_destructor_for_'IInstallBundleManager::PausedBundleDelegate__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             IInstallBundleManager::PausedBundleDelegate._8_8_,
             IInstallBundleManager::PausedBundleDelegate._16_4_);
  if (IInstallBundleManager::PausedBundleDelegate._8_8_ != 0) {
    FMemory::Free((void *)IInstallBundleManager::PausedBundleDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&IInstallBundleManager::PausedBundleDelegate);
  return;
}

// ReleasedDelegate'' @ 15040aa00

void __cdecl `dynamic_atexit_destructor_for_'IInstallBundleManager::ReleasedDelegate__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             IInstallBundleManager::ReleasedDelegate._8_8_,
             IInstallBundleManager::ReleasedDelegate._16_4_);
  if (IInstallBundleManager::ReleasedDelegate._8_8_ != 0) {
    FMemory::Free((void *)IInstallBundleManager::ReleasedDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&IInstallBundleManager::ReleasedDelegate);
  return;
}

// ReportingDelegate'' @ 15040aa40

void __cdecl `dynamic_atexit_destructor_for_'IInstallBundleManager::ReportingDelegate__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             IInstallBundleManager::ReportingDelegate._8_8_,
             IInstallBundleManager::ReportingDelegate._16_4_);
  if (IInstallBundleManager::ReportingDelegate._8_8_ != 0) {
    FMemory::Free((void *)IInstallBundleManager::ReportingDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&IInstallBundleManager::ReportingDelegate);
  return;
}

// `dynamic_atexit_destructor_for_'ChunkDBDownloadTime_BG'' @ 15040aa80

void __cdecl
`InstallBundleUtil::PersistentStats::LexToString'::__l2::
_dynamic_atexit_destructor_for__ChunkDBDownloadTime_BG__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ChunkDBDownloadTime_BG.Data.AllocatorInstance.Data;
  if (ChunkDBDownloadTime_BG.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ChunkDBDownloadTime_BG.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ChunkDBDownloadTime_FG'' @ 15040aaa0

void __cdecl
`InstallBundleUtil::PersistentStats::LexToString'::__l2::
_dynamic_atexit_destructor_for__ChunkDBDownloadTime_FG__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ChunkDBDownloadTime_FG.Data.AllocatorInstance.Data;
  if (ChunkDBDownloadTime_FG.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ChunkDBDownloadTime_FG.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ChunkDBDownloadTime_Real'' @ 15040aac0

void __cdecl
`InstallBundleUtil::PersistentStats::LexToString'::__l2::
_dynamic_atexit_destructor_for__ChunkDBDownloadTime_Real__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ChunkDBDownloadTime_Real.Data.AllocatorInstance.Data;
  if (ChunkDBDownloadTime_Real.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ChunkDBDownloadTime_Real.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'InstallBundleSourceTypeNameTable'' @ 15040aae0

void __cdecl
`GetInstallBundleSourceTypeNameTable'::__l2::
_dynamic_atexit_destructor_for__InstallBundleSourceTypeNameTable__(void)

{
  FInstallBundleSourceTypeNameTable *pFVar1;
  
  pFVar1 = &InstallBundleSourceTypeNameTable;
  if (InstallBundleSourceTypeNameTable.NameTable.AllocatorInstance.SecondaryData !=
      (ForElementType<FString>)0x0) {
    pFVar1 = (FInstallBundleSourceTypeNameTable *)
             InstallBundleSourceTypeNameTable.NameTable.AllocatorInstance.SecondaryData;
  }
  DestructItems<FString,int>((FString *)pFVar1,InstallBundleSourceTypeNameTable.NameTable.ArrayNum);
  if (InstallBundleSourceTypeNameTable.NameTable.AllocatorInstance.SecondaryData !=
      (ForElementType<FString>)0x0) {
    FMemory::Free((void *)InstallBundleSourceTypeNameTable.NameTable.AllocatorInstance.SecondaryData
                 );
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'InstallTime_BG'' @ 15040ab30

void __cdecl
`InstallBundleUtil::PersistentStats::LexToString'::__l2::
_dynamic_atexit_destructor_for__InstallTime_BG__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = InstallTime_BG.Data.AllocatorInstance.Data;
  if (InstallTime_BG.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (InstallTime_BG.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'InstallTime_FG'' @ 15040ab50

void __cdecl
`InstallBundleUtil::PersistentStats::LexToString'::__l2::
_dynamic_atexit_destructor_for__InstallTime_FG__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = InstallTime_FG.Data.AllocatorInstance.Data;
  if (InstallTime_FG.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (InstallTime_FG.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'InstallTime_Real'' @ 15040ab70

void __cdecl
`InstallBundleUtil::PersistentStats::LexToString'::__l2::
_dynamic_atexit_destructor_for__InstallTime_Real__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = InstallTime_Real.Data.AllocatorInstance.Data;
  if (InstallTime_Real.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (InstallTime_Real.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'LogInstallBundleManager'' @ 15040ab90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogInstallBundleManager__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogInstallBundleManager);
  return;
}

// `dynamic_atexit_destructor_for_'NumBackgrounded'' @ 15040abb0

void __cdecl
`InstallBundleUtil::PersistentStats::LexToString'::__l2::
_dynamic_atexit_destructor_for__NumBackgrounded__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = NumBackgrounded.Data.AllocatorInstance.Data;
  if (NumBackgrounded.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (NumBackgrounded.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'NumResumedFromBackground'' @ 15040abd0

void __cdecl
`InstallBundleUtil::PersistentStats::LexToString'::__l2::
_dynamic_atexit_destructor_for__NumResumedFromBackground__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = NumResumedFromBackground.Data.AllocatorInstance.Data;
  if (NumResumedFromBackground.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (NumResumedFromBackground.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'NumResumedFromLaunch'' @ 15040abf0

void __cdecl
`InstallBundleUtil::PersistentStats::LexToString'::__l2::
_dynamic_atexit_destructor_for__NumResumedFromLaunch__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = NumResumedFromLaunch.Data.AllocatorInstance.Data;
  if (NumResumedFromLaunch.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (NumResumedFromLaunch.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'PSOTime_BG'' @ 15040ac10

void __cdecl
`InstallBundleUtil::PersistentStats::LexToString'::__l2::
_dynamic_atexit_destructor_for__PSOTime_BG__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = PSOTime_BG.Data.AllocatorInstance.Data;
  if (PSOTime_BG.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (PSOTime_BG.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'PSOTime_FG'' @ 15040ac30

void __cdecl
`InstallBundleUtil::PersistentStats::LexToString'::__l2::
_dynamic_atexit_destructor_for__PSOTime_FG__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = PSOTime_FG.Data.AllocatorInstance.Data;
  if (PSOTime_FG.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (PSOTime_FG.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'PSOTime_Real'' @ 15040ac50

void __cdecl
`InstallBundleUtil::PersistentStats::LexToString'::__l2::
_dynamic_atexit_destructor_for__PSOTime_Real__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = PSOTime_Real.Data.AllocatorInstance.Data;
  if (PSOTime_Real.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (PSOTime_Real.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Prefix'' @ 15040ac70

void __cdecl
`InstallBundleUtil::GetInstallBundleSectionPrefix'::__l2::_dynamic_atexit_destructor_for__Prefix__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Prefix.Data.AllocatorInstance.Data;
  if (Prefix.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Prefix.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'TotalTime_BG'' @ 15040ac90

void __cdecl
`InstallBundleUtil::PersistentStats::LexToString'::__l2::
_dynamic_atexit_destructor_for__TotalTime_BG__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = TotalTime_BG.Data.AllocatorInstance.Data;
  if (TotalTime_BG.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (TotalTime_BG.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'TotalTime_FG'' @ 15040acb0

void __cdecl
`InstallBundleUtil::PersistentStats::LexToString'::__l2::
_dynamic_atexit_destructor_for__TotalTime_FG__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = TotalTime_FG.Data.AllocatorInstance.Data;
  if (TotalTime_FG.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (TotalTime_FG.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'TotalTime_Real'' @ 15040acd0

void __cdecl
`InstallBundleUtil::PersistentStats::LexToString'::__l2::
_dynamic_atexit_destructor_for__TotalTime_Real__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = TotalTime_Real.Data.AllocatorInstance.Data;
  if (TotalTime_Real.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (TotalTime_Real.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Unknown'' @ 15040acf0

void __cdecl
`InstallBundleUtil::PersistentStats::LexToString'::__l2::_dynamic_atexit_destructor_for__Unknown__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Unknown.Data.AllocatorInstance.Data;
  if (Unknown.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Unknown.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Unknown'' @ 15040ad10

void __cdecl
`InstallBundleUtil::PersistentStats::LexToString'::__l2::_dynamic_atexit_destructor_for__Unknown__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Unknown.Data.AllocatorInstance.Data;
  if (Unknown.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Unknown.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'_GCsvCategory_InstallBundleManager'' @ 15040ad30

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_InstallBundleManager__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_InstallBundleManager.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_InstallBundleManager.Name.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_InstallBundleManager.Name.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// operator() @ 150537600

bool __thiscall
``FInstallManagerBundleReportCache::SetReport'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<82672515515679160>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<82672515515679160>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// operator() @ 150537660

bool __thiscall
`InstallBundleUtil::PersistentStats::GetAssociatedBGTimerName'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_8365718388407794970>);
  if (bVar2) {
    InstallBundleUtil::PersistentStats::LexToString(**(ETimingStatNames **)this);
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8365718388407794970>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1505376c0

bool __thiscall
`InstallBundleUtil::PersistentStats::GetAssociatedFGTimerName'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_8365718388407795006>);
  if (bVar2) {
    InstallBundleUtil::PersistentStats::LexToString(**(ETimingStatNames **)this);
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8365718388407795006>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 150537720

bool __thiscall
`InstallBundleUtil::PersistentStats::GetAssociatedRealTimerName'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_8365718388407795042>);
  if (bVar2) {
    InstallBundleUtil::PersistentStats::LexToString(**(ETimingStatNames **)this);
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8365718388407795042>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1505378e0

bool __thiscall
`InstallBundleUtil::PersistentStats::IsTimerBG'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_8365718388407795078>);
  if (bVar2) {
    InstallBundleUtil::PersistentStats::LexToString(**(ETimingStatNames **)this);
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8365718388407795078>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 150537940

bool __thiscall
`InstallBundleUtil::PersistentStats::IsTimerFG'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_8365718388407795108>);
  if (bVar2) {
    InstallBundleUtil::PersistentStats::LexToString(**(ETimingStatNames **)this);
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8365718388407795108>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1505379a0

bool __thiscall
`InstallBundleUtil::PersistentStats::IsTimerReal'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_8365718388407795138>);
  if (bVar2) {
    InstallBundleUtil::PersistentStats::LexToString(**(ETimingStatNames **)this);
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8365718388407795138>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 150537a00

bool __thiscall
`InstallBundleUtil::PersistentStats::LexToString'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_8365718388407795169>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8365718388407795169>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 150537a50

bool __thiscall
`InstallBundleUtil::PersistentStats::LexToString'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_8365718388407795193>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8365718388407795193>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 150538110

bool __thiscall
``FInstallManagerBundleReportCache::Load'::__l2::<lambda_1>::operator()'::__l8::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<82672515515679134>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<82672515515679134>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// operator() @ 150538170

bool __thiscall
`InstallBundleUtil::GetConfiguredBundleSources'::__l12::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_8365718388407795591>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8365718388407795591>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

