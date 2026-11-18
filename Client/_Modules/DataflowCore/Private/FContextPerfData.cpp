// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 3

// Accumulate @ 144436c00

void __thiscall
UE::Dataflow::FContextPerfData::Accumulate
          (FContextPerfData *this,FDataflowConnection *param_1,ulong64 param_2,ulong64 param_3)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  ulong64 uVar4;
  FData *pFVar5;
  uint *puVar6;
  undefined1 *puVar7;
  float fVar8;
  FGuid local_28;
  
  if (param_1 != (FDataflowConnection *)0x0) {
    local_28.A = (param_1->Guid).A;
    local_28.B = (param_1->Guid).B;
    local_28.C = (param_1->Guid).C;
    local_28.D = (param_1->Guid).D;
    uVar4 = CityHash64((char *)&local_28,0x10);
    if (*(int *)&(this->DataPerOutput).field_0x8 != *(int *)&(this->DataPerOutput).field_0x34) {
      puVar7 = *(undefined1 **)&(this->DataPerOutput).field_0x40;
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &(this->DataPerOutput).field_0x38;
      }
      uVar3 = *(uint *)(puVar7 + ((ulonglong)(*(int *)&(this->DataPerOutput).field_0x48 - 1) &
                                 uVar4 & 0xffffffff) * 4);
      if (uVar3 != 0xffffffff) {
        do {
          puVar6 = (uint *)((longlong)(int)uVar3 * 0x30 + *(longlong *)&this->DataPerOutput);
          if (((local_28.D == puVar6[3] && local_28.C == puVar6[2]) && local_28.B == puVar6[1]) &&
              local_28.A == *puVar6) {
            if (puVar6 != (uint *)0x0) {
              pFVar5 = (FData *)(puVar6 + 4);
              goto LAB_144436cd6;
            }
            break;
          }
          uVar3 = puVar6[10];
        } while (uVar3 != 0xffffffff);
      }
    }
    pFVar5 = TMapBase<FGuid,UE::Dataflow::FContextPerfData::FData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,UE::Dataflow::FContextPerfData::FData,0>_>
             ::EmplaceByHash<FGuid>
                       ((TMapBase<FGuid,UE::Dataflow::FContextPerfData::FData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,UE::Dataflow::FContextPerfData::FData,0>_>
                         *)this,(uint)uVar4,&local_28);
LAB_144436cd6:
    dVar2 = __real_408f400000000000;
    fVar8 = (float)((double)(param_2 - param_3) * FGenericPlatformTime::SecondsPerCycle64 *
                   __real_408f400000000000);
    if (fVar8 <= pFVar5->ExclusiveTimeMs) {
      fVar8 = pFVar5->ExclusiveTimeMs;
    }
    pFVar5->ExclusiveTimeMs = fVar8;
    dVar1 = (double)param_2 * FGenericPlatformTime::SecondsPerCycle64;
    pFVar5->NumCalls = pFVar5->NumCalls + 1;
    fVar8 = (float)(dVar1 * dVar2);
    if (fVar8 <= pFVar5->InclusiveTimeMs) {
      fVar8 = pFVar5->InclusiveTimeMs;
    }
    pFVar5->InclusiveTimeMs = fVar8;
    if (param_1->OwningNode != (FDataflowNode *)0x0) {
      (pFVar5->LastTimestamp).Value = (param_1->OwningNode->LastModifiedTimestamp).Value;
      return;
    }
    (pFVar5->LastTimestamp).Value = FTimestamp::Invalid;
  }
  return;
}

// Append @ 144437660

void __thiscall
UE::Dataflow::FContextPerfData::Append(FContextPerfData *this,FContextPerfData *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulong64 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  FGuid *pFVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  FData *pFVar15;
  int iVar16;
  uint *puVar17;
  float fVar18;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar6 = *(int *)&(param_1->DataPerOutput).field_0x28;
  puVar1 = &(param_1->DataPerOutput).field_0x10;
  iVar13 = 0;
  uVar4 = 1;
  iVar16 = 0;
  iVar5 = 0;
  if (iVar6 != 0) {
    puVar17 = *(uint **)&(param_1->DataPerOutput).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar12 = *puVar17;
    while (uVar12 == 0) {
      lVar8 = (longlong)iVar13;
      iVar16 = iVar16 + 0x20;
      iVar13 = iVar13 + 1;
      iVar5 = iVar6;
      if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_1444376fd;
      uVar12 = puVar17[lVar8 + 1];
    }
    uVar4 = -uVar12 & uVar12;
    uVar9 = (ulonglong)uVar4 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    iVar5 = iVar16 + -1 + local_res18;
    if (iVar6 < iVar5) {
      iVar5 = iVar6;
    }
  }
LAB_1444376fd:
  uVar12 = *(uint *)&(param_1->DataPerOutput).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar4,iVar13);
  TStack_60.CurrentBitIndex = iVar5;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iVar5;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(param_1->DataPerOutput).field_0x8 -
                       *(int *)&(param_1->DataPerOutput).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar6 < (int)uVar12)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar4 = *(uint *)&(param_1->DataPerOutput).field_0x28;
  if (uVar12 != uVar4) {
    puVar14 = *(undefined1 **)&(param_1->DataPerOutput).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar8 = (longlong)iVar13;
      uVar11 = uVar11 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_144437800;
      uVar12 = *(uint *)(puVar14 + lVar8 * 4 + 4);
    }
    uVar9 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar12 = (int)lVar8 + -1 + uVar11;
    if ((int)uVar4 < (int)uVar12) {
      uVar12 = uVar4;
    }
  }
LAB_144437800:
  while( true ) {
    if (*(int *)&(param_1->DataPerOutput).field_0x8 - *(int *)&(param_1->DataPerOutput).field_0x34
        != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FGuid,UE::Dataflow::FContextPerfData::FData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pFVar10 = (FGuid *)(*(longlong *)&param_1->DataPerOutput +
                       (longlong)TStack_60.CurrentBitIndex * 0x30);
    uVar7 = CityHash64((char *)pFVar10,0x10);
    iVar6 = TSet<TTuple<FGuid,UE::Dataflow::FContextPerfData::FData>,TDefaultMapHashableKeyFuncs<FGuid,UE::Dataflow::FContextPerfData::FData,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FGuid>
                      ((TSet<TTuple<FGuid,UE::Dataflow::FContextPerfData::FData>,TDefaultMapHashableKeyFuncs<FGuid,UE::Dataflow::FContextPerfData::FData,0>,FDefaultSetAllocator>
                        *)this,(uint)uVar7,pFVar10);
    if ((iVar6 == -1) ||
       (lVar8 = (longlong)iVar6 * 0x30 + *(longlong *)&this->DataPerOutput, lVar8 == 0)) {
      pFVar15 = TMapBase<FGuid,UE::Dataflow::FContextPerfData::FData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,UE::Dataflow::FContextPerfData::FData,0>_>
                ::EmplaceByHash<FGuid_const_&>
                          ((TMapBase<FGuid,UE::Dataflow::FContextPerfData::FData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,UE::Dataflow::FContextPerfData::FData,0>_>
                            *)this,(uint)uVar7,pFVar10);
    }
    else {
      pFVar15 = (FData *)(lVar8 + 0x10);
    }
    fVar18 = (float)pFVar10[1].B;
    if ((float)pFVar10[1].B <= pFVar15->ExclusiveTimeMs) {
      fVar18 = pFVar15->ExclusiveTimeMs;
    }
    pFVar15->ExclusiveTimeMs = fVar18;
    fVar18 = pFVar15->InclusiveTimeMs;
    if (pFVar15->InclusiveTimeMs <= (float)pFVar10[1].A) {
      fVar18 = (float)pFVar10[1].A;
    }
    pFVar15->InclusiveTimeMs = fVar18;
    uVar4 = pFVar10[1].C;
    if ((int)pFVar10[1].C < pFVar15->NumCalls) {
      uVar4 = pFVar15->NumCalls;
    }
    pFVar15->NumCalls = uVar4;
    uVar9._0_4_ = pFVar10[2].A;
    uVar9._4_4_ = pFVar10[2].B;
    if (uVar9 < (pFVar15->LastTimestamp).Value) {
      uVar9 = (pFVar15->LastTimestamp).Value;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    (pFVar15->LastTimestamp).Value = uVar9;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Reset @ 14445ebf0

void __thiscall UE::Dataflow::FContextPerfData::Reset(FContextPerfData *this)

{
  if (*(int *)&(this->DataPerOutput).field_0x8 != *(int *)&(this->DataPerOutput).field_0x34) {
    TSet<TTuple<FGuid,UE::Dataflow::FContextPerfData::FData>,TDefaultMapHashableKeyFuncs<FGuid,UE::Dataflow::FContextPerfData::FData,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FGuid,UE::Dataflow::FContextPerfData::FData>,TDefaultMapHashableKeyFuncs<FGuid,UE::Dataflow::FContextPerfData::FData,0>,FDefaultSetAllocator>
                      *)this);
    *(undefined4 *)&(this->DataPerOutput).field_0x8 = 0;
    if (*(int *)&(this->DataPerOutput).field_0xc < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,(ForAnyElementType *)this,0,(int *)&(this->DataPerOutput).field_0xc);
    }
    *(undefined4 *)&(this->DataPerOutput).field_0x34 = 0;
    *(undefined4 *)&(this->DataPerOutput).field_0x28 = 0;
    *(undefined4 *)&(this->DataPerOutput).field_0x30 = 0xffffffff;
  }
  return;
}

