// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 35

// FScanDir @ 142ad7380

FScanDir * __thiscall
UE::AssetDataGather::Private::FScanDir::FScanDir
          (FScanDir *this,FMountDir *param_1,FScanDir *param_2,TStringView<wchar_t> *param_3)

{
  FString *pFVar1;
  FThreadSafeCounter *pFVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  FScriptContainerElement *pFVar5;
  FString *pFVar6;
  FString local_18;
  
  this->MountDir = param_1;
  pFVar1 = &this->RelPath;
  this->Parent = param_2;
  uVar3 = *(undefined8 *)&param_3->Size;
  *(undefined4 *)&this->_padding_ = 0;
  pwVar4 = param_3->DataPtr;
  this->_padding_ = (longlong)&___7FScanDir_Private_AssetDataGather_UE__6B_;
  (this->SubDirs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubDirs).ArrayNum = 0;
  (this->SubDirs).ArrayMax = 0;
  (this->AlreadyScannedFiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AlreadyScannedFiles).ArrayNum = 0;
  (this->AlreadyScannedFiles).ArrayMax = 0;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RelPath).Data.ArrayNum = 0;
  (this->RelPath).Data.ArrayMax = 0;
  pFVar6 = ::FString::ConstructFromPtrSize(&local_18,pwVar4,(int)uVar3);
  if (pFVar1 != pFVar6) {
    pFVar5 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->RelPath).Data.ArrayNum = (pFVar6->Data).ArrayNum;
    (this->RelPath).Data.ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  (this->DirectData).bIsOnAllowList = false;
  (this->DirectData).bMatchesDenyList = false;
  (this->DirectData).bIgnoreDenyList = false;
  this->bHasScanned = false;
  this->bScanInFlight = false;
  this->bScanInFlightInvalidated = false;
  this->bIsComplete = false;
  LOCK();
  pFVar2 = &param_1->Discovery->NumDirectoriesToScan;
  pFVar2->Counter = pFVar2->Counter + 1;
  UNLOCK();
  return this;
}

// ~FScanDir @ 142adad30

void __thiscall UE::AssetDataGather::Private::FScanDir::~FScanDir(FScanDir *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  this->_padding_ = (longlong)&___7FScanDir_Private_AssetDataGather_UE__6B_;
  if (this->MountDir != (FMountDir *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!MountDir",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                       ,0x1de,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->RelPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->AlreadyScannedFiles).AllocatorInstance.Data,
             (this->AlreadyScannedFiles).ArrayNum);
  pFVar1 = (this->AlreadyScannedFiles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TRefCountPtr<UE::AssetDataGather::Private::FScanDir>,int>
            ((TRefCountPtr<UE::AssetDataGather::Private::FScanDir> *)
             (this->SubDirs).AllocatorInstance.Data,(this->SubDirs).ArrayNum);
  pFVar1 = (this->SubDirs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// AppendLocalAbsPath @ 142aea9e0

void __thiscall
UE::AssetDataGather::Private::FScanDir::AppendLocalAbsPath
          (FScanDir *this,TStringBuilderBase<wchar_t> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined4 uStack_1c;
  TStringView<wchar_t> local_18;
  
  if (this->MountDir != (FMountDir *)0x0) {
    if (this->Parent != (FScanDir *)0x0) {
      AppendLocalAbsPath(this->Parent,param_1);
      local_18.DataPtr = (wchar_t *)(this->RelPath).Data.AllocatorInstance.Data;
      iVar1 = (this->RelPath).Data.ArrayNum;
      iVar4 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar4 = 0;
      }
      local_18._12_4_ = uStack_1c;
      local_18.Size = iVar4;
      FPathViews::AppendPath(param_1,&local_18);
      return;
    }
    if (1 < (this->RelPath).Data.ArrayNum) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("RelPath.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                         ,0x21b,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar1 = (this->MountDir->LocalAbsPath).Data.ArrayNum;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              (param_1,(wchar_t *)(this->MountDir->LocalAbsPath).Data.AllocatorInstance.Data,iVar4);
  }
  return;
}

// AppendMountRelPath @ 142aeaab0

void __thiscall
UE::AssetDataGather::Private::FScanDir::AppendMountRelPath
          (FScanDir *this,TStringBuilderBase<wchar_t> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined4 uStack_1c;
  TStringView<wchar_t> local_18;
  
  if (this->MountDir != (FMountDir *)0x0) {
    if (this->Parent != (FScanDir *)0x0) {
      AppendMountRelPath(this->Parent,param_1);
      local_18.DataPtr = (wchar_t *)(this->RelPath).Data.AllocatorInstance.Data;
      iVar1 = (this->RelPath).Data.ArrayNum;
      iVar4 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar4 = 0;
      }
      local_18._12_4_ = uStack_1c;
      local_18.Size = iVar4;
      FPathViews::AppendPath(param_1,&local_18);
      return;
    }
    if (1 < (this->RelPath).Data.ArrayNum) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("RelPath.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                         ,0x236,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  return;
}

// FindLowerBoundSubDir @ 142af6840

int __thiscall
UE::AssetDataGather::Private::FScanDir::FindLowerBoundSubDir
          (FScanDir *this,TStringView<wchar_t> *param_1)

{
  int iVar1;
  FIdentityFunctor local_res8;
  
  iVar1 = AlgoImpl::
          LowerBoundInternal<TRefCountPtr<UE::AssetDataGather::Private::FScanDir>_const_,int,TStringView<wchar_t>,FIdentityFunctor,_UE::AssetDataGather::Private::FScanDir::FindLowerBoundSubDir_::__l2::<lambda_1>_>
                    ((TRefCountPtr<UE::AssetDataGather::Private::FScanDir> *)
                     (this->SubDirs).AllocatorInstance.Data,(this->SubDirs).ArrayNum,param_1,
                     local_res8,(<lambda_1>)local_res8);
  return iVar1;
}

// FindOrAddSubDir @ 142af7b00

FScanDir * __thiscall
UE::AssetDataGather::Private::FScanDir::FindOrAddSubDir
          (FScanDir *this,TStringView<wchar_t> *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  wchar_t *pwVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  FScanDir *pFVar8;
  FScanDir *this_00;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  TArray<TRefCountPtr<UE::AssetDataGather::Private::FScanDir>,TSizedDefaultAllocator<32>_> *pTVar14;
  undefined4 uStack_8c;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48 [2];
  
  if ((this->MountDir == (FMountDir *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("MountDir != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                         ,0x495,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FScanDir *)(*pcVar3)();
    return pFVar8;
  }
  uVar13 = (this->SubDirs).ArrayNum;
  pFVar9 = (this->SubDirs).AllocatorInstance.Data;
  pFVar8 = (FScanDir *)0x0;
  uVar12 = 0;
  uVar11 = uVar12;
  if (0 < (int)uVar13) {
    do {
      local_88.DataPtr = param_1->DataPtr;
      local_88.Size = param_1->Size;
      local_88._12_4_ = *(undefined4 *)&param_1->field_0xc;
      iVar7 = (uVar13 >> 1) + uVar11;
      lVar2 = *(longlong *)(pFVar9 + (longlong)iVar7 * 8);
      local_78.DataPtr = *(wchar_t **)(lVar2 + 0x40);
      iVar1 = *(int *)(lVar2 + 0x48);
      uVar10 = iVar1 - 1;
      if (iVar1 == 0) {
        uVar10 = uVar12;
      }
      local_78._12_4_ = uStack_8c;
      local_78.Size = uVar10;
      bVar6 = FPathViews::Less(&local_78,&local_88);
      if (bVar6) {
        uVar11 = iVar7 + (uVar13 & 1);
      }
      uVar10 = uVar13 >> 1;
      uVar13 = uVar13 >> 1;
    } while (uVar10 != 0);
  }
  pTVar14 = &this->SubDirs;
  uVar13 = (this->SubDirs).ArrayNum;
  if (uVar11 != uVar13) {
    pwVar4 = param_1->DataPtr;
    uVar5._0_4_ = param_1->Size;
    uVar5._4_4_ = *(undefined4 *)&param_1->field_0xc;
    uVar10 = 0;
    uVar12 = uVar10;
    if ((int)uVar11 < (int)uVar13) {
      uVar12 = ~uVar11 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FScanDir *)(*pcVar3)();
      return pFVar8;
    }
    lVar2 = *(longlong *)((pTVar14->AllocatorInstance).Data + (longlong)(int)uVar11 * 8);
    local_58.DataPtr = *(wchar_t **)(lVar2 + 0x40);
    iVar7 = *(int *)(lVar2 + 0x48);
    uVar13 = iVar7 - 1;
    if (iVar7 == 0) {
      uVar13 = uVar10;
    }
    local_58._12_4_ = uStack_8c;
    local_58.Size = uVar13;
    local_68.DataPtr = pwVar4;
    local_68._8_8_ = uVar5;
    bVar6 = FPathViews::Equals(&local_58,&local_68);
    if (bVar6) {
      if ((int)uVar11 < (this->SubDirs).ArrayNum) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FScanDir *)(*pcVar3)();
        return pFVar8;
      }
      pFVar9 = (pTVar14->AllocatorInstance).Data;
      goto LAB_142af7d62;
    }
  }
  this_00 = ::operator_new(0x58);
  if (this_00 != (FScanDir *)0x0) {
    local_48[0].DataPtr = param_1->DataPtr;
    local_48[0].Size = param_1->Size;
    local_48[0]._12_4_ = *(undefined4 *)&param_1->field_0xc;
    pFVar8 = FScanDir(this_00,this->MountDir,this,local_48);
  }
  iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,1,&pTVar14->AllocatorInstance,&(this->SubDirs).ArrayNum,
                     &(this->SubDirs).ArrayMax);
  pFVar9 = (pTVar14->AllocatorInstance).Data + (longlong)(int)uVar11 * 8;
  memmove(pFVar9 + 8,pFVar9,(longlong)(int)(iVar7 - uVar11) << 3);
  pFVar9 = (pTVar14->AllocatorInstance).Data;
  *(FScanDir **)(pFVar9 + (longlong)(int)uVar11 * 8) = pFVar8;
  if (pFVar8 != (FScanDir *)0x0) {
    LOCK();
    *(int *)&pFVar8->_padding_ = (int)pFVar8->_padding_ + 1;
    UNLOCK();
  }
LAB_142af7d62:
  return *(FScanDir **)(pFVar9 + (longlong)(int)uVar11 * 8);
}

// FindSubDir @ 142af8580

FScanDir * __thiscall
UE::AssetDataGather::Private::FScanDir::FindSubDir(FScanDir *this,TStringView<wchar_t> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  wchar_t *pwVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  FScanDir *pFVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48 [2];
  
  pFVar2 = (this->SubDirs).AllocatorInstance.Data;
  uVar12 = (this->SubDirs).ArrayNum;
  uVar11 = 0;
  if (0 < (int)uVar12) {
    do {
      local_68.DataPtr = param_1->DataPtr;
      local_68.Size = param_1->Size;
      local_68._12_4_ = *(undefined4 *)&param_1->field_0xc;
      iVar10 = (uVar12 >> 1) + uVar11;
      lVar3 = *(longlong *)(pFVar2 + (longlong)iVar10 * 8);
      local_78.DataPtr = *(wchar_t **)(lVar3 + 0x40);
      iVar1 = *(int *)(lVar3 + 0x48);
      local_58.Size = iVar1 + -1;
      if (iVar1 == 0) {
        local_58.Size = 0;
      }
      local_78.Size = local_58.Size;
      local_58._12_4_ = local_78._12_4_;
      local_58.DataPtr = local_78.DataPtr;
      bVar7 = FPathViews::Less(&local_58,&local_68);
      if (bVar7) {
        uVar11 = iVar10 + (uVar12 & 1);
      }
      uVar8 = uVar12 >> 1;
      uVar12 = uVar12 >> 1;
    } while (uVar8 != 0);
  }
  uVar12 = (this->SubDirs).ArrayNum;
  if (uVar11 != uVar12) {
    pwVar5 = param_1->DataPtr;
    uVar6._0_4_ = param_1->Size;
    uVar6._4_4_ = *(undefined4 *)&param_1->field_0xc;
    uVar8 = 0;
    if ((int)uVar11 < (int)uVar12) {
      uVar8 = ~uVar11 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FScanDir *)(*pcVar4)();
      return pFVar9;
    }
    lVar3 = *(longlong *)((this->SubDirs).AllocatorInstance.Data + (longlong)(int)uVar11 * 8);
    local_78.DataPtr = *(wchar_t **)(lVar3 + 0x40);
    iVar1 = *(int *)(lVar3 + 0x48);
    iVar10 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar10 = 0;
    }
    local_78.Size = iVar10;
    local_48[0].DataPtr = pwVar5;
    local_48[0]._8_8_ = uVar6;
    bVar7 = FPathViews::Equals(&local_78,local_48);
    if (bVar7) {
      uVar12 = 0;
      if ((int)uVar11 < (this->SubDirs).ArrayNum) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FScanDir *)(*pcVar4)();
        return pFVar9;
      }
      return *(FScanDir **)((this->SubDirs).AllocatorInstance.Data + (longlong)(int)uVar11 * 8);
    }
  }
  return (FScanDir *)0x0;
}

// FindSubDir @ 142af8740

FScanDir * __thiscall
UE::AssetDataGather::Private::FScanDir::FindSubDir(FScanDir *this,TStringView<wchar_t> *param_1)

{
  FScanDir *pFVar1;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar1 = FindSubDir(this,&local_18);
  return pFVar1;
}

// GetAllocatedSize @ 142afb3a0

ulong64 __thiscall UE::AssetDataGather::Private::FScanDir::GetAllocatedSize(FScanDir *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ulong64 uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  
  pFVar5 = (this->SubDirs).AllocatorInstance.Data;
  iVar2 = (this->SubDirs).ArrayNum;
  lVar6 = (longlong)(this->SubDirs).ArrayMax << 3;
  pFVar4 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->SubDirs).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TRefCountPtr<UE::AssetDataGather::Private::FScanDir>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar4) break;
    uVar3 = GetAllocatedSize(*(FScanDir **)pFVar5);
    lVar6 = lVar6 + 0x58 + uVar3;
    pFVar5 = pFVar5 + 8;
  }
  iVar2 = (this->AlreadyScannedFiles).ArrayNum;
  pFVar4 = (this->AlreadyScannedFiles).AllocatorInstance.Data;
  lVar6 = lVar6 + (longlong)(this->AlreadyScannedFiles).ArrayMax * 0x10;
  pFVar5 = pFVar4 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((this->AlreadyScannedFiles).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar4 == pFVar5) break;
    pFVar1 = pFVar4 + 0xc;
    pFVar4 = pFVar4 + 0x10;
    lVar6 = lVar6 + (longlong)*(int *)pFVar1 * 2;
  }
  return lVar6 + (longlong)(this->RelPath).Data.ArrayMax * 2;
}

// GetControllingDir @ 142afd8b0

/* WARNING: Enum "Type": Some values do not have unique names */

FScanDir * __thiscall
UE::AssetDataGather::Private::FScanDir::GetControllingDir
          (FScanDir *this,TStringView<wchar_t> *param_1,bool param_2,FInherited *param_3,
          FInherited *param_4,FString *param_5)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FScanDir *pFVar5;
  FInherited local_res8 [2];
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  FString local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  
  if ((this->MountDir == (FMountDir *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                         ,0x2a6,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FScanDir *)(*pcVar1)();
    return pFVar5;
  }
  if ((param_3->bIsOnAllowList != false) ||
     (local_res8[0].bIsOnAllowList = false, local_res8[0].bMatchesDenyList = false,
     (this->DirectData).bIsOnAllowList != false)) {
    local_res8[0].bIsOnAllowList = true;
    local_res8[0].bMatchesDenyList = false;
  }
  if ((param_3->bMatchesDenyList != false) || ((this->DirectData).bMatchesDenyList != false)) {
    local_res8[0].bMatchesDenyList = true;
  }
  if ((param_3->bIgnoreDenyList == false) && ((this->DirectData).bIgnoreDenyList == false)) {
    local_res8[0].bIgnoreDenyList = false;
  }
  else {
    local_res8[0].bIgnoreDenyList = true;
  }
  if (param_1->Size == 0) {
    if (!param_2) {
      if (2 < (byte)LogAssetRegistry._0_1_) {
        GetLocalAbsPath(this,&local_68);
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
      }
      param_4->bIsOnAllowList = false;
      param_4->bMatchesDenyList = false;
      param_4->bIgnoreDenyList = false;
      ::FString::Reset(param_5,0);
      return (FScanDir *)0x0;
    }
    param_4->bIsOnAllowList = local_res8[0].bIsOnAllowList;
    param_4->bMatchesDenyList = local_res8[0].bMatchesDenyList;
    param_4->bIgnoreDenyList = local_res8[0].bIgnoreDenyList;
  }
  else {
    local_58.DataPtr = param_1->DataPtr;
    local_58.Size = param_1->Size;
    local_58._12_4_ = *(undefined4 *)&param_1->field_0xc;
    local_88.DataPtr = (wchar_t *)0x0;
    local_88.Size = 0;
    local_78.DataPtr = (wchar_t *)0x0;
    local_78.Size = 0;
    FPathViews::SplitFirstComponent(&local_58,&local_88,&local_78);
    if ((local_78.Size != 0) || (param_2)) {
      if ((this->bHasScanned == false) && (this->MountDir != (FMountDir *)0x0)) {
        if ((param_3->bIsOnAllowList == false) && ((this->DirectData).bIsOnAllowList == false)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if ((param_3->bMatchesDenyList == false) && ((this->DirectData).bMatchesDenyList == false))
        {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((param_3->bIgnoreDenyList == false) && ((this->DirectData).bIgnoreDenyList == false)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if ((bVar4) && ((!bVar2 || (bVar3)))) {
          local_48._12_4_ = local_88._12_4_;
          local_48.Size = local_88.Size;
          local_48.DataPtr = local_88.DataPtr;
          pFVar5 = FindOrAddSubDir(this,&local_48);
          goto LAB_142afdab1;
        }
      }
      local_38._12_4_ = local_88._12_4_;
      local_38.Size = local_88.Size;
      local_38.DataPtr = local_88.DataPtr;
      pFVar5 = FindSubDir(this,&local_38);
      if (pFVar5 != (FScanDir *)0x0) {
LAB_142afdab1:
        local_28._12_4_ = local_78._12_4_;
        local_28.Size = local_78.Size;
        local_28.DataPtr = local_78.DataPtr;
        pFVar5 = GetControllingDir(pFVar5,&local_28,param_2,local_res8,param_4,param_5);
        return pFVar5;
      }
    }
    param_4->bIsOnAllowList = local_res8[0].bIsOnAllowList;
    param_4->bMatchesDenyList = local_res8[0].bMatchesDenyList;
    param_4->bIgnoreDenyList = local_res8[0].bIgnoreDenyList;
  }
  ::FString::AssignRange(param_5,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
  return this;
}

// GetFirstIncompleteScanDir @ 142afea10

FScanDir * __thiscall
UE::AssetDataGather::Private::FScanDir::GetFirstIncompleteScanDir(FScanDir *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScanDir *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->SubDirs).AllocatorInstance.Data;
  iVar2 = (this->SubDirs).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->SubDirs).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TRefCountPtr<UE::AssetDataGather::Private::FScanDir>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    pFVar3 = GetFirstIncompleteScanDir(*(FScanDir **)pFVar4);
    if (pFVar3 != (FScanDir *)0x0) {
      return pFVar3;
    }
    pFVar4 = pFVar4 + 8;
  }
  pFVar3 = (FScanDir *)0x0;
  if (this->bIsComplete == false) {
    pFVar3 = this;
  }
  return pFVar3;
}

// GetLocalAbsPath @ 142afedb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
UE::AssetDataGather::Private::FScanDir::GetLocalAbsPath
          (FScanDir *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  undefined1 auStack_168 [32];
  FString local_148;
  TStringBuilderBase<wchar_t> local_138;
  wchar_t local_118 [128];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_168;
  local_138.Base = local_118;
  local_138.bIsDynamic = false;
  local_138.bIsExternal = false;
  local_138.CurPos = local_118;
  local_138.End = (wchar_t *)local_18;
  AppendLocalAbsPath(this,&local_138);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar2 = ::FString::ConstructFromPtrSize
                     (&local_148,local_138.Base,
                      (int)((longlong)local_138.CurPos - (longlong)local_138.Base >> 1));
  if (__return_storage_ptr__ != pFVar2) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_138);
  return __return_storage_ptr__;
}

// GetMonitorData @ 142aff130

void __thiscall
UE::AssetDataGather::Private::FScanDir::GetMonitorData
          (FScanDir *this,TStringView<wchar_t> *param_1,FInherited *param_2,FInherited *param_3)

{
  FScanDir *this_00;
  FInherited local_res8 [2];
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  if (this->MountDir == (FMountDir *)0x0) {
    param_3->bIsOnAllowList = false;
    param_3->bMatchesDenyList = false;
    param_3->bIgnoreDenyList = false;
    return;
  }
  if ((param_2->bIsOnAllowList != false) ||
     (local_res8[0].bIsOnAllowList = false, local_res8[0].bMatchesDenyList = false,
     (this->DirectData).bIsOnAllowList != false)) {
    local_res8[0].bIsOnAllowList = true;
    local_res8[0].bMatchesDenyList = false;
  }
  if ((param_2->bMatchesDenyList != false) || ((this->DirectData).bMatchesDenyList != false)) {
    local_res8[0].bMatchesDenyList = true;
  }
  if ((param_2->bIgnoreDenyList == false) && ((this->DirectData).bIgnoreDenyList == false)) {
    local_res8[0].bIgnoreDenyList = false;
  }
  else {
    local_res8[0].bIgnoreDenyList = true;
  }
  local_38.DataPtr = (wchar_t *)0x0;
  local_38.Size = 0;
  local_28.DataPtr = (wchar_t *)0x0;
  local_28.Size = 0;
  if (param_1->Size != 0) {
    local_18.DataPtr = param_1->DataPtr;
    local_18.Size = param_1->Size;
    local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
    FPathViews::SplitFirstComponent(&local_18,&local_38,&local_28);
    local_18._12_4_ = local_38._12_4_;
    local_18.Size = local_38.Size;
    local_18.DataPtr = local_38.DataPtr;
    this_00 = FindSubDir(this,&local_18);
    if (this_00 != (FScanDir *)0x0) {
      local_18._12_4_ = local_28._12_4_;
      local_18.Size = local_28.Size;
      local_18.DataPtr = local_28.DataPtr;
      GetMonitorData(this_00,&local_18,local_res8,param_3);
      return;
    }
  }
  param_3->bIsOnAllowList = local_res8[0].bIsOnAllowList;
  param_3->bMatchesDenyList = local_res8[0].bMatchesDenyList;
  param_3->bIgnoreDenyList = local_res8[0].bIgnoreDenyList;
  return;
}

// GetMountDir @ 142aff240

FMountDir * __thiscall UE::AssetDataGather::Private::FScanDir::GetMountDir(FScanDir *this)

{
  return this->MountDir;
}

// GetMountRelPath @ 142aff250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
UE::AssetDataGather::Private::FScanDir::GetMountRelPath
          (FScanDir *this,FString *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  undefined1 auStack_188 [32];
  FScriptContainerElement *local_168;
  int iStack_160;
  undefined4 uStack_15c;
  TStringView<wchar_t> local_158;
  FString local_148;
  TStringBuilderBase<wchar_t> local_138;
  wchar_t local_118 [128];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_188;
  local_138.Base = local_118;
  local_138.bIsDynamic = false;
  local_138.bIsExternal = false;
  local_138.CurPos = local_118;
  local_138.End = (wchar_t *)local_18;
  if (this->MountDir != (FMountDir *)0x0) {
    if (this->Parent == (FScanDir *)0x0) {
      if (1 < (this->RelPath).Data.ArrayNum) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("RelPath.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                           ,0x236,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar5 = (FString *)(*pcVar3)();
          return pFVar5;
        }
      }
    }
    else {
      AppendMountRelPath(this->Parent,&local_138);
      local_168 = (this->RelPath).Data.AllocatorInstance.Data;
      iVar1 = (this->RelPath).Data.ArrayNum;
      iStack_160 = iVar1 + -1;
      if (iVar1 == 0) {
        iStack_160 = 0;
      }
      local_158._12_4_ = uStack_15c;
      local_158.Size = iStack_160;
      local_158.DataPtr = (wchar_t *)local_168;
      FPathViews::AppendPath(&local_138,&local_158);
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar5 = ::FString::ConstructFromPtrSize
                     (&local_148,local_138.Base,
                      (int)((longlong)local_138.CurPos - (longlong)local_138.Base >> 1));
  if (__return_storage_ptr__ != pFVar5) {
    pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar5->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_138);
  return __return_storage_ptr__;
}

// GetRelPath @ 142b007c0

TStringView<wchar_t> * __thiscall
UE::AssetDataGather::Private::FScanDir::GetRelPath
          (FScanDir *this,TStringView<wchar_t> *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  
  __return_storage_ptr__->DataPtr = (wchar_t *)(this->RelPath).Data.AllocatorInstance.Data;
  iVar1 = (this->RelPath).Data.ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  __return_storage_ptr__->Size = iVar2;
  return __return_storage_ptr__;
}

// HasPersistentSettings @ 142b00c90

bool __thiscall UE::AssetDataGather::Private::FScanDir::HasPersistentSettings(FScanDir *this)

{
  if ((((this->DirectData).bIsOnAllowList == false) &&
      ((this->DirectData).bMatchesDenyList == false)) &&
     ((this->DirectData).bIgnoreDenyList == false)) {
    return false;
  }
  return true;
}

// HasScanned @ 142b00cb0

bool __thiscall UE::AssetDataGather::Private::FScanDir::HasScanned(FScanDir *this)

{
  return this->bHasScanned;
}

// IsComplete @ 142b045a0

bool __thiscall UE::AssetDataGather::Private::FScanDir::IsComplete(FScanDir *this)

{
  return this->bIsComplete;
}

// IsMonitored @ 142b04d70

bool __thiscall
UE::AssetDataGather::Private::FScanDir::IsMonitored(FScanDir *this,FInherited *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  
  if (this->MountDir != (FMountDir *)0x0) {
    if ((param_1->bIsOnAllowList == false) && ((this->DirectData).bIsOnAllowList == false)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((param_1->bMatchesDenyList == false) && ((this->DirectData).bMatchesDenyList == false)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((param_1->bIgnoreDenyList == false) && ((this->DirectData).bIgnoreDenyList == false)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar1) && ((!bVar2 || (bVar3)))) {
      return true;
    }
  }
  return false;
}

// IsScanInFlight @ 142b056b0

bool __thiscall UE::AssetDataGather::Private::FScanDir::IsScanInFlight(FScanDir *this)

{
  return this->bScanInFlight;
}

// IsScanInFlightInvalidated @ 142b056c0

bool __thiscall UE::AssetDataGather::Private::FScanDir::IsScanInFlightInvalidated(FScanDir *this)

{
  return this->bScanInFlightInvalidated;
}

// IsValid @ 142b05960

bool __thiscall UE::AssetDataGather::Private::FScanDir::IsValid(FScanDir *this)

{
  return this->MountDir != (FMountDir *)0x0;
}

// MarkDirty @ 142b09820

void __thiscall UE::AssetDataGather::Private::FScanDir::MarkDirty(FScanDir *this,bool param_1)

{
  FThreadSafeCounter *pFVar1;
  FAssetDataDiscovery *this_00;
  double dVar2;
  double dVar3;
  double local_res8;
  <lambda_1> local_res10 [8];
  
  dVar2 = __real_bff0000000000000;
  if (param_1) {
    ForEachDescendent<_UE::AssetDataGather::Private::FScanDir::MarkDirty_::__l5::<lambda_1>_>
              (this,local_res10);
    dVar2 = __real_bff0000000000000;
  }
  for (; dVar3 = __real_bff0000000000000, this != (FScanDir *)0x0; this = this->Parent) {
    __real_bff0000000000000 = dVar2;
    if ((this->MountDir != (FMountDir *)0x0) && (this->bIsComplete != false)) {
      this->bIsComplete = false;
      this_00 = this->MountDir->Discovery;
      local_res8 = dVar3;
      FAssetDataDiscovery::SetIsIdle(this_00,false,&local_res8);
      LOCK();
      pFVar1 = &this_00->NumDirectoriesToScan;
      pFVar1->Counter = pFVar1->Counter + 1;
      UNLOCK();
    }
    dVar2 = __real_bff0000000000000;
    __real_bff0000000000000 = dVar3;
  }
  __real_bff0000000000000 = dVar2;
  return;
}

// MarkFileAlreadyScanned @ 142b098b0

void __thiscall
UE::AssetDataGather::Private::FScanDir::MarkFileAlreadyScanned
          (FScanDir *this,TStringView<wchar_t> *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  wchar_t *pwVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  TStringView<wchar_t> local_48;
  FString local_38;
  
  if (this->bHasScanned == false) {
    local_48.DataPtr = param_1->DataPtr;
    local_48.Size = param_1->Size;
    local_48._12_4_ = *(undefined4 *)&param_1->field_0xc;
    bVar6 = FPathViews::IsPathLeaf(&local_48);
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("FPathViews::IsPathLeaf(BaseName)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                           ,0x3af,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = (this->AlreadyScannedFiles).ArrayNum;
    pFVar9 = (this->AlreadyScannedFiles).AllocatorInstance.Data;
    pFVar12 = pFVar9 + (longlong)iVar8 * 0x10;
    while( true ) {
      if ((this->AlreadyScannedFiles).ArrayNum != iVar8) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar9 == pFVar12) break;
      iVar10 = *(int *)(pFVar9 + 8) + -1;
      if (*(int *)(pFVar9 + 8) == 0) {
        iVar10 = 0;
      }
      iVar11 = (int)*(undefined8 *)&param_1->Size;
      if (iVar10 == iVar11) {
        if ((iVar10 != 0) && (iVar11 != 0)) {
          iVar7 = iVar11;
          if (iVar10 < iVar11) {
            iVar7 = iVar10;
          }
          iVar7 = FGenericPlatformStricmp::Strnicmp
                            (*(wchar_t **)pFVar9,param_1->DataPtr,(longlong)iVar7);
          if (iVar7 != 0) goto LAB_142b09990;
        }
        if (iVar10 == iVar11) {
          return;
        }
      }
LAB_142b09990:
      pFVar9 = pFVar9 + 0x10;
    }
    iVar8 = (this->AlreadyScannedFiles).ArrayNum;
    piVar1 = &(this->AlreadyScannedFiles).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->AlreadyScannedFiles).AllocatorInstance,piVar1);
    }
    uVar2 = *(undefined8 *)&param_1->Size;
    pwVar3 = param_1->DataPtr;
    (this->AlreadyScannedFiles).ArrayNum = iVar8 + 1;
    pFVar12 = (this->AlreadyScannedFiles).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar12->field_0x0)->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    *(undefined8 *)&pFVar12[8].field_0x0 = 0;
    pFVar9 = (FScriptContainerElement *)::FString::ConstructFromPtrSize(&local_38,pwVar3,(int)uVar2)
    ;
    if (pFVar12 != pFVar9) {
      pFVar4 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar12->field_0x0)->
               AllocatorInstance).Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar12->field_0x0)->AllocatorInstance).Data
           = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar9->field_0x0)->AllocatorInstance
             ).Data;
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar9->field_0x0)->AllocatorInstance).Data
           = (FScriptContainerElement *)0x0;
      *(int *)&pFVar12[8].field_0x0 = *(int *)&pFVar9[8].field_0x0;
      *(int *)&pFVar12[0xc].field_0x0 = *(int *)&pFVar9[0xc].field_0x0;
      *(undefined8 *)&pFVar9[8].field_0x0 = 0;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// RemoveSubDir @ 142b16a90

void __thiscall
UE::AssetDataGather::Private::FScanDir::RemoveSubDir(FScanDir *this,TStringView<wchar_t> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  undefined8 *puVar5;
  code *pcVar6;
  wchar_t *pwVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  TArray<TRefCountPtr<UE::AssetDataGather::Private::FScanDir>,TSizedDefaultAllocator<32>_> *pTVar13;
  longlong lVar14;
  uint uVar15;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48 [2];
  
  uVar12 = (this->SubDirs).ArrayNum;
  pFVar3 = (this->SubDirs).AllocatorInstance.Data;
  uVar15 = 0;
  if (0 < (int)uVar12) {
    do {
      local_68.DataPtr = param_1->DataPtr;
      local_68.Size = param_1->Size;
      local_68._12_4_ = *(undefined4 *)&param_1->field_0xc;
      iVar11 = (uVar12 >> 1) + uVar15;
      lVar4 = *(longlong *)(pFVar3 + (longlong)iVar11 * 8);
      local_78.DataPtr = *(wchar_t **)(lVar4 + 0x40);
      iVar2 = *(int *)(lVar4 + 0x48);
      local_58.Size = iVar2 + -1;
      if (iVar2 == 0) {
        local_58.Size = 0;
      }
      local_78.Size = local_58.Size;
      local_58._12_4_ = local_78._12_4_;
      local_58.DataPtr = local_78.DataPtr;
      bVar9 = FPathViews::Less(&local_58,&local_68);
      if (bVar9) {
        uVar15 = iVar11 + (uVar12 & 1);
      }
      uVar10 = uVar12 >> 1;
      uVar12 = uVar12 >> 1;
    } while (uVar10 != 0);
  }
  pTVar13 = &this->SubDirs;
  if ((int)uVar15 < (this->SubDirs).ArrayNum) {
    pwVar7 = param_1->DataPtr;
    uVar8._0_4_ = param_1->Size;
    uVar8._4_4_ = *(undefined4 *)&param_1->field_0xc;
    uVar12 = ~uVar15 >> 0x1f;
    if (((int)uVar15 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar14 = (longlong)(int)uVar15;
    lVar4 = *(longlong *)((pTVar13->AllocatorInstance).Data + lVar14 * 8);
    local_78.DataPtr = *(wchar_t **)(lVar4 + 0x40);
    iVar2 = *(int *)(lVar4 + 0x48);
    iVar11 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar11 = 0;
    }
    local_78.Size = iVar11;
    local_48[0].DataPtr = pwVar7;
    local_48[0]._8_8_ = uVar8;
    bVar9 = FPathViews::Equals(&local_78,local_48);
    if (bVar9) {
      uVar10 = 0;
      if ((int)uVar15 < (this->SubDirs).ArrayNum) {
        uVar10 = uVar12;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      Shutdown(*(FScanDir **)((pTVar13->AllocatorInstance).Data + lVar14 * 8));
      uVar10 = 0;
      if ((int)uVar15 < (this->SubDirs).ArrayNum) {
        uVar10 = uVar12;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar3 = (pTVar13->AllocatorInstance).Data;
      puVar5 = *(undefined8 **)(pFVar3 + lVar14 * 8);
      pFVar3 = pFVar3 + lVar14 * 8;
      if (puVar5 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar5 + 1);
        LOCK();
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar11 == 1) && (piVar1 != (int *)0x0)) {
          (**(code **)*puVar5)(puVar5,1);
        }
      }
      iVar11 = (this->SubDirs).ArrayNum + ~uVar15;
      if (iVar11 != 0) {
        memmove(pFVar3,pFVar3 + 8,(longlong)iVar11 << 3);
      }
      piVar1 = &(this->SubDirs).ArrayNum;
      *piVar1 = *piVar1 + -1;
      Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&pTVar13->AllocatorInstance,(this->SubDirs).ArrayNum,&(this->SubDirs).ArrayMax)
      ;
    }
  }
  return;
}

// SetComplete @ 142b1e000

void __thiscall UE::AssetDataGather::Private::FScanDir::SetComplete(FScanDir *this,bool param_1)

{
  int iVar1;
  FAssetDataDiscovery *this_00;
  FScanDir *this_01;
  int iVar2;
  double local_res8 [4];
  TStringView<wchar_t> local_18;
  
  if ((this->MountDir != (FMountDir *)0x0) && (this->bIsComplete != param_1)) {
    this->bIsComplete = param_1;
    this_00 = this->MountDir->Discovery;
    if (param_1) {
      LOCK();
      (this_00->NumDirectoriesToScan).Counter = (this_00->NumDirectoriesToScan).Counter + -1;
      UNLOCK();
      this_01 = this->Parent;
      if ((((this_01 != (FScanDir *)0x0) && (this_01->bHasScanned != false)) &&
          ((this->DirectData).bIsOnAllowList == false)) &&
         ((((this->DirectData).bMatchesDenyList == false &&
           ((this->DirectData).bIgnoreDenyList == false)) && ((this->SubDirs).ArrayNum == 0)))) {
        local_18.DataPtr = (wchar_t *)(this->RelPath).Data.AllocatorInstance.Data;
        iVar1 = (this->RelPath).Data.ArrayNum;
        iVar2 = iVar1 + -1;
        if (iVar1 == 0) {
          iVar2 = 0;
        }
        local_18.Size = iVar2;
        RemoveSubDir(this_01,&local_18);
        return;
      }
    }
    else {
      local_res8[0] = __real_bff0000000000000;
      FAssetDataDiscovery::SetIsIdle(this_00,false,local_res8);
      LOCK();
      (this_00->NumDirectoriesToScan).Counter = (this_00->NumDirectoriesToScan).Counter + 1;
      UNLOCK();
    }
  }
  return;
}

// SetScanInFlight @ 142b205c0

void __thiscall UE::AssetDataGather::Private::FScanDir::SetScanInFlight(FScanDir *this,bool param_1)

{
  this->bScanInFlight = param_1;
  return;
}

// SetScanInFlightInvalidated @ 142b205d0

void __thiscall
UE::AssetDataGather::Private::FScanDir::SetScanInFlightInvalidated(FScanDir *this,bool param_1)

{
  this->bScanInFlightInvalidated = param_1;
  return;
}

// SetScanResults @ 142b205e0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::AssetDataGather::Private::FScanDir::SetScanResults
          (FScanDir *this,TStringView<wchar_t> *param_1,FInherited *param_2,
          TArrayView<UE::AssetDataGather::Private::FDiscoveredPathData,int> *param_3,
          TArrayView<UE::AssetDataGather::Private::FDiscoveredPathData,int> *param_4)

{
  FThreadSafeCounter *pFVar1;
  undefined8 *puVar2;
  long64 *plVar3;
  FString *pFVar4;
  int iVar5;
  FAssetDataDiscovery *this_00;
  FDiscoveredPathData *pFVar6;
  FDiscoveredPathData *pFVar7;
  code *pcVar8;
  FScriptContainerElement *pFVar9;
  undefined8 uVar10;
  FScriptContainerElement *pFVar11;
  undefined8 uVar12;
  FScriptContainerElement *pFVar13;
  undefined8 uVar14;
  long64 lVar15;
  long64 lVar16;
  undefined8 uVar17;
  long64 lVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  double dVar30;
  bool bVar31;
  bool bVar32;
  FScanDir *pFVar33;
  longlong lVar34;
  uint uVar35;
  uint uVar36;
  longlong lVar37;
  uint uVar38;
  ulonglong uVar39;
  int iVar40;
  <lambda_1> <Var41;
  ulonglong uVar42;
  double local_res8;
  undefined4 uStack_4c;
  undefined4 uStack_3c;
  TStringView<wchar_t> local_38;
  
  dVar30 = __real_bff0000000000000;
  if ((this->MountDir != (FMountDir *)0x0) && (this->bIsComplete != false)) {
    this->bIsComplete = false;
    this_00 = this->MountDir->Discovery;
    local_res8 = dVar30;
    FAssetDataDiscovery::SetIsIdle(this_00,false,&local_res8);
    LOCK();
    pFVar1 = &this_00->NumDirectoriesToScan;
    pFVar1->Counter = pFVar1->Counter + 1;
    UNLOCK();
  }
  if ((this->bScanInFlightInvalidated != false) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bScanInFlightInvalidated",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                          ,0x3bd,L""), bVar31)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((this->MountDir == (FMountDir *)0x0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("MountDir",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                          ,0x3be,L""), bVar31)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (this->bHasScanned == false) {
    if ((param_2->bIsOnAllowList == false) && ((this->DirectData).bIsOnAllowList == false)) {
      bVar31 = false;
    }
    else {
      bVar31 = true;
    }
    if ((param_2->bMatchesDenyList == false) && ((this->DirectData).bMatchesDenyList == false)) {
      bVar19 = false;
    }
    else {
      bVar19 = true;
    }
    if ((param_2->bIgnoreDenyList == false) && ((this->DirectData).bIgnoreDenyList == false)) {
      bVar20 = false;
    }
    else {
      bVar20 = true;
    }
    iVar40 = param_3->ArrayNum;
    uVar38 = 0;
    if (0 < iVar40) {
      lVar37 = 0;
      do {
        uVar36 = 0;
        if ((int)uVar38 < iVar40) {
          uVar36 = ~uVar38 >> 0x1f;
        }
        if ((uVar36 == 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar32)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar6 = param_3->DataPtr;
        local_38.DataPtr =
             *(wchar_t **)((longlong)&(pFVar6->RelPath).Data.AllocatorInstance.Data + lVar37);
        iVar5 = *(int *)((longlong)&(pFVar6->RelPath).Data.ArrayNum + lVar37);
        iVar40 = iVar5 + -1;
        if (iVar5 == 0) {
          iVar40 = 0;
        }
        local_38._12_4_ = uStack_4c;
        local_38.Size = iVar40;
        pFVar33 = FindOrAddSubDir(this,&local_38);
        if (pFVar33->MountDir == (FMountDir *)0x0) {
LAB_142b20811:
          uVar35 = param_3->ArrayNum - 1;
          uVar36 = 0;
          if ((int)uVar35 < param_3->ArrayNum) {
            uVar36 = ~uVar35 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar32)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar7 = param_3->DataPtr;
          puVar2 = (undefined8 *)
                   ((longlong)&(pFVar6->LocalAbsPath).Data.AllocatorInstance.Data + lVar37);
          pFVar9 = (FScriptContainerElement *)*puVar2;
          uVar10 = puVar2[1];
          lVar34 = (longlong)param_3->ArrayNum;
          puVar2 = (undefined8 *)
                   ((longlong)&(pFVar6->LongPackageName).Data.AllocatorInstance.Data + lVar37);
          pFVar11 = (FScriptContainerElement *)*puVar2;
          uVar12 = puVar2[1];
          puVar2 = (undefined8 *)((longlong)&(pFVar6->RelPath).Data.AllocatorInstance.Data + lVar37)
          ;
          pFVar13 = (FScriptContainerElement *)*puVar2;
          uVar14 = puVar2[1];
          plVar3 = (long64 *)((longlong)&(pFVar6->PackageTimestamp).Ticks + lVar37);
          lVar15 = *plVar3;
          lVar16 = plVar3[1];
          uVar17 = *(undefined8 *)&pFVar7[lVar34 + -1].LocalAbsPath.Data.ArrayNum;
          puVar2 = (undefined8 *)
                   ((longlong)&(pFVar6->LocalAbsPath).Data.AllocatorInstance.Data + lVar37);
          *puVar2 = pFVar7[lVar34 + -1].LocalAbsPath.Data.AllocatorInstance.Data;
          puVar2[1] = uVar17;
          uVar17 = *(undefined8 *)&pFVar7[lVar34 + -1].LongPackageName.Data.ArrayNum;
          puVar2 = (undefined8 *)
                   ((longlong)&(pFVar6->LongPackageName).Data.AllocatorInstance.Data + lVar37);
          *puVar2 = pFVar7[lVar34 + -1].LongPackageName.Data.AllocatorInstance.Data;
          puVar2[1] = uVar17;
          uVar17 = *(undefined8 *)&pFVar7[lVar34 + -1].RelPath.Data.ArrayNum;
          puVar2 = (undefined8 *)((longlong)&(pFVar6->RelPath).Data.AllocatorInstance.Data + lVar37)
          ;
          *puVar2 = pFVar7[lVar34 + -1].RelPath.Data.AllocatorInstance.Data;
          puVar2[1] = uVar17;
          lVar18 = (&pFVar7[lVar34 + -1].PackageTimestamp)[1].Ticks;
          plVar3 = (long64 *)((longlong)&(pFVar6->PackageTimestamp).Ticks + lVar37);
          *plVar3 = pFVar7[lVar34 + -1].PackageTimestamp.Ticks;
          plVar3[1] = lVar18;
          pFVar6 = pFVar7 + lVar34 + -1;
          (pFVar6->LocalAbsPath).Data.AllocatorInstance.Data = pFVar9;
          (pFVar6->LocalAbsPath).Data.ArrayNum = (int)uVar10;
          (pFVar6->LocalAbsPath).Data.ArrayMax = (int)((ulonglong)uVar10 >> 0x20);
          pFVar4 = &pFVar7[lVar34 + -1].LongPackageName;
          (pFVar4->Data).AllocatorInstance.Data = pFVar11;
          (pFVar4->Data).ArrayNum = (int)uVar12;
          (pFVar4->Data).ArrayMax = (int)((ulonglong)uVar12 >> 0x20);
          pFVar4 = &pFVar7[lVar34 + -1].RelPath;
          (pFVar4->Data).AllocatorInstance.Data = pFVar13;
          (pFVar4->Data).ArrayNum = (int)uVar14;
          (pFVar4->Data).ArrayMax = (int)((ulonglong)uVar14 >> 0x20);
          pFVar7[lVar34 + -1].PackageTimestamp.Ticks = lVar15;
          (&pFVar7[lVar34 + -1].PackageTimestamp)[1] = (FDateTime)lVar16;
          iVar40 = param_3->ArrayNum + -1;
          if ((iVar40 < 0) &&
             (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x15c,L"Invalid count (%lld)"), bVar32)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if ((param_3->ArrayNum < iVar40) &&
             (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index + InNum <= ArrayNum",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x15d,
                                  L"Range (index: %lld, count: %lld) lies outside the view of %lld elements"
                                 ), bVar32)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar6 = param_3->DataPtr;
          if ((iVar40 < 0) &&
             (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar32)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          param_3->DataPtr = pFVar6;
          *(ulonglong *)&param_3->ArrayNum = CONCAT44(uStack_3c,iVar40);
        }
        else {
          if ((bVar31) || ((pFVar33->DirectData).bIsOnAllowList != false)) {
            bVar32 = true;
          }
          else {
            bVar32 = false;
          }
          if ((bVar19) || ((pFVar33->DirectData).bMatchesDenyList != false)) {
            bVar21 = true;
          }
          else {
            bVar21 = false;
          }
          if ((bVar20) || ((pFVar33->DirectData).bIgnoreDenyList != false)) {
            bVar22 = true;
          }
          else {
            bVar22 = false;
          }
          if ((!bVar32) || ((bVar21 && (!bVar22)))) goto LAB_142b20811;
          uVar38 = uVar38 + 1;
          lVar37 = lVar37 + 0x40;
        }
        iVar40 = param_3->ArrayNum;
      } while ((int)uVar38 < iVar40);
    }
    uVar39 = 0;
    iVar40 = param_4->ArrayNum;
    if ((iVar40 != 0) && (iVar5 = (this->AlreadyScannedFiles).ArrayNum, uVar42 = uVar39, 0 < iVar40)
       ) {
      do {
        uVar36 = (uint)uVar39;
        uVar38 = 0;
        if ((int)uVar36 < iVar40) {
          uVar38 = ~uVar36 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar31)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        <Var41.InFile =
             (FDiscoveredPathData *)
             ((longlong)&(param_4->DataPtr->LocalAbsPath).Data.AllocatorInstance.Data + uVar42);
        if ((iVar5 == 0) ||
           (bVar31 = Algo::
                     NoneOf<TArray<FString,TSizedDefaultAllocator<32>_>,__UE::AssetDataGather::Private::FScanDir::SetScanResults_::__l29::<lambda_1>::operator()_::__l2::<lambda_1>_>
                               (&this->AlreadyScannedFiles,<Var41), bVar31)) {
          uVar39 = (ulonglong)(uVar36 + 1);
          uVar42 = uVar42 + 0x40;
        }
        else {
          uVar36 = param_4->ArrayNum - 1;
          uVar38 = 0;
          if ((int)uVar36 < param_4->ArrayNum) {
            uVar38 = ~uVar36 >> 0x1f;
          }
          if ((uVar38 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar31)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar7 = param_4->DataPtr;
          pFVar9 = ((<Var41.InFile)->LocalAbsPath).Data.AllocatorInstance.Data;
          iVar24 = ((<Var41.InFile)->LocalAbsPath).Data.ArrayNum;
          iVar25 = ((<Var41.InFile)->LocalAbsPath).Data.ArrayMax;
          lVar37 = (longlong)param_4->ArrayNum;
          pFVar11 = ((<Var41.InFile)->LongPackageName).Data.AllocatorInstance.Data;
          iVar26 = ((<Var41.InFile)->LongPackageName).Data.ArrayNum;
          iVar27 = ((<Var41.InFile)->LongPackageName).Data.ArrayMax;
          pFVar13 = ((<Var41.InFile)->RelPath).Data.AllocatorInstance.Data;
          iVar28 = ((<Var41.InFile)->RelPath).Data.ArrayNum;
          iVar29 = ((<Var41.InFile)->RelPath).Data.ArrayMax;
          lVar15 = ((<Var41.InFile)->PackageTimestamp).Ticks;
          uVar10 = *(undefined8 *)&(<Var41.InFile)->bIsReadOnly;
          pFVar6 = pFVar7 + lVar37 + -1;
          iVar40 = (pFVar6->LocalAbsPath).Data.ArrayNum;
          iVar23 = (pFVar6->LocalAbsPath).Data.ArrayMax;
          ((<Var41.InFile)->LocalAbsPath).Data.AllocatorInstance.Data =
               (pFVar6->LocalAbsPath).Data.AllocatorInstance.Data;
          ((<Var41.InFile)->LocalAbsPath).Data.ArrayNum = iVar40;
          ((<Var41.InFile)->LocalAbsPath).Data.ArrayMax = iVar23;
          pFVar4 = &pFVar7[lVar37 + -1].LongPackageName;
          iVar40 = (pFVar4->Data).ArrayNum;
          iVar23 = (pFVar4->Data).ArrayMax;
          ((<Var41.InFile)->LongPackageName).Data.AllocatorInstance.Data =
               (pFVar4->Data).AllocatorInstance.Data;
          ((<Var41.InFile)->LongPackageName).Data.ArrayNum = iVar40;
          ((<Var41.InFile)->LongPackageName).Data.ArrayMax = iVar23;
          pFVar4 = &pFVar7[lVar37 + -1].RelPath;
          iVar40 = (pFVar4->Data).ArrayNum;
          iVar23 = (pFVar4->Data).ArrayMax;
          ((<Var41.InFile)->RelPath).Data.AllocatorInstance.Data =
               (pFVar4->Data).AllocatorInstance.Data;
          ((<Var41.InFile)->RelPath).Data.ArrayNum = iVar40;
          ((<Var41.InFile)->RelPath).Data.ArrayMax = iVar23;
          uVar12 = (&pFVar7[lVar37 + -1].PackageTimestamp)[1];
          ((<Var41.InFile)->PackageTimestamp).Ticks = pFVar7[lVar37 + -1].PackageTimestamp.Ticks;
          *(undefined8 *)&(<Var41.InFile)->bIsReadOnly = uVar12;
          pFVar6 = pFVar7 + lVar37 + -1;
          (pFVar6->LocalAbsPath).Data.AllocatorInstance.Data = pFVar9;
          (pFVar6->LocalAbsPath).Data.ArrayNum = iVar24;
          (pFVar6->LocalAbsPath).Data.ArrayMax = iVar25;
          pFVar4 = &pFVar7[lVar37 + -1].LongPackageName;
          (pFVar4->Data).AllocatorInstance.Data = pFVar11;
          (pFVar4->Data).ArrayNum = iVar26;
          (pFVar4->Data).ArrayMax = iVar27;
          pFVar4 = &pFVar7[lVar37 + -1].RelPath;
          (pFVar4->Data).AllocatorInstance.Data = pFVar13;
          (pFVar4->Data).ArrayNum = iVar28;
          (pFVar4->Data).ArrayMax = iVar29;
          pFVar7[lVar37 + -1].PackageTimestamp.Ticks = lVar15;
          (&pFVar7[lVar37 + -1].PackageTimestamp)[1] = (FDateTime)uVar10;
          iVar40 = param_4->ArrayNum + -1;
          if ((iVar40 < 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x15c,L"Invalid count (%lld)"), bVar31)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if ((param_4->ArrayNum < iVar40) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index + InNum <= ArrayNum",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x15d,
                                  L"Range (index: %lld, count: %lld) lies outside the view of %lld elements"
                                 ), bVar31)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar6 = param_4->DataPtr;
          if ((iVar40 < 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar31)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          param_4->DataPtr = pFVar6;
          *(ulonglong *)&param_4->ArrayNum = CONCAT44(uStack_3c,iVar40);
        }
        iVar40 = param_4->ArrayNum;
      } while ((int)uVar39 < iVar40);
    }
    DestructItems<FString,int>
              ((FString *)(this->AlreadyScannedFiles).AllocatorInstance.Data,
               (this->AlreadyScannedFiles).ArrayNum);
    (this->AlreadyScannedFiles).ArrayNum = 0;
    if ((this->AlreadyScannedFiles).ArrayMax != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->AlreadyScannedFiles).AllocatorInstance,0,
                 &(this->AlreadyScannedFiles).ArrayMax);
    }
    this->MountDir->bHasStartedScanning = true;
    this->bHasScanned = true;
  }
  else {
    bVar31 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<1152219097065325504>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                        ,0x3c0,"!bHasScanned");
    if (bVar31) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  return;
}

// ShouldScan @ 142b21040

bool __thiscall
UE::AssetDataGather::Private::FScanDir::ShouldScan(FScanDir *this,FInherited *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  
  if ((this->bHasScanned == false) && (this->MountDir != (FMountDir *)0x0)) {
    if ((param_1->bIsOnAllowList == false) && ((this->DirectData).bIsOnAllowList == false)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((param_1->bMatchesDenyList == false) && ((this->DirectData).bMatchesDenyList == false)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((param_1->bIgnoreDenyList == false) && ((this->DirectData).bIgnoreDenyList == false)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar1) && ((!bVar2 || (bVar3)))) {
      return true;
    }
  }
  return false;
}

// Shrink @ 142b224a0

void __thiscall UE::AssetDataGather::Private::FScanDir::Shrink(FScanDir *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->SubDirs).AllocatorInstance.Data;
  iVar3 = (this->SubDirs).ArrayNum;
  pFVar2 = pFVar4 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->SubDirs).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TRefCountPtr<UE::AssetDataGather::Private::FScanDir>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar2) break;
    Shrink(*(FScanDir **)pFVar4);
    pFVar4 = pFVar4 + 8;
  }
  iVar3 = (this->SubDirs).ArrayNum;
  piVar1 = &(this->SubDirs).ArrayMax;
  if (*piVar1 != iVar3) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,&(this->SubDirs).AllocatorInstance,iVar3,piVar1);
  }
  iVar3 = (this->AlreadyScannedFiles).ArrayNum;
  if ((this->AlreadyScannedFiles).ArrayMax != iVar3) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,&(this->AlreadyScannedFiles).AllocatorInstance,iVar3,
               &(this->AlreadyScannedFiles).ArrayMax);
  }
  return;
}

// Shutdown @ 142b22960

void __thiscall UE::AssetDataGather::Private::FScanDir::Shutdown(FScanDir *this)

{
  int *piVar1;
  FThreadSafeCounter *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  if (this->MountDir != (FMountDir *)0x0) {
    pFVar7 = (this->SubDirs).AllocatorInstance.Data;
    iVar5 = (this->SubDirs).ArrayNum;
    pFVar3 = pFVar7 + (longlong)iVar5 * 8;
    while( true ) {
      if ((this->SubDirs).ArrayNum != iVar5) {
        `TCheckedPointerIterator<TRefCountPtr<UE::AssetDataGather::Private::FScanDir>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar7 == pFVar3) break;
      Shutdown(*(FScanDir **)pFVar7);
      puVar6 = *(undefined8 **)pFVar7;
      if (puVar6 != (undefined8 *)0x0) {
        *(longlong *)pFVar7 = 0;
        piVar1 = (int *)(puVar6 + 1);
        LOCK();
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar4 == 1) && (piVar1 != (int *)0x0)) {
          (**(code **)*puVar6)(puVar6,1);
        }
      }
      pFVar7 = pFVar7 + 8;
    }
    DestructItems<TRefCountPtr<UE::AssetDataGather::Private::FScanDir>,int>
              ((TRefCountPtr<UE::AssetDataGather::Private::FScanDir> *)
               (this->SubDirs).AllocatorInstance.Data,(this->SubDirs).ArrayNum);
    piVar1 = &(this->SubDirs).ArrayMax;
    (this->SubDirs).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->SubDirs).AllocatorInstance,0,piVar1);
    }
    if (this->bIsComplete == false) {
      LOCK();
      pFVar2 = &this->MountDir->Discovery->NumDirectoriesToScan;
      pFVar2->Counter = pFVar2->Counter + -1;
      UNLOCK();
    }
    this->MountDir = (FMountDir *)0x0;
    this->Parent = (FScanDir *)0x0;
  }
  return;
}

// TrySetDirectoryProperties @ 142b28e90

void __thiscall
UE::AssetDataGather::Private::FScanDir::TrySetDirectoryProperties
          (FScanDir *this,FPathExistence *param_1,TStringView<wchar_t> *param_2,FInherited *param_3,
          FSetPathProperties *param_4,FScanDirAndParentData *param_5,TStringView<wchar_t> *param_6,
          bool *param_7)

{
  bool *pbVar1;
  int *piVar2;
  FThreadSafeCounter *pFVar3;
  int iVar4;
  FAssetDataDiscovery *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  wchar_t *pwVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  undefined4 uVar12;
  double dVar13;
  bool bVar14;
  FScanDir *pFVar15;
  longlong *plVar16;
  bool local_res8 [8];
  FInherited local_178;
  <lambda_4> local_174 [4];
  FSetPathProperties local_170;
  char local_168;
  <lambda_1> local_160;
  <lambda_2> local_15f [7];
  TStringView<wchar_t> local_158;
  TStringView<wchar_t> local_148;
  double local_138;
  double local_130;
  <lambda_3> local_128;
  double local_120;
  double local_118;
  double local_110 [3];
  FString local_f8;
  FScriptContainerElement *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  FScriptContainerElement *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  TStringView<wchar_t> local_c8;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58 [2];
  
  if ((this->MountDir == (FMountDir *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                          ,0x2de,L""), bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  dVar13 = __real_bff0000000000000;
  bVar14 = (param_4->IsOnAllowList).bIsSet;
  if (param_2->Size == 0) {
    if ((bVar14 != false) &&
       ((this->DirectData).bIsOnAllowList != (param_4->IsOnAllowList).TypedValue)) {
      *param_7 = true;
      if ((this->MountDir != (FMountDir *)0x0) && (this->bIsComplete != false)) {
        this->bIsComplete = false;
        pFVar5 = this->MountDir->Discovery;
        local_138 = dVar13;
        FAssetDataDiscovery::SetIsIdle(pFVar5,false,&local_138);
        LOCK();
        pFVar3 = &pFVar5->NumDirectoriesToScan;
        pFVar3->Counter = pFVar3->Counter + 1;
        UNLOCK();
      }
      if (this->bScanInFlight != false) {
        this->bScanInFlightInvalidated = true;
      }
      if (((param_4->IsOnAllowList).bIsSet == false) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      bVar14 = (param_4->IsOnAllowList).TypedValue;
      (this->DirectData).bIsOnAllowList = bVar14;
      if (bVar14 == false) {
        ForEachDescendent<_UE::AssetDataGather::Private::FScanDir::TrySetDirectoryProperties_::__l23::<lambda_2>_>
                  (this,local_15f);
      }
      else {
        ForEachDescendent<_UE::AssetDataGather::Private::FScanDir::TrySetDirectoryProperties_::__l21::<lambda_1>_>
                  (this,&local_160);
      }
    }
    pbVar1 = &(this->DirectData).bMatchesDenyList;
    if ((((param_4->MatchesDenyList).bIsSet != false) &&
        (*pbVar1 != (param_4->MatchesDenyList).TypedValue)) ||
       (((param_4->IgnoreDenyList).bIsSet != false &&
        ((this->DirectData).bIgnoreDenyList != (param_4->IgnoreDenyList).TypedValue)))) {
      *param_7 = true;
      if ((this->MountDir != (FMountDir *)0x0) && (this->bIsComplete != false)) {
        this->bIsComplete = false;
        pFVar5 = this->MountDir->Discovery;
        local_130 = dVar13;
        FAssetDataDiscovery::SetIsIdle(pFVar5,false,&local_130);
        LOCK();
        pFVar3 = &pFVar5->NumDirectoriesToScan;
        pFVar3->Counter = pFVar3->Counter + 1;
        UNLOCK();
      }
      if ((param_4->MatchesDenyList).bIsSet != false) {
        *pbVar1 = (param_4->MatchesDenyList).TypedValue;
      }
      if ((param_4->IgnoreDenyList).bIsSet != false) {
        (this->DirectData).bIgnoreDenyList = (param_4->IgnoreDenyList).TypedValue;
      }
      bVar14 = false;
      bVar9 = false;
      pFVar15 = this;
      do {
        if ((bVar14) || ((pFVar15->DirectData).bIgnoreDenyList != false)) {
          bVar14 = true;
        }
        if ((bVar9) || ((pFVar15->DirectData).bMatchesDenyList != false)) {
          bVar9 = true;
        }
        pFVar15 = pFVar15->Parent;
      } while (pFVar15 != (FScanDir *)0x0);
      if ((!bVar9) || (bVar14)) {
        local_res8[0] = false;
      }
      else {
        local_res8[0] = true;
        if (this->bScanInFlight != false) {
          this->bScanInFlightInvalidated = true;
        }
      }
      local_128.bIsOnDenyList = local_res8;
      ForEachDescendent<_UE::AssetDataGather::Private::FScanDir::TrySetDirectoryProperties_::__l26::<lambda_3>_>
                (this,&local_128);
    }
    if ((param_4->HasScanned).bIsSet != false) {
      *param_7 = true;
      if ((this->MountDir != (FMountDir *)0x0) && (this->bIsComplete != false)) {
        this->bIsComplete = false;
        pFVar5 = this->MountDir->Discovery;
        local_120 = dVar13;
        FAssetDataDiscovery::SetIsIdle(pFVar5,false,&local_120);
        LOCK();
        pFVar3 = &pFVar5->NumDirectoriesToScan;
        pFVar3->Counter = pFVar3->Counter + 1;
        UNLOCK();
      }
      if (((param_4->HasScanned).bIsSet == false) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_174[0].bNewValue = (param_4->HasScanned).TypedValue;
      if (this->bScanInFlight != false) {
        this->bScanInFlightInvalidated = true;
      }
      this->bHasScanned = local_174[0].bNewValue;
      piVar2 = &(this->AlreadyScannedFiles).ArrayMax;
      pFVar6 = (this->AlreadyScannedFiles).AllocatorInstance.Data;
      iVar4 = (this->AlreadyScannedFiles).ArrayNum;
      if (*piVar2 < 0) {
        DestructItems<FString,int>((FString *)pFVar6,iVar4);
        (this->AlreadyScannedFiles).ArrayNum = 0;
        if (*piVar2 != 0) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,&(this->AlreadyScannedFiles).AllocatorInstance,0,piVar2);
        }
      }
      else {
        DestructItems<FString,int>((FString *)pFVar6,iVar4);
        (this->AlreadyScannedFiles).ArrayNum = 0;
      }
      ForEachDescendent<_UE::AssetDataGather::Private::FScanDir::TrySetDirectoryProperties_::__l40::<lambda_4>_>
                (this,local_174);
    }
    pFVar15 = (param_5->ScanDir).Reference;
    if (pFVar15 != this) {
      (param_5->ScanDir).Reference = this;
      LOCK();
      *(int *)&this->_padding_ = (int)this->_padding_ + 1;
      UNLOCK();
      if (pFVar15 != (FScanDir *)0x0) {
        plVar16 = &pFVar15->_padding_;
        LOCK();
        lVar11 = *plVar16;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((((int)lVar11 == 1) && (plVar16 != (longlong *)0x0)) && (pFVar15 != (FScanDir *)0x0)) {
          (**(code **)pFVar15->_padding_)(pFVar15,1);
        }
      }
    }
    bVar14 = param_3->bMatchesDenyList;
    (param_5->ParentData).bIsOnAllowList = param_3->bIsOnAllowList;
    (param_5->ParentData).bMatchesDenyList = bVar14;
    (param_5->ParentData).bIgnoreDenyList = param_3->bIgnoreDenyList;
    param_6->DataPtr = (wchar_t *)0x0;
    *(undefined8 *)&param_6->Size = 0;
    return;
  }
  local_168 = '\0';
  if ((bVar14 != false) && ((this->DirectData).bIsOnAllowList != false)) {
    if (param_4 == &local_170) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0x1bd,
                          L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                         );
      if (bVar14) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    else {
      local_170.IsOnAllowList.TypedValue = (param_4->IsOnAllowList).TypedValue;
      local_170.MatchesDenyList.bIsSet = (param_4->MatchesDenyList).bIsSet;
      if (local_170.MatchesDenyList.bIsSet != false) {
        local_170.MatchesDenyList.TypedValue = (param_4->MatchesDenyList).TypedValue;
      }
      local_170.IgnoreDenyList.bIsSet = (param_4->IgnoreDenyList).bIsSet;
      if (local_170.IgnoreDenyList.bIsSet != false) {
        local_170.IgnoreDenyList.TypedValue = (param_4->IgnoreDenyList).TypedValue;
      }
      local_170.HasScanned.bIsSet = (param_4->HasScanned).bIsSet;
      if (local_170.HasScanned.bIsSet != false) {
        local_170.HasScanned.TypedValue = (param_4->HasScanned).TypedValue;
      }
      local_168 = '\x01';
      local_170.IsOnAllowList.bIsSet = bVar14;
    }
    if (local_170.IsOnAllowList.bIsSet != false) {
      local_170.IsOnAllowList.bIsSet = false;
    }
    if ((local_168 == '\0') &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    param_4 = &local_170;
  }
  local_c8.DataPtr = param_2->DataPtr;
  local_c8.Size = param_2->Size;
  local_c8._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_158.DataPtr = (wchar_t *)0x0;
  local_158.Size = 0;
  local_148.DataPtr = (wchar_t *)0x0;
  local_148.Size = 0;
  FPathViews::SplitFirstComponent(&local_c8,&local_158,&local_148);
  dVar13 = __real_bff0000000000000;
  if ((param_3->bIsOnAllowList == false) && ((this->DirectData).bIsOnAllowList == false)) {
    local_178.bIsOnAllowList = false;
  }
  else {
    local_178.bIsOnAllowList = true;
  }
  if ((param_3->bMatchesDenyList == false) && ((this->DirectData).bMatchesDenyList == false)) {
    local_178.bMatchesDenyList = false;
  }
  else {
    local_178.bMatchesDenyList = true;
  }
  if ((param_3->bIgnoreDenyList == false) && ((this->DirectData).bIgnoreDenyList == false)) {
    local_178.bIgnoreDenyList = false;
  }
  else {
    local_178.bIgnoreDenyList = true;
  }
  if ((((this->bHasScanned == false) ||
       (((param_4->HasScanned).bIsSet != false && ((param_4->HasScanned).TypedValue != true)))) ||
      (((param_4->IsOnAllowList).bIsSet != false &&
       ((param_4->IsOnAllowList).TypedValue != local_178.bIsOnAllowList)))) ||
     ((((param_4->IgnoreDenyList).bIsSet != false &&
       ((param_4->IgnoreDenyList).TypedValue != local_178.bIgnoreDenyList)) ||
      (((param_4->MatchesDenyList).bIsSet != false &&
       ((param_4->MatchesDenyList).TypedValue != local_178.bMatchesDenyList)))))) {
    local_a8._12_4_ = local_158._12_4_;
    local_a8.Size = local_158.Size;
    local_a8.DataPtr = local_158.DataPtr;
    pFVar15 = FindSubDir(this,&local_a8);
    if (pFVar15 == (FScanDir *)0x0) {
      if (param_1->bHasExistenceData == false) {
        FPathExistence::LoadExistenceData(param_1);
        GetLocalAbsPath(this,&local_f8);
        local_e8 = local_f8.Data.AllocatorInstance.Data;
        local_d8 = (param_1->LocalAbsPath).Data.AllocatorInstance.Data;
        iStack_e0 = local_f8.Data.ArrayNum + -1;
        if (local_f8.Data.ArrayNum == 0) {
          iStack_e0 = 0;
        }
        iVar4 = (param_1->LocalAbsPath).Data.ArrayNum;
        local_98._12_4_ = uStack_dc;
        local_98.Size = iStack_e0;
        local_98.DataPtr = (wchar_t *)local_f8.Data.AllocatorInstance.Data;
        iStack_d0 = iVar4 + -1;
        if (iVar4 == 0) {
          iStack_d0 = 0;
        }
        local_88._12_4_ = uStack_cc;
        local_88.Size = iStack_d0;
        local_88.DataPtr = (wchar_t *)local_d8;
        bVar14 = FPathViews::TryMakeChildPathRelativeTo(&local_88,&local_98,param_2);
        if ((!bVar14) &&
           (bVar14 = Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<1152219097065325431>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                                ,0x377,
                                "FPathViews::TryMakeChildPathRelativeTo(QueryPath.GetLocalAbsPath(), ThisDirAbsPath, InRelPath)"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_78.DataPtr = param_2->DataPtr;
        local_78.Size = param_2->Size;
        local_78._12_4_ = *(undefined4 *)&param_2->field_0xc;
        FPathViews::SplitFirstComponent(&local_78,&local_158,&local_148);
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
      }
      FPathExistence::LoadExistenceData(param_1);
      if ((param_1->PathType == MissingParentDir) ||
         ((local_148.Size == 0 &&
          (FPathExistence::LoadExistenceData(param_1), param_1->PathType != Directory)))) {
        pFVar15 = (param_5->ScanDir).Reference;
        if (pFVar15 != this) {
          (param_5->ScanDir).Reference = this;
          LOCK();
          *(int *)&this->_padding_ = (int)this->_padding_ + 1;
          UNLOCK();
          if (pFVar15 != (FScanDir *)0x0) {
            plVar16 = &pFVar15->_padding_;
            LOCK();
            lVar11 = *plVar16;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((((int)lVar11 == 1) && (plVar16 != (longlong *)0x0)) && (pFVar15 != (FScanDir *)0x0)
               ) {
              (**(code **)pFVar15->_padding_)(pFVar15,1);
            }
          }
        }
        goto LAB_142b29424;
      }
      local_68._12_4_ = local_158._12_4_;
      local_68.Size = local_158.Size;
      local_68.DataPtr = local_158.DataPtr;
      pFVar15 = FindOrAddSubDir(this,&local_68);
      if ((this->bHasScanned != false) && (pFVar15->MountDir != (FMountDir *)0x0)) {
        if ((local_178.bIsOnAllowList == false) && ((pFVar15->DirectData).bIsOnAllowList == false))
        {
          bVar14 = false;
        }
        else {
          bVar14 = true;
        }
        if ((local_178.bMatchesDenyList == false) &&
           ((pFVar15->DirectData).bMatchesDenyList == false)) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        if ((local_178.bIgnoreDenyList == false) && ((pFVar15->DirectData).bIgnoreDenyList == false)
           ) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if ((bVar14) && ((!bVar9 || (bVar10)))) {
          pFVar15->bHasScanned = true;
        }
      }
      *param_7 = true;
      if ((this->MountDir != (FMountDir *)0x0) && (this->bIsComplete != false)) {
        this->bIsComplete = false;
        pFVar5 = this->MountDir->Discovery;
        local_118 = dVar13;
        FAssetDataDiscovery::SetIsIdle(pFVar5,false,&local_118);
        LOCK();
        pFVar3 = &pFVar5->NumDirectoriesToScan;
        pFVar3->Counter = pFVar3->Counter + 1;
        UNLOCK();
      }
    }
  }
  else {
    local_b8._12_4_ = local_158._12_4_;
    local_b8.Size = local_158.Size;
    local_b8.DataPtr = local_158.DataPtr;
    pFVar15 = FindSubDir(this,&local_b8);
    if (pFVar15 == (FScanDir *)0x0) {
      pFVar15 = (param_5->ScanDir).Reference;
      if (pFVar15 != this) {
        (param_5->ScanDir).Reference = this;
        LOCK();
        *(int *)&this->_padding_ = (int)this->_padding_ + 1;
        UNLOCK();
        if (pFVar15 != (FScanDir *)0x0) {
          plVar16 = &pFVar15->_padding_;
          LOCK();
          lVar11 = *plVar16;
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
          if ((((int)lVar11 == 1) && (plVar16 != (longlong *)0x0)) && (pFVar15 != (FScanDir *)0x0))
          {
            (**(code **)pFVar15->_padding_)(pFVar15,1);
          }
        }
      }
LAB_142b29424:
      pwVar8 = param_2->DataPtr;
      iVar4 = param_2->Size;
      uVar12 = *(undefined4 *)&param_2->field_0xc;
      bVar14 = param_3->bMatchesDenyList;
      (param_5->ParentData).bIsOnAllowList = param_3->bIsOnAllowList;
      (param_5->ParentData).bMatchesDenyList = bVar14;
      (param_5->ParentData).bIgnoreDenyList = param_3->bIgnoreDenyList;
      param_6->DataPtr = pwVar8;
      param_6->Size = iVar4;
      *(undefined4 *)&param_6->field_0xc = uVar12;
      return;
    }
  }
  local_58[0]._12_4_ = local_148._12_4_;
  local_58[0].Size = local_148.Size;
  local_58[0].DataPtr = local_148.DataPtr;
  TrySetDirectoryProperties(pFVar15,param_1,local_58,&local_178,param_4,param_5,param_6,param_7);
  pFVar15 = (param_5->ScanDir).Reference;
  if ((pFVar15 != (FScanDir *)0x0) && (pFVar15->bIsComplete == false)) {
    *param_7 = true;
    if ((this->MountDir != (FMountDir *)0x0) && (this->bIsComplete != false)) {
      this->bIsComplete = false;
      pFVar5 = this->MountDir->Discovery;
      local_110[0] = dVar13;
      FAssetDataDiscovery::SetIsIdle(pFVar5,false,local_110);
      LOCK();
      pFVar3 = &pFVar5->NumDirectoriesToScan;
      pFVar3->Counter = pFVar3->Counter + 1;
      UNLOCK();
    }
  }
  return;
}

// Update @ 142b2b2d0

/* WARNING: Removing unreachable block (ram,0x000142b2b486) */
/* WARNING: Removing unreachable block (ram,0x000142b2b4a1) */
/* WARNING: Removing unreachable block (ram,0x000142b2b4a6) */
/* WARNING: Removing unreachable block (ram,0x000142b2b4b3) */

void __thiscall
UE::AssetDataGather::Private::FScanDir::Update
          (FScanDir *this,
          TArray<UE::AssetDataGather::Private::FScanDirAndParentData,TSizedDefaultAllocator<32>_>
          *param_1,FInherited *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  ForAnyElementType FVar8;
  byte bVar9;
  undefined1 local_res20 [8];
  FInherited local_68 [2];
  FScriptContainerElement *local_60;
  FScanDir *local_58;
  undefined2 local_50;
  FScriptContainerElement local_4e;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  
  if ((this->MountDir == (FMountDir *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("MountDir",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                         ,0x3f6,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (this->bIsComplete != false) {
    return;
  }
  if ((this->bHasScanned == false) && (this->MountDir != (FMountDir *)0x0)) {
    if ((param_2->bIsOnAllowList == false) && ((this->DirectData).bIsOnAllowList == false)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((param_2->bMatchesDenyList == false) && ((this->DirectData).bMatchesDenyList == false)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((param_2->bIgnoreDenyList == false) && ((this->DirectData).bIgnoreDenyList == false)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((bVar4) && ((!bVar3 || (bVar5)))) {
      bVar3 = true;
      LOCK();
      *(int *)&this->_padding_ = (int)this->_padding_ + 1;
      UNLOCK();
      local_50._0_1_ = param_2->bIsOnAllowList;
      local_50._1_1_ = param_2->bMatchesDenyList;
      pFVar7 = (param_1->AllocatorInstance).Data;
      local_4e = (FScriptContainerElement)param_2->bIgnoreDenyList;
      local_58 = this;
      if (((pFVar7 <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 < pFVar7 + (longlong)param_1->ArrayMax * 0x10)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = param_1->ArrayNum;
      if (iVar6 == param_1->ArrayMax) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar6 + 1;
      pFVar7 = (param_1->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
      *(undefined8 *)pFVar7 = 0;
      *(FScanDir **)pFVar7 = local_58;
      *(undefined2 *)(pFVar7 + 8) = local_50;
      pFVar7[10] = local_4e;
      local_58 = (FScanDir *)0x0;
      bVar4 = true;
      goto LAB_142b2b4be;
    }
  }
  bVar4 = false;
  bVar3 = false;
LAB_142b2b4be:
  iVar6 = (this->SubDirs).ArrayNum;
  bVar9 = 1;
  if (iVar6 != 0) {
    if ((param_2->bIsOnAllowList != false) ||
       (local_68[0].bIsOnAllowList = false, (this->DirectData).bIsOnAllowList != false)) {
      local_68[0].bIsOnAllowList = true;
    }
    if ((param_2->bMatchesDenyList != false) ||
       (local_68[0].bMatchesDenyList = false, (this->DirectData).bMatchesDenyList != false)) {
      local_68[0].bMatchesDenyList = true;
    }
    if ((param_2->bIgnoreDenyList != false) ||
       (local_68[0].bIgnoreDenyList = false, (this->DirectData).bIgnoreDenyList != false)) {
      local_68[0].bIgnoreDenyList = true;
    }
    pFVar7 = (this->SubDirs).AllocatorInstance.Data;
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = iVar6;
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar6,0,&local_48,iVar6,&local_3c);
    ConstructItems<TRefCountPtr<UE::AssetDataGather::Private::FScanDir>,TRefCountPtr<UE::AssetDataGather::Private::FScanDir>,int>
              (local_48.Data,(TRefCountPtr<UE::AssetDataGather::Private::FScanDir> *)pFVar7,iVar6);
    iVar6 = local_40;
    pFVar7 = local_48.Data + (longlong)local_40 * 8;
    FVar8.Data = local_48.Data;
    local_60 = pFVar7;
    while( true ) {
      if (local_40 != iVar6) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TRefCountPtr<UE::AssetDataGather::Private::FScanDir>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (FVar8.Data == pFVar7) break;
      if ((*(FScanDir **)FVar8.Data)->bIsComplete == false) {
        iVar1 = param_1->ArrayNum;
        Update(*(FScanDir **)FVar8.Data,param_1,local_68);
        bVar4 = (*(FScanDir **)FVar8.Data)->bIsComplete;
        if (((param_1->ArrayNum <= iVar1) && (bVar4 == false)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("OutScanRequests.Num() > PreviousCount || bSubDirComplete",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                               ,0x410,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        bVar9 = bVar9 & bVar4;
        pFVar7 = local_60;
      }
      FVar8.Data = FVar8.Data + 8;
    }
    DestructItems<TRefCountPtr<UE::AssetDataGather::Private::FScanDir>,int>
              ((TRefCountPtr<UE::AssetDataGather::Private::FScanDir> *)local_48.Data,local_40);
    bVar4 = bVar3;
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
  }
  if ((!bVar4) && (bVar9 != 0)) {
    SetComplete(this,true);
  }
  return;
}

