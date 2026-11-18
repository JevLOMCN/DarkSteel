// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 16

// StaticClass @ 1471b5a70

UClass * __cdecl UMassRelationRoleDestruction::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassRelationRoleDestruction.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntity",L"MassRelationRoleDestruction",
               &Z_Registration_Info_UClass_UMassRelationRoleDestruction.InnerSingleton,
               StaticRegisterNativesUMassRelationRoleDestruction,0x4b0,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Mass",
               InternalConstructor<UMassRelationRoleDestruction>,
               InternalVTableHelperCtorCaller<UMassRelationRoleDestruction>,local_res8,
               UMassRelationObserver::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassRelationRoleDestruction.InnerSingleton;
}

// UMassRelationRoleDestruction @ 1471de140

UMassRelationRoleDestruction * __thiscall
UMassRelationRoleDestruction::UMassRelationRoleDestruction
          (UMassRelationRoleDestruction *this,FVTableHelper *param_1)

{
  UMassRelationObserver::UMassRelationObserver((UMassRelationObserver *)this,param_1);
  this->RelationRole = MAX;
  this->_padding_ = (longlong)&___7UMassRelationRoleDestruction__6B_;
  *(undefined8 *)&this->ExecuteFunction = 0;
  *(undefined8 *)&(this->ExecuteFunction).field_0x28 = 0;
  this->ExcludedRelationFragmentType = (UScriptStruct *)0x0;
  return this;
}

// UMassRelationRoleDestruction @ 1471de190

UMassRelationRoleDestruction * __thiscall
UMassRelationRoleDestruction::UMassRelationRoleDestruction(UMassRelationRoleDestruction *this)

{
  UMassRelationObserver::UMassRelationObserver((UMassRelationObserver *)this);
  this->RelationRole = MAX;
  this->_padding_ = (longlong)&___7UMassRelationRoleDestruction__6B_;
  *(undefined8 *)&this->ExecuteFunction = 0;
  *(undefined8 *)&(this->ExecuteFunction).field_0x28 = 0;
  this->ExcludedRelationFragmentType = (UScriptStruct *)0x0;
  *(undefined2 *)((longlong)&this->_padding_ + 2) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 4;
  return this;
}

// ~UMassRelationRoleDestruction @ 1471e12b0

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall
UMassRelationRoleDestruction::~UMassRelationRoleDestruction(UMassRelationRoleDestruction *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&___7UMassRelationRoleDestruction__6B_;
  if (*(longlong *)&this->ExecuteFunction != 0) {
    plVar1 = *(longlong **)&(this->ExecuteFunction).field_0x28;
    plVar2 = (longlong *)&(this->ExecuteFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  this->_padding_ = (longlong)&___7UMassRelationObserver__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMassEntityQuery::~FMassEntityQuery((FMassEntityQuery *)&this->_padding_);
  this->_padding_ = (longlong)&___7UMassObserverProcessor__6B_;
  UMassProcessor::~UMassProcessor((UMassProcessor *)this);
  return;
}

// operator() @ 1471e41e0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`UMassRelationRoleDestruction::ConfigureRelationObserver'::__l12::<lambda_1>::operator()
          (void *this,FMassExecutionContext *param_1)

{
  undefined1 *puVar1;
  FMassEntityManager *pFVar2;
  FMassCommandBuffer *this_00;
  code *pcVar3;
  bool bVar4;
  DWORD DVar5;
  int iVar6;
  TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData> *pTVar7;
  FMassEntityHandle *pFVar8;
  TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData> *pTVar9;
  FMassCommandDestroyEntities *pFVar10;
  ulonglong uVar11;
  longlong lVar12;
  FLLMScope local_res10 [2];
  TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData> *local_res18;
  FObjectKey local_res20;
  FMassEntityHandle local_a8;
  FMemScope local_a0;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_98;
  FMassRelationRoleInstanceHandle *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  TArrayView<FMassRelationRoleInstanceHandle_const_,int> local_78;
  FEntityIterator local_68;
  
  pFVar2 = (param_1->EntityManager).Object;
  local_res20 = *(FObjectKey *)this;
  pTVar7 = TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FRelationData,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FRelationData,0>,FDefaultSetAllocator>
                   *)&(pFVar2->RelationManager).RelationsDataMap,(FTypeHandle *)&local_res20);
  local_res18 = pTVar7;
  if ((pTVar7 == (TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData> *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FMassExecutionContext::CreateEntityIterator(param_1,&local_68);
  while( true ) {
    if ((local_68.SerialNumber == 0) || (local_68.NumEntities <= local_68.EntityIndex)) {
      return;
    }
    pFVar8 = TArrayView<FMassEntityHandle,int>::operator[]
                       (&param_1->EntityListView,local_68.EntityIndex);
    local_a8 = *pFVar8;
    pTVar9 = TSet<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>,FDefaultSetAllocator>
                     *)&pTVar7->field_0xc0,&local_a8);
    if ((pTVar9 == (TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData> *)0x0)
       && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar11 = (ulonglong)*(uint *)((longlong)this + 8);
    this_00 = (param_1->DeferredCommandBuffer).Object;
    local_88 = *(FMassRelationRoleInstanceHandle **)(&pTVar9->field_0x8 + uVar11 * 0x10);
    iVar6 = *(int *)(&pTVar9->field_0x10 + uVar11 * 0x10);
    if ((iVar6 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_78._12_4_ = uStack_7c;
    local_78.ArrayNum = iVar6;
    local_78.DataPtr = local_88;
    local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.ArrayNum = 0;
    local_98.ArrayMax = 0;
    iStack_80 = iVar6;
    UE::Mass::FRelationManager::GetRelationEntities(&pFVar2->RelationManager,&local_78,&local_98);
    if ((this_00->bIsFlushing != false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsFlushing() == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                           ,0x77,
                           L"Trying to push commands is not supported while the given buffer is being flushed"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    DVar5 = GetCurrentThreadId();
    if ((this_00->OwnerThreadId != DVar5) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("OwnerThreadId == FPlatformTLS::GetCurrentThreadId()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                           ,0x77,
                           L"Commands can be pushed only in the same thread where the command buffer was created."
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name122,L"Mass/PushCommand");
      _Init_thread_footer(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    FLLMScope::FLLMScope
              (local_res10,
               `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
               ::__l2::LLMScope_Name122,false,None,Default,true);
    FMemScope::FMemScope
              (&local_a0,
               &`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
                ::__l2::LLMScope_Name122,true);
    pFVar10 = FMassCommandBuffer::CreateOrAddCommand<FMassCommandDestroyEntities>(this_00);
    LOCK();
    puVar1 = &pFVar10->field_0x18;
    iVar6 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + 0x100000;
    UNLOCK();
    if (((iVar6 != 0) && (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
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
    puVar1 = &pFVar10->field_0x20;
    if (((TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)puVar1 == &local_98) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x986,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar12 = (longlong)local_98.ArrayNum;
    if (local_98.ArrayNum != 0) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,local_98.ArrayNum,(ForAnyElementType *)puVar1,
                         (int *)&pFVar10->field_0x28,(int *)&pFVar10->field_0x2c);
      memmove((void *)(*(longlong *)puVar1 + (longlong)iVar6 * 8),local_98.AllocatorInstance.Data,
              lVar12 << 3);
      local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
    }
    pFVar10->field_0x8 = 1;
    LOCK();
    puVar1 = &pFVar10->field_0x18;
    iVar6 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -0x100000;
    UNLOCK();
    if (((iVar6 != 0x100000) &&
        (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                           ,0x7d,
                           L"Another thread asked to have a read or write access during this write access"
                          ), bVar4)) break;
    this_00->ActiveCommandsCounter = this_00->ActiveCommandsCounter + 1;
    FMemScope::~FMemScope(&local_a0);
    FLLMScope::~FLLMScope(local_res10);
    if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.AllocatorInstance.Data);
    }
    *(undefined4 *)(&pTVar9->field_0x10 + uVar11 * 0x10) = 0;
    if (*(int *)(&pTVar9->field_0x14 + uVar11 * 0x10) != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)(&pTVar9->field_0x8 + uVar11 * 0x10),0,
                 (int *)(&pTVar9->field_0x14 + uVar11 * 0x10));
    }
    pTVar7 = local_res18;
    local_68.EntityIndex = local_68.EntityIndex + 1;
    if ((((local_68.QueryRuntime)->bCheckProcessorBreaks != false) ||
        ((local_68.QueryRuntime)->BreakFragmentsCount != 0)) &&
       (local_68.EntityIndex < local_68.NumEntities)) {
      FMassExecutionContext::FEntityIterator::TestBreakpoints(&local_68);
    }
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// operator() @ 1471e58a0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`UMassRelationRoleDestruction::ConfigureRelationObserver'::__l14::<lambda_2>::operator()
          (void *this,FMassExecutionContext *param_1)

{
  undefined1 *puVar1;
  FMassEntityManager *pFVar2;
  FMassCommandBuffer *pFVar3;
  code *pcVar4;
  bool bVar5;
  DWORD DVar6;
  int iVar7;
  TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData> *pTVar8;
  FMassEntityHandle *pFVar9;
  TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData> *pTVar10;
  FMassCommandDestroyEntities *pFVar11;
  FRelationManager *this_00;
  longlong lVar12;
  FLLMScope local_res8 [2];
  FMassExecutionContext *local_res10;
  FLLMScope local_res18 [2];
  FRelationManager *local_res20;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_f8;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_e8;
  TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData> *local_d8;
  FEntityIterator local_d0;
  FObjectKey local_b0;
  FMassEntityHandle local_a8;
  FMemScope local_a0;
  FMemScope local_98 [2];
  FMassRelationRoleInstanceHandle *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  FMassRelationRoleInstanceHandle *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  TArrayView<FMassRelationRoleInstanceHandle_const_,int> local_68;
  TArrayView<FMassRelationRoleInstanceHandle_const_,int> local_58;
  
  pFVar2 = (param_1->EntityManager).Object;
  local_b0 = *(FObjectKey *)this;
  this_00 = &pFVar2->RelationManager;
  local_res10 = param_1;
  local_res20 = this_00;
  pTVar8 = TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FRelationData,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FRelationData,0>,FDefaultSetAllocator>
                   *)&(pFVar2->RelationManager).RelationsDataMap,(FTypeHandle *)&local_b0);
  local_d8 = pTVar8;
  if ((pTVar8 == (TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FMassExecutionContext::CreateEntityIterator(param_1,&local_d0);
  while( true ) {
    if ((local_d0.SerialNumber == 0) || (local_d0.NumEntities <= local_d0.EntityIndex)) {
      return;
    }
    pFVar9 = TArrayView<FMassEntityHandle,int>::operator[]
                       (&param_1->EntityListView,local_d0.EntityIndex);
    local_a8 = *pFVar9;
    pTVar10 = TSet<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>,FDefaultSetAllocator>
                      *)&pTVar8->field_0xc0,&local_a8);
    if ((pTVar10 == (TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData> *)0x0)
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_88 = *(FMassRelationRoleInstanceHandle **)&pTVar10->field_0x8;
    iVar7 = *(int *)&pTVar10->field_0x10;
    pFVar3 = (param_1->DeferredCommandBuffer).Object;
    if ((iVar7 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_68._12_4_ = uStack_7c;
    local_68.ArrayNum = iVar7;
    local_68.DataPtr = local_88;
    local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.ArrayNum = 0;
    local_f8.ArrayMax = 0;
    iStack_80 = iVar7;
    UE::Mass::FRelationManager::GetRelationEntities(this_00,&local_68,&local_f8);
    if ((pFVar3->bIsFlushing != false) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsFlushing() == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                           ,0x77,
                           L"Trying to push commands is not supported while the given buffer is being flushed"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    DVar6 = GetCurrentThreadId();
    if ((pFVar3->OwnerThreadId != DVar6) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("OwnerThreadId == FPlatformTLS::GetCurrentThreadId()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                           ,0x77,
                           L"Commands can be pushed only in the same thread where the command buffer was created."
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name122,L"Mass/PushCommand");
      _Init_thread_footer(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    FLLMScope::FLLMScope
              (local_res8,
               `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
               ::__l2::LLMScope_Name122,false,None,Default,true);
    FMemScope::FMemScope
              (&local_a0,
               &`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
                ::__l2::LLMScope_Name122,true);
    pFVar11 = FMassCommandBuffer::CreateOrAddCommand<FMassCommandDestroyEntities>(pFVar3);
    LOCK();
    puVar1 = &pFVar11->field_0x18;
    iVar7 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + 0x100000;
    UNLOCK();
    if (((iVar7 != 0) && (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                           ,0x72,
                           L"Acquiring a write access while there are ongoing read or write access")
       , bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    puVar1 = &pFVar11->field_0x20;
    if (((TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)puVar1 == &local_f8) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x986,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar12 = (longlong)local_f8.ArrayNum;
    if (local_f8.ArrayNum != 0) {
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,local_f8.ArrayNum,(ForAnyElementType *)puVar1,
                         (int *)&pFVar11->field_0x28,(int *)&pFVar11->field_0x2c);
      memmove((void *)(*(longlong *)puVar1 + (longlong)iVar7 * 8),local_f8.AllocatorInstance.Data,
              lVar12 << 3);
      local_f8._8_8_ = local_f8._8_8_ & 0xffffffff00000000;
    }
    pFVar11->field_0x8 = 1;
    LOCK();
    puVar1 = &pFVar11->field_0x18;
    iVar7 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -0x100000;
    UNLOCK();
    if (((iVar7 != 0x100000) &&
        (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                           ,0x7d,
                           L"Another thread asked to have a read or write access during this write access"
                          ), bVar5)) break;
    pFVar3->ActiveCommandsCounter = pFVar3->ActiveCommandsCounter + 1;
    FMemScope::~FMemScope(&local_a0);
    FLLMScope::~FLLMScope(local_res8);
    if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.AllocatorInstance.Data);
    }
    *(undefined4 *)&pTVar10->field_0x10 = 0;
    if (*(int *)&pTVar10->field_0x14 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)&pTVar10->field_0x8,0,(int *)&pTVar10->field_0x14);
    }
    local_78 = *(FMassRelationRoleInstanceHandle **)&pTVar10->field_0x18;
    iVar7 = *(int *)&pTVar10->field_0x20;
    pFVar3 = (local_res10->DeferredCommandBuffer).Object;
    if ((iVar7 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_58._12_4_ = uStack_6c;
    local_58.ArrayNum = iVar7;
    local_58.DataPtr = local_78;
    local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.ArrayNum = 0;
    local_e8.ArrayMax = 0;
    iStack_70 = iVar7;
    UE::Mass::FRelationManager::GetRelationEntities(local_res20,&local_58,&local_e8);
    if ((pFVar3->bIsFlushing != false) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsFlushing() == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                           ,0x77,
                           L"Trying to push commands is not supported while the given buffer is being flushed"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    DVar6 = GetCurrentThreadId();
    if ((pFVar3->OwnerThreadId != DVar6) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("OwnerThreadId == FPlatformTLS::GetCurrentThreadId()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                           ,0x77,
                           L"Commands can be pushed only in the same thread where the command buffer was created."
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name122,L"Mass/PushCommand");
      _Init_thread_footer(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    FLLMScope::FLLMScope
              (local_res18,
               `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
               ::__l2::LLMScope_Name122,false,None,Default,true);
    FMemScope::FMemScope
              (local_98,&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandDestroyEntities,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
                         ::__l2::LLMScope_Name122,true);
    pFVar11 = FMassCommandBuffer::CreateOrAddCommand<FMassCommandDestroyEntities>(pFVar3);
    LOCK();
    puVar1 = &pFVar11->field_0x18;
    iVar7 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + 0x100000;
    UNLOCK();
    if (((iVar7 != 0) && (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                           ,0x72,
                           L"Acquiring a write access while there are ongoing read or write access")
       , bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    puVar1 = &pFVar11->field_0x20;
    if (((TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)puVar1 == &local_e8) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x986,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar12 = (longlong)local_e8.ArrayNum;
    if (local_e8.ArrayNum != 0) {
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,local_e8.ArrayNum,(ForAnyElementType *)puVar1,
                         (int *)&pFVar11->field_0x28,(int *)&pFVar11->field_0x2c);
      memmove((void *)(*(longlong *)puVar1 + (longlong)iVar7 * 8),local_e8.AllocatorInstance.Data,
              lVar12 << 3);
      local_e8._8_8_ = local_e8._8_8_ & 0xffffffff00000000;
    }
    pFVar11->field_0x8 = 1;
    LOCK();
    puVar1 = &pFVar11->field_0x18;
    iVar7 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -0x100000;
    UNLOCK();
    if (((iVar7 != 0x100000) &&
        (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ErrorDetected || UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                           ,0x7d,
                           L"Another thread asked to have a read or write access during this write access"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3->ActiveCommandsCounter = pFVar3->ActiveCommandsCounter + 1;
    FMemScope::~FMemScope(local_98);
    FLLMScope::~FLLMScope(local_res18);
    if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.AllocatorInstance.Data);
    }
    *(undefined4 *)&pTVar10->field_0x20 = 0;
    if (*(int *)&pTVar10->field_0x24 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)&pTVar10->field_0x18,0,(int *)&pTVar10->field_0x24);
    }
    pTVar8 = local_d8;
    this_00 = local_res20;
    param_1 = local_res10;
    local_d0.EntityIndex = local_d0.EntityIndex + 1;
    if ((((local_d0.QueryRuntime)->bCheckProcessorBreaks != false) ||
        ((local_d0.QueryRuntime)->BreakFragmentsCount != 0)) &&
       (local_d0.EntityIndex < local_d0.NumEntities)) {
      FMassExecutionContext::FEntityIterator::TestBreakpoints(&local_d0);
    }
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// operator() @ 1471e6d20

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`UMassRelationRoleDestruction::ConfigureRelationObserver'::__l17::<lambda_3>::operator()
          (void *this,FMassExecutionContext *param_1)

{
  uint uVar1;
  int iVar2;
  FMassEntityManager *pFVar3;
  FMassCommandBuffer *this_00;
  code *pcVar4;
  bool bVar5;
  TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData> *pTVar6;
  FMassEntityHandle *pFVar7;
  TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData> *pTVar8;
  FObjectKey local_res8;
  FMassEntityHandle local_res10;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_c8;
  FEntityIterator local_b8;
  FMassRelationRoleInstanceHandle *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  FMassRelationRoleInstanceHandle *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  FMassEntityHandle *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  TArrayView<FMassRelationRoleInstanceHandle_const_,int> local_68;
  TArrayView<FMassRelationRoleInstanceHandle_const_,int> local_58;
  TArrayView<FMassEntityHandle_const_,int> local_48;
  
  pFVar3 = (param_1->EntityManager).Object;
  local_res8 = *(FObjectKey *)this;
  pTVar6 = TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FRelationData,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FRelationData,0>,FDefaultSetAllocator>
                   *)&(pFVar3->RelationManager).RelationsDataMap,(FTypeHandle *)&local_res8);
  if ((pTVar6 == (TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayNum = 0;
  local_c8.ArrayMax = 0;
  FMassExecutionContext::CreateEntityIterator(param_1,&local_b8);
  while( true ) {
    if ((local_b8.SerialNumber == 0) || (local_b8.NumEntities <= local_b8.EntityIndex)) {
      iVar2 = local_c8.ArrayNum;
      this_00 = (param_1->DeferredCommandBuffer).Object;
      local_78 = (FMassEntityHandle *)local_c8.AllocatorInstance.Data;
      if ((local_c8.ArrayNum < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iStack_70 = iVar2;
      local_48._12_4_ = uStack_6c;
      local_48.ArrayNum = iVar2;
      local_48.DataPtr = local_78;
      FMassCommandBuffer::DestroyEntities(this_00,&local_48);
      if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.AllocatorInstance.Data);
      }
      return;
    }
    pFVar7 = TArrayView<FMassEntityHandle,int>::operator[]
                       (&param_1->EntityListView,local_b8.EntityIndex);
    local_res10 = *pFVar7;
    pTVar8 = TSet<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>,FDefaultSetAllocator>
                     *)&pTVar6->field_0xc0,&local_res10);
    if ((pTVar8 == (TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData> *)0x0)
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar1 = *(uint *)((longlong)this + 8);
    local_98 = *(FMassRelationRoleInstanceHandle **)(&pTVar8->field_0x8 + (ulonglong)uVar1 * 0x10);
    iVar2 = *(int *)(&pTVar8->field_0x10 + (ulonglong)uVar1 * 0x10);
    if ((iVar2 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) break;
    local_68._12_4_ = uStack_8c;
    local_68.ArrayNum = iVar2;
    local_68.DataPtr = local_98;
    iStack_90 = iVar2;
    UE::Mass::FRelationManager::GetRelationEntities(&pFVar3->RelationManager,&local_68,&local_c8);
    local_88 = *(FMassRelationRoleInstanceHandle **)(&pTVar8->field_0x8 + (ulonglong)uVar1 * 0x10);
    iVar2 = *(int *)(&pTVar8->field_0x10 + (ulonglong)uVar1 * 0x10);
    if ((iVar2 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_58._12_4_ = uStack_7c;
    local_58.ArrayNum = iVar2;
    local_58.DataPtr = local_88;
    iStack_80 = iVar2;
    UE::Mass::FRelationManager::GetRoleEntities(&pFVar3->RelationManager,&local_58,&local_c8);
    *(undefined4 *)(&pTVar8->field_0x10 + (ulonglong)uVar1 * 0x10) = 0;
    if (*(int *)(&pTVar8->field_0x14 + (ulonglong)uVar1 * 0x10) != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)(&pTVar8->field_0x8 + (ulonglong)uVar1 * 0x10),0,
                 (int *)(&pTVar8->field_0x14 + (ulonglong)uVar1 * 0x10));
    }
    local_b8.EntityIndex = local_b8.EntityIndex + 1;
    if ((((local_b8.QueryRuntime)->bCheckProcessorBreaks != false) ||
        ((local_b8.QueryRuntime)->BreakFragmentsCount != 0)) &&
       (local_b8.EntityIndex < local_b8.NumEntities)) {
      FMassExecutionContext::FEntityIterator::TestBreakpoints(&local_b8);
    }
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// operator() @ 1471e7360

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`UMassRelationRoleDestruction::ConfigureRelationObserver'::__l19::<lambda_4>::operator()
          (void *this,FMassExecutionContext *param_1)

{
  int iVar1;
  FMassEntityManager *pFVar2;
  FMassCommandBuffer *this_00;
  code *pcVar3;
  bool bVar4;
  TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData> *pTVar5;
  FMassEntityHandle *pFVar6;
  TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData> *pTVar7;
  FRelationManager *this_01;
  FObjectKey local_res8;
  FMassEntityHandle local_res10;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_f8;
  FEntityIterator local_e8;
  FMassRelationRoleInstanceHandle *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  FMassRelationRoleInstanceHandle *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  FMassRelationRoleInstanceHandle *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  FMassRelationRoleInstanceHandle *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  FMassEntityHandle *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  TArrayView<FMassRelationRoleInstanceHandle_const_,int> local_78;
  TArrayView<FMassRelationRoleInstanceHandle_const_,int> local_68;
  TArrayView<FMassRelationRoleInstanceHandle_const_,int> local_58;
  TArrayView<FMassRelationRoleInstanceHandle_const_,int> local_48;
  TArrayView<FMassEntityHandle_const_,int> local_38;
  
  pFVar2 = (param_1->EntityManager).Object;
  local_res8 = *(FObjectKey *)this;
  this_01 = &pFVar2->RelationManager;
  pTVar5 = TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FRelationData,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FRelationData,0>,FDefaultSetAllocator>
                   *)&(pFVar2->RelationManager).RelationsDataMap,(FTypeHandle *)&local_res8);
  if ((pTVar5 == (TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData> *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  FMassExecutionContext::CreateEntityIterator(param_1,&local_e8);
  while( true ) {
    if ((local_e8.SerialNumber == 0) || (local_e8.NumEntities <= local_e8.EntityIndex)) {
      iVar1 = local_f8.ArrayNum;
      this_00 = (param_1->DeferredCommandBuffer).Object;
      local_88 = (FMassEntityHandle *)local_f8.AllocatorInstance.Data;
      if ((local_f8.ArrayNum < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iStack_80 = iVar1;
      local_38._12_4_ = uStack_7c;
      local_38.ArrayNum = iVar1;
      local_38.DataPtr = local_88;
      FMassCommandBuffer::DestroyEntities(this_00,&local_38);
      if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.AllocatorInstance.Data);
      }
      return;
    }
    pFVar6 = TArrayView<FMassEntityHandle,int>::operator[]
                       (&param_1->EntityListView,local_e8.EntityIndex);
    local_res10 = *pFVar6;
    pTVar7 = TSet<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>,FDefaultSetAllocator>
                     *)&pTVar5->field_0xc0,&local_res10);
    if ((pTVar7 == (TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData> *)0x0)
       && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_c8 = *(FMassRelationRoleInstanceHandle **)&pTVar7->field_0x8;
    iVar1 = *(int *)&pTVar7->field_0x10;
    if ((iVar1 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) break;
    local_78._12_4_ = uStack_bc;
    local_78.ArrayNum = iVar1;
    local_78.DataPtr = local_c8;
    iStack_c0 = iVar1;
    UE::Mass::FRelationManager::GetRelationEntities(this_01,&local_78,&local_f8);
    local_b8 = *(FMassRelationRoleInstanceHandle **)&pTVar7->field_0x8;
    iVar1 = *(int *)&pTVar7->field_0x10;
    if ((iVar1 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_68._12_4_ = uStack_ac;
    local_68.ArrayNum = iVar1;
    local_68.DataPtr = local_b8;
    iStack_b0 = iVar1;
    UE::Mass::FRelationManager::GetRoleEntities(this_01,&local_68,&local_f8);
    *(undefined4 *)&pTVar7->field_0x10 = 0;
    if (*(int *)&pTVar7->field_0x14 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)&pTVar7->field_0x8,0,(int *)&pTVar7->field_0x14);
    }
    local_a8 = *(FMassRelationRoleInstanceHandle **)&pTVar7->field_0x18;
    iVar1 = *(int *)&pTVar7->field_0x20;
    if ((iVar1 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_58._12_4_ = uStack_9c;
    local_58.ArrayNum = iVar1;
    local_58.DataPtr = local_a8;
    iStack_a0 = iVar1;
    UE::Mass::FRelationManager::GetRelationEntities(this_01,&local_58,&local_f8);
    local_98 = *(FMassRelationRoleInstanceHandle **)&pTVar7->field_0x18;
    iVar1 = *(int *)&pTVar7->field_0x20;
    if ((iVar1 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_48._12_4_ = uStack_8c;
    local_48.ArrayNum = iVar1;
    local_48.DataPtr = local_98;
    iStack_90 = iVar1;
    UE::Mass::FRelationManager::GetRoleEntities(this_01,&local_48,&local_f8);
    *(undefined4 *)&pTVar7->field_0x20 = 0;
    if (*(int *)&pTVar7->field_0x24 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)&pTVar7->field_0x18,0,(int *)&pTVar7->field_0x24);
    }
    local_e8.EntityIndex = local_e8.EntityIndex + 1;
    if ((((local_e8.QueryRuntime)->bCheckProcessorBreaks != false) ||
        ((local_e8.QueryRuntime)->BreakFragmentsCount != 0)) &&
       (local_e8.EntityIndex < local_e8.NumEntities)) {
      FMassExecutionContext::FEntityIterator::TestBreakpoints(&local_e8);
    }
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// operator() @ 1471e76c0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`UMassRelationRoleDestruction::ConfigureRelationObserver'::__l9::<lambda_5>::operator()
          (void *this,FMassExecutionContext *param_1)

{
  int iVar1;
  FMassEntityManager *pFVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData> *pTVar6;
  FMassEntityHandle *pFVar7;
  TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData> *pTVar8;
  undefined8 *puVar9;
  FRelationManager *this_00;
  FObjectKey local_res8;
  FMassEntityHandle local_res10;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_168;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_158;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_148;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_138;
  FEntityIterator local_128;
  FMassEntityHandle *local_108;
  int iStack_100;
  int iStack_fc;
  FMassRelationRoleInstanceHandle *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  FMassRelationRoleInstanceHandle *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  FMassRelationRoleInstanceHandle *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  FMassRelationRoleInstanceHandle *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  FMassEntityHandle *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_a8;
  TArrayView<FMassRelationRoleInstanceHandle_const_,int> local_98;
  TArrayView<FMassRelationRoleInstanceHandle_const_,int> local_88;
  TArrayView<FMassRelationRoleInstanceHandle_const_,int> local_78;
  TArrayView<FMassRelationRoleInstanceHandle_const_,int> local_68;
  TArrayView<FMassEntityHandle,int> local_58;
  TArrayView<FMassEntityHandle,int> local_48;
  
  pFVar2 = (param_1->EntityManager).Object;
  local_res8 = *(FObjectKey *)this;
  this_00 = &pFVar2->RelationManager;
  pTVar6 = TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FRelationData,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FRelationData,0>,FDefaultSetAllocator>
                   *)&(pFVar2->RelationManager).RelationsDataMap,(FTypeHandle *)&local_res8);
  if ((pTVar6 == (TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FMassExecutionContext::CreateEntityIterator(param_1,&local_128);
  do {
    if ((local_128.SerialNumber == 0) || (local_128.NumEntities <= local_128.EntityIndex)) {
      return;
    }
    pFVar7 = TArrayView<FMassEntityHandle,int>::operator[]
                       (&param_1->EntityListView,local_128.EntityIndex);
    local_res10 = *pFVar7;
    pTVar8 = TSet<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>,FDefaultSetAllocator>
                     *)&pTVar6->field_0xc0,&local_res10);
    puVar9 = (undefined8 *)&pTVar8->field_0x8;
    if (pTVar8 == (TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData> *)0x0) {
      puVar9 = (undefined8 *)0x0;
    }
    if (puVar9 != (undefined8 *)0x0) {
      local_f8 = (FMassRelationRoleInstanceHandle *)*puVar9;
      iVar1 = *(int *)(puVar9 + 1);
      if ((iVar1 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_98._12_4_ = uStack_ec;
      local_98.ArrayNum = iVar1;
      local_98.DataPtr = local_f8;
      local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_148.ArrayNum = 0;
      local_148.ArrayMax = 0;
      iStack_f0 = iVar1;
      UE::Mass::FRelationManager::GetRelationEntities(this_00,&local_98,&local_148);
      FMassCommandBuffer::DestroyEntities((param_1->DeferredCommandBuffer).Object,&local_148);
      local_e8 = (FMassRelationRoleInstanceHandle *)*puVar9;
      iVar1 = *(int *)(puVar9 + 1);
      if ((iVar1 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_88._12_4_ = uStack_dc;
      local_88.ArrayNum = iVar1;
      local_88.DataPtr = local_e8;
      local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_158.ArrayNum = 0;
      local_158.ArrayMax = 0;
      iStack_e0 = iVar1;
      UE::Mass::FRelationManager::GetRoleEntities(this_00,&local_88,&local_158);
      if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.AllocatorInstance.Data);
      }
      local_d8 = (FMassRelationRoleInstanceHandle *)puVar9[2];
      iVar1 = *(int *)(puVar9 + 3);
      if ((iVar1 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_78._12_4_ = uStack_cc;
      local_78.ArrayNum = iVar1;
      local_78.DataPtr = local_d8;
      local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_138.ArrayNum = 0;
      local_138.ArrayMax = 0;
      iStack_d0 = iVar1;
      UE::Mass::FRelationManager::GetRelationEntities(this_00,&local_78,&local_138);
      FMassCommandBuffer::DestroyEntities((param_1->DeferredCommandBuffer).Object,&local_138);
      local_c8 = (FMassRelationRoleInstanceHandle *)puVar9[2];
      iVar1 = *(int *)(puVar9 + 3);
      if ((iVar1 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_68._12_4_ = uStack_bc;
      local_68.ArrayNum = iVar1;
      local_68.DataPtr = local_c8;
      local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_168.ArrayNum = 0;
      local_168.ArrayMax = 0;
      iStack_c0 = iVar1;
      UE::Mass::FRelationManager::GetRoleEntities(this_00,&local_68,&local_168);
      if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.AllocatorInstance.Data);
      }
      FVar4.Data = local_168.AllocatorInstance.Data;
      iVar1 = local_168.ArrayNum;
      if ((local_168.ArrayNum < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iStack_100 = iVar1;
      iVar1 = local_158.ArrayNum;
      local_108 = (FMassEntityHandle *)FVar4.Data;
      iStack_fc = local_a8.ArrayMax;
      local_b8 = (FMassEntityHandle *)local_158.AllocatorInstance.Data;
      if ((local_158.ArrayNum < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_58._12_4_ = iStack_fc;
      local_58.ArrayNum = iStack_100;
      iStack_b0 = iVar1;
      local_48._12_4_ = uStack_ac;
      local_48.ArrayNum = iVar1;
      local_58.DataPtr = local_108;
      local_48.DataPtr = local_b8;
      UE::Mass::FRelationManager::CreateRelationInstances
                (this_00,&local_a8,(TObjectKey<UStruct_const_>)*(TObjectKey<UStruct_const_> *)this,
                 &local_48,&local_58);
      if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.AllocatorInstance.Data);
      }
      if (local_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.AllocatorInstance.Data);
      }
      if (local_158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.AllocatorInstance.Data);
      }
    }
    local_128.EntityIndex = local_128.EntityIndex + 1;
    if ((((local_128.QueryRuntime)->bCheckProcessorBreaks != false) ||
        ((local_128.QueryRuntime)->BreakFragmentsCount != 0)) &&
       (local_128.EntityIndex < local_128.NumEntities)) {
      FMassExecutionContext::FEntityIterator::TestBreakpoints(&local_128);
    }
  } while( true );
}

// AddObserverInstances @ 1471eeae0

/* WARNING: Enum "ERemovalPolicy": Some values do not have unique names */
/* WARNING: Enum "EExternalMappingRequired": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __cdecl
UMassRelationRoleDestruction::AddObserverInstances
          (FMassObserverManager *param_1,FTypeHandle param_2,FRelationTypeTraits *param_3)

{
  ERemovalPolicy EVar1;
  longlong lVar2;
  char cVar3;
  UObject *pUVar4;
  TNotNull<UMassProcessor_*> TVar5;
  uint uVar6;
  ulonglong uVar7;
  
  if (((param_3->RoleTraits).Elements[1].Element == (param_3->RoleTraits).Elements[0].Element) &&
     (EVar1 = (param_3->RoleTraits).Elements[0].DestructionPolicy,
     (param_3->RoleTraits).Elements[1].DestructionPolicy == EVar1)) {
    if (EVar1 != Custom) {
      pUVar4 = GetTransientPackageAsObject();
      TVar5.Val = (UMassProcessor *)NewObject<UMassRelationRoleDestruction>(pUVar4);
      lVar2 = (TVar5.Val)->_padding_;
      *(undefined1 *)&TVar5.Val[5].ExecutionOrder.ExecuteBefore.AllocatorInstance.Data = 2;
      cVar3 = (**(code **)(lVar2 + 0x318))(TVar5.Val,param_2.TypeKey.ObjectKey,param_3);
      if (cVar3 != '\0') {
        if ((UScriptStruct *)TVar5.Val[1]._padding_ == (UScriptStruct *)0x0) {
LAB_1471eebf8:
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        FMassObserverManager::AddObserverInstance
                  (param_1,(UScriptStruct *)TVar5.Val[1]._padding_,
                   *(EMassObservedOperationFlags *)((longlong)&TVar5.Val[1]._padding_ + 1),TVar5);
      }
    }
  }
  else {
    uVar7 = 0;
    do {
      if ((param_3->RoleTraits).Elements[uVar7].DestructionPolicy != Custom) {
        pUVar4 = GetTransientPackageAsObject();
        TVar5.Val = (UMassProcessor *)NewObject<UMassRelationRoleDestruction>(pUVar4);
        lVar2 = (TVar5.Val)->_padding_;
        *(char *)&TVar5.Val[5].ExecutionOrder.ExecuteBefore.AllocatorInstance.Data = (char)uVar7;
        cVar3 = (**(code **)(lVar2 + 0x318))(TVar5.Val,param_2.TypeKey.ObjectKey,param_3);
        if (cVar3 != '\0') {
          if ((UScriptStruct *)TVar5.Val[1]._padding_ == (UScriptStruct *)0x0) goto LAB_1471eebf8;
          FMassObserverManager::AddObserverInstance
                    (param_1,(UScriptStruct *)TVar5.Val[1]._padding_,
                     *(EMassObservedOperationFlags *)((longlong)&TVar5.Val[1]._padding_ + 1),TVar5);
        }
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while ((int)uVar6 < 2);
  }
  return;
}

// ConfigureQueries @ 147206540

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UMassRelationRoleDestruction::ConfigureQueries
          (UMassRelationRoleDestruction *this,TSharedRef<FMassEntityManager,1> *param_1)

{
  bool bVar1;
  undefined1 local_res8 [32];
  
  UMassRelationObserver::ConfigureQueries((UMassRelationObserver *)this,param_1);
  if (this->ExcludedRelationFragmentType == (UScriptStruct *)0x0) {
    bVar1 = `UMassRelationRoleDestruction::ConfigureQueries'::__l3::<lambda_1>::operator()
                      (local_res8);
    if (!bVar1) {
      return;
    }
  }
  FMassFragmentRequirements::AddRequirement
            ((FMassFragmentRequirements *)&this->_padding_,this->ExcludedRelationFragmentType,None,
             None);
  return;
}

// ConfigureRelationObserver @ 147206610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERemovalPolicy": Some values do not have unique names */
/* WARNING: Enum "EExternalMappingRequired": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UMassRelationRoleDestruction::ConfigureRelationObserver
          (UMassRelationRoleDestruction *this,FTypeHandle param_1,FRelationTypeTraits *param_2)

{
  ERemovalPolicy EVar1;
  ERelationRole EVar2;
  int iVar3;
  uint uVar4;
  UScriptStruct *pUVar5;
  UClass *pUVar6;
  code *pcVar7;
  longlong *plVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined1 auStack_a8 [32];
  FWeakObjectPtr local_88 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_a8;
  uVar4 = (uint)this->RelationRole;
  if (this->RelationRole == MAX) {
    uVar4 = 0;
  }
  this->ExcludedRelationFragmentType = (param_2->RelationFragmentType).Val;
  this->_padding_ = (longlong)param_1.TypeKey.ObjectKey;
  if ((param_2->RoleTraits).Elements[uVar4].Element == (UScriptStruct *)0x0) {
    local_88[0].ObjectIndex = param_1.TypeKey.ObjectKey.ObjectIndex;
    local_88[0].ObjectSerialNumber = param_1.TypeKey.ObjectKey.ObjectSerialNumber;
    pUVar5 = (UScriptStruct *)FWeakObjectPtr::Get(local_88);
    if (pUVar5 == (UScriptStruct *)0x0) {
LAB_147206868:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    pUVar6 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar3 = (int)pUVar6->_padding_;
    if ((*(int *)(pUVar5->_padding_ + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar3 * 8)
        != &pUVar6->_padding_)) goto LAB_147206868;
    bVar9 = UE::GC::GIsIncrementalReachabilityPending == false;
LAB_1472066e6:
    if (!bVar9) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
  }
  else {
    pUVar5 = (param_2->RoleTraits).Elements[uVar4].Element;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      bVar9 = pUVar5 == (UScriptStruct *)0x0;
      goto LAB_1472066e6;
    }
  }
  this->_padding_ = (longlong)pUVar5;
  EVar1 = (param_2->RoleTraits).Elements[uVar4].DestructionPolicy;
  if (EVar1 == CleanUp) {
    EVar2 = this->RelationRole;
    *(undefined1 *)((longlong)&this->_padding_ + 1) = 0;
    if (EVar2 == MAX) {
      local_68 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UMassRelationRoleDestruction::ConfigureRelationObserver'::`14'::<lambda_2>,0,0>
                  ::_vftable_;
      pcVar7 = UE::Core::Private::Function::
               TFunctionRefCaller<`UMassRelationRoleDestruction::ConfigureRelationObserver'::__l14::<lambda_2>,void,FMassExecutionContext_&>
               ::Call;
    }
    else {
      local_58 = CONCAT44(local_58._4_4_,uVar4 - 1) & 0xffffffff00000001;
      local_68 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UMassRelationRoleDestruction::ConfigureRelationObserver'::`12'::<lambda_1>,0,0>
                  ::_vftable_;
      pcVar7 = UE::Core::Private::Function::
               TFunctionRefCaller<`UMassRelationRoleDestruction::ConfigureRelationObserver'::__l12::<lambda_1>,void,FMassExecutionContext_&>
               ::Call;
    }
  }
  else {
    if (EVar1 == Destroy) {
      EVar2 = this->RelationRole;
      *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
      uVar14 = *(undefined4 *)&this->ExecuteFunction;
      uVar15 = *(undefined4 *)&(this->ExecuteFunction).field_0x4;
      uVar16 = *(undefined4 *)&(this->ExecuteFunction).field_0x8;
      uVar17 = *(undefined4 *)&(this->ExecuteFunction).field_0xc;
      uVar10 = *(undefined4 *)&(this->ExecuteFunction).field_0x10;
      uVar11 = *(undefined4 *)&(this->ExecuteFunction).field_0x14;
      uVar12 = *(undefined4 *)&(this->ExecuteFunction).field_0x18;
      uVar13 = *(undefined4 *)&(this->ExecuteFunction).field_0x1c;
      uVar18 = *(undefined8 *)&(this->ExecuteFunction).field_0x20;
      plStack_50 = *(longlong **)&(this->ExecuteFunction).field_0x28;
      if (EVar2 == MAX) {
        local_68 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`UMassRelationRoleDestruction::ConfigureRelationObserver'::`19'::<lambda_4>,0,0>
                    ::_vftable_;
        pcVar7 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UMassRelationRoleDestruction::ConfigureRelationObserver'::__l19::<lambda_4>,void,FMassExecutionContext_&>
                 ::Call;
      }
      else {
        local_58 = CONCAT44(local_58._4_4_,uVar4 - 1) & 0xffffffff00000001;
        local_68 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`UMassRelationRoleDestruction::ConfigureRelationObserver'::`17'::<lambda_3>,0,0>
                    ::_vftable_;
        pcVar7 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UMassRelationRoleDestruction::ConfigureRelationObserver'::__l17::<lambda_3>,void,FMassExecutionContext_&>
                 ::Call;
      }
      goto LAB_1472067e7;
    }
    if (EVar1 != Splice) {
      return false;
    }
    local_68 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UMassRelationRoleDestruction::ConfigureRelationObserver'::`9'::<lambda_5>,0,0>
                ::_vftable_;
    pcVar7 = UE::Core::Private::Function::
             TFunctionRefCaller<`UMassRelationRoleDestruction::ConfigureRelationObserver'::__l9::<lambda_5>,void,FMassExecutionContext_&>
             ::Call;
  }
  uVar18 = *(undefined8 *)&(this->ExecuteFunction).field_0x20;
  plStack_50 = *(longlong **)&(this->ExecuteFunction).field_0x28;
  uVar10 = *(undefined4 *)&(this->ExecuteFunction).field_0x10;
  uVar11 = *(undefined4 *)&(this->ExecuteFunction).field_0x14;
  uVar12 = *(undefined4 *)&(this->ExecuteFunction).field_0x18;
  uVar13 = *(undefined4 *)&(this->ExecuteFunction).field_0x1c;
  uVar14 = *(undefined4 *)&this->ExecuteFunction;
  uVar15 = *(undefined4 *)&(this->ExecuteFunction).field_0x4;
  uVar16 = *(undefined4 *)&(this->ExecuteFunction).field_0x8;
  uVar17 = *(undefined4 *)&(this->ExecuteFunction).field_0xc;
LAB_1472067e7:
  *(code **)&this->ExecuteFunction = pcVar7;
  *(ulonglong *)&(this->ExecuteFunction).field_0x8 = CONCAT44(uStack_6c,uStack_70);
  *(undefined4 *)&(this->ExecuteFunction).field_0x10 = (undefined4)local_68;
  *(undefined4 *)&(this->ExecuteFunction).field_0x14 = local_68._4_4_;
  *(int *)&(this->ExecuteFunction).field_0x18 = param_1.TypeKey.ObjectKey.ObjectIndex;
  *(int *)&(this->ExecuteFunction).field_0x1c = param_1.TypeKey.ObjectKey.ObjectSerialNumber;
  *(undefined4 *)&(this->ExecuteFunction).field_0x20 = (undefined4)local_58;
  *(undefined4 *)&(this->ExecuteFunction).field_0x24 = local_58._4_4_;
  *(undefined4 *)&(this->ExecuteFunction).field_0x28 = 0;
  *(undefined4 *)&(this->ExecuteFunction).field_0x2c = 0;
  local_58 = uVar18;
  local_68 = (undefined **)CONCAT44(uVar11,uVar10);
  _uStack_60 = CONCAT44(uVar13,uVar12);
  _local_78 = CONCAT44(uVar15,uVar14);
  if (CONCAT44(uVar15,uVar14) != 0) {
    plVar8 = &local_68;
    if (plStack_50 != (longlong *)0x0) {
      plVar8 = plStack_50;
    }
    uStack_70 = uVar16;
    uStack_6c = uVar17;
    (**(code **)(*plVar8 + 0x10))();
  }
  return true;
}

// Execute @ 147216bb0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UMassRelationRoleDestruction::Execute
          (UMassRelationRoleDestruction *this,FMassEntityManager *param_1,
          FMassExecutionContext *param_2)

{
  FMassEntityQuery::ForEachEntityChunk
            ((FMassEntityQuery *)&this->_padding_,param_2,&this->ExecuteFunction);
  return;
}

// GetPrivateStaticClass @ 147224ee0

UClass * __cdecl UMassRelationRoleDestruction::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassRelationRoleDestruction.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntity",L"MassRelationRoleDestruction",
               &Z_Registration_Info_UClass_UMassRelationRoleDestruction.InnerSingleton,
               StaticRegisterNativesUMassRelationRoleDestruction,0x4b0,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Mass",
               InternalConstructor<UMassRelationRoleDestruction>,
               InternalVTableHelperCtorCaller<UMassRelationRoleDestruction>,local_res8,
               UMassRelationObserver::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassRelationRoleDestruction.InnerSingleton;
}

// StaticRegisterNativesUMassRelationRoleDestruction @ 1472507a0

void __cdecl UMassRelationRoleDestruction::StaticRegisterNativesUMassRelationRoleDestruction(void)

{
  return;
}

// operator() @ 1505036b0

bool __thiscall
`UMassRelationRoleDestruction::ConfigureQueries'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5842619672616239304>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5842619672616239304>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

