// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// AddPackageMapping @ 1420a93b0

void __thiscall
FLinkerInstancedPackageMap::AddPackageMapping
          (FLinkerInstancedPackageMap *this,FName param_1,FName param_2)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  TPairInitializer<FName_const_&,FName_const_&> local_res8;
  FName local_res18 [2];
  FName **local_38;
  FName *local_30;
  FName *local_28;
  FName **local_20;
  
  local_res8.Value = (FName *)param_1;
  local_res18[0] = param_2;
  if (this->InstanceMappingDirection == OriginalToInstanced) {
    uVar4 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    if (*(int *)&(this->InstancedPackageMapping).field_0x8 !=
        *(int *)&(this->InstancedPackageMapping).field_0x34) {
      puVar6 = *(undefined1 **)&(this->InstancedPackageMapping).field_0x40;
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &(this->InstancedPackageMapping).field_0x38;
      }
      iVar5 = *(int *)(puVar6 + (ulonglong)
                                (*(int *)&(this->InstancedPackageMapping).field_0x48 - 1U &
                                param_1.Number + uVar4) * 4);
      if (iVar5 != -1) {
        do {
          if (*(FName *)(*(longlong *)&this->InstancedPackageMapping + (longlong)iVar5 * 0x18) ==
              param_1) {
            return;
          }
          iVar5 = *(int *)(*(longlong *)&this->InstancedPackageMapping + 0x10 +
                          (longlong)iVar5 * 0x18);
        } while (iVar5 != -1);
      }
    }
    local_38 = &local_res8.Value;
    local_30 = local_res18;
    TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FName_const_&,FName_const_&>_>
              ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                *)this,&local_res8,(bool *)&local_38);
    this->bIsInstanced = (bool)(this->bIsInstanced | local_res18[0] != (FName)0x0);
    return;
  }
  if ((this->InstanceMappingDirection != InstancedToOriginal) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceMappingDirection == EInstanceMappingDirection::InstancedToOriginal"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerInstancingContext.cpp"
                         ,0x14e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FVar2 = local_res18[0];
  uVar4 = ::GetTypeHash(local_res18[0].ComparisonIndex.Value);
  if (*(int *)&(this->InstancedPackageMapping).field_0x8 !=
      *(int *)&(this->InstancedPackageMapping).field_0x34) {
    puVar6 = *(undefined1 **)&(this->InstancedPackageMapping).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->InstancedPackageMapping).field_0x38;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->InstancedPackageMapping).field_0x48 - 1U &
                              FVar2.Number + uVar4) * 4);
    if (iVar5 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this->InstancedPackageMapping + (longlong)iVar5 * 0x18) ==
            FVar2) {
          return;
        }
        iVar5 = *(int *)(*(longlong *)&this->InstancedPackageMapping + 0x10 + (longlong)iVar5 * 0x18
                        );
      } while (iVar5 != -1);
    }
  }
  local_28 = local_res18;
  local_20 = &local_res8.Value;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,FName_const_&>_>
            ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FName_const_&,FName_const_&> *)(local_res18 + 1),
             (bool *)&local_28);
  this->bIsInstanced = (bool)(this->bIsInstanced | (FName)local_res8.Value != (FName)0x0);
  return;
}

// BuildPackageMapping @ 1420aaab0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FLinkerInstancedPackageMap::BuildPackageMapping
          (FLinkerInstancedPackageMap *this,FName param_1,FName param_2,bool param_3)

{
  code *pcVar1;
  int iVar2;
  wchar_t *pwVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  FString *pFVar8;
  void *pvVar9;
  FName *pFVar10;
  int iVar11;
  ulong64 uVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  FName FVar16;
  undefined1 auStack_19e8 [32];
  FName local_19c8 [2];
  FName local_19b8;
  int iStack_19b0;
  undefined4 uStack_19ac;
  FName local_19a8;
  int iStack_19a0;
  undefined4 uStack_199c;
  wchar_t *local_1998;
  undefined4 uStack_1990;
  undefined4 uStack_198c;
  FName local_1988;
  FName local_1980;
  TStringView<wchar_t> local_1978;
  TStringView<wchar_t> local_1968;
  TStringView<wchar_t> local_1958;
  TStringView<wchar_t> local_1948;
  TStringView<wchar_t> local_1938;
  TStringView<wchar_t> local_1928;
  FString local_1918;
  FString local_1908;
  TStringBuilderBase<wchar_t> local_18f8;
  wchar_t local_18d8 [1035];
  wchar_t local_10c2 [5];
  TStringBuilderBase<wchar_t> local_10b8;
  wchar_t local_1098 [1035];
  wchar_t local_882 [5];
  TStringBuilderBase<wchar_t> local_878;
  wchar_t local_858 [1035];
  wchar_t local_42 [5];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x1420aaace;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_19e8;
  if ((((1 < (this->GeneratedPackagesFolder).Data.ArrayNum) ||
       (1 < (this->InstancedPackageSuffix).Data.ArrayNum)) ||
      (1 < (this->InstancedPackagePrefix).Data.ArrayNum)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GeneratedPackagesFolder.IsEmpty() && InstancedPackageSuffix.IsEmpty() && InstancedPackagePrefix.IsEmpty()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerInstancingContext.cpp"
                         ,0x159,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  AddPackageMapping(this,param_1,param_2);
  if ((param_3) && (this->bEnableNonEditorPath != false)) {
    local_878.Base = local_858;
    local_878.CurPos = local_858;
    local_878.End = local_42;
    local_878.bIsDynamic = false;
    local_878.bIsExternal = false;
    local_19c8[0] = param_1;
    ::FName::AppendString(local_19c8,&local_878);
    local_10b8.Base = local_1098;
    local_10b8.CurPos = local_1098;
    local_10b8.bIsDynamic = false;
    local_10b8.bIsExternal = false;
    local_10b8.End = local_882;
    local_19b8 = param_2;
    ::FName::AppendString(&local_19b8,&local_10b8);
    FVar16 = (FName)local_878.Base;
    pwVar3 = local_10b8.Base;
    iVar6 = (int)((longlong)local_10b8.CurPos - (longlong)local_10b8.Base >> 1);
    local_19a8 = (FName)local_878.Base;
    iStack_19b0 = 0;
    if (0 < iVar6) {
      iStack_19b0 = iVar6;
    }
    iVar14 = (int)((longlong)local_878.CurPos - (longlong)local_878.Base >> 1);
    local_1978._12_4_ = uStack_199c;
    local_1978.Size = iVar14;
    local_19c8[0] = (FName)local_878.Base;
    local_1978.DataPtr = local_878.Base;
    local_19b8 = (FName)(local_10b8.Base + ((longlong)iVar6 - (longlong)iStack_19b0));
    local_1968._12_4_ = uStack_19ac;
    local_1968.Size = iStack_19b0;
    iStack_19a0 = iVar14;
    local_1968.DataPtr = (wchar_t *)local_19b8;
    iVar5 = UE::String::FindFirst(&local_1968,&local_1978,IgnoreCase);
    if (iVar5 != -1) {
      iVar7 = 0;
      if (iVar6 < 0) {
        iVar7 = iVar6;
      }
      iVar11 = iVar6 - iVar7;
      if (iVar5 < iVar6 - iVar7) {
        iVar11 = iVar5;
      }
      iVar2 = 0;
      if (0 < iVar11) {
        iVar2 = iVar11;
      }
      ::FString::AssignRange(&this->InstancedPackagePrefix,pwVar3 + iVar7,iVar2);
      iVar5 = iVar14 + iVar5;
      iVar7 = 0;
      if (iVar5 < 0) {
        iVar7 = iVar5;
      }
      iVar11 = iVar5 - iVar7;
      if (iVar6 < iVar5 - iVar7) {
        iVar11 = iVar6;
      }
      iVar5 = iVar6 - iVar11;
      if (iVar7 + 0x7fffffff < iVar6 - iVar11) {
        iVar5 = iVar7 + 0x7fffffff;
      }
      iVar6 = 0;
      if (0 < iVar5) {
        iVar6 = iVar5;
      }
      ::FString::AssignRange(&this->InstancedPackageSuffix,pwVar3 + iVar11,iVar6);
    }
    if ((1 < (this->InstancedPackagePrefix).Data.ArrayNum) ||
       (1 < (this->InstancedPackageSuffix).Data.ArrayNum)) {
      uStack_1990 = 0xd;
      iStack_19a0 = 0;
      if (0 < iVar14) {
        iStack_19a0 = iVar14;
      }
      local_1998 = L"/_Generated_/";
      local_1958._12_4_ = uStack_198c;
      local_1958.Size = 0xd;
      local_1958.DataPtr = L"/_Generated_/";
      local_19a8 = (FName)((longlong)FVar16 + ((longlong)iVar14 - (longlong)iStack_19a0) * 2);
      local_1948._12_4_ = uStack_199c;
      local_1948.Size = iStack_19a0;
      local_1948.DataPtr = (wchar_t *)local_19a8;
      iVar6 = UE::String::FindFirst(&local_1948,&local_1958,IgnoreCase);
      if (iVar6 != -1) {
        iVar5 = iVar6 + 0xd;
        uStack_1990 = 1;
        local_1998 = L"/";
        local_1938._12_4_ = uStack_198c;
        local_1938.Size = 1;
        local_1938.DataPtr = L"/";
        iVar7 = iVar14;
        if (iVar14 - iVar5 < iVar14) {
          iVar7 = iVar14 - iVar5;
        }
        iStack_19a0 = 0;
        if (0 < iVar7) {
          iStack_19a0 = iVar7;
        }
        local_19a8 = (FName)((longlong)FVar16 + ((longlong)iVar14 - (longlong)iStack_19a0) * 2);
        local_1928._12_4_ = uStack_199c;
        local_1928.Size = iStack_19a0;
        local_1928.DataPtr = (wchar_t *)local_19a8;
        iVar7 = UE::String::FindFirst(&local_1928,&local_1938,IgnoreCase);
        if ((iVar7 == -1) || (iVar7 + iVar5 == -1)) {
          iVar7 = iVar14;
          if (iVar5 < iVar14) {
            iVar7 = iVar5;
          }
          iVar5 = 0;
          iVar11 = iVar5;
          if (0 < iVar7) {
            iVar11 = iVar7;
          }
          ::FString::AssignRange(&this->GeneratedPackagesFolder,(wchar_t *)FVar16,iVar11);
          iVar7 = iVar14;
          if (iVar6 < iVar14) {
            iVar7 = iVar6;
          }
          pFVar15 = (FScriptContainerElement *)0x0;
          iVar6 = iVar5;
          if (0 < iVar7) {
            iVar6 = iVar7;
          }
          pFVar8 = ::FString::ConstructFromPtrSize(&local_1918,(wchar_t *)FVar16,iVar6);
          if (&local_1908 != pFVar8) {
            pFVar15 = (pFVar8->Data).AllocatorInstance.Data;
            (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            iVar5 = (pFVar8->Data).ArrayNum;
            (pFVar8->Data).ArrayNum = 0;
            (pFVar8->Data).ArrayMax = 0;
          }
          if (local_1918.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1918.Data.AllocatorInstance.Data);
          }
          local_19b8 = (FName)(this->InstancedPackagePrefix).Data.AllocatorInstance.Data;
          local_18f8.Base = local_18d8;
          local_18f8.End = local_10c2;
          local_18f8.bIsDynamic = false;
          local_18f8.bIsExternal = false;
          local_18f8.CurPos = local_18d8;
          iVar7 = (this->InstancedPackagePrefix).Data.ArrayNum;
          iVar6 = iVar7 + -1;
          if (iVar7 == 0) {
            iVar6 = 0;
          }
          uVar12 = (ulong64)iVar6;
          if (local_10c2 < local_18d8 + uVar12) {
            TStringBuilderBase<wchar_t>::Extend(&local_18f8,uVar12);
          }
          if (iVar6 != 0) {
            pvVar9 = FGenericPlatformString::Memcpy(local_18f8.CurPos,(void *)local_19b8,uVar12 * 2)
            ;
            local_18f8.CurPos = (wchar_t *)((longlong)pvVar9 + uVar12 * 2);
          }
          iVar6 = iVar5 + -1;
          if (iVar5 == 0) {
            iVar6 = 0;
          }
          uVar12 = (ulong64)iVar6;
          if (local_18f8.End < local_18f8.CurPos + uVar12) {
            TStringBuilderBase<wchar_t>::Extend(&local_18f8,uVar12);
          }
          if (iVar6 != 0) {
            pvVar9 = FGenericPlatformString::Memcpy(local_18f8.CurPos,pFVar15,uVar12 * 2);
            local_18f8.CurPos = (wchar_t *)((longlong)pvVar9 + uVar12 * 2);
          }
          iVar7 = (this->InstancedPackageSuffix).Data.ArrayNum;
          local_19b8 = (FName)(this->InstancedPackageSuffix).Data.AllocatorInstance.Data;
          iVar6 = iVar7 + -1;
          if (iVar7 == 0) {
            iVar6 = 0;
          }
          uVar12 = (ulong64)iVar6;
          if (local_18f8.End < local_18f8.CurPos + uVar12) {
            TStringBuilderBase<wchar_t>::Extend(&local_18f8,uVar12);
          }
          if (iVar6 != 0) {
            pvVar9 = FGenericPlatformString::Memcpy(local_18f8.CurPos,(void *)local_19b8,uVar12 * 2)
            ;
            local_18f8.CurPos = (wchar_t *)((longlong)pvVar9 + uVar12 * 2);
          }
          pFVar10 = ::FName::FName(&local_1988,
                                   (int)((longlong)local_18f8.CurPos - (longlong)local_18f8.Base >>
                                        1),local_18f8.Base,FNAME_Add);
          pFVar13 = (FScriptContainerElement *)L"";
          if (iVar5 != 0) {
            pFVar13 = pFVar15;
          }
          FVar16 = *pFVar10;
          pFVar10 = ::FName::FName(&local_1980,(wchar_t *)pFVar13);
          AddPackageMapping(this,*pFVar10,FVar16);
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_18f8);
          FVar16 = local_19c8[0];
          if (pFVar15 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar15);
            FVar16 = local_19c8[0];
          }
        }
      }
      if ((this->GeneratedPackagesFolder).Data.ArrayNum < 2) {
        ::FString::AssignRange(&this->GeneratedPackagesFolder,(wchar_t *)FVar16,iVar14);
        ::FString::AppendChars(&this->GeneratedPackagesFolder,L"/_Generated_/",0xd);
      }
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_10b8);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_878);
  }
  return;
}

// FixupSoftObjectPath @ 1420b8520

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FLinkerInstancedPackageMap::FixupSoftObjectPath
          (FLinkerInstancedPackageMap *this,FSoftObjectPath *param_1)

{
  FName FVar1;
  code *pcVar2;
  FName FVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FName *pFVar11;
  FString *pFVar12;
  FUtf8String *pFVar13;
  void *pvVar14;
  FSoftObjectPath *pFVar15;
  ulong64 uVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined1 auStack_12e8 [32];
  FString local_12c8;
  wchar_t *local_12b8;
  FTopLevelAssetPath local_12a8;
  FTopLevelAssetPath local_1298;
  wchar_t *local_1288;
  int iStack_1280;
  undefined4 uStack_127c;
  FName local_1278;
  int iStack_1270;
  undefined4 uStack_126c;
  FString local_1268;
  FSoftObjectPath local_1258;
  longlong local_1238;
  TStringOverload<FUtf8String> local_1230;
  TStringOverload<FString> local_1220;
  FScriptContainerElement *local_1208;
  int iStack_1200;
  undefined4 uStack_11fc;
  FName local_11f8;
  FString local_11f0;
  FUtf8String local_11e0;
  FTopLevelAssetPath local_11c8;
  TStringView<wchar_t> local_11b8;
  TStringView<wchar_t> local_11a8;
  TStringView<wchar_t> local_1198;
  TStringView<wchar_t> local_1188;
  FString local_1178;
  FString local_1168;
  FTopLevelAssetPath local_1158;
  FName local_1148;
  FName FStack_1140;
  FString local_1138;
  FUtf8String local_1128;
  FName local_1118;
  FName FStack_1110;
  FString local_1108;
  FSoftObjectPath local_10f8;
  TStringBuilderBase<wchar_t> local_10d8;
  wchar_t local_10b8 [1035];
  wchar_t local_8a2 [5];
  TStringBuilderBase<wchar_t> local_898;
  wchar_t local_878 [1035];
  wchar_t local_62 [5];
  ulonglong local_58;
  undefined8 uStack_40;
  
  uStack_40 = 0x1420b8542;
  local_58 = __security_cookie.value ^ (ulonglong)auStack_12e8;
  pFVar18 = (FScriptContainerElement *)0x0;
  iVar10 = 0;
  local_12b8 = (wchar_t *)((ulonglong)local_12b8 & 0xffffffff00000000);
  if (this->bIsInstanced == false) {
    return false;
  }
  FVar3 = (param_1->AssetPath).PackageName;
  FStack_1140 = (param_1->AssetPath).AssetName;
  local_1148 = FVar3;
  pFVar11 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>::
            Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                  *)this,FVar3);
  iVar20 = 0;
  if ((pFVar11 != (FName *)0x0) && (FVar1 = *pFVar11, FVar1 != FVar3)) {
    iVar19 = (param_1->SubPathString).Data.ArrayNum;
    iVar7 = iVar19 + -1;
    if (iVar19 == 0) {
      iVar7 = iVar10;
    }
    pFVar12 = ::FString::ConstructFromPtrSize
                        (&local_11f0,(uchar *)(param_1->SubPathString).Data.AllocatorInstance.Data,
                         iVar7);
    pFVar17 = pFVar18;
    iVar19 = iVar10;
    if (&local_1138 != pFVar12) {
      pFVar17 = (pFVar12->Data).AllocatorInstance.Data;
      (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar19 = (pFVar12->Data).ArrayNum;
      (pFVar12->Data).ArrayNum = 0;
      (pFVar12->Data).ArrayMax = 0;
    }
    if (local_11f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_11f0.Data.AllocatorInstance.Data);
    }
    local_12a8.PackageName.ComparisonIndex.Value = 0;
    local_12a8.PackageName.Number = 0;
    local_12a8.AssetName.ComparisonIndex.Value = 0;
    local_12a8.AssetName.Number = 0;
    FTopLevelAssetPath::TrySetPath(&local_12a8,FVar1,(param_1->AssetPath).AssetName);
    local_11c8.PackageName = local_12a8.PackageName;
    local_11c8.AssetName = local_12a8.AssetName;
    local_1258.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_1258.AssetPath.PackageName.Number = 0;
    local_1258.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_1258.AssetPath.AssetName.Number = 0;
    local_1258.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1258.SubPathString.Data.ArrayNum = 0;
    local_1258.SubPathString.Data.ArrayMax = 0;
    iVar7 = iVar19 + -1;
    if (iVar19 == 0) {
      iVar7 = iVar10;
    }
    pFVar13 = FUtf8String::ConstructFromPtrSize(&local_11e0,(wchar_t *)pFVar17,iVar7);
    if (&local_1128 != pFVar13) {
      pFVar18 = (pFVar13->Data).AllocatorInstance.Data;
      (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar10 = (pFVar13->Data).ArrayNum;
      iVar20 = (pFVar13->Data).ArrayMax;
      (pFVar13->Data).ArrayNum = 0;
      (pFVar13->Data).ArrayMax = 0;
    }
    if (local_11e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_11e0.Data.AllocatorInstance.Data);
    }
    local_1230.String.Data.AllocatorInstance.Data = pFVar18;
    local_1230.String.Data.ArrayNum = iVar10;
    local_1230.String.Data.ArrayMax = iVar20;
    FSoftObjectPath::SetPath(&local_1258,&local_11c8,&local_1230);
    if (pFVar17 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar17);
    }
    FSoftObjectPath::operator=(param_1,&local_1258);
    if (local_1258.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1258.SubPathString.Data.AllocatorInstance.Data);
    }
    return true;
  }
  if ((this->GeneratedPackagesFolder).Data.ArrayNum < 2) {
    return false;
  }
  if ((((this->InstancedPackagePrefix).Data.ArrayNum < 2) &&
      ((this->InstancedPackageSuffix).Data.ArrayNum < 2)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InstancedPackagePrefix.IsEmpty() || !InstancedPackageSuffix.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerInstancingContext.cpp"
                         ,0x1a4,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  local_898.Base = local_878;
  local_898.bIsDynamic = false;
  local_898.bIsExternal = false;
  local_898.CurPos = local_878;
  local_898.End = local_62;
  FSoftObjectPath::ToString(param_1,&local_898);
  local_1208 = (this->GeneratedPackagesFolder).Data.AllocatorInstance.Data;
  iVar10 = (this->GeneratedPackagesFolder).Data.ArrayNum;
  local_12b8 = local_898.Base;
  iStack_1200 = iVar10 + -1;
  if (iVar10 == 0) {
    iStack_1200 = iVar20;
  }
  iVar10 = (int)((longlong)local_898.CurPos - (longlong)local_898.Base >> 1);
  local_11b8._12_4_ = uStack_11fc;
  local_11b8.Size = iStack_1200;
  iVar19 = 0;
  iStack_1280 = iVar19;
  if (0 < iVar10) {
    iStack_1280 = iVar10;
  }
  local_1238 = (longlong)iVar10;
  local_1288 = local_898.Base + (local_1238 - iStack_1280);
  local_11a8._12_4_ = uStack_127c;
  local_11a8.Size = iStack_1280;
  local_11b8.DataPtr = (wchar_t *)local_1208;
  local_11a8.DataPtr = local_1288;
  iVar7 = UE::String::FindFirst(&local_11a8,&local_11b8,IgnoreCase);
  if (iVar7 == -1) goto LAB_1420b8d40;
  if (iVar7 != 0) {
    iVar8 = (this->InstancedPackagePrefix).Data.ArrayNum;
    iVar9 = iVar8 + -1;
    if (iVar8 == 0) {
      iVar9 = iVar19;
    }
    iVar8 = iVar10;
    if (iVar9 < iVar10) {
      iVar8 = iVar9;
    }
    iVar21 = iVar19;
    if (0 < iVar8) {
      iVar21 = iVar8;
    }
    if ((iVar9 == iVar21) &&
       ((((iVar9 == 0 || (iVar21 == 0)) ||
         (iVar8 = FGenericPlatformStricmp::Strnicmp
                            ((wchar_t *)(this->InstancedPackagePrefix).Data.AllocatorInstance.Data,
                             local_12b8,(longlong)iVar21), iVar8 == 0)) && (iVar9 == iVar21)))) {
      iVar8 = (this->InstancedPackagePrefix).Data.ArrayNum;
      iVar9 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar9 = iVar19;
      }
      if (iVar7 == iVar9) goto LAB_1420b8831;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("GeneratedFolderIndex == 0 || (TmpSoftObjectPathView.StartsWith(InstancedPackagePrefix) && GeneratedFolderIndex == InstancedPackagePrefix.Len())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerInstancingContext.cpp"
                       ,0x1ad,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
LAB_1420b8831:
  iVar8 = (this->InstancedPackagePrefix).Data.ArrayNum;
  iVar9 = (this->GeneratedPackagesFolder).Data.ArrayNum;
  iStack_1280 = 1;
  iVar21 = iVar8 + -1;
  if (iVar8 == 0) {
    iVar21 = iVar20;
  }
  iVar8 = iVar9 + -1;
  if (iVar9 == 0) {
    iVar8 = iVar20;
  }
  local_1288 = L"/";
  local_1198._12_4_ = uStack_127c;
  local_1198.Size = 1;
  iVar9 = iVar10 - (iVar21 + iVar8);
  local_1198.DataPtr = L"/";
  if (iVar9 < iVar10) {
    iVar10 = iVar9;
  }
  iStack_1270 = iVar19;
  if (0 < iVar10) {
    iStack_1270 = iVar10;
  }
  local_1278 = (FName)(local_12b8 + (local_1238 - iStack_1270));
  local_1188._12_4_ = uStack_126c;
  local_1188.Size = iStack_1270;
  local_1188.DataPtr = (wchar_t *)local_1278;
  iVar10 = UE::String::FindFirst(&local_1188,&local_1198,IgnoreCase);
  if ((iVar10 == -1) || (iVar10 + iVar21 + iVar8 == -1)) {
    local_10d8.Base = local_10b8;
    local_10d8.CurPos = local_10b8;
    local_10d8.End = local_8a2;
    local_10d8.bIsDynamic = false;
    local_10d8.bIsExternal = false;
    if (this->InstanceMappingDirection == OriginalToInstanced) {
      iVar10 = (this->InstancedPackagePrefix).Data.ArrayNum;
      pFVar17 = (this->InstancedPackagePrefix).Data.AllocatorInstance.Data;
      iVar8 = iVar10 + -1;
      if (iVar10 == 0) {
        iVar8 = iVar19;
      }
      uVar16 = (ulong64)iVar8;
      if (local_8a2 < local_10b8 + uVar16) {
        TStringBuilderBase<wchar_t>::Extend(&local_10d8,uVar16);
      }
      if (iVar8 != 0) {
        pvVar14 = FGenericPlatformString::Memcpy(local_10d8.CurPos,pFVar17,uVar16 * 2);
        local_10d8.CurPos = (wchar_t *)((longlong)pvVar14 + uVar16 * 2);
      }
    }
    local_1278 = (param_1->AssetPath).PackageName;
    local_1118 = local_1278;
    FStack_1110 = (param_1->AssetPath).AssetName;
    bVar5 = local_1278 != (FName)0x0;
    if (bVar5) {
      pFVar12 = ::FName::ToString(&local_1278,&local_1178);
    }
    else {
      local_1268.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar12 = &local_1268;
      local_1268.Data.ArrayNum = 0;
      local_1268.Data.ArrayMax = 0;
    }
    local_12c8.Data.AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
    (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_12c8.Data.ArrayNum = (pFVar12->Data).ArrayNum;
    local_12c8.Data.ArrayMax = (pFVar12->Data).ArrayMax;
    (pFVar12->Data).ArrayNum = 0;
    (pFVar12->Data).ArrayMax = 0;
    if ((bVar5) && (local_1178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_1178.Data.AllocatorInstance.Data);
    }
    if ((!bVar5) && (local_1268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_1268.Data.AllocatorInstance.Data);
    }
    ::FString::RemoveAt(&local_12c8,0,iVar7,No);
    FVar4.Data = local_12c8.Data.AllocatorInstance.Data;
    bVar5 = local_12c8.Data.ArrayNum == 0;
    local_12c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar10 = local_12c8.Data.ArrayNum + -1;
    local_12c8.Data.ArrayNum = 0;
    local_12c8.Data.ArrayMax = 0;
    if (bVar5) {
      iVar10 = iVar20;
    }
    uVar16 = (ulong64)iVar10;
    if (local_10d8.End < local_10d8.CurPos + uVar16) {
      TStringBuilderBase<wchar_t>::Extend(&local_10d8,uVar16);
    }
    if (iVar10 != 0) {
      pvVar14 = FGenericPlatformString::Memcpy(local_10d8.CurPos,FVar4.Data,uVar16 * 2);
      local_10d8.CurPos = (wchar_t *)((longlong)pvVar14 + uVar16 * 2);
    }
    if (FVar4.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar4.Data);
    }
    if (local_12c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_12c8.Data.AllocatorInstance.Data);
    }
    if (this->InstanceMappingDirection == OriginalToInstanced) {
      iVar10 = (this->InstancedPackageSuffix).Data.ArrayNum;
      iVar8 = (int)((longlong)local_10d8.CurPos - (longlong)local_10d8.Base >> 1);
      iVar7 = iVar10 + -1;
      if (iVar10 == 0) {
        iVar7 = iVar20;
      }
      iVar10 = iVar8;
      if (iVar7 < iVar8) {
        iVar10 = iVar7;
      }
      iVar9 = iVar19;
      if (0 < iVar10) {
        iVar9 = iVar10;
      }
      if (((iVar7 != iVar9) ||
          (((iVar7 != 0 && (iVar9 != 0)) &&
           (iVar10 = FGenericPlatformStricmp::Strnicmp
                               ((wchar_t *)
                                (this->InstancedPackageSuffix).Data.AllocatorInstance.Data,
                                local_10d8.Base + ((longlong)iVar8 - (longlong)iVar9),
                                (longlong)iVar9), iVar10 != 0)))) || (iVar7 != iVar9)) {
        iVar10 = (this->InstancedPackageSuffix).Data.ArrayNum;
        pFVar17 = (this->InstancedPackageSuffix).Data.AllocatorInstance.Data;
        iVar7 = iVar10 + -1;
        if (iVar10 == 0) {
          iVar7 = iVar19;
        }
        uVar16 = (ulong64)iVar7;
        if (local_10d8.End < local_10d8.CurPos + uVar16) {
          TStringBuilderBase<wchar_t>::Extend(&local_10d8,uVar16);
        }
        if (iVar7 != 0) {
          pvVar14 = FGenericPlatformString::Memcpy(local_10d8.CurPos,pFVar17,uVar16 * 2);
          local_10d8.CurPos = (wchar_t *)((longlong)pvVar14 + uVar16 * 2);
        }
      }
    }
    else {
      if ((this->InstanceMappingDirection != InstancedToOriginal) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InstanceMappingDirection == EInstanceMappingDirection::InstancedToOriginal"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerInstancingContext.cpp"
                             ,0x1c4,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      iVar10 = (this->InstancedPackageSuffix).Data.ArrayNum;
      iVar8 = (int)((longlong)local_10d8.CurPos - (longlong)local_10d8.Base >> 1);
      iVar7 = iVar10 + -1;
      if (iVar10 == 0) {
        iVar7 = iVar20;
      }
      iVar10 = iVar8;
      if (iVar7 < iVar8) {
        iVar10 = iVar7;
      }
      iVar9 = iVar20;
      if (0 < iVar10) {
        iVar9 = iVar10;
      }
      if ((iVar7 == iVar9) &&
         ((((iVar7 == 0 || (iVar9 == 0)) ||
           (iVar10 = FGenericPlatformStricmp::Strnicmp
                               ((wchar_t *)
                                (this->InstancedPackageSuffix).Data.AllocatorInstance.Data,
                                local_10d8.Base + ((longlong)iVar8 - (longlong)iVar9),
                                (longlong)iVar9), iVar10 == 0)) && (iVar7 == iVar9)))) {
        iVar10 = (this->InstancedPackageSuffix).Data.ArrayNum;
        iVar7 = iVar10 + -1;
        if (iVar10 == 0) {
          iVar7 = iVar19;
        }
        if (((int)((longlong)local_10d8.CurPos - (longlong)local_10d8.Base >> 1) < iVar7) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount <= Len()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                               ,0xe8,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          uVar6 = (*pcVar2)();
          return (bool)uVar6;
        }
        local_10d8.CurPos = local_10d8.CurPos + -(longlong)iVar7;
      }
    }
    FVar3 = (param_1->AssetPath).AssetName;
    pFVar11 = ::FName::FName(&local_11f8,
                             (int)((longlong)local_10d8.CurPos - (longlong)local_10d8.Base >> 1),
                             local_10d8.Base,FNAME_Add);
    local_1298.PackageName.ComparisonIndex.Value = 0;
    local_1298.PackageName.Number = 0;
    local_1298.AssetName.ComparisonIndex.Value = 0;
    local_1298.AssetName.Number = 0;
    FTopLevelAssetPath::TrySetPath(&local_1298,*pFVar11,FVar3);
    iVar10 = (param_1->SubPathString).Data.ArrayNum;
    iVar7 = iVar10 + -1;
    if (iVar10 == 0) {
      iVar7 = iVar19;
    }
    pFVar12 = ::FString::ConstructFromPtrSize
                        (&local_1168,(uchar *)(param_1->SubPathString).Data.AllocatorInstance.Data,
                         iVar7);
    local_1220.String.Data.ArrayMax = iVar20;
    if (&local_1108 != pFVar12) {
      pFVar18 = (pFVar12->Data).AllocatorInstance.Data;
      (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar20 = (pFVar12->Data).ArrayNum;
      local_1220.String.Data.ArrayMax = (pFVar12->Data).ArrayMax;
      (pFVar12->Data).ArrayNum = 0;
      (pFVar12->Data).ArrayMax = 0;
    }
    if (local_1168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1168.Data.AllocatorInstance.Data);
    }
    local_1158.PackageName = local_1298.PackageName;
    local_1158.AssetName = local_1298.AssetName;
    local_1220.String.Data.AllocatorInstance.Data = pFVar18;
    local_1220.String.Data.ArrayNum = iVar20;
    pFVar15 = FSoftObjectPath::FSoftObjectPath(&local_10f8,&local_1158,&local_1220);
    FSoftObjectPath::operator=(param_1,pFVar15);
    if (local_10f8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_10f8.SubPathString.Data.AllocatorInstance.Data);
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_10d8);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_898);
    return true;
  }
LAB_1420b8d40:
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_898);
  return false;
}

