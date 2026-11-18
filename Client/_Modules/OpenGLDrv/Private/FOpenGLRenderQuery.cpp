// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 12

// ~FOpenGLRenderQuery @ 145be9bf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOpenGLRenderQuery::~FOpenGLRenderQuery(FOpenGLRenderQuery *this)

{
  HGLRC pHVar1;
  
  pHVar1 = wglGetCurrentContext();
  if (pHVar1 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  ReleaseGlQuery(this);
  return;
}

// AcquireGlQuery @ 145bf03a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FOpenGLRenderQuery::AcquireGlQuery(FOpenGLRenderQuery *this)

{
  uint uVar1;
  HGLRC pHVar2;
  longlong lVar3;
  
  pHVar2 = wglGetCurrentContext();
  if (pHVar2 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (this->Resource == 0) {
    while ((ActiveQueries.First != (FOpenGLRenderQuery *)0x0 &&
           (GRHIGlobals.MaximumInFlightQueries <= ActiveQueries.Count))) {
      CacheResult(ActiveQueries.First,true);
    }
    ActiveQueries.Count = ActiveQueries.Count + 1;
    lVar3 = (ulonglong)this->Type * 0x10;
    if (*(int *)(&PooledQueries.field_0x8 + lVar3) != 0) {
      uVar1 = TArray<unsigned_int,TSizedDefaultAllocator<32>_>::Pop
                        ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)
                         (&PooledQueries.field_0x0 + lVar3),Default);
      this->Resource = uVar1;
      return;
    }
    (*glGenQueries)(1,&this->Resource);
  }
  return;
}

// Begin @ 145bf21f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOpenGLRenderQuery::Begin(FOpenGLRenderQuery *this)

{
  code *pcVar1;
  bool bVar2;
  HGLRC pHVar3;
  
  pHVar3 = wglGetCurrentContext();
  if (pHVar3 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (this->Prev != (FOpenGLRenderQuery **)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLinked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLQuery.cpp"
                       ,0x87,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AcquireGlQuery(this);
  if (this->Resource == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Resource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLQuery.cpp"
                       ,0x8a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->Type != Occlusion) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLQuery.cpp"
                       ,0x8f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000145bf2308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*glBeginQuery)(0x8914,this->Resource);
  return;
}

// CacheResult @ 145bf3ff0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

bool __thiscall FOpenGLRenderQuery::CacheResult(FOpenGLRenderQuery *this,bool param_1)

{
  int *piVar1;
  EType EVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  FOpenGLDynamicRHI *pFVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  HGLRC pHVar10;
  ulong64 uVar11;
  ulonglong uVar12;
  longlong lVar13;
  TArray<FOpenGLRenderQuery_*,TSizedDefaultAllocator<32>_> *pTVar14;
  uint local_res8 [4];
  uint local_res18 [2];
  ulong64 local_res20;
  FOpenGLRenderQuery *local_38;
  ulong64 local_30;
  
  pHVar10 = wglGetCurrentContext();
  if (pHVar10 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if ((atomic<unsigned_char>)this->BOPCounter == this->LastCachedBOPCounter) {
    if ((this->Prev != (FOpenGLRenderQuery **)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsLinked()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLQuery.cpp"
                           ,0xd6,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
  }
  else {
    if ((this->Resource == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLQuery.cpp"
                           ,0xda,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    if (!param_1) {
      local_res8[0] = 0;
      (*glGetQueryObjectuiv)(this->Resource,0x8867,local_res8);
      if (local_res8[0] == 0) {
        return false;
      }
    }
    pFVar6 = FOpenGLDynamicRHI::Singleton;
    EVar2 = this->Type;
    if (EVar2 == Timestamp) {
      local_30 = 0;
      (*glGetQueryObjectui64v)(this->Resource,0x8866,&local_30);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = local_30;
      lVar13 = SUB168(ZEXT816(0x624dd2f1a9fbe77) * auVar5,8);
      uVar12 = (local_30 - lVar13 >> 1) + lVar13 >> 9;
      if (this->Target != (ulong64 *)0x0) {
        *this->Target = uVar12;
        this->Target = (ulong64 *)0x0;
      }
      this->Result = uVar12;
    }
    else {
      if (EVar2 != Occlusion) {
        if (EVar2 != Profiler) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLQuery.cpp"
                             ,0xed,L"");
          if (!bVar7) {
            return true;
          }
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        local_res20 = 0;
        (*glGetQueryObjectui64v)(this->Resource,0x8866,&local_res20);
        uVar11 = FOpenGLProfiler::ResolveQuery(&pFVar6->Profiler,local_res20,this->Target,false);
        if (this->Target != (ulong64 *)0x0) {
          *this->Target = uVar11;
          this->Target = (ulong64 *)0x0;
        }
        this->Result = uVar11;
        ReleaseGlQuery(this);
        pTVar14 = &(pFVar6->Profiler).QueryPool;
        this->LastCachedBOPCounter = (atomic<unsigned_char>)this->BOPCounter;
        pFVar3 = (pTVar14->AllocatorInstance).Data;
        local_38 = this;
        if (((pFVar3 <= (FScriptContainerElement *)&local_38) &&
            ((FScriptContainerElement *)&local_38 <
             pFVar3 + (longlong)(pFVar6->Profiler).QueryPool.ArrayMax * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        iVar9 = (pFVar6->Profiler).QueryPool.ArrayNum;
        piVar1 = &(pFVar6->Profiler).QueryPool.ArrayMax;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar14->AllocatorInstance,piVar1);
        }
        (pFVar6->Profiler).QueryPool.ArrayNum = iVar9 + 1;
        *(FOpenGLRenderQuery **)((pTVar14->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_38
        ;
        return true;
      }
      local_res18[0] = 0;
      (*glGetQueryObjectuiv)(this->Resource,0x8866,local_res18);
      if (this->Target != (ulonglong *)0x0) {
        *this->Target = (ulonglong)local_res18[0];
        this->Target = (ulong64 *)0x0;
      }
      this->Result = (ulonglong)local_res18[0];
    }
    ReleaseGlQuery(this);
    this->LastCachedBOPCounter = (atomic<unsigned_char>)this->BOPCounter;
  }
  return true;
}

// Cleanup @ 145bf5950

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FOpenGLRenderQuery::Cleanup(void)

{
  uint *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  HGLRC pHVar5;
  uint *puVar6;
  int *piVar7;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  
  pHVar5 = wglGetCurrentContext();
  if (pHVar5 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (ActiveQueries.Count != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActiveQueries.Count == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLQuery.cpp"
                       ,0x1a2,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  piVar7 = (int *)&PooledQueries.field_0x8;
  do {
    puVar6 = *(uint **)(piVar7 + -2);
    iVar2 = *piVar7;
    puVar1 = puVar6 + iVar2;
    while( true ) {
      if (*piVar7 != iVar2) {
        `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (puVar6 == puVar1) break;
      local_res10[0] = *puVar6;
      (*glDeleteQueries)(1,local_res10);
      puVar6 = puVar6 + 1;
    }
    *piVar7 = 0;
    if (piVar7[1] < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)(piVar7 + -2),0,piVar7 + 1);
    }
    bVar4 = piVar7 != (int *)&PooledQueries.field_0x28;
    piVar7 = piVar7 + 4;
  } while (bVar4);
  return;
}

// End @ 145bfca20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOpenGLRenderQuery::End(FOpenGLRenderQuery *this,ulong64 *param_1)

{
  EType EVar1;
  FActiveQueries *pFVar2;
  code *pcVar3;
  bool bVar4;
  HGLRC pHVar5;
  
  pHVar5 = wglGetCurrentContext();
  if (pHVar5 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  AcquireGlQuery(this);
  if (this->Resource == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Resource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLQuery.cpp"
                       ,0xa8,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  EVar1 = this->Type;
  if (EVar1 != Timestamp) {
    if (EVar1 == Occlusion) {
      if (this->Resource == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLQuery.cpp"
                           ,0xad,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      (*glEndQuery)(0x8914);
      goto LAB_145bfcaf2;
    }
    if (EVar1 != Profiler) goto LAB_145bfcaf2;
  }
  (*glQueryCounter)(this->Resource,0x8e28);
LAB_145bfcaf2:
  this->BOPCounter = this->BOPCounter + '\x01';
  pFVar2 = (FActiveQueries *)this->Prev;
  this->Target = param_1;
  if (pFVar2 != (FActiveQueries *)0x0) {
    if (ActiveQueries.Last == this) {
      if (pFVar2 == &ActiveQueries) {
        ActiveQueries.Last = (FOpenGLRenderQuery *)0x0;
      }
      else {
        ActiveQueries.Last = (FOpenGLRenderQuery *)&pFVar2[-1].Count;
      }
    }
    if (this->Next != (FOpenGLRenderQuery *)0x0) {
      this->Next->Prev = this->Prev;
    }
    if (this->Prev != (FOpenGLRenderQuery **)0x0) {
      *this->Prev = this->Next;
    }
    this->Next = (FOpenGLRenderQuery *)0x0;
    this->Prev = (FOpenGLRenderQuery **)0x0;
  }
  if (ActiveQueries.First == (FOpenGLRenderQuery *)0x0) {
    if (ActiveQueries.Last != (FOpenGLRenderQuery *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ActiveQueries.Last",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLQuery.cpp"
                         ,0x1e,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (this->Next != (FOpenGLRenderQuery *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Next == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLQuery.cpp"
                         ,0x1f,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    ActiveQueries.First = this;
    this->Prev = &ActiveQueries.First;
    ActiveQueries.Last = this;
    return;
  }
  if (ActiveQueries.Last == (FOpenGLRenderQuery *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActiveQueries.Last",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLQuery.cpp"
                       ,0x26,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((ActiveQueries.Last)->Next != (FOpenGLRenderQuery *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActiveQueries.Last->Next == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLQuery.cpp"
                       ,0x27,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (ActiveQueries.Last)->Next = this;
  this->Prev = &(ActiveQueries.Last)->Next;
  ActiveQueries.Last = this;
  return;
}

// IsCached @ 145c0a9f0

bool __thiscall FOpenGLRenderQuery::IsCached(FOpenGLRenderQuery *this)

{
  return (atomic<unsigned_char>)this->BOPCounter == this->LastCachedBOPCounter;
}

// Link @ 145c0b1f0

void __thiscall FOpenGLRenderQuery::Link(FOpenGLRenderQuery *this)

{
  FActiveQueries *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  pFVar1 = (FActiveQueries *)this->Prev;
  if (pFVar1 != (FActiveQueries *)0x0) {
    if (ActiveQueries.Last == this) {
      if (pFVar1 == &ActiveQueries) {
        ActiveQueries.Last = (FOpenGLRenderQuery *)0x0;
      }
      else {
        ActiveQueries.Last = (FOpenGLRenderQuery *)&pFVar1[-1].Count;
      }
    }
    if (this->Next != (FOpenGLRenderQuery *)0x0) {
      this->Next->Prev = this->Prev;
    }
    if (this->Prev != (FOpenGLRenderQuery **)0x0) {
      *this->Prev = this->Next;
    }
    this->Next = (FOpenGLRenderQuery *)0x0;
    this->Prev = (FOpenGLRenderQuery **)0x0;
  }
  if (ActiveQueries.First == (FOpenGLRenderQuery *)0x0) {
    if (ActiveQueries.Last != (FOpenGLRenderQuery *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ActiveQueries.Last",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLQuery.cpp"
                         ,0x1e,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (this->Next != (FOpenGLRenderQuery *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Next == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLQuery.cpp"
                         ,0x1f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    ActiveQueries.First = this;
    this->Prev = &ActiveQueries.First;
    ActiveQueries.Last = this;
    return;
  }
  if (ActiveQueries.Last == (FOpenGLRenderQuery *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActiveQueries.Last",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLQuery.cpp"
                       ,0x26,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((ActiveQueries.Last)->Next != (FOpenGLRenderQuery *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActiveQueries.Last->Next == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLQuery.cpp"
                       ,0x27,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (ActiveQueries.Last)->Next = this;
  this->Prev = &(ActiveQueries.Last)->Next;
  ActiveQueries.Last = this;
  return;
}

// PollQueryResults @ 145c162b0

bool __cdecl FOpenGLRenderQuery::PollQueryResults(FOpenGLRenderQuery *param_1)

{
  FOpenGLRenderQuery *pFVar1;
  bool bVar2;
  HGLRC pHVar3;
  bool bVar4;
  
  pHVar3 = wglGetCurrentContext();
  if (pHVar3 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    return false;
  }
  if ((param_1 != (FOpenGLRenderQuery *)0x0) &&
     ((atomic<unsigned_char>)param_1->BOPCounter == param_1->LastCachedBOPCounter)) {
    return true;
  }
  if (ActiveQueries.First != (FOpenGLRenderQuery *)0x0) {
    bVar4 = -1 < CpuChannel->Enabled;
    if (bVar4) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&::__CpuProfilerEventSpecId393,"PollQueryResults",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLQuery.cpp"
                 ,0x189);
      FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId393);
    }
    do {
      pFVar1 = ActiveQueries.First;
      bVar2 = CacheResult(ActiveQueries.First,false);
      if (!bVar2) {
        bVar2 = false;
LAB_145c16396:
        if (bVar4) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        return bVar2;
      }
      if (pFVar1 == param_1) {
        bVar2 = true;
        goto LAB_145c16396;
      }
    } while (ActiveQueries.First != (FOpenGLRenderQuery *)0x0);
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return param_1 == (FOpenGLRenderQuery *)0x0;
}

// ReleaseGlQuery @ 145c28460

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOpenGLRenderQuery::ReleaseGlQuery(FOpenGLRenderQuery *this)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  HGLRC pHVar5;
  longlong lVar6;
  ForAnyElementType *pFVar7;
  
  pHVar5 = wglGetCurrentContext();
  if (pHVar5 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  puVar1 = &this->Resource;
  if (this->Resource == 0) {
    if (this->Prev != (FOpenGLRenderQuery **)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsLinked()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLQuery.cpp"
                         ,0x75,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  else {
    if (ActiveQueries.Count < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActiveQueries.Count > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLQuery.cpp"
                         ,0x79,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    ActiveQueries.Count = ActiveQueries.Count + -1;
    lVar6 = (ulonglong)this->Type * 0x10;
    pFVar7 = (ForAnyElementType *)(&PooledQueries.field_0x0 + lVar6);
    if ((pFVar7->Data <= puVar1) &&
       (puVar1 < pFVar7->Data + (longlong)*(int *)(&PooledQueries.field_0xc + lVar6) * 4)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = *(int *)(&PooledQueries.field_0x8 + lVar6);
    if (iVar4 == *(int *)(&PooledQueries.field_0xc + lVar6)) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,pFVar7,(int *)(&PooledQueries.field_0xc + lVar6));
    }
    *(int *)(&PooledQueries.field_0x8 + lVar6) = iVar4 + 1;
    *(uint *)(pFVar7->Data + (longlong)iVar4 * 4) = *puVar1;
    *puVar1 = 0;
    Unlink(this);
  }
  return;
}

// SetResult @ 145c2eed0

void __thiscall FOpenGLRenderQuery::SetResult(FOpenGLRenderQuery *this,ulong64 param_1)

{
  if (this->Target != (ulong64 *)0x0) {
    *this->Target = param_1;
    this->Target = (ulong64 *)0x0;
  }
  this->Result = param_1;
  ReleaseGlQuery(this);
  this->LastCachedBOPCounter = (atomic<unsigned_char>)this->BOPCounter;
  return;
}

// Unlink @ 145c34de0

void __thiscall FOpenGLRenderQuery::Unlink(FOpenGLRenderQuery *this)

{
  FActiveQueries *pFVar1;
  
  pFVar1 = (FActiveQueries *)this->Prev;
  if (pFVar1 != (FActiveQueries *)0x0) {
    if (ActiveQueries.Last == this) {
      if (pFVar1 == &ActiveQueries) {
        ActiveQueries.Last = (FOpenGLRenderQuery *)0x0;
      }
      else {
        ActiveQueries.Last = (FOpenGLRenderQuery *)&pFVar1[-1].Count;
      }
    }
    if (this->Next != (FOpenGLRenderQuery *)0x0) {
      this->Next->Prev = this->Prev;
    }
    if (this->Prev != (FOpenGLRenderQuery **)0x0) {
      *this->Prev = this->Next;
    }
    this->Next = (FOpenGLRenderQuery *)0x0;
    this->Prev = (FOpenGLRenderQuery **)0x0;
  }
  return;
}

