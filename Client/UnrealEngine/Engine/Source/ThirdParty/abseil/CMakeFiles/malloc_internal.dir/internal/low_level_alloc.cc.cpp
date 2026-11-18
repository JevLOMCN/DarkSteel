// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 27

// CallOnceImpl<void_(__cdecl&)(void)> @ 15024cb70

/* void __cdecl absl::lts_20240722::base_internal::CallOnceImpl<void (__cdecl&)(void)>(struct
   std::atomic<unsigned int> * __ptr64,enum absl::lts_20240722::base_internal::SchedulingMode,void
   (__cdecl&)(void)) */

void __cdecl
absl::lts_20240722::base_internal::CallOnceImpl<void_(__cdecl&)(void)>
          (atomic<unsigned_int> *param_1,SchedulingMode param_2,_func_void *param_3)

{
  atomic<unsigned_int> aVar1;
  uint uVar2;
  
  LOCK();
  aVar1 = *param_1;
  if (aVar1 == (atomic<unsigned_int>)0x0) {
    *param_1 = (atomic<unsigned_int>)0x65c2937b;
  }
  UNLOCK();
  if ((aVar1 != (atomic<unsigned_int>)0x0) &&
     (uVar2 = SpinLockWait(param_1,3,
                           (SpinLockWaitTransition *)
                           &`void___cdecl_absl::lts_20240722::base_internal::CallOnceImpl<void_(__cdecl&)(void)>(std::atomic<unsigned_int>*___ptr64,absl::lts_20240722::base_internal::SchedulingMode,void_(__cdecl&)(void))'
                            ::__l2::trans,param_2), uVar2 != 0)) {
    return;
  }
  (*param_3)();
  LOCK();
  aVar1 = *param_1;
  *param_1 = (atomic<unsigned_int>)0xdd;
  UNLOCK();
  if (aVar1 == (atomic<unsigned_int>)0x5a308d2) {
    AbslInternalSpinLockWake_lts_20240722(param_1,1);
  }
  return;
}

// LowLevelCallOnce<void_(__cdecl&)(void)> @ 15024cbe0

/* void __cdecl absl::lts_20240722::base_internal::LowLevelCallOnce<void (__cdecl&)(void)>(class
   absl::lts_20240722::once_flag * __ptr64,void (__cdecl&)(void)) */

void __cdecl
absl::lts_20240722::base_internal::LowLevelCallOnce<void_(__cdecl&)(void)>
          (once_flag *param_1,_func_void *param_2)

{
  atomic<unsigned_int> aVar1;
  uint uVar2;
  bool bVar3;
  
  if (param_1->control_ != (atomic<unsigned_int>)0xdd) {
    LOCK();
    bVar3 = param_1->control_ == (atomic<unsigned_int>)0x0;
    if (bVar3) {
      param_1->control_ = (atomic<unsigned_int>)0x65c2937b;
    }
    UNLOCK();
    if ((!bVar3) &&
       (uVar2 = SpinLockWait(&param_1->control_,3,
                             (SpinLockWaitTransition *)
                             &`void___cdecl_absl::lts_20240722::base_internal::CallOnceImpl<void_(__cdecl&)(void)>(std::atomic<unsigned_int>*___ptr64,absl::lts_20240722::base_internal::SchedulingMode,void_(__cdecl&)(void))'
                              ::__l2::trans,SCHEDULE_KERNEL_ONLY), uVar2 != 0)) {
      return;
    }
    (*param_2)();
    LOCK();
    aVar1 = param_1->control_;
    param_1->control_ = (atomic<unsigned_int>)0xdd;
    UNLOCK();
    if (aVar1 == (atomic<unsigned_int>)0x5a308d2) {
      AbslInternalSpinLockWake_lts_20240722(param_1,1);
    }
  }
  return;
}

// forward<void_(__cdecl&)(void)> @ 15024cc60

/* void (__cdecl&__cdecl std::forward<void (__cdecl&)(void)>(void (__cdecl&)(void)))(void) */

_func_void * __cdecl std::forward<void_(__cdecl&)(void)>(_func_void *param_1)

{
  return param_1;
}

// invoke<void_(__cdecl&)(void)> @ 15024cc70

/* void __cdecl std::invoke<void (__cdecl&)(void)>(void (__cdecl&)(void)) */

void __cdecl std::invoke<void_(__cdecl&)(void)>(_func_void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00015024cc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_1)();
  return;
}

// max<unsigned_long> @ 15024cc80

/* unsigned long const & __ptr64 __cdecl std::max<unsigned long>(unsigned long const &
   __ptr64,unsigned long const & __ptr64) */

ulong * __cdecl std::max<unsigned_long>(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}

// Arena @ 15024cca0

/* public: __cdecl absl::lts_20240722::base_internal::LowLevelAlloc::Arena::Arena(unsigned int)
   __ptr64 */

Arena * __thiscall
absl::lts_20240722::base_internal::LowLevelAlloc::Arena::Arena(Arena *this,uint param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  _SYSTEM_INFO local_38;
  
  SpinLock::SpinLock((SpinLock *)this,SCHEDULE_KERNEL_ONLY);
  *(uint *)(this + 0x124) = param_1;
  *(undefined4 *)(this + 0x120) = 0;
  GetSystemInfo(&local_38);
  if (local_38.dwPageSize < local_38.dwAllocationGranularity) {
    local_38.dwPageSize = local_38.dwAllocationGranularity;
  }
  *(ulonglong *)(this + 0x128) = (ulonglong)local_38.dwPageSize;
  uVar1 = 0x10;
  do {
    uVar2 = uVar1;
    uVar1 = uVar2 * 2;
  } while (uVar1 < 0x20);
  *(ulonglong *)(this + 0x130) = uVar1;
  *(undefined8 *)(this + 8) = 0;
  *(ulonglong *)(this + 0x138) = uVar2 * 4;
  *(undefined4 *)(this + 0x140) = 0;
  *(Arena **)(this + 0x18) = this;
  *(ulonglong *)(this + 0x10) = (ulonglong)(this + 8) ^ 0xffffffffb37cc16a;
  *(undefined4 *)(this + 0x28) = 0;
  memset(this + 0x30,0,0xf0);
  return this;
}

// FUN_15024cd60 @ 15024cd60

undefined1 * FUN_15024cd60(undefined1 *param_1,atomic<unsigned_int> *param_2)

{
  SpinLock SVar1;
  SpinLock SVar2;
  bool bVar3;
  
  *param_1 = 0;
  *(atomic<unsigned_int> **)(param_1 + 8) = param_2;
  SVar2.lockword_ = *param_2;
  if (((uint)SVar2.lockword_ & 1) == 0) {
    LOCK();
    SVar1.lockword_ = *param_2;
    bVar3 = SVar2.lockword_ == SVar1.lockword_;
    if (bVar3) {
      *param_2 = SVar2.lockword_ | 1;
      SVar1.lockword_ = SVar2.lockword_;
    }
    UNLOCK();
    if (!bVar3) {
      SVar2.lockword_ = SVar1.lockword_;
    }
  }
  if ((~SVar2.lockword_._0_1_ & 1) == 0) {
    absl::lts_20240722::base_internal::SpinLock::SlowLock((SpinLock *)param_2);
  }
  return param_1;
}

// FUN_15024cdb0 @ 15024cdb0

void FUN_15024cdb0(char *param_1)

{
  if (*param_1 == '\0') {
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::raw_log_internal::RawLog
              (kFatal,"low_level_alloc.cc",0x126,"Check %s failed: %s","left_",
               "haven\'t left Arena region");
  }
  return;
}

// FUN_15024ce00 @ 15024ce00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_15024ce00(undefined4 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined1 auStack_138 [32];
  char *local_118;
  char *local_110;
  undefined8 local_108 [30];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_138;
  if (*(ulonglong *)(param_1 + -6) != ((ulonglong)(param_1 + -8) ^ 0x4c833e95)) {
    local_110 = "bad magic number in AddToFreelist()";
    local_118 = "f->header.magic == Magic(kMagicAllocated, &f->header)";
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::raw_log_internal::RawLog
              (kFatal,"low_level_alloc.cc",0x1ee,"Check %s failed: %s");
  }
  if (*(longlong *)(param_1 + -4) != param_2) {
    local_110 = "bad arena pointer in AddToFreelist()";
    local_118 = "f->header.arena == arena";
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::raw_log_internal::RawLog
              (kFatal,"low_level_alloc.cc",0x1f0,"Check %s failed: %s");
  }
  uVar1 = FUN_15024dcb0(*(undefined8 *)(param_1 + -8),*(undefined8 *)(param_2 + 0x138),
                        param_2 + 0x140);
  *param_1 = uVar1;
  FUN_15024dbe0(param_2 + 8,param_1 + -8,local_108);
  *(ulonglong *)(param_1 + -6) = (ulonglong)(param_1 + -8) ^ 0xffffffffb37cc16a;
  FUN_15024d000(param_1 + -8);
  FUN_15024d000(local_108[0]);
  return;
}

// Alloc @ 15024cf30

/* public: static void * __ptr64 __cdecl
   absl::lts_20240722::base_internal::LowLevelAlloc::Alloc(unsigned __int64) */

void * __cdecl absl::lts_20240722::base_internal::LowLevelAlloc::Alloc(__uint64 param_1)

{
  Arena *pAVar1;
  void *pvVar2;
  
  pAVar1 = DefaultArena();
  pvVar2 = (void *)FUN_15024d4e0(param_1,pAVar1);
  return pvVar2;
}

// AllocWithArena @ 15024cf60

/* public: static void * __ptr64 __cdecl
   absl::lts_20240722::base_internal::LowLevelAlloc::AllocWithArena(unsigned __int64,struct
   absl::lts_20240722::base_internal::LowLevelAlloc::Arena * __ptr64) */

void * __cdecl
absl::lts_20240722::base_internal::LowLevelAlloc::AllocWithArena(__uint64 param_1,Arena *param_2)

{
  void *pvVar1;
  
  if (param_2 == (Arena *)0x0) {
                    /* WARNING: Subroutine does not return */
    raw_log_internal::RawLog
              (kFatal,"low_level_alloc.cc",0x26e,"Check %s failed: %s","arena != nullptr",
               "must pass a valid arena");
  }
  pvVar1 = (void *)FUN_15024d4e0();
  return pvVar1;
}

// FUN_15024cfb0 @ 15024cfb0

void FUN_15024cfb0(ulonglong param_1,longlong param_2)

{
  if (param_1 + param_2 < param_1) {
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::raw_log_internal::RawLog
              (kFatal,"low_level_alloc.cc",0x1b5,"Check %s failed: %s","sum >= a",
               "LowLevelAlloc arithmetic overflow");
  }
  return;
}

// FUN_15024d000 @ 15024d000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_15024d000(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined1 auStack_128 [32];
  undefined1 local_108 [240];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_128;
  plVar1 = (longlong *)param_1[5];
  if ((plVar1 != (longlong *)0x0) && ((longlong *)(*param_1 + (longlong)param_1) == plVar1)) {
    *param_1 = *param_1 + *plVar1;
    lVar2 = param_1[2];
    plVar1[1] = 0;
    plVar1[2] = 0;
    FUN_15024dab0(lVar2 + 8,plVar1,local_108);
    FUN_15024dab0(lVar2 + 8,param_1,local_108);
    uVar3 = FUN_15024dcb0(*param_1,*(undefined8 *)(lVar2 + 0x138),lVar2 + 0x140);
    *(undefined4 *)(param_1 + 4) = uVar3;
    FUN_15024dbe0(lVar2 + 8,param_1,local_108);
  }
  return;
}

// FUN_15024d0d0 @ 15024d0d0

void FUN_15024d0d0(void)

{
  absl::lts_20240722::base_internal::LowLevelAlloc::Arena::Arena((Arena *)&DAT_155409f28,1);
  absl::lts_20240722::base_internal::LowLevelAlloc::Arena::Arena((Arena *)&DAT_15540a070,0);
  return;
}

// DefaultArena @ 15024d100

/* public: static struct absl::lts_20240722::base_internal::LowLevelAlloc::Arena * __ptr64 __cdecl
   absl::lts_20240722::base_internal::LowLevelAlloc::DefaultArena(void) */

Arena * __cdecl absl::lts_20240722::base_internal::LowLevelAlloc::DefaultArena(void)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  if (DAT_15540a1b8 != 0xdd) {
    LOCK();
    bVar3 = DAT_15540a1b8 == 0;
    if (bVar3) {
      DAT_15540a1b8 = 0x65c2937b;
    }
    UNLOCK();
    if ((bVar3) ||
       (uVar2 = SpinLockWait((atomic<unsigned_int> *)&DAT_15540a1b8,3,
                             (SpinLockWaitTransition *)
                             &`void___cdecl_absl::lts_20240722::base_internal::CallOnceImpl<void_(__cdecl&)(void)>(std::atomic<unsigned_int>*___ptr64,absl::lts_20240722::base_internal::SchedulingMode,void_(__cdecl&)(void))'
                              ::__l2::trans,SCHEDULE_KERNEL_ONLY), uVar2 == 0)) {
      Arena::Arena((Arena *)&DAT_155409f28,1);
      Arena::Arena((Arena *)&DAT_15540a070,0);
      iVar1 = DAT_15540a1b8;
      LOCK();
      DAT_15540a1b8 = 0xdd;
      UNLOCK();
      if (iVar1 == 0x5a308d2) {
        AbslInternalSpinLockWake_lts_20240722(&DAT_15540a1b8,1);
      }
      return (Arena *)&DAT_155409f28;
    }
  }
  return (Arena *)&DAT_155409f28;
}

// DeleteArena @ 15024d1b0

/* public: static bool __cdecl absl::lts_20240722::base_internal::LowLevelAlloc::DeleteArena(struct
   absl::lts_20240722::base_internal::LowLevelAlloc::Arena * __ptr64) */

bool __cdecl absl::lts_20240722::base_internal::LowLevelAlloc::DeleteArena(Arena *param_1)

{
  uint uVar1;
  atomic<unsigned_int> aVar2;
  ulonglong *lpAddress;
  ulonglong uVar3;
  atomic<unsigned_int> *this;
  BOOL BVar4;
  SpinLock SVar5;
  Arena *pAVar6;
  uint uVar7;
  SpinLock SVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  atomic<unsigned_int> *paVar12;
  
  if (((param_1 == (Arena *)0x0) || (pAVar6 = DefaultArena(), param_1 == pAVar6)) ||
     (pAVar6 = (Arena *)FUN_15024e0c0(), param_1 == pAVar6)) {
                    /* WARNING: Subroutine does not return */
    raw_log_internal::RawLog
              (kFatal,"low_level_alloc.cc",0x181,"Check %s failed: %s",
               "arena != nullptr && arena != DefaultArena() && arena != UnhookedArena()",
               "may not delete default arena");
  }
  uVar10 = 0;
  uVar7 = *(uint *)param_1;
  if ((uVar7 & 1) == 0) {
    LOCK();
    uVar1 = *(uint *)param_1;
    bVar9 = uVar7 == uVar1;
    if (bVar9) {
      *(uint *)param_1 = uVar7 | 1;
      uVar1 = uVar7;
    }
    UNLOCK();
    if (!bVar9) {
      uVar7 = uVar1;
    }
  }
  pAVar6 = param_1;
  if ((~(byte)uVar7 & 1) == 0) {
    SpinLock::SlowLock((SpinLock *)param_1);
  }
  if (*(int *)(param_1 + 0x120) == 0) {
    lpAddress = *(ulonglong **)(param_1 + 0x30);
    while( true ) {
      if (lpAddress == (ulonglong *)0x0) {
        LOCK();
        uVar7 = *(uint *)param_1;
        *(uint *)param_1 = *(uint *)param_1 & 2;
        UNLOCK();
        if ((uVar7 & 0xfffffff8) != 0) {
          SpinLock::SlowUnlock((SpinLock *)param_1,uVar7);
        }
        uVar10 = 1;
        this = *(atomic<unsigned_int> **)(param_1 + -0x10);
        uVar11 = 0;
        SVar8.lockword_ = *this;
        if (((uint)SVar8.lockword_ & 1) == 0) {
          LOCK();
          SVar5.lockword_ = *this;
          bVar9 = SVar8.lockword_ == SVar5.lockword_;
          if (bVar9) {
            *this = SVar8.lockword_ | 1;
            SVar5.lockword_ = SVar8.lockword_;
          }
          UNLOCK();
          if (!bVar9) {
            SVar8.lockword_ = SVar5.lockword_;
          }
        }
        paVar12 = this;
        if ((~SVar8.lockword_._0_1_ & 1) == 0) {
          SpinLock::SlowLock((SpinLock *)this);
        }
        FUN_15024ce00(param_1,this);
        if ((int)this[0x48] < 1) {
                    /* WARNING: Subroutine does not return */
          raw_log_internal::RawLog
                    (kFatal,"low_level_alloc.cc",0x203,"Check %s failed: %s",
                     "arena->allocation_count > 0","nothing in arena to free",uVar10,pAVar6,uVar11,
                     paVar12);
        }
        this[0x48] = (atomic<unsigned_int>)((int)this[0x48] + -1);
        LOCK();
        aVar2 = *this;
        *this = (atomic<unsigned_int>)((uint)*this & 2);
        UNLOCK();
        if (((uint)aVar2 & 0xfffffff8) != 0) {
          SpinLock::SlowUnlock((SpinLock *)this,(uint)aVar2);
        }
        return true;
      }
      uVar3 = *lpAddress;
      *(ulonglong *)(param_1 + 0x30) = lpAddress[5];
      if (lpAddress[1] != ((ulonglong)lpAddress ^ 0xffffffffb37cc16a)) {
                    /* WARNING: Subroutine does not return */
        raw_log_internal::RawLog
                  (kFatal,"low_level_alloc.cc",0x18d,"Check %s failed: %s",
                   "region->header.magic == Magic(kMagicUnallocated, &region->header)",
                   "bad magic number in DeleteArena()",uVar10,pAVar6);
      }
      if ((Arena *)lpAddress[2] != param_1) break;
      if (uVar3 % *(ulonglong *)(param_1 + 0x128) != 0) {
                    /* WARNING: Subroutine does not return */
        raw_log_internal::RawLog
                  (kFatal,"low_level_alloc.cc",0x191,"Check %s failed: %s",
                   "size % arena->pagesize == 0","empty arena has non-page-aligned block size",
                   uVar10,pAVar6);
      }
      if ((ulonglong)lpAddress % *(ulonglong *)(param_1 + 0x128) != 0) {
                    /* WARNING: Subroutine does not return */
        raw_log_internal::RawLog
                  (kFatal,"low_level_alloc.cc",0x193,"Check %s failed: %s",
                   "reinterpret_cast<uintptr_t>(region) % arena->pagesize == 0",
                   "empty arena has non-page-aligned block",uVar10,pAVar6);
      }
      BVar4 = VirtualFree(lpAddress,0,0x8000);
      if (BVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        raw_log_internal::RawLog
                  (kFatal,"low_level_alloc.cc",0x198,"Check %s failed: %s","munmap_result != 0",
                   "LowLevelAlloc::DeleteArena: VitualFree failed",uVar10);
      }
      lpAddress = *(ulonglong **)(param_1 + 0x30);
    }
                    /* WARNING: Subroutine does not return */
    raw_log_internal::RawLog
              (kFatal,"low_level_alloc.cc",399,"Check %s failed: %s","region->header.arena == arena"
               ,"bad arena pointer in DeleteArena()",uVar10,pAVar6);
  }
  LOCK();
  uVar7 = *(uint *)param_1;
  *(uint *)param_1 = *(uint *)param_1 & 2;
  UNLOCK();
  if ((uVar7 & 0xfffffff8) != 0) {
    SpinLock::SlowUnlock((SpinLock *)param_1,uVar7);
  }
  return false;
}

// FUN_15024d4e0 @ 15024d4e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

atomic<unsigned_int> * FUN_15024d4e0(ulonglong param_1,atomic<unsigned_int> *param_2)

{
  atomic<unsigned_int> *paVar1;
  longlong *plVar2;
  atomic<unsigned_int> *paVar3;
  SpinLock SVar4;
  atomic<unsigned_int> aVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  int iVar8;
  ulonglong uVar9;
  atomic<unsigned_int> *paVar10;
  SpinLock SVar11;
  uint uVar12;
  atomic<unsigned_int> aVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined1 auStack_168 [32];
  char *local_148;
  char *local_140;
  undefined1 local_138;
  atomic<unsigned_int> *local_130;
  undefined1 local_128 [240];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_168;
  if (param_1 == 0) {
    return (atomic<unsigned_int> *)0x0;
  }
  local_138 = 0;
  SVar11.lockword_ = *param_2;
  if (((uint)SVar11.lockword_ & 1) == 0) {
    LOCK();
    SVar4.lockword_ = *param_2;
    bVar15 = SVar11.lockword_ == SVar4.lockword_;
    if (bVar15) {
      *param_2 = SVar11.lockword_ | 1;
      SVar4.lockword_ = SVar11.lockword_;
    }
    UNLOCK();
    if (!bVar15) {
      SVar11.lockword_ = SVar4.lockword_;
    }
  }
  local_130 = param_2;
  if ((~SVar11.lockword_._0_1_ & 1) == 0) {
    absl::lts_20240722::base_internal::SpinLock::SlowLock((SpinLock *)param_2);
  }
  uVar14 = param_1 + 0x20;
  if ((param_1 <= uVar14) && (uVar9 = *(longlong *)(param_2 + 0x4c) + -1 + uVar14, uVar14 <= uVar9))
  {
    uVar9 = ~(*(longlong *)(param_2 + 0x4c) - 1U) & uVar9;
    uVar14 = uVar9 - 0x28 >> 3;
    while( true ) {
      iVar8 = 0;
      for (uVar6 = uVar9; *(ulonglong *)(param_2 + 0x4e) < uVar6; uVar6 = uVar6 >> 1) {
        iVar8 = iVar8 + 1;
      }
      uVar12 = iVar8 + 1;
      if (uVar14 < (ulonglong)(longlong)(int)uVar12) {
        uVar12 = (uint)uVar14;
      }
      if ((int)uVar12 < 0x1e) {
        if ((int)uVar12 < 1) {
          local_140 = "block not big enough for even one level";
          local_148 = "level >= 1";
                    /* WARNING: Subroutine does not return */
          absl::lts_20240722::raw_log_internal::RawLog
                    (kFatal,"low_level_alloc.cc",0x94,"Check %s failed: %s");
        }
      }
      else {
        uVar12 = 0x1d;
      }
      if ((int)(uVar12 - 1) < (int)param_2[10]) {
        paVar1 = param_2 + 2;
        paVar10 = paVar1;
        while( true ) {
          if ((int)paVar10[8] <= (int)(uVar12 - 1)) {
            local_140 = "too few levels in Next()";
            local_148 = "i < prev->levels";
                    /* WARNING: Subroutine does not return */
            absl::lts_20240722::raw_log_internal::RawLog
                      (kFatal,"low_level_alloc.cc",0x1c5,"Check %s failed: %s");
          }
          paVar3 = *(atomic<unsigned_int> **)(paVar10 + (ulonglong)uVar12 * 2 + 8);
          if (paVar3 == (atomic<unsigned_int> *)0x0) break;
          if (*(ulonglong *)(paVar3 + 2) != ((ulonglong)paVar3 ^ 0xffffffffb37cc16a)) {
            local_140 = "bad magic number in Next()";
            local_148 = "next->header.magic == Magic(kMagicUnallocated, &next->header)";
                    /* WARNING: Subroutine does not return */
            absl::lts_20240722::raw_log_internal::RawLog
                      (kFatal,"low_level_alloc.cc",0x1ca,"Check %s failed: %s");
          }
          if (*(atomic<unsigned_int> **)(paVar3 + 4) != param_2) {
            local_140 = "bad arena pointer in Next()";
            local_148 = "next->header.arena == arena";
                    /* WARNING: Subroutine does not return */
            absl::lts_20240722::raw_log_internal::RawLog
                      (kFatal,"low_level_alloc.cc",0x1cb,"Check %s failed: %s");
          }
          if (paVar10 != paVar1) {
            if (paVar3 <= paVar10) {
              local_140 = "unordered freelist";
              local_148 = "prev < next";
                    /* WARNING: Subroutine does not return */
              absl::lts_20240722::raw_log_internal::RawLog
                        (kFatal,"low_level_alloc.cc",0x1cd,"Check %s failed: %s");
            }
            if (paVar3 <= (atomic<unsigned_int> *)
                          ((longlong)&paVar10->field_0x0 + *(ulonglong *)paVar10)) {
              local_140 = "malformed freelist";
              local_148 = 
              "reinterpret_cast<char *>(prev) + prev->header.size < reinterpret_cast<char *>(next)";
                    /* WARNING: Subroutine does not return */
              absl::lts_20240722::raw_log_internal::RawLog
                        (kFatal,"low_level_alloc.cc",0x1d0,"Check %s failed: %s");
            }
          }
          paVar10 = paVar3;
          if (uVar9 <= *(ulonglong *)paVar3) {
            FUN_15024dab0(paVar1,paVar3,local_128);
            if (uVar9 <= *(longlong *)(param_2 + 0x4e) + uVar9) {
              if (*(longlong *)(param_2 + 0x4e) + uVar9 <= *(ulonglong *)paVar3) {
                plVar2 = (longlong *)((longlong)&paVar3->field_0x0 + uVar9);
                *plVar2 = *(ulonglong *)paVar3 - uVar9;
                plVar2[1] = (ulonglong)plVar2 ^ 0x4c833e95;
                plVar2[2] = (longlong)param_2;
                *(ulonglong *)paVar3 = uVar9;
                FUN_15024ce00(plVar2 + 4,param_2);
              }
              *(ulonglong *)(paVar3 + 2) = (ulonglong)paVar3 ^ 0x4c833e95;
              if (*(atomic<unsigned_int> **)(paVar3 + 4) == param_2) {
                param_2[0x48] = (atomic<unsigned_int>)((int)param_2[0x48] + 1);
                LOCK();
                aVar13 = *param_2;
                *param_2 = (atomic<unsigned_int>)((uint)*param_2 & 2);
                UNLOCK();
                if (((uint)aVar13 & 0xfffffff8) != 0) {
                  absl::lts_20240722::base_internal::SpinLock::SlowUnlock
                            ((SpinLock *)param_2,(uint)aVar13);
                }
                return paVar3 + 8;
              }
              local_140 = "";
              local_148 = "s->header.arena == arena";
                    /* WARNING: Subroutine does not return */
              absl::lts_20240722::raw_log_internal::RawLog
                        (kFatal,"low_level_alloc.cc",0x25f,"Check %s failed: %s");
            }
            goto LAB_15024d93e;
          }
        }
      }
      LOCK();
      aVar13 = *param_2;
      *param_2 = (atomic<unsigned_int>)((uint)*param_2 & 2);
      UNLOCK();
      if (((uint)aVar13 & 0xfffffff8) != 0) {
        absl::lts_20240722::base_internal::SpinLock::SlowUnlock((SpinLock *)param_2,(uint)aVar13);
      }
      uVar6 = *(longlong *)(param_2 + 0x4a) * 0x10 + -1 + uVar9;
      if (uVar6 < uVar9) break;
      uVar6 = ~(*(longlong *)(param_2 + 0x4a) * 0x10 - 1U) & uVar6;
      puVar7 = VirtualAlloc((LPVOID)0x0,uVar6,0x3000,4);
      if (puVar7 == (ulonglong *)0x0) {
        local_140 = "VirtualAlloc failed";
        local_148 = "new_pages != nullptr";
                    /* WARNING: Subroutine does not return */
        absl::lts_20240722::raw_log_internal::RawLog
                  (kFatal,"low_level_alloc.cc",0x22a,"Check %s failed: %s");
      }
      aVar13 = *param_2;
      if (((uint)aVar13 & 1) == 0) {
        LOCK();
        aVar5 = *param_2;
        bVar15 = aVar13 == aVar5;
        if (bVar15) {
          *param_2 = (atomic<unsigned_int>)((uint)aVar13 | 1);
          aVar5 = aVar13;
        }
        UNLOCK();
        if (!bVar15) {
          aVar13 = aVar5;
        }
      }
      if ((~aVar13._0_1_ & 1) == 0) {
        absl::lts_20240722::base_internal::SpinLock::SlowLock((SpinLock *)param_2);
      }
      *puVar7 = uVar6;
      puVar7[1] = (ulonglong)puVar7 ^ 0x4c833e95;
      puVar7[2] = (ulonglong)param_2;
      FUN_15024ce00(puVar7 + 4,param_2);
    }
  }
LAB_15024d93e:
  local_140 = "LowLevelAlloc arithmetic overflow";
  local_148 = "sum >= a";
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::raw_log_internal::RawLog
            (kFatal,"low_level_alloc.cc",0x1b5,"Check %s failed: %s");
}

// Free @ 15024d980

/* public: static void __cdecl absl::lts_20240722::base_internal::LowLevelAlloc::Free(void *
   __ptr64) */

void __cdecl absl::lts_20240722::base_internal::LowLevelAlloc::Free(void *param_1)

{
  atomic<unsigned_int> aVar1;
  atomic<unsigned_int> *this;
  SpinLock SVar2;
  SpinLock SVar3;
  bool bVar4;
  undefined1 uVar5;
  atomic<unsigned_int> *paVar6;
  
  if (param_1 != (void *)0x0) {
    this = *(atomic<unsigned_int> **)((longlong)param_1 + -0x10);
    uVar5 = 0;
    SVar3.lockword_ = *this;
    if (((uint)SVar3.lockword_ & 1) == 0) {
      LOCK();
      SVar2.lockword_ = *this;
      bVar4 = SVar3.lockword_ == SVar2.lockword_;
      if (bVar4) {
        *this = SVar3.lockword_ | 1;
        SVar2.lockword_ = SVar3.lockword_;
      }
      UNLOCK();
      if (!bVar4) {
        SVar3.lockword_ = SVar2.lockword_;
      }
    }
    paVar6 = this;
    if ((~SVar3.lockword_._0_1_ & 1) == 0) {
      SpinLock::SlowLock((SpinLock *)this);
    }
    FUN_15024ce00(param_1,this);
    if ((int)this[0x48] < 1) {
                    /* WARNING: Subroutine does not return */
      raw_log_internal::RawLog
                (kFatal,"low_level_alloc.cc",0x203,"Check %s failed: %s",
                 "arena->allocation_count > 0","nothing in arena to free",uVar5,paVar6);
    }
    this[0x48] = (atomic<unsigned_int>)((int)this[0x48] + -1);
    LOCK();
    aVar1 = *this;
    *this = (atomic<unsigned_int>)((uint)*this & 2);
    UNLOCK();
    if (((uint)aVar1 & 0xfffffff8) != 0) {
      SpinLock::SlowUnlock((SpinLock *)this,(uint)aVar1);
    }
  }
  return;
}

// FUN_15024da50 @ 15024da50

uint FUN_15024da50(void)

{
  _SYSTEM_INFO local_38;
  
  GetSystemInfo(&local_38);
  if (local_38.dwPageSize < local_38.dwAllocationGranularity) {
    local_38.dwPageSize = local_38.dwAllocationGranularity;
  }
  return local_38.dwPageSize;
}

// FUN_15024dab0 @ 15024dab0

void FUN_15024dab0(ulonglong param_1,ulonglong param_2,longlong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar3 = *(int *)(param_1 + 0x20) + -1;
  lVar7 = (longlong)iVar3;
  if (-1 < iVar3) {
    lVar6 = lVar7 * 8 + 0x28;
    uVar4 = param_1;
    do {
      uVar2 = *(ulonglong *)(lVar6 + uVar4);
      while ((uVar1 = uVar2, uVar1 != 0 && (uVar1 < param_2))) {
        uVar4 = uVar1;
        uVar2 = *(ulonglong *)(lVar6 + uVar1);
      }
      *(ulonglong *)((longlong)param_3 + lVar6 + -0x28) = uVar4;
      lVar6 = lVar6 + -8;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
  }
  iVar3 = 0;
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(ulonglong *)(*param_3 + 0x28);
  }
  if (param_2 != uVar4) {
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::raw_log_internal::RawLog
              (kFatal,"low_level_alloc.cc",0xbc,"Check %s failed: %s","e == found",
               "element not in freelist");
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    lVar7 = 0x28;
    do {
      lVar6 = *(longlong *)((longlong)param_3 + lVar7 + -0x28);
      if (*(ulonglong *)(lVar6 + lVar7) != param_2) break;
      iVar3 = iVar3 + 1;
      *(undefined8 *)(lVar6 + lVar7) = *(undefined8 *)(param_2 + lVar7);
      lVar7 = lVar7 + 8;
    } while (iVar3 != *(int *)(param_2 + 0x20));
  }
  uVar5 = *(uint *)(param_1 + 0x20);
  while ((0 < (int)uVar5 &&
         (uVar4 = (ulonglong)uVar5, uVar5 = uVar5 - 1,
         *(longlong *)(param_1 + 0x20 + uVar4 * 8) == 0))) {
    *(uint *)(param_1 + 0x20) = uVar5;
  }
  return;
}

// FUN_15024dbe0 @ 15024dbe0

void FUN_15024dbe0(ulonglong param_1,ulonglong param_2,longlong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  
  iVar3 = *(int *)(param_1 + 0x20) + -1;
  lVar8 = (longlong)iVar3;
  if (-1 < iVar3) {
    lVar7 = lVar8 * 8 + 0x28;
    uVar5 = param_1;
    do {
      uVar2 = *(ulonglong *)(lVar7 + uVar5);
      while ((uVar1 = uVar2, uVar1 != 0 && (uVar1 < param_2))) {
        uVar5 = uVar1;
        uVar2 = *(ulonglong *)(lVar7 + uVar1);
      }
      *(ulonglong *)((longlong)param_3 + lVar7 + -0x28) = uVar5;
      lVar7 = lVar7 + -8;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
  }
  iVar3 = *(int *)(param_1 + 0x20);
  iVar4 = *(int *)(param_2 + 0x20);
  if (iVar3 < iVar4) {
    do {
      param_3[iVar3] = param_1;
      iVar3 = *(int *)(param_1 + 0x20) + 1;
      *(int *)(param_1 + 0x20) = iVar3;
      iVar4 = *(int *)(param_2 + 0x20);
    } while (iVar3 < iVar4);
  }
  iVar3 = 0;
  if (iVar4 != 0) {
    plVar6 = param_3;
    do {
      iVar3 = iVar3 + 1;
      *(undefined8 *)((param_2 - (longlong)param_3) + 0x20 + (longlong)(plVar6 + 1)) =
           *(undefined8 *)((longlong)plVar6 + *plVar6 + (0x28 - (longlong)param_3));
      *(ulonglong *)((longlong)plVar6 + *plVar6 + (0x28 - (longlong)param_3)) = param_2;
      plVar6 = plVar6 + 1;
    } while (iVar3 != *(int *)(param_2 + 0x20));
  }
  return;
}

// FUN_15024dcb0 @ 15024dcb0

ulonglong FUN_15024dcb0(ulonglong param_1,ulonglong param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  
  iVar5 = 1;
  uVar3 = param_1 - 0x28 >> 3;
  if (param_3 != (uint *)0x0) {
    uVar1 = *param_3;
    while (uVar1 = uVar1 * 0x41c64e6d + 0x3039, (uVar1 >> 0x1e & 1) == 0) {
      iVar5 = iVar5 + 1;
    }
    *param_3 = uVar1;
  }
  iVar2 = 0;
  for (; param_2 < param_1; param_1 = param_1 >> 1) {
    iVar2 = iVar2 + 1;
  }
  uVar4 = uVar3 & 0xffffffff;
  if ((ulonglong)(longlong)(iVar5 + iVar2) <= uVar3) {
    uVar4 = (ulonglong)(uint)(iVar5 + iVar2);
  }
  if ((int)uVar4 < 0x1e) {
    if ((int)uVar4 < 1) {
                    /* WARNING: Subroutine does not return */
      absl::lts_20240722::raw_log_internal::RawLog
                (kFatal,"low_level_alloc.cc",0x94,"Check %s failed: %s","level >= 1",
                 "block not big enough for even one level");
    }
  }
  else {
    uVar4 = 0x1d;
  }
  return uVar4;
}

// FUN_15024ddd0 @ 15024ddd0

void FUN_15024ddd0(undefined1 *param_1)

{
  atomic<unsigned_int> aVar1;
  atomic<unsigned_int> *this;
  
  this = *(atomic<unsigned_int> **)(param_1 + 8);
  LOCK();
  aVar1 = *this;
  *this = (atomic<unsigned_int>)((uint)*this & 2);
  UNLOCK();
  if (((uint)aVar1 & 0xfffffff8) != 0) {
    absl::lts_20240722::base_internal::SpinLock::SlowUnlock((SpinLock *)this,(uint)aVar1);
  }
  *param_1 = 1;
  return;
}

// NewArena @ 15024de10

/* public: static struct absl::lts_20240722::base_internal::LowLevelAlloc::Arena * __ptr64 __cdecl
   absl::lts_20240722::base_internal::LowLevelAlloc::NewArena(unsigned int) */

Arena * __cdecl absl::lts_20240722::base_internal::LowLevelAlloc::NewArena(uint param_1)

{
  Arena *pAVar1;
  
  pAVar1 = DefaultArena();
  if ((param_1 & 1) == 0) {
    pAVar1 = (Arena *)FUN_15024e0c0();
  }
  if (pAVar1 == (Arena *)0x0) {
                    /* WARNING: Subroutine does not return */
    raw_log_internal::RawLog
              (kFatal,"low_level_alloc.cc",0x26e,"Check %s failed: %s","arena != nullptr",
               "must pass a valid arena");
  }
  pAVar1 = (Arena *)FUN_15024d4e0(0x148,pAVar1);
  pAVar1 = (Arena *)Arena::Arena(pAVar1,param_1);
  return pAVar1;
}

// FUN_15024de90 @ 15024de90

longlong * FUN_15024de90(int param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  
  if ((int)param_2[4] <= param_1) {
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::raw_log_internal::RawLog
              (kFatal,"low_level_alloc.cc",0x1c5,"Check %s failed: %s","i < prev->levels",
               "too few levels in Next()");
  }
  plVar1 = (longlong *)param_2[(longlong)param_1 + 5];
  if (plVar1 != (longlong *)0x0) {
    if (plVar1[1] != ((ulonglong)plVar1 ^ 0xffffffffb37cc16a)) {
                    /* WARNING: Subroutine does not return */
      absl::lts_20240722::raw_log_internal::RawLog
                (kFatal,"low_level_alloc.cc",0x1ca,"Check %s failed: %s",
                 "next->header.magic == Magic(kMagicUnallocated, &next->header)",
                 "bad magic number in Next()");
    }
    if (plVar1[2] != param_3) {
                    /* WARNING: Subroutine does not return */
      absl::lts_20240722::raw_log_internal::RawLog
                (kFatal,"low_level_alloc.cc",0x1cb,"Check %s failed: %s",
                 "next->header.arena == arena","bad arena pointer in Next()");
    }
    if (param_2 != (longlong *)(param_3 + 8)) {
      if (plVar1 <= param_2) {
                    /* WARNING: Subroutine does not return */
        absl::lts_20240722::raw_log_internal::RawLog
                  (kFatal,"low_level_alloc.cc",0x1cd,"Check %s failed: %s","prev < next",
                   "unordered freelist");
      }
      if (plVar1 <= (longlong *)(*param_2 + (longlong)param_2)) {
                    /* WARNING: Subroutine does not return */
        absl::lts_20240722::raw_log_internal::RawLog
                  (kFatal,"low_level_alloc.cc",0x1d0,"Check %s failed: %s",
                   "reinterpret_cast<char *>(prev) + prev->header.size < reinterpret_cast<char *>(next)"
                   ,"malformed freelist");
      }
    }
  }
  return plVar1;
}

// FUN_15024e040 @ 15024e040

ulonglong FUN_15024e040(ulonglong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = param_2 + -1 + param_1;
  if (uVar1 < param_1) {
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::raw_log_internal::RawLog
              (kFatal,"low_level_alloc.cc",0x1b5,"Check %s failed: %s","sum >= a",
               "LowLevelAlloc arithmetic overflow");
  }
  return ~(param_2 - 1U) & uVar1;
}

// FUN_15024e0c0 @ 15024e0c0

undefined * FUN_15024e0c0(void)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  if (DAT_15540a1b8 != 0xdd) {
    LOCK();
    bVar3 = DAT_15540a1b8 == 0;
    if (bVar3) {
      DAT_15540a1b8 = 0x65c2937b;
    }
    UNLOCK();
    if ((bVar3) ||
       (uVar2 = absl::lts_20240722::base_internal::SpinLockWait
                          ((atomic<unsigned_int> *)&DAT_15540a1b8,3,
                           (SpinLockWaitTransition *)
                           &`void___cdecl_absl::lts_20240722::base_internal::CallOnceImpl<void_(__cdecl&)(void)>(std::atomic<unsigned_int>*___ptr64,absl::lts_20240722::base_internal::SchedulingMode,void_(__cdecl&)(void))'
                            ::__l2::trans,SCHEDULE_KERNEL_ONLY), uVar2 == 0)) {
      absl::lts_20240722::base_internal::LowLevelAlloc::Arena::Arena((Arena *)&DAT_155409f28,1);
      absl::lts_20240722::base_internal::LowLevelAlloc::Arena::Arena((Arena *)&DAT_15540a070,0);
      iVar1 = DAT_15540a1b8;
      LOCK();
      DAT_15540a1b8 = 0xdd;
      UNLOCK();
      if (iVar1 == 0x5a308d2) {
        AbslInternalSpinLockWake_lts_20240722(&DAT_15540a1b8,1);
      }
      return &DAT_15540a070;
    }
  }
  return &DAT_15540a070;
}

