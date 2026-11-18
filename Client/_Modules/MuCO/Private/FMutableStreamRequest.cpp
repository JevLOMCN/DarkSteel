// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 7

// FMutableStreamRequest @ 14ac504e0

FMutableStreamRequest * __thiscall
FMutableStreamRequest::FMutableStreamRequest
          (FMutableStreamRequest *this,TSharedPtr<FModelStreamableBulkData,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FMutableStreamRequest *pFVar4;
  
  (this->ModelStreamableBulkData).Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  (this->ModelStreamableBulkData).SharedReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->OpenFilesIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OpenFilesIds).ArrayNum = 0;
  (this->OpenFilesIds).ArrayMax = 0;
  (this->OpenFileHandles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OpenFileHandles).ArrayNum = 0;
  (this->OpenFileHandles).ArrayMax = 0;
  pTVar3 = ::operator_new(0x70);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    (this->HeapMemory).Object = (FHeapMemory *)0x10;
    (this->HeapMemory).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
    ;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFHeapMemory_FMutableStreamRequest___00_SharedPointerInternals__6B_
    ;
    *(undefined8 *)((longlong)&pTVar3[4]._padding_ + 1) = 0;
    *(undefined8 *)&pTVar3[4].SharedReferenceCount.field_0x1 = 0;
    *(undefined8 *)((longlong)&pTVar3[5]._padding_ + 1) = 0;
    *(undefined8 *)&pTVar3[5].SharedReferenceCount.field_0x1 = 0;
    *(undefined8 *)((longlong)&pTVar3[6]._padding_ + 1) = 0;
    *(undefined4 *)&pTVar3[6].SharedReferenceCount.field_0x1 = 0;
    *(undefined2 *)&pTVar3[6].WeakReferenceCount.field_0x1 = 0;
    pTVar3[6].WeakReferenceCount.field_0x3 = 0;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[3]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)&pTVar3[4]._padding_ = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pTVar3[4].SharedReferenceCount,4000);
    (this->HeapMemory).SharedReferenceCount.ReferenceController = pTVar3;
    (this->HeapMemory).Object = (FHeapMemory *)(pTVar3 + 1);
    if ((FHeapMemory *)(pTVar3 + 1) == (FHeapMemory *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FMutableStreamRequest *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->BlockReadInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BlockReadInfos).ArrayNum = 0;
  (this->BlockReadInfos).ArrayMax = 0;
  this->bIsStreaming = false;
  return this;
}

// operator() @ 14ac513d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall `FMutableStreamRequest::Stream'::__l2::<lambda_1>::operator()(void *this)

{
  longlong *plVar1;
  atomic<bool> aVar2;
  longlong *plVar3;
  FTaskBase *pFVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  TConsoleVariableData<bool> *pTVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  IBulkDataIORequest *pIVar13;
  undefined8 uVar14;
  undefined ***pppuVar15;
  undefined8 *puVar16;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar17;
  longlong *plVar18;
  longlong lVar19;
  EAsyncIOPriorityAndFlags EVar20;
  long64 *plVar21;
  bool bVar22;
  undefined1 auStackY_128 [32];
  undefined1 local_d7 [3];
  uint local_d4;
  IBulkDataIORequest *local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  int local_b0;
  EAsyncIOPriorityAndFlags local_ac;
  longlong local_a8;
  LPCRITICAL_SECTION local_a0;
  code *local_98 [2];
  undefined **local_88;
  longlong local_80;
  undefined4 local_78;
  undefined ***local_70;
  code *local_68;
  undefined **local_58;
  longlong local_50;
  undefined4 local_48;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId90,"Mutable_CustomizableInstanceLoadBlocksAsyncRead_Request"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\MutableStreamRequest.cpp"
               ,0x5a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId90);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)((longlong)this + 0x20) + 0x38);
  local_a0 = lpCriticalSection;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if ((char)plVar3[6] == '\0') {
    if ((*(longlong *)this == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pTVar8 = CVarMutableHighPriorityLoading.Ref;
    local_b0 = *(int *)(*(longlong *)this + 0xf8);
    bVar9 = IsInParallelGameThread();
    if ((bVar9) || (bVar9 = IsInGameThread(), bVar9)) {
      lVar12 = 0;
    }
    else {
      lVar12 = 1;
    }
    local_a8 = (longlong)*(int *)((longlong)this + 0x18);
    EVar20 = (pTVar8->ShadowedValue[lVar12] != false) + AIOP_Normal;
    local_d4 = 0;
    local_ac = EVar20;
    if (0 < local_a8) {
      lVar12 = 0;
      lVar19 = 0;
      do {
        uVar17 = ~local_d4;
        uVar10 = 0;
        if ((int)local_d4 < *(int *)((longlong)this + 0x18)) {
          uVar10 = uVar17 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        plVar3 = *(longlong **)((longlong)this + 0x20);
        plVar21 = (long64 *)(*(longlong *)((longlong)this + 0x10) + lVar19);
        uVar10 = 0;
        if ((int)local_d4 < (int)plVar3[1]) {
          uVar10 = uVar17 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        plVar3 = (longlong *)(*plVar3 + lVar12 * 8);
        if (local_b0 == 0) {
          if (plVar21[1] == 0) {
            bVar9 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<8206743798898753760>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\MutableStreamRequest.cpp"
                               ,0xe0,"false");
            if (bVar9) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if ((*plVar3 != 0) && (*(char *)(*plVar3 + 0xd0) == '\0')) {
              pFVar4 = (FTaskBase *)*plVar3;
              LOCK();
              aVar2 = pFVar4->TaskTriggered;
              pFVar4->TaskTriggered = (atomic<bool>)0x1;
              UNLOCK();
              if (aVar2 == (atomic<bool>)0x0) {
                LOCK();
                pFVar4->RefCount = (atomic<unsigned_int>)((int)pFVar4->RefCount + 1);
                UNLOCK();
                UE::Tasks::Private::FTaskBase::TryLaunch(pFVar4,0xd8);
              }
            }
          }
          else {
            local_50 = *plVar3;
            local_48 = (undefined4)plVar21[4];
            if (local_50 != 0) {
              LOCK();
              *(int *)(local_50 + 0x30) = *(int *)(local_50 + 0x30) + 1;
              UNLOCK();
            }
            lVar5 = *(longlong *)((longlong)this + 0x20);
            local_68 = UE::Core::Private::Function::
                       TFunctionRefCaller<``FMutableStreamRequest::Stream'::__l2::<lambda_1>::operator()'::__l26::<lambda_2>,void,bool,IAsyncReadRequest_*>
                       ::Call;
            local_58 = &UE::Core::Private::Function::
                        TFunction_OwnedObject<``FMutableStreamRequest::Stream'::`2'::<lambda_1>::operator()'::`26'::<lambda_2>,0,0>
                        ::_vftable_;
            local_40 = (undefined ***)0x0;
            uVar14 = (**(code **)(*(longlong *)plVar21[1] + 0x10))
                               ((longlong *)plVar21[1],*plVar21,(longlong)(int)plVar21[3],EVar20);
            local_c0 = uVar14;
            local_b8 = ::operator_new(0x18);
            if (local_b8 != (undefined8 *)0x0) {
              *(undefined4 *)(local_b8 + 1) = 1;
              *local_b8 = &
                          ___7__TReferenceControllerWithDeleter_VIAsyncReadRequest__U__DefaultDeleter_VIAsyncReadRequest___SharedPointerInternals___00_SharedPointerInternals__6B_
              ;
              *(undefined4 *)((longlong)local_b8 + 0xc) = 1;
              local_b8[2] = uVar14;
            }
            if (((*(undefined8 **)(lVar5 + 0x10) <= &local_c0) &&
                (&local_c0 < *(undefined8 **)(lVar5 + 0x10) + (longlong)*(int *)(lVar5 + 0x1c) * 2))
               && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar11 = *(int *)(lVar5 + 0x18);
            if (iVar11 == *(int *)(lVar5 + 0x1c)) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,(ForAnyElementType *)(lVar5 + 0x10),(int *)(lVar5 + 0x1c));
            }
            *(int *)(lVar5 + 0x18) = iVar11 + 1;
            puVar16 = (undefined8 *)((longlong)iVar11 * 0x10 + *(longlong *)(lVar5 + 0x10));
            *puVar16 = local_c0;
            puVar16[1] = local_b8;
            local_b8 = (undefined8 *)0x0;
            local_c0 = 0;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            if (local_68 != (code *)0x0) {
              pppuVar15 = &local_58;
              if (local_40 != (undefined ***)0x0) {
                pppuVar15 = local_40;
              }
              (*(code *)(*pppuVar15)[2])();
            }
          }
        }
        else {
          local_80 = *plVar3;
          local_78 = *(undefined4 *)(plVar21 + 4);
          if (local_80 != 0) {
            LOCK();
            *(int *)(local_80 + 0x30) = *(int *)(local_80 + 0x30) + 1;
            UNLOCK();
          }
          local_98[0] = UE::Core::Private::Function::
                        TFunctionRefCaller<``FMutableStreamRequest::Stream'::__l2::<lambda_1>::operator()'::__l15::<lambda_1>,void,bool,IBulkDataIORequest_*>
                        ::Call;
          local_70 = (undefined ***)0x0;
          local_88 = &UE::Core::Private::Function::
                      TFunction_OwnedObject<``FMutableStreamRequest::Stream'::`2'::<lambda_1>::operator()'::`15'::<lambda_1>,0,0>
                      ::_vftable_;
          if ((*(longlong *)this == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if ((((int)plVar21[4] < 0) || (*(int *)(*(longlong *)this + 0xf8) <= (int)plVar21[4])) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ModelStreamableBulkData->StreamableBulkData.IsValidIndex(Block.FileId)"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\MutableStreamRequest.cpp"
                                 ,0xc5,L""), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if ((*(longlong *)this == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar10 = *(uint *)(plVar21 + 4);
          lVar5 = *(longlong *)this;
          uVar17 = 0;
          if ((int)uVar10 < *(int *)(lVar5 + 0xf8)) {
            uVar17 = ~uVar10 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          EVar20 = local_ac;
          lVar6 = *(longlong *)((longlong)this + 0x20);
          pIVar13 = FBulkData::CreateStreamingRequest
                              ((FBulkData *)
                               (*(longlong *)(lVar5 + 0xf0) + (longlong)(int)uVar10 * 0x28),*plVar21
                               ,(longlong)(int)plVar21[3],local_ac,
                               (TFunction<void___cdecl(bool,IBulkDataIORequest_*)> *)local_98,
                               (uchar *)plVar21[2]);
          local_d0 = pIVar13;
          local_c8 = ::operator_new(0x18);
          if (local_c8 != (undefined8 *)0x0) {
            *(undefined4 *)(local_c8 + 1) = 1;
            *local_c8 = &
                        ___7__TReferenceControllerWithDeleter_VIBulkDataIORequest__U__DefaultDeleter_VIBulkDataIORequest___SharedPointerInternals___00_SharedPointerInternals__6B_
            ;
            *(undefined4 *)((longlong)local_c8 + 0xc) = 1;
            local_c8[2] = pIVar13;
          }
          if (((*(IBulkDataIORequest ***)(lVar6 + 0x20) <= &local_d0) &&
              (&local_d0 <
               *(IBulkDataIORequest ***)(lVar6 + 0x20) + (longlong)*(int *)(lVar6 + 0x2c) * 2)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar11 = *(int *)(lVar6 + 0x28);
          if (iVar11 == *(int *)(lVar6 + 0x2c)) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,(ForAnyElementType *)(lVar6 + 0x20),(int *)(lVar6 + 0x2c));
          }
          *(int *)(lVar6 + 0x28) = iVar11 + 1;
          puVar16 = (undefined8 *)((longlong)iVar11 * 0x10 + *(longlong *)(lVar6 + 0x20));
          *puVar16 = local_d0;
          puVar16[1] = local_c8;
          local_c8 = (undefined8 *)0x0;
          local_d0 = (IBulkDataIORequest *)0x0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          if (local_98[0] != (code *)0x0) {
            pppuVar15 = &local_88;
            if (local_70 != (undefined ***)0x0) {
              pppuVar15 = local_70;
            }
            (*(code *)(*pppuVar15)[2])();
          }
        }
        lVar12 = lVar12 + 1;
        local_d4 = local_d4 + 1;
        lVar19 = lVar19 + 0x30;
        lpCriticalSection = local_a0;
      } while (lVar12 < local_a8);
    }
  }
  else {
    plVar18 = (longlong *)*plVar3;
    lVar12 = plVar3[1];
    plVar1 = plVar18 + (int)lVar12;
    while( true ) {
      if ((int)plVar3[1] != (int)lVar12) {
        `TCheckedPointerIterator<UE::Tasks::FTaskEvent,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_d7);
      }
      if (plVar18 == plVar1) break;
      if ((*plVar18 != 0) && (*(char *)(*plVar18 + 0xd0) == '\0')) {
        pFVar4 = (FTaskBase *)*plVar18;
        LOCK();
        aVar2 = pFVar4->TaskTriggered;
        pFVar4->TaskTriggered = (atomic<bool>)0x1;
        UNLOCK();
        if (aVar2 == (atomic<bool>)0x0) {
          LOCK();
          pFVar4->RefCount = (atomic<unsigned_int>)((int)pFVar4->RefCount + 1);
          UNLOCK();
          UE::Tasks::Private::FTaskBase::TryLaunch(pFVar4,0xd8);
        }
      }
      plVar18 = plVar18 + 1;
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 14ac56300

void __thiscall `FMutableStreamRequest::Stream'::__l2::<lambda_2>::operator()(void *this)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  
  lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)((longlong)this + 0x10) + 0x38);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(lpCriticalSection);
    lVar2 = *(longlong *)((longlong)this + 0x10);
    iVar1 = *(int *)(lVar2 + 0x18);
    plVar5 = *(longlong **)(lVar2 + 0x10);
    plVar4 = plVar5 + (longlong)iVar1 * 2;
    while( true ) {
      if (*(int *)(lVar2 + 0x18) != iVar1) {
        `TCheckedPointerIterator<TSharedPtr<IAsyncReadRequest,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (plVar5 == plVar4) break;
      plVar3 = (longlong *)*plVar5;
      if ((plVar3 != (longlong *)0x0) && (*(char *)((longlong)plVar3 + 0x41) == '\0')) {
        (**(code **)(*plVar3 + 0x10))();
      }
      plVar5 = plVar5 + 2;
    }
    lVar2 = *(longlong *)((longlong)this + 0x10);
    iVar1 = *(int *)(lVar2 + 0x28);
    plVar5 = *(longlong **)(lVar2 + 0x20);
    plVar4 = plVar5 + (longlong)iVar1 * 2;
    while( true ) {
      if (*(int *)(lVar2 + 0x28) != iVar1) {
        `TCheckedPointerIterator<TSharedPtr<IBulkDataIORequest,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (plVar5 == plVar4) break;
      plVar3 = (longlong *)*plVar5;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3,0);
      }
      plVar5 = plVar5 + 2;
    }
    lVar2 = *(longlong *)((longlong)this + 0x10);
    DestructItems<TSharedPtr<IBulkDataIORequest,1>,int>
              (*(TSharedPtr<IBulkDataIORequest,1> **)(lVar2 + 0x20),*(int *)(lVar2 + 0x28));
    *(undefined4 *)(lVar2 + 0x28) = 0;
    if (*(int *)(lVar2 + 0x2c) != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)(lVar2 + 0x20),0,(int *)(lVar2 + 0x2c));
    }
    lVar2 = *(longlong *)((longlong)this + 0x10);
    DestructItems<TSharedPtr<IAsyncReadRequest,1>,int>
              (*(TSharedPtr<IAsyncReadRequest,1> **)(lVar2 + 0x10),*(int *)(lVar2 + 0x18));
    *(undefined4 *)(lVar2 + 0x18) = 0;
    if (*(int *)(lVar2 + 0x1c) != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)(lVar2 + 0x10),0,(int *)(lVar2 + 0x1c));
    }
    LeaveCriticalSection(lpCriticalSection);
    DestructItems<TSharedPtr<IAsyncReadFileHandle,1>,int>
              (*(TSharedPtr<IAsyncReadFileHandle,1> **)this,*(int *)((longlong)this + 8));
    *(undefined4 *)((longlong)this + 8) = 0;
    if (*(int *)((longlong)this + 0xc) != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,this,0,(int *)((longlong)this + 0xc));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// AddBlock @ 14ac57100

void __thiscall
FMutableStreamRequest::AddBlock
          (FMutableStreamRequest *this,FMutableStreamableBlock *param_1,EStreamableDataType param_2,
          ushort param_3,TArrayView<unsigned_char,int> *param_4)

{
  ushort uVar1;
  uint uVar2;
  code *pcVar3;
  uchar *puVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  
  if (this->bIsStreaming == false) {
    iVar7 = (this->BlockReadInfos).ArrayNum;
    if (iVar7 == (this->BlockReadInfos).ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&(this->BlockReadInfos).AllocatorInstance,
                         &(this->BlockReadInfos).ArrayMax);
    }
    (this->BlockReadInfos).ArrayNum = iVar7 + 1;
    uVar1 = param_1->Flags;
    uVar2 = param_1->FileId;
    pFVar8 = (this->BlockReadInfos).AllocatorInstance.Data + (longlong)iVar7 * 0x30;
    *(ulong64 *)pFVar8 = param_1->Offset;
    *(undefined8 *)(pFVar8 + 8) = 0;
    *(uint *)(pFVar8 + 0x20) = uVar2;
    *(ushort *)(pFVar8 + 0x24) = param_3;
    puVar4 = param_4->DataPtr;
    uVar5 = *(undefined8 *)&param_4->ArrayNum;
    *(ushort *)(pFVar8 + 0x26) = uVar1;
    *(EStreamableDataType *)(pFVar8 + 0x28) = param_2;
    *(uchar **)(pFVar8 + 0x10) = puVar4;
    *(undefined8 *)(pFVar8 + 0x18) = uVar5;
  }
  else {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\MutableStreamRequest.cpp"
                       ,0x20,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// Cancel @ 14ac57f20

void __thiscall FMutableStreamRequest::Cancel(FMutableStreamRequest *this)

{
  int iVar1;
  FHeapMemory *pFVar2;
  longlong *plVar3;
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &((this->HeapMemory).Object)->ReadRequestLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar2 = (this->HeapMemory).Object;
  if (pFVar2->bIsCancelled == false) {
    pFVar2->bIsCancelled = true;
    pFVar2 = (this->HeapMemory).Object;
    iVar1 = (pFVar2->ReadRequests).ArrayNum;
    pFVar5 = (pFVar2->ReadRequests).AllocatorInstance.Data;
    pFVar4 = pFVar5 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((pFVar2->ReadRequests).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TSharedPtr<IAsyncReadRequest,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar5 == pFVar4) break;
      plVar3 = *(longlong **)pFVar5;
      if ((plVar3 != (longlong *)0x0) && (*(char *)((longlong)plVar3 + 0x43) == '\0')) {
        *(undefined1 *)((longlong)plVar3 + 0x43) = 1;
        *(undefined1 *)(plVar3 + 8) = 1;
        if (*(char *)((longlong)plVar3 + 0x41) == '\0') {
          (**(code **)(*plVar3 + 0x18))();
        }
      }
      pFVar5 = pFVar5 + 0x10;
    }
    pFVar2 = (this->HeapMemory).Object;
    iVar1 = (pFVar2->BulkReadRequests).ArrayNum;
    pFVar5 = (pFVar2->BulkReadRequests).AllocatorInstance.Data;
    pFVar4 = pFVar5 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((pFVar2->BulkReadRequests).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TSharedPtr<IBulkDataIORequest,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar5 == pFVar4) break;
      if (*(longlong **)pFVar5 != (longlong *)0x0) {
        (**(code **)(**(longlong **)pFVar5 + 0x28))();
      }
      pFVar5 = pFVar5 + 0x10;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014ac5801d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// GetModelStreamableBulkData @ 14ac5d5f0

TSharedPtr<FModelStreamableBulkData,1> * __thiscall
FMutableStreamRequest::GetModelStreamableBulkData(FMutableStreamRequest *this)

{
  return &this->ModelStreamableBulkData;
}

// Stream @ 14ac61be0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FTaskHandle __thiscall FMutableStreamRequest::Stream(FMutableStreamRequest *this)

{
  int *piVar1;
  atomic<unsigned_int> *paVar2;
  int iVar3;
  atomic<unsigned_int> aVar4;
  FHeapMemory *pFVar5;
  FScriptContainerElement *pFVar6;
  FModelStreamableBulkData *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedPtr<IAsyncReadFileHandle,1> *pTVar9;
  code *pcVar10;
  undefined8 *puVar11;
  bool bVar12;
  int iVar13;
  FTaskHandle FVar14;
  TTask<void> TVar15;
  FTaskEventBase *pFVar16;
  FTaskBase *this_00;
  FTaskBase *pFVar17;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> in_RDX;
  FTaskBase *this_01;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  int local_res8 [2];
  undefined4 local_res18;
  undefined4 uStackX_1c;
  FScriptContainerElement *local_res20;
  ForAnyElementType local_58;
  undefined8 local_50;
  FHeapMemory *local_48;
  TReferenceControllerBase<1> *local_40;
  
  if (this->bIsStreaming != false) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\MutableStreamRequest.cpp"
                        ,0x43,L"");
    if (bVar12) {
      pcVar10 = (code *)swi(3);
      FVar14.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(*pcVar10)();
      return (FTaskHandle)FVar14.Pimpl.Reference;
    }
    TVar15 = UE::Tasks::MakeCompletedTask<void>();
    (in_RDX.Reference)->_padding_ = 0;
    (in_RDX.Reference)->_padding_ = *(longlong *)TVar15;
    *(undefined8 *)TVar15 = 0;
    puVar11 = (undefined8 *)CONCAT44(uStackX_1c,local_res18);
    if (puVar11 == (undefined8 *)0x0) {
      return (FTaskHandle)(TRefCountPtr<UE::Tasks::Private::FTaskBase>)in_RDX.Reference;
    }
    LOCK();
    piVar1 = (int *)(puVar11 + 6);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 != 1) {
      return (FTaskHandle)(TRefCountPtr<UE::Tasks::Private::FTaskBase>)in_RDX.Reference;
    }
    (**(code **)*puVar11)(puVar11,1);
    return (FTaskHandle)(TRefCountPtr<UE::Tasks::Private::FTaskBase>)in_RDX.Reference;
  }
  iVar3 = (this->BlockReadInfos).ArrayNum;
  this->bIsStreaming = true;
  if (iVar3 == 0) {
    TVar15 = UE::Tasks::MakeCompletedTask<void>();
    (in_RDX.Reference)->_padding_ = 0;
    (in_RDX.Reference)->_padding_ = *(longlong *)TVar15;
    *(undefined8 *)TVar15 = 0;
    if (local_res20 == (FScriptContainerElement *)0x0) {
      return (FTaskHandle)(TRefCountPtr<UE::Tasks::Private::FTaskBase>)in_RDX.Reference;
    }
    LOCK();
    piVar1 = (int *)((longlong)local_res20 + 0x30);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 != 1) {
      return (FTaskHandle)(TRefCountPtr<UE::Tasks::Private::FTaskBase>)in_RDX.Reference;
    }
    (*(code *)**(undefined8 **)local_res20)(local_res20,1);
    return (FTaskHandle)(TRefCountPtr<UE::Tasks::Private::FTaskBase>)in_RDX.Reference;
  }
  pFVar18 = (this->BlockReadInfos).AllocatorInstance.Data;
  pFVar19 = pFVar18 + (longlong)iVar3 * 0x30;
  while( true ) {
    if ((this->BlockReadInfos).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FMutableStreamRequest::FBlockReadInfo,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar18 == pFVar19) break;
    pFVar5 = (this->HeapMemory).Object;
    piVar1 = &(pFVar5->CompletionEvents).ArrayMax;
    iVar13 = (pFVar5->CompletionEvents).ArrayNum;
    if (iVar13 == *piVar1) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)pFVar5,piVar1);
    }
    (pFVar5->CompletionEvents).ArrayNum = iVar13 + 1;
    pFVar6 = (pFVar5->CompletionEvents).AllocatorInstance.Data;
    pFVar16 = UE::Tasks::Private::FTaskEventBase::Create(L"AsyncReadDataReadyEvent");
    *(FTaskEventBase **)(pFVar6 + (longlong)iVar13 * 8) = pFVar16;
    pFVar18 = pFVar18 + 0x30;
  }
  pFVar17 = (FTaskBase *)(this->ModelStreamableBulkData).SharedReferenceCount.ReferenceController;
  pFVar7 = (this->ModelStreamableBulkData).Object;
  if (pFVar17 != (FTaskBase *)0x0) {
    LOCK();
    *(atomic<int> *)&pFVar17->_padding_ =
         (atomic<int>)((int)*(atomic<int> *)&pFVar17->_padding_ + 1);
    UNLOCK();
  }
  local_res20 = (this->BlockReadInfos).AllocatorInstance.Data;
  this_01 = (FTaskBase *)0x0;
  (this->BlockReadInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_res8[0] = (this->BlockReadInfos).ArrayNum;
  iVar3 = (this->BlockReadInfos).ArrayMax;
  (this->BlockReadInfos).ArrayNum = 0;
  (this->BlockReadInfos).ArrayMax = 0;
  pTVar8 = (this->HeapMemory).SharedReferenceCount.ReferenceController;
  pFVar5 = (this->HeapMemory).Object;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = FMemory::Malloc(0x140,0x40);
  if (this_00 == (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x140);
  }
  else {
    UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
    this_00->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTaskBase<`FMutableStreamRequest::Stream'::`2'::<lambda_1>,void,void>::_vftable_
    ;
    UE::Tasks::Private::FTaskBase::Init(this_00,L"CustomizableObjectReadRequestTask",High,None,None)
    ;
    this_00[1]._padding_ = (longlong)pFVar7;
    this_00[1]._padding_ = (longlong)local_res20;
    this_00[1]._padding_ = (longlong)pFVar17;
    *(int *)&this_00[1]._padding_ = local_res8[0];
    *(int *)((longlong)&this_00[1]._padding_ + 4) = iVar3;
    this_00[1]._padding_ = (longlong)pFVar5;
    this_00[1]._padding_ = (longlong)pTVar8;
    local_res20 = (FScriptContainerElement *)0x0;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    this_00->_padding_ =
         (longlong)
         &UE::Tasks::Private::TExecutableTask<`FMutableStreamRequest::Stream'::`2'::<lambda_1>_>::
          _vftable_;
    UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x140);
    LOCK();
    paVar2 = &this_00->RefCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    pFVar17 = this_01;
    if (aVar4 == (atomic<unsigned_int>)0x1) {
      (**(code **)this_00->_padding_)(this_00,1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
      goto LAB_14ac61e94;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if (local_res20 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_res20);
  }
LAB_14ac61e94:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar17);
  iVar3 = (this->OpenFileHandles).ArrayNum;
  pFVar5 = (this->HeapMemory).Object;
  pTVar9 = (TSharedPtr<IAsyncReadFileHandle,1> *)(this->OpenFileHandles).AllocatorInstance.Data;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = CONCAT44(local_50._4_4_,iVar3);
  if (iVar3 == 0) {
    local_50 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&local_58,iVar3,(int *)((longlong)&local_50 + 4));
    ConstructItems<TSharedPtr<IAsyncReadFileHandle,1>,TSharedPtr<IAsyncReadFileHandle,1>,int>
              (local_58.Data,pTVar9,iVar3);
  }
  local_48 = (this->HeapMemory).Object;
  local_40 = (this->HeapMemory).SharedReferenceCount.ReferenceController;
  if (local_40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar17 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&UE::Tasks::Private::SmallTaskAllocator);
  if (pFVar17 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::FTaskBase(pFVar17,2,true);
    pFVar17->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTaskBase<`FMutableStreamRequest::Stream'::`2'::<lambda_2>,void,void>::_vftable_
    ;
    UE::Tasks::Private::FTaskBase::Init
              (pFVar17,L"GatherStreamingRequestsCompletionTask",High,None,None);
    pFVar17[1]._padding_ = 0;
    pFVar17[1]._padding_ = (longlong)local_58.Data;
    local_58.Data = (FScriptContainerElement *)0x0;
    *(int *)&pFVar17[1]._padding_ = (int)local_50;
    *(undefined4 *)((longlong)&pFVar17[1]._padding_ + 4) = local_50._4_4_;
    local_50 = 0;
    pFVar17[1]._padding_ = (longlong)local_48;
    pFVar17[1]._padding_ = (longlong)local_40;
    if (local_40 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar17->_padding_ =
         (longlong)
         &UE::Tasks::Private::TExecutableTask<`FMutableStreamRequest::Stream'::`2'::<lambda_2>_>::
          _vftable_;
    this_01 = pFVar17;
  }
  UE::Tasks::Private::FTaskBase::
  AddPrerequisites<TArray<UE::Tasks::FTaskEvent,TSizedDefaultAllocator<32>_>,0>
            (this_01,&pFVar5->CompletionEvents,true);
  UE::Tasks::Private::FTaskBase::TryLaunch(this_01,0x100);
  (in_RDX.Reference)->_padding_ = (longlong)this_01;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  DestructItems<TSharedPtr<IAsyncReadFileHandle,1>,int>
            ((TSharedPtr<IAsyncReadFileHandle,1> *)local_58.Data,(int)local_50);
  if ((TSharedPtr<IAsyncReadFileHandle,1> *)local_58.Data !=
      (TSharedPtr<IAsyncReadFileHandle,1> *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return (FTaskHandle)(TRefCountPtr<UE::Tasks::Private::FTaskBase>)in_RDX.Reference;
}

