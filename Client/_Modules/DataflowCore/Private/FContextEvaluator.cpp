// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 13

// operator() @ 1444348c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UE::Dataflow::FContextEvaluator::ScheduleTask'::__l5::<lambda_1>::operator()(void *this)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  FDataflowOutput *this_00;
  int iVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  ulonglong uVar6;
  TReferenceControllerBase<1> *pTVar7;
  ForAnyElementType FVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  FName local_res8;
  TArray<FDataflowOutput_*,TSizedDefaultAllocator<32>_> local_38;
  
  if (*(longlong *)this != 0) {
    pTVar9 = *(TReferenceControllerBase<1> **)((longlong)this + 0x28);
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      aVar4 = pTVar9->SharedReferenceCount;
      if (aVar4 == (atomic<int>)0x0) {
LAB_1444348fe:
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
      }
      else {
LAB_1444348f0:
        LOCK();
        aVar5 = pTVar9->SharedReferenceCount;
        bVar10 = aVar4 == aVar5;
        if (bVar10) {
          pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
          aVar5 = aVar4;
        }
        aVar4 = aVar5;
        UNLOCK();
        if (!bVar10) goto code_r0x0001444348fa;
        plVar2 = *(longlong **)((longlong)this + 0x20);
        if (plVar2 == (longlong *)0x0) goto LAB_144434900;
        LOCK();
        *(undefined1 *)(plVar2 + 0x43) = 1;
        UNLOCK();
        if ((int)plVar2[0x2a] == *(int *)((longlong)plVar2 + 0x17c)) {
          (**(code **)(*plVar2 + 0xc0))(plVar2,*(undefined8 *)this,0);
        }
        else {
          local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_38.ArrayNum = 0;
          local_38.ArrayMax = 0;
          TMapBase<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
          ::GenerateValueArray<TSizedDefaultAllocator<32>_>
                    ((TMapBase<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
                      *)(plVar2 + 0x29),&local_38);
          iVar3 = local_38.ArrayNum;
          uVar6 = (ulonglong)local_38.ArrayNum;
          pFVar1 = local_38.AllocatorInstance.Data + uVar6 * 8;
          FVar8.Data = local_38.AllocatorInstance.Data;
          while( true ) {
            if ((int)uVar6 != iVar3) {
              `TCheckedPointerIterator<FDataflowOutput_*_const,int,0>::operator!='::__l2::<lambda_1>
              ::operator()(&local_res8);
            }
            if (FVar8.Data == pFVar1) break;
            this_00 = *(FDataflowOutput **)FVar8.Data;
            bVar10 = FDataflowOutput::HasValidData(this_00,*(FContext **)this);
            if (!bVar10) {
              (**(code **)(*plVar2 + 0xc0))(plVar2,*(undefined8 *)this,this_00);
            }
            uVar6 = local_38._8_8_ & 0xffffffff;
            FVar8.Data = FVar8.Data + 8;
          }
          if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.AllocatorInstance.Data);
          }
        }
        LOCK();
        *(undefined1 *)(plVar2 + 0x43) = 0;
        UNLOCK();
        if ((byte)LogTemp._0_1_ < 3) goto LAB_144434900;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          ::FName::FName(&UnknownName,"-Unknown-");
          _Init_thread_footer(&::_TSS0);
        }
        pTVar7 = *(TReferenceControllerBase<1> **)((longlong)this + 0x28);
        local_res8 = UnknownName;
        if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
          aVar4 = pTVar7->SharedReferenceCount;
          do {
            if (aVar4 == (atomic<int>)0x0) {
              pTVar7 = (TReferenceControllerBase<1> *)0x0;
              goto LAB_144434a60;
            }
            LOCK();
            aVar5 = pTVar7->SharedReferenceCount;
            bVar10 = aVar4 == aVar5;
            if (bVar10) {
              pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
              aVar5 = aVar4;
            }
            UNLOCK();
            aVar4 = aVar5;
          } while (!bVar10);
          if (*(longlong *)((longlong)this + 0x20) != 0) {
            local_res8 = *(FName *)(*(longlong *)((longlong)this + 0x20) + 0x8c);
          }
        }
LAB_144434a60:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
        ::FName::ToString(&local_res8,(FString *)&local_38);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
        if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.AllocatorInstance.Data);
        }
      }
    }
LAB_144434900:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
  return;
code_r0x0001444348fa:
  if (aVar4 == (atomic<int>)0x0) goto LAB_1444348fe;
  goto LAB_1444348f0;
}

// Cancel @ 144438520

void __thiscall UE::Dataflow::FContextEvaluator::Cancel(FContextEvaluator *this)

{
  int iVar1;
  
  TSet<TTuple<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry>,TDefaultMapHashableKeyFuncs<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry>,TDefaultMapHashableKeyFuncs<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry,0>,FDefaultSetAllocator>
           *)&this->PendingEvaluationEntries);
  if (*(int *)&(this->CompletedTasks).Elements.field_0x8 !=
      *(int *)&(this->CompletedTasks).Elements.field_0x34) {
    TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::UnhashElements(&this->CompletedTasks)
    ;
    iVar1 = *(int *)&(this->CompletedTasks).Elements.field_0xc;
    *(undefined4 *)&(this->CompletedTasks).Elements.field_0x8 = 0;
    if (iVar1 < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,0,(ForAnyElementType *)&this->CompletedTasks,0,
                 (int *)&(this->CompletedTasks).Elements.field_0xc);
    }
    *(undefined4 *)&(this->CompletedTasks).Elements.field_0x34 = 0;
    *(undefined4 *)&(this->CompletedTasks).Elements.field_0x28 = 0;
    *(undefined4 *)&(this->CompletedTasks).Elements.field_0x30 = 0xffffffff;
  }
  return;
}

// ClearCompletedTasks @ 144438800

void __thiscall UE::Dataflow::FContextEvaluator::ClearCompletedTasks(FContextEvaluator *this)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FGuid,TRefCountPtr<FBaseGraphTask>_>,TDefaultMapHashableKeyFuncs<FGuid,TRefCountPtr<FBaseGraphTask>,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FGuid,TRefCountPtr<FBaseGraphTask>_>,TDefaultMapHashableKeyFuncs<FGuid,TRefCountPtr<FBaseGraphTask>,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<FGuid,TRefCountPtr<FBaseGraphTask>_>,TDefaultMapHashableKeyFuncs<FGuid,TRefCountPtr<FBaseGraphTask>,0>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
  TSet<TTuple<FGuid,TRefCountPtr<FBaseGraphTask>_>,TDefaultMapHashableKeyFuncs<FGuid,TRefCountPtr<FBaseGraphTask>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<FGuid,TRefCountPtr<FBaseGraphTask>_>,TDefaultMapHashableKeyFuncs<FGuid,TRefCountPtr<FBaseGraphTask>,0>,FDefaultSetAllocator>
              *)&this->RunningTasks);
  local_10 = '\0';
  cStack_f = '\0';
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar4 = local_78._24_8_ >> 0x20;
  uVar5 = local_78._28_4_;
  local_18 = (TSet<TTuple<FGuid,TRefCountPtr<FBaseGraphTask>_>,TDefaultMapHashableKeyFuncs<FGuid,TRefCountPtr<FBaseGraphTask>,0>,FDefaultSetAllocator>
              *)&this->RunningTasks;
  if ((int)uVar5 < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      puVar1 = (undefined8 *)((longlong)(int)uVar4 * 0x20 + *local_48);
      local_88 = *puVar1;
      uStack_80 = puVar1[1];
      if (*(char *)(*(longlong *)((longlong)(int)uVar5 * 0x20 + 0x10 + *local_48) + 0xd0) != '\0') {
        TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                  (&this->CompletedTasks,(FGuid *)&stack0x00000008,(bool *)&local_88);
        TSet<TTuple<FGuid,TRefCountPtr<FBaseGraphTask>_>,TDefaultMapHashableKeyFuncs<FGuid,TRefCountPtr<FBaseGraphTask>,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_20,uVar5);
        local_10 = '\x01';
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar4 = (ulonglong)uStack_2c;
      uVar5 = uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if ((local_10 != '\0') && (cStack_f != '\0')) {
      uVar5 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar5 < 4) {
        iVar3 = 1;
      }
      else {
        uVar4 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar3 = 1 << ((byte)lVar2 & 0x1f);
      }
      if (((0 < (int)uVar5) && (local_18->HashSize < iVar3)) || (iVar3 < local_18->HashSize)) {
        local_18->HashSize = iVar3;
        TSet<TTuple<FGuid,TRefCountPtr<FBaseGraphTask>_>,TDefaultMapHashableKeyFuncs<FGuid,TRefCountPtr<FBaseGraphTask>,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  return;
}

// FindInvalidUpstreamNodes @ 144447810

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Dataflow::FContextEvaluator::FindInvalidUpstreamNodes
          (FContextEvaluator *this,FDataflowNode *param_1,
          TArray<FDataflowNode_const_*,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FDataflowOutput *this_00;
  int iVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  FName local_res20;
  FName local_88;
  FName local_80;
  TArray<FDataflowInput_*,TSizedDefaultAllocator<32>_> local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  TMapBase<UE::Dataflow::FConnectionKey,FDataflowInput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>_>
  ::GenerateValueArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<UE::Dataflow::FConnectionKey,FDataflowInput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>_>
              *)&param_1->ExpandedInputs,&local_78);
  iVar3 = local_78.ArrayNum;
  pFVar1 = local_78.AllocatorInstance.Data + (longlong)local_78.ArrayNum * 8;
  FVar5.Data = local_78.AllocatorInstance.Data;
  while( true ) {
    if (local_78.ArrayNum != iVar3) {
      `TCheckedPointerIterator<FDataflowInput_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res20);
    }
    if (FVar5.Data == pFVar1) break;
    lVar2 = *(longlong *)FVar5.Data;
    if ((lVar2 != 0) &&
       (this_00 = *(FDataflowOutput **)(lVar2 + 0x60), this_00 != (FDataflowOutput *)0x0)) {
      if (2 < (byte)LogTemp._0_1_) {
        local_res20 = (FName)this_00->_padding_;
        ::FName::ToString(&local_res20,&local_48);
        local_88 = *(FName *)(lVar2 + 0x48);
        ::FName::ToString(&local_88,&local_58);
        local_80 = param_1->Name;
        ::FName::ToString(&local_80,&local_68);
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      bVar4 = FDataflowOutput::HasValidData(this_00,this->OwningContext);
      if ((!bVar4) && (local_res20 = (FName)this_00->_padding_, local_res20 != (FName)0x0)) {
        TArray<FDataflowNode_const_*,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<FDataflowNode_const_*_const_&>(param_2,(FDataflowNode **)&local_res20);
      }
    }
    FVar5.Data = FVar5.Data + 8;
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

// GetStats @ 14444e0a0

void __thiscall
UE::Dataflow::FContextEvaluator::GetStats
          (FContextEvaluator *this,int *param_1,int *param_2,int *param_3)

{
  ClearCompletedTasks(this);
  *param_1 = *(int *)&(this->PendingEvaluationEntries).field_0x8 -
             *(int *)&(this->PendingEvaluationEntries).field_0x34;
  *param_2 = *(int *)&(this->RunningTasks).field_0x8 - *(int *)&(this->RunningTasks).field_0x34;
  *param_3 = *(int *)&(this->CompletedTasks).Elements.field_0x8 -
             *(int *)&(this->CompletedTasks).Elements.field_0x34;
  return;
}

// IsScheduledOrRunning @ 144451850

bool __thiscall
UE::Dataflow::FContextEvaluator::IsScheduledOrRunning(FContextEvaluator *this,FGuid *param_1)

{
  int iVar1;
  ulong64 uVar2;
  
  uVar2 = CityHash64((char *)param_1,0x10);
  iVar1 = TSet<TTuple<FGuid,TRefCountPtr<FBaseGraphTask>_>,TDefaultMapHashableKeyFuncs<FGuid,TRefCountPtr<FBaseGraphTask>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,TRefCountPtr<FBaseGraphTask>_>,TDefaultMapHashableKeyFuncs<FGuid,TRefCountPtr<FBaseGraphTask>,0>,FDefaultSetAllocator>
                      *)&this->RunningTasks,(uint)uVar2,param_1);
  if (iVar1 == -1) {
    uVar2 = CityHash64((char *)param_1,0x10);
    iVar1 = TSet<TTuple<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry>,TDefaultMapHashableKeyFuncs<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FGuid>
                      ((TSet<TTuple<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry>,TDefaultMapHashableKeyFuncs<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry,0>,FDefaultSetAllocator>
                        *)&this->PendingEvaluationEntries,(uint)uVar2,param_1);
    if (iVar1 == -1) {
      return false;
    }
  }
  return true;
}

// Process @ 144453140

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::Dataflow::FContextEvaluator::Process(FContextEvaluator *this)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined1 *puVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  TReferenceControllerBase<1> *pTVar9;
  TMap<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry,0>_>
  *pTVar10;
  longlong lVar11;
  undefined1 *puVar12;
  uint uVar13;
  TReferenceControllerBase<1> *pTVar14;
  uint uVar15;
  TReferenceControllerBase<1> *pTVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  bool bVar20;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  int local_res18;
  TArray<FDataflowNode_const_*,TSizedDefaultAllocator<32>_> local_128;
  longlong *local_118;
  undefined1 auStack_110 [16];
  uint uStack_100;
  uint uStack_fc;
  longlong local_f8;
  TSet<TTuple<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry>,TDefaultMapHashableKeyFuncs<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry,0>,FDefaultSetAllocator>
  *pTStack_f0;
  TSet<TTuple<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry>,TDefaultMapHashableKeyFuncs<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry,0>,FDefaultSetAllocator>
  *local_e8;
  char local_e0;
  char cStack_df;
  TMap<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry,0>_>
  *local_d8;
  uint uStack_d0;
  uint uStack_cc;
  undefined1 *local_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  uint local_b8;
  uint uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  TMap<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry,0>_>
  *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  FString local_78;
  undefined1 local_68 [32];
  longlong local_48;
  TSet<TTuple<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry>,TDefaultMapHashableKeyFuncs<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry,0>,FDefaultSetAllocator>
  *pTStack_40;
  
  pTVar10 = &this->PendingEvaluationEntries;
  pTVar14 = (TReferenceControllerBase<1> *)0x0;
  uVar13 = 0;
  TSet<TTuple<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry>,TDefaultMapHashableKeyFuncs<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_68,
             (TSet<TTuple<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry>,TDefaultMapHashableKeyFuncs<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry,0>,FDefaultSetAllocator>
              *)pTVar10);
  uVar7 = 1;
  local_e0 = '\0';
  cStack_df = '\0';
  stack0xfffffffffffffef8 = local_68._16_16_;
  local_118 = (longlong *)local_68._0_8_;
  auStack_110._0_8_ = local_68._8_8_;
  local_f8 = local_48;
  pTStack_f0 = pTStack_40;
  uVar8 = local_68._24_8_ >> 0x20;
  uVar15 = local_68._28_4_;
  pTVar16 = pTVar14;
  local_e8 = (TSet<TTuple<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry>,TDefaultMapHashableKeyFuncs<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry,0>,FDefaultSetAllocator>
              *)pTVar10;
  if ((int)uVar15 < *(int *)(local_68._16_8_ + 0x18)) {
    do {
      lVar11 = (longlong)(int)uVar8 * 0x70 + *local_118;
      pTVar1 = *(TReferenceControllerBase<1> **)(lVar11 + 0x28);
      pTVar9 = pTVar1;
      if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
LAB_144453205:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      }
      else {
        aVar4 = pTVar1->SharedReferenceCount;
        do {
          pTVar9 = pTVar14;
          if (aVar4 == (atomic<int>)0x0) goto LAB_144453205;
          LOCK();
          aVar5 = pTVar1->SharedReferenceCount;
          bVar20 = aVar4 == aVar5;
          if (bVar20) {
            pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
            aVar5 = aVar4;
          }
          UNLOCK();
          aVar4 = aVar5;
        } while (!bVar20);
        pTVar9 = pTVar1;
        if (*(FDataflowNode **)(lVar11 + 0x20) == (FDataflowNode *)0x0) goto LAB_144453205;
        local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_128.ArrayNum = 0;
        local_128.ArrayMax = 0;
        FindInvalidUpstreamNodes(this,*(FDataflowNode **)(lVar11 + 0x20),&local_128);
        if (local_128.ArrayNum != 0) {
          if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.AllocatorInstance.Data);
          }
          goto LAB_144453205;
        }
        ScheduleTask(this,(FEvaluationEntry *)(lVar11 + 0x10));
        if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        pTVar16 = (TReferenceControllerBase<1> *)(ulonglong)((int)pTVar16 + 1);
        TSet<TTuple<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry>,TDefaultMapHashableKeyFuncs<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_f0,uVar15);
        local_e0 = '\x01';
      }
      uStack_100 = uStack_100 & ~auStack_110._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_110);
      uVar8 = (ulonglong)uStack_fc;
      uVar15 = uStack_fc;
    } while ((int)uStack_fc < *(int *)(auStack_110._8_8_ + 0x18));
    if ((local_e0 != '\0') && (cStack_df != '\0')) {
      uVar15 = *(int *)&(local_e8->Elements).field_0x8 - *(int *)&(local_e8->Elements).field_0x34;
      if (uVar15 < 4) {
        iVar6 = 1;
      }
      else {
        uVar8 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_res10 = (undefined4)lVar11;
        iVar6 = 1 << ((byte)lVar11 & 0x1f);
      }
      if (((0 < (int)uVar15) && (local_e8->HashSize < iVar6)) || (iVar6 < local_e8->HashSize)) {
        local_e8->HashSize = iVar6;
        TSet<TTuple<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry>,TDefaultMapHashableKeyFuncs<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry,0>,FDefaultSetAllocator>
        ::Rehash(local_e8);
      }
    }
    if ((int)pTVar16 != 0) goto LAB_14445356e;
  }
  pTVar10 = &this->PendingEvaluationEntries;
  if (2 < (byte)LogTemp._0_1_) {
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  uVar15 = *(uint *)&(this->PendingEvaluationEntries).field_0x28;
  local_c8 = &(this->PendingEvaluationEntries).field_0x10;
  local_b8 = 0;
  uStack_bc = uVar13;
  if (uVar15 != 0) {
    puVar18 = *(uint **)&(this->PendingEvaluationEntries).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)local_c8;
    }
    uVar19 = *puVar18;
    pTVar16 = pTVar14;
    local_b8 = 0;
    uVar13 = 0;
    while (uVar19 == 0) {
      iVar6 = (int)pTVar14;
      local_b8 = (int)pTVar16 + 0x20;
      pTVar16 = (TReferenceControllerBase<1> *)(ulonglong)local_b8;
      uVar13 = iVar6 + 1;
      pTVar14 = (TReferenceControllerBase<1> *)(ulonglong)uVar13;
      if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar13)
      goto LAB_1444533c4;
      uVar19 = puVar18[(longlong)iVar6 + 1];
    }
    uVar7 = -uVar19 & uVar19;
    uVar8 = (ulonglong)uVar7 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res18 = (int)lVar11;
    uStack_bc = (local_b8 - 1) + local_res18;
    if ((int)uVar15 < (int)uStack_bc) {
LAB_1444533c4:
      uStack_bc = uVar15;
    }
  }
  puVar12 = &(this->PendingEvaluationEntries).field_0x10;
  uVar15 = *(uint *)&(this->PendingEvaluationEntries).field_0x28;
  uVar19 = uVar15 & 0xffffffe0;
  iStack_b0 = *(int *)&(this->PendingEvaluationEntries).field_0x8 -
              *(int *)&(this->PendingEvaluationEntries).field_0x34;
  uStack_c0 = 0xffffffff;
  TStack_a0._padding_ = CONCAT44(uVar7,uVar13);
  TStack_a0.CurrentBitIndex = uStack_bc;
  TStack_a0.UnvisitedBitMask = 0xffffffff;
  iVar6 = (int)uVar15 >> 5;
  TStack_a0._28_4_ = uStack_bc;
  TStack_a0.BaseBitIndex = local_b8;
  uStack_80 = CONCAT44(uStack_ac,iStack_b0);
  local_d8 = pTVar10;
  uStack_d0 = uVar13;
  uStack_cc = uVar7;
  uStack_b4 = uStack_bc;
  local_a8 = pTVar10;
  TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_c8;
  if (((int)uVar15 < 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar20)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar13 = *(uint *)&(this->PendingEvaluationEntries).field_0x28;
  if (uVar15 != uVar13) {
    puVar2 = *(undefined1 **)&(this->PendingEvaluationEntries).field_0x20;
    puVar17 = puVar12;
    if (puVar2 != (undefined1 *)0x0) {
      puVar17 = puVar2;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar6 * 4);
    while (uVar15 == 0) {
      lVar11 = (longlong)iVar6;
      uVar19 = uVar19 + 0x20;
      iVar6 = iVar6 + 1;
      uVar15 = uVar13;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar6)
      goto LAB_1444534cb;
      uVar15 = *(uint *)(puVar17 + lVar11 * 4 + 4);
    }
    uVar8 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar15 = (int)lVar11 + -1 + uVar19;
    if ((int)uVar13 < (int)uVar15) {
      uVar15 = uVar13;
    }
  }
LAB_1444534cb:
  while( true ) {
    pTVar10 = local_a8;
    if (*(int *)&local_a8->field_0x8 - *(int *)&local_a8->field_0x34 != (int)uStack_80) {
      `TSparseArray<TSparseSetElement<TTuple<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_a0.CurrentBitIndex == uVar15) &&
        (TStack_a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar12)) &&
       (pTVar10 == &this->PendingEvaluationEntries)) break;
    if (2 < (byte)LogTemp._0_1_) {
      FEvaluationEntry::ToString
                ((FEvaluationEntry *)
                 ((longlong)TStack_a0.CurrentBitIndex * 0x70 + *(longlong *)pTVar10 + 0x10),
                 &local_78);
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
  }
LAB_14445356e:
  ClearCompletedTasks(this);
  return;
}

// ScheduleEvaluation @ 14445edc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Dataflow::FContextEvaluator::ScheduleEvaluation
          (FContextEvaluator *this,FEvaluationEntry *param_1)

{
  atomic<int> *paVar1;
  FScriptContainerElement *pFVar2;
  atomic<int> aVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  atomic<int> aVar7;
  ulong64 uVar8;
  FDataflowNode *pFVar9;
  longlong *plVar10;
  ForAnyElementType FVar11;
  FDataflowNode *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  FDataflowNode *pFVar14;
  bool bVar15;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined1 local_127 [7];
  TArray<FDataflowNode_const_*,TSizedDefaultAllocator<32>_> local_120;
  TReferenceControllerBase<1> *local_110;
  TPairInitializer<FGuid_const_&,UE::Dataflow::FContextEvaluator::FEvaluationEntry_const_&>
  local_108;
  FContextEvaluator *local_f8;
  FEvaluationEntry *local_f0;
  FEvaluationEntry *local_e8;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  undefined1 local_98 [72];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_f8 = this;
  uVar8 = CityHash64((char *)param_1,0x10);
  iVar6 = TSet<TTuple<FGuid,TRefCountPtr<FBaseGraphTask>_>,TDefaultMapHashableKeyFuncs<FGuid,TRefCountPtr<FBaseGraphTask>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,TRefCountPtr<FBaseGraphTask>_>,TDefaultMapHashableKeyFuncs<FGuid,TRefCountPtr<FBaseGraphTask>,0>,FDefaultSetAllocator>
                      *)&this->RunningTasks,(uint)uVar8,&param_1->Id);
  if (iVar6 == -1) {
    uVar8 = CityHash64((char *)param_1,0x10);
    iVar6 = TSet<TTuple<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry>,TDefaultMapHashableKeyFuncs<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FGuid>
                      ((TSet<TTuple<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry>,TDefaultMapHashableKeyFuncs<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry,0>,FDefaultSetAllocator>
                        *)&this->PendingEvaluationEntries,(uint)uVar8,&param_1->Id);
    if (iVar6 == -1) {
      if (2 < (byte)LogTemp._0_1_) {
        FEvaluationEntry::ToString(param_1,&local_e0);
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
        if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.Data.AllocatorInstance.Data);
        }
      }
      local_f0 = param_1;
      local_e8 = param_1;
      TSet<TTuple<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry>,TDefaultMapHashableKeyFuncs<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FGuid_const_&,UE::Dataflow::FContextEvaluator::FEvaluationEntry_const_&>_>
                ((TSet<TTuple<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry>,TDefaultMapHashableKeyFuncs<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry,0>,FDefaultSetAllocator>
                  *)&this->PendingEvaluationEntries,&local_108,(bool *)&local_f0);
      local_110 = (param_1->WeakNode).WeakReferenceCount.ReferenceController;
      pTVar13 = local_110;
      if (local_110 != (TReferenceControllerBase<1> *)0x0) {
        aVar3 = local_110->SharedReferenceCount;
        do {
          if (aVar3 == (atomic<int>)0x0) {
            pTVar13 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_14445f122;
          }
          LOCK();
          aVar7 = local_110->SharedReferenceCount;
          bVar15 = aVar3 == aVar7;
          if (bVar15) {
            local_110->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
            aVar7 = aVar3;
          }
          UNLOCK();
          aVar3 = aVar7;
        } while (!bVar15);
        pFVar9 = (param_1->WeakNode).Object;
        if (pFVar9 != (FDataflowNode *)0x0) {
          pFVar14 = (FDataflowNode *)0x0;
          local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_120.ArrayNum = 0;
          local_120.ArrayMax = 0;
          FindInvalidUpstreamNodes(this,pFVar9,&local_120);
          iVar6 = local_120.ArrayNum;
          pFVar2 = local_120.AllocatorInstance.Data + (longlong)local_120.ArrayNum * 8;
          FVar11.Data = local_120.AllocatorInstance.Data;
          while( true ) {
            if (local_120.ArrayNum != iVar6) {
              local_128 = 0;
              `TCheckedPointerIterator<FDataflowNode_const_*,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_128);
            }
            if (FVar11.Data == pFVar2) break;
            if (2 < (byte)LogTemp._0_1_) {
              local_108._4_8_ = *(undefined8 *)(*(longlong *)FVar11.Data + 0x8c);
              ::FName::ToString((FName *)((longlong)&local_108.Key + 4),&local_c0);
              FEvaluationEntry::ToString(param_1,&local_d0);
              Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
              if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_d0.Data.AllocatorInstance.Data);
              }
              if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_c0.Data.AllocatorInstance.Data);
              }
            }
            FVar11.Data = FVar11.Data + 8;
          }
          iVar6 = local_120.ArrayNum;
          pFVar2 = local_120.AllocatorInstance.Data + (longlong)local_120.ArrayNum * 8;
          FVar11.Data = local_120.AllocatorInstance.Data;
          while( true ) {
            if (local_120.ArrayNum != iVar6) {
              local_127[0] = 0;
              `TCheckedPointerIterator<FDataflowNode_const_*,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_127);
            }
            if (FVar11.Data == pFVar2) break;
            lVar4 = *(longlong *)FVar11.Data;
            local_98._16_8_ = *(undefined8 *)(lVar4 + 8);
            local_98._24_8_ = *(longlong *)(lVar4 + 0x10);
            local_98._0_8_ = *(undefined8 *)(lVar4 + 0x7c);
            local_98._8_8_ = *(undefined8 *)(lVar4 + 0x84);
            pFVar9 = (FDataflowNode *)local_98._24_8_;
            pFVar12 = pFVar14;
            if ((FDataflowNode *)local_98._24_8_ != (FDataflowNode *)0x0) {
              LOCK();
              ((atomic<int> *)&((FDataflowNode *)local_98._24_8_)->_padding_)[1] =
                   (atomic<int>)
                   ((int)((atomic<int> *)&((FDataflowNode *)local_98._24_8_)->_padding_)[1] + 1);
              UNLOCK();
              aVar3 = *(atomic<int> *)&((FDataflowNode *)local_98._24_8_)->_padding_;
              do {
                pFVar9 = pFVar14;
                pFVar12 = pFVar14;
                if (aVar3 == (atomic<int>)0x0) break;
                LOCK();
                aVar7 = *(atomic<int> *)&((FDataflowNode *)local_98._24_8_)->_padding_;
                bVar15 = aVar3 == aVar7;
                if (bVar15) {
                  *(atomic<int> *)&((FDataflowNode *)local_98._24_8_)->_padding_ =
                       (atomic<int>)((int)aVar3 + 1);
                  aVar7 = aVar3;
                }
                UNLOCK();
                pFVar9 = (FDataflowNode *)local_98._24_8_;
                pFVar12 = (FDataflowNode *)local_98._16_8_;
                aVar3 = aVar7;
              } while (!bVar15);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)pFVar9);
            pFVar9 = (FDataflowNode *)&pFVar12->_padding_;
            if (pFVar12 == (FDataflowNode *)0x0) {
              pFVar9 = pFVar14;
            }
            if ((pFVar9 != (FDataflowNode *)(lVar4 + 8)) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Result.Pin().Get() == this",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x6d5,L""), bVar15)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_98._32_8_ = 0;
            local_50 = (longlong *)0x0;
            ScheduleEvaluation(local_f8,(FEvaluationEntry *)local_98);
            if (local_98._32_8_ != 0) {
              plVar10 = (longlong *)(local_98 + 0x30);
              if (local_50 != (longlong *)0x0) {
                plVar10 = local_50;
              }
              (**(code **)(*plVar10 + 0x10))();
            }
            if ((FDataflowNode *)local_98._24_8_ != (FDataflowNode *)0x0) {
              LOCK();
              paVar1 = (atomic<int> *)(local_98._24_8_ + 0xc);
              aVar3 = *paVar1;
              *paVar1 = (atomic<int>)((int)*paVar1 + -1);
              UNLOCK();
              if (aVar3 == (atomic<int>)0x1) {
                (**(code **)(*(longlong *)local_98._24_8_ + 8))(local_98._24_8_,1);
              }
            }
            FVar11.Data = FVar11.Data + 8;
          }
          pTVar13 = local_110;
          if (local_120.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_120.AllocatorInstance.Data);
            pTVar13 = local_110;
          }
        }
      }
LAB_14445f122:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
      return;
    }
  }
  if (2 < (byte)LogTemp._0_1_) {
    FEvaluationEntry::ToString(param_1,&local_b0);
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// ScheduleNodeEvaluation @ 14445f1a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Dataflow::FContextEvaluator::ScheduleNodeEvaluation
          (FContextEvaluator *this,FDataflowNode *param_1,
          TFunction<void___cdecl(UE::Dataflow::FContext_&)> *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_88 [32];
  undefined1 local_68 [72];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68._0_4_ = (param_1->Guid).A;
  local_68._4_4_ = (param_1->Guid).B;
  local_68._8_4_ = (param_1->Guid).C;
  local_68._12_4_ = (param_1->Guid).D;
  TSharedFromThis<FDataflowNode,1>::AsWeak
            ((TSharedFromThis<FDataflowNode,1> *)&param_1->_padding_,
             (TWeakPtr<FDataflowNode_const_,1> *)(local_68 + 0x10));
  local_68._32_8_ = *(undefined8 *)param_2;
  local_20 = (longlong *)0x0;
  if (local_68._32_8_ != 0) {
    puVar3 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar3)(puVar3,local_68 + 0x30);
  }
  ScheduleEvaluation(this,(FEvaluationEntry *)local_68);
  Process(this);
  if (local_68._32_8_ != 0) {
    plVar4 = (longlong *)(local_68 + 0x30);
    if (local_20 != (longlong *)0x0) {
      plVar4 = local_20;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if ((TReferenceControllerBase<1> *)local_68._24_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = (atomic<int> *)(local_68._24_8_ + 0xc);
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(*(longlong *)local_68._24_8_ + 8))(local_68._24_8_,1);
    }
  }
  if (*(longlong *)param_2 != 0) {
    plVar4 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return;
}

// ScheduleOutputEvaluation @ 14445f2a0

void __thiscall
UE::Dataflow::FContextEvaluator::ScheduleOutputEvaluation
          (FContextEvaluator *this,FDataflowOutput *param_1,
          TFunction<void___cdecl(UE::Dataflow::FContext_&)> *param_2)

{
  FDataflowNode *pFVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  TFunction<void___cdecl(UE::Dataflow::FContext_&)> local_48;
  
  pFVar1 = (FDataflowNode *)param_1->_padding_;
  if (pFVar1 != (FDataflowNode *)0x0) {
    local_48._0_8_ = *(undefined8 *)param_2;
    local_48._40_8_ = 0;
    if (local_48._0_8_ != 0) {
      puVar2 = (undefined8 *)&param_2->field_0x10;
      if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)&param_2->field_0x28;
      }
      (**(code **)*puVar2)(puVar2,&local_48.field_0x10);
    }
    ScheduleNodeEvaluation(this,pFVar1,&local_48);
  }
  if (*(longlong *)param_2 != 0) {
    plVar3 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar3 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  return;
}

// ScheduleTask @ 14445f330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Dataflow::FContextEvaluator::ScheduleTask(FContextEvaluator *this,FEvaluationEntry *param_1)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  FDataflowNode *pFVar4;
  FContext *pFVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  atomic<int> aVar9;
  int iVar10;
  undefined4 uVar11;
  ulong64 uVar12;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar13;
  TRefCountPtr<FBaseGraphTask> TVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar17;
  longlong lVar18;
  TReferenceControllerBase<1> *pTVar19;
  bool bVar20;
  undefined1 auStack_208 [32];
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_1e8;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  undefined1 local_1b8 [16];
  undefined8 *local_1a8;
  FEvaluationEntry *local_1a0;
  undefined1 *local_198;
  FString local_190;
  code *local_178 [5];
  undefined8 *local_150;
  code *local_148 [5];
  undefined8 *local_120;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_118;
  int local_f0;
  int local_ec;
  FContextEvaluator *local_e8;
  FContext *local_e0;
  longlong local_d8;
  longlong local_c8 [3];
  longlong *local_b0;
  FContext *local_a8;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  FDataflowNode *local_88;
  TReferenceControllerBase<1> *local_80;
  longlong local_78;
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_208;
  pTVar19 = (param_1->WeakNode).WeakReferenceCount.ReferenceController;
  if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar19->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar19 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14445f39a;
      }
      LOCK();
      aVar9 = pTVar19->SharedReferenceCount;
      bVar20 = aVar3 == aVar9;
      if (bVar20) {
        pTVar19->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar9 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar9;
    } while (!bVar20);
    pFVar4 = (param_1->WeakNode).Object;
    if (pFVar4 != (FDataflowNode *)0x0) {
      local_118.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
      local_f0 = 0;
      local_ec = 4;
      uVar12 = CityHash64((char *)param_1,0x10);
      iVar10 = TSet<TTuple<FGuid,TRefCountPtr<FBaseGraphTask>_>,TDefaultMapHashableKeyFuncs<FGuid,TRefCountPtr<FBaseGraphTask>,0>,FDefaultSetAllocator>
               ::FindIndexByHash<FGuid>
                         ((TSet<TTuple<FGuid,TRefCountPtr<FBaseGraphTask>_>,TDefaultMapHashableKeyFuncs<FGuid,TRefCountPtr<FBaseGraphTask>,0>,FDefaultSetAllocator>
                           *)&this->RunningTasks,(uint)uVar12,&param_1->Id);
      if (iVar10 != -1) {
        lVar18 = (longlong)iVar10 * 0x20 + *(longlong *)&this->RunningTasks;
        FVar17 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)(lVar18 + 0x10);
        if (lVar18 == 0) {
          FVar17 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
        }
        if (FVar17 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar13 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_118;
          if (local_118.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar13 = local_118.SecondaryData;
          }
          if ((ulonglong)FVar13 <= (ulonglong)FVar17) {
            FVar13 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_118;
            if (local_118.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
              FVar13 = local_118.SecondaryData;
            }
            if ((ulonglong)FVar17 < (ulonglong)((longlong)FVar13 + (longlong)local_ec * 8)) {
              local_1d0 = (longlong)local_f0;
              local_1c8 = 8;
              local_1e0 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_118;
              if (local_118.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
                local_1e0 = local_118.SecondaryData;
              }
              local_1e8 = FVar17;
              local_1d8 = (longlong)local_ec;
              bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar20) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
          }
          if (local_f0 == local_ec) {
            local_f0 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                                 (0x808,&local_118,&local_ec);
          }
          FVar13 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_118;
          if (local_118.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar13 = local_118.SecondaryData;
          }
          lVar18 = (longlong)local_f0;
          local_f0 = local_f0 + 1;
          ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar13 + lVar18 * 8))->Reference =
               (FBaseGraphTask *)0x0;
          TVar14.Reference = *(FBaseGraphTask **)FVar17;
          ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar13 + lVar18 * 8))->Reference =
               TVar14.Reference;
          if (TVar14.Reference != (FBaseGraphTask *)0x0) {
            LOCK();
            *(int *)&(TVar14.Reference)->field_0x30 = *(int *)&(TVar14.Reference)->field_0x30 + 1;
            UNLOCK();
          }
        }
      }
      bVar20 = ShouldRunOnGameThread(this,pFVar4);
      iVar10 = local_f0;
      if (2 < (byte)LogTemp._0_1_) {
        FEvaluationEntry::ToString(param_1,&local_190);
        local_1e8._0_4_ = iVar10;
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
        if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_190.Data.AllocatorInstance.Data);
        }
      }
      local_88 = (param_1->WeakNode).Object;
      local_98 = (param_1->Id).A;
      uStack_94 = (param_1->Id).B;
      uStack_90 = (param_1->Id).C;
      uStack_8c = (param_1->Id).D;
      pFVar5 = this->OwningContext;
      local_80 = (param_1->WeakNode).WeakReferenceCount.ReferenceController;
      if (local_80 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_80->WeakReferenceCount = (atomic<int>)((int)local_80->WeakReferenceCount + 1);
        UNLOCK();
      }
      local_78 = *(longlong *)&param_1->OnPostEvaluation;
      local_50 = (longlong *)0x0;
      local_a8 = pFVar5;
      if (local_78 != 0) {
        puVar6 = *(undefined8 **)&(param_1->OnPostEvaluation).field_0x28;
        puVar15 = (undefined8 *)&(param_1->OnPostEvaluation).field_0x10;
        if (puVar6 != (undefined8 *)0x0) {
          puVar15 = puVar6;
        }
        (**(code **)*puVar15)(local_98,local_68);
      }
      local_178[0] = (code *)0x0;
      local_150 = FMemory::Malloc(0x70,0x10);
      *local_150 = &Core::Private::Function::
                    TFunction_OwnedObject<`UE::Dataflow::FContextEvaluator::ScheduleTask'::`5'::<lambda_1>,1,1>
                    ::_vftable_;
      puVar6 = local_150 + 2;
      *puVar6 = local_a8;
      *(uint *)(local_150 + 4) = local_98;
      *(uint *)((longlong)local_150 + 0x24) = uStack_94;
      *(uint *)(local_150 + 5) = uStack_90;
      *(uint *)((longlong)local_150 + 0x2c) = uStack_8c;
      local_150[6] = local_88;
      local_150[7] = local_80;
      if (local_80 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_80->WeakReferenceCount = (atomic<int>)((int)local_80->WeakReferenceCount + 1);
        UNLOCK();
      }
      local_150[8] = local_78;
      local_150[0xd] = 0;
      if (local_78 != 0) {
        plVar16 = local_68;
        if (local_50 != (longlong *)0x0) {
          plVar16 = local_50;
        }
        (**(code **)*plVar16)();
      }
      if (puVar6 != (undefined8 *)0x0) {
        local_178[0] = Core::Private::Function::
                       TFunctionRefCaller<`UE::Dataflow::FContextEvaluator::ScheduleTask'::__l5::<lambda_1>,void>
                       ::Call;
      }
      uVar11 = 0xff;
      if (bVar20) {
        uVar11 = 1;
      }
      local_1e8._0_4_ = uVar11;
      FFunctionGraphTask::CreateAndDispatchWhenReady
                ((TUniqueFunction<void___cdecl(void)> *)local_1b8,(TStatIdData *)local_178,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)&TStatId::TStatId_NAME_None,(Type)&local_118);
      if (local_78 != 0) {
        plVar16 = local_68;
        if (local_50 != (longlong *)0x0) {
          plVar16 = local_50;
        }
        (**(code **)(*plVar16 + 0x10))();
      }
      if (local_80 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &local_80->WeakReferenceCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(local_80->_padding_ + 8))(local_80,1);
        }
      }
      local_d8 = *(longlong *)&param_1->OnPostEvaluation;
      local_b0 = (longlong *)0x0;
      local_e8 = this;
      local_e0 = pFVar5;
      if (local_d8 != 0) {
        puVar6 = *(undefined8 **)&(param_1->OnPostEvaluation).field_0x28;
        puVar15 = (undefined8 *)&(param_1->OnPostEvaluation).field_0x10;
        if (puVar6 != (undefined8 *)0x0) {
          puVar15 = puVar6;
        }
        (**(code **)*puVar15)(puVar15,local_c8);
      }
      local_148[0] = (code *)0x0;
      local_120 = FMemory::Malloc(0x50,0x10);
      puVar6 = local_120 + 2;
      *local_120 = &Core::Private::Function::
                    TFunction_OwnedObject<`UE::Dataflow::FContextEvaluator::ScheduleTask'::`5'::<lambda_2>,1,1>
                    ::_vftable_;
      *puVar6 = local_e8;
      local_120[3] = local_e0;
      local_120[4] = local_d8;
      local_120[9] = 0;
      if (local_d8 != 0) {
        plVar16 = local_c8;
        if (local_b0 != (longlong *)0x0) {
          plVar16 = local_b0;
        }
        (**(code **)*plVar16)();
      }
      if (puVar6 != (undefined8 *)0x0) {
        local_148[0] = Core::Private::Function::
                       TFunctionRefCaller<`UE::Dataflow::FContextEvaluator::ScheduleTask'::__l5::<lambda_2>,void>
                       ::Call;
      }
      local_1e8._0_4_ = 1;
      TVar14 = FFunctionGraphTask::CreateAndDispatchWhenReady
                         ((TUniqueFunction<void___cdecl(void)> *)&local_1a8,(TStatIdData *)local_148
                          ,(TRefCountPtr<FBaseGraphTask> *)&TStatId::TStatId_NAME_None,
                          (Type)local_1b8);
      uVar8 = local_1b8._0_8_;
      puVar6 = (undefined8 *)local_1b8._0_8_;
      if ((FBaseGraphTask *)local_1b8 != TVar14.Reference) {
        puVar6 = *(undefined8 **)TVar14.Reference;
        *(undefined8 *)TVar14.Reference = 0;
        if ((undefined8 *)local_1b8._0_8_ != (undefined8 *)0x0) {
          LOCK();
          piVar2 = (int *)(local_1b8._0_8_ + 0x30);
          iVar10 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            puVar15 = *(undefined8 **)local_1b8._0_8_;
            local_1b8._0_8_ = puVar6;
            (*(code *)*puVar15)(uVar8,1);
            puVar6 = (undefined8 *)local_1b8._0_8_;
          }
        }
      }
      local_1b8._0_8_ = puVar6;
      if (local_1a8 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(local_1a8 + 6);
        iVar10 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if ((iVar10 == 1) && (local_1a8 != (undefined8 *)0x0)) {
          (**(code **)*local_1a8)(local_1a8,1);
        }
      }
      local_198 = local_1b8;
      local_1a0 = param_1;
      TSet<TTuple<FGuid,TRefCountPtr<FBaseGraphTask>_>,TDefaultMapHashableKeyFuncs<FGuid,TRefCountPtr<FBaseGraphTask>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FGuid_const_&,TRefCountPtr<FBaseGraphTask>_const_&>_>
                ((TSet<TTuple<FGuid,TRefCountPtr<FBaseGraphTask>_>,TDefaultMapHashableKeyFuncs<FGuid,TRefCountPtr<FBaseGraphTask>,0>,FDefaultSetAllocator>
                  *)&this->RunningTasks,
                 (TPairInitializer<FGuid_const_&,TRefCountPtr<FBaseGraphTask>_const_&> *)
                 (local_1b8 + 8),(bool *)&local_1a0);
      if (local_d8 != 0) {
        plVar16 = local_c8;
        if (local_b0 != (longlong *)0x0) {
          plVar16 = local_b0;
        }
        (**(code **)(*plVar16 + 0x10))();
      }
      if ((undefined8 *)local_1b8._0_8_ != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(local_1b8._0_8_ + 0x30);
        iVar10 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if ((iVar10 == 1) && ((undefined8 *)local_1b8._0_8_ != (undefined8 *)0x0)) {
          (*(code *)**(undefined8 **)local_1b8._0_8_)(local_1b8._0_8_,1);
        }
      }
      FVar17 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_118;
      if (local_118.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar17 = local_118.SecondaryData;
      }
      DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                ((TRefCountPtr<FBaseGraphTask> *)FVar17,local_f0);
      if (local_118.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FMemory::Free((void *)local_118.SecondaryData);
      }
    }
  }
LAB_14445f39a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19);
  return;
}

// ShouldRunOnGameThread @ 144465300

bool __thiscall
UE::Dataflow::FContextEvaluator::ShouldRunOnGameThread
          (FContextEvaluator *this,FDataflowNode *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  size_t sVar7;
  ForAnyElementType FVar8;
  ForAnyElementType FVar9;
  FName local_res10;
  TArray<FDataflowInput_*,TSizedDefaultAllocator<32>_> local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  TMapBase<UE::Dataflow::FConnectionKey,FDataflowInput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>_>
  ::GenerateValueArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<UE::Dataflow::FConnectionKey,FDataflowInput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>_>
              *)&param_1->ExpandedInputs,&local_68);
  iVar4 = local_68.ArrayNum;
  pFVar1 = local_68.AllocatorInstance.Data + (longlong)local_68.ArrayNum * 8;
  FVar9.Data = local_68.AllocatorInstance.Data;
  do {
    if (local_68.ArrayNum != iVar4) {
      `TCheckedPointerIterator<FDataflowInput_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res10);
    }
    if (FVar9.Data == pFVar1) {
      if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.AllocatorInstance.Data);
      }
      uVar5 = (**(code **)(param_1->_padding_ + 200))(param_1);
      return (bool)uVar5;
    }
    if (*(longlong *)FVar9.Data != 0) {
      local_res10 = *(FName *)(*(longlong *)FVar9.Data + 0x40);
      ::FName::ToString(&local_res10,&local_48);
      ::FString::FString(&local_38,"UStaticMesh");
      if (local_38.Data.ArrayNum == 0) {
        FVar8.Data = (FScriptContainerElement *)L"";
LAB_1444653b4:
        sVar7 = wcslen((wchar_t *)FVar8.Data);
        iVar6 = ::FString::Find(&local_48,(wchar_t *)FVar8.Data,(int)sVar7,IgnoreCase,FromStart,-1);
        if (iVar6 == -1) goto LAB_1444653e2;
LAB_144465444:
        bVar3 = true;
      }
      else {
        FVar8.Data = local_38.Data.AllocatorInstance.Data;
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        goto LAB_1444653b4;
LAB_1444653e2:
        ::FString::FString(&local_58,"USkeletalMesh");
        bVar2 = true;
        if (local_58.Data.ArrayNum == 0) {
          FVar8.Data = (FScriptContainerElement *)L"";
LAB_14446540d:
          sVar7 = wcslen((wchar_t *)FVar8.Data);
          iVar6 = ::FString::Find(&local_48,(wchar_t *)FVar8.Data,(int)sVar7,IgnoreCase,FromStart,-1
                                 );
          if (iVar6 != -1) goto LAB_144465444;
        }
        else {
          FVar8.Data = local_58.Data.AllocatorInstance.Data;
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          goto LAB_14446540d;
        }
        bVar3 = false;
      }
      if ((bVar2) &&
         (bVar2 = false, local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.AllocatorInstance.Data);
        }
        return true;
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    FVar9.Data = FVar9.Data + 8;
  } while( true );
}

// TryScheduleTask @ 144468270

bool __thiscall
UE::Dataflow::FContextEvaluator::TryScheduleTask(FContextEvaluator *this,FEvaluationEntry *param_1)

{
  FDataflowNode *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  TArray<FDataflowNode_const_*,TSizedDefaultAllocator<32>_> local_18;
  
  pTVar4 = (param_1->WeakNode).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1444682a7;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    pFVar1 = (param_1->WeakNode).Object;
    if (pFVar1 != (FDataflowNode *)0x0) {
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      FindInvalidUpstreamNodes(this,pFVar1,&local_18);
      if (local_18.ArrayNum == 0) {
        ScheduleTask(this,param_1);
        if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        return true;
      }
      if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
    }
  }
LAB_1444682a7:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

