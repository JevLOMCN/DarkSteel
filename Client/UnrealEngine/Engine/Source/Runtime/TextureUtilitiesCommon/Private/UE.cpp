// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TextureUtilitiesCommon
// Functions: 10

// AutoDetectAndChangeGrayScale<FImage> @ 14c93c830

bool __cdecl UE::TextureUtilitiesCommon::AutoDetectAndChangeGrayScale<FImage>(FImage *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(char *)((longlong)&param_1->_padding_ + 4) != '\x01') {
    return false;
  }
  lVar2 = 0;
  lVar3 = (longlong)(int)param_1->_padding_ * (longlong)*(int *)((longlong)&param_1->_padding_ + 4)
          * (longlong)(int)param_1->_padding_;
  if (0 < lVar3) {
    pFVar1 = (param_1->RawData).AllocatorInstance.Data + 2;
    do {
      if (pFVar1[1] != (FScriptContainerElement)0xff) {
        return false;
      }
      if (*pFVar1 != pFVar1[-2]) {
        return false;
      }
      if (pFVar1[-1] != pFVar1[-2]) {
        return false;
      }
      lVar2 = lVar2 + 1;
      pFVar1 = pFVar1 + 4;
    } while (lVar2 < lVar3);
  }
  FImage::ChangeFormat(param_1,G8,*(EGammaSpace *)((longlong)&param_1->_padding_ + 5));
  return true;
}

// AutoDetectAndChangeGrayScale<FMipMapImage> @ 14c93c8b0

bool __cdecl
UE::TextureUtilitiesCommon::AutoDetectAndChangeGrayScale<FMipMapImage>(FMipMapImage *param_1)

{
  long64 lVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  
  if (param_1->Format != BGRA8) {
    return false;
  }
  pFVar3 = (param_1->RawData).AllocatorInstance.Data;
  lVar1 = ERawImageFormat::GetBytesPerPixel(BGRA8);
  lVar2 = (param_1->RawData).ArrayNum / lVar1;
  lVar4 = 0;
  if (0 < lVar2) {
    pFVar3 = pFVar3 + 2;
    do {
      if (pFVar3[1] != (FScriptContainerElement)0xff) {
        return false;
      }
      if (*pFVar3 != pFVar3[-2]) {
        return false;
      }
      if (pFVar3[-1] != pFVar3[-2]) {
        return false;
      }
      lVar4 = lVar4 + 1;
      pFVar3 = pFVar3 + 4;
    } while (lVar4 < lVar2);
  }
  FMipMapImage::ChangeFormat(param_1,G8,param_1->GammaSpace);
  return true;
}

// ExtractUDIMCoordinates @ 14c93d170

void __cdecl
UE::TextureUtilitiesCommon::ExtractUDIMCoordinates(int param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UDIMIndex != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TextureUtilitiesCommon\\Private\\UDIMUtilities.cpp"
                       ,100,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_1 - 0x3e9U < 0x38e) goto LAB_14c93d1e7;
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("UDIMIndex >= UDIM_Min_Index && UDIMIndex <= UDIM_Max_Index",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TextureUtilitiesCommon\\Private\\UDIMUtilities.cpp"
                     ,0x65,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14c93d1e7:
  *param_2 = (param_1 + -0x3e9) % 10;
  *param_3 = (param_1 + -0x3e9) / 10;
  if ((*param_2 < 0) || (9 < *param_2)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutBlockX >= 0 && OutBlockX <= UDIM_Max_X",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TextureUtilitiesCommon\\Private\\UDIMUtilities.cpp"
                       ,0x6b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((*param_3 < 0) || (0x5a < *param_3)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutBlockY >= 0 && OutBlockY <= UDIM_Max_Y",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TextureUtilitiesCommon\\Private\\UDIMUtilities.cpp"
                       ,0x6c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// FillZeroAlphaPNGData @ 14c93d290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
UE::TextureUtilitiesCommon::FillZeroAlphaPNGData
          (int param_1,int param_2,ETextureSourceFormat param_3,uchar *param_4,bool param_5)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  float fVar11;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined4 uStack_154;
  TPNGDataFill<unsigned_char,unsigned_int,2,1,0,3> local_148;
  TPNGDataFill<unsigned_short,unsigned___int64,0,1,2,3> local_c8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_178;
  if ((param_1 < 1) || (param_2 < 1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SizeX > 0 && SizeY > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TextureUtilitiesCommon\\Private\\TextureImportUtils.cpp"
                       ,0x222,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (param_1 < 0) {
      return;
    }
  }
  fVar2 = __real_bf8ccccd;
  if (-1 < param_2) {
    if (param_3 == TSF_BGRA8) {
      uVar10 = 0;
      local_158 = 0xffffff;
      local_148.WhiteWithZeroAlpha = 0xffffff;
      uVar6 = uVar10;
      uVar9 = uVar10;
      local_148.SourceData = param_4;
      local_148.TextureWidth = (longlong)param_1;
      local_148.TextureHeight = (longlong)param_2;
      do {
        iVar7 = (int)uVar6;
        uVar6 = uVar10;
        uVar8 = uVar9;
        do {
          iVar5 = (int)uVar6;
          iVar4 = iVar5 * iVar5 + iVar7 * iVar7;
          if (iVar4 == 0) {
            local_148.NearNeighborWeights[0][0] = 0.0;
          }
          else {
            fVar11 = expf(SQRT((float)iVar4) * fVar2);
            local_148.NearNeighborWeights[0][uVar8] = fVar11;
          }
          uVar6 = (ulonglong)(iVar5 + 1U);
          uVar8 = uVar8 + 1;
        } while ((int)(iVar5 + 1U) < 5);
        uVar6 = (ulonglong)(iVar7 + 1U);
        uVar9 = uVar9 + 5;
      } while ((int)(iVar7 + 1U) < 5);
      TPNGDataFill<unsigned_char,unsigned_int,2,1,0,3>::ProcessData(&local_148,param_5);
    }
    else if (param_3 == TSF_RGBA16) {
      uVar10 = 0;
      local_158 = 0xffffffff;
      uStack_154 = 0xffff;
      local_c8.WhiteWithZeroAlpha = 0xffffffffffff;
      uVar6 = uVar10;
      uVar9 = uVar10;
      local_c8.SourceData = (ushort *)param_4;
      local_c8.TextureWidth = (longlong)param_1;
      local_c8.TextureHeight = (longlong)param_2;
      do {
        iVar7 = (int)uVar6;
        uVar6 = uVar10;
        uVar8 = uVar9;
        do {
          iVar5 = (int)uVar6;
          iVar4 = iVar5 * iVar5 + iVar7 * iVar7;
          if (iVar4 == 0) {
            local_c8.NearNeighborWeights[0][0] = 0.0;
          }
          else {
            fVar11 = expf(SQRT((float)iVar4) * fVar2);
            local_c8.NearNeighborWeights[0][uVar8] = fVar11;
          }
          uVar6 = (ulonglong)(iVar5 + 1U);
          uVar8 = uVar8 + 1;
        } while ((int)(iVar5 + 1U) < 5);
        uVar6 = (ulonglong)(iVar7 + 1U);
        uVar9 = uVar9 + 5;
      } while ((int)(iVar7 + 1U) < 5);
      TPNGDataFill<unsigned_short,unsigned___int64,0,1,2,3>::ProcessData(&local_c8,param_5);
    }
  }
  return;
}

// GetDefaultSRGB @ 14c93d6e0

bool __cdecl
UE::TextureUtilitiesCommon::GetDefaultSRGB
          (TextureCompressionSettings param_1,ETextureSourceFormat param_2,bool param_3)

{
  Type TVar1;
  bool bVar2;
  
  if ((param_1 != TC_Default) && (param_1 != TC_EditorIcon)) {
    return false;
  }
  TVar1 = FImageCoreUtils::ConvertToRawImageFormat(param_2);
  bVar2 = true;
  if (TVar1 < BGRE8) {
    bVar2 = param_3;
  }
  return bVar2;
}

// GetPNGInfillSetting @ 14c93e130

ETextureImportPNGInfill __cdecl UE::TextureUtilitiesCommon::GetPNGInfillSetting(void)

{
  char cVar1;
  ETextureImportPNGInfill EVar2;
  UClass *pUVar3;
  bool local_res8 [32];
  
  pUVar3 = UTextureImportUserSettings::StaticClass();
  if ((pUVar3->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar3);
  }
  EVar2 = (pUVar3->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10;
  if (EVar2 == Default) {
    pUVar3 = UTextureImportSettings::StaticClass();
    if ((pUVar3->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar3);
    }
    EVar2 = (pUVar3->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x1b;
    if (EVar2 == Default) {
      local_res8[0] = true;
      cVar1 = '\x01';
      if (GConfig != (FConfigCacheIni *)0x0) {
        FConfigCacheIni::GetBool
                  (GConfig,L"TextureImporter",L"FillPNGZeroAlpha",local_res8,&GEditorIni);
        cVar1 = local_res8[0];
      }
      EVar2 = (cVar1 != '\0') + Never;
    }
  }
  return EVar2;
}

// GetUDIMBlocksFromSourceFile @ 14c93e360

TMap<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_> * __cdecl
UE::TextureUtilitiesCommon::GetUDIMBlocksFromSourceFile
          (TMap<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_>
           *__return_storage_ptr__,FString *param_1,FString *param_2,FString *param_3)

{
  uint uVar1;
  int iVar2;
  FString *pFVar3;
  IFileManager *pIVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  ForAnyElementType FVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  FString *in_stack_fffffffffffffed8;
  ForAnyElementType local_108;
  undefined8 local_100;
  uint local_f8 [2];
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  undefined1 local_b0 [16];
  FString local_a0;
  FString local_90;
  undefined1 local_80 [16];
  int local_70;
  FString local_68;
  TStringView<wchar_t> local_58;
  undefined8 local_48;
  int local_40;
  
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  iVar7 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.Data.ArrayNum = 0;
  local_e0.Data.ArrayMax = 0;
  local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.Data.ArrayNum = 0;
  local_c0.Data.ArrayMax = 0;
  pFVar3 = FPaths::GetBaseFilename((FString *)local_b0,param_1,true);
  uVar1 = ParseUDIMName(pFVar3,param_2,&local_e0,&local_c0);
  if ((FScriptContainerElement *)local_b0._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_b0._0_8_);
  }
  if (uVar1 != 0xffffffff) {
    FPaths::GetPath(&local_a0,param_1);
    pFVar3 = FPaths::GetExtension(&local_68,param_1,true);
    FVar9.Data = local_a0.Data.AllocatorInstance.Data;
    iVar5 = local_e0.Data.ArrayNum + -1;
    if (local_e0.Data.ArrayNum == 0) {
      iVar5 = iVar7;
    }
    iVar8 = local_a0.Data.ArrayNum;
    if ((iVar8 != 0) || (iVar2 = 2, iVar5 == -1)) {
      iVar2 = 1;
    }
    local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f0.Data.ArrayNum = iVar8;
    if ((iVar8 == 0) && (iVar5 + iVar2 == 0)) {
      local_f0.Data.ArrayMax = 0;
    }
    else {
      uVar1 = iVar8 + iVar5 + iVar2;
      if ((int)uVar1 < iVar8) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
      }
      in_stack_fffffffffffffed8 = &local_f0;
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar1,0,(ForAnyElementType *)in_stack_fffffffffffffed8,iVar8,
                 &local_f0.Data.ArrayMax);
      if (iVar8 != 0) {
        memcpy(local_f0.Data.AllocatorInstance.Data,FVar9.Data,(longlong)iVar8 * 2);
      }
    }
    ::FString::PathAppend(&local_f0,(wchar_t *)local_e0.Data.AllocatorInstance.Data,iVar5);
    ::FString::ConcatFC((FString *)local_b0,&local_f0,L"*");
    ::FString::ConcatFF(&local_90,(FString *)local_b0,&local_c0);
    ::FString::ConcatFF((FString *)(local_80 + 8),&local_90,pFVar3);
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    if ((FScriptContainerElement *)local_b0._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_b0._0_8_);
    }
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    local_108.Data = (FScriptContainerElement *)0x0;
    local_100 = 0;
    pIVar4 = IFileManager::Get();
    pFVar3 = (FString *)L"";
    if (local_70 != 0) {
      pFVar3 = (FString *)local_80._8_8_;
    }
    (**(code **)((longlong)*pIVar4 + 0x80))
              (pIVar4,&local_108,pFVar3,1,(ulonglong)in_stack_fffffffffffffed8 & 0xffffffffffffff00)
    ;
    uVar6 = local_100 & 0xffffffff;
    if ((int)local_100 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum(uVar6);
    }
    if (local_100._4_4_ < (int)local_100) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,(int)local_100,&local_108,(int)local_100,(int *)((longlong)&local_100 + 4));
      uVar6 = local_100 & 0xffffffff;
    }
    iVar5 = (int)uVar6;
    pFVar10 = local_108.Data + (longlong)iVar5 * 0x10;
    FVar9.Data = local_108.Data;
    while( true ) {
      iVar8 = (int)uVar6;
      if ((int)uVar6 != iVar5) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
        iVar8 = (int)local_100;
      }
      if (FVar9.Data == pFVar10) break;
      pFVar3 = FPaths::GetBaseFilename(&local_68,(FString *)FVar9.Data,true);
      local_f8[0] = ParseUDIMName(pFVar3,param_2,&local_e0,&local_c0);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_f8[0] != 0xffffffff) {
        ::FString::ConcatFF(&local_f0,&local_e0,&local_c0);
        local_58.DataPtr = (wchar_t *)local_a0.Data.AllocatorInstance.Data;
        local_48 = *(undefined8 *)FVar9.Data;
        local_58.Size = local_a0.Data.ArrayNum + -1;
        if (local_a0.Data.ArrayNum == 0) {
          local_58.Size = iVar7;
        }
        local_40 = *(int *)(FVar9.Data + 8) + -1;
        if (*(int *)(FVar9.Data + 8) == 0) {
          local_40 = iVar7;
        }
        FPaths::CombineInternal(&local_90,&local_58,2);
        local_b0._0_8_ = local_f8;
        local_b0._8_8_ = &local_90;
        TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<int_const_&,FString_&&>_>
                  ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                    *)__return_storage_ptr__,(TPairInitializer<int_const_&,FString_&&> *)local_80,
                   (bool *)local_b0);
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
      }
      uVar6 = local_100 & 0xffffffff;
      FVar9.Data = FVar9.Data + 0x10;
    }
    if ((*(int *)&__return_storage_ptr__->field_0x8 != *(int *)&__return_storage_ptr__->field_0x34)
       && (param_3 != (FString *)0x0)) {
      ::FString::ConcatFF(&local_d0,&local_e0,&local_c0);
      if (param_3 != &local_d0) {
        pFVar10 = (param_3->Data).AllocatorInstance.Data;
        if (pFVar10 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar10);
        }
        (param_3->Data).AllocatorInstance.Data = local_d0.Data.AllocatorInstance.Data;
        (param_3->Data).ArrayNum = local_d0.Data.ArrayNum;
        (param_3->Data).ArrayMax = local_d0.Data.ArrayMax;
        local_d0.Data.ArrayNum = 0;
        local_d0.Data.ArrayMax = 0;
        local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      iVar8 = (int)local_100;
    }
    DestructItems<FString,int>((FString *)local_108.Data,iVar8);
    if (local_108.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data);
    }
    if ((FString *)local_80._8_8_ != (FString *)0x0) {
      FMemory::Free((void *)local_80._8_8_);
    }
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
  }
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetUDIMIndex @ 14c93e7c0

int __cdecl UE::TextureUtilitiesCommon::GetUDIMIndex(int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (9 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("BlockX >= 0 && BlockX <= UDIM_Max_X",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TextureUtilitiesCommon\\Private\\UDIMUtilities.cpp"
                       ,0x35,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  if (0x5a < (uint)param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("BlockY >= 0 && BlockY <= UDIM_Max_Y",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TextureUtilitiesCommon\\Private\\UDIMUtilities.cpp"
                       ,0x36,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = param_1 + 0x3e9 + param_2 * 10;
  if ((iVar3 < 0x3e9) || (0x776 < iVar3)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ret >= 1001 && Ret <= UDIM_Max_Index",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TextureUtilitiesCommon\\Private\\UDIMUtilities.cpp"
                       ,0x3a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return iVar3;
}

// IsImportResolutionValid @ 14c93e9e0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __cdecl
UE::TextureUtilitiesCommon::IsImportResolutionValid
          (long64 param_1,long64 param_2,bool param_3,FText *param_4)

{
  bool bVar1;
  int iVar2;
  Type TVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  undefined1 local_res8 [8];
  FText local_108;
  FText local_f8;
  TSharedPtr<FCulture,1> local_e8;
  FText local_d8;
  TSharedPtr<FCulture,1> local_c8;
  TSharedPtr<FCulture,1> local_b8;
  TSharedPtr<FCulture,1> local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FTextFormat local_48;
  
  iVar2 = UTexture::GetMaximumDimensionOfNonVT();
  lVar10 = (longlong)iVar2;
  if ((param_1 == 0) || (param_2 == 0)) {
    if (param_4 == (FText *)0x0) {
      return false;
    }
    pwVar12 = L"Texture has zero width or height";
    pwVar11 = L"Warning_TextureSizeZero";
  }
  else {
    bVar1 = FImageCoreUtils::IsImageImportPossible(param_1,param_2);
    if (!bVar1) {
      if (param_4 == (FText *)0x0) {
        return false;
      }
      pFVar4 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)&local_e8,L"Interchange",L"Warning_TextureSizeTooLargeOrInvalid",
                          L"Texture is too large to import or it has an invalid resolution.");
      FText::operator=(param_4,pFVar4);
      local_f8.TextData.Reference = (ITextData *)local_e8.Object;
      goto LAB_14c93eca1;
    }
    if (((lVar10 < param_1) || (lVar10 < param_2)) &&
       (bVar1 = UTexture::IsVirtualTexturingEnabled((ITargetPlatformSettings *)0x0), !bVar1)) {
      FText::AsLocalizable_Advanced_LocText
                (&local_f8,L"Interchange",L"Warning_LargeTextureVTDisabled",
                 L"\nWarning: Virtual Textures are disabled in this project.");
      local_d8.TextData.Reference = local_f8.TextData.Reference;
      if ((FCulture *)local_f8.TextData.Reference != (FCulture *)0x0) {
        (**(code **)((longlong)*local_f8.TextData.Reference + 8))
                  (local_f8.TextData.Reference,local_res8);
      }
      local_d8.Flags = local_f8.Flags;
      local_e8.Object = (FCulture *)0x0;
      local_e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar4 = FText::AsNumber(&local_88,lVar10,(FNumberFormattingOptions *)0x0,&local_e8);
      local_a8.Object = (FCulture *)0x0;
      local_a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar5 = FText::AsNumber(&local_78,lVar10,(FNumberFormattingOptions *)0x0,&local_a8);
      local_b8.Object = (FCulture *)0x0;
      local_b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar6 = FText::AsNumber(&local_68,param_2,(FNumberFormattingOptions *)0x0,&local_b8);
      local_c8.Object = (FCulture *)0x0;
      local_c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar7 = FText::AsNumber(&local_58,param_1,(FNumberFormattingOptions *)0x0,&local_c8);
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_108,L"Interchange",L"Warning_LargeTextureImport",
                          L"Attempting to import {0} x {1} texture, proceed?\nLargest supported non-VT texture size: {2} x {3}{4}"
                         );
      pFVar9 = FTextFormat::FTextFormat(&local_48,pFVar8,Default);
      pFVar4 = FText::Format<FText,FText,FText,FText,FText>
                         (&local_98,pFVar9,pFVar7,pFVar6,pFVar5,pFVar4,&local_d8);
      TVar3 = FMessageDialog::Open(YesNo,Yes,pFVar4);
      if (local_98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      }
      if ((FCulture *)local_108.TextData.Reference != (FCulture *)0x0) {
        (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_e8.SharedReferenceCount.ReferenceController);
      if (TVar3 != Yes) goto LAB_14c93eca1;
      if ((FCulture *)local_f8.TextData.Reference != (FCulture *)0x0) {
        (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
      }
    }
    if ((param_3) || (((param_1 & param_1 - 1U) == 0 && ((param_2 & param_2 - 1U) == 0)))) {
      return true;
    }
    if (param_4 == (FText *)0x0) {
      return false;
    }
    pwVar12 = L"Cannot import texture with non-power of two dimensions";
    pwVar11 = L"Warning_TextureNotAPowerOfTwo";
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText(&local_108,L"Interchange",pwVar11,pwVar12);
  FText::operator=(param_4,pFVar4);
  local_f8.TextData.Reference = local_108.TextData.Reference;
LAB_14c93eca1:
  if ((FCulture *)local_f8.TextData.Reference != (FCulture *)0x0) {
    (**(code **)(((((FCulture *)local_f8.TextData.Reference)->Implementation).Ptr)->ICULocale).
                language)();
  }
  return false;
}

// ParseUDIMName @ 14c93ecd0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

uint __cdecl
UE::TextureUtilitiesCommon::ParseUDIMName
          (FString *param_1,FString *param_2,FString *param_3,FString *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  FString *pFVar9;
  wchar_t *_Str;
  FRegexPattern local_68;
  FString local_58;
  FRegexMatcher local_48;
  
  FRegexPattern::FRegexPattern(&local_68,param_2,None);
  FRegexMatcher::FRegexMatcher(&local_48,&local_68,param_1);
  bVar1 = FRegexMatcher::FindNext(&local_48);
  if (bVar1) {
    iVar2 = FRegexMatcher::GetCaptureGroupBeginning(&local_48,1);
    iVar3 = FRegexMatcher::GetCaptureGroupEnding(&local_48,1);
    iVar4 = FRegexMatcher::GetCaptureGroupBeginning(&local_48,2);
    iVar5 = FRegexMatcher::GetCaptureGroupEnding(&local_48,2);
    iVar6 = FRegexMatcher::GetCaptureGroupBeginning(&local_48,3);
    iVar7 = FRegexMatcher::GetCaptureGroupEnding(&local_48,3);
    if ((((iVar2 != -1) && (iVar4 != -1)) && (iVar3 != -1)) && (iVar5 != -1)) {
      pFVar9 = ::FString::Mid(param_1,&local_58,iVar4,iVar5 - iVar4);
      if ((pFVar9->Data).ArrayNum == 0) {
        _Str = L"";
      }
      else {
        _Str = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
      }
      uVar8 = _wtoi(_Str);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      pFVar9 = ::FString::Mid(param_1,&local_58,iVar2,iVar3 - iVar2);
      ::FString::operator=(param_3,pFVar9);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if ((iVar6 != -1) && (iVar7 != -1)) {
        pFVar9 = ::FString::Mid(param_1,&local_58,iVar6,iVar7 - iVar6);
        ::FString::operator=(param_4,pFVar9);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      if (uVar8 - 0x3e9 < 0x38e) goto LAB_14c93ee78;
    }
  }
  uVar8 = 0xffffffff;
LAB_14c93ee78:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.Implementation.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.Pattern.Implementation.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.Implementation.SharedReferenceCount.ReferenceController);
  return uVar8;
}

