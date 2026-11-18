// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 14

// CreateOrAddCommand<FMassDeferredCommand<1>_> @ 1471c20c0

FMassDeferredCommand<1> * __thiscall
FMassCommandBuffer::CreateOrAddCommand<FMassDeferredCommand<1>_>(FMassCommandBuffer *this)

{
  FName FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  FMassDeferredCommand<1> *pFVar7;
  undefined8 *puVar8;
  FName *pFVar9;
  undefined8 *puVar10;
  uint uVar11;
  longlong lVar12;
  FName local_res8;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassDeferredCommand<1>_>(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassDeferredCommand<1>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassDeferredCommand<1>_>(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    LOCK();
    UNLOCK();
    `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassDeferredCommand<1>_>(void)'
    ::__l2::ThisTypesStaticIndex = (uint)FMassBatchedCommand::CommandsCounter;
    FMassBatchedCommand::CommandsCounter =
         (atomic<unsigned_int>)((int)FMassBatchedCommand::CommandsCounter + 1);
    _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassDeferredCommand<1>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  uVar4 = `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassDeferredCommand<1>_>(void)'
          ::__l2::ThisTypesStaticIndex;
  lVar12 = (longlong)
           (int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassDeferredCommand<1>_>(void)'
                ::__l2::ThisTypesStaticIndex;
  puVar10 = (undefined8 *)0x0;
  if (((int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassDeferredCommand<1>_>(void)'
            ::__l2::ThisTypesStaticIndex < 0) ||
     ((this->CommandInstances).ArrayNum <=
      (int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassDeferredCommand<1>_>(void)'
           ::__l2::ThisTypesStaticIndex)) {
    TArray<TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_>,TSizedDefaultAllocator<32>_>
    ::AddZeroed(&this->CommandInstances,
                (`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassDeferredCommand<1>_>(void)'
                 ::__l2::ThisTypesStaticIndex - (this->CommandInstances).ArrayNum) + 1);
    uVar11 = ~uVar4 >> 0x1f;
  }
  else {
    uVar11 = ~`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassDeferredCommand<1>_>(void)'
              ::__l2::ThisTypesStaticIndex >> 0x1f;
    uVar6 = 0;
    if ((int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassDeferredCommand<1>_>(void)'
             ::__l2::ThisTypesStaticIndex < (this->CommandInstances).ArrayNum) {
      uVar6 = uVar11;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FMassDeferredCommand<1> *)(*pcVar3)();
      return pFVar7;
    }
    if (*(longlong *)((this->CommandInstances).AllocatorInstance.Data + lVar12 * 8) != 0) {
      uVar6 = 0;
      if ((int)uVar4 < (this->CommandInstances).ArrayNum) {
        uVar6 = uVar11;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FMassDeferredCommand<1> *)(*pcVar3)();
        return pFVar7;
      }
      return *(FMassDeferredCommand<1> **)
              ((this->CommandInstances).AllocatorInstance.Data + lVar12 * 8);
    }
  }
  puVar8 = ::operator_new(0x28);
  if (puVar8 != (undefined8 *)0x0) {
    pFVar9 = ::FName::FName(&local_res8,L"BatchedDeferredCommand");
    FVar1 = *pFVar9;
    *puVar8 = &___7__FMassDeferredCommand__00__6B_;
    *(undefined2 *)(puVar8 + 1) = 0x100;
    *(FName *)((longlong)puVar8 + 0xc) = FVar1;
    puVar8[3] = 0;
    puVar8[4] = 0;
    puVar10 = puVar8;
  }
  uVar6 = 0;
  if ((int)uVar4 < (this->CommandInstances).ArrayNum) {
    uVar6 = uVar11;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FMassDeferredCommand<1> *)(*pcVar3)();
    return pFVar7;
  }
  pFVar2 = (this->CommandInstances).AllocatorInstance.Data;
  puVar8 = *(undefined8 **)(pFVar2 + lVar12 * 8);
  *(undefined8 **)(pFVar2 + lVar12 * 8) = puVar10;
  if (puVar8 != (undefined8 *)0x0) {
    (**(code **)*puVar8)(puVar8,1);
  }
  uVar6 = 0;
  if ((int)uVar4 < (this->CommandInstances).ArrayNum) {
    uVar6 = uVar11;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FMassDeferredCommand<1> *)(*pcVar3)();
    return pFVar7;
  }
  return *(FMassDeferredCommand<1> **)((this->CommandInstances).AllocatorInstance.Data + lVar12 * 8)
  ;
}

// CreateOrAddCommand<UE::Mass::Command::FGroupEntities> @ 1471c2320

FGroupEntities * __thiscall
FMassCommandBuffer::CreateOrAddCommand<UE::Mass::Command::FGroupEntities>(FMassCommandBuffer *this)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  FGroupEntities *pFVar7;
  FGroupEntities *this_00;
  longlong lVar8;
  uint uVar9;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<UE::Mass::Command::FGroupEntities>(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<UE::Mass::Command::FGroupEntities>(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<UE::Mass::Command::FGroupEntities>(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    LOCK();
    UNLOCK();
    `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<UE::Mass::Command::FGroupEntities>(void)'
    ::__l2::ThisTypesStaticIndex = (uint)FMassBatchedCommand::CommandsCounter;
    FMassBatchedCommand::CommandsCounter =
         (atomic<unsigned_int>)((int)FMassBatchedCommand::CommandsCounter + 1);
    _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<UE::Mass::Command::FGroupEntities>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  uVar4 = `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<UE::Mass::Command::FGroupEntities>(void)'
          ::__l2::ThisTypesStaticIndex;
  lVar8 = (longlong)
          (int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<UE::Mass::Command::FGroupEntities>(void)'
               ::__l2::ThisTypesStaticIndex;
  pFVar7 = (FGroupEntities *)0x0;
  if (((int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<UE::Mass::Command::FGroupEntities>(void)'
            ::__l2::ThisTypesStaticIndex < 0) ||
     ((this->CommandInstances).ArrayNum <=
      (int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<UE::Mass::Command::FGroupEntities>(void)'
           ::__l2::ThisTypesStaticIndex)) {
    TArray<TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_>,TSizedDefaultAllocator<32>_>
    ::AddZeroed(&this->CommandInstances,
                (`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<UE::Mass::Command::FGroupEntities>(void)'
                 ::__l2::ThisTypesStaticIndex - (this->CommandInstances).ArrayNum) + 1);
    uVar9 = ~uVar4 >> 0x1f;
  }
  else {
    uVar9 = ~`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<UE::Mass::Command::FGroupEntities>(void)'
             ::__l2::ThisTypesStaticIndex >> 0x1f;
    uVar6 = 0;
    if ((int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<UE::Mass::Command::FGroupEntities>(void)'
             ::__l2::ThisTypesStaticIndex < (this->CommandInstances).ArrayNum) {
      uVar6 = uVar9;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FGroupEntities *)(*pcVar3)();
      return pFVar7;
    }
    if (*(longlong *)((this->CommandInstances).AllocatorInstance.Data + lVar8 * 8) != 0) {
      uVar6 = 0;
      if ((int)uVar4 < (this->CommandInstances).ArrayNum) {
        uVar6 = uVar9;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FGroupEntities *)(*pcVar3)();
        return pFVar7;
      }
      return *(FGroupEntities **)((this->CommandInstances).AllocatorInstance.Data + lVar8 * 8);
    }
  }
  this_00 = ::operator_new(0x80);
  if (this_00 != (FGroupEntities *)0x0) {
    pFVar7 = UE::Mass::Command::FGroupEntities::FGroupEntities(this_00);
  }
  uVar6 = 0;
  if ((int)uVar4 < (this->CommandInstances).ArrayNum) {
    uVar6 = uVar9;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FGroupEntities *)(*pcVar3)();
    return pFVar7;
  }
  pFVar1 = (this->CommandInstances).AllocatorInstance.Data;
  puVar2 = *(undefined8 **)(pFVar1 + lVar8 * 8);
  *(FGroupEntities **)(pFVar1 + lVar8 * 8) = pFVar7;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  uVar6 = 0;
  if ((int)uVar4 < (this->CommandInstances).ArrayNum) {
    uVar6 = uVar9;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FGroupEntities *)(*pcVar3)();
    return pFVar7;
  }
  return *(FGroupEntities **)((this->CommandInstances).AllocatorInstance.Data + lVar8 * 8);
}

// PushCommand<FMassCommandDestroyEntities> @ 1471d29c0

void __thiscall
FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities>
          (FMassCommandBuffer *this,FMassEntityHandle param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  DWORD DVar4;
  int iVar5;
  FMassCommandDestroyEntities *pFVar6;
  FLLMScope local_res8 [2];
  FMassEntityHandle local_res10;
  FMemScope local_res18 [2];
  FMassEntityHandle local_28 [2];
  
  if (this->bIsFlushing != false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsFlushing() == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                       ,0x84,
                       L"Trying to push commands is not supported while the given buffer is being flushed"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  DVar4 = GetCurrentThreadId();
  if (this->OwnerThreadId != DVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("OwnerThreadId == FPlatformTLS::GetCurrentThreadId()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                       ,0x84,
                       L"Commands can be pushed only in the same thread where the command buffer was created."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_res10 = param_1;
  bVar3 = UE::Mass::Debug::FBreakpoint::CheckDestroyEntityBreakpoints(&local_res10);
  if (bVar3) {
    UE::Mass::Debug::FBreakpoint::DebugBreak();
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities>(FMassEntityHandle)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities>(FMassEntityHandle)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities>(FMassEntityHandle)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities>(FMassEntityHandle)___ptr64'
                      ::__l2::LLMScope_Name135,L"Mass/PushCommand");
      _Init_thread_footer(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities>(FMassEntityHandle)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities>(FMassEntityHandle)___ptr64'
             ::__l2::LLMScope_Name135,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities>(FMassEntityHandle)___ptr64'
              ::__l2::LLMScope_Name135,true);
  pFVar6 = CreateOrAddCommand<FMassCommandDestroyEntities>(this);
  LOCK();
  puVar1 = &pFVar6->field_0x18;
  iVar5 = *(int *)puVar1;
  *(int *)puVar1 = *(int *)puVar1 + 0x100000;
  UNLOCK();
  local_28[0] = param_1;
  if ((iVar5 != 0) && (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x72,
                       L"Acquiring a write access while there are ongoing read or write access");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((*(FMassEntityHandle **)&pFVar6->field_0x20 <= local_28) &&
     (local_28 < *(FMassEntityHandle **)&pFVar6->field_0x20 + *(int *)&pFVar6->field_0x2c)) {
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
  iVar5 = *(int *)&pFVar6->field_0x28;
  if (iVar5 == *(int *)&pFVar6->field_0x2c) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&pFVar6->field_0x20,(int *)&pFVar6->field_0x2c);
  }
  *(int *)&pFVar6->field_0x28 = iVar5 + 1;
  *(FMassEntityHandle *)(*(longlong *)&pFVar6->field_0x20 + (longlong)iVar5 * 8) = local_28[0];
  pFVar6->field_0x8 = 1;
  LOCK();
  puVar1 = &pFVar6->field_0x18;
  iVar5 = *(int *)puVar1;
  *(int *)puVar1 = *(int *)puVar1 + -0x100000;
  UNLOCK();
  if ((iVar5 != 0x100000) && (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)
     ) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x7d,
                       L"Another thread asked to have a read or write access during this write access"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->ActiveCommandsCounter = this->ActiveCommandsCounter + 1;
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// FMassCommandBuffer @ 1471d7660

FMassCommandBuffer * __thiscall FMassCommandBuffer::FMassCommandBuffer(FMassCommandBuffer *this)

{
  DWORD DVar1;
  
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)this,4000);
  this->PendingBatchCommandsDetector = (FRWFallbackSafeAccessDetectorDefinition)0x0;
  (this->CommandInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CommandInstances).ArrayNum = 0;
  (this->CommandInstances).ArrayMax = 0;
  (this->AppendedCommandInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AppendedCommandInstances).ArrayNum = 0;
  (this->AppendedCommandInstances).ArrayMax = 0;
  this->ActiveCommandsCounter = 0;
  this->bIsFlushing = false;
  DVar1 = GetCurrentThreadId();
  this->OwnerThreadId = DVar1;
  return this;
}

// ~FMassCommandBuffer @ 1471dfdb0

void __thiscall FMassCommandBuffer::~FMassCommandBuffer(FMassCommandBuffer *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 local_res8 [32];
  
  if (0 < this->ActiveCommandsCounter) {
    local_res8[0] = 0;
    `FMassCommandBuffer::~FMassCommandBuffer'::__l2::<lambda_1>::operator()(local_res8);
  }
  CleanUp(this);
  DestructItems<TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_>,int>
            ((TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_> *)
             (this->AppendedCommandInstances).AllocatorInstance.Data,
             (this->AppendedCommandInstances).ArrayNum);
  pFVar1 = (this->AppendedCommandInstances).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_>,int>
            ((TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_> *)
             (this->CommandInstances).AllocatorInstance.Data,(this->CommandInstances).ArrayNum);
  pFVar1 = (this->CommandInstances).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (this->PendingBatchCommandsDetector != (FRWFallbackSafeAccessDetectorDefinition)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicValue.load(std::memory_order_relaxed) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x3a,L"Detector cannot be destroyed while other threads access it");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001471dfe3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// CleanUp @ 147202610

void __thiscall FMassCommandBuffer::CleanUp(FMassCommandBuffer *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  piVar1 = &(this->CommandInstances).ArrayMax;
  pFVar3 = (this->CommandInstances).AllocatorInstance.Data;
  iVar2 = (this->CommandInstances).ArrayNum;
  if ((this->CommandInstances).ArrayMax < 0) {
    DestructItems<TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_>,int>
              ((TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_> *)pFVar3,iVar2)
    ;
    (this->CommandInstances).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->CommandInstances).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_>,int>
              ((TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_> *)pFVar3,iVar2)
    ;
    (this->CommandInstances).ArrayNum = 0;
  }
  piVar1 = &(this->AppendedCommandInstances).ArrayMax;
  pFVar3 = (this->AppendedCommandInstances).AllocatorInstance.Data;
  iVar2 = (this->AppendedCommandInstances).ArrayNum;
  if ((this->AppendedCommandInstances).ArrayMax < 0) {
    DestructItems<TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_>,int>
              ((TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_> *)pFVar3,iVar2)
    ;
    (this->AppendedCommandInstances).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->AppendedCommandInstances).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_>,int>
              ((TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_> *)pFVar3,iVar2)
    ;
    (this->AppendedCommandInstances).ArrayNum = 0;
  }
  this->ActiveCommandsCounter = 0;
  return;
}

// DestroyEntities @ 147211f40

void __thiscall
FMassCommandBuffer::DestroyEntities
          (FMassCommandBuffer *this,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  DWORD DVar5;
  FMassCommandDestroyEntities *pFVar6;
  FLLMScope local_res8 [2];
  FMemScope local_res18;
  
  if (this->bIsFlushing != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsFlushing() == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                       ,0x77,
                       L"Trying to push commands is not supported while the given buffer is being flushed"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  DVar5 = GetCurrentThreadId();
  if (this->OwnerThreadId != DVar5) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("OwnerThreadId == FPlatformTLS::GetCurrentThreadId()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                       ,0x77,
                       L"Commands can be pushed only in the same thread where the command buffer was created."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name122,L"Mass/PushCommand");
      _Init_thread_footer(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
             ::__l2::LLMScope_Name122,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res18,
             &`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
              ::__l2::LLMScope_Name122,true);
  pFVar6 = CreateOrAddCommand<FMassCommandDestroyEntities>(this);
  LOCK();
  puVar1 = &pFVar6->field_0x18;
  iVar2 = *(int *)puVar1;
  *(int *)puVar1 = *(int *)puVar1 + 0x100000;
  UNLOCK();
  if ((iVar2 != 0) && (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x72,
                       L"Acquiring a write access while there are ongoing read or write access");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
  Append<FMassEntityHandle,TSizedDefaultAllocator<32>_>
            ((TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)&pFVar6->field_0x20,param_1);
  pFVar6->field_0x8 = 1;
  LOCK();
  puVar1 = &pFVar6->field_0x18;
  iVar2 = *(int *)puVar1;
  *(int *)puVar1 = *(int *)puVar1 + -0x100000;
  UNLOCK();
  if ((iVar2 != 0x100000) && (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)
     ) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x7d,
                       L"Another thread asked to have a read or write access during this write access"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this->ActiveCommandsCounter = this->ActiveCommandsCounter + 1;
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// DestroyEntities @ 147212110

void __thiscall
FMassCommandBuffer::DestroyEntities
          (FMassCommandBuffer *this,TArrayView<FMassEntityHandle_const_,int> *param_1)

{
  code *pcVar1;
  FMassEntityHandle *pFVar2;
  undefined8 uVar3;
  bool bVar4;
  DWORD DVar5;
  FMassBatchedEntityCommand *this_00;
  FLLMScope local_res8 [2];
  FMemScope local_res10 [3];
  TArrayView<FMassEntityHandle_const_,int> local_38;
  TArrayView<FMassEntityHandle_const_,int> local_28 [2];
  
  pFVar2 = param_1->DataPtr;
  uVar3._0_4_ = param_1->ArrayNum;
  uVar3._4_4_ = *(undefined4 *)&param_1->field_0xc;
  if (this->bIsFlushing != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsFlushing() == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                       ,0x8f,
                       L"Trying to push commands is not supported while the given buffer is being flushed"
                      );
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  DVar5 = GetCurrentThreadId();
  if (this->OwnerThreadId != DVar5) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("OwnerThreadId == FPlatformTLS::GetCurrentThreadId()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                       ,0x8f,
                       L"Commands can be pushed only in the same thread where the command buffer was created."
                      );
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_38.DataPtr = pFVar2;
  local_38._8_8_ = uVar3;
  bVar4 = UE::Mass::Debug::FBreakpoint::CheckDestroyEntityBreakpoints(&local_38);
  if (bVar4) {
    UE::Mass::Debug::FBreakpoint::DebugBreak();
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities>(TArrayView<FMassEntityHandle_const_,int>)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities>(TArrayView<FMassEntityHandle_const_,int>)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities>(TArrayView<FMassEntityHandle_const_,int>)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities>(TArrayView<FMassEntityHandle_const_,int>)___ptr64'
                      ::__l2::LLMScope_Name146,L"Mass/PushCommand");
      _Init_thread_footer(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities>(TArrayView<FMassEntityHandle_const_,int>)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities>(TArrayView<FMassEntityHandle_const_,int>)___ptr64'
             ::__l2::LLMScope_Name146,false,None,Default,true);
  FMemScope::FMemScope
            (local_res10,
             &`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities>(TArrayView<FMassEntityHandle_const_,int>)___ptr64'
              ::__l2::LLMScope_Name146,true);
  this_00 = (FMassBatchedEntityCommand *)CreateOrAddCommand<FMassCommandDestroyEntities>(this);
  local_28[0].DataPtr = pFVar2;
  local_28[0]._8_8_ = uVar3;
  FMassBatchedEntityCommand::Add(this_00,local_28);
  this->ActiveCommandsCounter = this->ActiveCommandsCounter + 1;
  FMemScope::~FMemScope(local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Flush @ 14721ad30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FMassCommandBuffer::Flush(FMassCommandBuffer *this,FMassEntityManager *param_1)

{
  FRWFallbackSafeAccessDetectorDefinition *pFVar1;
  atomic<int> *paVar2;
  int *piVar3;
  FRWFallbackSafeAccessDetectorDefinition FVar4;
  atomic<int> aVar5;
  code *pcVar6;
  FIdentityFunctor FVar7;
  bool bVar8;
  FSharedReferencer<1> FVar9;
  FIdentityFunctor FVar10;
  bool bVar11;
  undefined1 uVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_Mass_FlushCommands> FVar18;
  longlong lVar19;
  wchar_t *pwVar20;
  FName FVar21;
  uint uVar22;
  longlong lVar23;
  char *pcVar24;
  uint uVar25;
  FScriptContainerElement *pFVar26;
  uint uVar27;
  bool bVar28;
  ForAnyElementType local_148;
  int local_140;
  int iStack_13c;
  bool local_138;
  undefined1 local_137 [3];
  FBatchedCommandsSortedIndex local_134;
  FBatchedCommandsSortedIndex local_12c;
  FLLMScope local_124;
  FColor_u_0 local_120;
  uint local_11c;
  FCreationContext *local_118;
  FSharedReferencer<1> FStack_110;
  FObserverLock *local_108;
  FSharedReferencer<1> FStack_100;
  FName local_f8;
  FAnsiString *local_f0;
  FString *local_e8;
  longlong local_e0;
  FName local_d8;
  FName local_d0;
  FName local_c0;
  FMemScope local_b8;
  undefined8 local_b0;
  FSharedReferencer<1> local_a8;
  undefined8 local_a0;
  FSharedReferencer<1> local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  TSharedRef<UE::Mass::ObserverManager::FObserverLock,1> local_70;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_60;
  FName local_50 [2];
  
  if ((this->bIsFlushing != false) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bIsFlushing",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassCommandBuffer.cpp"
                          ,0x60,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    uVar12 = (*pcVar6)();
    return (bool)uVar12;
  }
  local_138 = this->bIsFlushing;
  this->bIsFlushing = true;
  if (this->ActiveCommandsCounter < 1) {
    bVar11 = false;
    goto LAB_14721b8e4;
  }
  LOCK();
  pFVar1 = &this->PendingBatchCommandsDetector;
  FVar4 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + 0x100000);
  UNLOCK();
  if (((FVar4 != (FRWFallbackSafeAccessDetectorDefinition)0x0) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                          ,0x72,
                          L"Acquiring a write access while there are ongoing read or write access"),
     bVar11)) {
    pcVar6 = (code *)swi(3);
    uVar12 = (*pcVar6)();
    return (bool)uVar12;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name106,L"Mass/FlushCommands");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(&local_124,LLMScope_Name106,false,None,Default,true);
  FMemScope::FMemScope(&local_b8,&LLMScope_Name106,true);
  FVar18 = StatPtr_STAT_Mass_FlushCommands;
  if (StatPtr_STAT_Mass_FlushCommands == (FThreadSafeStaticStat<FStat_STAT_Mass_FlushCommands>)0x0)
  {
    pFVar17 = ::FName::FName(local_50,"STAT_Mass_FlushCommands");
    FVar18 = (FThreadSafeStaticStat<FStat_STAT_Mass_FlushCommands>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Mass_FlushCommands,*pFVar17,
                        L"Mass Flush Commands","STATGROUP_Mass","STATCAT_Advanced",L"Mass",true,true
                        ,ST_int64,true,false,MCR_Invalid);
  }
  FVar21 = *(FName *)FVar18;
  bVar14 = false;
  FVar7 = (FIdentityFunctor)0x0;
  local_d0.ComparisonIndex.Value = 0;
  local_d0.Number = 0;
  bVar11 = false;
  FVar10 = (FIdentityFunctor)0x0;
  if ((FVar21.ComparisonIndex.Value.Value == 0) && (FVar21.Number == 0)) {
LAB_14721af92:
    bVar14 = bVar11;
    FVar7 = FVar10;
    bVar8 = false;
    local_d8 = local_d0;
    FVar21 = local_d0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_120.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_120._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar14 = false;
      FVar7 = (FIdentityFunctor)0x1;
      bVar11 = false;
      FVar10 = (FIdentityFunctor)0x1;
      if (-1 < CpuChannel->Enabled) {
        local_f8.ComparisonIndex.Value = FVar21.ComparisonIndex.Value.Value;
        local_f8.Number = FVar21.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_f8,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassCommandBuffer.cpp"
                   ,0x6b);
        bVar14 = true;
        FVar7 = (FIdentityFunctor)0x1;
        bVar11 = true;
        FVar10 = (FIdentityFunctor)0x1;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14721af92;
    local_d8 = FVar21;
    FThreadStats::AddMessage(FVar21,CycleScopeStart);
    bVar8 = true;
  }
  uVar27 = (this->CommandInstances).ArrayNum;
  local_80 = 3;
  local_7c = 4;
  local_78 = 6;
  local_148.Data = (FScriptContainerElement *)0x0;
  local_140 = 0;
  iStack_13c = 0;
  local_90 = ___xmm_0000000600000002000000007ffffffe;
  uStack_88 = _UNK_1515819a8;
  local_11c = uVar27;
  if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar27);
  }
  if (0 < (int)uVar27) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar27,&local_148,0,&iStack_13c);
  }
  uVar25 = 0;
  if (0 < (int)uVar27) {
    lVar23 = 0;
    do {
      uVar22 = 0;
      if ((int)uVar25 < (this->CommandInstances).ArrayNum) {
        uVar22 = ~uVar25 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        uVar12 = (*pcVar6)();
        return (bool)uVar12;
      }
      lVar19 = *(longlong *)((this->CommandInstances).AllocatorInstance.Data + lVar23 * 8);
      if ((lVar19 == 0) || (*(char *)(lVar19 + 8) == '\0')) {
        local_134.GroupOrder = 0x7fffffff;
      }
      else {
        local_134.GroupOrder = *(int *)((longlong)&local_90 + (ulonglong)*(byte *)(lVar19 + 9) * 4);
      }
      local_134.Index = uVar25;
      if (((local_148.Data <= &local_134) &&
          (&local_134 < (FBatchedCommandsSortedIndex *)(local_148.Data + (longlong)iStack_13c * 8)))
         && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar11)) {
        pcVar6 = (code *)swi(3);
        uVar12 = (*pcVar6)();
        return (bool)uVar12;
      }
      if (local_140 == iStack_13c) {
        local_140 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&local_148,&iStack_13c);
      }
      lVar19 = (longlong)local_140;
      uVar25 = uVar25 + 1;
      lVar23 = lVar23 + 1;
      local_140 = local_140 + 1;
      *(ulonglong *)(local_148.Data + lVar19 * 8) = CONCAT44(local_134.GroupOrder,local_134.Index);
    } while (lVar23 < (int)uVar27);
  }
  uVar25 = 0;
  if (0 < (this->AppendedCommandInstances).ArrayNum) {
    lVar23 = 0;
    do {
      uVar22 = 0;
      if ((int)uVar25 < (this->AppendedCommandInstances).ArrayNum) {
        uVar22 = ~uVar25 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        uVar12 = (*pcVar6)();
        return (bool)uVar12;
      }
      lVar19 = *(longlong *)((this->AppendedCommandInstances).AllocatorInstance.Data + lVar23);
      if ((lVar19 == 0) || (*(char *)(lVar19 + 8) == '\0')) {
        local_12c.GroupOrder = 0x7fffffff;
      }
      else {
        local_12c.GroupOrder = *(int *)((longlong)&local_90 + (ulonglong)*(byte *)(lVar19 + 9) * 4);
      }
      local_12c.Index = uVar25 + uVar27;
      if (((local_148.Data <= &local_12c) &&
          (&local_12c < (FBatchedCommandsSortedIndex *)(local_148.Data + (longlong)iStack_13c * 8)))
         && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar11)) {
        pcVar6 = (code *)swi(3);
        uVar12 = (*pcVar6)();
        return (bool)uVar12;
      }
      if (local_140 == iStack_13c) {
        local_140 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&local_148,&iStack_13c);
      }
      lVar19 = (longlong)local_140;
      uVar25 = uVar25 + 1;
      lVar23 = lVar23 + 8;
      local_140 = local_140 + 1;
      *(ulonglong *)(local_148.Data + lVar19 * 8) = CONCAT44(local_12c.GroupOrder,local_12c.Index);
    } while ((int)uVar25 < (this->AppendedCommandInstances).ArrayNum);
  }
  AlgoImpl::
  StableSortInternal<_FMassCommandBuffer::Flush_::__l2::FBatchedCommandsSortedIndex,FIdentityFunctor,TDereferenceWrapper<_FMassCommandBuffer::Flush_::__l2::FBatchedCommandsSortedIndex,TLess<void>_>_>
            ((FBatchedCommandsSortedIndex *)local_148.Data,local_140,FVar7,(TLess<void> *)local_137)
  ;
  local_108 = (FObserverLock *)0x0;
  FStack_100.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_118 = (FCreationContext *)0x0;
  FStack_110.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (UE::Mass::Command::bLockObserversDuringFlushing != false) {
    if ((local_140 < 1) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      uVar12 = (*pcVar6)();
      return (bool)uVar12;
    }
    if (*(int *)(local_148.Data + 4) < 3) {
      FMassObserverManager::GetOrMakeObserverLock(&param_1->ObserverManager,&local_70);
      local_a8.ReferenceController = local_70.SharedReferenceCount.ReferenceController;
      if (local_70.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_70.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_70.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_108 = local_70.Object;
      local_b0 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_100,&local_a8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a8.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_70.SharedReferenceCount.ReferenceController);
      if ((local_140 < 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        uVar12 = (*pcVar6)();
        return (bool)uVar12;
      }
      if (*(int *)(local_148.Data + 4) == local_90._4_4_) {
        FMassObserverManager::GetOrMakeCreationContext(&param_1->ObserverManager,&local_60);
        local_98.ReferenceController = local_60.SharedReferenceCount.ReferenceController;
        if (local_60.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_60.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_60.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_118 = local_60.Object;
        local_a0 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_110,&local_98);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_98.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_60.SharedReferenceCount.ReferenceController);
      }
    }
  }
  bVar11 = local_108 != (FObserverLock *)0x0;
  bVar28 = local_118 != (FCreationContext *)0x0;
  uVar27 = 0;
  if (0 < local_140) {
    local_e0 = 0;
    do {
      lVar23 = local_e0;
      uVar22 = ~uVar27 >> 0x1f;
      uVar25 = 0;
      if ((int)uVar27 < local_140) {
        uVar25 = uVar22;
      }
      if ((uVar25 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar6 = (code *)swi(3);
        uVar12 = (*pcVar6)();
        return (bool)uVar12;
      }
      FVar21 = local_d8;
      if (0x7ffffffe < *(int *)(local_148.Data + lVar23 + 4)) break;
      if (bVar28) {
        uVar25 = 0;
        if ((int)uVar27 < local_140) {
          uVar25 = uVar22;
        }
        if ((uVar25 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar6 = (code *)swi(3);
          uVar12 = (*pcVar6)();
          return (bool)uVar12;
        }
        FVar9.ReferenceController = FStack_110.ReferenceController;
        if (0 < *(int *)(local_148.Data + lVar23 + 4)) {
          bVar28 = false;
          local_118 = (FCreationContext *)0x0;
          if (FStack_110.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            FStack_110.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            LOCK();
            paVar2 = &(FVar9.ReferenceController)->SharedReferenceCount;
            aVar5 = *paVar2;
            *paVar2 = (atomic<int>)((int)*paVar2 + -1);
            UNLOCK();
            if (aVar5 == (atomic<int>)0x1) {
              (**(code **)(FVar9.ReferenceController)->_padding_)();
              LOCK();
              paVar2 = &(FVar9.ReferenceController)->WeakReferenceCount;
              aVar5 = *paVar2;
              *paVar2 = (atomic<int>)((int)*paVar2 + -1);
              UNLOCK();
              if (aVar5 == (atomic<int>)0x1) {
                (**(code **)((FVar9.ReferenceController)->_padding_ + 8))
                          (FVar9.ReferenceController,1);
              }
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
        }
      }
      uVar25 = 0;
      if (bVar11) {
        uVar15 = uVar25;
        if ((int)uVar27 < local_140) {
          uVar15 = uVar22;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar6 = (code *)swi(3);
          uVar12 = (*pcVar6)();
          return (bool)uVar12;
        }
        FVar9.ReferenceController = FStack_100.ReferenceController;
        if (2 < *(int *)(local_148.Data + lVar23 + 4)) {
          bVar11 = false;
          local_108 = (FObserverLock *)0x0;
          if (FStack_100.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            FStack_100.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            LOCK();
            paVar2 = &(FVar9.ReferenceController)->SharedReferenceCount;
            aVar5 = *paVar2;
            *paVar2 = (atomic<int>)((int)*paVar2 + -1);
            UNLOCK();
            if (aVar5 == (atomic<int>)0x1) {
              (**(code **)(FVar9.ReferenceController)->_padding_)();
              LOCK();
              paVar2 = &(FVar9.ReferenceController)->WeakReferenceCount;
              aVar5 = *paVar2;
              *paVar2 = (atomic<int>)((int)*paVar2 + -1);
              UNLOCK();
              if (aVar5 == (atomic<int>)0x1) {
                (**(code **)((FVar9.ReferenceController)->_padding_ + 8))
                          (FVar9.ReferenceController,1);
              }
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
        }
      }
      uVar15 = uVar25;
      if ((int)uVar27 < local_140) {
        uVar15 = uVar22;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar6 = (code *)swi(3);
        uVar12 = (*pcVar6)();
        return (bool)uVar12;
      }
      uVar22 = *(uint *)(local_148.Data + lVar23);
      if ((int)uVar22 < (int)local_11c) {
        if ((int)uVar22 < (this->CommandInstances).ArrayNum) {
          uVar25 = ~uVar22 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar6 = (code *)swi(3);
          uVar12 = (*pcVar6)();
          return (bool)uVar12;
        }
        pFVar26 = (this->CommandInstances).AllocatorInstance.Data + (longlong)(int)uVar22 * 8;
      }
      else {
        uVar22 = uVar22 - local_11c;
        if ((int)uVar22 < (this->AppendedCommandInstances).ArrayNum) {
          uVar25 = ~uVar22 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar6 = (code *)swi(3);
          uVar12 = (*pcVar6)();
          return (bool)uVar12;
        }
        pFVar26 = (this->AppendedCommandInstances).AllocatorInstance.Data +
                  (longlong)(int)uVar22 * 8;
      }
      if ((*(longlong *)pFVar26 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Command",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassCommandBuffer.cpp"
                              ,0xc3,L""), bVar13)) {
        pcVar6 = (code *)swi(3);
        uVar12 = (*pcVar6)();
        return (bool)uVar12;
      }
      local_f0 = (FAnsiString *)0x0;
      local_e8 = (FString *)0x0;
      UE::Mass::Command::GetCommandStatNames(*(FMassBatchedCommand **)pFVar26,&local_e8,&local_f0);
      uVar25 = _GCsvCategory_MassEntities.Index;
      if ((local_f0->Data).ArrayNum == 0) {
        pcVar24 = "";
      }
      else {
        pcVar24 = (char *)(local_f0->Data).AllocatorInstance.Data;
      }
      FCsvProfiler::BeginStat(pcVar24,_GCsvCategory_MassEntities.Index,(char *)0x0);
      iVar16 = (**(code **)(**(longlong **)pFVar26 + 0x28))();
      uVar22 = _GCsvCategory_MassEntitiesCounters.Index;
      if ((local_e8->Data).ArrayNum == 0) {
        pwVar20 = L"";
      }
      else {
        pwVar20 = (wchar_t *)(local_e8->Data).AllocatorInstance.Data;
      }
      ::FName::FName(&local_c0,pwVar20);
      FCsvProfiler::RecordCustomStat(&local_c0,uVar22,iVar16,Accumulate);
      (**(code **)(**(longlong **)pFVar26 + 0x10))(*(longlong **)pFVar26,param_1);
      (**(code **)(**(longlong **)pFVar26 + 0x18))();
      FCsvProfiler::EndStat(pcVar24,uVar25);
      uVar27 = uVar27 + 1;
      local_e0 = local_e0 + 8;
      FVar21 = local_d8;
    } while ((int)uVar27 < local_140);
  }
  piVar3 = &(this->AppendedCommandInstances).ArrayMax;
  pFVar26 = (this->AppendedCommandInstances).AllocatorInstance.Data;
  iVar16 = (this->AppendedCommandInstances).ArrayNum;
  if ((this->AppendedCommandInstances).ArrayMax < 0) {
    DestructItems<TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_>,int>
              ((TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_> *)pFVar26,
               iVar16);
    (this->AppendedCommandInstances).ArrayNum = 0;
    if (*piVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->AppendedCommandInstances).AllocatorInstance,0,piVar3);
    }
  }
  else {
    DestructItems<TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_>,int>
              ((TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_> *)pFVar26,
               iVar16);
    (this->AppendedCommandInstances).ArrayNum = 0;
  }
  bVar11 = true;
  this->ActiveCommandsCounter = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_110.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_100.ReferenceController);
  if ((FBatchedCommandsSortedIndex *)local_148.Data != (FBatchedCommandsSortedIndex *)0x0) {
    FMemory::Free(local_148.Data);
  }
  if ((bool)FVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar8) {
    FThreadStats::AddMessage(FVar21,CycleScopeEnd);
  }
  FMemScope::~FMemScope(&local_b8);
  FLLMScope::~FLLMScope(&local_124);
  LOCK();
  pFVar1 = &this->PendingBatchCommandsDetector;
  FVar4 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + -0x100000);
  UNLOCK();
  if (((FVar4 != (FRWFallbackSafeAccessDetectorDefinition)0x100000) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                          ,0x7d,
                          L"Another thread asked to have a read or write access during this write access"
                         ), bVar14)) {
    pcVar6 = (code *)swi(3);
    uVar12 = (*pcVar6)();
    return (bool)uVar12;
  }
LAB_14721b8e4:
  this->bIsFlushing = local_138;
  return bVar11;
}

// ForceUpdateCurrentThreadID @ 14721d9a0

void __thiscall FMassCommandBuffer::ForceUpdateCurrentThreadID(FMassCommandBuffer *this)

{
  DWORD DVar1;
  
  DVar1 = GetCurrentThreadId();
  this->OwnerThreadId = DVar1;
  return;
}

// GetAllocatedSize @ 14721e800

ulong64 __thiscall FMassCommandBuffer::GetAllocatedSize(FMassCommandBuffer *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->CommandInstances).AllocatorInstance.Data;
  iVar2 = (this->CommandInstances).ArrayNum;
  lVar5 = 0;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->CommandInstances).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    if (*(longlong **)pFVar4 == (longlong *)0x0) {
      pFVar4 = pFVar4 + 8;
    }
    else {
      lVar3 = (**(code **)(**(longlong **)pFVar4 + 0x20))();
      lVar5 = lVar5 + lVar3;
      pFVar4 = pFVar4 + 8;
    }
  }
  pFVar4 = (this->AppendedCommandInstances).AllocatorInstance.Data;
  iVar2 = (this->AppendedCommandInstances).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->AppendedCommandInstances).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    if (*(longlong **)pFVar4 == (longlong *)0x0) {
      pFVar4 = pFVar4 + 8;
    }
    else {
      lVar3 = (**(code **)(**(longlong **)pFVar4 + 0x20))();
      lVar5 = lVar5 + lVar3;
      pFVar4 = pFVar4 + 8;
    }
  }
  return lVar5 + (longlong)(this->CommandInstances).ArrayMax * 8;
}

// MoveAppend @ 147235240

void __thiscall FMassCommandBuffer::MoveAppend(FMassCommandBuffer *this,FMassCommandBuffer *param_1)

{
  FRWFallbackSafeAccessDetectorDefinition *pFVar1;
  FRWFallbackSafeAccessDetectorDefinition FVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId231,"MassCommandBuffer_MoveAppend",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassCommandBuffer.cpp"
               ,0xe7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId231);
  }
  LOCK();
  pFVar1 = &param_1->PendingBatchCommandsDetector;
  FVar2 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + 1);
  UNLOCK();
  if (((((uint)FVar2 & 0xfff00000) != 0) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x5c,L"Acquiring a read access while there is already a write access"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (0 < param_1->ActiveCommandsCounter) {
    if ((this == (FMassCommandBuffer *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    LOCK();
    pFVar1 = &this->PendingBatchCommandsDetector;
    FVar2 = *pFVar1;
    *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + 0x100000);
    UNLOCK();
    if (((FVar2 != (FRWFallbackSafeAccessDetectorDefinition)0x0) &&
        (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                           ,0x72,
                           L"Acquiring a write access while there are ongoing read or write access")
       , bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TArray<TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_>,TSizedDefaultAllocator<32>_>
    ::
    Append<TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_>,TSizedDefaultAllocator<32>_>
              (&this->AppendedCommandInstances,&param_1->CommandInstances);
    TArray<TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_>,TSizedDefaultAllocator<32>_>
    ::
    Append<TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_>,TSizedDefaultAllocator<32>_>
              (&this->AppendedCommandInstances,&param_1->AppendedCommandInstances);
    this->ActiveCommandsCounter = this->ActiveCommandsCounter + param_1->ActiveCommandsCounter;
    param_1->ActiveCommandsCounter = 0;
    LOCK();
    pFVar1 = &this->PendingBatchCommandsDetector;
    FVar2 = *pFVar1;
    *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + -0x100000);
    UNLOCK();
    if (((FVar2 != (FRWFallbackSafeAccessDetectorDefinition)0x100000) &&
        (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                           ,0x7d,
                           L"Another thread asked to have a read or write access during this write access"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
  }
  LOCK();
  pFVar1 = &param_1->PendingBatchCommandsDetector;
  FVar2 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + -1);
  UNLOCK();
  if (((((uint)FVar2 & 0xfff00000) != 0) &&
      (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                         ,0x67,
                         L"Another thread asked to have a write access during this read access"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (!bVar5) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// PushUniqueCommand @ 14723dcc0

void __thiscall
FMassCommandBuffer::PushUniqueCommand
          (FMassCommandBuffer *this,
          TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_> *param_1)

{
  FRWFallbackSafeAccessDetectorDefinition *pFVar1;
  int *piVar2;
  FRWFallbackSafeAccessDetectorDefinition FVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  DWORD DVar7;
  int iVar8;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  if (this->bIsFlushing != false) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsFlushing() == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                       ,0xa1,
                       L"Trying to push commands is not supported while the given buffer is being flushed"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  DVar7 = GetCurrentThreadId();
  if (this->OwnerThreadId != DVar7) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("OwnerThreadId == FPlatformTLS::GetCurrentThreadId()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                       ,0xa1,
                       L"Commands can be pushed only in the same thread where the command buffer was created."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_void___cdecl_FMassCommandBuffer::PushUniqueCommand(TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_>&&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_void___cdecl_FMassCommandBuffer::PushUniqueCommand(TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_>&&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_void___cdecl_FMassCommandBuffer::PushUniqueCommand(TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_>&&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_void___cdecl_FMassCommandBuffer::PushUniqueCommand(TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_>&&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name163,L"Mass/PushCommand");
      _Init_thread_footer(&`public:_void___cdecl_FMassCommandBuffer::PushUniqueCommand(TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_>&&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_void___cdecl_FMassCommandBuffer::PushUniqueCommand(TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_>&&___ptr64)___ptr64'
             ::__l2::LLMScope_Name163,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res10,
             &`public:_void___cdecl_FMassCommandBuffer::PushUniqueCommand(TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_>&&___ptr64)___ptr64'
              ::__l2::LLMScope_Name163,true);
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  LOCK();
  pFVar1 = &this->PendingBatchCommandsDetector;
  FVar3 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + 0x100000);
  UNLOCK();
  if ((FVar3 != (FRWFallbackSafeAccessDetectorDefinition)0x0) &&
     (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x72,
                       L"Acquiring a write access while there are ongoing read or write access");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar4 = (this->AppendedCommandInstances).AllocatorInstance.Data;
  if ((pFVar4 <= param_1) &&
     (param_1 < pFVar4 + (longlong)(this->AppendedCommandInstances).ArrayMax * 8)) {
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
  iVar8 = (this->AppendedCommandInstances).ArrayNum;
  piVar2 = &(this->AppendedCommandInstances).ArrayMax;
  if (iVar8 == *piVar2) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->AppendedCommandInstances).AllocatorInstance,piVar2);
  }
  (this->AppendedCommandInstances).ArrayNum = iVar8 + 1;
  *(FMassBatchedCommand **)
   ((this->AppendedCommandInstances).AllocatorInstance.Data + (longlong)iVar8 * 8) = param_1->Ptr;
  param_1->Ptr = (FMassBatchedCommand *)0x0;
  this->ActiveCommandsCounter = this->ActiveCommandsCounter + 1;
  LOCK();
  pFVar1 = &this->PendingBatchCommandsDetector;
  FVar3 = *pFVar1;
  *pFVar1 = (FRWFallbackSafeAccessDetectorDefinition)((int)*pFVar1 + -0x100000);
  UNLOCK();
  if ((FVar3 != (FRWFallbackSafeAccessDetectorDefinition)0x100000) &&
     (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x7d,
                       L"Another thread asked to have a read or write access during this write access"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// operator() @ 1505020a0

bool __thiscall `FMassCommandBuffer::~FMassCommandBuffer'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1478361428711702612>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1478361428711702612>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

