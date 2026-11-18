// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 13

// ~FAsyncBufferedFileReaderWindows @ 141a9cd50

void __thiscall
FAsyncBufferedFileReaderWindows::~FAsyncBufferedFileReaderWindows
          (FAsyncBufferedFileReaderWindows *this)

{
  BOOL BVar1;
  
  this->_padding_ = (longlong)&___7FAsyncBufferedFileReaderWindows__6B_;
  WaitForAsyncRead(this);
  if (this->Handle != (void *)0x0) {
    FPlatformFileTrace::BeginClose((ulong64)this->Handle);
    BVar1 = CloseHandle(this->Handle);
    if (BVar1 == 0) {
      FPlatformFileTrace::FailClose((ulong64)this->Handle);
    }
    else {
      FPlatformFileTrace::EndClose((ulong64)this->Handle);
    }
    this->Handle = (void *)0x0;
  }
  FMemory::Free(this->Buffers[0]);
  FMemory::Free(this->Buffers[1]);
  this->_padding_ = (longlong)&___7IFileHandle__6B_;
  return;
}

// Flush @ 141aa6f10

bool __thiscall
FAsyncBufferedFileReaderWindows::Flush(FAsyncBufferedFileReaderWindows *this,bool param_1)

{
  return false;
}

// Read @ 141abae40

bool __thiscall
FAsyncBufferedFileReaderWindows::Read
          (FAsyncBufferedFileReaderWindows *this,uchar *param_1,long64 param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  BOOL BVar6;
  DWORD DVar7;
  uint uVar8;
  _OVERLAPPED *p_Var9;
  size_t _Size;
  bool *pbVar10;
  DWORD local_res8 [2];
  DWORD local_res18 [2];
  
  if (((this->Handle == (void *)0x0) || (this->Handle == (void *)0xffffffffffffffff)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformFile.cpp"
                         ,0x1cc,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if (param_2 < 1) {
LAB_141abb10b:
    bVar3 = false;
  }
  else {
    if (this->CurrentAsyncReadBuffer == this->SerializeBuffer) {
      bVar3 = WaitForAsyncRead(this);
      if (!bVar3) goto LAB_141abb10b;
      StartAsyncRead(this,this->StreamBuffer);
    }
    if ((param_1 == (uchar *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Dest != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformFile.cpp"
                           ,0x1dd,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    do {
      _Size = (size_t)(this->BufferSize - this->SerializePos);
      if (param_2 < (longlong)_Size) {
        _Size = param_2;
      }
      if (this->FileSize < (longlong)(this->FilePos + _Size)) goto LAB_141abb10b;
      if ((longlong)_Size < 1) {
        cVar5 = this->bIsAtEOF;
        if (((bool)cVar5 == false) && (this->bHasReadOutstanding != false)) {
          p_Var9 = &this->OverlappedIO;
          local_res8[0] = 0;
          BVar6 = GetOverlappedResult(this->Handle,(LPOVERLAPPED)p_Var9,local_res8,1);
          if (BVar6 == 0) {
            DVar7 = GetLastError();
            if (DVar7 != 0x26) goto LAB_141abb10b;
            FPlatformFileTrace::EndRead((ulong64)p_Var9,0);
            cVar5 = '\x01';
            this->bIsAtEOF = true;
          }
          else {
            FPlatformFileTrace::EndRead((ulong64)p_Var9,(ulonglong)local_res8[0]);
            this->OverlappedFilePos = this->OverlappedFilePos + (ulonglong)local_res8[0];
            uVar1 = this->OverlappedFilePos;
            this->bHasReadOutstanding = false;
            (this->OverlappedIO).field2_0x10._s_0.Offset = (ulong)uVar1;
            (this->OverlappedIO).field2_0x10._s_0.OffsetHigh = (ulong)(uVar1 >> 0x20);
            if (uVar1 < (ulonglong)this->FileSize) {
              cVar5 = this->bIsAtEOF;
            }
            else {
              this->bIsAtEOF = true;
              cVar5 = '\x01';
            }
          }
        }
        pbVar10 = &this->bHasReadOutstanding;
        p_Var9 = &this->OverlappedIO;
        this->SerializeBuffer = this->SerializeBuffer ^ 1;
        uVar8 = this->StreamBuffer ^ 1;
        this->StreamBuffer = uVar8;
        this->SerializePos = 0;
        if (cVar5 == '\0') {
          *pbVar10 = true;
          this->CurrentAsyncReadBuffer = uVar8;
          local_res18[0] = 0;
          FPlatformFileTrace::BeginRead
                    ((ulong64)p_Var9,(ulong64)this->Handle,this->OverlappedFilePos,
                     (longlong)this->BufferSize);
          BVar6 = ReadFile(this->Handle,this->Buffers[(int)uVar8],this->BufferSize,local_res18,
                           (LPOVERLAPPED)p_Var9);
          if (BVar6 == 0) {
            DVar7 = GetLastError();
            if (DVar7 != 0x3e5) {
              FPlatformFileTrace::EndRead((ulong64)p_Var9,0);
              *pbVar10 = false;
LAB_141abb0fa:
              this->bIsAtEOF = true;
            }
          }
          else {
            FPlatformFileTrace::EndRead((ulong64)p_Var9,(ulonglong)local_res18[0]);
            this->OverlappedFilePos = this->OverlappedFilePos + (ulonglong)local_res18[0];
            uVar1 = this->OverlappedFilePos;
            *pbVar10 = false;
            (this->OverlappedIO).field2_0x10._s_0.Offset = (ulong)uVar1;
            (this->OverlappedIO).field2_0x10._s_0.OffsetHigh = (ulong)(uVar1 >> 0x20);
            if ((ulonglong)this->FileSize <= uVar1) goto LAB_141abb0fa;
          }
        }
      }
      else {
        memcpy(param_1,this->Buffers[this->SerializeBuffer] + this->SerializePos,_Size);
        this->SerializePos = this->SerializePos + (int)_Size;
        if ((this->BufferSize < this->SerializePos) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("SerializePos <= BufferSize",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformFile.cpp"
                               ,0x1ef,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        this->FilePos = this->FilePos + _Size;
        if ((this->FileSize < this->FilePos) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("FilePos <= FileSize",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformFile.cpp"
                               ,0x1f1,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        param_2 = param_2 - _Size;
        param_1 = param_1 + _Size;
      }
    } while (0 < param_2);
    bVar3 = true;
  }
  return bVar3;
}

// ReadAt @ 141abb2f0

bool __thiscall
FAsyncBufferedFileReaderWindows::ReadAt
          (FAsyncBufferedFileReaderWindows *this,uchar *param_1,long64 param_2,long64 param_3)

{
  bool bVar1;
  BOOL BVar2;
  DWORD DVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  DWORD local_res18 [2];
  _OVERLAPPED local_48;
  
  if (((-1 < param_2) && (-1 < param_3)) && (param_2 + param_3 <= this->FileSize)) {
    if (param_2 == 0) {
      return true;
    }
    uVar4 = 0;
    local_48.Internal = 0;
    local_48.InternalHigh = 0;
    local_48.u.Pointer = (PVOID)0x0;
    local_48.hEvent = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
    if (local_48.hEvent != (HANDLE)0x0) {
      FPlatformFileTrace::BeginRead((ulong64)&local_48,(ulong64)this->Handle,param_3,param_2);
      do {
        bVar1 = FWindowsPlatformMisc::IsWine();
        local_res18[0] = 0;
        uVar5 = 0xffffffff;
        if (bVar1) {
          uVar5 = 0x7ffff000;
        }
        if ((ulonglong)param_2 < uVar5) {
          uVar5 = param_2 & 0xffffffff;
        }
        local_48.u = (_union_540)param_3;
        BVar2 = ReadFile(this->Handle,param_1,(DWORD)uVar5,local_res18,&local_48);
        if (BVar2 == 0) {
          DVar3 = GetLastError();
          if (DVar3 == 0x3e5) {
            BVar2 = GetOverlappedResult(this->Handle,&local_48,local_res18,1);
            if (BVar2 != 0) goto LAB_141abb423;
          }
LAB_141abb45c:
          FPlatformFileTrace::EndRead((ulong64)&local_48,uVar4);
          bVar1 = false;
          goto LAB_141abb46b;
        }
LAB_141abb423:
        uVar5 = (ulonglong)local_res18[0];
        param_2 = param_2 - uVar5;
        uVar4 = uVar4 + uVar5;
        param_1 = param_1 + uVar5;
        if (local_res18[0] == 0) {
          SetLastError(0x3eb);
          goto LAB_141abb45c;
        }
      } while (0 < param_2);
      FPlatformFileTrace::EndRead((ulong64)&local_48,uVar4);
      bVar1 = true;
LAB_141abb46b:
      CloseHandle(local_48.hEvent);
      return bVar1;
    }
  }
  return false;
}

// Seek @ 141abfc40

bool __thiscall
FAsyncBufferedFileReaderWindows::Seek(FAsyncBufferedFileReaderWindows *this,long64 param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((this->Handle == (void *)0x0) || (this->Handle == (void *)0xffffffffffffffff)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformFile.cpp"
                       ,0x18b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  if (param_1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPos >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformFile.cpp"
                       ,0x18c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  if (this->FileSize < param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPos <= FileSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformFile.cpp"
                       ,0x18d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  lVar7 = param_1 - this->FilePos;
  if (lVar7 != 0) {
    bVar4 = WaitForAsyncRead(this);
    if (!bVar4) {
      return false;
    }
    this->FilePos = param_1;
    piVar1 = &this->SerializePos;
    if (lVar7 < 0) {
      lVar6 = -lVar7;
      if (-lVar7 < 0) {
        lVar6 = lVar7;
      }
      if (-1 < *piVar1 - lVar6) {
LAB_141abfd6f:
        *piVar1 = *piVar1 + (int)lVar7;
        return true;
      }
    }
    else if ((0 < lVar7) && (*piVar1 + lVar7 < (longlong)this->BufferSize)) goto LAB_141abfd6f;
    iVar2 = this->SerializeBuffer;
    this->OverlappedFilePos = param_1;
    (this->OverlappedIO).field2_0x10 = (_OVERLAPPED_u_16)param_1;
    this->bIsAtEOF = false;
    this->CurrentAsyncReadBuffer = iVar2;
    *piVar1 = 0;
    StartAsyncRead(this,iVar2);
  }
  return true;
}

// SeekFromEnd @ 141abfe30

bool __thiscall
FAsyncBufferedFileReaderWindows::SeekFromEnd(FAsyncBufferedFileReaderWindows *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((this->Handle == (void *)0x0) || (this->Handle == (void *)0xffffffffffffffff)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformFile.cpp"
                       ,0x1b7,L"");
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
                       ,0x1b8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000141abfeb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(this->_padding_ + 0x10))(this,this->FileSize + param_1);
  return (bool)uVar3;
}

// ShrinkBuffers @ 141ac1f50

void __thiscall
FAsyncBufferedFileReaderWindows::ShrinkBuffers(FAsyncBufferedFileReaderWindows *this)

{
  code *pcVar1;
  bool bVar2;
  BOOL BVar3;
  HANDLE pvVar4;
  bool bVar5;
  
  if ((longlong)this->Handle - 1U < 0xfffffffffffffffe) {
    bVar5 = CpuChannel->Enabled < 0;
    if (!bVar5) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`public:_virtual_void___cdecl_FAsyncBufferedFileReaderWindows::ShrinkBuffers(void)___ptr64'
                  ::__l5::__CpuProfilerEventSpecId617,"ShrinkBuffers",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformFile.cpp"
                 ,0x269);
      FCpuProfilerTrace::OutputBeginEvent
                (`public:_virtual_void___cdecl_FAsyncBufferedFileReaderWindows::ShrinkBuffers(void)___ptr64'
                 ::__l5::__CpuProfilerEventSpecId617);
    }
    FPlatformFileTrace::BeginReOpen((ulong64)this->Handle);
    pvVar4 = ReOpenFile(this->Handle,this->DesiredAccess,this->ShareMode,this->Flags);
    FPlatformFileTrace::EndReOpen((ulong64)pvVar4);
    if (pvVar4 == (HANDLE)0xffffffffffffffff) {
      if (bVar5) {
        return;
      }
    }
    else {
      FPlatformFileTrace::BeginClose((ulong64)this->Handle);
      BVar3 = CloseHandle(this->Handle);
      if (BVar3 == 0) {
        FPlatformFileTrace::FailClose((ulong64)this->Handle);
      }
      else {
        FPlatformFileTrace::EndClose((ulong64)this->Handle);
      }
      this->Handle = pvVar4;
      if ((pvVar4 == (HANDLE)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformFile.cpp"
                             ,0x284,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (bVar5) {
        return;
      }
    }
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Size @ 141ac2180

long64 __thiscall FAsyncBufferedFileReaderWindows::Size(FAsyncBufferedFileReaderWindows *this)

{
  code *pcVar1;
  bool bVar2;
  long64 lVar3;
  
  if ((this->Handle != (void *)0x0) && (this->Handle != (void *)0xffffffffffffffff)) {
    return this->FileSize;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformFile.cpp"
                     ,0x1c6,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    lVar3 = (*pcVar1)();
    return lVar3;
  }
  return this->FileSize;
}

// StartAsyncRead @ 141ac2690

void __thiscall
FAsyncBufferedFileReaderWindows::StartAsyncRead(FAsyncBufferedFileReaderWindows *this,int param_1)

{
  _OVERLAPPED *lpOverlapped;
  ulonglong uVar1;
  BOOL BVar2;
  DWORD DVar3;
  DWORD local_res8 [2];
  
  if (this->bIsAtEOF == false) {
    this->bHasReadOutstanding = true;
    this->CurrentAsyncReadBuffer = param_1;
    lpOverlapped = &this->OverlappedIO;
    local_res8[0] = 0;
    FPlatformFileTrace::BeginRead
              ((ulong64)lpOverlapped,(ulong64)this->Handle,this->OverlappedFilePos,
               (longlong)this->BufferSize);
    BVar2 = ReadFile(this->Handle,this->Buffers[param_1],this->BufferSize,local_res8,
                     (LPOVERLAPPED)lpOverlapped);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      if (DVar3 != 0x3e5) {
        FPlatformFileTrace::EndRead((ulong64)lpOverlapped,0);
        this->bIsAtEOF = true;
        this->bHasReadOutstanding = false;
        return;
      }
    }
    else {
      FPlatformFileTrace::EndRead((ulong64)lpOverlapped,(ulonglong)local_res8[0]);
      this->OverlappedFilePos = this->OverlappedFilePos + (ulonglong)local_res8[0];
      uVar1 = this->OverlappedFilePos;
      this->bHasReadOutstanding = false;
      (this->OverlappedIO).field2_0x10._s_0.Offset = (ulong)uVar1;
      (this->OverlappedIO).field2_0x10._s_0.OffsetHigh = (ulong)(uVar1 >> 0x20);
      if ((ulonglong)this->FileSize <= uVar1) {
        this->bIsAtEOF = true;
      }
    }
  }
  return;
}

// Tell @ 141ac2a00

long64 __thiscall FAsyncBufferedFileReaderWindows::Tell(FAsyncBufferedFileReaderWindows *this)

{
  code *pcVar1;
  bool bVar2;
  long64 lVar3;
  
  if ((this->Handle != (void *)0x0) && (this->Handle != (void *)0xffffffffffffffff)) {
    return this->FilePos;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformFile.cpp"
                     ,0x1c0,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    lVar3 = (*pcVar1)();
    return lVar3;
  }
  return this->FilePos;
}

// Truncate @ 141ac30f0

bool __thiscall
FAsyncBufferedFileReaderWindows::Truncate(FAsyncBufferedFileReaderWindows *this,long64 param_1)

{
  return false;
}

// WaitForAsyncRead @ 141ac5190

bool __thiscall
FAsyncBufferedFileReaderWindows::WaitForAsyncRead(FAsyncBufferedFileReaderWindows *this)

{
  ulonglong uVar1;
  BOOL BVar2;
  DWORD DVar3;
  DWORD local_res8 [2];
  
  if ((this->bIsAtEOF == false) && (this->bHasReadOutstanding != false)) {
    local_res8[0] = 0;
    BVar2 = GetOverlappedResult(this->Handle,(LPOVERLAPPED)&this->OverlappedIO,local_res8,1);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      if (DVar3 == 0x26) {
        FPlatformFileTrace::EndRead((ulong64)&this->OverlappedIO,0);
        this->bIsAtEOF = true;
        return true;
      }
      return false;
    }
    FPlatformFileTrace::EndRead((ulong64)&this->OverlappedIO,(ulonglong)local_res8[0]);
    this->OverlappedFilePos = this->OverlappedFilePos + (ulonglong)local_res8[0];
    uVar1 = this->OverlappedFilePos;
    this->bHasReadOutstanding = false;
    (this->OverlappedIO).field2_0x10._s_0.Offset = (ulong)uVar1;
    (this->OverlappedIO).field2_0x10._s_0.OffsetHigh = (ulong)(uVar1 >> 0x20);
    if ((ulonglong)this->FileSize <= uVar1) {
      this->bIsAtEOF = true;
    }
  }
  return true;
}

// Write @ 141ac54a0

bool __thiscall
FAsyncBufferedFileReaderWindows::Write
          (FAsyncBufferedFileReaderWindows *this,uchar *param_1,long64 param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0 && \"This is an async reader only and doesn\'t support writing\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformFile.cpp"
                     ,0x255,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

