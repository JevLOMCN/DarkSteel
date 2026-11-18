// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 2

// Init @ 143257b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __cdecl BuildPatchServices::FManifestData::Init(void)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  EFeatureLevel EVar4;
  uint *puVar5;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  void *local_110;
  undefined8 local_108;
  FArchiveState local_f8;
  undefined8 local_68;
  void **local_60;
  undefined8 local_58;
  FManifestHeader local_48;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_138;
  pUVar3 = GetTransientPackageAsObject();
  NewObject<UBuildPatchManifest>(pUVar3);
  EVar4 = Original;
  puVar5 = ManifestHeaderVersionSizes;
  local_118 = 0;
  do {
    local_48.HeaderSize = 0;
    local_48.DataSizeCompressed = 0;
    local_48.DataSizeUncompressed = 0;
    local_48.SHAHash.Hash[0x10] = '\0';
    local_48.SHAHash.Hash[0x11] = '\0';
    local_48.SHAHash.Hash[0x12] = '\0';
    local_48.SHAHash.Hash[0x13] = '\0';
    local_48.SHAHash.Hash[0] = '\0';
    local_48.SHAHash.Hash[1] = '\0';
    local_48.SHAHash.Hash[2] = '\0';
    local_48.SHAHash.Hash[3] = '\0';
    local_48.SHAHash.Hash[4] = '\0';
    local_48.SHAHash.Hash[5] = '\0';
    local_48.SHAHash.Hash[6] = '\0';
    local_48.SHAHash.Hash[7] = '\0';
    local_48.SHAHash.Hash[8] = '\0';
    local_48.SHAHash.Hash[9] = '\0';
    local_48.SHAHash.Hash[10] = '\0';
    local_48.SHAHash.Hash[0xb] = '\0';
    local_48.SHAHash.Hash[0xc] = '\0';
    local_48.SHAHash.Hash[0xd] = '\0';
    local_48.SHAHash.Hash[0xe] = '\0';
    local_48.SHAHash.Hash[0xf] = '\0';
    local_48.StoredAs = None;
    local_f8._padding_ = 0;
    local_f8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_f8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_f8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_110 = (void *)0x0;
    local_f8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_f8._40_8_ = 0;
    local_108 = 0;
    local_f8.ArSerializingDefaults = 0;
    local_f8.ArPortFlags = 0;
    local_f8.ArMaxSerializeSize = 0;
    local_f8.ArUEVer.FileVersionUE4 = 0;
    local_f8.ArUEVer.FileVersionUE5 = 0;
    local_f8.ArLicenseeUEVer = 0;
    local_f8.ArEngineVer.Major = 0;
    local_f8.ArEngineVer.Minor = 0;
    local_f8.ArEngineVer.Patch = 0;
    local_f8.ArEngineVer._6_2_ = 0;
    local_f8.ArEngineVer.Changelist = 0;
    local_f8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_f8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_f8.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_f8.SerializedProperty = (FProperty *)0x0;
    local_f8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_f8.bCustomVersionsAreReset = false;
    local_f8._129_7_ = 0;
    local_f8.NextProxy = (FArchiveState *)0x0;
    local_48.Version = EVar4;
    FArchiveState::FArchiveState(&local_f8);
    local_60 = &local_110;
    local_68 = 0;
    local_f8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    local_58 = 0;
    FArchiveState::SetIsSaving(&local_f8,true);
    (**(code **)(local_f8._padding_ + 0x108))(&local_f8,0);
    local_f8._padding_ = (longlong)&___7FMemoryWriter__6B_;
    BuildPatchServices::operator<<((FArchive *)&local_f8,&local_48);
    if (local_48.HeaderSize != (uint)local_108) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Header.HeaderSize == Data.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Data\\ManifestData.cpp"
                         ,0x22c,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (local_48.HeaderSize != *puVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Header.HeaderSize == ManifestHeaderVersionSizes[(int32)FeatureLevel]",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Data\\ManifestData.cpp"
                         ,0x22d,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FArchive::~FArchive((FArchive *)&local_f8);
    if (local_110 != (void *)0x0) {
      FMemory::Free(local_110);
    }
    EVar4 = EVar4 + CustomFields;
    puVar5 = puVar5 + 1;
  } while (EVar4 != LatestPlusOne);
  return;
}

// Serialize @ 143268070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
BuildPatchServices::FManifestData::Serialize
          (FArchive *param_1,FBuildPatchAppManifest *param_2,EFeatureLevel param_3)

{
  undefined1 uVar1;
  FName FVar2;
  bool bVar3;
  bool bVar4;
  FNameEntryId FVar5;
  uchar *puVar6;
  undefined4 extraout_var;
  FArchiveState *pFVar7;
  ulonglong uVar8;
  uchar *puVar9;
  uint uVar10;
  FName FVar11;
  int iVar12;
  FArchiveState *pFVar13;
  ulonglong uVar14;
  byte bVar15;
  undefined1 auStackY_e8 [32];
  FFastPathLoadBuffer local_a8;
  FNameEntryId local_90;
  uint uStack_8c;
  undefined1 local_88 [8];
  undefined8 uStack_80;
  uchar local_78 [8];
  undefined1 local_70 [20];
  FScriptContainerElement *local_5c;
  uchar *puStack_54;
  uchar local_4c [4];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  if ((param_1->field_0x29 & 2) != 0) {
    return false;
  }
  bVar15 = 1;
  if (((param_1->field_0x28 & 4) == 0) || (0xd < (int)param_3)) {
    puVar6 = (uchar *)(**(code **)(*(longlong *)param_1 + 0x28))();
    pFVar13 = (FArchiveState *)0x0;
    local_70._8_4_ = 0;
    local_70[0x10] = None;
    local_70._4_4_ = 0;
    local_70._12_4_ = 0;
    local_5c = (FScriptContainerElement *)0x0;
    puStack_54 = (uchar *)0x0;
    local_4c[0] = '\0';
    local_4c[1] = '\0';
    local_4c[2] = '\0';
    local_4c[3] = '\0';
    local_a8.OriginalFastPathLoadBuffer = puVar6;
    local_70._0_4_ = param_3;
    if ((param_1->field_0x28 & 1) != 0) {
      BuildPatchServices::operator<<(param_1,(FManifestHeader *)local_70);
      bVar15 = ~((byte)param_1->field_0x29 >> 1) & 1;
    }
    if (((param_1->field_0x28 & 1) == 0) || (0xd < (int)local_70._0_4_)) {
      FVar5 = FNameEntryId::FromValidEName((EName)local_88);
      uStack_8c = 0;
      uVar10 = *(uint *)CONCAT44(extraout_var,FVar5.Value);
      local_a8.StartFastPathLoadBuffer = (uchar *)0x0;
      local_a8.EndFastPathLoadBuffer = (uchar *)0x0;
      bVar3 = false;
      local_90.Value = uVar10;
      if (bVar15 != 0) {
        if ((param_1->field_0x28 & 1) == 0) goto LAB_143268406;
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,local_70._8_4_,(ForAnyElementType *)&local_a8,
                   (int *)&local_a8.EndFastPathLoadBuffer,
                   (int *)((longlong)&local_a8.EndFastPathLoadBuffer + 4));
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,local_a8.StartFastPathLoadBuffer,local_70._8_4_);
        puVar9 = local_a8.StartFastPathLoadBuffer;
        bVar3 = false;
        if ((~((byte)param_1->field_0x29 >> 1) & 1) == 0) goto LAB_14326865b;
        iVar12 = (uint)local_a8.EndFastPathLoadBuffer;
        if ((param_1->field_0x28 & 1) == 0) {
LAB_143268406:
          pFVar7 = ::operator_new(0xa8);
          if (pFVar7 != (FArchiveState *)0x0) {
            local_88 = (undefined1  [8])0x0;
            pFVar7->_padding_ = 0;
            pFVar7->ActiveFPLB = (FFastPathLoadBuffer *)0x0;
            (pFVar7->InlineFPLB).StartFastPathLoadBuffer = (uchar *)0x0;
            (pFVar7->InlineFPLB).EndFastPathLoadBuffer = (uchar *)0x0;
            (pFVar7->InlineFPLB).OriginalFastPathLoadBuffer = (uchar *)0x0;
            *(undefined8 *)&pFVar7->field_0x28 = 0;
            pFVar7->ArSerializingDefaults = 0;
            pFVar7->ArPortFlags = 0;
            pFVar7->ArMaxSerializeSize = 0;
            (pFVar7->ArUEVer).FileVersionUE4 = 0;
            (pFVar7->ArUEVer).FileVersionUE5 = 0;
            pFVar7->ArLicenseeUEVer = 0;
            (pFVar7->ArEngineVer).Major = 0;
            (pFVar7->ArEngineVer).Minor = 0;
            (pFVar7->ArEngineVer).Patch = 0;
            *(undefined2 *)&(pFVar7->ArEngineVer).field_0x6 = 0;
            (pFVar7->ArEngineVer).Changelist = 0;
            pFVar7->CustomVersionContainer = (FCustomVersionContainer *)0x0;
            pFVar7->ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
            pFVar7->SavePackageData = (FArchiveSavePackageData *)0x0;
            pFVar7->SerializedProperty = (FProperty *)0x0;
            pFVar7->SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
            *(undefined8 *)&pFVar7->bCustomVersionsAreReset = 0;
            pFVar7->NextProxy = (FArchiveState *)0x0;
            FArchiveState::FArchiveState(pFVar7);
            pFVar7[1]._padding_ = 0;
            pFVar7->_padding_ =
                 (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
            pFVar7[1].ActiveFPLB = &local_a8;
            pFVar7[1].InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
            FArchiveState::SetIsSaving(pFVar7,true);
            (**(code **)(pFVar7->_padding_ + 0x108))(pFVar7,0);
            pFVar7->_padding_ = (longlong)&___7FMemoryWriter__6B_;
            pFVar13 = pFVar7;
          }
        }
        else {
          if ((local_70[0x10] & Compressed) != None) {
            local_a8.StartFastPathLoadBuffer = (uchar *)0x0;
            local_a8.EndFastPathLoadBuffer = (uchar *)0x0;
            UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,local_70._12_4_,(ForAnyElementType *)&local_a8,
                       (int *)&local_a8.EndFastPathLoadBuffer,
                       (int *)((longlong)&local_a8.EndFastPathLoadBuffer + 4));
            FVar11.Number = 0;
            FVar11.ComparisonIndex.Value = uVar10;
            bVar3 = FCompression::UncompressMemory
                              (FVar11,local_a8.StartFastPathLoadBuffer,
                               (longlong)(int)(uint)local_a8.EndFastPathLoadBuffer,puVar9,
                               (longlong)iVar12,COMPRESS_BiasMemory,0);
            if ((FScriptContainerElement *)puVar9 != (FScriptContainerElement *)0x0) {
              FMemory::Free(puVar9);
            }
            if (!bVar3) goto LAB_14326865b;
            puVar6 = local_a8.OriginalFastPathLoadBuffer;
          }
          if ((param_1->field_0x28 & 1) == 0) goto LAB_143268406;
          local_88 = (undefined1  [8])0x0;
          uStack_80 = (uchar *)0x0;
          local_78[0] = '\0';
          local_78[1] = '\0';
          local_78[2] = '\0';
          local_78[3] = '\0';
          FSHA1::HashBuffer(local_a8.StartFastPathLoadBuffer,
                            (longlong)(int)(uint)local_a8.EndFastPathLoadBuffer,local_88);
          iVar12 = memcmp(local_88,&local_5c,0x14);
          bVar3 = iVar12 == 0;
          if (!bVar3) goto LAB_14326865b;
          if ((param_1->field_0x28 & 1) == 0) goto LAB_143268406;
          pFVar7 = ::operator_new(0xa8);
          if (pFVar7 != (FArchiveState *)0x0) {
            pFVar7->_padding_ = 0;
            pFVar7->ActiveFPLB = (FFastPathLoadBuffer *)0x0;
            (pFVar7->InlineFPLB).StartFastPathLoadBuffer = (uchar *)0x0;
            (pFVar7->InlineFPLB).EndFastPathLoadBuffer = (uchar *)0x0;
            (pFVar7->InlineFPLB).OriginalFastPathLoadBuffer = (uchar *)0x0;
            *(undefined8 *)&pFVar7->field_0x28 = 0;
            pFVar7->ArSerializingDefaults = 0;
            pFVar7->ArPortFlags = 0;
            pFVar7->ArMaxSerializeSize = 0;
            (pFVar7->ArUEVer).FileVersionUE4 = 0;
            (pFVar7->ArUEVer).FileVersionUE5 = 0;
            pFVar7->ArLicenseeUEVer = 0;
            (pFVar7->ArEngineVer).Major = 0;
            (pFVar7->ArEngineVer).Minor = 0;
            (pFVar7->ArEngineVer).Patch = 0;
            *(undefined2 *)&(pFVar7->ArEngineVer).field_0x6 = 0;
            (pFVar7->ArEngineVer).Changelist = 0;
            pFVar7->CustomVersionContainer = (FCustomVersionContainer *)0x0;
            pFVar7->ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
            pFVar7->SavePackageData = (FArchiveSavePackageData *)0x0;
            pFVar7->SerializedProperty = (FProperty *)0x0;
            pFVar7->SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
            *(undefined8 *)&pFVar7->bCustomVersionsAreReset = 0;
            pFVar7->NextProxy = (FArchiveState *)0x0;
            FArchiveState::FArchiveState(pFVar7);
            pFVar7[1]._padding_ = 0;
            pFVar7->_padding_ = (longlong)&___7FMemoryReader__6B_;
            pFVar7[1].ActiveFPLB = &local_a8;
            pFVar7[1].InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x7fffffffffffffff;
            FArchiveState::SetIsLoading(pFVar7,true);
            (**(code **)(pFVar7->_padding_ + 0x108))(pFVar7,0);
            pFVar13 = pFVar7;
          }
        }
        BuildPatchServices::operator<<((FArchive *)pFVar13,&param_2->ManifestMeta);
        BuildPatchServices::operator<<((FArchive *)pFVar13,&param_2->ChunkDataList);
        BuildPatchServices::operator<<((FArchive *)pFVar13,&param_2->FileManifestList);
        BuildPatchServices::operator<<((FArchive *)pFVar13,&param_2->CustomFields);
        (**(code **)pFVar13->_padding_)(pFVar13,1);
        bVar3 = (bool)(~pFVar13->ArIsError & 1);
        if (bVar3 != false) {
          if ((param_1->field_0x28 & 4) != 0) {
            local_88 = (undefined1  [8])0x0;
            uStack_80 = (uchar *)0x0;
            local_78[0] = '\0';
            local_78[1] = '\0';
            local_78[2] = '\0';
            local_78[3] = '\0';
            FSHA1::HashBuffer(local_a8.StartFastPathLoadBuffer,
                              (longlong)(int)(uint)local_a8.EndFastPathLoadBuffer,local_88);
            local_4c[0] = local_78[0];
            local_4c[1] = local_78[1];
            local_4c[2] = local_78[2];
            local_4c[3] = local_78[3];
            local_5c = (FScriptContainerElement *)local_88;
            puStack_54 = uStack_80;
            if ((param_1->field_0x28 & 4) != 0) {
              local_88 = (undefined1  [8])0x0;
              uStack_80 = (uchar *)0x0;
              local_70._12_4_ = (uint)local_a8.EndFastPathLoadBuffer;
              local_70._8_4_ = (uint)local_a8.EndFastPathLoadBuffer;
              UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,(uint)local_a8.EndFastPathLoadBuffer,(ForAnyElementType *)local_88,
                         (int *)&uStack_80,(int *)((longlong)&uStack_80 + 4));
              FVar2.Number = uStack_8c;
              FVar2.ComparisonIndex.Value = local_90.Value;
              bVar4 = FCompression::CompressMemory
                                (FVar2,(void *)local_88,(int *)(local_70 + 8),
                                 local_a8.StartFastPathLoadBuffer,
                                 (uint)local_a8.EndFastPathLoadBuffer,COMPRESS_BiasMemory,0);
              if (bVar4) {
                TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum
                          ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)local_88,
                           local_70._8_4_,No);
                if ((FScriptContainerElement *)local_a8.StartFastPathLoadBuffer !=
                    (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_a8.StartFastPathLoadBuffer);
                }
                local_a8.StartFastPathLoadBuffer = (uchar *)local_88;
                local_a8.EndFastPathLoadBuffer = uStack_80;
                uStack_80 = (uchar *)0x0;
                local_88 = (undefined1  [8])0x0;
                local_70[0x10] = Compressed;
              }
              else {
                local_70[0x10] = None;
                local_70._8_4_ = (uint)local_a8.EndFastPathLoadBuffer;
              }
              if (local_88 != (undefined1  [8])0x0) {
                FMemory::Free((void *)local_88);
              }
              if ((param_1->field_0x28 & 4) != 0) {
                (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,puVar6);
                BuildPatchServices::operator<<(param_1,(FManifestHeader *)local_70);
                (**(code **)(*(longlong *)param_1 + 0x188))
                          (param_1,local_a8.StartFastPathLoadBuffer,
                           (longlong)(int)(uint)local_a8.EndFastPathLoadBuffer);
                (**(code **)(*(longlong *)param_1 + 0x208))(param_1);
                bVar3 = (bool)(~((byte)param_1->field_0x29 >> 1) & 1);
                if (bVar3 == false) goto LAB_14326865b;
              }
            }
          }
          if ((param_1->field_0x28 & 1) != 0) {
            FFileManifestList::OnPostLoad(&param_2->FileManifestList);
            FBuildPatchAppManifest::InitLookups(param_2);
          }
        }
      }
LAB_14326865b:
      puVar6 = local_a8.OriginalFastPathLoadBuffer;
      if ((FScriptContainerElement *)local_a8.StartFastPathLoadBuffer !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.StartFastPathLoadBuffer);
        puVar6 = local_a8.OriginalFastPathLoadBuffer;
      }
    }
    else {
      local_a8.StartFastPathLoadBuffer = (uchar *)0x0;
      local_a8.EndFastPathLoadBuffer = (uchar *)0x0;
      uVar10 = local_70._12_4_;
      if ((local_70[0x10] & Compressed) != None) {
        uVar10 = local_70._8_4_;
      }
      iVar12 = uVar10 + local_70._4_4_;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar12,(ForAnyElementType *)&local_a8,(int *)&local_a8.EndFastPathLoadBuffer,
                 (int *)((longlong)&local_a8.EndFastPathLoadBuffer + 4));
      (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,puVar6);
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_a8.StartFastPathLoadBuffer,iVar12);
      bVar3 = FManifestUObject::LoadFromMemory
                        ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&local_a8,param_2);
      param_2->bNeedsResaving = true;
      if ((FScriptContainerElement *)local_a8.StartFastPathLoadBuffer !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.StartFastPathLoadBuffer);
      }
    }
    uVar8 = (ulonglong)(uint)local_70._4_4_;
    uVar14 = (ulonglong)(uint)local_70._8_4_;
    if (bVar3 == false) goto LAB_1432680c6;
    puVar9 = (uchar *)(**(code **)(*(longlong *)param_1 + 0x28))(param_1);
    if (puVar9 != puVar6 + uVar14 + uVar8) {
      (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,puVar6 + uVar14 + uVar8);
    }
  }
  else {
    bVar3 = FManifestUObject::SaveToArchive(param_1,param_2);
    if (!bVar3) goto LAB_1432680c6;
  }
  if ((param_1->field_0x29 & 2) == 0) {
    return true;
  }
LAB_1432680c6:
  FArchiveState::SetError((FArchiveState *)param_1);
  return false;
}

