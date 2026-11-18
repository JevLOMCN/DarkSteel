// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 5

// FVulkanRayTracingCompactionRequestHandler @ 145b47250

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

FVulkanRayTracingCompactionRequestHandler * __thiscall
FVulkanRayTracingCompactionRequestHandler::FVulkanRayTracingCompactionRequestHandler
          (FVulkanRayTracingCompactionRequestHandler *this,FVulkanDevice *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  FVulkanRayTracingCompactedSizeQueryPool *this_00;
  FVulkanRayTracingCompactedSizeQueryPool *pFVar4;
  ulonglong uVar5;
  
  this->Device = param_1;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CS,4000);
  pFVar4 = (FVulkanRayTracingCompactedSizeQueryPool *)0x0;
  piVar1 = &(this->ActiveBLASes).ArrayMax;
  (this->PendingRequests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ActiveRequests).ArrayMax;
  (this->PendingRequests).ArrayNum = 0;
  (this->PendingRequests).ArrayMax = 0;
  (this->ActiveBLASes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveBLASes).ArrayNum = 0;
  *piVar1 = 0;
  (this->ActiveRequests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveRequests).ArrayNum = 0;
  *piVar2 = 0;
  (this->ActiveRequestsSyncPoint).Reference = (FVulkanSyncPoint *)0x0;
  this->QueryPool = (FVulkanRayTracingCompactedSizeQueryPool *)0x0;
  this_00 = ::operator_new(0x68);
  iVar3 = GVulkanRayTracingMaxBatchedCompaction;
  if (this_00 != (FVulkanRayTracingCompactedSizeQueryPool *)0x0) {
    uVar5 = (ulonglong)(uint)GVulkanRayTracingMaxBatchedCompaction;
    FVulkanQueryPool::FVulkanQueryPool
              ((FVulkanQueryPool *)this_00,param_1,GVulkanRayTracingMaxBatchedCompaction,
               ASCompactedSize);
    this_00->_padding_ = (longlong)&___7FVulkanRayTracingCompactedSizeQueryPool__6B_;
    (this_00->QueryOutput).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->QueryOutput).ArrayNum = 0;
    (this_00->QueryOutput).ArrayMax = 0;
    (this_00->SyncPoint).Reference = (FVulkanSyncPoint *)0x0;
    if (iVar3 < 1) {
      if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar5);
      }
    }
    else {
      TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::AddZeroed(&this_00->QueryOutput,iVar3);
    }
    (*VulkanDynamicAPI::vkResetQueryPoolEXT)
              (param_1->Device,(VkQueryPool_T *)this_00->_padding_,0,*(uint *)&this_00->_padding_);
    pFVar4 = this_00;
  }
  this->QueryPool = pFVar4;
  if (GVulkanRayTracingMaxBatchedCompaction < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)GVulkanRayTracingMaxBatchedCompaction);
  }
  if (*piVar2 < GVulkanRayTracingMaxBatchedCompaction) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,GVulkanRayTracingMaxBatchedCompaction,&(this->ActiveRequests).AllocatorInstance,
               (this->ActiveRequests).ArrayNum,piVar2);
  }
  if (GVulkanRayTracingMaxBatchedCompaction < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)GVulkanRayTracingMaxBatchedCompaction);
  }
  if (*piVar1 < GVulkanRayTracingMaxBatchedCompaction) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,GVulkanRayTracingMaxBatchedCompaction,&(this->ActiveBLASes).AllocatorInstance,
               (this->ActiveBLASes).ArrayNum,piVar1);
  }
  return this;
}

// ~FVulkanRayTracingCompactionRequestHandler @ 145b4f330

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
FVulkanRayTracingCompactionRequestHandler::~FVulkanRayTracingCompactionRequestHandler
          (FVulkanRayTracingCompactionRequestHandler *this)

{
  longlong *plVar1;
  FVulkanRayTracingCompactedSizeQueryPool *pFVar2;
  FVulkanSyncPoint *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  
  if ((this->PendingRequests).ArrayNum != 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("PendingRequests.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                       ,0x6f9,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar2 = this->QueryPool;
  if (pFVar2 != (FVulkanRayTracingCompactedSizeQueryPool *)0x0) {
    (**(code **)pFVar2->_padding_)(pFVar2,1);
  }
  pFVar3 = (this->ActiveRequestsSyncPoint).Reference;
  if (pFVar3 != (FVulkanSyncPoint *)0x0) {
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar6 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  DestructItems<TRefCountPtr<FVulkanRayTracingGeometry>,int>
            ((TRefCountPtr<FVulkanRayTracingGeometry> *)
             (this->ActiveRequests).AllocatorInstance.Data,(this->ActiveRequests).ArrayNum);
  pFVar4 = (this->ActiveRequests).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->ActiveBLASes).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->PendingRequests).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x000145b4f3e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CS);
  return;
}

// ReleaseRequest @ 145b78a00

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
FVulkanRayTracingCompactionRequestHandler::ReleaseRequest
          (FVulkanRayTracingCompactionRequestHandler *this,FVulkanRayTracingGeometry *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  FScriptContainerElement *pFVar2;
  FRHIResource *this_00;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  FVulkanRayTracingGeometry *local_res10 [2];
  
  lpCriticalSection = &this->CS;
  local_res10[0] = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar2 = (this->PendingRequests).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)local_res10) &&
      ((FScriptContainerElement *)local_res10 <
       pFVar2 + (longlong)(this->PendingRequests).ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  iVar1 = (this->PendingRequests).ArrayNum;
  if (iVar1 != 0) {
    pFVar2 = (this->PendingRequests).AllocatorInstance.Data;
    iVar11 = 0;
    bVar4 = *(FVulkanRayTracingGeometry **)pFVar2 != local_res10[0];
    lVar7 = 0;
    iVar8 = 0;
    do {
      iVar9 = iVar8;
      do {
        lVar7 = lVar7 + 1;
        iVar9 = iVar9 + 1;
        if (iVar1 <= lVar7) break;
      } while (bVar4 == (*(FVulkanRayTracingGeometry **)(pFVar2 + lVar7 * 8) != local_res10[0]));
      if (bVar4 != false) {
        if (iVar11 != iVar8) {
          memmove(pFVar2 + (longlong)iVar11 * 8,pFVar2 + (longlong)iVar8 * 8,
                  (longlong)(iVar9 - iVar8) << 3);
        }
        iVar11 = iVar11 + (iVar9 - iVar8);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar8 = iVar9;
    } while (lVar7 < iVar1);
    (this->PendingRequests).ArrayNum = iVar11;
    if (0 < iVar1 - iVar11) {
LAB_145b78c8a:
      bVar4 = true;
      goto LAB_145b78bfd;
    }
  }
  uVar10 = 0;
  if (0 < (this->ActiveBLASes).ArrayNum) {
    lVar7 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar10 < (this->ActiveRequests).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if (*(FVulkanRayTracingGeometry **)((this->ActiveRequests).AllocatorInstance.Data + lVar7) ==
          local_res10[0]) {
        uVar6 = 0;
        if ((int)uVar10 < (this->ActiveRequests).ArrayNum) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar2 = (this->ActiveRequests).AllocatorInstance.Data;
        this_00 = *(FRHIResource **)(pFVar2 + (longlong)(int)uVar10 * 8);
        if (this_00 != (FRHIResource *)0x0) {
          *(undefined8 *)(pFVar2 + (longlong)(int)uVar10 * 8) = 0;
          FRHIResource::Release(this_00);
        }
        goto LAB_145b78c8a;
      }
      uVar10 = uVar10 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar10 < (this->ActiveBLASes).ArrayNum);
  }
  bVar4 = false;
LAB_145b78bfd:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar4;
}

// RequestCompact @ 145b792b0

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
FVulkanRayTracingCompactionRequestHandler::RequestCompact
          (FVulkanRayTracingCompactionRequestHandler *this,FVulkanRayTracingGeometry *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  char cVar2;
  char cVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  FVulkanRayTracingGeometry *local_res10 [3];
  
  local_res10[0] = param_1;
  if (((param_1->AccelerationStructureBuffer).Reference == (FVulkanBuffer *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InRTGeometry->AccelerationStructureBuffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                         ,0x6ff,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  cVar2 = *(char *)((longlong)&local_res10[0]->_padding_ + 4);
  cVar3 = *(char *)((longlong)&local_res10[0]->_padding_ + 5);
  bVar6 = false;
  bVar7 = false;
  if ((((cVar2 == '\0') && (cVar3 == '\0')) &&
      (bVar7 = bVar6, *(char *)((longlong)&local_res10[0]->_padding_ + 6) != '\0')) &&
     ((GVulkanRayTracingAllowCompaction != 0 &&
      ((uint)GVulkanRayTracingCompactionMinPrimitiveCount < (uint)local_res10[0]->_padding_)))) {
    bVar7 = true;
  }
  if ((((!bVar7) || (cVar2 != '\0')) || (cVar3 != '\0')) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("EnumHasAllFlags(GeometryBuildFlags, ERayTracingAccelerationStructureFlags::AllowCompaction) && EnumHasAllFlags(GeometryBuildFlags, ERayTracingAccelerationStructureFlags::FastTrace) && !EnumHasAnyFlags(GeometryBuildFlags, ERayTracingAccelerationStructureFlags::AllowUpdate)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                         ,0x703,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lpCriticalSection = &this->CS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar4 = (this->PendingRequests).AllocatorInstance.Data;
  if (((pFVar4 <= (FScriptContainerElement *)local_res10) &&
      ((FScriptContainerElement *)local_res10 <
       pFVar4 + (longlong)(this->PendingRequests).ArrayMax * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = (this->PendingRequests).ArrayNum;
  piVar1 = &(this->PendingRequests).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->PendingRequests).AllocatorInstance,piVar1);
  }
  (this->PendingRequests).ArrayNum = iVar8 + 1;
  *(FVulkanRayTracingGeometry **)
   ((this->PendingRequests).AllocatorInstance.Data + (longlong)iVar8 * 8) = local_res10[0];
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// Update @ 145b81aa0

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
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanRayTracingCompactionRequestHandler::Update
          (FVulkanRayTracingCompactionRequestHandler *this,FVulkanCommandListContext *param_1)

{
  longlong *plVar1;
  FVulkanRayTracingCompactedSizeQueryPool *pFVar2;
  FVulkanSyncPoint *pFVar3;
  FVulkanRayTracingGeometry *this_00;
  FScriptContainerElement *pFVar4;
  FRHIResource *pFVar5;
  FScriptContainerElement *pFVar6;
  VkQueryPool_T *pVVar7;
  code *pcVar8;
  longlong lVar9;
  _func___cdecl_void_VkCommandBuffer_T_ptr_uint_VkAccelerationStructureKHR_T_ptr_ptr_VkQueryType_VkQueryPool_T_ptr_uint
  *p_Var10;
  bool bVar11;
  VkResult VVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  FVulkanCommandBuffer *pFVar16;
  TRefCountPtr<FVulkanSyncPoint> TVar17;
  int *piVar18;
  ulonglong uVar19;
  uint uVar20;
  FRHIResource *pFVar21;
  uint uVar22;
  ulonglong uVar23;
  FScriptContainerElement *pFVar24;
  TRefCountPtr<FVulkanSyncPoint> *pTVar25;
  undefined1 local_res8 [8];
  FVulkanCommandListContext *local_res10;
  FLLMScope local_res18 [2];
  FVulkanCommandBuffer *local_res20;
  FRHIResource *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  FMemScope local_50 [2];
  
  local_res10 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name1828,L"FVulkanRT/Compaction");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res18,LLMScope_Name1828,false,None,Default,true);
  FMemScope::FMemScope(local_50,&LLMScope_Name1828,true);
  if (&this->CS == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->CS);
  if ((this->ActiveBLASes).ArrayNum < 1) {
    if (0 < (this->ActiveRequests).ArrayNum) {
      pFVar3 = (this->ActiveRequestsSyncPoint).Reference;
      if (pFVar3 != (FVulkanSyncPoint *)0x0) {
        bVar11 = FVulkanSyncPoint::IsComplete(pFVar3);
        if (!bVar11) goto LAB_145b8221d;
        pFVar3 = (this->ActiveRequestsSyncPoint).Reference;
        if (pFVar3 != (FVulkanSyncPoint *)0x0) {
          (this->ActiveRequestsSyncPoint).Reference = (FVulkanSyncPoint *)0x0;
          plVar1 = &pFVar3->_padding_;
          LOCK();
          lVar9 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if (((int)lVar9 == 1) && (plVar1 != (longlong *)0x0)) {
            (**(code **)pFVar3->_padding_)(pFVar3,1);
          }
        }
      }
      iVar15 = GVulkanRayTracingMaxBatchedCompaction;
      if (GVulkanRayTracingMaxBatchedCompaction < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)GVulkanRayTracingMaxBatchedCompaction)
        ;
      }
      DestructItems<TRefCountPtr<FVulkanRayTracingGeometry>,int>
                ((TRefCountPtr<FVulkanRayTracingGeometry> *)
                 (this->ActiveRequests).AllocatorInstance.Data,(this->ActiveRequests).ArrayNum);
      piVar18 = &(this->ActiveRequests).ArrayMax;
      (this->ActiveRequests).ArrayNum = 0;
      if (*piVar18 != iVar15) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar15,&(this->ActiveRequests).AllocatorInstance,0,piVar18);
      }
    }
    if (((this->ActiveBLASes).ArrayNum != 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ActiveBLASes.Num() == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                            ,0x751,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (((this->ActiveRequests).ArrayNum != 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ActiveRequests.Num() == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                            ,0x752,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar24 = (this->PendingRequests).AllocatorInstance.Data;
    iVar15 = (this->PendingRequests).ArrayNum;
    pFVar6 = pFVar24 + (longlong)iVar15 * 8;
    while( true ) {
      if ((this->PendingRequests).ArrayNum != iVar15) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FVulkanRayTracingGeometry_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar24 == pFVar6) break;
      pFVar21 = *(FRHIResource **)pFVar24;
      local_68 = pFVar21;
      if (pFVar21 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(pFVar21);
      }
      pFVar4 = (this->ActiveRequests).AllocatorInstance.Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_68) &&
          ((FScriptContainerElement *)&local_68 <
           pFVar4 + (longlong)(this->ActiveRequests).ArrayMax * 8)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar14 = (this->ActiveRequests).ArrayNum;
      piVar18 = &(this->ActiveRequests).ArrayMax;
      if (iVar14 == *piVar18) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&(this->ActiveRequests).AllocatorInstance,piVar18);
      }
      pFVar21 = pFVar21 + 0xe;
      (this->ActiveRequests).ArrayNum = iVar14 + 1;
      pFVar4 = (this->ActiveRequests).AllocatorInstance.Data;
      *(undefined8 *)(pFVar4 + (longlong)iVar14 * 8) = 0;
      *(FRHIResource **)(pFVar4 + (longlong)iVar14 * 8) = local_68;
      pFVar5 = (FRHIResource *)(this->ActiveBLASes).AllocatorInstance.Data;
      local_68 = (FRHIResource *)0x0;
      if (((pFVar5 <= pFVar21) &&
          (pFVar21 < (FRHIResource *)(&pFVar5->_padding_ + (this->ActiveBLASes).ArrayMax))) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar14 = (this->ActiveBLASes).ArrayNum;
      piVar18 = &(this->ActiveBLASes).ArrayMax;
      if (iVar14 == *piVar18) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&(this->ActiveBLASes).AllocatorInstance,piVar18);
      }
      (this->ActiveBLASes).ArrayNum = iVar14 + 1;
      *(longlong *)((this->ActiveBLASes).AllocatorInstance.Data + (longlong)iVar14 * 8) =
           pFVar21->_padding_;
      if (GVulkanRayTracingMaxBatchedCompaction <= (this->ActiveRequests).ArrayNum) break;
      pFVar24 = pFVar24 + 8;
    }
    uVar13 = (this->ActiveRequests).ArrayNum;
    if ((int)uVar13 < 1) goto LAB_145b8221d;
    uVar20 = 0;
    if ((int)uVar13 <= (this->PendingRequests).ArrayNum) {
      uVar20 = ~uVar13 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           ), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar6 = (this->PendingRequests).AllocatorInstance.Data;
    iVar15 = (this->PendingRequests).ArrayNum - uVar13;
    if (iVar15 != 0) {
      memmove(pFVar6,pFVar6 + (longlong)(int)uVar13 * 8,(longlong)iVar15 << 3);
    }
    piVar18 = &(this->PendingRequests).ArrayNum;
    *piVar18 = *piVar18 - uVar13;
    p_Var10 = VulkanDynamicAPI::vkCmdWriteAccelerationStructuresPropertiesKHR;
    pFVar6 = (this->ActiveBLASes).AllocatorInstance.Data;
    pVVar7 = (VkQueryPool_T *)this->QueryPool->_padding_;
    uVar13 = (this->ActiveBLASes).ArrayNum;
    pFVar16 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)local_res10);
    (*p_Var10)(pFVar16->CommandBufferHandle,uVar13,(VkAccelerationStructureKHR_T **)pFVar6,
               VK_QUERY_TYPE_ACCELERATION_STRUCTURE_COMPACTED_SIZE_KHR,pVVar7,0);
    pFVar2 = this->QueryPool;
    TVar17 = FVulkanContextCommon::GetContextSyncPoint((FVulkanContextCommon *)local_res10);
    pTVar25 = &pFVar2->SyncPoint;
    if ((FVulkanSyncPoint *)pTVar25 != TVar17.Reference) {
      pFVar3 = pTVar25->Reference;
      pTVar25->Reference = (FVulkanSyncPoint *)(TVar17.Reference)->_padding_;
      (TVar17.Reference)->_padding_ = 0;
      if (pFVar3 != (FVulkanSyncPoint *)0x0) {
        plVar1 = &pFVar3->_padding_;
        LOCK();
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar9 == 1) && (plVar1 != (longlong *)0x0)) {
          (**(code **)pFVar3->_padding_)(pFVar3,1);
        }
      }
    }
  }
  else {
    pFVar16 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)param_1);
    pFVar2 = this->QueryPool;
    uVar13 = (this->ActiveBLASes).ArrayNum;
    pFVar3 = (pFVar2->SyncPoint).Reference;
    local_res20 = pFVar16;
    if (pFVar3 == (FVulkanSyncPoint *)0x0) goto LAB_145b8221d;
    if (((pFVar3->GraphEvent).Reference == (FBaseGraphTask *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("GraphEvent",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSubmission.h"
                            ,0x55,
                            L"This sync point was not created with a CPU event. Cannot check completion on the CPU."
                           ), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (((pFVar3->GraphEvent).Reference)->field_0xd0 == '\0') goto LAB_145b8221d;
    VVar12 = (*VulkanDynamicAPI::vkGetQueryPoolResults)
                       (*(VkDevice_T **)(pFVar2->_padding_ + 0x30),
                        (VkQueryPool_T *)pFVar2->_padding_,0,uVar13,(ulonglong)uVar13 << 3,
                        (pFVar2->QueryOutput).AllocatorInstance.Data,8,3);
    if (VVar12 != VK_SUCCESS) goto LAB_145b8221d;
    uVar19 = 0;
    uVar23 = uVar19;
    if (0 < (this->ActiveBLASes).ArrayNum) {
      do {
        uVar22 = (uint)uVar23;
        uVar20 = ~uVar22 >> 0x1f;
        uVar13 = 0;
        if ((int)uVar22 < (this->ActiveRequests).ArrayNum) {
          uVar13 = uVar20;
        }
        if (uVar13 == 0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        if (*(longlong *)((this->ActiveRequests).AllocatorInstance.Data + uVar19 * 8) != 0) {
          uVar13 = 0;
          if ((int)uVar22 < (this->ActiveRequests).ArrayNum) {
            uVar13 = uVar20;
          }
          if ((uVar13 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar2 = this->QueryPool;
          this_00 = *(FVulkanRayTracingGeometry **)
                     ((this->ActiveRequests).AllocatorInstance.Data + uVar19 * 8);
          uVar13 = 0;
          if ((int)uVar22 < (pFVar2->QueryOutput).ArrayNum) {
            uVar13 = uVar20;
          }
          if ((uVar13 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar16 = local_res20;
          FVulkanRayTracingGeometry::CompactAccelerationStructure
                    (this_00,local_res20,
                     *(ulong64 *)((pFVar2->QueryOutput).AllocatorInstance.Data + uVar19 * 8));
        }
        uVar19 = uVar19 + 1;
        uVar23 = (ulonglong)(uVar22 + 1);
      } while ((int)(uVar22 + 1) < (this->ActiveBLASes).ArrayNum);
    }
    pFVar2 = this->QueryPool;
    (*VulkanDynamicAPI::vkCmdResetQueryPool)
              (pFVar16->CommandBufferHandle,(VkQueryPool_T *)pFVar2->_padding_,0,
               (uint)pFVar2->_padding_);
    pFVar3 = (pFVar2->SyncPoint).Reference;
    if (pFVar3 != (FVulkanSyncPoint *)0x0) {
      (pFVar2->SyncPoint).Reference = (FVulkanSyncPoint *)0x0;
      plVar1 = &pFVar3->_padding_;
      LOCK();
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar9 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar3->_padding_)();
      }
    }
    if (((pFVar2->QueryOutput).ArrayNum != (int)pFVar2->_padding_) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("QueryOutput.Num() == MaxQueries",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                            ,0x6db,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    memset((pFVar2->QueryOutput).AllocatorInstance.Data,0,(ulonglong)(uint)pFVar2->_padding_ << 3);
    iVar15 = GVulkanRayTracingMaxBatchedCompaction;
    if (GVulkanRayTracingMaxBatchedCompaction < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)GVulkanRayTracingMaxBatchedCompaction);
    }
    piVar18 = &(this->ActiveBLASes).ArrayMax;
    (this->ActiveBLASes).ArrayNum = 0;
    if (*piVar18 != iVar15) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar15,&(this->ActiveBLASes).AllocatorInstance,0,piVar18);
    }
    TVar17 = FVulkanContextCommon::GetContextSyncPoint((FVulkanContextCommon *)local_res10);
    pTVar25 = &this->ActiveRequestsSyncPoint;
    local_58 = local_60;
    if ((FVulkanSyncPoint *)pTVar25 != TVar17.Reference) {
      pFVar3 = pTVar25->Reference;
      pTVar25->Reference = (FVulkanSyncPoint *)(TVar17.Reference)->_padding_;
      (TVar17.Reference)->_padding_ = 0;
      if (pFVar3 != (FVulkanSyncPoint *)0x0) {
        plVar1 = &pFVar3->_padding_;
        LOCK();
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar9 == 1) && (plVar1 != (longlong *)0x0)) {
          (**(code **)pFVar3->_padding_)(pFVar3,1);
          local_58 = local_60;
        }
      }
    }
  }
  if (local_58 != (undefined8 *)0x0) {
    piVar18 = (int *)(local_58 + 1);
    LOCK();
    iVar15 = *piVar18;
    *piVar18 = *piVar18 + -1;
    UNLOCK();
    if (((iVar15 == 1) && (piVar18 != (int *)0x0)) && (local_58 != (undefined8 *)0x0)) {
      (**(code **)*local_58)(local_58,1);
    }
  }
LAB_145b8221d:
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->CS);
  FMemScope::~FMemScope(local_50);
  FLLMScope::~FLLMScope(local_res18);
  return;
}

