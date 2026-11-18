// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// AddRootProcessId @ 148516ab0

void __thiscall
FWindowsResourceProcessTreeMemory::AddRootProcessId
          (FWindowsResourceProcessTreeMemory *this,uint param_1)

{
  uint local_res10 [2];
  uint local_res18 [4];
  
  if (param_1 != 0) {
    local_res10[0] = param_1;
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
    Emplace<unsigned_int_const_&>(&this->RootProcessIds,local_res18,(bool *)local_res10);
  }
  return;
}

// CollectTreeProcessIds @ 14851b3c0

void __thiscall
FWindowsResourceProcessTreeMemory::CollectTreeProcessIds(FWindowsResourceProcessTreeMemory *this)

{
  int *piVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FWindowsResourceProcessTreeMemory *pFVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined4 local_res8 [2];
  int local_res10;
  FProcEnumInfo local_res18;
  undefined8 local_d8;
  FProcEnumerator local_d0;
  FWindowsResourceProcessTreeMemory *local_c0;
  int iStack_b8;
  uint uStack_b4;
  undefined1 *local_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int local_a0;
  undefined4 uStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  FWindowsResourceProcessTreeMemory *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  piVar1 = &(this->AllProcesses).ArrayMax;
  iVar12 = 0;
  (this->AllProcesses).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->AllProcesses).AllocatorInstance,0,piVar1);
  }
  bVar7 = 1 < (this->TreeProcessIds).HashSize;
  if (!bVar7) {
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::UnhashElements
              (&this->TreeProcessIds);
  }
  puVar2 = &(this->TreeProcessIds).Elements.field_0xc;
  *(undefined4 *)&(this->TreeProcessIds).Elements.field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)&this->TreeProcessIds,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->TreeProcessIds).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TreeProcessIds).Elements.field_0x34 = 0;
  iVar9 = *(int *)&(this->TreeProcessIds).Elements.field_0x2c;
  *(undefined4 *)&(this->TreeProcessIds).Elements.field_0x28 = 0;
  if ((iVar9 < 0) || (0x80 < iVar9)) {
    *(undefined4 *)&(this->TreeProcessIds).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->TreeProcessIds).Elements.field_0x10,0
              );
  }
  local_res8[0] = 1;
  uVar10 = 1;
  if (bVar7) {
    (this->TreeProcessIds).HashSize = 1;
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Rehash
              (&this->TreeProcessIds);
  }
  if (*(int *)&(this->RootProcessIds).Elements.field_0x8 !=
      *(int *)&(this->RootProcessIds).Elements.field_0x34) {
    FWindowsPlatformProcess::FProcEnumerator::FProcEnumerator(&local_d0);
    bVar7 = FWindowsPlatformProcess::FProcEnumerator::MoveNext(&local_d0);
    if (bVar7) {
      do {
        FWindowsPlatformProcess::FProcEnumerator::GetCurrent(&local_d0);
        local_d8 = 0;
        uVar8 = FWindowsPlatformProcess::FProcEnumInfo::GetPID(&local_res18);
        local_d8 = CONCAT44(local_d8._4_4_,uVar8);
        uVar8 = FWindowsPlatformProcess::FProcEnumInfo::GetParentPID(&local_res18);
        pFVar4 = (this->AllProcesses).AllocatorInstance.Data;
        local_d8 = CONCAT44(uVar8,(undefined4)local_d8);
        if (((pFVar4 <= (FScriptContainerElement *)&local_d8) &&
            ((FScriptContainerElement *)&local_d8 < pFVar4 + (longlong)*piVar1 * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (this->AllProcesses).ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&(this->AllProcesses).AllocatorInstance,piVar1);
        }
        (this->AllProcesses).ArrayNum = iVar9 + 1;
        *(undefined8 *)((this->AllProcesses).AllocatorInstance.Data + (longlong)iVar9 * 8) =
             local_d8;
        FWindowsPlatformProcess::FProcEnumInfo::~FProcEnumInfo(&local_res18);
        bVar7 = FWindowsPlatformProcess::FProcEnumerator::MoveNext(&local_d0);
      } while (bVar7);
    }
    iVar9 = *(int *)&(this->RootProcessIds).Elements.field_0x28;
    puVar2 = &(this->RootProcessIds).Elements.field_0x10;
    local_a0 = 0;
    iStack_a4 = iVar12;
    if (iVar9 != 0) {
      puVar16 = *(uint **)&(this->RootProcessIds).Elements.field_0x20;
      if (puVar16 == (uint *)0x0) {
        puVar16 = (uint *)puVar2;
      }
      uVar8 = *puVar16;
      local_a0 = 0;
      iVar12 = 0;
      while (uVar8 == 0) {
        lVar11 = (longlong)iVar12;
        local_a0 = local_a0 + 0x20;
        iVar12 = iVar12 + 1;
        iStack_a4 = iVar9;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14851b620;
        uVar8 = puVar16[lVar11 + 1];
      }
      uVar10 = -uVar8 & uVar8;
      uVar3 = (ulonglong)uVar10 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_res10 = (int)lVar11;
      iStack_a4 = local_res10 + -1 + local_a0;
      if (iVar9 < iStack_a4) {
        iStack_a4 = iVar9;
      }
    }
LAB_14851b620:
    uVar8 = *(uint *)&(this->RootProcessIds).Elements.field_0x28;
    uStack_9c = local_44;
    uVar14 = uVar8 & 0xffffffe0;
    iStack_98 = *(int *)&(this->RootProcessIds).Elements.field_0x8 -
                *(int *)&(this->RootProcessIds).Elements.field_0x34;
    uStack_a8 = 0xffffffff;
    TStack_88._padding_ = CONCAT44(uVar10,iVar12);
    TStack_88.CurrentBitIndex = iStack_a4;
    TStack_88.UnvisitedBitMask = 0xffffffff;
    iVar13 = (int)uVar8 >> 5;
    TStack_88._28_4_ = local_44;
    TStack_88.BaseBitIndex = local_a0;
    uStack_68 = CONCAT44(uStack_94,iStack_98);
    local_c0 = this;
    iStack_b8 = iVar12;
    uStack_b4 = uVar10;
    local_b0 = puVar2;
    local_90 = this;
    TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
    if ((((int)uVar8 < 0) || (iVar9 < (int)uVar8)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar10 = *(uint *)&(this->RootProcessIds).Elements.field_0x28;
    if (uVar8 != uVar10) {
      puVar15 = *(undefined1 **)&(this->RootProcessIds).Elements.field_0x20;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = puVar2;
      }
      uVar8 = -1 << ((byte)uVar8 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar13 * 4);
      while (uVar8 == 0) {
        lVar11 = (longlong)iVar13;
        uVar14 = uVar14 + 0x20;
        iVar13 = iVar13 + 1;
        uVar8 = uVar10;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_14851b720;
        uVar8 = *(uint *)(puVar15 + lVar11 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar8 & uVar8) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar8 = (int)lVar11 + -1 + uVar14;
      if ((int)uVar10 < (int)uVar8) {
        uVar8 = uVar10;
      }
    }
LAB_14851b720:
    while( true ) {
      pFVar6 = local_90;
      if (*(int *)&(local_90->RootProcessIds).Elements.field_0x8 -
          *(int *)&(local_90->RootProcessIds).Elements.field_0x34 != (int)uStack_68) {
        `TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_88.CurrentBitIndex == uVar8) &&
          (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pFVar6 == this))
      break;
      CollectTreeProcessIdsRecurse
                (this,*(uint *)(*(longlong *)&(pFVar6->RootProcessIds).Elements +
                               (longlong)TStack_88.CurrentBitIndex * 0xc));
      TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
    }
    FWindowsPlatformProcess::FProcEnumerator::~FProcEnumerator(&local_d0);
  }
  return;
}

// CollectTreeProcessIdsRecurse @ 14851b7a0

void __thiscall
FWindowsResourceProcessTreeMemory::CollectTreeProcessIdsRecurse
          (FWindowsResourceProcessTreeMemory *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  uint local_res10 [2];
  char local_res18;
  uint local_res20 [2];
  
  if (param_1 != 0) {
    local_res18 = '\0';
    local_res10[0] = param_1;
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
    Emplace<unsigned_int_const_&>(&this->TreeProcessIds,local_res20,(bool *)local_res10);
    if (local_res18 == '\0') {
      pFVar3 = (this->AllProcesses).AllocatorInstance.Data;
      iVar2 = (this->AllProcesses).ArrayNum;
      pFVar1 = pFVar3 + (longlong)iVar2 * 8;
      while( true ) {
        if ((this->AllProcesses).ArrayNum != iVar2) {
          `TCheckedPointerIterator<FWindowsResourceProcessTreeMemory::FProcessInfo,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (pFVar3 == pFVar1) break;
        if (*(uint *)(pFVar3 + 4) == param_1) {
          CollectTreeProcessIdsRecurse(this,*(uint *)pFVar3);
        }
        pFVar3 = pFVar3 + 8;
      }
    }
  }
  return;
}

// Reset @ 148541970

void __thiscall FWindowsResourceProcessTreeMemory::Reset(FWindowsResourceProcessTreeMemory *this)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *this_00;
  
  bVar4 = 1 < (this->RootProcessIds).HashSize;
  if (!bVar4) {
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::UnhashElements
              (&this->RootProcessIds);
  }
  puVar1 = &(this->RootProcessIds).Elements.field_0xc;
  *(undefined4 *)&(this->RootProcessIds).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->RootProcessIds).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RootProcessIds).Elements.field_0x34 = 0;
  iVar3 = *(int *)&(this->RootProcessIds).Elements.field_0x2c;
  *(undefined4 *)&(this->RootProcessIds).Elements.field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->RootProcessIds).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->RootProcessIds).Elements.field_0x10,0
              );
  }
  if (bVar4) {
    (this->RootProcessIds).HashSize = 1;
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Rehash
              (&this->RootProcessIds);
  }
  piVar2 = &(this->AllProcesses).ArrayMax;
  (this->AllProcesses).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->AllProcesses).AllocatorInstance,0,piVar2);
  }
  this_00 = &this->TreeProcessIds;
  bVar4 = 1 < (this->TreeProcessIds).HashSize;
  if (!bVar4) {
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::UnhashElements(this_00)
    ;
  }
  puVar1 = &(this->TreeProcessIds).Elements.field_0xc;
  *(undefined4 *)&(this->TreeProcessIds).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->TreeProcessIds).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TreeProcessIds).Elements.field_0x34 = 0;
  iVar3 = *(int *)&(this->TreeProcessIds).Elements.field_0x2c;
  *(undefined4 *)&(this->TreeProcessIds).Elements.field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->TreeProcessIds).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->TreeProcessIds).Elements.field_0x10,0
              );
  }
  if (bVar4) {
    (this->TreeProcessIds).HashSize = 1;
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Rehash(this_00);
  }
  return;
}

// TryGetMemoryUsage @ 14854a330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FWindowsResourceProcessTreeMemory::TryGetMemoryUsage
          (FWindowsResourceProcessTreeMemory *this,FPlatformProcessMemoryStats *param_1)

{
  undefined1 *puVar1;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *pTVar2;
  ulonglong uVar3;
  uint uVar4;
  code *pcVar5;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *pTVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  DWORD DVar10;
  HANDLE hObject;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 auStack_148 [32];
  undefined1 local_128 [8];
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *local_120;
  int iStack_118;
  uint uStack_114;
  undefined1 *local_110;
  undefined4 uStack_108;
  int iStack_104;
  int local_100;
  int iStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  int local_f0;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong lStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong lStack_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  CollectTreeProcessIds(this);
  puVar1 = &(this->TreeProcessIds).Elements.field_0x10;
  iStack_118 = 0;
  pTVar2 = &this->TreeProcessIds;
  param_1->UsedPhysical = 0;
  param_1->PeakUsedPhysical = 0;
  uStack_114 = 1;
  param_1->UsedVirtual = 0;
  param_1->PeakUsedVirtual = 0;
  iVar9 = *(int *)&(this->TreeProcessIds).Elements.field_0x28;
  local_100 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  iStack_104 = 0;
  if (iVar9 != 0) {
    puVar15 = *(uint **)&(this->TreeProcessIds).Elements.field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar12 = *puVar15;
    while (uVar12 == 0) {
      lVar11 = (longlong)iStack_118;
      local_100 = local_100 + 0x20;
      iStack_118 = iStack_118 + 1;
      iStack_104 = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_118) goto LAB_14854a3ff;
      uVar12 = puVar15[lVar11 + 1];
    }
    uStack_114 = -uVar12 & uVar12;
    uVar3 = (ulonglong)uStack_114 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_f0 = (int)lVar11;
    iStack_104 = local_f0 + -1 + local_100;
    if (iVar9 < iStack_104) {
      iStack_104 = iVar9;
    }
  }
LAB_14854a3ff:
  iStack_f8 = *(int *)&(this->TreeProcessIds).Elements.field_0x8 -
              *(int *)&(this->TreeProcessIds).Elements.field_0x34;
  uVar12 = *(uint *)&(this->TreeProcessIds).Elements.field_0x28;
  uStack_108 = 0xffffffff;
  uVar16 = uVar12 & 0xffffffe0;
  TStack_e0._padding_ = CONCAT44(uStack_114,iStack_118);
  TStack_e0.CurrentBitIndex = iStack_104;
  TStack_e0.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_e0._28_4_ = iStack_104;
  TStack_e0.BaseBitIndex = local_100;
  uStack_c0 = CONCAT44(uStack_f4,iStack_f8);
  local_120 = pTVar2;
  local_110 = puVar1;
  iStack_fc = iStack_104;
  local_e8 = pTVar2;
  TStack_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar9 < (int)uVar12)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  uVar4 = *(uint *)&(this->TreeProcessIds).Elements.field_0x28;
  if (uVar12 != uVar4) {
    puVar14 = *(undefined1 **)&(this->TreeProcessIds).Elements.field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar11 = (longlong)iVar13;
      uVar16 = uVar16 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14854a510;
      uVar12 = *(uint *)(puVar14 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar12 = (int)lVar11 + -1 + uVar16;
    if ((int)uVar4 < (int)uVar12) {
      uVar12 = uVar4;
    }
  }
LAB_14854a510:
  while( true ) {
    pTVar6 = local_e8;
    if (*(int *)&(local_e8->Elements).field_0x8 - *(int *)&(local_e8->Elements).field_0x34 !=
        (int)uStack_c0) {
      `TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_128);
    }
    if (((TStack_e0.CurrentBitIndex == uVar12) &&
        (TStack_e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == pTVar2))
    break;
    hObject = OpenProcess(0x410,0,*(DWORD *)(*(longlong *)&pTVar6->Elements +
                                            (longlong)TStack_e0.CurrentBitIndex * 0xc));
    if (hObject != (HANDLE)0x0) {
      local_58 = 0;
      local_98 = 0;
      lStack_90 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      lStack_60 = 0;
      iVar9 = K32GetProcessMemoryInfo(hObject,&local_98,0x48);
      if (iVar9 == 0) {
        bVar7 = FWindowsPlatformMisc::IsWine();
        if (((!bVar7) || (DVar10 = GetLastError(), DVar10 != 5)) && (2 < (byte)LogWindows._0_1_)) {
          GetLastError();
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
        }
        CloseHandle(hObject);
        return false;
      }
      param_1->UsedPhysical = param_1->UsedPhysical + local_88;
      param_1->PeakUsedPhysical = param_1->PeakUsedPhysical + lStack_90;
      param_1->UsedVirtual = param_1->UsedVirtual + lStack_60;
      param_1->PeakUsedVirtual = param_1->PeakUsedVirtual + local_58;
      CloseHandle(hObject);
    }
    TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
  }
  return true;
}

