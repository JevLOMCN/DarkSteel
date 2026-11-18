// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// Emplace @ 141992610

void __thiscall
TGrowOnlyLockFreeHash<FCallstackTracer::FEncounteredCallstackSetEntry,unsigned___int64,unsigned_int>
::Emplace(TGrowOnlyLockFreeHash<FCallstackTracer::FEncounteredCallstackSetEntry,unsigned___int64,unsigned_int>
          *this,ulong64 param_1,uint param_2,bool *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  atomic<TGrowOnlyLockFreeHash<FCallstackTracer::FEncounteredCallstackSetEntry,unsigned___int64,unsigned_int>::FHashHeader_*>
  aVar2;
  ulong64 uVar3;
  atomic<TGrowOnlyLockFreeHash<FCallstackTracer::FEncounteredCallstackSetEntry,unsigned___int64,unsigned_int>::FHashHeader_*>
  aVar4;
  atomic<TGrowOnlyLockFreeHash<FCallstackTracer::FEncounteredCallstackSetEntry,unsigned___int64,unsigned_int>::FHashHeader_*>
  aVar5;
  atomic<TGrowOnlyLockFreeHash<FCallstackTracer::FEncounteredCallstackSetEntry,unsigned___int64,unsigned_int>::FHashHeader_*>
  aVar6;
  uint uVar7;
  ulong64 *puVar8;
  atomic<TGrowOnlyLockFreeHash<FCallstackTracer::FEncounteredCallstackSetEntry,unsigned___int64,unsigned_int>::FHashHeader_*>
  aVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  
  lpCriticalSection = &this->WriteCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  aVar2 = this->HashTable;
  if (aVar2 != (atomic<TGrowOnlyLockFreeHash<FCallstackTracer::FEncounteredCallstackSetEntry,unsigned___int64,unsigned_int>::FHashHeader_*>
                )0x0) {
    uVar10 = *(int *)((longlong)aVar2 + 8) - 1;
    uVar7 = (uint)param_1 & uVar10;
    puVar8 = (ulong64 *)(((ulonglong)uVar7 + 1) * 0x10 + (longlong)aVar2);
    uVar3 = *puVar8;
    while (uVar3 != 0) {
      if (*puVar8 == param_1) {
        if (param_3 != (bool *)0x0) {
          *param_3 = true;
        }
        goto LAB_14199280a;
      }
      uVar7 = uVar7 + 1 & uVar10;
      puVar8 = (ulong64 *)(((ulonglong)uVar7 + 1) * 0x10 + (longlong)aVar2);
      uVar3 = *puVar8;
    }
  }
  aVar2 = this->HashTable;
  piVar1 = (int *)((longlong)aVar2 + 8);
  if (aVar2 == (atomic<TGrowOnlyLockFreeHash<FCallstackTracer::FEncounteredCallstackSetEntry,unsigned___int64,unsigned_int>::FHashHeader_*>
                )0x0) {
    iVar11 = 0x400;
  }
  else {
    aVar6 = aVar2;
    if (*(int *)((longlong)aVar2 + 0xc) < *piVar1 / 2) goto LAB_1419927a9;
    iVar11 = *piVar1 * 2;
  }
  aVar6 = (atomic<TGrowOnlyLockFreeHash<FCallstackTracer::FEncounteredCallstackSetEntry,unsigned___int64,unsigned_int>::FHashHeader_*>
           )(**(code **)((longlong)*this->Malloc + 0x28))
                      (this->Malloc,(longlong)iVar11 * 0x10 + 0x10,0);
  *(int *)((longlong)aVar6 + 8) = iVar11;
  iVar12 = 0;
  *(atomic<TGrowOnlyLockFreeHash<FCallstackTracer::FEncounteredCallstackSetEntry,unsigned___int64,unsigned_int>::FHashHeader_*>
    *)aVar6 = aVar2;
  *(undefined4 *)((longlong)aVar6 + 0xc) = 0;
  memset((atomic<TGrowOnlyLockFreeHash<FCallstackTracer::FEncounteredCallstackSetEntry,unsigned___int64,unsigned_int>::FHashHeader_*>
          *)((longlong)aVar6 + 0x10),0,(longlong)iVar11 * 0x10);
  if ((aVar2 != (atomic<TGrowOnlyLockFreeHash<FCallstackTracer::FEncounteredCallstackSetEntry,unsigned___int64,unsigned_int>::FHashHeader_*>
                 )0x0) && (0 < *piVar1)) {
    do {
      aVar9 = (atomic<TGrowOnlyLockFreeHash<FCallstackTracer::FEncounteredCallstackSetEntry,unsigned___int64,unsigned_int>::FHashHeader_*>
               )((longlong)aVar2 + 0x10);
      if (*(atomic<TGrowOnlyLockFreeHash<FCallstackTracer::FEncounteredCallstackSetEntry,unsigned___int64,unsigned_int>::FHashHeader_*>
            *)aVar9 !=
          (atomic<TGrowOnlyLockFreeHash<FCallstackTracer::FEncounteredCallstackSetEntry,unsigned___int64,unsigned_int>::FHashHeader_*>
           )0x0) {
        aVar4 = *(atomic<TGrowOnlyLockFreeHash<FCallstackTracer::FEncounteredCallstackSetEntry,unsigned___int64,unsigned_int>::FHashHeader_*>
                  *)aVar9;
        uVar10 = *(int *)((longlong)aVar6 + 8) - 1;
        uVar7 = aVar4._0_4_ & uVar10;
        aVar5 = *(atomic<TGrowOnlyLockFreeHash<FCallstackTracer::FEncounteredCallstackSetEntry,unsigned___int64,unsigned_int>::FHashHeader_*>
                  *)((longlong)aVar6 + ((longlong)(int)uVar7 + 1) * 0x10);
        while (aVar5 != (atomic<TGrowOnlyLockFreeHash<FCallstackTracer::FEncounteredCallstackSetEntry,unsigned___int64,unsigned_int>::FHashHeader_*>
                         )0x0) {
          uVar7 = uVar7 + 1 & uVar10;
          aVar5 = *(atomic<TGrowOnlyLockFreeHash<FCallstackTracer::FEncounteredCallstackSetEntry,unsigned___int64,unsigned_int>::FHashHeader_*>
                    *)((longlong)aVar6 + ((longlong)(int)uVar7 + 1) * 0x10);
        }
        *(undefined4 *)
         ((atomic<TGrowOnlyLockFreeHash<FCallstackTracer::FEncounteredCallstackSetEntry,unsigned___int64,unsigned_int>::FHashHeader_*>
           *)((longlong)aVar6 + 8) + ((longlong)(int)uVar7 + 1) * 2) =
             *(undefined4 *)((longlong)aVar2 + 0x18);
        *(atomic<TGrowOnlyLockFreeHash<FCallstackTracer::FEncounteredCallstackSetEntry,unsigned___int64,unsigned_int>::FHashHeader_*>
          *)((longlong)aVar6 + ((longlong)(int)uVar7 + 1) * 0x10) = aVar4;
        *(int *)((longlong)aVar6 + 0xc) = *(int *)((longlong)aVar6 + 0xc) + 1;
      }
      iVar12 = iVar12 + 1;
      aVar2 = aVar9;
    } while (iVar12 < *piVar1);
  }
  this->HashTable = aVar6;
LAB_1419927a9:
  uVar10 = *(int *)((longlong)aVar6 + 8) - 1;
  uVar7 = uVar10 & (uint)param_1;
  aVar2 = *(atomic<TGrowOnlyLockFreeHash<FCallstackTracer::FEncounteredCallstackSetEntry,unsigned___int64,unsigned_int>::FHashHeader_*>
            *)((longlong)aVar6 + ((longlong)(int)uVar7 + 1) * 0x10);
  while (aVar2 != (atomic<TGrowOnlyLockFreeHash<FCallstackTracer::FEncounteredCallstackSetEntry,unsigned___int64,unsigned_int>::FHashHeader_*>
                   )0x0) {
    uVar7 = uVar7 + 1 & uVar10;
    aVar2 = *(atomic<TGrowOnlyLockFreeHash<FCallstackTracer::FEncounteredCallstackSetEntry,unsigned___int64,unsigned_int>::FHashHeader_*>
              *)((longlong)aVar6 + ((longlong)(int)uVar7 + 1) * 0x10);
  }
  *(uint *)((atomic<TGrowOnlyLockFreeHash<FCallstackTracer::FEncounteredCallstackSetEntry,unsigned___int64,unsigned_int>::FHashHeader_*>
             *)((longlong)aVar6 + 8) + ((longlong)(int)uVar7 + 1) * 2) = param_2;
  *(ulong64 *)((longlong)aVar6 + ((longlong)(int)uVar7 + 1) * 0x10) = param_1;
  *(int *)((longlong)aVar6 + 0xc) = *(int *)((longlong)aVar6 + 0xc) + 1;
  if (param_3 != (bool *)0x0) {
    *param_3 = false;
  }
LAB_14199280a:
                    /* WARNING: Could not recover jumptable at 0x000141992818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// Emplace @ 141992830

void __thiscall
TGrowOnlyLockFreeHash<FBacktracer::FFunctionLookupSetEntry,unsigned___int64,int>::Emplace
          (TGrowOnlyLockFreeHash<FBacktracer::FFunctionLookupSetEntry,unsigned___int64,int> *this,
          ulong64 param_1,int param_2,bool *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  atomic<TGrowOnlyLockFreeHash<FBacktracer::FFunctionLookupSetEntry,unsigned___int64,int>::FHashHeader_*>
  aVar2;
  longlong lVar3;
  longlong lVar4;
  atomic<TGrowOnlyLockFreeHash<FBacktracer::FFunctionLookupSetEntry,unsigned___int64,int>::FHashHeader_*>
  aVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  ulonglong *puVar10;
  uint uVar11;
  
  lpCriticalSection = &this->WriteCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  aVar2 = this->HashTable;
  if (aVar2 != (atomic<TGrowOnlyLockFreeHash<FBacktracer::FFunctionLookupSetEntry,unsigned___int64,int>::FHashHeader_*>
                )0x0) {
    uVar11 = *(int *)((longlong)aVar2 + 8) - 1;
    uVar7 = param_1 * 0x200000 + ~param_1;
    uVar7 = (uVar7 >> 0x18 ^ uVar7) * 0x109;
    uVar7 = (uVar7 >> 0xe ^ uVar7) * 0x15;
    uVar6 = ((uint)(uVar7 >> 0x1c) ^ (uint)uVar7) * -0x7fffffff & uVar11;
    lVar4 = (ulonglong)uVar6 + 2;
    lVar3 = *(longlong *)((longlong)aVar2 + lVar4 * 8);
    while (lVar3 != 0) {
      if ((*(ulonglong *)((longlong)aVar2 + lVar4 * 8) & 0xffffffffffff) == param_1) {
        if (param_3 != (bool *)0x0) {
          *param_3 = true;
        }
        goto LAB_141992a13;
      }
      uVar6 = uVar6 + 1 & uVar11;
      lVar4 = (ulonglong)uVar6 + 2;
      lVar3 = *(longlong *)((longlong)aVar2 + lVar4 * 8);
    }
  }
  aVar2 = this->HashTable;
  piVar1 = (int *)((longlong)aVar2 + 8);
  if (aVar2 == (atomic<TGrowOnlyLockFreeHash<FBacktracer::FFunctionLookupSetEntry,unsigned___int64,int>::FHashHeader_*>
                )0x0) {
    iVar8 = 0x400;
  }
  else {
    aVar5 = aVar2;
    if (*(int *)((longlong)aVar2 + 0xc) < *piVar1 / 2) goto LAB_1419929ea;
    iVar8 = *piVar1 * 2;
  }
  aVar5 = (atomic<TGrowOnlyLockFreeHash<FBacktracer::FFunctionLookupSetEntry,unsigned___int64,int>::FHashHeader_*>
           )(**(code **)((longlong)*this->Malloc + 0x28))(this->Malloc,(longlong)iVar8 * 8 + 0x10,0)
  ;
  *(int *)((longlong)aVar5 + 8) = iVar8;
  iVar9 = 0;
  *(atomic<TGrowOnlyLockFreeHash<FBacktracer::FFunctionLookupSetEntry,unsigned___int64,int>::FHashHeader_*>
    *)aVar5 = aVar2;
  *(int *)((longlong)aVar5 + 0xc) = 0;
  memset((FFunctionLookupSetEntry *)((longlong)aVar5 + 0x10),0,(longlong)iVar8 * 8);
  if ((aVar2 != (atomic<TGrowOnlyLockFreeHash<FBacktracer::FFunctionLookupSetEntry,unsigned___int64,int>::FHashHeader_*>
                 )0x0) && (0 < *piVar1)) {
    puVar10 = (ulonglong *)((longlong)aVar2 + 0x10);
    do {
      if (*puVar10 != 0) {
        HashInsertInternal((FHashHeader *)aVar5,*puVar10 & 0xffffffffffff,
                           (int)(short)(*puVar10 >> 0x30));
      }
      iVar9 = iVar9 + 1;
      puVar10 = puVar10 + 1;
    } while (iVar9 < *piVar1);
  }
  this->HashTable = aVar5;
LAB_1419929ea:
  HashInsertInternal((FHashHeader *)aVar5,param_1,param_2);
  if (param_3 != (bool *)0x0) {
    *param_3 = false;
  }
LAB_141992a13:
                    /* WARNING: Could not recover jumptable at 0x000141992a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// Emplace @ 141992a40

void __thiscall
TGrowOnlyLockFreeHash<FTagTrace::FTagNameSetEntry,int,bool>::Emplace
          (TGrowOnlyLockFreeHash<FTagTrace::FTagNameSetEntry,int,bool> *this,int param_1,
          bool param_2,bool *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  atomic<TGrowOnlyLockFreeHash<FTagTrace::FTagNameSetEntry,int,bool>::FHashHeader_*> aVar2;
  atomic<TGrowOnlyLockFreeHash<FTagTrace::FTagNameSetEntry,int,bool>::FHashHeader_*> aVar3;
  uint uVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  lpCriticalSection = &this->WriteCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  aVar2 = this->HashTable;
  if (aVar2 != (atomic<TGrowOnlyLockFreeHash<FTagTrace::FTagNameSetEntry,int,bool>::FHashHeader_*>)
               0x0) {
    uVar7 = *(int *)((longlong)aVar2 + 8) - 1;
    uVar4 = uVar7 & param_1;
    lVar5 = (ulonglong)uVar4 + 4;
    iVar8 = *(int *)((longlong)aVar2 + lVar5 * 4);
    while (iVar8 != 0) {
      if (*(int *)((longlong)aVar2 + lVar5 * 4) == param_1) {
        if (param_3 != (bool *)0x0) {
          *param_3 = true;
        }
        goto LAB_141992c08;
      }
      uVar4 = uVar4 + 1 & uVar7;
      lVar5 = (ulonglong)uVar4 + 4;
      iVar8 = *(int *)((longlong)aVar2 + lVar5 * 4);
    }
  }
  aVar2 = this->HashTable;
  piVar1 = (int *)((longlong)aVar2 + 8);
  if (aVar2 == (atomic<TGrowOnlyLockFreeHash<FTagTrace::FTagNameSetEntry,int,bool>::FHashHeader_*>)
               0x0) {
    iVar8 = 0x400;
  }
  else {
    aVar3 = aVar2;
    if (*(int *)((longlong)aVar2 + 0xc) < *piVar1 / 2) goto LAB_141992bb9;
    iVar8 = *piVar1 * 2;
  }
  aVar3 = (atomic<TGrowOnlyLockFreeHash<FTagTrace::FTagNameSetEntry,int,bool>::FHashHeader_*>)
          (**(code **)((longlong)*this->Malloc + 0x28))(this->Malloc,(longlong)iVar8 * 4 + 0x14,0);
  *(int *)((longlong)aVar3 + 8) = iVar8;
  iVar9 = 0;
  *(atomic<TGrowOnlyLockFreeHash<FTagTrace::FTagNameSetEntry,int,bool>::FHashHeader_*> *)aVar3 =
       aVar2;
  *(undefined4 *)((longlong)aVar3 + 0xc) = 0;
  memset((atomic<TGrowOnlyLockFreeHash<FTagTrace::FTagNameSetEntry,int,bool>::FHashHeader_*> *)
         ((longlong)aVar3 + 0x10),0,(longlong)iVar8 * 4);
  if ((aVar2 != (atomic<TGrowOnlyLockFreeHash<FTagTrace::FTagNameSetEntry,int,bool>::FHashHeader_*>)
                0x0) && (0 < *piVar1)) {
    puVar6 = (uint *)((longlong)aVar2 + 0x10);
    do {
      if (*puVar6 != 0) {
        uVar7 = *(int *)((longlong)aVar3 + 8) - 1;
        uVar4 = uVar7 & *puVar6;
        iVar8 = *(int *)((longlong)
                         &((atomic<TGrowOnlyLockFreeHash<FTagTrace::FTagNameSetEntry,int,bool>::FHashHeader_*>
                            *)((longlong)aVar3 + 0x10))->field_0x0 + (longlong)(int)uVar4 * 4);
        while (iVar8 != 0) {
          uVar4 = uVar4 + 1 & uVar7;
          iVar8 = *(int *)((longlong)
                           &((atomic<TGrowOnlyLockFreeHash<FTagTrace::FTagNameSetEntry,int,bool>::FHashHeader_*>
                              *)((longlong)aVar3 + 0x10))->field_0x0 + (longlong)(int)uVar4 * 4);
        }
        *(uint *)((longlong)
                  &((atomic<TGrowOnlyLockFreeHash<FTagTrace::FTagNameSetEntry,int,bool>::FHashHeader_*>
                     *)((longlong)aVar3 + 0x10))->field_0x0 + (longlong)(int)uVar4 * 4) = *puVar6;
        *(int *)((longlong)aVar3 + 0xc) = *(int *)((longlong)aVar3 + 0xc) + 1;
      }
      iVar9 = iVar9 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar9 < *piVar1);
  }
  this->HashTable = aVar3;
LAB_141992bb9:
  uVar7 = *(int *)((longlong)aVar3 + 8) - 1;
  uVar4 = uVar7 & param_1;
  iVar8 = *(int *)((longlong)
                   &((atomic<TGrowOnlyLockFreeHash<FTagTrace::FTagNameSetEntry,int,bool>::FHashHeader_*>
                      *)((longlong)aVar3 + 0x10))->field_0x0 + (longlong)(int)uVar4 * 4);
  while (iVar8 != 0) {
    uVar4 = uVar4 + 1 & uVar7;
    iVar8 = *(int *)((longlong)
                     &((atomic<TGrowOnlyLockFreeHash<FTagTrace::FTagNameSetEntry,int,bool>::FHashHeader_*>
                        *)((longlong)aVar3 + 0x10))->field_0x0 + (longlong)(int)uVar4 * 4);
  }
  *(int *)((longlong)
           &((atomic<TGrowOnlyLockFreeHash<FTagTrace::FTagNameSetEntry,int,bool>::FHashHeader_*> *)
            ((longlong)aVar3 + 0x10))->field_0x0 + (longlong)(int)uVar4 * 4) = param_1;
  *(int *)((longlong)aVar3 + 0xc) = *(int *)((longlong)aVar3 + 0xc) + 1;
  if (param_3 != (bool *)0x0) {
    *param_3 = false;
  }
LAB_141992c08:
                    /* WARNING: Could not recover jumptable at 0x000141992c15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// HashInsertInternal @ 141995ee0

void __cdecl
TGrowOnlyLockFreeHash<FBacktracer::FFunctionLookupSetEntry,unsigned___int64,int>::HashInsertInternal
          (FHashHeader *param_1,ulong64 param_2,int param_3)

{
  FFunctionLookupSetEntry FVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = param_2 * 0x200000 + ~param_2;
  uVar3 = param_1->TableSize - 1;
  uVar4 = (uVar4 >> 0x18 ^ uVar4) * 0x109;
  uVar4 = (uVar4 >> 0xe ^ uVar4) * 0x15;
  uVar2 = ((uint)(uVar4 >> 0x1c) ^ (uint)uVar4) * -0x7fffffff & uVar3;
  FVar1.Data = param_1->Elements[(int)uVar2].Data;
  while (FVar1.Data != (atomic<unsigned___int64>)0x0) {
    uVar2 = uVar2 + 1 & uVar3;
    FVar1.Data = param_1->Elements[(int)uVar2].Data;
  }
  param_1->Elements[(int)uVar2].Data =
       (atomic<unsigned___int64>)((longlong)param_3 << 0x30 | param_2);
  param_1->Used = param_1->Used + 1;
  return;
}

