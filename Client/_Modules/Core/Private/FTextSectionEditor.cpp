// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// Hook<int___cdecl(void_*,void_*,unsigned___int64,unsigned_long)> @ 141983e00

_func___cdecl_int_void_ptr_void_ptr_ulong64_ulong * __thiscall
FTextSectionEditor::Hook<int___cdecl(void_*,void_*,unsigned___int64,unsigned_long)>
          (FTextSectionEditor *this,_func___cdecl_int_void_ptr_void_ptr_ulong64_ulong *param_1,
          _func___cdecl_int_void_ptr_void_ptr_ulong64_ulong *param_2)

{
  byte bVar1;
  code cVar2;
  uint uVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  LPVOID pvVar7;
  _func___cdecl_int_void_ptr_void_ptr_ulong64_ulong *p_Var8;
  _func___cdecl_int_void_ptr_void_ptr_ulong64_ulong *p_Var9;
  int iVar10;
  uint uVar11;
  size_t _Size;
  undefined8 *puVar12;
  FTrampolineBlock *lpAddress;
  undefined1 *puVar13;
  int iVar14;
  DWORD aDStackX_8 [2];
  _MEMORY_BASIC_INFORMATION _Stack_48;
  
  p_Var9 = param_1 + (((byte)*param_1 & 0xf0) == 0x40);
  p_Var8 = param_1;
  if ((*p_Var9 == (_func___cdecl_int_void_ptr_void_ptr_ulong64_ulong)0xff) &&
     (p_Var9[1] == (_func___cdecl_int_void_ptr_void_ptr_ulong64_ulong)0x25)) {
    param_1 = *(_func___cdecl_int_void_ptr_void_ptr_ulong64_ulong **)
               (p_Var9 + (ulonglong)*(uint *)(p_Var9 + 2) + 6);
    p_Var8 = param_1;
  }
  do {
    bVar1 = (byte)param_1[((byte)*param_1 & 0xf0) == 0x40];
    param_1 = param_1 + (((byte)*param_1 & 0xf0) == 0x40) + 1;
    if (bVar1 - 0x80 < 0xc) {
      cVar2 = *param_1;
      bVar6 = ((byte)cVar2 & 7) == 4 && ((byte)cVar2 & 0xc0) < 0xc0;
      lVar5 = (ulonglong)bVar6 + 1;
      if (((byte)cVar2 & 0xc0) == 0x40) {
        lVar5 = (ulonglong)bVar6 + 2;
      }
      else if (((byte)cVar2 & 0xc0) == 0x80) {
        param_1 = param_1 + (ulonglong)(bVar1 == 0x83) + (ulonglong)bVar6 + 6;
        goto LAB_14199608d;
      }
      param_1 = param_1 + lVar5 + (bVar1 == 0x83);
    }
    else if ((0xf < bVar1 - 0x50) &&
            (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("!\"Unknown instruction\"",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\Microsoft\\WindowsMemoryTrace.cpp"
                                ,0xc2,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      p_Var8 = (_func___cdecl_int_void_ptr_void_ptr_ulong64_ulong *)(*pcVar4)();
      return p_Var8;
    }
LAB_14199608d:
  } while ((longlong)param_1 - (longlong)p_Var8 < 6);
  lpAddress = this->HeadBlock;
  iVar14 = (int)p_Var8;
  iVar10 = (int)param_1 - iVar14;
  do {
    if (lpAddress == (FTrampolineBlock *)0x0) {
LAB_1419960ce:
      VirtualQuery(p_Var8,&_Stack_48,0x30);
      lpAddress = (FTrampolineBlock *)((longlong)_Stack_48.AllocationBase + -0x10000);
      pvVar7 = VirtualAlloc(lpAddress,0x10000,0x3000,4);
      while (pvVar7 == (LPVOID)0x0) {
        if ((0x7fffffff < (ulonglong)((longlong)p_Var8 - (longlong)lpAddress)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("!\"Failed to allocate trampoline blocks for memory tracing hooks\"",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\Microsoft\\WindowsMemoryTrace.cpp"
                               ,0x72,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          p_Var8 = (_func___cdecl_int_void_ptr_void_ptr_ulong64_ulong *)(*pcVar4)();
          return p_Var8;
        }
        lpAddress = lpAddress + -0x1000;
        pvVar7 = VirtualAlloc(lpAddress,0x10000,0x3000,4);
      }
      lpAddress->Next = this->HeadBlock;
      lpAddress->Size = 0x10000;
      lpAddress->Used = 0x10;
      this->HeadBlock = lpAddress;
LAB_14199617e:
      uVar11 = lpAddress->Used + 0x18 + iVar10;
      if ((lpAddress->Size < uVar11) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Unable to allocate memory for memory tracing\'s hooks\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\Microsoft\\WindowsMemoryTrace.cpp"
                             ,0x99,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        p_Var8 = (_func___cdecl_int_void_ptr_void_ptr_ulong64_ulong *)(*pcVar4)();
        return p_Var8;
      }
      uVar3 = lpAddress->Used;
      lpAddress->Used = uVar11;
      puVar12 = (undefined8 *)((longlong)&lpAddress->Next + (ulonglong)uVar3);
      _Size = (size_t)iVar10;
      *puVar12 = param_2;
      memcpy(puVar12 + 1,p_Var8,_Size);
      puVar13 = (undefined1 *)((longlong)(puVar12 + 1) + _Size);
      *puVar13 = 0xe9;
      *(int *)(puVar13 + 1) = (iVar14 - (int)puVar13) + iVar10 + -5;
      VirtualProtect((LPVOID)((ulonglong)p_Var8 & 0xfffffffffffff000),0x1000,0x40,aDStackX_8);
      *(undefined2 *)p_Var8 = 0x25ff;
      *(int *)(p_Var8 + 2) = ((int)puVar12 - iVar14) + -6;
      VirtualProtect((LPVOID)((ulonglong)p_Var8 & 0xfffffffffffff000),0x1000,aDStackX_8[0],
                     aDStackX_8);
      return (_func___cdecl_int_void_ptr_void_ptr_ulong64_ulong *)(puVar13 + -_Size);
    }
    if ((ulonglong)((longlong)p_Var8 - (longlong)lpAddress) < 0x80000000) {
      if (lpAddress != (FTrampolineBlock *)0x0) goto LAB_14199617e;
      goto LAB_1419960ce;
    }
    lpAddress = lpAddress->Next;
  } while( true );
}

// Hook<int___cdecl(void_*,unsigned___int64,unsigned_long)> @ 141983e10

_func___cdecl_int_void_ptr_ulong64_ulong * __thiscall
FTextSectionEditor::Hook<int___cdecl(void_*,unsigned___int64,unsigned_long)>
          (FTextSectionEditor *this,_func___cdecl_int_void_ptr_ulong64_ulong *param_1,
          _func___cdecl_int_void_ptr_ulong64_ulong *param_2)

{
  byte bVar1;
  code cVar2;
  uint uVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  LPVOID pvVar7;
  _func___cdecl_int_void_ptr_ulong64_ulong *p_Var8;
  _func___cdecl_int_void_ptr_ulong64_ulong *p_Var9;
  int iVar10;
  uint uVar11;
  size_t _Size;
  undefined8 *puVar12;
  FTrampolineBlock *lpAddress;
  undefined1 *puVar13;
  int iVar14;
  DWORD aDStackX_8 [2];
  _MEMORY_BASIC_INFORMATION _Stack_48;
  
  p_Var9 = param_1 + (((byte)*param_1 & 0xf0) == 0x40);
  p_Var8 = param_1;
  if ((*p_Var9 == (_func___cdecl_int_void_ptr_ulong64_ulong)0xff) &&
     (p_Var9[1] == (_func___cdecl_int_void_ptr_ulong64_ulong)0x25)) {
    param_1 = *(_func___cdecl_int_void_ptr_ulong64_ulong **)
               (p_Var9 + (ulonglong)*(uint *)(p_Var9 + 2) + 6);
    p_Var8 = param_1;
  }
  do {
    bVar1 = (byte)param_1[((byte)*param_1 & 0xf0) == 0x40];
    param_1 = param_1 + (((byte)*param_1 & 0xf0) == 0x40) + 1;
    if (bVar1 - 0x80 < 0xc) {
      cVar2 = *param_1;
      bVar6 = ((byte)cVar2 & 7) == 4 && ((byte)cVar2 & 0xc0) < 0xc0;
      lVar5 = (ulonglong)bVar6 + 1;
      if (((byte)cVar2 & 0xc0) == 0x40) {
        lVar5 = (ulonglong)bVar6 + 2;
      }
      else if (((byte)cVar2 & 0xc0) == 0x80) {
        param_1 = param_1 + (ulonglong)(bVar1 == 0x83) + (ulonglong)bVar6 + 6;
        goto LAB_14199608d;
      }
      param_1 = param_1 + lVar5 + (bVar1 == 0x83);
    }
    else if ((0xf < bVar1 - 0x50) &&
            (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("!\"Unknown instruction\"",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\Microsoft\\WindowsMemoryTrace.cpp"
                                ,0xc2,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      p_Var8 = (_func___cdecl_int_void_ptr_ulong64_ulong *)(*pcVar4)();
      return p_Var8;
    }
LAB_14199608d:
  } while ((longlong)param_1 - (longlong)p_Var8 < 6);
  lpAddress = this->HeadBlock;
  iVar14 = (int)p_Var8;
  iVar10 = (int)param_1 - iVar14;
  do {
    if (lpAddress == (FTrampolineBlock *)0x0) {
LAB_1419960ce:
      VirtualQuery(p_Var8,&_Stack_48,0x30);
      lpAddress = (FTrampolineBlock *)((longlong)_Stack_48.AllocationBase + -0x10000);
      pvVar7 = VirtualAlloc(lpAddress,0x10000,0x3000,4);
      while (pvVar7 == (LPVOID)0x0) {
        if ((0x7fffffff < (ulonglong)((longlong)p_Var8 - (longlong)lpAddress)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("!\"Failed to allocate trampoline blocks for memory tracing hooks\"",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\Microsoft\\WindowsMemoryTrace.cpp"
                               ,0x72,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          p_Var8 = (_func___cdecl_int_void_ptr_ulong64_ulong *)(*pcVar4)();
          return p_Var8;
        }
        lpAddress = lpAddress + -0x1000;
        pvVar7 = VirtualAlloc(lpAddress,0x10000,0x3000,4);
      }
      lpAddress->Next = this->HeadBlock;
      lpAddress->Size = 0x10000;
      lpAddress->Used = 0x10;
      this->HeadBlock = lpAddress;
LAB_14199617e:
      uVar11 = lpAddress->Used + 0x18 + iVar10;
      if ((lpAddress->Size < uVar11) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Unable to allocate memory for memory tracing\'s hooks\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\Microsoft\\WindowsMemoryTrace.cpp"
                             ,0x99,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        p_Var8 = (_func___cdecl_int_void_ptr_ulong64_ulong *)(*pcVar4)();
        return p_Var8;
      }
      uVar3 = lpAddress->Used;
      lpAddress->Used = uVar11;
      puVar12 = (undefined8 *)((longlong)&lpAddress->Next + (ulonglong)uVar3);
      _Size = (size_t)iVar10;
      *puVar12 = param_2;
      memcpy(puVar12 + 1,p_Var8,_Size);
      puVar13 = (undefined1 *)((longlong)(puVar12 + 1) + _Size);
      *puVar13 = 0xe9;
      *(int *)(puVar13 + 1) = (iVar14 - (int)puVar13) + iVar10 + -5;
      VirtualProtect((LPVOID)((ulonglong)p_Var8 & 0xfffffffffffff000),0x1000,0x40,aDStackX_8);
      *(undefined2 *)p_Var8 = 0x25ff;
      *(int *)(p_Var8 + 2) = ((int)puVar12 - iVar14) + -6;
      VirtualProtect((LPVOID)((ulonglong)p_Var8 & 0xfffffffffffff000),0x1000,aDStackX_8[0],
                     aDStackX_8);
      return (_func___cdecl_int_void_ptr_ulong64_ulong *)(puVar13 + -_Size);
    }
    if ((ulonglong)((longlong)p_Var8 - (longlong)lpAddress) < 0x80000000) {
      if (lpAddress != (FTrampolineBlock *)0x0) goto LAB_14199617e;
      goto LAB_1419960ce;
    }
    lpAddress = lpAddress->Next;
  } while( true );
}

// Hook<void_*___cdecl(void_*,void_*,unsigned___int64,unsigned_long,unsigned_long,void_*,unsigned_long)> @ 141983e20

_func___cdecl_void_ptr_void_ptr_void_ptr_ulong64_ulong_ulong_void_ptr_ulong * __thiscall
FTextSectionEditor::
Hook<void_*___cdecl(void_*,void_*,unsigned___int64,unsigned_long,unsigned_long,void_*,unsigned_long)>
          (FTextSectionEditor *this,
          _func___cdecl_void_ptr_void_ptr_void_ptr_ulong64_ulong_ulong_void_ptr_ulong *param_1,
          _func___cdecl_void_ptr_void_ptr_void_ptr_ulong64_ulong_ulong_void_ptr_ulong *param_2)

{
  byte bVar1;
  code cVar2;
  uint uVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  LPVOID pvVar7;
  _func___cdecl_void_ptr_void_ptr_void_ptr_ulong64_ulong_ulong_void_ptr_ulong *p_Var8;
  _func___cdecl_void_ptr_void_ptr_void_ptr_ulong64_ulong_ulong_void_ptr_ulong *p_Var9;
  int iVar10;
  uint uVar11;
  size_t _Size;
  undefined8 *puVar12;
  FTrampolineBlock *lpAddress;
  undefined1 *puVar13;
  int iVar14;
  DWORD aDStackX_8 [2];
  _MEMORY_BASIC_INFORMATION _Stack_48;
  
  p_Var9 = param_1 + (((byte)*param_1 & 0xf0) == 0x40);
  p_Var8 = param_1;
  if ((*p_Var9 == (_func___cdecl_void_ptr_void_ptr_void_ptr_ulong64_ulong_ulong_void_ptr_ulong)0xff)
     && (p_Var9[1] ==
         (_func___cdecl_void_ptr_void_ptr_void_ptr_ulong64_ulong_ulong_void_ptr_ulong)0x25)) {
    param_1 = *(_func___cdecl_void_ptr_void_ptr_void_ptr_ulong64_ulong_ulong_void_ptr_ulong **)
               (p_Var9 + (ulonglong)*(uint *)(p_Var9 + 2) + 6);
    p_Var8 = param_1;
  }
  do {
    bVar1 = (byte)param_1[((byte)*param_1 & 0xf0) == 0x40];
    param_1 = param_1 + (((byte)*param_1 & 0xf0) == 0x40) + 1;
    if (bVar1 - 0x80 < 0xc) {
      cVar2 = *param_1;
      bVar6 = ((byte)cVar2 & 7) == 4 && ((byte)cVar2 & 0xc0) < 0xc0;
      lVar5 = (ulonglong)bVar6 + 1;
      if (((byte)cVar2 & 0xc0) == 0x40) {
        lVar5 = (ulonglong)bVar6 + 2;
      }
      else if (((byte)cVar2 & 0xc0) == 0x80) {
        param_1 = param_1 + (ulonglong)(bVar1 == 0x83) + (ulonglong)bVar6 + 6;
        goto LAB_14199608d;
      }
      param_1 = param_1 + lVar5 + (bVar1 == 0x83);
    }
    else if ((0xf < bVar1 - 0x50) &&
            (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("!\"Unknown instruction\"",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\Microsoft\\WindowsMemoryTrace.cpp"
                                ,0xc2,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      p_Var8 = (_func___cdecl_void_ptr_void_ptr_void_ptr_ulong64_ulong_ulong_void_ptr_ulong *)
               (*pcVar4)();
      return p_Var8;
    }
LAB_14199608d:
  } while ((longlong)param_1 - (longlong)p_Var8 < 6);
  lpAddress = this->HeadBlock;
  iVar14 = (int)p_Var8;
  iVar10 = (int)param_1 - iVar14;
  do {
    if (lpAddress == (FTrampolineBlock *)0x0) {
LAB_1419960ce:
      VirtualQuery(p_Var8,&_Stack_48,0x30);
      lpAddress = (FTrampolineBlock *)((longlong)_Stack_48.AllocationBase + -0x10000);
      pvVar7 = VirtualAlloc(lpAddress,0x10000,0x3000,4);
      while (pvVar7 == (LPVOID)0x0) {
        if ((0x7fffffff < (ulonglong)((longlong)p_Var8 - (longlong)lpAddress)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("!\"Failed to allocate trampoline blocks for memory tracing hooks\"",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\Microsoft\\WindowsMemoryTrace.cpp"
                               ,0x72,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          p_Var8 = (_func___cdecl_void_ptr_void_ptr_void_ptr_ulong64_ulong_ulong_void_ptr_ulong *)
                   (*pcVar4)();
          return p_Var8;
        }
        lpAddress = lpAddress + -0x1000;
        pvVar7 = VirtualAlloc(lpAddress,0x10000,0x3000,4);
      }
      lpAddress->Next = this->HeadBlock;
      lpAddress->Size = 0x10000;
      lpAddress->Used = 0x10;
      this->HeadBlock = lpAddress;
LAB_14199617e:
      uVar11 = lpAddress->Used + 0x18 + iVar10;
      if ((lpAddress->Size < uVar11) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Unable to allocate memory for memory tracing\'s hooks\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\Microsoft\\WindowsMemoryTrace.cpp"
                             ,0x99,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        p_Var8 = (_func___cdecl_void_ptr_void_ptr_void_ptr_ulong64_ulong_ulong_void_ptr_ulong *)
                 (*pcVar4)();
        return p_Var8;
      }
      uVar3 = lpAddress->Used;
      lpAddress->Used = uVar11;
      puVar12 = (undefined8 *)((longlong)&lpAddress->Next + (ulonglong)uVar3);
      _Size = (size_t)iVar10;
      *puVar12 = param_2;
      memcpy(puVar12 + 1,p_Var8,_Size);
      puVar13 = (undefined1 *)((longlong)(puVar12 + 1) + _Size);
      *puVar13 = 0xe9;
      *(int *)(puVar13 + 1) = (iVar14 - (int)puVar13) + iVar10 + -5;
      VirtualProtect((LPVOID)((ulonglong)p_Var8 & 0xfffffffffffff000),0x1000,0x40,aDStackX_8);
      *(undefined2 *)p_Var8 = 0x25ff;
      *(int *)(p_Var8 + 2) = ((int)puVar12 - iVar14) + -6;
      VirtualProtect((LPVOID)((ulonglong)p_Var8 & 0xfffffffffffff000),0x1000,aDStackX_8[0],
                     aDStackX_8);
      return (_func___cdecl_void_ptr_void_ptr_void_ptr_ulong64_ulong_ulong_void_ptr_ulong *)
             (puVar13 + -_Size);
    }
    if ((ulonglong)((longlong)p_Var8 - (longlong)lpAddress) < 0x80000000) {
      if (lpAddress != (FTrampolineBlock *)0x0) goto LAB_14199617e;
      goto LAB_1419960ce;
    }
    lpAddress = lpAddress->Next;
  } while( true );
}

// Hook<void_*___cdecl(void_*,void_*,unsigned___int64,unsigned_long,unsigned_long)> @ 141983e30

_func___cdecl_void_ptr_void_ptr_void_ptr_ulong64_ulong_ulong * __thiscall
FTextSectionEditor::Hook<void_*___cdecl(void_*,void_*,unsigned___int64,unsigned_long,unsigned_long)>
          (FTextSectionEditor *this,
          _func___cdecl_void_ptr_void_ptr_void_ptr_ulong64_ulong_ulong *param_1,
          _func___cdecl_void_ptr_void_ptr_void_ptr_ulong64_ulong_ulong *param_2)

{
  byte bVar1;
  code cVar2;
  uint uVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  LPVOID pvVar7;
  _func___cdecl_void_ptr_void_ptr_void_ptr_ulong64_ulong_ulong *p_Var8;
  _func___cdecl_void_ptr_void_ptr_void_ptr_ulong64_ulong_ulong *p_Var9;
  int iVar10;
  uint uVar11;
  size_t _Size;
  undefined8 *puVar12;
  FTrampolineBlock *lpAddress;
  undefined1 *puVar13;
  int iVar14;
  DWORD aDStackX_8 [2];
  _MEMORY_BASIC_INFORMATION _Stack_48;
  
  p_Var9 = param_1 + (((byte)*param_1 & 0xf0) == 0x40);
  p_Var8 = param_1;
  if ((*p_Var9 == (_func___cdecl_void_ptr_void_ptr_void_ptr_ulong64_ulong_ulong)0xff) &&
     (p_Var9[1] == (_func___cdecl_void_ptr_void_ptr_void_ptr_ulong64_ulong_ulong)0x25)) {
    param_1 = *(_func___cdecl_void_ptr_void_ptr_void_ptr_ulong64_ulong_ulong **)
               (p_Var9 + (ulonglong)*(uint *)(p_Var9 + 2) + 6);
    p_Var8 = param_1;
  }
  do {
    bVar1 = (byte)param_1[((byte)*param_1 & 0xf0) == 0x40];
    param_1 = param_1 + (((byte)*param_1 & 0xf0) == 0x40) + 1;
    if (bVar1 - 0x80 < 0xc) {
      cVar2 = *param_1;
      bVar6 = ((byte)cVar2 & 7) == 4 && ((byte)cVar2 & 0xc0) < 0xc0;
      lVar5 = (ulonglong)bVar6 + 1;
      if (((byte)cVar2 & 0xc0) == 0x40) {
        lVar5 = (ulonglong)bVar6 + 2;
      }
      else if (((byte)cVar2 & 0xc0) == 0x80) {
        param_1 = param_1 + (ulonglong)(bVar1 == 0x83) + (ulonglong)bVar6 + 6;
        goto LAB_14199608d;
      }
      param_1 = param_1 + lVar5 + (bVar1 == 0x83);
    }
    else if ((0xf < bVar1 - 0x50) &&
            (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("!\"Unknown instruction\"",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\Microsoft\\WindowsMemoryTrace.cpp"
                                ,0xc2,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      p_Var8 = (_func___cdecl_void_ptr_void_ptr_void_ptr_ulong64_ulong_ulong *)(*pcVar4)();
      return p_Var8;
    }
LAB_14199608d:
  } while ((longlong)param_1 - (longlong)p_Var8 < 6);
  lpAddress = this->HeadBlock;
  iVar14 = (int)p_Var8;
  iVar10 = (int)param_1 - iVar14;
  do {
    if (lpAddress == (FTrampolineBlock *)0x0) {
LAB_1419960ce:
      VirtualQuery(p_Var8,&_Stack_48,0x30);
      lpAddress = (FTrampolineBlock *)((longlong)_Stack_48.AllocationBase + -0x10000);
      pvVar7 = VirtualAlloc(lpAddress,0x10000,0x3000,4);
      while (pvVar7 == (LPVOID)0x0) {
        if ((0x7fffffff < (ulonglong)((longlong)p_Var8 - (longlong)lpAddress)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("!\"Failed to allocate trampoline blocks for memory tracing hooks\"",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\Microsoft\\WindowsMemoryTrace.cpp"
                               ,0x72,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          p_Var8 = (_func___cdecl_void_ptr_void_ptr_void_ptr_ulong64_ulong_ulong *)(*pcVar4)();
          return p_Var8;
        }
        lpAddress = lpAddress + -0x1000;
        pvVar7 = VirtualAlloc(lpAddress,0x10000,0x3000,4);
      }
      lpAddress->Next = this->HeadBlock;
      lpAddress->Size = 0x10000;
      lpAddress->Used = 0x10;
      this->HeadBlock = lpAddress;
LAB_14199617e:
      uVar11 = lpAddress->Used + 0x18 + iVar10;
      if ((lpAddress->Size < uVar11) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Unable to allocate memory for memory tracing\'s hooks\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\Microsoft\\WindowsMemoryTrace.cpp"
                             ,0x99,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        p_Var8 = (_func___cdecl_void_ptr_void_ptr_void_ptr_ulong64_ulong_ulong *)(*pcVar4)();
        return p_Var8;
      }
      uVar3 = lpAddress->Used;
      lpAddress->Used = uVar11;
      puVar12 = (undefined8 *)((longlong)&lpAddress->Next + (ulonglong)uVar3);
      _Size = (size_t)iVar10;
      *puVar12 = param_2;
      memcpy(puVar12 + 1,p_Var8,_Size);
      puVar13 = (undefined1 *)((longlong)(puVar12 + 1) + _Size);
      *puVar13 = 0xe9;
      *(int *)(puVar13 + 1) = (iVar14 - (int)puVar13) + iVar10 + -5;
      VirtualProtect((LPVOID)((ulonglong)p_Var8 & 0xfffffffffffff000),0x1000,0x40,aDStackX_8);
      *(undefined2 *)p_Var8 = 0x25ff;
      *(int *)(p_Var8 + 2) = ((int)puVar12 - iVar14) + -6;
      VirtualProtect((LPVOID)((ulonglong)p_Var8 & 0xfffffffffffff000),0x1000,aDStackX_8[0],
                     aDStackX_8);
      return (_func___cdecl_void_ptr_void_ptr_void_ptr_ulong64_ulong_ulong *)(puVar13 + -_Size);
    }
    if ((ulonglong)((longlong)p_Var8 - (longlong)lpAddress) < 0x80000000) {
      if (lpAddress != (FTrampolineBlock *)0x0) goto LAB_14199617e;
      goto LAB_1419960ce;
    }
    lpAddress = lpAddress->Next;
  } while( true );
}

// Hook<void_*___cdecl(void_*,unsigned___int64,unsigned_long,unsigned_long)> @ 141983e40

_func___cdecl_void_ptr_void_ptr_ulong64_ulong_ulong * __thiscall
FTextSectionEditor::Hook<void_*___cdecl(void_*,unsigned___int64,unsigned_long,unsigned_long)>
          (FTextSectionEditor *this,_func___cdecl_void_ptr_void_ptr_ulong64_ulong_ulong *param_1,
          _func___cdecl_void_ptr_void_ptr_ulong64_ulong_ulong *param_2)

{
  byte bVar1;
  code cVar2;
  uint uVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  LPVOID pvVar7;
  _func___cdecl_void_ptr_void_ptr_ulong64_ulong_ulong *p_Var8;
  _func___cdecl_void_ptr_void_ptr_ulong64_ulong_ulong *p_Var9;
  int iVar10;
  uint uVar11;
  size_t _Size;
  undefined8 *puVar12;
  FTrampolineBlock *lpAddress;
  undefined1 *puVar13;
  int iVar14;
  DWORD aDStackX_8 [2];
  _MEMORY_BASIC_INFORMATION _Stack_48;
  
  p_Var9 = param_1 + (((byte)*param_1 & 0xf0) == 0x40);
  p_Var8 = param_1;
  if ((*p_Var9 == (_func___cdecl_void_ptr_void_ptr_ulong64_ulong_ulong)0xff) &&
     (p_Var9[1] == (_func___cdecl_void_ptr_void_ptr_ulong64_ulong_ulong)0x25)) {
    param_1 = *(_func___cdecl_void_ptr_void_ptr_ulong64_ulong_ulong **)
               (p_Var9 + (ulonglong)*(uint *)(p_Var9 + 2) + 6);
    p_Var8 = param_1;
  }
  do {
    bVar1 = (byte)param_1[((byte)*param_1 & 0xf0) == 0x40];
    param_1 = param_1 + (((byte)*param_1 & 0xf0) == 0x40) + 1;
    if (bVar1 - 0x80 < 0xc) {
      cVar2 = *param_1;
      bVar6 = ((byte)cVar2 & 7) == 4 && ((byte)cVar2 & 0xc0) < 0xc0;
      lVar5 = (ulonglong)bVar6 + 1;
      if (((byte)cVar2 & 0xc0) == 0x40) {
        lVar5 = (ulonglong)bVar6 + 2;
      }
      else if (((byte)cVar2 & 0xc0) == 0x80) {
        param_1 = param_1 + (ulonglong)(bVar1 == 0x83) + (ulonglong)bVar6 + 6;
        goto LAB_14199608d;
      }
      param_1 = param_1 + lVar5 + (bVar1 == 0x83);
    }
    else if ((0xf < bVar1 - 0x50) &&
            (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("!\"Unknown instruction\"",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\Microsoft\\WindowsMemoryTrace.cpp"
                                ,0xc2,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      p_Var8 = (_func___cdecl_void_ptr_void_ptr_ulong64_ulong_ulong *)(*pcVar4)();
      return p_Var8;
    }
LAB_14199608d:
  } while ((longlong)param_1 - (longlong)p_Var8 < 6);
  lpAddress = this->HeadBlock;
  iVar14 = (int)p_Var8;
  iVar10 = (int)param_1 - iVar14;
  do {
    if (lpAddress == (FTrampolineBlock *)0x0) {
LAB_1419960ce:
      VirtualQuery(p_Var8,&_Stack_48,0x30);
      lpAddress = (FTrampolineBlock *)((longlong)_Stack_48.AllocationBase + -0x10000);
      pvVar7 = VirtualAlloc(lpAddress,0x10000,0x3000,4);
      while (pvVar7 == (LPVOID)0x0) {
        if ((0x7fffffff < (ulonglong)((longlong)p_Var8 - (longlong)lpAddress)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("!\"Failed to allocate trampoline blocks for memory tracing hooks\"",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\Microsoft\\WindowsMemoryTrace.cpp"
                               ,0x72,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          p_Var8 = (_func___cdecl_void_ptr_void_ptr_ulong64_ulong_ulong *)(*pcVar4)();
          return p_Var8;
        }
        lpAddress = lpAddress + -0x1000;
        pvVar7 = VirtualAlloc(lpAddress,0x10000,0x3000,4);
      }
      lpAddress->Next = this->HeadBlock;
      lpAddress->Size = 0x10000;
      lpAddress->Used = 0x10;
      this->HeadBlock = lpAddress;
LAB_14199617e:
      uVar11 = lpAddress->Used + 0x18 + iVar10;
      if ((lpAddress->Size < uVar11) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Unable to allocate memory for memory tracing\'s hooks\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\Microsoft\\WindowsMemoryTrace.cpp"
                             ,0x99,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        p_Var8 = (_func___cdecl_void_ptr_void_ptr_ulong64_ulong_ulong *)(*pcVar4)();
        return p_Var8;
      }
      uVar3 = lpAddress->Used;
      lpAddress->Used = uVar11;
      puVar12 = (undefined8 *)((longlong)&lpAddress->Next + (ulonglong)uVar3);
      _Size = (size_t)iVar10;
      *puVar12 = param_2;
      memcpy(puVar12 + 1,p_Var8,_Size);
      puVar13 = (undefined1 *)((longlong)(puVar12 + 1) + _Size);
      *puVar13 = 0xe9;
      *(int *)(puVar13 + 1) = (iVar14 - (int)puVar13) + iVar10 + -5;
      VirtualProtect((LPVOID)((ulonglong)p_Var8 & 0xfffffffffffff000),0x1000,0x40,aDStackX_8);
      *(undefined2 *)p_Var8 = 0x25ff;
      *(int *)(p_Var8 + 2) = ((int)puVar12 - iVar14) + -6;
      VirtualProtect((LPVOID)((ulonglong)p_Var8 & 0xfffffffffffff000),0x1000,aDStackX_8[0],
                     aDStackX_8);
      return (_func___cdecl_void_ptr_void_ptr_ulong64_ulong_ulong *)(puVar13 + -_Size);
    }
    if ((ulonglong)((longlong)p_Var8 - (longlong)lpAddress) < 0x80000000) {
      if (lpAddress != (FTrampolineBlock *)0x0) goto LAB_14199617e;
      goto LAB_1419960ce;
    }
    lpAddress = lpAddress->Next;
  } while( true );
}

// ~FTextSectionEditor @ 141988290

void __thiscall FTextSectionEditor::~FTextSectionEditor(FTextSectionEditor *this)

{
  FTrampolineBlock *lpAddress;
  HANDLE hProcess;
  DWORD local_res8 [8];
  
  for (lpAddress = this->HeadBlock; lpAddress != (FTrampolineBlock *)0x0;
      lpAddress = lpAddress->Next) {
    VirtualProtect(lpAddress,(ulonglong)lpAddress->Size,0x20,local_res8);
  }
  hProcess = GetCurrentProcess();
                    /* WARNING: Could not recover jumptable at 0x0001419882d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FlushInstructionCache(hProcess,(LPCVOID)0x0,0);
  return;
}

// AllocateTrampoline @ 14198b560

uchar * __thiscall
FTextSectionEditor::AllocateTrampoline(FTextSectionEditor *this,void *param_1,uint param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  LPVOID pvVar4;
  uchar *puVar5;
  FTrampolineBlock *lpAddress;
  uint uVar6;
  _MEMORY_BASIC_INFORMATION local_38;
  
  lpAddress = this->HeadBlock;
  do {
    if (lpAddress == (FTrampolineBlock *)0x0) {
LAB_14198b5af:
      VirtualQuery(param_1,&local_38,0x30);
      lpAddress = (FTrampolineBlock *)((longlong)local_38.AllocationBase + -0x10000);
      pvVar4 = VirtualAlloc(lpAddress,0x10000,0x3000,4);
      while (pvVar4 == (LPVOID)0x0) {
        if ((0x7fffffff < (ulonglong)((longlong)param_1 - (longlong)lpAddress)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("!\"Failed to allocate trampoline blocks for memory tracing hooks\"",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\Microsoft\\WindowsMemoryTrace.cpp"
                               ,0x72,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          puVar5 = (uchar *)(*pcVar2)();
          return puVar5;
        }
        lpAddress = lpAddress + -0x1000;
        pvVar4 = VirtualAlloc(lpAddress,0x10000,0x3000,4);
      }
      lpAddress->Next = this->HeadBlock;
      lpAddress->Size = 0x10000;
      lpAddress->Used = 0x10;
      this->HeadBlock = lpAddress;
LAB_14198b65e:
      uVar6 = lpAddress->Used + param_2;
      if ((lpAddress->Size < uVar6) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Unable to allocate memory for memory tracing\'s hooks\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\Microsoft\\WindowsMemoryTrace.cpp"
                             ,0x99,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        puVar5 = (uchar *)(*pcVar2)();
        return puVar5;
      }
      uVar1 = lpAddress->Used;
      lpAddress->Used = uVar6;
      return (uchar *)((longlong)&lpAddress->Next + (ulonglong)uVar1);
    }
    if ((ulonglong)((longlong)param_1 - (longlong)lpAddress) < 0x80000000) {
      if (lpAddress != (FTrampolineBlock *)0x0) goto LAB_14198b65e;
      goto LAB_14198b5af;
    }
    lpAddress = lpAddress->Next;
  } while( true );
}

// AllocateTrampolineBlock @ 14198b6c0

FTrampolineBlock * __thiscall
FTextSectionEditor::AllocateTrampolineBlock(FTextSectionEditor *this,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  LPVOID pvVar3;
  FTrampolineBlock *pFVar4;
  _MEMORY_BASIC_INFORMATION local_38;
  
  VirtualQuery(param_1,&local_38,0x30);
  pFVar4 = (FTrampolineBlock *)((longlong)local_38.AllocationBase + -0x10000);
  pvVar3 = VirtualAlloc(pFVar4,0x10000,0x3000,4);
  while( true ) {
    if (pvVar3 != (LPVOID)0x0) {
      pFVar4->Next = this->HeadBlock;
      pFVar4->Size = 0x10000;
      pFVar4->Used = 0x10;
      this->HeadBlock = pFVar4;
      return pFVar4;
    }
    if ((0x7fffffff < (ulonglong)((longlong)param_1 - (longlong)pFVar4)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Failed to allocate trampoline blocks for memory tracing hooks\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\Microsoft\\WindowsMemoryTrace.cpp"
                           ,0x72,L""), bVar2)) break;
    pFVar4 = pFVar4 + -0x1000;
    pvVar3 = VirtualAlloc(pFVar4,0x10000,0x3000,4);
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FTrampolineBlock *)(*pcVar1)();
  return pFVar4;
}

// GetActualAddress @ 141994840

void * __cdecl FTextSectionEditor::GetActualAddress(void *param_1)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)((*(byte *)param_1 & 0xf0) == 0x40);
  if ((*(char *)(uVar1 + (longlong)param_1) == -1) &&
     (*(char *)((longlong)param_1 + uVar1 + 1) == '%')) {
    return *(void **)((longlong)param_1 +
                     (ulonglong)*(uint *)((longlong)param_1 + uVar1 + 2) + 6 + uVar1);
  }
  return param_1;
}

// HookImpl @ 141995f90

void * __thiscall FTextSectionEditor::HookImpl(FTextSectionEditor *this,void *param_1,void *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  LPVOID pvVar7;
  void *pvVar8;
  char *pcVar9;
  int iVar10;
  uint uVar11;
  size_t _Size;
  undefined8 *puVar12;
  FTrampolineBlock *lpAddress;
  undefined1 *puVar13;
  int iVar14;
  byte *lpAddress_00;
  DWORD local_res8 [2];
  _MEMORY_BASIC_INFORMATION local_48;
  
  pcVar9 = (char *)((longlong)param_1 + (ulonglong)((*(byte *)param_1 & 0xf0) == 0x40));
  lpAddress_00 = param_1;
  if ((*pcVar9 == -1) && (pcVar9[1] == '%')) {
    param_1 = *(void **)(pcVar9 + (ulonglong)*(uint *)(pcVar9 + 2) + 6);
    lpAddress_00 = param_1;
  }
  do {
    bVar1 = *(byte *)((longlong)param_1 + (ulonglong)((*(byte *)param_1 & 0xf0) == 0x40));
    param_1 = (byte *)((longlong)param_1 + (ulonglong)((*(byte *)param_1 & 0xf0) == 0x40)) + 1;
    if (bVar1 - 0x80 < 0xc) {
      bVar2 = *(byte *)param_1;
      bVar6 = (bVar2 & 7) == 4 && (bVar2 & 0xc0) < 0xc0;
      lVar5 = (ulonglong)bVar6 + 1;
      if ((bVar2 & 0xc0) == 0x40) {
        lVar5 = (ulonglong)bVar6 + 2;
      }
      else if ((bVar2 & 0xc0) == 0x80) {
        param_1 = (void *)((longlong)param_1 + (ulonglong)(bVar1 == 0x83) + (ulonglong)bVar6 + 6);
        goto LAB_14199608d;
      }
      param_1 = (byte *)((longlong)param_1 + lVar5) + (bVar1 == 0x83);
    }
    else if ((0xf < bVar1 - 0x50) &&
            (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("!\"Unknown instruction\"",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\Microsoft\\WindowsMemoryTrace.cpp"
                                ,0xc2,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pvVar8 = (void *)(*pcVar4)();
      return pvVar8;
    }
LAB_14199608d:
  } while ((longlong)param_1 - (longlong)lpAddress_00 < 6);
  lpAddress = this->HeadBlock;
  iVar14 = (int)lpAddress_00;
  iVar10 = (int)param_1 - iVar14;
  do {
    if (lpAddress == (FTrampolineBlock *)0x0) {
LAB_1419960ce:
      VirtualQuery(lpAddress_00,&local_48,0x30);
      lpAddress = (FTrampolineBlock *)((longlong)local_48.AllocationBase + -0x10000);
      pvVar7 = VirtualAlloc(lpAddress,0x10000,0x3000,4);
      while (pvVar7 == (LPVOID)0x0) {
        if ((0x7fffffff < (ulonglong)((longlong)lpAddress_00 - (longlong)lpAddress)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("!\"Failed to allocate trampoline blocks for memory tracing hooks\"",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\Microsoft\\WindowsMemoryTrace.cpp"
                               ,0x72,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          pvVar8 = (void *)(*pcVar4)();
          return pvVar8;
        }
        lpAddress = lpAddress + -0x1000;
        pvVar7 = VirtualAlloc(lpAddress,0x10000,0x3000,4);
      }
      lpAddress->Next = this->HeadBlock;
      lpAddress->Size = 0x10000;
      lpAddress->Used = 0x10;
      this->HeadBlock = lpAddress;
LAB_14199617e:
      uVar11 = lpAddress->Used + 0x18 + iVar10;
      if ((lpAddress->Size < uVar11) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Unable to allocate memory for memory tracing\'s hooks\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\Microsoft\\WindowsMemoryTrace.cpp"
                             ,0x99,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        pvVar8 = (void *)(*pcVar4)();
        return pvVar8;
      }
      uVar3 = lpAddress->Used;
      lpAddress->Used = uVar11;
      puVar12 = (undefined8 *)((longlong)&lpAddress->Next + (ulonglong)uVar3);
      _Size = (size_t)iVar10;
      *puVar12 = param_2;
      memcpy(puVar12 + 1,lpAddress_00,_Size);
      puVar13 = (undefined1 *)((longlong)(puVar12 + 1) + _Size);
      *puVar13 = 0xe9;
      *(int *)(puVar13 + 1) = (iVar14 - (int)puVar13) + iVar10 + -5;
      VirtualProtect((LPVOID)((ulonglong)lpAddress_00 & 0xfffffffffffff000),0x1000,0x40,local_res8);
      lpAddress_00[0] = 0xff;
      lpAddress_00[1] = 0x25;
      *(int *)(lpAddress_00 + 2) = ((int)puVar12 - iVar14) + -6;
      VirtualProtect((LPVOID)((ulonglong)lpAddress_00 & 0xfffffffffffff000),0x1000,local_res8[0],
                     local_res8);
      return puVar13 + -_Size;
    }
    if ((ulonglong)((longlong)lpAddress_00 - (longlong)lpAddress) < 0x80000000) {
      if (lpAddress != (FTrampolineBlock *)0x0) goto LAB_14199617e;
      goto LAB_1419960ce;
    }
    lpAddress = lpAddress->Next;
  } while( true );
}

