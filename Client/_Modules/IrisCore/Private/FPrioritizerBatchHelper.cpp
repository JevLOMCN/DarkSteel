// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 1

// PrepareBatch @ 1442cadb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EBatchProcessStatus __thiscall
UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::PrepareBatch
          (FPrioritizerBatchHelper *this,FPerConnectionInfo *param_1,FNetBitArrayView *param_2,
          uchar *param_3,float *param_4)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>
  FVar3;
  byte bVar4;
  code *pcVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  EBatchProcessStatus EVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>
  FVar16;
  uint *puVar17;
  ulonglong uVar18;
  bool bVar19;
  undefined1 auStackY_10e8 [32];
  undefined1 local_1097 [3];
  uint local_1094;
  uint *local_1090;
  FNetBitArrayView *local_1088;
  uchar *local_1080;
  FScriptContainerElement *local_1078;
  ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>
  local_1070;
  ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>
  local_1068;
  uint local_1058 [1024];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_10e8;
  bVar19 = -1 < CpuChannel->Enabled;
  local_1088 = param_2;
  local_1080 = param_3;
  local_1068 = (ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>
                )this;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_enum_UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::EBatchProcessStatus___cdecl_UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::PrepareBatch(UE::Net::Private::FReplicationPrioritization::FPerConnectionInfo&___ptr64,UE::Net::FNetBitArrayView,unsigned_char_const*___ptr64,float_const*___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId125,
               "FReplicationPrioritization_PrioritizeForConnection_PrepareBatch",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Prioritization\\ReplicationPrioritization.cpp"
               ,0x7d);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_enum_UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::EBatchProcessStatus___cdecl_UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::PrepareBatch(UE::Net::Private::FReplicationPrioritization::FPerConnectionInfo&___ptr64,UE::Net::FNetBitArrayView,unsigned_char_const*___ptr64,float_const*___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId125);
  }
  uVar9 = (this->BatchInfo).CurrentObjectIndex;
  if (uVar9 < param_2->BitCount) {
    local_1078 = (param_1->Priorities).AllocatorInstance.Data;
    FVar16 = (this->PerPrioritizerInfos).AllocatorInstance.SecondaryData;
    local_1070 = (ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>
                  )this;
    if (FVar16 != (ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>
                   )0x0) {
      local_1070 = FVar16;
    }
    uVar9 = FNetBitArrayHelper::GetSetBitIndices
                      (param_2->Storage,param_2->BitCount,uVar9,0xffffffff,local_1058,0x400);
    while (local_1094 = uVar9, uVar9 != 0) {
      if (uVar9 < 0x400) {
        uVar10 = param_2->BitCount;
      }
      else {
        uVar10 = local_1058[uVar9 - 1] + 1;
      }
      *(uint *)((longlong)this + 400) = uVar10;
      if (((int)uVar9 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        EVar8 = (*pcVar5)();
        return EVar8;
      }
      pFVar6 = local_1078;
      uVar10 = uVar9;
      for (puVar17 = local_1058; puVar17 != local_1058 + (int)uVar9; puVar17 = puVar17 + 1) {
        uVar10 = *puVar17;
        uVar18 = (ulonglong)uVar10;
        bVar4 = param_3[uVar18];
        if (bVar4 != 0xff) {
          uVar15 = *(uint *)((uchar *)((longlong)local_1070 + 0x10) + (ulonglong)bVar4 * 0x18);
          pFVar2 = (ForAnyElementType *)((longlong)local_1070 + (ulonglong)bVar4 * 0x18);
          *(uint *)&pFVar2[2].Data = uVar15 + 1;
          if ((uVar15 & 0x3ff) == 0) {
            puVar14 = ::operator_new(0x1000);
            local_1090 = puVar14;
            if (((pFVar2->Data <= (FScriptContainerElement *)&local_1090) &&
                ((FScriptContainerElement *)&local_1090 <
                 pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar5 = (code *)swi(3);
              EVar8 = (*pcVar5)();
              return EVar8;
            }
            iVar11 = *(int *)&pFVar2[1].Data;
            piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
            if (iVar11 == *piVar1) {
              iVar11 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,pFVar2,piVar1);
            }
            *(int *)&pFVar2[1].Data = iVar11 + 1;
            *(uint **)(pFVar2->Data + (longlong)iVar11 * 8) = local_1090;
          }
          else {
            uVar12 = (int)(uVar15 + ((int)uVar15 >> 0x1f & 0x3ffU)) >> 10;
            uVar15 = uVar15 & 0x800003ff;
            if ((int)uVar15 < 0) {
              uVar15 = (uVar15 - 1 | 0xfffffc00) + 1;
            }
            uVar13 = 0;
            if ((int)uVar12 < *(int *)&pFVar2[1].Data) {
              uVar13 = ~uVar12 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              EVar8 = (*pcVar5)();
              return EVar8;
            }
            puVar14 = (uint *)(*(longlong *)(pFVar2->Data + (longlong)(int)uVar12 * 8) +
                              (ulonglong)uVar15 * 4);
            param_3 = local_1080;
          }
          *puVar14 = uVar10;
          *(float *)(pFVar6 + uVar18 * 4) = param_4[uVar18];
        }
        param_2 = local_1088;
        this = (FPrioritizerBatchHelper *)local_1068;
        uVar10 = local_1094;
      }
      if ((uVar10 < 0x400) ||
         (uVar9 = param_2->BitCount,
         ((FBatchInfo *)((longlong)this + 400))->CurrentObjectIndex == uVar9)) break;
      iVar11 = *(int *)((longlong)this + 0x188);
      FVar16 = (ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>
                )this;
      if (*(ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>
            *)((longlong)this + 0x180) !=
          (ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>
           )0x0) {
        FVar16 = *(ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>
                   *)((longlong)this + 0x180);
      }
      FVar3 = (ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>
               )((longlong)FVar16 + (longlong)iVar11 * 0x18);
      while( true ) {
        if (*(int *)((longlong)this + 0x188) != iVar11) {
          local_1097[0] = 0;
          `TCheckedPointerIterator<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_1097);
        }
        param_2 = local_1088;
        if (FVar16 == FVar3) break;
        if (0x3ff < *(uint *)((longlong)FVar16 + 0x10)) {
          EVar8 = ProcessFullBatchesAndContinue;
          goto LAB_1442cb1ec;
        }
        FVar16 = (ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>
                  )((longlong)FVar16 + 0x18);
      }
      uVar9 = FNetBitArrayHelper::GetSetBitIndices
                        (local_1088->Storage,uVar9,*(uint *)((longlong)this + 400),0xffffffff,
                         local_1058,0x400);
      param_3 = local_1080;
    }
    EVar8 = ProcessAllBatchesAndStop;
  }
  else {
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8551252196681842815>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Prioritization\\ReplicationPrioritization.cpp"
                       ,0x7f,"BatchInfo.CurrentObjectIndex < Objects.GetNumBits()");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      EVar8 = (*pcVar5)();
      return EVar8;
    }
    EVar8 = NothingToProcess;
  }
LAB_1442cb1ec:
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return EVar8;
}

