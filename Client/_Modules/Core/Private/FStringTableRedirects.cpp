// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// InitStringTableRedirects @ 1417655e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FStringTableRedirects::InitStringTableRedirects(void)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  void *_Src;
  FScriptContainerElement *_Src_00;
  code *pcVar5;
  FName FVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  int iVar10;
  FString *pFVar11;
  FTextKeyState *pFVar12;
  ulong64 uVar14;
  longlong lVar15;
  FName *pFVar16;
  uint uVar17;
  longlong *plVar18;
  uint uVar19;
  ForAnyElementType FVar20;
  FTextKey local_res8 [2];
  FTextKey local_res10 [2];
  int local_res18 [4];
  ForAnyElementType local_198;
  int local_190;
  int local_18c;
  FName local_188;
  FName local_180;
  FString local_178;
  FString local_168;
  FString local_158;
  FScriptContainerElement *local_148;
  int iStack_140;
  undefined4 uStack_13c;
  FScriptContainerElement *local_138;
  int iStack_130;
  undefined4 uStack_12c;
  FConfigSection *local_128;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_120;
  TPairInitializer<FTextKey_&&,FTextKey_&&> local_100;
  int *local_f0;
  FConfigSection *local_e8;
  uint uStack_e0;
  uint uStack_dc;
  longlong *local_d8;
  undefined4 uStack_d0;
  uint uStack_cc;
  uint local_c8;
  undefined4 uStack_c4;
  FName *local_b8;
  FName *local_b0;
  FTextKey *local_a8;
  FTextKey *local_a0;
  FString local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78 [2];
  undefined4 local_4c;
  size_t sVar13;
  
  uVar19 = 0;
  uVar17 = 0;
  local_res8[0].Index = 0;
  if ((GConfig == (FConfigCacheIni *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("GConfig",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\StringTableCore.cpp"
                         ,0x24c,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_e8 = FConfigCacheIni::GetSection(GConfig,L"Core.StringTable",false,&GEngineIni);
  uVar8 = uStack_12c;
  uVar7 = uStack_13c;
  if (local_e8 != (FConfigSection *)0x0) {
    local_d8 = &local_e8->_padding_;
    uVar4 = (uint)local_e8->_padding_;
    uStack_dc = 1;
    local_c8 = 0;
    uStack_cc = uVar19;
    if (uVar4 != 0) {
      plVar18 = (longlong *)local_e8->_padding_;
      if ((longlong *)local_e8->_padding_ == (longlong *)0x0) {
        plVar18 = local_d8;
      }
      uVar3 = (uint)*plVar18;
      uVar17 = uVar19;
      local_c8 = uVar19;
      while (uVar3 == 0) {
        lVar15 = (longlong)(int)uVar17;
        local_c8 = local_c8 + 0x20;
        uVar17 = uVar17 + 1;
        uStack_cc = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar17)
        goto LAB_1417656ec;
        uVar3 = *(uint *)((longlong)plVar18 + lVar15 * 4 + 4);
      }
      uStack_dc = ~(uVar3 - 1) & uVar3;
      uVar2 = (ulonglong)uStack_dc * 2 + 1;
      lVar15 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      uStack_cc = (local_c8 - 1) + (int)lVar15;
      if ((int)uVar4 < (int)uStack_cc) {
        uStack_cc = uVar4;
      }
    }
LAB_1417656ec:
    uStack_e0 = uVar17;
    uStack_d0 = 0xffffffff;
    uStack_c4 = local_4c;
    local_128 = local_e8;
    TStack_120._padding_ = CONCAT44(uStack_dc,uVar17);
    TStack_120.BaseBitIndex = local_c8;
    TStack_120._28_4_ = local_4c;
    TStack_120.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_d8;
    TStack_120.UnvisitedBitMask = 0xffffffff;
    TStack_120.CurrentBitIndex = uStack_cc;
    if ((int)uStack_cc < (int)uVar4) {
      local_f0 = (int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c
                        );
      do {
        iVar10 = TStack_120.CurrentBitIndex;
        if ((*local_f0 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          ::FName::FName(&StringTableRedirectsName,L"StringTableRedirects");
          _Init_thread_footer(&::_TSS0);
        }
        lVar15 = local_128->_padding_;
        if (*(FName *)(lVar15 + (longlong)iVar10 * 0x28) == StringTableRedirectsName) {
          lVar1 = lVar15 + (longlong)iVar10 * 0x28;
          if (*(char *)(lVar15 + 0x1d + (longlong)iVar10 * 0x28) == '\0') {
            iVar10 = *(int *)(lVar1 + 0x10);
            uVar19 = uVar19 | 2;
            _Src = *(void **)(lVar1 + 8);
            local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_158.Data.ArrayNum = iVar10;
            if (iVar10 == 0) {
              local_158.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,iVar10,0,(ForAnyElementType *)&local_158,iVar10,
                         &local_158.Data.ArrayMax);
              memcpy(local_158.Data.AllocatorInstance.Data,_Src,(longlong)iVar10 * 2);
            }
            pFVar11 = &local_158;
          }
          else {
            uVar19 = uVar19 | 1;
            pFVar11 = FConfigValue::ExpandValue(&local_98,(FString *)(lVar1 + 8));
          }
          local_198.Data = (FScriptContainerElement *)0x0;
          local_190 = (pFVar11->Data).ArrayNum;
          lVar15 = (longlong)local_190;
          _Src_00 = (pFVar11->Data).AllocatorInstance.Data;
          if (local_190 == 0) {
            local_18c = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_190,0,&local_198,local_190,&local_18c);
            memcpy(local_198.Data,_Src_00,lVar15 * 2);
          }
          if (((uVar19 & 2) != 0) &&
             (uVar19 = uVar19 & 0xfffffffd,
             local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_158.Data.AllocatorInstance.Data);
          }
          if (((uVar19 & 1) != 0) &&
             (uVar19 = uVar19 & 0xfffffffe,
             local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
          local_188.ComparisonIndex.Value = 0;
          local_188.Number = 0;
          FVar20.Data = (FScriptContainerElement *)L"";
          if (local_190 != 0) {
            FVar20.Data = local_198.Data;
          }
          local_180.ComparisonIndex.Value = 0;
          local_180.Number = 0;
          local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_168.Data.ArrayNum = 0;
          local_168.Data.ArrayMax = 0;
          local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_178.Data.ArrayNum = 0;
          local_178.Data.ArrayMax = 0;
          bVar9 = FParse::Value((wchar_t *)FVar20.Data,L"OldStringTable=",&local_188);
          if (bVar9) {
            FVar20.Data = (FScriptContainerElement *)L"";
            if (local_190 != 0) {
              FVar20.Data = local_198.Data;
            }
            FParse::Value((wchar_t *)FVar20.Data,L"NewStringTable=",&local_180);
            if ((byte)LogStringTable._0_1_ < 3) {
LAB_141765957:
              if (local_180 == (FName)0x0) goto LAB_141765cf2;
            }
            else if (local_180 == (FName)0x0) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStringTable);
              goto LAB_141765957;
            }
            local_b8 = &local_188;
            local_b0 = &local_180;
            TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FName_const_&,FName_const_&>_>
                      ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                        *)&StringTableRedirects::TableIdRedirects,
                       (TPairInitializer<FName_const_&,FName_const_&> *)(local_res18 + 2),
                       (bool *)&local_b8);
          }
          else {
            FVar20.Data = (FScriptContainerElement *)L"";
            if (local_190 != 0) {
              FVar20.Data = local_198.Data;
            }
            bVar9 = FParse::Value((wchar_t *)FVar20.Data,L"StringTable=",&local_188);
            if (bVar9) {
              FVar20.Data = (FScriptContainerElement *)L"";
              if (local_190 != 0) {
                FVar20.Data = local_198.Data;
              }
              FParse::Value((wchar_t *)FVar20.Data,L"OldKey=",&local_168,true,(wchar_t **)0x0);
              if ((2 < (byte)LogStringTable._0_1_) && (local_168.Data.ArrayNum < 2)) {
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStringTable)
                ;
              }
              FVar20.Data = (FScriptContainerElement *)L"";
              if (local_190 != 0) {
                FVar20.Data = local_198.Data;
              }
              FParse::Value((wchar_t *)FVar20.Data,L"NewKey=",&local_178,true,(wchar_t **)0x0);
              if ((2 < (byte)LogStringTable._0_1_) && (local_178.Data.ArrayNum < 2)) {
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStringTable)
                ;
              }
              FVar6 = local_188;
              if ((1 < local_168.Data.ArrayNum) && (1 < local_178.Data.ArrayNum)) {
                uVar17 = ::GetTypeHash(local_188.ComparisonIndex);
                uVar17 = uVar17 + FVar6.Number;
                if (StringTableRedirects::TableKeyRedirects._8_4_ !=
                    StringTableRedirects::TableKeyRedirects._52_4_) {
                  lVar15 = 0x154b778f8;
                  if (StringTableRedirects::TableKeyRedirects._64_8_ != 0) {
                    lVar15 = StringTableRedirects::TableKeyRedirects._64_8_;
                  }
                  uVar4 = *(uint *)(lVar15 + (ulonglong)
                                             (StringTableRedirects::TableKeyRedirects._72_4_ - 1 &
                                             uVar17) * 4);
                  while (uVar4 != 0xffffffff) {
                    pFVar16 = (FName *)((longlong)(int)uVar4 * 0x60 +
                                       StringTableRedirects::TableKeyRedirects._0_8_);
                    if (*pFVar16 == local_188) {
                      if (pFVar16 != (FName *)0x0) goto LAB_141765b52;
                      break;
                    }
                    uVar4 = pFVar16[0xb].ComparisonIndex.Value;
                  }
                }
                local_100.Value = (FTextKey *)&local_188;
                TSet<TTuple<FName,TMap<FTextKey,FTextKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,FTextKey,0>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<FTextKey,FTextKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,FTextKey,0>_>,0>,FDefaultSetAllocator>
                ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
                          ((TSet<TTuple<FName,TMap<FTextKey,FTextKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,FTextKey,0>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<FTextKey,FTextKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,FTextKey,0>_>,0>,FDefaultSetAllocator>
                            *)&StringTableRedirects::TableKeyRedirects,(uint)local_res18,
                           (TKeyInitializer<FName_const_&> *)(ulonglong)uVar17,
                           (bool *)&local_100.Value);
                pFVar16 = (FName *)((longlong)local_res18[0] * 0x60 +
                                   StringTableRedirects::TableKeyRedirects._0_8_);
LAB_141765b52:
                FVar20.Data = local_178.Data.AllocatorInstance.Data;
                local_148 = local_178.Data.AllocatorInstance.Data;
                uStack_13c = uVar8;
                local_res10[0].Index = -1;
                iVar10 = local_178.Data.ArrayNum + -1;
                if (local_178.Data.ArrayNum == 0) {
                  iVar10 = 0;
                }
                iStack_140 = iVar10;
                if (iVar10 != 0) {
                  pFVar12 = FTextKeyState::GetState();
                  if (FVar20.Data == (FScriptContainerElement *)0x0) {
                    iVar10 = 0;
                    FVar20.Data = (FScriptContainerElement *)0x0;
                  }
                  else {
                    if ((0 < iVar10) && (*(short *)(FVar20.Data + (longlong)iVar10 * 2 + -2) == 0))
                    {
                      iVar10 = iVar10 + -1;
                    }
                    if (iVar10 == -1) {
                      sVar13 = wcslen((wchar_t *)FVar20.Data);
                      iVar10 = (int)sVar13;
                    }
                  }
                  uVar14 = CityHash64((char *)FVar20.Data,iVar10 * 2);
                  local_88._12_4_ = uStack_13c;
                  local_88.Size = iStack_140;
                  local_88.DataPtr = (wchar_t *)local_148;
                  FTextKeyState::FindOrAddImpl
                            (pFVar12,&local_88,(int)(uVar14 >> 0x20) * 0x17 + (int)uVar14,
                             local_res10);
                }
                FVar20.Data = local_168.Data.AllocatorInstance.Data;
                local_138 = local_168.Data.AllocatorInstance.Data;
                uStack_12c = uVar7;
                local_res8[0].Index = -1;
                iVar10 = local_168.Data.ArrayNum + -1;
                if (local_168.Data.ArrayNum == 0) {
                  iVar10 = 0;
                }
                iStack_130 = iVar10;
                if (iVar10 != 0) {
                  pFVar12 = FTextKeyState::GetState();
                  if (FVar20.Data == (FScriptContainerElement *)0x0) {
                    iVar10 = 0;
                    FVar20.Data = (FScriptContainerElement *)0x0;
                  }
                  else {
                    if ((0 < iVar10) && (*(short *)(FVar20.Data + (longlong)iVar10 * 2 + -2) == 0))
                    {
                      iVar10 = iVar10 + -1;
                    }
                    if (iVar10 == -1) {
                      sVar13 = wcslen((wchar_t *)FVar20.Data);
                      iVar10 = (int)sVar13;
                    }
                  }
                  uVar14 = CityHash64((char *)FVar20.Data,iVar10 * 2);
                  local_78[0]._12_4_ = uStack_12c;
                  local_78[0].Size = iStack_130;
                  local_78[0].DataPtr = (wchar_t *)local_138;
                  FTextKeyState::FindOrAddImpl
                            (pFVar12,local_78,(int)(uVar14 >> 0x20) * 0x17 + (int)uVar14,local_res8)
                  ;
                }
                local_a8 = local_res8;
                local_a0 = local_res10;
                TSet<TTuple<FTextKey,FTextKey>,TDefaultMapHashableKeyFuncs<FTextKey,FTextKey,0>,FDefaultSetAllocator>
                ::Emplace<TPairInitializer<FTextKey_&&,FTextKey_&&>_>
                          ((TSet<TTuple<FTextKey,FTextKey>,TDefaultMapHashableKeyFuncs<FTextKey,FTextKey,0>,FDefaultSetAllocator>
                            *)(pFVar16 + 1),&local_100,(bool *)&local_a8);
              }
            }
            else if (2 < (byte)LogStringTable._0_1_) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStringTable);
            }
          }
LAB_141765cf2:
          if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_178.Data.AllocatorInstance.Data);
          }
          if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_168.Data.AllocatorInstance.Data);
          }
          if (local_198.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_198.Data);
          }
        }
        TStack_120.UnvisitedBitMask = TStack_120.UnvisitedBitMask & ~TStack_120._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_120);
      } while (TStack_120.CurrentBitIndex < (int)*(longlong *)&(TStack_120.Array)->NumBits);
    }
  }
  return;
}

// RedirectKey @ 1417721e0

void __cdecl FStringTableRedirects::RedirectKey(FName param_1,FTextKey *param_2)

{
  uint uVar1;
  FName *pFVar2;
  TTuple<FTextKey,FTextKey> *pTVar3;
  TSet<TTuple<FTextKey,FTextKey>,TDefaultMapHashableKeyFuncs<FTextKey,FTextKey,0>,FDefaultSetAllocator>
  *this;
  longlong lVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (StringTableRedirects::TableKeyRedirects._8_4_ !=
      StringTableRedirects::TableKeyRedirects._52_4_) {
    lVar4 = 0x154b778f8;
    if (StringTableRedirects::TableKeyRedirects._64_8_ != 0) {
      lVar4 = StringTableRedirects::TableKeyRedirects._64_8_;
    }
    uVar1 = *(uint *)(lVar4 + (ulonglong)
                              (StringTableRedirects::TableKeyRedirects._72_4_ - 1 &
                              param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      while (pFVar2 = (FName *)((longlong)(int)uVar1 * 0x60 +
                               StringTableRedirects::TableKeyRedirects._0_8_), *pFVar2 != param_1) {
        uVar1 = pFVar2[0xb].ComparisonIndex.Value;
        if (uVar1 == 0xffffffff) {
          return;
        }
      }
      this = (TSet<TTuple<FTextKey,FTextKey>,TDefaultMapHashableKeyFuncs<FTextKey,FTextKey,0>,FDefaultSetAllocator>
              *)(pFVar2 + 1);
      if (pFVar2 == (FName *)0x0) {
        this = (TSet<TTuple<FTextKey,FTextKey>,TDefaultMapHashableKeyFuncs<FTextKey,FTextKey,0>,FDefaultSetAllocator>
                *)0x0;
      }
      if (((this != (TSet<TTuple<FTextKey,FTextKey>,TDefaultMapHashableKeyFuncs<FTextKey,FTextKey,0>,FDefaultSetAllocator>
                     *)0x0) &&
          (pTVar3 = TSet<TTuple<FTextKey,FTextKey>,TDefaultMapHashableKeyFuncs<FTextKey,FTextKey,0>,FDefaultSetAllocator>
                    ::Find(this,param_2), pTVar3 != (TTuple<FTextKey,FTextKey> *)0x0)) &&
         (*(int *)&pTVar3->field_0x4 != -1)) {
        param_2->Index = *(int *)&pTVar3->field_0x4;
      }
    }
  }
  return;
}

// RedirectTableId @ 1417722b0

void __cdecl FStringTableRedirects::RedirectTableId(FName *param_1)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  FName *pFVar7;
  longlong lVar8;
  
  FVar2 = *param_1;
  uVar6 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  if (StringTableRedirects::TableIdRedirects._8_4_ != StringTableRedirects::TableIdRedirects._52_4_)
  {
    lVar8 = 0x154b778a8;
    if (StringTableRedirects::TableIdRedirects._64_8_ != 0) {
      lVar8 = StringTableRedirects::TableIdRedirects._64_8_;
    }
    iVar1 = *(int *)(lVar8 + (ulonglong)
                             (StringTableRedirects::TableIdRedirects._72_4_ - 1 &
                             FVar2.Number + uVar6) * 4);
    while (iVar1 != -1) {
      lVar8 = StringTableRedirects::TableIdRedirects._0_8_ + (longlong)iVar1 * 0x18;
      if (*(FName *)(StringTableRedirects::TableIdRedirects._0_8_ + (longlong)iVar1 * 0x18) == FVar2
         ) {
        pFVar7 = (FName *)(lVar8 + 8);
        if (lVar8 == 0) {
          pFVar7 = (FName *)0x0;
        }
        if (pFVar7 != (FName *)0x0) {
          *param_1 = *pFVar7;
        }
        break;
      }
      iVar1 = *(int *)(lVar8 + 0x10);
    }
  }
  bVar4 = FInternationalization::IsAvailable();
  if (!bVar4) {
    return;
  }
  if ('\0' < (char)IStringTableEngineBridge::DeferFindOrLoad) {
    return;
  }
  if ((IStringTableEngineBridge::InstancePtr != (IStringTableEngineBridge *)0x0) &&
     (cVar5 = (**(code **)((longlong)*IStringTableEngineBridge::InstancePtr + 8))(), cVar5 == '\0'))
  {
    return;
  }
  bVar4 = FInternationalization::IsAvailable();
  if ((bVar4) && ((char)IStringTableEngineBridge::DeferFindOrLoad < '\x01')) {
    if (IStringTableEngineBridge::InstancePtr == (IStringTableEngineBridge *)0x0) {
      return;
    }
    cVar5 = (**(code **)((longlong)*IStringTableEngineBridge::InstancePtr + 8))();
    if (cVar5 != '\0') goto LAB_1417723d0;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("CanFindOrLoadStringTableAsset()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Internationalization\\StringTableCore.h"
                     ,0x113,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_1417723d0:
  if (IStringTableEngineBridge::InstancePtr != (IStringTableEngineBridge *)0x0) {
    (**(code **)((longlong)*IStringTableEngineBridge::InstancePtr + 0x20))
              (IStringTableEngineBridge::InstancePtr,param_1);
  }
  return;
}

// RedirectTableIdAndKey @ 141772400

void __cdecl FStringTableRedirects::RedirectTableIdAndKey(FName *param_1,FTextKey *param_2)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  undefined4 uVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  FName *pFVar8;
  TTuple<FTextKey,FTextKey> *pTVar9;
  TSet<TTuple<FTextKey,FTextKey>,TDefaultMapHashableKeyFuncs<FTextKey,FTextKey,0>,FDefaultSetAllocator>
  *pTVar10;
  longlong lVar11;
  
  FVar2 = *param_1;
  uVar7 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  if (StringTableRedirects::TableIdRedirects._8_4_ != StringTableRedirects::TableIdRedirects._52_4_)
  {
    lVar11 = 0x154b778a8;
    if (StringTableRedirects::TableIdRedirects._64_8_ != 0) {
      lVar11 = StringTableRedirects::TableIdRedirects._64_8_;
    }
    iVar1 = *(int *)(lVar11 + (ulonglong)
                              (StringTableRedirects::TableIdRedirects._72_4_ - 1 &
                              FVar2.Number + uVar7) * 4);
    while (iVar1 != -1) {
      lVar11 = StringTableRedirects::TableIdRedirects._0_8_ + (longlong)iVar1 * 0x18;
      if (*(FName *)(StringTableRedirects::TableIdRedirects._0_8_ + (longlong)iVar1 * 0x18) == FVar2
         ) {
        pTVar10 = (TSet<TTuple<FTextKey,FTextKey>,TDefaultMapHashableKeyFuncs<FTextKey,FTextKey,0>,FDefaultSetAllocator>
                   *)(lVar11 + 8);
        if (lVar11 == 0) {
          pTVar10 = (TSet<TTuple<FTextKey,FTextKey>,TDefaultMapHashableKeyFuncs<FTextKey,FTextKey,0>,FDefaultSetAllocator>
                     *)0x0;
        }
        if (pTVar10 !=
            (TSet<TTuple<FTextKey,FTextKey>,TDefaultMapHashableKeyFuncs<FTextKey,FTextKey,0>,FDefaultSetAllocator>
             *)0x0) {
          uVar4 = *(undefined4 *)&(pTVar10->Elements).field_0x4;
          param_1->ComparisonIndex = (FNameEntryId)*(undefined4 *)&(pTVar10->Elements).field_0x0;
          param_1->Number = uVar4;
        }
        break;
      }
      iVar1 = *(int *)(lVar11 + 0x10);
    }
  }
  bVar5 = FInternationalization::IsAvailable();
  if (((!bVar5) || ('\0' < (char)IStringTableEngineBridge::DeferFindOrLoad)) ||
     ((IStringTableEngineBridge::InstancePtr != (IStringTableEngineBridge *)0x0 &&
      (cVar6 = (**(code **)((longlong)*IStringTableEngineBridge::InstancePtr + 8))(), cVar6 == '\0')
      ))) goto LAB_141772533;
  bVar5 = FInternationalization::IsAvailable();
  if ((bVar5) && ((char)IStringTableEngineBridge::DeferFindOrLoad < '\x01')) {
    if (IStringTableEngineBridge::InstancePtr == (IStringTableEngineBridge *)0x0)
    goto LAB_141772533;
    cVar6 = (**(code **)((longlong)*IStringTableEngineBridge::InstancePtr + 8))();
    if (cVar6 == '\0') goto LAB_1417724f8;
  }
  else {
LAB_1417724f8:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CanFindOrLoadStringTableAsset()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Internationalization\\StringTableCore.h"
                       ,0x113,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (IStringTableEngineBridge::InstancePtr != (IStringTableEngineBridge *)0x0) {
    (**(code **)((longlong)*IStringTableEngineBridge::InstancePtr + 0x20))
              (IStringTableEngineBridge::InstancePtr,param_1);
  }
LAB_141772533:
  FVar2 = *param_1;
  uVar7 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  if (StringTableRedirects::TableKeyRedirects._8_4_ !=
      StringTableRedirects::TableKeyRedirects._52_4_) {
    lVar11 = 0x154b778f8;
    if (StringTableRedirects::TableKeyRedirects._64_8_ != 0) {
      lVar11 = StringTableRedirects::TableKeyRedirects._64_8_;
    }
    uVar7 = *(uint *)(lVar11 + (ulonglong)
                               (StringTableRedirects::TableKeyRedirects._72_4_ - 1 &
                               FVar2.Number + uVar7) * 4);
    while (uVar7 != 0xffffffff) {
      pFVar8 = (FName *)((longlong)(int)uVar7 * 0x60 + StringTableRedirects::TableKeyRedirects._0_8_
                        );
      if (*pFVar8 == FVar2) {
        pTVar10 = (TSet<TTuple<FTextKey,FTextKey>,TDefaultMapHashableKeyFuncs<FTextKey,FTextKey,0>,FDefaultSetAllocator>
                   *)(pFVar8 + 1);
        if (pFVar8 == (FName *)0x0) {
          pTVar10 = (TSet<TTuple<FTextKey,FTextKey>,TDefaultMapHashableKeyFuncs<FTextKey,FTextKey,0>,FDefaultSetAllocator>
                     *)0x0;
        }
        if (pTVar10 ==
            (TSet<TTuple<FTextKey,FTextKey>,TDefaultMapHashableKeyFuncs<FTextKey,FTextKey,0>,FDefaultSetAllocator>
             *)0x0) {
          return;
        }
        pTVar9 = TSet<TTuple<FTextKey,FTextKey>,TDefaultMapHashableKeyFuncs<FTextKey,FTextKey,0>,FDefaultSetAllocator>
                 ::Find(pTVar10,param_2);
        if (pTVar9 == (TTuple<FTextKey,FTextKey> *)0x0) {
          return;
        }
        if (*(int *)&pTVar9->field_0x4 == -1) {
          return;
        }
        param_2->Index = *(int *)&pTVar9->field_0x4;
        return;
      }
      uVar7 = pFVar8[0xb].ComparisonIndex.Value;
    }
  }
  return;
}

