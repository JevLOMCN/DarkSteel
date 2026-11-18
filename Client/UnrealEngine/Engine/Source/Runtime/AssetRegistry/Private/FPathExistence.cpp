// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 9

// FPathExistence @ 142ad7070

FPathExistence * __thiscall
UE::AssetDataGather::Private::FPathExistence::FPathExistence
          (FPathExistence *this,TStringView<wchar_t> *param_1)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  FScriptContainerElement *pFVar3;
  FPathExistence *pFVar4;
  FString local_18;
  
  uVar1 = *(undefined8 *)&param_1->Size;
  pwVar2 = param_1->DataPtr;
  (this->LocalAbsPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocalAbsPath).Data.ArrayNum = 0;
  (this->LocalAbsPath).Data.ArrayMax = 0;
  pFVar4 = (FPathExistence *)::FString::ConstructFromPtrSize(&local_18,pwVar2,(int)uVar1);
  if (this != pFVar4) {
    pFVar3 = (this->LocalAbsPath).Data.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (this->LocalAbsPath).Data.AllocatorInstance.Data =
         (pFVar4->LocalAbsPath).Data.AllocatorInstance.Data;
    (pFVar4->LocalAbsPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->LocalAbsPath).Data.ArrayNum = (pFVar4->LocalAbsPath).Data.ArrayNum;
    (this->LocalAbsPath).Data.ArrayMax = (pFVar4->LocalAbsPath).Data.ArrayMax;
    (pFVar4->LocalAbsPath).Data.ArrayNum = 0;
    (pFVar4->LocalAbsPath).Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  (this->ModificationTime).Ticks = 0;
  this->bIsReadOnly = false;
  this->bHasExistenceData = false;
  this->PathType = MissingParentDir;
  return this;
}

// GetLocalAbsPath @ 142afeda0

FString * __thiscall
UE::AssetDataGather::Private::FPathExistence::GetLocalAbsPath(FPathExistence *this)

{
  return &this->LocalAbsPath;
}

// GetLowestExistingPath @ 142afeee0

TStringView<wchar_t> * __thiscall
UE::AssetDataGather::Private::FPathExistence::GetLowestExistingPath
          (FPathExistence *this,TStringView<wchar_t> *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  TStringView<wchar_t> local_18;
  
  LoadExistenceData(this);
  if (this->PathType == MissingButDirExists) {
    local_18.DataPtr = (wchar_t *)(this->LocalAbsPath).Data.AllocatorInstance.Data;
    iVar2 = (this->LocalAbsPath).Data.ArrayNum;
    local_18.Size = iVar2 + -1;
    if (iVar2 == 0) {
      local_18.Size = 0;
    }
    FPathViews::GetPath(__return_storage_ptr__,&local_18);
    return __return_storage_ptr__;
  }
  if (this->PathType != MissingParentDir) {
    __return_storage_ptr__->DataPtr = (wchar_t *)(this->LocalAbsPath).Data.AllocatorInstance.Data;
    iVar1 = (this->LocalAbsPath).Data.ArrayNum;
    iVar2 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    __return_storage_ptr__->Size = iVar2;
    return __return_storage_ptr__;
  }
  *(undefined8 *)&__return_storage_ptr__->Size = 0;
  __return_storage_ptr__->DataPtr = (wchar_t *)0x0;
  return __return_storage_ptr__;
}

// GetModificationTime @ 142afef80

FDateTime __thiscall
UE::AssetDataGather::Private::FPathExistence::GetModificationTime(FPathExistence *this)

{
  long64 *in_RDX;
  
  LoadExistenceData(this);
  *in_RDX = (this->ModificationTime).Ticks;
  return (FDateTime)(long64)in_RDX;
}

// GetType @ 142b008e0

EType __thiscall UE::AssetDataGather::Private::FPathExistence::GetType(FPathExistence *this)

{
  LoadExistenceData(this);
  return this->PathType;
}

// HasExistenceData @ 142b00c80

bool __thiscall UE::AssetDataGather::Private::FPathExistence::HasExistenceData(FPathExistence *this)

{
  return this->bHasExistenceData;
}

// IsReadOnly @ 142b05660

bool __thiscall UE::AssetDataGather::Private::FPathExistence::IsReadOnly(FPathExistence *this)

{
  LoadExistenceData(this);
  return this->bIsReadOnly;
}

// LoadExistenceData @ 142b088c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::AssetDataGather::Private::FPathExistence::LoadExistenceData(FPathExistence *this)

{
  EType EVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  IFileManager *pIVar5;
  undefined8 *puVar6;
  EType EVar7;
  wchar_t *pwVar8;
  ForAnyElementType FVar9;
  bool bVar10;
  undefined1 local_d8 [24];
  undefined8 local_c0;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  long64 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  FString local_50;
  FString local_40;
  TStringView<wchar_t> local_30;
  FScriptContainerElement *local_20;
  int local_18;
  
  if (this->bHasExistenceData != false) {
    return;
  }
  pIVar5 = IFileManager::Get();
  if ((this->LocalAbsPath).Data.ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(this->LocalAbsPath).Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar5 + 0x70))(pIVar5,&local_78,pwVar8);
  if ((local_58 & 4) == 0) {
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.Data.ArrayNum = 0;
    local_b8.Data.ArrayMax = 0;
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
    FPaths::Split(&this->LocalAbsPath,&local_b8,&local_88,&local_98);
    pIVar5 = IFileManager::Get();
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_b8.Data.ArrayNum != 0) {
      FVar9.Data = local_b8.Data.AllocatorInstance.Data;
    }
    puVar6 = (undefined8 *)(**(code **)((longlong)*pIVar5 + 0x70))(pIVar5,&local_30,FVar9.Data);
    local_78 = *puVar6;
    uStack_70 = puVar6[1];
    local_68 = puVar6[2];
    uStack_60 = puVar6[3];
    local_58 = puVar6[4];
    if (((local_58 & 4) == 0) || ((local_58 & 1) == 0)) {
      this->PathType = MissingParentDir;
    }
    else {
      pIVar5 = IFileManager::Get();
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_b8.Data.ArrayNum != 0) {
        FVar9.Data = local_b8.Data.AllocatorInstance.Data;
      }
      (**(code **)((longlong)*pIVar5 + 0x120))(pIVar5,local_d8,FVar9.Data);
      pwVar8 = L"";
      if (1 < local_98.Data.ArrayNum) {
        pwVar8 = L".";
      }
      local_30.DataPtr = (wchar_t *)local_d8._0_8_;
      local_30.Size = local_d8._8_4_ + -1;
      if (local_d8._8_4_ == 0) {
        local_30.Size = 0;
      }
      local_20 = local_88.Data.AllocatorInstance.Data;
      local_18 = local_88.Data.ArrayNum + -1;
      if (local_88.Data.ArrayNum == 0) {
        local_18 = 0;
      }
      FPaths::CombineInternal(&local_40,&local_30,2);
      ::FString::ConcatFC(&local_50,&local_40,pwVar8);
      ::FString::ConcatFF(&local_a8,&local_50,&local_98);
      if ((FScriptContainerElement *)local_d8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_d8._0_8_);
      }
      iVar4 = local_a8.Data.ArrayNum;
      local_d8._0_8_ = local_a8.Data.AllocatorInstance.Data;
      local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8._8_4_ = local_a8.Data.ArrayNum;
      local_d8._12_4_ = local_a8.Data.ArrayMax;
      local_a8.Data.ArrayNum = 0;
      local_a8.Data.ArrayMax = 0;
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
        iVar4 = local_d8._8_4_;
      }
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
        iVar4 = local_d8._8_4_;
      }
      iVar2 = (this->LocalAbsPath).Data.ArrayNum;
      if (iVar2 == iVar4) {
        if (1 < iVar2) {
          iVar4 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)(this->LocalAbsPath).Data.AllocatorInstance.Data,
                             (wchar_t *)local_d8._0_8_);
          bVar10 = iVar4 == 0;
          iVar4 = local_d8._8_4_;
          goto LAB_142b08bbb;
        }
LAB_142b08bf8:
        if (this != (FPathExistence *)local_d8) {
          pFVar3 = (this->LocalAbsPath).Data.AllocatorInstance.Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
            iVar4 = local_d8._8_4_;
          }
          (this->LocalAbsPath).Data.AllocatorInstance.Data =
               (FScriptContainerElement *)local_d8._0_8_;
          local_d8._0_8_ = (FScriptContainerElement *)0x0;
          (this->LocalAbsPath).Data.ArrayNum = iVar4;
          (this->LocalAbsPath).Data.ArrayMax = local_d8._12_4_;
          local_d8._8_4_ = 0;
          local_d8._12_4_ = 0;
        }
      }
      else {
        bVar10 = iVar2 + iVar4 == 1;
LAB_142b08bbb:
        if (bVar10) goto LAB_142b08bf8;
        if (2 < (byte)LogAssetRegistry._0_1_) {
          Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
        }
      }
      this->PathType = MissingButDirExists;
      if ((FScriptContainerElement *)local_d8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_d8._0_8_);
      }
    }
    this->bIsReadOnly = false;
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    FVar9.Data = local_b8.Data.AllocatorInstance.Data;
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
      FVar9.Data = local_b8.Data.AllocatorInstance.Data;
    }
    goto joined_r0x000142b08c70;
  }
  pIVar5 = IFileManager::Get();
  if ((this->LocalAbsPath).Data.ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(this->LocalAbsPath).Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar5 + 0x120))(pIVar5,local_d8 + 0x10,pwVar8);
  EVar1 = (this->LocalAbsPath).Data.ArrayNum;
  if (EVar1 == (EType)local_c0) {
    EVar7 = (EType)local_c0;
    if (1 < (int)EVar1) {
      iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(this->LocalAbsPath).Data.AllocatorInstance.Data,
                         (wchar_t *)local_d8._16_8_);
      bVar10 = iVar4 == 0;
      goto LAB_142b08972;
    }
LAB_142b089e0:
    if (this != (FPathExistence *)(local_d8 + 0x10)) {
      pFVar3 = (this->LocalAbsPath).Data.AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
        EVar7 = (EType)local_c0;
      }
      (this->LocalAbsPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)local_d8._16_8_;
      (this->LocalAbsPath).Data.ArrayMax = local_c0._4_4_;
      local_c0._0_4_ = Directory;
      local_c0._4_1_ = false;
      local_c0._5_1_ = false;
      local_c0._6_2_ = 0;
      local_d8._16_8_ = (FScriptContainerElement *)0x0;
      (this->LocalAbsPath).Data.ArrayNum = EVar7;
    }
  }
  else {
    bVar10 = EVar1 + (EType)local_c0 == 1;
LAB_142b08972:
    EVar7 = (EType)local_c0;
    if (bVar10) goto LAB_142b089e0;
    if (2 < (byte)LogAssetRegistry._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
    }
  }
  (this->ModificationTime).Ticks = local_68;
  this->bIsReadOnly = (bool)((byte)local_58 >> 1 & 1);
  this->PathType = ~(uint)(byte)local_58 & File;
  FVar9.Data = (FScriptContainerElement *)local_d8._16_8_;
joined_r0x000142b08c70:
  if (FVar9.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar9.Data);
  }
  this->bHasExistenceData = true;
  return;
}

// SetConfirmedExists @ 142b1e0d0

void __thiscall
UE::AssetDataGather::Private::FPathExistence::SetConfirmedExists(FPathExistence *this,bool param_1)

{
  this->bHasExistenceData = param_1;
  return;
}

