// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 6

// EndFrame @ 145bfccb0

void __thiscall FOpenGLProfiler::EndFrame(FOpenGLProfiler *this,FRHIEndFrameArgs *param_1)

{
  TNode *pTVar1;
  ulong64 uVar2;
  long64 lVar3;
  FRHIBreadcrumbNode *pFVar4;
  undefined8 *puVar5;
  bool bVar6;
  uint uVar7;
  FEndWork *pFVar8;
  FOpenGLRenderQuery *pFVar9;
  FFrame *pFVar10;
  atomic<void_*> this_00;
  FFrameBoundary *pFVar11;
  TNode *pTVar12;
  atomic<void_*> aVar13;
  atomic<void_*> aVar14;
  FBeginWork *pFVar15;
  ulonglong uVar16;
  TSharedRef<FRHIBreadcrumbAllocator,1> *pTVar17;
  TUniquePtr<FOpenGLProfiler::FFrame,TDefaultDelete<FOpenGLProfiler::FFrame>_> *pTVar18;
  atomic<void_*> aVar19;
  atomic<void_*> aVar20;
  undefined8 local_78;
  undefined8 local_70;
  FFrame *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  FFrame *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  TArrayView<UE::RHI::GPUProfiler::FEventStream,int> local_48;
  atomic<void_*> local_38;
  atomic<void_*> aStack_30;
  FQueue_u_0 local_28;
  
  pTVar18 = &this->Current;
  if (this->bEnabled != false) {
    pFVar8 = UE::RHI::GPUProfiler::FEventStream::Emplace<UE::RHI::GPUProfiler::FEvent::FEndWork>
                       (&pTVar18->Ptr->EventStream);
    pFVar9 = InsertQuery(this,&pFVar8->GPUTimestampBOP);
    pTVar18->Ptr->EndWorkQuery = pFVar9;
  }
  if ((this->ExternalGPUTime).bIsSet != false) {
    UE::RHI::GPUProfiler::FEventStream::
    Emplace<UE::RHI::GPUProfiler::FEvent::FFrameTime,unsigned_int_&>
              (&pTVar18->Ptr->EventStream,&(this->ExternalGPUTime).TypedValue);
  }
  (*glFlush)();
  pFVar10 = ::operator_new(0x48);
  aVar20 = (atomic<void_*>)0x0;
  this_00 = aVar20;
  if (pFVar10 != (FFrame *)0x0) {
    this_00 = (atomic<void_*>)FFrame::FFrame(pFVar10,this);
  }
  pFVar11 = UE::RHI::GPUProfiler::FEventStream::
            Emplace<UE::RHI::GPUProfiler::FEvent::FFrameBoundary,__int64_&,unsigned_int_const_&,FRHIBreadcrumbNode_*_const_&,TOptional<__int64>_const_&>
                      (&pTVar18->Ptr->EventStream,(long64 *)((longlong)this_00 + 0x18),
                       &param_1->FrameNumber,(FRHIBreadcrumbNode **)param_1->GPUBreadcrumbs,
                       &param_1->StatsFrame);
  pTVar18->Ptr->FrameBoundaryEvent = pFVar11;
  pTVar12 = ::operator_new(0x10);
  if (pTVar12 != (TNode *)0x0) {
    pTVar12->NextNode = (TNode *)0x0;
    (pTVar12->Item).Ptr = pTVar18->Ptr;
    pTVar18->Ptr = (FFrame *)0x0;
    pTVar1 = (this->Pending).Head;
    (this->Pending).Head = pTVar12;
    pTVar1->NextNode = pTVar12;
  }
  pTVar18 = &this->Current;
  if (pTVar18 !=
      (TUniquePtr<FOpenGLProfiler::FFrame,TDefaultDelete<FOpenGLProfiler::FFrame>_> *)&local_78) {
    pFVar10 = pTVar18->Ptr;
    pTVar18->Ptr = (FFrame *)this_00;
    this_00 = aVar20;
    if (pFVar10 != (FFrame *)0x0) {
      UE::RHI::GPUProfiler::FEventStream::~FEventStream(&pFVar10->EventStream);
      ::operator_delete(pFVar10,0x48);
    }
  }
  while (((((this->Pending).Tail)->NextNode != (TNode *)0x0 &&
          (pTVar18 = &((this->Pending).Tail)->NextNode->Item,
          pTVar18 !=
          (TUniquePtr<FOpenGLProfiler::FFrame,TDefaultDelete<FOpenGLProfiler::FFrame>_> *)0x0)) &&
         ((pFVar9 = pTVar18->Ptr->EndWorkQuery, pFVar9 == (FOpenGLRenderQuery *)0x0 ||
          (bVar6 = FOpenGLRenderQuery::PollQueryResults(pFVar9), bVar6))))) {
    pFVar10 = pTVar18->Ptr;
    if (pFVar10->bDisjoint == false) {
      uStack_50 = 1;
      local_48._12_4_ = uStack_4c;
      local_48.ArrayNum = 1;
      local_58 = pFVar10;
      local_48.DataPtr = &pFVar10->EventStream;
      UE::RHI::GPUProfiler::ProcessEvents(&local_48);
    }
    else {
      local_28 = (pFVar10->EventStream).Queue.field0_0x0;
      local_38 = (atomic<void_*>)0x0;
      aStack_30 = (atomic<void_*>)0x0;
      pFVar11 = pFVar10->FrameBoundaryEvent;
      uVar7 = FLockFreePointerListLIFORoot<64,1>::Pop
                        ((FLockFreePointerListLIFORoot<64,1> *)
                         &UE::RHI::GPUProfiler::FEventStream::FChunk::MemoryPool);
      aVar13 = aVar20;
      if (uVar7 != 0) {
        aVar13 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar7 >> 0xe][uVar7 & 0x3fff].Payload;
        FLockFreeLinkPolicy::FreeLockFreeLink(uVar7);
      }
      if (aVar13 == (atomic<void_*>)0x0) {
        aVar13 = (atomic<void_*>)FMemory::Malloc(0x4000,8);
      }
      memset((void *)aVar13,0xf7,0x4000);
      if (aVar13 == (atomic<void_*>)0x0) {
        aStack_30 = (atomic<void_*>)0x0;
      }
      else {
        *(undefined8 *)aVar13 = 0;
        *(undefined4 *)((longlong)aVar13 + 8) = 0;
        *(undefined8 *)((longlong)aVar13 + 0x30) = 0;
        *(undefined4 *)((longlong)aVar13 + 0x38) = 0;
        *(undefined4 *)((longlong)aVar13 + 0x3c) = 2;
        aStack_30 = aVar13;
      }
      if (local_38 == (atomic<void_*>)0x0) {
        local_38 = aStack_30;
      }
      if (0x197 < *(uint *)((longlong)aStack_30 + 8)) {
        uVar7 = FLockFreePointerListLIFORoot<64,1>::Pop
                          ((FLockFreePointerListLIFORoot<64,1> *)
                           &UE::RHI::GPUProfiler::FEventStream::FChunk::MemoryPool);
        aVar13 = aVar20;
        if (uVar7 != 0) {
          aVar13 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar7 >> 0xe][uVar7 & 0x3fff].Payload;
          FLockFreeLinkPolicy::FreeLockFreeLink(uVar7);
        }
        if (aVar13 == (atomic<void_*>)0x0) {
          aVar13 = (atomic<void_*>)FMemory::Malloc(0x4000,8);
        }
        memset((void *)aVar13,0xf7,0x4000);
        aVar19 = aVar20;
        if (aVar13 != (atomic<void_*>)0x0) {
          *(undefined8 *)aVar13 = 0;
          *(undefined4 *)((longlong)aVar13 + 8) = 0;
          *(undefined8 *)((longlong)aVar13 + 0x30) = 0;
          *(undefined4 *)((longlong)aVar13 + 0x38) = 0;
          *(undefined4 *)((longlong)aVar13 + 0x3c) = 2;
          aVar19 = aVar13;
        }
        *(atomic<void_*> *)aStack_30 = aVar19;
        aStack_30 = aVar19;
      }
      uVar16 = (ulonglong)*(uint *)((longlong)aStack_30 + 8);
      *(uint *)((longlong)aStack_30 + 8) = *(uint *)((longlong)aStack_30 + 8) + 1;
      uVar2 = *(ulong64 *)&pFVar11->FrameNumber;
      lVar3 = pFVar11->StatsFrame;
      pFVar4 = pFVar11->Breadcrumb;
      ((undefined8 *)((longlong)aStack_30 + 0x40))[uVar16 * 5] = pFVar11->CPUTimestamp;
      ((undefined8 *)((longlong)aStack_30 + 0x40) + uVar16 * 5)[1] = uVar2;
      ((undefined8 *)((longlong)aStack_30 + 0x50))[uVar16 * 5] = lVar3;
      ((undefined8 *)((longlong)aStack_30 + 0x50) + uVar16 * 5)[1] = pFVar4;
      *(undefined1 *)((undefined8 *)((longlong)aStack_30 + 0x60) + uVar16 * 5) = 0;
      if (((undefined8 *)((longlong)aStack_30 + 0x58))[uVar16 * 5] != 0) {
        FRHIBreadcrumbAllocatorArray::AddUnique
                  ((FRHIBreadcrumbAllocatorArray *)((longlong)aStack_30 + 0x10),
                   *(FRHIBreadcrumbAllocator **)
                    (((undefined8 *)((longlong)aStack_30 + 0x58))[uVar16 * 5] + 0x28));
      }
      local_68 = (FFrame *)&stack0xffffffffffffffc8;
      uStack_60 = 1;
      local_48._12_4_ = uStack_5c;
      local_48.ArrayNum = 1;
      local_48.DataPtr = (FEventStream *)local_68;
      UE::RHI::GPUProfiler::ProcessEvents(&local_48);
      if (local_38 != (atomic<void_*>)0x0) {
        do {
          aVar19 = local_38;
          puVar5 = (undefined8 *)((longlong)local_38 + 0x30);
          aVar13 = *(atomic<void_*> *)local_38;
          pTVar17 = (TSharedRef<FRHIBreadcrumbAllocator,1> *)((longlong)local_38 + 0x10);
          if (*(TSharedRef<FRHIBreadcrumbAllocator,1> **)((longlong)local_38 + 0x30) !=
              (TSharedRef<FRHIBreadcrumbAllocator,1> *)0x0) {
            pTVar17 = *(TSharedRef<FRHIBreadcrumbAllocator,1> **)((longlong)local_38 + 0x30);
          }
          DestructItems<TSharedRef<FRHIBreadcrumbAllocator,1>,int>
                    (pTVar17,*(int *)((longlong)local_38 + 0x38));
          if ((void *)*puVar5 != (void *)0x0) {
            FMemory::Free((void *)*puVar5);
          }
          memset((void *)aVar19,0xe5,0x4000);
          uVar7 = FLockFreeLinkPolicy::AllocLockFreeLink();
          aVar14 = aVar20;
          if (uVar7 != 0) {
            aVar14 = (atomic<void_*>)
                     (FLockFreeLinkPolicy::LinkAllocator.Pages[uVar7 >> 0xe] + (uVar7 & 0x3fff));
          }
          *(atomic<void_*> *)((longlong)aVar14 + 8) = aVar19;
          FLockFreePointerListLIFORoot<64,1>::Push
                    ((FLockFreePointerListLIFORoot<64,1> *)
                     &UE::RHI::GPUProfiler::FEventStream::FChunk::MemoryPool,uVar7);
          local_38 = aVar13;
        } while (aVar13 != (atomic<void_*>)0x0);
        local_38 = (atomic<void_*>)0x0;
      }
    }
    pTVar12 = ((this->Pending).Tail)->NextNode;
    if (pTVar12 != (TNode *)0x0) {
      pTVar1 = (this->Pending).Tail;
      (this->Pending).Tail = pTVar12;
      pTVar18 = &pTVar12->Item;
      if (pTVar18 !=
          (TUniquePtr<FOpenGLProfiler::FFrame,TDefaultDelete<FOpenGLProfiler::FFrame>_> *)&local_70)
      {
        pFVar10 = pTVar18->Ptr;
        pTVar18->Ptr = (FFrame *)0x0;
        if (pFVar10 != (FFrame *)0x0) {
          UE::RHI::GPUProfiler::FEventStream::~FEventStream(&pFVar10->EventStream);
          ::operator_delete(pFVar10,0x48);
        }
      }
      if (pTVar1 != (TNode *)0x0) {
        pFVar10 = (pTVar1->Item).Ptr;
        if (pFVar10 != (FFrame *)0x0) {
          UE::RHI::GPUProfiler::FEventStream::~FEventStream(&pFVar10->EventStream);
          ::operator_delete(pFVar10,0x48);
        }
        ::operator_delete(pTVar1,0x10);
      }
    }
  }
  if (this->bEnabled != false) {
    pFVar10 = (this->Current).Ptr;
    pFVar15 = UE::RHI::GPUProfiler::FEventStream::
              Emplace<UE::RHI::GPUProfiler::FEvent::FBeginWork,__int64_&>
                        (&pFVar10->EventStream,&(pFVar10->Calibration).CPUTimestamp);
    InsertQuery(this,&pFVar15->GPUTimestampTOP);
  }
  if (this_00 != (atomic<void_*>)0x0) {
    UE::RHI::GPUProfiler::FEventStream::~FEventStream((FEventStream *)this_00);
    ::operator_delete((void *)this_00,0x48);
  }
  return;
}

// GetQuery @ 145c04400

FOpenGLRenderQuery * __thiscall FOpenGLProfiler::GetQuery(FOpenGLProfiler *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FOpenGLRenderQuery *pFVar4;
  int iVar5;
  
  iVar1 = (this->QueryPool).ArrayNum;
  if (iVar1 != 0) {
    if (iVar1 < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FOpenGLRenderQuery *)(*pcVar2)();
        return pFVar4;
      }
    }
    iVar1 = (this->QueryPool).ArrayNum;
    iVar5 = iVar1 + -1;
    pFVar4 = *(FOpenGLRenderQuery **)
              ((this->QueryPool).AllocatorInstance.Data + (longlong)iVar1 * 8 + -8);
    (this->QueryPool).ArrayNum = iVar5;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&(this->QueryPool).AllocatorInstance,iVar5,&(this->QueryPool).ArrayMax);
    return pFVar4;
  }
  pFVar4 = ::operator_new(0x30);
  if (pFVar4 != (FOpenGLRenderQuery *)0x0) {
    pFVar4->Prev = (FOpenGLRenderQuery **)0x0;
    pFVar4->Next = (FOpenGLRenderQuery *)0x0;
    pFVar4->Result = 0;
    pFVar4->Resource = 0;
    pFVar4->Target = (ulong64 *)0x0;
    pFVar4->Type = Profiler;
    pFVar4->LastCachedBOPCounter = (atomic<unsigned_char>)0x0;
    pFVar4->BOPCounter = '\0';
    pFVar4->TOPCounter = '\0';
    return pFVar4;
  }
  return (FOpenGLRenderQuery *)0x0;
}

// InsertQuery @ 145c09aa0

FOpenGLRenderQuery * __thiscall FOpenGLProfiler::InsertQuery(FOpenGLProfiler *this,ulong64 *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FOpenGLRenderQuery *pFVar4;
  int iVar5;
  
  if ((this->bEnabled == false) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bEnabled",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLDevice.cpp"
                         ,0x5c6,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FOpenGLRenderQuery *)(*pcVar2)();
    return pFVar4;
  }
  *param_1 = (ulong64)(this->Current).Ptr;
  iVar1 = (this->QueryPool).ArrayNum;
  if (iVar1 == 0) {
    pFVar4 = ::operator_new(0x30);
    if (pFVar4 != (FOpenGLRenderQuery *)0x0) {
      pFVar4->Type = Profiler;
      pFVar4->LastCachedBOPCounter = (atomic<unsigned_char>)0x0;
      pFVar4->BOPCounter = '\0';
      pFVar4->TOPCounter = '\0';
      pFVar4->Prev = (FOpenGLRenderQuery **)0x0;
      pFVar4->Next = (FOpenGLRenderQuery *)0x0;
      pFVar4->Result = 0;
      pFVar4->Resource = 0;
      pFVar4->Target = (ulong64 *)0x0;
    }
  }
  else {
    if ((iVar1 < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FOpenGLRenderQuery *)(*pcVar2)();
      return pFVar4;
    }
    iVar1 = (this->QueryPool).ArrayNum;
    iVar5 = iVar1 + -1;
    pFVar4 = *(FOpenGLRenderQuery **)
              ((this->QueryPool).AllocatorInstance.Data + (longlong)iVar1 * 8 + -8);
    (this->QueryPool).ArrayNum = iVar5;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&(this->QueryPool).AllocatorInstance,iVar5,&(this->QueryPool).ArrayMax);
  }
  FOpenGLRenderQuery::End(pFVar4,param_1);
  return pFVar4;
}

// ResolveQuery @ 145c2ab20

ulong64 __thiscall
FOpenGLProfiler::ResolveQuery(FOpenGLProfiler *this,ulong64 param_1,ulong64 *param_2,bool param_3)

{
  byte *pbVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  
  if (this->bEnabled == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bEnabled",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLDevice.cpp"
                       ,0x672,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  uVar4 = *param_2;
  pbVar1 = (byte *)(uVar4 + 0x40);
  *pbVar1 = *pbVar1 | param_3;
  if (*pbVar1 != 0) {
    return 0;
  }
  return (longlong)((param_1 - *(longlong *)(uVar4 + 0x28)) * *(longlong *)(uVar4 + 0x20)) /
         1000000000 + *(longlong *)(uVar4 + 0x18);
}

// Setup @ 145c2fb30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOpenGLProfiler::Setup(FOpenGLProfiler *this)

{
  TUniquePtr<FOpenGLProfiler::FFrame,TDefaultDelete<FOpenGLProfiler::FFrame>_> *pTVar1;
  longlong lVar2;
  FFrame *pFVar3;
  FFrame *this_00;
  FBeginWork *pFVar4;
  uint uVar5;
  FQueue_u_0 local_res8 [2];
  uint local_res10 [2];
  long64 local_res18;
  ulong64 local_res20;
  undefined8 local_48 [2];
  TArrayView<UE::RHI::GPUProfiler::FQueue_const_,int> local_38;
  
  this->bEnabled = false;
  (*glGenQueries)(1,local_res10);
  this_00 = (FFrame *)0x0;
  pFVar3 = this_00;
  do {
    local_res18 = 0;
    (*glQueryCounter)(local_res10[0],0x8e28);
    local_res20 = 0;
    (*glGetQueryObjectui64v)(local_res10[0],0x8866,&local_res20);
    (*glGetInteger64v)(0x8e28,&local_res18);
    if ((local_res20 != 0) && (local_res18 != 0)) {
      lVar2 = -(local_res20 - local_res18);
      if (lVar2 < 0) {
        lVar2 = local_res20 - local_res18;
      }
      if (lVar2 < 100000000) {
        this->bEnabled = true;
        break;
      }
    }
    uVar5 = (int)pFVar3 + 1;
    pFVar3 = (FFrame *)(ulonglong)uVar5;
  } while ((int)uVar5 < 10);
  (*glDeleteQueries)(1,local_res10);
  if (this->bEnabled == false) {
    if (2 < (byte)LogOpenGL._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOpenGL);
    }
  }
  else if (3 < (byte)LogOpenGL._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOpenGL);
  }
  local_38.ArrayNum = 1;
  local_38.DataPtr = (FQueue *)local_res8;
  local_res8[0].Value = 0;
  UE::RHI::GPUProfiler::InitializeQueues(&local_38);
  pFVar3 = ::operator_new(0x48);
  if (pFVar3 != (FFrame *)0x0) {
    this_00 = FFrame::FFrame(pFVar3,this);
  }
  pTVar1 = &this->Current;
  if (pTVar1 == (TUniquePtr<FOpenGLProfiler::FFrame,TDefaultDelete<FOpenGLProfiler::FFrame>_> *)
                local_48) {
    if (this_00 == (FFrame *)0x0) goto LAB_145c2fccd;
    UE::RHI::GPUProfiler::FEventStream::~FEventStream(&this_00->EventStream);
  }
  else {
    pFVar3 = pTVar1->Ptr;
    pTVar1->Ptr = this_00;
    if (pFVar3 == (FFrame *)0x0) goto LAB_145c2fccd;
    UE::RHI::GPUProfiler::FEventStream::~FEventStream(&pFVar3->EventStream);
    this_00 = pFVar3;
  }
  ::operator_delete(this_00,0x48);
LAB_145c2fccd:
  if (this->bEnabled != false) {
    pFVar4 = UE::RHI::GPUProfiler::FEventStream::
             Emplace<UE::RHI::GPUProfiler::FEvent::FBeginWork,__int64_&>
                       (&pTVar1->Ptr->EventStream,&(pTVar1->Ptr->Calibration).CPUTimestamp);
    InsertQuery(this,&pFVar4->GPUTimestampTOP);
  }
  return;
}

// Shutdown @ 145c31330

void __thiscall FOpenGLProfiler::Shutdown(FOpenGLProfiler *this)

{
  FOpenGLRenderQuery::PollQueryResults((FOpenGLRenderQuery *)0x0);
  return;
}

