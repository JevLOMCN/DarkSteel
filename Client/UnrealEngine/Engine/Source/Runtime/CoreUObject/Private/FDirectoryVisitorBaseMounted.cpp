// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// FDirectoryVisitorBaseMounted @ 14212b4b0

FDirectoryVisitorBaseMounted * __thiscall
FPackageResourceManagerFile::FDirectoryVisitorBaseMounted::FDirectoryVisitorBaseMounted
          (FDirectoryVisitorBaseMounted *this,TStringView<wchar_t> *param_1,
          TStringView<wchar_t> *param_2,TStringView<wchar_t> *param_3)

{
  FString *pFVar1;
  FString *pFVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  FScriptContainerElement *pFVar5;
  wchar_t *pwVar6;
  int iVar7;
  undefined4 uVar8;
  FString *pFVar9;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  pwVar6 = param_1->DataPtr;
  iVar7 = param_1->Size;
  uVar8 = *(undefined4 *)&param_1->field_0xc;
  pFVar1 = &this->FileMount;
  pFVar2 = &this->RootDir;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FileMount).Data.ArrayNum = 0;
  (this->FileMount).Data.ArrayMax = 0;
  uVar3 = *(undefined8 *)&param_2->Size;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootDir).Data.ArrayNum = 0;
  (this->RootDir).Data.ArrayMax = 0;
  pwVar4 = param_2->DataPtr;
  (this->PackageMount).DataPtr = pwVar6;
  (this->PackageMount).Size = iVar7;
  *(undefined4 *)&(this->PackageMount).field_0xc = uVar8;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  pFVar9 = ::FString::ConstructFromPtrSize(&local_38,pwVar4,(int)uVar3);
  if (&local_68 != pFVar9) {
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    local_68.Data.AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
    (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = (pFVar9->Data).ArrayNum;
    local_68.Data.ArrayMax = (pFVar9->Data).ArrayMax;
    (pFVar9->Data).ArrayNum = 0;
    (pFVar9->Data).ArrayMax = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pFVar9 = FPaths::ConvertRelativePathToFull(&local_28,&local_68);
  if (pFVar1 != pFVar9) {
    pFVar5 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
    (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->FileMount).Data.ArrayNum = (pFVar9->Data).ArrayNum;
    (this->FileMount).Data.ArrayMax = (pFVar9->Data).ArrayMax;
    (pFVar9->Data).ArrayNum = 0;
    (pFVar9->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  pFVar9 = ::FString::ConstructFromPtrSize
                     (&local_28,param_3->DataPtr,(int)*(undefined8 *)&param_3->Size);
  if (&local_58 != pFVar9) {
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    local_58.Data.AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
    (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = (pFVar9->Data).ArrayNum;
    local_58.Data.ArrayMax = (pFVar9->Data).ArrayMax;
    (pFVar9->Data).ArrayNum = 0;
    (pFVar9->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::ConcatFF(&local_48,pFVar1,&local_58);
  if (pFVar2 != &local_48) {
    pFVar5 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar2->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    (this->RootDir).Data.ArrayNum = local_48.Data.ArrayNum;
    (this->RootDir).Data.ArrayMax = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return this;
}

// TryConvertToPackageVisit @ 142152fc0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FPackageResourceManagerFile::FDirectoryVisitorBaseMounted::TryConvertToPackageVisit
          (FDirectoryVisitorBaseMounted *this,wchar_t *param_1,bool param_2,FPackagePath *param_3,
          EPackageSegment *param_4)

{
  FScriptContainerElement *pFVar1;
  undefined3 uVar2;
  EPackageExtension EVar3;
  EPackageSegment EVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  size_t sVar8;
  FString *pFVar9;
  FPackagePath *pFVar10;
  bool bVar11;
  EPackageExtension EVar12;
  int iVar13;
  int iVar14;
  int local_res18 [2];
  undefined1 local_88 [16];
  FString local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  
  if (param_2) {
    return false;
  }
  iVar14 = 0;
  if (param_1 != (wchar_t *)0x0) {
    sVar8 = wcslen(param_1);
    iVar14 = (int)sVar8;
  }
  iVar5 = (this->FileMount).Data.ArrayNum;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  iVar7 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar7 = 0;
  }
  iVar5 = iVar14;
  if (iVar7 < iVar14) {
    iVar5 = iVar7;
  }
  iVar13 = 0;
  if (0 < iVar5) {
    iVar13 = iVar5;
  }
  iVar5 = 0;
  if (iVar7 == iVar13) {
    if ((iVar7 != 0) && (iVar13 != 0)) {
      iVar6 = FGenericPlatformStricmp::Strnicmp
                        ((wchar_t *)(this->FileMount).Data.AllocatorInstance.Data,param_1,
                         (longlong)iVar13);
      if (iVar6 != 0) goto LAB_14215307a;
    }
    iVar6 = iVar14;
    if (iVar7 != iVar13) goto LAB_14215307a;
LAB_142153153:
    iVar7 = (this->FileMount).Data.ArrayNum;
    iVar13 = iVar7 + -1;
    if (iVar7 == 0) {
      iVar13 = iVar5;
    }
    if (iVar6 - iVar13 < iVar6) {
      iVar14 = iVar6 - iVar13;
    }
    iVar7 = 0;
    if (0 < iVar14) {
      iVar7 = iVar14;
    }
    local_68.Size = iVar7;
    pFVar1 = (FScriptContainerElement *)
             ((longlong)param_1 + ((longlong)iVar6 - (longlong)iVar7) * 2);
    local_58.Size = iVar7;
    local_58._12_4_ = local_68._12_4_;
    local_68.DataPtr = (wchar_t *)pFVar1;
    local_58.DataPtr = (wchar_t *)pFVar1;
    EVar3 = FPackagePath::ParseExtension(&local_58,local_res18);
    if ((EVar3 != Custom) && (EVar3 != Unspecified)) {
      if (local_res18[0] < iVar7) {
        iVar7 = local_res18[0];
      }
      EVar4 = ExtensionToSegment(EVar3);
      local_88._8_8_ = 0;
      local_88._0_4_ = 0;
      local_88._4_4_ = 0;
      *param_4 = EVar4;
      local_58.DataPtr = (wchar_t *)(this->FileMount).Data.AllocatorInstance.Data;
      local_68.Size = iVar5;
      if (0 < iVar7) {
        local_68.Size = iVar7;
      }
      local_68._12_4_ = local_38._12_4_;
      iVar14 = (this->FileMount).Data.ArrayNum;
      local_38.DataPtr = (this->PackageMount).DataPtr;
      local_38.Size = (this->PackageMount).Size;
      local_38._12_4_ = *(undefined4 *)&(this->PackageMount).field_0xc;
      local_48.DataPtr = (wchar_t *)0x0;
      local_48.Size = 0;
      local_48._12_4_ = 0;
      iVar7 = iVar14 + -1;
      if (iVar14 == 0) {
        iVar7 = iVar5;
      }
      local_58.Size = iVar7;
      EVar12 = Unspecified;
      if (EVar4 == Header) {
        EVar12 = EVar3;
      }
      local_68.DataPtr = (wchar_t *)pFVar1;
      pFVar10 = FPackagePath::FromMountedComponents
                          ((FPackagePath *)local_88,&local_38,&local_58,&local_68,EVar12,&local_48);
      bVar11 = true;
      param_3->PackageName = pFVar10->PackageName;
      uVar2 = *(undefined3 *)&pFVar10->field_0x9;
      param_3->HeaderExtension = pFVar10->HeaderExtension;
      *(undefined3 *)&param_3->field_0x9 = uVar2;
      goto LAB_1421532a1;
    }
  }
  else {
LAB_14215307a:
    ::FString::AssignRange(&local_78,param_1,iVar14);
    pFVar9 = FPaths::ConvertRelativePathToFull((FString *)&local_58,&local_78);
    if (&local_78 != pFVar9) {
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      local_78.Data.AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
      (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.Data.ArrayNum = (pFVar9->Data).ArrayNum;
      local_78.Data.ArrayMax = (pFVar9->Data).ArrayMax;
      (pFVar9->Data).ArrayNum = 0;
      (pFVar9->Data).ArrayMax = 0;
    }
    if ((FScriptContainerElement *)local_58.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.DataPtr);
    }
    iVar7 = (this->FileMount).Data.ArrayNum;
    iVar14 = local_78.Data.ArrayNum + -1;
    if (local_78.Data.ArrayNum == 0) {
      iVar14 = 0;
    }
    local_68.Size = iVar14;
    local_68.DataPtr = (wchar_t *)local_78.Data.AllocatorInstance.Data;
    iVar13 = iVar7 + -1;
    if (iVar7 == 0) {
      iVar13 = 0;
    }
    iVar7 = iVar14;
    if (iVar13 < iVar14) {
      iVar7 = iVar13;
    }
    iVar6 = iVar5;
    if (0 < iVar7) {
      iVar6 = iVar7;
    }
    if (((iVar13 == iVar6) &&
        (((iVar13 == 0 || (iVar6 == 0)) ||
         (iVar7 = FGenericPlatformStricmp::Strnicmp
                            ((wchar_t *)(this->FileMount).Data.AllocatorInstance.Data,
                             (wchar_t *)local_78.Data.AllocatorInstance.Data,(longlong)iVar6),
         iVar7 == 0)))) && (iVar13 == iVar6)) {
      param_1 = local_68.DataPtr;
      iVar6 = local_68.Size;
      goto LAB_142153153;
    }
    if (2 < (byte)LogPackageResourceManager._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&LogPackageResourceManager);
    }
  }
  bVar11 = false;
LAB_1421532a1:
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return bVar11;
}

