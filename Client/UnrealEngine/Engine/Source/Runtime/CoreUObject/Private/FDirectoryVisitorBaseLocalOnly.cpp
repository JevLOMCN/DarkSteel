// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// FDirectoryVisitorBaseLocalOnly @ 14212b3b0

FDirectoryVisitorBaseLocalOnly * __thiscall
FPackageResourceManagerFile::FDirectoryVisitorBaseLocalOnly::FDirectoryVisitorBaseLocalOnly
          (FDirectoryVisitorBaseLocalOnly *this,TStringView<wchar_t> *param_1)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  FScriptContainerElement *pFVar3;
  FString *pFVar4;
  FString local_38;
  FString local_28;
  FString local_18;
  
  uVar1 = *(undefined8 *)&param_1->Size;
  pwVar2 = param_1->DataPtr;
  (this->RootDir).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootDir).Data.ArrayNum = 0;
  (this->RootDir).Data.ArrayMax = 0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  pFVar4 = ::FString::ConstructFromPtrSize(&local_28,pwVar2,(int)uVar1);
  if (&local_38 != pFVar4) {
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    local_38.Data.AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = (pFVar4->Data).ArrayNum;
    local_38.Data.ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pFVar4 = FPaths::ConvertRelativePathToFull(&local_18,&local_38);
  if (&this->RootDir != pFVar4) {
    pFVar3 = (this->RootDir).Data.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (this->RootDir).Data.AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->RootDir).Data.ArrayNum = (pFVar4->Data).ArrayNum;
    (this->RootDir).Data.ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return this;
}

// TryConvertToPackageVisit @ 142152f10

bool __thiscall
FPackageResourceManagerFile::FDirectoryVisitorBaseLocalOnly::TryConvertToPackageVisit
          (FDirectoryVisitorBaseLocalOnly *this,wchar_t *param_1,bool param_2,FPackagePath *param_3,
          EPackageSegment *param_4)

{
  undefined3 uVar1;
  wchar_t *pwVar2;
  undefined4 uVar3;
  EPackageExtension EVar4;
  EPackageSegment EVar5;
  int iVar6;
  size_t sVar7;
  FPackagePath *pFVar8;
  int local_res18 [4];
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28 [2];
  
  if (!param_2) {
    iVar6 = 0;
    local_38.DataPtr = param_1;
    if (param_1 != (wchar_t *)0x0) {
      sVar7 = wcslen(param_1);
      iVar6 = (int)sVar7;
    }
    uVar3 = local_38._12_4_;
    pwVar2 = local_38.DataPtr;
    local_38.Size = iVar6;
    EVar4 = FPackagePath::ParseExtension(&local_38,local_res18);
    if ((EVar4 != Custom) && (EVar4 != Unspecified)) {
      EVar5 = ExtensionToSegment(EVar4);
      local_28[0].DataPtr = pwVar2;
      local_28[0].Size = iVar6;
      local_28[0]._12_4_ = uVar3;
      *param_4 = EVar5;
      pFVar8 = FPackagePath::FromLocalPath((FPackagePath *)&local_38,local_28);
      param_3->PackageName = pFVar8->PackageName;
      uVar1 = *(undefined3 *)&pFVar8->field_0x9;
      param_3->HeaderExtension = pFVar8->HeaderExtension;
      *(undefined3 *)&param_3->field_0x9 = uVar1;
      return true;
    }
  }
  return false;
}

