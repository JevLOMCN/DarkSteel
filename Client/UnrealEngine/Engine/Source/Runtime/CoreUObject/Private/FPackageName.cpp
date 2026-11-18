// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 152

// operator() @ 141e8b140

/* WARNING: Removing unreachable block (ram,0x000141e8b21c) */

bool __thiscall
`FPackageName::FindPackagesInDirectory'::__l2::<lambda_1>::operator()(void *this,wchar_t *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FString local_18;
  
  pFVar2 = *(ForAnyElementType **)this;
  ::FString::FString(&local_18,param_1);
  if (((pFVar2->Data <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 <
       pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  pFVar7 = pFVar2->Data + (longlong)iVar6 * 0x10;
  *(undefined8 *)pFVar7 = 0;
  *(FScriptContainerElement **)pFVar7 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar7 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar7 + 0xc) = local_18.Data.ArrayMax;
  return true;
}

// operator() @ 141e8b4f0

bool __thiscall
`FPackageName::InternalFilenameToLongPackageName'::__l2::<lambda_1>::operator()
          (void *this,TStringView<wchar_t> *param_1)

{
  int iVar1;
  PSRWLOCK SRWLock;
  FMountPoint *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FMountPoint **ppFVar6;
  int iVar7;
  TStringView<wchar_t> local_98;
  FScriptContainerElement *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  SRWLock = *(PSRWLOCK *)this;
  if (SRWLock == (PSRWLOCK)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  AcquireSRWLockShared(SRWLock);
  local_68.DataPtr = param_1->DataPtr;
  local_68.Size = param_1->Size;
  local_68._12_4_ = *(undefined4 *)&param_1->field_0xc;
  ppFVar6 = TDirectoryTree<FMountPoint_*>::FindClosestValue
                      ((TDirectoryTree<FMountPoint_*> *)(*(longlong *)this + 0x160),&local_68);
  if (ppFVar6 == (FMountPoint **)0x0) {
LAB_141e8b657:
    bVar4 = false;
  }
  else {
    pFVar2 = *ppFVar6;
    local_48.DataPtr = param_1->DataPtr;
    local_48.Size = param_1->Size;
    local_48._12_4_ = *(undefined4 *)&param_1->field_0xc;
    local_98.DataPtr = (wchar_t *)0x0;
    local_98.Size = 0;
    local_88 = (pFVar2->ContentPathRelative).Data.AllocatorInstance.Data;
    iVar1 = (pFVar2->ContentPathRelative).Data.ArrayNum;
    iStack_80 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_80 = 0;
    }
    local_58._12_4_ = uStack_7c;
    local_58.Size = iStack_80;
    local_58.DataPtr = (wchar_t *)local_88;
    bVar4 = FPathViews::TryMakeChildPathRelativeTo(&local_48,&local_58,&local_98);
    if (!bVar4) {
      local_78 = (pFVar2->ContentPathAbsolute).Data.AllocatorInstance.Data;
      local_28.DataPtr = param_1->DataPtr;
      local_28.Size = param_1->Size;
      local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
      iVar1 = (pFVar2->ContentPathAbsolute).Data.ArrayNum;
      iStack_70 = iVar1 + -1;
      if (iVar1 == 0) {
        iStack_70 = 0;
      }
      local_38._12_4_ = uStack_6c;
      local_38.Size = iStack_70;
      local_38.DataPtr = (wchar_t *)local_78;
      bVar4 = FPathViews::TryMakeChildPathRelativeTo(&local_28,&local_38,&local_98);
      if (!bVar4) goto LAB_141e8b657;
    }
    iVar1 = (pFVar2->RootPath).Data.ArrayNum;
    iVar7 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar7 = 0;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              (*(TStringBuilderBase<wchar_t> **)((longlong)this + 8),
               (wchar_t *)(pFVar2->RootPath).Data.AllocatorInstance.Data,iVar7);
    local_18._12_4_ = local_98._12_4_;
    local_18.Size = local_98.Size;
    local_18.DataPtr = local_98.DataPtr;
    FPathViews::AppendPath(*(TStringBuilderBase<wchar_t> **)((longlong)this + 8),&local_18);
    bVar4 = true;
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  return bVar4;
}

// operator() @ 141e8bfa0

bool __thiscall
`FPackageName::SplitFullObjectPath'::__l2::<lambda_1>::operator()
          (void *this,wchar_t param_1,TStringView<wchar_t> *param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = (wchar_t *)**(undefined8 **)this;
  local_18._8_8_ = (*(undefined8 **)this)[1];
  iVar3 = UE::String::FindFirstChar(&local_18,param_1,CaseSensitive);
  if (iVar3 != -1) {
    iVar1 = *(int *)(*(undefined8 **)this + 1);
    if (iVar3 < iVar1) {
      iVar1 = iVar3;
    }
    iVar4 = 0;
    if (0 < iVar1) {
      iVar4 = iVar1;
    }
    param_2->DataPtr = (wchar_t *)**(undefined8 **)this;
    param_2->Size = iVar4;
    *(undefined4 *)&param_2->field_0xc = local_18._12_4_;
    plVar2 = *(longlong **)this;
    iVar1 = (int)plVar2[1];
    iVar4 = (iVar1 - iVar3) + -1;
    iVar3 = iVar1;
    if (iVar4 < iVar1) {
      iVar3 = iVar4;
    }
    local_18.Size = 0;
    if (0 < iVar3) {
      local_18.Size = iVar3;
    }
    *plVar2 = *plVar2 + ((longlong)iVar1 - (longlong)local_18.Size) * 2;
    plVar2[1] = local_18._8_8_;
    return true;
  }
  param_2->DataPtr = (wchar_t *)0x0;
  param_2->Size = 0;
  return false;
}

// ConvertToLongScriptPackageName @ 141e93aa0

FString * __cdecl
FPackageName::ConvertToLongScriptPackageName(FString *__return_storage_ptr__,wchar_t *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  FScriptContainerElement *pFVar6;
  FString local_18;
  
  pFVar5 = ::FString::FString(&local_18,param_1);
  pFVar6 = (pFVar5->Data).AllocatorInstance.Data;
  iVar2 = (pFVar5->Data).ArrayNum;
  iVar4 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar4 = 0;
  }
  pFVar1 = pFVar6 + (longlong)iVar4 * 2;
  do {
    if (pFVar6 == pFVar1) {
      bVar3 = true;
LAB_141e93af4:
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        if (param_1 != (wchar_t *)0x0) {
          wcslen(param_1);
        }
        ::FString::PrintfImpl(__return_storage_ptr__,L"/Script/%.*s");
      }
      else {
        ::FString::FString(__return_storage_ptr__,param_1);
      }
      return __return_storage_ptr__;
    }
    if (*(short *)pFVar6 == 0x2f) {
      bVar3 = false;
      goto LAB_141e93af4;
    }
    pFVar6 = pFVar6 + 2;
  } while( true );
}

// DoesPackageExist @ 141e96740

/* WARNING: Enum "EPackageLocationFilter": Some values do not have unique names */

bool __cdecl FPackageName::DoesPackageExist(FPackagePath *param_1,FPackagePath *param_2)

{
  EPackageLocationFilter EVar1;
  
  EVar1 = DoesPackageExistEx(param_1,Any,false,param_2);
  return EVar1 != None;
}

// DoesPackageExist @ 141e96770

/* WARNING: Enum "EPackageLocationFilter": Some values do not have unique names */

bool __cdecl
FPackageName::DoesPackageExist(FPackagePath *param_1,bool param_2,FPackagePath *param_3)

{
  EPackageLocationFilter EVar1;
  
  EVar1 = DoesPackageExistEx(param_1,Any,param_2,param_3);
  return EVar1 != None;
}

// DoesPackageExist @ 141e967a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPackageLocationFilter": Some values do not have unique names */

bool __cdecl FPackageName::DoesPackageExist(FString *param_1,FString *param_2,bool param_3)

{
  int iVar1;
  FScriptContainerElement *_Src;
  bool bVar2;
  EPackageLocationFilter EVar3;
  EPackageExtension EVar4;
  FString *pFVar5;
  longlong lVar6;
  EErrorCode local_res20 [2];
  FPackagePath local_68;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  FString local_48;
  FText local_38;
  TStringView<wchar_t> local_28;
  
  local_68.PackageName.ComparisonIndex.Value = 0;
  local_68.PackageName.Number = 0;
  local_68.HeaderExtension = Unspecified;
  bVar2 = TryConvertToMountedPackagePath(param_1,&local_68,local_res20);
  if (bVar2) {
    bVar2 = FPackagePath::IsMountedPath(&local_68);
    if (bVar2) {
      if (CpuChannel->Enabled < 0) {
        EVar3 = InternalDoesPackageExistEx(&local_68,Any,false,&local_68);
      }
      else {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId1945,"FPackageName::DoesPackageExistEx",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Misc\\PackageName.cpp"
                   ,0x799);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1945);
        EVar3 = InternalDoesPackageExistEx(&local_68,Any,false,&local_68);
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((EVar3 != None) &&
         ((param_3 ||
          (EVar4 = FPackagePath::GetHeaderExtension(&local_68), 1 < (byte)(EVar4 - TextAsset))))) {
        if (param_2 != (FString *)0x0) {
          pFVar5 = FPackagePath::GetLocalFullPath(&local_68,(FString *)&local_28);
          ::FString::operator=(param_2,pFVar5);
          if (local_28.DataPtr != (wchar_t *)0x0) {
            FMemory::Free(local_28.DataPtr);
          }
        }
        return true;
      }
    }
  }
  else {
    local_48.Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
    iVar1 = (param_1->Data).ArrayNum;
    local_48.Data.ArrayNum = iVar1 + -1;
    if (iVar1 == 0) {
      local_48.Data.ArrayNum = 0;
    }
    local_28._12_4_ = local_48.Data.ArrayMax;
    local_28.Size = local_48.Data.ArrayNum;
    local_28.DataPtr = (wchar_t *)local_48.Data.AllocatorInstance.Data;
    FormatErrorAsText(&local_38,&local_28,local_res20[0]);
    pFVar5 = FText::ToString(&local_38);
    local_58.Data = (FScriptContainerElement *)0x0;
    local_50 = (pFVar5->Data).ArrayNum;
    lVar6 = (longlong)local_50;
    _Src = (pFVar5->Data).AllocatorInstance.Data;
    if (local_50 == 0) {
      local_4c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_50,0,&local_58,local_50,&local_4c);
      memcpy(local_58.Data,_Src,lVar6 * 2);
    }
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
    ::FString::PrintfImpl
              (&local_48,
               L"DoesPackageExist called on PackageName that will always return false. Reason: %s");
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
    if (2 < (byte)LogPackageName._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPackageName);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// DoesPackageExistEx @ 141e969e0

/* WARNING: Enum "EPackageLocationFilter": Some values do not have unique names */

EPackageLocationFilter __cdecl
FPackageName::DoesPackageExistEx
          (FPackagePath *param_1,EPackageLocationFilter param_2,bool param_3,FPackagePath *param_4)

{
  bool bVar1;
  EPackageLocationFilter EVar2;
  
  bVar1 = FPackagePath::IsMountedPath(param_1);
  EVar2 = None;
  if (bVar1) {
    if (CpuChannel->Enabled < 0) {
      EVar2 = InternalDoesPackageExistEx(param_1,param_2,param_3,param_4);
    }
    else {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1945,"FPackageName::DoesPackageExistEx",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Misc\\PackageName.cpp"
                 ,0x799);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1945);
      EVar2 = InternalDoesPackageExistEx(param_1,param_2,param_3,param_4);
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return EVar2;
}

// DoesPackageNameContainInvalidCharacters @ 141e96aa0

bool __cdecl
FPackageName::DoesPackageNameContainInvalidCharacters(TStringView<wchar_t> *param_1,FText *param_2)

{
  bool bVar1;
  FText *pFVar2;
  EErrorCode local_res8 [2];
  TStringView<wchar_t> local_28;
  FText local_18;
  
  local_28.DataPtr = param_1->DataPtr;
  local_28.Size = param_1->Size;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  bVar1 = DoesPackageNameContainInvalidCharacters(&local_28,local_res8);
  if (bVar1) {
    if (param_2 != (FText *)0x0) {
      local_28.DataPtr = param_1->DataPtr;
      local_28.Size = param_1->Size;
      local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
      pFVar2 = FormatErrorAsText(&local_18,&local_28,local_res8[0]);
      FText::operator=(param_2,pFVar2);
      if (local_18.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      }
    }
    return true;
  }
  return false;
}

// DoesPackageNameContainInvalidCharacters @ 141e96b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FPackageName::DoesPackageNameContainInvalidCharacters
          (TStringView<wchar_t> *param_1,EErrorCode *param_2)

{
  int iVar1;
  wchar_t wVar2;
  bool bVar3;
  wchar_t *pwVar4;
  undefined1 auStack_b8 [32];
  TStringView<wchar_t> local_98;
  TStringBuilderBase<wchar_t> local_88;
  wchar_t local_68 [32];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_88.Base = local_68;
  pwVar4 = L"\\:*?\"<>|\' ,.&!~\n\r\t@#";
  local_88.CurPos = local_68;
  local_88.End = (wchar_t *)local_28;
  wVar2 = L'\\';
  local_88.bIsDynamic = false;
  local_88.bIsExternal = false;
  do {
    local_98.DataPtr = param_1->DataPtr;
    local_98.Size = param_1->Size;
    local_98._12_4_ = *(undefined4 *)&param_1->field_0xc;
    iVar1 = UE::String::FindFirstChar(&local_98,wVar2,CaseSensitive);
    if (iVar1 != -1) {
      wVar2 = *pwVar4;
      if (local_88.End < local_88.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_88,1);
      }
      *local_88.CurPos = wVar2;
      local_88.CurPos = local_88.CurPos + 1;
    }
    wVar2 = pwVar4[1];
    pwVar4 = pwVar4 + 1;
  } while (wVar2 != L'\0');
  if ((int)((longlong)local_88.CurPos - (longlong)local_88.Base >> 1) == 0) {
    if (param_2 != (EErrorCode *)0x0) {
      *param_2 = PackageNameUnknown;
    }
    bVar3 = false;
  }
  else {
    if (param_2 != (EErrorCode *)0x0) {
      *param_2 = PackageNameContainsInvalidCharacters;
    }
    bVar3 = true;
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_88);
  return bVar3;
}

// ExportTextPathToObjectPath @ 141e995d0

TStringView<char> * __cdecl
FPackageName::ExportTextPathToObjectPath
          (TStringView<char> *__return_storage_ptr__,TStringView<char> *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  TStringView<char> *pTVar6;
  uchar *puVar7;
  int iVar8;
  int iVar9;
  undefined4 uStack_5c;
  undefined8 uStack_50;
  TStringView<char8_t> local_48;
  uchar *local_38;
  undefined8 uStack_30;
  
  puVar7 = (uchar *)param_1->DataPtr;
  uVar3 = *(undefined8 *)&param_1->Size;
  local_48._12_4_ = uStack_5c;
  local_48.Size = (int)*(undefined8 *)&param_1->Size;
  local_48.DataPtr = puVar7;
  local_38 = puVar7;
  uStack_30 = uVar3;
  iVar5 = UE::String::FindFirstChar(&local_48,'\'',CaseSensitive);
  if (((iVar5 != -1) && (iVar9 = iVar5 + 1, -1 < iVar9)) && (iVar8 = (int)uVar3, iVar9 < iVar8)) {
    if ((iVar8 + -1 < 0) || (iVar8 <= iVar8 + -1)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && Index < Size",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                         ,0x234,
                         L"Index out of bounds on StringView: index %i on a view with a length of %i"
                        );
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TStringView<char> *)(*pcVar1)();
        return pTVar6;
      }
    }
    if (puVar7[(longlong)iVar8 + -1] == '\'') {
      iVar5 = (iVar8 - iVar5) + -2;
      if (iVar8 < iVar9) {
        iVar9 = iVar8;
      }
      iVar2 = iVar8 - iVar9;
      if (iVar5 < iVar8 - iVar9) {
        iVar2 = iVar5;
      }
      puVar7 = puVar7 + iVar9;
      iVar5 = 0;
      if (0 < iVar2) {
        iVar5 = iVar2;
      }
      uStack_50 = CONCAT44((int)((ulonglong)uVar3 >> 0x20),iVar5);
      goto LAB_141e996d4;
    }
  }
  puVar7 = (uchar *)param_1->DataPtr;
  uStack_50 = *(undefined8 *)&param_1->Size;
LAB_141e996d4:
  __return_storage_ptr__->DataPtr = (char *)puVar7;
  *(undefined8 *)&__return_storage_ptr__->Size = uStack_50;
  return __return_storage_ptr__;
}

// ExportTextPathToObjectPath @ 141e99710

TStringView<wchar_t> * __cdecl
FPackageName::ExportTextPathToObjectPath
          (TStringView<wchar_t> *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  code *pcVar1;
  int iVar2;
  wchar_t *pwVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  TStringView<wchar_t> *pTVar7;
  int iVar8;
  int iVar9;
  undefined4 uStack_1c;
  TStringView<wchar_t> local_18;
  
  pwVar3 = param_1->DataPtr;
  uVar4._0_4_ = param_1->Size;
  uVar4._4_4_ = *(undefined4 *)&param_1->field_0xc;
  local_18.DataPtr = pwVar3;
  local_18._8_8_ = uVar4;
  iVar6 = UE::String::FindFirstChar(&local_18,L'\'',CaseSensitive);
  if ((iVar6 != -1) && (iVar9 = iVar6 + 1, -1 < iVar9)) {
    iVar8 = (int)*(undefined8 *)&param_1->Size;
    if (iVar9 < iVar8) {
      if ((iVar8 + -1 < 0) || (iVar8 <= iVar8 + -1)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0 && Index < Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                           ,0x234,
                           L"Index out of bounds on StringView: index %i on a view with a length of %i"
                          );
        if (bVar5) {
          pcVar1 = (code *)swi(3);
          pTVar7 = (TStringView<wchar_t> *)(*pcVar1)();
          return pTVar7;
        }
      }
      if (pwVar3[(longlong)iVar8 + -1] == L'\'') {
        iVar6 = (iVar8 - iVar6) + -2;
        if (iVar8 < iVar9) {
          iVar9 = iVar8;
        }
        iVar2 = iVar8 - iVar9;
        if (iVar6 < iVar8 - iVar9) {
          iVar2 = iVar6;
        }
        pwVar3 = pwVar3 + iVar9;
        iVar6 = 0;
        if (0 < iVar2) {
          iVar6 = iVar2;
        }
        goto LAB_141e997f2;
      }
    }
  }
  pwVar3 = param_1->DataPtr;
  iVar6 = param_1->Size;
  uVar4._4_4_ = *(undefined4 *)&param_1->field_0xc;
LAB_141e997f2:
  __return_storage_ptr__->DataPtr = pwVar3;
  __return_storage_ptr__->Size = iVar6;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar4._4_4_;
  return __return_storage_ptr__;
}

// ExportTextPathToObjectPath @ 141e99820

FString * __cdecl
FPackageName::ExportTextPathToObjectPath(FString *__return_storage_ptr__,FString *param_1)

{
  bool bVar1;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  bVar1 = ParseExportTextPathImpl<FString>(param_1,(FString *)0x0,&local_18);
  if (bVar1) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_18.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_18.Data.ArrayMax;
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,param_1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ExportTextPathToObjectPath @ 141e998b0

FString * __cdecl
FPackageName::ExportTextPathToObjectPath(FString *__return_storage_ptr__,wchar_t *param_1)

{
  bool bVar1;
  FString *pFVar2;
  FString local_28;
  FString local_18;
  
  pFVar2 = ::FString::FString(&local_18,param_1);
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  bVar1 = ParseExportTextPathImpl<FString>(pFVar2,(FString *)0x0,&local_28);
  if (bVar1) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_28.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_28.Data.ArrayMax;
  }
  else {
    ::FString::FString(__return_storage_ptr__,pFVar2);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FilenameToLongPackageName @ 141e99ac0

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __cdecl
FPackageName::FilenameToLongPackageName(FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FLongPackagePathsSingleton *SRWLock;
  FString *pFVar7;
  IFileManager *pIVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  wchar_t *pwVar12;
  undefined1 local_res18 [16];
  ForAnyElementType local_88;
  undefined8 local_80;
  ForAnyElementType local_78;
  undefined8 local_70;
  FString local_68;
  void *local_58 [2];
  FString local_48;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  bVar4 = TryConvertFilenameToLongPackageName(param_1,__return_storage_ptr__,&local_68,None);
  if (!bVar4) {
    local_88.Data = (FScriptContainerElement *)0x0;
    local_80 = 0;
    local_78.Data = (FScriptContainerElement *)0x0;
    local_70 = 0;
    SRWLock = FLongPackagePathsSingleton::Get();
    if ((SRWLock == (FLongPackagePathsSingleton *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0x1c,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FString *)(*pcVar3)();
      return pFVar7;
    }
    AcquireSRWLockShared((PSRWLOCK)SRWLock);
    pFVar11 = (SRWLock->MountPoints).AllocatorInstance.Data;
    iVar2 = (SRWLock->MountPoints).ArrayNum;
    pFVar1 = pFVar11 + (longlong)iVar2 * 8;
    while( true ) {
      if ((SRWLock->MountPoints).ArrayNum != iVar2) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TUniquePtr<FMountPoint,TDefaultDelete<FMountPoint>_>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (pFVar11 == pFVar1) break;
      pFVar9 = (FScriptContainerElement *)(*(longlong *)pFVar11 + 0x10);
      if (((local_88.Data <= pFVar9) && (pFVar9 < local_88.Data + (longlong)local_80._4_4_ * 0x10))
         && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FString *)(*pcVar3)();
        return pFVar7;
      }
      iVar5 = (int)local_80;
      if ((int)local_80 == local_80._4_4_) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_88,(int *)((longlong)&local_80 + 4));
      }
      local_80 = CONCAT44(local_80._4_4_,iVar5 + 1);
      ::FString::FString((FString *)(local_88.Data + (longlong)iVar5 * 0x10),(FString *)pFVar9);
      pFVar9 = (FScriptContainerElement *)(*(longlong *)pFVar11 + 0x20);
      if (((local_78.Data <= pFVar9) && (pFVar9 < local_78.Data + (longlong)local_70._4_4_ * 0x10))
         && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FString *)(*pcVar3)();
        return pFVar7;
      }
      iVar5 = (int)local_70;
      if ((int)local_70 == local_70._4_4_) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_78,(int *)((longlong)&local_70 + 4));
      }
      local_70 = CONCAT44(local_70._4_4_,iVar5 + 1);
      ::FString::FString((FString *)(local_78.Data + (longlong)iVar5 * 0x10),(FString *)pFVar9);
      pFVar11 = pFVar11 + 8;
    }
    if (SRWLock != (FLongPackagePathsSingleton *)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    }
    if (3 < (byte)LogPackageName._0_1_) {
      FWindowsPlatformProcess::BaseDir();
      FGenericPlatformMisc::RootDir();
      FPaths::ConvertRelativePathToFull(&local_48,param_1);
      pIVar8 = IFileManager::Get();
      if ((param_1->Data).ArrayNum == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      (**(code **)((longlong)*pIVar8 + 0xf8))(pIVar8,local_58,pwVar12);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPackageName);
      if (local_58[0] != (void *)0x0) {
        FMemory::Free(local_58[0]);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    if ((int)local_80 == (int)local_70) {
      uVar10 = 0;
      if (0 < (int)local_80) {
        do {
          uVar6 = 0;
          if ((int)uVar10 < (int)local_80) {
            uVar6 = ~uVar10 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar7 = (FString *)(*pcVar3)();
            return pFVar7;
          }
          uVar6 = 0;
          if ((int)uVar10 < (int)local_70) {
            uVar6 = ~uVar10 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar7 = (FString *)(*pcVar3)();
            return pFVar7;
          }
          if ((3 < (byte)LogPackageName._0_1_) &&
             (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPackageName),
             3 < (byte)LogPackageName._0_1_)) {
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPackageName);
          }
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)local_80);
      }
    }
    else {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_221147870366006379>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Misc\\PackageName.cpp"
                         ,0x395,"ContentRootsArrayRelative.Num() == ContentRootsArrayAbsolute.Num()"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FString *)(*pcVar3)();
        return pFVar7;
      }
    }
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogPackageName);
    DestructItems<FString,int>((FString *)local_78.Data,(int)local_70);
    if (local_78.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data);
    }
    DestructItems<FString,int>((FString *)local_88.Data,(int)local_80);
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data);
    }
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FindPackageFileWithoutExtension @ 141e9d5f0

bool __cdecl FPackageName::FindPackageFileWithoutExtension(FString *param_1,FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  IPackageResourceManager *this;
  FString *pFVar4;
  FPackagePath local_28;
  undefined4 uStack_1c;
  TStringView<wchar_t> local_18;
  
  local_28.PackageName = (FName)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  local_28._8_4_ = iVar1 + -1;
  if (iVar1 == 0) {
    local_28._8_4_ = 0;
  }
  local_18._12_4_ = uStack_1c;
  local_18.Size = local_28._8_4_;
  local_18.DataPtr = (wchar_t *)local_28.PackageName;
  FPackagePath::FromLocalPath(&local_28,&local_18);
  this = IPackageResourceManager::Get();
  bVar3 = IPackageResourceManager::DoesPackageExist(this,&local_28,&local_28);
  if (bVar3) {
    pFVar4 = FPackagePath::GetLocalFullPath(&local_28,(FString *)&local_18);
    if (param_2 != pFVar4) {
      pFVar2 = (param_2->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (param_2->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
      (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_2->Data).ArrayNum = (pFVar4->Data).ArrayNum;
      (param_2->Data).ArrayMax = (pFVar4->Data).ArrayMax;
      (pFVar4->Data).ArrayNum = 0;
      (pFVar4->Data).ArrayMax = 0;
    }
    if ((FName)local_18.DataPtr != (FName)0x0) {
      FMemory::Free(local_18.DataPtr);
    }
    return true;
  }
  return false;
}

// FindPackageFileWithoutExtension @ 141e9d6d0

bool __cdecl
FPackageName::FindPackageFileWithoutExtension(FString *param_1,FString *param_2,bool param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  IPackageResourceManager *pIVar4;
  FString *pFVar5;
  FPackagePath local_38;
  undefined4 uStack_2c;
  FOpenPackageResult local_28;
  TStringView<wchar_t> local_18;
  
  local_38.PackageName = (FName)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  local_38._8_4_ = iVar1 + -1;
  if (iVar1 == 0) {
    local_38._8_4_ = 0;
  }
  local_28._12_4_ = uStack_2c;
  local_28.Format = (char)local_38._8_4_;
  local_28.bNeedsEngineVersionChecks = (bool)(char)((uint)local_38._8_4_ >> 8);
  local_28._10_2_ = (short)((uint)local_38._8_4_ >> 0x10);
  local_28.Archive.Ptr = (FArchive *)local_38.PackageName;
  FPackagePath::FromLocalPath(&local_38,(TStringView<wchar_t> *)&local_28);
  pIVar4 = IPackageResourceManager::Get();
  bVar3 = IPackageResourceManager::DoesPackageExist(pIVar4,&local_38,&local_38);
  if (bVar3) {
    pFVar5 = FPackagePath::GetLocalFullPath(&local_38,(FString *)&local_28);
    if (param_2 != pFVar5) {
      pFVar2 = (param_2->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (param_2->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_2->Data).ArrayNum = (pFVar5->Data).ArrayNum;
      (param_2->Data).ArrayMax = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if ((FName)local_28.Archive.Ptr != (FName)0x0) {
      FMemory::Free(local_28.Archive.Ptr);
    }
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (param_3) {
    return bVar3;
  }
  local_38.PackageName = (FName)(param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  local_38._8_4_ = iVar1 + -1;
  if (iVar1 == 0) {
    local_38._8_4_ = 0;
  }
  local_18._12_4_ = uStack_2c;
  local_18.Size = local_38._8_4_;
  local_18.DataPtr = (wchar_t *)local_38.PackageName;
  FPackagePath::FromLocalPath(&local_38,&local_18);
  pIVar4 = IPackageResourceManager::Get();
  IPackageResourceManager::OpenReadPackage(pIVar4,&local_28,&local_38,(FPackagePath *)0x0);
  if ((FName)local_28.Archive.Ptr != (FName)0x0) {
    if (local_28.Format != Text) {
      (*(code *)**(undefined8 **)local_28.Archive.Ptr)(local_28.Archive.Ptr,1);
      return bVar3;
    }
    if ((FName)local_28.Archive.Ptr != (FName)0x0) {
      (*(code *)**(undefined8 **)local_28.Archive.Ptr)(local_28.Archive.Ptr,1);
    }
  }
  return false;
}

// FindPackagesInDirectories @ 141e9d840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FPackageName::FindPackagesInDirectories
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArrayView<FString_const_,int> *param_2)

{
  int *piVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  undefined1 uVar6;
  ulonglong uVar7;
  byte bVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  ForAnyElementType FVar12;
  TBitArray<FDefaultBitArrayAllocator> *pTVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  FString *pFVar19;
  FString *pFVar20;
  undefined1 auStackY_188 [32];
  undefined1 local_138;
  undefined1 local_137 [7];
  ForAnyElementType local_130;
  undefined8 local_128;
  longlong *local_120;
  uint uStack_118;
  uint uStack_114;
  TBitArray<FDefaultBitArrayAllocator> *local_110;
  undefined4 uStack_108;
  uint uStack_104;
  uint local_100;
  uint uStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  FString local_f0;
  ForAnyElementType *local_e0;
  longlong *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  code *local_a8;
  ForAnyElementType **local_a0;
  undefined1 local_98 [32];
  TBitArray<FDefaultBitArrayAllocator> *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  pTVar2 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pFVar20 = param_2->DataPtr;
  uVar7 = 0;
  local_98._8_4_ = 0;
  pFVar19 = pFVar20 + param_2->ArrayNum;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_78 = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  local_130.Data = (FScriptContainerElement *)0x0;
  local_128 = 0;
  uVar18 = uVar7;
  if (pFVar20 != pFVar19) {
    while( true ) {
      if ((int)uVar18 < 0) {
        DestructItems<FString,int>((FString *)local_130.Data,(int)uVar7);
        bVar5 = local_128._4_4_ != 0;
        local_128 = (ulonglong)local_128._4_4_ << 0x20;
        if (bVar5) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,&local_130,0,(int *)((longlong)&local_128 + 4));
        }
      }
      else {
        DestructItems<FString,int>((FString *)local_130.Data,(int)uVar7);
        local_128 = local_128 & 0xffffffff00000000;
      }
      local_e0 = &local_130;
      local_a8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FPackageName::FindPackagesInDirectory'::__l2::<lambda_1>,bool,wchar_t_const_*>
                 ::Call;
      local_a0 = &local_e0;
      IteratePackagesInDirectory(pFVar20,(TFunctionRef<bool___cdecl(wchar_t_const_*)> *)&local_a8);
      iVar11 = (int)local_128;
      uVar7 = (ulonglong)(int)local_128;
      pFVar15 = local_130.Data + uVar7 * 0x10;
      FVar12.Data = local_130.Data;
      while( true ) {
        if ((int)uVar7 != iVar11) {
          local_138 = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_138);
          uVar7 = local_128 & 0xffffffff;
        }
        if (FVar12.Data == pFVar15) break;
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
                  ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98,
                   &local_f0,(bool *)FVar12.Data);
        uVar7 = local_128 & 0xffffffff;
        FVar12.Data = FVar12.Data + 0x10;
      }
      pFVar20 = pFVar20 + 1;
      if (pFVar20 == pFVar19) break;
      uVar18 = local_128 >> 0x20;
    }
  }
  uVar17 = 0;
  uVar16 = (local_98._8_4_ - local_64) + param_1->ArrayNum;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  piVar1 = &param_1->ArrayMax;
  iStack_f8 = local_98._8_4_;
  if (param_1->ArrayMax < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar16,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
    iStack_f8 = local_98._8_4_;
  }
  uVar16 = local_70;
  uStack_114 = 1;
  uStack_104 = uVar17;
  local_100 = uVar17;
  if (local_70 != 0) {
    pTVar13 = pTVar2;
    if (local_78 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar13 = local_78;
    }
    uVar14 = *(uint *)(pTVar13->AllocatorInstance).InlineData;
    uVar17 = 0;
    local_100 = 0;
    while (uVar14 == 0) {
      lVar9 = (longlong)(int)uVar17;
      local_100 = local_100 + 0x20;
      uVar17 = uVar17 + 1;
      uStack_104 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar17)
      goto LAB_141e9da6f;
      uVar14 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar9 * 4 + 4);
    }
    uStack_114 = -uVar14 & uVar14;
    uVar18 = (ulonglong)uStack_114 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_f0.Data.AllocatorInstance.Data._4_4_ = (int)lVar9;
    uStack_104 = (local_100 - 1) + local_f0.Data.AllocatorInstance.Data._4_4_;
    if ((int)local_70 < (int)uStack_104) {
      uStack_104 = local_70;
    }
  }
LAB_141e9da6f:
  iStack_f8 = iStack_f8 - local_64;
  local_120 = (longlong *)local_98;
  uStack_108 = 0xffffffff;
  TStack_d0.CurrentBitIndex = uStack_104;
  TStack_d0.UnvisitedBitMask = 0xffffffff;
  TStack_d0._padding_ = CONCAT44(uStack_114,uVar17);
  uVar14 = local_70 & 0xffffffe0;
  iVar11 = (int)local_70 >> 5;
  TStack_d0._28_4_ = uStack_104;
  TStack_d0.BaseBitIndex = local_100;
  uStack_b0 = CONCAT44(uStack_f4,iStack_f8);
  bVar8 = (byte)local_70;
  uStack_118 = uVar17;
  local_110 = pTVar2;
  uStack_fc = uStack_104;
  local_d8 = local_120;
  TStack_d0.Array = pTVar2;
  if (((int)local_70 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  if (uVar16 != local_70) {
    pTVar13 = pTVar2;
    if (local_78 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar13 = local_78;
    }
    uVar17 = -1 << (bVar8 & 0x1f) &
             *(uint *)((pTVar13->AllocatorInstance).InlineData + (longlong)iVar11 * 4);
    while (uVar17 == 0) {
      lVar9 = (longlong)iVar11;
      uVar14 = uVar14 + 0x20;
      iVar11 = iVar11 + 1;
      uVar16 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
      goto LAB_141e9db80;
      uVar17 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar9 * 4 + 4);
    }
    uVar18 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_f0.Data.ArrayNum = (int)lVar9;
    uVar16 = local_f0.Data.ArrayNum + -1 + uVar14;
    if ((int)local_70 < (int)uVar16) {
      uVar16 = local_70;
    }
  }
LAB_141e9db80:
  while( true ) {
    plVar4 = local_d8;
    if ((int)local_d8[1] - *(int *)((longlong)local_d8 + 0x34) != (int)uStack_b0) {
      local_137[0] = 0;
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_137);
    }
    if (((TStack_d0.CurrentBitIndex == uVar16) && (TStack_d0.Array == pTVar2)) &&
       (plVar4 == (longlong *)local_98)) break;
    pFVar15 = (FScriptContainerElement *)(*plVar4 + (longlong)TStack_d0.CurrentBitIndex * 0x18);
    pFVar10 = (param_1->AllocatorInstance).Data;
    if (((pFVar10 <= pFVar15) && (pFVar15 < pFVar10 + (longlong)*piVar1 * 0x10)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    iVar11 = param_1->ArrayNum;
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&param_1->AllocatorInstance,piVar1);
    }
    param_1->ArrayNum = iVar11 + 1;
    pFVar10 = (param_1->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
    *(undefined8 *)pFVar10 = 0;
    *(undefined8 *)pFVar10 = *(undefined8 *)pFVar15;
    *(undefined8 *)pFVar15 = 0;
    *(undefined4 *)(pFVar10 + 8) = *(undefined4 *)(pFVar15 + 8);
    *(undefined4 *)(pFVar10 + 0xc) = *(undefined4 *)(pFVar15 + 0xc);
    *(undefined8 *)(pFVar15 + 8) = 0;
    TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
  }
  iVar11 = local_98._8_4_ - local_64;
  DestructItems<FString,int>((FString *)local_130.Data,(int)local_128);
  if (local_130.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data);
  }
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return 0 < iVar11;
}

// FindPackagesInDirectory @ 141e9dd10

bool __cdecl
FPackageName::FindPackagesInDirectory
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,FString *param_2)

{
  int iVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_res8;
  code *local_18;
  TArray<FString,TSizedDefaultAllocator<32>_> **local_10;
  
  iVar1 = param_1->ArrayNum;
  local_10 = &local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FPackageName::FindPackagesInDirectory'::__l2::<lambda_1>,bool,wchar_t_const_*>
             ::Call;
  local_res8 = param_1;
  IteratePackagesInDirectory(param_2,(TFunctionRef<bool___cdecl(wchar_t_const_*)> *)&local_18);
  return iVar1 < param_1->ArrayNum;
}

// FindScriptPackageName @ 141e9dd70

FName * __cdecl FPackageName::FindScriptPackageName(FName param_1)

{
  TTuple<FName,FName> *pTVar1;
  FName *pFVar2;
  
  pTVar1 = TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                   *)&ScriptPackageNames,param_1);
  pFVar2 = (FName *)&pTVar1->field_0x8;
  if (pTVar1 == (TTuple<FName,FName> *)0x0) {
    pFVar2 = (FName *)0x0;
  }
  return pFVar2;
}

// FixPackageNameCase @ 141e9e010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl FPackageName::FixPackageNameCase(FString *param_1,TStringView<wchar_t> *param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  IPackageResourceManager *pIVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_288 [32];
  FPackagePath local_268;
  FScriptContainerElement *local_258;
  int iStack_250;
  undefined4 uStack_24c;
  TStringView<wchar_t> local_248;
  TStringBuilderBase<wchar_t> local_238;
  wchar_t local_218 [256];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_288;
  local_258 = (param_1->Data).AllocatorInstance.Data;
  iVar8 = (param_1->Data).ArrayNum;
  local_268.PackageName.ComparisonIndex.Value = 0;
  local_268.PackageName.Number = 0;
  local_268.HeaderExtension = Unspecified;
  iStack_250 = iVar8 + -1;
  if (iVar8 == 0) {
    iStack_250 = 0;
  }
  local_248._12_4_ = uStack_24c;
  local_248.Size = iStack_250;
  local_248.DataPtr = (wchar_t *)local_258;
  bVar2 = FPackagePath::TryFromPackageName(&local_248,&local_268);
  if (bVar2) {
    pIVar6 = IPackageResourceManager::Get();
    cVar3 = (**(code **)((longlong)*pIVar6 + 0x40))(pIVar6,&local_268,&local_268);
    if (cVar3 != '\0') {
      local_238.Base = local_218;
      local_238.CurPos = local_218;
      local_238.bIsDynamic = false;
      local_238.bIsExternal = false;
      local_238.End = (wchar_t *)local_18;
      FPackagePath::AppendPackageName(&local_268,&local_238);
      iVar8 = (param_1->Data).ArrayNum;
      iVar7 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar7 = 0;
      }
      iVar8 = (int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1);
      if ((((iVar7 != iVar8) ||
           (((iVar7 != 0 && (iVar8 != 0)) &&
            (iVar5 = FGenericPlatformStricmp::Strnicmp
                               ((wchar_t *)(param_1->Data).AllocatorInstance.Data,local_238.Base,
                                (longlong)iVar8), iVar5 != 0)))) || (iVar7 != iVar8)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("FStringView(LongPackageName).Equals(DiskPackageName, ESearchCase::IgnoreCase)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Misc\\PackageName.cpp"
                             ,0x769,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      ::FString::AssignRange
                (param_1,local_238.Base,
                 (int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1));
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_238);
      return true;
    }
  }
  return false;
}

// FormatErrorAsString @ 141e9e340

FString * __cdecl
FPackageName::FormatErrorAsString
          (FString *__return_storage_ptr__,TStringView<wchar_t> *param_1,EErrorCode param_2)

{
  FString *pFVar1;
  FText local_28;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  FormatErrorAsText(&local_28,&local_18,param_2);
  pFVar1 = FText::ToString(&local_28);
  ::FString::FString(__return_storage_ptr__,pFVar1);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// FormatErrorAsText @ 141e9e3a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
FPackageName::FormatErrorAsText
          (FText *__return_storage_ptr__,TStringView<wchar_t> *param_1,EErrorCode param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  FText *pFVar5;
  FTextFormat *pFVar6;
  longlong lVar7;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_2f8
  ;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_2e8;
  FString local_2d8;
  FString local_2c8;
  FFormatArgumentValue local_2b8;
  FFormatArgumentValue local_298;
  FString local_278;
  FString local_268;
  TSharedPtr<FCulture,1> local_258;
  FFormatArgumentValue local_248;
  FFormatArgumentValue local_228;
  FText local_208;
  FText local_1f8;
  FText local_1e8;
  FText local_1d8;
  FString local_1c8;
  FText local_1b8;
  FText local_1a8;
  FString local_198;
  FText local_188;
  FText local_178;
  FText local_168;
  FText local_158;
  FText local_148;
  FText local_138;
  FString local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FTextFormat local_e8;
  FTextFormat local_d8;
  wchar_t *local_c8;
  undefined8 uStack_c0;
  wchar_t *local_b8;
  undefined8 uStack_b0;
  FTextFormat local_a8;
  FTextFormat local_98;
  FTextFormat local_88;
  FTextFormat local_78;
  FTextFormat local_68;
  FTextFormat local_58;
  FTextFormat local_48;
  FTextFormat local_38;
  FTextFormat local_28;
  
  local_c8 = param_1->DataPtr;
  uStack_c0 = *(undefined8 *)&param_1->Size;
  local_2f8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2f8.Pairs.ArrayNum = 0;
  local_2f8.Pairs.ArrayMax = 0;
  local_2d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2d8.Data.ArrayNum = 0;
  local_2d8.Data.ArrayMax = 0;
  pFVar4 = ::FString::ConstructFromPtrSize
                     (&local_128,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
  if (&local_2d8 != pFVar4) {
    if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
    }
    local_2d8.Data.AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2d8.Data.ArrayNum = (pFVar4->Data).ArrayNum;
    local_2d8.Data.ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  pFVar5 = FText::FromString(&local_118,&local_2d8);
  local_228.Type = Text;
  FText::FText((FText *)&local_228.TextValue,pFVar5);
  if ((local_228.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FText *)(*pcVar1)();
    return pFVar5;
  }
  ::FString::FString(&local_278,L"InPath");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_2f8,&local_278,&local_228);
  if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Data.AllocatorInstance.Data);
  }
  if (local_228.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_228.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
              ();
  }
  if (local_118.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
  }
  if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
  }
  switch(param_2) {
  case PackageNameUnknown:
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_108,L"Core",L"PackageNameUnknownError",
                        L"Input \'{InPath}\' caused undocumented internal error.");
    pFVar6 = FTextFormat::FTextFormat(&local_58,pFVar5,Default);
    FText::Format(__return_storage_ptr__,pFVar6,&local_2f8);
    local_138.TextData.Reference = local_108.TextData.Reference;
    break;
  case PackageNameEmptyPath:
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_f8,L"Core",L"PackageNameEmptyPath",L"Input \'{InPath}\' was empty.");
    pFVar6 = FTextFormat::FTextFormat(&local_48,pFVar5,Default);
    FText::Format(__return_storage_ptr__,pFVar6,&local_2f8);
    local_138.TextData.Reference = local_f8.TextData.Reference;
    break;
  case PackageNamePathNotMounted:
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_208,L"Core",L"PackageNamePathNotMounted",
                        L"Input \'{InPath}\' is not a child of an existing mount point.");
    pFVar6 = FTextFormat::FTextFormat(&local_38,pFVar5,Default);
    FText::Format(__return_storage_ptr__,pFVar6,&local_2f8);
    local_138.TextData.Reference = local_208.TextData.Reference;
    break;
  case PackageNamePathIsMemoryOnly:
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_1f8,L"Core",L"PackageNamePathIsMemoryOnly",
                        L"Input \'{InPath}\' is in a memory-only mount point.");
    pFVar6 = FTextFormat::FTextFormat(&local_e8,pFVar5,Default);
    FText::Format(__return_storage_ptr__,pFVar6,&local_2f8);
    local_138.TextData.Reference = local_1f8.TextData.Reference;
    break;
  case PackageNameSpacesNotAllowed:
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_1e8,L"Core",L"PackageNameSpacesNotAllowed",
                        L"Input \'{InPath}\' includes a space. A space is not valid in ObjectPaths unless it is delimiting a ClassName in a full ObjectPath, and full ObjectPaths are not supported in this function."
                       );
    pFVar6 = FTextFormat::FTextFormat(&local_d8,pFVar5,Default);
    FText::Format(__return_storage_ptr__,pFVar6,&local_2f8);
    local_138.TextData.Reference = local_1e8.TextData.Reference;
    break;
  case PackageNameContainsInvalidCharacters:
    pFVar4 = ::FString::FString(&local_1c8,L"\\:*?\"<>|\' ,.&!~\n\r\t@#");
    pFVar5 = FText::FromString(&local_1d8,pFVar4);
    local_248.Type = Text;
    FText::FText((FText *)&local_248.TextValue,pFVar5);
    if ((local_248.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar1)();
      return pFVar5;
    }
    ::FString::FString(&local_268,L"IllegalNameCharacters");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_2f8,&local_268,&local_248);
    if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Data.AllocatorInstance.Data);
    }
    if (local_248.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_248.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    if (local_1d8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1d8.TextData.Reference + 0x10))();
    }
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_1b8,L"Core",L"PackageNameContainsInvalidCharacters",
                        L"Input \'{InPath}\' contains one of the invalid characters for LongPackageNames: \'{IllegalNameCharacters}\'."
                       );
    pFVar6 = FTextFormat::FTextFormat(&local_78,pFVar5,Default);
    FText::Format(__return_storage_ptr__,pFVar6,&local_2f8);
    local_138.TextData.Reference = local_1b8.TextData.Reference;
    break;
  case LongPackageNames_PathTooShort:
    local_2e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2e8.ArrayNum = 0;
    local_2e8.ArrayMax = 0;
    local_258.Object = (FCulture *)0x0;
    local_258.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar5 = FText::AsNumber(&local_1a8,4,(FNumberFormattingOptions *)0x0,&local_258);
    local_2b8.Type = Text;
    FText::FText((FText *)&local_2b8.TextValue,pFVar5);
    if ((local_2b8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar1)();
      return pFVar5;
    }
    if (((local_2e8.AllocatorInstance.Data <= &local_2b8) &&
        (&local_2b8 <
         (FFormatArgumentValue *)
         (local_2e8.AllocatorInstance.Data + (longlong)local_2e8.ArrayMax * 0x20))) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar1)();
      return pFVar5;
    }
    iVar3 = local_2e8.ArrayNum;
    if (local_2e8.ArrayNum == local_2e8.ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&local_2e8.AllocatorInstance,&local_2e8.ArrayMax);
    }
    local_2e8.ArrayNum = iVar3 + 1;
    lVar7 = (longlong)iVar3 * 0x20;
    *(Type *)&local_2e8.AllocatorInstance.Data[lVar7].field_0x0 = local_2b8.Type;
    *(ulonglong *)(local_2e8.AllocatorInstance.Data + lVar7 + 8) =
         CONCAT44(local_2b8.field1_0x8.IntValue._4_4_,local_2b8.field1_0x8.FloatValue);
    *(ulonglong *)(local_2e8.AllocatorInstance.Data + lVar7 + 8) =
         CONCAT44(local_2b8.field1_0x8.IntValue._4_4_,local_2b8.field1_0x8.FloatValue);
    *(float *)(local_2e8.AllocatorInstance.Data + lVar7 + 8) = local_2b8.field1_0x8.FloatValue;
    *(ulonglong *)(local_2e8.AllocatorInstance.Data + lVar7 + 8) =
         CONCAT44(local_2b8.field1_0x8.IntValue._4_4_,local_2b8.field1_0x8.FloatValue);
    *(undefined8 *)&local_2e8.AllocatorInstance.Data[lVar7 + 0x10].field_0x0 = 0;
    *(undefined4 *)(local_2e8.AllocatorInstance.Data + lVar7 + 0x18) = 0;
    if ((local_2b8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) &&
       (FText::FText((FText *)(local_2e8.AllocatorInstance.Data + lVar7 + 0x10),
                     (FText *)&local_2b8.TextValue),
       local_2b8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)) {
      (**(code **)((longlong)
                   *(ITextData *)local_2b8.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    if (local_1a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1a8.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_258.SharedReferenceCount.ReferenceController);
    local_b8 = param_1->DataPtr;
    uStack_b0 = *(undefined8 *)&param_1->Size;
    local_2c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2c8.Data.ArrayNum = 0;
    local_2c8.Data.ArrayMax = 0;
    pFVar4 = ::FString::ConstructFromPtrSize
                       (&local_198,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
    if (&local_2c8 != pFVar4) {
      if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
      }
      local_2c8.Data.AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
      (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2c8.Data.ArrayNum = (pFVar4->Data).ArrayNum;
      local_2c8.Data.ArrayMax = (pFVar4->Data).ArrayMax;
      (pFVar4->Data).ArrayNum = 0;
      (pFVar4->Data).ArrayMax = 0;
    }
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
    pFVar5 = FText::FromString(&local_188,&local_2c8);
    local_298.Type = Text;
    FText::FText((FText *)&local_298.TextValue,pFVar5);
    if ((local_298.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar1)();
      return pFVar5;
    }
    if (((local_2e8.AllocatorInstance.Data <= &local_298) &&
        (&local_298 <
         (FFormatArgumentValue *)
         (local_2e8.AllocatorInstance.Data + (longlong)local_2e8.ArrayMax * 0x20))) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar1)();
      return pFVar5;
    }
    iVar3 = local_2e8.ArrayNum;
    if (local_2e8.ArrayNum == local_2e8.ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&local_2e8.AllocatorInstance,&local_2e8.ArrayMax);
    }
    local_2e8.ArrayNum = iVar3 + 1;
    lVar7 = (longlong)iVar3 * 0x20;
    *(Type *)&local_2e8.AllocatorInstance.Data[lVar7].field_0x0 = local_298.Type;
    *(ulonglong *)(local_2e8.AllocatorInstance.Data + lVar7 + 8) =
         CONCAT44(local_298.field1_0x8.IntValue._4_4_,local_298.field1_0x8.FloatValue);
    *(ulonglong *)(local_2e8.AllocatorInstance.Data + lVar7 + 8) =
         CONCAT44(local_298.field1_0x8.IntValue._4_4_,local_298.field1_0x8.FloatValue);
    *(float *)(local_2e8.AllocatorInstance.Data + lVar7 + 8) = local_298.field1_0x8.FloatValue;
    *(ulonglong *)(local_2e8.AllocatorInstance.Data + lVar7 + 8) =
         CONCAT44(local_298.field1_0x8.IntValue._4_4_,local_298.field1_0x8.FloatValue);
    *(undefined8 *)&local_2e8.AllocatorInstance.Data[lVar7 + 0x10].field_0x0 = 0;
    *(undefined4 *)(local_2e8.AllocatorInstance.Data + lVar7 + 0x18) = 0;
    if ((local_298.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) &&
       (FText::FText((FText *)(local_2e8.AllocatorInstance.Data + lVar7 + 0x10),
                     (FText *)&local_298.TextValue),
       local_298.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)) {
      (**(code **)((longlong)
                   *(ITextData *)local_298.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    if (local_188.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
    }
    if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
    }
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_178,L"Core",L"LongPackageNames_PathTooShort",
                        L"Input \'{1}\' contains fewer than the minimum number of characters {0} for LongPackageNames."
                       );
    pFVar6 = FTextFormat::FTextFormat(&local_a8,pFVar5,Default);
    FText::Format(__return_storage_ptr__,pFVar6,&local_2e8);
    if (local_178.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
    }
    DestructItems<FFormatArgumentValue,int>
              ((FFormatArgumentValue *)local_2e8.AllocatorInstance.Data,local_2e8.ArrayNum);
    if ((FFormatArgumentValue *)local_2e8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
      FMemory::Free(local_2e8.AllocatorInstance.Data);
    }
    goto LAB_141e9ece3;
  case LongPackageNames_PathWithNoStartingSlash:
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_168,L"Core",L"LongPackageNames_PathWithNoStartingSlash",
                        L"Input \'{InPath}\' does not start with a \'/\', which is required for LongPackageNames."
                       );
    pFVar6 = FTextFormat::FTextFormat(&local_98,pFVar5,Default);
    FText::Format(__return_storage_ptr__,pFVar6,&local_2f8);
    local_138.TextData.Reference = local_168.TextData.Reference;
    break;
  case LongPackageNames_PathWithTrailingSlash:
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_158,L"Core",L"LongPackageNames_PathWithTrailingSlash",
                        L"Input \'{InPath}\' ends with a \'/\', which is invalid for LongPackageNames."
                       );
    pFVar6 = FTextFormat::FTextFormat(&local_88,pFVar5,Default);
    FText::Format(__return_storage_ptr__,pFVar6,&local_2f8);
    local_138.TextData.Reference = local_158.TextData.Reference;
    break;
  case LongPackageNames_PathWithDoubleSlash:
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_148,L"Core",L"LongPackageNames_PathWithDoubleSlash",
                        L"Input \'{InPath}\' contains \'//\', which is invalid for LongPackageNames."
                       );
    pFVar6 = FTextFormat::FTextFormat(&local_28,pFVar5,Default);
    FText::Format(__return_storage_ptr__,pFVar6,&local_2f8);
    local_138.TextData.Reference = local_148.TextData.Reference;
    break;
  default:
    if (2 < (byte)LogPackageName._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPackageName);
    }
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_138,L"Core",L"PackageNameUndocumentedError",
                        L"Input \'{InPath} caused undocumented internal error.");
    pFVar6 = FTextFormat::FTextFormat(&local_68,pFVar5,Default);
    FText::Format(__return_storage_ptr__,pFVar6,&local_2f8);
  }
  if (local_138.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
  }
LAB_141e9ece3:
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_2f8.Pairs.AllocatorInstance.Data,
             local_2f8.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_2f8.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_2f8.Pairs.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAssetPackageExtension @ 141e9f580

FString * __cdecl FPackageName::GetAssetPackageExtension(void)

{
  wchar_t *pwVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pwVar1 = ::LexToString(Asset);
      ::FString::FString(&AssetPackageExtension,pwVar1);
      atexit(`FPackageName::GetAssetPackageExtension'::__l2::
             _dynamic_atexit_destructor_for__AssetPackageExtension__);
      _Init_thread_footer(&::_TSS0);
      return &AssetPackageExtension;
    }
  }
  return &AssetPackageExtension;
}

// GetContentPathForPackageRoot @ 141e9fb10

FString * __cdecl
FPackageName::GetContentPathForPackageRoot
          (FString *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FLongPackagePathsSingleton *SRWLock;
  FString *pFVar3;
  FMountPoint **ppFVar4;
  TStringView<wchar_t> local_18;
  
  SRWLock = FLongPackagePathsSingleton::Get();
  if (SRWLock == (FLongPackagePathsSingleton *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  ppFVar4 = TDirectoryTree<FMountPoint_*>::FindClosestValue(&SRWLock->RootPathTree,&local_18);
  if (ppFVar4 == (FMountPoint **)0x0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  else {
    ::FString::FString(__return_storage_ptr__,&(*ppFVar4)->ContentPathAbsolute);
  }
  if (SRWLock != (FLongPackagePathsSingleton *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return __return_storage_ptr__;
}

// GetDelegateResolvedPackagePath @ 141e9fbc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __cdecl
FPackageName::GetDelegateResolvedPackagePath(FString *__return_storage_ptr__,FString *param_1)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  char cVar5;
  int iVar6;
  ForAnyElementType FVar7;
  int iVar8;
  ForAnyElementType FVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  undefined1 local_res20 [8];
  FString local_b8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a8;
  ForAnyElementType local_a0;
  int local_98;
  FString local_90;
  FDestructionSentinel local_80;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  ForAnyElementType local_60;
  int local_58;
  FScriptContainerElement *local_50;
  
  if (0 < FCoreDelegates::PackageNameResolvers.ArrayNum) {
    iVar12 = (param_1->Data).ArrayNum;
    pFVar11 = (param_1->Data).AllocatorInstance.Data;
    bVar2 = false;
    bVar3 = false;
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.Data.ArrayNum = iVar12;
    if (iVar12 == 0) {
      local_b8.Data.ArrayNum = 0;
      local_b8.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar12,0,(ForAnyElementType *)&local_b8,iVar12,&local_b8.Data.ArrayMax);
      memcpy(local_b8.Data.AllocatorInstance.Data,pFVar11,(longlong)iVar12 * 2);
    }
    local_50 = (FScriptContainerElement *)0x0;
    for (FVar9.Data = local_b8.Data.AllocatorInstance.Data; iVar12 = 0,
        FVar9.Data != local_b8.Data.AllocatorInstance.Data + (longlong)local_b8.Data.ArrayNum * 2;
        FVar9.Data = FVar9.Data + 2) {
      if (*(short *)FVar9.Data == 0x2e) {
        iVar8 = (int)((longlong)FVar9.Data - (longlong)local_b8.Data.AllocatorInstance.Data >> 1);
        iVar12 = 0;
        if (iVar8 != -1) {
          ::FString::RightChop(&local_b8,&local_90,iVar8 + 1);
          iVar12 = local_90.Data.ArrayNum;
          local_50 = local_90.Data.AllocatorInstance.Data;
          iVar10 = local_b8.Data.ArrayNum + -1;
          if (local_b8.Data.ArrayNum == 0) {
            iVar10 = 0;
          }
          iVar6 = iVar10;
          if (iVar8 < iVar10) {
            iVar6 = iVar8;
          }
          iVar8 = 0;
          if (0 < iVar6) {
            iVar8 = iVar6;
          }
          ::FString::RemoveAt(&local_b8,iVar8,iVar10 - iVar8,No);
        }
        break;
      }
    }
    iVar8 = FCoreDelegates::PackageNameResolvers.ArrayNum;
    pFVar11 = FCoreDelegates::PackageNameResolvers.AllocatorInstance.Data +
              (longlong)FCoreDelegates::PackageNameResolvers.ArrayNum * 0x18;
    FVar9.Data = FCoreDelegates::PackageNameResolvers.AllocatorInstance.Data;
    while( true ) {
      if (FCoreDelegates::PackageNameResolvers.ArrayNum != iVar8) {
        `TCheckedPointerIterator<TDelegate<bool___cdecl(FString_const_&,FString_&),FDefaultDelegateUserPolicy>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      pFVar4 = local_50;
      if (FVar9.Data == pFVar11) break;
      local_a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_a0.Data = (FScriptContainerElement *)0x0;
      local_98 = 0;
      if (FVar9.Data != (FScriptContainerElement *)&local_a8) {
        local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
        local_60.Data = (FScriptContainerElement *)0x0;
        local_58 = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)FVar9.Data,
                   (FReadAccessScope *)&local_80);
        if ((*(int *)(FVar9.Data + 0x10) != 0) &&
           (plVar1 = *(longlong **)(FVar9.Data + 8), plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x50))(plVar1,&local_68);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)&local_80);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_68,(FWriteAccessScope *)&local_80);
        iVar10 = local_58;
        FVar7.Data = local_60.Data;
        local_60.Data = (FScriptContainerElement *)0x0;
        local_58 = 0;
        if (local_80.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_a8,(FWriteAccessScope *)&local_80);
        if (local_98 == 0) {
LAB_141e9fdcc:
          if (local_a0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0.Data);
          }
        }
        else if (local_a0.Data != (FScriptContainerElement *)0x0) {
          (*(code *)**(undefined8 **)local_a0.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a0,0,0,0x10);
          local_98 = 0;
          goto LAB_141e9fdcc;
        }
        local_a0.Data = FVar7.Data;
        local_98 = iVar10;
        if (local_80.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_68,(FWriteAccessScope *)&local_80);
        if ((local_58 != 0) && (local_60.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)local_60.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_60,0,0,0x10);
          local_58 = 0;
        }
        if (local_80.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
        }
        if (local_60.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
        bVar2 = bVar3;
      }
      local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_90.Data.ArrayNum = 0;
      local_90.Data.ArrayMax = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&local_a8,(FReadAccessScope *)&local_80);
      FVar7.Data = (FScriptContainerElement *)0x0;
      if (local_98 != 0) {
        FVar7.Data = local_a0.Data;
      }
      cVar5 = (**(code **)(*(longlong *)FVar7.Data + 0x60))(FVar7.Data,&local_b8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_80);
      if (cVar5 != '\0') {
        if (3 < (byte)LogPackageName._0_1_) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogPackageName);
        }
        iVar10 = local_90.Data.ArrayNum + -1;
        if (local_90.Data.ArrayNum == 0) {
          iVar10 = 0;
        }
        ::FString::AssignRange(&local_b8,(wchar_t *)local_90.Data.AllocatorInstance.Data,iVar10);
        bVar2 = true;
        bVar3 = true;
      }
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_a8,(FWriteAccessScope *)&local_80);
      if ((local_98 != 0) && (local_a0.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_a0.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a0,0,0,0x10);
        local_98 = 0;
      }
      if (local_80.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
      }
      if (local_a0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a8.AccessDetector);
      FVar9.Data = FVar9.Data + 0x18;
    }
    if (bVar2) {
      iVar8 = iVar12 + -1;
      if (iVar12 == 0) {
        iVar8 = 0;
      }
      FVar9.Data = local_50;
      if (iVar8 != 0) {
        pFVar11 = local_b8.Data.AllocatorInstance.Data + (longlong)local_b8.Data.ArrayNum * 2;
        do {
          if (pFVar11 == local_b8.Data.AllocatorInstance.Data) goto LAB_141ea0003;
          pFVar11 = pFVar11 + -2;
        } while (*(short *)pFVar11 != 0x2f);
        iVar8 = (int)((longlong)pFVar11 - (longlong)local_b8.Data.AllocatorInstance.Data >> 1);
        if (iVar8 != -1) {
          ::FString::RightChop(&local_b8,&local_90,iVar8 + 1);
          if (pFVar4 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar4);
          }
          FVar9.Data = local_90.Data.AllocatorInstance.Data;
          iVar12 = local_90.Data.ArrayNum;
        }
LAB_141ea0003:
        ::FString::AppendChars(&local_b8,L".",1);
        iVar8 = iVar12 + -1;
        if (iVar12 == 0) {
          iVar8 = 0;
        }
        ::FString::AppendChars(&local_b8,(wchar_t *)FVar9.Data,iVar8);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_b8.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_b8.Data.ArrayMax;
      local_b8.Data.ArrayNum = 0;
      local_b8.Data.ArrayMax = 0;
      local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (FVar9.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar9.Data);
      }
      if (local_b8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
    if (local_50 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50);
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
  }
  ::FString::FString(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetExplanationForUnavailablePackage @ 141ea00c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EPathFormatFlags": Some values do not have unique names */
/* WARNING: Enum "EPackageLocationFilter": Some values do not have unique names */

void __cdecl
FPackageName::GetExplanationForUnavailablePackage
          (FName *param_1,TStringBuilderBase<wchar_t> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  EPackageLocationFilter EVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  FLongPackagePathsSingleton *this;
  IFileManager *pIVar9;
  IPluginManager *pIVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  ForAnyElementType FVar14;
  FPackagePath local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  FString local_c8;
  FScriptContainerElement *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  FScriptContainerElement *local_a8;
  uint uStack_a0;
  undefined4 uStack_9c;
  FDestructionSentinel local_98;
  FString local_80;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  FString local_38;
  
  SplitPackageNameRoot(&local_80,*param_1,(FString *)0x0,MountPointNoSlashes);
  ::FString::PrintfImpl(&local_c8,L"/%s");
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  this = FLongPackagePathsSingleton::Get();
  local_b8 = local_c8.Data.AllocatorInstance.Data;
  iStack_b0 = local_c8.Data.ArrayNum + -1;
  if (local_c8.Data.ArrayNum == 0) {
    iStack_b0 = 0;
  }
  local_68._12_4_ = uStack_ac;
  local_68.Size = iStack_b0;
  local_68.DataPtr = (wchar_t *)local_c8.Data.AllocatorInstance.Data;
  bVar3 = FLongPackagePathsSingleton::MountPointExists(this,&local_68);
  uVar7 = 0;
  if (bVar3) {
    local_118.PackageName.ComparisonIndex.Value = 0;
    local_118.PackageName.Number = 0;
    local_118.HeaderExtension = Unspecified;
    ::FName::ToString(param_1,&local_108);
    local_a8 = local_108.Data.AllocatorInstance.Data;
    uStack_a0 = local_108.Data.ArrayNum - 1;
    if (local_108.Data.ArrayNum == 0) {
      uStack_a0 = uVar7;
    }
    local_58._12_4_ = uStack_9c;
    local_58.Size = uStack_a0;
    local_58.DataPtr = (wchar_t *)local_108.Data.AllocatorInstance.Data;
    bVar3 = FPackagePath::TryFromMountedName(&local_58,&local_118);
    if (bVar3) {
      bVar3 = FPackagePath::IsMountedPath(&local_118);
      if (bVar3) {
        if (CpuChannel->Enabled < 0) {
          EVar4 = InternalDoesPackageExistEx(&local_118,ValidMask,false,(FPackagePath *)0x0);
        }
        else {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId1945,"FPackageName::DoesPackageExistEx",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Misc\\PackageName.cpp"
                     ,0x799);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1945);
          EVar4 = InternalDoesPackageExistEx(&local_118,ValidMask,false,(FPackagePath *)0x0);
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (EVar4 != None) {
          TStringBuilderBase<wchar_t>::AppendfImpl
                    (param_2,
                     L"FPackageName: Skipped package %s was found %s but for some reason could not be found or used by the loader. This could occur if the loader is only considering cooked packages but the package exists only on disk.\n"
                    );
          goto LAB_141ea03f8;
        }
      }
      TStringBuilderBase<wchar_t>::AppendfImpl
                (param_2,
                 L"FPackageName: Skipped package %s has a valid, mounted, mount point but does not exist either on disk or in iostore."
                );
      uStack_d0 = 0;
      local_d8 = 0;
      local_48.DataPtr = (wchar_t *)0x0;
      local_48.Size = 0;
      local_48._12_4_ = 0;
      FPackagePath::SetHeaderExtension(&local_118,EmptyString,&local_48);
      FPackagePath::GetLocalFullPath(&local_118,&local_e8);
      uVar12 = local_e8.Data.ArrayNum - 1;
      if (local_e8.Data.ArrayNum == 0) {
        uVar12 = uVar7;
      }
      if (uVar12 == 0) {
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,L"\n",1);
      }
      else {
        pIVar9 = IFileManager::Get();
        FVar14.Data = (FScriptContainerElement *)L"";
        if (local_e8.Data.ArrayNum != 0) {
          FVar14.Data = local_e8.Data.AllocatorInstance.Data;
        }
        (**(code **)((longlong)*pIVar9 + 0x100))(pIVar9,&local_f8,FVar14.Data);
        uVar12 = local_f8.Data.ArrayNum - 1;
        if (local_f8.Data.ArrayNum == 0) {
          uVar12 = uVar7;
        }
        if (uVar12 == 0) {
          ::FString::operator=(&local_f8,&local_e8);
        }
        TStringBuilderBase<wchar_t>::AppendfImpl
                  (param_2,
                   L" The uncooked file would be expected on disk at \'%s\'. Perhaps it has been deleted or was not synced?\n"
                  );
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
      }
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
    }
    else {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_221147870366005546>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Misc\\PackageName.cpp"
                         ,0x6d6,"ConvertedToPath");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  else {
    ::FName::ToString(param_1,&local_38);
    TStringBuilderBase<wchar_t>::AppendfImpl
              (param_2,
               L"FPackageName: Unable to identify a valid mount point associated with skipped package %s. The package root is unknown.\n"
              );
    local_108.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
  }
LAB_141ea03f8:
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  pIVar10 = IPluginManager::Get();
  (**(code **)((longlong)*pIVar10 + 0x60))(pIVar10,param_1,param_2);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::Delegate._16_8_ = ___xmm_00000000000000020000000000000000;
    ::Delegate._24_8_ = _UNK_150631d48;
    ::Delegate._0_8_ = 0;
    ::Delegate._8_8_ = 0;
    atexit(`FPackageName::GetExplanationForUnavailablePackageDelegate'::__l2::
           _dynamic_atexit_destructor_for__Delegate__);
    _Init_thread_footer(&::_TSS0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&::Delegate,
             (FWriteAccessScope *)&local_98);
  bVar3 = false;
  iVar11 = ::Delegate._28_4_ + 1;
  uVar12 = ::Delegate._16_4_ - 1;
  ::Delegate._28_4_ = iVar11;
  if (-1 < (int)uVar12) {
    lVar13 = (longlong)(int)uVar12 << 4;
    bVar3 = false;
    do {
      uVar8 = uVar7;
      if ((int)uVar12 < (int)::Delegate._16_4_) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((*(int *)(lVar13 + 8 + ::Delegate._8_8_) == 0) ||
          (plVar1 = *(longlong **)(lVar13 + ::Delegate._8_8_), plVar1 == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(*plVar1 + 0x68))(plVar1,param_1,param_2), cVar6 == '\0')) {
        bVar3 = true;
      }
      lVar13 = lVar13 + -0x10;
      uVar12 = uVar12 - 1;
    } while (-1 < (int)uVar12);
    iVar11 = ::Delegate._28_4_;
  }
  ::Delegate._28_4_ = iVar11 + -1;
  if (bVar3) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&::Delegate,false);
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  return;
}

// GetExplanationForUnavailablePackageDelegate @ 141ea05f0

TMulticastDelegate<void___cdecl(FName_const_&,TStringBuilderBase<wchar_t>_&),FDefaultDelegateUserPolicy>
* __cdecl FPackageName::GetExplanationForUnavailablePackageDelegate(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FPackageName::GetExplanationForUnavailablePackageDelegate'::__l2::
             _dynamic_atexit_destructor_for__Delegate__);
      _Init_thread_footer(&::_TSS0);
      return &::Delegate;
    }
  }
  return &::Delegate;
}

// GetGeneratedPackageSubPath @ 141ea0940

wchar_t * __cdecl FPackageName::GetGeneratedPackageSubPath(void)

{
  return L"_Generated_";
}

// GetLocalizedPackagePath @ 141ea0d30

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __cdecl
FPackageName::GetLocalizedPackagePath
          (FString *__return_storage_ptr__,FString *param_1,FString *param_2)

{
  IPackageLocalizationCache *pIVar1;
  FScriptContainerElement *_Src;
  FPackageLocalizationManager *this;
  FName *pFVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  FName local_res8;
  FName local_res10 [2];
  FName local_res20;
  FName local_68;
  FString local_60;
  FString local_50;
  
  this = FPackageLocalizationManager::Get();
  if ((param_1->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar2 = ::FName::FName(&local_68,pwVar4);
  local_res10[0] = *pFVar2;
  local_res20 = local_res10[0];
  if (PackageLocalizationInternal::GEnableLocalizationPackageRemapping != false) {
    FPackageLocalizationManager::PerformLazyInitialization(this);
    pIVar1 = (this->ActiveCache).Object;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    if (pIVar1 == (IPackageLocalizationCache *)0x0) {
      if (2 < (byte)LogPackageLocalizationManager._0_1_) {
        ::FName::ToString(local_res10,&local_60);
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogPackageLocalizationManager);
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
      }
      local_res8 = FPackageLocalizationManager::FindLocalizedPackageNameNoCache
                             (this,(FName)&local_60,(FString *)local_res10[0]);
    }
    else {
      local_res8 = (FName)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1,&local_60,local_res10[0]);
    }
    local_res8 = *(FName *)local_res8;
    local_res20 = local_res8;
    if ((5 < (byte)LogPackageLocalizationManager._0_1_) && (local_res8 != (FName)0x0)) {
      ::FName::ToString(local_res10,&local_50);
      ::FName::ToString(&local_res8,&local_60);
      UE::Logging::Private::BasicLog<6>
                (&::LOG_Static,(FLogCategoryBase *)&LogPackageLocalizationManager);
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
      local_res20 = local_res8;
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
        local_res20 = local_res8;
      }
    }
  }
  if (local_res20 == (FName)0x0) {
    local_60.Data.ArrayNum = (param_1->Data).ArrayNum;
    lVar5 = (longlong)local_60.Data.ArrayNum;
    _Src = (param_1->Data).AllocatorInstance.Data;
    local_60.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_60.Data.ArrayNum == 0) {
      local_60.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_60.Data.ArrayNum,0,(ForAnyElementType *)&local_60,local_60.Data.ArrayNum,
                 &local_60.Data.ArrayMax);
      memcpy(local_60.Data.AllocatorInstance.Data,_Src,lVar5 * 2);
    }
    ::FString::FString(__return_storage_ptr__,&local_60);
    local_50.Data.AllocatorInstance.Data = local_60.Data.AllocatorInstance.Data;
  }
  else {
    pFVar3 = ::FName::ToString(&local_res20,&local_50);
    ::FString::FString(__return_storage_ptr__,pFVar3);
  }
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetLocalizedPackagePath @ 141ea0f40

FString * __cdecl
FPackageName::GetLocalizedPackagePath(FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *_Src;
  FPackageLocalizationManager *this;
  FString *pFVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  FName local_res8;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  this = FPackageLocalizationManager::Get();
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_res10,pwVar2);
  FPackageLocalizationManager::FindLocalizedPackageName(this,(FName)&local_res8);
  if (local_res8 == (FName)0x0) {
    local_28.Data.ArrayNum = (param_1->Data).ArrayNum;
    lVar3 = (longlong)local_28.Data.ArrayNum;
    _Src = (param_1->Data).AllocatorInstance.Data;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_28.Data.ArrayNum == 0) {
      local_28.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
                 &local_28.Data.ArrayMax);
      memcpy(local_28.Data.AllocatorInstance.Data,_Src,lVar3 * 2);
    }
    ::FString::FString(__return_storage_ptr__,&local_28);
    local_18.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
  }
  else {
    pFVar1 = ::FName::ToString(&local_res8,&local_18);
    ::FString::FString(__return_storage_ptr__,pFVar1);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetLongPackageAssetName @ 141ea1410

FString * __cdecl
FPackageName::GetLongPackageAssetName(FString *__return_storage_ptr__,FString *param_1)

{
  int iVar1;
  int iVar2;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  local_18.Size = iVar2;
  GetShortName(__return_storage_ptr__,&local_18);
  return __return_storage_ptr__;
}

// GetLongPackagePath @ 141ea1460

FString * __cdecl FPackageName::GetLongPackagePath(FString *__return_storage_ptr__,FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  pFVar5 = pFVar2 + (longlong)iVar1 * 2;
  do {
    if (pFVar5 == pFVar2) goto LAB_141ea148f;
    pFVar5 = pFVar5 + -2;
  } while (*(short *)pFVar5 != 0x2f);
  iVar3 = (int)((longlong)pFVar5 - (longlong)pFVar2 >> 1);
  if (iVar3 != -1) {
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    if (iVar3 < iVar4) {
      iVar4 = iVar3;
    }
    iVar3 = 0;
    if (0 < iVar4) {
      iVar3 = iVar4;
    }
    pFVar5 = (FScriptContainerElement *)L"";
    if (iVar1 != 0) {
      pFVar5 = pFVar2;
    }
    ::FString::ConstructFromPtrSize(__return_storage_ptr__,(wchar_t *)pFVar5,iVar3);
    return __return_storage_ptr__;
  }
LAB_141ea148f:
  ::FString::FString(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetMapPackageExtension @ 141ea14f0

FString * __cdecl FPackageName::GetMapPackageExtension(void)

{
  wchar_t *pwVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pwVar1 = ::LexToString(Map);
      ::FString::FString(&MapPackageExtension,pwVar1);
      atexit(`FPackageName::GetMapPackageExtension'::__l2::
             _dynamic_atexit_destructor_for__MapPackageExtension__);
      _Init_thread_footer(&::_TSS0);
      return &MapPackageExtension;
    }
  }
  return &MapPackageExtension;
}

// GetModuleScriptPackageName @ 141ea1580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FName __cdecl FPackageName::GetModuleScriptPackageName(FName param_1)

{
  void *pvVar1;
  FName *pFVar2;
  FName local_res10 [3];
  undefined1 auStack_168 [32];
  FName local_148 [2];
  TStringBuilderBase<wchar_t> local_138;
  wchar_t local_118 [128];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_168;
  local_138.Base = local_118;
  local_138.bIsDynamic = false;
  local_138.bIsExternal = false;
  local_138.CurPos = local_118;
  local_138.End = (wchar_t *)local_18;
  pvVar1 = FGenericPlatformString::Memcpy(local_118,L"/Script/",0x10);
  local_138.CurPos = (wchar_t *)((longlong)pvVar1 + 0x10);
  ::FName::AppendString(local_res10,&local_138);
  pFVar2 = ::FName::FName(local_148,
                          (int)((longlong)local_138.CurPos - (longlong)local_138.Base >> 1),
                          local_138.Base,FNAME_Add);
  *(FName *)param_1 = *pFVar2;
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_138);
  return param_1;
}

// GetModuleScriptPackageName @ 141ea1650

FString * __cdecl
FPackageName::GetModuleScriptPackageName
          (FString *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"/Script/%.*s");
  return __return_storage_ptr__;
}

// GetNormalizedObjectPath @ 141ea1680

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __cdecl
FPackageName::GetNormalizedObjectPath(FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FString local_18;
  
  iVar2 = (param_1->Data).ArrayNum;
  if (1 < iVar2) {
    pFVar4 = (param_1->Data).AllocatorInstance.Data;
    pFVar1 = pFVar4 + (longlong)(iVar2 + -1) * 2;
    while( true ) {
      if (pFVar4 == pFVar1) {
        local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_18.Data.ArrayNum = 0;
        local_18.Data.ArrayMax = 0;
        if ((2 < (byte)LogPackageName._0_1_) &&
           (UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPackageName),
           2 < (byte)LogPackageName._0_1_)) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPackageName);
        }
        bVar3 = TryConvertShortPackagePathToLongInObjectPath(param_1,&local_18);
        if ((!bVar3) && (2 < (byte)LogPackageName._0_1_)) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPackageName);
        }
        (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data
        ;
        (__return_storage_ptr__->Data).ArrayNum = local_18.Data.ArrayNum;
        (__return_storage_ptr__->Data).ArrayMax = local_18.Data.ArrayMax;
        return __return_storage_ptr__;
      }
      if (*(short *)pFVar4 == 0x2f) break;
      pFVar4 = pFVar4 + 2;
    }
  }
  ::FString::FString(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetPackageMountPoint @ 141ea1b80

FName __cdecl FPackageName::GetPackageMountPoint(FString *param_1,bool param_2)

{
  GetPackageMountPoint((TStringView<wchar_t> *)param_1,true);
  return (FName)param_1;
}

// GetPackageMountPoint @ 141ea1bd0

FName __cdecl FPackageName::GetPackageMountPoint(wchar_t *param_1,bool param_2)

{
  undefined7 in_register_00000011;
  
  if ((wchar_t *)CONCAT71(in_register_00000011,param_2) != (wchar_t *)0x0) {
    wcslen((wchar_t *)CONCAT71(in_register_00000011,param_2));
  }
  GetPackageMountPoint((TStringView<wchar_t> *)param_1,true);
  return (FName)param_1;
}

// GetPackageMountPoint @ 141ea1c30

FName __cdecl FPackageName::GetPackageMountPoint(TStringView<wchar_t> *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  FLongPackagePathsSingleton *SRWLock;
  FName FVar5;
  FMountPoint **ppFVar6;
  FName *pFVar7;
  uint uVar8;
  FNameEntryId FVar9;
  int iVar10;
  undefined7 in_register_00000011;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  byte in_R8B;
  FName local_res10;
  FName local_res20;
  FName local_a8 [2];
  FScriptContainerElement *local_98;
  uint uStack_90;
  undefined4 uStack_8c;
  FScriptContainerElement *local_88;
  uint uStack_80;
  undefined4 uStack_7c;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  
  puVar11 = (undefined8 *)CONCAT71(in_register_00000011,param_2);
  SRWLock = FLongPackagePathsSingleton::Get();
  if (SRWLock == (FLongPackagePathsSingleton *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      FVar5 = (FName)(*pcVar2)();
      return FVar5;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  local_78.DataPtr = (wchar_t *)*puVar11;
  local_78._8_8_ = puVar11[1];
  uVar12 = (uint)in_R8B;
  ppFVar6 = TDirectoryTree<FMountPoint_*>::FindClosestValue(&SRWLock->RootPathTree,&local_78);
  FVar9.Value = 0;
  if (ppFVar6 == (FMountPoint **)0x0) {
    iVar10 = (SRWLock->MemoryRootPath).Data.ArrayNum;
    pFVar1 = (SRWLock->MemoryRootPath).Data.AllocatorInstance.Data;
    uVar13 = iVar10 - 1;
    if (iVar10 == 0) {
      uVar13 = FVar9.Value;
    }
    local_38._12_4_ = uStack_7c;
    local_38.Size = uVar13;
    local_88 = pFVar1;
    uStack_80 = uVar13;
    local_48.DataPtr = (wchar_t *)*puVar11;
    local_48._8_8_ = puVar11[1];
    local_38.DataPtr = (wchar_t *)pFVar1;
    bVar4 = FPathViews::IsParentPathOf(&local_38,&local_48);
    if (bVar4) {
      uVar3 = uVar12;
      if ((int)uVar13 < (int)uVar12) {
        uVar3 = uVar13;
      }
      uVar8 = uVar3;
      if ((int)(uVar13 + uVar12 * -2) < (int)(uVar13 - uVar3)) {
        uVar8 = uVar12 * 2;
      }
      iVar10 = 0;
      if (0 < (int)(uVar13 - uVar8)) {
        iVar10 = uVar13 - uVar8;
      }
      pFVar7 = ::FName::FName(local_a8,iVar10,(wchar_t *)(pFVar1 + (longlong)(int)uVar3 * 2),
                              FNAME_Add);
      local_res10 = *pFVar7;
      FVar9.Value = local_res10.ComparisonIndex.Value;
    }
    else {
      local_res10.ComparisonIndex.Value = 0;
      local_res10.Number = 0;
    }
    bVar4 = ::FName::IsWithinBounds(FVar9);
    if (bVar4) {
      param_1->DataPtr = (wchar_t *)local_res10;
      goto LAB_141ea1e12;
    }
  }
  else {
    iVar10 = ((*ppFVar6)->RootPath).Data.ArrayNum;
    pFVar1 = ((*ppFVar6)->RootPath).Data.AllocatorInstance.Data;
    uVar13 = iVar10 - 1;
    if (iVar10 == 0) {
      uVar13 = FVar9.Value;
    }
    local_58._12_4_ = uStack_8c;
    local_58.Size = uVar13;
    local_98 = pFVar1;
    uStack_90 = uVar13;
    local_68.DataPtr = (wchar_t *)*puVar11;
    local_68._8_8_ = puVar11[1];
    local_58.DataPtr = (wchar_t *)pFVar1;
    bVar4 = FPathViews::IsParentPathOf(&local_58,&local_68);
    if (bVar4) {
      uVar3 = uVar12;
      if ((int)uVar13 < (int)uVar12) {
        uVar3 = uVar13;
      }
      uVar8 = uVar3;
      if ((int)(uVar13 + uVar12 * -2) < (int)(uVar13 - uVar3)) {
        uVar8 = uVar12 * 2;
      }
      iVar10 = 0;
      if (0 < (int)(uVar13 - uVar8)) {
        iVar10 = uVar13 - uVar8;
      }
      pFVar7 = ::FName::FName(&local_res20,iVar10,(wchar_t *)(pFVar1 + (longlong)(int)uVar3 * 2),
                              FNAME_Add);
      param_1->DataPtr = (wchar_t *)*pFVar7;
      goto LAB_141ea1e12;
    }
  }
  param_1->DataPtr = (wchar_t *)0x0;
LAB_141ea1e12:
  if (SRWLock != (FLongPackagePathsSingleton *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return (FName)param_1;
}

// GetShortFName @ 141ea2790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FName __cdecl FPackageName::GetShortFName(FName *param_1)

{
  wchar_t *pwVar1;
  FName *in_RDX;
  undefined1 auStack_858 [32];
  wchar_t local_838 [1040];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_858;
  ::FName::ToStringInternal(in_RDX,local_838,0x40b);
  pwVar1 = wcsrchr(local_838,L'/');
  if (pwVar1 == (wchar_t *)0x0) {
    *param_1 = *in_RDX;
  }
  else {
    ::FName::FName(param_1,pwVar1 + 1);
  }
  return (FName)param_1;
}

// GetShortFName @ 141ea2820

FName __cdecl FPackageName::GetShortFName(wchar_t *param_1)

{
  wchar_t *pwVar1;
  wchar_t *in_RDX;
  wchar_t *pwVar2;
  
  if (in_RDX == (wchar_t *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    return (FName)param_1;
  }
  pwVar1 = wcsrchr(in_RDX,L'/');
  pwVar2 = pwVar1 + 1;
  if (pwVar1 == (wchar_t *)0x0) {
    pwVar2 = in_RDX;
  }
  ::FName::FName((FName *)param_1,pwVar2);
  return (FName)param_1;
}

// GetShortFName @ 141ea2880

FName __cdecl FPackageName::GetShortFName(TStringView<wchar_t> *param_1)

{
  int iVar1;
  FName *pFVar2;
  int iVar3;
  longlong *in_RDX;
  int iVar4;
  int iVar5;
  FName local_res8;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = (wchar_t *)*in_RDX;
  local_18._8_8_ = in_RDX[1];
  iVar1 = UE::String::FindLastChar(&local_18,L'/',CaseSensitive);
  iVar3 = (int)in_RDX[1];
  iVar5 = iVar1 + 1;
  iVar4 = 0x7fffffff;
  if (iVar5 < 0) {
    iVar4 = iVar1 + -0x80000000;
  }
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  if (iVar3 < iVar5) {
    iVar5 = iVar3;
  }
  iVar1 = iVar3 - iVar5;
  if (iVar4 < iVar3 - iVar5) {
    iVar1 = iVar4;
  }
  iVar3 = 0;
  if (0 < iVar1) {
    iVar3 = iVar1;
  }
  pFVar2 = ::FName::FName(&local_res8,iVar3,(wchar_t *)(*in_RDX + (longlong)iVar5 * 2),FNAME_Add);
  param_1->DataPtr = (wchar_t *)*pFVar2;
  return (FName)param_1;
}

// GetShortName @ 141ea2920

FString * __cdecl FPackageName::GetShortName(FString *__return_storage_ptr__,FName *param_1)

{
  int iVar1;
  FString *pFVar2;
  TStringView<wchar_t> local_28;
  FString local_18;
  
  pFVar2 = ::FName::ToString(param_1,&local_18);
  local_28.DataPtr = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  iVar1 = (pFVar2->Data).ArrayNum;
  local_28.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_28.Size = 0;
  }
  GetShortName(__return_storage_ptr__,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetShortName @ 141ea2990

FString * __cdecl FPackageName::GetShortName(FString *__return_storage_ptr__,UPackage *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  FName local_res8;
  FString local_38;
  FScriptContainerElement *local_28;
  int iStack_20;
  undefined4 uStack_1c;
  TStringView<wchar_t> local_18;
  
  if (param_1 == (UPackage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Package != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Misc\\PackageName.cpp"
                       ,0x68,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  local_res8 = (FName)param_1->_padding_;
  ::FName::ToString(&local_res8,&local_38);
  local_28 = local_38.Data.AllocatorInstance.Data;
  iStack_20 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iStack_20 = 0;
  }
  local_18._12_4_ = uStack_1c;
  local_18.Size = iStack_20;
  local_18.DataPtr = (wchar_t *)local_38.Data.AllocatorInstance.Data;
  GetShortName(__return_storage_ptr__,&local_18);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetShortName @ 141ea2a40

FString * __cdecl FPackageName::GetShortName(FString *__return_storage_ptr__,wchar_t *param_1)

{
  int iVar1;
  FString *pFVar2;
  TStringView<wchar_t> local_28;
  FString local_18;
  
  pFVar2 = ::FString::FString(&local_18,param_1);
  local_28.DataPtr = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  iVar1 = (pFVar2->Data).ArrayNum;
  local_28.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_28.Size = 0;
  }
  GetShortName(__return_storage_ptr__,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetShortName @ 141ea2ab0

FString * __cdecl
FPackageName::GetShortName(FString *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FString *pFVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  iVar3 = UE::String::FindLastChar(&local_18,L'/',CaseSensitive);
  iVar6 = param_1->Size;
  iVar7 = iVar3 + 1;
  iVar5 = 0x7fffffff;
  if (iVar7 < 0) {
    iVar5 = iVar3 + -0x80000000;
  }
  pwVar1 = param_1->DataPtr;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if (iVar7 < 0) {
    iVar7 = 0;
  }
  if (iVar6 < iVar7) {
    iVar7 = iVar6;
  }
  iVar3 = iVar6 - iVar7;
  if (iVar5 < iVar6 - iVar7) {
    iVar3 = iVar5;
  }
  iVar6 = 0;
  if (0 < iVar3) {
    iVar6 = iVar3;
  }
  pFVar4 = ::FString::ConstructFromPtrSize((FString *)&local_18,pwVar1 + iVar7,iVar6);
  if (__return_storage_ptr__ != pFVar4) {
    pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar4->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_18.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_18.DataPtr);
  }
  return __return_storage_ptr__;
}

// GetSourcePackagePath @ 141ea2be0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __cdecl
FPackageName::GetSourcePackagePath(FString *__return_storage_ptr__,FString *param_1)

{
  wchar_t wVar1;
  short sVar2;
  int iVar3;
  wchar_t *pwVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  wchar_t *pwVar7;
  int iVar8;
  
  ::FString::FString(__return_storage_ptr__,param_1);
  pwVar7 = L"";
  if ((__return_storage_ptr__->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data;
  }
  pFVar5 = (FScriptContainerElement *)((longlong)pwVar4 + 2);
  if (*pwVar4 != L'/') {
    return __return_storage_ptr__;
  }
  do {
    wVar1 = *(wchar_t *)pFVar5;
    if (wVar1 == L'\0') break;
    pFVar5 = pFVar5 + 2;
  } while (wVar1 != L'/');
  if (*(short *)pFVar5 == 0) {
    return __return_storage_ptr__;
  }
  iVar8 = 5;
  iVar3 = FGenericPlatformStricmp::Strnicmp((wchar_t *)pFVar5,L"L10N/",5);
  if (iVar3 == 0) {
    if ((__return_storage_ptr__->Data).ArrayNum != 0) {
      pwVar7 = (wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data;
    }
    pFVar6 = pFVar5 + 10;
    iVar3 = (int)((longlong)(pFVar5 + (-2 - (longlong)pwVar7)) >> 1);
    iVar8 = 6;
    sVar2 = *(short *)(pFVar5 + 10);
    while ((sVar2 != 0 && (pFVar6 = pFVar6 + 2, sVar2 != 0x2f))) {
      iVar8 = iVar8 + 1;
      sVar2 = *(short *)pFVar6;
    }
  }
  else {
    iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)pFVar5,L"L10N");
    if (iVar3 != 0) {
      return __return_storage_ptr__;
    }
    if ((__return_storage_ptr__->Data).ArrayNum != 0) {
      pwVar7 = (wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data;
    }
    iVar3 = (int)((longlong)(pFVar5 + (-2 - (longlong)pwVar7)) >> 1);
  }
  ::FString::RemoveAt(__return_storage_ptr__,iVar3,iVar8,Default);
  return __return_storage_ptr__;
}

// GetTextAssetPackageExtension @ 141ea2d00

FString * __cdecl FPackageName::GetTextAssetPackageExtension(void)

{
  wchar_t *pwVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pwVar1 = ::LexToString(TextAsset);
      ::FString::FString(&TextAssetPackageExtension,pwVar1);
      atexit(`FPackageName::GetTextAssetPackageExtension'::__l2::
             _dynamic_atexit_destructor_for__TextAssetPackageExtension__);
      _Init_thread_footer(&::_TSS0);
      return &TextAssetPackageExtension;
    }
  }
  return &TextAssetPackageExtension;
}

// GetTextMapPackageExtension @ 141ea2e10

FString * __cdecl FPackageName::GetTextMapPackageExtension(void)

{
  wchar_t *pwVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pwVar1 = ::LexToString(TextMap);
      ::FString::FString(&TextMapPackageExtension,pwVar1);
      atexit(`FPackageName::GetTextMapPackageExtension'::__l2::
             _dynamic_atexit_destructor_for__TextMapPackageExtension__);
      _Init_thread_footer(&::_TSS0);
      return &TextMapPackageExtension;
    }
  }
  return &TextMapPackageExtension;
}

// GetVersePath @ 141ea39b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FVersePath * __cdecl
FPackageName::GetVersePath(FVersePath *__return_storage_ptr__,FTopLevelAssetPath *param_1)

{
  wchar_t *pwVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  IPluginManager *pIVar7;
  FVersePath *pFVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_3b8 [32];
  bool local_398;
  char local_397;
  FVersePath local_390;
  longlong *local_380;
  TReferenceControllerBase<1> *local_378;
  FName local_370;
  FString local_368;
  wchar_t *local_358;
  int iStack_350;
  undefined4 uStack_34c;
  FName local_348;
  int iStack_340;
  undefined4 uStack_33c;
  undefined1 local_338 [8];
  TStringBuilderBase<wchar_t> *local_330;
  TStringBuilderBase<wchar_t> *local_328 [2];
  TStringView<wchar_t> local_318;
  FString local_308;
  TStringView<wchar_t> local_2f8;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  int iStack_2e0;
  undefined4 uStack_2dc;
  TStringView<wchar_t> local_2d8;
  TStringBuilderBase<wchar_t> local_2c8;
  wchar_t local_2a8 [128];
  TStringBuilderBase<wchar_t> local_1a8;
  wchar_t local_188 [128];
  TStringView<wchar_t> local_88;
  undefined8 local_78;
  int iStack_70;
  wchar_t *local_68;
  undefined4 local_60;
  int local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_3b8;
  local_370 = param_1->PackageName;
  if ((local_370 == (FName)0x0) || (param_1->AssetName == (FName)0x0)) {
    (__return_storage_ptr__->PathString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->PathString).Data.ArrayNum = 0;
    (__return_storage_ptr__->PathString).Data.ArrayMax = 0;
    return __return_storage_ptr__;
  }
  local_2c8.Base = local_2a8;
  local_2c8.CurPos = local_2a8;
  local_2c8.End = (wchar_t *)&local_1a8;
  local_2c8.bIsDynamic = false;
  local_2c8.bIsExternal = false;
  ::FName::ToString(&local_370,&local_2c8);
  pwVar1 = local_2c8.Base;
  local_348 = (FName)local_2c8.Base;
  iVar6 = (int)((longlong)local_2c8.CurPos - (longlong)local_2c8.Base >> 1);
  local_2f8._12_4_ = uStack_33c;
  local_2f8.Size = iVar6;
  local_2f8.DataPtr = local_2c8.Base;
  local_398 = false;
  iStack_340 = iVar6;
  FPathViews::GetMountPointNameFromPath(&local_318,&local_2f8,&local_398,true);
  if ((local_318.Size == 0) || (local_398 != false)) {
    (__return_storage_ptr__->PathString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->PathString).Data.ArrayNum = 0;
    (__return_storage_ptr__->PathString).Data.ArrayMax = 0;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_2c8);
    return __return_storage_ptr__;
  }
  pIVar7 = IPluginManager::Get();
  local_2e8 = local_318.DataPtr._0_4_;
  uStack_2e4 = local_318.DataPtr._4_4_;
  iStack_2e0 = local_318.Size;
  uStack_2dc = local_318._12_4_;
  (**(code **)((longlong)*pIVar7 + 0x70))(pIVar7,&local_380);
  if (local_380 == (longlong *)0x0) {
    (__return_storage_ptr__->PathString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->PathString).Data.ArrayNum = 0;
    (__return_storage_ptr__->PathString).Data.ArrayMax = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_378);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_2c8);
    return __return_storage_ptr__;
  }
  if ((local_380 == (longlong *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FVersePath *)(*pcVar3)();
    return pFVar8;
  }
  local_370 = (FName)(**(code **)(*local_380 + 0x78))();
  if (*(int *)((longlong)local_370 + 8) < 2) {
    (__return_storage_ptr__->PathString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->PathString).Data.ArrayNum = 0;
    (__return_storage_ptr__->PathString).Data.ArrayMax = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_378);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_2c8);
    return __return_storage_ptr__;
  }
  iVar5 = (iVar6 - local_318.Size) + -1;
  iVar9 = iVar6;
  if (iVar5 < iVar6) {
    iVar9 = iVar5;
  }
  iVar10 = 0;
  iVar5 = iVar10;
  if (0 < iVar9) {
    iVar5 = iVar9;
  }
  pwVar1 = (wchar_t *)((longlong)pwVar1 + ((longlong)iVar6 - (longlong)iVar5) * 2);
  local_2d8._12_4_ = uStack_34c;
  local_358 = pwVar1;
  iStack_350 = iVar5;
  local_2d8.Size = iVar5;
  local_2d8.DataPtr = pwVar1;
  iVar6 = UE::String::FindLastChar(&local_2d8,L'/',CaseSensitive);
  if (iVar6 == -1) {
    local_328[0] = &local_2c8;
    bVar4 = `FPackageName::GetVersePath'::__l21::<lambda_2>::operator()(local_328);
    if (!bVar4) {
LAB_141ea3e17:
      (__return_storage_ptr__->PathString).Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->PathString).Data.ArrayNum = 0;
      (__return_storage_ptr__->PathString).Data.ArrayMax = 0;
      goto LAB_141ea3da4;
    }
  }
  else {
    if (iVar6 == iVar5 + -1) {
      local_330 = &local_2c8;
      bVar4 = `FPackageName::GetVersePath'::__l18::<lambda_1>::operator()(&local_330);
      if (!bVar4) goto LAB_141ea3e17;
    }
    iVar9 = iVar5;
    if (iVar6 < iVar5) {
      iVar9 = iVar6;
    }
    iVar5 = iVar10;
    local_358 = pwVar1;
    iStack_350 = iVar10;
    if (0 < iVar9) {
      iVar5 = iVar9;
      iStack_350 = iVar9;
    }
  }
  local_1a8.Base = local_188;
  local_1a8.bIsDynamic = false;
  local_1a8.bIsExternal = false;
  local_1a8.CurPos = local_188;
  local_1a8.End = (wchar_t *)&local_88;
  local_348 = param_1->AssetName;
  ::FName::ToString(&local_348,&local_1a8);
  local_88.DataPtr = *(wchar_t **)local_370;
  local_88.Size = *(int *)((longlong)local_370 + 8) + -1;
  if (*(int *)((longlong)local_370 + 8) == 0) {
    local_88.Size = iVar10;
  }
  local_68 = local_1a8.Base;
  local_60 = (undefined4)((longlong)local_1a8.CurPos - (longlong)local_1a8.Base >> 1);
  local_5c = local_308.Data.ArrayMax;
  iStack_70 = iVar5;
  local_78 = pwVar1;
  FPaths::CombineInternal(&local_368,&local_88,3);
  local_390.PathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_390.PathString.Data.ArrayNum = 0;
  local_390.PathString.Data.ArrayMax = 0;
  bVar4 = UE::Core::FVersePath::TryMake(&local_390,&local_368,(FText *)0x0);
  if (!bVar4) {
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(uint *)(lVar2 + 0xc84) & 1) == 0) {
      *(uint *)(lVar2 + 0xc84) = *(uint *)(lVar2 + 0xc84) | 1;
      __tlregdtor(`FPackageName::GetVersePath'::__l26::
                  _dynamic_atexit_destructor_for__AlreadyLogged__);
    }
    local_397 = '\0';
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(lVar2 + 0xc30),
               (FString *)local_338,(bool *)&local_368);
    if ((local_397 == '\0') && (3 < (byte)LogCore._0_1_)) {
      FTopLevelAssetPath::ToString(param_1,&local_308);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
      if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_308.Data.AllocatorInstance.Data);
      }
    }
  }
  (__return_storage_ptr__->PathString).Data.AllocatorInstance.Data =
       local_390.PathString.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->PathString).Data.ArrayNum = local_390.PathString.Data.ArrayNum;
  (__return_storage_ptr__->PathString).Data.ArrayMax = local_390.PathString.Data.ArrayMax;
  local_390.PathString.Data.ArrayNum = 0;
  local_390.PathString.Data.ArrayMax = 0;
  local_390.PathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_368.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1a8);
LAB_141ea3da4:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_378);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_2c8);
  return __return_storage_ptr__;
}

// InternalDoesPackageExistEx @ 141ea6ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPackageLocationFilter": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

EPackageLocationFilter __cdecl
FPackageName::InternalDoesPackageExistEx
          (FPackagePath *param_1,EPackageLocationFilter param_2,bool param_3,FPackagePath *param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  wchar_t *pwVar3;
  bool bVar4;
  EPackageLocationFilter EVar5;
  char cVar6;
  EPackageExtension EVar7;
  int iVar8;
  int iVar9;
  FLongPackagePathsSingleton *pFVar10;
  FText *pFVar11;
  IPackageResourceManager *this;
  FName FVar12;
  FIoDispatcher *this_00;
  FPackageId FVar13;
  FIoChunkId *pFVar14;
  longlong *plVar15;
  undefined1 auStack_428 [32];
  int local_408;
  int local_400;
  EErrorCode local_3f8 [4];
  wchar_t *local_3e8;
  int iStack_3e0;
  undefined4 uStack_3dc;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  FText local_3c8;
  wchar_t *local_3b8;
  int iStack_3b0;
  undefined4 uStack_3ac;
  FScriptContainerElement *local_3a8;
  int iStack_3a0;
  undefined4 uStack_39c;
  wchar_t *local_398;
  int iStack_390;
  undefined4 uStack_38c;
  FScriptContainerElement *local_388;
  int iStack_380;
  undefined4 uStack_37c;
  wchar_t *local_378;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  FName local_358 [2];
  TStringView<wchar_t> local_348;
  TStringView<wchar_t> local_338;
  TStringView<wchar_t> local_328;
  TStringView<wchar_t> local_318;
  TStringView<wchar_t> local_308;
  TStringView<wchar_t> local_2f8;
  TStringView<wchar_t> local_2e8;
  TStringView<wchar_t> local_2d8;
  FText local_2c8;
  TStringView<wchar_t> local_2b8;
  FReadAccessScope local_2a8;
  FIoChunkId local_290 [2];
  TStringBuilderBase<wchar_t> local_278;
  wchar_t local_258 [256];
  ulonglong local_58 [4];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStack_428;
  local_278.Base = local_258;
  local_278.bIsDynamic = false;
  local_278.bIsExternal = false;
  local_278.CurPos = local_258;
  local_278.End = (wchar_t *)local_58;
  FPackagePath::AppendPackageName(param_1,&local_278);
  local_3b8 = local_278.Base;
  iStack_3b0 = (int)((longlong)local_278.CurPos - (longlong)local_278.Base >> 1);
  pFVar10 = FLongPackagePathsSingleton::Get();
  local_348._12_4_ = uStack_3ac;
  local_348.Size = iStack_3b0;
  local_348.DataPtr = local_3b8;
  local_3a8 = (pFVar10->ScriptRootPath).Data.AllocatorInstance.Data;
  iVar9 = (pFVar10->ScriptRootPath).Data.ArrayNum;
  iStack_3a0 = iVar9 + -1;
  if (iVar9 == 0) {
    iStack_3a0 = 0;
  }
  local_338._12_4_ = uStack_39c;
  local_338.Size = iStack_3a0;
  local_338.DataPtr = (wchar_t *)local_3a8;
  bVar4 = FPathViews::IsParentPathOf(&local_338,&local_348);
  if (!bVar4) {
    local_398 = local_278.Base;
    iStack_390 = (int)((longlong)local_278.CurPos - (longlong)local_278.Base >> 1);
    pFVar10 = FLongPackagePathsSingleton::Get();
    local_328._12_4_ = uStack_38c;
    local_328.Size = iStack_390;
    local_328.DataPtr = local_398;
    local_388 = (pFVar10->MemoryRootPath).Data.AllocatorInstance.Data;
    iVar9 = (pFVar10->MemoryRootPath).Data.ArrayNum;
    iStack_380 = iVar9 + -1;
    if (iVar9 == 0) {
      iStack_380 = 0;
    }
    local_318._12_4_ = uStack_37c;
    local_318.Size = iStack_380;
    local_318.DataPtr = (wchar_t *)local_388;
    bVar4 = FPathViews::IsParentPathOf(&local_318,&local_328);
    if (!bVar4) {
      FText::FText(&local_3c8);
      pwVar3 = local_278.Base;
      local_3e8 = local_278.Base;
      iVar9 = (int)((longlong)local_278.CurPos - (longlong)local_278.Base >> 1);
      uVar1._4_4_ = uStack_3dc;
      uVar1._0_4_ = iVar9;
      iStack_3e0 = iVar9;
      if (iVar9 < 4) {
        local_3f8[0] = LongPackageNames_PathTooShort;
LAB_141ea6d09:
        local_2d8.DataPtr = pwVar3;
        local_2d8._8_8_ = uVar1;
        pFVar11 = FormatErrorAsText(&local_2c8,&local_2d8,local_3f8[0]);
        FText::operator=(&local_3c8,pFVar11);
        if (local_2c8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_2c8.TextData.Reference + 0x10))();
        }
        if (1 < (byte)LogPackageName._0_1_) {
          FText::ToString(&local_3c8);
          if (local_278.End < local_278.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_278,1);
          }
          *local_278.CurPos = L'\0';
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPackageName);
        }
        EVar5 = None;
      }
      else {
        if (*local_278.Base != L'/') {
          local_3f8[0] = LongPackageNames_PathWithNoStartingSlash;
          goto LAB_141ea6d09;
        }
        iVar8 = iVar9 + -1;
        if (((iVar8 < 0) || (iVar9 <= iVar8)) &&
           (local_408 = iVar8, local_400 = iVar9,
           bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                              ,0x234,
                              L"Index out of bounds on StringView: index %i on a view with a length of %i"
                             ), bVar4)) {
          pcVar2 = (code *)swi(3);
          EVar5 = (*pcVar2)();
          return EVar5;
        }
        if (pwVar3[(longlong)iVar9 + -1] == L'/') {
          local_3f8[0] = LongPackageNames_PathWithTrailingSlash;
          goto LAB_141ea6d09;
        }
        uStack_370 = 2;
        local_378 = L"//";
        local_308._12_4_ = uStack_36c;
        local_308.Size = 2;
        local_308.DataPtr = L"//";
        local_3e8 = pwVar3 + ((longlong)iVar9 - (longlong)iVar9);
        local_2f8._12_4_ = uStack_3dc;
        local_2f8.Size = iVar9;
        iStack_3e0 = iVar9;
        local_2f8.DataPtr = local_3e8;
        iVar9 = UE::String::FindFirst(&local_2f8,&local_308,CaseSensitive);
        if (iVar9 != -1) {
          local_3f8[0] = LongPackageNames_PathWithDoubleSlash;
          goto LAB_141ea6d09;
        }
        local_2e8.DataPtr = pwVar3;
        local_2e8._8_8_ = uVar1;
        bVar4 = DoesPackageNameContainInvalidCharacters(&local_2e8,local_3f8);
        if (bVar4) goto LAB_141ea6d09;
        EVar5 = None;
        if ((param_2 & FileSystem) == None) {
LAB_141ea6df2:
          if ((param_2 & IoDispatcher) != None) {
            bVar4 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                               &DoesPackageExistOverrideDelegate);
            if (bVar4) {
              FVar12 = FPackagePath::GetPackageFName(param_1);
              uVar1 = *(undefined8 *)FVar12;
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                         &DoesPackageExistOverrideDelegate,&local_2a8);
              plVar15 = (longlong *)0x0;
              if (DoesPackageExistOverrideDelegate._16_4_ != 0) {
                plVar15 = (longlong *)DoesPackageExistOverrideDelegate._8_8_;
              }
              cVar6 = (**(code **)(*plVar15 + 0x60))(plVar15,uVar1);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
              ~FReadAccessScope(&local_2a8);
              bVar4 = cVar6 != '\0';
            }
            else {
              bVar4 = FIoDispatcher::IsInitialized();
              if (!bVar4) goto LAB_141ea6eec;
              this_00 = FIoDispatcher::Get();
              FPackagePath::GetPackageFName(param_1);
              FVar13 = FPackageId::FromName(local_358);
              pFVar14 = CreatePackageDataChunkId(local_290,(FPackageId *)FVar13.Id);
              bVar4 = FIoDispatcher::DoesChunkExist(this_00,pFVar14);
            }
            if (bVar4 != false) {
              if (param_4 != (FPackagePath *)0x0) {
                FPackagePath::operator=(param_4,param_1);
                EVar7 = FPackagePath::GetHeaderExtension(param_4);
                if (EVar7 == Unspecified) {
                  uStack_3d0 = 0;
                  local_3d8 = 0;
                  local_2b8.DataPtr = (wchar_t *)0x0;
                  local_2b8.Size = 0;
                  local_2b8._12_4_ = 0;
                  FPackagePath::SetHeaderExtension(param_4,EmptyString,&local_2b8);
                }
              }
              EVar5 = EVar5 | IoDispatcher;
            }
          }
        }
        else {
          this = IPackageResourceManager::Get();
          if (param_3) {
            cVar6 = (**(code **)((longlong)*this + 0x40))(this);
          }
          else {
            cVar6 = IPackageResourceManager::DoesPackageExist(this,param_1,param_4);
          }
          if ((cVar6 == '\0') || (EVar5 = FileSystem, param_2 != Any)) goto LAB_141ea6df2;
        }
      }
LAB_141ea6eec:
      if (local_3c8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_3c8.TextData.Reference + 0x10))();
      }
      goto LAB_141ea6f11;
    }
  }
  EVar5 = None;
LAB_141ea6f11:
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_278);
  return EVar5;
}

// InternalDoesPackageExistEx @ 141ea6f50

/* WARNING: Enum "EPackageLocationFilter": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

EPackageLocationFilter __cdecl
FPackageName::InternalDoesPackageExistEx
          (FString *param_1,EPackageLocationFilter param_2,bool param_3,FPackagePath *param_4)

{
  int iVar1;
  FScriptContainerElement *_Src;
  bool bVar2;
  EPackageLocationFilter EVar3;
  FString *pFVar4;
  longlong lVar5;
  EErrorCode local_78 [2];
  FPackagePath local_70;
  ForAnyElementType local_60;
  int local_58;
  int local_54 [3];
  FString local_48;
  FText local_38;
  TStringView<wchar_t> local_28;
  
  local_70.PackageName.ComparisonIndex.Value = 0;
  local_70.PackageName.Number = 0;
  local_70.HeaderExtension = Unspecified;
  bVar2 = TryConvertToMountedPackagePath(param_1,&local_70,local_78);
  if (bVar2) {
    EVar3 = InternalDoesPackageExistEx(&local_70,param_2,param_3,param_4);
  }
  else {
    local_48.Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
    iVar1 = (param_1->Data).ArrayNum;
    local_48.Data.ArrayNum = iVar1 + -1;
    if (iVar1 == 0) {
      local_48.Data.ArrayNum = 0;
    }
    local_28._12_4_ = local_48.Data.ArrayMax;
    local_28.Size = local_48.Data.ArrayNum;
    local_28.DataPtr = (wchar_t *)local_48.Data.AllocatorInstance.Data;
    FormatErrorAsText(&local_38,&local_28,local_78[0]);
    pFVar4 = FText::ToString(&local_38);
    local_60.Data = (FScriptContainerElement *)0x0;
    local_58 = (pFVar4->Data).ArrayNum;
    lVar5 = (longlong)local_58;
    _Src = (pFVar4->Data).AllocatorInstance.Data;
    if (local_58 == 0) {
      local_54[0] = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_58,0,&local_60,local_58,local_54);
      memcpy(local_60.Data,_Src,lVar5 * 2);
    }
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
    ::FString::PrintfImpl
              (&local_48,
               L"DoesPackageExist called on PackageName that will always return false. Reason: %s");
    if (local_60.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data);
    }
    if (2 < (byte)LogPackageName._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPackageName);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    EVar3 = None;
  }
  return EVar3;
}

// InternalFilenameToLongPackageName @ 141ea7d50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FPackageName::InternalFilenameToLongPackageName
          (TStringView<wchar_t> *param_1,TStringBuilderBase<wchar_t> *param_2)

{
  code *pcVar1;
  bool bVar2;
  FLongPackagePathsSingleton *SRWLock;
  FString *pFVar3;
  FMountPoint **ppFVar4;
  IFileManager *pIVar5;
  wchar_t *pwVar6;
  TStringView<wchar_t> *pTVar7;
  int iVar8;
  int iVar9;
  ForAnyElementType FVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  FString local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  TStringView<wchar_t> local_128;
  TStringView<wchar_t> local_118;
  TStringView<wchar_t> local_108;
  FLongPackagePathsSingleton *local_f8;
  TStringBuilderBase<wchar_t> *local_f0;
  FScriptContainerElement *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  TStringView<wchar_t> local_d8;
  wchar_t *local_c8;
  int iStack_c0;
  uint uStack_bc;
  TStringView<wchar_t> local_b8;
  FString local_a8;
  TStringView<wchar_t> local_98;
  void *local_88 [2];
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  wchar_t *local_58;
  undefined8 uStack_50;
  TStringView<wchar_t> local_48 [2];
  
  SRWLock = FLongPackagePathsSingleton::Get();
  local_58 = param_1->DataPtr;
  uStack_50 = *(undefined8 *)&param_1->Size;
  local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.Data.ArrayNum = 0;
  local_148.Data.ArrayMax = 0;
  pFVar3 = ::FString::ConstructFromPtrSize
                     (&local_a8,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
  if (&local_148 != pFVar3) {
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
    local_148.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_148.Data.ArrayNum = (pFVar3->Data).ArrayNum;
    local_148.Data.ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  FPaths::NormalizeFilename(&local_148);
  if ((SRWLock == (FLongPackagePathsSingleton *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x1c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  local_e8 = local_148.Data.AllocatorInstance.Data;
  iStack_e0 = local_148.Data.ArrayNum + -1;
  if (local_148.Data.ArrayNum == 0) {
    iStack_e0 = 0;
  }
  local_98._12_4_ = uStack_dc;
  local_98.Size = iStack_e0;
  local_98.DataPtr = (wchar_t *)local_148.Data.AllocatorInstance.Data;
  ppFVar4 = TDirectoryTree<FMountPoint_*>::FindClosestValue(&SRWLock->RootPathTree,&local_98);
  if (SRWLock != (FLongPackagePathsSingleton *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  if (ppFVar4 == (FMountPoint **)0x0) {
    pIVar5 = IFileManager::Get();
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_148.Data.ArrayNum != 0) {
      FVar10.Data = local_148.Data.AllocatorInstance.Data;
    }
    pFVar3 = (FString *)(**(code **)((longlong)*pIVar5 + 0xf8))(pIVar5,local_88,FVar10.Data);
    if (&local_148 != pFVar3) {
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
      local_148.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_148.Data.ArrayNum = (pFVar3->Data).ArrayNum;
      local_148.Data.ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_88[0] != (void *)0x0) {
      FMemory::Free(local_88[0]);
    }
    if ((param_1->Size < 1) ||
       (pwVar6 = TStringView<wchar_t>::operator[](param_1,param_1->Size + -1), *pwVar6 != L'/'))
    goto LAB_141ea7f96;
    iVar9 = local_148.Data.ArrayNum + -1;
    if (local_148.Data.ArrayNum == 0) {
      iVar9 = 0;
    }
    if (iVar9 < 1) {
LAB_141ea7f7f:
      ::FString::AppendChars(&local_148,L"/",1);
      goto LAB_141ea7f96;
    }
    iVar9 = local_148.Data.ArrayNum + -2;
    if (local_148.Data.ArrayNum == 0) {
      iVar9 = -1;
    }
    if (((iVar9 < 0) || (local_148.Data.ArrayNum == 0)) || (local_148.Data.ArrayNum + -1 <= iVar9))
    {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x107,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    iVar8 = local_148.Data.ArrayNum;
    if (*(short *)(local_148.Data.AllocatorInstance.Data + (longlong)iVar9 * 2) != 0x2f)
    goto LAB_141ea7f7f;
  }
  else {
LAB_141ea7f96:
    iVar8 = local_148.Data.ArrayNum;
  }
  local_d8.DataPtr = (wchar_t *)local_148.Data.AllocatorInstance.Data;
  local_108.DataPtr = (wchar_t *)0x0;
  local_108.Size = 0;
  local_d8.Size = iVar8 + -1;
  if (iVar8 == 0) {
    local_d8.Size = 0;
  }
  local_128.DataPtr = (wchar_t *)0x0;
  local_128.Size = 0;
  local_118.DataPtr = (wchar_t *)0x0;
  local_118.Size = 0;
  FPathViews::Split(&local_d8,&local_108,&local_128,&local_118);
  local_78._12_4_ = uStack_130._4_4_;
  local_138 = (wchar_t *)0x0;
  uStack_130 = (ulonglong)uStack_130._4_4_ << 0x20;
  if ((local_128.Size == 0) && (local_118.Size != 0)) {
    local_138._0_4_ = 0;
    local_138._4_4_ = 0;
    pwVar6 = (wchar_t *)0x0;
    uVar11 = (undefined4)local_138;
    uVar12 = local_138._4_4_;
    iVar9 = 0;
  }
  else {
    local_c8 = local_108.DataPtr;
    iVar9 = (int)(((longlong)local_128.Size * 2 - (longlong)local_108.DataPtr) +
                  (longlong)local_128.DataPtr >> 1);
    uVar11 = SUB84(local_108.DataPtr,0);
    uVar12 = (undefined4)((ulonglong)local_108.DataPtr >> 0x20);
    pwVar6 = local_108.DataPtr;
    local_78._12_4_ = uStack_bc;
    iStack_c0 = iVar9;
  }
  if (ppFVar4 != (FMountPoint **)0x0) {
    iVar8 = local_148.Data.ArrayNum + -1;
    if (local_148.Data.ArrayNum == 0) {
      iVar8 = 0;
    }
    if ((iVar9 != iVar8) && (2 < (byte)LogPackageName._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPackageName);
    }
  }
  local_f8 = SRWLock;
  local_f0 = param_2;
  local_78.DataPtr._0_4_ = uVar11;
  local_78.DataPtr._4_4_ = uVar12;
  local_78.Size = iVar9;
  bVar2 = `FPackageName::InternalFilenameToLongPackageName'::__l2::<lambda_1>::operator()
                    (&local_f8,&local_78);
  if (!bVar2) {
    if (ppFVar4 == (FMountPoint **)0x0) {
      ::FString::AssignRange(&local_148,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
      bVar2 = FPaths::IsRelative(&local_148);
      if (!bVar2) {
        FPaths::NormalizeFilename(&local_148);
        local_b8.DataPtr = (wchar_t *)local_148.Data.AllocatorInstance.Data;
        local_b8.Size = local_148.Data.ArrayNum + -1;
        if (local_148.Data.ArrayNum == 0) {
          local_b8.Size = 0;
        }
        pTVar7 = FPathViews::GetBaseFilenameWithPath(local_48,&local_b8);
        local_138 = pTVar7->DataPtr;
        uStack_130 = *(longlong *)&pTVar7->Size;
        local_68.DataPtr = local_138;
        local_68._8_8_ = uStack_130;
        bVar2 = `FPackageName::InternalFilenameToLongPackageName'::__l2::<lambda_1>::operator()
                          (&local_f8,&local_68);
        if (bVar2) goto LAB_141ea8125;
        pwVar6 = local_138;
        iVar9 = (int)uStack_130;
      }
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,pwVar6,iVar9);
  }
LAB_141ea8125:
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  return;
}

// IsAssetPackageExtension @ 141ea8a00

bool __cdecl FPackageName::IsAssetPackageExtension(wchar_t *param_1)

{
  int iVar1;
  int iVar2;
  wchar_t *_Str;
  size_t sVar3;
  ulong64 uVar4;
  int iVar5;
  
  _Str = ::LexToString(Asset);
  iVar1 = 0;
  if (_Str != (wchar_t *)0x0) {
    sVar3 = wcslen(_Str);
    iVar1 = (int)sVar3;
  }
  if (*param_1 == L'.') {
    if (iVar1 != 0) {
      iVar2 = FGenericPlatformStricmp::Strnicmp(_Str,param_1,(longlong)iVar1);
      if ((iVar2 == 0) && (param_1[iVar1] == L'\0')) {
        return true;
      }
    }
    return false;
  }
  iVar2 = iVar1;
  if (iVar1 + -1 < iVar1) {
    iVar2 = iVar1 + -1;
  }
  iVar5 = 0;
  if (0 < iVar2) {
    iVar5 = iVar2;
  }
  uVar4 = (ulong64)iVar5;
  if (iVar5 == 0) {
    return *param_1 == L'\0';
  }
  iVar1 = FGenericPlatformStricmp::Strnicmp(_Str + ((longlong)iVar1 - uVar4),param_1,uVar4);
  if ((iVar1 == 0) && (param_1[uVar4] == L'\0')) {
    return true;
  }
  return false;
}

// IsInEngineTransientPackages @ 141ea9770

/* WARNING: Removing unreachable block (ram,0x000141ea97ac) */

bool __cdecl FPackageName::IsInEngineTransientPackages(TStringView<wchar_t> *param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  int iVar3;
  
  iVar1 = param_1->Size;
  if (0x11 < iVar1) {
    iVar1 = 0x11;
  }
  iVar3 = 0;
  if (0 < iVar1) {
    iVar3 = iVar1;
  }
  if (((iVar3 == 0x11) &&
      (iVar1 = FGenericPlatformStricmp::Strnicmp(L"/Engine/Transient",param_1->DataPtr,0x11),
      iVar1 == 0)) &&
     ((param_1->Size == 0x11 ||
      (pwVar2 = TStringView<wchar_t>::operator[](param_1,0x11), *pwVar2 == L'/')))) {
    return true;
  }
  return false;
}

// IsLocalizedPackage @ 141ea9950

bool __cdecl FPackageName::IsLocalizedPackage(TStringView<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  int iVar9;
  
  if (6 < param_1->Size) {
    pwVar7 = param_1->DataPtr;
    pwVar1 = pwVar7 + param_1->Size;
    if ((pwVar7 != pwVar1) && (pwVar8 = pwVar7 + 1, *pwVar7 == L'/')) {
      do {
        pwVar7 = pwVar8;
        if (pwVar7 == pwVar1) {
          return false;
        }
        pwVar8 = pwVar7 + 1;
      } while (*pwVar7 != L'/');
      if (pwVar8 != pwVar1) {
        iVar9 = (int)((longlong)pwVar1 - (longlong)pwVar8 >> 1);
        iVar5 = iVar9;
        if (4 < iVar9) {
          iVar5 = 4;
        }
        iVar6 = 0;
        if (0 < iVar5) {
          iVar6 = iVar5;
        }
        if ((iVar6 == 4) &&
           (iVar5 = FGenericPlatformStricmp::Strnicmp(L"L10N",pwVar8,4), iVar5 == 0)) {
          if (iVar9 != 4) {
            if ((iVar9 < 5) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index >= 0 && Index < Size",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                                   ,0x234,
                                   L"Index out of bounds on StringView: index %i on a view with a length of %i"
                                  ), bVar3)) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
            if (pwVar7[5] != L'/') {
              return false;
            }
          }
          return true;
        }
        return false;
      }
    }
  }
  return false;
}

// IsMapPackageExtension @ 141ea9a50

bool __cdecl FPackageName::IsMapPackageExtension(wchar_t *param_1)

{
  int iVar1;
  int iVar2;
  wchar_t *_Str;
  size_t sVar3;
  ulong64 uVar4;
  int iVar5;
  
  _Str = ::LexToString(Map);
  iVar1 = 0;
  if (_Str != (wchar_t *)0x0) {
    sVar3 = wcslen(_Str);
    iVar1 = (int)sVar3;
  }
  if (*param_1 == L'.') {
    if (iVar1 != 0) {
      iVar2 = FGenericPlatformStricmp::Strnicmp(_Str,param_1,(longlong)iVar1);
      if ((iVar2 == 0) && (param_1[iVar1] == L'\0')) {
        return true;
      }
    }
    return false;
  }
  iVar2 = iVar1;
  if (iVar1 + -1 < iVar1) {
    iVar2 = iVar1 + -1;
  }
  iVar5 = 0;
  if (0 < iVar2) {
    iVar5 = iVar2;
  }
  uVar4 = (ulong64)iVar5;
  if (iVar5 == 0) {
    return *param_1 == L'\0';
  }
  iVar1 = FGenericPlatformStricmp::Strnicmp(_Str + ((longlong)iVar1 - uVar4),param_1,uVar4);
  if ((iVar1 == 0) && (param_1[uVar4] == L'\0')) {
    return true;
  }
  return false;
}

// IsMemoryPackage @ 141ea9b60

bool __cdecl FPackageName::IsMemoryPackage(TStringView<wchar_t> *param_1)

{
  int iVar1;
  bool bVar2;
  FLongPackagePathsSingleton *pFVar3;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  pFVar3 = FLongPackagePathsSingleton::Get();
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_28.DataPtr = (wchar_t *)(pFVar3->MemoryRootPath).Data.AllocatorInstance.Data;
  iVar1 = (pFVar3->MemoryRootPath).Data.ArrayNum;
  local_28.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_28.Size = 0;
  }
  bVar2 = FPathViews::IsParentPathOf(&local_28,&local_18);
  return bVar2;
}

// IsPackageExtension @ 141ea9bc0

bool __cdecl FPackageName::IsPackageExtension(wchar_t *param_1)

{
  wchar_t wVar1;
  int iVar2;
  wchar_t *pwVar3;
  size_t sVar4;
  int iVar5;
  int iVar6;
  ulong64 uVar7;
  int iVar8;
  bool bVar9;
  
  pwVar3 = ::LexToString(Asset);
  iVar8 = 0;
  iVar2 = 0;
  if (pwVar3 != (wchar_t *)0x0) {
    sVar4 = wcslen(pwVar3);
    iVar2 = (int)sVar4;
  }
  if (*param_1 == L'.') {
    if (iVar2 != 0) {
      uVar7 = (ulong64)iVar2;
      goto LAB_141ea9c36;
    }
LAB_141ea9c4f:
    bVar9 = false;
  }
  else {
    iVar6 = iVar2;
    if (iVar2 + -1 < iVar2) {
      iVar6 = iVar2 + -1;
    }
    iVar5 = 0;
    if (0 < iVar6) {
      iVar5 = iVar6;
    }
    uVar7 = (ulong64)iVar5;
    pwVar3 = pwVar3 + ((longlong)iVar2 - uVar7);
    if (iVar5 == 0) {
      bVar9 = *param_1 == L'\0';
    }
    else {
LAB_141ea9c36:
      iVar2 = FGenericPlatformStricmp::Strnicmp(pwVar3,param_1,uVar7);
      if ((iVar2 != 0) || (param_1[uVar7] != L'\0')) goto LAB_141ea9c4f;
      bVar9 = true;
    }
  }
  if (bVar9) {
    return true;
  }
  pwVar3 = ::LexToString(Map);
  if (pwVar3 != (wchar_t *)0x0) {
    sVar4 = wcslen(pwVar3);
    iVar8 = (int)sVar4;
  }
  if (*param_1 == L'.') {
    if (iVar8 != 0) {
      iVar2 = FGenericPlatformStricmp::Strnicmp(pwVar3,param_1,(longlong)iVar8);
      if (iVar2 == 0) {
        wVar1 = param_1[iVar8];
        goto LAB_141ea9cd7;
      }
    }
  }
  else {
    iVar2 = iVar8;
    if (iVar8 + -1 < iVar8) {
      iVar2 = iVar8 + -1;
    }
    iVar6 = 0;
    if (0 < iVar2) {
      iVar6 = iVar2;
    }
    uVar7 = (ulong64)iVar6;
    if (iVar6 == 0) {
      bVar9 = *param_1 == L'\0';
      goto LAB_141ea9cdf;
    }
    iVar2 = FGenericPlatformStricmp::Strnicmp(pwVar3 + ((longlong)iVar8 - uVar7),param_1,uVar7);
    if (iVar2 == 0) {
      wVar1 = param_1[uVar7];
LAB_141ea9cd7:
      if (wVar1 == L'\0') {
        bVar9 = true;
        goto LAB_141ea9cdf;
      }
    }
  }
  bVar9 = false;
LAB_141ea9cdf:
  if (bVar9) {
    return true;
  }
  return false;
}

// IsPackageExtension @ 141ea9d00

bool __cdecl FPackageName::IsPackageExtension(EPackageExtension param_1)

{
  return (byte)(param_1 - Asset) < 2;
}

// IsScriptPackage @ 141ea9e30

bool __cdecl FPackageName::IsScriptPackage(TStringView<wchar_t> *param_1)

{
  int iVar1;
  bool bVar2;
  FLongPackagePathsSingleton *pFVar3;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  pFVar3 = FLongPackagePathsSingleton::Get();
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_28.DataPtr = (wchar_t *)(pFVar3->ScriptRootPath).Data.AllocatorInstance.Data;
  iVar1 = (pFVar3->ScriptRootPath).Data.ArrayNum;
  local_28.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_28.Size = 0;
  }
  bVar2 = FPathViews::IsParentPathOf(&local_28,&local_18);
  return bVar2;
}

// IsShortPackageName @ 141ea9f20

bool __cdecl FPackageName::IsShortPackageName(FString *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  
  iVar2 = (param_1->Data).ArrayNum;
  pFVar3 = (param_1->Data).AllocatorInstance.Data;
  iVar4 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar4 = 0;
  }
  pFVar1 = pFVar3 + (longlong)iVar4 * 2;
  while( true ) {
    if (pFVar3 == pFVar1) {
      return true;
    }
    if (*(short *)pFVar3 == 0x2f) break;
    pFVar3 = pFVar3 + 2;
  }
  return false;
}

// IsShortPackageName @ 141ea9f60

bool __cdecl FPackageName::IsShortPackageName(TStringView<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  
  pwVar2 = param_1->DataPtr;
  pwVar1 = pwVar2 + param_1->Size;
  while( true ) {
    if (pwVar2 == pwVar1) {
      return true;
    }
    if (*pwVar2 == L'/') break;
    pwVar2 = pwVar2 + 1;
  }
  return false;
}

// IsShortPackageName @ 141ea9f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl FPackageName::IsShortPackageName(FName param_1)

{
  uint uVar1;
  wchar_t *pwVar2;
  FName local_res8 [4];
  undefined1 auStack_838 [32];
  wchar_t local_818 [1024];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_838;
  local_res8[0] = param_1;
  uVar1 = ::FName::GetPlainNameString(local_res8,&local_818);
  pwVar2 = local_818;
  while( true ) {
    if (pwVar2 == local_818 + (int)uVar1) {
      return true;
    }
    if (*pwVar2 == L'/') break;
    pwVar2 = pwVar2 + 1;
  }
  return false;
}

// IsTempPackage @ 141eaa020

bool __cdecl FPackageName::IsTempPackage(TStringView<wchar_t> *param_1)

{
  int iVar1;
  bool bVar2;
  FLongPackagePathsSingleton *pFVar3;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  pFVar3 = FLongPackagePathsSingleton::Get();
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_28.DataPtr = (wchar_t *)(pFVar3->TempRootPath).Data.AllocatorInstance.Data;
  iVar1 = (pFVar3->TempRootPath).Data.ArrayNum;
  local_28.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_28.Size = 0;
  }
  bVar2 = FPathViews::IsParentPathOf(&local_28,&local_18);
  return bVar2;
}

// IsTextAssetPackageExtension @ 141eaa080

bool __cdecl FPackageName::IsTextAssetPackageExtension(wchar_t *param_1)

{
  wchar_t wVar1;
  int iVar2;
  int iVar3;
  wchar_t *_Str;
  size_t sVar4;
  ulong64 uVar5;
  int iVar6;
  
  _Str = ::LexToString(TextAsset);
  iVar2 = 0;
  if (_Str != (wchar_t *)0x0) {
    sVar4 = wcslen(_Str);
    iVar2 = (int)sVar4;
  }
  wVar1 = *param_1;
  if ((wVar1 != L'.') && (wVar1 != L'\0')) {
    iVar3 = iVar2;
    if (iVar2 + -1 < iVar2) {
      iVar3 = iVar2 + -1;
    }
    iVar6 = 0;
    if (0 < iVar3) {
      iVar6 = iVar3;
    }
    uVar5 = (ulong64)iVar6;
    if (iVar6 != 0) {
      iVar2 = FGenericPlatformStricmp::Strnicmp(_Str + ((longlong)iVar2 - uVar5),param_1,uVar5);
      if ((iVar2 == 0) && (param_1[uVar5] == L'\0')) {
        return true;
      }
    }
    return false;
  }
  if (iVar2 == 0) {
    return wVar1 == L'\0';
  }
  iVar3 = FGenericPlatformStricmp::Strnicmp(_Str,param_1,(longlong)iVar2);
  if ((iVar3 == 0) && (param_1[iVar2] == L'\0')) {
    return true;
  }
  return false;
}

// IsTextMapPackageExtension @ 141eaa190

bool __cdecl FPackageName::IsTextMapPackageExtension(wchar_t *param_1)

{
  wchar_t wVar1;
  int iVar2;
  int iVar3;
  wchar_t *_Str;
  size_t sVar4;
  ulong64 uVar5;
  int iVar6;
  
  _Str = ::LexToString(TextMap);
  iVar2 = 0;
  if (_Str != (wchar_t *)0x0) {
    sVar4 = wcslen(_Str);
    iVar2 = (int)sVar4;
  }
  wVar1 = *param_1;
  if ((wVar1 != L'.') && (wVar1 != L'\0')) {
    iVar3 = iVar2;
    if (iVar2 + -1 < iVar2) {
      iVar3 = iVar2 + -1;
    }
    iVar6 = 0;
    if (0 < iVar3) {
      iVar6 = iVar3;
    }
    uVar5 = (ulong64)iVar6;
    if (iVar6 != 0) {
      iVar2 = FGenericPlatformStricmp::Strnicmp(_Str + ((longlong)iVar2 - uVar5),param_1,uVar5);
      if ((iVar2 == 0) && (param_1[uVar5] == L'\0')) {
        return true;
      }
    }
    return false;
  }
  if (iVar2 == 0) {
    return wVar1 == L'\0';
  }
  iVar3 = FGenericPlatformStricmp::Strnicmp(_Str,param_1,(longlong)iVar2);
  if ((iVar3 == 0) && (param_1[iVar2] == L'\0')) {
    return true;
  }
  return false;
}

// IsTextPackageExtension @ 141eaa2a0

bool __cdecl FPackageName::IsTextPackageExtension(wchar_t *param_1)

{
  wchar_t wVar1;
  int iVar2;
  int iVar3;
  wchar_t *pwVar4;
  size_t sVar5;
  int iVar6;
  ulong64 uVar7;
  bool bVar8;
  
  pwVar4 = ::LexToString(TextAsset);
  iVar2 = 0;
  if (pwVar4 != (wchar_t *)0x0) {
    sVar5 = wcslen(pwVar4);
    iVar2 = (int)sVar5;
  }
  wVar1 = *param_1;
  if ((wVar1 == L'.') || (wVar1 == L'\0')) {
    if (iVar2 != 0) {
      uVar7 = (ulong64)iVar2;
      goto LAB_141eaa318;
    }
    bVar8 = wVar1 == L'\0';
  }
  else {
    iVar3 = iVar2;
    if (iVar2 + -1 < iVar2) {
      iVar3 = iVar2 + -1;
    }
    iVar6 = 0;
    if (0 < iVar3) {
      iVar6 = iVar3;
    }
    uVar7 = (ulong64)iVar6;
    pwVar4 = pwVar4 + ((longlong)iVar2 - uVar7);
    if (iVar6 != 0) {
LAB_141eaa318:
      iVar2 = FGenericPlatformStricmp::Strnicmp(pwVar4,param_1,uVar7);
      if ((iVar2 == 0) && (param_1[uVar7] == L'\0')) {
        bVar8 = true;
        goto LAB_141eaa333;
      }
    }
    bVar8 = false;
  }
LAB_141eaa333:
  if (bVar8) {
    return true;
  }
  pwVar4 = ::LexToString(TextMap);
  iVar2 = 0;
  if (pwVar4 != (wchar_t *)0x0) {
    sVar5 = wcslen(pwVar4);
    iVar2 = (int)sVar5;
  }
  wVar1 = *param_1;
  if ((wVar1 == L'.') || (wVar1 == L'\0')) {
    if (iVar2 == 0) {
      bVar8 = wVar1 == L'\0';
      goto LAB_141eaa3c3;
    }
    iVar3 = FGenericPlatformStricmp::Strnicmp(pwVar4,param_1,(longlong)iVar2);
    if (iVar3 == 0) {
      wVar1 = param_1[iVar2];
      goto LAB_141eaa3bb;
    }
  }
  else {
    iVar3 = iVar2;
    if (iVar2 + -1 < iVar2) {
      iVar3 = iVar2 + -1;
    }
    iVar6 = 0;
    if (0 < iVar3) {
      iVar6 = iVar3;
    }
    uVar7 = (ulong64)iVar6;
    if ((iVar6 != 0) &&
       (iVar2 = FGenericPlatformStricmp::Strnicmp(pwVar4 + ((longlong)iVar2 - uVar7),param_1,uVar7),
       iVar2 == 0)) {
      wVar1 = param_1[uVar7];
LAB_141eaa3bb:
      if (wVar1 == L'\0') {
        bVar8 = true;
        goto LAB_141eaa3c3;
      }
    }
  }
  bVar8 = false;
LAB_141eaa3c3:
  if (bVar8) {
    return true;
  }
  return false;
}

// IsTextPackageExtension @ 141eaa3f0

bool __cdecl FPackageName::IsTextPackageExtension(EPackageExtension param_1)

{
  return (byte)(param_1 - TextAsset) < 2;
}

// IsUnderGeneratedPackageSubPath @ 141eaa650

bool __cdecl FPackageName::IsUnderGeneratedPackageSubPath(TStringView<wchar_t> *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  wchar_t *pwVar4;
  int iVar5;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  iVar1 = param_1->Size;
  local_28.Size = 0xb;
  local_28.DataPtr = L"_Generated_";
  iVar3 = iVar1;
  if (iVar1 + -1 < iVar1) {
    iVar3 = iVar1 + -1;
  }
  iVar5 = 0;
  if (0 < iVar3) {
    iVar5 = iVar3;
  }
  local_18.Size = iVar5;
  local_18.DataPtr = param_1->DataPtr + ((longlong)iVar1 - (longlong)iVar5);
  iVar3 = UE::String::FindFirst(&local_18,&local_28,CaseSensitive);
  if ((iVar3 != -1) && (0 < iVar3 + 1)) {
    pwVar4 = TStringView<wchar_t>::operator[](param_1,iVar3);
    bVar2 = FPathViews::IsSeparator(*pwVar4);
    if (bVar2) {
      if (iVar3 + 0xc < iVar1) {
        pwVar4 = TStringView<wchar_t>::operator[](param_1,iVar3 + 0xc);
        bVar2 = FPathViews::IsSeparator(*pwVar4);
        if (!bVar2) {
          return false;
        }
      }
      return true;
    }
  }
  return false;
}

// IsValidLongPackageName @ 141eaa740

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __cdecl
FPackageName::IsValidLongPackageName(TStringView<wchar_t> *param_1,bool param_2,FText *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FLongPackagePathsSingleton *SRWLock;
  void *pvVar5;
  FString *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  ulong64 uVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  undefined1 auStack_1138 [32];
  undefined1 local_1118 [8];
  FString local_1110;
  EErrorCode local_1100 [2];
  FScriptContainerElement *local_10f8;
  FText *local_10f0;
  TStringView<wchar_t> local_10e8;
  FString local_10d8;
  FText local_10c8;
  FText local_10b8;
  TStringView<wchar_t> local_10a8;
  FText local_1098;
  FText local_1088;
  FTextFormat local_1078;
  TStringBuilderBase<wchar_t> local_1068;
  wchar_t local_1048 [2048];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_1138;
  local_10e8.DataPtr = param_1->DataPtr;
  local_10e8.Size = param_1->Size;
  local_10e8._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_10f0 = param_3;
  bVar3 = IsValidLongPackageName(&local_10e8,param_2,local_1100);
  if (bVar3) {
    bVar3 = true;
  }
  else {
    if (param_3 != (FText *)0x0) {
      if (local_1100[0] == PackageNamePathNotMounted) {
        SRWLock = FLongPackagePathsSingleton::Get();
        if ((SRWLock == (FLongPackagePathsSingleton *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Mutex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                               ,0x1c,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        AcquireSRWLockShared((PSRWLOCK)SRWLock);
        local_1068.Base = local_1048;
        local_1068.bIsDynamic = false;
        local_1068.bIsExternal = false;
        local_1068.CurPos = local_1048;
        local_1068.End = (wchar_t *)local_48;
        pFVar12 = (SRWLock->MountPoints).AllocatorInstance.Data;
        iVar11 = (SRWLock->MountPoints).ArrayNum;
        pFVar14 = pFVar12 + (longlong)iVar11 * 8;
        local_10f8 = pFVar14;
        while( true ) {
          if ((SRWLock->MountPoints).ArrayNum != iVar11) {
            local_1118[0] = 0;
            `TCheckedPointerIterator<TUniquePtr<FMountPoint,TDefaultDelete<FMountPoint>_>_const_,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_1118);
          }
          if (pFVar12 == pFVar14) break;
          if ((param_2) || ((*(byte *)(*(longlong *)pFVar12 + 0x30) & 2) == 0)) {
            iVar1 = *(int *)(*(undefined8 **)pFVar12 + 1);
            pvVar5 = (void *)**(undefined8 **)pFVar12;
            iVar13 = iVar1 + -1;
            if (iVar1 == 0) {
              iVar13 = 0;
            }
            uVar10 = (ulong64)iVar13;
            if (local_1068.End < local_1068.CurPos + uVar10) {
              TStringBuilderBase<wchar_t>::Extend(&local_1068,uVar10);
            }
            if (iVar13 != 0) {
              pvVar5 = FGenericPlatformString::Memcpy(local_1068.CurPos,pvVar5,uVar10 * 2);
              local_1068.CurPos = (wchar_t *)((longlong)pvVar5 + uVar10 * 2);
            }
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_1068,L", ",2);
            pFVar14 = local_10f8;
          }
          pFVar12 = pFVar12 + 8;
        }
        if (param_2) {
          iVar13 = (SRWLock->MemoryRootPath).Data.ArrayNum;
          pFVar14 = (SRWLock->MemoryRootPath).Data.AllocatorInstance.Data;
          iVar11 = iVar13 + -1;
          if (iVar13 == 0) {
            iVar11 = 0;
          }
          uVar10 = (ulong64)iVar11;
          if (local_1068.End < local_1068.CurPos + uVar10) {
            TStringBuilderBase<wchar_t>::Extend(&local_1068,uVar10);
          }
          if (iVar11 != 0) {
            pvVar5 = FGenericPlatformString::Memcpy(local_1068.CurPos,pFVar14,uVar10 * 2);
            local_1068.CurPos = (wchar_t *)((longlong)pvVar5 + uVar10 * 2);
          }
          TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_1068,L", ",2);
        }
        if (((int)((longlong)local_1068.CurPos - (longlong)local_1068.Base >> 1) < 2) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount <= Len()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                               ,0xe8,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        local_1068.CurPos = local_1068.CurPos + -2;
        local_1110.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1110.Data.ArrayNum = 0;
        local_1110.Data.ArrayMax = 0;
        pFVar6 = ::FString::ConstructFromPtrSize
                           (&local_10d8,local_1068.Base,
                            (int)((longlong)local_1068.CurPos - (longlong)local_1068.Base >> 1));
        if (&local_1110 != pFVar6) {
          if (local_1110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1110.Data.AllocatorInstance.Data);
          }
          local_1110.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
          (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1110.Data.ArrayNum = (pFVar6->Data).ArrayNum;
          local_1110.Data.ArrayMax = (pFVar6->Data).ArrayMax;
          (pFVar6->Data).ArrayNum = 0;
          (pFVar6->Data).ArrayMax = 0;
        }
        if (local_10d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_10d8.Data.AllocatorInstance.Data);
        }
        pFVar7 = FText::FromString(&local_1088,&local_1110);
        pFVar8 = FText::AsLocalizable_Advanced_LocText
                           (&local_10b8,L"Core",L"LongPackageNames_InvalidRoot",
                            L"Path does not start with a valid root. Path must begin with one of: {0}"
                           );
        pFVar9 = FTextFormat::FTextFormat(&local_1078,pFVar8,Default);
        pFVar7 = FText::Format<FText>(&local_10c8,pFVar9,pFVar7);
        FText::operator=(local_10f0,pFVar7);
        if (local_10c8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_10c8.TextData.Reference + 0x10))();
        }
        if (local_10b8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_10b8.TextData.Reference + 0x10))();
        }
        if (local_1110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1110.Data.AllocatorInstance.Data);
        }
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1068);
        if (SRWLock != (FLongPackagePathsSingleton *)0x0) {
          ReleaseSRWLockShared((PSRWLOCK)SRWLock);
          return false;
        }
      }
      else {
        local_10a8.DataPtr = param_1->DataPtr;
        local_10a8.Size = param_1->Size;
        local_10a8._12_4_ = *(undefined4 *)&param_1->field_0xc;
        pFVar7 = FormatErrorAsText(&local_1098,&local_10a8,local_1100[0]);
        FText::operator=(param_3,pFVar7);
        if (local_1098.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_1098.TextData.Reference + 0x10))();
        }
      }
    }
    bVar3 = false;
  }
  return bVar3;
}

// IsValidLongPackageName @ 141eaab30

/* WARNING: Type propagation algorithm not settling */

bool __cdecl
FPackageName::IsValidLongPackageName(TStringView<wchar_t> *param_1,bool param_2,EErrorCode *param_3)

{
  code *pcVar1;
  wchar_t *pwVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FLongPackagePathsSingleton *SRWLock;
  FMountPoint **ppFVar7;
  TStringView<wchar_t> local_e8;
  wchar_t *local_d8;
  undefined8 uStack_d0;
  wchar_t *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  FScriptContainerElement *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  FScriptContainerElement *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38 [2];
  
  pwVar2 = param_1->DataPtr;
  uVar3._0_4_ = param_1->Size;
  uVar3._4_4_ = *(undefined4 *)&param_1->field_0xc;
  iVar6 = (int)*(undefined8 *)&param_1->Size;
  if (iVar6 < 4) {
    if (param_3 != (EErrorCode *)0x0) {
      *param_3 = LongPackageNames_PathTooShort;
    }
    return false;
  }
  if (*pwVar2 != L'/') {
    if (param_3 == (EErrorCode *)0x0) {
      return false;
    }
    *param_3 = LongPackageNames_PathWithNoStartingSlash;
    return false;
  }
  local_d8 = pwVar2;
  uStack_d0 = uVar3;
  if (((iVar6 + -1 < 0) || (iVar6 <= iVar6 + -1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && Index < Size",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                         ,0x234,
                         L"Index out of bounds on StringView: index %i on a view with a length of %i"
                        ), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  if (pwVar2[(longlong)iVar6 + -1] == L'/') {
    if (param_3 == (EErrorCode *)0x0) {
      return false;
    }
    *param_3 = LongPackageNames_PathWithTrailingSlash;
    return false;
  }
  uStack_c0 = 2;
  local_c8 = L"//";
  local_98._12_4_ = uStack_bc;
  local_98.Size = 2;
  local_e8.Size = 0;
  if (0 < iVar6) {
    local_e8.Size = iVar6;
  }
  local_98.DataPtr = L"//";
  local_e8.DataPtr = pwVar2 + ((longlong)iVar6 - (longlong)local_e8.Size);
  iVar6 = UE::String::FindFirst(&local_e8,&local_98,CaseSensitive);
  if (iVar6 != -1) {
    if (param_3 == (EErrorCode *)0x0) {
      return false;
    }
    *param_3 = LongPackageNames_PathWithDoubleSlash;
    return false;
  }
  local_88.DataPtr = pwVar2;
  local_88._8_8_ = uVar3;
  bVar4 = DoesPackageNameContainInvalidCharacters(&local_88,param_3);
  if (bVar4) {
    return false;
  }
  if (param_3 != (EErrorCode *)0x0) {
    *param_3 = PackageNameUnknown;
  }
  SRWLock = FLongPackagePathsSingleton::Get();
  if ((SRWLock == (FLongPackagePathsSingleton *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x1c,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  local_78.DataPtr = param_1->DataPtr;
  local_78.Size = param_1->Size;
  local_78._12_4_ = *(undefined4 *)&param_1->field_0xc;
  ppFVar7 = TDirectoryTree<FMountPoint_*>::FindClosestValue(&SRWLock->RootPathTree,&local_78);
  if (ppFVar7 == (FMountPoint **)0x0) {
    if (param_2) {
      local_a8 = (SRWLock->MemoryRootPath).Data.AllocatorInstance.Data;
      local_48.DataPtr = param_1->DataPtr;
      local_48.Size = param_1->Size;
      local_48._12_4_ = *(undefined4 *)&param_1->field_0xc;
      iVar6 = (SRWLock->MemoryRootPath).Data.ArrayNum;
      iStack_a0 = iVar6 + -1;
      if (iVar6 == 0) {
        iStack_a0 = 0;
      }
      local_38[0]._12_4_ = uStack_9c;
      local_38[0].Size = iStack_a0;
      local_38[0].DataPtr = (wchar_t *)local_a8;
      bVar4 = FPathViews::IsParentPathOf(local_38,&local_48);
      if (bVar4) {
        if (param_3 != (EErrorCode *)0x0) goto LAB_141eaaddc;
        goto LAB_141eaaddf;
      }
    }
  }
  else if ((param_2) || (!(*ppFVar7)->bReadOnly)) {
    local_68.DataPtr = param_1->DataPtr;
    local_68.Size = param_1->Size;
    local_68._12_4_ = *(undefined4 *)&param_1->field_0xc;
    local_b8 = ((*ppFVar7)->RootPath).Data.AllocatorInstance.Data;
    iVar6 = ((*ppFVar7)->RootPath).Data.ArrayNum;
    iStack_b0 = iVar6 + -1;
    if (iVar6 == 0) {
      iStack_b0 = 0;
    }
    local_58._12_4_ = uStack_ac;
    local_58.Size = iStack_b0;
    local_58.DataPtr = (wchar_t *)local_b8;
    bVar4 = FPathViews::IsParentPathOf(&local_58,&local_68);
    if (bVar4) {
      if (param_3 == (EErrorCode *)0x0) {
        bVar4 = true;
        goto LAB_141eaadf0;
      }
LAB_141eaaddc:
      *param_3 = PackageNameUnknown;
LAB_141eaaddf:
      bVar4 = true;
      goto LAB_141eaadf0;
    }
  }
  if (param_3 != (EErrorCode *)0x0) {
    *param_3 = PackageNamePathNotMounted;
  }
  bVar4 = false;
LAB_141eaadf0:
  if (SRWLock != (FLongPackagePathsSingleton *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    return bVar4;
  }
  return bVar4;
}

// IsValidObjectPath @ 141eaae10

bool __cdecl FPackageName::IsValidObjectPath(TStringView<wchar_t> *param_1,FText *param_2)

{
  short sVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  FText *pFVar9;
  uint uVar10;
  longlong lVar11;
  FText local_98;
  TStringView<wchar_t> local_88;
  FString local_78;
  TStringView<wchar_t> local_68;
  FText local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  FText local_28;
  FText local_18;
  
  local_68.DataPtr = param_1->DataPtr;
  local_68.Size = param_1->Size;
  local_68._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_88.DataPtr = (wchar_t *)0x0;
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  uVar6 = UE::String::FindFirstChar(&local_68,L'.',CaseSensitive);
  if (uVar6 == 0xffffffff) {
    local_48.DataPtr = param_1->DataPtr;
    local_48.Size = param_1->Size;
    local_98._12_4_ = *(undefined4 *)&param_1->field_0xc;
  }
  else {
    uVar2 = param_1->Size;
    if (uVar6 == uVar2 - 1) {
      if (param_2 == (FText *)0x0) {
        return false;
      }
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_58,L"Core",L"ObjectPath_EndWithPeriod",
                          L"Object Path may not end with .");
      FText::operator=(param_2,pFVar9);
      goto LAB_141eaae9d;
    }
    uVar7 = 0;
    if ((int)uVar2 < 0) {
      uVar7 = uVar2;
    }
    uVar10 = uVar2 - uVar7;
    if ((int)uVar6 < (int)(uVar2 - uVar7)) {
      uVar10 = uVar6;
    }
    local_48.DataPtr = param_1->DataPtr + (int)uVar7;
    local_98.Flags = 0;
    local_48.Size = local_98.Flags;
    if (0 < (int)uVar10) {
      local_48.Size = uVar10;
    }
    uVar10 = uVar6 + 1;
    uVar7 = 0x7fffffff;
    if ((int)(uVar6 + 1) < 0) {
      uVar10 = local_98.Flags;
      uVar7 = uVar6 + 0x80000000;
    }
    if ((int)uVar2 < (int)uVar10) {
      uVar10 = uVar2;
    }
    uVar6 = uVar2 - uVar10;
    if ((int)uVar7 < (int)(uVar2 - uVar10)) {
      uVar6 = uVar7;
    }
    local_98.TextData.Reference = (ITextData *)(param_1->DataPtr + (int)uVar10);
    if (0 < (int)uVar6) {
      local_98.Flags = uVar6;
    }
    local_88._8_8_ = CONCAT44(local_98._12_4_,local_98.Flags);
    local_88.DataPtr = (wchar_t *)local_98.TextData.Reference;
  }
  local_48._12_4_ = local_98._12_4_;
  bVar4 = IsValidLongPackageName(&local_48,true,param_2);
  if (!bVar4) {
    return false;
  }
  if (local_88.Size < 1) {
    return true;
  }
  FText::AsLocalizable_Advanced_LocText(&local_98,L"Core",L"ObjectPathContext",L"Object Path");
  ::FString::FString(&local_78,L"\"\' ,|&!~\n\r\t@#(){}[]=;^%$`");
  bVar4 = ::FName::IsValidXName(&local_88,&local_78,param_2,&local_98);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  local_58.TextData.Reference = local_98.TextData.Reference;
  if (bVar4) {
    lVar11 = (longlong)local_88.Size;
    if ((local_88.Size + -1 < 0) || (local_88.Size <= local_88.Size + -1)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && Index < Size",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                         ,0x234,
                         L"Index out of bounds on StringView: index %i on a view with a length of %i"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    sVar1 = *(short *)((longlong)local_88.DataPtr + lVar11 * 2 + -2);
    if ((sVar1 == 0x2e) || (sVar1 == 0x3a)) {
      local_58.TextData.Reference = local_98.TextData.Reference;
      if (param_2 == (FText *)0x0) goto LAB_141eaae9d;
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_18,L"Core",L"ObjectPath_PathWithTrailingSeperator",
                          L"Object Path may not end with : or .");
      FText::operator=(param_2,pFVar9);
      local_28.TextData.Reference = local_18.TextData.Reference;
    }
    else {
      local_38.DataPtr = local_88.DataPtr;
      local_38.Size = local_88.Size;
      local_38._12_4_ = local_88._12_4_;
      iVar8 = UE::String::FindFirstChar(&local_38,L'/',CaseSensitive);
      if (iVar8 == -1) {
        if (local_98.TextData.Reference == (ITextData *)0x0) {
          return true;
        }
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
        return true;
      }
      local_58.TextData.Reference = local_98.TextData.Reference;
      if (param_2 == (FText *)0x0) goto LAB_141eaae9d;
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_28,L"Core",L"ObjectPath_SlashAfterPeriod",
                          L"Object Path may not have / after first .");
      FText::operator=(param_2,pFVar9);
    }
    local_58.TextData.Reference = local_98.TextData.Reference;
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
      local_58.TextData.Reference = local_98.TextData.Reference;
    }
  }
LAB_141eaae9d:
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  return false;
}

// IsValidPath @ 141eab0d0

bool __cdecl FPackageName::IsValidPath(TStringView<wchar_t> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FLongPackagePathsSingleton *SRWLock;
  FMountPoint **ppFVar6;
  FLongPackagePathsSingleton *pFVar7;
  undefined4 uStack_3c;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  SRWLock = FLongPackagePathsSingleton::Get();
  if (SRWLock == (FLongPackagePathsSingleton *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  local_38.DataPtr = param_1->DataPtr;
  local_38.Size = param_1->Size;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  ppFVar6 = TDirectoryTree<FMountPoint_*>::FindClosestValue(&SRWLock->RootPathTree,&local_38);
  if (ppFVar6 == (FMountPoint **)0x0) {
    pFVar7 = FLongPackagePathsSingleton::Get();
    local_28.DataPtr = param_1->DataPtr;
    local_28.Size = param_1->Size;
    local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
    local_18.DataPtr = (wchar_t *)(pFVar7->MemoryRootPath).Data.AllocatorInstance.Data;
    iVar1 = (pFVar7->MemoryRootPath).Data.ArrayNum;
    iVar5 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar5 = 0;
    }
    local_18._12_4_ = uStack_3c;
    local_18.Size = iVar5;
    bVar3 = FPathViews::IsParentPathOf(&local_18,&local_28);
    if (!bVar3) {
      bVar3 = false;
      goto LAB_141eab184;
    }
  }
  bVar3 = true;
LAB_141eab184:
  if (SRWLock != (FLongPackagePathsSingleton *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return bVar3;
}

// IsValidTextForLongPackageName @ 141eab1b0

bool __cdecl
FPackageName::IsValidTextForLongPackageName(TStringView<wchar_t> *param_1,FText *param_2)

{
  code *pcVar1;
  wchar_t *pwVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FText *pFVar7;
  EErrorCode local_res8 [2];
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_6c;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  FText local_28 [2];
  
  pwVar2 = param_1->DataPtr;
  uVar3._0_4_ = param_1->Size;
  uVar3._4_4_ = *(undefined4 *)&param_1->field_0xc;
  iVar6 = (int)*(undefined8 *)&param_1->Size;
  if (iVar6 < 4) {
    local_res8[0] = LongPackageNames_PathTooShort;
  }
  else if (*pwVar2 == L'/') {
    if (((iVar6 + -1 < 0) || (iVar6 <= iVar6 + -1)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0 && Index < Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                           ,0x234,
                           L"Index out of bounds on StringView: index %i on a view with a length of %i"
                          ), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    if (pwVar2[(longlong)iVar6 + -1] == L'/') {
      local_res8[0] = LongPackageNames_PathWithTrailingSlash;
    }
    else {
      local_68._12_4_ = uStack_6c;
      local_68.Size = 2;
      local_58.Size = 0;
      if (0 < iVar6) {
        local_58.Size = iVar6;
      }
      local_68.DataPtr = L"//";
      local_58.DataPtr = pwVar2 + ((longlong)iVar6 - (longlong)local_58.Size);
      local_58._12_4_ = uVar3._4_4_;
      iVar6 = UE::String::FindFirst(&local_58,&local_68,CaseSensitive);
      if (iVar6 == -1) {
        local_48.DataPtr = pwVar2;
        local_48._8_8_ = uVar3;
        bVar4 = DoesPackageNameContainInvalidCharacters(&local_48,local_res8);
        if (!bVar4) {
          return true;
        }
      }
      else {
        local_res8[0] = LongPackageNames_PathWithDoubleSlash;
      }
    }
  }
  else {
    local_res8[0] = LongPackageNames_PathWithNoStartingSlash;
  }
  if (param_2 != (FText *)0x0) {
    local_38.DataPtr = param_1->DataPtr;
    local_38.Size = param_1->Size;
    local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
    pFVar7 = FormatErrorAsText(local_28,&local_38,local_res8[0]);
    FText::operator=(param_2,pFVar7);
    if (local_28[0].TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28[0].TextData.Reference + 0x10))();
    }
  }
  return false;
}

// IsValidTextForLongPackageName @ 141eab360

bool __cdecl
FPackageName::IsValidTextForLongPackageName(TStringView<wchar_t> *param_1,EErrorCode *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uStack_3c;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  iVar4 = param_1->Size;
  if (iVar4 < 4) {
    if (param_2 != (EErrorCode *)0x0) {
      *param_2 = LongPackageNames_PathTooShort;
      return false;
    }
  }
  else if (*param_1->DataPtr == L'/') {
    if ((iVar4 + -1 < 0) || (iVar4 <= iVar4 + -1)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && Index < Size",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                         ,0x234,
                         L"Index out of bounds on StringView: index %i on a view with a length of %i"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if (param_1->DataPtr[(longlong)iVar4 + -1] == L'/') {
      if (param_2 != (EErrorCode *)0x0) {
        *param_2 = LongPackageNames_PathWithTrailingSlash;
        return false;
      }
    }
    else {
      iVar4 = param_1->Size;
      local_28._12_4_ = uStack_3c;
      local_28.Size = 2;
      local_38.Size = 0;
      if (0 < iVar4) {
        local_38.Size = iVar4;
      }
      local_28.DataPtr = L"//";
      local_38.DataPtr = param_1->DataPtr + ((longlong)iVar4 - (longlong)local_38.Size);
      iVar4 = UE::String::FindFirst(&local_38,&local_28,CaseSensitive);
      if (iVar4 == -1) {
        local_18.DataPtr = param_1->DataPtr;
        local_18.Size = param_1->Size;
        local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
        bVar2 = DoesPackageNameContainInvalidCharacters(&local_18,param_2);
        if (!bVar2) {
          if (param_2 != (EErrorCode *)0x0) {
            *param_2 = PackageNameUnknown;
          }
          return true;
        }
      }
      else if (param_2 != (EErrorCode *)0x0) {
        *param_2 = LongPackageNames_PathWithDoubleSlash;
        return false;
      }
    }
  }
  else if (param_2 != (EErrorCode *)0x0) {
    *param_2 = LongPackageNames_PathWithNoStartingSlash;
    return false;
  }
  return false;
}

// IsVerseExtension @ 141eab510

bool __cdecl FPackageName::IsVerseExtension(wchar_t *param_1)

{
  wchar_t wVar1;
  int iVar2;
  
  if (*param_1 == L'.') {
    iVar2 = FGenericPlatformStricmp::Strnicmp(L".verse",param_1,6);
    if ((iVar2 == 0) && (param_1[6] == L'\0')) {
      return true;
    }
    iVar2 = FGenericPlatformStricmp::Strnicmp(L".vmodule",param_1,8);
    if (iVar2 != 0) {
      return false;
    }
    wVar1 = param_1[8];
  }
  else {
    iVar2 = FGenericPlatformStricmp::Strnicmp(L"verse",param_1,5);
    if ((iVar2 == 0) && (param_1[5] == L'\0')) {
      return true;
    }
    iVar2 = FGenericPlatformStricmp::Strnicmp(L"vmodule",param_1,7);
    if (iVar2 != 0) {
      return false;
    }
    wVar1 = param_1[7];
  }
  if (wVar1 == L'\0') {
    return true;
  }
  return false;
}

// IsVersePackage @ 141eab5b0

bool __cdecl FPackageName::IsVersePackage(TStringView<wchar_t> *param_1)

{
  int iVar1;
  int iVar2;
  FLongPackagePathsSingleton *pFVar3;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  pFVar3 = FLongPackagePathsSingleton::Get();
  iVar2 = param_1->Size;
  local_28.DataPtr = (wchar_t *)(pFVar3->VerseSubPath).Data.AllocatorInstance.Data;
  iVar1 = (pFVar3->VerseSubPath).Data.ArrayNum;
  local_28.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_28.Size = 0;
  }
  local_18.Size = 0;
  if (0 < iVar2) {
    local_18.Size = iVar2;
  }
  local_18.DataPtr = param_1->DataPtr + ((longlong)iVar2 - (longlong)local_18.Size);
  iVar2 = UE::String::FindFirst(&local_18,&local_28,CaseSensitive);
  if (iVar2 == -1) {
    iVar2 = -1;
  }
  return iVar2 != -1;
}

// IteratePackagesInDirectory @ 141eab640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FPackageName::IteratePackagesInDirectory
          (FString *param_1,TFunctionRef<bool___cdecl(wchar_t_const_*)> *param_2)

{
  int iVar1;
  bool bVar2;
  IPackageResourceManager *pIVar3;
  undefined1 auStackY_6f8 [32];
  undefined1 local_6c8 [16];
  TStringView<wchar_t> local_6b8;
  undefined1 local_6a8 [16];
  TFunctionRef<bool___cdecl(wchar_t_const_*)> *local_698 [2];
  TStringView<wchar_t> local_688;
  TStringBuilderBase<wchar_t> local_678;
  FScriptContainerElement local_658 [512];
  TStringBuilderBase<wchar_t> local_458;
  wchar_t local_438 [256];
  TStringBuilderBase<wchar_t> local_238;
  undefined1 local_218 [512];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStackY_6f8;
  local_238.Base = (wchar_t *)local_218;
  local_238.bIsDynamic = false;
  local_238.bIsExternal = false;
  local_238.CurPos = (wchar_t *)local_218;
  local_458.bIsDynamic = false;
  local_458.bIsExternal = false;
  local_238.End = (wchar_t *)local_18;
  local_678.bIsDynamic = false;
  local_678.bIsExternal = false;
  local_458.Base = local_438;
  local_458.CurPos = local_438;
  local_458.End = (wchar_t *)&local_238;
  local_678.Base = (wchar_t *)local_658;
  local_678.CurPos = (wchar_t *)local_658;
  local_678.End = (wchar_t *)&local_458;
  local_6c8._0_8_ = (param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  local_6c8._8_4_ = iVar1 + -1;
  if (iVar1 == 0) {
    local_6c8._8_4_ = 0;
  }
  local_6c8._12_4_ = local_6b8._12_4_;
  local_6b8.DataPtr = (wchar_t *)local_6c8._0_8_;
  local_698[0] = param_2;
  local_6b8.Size = local_6c8._8_4_;
  bVar2 = TryGetMountPointForPath
                    ((TStringView<wchar_t> *)local_6c8,&local_238,&local_458,&local_678,
                     (EFlexNameType *)0x0,(EErrorCode *)0x0);
  if (bVar2) {
    pIVar3 = IPackageResourceManager::Get();
    local_6c8._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FPackageName::IteratePackagesInDirectory'::__l2::<lambda_1>,bool,FPackagePath_const_&>
         ::Call;
    local_6c8._8_8_ = local_698;
    local_6b8.Size = (int)((longlong)local_678.CurPos - (longlong)local_678.Base >> 1);
    local_6a8._8_4_ = (int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1);
    local_688.Size = (int)((longlong)local_458.CurPos - (longlong)local_458.Base >> 1);
    local_6b8.DataPtr = local_678.Base;
    local_6a8._0_8_ = local_238.Base;
    local_688.DataPtr = local_458.Base;
    IPackageResourceManager::IteratePackagesInPath
              (pIVar3,(TStringView<wchar_t> *)local_6a8,&local_688,&local_6b8,
               (TFunctionRef<bool___cdecl(FPackagePath_const_&)> *)local_6c8);
  }
  else {
    pIVar3 = IPackageResourceManager::Get();
    local_6a8._8_8_ = local_698;
    local_6a8._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FPackageName::IteratePackagesInDirectory'::__l2::<lambda_1>,bool,FPackagePath_const_&>
         ::Call;
    local_6c8._0_8_ = (param_1->Data).AllocatorInstance.Data;
    iVar1 = (param_1->Data).ArrayNum;
    local_6c8._8_4_ = iVar1 + -1;
    if (iVar1 == 0) {
      local_6c8._8_4_ = 0;
    }
    IPackageResourceManager::IteratePackagesInLocalOnlyDirectory
              (pIVar3,(TStringView<wchar_t> *)local_6c8,
               (TFunctionRef<bool___cdecl(FPackagePath_const_&)> *)local_6a8);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_678);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_458);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_238);
  return;
}

// IteratePackagesInDirectory @ 141eab8a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FPackageName::IteratePackagesInDirectory
          (FString *param_1,
          TFunctionRef<bool___cdecl(wchar_t_const_*,FFileStatData_const_&)> *param_2)

{
  int iVar1;
  bool bVar2;
  IPackageResourceManager *pIVar3;
  undefined1 auStackY_6f8 [32];
  undefined1 local_6c8 [16];
  TStringView<wchar_t> local_6b8;
  undefined1 local_6a8 [16];
  TFunctionRef<bool___cdecl(wchar_t_const_*,FFileStatData_const_&)> *local_698 [2];
  TStringView<wchar_t> local_688;
  TStringBuilderBase<wchar_t> local_678;
  FScriptContainerElement local_658 [512];
  TStringBuilderBase<wchar_t> local_458;
  wchar_t local_438 [256];
  TStringBuilderBase<wchar_t> local_238;
  undefined1 local_218 [512];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStackY_6f8;
  local_238.Base = (wchar_t *)local_218;
  local_238.bIsDynamic = false;
  local_238.bIsExternal = false;
  local_238.CurPos = (wchar_t *)local_218;
  local_458.bIsDynamic = false;
  local_458.bIsExternal = false;
  local_238.End = (wchar_t *)local_18;
  local_678.bIsDynamic = false;
  local_678.bIsExternal = false;
  local_458.Base = local_438;
  local_458.CurPos = local_438;
  local_458.End = (wchar_t *)&local_238;
  local_678.Base = (wchar_t *)local_658;
  local_678.CurPos = (wchar_t *)local_658;
  local_678.End = (wchar_t *)&local_458;
  local_6c8._0_8_ = (param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  local_6c8._8_4_ = iVar1 + -1;
  if (iVar1 == 0) {
    local_6c8._8_4_ = 0;
  }
  local_6c8._12_4_ = local_6b8._12_4_;
  local_6b8.DataPtr = (wchar_t *)local_6c8._0_8_;
  local_698[0] = param_2;
  local_6b8.Size = local_6c8._8_4_;
  bVar2 = TryGetMountPointForPath
                    ((TStringView<wchar_t> *)local_6c8,&local_238,&local_458,&local_678,
                     (EFlexNameType *)0x0,(EErrorCode *)0x0);
  if (bVar2) {
    pIVar3 = IPackageResourceManager::Get();
    local_6c8._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FPackageName::IteratePackagesInDirectory'::__l2::<lambda_1>,bool,FPackagePath_const_&,FFileStatData_const_&>
         ::Call;
    local_6c8._8_8_ = local_698;
    local_6b8.Size = (int)((longlong)local_678.CurPos - (longlong)local_678.Base >> 1);
    local_6a8._8_4_ = (int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1);
    local_688.Size = (int)((longlong)local_458.CurPos - (longlong)local_458.Base >> 1);
    local_6b8.DataPtr = local_678.Base;
    local_6a8._0_8_ = local_238.Base;
    local_688.DataPtr = local_458.Base;
    IPackageResourceManager::IteratePackagesStatInPath
              (pIVar3,(TStringView<wchar_t> *)local_6a8,&local_688,&local_6b8,
               (TFunctionRef<bool___cdecl(FPackagePath_const_&,FFileStatData_const_&)> *)local_6c8);
  }
  else {
    pIVar3 = IPackageResourceManager::Get();
    local_6a8._8_8_ = local_698;
    local_6a8._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FPackageName::IteratePackagesInDirectory'::__l2::<lambda_1>,bool,FPackagePath_const_&,FFileStatData_const_&>
         ::Call;
    local_6c8._0_8_ = (param_1->Data).AllocatorInstance.Data;
    iVar1 = (param_1->Data).ArrayNum;
    local_6c8._8_4_ = iVar1 + -1;
    if (iVar1 == 0) {
      local_6c8._8_4_ = 0;
    }
    IPackageResourceManager::IteratePackagesStatInLocalOnlyDirectory
              (pIVar3,(TStringView<wchar_t> *)local_6c8,
               (TFunctionRef<bool___cdecl(FPackagePath_const_&,FFileStatData_const_&)> *)local_6a8);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_678);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_458);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_238);
  return;
}

// LongPackageNameToFilename @ 141eacb90

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __cdecl
FPackageName::LongPackageNameToFilename
          (FString *__return_storage_ptr__,FString *param_1,FString *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  local_28.DataPtr = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  local_18.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  iVar1 = (param_1->Data).ArrayNum;
  local_28.Size = iVar3;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  local_18.Size = iVar3;
  bVar2 = TryConvertLongPackageNameToFilename(&local_18,__return_storage_ptr__,&local_28);
  if (!bVar2) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogPackageName);
  }
  return __return_storage_ptr__;
}

// LongPackagePathToVersePath @ 141eacc40

FVersePath * __cdecl
FPackageName::LongPackagePathToVersePath
          (FVersePath *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  IPluginManager *pIVar6;
  FVersePath *pFVar7;
  FString *pFVar8;
  bool local_res10 [8];
  FVersePath local_98;
  longlong *local_88;
  TReferenceControllerBase<1> *local_80;
  TStringView<wchar_t> local_78;
  FString local_68;
  FString local_58;
  TStringView<wchar_t> local_48;
  wchar_t *local_38;
  int local_30;
  int local_2c;
  TStringView<wchar_t> local_28;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_28.DataPtr = param_1->DataPtr;
  local_28.Size = param_1->Size;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_res10[0] = false;
  FPathViews::GetMountPointNameFromPath(&local_78,&local_28,local_res10,true);
  if ((local_78.Size == 0) || (local_res10[0] != false)) {
    (__return_storage_ptr__->PathString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->PathString).Data.ArrayNum = 0;
    (__return_storage_ptr__->PathString).Data.ArrayMax = 0;
  }
  else {
    pIVar6 = IPluginManager::Get();
    local_18 = local_78.DataPtr._0_4_;
    uStack_14 = local_78.DataPtr._4_4_;
    iStack_10 = local_78.Size;
    uStack_c = local_78._12_4_;
    (**(code **)((longlong)*pIVar6 + 0x70))(pIVar6,&local_88,&local_18);
    if (local_88 != (longlong *)0x0) {
      if ((local_88 == (longlong *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FVersePath *)(*pcVar2)();
        return pFVar7;
      }
      pFVar8 = (FString *)(**(code **)(*local_88 + 0x78))();
      if (1 < (pFVar8->Data).ArrayNum) {
        iVar1 = param_1->Size;
        local_98.PathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_98.PathString.Data.ArrayNum = 0;
        local_98.PathString.Data.ArrayMax = 0;
        if (iVar1 == local_78.Size + 1) {
          pFVar8 = ::FString::FString(&local_58,pFVar8);
          UE::Core::FVersePath::TryMake(&local_98,pFVar8,(FText *)0x0);
        }
        else {
          iVar5 = iVar1 - (local_78.Size + 1);
          iVar3 = iVar1;
          if (iVar5 < iVar1) {
            iVar3 = iVar5;
          }
          local_48.DataPtr = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
          iVar5 = (pFVar8->Data).ArrayNum;
          local_30 = 0;
          if (0 < iVar3) {
            local_30 = iVar3;
          }
          local_48.Size = iVar5 + -1;
          if (iVar5 == 0) {
            local_48.Size = 0;
          }
          local_38 = param_1->DataPtr + ((longlong)iVar1 - (longlong)local_30);
          local_2c = local_58.Data.ArrayMax;
          FPaths::CombineInternal(&local_68,&local_48,2);
          UE::Core::FVersePath::TryMake(&local_98,&local_68,(FText *)0x0);
          local_58.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        (__return_storage_ptr__->PathString).Data.AllocatorInstance.Data =
             local_98.PathString.Data.AllocatorInstance.Data;
        (__return_storage_ptr__->PathString).Data.ArrayNum = local_98.PathString.Data.ArrayNum;
        (__return_storage_ptr__->PathString).Data.ArrayMax = local_98.PathString.Data.ArrayMax;
        local_98.PathString.Data.ArrayNum = 0;
        local_98.PathString.Data.ArrayMax = 0;
        local_98.PathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_80);
        return __return_storage_ptr__;
      }
    }
    (__return_storage_ptr__->PathString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->PathString).Data.ArrayNum = 0;
    (__return_storage_ptr__->PathString).Data.ArrayMax = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
  }
  return __return_storage_ptr__;
}

// MountPointExists @ 141eadcb0

bool __cdecl FPackageName::MountPointExists(FString *param_1)

{
  int iVar1;
  bool bVar2;
  FLongPackagePathsSingleton *this;
  TStringView<wchar_t> local_18;
  
  this = FLongPackagePathsSingleton::Get();
  iVar1 = (param_1->Data).ArrayNum;
  local_18.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  local_18.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_18.Size = 0;
  }
  bVar2 = FLongPackagePathsSingleton::MountPointExists(this,&local_18);
  return bVar2;
}

// MountPointExists @ 141eadd00

bool __cdecl FPackageName::MountPointExists(wchar_t *param_1)

{
  bool bVar1;
  FLongPackagePathsSingleton *this;
  size_t sVar2;
  TStringView<wchar_t> local_18;
  
  this = FLongPackagePathsSingleton::Get();
  local_18.Size = 0;
  local_18.DataPtr = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar2 = wcslen(param_1);
    local_18.Size = (int)sVar2;
  }
  bVar1 = FLongPackagePathsSingleton::MountPointExists(this,&local_18);
  return bVar1;
}

// MountPointExists @ 141eadd60

bool __cdecl FPackageName::MountPointExists(TStringView<wchar_t> *param_1)

{
  bool bVar1;
  FLongPackagePathsSingleton *this;
  TStringView<wchar_t> local_18;
  
  this = FLongPackagePathsSingleton::Get();
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  bVar1 = FLongPackagePathsSingleton::MountPointExists(this,&local_18);
  return bVar1;
}

// ObjectPathAppend @ 141eae5b0

void __cdecl
FPackageName::ObjectPathAppend(TStringBuilderBase<wchar_t> *param_1,TStringView<wchar_t> *param_2)

{
  wchar_t *pwVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  int local_res8 [2];
  TStringView<wchar_t> *local_res10;
  wchar_t local_res18 [4];
  wchar_t local_res20 [4];
  TArrayView<wchar_t_const_,int> local_c8;
  TStringView<wchar_t> local_b8;
  wchar_t *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  TStringBuilderBase<wchar_t> *local_98;
  int *local_90;
  wchar_t *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  code *local_78;
  TStringBuilderBase<wchar_t> **local_70;
  TStringView<wchar_t> local_68;
  TArrayView<wchar_t_const_,int> local_58;
  TStringView<wchar_t> local_48;
  
  local_res10 = param_2;
  if ((int)((longlong)param_1->CurPos - (longlong)param_1->Base >> 1) == 0) {
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              (param_1,param_2->DataPtr,(int)*(undefined8 *)&param_2->Size);
    return;
  }
  if (param_2->Size != 0) {
    if ((param_2->Size < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0 && Index < Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                           ,0x234,
                           L"Index out of bounds on StringView: index %i on a view with a length of %i"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pwVar1 = param_2->DataPtr;
    pwVar9 = param_1->Base;
    if (*pwVar1 == L'/') {
      uVar2 = *(undefined8 *)&param_2->Size;
      param_1->CurPos = pwVar9;
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,pwVar1,(int)uVar2);
    }
    else {
      iVar7 = (int)((longlong)param_1->CurPos - (longlong)pwVar9 >> 1);
      local_c8.ArrayNum = iVar7;
      local_68.Size = iVar7;
      local_68._12_4_ = local_c8._12_4_;
      local_c8.DataPtr = pwVar9;
      local_68.DataPtr = pwVar9;
      iVar5 = UE::String::FindLastChar(&local_68,L'/',CaseSensitive);
      if (iVar5 == -1) {
        local_res8[0] = 2;
      }
      else {
        local_res8[0] = 0;
        iVar6 = (iVar7 - iVar5) + -1;
        iVar5 = iVar7;
        if (iVar6 < iVar7) {
          iVar5 = iVar6;
        }
        iVar6 = 0;
        if (0 < iVar5) {
          iVar6 = iVar5;
        }
        pwVar9 = pwVar9 + ((longlong)iVar7 - (longlong)iVar6);
        do {
          local_c8._12_4_ = local_b8._12_4_;
          local_c8.ArrayNum = iVar6;
          local_a8 = local_res18;
          uStack_a0 = 2;
          local_58._12_4_ = uStack_9c;
          local_58.ArrayNum = 2;
          local_res18[0] = L'.';
          local_res18[1] = L':';
          local_48.Size = iVar6;
          local_48._12_4_ = local_b8._12_4_;
          local_c8.DataPtr = pwVar9;
          local_58.DataPtr = local_a8;
          local_48.DataPtr = pwVar9;
          iVar5 = UE::String::FindFirstOfAnyChar(&local_48,&local_58,CaseSensitive,(int *)0x0);
          param_2 = local_res10;
          if (iVar5 == -1) break;
          iVar7 = (iVar6 - iVar5) + -1;
          iVar5 = iVar6;
          if (iVar7 < iVar6) {
            iVar5 = iVar7;
          }
          lVar8 = (longlong)iVar6;
          iVar6 = 0;
          if (0 < iVar5) {
            iVar6 = iVar5;
          }
          local_res8[0] = local_res8[0] + 1;
          pwVar9 = pwVar9 + (lVar8 - iVar6);
        } while (local_res8[0] < 2);
      }
      local_b8.DataPtr = param_2->DataPtr;
      local_b8.Size = param_2->Size;
      local_b8._12_4_ = *(undefined4 *)&param_2->field_0xc;
      local_90 = local_res8;
      uStack_80 = 2;
      local_70 = &local_98;
      local_res20[0] = L':';
      local_res20[1] = L'.';
      local_78 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FPackageName::ObjectPathAppend'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
                 ::Call;
      local_c8.DataPtr = local_res20;
      local_c8._12_4_ = uStack_7c;
      local_c8.ArrayNum = 2;
      local_98 = param_1;
      local_88 = local_c8.DataPtr;
      UE::String::ParseTokensMultiple
                (&local_b8,&local_c8,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)&local_78,
                 SkipEmpty);
    }
  }
  return;
}

// ObjectPathCombine @ 141eae800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
FPackageName::ObjectPathCombine
          (FString *__return_storage_ptr__,TStringView<wchar_t> *param_1,
          TStringView<wchar_t> *param_2)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  FString *pFVar3;
  ulong64 uVar4;
  int iVar5;
  undefined1 auStack_278 [32];
  TStringView<wchar_t> local_258;
  TStringBuilderBase<wchar_t> local_248;
  wchar_t local_228 [256];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_278;
  local_258.DataPtr._0_4_ = *(undefined4 *)&param_1->DataPtr;
  local_258.DataPtr._4_4_ = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  local_258.Size = param_1->Size;
  local_258._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_248.Base = local_228;
  local_248.End = (wchar_t *)local_28;
  iVar5 = (int)*(undefined8 *)&param_1->Size;
  uVar4 = (ulong64)iVar5;
  local_248.bIsDynamic = false;
  local_248.bIsExternal = false;
  local_248.CurPos = local_228;
  if (local_28 < local_228 + uVar4) {
    TStringBuilderBase<wchar_t>::Extend(&local_248,uVar4);
  }
  if (iVar5 != 0) {
    pvVar2 = FGenericPlatformString::Memcpy
                       (local_248.CurPos,
                        (void *)CONCAT44(local_258.DataPtr._4_4_,local_258.DataPtr._0_4_),uVar4 * 2)
    ;
    local_248.CurPos = (wchar_t *)((longlong)pvVar2 + uVar4 * 2);
  }
  local_258.DataPtr = param_2->DataPtr;
  local_258.Size = param_2->Size;
  local_258._12_4_ = *(undefined4 *)&param_2->field_0xc;
  ObjectPathAppend(&local_248,&local_258);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar3 = ::FString::ConstructFromPtrSize
                     ((FString *)&local_258,local_248.Base,
                      (int)((longlong)local_248.CurPos - (longlong)local_248.Base >> 1));
  if (__return_storage_ptr__ != pFVar3) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_258.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_258.DataPtr);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_248);
  return __return_storage_ptr__;
}

// ObjectPathSplitFirstName @ 141eae950

void __cdecl
FPackageName::ObjectPathSplitFirstName
          (TStringView<char> *param_1,TStringView<char> *param_2,TStringView<char> *param_3)

{
  int iVar1;
  uchar *puVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uchar local_res8 [8];
  TStringView<char8_t> local_38;
  initializer_list<char8_t> local_28 [2];
  
  local_28[0]._First = local_res8;
  local_38.Size = (int)*(undefined8 *)&param_1->Size;
  puVar2 = (uchar *)param_1->DataPtr;
  uVar3 = *(undefined8 *)&param_1->Size;
  iVar1 = (int)uVar3;
  local_28[0]._Last = local_res8 + 2;
  local_res8[0] = ':';
  local_res8[1] = '.';
  local_38.DataPtr = puVar2;
  iVar4 = UE::String::FindFirstOfAnyChar(&local_38,local_28,CaseSensitive,(int *)0x0);
  if (iVar4 < 0) {
    param_2->DataPtr = (char *)puVar2;
    *(undefined8 *)&param_2->Size = uVar3;
    param_3->DataPtr = (char *)0x0;
    param_3->Size = 0;
  }
  else {
    iVar6 = iVar1;
    if (iVar4 < iVar1) {
      iVar6 = iVar4;
    }
    iVar5 = 0;
    if (0 < iVar6) {
      iVar5 = iVar6;
    }
    local_28[0]._Last = (uchar *)CONCAT44(local_28[0]._Last._4_4_,iVar5);
    iVar6 = (iVar1 - iVar4) + -1;
    param_2->DataPtr = (char *)puVar2;
    *(uchar **)&param_2->Size = local_28[0]._Last;
    iVar4 = iVar1;
    if (iVar6 < iVar1) {
      iVar4 = iVar6;
    }
    iVar6 = 0;
    if (0 < iVar4) {
      iVar6 = iVar4;
    }
    local_28[0]._Last = (uchar *)CONCAT44(local_28[0]._Last._4_4_,iVar6);
    param_3->DataPtr = (char *)(puVar2 + ((longlong)iVar1 - (longlong)iVar6));
    *(uchar **)&param_3->Size = local_28[0]._Last;
  }
  return;
}

// ObjectPathSplitFirstName @ 141eaea60

void __cdecl
FPackageName::ObjectPathSplitFirstName
          (TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2,TStringView<wchar_t> *param_3
          )

{
  wchar_t *pwVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  wchar_t local_res8 [4];
  TArrayView<wchar_t_const_,int> local_38;
  TStringView<wchar_t> local_28 [2];
  
  local_38.ArrayNum = 2;
  local_38.DataPtr = local_res8;
  pwVar1 = param_1->DataPtr;
  uVar2._0_4_ = param_1->Size;
  uVar2._4_4_ = *(undefined4 *)&param_1->field_0xc;
  local_res8[0] = L':';
  local_res8[1] = L'.';
  local_28[0].DataPtr = pwVar1;
  local_28[0]._8_8_ = uVar2;
  iVar3 = UE::String::FindFirstOfAnyChar(local_28,&local_38,CaseSensitive,(int *)0x0);
  if (iVar3 < 0) {
    param_2->DataPtr = pwVar1;
    param_2->Size = (int)uVar2;
    *(undefined4 *)&param_2->field_0xc = uVar2._4_4_;
    param_3->DataPtr = (wchar_t *)0x0;
    param_3->Size = 0;
  }
  else {
    iVar5 = (int)uVar2;
    if (iVar3 < (int)uVar2) {
      iVar5 = iVar3;
    }
    iVar4 = 0;
    if (0 < iVar5) {
      iVar4 = iVar5;
    }
    iVar5 = ((int)uVar2 - iVar3) + -1;
    param_2->DataPtr = pwVar1;
    param_2->Size = iVar4;
    *(undefined4 *)&param_2->field_0xc = local_38._12_4_;
    iVar3 = (int)uVar2;
    if (iVar5 < (int)uVar2) {
      iVar3 = iVar5;
    }
    iVar5 = 0;
    if (0 < iVar3) {
      iVar5 = iVar3;
    }
    param_3->DataPtr = pwVar1 + ((longlong)(int)uVar2 - (longlong)iVar5);
    param_3->Size = iVar5;
    *(undefined4 *)&param_3->field_0xc = local_38._12_4_;
  }
  return;
}

// ObjectPathToObjectName @ 141eaeb60

TStringView<char> * __cdecl
FPackageName::ObjectPathToObjectName
          (TStringView<char> *__return_storage_ptr__,TStringView<char> *param_1)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  
  pcVar3 = param_1->DataPtr;
  pcVar7 = pcVar3 + (int)*(undefined8 *)&param_1->Size;
  do {
    if (pcVar3 == pcVar7) {
      iVar8 = param_1->Size;
      uVar5 = *(undefined4 *)&param_1->field_0xc;
      __return_storage_ptr__->DataPtr = param_1->DataPtr;
      __return_storage_ptr__->Size = iVar8;
      *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar5;
      return __return_storage_ptr__;
    }
    pcVar1 = pcVar7 + -1;
    pcVar7 = pcVar7 + -1;
  } while ((*pcVar1 != ':') && (*pcVar1 != '.'));
  iVar6 = (int)pcVar7 - *(int *)&param_1->DataPtr;
  iVar2 = param_1->Size;
  iVar8 = iVar6 + 1;
  iVar4 = 0x7fffffff;
  if (iVar8 < 0) {
    iVar8 = 0;
    iVar4 = iVar6 + -0x80000000;
  }
  if (iVar2 < iVar8) {
    iVar8 = iVar2;
  }
  iVar6 = iVar2 - iVar8;
  if (iVar4 < iVar2 - iVar8) {
    iVar6 = iVar4;
  }
  __return_storage_ptr__->DataPtr = pcVar3 + iVar8;
  iVar8 = 0;
  if (0 < iVar6) {
    iVar8 = iVar6;
  }
  __return_storage_ptr__->Size = iVar8;
  return __return_storage_ptr__;
}

// ObjectPathToObjectName @ 141eaebf0

TStringView<wchar_t> * __cdecl
FPackageName::ObjectPathToObjectName
          (TStringView<wchar_t> *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  wchar_t *pwVar6;
  int iVar7;
  int iVar8;
  
  pwVar2 = param_1->DataPtr;
  pwVar6 = pwVar2 + (int)*(undefined8 *)&param_1->Size;
  do {
    if (pwVar2 == pwVar6) {
      iVar7 = param_1->Size;
      uVar5 = *(undefined4 *)&param_1->field_0xc;
      __return_storage_ptr__->DataPtr = param_1->DataPtr;
      __return_storage_ptr__->Size = iVar7;
      *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar5;
      return __return_storage_ptr__;
    }
    pwVar1 = pwVar6 + -1;
    pwVar6 = pwVar6 + -1;
  } while ((*pwVar1 != L':') && (*pwVar1 != L'.'));
  iVar7 = param_1->Size;
  iVar3 = (int)((longlong)pwVar6 - (longlong)pwVar2 >> 1);
  iVar8 = iVar3 + 1;
  iVar4 = 0x7fffffff;
  if (iVar8 < 0) {
    iVar8 = 0;
    iVar4 = iVar3 + -0x80000000;
  }
  if (iVar7 < iVar8) {
    iVar8 = iVar7;
  }
  iVar3 = iVar7 - iVar8;
  if (iVar4 < iVar7 - iVar8) {
    iVar3 = iVar4;
  }
  __return_storage_ptr__->DataPtr = pwVar2 + iVar8;
  iVar7 = 0;
  if (0 < iVar3) {
    iVar7 = iVar3;
  }
  __return_storage_ptr__->Size = iVar7;
  return __return_storage_ptr__;
}

// ObjectPathToObjectName @ 141eaec90

FString * __cdecl
FPackageName::ObjectPathToObjectName(FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  iVar2 = (param_1->Data).ArrayNum;
  pFVar3 = (param_1->Data).AllocatorInstance.Data;
  iVar4 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar4 = 0;
  }
  pFVar5 = pFVar3 + (longlong)iVar4 * 2;
  do {
    if (pFVar3 == pFVar5) {
      ::FString::FString(__return_storage_ptr__,param_1);
      return __return_storage_ptr__;
    }
    pFVar1 = pFVar5 + -2;
    pFVar5 = pFVar5 + -2;
  } while ((*(short *)pFVar1 != 0x3a) && (*(short *)pFVar1 != 0x2e));
  ::FString::RightChop
            (param_1,__return_storage_ptr__,(int)((longlong)pFVar5 - (longlong)pFVar3 >> 1) + 1);
  return __return_storage_ptr__;
}

// ObjectPathToOuterPath @ 141eaed10

TStringView<char> * __cdecl
FPackageName::ObjectPathToOuterPath
          (TStringView<char> *__return_storage_ptr__,TStringView<char> *param_1)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  
  pcVar3 = param_1->DataPtr;
  pcVar5 = pcVar3 + (int)*(undefined8 *)&param_1->Size;
  do {
    if (pcVar3 == pcVar5) goto LAB_141eaed3a;
    pcVar1 = pcVar5 + -1;
    pcVar5 = pcVar5 + -1;
  } while ((*pcVar1 != ':') && (*pcVar1 != '.'));
  if (pcVar5 != (char *)0x0) {
    iVar4 = (int)pcVar5 - *(int *)&param_1->DataPtr;
    iVar2 = param_1->Size;
    __return_storage_ptr__->DataPtr = pcVar3;
    if (iVar4 < iVar2) {
      iVar2 = iVar4;
    }
    iVar4 = 0;
    if (0 < iVar2) {
      iVar4 = iVar2;
    }
    __return_storage_ptr__->Size = iVar4;
    return __return_storage_ptr__;
  }
LAB_141eaed3a:
  *(undefined8 *)&__return_storage_ptr__->Size = 0;
  __return_storage_ptr__->DataPtr = (char *)0x0;
  __return_storage_ptr__->Size = 0;
  return __return_storage_ptr__;
}

// ObjectPathToOuterPath @ 141eaed80

TStringView<wchar_t> * __cdecl
FPackageName::ObjectPathToOuterPath
          (TStringView<wchar_t> *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  int iVar3;
  wchar_t *pwVar4;
  int iVar5;
  
  pwVar2 = param_1->DataPtr;
  pwVar4 = pwVar2 + (int)*(undefined8 *)&param_1->Size;
  do {
    if (pwVar2 == pwVar4) goto LAB_141eaedb9;
    pwVar1 = pwVar4 + -1;
    pwVar4 = pwVar4 + -1;
  } while ((*pwVar1 != L':') && (*pwVar1 != L'.'));
  if (pwVar4 != (wchar_t *)0x0) {
    iVar5 = param_1->Size;
    iVar3 = (int)((longlong)pwVar4 - (longlong)pwVar2 >> 1);
    __return_storage_ptr__->DataPtr = pwVar2;
    if (iVar3 < iVar5) {
      iVar5 = iVar3;
    }
    iVar3 = 0;
    if (0 < iVar5) {
      iVar3 = iVar5;
    }
    __return_storage_ptr__->Size = iVar3;
    return __return_storage_ptr__;
  }
LAB_141eaedb9:
  *(undefined8 *)&__return_storage_ptr__->Size = 0;
  __return_storage_ptr__->DataPtr = (wchar_t *)0x0;
  __return_storage_ptr__->Size = 0;
  return __return_storage_ptr__;
}

// ObjectPathToOuterPath @ 141eaee00

FString * __cdecl
FPackageName::ObjectPathToOuterPath(FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  pFVar3 = (param_1->Data).AllocatorInstance.Data;
  iVar2 = (param_1->Data).ArrayNum;
  iVar5 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar5 = 0;
  }
  pFVar6 = pFVar3 + (longlong)iVar5 * 2;
  do {
    if (pFVar3 == pFVar6) {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      return __return_storage_ptr__;
    }
    pFVar1 = pFVar6 + -2;
    pFVar6 = pFVar6 + -2;
  } while ((*(short *)pFVar1 != 0x3a) && (*(short *)pFVar1 != 0x2e));
  iVar4 = (int)((longlong)pFVar6 - (longlong)pFVar3 >> 1);
  if (iVar4 < iVar5) {
    iVar5 = iVar4;
  }
  iVar4 = 0;
  if (0 < iVar5) {
    iVar4 = iVar5;
  }
  pFVar6 = (FScriptContainerElement *)L"";
  if (iVar2 != 0) {
    pFVar6 = pFVar3;
  }
  ::FString::ConstructFromPtrSize(__return_storage_ptr__,(wchar_t *)pFVar6,iVar4);
  return __return_storage_ptr__;
}

// ObjectPathToPackageName @ 141eaeea0

TStringView<char> * __cdecl
FPackageName::ObjectPathToPackageName
          (TStringView<char> *__return_storage_ptr__,TStringView<char> *param_1)

{
  int iVar1;
  uchar *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  TStringView<char8_t> local_18;
  
  puVar2 = (uchar *)param_1->DataPtr;
  local_18.Size = (int)*(undefined8 *)&param_1->Size;
  local_18.DataPtr = puVar2;
  iVar5 = UE::String::FindFirstChar(&local_18,'.',CaseSensitive);
  if (iVar5 != -1) {
    iVar1 = param_1->Size;
    iVar6 = 0;
    if (iVar1 < 0) {
      iVar6 = iVar1;
    }
    iVar3 = iVar1 - iVar6;
    if (iVar5 < iVar1 - iVar6) {
      iVar3 = iVar5;
    }
    __return_storage_ptr__->DataPtr = (char *)(puVar2 + iVar6);
    iVar5 = 0;
    if (0 < iVar3) {
      iVar5 = iVar3;
    }
    __return_storage_ptr__->Size = iVar5;
    return __return_storage_ptr__;
  }
  iVar5 = param_1->Size;
  uVar4 = *(undefined4 *)&param_1->field_0xc;
  __return_storage_ptr__->DataPtr = param_1->DataPtr;
  __return_storage_ptr__->Size = iVar5;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar4;
  return __return_storage_ptr__;
}

// ObjectPathToPackageName @ 141eaef50

TStringView<wchar_t> * __cdecl
FPackageName::ObjectPathToPackageName
          (TStringView<wchar_t> *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  iVar5 = UE::String::FindFirstChar(&local_18,L'.',CaseSensitive);
  if (iVar5 != -1) {
    iVar1 = param_1->Size;
    iVar6 = 0;
    if (iVar1 < 0) {
      iVar6 = iVar1;
    }
    iVar3 = iVar1 - iVar6;
    if (iVar5 < iVar1 - iVar6) {
      iVar3 = iVar5;
    }
    pwVar2 = param_1->DataPtr;
    iVar5 = 0;
    if (0 < iVar3) {
      iVar5 = iVar3;
    }
    __return_storage_ptr__->Size = iVar5;
    __return_storage_ptr__->DataPtr = pwVar2 + iVar6;
    return __return_storage_ptr__;
  }
  iVar5 = param_1->Size;
  uVar4 = *(undefined4 *)&param_1->field_0xc;
  __return_storage_ptr__->DataPtr = param_1->DataPtr;
  __return_storage_ptr__->Size = iVar5;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar4;
  return __return_storage_ptr__;
}

// ObjectPathToPackageName @ 141eaefe0

FString * __cdecl
FPackageName::ObjectPathToPackageName(FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  pFVar3 = pFVar1;
  do {
    if (pFVar3 == pFVar1 + (longlong)(param_1->Data).ArrayNum * 2) {
LAB_141eaf010:
      ::FString::FString(__return_storage_ptr__,param_1);
      return __return_storage_ptr__;
    }
    if (*(short *)pFVar3 == 0x2e) {
      iVar2 = (int)((longlong)pFVar3 - (longlong)pFVar1 >> 1);
      if (iVar2 != -1) {
        ::FString::Mid(param_1,__return_storage_ptr__,0,iVar2);
        return __return_storage_ptr__;
      }
      goto LAB_141eaf010;
    }
    pFVar3 = pFVar3 + 2;
  } while( true );
}

// ObjectPathToPathWithinPackage @ 141eaf050

TStringView<char> * __cdecl
FPackageName::ObjectPathToPathWithinPackage
          (TStringView<char> *__return_storage_ptr__,TStringView<char> *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uchar *puVar5;
  int iVar6;
  TStringView<char8_t> local_18;
  
  puVar5 = (uchar *)param_1->DataPtr;
  local_18.Size = (int)*(undefined8 *)&param_1->Size;
  local_18.DataPtr = puVar5;
  iVar3 = UE::String::FindFirstChar(&local_18,'.',CaseSensitive);
  if (iVar3 == -1) {
    iVar3 = 0;
    *(undefined4 *)&__return_storage_ptr__->field_0xc = 0;
    puVar5 = (uchar *)0x0;
  }
  else {
    iVar1 = param_1->Size;
    iVar6 = iVar3 + 1;
    iVar4 = 0x7fffffff;
    if (iVar6 < 0) {
      iVar4 = iVar3 + -0x80000000;
    }
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    if (iVar1 < iVar6) {
      iVar6 = iVar1;
    }
    iVar2 = iVar1 - iVar6;
    if (iVar4 < iVar1 - iVar6) {
      iVar2 = iVar4;
    }
    iVar3 = 0;
    if (0 < iVar2) {
      iVar3 = iVar2;
    }
    puVar5 = puVar5 + iVar6;
  }
  __return_storage_ptr__->DataPtr = (char *)puVar5;
  __return_storage_ptr__->Size = iVar3;
  return __return_storage_ptr__;
}

// ObjectPathToPathWithinPackage @ 141eaf100

TStringView<wchar_t> * __cdecl
FPackageName::ObjectPathToPathWithinPackage
          (TStringView<wchar_t> *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  int iVar6;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  iVar3 = UE::String::FindFirstChar(&local_18,L'.',CaseSensitive);
  if (iVar3 == -1) {
    pwVar5 = (wchar_t *)0x0;
    iVar3 = 0;
    *(undefined4 *)&__return_storage_ptr__->field_0xc = 0;
  }
  else {
    iVar1 = param_1->Size;
    iVar6 = iVar3 + 1;
    iVar4 = 0x7fffffff;
    if (iVar6 < 0) {
      iVar4 = iVar3 + -0x80000000;
    }
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    if (iVar1 < iVar6) {
      iVar6 = iVar1;
    }
    iVar2 = iVar1 - iVar6;
    if (iVar4 < iVar1 - iVar6) {
      iVar2 = iVar4;
    }
    iVar3 = 0;
    if (0 < iVar2) {
      iVar3 = iVar2;
    }
    pwVar5 = param_1->DataPtr + iVar6;
  }
  __return_storage_ptr__->DataPtr = pwVar5;
  __return_storage_ptr__->Size = iVar3;
  return __return_storage_ptr__;
}

// ObjectPathToPathWithinPackage @ 141eaf1a0

FString * __cdecl
FPackageName::ObjectPathToPathWithinPackage(FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  pFVar3 = pFVar1;
  do {
    if (pFVar3 == pFVar1 + (longlong)(param_1->Data).ArrayNum * 2) {
LAB_141eaf1d0:
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      return __return_storage_ptr__;
    }
    if (*(short *)pFVar3 == 0x2e) {
      iVar2 = (int)((longlong)pFVar3 - (longlong)pFVar1 >> 1);
      if (iVar2 != -1) {
        ::FString::RightChop(param_1,__return_storage_ptr__,iVar2 + 1);
        return __return_storage_ptr__;
      }
      goto LAB_141eaf1d0;
    }
    pFVar3 = pFVar3 + 2;
  } while( true );
}

// ObjectPathToSubObjectPath @ 141eaf210

TStringView<char> * __cdecl
FPackageName::ObjectPathToSubObjectPath
          (TStringView<char> *__return_storage_ptr__,TStringView<char> *param_1)

{
  int iVar1;
  uchar *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  TStringView<char8_t> local_18;
  
  puVar2 = (uchar *)param_1->DataPtr;
  local_18.DataPtr = puVar2;
  local_18.Size = (int)*(undefined8 *)&param_1->Size;
  iVar4 = UE::String::FindFirstChar(&local_18,':',CaseSensitive);
  if (iVar4 == -1) {
    local_18.Size = (int)*(undefined8 *)&param_1->Size;
    local_18.DataPtr = puVar2;
    iVar4 = UE::String::FindFirstChar(&local_18,'.',CaseSensitive);
    if (iVar4 == -1) {
      iVar4 = param_1->Size;
      uVar3 = *(undefined4 *)&param_1->field_0xc;
      __return_storage_ptr__->DataPtr = param_1->DataPtr;
      __return_storage_ptr__->Size = iVar4;
      *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar3;
      return __return_storage_ptr__;
    }
  }
  iVar1 = param_1->Size;
  iVar5 = iVar4 + 1;
  iVar6 = 0x7fffffff;
  if (iVar5 < 0) {
    iVar6 = iVar4 + -0x80000000;
  }
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  if (iVar1 < iVar5) {
    iVar5 = iVar1;
  }
  iVar4 = iVar1 - iVar5;
  if (iVar6 < iVar1 - iVar5) {
    iVar4 = iVar6;
  }
  __return_storage_ptr__->DataPtr = (char *)(puVar2 + iVar5);
  iVar5 = 0;
  if (0 < iVar4) {
    iVar5 = iVar4;
  }
  __return_storage_ptr__->Size = iVar5;
  return __return_storage_ptr__;
}

// ObjectPathToSubObjectPath @ 141eaf300

TStringView<wchar_t> * __cdecl
FPackageName::ObjectPathToSubObjectPath
          (TStringView<wchar_t> *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  iVar3 = UE::String::FindFirstChar(&local_18,L':',CaseSensitive);
  if (iVar3 != -1) {
    iVar1 = param_1->Size;
    iVar4 = iVar3 + 1;
    iVar5 = 0x7fffffff;
    if (iVar4 < 0) {
      iVar5 = iVar3 + -0x80000000;
    }
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    if (iVar1 < iVar4) {
      iVar4 = iVar1;
    }
    iVar3 = iVar1 - iVar4;
    if (iVar5 < iVar1 - iVar4) {
      iVar3 = iVar5;
    }
    __return_storage_ptr__->DataPtr = param_1->DataPtr + iVar4;
    iVar4 = 0;
    if (0 < iVar3) {
      iVar4 = iVar3;
    }
    __return_storage_ptr__->Size = iVar4;
    return __return_storage_ptr__;
  }
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  iVar3 = UE::String::FindFirstChar(&local_18,L'.',CaseSensitive);
  if (iVar3 != -1) {
    iVar1 = param_1->Size;
    iVar4 = iVar3 + 1;
    iVar5 = 0x7fffffff;
    if (iVar4 < 0) {
      iVar5 = iVar3 + -0x80000000;
    }
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    if (iVar1 < iVar4) {
      iVar4 = iVar1;
    }
    iVar3 = iVar1 - iVar4;
    if (iVar5 < iVar1 - iVar4) {
      iVar3 = iVar5;
    }
    __return_storage_ptr__->DataPtr = param_1->DataPtr + iVar4;
    iVar4 = 0;
    if (0 < iVar3) {
      iVar4 = iVar3;
    }
    __return_storage_ptr__->Size = iVar4;
    return __return_storage_ptr__;
  }
  iVar3 = param_1->Size;
  uVar2 = *(undefined4 *)&param_1->field_0xc;
  __return_storage_ptr__->DataPtr = param_1->DataPtr;
  __return_storage_ptr__->Size = iVar3;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar2;
  return __return_storage_ptr__;
}

// ObjectPathToSubObjectPath @ 141eaf420

FString * __cdecl
FPackageName::ObjectPathToSubObjectPath(FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(param_1->Data).ArrayNum * 2;
  pFVar5 = pFVar2;
  pFVar4 = pFVar2;
  if (pFVar2 == pFVar1) {
LAB_141eaf479:
    if (pFVar2 == pFVar1) goto LAB_141eaf491;
  }
  else {
    do {
      if (*(short *)pFVar5 == 0x3a) {
        iVar3 = (int)((longlong)pFVar5 - (longlong)pFVar2 >> 1);
        if (iVar3 != -1) {
          ::FString::RightChop(param_1,__return_storage_ptr__,iVar3 + 1);
          return __return_storage_ptr__;
        }
        goto LAB_141eaf479;
      }
      pFVar5 = pFVar5 + 2;
    } while (pFVar5 != pFVar1);
  }
  do {
    if (*(short *)pFVar4 == 0x2e) {
      iVar3 = (int)((longlong)pFVar4 - (longlong)pFVar2 >> 1);
      if (iVar3 != -1) {
        ::FString::RightChop(param_1,__return_storage_ptr__,iVar3 + 1);
        return __return_storage_ptr__;
      }
      break;
    }
    pFVar4 = pFVar4 + 2;
  } while (pFVar4 != pFVar1);
LAB_141eaf491:
  ::FString::FString(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// OnCoreUObjectInitialized @ 141eaf700

void __cdecl FPackageName::OnCoreUObjectInitialized(void)

{
  FLongPackagePathsSingleton *this;
  
  this = FLongPackagePathsSingleton::Get();
  FLongPackagePathsSingleton::OnCoreUObjectInitialized(this);
  return;
}

// ParseExportTextPath @ 141eaf920

bool __cdecl FPackageName::ParseExportTextPath(FString *param_1,FString *param_2,FString *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FString *pFVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  FString FStack_28;
  FString FStack_18;
  
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  iVar11 = (param_1->Data).ArrayNum;
  pFVar8 = pFVar1;
  while( true ) {
    if (pFVar8 == pFVar1 + (longlong)iVar11 * 2) {
      return false;
    }
    if (*(short *)pFVar8 == 0x27) break;
    pFVar8 = pFVar8 + 2;
  }
  iVar9 = (int)((longlong)pFVar8 - (longlong)pFVar1 >> 1);
  if (iVar9 == -1) {
    return false;
  }
  if (iVar9 + 1 < 0) {
    return false;
  }
  if (iVar11 == 0) {
    return false;
  }
  if (iVar11 + -1 <= iVar9 + 1) {
    return false;
  }
  iVar10 = iVar11 + -2;
  if (((iVar10 < 0) || (iVar11 + -1 <= iVar10)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x113,
                         L"String index out of bounds: Index %i from a string with a length of %i"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (*(short *)(pFVar1 + (longlong)iVar10 * 2) != 0x27) {
    return false;
  }
  iVar11 = 0;
  if (param_2 != (FString *)0x0) {
    iVar10 = (param_1->Data).ArrayNum;
    iVar6 = iVar10 + -1;
    if (iVar10 == 0) {
      iVar6 = iVar11;
    }
    if (iVar9 < iVar6) {
      iVar6 = iVar9;
    }
    iVar3 = iVar11;
    if (0 < iVar6) {
      iVar3 = iVar6;
    }
    pFVar8 = (FScriptContainerElement *)L"";
    if (iVar10 != 0) {
      pFVar8 = pFVar1;
    }
    ::FString::ConstructFromPtrSize(&FStack_28,(wchar_t *)pFVar8,iVar3);
    if (param_2 != &FStack_28) {
      pFVar1 = (param_2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_2->Data).AllocatorInstance.Data = FStack_28.Data.AllocatorInstance.Data;
      (param_2->Data).ArrayNum = FStack_28.Data.ArrayNum;
      (param_2->Data).ArrayMax = FStack_28.Data.ArrayMax;
      FStack_28.Data.ArrayNum = 0;
      FStack_28.Data.ArrayMax = 0;
      FStack_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
    }
  }
  if (param_3 != (FString *)0x0) {
    iVar10 = (param_1->Data).ArrayNum;
    iVar6 = iVar10 + -1;
    if (iVar10 == 0) {
      iVar6 = iVar11;
    }
    pFVar7 = ::FString::Mid(param_1,&FStack_18,iVar9 + 1,(iVar6 - iVar9) + -2);
    ::FString::operator=(param_3,pFVar7);
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
  }
  return true;
}

// ParseExportTextPath @ 141eaf930

bool __cdecl
FPackageName::ParseExportTextPath
          (wchar_t *param_1,TStringView<wchar_t> *param_2,TStringView<wchar_t> *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  size_t sVar7;
  int iVar8;
  int iVar9;
  undefined4 uStack_2c;
  TStringView<wchar_t> local_28;
  
  iVar8 = 0;
  if (param_1 != (wchar_t *)0x0) {
    sVar7 = wcslen(param_1);
    iVar8 = (int)sVar7;
  }
  local_28._12_4_ = uStack_2c;
  local_28.Size = iVar8;
  local_28.DataPtr = param_1;
  iVar4 = UE::String::FindFirstChar(&local_28,L'\'',CaseSensitive);
  if (((iVar4 != -1) && (iVar9 = iVar4 + 1, -1 < iVar9)) && (iVar9 < iVar8)) {
    if (((iVar8 + -1 < 0) || (iVar8 <= iVar8 + -1)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0 && Index < Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                           ,0x234,
                           L"Index out of bounds on StringView: index %i on a view with a length of %i"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if (param_1[(longlong)iVar8 + -1] == L'\'') {
      if (param_2 != (TStringView<wchar_t> *)0x0) {
        iVar6 = iVar8;
        if (iVar4 < iVar8) {
          iVar6 = iVar4;
        }
        iVar5 = 0;
        if (0 < iVar6) {
          iVar5 = iVar6;
        }
        param_2->DataPtr = param_1;
        *(ulonglong *)&param_2->Size = CONCAT44(uStack_2c,iVar5);
      }
      if (param_3 != (TStringView<wchar_t> *)0x0) {
        iVar6 = (iVar8 - iVar4) + -2;
        iVar4 = iVar8 - iVar9;
        if (iVar6 < iVar8 - iVar9) {
          iVar4 = iVar6;
        }
        iVar8 = 0;
        if (0 < iVar4) {
          iVar8 = iVar4;
        }
        param_3->DataPtr = param_1 + iVar9;
        *(ulonglong *)&param_3->Size = CONCAT44(uStack_2c,iVar8);
      }
      return true;
    }
  }
  return false;
}

// ParseExportTextPath @ 141eafa80

bool __cdecl
FPackageName::ParseExportTextPath
          (TStringView<char> *param_1,TStringView<char> *param_2,TStringView<char> *param_3)

{
  char *pcVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uStack_3c;
  TStringView<char8_t> local_38;
  char *local_28;
  undefined8 uStack_20;
  
  local_28 = param_1->DataPtr;
  uStack_20 = *(undefined8 *)&param_1->Size;
  local_38.DataPtr = (uchar *)param_1->DataPtr;
  local_38._12_4_ = uStack_3c;
  local_38.Size = (int)*(undefined8 *)&param_1->Size;
  iVar5 = UE::String::FindFirstChar(&local_38,'\'',CaseSensitive);
  if ((iVar5 != -1) && (iVar8 = iVar5 + 1, -1 < iVar8)) {
    iVar7 = param_1->Size;
    if (iVar8 < iVar7) {
      if (((iVar7 + -1 < 0) || (iVar7 <= iVar7 + -1)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0 && Index < Size",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                             ,0x234,
                             L"Index out of bounds on StringView: index %i on a view with a length of %i"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pcVar1 = param_1->DataPtr;
      if (pcVar1[(longlong)iVar7 + -1] == '\'') {
        if (param_2 != (TStringView<char> *)0x0) {
          iVar7 = param_1->Size;
          if (iVar5 < param_1->Size) {
            iVar7 = iVar5;
          }
          iVar6 = 0;
          if (0 < iVar7) {
            iVar6 = iVar7;
          }
          param_2->DataPtr = pcVar1;
          *(ulonglong *)&param_2->Size = CONCAT44(uStack_3c,iVar6);
        }
        if (param_3 != (TStringView<char> *)0x0) {
          iVar7 = param_1->Size;
          iVar5 = (iVar7 - iVar5) + -2;
          if (iVar7 < iVar8) {
            iVar8 = iVar7;
          }
          iVar6 = iVar7 - iVar8;
          if (iVar5 < iVar7 - iVar8) {
            iVar6 = iVar5;
          }
          iVar5 = 0;
          if (0 < iVar6) {
            iVar5 = iVar6;
          }
          param_3->DataPtr = pcVar1 + iVar8;
          *(ulonglong *)&param_3->Size = CONCAT44(uStack_3c,iVar5);
        }
        return true;
      }
    }
  }
  return false;
}

// ParseExportTextPath @ 141eafbd0

bool __cdecl
FPackageName::ParseExportTextPath
          (TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2,TStringView<wchar_t> *param_3
          )

{
  int iVar1;
  int iVar2;
  int iVar3;
  wchar_t *pwVar4;
  int iVar5;
  int iVar6;
  TStringView<wchar_t> local_28;
  
  local_28.DataPtr = param_1->DataPtr;
  local_28.Size = param_1->Size;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  iVar1 = UE::String::FindFirstChar(&local_28,L'\'',CaseSensitive);
  if ((((iVar1 != -1) && (iVar6 = iVar1 + 1, -1 < iVar6)) && (iVar5 = param_1->Size, iVar6 < iVar5))
     && (pwVar4 = TStringView<wchar_t>::operator[](param_1,iVar5 + -1), *pwVar4 == L'\'')) {
    if (param_2 != (TStringView<wchar_t> *)0x0) {
      iVar3 = iVar5;
      if (iVar1 < iVar5) {
        iVar3 = iVar1;
      }
      iVar2 = 0;
      if (0 < iVar3) {
        iVar2 = iVar3;
      }
      local_28.Size = iVar2;
      param_2->DataPtr = param_1->DataPtr;
      param_2->Size = iVar2;
      *(undefined4 *)&param_2->field_0xc = local_28._12_4_;
    }
    if (param_3 != (TStringView<wchar_t> *)0x0) {
      iVar3 = (iVar5 - iVar1) + -2;
      iVar1 = iVar5 - iVar6;
      if (iVar3 < iVar5 - iVar6) {
        iVar1 = iVar3;
      }
      iVar5 = 0;
      if (0 < iVar1) {
        iVar5 = iVar1;
      }
      param_3->DataPtr = param_1->DataPtr + iVar6;
      param_3->Size = iVar5;
      *(undefined4 *)&param_3->field_0xc = local_28._12_4_;
    }
    return true;
  }
  return false;
}

// QueryMountPointLocalAbsPaths @ 141eb0480

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
FPackageName::QueryMountPointLocalAbsPaths
          (TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FLongPackagePathsSingleton *SRWLock;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  undefined1 local_res8 [8];
  
  SRWLock = FLongPackagePathsSingleton::Get();
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  if (SRWLock == (FLongPackagePathsSingleton *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
      return pTVar9;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  uVar12 = (SRWLock->MountPoints).ArrayNum + 1;
  if (-1 < (int)uVar12) {
    if (*piVar1 < (int)uVar12) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar12,&__return_storage_ptr__->AllocatorInstance,
                 __return_storage_ptr__->ArrayNum,piVar1);
    }
    pFVar10 = (SRWLock->MountPoints).AllocatorInstance.Data;
    iVar3 = (SRWLock->MountPoints).ArrayNum;
    pFVar2 = pFVar10 + (longlong)iVar3 * 8;
    while( true ) {
      if ((SRWLock->MountPoints).ArrayNum != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TUniquePtr<FMountPoint,TDefaultDelete<FMountPoint>_>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar10 == pFVar2) break;
      lVar4 = *(longlong *)pFVar10;
      if (((*(byte *)(lVar4 + 0x30) & 4) == 0) &&
         (pFVar11 = (FScriptContainerElement *)(lVar4 + 0x20), 1 < *(int *)(lVar4 + 0x28))) {
        pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
        if ((pFVar5 <= pFVar11) && (pFVar11 < pFVar5 + (longlong)*piVar1 * 0x10)) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            pTVar9 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar9;
          }
        }
        iVar8 = __return_storage_ptr__->ArrayNum;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
        }
        __return_storage_ptr__->ArrayNum = iVar8 + 1;
        ::FString::FString((FString *)
                           ((__return_storage_ptr__->AllocatorInstance).Data +
                           (longlong)iVar8 * 0x10),(FString *)pFVar11);
      }
      pFVar10 = pFVar10 + 8;
    }
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
}

// QueryRootContentPaths @ 141eb0660

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FPackageName::QueryRootContentPaths
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,bool param_2,bool param_3,
          bool param_4)

{
  int *piVar1;
  FString *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  FLongPackagePathsSingleton *SRWLock;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  int *piVar12;
  char cVar13;
  uint uVar14;
  undefined1 local_res10 [8];
  char local_res18;
  char local_res20;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46 [14];
  
  local_res18 = param_3;
  local_res20 = param_4;
  SRWLock = FLongPackagePathsSingleton::Get();
  if ((SRWLock == (FLongPackagePathsSingleton *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x1c,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  uVar14 = (SRWLock->MountPoints).ArrayNum + (uint)param_2;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  piVar1 = &param_1->ArrayMax;
  if (*piVar1 < (int)uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar14,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  pFVar11 = (SRWLock->MountPoints).AllocatorInstance.Data;
  iVar9 = (SRWLock->MountPoints).ArrayNum;
  pFVar10 = pFVar11 + (longlong)iVar9 * 8;
  while( true ) {
    if ((SRWLock->MountPoints).ArrayNum != iVar9) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<FMountPoint,TDefaultDelete<FMountPoint>_>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar11 == pFVar10) break;
    pFVar3 = *(FScriptContainerElement **)pFVar11;
    if (((ulonglong)
         (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar3[0x30].field_0x0)->
         AllocatorInstance).Data & 7) == 0) {
      pFVar4 = (param_1->AllocatorInstance).Data;
      if (((pFVar4 <= pFVar3) && (pFVar3 < pFVar4 + (longlong)*piVar1 * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = param_1->ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar8 + 1;
      ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x10),
                         (FString *)pFVar3);
    }
    pFVar11 = pFVar11 + 8;
  }
  pFVar11 = (SRWLock->MountPoints).AllocatorInstance.Data;
  iVar9 = (SRWLock->MountPoints).ArrayNum;
  pFVar10 = pFVar11 + (longlong)iVar9 * 8;
  while( true ) {
    if ((SRWLock->MountPoints).ArrayNum != iVar9) {
      local_48 = 0;
      `TCheckedPointerIterator<TUniquePtr<FMountPoint,TDefaultDelete<FMountPoint>_>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_48);
    }
    if (pFVar11 == pFVar10) break;
    pFVar3 = *(FScriptContainerElement **)pFVar11;
    if (((ulonglong)
         (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar3[0x30].field_0x0)->
         AllocatorInstance).Data & 1) != 0) {
      pFVar4 = (param_1->AllocatorInstance).Data;
      if (((pFVar4 <= pFVar3) && (pFVar3 < pFVar4 + (longlong)*piVar1 * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = param_1->ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar8 + 1;
      ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x10),
                         (FString *)pFVar3);
    }
    pFVar11 = pFVar11 + 8;
  }
  if (param_2) {
    pFVar11 = (SRWLock->MountPoints).AllocatorInstance.Data;
    iVar9 = (SRWLock->MountPoints).ArrayNum;
    pFVar10 = pFVar11 + (longlong)iVar9 * 8;
    while( true ) {
      if ((SRWLock->MountPoints).ArrayNum != iVar9) {
        local_47 = 0;
        `TCheckedPointerIterator<TUniquePtr<FMountPoint,TDefaultDelete<FMountPoint>_>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_47);
      }
      if (pFVar11 == pFVar10) break;
      pFVar3 = *(FScriptContainerElement **)pFVar11;
      if (((ulonglong)
           (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar3[0x30].field_0x0)->
           AllocatorInstance).Data & 7) == 2) {
        pFVar4 = (param_1->AllocatorInstance).Data;
        if (((pFVar4 <= pFVar3) && (pFVar3 < pFVar4 + (longlong)*piVar1 * 0x10)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = param_1->ArrayNum;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_1->AllocatorInstance,piVar1);
        }
        param_1->ArrayNum = iVar8 + 1;
        ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x10),
                           (FString *)pFVar3);
        pFVar11 = pFVar11 + 8;
      }
      else {
        pFVar11 = pFVar11 + 8;
      }
    }
    pFVar10 = (param_1->AllocatorInstance).Data;
    pFVar2 = &SRWLock->MemoryRootPath;
    if (((pFVar10 <= pFVar2) && (pFVar2 < pFVar10 + (longlong)*piVar1 * 0x10)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    piVar12 = &param_1->ArrayNum;
    iVar9 = *piVar12;
    if (iVar9 == param_1->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_1->AllocatorInstance,piVar1);
      *piVar12 = iVar9;
    }
    *piVar12 = iVar9 + 1;
    ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 0x10),
                       pFVar2);
  }
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  cVar6 = local_res18;
  if ((local_res20 != '\0') || (local_res18 != '\0')) {
    iVar9 = param_1->ArrayNum;
    pFVar10 = (param_1->AllocatorInstance).Data;
    pFVar11 = pFVar10 + (longlong)iVar9 * 0x10;
    cVar13 = local_res20;
    while( true ) {
      if (param_1->ArrayNum != iVar9) {
        local_46[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_46)
        ;
      }
      if (pFVar10 == pFVar11) break;
      if (cVar13 != '\0') {
        iVar8 = *(int *)(pFVar10 + 8) + -1;
        if (*(int *)(pFVar10 + 8) == 0) {
          iVar8 = 0;
        }
        cVar13 = local_res20;
        if (1 < iVar8) {
          if (((iVar8 + -1 < 0) || (iVar8 <= iVar8 + -1)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValidIndex(Index)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                 ,0x107,
                                 L"String index out of bounds: Index %i from a string with a length of %i"
                                ), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          cVar13 = local_res20;
          if (*(short *)(*(longlong *)&pFVar10->field_0x0 + -2 + (longlong)iVar8 * 2) == 0x2f) {
            iVar8 = *(int *)(pFVar10 + 8) + -2;
            if (*(int *)(pFVar10 + 8) == 0) {
              iVar8 = -1;
            }
            ::FString::RemoveAt((FString *)pFVar10,iVar8,1,No);
            cVar13 = local_res20;
          }
        }
      }
      if (cVar6 != '\0') {
        iVar8 = *(int *)(pFVar10 + 8) + -1;
        if (*(int *)(pFVar10 + 8) == 0) {
          iVar8 = 0;
        }
        if ((1 < iVar8) && (**(short **)&pFVar10->field_0x0 == 0x2f)) {
          ::FString::RemoveAt((FString *)pFVar10,0,1,No);
        }
      }
      pFVar10 = pFVar10 + 0x10;
    }
  }
  return;
}

// RegisterMountPoint @ 141eb1a70

void __cdecl FPackageName::RegisterMountPoint(FString *param_1,FString *param_2)

{
  FLongPackagePathsSingleton *this;
  
  this = FLongPackagePathsSingleton::Get();
  FLongPackagePathsSingleton::InsertMountPoint(this,param_1,param_2);
  return;
}

// RegisterShortPackageNamesForUObjectModules @ 141eb1ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FPackageName::RegisterShortPackageNamesForUObjectModules(void)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FModuleManager *this;
  void *pvVar4;
  FName *pFVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  longlong local_180;
  TArray<FName,TSizedDefaultAllocator<32>_> local_178;
  TPairInitializer<FName_const_&,FName_&&> local_168;
  FName local_158;
  FScriptContainerElement *local_150;
  FName *local_148;
  FName local_140;
  TStringBuilderBase<wchar_t> local_138;
  wchar_t local_118 [128];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_1a8;
  local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.ArrayNum = 0;
  local_178.ArrayMax = 0;
  this = FModuleManager::Get();
  FModuleManager::FindModules(this,L"*",&local_178);
  for (uVar6 = 0; -1 < (int)uVar6; uVar6 = uVar6 + 1) {
    if (local_178.ArrayNum <= (int)uVar6) break;
    uVar3 = 0;
    if ((int)uVar6 < local_178.ArrayNum) {
      uVar3 = ~uVar6 >> 0x1f;
    }
    if (uVar3 == 0) {
      local_188 = (longlong)(int)uVar6;
      local_180 = (longlong)local_178.ArrayNum;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    lVar7 = (longlong)(int)uVar6;
    local_138.bIsDynamic = false;
    local_138.bIsExternal = false;
    local_168.Value = *(FName **)(local_178.AllocatorInstance.Data + lVar7 * 8);
    local_138.Base = local_118;
    local_138.CurPos = local_118;
    local_138.End = (wchar_t *)local_18;
    pvVar4 = FGenericPlatformString::Memcpy(local_118,L"/Script/",0x10);
    local_138.CurPos = (wchar_t *)((longlong)pvVar4 + 0x10);
    ::FName::AppendString((FName *)&local_168.Value,&local_138);
    pFVar5 = ::FName::FName(&local_140,
                            (int)((longlong)local_138.CurPos - (longlong)local_138.Base >> 1),
                            local_138.Base,FNAME_Add);
    local_158 = *pFVar5;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_138);
    uVar3 = 0;
    if ((int)uVar6 < local_178.ArrayNum) {
      uVar3 = ~uVar6 >> 0x1f;
    }
    if (uVar3 == 0) {
      local_188 = lVar7;
      local_180 = (longlong)local_178.ArrayNum;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_150 = local_178.AllocatorInstance.Data + lVar7 * 8;
    local_148 = &local_158;
    TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FName_const_&,FName_&&>_>
              ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                *)&ScriptPackageNames,&local_168,(bool *)&local_150);
  }
  if (local_178.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.AllocatorInstance.Data);
  }
  return;
}

// SearchForPackageOnDisk @ 141eba2b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141eba833) */
/* WARNING: Removing unreachable block (ram,0x000141eba841) */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FPackageName::SearchForPackageOnDisk(FString *param_1,FString *param_2,FString *param_3)

{
  FScriptContainerElement *this;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  FPackagePath *pFVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  EPackageSegment EVar11;
  EPackageExtension EVar12;
  uint uVar13;
  int iVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<_public:_static_bool___cdecl_FPackageName::SearchForPackageOnDisk(FString_const_&,FString_*,FString_*)_::_2_::FStat_STAT_PackageName_SearchForPackageOnDisk>
  FVar16;
  FThreadHeartBeat *pFVar17;
  void *pvVar18;
  FString *pFVar19;
  FScriptContainerElement *pFVar20;
  FStaticBasicLogRecord *pFVar21;
  ulong64 uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  FNameEntryId FVar25;
  FName FVar26;
  FScriptContainerElement *pFVar27;
  longlong lVar28;
  uint uVar29;
  uint uVar30;
  ForAnyElementType FVar31;
  bool bVar32;
  undefined1 auStackY_428 [32];
  bool local_3c8;
  EPackageExtension local_3c5;
  undefined1 local_3c3;
  undefined1 local_3c2 [2];
  ForAnyElementType local_3c0;
  undefined8 local_3b8;
  TArray<FPackagePath,TSizedDefaultAllocator<32>_> local_3b0;
  undefined1 local_3a0 [16];
  ForAnyElementType local_390;
  undefined8 local_388;
  uint local_380;
  uint uStack_37c;
  FString *local_378;
  FScriptContainerElement *local_370;
  FColor_u_0 local_368;
  uint local_364;
  uint local_360;
  TArray<FString,TSizedDefaultAllocator<32>_> local_358;
  FPackagePath local_348;
  FString local_338;
  FName local_328;
  FName local_320;
  FString local_318;
  FName local_308;
  FPackagePath *local_2f8;
  FScriptContainerElement *local_2f0;
  LARGE_INTEGER local_2e8;
  LARGE_INTEGER local_2e0;
  FString local_2d8;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  IPackageResourceManager *local_2b8;
  FScriptContainerElement *local_2a8;
  uint uStack_2a0;
  undefined4 uStack_29c;
  wchar_t *local_298;
  uint uStack_290;
  undefined4 uStack_28c;
  FScriptContainerElement *local_288;
  uint uStack_280;
  undefined4 uStack_27c;
  wchar_t *local_278;
  int iStack_270;
  undefined4 uStack_26c;
  wchar_t *local_268;
  int iStack_260;
  undefined4 uStack_25c;
  wchar_t *local_258;
  int iStack_250;
  undefined4 uStack_24c;
  FName local_248 [2];
  TStringView<wchar_t> local_238;
  TStringView<wchar_t> local_228;
  TStringView<wchar_t> local_218;
  TStringView<wchar_t> local_208;
  TStringView<wchar_t> local_1f8;
  TStringView<wchar_t> local_1e8;
  TStringView<wchar_t> local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FName local_188 [2];
  TStringBuilderBase<wchar_t> local_178;
  wchar_t local_158 [128];
  ulonglong local_58 [4];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStackY_428;
  bVar32 = -1 < CpuChannel->Enabled;
  local_378 = param_1;
  local_370 = (FScriptContainerElement *)param_3;
  if (bVar32) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2129,"FPackageName::SearchForPackageOnDisk",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Misc\\PackageName.cpp"
               ,0x851);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2129);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_PackageName_SearchForPackageOnDisk ==
        (FThreadSafeStaticStat<_public:_static_bool___cdecl_FPackageName::SearchForPackageOnDisk(FString_const_&,FString_*,FString_*)_::_2_::FStat_STAT_PackageName_SearchForPackageOnDisk>
         )0x0) {
      pFVar15 = ::FName::FName(local_188,"STAT_PackageName_SearchForPackageOnDisk");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PackageName_SearchForPackageOnDisk,
                 *pFVar15,L"FPackageName::SearchForPackageOnDisk","STATGROUP_LoadTime",
                 "STATCAT_Advanced",L"LoadTime",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar16 = StatPtr_STAT_PackageName_SearchForPackageOnDisk;
  if (StatPtr_STAT_PackageName_SearchForPackageOnDisk ==
      (FThreadSafeStaticStat<_public:_static_bool___cdecl_FPackageName::SearchForPackageOnDisk(FString_const_&,FString_*,FString_*)_::_2_::FStat_STAT_PackageName_SearchForPackageOnDisk>
       )0x0) {
    pFVar15 = ::FName::FName(local_248,"STAT_PackageName_SearchForPackageOnDisk");
    FVar16 = (FThreadSafeStaticStat<_public:_static_bool___cdecl_FPackageName::SearchForPackageOnDisk(FString_const_&,FString_*,FString_*)_::_2_::FStat_STAT_PackageName_SearchForPackageOnDisk>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_PackageName_SearchForPackageOnDisk,*pFVar15,
                          L"FPackageName::SearchForPackageOnDisk","STATGROUP_LoadTime",
                          "STATCAT_Advanced",L"LoadTime",true,true,ST_int64,true,false,MCR_Invalid);
  }
  bVar3 = false;
  bVar4 = false;
  local_308.ComparisonIndex.Value = 0;
  local_308.Number = 0;
  FVar26 = *(FName *)FVar16;
  bVar8 = false;
  bVar9 = false;
  FVar25 = FVar26.ComparisonIndex.Value;
  uVar29 = FVar26.Number;
  if ((FVar25.Value == 0) && (uVar29 == 0)) {
LAB_141eba4a5:
    bVar4 = bVar9;
    bVar3 = bVar8;
    bVar8 = false;
    local_320 = local_308;
    FVar26 = local_308;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_368.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_368._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar3 = false;
      bVar4 = true;
      bVar8 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_328.ComparisonIndex.Value = FVar25.Value;
        local_328.Number = uVar29;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_328,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Misc\\PackageName.cpp"
                   ,0x852);
        bVar3 = true;
        bVar4 = true;
        bVar8 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_141eba4a5;
    local_380 = FVar25.Value;
    uStack_37c = uVar29;
    local_320 = FVar26;
    FThreadStats::AddMessage(FVar26,CycleScopeStart);
    bVar8 = true;
  }
  pFVar17 = FThreadHeartBeat::GetNoInit();
  if (pFVar17 != (FThreadHeartBeat *)0x0) {
    FThreadHeartBeat::SuspendHeartBeat(pFVar17,false);
  }
  local_3c8 = false;
  QueryPerformanceCounter(&local_2e0);
  iVar1 = (param_1->Data).ArrayNum;
  pFVar27 = (param_1->Data).AllocatorInstance.Data;
  iVar14 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar14 = 0;
  }
  pFVar20 = pFVar27 + (longlong)iVar14 * 2;
  for (; pFVar27 != pFVar20; pFVar27 = pFVar27 + 2) {
    if (*(short *)pFVar27 == 0x2f) {
      local_318.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_318.Data.ArrayNum = 0;
      local_318.Data.ArrayMax = 0;
      bVar9 = DoesPackageExist(param_1,&local_318,true);
      FVar31.Data = local_318.Data.AllocatorInstance.Data;
      if (bVar9) {
        if (param_2 != (FString *)0x0) {
          ::FString::operator=(param_2,param_1);
        }
        if (param_3 != (FString *)0x0) {
          iVar14 = local_318.Data.ArrayNum + -1;
          if (local_318.Data.ArrayNum == 0) {
            iVar14 = 0;
          }
          ::FString::AssignRange(param_3,(wchar_t *)FVar31.Data,iVar14);
        }
        local_3c8 = true;
      }
      if (FVar31.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar31.Data);
      }
      goto LAB_141ebadf6;
    }
  }
  local_3c0.Data = (FScriptContainerElement *)0x0;
  local_3b8 = 0;
  local_358.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_358.ArrayNum = 0;
  local_358.ArrayMax = 0;
  QueryRootContentPaths(&local_358,false,false,false);
  uVar29 = 0;
  for (uVar30 = 0; (-1 < (int)uVar30 && ((int)uVar30 < local_358.ArrayNum)); uVar30 = uVar30 + 1) {
    uVar13 = uVar29;
    if ((int)uVar30 < local_358.ArrayNum) {
      uVar13 = ~uVar30 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar2 = (code *)swi(3);
      uVar10 = (*pcVar2)();
      return (bool)uVar10;
    }
    pFVar27 = local_358.AllocatorInstance.Data + (longlong)(int)uVar30 * 0x10;
    ::FString::FString(&local_2d8,L"");
    local_2a8 = local_2d8.Data.AllocatorInstance.Data;
    local_338.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_338.Data.ArrayNum = 0;
    local_338.Data.ArrayMax = 0;
    local_298 = *(wchar_t **)pFVar27;
    uStack_2a0 = local_2d8.Data.ArrayNum - 1;
    if (local_2d8.Data.ArrayNum == 0) {
      uStack_2a0 = uVar29;
    }
    local_238._12_4_ = uStack_29c;
    local_238.Size = uStack_2a0;
    local_238.DataPtr = (wchar_t *)local_2d8.Data.AllocatorInstance.Data;
    uStack_290 = *(int *)(pFVar27 + 8) - 1;
    if (*(int *)(pFVar27 + 8) == 0) {
      uStack_290 = uVar29;
    }
    local_228._12_4_ = uStack_28c;
    local_228.Size = uStack_290;
    local_228.DataPtr = local_298;
    bVar9 = TryConvertLongPackageNameToFilename(&local_228,&local_338,&local_238);
    if (!bVar9) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogPackageName);
    }
    if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
    }
    ::FString::FString((FString *)local_3a0,(FString *)pFVar27);
    FVar31.Data = local_338.Data.AllocatorInstance.Data;
    lVar28 = (longlong)local_338.Data.ArrayNum;
    local_390.Data = (FScriptContainerElement *)0x0;
    local_388 = CONCAT44(local_388._4_4_,local_338.Data.ArrayNum);
    if (local_338.Data.ArrayNum == 0) {
      local_388 = local_338.Data._8_8_ & 0xffffffff;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_338.Data.ArrayNum,0,&local_390,local_338.Data.ArrayNum,
                 (int *)((longlong)&local_388 + 4));
      memcpy(local_390.Data,FVar31.Data,lVar28 * 2);
    }
    if (((local_3c0.Data <= (TTuple<FString,FString> *)local_3a0) &&
        ((FScriptContainerElement *)local_3a0 < local_3c0.Data + (longlong)local_3b8._4_4_ * 0x20))
       && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar9)) {
      pcVar2 = (code *)swi(3);
      uVar10 = (*pcVar2)();
      return (bool)uVar10;
    }
    iVar14 = (uint)local_3b8;
    if ((uint)local_3b8 == local_3b8._4_4_) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&local_3c0,(int *)((longlong)&local_3b8 + 4));
    }
    local_3b8 = CONCAT44(local_3b8._4_4_,iVar14 + 1);
    lVar28 = (longlong)iVar14 * 0x20;
    *(undefined8 *)(local_3c0.Data + lVar28) = 0;
    *(undefined8 *)(local_3c0.Data + lVar28) = local_3a0._0_8_;
    *(undefined4 *)(local_3c0.Data + lVar28 + 8) = local_3a0._8_4_;
    *(undefined4 *)(local_3c0.Data + lVar28 + 0xc) = local_3a0._12_4_;
    *(undefined8 *)(local_3c0.Data + lVar28 + 0x10) = 0;
    *(FScriptContainerElement **)(local_3c0.Data + lVar28 + 0x10) = local_390.Data;
    *(undefined4 *)(local_3c0.Data + lVar28 + 0x18) = (undefined4)local_388;
    *(undefined4 *)(local_3c0.Data + lVar28 + 0x1c) = local_388._4_4_;
    local_388 = 0;
    local_390.Data = (FScriptContainerElement *)0x0;
    local_3a0._8_8_ = 0;
    local_3a0._0_8_ = (FScriptContainerElement *)0x0;
    if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_338.Data.AllocatorInstance.Data);
    }
  }
  DestructItems<FString,int>((FString *)local_358.AllocatorInstance.Data,local_358.ArrayNum);
  pFVar27 = local_370;
  if (local_358.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_358.AllocatorInstance.Data);
  }
  pFVar19 = local_378;
  local_288 = (local_378->Data).AllocatorInstance.Data;
  iVar14 = (local_378->Data).ArrayNum;
  uStack_280 = iVar14 - 1;
  if (iVar14 == 0) {
    uStack_280 = 0;
  }
  local_218._12_4_ = uStack_27c;
  local_218.Size = uStack_280;
  local_218.DataPtr = (wchar_t *)local_288;
  local_3c5 = FPackagePath::ParseExtension(&local_218,(int *)&local_364);
  if ((local_3c5 == Custom) || (EVar11 = ExtensionToSegment(local_3c5), EVar11 != Header)) {
    if (2 < (byte)LogPackageName._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPackageName);
    }
    local_3c5 = Unspecified;
  }
  local_178.Base = local_158;
  local_178.bIsDynamic = false;
  local_178.bIsExternal = false;
  local_178.CurPos = local_158;
  local_178.End = (wchar_t *)local_58;
  iVar14 = (pFVar19->Data).ArrayNum;
  pFVar20 = (pFVar19->Data).AllocatorInstance.Data;
  uVar30 = iVar14 - 1;
  if (iVar14 == 0) {
    uVar30 = 0;
  }
  if ((int)local_364 < (int)uVar30) {
    uVar30 = local_364;
  }
  if (0 < (int)uVar30) {
    uVar29 = uVar30;
  }
  uVar22 = (ulong64)(int)uVar29;
  if (local_58 < local_158 + uVar22) {
    TStringBuilderBase<wchar_t>::Extend(&local_178,uVar22);
  }
  if (uVar29 != 0) {
    pvVar18 = FGenericPlatformString::Memcpy(local_178.CurPos,pFVar20,uVar22 * 2);
    local_178.CurPos = (wchar_t *)((longlong)pvVar18 + uVar22 * 2);
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_178,L".*",2);
  local_348.PackageName.ComparisonIndex.Value = 0;
  local_348.PackageName.Number = 0;
  local_348.HeaderExtension = Unspecified;
  local_3b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3b0.ArrayNum = 0;
  local_3b0.ArrayMax = 0;
  local_2b8 = IPackageResourceManager::Get();
  uVar23 = (ulonglong)(int)(uint)local_3b8;
  local_2f0 = local_3c0.Data + uVar23 * 0x20;
  pFVar20 = local_3c0.Data + 0x10;
  local_380 = (uint)local_3b8;
  uVar24 = uVar23;
LAB_141eba9f8:
  pFVar7 = local_2f0;
  local_370 = pFVar20;
  if ((int)uVar24 != (int)uVar23) {
    local_3c3 = 0;
    `TCheckedPointerIterator<TTuple<FString,FString>,int,0>::operator!='::__l2::<lambda_1>::
    operator()(&local_3c3);
  }
  this = pFVar20 + -0x10;
  if (this != pFVar7) {
    bVar9 = ::FString::EndsWith((FString *)this,L"/",1,IgnoreCase);
    if ((!bVar9) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("RootPackageName.EndsWith(L\"/\")",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Misc\\PackageName.cpp"
                           ,0x88a,L""), bVar9)) {
      pcVar2 = (code *)swi(3);
      uVar10 = (*pcVar2)();
      return (bool)uVar10;
    }
    bVar9 = ::FString::EndsWith((FString *)pFVar20,L"/",1,IgnoreCase);
    if ((!bVar9) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("RootFilePath.EndsWith(L\"/\")",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Misc\\PackageName.cpp"
                           ,0x88b,L""), bVar9)) {
      pcVar2 = (code *)swi(3);
      uVar10 = (*pcVar2)();
      return (bool)uVar10;
    }
    uVar5 = local_3b0._8_8_;
    iVar14 = local_3b0.ArrayMax;
    local_3b0._8_8_ = (ulonglong)(uint)local_3b0.ArrayMax << 0x20;
    if (((longlong)uVar5 < 0) && (iVar14 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&local_3b0.AllocatorInstance,0,&local_3b0.ArrayMax);
    }
    local_278 = local_178.Base;
    local_268 = *(wchar_t **)pFVar20;
    iStack_270 = (int)((longlong)local_178.CurPos - (longlong)local_178.Base >> 1);
    local_208._12_4_ = uStack_26c;
    local_208.Size = iStack_270;
    local_2c8 = 0;
    local_208.DataPtr = local_178.Base;
    local_258 = *(wchar_t **)this;
    iStack_260 = *(int *)(pFVar20 + 8) + -1;
    if (*(int *)(pFVar20 + 8) == 0) {
      iStack_260 = 0;
    }
    local_1e8._12_4_ = uStack_25c;
    local_1e8.Size = iStack_260;
    uStack_2c0 = 0;
    iStack_250 = *(int *)(pFVar20 + -8) + -1;
    if (*(int *)(pFVar20 + -8) == 0) {
      iStack_250 = 0;
    }
    local_1f8.DataPtr = (wchar_t *)0x0;
    local_1f8.Size = 0;
    local_1f8._12_4_ = 0;
    local_1d8._12_4_ = uStack_24c;
    local_1d8.Size = iStack_250;
    local_1e8.DataPtr = local_268;
    local_1d8.DataPtr = local_258;
    IPackageResourceManager::FindPackagesRecursive
              (local_2b8,&local_3b0,&local_1d8,&local_1e8,&local_1f8,&local_208);
    uVar24 = (ulonglong)local_3b0.ArrayNum;
    local_360 = local_3b0.ArrayNum;
    local_2f8 = (FPackagePath *)(local_3b0.AllocatorInstance.Data + uVar24 * 0xc);
    FVar31.Data = local_3b0.AllocatorInstance.Data;
LAB_141ebabc0:
    do {
      pFVar6 = local_2f8;
      if (local_3b0.ArrayNum != (int)uVar24) {
        local_3c2[0] = 0;
        `TCheckedPointerIterator<FPackagePath,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_3c2);
      }
      if ((FPackagePath *)FVar31.Data == pFVar6) goto LAB_141ebad8b;
      if (((local_3c5 == Unspecified) ||
          (EVar12 = FPackagePath::GetHeaderExtension((FPackagePath *)FVar31.Data),
          EVar12 == local_3c5)) &&
         ((local_3c8 = true, param_2 != (FString *)0x0 ||
          (pFVar27 != (FScriptContainerElement *)0x0)))) {
        bVar9 = FPackagePath::IsEmpty(&local_348);
        if (bVar9) {
          if (param_2 != (FString *)0x0) {
            pFVar19 = FPackagePath::GetPackageName((FPackagePath *)FVar31.Data,&local_1a8);
            if (param_2 != pFVar19) {
              pFVar20 = (param_2->Data).AllocatorInstance.Data;
              if (pFVar20 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar20);
              }
              (param_2->Data).AllocatorInstance.Data = (pFVar19->Data).AllocatorInstance.Data;
              (pFVar19->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              (param_2->Data).ArrayNum = (pFVar19->Data).ArrayNum;
              (param_2->Data).ArrayMax = (pFVar19->Data).ArrayMax;
              (pFVar19->Data).ArrayNum = 0;
              (pFVar19->Data).ArrayMax = 0;
            }
            if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
            }
          }
          if (pFVar27 != (FScriptContainerElement *)0x0) {
            pFVar20 = (FScriptContainerElement *)
                      FPackagePath::GetLocalFullPath(FVar31.Data,&local_198);
            if (pFVar27 != pFVar20) {
              if (*(void **)pFVar27 != (void *)0x0) {
                FMemory::Free(*(void **)pFVar27);
              }
              *(undefined8 *)pFVar27 = *(undefined8 *)pFVar20;
              *(undefined8 *)pFVar20 = 0;
              *(int *)(pFVar27 + 8) = *(int *)(pFVar20 + 8);
              *(int *)(pFVar27 + 0xc) = *(int *)(pFVar20 + 0xc);
              *(undefined8 *)(pFVar20 + 8) = 0;
            }
            if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_198.Data.AllocatorInstance.Data);
            }
          }
          FPackagePath::operator=(&local_348,(FPackagePath *)FVar31.Data);
        }
        else if (2 < (byte)LogPackageName._0_1_) {
          FPackagePath::GetDebugNameWithExtension((FPackagePath *)FVar31.Data,&local_1b8);
          FPackagePath::GetDebugNameWithExtension(&local_348,&local_1c8);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPackageName);
          if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
          }
          if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
            uVar24 = (ulonglong)local_360;
            FVar31.Data = FVar31.Data + 0xc;
            goto LAB_141ebabc0;
          }
        }
      }
      uVar24 = (ulonglong)local_360;
      FVar31.Data = FVar31.Data + 0xc;
    } while( true );
  }
LAB_141ebadaa:
  FVar26 = local_320;
  if ((FPackagePath *)local_3b0.AllocatorInstance.Data != (FPackagePath *)0x0) {
    FMemory::Free(local_3b0.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_178);
  DestructItems<TTuple<FString,FString>,int>
            ((TTuple<FString,FString> *)local_3c0.Data,(uint)local_3b8);
  if ((TTuple<FString,FString> *)local_3c0.Data != (TTuple<FString,FString> *)0x0) {
    FMemory::Free(local_3c0.Data);
  }
LAB_141ebadf6:
  QueryPerformanceCounter(&local_2e8);
  if (local_3c8 == false) {
    if ((byte)LogPackageName._0_1_ < 5) goto LAB_141ebae69;
    pFVar21 = &::LOG_Static;
  }
  else {
    if ((byte)LogPackageName._0_1_ < 5) goto LAB_141ebae69;
    pFVar21 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<5>(pFVar21,(FLogCategoryBase *)&LogPackageName);
LAB_141ebae69:
  if ((pFVar17 != (FThreadHeartBeat *)0x0) &&
     (pFVar17 = FThreadHeartBeat::GetNoInit(), pFVar17 != (FThreadHeartBeat *)0x0)) {
    FThreadHeartBeat::ResumeHeartBeat(pFVar17,false);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar8) {
    FThreadStats::AddMessage(FVar26,CycleScopeEnd);
  }
  if (bVar32) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return local_3c8;
LAB_141ebad8b:
  if (local_3c8 != false) goto LAB_141ebadaa;
  uVar24 = local_3b8 & 0xffffffff;
  pFVar20 = local_370 + 0x20;
  uVar23 = (ulonglong)local_380;
  goto LAB_141eba9f8;
}

// SplitFullObjectPath @ 141ebca50

void __cdecl
FPackageName::SplitFullObjectPath
          (FString *param_1,FString *param_2,FString *param_3,FString *param_4,FString *param_5,
          bool param_6)

{
  wchar_t *pwVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  undefined4 uVar17;
  TStringView<wchar_t> local_68 [4];
  FScriptContainerElement *pFVar11;
  
  pFVar16 = (param_1->Data).AllocatorInstance.Data;
  pFVar13 = (FScriptContainerElement *)0x0;
  uVar12 = 0;
  iVar3 = (param_1->Data).ArrayNum;
  uVar9 = iVar3 - 1;
  if (iVar3 == 0) {
    uVar9 = uVar12;
  }
  uVar10 = uVar12;
  pFVar11 = pFVar13;
  for (pFVar15 = pFVar16; pFVar15 != pFVar16 + (longlong)(int)uVar9 * 2; pFVar15 = pFVar15 + 2) {
    uVar10 = (uint)pFVar11;
    iVar3 = iswspace(*(wint_t *)pFVar15);
    if (iVar3 == 0) break;
    uVar10 = uVar10 + 1;
    pFVar11 = (FScriptContainerElement *)(ulonglong)uVar10;
  }
  pFVar16 = pFVar16 + (longlong)(int)uVar10 * 2;
  uVar9 = uVar9 - uVar10;
  if (uVar9 != 0) {
    lVar14 = (longlong)(int)uVar9;
    pFVar15 = pFVar16 + (lVar14 + -1) * 2;
    do {
      iVar3 = iswspace(*(wint_t *)pFVar15);
      if (iVar3 == 0) break;
      uVar9 = uVar9 - 1;
      pFVar15 = pFVar15 + -2;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  uVar17 = local_68[0]._12_4_;
  uVar8 = 0;
  uVar10 = uVar12;
  if ((param_6) &&
     (local_68[0].DataPtr = (wchar_t *)pFVar16, local_68[0].Size = uVar9,
     uVar4 = UE::String::FindFirstChar(local_68,L' ',CaseSensitive), uVar4 != 0xffffffff)) {
    uVar5 = uVar9;
    if ((int)uVar4 < (int)uVar9) {
      uVar5 = uVar4;
    }
    uVar10 = uVar8;
    if (0 < (int)uVar5) {
      uVar10 = uVar5;
    }
    uVar5 = (uVar9 - uVar4) - 1;
    uVar4 = uVar9;
    if ((int)uVar5 < (int)uVar9) {
      uVar4 = uVar5;
    }
    uVar5 = 0;
    if (0 < (int)uVar4) {
      uVar5 = uVar4;
    }
    pFVar13 = pFVar16;
    pFVar16 = pFVar16 + ((longlong)(int)uVar9 - (longlong)(int)uVar5) * 2;
    uVar17 = local_68[0]._12_4_;
    uVar9 = uVar5;
  }
  local_68[0].DataPtr = (wchar_t *)pFVar16;
  local_68[0].Size = uVar9;
  local_68[0]._12_4_ = uVar17;
  uVar4 = UE::String::FindFirstChar(local_68,L'.',CaseSensitive);
  if (uVar4 == 0xffffffff) {
    pFVar15 = (FScriptContainerElement *)0x0;
    uVar4 = 0;
  }
  else {
    uVar5 = uVar9;
    if ((int)uVar4 < (int)uVar9) {
      uVar5 = uVar4;
    }
    uVar7 = uVar8;
    if (0 < (int)uVar5) {
      uVar7 = uVar5;
    }
    uVar5 = (uVar9 - uVar4) - 1;
    uVar4 = uVar9;
    if ((int)uVar5 < (int)uVar9) {
      uVar4 = uVar5;
    }
    uVar5 = uVar8;
    if (0 < (int)uVar4) {
      uVar5 = uVar4;
    }
    pFVar15 = pFVar16 + ((longlong)(int)uVar9 - (longlong)(int)uVar5) * 2;
    local_68[0].DataPtr = (wchar_t *)pFVar15;
    local_68[0].Size = uVar5;
    uVar6 = UE::String::FindFirstChar(local_68,L':',CaseSensitive);
    uVar9 = uVar7;
    uVar4 = uVar5;
    if (uVar6 != 0xffffffff) {
      uVar7 = uVar5;
      if ((int)uVar6 < (int)uVar5) {
        uVar7 = uVar6;
      }
      uVar4 = uVar8;
      if (0 < (int)uVar7) {
        uVar4 = uVar7;
      }
      uVar7 = (uVar5 - uVar6) - 1;
      uVar8 = uVar5;
      if ((int)uVar7 < (int)uVar5) {
        uVar8 = uVar7;
      }
      if (0 < (int)uVar8) {
        uVar12 = uVar8;
      }
      local_68[0].Size = uVar12;
      local_68[0].DataPtr =
           (wchar_t *)(pFVar15 + ((longlong)(int)uVar5 - (longlong)(int)uVar12) * 2);
      goto LAB_141ebcc83;
    }
  }
  local_68[0].DataPtr = (wchar_t *)0x0;
  local_68[0].Size = 0;
  local_68[0]._12_4_ = 0;
LAB_141ebcc83:
  uVar2 = local_68[0]._8_8_;
  pwVar1 = local_68[0].DataPtr;
  ::FString::AssignRange(param_2,(wchar_t *)pFVar13,uVar10);
  ::FString::AssignRange(param_3,(wchar_t *)pFVar16,uVar9);
  ::FString::AssignRange(param_4,(wchar_t *)pFVar15,uVar4);
  ::FString::AssignRange(param_5,pwVar1,(int)uVar2);
  return;
}

// SplitFullObjectPath @ 141ebcd30

void __cdecl
FPackageName::SplitFullObjectPath
          (FString *param_1,FString *param_2,FString *param_3,FString *param_4,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_5,bool param_6)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<TStringView<wchar_t>,TSizedDefaultAllocator<32>_> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  FScriptContainerElement *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  TStringView<wchar_t> local_28;
  
  local_38 = (param_1->Data).AllocatorInstance.Data;
  iVar2 = (param_1->Data).ArrayNum;
  local_68.DataPtr = (wchar_t *)0x0;
  local_68.Size = 0;
  local_58.DataPtr = (wchar_t *)0x0;
  local_58.Size = 0;
  iStack_30 = iVar2 + -1;
  if (iVar2 == 0) {
    iStack_30 = 0;
  }
  local_28._12_4_ = uStack_2c;
  local_28.Size = iStack_30;
  local_48.DataPtr = (wchar_t *)0x0;
  local_48.Size = 0;
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  local_28.DataPtr = (wchar_t *)local_38;
  SplitFullObjectPath(&local_28,&local_68,&local_58,&local_48,&local_78,param_6);
  ::FString::AssignRange(param_2,local_68.DataPtr,local_68.Size);
  ::FString::AssignRange(param_3,local_58.DataPtr,local_58.Size);
  ::FString::AssignRange(param_4,local_48.DataPtr,local_48.Size);
  DestructItems<FString,int>((FString *)(param_5->AllocatorInstance).Data,param_5->ArrayNum);
  piVar1 = &param_5->ArrayMax;
  param_5->ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&param_5->AllocatorInstance,0,piVar1);
  }
  if (param_5 == (TArray<FString,TSizedDefaultAllocator<32>_> *)&local_78) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar2 = local_78.ArrayNum;
  if (local_78.ArrayNum != 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,local_78.ArrayNum,&param_5->AllocatorInstance,&param_5->ArrayNum,
                       piVar1);
    ConstructItems<FString,TStringView<wchar_t>,int>
              ((param_5->AllocatorInstance).Data + (longlong)iVar5 * 0x10,
               (TStringView<wchar_t> *)local_78.AllocatorInstance.Data,iVar2);
  }
  if ((TStringView<wchar_t> *)local_78.AllocatorInstance.Data != (TStringView<wchar_t> *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

// SplitFullObjectPath @ 141ebced0

void __cdecl
FPackageName::SplitFullObjectPath
          (TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2,TStringView<wchar_t> *param_3
          ,TStringView<wchar_t> *param_4,TStringView<wchar_t> *param_5,bool param_6)

{
  wchar_t *pwVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  wchar_t *pwVar7;
  undefined8 *local_res8;
  undefined8 local_38;
  undefined8 uStack_30;
  
  pwVar1 = param_1->DataPtr;
  iVar6 = 0;
  iVar5 = param_1->Size;
  pwVar7 = pwVar1;
  while ((pwVar7 != pwVar1 + iVar5 && (iVar3 = iswspace(*pwVar7), iVar3 != 0))) {
    iVar6 = iVar6 + 1;
    pwVar7 = pwVar7 + 1;
  }
  pwVar1 = pwVar1 + iVar6;
  iVar5 = iVar5 - iVar6;
  if (iVar5 != 0) {
    lVar4 = (longlong)iVar5;
    pwVar7 = pwVar1 + lVar4 + -1;
    do {
      iVar6 = iswspace(*pwVar7);
      if (iVar6 == 0) break;
      iVar5 = iVar5 + -1;
      pwVar7 = pwVar7 + -1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  local_res8 = &local_38;
  uStack_30 = CONCAT44(uStack_30._4_4_,iVar5);
  local_38 = pwVar1;
  if (param_6) {
    `FPackageName::SplitFullObjectPath'::__l2::<lambda_1>::operator()(&local_res8,L' ',param_2);
  }
  else {
    param_2->DataPtr = (wchar_t *)0x0;
    param_2->Size = 0;
  }
  bVar2 = `FPackageName::SplitFullObjectPath'::__l2::<lambda_1>::operator()
                    (&local_res8,L'.',param_3);
  if (bVar2) {
    bVar2 = `FPackageName::SplitFullObjectPath'::__l2::<lambda_1>::operator()
                      (&local_res8,L':',param_4);
    if (bVar2) goto LAB_141ebd00d;
  }
  else {
    param_3->DataPtr = local_38;
    *(undefined8 *)&param_3->Size = uStack_30;
    local_38._0_4_ = 0;
    local_38._4_4_ = 0;
    uStack_30._0_4_ = 0;
    uStack_30._4_4_ = 0;
  }
  *(undefined4 *)&param_4->DataPtr = (undefined4)local_38;
  *(undefined4 *)((longlong)&param_4->DataPtr + 4) = local_38._4_4_;
  param_4->Size = (int)uStack_30;
  *(undefined4 *)&param_4->field_0xc = uStack_30._4_4_;
  local_38._0_4_ = 0;
  local_38._4_4_ = 0;
  uStack_30._0_4_ = 0;
  uStack_30._4_4_ = 0;
LAB_141ebd00d:
  *(undefined4 *)&param_5->DataPtr = (undefined4)local_38;
  *(undefined4 *)((longlong)&param_5->DataPtr + 4) = local_38._4_4_;
  param_5->Size = (int)uStack_30;
  *(undefined4 *)&param_5->field_0xc = uStack_30._4_4_;
  return;
}

// SplitFullObjectPath @ 141ebd040

void __cdecl
FPackageName::SplitFullObjectPath
          (TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2,TStringView<wchar_t> *param_3
          ,TStringView<wchar_t> *param_4,
          TArray<TStringView<wchar_t>,TSizedDefaultAllocator<32>_> *param_5,bool param_6)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  TStringView<wchar_t> *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  TStringView<wchar_t> local_68;
  wchar_t *local_58;
  ulonglong uStack_50;
  wchar_t *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  wchar_t *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  local_28.DataPtr = param_1->DataPtr;
  local_28.Size = param_1->Size;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_68.DataPtr = (wchar_t *)0x0;
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  SplitFullObjectPath(&local_28,param_2,param_3,param_4,&local_68,param_6);
  if (0 < local_68.Size) {
    piVar1 = &param_5->ArrayMax;
    param_5->ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&param_5->AllocatorInstance,0,piVar1);
    }
LAB_141ebd0d0:
    do {
      local_18.DataPtr = local_68.DataPtr;
      local_18.Size = local_68.Size;
      local_18._12_4_ = local_68._12_4_;
      local_58 = (wchar_t *)0x0;
      uStack_50 = uStack_50 & 0xffffffff00000000;
      iVar7 = UE::String::FindFirstChar(&local_18,L'.',CaseSensitive);
      if (iVar7 == -1) {
        local_58 = (wchar_t *)0x0;
        bVar5 = false;
        uStack_50 = uStack_50 & 0xffffffff00000000;
      }
      else {
        local_48 = local_68.DataPtr;
        iVar8 = local_68.Size;
        if (iVar7 < local_68.Size) {
          iVar8 = iVar7;
        }
        bVar5 = true;
        iStack_40 = 0;
        if (0 < iVar8) {
          iStack_40 = iVar8;
        }
        iVar8 = (local_68.Size - iVar7) + -1;
        uStack_50 = CONCAT44(uStack_3c,iStack_40);
        local_58 = local_68.DataPtr;
        iVar7 = local_68.Size;
        if (iVar8 < local_68.Size) {
          iVar7 = iVar8;
        }
        iStack_30 = 0;
        if (0 < iVar7) {
          iStack_30 = iVar7;
        }
        local_68.DataPtr = local_68.DataPtr + ((longlong)local_68.Size - (longlong)iStack_30);
        local_68._8_8_ = CONCAT44(uStack_2c,iStack_30);
        local_38 = local_68.DataPtr;
        if (0 < iStack_40) {
          pFVar2 = (param_5->AllocatorInstance).Data;
          if (((pFVar2 <= (FScriptContainerElement *)&local_58) &&
              ((FScriptContainerElement *)&local_58 < pFVar2 + (longlong)*piVar1 * 0x10)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar7 = param_5->ArrayNum;
          if (iVar7 == *piVar1) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&param_5->AllocatorInstance,piVar1);
          }
          param_5->ArrayNum = iVar7 + 1;
          pFVar2 = (param_5->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
          *(wchar_t **)pFVar2 = local_58;
          *(ulonglong *)(pFVar2 + 8) = uStack_50;
          goto LAB_141ebd0d0;
        }
      }
      if (0 < local_68.Size) {
        pTVar3 = (TStringView<wchar_t> *)(param_5->AllocatorInstance).Data;
        if (((pTVar3 <= &local_68) && (&local_68 < pTVar3 + *piVar1)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar7 = param_5->ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_5->AllocatorInstance,piVar1);
        }
        param_5->ArrayNum = iVar7 + 1;
        pFVar2 = (param_5->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
        *(wchar_t **)pFVar2 = local_68.DataPtr;
        *(undefined8 *)(pFVar2 + 8) = local_68._8_8_;
      }
    } while (bVar5);
  }
  return;
}

// SplitLongPackageName @ 141ebd800

/* WARNING: Enum "EPathFormatFlags": Some values do not have unique names */

bool __cdecl
FPackageName::SplitLongPackageName
          (FString *param_1,FString *param_2,FString *param_3,FString *param_4,bool param_5)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  FLongPackagePathsSingleton *SRWLock;
  FMountPoint **ppFVar8;
  FLongPackagePathsSingleton *pFVar9;
  int iVar10;
  undefined4 uStack_6c;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38 [2];
  
  bVar5 = false;
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  iVar10 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar10 = 0;
  }
  SRWLock = FLongPackagePathsSingleton::Get();
  if (SRWLock == (FLongPackagePathsSingleton *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  uVar4._4_4_ = uStack_6c;
  uVar4._0_4_ = iVar10;
  local_58.DataPtr = (wchar_t *)pFVar2;
  local_58._8_8_ = uVar4;
  ppFVar8 = TDirectoryTree<FMountPoint_*>::FindClosestValue(&SRWLock->RootPathTree,&local_58);
  if (ppFVar8 == (FMountPoint **)0x0) {
    pFVar9 = FLongPackagePathsSingleton::Get();
    local_38[0].DataPtr = (wchar_t *)(pFVar9->MemoryRootPath).Data.AllocatorInstance.Data;
    iVar1 = (pFVar9->MemoryRootPath).Data.ArrayNum;
    iVar10 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar10 = 0;
    }
    local_38[0]._12_4_ = uStack_5c;
    local_38[0].Size = iVar10;
    local_48.DataPtr = (wchar_t *)pFVar2;
    local_48._8_8_ = uVar4;
    bVar6 = FPathViews::IsParentPathOf(local_38,&local_48);
    if (!bVar6) goto LAB_141ebd8e8;
  }
  bVar5 = true;
LAB_141ebd8e8:
  if (SRWLock != (FLongPackagePathsSingleton *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  if (bVar5) {
    SplitPackageName(param_1,param_2,param_3,param_4,(param_5 ^ 1) + MountPointTrailingSlash);
  }
  else {
    ::FString::Reset(param_2,0);
    ::FString::Reset(param_3,0);
    ::FString::Reset(param_4,0);
  }
  return bVar5;
}

// SplitPackageName @ 141ebd970

/* WARNING: Enum "EPathFormatFlags": Some values do not have unique names */

void __cdecl
FPackageName::SplitPackageName
          (FString *param_1,FString *param_2,FString *param_3,FString *param_4,
          EPathFormatFlags param_5)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 local_a8;
  int iStack_90;
  ulonglong uStack_80;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68 [3];
  
  local_a8 = (param_1->Data).AllocatorInstance.Data;
  iVar3 = (param_1->Data).ArrayNum;
  iVar5 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar5 = 0;
  }
  iVar3 = iVar5;
  if (1 < iVar5) {
    iVar3 = 1;
  }
  iVar4 = 0;
  if (0 < iVar3) {
    iVar4 = iVar3;
  }
  if ((iVar4 == 1) &&
     (iVar3 = FGenericPlatformStricmp::Strnicmp(L"/",(wchar_t *)local_a8,1), iVar3 == 0)) {
    iVar3 = iVar5;
    if (iVar5 + -1 < iVar5) {
      iVar3 = iVar5 + -1;
    }
    iVar4 = 0;
    if (0 < iVar3) {
      iVar4 = iVar3;
    }
    uStack_80 = CONCAT44(uStack_80._4_4_,iVar4);
    local_78.DataPtr = (wchar_t *)(local_a8 + ((longlong)iVar5 - (longlong)iVar4) * 2);
    local_78._8_8_ = uStack_80;
    iVar3 = UE::String::FindFirstChar(&local_78,L'/',CaseSensitive);
    if (iVar3 != -1) {
      local_78.DataPtr = (wchar_t *)0x0;
      local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
      iVar4 = iVar5;
      if (iVar3 + 2 < iVar5) {
        iVar4 = iVar3 + 2;
      }
      iVar7 = 0;
      iVar6 = 0;
      if (0 < iVar4) {
        iVar6 = iVar4;
      }
      iVar4 = (iVar5 - (iVar3 + 1)) + -1;
      iVar3 = iVar5;
      if (iVar4 < iVar5) {
        iVar3 = iVar4;
      }
      iVar4 = iVar7;
      if (0 < iVar3) {
        iVar4 = iVar3;
      }
      pFVar2 = local_a8 + ((longlong)iVar5 - (longlong)iVar4) * 2;
      local_68[0]._12_4_ = uStack_80._4_4_;
      local_68[0].Size = iVar4;
      local_68[0].DataPtr = (wchar_t *)pFVar2;
      iVar3 = UE::String::FindLastChar(local_68,L'/',CaseSensitive);
      if (iVar3 == -1) {
        iStack_90 = 0;
        pFVar1 = (FScriptContainerElement *)0x0;
      }
      else {
        iStack_90 = iVar4;
        if (iVar3 != iVar4 + -1) {
          iVar5 = iVar4;
          if (iVar3 + 1 < iVar4) {
            iVar5 = iVar3 + 1;
          }
          iStack_90 = iVar7;
          if (0 < iVar5) {
            iStack_90 = iVar5;
          }
          iVar5 = (iVar4 - iVar3) + -1;
          iVar3 = iVar4;
          if (iVar5 < iVar4) {
            iVar3 = iVar5;
          }
          local_78.Size = 0;
          if (0 < iVar3) {
            local_78.Size = iVar3;
          }
          local_78.DataPtr = (wchar_t *)(pFVar2 + ((longlong)iVar4 - (longlong)local_78.Size) * 2);
        }
        iVar4 = local_78.Size;
        pFVar1 = pFVar2;
        pFVar2 = (FScriptContainerElement *)local_78.DataPtr;
      }
      iVar3 = iVar6;
      if ((param_5 & MountPointLeadingSlash) == MountPointNoSlashes) {
        iVar5 = iVar6;
        if (iVar6 + -1 < iVar6) {
          iVar5 = iVar6 + -1;
        }
        iVar3 = 0;
        if (0 < iVar5) {
          iVar3 = iVar5;
        }
        local_a8 = local_a8 + ((longlong)iVar6 - (longlong)iVar3) * 2;
      }
      if ((param_5 & MountPointTrailingSlash) == MountPointNoSlashes) {
        iVar5 = iVar3;
        if (iVar3 + -1 < iVar3) {
          iVar5 = iVar3 + -1;
        }
        iVar3 = iVar7;
        if (0 < iVar5) {
          iVar3 = iVar5;
        }
      }
      goto LAB_141ebdbb1;
    }
  }
  iVar4 = 0;
  iVar3 = 0;
  local_a8._4_4_ = 0;
  local_a8._0_4_ = 0;
  pFVar2 = (FScriptContainerElement *)0x0;
  pFVar1 = (FScriptContainerElement *)0x0;
  iStack_90 = 0;
LAB_141ebdbb1:
  if (param_2 != (FString *)0x0) {
    ::FString::AssignRange(param_2,(wchar_t *)CONCAT44(local_a8._4_4_,(undefined4)local_a8),iVar3);
  }
  if (param_3 != (FString *)0x0) {
    ::FString::AssignRange(param_3,(wchar_t *)pFVar1,iStack_90);
  }
  if (param_4 != (FString *)0x0) {
    ::FString::AssignRange(param_4,(wchar_t *)pFVar2,iVar4);
  }
  return;
}

// SplitPackageName @ 141ebdc70

/* WARNING: Enum "EPathFormatFlags": Some values do not have unique names */

void __cdecl
FPackageName::SplitPackageName
          (TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2,TStringView<wchar_t> *param_3
          ,TStringView<wchar_t> *param_4,EPathFormatFlags param_5)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  wchar_t *local_98;
  undefined8 uStack_90;
  int iStack_80;
  undefined8 uStack_70;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58 [2];
  
  iVar6 = param_1->Size;
  local_98 = param_1->DataPtr;
  iVar4 = iVar6;
  if (1 < iVar6) {
    iVar4 = 1;
  }
  iVar8 = 0;
  if (0 < iVar4) {
    iVar8 = iVar4;
  }
  if ((iVar8 == 1) && (iVar4 = FGenericPlatformStricmp::Strnicmp(L"/",local_98,1), iVar4 == 0)) {
    iVar4 = iVar6;
    if (iVar6 + -1 < iVar6) {
      iVar4 = iVar6 + -1;
    }
    local_68.Size = 0;
    if (0 < iVar4) {
      local_68.Size = iVar4;
    }
    local_68.DataPtr = local_98 + ((longlong)iVar6 - (longlong)local_68.Size);
    local_68._12_4_ = uStack_70._4_4_;
    iVar4 = UE::String::FindFirstChar(&local_68,L'/',CaseSensitive);
    if (iVar4 == -1) {
      if (param_2 != (TStringView<wchar_t> *)0x0) {
        param_2->DataPtr = (wchar_t *)0x0;
        *(undefined8 *)&param_2->Size = 0;
      }
      if (param_3 != (TStringView<wchar_t> *)0x0) {
        param_3->DataPtr = (wchar_t *)0x0;
        *(undefined8 *)&param_3->Size = 0;
      }
      if (param_4 != (TStringView<wchar_t> *)0x0) {
        param_4->DataPtr = (wchar_t *)0x0;
        *(undefined8 *)&param_4->Size = 0;
      }
    }
    else {
      uVar3 = (ulonglong)_iStack_80 >> 0x20;
      iVar8 = iVar6;
      if (iVar4 + 2 < iVar6) {
        iVar8 = iVar4 + 2;
      }
      local_68.DataPtr = (wchar_t *)0x0;
      local_68.Size = 0;
      iVar7 = 0;
      if (0 < iVar8) {
        iVar7 = iVar8;
      }
      iVar8 = 0;
      uStack_90 = CONCAT44(uStack_90._4_4_,iVar7);
      iVar5 = (iVar6 - (iVar4 + 1)) + -1;
      iVar4 = iVar6;
      if (iVar5 < iVar6) {
        iVar4 = iVar5;
      }
      iVar5 = iVar8;
      if (0 < iVar4) {
        iVar5 = iVar4;
      }
      pwVar1 = local_98 + ((longlong)iVar6 - (longlong)iVar5);
      local_58[0]._12_4_ = uStack_70._4_4_;
      local_58[0].Size = iVar5;
      local_58[0].DataPtr = pwVar1;
      iVar6 = UE::String::FindLastChar(local_58,L'/',CaseSensitive);
      if (iVar6 == -1) {
        iStack_80 = 0;
        uVar9 = (int)uVar3;
        local_68.Size = iVar5;
        pwVar2 = (wchar_t *)0x0;
        local_68.DataPtr = pwVar1;
      }
      else {
        iStack_80 = iVar5;
        uVar9 = uStack_70._4_4_;
        uStack_70._4_4_ = local_68._12_4_;
        pwVar2 = pwVar1;
        if (iVar6 != iVar5 + -1) {
          iVar4 = iVar5;
          if (iVar6 + 1 < iVar5) {
            iVar4 = iVar6 + 1;
          }
          iStack_80 = iVar8;
          if (0 < iVar4) {
            iStack_80 = iVar4;
          }
          iVar4 = (iVar5 - iVar6) + -1;
          iVar6 = iVar5;
          if (iVar4 < iVar5) {
            iVar6 = iVar4;
          }
          local_68.Size = 0;
          if (0 < iVar6) {
            local_68.Size = iVar6;
          }
          local_68.DataPtr = pwVar1 + ((longlong)iVar5 - (longlong)local_68.Size);
          uVar9 = local_68._12_4_;
        }
      }
      iVar6 = iVar7;
      if ((param_5 & MountPointLeadingSlash) == MountPointNoSlashes) {
        iVar4 = iVar7;
        if (iVar7 + -1 < iVar7) {
          iVar4 = iVar7 + -1;
        }
        iVar6 = 0;
        if (0 < iVar4) {
          iVar6 = iVar4;
        }
        local_98 = local_98 + ((longlong)iVar7 - (longlong)iVar6);
        uStack_90 = CONCAT44(local_58[0]._12_4_,iVar6);
      }
      if ((param_5 & MountPointTrailingSlash) == MountPointNoSlashes) {
        if (iVar6 + -1 < iVar6) {
          iVar6 = iVar6 + -1;
        }
        if (0 < iVar6) {
          iVar8 = iVar6;
        }
        uStack_90 = CONCAT44(local_58[0]._12_4_,iVar8);
      }
      if (param_2 != (TStringView<wchar_t> *)0x0) {
        param_2->DataPtr = local_98;
        *(undefined8 *)&param_2->Size = uStack_90;
      }
      if (param_3 != (TStringView<wchar_t> *)0x0) {
        param_3->DataPtr = pwVar2;
        param_3->Size = iStack_80;
        *(undefined4 *)&param_3->field_0xc = uVar9;
      }
      if (param_4 != (TStringView<wchar_t> *)0x0) {
        param_4->DataPtr = local_68.DataPtr;
        param_4->Size = local_68.Size;
        *(undefined4 *)&param_4->field_0xc = uStack_70._4_4_;
      }
    }
  }
  else {
    if (param_2 != (TStringView<wchar_t> *)0x0) {
      param_2->DataPtr = (wchar_t *)0x0;
      *(undefined8 *)&param_2->Size = 0;
    }
    if (param_3 != (TStringView<wchar_t> *)0x0) {
      param_3->DataPtr = (wchar_t *)0x0;
      *(undefined8 *)&param_3->Size = 0;
    }
    if (param_4 != (TStringView<wchar_t> *)0x0) {
      param_4->DataPtr = (wchar_t *)0x0;
      *(undefined8 *)&param_4->Size = 0;
    }
  }
  return;
}

// SplitPackageNameRoot @ 141ebdf40

/* WARNING: Enum "EPathFormatFlags": Some values do not have unique names */

TStringView<wchar_t> * __cdecl
FPackageName::SplitPackageNameRoot
          (TStringView<wchar_t> *__return_storage_ptr__,TStringView<wchar_t> *param_1,
          TStringView<wchar_t> *param_2,EPathFormatFlags param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  wchar_t *pwVar7;
  undefined4 uStack_4c;
  TStringView<wchar_t> local_48;
  
  iVar5 = param_1->Size;
  pwVar7 = param_1->DataPtr;
  iVar2 = iVar5;
  if (1 < iVar5) {
    iVar2 = 1;
  }
  iVar6 = 0;
  if (0 < iVar2) {
    iVar6 = iVar2;
  }
  if ((iVar6 == 1) && (iVar2 = FGenericPlatformStricmp::Strnicmp(L"/",pwVar7,1), iVar2 == 0)) {
    iVar2 = iVar5;
    if (iVar5 + -1 < iVar5) {
      iVar2 = iVar5 + -1;
    }
    iVar6 = 0;
    if (0 < iVar2) {
      iVar6 = iVar2;
    }
    local_48.DataPtr = pwVar7 + ((longlong)iVar5 - (longlong)iVar6);
    local_48._12_4_ = uStack_4c;
    local_48.Size = iVar6;
    iVar2 = UE::String::FindFirstChar(&local_48,L'/',CaseSensitive);
    if (iVar2 == -1) {
      if (param_2 != (TStringView<wchar_t> *)0x0) {
        param_2->DataPtr = (wchar_t *)0x0;
        *(undefined8 *)&param_2->Size = 0;
      }
      iVar5 = param_1->Size;
      uVar1 = *(undefined4 *)&param_1->field_0xc;
      __return_storage_ptr__->DataPtr = param_1->DataPtr;
      __return_storage_ptr__->Size = iVar5;
      *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar1;
    }
    else {
      iVar6 = 0;
      if (param_2 != (TStringView<wchar_t> *)0x0) {
        iVar3 = (iVar5 - (iVar2 + 1)) + -1;
        iVar4 = iVar5;
        if (iVar3 < iVar5) {
          iVar4 = iVar3;
        }
        iVar3 = iVar6;
        if (0 < iVar4) {
          iVar3 = iVar4;
        }
        param_2->DataPtr = pwVar7 + ((longlong)iVar5 - (longlong)iVar3);
        *(ulonglong *)&param_2->Size = CONCAT44(uStack_4c,iVar3);
      }
      if (iVar2 + 2 < iVar5) {
        iVar5 = iVar2 + 2;
      }
      iVar2 = 0;
      if (0 < iVar5) {
        iVar2 = iVar5;
      }
      if ((param_3 & MountPointLeadingSlash) == MountPointNoSlashes) {
        iVar5 = iVar2;
        if (iVar2 + -1 < iVar2) {
          iVar5 = iVar2 + -1;
        }
        iVar4 = iVar6;
        if (0 < iVar5) {
          iVar4 = iVar5;
        }
        pwVar7 = pwVar7 + ((longlong)iVar2 - (longlong)iVar4);
        iVar2 = iVar4;
      }
      if ((param_3 & MountPointTrailingSlash) == MountPointNoSlashes) {
        iVar5 = iVar2;
        if (iVar2 + -1 < iVar2) {
          iVar5 = iVar2 + -1;
        }
        iVar2 = iVar6;
        if (0 < iVar5) {
          iVar2 = iVar5;
        }
      }
      __return_storage_ptr__->DataPtr = pwVar7;
      __return_storage_ptr__->Size = iVar2;
      *(undefined4 *)&__return_storage_ptr__->field_0xc = uStack_4c;
    }
  }
  else {
    if (param_2 != (TStringView<wchar_t> *)0x0) {
      iVar5 = param_1->Size;
      uVar1 = *(undefined4 *)&param_1->field_0xc;
      param_2->DataPtr = param_1->DataPtr;
      param_2->Size = iVar5;
      *(undefined4 *)&param_2->field_0xc = uVar1;
    }
    *(undefined8 *)&__return_storage_ptr__->Size = 0;
    __return_storage_ptr__->DataPtr = (wchar_t *)0x0;
  }
  return __return_storage_ptr__;
}

// SplitPackageNameRoot @ 141ebe120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPathFormatFlags": Some values do not have unique names */

FString * __cdecl
FPackageName::SplitPackageNameRoot
          (FString *__return_storage_ptr__,FName param_1,FString *param_2,EPathFormatFlags param_3)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  int iVar5;
  FName local_res10 [3];
  undefined1 auStack_8e8 [32];
  TStringView<wchar_t> local_8c8;
  TStringView<wchar_t> local_8b8;
  TStringView<wchar_t> local_8a8;
  FString local_898;
  TStringBuilderBase<wchar_t> local_888;
  FScriptContainerElement local_868 [2070];
  wchar_t local_52 [5];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_8e8;
  local_888.Base = (wchar_t *)local_868;
  local_888.CurPos = (wchar_t *)local_868;
  local_888.End = local_52;
  local_888.bIsDynamic = false;
  local_888.bIsExternal = false;
  local_res10[0] = param_1;
  ::FName::AppendString(local_res10,&local_888);
  local_8c8.DataPtr = local_888.Base;
  pFVar3 = (FScriptContainerElement *)0x0;
  local_8c8.Size = (int)((longlong)local_888.CurPos - (longlong)local_888.Base >> 1);
  local_8b8._12_4_ = local_8c8._12_4_;
  local_8b8.Size = local_8c8.Size;
  local_8b8.DataPtr = local_888.Base;
  local_8a8.DataPtr = (wchar_t *)0x0;
  iVar4 = 0;
  local_8a8.Size = 0;
  SplitPackageNameRoot(&local_8c8,&local_8b8,&local_8a8,param_3);
  if (param_2 != (FString *)0x0) {
    pFVar2 = ::FString::ConstructFromPtrSize((FString *)&local_8b8,local_8a8.DataPtr,local_8a8.Size)
    ;
    iVar5 = 0;
    if (&local_898 != pFVar2) {
      pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
      (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar4 = (pFVar2->Data).ArrayNum;
      iVar5 = (pFVar2->Data).ArrayMax;
      (pFVar2->Data).ArrayNum = 0;
      (pFVar2->Data).ArrayMax = 0;
    }
    if ((FScriptContainerElement *)local_8b8.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8b8.DataPtr);
    }
    if (param_2 == &local_898) {
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
    }
    else {
      pFVar1 = (param_2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_2->Data).AllocatorInstance.Data = pFVar3;
      (param_2->Data).ArrayNum = iVar4;
      (param_2->Data).ArrayMax = iVar5;
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar2 = ::FString::ConstructFromPtrSize((FString *)&local_8b8,local_8c8.DataPtr,local_8c8.Size);
  if (__return_storage_ptr__ != pFVar2) {
    pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if ((FScriptContainerElement *)local_8b8.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8b8.DataPtr);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_888);
  return __return_storage_ptr__;
}

// TryConvertFilenameToLongPackageName @ 141ebec70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FPackageName::TryConvertFilenameToLongPackageName
          (FString *param_1,FString *param_2,FString *param_3,EConvertFlags param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  wchar_t *pwVar4;
  TStringBuilderBase<wchar_t> *pTVar5;
  wchar_t *pwVar6;
  undefined1 auStack_498 [32];
  TStringView<wchar_t> local_478;
  TStringBuilderBase<wchar_t> local_468;
  wchar_t local_448 [256];
  TStringBuilderBase<wchar_t> local_248;
  wchar_t local_228 [256];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_498;
  local_248.bIsDynamic = false;
  local_248.bIsExternal = false;
  local_468.bIsDynamic = false;
  local_468.bIsExternal = false;
  local_248.Base = local_228;
  local_248.CurPos = local_228;
  local_248.End = (wchar_t *)local_28;
  local_468.Base = local_448;
  local_468.CurPos = local_448;
  local_468.End = (wchar_t *)&local_248;
  local_478.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  local_478.Size = iVar3;
  pTVar5 = &local_248;
  if (param_3 == (FString *)0x0) {
    pTVar5 = (TStringBuilderBase<wchar_t> *)0x0;
  }
  bVar2 = TryConvertFilenameToLongPackageName(&local_478,&local_468,pTVar5,param_4);
  pwVar4 = local_468.Base;
  pwVar6 = local_468.CurPos;
  if ((bVar2) ||
     (param_2 = param_3, pwVar4 = local_248.Base, pwVar6 = local_248.CurPos,
     param_3 != (FString *)0x0)) {
    ::FString::AssignRange(param_2,pwVar4,(int)((longlong)pwVar6 - (longlong)pwVar4 >> 1));
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_468);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_248);
  return bVar2;
}

// TryConvertFilenameToLongPackageName @ 141ebedc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FPackageName::TryConvertFilenameToLongPackageName
          (TStringView<wchar_t> *param_1,TStringBuilderBase<wchar_t> *param_2,
          TStringBuilderBase<wchar_t> *param_3,EConvertFlags param_4)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  TStringBuilderBase<wchar_t> *pTVar7;
  int iVar8;
  undefined1 auStack_528 [32];
  TStringView<wchar_t> local_508;
  EConvertFlags local_4f8;
  int local_4f4;
  TStringBuilderBase<wchar_t> local_4e8;
  wchar_t local_4c8;
  wchar_t local_4c6 [15];
  TStringBuilderBase<wchar_t> local_4a8;
  wchar_t local_488 [256];
  TStringBuilderBase<wchar_t> local_288;
  wchar_t local_268 [256];
  ulonglong local_68 [5];
  
  local_68[0] = __security_cookie.value ^ (ulonglong)auStack_528;
  local_508.DataPtr = param_1->DataPtr;
  local_508.Size = param_1->Size;
  local_508._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_288.Base = local_268;
  local_288.CurPos = local_268;
  local_288.bIsDynamic = false;
  local_288.bIsExternal = false;
  local_288.End = (wchar_t *)local_68;
  local_4f8 = param_4;
  InternalFilenameToLongPackageName(&local_508,&local_288);
  pwVar2 = local_288.Base;
  local_508.DataPtr = local_288.Base;
  iVar8 = (int)((longlong)local_288.CurPos - (longlong)local_288.Base >> 1);
  local_508.Size = iVar8;
  uVar1 = local_508._8_8_;
  if (iVar8 == 0) {
    if (param_3 != (TStringBuilderBase<wchar_t> *)0x0) {
      FPathViews::GetBaseFilenameWithPath(&local_508,param_1);
      param_3->CurPos = param_3->Base;
      pTVar7 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                         (param_3,L"FilenameToLongPackageName failed to convert \'",0x2d);
      pTVar7 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                         (pTVar7,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar7,L"\'. ",3);
      pTVar7 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                         (param_3,L"The Result would be indistinguishable from using \'",0x32);
      pTVar7 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                         (pTVar7,local_508.DataPtr,local_508.Size);
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar7,L"\' as the InFilename.",0x14);
    }
  }
  else {
    iVar4 = UE::String::FindFirstChar(&local_508,L'.',CaseSensitive);
    local_508.DataPtr = pwVar2;
    local_508._8_8_ = uVar1;
    iVar5 = UE::String::FindFirstChar(&local_508,L'\\',CaseSensitive);
    local_508.DataPtr = pwVar2;
    local_508._8_8_ = uVar1;
    local_4f4 = UE::String::FindFirstChar(&local_508,L':',CaseSensitive);
    if (((((local_4f8 & AllowDots) != None) || (iVar4 == -1)) && (iVar5 == -1)) && (local_4f4 == -1)
       ) {
      param_2->CurPos = param_2->Base;
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,pwVar2,iVar8);
      bVar3 = true;
      goto LAB_141ebf1ee;
    }
    local_508.DataPtr = param_1->DataPtr;
    local_508.Size = param_1->Size;
    local_508._12_4_ = *(undefined4 *)&param_1->field_0xc;
    bVar3 = FPathViews::IsRelativePath(&local_508);
    if (bVar3) {
      local_508.DataPtr = param_1->DataPtr;
      local_508.Size = param_1->Size;
      local_508._12_4_ = *(undefined4 *)&param_1->field_0xc;
      local_4a8.Base = local_488;
      local_4a8.bIsDynamic = false;
      local_4a8.bIsExternal = false;
      local_4a8.CurPos = local_488;
      local_4a8.End = (wchar_t *)&local_288;
      FPathViews::ToAbsolutePath(&local_508,&local_4a8);
      local_508.Size = (int)((longlong)local_4a8.CurPos - (longlong)local_4a8.Base >> 1);
      local_508.DataPtr = local_4a8.Base;
      bVar3 = FPathViews::IsRelativePath(&local_508);
      if (!bVar3) {
        iVar6 = (int)((longlong)local_4a8.CurPos - (longlong)local_4a8.Base >> 1);
        if (1 < iVar6) {
          local_508.Size = iVar6;
          local_508.DataPtr = local_4a8.Base;
          bVar3 = TryConvertFilenameToLongPackageName
                            (&local_508,param_2,(TStringBuilderBase<wchar_t> *)0x0,local_4f8);
          if (bVar3) {
            TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_4a8);
            bVar3 = true;
            goto LAB_141ebf1ee;
          }
        }
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_4a8);
    }
    if (param_3 != (TStringBuilderBase<wchar_t> *)0x0) {
      local_4e8.bIsDynamic = false;
      local_4e8.bIsExternal = false;
      local_4e8.Base = &local_4c8;
      local_4e8.CurPos = &local_4c8;
      local_4e8.End = (wchar_t *)&local_4a8;
      if (iVar4 != -1) {
        local_4e8.CurPos = local_4c6;
        local_4c8 = L'.';
      }
      if (iVar5 != -1) {
        if (&local_4a8 < (TStringBuilderBase<wchar_t> *)(local_4e8.CurPos + 1)) {
          TStringBuilderBase<wchar_t>::Extend(&local_4e8,1);
        }
        *local_4e8.CurPos = L'\\';
        local_4e8.CurPos = local_4e8.CurPos + 1;
      }
      if (local_4f4 != -1) {
        if (local_4e8.End < (TStringBuilderBase<wchar_t> *)(local_4e8.CurPos + 1)) {
          TStringBuilderBase<wchar_t>::Extend(&local_4e8,1);
        }
        *local_4e8.CurPos = L':';
        local_4e8.CurPos = local_4e8.CurPos + 1;
      }
      param_3->CurPos = param_3->Base;
      pTVar7 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                         (param_3,L"FilenameToLongPackageName failed to convert \'",0x2d);
      pTVar7 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                         (pTVar7,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar7,L"\'. ",3);
      pTVar7 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_3,L"Attempt result was \'",0x14)
      ;
      pTVar7 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar7,pwVar2,iVar8);
      pTVar7 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                         (pTVar7,L"\', but the path contains illegal characters \'",0x2d);
      pTVar7 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                         (pTVar7,local_4e8.Base,
                          (int)((longlong)local_4e8.CurPos - (longlong)local_4e8.Base >> 1));
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar7,L"\'.",2);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_4e8);
    }
  }
  bVar3 = false;
LAB_141ebf1ee:
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_288);
  return bVar3;
}

// TryConvertGameRelativePackagePathToLocalPath @ 141ebf230

bool __cdecl
FPackageName::TryConvertGameRelativePackagePathToLocalPath
          (TStringView<wchar_t> *param_1,FString *param_2)

{
  wchar_t *_Str2;
  FScriptContainerElement *pFVar1;
  ForAnyElementType _Src;
  bool bVar2;
  int iVar3;
  int iVar4;
  FString *pFVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  FString local_88;
  FString local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  FString local_48;
  FString local_38;
  
  _Str2 = param_1->DataPtr;
  iVar4 = param_1->Size;
  if (1 < param_1->Size) {
    iVar4 = 1;
  }
  pFVar7 = (FScriptContainerElement *)0x0;
  iVar6 = 0;
  iVar3 = iVar6;
  if (0 < iVar4) {
    iVar3 = iVar4;
  }
  iVar4 = 0;
  if (iVar3 == 1) {
    iVar3 = wcsncmp(L"/",_Str2,1);
    if (iVar3 == 0) {
      ::FString::FString(&local_78,L"");
      pFVar5 = ::FString::ConstructFromPtrSize
                         ((FString *)&local_58,_Str2,(int)*(undefined8 *)&param_1->Size);
      iVar3 = iVar4;
      if (&local_48 != pFVar5) {
        pFVar7 = (pFVar5->Data).AllocatorInstance.Data;
        (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar3 = (pFVar5->Data).ArrayNum;
        (pFVar5->Data).ArrayNum = 0;
        (pFVar5->Data).ArrayMax = 0;
      }
      if (local_58.DataPtr != (wchar_t *)0x0) {
        FMemory::Free(local_58.DataPtr);
      }
      local_68.Size = local_78.Data.ArrayNum + -1;
      if (local_78.Data.ArrayNum == 0) {
        local_68.Size = iVar4;
      }
      if (iVar3 != 0) {
        iVar6 = iVar3 + -1;
      }
      local_58.Size = iVar6;
      local_68.DataPtr = (wchar_t *)local_78.Data.AllocatorInstance.Data;
      local_58.DataPtr = (wchar_t *)pFVar7;
      bVar2 = TryConvertLongPackageNameToFilename(&local_58,param_2,&local_68);
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      if (local_78.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return bVar2;
      }
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
      return bVar2;
    }
  }
  pFVar5 = FPaths::ProjectContentDir((FString *)&local_58);
  FPaths::ConvertRelativePathToFull(&local_78,pFVar5);
  if (local_58.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_58.DataPtr);
  }
  pFVar5 = ::FString::ConstructFromPtrSize
                     ((FString *)&local_58,_Str2,(int)*(undefined8 *)&param_1->Size);
  iVar3 = iVar4;
  if (&local_38 != pFVar5) {
    pFVar7 = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar3 = (pFVar5->Data).ArrayNum;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if (local_58.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_58.DataPtr);
  }
  _Src.Data = local_78.Data.AllocatorInstance.Data;
  iVar6 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar6 = iVar4;
  }
  iVar4 = iVar6 + 1;
  iVar3 = local_78.Data.ArrayNum;
  if ((iVar3 == 0) && (iVar4 != 0)) {
    iVar4 = iVar6 + 2;
LAB_141ebf3f0:
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (iVar4 == 0) {
      local_88.Data._8_8_ = local_78.Data._8_8_ & 0xffffffff;
      goto LAB_141ebf441;
    }
  }
  else if (iVar3 == 0) goto LAB_141ebf3f0;
  local_88.Data.ArrayNum = iVar3;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar8 = iVar3 + iVar4;
  if ((int)uVar8 < iVar3) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,uVar8,0,(ForAnyElementType *)&local_88,iVar3,&local_88.Data.ArrayMax);
  if (iVar3 != 0) {
    memcpy(local_88.Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar3 * 2);
  }
LAB_141ebf441:
  ::FString::PathAppend(&local_88,(wchar_t *)pFVar7,iVar6);
  if (param_2 != &local_88) {
    pFVar1 = (param_2->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_2->Data).AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
    (param_2->Data).ArrayNum = local_88.Data.ArrayNum;
    (param_2->Data).ArrayMax = local_88.Data.ArrayMax;
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return true;
}

// TryConvertLongPackageNameToFilename @ 141ebf4e0

bool __cdecl
FPackageName::TryConvertLongPackageNameToFilename
          (FString *param_1,FString *param_2,FString *param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  local_28.DataPtr = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
  iVar1 = (param_3->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  local_18.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  iVar1 = (param_1->Data).ArrayNum;
  local_28.Size = iVar3;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  local_18.Size = iVar3;
  bVar2 = TryConvertLongPackageNameToFilename(&local_18,param_2,&local_28);
  return bVar2;
}

// TryConvertLongPackageNameToFilename @ 141ebf550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FPackageName::TryConvertLongPackageNameToFilename
          (TStringView<wchar_t> *param_1,FString *param_2,TStringView<wchar_t> *param_3)

{
  FMountPoint *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  wchar_t *pwVar4;
  bool bVar5;
  undefined1 uVar6;
  FLongPackagePathsSingleton *SRWLock;
  FMountPoint **ppFVar7;
  void *pvVar8;
  ulong64 uVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_2f8 [32];
  TStringView<wchar_t> local_2d8;
  FScriptContainerElement *local_2c8;
  int iStack_2c0;
  undefined4 uStack_2bc;
  TStringView<wchar_t> local_2b8;
  TStringView<wchar_t> local_2a8;
  TStringView<wchar_t> local_298;
  TStringView<wchar_t> local_288;
  TStringBuilderBase<wchar_t> local_278;
  wchar_t local_258 [256];
  ulonglong local_58 [4];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStack_2f8;
  SRWLock = FLongPackagePathsSingleton::Get();
  if (SRWLock == (FLongPackagePathsSingleton *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  local_2b8.DataPtr = param_1->DataPtr;
  local_2b8.Size = param_1->Size;
  local_2b8._12_4_ = *(undefined4 *)&param_1->field_0xc;
  ppFVar7 = TDirectoryTree<FMountPoint_*>::FindClosestValue(&SRWLock->RootPathTree,&local_2b8);
  if (ppFVar7 != (FMountPoint **)0x0) {
    pFVar1 = *ppFVar7;
    local_298.DataPtr = param_1->DataPtr;
    local_298.Size = param_1->Size;
    local_298._12_4_ = *(undefined4 *)&param_1->field_0xc;
    local_2d8.DataPtr = (wchar_t *)0x0;
    local_2d8.Size = 0;
    local_2c8 = (pFVar1->RootPath).Data.AllocatorInstance.Data;
    iVar10 = (pFVar1->RootPath).Data.ArrayNum;
    iStack_2c0 = iVar10 + -1;
    if (iVar10 == 0) {
      iStack_2c0 = 0;
    }
    local_2a8._12_4_ = uStack_2bc;
    local_2a8.Size = iStack_2c0;
    local_2a8.DataPtr = (wchar_t *)local_2c8;
    bVar5 = FPathViews::TryMakeChildPathRelativeTo(&local_298,&local_2a8,&local_2d8);
    if (bVar5) {
      local_278.Base = local_258;
      local_278.bIsDynamic = false;
      local_278.bIsExternal = false;
      local_278.CurPos = local_258;
      local_278.End = (wchar_t *)local_58;
      iVar10 = (pFVar1->ContentPathRelative).Data.ArrayNum;
      pFVar2 = (pFVar1->ContentPathRelative).Data.AllocatorInstance.Data;
      iVar11 = iVar10 + -1;
      if (iVar10 == 0) {
        iVar11 = 0;
      }
      uVar9 = (ulong64)iVar11;
      if (local_58 < local_258 + uVar9) {
        TStringBuilderBase<wchar_t>::Extend(&local_278,uVar9);
      }
      if (iVar11 != 0) {
        pvVar8 = FGenericPlatformString::Memcpy(local_278.CurPos,pFVar2,uVar9 * 2);
        local_278.CurPos = (wchar_t *)((longlong)pvVar8 + uVar9 * 2);
      }
      local_288._12_4_ = local_2d8._12_4_;
      local_288.Size = local_2d8.Size;
      local_288.DataPtr = local_2d8.DataPtr;
      FPathViews::AppendPath(&local_278,&local_288);
      pwVar4 = param_3->DataPtr;
      iVar10 = (int)*(undefined8 *)&param_3->Size;
      uVar9 = (ulong64)iVar10;
      if (local_278.End < local_278.CurPos + uVar9) {
        TStringBuilderBase<wchar_t>::Extend(&local_278,uVar9);
      }
      if (iVar10 != 0) {
        pvVar8 = FGenericPlatformString::Memcpy(local_278.CurPos,pwVar4,uVar9 * 2);
        local_278.CurPos = (wchar_t *)((longlong)pvVar8 + uVar9 * 2);
      }
      ::FString::AssignRange
                (param_2,local_278.Base,
                 (int)((longlong)local_278.CurPos - (longlong)local_278.Base >> 1));
      bVar5 = true;
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_278);
      goto LAB_141ebf75d;
    }
  }
  bVar5 = false;
LAB_141ebf75d:
  if (SRWLock != (FLongPackagePathsSingleton *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return bVar5;
}

// TryConvertScriptPackageNameToModuleName @ 141ebf7b0

/* WARNING: Removing unreachable block (ram,0x000141ebf808) */

bool __cdecl
FPackageName::TryConvertScriptPackageNameToModuleName
          (TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2)

{
  uint uVar1;
  wchar_t *pwVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = param_1->Size;
  pwVar2 = param_1->DataPtr;
  uVar5 = uVar1;
  if (8 < (int)uVar1) {
    uVar5 = 8;
  }
  uVar6 = 0;
  if (0 < (int)uVar5) {
    uVar6 = uVar5;
  }
  if ((uVar6 == 8) && (iVar4 = FGenericPlatformStricmp::Strnicmp(L"/Script/",pwVar2,8), iVar4 == 0))
  {
    uVar5 = uVar1;
    if ((int)(uVar1 - 8) < (int)uVar1) {
      uVar5 = uVar1 - 8;
    }
    uVar6 = 0;
    if (0 < (int)uVar5) {
      uVar6 = uVar5;
    }
    bVar3 = true;
    param_2->DataPtr = pwVar2 + ((longlong)(int)uVar1 - (longlong)(int)uVar6);
    *(ulonglong *)&param_2->Size = (ulonglong)uVar6;
  }
  else {
    param_2->DataPtr = (wchar_t *)0x0;
    bVar3 = false;
    param_2->Size = 0;
  }
  return bVar3;
}

// TryConvertShortPackagePathToLongInObjectPath @ 141ebfaf0

bool __cdecl
FPackageName::TryConvertShortPackagePathToLongInObjectPath(FString *param_1,FString *param_2)

{
  FScriptContainerElement *_Src;
  bool bVar1;
  int iVar2;
  FString *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  ForAnyElementType FVar6;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  pFVar4 = (FScriptContainerElement *)0x0;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar5 = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  iVar2 = ::FString::Find(param_1,L".",1,CaseSensitive,FromStart,-1);
  if (iVar2 == -1) {
    FVar6.Data = pFVar4;
    if (&local_68 != param_1) {
      iVar2 = (param_1->Data).ArrayNum;
      _Src = (param_1->Data).AllocatorInstance.Data;
      local_68.Data.ArrayNum = iVar2;
      FVar6.Data = pFVar5;
      if (((iVar2 != 0) || (local_68.Data.ArrayMax != 0)) &&
         (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar2,local_68.Data.ArrayMax,(ForAnyElementType *)&local_68,iVar2,
                     &local_68.Data.ArrayMax), iVar2 != 0)) {
        memcpy(local_68.Data.AllocatorInstance.Data,_Src,(longlong)iVar2 * 2);
      }
    }
  }
  else {
    pFVar3 = ::FString::Mid(param_1,&local_38,0,iVar2);
    if (&local_68 != pFVar3) {
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      local_68.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = (pFVar3->Data).ArrayNum;
      local_68.Data.ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    ::FString::RightChop(param_1,&local_38,iVar2 + 1);
    FVar6.Data = local_38.Data.AllocatorInstance.Data;
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  bVar1 = SearchForPackageOnDisk(&local_68,&local_48,(FString *)0x0);
  if (bVar1) {
    ::FString::PrintfImpl(&local_58,L"%s.%s");
    if (param_2 != &local_58) {
      pFVar4 = (param_2->Data).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (param_2->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
      (param_2->Data).ArrayNum = local_58.Data.ArrayNum;
      (param_2->Data).ArrayMax = local_58.Data.ArrayMax;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    pFVar4 = (FScriptContainerElement *)&DAT_00000001;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (FVar6.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar6.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return (bool)(char)pFVar4;
}

// TryConvertToMountedPackagePath @ 141ebfd20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FPackageName::TryConvertToMountedPackagePath
          (FString *param_1,FPackagePath *param_2,EErrorCode *param_3)

{
  int iVar1;
  bool bVar2;
  undefined3 uVar3;
  bool bVar4;
  FPackagePath *pFVar5;
  undefined1 auStackY_518 [32];
  EPackageExtension local_4c8 [16];
  FPackagePath local_4b8;
  undefined4 uStack_4ac;
  TStringView<wchar_t> local_4a8;
  TStringView<wchar_t> local_498;
  TStringView<wchar_t> local_488;
  TStringView<wchar_t> local_478;
  TStringBuilderBase<wchar_t> local_468;
  wchar_t local_448 [16];
  TStringBuilderBase<wchar_t> local_428;
  wchar_t local_408 [64];
  TStringBuilderBase<wchar_t> local_388;
  wchar_t local_368 [64];
  TStringBuilderBase<wchar_t> local_2e8;
  wchar_t local_2c8 [64];
  TStringBuilderBase<wchar_t> local_248;
  wchar_t local_228 [256];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStackY_518;
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2005,"TryConvertToPackagePath",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Misc\\PackageName.cpp"
               ,0x7d5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2005);
  }
  local_388.Base = local_368;
  local_388.CurPos = local_368;
  local_388.bIsDynamic = false;
  local_388.bIsExternal = false;
  local_388.End = (wchar_t *)&local_2e8;
  local_428.bIsDynamic = false;
  local_428.bIsExternal = false;
  local_428.Base = local_408;
  local_428.CurPos = local_408;
  local_428.End = (wchar_t *)&local_388;
  local_248.Base = local_228;
  local_248.CurPos = local_228;
  local_248.End = (wchar_t *)local_28;
  local_2e8.Base = local_2c8;
  local_2e8.CurPos = local_2c8;
  local_2e8.End = (wchar_t *)&local_248;
  local_468.Base = local_448;
  local_468.CurPos = local_448;
  local_468.End = (wchar_t *)&local_428;
  local_4b8.PackageName = (FName)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  local_248.bIsDynamic = false;
  local_248.bIsExternal = false;
  local_2e8.bIsDynamic = false;
  local_2e8.bIsExternal = false;
  local_468.bIsDynamic = false;
  local_468.bIsExternal = false;
  local_4b8._8_4_ = iVar1 + -1;
  if (iVar1 == 0) {
    local_4b8._8_4_ = 0;
  }
  local_4a8.DataPtr = (wchar_t *)local_4b8.PackageName;
  local_4a8.Size = local_4b8._8_4_;
  bVar4 = TryConvertToMountedPathComponents
                    (&local_4a8,&local_388,&local_428,&local_248,&local_2e8,local_4c8,&local_468,
                     (EFlexNameType *)0x0,param_3);
  if (bVar4) {
    local_4b8.PackageName = (FName)local_468.Base;
    local_4b8._8_4_ = SUB84((longlong)local_468.CurPos - (longlong)local_468.Base >> 1,0);
    local_478._12_4_ = uStack_4ac;
    local_478.Size = local_4b8._8_4_;
    local_498.Size = (int)((longlong)local_248.CurPos - (longlong)local_248.Base >> 1);
    local_488.Size = (int)((longlong)local_428.CurPos - (longlong)local_428.Base >> 1);
    local_4a8.Size = (int)((longlong)local_388.CurPos - (longlong)local_388.Base >> 1);
    local_478.DataPtr = local_468.Base;
    local_498.DataPtr = local_248.Base;
    local_4a8.DataPtr = local_388.Base;
    local_488.DataPtr = local_428.Base;
    pFVar5 = FPackagePath::FromMountedComponents
                       (&local_4b8,&local_4a8,&local_488,&local_498,local_4c8[0],&local_478);
    param_2->PackageName = pFVar5->PackageName;
    uVar3 = *(undefined3 *)&pFVar5->field_0x9;
    param_2->HeaderExtension = pFVar5->HeaderExtension;
    *(undefined3 *)&param_2->field_0x9 = uVar3;
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_468);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_2e8);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_248);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_428);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_388);
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar4;
}

// TryConvertToMountedPath @ 141ec0030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FPackageName::TryConvertToMountedPath
          (TStringView<wchar_t> *param_1,FString *param_2,FString *param_3,FString *param_4,
          FString *param_5,FString *param_6,EFlexNameType *param_7,EErrorCode *param_8)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  int iVar7;
  int iVar8;
  undefined1 auStackY_8c8 [32];
  EPackageExtension local_878 [16];
  TStringView<wchar_t> local_868;
  FString local_858;
  FString local_848;
  FString local_838;
  FString local_828;
  TStringBuilderBase<wchar_t> local_818;
  wchar_t local_7f8 [16];
  TStringBuilderBase<wchar_t> local_7d8;
  FScriptContainerElement local_7b8 [256];
  TStringBuilderBase<wchar_t> local_6b8;
  wchar_t local_698 [256];
  TStringBuilderBase<wchar_t> local_498;
  wchar_t local_478 [256];
  TStringBuilderBase<wchar_t> local_278;
  wchar_t local_258 [256];
  ulonglong local_58 [3];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStackY_8c8;
  local_868.DataPtr = param_1->DataPtr;
  local_868.Size = param_1->Size;
  local_868._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_278.Base = local_258;
  local_278.CurPos = local_258;
  local_278.End = (wchar_t *)local_58;
  local_498.Base = local_478;
  local_498.CurPos = local_478;
  local_498.End = (wchar_t *)&local_278;
  local_278.bIsDynamic = false;
  local_278.bIsExternal = false;
  local_6b8.Base = local_698;
  local_498.bIsDynamic = false;
  local_498.bIsExternal = false;
  local_6b8.CurPos = local_698;
  local_6b8.End = (wchar_t *)&local_498;
  local_7d8.Base = (wchar_t *)local_7b8;
  local_7d8.CurPos = (wchar_t *)local_7b8;
  local_7d8.End = (wchar_t *)&local_6b8;
  local_818.Base = local_7f8;
  local_818.CurPos = local_7f8;
  local_818.End = (wchar_t *)&local_7d8;
  local_6b8.bIsDynamic = false;
  local_6b8.bIsExternal = false;
  local_7d8.bIsDynamic = false;
  local_7d8.bIsExternal = false;
  local_818.bIsDynamic = false;
  local_818.bIsExternal = false;
  bVar2 = TryConvertToMountedPathComponents
                    (&local_868,&local_278,&local_498,&local_6b8,&local_7d8,local_878,&local_818,
                     param_7,param_8);
  if (bVar2) {
    if (param_2 != (FString *)0x0) {
      local_858.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_858.Data.ArrayNum = 0;
      local_858.Data.ArrayMax = 0;
      pFVar5 = ::FString::ConstructFromPtrSize
                         ((FString *)&local_868,local_498.Base,
                          (int)((longlong)local_498.CurPos - (longlong)local_498.Base >> 1));
      if (&local_858 != pFVar5) {
        if (local_858.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_858.Data.AllocatorInstance.Data);
        }
        local_858.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
        (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_858.Data.ArrayNum = (pFVar5->Data).ArrayNum;
        local_858.Data.ArrayMax = (pFVar5->Data).ArrayMax;
        (pFVar5->Data).ArrayNum = 0;
        (pFVar5->Data).ArrayMax = 0;
      }
      if ((FScriptContainerElement *)local_868.DataPtr != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_868.DataPtr);
      }
      ::FString::ConcatFR(&local_838,&local_858,local_6b8.Base,
                          (int)((longlong)local_6b8.CurPos - (longlong)local_6b8.Base >> 1));
      if (param_2 != &local_838) {
        pFVar1 = (param_2->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (param_2->Data).AllocatorInstance.Data = local_838.Data.AllocatorInstance.Data;
        (param_2->Data).ArrayNum = local_838.Data.ArrayNum;
        (param_2->Data).ArrayMax = local_838.Data.ArrayMax;
        local_838.Data.ArrayNum = 0;
        local_838.Data.ArrayMax = 0;
        local_838.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_838.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_838.Data.AllocatorInstance.Data);
      }
      if (local_858.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_858.Data.AllocatorInstance.Data);
      }
    }
    if (param_3 != (FString *)0x0) {
      local_848.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_848.Data.ArrayNum = 0;
      local_848.Data.ArrayMax = 0;
      pFVar5 = ::FString::ConstructFromPtrSize
                         ((FString *)&local_868,local_278.Base,
                          (int)((longlong)local_278.CurPos - (longlong)local_278.Base >> 1));
      if (&local_848 != pFVar5) {
        if (local_848.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_848.Data.AllocatorInstance.Data);
        }
        local_848.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
        (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_848.Data.ArrayNum = (pFVar5->Data).ArrayNum;
        local_848.Data.ArrayMax = (pFVar5->Data).ArrayMax;
        (pFVar5->Data).ArrayNum = 0;
        (pFVar5->Data).ArrayMax = 0;
      }
      if ((FScriptContainerElement *)local_868.DataPtr != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_868.DataPtr);
      }
      ::FString::ConcatFR(&local_828,&local_848,local_6b8.Base,
                          (int)((longlong)local_6b8.CurPos - (longlong)local_6b8.Base >> 1));
      if (param_3 != &local_828) {
        pFVar1 = (param_3->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (param_3->Data).AllocatorInstance.Data = local_828.Data.AllocatorInstance.Data;
        (param_3->Data).ArrayNum = local_828.Data.ArrayNum;
        (param_3->Data).ArrayMax = local_828.Data.ArrayMax;
        local_828.Data.ArrayNum = 0;
        local_828.Data.ArrayMax = 0;
        local_828.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_828.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_828.Data.AllocatorInstance.Data);
      }
      if (local_848.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_848.Data.AllocatorInstance.Data);
      }
    }
    pwVar6 = local_7d8.Base;
    if ((param_4 != (FString *)0x0) || (param_5 != (FString *)0x0)) {
      iVar7 = (int)((longlong)local_7d8.CurPos - (longlong)local_7d8.Base >> 1);
      local_868.Size = iVar7;
      local_868.DataPtr = local_7d8.Base;
      iVar3 = UE::String::FindFirstChar(&local_868,L':',CaseSensitive);
      if (iVar3 == -1) {
        if (param_4 != (FString *)0x0) {
          ::FString::AssignRange(param_4,pwVar6,iVar7);
        }
        if (param_5 != (FString *)0x0) {
          ::FString::Reset(param_5,0);
        }
      }
      else {
        if (param_4 != (FString *)0x0) {
          iVar4 = iVar7;
          if (iVar3 < iVar7) {
            iVar4 = iVar3;
          }
          iVar8 = 0;
          if (0 < iVar4) {
            iVar8 = iVar4;
          }
          ::FString::AssignRange(param_4,pwVar6,iVar8);
        }
        if (param_5 != (FString *)0x0) {
          iVar4 = (iVar7 - iVar3) + -1;
          iVar3 = iVar7;
          if (iVar4 < iVar7) {
            iVar3 = iVar4;
          }
          iVar4 = 0;
          if (0 < iVar3) {
            iVar4 = iVar3;
          }
          ::FString::AssignRange
                    (param_5,(wchar_t *)((longlong)pwVar6 + ((longlong)iVar7 - (longlong)iVar4) * 2)
                     ,iVar4);
        }
      }
    }
    if (param_6 != (FString *)0x0) {
      if (local_878[0] == Custom) {
        if (local_818.End < (TStringBuilderBase<wchar_t> *)(local_818.CurPos + 1)) {
          TStringBuilderBase<wchar_t>::Extend(&local_818,1);
        }
        *local_818.CurPos = L'\0';
        pwVar6 = local_818.Base;
      }
      else {
        pwVar6 = ::LexToString(local_878[0]);
      }
      ::FString::operator=(param_6,pwVar6);
    }
    bVar2 = true;
  }
  else {
    if (param_2 != (FString *)0x0) {
      ::FString::Reset(param_2,0);
    }
    if (param_3 != (FString *)0x0) {
      ::FString::Reset(param_3,0);
    }
    if (param_4 != (FString *)0x0) {
      ::FString::Reset(param_4,0);
    }
    if (param_5 != (FString *)0x0) {
      ::FString::Reset(param_5,0);
    }
    if (param_6 != (FString *)0x0) {
      ::FString::Reset(param_6,0);
    }
    if (param_7 != (EFlexNameType *)0x0) {
      *param_7 = Invalid;
    }
    bVar2 = false;
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_818);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_7d8);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_6b8);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_498);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_278);
  return bVar2;
}

// TryConvertToMountedPathComponents @ 141ec0550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __cdecl
FPackageName::TryConvertToMountedPathComponents
          (TStringView<wchar_t> *param_1,TStringBuilderBase<wchar_t> *param_2,
          TStringBuilderBase<wchar_t> *param_3,TStringBuilderBase<wchar_t> *param_4,
          TStringBuilderBase<wchar_t> *param_5,EPackageExtension *param_6,
          TStringBuilderBase<wchar_t> *param_7,EFlexNameType *param_8,EErrorCode *param_9)

{
  code *pcVar1;
  wchar_t *pwVar2;
  wchar_t **ppwVar3;
  EPackageExtension *pEVar4;
  bool bVar5;
  EPackageExtension EVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  void *pvVar11;
  TStringBuilderBase<wchar_t> *this;
  int iVar12;
  ulong64 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  TStringBuilderBase<wchar_t> *pTVar18;
  wchar_t *pwVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStackY_6b8 [32];
  undefined4 uStack_67c;
  undefined8 local_678;
  EFlexNameType local_670 [2];
  TStringBuilderBase<wchar_t> *local_668;
  EPackageExtension *local_660;
  EFlexNameType *local_658;
  wchar_t *local_648;
  TStringBuilderBase<wchar_t> *local_638;
  TStringBuilderBase<wchar_t> *local_630;
  TStringBuilderBase<wchar_t> *local_628;
  undefined8 uStack_620;
  undefined8 local_618;
  int iStack_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  int iStack_5b0;
  undefined4 uStack_5ac;
  undefined8 local_5a8;
  int iStack_5a0;
  undefined4 uStack_59c;
  TStringView<wchar_t> local_598;
  TStringView<wchar_t> local_588;
  TStringView<wchar_t> local_578;
  TStringView<wchar_t> local_568;
  TStringView<wchar_t> local_558;
  TStringView<wchar_t> local_548;
  TStringView<wchar_t> local_538;
  TStringView<wchar_t> local_528;
  TStringView<wchar_t> local_518;
  TStringView<wchar_t> local_508;
  TStringView<wchar_t> local_4f8;
  TStringView<wchar_t> local_4e8;
  TStringView<wchar_t> local_4d8;
  TStringBuilderBase<wchar_t> local_4c8;
  TStringBuilderBase<wchar_t> local_4a8 [16];
  TStringBuilderBase<wchar_t> local_2a8;
  wchar_t local_288 [256];
  ulonglong local_88 [9];
  
  local_88[0] = __security_cookie.value ^ (ulonglong)auStackY_6b8;
  local_598.DataPtr = param_1->DataPtr;
  local_598.Size = param_1->Size;
  local_598._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_660 = param_6;
  local_628 = param_5;
  local_630 = param_7;
  local_658 = param_8;
  local_648 = (wchar_t *)param_9;
  local_678 = (TStringBuilderBase<wchar_t> *)param_1;
  local_638 = param_3;
  bVar5 = TryGetMountPointForPath(&local_598,param_2,param_3,param_4,local_670,param_9);
  pEVar4 = local_660;
  if (!bVar5) {
    if ((param_9 != (EErrorCode *)0x0) && (*param_9 == PackageNamePathNotMounted)) {
      local_588.DataPtr = ((TStringView<wchar_t> *)local_678)->DataPtr;
      local_588.Size = ((TStringView<wchar_t> *)local_678)->Size;
      local_588._12_4_ = *(undefined4 *)&((TStringView<wchar_t> *)local_678)->field_0xc;
      iVar8 = UE::String::FindFirstChar(&local_588,L' ',CaseSensitive);
      if (iVar8 != -1) {
        *param_9 = PackageNameSpacesNotAllowed;
      }
    }
    param_2->CurPos = param_2->Base;
    param_3->CurPos = param_3->Base;
    param_4->CurPos = param_4->Base;
    param_5->CurPos = param_5->Base;
    *local_660 = Unspecified;
    param_7->CurPos = param_7->Base;
    if (param_8 != (EFlexNameType *)0x0) {
      *param_8 = Invalid;
    }
    return false;
  }
  param_5->CurPos = param_5->Base;
  *local_660 = Unspecified;
  param_7->CurPos = param_7->Base;
  if (local_670[0] == LocalPath) {
    local_578.DataPtr = param_4->Base;
    local_578._12_4_ = uStack_67c;
    local_578.Size = (int)((longlong)param_4->CurPos - (longlong)local_578.DataPtr >> 1);
    EVar6 = FPackagePath::ParseExtension(&local_578,(int *)&local_678);
    *pEVar4 = EVar6;
    if (EVar6 == Custom) {
      iVar15 = (int)((longlong)param_4->CurPos - (longlong)param_4->Base >> 1);
      iVar8 = iVar15;
      if (iVar15 - (int)local_678 < iVar15) {
        iVar8 = iVar15 - (int)local_678;
      }
      iVar16 = 0;
      if (0 < iVar8) {
        iVar16 = iVar8;
      }
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                (param_7,param_4->Base + ((longlong)iVar15 - (longlong)iVar16),iVar16);
    }
    iVar8 = (int)((longlong)param_4->CurPos - (longlong)param_4->Base >> 1);
    iVar15 = iVar8 - (int)local_678;
    if ((iVar8 < iVar15) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount <= Len()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                           ,0xe8,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      uVar7 = (*pcVar1)();
      return (bool)uVar7;
    }
    param_4->CurPos = param_4->CurPos + -(longlong)iVar15;
    goto LAB_141ec10b1;
  }
  if (local_670[0] != ObjectPath) {
    if ((local_670[0] != PackageName) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PathFlexNameType == EFlexNameType::PackageName",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Misc\\PackageName.cpp"
                           ,0x633,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      uVar7 = (*pcVar1)();
      return (bool)uVar7;
    }
    local_668 = (TStringBuilderBase<wchar_t> *)param_2->Base;
    local_2a8.Base = local_288;
    local_2a8.CurPos = local_288;
    local_2a8.End = (wchar_t *)local_88;
    iVar8 = (int)((longlong)param_2->CurPos - (longlong)local_668 >> 1);
    uVar13 = (ulong64)iVar8;
    local_2a8.bIsDynamic = false;
    local_2a8.bIsExternal = false;
    if (local_88 < local_288 + uVar13) {
      TStringBuilderBase<wchar_t>::Extend(&local_2a8,uVar13);
    }
    if (iVar8 != 0) {
      pvVar11 = FGenericPlatformString::Memcpy(local_2a8.CurPos,local_668,uVar13 * 2);
      local_2a8.CurPos = (wchar_t *)((longlong)pvVar11 + uVar13 * 2);
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              (&local_2a8,param_4->Base,
               (int)((longlong)param_4->CurPos - (longlong)param_4->Base >> 1));
    local_618 = local_2a8.Base;
    pwVar19 = local_618;
    iVar8 = (int)((longlong)local_2a8.CurPos - (longlong)local_2a8.Base >> 1);
    local_618._0_4_ = SUB84(local_2a8.Base,0);
    uVar20 = (undefined4)local_618;
    local_618._4_4_ = (undefined4)((ulonglong)local_2a8.Base >> 0x20);
    uVar21 = local_618._4_4_;
    local_648 = local_2a8.Base;
    local_618 = pwVar19;
    iStack_610 = iVar8;
    if (0 < iVar8) {
      iVar15 = iVar8 + -1;
      local_658 = (EFlexNameType *)CONCAT44(local_658._4_4_,iVar15);
      if (((iVar15 < 0) || (iVar8 <= iVar15)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0 && Index < Size",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                             ,0x234,
                             L"Index out of bounds on StringView: index %i on a view with a length of %i"
                            ), bVar5)) {
        pcVar1 = (code *)swi(3);
        uVar7 = (*pcVar1)();
        return (bool)uVar7;
      }
      bVar5 = FPathViews::IsSeparator(local_648[(longlong)iVar8 + -1]);
      if (bVar5) {
        iVar15 = iVar8;
        if ((int)local_658 < iVar8) {
          iVar15 = (int)local_658;
        }
        local_618 = local_648;
        pwVar19 = local_618;
        iVar8 = 0;
        if (0 < iVar15) {
          iVar8 = iVar15;
        }
        local_618._0_4_ = SUB84(local_648,0);
        local_618._4_4_ = (undefined4)((ulonglong)local_648 >> 0x20);
        uVar20 = (undefined4)local_618;
        uVar21 = local_618._4_4_;
        local_618 = pwVar19;
        iStack_610 = iVar8;
      }
    }
    local_4e8.DataPtr._0_4_ = uVar20;
    local_4e8.DataPtr._4_4_ = uVar21;
    local_4e8.Size = iVar8;
    iVar15 = UE::String::FindFirstChar(&local_4e8,L' ',CaseSensitive);
    if (iVar15 == -1) {
      local_4d8.DataPtr._0_4_ = uVar20;
      local_4d8.DataPtr._4_4_ = uVar21;
      local_4d8.Size = iVar8;
      bVar5 = IsValidTextForLongPackageName(&local_4d8,param_9);
      if (bVar5) {
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_2a8);
        goto LAB_141ec10b1;
      }
      param_2->CurPos = param_2->Base;
      local_638->CurPos = local_638->Base;
      param_4->CurPos = param_4->Base;
      param_5->CurPos = param_5->Base;
      *local_660 = Unspecified;
      local_630->CurPos = local_630->Base;
      if (param_8 != (EFlexNameType *)0x0) {
        *param_8 = Invalid;
      }
    }
    else {
      param_2->CurPos = param_2->Base;
      local_638->CurPos = local_638->Base;
      param_4->CurPos = param_4->Base;
      param_5->CurPos = param_5->Base;
      *local_660 = Unspecified;
      local_630->CurPos = local_630->Base;
      if (param_8 != (EFlexNameType *)0x0) {
        *param_8 = Invalid;
      }
      if (param_9 != (EErrorCode *)0x0) {
        *param_9 = PackageNameSpacesNotAllowed;
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_2a8);
        return false;
      }
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_2a8);
    return false;
  }
  pwVar19 = param_2->Base;
  local_4c8.Base = (wchar_t *)local_4a8;
  local_4c8.CurPos = (wchar_t *)local_4a8;
  local_4c8.End = (wchar_t *)&local_2a8;
  iVar8 = (int)((longlong)param_2->CurPos - (longlong)pwVar19 >> 1);
  uVar13 = (ulong64)iVar8;
  local_4c8.bIsDynamic = false;
  local_4c8.bIsExternal = false;
  if (&local_2a8 < (TStringBuilderBase<wchar_t> *)((longlong)&local_4a8[0].Base + uVar13 * 2)) {
    TStringBuilderBase<wchar_t>::Extend(&local_4c8,uVar13);
  }
  if (iVar8 != 0) {
    pvVar11 = FGenericPlatformString::Memcpy(local_4c8.CurPos,pwVar19,uVar13 * 2);
    local_4c8.CurPos = (wchar_t *)((longlong)pvVar11 + uVar13 * 2);
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            (&local_4c8,param_4->Base,
             (int)((longlong)param_4->CurPos - (longlong)param_4->Base >> 1));
  iVar16 = 0;
  iVar14 = 0;
  iVar15 = (int)((longlong)local_4c8.CurPos - (longlong)local_4c8.Base >> 1);
  ppwVar3 = (wchar_t **)local_4c8.Base;
  iVar8 = iVar14;
  local_668 = (TStringBuilderBase<wchar_t> *)local_4c8.Base;
  pTVar18 = (TStringBuilderBase<wchar_t> *)local_4c8.Base;
  while ((pTVar18 != (TStringBuilderBase<wchar_t> *)((longlong)ppwVar3 + (longlong)iVar15 * 2) &&
         (iVar9 = iswspace(*(wchar_t *)&pTVar18->Base), param_5 = local_628, iVar9 != 0))) {
    iVar8 = iVar8 + 1;
    pTVar18 = (TStringBuilderBase<wchar_t> *)((longlong)&pTVar18->Base + 2);
  }
  local_678 = (TStringBuilderBase<wchar_t> *)((longlong)&local_668->Base + (longlong)iVar8 * 2);
  iVar15 = iVar15 - iVar8;
  if (iVar15 != 0) {
    lVar17 = (longlong)iVar15;
    pwVar19 = (wchar_t *)((longlong)local_678 + (lVar17 + -1) * 2);
    do {
      iVar8 = iswspace(*pwVar19);
      if (iVar8 == 0) break;
      iVar15 = iVar15 + -1;
      pwVar19 = pwVar19 + -1;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  pTVar18 = local_678;
  local_5a8._0_4_ = SUB84(local_678,0);
  local_5a8._4_4_ = (undefined4)((ulonglong)local_678 >> 0x20);
  local_568.DataPtr._0_4_ = (undefined4)local_5a8;
  local_568.DataPtr._4_4_ = local_5a8._4_4_;
  local_568._12_4_ = uStack_59c;
  local_5a8 = local_678;
  iStack_5a0 = iVar15;
  local_568.Size = iVar15;
  iVar8 = UE::String::FindFirstChar(&local_568,L' ',CaseSensitive);
  if (iVar8 == -1) {
    local_678 = (TStringBuilderBase<wchar_t> *)((ulonglong)local_678._4_4_ << 0x20);
  }
  else {
    iVar9 = iVar15;
    if (iVar8 < iVar15) {
      iVar9 = iVar8;
    }
    iVar10 = iVar14;
    if (0 < iVar9) {
      iVar10 = iVar9;
    }
    iVar9 = (iVar15 - iVar8) + -1;
    iVar8 = iVar15;
    if (iVar9 < iVar15) {
      iVar8 = iVar9;
    }
    local_678 = (TStringBuilderBase<wchar_t> *)CONCAT44(local_678._4_4_,iVar10);
    iVar9 = iVar16;
    if (0 < iVar8) {
      iVar9 = iVar8;
    }
    pTVar18 = (TStringBuilderBase<wchar_t> *)
              ((longlong)pTVar18 + ((longlong)iVar15 - (longlong)iVar9) * 2);
    iVar15 = iVar9;
  }
  local_558.Size = iVar15;
  local_558.DataPtr = (wchar_t *)pTVar18;
  iVar8 = UE::String::FindFirstChar(&local_558,L'.',CaseSensitive);
  if (iVar8 == -1) {
    uStack_5f0 = 0;
    local_5f8 = 0;
    pwVar19 = (wchar_t *)0x0;
    iVar8 = 0;
    uStack_5e0 = 0;
    local_5e8 = 0;
    pwVar2 = (wchar_t *)0x0;
    iVar9 = 0;
  }
  else {
    iVar9 = iVar15;
    if (iVar8 < iVar15) {
      iVar9 = iVar8;
    }
    iVar10 = iVar16;
    if (0 < iVar9) {
      iVar10 = iVar9;
    }
    iVar8 = (iVar15 - iVar8) + -1;
    iVar9 = iVar15;
    if (iVar8 < iVar15) {
      iVar9 = iVar8;
    }
    iVar8 = iVar16;
    if (0 < iVar9) {
      iVar8 = iVar9;
    }
    pwVar19 = (wchar_t *)((longlong)pTVar18 + ((longlong)iVar15 - (longlong)iVar8) * 2);
    local_548.Size = iVar8;
    local_548.DataPtr = pwVar19;
    iVar9 = UE::String::FindFirstChar(&local_548,L':',CaseSensitive);
    iVar15 = iVar10;
    if (iVar9 == -1) {
      uStack_600 = 0;
      local_608 = 0;
      pwVar2 = (wchar_t *)0x0;
      uStack_600._0_4_ = 0;
      iVar9 = (int)uStack_600;
    }
    else {
      iVar10 = iVar8;
      if (iVar9 < iVar8) {
        iVar10 = iVar9;
      }
      iVar12 = iVar16;
      if (0 < iVar10) {
        iVar12 = iVar10;
      }
      iVar9 = (iVar8 - iVar9) + -1;
      iVar10 = iVar8;
      if (iVar9 < iVar8) {
        iVar10 = iVar9;
      }
      iVar9 = iVar16;
      if (0 < iVar10) {
        iVar9 = iVar10;
      }
      pwVar2 = pwVar19 + ((longlong)iVar8 - (longlong)iVar9);
      iVar8 = iVar12;
    }
  }
  if (0 < (int)local_678) {
    local_538.Size = iVar15;
    local_538.DataPtr = (wchar_t *)pTVar18;
    bVar5 = IsValidTextForLongPackageName(&local_538,(EErrorCode *)0x0);
    if (!bVar5) {
      iVar15 = (int)((longlong)local_4c8.CurPos - (longlong)local_4c8.Base >> 1);
      ppwVar3 = (wchar_t **)local_4c8.Base;
      iVar8 = iVar16;
      local_678 = (TStringBuilderBase<wchar_t> *)local_4c8.Base;
      for (pTVar18 = (TStringBuilderBase<wchar_t> *)local_4c8.Base;
          pTVar18 != (TStringBuilderBase<wchar_t> *)((longlong)ppwVar3 + (longlong)iVar15 * 2);
          pTVar18 = (TStringBuilderBase<wchar_t> *)((longlong)&pTVar18->Base + 2)) {
        iVar9 = iswspace(*(wchar_t *)&pTVar18->Base);
        param_5 = local_628;
        if (iVar9 == 0) break;
        iVar8 = iVar8 + 1;
      }
      local_628 = (TStringBuilderBase<wchar_t> *)(longlong)iVar8;
      local_668 = (TStringBuilderBase<wchar_t> *)
                  ((longlong)&local_678->Base + (longlong)local_628 * 2);
      iVar15 = iVar15 - iVar8;
      if (iVar15 != 0) {
        lVar17 = (longlong)iVar15;
        pwVar19 = (wchar_t *)((longlong)local_678 + (lVar17 + -1 + (longlong)local_628) * 2);
        do {
          iVar8 = iswspace(*pwVar19);
          if (iVar8 == 0) break;
          iVar15 = iVar15 + -1;
          pwVar19 = pwVar19 + -1;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
      }
      pTVar18 = local_668;
      local_5b8._0_4_ = SUB84(local_668,0);
      uVar20 = (undefined4)local_5b8;
      local_5b8._4_4_ = (undefined4)((ulonglong)local_668 >> 0x20);
      uVar21 = local_5b8._4_4_;
      local_528.DataPtr._0_4_ = (undefined4)local_5b8;
      local_528.DataPtr._4_4_ = local_5b8._4_4_;
      local_528._12_4_ = uStack_5ac;
      local_5b8 = local_668;
      iStack_5b0 = iVar15;
      local_528.Size = iVar15;
      iVar8 = UE::String::FindFirstChar(&local_528,L'.',CaseSensitive);
      if (iVar8 == -1) {
        uStack_5d0 = 0;
        local_5d8 = 0;
        pwVar19 = (wchar_t *)0x0;
        iVar8 = 0;
        uStack_5c0 = 0;
        local_5c8 = 0;
        pwVar2 = (wchar_t *)0x0;
        iVar9 = 0;
      }
      else {
        iVar9 = iVar15;
        if (iVar8 < iVar15) {
          iVar9 = iVar8;
        }
        iVar10 = iVar16;
        if (0 < iVar9) {
          iVar10 = iVar9;
        }
        iVar8 = (iVar15 - iVar8) + -1;
        iVar9 = iVar15;
        if (iVar8 < iVar15) {
          iVar9 = iVar8;
        }
        iVar8 = iVar16;
        if (0 < iVar9) {
          iVar8 = iVar9;
        }
        pwVar19 = (wchar_t *)
                  ((longlong)local_678 +
                  (((longlong)iVar15 - (longlong)iVar8) + (longlong)local_628) * 2);
        local_518.Size = iVar8;
        local_518.DataPtr = pwVar19;
        iVar9 = UE::String::FindFirstChar(&local_518,L':',CaseSensitive);
        iVar15 = iVar10;
        if (iVar9 == -1) {
          uStack_620 = 0;
          local_628 = (TStringBuilderBase<wchar_t> *)0x0;
          pwVar2 = (wchar_t *)0x0;
          uStack_620._0_4_ = 0;
          iVar9 = (int)uStack_620;
        }
        else {
          iVar10 = iVar8;
          if (iVar9 < iVar8) {
            iVar10 = iVar9;
          }
          iVar12 = iVar16;
          if (0 < iVar10) {
            iVar12 = iVar10;
          }
          iVar10 = (iVar8 - iVar9) + -1;
          iVar9 = iVar8;
          if (iVar10 < iVar8) {
            iVar9 = iVar10;
          }
          if (0 < iVar9) {
            iVar14 = iVar9;
          }
          pwVar2 = pwVar19 + ((longlong)iVar8 - (longlong)iVar14);
          iVar9 = iVar14;
          iVar8 = iVar12;
        }
      }
      local_508.DataPtr._0_4_ = uVar20;
      local_508.DataPtr._4_4_ = uVar21;
      local_508.Size = iVar15;
      bVar5 = IsValidTextForLongPackageName(&local_508,(EErrorCode *)0x0);
      if (bVar5) goto LAB_141ec0c9d;
    }
    param_2->CurPos = param_2->Base;
    local_638->CurPos = local_638->Base;
    param_4->CurPos = param_4->Base;
    param_5->CurPos = param_5->Base;
    *local_660 = Unspecified;
    local_630->CurPos = local_630->Base;
    if (local_658 != (EFlexNameType *)0x0) {
      *local_658 = Invalid;
    }
    if (local_648 != (wchar_t *)0x0) {
      local_648[0] = L'\x04';
      local_648[1] = L'\0';
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_4c8);
      return false;
    }
LAB_141ec0cfe:
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_4c8);
    return false;
  }
LAB_141ec0c9d:
  param_9 = (EErrorCode *)local_648;
  local_4f8.Size = iVar15;
  local_4f8.DataPtr = (wchar_t *)pTVar18;
  bVar5 = IsValidTextForLongPackageName(&local_4f8,(EErrorCode *)local_648);
  if (!bVar5) {
    param_2->CurPos = param_2->Base;
    local_638->CurPos = local_638->Base;
    param_4->CurPos = param_4->Base;
    param_5->CurPos = param_5->Base;
    *local_660 = Unspecified;
    local_630->CurPos = local_630->Base;
    if (local_658 != (EFlexNameType *)0x0) {
      *local_658 = Invalid;
    }
    goto LAB_141ec0cfe;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_5,pwVar19,iVar8);
  if (iVar9 != 0) {
    this = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_5,L":",1);
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(this,pwVar2,iVar9);
  }
  iVar14 = (int)((longlong)param_2->CurPos - (longlong)param_2->Base >> 1);
  iVar8 = iVar15;
  if (iVar14 < iVar15) {
    iVar8 = iVar14;
  }
  if (0 < iVar8) {
    iVar16 = iVar8;
  }
  if (iVar14 == iVar16) {
    if ((iVar14 != 0) && (iVar16 != 0)) {
      iVar8 = FGenericPlatformStricmp::Strnicmp(param_2->Base,(wchar_t *)pTVar18,(longlong)iVar16);
      if (iVar8 != 0) goto LAB_141ec0db9;
    }
    if (iVar14 != iVar16) goto LAB_141ec0db9;
  }
  else {
LAB_141ec0db9:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("FStringView(PackageName).StartsWith(OutMountPointPackageName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Misc\\PackageName.cpp"
                       ,0x62d,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      uVar7 = (*pcVar1)();
      return (bool)uVar7;
    }
  }
  iVar8 = (int)((longlong)param_4->CurPos - (longlong)param_4->Base >> 1);
  iVar15 = ((int)((longlong)param_2->CurPos - (longlong)param_2->Base >> 1) - iVar15) + iVar8;
  if (iVar8 < iVar15) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount <= Len()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                       ,0xe8,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      uVar7 = (*pcVar1)();
      return (bool)uVar7;
    }
  }
  param_4->CurPos = param_4->CurPos + -(longlong)iVar15;
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_4c8);
  param_8 = local_658;
LAB_141ec10b1:
  if (param_8 != (EFlexNameType *)0x0) {
    *param_8 = local_670[0];
  }
  if (param_9 != (EErrorCode *)0x0) {
    *param_9 = PackageNameUnknown;
  }
  return true;
}

// TryGetMountPointForPath @ 141ec1710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FPackageName::TryGetMountPointForPath
          (TStringView<wchar_t> *param_1,TStringBuilderBase<wchar_t> *param_2,
          TStringBuilderBase<wchar_t> *param_3,TStringBuilderBase<wchar_t> *param_4,
          EFlexNameType *param_5,EErrorCode *param_6)

{
  int iVar1;
  FMountPoint *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  FLongPackagePathsSingleton *SRWLock;
  FMountPoint **ppFVar7;
  wchar_t *pwVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_3d8 [32];
  TStringView<wchar_t> local_3b8;
  FMountPoint *local_3a8;
  int iStack_3a0;
  undefined4 uStack_39c;
  TStringBuilderBase<wchar_t> *local_398;
  FScriptContainerElement *local_388;
  int iStack_380;
  undefined4 uStack_37c;
  FScriptContainerElement *local_378;
  int iStack_370;
  undefined4 uStack_36c;
  FMountPoint *local_368;
  int iStack_360;
  undefined4 uStack_35c;
  FScriptContainerElement *local_358;
  int iStack_350;
  undefined4 uStack_34c;
  FMountPoint *local_348;
  int iStack_340;
  undefined4 uStack_33c;
  FScriptContainerElement *local_338;
  int iStack_330;
  undefined4 uStack_32c;
  TStringView<wchar_t> local_328;
  TStringView<wchar_t> local_318;
  TStringView<wchar_t> local_308;
  TStringView<wchar_t> local_2f8;
  TStringView<wchar_t> local_2e8;
  TStringView<wchar_t> local_2d8;
  TStringView<wchar_t> local_2c8;
  TStringView<wchar_t> local_2b8;
  TStringView<wchar_t> local_2a8;
  TStringView<wchar_t> local_298;
  TStringView<wchar_t> local_288;
  TStringBuilderBase<wchar_t> local_278;
  FMountPoint local_258 [9];
  ulonglong local_58 [3];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStack_3d8;
  iVar9 = param_1->Size;
  param_2->CurPos = param_2->Base;
  param_3->CurPos = param_3->Base;
  param_4->CurPos = param_4->Base;
  if (iVar9 == 0) {
    if (param_5 != (EFlexNameType *)0x0) {
      *param_5 = Invalid;
    }
    if (param_6 != (EErrorCode *)0x0) {
      *param_6 = PackageNameEmptyPath;
    }
    return false;
  }
  local_328.DataPtr = param_1->DataPtr;
  local_328.Size = param_1->Size;
  local_328._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_278.Base = (wchar_t *)local_258;
  local_278.CurPos = (wchar_t *)local_258;
  local_278.bIsDynamic = false;
  local_278.bIsExternal = false;
  local_278.End = (wchar_t *)local_58;
  local_398 = param_4;
  FPathViews::ToAbsolutePath(&local_328,&local_278);
  bVar6 = false;
  local_3b8.DataPtr = (wchar_t *)0x0;
  local_3b8.Size = 0;
  SRWLock = FLongPackagePathsSingleton::Get();
  if ((SRWLock == (FLongPackagePathsSingleton *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x1c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  local_318.DataPtr = param_1->DataPtr;
  local_318.Size = param_1->Size;
  local_318._12_4_ = *(undefined4 *)&param_1->field_0xc;
  ppFVar7 = TDirectoryTree<FMountPoint_*>::FindClosestValue(&SRWLock->RootPathTree,&local_318);
  iVar9 = 0;
  if (ppFVar7 == (FMountPoint **)0x0) {
    local_3a8 = (FMountPoint *)local_278.Base;
    iStack_3a0 = (int)((longlong)local_278.CurPos - (longlong)local_278.Base >> 1);
    local_2e8._12_4_ = uStack_39c;
    local_2e8.Size = iStack_3a0;
    local_2e8.DataPtr = local_278.Base;
    ppFVar7 = TDirectoryTree<FMountPoint_*>::FindClosestValue(&SRWLock->ContentPathTree,&local_2e8);
    if (ppFVar7 == (FMountPoint **)0x0) {
      if (param_5 != (EFlexNameType *)0x0) {
        *param_5 = Invalid;
      }
      if (param_6 != (EErrorCode *)0x0) {
        local_338 = (SRWLock->MemoryRootPath).Data.AllocatorInstance.Data;
        local_288.DataPtr = param_1->DataPtr;
        local_288.Size = param_1->Size;
        local_288._12_4_ = *(undefined4 *)&param_1->field_0xc;
        iVar1 = (SRWLock->MemoryRootPath).Data.ArrayNum;
        iStack_330 = iVar1 + -1;
        if (iVar1 == 0) {
          iStack_330 = iVar9;
        }
        local_298._12_4_ = uStack_32c;
        local_298.Size = iStack_330;
        local_298.DataPtr = (wchar_t *)local_338;
        bVar6 = FPathViews::TryMakeChildPathRelativeTo(&local_288,&local_298,&local_3b8);
        *param_6 = bVar6 + PackageNamePathNotMounted;
      }
      bVar6 = false;
      goto LAB_141ec1ad5;
    }
    pFVar2 = *ppFVar7;
    local_378 = (pFVar2->ContentPathAbsolute).Data.AllocatorInstance.Data;
    iVar1 = (pFVar2->ContentPathAbsolute).Data.ArrayNum;
    iStack_370 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_370 = iVar9;
    }
    local_368 = (FMountPoint *)local_278.Base;
    local_2d8._12_4_ = uStack_36c;
    local_2d8.Size = iStack_370;
    iStack_360 = (int)((longlong)local_278.CurPos - (longlong)local_278.Base >> 1);
    local_2c8._12_4_ = uStack_35c;
    local_2c8.Size = iStack_360;
    local_2c8.DataPtr = local_278.Base;
    local_3a8 = pFVar2;
    local_2d8.DataPtr = (wchar_t *)local_378;
    bVar4 = FPathViews::TryMakeChildPathRelativeTo(&local_2c8,&local_2d8,&local_3b8);
    if (!bVar4) {
      local_358 = (pFVar2->ContentPathRelative).Data.AllocatorInstance.Data;
      iVar1 = (pFVar2->ContentPathRelative).Data.ArrayNum;
      iStack_350 = iVar1 + -1;
      if (iVar1 == 0) {
        iStack_350 = iVar9;
      }
      local_348 = (FMountPoint *)local_278.Base;
      local_2b8._12_4_ = uStack_34c;
      local_2b8.Size = iStack_350;
      iStack_340 = (int)((longlong)local_278.CurPos - (longlong)local_278.Base >> 1);
      local_2a8._12_4_ = uStack_33c;
      local_2a8.Size = iStack_340;
      local_2a8.DataPtr = local_278.Base;
      local_2b8.DataPtr = (wchar_t *)local_358;
      bVar4 = FPathViews::TryMakeChildPathRelativeTo(&local_2a8,&local_2b8,&local_3b8);
      if (!bVar4) goto LAB_141ec1a08;
    }
    iVar1 = (local_3a8->RootPath).Data.ArrayNum;
    iVar10 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar10 = iVar9;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              (param_2,(wchar_t *)(local_3a8->RootPath).Data.AllocatorInstance.Data,iVar10);
    iVar1 = (pFVar2->ContentPathRelative).Data.ArrayNum;
    iVar10 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar10 = iVar9;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              (param_3,(wchar_t *)(pFVar2->ContentPathRelative).Data.AllocatorInstance.Data,iVar10);
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(local_398,local_3b8.DataPtr,local_3b8.Size);
    if (param_5 != (EFlexNameType *)0x0) {
      *param_5 = LocalPath;
    }
    if (param_6 != (EErrorCode *)0x0) {
      *param_6 = PackageNameUnknown;
    }
  }
  else {
    local_3a8 = *ppFVar7;
    local_2f8.DataPtr = param_1->DataPtr;
    local_2f8.Size = param_1->Size;
    local_2f8._12_4_ = *(undefined4 *)&param_1->field_0xc;
    local_388 = (local_3a8->RootPath).Data.AllocatorInstance.Data;
    iVar1 = (local_3a8->RootPath).Data.ArrayNum;
    iStack_380 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_380 = 0;
    }
    local_308._12_4_ = uStack_37c;
    local_308.Size = iStack_380;
    local_308.DataPtr = (wchar_t *)local_388;
    bVar4 = FPathViews::TryMakeChildPathRelativeTo(&local_2f8,&local_308,&local_3b8);
    pFVar2 = local_3a8;
    if (!bVar4) {
LAB_141ec1a08:
      if (param_5 != (EFlexNameType *)0x0) {
        *param_5 = Invalid;
      }
      if (param_6 != (EErrorCode *)0x0) {
        *param_6 = PackageNamePathNotMounted;
      }
      goto LAB_141ec1ad5;
    }
    iVar1 = (local_3a8->RootPath).Data.ArrayNum;
    iVar10 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar10 = 0;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              (param_2,(wchar_t *)(local_3a8->RootPath).Data.AllocatorInstance.Data,iVar10);
    iVar1 = (pFVar2->ContentPathRelative).Data.ArrayNum;
    iVar10 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar10 = iVar9;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              (param_3,(wchar_t *)(pFVar2->ContentPathRelative).Data.AllocatorInstance.Data,iVar10);
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(local_398,local_3b8.DataPtr,local_3b8.Size);
    if (param_5 != (EFlexNameType *)0x0) {
      for (pwVar8 = local_3b8.DataPtr; pwVar8 != local_3b8.DataPtr + local_3b8.Size;
          pwVar8 = pwVar8 + 1) {
        if (*pwVar8 == L'.') {
          *param_5 = ObjectPath;
          goto LAB_141ec18fc;
        }
      }
      *param_5 = PackageName;
    }
LAB_141ec18fc:
    if (param_6 != (EErrorCode *)0x0) {
      *param_6 = PackageNameUnknown;
      bVar6 = true;
      goto LAB_141ec1ad5;
    }
  }
  bVar6 = true;
LAB_141ec1ad5:
  if (SRWLock != (FLongPackagePathsSingleton *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_278);
  return bVar6;
}

// UnRegisterMountPoint @ 141ec34b0

/* WARNING: Enum "EMountFlags": Some values do not have unique names */

void __cdecl FPackageName::UnRegisterMountPoint(FString *param_1,FString *param_2)

{
  FLongPackagePathsSingleton *this;
  FMountPoint *pFVar1;
  FMountPoint local_48;
  
  this = FLongPackagePathsSingleton::Get();
  pFVar1 = FLongPackagePathsSingleton::ConstructMountPoint(&local_48,param_1,param_2,Removable);
  FLongPackagePathsSingleton::RemoveMountPoint(this,pFVar1);
  if (local_48.ContentPathAbsolute.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.ContentPathAbsolute.Data.AllocatorInstance.Data);
  }
  if (local_48.ContentPathRelative.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.ContentPathRelative.Data.AllocatorInstance.Data);
  }
  if (local_48.RootPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.RootPath.Data.AllocatorInstance.Data);
  }
  return;
}

// GetCppModuleName @ 1422af070

FName __cdecl Verse::FPackageName::GetCppModuleName(wchar_t *param_1)

{
  wchar_t *pwVar1;
  wchar_t *in_RDX;
  
  pwVar1 = wcschr(in_RDX,L'/');
  if (pwVar1 != (wchar_t *)0x0) {
    ::FName::FName((FName *)param_1,pwVar1 + 1);
    return (FName)param_1;
  }
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  return (FName)param_1;
}

// GetMountPointName @ 1422af660

FString * __cdecl
Verse::FPackageName::GetMountPointName(FString *__return_storage_ptr__,wchar_t *param_1)

{
  wchar_t *pwVar1;
  FString *pFVar2;
  bool bVar3;
  FString local_28;
  FString local_18;
  
  pwVar1 = wcschr(param_1,L'/');
  bVar3 = pwVar1 == (wchar_t *)0x0;
  if (bVar3) {
    pFVar2 = ::FString::FString(&local_28,param_1);
  }
  else {
    pFVar2 = ::FString::ConstructFromPtrSize
                       (&local_18,param_1,(int)((longlong)pwVar1 - (longlong)param_1 >> 1));
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
  (pFVar2->Data).ArrayNum = 0;
  (pFVar2->Data).ArrayMax = 0;
  if (bVar3) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPackageType @ 1422af720

EVersePackageType __cdecl Verse::FPackageName::GetPackageType(uchar *param_1)

{
  EVersePackageType EVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  int iVar5;
  int iVar6;
  
  pcVar3 = strchr((char *)param_1,0x2f);
  if (pcVar3 == (char *)0x0) {
    iVar2 = 0;
    if (param_1 != (uchar *)0x0) {
      sVar4 = strlen((char *)param_1);
      iVar2 = (int)sVar4;
    }
    iVar5 = iVar2;
    if (10 < iVar2) {
      iVar5 = 10;
    }
    iVar6 = 0;
    if (0 < iVar5) {
      iVar6 = iVar5;
    }
    if ((iVar6 == 10) &&
       (iVar2 = FGenericPlatformStricmp::Strnicmp
                          ((uchar *)"-Published",param_1 + ((longlong)iVar2 - (longlong)iVar6),10),
       iVar2 == 0)) {
      EVar1 = PublishedContent;
    }
    else {
      EVar1 = Content;
    }
    return EVar1;
  }
  iVar2 = strcmp(pcVar3 + 1,"Assets");
  EVar1 = VNI;
  if (iVar2 == 0) {
    EVar1 = Assets;
  }
  return EVar1;
}

// GetPackageType @ 1422af7e0

EVersePackageType __cdecl Verse::FPackageName::GetPackageType(wchar_t *param_1)

{
  EVersePackageType EVar1;
  int iVar2;
  wchar_t *pwVar3;
  size_t sVar4;
  int iVar5;
  int iVar6;
  
  pwVar3 = wcschr(param_1,L'/');
  if (pwVar3 == (wchar_t *)0x0) {
    iVar2 = 0;
    if (param_1 != (wchar_t *)0x0) {
      sVar4 = wcslen(param_1);
      iVar2 = (int)sVar4;
    }
    iVar5 = iVar2;
    if (10 < iVar2) {
      iVar5 = 10;
    }
    iVar6 = 0;
    if (0 < iVar5) {
      iVar6 = iVar5;
    }
    if ((iVar6 == 10) &&
       (iVar2 = FGenericPlatformStricmp::Strnicmp
                          (L"-Published",param_1 + ((longlong)iVar2 - (longlong)iVar6),10),
       iVar2 == 0)) {
      EVar1 = PublishedContent;
    }
    else {
      EVar1 = Content;
    }
    return EVar1;
  }
  iVar2 = wcscmp(pwVar3 + 1,L"Assets");
  EVar1 = VNI;
  if (iVar2 == 0) {
    EVar1 = Assets;
  }
  return EVar1;
}

// GetTaskUClassName @ 1422af8a0

FString * __cdecl
Verse::FPackageName::GetTaskUClassName
          (FString *__return_storage_ptr__,UObject *param_1,wchar_t *param_2)

{
  FName local_res8;
  FString local_18;
  
  local_res8.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
  local_res8.Number = *(uint *)&param_1->field_0x1c;
  ::FName::ToString(&local_res8,&local_18);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s%s$%s");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetTaskUClassName @ 1422af920

FString * __cdecl
Verse::FPackageName::GetTaskUClassName
          (FString *__return_storage_ptr__,wchar_t *param_1,wchar_t *param_2)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s%s$%s");
  return __return_storage_ptr__;
}

// GetVersePackageDirForAssets @ 1422af980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
Verse::FPackageName::GetVersePackageDirForAssets(FString *__return_storage_ptr__,wchar_t *param_1)

{
  int iVar1;
  size_t sVar2;
  TStringBuilderBase<wchar_t> *pTVar3;
  undefined1 auStack_d8 [32];
  TStringBuilderBase<wchar_t> local_b8;
  wchar_t local_98;
  wchar_t local_96 [63];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_d8;
  iVar1 = 0;
  if (param_1 != (wchar_t *)0x0) {
    sVar2 = wcslen(param_1);
    iVar1 = (int)sVar2;
  }
  local_b8.Base = &local_98;
  local_b8.bIsDynamic = false;
  local_b8.bIsExternal = false;
  local_b8.End = (wchar_t *)local_18;
  local_98 = L'/';
  local_b8.CurPos = local_96;
  pTVar3 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_b8,param_1,iVar1);
  if (pTVar3->End < pTVar3->CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(pTVar3,1);
  }
  *pTVar3->CurPos = L'/';
  pTVar3->CurPos = pTVar3->CurPos + 1;
  pTVar3 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar3,L"_Verse",6);
  if (pTVar3->End < pTVar3->CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(pTVar3,1);
  }
  *pTVar3->CurPos = L'/';
  pTVar3->CurPos = pTVar3->CurPos + 1;
  pTVar3 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar3,L"Assets",6);
  if (pTVar3->End < pTVar3->CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(pTVar3,1);
  }
  *pTVar3->CurPos = L'/';
  pTVar3->CurPos = pTVar3->CurPos + 1;
  if (local_b8.End < local_b8.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_b8,1);
  }
  *local_b8.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_b8.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_b8);
  return __return_storage_ptr__;
}

// GetVersePackageDirForContent @ 1422afb20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
Verse::FPackageName::GetVersePackageDirForContent(FString *__return_storage_ptr__,wchar_t *param_1)

{
  int iVar1;
  size_t sVar2;
  TStringBuilderBase<wchar_t> *pTVar3;
  undefined1 auStack_d8 [32];
  TStringBuilderBase<wchar_t> local_b8;
  wchar_t local_98;
  wchar_t local_96 [63];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_d8;
  iVar1 = 0;
  if (param_1 != (wchar_t *)0x0) {
    sVar2 = wcslen(param_1);
    iVar1 = (int)sVar2;
  }
  local_b8.Base = &local_98;
  local_b8.bIsDynamic = false;
  local_b8.bIsExternal = false;
  local_b8.End = (wchar_t *)local_18;
  local_98 = L'/';
  local_b8.CurPos = local_96;
  pTVar3 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_b8,param_1,iVar1);
  if (pTVar3->End < pTVar3->CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(pTVar3,1);
  }
  *pTVar3->CurPos = L'/';
  pTVar3->CurPos = pTVar3->CurPos + 1;
  pTVar3 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar3,L"_Verse",6);
  if (pTVar3->End < pTVar3->CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(pTVar3,1);
  }
  *pTVar3->CurPos = L'/';
  pTVar3->CurPos = pTVar3->CurPos + 1;
  if (local_b8.End < local_b8.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_b8,1);
  }
  *local_b8.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_b8.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_b8);
  return __return_storage_ptr__;
}

// GetVersePackageNameForAssets @ 1422afc80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
Verse::FPackageName::GetVersePackageNameForAssets(FString *__return_storage_ptr__,wchar_t *param_1)

{
  size_t sVar1;
  void *pvVar2;
  ulong64 uVar3;
  int iVar4;
  undefined1 auStack_e8 [32];
  TStringBuilderBase<wchar_t> local_c8;
  wchar_t local_a8 [64];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_e8;
  iVar4 = 0;
  if (param_1 != (wchar_t *)0x0) {
    sVar1 = wcslen(param_1);
    iVar4 = (int)sVar1;
  }
  local_c8.Base = local_a8;
  uVar3 = (ulong64)iVar4;
  local_c8.End = (wchar_t *)local_28;
  local_c8.bIsDynamic = false;
  local_c8.bIsExternal = false;
  local_c8.CurPos = local_a8;
  if (local_28 < local_a8 + uVar3) {
    TStringBuilderBase<wchar_t>::Extend(&local_c8,uVar3);
  }
  if (iVar4 != 0) {
    pvVar2 = FGenericPlatformString::Memcpy(local_c8.CurPos,param_1,uVar3 * 2);
    local_c8.CurPos = (wchar_t *)((longlong)pvVar2 + uVar3 * 2);
  }
  if (local_c8.End < local_c8.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_c8,1);
  }
  *local_c8.CurPos = L'/';
  local_c8.CurPos = local_c8.CurPos + 1;
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_c8,L"Assets",6);
  if (local_c8.End < local_c8.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_c8,1);
  }
  *local_c8.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_c8.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_c8);
  return __return_storage_ptr__;
}

// GetVersePackageNameForContent @ 1422afdd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
Verse::FPackageName::GetVersePackageNameForContent(FString *__return_storage_ptr__,wchar_t *param_1)

{
  size_t sVar1;
  void *pvVar2;
  ulong64 uVar3;
  int iVar4;
  undefined1 auStack_e8 [32];
  TStringBuilderBase<wchar_t> local_c8;
  wchar_t local_a8 [64];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_e8;
  iVar4 = 0;
  if (param_1 != (wchar_t *)0x0) {
    sVar1 = wcslen(param_1);
    iVar4 = (int)sVar1;
  }
  local_c8.Base = local_a8;
  uVar3 = (ulong64)iVar4;
  local_c8.End = (wchar_t *)local_28;
  local_c8.bIsDynamic = false;
  local_c8.bIsExternal = false;
  local_c8.CurPos = local_a8;
  if (local_28 < local_a8 + uVar3) {
    TStringBuilderBase<wchar_t>::Extend(&local_c8,uVar3);
  }
  if (iVar4 != 0) {
    pvVar2 = FGenericPlatformString::Memcpy(local_c8.CurPos,param_1,uVar3 * 2);
    local_c8.CurPos = (wchar_t *)((longlong)pvVar2 + uVar3 * 2);
  }
  if (local_c8.End < local_c8.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_c8,1);
  }
  *local_c8.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_c8.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_c8);
  return __return_storage_ptr__;
}

// GetVersePackageNameForPublishedContent @ 1422afef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
Verse::FPackageName::GetVersePackageNameForPublishedContent
          (FString *__return_storage_ptr__,wchar_t *param_1)

{
  size_t sVar1;
  void *pvVar2;
  ulong64 uVar3;
  int iVar4;
  undefined1 auStack_e8 [32];
  TStringBuilderBase<wchar_t> local_c8;
  wchar_t local_a8 [64];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_e8;
  iVar4 = 0;
  if (param_1 != (wchar_t *)0x0) {
    sVar1 = wcslen(param_1);
    iVar4 = (int)sVar1;
  }
  local_c8.Base = local_a8;
  uVar3 = (ulong64)iVar4;
  local_c8.End = (wchar_t *)local_28;
  local_c8.bIsDynamic = false;
  local_c8.bIsExternal = false;
  local_c8.CurPos = local_a8;
  if (local_28 < local_a8 + uVar3) {
    TStringBuilderBase<wchar_t>::Extend(&local_c8,uVar3);
  }
  if (iVar4 != 0) {
    pvVar2 = FGenericPlatformString::Memcpy(local_c8.CurPos,param_1,uVar3 * 2);
    local_c8.CurPos = (wchar_t *)((longlong)pvVar2 + uVar3 * 2);
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_c8,L"-Published",10);
  if (local_c8.End < local_c8.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_c8,1);
  }
  *local_c8.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_c8.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_c8);
  return __return_storage_ptr__;
}

// GetVersePackageNameForVni @ 1422b0030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
Verse::FPackageName::GetVersePackageNameForVni
          (FString *__return_storage_ptr__,wchar_t *param_1,wchar_t *param_2)

{
  size_t sVar1;
  void *pvVar2;
  ulong64 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_f8 [32];
  TStringBuilderBase<wchar_t> local_d8;
  wchar_t local_b8 [64];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_f8;
  iVar5 = 0;
  if (param_2 != (wchar_t *)0x0) {
    sVar1 = wcslen(param_2);
    iVar5 = (int)sVar1;
  }
  iVar4 = 0;
  if (param_1 != (wchar_t *)0x0) {
    sVar1 = wcslen(param_1);
    iVar4 = (int)sVar1;
  }
  local_d8.Base = local_b8;
  uVar3 = (ulong64)iVar4;
  local_d8.End = (wchar_t *)local_38;
  local_d8.bIsDynamic = false;
  local_d8.bIsExternal = false;
  local_d8.CurPos = local_b8;
  if (local_38 < local_b8 + uVar3) {
    TStringBuilderBase<wchar_t>::Extend(&local_d8,uVar3);
  }
  if (iVar4 != 0) {
    pvVar2 = FGenericPlatformString::Memcpy(local_d8.CurPos,param_1,uVar3 * 2);
    local_d8.CurPos = (wchar_t *)((longlong)pvVar2 + uVar3 * 2);
  }
  if (local_d8.End < local_d8.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_d8,1);
  }
  *local_d8.CurPos = L'/';
  local_d8.CurPos = local_d8.CurPos + 1;
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_d8,param_2,iVar5);
  if (local_d8.End < local_d8.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_d8,1);
  }
  *local_d8.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_d8.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_d8);
  return __return_storage_ptr__;
}

// GetVersePackageNameFromUPackagePath @ 1422b0190

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FName __cdecl
Verse::FPackageName::GetVersePackageNameFromUPackagePath(FName param_1,EVersePackageType *param_2)

{
  wchar_t *pwVar1;
  int iVar2;
  wchar_t *pwVar3;
  TStringBuilderBase<wchar_t> *pTVar4;
  FName *pFVar5;
  wchar_t *pwVar6;
  int iVar7;
  FName FVar8;
  wchar_t *pwVar9;
  int iVar10;
  undefined1 *in_R8;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  int iVar13;
  undefined1 auStack_10f8 [32];
  FName local_10d8;
  FName local_10d0;
  TStringBuilderBase<wchar_t> local_10c8;
  wchar_t local_10a8 [1035];
  wchar_t local_892 [5];
  TStringBuilderBase<wchar_t> local_888;
  wchar_t local_868 [1035];
  wchar_t local_52 [5];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_10f8;
  local_888.Base = local_868;
  local_888.CurPos = local_868;
  local_888.End = local_52;
  local_888.bIsDynamic = false;
  local_888.bIsExternal = false;
  local_10d8 = (FName)param_2;
  local_10d0 = param_1;
  ::FName::AppendString(&local_10d8,&local_888);
  pwVar1 = local_888.Base + (int)((longlong)local_888.CurPos - (longlong)local_888.Base >> 1);
  if ((local_888.Base == pwVar1) || (*local_888.Base != L'/')) {
    pwVar12 = (wchar_t *)0x0;
    iVar13 = 0;
    pwVar6 = local_888.Base;
  }
  else {
    pwVar12 = local_888.Base + 1;
    for (pwVar6 = pwVar12; (pwVar6 != pwVar1 && (*pwVar6 != L'/')); pwVar6 = pwVar6 + 1) {
    }
    iVar13 = (int)((longlong)pwVar6 - (longlong)pwVar12 >> 1);
  }
  if ((pwVar6 == pwVar1) || (*pwVar6 != L'/')) {
    pwVar11 = (wchar_t *)0x0;
    iVar2 = 0;
  }
  else {
    pwVar11 = pwVar6 + 1;
    for (pwVar6 = pwVar11; (pwVar6 != pwVar1 && (*pwVar6 != L'/')); pwVar6 = pwVar6 + 1) {
    }
    iVar2 = (int)((longlong)pwVar6 - (longlong)pwVar11 >> 1);
  }
  if ((pwVar6 == pwVar1) || (*pwVar6 != L'/')) {
    pwVar9 = (wchar_t *)0x0;
    iVar10 = 0;
  }
  else {
    pwVar9 = pwVar6 + 1;
    for (pwVar6 = pwVar9; (pwVar6 != pwVar1 && (*pwVar6 != L'/')); pwVar6 = pwVar6 + 1) {
    }
    iVar10 = (int)((longlong)pwVar6 - (longlong)pwVar9 >> 1);
  }
  if ((pwVar6 == pwVar1) || (*pwVar6 != L'/')) {
    pwVar6 = (wchar_t *)0x0;
    iVar7 = 0;
  }
  else {
    pwVar6 = pwVar6 + 1;
    for (pwVar3 = pwVar6; (pwVar3 != pwVar1 && (*pwVar3 != L'/')); pwVar3 = pwVar3 + 1) {
    }
    iVar7 = (int)((longlong)pwVar3 - (longlong)pwVar6 >> 1);
  }
  if ((iVar13 != 0) && (iVar2 != 0)) {
    local_10d8 = (FName)(longlong)iVar2;
    iVar2 = FGenericPlatformStricmp::Strnicmp(pwVar11,L"_Verse",(ulong64)local_10d8);
    if ((iVar2 == 0) && (L"_Verse"[(longlong)local_10d8] == L'\0')) {
      if (iVar10 != 0) {
        local_10d8 = (FName)(longlong)iVar10;
        iVar2 = FGenericPlatformStricmp::Strnicmp(pwVar9,L"VNI",(ulong64)local_10d8);
        if (((iVar2 == 0) && (L"VNI"[(longlong)local_10d8] == L'\0')) && (0 < iVar7)) {
          if (in_R8 != (undefined1 *)0x0) {
            *in_R8 = 0;
          }
          memset(&local_10c8.field_0x1a,0,0x81e);
          local_10c8.Base = local_10a8;
          local_10c8.bIsDynamic = false;
          local_10c8.bIsExternal = false;
          local_10c8.CurPos = local_10a8;
          local_10c8.End = local_892;
          pTVar4 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_10c8,pwVar12,iVar13);
          pTVar4 = TStringBuilderBase<wchar_t>::AppendChar<char,0>(pTVar4,'/');
LAB_1422b043a:
          pTVar4 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar4,pwVar6,iVar7);
          pFVar5 = ::FName::FName(&local_10d8,
                                  (int)((longlong)pTVar4->CurPos - (longlong)pTVar4->Base >> 1),
                                  pTVar4->Base,FNAME_Add);
          FVar8 = local_10d0;
          *(FName *)local_10d0 = *pFVar5;
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_10c8);
          goto LAB_1422b0554;
        }
        if (iVar10 != 0) {
          iVar2 = FGenericPlatformStricmp::Strnicmp(pwVar9,L"Assets",(longlong)iVar10);
          if (((iVar2 == 0) && (L"Assets"[iVar10] == L'\0')) && (iVar7 == 0)) {
            if (in_R8 != (undefined1 *)0x0) {
              *in_R8 = 3;
            }
            memset(&local_10c8.field_0x1a,0,0x81e);
            local_10c8.Base = local_10a8;
            local_10c8.bIsDynamic = false;
            local_10c8.bIsExternal = false;
            local_10c8.CurPos = local_10a8;
            local_10c8.End = local_892;
            pTVar4 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_10c8,pwVar12,iVar13);
            pTVar4 = TStringBuilderBase<wchar_t>::AppendChar<char,0>(pTVar4,'/');
            iVar7 = 6;
            pwVar6 = L"Assets";
            goto LAB_1422b043a;
          }
          if (iVar10 != 0) goto LAB_1422b054a;
        }
      }
      if (iVar7 == 0) {
        if (in_R8 != (undefined1 *)0x0) {
          *in_R8 = 1;
        }
        pFVar5 = ::FName::FName(&local_10d8,iVar13,pwVar12,FNAME_Add);
        *(FName *)local_10d0 = *pFVar5;
        FVar8 = local_10d0;
        goto LAB_1422b0554;
      }
    }
  }
LAB_1422b054a:
  *(FName *)local_10d0 = (FName)0x0;
  FVar8 = local_10d0;
LAB_1422b0554:
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_888);
  return FVar8;
}

// PackageRequiresInternalAPI @ 1422b0fb0

bool __cdecl
Verse::FPackageName::PackageRequiresInternalAPI(char *param_1,EVersePackageScope param_2)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 != InternalUser) {
    return false;
  }
  pcVar2 = strchr(param_1,0x2f);
  if (pcVar2 == (char *)0x0) {
    iVar1 = 0;
    if (param_1 != (char *)0x0) {
      sVar3 = strlen(param_1);
      iVar1 = (int)sVar3;
    }
    iVar4 = iVar1;
    if (10 < iVar1) {
      iVar4 = 10;
    }
    iVar5 = 0;
    if (0 < iVar4) {
      iVar5 = iVar4;
    }
    if (iVar5 == 10) {
      FGenericPlatformStricmp::Strnicmp
                ((uchar *)"-Published",(uchar *)(param_1 + ((longlong)iVar1 - (longlong)iVar5)),10);
    }
  }
  else {
    iVar1 = strcmp(pcVar2 + 1,"Assets");
    if (iVar1 == 0) {
      return false;
    }
  }
  return true;
}

// operator() @ 1504821b0

bool __thiscall `FPackageName::GetVersePath'::__l18::<lambda_1>::operator()(void *this)

{
  TStringBuilderBase<wchar_t> *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_221147870366004847>);
  if (bVar2) {
    this_00 = *(TStringBuilderBase<wchar_t> **)this;
    if (this_00->End < this_00->CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(this_00,1);
    }
    *this_00->CurPos = L'\0';
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_221147870366004847>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504823e0

bool __thiscall `FPackageName::GetVersePath'::__l21::<lambda_2>::operator()(void *this)

{
  TStringBuilderBase<wchar_t> *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_221147870366004840>);
  if (bVar2) {
    this_00 = *(TStringBuilderBase<wchar_t> **)this;
    if (this_00->End < this_00->CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(this_00,1);
    }
    *this_00->CurPos = L'\0';
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_221147870366004840>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

