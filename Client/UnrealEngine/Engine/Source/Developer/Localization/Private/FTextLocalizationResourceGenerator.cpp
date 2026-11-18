// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 4

// operator() @ 146b47b10

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EFormatVersion": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
`FTextLocalizationResourceGenerator::GenerateLocRes'::__l2::<lambda_1>::operator()
          (void *this,TSharedRef<FManifestEntry,1> *param_1)

{
  byte bVar1;
  ushort uVar2;
  FManifestEntry *pFVar3;
  FLocTextHelper *pFVar4;
  longlong lVar5;
  FTextKey *pFVar6;
  code *pcVar7;
  FLocKey *pFVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  uint uVar12;
  TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_> *pTVar13;
  FString *pFVar14;
  FString *pFVar15;
  FString *pFVar16;
  longlong *plVar17;
  TReferenceControllerBase<1> *pTVar18;
  longlong *plVar19;
  ulonglong uVar20;
  wchar_t *pwVar21;
  ForAnyElementType FVar22;
  wchar_t *pwVar23;
  FString *pFVar24;
  TReferenceControllerBase<1> *pTVar25;
  FScriptContainerElement *pFVar26;
  int iVar27;
  FLocKey *pFVar28;
  FTextLocalizationResource *this_00;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_478 [8];
  FLocItem local_470;
  int local_450;
  int local_44c;
  int local_448;
  int local_444;
  TArray<FString,TSizedDefaultAllocator<32>_> local_440;
  FTextKey local_430;
  FTextKey local_42c;
  uint local_428;
  FString local_420;
  FLocItem local_410;
  TLogFieldName<char_const_(&)[6]> local_3f0;
  FScriptContainerElement *local_3e8;
  TLogFieldName<char_const_(&)[5]> local_3e0;
  FScriptContainerElement *local_3d8;
  TLogFieldName<char_const_(&)[7]> local_3d0;
  FScriptContainerElement *local_3c8;
  TLogFieldName<char_const_(&)[13]> local_3c0;
  wchar_t *local_3b8;
  TLogFieldName<char_const_(&)[12]> local_3b0;
  TLogFieldName<char_const_(&)[9]> local_3a8;
  TLogFieldName<char_const_(&)[3]> local_3a0;
  FScriptContainerElement *local_398;
  TLogFieldName<char_const_(&)[5]> local_390;
  FScriptContainerElement *local_388;
  TLogFieldName<char_const_(&)[7]> local_380;
  FScriptContainerElement *local_378;
  TLogFieldName<char_const_(&)[13]> local_370;
  wchar_t *local_368;
  TLogFieldName<char_const_(&)[12]> local_360;
  TLogFieldName<char_const_(&)[9]> local_358;
  TLogFieldName<char_const_(&)[3]> local_350;
  FScriptContainerElement *local_348;
  TLogFieldName<char_const_(&)[5]> local_340;
  TLogFieldName<char_const_(&)[16]> local_338;
  FScriptContainerElement *local_330;
  TLogFieldName<char_const_(&)[7]> local_328;
  FScriptContainerElement *local_320;
  TLogFieldName<char_const_(&)[13]> local_318;
  wchar_t *local_310;
  TLogFieldName<char_const_(&)[12]> local_308;
  FManifestEntry *local_300;
  FLocKey *local_2f8;
  FString local_2f0;
  TLogFieldName<char_const_(&)[3]> local_2e0;
  FScriptContainerElement *local_2d8 [2];
  FScriptContainerElement *local_2c8;
  int iStack_2c0;
  undefined4 uStack_2bc;
  FScriptContainerElement *local_2b8;
  int iStack_2b0;
  undefined4 uStack_2ac;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FTextFormat local_258;
  FScriptContainerElement *local_248;
  int iStack_240;
  undefined4 uStack_23c;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  TStringView<wchar_t> local_1e8;
  TStringView<wchar_t> local_1d8;
  FScriptContainerElement *local_1c8;
  int iStack_1c0;
  undefined4 uStack_1bc;
  FString local_1b8;
  TSharedPtr<FLocMetadataObject,1> local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  TSharedPtr<FLocMetadataObject,1> local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  TStringView<wchar_t> local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  TStringView<wchar_t> local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  
  local_300 = param_1->Object;
  local_428 = (local_300->Contexts).ArrayNum;
  uVar20 = (ulonglong)(int)local_428;
  pFVar28 = (FLocKey *)(local_300->Contexts).AllocatorInstance.Data;
  local_2f8 = (FLocKey *)((longlong)pFVar28 + uVar20 * 0x58);
LAB_146b47b5d:
  pFVar8 = local_2f8;
  pTVar18 = (TReferenceControllerBase<1> *)0x0;
  if ((local_300->Contexts).ArrayNum != (int)uVar20) {
    local_res18[0] = 0;
    `TCheckedPointerIterator<FManifestContext,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_res18);
  }
  if (pFVar28 == pFVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return true;
  }
  local_1a8.Object = (FLocMetadataObject *)pFVar28[3].Str.Data.AllocatorInstance.Data;
  bVar1 = *(byte *)((longlong)this + 0x10);
  pFVar3 = param_1->Object;
  pFVar4 = *(FLocTextHelper **)this;
  local_1a8.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&pFVar28[3].Str.Data.ArrayNum;
  local_470.Text.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_470.Text.Data.ArrayNum = 0;
  local_470.Text.Data.ArrayMax = 0;
  local_470.MetadataObj.Object = (FLocMetadataObject *)0x0;
  local_470.MetadataObj.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (local_1a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FLocTextHelper::GetRuntimeText
            (pFVar4,*(FString **)((longlong)this + 8),&param_1->Object->Namespace,pFVar28,&local_1a8
             ,NativeText,&pFVar3->Source,&local_470,(bool)(bVar1 & 1));
  if ((*(char *)((longlong)this + 0x34) != '\0') ||
     (bVar9 = FLocItem::IsExactMatch(&param_1->Object->Source,&local_470), !bVar9))
  goto LAB_146b47d76;
  plVar17 = *(longlong **)((longlong)this + 0x48);
  iVar11 = (int)plVar17[1];
  if (0 < iVar11) {
    pFVar14 = (FString *)*plVar17;
    pFVar24 = pFVar14 + iVar11;
    do {
      while( true ) {
        if ((int)plVar17[1] != iVar11) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res20);
        }
        if (pFVar14 == pFVar24) goto LAB_146b489a9;
        pTVar13 = TSet<TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternationalizationArchive,1>,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternationalizationArchive,1>,0>,FDefaultSetAllocator>
                          *)(*(longlong *)this + 0x98),pFVar14);
        pTVar25 = pTVar18;
        if (pTVar13 != (TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_> *)0x0) {
          pTVar18 = *(TReferenceControllerBase<1> **)&pTVar13->field_0x18;
          pTVar25 = *(TReferenceControllerBase<1> **)&pTVar13->field_0x10;
          if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
            UNLOCK();
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18)
        ;
        pTVar18 = pTVar25;
        if (pTVar25 != (TReferenceControllerBase<1> *)0x0) break;
LAB_146b47d4e:
        pFVar14 = pFVar14 + 1;
      }
      local_158.Object = (FLocMetadataObject *)pFVar28[3].Str.Data.AllocatorInstance.Data;
      pTVar18 = (TReferenceControllerBase<1> *)0x0;
      bVar1 = *(byte *)((longlong)this + 0x10);
      pFVar4 = *(FLocTextHelper **)this;
      local_158.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)&pFVar28[3].Str.Data.ArrayNum;
      pFVar3 = param_1->Object;
      local_410.Text.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_410.Text.Data.ArrayNum = 0;
      local_410.Text.Data.ArrayMax = 0;
      local_410.MetadataObj.Object = (FLocMetadataObject *)0x0;
      local_410.MetadataObj.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (local_158.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FLocTextHelper::GetRuntimeText
                (pFVar4,pFVar14,&param_1->Object->Namespace,pFVar28,&local_158,NativeText,
                 &pFVar3->Source,&local_410,(bool)(bVar1 & 1));
      bVar9 = FLocItem::IsExactMatch(&local_410,&local_470);
      if (!bVar9) goto LAB_146b47d57;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_410.MetadataObj.SharedReferenceCount.ReferenceController);
      if (local_410.Text.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
      goto LAB_146b47d4e;
      FMemory::Free(local_410.Text.Data.AllocatorInstance.Data);
      pFVar14 = pFVar14 + 1;
    } while( true );
  }
  goto LAB_146b489a9;
LAB_146b47d57:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_410.MetadataObj.SharedReferenceCount.ReferenceController);
  if (local_410.Text.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_410.Text.Data.AllocatorInstance.Data);
  }
LAB_146b47d76:
  if ((((*(byte *)((longlong)this + 0x10) & 2) != 0) && (*(longlong *)((longlong)this + 0x38) != 0))
     && (iVar11 = ::FString::Find(&local_470.Text,L"{",1,CaseSensitive,FromStart,-1), iVar11 != -1))
  {
    FTextFormat::FromString(&local_258,&local_470.Text,Default);
    local_440.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_440.ArrayNum = 0;
    local_440.ArrayMax = 0;
    bVar9 = FTextFormat::ValidatePattern
                      (&local_258,(TSharedPtr<FCulture,1> *)((longlong)this + 0x38),&local_440);
    if (!bVar9) {
      ::FString::FString(&local_420,L"");
      iVar11 = local_440.ArrayNum;
      pFVar26 = local_440.AllocatorInstance.Data + (longlong)local_440.ArrayNum * 0x10;
      FVar22.Data = local_440.AllocatorInstance.Data;
      while( true ) {
        if (local_440.ArrayNum != iVar11) {
          local_478[0] = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_478);
        }
        if (FVar22.Data == pFVar26) break;
        ::FString::PrintfImpl(&local_2f0,L"\n  - %s");
        iVar27 = local_2f0.Data.ArrayNum + -1;
        if (local_2f0.Data.ArrayNum == 0) {
          iVar27 = 0;
        }
        ::FString::AppendChars(&local_420,(wchar_t *)local_2f0.Data.AllocatorInstance.Data,iVar27);
        if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
        }
        FVar22.Data = FVar22.Data + 0x10;
      }
      if (2 < (byte)LogTextLocalizationResourceGenerator._0_1_) {
        local_2e0.Name = (char (*) [3])&s_id;
        local_2c8 = local_420.Data.AllocatorInstance.Data;
        iStack_2c0 = local_420.Data.ArrayNum + -1;
        if (local_420.Data.ArrayNum == 0) {
          iStack_2c0 = 0;
        }
        local_f8._12_4_ = uStack_2bc;
        local_f8.Size = iStack_2c0;
        local_f8.DataPtr = (wchar_t *)local_420.Data.AllocatorInstance.Data;
        pFVar14 = FLocTextHelper::SanitizeLogOutput(&local_108,&local_f8);
        if ((pFVar14->Data).ArrayNum == 0) {
          local_2d8[0] = (FScriptContainerElement *)0x15060d16c;
        }
        else {
          local_2d8[0] = (pFVar14->Data).AllocatorInstance.Data;
        }
        local_3f0.Name = (char (*) [6])0x1513fe210;
        local_2b8 = local_470.Text.Data.AllocatorInstance.Data;
        iStack_2b0 = local_470.Text.Data.ArrayNum + -1;
        if (local_470.Text.Data.ArrayNum == 0) {
          iStack_2b0 = 0;
        }
        local_58._12_4_ = uStack_2ac;
        local_58.Size = iStack_2b0;
        local_58.DataPtr = (wchar_t *)local_470.Text.Data.AllocatorInstance.Data;
        pFVar14 = FLocTextHelper::SanitizeLogOutput(&local_118,&local_58);
        if ((pFVar14->Data).ArrayNum == 0) {
          local_3e8 = (FScriptContainerElement *)0x15060d16c;
        }
        else {
          local_3e8 = (pFVar14->Data).AllocatorInstance.Data;
        }
        local_3e0.Name = (char (*) [5])0x1513ff990;
        if ((pFVar28->Str).Data.ArrayNum == 0) {
          local_3d8 = (FScriptContainerElement *)0x15060d16c;
        }
        else {
          local_3d8 = (pFVar28->Str).Data.AllocatorInstance.Data;
        }
        local_3d0.Name = (char (*) [7])0x1513ff9a8;
        if ((param_1->Object->Namespace).Str.Data.ArrayNum == 0) {
          local_3c8 = (FScriptContainerElement *)0x15060d16c;
        }
        else {
          local_3c8 = (param_1->Object->Namespace).Str.Data.AllocatorInstance.Data;
        }
        local_3c0.Name = (char (*) [13])0x1513ff9b0;
        if (*(int *)(*(undefined8 **)((longlong)this + 8) + 1) == 0) {
          local_3b8 = L"";
        }
        else {
          local_3b8 = (wchar_t *)**(undefined8 **)((longlong)this + 8);
        }
        local_3b0.Name = (char (*) [12])0x151406290;
        pFVar14 = ::FString::FString(&local_128,".archive");
        if (*(int *)(*(longlong *)this + 0x10) == 0) {
          pwVar23 = L"";
        }
        else {
          pwVar23 = *(wchar_t **)(*(longlong *)this + 8);
        }
        pFVar15 = ::FString::FString(&local_138,"/");
        pFVar24 = *(FString **)((longlong)this + 8);
        pFVar16 = ::FString::FString(&local_148,"/");
        if (*(int *)(*(longlong *)this + 0x20) == 0) {
          pwVar21 = L"";
        }
        else {
          pwVar21 = *(wchar_t **)(*(longlong *)this + 0x18);
        }
        ::FString::ConcatCF(&local_268,pwVar21,pFVar16);
        ::FString::ConcatFF(&local_278,&local_268,pFVar24);
        ::FString::ConcatFF(&local_288,&local_278,pFVar15);
        ::FString::ConcatFC(&local_298,&local_288,pwVar23);
        ::FString::ConcatFF(&local_2a8,&local_298,pFVar14);
        local_3a8.Name = (char (*) [9])0x151400480;
        UE::Logging::Private::
        LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[9]>,FString,UE::Logging::Private::TLogFieldName<char_const_(&)[12]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[13]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[7]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[5]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[6]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[3]>,int_const_&>
                  ((FLogCategoryBase *)&LogTextLocalizationResourceGenerator,&::LOG_Static,
                   &local_3a8,&local_2a8,&local_3b0,&local_3b8,&local_3c0,(wchar_t **)&local_3c8,
                   &local_3d0,(wchar_t **)&local_3d8,&local_3e0,(wchar_t **)&local_3e8,&local_3f0,
                   (wchar_t **)local_2d8,&local_2e0,
                   &TextLocalizationResourceGenerator::LocalizationLogIdentifier);
        if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
        }
        if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_298.Data.AllocatorInstance.Data);
        }
        if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_288.Data.AllocatorInstance.Data);
        }
        if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_278.Data.AllocatorInstance.Data);
        }
        if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_268.Data.AllocatorInstance.Data);
        }
        if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.Data.AllocatorInstance.Data);
        }
        if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
        }
        if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.Data.AllocatorInstance.Data);
        }
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
        }
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
      }
      if (local_420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_420.Data.AllocatorInstance.Data);
      }
    }
    DestructItems<FString,int>((FString *)local_440.AllocatorInstance.Data,local_440.ArrayNum);
    if (local_440.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_440.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_258.TextFormatData.SharedReferenceCount.ReferenceController);
  }
  if ((*(byte *)((longlong)this + 0x10) & 4) != 0) {
    iVar11 = local_470.Text.Data.ArrayNum + -1;
    if (local_470.Text.Data.ArrayNum == 0) {
      iVar11 = 0;
    }
    if (iVar11 < 1) goto LAB_146b485f1;
    uVar2 = *(ushort *)local_470.Text.Data.AllocatorInstance.Data;
    bVar9 = FTextChar::IsWhitespace((uint)uVar2);
    if (((!bVar9) || (uVar2 == 0xd)) || ((uint)uVar2 == L'\n')) {
      iVar11 = local_470.Text.Data.ArrayNum + -2;
      if (local_470.Text.Data.ArrayNum == 0) {
        iVar11 = -1;
      }
      if (iVar11 < 0) {
code_r0x000146b482ac:
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x107,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          );
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
      }
      else {
        iVar27 = local_470.Text.Data.ArrayNum + -1;
        if (local_470.Text.Data.ArrayNum == 0) {
          iVar27 = 0;
        }
        if (iVar27 <= iVar11) goto code_r0x000146b482ac;
      }
      uVar2 = *(ushort *)(local_470.Text.Data.AllocatorInstance.Data + (longlong)iVar11 * 2);
      bVar9 = FTextChar::IsWhitespace((uint)uVar2);
      if (((!bVar9) || (uVar2 == 0xd)) || ((uint)uVar2 == L'\n')) goto LAB_146b485ee;
    }
    if (2 < (byte)LogTextLocalizationResourceGenerator._0_1_) {
      local_3a0.Name = (char (*) [3])&s_id;
      local_248 = local_470.Text.Data.AllocatorInstance.Data;
      iStack_240 = local_470.Text.Data.ArrayNum + -1;
      if (local_470.Text.Data.ArrayNum == 0) {
        iStack_240 = 0;
      }
      local_48._12_4_ = uStack_23c;
      local_48.Size = iStack_240;
      local_48.DataPtr = (wchar_t *)local_470.Text.Data.AllocatorInstance.Data;
      pFVar14 = FLocTextHelper::SanitizeLogOutput(&local_b8,&local_48);
      if ((pFVar14->Data).ArrayNum == 0) {
        local_398 = (FScriptContainerElement *)0x15060d16c;
      }
      else {
        local_398 = (pFVar14->Data).AllocatorInstance.Data;
      }
      local_390.Name = (char (*) [5])0x1513ff990;
      if ((pFVar28->Str).Data.ArrayNum == 0) {
        local_388 = (FScriptContainerElement *)0x15060d16c;
      }
      else {
        local_388 = (pFVar28->Str).Data.AllocatorInstance.Data;
      }
      local_380.Name = (char (*) [7])0x1513ff9a8;
      if ((param_1->Object->Namespace).Str.Data.ArrayNum == 0) {
        local_378 = (FScriptContainerElement *)0x15060d16c;
      }
      else {
        local_378 = (param_1->Object->Namespace).Str.Data.AllocatorInstance.Data;
      }
      local_370.Name = (char (*) [13])0x1513ff9b0;
      if (*(int *)(*(undefined8 **)((longlong)this + 8) + 1) == 0) {
        local_368 = L"";
      }
      else {
        local_368 = (wchar_t *)**(undefined8 **)((longlong)this + 8);
      }
      local_360.Name = (char (*) [12])0x151406290;
      pFVar14 = ::FString::FString(&local_c8,".archive");
      if (*(int *)(*(longlong *)this + 0x10) == 0) {
        pwVar23 = L"";
      }
      else {
        pwVar23 = *(wchar_t **)(*(longlong *)this + 8);
      }
      pFVar15 = ::FString::FString(&local_d8,"/");
      pFVar24 = *(FString **)((longlong)this + 8);
      pFVar16 = ::FString::FString(&local_e8,"/");
      if (*(int *)(*(longlong *)this + 0x20) == 0) {
        pwVar21 = L"";
      }
      else {
        pwVar21 = *(wchar_t **)(*(longlong *)this + 0x18);
      }
      ::FString::ConcatCF(&local_1f8,pwVar21,pFVar16);
      ::FString::ConcatFF(&local_208,&local_1f8,pFVar24);
      ::FString::ConcatFF(&local_218,&local_208,pFVar15);
      ::FString::ConcatFC(&local_228,&local_218,pwVar23);
      ::FString::ConcatFF(&local_238,&local_228,pFVar14);
      local_358.Name = (char (*) [9])0x151400480;
      UE::Logging::Private::
      LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[9]>,FString,UE::Logging::Private::TLogFieldName<char_const_(&)[12]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[13]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[7]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[5]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[3]>,int_const_&>
                ((FLogCategoryBase *)&LogTextLocalizationResourceGenerator,&::LOG_Static,&local_358,
                 &local_238,&local_360,&local_368,&local_370,(wchar_t **)&local_378,&local_380,
                 (wchar_t **)&local_388,&local_390,(wchar_t **)&local_398,&local_3a0,
                 &TextLocalizationResourceGenerator::LocalizationLogIdentifier);
      if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_238.Data.AllocatorInstance.Data);
      }
      if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_228.Data.AllocatorInstance.Data);
      }
      if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.Data.AllocatorInstance.Data);
      }
      if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_208.Data.AllocatorInstance.Data);
      }
      if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
      }
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_146b485ee:
LAB_146b485f1:
  if ((*(char *)((longlong)this + 0x34) == '\0') && ((*(byte *)((longlong)this + 0x10) & 8) != 0)) {
    local_1e8.DataPtr = (wchar_t *)local_470.Text.Data.AllocatorInstance.Data;
    local_1e8.Size = local_470.Text.Data.ArrayNum + -1;
    local_450 = 0;
    if (local_470.Text.Data.ArrayNum == 0) {
      local_1e8.Size = 0;
    }
    local_44c = 0;
    local_1d8.DataPtr = (wchar_t *)(param_1->Object->Source).Text.Data.AllocatorInstance.Data;
    iVar11 = (param_1->Object->Source).Text.Data.ArrayNum;
    local_1d8.Size = iVar11 + -1;
    if (iVar11 == 0) {
      local_1d8.Size = 0;
    }
    UE::TextLocalizationResourceGenerator::Private::CountRichTextTags
              (&local_1e8,&local_450,&local_44c);
    iVar27 = local_44c;
    iVar11 = local_450;
    if (local_450 != local_44c) {
      local_448 = 0;
      local_444 = 0;
      UE::TextLocalizationResourceGenerator::Private::CountRichTextTags
                (&local_1d8,&local_448,&local_444);
      if (((local_448 != iVar11) || (local_444 != iVar27)) &&
         (2 < (byte)LogTextLocalizationResourceGenerator._0_1_)) {
        local_350.Name = (char (*) [3])&s_id;
        local_1c8 = local_470.Text.Data.AllocatorInstance.Data;
        iStack_1c0 = local_470.Text.Data.ArrayNum + -1;
        if (local_470.Text.Data.ArrayNum == 0) {
          iStack_1c0 = 0;
        }
        local_a8._12_4_ = uStack_1bc;
        local_a8.Size = iStack_1c0;
        local_a8.DataPtr = (wchar_t *)local_470.Text.Data.AllocatorInstance.Data;
        pFVar14 = FLocTextHelper::SanitizeLogOutput(&local_68,&local_a8);
        if ((pFVar14->Data).ArrayNum == 0) {
          local_348 = (FScriptContainerElement *)0x15060d16c;
        }
        else {
          local_348 = (pFVar14->Data).AllocatorInstance.Data;
        }
        local_340.Name = (char (*) [5])0x1513ff990;
        pFVar14 = ::FString::FString(&local_78,".archive");
        if (*(int *)(*(longlong *)this + 0x10) == 0) {
          pwVar23 = L"";
        }
        else {
          pwVar23 = *(wchar_t **)(*(longlong *)this + 8);
        }
        pFVar15 = ::FString::FString(&local_88,"/");
        pFVar24 = *(FString **)((longlong)this + 8);
        pFVar16 = ::FString::FString(&local_98,"/");
        if (*(int *)(*(longlong *)this + 0x20) == 0) {
          pwVar21 = L"";
        }
        else {
          pwVar21 = *(wchar_t **)(*(longlong *)this + 0x18);
        }
        ::FString::ConcatCF(&local_178,pwVar21,pFVar16);
        ::FString::ConcatFF(&local_188,&local_178,pFVar24);
        ::FString::ConcatFF(&local_198,&local_188,pFVar15);
        ::FString::ConcatFC(&local_168,&local_198,pwVar23);
        ::FString::ConcatFF(&local_1b8,&local_168,pFVar14);
        local_338.Name = (char (*) [16])0x1514062b0;
        if ((pFVar28->Str).Data.ArrayNum == 0) {
          local_330 = (FScriptContainerElement *)0x15060d16c;
        }
        else {
          local_330 = (pFVar28->Str).Data.AllocatorInstance.Data;
        }
        local_328.Name = (char (*) [7])0x1513ff9a8;
        if ((param_1->Object->Namespace).Str.Data.ArrayNum == 0) {
          local_320 = (FScriptContainerElement *)0x15060d16c;
        }
        else {
          local_320 = (param_1->Object->Namespace).Str.Data.AllocatorInstance.Data;
        }
        local_318.Name = (char (*) [13])0x1513ff9b0;
        if (*(int *)(*(undefined8 **)((longlong)this + 8) + 1) == 0) {
          local_310 = L"";
        }
        else {
          local_310 = (wchar_t *)**(undefined8 **)((longlong)this + 8);
        }
        local_308.Name = (char (*) [12])0x151406290;
        UE::Logging::Private::
        LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[12]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[13]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[7]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[16]>,FString,UE::Logging::Private::TLogFieldName<char_const_(&)[5]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[3]>,int_const_&>
                  ((FLogCategoryBase *)&LogTextLocalizationResourceGenerator,&::LOG_Static,
                   &local_308,&local_310,&local_318,(wchar_t **)&local_320,&local_328,
                   (wchar_t **)&local_330,&local_338,&local_1b8,&local_340,(wchar_t **)&local_348,
                   &local_350,&TextLocalizationResourceGenerator::LocalizationLogIdentifier);
        if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
        }
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
        if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.Data.AllocatorInstance.Data);
        }
        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
        if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.Data.AllocatorInstance.Data);
        }
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
      }
    }
  }
LAB_146b489a9:
  lVar5 = *(longlong *)&pFVar28[1].Hash;
  this_00 = *(FTextLocalizationResource **)((longlong)this + 0x20);
  if (lVar5 != 0) {
    plVar17 = *(longlong **)((longlong)this + 0x28);
    uVar12 = ::GetTypeHash((FNameEntryId)(uint)lVar5);
    if ((int)plVar17[1] != *(int *)((longlong)plVar17 + 0x34)) {
      plVar19 = plVar17 + 7;
      if ((longlong *)plVar17[8] != (longlong *)0x0) {
        plVar19 = (longlong *)plVar17[8];
      }
      iVar11 = *(int *)((longlong)plVar19 +
                       (ulonglong)((int)plVar17[9] - 1U & (int)((ulonglong)lVar5 >> 0x20) + uVar12)
                       * 4);
      if (iVar11 != -1) {
        do {
          plVar19 = (longlong *)((longlong)iVar11 * 0x20 + *plVar17);
          if (*plVar19 == lVar5) {
            plVar17 = plVar19 + 1;
            if (plVar19 == (longlong *)0x0) {
              plVar17 = (longlong *)0x0;
            }
            if (plVar17 != (longlong *)0x0) {
              this_00 = (FTextLocalizationResource *)*plVar17;
            }
            break;
          }
          iVar11 = (int)plVar19[3];
        } while (iVar11 != -1);
      }
    }
  }
  if ((this_00 == (FTextLocalizationResource *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("LocResToUpdate",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\TextLocalizationResourceGenerator.cpp"
                         ,0xe2,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  pFVar6 = *(FTextKey **)((longlong)this + 0x18);
  iVar11 = *(int *)((longlong)this + 0x30);
  pFVar3 = param_1->Object;
  FTextKey::FTextKey(&local_430,&pFVar28->Str);
  FTextKey::FTextKey(&local_42c,(FString *)param_1->Object);
  FTextLocalizationResource::AddEntry
            (this_00,&local_42c,&local_430,&(pFVar3->Source).Text,&local_470.Text,iVar11,pFVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_470.MetadataObj.SharedReferenceCount.ReferenceController);
  if (local_470.Text.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_470.Text.Data.AllocatorInstance.Data);
  }
  pFVar28 = (FLocKey *)&pFVar28[3].Hash;
  uVar20 = (ulonglong)local_428;
  goto LAB_146b47b5d;
}

// GenerateLocMeta @ 146b6cc30

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

bool __cdecl
FTextLocalizationResourceGenerator::GenerateLocMeta
          (FLocTextHelper *param_1,FString *param_2,FTextLocalizationMetaDataResource *param_3)

{
  FString *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  FString *pFVar9;
  FIdentityFunctor local_res8 [8];
  ForAnyElementType local_48;
  int local_40 [2];
  FString local_38;
  
  ::FString::operator=(&param_3->NativeCulture,&param_1->NativeCulture);
  pFVar9 = ::operator/(&local_38,&param_3->NativeCulture,param_2);
  pFVar1 = &param_3->NativeLocRes;
  if (pFVar1 != pFVar9) {
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
    (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_3->NativeLocRes).Data.ArrayNum = (pFVar9->Data).ArrayNum;
    (param_3->NativeLocRes).Data.ArrayMax = (pFVar9->Data).ArrayMax;
    (pFVar9->Data).ArrayNum = 0;
    (pFVar9->Data).ArrayMax = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40[0] = 0;
  local_40[1] = 0;
  if (1 < (param_1->NativeCulture).Data.ArrayNum) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_48,local_40 + 1);
    local_40[0] = iVar7 + 1;
    ::FString::FString((FString *)(local_48.Data + (longlong)iVar7 * 0x10),&param_1->NativeCulture);
  }
  if ((TArray<FString,TSizedDefaultAllocator<32>_> *)&local_48 == &param_1->ForeignCultures) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  iVar7 = (param_1->ForeignCultures).ArrayNum;
  if (iVar7 != 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar7,&local_48,local_40,local_40 + 1);
    ConstructItems<FString,FString,int>
              (local_48.Data + (longlong)iVar8 * 0x10,
               (FString *)(param_1->ForeignCultures).AllocatorInstance.Data,iVar7);
  }
  pTVar2 = &param_3->CompiledCultures;
  if (pTVar2 != (TArray<FString,TSizedDefaultAllocator<32>_> *)&local_48) {
    DestructItems<FString,int>
              ((FString *)(pTVar2->AllocatorInstance).Data,(param_3->CompiledCultures).ArrayNum);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = local_48.Data;
    (param_3->CompiledCultures).ArrayNum = local_40[0];
    (param_3->CompiledCultures).ArrayMax = local_40[1];
    local_40[0] = 0;
    local_40[1] = 0;
    local_48.Data = (FScriptContainerElement *)0x0;
  }
  DestructItems<FString,int>((FString *)local_48.Data,local_40[0]);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  AlgoImpl::
  IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TLess<void>_>_>
            ((FString *)(pTVar2->AllocatorInstance).Data,(param_3->CompiledCultures).ArrayNum,
             local_res8[0],(TLess<void> *)local_res8);
  return true;
}

// GenerateLocRes @ 146b6ce00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EFormatVersion": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __cdecl
FTextLocalizationResourceGenerator::GenerateLocRes
          (FLocTextHelper *param_1,FString *param_2,EGenerateLocResFlags param_3,FTextKey *param_4,
          FTextLocalizationResource *param_5,
          TMap<FName,TSharedRef<FTextLocalizationResource,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTextLocalizationResource,1>,0>_>
          *param_6,int param_7)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  FInternationalization *this;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar10;
  wchar_t *pwVar11;
  undefined1 *puVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  bool local_118;
  undefined1 local_117 [7];
  TArray<FString,TSizedDefaultAllocator<32>_> local_110;
  TSharedPtr<FCulture,1> local_100;
  FName local_f0;
  TReferenceControllerBase<1> *local_e8;
  TReferenceControllerBase<1> *pTStack_e0;
  TPairInitializer<FName_const_&,TSharedRef<FTextLocalizationResource,1>_&&> local_d8;
  FName *local_c8;
  TReferenceControllerBase<1> **local_c0;
  code *local_b8;
  FLocTextHelper **local_b0;
  FLocTextHelper *local_a8;
  FString *local_a0;
  EGenerateLocResFlags local_98;
  FTextKey *local_90;
  FTextLocalizationResource *local_88;
  TMap<FName,TSharedRef<FTextLocalizationResource,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTextLocalizationResource,1>,0>_>
  *local_80;
  int local_78;
  bool local_74;
  FCulture *local_70;
  TReferenceControllerBase<1> *local_68;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_60;
  
  iVar7 = (param_1->NativeCulture).Data.ArrayNum;
  iVar9 = (param_2->Data).ArrayNum;
  if (iVar9 == iVar7) {
    if (iVar9 < 2) {
      local_118 = true;
    }
    else {
      iVar7 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_2->Data).AllocatorInstance.Data,
                         (wchar_t *)(param_1->NativeCulture).Data.AllocatorInstance.Data);
      local_118 = iVar7 == 0;
    }
  }
  else {
    local_118 = iVar9 + iVar7 == 1;
  }
  this = FInternationalization::Get();
  FInternationalization::GetCulture(this,&local_100,param_2);
  if (local_100.Object == (FCulture *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return (bool)uVar6;
    }
  }
  FCulture::GetPrioritizedParentCultureNames(local_100.Object,&local_110);
  if (local_100.Object == (FCulture *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return (bool)uVar6;
    }
  }
  local_d8.Value = (TSharedRef<FTextLocalizationResource,1> *)FCulture::GetName(local_100.Object);
  if ((local_110.AllocatorInstance.Data <= local_d8.Value) &&
     (local_d8.Value <
      (TSharedRef<FTextLocalizationResource,1> *)
      (local_110.AllocatorInstance.Data + (longlong)local_110.ArrayMax * 0x10))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return (bool)uVar6;
    }
  }
  TArray<FString,TSizedDefaultAllocator<32>_>::
  RemoveAll<_TArray<FString,TSizedDefaultAllocator<32>_>::Remove_::__l2::<lambda_1>_>
            (&local_110,(<lambda_1> *)&local_d8.Value);
  pTVar10 = FLocTextPlatformSplitUtils::GetPlatformsToSplit(&param_1->PlatformSplitMode);
  pTVar3 = _UNK_150651568;
  pTVar2 = ___xmm_00000000000000000000000000000010;
  iVar7 = pTVar10->ArrayNum;
  pFVar13 = (pTVar10->AllocatorInstance).Data;
  pFVar14 = pFVar13 + (longlong)iVar7 * 0x10;
  do {
    if (pTVar10->ArrayNum != iVar7) {
      local_117[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_117);
    }
    if (pFVar13 == pFVar14) {
      local_88 = param_5;
      local_78 = param_7;
      local_70 = local_100.Object;
      local_80 = param_6;
      local_74 = local_118;
      local_68 = local_100.SharedReferenceCount.ReferenceController;
      if (local_100.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_100.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_100.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_60 = &local_110;
      local_b0 = &local_a8;
      local_b8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FTextLocalizationResourceGenerator::GenerateLocRes'::__l2::<lambda_1>,bool,TSharedRef<FManifestEntry,1>_>
                 ::Call;
      local_a8 = param_1;
      local_a0 = param_2;
      local_98 = param_3;
      local_90 = param_4;
      FLocTextHelper::EnumerateSourceTexts
                (param_1,(TFunctionRef<bool___cdecl(TSharedRef<FManifestEntry,1>)> *)&local_b8,true)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_68);
      DestructItems<FString,int>((FString *)local_110.AllocatorInstance.Data,local_110.ArrayNum);
      if (local_110.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_100.SharedReferenceCount.ReferenceController);
      return true;
    }
    if (*(int *)(pFVar13 + 8) == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = *(wchar_t **)pFVar13;
    }
    ::FName::FName(&local_f0,pwVar11);
    FVar4 = local_f0;
    uVar8 = ::GetTypeHash(local_f0.ComparisonIndex.Value);
    if (*(int *)&param_6->field_0x8 != *(int *)&param_6->field_0x34) {
      puVar12 = &param_6->field_0x38;
      if (*(undefined1 **)&param_6->field_0x40 != (undefined1 *)0x0) {
        puVar12 = *(undefined1 **)&param_6->field_0x40;
      }
      iVar9 = *(int *)(puVar12 +
                      (ulonglong)(*(int *)&param_6->field_0x48 - 1U & FVar4.Number + uVar8) * 4);
      if (iVar9 != -1) {
        do {
          if (*(FName *)((longlong)iVar9 * 0x20 + *(longlong *)param_6) == FVar4)
          goto LAB_146b6d10e;
          iVar9 = *(int *)((longlong)iVar9 * 0x20 + 0x18 + *(longlong *)param_6);
        } while (iVar9 != -1);
      }
    }
    pTStack_e0 = ::operator_new(0x60);
    if (pTStack_e0 == (TReferenceControllerBase<1> *)0x0) {
      local_e8 = pTVar2;
      pTStack_e0 = pTVar3;
    }
    else {
      pTStack_e0->SharedReferenceCount = (atomic<int>)0x1;
      pTStack_e0->WeakReferenceCount = (atomic<int>)0x1;
      pTStack_e0->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFTextLocalizationResource___00_SharedPointerInternals__6B_
      ;
      pTStack_e0[2]._padding_ = 0;
      pTStack_e0[2].SharedReferenceCount = (atomic<int>)0x0;
      pTStack_e0[2].WeakReferenceCount = (atomic<int>)0x0;
      pTStack_e0[4].SharedReferenceCount = (atomic<int>)0x0;
      pTStack_e0[4].WeakReferenceCount = (atomic<int>)0x0;
      pTStack_e0[5].SharedReferenceCount = (atomic<int>)0x0;
      pTStack_e0[5].WeakReferenceCount = (atomic<int>)0x0;
      pTStack_e0[1]._padding_ = 0;
      pTStack_e0[1].SharedReferenceCount = (atomic<int>)0x0;
      pTStack_e0[1].WeakReferenceCount = (atomic<int>)0x0;
      pTStack_e0[3]._padding_ = 0;
      pTStack_e0[3].SharedReferenceCount = (atomic<int>)0x0;
      pTStack_e0[3].WeakReferenceCount = (atomic<int>)0x80;
      *(undefined4 *)((longlong)&pTStack_e0[4]._padding_ + 4) = 0;
      *(undefined4 *)&pTStack_e0[4]._padding_ = 0xffffffff;
      pTStack_e0[5]._padding_ = 0;
      local_e8 = pTStack_e0 + 1;
      if (local_e8 == (TReferenceControllerBase<1> *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar5) {
          pcVar1 = (code *)swi(3);
          uVar6 = (*pcVar1)();
          return (bool)uVar6;
        }
      }
    }
    local_c8 = &local_f0;
    local_c0 = &local_e8;
    TSet<TTuple<FName,TSharedRef<FTextLocalizationResource,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTextLocalizationResource,1>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,TSharedRef<FTextLocalizationResource,1>_&&>_>
              ((TSet<TTuple<FName,TSharedRef<FTextLocalizationResource,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTextLocalizationResource,1>,0>,FDefaultSetAllocator>
                *)param_6,&local_d8,(bool *)&local_c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_e0);
LAB_146b6d10e:
    pFVar13 = pFVar13 + 0x10;
  } while( true );
}

// GenerateLocResAndUpdateLiveEntriesFromConfig @ 146b6d200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

bool __cdecl
FTextLocalizationResourceGenerator::GenerateLocResAndUpdateLiveEntriesFromConfig
          (FString *param_1,EGenerateLocResFlags param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FCulture *this;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  FInternationalization *this_00;
  FString *pFVar10;
  size_t sVar11;
  FTextKey *pFVar12;
  FTextLocalizationManager *this_01;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  ForAnyElementType FVar16;
  ulonglong uVar17;
  int iVar18;
  FScriptContainerElement *pFVar19;
  undefined1 auStackY_5a8 [32];
  undefined1 local_558;
  EGenerateLocResFlags local_557;
  ForAnyElementType local_550;
  undefined8 local_548;
  FString local_540;
  FString local_530;
  FString local_520;
  FString local_510;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_500;
  FString local_4f0;
  FString local_4e0;
  FString local_4d0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_4c0;
  FString local_4b0;
  FString local_4a0;
  FString local_490;
  FString local_480;
  FString local_470;
  FString local_460;
  FString local_450;
  FString local_440;
  FString local_430;
  FString local_420;
  TArray<FString,TSizedDefaultAllocator<32>_> local_410;
  FText local_400;
  TLogFieldName<char_const_(&)[6]> local_3f0;
  TLogFieldName<char_const_(&)[3]> local_3e8;
  wchar_t *local_3e0;
  TLogFieldName<char_const_(&)[12]> local_3d8;
  TLogFieldName<char_const_(&)[3]> local_3d0;
  FTextKey local_3c8 [2];
  TLogFieldName<char_const_(&)[3]> local_3c0;
  TLogFieldName<char_const_(&)[3]> local_3b8;
  TLogFieldName<char_const_(&)[3]> local_3b0;
  TLogFieldName<char_const_(&)[3]> local_3a8;
  TLogFieldName<char_const_(&)[3]> local_3a0;
  TLogFieldName<char_const_(&)[3]> local_398;
  TLogFieldName<char_const_(&)[3]> local_390;
  FScriptContainerElement *local_388;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_380;
  FString local_370;
  FString local_360;
  FString local_350;
  FString local_340;
  TStringView<wchar_t> local_330;
  FScriptContainerElement *local_320;
  int local_318;
  TStringView<wchar_t> local_310;
  FScriptContainerElement *local_300;
  int local_2f8;
  TStringView<wchar_t> local_2f0;
  FScriptContainerElement *local_2e0;
  int local_2d8;
  TStringView<wchar_t> local_2d0;
  FScriptContainerElement *local_2c0;
  int local_2b8;
  FString local_2b0;
  FString local_2a0;
  FString local_290;
  FString local_280;
  FString local_270;
  TSharedPtr<ILocFileNotifies,1> local_260;
  undefined1 local_248 [64];
  void *local_208;
  undefined4 local_200;
  undefined1 local_1f8 [64];
  void *local_1b8;
  undefined4 local_1b0;
  FLocTextHelper local_1a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_5a8;
  local_557 = param_2;
  this_00 = FInternationalization::Get();
  ::FString::FString(&local_510,L"RegenerateResources");
  local_420.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_510.Data.ArrayNum != 0) {
    FVar16.Data = local_510.Data.AllocatorInstance.Data;
  }
  local_420.Data.ArrayNum = 0;
  local_420.Data.ArrayMax = 0;
  bVar3 = FConfigCacheIni::GetString
                    (GConfig,(wchar_t *)FVar16.Data,L"NativeCulture",&local_420,param_1);
  if (bVar3) {
    local_540.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_510.Data.ArrayNum != 0) {
      FVar16.Data = local_510.Data.AllocatorInstance.Data;
    }
    local_540.Data.ArrayNum = 0;
    local_540.Data.ArrayMax = 0;
    bVar3 = FConfigCacheIni::GetString
                      (GConfig,(wchar_t *)FVar16.Data,L"SourcePath",&local_540,param_1);
    if (bVar3) {
      local_530.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_510.Data.ArrayNum != 0) {
        FVar16.Data = local_510.Data.AllocatorInstance.Data;
      }
      local_530.Data.ArrayNum = 0;
      local_530.Data.ArrayMax = 0;
      bVar3 = FConfigCacheIni::GetString
                        (GConfig,(wchar_t *)FVar16.Data,L"DestinationPath",&local_530,param_1);
      if (bVar3) {
        local_430.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FVar16.Data = (FScriptContainerElement *)L"";
        if (local_510.Data.ArrayNum != 0) {
          FVar16.Data = local_510.Data.AllocatorInstance.Data;
        }
        local_430.Data.ArrayNum = 0;
        local_430.Data.ArrayMax = 0;
        bVar3 = FConfigCacheIni::GetString
                          (GConfig,(wchar_t *)FVar16.Data,L"ManifestName",&local_430,param_1);
        if (bVar3) {
          local_4e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          FVar16.Data = (FScriptContainerElement *)L"";
          if (local_510.Data.ArrayNum != 0) {
            FVar16.Data = local_510.Data.AllocatorInstance.Data;
          }
          local_4e0.Data.ArrayNum = 0;
          local_4e0.Data.ArrayMax = 0;
          bVar3 = FConfigCacheIni::GetString
                            (GConfig,(wchar_t *)FVar16.Data,L"ArchiveName",&local_4e0,param_1);
          if (bVar3) {
            local_440.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            FVar16.Data = (FScriptContainerElement *)L"";
            if (local_510.Data.ArrayNum != 0) {
              FVar16.Data = local_510.Data.AllocatorInstance.Data;
            }
            local_440.Data.ArrayNum = 0;
            local_440.Data.ArrayMax = 0;
            bVar3 = FConfigCacheIni::GetString
                              (GConfig,(wchar_t *)FVar16.Data,L"ResourceName",&local_440,param_1);
            if (bVar3) {
              FPaths::ConvertRelativePathToFull(&local_340,param_1);
              pFVar10 = FPaths::EngineConfigDir(&local_2b0);
              FPaths::ConvertRelativePathToFull(&local_360,pFVar10);
              if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
              }
              iVar18 = local_360.Data.ArrayNum + -1;
              FVar16.Data = local_360.Data.AllocatorInstance.Data;
              if (local_360.Data.ArrayNum == 0) {
                iVar18 = 0;
                FVar16.Data = (FScriptContainerElement *)L"";
              }
              bVar3 = ::FString::StartsWith(&local_340,(wchar_t *)FVar16.Data,iVar18,IgnoreCase);
              if (bVar3) {
                FVar16.Data = (FScriptContainerElement *)L"";
                if (local_540.Data.ArrayNum != 0) {
                  FVar16.Data = local_540.Data.AllocatorInstance.Data;
                }
                pFVar10 = FPaths::EngineDir(&local_2a0);
                if ((pFVar10->Data).ArrayNum == 0) {
                  local_330.DataPtr = L"";
                }
                else {
                  local_330.DataPtr = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
                }
                iVar18 = 0;
                local_330.Size = iVar18;
                if ((FScriptContainerElement *)local_330.DataPtr != (FScriptContainerElement *)0x0)
                {
                  sVar11 = wcslen(local_330.DataPtr);
                  local_330.Size = (int)sVar11;
                }
                local_318 = iVar18;
                local_320 = FVar16.Data;
                if (FVar16.Data != (FScriptContainerElement *)0x0) {
                  sVar11 = wcslen((wchar_t *)FVar16.Data);
                  local_318 = (int)sVar11;
                }
                FPaths::CombineInternal(&local_4b0,&local_330,2);
                if (local_540.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_540.Data.AllocatorInstance.Data);
                }
                local_540.Data.AllocatorInstance.Data = local_4b0.Data.AllocatorInstance.Data;
                local_540.Data.ArrayNum = local_4b0.Data.ArrayNum;
                local_540.Data.ArrayMax = local_4b0.Data.ArrayMax;
                local_4b0.Data.ArrayNum = 0;
                local_4b0.Data.ArrayMax = 0;
                local_4b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
                }
                FVar16.Data = (FScriptContainerElement *)L"";
                if (local_530.Data.ArrayNum != 0) {
                  FVar16.Data = local_530.Data.AllocatorInstance.Data;
                }
                pFVar10 = FPaths::EngineDir(&local_290);
                if ((pFVar10->Data).ArrayNum == 0) {
                  local_310.DataPtr = L"";
                }
                else {
                  local_310.DataPtr = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
                }
                local_310.Size = iVar18;
                if ((FScriptContainerElement *)local_310.DataPtr != (FScriptContainerElement *)0x0)
                {
                  sVar11 = wcslen(local_310.DataPtr);
                  local_310.Size = (int)sVar11;
                }
                local_300 = FVar16.Data;
                if (FVar16.Data != (FScriptContainerElement *)0x0) {
                  sVar11 = wcslen((wchar_t *)FVar16.Data);
                  iVar18 = (int)sVar11;
                }
                local_2f8 = iVar18;
                FPaths::CombineInternal(&local_4a0,&local_310,2);
                if (local_530.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_530.Data.AllocatorInstance.Data);
                }
                local_530.Data.AllocatorInstance.Data = local_4a0.Data.AllocatorInstance.Data;
                iVar18 = local_4a0.Data.ArrayNum;
                iVar7 = local_4a0.Data.ArrayMax;
                local_4a0.Data.ArrayNum = 0;
                local_4a0.Data.ArrayMax = 0;
                local_4a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              }
              else {
                FVar16.Data = (FScriptContainerElement *)L"";
                if (local_540.Data.ArrayNum != 0) {
                  FVar16.Data = local_540.Data.AllocatorInstance.Data;
                }
                pFVar10 = FPaths::ProjectDir(&local_280);
                if ((pFVar10->Data).ArrayNum == 0) {
                  local_2f0.DataPtr = L"";
                }
                else {
                  local_2f0.DataPtr = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
                }
                iVar18 = 0;
                local_2f0.Size = iVar18;
                if ((FScriptContainerElement *)local_2f0.DataPtr != (FScriptContainerElement *)0x0)
                {
                  sVar11 = wcslen(local_2f0.DataPtr);
                  local_2f0.Size = (int)sVar11;
                }
                local_2d8 = iVar18;
                local_2e0 = FVar16.Data;
                if (FVar16.Data != (FScriptContainerElement *)0x0) {
                  sVar11 = wcslen((wchar_t *)FVar16.Data);
                  local_2d8 = (int)sVar11;
                }
                FPaths::CombineInternal(&local_490,&local_2f0,2);
                if (local_540.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_540.Data.AllocatorInstance.Data);
                }
                local_540.Data.AllocatorInstance.Data = local_490.Data.AllocatorInstance.Data;
                local_540.Data.ArrayNum = local_490.Data.ArrayNum;
                local_540.Data.ArrayMax = local_490.Data.ArrayMax;
                local_490.Data.ArrayNum = 0;
                local_490.Data.ArrayMax = 0;
                local_490.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_280.Data.AllocatorInstance.Data);
                }
                FVar16.Data = (FScriptContainerElement *)L"";
                if (local_530.Data.ArrayNum != 0) {
                  FVar16.Data = local_530.Data.AllocatorInstance.Data;
                }
                pFVar10 = FPaths::ProjectDir(&local_270);
                if ((pFVar10->Data).ArrayNum == 0) {
                  local_2d0.DataPtr = L"";
                }
                else {
                  local_2d0.DataPtr = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
                }
                local_2d0.Size = iVar18;
                if ((FScriptContainerElement *)local_2d0.DataPtr != (FScriptContainerElement *)0x0)
                {
                  sVar11 = wcslen(local_2d0.DataPtr);
                  local_2d0.Size = (int)sVar11;
                }
                local_2c0 = FVar16.Data;
                if (FVar16.Data != (FScriptContainerElement *)0x0) {
                  sVar11 = wcslen((wchar_t *)FVar16.Data);
                  iVar18 = (int)sVar11;
                }
                local_2b8 = iVar18;
                FPaths::CombineInternal(&local_4d0,&local_2d0,2);
                if (local_530.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_530.Data.AllocatorInstance.Data);
                }
                local_530.Data.AllocatorInstance.Data = local_4d0.Data.AllocatorInstance.Data;
                iVar18 = local_4d0.Data.ArrayNum;
                iVar7 = local_4d0.Data.ArrayMax;
                local_4d0.Data.ArrayNum = 0;
                local_4d0.Data.ArrayMax = 0;
                local_4d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_290.Data.AllocatorInstance.Data = local_270.Data.AllocatorInstance.Data;
              }
              local_530.Data.ArrayMax = iVar7;
              local_530.Data.ArrayNum = iVar18;
              if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_290.Data.AllocatorInstance.Data);
              }
              local_550.Data = (FScriptContainerElement *)0x0;
              local_548 = 0;
              if (((this_00->CurrentLanguage).Object == (FCulture *)0x0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x408,L""), bVar3)) {
                pcVar2 = (code *)swi(3);
                uVar4 = (*pcVar2)();
                return (bool)uVar4;
              }
              pTVar1 = (this_00->CurrentLanguage).SharedReferenceCount.ReferenceController;
              this = (this_00->CurrentLanguage).Object;
              if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
                UNLOCK();
              }
              if ((this == (FCulture *)0x0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x25d,L""), bVar3)) {
                pcVar2 = (code *)swi(3);
                uVar4 = (*pcVar2)();
                return (bool)uVar4;
              }
              pFVar10 = FCulture::GetName(this);
              ::FString::FString(&local_350,pFVar10);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar1);
              FInternationalization::GetPrioritizedCultureNames(this_00,&local_4c0,&local_350);
              iVar18 = local_4c0.ArrayNum;
              pFVar19 = local_4c0.AllocatorInstance.Data + (longlong)local_4c0.ArrayNum * 0x10;
              FVar16.Data = local_4c0.AllocatorInstance.Data;
              while( true ) {
                uVar17 = 0;
                if (local_4c0.ArrayNum != iVar18) {
                  local_558 = 0;
                  `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(&local_558);
                }
                _Src.Data = local_540.Data.AllocatorInstance.Data;
                if (FVar16.Data == pFVar19) break;
                iVar7 = local_540.Data.ArrayNum;
                lVar13 = (longlong)local_540.Data.ArrayNum;
                uVar14 = (ulonglong)(*(int *)(FVar16.Data + 8) - 1);
                if (*(int *)(FVar16.Data + 8) == 0) {
                  uVar14 = uVar17;
                }
                iVar9 = (int)uVar14;
                if ((local_540.Data.ArrayNum == 0) && (iVar9 != -1)) {
                  iVar5 = iVar9 + 2;
LAB_146b6d94d:
                  local_500.ArrayNum = local_540.Data.ArrayNum;
                  local_500.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  if (iVar5 != 0) goto LAB_146b6d95a;
                  local_500.ArrayMax = 0;
                }
                else {
                  iVar5 = iVar9 + 1;
                  if (local_540.Data.ArrayNum == 0) goto LAB_146b6d94d;
LAB_146b6d95a:
                  local_500.ArrayNum = local_540.Data.ArrayNum;
                  local_500.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  uVar6 = local_540.Data.ArrayNum + iVar5;
                  if ((int)uVar6 < local_540.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
                  }
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (2,2,uVar6,0,&local_500.AllocatorInstance,local_540.Data.ArrayNum,
                             &local_500.ArrayMax);
                  if (iVar7 != 0) {
                    memcpy(local_500.AllocatorInstance.Data,_Src.Data,lVar13 * 2);
                  }
                }
                ::FString::PathAppend((FString *)&local_500,*(wchar_t **)FVar16.Data,iVar9);
                iVar7 = local_4e0.Data.ArrayNum + -1;
                if (local_4e0.Data.ArrayNum == 0) {
                  iVar7 = 0;
                }
                if ((local_500.ArrayNum != 0) || (iVar9 = 2, iVar7 == -1)) {
                  iVar9 = 1;
                }
                TArray<wchar_t,TSizedDefaultAllocator<32>_>::
                TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                          (&local_380,&local_500,iVar7 + iVar9);
                ::FString::PathAppend
                          ((FString *)&local_380,(wchar_t *)local_4e0.Data.AllocatorInstance.Data,
                           iVar7);
                bVar3 = FPaths::FileExists((FString *)&local_380);
                if (local_380.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_380.AllocatorInstance.Data);
                }
                if (local_500.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_500.AllocatorInstance.Data);
                }
                if (bVar3) {
                  if (((local_550.Data <= FVar16.Data) &&
                      (FVar16.Data < local_550.Data + (longlong)local_548._4_4_ * 0x10)) &&
                     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar3)) {
                    pcVar2 = (code *)swi(3);
                    uVar4 = (*pcVar2)();
                    return (bool)uVar4;
                  }
                  iVar7 = (int)local_548;
                  if ((int)local_548 == local_548._4_4_) {
                    iVar7 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x810,&local_550,(int *)((longlong)&local_548 + 4));
                  }
                  local_548 = CONCAT44(local_548._4_4_,iVar7 + 1);
                  ::FString::FString((FString *)(local_550.Data + (longlong)iVar7 * 0x10),
                                     (FString *)FVar16.Data);
                }
                FVar16.Data = FVar16.Data + 0x10;
              }
              DestructItems<FString,int>
                        ((FString *)local_4c0.AllocatorInstance.Data,local_4c0.ArrayNum);
              if (local_4c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_4c0.AllocatorInstance.Data);
              }
              if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_350.Data.AllocatorInstance.Data);
              }
              FVar16.Data = local_550.Data;
              iVar18 = (int)local_548;
              if ((int)local_548 == 0) {
                iVar18 = 0;
                if (1 < (byte)LogTextLocalizationResourceGenerator._0_1_) {
                  local_398.Name = (char (*) [3])&s_id;
                  UE::Logging::Private::
                  LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[3]>,int_const_&>
                            ((FLogCategoryBase *)&LogTextLocalizationResourceGenerator,&::LOG_Static
                             ,&local_398,
                             &TextLocalizationResourceGenerator::LocalizationLogIdentifier);
                  iVar18 = (int)local_548;
                }
                bVar3 = false;
              }
              else {
                local_410.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_410.ArrayNum = (int)local_548;
                local_260.Object = (ILocFileNotifies *)0x0;
                local_260.SharedReferenceCount.ReferenceController =
                     (TReferenceControllerBase<1> *)0x0;
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,8,(int)local_548,0,&local_410.AllocatorInstance,(int)local_548,
                           &local_410.ArrayMax);
                ConstructItems<FString,FString,int>
                          (local_410.AllocatorInstance.Data,(FString *)FVar16.Data,iVar18);
                FVar16.Data = local_420.Data.AllocatorInstance.Data;
                lVar13 = (longlong)local_420.Data.ArrayNum;
                local_480.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_480.Data.ArrayNum = local_420.Data.ArrayNum;
                if (local_420.Data.ArrayNum == 0) {
                  local_480.Data.ArrayMax = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (2,2,local_420.Data.ArrayNum,0,(ForAnyElementType *)&local_480,
                             local_420.Data.ArrayNum,&local_480.Data.ArrayMax);
                  memcpy(local_480.Data.AllocatorInstance.Data,FVar16.Data,lVar13 * 2);
                }
                FVar16.Data = local_4e0.Data.AllocatorInstance.Data;
                lVar13 = (longlong)local_4e0.Data.ArrayNum;
                local_470.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_470.Data.ArrayNum = local_4e0.Data.ArrayNum;
                if (local_4e0.Data.ArrayNum == 0) {
                  local_470.Data.ArrayMax = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (2,2,local_4e0.Data.ArrayNum,0,(ForAnyElementType *)&local_470,
                             local_4e0.Data.ArrayNum,&local_470.Data.ArrayMax);
                  memcpy(local_470.Data.AllocatorInstance.Data,FVar16.Data,lVar13 * 2);
                }
                FVar16.Data = local_430.Data.AllocatorInstance.Data;
                lVar13 = (longlong)local_430.Data.ArrayNum;
                local_460.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_460.Data.ArrayNum = local_430.Data.ArrayNum;
                if (local_430.Data.ArrayNum == 0) {
                  local_460.Data.ArrayMax = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (2,2,local_430.Data.ArrayNum,0,(ForAnyElementType *)&local_460,
                             local_430.Data.ArrayNum,&local_460.Data.ArrayMax);
                  memcpy(local_460.Data.AllocatorInstance.Data,FVar16.Data,lVar13 * 2);
                }
                FVar16.Data = local_540.Data.AllocatorInstance.Data;
                lVar13 = (longlong)local_540.Data.ArrayNum;
                local_450.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_450.Data.ArrayNum = local_540.Data.ArrayNum;
                if (local_540.Data.ArrayNum == 0) {
                  local_450.Data.ArrayMax = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (2,2,local_540.Data.ArrayNum,0,(ForAnyElementType *)&local_450,
                             local_540.Data.ArrayNum,&local_450.Data.ArrayMax);
                  memcpy(local_450.Data.AllocatorInstance.Data,FVar16.Data,lVar13 * 2);
                }
                FLocTextHelper::FLocTextHelper
                          (&local_1a8,&local_450,&local_460,&local_470,&local_480,&local_410,
                           &local_260,None);
                FText::FText(&local_400);
                bVar3 = FLocTextHelper::LoadAll(&local_1a8,LoadOrCreate,&local_400);
                if (bVar3) {
                  if (local_400.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_400.TextData.Reference + 0x10))();
                  }
                  local_248._0_8_ = 0;
                  local_248._8_8_ = 0;
                  local_248._32_8_ = 0;
                  local_248._40_4_ = 0;
                  local_248._44_4_ = 0x80;
                  local_248._48_4_ = 0xffffffff;
                  local_248._52_4_ = 0;
                  local_208 = (void *)0x0;
                  local_200 = 0;
                  local_1f8._0_8_ = 0;
                  local_1f8._8_8_ = 0;
                  local_1f8._32_8_ = 0;
                  local_1f8._40_4_ = 0;
                  local_1f8._44_4_ = 0x80;
                  local_1f8._48_4_ = 0xffffffff;
                  local_1f8._52_4_ = 0;
                  local_1b8 = (void *)0x0;
                  local_1b0 = 0;
                  uVar14 = uVar17;
                  if (0 < (int)local_548) {
                    do {
                      uVar15 = (uint)uVar17;
                      uVar6 = 0;
                      if ((int)uVar15 < (int)local_548) {
                        uVar6 = ~uVar15 >> 0x1f;
                      }
                      if ((uVar6 == 0) &&
                         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar3)) {
                        pcVar2 = (code *)swi(3);
                        uVar4 = (*pcVar2)();
                        return (bool)uVar4;
                      }
                      FVar16.Data = local_530.Data.AllocatorInstance.Data;
                      iVar18 = local_530.Data.ArrayNum;
                      lVar13 = (longlong)local_530.Data.ArrayNum;
                      pFVar19 = local_550.Data + uVar14;
                      uVar6 = *(int *)(pFVar19 + 8) - 1;
                      if (*(int *)(pFVar19 + 8) == 0) {
                        uVar6 = 0;
                      }
                      if ((local_530.Data.ArrayNum == 0) && (uVar6 != 0xffffffff)) {
                        iVar7 = uVar6 + 2;
LAB_146b6df5f:
                        local_520.Data.ArrayNum = local_530.Data.ArrayNum;
                        local_520.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                        if (iVar7 != 0) goto LAB_146b6df6c;
                        local_520.Data.ArrayMax = 0;
                      }
                      else {
                        iVar7 = uVar6 + 1;
                        if (local_530.Data.ArrayNum == 0) goto LAB_146b6df5f;
LAB_146b6df6c:
                        local_520.Data.ArrayNum = local_530.Data.ArrayNum;
                        local_520.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                        uVar8 = iVar7 + local_530.Data.ArrayNum;
                        if ((int)uVar8 < local_530.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
                          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
                        }
                        UE::Core::Private::
                        ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (2,2,uVar8,0,(ForAnyElementType *)&local_520,
                                   local_530.Data.ArrayNum,&local_520.Data.ArrayMax);
                        if (iVar18 != 0) {
                          memcpy(local_520.Data.AllocatorInstance.Data,FVar16.Data,lVar13 * 2);
                        }
                      }
                      ::FString::PathAppend(&local_520,*(wchar_t **)pFVar19,uVar6);
                      iVar7 = local_520.Data.ArrayNum;
                      FVar16.Data = local_520.Data.AllocatorInstance.Data;
                      lVar13 = (longlong)local_520.Data.ArrayNum;
                      iVar18 = local_440.Data.ArrayNum + -1;
                      if (local_440.Data.ArrayNum == 0) {
                        iVar18 = 0;
                      }
                      if ((local_520.Data.ArrayNum == 0) && (iVar18 != -1)) {
                        iVar9 = iVar18 + 2;
LAB_146b6e00d:
                        local_4f0.Data.ArrayNum = local_520.Data.ArrayNum;
                        local_4f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                        if (iVar9 != 0) goto LAB_146b6e01a;
                        local_4f0.Data.ArrayMax = 0;
                      }
                      else {
                        iVar9 = iVar18 + 1;
                        if (local_520.Data.ArrayNum == 0) goto LAB_146b6e00d;
LAB_146b6e01a:
                        local_4f0.Data.ArrayNum = local_520.Data.ArrayNum;
                        local_4f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                        uVar6 = local_520.Data.ArrayNum + iVar9;
                        if ((int)uVar6 < local_520.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
                          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
                        }
                        UE::Core::Private::
                        ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (2,2,uVar6,0,(ForAnyElementType *)&local_4f0,
                                   local_520.Data.ArrayNum,&local_4f0.Data.ArrayMax);
                        if (iVar7 != 0) {
                          memcpy(local_4f0.Data.AllocatorInstance.Data,FVar16.Data,lVar13 * 2);
                        }
                      }
                      ::FString::PathAppend
                                (&local_4f0,(wchar_t *)local_440.Data.AllocatorInstance.Data,iVar18)
                      ;
                      FPaths::ConvertRelativePathToFull(&local_370,&local_4f0);
                      if (local_4f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_4f0.Data.AllocatorInstance.Data);
                      }
                      pFVar12 = FTextKey::FTextKey(local_3c8,&local_370);
                      bVar3 = GenerateLocRes(&local_1a8,(FString *)pFVar19,local_557,pFVar12,
                                             (FTextLocalizationResource *)local_248,
                                             (TMap<FName,TSharedRef<FTextLocalizationResource,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTextLocalizationResource,1>,0>_>
                                              *)local_1f8,uVar15);
                      if (!bVar3) {
                        if (1 < (byte)LogTextLocalizationResourceGenerator._0_1_) {
                          local_3e8.Name = (char (*) [3])&s_id;
                          if (*(int *)(pFVar19 + 8) == 0) {
                            local_3e0 = L"";
                          }
                          else {
                            local_3e0 = *(wchar_t **)pFVar19;
                          }
                          local_3d8.Name = (char (*) [12])0x151406660;
                          UE::Logging::Private::
                          LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[12]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[3]>,int_const_&>
                                    ((FLogCategoryBase *)&LogTextLocalizationResourceGenerator,
                                     &::LOG_Static,&local_3d8,&local_3e0,&local_3e8,
                                     &TextLocalizationResourceGenerator::LocalizationLogIdentifier);
                        }
                        if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_370.Data.AllocatorInstance.Data);
                        }
                        if (local_520.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_520.Data.AllocatorInstance.Data);
                        }
                        bVar3 = false;
                        goto LAB_146b6e129;
                      }
                      if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_370.Data.AllocatorInstance.Data);
                      }
                      if (local_520.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_520.Data.AllocatorInstance.Data);
                      }
                      uVar17 = (ulonglong)(uVar15 + 1);
                      uVar14 = uVar14 + 0x10;
                    } while ((int)(uVar15 + 1) < (int)local_548);
                  }
                  this_01 = FTextLocalizationManager::Get();
                  FTextLocalizationManager::UpdateFromLocalizationResource
                            (this_01,(FTextLocalizationResource *)local_248);
                  bVar3 = true;
LAB_146b6e129:
                  local_1b0 = 0;
                  if (local_1b8 != (void *)0x0) {
                    FMemory::Free(local_1b8);
                  }
                  TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<FTextLocalizationResource,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::
                  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<FTextLocalizationResource,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<FTextLocalizationResource,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                              *)local_1f8);
                  local_200 = 0;
                  if (local_208 != (void *)0x0) {
                    FMemory::Free(local_208);
                  }
                  TSparseArray<TSparseSetElement<TTuple<FTextId,FTextLocalizationResource::FEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::
                  ~TSparseArray<TSparseSetElement<TTuple<FTextId,FTextLocalizationResource::FEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            ((TSparseArray<TSparseSetElement<TTuple<FTextId,FTextLocalizationResource::FEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                              *)local_248);
                }
                else {
                  if (1 < (byte)LogTextLocalizationResourceGenerator._0_1_) {
                    local_390.Name = (char (*) [3])&s_id;
                    pFVar10 = FText::ToString(&local_400);
                    if ((pFVar10->Data).ArrayNum == 0) {
                      local_388 = (FScriptContainerElement *)0x15060d16c;
                    }
                    else {
                      local_388 = (pFVar10->Data).AllocatorInstance.Data;
                    }
                    local_3f0.Name = (char (*) [6])0x1513fe210;
                    UE::Logging::Private::
                    LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[6]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[3]>,int_const_&>
                              ((FLogCategoryBase *)&LogTextLocalizationResourceGenerator,
                               (FStaticLogRecord *)&PTR_u_Load_error___er_151406560,&local_3f0,
                               (wchar_t **)&local_388,&local_390,
                               &TextLocalizationResourceGenerator::LocalizationLogIdentifier);
                  }
                  if (local_400.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_400.TextData.Reference + 0x10))();
                  }
                  bVar3 = false;
                }
                FLocTextHelper::~FLocTextHelper(&local_1a8);
                iVar18 = (int)local_548;
              }
              DestructItems<FString,int>((FString *)local_550.Data,iVar18);
              if (local_550.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_550.Data);
              }
              if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_360.Data.AllocatorInstance.Data);
              }
              if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_340.Data.AllocatorInstance.Data);
              }
            }
            else {
              if (1 < (byte)LogTextLocalizationResourceGenerator._0_1_) {
                local_3a0.Name = (char (*) [3])&s_id;
                UE::Logging::Private::
                LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[3]>,int_const_&>
                          ((FLogCategoryBase *)&LogTextLocalizationResourceGenerator,&::LOG_Static,
                           &local_3a0,&TextLocalizationResourceGenerator::LocalizationLogIdentifier)
                ;
              }
              bVar3 = false;
            }
            if (local_440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_440.Data.AllocatorInstance.Data);
            }
          }
          else {
            if (1 < (byte)LogTextLocalizationResourceGenerator._0_1_) {
              local_3d0.Name = (char (*) [3])&s_id;
              UE::Logging::Private::
              LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[3]>,int_const_&>
                        ((FLogCategoryBase *)&LogTextLocalizationResourceGenerator,&::LOG_Static,
                         &local_3d0,&TextLocalizationResourceGenerator::LocalizationLogIdentifier);
            }
            bVar3 = false;
          }
          if (local_4e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4e0.Data.AllocatorInstance.Data);
          }
        }
        else {
          if (1 < (byte)LogTextLocalizationResourceGenerator._0_1_) {
            local_3a8.Name = (char (*) [3])&s_id;
            UE::Logging::Private::
            LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[3]>,int_const_&>
                      ((FLogCategoryBase *)&LogTextLocalizationResourceGenerator,&::LOG_Static,
                       &local_3a8,&TextLocalizationResourceGenerator::LocalizationLogIdentifier);
          }
          bVar3 = false;
        }
        if (local_430.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_430.Data.AllocatorInstance.Data);
        }
      }
      else {
        if (1 < (byte)LogTextLocalizationResourceGenerator._0_1_) {
          local_3b0.Name = (char (*) [3])&s_id;
          UE::Logging::Private::
          LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[3]>,int_const_&>
                    ((FLogCategoryBase *)&LogTextLocalizationResourceGenerator,&::LOG_Static,
                     &local_3b0,&TextLocalizationResourceGenerator::LocalizationLogIdentifier);
        }
        bVar3 = false;
      }
      if (local_530.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_530.Data.AllocatorInstance.Data);
      }
    }
    else {
      if (1 < (byte)LogTextLocalizationResourceGenerator._0_1_) {
        local_3b8.Name = (char (*) [3])&s_id;
        UE::Logging::Private::
        LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[3]>,int_const_&>
                  ((FLogCategoryBase *)&LogTextLocalizationResourceGenerator,&::LOG_Static,
                   &local_3b8,&TextLocalizationResourceGenerator::LocalizationLogIdentifier);
      }
      bVar3 = false;
    }
    if (local_540.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_540.Data.AllocatorInstance.Data);
    }
  }
  else {
    if (1 < (byte)LogTextLocalizationResourceGenerator._0_1_) {
      local_3c0.Name = (char (*) [3])&s_id;
      UE::Logging::Private::
      LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[3]>,int_const_&>
                ((FLogCategoryBase *)&LogTextLocalizationResourceGenerator,&::LOG_Static,&local_3c0,
                 &TextLocalizationResourceGenerator::LocalizationLogIdentifier);
    }
    bVar3 = false;
  }
  if (local_420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_420.Data.AllocatorInstance.Data);
  }
  if (local_510.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_510.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

