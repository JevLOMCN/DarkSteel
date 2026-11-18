// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 13

// FFileHandleWindows @ 141a9bba0

/* WARNING: Enum "Type": Some values do not have unique names */

FFileHandleWindows * __thiscall
FFileHandleWindows::FFileHandleWindows
          (FFileHandleWindows *this,void *param_1,uint param_2,uint param_3,uint param_4)

{
  BOOL BVar1;
  LARGE_INTEGER local_res8 [4];
  
  this->FileHandle = param_1;
  this->_padding_ = (longlong)&___7FFileHandleWindows__6B_;
  this->DesiredAccess = param_2;
  this->FilePos = 0;
  this->FileSize = 0;
  this->Flags = param_4;
  this->ShareMode = param_3;
  if ((longlong)param_1 - 1U < 0xfffffffffffffffe) {
    BVar1 = GetFileSizeEx(param_1,local_res8);
    if (BVar1 == 0) {
      this->FileSize = -1;
      if (2 < (byte)LogTemp._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&`private:_void___cdecl_FFileHandleWindows::UpdateFileSize(void)___ptr64'::__l8::
                    LOG_Static,(FLogCategoryBase *)&LogTemp);
      }
    }
    else {
      this->FileSize = (long64)local_res8[0];
    }
  }
  (this->OverlappedIO).Internal = 0;
  (this->OverlappedIO).InternalHigh = 0;
  (this->OverlappedIO).field2_0x10.Pointer = (void *)0x0;
  (this->OverlappedIO).hEvent = (void *)0x0;
  return this;
}

// ~FFileHandleWindows @ 141a9cf00

void __thiscall FFileHandleWindows::~FFileHandleWindows(FFileHandleWindows *this)

{
  BOOL BVar1;
  
  this->_padding_ = (longlong)&___7FFileHandleWindows__6B_;
  FPlatformFileTrace::BeginClose((ulong64)this->FileHandle);
  BVar1 = CloseHandle(this->FileHandle);
  if (BVar1 == 0) {
    FPlatformFileTrace::FailClose((ulong64)this->FileHandle);
  }
  else {
    FPlatformFileTrace::EndClose((ulong64)this->FileHandle);
  }
  this->FileHandle = (void *)0x0;
  this->_padding_ = (longlong)&___7IFileHandle__6B_;
  return;
}

// Flush @ 141aa6f20

bool __thiscall FFileHandleWindows::Flush(FFileHandleWindows *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  BOOL BVar4;
  
  if (((this->FileHandle == (void *)0x0) || (this->FileHandle == (void *)0xffffffffffffffff)) ||
     (this->FileSize == -1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformFile.cpp"
                       ,0x3a7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  BVar4 = FlushFileBuffers(this->FileHandle);
  return BVar4 != 0;
}

// Read @ 141abb140

bool __thiscall FFileHandleWindows::Read(FFileHandleWindows *this,uchar *param_1,long64 param_2)

{
  _OVERLAPPED *lpOverlapped;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  BOOL BVar4;
  DWORD DVar5;
  void *pvVar6;
  ulonglong uVar7;
  DWORD nNumberOfBytesToRead;
  longlong lVar8;
  ulong64 uVar9;
  DWORD local_res8 [2];
  
  if ((((this->FileHandle == (void *)0x0) || (this->FileHandle == (void *)0xffffffffffffffff)) ||
      (this->FileSize == -1)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformFile.cpp"
                         ,0x2ff,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  lpOverlapped = &this->OverlappedIO;
  FPlatformFileTrace::BeginRead
            ((ulong64)lpOverlapped,(ulong64)this->FileHandle,this->FilePos,param_2);
  uVar9 = 0;
  if (this->FileSize <= this->FilePos) {
    return false;
  }
  do {
    bVar2 = FWindowsPlatformMisc::IsWine();
    local_res8[0] = 0;
    lVar8 = 0xffffffff;
    if (bVar2) {
      lVar8 = 0x7ffff000;
    }
    nNumberOfBytesToRead = (DWORD)lVar8;
    if (param_2 < lVar8) {
      nNumberOfBytesToRead = (DWORD)param_2;
    }
    BVar4 = ReadFile(this->FileHandle,param_1,nNumberOfBytesToRead,local_res8,
                     (LPOVERLAPPED)lpOverlapped);
    if (BVar4 == 0) {
      DVar5 = GetLastError();
      if (DVar5 != 0x3e5) {
LAB_141abb2b4:
        FPlatformFileTrace::EndRead((ulong64)lpOverlapped,0);
        return false;
      }
      local_res8[0] = 0;
      BVar4 = GetOverlappedResult(this->FileHandle,(LPOVERLAPPED)lpOverlapped,local_res8,1);
      if (BVar4 == 0) goto LAB_141abb2b4;
    }
    uVar7 = (ulonglong)local_res8[0];
    param_2 = param_2 - uVar7;
    pvVar6 = (void *)(this->FilePos + uVar7);
    uVar9 = uVar9 + uVar7;
    this->FilePos = (long64)pvVar6;
    param_1 = param_1 + uVar7;
    (this->OverlappedIO).field2_0x10.Pointer = pvVar6;
    if ((local_res8[0] == 0) && (nNumberOfBytesToRead != 0)) {
      SetLastError(0x3eb);
      FPlatformFileTrace::EndRead((ulong64)lpOverlapped,uVar9);
      return false;
    }
    if ((param_2 < 1) || (this->FileSize <= (longlong)pvVar6)) {
      FPlatformFileTrace::EndRead((ulong64)lpOverlapped,uVar9);
      return true;
    }
  } while( true );
}

// ReadAt @ 141abb4c0

bool __thiscall
FFileHandleWindows::ReadAt(FFileHandleWindows *this,uchar *param_1,long64 param_2,long64 param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  BOOL BVar4;
  _OVERLAPPED *p_Var5;
  ulong64 uVar6;
  ulonglong uVar7;
  DWORD local_res8 [2];
  _OVERLAPPED local_48;
  
  if ((((this->FileHandle == (void *)0x0) || (this->FileHandle == (void *)0xffffffffffffffff)) ||
      (this->FileSize == -1)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformFile.cpp"
                         ,0x33b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if (((param_2 < 0) || (param_3 < 0)) || (this->FileSize < param_2 + param_3)) {
    return false;
  }
  if (param_2 == 0) {
    return true;
  }
  local_48.Internal = 0;
  local_48.InternalHigh = 0;
  local_48.field2_0x10.Pointer = (void *)0x0;
  local_48.hEvent = (void *)0x0;
  FPlatformFileTrace::BeginRead((ulong64)&local_48,(ulong64)this->FileHandle,param_3,param_2);
  uVar6 = 0;
  while( true ) {
    bVar2 = FWindowsPlatformMisc::IsWine();
    local_res8[0] = 0;
    uVar7 = 0xffffffff;
    if (bVar2) {
      uVar7 = 0x7ffff000;
    }
    if ((ulonglong)param_2 < uVar7) {
      uVar7 = param_2 & 0xffffffff;
    }
    local_48.field2_0x10 = (_OVERLAPPED_u_16)param_3;
    BVar4 = ReadFile(this->FileHandle,param_1,(DWORD)uVar7,local_res8,(LPOVERLAPPED)&local_48);
    if (BVar4 == 0) break;
    uVar7 = (ulonglong)local_res8[0];
    param_2 = param_2 - uVar7;
    uVar6 = uVar6 + uVar7;
    param_1 = param_1 + uVar7;
    if (local_res8[0] == 0) {
      SetLastError(0x3eb);
      p_Var5 = &this->OverlappedIO;
      goto LAB_141abb61f;
    }
    if (param_2 < 1) {
      FPlatformFileTrace::EndRead((ulong64)&local_48,uVar6);
      return true;
    }
  }
  p_Var5 = &local_48;
LAB_141abb61f:
  FPlatformFileTrace::EndRead((ulong64)p_Var5,uVar6);
  return false;
}

// Seek @ 141abfd90

bool __thiscall FFileHandleWindows::Seek(FFileHandleWindows *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (((this->FileHandle == (void *)0x0) || (this->FileHandle == (void *)0xffffffffffffffff)) ||
     (this->FileSize == -1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformFile.cpp"
                       ,0x2ee,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewPosition >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformFile.cpp"
                       ,0x2ef,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  this->FilePos = param_1;
  (this->OverlappedIO).field2_0x10 = (_OVERLAPPED_u_16)param_1;
  return true;
}

// SeekFromEnd @ 141abfed0

bool __thiscall FFileHandleWindows::SeekFromEnd(FFileHandleWindows *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (((this->FileHandle == (void *)0x0) || (this->FileHandle == (void *)0xffffffffffffffff)) ||
     (this->FileSize == -1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformFile.cpp"
                       ,0x2f7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (0 < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewPositionRelativeToEnd <= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformFile.cpp"
                       ,0x2f8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000141abff5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(this->_padding_ + 0x10))(this,this->FileSize + param_1);
  return (bool)uVar3;
}

// ShrinkBuffers @ 141ac2070

void __thiscall FFileHandleWindows::ShrinkBuffers(FFileHandleWindows *this)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  BOOL BVar4;
  HANDLE pvVar5;
  
  pvVar1 = this->FileHandle;
  if (((pvVar1 != (void *)0x0) && (pvVar1 != (void *)0xffffffffffffffff)) && (this->FileSize != -1))
  {
    FPlatformFileTrace::BeginReOpen((ulong64)pvVar1);
    pvVar5 = ReOpenFile(this->FileHandle,this->DesiredAccess,this->ShareMode,this->Flags);
    FPlatformFileTrace::EndReOpen((ulong64)pvVar5);
    if (pvVar5 != (HANDLE)0xffffffffffffffff) {
      FPlatformFileTrace::BeginClose((ulong64)this->FileHandle);
      BVar4 = CloseHandle(this->FileHandle);
      if (BVar4 == 0) {
        FPlatformFileTrace::FailClose((ulong64)this->FileHandle);
      }
      else {
        FPlatformFileTrace::EndClose((ulong64)this->FileHandle);
      }
      this->FileHandle = pvVar5;
      if (((pvVar5 == (HANDLE)0x0) || (this->FileSize == -1)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformFile.cpp"
                             ,0x3d3,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  return;
}

// Size @ 141ac21e0

long64 __thiscall FFileHandleWindows::Size(FFileHandleWindows *this)

{
  code *pcVar1;
  bool bVar2;
  long64 lVar3;
  
  if (((this->FileHandle != (void *)0x0) && (this->FileHandle != (void *)0xffffffffffffffff)) &&
     (this->FileSize != -1)) {
    return this->FileSize;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformFile.cpp"
                     ,0x2e9,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    lVar3 = (*pcVar1)();
    return lVar3;
  }
  return this->FileSize;
}

// Tell @ 141ac2a60

long64 __thiscall FFileHandleWindows::Tell(FFileHandleWindows *this)

{
  code *pcVar1;
  bool bVar2;
  long64 lVar3;
  
  if (((this->FileHandle != (void *)0x0) && (this->FileHandle != (void *)0xffffffffffffffff)) &&
     (this->FileSize != -1)) {
    return this->FilePos;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformFile.cpp"
                     ,0x2e4,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    lVar3 = (*pcVar1)();
    return lVar3;
  }
  return this->FilePos;
}

// Truncate @ 141ac3100

bool __thiscall FFileHandleWindows::Truncate(FFileHandleWindows *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  DWORD DVar5;
  BOOL BVar6;
  undefined8 local_res8;
  
  if (((this->FileHandle == (void *)0x0) || (this->FileHandle == (void *)0xffffffffffffffff)) ||
     (this->FileSize == -1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformFile.cpp"
                       ,0x3ad,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  cVar4 = (**(code **)(this->_padding_ + 0x10))(this,param_1);
  if (cVar4 != '\0') {
    local_res8 = this->FilePos;
    DVar5 = SetFilePointer(this->FileHandle,(LONG)local_res8,(PLONG)((longlong)&local_res8 + 4),0);
    if (DVar5 != 0xffffffff) {
      BVar6 = SetEndOfFile(this->FileHandle);
      if (BVar6 != 0) {
        UpdateFileSize(this);
        if (((this->FileHandle == (void *)0x0) || (this->FileHandle == (void *)0xffffffffffffffff))
           || (this->FileSize == -1)) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformFile.cpp"
                             ,0x3b1,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
        }
        return true;
      }
    }
  }
  return false;
}

// UpdateFileSize @ 141ac3dc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FFileHandleWindows::UpdateFileSize(FFileHandleWindows *this)

{
  BOOL BVar1;
  LARGE_INTEGER local_res8 [4];
  
  BVar1 = GetFileSizeEx(this->FileHandle,local_res8);
  if (BVar1 != 0) {
    this->FileSize = (long64)local_res8[0];
    return;
  }
  this->FileSize = -1;
  if (2 < (byte)LogTemp._0_1_) {
    UE::Logging::Private::BasicLog<3>
              (&`private:_void___cdecl_FFileHandleWindows::UpdateFileSize(void)___ptr64'::__l8::
                LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  return;
}

// Write @ 141ac54e0

bool __thiscall FFileHandleWindows::Write(FFileHandleWindows *this,uchar *param_1,long64 param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  BOOL BVar5;
  DWORD DVar6;
  HMODULE hModule;
  FARPROC pFVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulong64 uVar10;
  DWORD nNumberOfBytesToWrite;
  longlong lVar11;
  DWORD local_res8 [2];
  
  if ((((this->FileHandle == (void *)0x0) || (this->FileHandle == (void *)0xffffffffffffffff)) ||
      (this->FileSize == -1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformFile.cpp"
                         ,0x370,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  FPlatformFileTrace::BeginWrite((ulong64)this,(ulong64)this->FileHandle,this->FilePos,param_2);
  uVar10 = 0;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  do {
    lVar11 = 0xffffffff;
    if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      hModule = GetModuleHandleW(L"ntdll.dll");
      bVar3 = false;
      if (hModule != (HMODULE)0x0) {
        pFVar7 = GetProcAddress(hModule,"wine_get_version");
        bVar3 = pFVar7 != (FARPROC)0x0;
      }
      WineDetected.bValue = bVar3;
      _Init_thread_footer(&::_TSS0);
    }
    if (WineDetected.bValue != false) {
      lVar11 = 0x7ffff000;
    }
    local_res8[0] = 0;
    nNumberOfBytesToWrite = (DWORD)lVar11;
    if (param_2 < lVar11) {
      nNumberOfBytesToWrite = (DWORD)param_2;
    }
    BVar5 = WriteFile(this->FileHandle,param_1,nNumberOfBytesToWrite,local_res8,
                      (LPOVERLAPPED)&this->OverlappedIO);
    if (BVar5 == 0) {
      DVar6 = GetLastError();
      if (DVar6 != 0x3e5) {
LAB_141ac5665:
        FPlatformFileTrace::EndWrite((ulong64)this,0);
        return false;
      }
      local_res8[0] = 0;
      BVar5 = GetOverlappedResult(this->FileHandle,(LPOVERLAPPED)&this->OverlappedIO,local_res8,1);
      if (BVar5 == 0) goto LAB_141ac5665;
    }
    uVar9 = (ulonglong)local_res8[0];
    this->FilePos = this->FilePos + uVar9;
    param_2 = param_2 - uVar9;
    lVar11 = this->FilePos;
    param_1 = param_1 + uVar9;
    uVar10 = uVar10 + uVar9;
    (this->OverlappedIO).field2_0x10._s_0.Offset = (ulong)lVar11;
    (this->OverlappedIO).field2_0x10._s_0.OffsetHigh = (ulong)((ulonglong)lVar11 >> 0x20);
    lVar8 = this->FileSize;
    if (this->FileSize < lVar11) {
      lVar8 = lVar11;
    }
    this->FileSize = lVar8;
    if ((local_res8[0] == 0) && (nNumberOfBytesToWrite != 0)) {
      SetLastError(0x3eb);
      FPlatformFileTrace::EndWrite((ulong64)this,uVar10);
      return false;
    }
    if (param_2 < 1) {
      FPlatformFileTrace::EndWrite((ulong64)this,uVar10);
      return true;
    }
  } while( true );
}

