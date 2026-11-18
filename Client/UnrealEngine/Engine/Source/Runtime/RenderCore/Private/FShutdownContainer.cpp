// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 4

// AbandonCompileJobs @ 145e8a430

void __thiscall
UE::ShaderPipeline::FShutdownContainer::AbandonCompileJobs
          (FShutdownContainer *this,
          TArray<UE::ShaderPipeline::CompileJob,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<UE::ShaderPipeline::CompileJob,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  LOCK();
  this->TotalRemainingTasks = (atomic<int>)((int)this->TotalRemainingTasks + param_1->ArrayNum);
  UNLOCK();
  pTVar1 = &this->ShutdownReadCompileTasks;
  if (pTVar1 == param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x986,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar2 = param_1->ArrayNum;
  if (iVar2 != 0) {
    iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x2d8,8,iVar2,&pTVar1->AllocatorInstance,
                       &(this->ShutdownReadCompileTasks).ArrayNum,
                       &(this->ShutdownReadCompileTasks).ArrayMax);
    memmove((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x2d8,
            (param_1->AllocatorInstance).Data,(longlong)iVar2 * 0x2d8);
    param_1->ArrayNum = 0;
  }
  return;
}

// Get @ 145e9cb30

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

TUniquePtr<UE::ShaderPipeline::FShutdownContainer,TDefaultDelete<UE::ShaderPipeline::FShutdownContainer>_>
* __cdecl UE::ShaderPipeline::FShutdownContainer::Get(void)

{
  TDoubleLinkedList<FPipelineCacheFileFormatPSORead_*> *this;
  FScriptContainerElement *pFVar1;
  TUniquePtr<UE::ShaderPipeline::FShutdownContainer,TDefaultDelete<UE::ShaderPipeline::FShutdownContainer>_>
  TVar2;
  FShutdownContainer *pFVar3;
  TUniquePtr<UE::ShaderPipeline::FShutdownContainer,TDefaultDelete<UE::ShaderPipeline::FShutdownContainer>_>
  TVar4;
  
  if (Instance.Ptr != (FShutdownContainer *)0x0) {
    return &Instance;
  }
  pFVar3 = ::operator_new(0x38);
  TVar4.Ptr = (FShutdownContainer *)0x0;
  if (pFVar3 != (FShutdownContainer *)0x0) {
    *(undefined8 *)pFVar3 = 0;
    (pFVar3->ShutdownFetchTasks)._padding_ =
         (longlong)&___7__TDoubleLinkedList_PEAUFPipelineCacheFileFormatPSORead____6B_;
    *(undefined8 *)&(pFVar3->ShutdownFetchTasks).ListSize = 0;
    (pFVar3->ShutdownReadCompileTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->ShutdownReadCompileTasks).ArrayNum = 0;
    (pFVar3->ShutdownReadCompileTasks).ArrayMax = 0;
    (pFVar3->ShutdownFetchTasks).HeadNode = (TDoubleLinkedListNode *)0x0;
    (pFVar3->ShutdownFetchTasks).TailNode = (TDoubleLinkedListNode *)0x0;
    TVar4.Ptr = pFVar3;
  }
  TVar2.Ptr = Instance.Ptr;
  if (Instance.Ptr != (FShutdownContainer *)0x0) {
    this = &(Instance.Ptr)->ShutdownFetchTasks;
    Instance.Ptr = TVar4.Ptr;
    TDoubleLinkedList<FPipelineCacheFileFormatPSORead_*>::
    ~TDoubleLinkedList<FPipelineCacheFileFormatPSORead_*>(this);
    DestructItems<UE::ShaderPipeline::CompileJob,int>
              ((CompileJob *)((TVar2.Ptr)->ShutdownReadCompileTasks).AllocatorInstance.Data,
               ((TVar2.Ptr)->ShutdownReadCompileTasks).ArrayNum);
    pFVar1 = ((TVar2.Ptr)->ShutdownReadCompileTasks).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::operator_delete(TVar2.Ptr,0x38);
    TVar4 = Instance;
  }
  Instance.Ptr = TVar4.Ptr;
  return &Instance;
}

// ShutdownAndWait @ 145eb6450

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall UE::ShaderPipeline::FShutdownContainer::ShutdownAndWait(FShutdownContainer *this)

{
  FShaderPipelineCacheArchive *pFVar1;
  FScriptContainerElement *pFVar2;
  TDoubleLinkedListNode *pTVar3;
  FPipelineCacheFileFormatPSORead *pFVar4;
  IAsyncReadRequest *pIVar5;
  FArchive *pFVar6;
  TDoubleLinkedListNode *pTVar7;
  code *pcVar8;
  TUniquePtr<UE::ShaderPipeline::FShutdownContainer,TDefaultDelete<UE::ShaderPipeline::FShutdownContainer>_>
  TVar9;
  bool bVar10;
  uint uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  longlong lVar16;
  CompileJob *pCVar17;
  CompileJob *this_00;
  undefined1 local_res10 [8];
  uint local_res18;
  undefined8 local_res20;
  
  this_00 = (CompileJob *)(this->ShutdownReadCompileTasks).AllocatorInstance.Data;
  local_res18 = (this->ShutdownReadCompileTasks).ArrayNum;
  uVar13 = (ulonglong)(int)local_res18;
  pCVar17 = this_00 + uVar13;
  do {
    if ((this->ShutdownReadCompileTasks).ArrayNum != (int)uVar13) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UE::ShaderPipeline::CompileJob,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    if (this_00 == pCVar17) {
      DestructItems<UE::ShaderPipeline::CompileJob,int>
                ((CompileJob *)(this->ShutdownReadCompileTasks).AllocatorInstance.Data,
                 (this->ShutdownReadCompileTasks).ArrayNum);
      (this->ShutdownReadCompileTasks).ArrayNum = 0;
      if ((this->ShutdownReadCompileTasks).ArrayMax != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x2d8,8,0,&(this->ShutdownReadCompileTasks).AllocatorInstance,0,
                   &(this->ShutdownReadCompileTasks).ArrayMax);
      }
      for (pTVar3 = (this->ShutdownFetchTasks).HeadNode; pTVar3 != (TDoubleLinkedListNode *)0x0;
          pTVar3 = pTVar3->NextNode) {
        pFVar4 = pTVar3->Value;
        pIVar5 = (pFVar4->ReadRequest).Object;
        if ((pIVar5 != (IAsyncReadRequest *)0x0) && (pIVar5->bCompleteAndCallbackCalled == false)) {
          (**(code **)(*(longlong *)pIVar5 + 0x10))(pIVar5,0);
        }
        if (pFVar4 != (FPipelineCacheFileFormatPSORead *)0x0) {
          pFVar6 = pFVar4->Ar;
          if (pFVar6 != (FArchive *)0x0) {
            (*(code *)**(undefined8 **)pFVar6)(pFVar6,1);
            pFVar4->Ar = (FArchive *)0x0;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pFVar4->ReadRequest).SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pFVar4->ParentFileHandle).SharedReferenceCount.ReferenceController);
          pFVar2 = (pFVar4->Data).AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          ::operator_delete(pFVar4,0x40);
        }
      }
      pTVar3 = (this->ShutdownFetchTasks).HeadNode;
      while (pTVar3 != (TDoubleLinkedListNode *)0x0) {
        pTVar7 = pTVar3->NextNode;
        ::operator_delete(pTVar3,0x18);
        (this->ShutdownFetchTasks).HeadNode = pTVar7;
        pTVar3 = pTVar7;
      }
      (this->ShutdownFetchTasks).TailNode = (TDoubleLinkedListNode *)0x0;
      (this->ShutdownFetchTasks).HeadNode = (TDoubleLinkedListNode *)0x0;
      (**(code **)((this->ShutdownFetchTasks)._padding_ + 8))(&this->ShutdownFetchTasks,0);
      LOCK();
      this->TotalRemainingTasks = (atomic<int>)0x0;
      TVar9 = Instance;
      UNLOCK();
      Instance.Ptr = (FShutdownContainer *)0x0;
      if (TVar9.Ptr != (FShutdownContainer *)0x0) {
        TDoubleLinkedList<FPipelineCacheFileFormatPSORead_*>::
        ~TDoubleLinkedList<FPipelineCacheFileFormatPSORead_*>(&(TVar9.Ptr)->ShutdownFetchTasks);
        DestructItems<UE::ShaderPipeline::CompileJob,int>
                  ((CompileJob *)((TVar9.Ptr)->ShutdownReadCompileTasks).AllocatorInstance.Data,
                   ((TVar9.Ptr)->ShutdownReadCompileTasks).ArrayNum);
        pFVar2 = ((TVar9.Ptr)->ShutdownReadCompileTasks).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        ::operator_delete(TVar9.Ptr,0x38);
      }
      return;
    }
    pFVar1 = this_00->ReadRequests;
    if (pFVar1 != (FShaderPipelineCacheArchive *)0x0) {
      uVar15 = 0;
      if ((pFVar1->ExternalReadDependencies).ArrayNum != 0) {
        do {
          uVar11 = 0;
          if ((int)uVar15 < (pFVar1->ExternalReadDependencies).ArrayNum) {
            uVar11 = ~uVar15 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar2 = (pFVar1->ExternalReadDependencies).AllocatorInstance.Data;
          local_res20 = 0;
          lVar16 = (longlong)(int)uVar15 * 0x30;
          Core::Private::Function::CheckCallable(*(void **)(pFVar2 + lVar16));
          pcVar8 = *(code **)(pFVar2 + lVar16);
          pFVar14 = *(FScriptContainerElement **)(pFVar2 + lVar16 + 0x10 + 0x18);
          if (pFVar14 == (FScriptContainerElement *)0x0) {
            pFVar14 = pFVar2 + lVar16 + 0x10;
          }
          uVar12 = (**(code **)(*(longlong *)pFVar14 + 8))();
          (*pcVar8)(uVar12,&local_res20);
          uVar15 = uVar15 + 1;
        } while (uVar15 < (uint)(pFVar1->ExternalReadDependencies).ArrayNum);
      }
      CompileJob::ReleasePreloadedShaders(this_00);
      pFVar1 = this_00->ReadRequests;
      if (pFVar1 != (FShaderPipelineCacheArchive *)0x0) {
        pFVar1->_padding_ = (longlong)&___7FShaderPipelineCacheArchive__6B_;
        DestructItems<TFunction<bool___cdecl(double)>,int>
                  ((TFunction<bool___cdecl(double)> *)
                   (pFVar1->ExternalReadDependencies).AllocatorInstance.Data,
                   (pFVar1->ExternalReadDependencies).ArrayNum);
        pFVar2 = (pFVar1->ExternalReadDependencies).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        FArchive::~FArchive((FArchive *)pFVar1);
        ::operator_delete(pFVar1,0xa0);
      }
      this_00->ReadRequests = (FShaderPipelineCacheArchive *)0x0;
    }
    uVar13 = (ulonglong)local_res18;
    this_00 = this_00 + 1;
  } while( true );
}

// Tick @ 145eb9460

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall UE::ShaderPipeline::FShutdownContainer::Tick(FShutdownContainer *this)

{
  int iVar1;
  FArchive *pFVar2;
  FPipelineCacheFileFormatPSORead *pFVar3;
  FShaderPipelineCacheArchive *this_00;
  TDoubleLinkedListNode *pTVar4;
  FScriptContainerElement *pFVar5;
  TDoubleLinkedListNode *pTVar6;
  code *pcVar7;
  TDoubleLinkedListNode *pTVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  
  iVar1 = (this->ShutdownReadCompileTasks).ArrayNum;
  lVar13 = 0;
  if ((0 < iVar1) && (uVar11 = 0, iVar1 != 0)) {
    do {
      uVar12 = ~uVar11 >> 0x1f;
      uVar10 = 0;
      if ((int)uVar11 < (this->ShutdownReadCompileTasks).ArrayNum) {
        uVar10 = uVar12;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar14 = (longlong)(int)uVar11 * 0x2d8;
      if ((*(longlong *)((this->ShutdownReadCompileTasks).AllocatorInstance.Data + lVar14 + 0x2c8)
           == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("ShutdownReadCompileTasks[i].ReadRequests",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderPipelineCache.cpp"
                             ,0x21f,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar10 = 0;
      if ((int)uVar11 < (this->ShutdownReadCompileTasks).ArrayNum) {
        uVar10 = uVar12;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      bVar9 = FShaderPipelineCacheArchive::PollExternalReadDependencies
                        (*(FShaderPipelineCacheArchive **)
                          ((this->ShutdownReadCompileTasks).AllocatorInstance.Data + lVar14 + 0x2c8)
                        );
      if (bVar9) {
        uVar10 = 0;
        if ((int)uVar11 < (this->ShutdownReadCompileTasks).ArrayNum) {
          uVar10 = uVar12;
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
        CompileJob::ReleasePreloadedShaders
                  ((CompileJob *)((this->ShutdownReadCompileTasks).AllocatorInstance.Data + lVar14))
        ;
        uVar10 = 0;
        if ((int)uVar11 < (this->ShutdownReadCompileTasks).ArrayNum) {
          uVar10 = uVar12;
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
        pFVar2 = *(FArchive **)
                  ((this->ShutdownReadCompileTasks).AllocatorInstance.Data + lVar14 + 0x2c8);
        if (pFVar2 != (FArchive *)0x0) {
          *(undefined ***)pFVar2 = &___7FShaderPipelineCacheArchive__6B_;
          DestructItems<TFunction<bool___cdecl(double)>,int>
                    (*(TFunction<bool___cdecl(double)> **)(pFVar2 + 1),*(int *)&pFVar2[1].field_0x8)
          ;
          if (*(void **)(pFVar2 + 1) != (void *)0x0) {
            FMemory::Free(*(void **)(pFVar2 + 1));
          }
          FArchive::~FArchive(pFVar2);
          ::operator_delete(pFVar2,0xa0);
        }
        uVar10 = 0;
        if ((int)uVar11 < (this->ShutdownReadCompileTasks).ArrayNum) {
          uVar10 = uVar12;
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
        *(undefined8 *)((this->ShutdownReadCompileTasks).AllocatorInstance.Data + lVar14 + 0x2c8) =
             0;
        uVar10 = 0;
        if ((int)uVar11 < (this->ShutdownReadCompileTasks).ArrayNum) {
          uVar10 = uVar12;
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
        TArray<UE::ShaderPipeline::CompileJob,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (&this->ShutdownReadCompileTasks,uVar11);
        lVar13 = lVar13 + 1;
      }
      else {
        uVar11 = uVar11 + 1;
      }
      uVar10 = (this->ShutdownReadCompileTasks).ArrayNum;
    } while (uVar11 < uVar10);
    if ((uVar10 == 0) && ((this->ShutdownReadCompileTasks).ArrayMax != 0)) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x2d8,8,0,&(this->ShutdownReadCompileTasks).AllocatorInstance,0,
                 &(this->ShutdownReadCompileTasks).ArrayMax);
    }
  }
  if (0 < (this->ShutdownFetchTasks).ListSize) {
    pTVar4 = (this->ShutdownFetchTasks).HeadNode;
    while (pTVar8 = pTVar4, pTVar8 != (TDoubleLinkedListNode *)0x0) {
      pFVar3 = pTVar8->Value;
      if ((pFVar3 == (FPipelineCacheFileFormatPSORead *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("PSORead",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderPipelineCache.cpp"
                             ,0x23b,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      this_00 = (FShaderPipelineCacheArchive *)pFVar3->Ar;
      if ((this_00 == (FShaderPipelineCacheArchive *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Archive",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderPipelineCache.cpp"
                             ,0x23d,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pTVar4 = pTVar8->NextNode;
      if ((pFVar3->bReadCompleted != false) ||
         (bVar9 = FShaderPipelineCacheArchive::PollExternalReadDependencies(this_00), bVar9)) {
        if (pFVar3 != (FPipelineCacheFileFormatPSORead *)0x0) {
          pFVar2 = pFVar3->Ar;
          if (pFVar2 != (FArchive *)0x0) {
            (*(code *)**(undefined8 **)pFVar2)(pFVar2,1);
            pFVar3->Ar = (FArchive *)0x0;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pFVar3->ReadRequest).SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pFVar3->ParentFileHandle).SharedReferenceCount.ReferenceController);
          pFVar5 = (pFVar3->Data).AllocatorInstance.Data;
          if (pFVar5 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar5);
          }
          ::operator_delete(pFVar3,0x40);
        }
        if (pTVar8 != (TDoubleLinkedListNode *)0x0) {
          if ((this->ShutdownFetchTasks).ListSize == 1) {
            TDoubleLinkedList<FPipelineCacheFileFormatPSORead_*>::Empty(&this->ShutdownFetchTasks);
          }
          else {
            pTVar6 = (this->ShutdownFetchTasks).HeadNode;
            if (pTVar8 == pTVar6) {
              pTVar6 = pTVar6->NextNode;
              (this->ShutdownFetchTasks).HeadNode = pTVar6;
              pTVar6->PrevNode = (TDoubleLinkedListNode *)0x0;
            }
            else {
              pTVar6 = (this->ShutdownFetchTasks).TailNode;
              if (pTVar8 == pTVar6) {
                pTVar6 = pTVar6->PrevNode;
                (this->ShutdownFetchTasks).TailNode = pTVar6;
                pTVar6->NextNode = (TDoubleLinkedListNode *)0x0;
              }
              else {
                pTVar8->NextNode->PrevNode = pTVar8->PrevNode;
                pTVar8->PrevNode->NextNode = pTVar8->NextNode;
              }
            }
            ::operator_delete(pTVar8,0x18);
            (**(code **)((this->ShutdownFetchTasks)._padding_ + 8))
                      (&this->ShutdownFetchTasks,(this->ShutdownFetchTasks).ListSize + -1);
          }
        }
        lVar13 = lVar13 + 1;
      }
    }
  }
  if (0 < lVar13) {
    LOCK();
    this->TotalRemainingTasks = (atomic<int>)((int)this->TotalRemainingTasks - (int)lVar13);
    UNLOCK();
  }
  return;
}

