// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 13

// FVulkanQueue @ 145b47060

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

FVulkanQueue * __thiscall
FVulkanQueue::FVulkanQueue
          (FVulkanQueue *this,FVulkanDevice *param_1,uint param_2,EVulkanQueueType param_3)

{
  uint uVar1;
  uint uVar2;
  FVulkanDevice *pFVar3;
  bool bVar4;
  FVulkanSemaphore *pFVar5;
  FVulkanSemaphore *pFVar6;
  FVulkanSemaphore *pFVar7;
  
  this->Device = param_1;
  pFVar7 = (FVulkanSemaphore *)0x0;
  this->Queue = (VkQueue_T *)0x0;
  this->QueueIndex = 0;
  this->FamilyIndex = param_2;
  this->QueueType = param_3;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CommandBufferPoolCS,4000);
  (this->CommandBufferPools).Elements[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CommandBufferPools).Elements[0].ArrayNum = 0;
  (this->CommandBufferPools).Elements[0].ArrayMax = 0;
  (this->CommandBufferPools).Elements[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CommandBufferPools).Elements[1].ArrayNum = 0;
  (this->CommandBufferPools).Elements[1].ArrayMax = 0;
  (this->CommandBufferPools).Elements[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CommandBufferPools).Elements[2].ArrayNum = 0;
  (this->CommandBufferPools).Elements[2].ArrayMax = 0;
  if ((((param_1->OptionalDeviceExtensions).field0_0x0.Packed & 0x200000000000) == 0) ||
     (GAllowTimelineSemaphores == 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  this->bUseTimelineSemaphores = bVar4;
  this->TimelineSempahore = (FVulkanSemaphore *)0x0;
  this->NextTimelineSemaphoreValue = 1;
  this->CompletedTimelineSemaphoreValue = 0;
  this->SupportedStages = 0;
  this->SupportedAccess = 0;
  pFVar5 = ::operator_new(0x10);
  pFVar6 = pFVar7;
  if (pFVar5 != (FVulkanSemaphore *)0x0) {
    pFVar5->_padding_ = 0;
    pFVar5->_padding_ = 0;
    pFVar5->_padding_ = 0;
    pFVar6 = pFVar5;
  }
  (this->PendingSubmission).Tail = (TNode *)pFVar6;
  (this->PendingSubmission).Head = (TNode *)pFVar6;
  pFVar5 = ::operator_new(0x10);
  pFVar6 = pFVar7;
  if (pFVar5 != (FVulkanSemaphore *)0x0) {
    pFVar5->_padding_ = 0;
    pFVar5->_padding_ = 0;
    pFVar5->_padding_ = 0;
    pFVar6 = pFVar5;
  }
  (this->PendingInterrupt).Tail = (TNode *)pFVar6;
  (this->PendingInterrupt).Head = (TNode *)pFVar6;
  pFVar3 = this->Device;
  uVar1 = this->QueueIndex;
  uVar2 = this->FamilyIndex;
  this->Timing = (FVulkanTiming *)0x0;
  (this->DiagnosticBuffer).Ptr = (FVulkanDiagnosticBuffer *)0x0;
  (*VulkanDynamicAPI::vkGetDeviceQueue)(pFVar3->Device,uVar2,uVar1,&this->Queue);
  FillSupportedStageBits(this);
  if (this->bUseTimelineSemaphores != false) {
    pFVar6 = ::operator_new(0x28);
    if (pFVar6 != (FVulkanSemaphore *)0x0) {
      pFVar7 = FVulkanSemaphore::FVulkanSemaphore
                         (pFVar6,param_1,ImmediateDeletion|Timeline,
                          this->CompletedTimelineSemaphoreValue);
    }
    this->TimelineSempahore = pFVar7;
    LOCK();
    *(int *)&pFVar7->_padding_ = (int)pFVar7->_padding_ + 1;
    UNLOCK();
  }
  return this;
}

// ~FVulkanQueue @ 145b4f170

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

void __thiscall FVulkanQueue::~FVulkanQueue(FVulkanQueue *this)

{
  longlong *plVar1;
  int iVar2;
  FVulkanSemaphore *pFVar3;
  FVulkanCommandBufferPool *this_00;
  TNode *pTVar4;
  TNode *pTVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  TStaticArray<TArray<FVulkanCommandBufferPool_*,TSizedDefaultAllocator<32>_>,3,4294967295> *pTVar9;
  TArray<FVulkanCommandBufferPool_*,TSizedDefaultAllocator<32>_> *pTVar10;
  undefined1 local_res8 [8];
  
  pFVar3 = this->TimelineSempahore;
  if (pFVar3 != (FVulkanSemaphore *)0x0) {
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar8 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  for (pTVar9 = &this->CommandBufferPools;
      pTVar9 != (TStaticArray<TArray<FVulkanCommandBufferPool_*,TSizedDefaultAllocator<32>_>,3,4294967295>
                 *)&this->bUseTimelineSemaphores;
      pTVar9 = (TStaticArray<TArray<FVulkanCommandBufferPool_*,TSizedDefaultAllocator<32>_>,3,4294967295>
                *)(pTVar9->Elements + 1)) {
    pFVar7 = pTVar9->Elements[0].AllocatorInstance.Data;
    iVar2 = pTVar9->Elements[0].ArrayNum;
    pFVar6 = pFVar7 + (longlong)iVar2 * 8;
    while( true ) {
      if (pTVar9->Elements[0].ArrayNum != iVar2) {
        `TCheckedPointerIterator<FVulkanCommandBufferPool_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar7 == pFVar6) break;
      this_00 = *(FVulkanCommandBufferPool **)pFVar7;
      if (this_00 != (FVulkanCommandBufferPool *)0x0) {
        FVulkanCommandBufferPool::~FVulkanCommandBufferPool(this_00);
        ::operator_delete(this_00,0x68);
      }
      pFVar7 = pFVar7 + 8;
    }
    pTVar9->Elements[0].ArrayNum = 0;
    if (pTVar9->Elements[0].ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)pTVar9,0,&pTVar9->Elements[0].ArrayMax);
    }
  }
  TDefaultDelete<FVulkanDiagnosticBuffer>::operator()
            ((TDefaultDelete<FVulkanDiagnosticBuffer> *)&this->DiagnosticBuffer,
             (this->DiagnosticBuffer).Ptr);
  pTVar4 = (this->PendingInterrupt).Tail;
  while (pTVar4 != (TNode *)0x0) {
    (this->PendingInterrupt).Tail = pTVar4->NextNode;
    ::operator_delete(pTVar4,0x10);
    pTVar4 = (this->PendingInterrupt).Tail;
  }
  pTVar5 = (this->PendingSubmission).Tail;
  while (pTVar5 != (TNode *)0x0) {
    (this->PendingSubmission).Tail = pTVar5->NextNode;
    ::operator_delete(pTVar5,0x10);
    pTVar5 = (this->PendingSubmission).Tail;
  }
  pTVar10 = (TArray<FVulkanCommandBufferPool_*,TSizedDefaultAllocator<32>_> *)
            &this->bUseTimelineSemaphores;
  lVar8 = 3;
  do {
    pFVar6 = pTVar10[-1].AllocatorInstance.Data;
    pTVar10 = pTVar10 + -1;
    lVar8 = lVar8 + -1;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
  } while (lVar8 != 0);
                    /* WARNING: Could not recover jumptable at 0x000145b4f31d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CommandBufferPoolCS);
  return;
}

// operator() @ 145b54030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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

bool __thiscall
`FVulkanQueue::SubmitQueuedPayloads'::__l2::<lambda_1>::operator()
          (void *this,FVulkanPayload *param_1)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  FBinarySemaphoreSignalInfo *pFVar10;
  atomic<void_*> aVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  atomic<void_*> aVar15;
  FScriptContainerElement *pFVar16;
  atomic<void_*> aVar17;
  atomic<void_*> aVar18;
  ulonglong *puVar19;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86 [2];
  undefined4 local_84;
  LARGE_INTEGER local_80;
  LARGE_INTEGER local_78;
  ulonglong uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  ulonglong local_60 [5];
  
  local_60[3] = __security_cookie.value ^ (ulonglong)auStack_a8;
  pFVar16 = (param_1->WaitSemaphores).AllocatorInstance.Data;
  iVar3 = (param_1->WaitSemaphores).ArrayNum;
  pFVar1 = pFVar16 + (longlong)iVar3 * 8;
  do {
    if ((param_1->WaitSemaphores).ArrayNum != iVar3) {
      local_88 = 0;
      `TCheckedPointerIterator<FVulkanSemaphore_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_88);
    }
    if (pFVar16 == pFVar1) {
      pFVar16 = (param_1->WaitSemaphores).AllocatorInstance.Data;
      iVar3 = (param_1->WaitSemaphores).ArrayNum;
      pFVar1 = pFVar16 + (longlong)iVar3 * 8;
      local_60[2] = 0;
      local_60[0] = 0;
      local_60[1] = 0;
      while( true ) {
        if ((param_1->WaitSemaphores).ArrayNum != iVar3) {
          local_87 = 0;
          `TCheckedPointerIterator<FVulkanSemaphore_*_const,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_87);
        }
        if (pFVar16 == pFVar1) break;
        if ((*(byte *)(*(longlong *)pFVar16 + 0x20) & 4) == 0) {
          pFVar10 = TMapBase<VkSemaphore_T_*,FBinarySemaphoreSignalInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<VkSemaphore_T_*,FBinarySemaphoreSignalInfo,0>_>
                    ::FindChecked(*(TMapBase<VkSemaphore_T_*,FBinarySemaphoreSignalInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<VkSemaphore_T_*,FBinarySemaphoreSignalInfo,0>_>
                                    **)this,*(VkSemaphore_T **)(*(longlong *)pFVar16 + 0x18));
          uVar13 = pFVar10->TimelineValue;
          if (pFVar10->TimelineValue < local_60[pFVar10->QueueType]) {
            uVar13 = local_60[pFVar10->QueueType];
          }
          local_60[pFVar10->QueueType] = uVar13;
        }
        pFVar16 = pFVar16 + 8;
      }
      QueryPerformanceCounter(&local_80);
      puVar19 = local_60;
      aVar18 = (atomic<void_*>)0x0;
      aVar17 = aVar18;
      do {
        if (*puVar19 != 0) {
          lVar5 = *(longlong *)
                   (*(longlong *)((longlong)this + 8) + 0x1b60 + ((ulonglong)aVar17 & 0xff) * 8);
          if ((lVar5 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("SignalQueue",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanQueue.cpp"
                                 ,0xcf,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          cVar2 = *(char *)(lVar5 + 0x10);
          local_84 = 0;
          if (cVar2 != '\0') {
            if (cVar2 == '\x01') {
              local_84 = 1;
            }
            else if (cVar2 == '\x02') {
              local_84 = 2;
            }
            else {
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("!\"Enclosing block should never be called\"",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanQueue.cpp"
                                 ,0x2a6,L"");
              if (bVar7) {
                pcVar6 = (code *)swi(3);
                uVar8 = (*pcVar6)();
                return (bool)uVar8;
              }
            }
          }
          aVar15 = (atomic<void_*>)(param_1->EventStream).Current;
          if (aVar15 == (atomic<void_*>)0x0) {
            uVar12 = FLockFreePointerListLIFORoot<64,1>::Pop
                               ((FLockFreePointerListLIFORoot<64,1> *)
                                &UE::RHI::GPUProfiler::FEventStream::FChunk::MemoryPool);
            aVar11 = aVar18;
            if (uVar12 != 0) {
              aVar11 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar12 >> 0xe][uVar12 & 0x3fff].
                       Payload;
              FLockFreeLinkPolicy::FreeLockFreeLink(uVar12);
            }
            if (aVar11 == (atomic<void_*>)0x0) {
              aVar11 = (atomic<void_*>)FMemory::Malloc(0x4000,8);
            }
            memset((void *)aVar11,0xf7,0x4000);
            aVar15 = aVar18;
            if (aVar11 != (atomic<void_*>)0x0) {
              *(undefined8 *)aVar11 = 0;
              *(undefined4 *)((longlong)aVar11 + 8) = 0;
              *(undefined8 *)((longlong)aVar11 + 0x30) = 0;
              *(undefined4 *)((longlong)aVar11 + 0x38) = 0;
              *(undefined4 *)((longlong)aVar11 + 0x3c) = 2;
              aVar15 = aVar11;
            }
            (param_1->EventStream).Current = (FChunk *)aVar15;
            if ((param_1->EventStream).First == (FChunk *)0x0) {
              (param_1->EventStream).First = (FChunk *)aVar15;
            }
          }
          if (0x197 < *(uint *)((longlong)aVar15 + 8)) {
            uVar12 = FLockFreePointerListLIFORoot<64,1>::Pop
                               ((FLockFreePointerListLIFORoot<64,1> *)
                                &UE::RHI::GPUProfiler::FEventStream::FChunk::MemoryPool);
            aVar11 = aVar18;
            if (uVar12 != 0) {
              aVar11 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar12 >> 0xe][uVar12 & 0x3fff].
                       Payload;
              FLockFreeLinkPolicy::FreeLockFreeLink(uVar12);
            }
            if (aVar11 == (atomic<void_*>)0x0) {
              aVar11 = (atomic<void_*>)FMemory::Malloc(0x4000,8);
            }
            memset((void *)aVar11,0xf7,0x4000);
            aVar15 = aVar18;
            if (aVar11 != (atomic<void_*>)0x0) {
              *(undefined8 *)aVar11 = 0;
              *(undefined4 *)((longlong)aVar11 + 8) = 0;
              *(undefined8 *)((longlong)aVar11 + 0x30) = 0;
              *(undefined4 *)((longlong)aVar11 + 0x38) = 0;
              *(undefined4 *)((longlong)aVar11 + 0x3c) = 2;
              aVar15 = aVar11;
            }
            (((param_1->EventStream).Current)->Header).Next = (FChunk *)aVar15;
            (param_1->EventStream).Current = (FChunk *)aVar15;
          }
          uVar13 = (ulonglong)*(uint *)((longlong)aVar15 + 8);
          local_78 = local_80;
          *(uint *)((longlong)aVar15 + 8) = *(uint *)((longlong)aVar15 + 8) + 1;
          uStack_70 = *puVar19;
          local_68 = local_84;
          *(LARGE_INTEGER *)((undefined8 *)((longlong)aVar15 + 0x40) + uVar13 * 5) = local_80;
          ((LARGE_INTEGER *)((undefined8 *)((longlong)aVar15 + 0x40) + uVar13 * 5))[1].QuadPart =
               uStack_70;
          ((undefined8 *)((longlong)aVar15 + 0x50))[uVar13 * 5] = CONCAT44(uStack_64,local_84);
          *(undefined1 *)((undefined8 *)((longlong)aVar15 + 0x60) + uVar13 * 5) = 8;
        }
        aVar17._0_4_ = aVar17._0_4_ + 1;
        aVar17._4_4_ = 0;
        puVar19 = puVar19 + 1;
        if (2 < (int)aVar17._0_4_) {
          pFVar16 = (param_1->WaitSemaphores).AllocatorInstance.Data;
          iVar3 = (param_1->WaitSemaphores).ArrayNum;
          pFVar1 = pFVar16 + (longlong)iVar3 * 8;
          while( true ) {
            if ((param_1->WaitSemaphores).ArrayNum != iVar3) {
              `TCheckedPointerIterator<FVulkanSemaphore_*_const,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_86);
            }
            if (pFVar16 == pFVar1) break;
            if ((*(byte *)(*(longlong *)pFVar16 + 0x20) & 4) == 0) {
              TSet<TTuple<VkSemaphore_T_*,FBinarySemaphoreSignalInfo>,TDefaultMapHashableKeyFuncs<VkSemaphore_T_*,FBinarySemaphoreSignalInfo,0>,FDefaultSetAllocator>
              ::Remove(*(TSet<TTuple<VkSemaphore_T_*,FBinarySemaphoreSignalInfo>,TDefaultMapHashableKeyFuncs<VkSemaphore_T_*,FBinarySemaphoreSignalInfo,0>,FDefaultSetAllocator>
                         **)this,*(VkSemaphore_T **)(*(longlong *)pFVar16 + 0x18));
            }
            pFVar16 = pFVar16 + 8;
          }
          return true;
        }
      } while( true );
    }
    if ((*(byte *)(*(longlong *)pFVar16 + 0x20) & 4) == 0) {
      plVar4 = *(longlong **)this;
      uVar13 = *(ulonglong *)(*(longlong *)pFVar16 + 0x18);
      uVar12 = ((uint)(uVar13 >> 0x14) & 0xffff ^ (uint)(uVar13 >> 4)) * -0x7a143595;
      uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
      if ((int)plVar4[1] == *(int *)((longlong)plVar4 + 0x34)) {
        return false;
      }
      plVar14 = plVar4 + 7;
      if ((longlong *)plVar4[8] != (longlong *)0x0) {
        plVar14 = (longlong *)plVar4[8];
      }
      iVar9 = *(int *)((longlong)plVar14 +
                      (ulonglong)((int)plVar4[9] - 1U & (uVar12 >> 0x10 ^ uVar12)) * 4);
      if (iVar9 == -1) {
        return false;
      }
      while (*(ulonglong *)((longlong)iVar9 * 0x20 + *plVar4) != uVar13) {
        iVar9 = *(int *)((longlong)iVar9 * 0x20 + 0x18 + *plVar4);
        if (iVar9 == -1) {
          return false;
        }
      }
    }
    pFVar16 = pFVar16 + 8;
  } while( true );
}

// AcquireCommandBufferPool @ 145b56110

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

FVulkanCommandBufferPool * __thiscall
FVulkanQueue::AcquireCommandBufferPool(FVulkanQueue *this,EVulkanCommandBufferType param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FVulkanCommandBufferPool *pFVar4;
  
  lpCriticalSection = &this->CommandBufferPoolCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = (this->CommandBufferPools).Elements[param_1].ArrayNum;
  if (iVar1 == 0) {
    pFVar4 = ::operator_new(0x68);
    if (pFVar4 == (FVulkanCommandBufferPool *)0x0) {
      pFVar4 = (FVulkanCommandBufferPool *)0x0;
    }
    else {
      pFVar4 = FVulkanCommandBufferPool::FVulkanCommandBufferPool(pFVar4,this->Device,this,param_1);
    }
  }
  else {
    if (iVar1 < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FVulkanCommandBufferPool *)(*pcVar2)();
        return pFVar4;
      }
    }
    iVar1 = (this->CommandBufferPools).Elements[param_1].ArrayNum;
    pFVar4 = *(FVulkanCommandBufferPool **)
              ((this->CommandBufferPools).Elements[param_1].AllocatorInstance.Data +
              (longlong)iVar1 * 8 + -8);
    (this->CommandBufferPools).Elements[param_1].ArrayNum = iVar1 + -1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return pFVar4;
}

// BindSparseResources @ 145b58160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall FVulkanQueue::BindSparseResources(FVulkanQueue *this,FVulkanPayload *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  FVulkanBuffer *this_00;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  VkResult VVar8;
  longlong lVar9;
  FVulkanTexture *this_01;
  TArray<VkSparseMemoryBind,TSizedDefaultAllocator<32>_> *pTVar10;
  ForElementType<VkSparseBufferMemoryBindInfo> FVar11;
  ForElementType<VkSparseImageOpaqueMemoryBindInfo> FVar12;
  ForElementType<TArray<VkSparseMemoryBind,TSizedDefaultAllocator<32>_>_> FVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  undefined1 auStackY_1c8 [32];
  undefined1 local_178;
  undefined1 local_177 [7];
  ForAnyElementType local_170;
  undefined8 local_168;
  undefined8 local_160;
  TArray<VkSparseMemoryBind,TSizedDefaultAllocator<32>_> local_158;
  TArray<VkSparseMemoryBind,TSizedDefaultAllocator<32>_> local_148;
  undefined8 local_138;
  int iStack_130;
  undefined4 uStack_12c;
  FScriptContainerElement *local_128;
  VkBindSparseInfo local_118;
  ForElementType<TArray<VkSparseMemoryBind,TSizedDefaultAllocator<32>_>_> local_b8;
  int local_a0;
  int local_9c;
  ForElementType<VkSparseImageOpaqueMemoryBindInfo> local_98;
  uint local_78;
  uint local_74;
  ForElementType<VkSparseBufferMemoryBindInfo> local_70;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pFVar15 = (param_1->ReservedResourcesToCommit).AllocatorInstance.Data;
  iVar3 = (param_1->ReservedResourcesToCommit).ArrayNum;
  local_b8.SecondaryData =
       (ForElementType<TArray<VkSparseMemoryBind,TSizedDefaultAllocator<32>_>_>)0x0;
  pFVar14 = pFVar15 + (longlong)iVar3 * 0x10;
  local_a0 = 0;
  local_9c = 1;
  local_70.SecondaryData = (ForElementType<VkSparseBufferMemoryBindInfo>)0x0;
  local_50 = 0;
  local_4c = 1;
  local_98.SecondaryData = (ForElementType<VkSparseImageOpaqueMemoryBindInfo>)0x0;
  local_78 = 0;
  local_74 = 1;
  do {
    while( true ) {
      if ((param_1->ReservedResourcesToCommit).ArrayNum != iVar3) {
        local_178 = 0;
        `TCheckedPointerIterator<FVulkanCommitReservedResourceDesc,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_178);
      }
      if (pFVar15 == pFVar14) {
        if (local_a0 != 0) {
          uVar4 = (param_1->WaitSemaphores).ArrayNum;
          local_170.Data = (FScriptContainerElement *)0x0;
          local_168 = 0;
          if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
          }
          if (0 < (int)uVar4) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,uVar4,&local_170,0,(int *)((longlong)&local_168 + 4));
          }
          pFVar14 = (param_1->WaitSemaphores).AllocatorInstance.Data;
          iVar3 = (param_1->WaitSemaphores).ArrayNum;
          pFVar15 = pFVar14 + (longlong)iVar3 * 8;
          while( true ) {
            if ((param_1->WaitSemaphores).ArrayNum != iVar3) {
              local_177[0] = 0;
              `TCheckedPointerIterator<FVulkanSemaphore_*,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_177);
            }
            if (pFVar14 == pFVar15) break;
            local_160 = *(undefined8 *)(*(longlong *)pFVar14 + 0x18);
            if (local_170.Data <= (FScriptContainerElement *)&local_160) {
              if ((FScriptContainerElement *)&local_160 <
                  local_170.Data + (longlong)local_168._4_4_ * 8) {
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  );
                if (bVar6) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
              }
            }
            if ((int)local_168 == local_168._4_4_) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&local_170,(int *)((longlong)&local_168 + 4));
              local_168 = CONCAT44(local_168._4_4_,iVar7);
            }
            lVar9 = (longlong)(int)local_168;
            pFVar14 = pFVar14 + 8;
            local_168 = CONCAT44(local_168._4_4_,(int)local_168 + 1);
            *(undefined8 *)(local_170.Data + lVar9 * 8) = local_160;
          }
          (param_1->WaitSemaphores).ArrayNum = 0;
          if ((param_1->WaitSemaphores).ArrayMax < 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,0,&(param_1->WaitSemaphores).AllocatorInstance,0,
                       &(param_1->WaitSemaphores).ArrayMax);
          }
          local_118.sType = VK_STRUCTURE_TYPE_BIND_SPARSE_INFO;
          local_118._84_8_ = 0;
          local_118.pSignalSemaphores._4_4_ = 0;
          local_118._20_4_ = 0;
          local_118._36_4_ = 0;
          local_118._4_8_ = 0;
          local_118._12_8_ = local_168 << 0x20;
          local_118.pWaitSemaphores._0_4_ = SUB84(local_170.Data,0);
          local_118.pWaitSemaphores._4_4_ = (undefined4)((ulonglong)local_170.Data >> 0x20);
          local_118.bufferBindCount = local_50;
          local_118._52_4_ = 0;
          local_118.imageBindCount = 0;
          FVar11 = (ForElementType<VkSparseBufferMemoryBindInfo>)&local_70;
          if (local_70.SecondaryData != (ForElementType<VkSparseBufferMemoryBindInfo>)0x0) {
            FVar11 = local_70.SecondaryData;
          }
          local_118.pBufferBinds._0_4_ = FVar11._0_4_;
          local_118.pBufferBinds._4_4_ = FVar11._4_4_;
          local_118.imageOpaqueBindCount = local_78;
          local_118._68_8_ = 0;
          local_118._76_8_ = 0;
          FVar12 = (ForElementType<VkSparseImageOpaqueMemoryBindInfo>)&local_98;
          if (local_98.SecondaryData != (ForElementType<VkSparseImageOpaqueMemoryBindInfo>)0x0) {
            FVar12 = local_98.SecondaryData;
          }
          local_118.pImageOpaqueBinds._0_4_ = FVar12._0_4_;
          local_118.pImageOpaqueBinds._4_4_ = FVar12._4_4_;
          VVar8 = (*VulkanDynamicAPI::vkQueueBindSparse)(this->Queue,1,&local_118,(VkFence_T *)0x0);
          if (VVar8 != VK_SUCCESS) {
            VulkanRHI::VerifyVulkanResult
                      (VVar8,
                       "VulkanRHI::vkQueueBindSparse(Queue, 1, &BindSparseInfo, VK_NULL_HANDLE)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanQueue.cpp"
                       ,0xa1);
          }
          if (GWaitForIdleOnSubmit != 0) {
            VVar8 = (*VulkanDynamicAPI::vkDeviceWaitIdle)(this->Device->Device);
            if (VVar8 != VK_SUCCESS) {
              VulkanRHI::VerifyVulkanResult
                        (VVar8,"VulkanRHI::vkDeviceWaitIdle(Device.GetHandle())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanQueue.cpp"
                         ,0xa5);
            }
          }
          if (local_170.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_170.Data);
          }
        }
        if (local_98.SecondaryData != (ForElementType<VkSparseImageOpaqueMemoryBindInfo>)0x0) {
          FMemory::Free((void *)local_98.SecondaryData);
        }
        if (local_70.SecondaryData != (ForElementType<VkSparseBufferMemoryBindInfo>)0x0) {
          FMemory::Free((void *)local_70.SecondaryData);
        }
        FVar13 = (ForElementType<TArray<VkSparseMemoryBind,TSizedDefaultAllocator<32>_>_>)&local_b8;
        if (local_b8.SecondaryData !=
            (ForElementType<TArray<VkSparseMemoryBind,TSizedDefaultAllocator<32>_>_>)0x0) {
          FVar13 = local_b8.SecondaryData;
        }
        DestructItems<TArray<VkSparseMemoryBind,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<VkSparseMemoryBind,TSizedDefaultAllocator<32>_> *)FVar13,local_a0);
        if (local_b8.SecondaryData !=
            (ForElementType<TArray<VkSparseMemoryBind,TSizedDefaultAllocator<32>_>_>)0x0) {
          FMemory::Free((void *)local_b8.SecondaryData);
        }
        return;
      }
      this_00 = *(FVulkanBuffer **)pFVar15;
      cVar2 = *(char *)((longlong)&this_00->_padding_ + 4);
      if (cVar2 != '\x13') break;
      FVulkanBuffer::CommitReservedResource(this_00,&local_158,*(ulong64 *)(pFVar15 + 8));
      if (local_158.ArrayNum != 0) {
        local_138 = (VkImage_T *)(this_00->CurrentBufferAlloc).Alloc.VulkanHandle;
        local_128 = local_158.AllocatorInstance.Data;
        iStack_130 = local_158.ArrayNum;
        if (local_50 == local_4c) {
          local_50 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<VkSparseBufferMemoryBindInfo>_>
                               (0x818,&local_70,(int *)&local_4c);
        }
        lVar9 = (longlong)(int)local_50;
        FVar11 = (ForElementType<VkSparseBufferMemoryBindInfo>)&local_70;
        if (local_70.SecondaryData != (ForElementType<VkSparseBufferMemoryBindInfo>)0x0) {
          FVar11 = local_70.SecondaryData;
        }
        puVar1 = (undefined4 *)((longlong)FVar11 + lVar9 * 0x18);
        local_50 = local_50 + 1;
        *puVar1 = (undefined4)local_138;
        puVar1[1] = local_138._4_4_;
        puVar1[2] = iStack_130;
        puVar1[3] = uStack_12c;
        *(FScriptContainerElement **)((uchar *)((longlong)FVar11 + 0x10) + lVar9 * 0x18) = local_128
        ;
        if (local_a0 == local_9c) {
          local_a0 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TArray<VkSparseMemoryBind,TSizedDefaultAllocator<32>_>_>_>
                               (0x810,&local_b8,&local_9c);
        }
        FVar13 = (ForElementType<TArray<VkSparseMemoryBind,TSizedDefaultAllocator<32>_>_>)&local_b8;
        if (local_b8.SecondaryData !=
            (ForElementType<TArray<VkSparseMemoryBind,TSizedDefaultAllocator<32>_>_>)0x0) {
          FVar13 = local_b8.SecondaryData;
        }
        pTVar10 = (TArray<VkSparseMemoryBind,TSizedDefaultAllocator<32>_> *)
                  ((longlong)local_a0 * 0x10 + (longlong)FVar13);
        local_a0 = local_a0 + 1;
        (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        (pTVar10->AllocatorInstance).Data = local_158.AllocatorInstance.Data;
        local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        pTVar10->ArrayNum = local_158.ArrayNum;
        pTVar10->ArrayMax = local_158.ArrayMax;
        local_158.ArrayNum = 0;
        local_158.ArrayMax = 0;
      }
      if (local_158.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
LAB_145b58426:
        pFVar15 = pFVar15 + 0x10;
      }
      else {
        FMemory::Free(local_158.AllocatorInstance.Data);
        pFVar15 = pFVar15 + 0x10;
      }
    }
    if (cVar2 != '\x14') {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanQueue.cpp"
                         ,0x8b,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      goto LAB_145b58426;
    }
    this_01 = (FVulkanTexture *)(**(code **)(this_00->_padding_ + 0x48))(this_00);
    FVulkanTexture::CommitReservedResource(this_01,&local_148,*(ulong64 *)(pFVar15 + 8));
    if (local_148.ArrayNum != 0) {
      local_138 = this_01->Image;
      local_128 = local_148.AllocatorInstance.Data;
      iStack_130 = local_148.ArrayNum;
      if (local_78 == local_74) {
        local_78 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<VkSparseImageOpaqueMemoryBindInfo>_>
                             (0x818,&local_98,(int *)&local_74);
      }
      lVar9 = (longlong)(int)local_78;
      FVar12 = (ForElementType<VkSparseImageOpaqueMemoryBindInfo>)&local_98;
      if (local_98.SecondaryData != (ForElementType<VkSparseImageOpaqueMemoryBindInfo>)0x0) {
        FVar12 = local_98.SecondaryData;
      }
      puVar1 = (undefined4 *)((longlong)FVar12 + lVar9 * 0x18);
      local_78 = local_78 + 1;
      *puVar1 = (undefined4)local_138;
      puVar1[1] = local_138._4_4_;
      puVar1[2] = iStack_130;
      puVar1[3] = uStack_12c;
      *(FScriptContainerElement **)((uchar *)((longlong)FVar12 + 0x10) + lVar9 * 0x18) = local_128;
      if (local_a0 == local_9c) {
        local_a0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TArray<VkSparseMemoryBind,TSizedDefaultAllocator<32>_>_>_>
                             (0x810,&local_b8,&local_9c);
      }
      FVar13 = (ForElementType<TArray<VkSparseMemoryBind,TSizedDefaultAllocator<32>_>_>)&local_b8;
      if (local_b8.SecondaryData !=
          (ForElementType<TArray<VkSparseMemoryBind,TSizedDefaultAllocator<32>_>_>)0x0) {
        FVar13 = local_b8.SecondaryData;
      }
      pTVar10 = (TArray<VkSparseMemoryBind,TSizedDefaultAllocator<32>_> *)
                ((longlong)local_a0 * 0x10 + (longlong)FVar13);
      local_a0 = local_a0 + 1;
      (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pTVar10->AllocatorInstance).Data = local_148.AllocatorInstance.Data;
      local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pTVar10->ArrayNum = local_148.ArrayNum;
      pTVar10->ArrayMax = local_148.ArrayMax;
      local_148.ArrayNum = 0;
      local_148.ArrayMax = 0;
    }
    if (local_148.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_145b58426;
    FMemory::Free(local_148.AllocatorInstance.Data);
    pFVar15 = pFVar15 + 0x10;
  } while( true );
}

// FillSupportedStageBits @ 145b67320

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

void __thiscall FVulkanQueue::FillSupportedStageBits(FVulkanQueue *this)

{
  FScriptContainerElement *pFVar1;
  FVulkanDevice *pFVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  
  if ((this->Device->QueueFamilyProps).ArrayNum <= (int)this->FamilyIndex) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(int32)FamilyIndex < Device.GetQueueFamilyProps().Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanQueue.cpp"
                       ,0x23b,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar7 = this->FamilyIndex;
  pFVar2 = this->Device;
  uVar8 = 0;
  if ((int)uVar7 < (pFVar2->QueueFamilyProps).ArrayNum) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = (pFVar2->QueueFamilyProps).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x18;
  uVar8 = 0x1e000;
  uVar7 = 0x16001;
  this->SupportedAccess = 0x1e000;
  this->SupportedStages = 0x16001;
  if (((byte)*pFVar1 & 1) != 0) {
    pFVar2 = this->Device;
    uVar7 = 0x1f78f;
    uVar8 = 0x1ffff;
    this->SupportedStages = 0x1f78f;
    this->SupportedAccess = 0x1ffff;
    if ((pFVar2->PhysicalDeviceFeatures).Core_1_0.geometryShader != 0) {
      uVar7 = 0x1f7cf;
      this->SupportedStages = 0x1f7cf;
    }
    if ((*(byte *)&(pFVar2->OptionalDeviceExtensions).field0_0x0 & 0x40) != 0) {
      uVar7 = uVar7 | 0x400000;
      uVar8 = 0x81ffff;
      this->SupportedStages = uVar7;
      this->SupportedAccess = 0x81ffff;
    }
    if ((*(byte *)&(pFVar2->OptionalDeviceExtensions).field0_0x0 & 0x10) != 0) {
      uVar7 = uVar7 | 0x800000;
      uVar8 = uVar8 | 0x1000000;
      this->SupportedStages = uVar7;
      this->SupportedAccess = uVar8;
    }
    if ((*(uint *)&(pFVar2->OptionalDeviceExtensions).field0_0x0 >> 0x12 & 1) != 0) {
      uVar7 = uVar7 | 0x180000;
      this->SupportedStages = uVar7;
    }
  }
  if (((byte)*pFVar1 & 2) != 0) {
    this->SupportedStages = uVar7 | 0x1802;
    this->SupportedAccess = uVar8 | 0x1869;
    uVar4 = uVar7 | 0x1802;
    uVar5 = uVar8 | 0x1869;
    if ((*(uint *)&(this->Device->OptionalDeviceExtensions).field0_0x0 >> 10 & 1) != 0) {
      this->SupportedStages = uVar7 | 0x2001802;
      this->SupportedAccess = uVar8 | 0x601869;
      uVar4 = uVar7 | 0x2001802;
      uVar5 = uVar8 | 0x601869;
    }
    uVar8 = uVar5;
    uVar7 = uVar4;
    if ((*(uint *)&(this->Device->OptionalDeviceExtensions).field0_0x0 >> 0xb & 1) != 0) {
      uVar7 = uVar7 | 0x200000;
      this->SupportedStages = uVar7;
    }
  }
  if (((byte)*pFVar1 & 4) != 0) {
    this->SupportedStages = uVar7 | 0x1000;
    this->SupportedAccess = uVar8 | 0x1800;
  }
  return;
}

// GetProfilerQueue @ 145b6aac0

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

FQueue __thiscall FVulkanQueue::GetProfilerQueue(FVulkanQueue *this)

{
  EVulkanQueueType EVar1;
  code *pcVar2;
  bool bVar3;
  FQueue FVar4;
  FQueue_u_0 FVar5;
  undefined4 *in_RDX;
  
  *in_RDX = 0;
  EVar1 = this->QueueType;
  FVar4.field0_0x0 = SUB84(in_RDX,0);
  if (EVar1 != Graphics) {
    if (EVar1 == AsyncCompute) {
      *(undefined1 *)in_RDX = 1;
      return (FQueue)FVar4.field0_0x0;
    }
    if (EVar1 == Transfer) {
      *(undefined1 *)in_RDX = 2;
      return (FQueue)FVar4.field0_0x0;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanQueue.cpp"
                       ,0x2a6,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar5.Value = (*pcVar2)();
      return (FQueue_u_0)(FQueue_u_0)FVar5._s_0;
    }
  }
  *(undefined1 *)in_RDX = 0;
  return (FQueue)FVar4.field0_0x0;
}

// InitDiagnosticBuffer @ 145b6bbb0

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

void __thiscall FVulkanQueue::InitDiagnosticBuffer(FVulkanQueue *this)

{
  TUniquePtr<FVulkanDiagnosticBuffer,TDefaultDelete<FVulkanDiagnosticBuffer>_> *this_00;
  FVulkanDevice *pFVar1;
  FVulkanDiagnosticBuffer *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FVulkanDiagnosticBuffer *pFVar7;
  TDefaultDelete<FVulkanDiagnosticBuffer> local_18 [16];
  
  this_00 = &this->DiagnosticBuffer;
  if (this_00->Ptr != (FVulkanDiagnosticBuffer *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!DiagnosticBuffer.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanQueue.cpp"
                       ,0x2c5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (**(code **)(*(longlong *)CVarVulkanDiagnosticBuffer._padding_ + 200))();
  if (iVar6 != 0) {
    pFVar1 = this->Device;
    pFVar7 = ::operator_new(0x58);
    if (pFVar7 == (FVulkanDiagnosticBuffer *)0x0) {
      pFVar7 = (FVulkanDiagnosticBuffer *)0x0;
    }
    else {
      pFVar7 = FVulkanDiagnosticBuffer::FVulkanDiagnosticBuffer(pFVar7,pFVar1,this);
    }
    if ((TDefaultDelete<FVulkanDiagnosticBuffer> *)this_00 != local_18) {
      pFVar2 = this_00->Ptr;
      this_00->Ptr = pFVar7;
      TDefaultDelete<FVulkanDiagnosticBuffer>::operator()
                ((TDefaultDelete<FVulkanDiagnosticBuffer> *)this_00,pFVar2);
      return;
    }
    if (pFVar7 != (FVulkanDiagnosticBuffer *)0x0) {
      if (pFVar7->Buffer != (VkBuffer_T *)0x0) {
        (*VulkanDynamicAPI::vkDestroyBuffer)
                  (pFVar7->Device->Device,pFVar7->Buffer,&VulkanRHI::GAllocationCallbacks);
        pFVar7->Buffer = (VkBuffer_T *)0x0;
      }
      bVar5 = VulkanRHI::FVulkanAllocation::IsValid(&pFVar7->Allocation);
      if (bVar5) {
        VulkanRHI::FMemoryManager::FreeVulkanAllocation
                  (&pFVar7->Device->MemoryManager,&pFVar7->Allocation,EVulkanFreeFlag_DontDefer);
      }
      DestructItems<FRHIBreadcrumbAllocatorArray,int>
                ((FRHIBreadcrumbAllocatorArray *)
                 (pFVar7->ExtendedBreadcrumbAllocators).AllocatorInstance.Data,
                 (pFVar7->ExtendedBreadcrumbAllocators).ArrayNum);
      pFVar3 = (pFVar7->ExtendedBreadcrumbAllocators).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      VulkanRHI::FVulkanAllocation::~FVulkanAllocation(&pFVar7->Allocation);
      ::operator_delete(pFVar7,0x58);
    }
  }
  return;
}

// ProcessInterruptQueue @ 145b6fa50

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

int __thiscall FVulkanQueue::ProcessInterruptQueue(FVulkanQueue *this,ulong64 param_1)

{
  FVulkanPayload *this_00;
  FVulkanFence *pFVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  code *pcVar4;
  bool bVar5;
  ulong64 uVar6;
  FVulkanDynamicRHI *this_01;
  int iVar7;
  bool bVar8;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Orange,"ProcessInterruptQueue");
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId508,"ProcessInterruptQueue",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanQueue.cpp"
               ,0x1fc);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId508);
  }
  if (this->bUseTimelineSemaphores != false) {
    uVar6 = FVulkanSemaphore::GetTimelineSemaphoreValue(this->TimelineSempahore);
    this->CompletedTimelineSemaphoreValue = uVar6;
  }
  iVar7 = 0;
  while (((this->PendingInterrupt).Tail)->NextNode != (TNode *)0x0) {
    this_00 = ((this->PendingInterrupt).Tail)->NextNode->Item;
    if (this->CompletedTimelineSemaphoreValue < this_00->TimelineSemaphoreValue) {
      if (this->bUseTimelineSemaphores == false) {
        pFVar1 = this_00->Fence;
        if (param_1 == 0) {
          if (pFVar1->State == Signaled) {
            bVar5 = true;
          }
          else {
            bVar5 = FVulkanFenceManager::CheckFenceState(&this->Device->FenceManager,pFVar1);
          }
        }
        else {
          bVar5 = FVulkanFenceManager::WaitForFence(&this->Device->FenceManager,pFVar1,param_1);
        }
        if (bVar5 == false) break;
        if ((this_00->TimelineSemaphoreValue <= this->CompletedTimelineSemaphoreValue) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("CompletedTimelineSemaphoreValue < Payload->TimelineSemaphoreValue",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanQueue.cpp"
                               ,0x223,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return iVar7;
        }
        this->CompletedTimelineSemaphoreValue = this_00->TimelineSemaphoreValue;
      }
      else {
        if (param_1 == 0) break;
        bVar5 = FVulkanSemaphore::WaitForTimelineSemaphoreValue
                          (this->TimelineSempahore,this_00->TimelineSemaphoreValue,param_1);
        uVar6 = FVulkanSemaphore::GetTimelineSemaphoreValue(this->TimelineSempahore);
        this->CompletedTimelineSemaphoreValue = uVar6;
        if (!bVar5) break;
      }
    }
    iVar7 = iVar7 + 1;
    this_01 = (FVulkanDynamicRHI *)(**(code **)(GDynamicRHI->_padding_ + 0x30))();
    FVulkanDynamicRHI::CompletePayload(this_01,this_00);
    pTVar2 = ((this->PendingInterrupt).Tail)->NextNode;
    if (pTVar2 != (TNode *)0x0) {
      pTVar3 = (this->PendingInterrupt).Tail;
      (this->PendingInterrupt).Tail = pTVar2;
      pTVar2->Item = (FVulkanPayload *)0x0;
      ::operator_delete(pTVar3,0x10);
    }
    FVulkanPayload::~FVulkanPayload(this_00);
    ::operator_delete(this_00,400);
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return iVar7;
}

// ReleaseCommandBufferPool @ 145b786d0

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

void __thiscall
FVulkanQueue::ReleaseCommandBufferPool(FVulkanQueue *this,FVulkanCommandBufferPool *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  EVulkanCommandBufferType EVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FVulkanCommandBufferPool *local_res10 [3];
  
  lpCriticalSection = &this->CommandBufferPoolCS;
  local_res10[0] = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (local_res10[0]->Queue != this) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("&CommandBufferPool->GetQueue() == this",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanQueue.cpp"
                       ,0x2be,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  EVar2 = local_res10[0]->CommandBufferType;
  pFVar3 = (this->CommandBufferPools).Elements[EVar2].AllocatorInstance.Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar3 + (longlong)(this->CommandBufferPools).Elements[EVar2].ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->CommandBufferPools).Elements[EVar2].ArrayNum;
  piVar1 = &(this->CommandBufferPools).Elements[EVar2].ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->CommandBufferPools).Elements[EVar2].AllocatorInstance,piVar1);
  }
  (this->CommandBufferPools).Elements[EVar2].ArrayNum = iVar6 + 1;
  *(FVulkanCommandBufferPool **)
   ((this->CommandBufferPools).Elements[EVar2].AllocatorInstance.Data + (longlong)iVar6 * 8) =
       local_res10[0];
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// Submit @ 145b7d980

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
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVulkanQueue::Submit(FVulkanQueue *this,TArrayView<VkSubmitInfo,int> *param_1,FVulkanFence *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  VkResult VVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_VulkanQueueSubmit> FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  VkFence_T *pVVar13;
  bool bVar14;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FStatMessage local_48;
  
  pVVar13 = (VkFence_T *)0x0;
  FVar9 = StatPtr_STAT_VulkanQueueSubmit;
  if (StatPtr_STAT_VulkanQueueSubmit == (FThreadSafeStaticStat<FStat_STAT_VulkanQueueSubmit>)0x0) {
    pFVar8 = ::FName::FName(&local_res20,"STAT_VulkanQueueSubmit");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_VulkanQueueSubmit>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanQueueSubmit,*pFVar8,
                       L"Queue Submit","STATGROUP_VulkanRHI","STATCAT_Advanced",L"Vulkan RHI",true,
                       true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar9;
  bVar3 = false;
  bVar5 = false;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar11.Value;
        local_res10.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanQueue.cpp"
                   ,0x1e7);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar11.Value;
      local_res18.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar4 = true;
      goto LAB_145b7dad8;
    }
  }
  bVar4 = false;
  FVar12.ComparisonIndex.Value = 0;
  FVar12.Number = 0;
LAB_145b7dad8:
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Purple,"VulkanQueueSubmit");
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId488,"VulkanQueueSubmit",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanQueue.cpp"
               ,0x1e8);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId488);
  }
  if (param_2 != (FVulkanFence *)0x0) {
    pVVar13 = param_2->Handle;
  }
  VVar7 = (*VulkanDynamicAPI::vkQueueSubmit)(this->Queue,param_1->ArrayNum,param_1->DataPtr,pVVar13)
  ;
  if (VVar7 != VK_SUCCESS) {
    VulkanRHI::VerifyVulkanResult
              (VVar7,
               "VulkanRHI::vkQueueSubmit(Queue, InSubmitInfos.Num(), InSubmitInfos.GetData(), FenceHandle)"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanQueue.cpp"
               ,0x1eb);
  }
  if (GWaitForIdleOnSubmit != 0) {
    VVar7 = (*VulkanDynamicAPI::vkDeviceWaitIdle)(this->Device->Device);
    if (VVar7 != VK_SUCCESS) {
      VulkanRHI::VerifyVulkanResult
                (VVar7,"VulkanRHI::vkDeviceWaitIdle(Device.GetHandle())",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanQueue.cpp"
                 ,0x1ef);
    }
    if (param_2 != (FVulkanFence *)0x0) {
      bVar6 = FVulkanFenceManager::WaitForFence(&this->Device->FenceManager,param_2,500000000);
      if ((!bVar6) &&
         (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<9218751128785650164>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanQueue.cpp"
                             ,500,"bSuccess"), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((param_2->State != Signaled) &&
          (bVar6 = FVulkanFenceManager::CheckFenceState(&this->Device->FenceManager,param_2), !bVar6
          )) && (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<9218751128785650165>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanQueue.cpp"
                                    ,0x1f5,"Device.GetFenceManager().IsFenceSignaled(Fence)"), bVar6
                )) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar4) && (FVar12 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Index = FVar12.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// SubmitPayloads @ 145b7dd50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

void __thiscall
FVulkanQueue::SubmitPayloads
          (FVulkanQueue *this,TArrayView<FVulkanPayload_*,int> *param_1,
          TMap<VkSemaphore_T_*,FBinarySemaphoreSignalInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<VkSemaphore_T_*,FBinarySemaphoreSignalInfo,0>_>
          *param_2)

{
  int *piVar1;
  FEventStream *pFVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  TTypeCompatibleBytes<UE::RHI::GPUProfiler::FEvent> *pTVar5;
  longlong lVar6;
  FVulkanTiming *pFVar7;
  FVulkanCommandBuffer *this_00;
  ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*> FVar8;
  ulong64 *puVar9;
  FChunk *pFVar10;
  ulong64 uVar11;
  FTaskBase *this_01;
  TNode *pTVar12;
  code *pcVar13;
  undefined8 uVar14;
  long64 lVar15;
  FRHIBreadcrumbNode *pFVar16;
  FVulkanPayload *pFVar17;
  FVulkanQueue *pFVar18;
  TSet<TTuple<VkSemaphore_T_*,FBinarySemaphoreSignalInfo>,TDefaultMapHashableKeyFuncs<VkSemaphore_T_*,FBinarySemaphoreSignalInfo,0>,FDefaultSetAllocator>
  *this_02;
  bool bVar19;
  int iVar20;
  undefined4 uVar21;
  atomic<void_*> aVar22;
  atomic<void_*> aVar23;
  longlong lVar24;
  atomic<void_*> _Dst;
  FVulkanFence *pFVar25;
  TNode *pTVar26;
  FVulkanPayload **ppFVar27;
  ulonglong uVar28;
  uint uVar29;
  FVulkanPayload **ppFVar30;
  longlong *plVar31;
  ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*> FVar32;
  undefined8 *puVar33;
  FScriptContainerElement *pFVar34;
  FScriptContainerElement *pFVar35;
  uint uVar36;
  uint uVar37;
  ForAnyElementType *pFVar38;
  ulonglong uVar39;
  FBinarySemaphoreSignalInfo *pFVar40;
  FScriptContainerElement *pFVar41;
  int iVar42;
  FVulkanPayload *pFVar43;
  undefined1 auStackY_218 [32];
  ForAnyElementType local_1c8;
  undefined8 local_1c0;
  undefined1 local_1b8;
  undefined1 local_1b7;
  undefined1 local_1b6;
  undefined1 local_1b5;
  undefined1 local_1b4;
  undefined1 local_1b3;
  undefined1 local_1b2 [2];
  ForAnyElementType local_1b0;
  undefined8 local_1a8;
  ForAnyElementType local_1a0;
  undefined8 local_198;
  ForAnyElementType local_190;
  undefined8 local_188;
  undefined1 local_180 [4];
  uint local_17c;
  FVulkanPayload *local_178;
  ForAnyElementType local_170;
  undefined8 local_168;
  FVulkanPayload **local_160;
  undefined8 local_158;
  VkCommandBuffer_T *local_150;
  undefined8 local_148;
  VkSemaphore_T *local_140;
  FVulkanQueue *local_138;
  uint local_130;
  uint local_12c;
  FScriptContainerElement *local_128;
  FBinarySemaphoreSignalInfo *local_120;
  TArrayView<FVulkanPayload_*,int> *local_118;
  FScriptContainerElement *local_110;
  FScriptContainerElement *local_108;
  undefined8 local_100;
  FVulkanPayload **local_f8;
  TPairInitializer<VkSemaphore_T_*_&&,FBinarySemaphoreSignalInfo_&&> local_f0;
  FScriptContainerElement *local_e0;
  FScriptContainerElement *local_d8;
  TSet<TTuple<VkSemaphore_T_*,FBinarySemaphoreSignalInfo>,TDefaultMapHashableKeyFuncs<VkSemaphore_T_*,FBinarySemaphoreSignalInfo,0>,FDefaultSetAllocator>
  *local_d0;
  FScriptContainerElement *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined8 *local_b8;
  ulong64 *local_b0;
  VkSubmitInfo *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  VkSubmitInfo *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  TArrayView<VkSubmitInfo,int> local_88;
  TArrayView<VkSubmitInfo,int> local_78;
  TArrayView<VkSubmitInfo,int> local_68;
  ulong64 local_58;
  EVulkanQueueType local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_218;
  uVar36 = param_1->ArrayNum;
  uVar29 = 0;
  ppFVar27 = param_1->DataPtr;
  local_188._0_4_ = 0;
  local_1c8.Data = (FScriptContainerElement *)0x0;
  local_188._4_4_ = 0;
  ppFVar30 = ppFVar27 + (int)uVar36;
  local_1c0 = 0;
  local_1a0.Data = (FScriptContainerElement *)0x0;
  local_198 = 0;
  local_1b0.Data = (FScriptContainerElement *)0x0;
  local_1a8 = 0;
  local_170.Data = (FScriptContainerElement *)0x0;
  local_168 = 0;
  local_190.Data = (FScriptContainerElement *)0x0;
  local_188 = 0;
  iVar42 = (uint)local_188;
  uVar37 = local_188._4_4_;
  for (; ppFVar27 != ppFVar30; ppFVar27 = ppFVar27 + 1) {
    pFVar43 = *ppFVar27;
    iVar42 = iVar42 + (pFVar43->WaitSemaphores).ArrayNum;
    uVar29 = uVar29 + (pFVar43->SignalSemaphores).ArrayNum;
    uVar37 = uVar37 + (pFVar43->CommandBuffers).ArrayNum;
  }
  local_138 = this;
  local_118 = param_1;
  local_d0 = (TSet<TTuple<VkSemaphore_T_*,FBinarySemaphoreSignalInfo>,TDefaultMapHashableKeyFuncs<VkSemaphore_T_*,FBinarySemaphoreSignalInfo,0>,FDefaultSetAllocator>
              *)param_2;
  if (this->bUseTimelineSemaphores != false) {
    uVar29 = uVar29 + uVar36;
    if ((int)uVar36 < 0) goto LAB_145b7f3c3;
    if (0 < (int)uVar36) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,uVar36,&local_170,0,(int *)((longlong)&local_168 + 4));
    }
    if ((int)uVar29 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar29);
    }
    if ((int)local_188._4_4_ < (int)uVar29) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar29,&local_190,(uint)local_188,(int *)((longlong)&local_188 + 4));
    }
  }
  uVar29 = uVar29 + iVar42;
  if ((int)uVar29 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar29);
  }
  if ((int)local_1c0._4_4_ < (int)uVar29) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar29,&local_1c8,(uint)local_1c0,(int *)((longlong)&local_1c0 + 4));
  }
  if ((int)uVar37 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar37);
  }
  if ((int)local_198._4_4_ < (int)uVar37) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar37,&local_1a0,(uint)local_198,(int *)((longlong)&local_198 + 4));
  }
  if (-1 < (int)uVar36) {
    if ((int)local_1a8._4_4_ < (int)uVar36) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,uVar36,&local_1b0,(int)local_1a8,(int *)((longlong)&local_1a8 + 4));
    }
    bVar19 = FVulkanDevice::UseMinimalSubmits(this->Device);
    if ((bVar19) && (uVar36 = uVar36 - 1, 0 < (int)uVar36)) {
      ppFVar30 = (FVulkanPayload **)((longlong)(int)uVar36 * 8);
      uVar37 = uVar36;
      do {
        uVar36 = uVar36 - 1;
        uVar29 = 0;
        if ((int)uVar36 < param_1->ArrayNum) {
          uVar29 = -uVar37 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar19)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        local_160 = (FVulkanPayload **)((longlong)ppFVar30 + -8);
        lVar24 = *(longlong *)((longlong)local_160 + (longlong)param_1->DataPtr);
        uVar29 = 0;
        if ((int)uVar37 < param_1->ArrayNum) {
          uVar29 = ~uVar37 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar19)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        lVar6 = *(longlong *)((longlong)ppFVar30 + (longlong)param_1->DataPtr);
        if ((((*(int *)(lVar6 + 0x20) == 0) && (*(longlong *)(lVar6 + 0xd0) == 0)) &&
            (*(int *)(lVar24 + 0x40) == 0)) &&
           ((*(int *)(lVar24 + 0x188) == 0 && (*(char *)(lVar24 + 0x128) == '\0')))) {
          plVar31 = *(longlong **)(lVar24 + 0x68);
          iVar42 = *(int *)(lVar24 + 0x70);
          plVar3 = plVar31 + iVar42;
          while( true ) {
            if (*(int *)(lVar24 + 0x70) != iVar42) {
              local_1b8 = 0;
              `TCheckedPointerIterator<TRefCountPtr<FVulkanSyncPoint>,int,0>::operator!='::__l2::
              <lambda_1>::operator()(&local_1b8);
            }
            if (plVar31 == plVar3) break;
            if (*(int *)(*plVar31 + 0x18) != 1) goto LAB_145b7e0e0;
            plVar31 = plVar31 + 1;
          }
          pFVar38 = (ForAnyElementType *)(lVar24 + 0x28);
          if ((pFVar38 == (ForAnyElementType *)(lVar6 + 0x28)) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)this != (void*)&Source",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x986,L""), bVar19)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          iVar42 = *(int *)(lVar6 + 0x30);
          if (iVar42 != 0) {
            iVar20 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (8,8,iVar42,pFVar38,(int *)(lVar24 + 0x30),(int *)(lVar24 + 0x34));
            memmove(pFVar38->Data + (longlong)iVar20 * 8,((ForAnyElementType *)(lVar6 + 0x28))->Data
                    ,(longlong)iVar42 << 3);
            *(undefined4 *)(lVar6 + 0x30) = 0;
          }
        }
LAB_145b7e0e0:
        uVar37 = uVar37 - 1;
        ppFVar30 = local_160;
        param_1 = local_118;
        this = local_138;
      } while (0 < (int)uVar37);
    }
    QueryPerformanceCounter((LARGE_INTEGER *)&local_f0.Value);
    local_160 = param_1->DataPtr;
    local_120 = local_f0.Value;
    local_f8 = local_160 + param_1->ArrayNum;
    pFVar40 = local_f0.Value;
    if (local_160 != local_f8) {
      do {
        pFVar43 = *local_160;
        local_178 = pFVar43;
        FVulkanPayload::PreExecute(pFVar43);
        pFVar2 = &pFVar43->EventStream;
        if ((pFVar43->ExternalGPUTime).bIsSet != false) {
          aVar23 = (atomic<void_*>)(pFVar43->EventStream).Current;
          if (aVar23 == (atomic<void_*>)0x0) {
            uVar36 = FLockFreePointerListLIFORoot<64,1>::Pop
                               ((FLockFreePointerListLIFORoot<64,1> *)
                                &UE::RHI::GPUProfiler::FEventStream::FChunk::MemoryPool);
            aVar23 = (atomic<void_*>)0x0;
            aVar22 = aVar23;
            if (uVar36 != 0) {
              aVar22 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar36 >> 0xe][uVar36 & 0x3fff].
                       Payload;
              FLockFreeLinkPolicy::FreeLockFreeLink(uVar36);
            }
            if (aVar22 == (atomic<void_*>)0x0) {
              aVar22 = (atomic<void_*>)FMemory::Malloc(0x4000,8);
            }
            memset((void *)aVar22,0xf7,0x4000);
            if (aVar22 != (atomic<void_*>)0x0) {
              *(undefined8 *)aVar22 = 0;
              *(uint *)((longlong)aVar22 + 8) = 0;
              *(undefined8 *)((longlong)aVar22 + 0x30) = 0;
              *(undefined4 *)((longlong)aVar22 + 0x38) = 0;
              *(undefined4 *)((longlong)aVar22 + 0x3c) = 2;
              aVar23 = aVar22;
            }
            (pFVar43->EventStream).Current = (FChunk *)aVar23;
            if (pFVar2->First == (FChunk *)0x0) {
              pFVar2->First = (FChunk *)aVar23;
            }
          }
          aVar22 = (atomic<void_*>)0x0;
          if (0x197 < *(uint *)((longlong)aVar23 + 8)) {
            uVar36 = FLockFreePointerListLIFORoot<64,1>::Pop
                               ((FLockFreePointerListLIFORoot<64,1> *)
                                &UE::RHI::GPUProfiler::FEventStream::FChunk::MemoryPool);
            aVar23 = aVar22;
            if (uVar36 != 0) {
              aVar23 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar36 >> 0xe][uVar36 & 0x3fff].
                       Payload;
              FLockFreeLinkPolicy::FreeLockFreeLink(uVar36);
            }
            if (aVar23 == (atomic<void_*>)0x0) {
              aVar23 = (atomic<void_*>)FMemory::Malloc(0x4000,8);
            }
            memset((void *)aVar23,0xf7,0x4000);
            if (aVar23 != (atomic<void_*>)0x0) {
              *(undefined8 *)aVar23 = 0;
              *(uint *)((longlong)aVar23 + 8) = 0;
              *(undefined8 *)((longlong)aVar23 + 0x30) = 0;
              *(undefined4 *)((longlong)aVar23 + 0x38) = 0;
              *(undefined4 *)((longlong)aVar23 + 0x3c) = 2;
              aVar22 = aVar23;
            }
            (((pFVar43->EventStream).Current)->Header).Next = (FChunk *)aVar22;
            (pFVar43->EventStream).Current = (FChunk *)aVar22;
            aVar23 = aVar22;
          }
          uVar36 = *(uint *)((longlong)aVar23 + 8);
          *(uint *)((longlong)aVar23 + 8) = uVar36 + 1;
          *(ulong64 *)
           ((TStaticArray<TTypeCompatibleBytes<UE::RHI::GPUProfiler::FEvent>,408,4294967295> *)
           ((longlong)aVar23 + 0x40))->Elements[uVar36].Pad = (pFVar43->ExternalGPUTime).TypedValue;
          ((uchar *)((longlong)aVar23 + 0x60))[(ulonglong)uVar36 * 0x28] = '\x01';
        }
        if ((pFVar43->EndFrameEvent).bIsSet != false) {
          (pFVar43->EndFrameEvent).TypedValue.CPUTimestamp = (ulong64)pFVar40;
          aVar23 = (atomic<void_*>)(pFVar43->EventStream).Current;
          if (aVar23 == (atomic<void_*>)0x0) {
            uVar36 = FLockFreePointerListLIFORoot<64,1>::Pop
                               ((FLockFreePointerListLIFORoot<64,1> *)
                                &UE::RHI::GPUProfiler::FEventStream::FChunk::MemoryPool);
            aVar23 = (atomic<void_*>)0x0;
            aVar22 = aVar23;
            if (uVar36 != 0) {
              aVar22 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar36 >> 0xe][uVar36 & 0x3fff].
                       Payload;
              FLockFreeLinkPolicy::FreeLockFreeLink(uVar36);
            }
            if (aVar22 == (atomic<void_*>)0x0) {
              aVar22 = (atomic<void_*>)FMemory::Malloc(0x4000,8);
            }
            memset((void *)aVar22,0xf7,0x4000);
            if (aVar22 != (atomic<void_*>)0x0) {
              *(undefined8 *)aVar22 = 0;
              *(uint *)((longlong)aVar22 + 8) = 0;
              *(undefined8 *)((longlong)aVar22 + 0x30) = 0;
              *(undefined4 *)((longlong)aVar22 + 0x38) = 0;
              *(undefined4 *)((longlong)aVar22 + 0x3c) = 2;
              aVar23 = aVar22;
            }
            (pFVar43->EventStream).Current = (FChunk *)aVar23;
            if (pFVar2->First == (FChunk *)0x0) {
              pFVar2->First = (FChunk *)aVar23;
            }
          }
          aVar22 = (atomic<void_*>)0x0;
          if (0x197 < *(uint *)((longlong)aVar23 + 8)) {
            uVar36 = FLockFreePointerListLIFORoot<64,1>::Pop
                               ((FLockFreePointerListLIFORoot<64,1> *)
                                &UE::RHI::GPUProfiler::FEventStream::FChunk::MemoryPool);
            aVar23 = aVar22;
            if (uVar36 != 0) {
              aVar23 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar36 >> 0xe][uVar36 & 0x3fff].
                       Payload;
              FLockFreeLinkPolicy::FreeLockFreeLink(uVar36);
            }
            if (aVar23 == (atomic<void_*>)0x0) {
              aVar23 = (atomic<void_*>)FMemory::Malloc(0x4000,8);
            }
            memset((void *)aVar23,0xf7,0x4000);
            if (aVar23 != (atomic<void_*>)0x0) {
              *(undefined8 *)aVar23 = 0;
              *(uint *)((longlong)aVar23 + 8) = 0;
              *(undefined8 *)((longlong)aVar23 + 0x30) = 0;
              *(undefined4 *)((longlong)aVar23 + 0x38) = 0;
              *(undefined4 *)((longlong)aVar23 + 0x3c) = 2;
              aVar22 = aVar23;
            }
            (((pFVar43->EventStream).Current)->Header).Next = (FChunk *)aVar22;
            (pFVar43->EventStream).Current = (FChunk *)aVar22;
            aVar23 = aVar22;
          }
          uVar28 = (ulonglong)*(uint *)((longlong)aVar23 + 8);
          *(uint *)((longlong)aVar23 + 8) = *(uint *)((longlong)aVar23 + 8) + 1;
          uVar14 = *(undefined8 *)&(pFVar43->EndFrameEvent).TypedValue.FrameNumber;
          lVar15 = (pFVar43->EndFrameEvent).TypedValue.StatsFrame;
          pFVar16 = (pFVar43->EndFrameEvent).TypedValue.Breadcrumb;
          pTVar5 = ((TStaticArray<TTypeCompatibleBytes<UE::RHI::GPUProfiler::FEvent>,408,4294967295>
                     *)((longlong)aVar23 + 0x40))->Elements + uVar28;
          *(ulong64 *)pTVar5->Pad = (pFVar43->EndFrameEvent).TypedValue.CPUTimestamp;
          *(undefined8 *)(pTVar5->Pad + 8) = uVar14;
          *(long64 *)((uchar *)((longlong)aVar23 + 0x50) + uVar28 * 0x28) = lVar15;
          *(FRHIBreadcrumbNode **)((uchar *)((longlong)aVar23 + 0x50) + uVar28 * 0x28 + 8) = pFVar16
          ;
          ((uchar *)((longlong)aVar23 + 0x60))[uVar28 * 0x28] = '\0';
          if (*(longlong *)((uchar *)((longlong)aVar23 + 0x58) + uVar28 * 0x28) != 0) {
            FRHIBreadcrumbAllocatorArray::AddUnique
                      (&(((pFVar43->EventStream).Current)->Header).BreadcrumbAllocators,
                       *(FRHIBreadcrumbAllocator **)
                        (*(longlong *)((uchar *)((longlong)aVar23 + 0x58) + uVar28 * 0x28) + 0x28));
          }
        }
        if (((pFVar43->Timing).bIsSet != false) &&
           (pFVar7 = (pFVar43->Timing).TypedValue, pFVar7 != (FVulkanTiming *)0x0)) {
          FGenericPlatformMisc::BeginNamedEvent(&FColor::Red,"CalibrateClocks");
          if (CpuChannel->Enabled < 0) {
            FVulkanDevice::GetCalibrationTimestamp(this->Device,pFVar7);
          }
          else {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId342,"CalibrateClocks",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanQueue.cpp"
                       ,0x156);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId342);
            FVulkanDevice::GetCalibrationTimestamp(this->Device,pFVar7);
            FCpuProfilerTrace::OutputEndEvent();
          }
          FGenericPlatformMisc::EndNamedEvent();
        }
        if ((((pFVar43->WaitSemaphores).ArrayNum == 0) && ((pFVar43->CommandBuffers).ArrayNum == 0))
           && ((pFVar43->SignalSemaphores).ArrayNum == 0)) {
          if ((pFVar43->ReservedResourcesToCommit).ArrayNum != 0) {
LAB_145b7e4f7:
            if (0 < (int)local_1a8) {
              iStack_c0 = (int)local_1a8;
              local_c8 = local_1b0.Data;
              local_88._12_4_ = uStack_bc;
              local_88.ArrayNum = (int)local_1a8;
              local_88.DataPtr = (VkSubmitInfo *)local_1b0.Data;
              Submit(this,&local_88,(FVulkanFence *)0x0);
              uVar36 = local_1a8._4_4_;
              if (local_1a8 < 0) {
                local_1a8 = (ulonglong)local_1a8._4_4_ << 0x20;
                if (uVar36 != 0) {
                  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x48,8,0,&local_1b0,0,(int *)((longlong)&local_1a8 + 4));
                }
              }
              else {
                local_1a8 = (ulonglong)local_1a8._4_4_ << 0x20;
              }
            }
            BindSparseResources(this,pFVar43);
            goto LAB_145b7e575;
          }
          pFVar43->TimelineSemaphoreValue = this->NextTimelineSemaphoreValue - 1;
        }
        else {
          if ((pFVar43->ReservedResourcesToCommit).ArrayNum != 0) goto LAB_145b7e4f7;
LAB_145b7e575:
          iVar42 = (int)local_1a8;
          if ((int)local_1a8 == local_1a8._4_4_) {
            iVar42 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x848,&local_1b0,(int *)((longlong)&local_1a8 + 4));
          }
          local_1a8 = CONCAT44(local_1a8._4_4_,iVar42 + 1);
          lVar24 = (longlong)iVar42;
          local_110 = (FScriptContainerElement *)0x0;
          *(undefined8 *)(local_1b0.Data + lVar24 * 0x48) = 0;
          *(undefined8 *)(local_1b0.Data + lVar24 * 0x48 + 8) = 0;
          *(undefined8 *)(local_1b0.Data + lVar24 * 0x48 + 0x10) = 0;
          *(undefined8 *)(local_1b0.Data + lVar24 * 0x48 + 0x10 + 8) = 0;
          pFVar41 = local_1b0.Data + lVar24 * 0x48;
          *(undefined8 *)(pFVar41 + 0x20) = 0;
          *(undefined8 *)(pFVar41 + 0x28) = 0;
          *(undefined8 *)(pFVar41 + 0x30) = 0;
          *(undefined8 *)(pFVar41 + 0x38) = 0;
          *(undefined8 *)(pFVar41 + 0x40) = 0;
          *(undefined4 *)&pFVar41->field_0x0 = 4;
          local_128 = pFVar41;
          if (this->bUseTimelineSemaphores != false) {
            iVar42 = (int)local_168;
            if ((int)local_168 == local_168._4_4_) {
              iVar42 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x830,&local_170,(int *)((longlong)&local_168 + 4));
            }
            local_168 = CONCAT44(local_168._4_4_,iVar42 + 1);
            local_110 = local_170.Data + (longlong)iVar42 * 0x30;
            *(undefined8 *)local_110 = 0;
            *(undefined8 *)(local_110 + 8) = 0;
            *(undefined8 *)(local_110 + 0x10) = 0;
            *(undefined8 *)(local_110 + 0x18) = 0;
            *(undefined8 *)(local_110 + 0x20) = 0;
            *(undefined8 *)(local_110 + 0x28) = 0;
            *(undefined4 *)local_110 = 0x3b9df29b;
            *(FScriptContainerElement **)(pFVar41 + 8) = local_110;
          }
          pFVar17 = local_178;
          iVar42 = (pFVar43->WaitSemaphores).ArrayNum;
          if (iVar42 != 0) {
            uVar36 = (uint)local_1c0;
            uVar39 = (ulonglong)(int)(uint)local_1c0;
            pFVar34 = (local_178->WaitSemaphores).AllocatorInstance.Data;
            pFVar35 = pFVar34 + (longlong)iVar42 * 8;
            uVar28 = uVar39;
            while( true ) {
              iVar20 = (int)uVar28;
              if ((pFVar17->WaitSemaphores).ArrayNum != iVar42) {
                local_1b7 = 0;
                `TCheckedPointerIterator<FVulkanSemaphore_*,int,0>::operator!='::__l2::<lambda_1>::
                operator()(&local_1b7);
                iVar20 = (uint)local_1c0;
              }
              pFVar41 = local_128;
              if (pFVar34 == pFVar35) break;
              local_158 = *(undefined8 *)(*(longlong *)pFVar34 + 0x18);
              if ((local_1c8.Data <= (FScriptContainerElement *)&local_158) &&
                 ((FScriptContainerElement *)&local_158 <
                  local_1c8.Data + (longlong)(int)local_1c0._4_4_ * 8)) {
                bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   );
                if (bVar19) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                iVar20 = (uint)local_1c0;
              }
              if (iVar20 == local_1c0._4_4_) {
                iVar20 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_1c8,(int *)((longlong)&local_1c0 + 4));
              }
              local_1c0 = CONCAT44(local_1c0._4_4_,iVar20 + 1U);
              pFVar34 = pFVar34 + 8;
              *(undefined8 *)(local_1c8.Data + (longlong)iVar20 * 8) = local_158;
              uVar28 = (ulonglong)(iVar20 + 1U);
            }
            *(int *)(local_128 + 0x10) = (pFVar17->WaitSemaphores).ArrayNum;
            uVar37 = 0;
            if ((int)uVar36 < (int)(uint)local_1c0) {
              uVar37 = ~uVar36 >> 0x1f;
            }
            if ((uVar37 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            *(FScriptContainerElement **)(pFVar41 + 0x18) = local_1c8.Data + uVar39 * 8;
            *(FScriptContainerElement **)(pFVar41 + 0x20) =
                 (local_178->WaitFlags).AllocatorInstance.Data;
            pFVar43 = local_178;
          }
          local_12c = (pFVar43->CommandBuffers).ArrayNum;
          uVar28 = (ulonglong)(int)local_12c;
          if (local_12c != 0) {
            pFVar35 = (pFVar43->CommandBuffers).AllocatorInstance.Data;
            local_17c = (uint)local_198;
            local_d8 = pFVar35 + uVar28 * 8;
            while( true ) {
              pFVar34 = local_d8;
              uVar36 = (uint)local_198;
              local_108 = pFVar35;
              if ((pFVar43->CommandBuffers).ArrayNum != (int)uVar28) {
                local_1b6 = 0;
                `TCheckedPointerIterator<FVulkanCommandBuffer_*,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_1b6);
                uVar36 = (uint)local_198;
              }
              pFVar41 = local_128;
              if (pFVar35 == pFVar34) break;
              this_00 = *(FVulkanCommandBuffer **)pFVar35;
              local_150 = this_00->CommandBufferHandle;
              if ((local_1a0.Data <= (FScriptContainerElement *)&local_150) &&
                 ((FScriptContainerElement *)&local_150 <
                  local_1a0.Data + (longlong)(int)local_198._4_4_ * 8)) {
                bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   );
                if (bVar19) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                uVar36 = (uint)local_198;
              }
              if (uVar36 == local_198._4_4_) {
                uVar36 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_1a0,(int *)((longlong)&local_198 + 4));
              }
              local_198 = CONCAT44(local_198._4_4_,uVar36 + 1);
              FVar32 = (ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*>)
                       &this_00->BeginEvents;
              *(VkCommandBuffer_T **)(local_1a0.Data + (longlong)(int)uVar36 * 8) = local_150;
              FVar8 = (this_00->BeginEvents).AllocatorInstance.SecondaryData;
              iVar42 = (this_00->BeginEvents).ArrayNum;
              if (FVar8 != (ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*>)0x0) {
                FVar32 = FVar8;
              }
              FVar8 = (ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*>)
                      ((longlong)FVar32 + (longlong)iVar42 * 8);
              while( true ) {
                if ((this_00->BeginEvents).ArrayNum != iVar42) {
                  local_1b5 = 0;
                  `TCheckedPointerIterator<UE::RHI::GPUProfiler::FEvent::FBeginWork_*,int,0>::
                  operator!='::__l2::<lambda_1>::operator()(&local_1b5);
                }
                if (FVar32 == FVar8) break;
                puVar9 = *(ulong64 **)FVar32;
                FVar32 = (ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*>)
                         ((longlong)FVar32 + 8);
                *puVar9 = (ulong64)pFVar40;
              }
              (this_00->BeginEvents).ArrayNum = 0;
              if ((this_00->BeginEvents).ArrayMax < 0) {
                UE::Core::Private::
                ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*>_>
                          (8,8,0,&(this_00->BeginEvents).AllocatorInstance,0,
                           &(this_00->BeginEvents).ArrayMax);
              }
              if (((pFVar43->EventStream).Queue.field0_0x0.Value !=
                   (this_00->EventStream).Queue.field0_0x0.Value) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Queue == Other.Queue",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\GPUProfiler.h"
                                      ,0x1c1,L""), bVar19)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              if ((pFVar43->EventStream).First == (FChunk *)0x0) {
                (pFVar43->EventStream).Current = (this_00->EventStream).Current;
                (pFVar43->EventStream).First = (this_00->EventStream).First;
              }
              else {
                pFVar10 = (this_00->EventStream).First;
                if (pFVar10 != (FChunk *)0x0) {
                  (((pFVar43->EventStream).Current)->Header).Next = pFVar10;
                  (pFVar43->EventStream).Current = (this_00->EventStream).Current;
                }
              }
              (this_00->EventStream).Current = (FChunk *)0x0;
              (this_00->EventStream).First = (FChunk *)0x0;
              local_130 = (this_00->ExecutedSecondaryCommandBuffers).ArrayNum;
              uVar28 = (ulonglong)(int)local_130;
              pFVar41 = (this_00->ExecutedSecondaryCommandBuffers).AllocatorInstance.Data;
              local_e0 = pFVar41 + uVar28 * 8;
              while( true ) {
                pFVar35 = local_e0;
                if ((this_00->ExecutedSecondaryCommandBuffers).ArrayNum != (int)uVar28) {
                  local_1b4 = 0;
                  `TCheckedPointerIterator<FVulkanCommandBuffer_*,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(&local_1b4);
                }
                if (pFVar41 == pFVar35) break;
                lVar24 = *(longlong *)pFVar41;
                iVar42 = *(int *)(lVar24 + 0x130);
                puVar33 = (undefined8 *)(lVar24 + 0xe8);
                if (*(undefined8 **)(lVar24 + 0x128) != (undefined8 *)0x0) {
                  puVar33 = *(undefined8 **)(lVar24 + 0x128);
                }
                puVar4 = puVar33 + iVar42;
                while( true ) {
                  if (*(int *)(lVar24 + 0x130) != iVar42) {
                    local_1b3 = 0;
                    `TCheckedPointerIterator<UE::RHI::GPUProfiler::FEvent::FBeginWork_*,int,0>::
                    operator!='::__l2::<lambda_1>::operator()(&local_1b3);
                  }
                  if (puVar33 == puVar4) break;
                  puVar9 = (ulong64 *)*puVar33;
                  puVar33 = puVar33 + 1;
                  *puVar9 = (ulong64)local_120;
                }
                *(undefined4 *)(lVar24 + 0x130) = 0;
                if (*(int *)(lVar24 + 0x134) < 0) {
                  UE::Core::Private::
                  ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*>_>
                            (8,8,0,(ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*> *)
                                   (lVar24 + 0xe8),0,(int *)(lVar24 + 0x134));
                }
                pFVar43 = local_178;
                if (((local_178->EventStream).Queue.field0_0x0.Value != *(uint *)(lVar24 + 0xe0)) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Queue == Other.Queue",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\GPUProfiler.h"
                                        ,0x1c1,L""), bVar19)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                if ((pFVar43->EventStream).First == (FChunk *)0x0) {
                  (pFVar43->EventStream).Current = *(FChunk **)(lVar24 + 0xd8);
                  (pFVar43->EventStream).First = *(FChunk **)(lVar24 + 0xd0);
                }
                else if (*(FChunk **)(lVar24 + 0xd0) != (FChunk *)0x0) {
                  (((pFVar43->EventStream).Current)->Header).Next = *(FChunk **)(lVar24 + 0xd0);
                  (pFVar43->EventStream).Current = *(FChunk **)(lVar24 + 0xd8);
                }
                uVar28 = (ulonglong)local_130;
                pFVar41 = pFVar41 + 8;
                *(undefined8 *)(lVar24 + 0xd8) = 0;
                *(undefined8 *)(lVar24 + 0xd0) = 0;
              }
              FVulkanCommandBuffer::SetSubmitted(this_00);
              pFVar35 = local_108 + 8;
              uVar28 = (ulonglong)local_12c;
              pFVar40 = local_120;
            }
            lVar24 = (longlong)(int)local_17c;
            *(int *)(local_128 + 0x28) = (pFVar43->CommandBuffers).ArrayNum;
            uVar36 = 0;
            if ((int)local_17c < (int)(uint)local_198) {
              uVar36 = ~local_17c >> 0x1f;
            }
            if ((uVar36 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            *(FScriptContainerElement **)(pFVar41 + 0x30) = local_1a0.Data + lVar24 * 8;
          }
          this_02 = local_d0;
          pFVar18 = local_138;
          pFVar17 = local_178;
          iVar42 = (pFVar43->SignalSemaphores).ArrayNum;
          if (iVar42 != 0) {
            pFVar34 = (pFVar43->SignalSemaphores).AllocatorInstance.Data;
            pFVar35 = pFVar34 + (longlong)iVar42 * 8;
            local_17c = (uint)local_1c0;
            while( true ) {
              uVar36 = (uint)local_1c0;
              if ((pFVar17->SignalSemaphores).ArrayNum != iVar42) {
                local_1b2[0] = 0;
                `TCheckedPointerIterator<FVulkanSemaphore_*,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_1b2);
                uVar36 = (uint)local_1c0;
              }
              pFVar40 = local_120;
              pFVar41 = local_128;
              if (pFVar34 == pFVar35) break;
              lVar24 = *(longlong *)pFVar34;
              local_148 = *(undefined8 *)(lVar24 + 0x18);
              if ((local_1c8.Data <= (FScriptContainerElement *)&local_148) &&
                 ((FScriptContainerElement *)&local_148 <
                  local_1c8.Data + (longlong)(int)local_1c0._4_4_ * 8)) {
                bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   );
                if (bVar19) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                uVar36 = (uint)local_1c0;
              }
              if (uVar36 == local_1c0._4_4_) {
                uVar36 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_1c8,(int *)((longlong)&local_1c0 + 4));
              }
              local_1c0 = CONCAT44(local_1c0._4_4_,uVar36 + 1);
              *(undefined8 *)(local_1c8.Data + (longlong)(int)uVar36 * 8) = local_148;
              local_58 = pFVar18->NextTimelineSemaphoreValue;
              local_50 = pFVar18->QueueType;
              local_100 = *(undefined8 *)(lVar24 + 0x18);
              local_b8 = &local_100;
              local_b0 = &local_58;
              TSet<TTuple<VkSemaphore_T_*,FBinarySemaphoreSignalInfo>,TDefaultMapHashableKeyFuncs<VkSemaphore_T_*,FBinarySemaphoreSignalInfo,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<VkSemaphore_T_*_&&,FBinarySemaphoreSignalInfo_&&>_>
                        (this_02,&local_f0,(bool *)&local_b8);
              pFVar34 = pFVar34 + 8;
            }
            lVar24 = (longlong)(int)local_17c;
            *(int *)(local_128 + 0x38) = (pFVar17->SignalSemaphores).ArrayNum;
            uVar36 = 0;
            if ((int)local_17c < (int)(uint)local_1c0) {
              uVar36 = ~local_17c >> 0x1f;
            }
            if ((uVar36 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            *(FScriptContainerElement **)(pFVar41 + 0x40) = local_1c8.Data + lVar24 * 8;
            pFVar43 = pFVar17;
          }
          aVar22 = (atomic<void_*>)0x0;
          aVar23 = (atomic<void_*>)(pFVar43->EventStream).Current;
          if (aVar23 == (atomic<void_*>)0x0) {
            uVar36 = FLockFreePointerListLIFORoot<64,1>::Pop
                               ((FLockFreePointerListLIFORoot<64,1> *)
                                &UE::RHI::GPUProfiler::FEventStream::FChunk::MemoryPool);
            _Dst = aVar22;
            if (uVar36 != 0) {
              _Dst = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar36 >> 0xe][uVar36 & 0x3fff].
                     Payload;
              FLockFreeLinkPolicy::FreeLockFreeLink(uVar36);
            }
            if (_Dst == (atomic<void_*>)0x0) {
              _Dst = (atomic<void_*>)FMemory::Malloc(0x4000,8);
            }
            memset((void *)_Dst,0xf7,0x4000);
            aVar23 = aVar22;
            if (_Dst != (atomic<void_*>)0x0) {
              *(undefined8 *)_Dst = 0;
              *(uint *)((longlong)_Dst + 8) = 0;
              *(undefined8 *)((longlong)_Dst + 0x30) = 0;
              *(undefined4 *)((longlong)_Dst + 0x38) = 0;
              *(undefined4 *)((longlong)_Dst + 0x3c) = 2;
              aVar23 = _Dst;
            }
            (pFVar43->EventStream).Current = (FChunk *)aVar23;
            if ((pFVar43->EventStream).First == (FChunk *)0x0) {
              (pFVar43->EventStream).First = (FChunk *)aVar23;
            }
          }
          if (0x197 < *(uint *)((longlong)aVar23 + 8)) {
            uVar36 = FLockFreePointerListLIFORoot<64,1>::Pop
                               ((FLockFreePointerListLIFORoot<64,1> *)
                                &UE::RHI::GPUProfiler::FEventStream::FChunk::MemoryPool);
            aVar23 = aVar22;
            if (uVar36 != 0) {
              aVar23 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar36 >> 0xe][uVar36 & 0x3fff].
                       Payload;
              FLockFreeLinkPolicy::FreeLockFreeLink(uVar36);
            }
            if (aVar23 == (atomic<void_*>)0x0) {
              aVar23 = (atomic<void_*>)FMemory::Malloc(0x4000,8);
            }
            memset((void *)aVar23,0xf7,0x4000);
            if (aVar23 != (atomic<void_*>)0x0) {
              *(undefined8 *)aVar23 = 0;
              *(uint *)((longlong)aVar23 + 8) = 0;
              *(undefined8 *)((longlong)aVar23 + 0x30) = 0;
              *(undefined4 *)((longlong)aVar23 + 0x38) = 0;
              *(undefined4 *)((longlong)aVar23 + 0x3c) = 2;
              aVar22 = aVar23;
            }
            (((pFVar43->EventStream).Current)->Header).Next = (FChunk *)aVar22;
            (pFVar43->EventStream).Current = (FChunk *)aVar22;
            aVar23 = aVar22;
          }
          this = local_138;
          uVar28 = (ulonglong)*(uint *)((longlong)aVar23 + 8);
          *(uint *)((longlong)aVar23 + 8) = *(uint *)((longlong)aVar23 + 8) + 1;
          uVar11 = local_138->NextTimelineSemaphoreValue;
          *(FBinarySemaphoreSignalInfo **)
           ((TStaticArray<TTypeCompatibleBytes<UE::RHI::GPUProfiler::FEvent>,408,4294967295> *)
           ((longlong)aVar23 + 0x40))->Elements[uVar28].Pad = pFVar40;
          *(ulong64 *)((uchar *)((longlong)aVar23 + 0x48) + uVar28 * 0x28) = uVar11;
          ((uchar *)((longlong)aVar23 + 0x60))[uVar28 * 0x28] = '\a';
          if (local_138->bUseTimelineSemaphores == false) {
            pFVar43->TimelineSemaphoreValue = local_138->NextTimelineSemaphoreValue;
            pFVar25 = FVulkanFenceManager::AllocateFence(&local_138->Device->FenceManager,false);
            pFVar43->Fence = pFVar25;
            iVar42 = (int)local_1a8;
            local_a8 = (VkSubmitInfo *)local_1b0.Data;
            if (((int)local_1a8 < 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar19)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            iStack_a0 = iVar42;
            local_78._12_4_ = uStack_9c;
            local_78.ArrayNum = iVar42;
            local_78.DataPtr = local_a8;
            Submit(this,&local_78,pFVar25);
            lVar24 = local_1a8;
            uVar36 = local_1a8._4_4_;
            local_1a8 = (ulonglong)local_1a8._4_4_ << 0x20;
            if ((lVar24 < 0) && (uVar36 != 0)) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x48,8,0,&local_1b0,0,(int *)((longlong)&local_1a8 + 4));
            }
          }
          else {
            local_140 = local_138->TimelineSempahore->SemaphoreHandle;
            if (((local_1c8.Data <= (FScriptContainerElement *)&local_140) &&
                ((FScriptContainerElement *)&local_140 <
                 local_1c8.Data + (longlong)(int)local_1c0._4_4_ * 8)) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar19)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            uVar36 = (uint)local_1c0;
            if ((uint)local_1c0 == local_1c0._4_4_) {
              uVar36 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_1c8,(int *)((longlong)&local_1c0 + 4));
            }
            local_1c0 = CONCAT44(local_1c0._4_4_,uVar36 + 1);
            *(VkSemaphore_T **)(local_1c8.Data + (longlong)(int)uVar36 * 8) = local_140;
            if (*(longlong *)(pFVar41 + 0x40) == 0) {
              uVar37 = 0;
              if ((int)uVar36 < (int)(uVar36 + 1)) {
                uVar37 = ~uVar36 >> 0x1f;
              }
              if ((uVar37 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              *(undefined4 *)(pFVar41 + 0x38) = 1;
              uVar21 = 1;
              *(FScriptContainerElement **)(pFVar41 + 0x40) =
                   local_1c8.Data + (longlong)(int)uVar36 * 8;
            }
            else {
              *(int *)(pFVar41 + 0x38) = *(int *)(pFVar41 + 0x38) + 1;
              uVar21 = *(undefined4 *)(pFVar41 + 0x38);
            }
            pFVar35 = local_110;
            uVar36 = (uint)local_188;
            lVar24 = (longlong)(int)(uint)local_188;
            *(undefined4 *)(local_110 + 0x20) = uVar21;
            iVar42 = *(int *)(pFVar41 + 0x38);
            iVar20 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (8,8,iVar42,&local_190,(int *)&local_188,
                                (int *)((longlong)&local_188 + 4));
            memset(local_190.Data + (longlong)iVar20 * 8,0,(longlong)iVar42 << 3);
            uVar37 = 0;
            if ((int)uVar36 < (int)(uint)local_188) {
              uVar37 = ~uVar36 >> 0x1f;
            }
            if ((uVar37 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            *(FScriptContainerElement **)(pFVar35 + 0x28) = local_190.Data + lVar24 * 8;
            pFVar43->TimelineSemaphoreValue = this->NextTimelineSemaphoreValue;
            uVar11 = this->NextTimelineSemaphoreValue;
            uVar36 = 0;
            if ((int)((uint)local_188 - 1) < (int)(uint)local_188) {
              uVar36 = ~((uint)local_188 - 1) >> 0x1f;
            }
            if (uVar36 == 0) {
              bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar19) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
            }
            *(ulong64 *)(local_190.Data + (longlong)(int)((uint)local_188 + -1) * 8) = uVar11;
          }
          this->NextTimelineSemaphoreValue = this->NextTimelineSemaphoreValue + 1;
        }
        local_160 = local_160 + 1;
        param_1 = local_118;
      } while (local_160 != local_f8);
    }
    if (this->bUseTimelineSemaphores != false) {
      iVar42 = (int)local_1a8;
      if ((int)local_1a8 != 0) {
        local_98 = (VkSubmitInfo *)local_1b0.Data;
        if (((int)local_1a8 < 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar19)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        iStack_90 = iVar42;
        local_68._12_4_ = uStack_8c;
        local_68.ArrayNum = iVar42;
        local_68.DataPtr = local_98;
        Submit(this,&local_68,(FVulkanFence *)0x0);
      }
    }
    pFVar18 = local_138;
    ppFVar27 = param_1->DataPtr;
    ppFVar30 = ppFVar27 + param_1->ArrayNum;
    for (; ppFVar27 != ppFVar30; ppFVar27 = ppFVar27 + 1) {
      pFVar43 = *ppFVar27;
      pFVar35 = (pFVar43->SubmissionEvents).AllocatorInstance.Data;
      iVar42 = (pFVar43->SubmissionEvents).ArrayNum;
      pFVar41 = pFVar35 + (longlong)iVar42 * 8;
      while( true ) {
        if ((pFVar43->SubmissionEvents).ArrayNum != iVar42) {
          `TCheckedPointerIterator<TRefCountPtr<FBaseGraphTask>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_180);
        }
        if (pFVar35 == pFVar41) break;
        this_01 = *(FTaskBase **)pFVar35;
        if (this_01->ExtendedPriority == TaskEvent) {
          LOCK();
          this_01->RefCount = (atomic<unsigned_int>)((int)this_01->RefCount + 1);
          UNLOCK();
        }
        UE::Tasks::Private::FTaskBase::TryLaunch(this_01,0);
        pFVar35 = pFVar35 + 8;
      }
      piVar1 = &(pFVar43->SubmissionEvents).ArrayMax;
      pFVar41 = (pFVar43->SubmissionEvents).AllocatorInstance.Data;
      iVar42 = (pFVar43->SubmissionEvents).ArrayNum;
      if ((pFVar43->SubmissionEvents).ArrayMax < 0) {
        DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                  ((TRefCountPtr<FBaseGraphTask> *)pFVar41,iVar42);
        (pFVar43->SubmissionEvents).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&(pFVar43->SubmissionEvents).AllocatorInstance,0,piVar1);
        }
      }
      else {
        DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                  ((TRefCountPtr<FBaseGraphTask> *)pFVar41,iVar42);
        (pFVar43->SubmissionEvents).ArrayNum = 0;
      }
      pTVar26 = ::operator_new(0x10);
      if (pTVar26 != (TNode *)0x0) {
        pTVar26->NextNode = (TNode *)0x0;
        pTVar26->Item = pFVar43;
        pTVar12 = (pFVar18->PendingInterrupt).Head;
        (pFVar18->PendingInterrupt).Head = pTVar26;
        pTVar12->NextNode = pTVar26;
      }
    }
    if (local_190.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.Data);
    }
    if (local_170.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data);
    }
    if (local_1b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.Data);
    }
    if (local_1a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Data);
    }
    if (local_1c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data);
    }
    return;
  }
LAB_145b7f3c3:
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar36);
}

// SubmitQueuedPayloads @ 145b7f3f0

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

int __thiscall
FVulkanQueue::SubmitQueuedPayloads
          (FVulkanQueue *this,
          TMap<VkSemaphore_T_*,FBinarySemaphoreSignalInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<VkSemaphore_T_*,FBinarySemaphoreSignalInfo,0>_>
          *param_1)

{
  TNode *pTVar1;
  TNode *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FVulkanPayload *local_58;
  ForAnyElementType local_50;
  int local_48;
  int iStack_44;
  TMap<VkSemaphore_T_*,FBinarySemaphoreSignalInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<VkSemaphore_T_*,FBinarySemaphoreSignalInfo,0>_>
  *local_40;
  FVulkanDevice *local_38;
  FScriptContainerElement *local_28;
  int iStack_20;
  undefined4 uStack_1c;
  TArrayView<FVulkanPayload_*,int> local_18;
  
  local_38 = this->Device;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48 = 0;
  iStack_44 = 0;
  local_58 = (FVulkanPayload *)0x0;
  local_40 = param_1;
  while (((this->PendingSubmission).Tail)->NextNode != (TNode *)0x0) {
    local_58 = ((this->PendingSubmission).Tail)->NextNode->Item;
    bVar4 = `FVulkanQueue::SubmitQueuedPayloads'::__l2::<lambda_1>::operator()(&local_40,local_58);
    if (!bVar4) break;
    if (((local_50.Data <= (FScriptContainerElement *)&local_58) &&
        ((FScriptContainerElement *)&local_58 < local_50.Data + (longlong)iStack_44 * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
    if (local_48 == iStack_44) {
      local_48 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_50,&iStack_44);
    }
    iVar5 = local_48 + 1;
    *(FVulkanPayload **)(local_50.Data + (longlong)local_48 * 8) = local_58;
    pTVar1 = ((this->PendingSubmission).Tail)->NextNode;
    local_48 = iVar5;
    if (pTVar1 != (TNode *)0x0) {
      pTVar2 = (this->PendingSubmission).Tail;
      (this->PendingSubmission).Tail = pTVar1;
      pTVar1->Item = (FVulkanPayload *)0x0;
      ::operator_delete(pTVar2,0x10);
    }
  }
  iVar5 = local_48;
  if (local_48 != 0) {
    local_28 = local_50.Data;
    if ((local_48 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
    iStack_20 = iVar5;
    local_18._12_4_ = uStack_1c;
    local_18.ArrayNum = iVar5;
    local_18.DataPtr = (FVulkanPayload **)local_28;
    SubmitPayloads(this,&local_18,param_1);
  }
  iVar5 = local_48;
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  return iVar5;
}

