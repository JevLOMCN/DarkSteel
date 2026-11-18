// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// FTagTrace @ 141987150

FTagTrace * __thiscall FTagTrace::FTagTrace(FTagTrace *this,FMalloc *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FMalloc *pFVar1;
  code *pcVar2;
  wchar_t wVar3;
  bool bVar4;
  FTagTrace *pFVar5;
  atomic<TGrowOnlyLockFreeHash<FTagTrace::FTagNameSetEntry,int,bool>::FHashHeader_*> aVar6;
  uchar *puVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  FImportantLogScope local_18;
  
  (this->AnnouncedNames).Malloc = param_1;
  lpCriticalSection = &(this->AnnouncedNames).WriteCriticalSection;
  (this->AnnouncedNames).HashTable =
       (atomic<TGrowOnlyLockFreeHash<FTagTrace::FTagNameSetEntry,int,bool>::FHashHeader_*>)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)lpCriticalSection,4000);
  Malloc = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (((this->AnnouncedNames).HashTable !=
       (atomic<TGrowOnlyLockFreeHash<FTagTrace::FTagNameSetEntry,int,bool>::FHashHeader_*>)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("HashTable.load(std::memory_order_relaxed) == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Experimental\\Containers\\GrowOnlyLockFreeHash.h"
                         ,0x51,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FTagTrace *)(*pcVar2)();
    return pFVar5;
  }
  for (lVar9 = 0x3f; 0x7ffUL >> lVar9 == 0; lVar9 = lVar9 + -1) {
  }
  iVar10 = 1 << ((byte)lVar9 & 0x1f);
  pFVar1 = (this->AnnouncedNames).Malloc;
  aVar6 = (atomic<TGrowOnlyLockFreeHash<FTagTrace::FTagNameSetEntry,int,bool>::FHashHeader_*>)
          (**(code **)((longlong)*pFVar1 + 0x28))(pFVar1,(longlong)iVar10 * 4 + 0x14,0);
  *(undefined8 *)aVar6 = 0;
  *(int *)((longlong)aVar6 + 8) = iVar10;
  *(undefined4 *)((longlong)aVar6 + 0xc) = 0;
  memset((undefined8 *)((longlong)aVar6 + 0x10),0,(longlong)iVar10 * 4);
  (this->AnnouncedNames).HashTable = aVar6;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  AnnounceGenericTags(this);
  if (-1 < MemAllocChannel->Enabled) {
    lVar9 = 5;
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>(&local_18,5);
    pwVar8 = L"Trace";
    lVar11 = (longlong)local_18.AuxCursor;
    local_18.Ptr[0] = '\x01';
    local_18.Ptr[1] = '\x01';
    local_18.Ptr[2] = '\0';
    local_18.Ptr[3] = '\0';
    local_18.Ptr[4] = 0xff;
    local_18.Ptr[5] = 0xff;
    local_18.Ptr[6] = 0xff;
    local_18.Ptr[7] = 0xff;
    puVar7 = local_18.Ptr + lVar11;
    puVar7[0] = '\0';
    puVar7[1] = 0xa2;
    puVar7[2] = '\0';
    puVar7[3] = '\0';
    puVar7 = local_18.Ptr + lVar11 + 4;
    local_18.Ptr[lVar11] = '\x01';
    do {
      wVar3 = *pwVar8;
      pwVar8 = pwVar8 + 1;
      *puVar7 = (uchar)wVar3;
      puVar7 = puVar7 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    iVar10 = local_18.AuxCursor + 5;
    local_18.AuxCursor = local_18.AuxCursor + 9;
    local_18.Ptr[(longlong)iVar10 + 4] = '\x03';
    LOCK();
    *(int *)(local_18.Ptr + local_18.BufferOffset) =
         *(int *)(local_18.Ptr + local_18.BufferOffset) + 1;
    UNLOCK();
  }
  AnnounceLLMExtendedTags(this);
  return this;
}

// AnnounceCustomTag @ 14198b7b0

int __thiscall FTagTrace::AnnounceCustomTag(FTagTrace *this,int param_1,int param_2,char *param_3)

{
  size_t sVar1;
  int *local_18;
  int local_10;
  
  sVar1 = strlen(param_3);
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)&stack0xffffffffffffffe8,(uint)sVar1);
    *local_18 = param_1;
    local_18[1] = param_2;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)&stack0xffffffffffffffe8,param_3,(uint)sVar1);
    LOCK();
    *(int *)((longlong)local_10 + (longlong)local_18) =
         *(int *)((longlong)local_10 + (longlong)local_18) + 1;
    UNLOCK();
  }
  return param_1;
}

// AnnounceFNameTag @ 14198b840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
FTagTrace::AnnounceFNameTag
          (FTagTrace *this,FName param_1,int param_2,wchar_t *param_3,TOptional<int> param_4)

{
  uint *puVar1;
  wchar_t wVar2;
  atomic<TGrowOnlyLockFreeHash<FTagTrace::FTagNameSetEntry,int,bool>::FHashHeader_*> aVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  size_t sVar8;
  FName *pFVar9;
  uint uVar10;
  uchar *puVar11;
  uchar *puVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  FName local_res10 [2];
  undefined1 auStackY_4d8 [32];
  bool local_4a8 [4];
  undefined1 local_4a4 [4];
  undefined1 local_4a0 [8];
  undefined1 local_498 [4];
  undefined1 local_494;
  FImportantLogScope local_490;
  uchar *local_478;
  int iStack_470;
  undefined4 uStack_46c;
  FName local_468 [2];
  TStringView<char8_t> local_458;
  uchar local_448 [1024];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4d8;
  if (param_2 == -1) {
    param_2 = param_1.ComparisonIndex.Value.Value + 0x200;
  }
  aVar3 = (this->AnnouncedNames).HashTable;
  if (aVar3 != (atomic<TGrowOnlyLockFreeHash<FTagTrace::FTagNameSetEntry,int,bool>::FHashHeader_*>)
               0x0) {
    uVar14 = *(int *)((longlong)aVar3 + 8) - 1;
    uVar10 = param_2 & uVar14;
    lVar13 = (ulonglong)uVar10 + 4;
    iVar15 = *(int *)((longlong)aVar3 + lVar13 * 4);
    while (iVar15 != 0) {
      if (*(uint *)((longlong)aVar3 + lVar13 * 4) == param_2) {
        return param_2;
      }
      uVar10 = uVar10 + 1 & uVar14;
      lVar13 = (ulonglong)uVar10 + 4;
      iVar15 = *(int *)((longlong)aVar3 + lVar13 * 4);
    }
  }
  local_res10[0] = param_1;
  TGrowOnlyLockFreeHash<FTagTrace::FTagNameSetEntry,int,bool>::Emplace
            (&this->AnnouncedNames,param_2,true,local_4a8);
  if (local_4a8[0] != false) {
    return param_2;
  }
  if (param_3 == (wchar_t *)0x0) {
    iVar15 = 0;
  }
  else {
    sVar8 = wcslen(param_3);
    puVar12 = (uchar *)0x0;
    iVar15 = (int)sVar8;
    if (0x400 < (int)sVar8 + 1) {
      iVar15 = 0;
    }
    if (0 < iVar15) {
      iVar6 = iVar15 + 1;
      bVar5 = false;
      iVar7 = iVar6;
      if (0x3ff < iVar6) {
        iVar7 = 0x400;
      }
      lVar13 = (longlong)iVar7;
      puVar11 = puVar12;
      if (0 < iVar7) {
        do {
          wVar2 = param_3[(longlong)puVar11];
          local_448[(longlong)puVar11] = (uchar)wVar2;
          puVar11 = puVar11 + 1;
          bVar5 = (bool)(bVar5 | 0x7f < (ushort)wVar2);
        } while ((longlong)puVar11 < lVar13);
        puVar11 = puVar12;
        if (bVar5) {
          do {
            if (0x7f < (ushort)param_3[(longlong)puVar11]) {
              local_448[(longlong)puVar11] = '?';
            }
            puVar11 = puVar11 + 1;
          } while ((longlong)puVar11 < lVar13);
        }
      }
      if (iVar6 < 0x401) {
        puVar12 = local_448 + lVar13;
      }
      if ((puVar12 == (uchar *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("FPlatformString::Convert(NameString, NAME_SIZE, DisplayName, DisplayNameLen + 1) != nullptr"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\TagTrace.cpp"
                             ,0x15f,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar15 = (*pcVar4)();
        return iVar15;
      }
      goto LAB_14198b92a;
    }
  }
  ::FName::GetPlainANSIString(local_res10,(char (*) [1024])local_448);
LAB_14198b92a:
  puVar12 = (uchar *)0x0;
  if (*(char *)((longlong)param_4 + 4) == '\0') {
    if ((TOptional<int>)local_4a4 != param_4) {
      *(undefined4 *)param_4 = 0xffffffff;
      *(undefined1 *)((longlong)param_4 + 4) = 1;
    }
    if (0 < iVar15) {
      ::FName::GetPlainANSIString(local_res10,(char (*) [1024])local_448);
    }
    sVar8 = strlen((char *)local_448);
    local_478 = local_448;
    iVar7 = (int)sVar8;
    local_458._12_4_ = uStack_46c;
    local_458.Size = iVar7;
    iStack_470 = iVar7;
    local_458.DataPtr = local_478;
    iVar6 = UE::String::FindLastChar(&local_458,'/',CaseSensitive);
    if (iVar6 != -1) {
      local_494 = 0;
      if (iVar6 < iVar7) {
        iVar7 = iVar6;
      }
      iVar6 = 0;
      if (0 < iVar7) {
        iVar6 = iVar7;
      }
      pFVar9 = ::FName::FName(local_468,iVar6,(char *)local_448,FNAME_Add);
      iVar7 = AnnounceFNameTag(this,*pFVar9,-1,(wchar_t *)0x0,(TOptional<int>)local_498);
      if ((TOptional<int>)local_4a0 != param_4) {
        *(int *)param_4 = iVar7;
        *(undefined1 *)((longlong)param_4 + 4) = 1;
      }
    }
    if (0 < iVar15) {
      iVar15 = iVar15 + 1;
      bVar5 = false;
      iVar7 = iVar15;
      if (0x3ff < iVar15) {
        iVar7 = 0x400;
      }
      lVar13 = (longlong)iVar7;
      puVar11 = puVar12;
      if (0 < iVar7) {
        do {
          wVar2 = param_3[(longlong)puVar11];
          local_448[(longlong)puVar11] = (uchar)wVar2;
          puVar11 = puVar11 + 1;
          bVar5 = (bool)(bVar5 | 0x7f < (ushort)wVar2);
        } while ((longlong)puVar11 < lVar13);
        puVar11 = puVar12;
        if (bVar5) {
          do {
            if (0x7f < (ushort)param_3[(longlong)puVar11]) {
              local_448[(longlong)puVar11] = '?';
            }
            puVar11 = puVar11 + 1;
          } while ((longlong)puVar11 < lVar13);
        }
      }
      if (iVar15 < 0x401) {
        puVar12 = local_448 + lVar13;
      }
      if ((puVar12 == (uchar *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("FPlatformString::Convert(NameString, NAME_SIZE, DisplayName, DisplayNameLen + 1) != nullptr"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\TagTrace.cpp"
                             ,0x17d,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar15 = (*pcVar4)();
        return iVar15;
      }
    }
  }
  if ((*(char *)((longlong)param_4 + 4) == '\0') &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar15 = (*pcVar4)();
    return iVar15;
  }
  uVar10 = *(uint *)param_4;
  sVar8 = strlen((char *)local_448);
  uVar14 = (uint)sVar8;
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>(&local_490,uVar14);
    puVar12 = local_490.Ptr;
    *(int *)local_490.Ptr = param_2;
    *(uint *)((longlong)local_490.Ptr + 4) = uVar10;
    if ((int)uVar14 < 0) {
      sVar8 = strlen((char *)local_448);
      uVar14 = (uint)sVar8;
    }
    puVar1 = (uint *)((longlong)puVar12 + (longlong)local_490.AuxCursor);
    *puVar1 = uVar14 << 0xd | 0x200;
    *(undefined1 *)puVar1 = 1;
    memcpy(puVar1 + 1,local_448,(longlong)(int)uVar14);
    *(undefined1 *)((longlong)(int)(local_490.AuxCursor + uVar14) + 4 + (longlong)puVar12) = 3;
    LOCK();
    *(int *)((longlong)local_490.BufferOffset + (longlong)local_490.Ptr) =
         *(int *)((longlong)local_490.BufferOffset + (longlong)local_490.Ptr) + 1;
    UNLOCK();
  }
  return param_2;
}

// AnnounceGenericTags @ 14198bc50

void __thiscall FTagTrace::AnnounceGenericTags(FTagTrace *this)

{
  uchar *puVar1;
  char *pcVar2;
  undefined1 local_6d8 [16];
  undefined1 local_6c8 [16];
  undefined1 local_6b8 [16];
  undefined1 local_6a8 [16];
  undefined1 local_698 [16];
  undefined1 local_688 [16];
  undefined1 local_678 [16];
  undefined1 local_668 [16];
  undefined1 local_658 [16];
  undefined1 local_648 [16];
  undefined1 local_638 [16];
  undefined1 local_628 [16];
  undefined1 local_618 [16];
  undefined1 local_608 [16];
  undefined1 local_5f8 [16];
  undefined1 local_5e8 [16];
  undefined1 local_5d8 [16];
  undefined1 local_5c8 [16];
  undefined1 local_5b8 [16];
  undefined1 local_5a8 [16];
  undefined1 local_598 [16];
  undefined1 local_588 [16];
  undefined1 local_578 [16];
  undefined1 local_568 [16];
  undefined1 local_558 [16];
  undefined1 local_548 [16];
  undefined1 local_538 [16];
  undefined1 local_528 [16];
  undefined1 local_518 [16];
  undefined1 local_508 [16];
  undefined1 local_4f8 [16];
  undefined1 local_4e8 [16];
  undefined1 local_4d8 [16];
  undefined1 local_4c8 [16];
  undefined1 local_4b8 [16];
  undefined1 local_4a8 [16];
  undefined1 local_498 [16];
  undefined1 local_488 [16];
  undefined1 local_478 [16];
  undefined1 local_468 [16];
  undefined1 local_458 [16];
  undefined1 local_448 [16];
  undefined1 local_438 [16];
  undefined1 local_428 [16];
  undefined1 local_418 [16];
  undefined1 local_408 [16];
  undefined1 local_3f8 [16];
  undefined1 local_3e8 [16];
  undefined1 local_3d8 [16];
  undefined1 local_3c8 [16];
  undefined1 local_3b8 [16];
  undefined1 local_3a8 [16];
  undefined1 local_398 [16];
  undefined1 local_388 [16];
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  FImportantLogScope local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  uchar *local_18;
  uint local_10;
  
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_6d8,8);
    *(undefined4 *)local_6d8._0_8_ = 0;
    puVar1 = (uchar *)(local_6d8._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_6d8,"Untagged",8);
    LOCK();
    *(int *)(local_6d8._0_8_ + (longlong)(int)local_6d8._8_4_) =
         *(int *)(local_6d8._0_8_ + (longlong)(int)local_6d8._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_6c8,6);
    *(undefined4 *)local_6c8._0_8_ = 1;
    puVar1 = (uchar *)(local_6c8._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_6c8,"Paused",6);
    LOCK();
    *(int *)(local_6c8._0_8_ + (longlong)(int)local_6c8._8_4_) =
         *(int *)(local_6c8._0_8_ + (longlong)(int)local_6c8._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_6b8,5);
    *(undefined4 *)local_6b8._0_8_ = 2;
    puVar1 = (uchar *)(local_6b8._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_6b8,"Total",5);
    LOCK();
    *(int *)(local_6b8._0_8_ + (longlong)(int)local_6b8._8_4_) =
         *(int *)(local_6b8._0_8_ + (longlong)(int)local_6b8._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_6a8,9);
    *(undefined4 *)local_6a8._0_8_ = 3;
    puVar1 = (uchar *)(local_6a8._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_6a8,"Untracked",9);
    LOCK();
    *(int *)(local_6a8._0_8_ + (longlong)(int)local_6a8._8_4_) =
         *(int *)(local_6a8._0_8_ + (longlong)(int)local_6a8._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_698,5);
    *(undefined4 *)local_698._0_8_ = 4;
    puVar1 = (uchar *)(local_698._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_698,"Total",5);
    LOCK();
    *(int *)(local_698._0_8_ + (longlong)(int)local_698._8_4_) =
         *(int *)(local_698._0_8_ + (longlong)(int)local_698._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_688,0xc);
    *(undefined4 *)local_688._0_8_ = 5;
    puVar1 = (uchar *)(local_688._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_688,"TrackedTotal",0xc);
    LOCK();
    *(int *)(local_688._0_8_ + (longlong)(int)local_688._8_4_) =
         *(int *)(local_688._0_8_ + (longlong)(int)local_688._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_678,8);
    *(undefined4 *)local_678._0_8_ = 6;
    puVar1 = (uchar *)(local_678._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_678,"Untagged",8);
    LOCK();
    *(int *)(local_678._0_8_ + (longlong)(int)local_678._8_4_) =
         *(int *)(local_678._0_8_ + (longlong)(int)local_678._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_668,0xe);
    *(undefined4 *)local_668._0_8_ = 7;
    puVar1 = (uchar *)(local_668._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_668,"WorkingSetSize",0xe);
    LOCK();
    *(int *)(local_668._0_8_ + (longlong)(int)local_668._8_4_) =
         *(int *)(local_668._0_8_ + (longlong)(int)local_668._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_658,0xc);
    *(undefined4 *)local_658._0_8_ = 8;
    puVar1 = (uchar *)(local_658._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_658,"PagefileUsed",0xc);
    LOCK();
    *(int *)(local_658._0_8_ + (longlong)(int)local_658._8_4_) =
         *(int *)(local_658._0_8_ + (longlong)(int)local_658._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_648,0xc);
    *(undefined4 *)local_648._0_8_ = 9;
    puVar1 = (uchar *)(local_648._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_648,"TrackedTotal",0xc);
    LOCK();
    *(int *)(local_648._0_8_ + (longlong)(int)local_648._8_4_) =
         *(int *)(local_648._0_8_ + (longlong)(int)local_648._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_638,8);
    *(undefined4 *)local_638._0_8_ = 10;
    puVar1 = (uchar *)(local_638._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_638,"Untagged",8);
    LOCK();
    *(int *)(local_638._0_8_ + (longlong)(int)local_638._8_4_) =
         *(int *)(local_638._0_8_ + (longlong)(int)local_638._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_628,9);
    *(undefined4 *)local_628._0_8_ = 0xb;
    puVar1 = (uchar *)(local_628._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_628,"Untracked",9);
    LOCK();
    *(int *)(local_628._0_8_ + (longlong)(int)local_628._8_4_) =
         *(int *)(local_628._0_8_ + (longlong)(int)local_628._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_618,0xb);
    *(undefined4 *)local_618._0_8_ = 0xc;
    puVar1 = (uchar *)(local_618._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_618,"LLMOverhead",0xb);
    LOCK();
    *(int *)(local_618._0_8_ + (longlong)(int)local_618._8_4_) =
         *(int *)(local_618._0_8_ + (longlong)(int)local_618._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_608,0xb);
    *(undefined4 *)local_608._0_8_ = 0xd;
    puVar1 = (uchar *)(local_608._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_608,"OSAvailable",0xb);
    LOCK();
    *(int *)(local_608._0_8_ + (longlong)(int)local_608._8_4_) =
         *(int *)(local_608._0_8_ + (longlong)(int)local_608._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_5f8,7);
    *(undefined4 *)local_5f8._0_8_ = 0xe;
    pcVar2 = (char *)(local_5f8._0_8_ + 4);
    pcVar2[0] = -1;
    pcVar2[1] = -1;
    pcVar2[2] = -1;
    pcVar2[3] = -1;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_5f8,"FMalloc",7);
    LOCK();
    *(int *)(local_5f8._0_8_ + (longlong)(int)local_5f8._8_4_) =
         *(int *)(local_5f8._0_8_ + (longlong)(int)local_5f8._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_5e8,0xd);
    *(undefined4 *)local_5e8._0_8_ = 0xf;
    puVar1 = (uchar *)(local_5e8._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_5e8,"FMallocUnused",0xd);
    LOCK();
    *(int *)(local_5e8._0_8_ + (longlong)(int)local_5e8._8_4_) =
         *(int *)(local_5e8._0_8_ + (longlong)(int)local_5e8._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_5d8,9);
    *(undefined4 *)local_5d8._0_8_ = 0x10;
    puVar1 = (uchar *)(local_5d8._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_5d8,"RHIUnused",9);
    LOCK();
    *(int *)(local_5d8._0_8_ + (longlong)(int)local_5d8._8_4_) =
         *(int *)(local_5d8._0_8_ + (longlong)(int)local_5d8._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_5c8,0xb);
    *(undefined4 *)local_5c8._0_8_ = 0x11;
    puVar1 = (uchar *)(local_5c8._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_5c8,"ThreadStack",0xb);
    LOCK();
    *(int *)(local_5c8._0_8_ + (longlong)(int)local_5c8._8_4_) =
         *(int *)(local_5c8._0_8_ + (longlong)(int)local_5c8._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_5b8,0xb);
    *(undefined4 *)local_5b8._0_8_ = 0x12;
    puVar1 = (uchar *)(local_5b8._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_5b8,"ThreadStack",0xb);
    LOCK();
    *(int *)(local_5b8._0_8_ + (longlong)(int)local_5b8._8_4_) =
         *(int *)(local_5b8._0_8_ + (longlong)(int)local_5b8._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_5a8,0xb);
    *(undefined4 *)local_5a8._0_8_ = 0x13;
    puVar1 = (uchar *)(local_5a8._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_5a8,"ProgramSize",0xb);
    LOCK();
    *(int *)(local_5a8._0_8_ + (longlong)(int)local_5a8._8_4_) =
         *(int *)(local_5a8._0_8_ + (longlong)(int)local_5a8._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_598,0xb);
    *(undefined4 *)local_598._0_8_ = 0x14;
    puVar1 = (uchar *)(local_598._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_598,"ProgramSize",0xb);
    LOCK();
    *(int *)(local_598._0_8_ + (longlong)(int)local_598._8_4_) =
         *(int *)(local_598._0_8_ + (longlong)(int)local_598._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_588,0xd);
    *(undefined4 *)local_588._0_8_ = 0x15;
    puVar1 = (uchar *)(local_588._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_588,"OOMBackupPool",0xd);
    LOCK();
    *(int *)(local_588._0_8_ + (longlong)(int)local_588._8_4_) =
         *(int *)(local_588._0_8_ + (longlong)(int)local_588._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_578,0xd);
    *(undefined4 *)local_578._0_8_ = 0x16;
    puVar1 = (uchar *)(local_578._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_578,"OOMBackupPool",0xd);
    LOCK();
    *(int *)(local_578._0_8_ + (longlong)(int)local_578._8_4_) =
         *(int *)(local_578._0_8_ + (longlong)(int)local_578._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_568,0x1a);
    *(undefined4 *)local_568._0_8_ = 0x17;
    puVar1 = (uchar *)(local_568._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_568,"GenericPlatformMallocCrash",0x1a);
    LOCK();
    *(int *)(local_568._0_8_ + (longlong)(int)local_568._8_4_) =
         *(int *)(local_568._0_8_ + (longlong)(int)local_568._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_558,0x1a);
    *(undefined4 *)local_558._0_8_ = 0x18;
    puVar1 = (uchar *)(local_558._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_558,"GenericPlatformMallocCrash",0x1a);
    LOCK();
    *(int *)(local_558._0_8_ + (longlong)(int)local_558._8_4_) =
         *(int *)(local_558._0_8_ + (longlong)(int)local_558._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_548,10);
    *(undefined4 *)local_548._0_8_ = 0x19;
    puVar1 = (uchar *)(local_548._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_548,"EngineMisc",10);
    LOCK();
    *(int *)(local_548._0_8_ + (longlong)(int)local_548._8_4_) =
         *(int *)(local_548._0_8_ + (longlong)(int)local_548._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_538,0x12);
    *(undefined4 *)local_538._0_8_ = 0x1a;
    puVar1 = (uchar *)(local_538._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_538,"TaskGraphMiscTasks",0x12);
    LOCK();
    *(int *)(local_538._0_8_ + (longlong)(int)local_538._8_4_) =
         *(int *)(local_538._0_8_ + (longlong)(int)local_538._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_528,0xf);
    *(undefined4 *)local_528._0_8_ = 0x1b;
    puVar1 = (uchar *)(local_528._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_528,"LinearAllocator",0xf);
    LOCK();
    *(int *)(local_528._0_8_ + (longlong)(int)local_528._8_4_) =
         *(int *)(local_528._0_8_ + (longlong)(int)local_528._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_518,5);
    *(undefined4 *)local_518._0_8_ = 0x1c;
    puVar1 = (uchar *)(local_518._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_518,"Audio",5);
    LOCK();
    *(int *)(local_518._0_8_ + (longlong)(int)local_518._8_4_) =
         *(int *)(local_518._0_8_ + (longlong)(int)local_518._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_508,9);
    *(undefined4 *)local_508._0_8_ = 0x1d;
    puVar1 = (uchar *)(local_508._0_8_ + 4);
    puVar1[0] = '\x1c';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_508,"AudioMisc",9);
    LOCK();
    *(int *)(local_508._0_8_ + (longlong)(int)local_508._8_4_) =
         *(int *)(local_508._0_8_ + (longlong)(int)local_508._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_4f8,0xf);
    *(undefined4 *)local_4f8._0_8_ = 0x1e;
    puVar1 = (uchar *)(local_4f8._0_8_ + 4);
    puVar1[0] = '\x1c';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_4f8,"AudioSoundWaves",0xf);
    LOCK();
    *(int *)(local_4f8._0_8_ + (longlong)(int)local_4f8._8_4_) =
         *(int *)(local_4f8._0_8_ + (longlong)(int)local_4f8._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_4e8,0x15);
    *(undefined4 *)local_4e8._0_8_ = 0x1f;
    puVar1 = (uchar *)(local_4e8._0_8_ + 4);
    puVar1[0] = '\x1c';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_4e8,"AudioSoundWaveProxies",0x15);
    LOCK();
    *(int *)(local_4e8._0_8_ + (longlong)(int)local_4e8._8_4_) =
         *(int *)(local_4e8._0_8_ + (longlong)(int)local_4e8._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_4d8,10);
    *(undefined4 *)local_4d8._0_8_ = 0x20;
    puVar1 = (uchar *)(local_4d8._0_8_ + 4);
    puVar1[0] = '\x1c';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_4d8,"AudioMixer",10);
    LOCK();
    *(int *)(local_4d8._0_8_ + (longlong)(int)local_4d8._8_4_) =
         *(int *)(local_4d8._0_8_ + (longlong)(int)local_4d8._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_4c8,0x11);
    *(undefined4 *)local_4c8._0_8_ = 0x21;
    puVar1 = (uchar *)(local_4c8._0_8_ + 4);
    puVar1[0] = '\x1c';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_4c8,"AudioMixerPlugins",0x11);
    LOCK();
    *(int *)(local_4c8._0_8_ + (longlong)(int)local_4c8._8_4_) =
         *(int *)(local_4c8._0_8_ + (longlong)(int)local_4c8._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_4b8,0xd);
    *(undefined4 *)local_4b8._0_8_ = 0x22;
    puVar1 = (uchar *)(local_4b8._0_8_ + 4);
    puVar1[0] = '\x1c';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_4b8,"AudioPrecache",0xd);
    LOCK();
    *(int *)(local_4b8._0_8_ + (longlong)(int)local_4b8._8_4_) =
         *(int *)(local_4b8._0_8_ + (longlong)(int)local_4b8._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_4a8,0xf);
    *(undefined4 *)local_4a8._0_8_ = 0x23;
    puVar1 = (uchar *)(local_4a8._0_8_ + 4);
    puVar1[0] = '\x1c';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_4a8,"AudioDecompress",0xf);
    LOCK();
    *(int *)(local_4a8._0_8_ + (longlong)(int)local_4a8._8_4_) =
         *(int *)(local_4a8._0_8_ + (longlong)(int)local_4a8._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_498,0x15);
    *(undefined4 *)local_498._0_8_ = 0x24;
    puVar1 = (uchar *)(local_498._0_8_ + 4);
    puVar1[0] = '\x1c';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_498,"AudioRealtimePrecache",0x15);
    LOCK();
    *(int *)(local_498._0_8_ + (longlong)(int)local_498._8_4_) =
         *(int *)(local_498._0_8_ + (longlong)(int)local_498._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_488,0x13);
    *(undefined4 *)local_488._0_8_ = 0x25;
    puVar1 = (uchar *)(local_488._0_8_ + 4);
    puVar1[0] = '\x1c';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_488,"AudioFullDecompress",0x13);
    LOCK();
    *(int *)(local_488._0_8_ + (longlong)(int)local_488._8_4_) =
         *(int *)(local_488._0_8_ + (longlong)(int)local_488._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_478,0x10);
    *(undefined4 *)local_478._0_8_ = 0x26;
    puVar1 = (uchar *)(local_478._0_8_ + 4);
    puVar1[0] = '\x1c';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_478,"AudioStreamCache",0x10);
    LOCK();
    *(int *)(local_478._0_8_ + (longlong)(int)local_478._8_4_) =
         *(int *)(local_478._0_8_ + (longlong)(int)local_478._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_468,0x1e);
    *(undefined4 *)local_468._0_8_ = 0x27;
    puVar1 = (uchar *)(local_468._0_8_ + 4);
    puVar1[0] = '\x1c';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_468,"AudioStreamCacheCompressedData",0x1e);
    LOCK();
    *(int *)(local_468._0_8_ + (longlong)(int)local_468._8_4_) =
         *(int *)(local_468._0_8_ + (longlong)(int)local_468._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_458,0xe);
    *(undefined4 *)local_458._0_8_ = 0x28;
    puVar1 = (uchar *)(local_458._0_8_ + 4);
    puVar1[0] = '\x1c';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_458,"AudioSynthesis",0xe);
    LOCK();
    *(int *)(local_458._0_8_ + (longlong)(int)local_458._8_4_) =
         *(int *)(local_458._0_8_ + (longlong)(int)local_458._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_448,0x16);
    *(undefined4 *)local_448._0_8_ = 0x29;
    puVar1 = (uchar *)(local_448._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_448,"RealTimeCommunications",0x16);
    LOCK();
    *(int *)(local_448._0_8_ + (longlong)(int)local_448._8_4_) =
         *(int *)(local_448._0_8_ + (longlong)(int)local_448._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_438,5);
    *(undefined4 *)local_438._0_8_ = 0x2a;
    puVar1 = (uchar *)(local_438._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_438,"FName",5);
    LOCK();
    *(int *)(local_438._0_8_ + (longlong)(int)local_438._8_4_) =
         *(int *)(local_438._0_8_ + (longlong)(int)local_438._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_428,10);
    *(undefined4 *)local_428._0_8_ = 0x2b;
    puVar1 = (uchar *)(local_428._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_428,"Networking",10);
    LOCK();
    *(int *)(local_428._0_8_ + (longlong)(int)local_428._8_4_) =
         *(int *)(local_428._0_8_ + (longlong)(int)local_428._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_418,6);
    *(undefined4 *)local_418._0_8_ = 0x2c;
    puVar1 = (uchar *)(local_418._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_418,"Meshes",6);
    LOCK();
    *(int *)(local_418._0_8_ + (longlong)(int)local_418._8_4_) =
         *(int *)(local_418._0_8_ + (longlong)(int)local_418._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_408,5);
    *(undefined4 *)local_408._0_8_ = 0x2d;
    puVar1 = (uchar *)(local_408._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_408,"Stats",5);
    LOCK();
    *(int *)(local_408._0_8_ + (longlong)(int)local_408._8_4_) =
         *(int *)(local_408._0_8_ + (longlong)(int)local_408._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_3f8,7);
    *(undefined4 *)local_3f8._0_8_ = 0x2e;
    puVar1 = (uchar *)(local_3f8._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_3f8,"Shaders",7);
    LOCK();
    *(int *)(local_3f8._0_8_ + (longlong)(int)local_3f8._8_4_) =
         *(int *)(local_3f8._0_8_ + (longlong)(int)local_3f8._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_3e8,3);
    *(undefined4 *)local_3e8._0_8_ = 0x2f;
    puVar1 = (uchar *)(local_3e8._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_3e8,"PSO",3);
    LOCK();
    *(int *)(local_3e8._0_8_ + (longlong)(int)local_3e8._8_4_) =
         *(int *)(local_3e8._0_8_ + (longlong)(int)local_3e8._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_3d8,8);
    *(undefined4 *)local_3d8._0_8_ = 0x30;
    puVar1 = (uchar *)(local_3d8._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_3d8,"Textures",8);
    LOCK();
    *(int *)(local_3d8._0_8_ + (longlong)(int)local_3d8._8_4_) =
         *(int *)(local_3d8._0_8_ + (longlong)(int)local_3d8._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_3c8,0xf);
    *(undefined4 *)local_3c8._0_8_ = 0x31;
    puVar1 = (uchar *)(local_3c8._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_3c8,"TextureMetaData",0xf);
    LOCK();
    *(int *)(local_3c8._0_8_ + (longlong)(int)local_3c8._8_4_) =
         *(int *)(local_3c8._0_8_ + (longlong)(int)local_3c8._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_3b8,0x14);
    *(undefined4 *)local_3b8._0_8_ = 0x32;
    puVar1 = (uchar *)(local_3b8._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_3b8,"VirtualTextureSystem",0x14);
    LOCK();
    *(int *)(local_3b8._0_8_ + (longlong)(int)local_3b8._8_4_) =
         *(int *)(local_3b8._0_8_ + (longlong)(int)local_3b8._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_3a8,0xd);
    *(undefined4 *)local_3a8._0_8_ = 0x33;
    puVar1 = (uchar *)(local_3a8._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_3a8,"RenderTargets",0xd);
    LOCK();
    *(int *)(local_3a8._0_8_ + (longlong)(int)local_3a8._8_4_) =
         *(int *)(local_3a8._0_8_ + (longlong)(int)local_3a8._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_398,0xb);
    *(undefined4 *)local_398._0_8_ = 0x34;
    puVar1 = (uchar *)(local_398._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_398,"SceneRender",0xb);
    LOCK();
    *(int *)(local_398._0_8_ + (longlong)(int)local_398._8_4_) =
         *(int *)(local_398._0_8_ + (longlong)(int)local_398._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_388,7);
    *(undefined4 *)local_388._0_8_ = 0x35;
    puVar1 = (uchar *)(local_388._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_388,"RHIMisc",7);
    LOCK();
    *(int *)(local_388._0_8_ + (longlong)(int)local_388._8_4_) =
         *(int *)(local_388._0_8_ + (longlong)(int)local_388._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_378,0xc);
    *(undefined4 *)local_378._0_8_ = 0x36;
    puVar1 = (uchar *)(local_378._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_378,"AsyncLoading",0xc);
    LOCK();
    *(int *)(local_378._0_8_ + (longlong)(int)local_378._8_4_) =
         *(int *)(local_378._0_8_ + (longlong)(int)local_378._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_368,7);
    *(undefined4 *)local_368._0_8_ = 0x37;
    puVar1 = (uchar *)(local_368._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_368,"UObject",7);
    LOCK();
    *(int *)(local_368._0_8_ + (longlong)(int)local_368._8_4_) =
         *(int *)(local_368._0_8_ + (longlong)(int)local_368._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_358,9);
    *(undefined4 *)local_358._0_8_ = 0x38;
    puVar1 = (uchar *)(local_358._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_358,"Animation",9);
    LOCK();
    *(int *)(local_358._0_8_ + (longlong)(int)local_358._8_4_) =
         *(int *)(local_358._0_8_ + (longlong)(int)local_358._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_348,10);
    *(undefined4 *)local_348._0_8_ = 0x39;
    puVar1 = (uchar *)(local_348._0_8_ + 4);
    puVar1[0] = ',';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_348,"StaticMesh",10);
    LOCK();
    *(int *)(local_348._0_8_ + (longlong)(int)local_348._8_4_) =
         *(int *)(local_348._0_8_ + (longlong)(int)local_348._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_338,9);
    *(undefined4 *)local_338._0_8_ = 0x3a;
    puVar1 = (uchar *)(local_338._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_338,"Materials",9);
    LOCK();
    *(int *)(local_338._0_8_ + (longlong)(int)local_338._8_4_) =
         *(int *)(local_338._0_8_ + (longlong)(int)local_338._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_328,9);
    *(undefined4 *)local_328._0_8_ = 0x3b;
    puVar1 = (uchar *)(local_328._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_328,"Particles",9);
    LOCK();
    *(int *)(local_328._0_8_ + (longlong)(int)local_328._8_4_) =
         *(int *)(local_328._0_8_ + (longlong)(int)local_328._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_318,7);
    *(undefined4 *)local_318._0_8_ = 0x3c;
    puVar1 = (uchar *)(local_318._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_318,"Niagara",7);
    LOCK();
    *(int *)(local_318._0_8_ + (longlong)(int)local_318._8_4_) =
         *(int *)(local_318._0_8_ + (longlong)(int)local_318._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_308,7);
    *(undefined4 *)local_308._0_8_ = 0x3d;
    puVar1 = (uchar *)(local_308._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_308,"GPUSort",7);
    LOCK();
    *(int *)(local_308._0_8_ + (longlong)(int)local_308._8_4_) =
         *(int *)(local_308._0_8_ + (longlong)(int)local_308._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_2f8,2);
    *(undefined4 *)local_2f8._0_8_ = 0x3e;
    puVar1 = (uchar *)(local_2f8._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_2f8,"GC",2);
    LOCK();
    *(int *)(local_2f8._0_8_ + (longlong)(int)local_2f8._8_4_) =
         *(int *)(local_2f8._0_8_ + (longlong)(int)local_2f8._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_2e8,2);
    *(undefined4 *)local_2e8._0_8_ = 0x3f;
    puVar1 = (uchar *)(local_2e8._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_2e8,"UI",2);
    LOCK();
    *(int *)(local_2e8._0_8_ + (longlong)(int)local_2e8._8_4_) =
         *(int *)(local_2e8._0_8_ + (longlong)(int)local_2e8._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_2d8,0x10);
    *(undefined4 *)local_2d8._0_8_ = 0x40;
    puVar1 = (uchar *)(local_2d8._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_2d8,"NavigationRecast",0x10);
    LOCK();
    *(int *)(local_2d8._0_8_ + (longlong)(int)local_2d8._8_4_) =
         *(int *)(local_2d8._0_8_ + (longlong)(int)local_2d8._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_2c8,7);
    *(undefined4 *)local_2c8._0_8_ = 0x41;
    puVar1 = (uchar *)(local_2c8._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_2c8,"Physics",7);
    LOCK();
    *(int *)(local_2c8._0_8_ + (longlong)(int)local_2c8._8_4_) =
         *(int *)(local_2c8._0_8_ + (longlong)(int)local_2c8._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_2b8,5);
    *(undefined4 *)local_2b8._0_8_ = 0x42;
    puVar1 = (uchar *)(local_2b8._0_8_ + 4);
    puVar1[0] = 'A';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_2b8,"PhysX",5);
    LOCK();
    *(int *)(local_2b8._0_8_ + (longlong)(int)local_2b8._8_4_) =
         *(int *)(local_2b8._0_8_ + (longlong)(int)local_2b8._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_2a8,0xd);
    *(undefined4 *)local_2a8._0_8_ = 0x43;
    puVar1 = (uchar *)(local_2a8._0_8_ + 4);
    puVar1[0] = 'A';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_2a8,"PhysXGeometry",0xd);
    LOCK();
    *(int *)(local_2a8._0_8_ + (longlong)(int)local_2a8._8_4_) =
         *(int *)(local_2a8._0_8_ + (longlong)(int)local_2a8._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_298,0xc);
    *(undefined4 *)local_298._0_8_ = 0x44;
    puVar1 = (uchar *)(local_298._0_8_ + 4);
    puVar1[0] = 'A';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_298,"PhysXTrimesh",0xc);
    LOCK();
    *(int *)(local_298._0_8_ + (longlong)(int)local_298._8_4_) =
         *(int *)(local_298._0_8_ + (longlong)(int)local_298._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_288,0xb);
    *(undefined4 *)local_288._0_8_ = 0x45;
    puVar1 = (uchar *)(local_288._0_8_ + 4);
    puVar1[0] = 'A';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_288,"PhysXConvex",0xb);
    LOCK();
    *(int *)(local_288._0_8_ + (longlong)(int)local_288._8_4_) =
         *(int *)(local_288._0_8_ + (longlong)(int)local_288._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_278,0xe);
    *(undefined4 *)local_278._0_8_ = 0x46;
    puVar1 = (uchar *)(local_278._0_8_ + 4);
    puVar1[0] = 'A';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_278,"PhysXAllocator",0xe);
    LOCK();
    *(int *)(local_278._0_8_ + (longlong)(int)local_278._8_4_) =
         *(int *)(local_278._0_8_ + (longlong)(int)local_278._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_268,0xe);
    *(undefined4 *)local_268._0_8_ = 0x47;
    puVar1 = (uchar *)(local_268._0_8_ + 4);
    puVar1[0] = 'A';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_268,"PhysXLandscape",0xe);
    LOCK();
    *(int *)(local_268._0_8_ + (longlong)(int)local_268._8_4_) =
         *(int *)(local_268._0_8_ + (longlong)(int)local_268._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_258,5);
    *(undefined4 *)local_258._0_8_ = 0x48;
    puVar1 = (uchar *)(local_258._0_8_ + 4);
    puVar1[0] = 'A';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_258,"Chaos",5);
    LOCK();
    *(int *)(local_258._0_8_ + (longlong)(int)local_258._8_4_) =
         *(int *)(local_258._0_8_ + (longlong)(int)local_258._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_248,0xd);
    *(undefined4 *)local_248._0_8_ = 0x49;
    puVar1 = (uchar *)(local_248._0_8_ + 4);
    puVar1[0] = 'A';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_248,"ChaosGeometry",0xd);
    LOCK();
    *(int *)(local_248._0_8_ + (longlong)(int)local_248._8_4_) =
         *(int *)(local_248._0_8_ + (longlong)(int)local_248._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_238,0x11);
    *(undefined4 *)local_238._0_8_ = 0x4a;
    puVar1 = (uchar *)(local_238._0_8_ + 4);
    puVar1[0] = 'A';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_238,"ChaosAcceleration",0x11);
    LOCK();
    *(int *)(local_238._0_8_ + (longlong)(int)local_238._8_4_) =
         *(int *)(local_238._0_8_ + (longlong)(int)local_238._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_228,0xe);
    *(undefined4 *)local_228._0_8_ = 0x4b;
    puVar1 = (uchar *)(local_228._0_8_ + 4);
    puVar1[0] = 'A';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_228,"ChaosParticles",0xe);
    LOCK();
    *(int *)(local_228._0_8_ + (longlong)(int)local_228._8_4_) =
         *(int *)(local_228._0_8_ + (longlong)(int)local_228._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_218,0xe);
    *(undefined4 *)local_218._0_8_ = 0x4c;
    puVar1 = (uchar *)(local_218._0_8_ + 4);
    puVar1[0] = 'A';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_218,"ChaosLandscape",0xe);
    LOCK();
    *(int *)(local_218._0_8_ + (longlong)(int)local_218._8_4_) =
         *(int *)(local_218._0_8_ + (longlong)(int)local_218._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_208,0xc);
    *(undefined4 *)local_208._0_8_ = 0x4d;
    puVar1 = (uchar *)(local_208._0_8_ + 4);
    puVar1[0] = 'A';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_208,"ChaosTrimesh",0xc);
    LOCK();
    *(int *)(local_208._0_8_ + (longlong)(int)local_208._8_4_) =
         *(int *)(local_208._0_8_ + (longlong)(int)local_208._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_1f8,0xb);
    *(undefined4 *)local_1f8._0_8_ = 0x4e;
    puVar1 = (uchar *)(local_1f8._0_8_ + 4);
    puVar1[0] = 'A';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_1f8,"ChaosConvex",0xb);
    LOCK();
    *(int *)(local_1f8._0_8_ + (longlong)(int)local_1f8._8_4_) =
         *(int *)(local_1f8._0_8_ + (longlong)(int)local_1f8._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_1e8,10);
    *(undefined4 *)local_1e8._0_8_ = 0x4f;
    puVar1 = (uchar *)(local_1e8._0_8_ + 4);
    puVar1[0] = 'A';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_1e8,"ChaosScene",10);
    LOCK();
    *(int *)(local_1e8._0_8_ + (longlong)(int)local_1e8._8_4_) =
         *(int *)(local_1e8._0_8_ + (longlong)(int)local_1e8._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_1d8,0xb);
    *(undefined4 *)local_1d8._0_8_ = 0x50;
    puVar1 = (uchar *)(local_1d8._0_8_ + 4);
    puVar1[0] = 'A';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_1d8,"ChaosUpdate",0xb);
    LOCK();
    *(int *)(local_1d8._0_8_ + (longlong)(int)local_1d8._8_4_) =
         *(int *)(local_1d8._0_8_ + (longlong)(int)local_1d8._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_1c8,10);
    *(undefined4 *)local_1c8._0_8_ = 0x51;
    puVar1 = (uchar *)(local_1c8._0_8_ + 4);
    puVar1[0] = 'A';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_1c8,"ChaosActor",10);
    LOCK();
    *(int *)(local_1c8._0_8_ + (longlong)(int)local_1c8._8_4_) =
         *(int *)(local_1c8._0_8_ + (longlong)(int)local_1c8._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_1b8,9);
    *(undefined4 *)local_1b8._0_8_ = 0x52;
    puVar1 = (uchar *)(local_1b8._0_8_ + 4);
    puVar1[0] = 'A';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_1b8,"ChaosBody",9);
    LOCK();
    *(int *)(local_1b8._0_8_ + (longlong)(int)local_1b8._8_4_) =
         *(int *)(local_1b8._0_8_ + (longlong)(int)local_1b8._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_1a8,0xf);
    *(undefined4 *)local_1a8._0_8_ = 0x53;
    puVar1 = (uchar *)(local_1a8._0_8_ + 4);
    puVar1[0] = 'A';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_1a8,"ChaosConstraint",0xf);
    LOCK();
    *(int *)(local_1a8._0_8_ + (longlong)(int)local_1a8._8_4_) =
         *(int *)(local_1a8._0_8_ + (longlong)(int)local_1a8._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_198,0xd);
    *(undefined4 *)local_198._0_8_ = 0x54;
    puVar1 = (uchar *)(local_198._0_8_ + 4);
    puVar1[0] = 'A';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_198,"ChaosMaterial",0xd);
    LOCK();
    *(int *)(local_198._0_8_ + (longlong)(int)local_198._8_4_) =
         *(int *)(local_198._0_8_ + (longlong)(int)local_198._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_188,0xd);
    *(undefined4 *)local_188._0_8_ = 0x55;
    puVar1 = (uchar *)(local_188._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_188,"EnginePreInit",0xd);
    LOCK();
    *(int *)(local_188._0_8_ + (longlong)(int)local_188._8_4_) =
         *(int *)(local_188._0_8_ + (longlong)(int)local_188._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_178,10);
    *(undefined4 *)local_178._0_8_ = 0x56;
    puVar1 = (uchar *)(local_178._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_178,"EngineInit",10);
    LOCK();
    *(int *)(local_178._0_8_ + (longlong)(int)local_178._8_4_) =
         *(int *)(local_178._0_8_ + (longlong)(int)local_178._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_168,0xf);
    *(undefined4 *)local_168._0_8_ = 0x57;
    puVar1 = (uchar *)(local_168._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_168,"RenderingThread",0xf);
    LOCK();
    *(int *)(local_168._0_8_ + (longlong)(int)local_168._8_4_) =
         *(int *)(local_168._0_8_ + (longlong)(int)local_168._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_158,0xb);
    *(undefined4 *)local_158._0_8_ = 0x58;
    puVar1 = (uchar *)(local_158._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_158,"LoadMapMisc",0xb);
    LOCK();
    *(int *)(local_158._0_8_ + (longlong)(int)local_158._8_4_) =
         *(int *)(local_158._0_8_ + (longlong)(int)local_158._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_148,0x10);
    *(undefined4 *)local_148._0_8_ = 0x59;
    puVar1 = (uchar *)(local_148._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_148,"StreamingManager",0x10);
    LOCK();
    *(int *)(local_148._0_8_ + (longlong)(int)local_148._8_4_) =
         *(int *)(local_148._0_8_ + (longlong)(int)local_148._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_138,8);
    *(undefined4 *)local_138._0_8_ = 0x5a;
    puVar1 = (uchar *)(local_138._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_138,"Graphics",8);
    LOCK();
    *(int *)(local_138._0_8_ + (longlong)(int)local_138._8_4_) =
         *(int *)(local_138._0_8_ + (longlong)(int)local_138._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_128,10);
    *(undefined4 *)local_128._0_8_ = 0x5b;
    puVar1 = (uchar *)(local_128._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_128,"FileSystem",10);
    LOCK();
    *(int *)(local_128._0_8_ + (longlong)(int)local_128._8_4_) =
         *(int *)(local_128._0_8_ + (longlong)(int)local_128._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_118,0xc);
    *(undefined4 *)local_118._0_8_ = 0x5c;
    puVar1 = (uchar *)(local_118._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_118,"Localization",0xc);
    LOCK();
    *(int *)(local_118._0_8_ + (longlong)(int)local_118._8_4_) =
         *(int *)(local_118._0_8_ + (longlong)(int)local_118._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_108,0xd);
    *(undefined4 *)local_108._0_8_ = 0x5d;
    puVar1 = (uchar *)(local_108._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_108,"AssetRegistry",0xd);
    LOCK();
    *(int *)(local_108._0_8_ + (longlong)(int)local_108._8_4_) =
         *(int *)(local_108._0_8_ + (longlong)(int)local_108._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_f8,0xc);
    *(undefined4 *)local_f8._0_8_ = 0x5e;
    puVar1 = (uchar *)(local_f8._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_f8,"ConfigSystem",0xc);
    LOCK();
    *(int *)(local_f8._0_8_ + (longlong)(int)local_f8._8_4_) =
         *(int *)(local_f8._0_8_ + (longlong)(int)local_f8._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_e8,0xb);
    *(undefined4 *)local_e8._0_8_ = 0x5f;
    puVar1 = (uchar *)(local_e8._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_e8,"InitUObject",0xb);
    LOCK();
    *(int *)(local_e8._0_8_ + (longlong)(int)local_e8._8_4_) =
         *(int *)(local_e8._0_8_ + (longlong)(int)local_e8._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_d8,0xe);
    *(undefined4 *)local_d8._0_8_ = 0x60;
    puVar1 = (uchar *)(local_d8._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_d8,"VideoRecording",0xe);
    LOCK();
    *(int *)(local_d8._0_8_ + (longlong)(int)local_d8._8_4_) =
         *(int *)(local_d8._0_8_ + (longlong)(int)local_d8._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_c8,7);
    *(undefined4 *)local_c8._0_8_ = 0x61;
    puVar1 = (uchar *)(local_c8._0_8_ + 4);
    puVar1[0] = '+';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_c8,"Replays",7);
    LOCK();
    *(int *)(local_c8._0_8_ + (longlong)(int)local_c8._8_4_) =
         *(int *)(local_c8._0_8_ + (longlong)(int)local_c8._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_b8,0x10);
    *(undefined4 *)local_b8._0_8_ = 0x62;
    puVar1 = (uchar *)(local_b8._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_b8,"MaterialInstance",0x10);
    LOCK();
    *(int *)(local_b8._0_8_ + (longlong)(int)local_b8._8_4_) =
         *(int *)(local_b8._0_8_ + (longlong)(int)local_b8._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_a8,0xc);
    *(undefined4 *)local_a8._0_8_ = 99;
    puVar1 = (uchar *)(local_a8._0_8_ + 4);
    puVar1[0] = ',';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_a8,"SkeletalMesh",0xc);
    LOCK();
    *(int *)(local_a8._0_8_ + (longlong)(int)local_a8._8_4_) =
         *(int *)(local_a8._0_8_ + (longlong)(int)local_a8._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_98,0xd);
    *(undefined4 *)local_98._0_8_ = 100;
    puVar1 = (uchar *)(local_98._0_8_ + 4);
    puVar1[0] = ',';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_98,"InstancedMesh",0xd);
    LOCK();
    *(int *)(local_98._0_8_ + (longlong)(int)local_98._8_4_) =
         *(int *)(local_98._0_8_ + (longlong)(int)local_98._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_88,9);
    *(undefined4 *)local_88._0_8_ = 0x65;
    puVar1 = (uchar *)(local_88._0_8_ + 4);
    puVar1[0] = ',';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_88,"Landscape",9);
    LOCK();
    *(int *)(local_88._0_8_ + (longlong)(int)local_88._8_4_) =
         *(int *)(local_88._0_8_ + (longlong)(int)local_88._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_78,0xb);
    *(undefined4 *)local_78._0_8_ = 0x66;
    puVar1 = (uchar *)(local_78._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_78,"CsvProfiler",0xb);
    LOCK();
    *(int *)(local_78._0_8_ + (longlong)(int)local_78._8_4_) =
         *(int *)(local_78._0_8_ + (longlong)(int)local_78._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>(&local_68,0xe);
    local_68.Ptr[0] = 'g';
    local_68.Ptr[1] = '\0';
    local_68.Ptr[2] = '\0';
    local_68.Ptr[3] = '\0';
    local_68.Ptr[4] = 0xff;
    local_68.Ptr[5] = 0xff;
    local_68.Ptr[6] = 0xff;
    local_68.Ptr[7] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)&local_68,"MediaStreaming",0xe);
    LOCK();
    *(int *)(local_68.Ptr + local_68.BufferOffset) =
         *(int *)(local_68.Ptr + local_68.BufferOffset) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_58,0xd);
    *(undefined4 *)local_58._0_8_ = 0x68;
    puVar1 = (uchar *)(local_58._0_8_ + 4);
    puVar1[0] = 'g';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_58,"ElectraPlayer",0xd);
    LOCK();
    *(int *)(local_58._0_8_ + (longlong)(int)local_58._8_4_) =
         *(int *)(local_58._0_8_ + (longlong)(int)local_58._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_48,9);
    *(undefined4 *)local_48._0_8_ = 0x69;
    puVar1 = (uchar *)(local_48._0_8_ + 4);
    puVar1[0] = 'g';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_48,"WMFPlayer",9);
    LOCK();
    *(int *)(local_48._0_8_ + (longlong)(int)local_48._8_4_) =
         *(int *)(local_48._0_8_ + (longlong)(int)local_48._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_38,4);
    *(undefined4 *)local_38._0_8_ = 0x6a;
    puVar1 = (uchar *)(local_38._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_38,"MMIO",4);
    LOCK();
    *(int *)(local_38._0_8_ + (longlong)(int)local_38._8_4_) =
         *(int *)(local_38._0_8_ + (longlong)(int)local_38._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)local_28,0xe);
    *(undefined4 *)local_28._0_8_ = 0x6b;
    puVar1 = (uchar *)(local_28._0_8_ + 4);
    puVar1[0] = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar1[3] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)local_28,"Virtual Memory",0xe);
    LOCK();
    *(int *)(local_28._0_8_ + (longlong)(int)local_28._8_4_) =
         *(int *)(local_28._0_8_ + (longlong)(int)local_28._8_4_) + 1;
    UNLOCK();
  }
  if (-1 < MemAllocChannel->Enabled) {
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>
              ((FImportantLogScope *)&stack0xffffffffffffffe8,10);
    local_18[0] = 'l';
    local_18[1] = '\0';
    local_18[2] = '\0';
    local_18[3] = '\0';
    local_18[4] = 0xff;
    local_18[5] = 0xff;
    local_18[6] = 0xff;
    local_18[7] = 0xff;
    FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
              ((FMemoryTagSpecFields *)&stack0xffffffffffffffe8,"CustomName",10);
    LOCK();
    *(int *)(local_18 + (int)local_10) = *(int *)(local_18 + (int)local_10) + 1;
    UNLOCK();
  }
  return;
}

// AnnounceLLMExtendedTag @ 14198e400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
FTagTrace::AnnounceLLMExtendedTag(FTagTrace *this,FLowLevelMemTracker *param_1,FTagData *param_2)

{
  FName FVar1;
  bool bVar2;
  ELLMTag EVar3;
  int iVar4;
  uint uVar5;
  FTagData *pFVar6;
  FName FVar7;
  undefined1 auStackY_8b8 [32];
  int local_888;
  undefined1 local_884;
  undefined1 local_880 [16];
  FTagData_u_16 local_870;
  FName local_868;
  undefined2 local_860;
  undefined1 local_858 [2072];
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_8b8;
  bVar2 = FLowLevelMemTracker::GetTagIsEnumTag(param_1,param_2);
  uVar5 = 0x6d;
  if (bVar2) {
    EVar3 = FLowLevelMemTracker::GetTagClosestEnumTag(param_1,param_2);
    uVar5 = (uint)EVar3;
    if (EVar3 < GenericTagCount) {
      return uVar5;
    }
  }
  FLowLevelMemTracker::GetTagUniqueName(param_1,(FTagData *)local_880);
  if (!bVar2) {
    uVar5 = local_880._0_4_ + 0x200;
  }
  bVar2 = UE::LLMPrivate::FTagData::IsReportable(param_2);
  if (bVar2) {
    iVar4 = -1;
    pFVar6 = FLowLevelMemTracker::GetTagParent(param_1,param_2);
    if (pFVar6 != (FTagData *)0x0) {
      iVar4 = AnnounceLLMExtendedTag(this,param_1,pFVar6);
    }
    local_880._8_8_ = local_858;
    local_860 = 0;
    local_870.Parent = (FTagData *)local_858;
    local_868 = (FName)local_40;
    FLowLevelMemTracker::GetTagDisplayPathName
              (param_1,param_2,(TStringBuilderBase<wchar_t> *)(local_880 + 8),0x40b);
    if ((ulonglong)local_868 < (longlong)&((local_870.Parent)->Name).ComparisonIndex.Value + 2U) {
      TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)(local_880 + 8),1);
    }
    FVar7.ComparisonIndex.Value = 0;
    FVar7.Number = 0;
    *(undefined2 *)&((local_870.Parent)->Name).ComparisonIndex.Value = 0;
    local_884 = 1;
    FVar1.Number = local_880._4_4_;
    FVar1.ComparisonIndex.Value = local_880._0_4_;
    if ((uint)((longlong)local_870.Parent - local_880._8_8_ >> 1) < 0x40b) {
      FVar7 = (FName)local_880._8_8_;
    }
    local_888 = iVar4;
    uVar5 = AnnounceFNameTag(this,FVar1,uVar5,(wchar_t *)FVar7,(TOptional<int>)&local_888);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)(local_880 + 8));
  }
  return uVar5;
}

// AnnounceLLMExtendedTags @ 14198e590

void __thiscall FTagTrace::AnnounceLLMExtendedTags(FTagTrace *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  int iVar2;
  ForAnyElementType FVar3;
  undefined1 local_res10 [8];
  TArray<UE::LLMPrivate::FTagData_const_*,TSizedDefaultAllocator<32>_> local_28;
  
  this_00 = FLowLevelMemTracker::TrackerInstance;
  if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
    this_00 = FLowLevelMemTracker::Construct();
  }
  if (this_00->bFullyInitialised == false) {
    UE::LLMPrivate::FPrivateCallbacks::AddInitialisedCallback(OnLLMInitialised,(ulong64)this);
    return;
  }
  FLowLevelMemTracker::GetTrackedTags(this_00,&local_28,None);
  iVar2 = local_28.ArrayNum;
  pFVar1 = local_28.AllocatorInstance.Data + (longlong)iVar2 * 8;
  FVar3.Data = local_28.AllocatorInstance.Data;
  while( true ) {
    if (local_28.ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::LLMPrivate::FTagData_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (FVar3.Data == pFVar1) break;
    AnnounceLLMExtendedTag(this,this_00,*(FTagData **)FVar3.Data);
    FVar3.Data = FVar3.Data + 8;
  }
  UE::LLMPrivate::FPrivateCallbacks::AddTagCreationCallback(OnAnnounceLLMExtendedTag,(ulong64)this);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// AnnounceSpecialTags @ 14198e670

void __thiscall FTagTrace::AnnounceSpecialTags(FTagTrace *this)

{
  wchar_t wVar1;
  uchar *puVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  longlong lVar5;
  FImportantLogScope local_18;
  
  if (-1 < MemAllocChannel->Enabled) {
    lVar4 = 5;
    UE::Trace::Private::FImportantLogScope::Enter<FMemoryTagSpecFields>(&local_18,5);
    pwVar3 = L"Trace";
    lVar5 = (longlong)local_18.AuxCursor;
    local_18.Ptr[0] = '\x01';
    local_18.Ptr[1] = '\x01';
    local_18.Ptr[2] = '\0';
    local_18.Ptr[3] = '\0';
    local_18.Ptr[4] = 0xff;
    local_18.Ptr[5] = 0xff;
    local_18.Ptr[6] = 0xff;
    local_18.Ptr[7] = 0xff;
    puVar2 = local_18.Ptr + lVar5;
    puVar2[0] = '\0';
    puVar2[1] = 0xa2;
    puVar2[2] = '\0';
    puVar2[3] = '\0';
    puVar2 = local_18.Ptr + lVar5 + 4;
    local_18.Ptr[lVar5] = '\x01';
    do {
      wVar1 = *pwVar3;
      pwVar3 = pwVar3 + 1;
      *puVar2 = (uchar)wVar1;
      puVar2 = puVar2 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    local_18.Ptr[(longlong)(local_18.AuxCursor + 5) + 4] = '\x03';
    LOCK();
    *(int *)(local_18.Ptr + local_18.BufferOffset) =
         *(int *)(local_18.Ptr + local_18.BufferOffset) + 1;
    UNLOCK();
  }
  return;
}

// OnAnnounceLLMExtendedTag @ 1419a3cb0

void __cdecl FTagTrace::OnAnnounceLLMExtendedTag(FTagData *param_1,ulong64 param_2)

{
  FLowLevelMemTracker *pFVar1;
  
  pFVar1 = FLowLevelMemTracker::TrackerInstance;
  if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
    pFVar1 = FLowLevelMemTracker::Construct();
  }
  AnnounceLLMExtendedTag((FTagTrace *)param_2,pFVar1,param_1);
  return;
}

// OnLLMInitialised @ 1419a4570

void __cdecl FTagTrace::OnLLMInitialised(ulong64 param_1)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this;
  int iVar2;
  ForAnyElementType FVar3;
  undefined1 auStackX_10 [8];
  TArray<UE::LLMPrivate::FTagData_const_*,TSizedDefaultAllocator<32>_> TStack_28;
  
  this = FLowLevelMemTracker::TrackerInstance;
  if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
    this = FLowLevelMemTracker::Construct();
  }
  if (this->bFullyInitialised == false) {
    UE::LLMPrivate::FPrivateCallbacks::AddInitialisedCallback(OnLLMInitialised,param_1);
    return;
  }
  FLowLevelMemTracker::GetTrackedTags(this,&TStack_28,None);
  iVar2 = TStack_28.ArrayNum;
  pFVar1 = TStack_28.AllocatorInstance.Data + (longlong)iVar2 * 8;
  FVar3.Data = TStack_28.AllocatorInstance.Data;
  while( true ) {
    if (TStack_28.ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::LLMPrivate::FTagData_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(auStackX_10);
    }
    if (FVar3.Data == pFVar1) break;
    AnnounceLLMExtendedTag((FTagTrace *)param_1,this,*(FTagData **)FVar3.Data);
    FVar3.Data = FVar3.Data + 8;
  }
  UE::LLMPrivate::FPrivateCallbacks::AddTagCreationCallback(OnAnnounceLLMExtendedTag,param_1);
  if (TStack_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_28.AllocatorInstance.Data);
  }
  return;
}

