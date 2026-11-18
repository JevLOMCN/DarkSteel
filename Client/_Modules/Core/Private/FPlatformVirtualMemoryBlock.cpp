// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 7

// FPlatformVirtualMemoryBlock @ 14167a7d0

FPlatformVirtualMemoryBlock * __thiscall
FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::FPlatformVirtualMemoryBlock
          (FPlatformVirtualMemoryBlock *this)

{
  *(undefined8 *)this = 0;
  *(undefined4 *)&this->field_0x8 = 0;
  return this;
}

// AllocateVirtual @ 141aa0230

FPlatformVirtualMemoryBlock * __cdecl
FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::AllocateVirtual
          (FPlatformVirtualMemoryBlock *__return_storage_ptr__,ulong64 param_1,ulong64 param_2)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  ulong64 uVar5;
  ulong64 uVar6;
  FPlatformVirtualMemoryBlock *pFVar7;
  LPVOID pvVar8;
  DWORD flAllocationType;
  
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = 0;
  uVar5 = GetVirtualSizeAlignment();
  uVar6 = GetVirtualSizeAlignment();
  *(int *)&__return_storage_ptr__->field_0x8 = (int)(((param_1 - 1) + uVar5 & ~(uVar5 - 1)) / uVar6)
  ;
  uVar5 = GetVirtualSizeAlignment();
  if (uVar5 < param_2) {
    uVar5 = param_2;
  }
  uVar6 = GetVirtualSizeAlignment();
  if (uVar6 < uVar5) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Alignment <= GetVirtualSizeAlignment()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformMemory.cpp"
                       ,0x23c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FPlatformVirtualMemoryBlock *)(*pcVar3)();
      return pFVar7;
    }
  }
  uVar1 = *(uint *)&__return_storage_ptr__->field_0x8;
  uVar6 = GetVirtualSizeAlignment();
  uVar2 = *(uint *)&__return_storage_ptr__->field_0x8;
  flAllocationType = 0x2000;
  if (0x6400000 < uVar6 * uVar1) {
    flAllocationType = 0x102000;
  }
  uVar6 = GetVirtualSizeAlignment();
  pvVar8 = VirtualAlloc((LPVOID)0x0,uVar6 * uVar2,flAllocationType,1);
  *(LPVOID *)__return_storage_ptr__ = pvVar8;
  if (pvVar8 != (LPVOID)0x0) {
    if (((ulonglong)pvVar8 & uVar5 - 1) != 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result.Ptr && IsAligned(Result.Ptr, Alignment)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformMemory.cpp"
                         ,0x247,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FPlatformVirtualMemoryBlock *)(*pcVar3)();
        return pFVar7;
      }
    }
    return __return_storage_ptr__;
  }
  uVar1 = *(uint *)&__return_storage_ptr__->field_0x8;
  uVar6 = GetVirtualSizeAlignment();
                    /* WARNING: Subroutine does not return */
  FGenericPlatformMemory::OnOutOfMemory(uVar6 * uVar1,(uint)uVar5);
}

// Commit @ 141aa1dc0

void __thiscall
FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::Commit
          (FPlatformVirtualMemoryBlock *this,ulong64 param_1,ulong64 param_2)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  ulong64 uVar5;
  LPVOID pvVar6;
  
  uVar5 = GetCommitAlignment();
  if ((param_1 & uVar5 - 1) == 0) {
    uVar5 = GetCommitAlignment();
    if ((param_2 & uVar5 - 1) == 0) goto LAB_141aa1e1e;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsAligned(InOffset, GetCommitAlignment()) && IsAligned(InSize, GetCommitAlignment())"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformMemory.cpp"
                     ,0x25e,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_141aa1e1e:
  uVar1 = *(uint *)&this->field_0x8;
  uVar5 = GetVirtualSizeAlignment();
  if ((uVar5 * uVar1 < param_1 + param_2) || (*(longlong *)this == 0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InOffset >= 0 && InSize >= 0 && InOffset + InSize <= GetActualSize() && Ptr"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformMemory.cpp"
                       ,0x25f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)this;
  pvVar6 = VirtualAlloc((LPVOID)(lVar2 + param_1),param_2,0x1000,4);
  if (pvVar6 == (LPVOID)(lVar2 + param_1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FGenericPlatformMemory::OnOutOfMemory(param_2,0);
}

// Decommit @ 141aa3f70

void __thiscall
FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::Decommit
          (FPlatformVirtualMemoryBlock *this,ulong64 param_1,ulong64 param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  
  uVar4 = GetCommitAlignment();
  if ((param_1 & uVar4 - 1) == 0) {
    uVar4 = GetCommitAlignment();
    if ((param_2 & uVar4 - 1) == 0) goto LAB_141aa3fce;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsAligned(InOffset, GetCommitAlignment()) && IsAligned(InSize, GetCommitAlignment())"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformMemory.cpp"
                     ,0x26a,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_141aa3fce:
  uVar1 = *(uint *)&this->field_0x8;
  uVar4 = GetVirtualSizeAlignment();
  if ((uVar4 * uVar1 < param_1 + param_2) || (*(longlong *)this == 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InOffset >= 0 && InSize >= 0 && InOffset + InSize <= GetActualSize() && Ptr"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformMemory.cpp"
                       ,0x26b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000141aa4033. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  VirtualFree((LPVOID)(*(longlong *)this + param_1),param_2,0x4000);
  return;
}

// FreeVirtual @ 141aa7140

void __thiscall
FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::FreeVirtual(FPlatformVirtualMemoryBlock *this)

{
  code *pcVar1;
  bool bVar2;
  BOOL BVar3;
  ulong64 uVar4;
  
  if (*(longlong *)this != 0) {
    uVar4 = GetVirtualSizeAlignment();
    if (*(uint *)&this->field_0x8 * uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetActualSize() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformMemory.cpp"
                         ,0x251,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    BVar3 = VirtualFree(*(LPVOID *)this,0,0x8000);
    if (BVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("VirtualFree(Ptr, 0, 0x00008000) != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformMemory.cpp"
                         ,0x255,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(undefined8 *)this = 0;
    *(undefined4 *)&this->field_0x8 = 0;
  }
  return;
}

// GetCommitAlignment @ 141aa7c30

ulong64 __cdecl FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::GetCommitAlignment(void)

{
  FGenericPlatformMemoryConstants *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = GetConstants();
      OSPageSize = pFVar1->PageSize;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return OSPageSize;
}

// GetVirtualSizeAlignment @ 141ab0b90

ulong64 __cdecl FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::GetVirtualSizeAlignment(void)

{
  FGenericPlatformMemoryConstants *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = GetConstants();
      OsAllocationGranularity = pFVar1->OsAllocationGranularity;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return OsAllocationGranularity;
}

