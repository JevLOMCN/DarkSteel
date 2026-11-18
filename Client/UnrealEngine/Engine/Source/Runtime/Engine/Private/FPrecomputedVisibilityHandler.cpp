// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// ApplyWorldOffset @ 147e5c260

void __thiscall
FPrecomputedVisibilityHandler::ApplyWorldOffset
          (FPrecomputedVisibilityHandler *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  double *pdVar6;
  double *pdVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_res10;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  dVar2 = (this->PrecomputedVisibilityCellBucketOriginXY).field0_0x0._s_0.Y;
  (this->PrecomputedVisibilityCellBucketOriginXY).field0_0x0._s_0.X =
       (this->PrecomputedVisibilityCellBucketOriginXY).field0_0x0._s_0.X -
       (param_1->field0_0x0)._s_0.X;
  (this->PrecomputedVisibilityCellBucketOriginXY).field0_0x0._s_0.Y = dVar2 - dVar1;
  pFVar9 = (this->PrecomputedVisibilityCellBuckets).AllocatorInstance.Data;
  iVar3 = (this->PrecomputedVisibilityCellBuckets).ArrayNum;
  pFVar8 = pFVar9 + 0x10;
  local_res10 = pFVar9 + (longlong)iVar3 * 0x28;
  while( true ) {
    pFVar5 = local_res10;
    if ((this->PrecomputedVisibilityCellBuckets).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FPrecomputedVisibilityBucket,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar9 == pFVar5) break;
    iVar4 = *(int *)pFVar8;
    pdVar6 = *(double **)(pFVar8 + -8);
    pdVar7 = pdVar6 + (longlong)iVar4 * 4;
    while( true ) {
      if (*(int *)pFVar8 != iVar4) {
        `TCheckedPointerIterator<FPrecomputedVisibilityCell,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pdVar6 == pdVar7) break;
      *pdVar6 = *pdVar6 + (param_1->field0_0x0)._s_0.X;
      pdVar6[1] = pdVar6[1] + (param_1->field0_0x0)._s_0.Y;
      pdVar6[2] = (param_1->field0_0x0)._s_0.Z + pdVar6[2];
      pdVar6 = pdVar6 + 4;
    }
    pFVar9 = pFVar9 + 0x28;
    pFVar8 = pFVar8 + 0x28;
  }
  return;
}

// Invalidate @ 147e6da20

void __thiscall
FPrecomputedVisibilityHandler::Invalidate
          (FPrecomputedVisibilityHandler *this,FSceneInterface *param_1)

{
  int *piVar1;
  
  (**(code **)(param_1->_padding_ + 0x270))(param_1);
  FlushRenderingCommands();
  UpdateVisibilityStats(this,false);
  (this->PrecomputedVisibilityCellBucketOriginXY).field0_0x0._s_0.X = 0.0;
  (this->PrecomputedVisibilityCellBucketOriginXY).field0_0x0._s_0.Y = 0.0;
  this->PrecomputedVisibilityCellSizeXY = 0.0;
  this->PrecomputedVisibilityCellSizeZ = 0.0;
  this->PrecomputedVisibilityCellBucketSizeXY = 0;
  this->PrecomputedVisibilityNumCellBuckets = 0;
  DestructItems<FPrecomputedVisibilityBucket,int>
            ((FPrecomputedVisibilityBucket *)
             (this->PrecomputedVisibilityCellBuckets).AllocatorInstance.Data,
             (this->PrecomputedVisibilityCellBuckets).ArrayNum);
  piVar1 = &(this->PrecomputedVisibilityCellBuckets).ArrayMax;
  (this->PrecomputedVisibilityCellBuckets).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&(this->PrecomputedVisibilityCellBuckets).AllocatorInstance,0,piVar1);
  }
  this->Id = NextId;
  NextId = NextId + 1;
  return;
}

// UpdateScene @ 147e843a0

void __thiscall
FPrecomputedVisibilityHandler::UpdateScene
          (FPrecomputedVisibilityHandler *this,FSceneInterface *param_1)

{
  if ((param_1 != (FSceneInterface *)0x0) && (0 < (this->PrecomputedVisibilityCellBuckets).ArrayNum)
     ) {
                    /* WARNING: Could not recover jumptable at 0x000147e843b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1->_padding_ + 0x270))(param_1,this);
    return;
  }
  return;
}

// UpdateVisibilityStats @ 147e85c30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPrecomputedVisibilityHandler::UpdateVisibilityStats
          (FPrecomputedVisibilityHandler *this,bool param_1)

{
  FName FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_PrecomputedVisibilityMemory> FVar8;
  FThreadStats *pFVar9;
  FThreadStatsPool *pFVar10;
  uint uVar11;
  uchar auVar12 [8];
  uint uVar13;
  uint uVar14;
  longlong local_res18;
  FName local_150;
  FName local_148;
  FName local_140;
  FName local_138;
  FName local_130;
  FName local_128;
  FName local_120;
  FName local_118;
  FStatMessage local_110;
  FStatMessage local_100;
  FStatMessage local_f0;
  FStatMessage local_e0;
  FStatMessage local_d0;
  FStatMessage local_c0;
  FStatMessage local_b0;
  FStatMessage local_a0;
  FName local_90;
  FName local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58 [3];
  
  lVar6 = (longlong)(this->PrecomputedVisibilityCellBuckets).ArrayMax;
  auVar12 = (uchar  [8])(lVar6 * 0x28);
  if (param_1) {
    if (auVar12 != (uchar  [8])0x0) {
      FVar8 = StatPtr_STAT_PrecomputedVisibilityMemory;
      if (StatPtr_STAT_PrecomputedVisibilityMemory ==
          (FThreadSafeStaticStat<FStat_STAT_PrecomputedVisibilityMemory>)0x0) {
        pFVar7 = ::FName::FName(&local_90,"STAT_PrecomputedVisibilityMemory");
        FVar8 = (FThreadSafeStaticStat<FStat_STAT_PrecomputedVisibilityMemory>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PrecomputedVisibilityMemory,
                           *pFVar7,L"Precomputed Visibility Memory","STATGROUP_Memory",
                           "STATCAT_Advanced",L"Memory",true,false,ST_int64,false,false,MCR_Physical
                          );
      }
      FVar1 = *(FName *)FVar8;
      if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar9 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar9 == (FThreadStats *)0x0) {
          pFVar10 = FThreadStatsPool::Get();
          pFVar9 = FThreadStatsPool::GetFromPool(pFVar10);
        }
        local_110.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
        local_150 = FVar1;
        local_110.StatData.Pad = auVar12;
        local_110.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar9,&local_110);
        FStatsTrace::Add(&local_150,(long64)auVar12);
        if (pFVar9->ScopeCount == 0) {
          FThreadStats::Flush(pFVar9,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar9,false,false);
        }
      }
    }
    uVar13 = 0;
    if (0 < (this->PrecomputedVisibilityCellBuckets).ArrayNum) {
      local_res18 = 0;
      do {
        uVar11 = ~uVar13 >> 0x1f;
        uVar14 = 0;
        if ((int)uVar13 < (this->PrecomputedVisibilityCellBuckets).ArrayNum) {
          uVar14 = uVar11;
        }
        if ((uVar14 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        auVar12 = (uchar  [8])
                  ((longlong)
                   *(int *)((this->PrecomputedVisibilityCellBuckets).AllocatorInstance.Data +
                           local_res18 + 0x14) << 5);
        if (auVar12 != (uchar  [8])0x0) {
          FVar8 = StatPtr_STAT_PrecomputedVisibilityMemory;
          if (StatPtr_STAT_PrecomputedVisibilityMemory ==
              (FThreadSafeStaticStat<FStat_STAT_PrecomputedVisibilityMemory>)0x0) {
            pFVar7 = ::FName::FName(&local_88,"STAT_PrecomputedVisibilityMemory");
            FVar8 = (FThreadSafeStaticStat<FStat_STAT_PrecomputedVisibilityMemory>)
                    FThreadSafeStaticStatBase::DoSetup
                              ((FThreadSafeStaticStatBase *)
                               &StatPtr_STAT_PrecomputedVisibilityMemory,*pFVar7,
                               L"Precomputed Visibility Memory","STATGROUP_Memory",
                               "STATCAT_Advanced",L"Memory",true,false,ST_int64,false,false,
                               MCR_Physical);
          }
          FVar1 = *(FName *)FVar8;
          if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            pFVar9 = TlsGetValue(FThreadStats::TlsSlot);
            if (pFVar9 == (FThreadStats *)0x0) {
              pFVar10 = FThreadStatsPool::Get();
              pFVar9 = FThreadStatsPool::GetFromPool(pFVar10);
            }
            local_100.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
            local_148 = FVar1;
            local_100.StatData.Pad = auVar12;
            local_100.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
            FThreadStats::AddStatMessage(pFVar9,&local_100);
            FStatsTrace::Add(&local_148,(long64)auVar12);
            if (pFVar9->ScopeCount == 0) {
              FThreadStats::Flush(pFVar9,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(pFVar9,false,false);
            }
          }
        }
        uVar14 = 0;
        if ((int)uVar13 < (this->PrecomputedVisibilityCellBuckets).ArrayNum) {
          uVar14 = uVar11;
        }
        if ((uVar14 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        auVar12 = (uchar  [8])
                  ((longlong)
                   *(int *)((this->PrecomputedVisibilityCellBuckets).AllocatorInstance.Data +
                           local_res18 + 0x24) * 0x18);
        if (auVar12 != (uchar  [8])0x0) {
          FVar8 = StatPtr_STAT_PrecomputedVisibilityMemory;
          if (StatPtr_STAT_PrecomputedVisibilityMemory ==
              (FThreadSafeStaticStat<FStat_STAT_PrecomputedVisibilityMemory>)0x0) {
            pFVar7 = ::FName::FName(&local_80,"STAT_PrecomputedVisibilityMemory");
            FVar8 = (FThreadSafeStaticStat<FStat_STAT_PrecomputedVisibilityMemory>)
                    FThreadSafeStaticStatBase::DoSetup
                              ((FThreadSafeStaticStatBase *)
                               &StatPtr_STAT_PrecomputedVisibilityMemory,*pFVar7,
                               L"Precomputed Visibility Memory","STATGROUP_Memory",
                               "STATCAT_Advanced",L"Memory",true,false,ST_int64,false,false,
                               MCR_Physical);
          }
          FVar1 = *(FName *)FVar8;
          if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            pFVar9 = TlsGetValue(FThreadStats::TlsSlot);
            if (pFVar9 == (FThreadStats *)0x0) {
              pFVar10 = FThreadStatsPool::Get();
              pFVar9 = FThreadStatsPool::GetFromPool(pFVar10);
            }
            local_f0.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
            local_140 = FVar1;
            local_f0.StatData.Pad = auVar12;
            local_f0.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
            FThreadStats::AddStatMessage(pFVar9,&local_f0);
            FStatsTrace::Add(&local_140,(long64)auVar12);
            if (pFVar9->ScopeCount == 0) {
              FThreadStats::Flush(pFVar9,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(pFVar9,false,false);
            }
          }
        }
        uVar14 = 0;
        lVar6 = 0;
        while( true ) {
          uVar5 = 0;
          if ((int)uVar13 < (this->PrecomputedVisibilityCellBuckets).ArrayNum) {
            uVar5 = uVar11;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (*(int *)((this->PrecomputedVisibilityCellBuckets).AllocatorInstance.Data +
                      local_res18 + 0x20) <= (int)uVar14) break;
          uVar5 = 0;
          if ((int)uVar13 < (this->PrecomputedVisibilityCellBuckets).ArrayNum) {
            uVar5 = uVar11;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = (this->PrecomputedVisibilityCellBuckets).AllocatorInstance.Data;
          uVar5 = 0;
          if ((int)uVar14 < *(int *)(pFVar2 + local_res18 + 0x20)) {
            uVar5 = ~uVar14 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          auVar12 = (uchar  [8])
                    (longlong)*(int *)(lVar6 + 0x14 + *(longlong *)(pFVar2 + local_res18 + 0x18));
          if (auVar12 != (uchar  [8])0x0) {
            FVar8 = StatPtr_STAT_PrecomputedVisibilityMemory;
            if (StatPtr_STAT_PrecomputedVisibilityMemory ==
                (FThreadSafeStaticStat<FStat_STAT_PrecomputedVisibilityMemory>)0x0) {
              pFVar7 = ::FName::FName(&local_78,"STAT_PrecomputedVisibilityMemory");
              FVar8 = (FThreadSafeStaticStat<FStat_STAT_PrecomputedVisibilityMemory>)
                      FThreadSafeStaticStatBase::DoSetup
                                ((FThreadSafeStaticStatBase *)
                                 &StatPtr_STAT_PrecomputedVisibilityMemory,*pFVar7,
                                 L"Precomputed Visibility Memory","STATGROUP_Memory",
                                 "STATCAT_Advanced",L"Memory",true,false,ST_int64,false,false,
                                 MCR_Physical);
            }
            FVar1 = *(FName *)FVar8;
            if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
               (FThreadStats::TlsSlot != 0xffffffff)) {
              pFVar9 = TlsGetValue(FThreadStats::TlsSlot);
              if (pFVar9 == (FThreadStats *)0x0) {
                pFVar10 = FThreadStatsPool::Get();
                pFVar9 = FThreadStatsPool::GetFromPool(pFVar10);
              }
              local_e0.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
              local_138 = FVar1;
              local_e0.StatData.Pad = auVar12;
              local_e0.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
              FThreadStats::AddStatMessage(pFVar9,&local_e0);
              FStatsTrace::Add(&local_138,(long64)auVar12);
              if (pFVar9->ScopeCount == 0) {
                FThreadStats::Flush(pFVar9,false,false);
              }
              else if (FThreadStats::bIsRawStatsActive != false) {
                FThreadStats::FlushRawStats(pFVar9,false,false);
              }
            }
          }
          uVar14 = uVar14 + 1;
          lVar6 = lVar6 + 0x18;
        }
        local_res18 = local_res18 + 0x28;
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < (this->PrecomputedVisibilityCellBuckets).ArrayNum);
    }
  }
  else {
    if (auVar12 != (uchar  [8])0x0) {
      FVar8 = StatPtr_STAT_PrecomputedVisibilityMemory;
      if (StatPtr_STAT_PrecomputedVisibilityMemory ==
          (FThreadSafeStaticStat<FStat_STAT_PrecomputedVisibilityMemory>)0x0) {
        pFVar7 = ::FName::FName(&local_70,"STAT_PrecomputedVisibilityMemory");
        FVar8 = (FThreadSafeStaticStat<FStat_STAT_PrecomputedVisibilityMemory>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PrecomputedVisibilityMemory,
                           *pFVar7,L"Precomputed Visibility Memory","STATGROUP_Memory",
                           "STATCAT_Advanced",L"Memory",true,false,ST_int64,false,false,MCR_Physical
                          );
      }
      FVar1 = *(FName *)FVar8;
      if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar9 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar9 == (FThreadStats *)0x0) {
          pFVar10 = FThreadStatsPool::Get();
          pFVar9 = FThreadStatsPool::GetFromPool(pFVar10);
        }
        local_d0.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
        local_130 = FVar1;
        local_d0.StatData.Pad = auVar12;
        local_d0.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar9,&local_d0);
        FStatsTrace::Add(&local_130,lVar6 * -0x28);
        if (pFVar9->ScopeCount == 0) {
          FThreadStats::Flush(pFVar9,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar9,false,false);
        }
      }
    }
    uVar13 = 0;
    if (0 < (this->PrecomputedVisibilityCellBuckets).ArrayNum) {
      local_res18 = 0;
      do {
        uVar11 = ~uVar13 >> 0x1f;
        uVar14 = 0;
        if ((int)uVar13 < (this->PrecomputedVisibilityCellBuckets).ArrayNum) {
          uVar14 = uVar11;
        }
        if ((uVar14 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar6 = (longlong)
                *(int *)((this->PrecomputedVisibilityCellBuckets).AllocatorInstance.Data +
                        local_res18 + 0x14);
        auVar12 = (uchar  [8])(lVar6 * 0x20);
        if (auVar12 != (uchar  [8])0x0) {
          FVar8 = StatPtr_STAT_PrecomputedVisibilityMemory;
          if (StatPtr_STAT_PrecomputedVisibilityMemory ==
              (FThreadSafeStaticStat<FStat_STAT_PrecomputedVisibilityMemory>)0x0) {
            pFVar7 = ::FName::FName(&local_68,"STAT_PrecomputedVisibilityMemory");
            FVar8 = (FThreadSafeStaticStat<FStat_STAT_PrecomputedVisibilityMemory>)
                    FThreadSafeStaticStatBase::DoSetup
                              ((FThreadSafeStaticStatBase *)
                               &StatPtr_STAT_PrecomputedVisibilityMemory,*pFVar7,
                               L"Precomputed Visibility Memory","STATGROUP_Memory",
                               "STATCAT_Advanced",L"Memory",true,false,ST_int64,false,false,
                               MCR_Physical);
          }
          FVar1 = *(FName *)FVar8;
          if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            pFVar9 = TlsGetValue(FThreadStats::TlsSlot);
            if (pFVar9 == (FThreadStats *)0x0) {
              pFVar10 = FThreadStatsPool::Get();
              pFVar9 = FThreadStatsPool::GetFromPool(pFVar10);
            }
            local_c0.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
            local_128 = FVar1;
            local_c0.StatData.Pad = auVar12;
            local_c0.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
            FThreadStats::AddStatMessage(pFVar9,&local_c0);
            FStatsTrace::Add(&local_128,lVar6 * -0x20);
            if (pFVar9->ScopeCount == 0) {
              FThreadStats::Flush(pFVar9,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(pFVar9,false,false);
            }
          }
        }
        uVar14 = 0;
        if ((int)uVar13 < (this->PrecomputedVisibilityCellBuckets).ArrayNum) {
          uVar14 = uVar11;
        }
        if ((uVar14 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar6 = (longlong)
                *(int *)((this->PrecomputedVisibilityCellBuckets).AllocatorInstance.Data +
                        local_res18 + 0x24);
        auVar12 = (uchar  [8])(lVar6 * 0x18);
        if (auVar12 != (uchar  [8])0x0) {
          FVar8 = StatPtr_STAT_PrecomputedVisibilityMemory;
          if (StatPtr_STAT_PrecomputedVisibilityMemory ==
              (FThreadSafeStaticStat<FStat_STAT_PrecomputedVisibilityMemory>)0x0) {
            pFVar7 = ::FName::FName(&local_60,"STAT_PrecomputedVisibilityMemory");
            FVar8 = (FThreadSafeStaticStat<FStat_STAT_PrecomputedVisibilityMemory>)
                    FThreadSafeStaticStatBase::DoSetup
                              ((FThreadSafeStaticStatBase *)
                               &StatPtr_STAT_PrecomputedVisibilityMemory,*pFVar7,
                               L"Precomputed Visibility Memory","STATGROUP_Memory",
                               "STATCAT_Advanced",L"Memory",true,false,ST_int64,false,false,
                               MCR_Physical);
          }
          FVar1 = *(FName *)FVar8;
          if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            pFVar9 = TlsGetValue(FThreadStats::TlsSlot);
            if (pFVar9 == (FThreadStats *)0x0) {
              pFVar10 = FThreadStatsPool::Get();
              pFVar9 = FThreadStatsPool::GetFromPool(pFVar10);
            }
            local_b0.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
            local_120 = FVar1;
            local_b0.StatData.Pad = auVar12;
            local_b0.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
            FThreadStats::AddStatMessage(pFVar9,&local_b0);
            FStatsTrace::Add(&local_120,lVar6 * -0x18);
            if (pFVar9->ScopeCount == 0) {
              FThreadStats::Flush(pFVar9,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(pFVar9,false,false);
            }
          }
        }
        uVar14 = 0;
        lVar6 = 0;
        while( true ) {
          uVar5 = 0;
          if ((int)uVar13 < (this->PrecomputedVisibilityCellBuckets).ArrayNum) {
            uVar5 = uVar11;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (*(int *)((this->PrecomputedVisibilityCellBuckets).AllocatorInstance.Data +
                      local_res18 + 0x20) <= (int)uVar14) break;
          uVar5 = 0;
          if ((int)uVar13 < (this->PrecomputedVisibilityCellBuckets).ArrayNum) {
            uVar5 = uVar11;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = (this->PrecomputedVisibilityCellBuckets).AllocatorInstance.Data;
          uVar5 = 0;
          if ((int)uVar14 < *(int *)(pFVar2 + local_res18 + 0x20)) {
            uVar5 = ~uVar14 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          auVar12 = (uchar  [8])
                    (longlong)*(int *)(lVar6 + 0x14 + *(longlong *)(pFVar2 + local_res18 + 0x18));
          if (auVar12 != (uchar  [8])0x0) {
            FVar8 = StatPtr_STAT_PrecomputedVisibilityMemory;
            if (StatPtr_STAT_PrecomputedVisibilityMemory ==
                (FThreadSafeStaticStat<FStat_STAT_PrecomputedVisibilityMemory>)0x0) {
              pFVar7 = ::FName::FName(local_58,"STAT_PrecomputedVisibilityMemory");
              FVar8 = (FThreadSafeStaticStat<FStat_STAT_PrecomputedVisibilityMemory>)
                      FThreadSafeStaticStatBase::DoSetup
                                ((FThreadSafeStaticStatBase *)
                                 &StatPtr_STAT_PrecomputedVisibilityMemory,*pFVar7,
                                 L"Precomputed Visibility Memory","STATGROUP_Memory",
                                 "STATCAT_Advanced",L"Memory",true,false,ST_int64,false,false,
                                 MCR_Physical);
            }
            FVar1 = *(FName *)FVar8;
            if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
               (FThreadStats::TlsSlot != 0xffffffff)) {
              pFVar9 = TlsGetValue(FThreadStats::TlsSlot);
              if (pFVar9 == (FThreadStats *)0x0) {
                pFVar10 = FThreadStatsPool::Get();
                pFVar9 = FThreadStatsPool::GetFromPool(pFVar10);
              }
              local_a0.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
              local_118 = FVar1;
              local_a0.StatData.Pad = auVar12;
              local_a0.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
              FThreadStats::AddStatMessage(pFVar9,&local_a0);
              FStatsTrace::Add(&local_118,-(longlong)auVar12);
              if (pFVar9->ScopeCount == 0) {
                FThreadStats::Flush(pFVar9,false,false);
              }
              else if (FThreadStats::bIsRawStatsActive != false) {
                FThreadStats::FlushRawStats(pFVar9,false,false);
              }
            }
          }
          uVar14 = uVar14 + 1;
          lVar6 = lVar6 + 0x18;
        }
        local_res18 = local_res18 + 0x28;
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < (this->PrecomputedVisibilityCellBuckets).ArrayNum);
    }
  }
  return;
}

