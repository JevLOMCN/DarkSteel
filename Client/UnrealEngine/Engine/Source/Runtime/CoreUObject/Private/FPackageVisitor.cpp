// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// Visit @ 142154ed0

bool __thiscall
`FPackageResourceManagerFile::IteratePackagesInLocalOnlyDirectory'::__l2::FPackageVisitor::Visit
          (void *this,wchar_t *param_1,bool param_2)

{
  wchar_t *pwVar1;
  undefined4 uVar2;
  EPackageExtension EVar3;
  EPackageSegment EVar4;
  undefined1 uVar5;
  int iVar6;
  size_t sVar7;
  FPackagePath *pFVar8;
  EPackageSegment local_res18 [16];
  FName local_48;
  uint local_40;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28 [2];
  
  iVar6 = 0;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  local_40 = local_40 & 0xffffff00;
  if (!param_2) {
    local_38.DataPtr = param_1;
    if (param_1 != (wchar_t *)0x0) {
      sVar7 = wcslen(param_1);
      iVar6 = (int)sVar7;
    }
    uVar2 = local_38._12_4_;
    pwVar1 = local_38.DataPtr;
    local_38.Size = iVar6;
    EVar3 = FPackagePath::ParseExtension(&local_38,(int *)local_res18);
    if ((EVar3 != Custom) && (EVar3 != Unspecified)) {
      EVar4 = ExtensionToSegment(EVar3);
      local_28[0].DataPtr = pwVar1;
      local_28[0].Size = iVar6;
      local_28[0]._12_4_ = uVar2;
      pFVar8 = FPackagePath::FromLocalPath((FPackagePath *)&local_38,local_28);
      local_48 = pFVar8->PackageName;
      local_40 = *(uint *)&pFVar8->HeaderExtension;
      local_res18[0] = EVar4;
      uVar5 = (**(code **)((longlong)this + 0x20))
                        (*(undefined8 *)((longlong)this + 0x28),&local_48,local_res18);
      return (bool)uVar5;
    }
  }
  return true;
}

// Visit @ 142154fb0

bool __thiscall
`FPackageResourceManagerFile::IteratePackagesInPath'::__l2::FPackageVisitor::Visit
          (void *this,wchar_t *param_1,bool param_2)

{
  bool bVar1;
  undefined1 uVar2;
  EPackageSegment local_res8 [32];
  FPackagePath local_18;
  
  local_18.PackageName.ComparisonIndex.Value = 0;
  local_18.PackageName.Number = 0;
  local_18.HeaderExtension = Unspecified;
  bVar1 = FPackageResourceManagerFile::FDirectoryVisitorBaseMounted::TryConvertToPackageVisit
                    ((FDirectoryVisitorBaseMounted *)((longlong)this + 0x10),param_1,param_2,
                     &local_18,local_res8);
  if (!bVar1) {
    return true;
  }
  uVar2 = (**(code **)((longlong)this + 0x40))
                    (*(undefined8 *)((longlong)this + 0x48),&local_18,local_res8);
  return (bool)uVar2;
}

// Visit @ 142155020

bool __thiscall
`FPackageResourceManagerFile::IteratePackagesStatInLocalOnlyDirectory'::__l2::FPackageVisitor::Visit
          (void *this,wchar_t *param_1,FFileStatData *param_2)

{
  wchar_t *pwVar1;
  undefined4 uVar2;
  EPackageExtension EVar3;
  EPackageSegment EVar4;
  undefined1 uVar5;
  int iVar6;
  size_t sVar7;
  FPackagePath *pFVar8;
  EPackageSegment local_res8 [8];
  FName local_48;
  uint local_40;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28 [2];
  
  iVar6 = 0;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  local_40 = local_40 & 0xffffff00;
  if (!param_2->bIsDirectory) {
    local_38.DataPtr = param_1;
    if (param_1 != (wchar_t *)0x0) {
      sVar7 = wcslen(param_1);
      iVar6 = (int)sVar7;
    }
    uVar2 = local_38._12_4_;
    pwVar1 = local_38.DataPtr;
    local_38.Size = iVar6;
    EVar3 = FPackagePath::ParseExtension(&local_38,(int *)local_res8);
    if ((EVar3 != Custom) && (EVar3 != Unspecified)) {
      EVar4 = ExtensionToSegment(EVar3);
      local_28[0].DataPtr = pwVar1;
      local_28[0].Size = iVar6;
      local_28[0]._12_4_ = uVar2;
      pFVar8 = FPackagePath::FromLocalPath((FPackagePath *)&local_38,local_28);
      local_48 = pFVar8->PackageName;
      local_40 = *(uint *)&pFVar8->HeaderExtension;
      local_res8[0] = EVar4;
      uVar5 = (**(code **)((longlong)this + 0x18))
                        (*(undefined8 *)((longlong)this + 0x20),&local_48,local_res8,param_2);
      return (bool)uVar5;
    }
  }
  return true;
}

// Visit @ 142155110

bool __thiscall
`FPackageResourceManagerFile::IteratePackagesStatInPath'::__l2::FPackageVisitor::Visit
          (void *this,wchar_t *param_1,FFileStatData *param_2)

{
  bool bVar1;
  undefined1 uVar2;
  EPackageSegment local_res8 [8];
  FPackagePath local_18;
  
  local_18.PackageName.ComparisonIndex.Value = 0;
  local_18.PackageName.Number = 0;
  local_18.HeaderExtension = Unspecified;
  bVar1 = FPackageResourceManagerFile::FDirectoryVisitorBaseMounted::TryConvertToPackageVisit
                    ((FDirectoryVisitorBaseMounted *)((longlong)this + 8),param_1,
                     param_2->bIsDirectory,&local_18,local_res8);
  if (!bVar1) {
    return true;
  }
  uVar2 = (**(code **)((longlong)this + 0x38))
                    (*(undefined8 *)((longlong)this + 0x40),&local_18,local_res8,param_2);
  return (bool)uVar2;
}

