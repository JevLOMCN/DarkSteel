// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 18

// FPackageResourceManagerFile @ 14212bab0

FPackageResourceManagerFile * __thiscall
FPackageResourceManagerFile::FPackageResourceManagerFile(FPackageResourceManagerFile *this)

{
  *this = (FPackageResourceManagerFile)&___7FPackageResourceManagerFile__6B_;
  return this;
}

// ~FPackageResourceManagerFile @ 14212c9c0

void __thiscall
FPackageResourceManagerFile::~FPackageResourceManagerFile(FPackageResourceManagerFile *this)

{
  return;
}

// DoesExternalResourceExist @ 142138240

bool __thiscall
FPackageResourceManagerFile::DoesExternalResourceExist
          (FPackageResourceManagerFile *this,EPackageExternalResource param_1,
          TStringView<wchar_t> *param_2)

{
  code *pcVar1;
  FBulkDataCookedIndex FVar2;
  bool bVar3;
  undefined1 uVar4;
  bool local_res10 [24];
  FPackagePath local_38;
  <lambda_1> local_28;
  TStringView<wchar_t> local_18;
  
  if (param_1 == WorkspaceDomainFile) {
    local_18.DataPtr = param_2->DataPtr;
    local_18.Size = param_2->Size;
    local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
    local_38.PackageName.ComparisonIndex.Value = 0;
    local_38.PackageName.Number = 0;
    local_38.HeaderExtension = Unspecified;
    bVar3 = FPackagePath::TryFromPackageName(&local_18,&local_38);
    FVar2 = FBulkDataCookedIndex::Default;
    if (bVar3) {
      local_res10[0] = false;
      local_28.FileManager = IFileManager::Get();
      local_28.bResult = local_res10;
      IteratePossibleFiles<_FPackageResourceManagerFile::DoesPackageExist_::__l2::<lambda_1>_>
                (this,&local_38,FVar2,Header,(FPackagePath *)0x0,&local_28);
      return local_res10[0];
    }
  }
  else {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PackageResourceManagerFile.cpp"
                       ,0x177,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  return false;
}

// DoesPackageExist @ 142138310

bool __thiscall
FPackageResourceManagerFile::DoesPackageExist
          (FPackageResourceManagerFile *this,FPackagePath *param_1,FBulkDataCookedIndex param_2,
          EPackageSegment param_3,FPackagePath *param_4)

{
  bool local_28 [8];
  <lambda_1> local_20;
  
  local_28[0] = false;
  local_20.FileManager = IFileManager::Get();
  local_20.bResult = local_28;
  IteratePossibleFiles<_FPackageResourceManagerFile::DoesPackageExist_::__l2::<lambda_1>_>
            (this,param_1,param_2,param_3,param_4,&local_20);
  return local_28[0];
}

// FileSize @ 142139510

long64 __thiscall
FPackageResourceManagerFile::FileSize
          (FPackageResourceManagerFile *this,FPackagePath *param_1,FBulkDataCookedIndex param_2,
          EPackageSegment param_3,FPackagePath *param_4)

{
  long64 local_28;
  <lambda_1> local_20;
  
  local_28 = -1;
  local_20.FileManager = IFileManager::Get();
  local_20.Result = &local_28;
  IteratePossibleFiles<_FPackageResourceManagerFile::FileSize_::__l2::<lambda_1>_>
            (this,param_1,param_2,param_3,param_4,&local_20);
  return local_28;
}

// FindPackagesRecursive @ 14213a490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPackageResourceManagerFile::FindPackagesRecursive
          (FPackageResourceManagerFile *this,
          TArray<TTuple<FPackagePath,EPackageSegment>,TSizedDefaultAllocator<32>_> *param_1,
          TStringView<wchar_t> *param_2,TStringView<wchar_t> *param_3,TStringView<wchar_t> *param_4,
          TStringView<wchar_t> *param_5)

{
  int *piVar1;
  FName *pFVar2;
  code *pcVar3;
  wchar_t *pwVar4;
  FName FVar5;
  undefined4 uVar6;
  bool bVar7;
  EPackageExtension EVar8;
  EPackageSegment EVar9;
  int iVar10;
  uint uVar11;
  FString *pFVar12;
  void *pvVar13;
  IFileManager *pIVar14;
  FString *pFVar15;
  EPackageExtension EVar16;
  int iVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulong64 uVar20;
  ForAnyElementType FVar21;
  int iVar22;
  int iVar23;
  undefined1 auStackY_878 [32];
  undefined1 local_828 [8];
  FString local_820;
  uint local_810;
  FString local_808;
  FString *local_7f8;
  undefined8 local_7f0;
  FString local_7e8;
  int local_7d8 [2];
  FString local_7d0;
  FScriptContainerElement *local_7b8;
  int iStack_7b0;
  undefined4 uStack_7ac;
  FName local_7a8;
  FNameEntryId FStack_7a0;
  uint uStack_79c;
  TStringView<wchar_t> *local_798;
  TStringView<wchar_t> *local_790;
  FString *local_788;
  FPackagePath local_780 [2];
  undefined8 local_768;
  undefined8 uStack_760;
  wchar_t *local_758;
  undefined8 uStack_750;
  FString local_748;
  FString local_738;
  TStringView<wchar_t> local_728;
  TStringView<wchar_t> local_718;
  TStringView<wchar_t> local_708;
  TStringView<wchar_t> local_6f8;
  TStringView<wchar_t> local_6e8;
  wchar_t *local_6d8;
  undefined8 uStack_6d0;
  wchar_t *local_6c8;
  undefined8 uStack_6c0;
  TStringBuilderBase<wchar_t> local_6b8;
  TStringBuilderBase<wchar_t> local_698 [16];
  TStringBuilderBase<wchar_t> local_498;
  TStringBuilderBase<wchar_t> local_478 [16];
  TStringBuilderBase<wchar_t> local_278;
  wchar_t local_258 [256];
  ulonglong local_58 [4];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStackY_878;
  iVar10 = param_2->Size;
  iVar23 = iVar10;
  if (1 < iVar10) {
    iVar23 = 1;
  }
  iVar22 = 0;
  if (0 < iVar23) {
    iVar22 = iVar23;
  }
  local_798 = param_3;
  local_790 = param_2;
  if (((iVar22 != 1) ||
      (iVar10 = FGenericPlatformStricmp::Strnicmp
                          (L"/",param_2->DataPtr + ((longlong)iVar10 - (longlong)iVar22),1),
      iVar10 != 0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("PackageMount.EndsWith(L\"/\")",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PackageResourceManagerFile.cpp"
                         ,0x194,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar10 = param_3->Size;
  lVar18 = (longlong)iVar10;
  if (1 < iVar10) {
    iVar10 = 1;
  }
  iVar23 = 0;
  if (0 < iVar10) {
    iVar23 = iVar10;
  }
  if (((iVar23 != 1) ||
      (iVar10 = FGenericPlatformStricmp::Strnicmp(L"/",param_3->DataPtr + (lVar18 - iVar23),1),
      iVar10 != 0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("FileMount.EndsWith(L\"/\")",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PackageResourceManagerFile.cpp"
                         ,0x195,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_6d8 = param_3->DataPtr;
  uStack_6d0 = *(undefined8 *)&param_3->Size;
  local_7e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_7e8.Data.ArrayNum = 0;
  local_7e8.Data.ArrayMax = 0;
  pFVar12 = ::FString::ConstructFromPtrSize
                      (&local_748,param_3->DataPtr,(int)*(undefined8 *)&param_3->Size);
  if (&local_7e8 != pFVar12) {
    if (local_7e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7e8.Data.AllocatorInstance.Data);
    }
    local_7e8.Data.AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
    (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_7e8.Data.ArrayNum = (pFVar12->Data).ArrayNum;
    local_7e8.Data.ArrayMax = (pFVar12->Data).ArrayMax;
    (pFVar12->Data).ArrayNum = 0;
    (pFVar12->Data).ArrayMax = 0;
  }
  if (local_748.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_748.Data.AllocatorInstance.Data);
  }
  FPaths::ConvertRelativePathToFull(&local_820,&local_7e8);
  if (local_7e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7e8.Data.AllocatorInstance.Data);
  }
  bVar7 = ::FString::EndsWith(&local_820,L"/",1,IgnoreCase);
  if (!bVar7) {
    ::FString::ConcatFC(&local_7d0,&local_820,L"/");
    if (local_820.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_820.Data.AllocatorInstance.Data);
    }
    local_820.Data.AllocatorInstance.Data = local_7d0.Data.AllocatorInstance.Data;
    local_7d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_820.Data.ArrayNum = local_7d0.Data.ArrayNum;
    local_820.Data.ArrayMax = local_7d0.Data.ArrayMax;
    local_7d0.Data.ArrayNum = 0;
    local_7d0.Data.ArrayMax = 0;
  }
  FVar21.Data = local_820.Data.AllocatorInstance.Data;
  local_6b8.bIsDynamic = false;
  local_6b8.bIsExternal = false;
  iVar10 = local_820.Data.ArrayNum + -1;
  if (local_820.Data.ArrayNum == 0) {
    iVar10 = 0;
  }
  local_6b8.Base = (wchar_t *)local_698;
  local_6b8.End = (wchar_t *)&local_498;
  uVar20 = (ulong64)iVar10;
  local_6b8.CurPos = (wchar_t *)local_698;
  if (&local_498 < (TStringBuilderBase<wchar_t> *)((longlong)&local_698[0].Base + uVar20 * 2)) {
    TStringBuilderBase<wchar_t>::Extend(&local_6b8,uVar20);
  }
  if (iVar10 != 0) {
    pvVar13 = FGenericPlatformString::Memcpy(local_6b8.CurPos,FVar21.Data,uVar20 * 2);
    local_6b8.CurPos = (wchar_t *)((longlong)pvVar13 + uVar20 * 2);
  }
  local_6c8 = param_4->DataPtr;
  uStack_6c0 = *(undefined8 *)&param_4->Size;
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            (&local_6b8,local_6c8,(int)*(undefined8 *)&param_4->Size);
  local_498.Base = (wchar_t *)local_478;
  pwVar4 = param_5->DataPtr;
  uStack_750 = *(undefined8 *)&param_5->Size;
  local_498.End = (wchar_t *)&local_278;
  iVar10 = (int)*(undefined8 *)&param_5->Size;
  uVar20 = (ulong64)iVar10;
  local_498.CurPos = (wchar_t *)local_478;
  local_498.bIsDynamic = false;
  local_498.bIsExternal = false;
  local_758 = pwVar4;
  if (&local_278 < (TStringBuilderBase<wchar_t> *)((longlong)&local_478[0].Base + uVar20 * 2)) {
    TStringBuilderBase<wchar_t>::Extend(&local_498,uVar20);
  }
  if (iVar10 != 0) {
    pvVar13 = FGenericPlatformString::Memcpy(local_498.CurPos,pwVar4,uVar20 * 2);
    local_498.CurPos = (wchar_t *)((longlong)pvVar13 + uVar20 * 2);
  }
  local_7f8 = (FString *)0x0;
  local_7f0 = 0;
  pIVar14 = IFileManager::Get();
  pcVar3 = *(code **)((longlong)*pIVar14 + 0x88);
  if (local_498.End < (TStringBuilderBase<wchar_t> *)((longlong)(wchar_t **)local_498.CurPos + 2U))
  {
    TStringBuilderBase<wchar_t>::Extend(&local_498,1);
  }
  pwVar4 = local_498.Base;
  *(undefined2 *)(wchar_t **)local_498.CurPos = 0;
  if (local_6b8.End < (TStringBuilderBase<wchar_t> *)((longlong)(wchar_t **)local_6b8.CurPos + 2U))
  {
    TStringBuilderBase<wchar_t>::Extend(&local_6b8,1);
  }
  *(undefined2 *)(wchar_t **)local_6b8.CurPos = 0;
  (*pcVar3)(pIVar14,&local_7f8,local_6b8.Base,pwVar4);
  uVar11 = (uint)local_7f0 + param_1->ArrayNum;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &param_1->ArrayMax;
  if (param_1->ArrayMax < (int)uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,uVar11,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  local_278.Base = local_258;
  uVar6 = uStack_750._4_4_;
  local_278.CurPos = local_258;
  local_278.End = (wchar_t *)local_58;
  uVar19 = (ulonglong)(int)(uint)local_7f0;
  local_278.bIsDynamic = false;
  local_278.bIsExternal = false;
  local_788 = local_7f8 + uVar19;
  local_808.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_808.Data.ArrayNum = 0;
  local_808.Data.ArrayMax = 0;
  pFVar12 = local_7f8;
  uVar11 = (uint)local_7f0;
  local_810 = (uint)local_7f0;
  do {
    while( true ) {
      pFVar15 = local_788;
      if (uVar11 != (uint)uVar19) {
        local_828[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_828);
      }
      if (pFVar12 == pFVar15) {
        if (local_808.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_808.Data.AllocatorInstance.Data);
        }
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_278);
        DestructItems<FString,int>(local_7f8,(uint)local_7f0);
        if (local_7f8 != (FString *)0x0) {
          FMemory::Free(local_7f8);
        }
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_498);
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_6b8);
        if (local_820.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_820.Data.AllocatorInstance.Data);
        }
        return;
      }
      FVar21.Data = (FScriptContainerElement *)L"";
      if (local_820.Data.ArrayNum != 0) {
        FVar21.Data = local_820.Data.AllocatorInstance.Data;
      }
      iVar10 = 0;
      iVar23 = local_820.Data.ArrayNum + -1;
      if (local_820.Data.ArrayNum == 0) {
        iVar23 = iVar10;
      }
      bVar7 = ::FString::StartsWith(pFVar12,(wchar_t *)FVar21.Data,iVar23,IgnoreCase);
      if (!bVar7) break;
      FVar21.Data = (pFVar12->Data).AllocatorInstance.Data;
      iVar23 = (pFVar12->Data).ArrayNum;
LAB_14213a9f8:
      uStack_7ac = uVar6;
      iVar22 = iVar23 + -1;
      if (iVar23 == 0) {
        iVar22 = 0;
      }
      iVar23 = local_820.Data.ArrayNum + -1;
      if (local_820.Data.ArrayNum == 0) {
        iVar23 = iVar10;
      }
      iVar17 = iVar22;
      if (iVar22 - iVar23 < iVar22) {
        iVar17 = iVar22 - iVar23;
      }
      if (0 < iVar17) {
        iVar10 = iVar17;
      }
      local_7b8 = FVar21.Data + ((longlong)iVar22 - (longlong)iVar10) * 2;
      local_728._12_4_ = uVar6;
      local_728.Size = iVar10;
      iStack_7b0 = iVar10;
      local_728.DataPtr = (wchar_t *)local_7b8;
      EVar8 = FPackagePath::ParseExtension(&local_728,local_7d8);
      if ((EVar8 != Custom) && (EVar8 != Unspecified)) {
        uStack_7ac = uVar6;
        if (local_7d8[0] < iVar10) {
          iVar10 = local_7d8[0];
        }
        iStack_7b0 = 0;
        if (0 < iVar10) {
          iStack_7b0 = iVar10;
        }
        EVar9 = ExtensionToSegment(EVar8);
        local_708._12_4_ = uStack_7ac;
        local_708.Size = iStack_7b0;
        local_708.DataPtr = (wchar_t *)local_7b8;
        uStack_760 = 0;
        local_768 = 0;
        local_718.DataPtr = (wchar_t *)0x0;
        local_718.Size = 0;
        local_718._12_4_ = 0;
        local_6f8.DataPtr = local_798->DataPtr;
        local_6f8.Size = local_798->Size;
        local_6f8._12_4_ = *(undefined4 *)&local_798->field_0xc;
        EVar16 = Unspecified;
        if (EVar9 == Header) {
          EVar16 = EVar8;
        }
        local_6e8.DataPtr = local_790->DataPtr;
        local_6e8.Size = local_790->Size;
        local_6e8._12_4_ = *(undefined4 *)&local_790->field_0xc;
        FPackagePath::FromMountedComponents
                  (local_780,&local_6e8,&local_6f8,&local_708,EVar16,&local_718);
        pFVar2 = (FName *)(param_1->AllocatorInstance).Data;
        FStack_7a0.Value = local_780[0]._8_4_;
        local_7a8 = local_780[0].PackageName;
        uStack_79c = CONCAT31(uStack_79c._1_3_,EVar9);
        if (((pFVar2 <= &local_7a8) && (&local_7a8 < pFVar2 + (longlong)*piVar1 * 2)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar10 = param_1->ArrayNum;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x410,&param_1->AllocatorInstance,piVar1);
        }
        FVar5.Number = uStack_79c;
        FVar5.ComparisonIndex.Value = FStack_7a0.Value;
        param_1->ArrayNum = iVar10 + 1;
        pFVar2 = (FName *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 0x10);
        *pFVar2 = local_7a8;
        pFVar2[1] = FVar5;
      }
LAB_14213aba2:
      pFVar12 = pFVar12 + 1;
      uVar19 = (ulonglong)local_810;
      uVar11 = (uint)local_7f0;
    }
    pFVar15 = FPaths::ConvertRelativePathToFull(&local_738,pFVar12);
    if (&local_808 != pFVar15) {
      if (local_808.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_808.Data.AllocatorInstance.Data);
      }
      local_808.Data.AllocatorInstance.Data = (pFVar15->Data).AllocatorInstance.Data;
      (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_808.Data.ArrayNum = (pFVar15->Data).ArrayNum;
      local_808.Data.ArrayMax = (pFVar15->Data).ArrayMax;
      (pFVar15->Data).ArrayNum = 0;
      (pFVar15->Data).ArrayMax = 0;
    }
    if (local_738.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_738.Data.AllocatorInstance.Data);
    }
    iVar23 = local_820.Data.ArrayNum + -1;
    FVar21.Data = local_820.Data.AllocatorInstance.Data;
    if (local_820.Data.ArrayNum == 0) {
      iVar23 = iVar10;
      FVar21.Data = (FScriptContainerElement *)L"";
    }
    bVar7 = ::FString::StartsWith(&local_808,(wchar_t *)FVar21.Data,iVar23,IgnoreCase);
    if (bVar7) {
      FVar21.Data = local_808.Data.AllocatorInstance.Data;
      iVar23 = local_808.Data.ArrayNum;
      goto LAB_14213a9f8;
    }
    if ((byte)LogPackageResourceManager._0_1_ < 3) goto LAB_14213aba2;
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPackageResourceManager);
    pFVar12 = pFVar12 + 1;
    uVar19 = (ulonglong)local_810;
    uVar11 = (uint)local_7f0;
  } while( true );
}

// IteratePackagesInLocalOnlyDirectory @ 142143bc0

void __thiscall
FPackageResourceManagerFile::IteratePackagesInLocalOnlyDirectory
          (FPackageResourceManagerFile *this,TStringView<wchar_t> *param_1,
          TFunctionRef<bool___cdecl(FPackagePath_const_&,EPackageSegment)> *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  IFileManager *pIVar3;
  ForAnyElementType FVar4;
  TStringView<wchar_t> local_48;
  undefined **local_38;
  undefined1 local_30;
  FDirectoryVisitorBaseLocalOnly local_28;
  undefined8 local_18;
  undefined8 local_10;
  
  local_48.DataPtr = param_1->DataPtr;
  local_48.Size = param_1->Size;
  local_48._12_4_ = *(undefined4 *)&param_1->field_0xc;
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  local_38 = &___7FDirectoryVisitor_IPlatformFile__6B_;
  local_30 = 0;
  FDirectoryVisitorBaseLocalOnly::FDirectoryVisitorBaseLocalOnly(&local_28,&local_48);
  local_38 = &`FPackageResourceManagerFile::IteratePackagesInLocalOnlyDirectory'::`2'::
              FPackageVisitor::_vftable_;
  local_18 = uVar1;
  local_10 = uVar2;
  pIVar3 = IFileManager::Get();
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_28.RootDir.Data.ArrayNum != 0) {
    FVar4.Data = local_28.RootDir.Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar3 + 0xa8))(pIVar3,FVar4.Data,&local_38);
  if (local_28.RootDir.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.RootDir.Data.AllocatorInstance.Data);
  }
  return;
}

// IteratePackagesInPath @ 142143cb0

void __thiscall
FPackageResourceManagerFile::IteratePackagesInPath
          (FPackageResourceManagerFile *this,TStringView<wchar_t> *param_1,
          TStringView<wchar_t> *param_2,TStringView<wchar_t> *param_3,
          TFunctionRef<bool___cdecl(FPackagePath_const_&,EPackageSegment)> *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  IFileManager *pIVar3;
  ForAnyElementType FVar4;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  undefined **local_58;
  undefined1 local_50;
  FDirectoryVisitorBaseMounted local_48;
  undefined8 local_18;
  undefined8 local_10;
  
  local_88.DataPtr = param_3->DataPtr;
  local_88.Size = param_3->Size;
  local_88._12_4_ = *(undefined4 *)&param_3->field_0xc;
  local_78.DataPtr = param_2->DataPtr;
  local_78.Size = param_2->Size;
  local_78._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_50 = 0;
  local_68.DataPtr = param_1->DataPtr;
  local_68.Size = param_1->Size;
  local_68._12_4_ = *(undefined4 *)&param_1->field_0xc;
  uVar1 = *(undefined8 *)param_4;
  uVar2 = *(undefined8 *)&param_4->field_0x8;
  local_58 = &___7FDirectoryVisitor_IPlatformFile__6B_;
  FDirectoryVisitorBaseMounted::FDirectoryVisitorBaseMounted
            (&local_48,&local_68,&local_78,&local_88);
  local_58 = &`FPackageResourceManagerFile::IteratePackagesInPath'::`2'::FPackageVisitor::_vftable_;
  local_18 = uVar1;
  local_10 = uVar2;
  pIVar3 = IFileManager::Get();
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_48.RootDir.Data.ArrayNum != 0) {
    FVar4.Data = local_48.RootDir.Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar3 + 0xa8))(pIVar3,FVar4.Data,&local_58);
  if (local_48.RootDir.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.RootDir.Data.AllocatorInstance.Data);
  }
  if (local_48.FileMount.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.FileMount.Data.AllocatorInstance.Data);
  }
  return;
}

// IteratePackagesStatInLocalOnlyDirectory @ 142143e10

void __thiscall
FPackageResourceManagerFile::IteratePackagesStatInLocalOnlyDirectory
          (FPackageResourceManagerFile *this,TStringView<wchar_t> *param_1,
          TFunctionRef<bool___cdecl(FPackagePath_const_&,EPackageSegment,FFileStatData_const_&)>
          *param_2)

{
  IFileManager *pIVar1;
  ForAnyElementType FVar2;
  TStringView<wchar_t> local_48;
  undefined **local_38;
  FDirectoryVisitorBaseLocalOnly local_30;
  undefined8 local_20;
  undefined8 local_18;
  
  local_48.DataPtr = param_1->DataPtr;
  local_48.Size = param_1->Size;
  local_48._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_38 = &___7FDirectoryStatVisitor_IPlatformFile__6B_;
  FDirectoryVisitorBaseLocalOnly::FDirectoryVisitorBaseLocalOnly(&local_30,&local_48);
  local_38 = &`FPackageResourceManagerFile::IteratePackagesStatInLocalOnlyDirectory'::`2'::
              FPackageVisitor::_vftable_;
  local_20 = *(undefined8 *)param_2;
  local_18 = *(undefined8 *)&param_2->field_0x8;
  pIVar1 = IFileManager::Get();
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_30.RootDir.Data.ArrayNum != 0) {
    FVar2.Data = local_30.RootDir.Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar1 + 200))(pIVar1,FVar2.Data,&local_38);
  if (local_30.RootDir.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.RootDir.Data.AllocatorInstance.Data);
  }
  return;
}

// IteratePackagesStatInPath @ 142143ef0

void __thiscall
FPackageResourceManagerFile::IteratePackagesStatInPath
          (FPackageResourceManagerFile *this,TStringView<wchar_t> *param_1,
          TStringView<wchar_t> *param_2,TStringView<wchar_t> *param_3,
          TFunctionRef<bool___cdecl(FPackagePath_const_&,EPackageSegment,FFileStatData_const_&)>
          *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  IFileManager *pIVar3;
  ForAnyElementType FVar4;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  undefined **local_58;
  FDirectoryVisitorBaseMounted local_50;
  undefined8 local_20;
  undefined8 local_18;
  
  local_88.DataPtr = param_3->DataPtr;
  local_88.Size = param_3->Size;
  local_88._12_4_ = *(undefined4 *)&param_3->field_0xc;
  local_78.DataPtr = param_2->DataPtr;
  local_78.Size = param_2->Size;
  local_78._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_68.DataPtr = param_1->DataPtr;
  local_68.Size = param_1->Size;
  local_68._12_4_ = *(undefined4 *)&param_1->field_0xc;
  uVar1 = *(undefined8 *)param_4;
  uVar2 = *(undefined8 *)&param_4->field_0x8;
  local_58 = &___7FDirectoryStatVisitor_IPlatformFile__6B_;
  FDirectoryVisitorBaseMounted::FDirectoryVisitorBaseMounted
            (&local_50,&local_68,&local_78,&local_88);
  local_58 = &`FPackageResourceManagerFile::IteratePackagesStatInPath'::`2'::FPackageVisitor::
              _vftable_;
  local_20 = uVar1;
  local_18 = uVar2;
  pIVar3 = IFileManager::Get();
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_50.RootDir.Data.ArrayNum != 0) {
    FVar4.Data = local_50.RootDir.Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar3 + 200))(pIVar3,FVar4.Data,&local_58);
  if (local_50.RootDir.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.RootDir.Data.AllocatorInstance.Data);
  }
  if (local_50.FileMount.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.FileMount.Data.AllocatorInstance.Data);
  }
  return;
}

// OpenAsyncReadExternalResource @ 1421457f0

FOpenAsyncPackageResult * __thiscall
FPackageResourceManagerFile::OpenAsyncReadExternalResource
          (FPackageResourceManagerFile *this,FOpenAsyncPackageResult *__return_storage_ptr__,
          EPackageExternalResource param_1,TStringView<wchar_t> *param_2)

{
  code *pcVar1;
  bool bVar2;
  FOpenAsyncPackageResult *pFVar3;
  FAsyncReadFileHandleNull *pFVar4;
  FAsyncReadFileHandleNull *this_00;
  FPackagePath local_28;
  TStringView<wchar_t> local_18;
  
  if (param_1 == WorkspaceDomainFile) {
    local_18.DataPtr = param_2->DataPtr;
    local_18.Size = param_2->Size;
    local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
    pFVar4 = (FAsyncReadFileHandleNull *)0x0;
    local_28.PackageName.ComparisonIndex.Value = 0;
    local_28.PackageName.Number = 0;
    local_28.HeaderExtension = Unspecified;
    bVar2 = FPackagePath::TryFromPackageName(&local_18,&local_28);
    if (!bVar2) {
      this_00 = ::operator_new(8);
      if (this_00 != (FAsyncReadFileHandleNull *)0x0) {
        *this_00 = (FAsyncReadFileHandleNull)0x0;
        pFVar4 = FAsyncReadFileHandleNull::FAsyncReadFileHandleNull(this_00);
      }
      (__return_storage_ptr__->Handle).Ptr = (IAsyncReadFileHandle *)pFVar4;
      __return_storage_ptr__->Format = Binary;
      __return_storage_ptr__->bNeedsEngineVersionChecks = true;
      return __return_storage_ptr__;
    }
    OpenAsyncReadPackage(this,__return_storage_ptr__,&local_28,FBulkDataCookedIndex::Default,Header)
    ;
    return __return_storage_ptr__;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PackageResourceManagerFile.cpp"
                     ,0x18b,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FOpenAsyncPackageResult *)(*pcVar1)();
    return pFVar3;
  }
  pFVar4 = ::operator_new(8);
  if (pFVar4 != (FAsyncReadFileHandleNull *)0x0) {
    *pFVar4 = (FAsyncReadFileHandleNull)0x0;
    pFVar4 = FAsyncReadFileHandleNull::FAsyncReadFileHandleNull(pFVar4);
    (__return_storage_ptr__->Handle).Ptr = (IAsyncReadFileHandle *)pFVar4;
    __return_storage_ptr__->Format = Binary;
    __return_storage_ptr__->bNeedsEngineVersionChecks = true;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Format = Binary;
  __return_storage_ptr__->bNeedsEngineVersionChecks = true;
  (__return_storage_ptr__->Handle).Ptr = (IAsyncReadFileHandle *)0x0;
  return __return_storage_ptr__;
}

// OpenAsyncReadPackage @ 142145920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FOpenAsyncPackageResult * __thiscall
FPackageResourceManagerFile::OpenAsyncReadPackage
          (FPackageResourceManagerFile *this,FOpenAsyncPackageResult *__return_storage_ptr__,
          FPackagePath *param_1,FBulkDataCookedIndex param_2,EPackageSegment param_3)

{
  code *pcVar1;
  IAsyncReadFileHandle *pIVar2;
  ForAnyElementType FVar3;
  EPackageExtension EVar4;
  bool bVar5;
  EPackageFormat EVar6;
  FString *pFVar7;
  void *pvVar8;
  size_t sVar9;
  TStringView<wchar_t> *pTVar10;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar11;
  IAsyncReadFileHandle *pIVar12;
  FOpenAsyncPackageResult *pFVar13;
  FAsyncReadFileHandleNull *pFVar14;
  FAsyncReadFileHandleNull *pFVar15;
  ulong64 uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined1 auStackY_348 [32];
  bool local_318 [8];
  FString local_310;
  FPackagePath local_300;
  TArrayView<EPackageExtension_const_,int> local_2f0;
  <lambda_1> local_2e0;
  TStringView<wchar_t> local_2d0;
  TStringView<wchar_t> local_2c0;
  FString local_2b0;
  undefined4 local_2a0;
  undefined4 uStack_29c;
  int iStack_298;
  undefined4 uStack_294;
  TStringView<wchar_t> local_290;
  undefined4 local_280;
  undefined4 uStack_27c;
  int iStack_278;
  undefined4 uStack_274;
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [256];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_348;
  pFVar15 = (FAsyncReadFileHandleNull *)0x0;
  (__return_storage_ptr__->Handle).Ptr = (IAsyncReadFileHandle *)0x0;
  __return_storage_ptr__->Format = Binary;
  __return_storage_ptr__->bNeedsEngineVersionChecks = true;
  FPackagePath::GetPossibleExtensions(param_1,&local_2f0,param_3);
  iVar19 = 0;
  if (local_2f0.ArrayNum == 1) {
    EVar4 = *local_2f0.DataPtr;
    if (EVar4 == Unspecified) goto LAB_142145cc9;
  }
  else {
    if (local_2f0.ArrayNum < 2) goto LAB_142145cc9;
    local_300.PackageName.ComparisonIndex.Value = 0;
    local_300.PackageName.Number = 0;
    local_300.HeaderExtension = Unspecified;
    local_318[0] = false;
    local_2e0.FileManager = IFileManager::Get();
    local_2e0.bResult = local_318;
    IteratePossibleFiles<_FPackageResourceManagerFile::DoesPackageExist_::__l2::<lambda_1>_>
              (this,param_1,param_2,param_3,&local_300,&local_2e0);
    if (local_318[0] == false) goto LAB_142145cc9;
    local_2d0.DataPtr = (wchar_t *)0x0;
    local_2d0.Size = 0;
    EVar4 = FPackagePath::GetExtension(&local_300,param_3,&local_2d0);
    if (EVar4 == Unspecified) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Extension != EPackageExtension::Unspecified",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PackageResourceManagerFile.cpp"
                         ,0xff,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        pFVar13 = (FOpenAsyncPackageResult *)(*pcVar1)();
        return pFVar13;
      }
      goto LAB_142145cc9;
    }
  }
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  local_268.End = (wchar_t *)local_48;
  local_268.Base = local_248;
  local_268.CurPos = local_248;
  pFVar7 = FPackagePath::GetLocalBaseFilenameWithPath(param_1,&local_2b0);
  iVar17 = (pFVar7->Data).ArrayNum;
  local_310.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
  iVar18 = iVar17 + -1;
  if (iVar17 == 0) {
    iVar18 = iVar19;
  }
  uVar16 = (ulong64)iVar18;
  if (local_268.End < local_268.CurPos + uVar16) {
    TStringBuilderBase<wchar_t>::Extend(&local_268,uVar16);
  }
  if (iVar18 != 0) {
    pvVar8 = FGenericPlatformString::Memcpy
                       (local_268.CurPos,local_310.Data.AllocatorInstance.Data,uVar16 * 2);
    local_268.CurPos = (wchar_t *)((longlong)pvVar8 + uVar16 * 2);
  }
  if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
  }
  if (0 < (int)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1)) {
    if (param_2.Value != '\0') {
      ::FString::PrintfImpl(&local_310,L".%03hhu");
      FVar3.Data = local_310.Data.AllocatorInstance.Data;
      iVar17 = local_310.Data.ArrayNum + -1;
      if (local_310.Data.ArrayNum == 0) {
        iVar17 = iVar19;
      }
      uVar16 = (ulong64)iVar17;
      if (local_268.End < local_268.CurPos + uVar16) {
        TStringBuilderBase<wchar_t>::Extend(&local_268,uVar16);
      }
      if (iVar17 != 0) {
        pvVar8 = FGenericPlatformString::Memcpy(local_268.CurPos,FVar3.Data,uVar16 * 2);
        local_268.CurPos = (wchar_t *)((longlong)pvVar8 + uVar16 * 2);
      }
      if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_310.Data.AllocatorInstance.Data);
      }
    }
    if (EVar4 == Custom) {
      pTVar10 = FPackagePath::GetExtensionString(param_1,&local_290,Header);
    }
    else {
      local_2c0.DataPtr = ::LexToString(EVar4);
      if (local_2c0.DataPtr != (wchar_t *)0x0) {
        sVar9 = wcslen(local_2c0.DataPtr);
        iVar19 = (int)sVar9;
      }
      local_2c0.Size = iVar19;
      pTVar10 = &local_2c0;
    }
    local_2a0 = *(undefined4 *)&pTVar10->DataPtr;
    uStack_29c = *(undefined4 *)((longlong)&pTVar10->DataPtr + 4);
    iStack_298 = pTVar10->Size;
    uStack_294 = *(undefined4 *)&pTVar10->field_0xc;
    iVar19 = (int)*(undefined8 *)&pTVar10->Size;
    uVar16 = (ulong64)iVar19;
    local_280 = local_2a0;
    uStack_27c = uStack_29c;
    iStack_278 = iStack_298;
    uStack_274 = uStack_294;
    if (local_268.End < local_268.CurPos + uVar16) {
      TStringBuilderBase<wchar_t>::Extend(&local_268,uVar16);
    }
    if (iVar19 != 0) {
      pvVar8 = FGenericPlatformString::Memcpy
                         (local_268.CurPos,(void *)CONCAT44(uStack_29c,local_2a0),uVar16 * 2);
      local_268.CurPos = (wchar_t *)((longlong)pvVar8 + uVar16 * 2);
    }
    this_00 = FPlatformFileManager::Get();
    pIVar11 = FPlatformFileManager::GetPlatformFile(this_00);
    pcVar1 = *(code **)((longlong)*pIVar11 + 400);
    if (local_268.End < local_268.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_268,1);
    }
    *local_268.CurPos = L'\0';
    pIVar12 = (IAsyncReadFileHandle *)(*pcVar1)(pIVar11,local_268.Base,0);
    pIVar2 = (__return_storage_ptr__->Handle).Ptr;
    if ((pIVar2 != pIVar12) &&
       ((__return_storage_ptr__->Handle).Ptr = pIVar12, pIVar2 != (IAsyncReadFileHandle *)0x0)) {
      (**(code **)*pIVar2)(pIVar2,1);
    }
    if ((__return_storage_ptr__->Handle).Ptr == (IAsyncReadFileHandle *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result.Handle",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PackageResourceManagerFile.cpp"
                         ,0x110,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        pFVar13 = (FOpenAsyncPackageResult *)(*pcVar1)();
        return pFVar13;
      }
    }
    if ((EVar4 == TextAsset) || (EVar4 == TextMap)) {
      EVar6 = Text;
    }
    else {
      EVar6 = Binary;
    }
    __return_storage_ptr__->Format = EVar6;
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
LAB_142145cc9:
  if ((__return_storage_ptr__->Handle).Ptr == (IAsyncReadFileHandle *)0x0) {
    pFVar14 = ::operator_new(8);
    if (pFVar14 != (FAsyncReadFileHandleNull *)0x0) {
      *pFVar14 = (FAsyncReadFileHandleNull)0x0;
      pFVar15 = FAsyncReadFileHandleNull::FAsyncReadFileHandleNull(pFVar14);
    }
    pFVar14 = (FAsyncReadFileHandleNull *)(__return_storage_ptr__->Handle).Ptr;
    if ((pFVar14 != pFVar15) &&
       ((__return_storage_ptr__->Handle).Ptr = (IAsyncReadFileHandle *)pFVar15,
       pFVar14 != (FAsyncReadFileHandleNull *)0x0)) {
      (**(code **)*pFVar14)(pFVar14,1);
    }
  }
  return __return_storage_ptr__;
}

// OpenMappedHandleToPackage @ 142145ea0

IMappedFileHandle * __thiscall
FPackageResourceManagerFile::OpenMappedHandleToPackage
          (FPackageResourceManagerFile *this,FPackagePath *param_1,EPackageSegment param_2,
          FPackagePath *param_3)

{
  FPlatformFileManager *this_00;
  IMappedFileHandle *local_28;
  <lambda_1> local_20;
  
  local_28 = (IMappedFileHandle *)0x0;
  this_00 = FPlatformFileManager::Get();
  local_20.PlatformFile = FPlatformFileManager::GetPlatformFile(this_00);
  local_20.Result = &local_28;
  IteratePossibleFiles<_FPackageResourceManagerFile::OpenMappedHandleToPackage_::__l2::<lambda_1>_>
            (this,param_1,FBulkDataCookedIndex::Default,param_2,param_3,&local_20);
  return local_28;
}

// OpenReadExternalResource @ 142145f50

TUniquePtr<FArchive,TDefaultDelete<FArchive>_> __thiscall
FPackageResourceManagerFile::OpenReadExternalResource
          (FPackageResourceManagerFile *this,EPackageExternalResource param_1,
          TStringView<wchar_t> *param_2)

{
  code *pcVar1;
  FBulkDataCookedIndex FVar2;
  bool bVar3;
  TUniquePtr<FArchive,TDefaultDelete<FArchive>_> TVar4;
  undefined4 in_register_00000014;
  FArchive *pFVar5;
  undefined8 *in_R9;
  FPackagePath local_48;
  FOpenPackageResult local_38;
  <lambda_1> local_28;
  TStringView<wchar_t> local_18;
  
  pFVar5 = (FArchive *)CONCAT44(in_register_00000014,param_1);
  if ((int)param_2 == 0) {
    local_18.DataPtr = (wchar_t *)*in_R9;
    local_18._8_8_ = in_R9[1];
    local_48.PackageName.ComparisonIndex.Value = 0;
    local_48.PackageName.Number = 0;
    local_48.HeaderExtension = Unspecified;
    bVar3 = FPackagePath::TryFromPackageName(&local_18,&local_48);
    FVar2 = FBulkDataCookedIndex::Default;
    if (bVar3) {
      local_38.Archive.Ptr = (FArchive *)0x0;
      local_38.Format = Binary;
      local_38.bNeedsEngineVersionChecks = true;
      local_28.FileManager = IFileManager::Get();
      local_28.Result = &local_38;
      IteratePossibleFiles<_FPackageResourceManagerFile::OpenReadPackage_::__l2::<lambda_1>_>
                (this,&local_48,FVar2,Header,(FPackagePath *)0x0,&local_28);
      *(FArchive **)pFVar5 = local_38.Archive.Ptr;
      return (TUniquePtr<FArchive,TDefaultDelete<FArchive>_>)pFVar5;
    }
  }
  else {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PackageResourceManagerFile.cpp"
                       ,0x164,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      TVar4.Ptr = (FArchive *)(*pcVar1)();
      return (TUniquePtr<FArchive,TDefaultDelete<FArchive>_>)TVar4.Ptr;
    }
  }
  *(undefined8 *)pFVar5 = 0;
  return (TUniquePtr<FArchive,TDefaultDelete<FArchive>_>)pFVar5;
}

// OpenReadPackage @ 142146040

FOpenPackageResult * __thiscall
FPackageResourceManagerFile::OpenReadPackage
          (FPackageResourceManagerFile *this,FOpenPackageResult *__return_storage_ptr__,
          FPackagePath *param_1,FBulkDataCookedIndex param_2,EPackageSegment param_3,
          FPackagePath *param_4)

{
  FOpenPackageResult local_28;
  <lambda_1> local_18;
  
  local_28.Archive.Ptr = (FArchive *)0x0;
  local_28.Format = Binary;
  local_28.bNeedsEngineVersionChecks = true;
  local_18.FileManager = IFileManager::Get();
  local_18.Result = &local_28;
  IteratePossibleFiles<_FPackageResourceManagerFile::OpenReadPackage_::__l2::<lambda_1>_>
            (this,param_1,param_2,param_3,param_4,&local_18);
  (__return_storage_ptr__->Archive).Ptr = local_28.Archive.Ptr;
  __return_storage_ptr__->Format = local_28.Format;
  __return_storage_ptr__->bNeedsEngineVersionChecks = local_28.bNeedsEngineVersionChecks;
  return __return_storage_ptr__;
}

// SupportsLocalOnlyPaths @ 142152c00

bool __thiscall
FPackageResourceManagerFile::SupportsLocalOnlyPaths(FPackageResourceManagerFile *this)

{
  return true;
}

// SupportsPackageOnlyPaths @ 142152c20

bool __thiscall
FPackageResourceManagerFile::SupportsPackageOnlyPaths(FPackageResourceManagerFile *this)

{
  return false;
}

// TryMatchCaseOnDisk @ 142153b00

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FPackageResourceManagerFile::TryMatchCaseOnDisk
          (FPackageResourceManagerFile *this,FPackagePath *param_1,FPackagePath *param_2)

{
  bool bVar1;
  int iVar2;
  FPlatformFileManager *this_00;
  TStringView<wchar_t> *pTVar3;
  EPackageExtension local_res20 [8];
  FString local_48;
  TStringView<wchar_t> local_38;
  <lambda_1> local_28;
  
  this_00 = FPlatformFileManager::Get();
  local_28.PlatformFile = FPlatformFileManager::GetPlatformFile(this_00);
  local_28.FilenameOnDisk = &local_48;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ExtensionOnDisk = local_res20;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  IteratePossibleFiles<_FPackageResourceManagerFile::TryMatchCaseOnDisk_::__l2::<lambda_1>_>
            (this,param_1,FBulkDataCookedIndex::Default,Header,(FPackagePath *)0x0,&local_28);
  if (local_48.Data.ArrayNum < 2) {
    bVar1 = false;
  }
  else {
    if (param_2 != (FPackagePath *)0x0) {
      iVar2 = local_48.Data.ArrayNum + -1;
      if (local_48.Data.ArrayNum == 0) {
        iVar2 = 0;
      }
      local_38.Size = iVar2;
      local_38.DataPtr = (wchar_t *)local_48.Data.AllocatorInstance.Data;
      bVar1 = FPackagePath::TryMatchCase(param_1,&local_38,param_2);
      if ((!bVar1) && (5 < (byte)LogPackageName._0_1_)) {
        FPackagePath::GetLocalFullPath(param_1,(FString *)&local_38);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPackageName);
        if ((FScriptContainerElement *)local_38.DataPtr != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.DataPtr);
        }
      }
      pTVar3 = FPackagePath::GetCustomExtension(param_1,(TStringView<wchar_t> *)&local_28);
      local_38.DataPtr = pTVar3->DataPtr;
      local_38.Size = pTVar3->Size;
      local_38._12_4_ = *(undefined4 *)&pTVar3->field_0xc;
      FPackagePath::SetHeaderExtension(param_2,local_res20[0],&local_38);
    }
    bVar1 = true;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

