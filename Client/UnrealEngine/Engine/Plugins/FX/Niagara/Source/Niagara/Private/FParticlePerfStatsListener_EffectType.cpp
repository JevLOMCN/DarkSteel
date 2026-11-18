// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// Tick @ 1492bbc90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FParticlePerfStatsListener_EffectType::Tick(FParticlePerfStatsListener_EffectType *this)

{
  longlong lVar1;
  UNiagaraEffectType *this_00;
  double dVar2;
  int iVar3;
  FCsvProfiler *pFVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  double dVar8;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  undefined1 auStack_f0 [16];
  uint uStack_e0;
  uint uStack_dc;
  longlong local_d8;
  TSet<TTuple<UNiagaraEffectType_*,FParticlePerfStats>,TDefaultMapHashableKeyFuncs<UNiagaraEffectType_*,FParticlePerfStats,0>,FDefaultSetAllocator>
  *pTStack_d0;
  TSet<TTuple<UNiagaraEffectType_*,FParticlePerfStats>,TDefaultMapHashableKeyFuncs<UNiagaraEffectType_*,FParticlePerfStats,0>,FDefaultSetAllocator>
  *local_c8;
  undefined2 local_c0;
  undefined1 local_b8 [32];
  longlong local_98;
  TSet<TTuple<UNiagaraEffectType_*,FParticlePerfStats>,TDefaultMapHashableKeyFuncs<UNiagaraEffectType_*,FParticlePerfStats,0>,FDefaultSetAllocator>
  *pTStack_90;
  TSet<TTuple<UNiagaraEffectType_*,FParticlePerfStats>,TDefaultMapHashableKeyFuncs<UNiagaraEffectType_*,FParticlePerfStats,0>,FDefaultSetAllocator>
  local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  pFVar4 = FCsvProfiler::Get();
  if (pFVar4 != (FCsvProfiler *)0x0) {
    local_88.Elements._44_4_ = 0x80;
    local_88.Elements._0_8_ = 0;
    local_88.Elements._8_8_ = 0;
    local_88.Elements._32_8_ = 0;
    local_88.Elements._40_4_ = 0;
    local_88.Elements._52_4_ = 0;
    local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_88.HashSize = 0;
    local_88.Elements._48_4_ = 0xffffffff;
    FParticlePerfStatsManager::
    ForAllSystemStats<_FParticlePerfStatsListener_EffectType::Tick_::__l5::<lambda_1>_>
              ((TMap<UNiagaraEffectType_*,FParticlePerfStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UNiagaraEffectType_*,FParticlePerfStats,0>_>
                *)&local_88);
    TSet<TTuple<UNiagaraEffectType_*,FParticlePerfStats>,TDefaultMapHashableKeyFuncs<UNiagaraEffectType_*,FParticlePerfStats,0>,FDefaultSetAllocator>
    ::TIterator::TIterator((TIterator *)local_b8,&local_88);
    dVar2 = __real_412e848000000000;
    local_c8 = &local_88;
    local_c0 = 0;
    stack0xffffffffffffff18 = local_b8._16_16_;
    local_f8 = (longlong *)local_b8._0_8_;
    auStack_f0._0_8_ = local_b8._8_8_;
    local_d8 = local_98;
    pTStack_d0 = pTStack_90;
    uVar5 = local_b8._24_8_ >> 0x20;
    uVar7 = local_b8._28_4_;
    if ((int)uVar7 < *(int *)(local_b8._16_8_ + 0x18)) {
      do {
        lVar1 = *local_f8;
        this_00 = *(UNiagaraEffectType **)((longlong)(int)uVar5 * 0xe0 + lVar1);
        if ((this_00 != (UNiagaraEffectType *)0x0) &&
           (lVar6 = (longlong)(int)uVar7 * 0xe0,
           *(longlong *)((longlong)(int)uVar7 * 0xe0 + 8 + lVar1) != 0)) {
          UNiagaraEffectType::PopulatePerfStatNames(this_00);
          dVar8 = (double)(ulonglong)
                          (*(longlong *)(lVar6 + 0x10 + lVar1) + *(longlong *)(lVar6 + 0x30 + lVar1)
                           + *(longlong *)(lVar6 + 0x20 + lVar1) +
                          *(longlong *)(lVar6 + 0x38 + lVar1)) *
                  FGenericPlatformTime::SecondsPerCycle64;
          iVar3 = *(int *)(lVar6 + 8 + lVar1);
          FCsvProfiler::RecordCustomStat
                    (&this_00->CSVStat_Total,_GCsvCategory_Particles.Index,
                     (float)((double)(ulonglong)
                                     (*(longlong *)(lVar6 + 0x10 + lVar1) +
                                      *(longlong *)(lVar6 + 0x30 + lVar1) +
                                      *(longlong *)(lVar6 + 0x20 + lVar1) +
                                      *(longlong *)(lVar6 + 0x38 + lVar1) +
                                      *(longlong *)(lVar6 + 0x28 + lVar1) +
                                     *(longlong *)(lVar6 + 0x18 + lVar1)) *
                             FGenericPlatformTime::SecondsPerCycle64 * dVar2),Set);
          FCsvProfiler::RecordCustomStat
                    (&this_00->CSVStat_GTOnly,_GCsvCategory_Particles.Index,(float)(dVar8 * dVar2),
                     Set);
          FCsvProfiler::RecordCustomStat
                    (&this_00->CSVStat_Count,_GCsvCategory_Particles.Index,iVar3,Set);
        }
        uStack_e0 = uStack_e0 & ~auStack_f0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_f0);
        uVar5 = (ulonglong)uStack_dc;
        uVar7 = uStack_dc;
      } while ((int)uStack_dc < *(int *)(auStack_f0._8_8_ + 0x18));
      if (((char)local_c0 != '\0') && (local_c0._1_1_ != '\0')) {
        uVar7 = *(int *)&(local_c8->Elements).field_0x8 - *(int *)&(local_c8->Elements).field_0x34;
        if (uVar7 < 4) {
          iVar3 = 1;
        }
        else {
          uVar5 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
          lVar1 = 0x3f;
          if (uVar5 != 0) {
            for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
            }
          }
          iVar3 = 1 << ((byte)lVar1 & 0x1f);
        }
        if (((0 < (int)uVar7) && (local_c8->HashSize < iVar3)) || (iVar3 < local_c8->HashSize)) {
          local_c8->HashSize = iVar3;
          TSet<TTuple<UNiagaraEffectType_*,FParticlePerfStats>,TDefaultMapHashableKeyFuncs<UNiagaraEffectType_*,FParticlePerfStats,0>,FDefaultSetAllocator>
          ::Rehash(local_c8);
        }
      }
    }
    local_88.HashSize = 0;
    if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_88.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<UNiagaraEffectType_*,FParticlePerfStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UNiagaraEffectType_*,FParticlePerfStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_88.Elements);
  }
  return true;
}

// TickRT @ 1492bd1e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FParticlePerfStatsListener_EffectType::TickRT(FParticlePerfStatsListener_EffectType *this)

{
  longlong lVar1;
  UNiagaraEffectType *this_00;
  double dVar2;
  int iVar3;
  FCsvProfiler *pFVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  undefined1 auStack_e0 [16];
  uint uStack_d0;
  uint uStack_cc;
  longlong local_c8;
  TSet<TTuple<UNiagaraEffectType_*,FParticlePerfStats>,TDefaultMapHashableKeyFuncs<UNiagaraEffectType_*,FParticlePerfStats,0>,FDefaultSetAllocator>
  *pTStack_c0;
  TSet<TTuple<UNiagaraEffectType_*,FParticlePerfStats>,TDefaultMapHashableKeyFuncs<UNiagaraEffectType_*,FParticlePerfStats,0>,FDefaultSetAllocator>
  *local_b8;
  undefined2 local_b0;
  undefined1 local_a8 [32];
  longlong local_88;
  TSet<TTuple<UNiagaraEffectType_*,FParticlePerfStats>,TDefaultMapHashableKeyFuncs<UNiagaraEffectType_*,FParticlePerfStats,0>,FDefaultSetAllocator>
  *pTStack_80;
  TSet<TTuple<UNiagaraEffectType_*,FParticlePerfStats>,TDefaultMapHashableKeyFuncs<UNiagaraEffectType_*,FParticlePerfStats,0>,FDefaultSetAllocator>
  local_78;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  pFVar4 = FCsvProfiler::Get();
  if (pFVar4 != (FCsvProfiler *)0x0) {
    local_78.Elements._44_4_ = 0x80;
    local_78.Elements._0_8_ = 0;
    local_78.Elements._8_8_ = 0;
    local_78.Elements._32_8_ = 0;
    local_78.Elements._40_4_ = 0;
    local_78.Elements._52_4_ = 0;
    local_78.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_78.HashSize = 0;
    local_78.Elements._48_4_ = 0xffffffff;
    FParticlePerfStatsManager::
    ForAllSystemStats<_FParticlePerfStatsListener_EffectType::TickRT_::__l5::<lambda_1>_>
              ((TMap<UNiagaraEffectType_*,FParticlePerfStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UNiagaraEffectType_*,FParticlePerfStats,0>_>
                *)&local_78);
    TSet<TTuple<UNiagaraEffectType_*,FParticlePerfStats>,TDefaultMapHashableKeyFuncs<UNiagaraEffectType_*,FParticlePerfStats,0>,FDefaultSetAllocator>
    ::TIterator::TIterator((TIterator *)local_a8,&local_78);
    dVar2 = __real_412e848000000000;
    local_b8 = &local_78;
    local_b0 = 0;
    stack0xffffffffffffff28 = local_a8._16_16_;
    local_e8 = (longlong *)local_a8._0_8_;
    auStack_e0._0_8_ = local_a8._8_8_;
    local_c8 = local_88;
    pTStack_c0 = pTStack_80;
    uVar5 = local_a8._24_8_ >> 0x20;
    uVar7 = local_a8._28_4_;
    if ((int)uVar7 < *(int *)(local_a8._16_8_ + 0x18)) {
      do {
        lVar1 = *local_e8;
        this_00 = *(UNiagaraEffectType **)((longlong)(int)uVar5 * 0xe0 + lVar1);
        if ((this_00 != (UNiagaraEffectType *)0x0) &&
           (lVar6 = (longlong)(int)uVar7 * 0xe0, *(longlong *)(lVar6 + 0x40 + lVar1) != 0)) {
          UNiagaraEffectType::PopulatePerfStatNames(this_00);
          FCsvProfiler::RecordCustomStat
                    (&this_00->CSVStat_RT,_GCsvCategory_Particles.Index,
                     (float)((double)(ulonglong)
                                     (*(longlong *)(lVar6 + 0x50 + lVar1) +
                                     *(longlong *)(lVar6 + 0x48 + lVar1)) *
                             FGenericPlatformTime::SecondsPerCycle64 * dVar2),Set);
          FCsvProfiler::RecordCustomStat
                    (&this_00->CSVStat_GPU,_GCsvCategory_Particles.Index,
                     (float)*(ulonglong *)(lVar6 + 0x60 + lVar1),Set);
        }
        uStack_d0 = uStack_d0 & ~auStack_e0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_e0);
        uVar5 = (ulonglong)uStack_cc;
        uVar7 = uStack_cc;
      } while ((int)uStack_cc < *(int *)(auStack_e0._8_8_ + 0x18));
      if (((char)local_b0 != '\0') && (local_b0._1_1_ != '\0')) {
        uVar7 = *(int *)&(local_b8->Elements).field_0x8 - *(int *)&(local_b8->Elements).field_0x34;
        if (uVar7 < 4) {
          iVar3 = 1;
        }
        else {
          uVar5 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
          lVar1 = 0x3f;
          if (uVar5 != 0) {
            for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
            }
          }
          iVar3 = 1 << ((byte)lVar1 & 0x1f);
        }
        if (((0 < (int)uVar7) && (local_b8->HashSize < iVar3)) || (iVar3 < local_b8->HashSize)) {
          local_b8->HashSize = iVar3;
          TSet<TTuple<UNiagaraEffectType_*,FParticlePerfStats>,TDefaultMapHashableKeyFuncs<UNiagaraEffectType_*,FParticlePerfStats,0>,FDefaultSetAllocator>
          ::Rehash(local_b8);
        }
      }
    }
    local_78.HashSize = 0;
    if (local_78.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_78.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<UNiagaraEffectType_*,FParticlePerfStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UNiagaraEffectType_*,FParticlePerfStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_78.Elements);
  }
  return;
}

// ~FParticlePerfStatsListener_EffectType @ 14942c430

void __thiscall
FParticlePerfStatsListener_EffectType::~FParticlePerfStatsListener_EffectType
          (FParticlePerfStatsListener_EffectType *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7FParticlePerfStatsListener__6B_;
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014942c45a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// NeedsComponentStats @ 1494552a0

bool __thiscall
FParticlePerfStatsListener_EffectType::NeedsComponentStats
          (FParticlePerfStatsListener_EffectType *this)

{
  return false;
}

// NeedsSystemStats @ 149455590

bool __thiscall
FParticlePerfStatsListener_EffectType::NeedsSystemStats(FParticlePerfStatsListener_EffectType *this)

{
  return true;
}

// NeedsWorldStats @ 1494555a0

bool __thiscall
FParticlePerfStatsListener_EffectType::NeedsWorldStats(FParticlePerfStatsListener_EffectType *this)

{
  return false;
}

