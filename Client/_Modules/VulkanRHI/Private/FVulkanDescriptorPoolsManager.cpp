// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 4

// ~FVulkanDescriptorPoolsManager @ 145b4d640

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
FVulkanDescriptorPoolsManager::~FVulkanDescriptorPoolsManager(FVulkanDescriptorPoolsManager *this)

{
  int iVar1;
  FVulkanDescriptorPoolSetContainer *this_00;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->PoolSets).AllocatorInstance.Data;
  iVar1 = (this->PoolSets).ArrayNum;
  pFVar2 = pFVar3 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->PoolSets).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FVulkanDescriptorPoolSetContainer_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    this_00 = *(FVulkanDescriptorPoolSetContainer **)pFVar3;
    if (this_00 != (FVulkanDescriptorPoolSetContainer *)0x0) {
      FVulkanDescriptorPoolSetContainer::~FVulkanDescriptorPoolSetContainer(this_00);
      ::operator_delete(this_00,0x60);
    }
    pFVar3 = pFVar3 + 8;
  }
  (this->PoolSets).ArrayNum = 0;
  if ((this->PoolSets).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->PoolSets).AllocatorInstance,0,&(this->PoolSets).ArrayMax);
  }
  pFVar2 = (this->PoolSets).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x000145b4d707. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CS);
  return;
}

// AcquirePoolSetContainer @ 145b56440

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

FVulkanDescriptorPoolSetContainer * __thiscall
FVulkanDescriptorPoolsManager::AcquirePoolSetContainer(FVulkanDescriptorPoolsManager *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FVulkanDescriptorPoolSetContainer *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  FVulkanDescriptorPoolSetContainer *local_38 [2];
  
  lpCriticalSection = &this->CS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar7 = (this->PoolSets).AllocatorInstance.Data;
  iVar5 = (this->PoolSets).ArrayNum;
  pFVar2 = pFVar7 + (longlong)iVar5 * 8;
  while( true ) {
    if ((this->PoolSets).ArrayNum != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FVulkanDescriptorPoolSetContainer_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar2) break;
    pFVar6 = *(FVulkanDescriptorPoolSetContainer **)pFVar7;
    if (pFVar6->bUsed == false) {
      pFVar6->bUsed = true;
      pFVar6->LastFrameUsed = GFrameNumberRenderThread;
LAB_145b565cd:
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return pFVar6;
    }
    pFVar7 = pFVar7 + 8;
  }
  local_38[0] = ::operator_new(0x60);
  if (local_38[0] != (FVulkanDescriptorPoolSetContainer *)0x0) {
    local_38[0]->Device = this->Device;
    *(undefined8 *)&local_38[0]->TypedDescriptorPools = 0;
    *(undefined8 *)&(local_38[0]->TypedDescriptorPools).field_0x8 = 0;
    *(undefined8 *)&(local_38[0]->TypedDescriptorPools).field_0x20 = 0;
    *(undefined4 *)&(local_38[0]->TypedDescriptorPools).field_0x28 = 0;
    *(undefined4 *)&(local_38[0]->TypedDescriptorPools).field_0x2c = 0x80;
    *(undefined4 *)&(local_38[0]->TypedDescriptorPools).field_0x30 = 0xffffffff;
    *(undefined4 *)&(local_38[0]->TypedDescriptorPools).field_0x34 = 0;
    *(undefined8 *)&(local_38[0]->TypedDescriptorPools).field_0x40 = 0;
    *(undefined4 *)&(local_38[0]->TypedDescriptorPools).field_0x48 = 0;
    local_38[0]->LastFrameUsed = GFrameNumberRenderThread;
    local_38[0]->bUsed = true;
  }
  pFVar2 = (this->PoolSets).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
      ((FScriptContainerElement *)local_38 < pFVar2 + (longlong)(this->PoolSets).ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FVulkanDescriptorPoolSetContainer *)(*pcVar3)();
    return pFVar6;
  }
  iVar5 = (this->PoolSets).ArrayNum;
  piVar1 = &(this->PoolSets).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->PoolSets).AllocatorInstance,piVar1);
  }
  pFVar2 = (this->PoolSets).AllocatorInstance.Data;
  (this->PoolSets).ArrayNum = iVar5 + 1;
  *(FVulkanDescriptorPoolSetContainer **)(pFVar2 + (longlong)iVar5 * 8) = local_38[0];
  pFVar6 = local_38[0];
  goto LAB_145b565cd;
}

// GC @ 145b67e80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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

void __thiscall FVulkanDescriptorPoolsManager::GC(FVulkanDescriptorPoolsManager *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  int iVar2;
  FVulkanDescriptorPoolSetContainer *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  void *pvVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FAsyncTask<FVulkanDescriptorPoolsManager::FVulkanAsyncPoolSetDeletionWorker> *pFVar10;
  FName *pFVar11;
  TStatIdData *pTVar12;
  ulonglong uVar13;
  uint uVar14;
  FAsyncTask<FVulkanDescriptorPoolsManager::FVulkanAsyncPoolSetDeletionWorker> *pFVar15;
  uint uVar16;
  longlong lVar17;
  FName local_res8;
  
  lpCriticalSection = &this->CS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar14 = (this->PoolSets).ArrayNum - 1;
  if (-1 < (int)uVar14) {
    lVar17 = (longlong)(int)uVar14 * 8;
    do {
      uVar16 = ~uVar14 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar14 < (this->PoolSets).ArrayNum) {
        uVar8 = uVar16;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar3 = *(FVulkanDescriptorPoolSetContainer **)
                ((this->PoolSets).AllocatorInstance.Data + lVar17);
      if ((pFVar3->bUsed == false) && (3 < GFrameNumberRenderThread - pFVar3->LastFrameUsed)) {
        pFVar15 = (FAsyncTask<FVulkanDescriptorPoolsManager::FVulkanAsyncPoolSetDeletionWorker> *)
                  0x0;
        uVar8 = 0;
        if ((int)uVar14 < (this->PoolSets).ArrayNum) {
          uVar8 = uVar16;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar2 = (this->PoolSets).ArrayNum;
        pFVar4 = (this->PoolSets).AllocatorInstance.Data;
        iVar9 = iVar2 + ~uVar14;
        if (1 < iVar9) {
          iVar9 = 1;
        }
        if (iVar9 != 0) {
          memmove(pFVar4 + (longlong)(int)uVar14 * 8,pFVar4 + (longlong)(iVar2 - iVar9) * 8,
                  (longlong)iVar9 << 3);
        }
        piVar1 = &(this->PoolSets).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->PoolSets).AllocatorInstance,(this->PoolSets).ArrayNum,
                   &(this->PoolSets).ArrayMax);
        pFVar10 = this->AsyncDeletionTask;
        if (pFVar10 ==
            (FAsyncTask<FVulkanDescriptorPoolsManager::FVulkanAsyncPoolSetDeletionWorker> *)0x0) {
          pFVar10 = ::operator_new(0x78);
          if (pFVar10 !=
              (FAsyncTask<FVulkanDescriptorPoolsManager::FVulkanAsyncPoolSetDeletionWorker> *)0x0) {
            uVar13 = (ulonglong)_tls_index;
            pFVar10->_padding_ = 0;
            pFVar10->_padding_ = (longlong)&___7FAsyncTaskBase__6B_;
            pFVar10->_padding_ = (longlong)&TStatId::TStatId_NAME_None;
            pFVar10->_padding_ =
                 (longlong)
                 &
                 ___7__FAsyncTask_VFVulkanAsyncPoolSetDeletionWorker_FVulkanDescriptorPoolsManager____6B_
            ;
            pvVar6 = ThreadLocalStoragePointer;
            *(undefined4 *)&pFVar10->_padding_ = 0;
            pFVar10->_padding_ = 0;
            pFVar10->_padding_ = 0;
            lVar17 = *(longlong *)((longlong)pvVar6 + uVar13 * 8);
            *(undefined2 *)&pFVar10->_padding_ = 3;
            pFVar10->_padding_ = -1;
            pFVar10->_padding_ = 0;
            (pFVar10->Task).PoolSet = pFVar3;
            if ((*(int *)(lVar17 + 0x9d4c) <
                 `public:_struct_TStatId___cdecl_FVulkanDescriptorPoolsManager::FVulkanAsyncPoolSetDeletionWorker::GetStatId(void)const___ptr64'
                 ::__l2::_thread_safe_static_guard_0__) &&
               (_Init_thread_header(&`public:_struct_TStatId___cdecl_FVulkanDescriptorPoolsManager::FVulkanAsyncPoolSetDeletionWorker::GetStatId(void)const___ptr64'
                                     ::__l2::_thread_safe_static_guard_0__),
               `public:_struct_TStatId___cdecl_FVulkanDescriptorPoolsManager::FVulkanAsyncPoolSetDeletionWorker::GetStatId(void)const___ptr64'
               ::__l2::_thread_safe_static_guard_0__ == -1)) {
              FThreadSafeStaticStat<`FVulkanDescriptorPoolsManager::FVulkanAsyncPoolSetDeletionWorker::GetStatId'::__l2::FStat_FVulkanAsyncPoolSetDeletionWorker>
              ::
              FThreadSafeStaticStat<_FVulkanDescriptorPoolsManager::FVulkanAsyncPoolSetDeletionWorker::GetStatId_::__l2::FStat_FVulkanAsyncPoolSetDeletionWorker>
                        (&`public:_struct_TStatId___cdecl_FVulkanDescriptorPoolsManager::FVulkanAsyncPoolSetDeletionWorker::GetStatId(void)const___ptr64'
                          ::__l2::StatPtr_FVulkanAsyncPoolSetDeletionWorker);
              _Init_thread_footer(&`public:_struct_TStatId___cdecl_FVulkanDescriptorPoolsManager::FVulkanAsyncPoolSetDeletionWorker::GetStatId(void)const___ptr64'
                                   ::__l2::_thread_safe_static_guard_0__);
            }
            pTVar12 = _StatPtr_FVulkanAsyncPoolSetDeletionWorker;
            if (_StatPtr_FVulkanAsyncPoolSetDeletionWorker == (TStatIdData *)0x0) {
              pFVar11 = ::FName::FName(&local_res8,"FVulkanAsyncPoolSetDeletionWorker");
              pTVar12 = FThreadSafeStaticStatBase::DoSetup
                                  ((FThreadSafeStaticStatBase *)
                                   &`public:_struct_TStatId___cdecl_FVulkanDescriptorPoolsManager::FVulkanAsyncPoolSetDeletionWorker::GetStatId(void)const___ptr64'
                                    ::__l2::StatPtr_FVulkanAsyncPoolSetDeletionWorker,*pFVar11,
                                   L"FVulkanAsyncPoolSetDeletionWorker",
                                   "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",
                                   L"ThreadPool Async Tasks",true,true,ST_int64,true,false,
                                   MCR_Invalid);
            }
            pFVar10->_padding_ = (longlong)pTVar12;
            pFVar15 = pFVar10;
          }
          this->AsyncDeletionTask = pFVar15;
        }
        else {
          if (((FThreadSafeCounter *)&pFVar10->_padding_)->Counter == 0) {
            FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)pFVar10,false);
          }
          else {
            FAsyncTaskBase::EnsureCompletion((FAsyncTaskBase *)this->AsyncDeletionTask,true,false);
          }
          pFVar15 = this->AsyncDeletionTask;
          FAsyncTaskBase::CheckIdle((FAsyncTaskBase *)pFVar15);
          if (((pFVar15->Task).PoolSet != (FVulkanDescriptorPoolSetContainer *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("PoolSet == nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.h"
                                 ,0x1a9,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          (pFVar15->Task).PoolSet = pFVar3;
        }
        FAsyncTaskBase::Start
                  ((FAsyncTaskBase *)this->AsyncDeletionTask,false,GThreadPool,Normal,None,-1,
                   (wchar_t *)0x0);
        break;
      }
      lVar17 = lVar17 + -8;
      uVar14 = uVar14 - 1;
    } while (-1 < (int)uVar14);
  }
                    /* WARNING: Could not recover jumptable at 0x000145b681bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// ReleasePoolSet @ 145b788d0

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
FVulkanDescriptorPoolsManager::ReleasePoolSet
          (FVulkanDescriptorPoolsManager *this,FVulkanDescriptorPoolSetContainer *param_1)

{
  FVulkanDescriptorPoolSetContainer::Reset(param_1);
  param_1->bUsed = false;
  return;
}

