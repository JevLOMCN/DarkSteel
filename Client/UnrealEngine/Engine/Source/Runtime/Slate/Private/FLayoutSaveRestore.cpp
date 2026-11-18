// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 11

// DuplicateConfig @ 14272ed10

bool __cdecl FLayoutSaveRestore::DuplicateConfig(FString *param_1,FString *param_2)

{
  bool bVar1;
  int iVar2;
  IFileManager *pIVar3;
  FString *pFVar4;
  TSharedPtr<FJsonObject,1> *pTVar5;
  wchar_t *pwVar6;
  FSharedReferencer<1> FVar7;
  wchar_t *pwVar8;
  FJsonObject *pFVar9;
  TArray<FString,TSizedDefaultAllocator<32>_> local_68;
  TSharedPtr<FJsonObject,1> local_58;
  TSharedPtr<FJsonObject,1> local_48;
  FString local_38;
  TSharedPtr<FJsonObject,1> local_28 [2];
  
  pIVar3 = IFileManager::Get();
  pwVar6 = L"";
  if ((param_1->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  if ((param_2->Data).ArrayNum != 0) {
    pwVar6 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  iVar2 = (**(code **)((longlong)*pIVar3 + 0x40))(pIVar3,pwVar6,pwVar8,1,1,0,0,0,0);
  if (iVar2 == 1) {
    bVar1 = false;
  }
  else {
    local_58.Object = (FJsonObject *)0x0;
    local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar4 = GetLayoutJsonFileName((FString *)&local_68,param_1);
    LoadJsonFile(&local_48,pFVar4);
    if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
    FVar7.ReferenceController = local_48.SharedReferenceCount.ReferenceController;
    if (local_48.Object == (FJsonObject *)0x0) {
      local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.ArrayNum = 0;
      local_68.ArrayMax = 0;
      pwVar6 = GetEditorLayoutsSectionName();
      bVar1 = FConfigCacheIni::GetSection(GConfig,pwVar6,&local_68,param_2);
      if ((!bVar1) &&
         (pwVar6 = GetEditorLayoutsSectionName(), pwVar6 != DefaultEditorLayoutsSectionName)) {
        FConfigCacheIni::GetSection(GConfig,DefaultEditorLayoutsSectionName,&local_68,param_2);
      }
      pTVar5 = ConvertSectionToJson(local_28,&local_68);
      pFVar9 = (FJsonObject *)0x0;
      FVar7.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (&local_58 != pTVar5) {
        local_58.Object = pTVar5->Object;
        pTVar5->Object = (FJsonObject *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&local_58.SharedReferenceCount,&pTVar5->SharedReferenceCount);
        pFVar9 = local_58.Object;
        FVar7.ReferenceController = local_58.SharedReferenceCount.ReferenceController;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28[0].SharedReferenceCount.ReferenceController);
      DestructItems<FString,int>((FString *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
      local_28[0].SharedReferenceCount.ReferenceController = FVar7.ReferenceController;
      if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.AllocatorInstance.Data);
      }
    }
    else {
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_58.Object = local_48.Object;
      local_58.SharedReferenceCount.ReferenceController =
           local_48.SharedReferenceCount.ReferenceController;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pFVar9 = local_58.Object;
      local_28[0].SharedReferenceCount.ReferenceController =
           local_58.SharedReferenceCount.ReferenceController;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    GetLayoutJsonFileName(&local_38,param_2);
    if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar7.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28[0].Object = pFVar9;
    SaveJsonFile(&local_38,local_28);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar7.ReferenceController);
    bVar1 = true;
  }
  return bVar1;
}

// GetAdditionalLayoutConfigIni @ 142739c10

FString * __cdecl FLayoutSaveRestore::GetAdditionalLayoutConfigIni(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&IniSectionAdditionalConfig,L"SlateAdditionalLayoutConfig");
      atexit(`FLayoutSaveRestore::GetAdditionalLayoutConfigIni'::__l2::
             _dynamic_atexit_destructor_for__IniSectionAdditionalConfig__);
      _Init_thread_footer(&::_TSS0);
      return &IniSectionAdditionalConfig;
    }
  }
  return &IniSectionAdditionalConfig;
}

// IsValidConfig @ 14274e8e0

bool __cdecl FLayoutSaveRestore::IsValidConfig(FString *param_1,bool param_2)

{
  bool bVar1;
  undefined1 uVar2;
  wchar_t *pwVar3;
  IFileManager *pIVar4;
  bool bVar5;
  ForAnyElementType FVar6;
  FString local_38;
  FString local_28;
  
  bVar5 = false;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_28,pwVar3);
  pwVar3 = GetEditorLayoutsSectionName();
  bVar1 = FConfigCacheIni::DoesSectionExist(GConfig,pwVar3,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar1) {
    return true;
  }
  if (param_2) {
    if ((param_1->Data).ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    ::FString::FString(&local_28,pwVar3);
    bVar5 = true;
    bVar1 = FConfigCacheIni::DoesSectionExist(GConfig,DefaultEditorLayoutsSectionName,&local_28);
    if (bVar1) {
      bVar1 = true;
      goto LAB_14274e996;
    }
  }
  bVar1 = false;
LAB_14274e996:
  if ((bVar5) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar1) {
    return true;
  }
  GetLayoutJsonFileName(&local_38,param_1);
  pIVar4 = IFileManager::Get();
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar6.Data = local_38.Data.AllocatorInstance.Data;
  }
  uVar2 = (**(code **)((longlong)*pIVar4 + 0x50))(pIVar4,FVar6.Data);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
    return (bool)uVar2;
  }
  return (bool)uVar2;
}

// LoadFromConfig @ 142750960

TSharedRef<FTabManager::FLayout,1> * __cdecl
FLayoutSaveRestore::LoadFromConfig
          (TSharedRef<FTabManager::FLayout,1> *__return_storage_ptr__,FString *param_1,
          TSharedRef<FTabManager::FLayout,1> *param_2,EOutputCanBeNullptr param_3)

{
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  LoadFromConfigPrivate(__return_storage_ptr__,param_1,param_2,param_3,false,&local_18);
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// LoadFromConfig @ 1427509c0

TSharedRef<FTabManager::FLayout,1> * __cdecl
FLayoutSaveRestore::LoadFromConfig
          (TSharedRef<FTabManager::FLayout,1> *__return_storage_ptr__,FString *param_1,
          TSharedRef<FTabManager::FLayout,1> *param_2,EOutputCanBeNullptr param_3,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_4)

{
  LoadFromConfigPrivate(__return_storage_ptr__,param_1,param_2,param_3,true,param_4);
  return __return_storage_ptr__;
}

// LoadFromConfigPrivate @ 1427509f0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FTabManager::FLayout,1> * __cdecl
FLayoutSaveRestore::LoadFromConfigPrivate
          (TSharedRef<FTabManager::FLayout,1> *__return_storage_ptr__,FString *param_1,
          TSharedRef<FTabManager::FLayout,1> *param_2,EOutputCanBeNullptr param_3,bool param_4,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_5)

{
  ulonglong uVar1;
  FArea *pFVar2;
  code *pcVar3;
  atomic<int> aVar4;
  FLayout *pFVar5;
  FConfigSection *pFVar6;
  bool bVar7;
  atomic<int> aVar8;
  int iVar9;
  uint uVar10;
  FString *pFVar11;
  TSharedPtr<FTabManager::FLayout,1> *pTVar12;
  TSharedRef<FTabManager::FLayout,1> *pTVar13;
  TSharedRef<FGlobalTabmanager,1> *pTVar14;
  wchar_t *pwVar15;
  FConfigSection *pFVar16;
  FName *pFVar17;
  FConfigValue *pFVar18;
  wchar_t *pwVar19;
  ForAnyElementType FVar20;
  FStaticBasicLogRecord *pFVar21;
  FSharedReferencer<1> FVar22;
  FScriptContainerElement *pFVar23;
  int iVar24;
  int iVar25;
  longlong lVar26;
  TReferenceControllerBase<1> *pTVar27;
  TReferenceControllerBase<1> *pTVar28;
  uint uVar29;
  ForElementType<unsigned_int> FVar30;
  int iVar31;
  longlong *plVar32;
  uint uVar33;
  FScriptContainerElement *pFVar34;
  byte bVar35;
  TReferenceControllerBase<1> *pTVar36;
  TReferenceControllerBase<1> *pTVar37;
  FString local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  FConfigSection *local_1a0;
  TReferenceControllerBase<1> *local_198;
  TSharedPtr<FTabManager::FLayout,1> local_190;
  ForElementType<unsigned_int> local_180;
  FString local_178;
  FString local_168;
  FString local_158;
  int local_148;
  FString local_140;
  FName local_130;
  FGlobalTabmanager *local_128;
  TSharedRef<FTabManager::FLayoutNode,1> local_120;
  FString local_110;
  FConfigSection *local_100;
  int iStack_f8;
  uint uStack_f4;
  longlong *local_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  int local_e0;
  undefined4 uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  FConfigSection *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  code *local_a0;
  FGlobalTabmanager **local_98;
  FName local_90;
  FString local_88;
  FString local_78;
  TSharedPtr<FTabManager::FLayout,1> local_68 [2];
  undefined4 local_3c;
  
  pTVar37 = (TReferenceControllerBase<1> *)0x0;
  local_148 = 0;
  local_130 = param_2->Object->LayoutName;
  ::FName::ToString(&local_130,&local_1b8);
  local_190.Object = (FLayout *)0x0;
  local_190.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar7 = LoadLayoutFromJson(param_1,&local_1b8,&local_190);
  uVar10 = 1;
  if (!bVar7) {
    local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FVar20.Data = (FScriptContainerElement *)L"";
    if (local_1b8.Data.ArrayNum != 0) {
      FVar20.Data = local_1b8.Data.AllocatorInstance.Data;
    }
    local_178.Data.ArrayNum = 0;
    local_178.Data.ArrayMax = 0;
    GetConfigString((wchar_t *)FVar20.Data,&local_178,param_1,true);
    FVar20.Data = (FScriptContainerElement *)L"";
    if (local_178.Data.ArrayNum != 0) {
      FVar20.Data = local_178.Data.AllocatorInstance.Data;
    }
    bVar7 = FTextStringHelper::IsComplexText((wchar_t *)FVar20.Data);
    FVar20.Data = local_178.Data.AllocatorInstance.Data;
    if (bVar7) {
      lVar26 = (longlong)local_178.Data.ArrayNum;
      local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_158.Data.ArrayNum = local_178.Data.ArrayNum;
      if (local_178.Data.ArrayNum == 0) {
        local_158.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_178.Data.ArrayNum,0,(ForAnyElementType *)&local_158,
                   local_178.Data.ArrayNum,&local_158.Data.ArrayMax);
        memcpy(local_158.Data.AllocatorInstance.Data,FVar20.Data,lVar26 * 2);
      }
    }
    else {
      pFVar11 = ::FString::Replace(&local_178,&local_78,L"(",L"{",IgnoreCase);
      pFVar11 = ::FString::Replace(pFVar11,&local_88,L")",L"}",IgnoreCase);
      ::FString::Replace(pFVar11,&local_158,L"\\\r\n",L"\r\n",IgnoreCase);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    pTVar12 = FTabManager::FLayout::NewFromString(local_68,&local_158);
    if (&local_190 != pTVar12) {
      local_190.Object = pTVar12->Object;
      pTVar12->Object = (FLayout *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_190.SharedReferenceCount,&pTVar12->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68[0].SharedReferenceCount.ReferenceController);
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
  }
  pFVar5 = local_190.Object;
  if (local_190.Object == (FLayout *)0x0) {
    if (!param_4) goto LAB_1427513dd;
    pwVar15 = GetEditorLayoutsSectionName();
    pFVar16 = FConfigCacheIni::GetSection(GConfig,pwVar15,false,param_1);
    if (pFVar16 == (FConfigSection *)0x0) {
LAB_142750df2:
      local_1a0 = pFVar16;
      if (pFVar16 == (FConfigSection *)0x0) goto LAB_1427513dd;
    }
    else {
      local_1a0 = pFVar16;
      pwVar15 = GetEditorLayoutsSectionName();
      if (pwVar15 != DefaultEditorLayoutsSectionName) {
        pFVar16 = FConfigCacheIni::GetSection(GConfig,DefaultEditorLayoutsSectionName,false,param_1)
        ;
        goto LAB_142750df2;
      }
    }
    FVar20.Data = (FScriptContainerElement *)L"";
    if (local_1b8.Data.ArrayNum != 0) {
      FVar20.Data = local_1b8.Data.AllocatorInstance.Data;
    }
    pFVar17 = ::FName::FName(&local_90,(wchar_t *)FVar20.Data);
    pFVar18 = TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
              ::Find((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                      *)pFVar16,*pFVar17);
    if (pFVar18 == (FConfigValue *)0x0) {
      local_198 = (TReferenceControllerBase<1> *)0x0;
      iVar24 = local_1b8.Data.ArrayNum + -2;
      if (local_1b8.Data.ArrayNum == 0) {
        iVar24 = -1;
      }
      iVar25 = 0;
      iVar9 = 0;
      if (0 < iVar24) {
        lVar26 = (longlong)iVar24 * 2;
        iVar31 = local_1b8.Data.ArrayNum;
        do {
          iVar9 = iVar31 + -1;
          if (iVar31 == 0) {
            iVar9 = iVar25;
          }
          if ((iVar9 <= iVar24) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValidIndex(Index)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                 ,0x113,
                                 L"String index out of bounds: Index %i from a string with a length of %i"
                                ), iVar31 = local_1b8.Data.ArrayNum, bVar7)) {
            pcVar3 = (code *)swi(3);
            pTVar13 = (TSharedRef<FTabManager::FLayout,1> *)(*pcVar3)();
            return pTVar13;
          }
          if (*(short *)(local_1b8.Data.AllocatorInstance.Data + lVar26) != 0x2e) {
            iVar9 = iVar31 + -1;
            if (iVar31 == 0) {
              iVar9 = iVar25;
            }
            if ((iVar9 <= iVar24) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValidIndex(Index)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                   ,0x113,
                                   L"String index out of bounds: Index %i from a string with a length of %i"
                                  ), iVar31 = local_1b8.Data.ArrayNum, bVar7)) {
              pcVar3 = (code *)swi(3);
              pTVar13 = (TSharedRef<FTabManager::FLayout,1> *)(*pcVar3)();
              return pTVar13;
            }
            if (0x2f < *(ushort *)(local_1b8.Data.AllocatorInstance.Data + lVar26)) {
              iVar9 = iVar31 + -1;
              if (iVar31 == 0) {
                iVar9 = iVar25;
              }
              if ((iVar9 <= iVar24) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValidIndex(Index)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                     ,0x113,
                                     L"String index out of bounds: Index %i from a string with a length of %i"
                                    ), iVar31 = local_1b8.Data.ArrayNum, bVar7)) {
                pcVar3 = (code *)swi(3);
                pTVar13 = (TSharedRef<FTabManager::FLayout,1> *)(*pcVar3)();
                return pTVar13;
              }
              if (*(ushort *)(local_1b8.Data.AllocatorInstance.Data + lVar26) < 0x3a)
              goto LAB_142750f4b;
            }
            iVar9 = iVar31 + -1;
            if (iVar31 == 0) {
              iVar9 = 0;
            }
            if (iVar24 + 1 < iVar9) {
              iVar9 = iVar24 + 1;
            }
            iVar24 = 0;
            if (0 < iVar9) {
              iVar24 = iVar9;
            }
            FVar20.Data = (FScriptContainerElement *)L"";
            if (iVar31 != 0) {
              FVar20.Data = local_1b8.Data.AllocatorInstance.Data;
            }
            ::FString::ConstructFromPtrSize(&local_140,(wchar_t *)FVar20.Data,iVar24);
            iVar9 = local_140.Data.ArrayNum;
            local_198 = (TReferenceControllerBase<1> *)local_140.Data.AllocatorInstance.Data;
            local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_140.Data.ArrayNum = 0;
            local_140.Data.ArrayMax = 0;
            pFVar16 = local_1a0;
            break;
          }
LAB_142750f4b:
          iVar24 = iVar24 + -1;
          lVar26 = lVar26 + -2;
          pFVar16 = local_1a0;
          iVar9 = 0;
        } while (0 < iVar24);
      }
      DestructItems<FString,int>((FString *)(param_5->AllocatorInstance).Data,param_5->ArrayNum);
      param_5->ArrayNum = 0;
      if (param_5->ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&param_5->AllocatorInstance,0,&param_5->ArrayMax);
      }
      iVar24 = (int)pFVar16->_padding_;
      local_f0 = &pFVar16->_padding_;
      iStack_f8 = 0;
      local_e0 = 0;
      iStack_e4 = 0;
      if (iVar24 != 0) {
        plVar32 = (longlong *)pFVar16->_padding_;
        if ((longlong *)pFVar16->_padding_ == (longlong *)0x0) {
          plVar32 = local_f0;
        }
        uVar29 = (uint)*plVar32;
        while (uVar29 == 0) {
          lVar26 = (longlong)iStack_f8;
          local_e0 = local_e0 + 0x20;
          iStack_f8 = iStack_f8 + 1;
          iStack_e4 = iVar24;
          if ((int)(iVar24 + -1 + (iVar24 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f8)
          goto LAB_142751060;
          uVar29 = *(uint *)((longlong)plVar32 + lVar26 * 4 + 4);
        }
        uVar10 = -uVar29 & uVar29;
        uVar1 = (ulonglong)uVar10 * 2 + 1;
        lVar26 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        local_148 = (int)lVar26;
        iStack_e4 = local_e0 + -1 + local_148;
        if (iVar24 < iStack_e4) {
          iStack_e4 = iVar24;
        }
      }
LAB_142751060:
      uStack_dc = local_3c;
      local_180 = (ForElementType<unsigned_int>)&local_1a0->_padding_;
      iStack_d8 = (int)local_1a0->_padding_ - *(int *)((longlong)&local_1a0->_padding_ + 4);
      uVar29 = (uint)local_1a0->_padding_;
      uStack_e8 = 0xffffffff;
      TStack_c8.CurrentBitIndex = iStack_e4;
      TStack_c8.UnvisitedBitMask = 0xffffffff;
      TStack_c8._padding_ = CONCAT44(uVar10,iStack_f8);
      uVar33 = uVar29 & 0xffffffe0;
      iVar25 = (int)uVar29 >> 5;
      TStack_c8._28_4_ = local_3c;
      TStack_c8.BaseBitIndex = local_e0;
      uStack_a8 = CONCAT44(uStack_d4,iStack_d8);
      local_100 = pFVar16;
      uStack_f4 = uVar10;
      local_d0 = pFVar16;
      TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_f0;
      if ((((int)uVar29 < 0) || (iVar24 < (int)uVar29)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        pTVar13 = (TSharedRef<FTabManager::FLayout,1> *)(*pcVar3)();
        return pTVar13;
      }
      pFVar16 = local_1a0;
      uVar10 = *(uint *)((longlong)local_180 + 0x18);
      if (uVar29 != uVar10) {
        FVar30 = local_180;
        if (*(ForElementType<unsigned_int> *)((longlong)local_180 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar30 = *(ForElementType<unsigned_int> *)((longlong)local_180 + 0x10);
        }
        uVar29 = -1 << ((byte)uVar29 & 0x1f) & *(uint *)((longlong)FVar30 + (longlong)iVar25 * 4);
        while (uVar29 == 0) {
          lVar26 = (longlong)iVar25;
          uVar33 = uVar33 + 0x20;
          iVar25 = iVar25 + 1;
          uVar29 = uVar10;
          if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar25)
          goto LAB_142751181;
          uVar29 = *(uint *)((undefined1 *)((longlong)FVar30 + 4) + lVar26 * 4);
        }
        uVar1 = (ulonglong)(-uVar29 & uVar29) * 2 + 1;
        lVar26 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        uVar29 = (uVar33 - 1) + (int)lVar26;
        if ((int)uVar10 < (int)uVar29) {
          uVar29 = uVar10;
        }
      }
LAB_142751181:
      do {
        pFVar6 = local_d0;
        if ((int)local_d0->_padding_ - *(int *)((longlong)&local_d0->_padding_ + 4) !=
            (int)uStack_a8) {
          `TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
        }
        if (((TStack_c8.CurrentBitIndex == uVar29) &&
            ((ForElementType<unsigned_int>)TStack_c8.Array == local_180)) && (pFVar6 == pFVar16))
        goto LAB_1427512e0;
        ::FName::ToString((FName *)(pFVar6->_padding_ + (longlong)TStack_c8.CurrentBitIndex * 0x28),
                          &local_168);
        iVar25 = iVar9 + -1;
        iVar24 = local_168.Data.ArrayNum + -1;
        if (local_168.Data.ArrayNum == 0) {
          iVar24 = 0;
        }
        if (iVar9 == 0) {
          iVar25 = 0;
        }
        if (iVar25 < iVar24) {
          pTVar37 = (TReferenceControllerBase<1> *)&DAT_00000004;
          iVar25 = iVar9 + -1;
          if (iVar9 == 0) {
            iVar25 = 0;
          }
          if (iVar25 < iVar24) {
            iVar24 = iVar25;
          }
          iVar25 = 0;
          if (0 < iVar24) {
            iVar25 = iVar24;
          }
          pwVar15 = (wchar_t *)local_168.Data.AllocatorInstance.Data;
          if (local_168.Data.ArrayNum == 0) {
            pwVar15 = L"";
          }
          ::FString::ConstructFromPtrSize(&local_110,pwVar15,iVar25);
          iVar24 = local_110.Data.ArrayNum;
          if (iVar24 == iVar9) {
            if (1 < iVar24) {
              iVar24 = FGenericPlatformStricmp::Stricmp
                                 ((wchar_t *)local_110.Data.AllocatorInstance.Data,
                                  (wchar_t *)local_198);
              bVar7 = iVar24 == 0;
              goto LAB_142751245;
            }
          }
          else {
            bVar7 = iVar24 + iVar9 == 1;
LAB_142751245:
            if (!bVar7) goto LAB_142751250;
          }
          bVar7 = true;
        }
        else {
LAB_142751250:
          bVar7 = false;
        }
        if ((pTVar37 != (TReferenceControllerBase<1> *)0x0) &&
           (pTVar37 = (TReferenceControllerBase<1> *)0x0,
           local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_110.Data.AllocatorInstance.Data);
        }
        if (bVar7) {
          iVar24 = param_5->ArrayNum;
          if (iVar24 == param_5->ArrayMax) {
            iVar24 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&param_5->AllocatorInstance,&param_5->ArrayMax);
          }
          param_5->ArrayNum = iVar24 + 1;
          pFVar23 = (param_5->AllocatorInstance).Data + (longlong)iVar24 * 0x10;
          *(undefined8 *)pFVar23 = 0;
          *(FScriptContainerElement **)pFVar23 = local_168.Data.AllocatorInstance.Data;
          local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(pFVar23 + 8) = local_168.Data.ArrayNum;
          *(int *)(pFVar23 + 0xc) = local_168.Data.ArrayMax;
          local_168.Data.ArrayNum = 0;
          local_168.Data.ArrayMax = 0;
        }
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
        TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
      } while( true );
    }
  }
  else {
    if ((local_190.Object == (FLayout *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      pTVar13 = (TSharedRef<FTabManager::FLayout,1> *)(*pcVar3)();
      return pTVar13;
    }
    pTVar28 = (pFVar5->PrimaryArea).WeakReferenceCount.ReferenceController;
    pTVar27 = pTVar28;
    pTVar36 = pTVar37;
    if (pTVar28 == (TReferenceControllerBase<1> *)0x0) {
LAB_142750c65:
      bVar7 = false;
      pTVar28 = pTVar27;
      pTVar37 = pTVar36;
    }
    else {
      aVar4 = pTVar28->SharedReferenceCount;
      do {
        pTVar27 = pTVar37;
        pTVar36 = (TReferenceControllerBase<1> *)0x0;
        if (aVar4 == (atomic<int>)0x0) goto LAB_142750c65;
        LOCK();
        aVar8 = pTVar28->SharedReferenceCount;
        bVar7 = aVar4 == aVar8;
        if (bVar7) {
          pTVar28->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
          aVar8 = aVar4;
        }
        UNLOCK();
        aVar4 = aVar8;
      } while (!bVar7);
      pFVar2 = (pFVar5->PrimaryArea).Object;
      pTVar27 = pTVar28;
      if (pFVar2 == (FArea *)0x0) goto LAB_142750c65;
      if (param_3 == IfNoOpenTabValid) {
        pTVar14 = FGlobalTabmanager::Get();
        local_128 = pTVar14->Object;
        LOCK();
        pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
        UNLOCK();
        local_98 = &local_128;
        pTVar37 = (TReferenceControllerBase<1> *)&DAT_00000003;
        local_a0 = UE::Core::Private::Function::
                   TFunctionRefCaller<`FTabManager::HasValidOpenTabs'::__l2::<lambda_1>,bool,FTabManager::FTab_const_&>
                   ::Call;
        local_198 = pTVar28;
        local_120.Object = (FLayoutNode *)pFVar2;
        local_120.SharedReferenceCount.ReferenceController = pTVar28;
        bVar7 = FTabManager::HasAnyMatchingTabs
                          (&local_120,
                           (TFunctionRef<bool___cdecl(FTabManager::FTab_const_&)> *)&local_a0);
        pTVar36 = pTVar37;
        if (!bVar7) goto LAB_142750c65;
      }
      bVar7 = true;
    }
    bVar35 = (byte)pTVar37;
    if (((ulonglong)pTVar37 & 2) != 0) {
      bVar35 = bVar35 & 0xfd;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_120.SharedReferenceCount.ReferenceController);
    }
    if ((bVar35 & 1) != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_198)
      ;
    }
    if (bVar7) {
      if ((pFVar5 == (FLayout *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        pTVar13 = (TSharedRef<FTabManager::FLayout,1> *)(*pcVar3)();
        return pTVar13;
      }
      FVar22.ReferenceController = local_190.SharedReferenceCount.ReferenceController;
      __return_storage_ptr__->Object = pFVar5;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           local_190.SharedReferenceCount.ReferenceController;
      if (local_190.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_190.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_190.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((__return_storage_ptr__->Object == (FLayout *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        pTVar13 = (TSharedRef<FTabManager::FLayout,1> *)(*pcVar3)();
        return pTVar13;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar28);
      goto LAB_142751401;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar28);
  }
  goto LAB_1427513dd;
LAB_1427512e0:
  iVar24 = param_5->ArrayNum;
  pFVar23 = (param_5->AllocatorInstance).Data;
  pFVar34 = pFVar23 + (longlong)iVar24 * 0x10;
  while( true ) {
    if (param_5->ArrayNum != iVar24) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_1a7);
    }
    if (pFVar23 == pFVar34) break;
    if (*(int *)(pFVar23 + 8) == 0) {
      pwVar15 = L"";
    }
    else {
      pwVar15 = *(wchar_t **)pFVar23;
    }
    pwVar19 = GetEditorLayoutsSectionName();
    bVar7 = FConfigCacheIni::RemoveKey(GConfig,pwVar19,pwVar15,param_1);
    if (bVar7) {
      if (2 < (byte)LogLayoutService._0_1_) {
        GetEditorLayoutsSectionName();
        pFVar21 = &::LOG_Static;
LAB_1427513aa:
        UE::Logging::Private::BasicLog<3>(pFVar21,(FLogCategoryBase *)&LogLayoutService);
      }
    }
    else if (2 < (byte)LogLayoutService._0_1_) {
      GetEditorLayoutsSectionName();
      pFVar21 = &::LOG_Static;
      goto LAB_1427513aa;
    }
    pFVar23 = pFVar23 + 0x10;
  }
  if (local_198 != (TReferenceControllerBase<1> *)0x0) {
    FMemory::Free(local_198);
  }
LAB_1427513dd:
  __return_storage_ptr__->Object = param_2->Object;
  pTVar37 = (param_2->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar37;
  FVar22.ReferenceController = local_190.SharedReferenceCount.ReferenceController;
  if (pTVar37 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar37->SharedReferenceCount = (atomic<int>)((int)pTVar37->SharedReferenceCount + 1);
    UNLOCK();
  }
LAB_142751401:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar22.ReferenceController);
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// LoadSectionFromConfig @ 142751dd0

FText * __cdecl
FLayoutSaveRestore::LoadSectionFromConfig
          (FText *__return_storage_ptr__,FString *param_1,FString *param_2,bool param_3)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  TJsonStringReader<wchar_t> *pTVar3;
  code *pcVar4;
  FJsonObject *this;
  bool bVar5;
  uint uVar6;
  TSharedRef<TJsonStringReader<wchar_t>,1> *pTVar7;
  FText *pFVar8;
  TSharedPtr<FJsonValue,1> *pTVar9;
  FString *pFVar10;
  wchar_t *pwVar11;
  ForAnyElementType FVar12;
  FString local_108;
  TSharedPtr<FJsonObject,1> local_f8;
  FString local_e8;
  StackState local_d8;
  FString local_a0;
  FScriptContainerElement *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  FString local_38;
  
  local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.Data.ArrayNum = 0;
  local_108.Data.ArrayMax = 0;
  GetLayoutJsonFileName(&local_a0,param_1);
  local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.Data.ArrayNum = 0;
  local_e8.Data.ArrayMax = 0;
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_a0.Data.ArrayNum != 0) {
    FVar12.Data = local_a0.Data.AllocatorInstance.Data;
  }
  local_f8.Object = (FJsonObject *)0x0;
  local_f8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar5 = FFileHelper::LoadFileToString(&local_e8,(wchar_t *)FVar12.Data,None,0);
  if (bVar5) {
    pTVar7 = TJsonStringReader<wchar_t>::Create(&local_68,&local_e8);
    pTVar2 = (pTVar7->SharedReferenceCount).ReferenceController;
    pTVar3 = pTVar7->Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    local_d8.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.Identifier.Data.ArrayNum = 0;
    local_d8.Identifier.Data.ArrayMax = 0;
    local_d8.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.Array.ArrayNum = 0;
    local_d8.Array.ArrayMax = 0;
    local_d8.Object.Object = (FJsonObject *)0x0;
    local_d8.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    bVar5 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                      ((TJsonReader<wchar_t> *)pTVar3,&local_d8,None);
    if (bVar5) {
      FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_d8,&local_f8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d8.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_d8.Array.AllocatorInstance.Data,
               local_d8.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_d8.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_d8.Array.AllocatorInstance.Data);
    }
    if (local_d8.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Identifier.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
       *)local_f8.Object !=
      (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
       *)0x0) {
    if (param_3) {
      if ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           *)local_f8.Object ==
          (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FText *)(*pcVar4)();
          return pFVar8;
        }
      }
      this = local_f8.Object;
      iVar1 = (param_2->Data).ArrayNum;
      local_88 = (param_2->Data).AllocatorInstance.Data;
      iStack_80 = iVar1 + -1;
      if (iVar1 == 0) {
        iStack_80 = 0;
      }
      local_58._12_4_ = uStack_7c;
      local_58.Size = iStack_80;
      local_58.DataPtr = (wchar_t *)local_88;
      uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iStack_80,(wchar_t *)local_88);
      pTVar9 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
               ::FindByHash<TStringView<wchar_t>_>
                         ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                           *)this,uVar6,&local_58);
      if (((pTVar9 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar9->Object == (FJsonValue *)0x0)) ||
         (pTVar9->Object->Type != String)) goto LAB_14275204a;
    }
    if ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
         *)local_f8.Object ==
        (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
         *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FText *)(*pcVar4)();
        return pFVar8;
      }
    }
    local_78 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_70 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_70 = 0;
    }
    local_48._12_4_ = uStack_6c;
    local_48.Size = iStack_70;
    local_48.DataPtr = (wchar_t *)local_78;
    pFVar10 = FJsonObject::GetStringField(local_f8.Object,&local_38,&local_48);
    if (&local_108 != pFVar10) {
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      local_108.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
      (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_108.Data.ArrayNum = (pFVar10->Data).ArrayNum;
      local_108.Data.ArrayMax = (pFVar10->Data).ArrayMax;
      (pFVar10->Data).ArrayNum = 0;
      (pFVar10->Data).ArrayMax = 0;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
LAB_14275204a:
  if (local_108.Data.ArrayNum < 2) {
    if ((param_2->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    GetConfigString(pwVar11,&local_108,param_1,true);
  }
  FText::FText(__return_storage_ptr__);
  pwVar11 = GetEditorLayoutsSectionName();
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_108.Data.ArrayNum != 0) {
    FVar12.Data = local_108.Data.AllocatorInstance.Data;
  }
  FTextStringHelper::ReadFromBuffer
            ((wchar_t *)FVar12.Data,__return_storage_ptr__,pwVar11,(wchar_t *)0x0,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.SharedReferenceCount.ReferenceController);
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// MigrateConfig @ 14275c1c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FLayoutSaveRestore::MigrateConfig(FString *param_1,FString *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TJsonStringReader<wchar_t> *pTVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  wchar_t *pwVar6;
  ulonglong uVar7;
  TSharedRef<TJsonStringReader<wchar_t>,1> *pTVar8;
  ForAnyElementType FVar9;
  ForAnyElementType FVar10;
  ForAnyElementType FVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res18 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_118;
  TArray<FString,TSizedDefaultAllocator<32>_> local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  TSharedPtr<FJsonObject,1> local_c8;
  StackState local_b8;
  FString local_80;
  FString local_70;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_60;
  TSharedPtr<FJsonObject,1> local_48;
  TSharedPtr<FJsonObject,1> local_38;
  
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 0;
  local_118.ArrayMax = 0;
  pwVar6 = GetEditorLayoutsSectionName();
  bVar5 = FConfigCacheIni::GetSection(GConfig,pwVar6,&local_118,param_1);
  if (((!bVar5) &&
      ((pwVar6 = GetEditorLayoutsSectionName(), pwVar6 == DefaultEditorLayoutsSectionName ||
       (bVar5 = FConfigCacheIni::GetSection
                          (GConfig,DefaultEditorLayoutsSectionName,&local_118,param_1), !bVar5))))
     || (local_118.ArrayNum == 0)) goto LAB_14275c5dd;
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 0;
  local_108.ArrayMax = 0;
  pwVar6 = GetEditorLayoutsSectionName();
  bVar5 = FConfigCacheIni::GetSection(GConfig,pwVar6,&local_108,param_2);
  if ((!bVar5) || (local_108.ArrayNum == 0)) {
    iVar4 = local_118.ArrayNum;
    uVar7 = (ulonglong)local_118.ArrayNum;
    local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.Data.ArrayNum = 0;
    local_e8.Data.ArrayMax = 0;
    local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.Data.ArrayNum = 0;
    local_f8.Data.ArrayMax = 0;
    pFVar12 = local_118.AllocatorInstance.Data + uVar7 * 0x10;
    FVar10.Data = local_118.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar7 != iVar4) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (FVar10.Data == pFVar12) break;
      ::FString::FString(&local_70,L"=");
      bVar5 = ::FString::Split((FString *)FVar10.Data,&local_70,&local_e8,&local_f8);
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      if (bVar5) {
        FVar11.Data = (FScriptContainerElement *)L"";
        if (local_f8.Data.ArrayNum != 0) {
          FVar11.Data = local_f8.Data.AllocatorInstance.Data;
        }
        FVar9.Data = (FScriptContainerElement *)L"";
        if (local_e8.Data.ArrayNum != 0) {
          FVar9.Data = local_e8.Data.AllocatorInstance.Data;
        }
        pwVar6 = GetEditorLayoutsSectionName();
        FConfigCacheIni::SetString
                  (GConfig,pwVar6,(wchar_t *)FVar9.Data,(wchar_t *)FVar11.Data,param_2);
      }
      uVar7 = local_118._8_8_ & 0xffffffff;
      FVar10.Data = FVar10.Data + 0x10;
    }
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
  }
  pwVar6 = GetEditorLayoutsSectionName();
  bVar5 = FConfigCacheIni::EmptySection(GConfig,pwVar6,param_1);
  if ((!bVar5) && (2 < (byte)LogLayoutService._0_1_)) {
    GetEditorLayoutsSectionName();
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLayoutService);
  }
  FConfigCacheIni::Flush(GConfig,false,param_1);
  FConfigCacheIni::Flush(GConfig,false,param_2);
  GetLayoutJsonFileName(&local_80,param_2);
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_80.Data.ArrayNum != 0) {
    FVar10.Data = local_80.Data.AllocatorInstance.Data;
  }
  local_d8.Data.ArrayNum = 0;
  local_d8.Data.ArrayMax = 0;
  local_c8.Object = (FJsonObject *)0x0;
  local_c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar5 = FFileHelper::LoadFileToString(&local_d8,(wchar_t *)FVar10.Data,None,0);
  if (bVar5) {
    pTVar8 = TJsonStringReader<wchar_t>::Create(&local_60,&local_d8);
    pTVar1 = (pTVar8->SharedReferenceCount).ReferenceController;
    pTVar2 = pTVar8->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_60.SharedReferenceCount.ReferenceController);
    local_b8.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.Identifier.Data.ArrayNum = 0;
    local_b8.Identifier.Data.ArrayMax = 0;
    local_b8.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.Array.ArrayNum = 0;
    local_b8.Array.ArrayMax = 0;
    local_b8.Object.Object = (FJsonObject *)0x0;
    local_b8.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    bVar5 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                      ((TJsonReader<wchar_t> *)pTVar2,&local_b8,None);
    if (bVar5) {
      FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_b8,&local_c8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_b8.Array.AllocatorInstance.Data,
               local_b8.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_b8.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_b8.Array.AllocatorInstance.Data);
    }
    if (local_b8.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Identifier.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (local_c8.Object == (FJsonObject *)0x0) {
LAB_14275c562:
    ConvertSectionToJson(&local_48,&local_118);
    local_38.Object = local_48.Object;
    local_38.SharedReferenceCount.ReferenceController =
         local_48.SharedReferenceCount.ReferenceController;
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SaveJsonFile(&local_80,&local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  else {
    if ((local_c8.Object == (FJsonObject *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(int *)&((local_c8.Object)->Values).field_0x8 ==
        *(int *)&((local_c8.Object)->Values).field_0x34) goto LAB_14275c562;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.SharedReferenceCount.ReferenceController);
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_108.AllocatorInstance.Data,local_108.ArrayNum);
  if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
LAB_14275c5dd:
  DestructItems<FString,int>((FString *)local_118.AllocatorInstance.Data,local_118.ArrayNum);
  if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.AllocatorInstance.Data);
  }
  return;
}

// SaveSectionToConfig @ 142783330

void __cdecl
FLayoutSaveRestore::SaveSectionToConfig(FString *param_1,FString *param_2,FString *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  TJsonStringReader<wchar_t> *pTVar2;
  code *pcVar3;
  FJsonObject *this;
  bool bVar4;
  wchar_t *pwVar5;
  TSharedRef<TJsonStringReader<wchar_t>,1> *pTVar6;
  FString *pFVar7;
  ForAnyElementType FVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  TSharedPtr<FJsonObject,1> local_b8;
  FString local_a8;
  StackState local_98;
  FString local_60;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_50;
  FString local_40;
  TSharedPtr<FJsonObject,1> local_28;
  
  pwVar10 = L"";
  if ((param_3->Data).ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
  }
  if ((param_2->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  pwVar5 = GetEditorLayoutsSectionName();
  FConfigCacheIni::SetString(GConfig,pwVar5,pwVar9,pwVar11,param_1);
  GetLayoutJsonFileName(&local_60,param_1);
  local_b8.Object = (FJsonObject *)0x0;
  local_b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_60.Data.ArrayNum != 0) {
    FVar8.Data = local_60.Data.AllocatorInstance.Data;
  }
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  bVar4 = FFileHelper::LoadFileToString(&local_a8,(wchar_t *)FVar8.Data,None,0);
  if (bVar4) {
    pTVar6 = TJsonStringReader<wchar_t>::Create(&local_50,&local_a8);
    pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
    pTVar2 = pTVar6->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.SharedReferenceCount.ReferenceController);
    local_98.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.Identifier.Data.ArrayNum = 0;
    local_98.Identifier.Data.ArrayMax = 0;
    local_98.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.Array.ArrayNum = 0;
    local_98.Array.ArrayMax = 0;
    local_98.Object.Object = (FJsonObject *)0x0;
    local_98.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    bVar4 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                      ((TJsonReader<wchar_t> *)pTVar2,&local_98,None);
    if (bVar4) {
      FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_98,&local_b8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_98.Array.AllocatorInstance.Data,
               local_98.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_98.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_98.Array.AllocatorInstance.Data);
    }
    if (local_98.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Identifier.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_b8.Object != (FJsonObject *)0x0) {
    if ((local_b8.Object == (FJsonObject *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this = local_b8.Object;
    if ((param_3->Data).ArrayNum != 0) {
      pwVar10 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
    }
    pFVar7 = ::FString::FString(&local_40,pwVar10);
    FJsonObject::SetStringField(this,param_2,pFVar7);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    local_28.Object = local_b8.Object;
    local_28.SharedReferenceCount.ReferenceController =
         local_b8.SharedReferenceCount.ReferenceController;
    if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SaveJsonFile(&local_60,&local_28);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  return;
}

// SaveSectionToConfig @ 142783560

void __cdecl
FLayoutSaveRestore::SaveSectionToConfig(FString *param_1,FString *param_2,FText *param_3)

{
  FString *pFVar1;
  
  pFVar1 = FText::ToString(param_3);
  SaveSectionToConfig(param_1,param_2,pFVar1);
  return;
}

// SaveToConfig @ 1427835a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FLayoutSaveRestore::SaveToConfig(FString *param_1,TSharedRef<FTabManager::FLayout,1> *param_2)

{
  FLayout *this;
  FSharedReferencer<1> FVar1;
  bool bVar2;
  TSharedRef<FGlobalTabmanager,1> *pTVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  ForAnyElementType FVar6;
  wchar_t *pwVar7;
  FName local_res18;
  FString local_88;
  FString local_78;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> local_68;
  TSharedRef<TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>,1> local_58;
  TSharedRef<FJsonObject,1> local_48;
  TSharedPtr<FJsonObject,1> local_38 [2];
  
  pTVar3 = FGlobalTabmanager::Get();
  if ((pTVar3->Object->bCanSavePersistentLayouts != false) &&
     (this = param_2->Object,
     this->LayoutName != (FTabManager::FLayout::NullLayout.Object)->LayoutName)) {
    FTabManager::FLayout::ToJson(this,&local_48);
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
    TJsonWriterFactory<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Create(&local_58,&local_88,0);
    FVar1.ReferenceController = local_48.SharedReferenceCount.ReferenceController;
    local_38[0].Object = local_48.Object;
    local_38[0].SharedReferenceCount.ReferenceController =
         local_48.SharedReferenceCount.ReferenceController;
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    MakeShared<FJsonSerializerPolicy_JsonObject::FElement,1,TSharedPtr<FJsonObject,1>_const_&>
              (&local_68,local_38);
    bVar2 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
            Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>(&local_68,local_58.Object,true);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar1.ReferenceController);
    pwVar7 = L"";
    if ((!bVar2) && (1 < (byte)LogSlate._0_1_)) {
      local_res18 = this->LayoutName;
      ::FName::ToString(&local_res18,(FString *)local_38);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
      if (local_38[0].Object != (FJsonObject *)0x0) {
        FMemory::Free(local_38[0].Object);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    pFVar4 = ::FString::Replace(&local_88,(FString *)&local_68,L"{",L"(",IgnoreCase);
    pFVar4 = ::FString::Replace(pFVar4,(FString *)&local_58,L"}",L")",IgnoreCase);
    pFVar4 = ::FString::Replace(pFVar4,(FString *)&local_48,L"\r",L"",IgnoreCase);
    pFVar4 = ::FString::Replace(pFVar4,(FString *)local_38,L"\n",L"",IgnoreCase);
    ::FString::Replace(pFVar4,&local_78,L"\t",L"",IgnoreCase);
    if (local_38[0].Object != (FJsonObject *)0x0) {
      FMemory::Free(local_38[0].Object);
    }
    if (local_48.Object != (FJsonObject *)0x0) {
      FMemory::Free(local_48.Object);
    }
    if (local_58.Object != (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)0x0) {
      FMemory::Free(local_58.Object);
    }
    if (local_68.Object != (FElement *)0x0) {
      FMemory::Free(local_68.Object);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar6.Data = local_78.Data.AllocatorInstance.Data;
    }
    local_res18 = param_2->Object->LayoutName;
    pFVar4 = ::FName::ToString(&local_res18,(FString *)local_38);
    if ((pFVar4->Data).ArrayNum != 0) {
      pwVar7 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    pwVar5 = GetEditorLayoutsSectionName();
    FConfigCacheIni::SetString(GConfig,pwVar5,pwVar7,(wchar_t *)FVar6.Data,param_1);
    if (local_38[0].Object != (FJsonObject *)0x0) {
      FMemory::Free(local_38[0].Object);
    }
    SaveLayoutToJson(param_1,param_2);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  return;
}

