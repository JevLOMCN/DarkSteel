// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 9

// FSlateSdfGeneratorImpl @ 142476b80

FSlateSdfGeneratorImpl * __thiscall
FSlateSdfGeneratorImpl::FSlateSdfGeneratorImpl(FSlateSdfGeneratorImpl *this)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FSlateSdfGeneratorImpl *pFVar5;
  ulong64 *puVar6;
  undefined1 local_res8 [8];
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  this->_padding_ = (longlong)&___7FSlateSdfGeneratorImpl__6B_;
  (this->FreeTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreeTasks).ArrayNum = 0;
  (this->FreeTasks).ArrayMax = 0;
  (this->StartedTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StartedTasks).ArrayNum = 0;
  (this->StartedTasks).ArrayMax = 0;
  (this->TasksPool).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TasksPool).ArrayNum = 0;
  (this->TasksPool).ArrayMax = 0;
  local_58 = (undefined1  [8])0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSlateSdfGeneratorImpl::FSlateSdfGeneratorImpl'::`1'::<lambda_5_>_>
               ::_vftable_;
    puVar3[3] = this;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  (this->PoolSizeChangeSink)._padding_ = (longlong)&___7FAutoConsoleVariableSink__6B_;
  (this->PoolSizeChangeSink).Command =
       (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_58;
  (this->PoolSizeChangeSink).Handle.Handle.ID = 0;
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FSlateSdfGeneratorImpl *)(*pcVar1)();
        return pFVar5;
      }
    }
  }
  puVar6 = (ulong64 *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x60))
                     (IConsoleManager::Singleton,local_res8);
  (this->PoolSizeChangeSink).Handle.Handle.ID = *puVar6;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  UpdatePoolSize(this);
  return this;
}

// ~FSlateSdfGeneratorImpl @ 142479cd0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateSdfGeneratorImpl::~FSlateSdfGeneratorImpl(FSlateSdfGeneratorImpl *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FSlateSdfGeneratorImpl__6B_;
  Flush(this);
  piVar1 = &(this->FreeTasks).ArrayMax;
  (this->FreeTasks).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->FreeTasks).AllocatorInstance,0,piVar1);
  }
  DestructItems<TUniquePtr<FAsyncTask<SdfUtils::FSdfGeneratorTask>,TDefaultDelete<FAsyncTask<SdfUtils::FSdfGeneratorTask>_>_>,int>
            ((TUniquePtr<FAsyncTask<SdfUtils::FSdfGeneratorTask>,TDefaultDelete<FAsyncTask<SdfUtils::FSdfGeneratorTask>_>_>
              *)(this->TasksPool).AllocatorInstance.Data,(this->TasksPool).ArrayNum);
  piVar1 = &(this->TasksPool).ArrayMax;
  (this->TasksPool).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->TasksPool).AllocatorInstance,0,piVar1);
  }
  (this->PoolSizeChangeSink)._padding_ = (longlong)&___7FAutoConsoleVariableSink__6B_;
  DestructItems<TUniquePtr<FAsyncTask<SdfUtils::FSdfGeneratorTask>,TDefaultDelete<FAsyncTask<SdfUtils::FSdfGeneratorTask>_>_>,int>
            ((TUniquePtr<FAsyncTask<SdfUtils::FSdfGeneratorTask>,TDefaultDelete<FAsyncTask<SdfUtils::FSdfGeneratorTask>_>_>
              *)(this->TasksPool).AllocatorInstance.Data,(this->TasksPool).ArrayNum);
  pFVar2 = (this->TasksPool).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->StartedTasks).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FreeTasks).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7FSlateSdfGenerator__6B_;
  return;
}

// Flush @ 142488d40

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateSdfGeneratorImpl::Flush(FSlateSdfGeneratorImpl *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FAsyncTaskBase *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  
  uVar12 = 0;
  do {
    if (((int)uVar12 < 0) || ((this->StartedTasks).ArrayNum <= (int)uVar12)) {
      for (uVar12 = 0; (-1 < (int)uVar12 && ((int)uVar12 < (this->StartedTasks).ArrayNum));
          uVar12 = uVar12 + 1) {
        if ((int)uVar12 < 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        lVar13 = (longlong)(int)uVar12;
        FAsyncTaskBase::EnsureCompletion
                  (*(FAsyncTaskBase **)((this->StartedTasks).AllocatorInstance.Data + lVar13 * 8),
                   false,false);
        uVar11 = 0;
        if ((int)uVar12 < (this->StartedTasks).ArrayNum) {
          uVar11 = ~uVar12 >> 0x1f;
        }
        if (uVar11 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        pFVar4 = *(FAsyncTaskBase **)((this->StartedTasks).AllocatorInstance.Data + lVar13 * 8);
        FAsyncTaskBase::CheckIdle(pFVar4);
        SdfUtils::FSdfGeneratorTask::Reset((FSdfGeneratorTask *)&pFVar4[1]._padding_);
        uVar11 = 0;
        if ((int)uVar12 < (this->StartedTasks).ArrayNum) {
          uVar11 = ~uVar12 >> 0x1f;
        }
        if (uVar11 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        pFVar5 = (this->FreeTasks).AllocatorInstance.Data;
        pFVar2 = (this->StartedTasks).AllocatorInstance.Data + lVar13 * 8;
        if ((pFVar5 <= pFVar2) && (pFVar2 < pFVar5 + (longlong)(this->FreeTasks).ArrayMax * 8)) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        iVar10 = (this->FreeTasks).ArrayNum;
        piVar1 = &(this->FreeTasks).ArrayMax;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&(this->FreeTasks).AllocatorInstance,piVar1);
        }
        (this->FreeTasks).ArrayNum = iVar10 + 1;
        *(undefined8 *)((this->FreeTasks).AllocatorInstance.Data + (longlong)iVar10 * 8) =
             *(undefined8 *)pFVar2;
      }
      uVar12 = (this->TasksPool).ArrayNum;
      if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
      }
      piVar1 = &(this->StartedTasks).ArrayMax;
      (this->StartedTasks).ArrayNum = 0;
      if (*piVar1 != uVar12) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar12,&(this->StartedTasks).AllocatorInstance,0,piVar1);
      }
      if ((this->FreeTasks).ArrayNum != (this->TasksPool).ArrayNum) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("FreeTasks.Num() == TasksPool.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\SlateSdfGenerator.cpp"
                           ,0x2cd,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      return;
    }
    uVar11 = ~uVar12 >> 0x1f;
    if ((int)uVar12 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    lVar13 = (longlong)(int)uVar12;
    pFVar4 = *(FAsyncTaskBase **)((this->StartedTasks).AllocatorInstance.Data + lVar13 * 8);
    if (pFVar4->QueuedPool == (FQueuedThreadPool *)0x0) {
LAB_142488e3b:
      uVar9 = 0;
      if ((int)uVar12 < (this->StartedTasks).ArrayNum) {
        uVar9 = uVar11;
      }
      if (uVar9 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      pFVar4 = *(FAsyncTaskBase **)((this->StartedTasks).AllocatorInstance.Data + lVar13 * 8);
      if ((pFVar4->WorkNotFinishedCounter).Counter == 0) {
        FAsyncTaskBase::SyncCompletion(pFVar4,false);
        goto LAB_142488e95;
      }
    }
    else {
      cVar8 = (**(code **)((longlong)*pFVar4->QueuedPool + 0x20))();
      iVar10 = (pFVar4->WorkNotFinishedCounter).Counter;
      if (cVar8 == '\0') {
        if (iVar10 != 0) {
          (**(code **)(pFVar4->_padding_ + 0x40))(pFVar4);
        }
        goto LAB_142488e3b;
      }
      if (iVar10 != 1) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("WorkNotFinishedCounter.GetValue() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                           ,0x1e8,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      LOCK();
      (pFVar4->WorkNotFinishedCounter).Counter = (pFVar4->WorkNotFinishedCounter).Counter + -1;
      UNLOCK();
      FAsyncTaskBase::FinishThreadedWork(pFVar4);
      pFVar4->QueuedPool = (FQueuedThreadPool *)0x0;
LAB_142488e95:
      uVar9 = 0;
      if ((int)uVar12 < (this->StartedTasks).ArrayNum) {
        uVar9 = uVar11;
      }
      if (uVar9 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      pFVar4 = *(FAsyncTaskBase **)((this->StartedTasks).AllocatorInstance.Data + lVar13 * 8);
      FAsyncTaskBase::CheckIdle(pFVar4);
      SdfUtils::FSdfGeneratorTask::Reset((FSdfGeneratorTask *)&pFVar4[1]._padding_);
      uVar9 = 0;
      if ((int)uVar12 < (this->StartedTasks).ArrayNum) {
        uVar9 = uVar11;
      }
      if (uVar9 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      pFVar5 = (this->FreeTasks).AllocatorInstance.Data;
      pFVar2 = (this->StartedTasks).AllocatorInstance.Data + lVar13 * 8;
      if ((pFVar5 <= pFVar2) && (pFVar2 < pFVar5 + (longlong)(this->FreeTasks).ArrayMax * 8)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar10 = (this->FreeTasks).ArrayNum;
      piVar1 = &(this->FreeTasks).ArrayMax;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&(this->FreeTasks).AllocatorInstance,piVar1);
      }
      (this->FreeTasks).ArrayNum = iVar10 + 1;
      *(undefined8 *)((this->FreeTasks).AllocatorInstance.Data + (longlong)iVar10 * 8) =
           *(undefined8 *)pFVar2;
      uVar9 = 0;
      if ((int)uVar12 < (this->StartedTasks).ArrayNum) {
        uVar9 = uVar11;
      }
      if (uVar9 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar3 = (this->StartedTasks).ArrayNum;
      pFVar2 = (this->StartedTasks).AllocatorInstance.Data;
      iVar10 = ~uVar12 + iVar3;
      if (1 < iVar10) {
        iVar10 = 1;
      }
      if (iVar10 != 0) {
        memmove(pFVar2 + lVar13 * 8,pFVar2 + (longlong)(iVar3 - iVar10) * 8,(longlong)iVar10 << 3);
      }
      piVar1 = &(this->StartedTasks).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&(this->StartedTasks).AllocatorInstance,(this->StartedTasks).ArrayNum,
                 &(this->StartedTasks).ArrayMax);
      uVar12 = uVar12 - 1;
    }
    uVar12 = uVar12 + 1;
  } while( true );
}

// MakePlaceholder @ 14249c870

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

ERequestResponse __thiscall
FSlateSdfGeneratorImpl::MakePlaceholder
          (FSlateSdfGeneratorImpl *this,FRequestDescriptor *param_1,FRequestOutputInfo *param_2,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  Contour *pCVar3;
  ERequestResponse EVar4;
  ulong64 uVar5;
  vector<SlateMsdfgen::msdfgen::EdgeHolder,std::allocator<SlateMsdfgen::msdfgen::EdgeHolder>_>
  *pvVar6;
  FSdfGeneratorTask local_100;
  
  local_100.GlyphSdfMapping.MsdfgenTransformation._padding_ = __real_3ff0000000000000;
  local_100.Descriptor.FontFace.Object = (FFreeTypeFace *)0x0;
  local_100.Descriptor.FontFace.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_100.MsdfgenShape.contours._Mypair._Myval2._Mylast = (Contour *)0x0;
  local_100.MsdfgenShape.contours._Mypair._Myval2._Myend = (Contour *)0x0;
  local_100.GlyphSdfMapping.MsdfgenTransformation._padding_ =
       ___xmm_00000000000000003ff0000000000000;
  local_100.GlyphSdfMapping.MsdfgenTransformation._padding_ = _UNK_150689518;
  local_100.GlyphSdfMapping.MsdfgenTransformation.distanceMapping.translate = 0.0;
  local_100.OutputPixels.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_100.OutputPixels.ArrayNum = 0;
  local_100.OutputPixels.ArrayMax = 0;
  local_100.MsdfgenShape.contours._Mypair._Myval2._Myfirst = (Contour *)0x0;
  local_100.MsdfgenShape.inverseYAxis = false;
  local_100.GlyphSdfMapping.MsdfgenTransformation._padding_ =
       ___xmm_3ff00000000000000000000000000000;
  local_100.GlyphSdfMapping.MsdfgenTransformation.distanceMapping.scale = _UNK_15061cbc8;
  local_100.GlyphSdfMapping.SdfBounds.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_100.GlyphSdfMapping.SdfBounds.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_100.DebugName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_100.DebugName.Data.ArrayNum = 0;
  local_100.DebugName.Data.ArrayMax = 0;
  EVar4 = SdfUtils::FSdfGeneratorTask::Prepare(&local_100,param_1,param_2);
  if (EVar4 == SUCCESS) {
    SdfUtils::FSdfGeneratorTask::MakePlaceholder(&local_100,param_3);
  }
  if (local_100.DebugName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.DebugName.Data.AllocatorInstance.Data);
  }
  pCVar3 = local_100.MsdfgenShape.contours._Mypair._Myval2._Mylast;
  pvVar6 = &(local_100.MsdfgenShape.contours._Mypair._Myval2._Myfirst)->edges;
  if (&(local_100.MsdfgenShape.contours._Mypair._Myval2._Myfirst)->edges !=
      (vector<SlateMsdfgen::msdfgen::EdgeHolder,std::allocator<SlateMsdfgen::msdfgen::EdgeHolder>_>
       *)0x0) {
    for (; pvVar6 != &pCVar3->edges; pvVar6 = pvVar6 + 1) {
      std::
      vector<SlateMsdfgen::msdfgen::EdgeHolder,std::allocator<SlateMsdfgen::msdfgen::EdgeHolder>_>::
      _Tidy(pvVar6);
    }
    uVar5 = (((longlong)local_100.MsdfgenShape.contours._Mypair._Myval2._Myend -
             (longlong)local_100.MsdfgenShape.contours._Mypair._Myval2._Myfirst) / 0x18) * 0x18;
    pvVar6 = &(local_100.MsdfgenShape.contours._Mypair._Myval2._Myfirst)->edges;
    if (0xfff < uVar5) {
      pvVar6 = (vector<SlateMsdfgen::msdfgen::EdgeHolder,std::allocator<SlateMsdfgen::msdfgen::EdgeHolder>_>
                *)local_100.MsdfgenShape.contours._Mypair._Myval2._Myfirst[-1].edges._Mypair._Myval2
                  ._Myend;
      uVar5 = uVar5 + 0x27;
      if (0x1f < (ulonglong)
                 ((longlong)local_100.MsdfgenShape.contours._Mypair._Myval2._Myfirst +
                 (-8 - (longlong)pvVar6))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar6,uVar5);
    local_100.MsdfgenShape.contours._Mypair._Myval2._Myfirst = (Contour *)0x0;
    local_100.MsdfgenShape.contours._Mypair._Myval2._Mylast = (Contour *)0x0;
    local_100.MsdfgenShape.contours._Mypair._Myval2._Myend = (Contour *)0x0;
  }
  if (local_100.OutputPixels.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.OutputPixels.AllocatorInstance.Data);
  }
  if (local_100.Descriptor.FontFace.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_100.Descriptor.FontFace.WeakReferenceCount.ReferenceController)->
              WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_100.Descriptor.FontFace.WeakReferenceCount.ReferenceController)->_padding_
                  + 8))(local_100.Descriptor.FontFace.WeakReferenceCount.ReferenceController,1);
    }
  }
  return EVar4;
}

// Respawn @ 1424a65b0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

ERequestResponse __thiscall
FSlateSdfGeneratorImpl::Respawn
          (FSlateSdfGeneratorImpl *this,FRequestDescriptor *param_1,FRequestOutputInfo *param_2)

{
  int *piVar1;
  FAsyncTaskBase *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  ERequestResponse EVar6;
  int iVar7;
  FRequestOutputInfo local_res8;
  FAsyncTaskBase *local_28 [2];
  
  iVar7 = (this->FreeTasks).ArrayNum;
  if (iVar7 == 0) {
    return BUSY;
  }
  local_res8.ImageWidth = 0;
  local_res8.ImageHeight = 0;
  local_res8.BearingX = 0;
  local_res8.BearingY = 0;
  if ((iVar7 < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    EVar6 = (*pcVar4)();
    return EVar6;
  }
  iVar7 = (this->FreeTasks).ArrayNum;
  pFVar2 = *(FAsyncTaskBase **)((this->FreeTasks).AllocatorInstance.Data + (longlong)iVar7 * 8 + -8)
  ;
  (this->FreeTasks).ArrayNum = iVar7 + -1;
  local_28[0] = pFVar2;
  FAsyncTaskBase::CheckIdle(pFVar2);
  EVar6 = SdfUtils::FSdfGeneratorTask::Prepare
                    ((FSdfGeneratorTask *)&pFVar2[1]._padding_,param_1,&local_res8);
  if (EVar6 == SUCCESS) {
    if ((((local_res8.ImageWidth == param_2->ImageWidth) &&
         (local_res8.ImageHeight == param_2->ImageHeight)) &&
        (local_res8.BearingX == param_2->BearingX)) && (local_res8.BearingY == param_2->BearingY)) {
      pFVar3 = (this->StartedTasks).AllocatorInstance.Data;
      if (((pFVar3 <= (FScriptContainerElement *)local_28) &&
          ((FScriptContainerElement *)local_28 <
           pFVar3 + (longlong)(this->StartedTasks).ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        EVar6 = (*pcVar4)();
        return EVar6;
      }
      iVar7 = (this->StartedTasks).ArrayNum;
      piVar1 = &(this->StartedTasks).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->StartedTasks).AllocatorInstance,piVar1);
      }
      (this->StartedTasks).ArrayNum = iVar7 + 1;
      *(FAsyncTaskBase **)((this->StartedTasks).AllocatorInstance.Data + (longlong)iVar7 * 8) =
           local_28[0];
      FAsyncTaskBase::Start(local_28[0],false,GThreadPool,Normal,None,-1,(wchar_t *)0x0);
      return SUCCESS;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\SlateSdfGenerator.cpp"
                       ,0x29a,L"");
    pFVar2 = local_28[0];
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      EVar6 = (*pcVar4)();
      return EVar6;
    }
    FAsyncTaskBase::CheckIdle(local_28[0]);
    SdfUtils::FSdfGeneratorTask::Reset((FSdfGeneratorTask *)&pFVar2[1]._padding_);
    EVar6 = BAD_REQUEST;
  }
  pFVar3 = (this->FreeTasks).AllocatorInstance.Data;
  if (((pFVar3 <= (FScriptContainerElement *)local_28) &&
      ((FScriptContainerElement *)local_28 < pFVar3 + (longlong)(this->FreeTasks).ArrayMax * 8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    EVar6 = (*pcVar4)();
    return EVar6;
  }
  iVar7 = (this->FreeTasks).ArrayNum;
  piVar1 = &(this->FreeTasks).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->FreeTasks).AllocatorInstance,piVar1);
  }
  (this->FreeTasks).ArrayNum = iVar7 + 1;
  *(FAsyncTaskBase **)((this->FreeTasks).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_28[0]
  ;
  return EVar6;
}

// Spawn @ 1424a8040

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

ERequestResponse __thiscall
FSlateSdfGeneratorImpl::Spawn
          (FSlateSdfGeneratorImpl *this,FRequestDescriptor *param_1,FRequestOutputInfo *param_2)

{
  int *piVar1;
  FAsyncTaskBase *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  ERequestResponse EVar5;
  int iVar6;
  FAsyncTaskBase *local_18 [2];
  
  iVar6 = (this->FreeTasks).ArrayNum;
  if (iVar6 == 0) {
    return BUSY;
  }
  if (iVar6 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
  }
  iVar6 = (this->FreeTasks).ArrayNum;
  this_00 = *(FAsyncTaskBase **)
             ((this->FreeTasks).AllocatorInstance.Data + (longlong)iVar6 * 8 + -8);
  (this->FreeTasks).ArrayNum = iVar6 + -1;
  local_18[0] = this_00;
  FAsyncTaskBase::CheckIdle(this_00);
  EVar5 = SdfUtils::FSdfGeneratorTask::Prepare
                    ((FSdfGeneratorTask *)&this_00[1]._padding_,param_1,param_2);
  if (EVar5 == SUCCESS) {
    pFVar2 = (this->StartedTasks).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->StartedTasks).ArrayMax * 8))
    {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        EVar5 = (*pcVar3)();
        return EVar5;
      }
    }
    iVar6 = (this->StartedTasks).ArrayNum;
    piVar1 = &(this->StartedTasks).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->StartedTasks).AllocatorInstance,piVar1);
    }
    (this->StartedTasks).ArrayNum = iVar6 + 1;
    *(FAsyncTaskBase **)((this->StartedTasks).AllocatorInstance.Data + (longlong)iVar6 * 8) =
         local_18[0];
    FAsyncTaskBase::Start(local_18[0],false,GThreadPool,Normal,None,-1,(wchar_t *)0x0);
  }
  else {
    pFVar2 = (this->FreeTasks).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->FreeTasks).ArrayMax * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        EVar5 = (*pcVar3)();
        return EVar5;
      }
    }
    iVar6 = (this->FreeTasks).ArrayNum;
    piVar1 = &(this->FreeTasks).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->FreeTasks).AllocatorInstance,piVar1);
    }
    (this->FreeTasks).ArrayNum = iVar6 + 1;
    *(FAsyncTaskBase **)((this->FreeTasks).AllocatorInstance.Data + (longlong)iVar6 * 8) =
         local_18[0];
  }
  return EVar5;
}

// SpawnWithPlaceholder @ 1424a8290

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

ERequestResponse __thiscall
FSlateSdfGeneratorImpl::SpawnWithPlaceholder
          (FSlateSdfGeneratorImpl *this,FRequestDescriptor *param_1,FRequestOutputInfo *param_2,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  FAsyncTaskBase *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  ERequestResponse EVar6;
  int iVar7;
  FAsyncTaskBase *local_28 [2];
  
  iVar7 = (this->FreeTasks).ArrayNum;
  if (iVar7 == 0) {
    EVar6 = (**(code **)(this->_padding_ + 0x20))();
    if (EVar6 == SUCCESS) {
      EVar6 = PLACEHOLDER_ONLY;
    }
    return EVar6;
  }
  if (iVar7 < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      EVar6 = (*pcVar4)();
      return EVar6;
    }
  }
  iVar7 = (this->FreeTasks).ArrayNum;
  pFVar2 = *(FAsyncTaskBase **)((this->FreeTasks).AllocatorInstance.Data + (longlong)iVar7 * 8 + -8)
  ;
  (this->FreeTasks).ArrayNum = iVar7 + -1;
  local_28[0] = pFVar2;
  FAsyncTaskBase::CheckIdle(pFVar2);
  EVar6 = SdfUtils::FSdfGeneratorTask::Prepare
                    ((FSdfGeneratorTask *)&pFVar2[1]._padding_,param_1,param_2);
  pFVar2 = local_28[0];
  if (EVar6 == SUCCESS) {
    FAsyncTaskBase::CheckIdle(local_28[0]);
    SdfUtils::FSdfGeneratorTask::MakePlaceholder((FSdfGeneratorTask *)&pFVar2[1]._padding_,param_3);
    pFVar3 = (this->StartedTasks).AllocatorInstance.Data;
    if ((pFVar3 <= (FScriptContainerElement *)local_28) &&
       ((FScriptContainerElement *)local_28 < pFVar3 + (longlong)(this->StartedTasks).ArrayMax * 8))
    {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        EVar6 = (*pcVar4)();
        return EVar6;
      }
    }
    iVar7 = (this->StartedTasks).ArrayNum;
    piVar1 = &(this->StartedTasks).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->StartedTasks).AllocatorInstance,piVar1);
    }
    (this->StartedTasks).ArrayNum = iVar7 + 1;
    *(FAsyncTaskBase **)((this->StartedTasks).AllocatorInstance.Data + (longlong)iVar7 * 8) =
         local_28[0];
    FAsyncTaskBase::Start(local_28[0],false,GThreadPool,Normal,None,-1,(wchar_t *)0x0);
  }
  else {
    pFVar3 = (this->FreeTasks).AllocatorInstance.Data;
    if ((pFVar3 <= (FScriptContainerElement *)local_28) &&
       ((FScriptContainerElement *)local_28 < pFVar3 + (longlong)(this->FreeTasks).ArrayMax * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        EVar6 = (*pcVar4)();
        return EVar6;
      }
    }
    iVar7 = (this->FreeTasks).ArrayNum;
    piVar1 = &(this->FreeTasks).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->FreeTasks).AllocatorInstance,piVar1);
    }
    (this->FreeTasks).ArrayNum = iVar7 + 1;
    *(FAsyncTaskBase **)((this->FreeTasks).AllocatorInstance.Data + (longlong)iVar7 * 8) =
         local_28[0];
  }
  return EVar6;
}

// Update @ 1424abe30

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateSdfGeneratorImpl::Update
          (FSlateSdfGeneratorImpl *this,
          TFunctionRef<void___cdecl(FSlateSdfGenerator::FRequestDescriptor,TArray<unsigned_char,TSizedDefaultAllocator<32>_>)>
          *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FAsyncTaskBase *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  
  for (uVar10 = 0; (-1 < (int)uVar10 && ((int)uVar10 < (this->StartedTasks).ArrayNum));
      uVar10 = uVar10 + 1) {
    uVar12 = ~uVar10 >> 0x1f;
    if ((int)uVar10 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    lVar11 = (longlong)(int)uVar10;
    pFVar4 = *(FAsyncTaskBase **)((this->StartedTasks).AllocatorInstance.Data + lVar11 * 8);
    if ((pFVar4->WorkNotFinishedCounter).Counter == 0) {
      FAsyncTaskBase::SyncCompletion(pFVar4,false);
      uVar8 = 0;
      if ((int)uVar10 < (this->StartedTasks).ArrayNum) {
        uVar8 = uVar12;
      }
      if (uVar8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      pFVar4 = *(FAsyncTaskBase **)((this->StartedTasks).AllocatorInstance.Data + lVar11 * 8);
      FAsyncTaskBase::CheckIdle(pFVar4);
      SdfUtils::FSdfGeneratorTask::End((FSdfGeneratorTask *)&pFVar4[1]._padding_,param_1);
      uVar8 = 0;
      if ((int)uVar10 < (this->StartedTasks).ArrayNum) {
        uVar8 = uVar12;
      }
      if (uVar8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      pFVar5 = (this->FreeTasks).AllocatorInstance.Data;
      pFVar2 = (this->StartedTasks).AllocatorInstance.Data + lVar11 * 8;
      if ((pFVar5 <= pFVar2) && (pFVar2 < pFVar5 + (longlong)(this->FreeTasks).ArrayMax * 8)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar9 = (this->FreeTasks).ArrayNum;
      piVar1 = &(this->FreeTasks).ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->FreeTasks).AllocatorInstance,piVar1);
      }
      (this->FreeTasks).ArrayNum = iVar9 + 1;
      *(undefined8 *)((this->FreeTasks).AllocatorInstance.Data + (longlong)iVar9 * 8) =
           *(undefined8 *)pFVar2;
      uVar8 = 0;
      if ((int)uVar10 < (this->StartedTasks).ArrayNum) {
        uVar8 = uVar12;
      }
      if (uVar8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar3 = (this->StartedTasks).ArrayNum;
      pFVar2 = (this->StartedTasks).AllocatorInstance.Data;
      iVar9 = iVar3 + ~uVar10;
      if (1 < iVar9) {
        iVar9 = 1;
      }
      if (iVar9 != 0) {
        memmove(pFVar2 + lVar11 * 8,pFVar2 + (longlong)(iVar3 - iVar9) * 8,(longlong)iVar9 << 3);
      }
      piVar1 = &(this->StartedTasks).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&(this->StartedTasks).AllocatorInstance,(this->StartedTasks).ArrayNum,
                 &(this->StartedTasks).ArrayMax);
      uVar10 = uVar10 - 1;
    }
  }
  return;
}

// UpdatePoolSize @ 1424ace00

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall FSlateSdfGeneratorImpl::UpdatePoolSize(FSlateSdfGeneratorImpl *this)

{
  TArray<FAsyncTask<SdfUtils::FSdfGeneratorTask>_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<TUniquePtr<FAsyncTask<SdfUtils::FSdfGeneratorTask>,TDefaultDelete<FAsyncTask<SdfUtils::FSdfGeneratorTask>_>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  TConsoleVariableData<int> *pTVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  FAsyncTask<SdfUtils::FSdfGeneratorTask> *this_00;
  FAsyncTask<SdfUtils::FSdfGeneratorTask> *pFVar12;
  int *piVar13;
  uint uVar14;
  FAsyncTask<SdfUtils::FSdfGeneratorTask> *local_38;
  undefined8 local_30;
  
  bVar6 = IsInGameThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\SlateSdfGenerator.cpp"
                         ,0x236,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  pTVar5 = CVarSlateSdfTextGeneratorPoolSize.Ref;
  uVar8 = 0;
  if (bSlateSdfTextEnable != false) {
    bVar6 = IsInParallelGameThread();
    if (((!bVar6) && (bVar6 = IsInGameThread(), !bVar6)) &&
       (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0"), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    uVar8 = pTVar5->ShadowedValue[0];
    if ((int)uVar8 < 1) {
      uVar8 = FGenericPlatformMisc::NumberOfWorkerThreadsToSpawn();
    }
  }
  uVar14 = (this->TasksPool).ArrayNum;
  if ((int)uVar8 < (int)uVar14) {
    return false;
  }
  if ((int)uVar14 < (int)uVar8) {
    pTVar1 = &this->FreeTasks;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    piVar13 = &(this->FreeTasks).ArrayMax;
    if (*piVar13 < (int)uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar8,&pTVar1->AllocatorInstance,(this->FreeTasks).ArrayNum,piVar13);
    }
    if ((this->StartedTasks).ArrayMax < (int)uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar8,&(this->StartedTasks).AllocatorInstance,(this->StartedTasks).ArrayNum,
                 &(this->StartedTasks).ArrayMax);
    }
    pTVar2 = &this->TasksPool;
    if ((this->TasksPool).ArrayMax < (int)uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar8,&pTVar2->AllocatorInstance,(this->TasksPool).ArrayNum,
                 &(this->TasksPool).ArrayMax);
    }
    do {
      piVar13 = &(this->TasksPool).ArrayMax;
      this_00 = ::operator_new(0x140,0x40);
      pFVar12 = (FAsyncTask<SdfUtils::FSdfGeneratorTask> *)0x0;
      if (this_00 != (FAsyncTask<SdfUtils::FSdfGeneratorTask> *)0x0) {
        pFVar12 = FAsyncTask<SdfUtils::FSdfGeneratorTask>::FAsyncTask<SdfUtils::FSdfGeneratorTask>
                            (this_00);
      }
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      local_38 = pFVar12;
      if (((pFVar3 <= (FScriptContainerElement *)&local_38) &&
          ((FScriptContainerElement *)&local_38 < pFVar3 + (longlong)*piVar13 * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      uVar9 = (this->TasksPool).ArrayNum;
      if (uVar9 == *piVar13) {
        uVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar2->AllocatorInstance,piVar13);
        (this->TasksPool).ArrayNum = uVar9;
      }
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      (this->TasksPool).ArrayNum = uVar9 + 1;
      *(FAsyncTask<SdfUtils::FSdfGeneratorTask> **)(pFVar3 + (longlong)(int)uVar9 * 8) = local_38;
      local_38 = (FAsyncTask<SdfUtils::FSdfGeneratorTask> *)0x0;
      if ((uVar9 != uVar14) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("AddedIndex == Index",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\SlateSdfGenerator.cpp"
                             ,0x24d,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      uVar10 = 0;
      if ((int)uVar9 < (this->TasksPool).ArrayNum) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      local_30 = *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar9 * 8);
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_30) &&
          ((FScriptContainerElement *)&local_30 < pFVar3 + (longlong)(this->FreeTasks).ArrayMax * 8)
          ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      iVar11 = (this->FreeTasks).ArrayNum;
      if (iVar11 == (this->FreeTasks).ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar1->AllocatorInstance,&(this->FreeTasks).ArrayMax);
        (this->FreeTasks).ArrayNum = iVar11;
      }
      (this->FreeTasks).ArrayNum = iVar11 + 1;
      uVar14 = uVar14 + 1;
      *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar11 * 8) = local_30;
    } while ((int)uVar14 < (int)uVar8);
  }
  return true;
}

