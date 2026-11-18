// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// SerializeForLog @ 142284e20

void __thiscall UE::FAssetLog::SerializeForLog(FAssetLog *this,FCbWriter *param_1)

{
  bool bVar1;
  UPackage *this_00;
  FPackagePath *this_01;
  IFileManager *pIVar2;
  FString *pFVar3;
  int iVar4;
  ForAnyElementType FVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  bool local_res8 [8];
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  TStringView<wchar_t> local_28;
  
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  iVar8 = 0;
  iVar7 = 0;
  if (this->Path == (wchar_t *)0x0) {
    if (this->PackagePath == (FPackagePath *)0x0) {
      if ((UObjectBaseUtility *)this->Object == (UObjectBaseUtility *)0x0) goto LAB_1422850ee;
      pFVar3 = UObjectBaseUtility::GetPathName
                         ((UObjectBaseUtility *)this->Object,(FString *)&local_28,(UObject *)0x0);
      if (&local_98 != pFVar3) {
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        local_98.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
        (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_98.Data.ArrayNum = (pFVar3->Data).ArrayNum;
        local_98.Data.ArrayMax = (pFVar3->Data).ArrayMax;
        (pFVar3->Data).ArrayNum = 0;
        (pFVar3->Data).ArrayMax = 0;
      }
      if ((FScriptContainerElement *)local_28.DataPtr != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.DataPtr);
      }
      this_00 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this->Object);
      if (this_00 == (UPackage *)0x0) goto LAB_1422850ee;
      this_01 = UPackage::GetLoadedPath(this_00);
    }
    else {
      pFVar3 = FPackagePath::GetPackageName(this->PackagePath,(FString *)&local_28);
      if (&local_98 != pFVar3) {
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        local_98.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
        (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_98.Data.ArrayNum = (pFVar3->Data).ArrayNum;
        local_98.Data.ArrayMax = (pFVar3->Data).ArrayMax;
        (pFVar3->Data).ArrayNum = 0;
        (pFVar3->Data).ArrayMax = 0;
      }
      if ((FScriptContainerElement *)local_28.DataPtr != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.DataPtr);
      }
      this_01 = this->PackagePath;
    }
    pFVar3 = FPackagePath::GetLocalFullPath(this_01,(FString *)&local_28);
    FVar5.Data = (FScriptContainerElement *)local_28.DataPtr;
    if (&local_88 != pFVar3) {
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      local_88.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.Data.ArrayNum = (pFVar3->Data).ArrayNum;
      local_88.Data.ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
      FVar5.Data = (FScriptContainerElement *)local_28.DataPtr;
    }
  }
  else {
    ::FString::operator=(&local_98,this->Path);
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    iVar4 = local_98.Data.ArrayNum + -1;
    if (local_98.Data.ArrayNum == 0) {
      iVar4 = iVar8;
    }
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Size = iVar4;
    local_28.DataPtr = (wchar_t *)local_98.Data.AllocatorInstance.Data;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    bVar1 = FPackageName::TryConvertToMountedPath
                      (&local_28,&local_88,&local_48,&local_58,&local_68,&local_38,
                       (EFlexNameType *)0x0,(EErrorCode *)0x0);
    if (bVar1) {
      iVar4 = local_48.Data.ArrayNum + -1;
      if (local_48.Data.ArrayNum == 0) {
        iVar4 = iVar8;
      }
      ::FString::AssignRange(&local_98,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar4);
      if (1 < local_58.Data.ArrayNum) {
        ::FString::AppendChar(&local_98,L'.');
        iVar4 = local_58.Data.ArrayNum + -1;
        if (local_58.Data.ArrayNum == 0) {
          iVar4 = iVar8;
        }
        ::FString::AppendChars(&local_98,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar4);
      }
      if (1 < local_68.Data.ArrayNum) {
        ::FString::AppendChars(&local_98,L":",1);
        iVar8 = local_68.Data.ArrayNum + -1;
        if (local_68.Data.ArrayNum == 0) {
          iVar8 = iVar7;
        }
        ::FString::AppendChars(&local_98,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar8);
      }
      if (local_38.Data.ArrayNum < 2) {
        bVar1 = FPackageName::DoesPackageExist(&local_48,&local_88,true);
        if (!bVar1) {
          ::FString::Empty(&local_88);
        }
      }
      else {
        iVar8 = local_38.Data.ArrayNum + -1;
        if (local_38.Data.ArrayNum == 0) {
          iVar8 = iVar7;
        }
        ::FString::AppendChars(&local_88,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar8);
      }
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    FVar5.Data = local_48.Data.AllocatorInstance.Data;
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
    }
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
LAB_1422850ee:
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  if (1 < local_88.Data.ArrayNum) {
    pIVar2 = IFileManager::Get();
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_88.Data.ArrayNum != 0) {
      FVar5.Data = local_88.Data.AllocatorInstance.Data;
    }
    pFVar3 = (FString *)(**(code **)((longlong)*pIVar2 + 0x100))(pIVar2,&local_28,FVar5.Data);
    if (&local_78 != pFVar3) {
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      local_78.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.Data.ArrayNum = (pFVar3->Data).ArrayNum;
      local_78.Data.ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if ((FScriptContainerElement *)local_28.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
    FPaths::MakePlatformFilename(&local_78);
    piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x9d4c);
    if ((*piVar6 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      local_res8[0] = true;
      FConfigCacheIni::GetBool
                (GConfig,L"Core.System",L"AssetLogShowsDiskPath",local_res8,&GEngineIni);
      bShowDiskPath = local_res8[0];
      _Init_thread_footer(&::_TSS0);
    }
    if (bShowDiskPath != false) {
      if ((*piVar6 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        local_res8[0] = false;
        FConfigCacheIni::GetBool
                  (GConfig,L"Core.System",L"AssetLogShowsAbsolutePath",local_res8,&GEngineIni);
        bShowAbsolutePath = local_res8[0];
        _Init_thread_footer(&::_TSS1);
      }
      if (bShowAbsolutePath == false) {
        iVar8 = local_88.Data.ArrayNum + -1;
        if (local_88.Data.ArrayNum == 0) {
          iVar8 = iVar7;
        }
        ::FString::AssignRange(&local_98,(wchar_t *)local_88.Data.AllocatorInstance.Data,iVar8);
        FPaths::MakePlatformFilename(&local_98);
      }
      else {
        iVar8 = local_78.Data.ArrayNum + -1;
        if (local_78.Data.ArrayNum == 0) {
          iVar8 = iVar7;
        }
        ::FString::AssignRange(&local_98,(wchar_t *)local_78.Data.AllocatorInstance.Data,iVar8);
      }
    }
  }
  FCbWriter::BeginObject(param_1);
  local_28.Size = 5;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x15069891c;
  local_38.Data.ArrayNum = 5;
  local_28.DataPtr = L"$type";
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_28);
  local_28.DataPtr = (wchar_t *)local_38.Data.AllocatorInstance.Data;
  local_28.Size = local_38.Data.ArrayNum;
  local_28._12_4_ = local_38.Data.ArrayMax;
  FCbWriter::AddString(param_1,(TStringView<char8_t> *)&local_28);
  local_38.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
  local_28.Size = 5;
  local_38.Data.ArrayNum = local_98.Data.ArrayNum + -1;
  if (local_98.Data.ArrayNum == 0) {
    local_38.Data.ArrayNum = iVar7;
  }
  local_28.DataPtr = L"$text";
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_28);
  local_28.DataPtr = (wchar_t *)local_38.Data.AllocatorInstance.Data;
  local_28.Size = local_38.Data.ArrayNum;
  local_28._12_4_ = local_38.Data.ArrayMax;
  FCbWriter::AddString(param_1,&local_28);
  if (1 < local_78.Data.ArrayNum) {
    local_38.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
    local_28.Size = 4;
    local_38.Data.ArrayNum = local_78.Data.ArrayNum + -1;
    if (local_78.Data.ArrayNum == 0) {
      local_38.Data.ArrayNum = iVar7;
    }
    local_28.DataPtr = L"楦敬";
    FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_28);
    local_28.DataPtr = (wchar_t *)local_38.Data.AllocatorInstance.Data;
    local_28.Size = local_38.Data.ArrayNum;
    local_28._12_4_ = local_38.Data.ArrayMax;
    FCbWriter::AddString(param_1,&local_28);
  }
  FCbWriter::EndObject(param_1);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return;
}

