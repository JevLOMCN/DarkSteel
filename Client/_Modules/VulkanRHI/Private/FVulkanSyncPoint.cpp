// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 4

// Create @ 145ae1c70

TRefCountPtr<FVulkanSyncPoint> __cdecl
FVulkanSyncPoint::Create(EVulkanSyncPointType param_1,wchar_t *param_2)

{
  FBaseGraphTask *pFVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  atomic<void_*> aVar6;
  TRefCountPtr<FBaseGraphTask> TVar7;
  undefined4 in_register_0000000c;
  FVulkanSyncPoint *pFVar8;
  undefined8 in_R8;
  FLLMScope local_res8 [2];
  undefined8 *local_res20;
  FMemScope local_38 [2];
  
  pFVar8 = (FVulkanSyncPoint *)CONCAT44(in_register_0000000c,param_1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_TRefCountPtr<FVulkanSyncPoint>___cdecl_FVulkanSyncPoint::Create(EVulkanSyncPointType,wchar_t_const*___ptr64)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_TRefCountPtr<FVulkanSyncPoint>___cdecl_FVulkanSyncPoint::Create(EVulkanSyncPointType,wchar_t_const*___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_TRefCountPtr<FVulkanSyncPoint>___cdecl_FVulkanSyncPoint::Create(EVulkanSyncPointType,wchar_t_const*___ptr64)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_TRefCountPtr<FVulkanSyncPoint>___cdecl_FVulkanSyncPoint::Create(EVulkanSyncPointType,wchar_t_const*___ptr64)'
                      ::__l2::LLMScope_Name79,L"RHIMisc/CreateSyncPoint");
      _Init_thread_footer(&`public:_static_class_TRefCountPtr<FVulkanSyncPoint>___cdecl_FVulkanSyncPoint::Create(EVulkanSyncPointType,wchar_t_const*___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_static_class_TRefCountPtr<FVulkanSyncPoint>___cdecl_FVulkanSyncPoint::Create(EVulkanSyncPointType,wchar_t_const*___ptr64)'
             ::__l2::LLMScope_Name79,false,None,Default,true);
  FMemScope::FMemScope
            (local_38,&`public:_static_class_TRefCountPtr<FVulkanSyncPoint>___cdecl_FVulkanSyncPoint::Create(EVulkanSyncPointType,wchar_t_const*___ptr64)'
                       ::__l2::LLMScope_Name79,true);
  uVar5 = FLockFreePointerListLIFORoot<64,1>::Pop((FLockFreePointerListLIFORoot<64,1> *)&MemoryPool)
  ;
  aVar6 = (atomic<void_*>)0x0;
  if (uVar5 != 0) {
    aVar6 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar5 >> 0xe][uVar5 & 0x3fff].Payload;
    FLockFreeLinkPolicy::FreeLockFreeLink(uVar5);
  }
  if (aVar6 == (atomic<void_*>)0x0) {
    aVar6 = (atomic<void_*>)FMemory::Malloc(0x28,8);
    if (aVar6 == (atomic<void_*>)0x0) {
      pFVar8->_padding_ = 0;
      goto LAB_145ae1de5;
    }
  }
  pFVar1 = (FBaseGraphTask *)((longlong)aVar6 + 0x10);
  *(longlong *)pFVar1 = 0;
  *(undefined4 *)((longlong)aVar6 + 8) = 0;
  *(uint *)((longlong)aVar6 + 0x18) = (uint)param_2;
  *(undefined ***)aVar6 = &___7FVulkanSyncPoint__6B_;
  *(undefined8 *)((longlong)aVar6 + 0x20) = in_R8;
  if ((uint)param_2 < 2) {
    TVar7 = FBaseGraphTask::CreateGraphEvent();
    if (pFVar1 != TVar7.Reference) {
      puVar4 = *(undefined8 **)pFVar1;
      *(longlong *)pFVar1 = *(longlong *)TVar7.Reference;
      *(undefined8 *)TVar7.Reference = 0;
      if (puVar4 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(puVar4 + 6);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)*puVar4)(puVar4,1);
        }
      }
    }
    if (local_res20 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(local_res20 + 6);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if ((iVar3 == 1) && (local_res20 != (undefined8 *)0x0)) {
        (**(code **)*local_res20)(local_res20,1);
      }
    }
  }
  pFVar8->_padding_ = (longlong)aVar6;
  if (aVar6 != (atomic<void_*>)0x0) {
    LOCK();
    *(int *)((longlong)aVar6 + 8) = *(int *)((longlong)aVar6 + 8) + 1;
    UNLOCK();
  }
LAB_145ae1de5:
  FMemScope::~FMemScope(local_38);
  FLLMScope::~FLLMScope(local_res8);
  return (TRefCountPtr<FVulkanSyncPoint>)pFVar8;
}

// FVulkanSyncPoint @ 145b4bd50

FVulkanSyncPoint * __thiscall
FVulkanSyncPoint::FVulkanSyncPoint
          (FVulkanSyncPoint *this,EVulkanSyncPointType param_1,wchar_t *param_2)

{
  TRefCountPtr<FBaseGraphTask> *pTVar1;
  undefined1 *puVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
  *this_00;
  FBaseGraphTask *pFVar6;
  FVulkanSyncPoint *pFVar7;
  FTask *pFVar8;
  undefined8 *puVar9;
  FBaseGraphTask *pFVar10;
  longlong local_28 [2];
  
  pFVar10 = (FBaseGraphTask *)0x0;
  this->DebugName = param_2;
  *(undefined4 *)&this->_padding_ = 0;
  pTVar1 = &this->GraphEvent;
  pTVar1->Reference = (FBaseGraphTask *)0x0;
  this->Type = param_1;
  this->_padding_ = (longlong)&___7FVulkanSyncPoint__6B_;
  if (Context < param_1) {
    return this;
  }
  this_00 = (TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
             *)GetGraphEventImplAllocator();
  pFVar6 = TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate(this_00);
  if (pFVar6 != (FBaseGraphTask *)0x0) {
    FBaseGraphTask::FBaseGraphTask
              (pFVar6,(TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                       *)0x0);
    *(undefined ***)pFVar6 = &___7FGraphEventImpl__6B_;
    TaskTrace::Created(*(ulong64 *)&pFVar6->field_0x50,0xd8);
    if (((*(ulonglong *)&pFVar6->field_0xb0 & 0x20) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsCompleted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                           ,0x1dd,L"State: %d"), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FVulkanSyncPoint *)(*pcVar4)();
      return pFVar7;
    }
    (**(code **)(*(longlong *)&pFVar6->field_0xa0 + 0x18))(&pFVar6->field_0xa0,&pFVar6->field_0x78);
    *(FBaseGraphTask **)&pFVar6->field_0x78 = pFVar6;
    *(undefined ***)&pFVar6->field_0xa0 =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(FBaseGraphTask **)&pFVar6->field_0x80 = pFVar6;
    pFVar8 = LowLevelTasks::FTask::GetActiveTask();
    if (pFVar8 != (FTask *)0x0) {
      pFVar10 = *(FBaseGraphTask **)&pFVar8->field_0x30;
    }
    *(FBaseGraphTask **)&pFVar6->field_0xa8 = pFVar10;
    *(undefined8 *)&pFVar6->field_0xb0 = 0xc8000054184c7c00;
    pFVar6->field_0x44 = 2;
    UE::FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&pFVar6->field_0x8);
    pFVar10 = pFVar6;
  }
  if (pTVar1 == (TRefCountPtr<FBaseGraphTask> *)local_28) {
    if (pFVar10 == (FBaseGraphTask *)0x0) {
      return this;
    }
    LOCK();
    puVar2 = &pFVar10->field_0x30;
    iVar3 = *(int *)puVar2;
    *(int *)puVar2 = *(int *)puVar2 + -1;
    UNLOCK();
    if (iVar3 != 1) {
      return this;
    }
    puVar9 = *(undefined8 **)pFVar10;
  }
  else {
    pFVar6 = pTVar1->Reference;
    pTVar1->Reference = pFVar10;
    if (pFVar6 == (FBaseGraphTask *)0x0) {
      return this;
    }
    LOCK();
    puVar2 = &pFVar6->field_0x30;
    iVar3 = *(int *)puVar2;
    *(int *)puVar2 = *(int *)puVar2 + -1;
    UNLOCK();
    if (iVar3 != 1) {
      return this;
    }
    puVar9 = *(undefined8 **)pFVar6;
    pFVar10 = pFVar6;
  }
  (*(code *)*puVar9)(pFVar10,1);
  return this;
}

// IsComplete @ 145b6bdd0

bool __thiscall FVulkanSyncPoint::IsComplete(FVulkanSyncPoint *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((this->GraphEvent).Reference == (FBaseGraphTask *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GraphEvent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSubmission.h"
                       ,0x55,
                       L"This sync point was not created with a CPU event. Cannot check completion on the CPU."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)((this->GraphEvent).Reference)->field_0xd0;
}

// Wait @ 145bc2700

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __thiscall FVulkanSyncPoint::Wait(FVulkanSyncPoint *this)

{
  code *pcVar1;
  bool bVar2;
  FVulkanDynamicRHI *this_00;
  
  if (((this->GraphEvent).Reference == (FBaseGraphTask *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GraphEvent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSubmission.cpp"
                         ,0x19,
                         L"This sync point was not created with a CPU event. Cannot wait for completion on the CPU."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((this->GraphEvent).Reference)->field_0xd0 == '\0') {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Turquoise,"SyncPoint_Wait");
    bVar2 = -1 < CpuChannel->Enabled;
    if (bVar2) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId30,"SyncPoint_Wait",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSubmission.cpp"
                 ,0x1e);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId30);
    }
    this_00 = (FVulkanDynamicRHI *)(**(code **)(GDynamicRHI->_padding_ + 0x30))();
    FVulkanDynamicRHI::ProcessInterruptQueueUntil(this_00,(this->GraphEvent).Reference);
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((((this->GraphEvent).Reference)->field_0xd0 == '\0') &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GraphEvent->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSubmission.cpp"
                         ,0x22,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

