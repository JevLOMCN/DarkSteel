// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 12

// FMallocStomp @ 1416d63a0

FMallocStomp * __thiscall FMallocStomp::FMallocStomp(FMallocStomp *this,bool param_1)

{
  ulong64 uVar1;
  FGenericPlatformMemoryConstants *pFVar2;
  
  this->_padding_ = (longlong)&___7FMallocStomp__6B_;
  pFVar2 = FWindowsPlatformMemory::GetConstants();
  uVar1 = pFVar2->PageSize;
  this->bUseUnderrunMode = param_1;
  this->PageSize = uVar1;
  return this;
}

// DumpAllocatorStats @ 1416ec0d0

void __thiscall FMallocStomp::DumpAllocatorStats(FMallocStomp *this,FOutputDevice *param_1)

{
  return;
}

// Exec @ 1416ed110

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FMallocStomp::Exec(FMallocStomp *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  return false;
}

// Free @ 1416f0d20

void __thiscall FMallocStomp::Free(FMallocStomp *this,void *param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  ulonglong uVar7;
  
  if (param_1 != (void *)0x0) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = *(ulonglong *)((longlong)param_1 + -0x18) ^ XXH3_kSecret._8_8_;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = XXH3_kSecret._0_8_ ^ *(ulonglong *)((longlong)param_1 + -0x20);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = XXH3_kSecret._24_8_ ^ *(ulonglong *)((longlong)param_1 + -0x10);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = *(ulonglong *)((longlong)param_1 + -0x18) ^ XXH3_kSecret._16_8_;
    uVar7 = (SUB168(auVar3 * auVar5,8) ^ SUB168(auVar3 * auVar5,0)) + 0xd53368a48e1afca8 +
            (SUB168(auVar2 * auVar4,8) ^ SUB168(auVar2 * auVar4,0));
    uVar7 = (uVar7 >> 0x25 ^ uVar7) * 0x165667919e3779f9;
    if (*(ulonglong *)((longlong)param_1 + -8) != (uVar7 >> 0x20 ^ uVar7)) {
      bVar6 = FWindowsPlatformMisc::IsDebuggerPresent();
      if (bVar6) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    VirtualFree(*(LPVOID *)((longlong)param_1 + -0x20),*(SIZE_T *)((longlong)param_1 + -0x18),0x4000
               );
  }
  return;
}

// GetAllocationSize @ 1416f1ed0

bool __thiscall FMallocStomp::GetAllocationSize(FMallocStomp *this,void *param_1,ulong64 *param_2)

{
  if (param_1 == (void *)0x0) {
    *param_2 = 0;
    return true;
  }
  *param_2 = *(ulong64 *)((longlong)param_1 + -0x10);
  return true;
}

// GetDescriptiveName @ 1416f7d90

wchar_t * __thiscall FMallocStomp::GetDescriptiveName(FMallocStomp *this)

{
  return L"Stomp";
}

// IsInternallyThreadSafe @ 141702530

bool __thiscall FMallocStomp::IsInternallyThreadSafe(FMallocStomp *this)

{
  return true;
}

// Malloc @ 1417046f0

void * __thiscall FMallocStomp::Malloc(FMallocStomp *this,ulong64 param_1,uint param_2)

{
  void *pvVar1;
  
  pvVar1 = TryMalloc(this,param_1,param_2);
  if (pvVar1 != (void *)0x0) {
    return pvVar1;
  }
                    /* WARNING: Subroutine does not return */
  FGenericPlatformMemory::OnOutOfMemory(param_1,param_2);
}

// Realloc @ 141708e50

void * __thiscall
FMallocStomp::Realloc(FMallocStomp *this,void *param_1,ulong64 param_2,uint param_3)

{
  void *_Dst;
  
  if (param_2 == 0) {
    Free(this,param_1);
    _Dst = (void *)0x0;
  }
  else {
    _Dst = TryMalloc(this,param_2,param_3);
    if ((param_1 == (void *)0x0) || (_Dst == (void *)0x0)) {
      if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        FGenericPlatformMemory::OnOutOfMemory(param_2,param_3);
      }
    }
    else {
      if (*(ulonglong *)((longlong)param_1 + -0x10) < param_2) {
        param_2 = *(size_t *)((longlong)param_1 + -0x10);
      }
      memcpy(_Dst,param_1,param_2);
      Free(this,param_1);
    }
  }
  return _Dst;
}

// TryMalloc @ 141717a60

void * __thiscall FMallocStomp::TryMalloc(FMallocStomp *this,ulong64 param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  uint uVar9;
  longlong *plVar10;
  LPVOID pvVar11;
  LPVOID pvVar12;
  ulonglong *puVar13;
  char *pcVar14;
  ulonglong uVar15;
  ulonglong dwSize;
  void *pvVar16;
  LPVOID lpAddress;
  ulong64 uVar17;
  int iVar18;
  ulonglong uVar19;
  
  uVar17 = 1;
  if (param_1 != 0) {
    uVar17 = param_1;
  }
  uVar9 = 0x10;
  if (0x10 < param_2) {
    uVar9 = param_2;
  }
  uVar15 = (ulonglong)uVar9;
  if (uVar9 != 0) {
    uVar17 = (uVar17 - 1) + uVar15 & (longlong)(int)-uVar9;
  }
  uVar1 = this->PageSize;
  uVar19 = uVar15;
  if (uVar15 <= uVar1) {
    uVar19 = uVar1;
  }
  uVar19 = uVar19 + 0x1f + uVar17 & -uVar1;
  uVar1 = uVar1 + uVar19;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  plVar10 = (longlong *)(lVar2 + 0x9f8);
  puVar13 = (ulonglong *)(lVar2 + 0xa00);
  pvVar11 = (LPVOID)*plVar10;
  if (*puVar13 < (longlong)pvVar11 + uVar1) {
    dwSize = uVar1;
    if (uVar1 < 0x40000000) {
      dwSize = 0x40000000;
    }
    pvVar11 = VirtualAlloc((LPVOID)0x0,dwSize,0x2000,1);
    *puVar13 = dwSize + (longlong)pvVar11;
  }
  *plVar10 = (longlong)pvVar11 + uVar1;
  if (pvVar11 == (LPVOID)0x0) {
LAB_141717c92:
    pvVar16 = (void *)0x0;
  }
  else {
    if (this->bUseUnderrunMode == false) {
      pvVar16 = (void *)((longlong)pvVar11 + (uVar19 - uVar17) & -uVar15);
      lpAddress = (LPVOID)((longlong)pvVar16 - 0x20U & -this->PageSize);
      pvVar12 = VirtualAlloc(lpAddress,(longlong)pvVar16 + (uVar17 - (longlong)lpAddress),0x1000,4);
      if (pvVar12 == (LPVOID)0x0) goto LAB_141717c92;
      if (pvVar12 != lpAddress) {
        iVar18 = 0xb8;
        pcVar14 = "CommittedMemory == CommitPointerStart";
        goto LAB_141717bf2;
      }
    }
    else {
      pvVar16 = (void *)((longlong)pvVar11 + uVar15 + 0x1f + this->PageSize & -uVar15);
      pvVar12 = VirtualAlloc((LPVOID)((longlong)pvVar16 + -0x20),uVar17 + 0x20,0x1000,4);
      if (pvVar12 == (LPVOID)0x0) goto LAB_141717c92;
      if (pvVar12 != (LPVOID)(-this->PageSize & (ulonglong)((longlong)pvVar16 + -0x20))) {
        iVar18 = 0xa0;
        pcVar14 = "CommittedMemory == AlignDown(AllocDataPointerStart, PageSize)";
LAB_141717bf2:
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          (pcVar14,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocStomp.cpp"
                           ,iVar18,L"");
        if (bVar8) {
          pcVar3 = (code *)swi(3);
          pvVar16 = (void *)(*pcVar3)();
          return pvVar16;
        }
      }
    }
    *(LPVOID *)((longlong)pvVar16 + -0x20) = pvVar11;
    *(ulonglong *)((longlong)pvVar16 + -0x18) = uVar1;
    *(ulong64 *)((longlong)pvVar16 + -0x10) = uVar17;
    *(undefined8 *)((longlong)pvVar16 + -8) = 0;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar1 ^ XXH3_kSecret._8_8_;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = XXH3_kSecret._0_8_ ^ *(ulonglong *)((longlong)pvVar16 + -0x20);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = XXH3_kSecret._24_8_ ^ uVar17;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar1 ^ XXH3_kSecret._16_8_;
    uVar15 = (SUB168(auVar5 * auVar7,8) ^ SUB168(auVar5 * auVar7,0)) + 0xd53368a48e1afca8 +
             (SUB168(auVar4 * auVar6,8) ^ SUB168(auVar4 * auVar6,0));
    uVar15 = (uVar15 >> 0x25 ^ uVar15) * 0x165667919e3779f9;
    *(ulonglong *)((longlong)pvVar16 + -8) = uVar15 >> 0x20 ^ uVar15;
  }
  return pvVar16;
}

// TryRealloc @ 141717e60

void * __thiscall
FMallocStomp::TryRealloc(FMallocStomp *this,void *param_1,ulong64 param_2,uint param_3)

{
  void *_Dst;
  
  if (param_2 == 0) {
    Free(this,param_1);
    return (void *)0x0;
  }
  _Dst = TryMalloc(this,param_2,param_3);
  if ((param_1 != (void *)0x0) && (_Dst != (void *)0x0)) {
    if (*(ulonglong *)((longlong)param_1 + -0x10) < param_2) {
      param_2 = *(size_t *)((longlong)param_1 + -0x10);
    }
    memcpy(_Dst,param_1,param_2);
    Free(this,param_1);
  }
  return _Dst;
}

// ValidateHeap @ 14171a860

bool __thiscall FMallocStomp::ValidateHeap(FMallocStomp *this)

{
  return true;
}

