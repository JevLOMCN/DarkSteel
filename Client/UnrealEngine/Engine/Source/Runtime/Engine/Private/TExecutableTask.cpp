// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// Create @ 1486abe00

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TExecutableTask<_public:_virtual_void___cdecl_FSkeletalMeshUpdatePacketNanite::ProcessStage_Inline(FRHICommandList_&,UE::Tasks::FTaskEvent_&)_::_5_::<lambda_1>_>
* __cdecl UE::Tasks::Private::
          TExecutableTask<`FSkeletalMeshUpdatePacketNanite::ProcessStage_Inline'::__l5::<lambda_1>_>
          ::Create(wchar_t *param_1,<lambda_1> *param_2,ETaskPriority param_3,
                  EExtendedTaskPriority param_4,ETaskFlags param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  TExecutableTask<_public:_virtual_void___cdecl_FSkeletalMeshUpdatePacketNanite::ProcessStage_Inline(FRHICommandList_&,UE::Tasks::FTaskEvent_&)_::_5_::<lambda_1>_>
  *pTVar7;
  longlong lVar8;
  longlong *lpTlsValue;
  
  plVar5 = TlsGetValue(SmallTaskAllocator._0_4_);
  lpTlsValue = (longlong *)0x0;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = ::operator_new(0x18);
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(SmallTaskAllocator._0_4_,lpTlsValue);
    plVar5 = lpTlsValue;
  }
  pTVar7 = (TExecutableTask<_public:_virtual_void___cdecl_FSkeletalMeshUpdatePacketNanite::ProcessStage_Inline(FRHICommandList_&,UE::Tasks::FTaskEvent_&)_::_5_::<lambda_1>_>
            *)plVar5[1];
  if (pTVar7 == (TExecutableTask<_public:_virtual_void___cdecl_FSkeletalMeshUpdatePacketNanite::ProcessStage_Inline(FRHICommandList_&,UE::Tasks::FTaskEvent_&)_::_5_::<lambda_1>_>
                 *)0x0) {
    pTVar7 = (TExecutableTask<_public:_virtual_void___cdecl_FSkeletalMeshUpdatePacketNanite::ProcessStage_Inline(FRHICommandList_&,UE::Tasks::FTaskEvent_&)_::_5_::<lambda_1>_>
              *)*plVar5;
    if (pTVar7 == (TExecutableTask<_public:_virtual_void___cdecl_FSkeletalMeshUpdatePacketNanite::ProcessStage_Inline(FRHICommandList_&,UE::Tasks::FTaskEvent_&)_::_5_::<lambda_1>_>
                   *)0x0) {
      pTVar7 = (TExecutableTask<_public:_virtual_void___cdecl_FSkeletalMeshUpdatePacketNanite::ProcessStage_Inline(FRHICommandList_&,UE::Tasks::FTaskEvent_&)_::_5_::<lambda_1>_>
                *)TLockFreePointerListLIFOPad<void_*,64>::Pop
                            ((TLockFreePointerListLIFOPad<void_*,64> *)
                             &SmallTaskAllocator.field_0x40);
      plVar5[1] = (longlong)pTVar7;
      if (pTVar7 == (TExecutableTask<_public:_virtual_void___cdecl_FSkeletalMeshUpdatePacketNanite::ProcessStage_Inline(FRHICommandList_&,UE::Tasks::FTaskEvent_&)_::_5_::<lambda_1>_>
                     *)0x0) {
        puVar6 = FMemory::Malloc(0x10000,0);
        plVar5[1] = (longlong)puVar6;
        lVar8 = 0xff;
        do {
          puVar1 = puVar6 + 0x20;
          *puVar6 = puVar1;
          lVar8 = lVar8 + -1;
          puVar6 = puVar1;
        } while (lVar8 != 0);
        *puVar1 = 0;
        pTVar7 = (TExecutableTask<_public:_virtual_void___cdecl_FSkeletalMeshUpdatePacketNanite::ProcessStage_Inline(FRHICommandList_&,UE::Tasks::FTaskEvent_&)_::_5_::<lambda_1>_>
                  *)plVar5[1];
      }
    }
    else {
      plVar5[1] = (longlong)pTVar7;
      *plVar5 = 0;
    }
    *(undefined4 *)(plVar5 + 2) = 0x100;
  }
  lVar8 = *(longlong *)pTVar7;
  iVar4 = (int)plVar5[2] + -1;
  *(int *)(plVar5 + 2) = iVar4;
  plVar5[1] = lVar8;
  if (((iVar4 < 0) || ((iVar4 != 0) != (lVar8 != 0))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TLS.NumPartial >= 0 && ((!!TLS.NumPartial) == (!!TLS.PartialBundle))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\LockFreeFixedSizeAllocator.h"
                         ,0x59,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar7 = (TExecutableTask<_public:_virtual_void___cdecl_FSkeletalMeshUpdatePacketNanite::ProcessStage_Inline(FRHICommandList_&,UE::Tasks::FTaskEvent_&)_::_5_::<lambda_1>_>
              *)(*pcVar2)();
    return pTVar7;
  }
  FTaskBase::FTaskBase((FTaskBase *)pTVar7,2,true);
  *(undefined ***)pTVar7 =
       &TExecutableTaskBase<`FSkeletalMeshUpdatePacketNanite::ProcessStage_Inline'::`5'::<lambda_1>,void,void>
        ::_vftable_;
  FTaskBase::Init((FTaskBase *)pTVar7,param_1,param_3,param_4,param_5);
  *(undefined8 *)&pTVar7->field_0xd8 = 0;
  *(FDynamicDataEntry **)&pTVar7->field_0xd8 = (param_2->DynamicDatas).AllocatorInstance.Data;
  (param_2->DynamicDatas).AllocatorInstance.Data = (FDynamicDataEntry *)0x0;
  *(int *)&pTVar7->field_0xe0 = (param_2->DynamicDatas).ArrayNum;
  *(int *)&pTVar7->field_0xe4 = (param_2->DynamicDatas).ArrayMax;
  (param_2->DynamicDatas).ArrayNum = 0;
  (param_2->DynamicDatas).ArrayMax = 0;
  *(undefined ***)pTVar7 =
       &TExecutableTask<`FSkeletalMeshUpdatePacketNanite::ProcessStage_Inline'::`5'::<lambda_1>_>::
        _vftable_;
  return pTVar7;
}

// Create @ 148884e40

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TExecutableTask<_public:___cdecl__protected:_virtual_bool___cdecl_FLoadingTests_Flush_InvalidFromWorker::RunTest(FString_const_&)_::_2_::<lambda_1>::operator()(FArchive_&,UAsyncLoadingTests_Shared_*)const_::_5_::<lambda_1>_>
* __cdecl UE::Tasks::Private::
          TExecutableTask<``FLoadingTests_Flush_InvalidFromWorker::RunTest'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>_>
          ::Create(wchar_t *param_1,<lambda_1> *param_2,ETaskPriority param_3,
                  EExtendedTaskPriority param_4,ETaskFlags param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  TExecutableTask<_public:___cdecl__protected:_virtual_bool___cdecl_FLoadingTests_Flush_InvalidFromWorker::RunTest(FString_const_&)_::_2_::<lambda_1>::operator()(FArchive_&,UAsyncLoadingTests_Shared_*)const_::_5_::<lambda_1>_>
  *pTVar6;
  int iVar7;
  longlong lVar8;
  longlong *lpTlsValue;
  
  plVar4 = TlsGetValue(SmallTaskAllocator._0_4_);
  lpTlsValue = (longlong *)0x0;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = ::operator_new(0x18);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      lpTlsValue = plVar4;
    }
    TlsSetValue(SmallTaskAllocator._0_4_,lpTlsValue);
    plVar4 = lpTlsValue;
  }
  pTVar6 = (TExecutableTask<_public:___cdecl__protected:_virtual_bool___cdecl_FLoadingTests_Flush_InvalidFromWorker::RunTest(FString_const_&)_::_2_::<lambda_1>::operator()(FArchive_&,UAsyncLoadingTests_Shared_*)const_::_5_::<lambda_1>_>
            *)plVar4[1];
  if (pTVar6 == (TExecutableTask<_public:___cdecl__protected:_virtual_bool___cdecl_FLoadingTests_Flush_InvalidFromWorker::RunTest(FString_const_&)_::_2_::<lambda_1>::operator()(FArchive_&,UAsyncLoadingTests_Shared_*)const_::_5_::<lambda_1>_>
                 *)0x0) {
    pTVar6 = (TExecutableTask<_public:___cdecl__protected:_virtual_bool___cdecl_FLoadingTests_Flush_InvalidFromWorker::RunTest(FString_const_&)_::_2_::<lambda_1>::operator()(FArchive_&,UAsyncLoadingTests_Shared_*)const_::_5_::<lambda_1>_>
              *)*plVar4;
    if (pTVar6 == (TExecutableTask<_public:___cdecl__protected:_virtual_bool___cdecl_FLoadingTests_Flush_InvalidFromWorker::RunTest(FString_const_&)_::_2_::<lambda_1>::operator()(FArchive_&,UAsyncLoadingTests_Shared_*)const_::_5_::<lambda_1>_>
                   *)0x0) {
      pTVar6 = (TExecutableTask<_public:___cdecl__protected:_virtual_bool___cdecl_FLoadingTests_Flush_InvalidFromWorker::RunTest(FString_const_&)_::_2_::<lambda_1>::operator()(FArchive_&,UAsyncLoadingTests_Shared_*)const_::_5_::<lambda_1>_>
                *)TLockFreePointerListLIFOPad<void_*,64>::Pop
                            ((TLockFreePointerListLIFOPad<void_*,64> *)
                             &SmallTaskAllocator.field_0x40);
      plVar4[1] = (longlong)pTVar6;
      if (pTVar6 == (TExecutableTask<_public:___cdecl__protected:_virtual_bool___cdecl_FLoadingTests_Flush_InvalidFromWorker::RunTest(FString_const_&)_::_2_::<lambda_1>::operator()(FArchive_&,UAsyncLoadingTests_Shared_*)const_::_5_::<lambda_1>_>
                     *)0x0) {
        puVar5 = FMemory::Malloc(0x10000,0);
        plVar4[1] = (longlong)puVar5;
        lVar8 = 0xff;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar8 = lVar8 + -1;
          puVar5 = puVar1;
        } while (lVar8 != 0);
        *puVar1 = 0;
        pTVar6 = (TExecutableTask<_public:___cdecl__protected:_virtual_bool___cdecl_FLoadingTests_Flush_InvalidFromWorker::RunTest(FString_const_&)_::_2_::<lambda_1>::operator()(FArchive_&,UAsyncLoadingTests_Shared_*)const_::_5_::<lambda_1>_>
                  *)plVar4[1];
      }
    }
    else {
      plVar4[1] = (longlong)pTVar6;
      *plVar4 = 0;
    }
    *(undefined4 *)(plVar4 + 2) = 0x100;
  }
  lVar8 = *(longlong *)pTVar6;
  iVar7 = (int)plVar4[2] + -1;
  *(int *)(plVar4 + 2) = iVar7;
  plVar4[1] = lVar8;
  if (((iVar7 < 0) || ((iVar7 != 0) != (lVar8 != 0))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TLS.NumPartial >= 0 && ((!!TLS.NumPartial) == (!!TLS.PartialBundle))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\LockFreeFixedSizeAllocator.h"
                         ,0x59,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TExecutableTask<_public:___cdecl__protected:_virtual_bool___cdecl_FLoadingTests_Flush_InvalidFromWorker::RunTest(FString_const_&)_::_2_::<lambda_1>::operator()(FArchive_&,UAsyncLoadingTests_Shared_*)const_::_5_::<lambda_1>_>
              *)(*pcVar2)();
    return pTVar6;
  }
  FTaskBase::FTaskBase((FTaskBase *)pTVar6,2,true);
  *(undefined ***)pTVar6 =
       &TExecutableTaskBase<``FLoadingTests_Flush_InvalidFromWorker::RunTest'::`2'::<lambda_1>::operator()'::`5'::<lambda_1>,void,void>
        ::_vftable_;
  FTaskBase::Init((FTaskBase *)pTVar6,param_1,param_3,param_4,param_5);
  *(FManualResetEvent **)&pTVar6->field_0xd8 = param_2->Event;
  *(undefined ***)pTVar6 =
       &TExecutableTask<``FLoadingTests_Flush_InvalidFromWorker::RunTest'::`2'::<lambda_1>::operator()'::`5'::<lambda_1>_>
        ::_vftable_;
  return pTVar6;
}

