// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 33

// AddFragment<FTestFragment_Float> @ 1470d32c0

void __thiscall
FMassCommandBuffer::AddFragment<FTestFragment_Float>
          (FMassCommandBuffer *this,FMassEntityHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  DWORD DVar3;
  FMassCommandAddFragmentsInternal<0,FTestFragment_Float> *this_00;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  if (this->bIsFlushing != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsFlushing() == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                       ,0x84,
                       L"Trying to push commands is not supported while the given buffer is being flushed"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  DVar3 = GetCurrentThreadId();
  if (this->OwnerThreadId != DVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OwnerThreadId == FPlatformTLS::GetCurrentThreadId()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                       ,0x84,
                       L"Commands can be pushed only in the same thread where the command buffer was created."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddFragmentsInternal<0,FTestFragment_Float>_>(FMassEntityHandle)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddFragmentsInternal<0,FTestFragment_Float>_>(FMassEntityHandle)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddFragmentsInternal<0,FTestFragment_Float>_>(FMassEntityHandle)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddFragmentsInternal<0,FTestFragment_Float>_>(FMassEntityHandle)___ptr64'
                      ::__l2::LLMScope_Name135,L"Mass/PushCommand");
      _Init_thread_footer(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddFragmentsInternal<0,FTestFragment_Float>_>(FMassEntityHandle)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddFragmentsInternal<0,FTestFragment_Float>_>(FMassEntityHandle)___ptr64'
             ::__l2::LLMScope_Name135,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res10,
             &`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddFragmentsInternal<0,FTestFragment_Float>_>(FMassEntityHandle)___ptr64'
              ::__l2::LLMScope_Name135,true);
  this_00 = CreateOrAddCommand<FMassCommandAddFragmentsInternal<0,FTestFragment_Float>_>(this);
  FMassBatchedEntityCommand::Add((FMassBatchedEntityCommand *)this_00,param_1);
  this->ActiveCommandsCounter = this->ActiveCommandsCounter + 1;
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// AddFragment<FTestFragment_Int> @ 1470d3400

void __thiscall
FMassCommandBuffer::AddFragment<FTestFragment_Int>
          (FMassCommandBuffer *this,FMassEntityHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  DWORD DVar3;
  FMassCommandAddFragmentsInternal<0,FTestFragment_Int> *this_00;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  if (this->bIsFlushing != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsFlushing() == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                       ,0x84,
                       L"Trying to push commands is not supported while the given buffer is being flushed"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  DVar3 = GetCurrentThreadId();
  if (this->OwnerThreadId != DVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OwnerThreadId == FPlatformTLS::GetCurrentThreadId()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                       ,0x84,
                       L"Commands can be pushed only in the same thread where the command buffer was created."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddFragmentsInternal<0,FTestFragment_Int>_>(FMassEntityHandle)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddFragmentsInternal<0,FTestFragment_Int>_>(FMassEntityHandle)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddFragmentsInternal<0,FTestFragment_Int>_>(FMassEntityHandle)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddFragmentsInternal<0,FTestFragment_Int>_>(FMassEntityHandle)___ptr64'
                      ::__l2::LLMScope_Name135,L"Mass/PushCommand");
      _Init_thread_footer(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddFragmentsInternal<0,FTestFragment_Int>_>(FMassEntityHandle)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddFragmentsInternal<0,FTestFragment_Int>_>(FMassEntityHandle)___ptr64'
             ::__l2::LLMScope_Name135,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res10,
             &`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddFragmentsInternal<0,FTestFragment_Int>_>(FMassEntityHandle)___ptr64'
              ::__l2::LLMScope_Name135,true);
  this_00 = CreateOrAddCommand<FMassCommandAddFragmentsInternal<0,FTestFragment_Int>_>(this);
  FMassBatchedEntityCommand::Add((FMassBatchedEntityCommand *)this_00,param_1);
  this->ActiveCommandsCounter = this->ActiveCommandsCounter + 1;
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// AddTag<FTestTag_A> @ 1470d59f0

void __thiscall
FMassCommandBuffer::AddTag<FTestTag_A>(FMassCommandBuffer *this,FMassEntityHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  DWORD DVar3;
  FMassCommandAddTagsInternal<0,FTestTag_A> *this_00;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  if (this->bIsFlushing != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsFlushing() == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                       ,0x84,
                       L"Trying to push commands is not supported while the given buffer is being flushed"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  DVar3 = GetCurrentThreadId();
  if (this->OwnerThreadId != DVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OwnerThreadId == FPlatformTLS::GetCurrentThreadId()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                       ,0x84,
                       L"Commands can be pushed only in the same thread where the command buffer was created."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddTagsInternal<0,FTestTag_A>_>(FMassEntityHandle)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddTagsInternal<0,FTestTag_A>_>(FMassEntityHandle)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddTagsInternal<0,FTestTag_A>_>(FMassEntityHandle)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddTagsInternal<0,FTestTag_A>_>(FMassEntityHandle)___ptr64'
                      ::__l2::LLMScope_Name135,L"Mass/PushCommand");
      _Init_thread_footer(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddTagsInternal<0,FTestTag_A>_>(FMassEntityHandle)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddTagsInternal<0,FTestTag_A>_>(FMassEntityHandle)___ptr64'
             ::__l2::LLMScope_Name135,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res10,
             &`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddTagsInternal<0,FTestTag_A>_>(FMassEntityHandle)___ptr64'
              ::__l2::LLMScope_Name135,true);
  this_00 = CreateOrAddCommand<FMassCommandAddTagsInternal<0,FTestTag_A>_>(this);
  FMassBatchedEntityCommand::Add((FMassBatchedEntityCommand *)this_00,param_1);
  this->ActiveCommandsCounter = this->ActiveCommandsCounter + 1;
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// CreateOrAddCommand<FMassCommandAddFragmentInstances<FTestFragment_Array_&>_> @ 1470d9f10

FMassCommandAddFragmentInstances<FTestFragment_Array_&> * __thiscall
FMassCommandBuffer::CreateOrAddCommand<FMassCommandAddFragmentInstances<FTestFragment_Array_&>_>
          (FMassCommandBuffer *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  FMassCommandAddFragmentInstances<FTestFragment_Array_&> *pFVar6;
  undefined8 *puVar7;
  FName *pFVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong lVar11;
  FName local_28 [2];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentInstances<FTestFragment_Array&___ptr64>_>(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentInstances<FTestFragment_Array&___ptr64>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentInstances<FTestFragment_Array&___ptr64>_>(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    LOCK();
    UNLOCK();
    `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentInstances<FTestFragment_Array&___ptr64>_>(void)'
    ::__l2::ThisTypesStaticIndex = (uint)FMassBatchedCommand::CommandsCounter;
    FMassBatchedCommand::CommandsCounter =
         (atomic<unsigned_int>)((int)FMassBatchedCommand::CommandsCounter + 1);
    _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentInstances<FTestFragment_Array&___ptr64>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  uVar3 = `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentInstances<FTestFragment_Array&___ptr64>_>(void)'
          ::__l2::ThisTypesStaticIndex;
  lVar11 = (longlong)
           (int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentInstances<FTestFragment_Array&___ptr64>_>(void)'
                ::__l2::ThisTypesStaticIndex;
  puVar9 = (undefined8 *)0x0;
  if (((int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentInstances<FTestFragment_Array&___ptr64>_>(void)'
            ::__l2::ThisTypesStaticIndex < 0) ||
     ((this->CommandInstances).ArrayNum <=
      (int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentInstances<FTestFragment_Array&___ptr64>_>(void)'
           ::__l2::ThisTypesStaticIndex)) {
    TArray<TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_>,TSizedDefaultAllocator<32>_>
    ::AddZeroed(&this->CommandInstances,
                (`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentInstances<FTestFragment_Array&___ptr64>_>(void)'
                 ::__l2::ThisTypesStaticIndex - (this->CommandInstances).ArrayNum) + 1);
    uVar10 = ~uVar3 >> 0x1f;
  }
  else {
    uVar10 = ~`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentInstances<FTestFragment_Array&___ptr64>_>(void)'
              ::__l2::ThisTypesStaticIndex >> 0x1f;
    uVar5 = 0;
    if ((int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentInstances<FTestFragment_Array&___ptr64>_>(void)'
             ::__l2::ThisTypesStaticIndex < (this->CommandInstances).ArrayNum) {
      uVar5 = uVar10;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FMassCommandAddFragmentInstances<FTestFragment_Array_&> *)(*pcVar2)();
      return pFVar6;
    }
    if (*(longlong *)((this->CommandInstances).AllocatorInstance.Data + lVar11 * 8) != 0) {
      uVar5 = 0;
      if ((int)uVar3 < (this->CommandInstances).ArrayNum) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FMassCommandAddFragmentInstances<FTestFragment_Array_&> *)(*pcVar2)();
        return pFVar6;
      }
      return *(FMassCommandAddFragmentInstances<FTestFragment_Array_&> **)
              ((this->CommandInstances).AllocatorInstance.Data + lVar11 * 8);
    }
  }
  puVar7 = ::operator_new(0x60);
  if (puVar7 != (undefined8 *)0x0) {
    pFVar8 = ::FName::FName(local_28,L"AddFragmentInstanceList");
    *(FName *)((longlong)puVar7 + 0xc) = *pFVar8;
    *(undefined2 *)(puVar7 + 1) = 0x500;
    puVar7[10] = 0;
    *(undefined4 *)(puVar7 + 3) = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    *puVar7 = &___7__FMassCommandAddFragmentInstances_AEAUFTestFragment_Array____6B_;
    puVar7[6] = 0;
    puVar7[7] = 0;
    *(undefined4 *)(puVar7 + 0xb) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x5c) = 0x80;
    UE::Mass::TMultiTypeList<FTestFragment_Array_&>::
    PopulateBitSet<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
              ((TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                *)(puVar7 + 8));
    puVar9 = puVar7;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->CommandInstances).ArrayNum) {
    uVar5 = uVar10;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FMassCommandAddFragmentInstances<FTestFragment_Array_&> *)(*pcVar2)();
    return pFVar6;
  }
  pFVar1 = (this->CommandInstances).AllocatorInstance.Data;
  puVar7 = *(undefined8 **)(pFVar1 + lVar11 * 8);
  *(undefined8 **)(pFVar1 + lVar11 * 8) = puVar9;
  if (puVar7 != (undefined8 *)0x0) {
    (**(code **)*puVar7)(puVar7,1);
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->CommandInstances).ArrayNum) {
    uVar5 = uVar10;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FMassCommandAddFragmentInstances<FTestFragment_Array_&> *)(*pcVar2)();
    return pFVar6;
  }
  return *(FMassCommandAddFragmentInstances<FTestFragment_Array_&> **)
          ((this->CommandInstances).AllocatorInstance.Data + lVar11 * 8);
}

// CreateOrAddCommand<FMassCommandAddFragmentInstances<FTestFragment_Float>_> @ 1470da190

FMassCommandAddFragmentInstances<FTestFragment_Float> * __thiscall
FMassCommandBuffer::CreateOrAddCommand<FMassCommandAddFragmentInstances<FTestFragment_Float>_>
          (FMassCommandBuffer *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  FMassCommandAddFragmentInstances<FTestFragment_Float> *pFVar6;
  undefined8 *puVar7;
  FName *pFVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong lVar11;
  FName local_28 [2];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentInstances<FTestFragment_Float>_>(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentInstances<FTestFragment_Float>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentInstances<FTestFragment_Float>_>(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    LOCK();
    UNLOCK();
    `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentInstances<FTestFragment_Float>_>(void)'
    ::__l2::ThisTypesStaticIndex = (uint)FMassBatchedCommand::CommandsCounter;
    FMassBatchedCommand::CommandsCounter =
         (atomic<unsigned_int>)((int)FMassBatchedCommand::CommandsCounter + 1);
    _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentInstances<FTestFragment_Float>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  uVar3 = `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentInstances<FTestFragment_Float>_>(void)'
          ::__l2::ThisTypesStaticIndex;
  lVar11 = (longlong)
           (int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentInstances<FTestFragment_Float>_>(void)'
                ::__l2::ThisTypesStaticIndex;
  puVar9 = (undefined8 *)0x0;
  if (((int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentInstances<FTestFragment_Float>_>(void)'
            ::__l2::ThisTypesStaticIndex < 0) ||
     ((this->CommandInstances).ArrayNum <=
      (int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentInstances<FTestFragment_Float>_>(void)'
           ::__l2::ThisTypesStaticIndex)) {
    TArray<TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_>,TSizedDefaultAllocator<32>_>
    ::AddZeroed(&this->CommandInstances,
                (`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentInstances<FTestFragment_Float>_>(void)'
                 ::__l2::ThisTypesStaticIndex - (this->CommandInstances).ArrayNum) + 1);
    uVar10 = ~uVar3 >> 0x1f;
  }
  else {
    uVar10 = ~`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentInstances<FTestFragment_Float>_>(void)'
              ::__l2::ThisTypesStaticIndex >> 0x1f;
    uVar5 = 0;
    if ((int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentInstances<FTestFragment_Float>_>(void)'
             ::__l2::ThisTypesStaticIndex < (this->CommandInstances).ArrayNum) {
      uVar5 = uVar10;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FMassCommandAddFragmentInstances<FTestFragment_Float> *)(*pcVar2)();
      return pFVar6;
    }
    if (*(longlong *)((this->CommandInstances).AllocatorInstance.Data + lVar11 * 8) != 0) {
      uVar5 = 0;
      if ((int)uVar3 < (this->CommandInstances).ArrayNum) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FMassCommandAddFragmentInstances<FTestFragment_Float> *)(*pcVar2)();
        return pFVar6;
      }
      return *(FMassCommandAddFragmentInstances<FTestFragment_Float> **)
              ((this->CommandInstances).AllocatorInstance.Data + lVar11 * 8);
    }
  }
  puVar7 = ::operator_new(0x60);
  if (puVar7 != (undefined8 *)0x0) {
    pFVar8 = ::FName::FName(local_28,L"AddFragmentInstanceList");
    *(FName *)((longlong)puVar7 + 0xc) = *pFVar8;
    *(undefined2 *)(puVar7 + 1) = 0x500;
    puVar7[10] = 0;
    *(undefined4 *)(puVar7 + 3) = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    *puVar7 = &___7__FMassCommandAddFragmentInstances_UFTestFragment_Float____6B_;
    puVar7[6] = 0;
    puVar7[7] = 0;
    *(undefined4 *)(puVar7 + 0xb) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x5c) = 0x80;
    UE::Mass::TMultiTypeList<FTestFragment_Float>::
    PopulateBitSet<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
              ((TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                *)(puVar7 + 8));
    puVar9 = puVar7;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->CommandInstances).ArrayNum) {
    uVar5 = uVar10;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FMassCommandAddFragmentInstances<FTestFragment_Float> *)(*pcVar2)();
    return pFVar6;
  }
  pFVar1 = (this->CommandInstances).AllocatorInstance.Data;
  puVar7 = *(undefined8 **)(pFVar1 + lVar11 * 8);
  *(undefined8 **)(pFVar1 + lVar11 * 8) = puVar9;
  if (puVar7 != (undefined8 *)0x0) {
    (**(code **)*puVar7)(puVar7,1);
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->CommandInstances).ArrayNum) {
    uVar5 = uVar10;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FMassCommandAddFragmentInstances<FTestFragment_Float> *)(*pcVar2)();
    return pFVar6;
  }
  return *(FMassCommandAddFragmentInstances<FTestFragment_Float> **)
          ((this->CommandInstances).AllocatorInstance.Data + lVar11 * 8);
}

// CreateOrAddCommand<FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float>_> @ 1470da410

FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float> * __thiscall
FMassCommandBuffer::
CreateOrAddCommand<FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float>_>
          (FMassCommandBuffer *this)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float> *pFVar7;
  FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float> *this_00;
  FName *pFVar8;
  longlong lVar9;
  uint uVar10;
  FName local_res8;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float>_>(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float>_>(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    LOCK();
    UNLOCK();
    `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float>_>(void)'
    ::__l2::ThisTypesStaticIndex = (uint)FMassBatchedCommand::CommandsCounter;
    FMassBatchedCommand::CommandsCounter =
         (atomic<unsigned_int>)((int)FMassBatchedCommand::CommandsCounter + 1);
    _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  uVar4 = `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float>_>(void)'
          ::__l2::ThisTypesStaticIndex;
  lVar9 = (longlong)
          (int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float>_>(void)'
               ::__l2::ThisTypesStaticIndex;
  pFVar7 = (FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float> *)0x0;
  if (((int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float>_>(void)'
            ::__l2::ThisTypesStaticIndex < 0) ||
     ((this->CommandInstances).ArrayNum <=
      (int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float>_>(void)'
           ::__l2::ThisTypesStaticIndex)) {
    TArray<TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_>,TSizedDefaultAllocator<32>_>
    ::AddZeroed(&this->CommandInstances,
                (`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float>_>(void)'
                 ::__l2::ThisTypesStaticIndex - (this->CommandInstances).ArrayNum) + 1);
    uVar10 = ~uVar4 >> 0x1f;
  }
  else {
    uVar10 = ~`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float>_>(void)'
              ::__l2::ThisTypesStaticIndex >> 0x1f;
    uVar6 = 0;
    if ((int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float>_>(void)'
             ::__l2::ThisTypesStaticIndex < (this->CommandInstances).ArrayNum) {
      uVar6 = uVar10;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float> *)
               (*pcVar3)();
      return pFVar7;
    }
    if (*(longlong *)((this->CommandInstances).AllocatorInstance.Data + lVar9 * 8) != 0) {
      uVar6 = 0;
      if ((int)uVar4 < (this->CommandInstances).ArrayNum) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float> *)
                 (*pcVar3)();
        return pFVar7;
      }
      return *(FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float> **)
              ((this->CommandInstances).AllocatorInstance.Data + lVar9 * 8);
    }
  }
  this_00 = ::operator_new(0x70);
  if (this_00 != (FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float> *)0x0) {
    pFVar8 = ::FName::FName(&local_res8,L"AddFragmentInstanceList");
    pFVar7 = FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float>::
             FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float>
                       (this_00,Set,*pFVar8);
  }
  uVar6 = 0;
  if ((int)uVar4 < (this->CommandInstances).ArrayNum) {
    uVar6 = uVar10;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float> *)(*pcVar3)();
    return pFVar7;
  }
  pFVar1 = (this->CommandInstances).AllocatorInstance.Data;
  puVar2 = *(undefined8 **)(pFVar1 + lVar9 * 8);
  *(FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float> **)(pFVar1 + lVar9 * 8)
       = pFVar7;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  uVar6 = 0;
  if ((int)uVar4 < (this->CommandInstances).ArrayNum) {
    uVar6 = uVar10;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float> *)(*pcVar3)();
    return pFVar7;
  }
  return *(FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float> **)
          ((this->CommandInstances).AllocatorInstance.Data + lVar9 * 8);
}

// CreateOrAddCommand<FMassCommandAddFragmentsInternal<0,FTestFragment_Float>_> @ 1470da660

FMassCommandAddFragmentsInternal<0,FTestFragment_Float> * __thiscall
FMassCommandBuffer::CreateOrAddCommand<FMassCommandAddFragmentsInternal<0,FTestFragment_Float>_>
          (FMassCommandBuffer *this)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  FMassCommandAddFragmentsInternal<0,FTestFragment_Float> *pFVar7;
  FMassCommandAddFragmentsInternal<0,FTestFragment_Float> *this_00;
  longlong lVar8;
  uint uVar9;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentsInternal<0,FTestFragment_Float>_>(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentsInternal<0,FTestFragment_Float>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentsInternal<0,FTestFragment_Float>_>(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    LOCK();
    UNLOCK();
    `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentsInternal<0,FTestFragment_Float>_>(void)'
    ::__l2::ThisTypesStaticIndex = (uint)FMassBatchedCommand::CommandsCounter;
    FMassBatchedCommand::CommandsCounter =
         (atomic<unsigned_int>)((int)FMassBatchedCommand::CommandsCounter + 1);
    _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentsInternal<0,FTestFragment_Float>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  uVar4 = `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentsInternal<0,FTestFragment_Float>_>(void)'
          ::__l2::ThisTypesStaticIndex;
  lVar8 = (longlong)
          (int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentsInternal<0,FTestFragment_Float>_>(void)'
               ::__l2::ThisTypesStaticIndex;
  pFVar7 = (FMassCommandAddFragmentsInternal<0,FTestFragment_Float> *)0x0;
  if (((int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentsInternal<0,FTestFragment_Float>_>(void)'
            ::__l2::ThisTypesStaticIndex < 0) ||
     ((this->CommandInstances).ArrayNum <=
      (int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentsInternal<0,FTestFragment_Float>_>(void)'
           ::__l2::ThisTypesStaticIndex)) {
    TArray<TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_>,TSizedDefaultAllocator<32>_>
    ::AddZeroed(&this->CommandInstances,
                (`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentsInternal<0,FTestFragment_Float>_>(void)'
                 ::__l2::ThisTypesStaticIndex - (this->CommandInstances).ArrayNum) + 1);
    uVar9 = ~uVar4 >> 0x1f;
  }
  else {
    uVar9 = ~`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentsInternal<0,FTestFragment_Float>_>(void)'
             ::__l2::ThisTypesStaticIndex >> 0x1f;
    uVar6 = 0;
    if ((int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentsInternal<0,FTestFragment_Float>_>(void)'
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
      pFVar7 = (FMassCommandAddFragmentsInternal<0,FTestFragment_Float> *)(*pcVar3)();
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
        pFVar7 = (FMassCommandAddFragmentsInternal<0,FTestFragment_Float> *)(*pcVar3)();
        return pFVar7;
      }
      return *(FMassCommandAddFragmentsInternal<0,FTestFragment_Float> **)
              ((this->CommandInstances).AllocatorInstance.Data + lVar8 * 8);
    }
  }
  this_00 = ::operator_new(0x50);
  if (this_00 != (FMassCommandAddFragmentsInternal<0,FTestFragment_Float> *)0x0) {
    pFVar7 = FMassCommandAddFragmentsInternal<0,FTestFragment_Float>::
             FMassCommandAddFragmentsInternal<0,FTestFragment_Float>(this_00);
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
    pFVar7 = (FMassCommandAddFragmentsInternal<0,FTestFragment_Float> *)(*pcVar3)();
    return pFVar7;
  }
  pFVar1 = (this->CommandInstances).AllocatorInstance.Data;
  puVar2 = *(undefined8 **)(pFVar1 + lVar8 * 8);
  *(FMassCommandAddFragmentsInternal<0,FTestFragment_Float> **)(pFVar1 + lVar8 * 8) = pFVar7;
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
    pFVar7 = (FMassCommandAddFragmentsInternal<0,FTestFragment_Float> *)(*pcVar3)();
    return pFVar7;
  }
  return *(FMassCommandAddFragmentsInternal<0,FTestFragment_Float> **)
          ((this->CommandInstances).AllocatorInstance.Data + lVar8 * 8);
}

// CreateOrAddCommand<FMassCommandAddFragmentsInternal<0,FTestFragment_Int>_> @ 1470da890

FMassCommandAddFragmentsInternal<0,FTestFragment_Int> * __thiscall
FMassCommandBuffer::CreateOrAddCommand<FMassCommandAddFragmentsInternal<0,FTestFragment_Int>_>
          (FMassCommandBuffer *this)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  FMassCommandAddFragmentsInternal<0,FTestFragment_Int> *pFVar7;
  FMassCommandAddFragmentsInternal<0,FTestFragment_Int> *this_00;
  longlong lVar8;
  uint uVar9;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentsInternal<0,FTestFragment_Int>_>(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentsInternal<0,FTestFragment_Int>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentsInternal<0,FTestFragment_Int>_>(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    LOCK();
    UNLOCK();
    `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentsInternal<0,FTestFragment_Int>_>(void)'
    ::__l2::ThisTypesStaticIndex = (uint)FMassBatchedCommand::CommandsCounter;
    FMassBatchedCommand::CommandsCounter =
         (atomic<unsigned_int>)((int)FMassBatchedCommand::CommandsCounter + 1);
    _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentsInternal<0,FTestFragment_Int>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  uVar4 = `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentsInternal<0,FTestFragment_Int>_>(void)'
          ::__l2::ThisTypesStaticIndex;
  lVar8 = (longlong)
          (int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentsInternal<0,FTestFragment_Int>_>(void)'
               ::__l2::ThisTypesStaticIndex;
  pFVar7 = (FMassCommandAddFragmentsInternal<0,FTestFragment_Int> *)0x0;
  if (((int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentsInternal<0,FTestFragment_Int>_>(void)'
            ::__l2::ThisTypesStaticIndex < 0) ||
     ((this->CommandInstances).ArrayNum <=
      (int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentsInternal<0,FTestFragment_Int>_>(void)'
           ::__l2::ThisTypesStaticIndex)) {
    TArray<TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_>,TSizedDefaultAllocator<32>_>
    ::AddZeroed(&this->CommandInstances,
                (`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentsInternal<0,FTestFragment_Int>_>(void)'
                 ::__l2::ThisTypesStaticIndex - (this->CommandInstances).ArrayNum) + 1);
    uVar9 = ~uVar4 >> 0x1f;
  }
  else {
    uVar9 = ~`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentsInternal<0,FTestFragment_Int>_>(void)'
             ::__l2::ThisTypesStaticIndex >> 0x1f;
    uVar6 = 0;
    if ((int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddFragmentsInternal<0,FTestFragment_Int>_>(void)'
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
      pFVar7 = (FMassCommandAddFragmentsInternal<0,FTestFragment_Int> *)(*pcVar3)();
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
        pFVar7 = (FMassCommandAddFragmentsInternal<0,FTestFragment_Int> *)(*pcVar3)();
        return pFVar7;
      }
      return *(FMassCommandAddFragmentsInternal<0,FTestFragment_Int> **)
              ((this->CommandInstances).AllocatorInstance.Data + lVar8 * 8);
    }
  }
  this_00 = ::operator_new(0x50);
  if (this_00 != (FMassCommandAddFragmentsInternal<0,FTestFragment_Int> *)0x0) {
    pFVar7 = FMassCommandAddFragmentsInternal<0,FTestFragment_Int>::
             FMassCommandAddFragmentsInternal<0,FTestFragment_Int>(this_00);
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
    pFVar7 = (FMassCommandAddFragmentsInternal<0,FTestFragment_Int> *)(*pcVar3)();
    return pFVar7;
  }
  pFVar1 = (this->CommandInstances).AllocatorInstance.Data;
  puVar2 = *(undefined8 **)(pFVar1 + lVar8 * 8);
  *(FMassCommandAddFragmentsInternal<0,FTestFragment_Int> **)(pFVar1 + lVar8 * 8) = pFVar7;
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
    pFVar7 = (FMassCommandAddFragmentsInternal<0,FTestFragment_Int> *)(*pcVar3)();
    return pFVar7;
  }
  return *(FMassCommandAddFragmentsInternal<0,FTestFragment_Int> **)
          ((this->CommandInstances).AllocatorInstance.Data + lVar8 * 8);
}

// CreateOrAddCommand<FMassCommandAddTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_> @ 1470daac0

FMassCommandAddTagsInternal<0,FFarmJustBecameReadyToHarvestTag> * __thiscall
FMassCommandBuffer::
CreateOrAddCommand<FMassCommandAddTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>
          (FMassCommandBuffer *this)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  FMassCommandAddTagsInternal<0,FFarmJustBecameReadyToHarvestTag> *pFVar7;
  FMassCommandAddTagsInternal<0,FFarmJustBecameReadyToHarvestTag> *this_00;
  longlong lVar8;
  uint uVar9;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    LOCK();
    UNLOCK();
    `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>(void)'
    ::__l2::ThisTypesStaticIndex = (uint)FMassBatchedCommand::CommandsCounter;
    FMassBatchedCommand::CommandsCounter =
         (atomic<unsigned_int>)((int)FMassBatchedCommand::CommandsCounter + 1);
    _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  uVar4 = `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>(void)'
          ::__l2::ThisTypesStaticIndex;
  lVar8 = (longlong)
          (int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>(void)'
               ::__l2::ThisTypesStaticIndex;
  pFVar7 = (FMassCommandAddTagsInternal<0,FFarmJustBecameReadyToHarvestTag> *)0x0;
  if (((int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>(void)'
            ::__l2::ThisTypesStaticIndex < 0) ||
     ((this->CommandInstances).ArrayNum <=
      (int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>(void)'
           ::__l2::ThisTypesStaticIndex)) {
    TArray<TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_>,TSizedDefaultAllocator<32>_>
    ::AddZeroed(&this->CommandInstances,
                (`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>(void)'
                 ::__l2::ThisTypesStaticIndex - (this->CommandInstances).ArrayNum) + 1);
    uVar9 = ~uVar4 >> 0x1f;
  }
  else {
    uVar9 = ~`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>(void)'
             ::__l2::ThisTypesStaticIndex >> 0x1f;
    uVar6 = 0;
    if ((int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>(void)'
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
      pFVar7 = (FMassCommandAddTagsInternal<0,FFarmJustBecameReadyToHarvestTag> *)(*pcVar3)();
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
        pFVar7 = (FMassCommandAddTagsInternal<0,FFarmJustBecameReadyToHarvestTag> *)(*pcVar3)();
        return pFVar7;
      }
      return *(FMassCommandAddTagsInternal<0,FFarmJustBecameReadyToHarvestTag> **)
              ((this->CommandInstances).AllocatorInstance.Data + lVar8 * 8);
    }
  }
  this_00 = ::operator_new(0x70);
  if (this_00 != (FMassCommandAddTagsInternal<0,FFarmJustBecameReadyToHarvestTag> *)0x0) {
    pFVar7 = FMassCommandAddTagsInternal<0,FFarmJustBecameReadyToHarvestTag>::
             FMassCommandAddTagsInternal<0,FFarmJustBecameReadyToHarvestTag>(this_00);
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
    pFVar7 = (FMassCommandAddTagsInternal<0,FFarmJustBecameReadyToHarvestTag> *)(*pcVar3)();
    return pFVar7;
  }
  pFVar1 = (this->CommandInstances).AllocatorInstance.Data;
  puVar2 = *(undefined8 **)(pFVar1 + lVar8 * 8);
  *(FMassCommandAddTagsInternal<0,FFarmJustBecameReadyToHarvestTag> **)(pFVar1 + lVar8 * 8) = pFVar7
  ;
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
    pFVar7 = (FMassCommandAddTagsInternal<0,FFarmJustBecameReadyToHarvestTag> *)(*pcVar3)();
    return pFVar7;
  }
  return *(FMassCommandAddTagsInternal<0,FFarmJustBecameReadyToHarvestTag> **)
          ((this->CommandInstances).AllocatorInstance.Data + lVar8 * 8);
}

// CreateOrAddCommand<FMassCommandAddTagsInternal<0,FFarmReadyToHarvestTag>_> @ 1470dacf0

FMassCommandAddTagsInternal<0,FFarmReadyToHarvestTag> * __thiscall
FMassCommandBuffer::CreateOrAddCommand<FMassCommandAddTagsInternal<0,FFarmReadyToHarvestTag>_>
          (FMassCommandBuffer *this)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  FMassCommandAddTagsInternal<0,FFarmReadyToHarvestTag> *pFVar7;
  FMassCommandAddTagsInternal<0,FFarmReadyToHarvestTag> *this_00;
  longlong lVar8;
  uint uVar9;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddTagsInternal<0,FFarmReadyToHarvestTag>_>(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddTagsInternal<0,FFarmReadyToHarvestTag>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddTagsInternal<0,FFarmReadyToHarvestTag>_>(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    LOCK();
    UNLOCK();
    `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddTagsInternal<0,FFarmReadyToHarvestTag>_>(void)'
    ::__l2::ThisTypesStaticIndex = (uint)FMassBatchedCommand::CommandsCounter;
    FMassBatchedCommand::CommandsCounter =
         (atomic<unsigned_int>)((int)FMassBatchedCommand::CommandsCounter + 1);
    _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddTagsInternal<0,FFarmReadyToHarvestTag>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  uVar4 = `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddTagsInternal<0,FFarmReadyToHarvestTag>_>(void)'
          ::__l2::ThisTypesStaticIndex;
  lVar8 = (longlong)
          (int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddTagsInternal<0,FFarmReadyToHarvestTag>_>(void)'
               ::__l2::ThisTypesStaticIndex;
  pFVar7 = (FMassCommandAddTagsInternal<0,FFarmReadyToHarvestTag> *)0x0;
  if (((int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddTagsInternal<0,FFarmReadyToHarvestTag>_>(void)'
            ::__l2::ThisTypesStaticIndex < 0) ||
     ((this->CommandInstances).ArrayNum <=
      (int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddTagsInternal<0,FFarmReadyToHarvestTag>_>(void)'
           ::__l2::ThisTypesStaticIndex)) {
    TArray<TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_>,TSizedDefaultAllocator<32>_>
    ::AddZeroed(&this->CommandInstances,
                (`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddTagsInternal<0,FFarmReadyToHarvestTag>_>(void)'
                 ::__l2::ThisTypesStaticIndex - (this->CommandInstances).ArrayNum) + 1);
    uVar9 = ~uVar4 >> 0x1f;
  }
  else {
    uVar9 = ~`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddTagsInternal<0,FFarmReadyToHarvestTag>_>(void)'
             ::__l2::ThisTypesStaticIndex >> 0x1f;
    uVar6 = 0;
    if ((int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddTagsInternal<0,FFarmReadyToHarvestTag>_>(void)'
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
      pFVar7 = (FMassCommandAddTagsInternal<0,FFarmReadyToHarvestTag> *)(*pcVar3)();
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
        pFVar7 = (FMassCommandAddTagsInternal<0,FFarmReadyToHarvestTag> *)(*pcVar3)();
        return pFVar7;
      }
      return *(FMassCommandAddTagsInternal<0,FFarmReadyToHarvestTag> **)
              ((this->CommandInstances).AllocatorInstance.Data + lVar8 * 8);
    }
  }
  this_00 = ::operator_new(0x70);
  if (this_00 != (FMassCommandAddTagsInternal<0,FFarmReadyToHarvestTag> *)0x0) {
    pFVar7 = FMassCommandAddTagsInternal<0,FFarmReadyToHarvestTag>::
             FMassCommandAddTagsInternal<0,FFarmReadyToHarvestTag>(this_00);
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
    pFVar7 = (FMassCommandAddTagsInternal<0,FFarmReadyToHarvestTag> *)(*pcVar3)();
    return pFVar7;
  }
  pFVar1 = (this->CommandInstances).AllocatorInstance.Data;
  puVar2 = *(undefined8 **)(pFVar1 + lVar8 * 8);
  *(FMassCommandAddTagsInternal<0,FFarmReadyToHarvestTag> **)(pFVar1 + lVar8 * 8) = pFVar7;
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
    pFVar7 = (FMassCommandAddTagsInternal<0,FFarmReadyToHarvestTag> *)(*pcVar3)();
    return pFVar7;
  }
  return *(FMassCommandAddTagsInternal<0,FFarmReadyToHarvestTag> **)
          ((this->CommandInstances).AllocatorInstance.Data + lVar8 * 8);
}

// CreateOrAddCommand<FMassCommandAddTagsInternal<0,FTestFragment_Tag>_> @ 1470daf20

FMassCommandAddTagsInternal<0,FTestFragment_Tag> * __thiscall
FMassCommandBuffer::CreateOrAddCommand<FMassCommandAddTagsInternal<0,FTestFragment_Tag>_>
          (FMassCommandBuffer *this)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  FMassCommandAddTagsInternal<0,FTestFragment_Tag> *pFVar7;
  FMassCommandAddTagsInternal<0,FTestFragment_Tag> *this_00;
  longlong lVar8;
  uint uVar9;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddTagsInternal<0,FTestFragment_Tag>_>(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddTagsInternal<0,FTestFragment_Tag>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddTagsInternal<0,FTestFragment_Tag>_>(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    LOCK();
    UNLOCK();
    `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddTagsInternal<0,FTestFragment_Tag>_>(void)'
    ::__l2::ThisTypesStaticIndex = (uint)FMassBatchedCommand::CommandsCounter;
    FMassBatchedCommand::CommandsCounter =
         (atomic<unsigned_int>)((int)FMassBatchedCommand::CommandsCounter + 1);
    _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddTagsInternal<0,FTestFragment_Tag>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  uVar4 = `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddTagsInternal<0,FTestFragment_Tag>_>(void)'
          ::__l2::ThisTypesStaticIndex;
  lVar8 = (longlong)
          (int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddTagsInternal<0,FTestFragment_Tag>_>(void)'
               ::__l2::ThisTypesStaticIndex;
  pFVar7 = (FMassCommandAddTagsInternal<0,FTestFragment_Tag> *)0x0;
  if (((int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddTagsInternal<0,FTestFragment_Tag>_>(void)'
            ::__l2::ThisTypesStaticIndex < 0) ||
     ((this->CommandInstances).ArrayNum <=
      (int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddTagsInternal<0,FTestFragment_Tag>_>(void)'
           ::__l2::ThisTypesStaticIndex)) {
    TArray<TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_>,TSizedDefaultAllocator<32>_>
    ::AddZeroed(&this->CommandInstances,
                (`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddTagsInternal<0,FTestFragment_Tag>_>(void)'
                 ::__l2::ThisTypesStaticIndex - (this->CommandInstances).ArrayNum) + 1);
    uVar9 = ~uVar4 >> 0x1f;
  }
  else {
    uVar9 = ~`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddTagsInternal<0,FTestFragment_Tag>_>(void)'
             ::__l2::ThisTypesStaticIndex >> 0x1f;
    uVar6 = 0;
    if ((int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddTagsInternal<0,FTestFragment_Tag>_>(void)'
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
      pFVar7 = (FMassCommandAddTagsInternal<0,FTestFragment_Tag> *)(*pcVar3)();
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
        pFVar7 = (FMassCommandAddTagsInternal<0,FTestFragment_Tag> *)(*pcVar3)();
        return pFVar7;
      }
      return *(FMassCommandAddTagsInternal<0,FTestFragment_Tag> **)
              ((this->CommandInstances).AllocatorInstance.Data + lVar8 * 8);
    }
  }
  this_00 = ::operator_new(0x70);
  if (this_00 != (FMassCommandAddTagsInternal<0,FTestFragment_Tag> *)0x0) {
    pFVar7 = FMassCommandAddTagsInternal<0,FTestFragment_Tag>::
             FMassCommandAddTagsInternal<0,FTestFragment_Tag>(this_00);
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
    pFVar7 = (FMassCommandAddTagsInternal<0,FTestFragment_Tag> *)(*pcVar3)();
    return pFVar7;
  }
  pFVar1 = (this->CommandInstances).AllocatorInstance.Data;
  puVar2 = *(undefined8 **)(pFVar1 + lVar8 * 8);
  *(FMassCommandAddTagsInternal<0,FTestFragment_Tag> **)(pFVar1 + lVar8 * 8) = pFVar7;
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
    pFVar7 = (FMassCommandAddTagsInternal<0,FTestFragment_Tag> *)(*pcVar3)();
    return pFVar7;
  }
  return *(FMassCommandAddTagsInternal<0,FTestFragment_Tag> **)
          ((this->CommandInstances).AllocatorInstance.Data + lVar8 * 8);
}

// CreateOrAddCommand<FMassCommandAddTagsInternal<0,FTestTag_A>_> @ 1470db150

FMassCommandAddTagsInternal<0,FTestTag_A> * __thiscall
FMassCommandBuffer::CreateOrAddCommand<FMassCommandAddTagsInternal<0,FTestTag_A>_>
          (FMassCommandBuffer *this)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  FMassCommandAddTagsInternal<0,FTestTag_A> *pFVar7;
  FMassCommandAddTagsInternal<0,FTestTag_A> *this_00;
  longlong lVar8;
  uint uVar9;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddTagsInternal<0,FTestTag_A>_>(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddTagsInternal<0,FTestTag_A>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddTagsInternal<0,FTestTag_A>_>(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    LOCK();
    UNLOCK();
    `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddTagsInternal<0,FTestTag_A>_>(void)'
    ::__l2::ThisTypesStaticIndex = (uint)FMassBatchedCommand::CommandsCounter;
    FMassBatchedCommand::CommandsCounter =
         (atomic<unsigned_int>)((int)FMassBatchedCommand::CommandsCounter + 1);
    _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddTagsInternal<0,FTestTag_A>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  uVar4 = `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddTagsInternal<0,FTestTag_A>_>(void)'
          ::__l2::ThisTypesStaticIndex;
  lVar8 = (longlong)
          (int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddTagsInternal<0,FTestTag_A>_>(void)'
               ::__l2::ThisTypesStaticIndex;
  pFVar7 = (FMassCommandAddTagsInternal<0,FTestTag_A> *)0x0;
  if (((int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddTagsInternal<0,FTestTag_A>_>(void)'
            ::__l2::ThisTypesStaticIndex < 0) ||
     ((this->CommandInstances).ArrayNum <=
      (int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddTagsInternal<0,FTestTag_A>_>(void)'
           ::__l2::ThisTypesStaticIndex)) {
    TArray<TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_>,TSizedDefaultAllocator<32>_>
    ::AddZeroed(&this->CommandInstances,
                (`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddTagsInternal<0,FTestTag_A>_>(void)'
                 ::__l2::ThisTypesStaticIndex - (this->CommandInstances).ArrayNum) + 1);
    uVar9 = ~uVar4 >> 0x1f;
  }
  else {
    uVar9 = ~`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddTagsInternal<0,FTestTag_A>_>(void)'
             ::__l2::ThisTypesStaticIndex >> 0x1f;
    uVar6 = 0;
    if ((int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandAddTagsInternal<0,FTestTag_A>_>(void)'
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
      pFVar7 = (FMassCommandAddTagsInternal<0,FTestTag_A> *)(*pcVar3)();
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
        pFVar7 = (FMassCommandAddTagsInternal<0,FTestTag_A> *)(*pcVar3)();
        return pFVar7;
      }
      return *(FMassCommandAddTagsInternal<0,FTestTag_A> **)
              ((this->CommandInstances).AllocatorInstance.Data + lVar8 * 8);
    }
  }
  this_00 = ::operator_new(0x70);
  if (this_00 != (FMassCommandAddTagsInternal<0,FTestTag_A> *)0x0) {
    pFVar7 = FMassCommandAddTagsInternal<0,FTestTag_A>::FMassCommandAddTagsInternal<0,FTestTag_A>
                       (this_00);
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
    pFVar7 = (FMassCommandAddTagsInternal<0,FTestTag_A> *)(*pcVar3)();
    return pFVar7;
  }
  pFVar1 = (this->CommandInstances).AllocatorInstance.Data;
  puVar2 = *(undefined8 **)(pFVar1 + lVar8 * 8);
  *(FMassCommandAddTagsInternal<0,FTestTag_A> **)(pFVar1 + lVar8 * 8) = pFVar7;
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
    pFVar7 = (FMassCommandAddTagsInternal<0,FTestTag_A> *)(*pcVar3)();
    return pFVar7;
  }
  return *(FMassCommandAddTagsInternal<0,FTestTag_A> **)
          ((this->CommandInstances).AllocatorInstance.Data + lVar8 * 8);
}

// CreateOrAddCommand<FMassCommandBuildEntity<FTestFragment_Int,FTestFragment_Float>_> @ 1470db380

FMassCommandBuildEntity<FTestFragment_Int,FTestFragment_Float> * __thiscall
FMassCommandBuffer::
CreateOrAddCommand<FMassCommandBuildEntity<FTestFragment_Int,FTestFragment_Float>_>
          (FMassCommandBuffer *this)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  FMassCommandBuildEntity<FTestFragment_Int,FTestFragment_Float> *pFVar7;
  FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float> *this_00;
  FName *pFVar8;
  longlong lVar9;
  uint uVar10;
  FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float> *pFVar11;
  FName local_res8;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandBuildEntity<FTestFragment_Int,FTestFragment_Float>_>(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandBuildEntity<FTestFragment_Int,FTestFragment_Float>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandBuildEntity<FTestFragment_Int,FTestFragment_Float>_>(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    LOCK();
    UNLOCK();
    `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandBuildEntity<FTestFragment_Int,FTestFragment_Float>_>(void)'
    ::__l2::ThisTypesStaticIndex = (uint)FMassBatchedCommand::CommandsCounter;
    FMassBatchedCommand::CommandsCounter =
         (atomic<unsigned_int>)((int)FMassBatchedCommand::CommandsCounter + 1);
    _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandBuildEntity<FTestFragment_Int,FTestFragment_Float>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  uVar4 = `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandBuildEntity<FTestFragment_Int,FTestFragment_Float>_>(void)'
          ::__l2::ThisTypesStaticIndex;
  lVar9 = (longlong)
          (int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandBuildEntity<FTestFragment_Int,FTestFragment_Float>_>(void)'
               ::__l2::ThisTypesStaticIndex;
  pFVar11 = (FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float> *)0x0;
  if (((int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandBuildEntity<FTestFragment_Int,FTestFragment_Float>_>(void)'
            ::__l2::ThisTypesStaticIndex < 0) ||
     ((this->CommandInstances).ArrayNum <=
      (int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandBuildEntity<FTestFragment_Int,FTestFragment_Float>_>(void)'
           ::__l2::ThisTypesStaticIndex)) {
    TArray<TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_>,TSizedDefaultAllocator<32>_>
    ::AddZeroed(&this->CommandInstances,
                (`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandBuildEntity<FTestFragment_Int,FTestFragment_Float>_>(void)'
                 ::__l2::ThisTypesStaticIndex - (this->CommandInstances).ArrayNum) + 1);
    uVar10 = ~uVar4 >> 0x1f;
  }
  else {
    uVar10 = ~`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandBuildEntity<FTestFragment_Int,FTestFragment_Float>_>(void)'
              ::__l2::ThisTypesStaticIndex >> 0x1f;
    uVar6 = 0;
    if ((int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandBuildEntity<FTestFragment_Int,FTestFragment_Float>_>(void)'
             ::__l2::ThisTypesStaticIndex < (this->CommandInstances).ArrayNum) {
      uVar6 = uVar10;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FMassCommandBuildEntity<FTestFragment_Int,FTestFragment_Float> *)(*pcVar3)();
      return pFVar7;
    }
    if (*(longlong *)((this->CommandInstances).AllocatorInstance.Data + lVar9 * 8) != 0) {
      uVar6 = 0;
      if ((int)uVar4 < (this->CommandInstances).ArrayNum) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FMassCommandBuildEntity<FTestFragment_Int,FTestFragment_Float> *)(*pcVar3)();
        return pFVar7;
      }
      return *(FMassCommandBuildEntity<FTestFragment_Int,FTestFragment_Float> **)
              ((this->CommandInstances).AllocatorInstance.Data + lVar9 * 8);
    }
  }
  this_00 = ::operator_new(0x70);
  if (this_00 != (FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float> *)0x0) {
    pFVar8 = ::FName::FName(&local_res8,L"BuildEntity");
    FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float>::
    FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float>(this_00,Create,*pFVar8);
    this_00->_padding_ =
         (longlong)&___7__FMassCommandBuildEntity_UFTestFragment_Int__UFTestFragment_Float____6B_;
    pFVar11 = this_00;
  }
  uVar6 = 0;
  if ((int)uVar4 < (this->CommandInstances).ArrayNum) {
    uVar6 = uVar10;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FMassCommandBuildEntity<FTestFragment_Int,FTestFragment_Float> *)(*pcVar3)();
    return pFVar7;
  }
  pFVar1 = (this->CommandInstances).AllocatorInstance.Data;
  puVar2 = *(undefined8 **)(pFVar1 + lVar9 * 8);
  *(FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float> **)(pFVar1 + lVar9 * 8)
       = pFVar11;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  uVar6 = 0;
  if ((int)uVar4 < (this->CommandInstances).ArrayNum) {
    uVar6 = uVar10;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FMassCommandBuildEntity<FTestFragment_Int,FTestFragment_Float> *)(*pcVar3)();
    return pFVar7;
  }
  return *(FMassCommandBuildEntity<FTestFragment_Int,FTestFragment_Float> **)
          ((this->CommandInstances).AllocatorInstance.Data + lVar9 * 8);
}

// CreateOrAddCommand<FMassCommandMakeRelation<FMassChildOfRelation>_> @ 1470db5d0

FMassCommandMakeRelation<FMassChildOfRelation> * __thiscall
FMassCommandBuffer::CreateOrAddCommand<FMassCommandMakeRelation<FMassChildOfRelation>_>
          (FMassCommandBuffer *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  FMassCommandMakeRelation<FMassChildOfRelation> *pFVar6;
  undefined8 *puVar7;
  FName *pFVar8;
  uint uVar9;
  undefined8 *puVar10;
  uint uVar11;
  longlong lVar12;
  FName local_res8;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandMakeRelation<FMassChildOfRelation>_>(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandMakeRelation<FMassChildOfRelation>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandMakeRelation<FMassChildOfRelation>_>(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    LOCK();
    UNLOCK();
    `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandMakeRelation<FMassChildOfRelation>_>(void)'
    ::__l2::ThisTypesStaticIndex = (uint)FMassBatchedCommand::CommandsCounter;
    FMassBatchedCommand::CommandsCounter =
         (atomic<unsigned_int>)((int)FMassBatchedCommand::CommandsCounter + 1);
    _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandMakeRelation<FMassChildOfRelation>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  uVar3 = `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandMakeRelation<FMassChildOfRelation>_>(void)'
          ::__l2::ThisTypesStaticIndex;
  lVar12 = (longlong)
           (int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandMakeRelation<FMassChildOfRelation>_>(void)'
                ::__l2::ThisTypesStaticIndex;
  puVar10 = (undefined8 *)0x0;
  uVar9 = 0;
  if (((int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandMakeRelation<FMassChildOfRelation>_>(void)'
            ::__l2::ThisTypesStaticIndex < 0) ||
     ((this->CommandInstances).ArrayNum <=
      (int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandMakeRelation<FMassChildOfRelation>_>(void)'
           ::__l2::ThisTypesStaticIndex)) {
    TArray<TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_>,TSizedDefaultAllocator<32>_>
    ::AddZeroed(&this->CommandInstances,
                (`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandMakeRelation<FMassChildOfRelation>_>(void)'
                 ::__l2::ThisTypesStaticIndex - (this->CommandInstances).ArrayNum) + 1);
    uVar11 = ~uVar3 >> 0x1f;
  }
  else {
    uVar11 = ~`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandMakeRelation<FMassChildOfRelation>_>(void)'
              ::__l2::ThisTypesStaticIndex >> 0x1f;
    uVar5 = uVar9;
    if ((int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandMakeRelation<FMassChildOfRelation>_>(void)'
             ::__l2::ThisTypesStaticIndex < (this->CommandInstances).ArrayNum) {
      uVar5 = uVar11;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FMassCommandMakeRelation<FMassChildOfRelation> *)(*pcVar2)();
      return pFVar6;
    }
    if (*(longlong *)((this->CommandInstances).AllocatorInstance.Data + lVar12 * 8) != 0) {
      if ((int)uVar3 < (this->CommandInstances).ArrayNum) {
        uVar9 = uVar11;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FMassCommandMakeRelation<FMassChildOfRelation> *)(*pcVar2)();
        return pFVar6;
      }
      return *(FMassCommandMakeRelation<FMassChildOfRelation> **)
              ((this->CommandInstances).AllocatorInstance.Data + lVar12 * 8);
    }
  }
  puVar7 = ::operator_new(0x40);
  if (puVar7 != (undefined8 *)0x0) {
    pFVar8 = ::FName::FName(&local_res8,L"MakeRelation");
    *(FName *)((longlong)puVar7 + 0xc) = *pFVar8;
    *(undefined2 *)(puVar7 + 1) = 0x200;
    *(undefined4 *)(puVar7 + 3) = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    *puVar7 = &___7__FMassCommandMakeRelation_UFMassChildOfRelation____6B_;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar10 = puVar7;
  }
  if ((int)uVar3 < (this->CommandInstances).ArrayNum) {
    uVar9 = uVar11;
  }
  if ((uVar9 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FMassCommandMakeRelation<FMassChildOfRelation> *)(*pcVar2)();
    return pFVar6;
  }
  pFVar1 = (this->CommandInstances).AllocatorInstance.Data;
  puVar7 = *(undefined8 **)(pFVar1 + lVar12 * 8);
  *(undefined8 **)(pFVar1 + lVar12 * 8) = puVar10;
  if (puVar7 != (undefined8 *)0x0) {
    (**(code **)*puVar7)(puVar7,1);
  }
  uVar9 = 0;
  if ((int)uVar3 < (this->CommandInstances).ArrayNum) {
    uVar9 = uVar11;
  }
  if ((uVar9 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FMassCommandMakeRelation<FMassChildOfRelation> *)(*pcVar2)();
    return pFVar6;
  }
  return *(FMassCommandMakeRelation<FMassChildOfRelation> **)
          ((this->CommandInstances).AllocatorInstance.Data + lVar12 * 8);
}

// CreateOrAddCommand<FMassCommandRemoveFragmentsInternal<0,FTestFragment_Float>_> @ 1470db840

FMassCommandRemoveFragmentsInternal<0,FTestFragment_Float> * __thiscall
FMassCommandBuffer::CreateOrAddCommand<FMassCommandRemoveFragmentsInternal<0,FTestFragment_Float>_>
          (FMassCommandBuffer *this)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  FMassCommandRemoveFragmentsInternal<0,FTestFragment_Float> *pFVar7;
  FMassCommandRemoveFragmentsInternal<0,FTestFragment_Float> *this_00;
  longlong lVar8;
  uint uVar9;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandRemoveFragmentsInternal<0,FTestFragment_Float>_>(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandRemoveFragmentsInternal<0,FTestFragment_Float>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandRemoveFragmentsInternal<0,FTestFragment_Float>_>(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    LOCK();
    UNLOCK();
    `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandRemoveFragmentsInternal<0,FTestFragment_Float>_>(void)'
    ::__l2::ThisTypesStaticIndex = (uint)FMassBatchedCommand::CommandsCounter;
    FMassBatchedCommand::CommandsCounter =
         (atomic<unsigned_int>)((int)FMassBatchedCommand::CommandsCounter + 1);
    _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandRemoveFragmentsInternal<0,FTestFragment_Float>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  uVar4 = `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandRemoveFragmentsInternal<0,FTestFragment_Float>_>(void)'
          ::__l2::ThisTypesStaticIndex;
  lVar8 = (longlong)
          (int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandRemoveFragmentsInternal<0,FTestFragment_Float>_>(void)'
               ::__l2::ThisTypesStaticIndex;
  pFVar7 = (FMassCommandRemoveFragmentsInternal<0,FTestFragment_Float> *)0x0;
  if (((int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandRemoveFragmentsInternal<0,FTestFragment_Float>_>(void)'
            ::__l2::ThisTypesStaticIndex < 0) ||
     ((this->CommandInstances).ArrayNum <=
      (int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandRemoveFragmentsInternal<0,FTestFragment_Float>_>(void)'
           ::__l2::ThisTypesStaticIndex)) {
    TArray<TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_>,TSizedDefaultAllocator<32>_>
    ::AddZeroed(&this->CommandInstances,
                (`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandRemoveFragmentsInternal<0,FTestFragment_Float>_>(void)'
                 ::__l2::ThisTypesStaticIndex - (this->CommandInstances).ArrayNum) + 1);
    uVar9 = ~uVar4 >> 0x1f;
  }
  else {
    uVar9 = ~`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandRemoveFragmentsInternal<0,FTestFragment_Float>_>(void)'
             ::__l2::ThisTypesStaticIndex >> 0x1f;
    uVar6 = 0;
    if ((int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandRemoveFragmentsInternal<0,FTestFragment_Float>_>(void)'
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
      pFVar7 = (FMassCommandRemoveFragmentsInternal<0,FTestFragment_Float> *)(*pcVar3)();
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
        pFVar7 = (FMassCommandRemoveFragmentsInternal<0,FTestFragment_Float> *)(*pcVar3)();
        return pFVar7;
      }
      return *(FMassCommandRemoveFragmentsInternal<0,FTestFragment_Float> **)
              ((this->CommandInstances).AllocatorInstance.Data + lVar8 * 8);
    }
  }
  this_00 = ::operator_new(0x50);
  if (this_00 != (FMassCommandRemoveFragmentsInternal<0,FTestFragment_Float> *)0x0) {
    pFVar7 = FMassCommandRemoveFragmentsInternal<0,FTestFragment_Float>::
             FMassCommandRemoveFragmentsInternal<0,FTestFragment_Float>(this_00);
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
    pFVar7 = (FMassCommandRemoveFragmentsInternal<0,FTestFragment_Float> *)(*pcVar3)();
    return pFVar7;
  }
  pFVar1 = (this->CommandInstances).AllocatorInstance.Data;
  puVar2 = *(undefined8 **)(pFVar1 + lVar8 * 8);
  *(FMassCommandRemoveFragmentsInternal<0,FTestFragment_Float> **)(pFVar1 + lVar8 * 8) = pFVar7;
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
    pFVar7 = (FMassCommandRemoveFragmentsInternal<0,FTestFragment_Float> *)(*pcVar3)();
    return pFVar7;
  }
  return *(FMassCommandRemoveFragmentsInternal<0,FTestFragment_Float> **)
          ((this->CommandInstances).AllocatorInstance.Data + lVar8 * 8);
}

// CreateOrAddCommand<FMassCommandRemoveTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_> @ 1470dba70

FMassCommandRemoveTagsInternal<0,FFarmJustBecameReadyToHarvestTag> * __thiscall
FMassCommandBuffer::
CreateOrAddCommand<FMassCommandRemoveTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>
          (FMassCommandBuffer *this)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  FMassCommandRemoveTagsInternal<0,FFarmJustBecameReadyToHarvestTag> *pFVar7;
  FMassCommandRemoveTagsInternal<0,FFarmJustBecameReadyToHarvestTag> *this_00;
  longlong lVar8;
  uint uVar9;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandRemoveTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandRemoveTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandRemoveTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    LOCK();
    UNLOCK();
    `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandRemoveTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>(void)'
    ::__l2::ThisTypesStaticIndex = (uint)FMassBatchedCommand::CommandsCounter;
    FMassBatchedCommand::CommandsCounter =
         (atomic<unsigned_int>)((int)FMassBatchedCommand::CommandsCounter + 1);
    _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandRemoveTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  uVar4 = `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandRemoveTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>(void)'
          ::__l2::ThisTypesStaticIndex;
  lVar8 = (longlong)
          (int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandRemoveTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>(void)'
               ::__l2::ThisTypesStaticIndex;
  pFVar7 = (FMassCommandRemoveTagsInternal<0,FFarmJustBecameReadyToHarvestTag> *)0x0;
  if (((int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandRemoveTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>(void)'
            ::__l2::ThisTypesStaticIndex < 0) ||
     ((this->CommandInstances).ArrayNum <=
      (int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandRemoveTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>(void)'
           ::__l2::ThisTypesStaticIndex)) {
    TArray<TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_>,TSizedDefaultAllocator<32>_>
    ::AddZeroed(&this->CommandInstances,
                (`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandRemoveTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>(void)'
                 ::__l2::ThisTypesStaticIndex - (this->CommandInstances).ArrayNum) + 1);
    uVar9 = ~uVar4 >> 0x1f;
  }
  else {
    uVar9 = ~`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandRemoveTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>(void)'
             ::__l2::ThisTypesStaticIndex >> 0x1f;
    uVar6 = 0;
    if ((int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandRemoveTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>(void)'
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
      pFVar7 = (FMassCommandRemoveTagsInternal<0,FFarmJustBecameReadyToHarvestTag> *)(*pcVar3)();
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
        pFVar7 = (FMassCommandRemoveTagsInternal<0,FFarmJustBecameReadyToHarvestTag> *)(*pcVar3)();
        return pFVar7;
      }
      return *(FMassCommandRemoveTagsInternal<0,FFarmJustBecameReadyToHarvestTag> **)
              ((this->CommandInstances).AllocatorInstance.Data + lVar8 * 8);
    }
  }
  this_00 = ::operator_new(0x70);
  if (this_00 != (FMassCommandRemoveTagsInternal<0,FFarmJustBecameReadyToHarvestTag> *)0x0) {
    pFVar7 = FMassCommandRemoveTagsInternal<0,FFarmJustBecameReadyToHarvestTag>::
             FMassCommandRemoveTagsInternal<0,FFarmJustBecameReadyToHarvestTag>(this_00);
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
    pFVar7 = (FMassCommandRemoveTagsInternal<0,FFarmJustBecameReadyToHarvestTag> *)(*pcVar3)();
    return pFVar7;
  }
  pFVar1 = (this->CommandInstances).AllocatorInstance.Data;
  puVar2 = *(undefined8 **)(pFVar1 + lVar8 * 8);
  *(FMassCommandRemoveTagsInternal<0,FFarmJustBecameReadyToHarvestTag> **)(pFVar1 + lVar8 * 8) =
       pFVar7;
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
    pFVar7 = (FMassCommandRemoveTagsInternal<0,FFarmJustBecameReadyToHarvestTag> *)(*pcVar3)();
    return pFVar7;
  }
  return *(FMassCommandRemoveTagsInternal<0,FFarmJustBecameReadyToHarvestTag> **)
          ((this->CommandInstances).AllocatorInstance.Data + lVar8 * 8);
}

// CreateOrAddCommand<FMassCommandRemoveTagsInternal<0,FTestTag_A>_> @ 1470dbca0

FMassCommandRemoveTagsInternal<0,FTestTag_A> * __thiscall
FMassCommandBuffer::CreateOrAddCommand<FMassCommandRemoveTagsInternal<0,FTestTag_A>_>
          (FMassCommandBuffer *this)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  FMassCommandRemoveTagsInternal<0,FTestTag_A> *pFVar7;
  FMassCommandRemoveTagsInternal<0,FTestTag_A> *this_00;
  longlong lVar8;
  uint uVar9;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandRemoveTagsInternal<0,FTestTag_A>_>(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandRemoveTagsInternal<0,FTestTag_A>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandRemoveTagsInternal<0,FTestTag_A>_>(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    LOCK();
    UNLOCK();
    `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandRemoveTagsInternal<0,FTestTag_A>_>(void)'
    ::__l2::ThisTypesStaticIndex = (uint)FMassBatchedCommand::CommandsCounter;
    FMassBatchedCommand::CommandsCounter =
         (atomic<unsigned_int>)((int)FMassBatchedCommand::CommandsCounter + 1);
    _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandRemoveTagsInternal<0,FTestTag_A>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  uVar4 = `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandRemoveTagsInternal<0,FTestTag_A>_>(void)'
          ::__l2::ThisTypesStaticIndex;
  lVar8 = (longlong)
          (int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandRemoveTagsInternal<0,FTestTag_A>_>(void)'
               ::__l2::ThisTypesStaticIndex;
  pFVar7 = (FMassCommandRemoveTagsInternal<0,FTestTag_A> *)0x0;
  if (((int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandRemoveTagsInternal<0,FTestTag_A>_>(void)'
            ::__l2::ThisTypesStaticIndex < 0) ||
     ((this->CommandInstances).ArrayNum <=
      (int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandRemoveTagsInternal<0,FTestTag_A>_>(void)'
           ::__l2::ThisTypesStaticIndex)) {
    TArray<TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_>,TSizedDefaultAllocator<32>_>
    ::AddZeroed(&this->CommandInstances,
                (`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandRemoveTagsInternal<0,FTestTag_A>_>(void)'
                 ::__l2::ThisTypesStaticIndex - (this->CommandInstances).ArrayNum) + 1);
    uVar9 = ~uVar4 >> 0x1f;
  }
  else {
    uVar9 = ~`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandRemoveTagsInternal<0,FTestTag_A>_>(void)'
             ::__l2::ThisTypesStaticIndex >> 0x1f;
    uVar6 = 0;
    if ((int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandRemoveTagsInternal<0,FTestTag_A>_>(void)'
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
      pFVar7 = (FMassCommandRemoveTagsInternal<0,FTestTag_A> *)(*pcVar3)();
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
        pFVar7 = (FMassCommandRemoveTagsInternal<0,FTestTag_A> *)(*pcVar3)();
        return pFVar7;
      }
      return *(FMassCommandRemoveTagsInternal<0,FTestTag_A> **)
              ((this->CommandInstances).AllocatorInstance.Data + lVar8 * 8);
    }
  }
  this_00 = ::operator_new(0x70);
  if (this_00 != (FMassCommandRemoveTagsInternal<0,FTestTag_A> *)0x0) {
    pFVar7 = FMassCommandRemoveTagsInternal<0,FTestTag_A>::
             FMassCommandRemoveTagsInternal<0,FTestTag_A>(this_00);
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
    pFVar7 = (FMassCommandRemoveTagsInternal<0,FTestTag_A> *)(*pcVar3)();
    return pFVar7;
  }
  pFVar1 = (this->CommandInstances).AllocatorInstance.Data;
  puVar2 = *(undefined8 **)(pFVar1 + lVar8 * 8);
  *(FMassCommandRemoveTagsInternal<0,FTestTag_A> **)(pFVar1 + lVar8 * 8) = pFVar7;
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
    pFVar7 = (FMassCommandRemoveTagsInternal<0,FTestTag_A> *)(*pcVar3)();
    return pFVar7;
  }
  return *(FMassCommandRemoveTagsInternal<0,FTestTag_A> **)
          ((this->CommandInstances).AllocatorInstance.Data + lVar8 * 8);
}

// CreateOrAddCommand<FMassCommandSwapTagsInternal<0,FTestTag_A,FTestTag_B>_> @ 1470dbed0

FMassCommandSwapTagsInternal<0,FTestTag_A,FTestTag_B> * __thiscall
FMassCommandBuffer::CreateOrAddCommand<FMassCommandSwapTagsInternal<0,FTestTag_A,FTestTag_B>_>
          (FMassCommandBuffer *this)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  FMassCommandSwapTagsInternal<0,FTestTag_A,FTestTag_B> *pFVar7;
  FMassCommandSwapTagsInternal<0,FTestTag_A,FTestTag_B> *this_00;
  longlong lVar8;
  uint uVar9;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandSwapTagsInternal<0,FTestTag_A,FTestTag_B>_>(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandSwapTagsInternal<0,FTestTag_A,FTestTag_B>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandSwapTagsInternal<0,FTestTag_A,FTestTag_B>_>(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    LOCK();
    UNLOCK();
    `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandSwapTagsInternal<0,FTestTag_A,FTestTag_B>_>(void)'
    ::__l2::ThisTypesStaticIndex = (uint)FMassBatchedCommand::CommandsCounter;
    FMassBatchedCommand::CommandsCounter =
         (atomic<unsigned_int>)((int)FMassBatchedCommand::CommandsCounter + 1);
    _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandSwapTagsInternal<0,FTestTag_A,FTestTag_B>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  uVar4 = `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandSwapTagsInternal<0,FTestTag_A,FTestTag_B>_>(void)'
          ::__l2::ThisTypesStaticIndex;
  lVar8 = (longlong)
          (int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandSwapTagsInternal<0,FTestTag_A,FTestTag_B>_>(void)'
               ::__l2::ThisTypesStaticIndex;
  pFVar7 = (FMassCommandSwapTagsInternal<0,FTestTag_A,FTestTag_B> *)0x0;
  if (((int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandSwapTagsInternal<0,FTestTag_A,FTestTag_B>_>(void)'
            ::__l2::ThisTypesStaticIndex < 0) ||
     ((this->CommandInstances).ArrayNum <=
      (int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandSwapTagsInternal<0,FTestTag_A,FTestTag_B>_>(void)'
           ::__l2::ThisTypesStaticIndex)) {
    TArray<TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_>,TSizedDefaultAllocator<32>_>
    ::AddZeroed(&this->CommandInstances,
                (`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandSwapTagsInternal<0,FTestTag_A,FTestTag_B>_>(void)'
                 ::__l2::ThisTypesStaticIndex - (this->CommandInstances).ArrayNum) + 1);
    uVar9 = ~uVar4 >> 0x1f;
  }
  else {
    uVar9 = ~`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandSwapTagsInternal<0,FTestTag_A,FTestTag_B>_>(void)'
             ::__l2::ThisTypesStaticIndex >> 0x1f;
    uVar6 = 0;
    if ((int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandSwapTagsInternal<0,FTestTag_A,FTestTag_B>_>(void)'
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
      pFVar7 = (FMassCommandSwapTagsInternal<0,FTestTag_A,FTestTag_B> *)(*pcVar3)();
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
        pFVar7 = (FMassCommandSwapTagsInternal<0,FTestTag_A,FTestTag_B> *)(*pcVar3)();
        return pFVar7;
      }
      return *(FMassCommandSwapTagsInternal<0,FTestTag_A,FTestTag_B> **)
              ((this->CommandInstances).AllocatorInstance.Data + lVar8 * 8);
    }
  }
  this_00 = ::operator_new(0x70);
  if (this_00 != (FMassCommandSwapTagsInternal<0,FTestTag_A,FTestTag_B> *)0x0) {
    pFVar7 = FMassCommandSwapTagsInternal<0,FTestTag_A,FTestTag_B>::
             FMassCommandSwapTagsInternal<0,FTestTag_A,FTestTag_B>(this_00);
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
    pFVar7 = (FMassCommandSwapTagsInternal<0,FTestTag_A,FTestTag_B> *)(*pcVar3)();
    return pFVar7;
  }
  pFVar1 = (this->CommandInstances).AllocatorInstance.Data;
  puVar2 = *(undefined8 **)(pFVar1 + lVar8 * 8);
  *(FMassCommandSwapTagsInternal<0,FTestTag_A,FTestTag_B> **)(pFVar1 + lVar8 * 8) = pFVar7;
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
    pFVar7 = (FMassCommandSwapTagsInternal<0,FTestTag_A,FTestTag_B> *)(*pcVar3)();
    return pFVar7;
  }
  return *(FMassCommandSwapTagsInternal<0,FTestTag_A,FTestTag_B> **)
          ((this->CommandInstances).AllocatorInstance.Data + lVar8 * 8);
}

// CreateOrAddCommand<FMassDeferredCommand<5>_> @ 1470dc100

FMassDeferredCommand<5> * __thiscall
FMassCommandBuffer::CreateOrAddCommand<FMassDeferredCommand<5>_>(FMassCommandBuffer *this)

{
  FName FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  FMassDeferredCommand<5> *pFVar7;
  undefined8 *puVar8;
  FName *pFVar9;
  undefined8 *puVar10;
  uint uVar11;
  longlong lVar12;
  FName local_res8;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassDeferredCommand<5>_>(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassDeferredCommand<5>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassDeferredCommand<5>_>(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    LOCK();
    UNLOCK();
    `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassDeferredCommand<5>_>(void)'
    ::__l2::ThisTypesStaticIndex = (uint)FMassBatchedCommand::CommandsCounter;
    FMassBatchedCommand::CommandsCounter =
         (atomic<unsigned_int>)((int)FMassBatchedCommand::CommandsCounter + 1);
    _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassDeferredCommand<5>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  uVar4 = `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassDeferredCommand<5>_>(void)'
          ::__l2::ThisTypesStaticIndex;
  lVar12 = (longlong)
           (int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassDeferredCommand<5>_>(void)'
                ::__l2::ThisTypesStaticIndex;
  puVar10 = (undefined8 *)0x0;
  if (((int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassDeferredCommand<5>_>(void)'
            ::__l2::ThisTypesStaticIndex < 0) ||
     ((this->CommandInstances).ArrayNum <=
      (int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassDeferredCommand<5>_>(void)'
           ::__l2::ThisTypesStaticIndex)) {
    TArray<TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_>,TSizedDefaultAllocator<32>_>
    ::AddZeroed(&this->CommandInstances,
                (`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassDeferredCommand<5>_>(void)'
                 ::__l2::ThisTypesStaticIndex - (this->CommandInstances).ArrayNum) + 1);
    uVar11 = ~uVar4 >> 0x1f;
  }
  else {
    uVar11 = ~`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassDeferredCommand<5>_>(void)'
              ::__l2::ThisTypesStaticIndex >> 0x1f;
    uVar6 = 0;
    if ((int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassDeferredCommand<5>_>(void)'
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
      pFVar7 = (FMassDeferredCommand<5> *)(*pcVar3)();
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
        pFVar7 = (FMassDeferredCommand<5> *)(*pcVar3)();
        return pFVar7;
      }
      return *(FMassDeferredCommand<5> **)
              ((this->CommandInstances).AllocatorInstance.Data + lVar12 * 8);
    }
  }
  puVar8 = ::operator_new(0x28);
  if (puVar8 != (undefined8 *)0x0) {
    pFVar9 = ::FName::FName(&local_res8,L"BatchedDeferredCommand");
    FVar1 = *pFVar9;
    *puVar8 = &___7__FMassDeferredCommand__04__6B_;
    *(undefined2 *)(puVar8 + 1) = 0x500;
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
    pFVar7 = (FMassDeferredCommand<5> *)(*pcVar3)();
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
    pFVar7 = (FMassDeferredCommand<5> *)(*pcVar3)();
    return pFVar7;
  }
  return *(FMassDeferredCommand<5> **)((this->CommandInstances).AllocatorInstance.Data + lVar12 * 8)
  ;
}

// CreateOrAddCommand<FMassCommandDestroyEntities> @ 1470dc360

FMassCommandDestroyEntities * __thiscall
FMassCommandBuffer::CreateOrAddCommand<FMassCommandDestroyEntities>(FMassCommandBuffer *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  FMassCommandDestroyEntities *pFVar6;
  undefined8 *puVar7;
  FName *pFVar8;
  uint uVar9;
  undefined8 *puVar10;
  uint uVar11;
  longlong lVar12;
  FName local_res8;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandDestroyEntities>(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandDestroyEntities>(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandDestroyEntities>(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    LOCK();
    UNLOCK();
    `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandDestroyEntities>(void)'
    ::__l2::ThisTypesStaticIndex = (uint)FMassBatchedCommand::CommandsCounter;
    FMassBatchedCommand::CommandsCounter =
         (atomic<unsigned_int>)((int)FMassBatchedCommand::CommandsCounter + 1);
    _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandDestroyEntities>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  uVar3 = `public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandDestroyEntities>(void)'
          ::__l2::ThisTypesStaticIndex;
  lVar12 = (longlong)
           (int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandDestroyEntities>(void)'
                ::__l2::ThisTypesStaticIndex;
  puVar10 = (undefined8 *)0x0;
  uVar9 = 0;
  if (((int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandDestroyEntities>(void)'
            ::__l2::ThisTypesStaticIndex < 0) ||
     ((this->CommandInstances).ArrayNum <=
      (int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandDestroyEntities>(void)'
           ::__l2::ThisTypesStaticIndex)) {
    TArray<TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_>,TSizedDefaultAllocator<32>_>
    ::AddZeroed(&this->CommandInstances,
                (`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandDestroyEntities>(void)'
                 ::__l2::ThisTypesStaticIndex - (this->CommandInstances).ArrayNum) + 1);
    uVar11 = ~uVar3 >> 0x1f;
  }
  else {
    uVar11 = ~`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandDestroyEntities>(void)'
              ::__l2::ThisTypesStaticIndex >> 0x1f;
    uVar5 = uVar9;
    if ((int)`public:_static_unsigned_int___cdecl_FMassBatchedCommand::GetCommandIndex<FMassCommandDestroyEntities>(void)'
             ::__l2::ThisTypesStaticIndex < (this->CommandInstances).ArrayNum) {
      uVar5 = uVar11;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FMassCommandDestroyEntities *)(*pcVar2)();
      return pFVar6;
    }
    if (*(longlong *)((this->CommandInstances).AllocatorInstance.Data + lVar12 * 8) != 0) {
      if ((int)uVar3 < (this->CommandInstances).ArrayNum) {
        uVar9 = uVar11;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FMassCommandDestroyEntities *)(*pcVar2)();
        return pFVar6;
      }
      return *(FMassCommandDestroyEntities **)
              ((this->CommandInstances).AllocatorInstance.Data + lVar12 * 8);
    }
  }
  puVar7 = ::operator_new(0x30);
  if (puVar7 != (undefined8 *)0x0) {
    pFVar8 = ::FName::FName(&local_res8,L"DestroyEntities");
    *(FName *)((longlong)puVar7 + 0xc) = *pFVar8;
    *(undefined2 *)(puVar7 + 1) = 0x600;
    *(undefined4 *)(puVar7 + 3) = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    *puVar7 = &___7FMassCommandDestroyEntities__6B_;
    puVar10 = puVar7;
  }
  if ((int)uVar3 < (this->CommandInstances).ArrayNum) {
    uVar9 = uVar11;
  }
  if ((uVar9 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FMassCommandDestroyEntities *)(*pcVar2)();
    return pFVar6;
  }
  pFVar1 = (this->CommandInstances).AllocatorInstance.Data;
  puVar7 = *(undefined8 **)(pFVar1 + lVar12 * 8);
  *(undefined8 **)(pFVar1 + lVar12 * 8) = puVar10;
  if (puVar7 != (undefined8 *)0x0) {
    (**(code **)*puVar7)(puVar7,1);
  }
  uVar9 = 0;
  if ((int)uVar3 < (this->CommandInstances).ArrayNum) {
    uVar9 = uVar11;
  }
  if ((uVar9 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FMassCommandDestroyEntities *)(*pcVar2)();
    return pFVar6;
  }
  return *(FMassCommandDestroyEntities **)
          ((this->CommandInstances).AllocatorInstance.Data + lVar12 * 8);
}

// PushCommand<FMassCommandAddFragmentsInternal<0,FTestFragment_Int>_> @ 1470ed170

void __thiscall
FMassCommandBuffer::PushCommand<FMassCommandAddFragmentsInternal<0,FTestFragment_Int>_>
          (FMassCommandBuffer *this,TArrayView<FMassEntityHandle_const_,int> *param_1)

{
  code *pcVar1;
  bool bVar2;
  DWORD DVar3;
  FMassCommandAddFragmentsInternal<0,FTestFragment_Int> *this_00;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  TArrayView<FMassEntityHandle_const_,int> local_18;
  
  if (this->bIsFlushing != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsFlushing() == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                       ,0x8f,
                       L"Trying to push commands is not supported while the given buffer is being flushed"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  DVar3 = GetCurrentThreadId();
  if (this->OwnerThreadId != DVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OwnerThreadId == FPlatformTLS::GetCurrentThreadId()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                       ,0x8f,
                       L"Commands can be pushed only in the same thread where the command buffer was created."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddFragmentsInternal<0,FTestFragment_Int>_>(TArrayView<FMassEntityHandle_const_,int>)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddFragmentsInternal<0,FTestFragment_Int>_>(TArrayView<FMassEntityHandle_const_,int>)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddFragmentsInternal<0,FTestFragment_Int>_>(TArrayView<FMassEntityHandle_const_,int>)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddFragmentsInternal<0,FTestFragment_Int>_>(TArrayView<FMassEntityHandle_const_,int>)___ptr64'
                      ::__l2::LLMScope_Name146,L"Mass/PushCommand");
      _Init_thread_footer(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddFragmentsInternal<0,FTestFragment_Int>_>(TArrayView<FMassEntityHandle_const_,int>)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddFragmentsInternal<0,FTestFragment_Int>_>(TArrayView<FMassEntityHandle_const_,int>)___ptr64'
             ::__l2::LLMScope_Name146,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res10,
             &`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddFragmentsInternal<0,FTestFragment_Int>_>(TArrayView<FMassEntityHandle_const_,int>)___ptr64'
              ::__l2::LLMScope_Name146,true);
  this_00 = CreateOrAddCommand<FMassCommandAddFragmentsInternal<0,FTestFragment_Int>_>(this);
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  FMassBatchedEntityCommand::Add((FMassBatchedEntityCommand *)this_00,&local_18);
  this->ActiveCommandsCounter = this->ActiveCommandsCounter + 1;
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// PushCommand<FMassCommandAddTagsInternal<0,FTestTag_A>,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&> @ 1470ed2c0

void __thiscall
FMassCommandBuffer::
PushCommand<FMassCommandAddTagsInternal<0,FTestTag_A>,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&>
          (FMassCommandBuffer *this,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  DWORD DVar4;
  FMassCommandAddTagsInternal<0,FTestTag_A> *this_00;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  undefined4 uStack_1c;
  TArrayView<FMassEntityHandle_const_,int> local_18;
  
  if (this->bIsFlushing != false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsFlushing() == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                       ,0x77,
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
                       ,0x77,
                       L"Commands can be pushed only in the same thread where the command buffer was created."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddTagsInternal<0,FTestTag_A>,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&___ptr64>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddTagsInternal<0,FTestTag_A>,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&___ptr64>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddTagsInternal<0,FTestTag_A>,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&___ptr64>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddTagsInternal<0,FTestTag_A>,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&___ptr64>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name122,L"Mass/PushCommand");
      _Init_thread_footer(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddTagsInternal<0,FTestTag_A>,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&___ptr64>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddTagsInternal<0,FTestTag_A>,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&___ptr64>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'
             ::__l2::LLMScope_Name122,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res10,
             &`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddTagsInternal<0,FTestTag_A>,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&___ptr64>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'
              ::__l2::LLMScope_Name122,true);
  this_00 = CreateOrAddCommand<FMassCommandAddTagsInternal<0,FTestTag_A>_>(this);
  local_18.DataPtr = (FMassEntityHandle *)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  FMassBatchedEntityCommand::Add((FMassBatchedEntityCommand *)this_00,&local_18);
  this->ActiveCommandsCounter = this->ActiveCommandsCounter + 1;
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// PushCommand<FMassCommandMakeRelation<FMassChildOfRelation>,FMassEntityHandle_&,FMassEntityHandle_&> @ 1470ed460

void __thiscall
FMassCommandBuffer::
PushCommand<FMassCommandMakeRelation<FMassChildOfRelation>,FMassEntityHandle_&,FMassEntityHandle_&>
          (FMassCommandBuffer *this,FMassEntityHandle *param_1,FMassEntityHandle *param_2)

{
  int *piVar1;
  FMassEntityHandle *pFVar2;
  code *pcVar3;
  bool bVar4;
  DWORD DVar5;
  int iVar6;
  FMassCommandMakeRelation<FMassChildOfRelation> *this_00;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  FMassEntityHandle local_28 [2];
  
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
      `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandMakeRelation<FMassChildOfRelation>,FMassEntityHandle&___ptr64,FMassEntityHandle&___ptr64>(FMassEntityHandle&___ptr64,FMassEntityHandle&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandMakeRelation<FMassChildOfRelation>,FMassEntityHandle&___ptr64,FMassEntityHandle&___ptr64>(FMassEntityHandle&___ptr64,FMassEntityHandle&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandMakeRelation<FMassChildOfRelation>,FMassEntityHandle&___ptr64,FMassEntityHandle&___ptr64>(FMassEntityHandle&___ptr64,FMassEntityHandle&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandMakeRelation<FMassChildOfRelation>,FMassEntityHandle&___ptr64,FMassEntityHandle&___ptr64>(FMassEntityHandle&___ptr64,FMassEntityHandle&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name122,L"Mass/PushCommand");
      _Init_thread_footer(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandMakeRelation<FMassChildOfRelation>,FMassEntityHandle&___ptr64,FMassEntityHandle&___ptr64>(FMassEntityHandle&___ptr64,FMassEntityHandle&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandMakeRelation<FMassChildOfRelation>,FMassEntityHandle&___ptr64,FMassEntityHandle&___ptr64>(FMassEntityHandle&___ptr64,FMassEntityHandle&___ptr64)___ptr64'
             ::__l2::LLMScope_Name122,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res10,
             &`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandMakeRelation<FMassChildOfRelation>,FMassEntityHandle&___ptr64,FMassEntityHandle&___ptr64>(FMassEntityHandle&___ptr64,FMassEntityHandle&___ptr64)___ptr64'
              ::__l2::LLMScope_Name122,true);
  this_00 = CreateOrAddCommand<FMassCommandMakeRelation<FMassChildOfRelation>_>(this);
  local_28[0] = *param_2;
  FMassBatchedEntityCommand::Add((FMassBatchedEntityCommand *)this_00,*param_1);
  pFVar2 = (FMassEntityHandle *)(this_00->Parents).AllocatorInstance.Data;
  if ((pFVar2 <= local_28) && (local_28 < pFVar2 + (this_00->Parents).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this_00->Parents).ArrayNum;
  piVar1 = &(this_00->Parents).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this_00->Parents).AllocatorInstance,piVar1);
  }
  (this_00->Parents).ArrayNum = iVar6 + 1;
  *(FMassEntityHandle *)((this_00->Parents).AllocatorInstance.Data + (longlong)iVar6 * 8) =
       local_28[0];
  this->ActiveCommandsCounter = this->ActiveCommandsCounter + 1;
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// PushCommand<FMassCommandMakeRelation<FMassChildOfRelation>,TArrayView<FMassEntityHandle,int>,TArrayView<FMassEntityHandle,int>_> @ 1470ed660

void __thiscall
FMassCommandBuffer::
PushCommand<FMassCommandMakeRelation<FMassChildOfRelation>,TArrayView<FMassEntityHandle,int>,TArrayView<FMassEntityHandle,int>_>
          (FMassCommandBuffer *this,TArrayView<FMassEntityHandle,int> *param_1,
          TArrayView<FMassEntityHandle,int> *param_2)

{
  code *pcVar1;
  bool bVar2;
  DWORD DVar3;
  FMassCommandMakeRelation<FMassChildOfRelation> *this_00;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  undefined4 uStack_3c;
  undefined4 uStack_2c;
  TArrayView<FMassEntityHandle_const_,int> local_28;
  TArrayView<FMassEntityHandle_const_,int> local_18;
  
  if (this->bIsFlushing != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsFlushing() == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                       ,0x77,
                       L"Trying to push commands is not supported while the given buffer is being flushed"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  DVar3 = GetCurrentThreadId();
  if (this->OwnerThreadId != DVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OwnerThreadId == FPlatformTLS::GetCurrentThreadId()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                       ,0x77,
                       L"Commands can be pushed only in the same thread where the command buffer was created."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandMakeRelation<FMassChildOfRelation>,TArrayView<FMassEntityHandle,int>,TArrayView<struct_FMassEntityHandle,int>_>(TArrayView<FMassEntityHandle,int>&&___ptr64,TArrayView<FMassEntityHandle,int>&&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandMakeRelation<FMassChildOfRelation>,TArrayView<FMassEntityHandle,int>,TArrayView<struct_FMassEntityHandle,int>_>(TArrayView<FMassEntityHandle,int>&&___ptr64,TArrayView<FMassEntityHandle,int>&&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandMakeRelation<FMassChildOfRelation>,TArrayView<FMassEntityHandle,int>,TArrayView<struct_FMassEntityHandle,int>_>(TArrayView<FMassEntityHandle,int>&&___ptr64,TArrayView<FMassEntityHandle,int>&&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandMakeRelation<FMassChildOfRelation>,TArrayView<FMassEntityHandle,int>,TArrayView<struct_FMassEntityHandle,int>_>(TArrayView<FMassEntityHandle,int>&&___ptr64,TArrayView<FMassEntityHandle,int>&&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name122,L"Mass/PushCommand");
      _Init_thread_footer(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandMakeRelation<FMassChildOfRelation>,TArrayView<FMassEntityHandle,int>,TArrayView<struct_FMassEntityHandle,int>_>(TArrayView<FMassEntityHandle,int>&&___ptr64,TArrayView<FMassEntityHandle,int>&&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandMakeRelation<FMassChildOfRelation>,TArrayView<FMassEntityHandle,int>,TArrayView<struct_FMassEntityHandle,int>_>(TArrayView<FMassEntityHandle,int>&&___ptr64,TArrayView<FMassEntityHandle,int>&&___ptr64)___ptr64'
             ::__l2::LLMScope_Name122,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res10,
             &`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandMakeRelation<FMassChildOfRelation>,TArrayView<FMassEntityHandle,int>,TArrayView<struct_FMassEntityHandle,int>_>(TArrayView<FMassEntityHandle,int>&&___ptr64,TArrayView<FMassEntityHandle,int>&&___ptr64)___ptr64'
              ::__l2::LLMScope_Name122,true);
  this_00 = CreateOrAddCommand<FMassCommandMakeRelation<FMassChildOfRelation>_>(this);
  local_28.DataPtr = param_2->DataPtr;
  local_18.DataPtr = param_1->DataPtr;
  local_28._12_4_ = uStack_3c;
  local_28.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = uStack_2c;
  local_18.ArrayNum = param_1->ArrayNum;
  FMassCommandMakeRelation<FMassChildOfRelation>::Add(this_00,&local_18,&local_28);
  this->ActiveCommandsCounter = this->ActiveCommandsCounter + 1;
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// PushCommand<FMassCommandRemoveTagsInternal<0,FTestTag_A>,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_> @ 1470ed800

void __thiscall
FMassCommandBuffer::
PushCommand<FMassCommandRemoveTagsInternal<0,FTestTag_A>,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
          (FMassCommandBuffer *this,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  DWORD DVar3;
  FMassCommandRemoveTagsInternal<0,FTestTag_A> *this_00;
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (this->bIsFlushing != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsFlushing() == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                       ,0x77,
                       L"Trying to push commands is not supported while the given buffer is being flushed"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  DVar3 = GetCurrentThreadId();
  if (this->OwnerThreadId != DVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OwnerThreadId == FPlatformTLS::GetCurrentThreadId()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                       ,0x77,
                       L"Commands can be pushed only in the same thread where the command buffer was created."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandRemoveTagsInternal<0,FTestTag_A>,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandRemoveTagsInternal<0,FTestTag_A>,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandRemoveTagsInternal<0,FTestTag_A>,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandRemoveTagsInternal<0,FTestTag_A>,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name122,L"Mass/PushCommand");
      _Init_thread_footer(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandRemoveTagsInternal<0,FTestTag_A>,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandRemoveTagsInternal<0,FTestTag_A>,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
             ::__l2::LLMScope_Name122,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandRemoveTagsInternal<0,FTestTag_A>,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
              ::__l2::LLMScope_Name122,true);
  this_00 = CreateOrAddCommand<FMassCommandRemoveTagsInternal<0,FTestTag_A>_>(this);
  FMassBatchedEntityCommand::Add((FMassBatchedEntityCommand *)this_00,param_1);
  this->ActiveCommandsCounter = this->ActiveCommandsCounter + 1;
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// PushCommand<FMassCommandAddFragmentInstances,FTestFragment_Array_&> @ 1470ee060

void __thiscall
FMassCommandBuffer::PushCommand<FMassCommandAddFragmentInstances,FTestFragment_Array_&>
          (FMassCommandBuffer *this,FMassEntityHandle param_1,FTestFragment_Array *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  DWORD DVar5;
  int iVar6;
  FMassCommandAddFragmentInstances<FTestFragment_Array_&> *this_00;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  if (this->bIsFlushing != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsFlushing() == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                       ,0x6b,
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
                       ,0x6b,
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
      `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddFragmentInstances,FTestFragment_Array&___ptr64>(FMassEntityHandle,FTestFragment_Array&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddFragmentInstances,FTestFragment_Array&___ptr64>(FMassEntityHandle,FTestFragment_Array&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddFragmentInstances,FTestFragment_Array&___ptr64>(FMassEntityHandle,FTestFragment_Array&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddFragmentInstances,FTestFragment_Array&___ptr64>(FMassEntityHandle,FTestFragment_Array&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name110,L"Mass/PushCommand");
      _Init_thread_footer(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddFragmentInstances,FTestFragment_Array&___ptr64>(FMassEntityHandle,FTestFragment_Array&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddFragmentInstances,FTestFragment_Array&___ptr64>(FMassEntityHandle,FTestFragment_Array&___ptr64)___ptr64'
             ::__l2::LLMScope_Name110,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res10,
             &`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddFragmentInstances,FTestFragment_Array&___ptr64>(FMassEntityHandle,FTestFragment_Array&___ptr64)___ptr64'
              ::__l2::LLMScope_Name110,true);
  this_00 = CreateOrAddCommand<FMassCommandAddFragmentInstances<FTestFragment_Array_&>_>(this);
  FMassBatchedEntityCommand::Add((FMassBatchedEntityCommand *)this_00,param_1);
  pFVar2 = (this_00->Fragments).FragmentInstances.AllocatorInstance.Data;
  if ((pFVar2 <= param_2) &&
     (param_2 < pFVar2 + (longlong)(this_00->Fragments).FragmentInstances.ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this_00->Fragments).FragmentInstances.ArrayNum;
  piVar1 = &(this_00->Fragments).FragmentInstances.ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&this_00->Fragments,piVar1);
  }
  (this_00->Fragments).FragmentInstances.ArrayNum = iVar6 + 1;
  FTestFragment_Array::FTestFragment_Array
            ((FTestFragment_Array *)
             ((this_00->Fragments).FragmentInstances.AllocatorInstance.Data + (longlong)iVar6 * 0x10
             ),param_2);
  this->ActiveCommandsCounter = this->ActiveCommandsCounter + 1;
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// PushCommand<FMassCommandAddFragmentInstances,FTestFragment_Float> @ 1470ee250

void __thiscall
FMassCommandBuffer::PushCommand<FMassCommandAddFragmentInstances,FTestFragment_Float>
          (FMassCommandBuffer *this,FMassEntityHandle param_1,FTestFragment_Float *param_2)

{
  code *pcVar1;
  bool bVar2;
  DWORD DVar3;
  FMassCommandAddFragmentInstances<FTestFragment_Float> *this_00;
  FLLMScope local_res8 [2];
  FTestFragment_Float local_res10 [2];
  FMemScope local_res18;
  
  if (this->bIsFlushing != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsFlushing() == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                       ,0x6b,
                       L"Trying to push commands is not supported while the given buffer is being flushed"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  DVar3 = GetCurrentThreadId();
  if (this->OwnerThreadId != DVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OwnerThreadId == FPlatformTLS::GetCurrentThreadId()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                       ,0x6b,
                       L"Commands can be pushed only in the same thread where the command buffer was created."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddFragmentInstances,FTestFragment_Float>(FMassEntityHandle,FTestFragment_Float&&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddFragmentInstances,FTestFragment_Float>(FMassEntityHandle,FTestFragment_Float&&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddFragmentInstances,FTestFragment_Float>(FMassEntityHandle,FTestFragment_Float&&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddFragmentInstances,FTestFragment_Float>(FMassEntityHandle,FTestFragment_Float&&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name110,L"Mass/PushCommand");
      _Init_thread_footer(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddFragmentInstances,FTestFragment_Float>(FMassEntityHandle,FTestFragment_Float&&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddFragmentInstances,FTestFragment_Float>(FMassEntityHandle,FTestFragment_Float&&___ptr64)___ptr64'
             ::__l2::LLMScope_Name110,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res18,
             &`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddFragmentInstances,FTestFragment_Float>(FMassEntityHandle,FTestFragment_Float&&___ptr64)___ptr64'
              ::__l2::LLMScope_Name110,true);
  this_00 = CreateOrAddCommand<FMassCommandAddFragmentInstances<FTestFragment_Float>_>(this);
  local_res10[0] = (FTestFragment_Float)param_2->Value;
  FMassBatchedEntityCommand::Add((FMassBatchedEntityCommand *)this_00,param_1);
  UE::Mass::TMultiArray<FTestFragment_Float>::Add(&this_00->Fragments,local_res10);
  this->ActiveCommandsCounter = this->ActiveCommandsCounter + 1;
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// PushCommand<FMassCommandAddFragmentInstances,FTestFragment_Int,FTestFragment_Float> @ 1470ee3c0

void __thiscall
FMassCommandBuffer::
PushCommand<FMassCommandAddFragmentInstances,FTestFragment_Int,FTestFragment_Float>
          (FMassCommandBuffer *this,FMassEntityHandle param_1,FTestFragment_Int *param_2,
          FTestFragment_Float *param_3)

{
  code *pcVar1;
  bool bVar2;
  DWORD DVar3;
  FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float> *this_00;
  FLLMScope local_res8 [2];
  FMemScope local_18 [2];
  
  if (this->bIsFlushing != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsFlushing() == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                       ,0x6b,
                       L"Trying to push commands is not supported while the given buffer is being flushed"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  DVar3 = GetCurrentThreadId();
  if (this->OwnerThreadId != DVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OwnerThreadId == FPlatformTLS::GetCurrentThreadId()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                       ,0x6b,
                       L"Commands can be pushed only in the same thread where the command buffer was created."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddFragmentInstances,FTestFragment_Int,FTestFragment_Float>(FMassEntityHandle,FTestFragment_Int&&___ptr64,FTestFragment_Float&&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddFragmentInstances,FTestFragment_Int,FTestFragment_Float>(FMassEntityHandle,FTestFragment_Int&&___ptr64,FTestFragment_Float&&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddFragmentInstances,FTestFragment_Int,FTestFragment_Float>(FMassEntityHandle,FTestFragment_Int&&___ptr64,FTestFragment_Float&&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddFragmentInstances,FTestFragment_Int,FTestFragment_Float>(FMassEntityHandle,FTestFragment_Int&&___ptr64,FTestFragment_Float&&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name110,L"Mass/PushCommand");
      _Init_thread_footer(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddFragmentInstances,FTestFragment_Int,FTestFragment_Float>(FMassEntityHandle,FTestFragment_Int&&___ptr64,FTestFragment_Float&&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddFragmentInstances,FTestFragment_Int,FTestFragment_Float>(FMassEntityHandle,FTestFragment_Int&&___ptr64,FTestFragment_Float&&___ptr64)___ptr64'
             ::__l2::LLMScope_Name110,false,None,Default,true);
  FMemScope::FMemScope
            (local_18,&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddFragmentInstances,FTestFragment_Int,FTestFragment_Float>(FMassEntityHandle,FTestFragment_Int&&___ptr64,FTestFragment_Float&&___ptr64)___ptr64'
                       ::__l2::LLMScope_Name110,true);
  this_00 = CreateOrAddCommand<FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float>_>
                      (this);
  FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float>::Add
            (this_00,param_1,(FTestFragment_Int)param_2->Value,(FTestFragment_Float)param_3->Value);
  this->ActiveCommandsCounter = this->ActiveCommandsCounter + 1;
  FMemScope::~FMemScope(local_18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// PushCommand<FMassCommandBuildEntity,FTestFragment_Int,FTestFragment_Float> @ 1470ee520

void __thiscall
FMassCommandBuffer::PushCommand<FMassCommandBuildEntity,FTestFragment_Int,FTestFragment_Float>
          (FMassCommandBuffer *this,FMassEntityHandle param_1,FTestFragment_Int *param_2,
          FTestFragment_Float *param_3)

{
  code *pcVar1;
  bool bVar2;
  DWORD DVar3;
  FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float> *this_00;
  FLLMScope local_res8 [2];
  FMemScope local_18 [2];
  
  if (this->bIsFlushing != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsFlushing() == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                       ,0x6b,
                       L"Trying to push commands is not supported while the given buffer is being flushed"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  DVar3 = GetCurrentThreadId();
  if (this->OwnerThreadId != DVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OwnerThreadId == FPlatformTLS::GetCurrentThreadId()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                       ,0x6b,
                       L"Commands can be pushed only in the same thread where the command buffer was created."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandBuildEntity,FTestFragment_Int,FTestFragment_Float>(FMassEntityHandle,FTestFragment_Int&&___ptr64,FTestFragment_Float&&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandBuildEntity,FTestFragment_Int,FTestFragment_Float>(FMassEntityHandle,FTestFragment_Int&&___ptr64,FTestFragment_Float&&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandBuildEntity,FTestFragment_Int,FTestFragment_Float>(FMassEntityHandle,FTestFragment_Int&&___ptr64,FTestFragment_Float&&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandBuildEntity,FTestFragment_Int,FTestFragment_Float>(FMassEntityHandle,FTestFragment_Int&&___ptr64,FTestFragment_Float&&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name110,L"Mass/PushCommand");
      _Init_thread_footer(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandBuildEntity,FTestFragment_Int,FTestFragment_Float>(FMassEntityHandle,FTestFragment_Int&&___ptr64,FTestFragment_Float&&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandBuildEntity,FTestFragment_Int,FTestFragment_Float>(FMassEntityHandle,FTestFragment_Int&&___ptr64,FTestFragment_Float&&___ptr64)___ptr64'
             ::__l2::LLMScope_Name110,false,None,Default,true);
  FMemScope::FMemScope
            (local_18,&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandBuildEntity,FTestFragment_Int,FTestFragment_Float>(FMassEntityHandle,FTestFragment_Int&&___ptr64,FTestFragment_Float&&___ptr64)___ptr64'
                       ::__l2::LLMScope_Name110,true);
  this_00 = (FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float> *)
            CreateOrAddCommand<FMassCommandBuildEntity<FTestFragment_Int,FTestFragment_Float>_>
                      (this);
  FMassCommandAddFragmentInstances<FTestFragment_Int,FTestFragment_Float>::Add
            (this_00,param_1,(FTestFragment_Int)param_2->Value,(FTestFragment_Float)param_3->Value);
  this->ActiveCommandsCounter = this->ActiveCommandsCounter + 1;
  FMemScope::~FMemScope(local_18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// RemoveFragment<FTestFragment_Float> @ 1470ee900

void __thiscall
FMassCommandBuffer::RemoveFragment<FTestFragment_Float>
          (FMassCommandBuffer *this,FMassEntityHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  DWORD DVar3;
  FMassCommandRemoveFragmentsInternal<0,FTestFragment_Float> *this_00;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  if (this->bIsFlushing != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsFlushing() == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                       ,0x84,
                       L"Trying to push commands is not supported while the given buffer is being flushed"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  DVar3 = GetCurrentThreadId();
  if (this->OwnerThreadId != DVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OwnerThreadId == FPlatformTLS::GetCurrentThreadId()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                       ,0x84,
                       L"Commands can be pushed only in the same thread where the command buffer was created."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandRemoveFragmentsInternal<0,FTestFragment_Float>_>(FMassEntityHandle)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandRemoveFragmentsInternal<0,FTestFragment_Float>_>(FMassEntityHandle)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandRemoveFragmentsInternal<0,FTestFragment_Float>_>(FMassEntityHandle)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandRemoveFragmentsInternal<0,FTestFragment_Float>_>(FMassEntityHandle)___ptr64'
                      ::__l2::LLMScope_Name135,L"Mass/PushCommand");
      _Init_thread_footer(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandRemoveFragmentsInternal<0,FTestFragment_Float>_>(FMassEntityHandle)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandRemoveFragmentsInternal<0,FTestFragment_Float>_>(FMassEntityHandle)___ptr64'
             ::__l2::LLMScope_Name135,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res10,
             &`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandRemoveFragmentsInternal<0,FTestFragment_Float>_>(FMassEntityHandle)___ptr64'
              ::__l2::LLMScope_Name135,true);
  this_00 = CreateOrAddCommand<FMassCommandRemoveFragmentsInternal<0,FTestFragment_Float>_>(this);
  FMassBatchedEntityCommand::Add((FMassBatchedEntityCommand *)this_00,param_1);
  this->ActiveCommandsCounter = this->ActiveCommandsCounter + 1;
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// RemoveTag<FTestTag_A> @ 1470eea40

void __thiscall
FMassCommandBuffer::RemoveTag<FTestTag_A>(FMassCommandBuffer *this,FMassEntityHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  DWORD DVar3;
  FMassCommandRemoveTagsInternal<0,FTestTag_A> *this_00;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  if (this->bIsFlushing != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsFlushing() == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                       ,0x84,
                       L"Trying to push commands is not supported while the given buffer is being flushed"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  DVar3 = GetCurrentThreadId();
  if (this->OwnerThreadId != DVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OwnerThreadId == FPlatformTLS::GetCurrentThreadId()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                       ,0x84,
                       L"Commands can be pushed only in the same thread where the command buffer was created."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandRemoveTagsInternal<0,FTestTag_A>_>(FMassEntityHandle)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandRemoveTagsInternal<0,FTestTag_A>_>(FMassEntityHandle)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandRemoveTagsInternal<0,FTestTag_A>_>(FMassEntityHandle)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandRemoveTagsInternal<0,FTestTag_A>_>(FMassEntityHandle)___ptr64'
                      ::__l2::LLMScope_Name135,L"Mass/PushCommand");
      _Init_thread_footer(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandRemoveTagsInternal<0,FTestTag_A>_>(FMassEntityHandle)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandRemoveTagsInternal<0,FTestTag_A>_>(FMassEntityHandle)___ptr64'
             ::__l2::LLMScope_Name135,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res10,
             &`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandRemoveTagsInternal<0,FTestTag_A>_>(FMassEntityHandle)___ptr64'
              ::__l2::LLMScope_Name135,true);
  this_00 = CreateOrAddCommand<FMassCommandRemoveTagsInternal<0,FTestTag_A>_>(this);
  FMassBatchedEntityCommand::Add((FMassBatchedEntityCommand *)this_00,param_1);
  this->ActiveCommandsCounter = this->ActiveCommandsCounter + 1;
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// SwapTags<FTestTag_A,FTestTag_B> @ 1470eefb0

void __thiscall
FMassCommandBuffer::SwapTags<FTestTag_A,FTestTag_B>
          (FMassCommandBuffer *this,FMassEntityHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  DWORD DVar3;
  FMassCommandSwapTagsInternal<0,FTestTag_A,FTestTag_B> *this_00;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  if (this->bIsFlushing != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsFlushing() == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                       ,0x84,
                       L"Trying to push commands is not supported while the given buffer is being flushed"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  DVar3 = GetCurrentThreadId();
  if (this->OwnerThreadId != DVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OwnerThreadId == FPlatformTLS::GetCurrentThreadId()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                       ,0x84,
                       L"Commands can be pushed only in the same thread where the command buffer was created."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandSwapTagsInternal<0,FTestTag_A,FTestTag_B>_>(FMassEntityHandle)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandSwapTagsInternal<0,FTestTag_A,FTestTag_B>_>(FMassEntityHandle)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandSwapTagsInternal<0,FTestTag_A,FTestTag_B>_>(FMassEntityHandle)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandSwapTagsInternal<0,FTestTag_A,FTestTag_B>_>(FMassEntityHandle)___ptr64'
                      ::__l2::LLMScope_Name135,L"Mass/PushCommand");
      _Init_thread_footer(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandSwapTagsInternal<0,FTestTag_A,FTestTag_B>_>(FMassEntityHandle)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandSwapTagsInternal<0,FTestTag_A,FTestTag_B>_>(FMassEntityHandle)___ptr64'
             ::__l2::LLMScope_Name135,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res10,
             &`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandSwapTagsInternal<0,FTestTag_A,FTestTag_B>_>(FMassEntityHandle)___ptr64'
              ::__l2::LLMScope_Name135,true);
  this_00 = CreateOrAddCommand<FMassCommandSwapTagsInternal<0,FTestTag_A,FTestTag_B>_>(this);
  FMassBatchedEntityCommand::Add((FMassBatchedEntityCommand *)this_00,param_1);
  this->ActiveCommandsCounter = this->ActiveCommandsCounter + 1;
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// DestroyEntity @ 14711c980

void __thiscall
FMassCommandBuffer::DestroyEntity(FMassCommandBuffer *this,FMassEntityHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  DWORD DVar3;
  FMassBatchedEntityCommand *this_00;
  FLLMScope local_res8 [2];
  FMassEntityHandle local_res10;
  FMemScope local_res18;
  
  if (this->bIsFlushing != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsFlushing() == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                       ,0x84,
                       L"Trying to push commands is not supported while the given buffer is being flushed"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  DVar3 = GetCurrentThreadId();
  if (this->OwnerThreadId != DVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OwnerThreadId == FPlatformTLS::GetCurrentThreadId()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                       ,0x84,
                       L"Commands can be pushed only in the same thread where the command buffer was created."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res10 = param_1;
  bVar2 = UE::Mass::Debug::FBreakpoint::CheckDestroyEntityBreakpoints(&local_res10);
  if (bVar2) {
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
            (&local_res18,
             &`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities>(FMassEntityHandle)___ptr64'
              ::__l2::LLMScope_Name135,true);
  this_00 = (FMassBatchedEntityCommand *)CreateOrAddCommand<FMassCommandDestroyEntities>(this);
  FMassBatchedEntityCommand::Add(this_00,param_1);
  this->ActiveCommandsCounter = this->ActiveCommandsCounter + 1;
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

