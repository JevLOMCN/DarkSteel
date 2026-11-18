// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 35

// Append<wchar_t,TStringView<wchar_t>_&> @ 141903d70

void __cdecl
FPathViews::Append<wchar_t,TStringView<wchar_t>_&>
          (TStringBuilderBase<wchar_t> *param_1,TStringView<wchar_t> *param_2)

{
  wchar_t *pwVar1;
  
  pwVar1 = param_1->CurPos;
  if ((((int)((longlong)pwVar1 - (longlong)param_1->Base >> 1) != 0) && (pwVar1[-1] != L'/')) &&
     (pwVar1[-1] != L'\\')) {
    if (param_1->End < pwVar1 + 1) {
      TStringBuilderBase<wchar_t>::Extend(param_1,1);
    }
    *param_1->CurPos = L'/';
    param_1->CurPos = param_1->CurPos + 1;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            (param_1,param_2->DataPtr,(int)*(undefined8 *)&param_2->Size);
  return;
}

// Append<wchar_t,FString_const_&> @ 141903df0

void __cdecl
FPathViews::Append<wchar_t,FString_const_&>(TStringBuilderBase<wchar_t> *param_1,FString *param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  int iVar3;
  
  pwVar2 = param_1->CurPos;
  if ((((int)((longlong)pwVar2 - (longlong)param_1->Base >> 1) != 0) && (pwVar2[-1] != L'/')) &&
     (pwVar2[-1] != L'\\')) {
    if (param_1->End < pwVar2 + 1) {
      TStringBuilderBase<wchar_t>::Extend(param_1,1);
    }
    *param_1->CurPos = L'/';
    param_1->CurPos = param_1->CurPos + 1;
  }
  iVar1 = (param_2->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            (param_1,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar3);
  return;
}

// AppendPath @ 1419266e0

void __cdecl
FPathViews::AppendPath(TStringBuilderBase<wchar_t> *param_1,TStringView<wchar_t> *param_2)

{
  wchar_t wVar1;
  code *pcVar2;
  wchar_t *pwVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  wchar_t *pwVar7;
  
  if (param_2->Size != 0) {
    pwVar3 = param_2->DataPtr;
    iVar5 = (int)*(undefined8 *)&param_2->Size;
    for (pwVar7 = pwVar3; pwVar7 != pwVar3 + iVar5; pwVar7 = pwVar7 + 1) {
      if ((*pwVar7 == L'/') || (*pwVar7 == L'\\')) {
        iVar6 = (int)((longlong)pwVar7 - (longlong)pwVar3 >> 1);
        if (iVar6 != 0) {
          if (((iVar6 + -1 < 0) || (iVar5 <= iVar6 + -1)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0 && Index < Size",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                                 ,0x234,
                                 L"Index out of bounds on StringView: index %i on a view with a length of %i"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (pwVar3[(longlong)iVar6 + -1] != L':') break;
        }
        param_1->CurPos = param_1->Base;
        goto LAB_14192676d;
      }
    }
    if (((0 < (int)((longlong)param_1->CurPos - (longlong)param_1->Base >> 1)) &&
        (wVar1 = param_1->CurPos[-1], wVar1 != L'/')) && (wVar1 != L'\\')) {
      ::operator<<(param_1,L'/');
    }
LAB_14192676d:
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              (param_1,param_2->DataPtr,(int)*(undefined8 *)&param_2->Size);
  }
  return;
}

// ChangeExtension @ 14192c8d0

FString * __cdecl
FPathViews::ChangeExtension
          (FString *__return_storage_ptr__,TStringView<wchar_t> *param_1,
          TStringView<wchar_t> *param_2)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  wchar_t *pwVar5;
  FString *pFVar6;
  int iVar7;
  FString local_18;
  
  pwVar2 = param_1->DataPtr;
  pwVar5 = pwVar2 + (int)*(undefined8 *)&param_1->Size;
  while (pwVar2 != pwVar5) {
    wVar1 = pwVar5[-1];
    pwVar5 = pwVar5 + -1;
    if ((wVar1 == L'/') || (wVar1 == L'\\')) break;
    if (wVar1 == L'.') {
      iVar4 = (int)((longlong)pwVar5 - (longlong)pwVar2 >> 1);
      iVar7 = param_1->Size;
      if (iVar4 < param_1->Size) {
        iVar7 = iVar4;
      }
      iVar4 = 0;
      if (0 < iVar7) {
        iVar4 = iVar7;
      }
      iVar7 = param_2->Size;
      if ((iVar7 == 0) || ((0 < iVar7 && (*param_2->DataPtr == L'.')))) {
        local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_18.Data.ArrayNum = 0;
        local_18.Data.ArrayMax = 0;
        ::FString::Reserve(&local_18,iVar7 + iVar4);
        ::FString::AppendChars(&local_18,pwVar2,iVar4);
      }
      else {
        local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_18.Data.ArrayNum = 0;
        local_18.Data.ArrayMax = 0;
        ::FString::Reserve(&local_18,iVar7 + 1 + iVar4);
        ::FString::AppendChars(&local_18,pwVar2,iVar4);
        ::FString::AppendChar(&local_18,L'.');
      }
      ::FString::AppendChars(&local_18,param_2->DataPtr,(int)*(undefined8 *)&param_2->Size);
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_18.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_18.Data.ArrayMax;
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar6 = ::FString::ConstructFromPtrSize
                     (&local_18,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
  if (__return_storage_ptr__ != pFVar6) {
    pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar6->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return __return_storage_ptr__;
  }
  FMemory::Free(local_18.Data.AllocatorInstance.Data);
  return __return_storage_ptr__;
}

// CollapseRelativeDirectories @ 14192d380

bool __cdecl
FPathViews::CollapseRelativeDirectories(TStringBuilderBase<wchar_t> *param_1,bool param_2)

{
  bool local_res18 [16];
  
  UE4PathViews_Private::CollapseRelativeDirectoriesImplTemplate<TStringBuilderBase<wchar_t>_>
            (param_1,param_2,local_res18);
  return local_res18[0];
}

// Equals @ 141937fb0

bool __cdecl FPathViews::Equals(TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2)

{
  wchar_t *pwVar1;
  ushort uVar2;
  bool bVar3;
  short sVar4;
  int iVar5;
  wchar_t *pwVar6;
  short sVar7;
  longlong lVar8;
  TStringView<wchar_t> local_28;
  wchar_t *local_18;
  int iStack_10;
  undefined4 uStack_c;
  
  local_28.DataPtr = param_1->DataPtr;
  local_28.Size = param_1->Size;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  bVar3 = HasRedundantTerminatingSeparator(&local_28);
  if (bVar3) {
    do {
      iVar5 = param_1->Size;
      if (iVar5 + -1 < iVar5) {
        iVar5 = iVar5 + -1;
      }
      local_28.DataPtr = param_1->DataPtr;
      iStack_10 = 0;
      if (0 < iVar5) {
        iStack_10 = iVar5;
      }
      local_28._12_4_ = uStack_c;
      local_28.Size = iStack_10;
      param_1->DataPtr = local_28.DataPtr;
      param_1->Size = iStack_10;
      *(undefined4 *)&param_1->field_0xc = uStack_c;
      local_18 = local_28.DataPtr;
      bVar3 = HasRedundantTerminatingSeparator(&local_28);
    } while (bVar3);
  }
  local_28.DataPtr = param_2->DataPtr;
  local_28.Size = param_2->Size;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  bVar3 = HasRedundantTerminatingSeparator(&local_28);
  if (bVar3) {
    do {
      iVar5 = param_2->Size;
      if (iVar5 + -1 < iVar5) {
        iVar5 = iVar5 + -1;
      }
      local_28.DataPtr = param_2->DataPtr;
      iStack_10 = 0;
      if (0 < iVar5) {
        iStack_10 = iVar5;
      }
      local_28._12_4_ = uStack_c;
      local_28.Size = iStack_10;
      param_2->DataPtr = local_28.DataPtr;
      param_2->Size = iStack_10;
      *(undefined4 *)&param_2->field_0xc = uStack_c;
      local_18 = local_28.DataPtr;
      bVar3 = HasRedundantTerminatingSeparator(&local_28);
    } while (bVar3);
  }
  pwVar6 = param_1->DataPtr;
  iVar5 = (int)*(undefined8 *)&param_1->Size;
  if (iVar5 != (int)*(undefined8 *)&param_2->Size) {
    return false;
  }
  pwVar1 = pwVar6 + iVar5;
  if (pwVar6 < pwVar1) {
    lVar8 = (longlong)param_2->DataPtr - (longlong)pwVar6;
    do {
      uVar2 = *(ushort *)(lVar8 + (longlong)pwVar6);
      sVar7 = *pwVar6 - (-(ushort)((ushort)*pwVar6 - 0x61 < 0x1a) & 0x20);
      sVar4 = uVar2 - (-(ushort)(uVar2 - 0x61 < 0x1a) & 0x20);
      if ((sVar7 == 0x2f) || (sVar7 == 0x5c)) {
        if (sVar4 != 0x2f) {
          bVar3 = sVar4 == 0x5c;
          goto LAB_1419380f9;
        }
      }
      else {
        bVar3 = sVar7 == sVar4;
LAB_1419380f9:
        if (!bVar3) {
          return false;
        }
      }
      pwVar6 = pwVar6 + 1;
    } while (pwVar6 < pwVar1);
  }
  return true;
}

// GetBaseFilename @ 141945710

TStringView<wchar_t> * __cdecl
FPathViews::GetBaseFilename
          (TStringView<wchar_t> *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  
  pwVar5 = param_1->DataPtr;
  pwVar4 = pwVar5 + (int)*(undefined8 *)&param_1->Size;
  do {
    if (pwVar5 == pwVar4) {
      pwVar5 = param_1->DataPtr;
      iVar1 = param_1->Size;
      iVar2 = (int)*(undefined8 *)&param_1->Size;
      goto LAB_141945761;
    }
    pwVar7 = pwVar4 + -1;
    pwVar4 = pwVar4 + -1;
  } while ((*pwVar7 != L'/') && (*pwVar7 != L'\\'));
  iVar2 = param_1->Size;
  iVar1 = (iVar2 - (int)((longlong)pwVar4 - (longlong)pwVar5 >> 1)) + -1;
  iVar3 = iVar2;
  if (iVar1 < iVar2) {
    iVar3 = iVar1;
  }
  iVar1 = 0;
  if (0 < iVar3) {
    iVar1 = iVar3;
  }
  pwVar5 = pwVar5 + ((longlong)iVar2 - (longlong)iVar1);
  iVar2 = iVar1;
LAB_141945761:
  lVar6 = (longlong)iVar1;
  pwVar4 = pwVar5 + lVar6;
  do {
    pwVar7 = pwVar5;
    if (pwVar5 == pwVar4) goto LAB_14194579f;
    pwVar7 = pwVar4 + -1;
    pwVar4 = pwVar4 + -1;
  } while ((*pwVar7 != L'/') && (*pwVar7 != L'\\'));
  iVar2 = (iVar1 - (int)((longlong)pwVar4 - (longlong)pwVar5 >> 1)) + -1;
  iVar3 = iVar1;
  if (iVar2 < iVar1) {
    iVar3 = iVar2;
  }
  iVar2 = 0;
  if (0 < iVar3) {
    iVar2 = iVar3;
  }
  pwVar7 = pwVar5 + (lVar6 - iVar2);
LAB_14194579f:
  pwVar4 = pwVar7 + iVar2;
  do {
    if (pwVar7 == pwVar4) goto LAB_1419457c3;
    pwVar4 = pwVar4 + -1;
  } while (*pwVar4 != L'.');
  if (pwVar4 == (wchar_t *)0x0) {
LAB_1419457c3:
    iVar2 = 0;
  }
  else {
    iVar2 = (int)((longlong)pwVar5 + (lVar6 * 2 - (longlong)pwVar4) >> 1);
  }
  __return_storage_ptr__->DataPtr = pwVar5;
  if (iVar1 - iVar2 < iVar1) {
    iVar1 = iVar1 - iVar2;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  __return_storage_ptr__->Size = iVar2;
  return __return_storage_ptr__;
}

// GetBaseFilename @ 141945880

TStringView<wchar_t> * __cdecl
FPathViews::GetBaseFilename
          (TStringView<wchar_t> *__return_storage_ptr__,TStringView<wchar_t> *param_1,bool param_2)

{
  int iVar1;
  undefined4 uVar2;
  TStringView<wchar_t> *pTVar3;
  int iVar4;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  if (param_2) {
    pTVar3 = GetBaseFilename(&local_18,param_1);
  }
  else {
    pTVar3 = GetExtension(&local_28,param_1,true);
    iVar1 = param_1->Size;
    iVar4 = iVar1 - pTVar3->Size;
    local_28.DataPtr = param_1->DataPtr;
    if (iVar4 < iVar1) {
      iVar1 = iVar4;
    }
    local_28.Size = 0;
    if (0 < iVar1) {
      local_28.Size = iVar1;
    }
    pTVar3 = &local_28;
  }
  iVar1 = pTVar3->Size;
  uVar2 = *(undefined4 *)&pTVar3->field_0xc;
  __return_storage_ptr__->DataPtr = pTVar3->DataPtr;
  __return_storage_ptr__->Size = iVar1;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar2;
  return __return_storage_ptr__;
}

// GetBaseFilenameWithPath @ 141945930

TStringView<wchar_t> * __cdecl
FPathViews::GetBaseFilenameWithPath
          (TStringView<wchar_t> *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  int iVar1;
  TStringView<wchar_t> *pTVar2;
  int iVar3;
  TStringView<wchar_t> local_18;
  
  pTVar2 = GetExtension(&local_18,param_1,true);
  iVar1 = param_1->Size;
  iVar3 = iVar1 - pTVar2->Size;
  if (iVar3 < iVar1) {
    iVar1 = iVar3;
  }
  __return_storage_ptr__->DataPtr = param_1->DataPtr;
  iVar3 = 0;
  if (0 < iVar1) {
    iVar3 = iVar1;
  }
  __return_storage_ptr__->Size = iVar3;
  return __return_storage_ptr__;
}

// GetCleanFilename @ 141945b80

TStringView<wchar_t> * __cdecl
FPathViews::GetCleanFilename
          (TStringView<wchar_t> *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  int iVar2;
  wchar_t *pwVar3;
  int iVar4;
  undefined4 uVar5;
  wchar_t *pwVar6;
  int iVar7;
  
  pwVar3 = param_1->DataPtr;
  pwVar6 = pwVar3 + (int)*(undefined8 *)&param_1->Size;
  do {
    if (pwVar3 == pwVar6) {
      iVar2 = param_1->Size;
      uVar5 = *(undefined4 *)&param_1->field_0xc;
      __return_storage_ptr__->DataPtr = param_1->DataPtr;
      __return_storage_ptr__->Size = iVar2;
      *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar5;
      return __return_storage_ptr__;
    }
    pwVar1 = pwVar6 + -1;
    pwVar6 = pwVar6 + -1;
  } while ((*pwVar1 != L'/') && (*pwVar1 != L'\\'));
  iVar2 = param_1->Size;
  iVar7 = (iVar2 - (int)((longlong)pwVar6 - (longlong)pwVar3 >> 1)) + -1;
  iVar4 = iVar2;
  if (iVar7 < iVar2) {
    iVar4 = iVar7;
  }
  iVar7 = 0;
  if (0 < iVar4) {
    iVar7 = iVar4;
  }
  __return_storage_ptr__->Size = iVar7;
  __return_storage_ptr__->DataPtr = pwVar3 + ((longlong)iVar2 - (longlong)iVar7);
  return __return_storage_ptr__;
}

// GetExtension @ 141946c10

TStringView<wchar_t> * __cdecl
FPathViews::GetExtension
          (TStringView<wchar_t> *__return_storage_ptr__,TStringView<wchar_t> *param_1,bool param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  int iVar3;
  wchar_t *pwVar4;
  int iVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  
  pwVar2 = param_1->DataPtr;
  pwVar7 = pwVar2 + (int)*(undefined8 *)&param_1->Size;
  do {
    if (pwVar2 == pwVar7) {
      iVar5 = param_1->Size;
      pwVar7 = pwVar2;
      goto LAB_141946c61;
    }
    pwVar6 = pwVar7 + -1;
    pwVar7 = pwVar7 + -1;
  } while ((*pwVar6 != L'/') && (*pwVar6 != L'\\'));
  iVar1 = param_1->Size;
  iVar5 = (iVar1 - (int)((longlong)pwVar7 - (longlong)pwVar2 >> 1)) + -1;
  iVar3 = iVar1;
  if (iVar5 < iVar1) {
    iVar3 = iVar5;
  }
  iVar5 = 0;
  if (0 < iVar3) {
    iVar5 = iVar3;
  }
  pwVar7 = pwVar2 + ((longlong)iVar1 - (longlong)iVar5);
LAB_141946c61:
  pwVar6 = pwVar7 + iVar5;
  do {
    pwVar4 = pwVar6;
    if (pwVar7 == pwVar4) goto LAB_141946c7f;
    pwVar6 = pwVar4 + -1;
  } while (*pwVar6 != L'.');
  if (pwVar6 != (wchar_t *)0x0) {
    if (!param_2) {
      pwVar6 = pwVar4;
    }
    iVar1 = param_1->Size;
    __return_storage_ptr__->DataPtr = pwVar6;
    __return_storage_ptr__->Size =
         (int)(((longlong)iVar1 * 2 - (longlong)pwVar6) + (longlong)pwVar2 >> 1);
    return __return_storage_ptr__;
  }
LAB_141946c7f:
  *(undefined8 *)&__return_storage_ptr__->Size = 0;
  __return_storage_ptr__->DataPtr = (wchar_t *)0x0;
  __return_storage_ptr__->Size = 0;
  return __return_storage_ptr__;
}

// GetMountPointNameFromPath @ 1419487c0

TStringView<wchar_t> * __cdecl
FPathViews::GetMountPointNameFromPath
          (TStringView<wchar_t> *__return_storage_ptr__,TStringView<wchar_t> *param_1,bool *param_2,
          bool param_3)

{
  wchar_t *pwVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  TStringView<wchar_t> local_28;
  
  iVar7 = param_1->Size;
  __return_storage_ptr__->DataPtr = (wchar_t *)0x0;
  __return_storage_ptr__->Size = 0;
  if (iVar7 < 1) {
    return __return_storage_ptr__;
  }
  pwVar1 = param_1->DataPtr;
  if (*pwVar1 != L'/') {
    return __return_storage_ptr__;
  }
  local_28.DataPtr = pwVar1 + 1;
  local_28.Size = iVar7 + -1;
  iVar3 = UE::String::FindFirstChar(&local_28,L'/',CaseSensitive);
  local_28.DataPtr = pwVar1 + param_3;
  if (iVar3 == -1) {
    local_28.Size = iVar7 - (uint)param_3;
  }
  else {
    local_28.Size = (iVar3 - (uint)param_3) + 1;
  }
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  __return_storage_ptr__->DataPtr = local_28.DataPtr;
  __return_storage_ptr__->Size = local_28.Size;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = local_28._12_4_;
  if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(&ClassesPrefix,L"Classes_");
    atexit(`FPathViews::GetMountPointNameFromPath'::__l5::
           _dynamic_atexit_destructor_for__ClassesPrefix__);
    _Init_thread_footer(&::_TSS0);
  }
  iVar3 = ClassesPrefix.Data.ArrayNum;
  iVar7 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar7 = 0;
  }
  iVar4 = __return_storage_ptr__->Size;
  if (iVar7 < __return_storage_ptr__->Size) {
    iVar4 = iVar7;
  }
  iVar5 = 0;
  iVar6 = iVar5;
  if (0 < iVar4) {
    iVar6 = iVar4;
  }
  if (iVar7 == iVar6) {
    if ((iVar7 != 0) && (iVar6 != 0)) {
      iVar3 = FGenericPlatformStricmp::Strnicmp
                        ((wchar_t *)ClassesPrefix.Data.AllocatorInstance.Data,
                         __return_storage_ptr__->DataPtr,(longlong)iVar6);
      if (iVar3 != 0) goto LAB_141948915;
      iVar3 = ClassesPrefix.Data.ArrayNum;
    }
    if (iVar7 == iVar6) {
      iVar7 = __return_storage_ptr__->Size;
      bVar8 = true;
      iVar4 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar4 = iVar5;
      }
      iVar3 = iVar7;
      if (iVar7 - iVar4 < iVar7) {
        iVar3 = iVar7 - iVar4;
      }
      if (0 < iVar3) {
        iVar5 = iVar3;
      }
      __return_storage_ptr__->DataPtr =
           __return_storage_ptr__->DataPtr + ((longlong)iVar7 - (longlong)iVar5);
      __return_storage_ptr__->Size = iVar5;
      *(undefined4 *)&__return_storage_ptr__->field_0xc = local_28._12_4_;
      goto LAB_141948918;
    }
  }
LAB_141948915:
  bVar8 = false;
LAB_141948918:
  if (param_2 != (bool *)0x0) {
    *param_2 = bVar8;
  }
  return __return_storage_ptr__;
}

// GetPath @ 141949050

TStringView<wchar_t> * __cdecl
FPathViews::GetPath(TStringView<wchar_t> *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  int iVar3;
  wchar_t *pwVar4;
  int iVar5;
  
  pwVar2 = param_1->DataPtr;
  pwVar4 = pwVar2 + (int)*(undefined8 *)&param_1->Size;
  do {
    if (pwVar2 == pwVar4) goto LAB_141949089;
    pwVar1 = pwVar4 + -1;
    pwVar4 = pwVar4 + -1;
  } while ((*pwVar1 != L'/') && (*pwVar1 != L'\\'));
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
LAB_141949089:
  *(undefined8 *)&__return_storage_ptr__->Size = 0;
  __return_storage_ptr__->DataPtr = (wchar_t *)0x0;
  __return_storage_ptr__->Size = 0;
  return __return_storage_ptr__;
}

// GetPathLeaf @ 141949330

TStringView<wchar_t> * __cdecl
FPathViews::GetPathLeaf(TStringView<wchar_t> *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  int iVar6;
  undefined4 uStack_c;
  
  pwVar2 = param_1->DataPtr;
  pwVar5 = pwVar2 + (int)*(undefined8 *)&param_1->Size;
  do {
    if (pwVar2 == pwVar5) {
      *(undefined8 *)&__return_storage_ptr__->Size = 0;
      __return_storage_ptr__->DataPtr = (wchar_t *)0x0;
      return __return_storage_ptr__;
    }
    pwVar1 = pwVar5 + -1;
    pwVar5 = pwVar5 + -1;
  } while ((*pwVar1 == L'/') || (*pwVar1 == L'\\'));
  iVar3 = (int)((longlong)pwVar5 + (2 - (longlong)pwVar2) >> 1);
  iVar6 = param_1->Size;
  if (iVar3 < param_1->Size) {
    iVar6 = iVar3;
  }
  iVar3 = 0;
  if (0 < iVar6) {
    iVar3 = iVar6;
  }
  pwVar5 = pwVar2 + iVar3;
  do {
    if (pwVar2 == pwVar5) {
      __return_storage_ptr__->DataPtr = pwVar2;
      *(ulonglong *)&__return_storage_ptr__->Size = CONCAT44(uStack_c,iVar3);
      return __return_storage_ptr__;
    }
    pwVar1 = pwVar5 + -1;
    pwVar5 = pwVar5 + -1;
  } while ((*pwVar1 != L'/') && (*pwVar1 != L'\\'));
  iVar4 = (iVar3 - (int)((longlong)pwVar5 - (longlong)pwVar2 >> 1)) + -1;
  iVar6 = iVar3;
  if (iVar4 < iVar3) {
    iVar6 = iVar4;
  }
  iVar4 = 0;
  if (0 < iVar6) {
    iVar4 = iVar6;
  }
  __return_storage_ptr__->Size = iVar4;
  __return_storage_ptr__->DataPtr = pwVar2 + ((longlong)iVar3 - (longlong)iVar4);
  return __return_storage_ptr__;
}

// HasRedundantTerminatingSeparator @ 14194d070

bool __cdecl FPathViews::HasRedundantTerminatingSeparator(TStringView<wchar_t> *param_1)

{
  wchar_t wVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  wchar_t *pwVar6;
  
  iVar2 = param_1->Size;
  if (iVar2 < 3) {
    if (1 < iVar2) {
      wVar1 = param_1->DataPtr[1];
      if ((((wVar1 == L'/') || (wVar1 == L'\\')) && (wVar1 = *param_1->DataPtr, wVar1 != L'/')) &&
         ((wVar1 != L'\\' && (wVar1 != L':')))) {
        return true;
      }
    }
  }
  else {
    if (((iVar2 + -1 < 0) || (iVar2 <= iVar2 + -1)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0 && Index < Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                           ,0x234,
                           L"Index out of bounds on StringView: index %i on a view with a length of %i"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if ((param_1->DataPtr[(longlong)iVar2 + -1] == L'/') ||
       (param_1->DataPtr[(longlong)iVar2 + -1] == L'\\')) {
      pwVar6 = TStringView<wchar_t>::operator[](param_1,param_1->Size + -2);
      return *pwVar6 != L':';
    }
  }
  return false;
}

// IsDriveSpecifierWithoutRoot @ 141951890

bool __cdecl FPathViews::IsDriveSpecifierWithoutRoot(TStringView<wchar_t> *param_1)

{
  wchar_t wVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar2 = param_1->Size;
  uVar3 = 0;
  uVar5 = uVar3;
  if (0 < (int)uVar2) {
    do {
      wVar1 = param_1->DataPtr[uVar3];
      if (wVar1 == L'/') {
        return false;
      }
      if (wVar1 == L'\\') {
        return false;
      }
      uVar4 = (int)uVar5 + 1;
      if (wVar1 == L':') {
        if (uVar4 != uVar2) {
          wVar1 = param_1->DataPtr[(longlong)(int)uVar5 + 1];
          if (wVar1 == L':') {
            return false;
          }
          if (wVar1 == L'/') {
            return false;
          }
          if (wVar1 == L'\\') {
            return false;
          }
        }
        return true;
      }
      uVar3 = uVar3 + 1;
      uVar5 = (ulonglong)uVar4;
    } while ((longlong)uVar3 < (longlong)(int)uVar2);
  }
  return false;
}

// IsParentPathOf @ 141952230

bool __cdecl FPathViews::IsParentPathOf(TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2)

{
  bool bVar1;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  local_28.DataPtr = param_1->DataPtr;
  local_28.Size = param_1->Size;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_18.DataPtr = param_2->DataPtr;
  local_18.Size = param_2->Size;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_38.DataPtr = (wchar_t *)0x0;
  local_38.Size = 0;
  bVar1 = TryMakeChildPathRelativeTo(&local_18,&local_28,&local_38);
  return bVar1;
}

// IsPathLeaf @ 141952270

bool __cdecl FPathViews::IsPathLeaf(TStringView<wchar_t> *param_1)

{
  int iVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  int iVar5;
  
  pwVar3 = param_1->DataPtr;
  iVar1 = param_1->Size;
  pwVar4 = pwVar3;
  while( true ) {
    if (pwVar4 == pwVar3 + iVar1) {
      return true;
    }
    if ((*pwVar4 == L'/') || (*pwVar4 == L'\\')) break;
    pwVar4 = pwVar4 + 1;
  }
  iVar2 = iVar1 - (int)((longlong)pwVar4 - (longlong)pwVar3 >> 1);
  iVar5 = iVar1;
  if (iVar2 < iVar1) {
    iVar5 = iVar2;
  }
  iVar2 = 0;
  if (0 < iVar5) {
    iVar2 = iVar5;
  }
  pwVar3 = pwVar3 + ((longlong)iVar1 - (longlong)iVar2);
  pwVar4 = pwVar3 + iVar2;
  if (pwVar3 == pwVar4) {
    return true;
  }
  while ((*pwVar3 == L'/' || (*pwVar3 == L'\\'))) {
    pwVar3 = pwVar3 + 1;
    if (pwVar3 == pwVar4) {
      return true;
    }
  }
  return false;
}

// IsRelativePath @ 141952550

bool __cdecl FPathViews::IsRelativePath(TStringView<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  int iVar2;
  wchar_t *pwVar3;
  
  pwVar1 = param_1->DataPtr;
  pwVar3 = pwVar1;
  while( true ) {
    if (pwVar3 == pwVar1 + param_1->Size) {
      return true;
    }
    if ((*pwVar3 == L'/') || (*pwVar3 == L'\\')) break;
    pwVar3 = pwVar3 + 1;
  }
  iVar2 = (int)((longlong)pwVar3 - (longlong)pwVar1 >> 1);
  if ((iVar2 != 0) &&
     (pwVar1 = TStringView<wchar_t>::operator[](param_1,iVar2 + -1), *pwVar1 != L':')) {
    return true;
  }
  return false;
}

// IsSeparator @ 141952f70

bool __cdecl FPathViews::IsSeparator(wchar_t param_1)

{
  if ((param_1 != L'/') && (param_1 != L'\\')) {
    return false;
  }
  return true;
}

// IterateAncestors @ 1419536e0

void __cdecl
FPathViews::IterateAncestors
          (TStringView<wchar_t> *param_1,TFunctionRef<bool___cdecl(TStringView<wchar_t>)> *param_2)

{
  wchar_t wVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  wchar_t *pwVar5;
  ulonglong uVar6;
  int iVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  wchar_t *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  wchar_t *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  TStringView<wchar_t> local_68;
  wchar_t *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  
  local_68.DataPtr = param_1->DataPtr;
  local_68.Size = param_1->Size;
  local_68._12_4_ = *(undefined4 *)&param_1->field_0xc;
  uVar10 = 0;
  local_a8.DataPtr = (wchar_t *)0x0;
  local_a8.Size = 0;
  local_98.DataPtr = (wchar_t *)0x0;
  local_98.Size = 0;
  SplitVolumeSpecifier(&local_68,&local_a8,&local_98);
  iVar11 = local_a8.Size;
  lVar12 = (longlong)local_a8.Size;
  if (local_a8.Size < 1) {
LAB_141953810:
    if ((iVar11 == 0) && (0 < param_1->Size)) {
      wVar1 = *param_1->DataPtr;
      uVar6 = uVar10;
      if (((ushort)wVar1 & 0xffffffc0) == 0x40) {
        uVar6 = 0x10000000;
      }
      if (((uVar6 | -(ulonglong)((ushort)wVar1 < 0x40) & 0x800000000000) >> ((ushort)wVar1 & 0x3f) &
          1) != 0) {
        local_98.Size = 1;
        local_98.DataPtr = param_1->DataPtr;
        goto LAB_1419537f3;
      }
    }
    pwVar9 = local_a8.DataPtr;
    uVar13 = local_a8.DataPtr._0_4_;
    uVar14 = local_a8.DataPtr._4_4_;
    iVar15 = local_a8.Size;
  }
  else {
    if (((local_a8.Size + -1 < 0) || (local_a8.Size <= local_a8.Size + -1)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0 && Index < Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                           ,0x234,
                           L"Index out of bounds on StringView: index %i on a view with a length of %i"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((local_a8.DataPtr[lVar12 + -1] != L':') || (local_98.Size < 1)) goto LAB_141953810;
    wVar1 = *local_98.DataPtr;
    uVar6 = uVar10;
    if (((ushort)wVar1 & 0xffffffc0) == 0x40) {
      uVar6 = 0x10000000;
    }
    if (((uVar6 | -(ulonglong)((ushort)wVar1 < 0x40) & 0x800000000000) >> ((ushort)wVar1 & 0x3f) & 1
        ) == 0) goto LAB_141953810;
    local_98.Size = iVar11 + 1;
    local_98.DataPtr = local_a8.DataPtr;
LAB_1419537f3:
    pwVar9 = local_98.DataPtr;
    uVar13 = (int)local_98.DataPtr;
    uVar14 = (int)((ulonglong)local_98.DataPtr >> 0x20);
    iVar15 = local_98.Size;
    iVar11 = local_98.Size;
  }
  do {
    local_88 = param_1->DataPtr;
    for (pwVar8 = local_88 + (longlong)(int)*(undefined8 *)&param_1->Size + -1;
        pwVar8 != local_88 + -1; pwVar8 = pwVar8 + -1) {
      wVar1 = *pwVar8;
      uVar6 = uVar10;
      if (((ushort)wVar1 & 0xffffffc0) == 0x40) {
        uVar6 = 0x10000000;
      }
      if (((uVar6 | -(ulonglong)((ushort)wVar1 < 0x40) & 0x800000000000) >> ((ushort)wVar1 & 0x3f) &
          1) == 0) break;
    }
    iVar7 = (int)((longlong)pwVar8 + (2 - (longlong)local_88) >> 1);
    param_1->DataPtr = local_88;
    *(ulonglong *)&param_1->Size = CONCAT44(uStack_7c,iVar7);
    pwVar8 = param_1->DataPtr;
    iStack_80 = iVar7;
    if (pwVar8 + param_1->Size <= pwVar9 + iVar11) break;
    local_58 = local_88;
    uStack_50 = CONCAT44(uStack_7c,iVar7);
    cVar4 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_58);
    if (cVar4 == '\0') {
      return;
    }
    for (pwVar5 = pwVar8 + (longlong)iVar7 + -1; pwVar5 != pwVar8 + -1; pwVar5 = pwVar5 + -1) {
      wVar1 = *pwVar5;
      uVar6 = uVar10;
      if (((ushort)wVar1 & 0xffffffc0) == 0x40) {
        uVar6 = 0x10000000;
      }
      if (((uVar6 | -(ulonglong)((ushort)wVar1 < 0x40) & 0x800000000000) >> ((ushort)wVar1 & 0x3f) &
          1) != 0) break;
    }
    uStack_70 = (undefined4)((longlong)pwVar5 + (2 - (longlong)pwVar8) >> 1);
    param_1->DataPtr = pwVar8;
    *(ulonglong *)&param_1->Size = CONCAT44(uStack_6c,uStack_70);
    local_78 = pwVar8;
  } while (param_1->Size != 0);
  if (iVar11 != 0) {
    local_48 = uVar13;
    uStack_44 = uVar14;
    iStack_40 = iVar15;
    (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_48);
  }
  return;
}

// IterateComponents @ 1419539c0

void __cdecl
FPathViews::IterateComponents
          (TStringView<wchar_t> *param_1,TFunctionRef<void___cdecl(TStringView<wchar_t>)> *param_2)

{
  wchar_t local_res8 [16];
  TArrayView<wchar_t_const_,int> local_38;
  TFunctionRef<void___cdecl(TStringView<wchar_t>)> local_28;
  TStringView<wchar_t> local_18;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_38.ArrayNum = 2;
  local_38.DataPtr = local_res8;
  local_res8[0] = L'/';
  local_res8[1] = L'\\';
  UE::String::ParseTokensMultiple(&local_18,&local_38,&local_28,None);
  return;
}

// Less @ 141953d10

bool __cdecl FPathViews::Less(TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2)

{
  wchar_t *pwVar1;
  int iVar2;
  wchar_t *pwVar3;
  bool bVar4;
  ushort uVar5;
  ushort uVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  TStringView<wchar_t> local_28;
  wchar_t *local_18;
  int iStack_10;
  undefined4 uStack_c;
  
  local_28.DataPtr = param_1->DataPtr;
  local_28.Size = param_1->Size;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  bVar4 = HasRedundantTerminatingSeparator(&local_28);
  if (bVar4) {
    do {
      iVar2 = param_1->Size;
      if (iVar2 + -1 < iVar2) {
        iVar2 = iVar2 + -1;
      }
      local_28.DataPtr = param_1->DataPtr;
      iStack_10 = 0;
      if (0 < iVar2) {
        iStack_10 = iVar2;
      }
      local_28._12_4_ = uStack_c;
      local_28.Size = iStack_10;
      param_1->DataPtr = local_28.DataPtr;
      param_1->Size = iStack_10;
      *(undefined4 *)&param_1->field_0xc = uStack_c;
      local_18 = local_28.DataPtr;
      bVar4 = HasRedundantTerminatingSeparator(&local_28);
    } while (bVar4);
  }
  local_28.DataPtr = param_2->DataPtr;
  local_28.Size = param_2->Size;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  bVar4 = HasRedundantTerminatingSeparator(&local_28);
  if (bVar4) {
    do {
      iVar2 = param_2->Size;
      if (iVar2 + -1 < iVar2) {
        iVar2 = iVar2 + -1;
      }
      local_28.DataPtr = param_2->DataPtr;
      iStack_10 = 0;
      if (0 < iVar2) {
        iStack_10 = iVar2;
      }
      local_28._12_4_ = uStack_c;
      local_28.Size = iStack_10;
      param_2->DataPtr = local_28.DataPtr;
      param_2->Size = iStack_10;
      *(undefined4 *)&param_2->field_0xc = uStack_c;
      local_18 = local_28.DataPtr;
      bVar4 = HasRedundantTerminatingSeparator(&local_28);
    } while (bVar4);
  }
  pwVar3 = param_1->DataPtr;
  pwVar7 = param_2->DataPtr;
  pwVar1 = pwVar7 + (int)*(undefined8 *)&param_2->Size;
  if (pwVar3 < pwVar3 + (int)*(undefined8 *)&param_1->Size) {
    lVar8 = (longlong)pwVar3 - (longlong)pwVar7;
    do {
      if (pwVar1 <= pwVar7) {
        return false;
      }
      uVar5 = *(ushort *)(lVar8 + (longlong)pwVar7);
      uVar5 = uVar5 - (-(ushort)(uVar5 - 0x61 < 0x1a) & 0x20);
      uVar6 = *pwVar7 - (-(ushort)((ushort)*pwVar7 - 0x61 < 0x1a) & 0x20);
      if ((uVar5 == 0x2f) || (uVar5 == 0x5c)) {
        if ((uVar6 != 0x2f) && (uVar6 != 0x5c)) {
          return true;
        }
      }
      else {
        if (uVar6 == 0x2f) {
          return false;
        }
        if (uVar6 == 0x5c) {
          return false;
        }
        if (uVar5 != uVar6) {
          return uVar5 < uVar6;
        }
      }
      pwVar7 = pwVar7 + 1;
    } while ((wchar_t *)(lVar8 + (longlong)pwVar7) < pwVar3 + (int)*(undefined8 *)&param_1->Size);
  }
  if (pwVar1 <= pwVar7) {
    return false;
  }
  return true;
}

// NormalizeDirectoryName @ 1419570e0

void __cdecl FPathViews::NormalizeDirectoryName(TStringBuilderBase<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  wchar_t *pwVar5;
  int iVar6;
  TStringView<wchar_t> local_18;
  
  pwVar5 = param_1->Base;
  iVar6 = (int)((longlong)param_1->CurPos - (longlong)pwVar5 >> 1);
  if ((iVar6 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pwVar1 = pwVar5 + iVar6;
  for (; pwVar5 != pwVar1; pwVar5 = pwVar5 + 1) {
    if (*pwVar5 == L'\\') {
      *pwVar5 = L'/';
    }
  }
  local_18.DataPtr = param_1->Base;
  local_18.Size = (int)((longlong)param_1->CurPos - (longlong)local_18.DataPtr >> 1);
  bVar3 = HasRedundantTerminatingSeparator(&local_18);
  if (((int)((longlong)param_1->CurPos - (longlong)param_1->Base >> 1) < (int)(uint)bVar3) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount <= Len()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                         ,0xe8,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  param_1->CurPos = param_1->CurPos + -(ulonglong)bVar3;
  return;
}

// NormalizeFilename @ 141957300

void __cdecl FPathViews::NormalizeFilename(TStringBuilderBase<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  code *pcVar2;
  bool bVar3;
  wchar_t *pwVar4;
  int iVar5;
  
  pwVar4 = param_1->Base;
  iVar5 = (int)((longlong)param_1->CurPos - (longlong)pwVar4 >> 1);
  if ((iVar5 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pwVar1 = pwVar4 + iVar5;
  for (; pwVar4 != pwVar1; pwVar4 = pwVar4 + 1) {
    if (*pwVar4 == L'\\') {
      *pwVar4 = L'/';
    }
  }
  return;
}

// RemoveDuplicateSlashes @ 141965f00

void __cdecl FPathViews::RemoveDuplicateSlashes(TStringBuilderBase<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  code *pcVar3;
  wchar_t *pwVar4;
  bool bVar5;
  int iVar6;
  wchar_t *pwVar7;
  wchar_t wVar8;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->Base;
  local_28.Size = 2;
  local_18.Size = (int)((longlong)param_1->CurPos - (longlong)local_18.DataPtr >> 1);
  local_28.DataPtr = L"//";
  iVar6 = UE::String::FindFirst(&local_18,&local_28,CaseSensitive);
  if (iVar6 != -1) {
    pwVar1 = param_1->Base;
    wVar8 = L'/';
    pwVar7 = pwVar1 + (longlong)iVar6 + 1;
    pwVar2 = param_1->CurPos;
    pwVar4 = pwVar7;
    while (pwVar4 = pwVar4 + 1, pwVar4 != pwVar1 + (int)((longlong)pwVar2 - (longlong)pwVar1 >> 1))
    {
      if (*pwVar4 != L'/' || wVar8 != L'/') {
        *pwVar7 = *pwVar4;
        pwVar7 = pwVar7 + 1;
      }
      wVar8 = *pwVar4;
    }
    *pwVar7 = L'\0';
    iVar6 = (int)((longlong)pwVar4 - (longlong)pwVar7 >> 1);
    if (((int)((longlong)param_1->CurPos - (longlong)param_1->Base >> 1) < iVar6) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount <= Len()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                           ,0xe8,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    param_1->CurPos = param_1->CurPos + -(longlong)iVar6;
  }
  return;
}

// SetExtension @ 14196a7d0

FString * __cdecl
FPathViews::SetExtension
          (FString *__return_storage_ptr__,TStringView<wchar_t> *param_1,
          TStringView<wchar_t> *param_2)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  int iVar3;
  wchar_t *pwVar4;
  int iVar5;
  undefined4 local_28;
  undefined4 uStack_24;
  
  pwVar2 = param_1->DataPtr;
  pwVar4 = pwVar2 + (int)*(undefined8 *)&param_1->Size;
  do {
    if (pwVar2 == pwVar4) goto LAB_14196a81f;
    wVar1 = pwVar4[-1];
    pwVar4 = pwVar4 + -1;
    if ((wVar1 == L'/') || (wVar1 == L'\\')) goto LAB_14196a81f;
  } while (wVar1 != L'.');
  iVar3 = (int)((longlong)pwVar4 - (longlong)pwVar2 >> 1);
  if (iVar3 == -1) {
LAB_14196a81f:
    local_28 = *(undefined4 *)&param_1->DataPtr;
    uStack_24 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
    iVar3 = param_1->Size;
  }
  else {
    iVar5 = param_1->Size;
    if (iVar3 < param_1->Size) {
      iVar5 = iVar3;
    }
    iVar3 = 0;
    if (0 < iVar5) {
      iVar3 = iVar5;
    }
    local_28 = SUB84(pwVar2,0);
    uStack_24 = (undefined4)((ulonglong)pwVar2 >> 0x20);
  }
  iVar5 = param_2->Size;
  if ((iVar5 == 0) || ((0 < iVar5 && (*param_2->DataPtr == L'.')))) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    ::FString::Reserve(__return_storage_ptr__,iVar5 + iVar3);
    ::FString::AppendChars(__return_storage_ptr__,(wchar_t *)CONCAT44(uStack_24,local_28),iVar3);
  }
  else {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    ::FString::Reserve(__return_storage_ptr__,iVar5 + 1 + iVar3);
    ::FString::AppendChars(__return_storage_ptr__,(wchar_t *)CONCAT44(uStack_24,local_28),iVar3);
    ::FString::AppendChar(__return_storage_ptr__,L'.');
  }
  ::FString::AppendChars(__return_storage_ptr__,param_2->DataPtr,(int)*(undefined8 *)&param_2->Size)
  ;
  return __return_storage_ptr__;
}

// Split @ 14196ddc0

void __cdecl
FPathViews::Split(TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2,
                 TStringView<wchar_t> *param_3,TStringView<wchar_t> *param_4)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uStack_3c;
  wchar_t *local_38;
  undefined8 uStack_30;
  
  pwVar2 = param_1->DataPtr;
  pwVar6 = (wchar_t *)0x0;
  pwVar5 = pwVar2 + (int)*(undefined8 *)&param_1->Size;
  iVar8 = 0;
  do {
    if (pwVar2 == pwVar5) goto LAB_14196de22;
    pwVar1 = pwVar5 + -1;
    pwVar5 = pwVar5 + -1;
  } while ((*pwVar1 != L'/') && (*pwVar1 != L'\\'));
  if (pwVar5 == (wchar_t *)0x0) {
LAB_14196de22:
    local_38 = param_1->DataPtr;
    uStack_30 = *(undefined8 *)&param_1->Size;
    iVar4 = param_1->Size;
  }
  else {
    iVar9 = param_1->Size;
    iVar4 = (iVar9 - (int)((longlong)pwVar5 - (longlong)pwVar2 >> 1)) + -1;
    iVar3 = iVar9;
    if (iVar4 < iVar9) {
      iVar3 = iVar4;
    }
    iVar4 = iVar8;
    if (0 < iVar3) {
      iVar4 = iVar3;
    }
    local_38 = pwVar2 + ((longlong)iVar9 - (longlong)iVar4);
    uStack_30 = CONCAT44(uStack_3c,iVar4);
  }
  pwVar5 = local_38 + iVar4;
  do {
    iVar9 = iVar4;
    if (local_38 == pwVar5) goto LAB_14196de6b;
    pwVar5 = pwVar5 + -1;
  } while (*pwVar5 != L'.');
  pwVar6 = pwVar5;
  if (pwVar5 != (wchar_t *)0x0) {
    iVar9 = (int)((longlong)pwVar5 - (longlong)local_38 >> 1);
  }
LAB_14196de6b:
  iVar3 = param_1->Size;
  iVar7 = (iVar3 - iVar4) + -1;
  if (iVar7 < iVar3) {
    iVar3 = iVar7;
  }
  iVar7 = 0;
  if (0 < iVar3) {
    iVar7 = iVar3;
  }
  param_2->DataPtr = pwVar2;
  *(ulonglong *)&param_2->Size = CONCAT44(uStack_3c,iVar7);
  if (((pwVar6 == (wchar_t *)0x0) || (iVar4 != 2)) ||
     (iVar3 = FGenericPlatformStricmp::Strnicmp(local_38,L"..",2), iVar3 != 0)) {
    iVar3 = iVar4;
    if (iVar9 < iVar4) {
      iVar3 = iVar9;
    }
    iVar7 = iVar8;
    if (0 < iVar3) {
      iVar7 = iVar3;
    }
    uStack_30 = CONCAT44(uStack_30._4_4_,iVar7);
    iVar3 = (iVar4 - iVar9) + -1;
    param_3->DataPtr = local_38;
    *(undefined8 *)&param_3->Size = uStack_30;
    iVar9 = iVar4;
    if (iVar3 < iVar4) {
      iVar9 = iVar3;
    }
    if (0 < iVar9) {
      iVar8 = iVar9;
    }
    uStack_30 = CONCAT44(uStack_30._4_4_,iVar8);
    param_4->DataPtr = local_38 + ((longlong)iVar4 - (longlong)iVar8);
    *(undefined8 *)&param_4->Size = uStack_30;
  }
  else {
    param_3->DataPtr = local_38;
    *(undefined8 *)&param_3->Size = uStack_30;
    param_4->DataPtr = (wchar_t *)0x0;
    param_4->Size = 0;
  }
  return;
}

// SplitFirstComponent @ 14196e070

void __cdecl
FPathViews::SplitFirstComponent
          (TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2,TStringView<wchar_t> *param_3
          )

{
  wchar_t wVar1;
  int iVar2;
  wchar_t *pwVar3;
  code *pcVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  wchar_t *pwVar8;
  int iVar9;
  int iVar10;
  int iStack_20;
  undefined4 uStack_1c;
  
  pwVar3 = param_1->DataPtr;
  iVar2 = param_1->Size;
  pwVar8 = pwVar3;
  do {
    if (pwVar8 == pwVar3 + iVar2) {
LAB_14196e0d0:
      iVar2 = param_1->Size;
      uVar5 = *(undefined4 *)&param_1->field_0xc;
      param_2->DataPtr = param_1->DataPtr;
      param_2->Size = iVar2;
      *(undefined4 *)&param_2->field_0xc = uVar5;
      param_3->Size = 0;
      param_3->DataPtr = (wchar_t *)0x0;
LAB_14196e0e4:
      iVar2 = param_3->Size;
      while( true ) {
        if (iVar2 < 1) {
          return;
        }
        wVar1 = *param_3->DataPtr;
        if ((wVar1 != L'/') && (wVar1 != L'\\')) break;
        iVar2 = param_3->Size;
        iVar7 = iVar2;
        if (iVar2 + -1 < iVar2) {
          iVar7 = iVar2 + -1;
        }
        iVar9 = 0;
        if (0 < iVar7) {
          iVar9 = iVar7;
        }
        param_3->DataPtr = param_3->DataPtr + ((longlong)iVar2 - (longlong)iVar9);
        *(ulonglong *)&param_3->Size = CONCAT44(uStack_1c,iVar9);
        iVar2 = param_3->Size;
      }
      return;
    }
    if ((*pwVar8 == L'/') || (*pwVar8 == L'\\')) {
      iVar7 = (int)((longlong)pwVar8 - (longlong)pwVar3 >> 1);
      if (iVar7 != 0) {
        pwVar8 = TStringView<wchar_t>::operator[](param_1,iVar7 + -1);
        iVar2 = param_1->Size;
        iVar10 = (iVar2 - iVar7) + -1;
        iVar9 = iVar2;
        if (*pwVar8 == L':') {
          if (iVar7 + 1 < iVar2) {
            iVar9 = iVar7 + 1;
          }
        }
        else if (iVar7 < iVar2) {
          iVar9 = iVar7;
        }
        iVar7 = 0;
        if (0 < iVar9) {
          iVar7 = iVar9;
        }
        iVar9 = iVar2;
        if (iVar10 < iVar2) {
          iVar9 = iVar10;
        }
        param_2->DataPtr = pwVar3;
        *(ulonglong *)&param_2->Size = CONCAT44(uStack_1c,iVar7);
        iVar7 = 0;
        if (0 < iVar9) {
          iVar7 = iVar9;
        }
        param_3->DataPtr = pwVar3 + ((longlong)iVar2 - (longlong)iVar7);
        *(ulonglong *)&param_3->Size = CONCAT44(uStack_1c,iVar7);
        goto LAB_14196e0e4;
      }
      if (iVar2 != 1) {
        if ((iVar2 < 2) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0 && Index < Size",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                               ,0x234,
                               L"Index out of bounds on StringView: index %i on a view with a length of %i"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pwVar3 = param_1->DataPtr;
        if ((pwVar3[1] == L'/') || (pwVar3[1] == L'\\')) {
          iVar2 = param_1->Size;
          iVar7 = iVar2;
          if (2 < iVar2) {
            iVar7 = 2;
          }
          iStack_20 = 0;
          if (0 < iVar7) {
            iStack_20 = iVar7;
          }
          iVar7 = iVar2 + -2;
        }
        else {
          iVar2 = param_1->Size;
          iVar7 = iVar2;
          if (1 < iVar2) {
            iVar7 = 1;
          }
          iStack_20 = 0;
          if (0 < iVar7) {
            iStack_20 = iVar7;
          }
          iVar7 = iVar2 + -1;
        }
        iVar9 = iVar2;
        if (iVar7 < iVar2) {
          iVar9 = iVar7;
        }
        param_2->DataPtr = pwVar3;
        *(ulonglong *)&param_2->Size = CONCAT44(uStack_1c,iStack_20);
        iVar7 = 0;
        if (0 < iVar9) {
          iVar7 = iVar9;
        }
        param_3->DataPtr = pwVar3 + ((longlong)iVar2 - (longlong)iVar7);
        *(ulonglong *)&param_3->Size = CONCAT44(uStack_1c,iVar7);
        goto LAB_14196e0e4;
      }
      goto LAB_14196e0d0;
    }
    pwVar8 = pwVar8 + 1;
  } while( true );
}

// SplitVolumeSpecifier @ 14196e2b0

void __cdecl
FPathViews::SplitVolumeSpecifier
          (TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2,TStringView<wchar_t> *param_3
          )

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  wchar_t *pwVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  undefined4 uStack_c;
  
  iVar6 = param_1->Size;
  lVar11 = (longlong)iVar6;
  pwVar3 = param_1->DataPtr;
  if (iVar6 == 0) {
    param_2->DataPtr = (wchar_t *)0x0;
    param_2->Size = 0;
    param_3->DataPtr = (wchar_t *)0x0;
    param_3->Size = 0;
    return;
  }
  wVar2 = *pwVar3;
  if (wVar2 == L':') {
    iVar8 = iVar6;
    if (1 < iVar6) {
      iVar8 = 1;
    }
    iVar9 = 0;
    if (0 < iVar8) {
      iVar9 = iVar8;
    }
    param_2->DataPtr = pwVar3;
    *(ulonglong *)&param_2->Size = CONCAT44(uStack_c,iVar9);
    if (iVar6 != 1) {
      if (iVar6 + -1 < iVar6) {
        iVar6 = iVar6 + -1;
      }
      iVar8 = 0;
      if (0 < iVar6) {
        iVar8 = iVar6;
      }
      param_3->DataPtr = pwVar3 + (lVar11 - iVar8);
      *(ulonglong *)&param_3->Size = CONCAT44(uStack_c,iVar8);
      return;
    }
LAB_14196e511:
    param_3->DataPtr = (wchar_t *)0x0;
    param_3->Size = 0;
  }
  else {
    if (iVar6 != 1) {
      if ((wVar2 == L'/') || (wVar2 == L'\\')) {
        if ((pwVar3[1] == L'/') || (pwVar3[1] == L'\\')) {
          if (iVar6 != 2) {
            iVar8 = 2;
            if (2 < lVar11) {
              lVar7 = 2;
              do {
                if ((pwVar3[lVar7] != L'/') && (pwVar3[lVar7] != L'\\')) break;
                iVar8 = iVar8 + 1;
                lVar7 = lVar7 + 1;
              } while (lVar7 < lVar11);
            }
            pwVar10 = pwVar3 + iVar8;
            pwVar1 = pwVar10 + (iVar6 - iVar8);
            for (; pwVar10 != pwVar1; pwVar10 = pwVar10 + 1) {
              if ((*pwVar10 == L'/') || (*pwVar10 == L'\\')) {
                iVar9 = (int)((longlong)pwVar10 - (longlong)pwVar3 >> 1);
                iVar8 = iVar6;
                if (iVar9 < iVar6) {
                  iVar8 = iVar9;
                }
                iVar9 = 0;
                if (0 < iVar8) {
                  iVar9 = iVar8;
                }
                param_2->DataPtr = pwVar3;
                *(ulonglong *)&param_2->Size = CONCAT44(uStack_c,iVar9);
                iVar8 = iVar6 - param_2->Size;
                if (iVar8 < iVar6) {
                  iVar6 = iVar8;
                }
                iVar8 = 0;
                if (0 < iVar6) {
                  iVar8 = iVar6;
                }
                pwVar3 = pwVar3 + (lVar11 - iVar8);
                goto LAB_14196e41d;
              }
            }
          }
          iVar6 = param_1->Size;
          uVar4 = *(undefined4 *)&param_1->field_0xc;
          param_2->DataPtr = param_1->DataPtr;
          param_2->Size = iVar6;
          *(undefined4 *)&param_2->field_0xc = uVar4;
          goto LAB_14196e511;
        }
      }
      else {
        if (pwVar3[1] == L':') {
          iVar8 = iVar6;
          if (2 < iVar6) {
            iVar8 = 2;
          }
          iVar9 = 0;
          if (0 < iVar8) {
            iVar9 = iVar8;
          }
          if (iVar6 + -2 < iVar6) {
            iVar6 = iVar6 + -2;
          }
          param_2->DataPtr = pwVar3;
          *(ulonglong *)&param_2->Size = CONCAT44(uStack_c,iVar9);
          iVar8 = 0;
          if (0 < iVar6) {
            iVar8 = iVar6;
          }
          param_3->DataPtr = pwVar3 + (lVar11 - iVar8);
          *(ulonglong *)&param_3->Size = CONCAT44(uStack_c,iVar8);
          return;
        }
        if (2 < lVar11) {
          lVar7 = 2;
          iVar8 = 3;
          do {
            wVar2 = pwVar3[lVar7];
            if ((wVar2 == L'/') || (wVar2 == L'\\')) break;
            if (wVar2 == L':') {
              iVar9 = iVar6;
              if (iVar8 < iVar6) {
                iVar9 = iVar8;
              }
              iVar5 = 0;
              if (0 < iVar9) {
                iVar5 = iVar9;
              }
              param_2->DataPtr = pwVar3;
              *(ulonglong *)&param_2->Size = CONCAT44(uStack_c,iVar5);
              if (iVar8 == iVar6) goto LAB_14196e511;
              if (iVar6 - iVar8 < iVar6) {
                iVar6 = iVar6 - iVar8;
              }
              iVar8 = 0;
              if (0 < iVar6) {
                iVar8 = iVar6;
              }
              pwVar3 = pwVar3 + (lVar11 - iVar8);
              goto LAB_14196e41d;
            }
            iVar8 = iVar8 + 1;
            lVar7 = lVar7 + 1;
          } while (lVar7 < lVar11);
        }
      }
    }
    pwVar3 = param_1->DataPtr;
    iVar8 = param_1->Size;
    uStack_c = *(undefined4 *)&param_1->field_0xc;
    param_2->DataPtr = (wchar_t *)0x0;
    param_2->Size = 0;
LAB_14196e41d:
    param_3->DataPtr = pwVar3;
    param_3->Size = iVar8;
    *(undefined4 *)&param_3->field_0xc = uStack_c;
  }
  return;
}

// ToAbsolutePath @ 1419719b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FPathViews::ToAbsolutePath
          (TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2,
          TStringBuilderBase<wchar_t> *param_3)

{
  code *pcVar1;
  wchar_t *pwVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  wchar_t *pwVar7;
  undefined1 auStack_2b8 [32];
  int local_298;
  int local_290;
  TStringView<wchar_t> local_288;
  TStringView<wchar_t> local_278;
  wchar_t *local_268;
  undefined8 uStack_260;
  TStringBuilderBase<wchar_t> local_258;
  wchar_t local_238 [256];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_2b8;
  pwVar2 = param_2->DataPtr;
  local_288.Size = param_2->Size;
  local_288._12_4_ = *(undefined4 *)&param_2->field_0xc;
  if ((int)((longlong)param_3->CurPos - (longlong)param_3->Base >> 1) == 0) {
    iVar5 = (int)*(undefined8 *)&param_2->Size;
    for (pwVar7 = pwVar2; local_268 = pwVar2, uStack_260 = local_288._8_8_, pwVar7 != pwVar2 + iVar5
        ; pwVar7 = pwVar7 + 1) {
      if ((*pwVar7 == L'/') || (*pwVar7 == L'\\')) {
        iVar6 = (int)((longlong)pwVar7 - (longlong)pwVar2 >> 1);
        if (iVar6 == 0) goto LAB_141971b1c;
        iVar4 = iVar6 + -1;
        if (((iVar4 < 0) || (iVar5 <= iVar4)) &&
           (local_298 = iVar4, local_290 = iVar5,
           bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                              ,0x234,
                              L"Index out of bounds on StringView: index %i on a view with a length of %i"
                             ), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (pwVar2[(longlong)iVar6 + -1] == L':') goto LAB_141971b1c;
        break;
      }
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              (param_3,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
LAB_141971b1c:
    Append<wchar_t,TStringView<wchar_t>_&>(param_3,param_2);
    NormalizeAndCollapseDirectories(param_3);
  }
  else {
    local_278.DataPtr = param_1->DataPtr;
    local_278.Size = param_1->Size;
    local_278._12_4_ = *(undefined4 *)&param_1->field_0xc;
    local_258.Base = local_238;
    local_258.bIsDynamic = false;
    local_258.bIsExternal = false;
    local_258.CurPos = local_238;
    local_258.End = (wchar_t *)local_38;
    local_288.DataPtr = pwVar2;
    ToAbsolutePath(&local_278,&local_288,&local_258);
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              (param_3,local_258.Base,
               (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1));
    if (local_258.bIsDynamic != false) {
      FMemory::Free(local_258.Base);
    }
  }
  return;
}

// ToAbsolutePath @ 141971b70

void __cdecl
FPathViews::ToAbsolutePath(TStringView<wchar_t> *param_1,TStringBuilderBase<wchar_t> *param_2)

{
  size_t sVar1;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  local_28.DataPtr = FWindowsPlatformProcess::BaseDir();
  local_28.Size = 0;
  if (local_28.DataPtr != (wchar_t *)0x0) {
    sVar1 = wcslen(local_28.DataPtr);
    local_28.Size = (int)sVar1;
  }
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  ToAbsolutePath(&local_28,&local_18,param_2);
  return;
}

// ToAbsolutePathInline @ 141971be0

void __cdecl FPathViews::ToAbsolutePathInline(TStringBuilderBase<wchar_t> *param_1)

{
  size_t sVar1;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = FWindowsPlatformProcess::BaseDir();
  local_18.Size = 0;
  if (local_18.DataPtr != (wchar_t *)0x0) {
    sVar1 = wcslen(local_18.DataPtr);
    local_18.Size = (int)sVar1;
  }
  ToAbsolutePathInline(&local_18,param_1);
  return;
}

// ToAbsolutePathInline @ 141971c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FPathViews::ToAbsolutePathInline(TStringView<wchar_t> *param_1,TStringBuilderBase<wchar_t> *param_2)

{
  wchar_t *pwVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  wchar_t *pwVar6;
  void *pvVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_1c8 [32];
  int local_1a8;
  int local_1a0;
  wchar_t *local_198;
  int iStack_190;
  undefined4 uStack_18c;
  TStringView<wchar_t> local_188;
  TStringView<wchar_t> local_178;
  TStringBuilderBase<wchar_t> local_168;
  wchar_t local_148 [128];
  ulonglong local_48 [4];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_1c8;
  if ((param_1->Size < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BasePath.Len() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\PathViews.cpp"
                         ,0x20a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pwVar1 = param_2->Base;
  iVar8 = (int)((longlong)param_2->CurPos - (longlong)pwVar1 >> 1);
  pwVar6 = pwVar1;
  do {
    if (pwVar6 == pwVar1 + iVar8) {
LAB_141971d15:
      iVar8 = param_1->Size;
      if ((iVar8 < 1) ||
         ((param_1->DataPtr[(longlong)iVar8 + -1] != L'/' &&
          (param_1->DataPtr[(longlong)iVar8 + -1] != L'\\')))) {
        local_168.Base = local_148;
        iVar8 = (int)*(undefined8 *)&param_1->Size;
        lVar12 = (longlong)iVar8;
        local_168.CurPos = local_148;
        pwVar1 = param_1->DataPtr;
        local_168.End = (wchar_t *)local_48;
        local_168.bIsDynamic = false;
        local_168.bIsExternal = false;
        if (local_48 < local_148 + lVar12) {
          uVar9 = lVar12 + 0x7fU >> 1 | lVar12 + 0x7fU;
          uVar9 = uVar9 >> 2 | uVar9;
          uVar9 = uVar9 >> 4 | uVar9;
          uVar9 = uVar9 >> 8 | uVar9;
          uVar5 = (uVar9 >> 0x10 | uVar9) + 1;
          uVar9 = 0x20;
          if (0x20 < uVar5) {
            uVar9 = uVar5;
          }
          pwVar6 = FMemory::Malloc(uVar9 * 2,2);
          lVar10 = (longlong)local_168.CurPos - (longlong)local_168.Base >> 1;
          if (lVar10 != 0) {
            memcpy(pwVar6,local_168.Base,lVar10 * 2);
          }
          if (local_168.bIsDynamic != false) {
            FMemory::Free(local_168.Base);
          }
          local_168.CurPos = pwVar6 + lVar10;
          local_168.End = pwVar6 + uVar9;
          local_168.bIsDynamic = true;
          local_168.Base = pwVar6;
        }
        if (iVar8 != 0) {
          pvVar7 = FGenericPlatformString::Memcpy(local_168.CurPos,pwVar1,lVar12 * 2);
          local_168.CurPos = (wchar_t *)((longlong)pvVar7 + lVar12 * 2);
        }
        if (local_168.End < local_168.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_168,1);
        }
        *local_168.CurPos = L'/';
        local_168.CurPos = local_168.CurPos + 1;
        local_198 = local_168.Base;
        iStack_190 = (int)((longlong)local_168.CurPos - (longlong)local_168.Base >> 1);
        local_178._12_4_ = uStack_18c;
        local_178.Size = iStack_190;
        local_178.DataPtr = local_168.Base;
        TStringBuilderBase<wchar_t>::ReplaceAt(param_2,0,0,&local_178);
        if (local_168.bIsDynamic != false) {
          FMemory::Free(local_168.Base);
        }
      }
      else {
        local_188.DataPtr = param_1->DataPtr;
        local_188.Size = param_1->Size;
        local_188._12_4_ = *(undefined4 *)&param_1->field_0xc;
        TStringBuilderBase<wchar_t>::ReplaceAt(param_2,0,0,&local_188);
      }
LAB_141971f0a:
      NormalizeAndCollapseDirectories(param_2);
      return;
    }
    if ((*pwVar6 == L'/') || (*pwVar6 == L'\\')) {
      iVar11 = (int)((longlong)pwVar6 - (longlong)pwVar1 >> 1);
      if (iVar11 == 0) goto LAB_141971f0a;
      iVar4 = iVar11 + -1;
      if (((iVar4 < 0) || (iVar8 <= iVar4)) &&
         (local_1a8 = iVar4, local_1a0 = iVar8,
         bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0 && Index < Size",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                            ,0x234,
                            L"Index out of bounds on StringView: index %i on a view with a length of %i"
                           ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (pwVar1[(longlong)iVar11 + -1] == L':') goto LAB_141971f0a;
      goto LAB_141971d15;
    }
    pwVar6 = pwVar6 + 1;
  } while( true );
}

// TryMakeChildPathRelativeTo @ 141977120

bool __cdecl
FPathViews::TryMakeChildPathRelativeTo
          (TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2,TStringView<wchar_t> *param_3
          )

{
  ushort uVar1;
  wchar_t wVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  wchar_t *pwVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  short sVar14;
  TStringView<wchar_t> local_28;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.Size = param_2->Size;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  bVar4 = HasRedundantTerminatingSeparator(&local_28);
  if (bVar4) {
    do {
      iVar9 = param_2->Size;
      if (iVar9 + -1 < iVar9) {
        iVar9 = iVar9 + -1;
      }
      local_28.DataPtr = param_2->DataPtr;
      local_28.Size = 0;
      if (0 < iVar9) {
        local_28.Size = iVar9;
      }
      uStack_10._0_4_ = local_28.Size;
      param_2->DataPtr = local_28.DataPtr;
      param_2->Size = local_28.Size;
      *(undefined4 *)&param_2->field_0xc = uStack_10._4_4_;
      local_28._12_4_ = uStack_10._4_4_;
      local_18 = local_28.DataPtr;
      bVar4 = HasRedundantTerminatingSeparator(&local_28);
    } while (bVar4);
  }
  iVar9 = param_2->Size;
  if ((iVar9 != 0) && (iVar9 <= param_1->Size)) {
    if (((param_1->Size < 1) || (iVar9 < 1)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Child.Len() > 0 && Parent.Len() > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\PathViews.cpp"
                           ,0x1a1,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    iVar9 = param_1->Size;
    iVar6 = 0;
    iVar13 = param_2->Size;
    local_18 = param_2->DataPtr;
    uStack_10 = *(undefined8 *)&param_2->Size;
    iVar7 = iVar6;
    if (iVar9 < 0) {
      iVar7 = iVar9;
    }
    iVar12 = iVar9 - iVar7;
    if (iVar13 < iVar9 - iVar7) {
      iVar12 = iVar13;
    }
    iVar8 = 0;
    if (0 < iVar12) {
      iVar8 = iVar12;
    }
    iVar12 = (int)*(undefined8 *)&param_2->Size;
    if (iVar12 == iVar8) {
      if (local_18 < local_18 + iVar12) {
        pwVar10 = local_18;
        do {
          uVar1 = *(ushort *)
                   ((longlong)param_1->DataPtr + ((longlong)iVar7 * 2 - (longlong)local_18) +
                   (longlong)pwVar10);
          sVar14 = *pwVar10 - (-(ushort)((ushort)*pwVar10 - 0x61 < 0x1a) & 0x20);
          sVar11 = uVar1 - (-(ushort)(uVar1 - 0x61 < 0x1a) & 0x20);
          if ((sVar14 == 0x2f) || (sVar14 == 0x5c)) {
            if (sVar11 != 0x2f) {
              bVar4 = sVar11 == 0x5c;
              goto LAB_141977289;
            }
          }
          else {
            bVar4 = sVar14 == sVar11;
LAB_141977289:
            if (!bVar4) goto LAB_141977402;
          }
          pwVar10 = pwVar10 + 1;
        } while (pwVar10 < local_18 + iVar12);
      }
      if (iVar9 == iVar13) {
        bVar4 = true;
        goto LAB_141977404;
      }
      if ((iVar9 < iVar13 + 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Child.Len() >= Parent.Len() + 1",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\PathViews.cpp"
                             ,0x1b0,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      iVar9 = param_2->Size;
      pwVar10 = TStringView<wchar_t>::operator[](param_2,iVar9 + -1);
      if ((*pwVar10 == L'/') || (*pwVar10 == L'\\')) {
        if (iVar9 == 1) {
          if ((param_1->Size < 2) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0 && Index < Size",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                                 ,0x234,
                                 L"Index out of bounds on StringView: index %i on a view with a length of %i"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          if ((param_1->DataPtr[1] == L'/') || (param_1->DataPtr[1] == L'\\')) goto LAB_141977402;
        }
        iVar13 = param_1->Size;
        iVar9 = iVar13 - param_2->Size;
LAB_141977379:
        iVar7 = iVar13;
        if (iVar9 < iVar13) {
          iVar7 = iVar9;
        }
        iVar9 = iVar6;
        if (0 < iVar7) {
          iVar9 = iVar7;
        }
        uStack_10 = CONCAT44(uStack_10._4_4_,iVar9);
        param_3->DataPtr = param_1->DataPtr + ((longlong)iVar13 - (longlong)iVar9);
        *(undefined8 *)&param_3->Size = uStack_10;
        iVar9 = param_3->Size;
        while( true ) {
          if (iVar9 < 1) {
            return true;
          }
          wVar2 = *param_3->DataPtr;
          if ((wVar2 != L'/') && (wVar2 != L'\\')) break;
          iVar9 = param_3->Size;
          iVar13 = iVar9;
          if (iVar9 + -1 < iVar9) {
            iVar13 = iVar9 + -1;
          }
          iVar7 = iVar6;
          if (0 < iVar13) {
            iVar7 = iVar13;
          }
          uStack_10._4_4_ = (undefined4)((ulonglong)uStack_10 >> 0x20);
          uStack_10 = CONCAT44(uStack_10._4_4_,iVar7);
          param_3->DataPtr = param_3->DataPtr + ((longlong)iVar9 - (longlong)iVar7);
          *(undefined8 *)&param_3->Size = uStack_10;
          iVar9 = param_3->Size;
        }
        return true;
      }
      pwVar10 = TStringView<wchar_t>::operator[](param_1,iVar9);
      if ((*pwVar10 == L'/') || (*pwVar10 == L'\\')) {
        iVar13 = param_1->Size;
        iVar9 = (iVar13 - iVar9) + -1;
        goto LAB_141977379;
      }
    }
  }
LAB_141977402:
  bVar4 = false;
LAB_141977404:
  param_3->Size = 0;
  param_3->DataPtr = (wchar_t *)0x0;
  return bVar4;
}

