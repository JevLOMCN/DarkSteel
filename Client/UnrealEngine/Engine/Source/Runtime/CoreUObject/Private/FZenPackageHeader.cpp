// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// MakeView @ 141f92a70

/* WARNING: Enum "EZenPackageVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FZenPackageHeader * __cdecl
FZenPackageHeader::MakeView
          (FZenPackageHeader *__return_storage_ptr__,TMemoryView<void_const_> *param_1)

{
  FString local_28;
  TMemoryView<void_const_> local_18;
  
  local_18.Data = param_1->Data;
  local_18.Size = param_1->Size;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  MakeView(__return_storage_ptr__,&local_18,&local_28);
  if (1 < local_28.Data.ArrayNum) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// MakeView @ 141f92ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EZenPackageVersion": Some values do not have unique names */

FZenPackageHeader * __cdecl
FZenPackageHeader::MakeView
          (FZenPackageHeader *__return_storage_ptr__,TMemoryView<void_const_> *param_1,
          FString *param_2)

{
  FZenPackageSummary *pFVar1;
  FScriptContainerElement *pFVar2;
  FZenPackageSummary *pFVar3;
  code *pcVar4;
  FName FVar5;
  uint *puVar6;
  ulong64 uVar7;
  FString *pFVar8;
  bool bVar9;
  FZenPackageHeader *pFVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  TOptional<FZenPackageVersioningInfo> *pTVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  ulong64 _Size;
  undefined1 auStack_208 [32];
  ulonglong local_1e8;
  ulonglong local_1e0;
  uint local_1d8;
  uint local_1d4;
  ulong64 local_1d0;
  ulong64 local_1c8;
  FString local_1c0;
  FArchiveState local_1a8;
  ulonglong local_118;
  FZenPackageSummary *local_110;
  ulonglong local_108;
  ulonglong local_100;
  uint local_f8;
  uint uStack_f4;
  FString *local_f0;
  FBulkDataMapEntry *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  ulong64 *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  FPackageObjectIndex *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  FExportMapEntry *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  FPackageObjectIndex *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  FCellExportMapEntry *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  FExportBundleEntry *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  FDependencyBundleHeader *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FDependencyBundleEntry *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  FString local_58;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_208;
  pFVar1 = param_1->Data;
  local_f0 = param_2;
  ::FString::Reset(param_2,0);
  __return_storage_ptr__->ExportCount = 0;
  (__return_storage_ptr__->VersioningInfo).bIsSet = false;
  (__return_storage_ptr__->NameMap).NameEntries.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->NameMap).NameEntries.ArrayNum = 0;
  (__return_storage_ptr__->NameMap).NameEntries.ArrayMax = 0;
  (__return_storage_ptr__->NameMap).NameMapType = Global;
  (__return_storage_ptr__->PackageName).ComparisonIndex = 0;
  (__return_storage_ptr__->PackageName).Number = 0;
  (__return_storage_ptr__->ImportedPublicExportHashes).DataPtr = (ulong64 *)0x0;
  (__return_storage_ptr__->ImportedPublicExportHashes).ArrayNum = 0;
  (__return_storage_ptr__->ImportMap).DataPtr = (FPackageObjectIndex *)0x0;
  (__return_storage_ptr__->ImportMap).ArrayNum = 0;
  (__return_storage_ptr__->ExportMap).DataPtr = (FExportMapEntry *)0x0;
  (__return_storage_ptr__->ExportMap).ArrayNum = 0;
  (__return_storage_ptr__->CellImportMap).DataPtr = (FPackageObjectIndex *)0x0;
  (__return_storage_ptr__->CellImportMap).ArrayNum = 0;
  (__return_storage_ptr__->CellExportMap).DataPtr = (FCellExportMapEntry *)0x0;
  (__return_storage_ptr__->CellExportMap).ArrayNum = 0;
  (__return_storage_ptr__->BulkDataMap).DataPtr = (FBulkDataMapEntry *)0x0;
  (__return_storage_ptr__->BulkDataMap).ArrayNum = 0;
  (__return_storage_ptr__->ExportBundleEntries).DataPtr = (FExportBundleEntry *)0x0;
  (__return_storage_ptr__->ExportBundleEntries).ArrayNum = 0;
  (__return_storage_ptr__->DependencyBundleHeaders).DataPtr = (FDependencyBundleHeader *)0x0;
  (__return_storage_ptr__->DependencyBundleHeaders).ArrayNum = 0;
  (__return_storage_ptr__->DependencyBundleEntries).DataPtr = (FDependencyBundleEntry *)0x0;
  (__return_storage_ptr__->DependencyBundleEntries).ArrayNum = 0;
  (__return_storage_ptr__->ImportedPackageNames).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ImportedPackageNames).ArrayNum = 0;
  (__return_storage_ptr__->ImportedPackageNames).ArrayMax = 0;
  __return_storage_ptr__->PackageSummary = pFVar1;
  iVar15 = pFVar1->HeaderSize - 0x34;
  if ((iVar15 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FZenPackageHeader *)(*pcVar4)();
    return pFVar10;
  }
  local_1a8._padding_ = 0;
  local_1a8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_1a8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_1a8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_1a8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_1a8._40_8_ = 0;
  local_1a8.ArSerializingDefaults = 0;
  local_1a8.ArPortFlags = 0;
  local_1a8.ArMaxSerializeSize = 0;
  local_1a8.ArUEVer.FileVersionUE4 = 0;
  local_1a8.ArUEVer.FileVersionUE5 = 0;
  local_1a8.ArLicenseeUEVer = 0;
  local_1a8.ArEngineVer.Major = 0;
  local_1a8.ArEngineVer.Minor = 0;
  local_1a8.ArEngineVer.Patch = 0;
  local_1a8.ArEngineVer._6_2_ = 0;
  local_1a8.ArEngineVer.Changelist = 0;
  local_1a8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_1a8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_1a8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_1a8.SerializedProperty = (FProperty *)0x0;
  local_1a8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_1a8.bCustomVersionsAreReset = false;
  local_1a8._129_7_ = 0;
  local_1a8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_1a8);
  local_108 = (ulonglong)iVar15;
  local_118 = 0;
  local_100 = 0x7fffffffffffffff;
  local_1a8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
  local_110 = pFVar1 + 1;
  FArchiveState::SetIsLoading(&local_1a8,true);
  (**(code **)(local_1a8._padding_ + 0x108))(&local_1a8,0);
  local_1a8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
  if (__return_storage_ptr__->PackageSummary->bHasVersioningInfo != 0) {
    if (((__return_storage_ptr__->VersioningInfo).bIsSet != false) &&
       (pFVar2 = (__return_storage_ptr__->VersioningInfo).TypedValue.CustomVersions.Versions.
                 AllocatorInstance.Data, pFVar2 != (FScriptContainerElement *)0x0)) {
      FMemory::Free(pFVar2);
    }
    (__return_storage_ptr__->VersioningInfo).TypedValue.ZenVersion = Initial;
    (__return_storage_ptr__->VersioningInfo).TypedValue.PackageVersion.FileVersionUE4 = 0;
    *(undefined8 *)
     &(__return_storage_ptr__->VersioningInfo).TypedValue.PackageVersion.FileVersionUE5 = 0;
    (__return_storage_ptr__->VersioningInfo).TypedValue.CustomVersions.Versions.AllocatorInstance.
    Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->VersioningInfo).TypedValue.CustomVersions.Versions.ArrayNum = 0;
    (__return_storage_ptr__->VersioningInfo).TypedValue.CustomVersions.Versions.ArrayMax = 0;
    (__return_storage_ptr__->VersioningInfo).bIsSet = true;
    ::operator<<((FArchive *)&local_1a8,&(__return_storage_ptr__->VersioningInfo).TypedValue);
  }
  pTVar14 = &__return_storage_ptr__->VersioningInfo;
  if ((__return_storage_ptr__->VersioningInfo).bIsSet == false) {
    pTVar14 = (TOptional<FZenPackageVersioningInfo> *)0x0;
  }
  if ((pTVar14 == (TOptional<FZenPackageVersioningInfo> *)0x0) ||
     (0x3f6 < (pTVar14->TypedValue).PackageVersion.FileVersionUE5)) {
    if ((local_1a8.ActiveFPLB)->EndFastPathLoadBuffer <
        (uint *)((longlong)(local_1a8.ActiveFPLB)->StartFastPathLoadBuffer + 4)) {
      if (local_1a8.ArForceByteSwapping == 0) {
        if (*(code **)(local_1a8._padding_ + 0x188) == FMemoryReaderView::Serialize) {
          if (local_1a8.ArIsError == 0) {
            lVar12 = (**(code **)(local_1a8._padding_ + 0x30))(&local_1a8);
            if (lVar12 < (longlong)(local_118 + 4)) {
              FArchiveState::SetError(&local_1a8);
            }
            else {
              uVar11 = local_118;
              if (local_108 < local_118) {
                uVar11 = local_108;
              }
              puVar6 = &local_110->bHasVersioningInfo;
              uVar17 = 4;
              if (local_108 - uVar11 < 4) {
                uVar17 = local_108 - uVar11;
              }
              if (uVar17 < 5) {
                if (uVar17 != 0) goto LAB_141f92da9;
              }
              else {
                local_1e0 = 4;
                local_1e8 = uVar17;
                bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InView.Size <= Size",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Memory\\MemoryView.h"
                                   ,0xdb,
                                   L"Failed to copy from a view of %llu bytes to a view of %llu bytes."
                                  );
                if (bVar9) {
                  pcVar4 = (code *)swi(3);
                  pFVar10 = (FZenPackageHeader *)(*pcVar4)();
                  return pFVar10;
                }
LAB_141f92da9:
                memcpy(&local_1d8,(void *)((longlong)puVar6 + uVar11),uVar17);
              }
              local_118 = local_118 + 4;
            }
          }
        }
        else {
          (**(code **)(local_1a8._padding_ + 0x188))(&local_1a8,&local_1d8,4);
        }
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_1a8,&local_1d8);
      }
    }
    else {
      local_1d8 = *(uint *)(local_1a8.ActiveFPLB)->StartFastPathLoadBuffer;
      (local_1a8.ActiveFPLB)->StartFastPathLoadBuffer =
           (local_1a8.ActiveFPLB)->StartFastPathLoadBuffer + 4;
    }
    if ((local_1a8.ActiveFPLB)->EndFastPathLoadBuffer <
        (uint *)((longlong)(local_1a8.ActiveFPLB)->StartFastPathLoadBuffer + 4)) {
      if (local_1a8.ArForceByteSwapping == 0) {
        if (*(code **)(local_1a8._padding_ + 0x188) == FMemoryReaderView::Serialize) {
          if (local_1a8.ArIsError == 0) {
            lVar12 = (**(code **)(local_1a8._padding_ + 0x30))(&local_1a8);
            if (lVar12 < (longlong)(local_118 + 4)) {
              FArchiveState::SetError(&local_1a8);
            }
            else {
              uVar11 = local_118;
              if (local_108 < local_118) {
                uVar11 = local_108;
              }
              puVar6 = &local_110->bHasVersioningInfo;
              uVar17 = 4;
              if (local_108 - uVar11 < 4) {
                uVar17 = local_108 - uVar11;
              }
              if (uVar17 < 5) {
                if (uVar17 != 0) goto LAB_141f92ec7;
              }
              else {
                local_1e0 = 4;
                local_1e8 = uVar17;
                bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InView.Size <= Size",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Memory\\MemoryView.h"
                                   ,0xdb,
                                   L"Failed to copy from a view of %llu bytes to a view of %llu bytes."
                                  );
                if (bVar9) {
                  pcVar4 = (code *)swi(3);
                  pFVar10 = (FZenPackageHeader *)(*pcVar4)();
                  return pFVar10;
                }
LAB_141f92ec7:
                memcpy(&local_1d4,(void *)((longlong)puVar6 + uVar11),uVar17);
              }
              local_118 = local_118 + 4;
            }
          }
        }
        else {
          (**(code **)(local_1a8._padding_ + 0x188))(&local_1a8,&local_1d4);
        }
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_1a8,&local_1d4);
      }
    }
    else {
      local_1d4 = *(uint *)(local_1a8.ActiveFPLB)->StartFastPathLoadBuffer;
      (local_1a8.ActiveFPLB)->StartFastPathLoadBuffer =
           (local_1a8.ActiveFPLB)->StartFastPathLoadBuffer + 4;
    }
  }
  else {
    local_1d8 = pFVar1->ExportBundleEntriesOffset;
    local_1d4 = pFVar1->ExportBundleEntriesOffset;
  }
  if (CpuChannel->Enabled < 0) {
    FNameMap::Load(&__return_storage_ptr__->NameMap,(FArchive *)&local_1a8,Package);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId49,"LoadPackageNameMap",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\ZenPackageHeader.cpp"
               ,0x31);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId49);
    FNameMap::Load(&__return_storage_ptr__->NameMap,(FArchive *)&local_1a8,Package);
    FCpuProfilerTrace::OutputEndEvent();
  }
  pFVar3 = __return_storage_ptr__->PackageSummary;
  if (((pFVar3->Name).Index >> 0x1e != (__return_storage_ptr__->NameMap).NameMapType) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("MappedName.GetType() == NameMapType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MappedName.h"
                         ,0x80,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FZenPackageHeader *)(*pcVar4)();
    return pFVar10;
  }
  if (((uint)(__return_storage_ptr__->NameMap).NameEntries.ArrayNum <=
       ((pFVar3->Name).Index & 0x3fffffff)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("MappedName.GetIndex() < uint32(NameEntries.Num())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MappedName.h"
                         ,0x81,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FZenPackageHeader *)(*pcVar4)();
    return pFVar10;
  }
  iVar15 = (__return_storage_ptr__->NameMap).NameEntries.ArrayNum;
  uVar16 = (pFVar3->Name).Index & 0x3fffffff;
  if ((iVar15 <= (int)uVar16) &&
     (local_1e8 = (ulonglong)uVar16, local_1e0 = (longlong)iVar15,
     bVar9 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar9
     )) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FZenPackageHeader *)(*pcVar4)();
    return pFVar10;
  }
  local_f8 = *(uint *)((__return_storage_ptr__->NameMap).NameEntries.AllocatorInstance.Data +
                      (ulonglong)uVar16 * 4);
  uStack_f4 = (pFVar3->Name).Number;
  FVar5.Number = uStack_f4;
  FVar5.ComparisonIndex.Value = local_f8;
  __return_storage_ptr__->PackageName = FVar5;
  if ((pTVar14 != (TOptional<FZenPackageVersioningInfo> *)0x0) &&
     ((pTVar14->TypedValue).PackageVersion.FileVersionUE5 < 0x3f1)) goto LAB_141f933a9;
  local_1c8 = 0;
  local_1d0 = 0;
  if ((local_1a8.ActiveFPLB)->EndFastPathLoadBuffer <
      (ulonglong *)((longlong)(local_1a8.ActiveFPLB)->StartFastPathLoadBuffer + 8)) {
    if (local_1a8.ArForceByteSwapping == 0) {
      if (*(code **)(local_1a8._padding_ + 0x188) == FMemoryReaderView::Serialize) {
        if (local_1a8.ArIsError == 0) {
          lVar12 = (**(code **)(local_1a8._padding_ + 0x30))(&local_1a8);
          if (lVar12 < (longlong)(local_118 + 8)) {
            FArchiveState::SetError(&local_1a8);
          }
          else {
            uVar11 = local_118;
            if (local_108 < local_118) {
              uVar11 = local_108;
            }
            puVar6 = &local_110->bHasVersioningInfo;
            uVar17 = 8;
            if (local_108 - uVar11 < 8) {
              uVar17 = local_108 - uVar11;
            }
            if (uVar17 < 9) {
              if (uVar17 != 0) goto LAB_141f9312c;
            }
            else {
              local_1e0 = 8;
              local_1e8 = uVar17;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("InView.Size <= Size",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Memory\\MemoryView.h"
                                 ,0xdb,
                                 L"Failed to copy from a view of %llu bytes to a view of %llu bytes."
                                );
              if (bVar9) {
                pcVar4 = (code *)swi(3);
                pFVar10 = (FZenPackageHeader *)(*pcVar4)();
                return pFVar10;
              }
LAB_141f9312c:
              memcpy(&local_1d0,(void *)((longlong)puVar6 + uVar11),uVar17);
            }
            local_118 = local_118 + 8;
          }
        }
      }
      else {
        (**(code **)(local_1a8._padding_ + 0x188))(&local_1a8,&local_1d0,8);
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_1a8,&local_1d0);
    }
  }
  else {
    local_1d0 = *(ulong64 *)(local_1a8.ActiveFPLB)->StartFastPathLoadBuffer;
    (local_1a8.ActiveFPLB)->StartFastPathLoadBuffer =
         (local_1a8.ActiveFPLB)->StartFastPathLoadBuffer + 8;
  }
  uVar7 = local_1d0;
  local_48 = 0;
  if ((local_1d0 != 0) && (local_1a8.ArIsError == 0)) {
    if (*(code **)(local_1a8._padding_ + 0x30) == FMemoryReaderView::TotalSize) {
      uVar11 = local_100;
      if ((longlong)local_108 < (longlong)local_100) {
        uVar11 = local_108;
      }
    }
    else {
      uVar11 = (**(code **)(local_1a8._padding_ + 0x30))(&local_1a8);
    }
    if ((longlong)uVar11 < (longlong)(uVar7 + local_118)) {
      FArchiveState::SetError(&local_1a8);
    }
    else {
      uVar11 = local_118;
      if (local_108 < local_118) {
        uVar11 = local_108;
      }
      puVar6 = &local_110->bHasVersioningInfo;
      _Size = uVar7;
      if (local_108 - uVar11 < uVar7) {
        _Size = local_108 - uVar11;
      }
      if (uVar7 < _Size) {
        local_1e0 = uVar7;
        local_1e8 = _Size;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InView.Size <= Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Memory\\MemoryView.h"
                           ,0xdb,
                           L"Failed to copy from a view of %llu bytes to a view of %llu bytes.");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FZenPackageHeader *)(*pcVar4)();
          return pFVar10;
        }
      }
      if (_Size != 0) {
        memcpy(&local_48,(void *)((longlong)puVar6 + uVar11),_Size);
      }
      local_118 = local_118 + uVar7;
    }
  }
  if ((local_1a8.ActiveFPLB)->EndFastPathLoadBuffer <
      (ulonglong *)((longlong)(local_1a8.ActiveFPLB)->StartFastPathLoadBuffer + 8)) {
    if (local_1a8.ArForceByteSwapping == 0) {
      if (*(code **)(local_1a8._padding_ + 0x188) == FMemoryReaderView::Serialize) {
        if (local_1a8.ArIsError == 0) {
          lVar12 = (**(code **)(local_1a8._padding_ + 0x30))(&local_1a8);
          if (lVar12 < (longlong)(local_118 + 8)) {
            FArchiveState::SetError(&local_1a8);
          }
          else {
            uVar11 = local_118;
            if (local_108 < local_118) {
              uVar11 = local_108;
            }
            puVar6 = &local_110->bHasVersioningInfo;
            uVar17 = 8;
            if (local_108 - uVar11 < 8) {
              uVar17 = local_108 - uVar11;
            }
            if (uVar17 < 9) {
              if (uVar17 != 0) goto LAB_141f93316;
            }
            else {
              local_1e0 = 8;
              local_1e8 = uVar17;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("InView.Size <= Size",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Memory\\MemoryView.h"
                                 ,0xdb,
                                 L"Failed to copy from a view of %llu bytes to a view of %llu bytes."
                                );
              if (bVar9) {
                pcVar4 = (code *)swi(3);
                pFVar10 = (FZenPackageHeader *)(*pcVar4)();
                return pFVar10;
              }
LAB_141f93316:
              memcpy(&local_1c8,(void *)((longlong)puVar6 + uVar11),uVar17);
            }
            local_118 = local_118 + 8;
          }
        }
      }
      else {
        (**(code **)(local_1a8._padding_ + 0x188))(&local_1a8,&local_1c8,8);
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_1a8,&local_1c8);
    }
  }
  else {
    local_1c8 = *(ulong64 *)(local_1a8.ActiveFPLB)->StartFastPathLoadBuffer;
    (local_1a8.ActiveFPLB)->StartFastPathLoadBuffer =
         (local_1a8.ActiveFPLB)->StartFastPathLoadBuffer + 8;
  }
  local_e8 = (FBulkDataMapEntry *)((longlong)&pFVar1[1].bHasVersioningInfo + local_118);
  iStack_e0 = (int)(local_1c8 >> 5);
  if ((iStack_e0 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FZenPackageHeader *)(*pcVar4)();
    return pFVar10;
  }
  (__return_storage_ptr__->BulkDataMap).DataPtr = local_e8;
  *(ulonglong *)&(__return_storage_ptr__->BulkDataMap).ArrayNum = CONCAT44(uStack_dc,iStack_e0);
LAB_141f933a9:
  local_d8 = (ulong64 *)
             ((longlong)&pFVar1->bHasVersioningInfo +
             (longlong)pFVar1->ImportedPublicExportHashesOffset);
  iStack_d0 = (int)((ulonglong)
                    (longlong)(pFVar1->ImportMapOffset - pFVar1->ImportedPublicExportHashesOffset)
                   >> 3);
  if ((iStack_d0 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FZenPackageHeader *)(*pcVar4)();
    return pFVar10;
  }
  (__return_storage_ptr__->ImportedPublicExportHashes).DataPtr = local_d8;
  *(ulonglong *)&(__return_storage_ptr__->ImportedPublicExportHashes).ArrayNum =
       CONCAT44(uStack_cc,iStack_d0);
  local_c8 = (FPackageObjectIndex *)
             ((longlong)&pFVar1->bHasVersioningInfo + (longlong)pFVar1->ImportMapOffset);
  iStack_c0 = (int)((ulonglong)(longlong)(pFVar1->ExportMapOffset - pFVar1->ImportMapOffset) >> 3);
  if ((iStack_c0 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FZenPackageHeader *)(*pcVar4)();
    return pFVar10;
  }
  (__return_storage_ptr__->ImportMap).DataPtr = local_c8;
  *(ulonglong *)&(__return_storage_ptr__->ImportMap).ArrayNum = CONCAT44(uStack_bc,iStack_c0);
  local_b8 = (FExportMapEntry *)
             ((longlong)&pFVar1->bHasVersioningInfo + (longlong)pFVar1->ExportMapOffset);
  iStack_b0 = (int)((ulonglong)(longlong)(int)(local_1d8 - pFVar1->ExportMapOffset) / 0x48);
  if ((iStack_b0 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FZenPackageHeader *)(*pcVar4)();
    return pFVar10;
  }
  local_a8 = (FPackageObjectIndex *)
             ((longlong)&pFVar1->bHasVersioningInfo + (longlong)(int)local_1d8);
  iStack_a0 = (int)((ulonglong)(longlong)(int)(local_1d4 - local_1d8) >> 3);
  (__return_storage_ptr__->ExportMap).DataPtr = local_b8;
  *(ulonglong *)&(__return_storage_ptr__->ExportMap).ArrayNum = CONCAT44(uStack_ac,iStack_b0);
  if ((iStack_a0 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FZenPackageHeader *)(*pcVar4)();
    return pFVar10;
  }
  local_98 = (FCellExportMapEntry *)
             ((longlong)&pFVar1->bHasVersioningInfo + (longlong)(int)local_1d4);
  (__return_storage_ptr__->CellImportMap).DataPtr = local_a8;
  *(ulonglong *)&(__return_storage_ptr__->CellImportMap).ArrayNum = CONCAT44(uStack_9c,iStack_a0);
  iStack_90 = (int)((ulonglong)(longlong)(int)(pFVar1->ExportBundleEntriesOffset - local_1d4) / 0x28
                   );
  if ((iStack_90 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FZenPackageHeader *)(*pcVar4)();
    return pFVar10;
  }
  pFVar3 = __return_storage_ptr__->PackageSummary;
  uVar16 = (__return_storage_ptr__->ExportMap).ArrayNum;
  __return_storage_ptr__->ExportCount = uVar16;
  (__return_storage_ptr__->CellExportMap).DataPtr = local_98;
  *(ulonglong *)&(__return_storage_ptr__->CellExportMap).ArrayNum = CONCAT44(uStack_8c,iStack_90);
  iVar15 = pFVar3->ExportBundleEntriesOffset;
  iVar13 = (int)((ulonglong)(longlong)(pFVar3->DependencyBundleHeadersOffset - iVar15) >> 3);
  if (iVar13 == ((__return_storage_ptr__->CellExportMap).ArrayNum + uVar16) * 2) {
    local_88 = (FExportBundleEntry *)((longlong)&pFVar1->bHasVersioningInfo + (longlong)iVar15);
    iStack_80 = iVar13;
    if ((iVar13 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FZenPackageHeader *)(*pcVar4)();
      return pFVar10;
    }
    (__return_storage_ptr__->ExportBundleEntries).DataPtr = local_88;
    *(ulonglong *)&(__return_storage_ptr__->ExportBundleEntries).ArrayNum =
         CONCAT44(uStack_7c,iStack_80);
    local_78 = (FDependencyBundleHeader *)
               ((longlong)&pFVar1->bHasVersioningInfo +
               (longlong)pFVar1->DependencyBundleHeadersOffset);
    iStack_70 = (int)((ulonglong)
                      (longlong)
                      (pFVar1->DependencyBundleEntriesOffset - pFVar1->DependencyBundleHeadersOffset
                      ) / 0x14);
    if ((iStack_70 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FZenPackageHeader *)(*pcVar4)();
      return pFVar10;
    }
    (__return_storage_ptr__->DependencyBundleHeaders).DataPtr = local_78;
    *(ulonglong *)&(__return_storage_ptr__->DependencyBundleHeaders).ArrayNum =
         CONCAT44(uStack_6c,iStack_70);
    local_68 = (FDependencyBundleEntry *)
               ((longlong)&pFVar1->bHasVersioningInfo +
               (longlong)pFVar1->DependencyBundleEntriesOffset);
    iStack_60 = (int)((ulonglong)
                      (longlong)
                      (pFVar1->ImportedPackageNamesOffset - pFVar1->DependencyBundleEntriesOffset)
                     >> 2);
    if ((iStack_60 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FZenPackageHeader *)(*pcVar4)();
      return pFVar10;
    }
    (__return_storage_ptr__->DependencyBundleEntries).DataPtr = local_68;
    *(ulonglong *)&(__return_storage_ptr__->DependencyBundleEntries).ArrayNum =
         CONCAT44(uStack_5c,iStack_60);
  }
  else {
    ::FName::ToString(&__return_storage_ptr__->PackageName,&local_58);
    ::FString::PrintfImpl(&local_1c0,L"Corrupt Zen header in package %s");
    pFVar8 = local_f0;
    if (local_f0 != &local_1c0) {
      pFVar2 = (local_f0->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar8->Data).AllocatorInstance.Data = local_1c0.Data.AllocatorInstance.Data;
      (pFVar8->Data).ArrayNum = local_1c0.Data.ArrayNum;
      (pFVar8->Data).ArrayMax = local_1c0.Data.ArrayMax;
      local_1c0.Data.ArrayNum = 0;
      local_1c0.Data.ArrayMax = 0;
      local_1c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  FArchive::~FArchive((FArchive *)&local_1a8);
  return __return_storage_ptr__;
}

// Reset @ 141f99e40

/* WARNING: Enum "EZenPackageVersion": Some values do not have unique names */

void __thiscall FZenPackageHeader::Reset(FZenPackageHeader *this)

{
  uint uStack_c;
  
  (this->ImportedPublicExportHashes).DataPtr = (ulong64 *)0x0;
  *(ulonglong *)&(this->ImportedPublicExportHashes).ArrayNum = (ulonglong)uStack_c << 0x20;
  this->PackageSummary = (FZenPackageSummary *)0x0;
  (this->ImportMap).DataPtr = (FPackageObjectIndex *)0x0;
  *(ulonglong *)&(this->ImportMap).ArrayNum = (ulonglong)uStack_c << 0x20;
  (this->ExportMap).DataPtr = (FExportMapEntry *)0x0;
  *(ulonglong *)&(this->ExportMap).ArrayNum = (ulonglong)uStack_c << 0x20;
  (this->CellImportMap).DataPtr = (FPackageObjectIndex *)0x0;
  *(ulonglong *)&(this->CellImportMap).ArrayNum = (ulonglong)uStack_c << 0x20;
  (this->CellExportMap).DataPtr = (FCellExportMapEntry *)0x0;
  *(ulonglong *)&(this->CellExportMap).ArrayNum = (ulonglong)uStack_c << 0x20;
  (this->BulkDataMap).DataPtr = (FBulkDataMapEntry *)0x0;
  *(ulonglong *)&(this->BulkDataMap).ArrayNum = (ulonglong)uStack_c << 0x20;
  (this->ExportBundleEntries).DataPtr = (FExportBundleEntry *)0x0;
  *(ulonglong *)&(this->ExportBundleEntries).ArrayNum = (ulonglong)uStack_c << 0x20;
  (this->DependencyBundleHeaders).DataPtr = (FDependencyBundleHeader *)0x0;
  *(ulonglong *)&(this->DependencyBundleHeaders).ArrayNum = (ulonglong)uStack_c << 0x20;
  (this->DependencyBundleEntries).DataPtr = (FDependencyBundleEntry *)0x0;
  *(ulonglong *)&(this->DependencyBundleEntries).ArrayNum = (ulonglong)uStack_c << 0x20;
  return;
}

