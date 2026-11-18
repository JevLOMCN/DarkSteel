// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 2

// operator() @ 145c8e040

void __thiscall
`FRHIBreadcrumbState::DumpActiveBreadcrumbs'::__l59::<lambda_1>::operator()
          (void *this,FRHIBreadcrumbNode *param_1)

{
  EState EVar1;
  FRHIBreadcrumbNode *pFVar2;
  FSerializer *this_00;
  code *pcVar3;
  bool bVar4;
  wchar_t *pwVar5;
  EState *pEVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  FString local_58;
  FString local_48;
  FString local_38;
  
  iVar8 = 0;
  for (pFVar2 = param_1; pFVar2 != (FRHIBreadcrumbNode *)0x0; pFVar2 = pFVar2->Parent) {
    iVar8 = iVar8 + 1;
  }
  ::FString::FString(&local_58,L"");
  if (0 < (int)(iVar8 - 1U)) {
    uVar7 = (ulonglong)(iVar8 - 1U);
    do {
      ::FString::AppendChars(&local_58,L"\t",1);
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  pwVar5 = (wchar_t *)(**(code **)(param_1->_padding_ + 0x10))(param_1,*(undefined8 *)this);
  pEVar6 = TMapBase<FRHIBreadcrumbNode_*,enum_FGPUBreadcrumbCrashData::EState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIBreadcrumbNode_*,enum_FGPUBreadcrumbCrashData::EState,0>_>
           ::FindChecked(*(void **)((longlong)this + 8),param_1);
  EVar1 = *pEVar6;
  if ((((EVar1 != NotStarted) && (EVar1 != Active)) && (EVar1 != Finished)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIBreadcrumbs.cpp"
                         ,0x122,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ::FString::PrintfImpl(&local_48,L"\r\n\t\t(ID: 0x%08x) [%s]\t%s%s");
  iVar9 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar9 = 0;
  }
  ::FString::AppendChars
            (*(FString **)((longlong)this + 0x10),(wchar_t *)local_48.Data.AllocatorInstance.Data,
             iVar9);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  iVar9 = **(int **)((longlong)this + 0x18);
  while (iVar8 <= iVar9) {
    FGPUBreadcrumbCrashData::FSerializer::EndNode(*(FSerializer **)((longlong)this + 0x20));
    **(int **)((longlong)this + 0x18) = **(int **)((longlong)this + 0x18) + -1;
    iVar9 = **(int **)((longlong)this + 0x18);
  }
  this_00 = *(FSerializer **)((longlong)this + 0x20);
  ::FString::FString(&local_38,pwVar5);
  FGPUBreadcrumbCrashData::FSerializer::BeginNode(this_00,&local_38,EVar1);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  **(int **)((longlong)this + 0x18) = iVar8;
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// DumpActiveBreadcrumbs @ 145c9b5a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRHIBreadcrumbState::DumpActiveBreadcrumbs
          (FRHIBreadcrumbState *this,
          TMap<FRHIBreadcrumbState::FQueueID,TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIBreadcrumbState::FQueueID,TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_>,0>_>
          *param_1,EVerbosity param_2)

{
  FRHIBreadcrumbNode **ppFVar1;
  ERHIPipeline EVar2;
  EState EVar3;
  code *pcVar4;
  FSerializer *this_00;
  FRHIBreadcrumbNode *pFVar5;
  FRHIBreadcrumbNode *pFVar6;
  TMap<FRHIBreadcrumbState::FQueueID,TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIBreadcrumbState::FQueueID,TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar7;
  uint *puVar8;
  bool bVar9;
  bool bVar10;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar11;
  longlong lVar12;
  ulonglong uVar13;
  FRHIBreadcrumbNode *pFVar14;
  EState *pEVar15;
  FQueueData *pFVar16;
  byte bVar17;
  uint uVar18;
  longlong lVar19;
  undefined8 *puVar20;
  ForElementType<FSetElementId> FVar21;
  undefined1 *puVar22;
  uint uVar23;
  uint uVar24;
  uint *puVar25;
  int iVar26;
  FRHIBreadcrumbNode *pFVar27;
  FRHIBreadcrumbNode *pFVar28;
  int iVar29;
  longlong *plVar30;
  longlong *plVar31;
  char cVar32;
  longlong *plVar33;
  char cVar34;
  undefined1 auStack_6d8 [32];
  FRHIBreadcrumbNode *local_6b8;
  FRHIBreadcrumbNode *local_6b0;
  FRHIBreadcrumbNode *local_6a8;
  FRHIBreadcrumbNode *local_698;
  undefined1 local_690;
  undefined1 local_68f;
  char local_68e;
  undefined1 local_68d;
  int local_68c;
  FRHIBreadcrumbNode *local_688;
  undefined1 local_680 [8];
  FString local_678;
  uint *local_668;
  TMap<FRHIBreadcrumbState::FQueueID,TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIBreadcrumbState::FQueueID,TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_>,0>_>
  *local_660;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_658;
  undefined8 local_638;
  int local_630;
  int local_62c;
  int local_628;
  EVerbosity local_624;
  FRHIBreadcrumbNode *local_620;
  <lambda_2> local_618;
  FRHIBreadcrumbNode *local_610;
  FRHIBreadcrumbNode *local_608;
  <lambda_1> local_600;
  FString local_5d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_5c8;
  uint *local_5a8;
  FRHIBreadcrumbNode **local_5a0;
  uint *local_598;
  FRHIBreadcrumbState *local_590;
  int local_588;
  int local_584;
  FString local_580;
  FString local_570;
  TPairInitializer<FString_&&,FGPUBreadcrumbCrashData::FQueueData_&&> local_560;
  TMap<FRHIBreadcrumbState::FQueueID,TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIBreadcrumbState::FQueueID,TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_>,0>_>
  *local_550;
  uint uStack_548;
  uint uStack_544;
  TBitArray<FDefaultBitArrayAllocator> *local_540;
  undefined4 uStack_538;
  uint uStack_534;
  uint local_530;
  undefined4 uStack_52c;
  int iStack_528;
  undefined4 uStack_524;
  undefined8 *local_520;
  TMap<FRHIBreadcrumbState::FQueueID,TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIBreadcrumbState::FQueueID,TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_>,0>_>
  *local_518;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_510;
  int iStack_4f0;
  undefined4 uStack_4ec;
  FRHIBreadcrumbNode *local_4e8;
  FRHIBreadcrumbNode *pFStack_4e0;
  FString local_4d0;
  FString *local_4c0;
  FQueueData *local_4b8;
  FString local_4b0;
  FString local_4a0;
  FString local_490;
  TMap<FRHIBreadcrumbState::FQueueID,TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIBreadcrumbState::FQueueID,TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_>,0>_>
  *local_480;
  longlong lStack_478;
  TBitArray<FDefaultBitArrayAllocator> *local_470;
  undefined8 uStack_468;
  int iStack_464;
  undefined8 local_460;
  undefined8 uStack_458;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_450;
  undefined4 local_414;
  undefined1 local_408 [32];
  uint *local_3e8;
  uint local_3e0;
  undefined4 local_3dc;
  undefined4 local_3d8;
  int local_3d4;
  undefined1 local_3d0 [8];
  ForElementType<FSetElementId> local_3c8;
  int local_3c0;
  undefined1 local_3b8 [64];
  undefined1 *local_378;
  int local_370;
  TSet<TTuple<FRHIBreadcrumbNode_*,FRHIBreadcrumbNode_*>,TDefaultMapHashableKeyFuncs<FRHIBreadcrumbNode_*,FRHIBreadcrumbNode_*,0>,FDefaultSetAllocator>
  local_368;
  undefined1 local_318 [64];
  ForElementType<FSetElementId> local_2d8;
  int local_2d0;
  FString local_2c8;
  FString local_2b8;
  FSerializer local_2a8;
  FQueueData local_178;
  FBuffer local_138;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_6d8;
  local_318._0_8_ = 0;
  local_318._8_8_ = 0;
  local_318._32_8_ = 0;
  local_318._40_4_ = 0;
  local_318._52_4_ = 0;
  local_2d8 = (ForElementType<FSetElementId>)0x0;
  local_2d0 = 0;
  local_318._44_4_ = 0x80;
  local_318._48_4_ = 0xffffffff;
  local_624 = param_2;
  local_590 = this;
  ::FString::FString(&local_2c8,L"RHI");
  ::FString::FString(&local_2b8,L"526BDA74-7A81-44C3-B0FD-9DBF80973C25");
  local_678.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  puVar22 = &param_1->field_0x10;
  local_678.Data.ArrayNum = 0;
  local_678.Data.ArrayMax = 0;
  local_5c8._padding_._0_4_ = 0;
  local_5c8._padding_._4_4_ = 1;
  local_5c8.UnvisitedBitMask = 0xffffffff;
  local_5c8.CurrentBitIndex = 0;
  local_5c8.BaseBitIndex = 0;
  local_5c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar22;
  if (*(int *)&param_1->field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_5c8);
  }
  TStack_658._padding_ = CONCAT44(local_5c8._padding_._4_4_,(undefined4)local_5c8._padding_);
  TStack_658.CurrentBitIndex = local_5c8.CurrentBitIndex;
  TStack_658.UnvisitedBitMask = local_5c8.UnvisitedBitMask;
  TStack_658._28_4_ = local_5c8._28_4_;
  TStack_658.BaseBitIndex = local_5c8.BaseBitIndex;
  local_638._0_4_ = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  TStack_658.Array = local_5c8.Array;
  TStack_510.Array = local_5c8.Array;
  uStack_4ec = local_638._4_4_;
  local_660 = param_1;
  local_518 = param_1;
  TStack_510._padding_ = TStack_658._padding_;
  TStack_510._16_8_ = TStack_658._16_8_;
  TStack_510._24_8_ = TStack_658._24_8_;
  iStack_4f0 = (int)local_638;
  pTVar11 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_450,(TBitArray<FDefaultBitArrayAllocator> *)puVar22,
                       *(int *)&param_1->field_0x28);
  TStack_658._padding_ = pTVar11->_padding_;
  TStack_658.Array = pTVar11->Array;
  TStack_658.UnvisitedBitMask = pTVar11->UnvisitedBitMask;
  TStack_658.CurrentBitIndex = pTVar11->CurrentBitIndex;
  TStack_658.BaseBitIndex = pTVar11->BaseBitIndex;
  TStack_658._28_4_ = *(undefined4 *)&pTVar11->field_0x1c;
  local_638 = CONCAT44(local_638._4_4_,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  uStack_458 = local_638;
  local_660 = param_1;
  local_480 = param_1;
  lStack_478 = TStack_658._padding_;
  local_470 = TStack_658.Array;
  uStack_468 = TStack_658._16_8_;
  local_460 = TStack_658._24_8_;
  do {
    pTVar7 = local_518;
    if (*(int *)&local_518->field_0x8 - *(int *)&local_518->field_0x34 != iStack_4f0) {
      local_68d = 0;
      `TSparseArray<TSparseSetElement<TTuple<FRHIBreadcrumbState::FQueueID,TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_68d);
    }
    if (((TStack_510.CurrentBitIndex == iStack_464) && (TStack_510.Array == local_470)) &&
       (pTVar7 == local_480)) {
      if (local_318._8_4_ != local_318._52_4_) {
        FGenericCrashContext::SetGPUBreadcrumbs((FGPUBreadcrumbCrashData *)local_318);
      }
      if (local_624 == Log) {
        if (4 < (byte)LogRHI._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
        }
      }
      else if (local_624 == Warning) {
        if (2 < (byte)LogRHI._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
        }
      }
      else if ((local_624 == Error) && (1 < (byte)LogRHI._0_1_)) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
      if (local_678.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_678.Data.AllocatorInstance.Data);
      }
      if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
      }
      if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
      }
      local_2d0 = 0;
      if (local_2d8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_2d8);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FGPUBreadcrumbCrashData::FQueueData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FGPUBreadcrumbCrashData::FQueueData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FGPUBreadcrumbCrashData::FQueueData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_318);
      return;
    }
    puVar25 = (uint *)((longlong)TStack_510.CurrentBitIndex * 0x20 + *(longlong *)pTVar7);
    EVar2 = *(ERHIPipeline *)(puVar25 + 1);
    if ((EVar2 == Graphics) || (EVar2 != AsyncCompute)) {
      lVar12 = 0;
      lVar19 = 4;
    }
    else {
      lVar12 = 8;
      lVar19 = 0xc;
    }
    local_5a8 = (uint *)(&(this->Devices).Elements[*puVar25].Pipelines.field_0x0 + lVar19);
    local_598 = (uint *)(&(this->Devices).Elements[*puVar25].Pipelines.field_0x0 + lVar12);
    uVar23 = *local_5a8;
    uVar18 = *local_598;
    local_668 = puVar25;
    GetRHIPipelineName(&local_490,EVar2);
    local_6b0 = (FRHIBreadcrumbNode *)CONCAT44(local_6b0._4_4_,uVar23);
    local_6b8 = (FRHIBreadcrumbNode *)CONCAT44(local_6b8._4_4_,uVar18);
    ::FString::PrintfImpl(&local_580,L"\r\n\r\n\tDevice %d, Pipeline %s: (In: 0x%08x, Out: 0x%08x)")
    ;
    iVar26 = local_580.Data.ArrayNum + -1;
    if (local_580.Data.ArrayNum == 0) {
      iVar26 = 0;
    }
    ::FString::AppendChars(&local_678,(wchar_t *)local_580.Data.AllocatorInstance.Data,iVar26);
    if (local_580.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_580.Data.AllocatorInstance.Data);
    }
    if (local_490.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_490.Data.AllocatorInstance.Data);
    }
    uVar13 = (ulonglong)(int)puVar25[4];
    plVar31 = *(longlong **)(puVar25 + 2);
    plVar33 = plVar31 + uVar13 * 2;
    local_408._0_8_ = 0;
    local_408._8_8_ = 0;
    local_3e8 = (uint *)0x0;
    local_3e0 = 0;
    local_3dc = 0x80;
    local_3d8 = 0xffffffff;
    local_3d4 = 0;
    local_3c8 = (ForElementType<FSetElementId>)0x0;
    local_3c0 = 0;
    local_698 = (FRHIBreadcrumbNode *)CONCAT44(local_698._4_4_,puVar25[4]);
    while( true ) {
      plVar30 = (longlong *)0x0;
      if (puVar25[4] != (uint)uVar13) {
        local_690 = 0;
        `TCheckedPointerIterator<FRHIBreadcrumbRange_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_690);
      }
      uVar23 = local_3e0;
      uVar18 = 0;
      if (plVar31 == plVar33) break;
      uVar23 = puVar25[1];
      if (((*plVar31 == 0) != (plVar31[1] == 0)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("!First == !Last",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIBreadcrumbs.h"
                             ,0x27b,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar27 = (FRHIBreadcrumbNode *)*plVar31;
      local_4e8 = pFVar27;
      pFStack_4e0 = (FRHIBreadcrumbNode *)plVar31[1];
      pFVar14 = pFVar27;
      while (pFVar28 = pFVar14, pFVar28 != (FRHIBreadcrumbNode *)0x0) {
        local_680 = (undefined1  [8])pFVar28;
        if ((pFVar28 == FRHIBreadcrumbNode::Sentinel) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Node && Node != FRHIBreadcrumbNode::Sentinel",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIBreadcrumbs.cpp"
                               ,0x95,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (plVar30 != (longlong *)0x0) {
          if ((((FRHIBreadcrumbNode *)*plVar30 != (FRHIBreadcrumbNode *)0x0) &&
              ((undefined1  [8])*plVar30 != local_680)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("*Next == nullptr || *Next == Node",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIBreadcrumbs.cpp"
                                 ,0x99,L""), bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *plVar30 = (longlong)local_680;
        }
        uVar18 = ((uint)((ulonglong)local_680 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_680 >> 4))
                 * -0x7a143595;
        uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
        uVar18 = uVar18 >> 0x10 ^ uVar18;
        if (local_408._8_4_ != local_3d4) {
          FVar21 = (ForElementType<FSetElementId>)local_3d0;
          if (local_3c8 != (ForElementType<FSetElementId>)0x0) {
            FVar21 = local_3c8;
          }
          iVar26 = *(int *)((longlong)FVar21 + (ulonglong)(local_3c0 - 1U & uVar18) * 4);
          while (iVar26 != -1) {
            lVar12 = local_408._0_8_ + (longlong)iVar26 * 0x18;
            if ((undefined1  [8])*(FRHIBreadcrumbNode **)(local_408._0_8_ + (longlong)iVar26 * 0x18)
                == local_680) {
              if (lVar12 != 0) goto LAB_145c9ba98;
              break;
            }
            iVar26 = *(int *)(lVar12 + 0x10);
          }
        }
        local_560.Value = (FQueueData *)local_680;
        local_6b8 = (FRHIBreadcrumbNode *)0x0;
        TSet<TTuple<FRHIBreadcrumbNode_*,FRHIBreadcrumbNode_*>,TDefaultMapHashableKeyFuncs<FRHIBreadcrumbNode_*,FRHIBreadcrumbNode_*,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<FRHIBreadcrumbNode_*_const_&>_>
                  ((TSet<TTuple<FRHIBreadcrumbNode_*,FRHIBreadcrumbNode_*>,TDefaultMapHashableKeyFuncs<FRHIBreadcrumbNode_*,FRHIBreadcrumbNode_*,0>,FDefaultSetAllocator>
                    *)local_408,(uint)&local_630,
                   (TKeyInitializer<FRHIBreadcrumbNode_*_const_&> *)(ulonglong)uVar18,
                   (bool *)&local_560.Value);
        lVar12 = local_408._0_8_ + (longlong)local_630 * 0x18;
LAB_145c9ba98:
        plVar30 = (longlong *)(lVar12 + 8);
        if (pFVar28 == pFStack_4e0) break;
        if (((char)uVar23 == '\x01') || (lVar12 = 0x20, (char)uVar23 != '\x02')) {
          lVar12 = 0x18;
        }
        pFVar14 = *(FRHIBreadcrumbNode **)((longlong)(pFVar28->NextPtrs).Elements + lVar12 + -0x18);
        if (pFVar14 == (FRHIBreadcrumbNode *)0x0) {
          local_6b0 = pFStack_4e0;
          local_6b8 = pFVar27;
          local_6a8 = pFVar28;
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Next",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIBreadcrumbs.h"
                             ,0x25e,
                             L"Nullptr \'Next\' breadcrumb found before reaching the \'Last\' breadcrumb in the range. (First: 0x%p, Last: 0x%p, Current: 0x%p)"
                            );
          if (bVar9) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
      }
      uVar13 = (ulonglong)local_698 & 0xffffffff;
      plVar31 = plVar31 + 2;
      puVar25 = local_668;
    }
    local_688 = (FRHIBreadcrumbNode *)0x0;
    local_368.Elements._0_8_ = 0;
    local_368.Elements._32_8_ = 0;
    local_368.Elements._40_4_ = 0;
    uStack_544 = 1;
    local_368.Elements._52_4_ = 0;
    local_368.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_368.HashSize = 0;
    local_368.Elements._8_8_ = 0;
    local_368.Elements._44_4_ = 0x80;
    local_368.Elements._48_4_ = 0xffffffff;
    uStack_534 = uVar18;
    local_530 = uVar18;
    if (local_3e0 != 0) {
      puVar25 = (uint *)(local_408 + 0x10);
      if (local_3e8 != (uint *)0x0) {
        puVar25 = local_3e8;
      }
      uVar24 = *puVar25;
      plVar31 = plVar30;
      while( true ) {
        uVar18 = (uint)plVar30;
        local_530 = (uint)plVar31;
        if (uVar24 != 0) break;
        lVar12 = (longlong)(int)uVar18;
        local_530 = local_530 + 0x20;
        plVar31 = (longlong *)(ulonglong)local_530;
        uVar18 = uVar18 + 1;
        plVar30 = (longlong *)(ulonglong)uVar18;
        uStack_534 = local_3e0;
        if ((int)((local_3e0 - 1) + ((int)(local_3e0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar18)
        goto LAB_145c9bc00;
        uVar24 = (puVar25 + 1)[lVar12];
      }
      uStack_544 = -uVar24 & uVar24;
      uVar13 = (ulonglong)uStack_544 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uStack_534 = (local_530 - 1) + (int)lVar12;
      local_588 = (int)lVar12;
      if ((int)local_3e0 < (int)uStack_534) {
        uStack_534 = local_3e0;
      }
    }
LAB_145c9bc00:
    local_550 = (TMap<FRHIBreadcrumbState::FQueueID,TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIBreadcrumbState::FQueueID,TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_>,0>_>
                 *)local_408;
    uStack_52c = local_414;
    uVar24 = local_3e0 & 0xffffffe0;
    local_540 = (TBitArray<FDefaultBitArrayAllocator> *)(local_408 + 0x10);
    uStack_548 = uVar18;
    iStack_528 = local_408._8_4_ - local_3d4;
    uStack_538 = 0xffffffff;
    local_660 = (TMap<FRHIBreadcrumbState::FQueueID,TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIBreadcrumbState::FQueueID,TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_>,0>_>
                 *)local_408;
    TStack_658._padding_ = CONCAT44(uStack_544,uVar18);
    iVar26 = (int)local_3e0 >> 5;
    bVar17 = (byte)local_3e0;
    TStack_658.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_408 + 0x10);
    TStack_658.UnvisitedBitMask = 0xffffffff;
    TStack_658.CurrentBitIndex = uStack_534;
    TStack_658.BaseBitIndex = local_530;
    TStack_658._28_4_ = local_414;
    local_638 = CONCAT44(uStack_524,local_408._8_4_ - local_3d4);
    if (((int)local_3e0 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (uVar23 != local_3e0) {
      puVar25 = (uint *)(local_408 + 0x10);
      if (local_3e8 != (uint *)0x0) {
        puVar25 = local_3e8;
      }
      uVar23 = -1 << (bVar17 & 0x1f) & puVar25[iVar26];
      while (uVar23 == 0) {
        lVar12 = (longlong)iVar26;
        uVar24 = uVar24 + 0x20;
        iVar26 = iVar26 + 1;
        uVar23 = local_3e0;
        if ((int)((local_3e0 - 1) + ((int)(local_3e0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar26)
        goto LAB_145c9bd50;
        uVar23 = (puVar25 + 1)[lVar12];
      }
      uVar13 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar23 = (uVar24 - 1) + (int)lVar12;
      local_584 = (int)lVar12;
      if ((int)local_3e0 < (int)uVar23) {
        uVar23 = local_3e0;
      }
    }
LAB_145c9bd50:
    while( true ) {
      pTVar7 = local_660;
      if (*(int *)&local_660->field_0x8 - *(int *)&local_660->field_0x34 != (int)local_638) {
        local_68f = 0;
        `TSparseArray<TSparseSetElement<TTuple<FRHIBreadcrumbNode_*,FRHIBreadcrumbNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_68f);
      }
      pFVar14 = local_688;
      if (((TStack_658.CurrentBitIndex == uVar23) &&
          (TStack_658.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_408 + 0x10))) &&
         (pTVar7 == (TMap<FRHIBreadcrumbState::FQueueID,TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIBreadcrumbState::FQueueID,TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_>,0>_>
                     *)local_408)) break;
      puVar20 = (undefined8 *)(*(longlong *)pTVar7 + (longlong)TStack_658.CurrentBitIndex * 0x18);
      uVar13 = puVar20[1];
      if (uVar13 == 0) {
        if ((local_688 != (FRHIBreadcrumbNode *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("!EndNode",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIBreadcrumbs.cpp"
                               ,0xa8,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_688 = (FRHIBreadcrumbNode *)*puVar20;
      }
      else {
        uVar18 = ((uint)(uVar13 >> 0x14) & 0xffff ^ (uint)(uVar13 >> 4)) * -0x7a143595;
        uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
        uVar18 = uVar18 >> 0x10 ^ uVar18;
        if (local_368.Elements._8_4_ != local_368.Elements._52_4_) {
          FVar21 = (ForElementType<FSetElementId>)&local_368.Hash;
          if (local_368.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar21 = local_368.Hash.SecondaryData;
          }
          iVar26 = *(int *)((longlong)FVar21 + (ulonglong)(local_368.HashSize - 1U & uVar18) * 4);
          while (iVar26 != -1) {
            lVar12 = local_368.Elements._0_8_ + (longlong)iVar26 * 0x18;
            if (*(ulonglong *)(local_368.Elements._0_8_ + (longlong)iVar26 * 0x18) == uVar13) {
              if (lVar12 != 0) goto LAB_145c9becc;
              break;
            }
            iVar26 = *(int *)(lVar12 + 0x10);
          }
        }
        local_6b8 = (FRHIBreadcrumbNode *)0x0;
        local_520 = puVar20 + 1;
        TSet<TTuple<FRHIBreadcrumbNode_*,FRHIBreadcrumbNode_*>,TDefaultMapHashableKeyFuncs<FRHIBreadcrumbNode_*,FRHIBreadcrumbNode_*,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<FRHIBreadcrumbNode_*_const_&>_>
                  (&local_368,(uint)&local_62c,
                   (TKeyInitializer<FRHIBreadcrumbNode_*_const_&> *)(ulonglong)uVar18,
                   (bool *)&local_520);
        lVar12 = local_368.Elements._0_8_ + (longlong)local_62c * 0x18;
LAB_145c9becc:
        if ((*(longlong *)(lVar12 + 8) != 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Prev == nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIBreadcrumbs.cpp"
                               ,0xae,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined8 *)(lVar12 + 8) = *puVar20;
      }
      TStack_658.UnvisitedBitMask = TStack_658.UnvisitedBitMask & ~TStack_658._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_658);
    }
    if (local_688 == (FRHIBreadcrumbNode *)0x0) {
      ::FString::AppendChars(&local_678,L"\r\n\t\tNo breadcrumb nodes found for this queue.",0x2d);
    }
    else {
      pFVar27 = local_688;
      while (uVar23 = ((uint)((ulonglong)pFVar27 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar27 >> 4)
                      ) * -0x7a143595, uVar23 = (uVar23 >> 0xd ^ uVar23) * -0x3d4d51cb,
            local_368.Elements._8_4_ != local_368.Elements._52_4_) {
        FVar21 = (ForElementType<FSetElementId>)&local_368.Hash;
        if (local_368.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar21 = local_368.Hash.SecondaryData;
        }
        iVar26 = *(int *)((longlong)FVar21 +
                         (ulonglong)(local_368.HashSize - 1U & (uVar23 >> 0x10 ^ uVar23)) * 4);
        while( true ) {
          if (iVar26 == -1) goto LAB_145c9bfec;
          lVar12 = local_368.Elements._0_8_ + (longlong)iVar26 * 0x18;
          if (*(FRHIBreadcrumbNode **)(local_368.Elements._0_8_ + (longlong)iVar26 * 0x18) ==
              pFVar27) break;
          iVar26 = *(int *)(lVar12 + 0x10);
        }
        puVar20 = (undefined8 *)(lVar12 + 8);
        if (lVar12 == 0) {
          puVar20 = (undefined8 *)0x0;
        }
        if (puVar20 == (undefined8 *)0x0) break;
        pFVar27 = (FRHIBreadcrumbNode *)*puVar20;
      }
LAB_145c9bfec:
      local_620 = pFVar27;
      cVar32 = '\x02';
      local_608 = local_688;
      uVar23 = local_668[1];
      local_3b8._0_8_ = 0;
      local_3b8._8_8_ = 0;
      local_3b8._32_8_ = 0;
      local_3b8._40_4_ = 0;
      local_3b8._44_4_ = 0x80;
      local_3b8._48_4_ = 0xffffffff;
      local_3b8._52_4_ = 0;
      local_378 = (undefined1 *)0x0;
      local_370 = 0;
      pFVar28 = pFVar27;
      pFVar6 = pFVar27;
      local_698 = pFVar27;
      puVar25 = local_5a8;
      puVar8 = local_5a8;
      if ((pFVar27 == (FRHIBreadcrumbNode *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("!First == !Last",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIBreadcrumbs.h"
                             ,0x27b,L""), puVar25 = local_5a8, puVar8 = local_5a8, bVar9)) {
code_r0x000145c9c07a:
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      while (local_5a8 = puVar8, pFVar5 = pFVar27, puVar8 = local_5a8, local_5a8 = puVar25,
            pFVar5 != (FRHIBreadcrumbNode *)0x0) {
        local_610 = pFVar5;
        do {
          uVar18 = ((uint)((ulonglong)local_610 >> 0x14) & 0xffff ^
                   (uint)((ulonglong)local_610 >> 4)) * -0x7a143595;
          uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
          uVar18 = uVar18 >> 0x10 ^ uVar18;
          if (local_3b8._8_4_ != local_3b8._52_4_) {
            puVar22 = local_3b8 + 0x38;
            if (local_378 != (undefined1 *)0x0) {
              puVar22 = local_378;
            }
            iVar26 = *(int *)(puVar22 + (ulonglong)(local_370 - 1U & uVar18) * 4);
            while (iVar26 != -1) {
              lVar12 = local_3b8._0_8_ + (longlong)iVar26 * 0x18;
              if (*(FRHIBreadcrumbNode **)(local_3b8._0_8_ + (longlong)iVar26 * 0x18) == local_610)
              {
                if (lVar12 != 0) goto LAB_145c9c17e;
                break;
              }
              iVar26 = *(int *)(lVar12 + 0x10);
            }
          }
          local_5a0 = &local_610;
          local_6b8 = (FRHIBreadcrumbNode *)0x0;
          TSet<TTuple<FRHIBreadcrumbNode_*,enum_FGPUBreadcrumbCrashData::EState>,TDefaultMapHashableKeyFuncs<FRHIBreadcrumbNode_*,enum_FGPUBreadcrumbCrashData::EState,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<FRHIBreadcrumbNode_*_const_&>_>
                    (local_3b8,(uint)&local_628,
                     (TKeyInitializer<FRHIBreadcrumbNode_*_const_&> *)(ulonglong)uVar18,
                     (bool *)&local_5a0);
          lVar12 = local_3b8._0_8_ + (longlong)local_628 * 0x18;
LAB_145c9c17e:
          puVar25 = local_598;
          *(undefined1 *)(lVar12 + 8) = 2;
          local_610 = local_610->Parent;
        } while (local_610 != (FRHIBreadcrumbNode *)0x0);
        if (pFVar5->ID == *puVar8) {
          if ((pFVar6 != local_698) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ActiveRange.First == SearchRange.First",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIBreadcrumbs.cpp"
                                 ,0xd2,L""), bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_620 = pFVar5;
        }
        if (pFVar5->ID == *puVar25) {
          if ((pFVar14 != local_688) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ActiveRange.Last == SearchRange.Last",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIBreadcrumbs.cpp"
                                 ,0xd9,L""), bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_608 = pFVar5;
          pFVar14 = pFVar5;
        }
        pFVar28 = local_698;
        if (pFVar5 == local_688) break;
        if (((char)uVar23 == '\x01') || (lVar12 = 0x20, (char)uVar23 != '\x02')) {
          lVar12 = 0x18;
        }
        pFVar27 = *(FRHIBreadcrumbNode **)((longlong)(pFVar5->NextPtrs).Elements + lVar12 + -0x18);
        pFVar6 = local_620;
        puVar25 = local_5a8;
        if (pFVar27 == (FRHIBreadcrumbNode *)0x0) {
          local_6b0 = local_688;
          local_6b8 = local_698;
          local_6a8 = pFVar5;
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Next",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIBreadcrumbs.h"
                             ,0x25e,
                             L"Nullptr \'Next\' breadcrumb found before reaching the \'Last\' breadcrumb in the range. (First: 0x%p, Last: 0x%p, Current: 0x%p)"
                            );
          pFVar28 = local_698;
          pFVar6 = local_620;
          puVar25 = local_5a8;
          if (bVar9) goto code_r0x000145c9c07a;
        }
      }
      cVar34 = (char)local_668[1];
      pFVar27 = pFVar28;
      local_68e = cVar34;
      bVar9 = false;
      if ((pFVar28 == (FRHIBreadcrumbNode *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("!First == !Last",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIBreadcrumbs.h"
                              ,0x27b,L""), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      while (pFVar6 = pFVar27, pFVar6 != (FRHIBreadcrumbNode *)0x0) {
        if (pFVar6 == local_620) {
          if ((cVar32 != '\x02') &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("State == EState::Finished",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIBreadcrumbs.cpp"
                                  ,0xe3,L""), bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          cVar32 = '\x01';
        }
        if (pFVar6 == pFVar14) {
          if ((cVar32 != '\x01') &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("State == EState::Active",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIBreadcrumbs.cpp"
                                 ,0xe9,L""), bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          bVar10 = true;
        }
        else {
          bVar10 = false;
          if (bVar9) {
            if ((cVar32 != '\x01') &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("State == EState::Active",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIBreadcrumbs.cpp"
                                   ,0xee,L""), bVar9)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            cVar32 = '\0';
            bVar10 = false;
          }
        }
        if (cVar32 == '\0') {
          if (pFVar6 != (FRHIBreadcrumbNode *)0x0) {
            pFVar27 = pFVar6;
            do {
              uVar23 = ((uint)((ulonglong)pFVar27 >> 0x14) & 0xffff ^
                       (uint)((ulonglong)pFVar27 >> 4)) * -0x7a143595;
              uVar23 = (uVar23 >> 0xd ^ uVar23) * -0x3d4d51cb;
              lVar12 = 0;
              if (local_3b8._8_4_ != local_3b8._52_4_) {
                puVar22 = local_3b8 + 0x38;
                if (local_378 != (undefined1 *)0x0) {
                  puVar22 = local_378;
                }
                iVar26 = *(int *)(puVar22 +
                                 (ulonglong)(local_370 - 1U & (uVar23 >> 0x10 ^ uVar23)) * 4);
                while (lVar12 = 0, iVar26 != -1) {
                  lVar12 = local_3b8._0_8_ + (longlong)iVar26 * 0x18;
                  if (*(FRHIBreadcrumbNode **)(local_3b8._0_8_ + (longlong)iVar26 * 0x18) == pFVar27
                     ) {
                    if (lVar12 != 0) goto LAB_145c9c554;
                    break;
                  }
                  iVar26 = *(int *)(lVar12 + 0x10);
                }
              }
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pair != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                 ,0x288,L"");
              if (bVar9) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
LAB_145c9c554:
              pFVar28 = local_698;
              pFVar14 = local_608;
              cVar34 = local_68e;
              if ((*(char *)(lVar12 + 8) == '\0') || (*(char *)(lVar12 + 8) == '\x01')) break;
              *(undefined1 *)(lVar12 + 8) = 0;
              pFVar27 = pFVar27->Parent;
            } while (pFVar27 != (FRHIBreadcrumbNode *)0x0);
            goto LAB_145c9c580;
          }
        }
        else {
          if (cVar32 == '\x01') {
            pFVar27 = pFVar6;
            if (pFVar6 == (FRHIBreadcrumbNode *)0x0) goto LAB_145c9c598;
            do {
              uVar23 = ((uint)((ulonglong)pFVar27 >> 0x14) & 0xffff ^
                       (uint)((ulonglong)pFVar27 >> 4)) * -0x7a143595;
              uVar23 = (uVar23 >> 0xd ^ uVar23) * -0x3d4d51cb;
              if (local_3b8._8_4_ != local_3b8._52_4_) {
                puVar22 = local_3b8 + 0x38;
                if (local_378 != (undefined1 *)0x0) {
                  puVar22 = local_378;
                }
                iVar26 = *(int *)(puVar22 +
                                 (ulonglong)(local_370 - 1U & (uVar23 >> 0x10 ^ uVar23)) * 4);
                while (iVar26 != -1) {
                  lVar12 = local_3b8._0_8_ + (longlong)iVar26 * 0x18;
                  if (*(FRHIBreadcrumbNode **)(local_3b8._0_8_ + (longlong)iVar26 * 0x18) == pFVar27
                     ) {
                    if (lVar12 != 0) goto LAB_145c9c459;
                    goto LAB_145c9c433;
                  }
                  iVar26 = *(int *)(lVar12 + 0x10);
                }
              }
              lVar12 = 0;
LAB_145c9c433:
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pair != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                 ,0x288,L"");
              if (bVar9) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
LAB_145c9c459:
              pFVar28 = local_698;
              if (*(char *)(lVar12 + 8) == '\x01') break;
              *(undefined1 *)(lVar12 + 8) = 1;
              ppFVar1 = &pFVar27->Parent;
              pFVar27 = *ppFVar1;
            } while (*ppFVar1 != (FRHIBreadcrumbNode *)0x0);
          }
LAB_145c9c580:
          if (pFVar6 == local_688) break;
        }
LAB_145c9c598:
        pFVar28 = local_698;
        if ((cVar34 == '\x01') || (lVar12 = 0x20, cVar34 != '\x02')) {
          lVar12 = 0x18;
        }
        pFVar27 = *(FRHIBreadcrumbNode **)((longlong)(pFVar6->NextPtrs).Elements + lVar12 + -0x18);
        bVar9 = bVar10;
        if (pFVar27 == (FRHIBreadcrumbNode *)0x0) {
          local_6b0 = local_688;
          local_6b8 = local_698;
          local_6a8 = pFVar6;
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Next",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIBreadcrumbs.h"
                              ,0x25e,
                              L"Nullptr \'Next\' breadcrumb found before reaching the \'Last\' breadcrumb in the range. (First: 0x%p, Last: 0x%p, Current: 0x%p)"
                             );
          if (bVar10) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
      }
      local_2a8.String.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2a8.String.Data.ArrayNum = 0;
      local_2a8.String.Data.ArrayMax = 0;
      FSHA1::FSHA1(&local_2a8.FullHash);
      FSHA1::FSHA1(&local_2a8.ActiveHash);
      local_600.Buffer = &local_138;
      local_2a8.ChildStack.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_600.NodeStates =
           (TMap<FRHIBreadcrumbNode_*,FGPUBreadcrumbCrashData::EState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIBreadcrumbNode_*,FGPUBreadcrumbCrashData::EState,0>_>
            *)local_3b8;
      local_600.Tree = &local_678;
      local_600.LastLevel = &local_68c;
      local_600.CrashSerializer = &local_2a8;
      local_618.WriteNode = &local_600;
      local_2a8.ChildStack.ArrayNum = 0;
      local_2a8.ChildStack.ArrayMax = 0;
      local_68c = 0;
      pFVar14 = pFVar28->Parent;
      if (pFVar14 != (FRHIBreadcrumbNode *)0x0) {
        `FRHIBreadcrumbState::DumpActiveBreadcrumbs'::__l59::<lambda_2>::
        operator()<_FRHIBreadcrumbState::DumpActiveBreadcrumbs_::__l59::<lambda_2>_>
                  (&local_618,pFVar14->Parent,&local_618);
        `FRHIBreadcrumbState::DumpActiveBreadcrumbs'::__l59::<lambda_1>::operator()
                  (local_618.WriteNode,pFVar14);
      }
      uVar23 = local_668[1];
      if ((pFVar28 == (FRHIBreadcrumbNode *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("!First == !Last",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIBreadcrumbs.h"
                             ,0x27b,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      do {
        iVar26 = 0;
        for (pFVar14 = pFVar28; pFVar14 != (FRHIBreadcrumbNode *)0x0; pFVar14 = pFVar14->Parent) {
          iVar26 = iVar26 + 1;
        }
        ::FString::FString(&local_5d8,L"");
        if (0 < (int)(iVar26 - 1U)) {
          uVar13 = (ulonglong)(iVar26 - 1U);
          do {
            ::FString::AppendChars(&local_5d8,L"\t",1);
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        pFVar14 = (FRHIBreadcrumbNode *)
                  (**(code **)(pFVar28->_padding_ + 0x10))(pFVar28,local_600.Buffer);
        pEVar15 = TMapBase<FRHIBreadcrumbNode_*,enum_FGPUBreadcrumbCrashData::EState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIBreadcrumbNode_*,enum_FGPUBreadcrumbCrashData::EState,0>_>
                  ::FindChecked(local_600.NodeStates,pFVar28);
        EVar3 = *pEVar15;
        if ((((EVar3 != NotStarted) && (EVar3 != Active)) && (EVar3 != Finished)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("!\"Enclosing block should never be called\"",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIBreadcrumbs.cpp"
                               ,0x122,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_6b8 = (FRHIBreadcrumbNode *)L"";
        if (local_5d8.Data.ArrayNum != 0) {
          local_6b8 = (FRHIBreadcrumbNode *)local_5d8.Data.AllocatorInstance.Data;
        }
        local_6b0 = pFVar14;
        ::FString::PrintfImpl(&local_570,L"\r\n\t\t(ID: 0x%08x) [%s]\t%s%s");
        iVar29 = local_570.Data.ArrayNum + -1;
        if (local_570.Data.ArrayNum == 0) {
          iVar29 = 0;
        }
        ::FString::AppendChars
                  (local_600.Tree,(wchar_t *)local_570.Data.AllocatorInstance.Data,iVar29);
        if (local_570.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_570.Data.AllocatorInstance.Data);
        }
        iVar29 = *local_600.LastLevel;
        this_00 = local_600.CrashSerializer;
        while (local_600.CrashSerializer = this_00, iVar26 <= iVar29) {
          FGPUBreadcrumbCrashData::FSerializer::EndNode(this_00);
          *local_600.LastLevel = *local_600.LastLevel + -1;
          this_00 = local_600.CrashSerializer;
          iVar29 = *local_600.LastLevel;
        }
        ::FString::FString(&local_4d0,(wchar_t *)pFVar14);
        FGPUBreadcrumbCrashData::FSerializer::BeginNode(this_00,&local_4d0,EVar3);
        if (local_4d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4d0.Data.AllocatorInstance.Data);
        }
        *local_600.LastLevel = iVar26;
        if ((FRHIBreadcrumbNode *)local_5d8.Data.AllocatorInstance.Data != (FRHIBreadcrumbNode *)0x0
           ) {
          FMemory::Free(local_5d8.Data.AllocatorInstance.Data);
        }
        if (pFVar28 == local_688) break;
        if (((char)uVar23 == '\x01') || (lVar12 = 0x20, (char)uVar23 != '\x02')) {
          lVar12 = 0x18;
        }
        pFVar14 = *(FRHIBreadcrumbNode **)((longlong)(pFVar28->NextPtrs).Elements + lVar12 + -0x18);
        if (pFVar14 == (FRHIBreadcrumbNode *)0x0) {
          local_6b0 = local_688;
          local_6b8 = local_698;
          local_6a8 = pFVar28;
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Next",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIBreadcrumbs.h"
                             ,0x25e,
                             L"Nullptr \'Next\' breadcrumb found before reaching the \'Last\' breadcrumb in the range. (First: 0x%p, Last: 0x%p, Current: 0x%p)"
                            );
          if (bVar9) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        pFVar28 = pFVar14;
      } while (pFVar14 != (FRHIBreadcrumbNode *)0x0);
      for (; local_68c != 0; local_68c = local_68c + -1) {
        FGPUBreadcrumbCrashData::FSerializer::EndNode(&local_2a8);
      }
      pFVar16 = FGPUBreadcrumbCrashData::FSerializer::GetResult(&local_2a8,&local_178);
      GetRHIPipelineName(&local_4a0,*(ERHIPipeline *)(local_668 + 1));
      ::FString::PrintfImpl(&local_4b0,L"%s Queue %d");
      local_4c0 = &local_4b0;
      local_4b8 = pFVar16;
      TSet<TTuple<FString,FGPUBreadcrumbCrashData::FQueueData>,TDefaultMapHashableKeyFuncs<FString,FGPUBreadcrumbCrashData::FQueueData,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_&&,FGPUBreadcrumbCrashData::FQueueData_&&>_>
                ((TSet<TTuple<FString,FGPUBreadcrumbCrashData::FQueueData>,TDefaultMapHashableKeyFuncs<FString,FGPUBreadcrumbCrashData::FQueueData,0>,FDefaultSetAllocator>
                  *)local_318,&local_560,(bool *)&local_4c0);
      if (local_4b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4b0.Data.AllocatorInstance.Data);
      }
      if (local_4a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4a0.Data.AllocatorInstance.Data);
      }
      if (local_178.BreadcrumbString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_178.BreadcrumbString.Data.AllocatorInstance.Data);
      }
      if (local_2a8.ChildStack.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2a8.ChildStack.AllocatorInstance.Data);
      }
      FSHA1::~FSHA1(&local_2a8.ActiveHash);
      FSHA1::~FSHA1(&local_2a8.FullHash);
      if (local_2a8.String.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2a8.String.Data.AllocatorInstance.Data);
      }
      local_370 = 0;
      if (local_378 != (undefined1 *)0x0) {
        FMemory::Free(local_378);
      }
      TSparseArray<TSparseSetElement<TTuple<FRHIBreadcrumbNode_*,enum_FGPUBreadcrumbCrashData::EState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FRHIBreadcrumbNode_*,enum_FGPUBreadcrumbCrashData::EState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (local_3b8);
    }
    local_368.HashSize = 0;
    if (local_368.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_368.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FRHIBreadcrumbNode_*,FRHIBreadcrumbNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FRHIBreadcrumbNode_*,FRHIBreadcrumbNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_368.Elements);
    local_3c0 = 0;
    if (local_3c8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_3c8);
    }
    TSparseArray<TSparseSetElement<TTuple<FRHIBreadcrumbNode_*,FRHIBreadcrumbNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FRHIBreadcrumbNode_*,FRHIBreadcrumbNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FRHIBreadcrumbNode_*,FRHIBreadcrumbNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_408);
    TStack_510.UnvisitedBitMask = TStack_510.UnvisitedBitMask & ~TStack_510._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_510);
    this = local_590;
  } while( true );
}

