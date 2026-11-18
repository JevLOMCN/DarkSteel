// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DesktopPlatform
// Functions: 1

// TryReadAndClear @ 142d35530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl FLockFile::TryReadAndClear(wchar_t *param_1,FString *param_2)

{
  WCHAR *pWVar1;
  code *pcVar2;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar3;
  bool bVar4;
  undefined1 uVar5;
  BOOL BVar6;
  size_t sVar7;
  HANDLE hFile;
  uchar *lpBuffer;
  DWORD nNumberOfBytesToRead;
  WCHAR *pWVar8;
  LARGE_INTEGER LVar9;
  int iVar10;
  uchar *puVar11;
  undefined1 auStackY_2e8 [32];
  undefined1 local_2a8 [4];
  DWORD local_2a4;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_2a0;
  LARGE_INTEGER local_298 [2];
  wchar_t *local_288;
  int iStack_280;
  undefined4 uStack_27c;
  TStringView<wchar_t> local_278;
  undefined4 local_260;
  TStringBuilderBase<wchar_t> local_258;
  WCHAR local_238 [260];
  WCHAR local_30 [4];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  ::FString::Reset(param_2,0);
  local_258.Base = local_238;
  local_258.bIsDynamic = false;
  local_258.bIsExternal = false;
  puVar11 = (uchar *)0x0;
  local_258.CurPos = local_238;
  local_258.End = local_30;
  iStack_280 = 0;
  local_288 = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar7 = wcslen(param_1);
    iStack_280 = (int)sVar7;
  }
  local_278._12_4_ = uStack_27c;
  local_278.Size = iStack_280;
  local_278.DataPtr = local_288;
  FPathViews::ToAbsolutePath(&local_278,&local_258);
  pWVar8 = local_258.Base;
  iVar10 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  if ((iVar10 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  pWVar1 = pWVar8 + iVar10;
  for (; pWVar8 != pWVar1; pWVar8 = pWVar8 + 1) {
    if (*pWVar8 == L'/') {
      *pWVar8 = L'\\';
    }
  }
  if (0x103 < (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1)) {
    local_260 = 4;
    if (local_258.End < local_258.CurPos + 4) {
      TStringBuilderBase<wchar_t>::Extend(&local_258,4);
    }
    for (pWVar8 = local_258.CurPos + 3; pWVar8 != local_258.Base + 3; pWVar8 = pWVar8 + -1) {
      *pWVar8 = pWVar8[-4];
    }
    builtin_wcsncpy(local_258.Base,L"\\\\?\\",4);
    local_258.CurPos = local_258.CurPos + 4;
  }
  if (local_258.End < local_258.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_258,1);
  }
  *local_258.CurPos = L'\0';
  hFile = CreateFileW(local_258.Base,0x80010000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffffffffffff) {
    BVar6 = GetFileSizeEx(hFile,local_298);
    if (BVar6 != 0) {
      LVar9 = local_298[0];
      if ((local_298[0].QuadPart != (local_298[0].QuadPart & 0xffffffffU)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("LI.QuadPart == LI.u.LowPart",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DesktopPlatform\\Private\\LockFile.cpp"
                             ,0x37,L"File exceeds supported 2GB limit."), LVar9 = local_298[0],
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      FUniqueBuffer::Alloc((ulong64)&local_2a0);
      TVar3.Owner = local_2a0.Owner;
      local_2a4 = 0;
      lpBuffer = puVar11;
      if (local_2a0.Owner != (FBufferOwner *)0x0) {
        if (((ulonglong)(local_2a0.Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
          (**(code **)((local_2a0.Owner)->_padding_ + 8))(local_2a0.Owner);
        }
        lpBuffer = (TVar3.Owner)->Data;
      }
      nNumberOfBytesToRead = LVar9.s.LowPart;
      BVar6 = ReadFile(hFile,lpBuffer,nNumberOfBytesToRead,&local_2a4,(LPOVERLAPPED)0x0);
      if ((BVar6 != 0) && (local_2a4 == nNumberOfBytesToRead)) {
        if (local_2a0.Owner != (FBufferOwner *)0x0) {
          if (((ulonglong)(local_2a0.Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
            (**(code **)((local_2a0.Owner)->_padding_ + 8))(local_2a0.Owner);
          }
          puVar11 = (local_2a0.Owner)->Data;
        }
        FFileHelper::BufferToString(param_2,puVar11,nNumberOfBytesToRead);
        local_2a8[0] = 1;
        SetFileInformationByHandle(hFile,FileDispositionInfo,local_2a8,1);
        UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
        ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_2a0);
        CloseHandle(hFile);
        bVar4 = true;
        goto LAB_142d35820;
      }
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_2a0);
    }
    CloseHandle(hFile);
  }
  bVar4 = false;
LAB_142d35820:
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_258);
  return bVar4;
}

