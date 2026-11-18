// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// Initialize @ 1419a0870

void __cdecl FVirtualWinApiHooks::Initialize(bool param_1)

{
  FTextSectionEditor lpAddress;
  HMODULE hModule;
  HANDLE hProcess;
  DWORD local_res8 [2];
  FTextSectionEditor local_res10 [3];
  
  local_res10[0].HeadBlock = (FTrampolineBlock *)0x0;
  bLight = param_1;
  VmFreeOrig = FTextSectionEditor::HookImpl(local_res10,VirtualFree_exref,VmFree);
  VmFreeExOrig = FTextSectionEditor::HookImpl(local_res10,VirtualFreeEx_exref,VmFreeEx);
  VmAlloc2Orig = (_func___cdecl_void_ptr_void_ptr_void_ptr_ulong64_ulong_ulong_void_ptr_ulong *)0x0;
  hModule = LoadLibraryW(L"kernelbase.dll");
  if (hModule != (HMODULE)0x0) {
    VmAlloc2Orig = (_func___cdecl_void_ptr_void_ptr_void_ptr_ulong64_ulong_ulong_void_ptr_ulong *)
                   GetProcAddress(hModule,"VirtualAlloc2");
    FreeLibrary(hModule);
  }
  if (VmAlloc2Orig !=
      (_func___cdecl_void_ptr_void_ptr_void_ptr_ulong64_ulong_ulong_void_ptr_ulong *)0x0) {
    VmAlloc2Orig = FTextSectionEditor::HookImpl(local_res10,VmAlloc2Orig,VmAlloc2);
  }
  VmAllocExOrig = FTextSectionEditor::HookImpl(local_res10,VirtualAllocEx_exref,VmAllocEx);
  VmAllocOrig = FTextSectionEditor::HookImpl(local_res10,VirtualAlloc_exref,VmAlloc);
  for (lpAddress.HeadBlock = local_res10[0].HeadBlock;
      lpAddress.HeadBlock != (FTrampolineBlock *)0x0;
      lpAddress.HeadBlock = (lpAddress.HeadBlock)->Next) {
    VirtualProtect(lpAddress.HeadBlock,(ulonglong)(lpAddress.HeadBlock)->Size,0x20,local_res8);
  }
  hProcess = GetCurrentProcess();
                    /* WARNING: Could not recover jumptable at 0x0001419a09a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FlushInstructionCache(hProcess,(LPCVOID)0x0,0);
  return;
}

// VmAlloc2 @ 1419b11d0

void * __cdecl
FVirtualWinApiHooks::VmAlloc2
          (void *param_1,void *param_2,ulong64 param_3,ulong param_4,ulong param_5,void *param_6,
          ulong param_7)

{
  void *pvVar1;
  HANDLE pvVar2;
  
  pvVar1 = (*VmAlloc2Orig)(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  pvVar2 = GetCurrentProcess();
  if (((param_1 == pvVar2) && (pvVar1 != (void *)0x0)) &&
     (((param_4 >> 0xd & 1) != 0 || (((param_4 >> 0xc & 1) != 0 && (param_2 == (void *)0x0)))))) {
    MemoryTrace_Alloc((ulong64)pvVar1,param_3,0,0,0);
    MemoryTrace_MarkAllocAsHeap((ulong64)pvVar1,0,None,0);
  }
  return pvVar1;
}

// VmAlloc @ 1419b1290

void * __cdecl
FVirtualWinApiHooks::VmAlloc(void *param_1,ulong64 param_2,ulong param_3,ulong param_4)

{
  void *pvVar1;
  
  pvVar1 = (*VmAllocOrig)(param_1,param_2,param_3,param_4);
  if ((pvVar1 != (void *)0x0) &&
     (((param_3 >> 0xd & 1) != 0 || (((param_3 >> 0xc & 1) != 0 && (param_1 == (void *)0x0)))))) {
    MemoryTrace_Alloc((ulong64)pvVar1,param_2,0,0,0);
    MemoryTrace_MarkAllocAsHeap((ulong64)pvVar1,0,None,0);
  }
  return pvVar1;
}

// VmAllocEx @ 1419b1320

void * __cdecl
FVirtualWinApiHooks::VmAllocEx
          (void *param_1,void *param_2,ulong64 param_3,ulong param_4,ulong param_5)

{
  void *pvVar1;
  HANDLE pvVar2;
  
  pvVar1 = (*VmAllocExOrig)(param_1,param_2,param_3,param_4,param_5);
  pvVar2 = GetCurrentProcess();
  if (((param_1 == pvVar2) && (pvVar1 != (void *)0x0)) &&
     (((param_4 >> 0xd & 1) != 0 || (((param_4 >> 0xc & 1) != 0 && (param_2 == (void *)0x0)))))) {
    MemoryTrace_Alloc((ulong64)pvVar1,param_3,0,0,0);
    MemoryTrace_MarkAllocAsHeap((ulong64)pvVar1,0,None,0);
  }
  return pvVar1;
}

// VmFree @ 1419b13d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl FVirtualWinApiHooks::VmFree(void *param_1,ulong64 param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_58;
  if ((param_3 >> 0xf & 1) != 0) {
    MemoryTrace_UnmarkAllocAsHeap((ulong64)param_1,0,0);
    if (GTraceAllowed != false) {
      if (((*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xbb4) == '\0') && (-1 < CallstackChannel->Enabled)) &&
         (FBacktracer::Instance != (FBacktracer *)0x0)) {
        uVar1 = FBacktracer::GetBacktraceId(FBacktracer::Instance,&stack0x00000000);
      }
      else {
        uVar1 = 0;
      }
      if (-1 < MemAllocChannel->Enabled) {
        UE::Trace::Private::FLogScope::Enter<FMemoryFreeSystemFields>((TLogScope<0> *)&local_38);
        *local_38 = param_1;
        *(uint *)(local_38 + 1) = uVar1;
        *(undefined8 *)(local_30 + 0x28) = *(undefined8 *)(local_30 + 0x20);
      }
      MemoryTrace_UpdateInternal();
    }
  }
  iVar2 = (*VmFreeOrig)(param_1,param_2,param_3);
  return iVar2;
}

// VmFreeEx @ 1419b14d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl FVirtualWinApiHooks::VmFreeEx(void *param_1,void *param_2,ulong64 param_3,ulong param_4)

{
  uint uVar1;
  int iVar2;
  HANDLE pvVar3;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_68;
  pvVar3 = GetCurrentProcess();
  if ((param_1 == pvVar3) && ((param_4 >> 0xf & 1) != 0)) {
    MemoryTrace_UnmarkAllocAsHeap((ulong64)param_2,0,0);
    if (GTraceAllowed != false) {
      if (((*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xbb4) == '\0') && (-1 < CallstackChannel->Enabled)) &&
         (FBacktracer::Instance != (FBacktracer *)0x0)) {
        uVar1 = FBacktracer::GetBacktraceId(FBacktracer::Instance,&stack0x00000000);
      }
      else {
        uVar1 = 0;
      }
      if (-1 < MemAllocChannel->Enabled) {
        UE::Trace::Private::FLogScope::Enter<FMemoryFreeSystemFields>((TLogScope<0> *)&local_48);
        *local_48 = param_2;
        *(uint *)(local_48 + 1) = uVar1;
        *(undefined8 *)(local_40 + 0x28) = *(undefined8 *)(local_40 + 0x20);
      }
      MemoryTrace_UpdateInternal();
    }
  }
  iVar2 = (*VmFreeExOrig)(param_1,param_2,param_3,param_4);
  return iVar2;
}

