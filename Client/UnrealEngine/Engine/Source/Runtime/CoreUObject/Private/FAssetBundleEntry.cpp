// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// StaticStruct @ 141e48160

UScriptStruct * __cdecl FAssetBundleEntry::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAssetBundleEntry.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UScriptStruct_FAssetBundleEntry.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAssetBundleEntry,(UObject *)pUVar1,
                         L"AssetBundleEntry");
  }
  return Z_Registration_Info_UScriptStruct_FAssetBundleEntry.OuterSingleton;
}

// ExportTextItem @ 141e5b1c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FAssetBundleEntry::ExportTextItem
          (FAssetBundleEntry *this,FString *param_1,FAssetBundleEntry *param_2,UObject *param_3,
          int param_4,UObject *param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  int iVar6;
  FName *pFVar7;
  undefined1 local_res8 [8];
  TStringOverload<FUtf8String> local_98;
  FTopLevelAssetPath local_88;
  FSoftObjectPath local_78;
  FSoftObjectPath local_58;
  
  if ((param_2 == this) || (param_2->BundleName == (FName)0x0)) {
    iVar2 = (param_1->Data).ArrayNum;
    iVar3 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars(param_1,L"(BundleName=\"",0xd);
    ::FName::AppendString(&this->BundleName,param_1);
    ::FString::AppendChar(param_1,L'\"');
    if ((this->AssetPaths).ArrayNum == 0) {
      ::FString::AppendChars(param_1,L",AssetPaths=",0xc);
      ::FString::AppendChars(param_1,L")",1);
      return true;
    }
    ::FString::AppendChars(param_1,L",AssetPaths=(",0xd);
    iVar2 = (this->AssetPaths).ArrayNum;
    pFVar5 = (FName *)(this->AssetPaths).AllocatorInstance.Data;
    pFVar7 = pFVar5 + (longlong)iVar2 * 2;
    local_58.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_58.AssetPath.PackageName.Number = 0;
    local_58.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_58.AssetPath.AssetName.Number = 0;
    local_58.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.SubPathString.Data.ArrayNum = 0;
    local_58.SubPathString.Data.ArrayMax = 0;
    while( true ) {
      if ((this->AssetPaths).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FTopLevelAssetPath_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      iVar4 = 0;
      if (pFVar5 == pFVar7) {
        iVar2 = (param_1->Data).ArrayNum;
        iVar3 = iVar2 + -1;
        if (iVar2 == 0) {
          iVar3 = iVar4;
        }
        if (iVar3 + -1 < iVar3) {
          iVar3 = iVar3 + -1;
        }
        iVar2 = 0;
        if (0 < iVar3) {
          iVar2 = iVar3;
        }
        ::FString::RemoveAt(param_1,iVar2,1,No);
        ::FString::AppendChars(param_1,L"))",2);
        if (local_58.SubPathString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return true;
        }
        FMemory::Free(local_58.SubPathString.Data.AllocatorInstance.Data);
        return true;
      }
      local_88.PackageName = *pFVar5;
      local_88.AssetName = pFVar5[1];
      local_78.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_78.AssetPath.PackageName.Number = 0;
      local_78.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_78.AssetPath.AssetName.Number = 0;
      local_78.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.SubPathString.Data.ArrayNum = 0;
      local_78.SubPathString.Data.ArrayMax = 0;
      local_98.String.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.String.Data.ArrayNum = 0;
      local_98.String.Data.ArrayMax = 0;
      FSoftObjectPath::SetPath(&local_78,&local_88,&local_98);
      bVar1 = FSoftObjectPath::ExportTextItem(&local_78,param_1,&local_58,param_3,param_4,param_5);
      if (!bVar1) break;
      ::FString::AppendChar(param_1,L',');
      if (local_78.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.SubPathString.Data.AllocatorInstance.Data);
      }
      pFVar5 = pFVar5 + 2;
    }
    iVar2 = (param_1->Data).ArrayNum;
    iVar6 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar6 = iVar4;
    }
    iVar2 = iVar6;
    if (iVar3 < iVar6) {
      iVar2 = iVar3;
    }
    if (0 < iVar2) {
      iVar4 = iVar2;
    }
    ::FString::RemoveAt(param_1,iVar4,iVar6 - iVar4,Default);
    if (local_78.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.SubPathString.Data.AllocatorInstance.Data);
    }
    if (local_58.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// ImportTextItem @ 141e5e460

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FAssetBundleEntry::ImportTextItem
          (FAssetBundleEntry *this,wchar_t **param_1,int param_2,UObject *param_3,
          FOutputDevice *param_4)

{
  TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *this_00;
  int *piVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  TStringView<wchar_t> TVar6;
  TStringView<wchar_t> TVar7;
  TStringView<wchar_t> TVar8;
  bool bVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  wchar_t *pwVar15;
  FName *pFVar16;
  FString *pFVar17;
  ulonglong uVar18;
  FScriptContainerElement *pFVar19;
  FSoftObjectPath *pFVar20;
  ForAnyElementType FVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  wchar_t *local_270;
  ForAnyElementType local_268;
  undefined8 local_260;
  undefined1 local_258 [8];
  FSoftObjectPath local_250;
  FTopLevelAssetPath local_228;
  undefined8 local_218;
  undefined8 local_210;
  TStringView<wchar_t> local_208;
  TStringView<wchar_t> local_1f8;
  FName local_1e8;
  FName FStack_1e0;
  FOutputDevice local_1d8;
  FName local_1c8;
  FString local_1c0;
  FTopLevelAssetPath local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  undefined1 local_168 [16];
  TStringView<wchar_t> local_158;
  TStringView<wchar_t> local_148;
  TStringView<wchar_t> local_138;
  TStringView<wchar_t> local_128;
  TStringView<wchar_t> local_118;
  TStringView<wchar_t> local_108;
  FString local_f8;
  TStringView<wchar_t> local_e8;
  TStringView<wchar_t> local_d8;
  TStringView<wchar_t> local_c8;
  TStringView<wchar_t> local_b8;
  FString local_a8;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  undefined1 local_58 [16];
  
  uVar5 = UE::AssetBundleEntry::Private::BundleNamePrefix._8_8_;
  local_270 = *param_1;
  local_168._8_8_ = UE::AssetBundleEntry::Private::BundleNamePrefix._8_8_;
  local_168._0_8_ = UE::AssetBundleEntry::Private::BundleNamePrefix.DataPtr;
  local_268.Data = (FScriptContainerElement *)0x0;
  local_260 = 0;
  local_58 = local_168;
  iVar12 = FGenericPlatformStricmp::Strnicmp
                     (local_270,UE::AssetBundleEntry::Private::BundleNamePrefix.DataPtr,0xd);
  if (iVar12 == 0) {
    local_270 = local_270 + (int)uVar5;
    pwVar15 = wcschr(local_270,L'\"');
    if (pwVar15 != (wchar_t *)0x0) {
      pFVar16 = ::FName::FName(&local_1c8,(int)((longlong)pwVar15 - (longlong)local_270 >> 1),
                               local_270,FNAME_Add);
      FVar2 = *pFVar16;
      local_270 = pwVar15 + 1;
      FOutputDevice::FOutputDevice(&local_1d8);
      bVar4 = false;
      local_1d8._padding_ = (longlong)&___7FOutputDeviceNull__6B_;
      bVar10 = false;
      uVar22 = UE::AssetBundleEntry::Private::BundleAssetsPrefix.DataPtr._0_4_;
      uVar23 = UE::AssetBundleEntry::Private::BundleAssetsPrefix.DataPtr._4_4_;
      do {
        while( true ) {
          while (TVar8 = UE::AssetBundleEntry::Private::BundleAssetsPrefix,
                local_208 = UE::AssetBundleEntry::Private::BundleAssetsPrefix,
                local_1f8 = UE::AssetBundleEntry::Private::BundleAssetsPrefix,
                iVar12 = FGenericPlatformStricmp::Strnicmp
                                   (local_270,(wchar_t *)CONCAT44(uVar23,uVar22),0xf),
                TVar7 = UE::AssetBundleEntry::Private::StructOrArraySuffix,
                TVar6 = UE::AssetBundleEntry::Private::AssetPathsPrefix, iVar12 == 0) {
            local_270 = local_270 + TVar8.Size;
            if (bVar4) {
              pwVar15 = 
              L"FAssetBundleEntry::ImportTextItem - Encountered key BundleAssets twice. When parsing import text \'%s\'."
              ;
              goto LAB_141e5ee18;
            }
            bVar4 = true;
            local_c8 = UE::AssetBundleEntry::Private::StructOrArraySuffix;
            local_b8 = UE::AssetBundleEntry::Private::StructOrArraySuffix;
            iVar12 = FGenericPlatformStricmp::Strnicmp
                               (local_270,UE::AssetBundleEntry::Private::StructOrArraySuffix.DataPtr
                                ,1);
            if (iVar12 != 0) {
              while( true ) {
                iVar12 = (int)local_260;
                if ((int)local_260 == local_260._4_4_) {
                  iVar12 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x820,&local_268,(int *)((longlong)&local_260 + 4));
                }
                pFVar19 = (FScriptContainerElement *)0x0;
                local_260 = CONCAT44(local_260._4_4_,iVar12 + 1);
                pFVar20 = (FSoftObjectPath *)(local_268.Data + (longlong)iVar12 * 0x20);
                (pFVar20->AssetPath).PackageName.ComparisonIndex = 0;
                (pFVar20->AssetPath).PackageName.Number = 0;
                (pFVar20->AssetPath).AssetName.ComparisonIndex = 0;
                (pFVar20->AssetPath).AssetName.Number = 0;
                (pFVar20->SubPathString).Data.AllocatorInstance.Data =
                     (FScriptContainerElement *)0x0;
                (pFVar20->SubPathString).Data.ArrayNum = 0;
                (pFVar20->SubPathString).Data.ArrayMax = 0;
                bVar9 = FSoftObjectPath::ImportTextItem
                                  (pFVar20,&local_270,param_2,param_3,param_4,(FArchive *)0x0);
                if (!bVar9) goto LAB_141e5e8eb;
                uVar13 = 0;
                if ((int)((int)local_260 - 1U) < (int)local_260) {
                  uVar13 = ~((int)local_260 - 1U) >> 0x1f;
                }
                if (uVar13 == 0) {
                  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar9) {
                    pcVar3 = (code *)swi(3);
                    uVar11 = (*pcVar3)();
                    return (bool)uVar11;
                  }
                }
                uVar13 = *(int *)(local_268.Data + (longlong)(int)local_260 * 0x20 + -8) - 1;
                if (*(int *)(local_268.Data + (longlong)(int)local_260 * 0x20 + -8) == 0) {
                  uVar13 = 0;
                }
                pFVar17 = ::FString::ConstructFromPtrSize
                                    (&local_198,
                                     *(uchar **)
                                      &local_268.Data[(longlong)(int)local_260 * 0x20 + -0x10].
                                       field_0x0,uVar13);
                iVar12 = 0;
                if (&local_a8 != pFVar17) {
                  pFVar19 = (pFVar17->Data).AllocatorInstance.Data;
                  (pFVar17->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  iVar12 = (pFVar17->Data).ArrayNum;
                  (pFVar17->Data).ArrayNum = 0;
                  (pFVar17->Data).ArrayMax = 0;
                }
                if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_198.Data.AllocatorInstance.Data);
                }
                if (pFVar19 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(pFVar19);
                }
                if (1 < iVar12) {
                  uVar13 = 0;
                  if ((int)((int)local_260 - 1U) < (int)local_260) {
                    uVar13 = ~((int)local_260 - 1U) >> 0x1f;
                  }
                  if (uVar13 == 0) {
                    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      );
                    if (bVar9) {
                      pcVar3 = (code *)swi(3);
                      uVar11 = (*pcVar3)();
                      return (bool)uVar11;
                    }
                  }
                  FSoftObjectPath::ToString
                            ((FSoftObjectPath *)
                             (local_268.Data + (longlong)(int)local_260 * 0x20 + -0x20),&local_188);
                  FOutputDevice::LogfImpl
                            (param_4,Warning,
                             L"FAssetBundleEntry::ImportTextItem - Asset bundle entries should all be top level objects, but found a subobject path \'%s\'. When parsing import text \'%s\'."
                            );
                  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_188.Data.AllocatorInstance.Data);
                  }
                }
                TVar6 = UE::AssetBundleEntry::Private::StructOrArraySuffix;
                if (*local_270 != L',') break;
                local_270 = local_270 + 1;
              }
              local_98 = UE::AssetBundleEntry::Private::StructOrArraySuffix;
              local_88 = UE::AssetBundleEntry::Private::StructOrArraySuffix;
              iVar12 = FGenericPlatformStricmp::Strnicmp
                                 (local_270,
                                  UE::AssetBundleEntry::Private::StructOrArraySuffix.DataPtr,1);
              if (iVar12 == 0) {
                local_270 = local_270 + TVar6.Size;
                goto LAB_141e5e8eb;
              }
              pwVar15 = 
              L"FAssetBundleEntry::ImportTextItem - Unterminated or ill formed BundleAssets list while importing asset bundle entry. When parsing import text \'%s\'."
              ;
              goto LAB_141e5ee18;
            }
            uVar22 = UE::AssetBundleEntry::Private::BundleAssetsPrefix.DataPtr._0_4_;
            uVar23 = UE::AssetBundleEntry::Private::BundleAssetsPrefix.DataPtr._4_4_;
            local_270 = local_270 + TVar7.Size;
          }
          local_158 = UE::AssetBundleEntry::Private::AssetPathsPrefix;
          local_148 = UE::AssetBundleEntry::Private::AssetPathsPrefix;
          iVar12 = FGenericPlatformStricmp::Strnicmp
                             (local_270,UE::AssetBundleEntry::Private::AssetPathsPrefix.DataPtr,0xd)
          ;
          TVar8 = UE::AssetBundleEntry::Private::StructOrArraySuffix;
          TVar7 = UE::AssetBundleEntry::Private::EmptyAssetPathsPrefix;
          if (iVar12 != 0) break;
          local_270 = local_270 + TVar6.Size;
          if (bVar10) {
            pwVar15 = 
            L"FAssetBundleEntry::ImportTextItem - Encountered key AssetPaths twice. When parsing import text \'%s\'."
            ;
LAB_141e5ee18:
            FOutputDevice::LogfImpl(param_4,Error,pwVar15);
            goto LAB_141e5ee28;
          }
          bVar10 = true;
          local_118 = UE::AssetBundleEntry::Private::StructOrArraySuffix;
          local_108 = UE::AssetBundleEntry::Private::StructOrArraySuffix;
          iVar12 = FGenericPlatformStricmp::Strnicmp
                             (local_270,UE::AssetBundleEntry::Private::StructOrArraySuffix.DataPtr,1
                             );
          if (iVar12 == 0) {
            uVar22 = UE::AssetBundleEntry::Private::BundleAssetsPrefix.DataPtr._0_4_;
            uVar23 = UE::AssetBundleEntry::Private::BundleAssetsPrefix.DataPtr._4_4_;
            local_270 = local_270 + TVar8.Size;
            bVar10 = true;
          }
          else {
            local_250.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_250.SubPathString.Data.ArrayNum = 0;
            local_250.SubPathString.Data.ArrayMax = 0;
            local_228.PackageName.ComparisonIndex.Value = 0;
            local_228.PackageName.Number = 0;
            local_228.AssetName.ComparisonIndex.Value = 0;
            local_228.AssetName.Number = 0;
            local_218 = 0;
            local_210 = 0;
            while( true ) {
              iVar12 = 0;
              local_250.AssetPath.AssetName.ComparisonIndex.Value = 0;
              local_250.AssetPath.AssetName.Number = 0;
              local_250.AssetPath.PackageName.ComparisonIndex.Value = 0;
              local_250.AssetPath.PackageName.Number = 0;
              FUtf8String::Reset(&local_250.SubPathString,0);
              local_228.AssetName.ComparisonIndex.Value = 0;
              local_228.AssetName.Number = 0;
              local_228.PackageName.ComparisonIndex.Value = 0;
              local_228.PackageName.Number = 0;
              bVar9 = FSoftObjectPath::ImportTextItem
                                (&local_250,&local_270,param_2,param_3,&local_1d8,(FArchive *)0x0);
              if (bVar9) {
                iVar14 = local_250.SubPathString.Data.ArrayNum + -1;
                if (local_250.SubPathString.Data.ArrayNum == 0) {
                  iVar14 = 0;
                }
                pFVar17 = ::FString::ConstructFromPtrSize
                                    (&local_1c0,
                                     (uchar *)local_250.SubPathString.Data.AllocatorInstance.Data,
                                     iVar14);
                pFVar19 = (FScriptContainerElement *)0x0;
                if (&local_f8 != pFVar17) {
                  pFVar19 = (pFVar17->Data).AllocatorInstance.Data;
                  (pFVar17->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  iVar12 = (pFVar17->Data).ArrayNum;
                  (pFVar17->Data).ArrayNum = 0;
                  (pFVar17->Data).ArrayMax = 0;
                }
                if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
                }
                if (pFVar19 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(pFVar19);
                }
                if (1 < iVar12) {
                  FSoftObjectPath::ToString(&local_250,&local_178);
                  FOutputDevice::LogfImpl
                            (param_4,Error,
                             L"FAssetBundleEntry::ImportTextItem - Asset bundle entries should all be top level objects, but found a subobject path \'%s\'. When parsing import text \'%s\'."
                            );
                  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_178.Data.AllocatorInstance.Data);
                  }
                  goto LAB_141e5edef;
                }
                iVar12 = (int)local_260;
                if ((int)local_260 == local_260._4_4_) {
                  iVar12 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x820,&local_268,(int *)((longlong)&local_260 + 4));
                }
                local_260 = CONCAT44(local_260._4_4_,iVar12 + 1);
                pFVar19 = local_268.Data + (longlong)iVar12 * 0x20;
                *(FName *)&pFVar19->field_0x0 = local_250.AssetPath.PackageName;
                *(FName *)(pFVar19 + 8) = local_250.AssetPath.AssetName;
                *(undefined8 *)(pFVar19 + 0x10) = 0;
                *(FScriptContainerElement **)(pFVar19 + 0x10) =
                     local_250.SubPathString.Data.AllocatorInstance.Data;
                local_250.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
                ;
                *(int *)(pFVar19 + 0x18) = local_250.SubPathString.Data.ArrayNum;
                *(int *)(pFVar19 + 0x1c) = local_250.SubPathString.Data.ArrayMax;
                local_250.SubPathString.Data.ArrayNum = 0;
                local_250.SubPathString.Data.ArrayMax = 0;
              }
              else {
                bVar9 = FTopLevelAssetPath::ImportTextItem
                                  (&local_228,&local_270,param_2,param_3,&local_1d8,(FArchive *)0x0)
                ;
                if (!bVar9) goto LAB_141e5edc7;
                iVar12 = (int)local_260;
                if ((int)local_260 == local_260._4_4_) {
                  iVar12 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x820,&local_268,(int *)((longlong)&local_260 + 4));
                }
                local_260 = CONCAT44(local_260._4_4_,iVar12 + 1);
                pFVar20 = (FSoftObjectPath *)(local_268.Data + (longlong)iVar12 * 0x20);
                local_1a8.PackageName = local_228.PackageName;
                local_1a8.AssetName = local_228.AssetName;
                (pFVar20->AssetPath).PackageName.ComparisonIndex = 0;
                (pFVar20->AssetPath).PackageName.Number = 0;
                (pFVar20->AssetPath).AssetName.ComparisonIndex = 0;
                (pFVar20->AssetPath).AssetName.Number = 0;
                (pFVar20->SubPathString).Data.AllocatorInstance.Data =
                     (FScriptContainerElement *)0x0;
                (pFVar20->SubPathString).Data.ArrayNum = 0;
                (pFVar20->SubPathString).Data.ArrayMax = 0;
                FSoftObjectPath::SetPath(pFVar20,&local_1a8);
              }
              TVar6 = UE::AssetBundleEntry::Private::StructOrArraySuffix;
              if (*local_270 != L',') break;
              local_270 = local_270 + 1;
            }
            local_e8 = UE::AssetBundleEntry::Private::StructOrArraySuffix;
            local_d8 = UE::AssetBundleEntry::Private::StructOrArraySuffix;
            iVar12 = FGenericPlatformStricmp::Strnicmp
                               (local_270,UE::AssetBundleEntry::Private::StructOrArraySuffix.DataPtr
                                ,1);
            if (iVar12 != 0) {
LAB_141e5edc7:
              FOutputDevice::LogfImpl
                        (param_4,Error,
                         L"FAssetBundleEntry::ImportTextItem - unterminated or ill formed AssetPaths list while importing asset bundle entry: \'%s\'. When parsing import text \'%s\'."
                        );
LAB_141e5edef:
              if (local_250.SubPathString.Data.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_250.SubPathString.Data.AllocatorInstance.Data);
              }
              goto LAB_141e5ee28;
            }
            local_270 = local_270 + TVar6.Size;
            if (local_250.SubPathString.Data.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_250.SubPathString.Data.AllocatorInstance.Data);
            }
LAB_141e5e8eb:
            uVar22 = UE::AssetBundleEntry::Private::BundleAssetsPrefix.DataPtr._0_4_;
            uVar23 = UE::AssetBundleEntry::Private::BundleAssetsPrefix.DataPtr._4_4_;
          }
        }
        local_138 = UE::AssetBundleEntry::Private::EmptyAssetPathsPrefix;
        local_128 = UE::AssetBundleEntry::Private::EmptyAssetPathsPrefix;
        iVar12 = FGenericPlatformStricmp::Strnicmp
                           (local_270,UE::AssetBundleEntry::Private::EmptyAssetPathsPrefix.DataPtr,
                            0xc);
        TVar6 = UE::AssetBundleEntry::Private::StructOrArraySuffix;
        if (iVar12 != 0) goto LAB_141e5ebf3;
        uVar22 = UE::AssetBundleEntry::Private::BundleAssetsPrefix.DataPtr._0_4_;
        uVar23 = UE::AssetBundleEntry::Private::BundleAssetsPrefix.DataPtr._4_4_;
        local_270 = local_270 + TVar7.Size;
      } while( true );
    }
    FOutputDevice::LogfImpl
              (param_4,Error,
               L"FAssetBundleEntry::ImportTextItem - Unterminated BundleName string. When parsing import text \'%s\'."
              );
  }
  else {
    FOutputDevice::LogfImpl
              (param_4,Error,
               L"FAssetBundleEntry::ImportTextItem - Text does not start with expected prefix \'%.*s\'. When parsing import text \'%s\'."
              );
  }
  bVar10 = false;
LAB_141e5ee5e:
  DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)local_268.Data,(int)local_260);
  if ((FSoftObjectPath *)local_268.Data != (FSoftObjectPath *)0x0) {
    FMemory::Free(local_268.Data);
  }
  return bVar10;
LAB_141e5ebf3:
  local_78 = UE::AssetBundleEntry::Private::StructOrArraySuffix;
  local_68 = UE::AssetBundleEntry::Private::StructOrArraySuffix;
  iVar12 = FGenericPlatformStricmp::Strnicmp
                     (local_270,UE::AssetBundleEntry::Private::StructOrArraySuffix.DataPtr,1);
  if (iVar12 == 0) {
    local_270 = local_270 + TVar6.Size;
    this_00 = &this->AssetPaths;
    this->BundleName = FVar2;
    TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>::Reset(this_00,(int)local_260);
    iVar12 = (int)local_260;
    uVar18 = (ulonglong)(int)local_260;
    pFVar20 = (FSoftObjectPath *)(local_268.Data + uVar18 * 0x20);
    FVar21.Data = local_268.Data;
    while( true ) {
      if ((int)uVar18 != iVar12) {
        local_258[0] = 0;
        `TCheckedPointerIterator<FSoftObjectPath,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_258);
      }
      if ((FSoftObjectPath *)FVar21.Data == pFVar20) break;
      local_1e8 = (((FSoftObjectPath *)FVar21.Data)->AssetPath).PackageName;
      FStack_1e0 = (((FSoftObjectPath *)FVar21.Data)->AssetPath).AssetName;
      pFVar16 = (FName *)(this_00->AllocatorInstance).Data;
      if (((pFVar16 <= &local_1e8) &&
          (&local_1e8 < pFVar16 + (longlong)(this->AssetPaths).ArrayMax * 2)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar3 = (code *)swi(3);
        uVar11 = (*pcVar3)();
        return (bool)uVar11;
      }
      iVar14 = (this->AssetPaths).ArrayNum;
      piVar1 = &(this->AssetPaths).ArrayMax;
      if (iVar14 == *piVar1) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x410,&this_00->AllocatorInstance,piVar1);
      }
      (this->AssetPaths).ArrayNum = iVar14 + 1;
      FVar21.Data = FVar21.Data + 0x20;
      pFVar16 = (FName *)((this_00->AllocatorInstance).Data + (longlong)iVar14 * 0x10);
      *pFVar16 = local_1e8;
      pFVar16[1] = FStack_1e0;
      uVar18 = local_260 & 0xffffffff;
    }
    bVar10 = true;
    *param_1 = local_270;
  }
  else {
    FOutputDevice::LogfImpl
              (param_4,Error,
               L"FAssetBundleEntry::ImportTextItem - Ill-formed asset bundle entry, unexpected: \'%s\'. When parsing import text \'%s\'."
              );
LAB_141e5ee28:
    bVar10 = false;
  }
  FOutputDevice::~FOutputDevice(&local_1d8);
  goto LAB_141e5ee5e;
}

