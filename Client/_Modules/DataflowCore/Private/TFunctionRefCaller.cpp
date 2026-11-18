// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 5

// Call @ 144438420

TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>_(__cdecl*)(UE::Dataflow::FNewNodeParameters_const_&),TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>,UE::Dataflow::FNewNodeParameters_const_&>
::Call(void *param_1,FNewNodeParameters *param_2)

{
  (**(code **)&param_2->Guid)();
  return (TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>)param_1;
}

// Call @ 144438440

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDataflowOutput::EvaluateParallel'::__l2::<lambda_1>,bool>::Call(void *param_1)

{
  bool bVar1;
  
  bVar1 = FDataflowOutput::Evaluate
                    (*(FDataflowOutput **)param_1,*(FContext **)((longlong)param_1 + 8));
  return bVar1;
}

// Call @ 144438460

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`FDataflowOutput::EvaluateParallel'::__l2::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<bool,TUniqueFunction<bool___cdecl(void)>_&>
            ((TPromise<bool> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 144438480

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Dataflow::FContextEvaluator::ScheduleTask'::__l5::<lambda_1>,void>::Call
          (void *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  FDataflowOutput *this;
  int iVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  ulonglong uVar6;
  TReferenceControllerBase<1> *pTVar7;
  ForAnyElementType FVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  FName FStackX_8;
  TArray<FDataflowOutput_*,TSizedDefaultAllocator<32>_> TStack_38;
  
  if (*(longlong *)param_1 != 0) {
    pTVar9 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x28);
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
        plVar2 = *(longlong **)((longlong)param_1 + 0x20);
        if (plVar2 == (longlong *)0x0) goto LAB_144434900;
        LOCK();
        *(undefined1 *)(plVar2 + 0x43) = 1;
        UNLOCK();
        if ((int)plVar2[0x2a] == *(int *)((longlong)plVar2 + 0x17c)) {
          (**(code **)(*plVar2 + 0xc0))(plVar2,*(undefined8 *)param_1,0);
        }
        else {
          TStack_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          TStack_38.ArrayNum = 0;
          TStack_38.ArrayMax = 0;
          TMapBase<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
          ::GenerateValueArray<TSizedDefaultAllocator<32>_>
                    ((TMapBase<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
                      *)(plVar2 + 0x29),&TStack_38);
          iVar3 = TStack_38.ArrayNum;
          uVar6 = (ulonglong)TStack_38.ArrayNum;
          pFVar1 = TStack_38.AllocatorInstance.Data + uVar6 * 8;
          FVar8.Data = TStack_38.AllocatorInstance.Data;
          while( true ) {
            if ((int)uVar6 != iVar3) {
              `TCheckedPointerIterator<FDataflowOutput_*_const,int,0>::operator!='::__l2::<lambda_1>
              ::operator()(&FStackX_8);
            }
            if (FVar8.Data == pFVar1) break;
            this = *(FDataflowOutput **)FVar8.Data;
            bVar10 = FDataflowOutput::HasValidData(this,*(FContext **)param_1);
            if (!bVar10) {
              (**(code **)(*plVar2 + 0xc0))(plVar2,*(undefined8 *)param_1,this);
            }
            uVar6 = TStack_38._8_8_ & 0xffffffff;
            FVar8.Data = FVar8.Data + 8;
          }
          if (TStack_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(TStack_38.AllocatorInstance.Data);
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
        pTVar7 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x28);
        FStackX_8 = UnknownName;
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
          if (*(longlong *)((longlong)param_1 + 0x20) != 0) {
            FStackX_8 = *(FName *)(*(longlong *)((longlong)param_1 + 0x20) + 0x8c);
          }
        }
LAB_144434a60:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
        ::FName::ToString(&FStackX_8,(FString *)&TStack_38);
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
        if (TStack_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(TStack_38.AllocatorInstance.Data);
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

// Call @ 144438490

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Dataflow::FContextEvaluator::ScheduleTask'::__l5::<lambda_2>,void>::Call
          (void *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  Dataflow::FContextEvaluator::Process(*(FContextEvaluator **)param_1);
  if ((*(void **)((longlong)param_1 + 0x10) != (void *)0x0) &&
     (lVar1 = *(longlong *)((longlong)param_1 + 8), lVar1 != 0)) {
    CheckCallable(*(void **)((longlong)param_1 + 0x10));
    pcVar2 = *(code **)((longlong)param_1 + 0x10);
    plVar4 = (longlong *)((longlong)param_1 + 0x20);
    if (*(longlong **)((longlong)param_1 + 0x38) != (longlong *)0x0) {
      plVar4 = *(longlong **)((longlong)param_1 + 0x38);
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar2)(uVar3,lVar1);
  }
  return;
}

