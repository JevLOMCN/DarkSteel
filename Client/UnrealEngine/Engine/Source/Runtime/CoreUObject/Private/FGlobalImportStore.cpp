// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 26

// FGlobalImportStore @ 142308a30

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FGlobalImportStore * __thiscall
FGlobalImportStore::FGlobalImportStore(FGlobalImportStore *this,FAsyncLoadingThread2 *param_1)

{
  TMap<FPackageId,FLoadedPackageRef,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FLoadedPackageRef,0>_>
  *this_00;
  undefined1 *puVar1;
  undefined1 *puVar2;
  TMap<FPackageObjectIndex,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageObjectIndex,UObject_*,0>_>
  *this_01;
  undefined1 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  int iVar15;
  uint local_88;
  uint uStack_84;
  uint uStack_74;
  uint uStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  
  this->AsyncLoadingThread = param_1;
  uVar9 = 0;
  this_01 = &this->ScriptObjects;
  this_00 = &this->Packages;
  (this->PackagesLock).Mutex.Mutex.Ptr = (void *)0x0;
  puVar1 = &(this->Packages).field_0x48;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->Packages).field_0x8 = 0;
  *(undefined8 *)&(this->Packages).field_0x20 = 0;
  *(undefined4 *)&(this->Packages).field_0x28 = 0;
  *(undefined4 *)&(this->Packages).field_0x2c = 0x80;
  *(undefined4 *)&(this->Packages).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Packages).field_0x34 = 0;
  *(undefined8 *)&(this->Packages).field_0x40 = 0;
  *(undefined4 *)puVar1 = 0;
  *(undefined8 *)&this->PackageCells = 0;
  *(undefined8 *)&(this->PackageCells).field_0x8 = 0;
  *(undefined8 *)&(this->PackageCells).field_0x20 = 0;
  *(undefined4 *)&(this->PackageCells).field_0x28 = 0;
  *(undefined4 *)&(this->PackageCells).field_0x2c = 0x80;
  *(undefined4 *)&(this->PackageCells).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PackageCells).field_0x34 = 0;
  *(undefined8 *)&(this->PackageCells).field_0x40 = 0;
  *(undefined4 *)&(this->PackageCells).field_0x48 = 0;
  (this->PackageCellsMutex).State = (atomic<unsigned_char>)0x0;
  puVar2 = &(this->ScriptObjects).field_0x48;
  *(undefined8 *)&this_01->field_0x0 = 0;
  *(undefined8 *)&(this->ScriptObjects).field_0x8 = 0;
  *(undefined8 *)&(this->ScriptObjects).field_0x20 = 0;
  *(undefined4 *)&(this->ScriptObjects).field_0x28 = 0;
  *(undefined4 *)&(this->ScriptObjects).field_0x2c = 0x80;
  *(undefined4 *)&(this->ScriptObjects).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ScriptObjects).field_0x34 = 0;
  *(undefined8 *)&(this->ScriptObjects).field_0x40 = 0;
  *(undefined4 *)puVar2 = 0;
  *(undefined8 *)&this->ScriptCells = 0;
  *(undefined8 *)&(this->ScriptCells).field_0x8 = 0;
  *(undefined8 *)&(this->ScriptCells).field_0x20 = 0;
  *(undefined4 *)&(this->ScriptCells).field_0x28 = 0;
  *(undefined4 *)&(this->ScriptCells).field_0x2c = 0x80;
  *(undefined4 *)&(this->ScriptCells).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ScriptCells).field_0x34 = 0;
  *(undefined8 *)&(this->ScriptCells).field_0x40 = 0;
  *(undefined4 *)&(this->ScriptCells).field_0x48 = 0;
  (this->ScriptObjectsLock).Mutex.Mutex.Ptr = (void *)0x0;
  *(undefined8 *)&this->ObjectIndexToPublicExport = 0;
  *(undefined8 *)&(this->ObjectIndexToPublicExport).field_0x8 = 0;
  *(undefined8 *)&(this->ObjectIndexToPublicExport).field_0x20 = 0;
  *(undefined4 *)&(this->ObjectIndexToPublicExport).field_0x28 = 0;
  *(undefined4 *)&(this->ObjectIndexToPublicExport).field_0x2c = 0x80;
  *(undefined4 *)&(this->ObjectIndexToPublicExport).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ObjectIndexToPublicExport).field_0x34 = 0;
  *(undefined8 *)&(this->ObjectIndexToPublicExport).field_0x40 = 0;
  *(undefined4 *)&(this->ObjectIndexToPublicExport).field_0x48 = 0;
  *(undefined8 *)&(this->CookedScriptObjectsDebug).Objects = 0;
  *(undefined8 *)&(this->CookedScriptObjectsDebug).Objects.field_0x8 = 0;
  *(undefined8 *)&(this->CookedScriptObjectsDebug).Objects.field_0x20 = 0;
  *(undefined4 *)&(this->CookedScriptObjectsDebug).Objects.field_0x28 = 0;
  *(undefined4 *)&(this->CookedScriptObjectsDebug).Objects.field_0x2c = 0x80;
  *(undefined4 *)&(this->CookedScriptObjectsDebug).Objects.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CookedScriptObjectsDebug).Objects.field_0x34 = 0;
  *(undefined8 *)&(this->CookedScriptObjectsDebug).Objects.field_0x40 = 0;
  *(undefined4 *)&(this->CookedScriptObjectsDebug).Objects.field_0x48 = 0;
  TMulticastDelegateRegistration<void___cdecl(FName,enum_ECompiledInUObjectsRegisteredStatus),FDefaultDelegateUserPolicy>
  ::AddRaw<FCookedScriptObjectsDebug>
            (&FCoreUObjectDelegates::CompiledInUObjectsRegisteredDelegate,
             (FCookedScriptObjectsDebug *)&stack0x00000018,
             (pmf_d0eaee6b)&this->CookedScriptObjectsDebug);
  if ((uint)(*(int *)&(this->Packages).field_0x8 - *(int *)&(this->Packages).field_0x34) < 0x8000) {
    TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this_00,0x8000);
    for (lVar4 = 0x3f; 0x800fUL >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
    uVar11 = 1 << ((byte)lVar4 & 0x1f);
    if ((*(int *)puVar1 == 0) || (*(int *)puVar1 < (int)uVar11)) {
      puVar3 = &(this->Packages).field_0x38;
      *(uint *)puVar1 = uVar11;
      if (*(longlong *)&(this->Packages).field_0x40 != 0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&(this->Packages).field_0x40,0,0,4);
      }
      if (uVar11 != 0) {
        uVar12 = uVar11;
        if (uVar11 < 2) {
          if (*(longlong *)&(this->Packages).field_0x40 != 0) {
            uVar12 = 0;
            goto LAB_142308c49;
          }
        }
        else {
LAB_142308c49:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&(this->Packages).field_0x40,0,uVar12,4);
        }
        if (0 < (int)uVar11) {
          uVar13 = (ulonglong)uVar11;
          uVar10 = uVar9;
          do {
            puVar8 = *(undefined1 **)&(this->Packages).field_0x40;
            puVar7 = puVar3;
            if (puVar8 != (undefined1 *)0x0) {
              puVar7 = puVar8;
            }
            uVar5 = uVar10 & (longlong)(int)uVar11 - 1U;
            uVar10 = uVar10 + 1;
            *(undefined4 *)(puVar7 + uVar5 * 4) = 0xffffffff;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
      }
      if (*(int *)puVar1 != 0) {
        uVar11 = *(uint *)&(this->Packages).field_0x28;
        local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Packages).field_0x10;
        local_88 = 0;
        uStack_84 = 1;
        uStack_74 = 0;
        uStack_70 = 0;
        uVar10 = uVar9;
        if (uVar11 != 0) {
          puVar14 = *(uint **)&(this->Packages).field_0x20;
          if (puVar14 == (uint *)0x0) {
            puVar14 = (uint *)local_60.Array;
          }
          uVar12 = *puVar14;
          uVar13 = uVar9;
          while (uVar12 == 0) {
            uStack_70 = (int)uVar13 + 0x20;
            uVar13 = (ulonglong)uStack_70;
            iVar6 = (int)uVar10;
            local_88 = iVar6 + 1;
            uVar10 = (ulonglong)local_88;
            if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_88)
            goto LAB_142308d39;
            uVar12 = puVar14[(longlong)iVar6 + 1];
          }
          uStack_84 = -uVar12 & uVar12;
          uVar10 = (ulonglong)uStack_84 * 2 + 1;
          lVar4 = 0x3f;
          if (uVar10 != 0) {
            for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          uStack_74 = (int)lVar4 + -1 + uStack_70;
          uVar10 = (ulonglong)uStack_74;
          if ((int)uVar11 < (int)uStack_74) {
LAB_142308d39:
            uVar10 = (ulonglong)uVar11;
            uStack_74 = uVar11;
          }
        }
        local_60._padding_ = CONCAT44(uStack_84,local_88);
        local_60.CurrentBitIndex = uStack_74;
        local_60.UnvisitedBitMask = 0xffffffff;
        local_60._28_4_ = uStack_6c;
        local_60.BaseBitIndex = uStack_70;
        if ((int)uVar10 < (int)uVar11) {
          do {
            iVar6 = (int)uVar10;
            uVar11 = *(int *)puVar1 - 1U &
                     *(uint *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar6 * 0x48);
            lVar4 = *(longlong *)&this_00->field_0x0 + (longlong)iVar6 * 0x48;
            *(uint *)(lVar4 + 0x44) = uVar11;
            puVar8 = *(undefined1 **)&(this->Packages).field_0x40;
            puVar7 = puVar3;
            if (puVar8 != (undefined1 *)0x0) {
              puVar7 = puVar8;
            }
            uVar10 = (longlong)*(int *)puVar1 - 1U & (longlong)(int)uVar11;
            *(undefined4 *)(lVar4 + 0x40) = *(undefined4 *)(puVar7 + uVar10 * 4);
            *(int *)(puVar7 + uVar10 * 4) = iVar6;
            local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
            uVar10 = (ulonglong)(uint)local_60.CurrentBitIndex;
          } while (local_60.CurrentBitIndex < (local_60.Array)->NumBits);
        }
      }
    }
  }
  if (0x7fff < (uint)(*(int *)&(this->ScriptObjects).field_0x8 -
                     *(int *)&(this->ScriptObjects).field_0x34)) goto LAB_142308fc3;
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_01,0x8000);
  for (lVar4 = 0x3f; 0x800fUL >> lVar4 == 0; lVar4 = lVar4 + -1) {
  }
  uVar11 = 1 << ((byte)lVar4 & 0x1f);
  if ((*(int *)puVar2 != 0) && ((int)uVar11 <= *(int *)puVar2)) goto LAB_142308fc3;
  puVar1 = &(this->ScriptObjects).field_0x38;
  *(uint *)puVar2 = uVar11;
  puVar3 = &(this->ScriptObjects).field_0x40;
  if (*(longlong *)&(this->ScriptObjects).field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)puVar3,0,0,4);
  }
  if (uVar11 != 0) {
    uVar12 = uVar11;
    if (uVar11 < 2) {
      if (*(longlong *)&(this->ScriptObjects).field_0x40 != 0) {
        uVar12 = 0;
        goto LAB_142308e52;
      }
    }
    else {
LAB_142308e52:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)puVar3,0,uVar12,4);
    }
    if (0 < (int)uVar11) {
      uVar13 = (ulonglong)uVar11;
      uVar10 = uVar9;
      do {
        puVar3 = *(undefined1 **)&(this->ScriptObjects).field_0x40;
        puVar8 = puVar1;
        if (puVar3 != (undefined1 *)0x0) {
          puVar8 = puVar3;
        }
        uVar5 = uVar10 & (longlong)(int)uVar11 - 1U;
        uVar10 = uVar10 + 1;
        *(undefined4 *)(puVar8 + uVar5 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
  if (*(int *)puVar2 != 0) {
    uVar11 = *(uint *)&(this->ScriptObjects).field_0x28;
    local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ScriptObjects).field_0x10;
    local_88 = 0;
    uStack_84 = 1;
    uStack_74 = 0;
    uStack_70 = 0;
    if (uVar11 != 0) {
      puVar14 = *(uint **)&(this->ScriptObjects).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)local_60.Array;
      }
      uVar12 = *puVar14;
      uVar10 = uVar9;
      while (uVar12 == 0) {
        iVar6 = (int)uVar9;
        uStack_70 = (int)uVar10 + 0x20;
        uVar10 = (ulonglong)uStack_70;
        local_88 = iVar6 + 1;
        uVar9 = (ulonglong)local_88;
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_88)
        goto LAB_142308f3b;
        uVar12 = puVar14[(longlong)iVar6 + 1];
      }
      uStack_84 = -uVar12 & uVar12;
      uVar9 = (ulonglong)uStack_84 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_74 = (int)lVar4 + -1 + uStack_70;
      uVar9 = (ulonglong)uStack_74;
      if ((int)uVar11 < (int)uStack_74) {
LAB_142308f3b:
        uVar9 = (ulonglong)uVar11;
        uStack_74 = uVar11;
      }
    }
    local_60._padding_ = CONCAT44(uStack_84,local_88);
    local_60.CurrentBitIndex = uStack_74;
    local_60.UnvisitedBitMask = 0xffffffff;
    local_60._28_4_ = uStack_6c;
    local_60.BaseBitIndex = uStack_70;
    if ((int)uVar9 < (int)uVar11) {
      do {
        iVar6 = (int)uVar9;
        uVar11 = *(int *)puVar2 - 1U &
                 *(uint *)(*(longlong *)&this_01->field_0x0 + (longlong)iVar6 * 0x18);
        lVar4 = *(longlong *)&this_01->field_0x0 + (longlong)iVar6 * 0x18;
        *(uint *)(lVar4 + 0x14) = uVar11;
        puVar3 = *(undefined1 **)&(this->ScriptObjects).field_0x40;
        puVar8 = puVar1;
        if (puVar3 != (undefined1 *)0x0) {
          puVar8 = puVar3;
        }
        uVar9 = (longlong)*(int *)puVar2 - 1U & (longlong)(int)uVar11;
        *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)(puVar8 + uVar9 * 4);
        *(int *)(puVar8 + uVar9 * 4) = iVar6;
        local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
        uVar9 = (ulonglong)(uint)local_60.CurrentBitIndex;
      } while (local_60.CurrentBitIndex < (local_60.Array)->NumBits);
    }
  }
LAB_142308fc3:
  if ((uint)(*(int *)&(this->ObjectIndexToPublicExport).field_0x8 -
            *(int *)&(this->ObjectIndexToPublicExport).field_0x34) < 0x8000) {
    TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)&this->ObjectIndexToPublicExport,0x8000);
    for (lVar4 = 0x3f; 0x800fUL >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
    iVar6 = *(int *)&(this->ObjectIndexToPublicExport).field_0x48;
    iVar15 = 1 << ((byte)lVar4 & 0x1f);
    if ((iVar6 == 0) || (iVar6 < iVar15)) {
      *(int *)&(this->ObjectIndexToPublicExport).field_0x48 = iVar15;
      TSet<TTuple<int,FPublicExportKey>,TDefaultMapHashableKeyFuncs<int,FPublicExportKey,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<int,FPublicExportKey>,TDefaultMapHashableKeyFuncs<int,FPublicExportKey,0>,FDefaultSetAllocator>
                *)&this->ObjectIndexToPublicExport);
    }
  }
  return this;
}

// ~FGlobalImportStore @ 14230a930

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FGlobalImportStore::~FGlobalImportStore(FGlobalImportStore *this)

{
  void *pvVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FCoreUObjectDelegates::CompiledInUObjectsRegisteredDelegate,
             &this->CookedScriptObjectsDebug);
  *(undefined4 *)&(this->CookedScriptObjectsDebug).Objects.field_0x48 = 0;
  pvVar1 = *(void **)&(this->CookedScriptObjectsDebug).Objects.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FPackageObjectIndex,TTuple<FMinimalName,FPackageObjectIndex>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPackageObjectIndex,TTuple<FMinimalName,FPackageObjectIndex>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPackageObjectIndex,TTuple<FMinimalName,FPackageObjectIndex>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CookedScriptObjectsDebug);
  *(undefined4 *)&(this->ObjectIndexToPublicExport).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ObjectIndexToPublicExport).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FPublicExportKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FPublicExportKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FPublicExportKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ObjectIndexToPublicExport);
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->ScriptObjectsLock);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->ScriptObjectsLock);
  }
  *(undefined4 *)&(this->ScriptCells).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ScriptCells).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FPackageObjectIndex,Verse::VCell_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPackageObjectIndex,Verse::VCell_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPackageObjectIndex,Verse::VCell_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ScriptCells);
  *(undefined4 *)&(this->ScriptObjects).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ScriptObjects).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FPackageObjectIndex,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPackageObjectIndex,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPackageObjectIndex,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ScriptObjects);
  *(undefined4 *)&(this->PackageCells).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PackageCells).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FPackageId,FLoadedPackageCellsRef>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPackageId,FLoadedPackageCellsRef>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPackageId,FLoadedPackageCellsRef>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PackageCells);
  *(undefined4 *)&(this->Packages).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Packages).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FPackageId,FLoadedPackageRef>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPackageId,FLoadedPackageRef>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPackageId,FLoadedPackageRef>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Packages);
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->PackagesLock);
  if (BVar3 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014230aa84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&this->PackagesLock);
    return;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// operator() @ 14230d2d0

void __thiscall
`FGlobalImportStore::AddScriptObject'::__l2::<lambda_1>::operator()(void *this,UObject *param_1)

{
  ulong64 uVar1;
  UObject *local_res10;
  TPairInitializer<FPackageObjectIndex_const_&,UObject_*_const_&> local_res18;
  undefined1 local_18 [16];
  
  if ((*(uint *)&param_1->field_0x8 & 1) != 0) {
    (*(undefined8 **)((longlong)this + 8))[1] = **(undefined8 **)((longlong)this + 8);
    local_res10 = param_1;
    UObjectBaseUtility::GetPathName
              ((UObjectBaseUtility *)param_1,(UObject *)0x0,
               *(TStringBuilderBase<wchar_t> **)((longlong)this + 8));
    local_18._0_8_ = **(longlong **)((longlong)this + 8);
    local_18._8_4_ = (int)((*(longlong **)((longlong)this + 8))[1] - local_18._0_8_ >> 1);
    uVar1 = FPackageObjectIndex::GenerateImportHashFromObjectPath((TStringView<wchar_t> *)local_18);
    local_res18.Value = (UObject **)(uVar1 | 0x4000000000000000);
    local_18._0_8_ = &local_res18.Value;
    local_18._8_8_ = &local_res10;
    TSet<TTuple<FPackageObjectIndex,UObject_*>,TDefaultMapHashableKeyFuncs<FPackageObjectIndex,UObject_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FPackageObjectIndex_const_&,UObject_*_const_&>_>
              ((TSet<TTuple<FPackageObjectIndex,UObject_*>,TDefaultMapHashableKeyFuncs<FPackageObjectIndex,UObject_*,0>,FDefaultSetAllocator>
                *)(*(longlong *)this + 0xb8),&local_res18,(bool *)local_18);
  }
  return;
}

// operator() @ 14230db00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FGlobalImportStore::FindAllScriptObjects'::__l2::<lambda_1>::operator()
          (void *this,TArray<UPackage_*,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  ForAnyElementType *pFVar3;
  UObjectBase *pUVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  int iVar10;
  ulong64 uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  FScriptContainerElement *pFVar15;
  UObject *local_res20;
  undefined1 local_84 [12];
  ulonglong local_78;
  FScriptContainerElement *local_70;
  TStringView<wchar_t> local_68;
  ulonglong *local_58;
  UObject **local_50;
  FString local_48;
  
  pFVar15 = (param_1->AllocatorInstance).Data;
  uVar2 = param_1->ArrayNum;
  uVar12 = (ulonglong)(int)uVar2;
  local_70 = pFVar15 + uVar12 * 8;
LAB_14230db37:
  pFVar8 = local_70;
  local_84._4_8_ = pFVar15;
  if (param_1->ArrayNum != (int)uVar12) {
    `TCheckedPointerIterator<UPackage_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
              (&local_res20);
  }
  if (pFVar15 == pFVar8) {
    return;
  }
  pFVar3 = *(ForAnyElementType **)((longlong)this + 0x18);
  iVar10 = *(int *)((longlong)&pFVar3[1].Data + 4);
  pUVar4 = *(UObjectBase **)pFVar15;
  *(undefined4 *)&pFVar3[1].Data = 0;
  if (iVar10 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,pFVar3,0,(int *)((longlong)&pFVar3[1].Data + 4));
  }
  GetObjectsWithOuter(pUVar4,*(TArray<UObject_*,TSizedDefaultAllocator<32>_> **)
                              ((longlong)this + 0x18),true,RF_NoFlags,Borrowed);
  plVar5 = *(longlong **)((longlong)this + 0x18);
  puVar14 = (undefined8 *)*plVar5;
  lVar7 = plVar5[1];
  puVar1 = puVar14 + (int)lVar7;
LAB_14230dbb8:
  do {
    if ((int)plVar5[1] != (int)lVar7) {
      `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res20);
    }
    if (puVar14 == puVar1) break;
    local_res20 = (UObject *)*puVar14;
    if (((*(uint *)&local_res20->field_0x8 & 1) != 0) &&
       ((!param_2 || (bVar9 = Verse::VerseVM::IsUHTGeneratedVerseVNIObject(local_res20), bVar9)))) {
      (*(undefined8 **)((longlong)this + 0x10))[1] = **(undefined8 **)((longlong)this + 0x10);
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)local_res20,(UObject *)0x0,
                 *(TStringBuilderBase<wchar_t> **)((longlong)this + 0x10));
      local_68.DataPtr = (wchar_t *)**(longlong **)((longlong)this + 0x10);
      local_68.Size =
           (int)((*(longlong **)((longlong)this + 0x10))[1] - (longlong)local_68.DataPtr >> 1);
      uVar11 = FPackageObjectIndex::GenerateImportHashFromObjectPath(&local_68);
      lVar6 = *(longlong *)this;
      local_78 = uVar11 | 0x4000000000000000;
      if (*(int *)(lVar6 + 0xc0) != *(int *)(lVar6 + 0xec)) {
        lVar13 = lVar6 + 0xf0;
        if (*(longlong *)(lVar6 + 0xf8) != 0) {
          lVar13 = *(longlong *)(lVar6 + 0xf8);
        }
        iVar10 = *(int *)(lVar13 + ((ulonglong)(*(int *)(lVar6 + 0x100) - 1) & uVar11 & 0xffffffff)
                                   * 4);
        if (iVar10 != -1) {
          lVar13 = *(longlong *)
                    &((TSet<TTuple<FPackageObjectIndex,UObject_*>,TDefaultMapHashableKeyFuncs<FPackageObjectIndex,UObject_*,0>,FDefaultSetAllocator>
                       *)(lVar6 + 0xb8))->Elements;
          do {
            if (*(ulonglong *)(lVar13 + (longlong)iVar10 * 0x18) == local_78) goto LAB_14230dd49;
            iVar10 = *(int *)(lVar13 + 0x10 + (longlong)iVar10 * 0x18);
          } while (iVar10 != -1);
        }
      }
      if (*(char *)((longlong)this + 8) == '\0') {
        local_58 = &local_78;
        local_50 = &local_res20;
        TSet<TTuple<FPackageObjectIndex,UObject_*>,TDefaultMapHashableKeyFuncs<FPackageObjectIndex,UObject_*,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FPackageObjectIndex_const_&,UObject_*_const_&>_>
                  ((TSet<TTuple<FPackageObjectIndex,UObject_*>,TDefaultMapHashableKeyFuncs<FPackageObjectIndex,UObject_*,0>,FDefaultSetAllocator>
                    *)(lVar6 + 0xb8),
                   (TPairInitializer<FPackageObjectIndex_const_&,UObject_*_const_&> *)local_84,
                   (bool *)&local_58);
      }
      else if (2 < (byte)LogStreaming._0_1_) {
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)local_res20,&local_48,(UObject *)0x0,None);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
          puVar14 = puVar14 + 1;
          goto LAB_14230dbb8;
        }
      }
    }
LAB_14230dd49:
    puVar14 = puVar14 + 1;
  } while( true );
  pFVar15 = (FScriptContainerElement *)(local_84._4_8_ + 8);
  uVar12 = (ulonglong)uVar2;
  goto LAB_14230db37;
}

// AddPackageRef @ 1423104b0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FLoadedPackageRef * __thiscall
FGlobalImportStore::AddPackageRef
          (FGlobalImportStore *this,FPackageId param_1,FName param_2,EPackageLoader param_3,
          EPackageExtension param_4)

{
  FScriptContainerElement *pFVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  FLoadedPackageRef *pFVar5;
  UPackage *pUVar6;
  FUObjectItem *pFVar7;
  FUObjectItem *pFVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  ForAnyElementType FVar12;
  undefined1 *puVar13;
  undefined1 local_res8 [8];
  FPackageId local_res10;
  FLLMScope local_d8 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_d0;
  FName local_c0;
  FName local_b8;
  FPackageId local_b0;
  FName local_a8;
  FName local_a0;
  FMemScope local_98;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  local_res10.Id = param_1.Id;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_class_FLoadedPackageRef&___ptr64___cdecl_FGlobalImportStore::AddPackageRef(FPackageId,FName,EPackageLoader,EPackageExtension)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_class_FLoadedPackageRef&___ptr64___cdecl_FGlobalImportStore::AddPackageRef(FPackageId,FName,EPackageLoader,EPackageExtension)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_class_FLoadedPackageRef&___ptr64___cdecl_FGlobalImportStore::AddPackageRef(FPackageId,FName,EPackageLoader,EPackageExtension)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_class_FLoadedPackageRef&___ptr64___cdecl_FGlobalImportStore::AddPackageRef(FPackageId,FName,EPackageLoader,EPackageExtension)___ptr64'
                    ::__l2::LLMScope_Name1703,L"AsyncLoadPackageStore");
    _Init_thread_footer(&`public:_class_FLoadedPackageRef&___ptr64___cdecl_FGlobalImportStore::AddPackageRef(FPackageId,FName,EPackageLoader,EPackageExtension)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_d8,`public:_class_FLoadedPackageRef&___ptr64___cdecl_FGlobalImportStore::AddPackageRef(FPackageId,FName,EPackageLoader,EPackageExtension)___ptr64'
                      ::__l2::LLMScope_Name1703,false,None,Default,true);
  FMemScope::FMemScope
            (&local_98,
             &`public:_class_FLoadedPackageRef&___ptr64___cdecl_FGlobalImportStore::AddPackageRef(FPackageId,FName,EPackageLoader,EPackageExtension)___ptr64'
              ::__l2::LLMScope_Name1703,true);
  FAsyncLoadingThread2::ProcessDeferredDeletePackagesQueue(this->AsyncLoadingThread,0x7fffffff);
  AcquireSRWLockExclusive((PSRWLOCK)&this->PackagesLock);
  pFVar5 = TMapBase<FPackageId,FLoadedPackageRef,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FLoadedPackageRef,0>_>
           ::FindOrAddImpl<FPackageId_const_&>
                     ((TMapBase<FPackageId,FLoadedPackageRef,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FLoadedPackageRef,0>_>
                       *)&this->Packages,(uint)local_res10.Id,&local_res10);
  if (((0 < pFVar5->RefCount) &&
      (pUVar6 = FLoadedPackageRef::GetPackage(pFVar5), pUVar6 != (UPackage *)0x0)) &&
     (pFVar5->OriginalPackageName != (FName)pUVar6->_padding_)) {
    iVar9 = pFVar5->RefCount;
    if (iVar9 < 1) goto LAB_14231061a;
    if (2 < (byte)LogStreaming._0_1_) {
      local_c0 = (FName)pUVar6->_padding_;
      ::FName::ToString(&local_c0,&local_70);
      local_b8 = pFVar5->OriginalPackageName;
      ::FName::ToString(&local_b8,&local_80);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_FLoadedPackageRef&___ptr64___cdecl_FGlobalImportStore::AddPackageRef(FPackageId,FName,EPackageLoader,EPackageExtension)___ptr64'
                  ::__l15::LOG_Static,(FLogCategoryBase *)&LogStreaming);
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
    }
  }
  iVar9 = pFVar5->RefCount;
LAB_14231061a:
  if (iVar9 == 0) {
    pUVar6 = FLoadedPackageRef::GetPackage(pFVar5);
    pFVar8 = (FUObjectItem *)0x0;
    if (pUVar6 != (UPackage *)0x0) {
      iVar9 = *(int *)((longlong)&pUVar6->_padding_ + 4);
      if ((iVar9 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x443,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FLoadedPackageRef *)(*pcVar3)();
        return pFVar5;
      }
      pFVar7 = pFVar8;
      if (iVar9 < GUObjectArray.ObjObjects.NumElements) {
        pFVar7 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar9);
      }
      if ((((uint)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) != 0) ||
         (pFVar5->OriginalPackageName != (FName)pUVar6->_padding_)) {
        RemoveUnreferencedObsoletePackageNoLock(this,pFVar5);
      }
    }
    pUVar6 = FLoadedPackageRef::GetPackage(pFVar5);
    if (pUVar6 != (UPackage *)0x0) {
      iVar9 = *(int *)((longlong)&pUVar6->_padding_ + 4);
      if ((iVar9 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x443,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FLoadedPackageRef *)(*pcVar3)();
        return pFVar5;
      }
      pFVar7 = pFVar8;
      if (iVar9 < GUObjectArray.ObjObjects.NumElements) {
        pFVar7 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar9);
      }
      if ((((uint)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0) &&
         (pFVar5->OriginalPackageName == (FName)pUVar6->_padding_)) {
        local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d0.ArrayNum = 0;
        local_d0.ArrayMax = 0;
        FLoadedPackageRef::PinPublicExportsForGC(pFVar5,&local_d0);
        iVar9 = local_d0.ArrayNum;
        uVar10 = (ulonglong)local_d0.ArrayNum;
        pFVar1 = local_d0.AllocatorInstance.Data + uVar10 * 4;
        FVar12.Data = local_d0.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar10 != iVar9) {
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res8);
          }
          if (FVar12.Data == pFVar1) break;
          TMapBase<int,FPublicExportKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPublicExportKey,0>_>
          ::Remove((TMapBase<int,FPublicExportKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPublicExportKey,0>_>
                    *)&this->ObjectIndexToPublicExport,*(int *)FVar12.Data);
          uVar10 = local_d0._8_8_ & 0xffffffff;
          FVar12.Data = FVar12.Data + 4;
        }
        if (*(int *)&(this->PackageCells).field_0x8 != *(int *)&(this->PackageCells).field_0x34) {
          puVar13 = *(undefined1 **)&(this->PackageCells).field_0x40;
          if (puVar13 == (undefined1 *)0x0) {
            puVar13 = &(this->PackageCells).field_0x38;
          }
          iVar9 = *(int *)(puVar13 +
                          ((ulonglong)(*(int *)&(this->PackageCells).field_0x48 - 1) &
                          local_res10.Id & 0xffffffff) * 4);
          if (iVar9 != -1) {
            do {
              puVar11 = (ulonglong *)((longlong)iVar9 * 0x68 + *(longlong *)&this->PackageCells);
              if (*puVar11 == local_res10.Id) {
                pFVar7 = (FUObjectItem *)(puVar11 + 1);
                if (puVar11 == (ulonglong *)0x0) {
                  pFVar7 = pFVar8;
                }
                if (pFVar7 != (FUObjectItem *)0x0) {
                  LOCK();
                  bVar4 = (pFVar7->field0_0x0).RemoteId == '\0';
                  if (bVar4) {
                    (pFVar7->field0_0x0).RemoteId = '\x01';
                  }
                  UNLOCK();
                  if (!bVar4) {
                    UE::FMutex::LockSlow((FMutex *)pFVar7);
                  }
                  *(undefined1 *)((longlong)&pFVar7->field0_0x0 + 1) = 1;
                  LOCK();
                  bVar2 = (pFVar7->field0_0x0).RemoteId;
                  (pFVar7->field0_0x0).RemoteId = (pFVar7->field0_0x0).RemoteId + 0xff;
                  UNLOCK();
                  if ((bVar2 & 2) != 0) {
                    UE::FMutex::WakeWaitingThread((FMutex *)pFVar7);
                  }
                }
                break;
              }
              iVar9 = (int)puVar11[0xc];
            } while (iVar9 != -1);
          }
        }
        if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.AllocatorInstance.Data);
        }
      }
      else {
        if (4 < (byte)LogStreaming._0_1_) {
          iVar9 = *(int *)((longlong)&pUVar6->_padding_ + 4);
          if ((iVar9 < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                 ,0x443,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar5 = (FLoadedPackageRef *)(*pcVar3)();
            return pFVar5;
          }
          if (iVar9 < GUObjectArray.ObjObjects.NumElements) {
            pFVar8 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar9);
          }
          if (((uint)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0) {
            local_b0.Id = (pUVar6->PackageId).Id;
            ::LexToString(&local_50,&local_b0);
            local_a8 = pFVar5->OriginalPackageName;
            ::FName::ToString(&local_a8,&local_60);
            local_a0 = (FName)pUVar6->_padding_;
            ::FName::ToString(&local_a0,&local_90);
            UE::Logging::Private::BasicLog<5>
                      (&`public:_class_FLoadedPackageRef&___ptr64___cdecl_FGlobalImportStore::AddPackageRef(FPackageId,FName,EPackageLoader,EPackageExtension)___ptr64'
                        ::__l48::LOG_Static,(FLogCategoryBase *)&LogStreaming);
            if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_90.Data.AllocatorInstance.Data);
            }
            if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_60.Data.AllocatorInstance.Data);
            }
            if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_50.Data.AllocatorInstance.Data);
            }
          }
        }
        RemoveUnreferencedObsoletePackageNoLock(this,pFVar5);
      }
    }
    pFVar5->PackageHeaderExtension = param_4;
    pFVar5->PackageLoader = param_3;
  }
  else {
    if (pFVar5->PackageHeaderExtension == Unspecified) {
      pFVar5->PackageHeaderExtension = param_4;
    }
    if (pFVar5->PackageLoader == Unknown) {
      pFVar5->PackageLoader = param_3;
    }
  }
  pFVar5->RefCount = pFVar5->RefCount + 1;
  ReleaseSRWLockExclusive((PSRWLOCK)&this->PackagesLock);
  FMemScope::~FMemScope(&local_98);
  FLLMScope::~FLLMScope(local_d8);
  return pFVar5;
}

// FindAllScriptObjects @ 142322ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FGlobalImportStore::FindAllScriptObjects(FGlobalImportStore *this,bool param_1)

{
  UClass *pUVar1;
  bool bVar2;
  undefined1 auStackY_8e8 [32];
  TArray<UPackage_*,TSizedDefaultAllocator<32>_> local_8b8;
  TArray<UPackage_*,TSizedDefaultAllocator<32>_> local_8a8;
  void *local_898;
  undefined8 local_890;
  undefined1 local_888 [8];
  TArray<UPackage_*,TSizedDefaultAllocator<32>_> **local_880;
  TStringBuilderBase<wchar_t> *local_878;
  void **local_870;
  TArray<UPackage_*,TSizedDefaultAllocator<32>_> *local_868 [2];
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1035];
  wchar_t local_22 [5];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_8e8;
  AcquireSRWLockExclusive((PSRWLOCK)&this->ScriptObjectsLock);
  local_858.bIsDynamic = false;
  local_858.bIsExternal = false;
  local_858.Base = local_838;
  local_898 = (void *)0x0;
  local_858.CurPos = local_838;
  local_890 = 0;
  local_858.End = local_22;
  local_8b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_8b8.ArrayNum = 0;
  local_8b8.ArrayMax = 0;
  local_8a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_8a8.ArrayNum = 0;
  local_8a8.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,0x100,&local_8b8.AllocatorInstance,0,&local_8b8.ArrayMax);
  bVar2 = local_8a8.ArrayMax != 0x100;
  local_8a8._8_8_ = (ulonglong)(uint)local_8a8.ArrayMax << 0x20;
  if (bVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0x100,&local_8a8.AllocatorInstance,0,&local_8a8.ArrayMax);
  }
  local_868[0] = &local_8b8;
  local_880 = local_868;
  local_888 = (undefined1  [8])
              UE::Core::Private::Function::
              TFunctionRefCaller<`FindAllRuntimeScriptPackages'::__l2::<lambda_1>,void,UObject_*>::
              Call;
  pUVar1 = Z_Construct_UClass_UPackage_NoRegister();
  ForEachObjectOfClass
            (pUVar1,(TFunctionRef<void___cdecl(UObject_*)> *)local_888,false,RF_ClassDefaultObject,
             Borrowed);
  local_878 = &local_858;
  local_870 = &local_898;
  local_880 = (TArray<UPackage_*,TSizedDefaultAllocator<32>_> **)CONCAT71(local_880._1_7_,param_1);
  local_888 = (undefined1  [8])this;
  `FGlobalImportStore::FindAllScriptObjects'::__l2::<lambda_1>::operator()
            (local_888,&local_8b8,false);
  `FGlobalImportStore::FindAllScriptObjects'::__l2::<lambda_1>::operator()
            (local_888,&local_8a8,true);
  if (local_8a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8a8.AllocatorInstance.Data);
  }
  if (local_8b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8b8.AllocatorInstance.Data);
  }
  if (local_898 != (void *)0x0) {
    FMemory::Free(local_898);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
  ReleaseSRWLockExclusive((PSRWLOCK)&this->ScriptObjectsLock);
  return;
}

// FindPackageRefChecked @ 1423233c0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FLoadedPackageRef * __thiscall
FGlobalImportStore::FindPackageRefChecked(FGlobalImportStore *this,FPackageId param_1,FName param_2)

{
  FLoadedPackageRef *pFVar1;
  FPackageId local_res10;
  FName local_res18;
  FString local_28;
  FString local_18;
  
  local_res10.Id = param_1.Id;
  local_res18 = param_2;
  AcquireSRWLockShared((PSRWLOCK)&this->PackagesLock);
  pFVar1 = FindPackageRefNoLock(this,param_1);
  ReleaseSRWLockShared((PSRWLOCK)&this->PackagesLock);
  if (pFVar1 == (FLoadedPackageRef *)0x0) {
    ::LexToString(&local_18,&local_res10);
    ::FName::ToString(&local_res18,&local_28);
    UE::Logging::Private::BasicFatalLog
              (&`public:_class_FLoadedPackageRef&___ptr64___cdecl_FGlobalImportStore::FindPackageRefChecked(FPackageId,FName)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogStreaming);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return pFVar1;
}

// FindPackageRefNoLock @ 1423234a0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FLoadedPackageRef * __thiscall
FGlobalImportStore::FindPackageRefNoLock(FGlobalImportStore *this,FPackageId param_1)

{
  int iVar1;
  FLoadedPackageRef *pFVar2;
  FLoadedPackageRef *pFVar3;
  undefined1 *puVar4;
  FLoadedPackageRef *pFVar5;
  
  pFVar5 = (FLoadedPackageRef *)0x0;
  pFVar2 = pFVar5;
  if (*(int *)&(this->Packages).field_0x8 != *(int *)&(this->Packages).field_0x34) {
    puVar4 = *(undefined1 **)&(this->Packages).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->Packages).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + ((ulonglong)(*(int *)&(this->Packages).field_0x48 - 1) &
                              param_1.Id & 0xffffffff) * 4);
    if (iVar1 != -1) {
      do {
        pFVar2 = (FLoadedPackageRef *)(*(longlong *)&this->Packages + (longlong)iVar1 * 0x48);
        if (*(ulong64 *)(*(longlong *)&this->Packages + (longlong)iVar1 * 0x48) == param_1.Id)
        break;
        iVar1 = pFVar2[1].PublicExportMap.Count;
        pFVar2 = pFVar5;
      } while (iVar1 != -1);
    }
  }
  pFVar3 = (FLoadedPackageRef *)&(pFVar2->PublicExportMap).Count;
  if (pFVar2 == (FLoadedPackageRef *)0x0) {
    pFVar3 = pFVar5;
  }
  return pFVar3;
}

// FindPublicExportCell @ 142323510

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

VCell * __thiscall
FGlobalImportStore::FindPublicExportCell(FGlobalImportStore *this,FPublicExportKey *param_1)

{
  longlong lVar1;
  VCell VVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong *plVar7;
  VCell *pVVar8;
  undefined1 *puVar9;
  VCell *pVVar10;
  VCell *this_00;
  longlong lVar11;
  
  if (*(int *)&(this->PackageCells).field_0x8 != *(int *)&(this->PackageCells).field_0x34) {
    puVar9 = *(undefined1 **)&(this->PackageCells).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->PackageCells).field_0x38;
    }
    iVar6 = *(int *)(puVar9 + (ulonglong)
                              (*(int *)&(this->PackageCells).field_0x48 - 1U & param_1->PackageIdLow
                              ) * 4);
    if (iVar6 != -1) {
      do {
        plVar7 = (longlong *)((longlong)iVar6 * 0x68 + *(longlong *)&this->PackageCells);
        if (*plVar7 == CONCAT44(param_1->PackageIdHigh,param_1->PackageIdLow)) {
          pVVar8 = (VCell *)0x0;
          this_00 = (VCell *)(plVar7 + 1);
          if (plVar7 == (longlong *)0x0) {
            this_00 = pVVar8;
          }
          if (this_00 == (VCell *)0x0) {
            return (VCell *)0x0;
          }
          uVar3 = param_1->ExportHashHigh;
          lVar11 = CONCAT44(uVar3,param_1->ExportHashLow);
          if ((this_00[1] == (VCell)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("bPinned",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                                 ,0x622,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            pVVar8 = (VCell *)(*pcVar4)();
            return pVVar8;
          }
          LOCK();
          VVar2 = *this_00;
          if (VVar2 == (VCell)0x0) {
            *this_00 = (VCell)0x1;
          }
          UNLOCK();
          if (VVar2 != (VCell)0x0) {
            UE::FMutex::LockSlow((FMutex *)this_00);
          }
          if (*(int *)(this_00 + 0x10) == *(int *)(this_00 + 0x3c)) goto LAB_142323663;
          pVVar10 = *(VCell **)(this_00 + 0x48);
          if (*(VCell **)(this_00 + 0x48) == (VCell *)0x0) {
            pVVar10 = this_00 + 0x40;
          }
          iVar6 = *(int *)(pVVar10 +
                          ((ulonglong)(*(int *)(this_00 + 0x50) - 1) &
                          (ulonglong)uVar3 * 0x17 + lVar11) * 4);
          if (iVar6 == -1) goto LAB_142323663;
          goto LAB_142323640;
        }
        iVar6 = (int)plVar7[0xc];
      } while (iVar6 != -1);
    }
  }
  return (VCell *)0x0;
  while (iVar6 = *(int *)(lVar1 + 0x10), iVar6 != -1) {
LAB_142323640:
    lVar1 = *(longlong *)(this_00 + 8) + (longlong)iVar6 * 0x18;
    if (*(longlong *)(*(longlong *)(this_00 + 8) + (longlong)iVar6 * 0x18) == lVar11) {
      pVVar8 = (VCell *)0x0;
      if (lVar1 != 0) {
        pVVar8 = *(VCell **)(lVar1 + 8);
      }
      break;
    }
  }
LAB_142323663:
  LOCK();
  VVar2 = *this_00;
  *this_00 = (VCell)((char)*this_00 + -1);
  UNLOCK();
  if (((byte)VVar2 & 2) != 0) {
    UE::FMutex::WakeWaitingThread((FMutex *)this_00);
  }
  return pVVar8;
}

// FindPublicExportObjectUncheckedNoLock @ 1423236a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

UObject * __thiscall
FGlobalImportStore::FindPublicExportObjectUncheckedNoLock
          (FGlobalImportStore *this,FPublicExportKey *param_1)

{
  int iVar1;
  FLoadedPackageRef *this_00;
  FUObjectItem *pFVar2;
  FPackageId FVar3;
  
  FVar3.Id._4_4_ = param_1->PackageIdHigh;
  FVar3.Id._0_4_ = param_1->PackageIdLow;
  this_00 = FindPackageRefNoLock(this,FVar3);
  if (this_00 != (FLoadedPackageRef *)0x0) {
    iVar1 = FLoadedPackageRef::FPublicExportMap::Find
                      (&this_00->PublicExportMap,
                       CONCAT44(param_1->ExportHashHigh,param_1->ExportHashLow));
    if (-1 < iVar1) {
      if (iVar1 < GUObjectArray.ObjObjects.NumElements) {
        pFVar2 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar1);
        return (UObject *)(pFVar2->field1_0x8).Object;
      }
      return _DAT_00000008;
    }
  }
  return (UObject *)0x0;
}

// FindScriptImportObject @ 142323910

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

UObject * __thiscall
FGlobalImportStore::FindScriptImportObject(FGlobalImportStore *this,FPackageObjectIndex param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UObject *pUVar5;
  undefined1 *puVar6;
  
  AcquireSRWLockShared((PSRWLOCK)&this->ScriptObjectsLock);
  if ((byte)(param_1.TypeAndId >> 0x3e) != 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GlobalIndex.IsScriptImport()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                       ,0x864,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar5 = (UObject *)(*pcVar2)();
      return pUVar5;
    }
  }
  if (*(int *)&(this->ScriptObjects).field_0x8 != *(int *)&(this->ScriptObjects).field_0x34) {
    puVar6 = *(undefined1 **)&(this->ScriptObjects).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->ScriptObjects).field_0x38;
    }
    iVar4 = *(int *)(puVar6 + ((ulonglong)(*(int *)&(this->ScriptObjects).field_0x48 - 1) &
                              param_1.TypeAndId & 0xffffffff) * 4);
    if (iVar4 != -1) {
      do {
        lVar1 = *(longlong *)&this->ScriptObjects + (longlong)iVar4 * 0x18;
        if (*(ulong64 *)(*(longlong *)&this->ScriptObjects + (longlong)iVar4 * 0x18) ==
            param_1.TypeAndId) {
          if (lVar1 != 0) {
            pUVar5 = *(UObject **)(lVar1 + 8);
            goto LAB_1423239ca;
          }
          break;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  pUVar5 = (UObject *)0x0;
LAB_1423239ca:
  ReleaseSRWLockShared((PSRWLOCK)&this->ScriptObjectsLock);
  return pUVar5;
}

// FlushDeferredDeletePackagesQueue @ 142324000

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FGlobalImportStore::FlushDeferredDeletePackagesQueue(FGlobalImportStore *this)

{
  FAsyncLoadingThread2::ProcessDeferredDeletePackagesQueue(this->AsyncLoadingThread,0x7fffffff);
  return;
}

// RegistrationComplete @ 142337440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FGlobalImportStore::RegistrationComplete(FGlobalImportStore *this)

{
  UClass *pUVar1;
  bool bVar2;
  bool bVar3;
  undefined1 auStackY_8f8 [32];
  TArray<UPackage_*,TSizedDefaultAllocator<32>_> local_8c8;
  TArray<UPackage_*,TSizedDefaultAllocator<32>_> local_8b8;
  void *local_8a8;
  undefined8 local_8a0;
  undefined1 local_898 [16];
  TStringBuilderBase<wchar_t> *local_888;
  void **local_880;
  TArray<UPackage_*,TSizedDefaultAllocator<32>_> *local_878 [2];
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1035];
  wchar_t local_32 [5];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_8f8;
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId6517,"FindAllScriptObjectsVerify",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
               ,0x1975);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6517);
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->ScriptObjectsLock);
  local_868.bIsDynamic = false;
  local_868.bIsExternal = false;
  local_868.Base = local_848;
  local_8a8 = (void *)0x0;
  local_868.CurPos = local_848;
  local_8a0 = 0;
  local_868.End = local_32;
  local_8c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_8c8.ArrayNum = 0;
  local_8c8.ArrayMax = 0;
  local_8b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_8b8.ArrayNum = 0;
  local_8b8.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,0x100,&local_8c8.AllocatorInstance,0,&local_8c8.ArrayMax);
  bVar3 = local_8b8.ArrayMax != 0x100;
  local_8b8._8_8_ = (ulonglong)(uint)local_8b8.ArrayMax << 0x20;
  if (bVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0x100,&local_8b8.AllocatorInstance,0,&local_8b8.ArrayMax);
  }
  local_878[0] = &local_8c8;
  local_898._8_8_ = local_878;
  local_898._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FindAllRuntimeScriptPackages'::__l2::<lambda_1>,void,UObject_*>::Call;
  pUVar1 = Z_Construct_UClass_UPackage_NoRegister();
  ForEachObjectOfClass
            (pUVar1,(TFunctionRef<void___cdecl(UObject_*)> *)local_898,false,RF_ClassDefaultObject,
             Borrowed);
  local_888 = &local_868;
  local_880 = &local_8a8;
  local_898[8] = 1;
  local_898._0_8_ = this;
  `FGlobalImportStore::FindAllScriptObjects'::__l2::<lambda_1>::operator()
            (local_898,&local_8c8,false);
  `FGlobalImportStore::FindAllScriptObjects'::__l2::<lambda_1>::operator()
            (local_898,&local_8b8,true);
  if (local_8b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8b8.AllocatorInstance.Data);
  }
  if (local_8c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8c8.AllocatorInstance.Data);
  }
  if (local_8a8 != (void *)0x0) {
    FMemory::Free(local_8a8);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
  ReleaseSRWLockExclusive((PSRWLOCK)&this->ScriptObjectsLock);
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->ScriptObjectsLock);
  TSet<TTuple<FPackageObjectIndex,UObject_*>,TDefaultMapHashableKeyFuncs<FPackageObjectIndex,UObject_*,0>,FDefaultSetAllocator>
  ::Shrink((TSet<TTuple<FPackageObjectIndex,UObject_*>,TDefaultMapHashableKeyFuncs<FPackageObjectIndex,UObject_*,0>,FDefaultSetAllocator>
            *)&this->ScriptObjects);
  FCookedScriptObjectsDebug::TrimDebugData(&this->CookedScriptObjectsDebug,&this->ScriptObjects);
  ReleaseSRWLockExclusive((PSRWLOCK)&this->ScriptObjectsLock);
  return;
}

// ReleasePackageRef @ 142338cf0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FGlobalImportStore::ReleasePackageRef
          (FGlobalImportStore *this,FPackageId param_1,FPackageId param_2)

{
  code *pcVar1;
  bool bVar2;
  FLoadedPackageRef *this_00;
  ulonglong *puVar3;
  undefined1 *puVar4;
  int iVar5;
  ulonglong *puVar6;
  ulong64 local_res10;
  ulong64 local_res18 [2];
  ulong64 *local_28;
  FLoadedPackageRef *local_20;
  ulong64 *local_18;
  
  local_res10 = param_1.Id;
  local_res18[0] = param_2.Id;
  this_00 = FindPackageRefChecked(this,param_1,(FName)0x0);
  if (this_00->RefCount < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PackageRef.RefCount > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                       ,0x73d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00->RefCount = this_00->RefCount + -1;
  if (this_00->bHasBeenLoadedDebug == false) {
LAB_142338d7c:
    if (this_00->bAreAllPublicExportsLoaded != false) goto LAB_142338d82;
  }
  else {
    if (this_00->bAreAllPublicExportsLoaded == false) {
      if ((this_00->bIsMissing == false) && (this_00->bHasFailed == false)) {
        local_28 = local_res18;
        local_18 = &local_res10;
        local_20 = this_00;
        `FGlobalImportStore::ReleasePackageRef'::__l2::<lambda_1>::operator()(&local_28);
      }
      goto LAB_142338d7c;
    }
LAB_142338d82:
    if (this_00->bIsMissing == false) goto LAB_142338de0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!PackageRef.bIsMissing",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                       ,0x74f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this_00->bIsMissing != false) && (this_00->bAreAllPublicExportsLoaded != false)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!PackageRef.bAreAllPublicExportsLoaded",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                       ,0x753,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
LAB_142338de0:
  if ((this_00->RefCount == 0) && (-1 < this_00->PackageObjectIndex)) {
    FLoadedPackageRef::UnpinPublicExportsForGC(this_00);
    if (*(int *)&(this->PackageCells).field_0x8 != *(int *)&(this->PackageCells).field_0x34) {
      puVar4 = *(undefined1 **)&(this->PackageCells).field_0x40;
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &(this->PackageCells).field_0x38;
      }
      iVar5 = *(int *)(puVar4 + ((ulonglong)(*(int *)&(this->PackageCells).field_0x48 - 1) &
                                local_res10 & 0xffffffff) * 4);
      if (iVar5 != -1) {
        while (puVar6 = (ulonglong *)((longlong)iVar5 * 0x68 + *(longlong *)&this->PackageCells),
              *puVar6 != local_res10) {
          iVar5 = (int)puVar6[0xc];
          if (iVar5 == -1) {
            return;
          }
        }
        puVar3 = puVar6 + 1;
        if (puVar6 == (ulonglong *)0x0) {
          puVar3 = (ulonglong *)0x0;
        }
        if (puVar3 != (ulonglong *)0x0) {
          puVar4 = (undefined1 *)((longlong)puVar6 + 9);
          if (puVar6 == (ulonglong *)0x0) {
            puVar4 = &DAT_00000001;
          }
          *puVar4 = 0;
        }
      }
    }
  }
  return;
}

// RemovePackageNoLock @ 1423399f0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FGlobalImportStore::RemovePackageNoLock(FGlobalImportStore *this,FPackageId param_1)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar10;
  bool bVar11;
  FPackageId local_res10;
  FPackageId *local_res18 [2];
  int *local_88;
  int iStack_80;
  FPublicExportMap_u_0 local_70;
  undefined8 local_68;
  int local_60 [2];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined2 local_40;
  ulonglong uVar9;
  
  local_res10.Id = param_1.Id;
  if (GAsyncLoading2_DebugPackageIds.Elements._8_4_ !=
      GAsyncLoading2_DebugPackageIds.Elements._52_4_) {
    FVar10 = (ForElementType<FSetElementId>)0x154ba3c98;
    if (GAsyncLoading2_DebugPackageIds.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar10 = GAsyncLoading2_DebugPackageIds.Hash.SecondaryData;
    }
    for (iVar5 = *(int *)((longlong)FVar10 +
                         ((ulonglong)(GAsyncLoading2_DebugPackageIds.HashSize - 1) &
                         param_1.Id & 0xffffffff) * 4); iVar5 != -1;
        iVar5 = *(int *)(GAsyncLoading2_DebugPackageIds.Elements._0_8_ + 8 + (longlong)iVar5 * 0x10)
        ) {
      if (*(ulong64 *)(GAsyncLoading2_DebugPackageIds.Elements._0_8_ + (longlong)iVar5 * 0x10) ==
          param_1.Id) {
        bVar4 = FWindowsPlatformMisc::IsDebuggerPresent();
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        break;
      }
    }
  }
  uVar9 = 0;
  local_70.Allocation = (uchar *)0x0;
  local_68 = 0;
  local_60[0] = -1;
  local_58 = 0;
  local_50 = 0xffffffff;
  local_4c = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_40 = 0;
  bVar4 = TMap<FPackageId,FLoadedPackageRef,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FLoadedPackageRef,0>_>
          ::RemoveAndCopyValue(&this->Packages,&local_res10,(FLoadedPackageRef *)&local_70);
  this_00 = &this->PackageCellsMutex;
  LOCK();
  bVar11 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar11) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar11) {
    UE::FMutex::LockSlow(this_00);
  }
  if (*(int *)&(this->PackageCells).field_0x8 != *(int *)&(this->PackageCells).field_0x34) {
    iVar5 = TSet<TTuple<FPackageId,FLoadedPackageCellsRef>,TDefaultMapHashableKeyFuncs<FPackageId,FLoadedPackageCellsRef,0>,FDefaultSetAllocator>
            ::RemoveImpl<FPackageId>
                      ((TSet<TTuple<FPackageId,FLoadedPackageCellsRef>,TDefaultMapHashableKeyFuncs<FPackageId,FLoadedPackageCellsRef,0>,FDefaultSetAllocator>
                        *)&this->PackageCells,(uint)local_res10.Id,&local_res10);
    if ((0 < iVar5) && (!bVar4)) {
      local_res18[0] = &local_res10;
      `FGlobalImportStore::RemovePackageNoLock'::__l6::<lambda_2>::operator()(local_res18);
    }
  }
  LOCK();
  aVar1 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    UE::FMutex::WakeWaitingThread(this_00);
  }
  if (bVar4) {
    iStack_80 = local_68._4_4_;
    if (local_68._4_4_ == 1) {
      local_88 = local_60;
      iStack_80 = 1;
      do {
        if (((int)uVar9 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      } while ((local_60[uVar9] == -1) &&
              (uVar7 = (int)uVar9 + 1, uVar9 = (ulonglong)uVar7, (int)uVar7 < 1));
    }
    else {
      local_88 = (int *)(local_70.Allocation + (longlong)local_68._4_4_ * 8);
      if ((local_68 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (0 < iStack_80) {
        do {
          if (((int)uVar9 < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        } while ((local_88[uVar9] == -1) &&
                (uVar7 = (int)uVar9 + 1, uVar9 = (ulonglong)uVar7, (int)uVar7 < iStack_80));
      }
    }
    uVar7 = (uint)uVar9;
    while ((int)uVar7 < iStack_80) {
      uVar8 = (uint)uVar9;
      uVar7 = 0;
      if ((int)uVar8 < iStack_80) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(int *)&(this->ObjectIndexToPublicExport).field_0x8 !=
          *(int *)&(this->ObjectIndexToPublicExport).field_0x34) {
        puVar2 = *(undefined1 **)&(this->ObjectIndexToPublicExport).field_0x40;
        puVar6 = &(this->ObjectIndexToPublicExport).field_0x38;
        if (puVar2 != (undefined1 *)0x0) {
          puVar6 = puVar2;
        }
        iVar5 = *(int *)(puVar6 + ((longlong)*(int *)&(this->ObjectIndexToPublicExport).field_0x48 -
                                   1U & (longlong)local_88[(int)uVar8]) * 4);
        if (iVar5 != -1) {
          do {
            if (*(int *)((longlong)iVar5 * 0x1c + *(longlong *)&this->ObjectIndexToPublicExport) ==
                local_88[(int)uVar8]) {
              TSet<TTuple<int,FPublicExportKey>,TDefaultMapHashableKeyFuncs<int,FPublicExportKey,0>,FDefaultSetAllocator>
              ::RemoveByIndex((TSet<TTuple<int,FPublicExportKey>,TDefaultMapHashableKeyFuncs<int,FPublicExportKey,0>,FDefaultSetAllocator>
                               *)&this->ObjectIndexToPublicExport,iVar5);
              break;
            }
            iVar5 = *(int *)((longlong)iVar5 * 0x1c + 0x14 +
                            *(longlong *)&this->ObjectIndexToPublicExport);
          } while (iVar5 != -1);
        }
      }
      do {
        uVar7 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar7;
        if (iStack_80 <= (int)uVar7) goto LAB_142339d6d;
        uVar8 = 0;
        if ((int)uVar7 < iStack_80) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      } while (local_88[(int)uVar7] == -1);
    }
  }
LAB_142339d6d:
  if (1 < local_68._4_4_) {
    FMemory::Free(local_70.Allocation);
  }
  return;
}

// RemovePublicExports @ 14233a0b0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGlobalImportStore::RemovePublicExports
          (FGlobalImportStore *this,TArray<FUnreachableObject,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  longlong lVar11;
  FLoadedPackageRef *this_00;
  UPackage *this_01;
  int iVar12;
  undefined1 *puVar13;
  ForElementType<FSetElementId> FVar14;
  FPackageId FVar15;
  FPackageId FVar16;
  FScriptContainerElement *pFVar17;
  bool bVar18;
  undefined1 local_res18 [8];
  FName local_res20;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  FString local_60;
  FString local_50;
  
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_FGlobalImportStore::RemovePublicExports(TArray<FUnreachableObject,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1996,"RemovePublicExports",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
               ,0x7cc);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_FGlobalImportStore::RemovePublicExports(TArray<FUnreachableObject,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1996);
  }
  iVar3 = param_1->ArrayNum;
  FVar16.Id = 0;
  pFVar17 = (param_1->AllocatorInstance).Data;
  pFVar1 = pFVar17 + (longlong)iVar3 * 0x18;
  this_00 = (FLoadedPackageRef *)FVar16.Id;
LAB_14233a153:
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FUnreachableObject_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar17 == pFVar1) {
      if (bVar18) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    uVar4 = *(uint *)(pFVar17 + 8);
    if (((int)uVar4 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ObjectIndex >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                            ,0x7d3,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (*(int *)&(this->ObjectIndexToPublicExport).field_0x8 ==
        *(int *)&(this->ObjectIndexToPublicExport).field_0x34) break;
    puVar5 = *(undefined1 **)&(this->ObjectIndexToPublicExport).field_0x40;
    puVar13 = &(this->ObjectIndexToPublicExport).field_0x38;
    if (puVar5 != (undefined1 *)0x0) {
      puVar13 = puVar5;
    }
    iVar12 = *(int *)(puVar13 +
                     (ulonglong)(*(int *)&(this->ObjectIndexToPublicExport).field_0x48 - 1U & uVar4)
                     * 4);
    if (iVar12 == -1) break;
    lVar6 = *(longlong *)&this->ObjectIndexToPublicExport;
    do {
      lVar11 = (longlong)iVar12 * 0x1c;
      if (*(uint *)(lVar11 + lVar6) == uVar4) {
        puVar2 = (undefined8 *)(lVar11 + 4 + lVar6);
        uVar8 = *puVar2;
        uVar9 = puVar2[1];
        TSet<TTuple<int,FPublicExportKey>,TDefaultMapHashableKeyFuncs<int,FPublicExportKey,0>,FDefaultSetAllocator>
        ::RemoveByIndex((TSet<TTuple<int,FPublicExportKey>,TDefaultMapHashableKeyFuncs<int,FPublicExportKey,0>,FDefaultSetAllocator>
                         *)&this->ObjectIndexToPublicExport,iVar12);
        local_70 = (undefined4)uVar8;
        uStack_6c = (uint)((ulonglong)uVar8 >> 0x20);
        uStack_68 = (undefined4)uVar9;
        uStack_64 = (undefined4)((ulonglong)uVar9 >> 0x20);
        FVar15.Id._4_4_ = local_70;
        FVar15.Id._0_4_ = uStack_6c;
        if (FVar15.Id == FVar16.Id) goto LAB_14233a2dd;
        if (GAsyncLoading2_DebugPackageIds.Elements._8_4_ ==
            GAsyncLoading2_DebugPackageIds.Elements._52_4_) goto LAB_14233a2b3;
        FVar14 = (ForElementType<FSetElementId>)0x154ba3c98;
        if (GAsyncLoading2_DebugPackageIds.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0)
        {
          FVar14 = GAsyncLoading2_DebugPackageIds.Hash.SecondaryData;
        }
        iVar12 = *(int *)((longlong)FVar14 +
                         (ulonglong)(GAsyncLoading2_DebugPackageIds.HashSize - 1U & uStack_6c) * 4);
        if (iVar12 == -1) goto LAB_14233a2b3;
        goto LAB_14233a291;
      }
      iVar12 = *(int *)(lVar11 + 0x14 + lVar6);
    } while (iVar12 != -1);
    pFVar17 = pFVar17 + 0x18;
  }
LAB_14233a419:
  pFVar17 = pFVar17 + 0x18;
  goto LAB_14233a153;
  while (iVar12 = *(int *)(GAsyncLoading2_DebugPackageIds.Elements._0_8_ + 8 +
                          (longlong)iVar12 * 0x10), iVar12 != -1) {
LAB_14233a291:
    if (*(ulong64 *)(GAsyncLoading2_DebugPackageIds.Elements._0_8_ + (longlong)iVar12 * 0x10) ==
        FVar15.Id) {
      bVar10 = FWindowsPlatformMisc::IsDebuggerPresent();
      if (bVar10) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      break;
    }
  }
LAB_14233a2b3:
  AcquireSRWLockShared((PSRWLOCK)&this->PackagesLock);
  this_00 = FindPackageRefNoLock(this,FVar15);
  ReleaseSRWLockShared((PSRWLOCK)&this->PackagesLock);
  FVar16.Id = FVar15.Id;
LAB_14233a2dd:
  if (this_00 != (FLoadedPackageRef *)0x0) {
    local_res20 = *(FName *)(pFVar17 + 0xc);
    if ((this_00->bIsMissing != false) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("!bIsMissing",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                            ,0x5c4,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((this_00->PackageObjectIndex < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("HasPackage()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                            ,0x5c5,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    bVar10 = FLoadedPackageRef::FPublicExportMap::Remove
                       (&this_00->PublicExportMap,CONCAT44(uStack_68,uStack_64));
    if (bVar10) {
      if (6 < (byte)LogStreaming._0_1_) {
        ::FName::ToString(&local_res20,&local_50);
        this_01 = FLoadedPackageRef::GetPackage(this_00);
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_01,&local_60,(UObject *)0x0);
        UE::Logging::Private::BasicLog<7>
                  (&`public:_void___cdecl_FLoadedPackageRef::RemovePublicExport(unsigned___int64,FName)___ptr64'
                    ::__l20::LOG_Static,(FLogCategoryBase *)&LogStreaming);
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
      }
      this_00->bAreAllPublicExportsLoaded = false;
    }
  }
  goto LAB_14233a419;
}

// RemoveUnreferencedObsoletePackageNoLock @ 14233a8e0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FGlobalImportStore::RemoveUnreferencedObsoletePackageNoLock
          (FGlobalImportStore *this,FLoadedPackageRef *param_1)

{
  FMutex FVar1;
  atomic<unsigned_char> aVar2;
  ulonglong uVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UPackage *pUVar9;
  int *piVar10;
  ulonglong *puVar11;
  int iVar12;
  ForElementType<FSetElementId> FVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  uint uVar16;
  atomic<unsigned_char> *this_00;
  longlong lVar17;
  undefined4 uStack_8c;
  TArrayView<int,int> local_88;
  uint local_78;
  FPublicExportMap_u_0 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined2 local_40;
  undefined4 local_3e;
  undefined2 local_3a;
  
  pUVar9 = FLoadedPackageRef::GetPackage(param_1);
  uVar3 = (pUVar9->PackageId).Id;
  if (GAsyncLoading2_DebugPackageIds.Elements._8_4_ !=
      GAsyncLoading2_DebugPackageIds.Elements._52_4_) {
    FVar13 = (ForElementType<FSetElementId>)0x154ba3c98;
    if (GAsyncLoading2_DebugPackageIds.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar13 = GAsyncLoading2_DebugPackageIds.Hash.SecondaryData;
    }
    for (iVar8 = *(int *)((longlong)FVar13 +
                         ((ulonglong)(GAsyncLoading2_DebugPackageIds.HashSize - 1) &
                         uVar3 & 0xffffffff) * 4); iVar8 != -1;
        iVar8 = *(int *)(GAsyncLoading2_DebugPackageIds.Elements._0_8_ + 8 + (longlong)iVar8 * 0x10)
        ) {
      if (*(ulonglong *)(GAsyncLoading2_DebugPackageIds.Elements._0_8_ + (longlong)iVar8 * 0x10) ==
          uVar3) {
        bVar6 = FWindowsPlatformMisc::IsDebuggerPresent();
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        break;
      }
    }
  }
  if (GVerifyUnreachableObjects != false) {
    VerifyPackageForRemovalNoLock(this,param_1);
  }
  iVar8 = (param_1->PublicExportMap).Capacity;
  if (iVar8 == 1) {
    local_88.DataPtr = &(param_1->PublicExportMap).SingleItemValue;
    uVar5._4_4_ = uStack_8c;
    uVar5._0_4_ = 1;
    local_78 = 0;
    local_88.ArrayNum = 1;
    iVar12 = local_88.ArrayNum;
    local_88._8_8_ = uVar5;
    do {
      uVar16 = local_78;
      lVar17 = (longlong)(int)local_78;
      uVar7 = 0;
      if ((int)local_78 < 1) {
        uVar7 = ~local_78 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar8 = iVar12;
    } while ((local_88.DataPtr[lVar17] == -1) &&
            (local_78 = uVar16 + 1, uVar16 = local_78, iVar8 = 1, (int)local_78 < 1));
  }
  else {
    piVar10 = (int *)((param_1->PublicExportMap).field0_0x0.Allocation + (longlong)iVar8 * 8);
    if ((iVar8 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_88._12_4_ = uStack_8c;
    local_88.ArrayNum = iVar8;
    local_78 = 0;
    local_88.DataPtr = piVar10;
    if (iVar8 < 1) goto LAB_14233ac18;
    do {
      uVar16 = local_78;
      lVar17 = (longlong)(int)local_78;
      uVar7 = 0;
      if ((int)local_78 < iVar8) {
        uVar7 = ~local_78 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    } while ((local_88.DataPtr[lVar17] == -1) &&
            (local_78 = uVar16 + 1, uVar16 = local_78, (int)local_78 < iVar8));
  }
joined_r0x00014233ab15:
  if ((int)uVar16 < iVar8) {
    piVar10 = TArrayView<int,int>::operator[](&local_88,uVar16);
    if (*(int *)&(this->ObjectIndexToPublicExport).field_0x8 !=
        *(int *)&(this->ObjectIndexToPublicExport).field_0x34) {
      puVar15 = *(undefined1 **)&(this->ObjectIndexToPublicExport).field_0x40;
      puVar14 = &(this->ObjectIndexToPublicExport).field_0x38;
      if (puVar15 != (undefined1 *)0x0) {
        puVar14 = puVar15;
      }
      iVar12 = *(int *)(puVar14 +
                       ((longlong)*(int *)&(this->ObjectIndexToPublicExport).field_0x48 - 1U &
                       (longlong)*piVar10) * 4);
      if (iVar12 != -1) {
        do {
          if (*(int *)((longlong)iVar12 * 0x1c + *(longlong *)&this->ObjectIndexToPublicExport) ==
              *piVar10) {
            TSet<TTuple<int,FPublicExportKey>,TDefaultMapHashableKeyFuncs<int,FPublicExportKey,0>,FDefaultSetAllocator>
            ::RemoveByIndex((TSet<TTuple<int,FPublicExportKey>,TDefaultMapHashableKeyFuncs<int,FPublicExportKey,0>,FDefaultSetAllocator>
                             *)&this->ObjectIndexToPublicExport,iVar12);
            break;
          }
          iVar12 = *(int *)((longlong)iVar12 * 0x1c + 0x14 +
                           *(longlong *)&this->ObjectIndexToPublicExport);
        } while (iVar12 != -1);
      }
    }
    do {
      uVar16 = uVar16 + 1;
      local_78 = uVar16;
      if (iVar8 <= (int)uVar16) break;
      uVar7 = 0;
      if ((int)uVar16 < iVar8) {
        uVar7 = ~uVar16 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    } while (local_88.DataPtr[(int)uVar16] == -1);
    goto joined_r0x00014233ab15;
  }
LAB_14233ac18:
  uVar3 = (pUVar9->PackageId).Id;
  if (*(int *)&(this->PackageCells).field_0x8 != *(int *)&(this->PackageCells).field_0x34) {
    puVar15 = *(undefined1 **)&(this->PackageCells).field_0x40;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = &(this->PackageCells).field_0x38;
    }
    iVar8 = *(int *)(puVar15 +
                    ((ulonglong)(*(int *)&(this->PackageCells).field_0x48 - 1) & uVar3 & 0xffffffff)
                    * 4);
    if (iVar8 != -1) {
      do {
        puVar11 = (ulonglong *)((longlong)iVar8 * 0x68 + *(longlong *)&this->PackageCells);
        if (*puVar11 == uVar3) {
          this_00 = (atomic<unsigned_char> *)(puVar11 + 1);
          if (puVar11 == (ulonglong *)0x0) {
            this_00 = (atomic<unsigned_char> *)0x0;
          }
          if (this_00 != (atomic<unsigned_char> *)0x0) {
            LOCK();
            FVar1.State = *this_00;
            if (FVar1.State == (atomic<unsigned_char>)0x0) {
              *this_00 = (atomic<unsigned_char>)0x1;
            }
            UNLOCK();
            if (FVar1.State != (atomic<unsigned_char>)0x0) {
              UE::FMutex::LockSlow((FMutex *)this_00);
            }
            iVar8 = *(int *)(this_00 + 0x50);
            if (1 >= iVar8) {
              TSet<TTuple<unsigned___int64,Verse::VCell_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,Verse::VCell_*,0>,FDefaultSetAllocator>
              ::UnhashElements((TSet<TTuple<unsigned___int64,Verse::VCell_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,Verse::VCell_*,0>,FDefaultSetAllocator>
                                *)(this_00 + 8));
            }
            *(undefined4 *)(this_00 + 0x10) = 0;
            if (*(int *)(this_00 + 0x14) != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,8,0,(ForAnyElementType *)(this_00 + 8),0,(int *)(this_00 + 0x14));
            }
            *(undefined4 *)(this_00 + 0x38) = 0xffffffff;
            *(undefined4 *)(this_00 + 0x3c) = 0;
            *(undefined4 *)(this_00 + 0x30) = 0;
            if ((*(int *)(this_00 + 0x34) < 0) || (0x80 < *(int *)(this_00 + 0x34))) {
              *(undefined4 *)(this_00 + 0x34) = 0x80;
              TBitArray<FDefaultBitArrayAllocator>::Realloc
                        ((TBitArray<FDefaultBitArrayAllocator> *)(this_00 + 0x18),0);
            }
            if (1 < iVar8) {
              *(undefined4 *)(this_00 + 0x50) = 1;
              TSet<TTuple<unsigned___int64,Verse::VCell_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,Verse::VCell_*,0>,FDefaultSetAllocator>
              ::Rehash((TSet<TTuple<unsigned___int64,Verse::VCell_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,Verse::VCell_*,0>,FDefaultSetAllocator>
                        *)(this_00 + 8));
            }
            LOCK();
            aVar2 = *this_00;
            *this_00 = (atomic<unsigned_char>)((char)*this_00 + -1);
            UNLOCK();
            if (((byte)aVar2 & 2) != 0) {
              UE::FMutex::WakeWaitingThread((FMutex *)this_00);
            }
          }
          break;
        }
        iVar8 = (int)puVar11[0xc];
      } while (iVar8 != -1);
    }
  }
  if ((param_1->RefCount != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("RefCount == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x57a,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_5c = 0;
  local_3e = 0;
  local_3a = 0;
  local_70.Allocation = (uchar *)0x0;
  local_68 = 0;
  local_60 = 0xffffffff;
  local_58 = 0;
  local_50 = 0xffffffff;
  local_4c = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_40 = 0;
  FLoadedPackageRef::operator=(param_1,(FLoadedPackageRef *)&local_70);
  if (1 < local_68._4_4_) {
    FMemory::Free(local_70.Allocation);
  }
  (pUVar9->PackageId).Id = 0;
  return;
}

// StoreGlobalCell @ 14233e3c0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FGlobalImportStore::StoreGlobalCell
          (FGlobalImportStore *this,FPackageId param_1,ulong64 param_2,VCell *param_3)

{
  TMap<FPackageId,FLoadedPackageCellsRef,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FLoadedPackageCellsRef,0>_>
  *this_00;
  atomic<unsigned_char> aVar1;
  FMutex FVar2;
  code *pcVar3;
  int iVar4;
  ulong64 *puVar5;
  undefined1 *puVar6;
  FMutex *this_01;
  atomic<unsigned_char> *this_02;
  bool bVar7;
  int local_res8 [2];
  ulong64 local_res10;
  undefined4 local_res18 [4];
  ulong64 local_78;
  VCell *local_70;
  ulong64 *local_68;
  undefined4 *local_60;
  ulong64 *local_58;
  VCell **local_50;
  
  this_00 = &this->PackageCells;
  local_res10 = param_1.Id;
  if (*(int *)&(this->PackageCells).field_0x8 != *(int *)&(this->PackageCells).field_0x34) {
    puVar6 = *(undefined1 **)&(this->PackageCells).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->PackageCells).field_0x38;
    }
    iVar4 = *(int *)(puVar6 + ((ulonglong)(*(int *)&(this->PackageCells).field_0x48 - 1) &
                              param_1.Id & 0xffffffff) * 4);
    if (iVar4 != -1) {
      do {
        puVar5 = (ulong64 *)((longlong)iVar4 * 0x68 + *(longlong *)&this_00->field_0x0);
        if (*puVar5 == param_1.Id) {
          this_02 = (atomic<unsigned_char> *)(puVar5 + 1);
          if (puVar5 == (ulong64 *)0x0) {
            this_02 = (atomic<unsigned_char> *)0x0;
          }
          if (this_02 != (atomic<unsigned_char> *)0x0) goto LAB_14233e4cd;
          break;
        }
        iVar4 = (int)puVar5[0xc];
      } while (iVar4 != -1);
    }
  }
  this_01 = &this->PackageCellsMutex;
  LOCK();
  bVar7 = this_01->State == (atomic<unsigned_char>)0x0;
  if (bVar7) {
    this_01->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar7) {
    UE::FMutex::LockSlow(this_01);
  }
  local_68 = &local_res10;
  local_res18[0] = 0;
  local_60 = local_res18;
  TSet<TTuple<FPackageId,FLoadedPackageCellsRef>,TDefaultMapHashableKeyFuncs<FPackageId,FLoadedPackageCellsRef,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TPairInitializer<FPackageId_&,enum_EInPlace_&&>_>
            ((TSet<TTuple<FPackageId,FLoadedPackageCellsRef>,TDefaultMapHashableKeyFuncs<FPackageId,FLoadedPackageCellsRef,0>,FDefaultSetAllocator>
              *)this_00,(uint)local_res8,
             (TPairInitializer<FPackageId_&,EInPlace_&&> *)(param_1.Id & 0xffffffff),
             (bool *)&local_68);
  this_02 = (atomic<unsigned_char> *)
            (*(longlong *)&this_00->field_0x0 + (longlong)local_res8[0] * 0x68 + 8);
  LOCK();
  aVar1 = this_01->State;
  this_01->State = (atomic<unsigned_char>)((char)this_01->State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    UE::FMutex::WakeWaitingThread(this_01);
  }
LAB_14233e4cd:
  local_78 = param_2;
  local_70 = param_3;
  if ((this_02[1] == (atomic<unsigned_char>)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("bPinned",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x617,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  LOCK();
  FVar2.State = *this_02;
  if (FVar2.State == (atomic<unsigned_char>)0x0) {
    *this_02 = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (FVar2.State != (atomic<unsigned_char>)0x0) {
    UE::FMutex::LockSlow((FMutex *)this_02);
  }
  local_58 = &local_78;
  local_50 = &local_70;
  TSet<TTuple<unsigned___int64,Verse::VCell_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,Verse::VCell_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned___int64_const_&,Verse::VCell_*_const_&>_>
            ((TSet<TTuple<unsigned___int64,Verse::VCell_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,Verse::VCell_*,0>,FDefaultSetAllocator>
              *)(this_02 + 8),
             (TPairInitializer<unsigned___int64_const_&,Verse::VCell_*_const_&> *)(local_res18 + 2),
             (bool *)&local_58);
  LOCK();
  aVar1 = *this_02;
  *this_02 = (atomic<unsigned_char>)((char)*this_02 + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    UE::FMutex::WakeWaitingThread((FMutex *)this_02);
  }
  return;
}

// StoreGlobalObject @ 14233e570

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FGlobalImportStore::StoreGlobalObject
          (FGlobalImportStore *this,FPackageId param_1,ulong64 param_2,UObject *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  FLoadedPackageRef *pFVar5;
  FUObjectItem *pFVar6;
  FUObjectItem *pFVar7;
  uint *puVar8;
  FPackageId FVar9;
  undefined1 *puVar10;
  FPackageId FVar11;
  FPackageId FVar12;
  UObjectBase *this_00;
  uint *puVar13;
  uint local_res8 [2];
  FPackageId local_res10;
  ulong64 local_res18;
  UObject *local_res20;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  FPackageId local_108;
  FPackageId local_100;
  undefined8 local_f8;
  undefined1 local_f0 [24];
  FString local_d8;
  FString local_c8;
  uint *local_b8;
  undefined4 *local_b0;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  pFVar7 = (FUObjectItem *)0x0;
  local_res18 = param_2;
  local_res20 = param_3;
  if ((param_1.Id == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PackageId.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x884,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((param_2 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExportHash != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x885,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res8[0] = *(uint *)&param_3->field_0xc;
  if ((param_1.Id == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PackageId.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Serialization\\AsyncLoading2.h"
                         ,0xdd,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((param_2 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExportHash",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Serialization\\AsyncLoading2.h"
                         ,0xde,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_118 = (undefined4)(param_1.Id >> 0x20);
  local_110 = (undefined4)(param_2 >> 0x20);
  local_114 = (undefined4)param_1.Id;
  local_10c = (undefined4)param_2;
  AcquireSRWLockShared((PSRWLOCK)&this->PackagesLock);
  FVar9.Id._4_4_ = local_118;
  FVar9.Id._0_4_ = local_114;
  pFVar5 = FindPackageRefNoLock(this,FVar9);
  if (pFVar5 == (FLoadedPackageRef *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)&this->PackagesLock);
  }
  else {
    iVar3 = FLoadedPackageRef::FPublicExportMap::Find
                      (&pFVar5->PublicExportMap,CONCAT44(local_110,local_10c));
    if (iVar3 < 0) {
      this_00 = (UObjectBase *)0x0;
    }
    else {
      this_00 = _DAT_00000008;
      if (iVar3 < GUObjectArray.ObjObjects.NumElements) {
        pFVar6 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar3);
        this_00 = (pFVar6->field1_0x8).Object;
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)&this->PackagesLock);
    if ((this_00 != (UObjectBase *)0x0) && (this_00 != (UObjectBase *)param_3)) {
      iVar3 = this_00->InternalIndex;
      if (5 < (byte)LogStreaming._0_1_) {
        if ((iVar3 < 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                               ,0x443,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (iVar3 < GUObjectArray.ObjObjects.NumElements) {
          pFVar7 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar3);
        }
        local_100.Id = (pFVar7->field0_0x0).FlagsAndRefCount >> 0x20;
        local_res10.Id._0_4_ = this_00->ObjectFlags;
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_00,&local_88,(UObject *)0x0,None)
        ;
        local_108.Id = CONCAT44(local_118,local_114);
        ::LexToString(&local_a8,&local_108);
        ::FString::PrintfImpl((FString *)(local_f0 + 8),L"0x%s");
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        local_108.Id._0_4_ = local_res8[0];
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)local_res20,&local_98,(UObject *)0x0,None);
        UE::Logging::Private::BasicLog<6>
                  (&`public:_void___cdecl_FGlobalImportStore::StoreGlobalObject(FPackageId,unsigned___int64,UObject*___ptr64)___ptr64'
                    ::__l20::LOG_Static,(FLogCategoryBase *)&LogStreaming);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        if ((FPublicExportKey *)local_f0._8_8_ != (FPublicExportKey *)0x0) {
          FMemory::Free((void *)local_f0._8_8_);
        }
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
      }
      UObjectBaseUtility::AtomicallyClearInternalFlags((UObjectBaseUtility *)this_00,LoaderImport);
      TMapBase<int,FPublicExportKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPublicExportKey,0>_>
      ::Remove((TMapBase<int,FPublicExportKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPublicExportKey,0>_>
                *)&this->ObjectIndexToPublicExport,iVar3);
    }
  }
  if (*(int *)&(this->ObjectIndexToPublicExport).field_0x8 !=
      *(int *)&(this->ObjectIndexToPublicExport).field_0x34) {
    puVar10 = *(undefined1 **)&(this->ObjectIndexToPublicExport).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->ObjectIndexToPublicExport).field_0x38;
    }
    uVar4 = *(uint *)(puVar10 +
                     (ulonglong)
                     (*(int *)&(this->ObjectIndexToPublicExport).field_0x48 - 1U & local_res8[0]) *
                     4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar8 = (uint *)((longlong)(int)uVar4 * 0x1c +
                         *(longlong *)&this->ObjectIndexToPublicExport);
        if (*puVar8 == local_res8[0]) {
          puVar13 = puVar8 + 1;
          if (puVar8 == (uint *)0x0) {
            puVar13 = (uint *)0x0;
          }
          if ((puVar13 != (uint *)0x0) &&
             ((CONCAT44(puVar13[2],puVar13[3]) != CONCAT44(local_110,local_10c) ||
              (CONCAT44(*puVar13,puVar13[1]) != CONCAT44(local_118,local_114))))) {
            if (5 < (byte)LogStreaming._0_1_) {
              local_res10.Id = CONCAT44(*puVar13,puVar13[1]);
              ::LexToString(&local_78,&local_res10);
              ::FString::PrintfImpl(&local_c8,L"0x%s");
              if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_78.Data.AllocatorInstance.Data);
              }
              local_res10.Id = (ulong64)L"";
              if (local_c8.Data.ArrayNum != 0) {
                local_res10.Id = (ulong64)local_c8.Data.AllocatorInstance.Data;
              }
              local_100.Id = CONCAT44(local_118,local_114);
              ::LexToString(&local_68,&local_100);
              ::FString::PrintfImpl(&local_d8,L"0x%s");
              if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_68.Data.AllocatorInstance.Data);
              }
              UObjectBaseUtility::GetFullName
                        ((UObjectBaseUtility *)local_res20,&local_58,(UObject *)0x0,None);
              UE::Logging::Private::BasicLog<6>
                        (&`public:_void___cdecl_FGlobalImportStore::StoreGlobalObject(FPackageId,unsigned___int64,UObject*___ptr64)___ptr64'
                          ::__l41::LOG_Static,(FLogCategoryBase *)&LogStreaming);
              if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_58.Data.AllocatorInstance.Data);
              }
              if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_d8.Data.AllocatorInstance.Data);
              }
              if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_c8.Data.AllocatorInstance.Data);
              }
            }
            FVar12.Id._4_4_ = *puVar13;
            FVar12.Id._0_4_ = puVar13[1];
            AcquireSRWLockShared((PSRWLOCK)&this->PackagesLock);
            pFVar5 = FindPackageRefNoLock(this,FVar12);
            ReleaseSRWLockShared((PSRWLOCK)&this->PackagesLock);
            if (pFVar5 != (FLoadedPackageRef *)0x0) {
              local_f8 = 0;
              FLoadedPackageRef::RemovePublicExport
                        (pFVar5,CONCAT44(puVar13[2],puVar13[3]),(FName)0x0);
            }
            TMapBase<int,FPublicExportKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPublicExportKey,0>_>
            ::Remove((TMapBase<int,FPublicExportKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPublicExportKey,0>_>
                      *)&this->ObjectIndexToPublicExport,local_res8[0]);
          }
          break;
        }
        uVar4 = puVar8[5];
      } while (uVar4 != 0xffffffff);
    }
  }
  FVar11.Id._4_4_ = local_118;
  FVar11.Id._0_4_ = local_114;
  pFVar5 = FindPackageRefChecked(this,FVar11,(FName)0x0);
  FLoadedPackageRef::FPublicExportMap::Store
            (&pFVar5->PublicExportMap,local_res18,*(int *)&local_res20->field_0xc);
  local_b8 = local_res8;
  local_b0 = &local_118;
  TSet<TTuple<int,FPublicExportKey>,TDefaultMapHashableKeyFuncs<int,FPublicExportKey,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_const_&,FPublicExportKey_const_&>_>
            ((TSet<TTuple<int,FPublicExportKey>,TDefaultMapHashableKeyFuncs<int,FPublicExportKey,0>,FDefaultSetAllocator>
              *)&this->ObjectIndexToPublicExport,
             (TPairInitializer<int_const_&,FPublicExportKey_const_&> *)local_f0,(bool *)&local_b8);
  return;
}

// VerifyLoadedPackages @ 142342260

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FGlobalImportStore::VerifyLoadedPackages(FGlobalImportStore *this)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<FPackageId,FLoadedPackageRef,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FLoadedPackageRef,0>_>
  *pTVar6;
  TMap<FPackageId,FLoadedPackageRef,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FLoadedPackageRef,0>_>
  *pTVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  undefined1 local_res8 [8];
  int local_res10;
  TMap<FPackageId,FLoadedPackageRef,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FLoadedPackageRef,0>_>
  *local_res18;
  longlong local_a8;
  longlong local_a0;
  TMap<FPackageId,FLoadedPackageRef,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FLoadedPackageRef,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<FPackageId,FLoadedPackageRef,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FLoadedPackageRef,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_FGlobalImportStore::VerifyLoadedPackages(void)___ptr64'::__l2
                ::__CpuProfilerEventSpecId1892,"VerifyLoadedPackages",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
               ,0x764);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_FGlobalImportStore::VerifyLoadedPackages(void)___ptr64'::__l2::
               __CpuProfilerEventSpecId1892);
  }
  AcquireSRWLockShared((PSRWLOCK)&this->PackagesLock);
  iVar3 = *(int *)&(this->Packages).field_0x28;
  puVar2 = &(this->Packages).field_0x10;
  iStack_90 = 0;
  local_res18 = &this->Packages;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->Packages).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar2;
    }
    uVar13 = *puVar12;
    while (uVar13 == 0) {
      lVar9 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_142342360;
      uVar13 = puVar12[lVar9 + 1];
    }
    uStack_8c = -uVar13 & uVar13;
    uVar1 = (ulonglong)uStack_8c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iStack_7c = local_res10 + -1 + local_78;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_142342360:
  iStack_70 = *(int *)&(this->Packages).field_0x8 - *(int *)&(this->Packages).field_0x34;
  uVar13 = *(uint *)&(this->Packages).field_0x28;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  uStack_80 = 0xffffffff;
  uVar14 = uVar13 & 0xffffffe0;
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar13 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = local_res18;
  local_88 = puVar2;
  iStack_74 = iStack_7c;
  local_68 = local_res18;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar6 = local_res18;
  uVar4 = *(uint *)&(this->Packages).field_0x28;
  if (uVar13 != uVar4) {
    puVar11 = *(undefined1 **)&(this->Packages).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar2;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar13 == 0) {
      lVar9 = (longlong)iVar10;
      uVar14 = uVar14 + 0x20;
      iVar10 = iVar10 + 1;
      uVar13 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_142342470;
      uVar13 = *(uint *)(puVar11 + lVar9 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar13 = (int)lVar9 + -1 + uVar14;
    if ((int)uVar4 < (int)uVar13) {
      uVar13 = uVar4;
    }
  }
LAB_142342470:
  while( true ) {
    pTVar7 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FPackageId,FLoadedPackageRef>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar13) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar7 == pTVar6))
    break;
    lVar9 = *(longlong *)pTVar7 + (longlong)TStack_60.CurrentBitIndex * 0x48;
    if (*(int *)(lVar9 + 0x2c) != 0) {
      local_a8 = lVar9;
      local_a0 = lVar9 + 8;
      `FGlobalImportStore::VerifyLoadedPackages'::__l6::<lambda_1>::operator()(&local_a8);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->PackagesLock);
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// VerifyObjectForRemovalNoLock @ 142342510

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGlobalImportStore::VerifyObjectForRemovalNoLock(FGlobalImportStore *this,UObject *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  FLoadedPackageRef *pFVar6;
  undefined1 *puVar7;
  FPackageId FVar8;
  FPublicExportKey *pFVar9;
  FPackageId local_res8;
  UObject *local_res10;
  FPackageId local_res18;
  FScriptContainerElement *local_res20;
  FPackageId local_f8;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  if (*(int *)&(this->ObjectIndexToPublicExport).field_0x8 !=
      *(int *)&(this->ObjectIndexToPublicExport).field_0x34) {
    puVar7 = *(undefined1 **)&(this->ObjectIndexToPublicExport).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->ObjectIndexToPublicExport).field_0x38;
    }
    uVar4 = *(uint *)(puVar7 + (ulonglong)
                               (*(int *)&(this->ObjectIndexToPublicExport).field_0x48 - 1U &
                               *(uint *)&param_1->field_0xc) * 4);
    if (uVar4 != 0xffffffff) {
      while (puVar5 = (uint *)((longlong)(int)uVar4 * 0x1c +
                              *(longlong *)&this->ObjectIndexToPublicExport),
            *puVar5 != *(uint *)&param_1->field_0xc) {
        uVar4 = puVar5[5];
        if (uVar4 == 0xffffffff) {
          return;
        }
      }
      pFVar9 = (FPublicExportKey *)(puVar5 + 1);
      if (puVar5 == (uint *)0x0) {
        pFVar9 = (FPublicExportKey *)0x0;
      }
      if (pFVar9 != (FPublicExportKey *)0x0) {
        FVar8.Id._4_4_ = pFVar9->PackageIdHigh;
        FVar8.Id._0_4_ = pFVar9->PackageIdLow;
        pFVar6 = FindPackageRefNoLock(this,FVar8);
        if (pFVar6 == (FLoadedPackageRef *)0x0) {
          if (2 < (byte)LogStreaming._0_1_) {
            local_f8.Id = FVar8.Id;
            ::LexToString(&local_70,&local_f8);
            ::FString::PrintfImpl(&local_d0,L"0x%s");
            if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_70.Data.AllocatorInstance.Data);
            }
            iVar1 = *(int *)&param_1->field_0xc;
            if ((iVar1 < 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                   ,0x443,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if (iVar1 < GUObjectArray.ObjObjects.NumElements) {
              FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar1);
            }
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)param_1,local_60,(UObject *)0x0,None);
            UE::Logging::Private::BasicLog<3>
                      (&`public:_void___cdecl_FGlobalImportStore::VerifyObjectForRemovalNoLock(UObject*___ptr64)___ptr64'
                        ::__l55::LOG_Static,(FLogCategoryBase *)&LogStreaming);
            if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
            }
            if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d0.Data.AllocatorInstance.Data);
            }
          }
        }
        else {
          local_res10 = FindPublicExportObjectUncheckedNoLock(this,pFVar9);
          if (local_res10 == (UObject *)0x0) {
            local_res18.Id = FVar8.Id;
            ::LexToString(&local_c0,&local_res18);
            ::FString::PrintfImpl(&local_f0,L"0x%s");
            if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c0.Data.AllocatorInstance.Data);
            }
            iVar1 = *(int *)&param_1->field_0xc;
            local_res20 = (FScriptContainerElement *)L"";
            if (local_f0.Data.ArrayNum != 0) {
              local_res20 = local_f0.Data.AllocatorInstance.Data;
            }
            if ((iVar1 < 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                   ,0x443,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if (iVar1 < GUObjectArray.ObjObjects.NumElements) {
              FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar1);
            }
            local_res8.Id._0_4_ = *(undefined4 *)&param_1->field_0x8;
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)param_1,&local_b0,(UObject *)0x0,None);
            UE::Logging::Private::BasicFatalLog
                      (&`public:_void___cdecl_FGlobalImportStore::VerifyObjectForRemovalNoLock(UObject*___ptr64)___ptr64'
                        ::__l9::LOG_Static,(FLogCategoryBase *)&LogStreaming);
            if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b0.Data.AllocatorInstance.Data);
            }
            if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f0.Data.AllocatorInstance.Data);
            }
          }
          if (local_res10 != param_1) {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)local_res10,&local_80,(UObject *)0x0,None);
            local_res8.Id = FVar8.Id;
            ::LexToString(&local_a0,&local_res8);
            ::FString::PrintfImpl(&local_e0,L"0x%s");
            if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a0.Data.AllocatorInstance.Data);
            }
            iVar1 = *(int *)&param_1->field_0xc;
            if ((iVar1 < 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                   ,0x443,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if (iVar1 < GUObjectArray.ObjObjects.NumElements) {
              FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar1);
            }
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)param_1,&local_90,(UObject *)0x0,None);
            UE::Logging::Private::BasicFatalLog
                      (&`public:_void___cdecl_FGlobalImportStore::VerifyObjectForRemovalNoLock(UObject*___ptr64)___ptr64'
                        ::__l31::LOG_Static,(FLogCategoryBase *)&LogStreaming);
            if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_90.Data.AllocatorInstance.Data);
            }
            if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e0.Data.AllocatorInstance.Data);
            }
            if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_80.Data.AllocatorInstance.Data);
            }
          }
        }
      }
    }
  }
  return;
}

// VerifyPackageForRemovalNoLock @ 1423429e0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGlobalImportStore::VerifyPackageForRemovalNoLock
          (FGlobalImportStore *this,FLoadedPackageRef *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  UPackage *pUVar7;
  uint *puVar8;
  FUObjectItem *pFVar9;
  ulong64 uVar10;
  undefined1 *puVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  FUObjectItem *pFVar15;
  FPackageId local_res10;
  UObjectBase *local_res18;
  UPackage *local_res20;
  TArrayView<int,int> local_158;
  uint local_148;
  FString local_140;
  FName local_130;
  FPackageId local_128;
  FName local_120;
  FPackageId local_118;
  FPackageId local_110;
  FName local_108;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  UObjectBase **local_b0;
  FPackageId *local_a8;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  pUVar7 = FLoadedPackageRef::GetPackage(param_1);
  local_res10.Id = (pUVar7->PackageId).Id;
  local_res20 = pUVar7;
  if (0 < param_1->RefCount) {
    ::LexToString(&local_a0,&local_res10);
    local_130 = (FName)pUVar7->_padding_;
    ::FName::ToString(&local_130,&local_100);
    UE::Logging::Private::BasicFatalLog
              (&`public:_void___cdecl_FGlobalImportStore::VerifyPackageForRemovalNoLock(FLoadedPackageRef&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogStreaming);
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
  }
  iVar1 = (param_1->PublicExportMap).Capacity;
  local_140.Data.ArrayNum = iVar1;
  if (iVar1 == 1) {
    local_158.DataPtr = &(param_1->PublicExportMap).SingleItemValue;
    local_148 = 0;
    local_158._12_4_ = local_140.Data.ArrayMax;
    local_158.ArrayNum = 1;
    local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_158.DataPtr;
    do {
      uVar14 = local_148;
      lVar12 = (longlong)(int)local_148;
      uVar5 = 0;
      if ((int)local_148 < 1) {
        uVar5 = ~local_148 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar13 = iVar1;
    } while ((*(int *)((longlong)local_158.DataPtr + lVar12 * 4) == -1) &&
            (uVar14 = uVar14 + 1, local_148 = uVar14, (int)uVar14 < 1));
  }
  else {
    local_140.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)
         ((param_1->PublicExportMap).field0_0x0.Allocation + (longlong)iVar1 * 8);
    if ((iVar1 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar13 = local_140.Data.ArrayNum;
    local_158._12_4_ = local_140.Data.ArrayMax;
    local_158.ArrayNum = local_140.Data.ArrayNum;
    local_148 = 0;
    local_158.DataPtr = (int *)local_140.Data.AllocatorInstance.Data;
    if (iVar1 < 1) {
      return;
    }
    do {
      uVar14 = local_148;
      lVar12 = (longlong)(int)local_148;
      uVar5 = 0;
      if ((int)local_148 < iVar13) {
        uVar5 = ~local_148 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    } while ((*(int *)((longlong)local_158.DataPtr + lVar12 * 4) == -1) &&
            (uVar14 = uVar14 + 1, local_148 = uVar14, (int)uVar14 < iVar1));
  }
  pFVar15 = (FUObjectItem *)0x0;
  do {
    if (iVar13 <= (int)uVar14) {
      return;
    }
    puVar8 = (uint *)TArrayView<int,int>::operator[](&local_158,uVar14);
    uVar5 = *puVar8;
    if (((int)uVar5 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x443,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar9 = pFVar15;
    if ((int)uVar5 < GUObjectArray.ObjObjects.NumElements) {
      pFVar9 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,uVar5);
    }
    local_res18 = (pFVar9->field1_0x8).Object;
    iVar1 = local_res18->InternalIndex;
    if ((iVar1 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x443,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar9 = pFVar15;
    if (iVar1 < GUObjectArray.ObjObjects.NumElements) {
      pFVar9 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar1);
    }
    if ((((uint)((ulonglong)(pFVar9->field0_0x0).FlagsAndRefCount >> 0x34) & 1) != 0) &&
       (GUObjectArray.ObjLastNonGCIndex < local_res18->InternalIndex)) {
      local_b0 = &local_res18;
      local_a8 = &local_res10;
      `FGlobalImportStore::VerifyPackageForRemovalNoLock'::__l26::<lambda_1>::operator()(&local_b0);
    }
    pFVar9 = pFVar15;
    if (*(int *)&(this->ObjectIndexToPublicExport).field_0x8 !=
        *(int *)&(this->ObjectIndexToPublicExport).field_0x34) {
      puVar2 = *(undefined1 **)&(this->ObjectIndexToPublicExport).field_0x40;
      puVar11 = &(this->ObjectIndexToPublicExport).field_0x38;
      if (puVar2 != (undefined1 *)0x0) {
        puVar11 = puVar2;
      }
      uVar6 = *(uint *)(puVar11 +
                       (ulonglong)
                       (*(int *)&(this->ObjectIndexToPublicExport).field_0x48 - 1U & uVar5) * 4);
      if (uVar6 != 0xffffffff) {
        do {
          puVar8 = (uint *)((longlong)(int)uVar6 * 0x1c +
                           *(longlong *)&this->ObjectIndexToPublicExport);
          if (*puVar8 == uVar5) {
            pFVar9 = (FUObjectItem *)(puVar8 + 1);
            if (puVar8 == (uint *)0x0) {
              pFVar9 = pFVar15;
            }
            if (pFVar9 != (FUObjectItem *)0x0) goto LAB_142342e93;
            break;
          }
          uVar6 = puVar8[5];
        } while (uVar6 != 0xffffffff);
      }
    }
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)local_res18,&local_80,(UObject *)0x0,None)
    ;
    local_128.Id = local_res10.Id;
    ::LexToString(&local_90,&local_128);
    ::FString::PrintfImpl(&local_e0,L"0x%s");
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    local_120 = (FName)local_res20->_padding_;
    ::FName::ToString(&local_120,&local_f0);
    UE::Logging::Private::BasicFatalLog
              (&`public:_void___cdecl_FGlobalImportStore::VerifyPackageForRemovalNoLock(FLoadedPackageRef&___ptr64)___ptr64'
                ::__l27::LOG_Static,(FLogCategoryBase *)&LogStreaming);
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
LAB_142342e93:
    uVar10 = CONCAT44(*(uint *)&pFVar9->field0_0x0,*(uint *)((longlong)&pFVar9->field0_0x0 + 4));
    if (uVar10 != local_res10.Id) {
      local_118.Id = uVar10;
      ::LexToString(&local_70,&local_118);
      ::FString::PrintfImpl(&local_140,L"0x%s");
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)local_res18,&local_50,(UObject *)0x0,None);
      local_110.Id = local_res10.Id;
      ::LexToString(&local_60,&local_110);
      ::FString::PrintfImpl(&local_c0,L"0x%s");
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
      local_108 = (FName)local_res20->_padding_;
      ::FName::ToString(&local_108,&local_d0);
      UE::Logging::Private::BasicFatalLog
                (&`public:_void___cdecl_FGlobalImportStore::VerifyPackageForRemovalNoLock(FLoadedPackageRef&___ptr64)___ptr64'
                  ::__l49::LOG_Static,(FLogCategoryBase *)&LogStreaming);
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
    }
    VerifyObjectForRemovalNoLock(this,(UObject *)local_res18);
    do {
      uVar14 = uVar14 + 1;
      local_148 = uVar14;
      if (iVar13 <= (int)uVar14) break;
      uVar5 = 0;
      if ((int)uVar14 < iVar13) {
        uVar5 = ~uVar14 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    } while (*(int *)((longlong)local_158.DataPtr + (longlong)(int)uVar14 * 4) == -1);
  } while( true );
}

// operator() @ 15048a4f0

bool __thiscall `FGlobalImportStore::ReleasePackageRef'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  FName local_res20;
  FString local_68;
  FString local_58;
  FString local_48;
  
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar5 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4516523828209252533>);
  if (bVar5) {
    ::LexToString(&local_48,*(FPackageId **)((longlong)this + 0x10));
    local_res20 = *(FName *)(*(longlong *)((longlong)this + 8) + 0x18);
    ::FName::ToString(&local_res20,&local_58);
    ::LexToString(&local_68,*(FPackageId **)this);
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    bVar5 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4516523828209252533>,
                       &`public:___cdecl_`public:_void___cdecl_FGlobalImportStore::ReleasePackageRef(FPackageId,FPackageId)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar5) {
      bVar5 = true;
      goto LAB_15048a65a;
    }
  }
  bVar5 = false;
LAB_15048a65a:
  if ((bVar2) && (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return (bool)uVar6;
  }
  return false;
}

// operator() @ 15048a7e0

bool __thiscall `FGlobalImportStore::VerifyLoadedPackages'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FPackageId local_res10;
  FString local_28;
  FString local_18;
  
  bVar4 = false;
  local_res10.Id = local_res10.Id & 0xffffffff00000000;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4516523828209252498>);
  if (bVar2) {
    local_res10.Id = **(ulonglong **)this;
    ::LexToString(&local_18,&local_res10);
    ::FString::PrintfImpl(&local_28,L"0x%s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4516523828209252498>,
                       &`public:___cdecl_`public:_void___cdecl_FGlobalImportStore::VerifyLoadedPackages(void)___ptr64'::`6'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15048a8a0;
    }
  }
  bVar2 = false;
LAB_15048a8a0:
  if ((bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15048a8e0

bool __thiscall
`FGlobalImportStore::VerifyPackageForRemovalNoLock'::__l26::<lambda_1>::operator()(void *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  FPackageId local_res10;
  FString local_48;
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar5 = false;
  local_res10.Id = local_res10.Id & 0xffffffff00000000;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4516523828209252306>);
  if (bVar4) {
    local_res10.Id = **(ulonglong **)((longlong)this + 8);
    ::LexToString(&local_38,&local_res10);
    ::FString::PrintfImpl(&local_48,L"0x%s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    iVar1 = *(int *)(**(longlong **)this + 0xc);
    if ((iVar1 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x443,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    if (iVar1 < GUObjectArray.ObjObjects.NumElements) {
      FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar1);
    }
    UObjectBaseUtility::GetFullName
              ((UObjectBaseUtility *)**(undefined8 **)this,&local_28,(UObject *)0x0,None);
    bVar3 = true;
    bVar5 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4516523828209252306>,
                       &`public:___cdecl_`public:_void___cdecl_FGlobalImportStore::VerifyPackageForRemovalNoLock(FLoadedPackageRef&___ptr64)___ptr64'::`26'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15048aa4f;
    }
  }
  bVar4 = false;
LAB_15048aa4f:
  if ((bVar5) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  return false;
}

// operator() @ 15048adb0

bool __thiscall `FGlobalImportStore::RemovePackageNoLock'::__l6::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4516523828209252426>);
  if (bVar2) {
    ::LexToString(&local_18,*(FPackageId **)this);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4516523828209252426>,
                       &`public:___cdecl_`public:_void___cdecl_FGlobalImportStore::RemovePackageNoLock(FPackageId)___ptr64'::`6'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15048ae17;
    }
  }
  bVar2 = false;
LAB_15048ae17:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

