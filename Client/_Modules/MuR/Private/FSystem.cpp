// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 44

// FSystem @ 14ab5ed90

FSystem * __thiscall UE::Mutable::Private::FSystem::FSystem(FSystem *this,FSettings *param_1)

{
  Private *this_00;
  Private *pPVar1;
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name89,L"MutableRuntime");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name89,false,None,Default,true);
  FMemScope::FMemScope(local_res18,&LLMScope_Name89,true);
  this_00 = ::operator_new(0x220);
  pPVar1 = (Private *)0x0;
  if (this_00 != (Private *)0x0) {
    pPVar1 = Private::Private(this_00,param_1);
  }
  this->m_pD = pPVar1;
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return this;
}

// Private @ 14ab5ee80

Private * __thiscall
UE::Mutable::Private::FSystem::Private::Private(Private *this,FSettings *param_1)

{
  int iVar1;
  bool bVar2;
  undefined3 uVar3;
  void *pvVar4;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  (this->Settings).WorkingMemoryBytes = 0;
  (this->Settings).ImageCompressionQuality = 0;
  (this->Settings).bProfile = false;
  (this->StreamInterface).Object = (FModelReader *)0x0;
  (this->StreamInterface).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->LastInstanceID = 0;
  this->bUnrecoverableError = false;
  *(undefined8 *)&this->ImagePixelFormatOverride = 0;
  *(undefined8 *)&(this->ImagePixelFormatOverride).field_0x28 = 0;
  (this->WorkingMemoryManager).CurrentLiveInstance.State = 0;
  (this->WorkingMemoryManager).CurrentLiveInstance.LODMask = 0;
  (this->WorkingMemoryManager).CurrentLiveInstance.Instance.Object = (FInstance *)0x0;
  (this->WorkingMemoryManager).CurrentLiveInstance.Instance.SharedReferenceCount.ReferenceController
       = (TReferenceControllerBase<1> *)0x0;
  (this->WorkingMemoryManager).CurrentLiveInstance.Model.Object = (FModel *)0x0;
  (this->WorkingMemoryManager).CurrentLiveInstance.Model.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->WorkingMemoryManager).CurrentLiveInstance.OldParameters.Object = (FParameters *)0x0;
  (this->WorkingMemoryManager).CurrentLiveInstance.OldParameters.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->WorkingMemoryManager).CurrentLiveInstance.UpdatedParameters = 0;
  (this->WorkingMemoryManager).CurrentLiveInstance.Cache.Object = (FProgramCache *)0x0;
  (this->WorkingMemoryManager).CurrentLiveInstance.Cache.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->WorkingMemoryManager).CurrentLiveInstance.ExternalResourceProvider.Object =
       (FExternalResourceProvider *)0x0;
  (this->WorkingMemoryManager).CurrentLiveInstance.ExternalResourceProvider.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->WorkingMemoryManager).CachePerModel.AllocatorInstance._padding_ = 0;
  (this->WorkingMemoryManager).CachePerModel.AllocatorInstance.AllocSize = 0;
  (this->WorkingMemoryManager).CachePerModel.ArrayNum = 0;
  (this->WorkingMemoryManager).CachePerModel.ArrayMax = 0;
  (this->WorkingMemoryManager).LiveInstances.AllocatorInstance._padding_ = 0;
  (this->WorkingMemoryManager).LiveInstances.AllocatorInstance.AllocSize = 0;
  (this->WorkingMemoryManager).LiveInstances.ArrayNum = 0;
  (this->WorkingMemoryManager).LiveInstances.ArrayMax = 0;
  (this->WorkingMemoryManager).CurrentInstanceCache.Object = (FProgramCache *)0x0;
  (this->WorkingMemoryManager).CurrentInstanceCache.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->WorkingMemoryManager).CurrentMeshIdRegistry.Object =
       (TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
        *)0x0;
  (this->WorkingMemoryManager).CurrentMeshIdRegistry.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->WorkingMemoryManager).CurrentImageIdRegistry.Object =
       (TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
        *)0x0;
  (this->WorkingMemoryManager).CurrentImageIdRegistry.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->WorkingMemoryManager).CurrentMaterialIdRegistry.Object =
       (TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
        *)0x0;
  (this->WorkingMemoryManager).CurrentMaterialIdRegistry.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->WorkingMemoryManager).PooledImages.AllocatorInstance._padding_ = 0;
  (this->WorkingMemoryManager).PooledImages.AllocatorInstance.AllocSize = 0;
  (this->WorkingMemoryManager).PooledImages.ArrayNum = 0;
  (this->WorkingMemoryManager).PooledImages.ArrayMax = 0;
  (this->WorkingMemoryManager).TempImages.AllocatorInstance._padding_ = 0;
  (this->WorkingMemoryManager).TempImages.AllocatorInstance.AllocSize = 0;
  (this->WorkingMemoryManager).TempImages.ArrayNum = 0;
  (this->WorkingMemoryManager).TempImages.ArrayMax = 0;
  (this->WorkingMemoryManager).TempMeshes.AllocatorInstance._padding_ = 0;
  (this->WorkingMemoryManager).TempMeshes.AllocatorInstance.AllocSize = 0;
  (this->WorkingMemoryManager).TempMeshes.ArrayNum = 0;
  (this->WorkingMemoryManager).TempMeshes.ArrayMax = 0;
  *(undefined8 *)&(this->WorkingMemoryManager).CacheResources = 0;
  *(undefined8 *)&(this->WorkingMemoryManager).CacheResources.field_0x8 = 0;
  *(undefined8 *)&(this->WorkingMemoryManager).CacheResources.field_0x10 = 0;
  *(undefined8 *)&(this->WorkingMemoryManager).CacheResources.field_0x28 = 0;
  *(undefined8 *)&(this->WorkingMemoryManager).CacheResources.field_0x30 = 0;
  (this->WorkingMemoryManager).BudgetBytes = 0;
  (this->WorkingMemoryManager).BudgetExcessBytes = 0;
  (this->WorkingMemoryManager).RomTick = 0;
  *(undefined4 *)&(this->WorkingMemoryManager).CacheResources.field_0x38 = 0;
  *(undefined4 *)&(this->WorkingMemoryManager).CacheResources.field_0x3c = 0x80;
  *(undefined4 *)&(this->WorkingMemoryManager).CacheResources.field_0x44 = 0;
  *(undefined4 *)&(this->WorkingMemoryManager).CacheResources.field_0x40 = 0xffffffff;
  *(undefined8 *)&(this->WorkingMemoryManager).CacheResources.field_0x50 = 0;
  *(undefined8 *)&(this->WorkingMemoryManager).CacheResources.field_0x58 = 0;
  *(undefined4 *)&(this->WorkingMemoryManager).CacheResources.field_0x60 = 0;
  (this->WorkingMemoryManager).DebugRunnerID = 0;
  pvVar4 = ThreadLocalStoragePointer;
  (this->WorkingMemoryManager).DebugCurrentRunnerId = (atomic<unsigned___int64>)0x1;
  (this->WorkingMemoryManager).DebugRunnerThreadID = 0xffffffff;
  if (*(int *)(*(longlong *)((longlong)pvVar4 + (ulonglong)_tls_index * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name119,L"MutableRuntime");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name119,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,&LLMScope_Name119,true);
  iVar1 = param_1->ImageCompressionQuality;
  bVar2 = param_1->bProfile;
  uVar3 = *(undefined3 *)&param_1->field_0xd;
  (this->Settings).WorkingMemoryBytes = param_1->WorkingMemoryBytes;
  (this->Settings).ImageCompressionQuality = iVar1;
  (this->Settings).bProfile = bVar2;
  *(undefined3 *)&(this->Settings).field_0xd = uVar3;
  (this->WorkingMemoryManager).BudgetBytes = (this->Settings).WorkingMemoryBytes;
  UpdateStats(this);
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return this;
}

// ~FSystem @ 14ab60830

void __thiscall UE::Mutable::Private::FSystem::~FSystem(FSystem *this)

{
  Private *pPVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  ulonglong uVar6;
  bool bVar7;
  FLLMScope local_res8 [2];
  FLLMScope local_res10 [2];
  FMemScope local_res18;
  FMemScope local_res20;
  undefined8 local_38;
  FSharedReferencer<1> FStack_30;
  
  uVar6 = (ulonglong)_tls_index;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar6 * 8) + 0x9d4c) < ::_TSS0)
     && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name99,L"MutableRuntime");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res10,LLMScope_Name99,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,&LLMScope_Name99,true);
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId100,"Mutable_SystemDestructor",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
               ,100);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId100);
  }
  if ((this->m_pD == (Private *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("m_pD",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
                         ,0x66,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pPVar1 = this->m_pD;
  if (pPVar1 != (Private *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar6 * 8) + 0x9d4c) < ::_TSS0
        ) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&LLMScope_Name132,L"MutableRuntime");
      _Init_thread_footer(&::_TSS0);
    }
    FLLMScope::FLLMScope(local_res8,LLMScope_Name132,false,None,Default,true);
    FMemScope::FMemScope(&local_res18,&LLMScope_Name132,true);
    bVar4 = -1 < CpuChannel->Enabled;
    if (bVar4) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId133,"Mutable_SystemPrivateDestructor",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
                 ,0x85);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId133);
    }
    local_38 = 0;
    FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&pPVar1->StreamInterface != (TSharedPtr<UE::Mutable::Private::FModelReader,1> *)&local_38) {
      (pPVar1->StreamInterface).Object = (FModelReader *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pPVar1->StreamInterface).SharedReferenceCount,&FStack_30);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_30.ReferenceController);
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FMemScope::~FMemScope(&local_res18);
    FLLMScope::~FLLMScope(local_res8);
    FWorkingMemoryManager::~FWorkingMemoryManager(&pPVar1->WorkingMemoryManager);
    if (*(longlong *)&pPVar1->ImagePixelFormatOverride != 0) {
      plVar2 = *(longlong **)&(pPVar1->ImagePixelFormatOverride).field_0x28;
      plVar5 = (longlong *)&(pPVar1->ImagePixelFormatOverride).field_0x10;
      if (plVar2 != (longlong *)0x0) {
        plVar5 = plVar2;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pPVar1->StreamInterface).SharedReferenceCount.ReferenceController);
    ::operator_delete(pPVar1,0x220);
  }
  this->m_pD = (Private *)0x0;
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// ~Private @ 14ab60d10

void __thiscall UE::Mutable::Private::FSystem::Private::~Private(Private *this)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name132,L"MutableRuntime");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name132,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,&LLMScope_Name132,true);
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId133,"Mutable_SystemPrivateDestructor",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
               ,0x85);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId133);
  }
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->StreamInterface != (TSharedPtr<UE::Mutable::Private::FModelReader,1> *)&local_18) {
    (this->StreamInterface).Object = (FModelReader *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->StreamInterface).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  FWorkingMemoryManager::~FWorkingMemoryManager(&this->WorkingMemoryManager);
  if (*(longlong *)&this->ImagePixelFormatOverride != 0) {
    plVar1 = *(longlong **)&(this->ImagePixelFormatOverride).field_0x28;
    plVar2 = (longlong *)&(this->ImagePixelFormatOverride).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->StreamInterface).SharedReferenceCount.ReferenceController);
  return;
}

// operator() @ 14ab61c70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedPtr<UE::Mutable::Private::FImage_const_,1> * __thiscall
`UE::Mutable::Private::FSystem::GetImage'::__l2::<lambda_1>::operator()
          (void *this,TSharedPtr<UE::Mutable::Private::FImage_const_,1> *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  undefined8 *puVar6;
  TReferenceControllerBase<1> *pTVar7;
  FImage *pFVar8;
  FCacheAddress local_res8;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_58;
  undefined8 local_48;
  FSharedReferencer<1> FStack_40;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_38;
  
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->Object = (FImage *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined1 *)(*(longlong *)this + 0x24) =
       *(undefined1 *)(*(longlong *)((longlong)this + 8) + 0x168);
  if (*(char *)(*(longlong *)((longlong)this + 8) + 0x168) == '\0') {
    local_res8.At = *(uint *)((longlong)this + 0x18);
    local_res8.ExecutionOptions = *(uchar *)((longlong)this + 0x1c);
    local_res8.ExecutionIndex = 0;
    local_res8.Type = Full;
    pTVar4 = UE::Mutable::Private::FWorkingMemoryManager::LoadImage
                       ((FWorkingMemoryManager *)(*(longlong *)this + 0x60),&local_38,&local_res8,
                        true);
    if (__return_storage_ptr__ != pTVar4) {
      __return_storage_ptr__->Object = pTVar4->Object;
      pTVar4->Object = (FImage *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&pTVar4->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (__return_storage_ptr__->Object == (FImage *)0x0) {
    pTVar5 = ::operator_new(0x70);
    pFVar8 = (FImage *)&DAT_00000010;
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
      local_58.Object = ___xmm_00000000000000000000000000000010;
      local_58.SharedReferenceCount.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar5->SharedReferenceCount = (atomic<int>)0x1;
      pTVar5->WeakReferenceCount = (atomic<int>)0x1;
      pTVar5->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFImage_Private_Mutable_UE___00_SharedPointerInternals__6B_
      ;
      UE::Mutable::Private::FImage::FImage((FImage *)(pTVar5 + 1),0x10,0x10,1,RGBA_UByte,Black);
      pFVar8 = (FImage *)(pTVar5 + 1);
      if (pFVar8 == (FImage *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar4 = (TSharedPtr<UE::Mutable::Private::FImage_const_,1> *)(*pcVar2)();
          return pTVar4;
        }
      }
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
      local_58.SharedReferenceCount.ReferenceController = pTVar5;
      pTVar7 = pTVar5;
      local_58.Object = pFVar8;
    }
    if (__return_storage_ptr__ != &local_58) {
      __return_storage_ptr__->Object = pFVar8;
      local_58.Object = (FImage *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&local_58.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x110) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<UE::Mutable::Private::FImage_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if (*(int *)(lVar1 + 0x178) != 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5008110615084922946>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x7be,"TempImages.Num() == 0");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<UE::Mutable::Private::FImage_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if (*(int *)(lVar1 + 400) != 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5008110615084922945>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x7bf,"TempMeshes.Num() == 0");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<UE::Mutable::Private::FImage_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if (*(int *)(lVar1 + 0x208) == -1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DebugRunnerThreadID != FThread::InvalidThreadId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x7c3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<UE::Mutable::Private::FImage_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if (*(longlong *)(lVar1 + 0x210) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DebugRunnerID != InvalidRunnerId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x7c4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<UE::Mutable::Private::FImage_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  *(undefined4 *)(lVar1 + 0x208) = 0xffffffff;
  *(undefined8 *)(lVar1 + 0x210) = 0;
  lVar1 = *(longlong *)this;
  puVar6 = (undefined8 *)(lVar1 + 0x110);
  local_48 = 0;
  FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (puVar6 != &local_48) {
    *puVar6 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(lVar1 + 0x118),&FStack_40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_40.ReferenceController);
  return __return_storage_ptr__;
}

// operator() @ 14ab61f80

FExtendedImageDesc * __thiscall
`UE::Mutable::Private::FSystem::GetImageDesc'::__l2::<lambda_1>::operator()
          (void *this,FExtendedImageDesc *__return_storage_ptr__)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  FExtendedImageDesc *pFVar7;
  undefined8 *puVar8;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  
  pFVar7 = UE::Mutable::Private::CodeRunner::GetImageDescResult
                     (*(CodeRunner **)((longlong)this + 8),*(uint *)((longlong)this + 0x18));
  pTVar1 = &__return_storage_ptr__->ConstantImagesNeededToGenerate;
  *(undefined4 *)__return_storage_ptr__ = *(undefined4 *)pFVar7;
  *(undefined2 *)&__return_storage_ptr__->field_0x4 = *(undefined2 *)&pFVar7->field_0x4;
  __return_storage_ptr__->FirstLODAvailable = pFVar7->FirstLODAvailable;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (pFVar7->ConstantImagesNeededToGenerate).ArrayNum;
  _Src = (pFVar7->ConstantImagesNeededToGenerate).AllocatorInstance.Data;
  piVar2 = &(__return_storage_ptr__->ConstantImagesNeededToGenerate).ArrayMax;
  (__return_storage_ptr__->ConstantImagesNeededToGenerate).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 2);
  }
  lVar4 = *(longlong *)this;
  if (*(longlong *)(lVar4 + 0x110) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FExtendedImageDesc *)(*pcVar5)();
      return pFVar7;
    }
  }
  if (*(int *)(lVar4 + 0x178) != 0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5008110615084922946>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x7be,"TempImages.Num() == 0");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FExtendedImageDesc *)(*pcVar5)();
      return pFVar7;
    }
  }
  if (*(int *)(lVar4 + 400) != 0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5008110615084922945>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x7bf,"TempMeshes.Num() == 0");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FExtendedImageDesc *)(*pcVar5)();
      return pFVar7;
    }
  }
  if (*(int *)(lVar4 + 0x208) == -1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DebugRunnerThreadID != FThread::InvalidThreadId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x7c3,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FExtendedImageDesc *)(*pcVar5)();
      return pFVar7;
    }
  }
  if (*(longlong *)(lVar4 + 0x210) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DebugRunnerID != InvalidRunnerId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x7c4,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FExtendedImageDesc *)(*pcVar5)();
      return pFVar7;
    }
  }
  *(undefined4 *)(lVar4 + 0x208) = 0xffffffff;
  *(undefined8 *)(lVar4 + 0x210) = 0;
  lVar4 = *(longlong *)this;
  puVar8 = (undefined8 *)(lVar4 + 0x110);
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (puVar8 != &local_28) {
    *puVar8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(lVar4 + 0x118),&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  return __return_storage_ptr__;
}

// operator() @ 14ab62190

TSharedPtr<UE::Mutable::Private::FMaterial_const_,1> * __thiscall
`UE::Mutable::Private::FSystem::GetMaterial'::__l2::<lambda_1>::operator()
          (void *this,TSharedPtr<UE::Mutable::Private::FMaterial_const_,1> *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<UE::Mutable::Private::FMaterial_const_,1> *pTVar4;
  undefined8 *puVar5;
  FCacheAddress local_res8;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  TSharedPtr<UE::Mutable::Private::FMaterial_const_,1> local_18;
  
  __return_storage_ptr__->Object = (FMaterial *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined1 *)(*(longlong *)this + 0x24) =
       *(undefined1 *)(*(longlong *)((longlong)this + 8) + 0x168);
  if (*(char *)(*(longlong *)((longlong)this + 8) + 0x168) == '\0') {
    local_res8.At = *(uint *)((longlong)this + 0x18);
    local_res8.ExecutionIndex = 0;
    local_res8.ExecutionOptions = '\0';
    local_res8.Type = Full;
    pTVar4 = UE::Mutable::Private::FWorkingMemoryManager::LoadMaterial
                       ((FWorkingMemoryManager *)(*(longlong *)this + 0x60),&local_18,&local_res8);
    if (__return_storage_ptr__ != pTVar4) {
      __return_storage_ptr__->Object = pTVar4->Object;
      pTVar4->Object = (FMaterial *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&pTVar4->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x110) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<UE::Mutable::Private::FMaterial_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if (*(int *)(lVar1 + 0x178) != 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5008110615084922946>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x7be,"TempImages.Num() == 0");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<UE::Mutable::Private::FMaterial_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if (*(int *)(lVar1 + 400) != 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5008110615084922945>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x7bf,"TempMeshes.Num() == 0");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<UE::Mutable::Private::FMaterial_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if (*(int *)(lVar1 + 0x208) == -1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DebugRunnerThreadID != FThread::InvalidThreadId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x7c3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<UE::Mutable::Private::FMaterial_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if (*(longlong *)(lVar1 + 0x210) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DebugRunnerID != InvalidRunnerId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x7c4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<UE::Mutable::Private::FMaterial_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  *(undefined4 *)(lVar1 + 0x208) = 0xffffffff;
  *(undefined8 *)(lVar1 + 0x210) = 0;
  lVar1 = *(longlong *)this;
  puVar5 = (undefined8 *)(lVar1 + 0x110);
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (puVar5 != &local_28) {
    *puVar5 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(lVar1 + 0x118),&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  return __return_storage_ptr__;
}

// operator() @ 14ab62380

TSharedPtr<UE::Mutable::Private::FMesh_const_,1> * __thiscall
`UE::Mutable::Private::FSystem::GetMesh'::__l2::<lambda_1>::operator()
          (void *this,TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *pTVar4;
  undefined8 *puVar5;
  FCacheAddress local_res8;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  TSharedPtr<UE::Mutable::Private::FMesh_const_,1> local_18;
  
  __return_storage_ptr__->Object = (FMesh *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined1 *)(*(longlong *)this + 0x24) =
       *(undefined1 *)(*(longlong *)((longlong)this + 8) + 0x168);
  if (*(char *)(*(longlong *)((longlong)this + 8) + 0x168) == '\0') {
    local_res8.At = *(uint *)((longlong)this + 0x18);
    local_res8.ExecutionOptions = *(uchar *)((longlong)this + 0x1c);
    local_res8.ExecutionIndex = 0;
    local_res8.Type = Full;
    pTVar4 = UE::Mutable::Private::FWorkingMemoryManager::LoadMesh
                       ((FWorkingMemoryManager *)(*(longlong *)this + 0x60),&local_18,&local_res8,
                        true);
    if (__return_storage_ptr__ != pTVar4) {
      __return_storage_ptr__->Object = pTVar4->Object;
      pTVar4->Object = (FMesh *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&pTVar4->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x110) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if (*(int *)(lVar1 + 0x178) != 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5008110615084922946>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x7be,"TempImages.Num() == 0");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if (*(int *)(lVar1 + 400) != 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5008110615084922945>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x7bf,"TempMeshes.Num() == 0");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if (*(int *)(lVar1 + 0x208) == -1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DebugRunnerThreadID != FThread::InvalidThreadId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x7c3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if (*(longlong *)(lVar1 + 0x210) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DebugRunnerID != InvalidRunnerId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x7c4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  *(undefined4 *)(lVar1 + 0x208) = 0xffffffff;
  *(undefined8 *)(lVar1 + 0x210) = 0;
  lVar1 = *(longlong *)this;
  puVar5 = (undefined8 *)(lVar1 + 0x110);
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (puVar5 != &local_28) {
    *puVar5 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(lVar1 + 0x118),&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  return __return_storage_ptr__;
}

// BeginBuild @ 14ab66ee0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Mutable::Private::FSystem::Private::BeginBuild
          (Private *this,TSharedPtr<UE::Mutable::Private::FModel_const_,1> *param_1,
          TSharedPtr<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>,1>
          *param_2,TSharedPtr<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>,1>
                   *param_3,
          TSharedPtr<TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>,1>
          *param_4)

{
  TSharedPtr<UE::Mutable::Private::FProgramCache,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
  *pTVar3;
  TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
  *pTVar4;
  TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
  *pTVar5;
  code *pcVar6;
  bool bVar7;
  TIntrusiveReferenceController<UE::Mutable::Private::FProgramCache,1> *pTVar8;
  Private *pPVar9;
  FProgramCache *pFVar10;
  TTypeCompatibleBytes<UE::Mutable::Private::FProgramCache> *local_58;
  FSharedReferencer<1> FStack_50;
  TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
  *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
  *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
  *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  
  pTVar8 = ::operator_new(0x1d8);
  if (pTVar8 == (TIntrusiveReferenceController<UE::Mutable::Private::FProgramCache,1> *)0x0) {
    pTVar8 = (TIntrusiveReferenceController<UE::Mutable::Private::FProgramCache,1> *)0x0;
    local_58 = ___xmm_00000000000000000000000000000010;
    FStack_50.ReferenceController = (TReferenceControllerBase<1> *)_UNK_150651568;
    pFVar10 = (FProgramCache *)&DAT_00000010;
  }
  else {
    pTVar8 = SharedPointerInternals::
             TIntrusiveReferenceController<UE::Mutable::Private::FProgramCache,1>::
             TIntrusiveReferenceController<UE::Mutable::Private::FProgramCache,1><>(pTVar8);
    pFVar10 = (FProgramCache *)&pTVar8->ObjectStorage;
    if (pFVar10 == (FProgramCache *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    local_58 = (TTypeCompatibleBytes<UE::Mutable::Private::FProgramCache> *)pFVar10;
    FStack_50.ReferenceController = (TReferenceControllerBase<1> *)pTVar8;
    if (pTVar8 != (TIntrusiveReferenceController<UE::Mutable::Private::FProgramCache,1> *)0x0) {
      LOCK();
      *(int *)&pTVar8->_padding_ = (int)pTVar8->_padding_ + 1;
      UNLOCK();
    }
  }
  pTVar1 = &(this->WorkingMemoryManager).CurrentInstanceCache;
  if (pTVar1 != (TSharedPtr<UE::Mutable::Private::FProgramCache,1> *)&local_58) {
    pTVar1->Object = pFVar10;
    local_58 = (TTypeCompatibleBytes<UE::Mutable::Private::FProgramCache> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->WorkingMemoryManager).CurrentInstanceCache.SharedReferenceCount,&FStack_50);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_50.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar8);
  if (pTVar1->Object == (FProgramCache *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar10 = pTVar1->Object;
  if (param_1->Object == (FModel *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pPVar9 = FModel::GetPrivate(param_1->Object);
  FProgramCache::Init(pFVar10,(pPVar9->Program).OpAddress.ArrayNum);
  pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
  pTVar3 = param_2->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48 = (this->WorkingMemoryManager).CurrentMeshIdRegistry.Object;
  pTStack_40 = (this->WorkingMemoryManager).CurrentMeshIdRegistry.SharedReferenceCount.
               ReferenceController;
  (this->WorkingMemoryManager).CurrentMeshIdRegistry.Object = pTVar3;
  (this->WorkingMemoryManager).CurrentMeshIdRegistry.SharedReferenceCount.ReferenceController =
       pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  pTVar2 = (param_3->SharedReferenceCount).ReferenceController;
  pTVar4 = param_3->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = (this->WorkingMemoryManager).CurrentImageIdRegistry.Object;
  pTStack_30 = (this->WorkingMemoryManager).CurrentImageIdRegistry.SharedReferenceCount.
               ReferenceController;
  (this->WorkingMemoryManager).CurrentImageIdRegistry.Object = pTVar4;
  (this->WorkingMemoryManager).CurrentImageIdRegistry.SharedReferenceCount.ReferenceController =
       pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  pTVar2 = (param_4->SharedReferenceCount).ReferenceController;
  pTVar5 = param_4->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = (this->WorkingMemoryManager).CurrentMaterialIdRegistry.Object;
  pTStack_20 = (this->WorkingMemoryManager).CurrentMaterialIdRegistry.SharedReferenceCount.
               ReferenceController;
  (this->WorkingMemoryManager).CurrentMaterialIdRegistry.Object = pTVar5;
  (this->WorkingMemoryManager).CurrentMaterialIdRegistry.SharedReferenceCount.ReferenceController =
       pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  FWorkingMemoryManager::FindOrAddModelCache(&this->WorkingMemoryManager,param_1);
  PrepareCache(this,param_1->Object,-1);
  return;
}

// BeginUpdate_GameThread @ 14ab67130

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::Mutable::Private::FInstance_const_,1> * __thiscall
UE::Mutable::Private::FSystem::BeginUpdate_GameThread
          (FSystem *this,
          TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *__return_storage_ptr__,uint param_1,
          TSharedPtr<UE::Mutable::Private::FParameters_const_,1> *param_2,
          TSharedPtr<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>,1>
          *param_3,TSharedPtr<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>,1>
                   *param_4,
          TSharedPtr<TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>,1>
          *param_5,int param_6,uint param_7)

{
  FProgramCache *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  Private *pPVar3;
  TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
  *pTVar4;
  TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
  *pTVar5;
  TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
  *pTVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  FLiveInstance *pFVar10;
  TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *pTVar11;
  Private *pPVar12;
  TSharedRef<UE::Mutable::Private::FInstance,1> *pTVar13;
  bool bVar14;
  undefined1 auStackY_1308 [32];
  FLLMScope local_12d8;
  uint local_12d4;
  TSharedPtr<UE::Mutable::Private::FInstance_const_,1> local_12d0;
  FScheduledOpInline local_12c0;
  TSharedPtr<UE::Mutable::Private::FParameters_const_,1> *local_12b0;
  FMemScope local_12a8;
  undefined8 local_12a0;
  FSharedReferencer<1> local_1298;
  FProgramCache *local_1290;
  TReferenceControllerBase<1> *pTStack_1288;
  TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
  *local_1280;
  TReferenceControllerBase<1> *pTStack_1278;
  TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
  *local_1270;
  TReferenceControllerBase<1> *pTStack_1268;
  TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
  *local_1260;
  TReferenceControllerBase<1> *pTStack_1258;
  TSharedRef<UE::Mutable::Private::FInstance,1> local_1250;
  CodeRunnerBegin local_1240;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1308;
  local_12d4 = param_7;
  local_12b0 = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name238,L"MutableRuntime");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(&local_12d8,LLMScope_Name238,false,None,Default,true);
  FMemScope::FMemScope(&local_12a8,&LLMScope_Name238,true);
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId239,"Mutable_BeginUpdate_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
               ,0xef);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId239);
  }
  pFVar10 = Private::FindLiveInstance(this->m_pD,param_1);
  if (pFVar10 == (FLiveInstance *)0x0) {
    if (1 < (byte)LogMutableCore._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutableCore);
    }
  }
  else {
    if (param_2->Object != (FParameters *)0x0) {
      pFVar1 = (pFVar10->Cache).Object;
      pTVar2 = (pFVar10->Cache).SharedReferenceCount.ReferenceController;
      pPVar3 = this->m_pD;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_1290 = (pPVar3->WorkingMemoryManager).CurrentInstanceCache.Object;
      pTStack_1288 = (pPVar3->WorkingMemoryManager).CurrentInstanceCache.SharedReferenceCount.
                     ReferenceController;
      (pPVar3->WorkingMemoryManager).CurrentInstanceCache.Object = pFVar1;
      (pPVar3->WorkingMemoryManager).CurrentInstanceCache.SharedReferenceCount.ReferenceController =
           pTVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_1288);
      pPVar3 = this->m_pD;
      pTVar2 = (param_3->SharedReferenceCount).ReferenceController;
      pTVar4 = param_3->Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_1280 = (pPVar3->WorkingMemoryManager).CurrentMeshIdRegistry.Object;
      pTStack_1278 = (pPVar3->WorkingMemoryManager).CurrentMeshIdRegistry.SharedReferenceCount.
                     ReferenceController;
      (pPVar3->WorkingMemoryManager).CurrentMeshIdRegistry.Object = pTVar4;
      (pPVar3->WorkingMemoryManager).CurrentMeshIdRegistry.SharedReferenceCount.ReferenceController
           = pTVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_1278);
      pPVar3 = this->m_pD;
      pTVar2 = (param_4->SharedReferenceCount).ReferenceController;
      pTVar5 = param_4->Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_1270 = (pPVar3->WorkingMemoryManager).CurrentImageIdRegistry.Object;
      pTStack_1268 = (pPVar3->WorkingMemoryManager).CurrentImageIdRegistry.SharedReferenceCount.
                     ReferenceController;
      (pPVar3->WorkingMemoryManager).CurrentImageIdRegistry.Object = pTVar5;
      (pPVar3->WorkingMemoryManager).CurrentImageIdRegistry.SharedReferenceCount.ReferenceController
           = pTVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_1268);
      pPVar3 = this->m_pD;
      pTVar2 = (param_5->SharedReferenceCount).ReferenceController;
      pTVar6 = param_5->Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_1260 = (pPVar3->WorkingMemoryManager).CurrentMaterialIdRegistry.Object;
      pTStack_1258 = (pPVar3->WorkingMemoryManager).CurrentMaterialIdRegistry.SharedReferenceCount.
                     ReferenceController;
      (pPVar3->WorkingMemoryManager).CurrentMaterialIdRegistry.Object = pTVar6;
      (pPVar3->WorkingMemoryManager).CurrentMaterialIdRegistry.SharedReferenceCount.
      ReferenceController = pTVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_1258);
      if (((pFVar10->Model).Object == (FModel *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        pTVar11 = (TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *)(*pcVar7)();
        return pTVar11;
      }
      pPVar12 = FModel::GetPrivate((pFVar10->Model).Object);
      uVar9 = 0;
      if (param_6 < (pPVar12->Program).States.ArrayNum) {
        uVar9 = (uint)~param_6 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        pTVar11 = (TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *)(*pcVar7)();
        return pTVar11;
      }
      uVar9 = *(uint *)((pPVar12->Program).States.AllocatorInstance.Data +
                       (longlong)param_6 * 0x48 + 0x10);
      CodeRunnerBegin::CodeRunnerBegin(&local_1240,this,&pFVar10->Model,local_12b0,local_12d4);
      local_12c0.Stage = 0;
      local_12c0.ExecutionIndex = 0;
      local_12c0.CustomState = 0;
      local_12c0.At = uVar9;
      CodeRunnerBegin::RunCode(&local_1240,&local_12d0,&local_12c0);
      if (local_12d0.Object == (FInstance *)0x0) {
        pTVar13 = MakeShared<UE::Mutable::Private::FInstance,1>(&local_1250);
        local_1298.ReferenceController = (pTVar13->SharedReferenceCount).ReferenceController;
        local_12d0.Object = pTVar13->Object;
        if (local_1298.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_1298.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_1298.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_12a0 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&local_12d0.SharedReferenceCount,&local_1298);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1298.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1250.SharedReferenceCount.ReferenceController);
      }
      __return_storage_ptr__->Object = local_12d0.Object;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           local_12d0.SharedReferenceCount.ReferenceController;
      local_12d0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_12d0.Object = (FInstance *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      CodeRunnerBegin::~CodeRunnerBegin(&local_1240);
      goto LAB_14ab674e4;
    }
    if (1 < (byte)LogMutableCore._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutableCore);
      __return_storage_ptr__->Object = (FInstance *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      goto LAB_14ab674e4;
    }
  }
  __return_storage_ptr__->Object = (FInstance *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
LAB_14ab674e4:
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(&local_12a8);
  FLLMScope::~FLLMScope(&local_12d8);
  return __return_storage_ptr__;
}

// BeginUpdate_MutableThread @ 14ab67570

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::Mutable::Private::FInstance_const_,1> * __thiscall
UE::Mutable::Private::FSystem::BeginUpdate_MutableThread
          (FSystem *this,
          TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *__return_storage_ptr__,uint param_1,
          TSharedPtr<UE::Mutable::Private::FParameters_const_,1> *param_2,
          TSharedPtr<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>,1>
          *param_3,TSharedPtr<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>,1>
                   *param_4,
          TSharedPtr<TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>,1>
          *param_5,int param_6,uint param_7)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  Private *pPVar3;
  TReferenceControllerBase<1> *pTVar4;
  TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
  *pTVar5;
  TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
  *pTVar6;
  TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
  *pTVar7;
  code *pcVar8;
  FCacheAddress FVar9;
  bool bVar10;
  ushort uVar11;
  DWORD DVar12;
  FLiveInstance *pFVar13;
  TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *pTVar14;
  Private *pPVar15;
  FModel *this_00;
  FParameters *this_01;
  TSharedPtr<UE::Mutable::Private::FParameters,1> *pTVar16;
  FProgramCache *pFVar17;
  TSharedRef<UE::Mutable::Private::FInstance,1> *pTVar18;
  uint uVar19;
  FStaticBasicLogRecord *pFVar20;
  TSharedPtr<UE::Mutable::Private::FProgramCache,1> *pTVar21;
  bool bVar22;
  bool local_118;
  FLLMScope local_108 [2];
  TSharedPtr<UE::Mutable::Private::FInstance_const_,1> local_100;
  FParameters *local_f0;
  FSharedReferencer<1> local_e8;
  TSharedPtr<UE::Mutable::Private::FProgramCache,1> *local_e0;
  FMemScope local_d8;
  undefined8 local_d0;
  FSharedReferencer<1> FStack_c8;
  undefined8 local_c0;
  FSharedReferencer<1> local_b8;
  undefined8 local_b0;
  FSharedReferencer<1> FStack_a8;
  FProgramCache *local_a0;
  TReferenceControllerBase<1> *pTStack_98;
  TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
  *local_90;
  TReferenceControllerBase<1> *pTStack_88;
  TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
  *local_80;
  TReferenceControllerBase<1> *pTStack_78;
  TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
  *local_70;
  TReferenceControllerBase<1> *pTStack_68;
  TSharedPtr<UE::Mutable::Private::FParameters,1> local_60;
  FInstance *local_50;
  TReferenceControllerBase<1> *pTStack_48;
  TSharedRef<UE::Mutable::Private::FInstance,1> local_40;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name283,L"MutableRuntime");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_108,LLMScope_Name283,false,None,Default,true);
  FMemScope::FMemScope(&local_d8,&LLMScope_Name283,true);
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId284,"Mutable_BeginUpdate_MutableThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
               ,0x11c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId284);
  }
  __GTraceCounterMutableRuntime_Updates.Value = __GTraceCounterMutableRuntime_Updates.Value + 1;
  if (-1 < CountersChannel->Enabled) {
    if (__GTraceCounterMutableRuntime_Updates.CounterId == (atomic<unsigned_int>)0x0) {
      uVar11 = FCountersTrace::OutputInitCounter
                         (__GTraceCounterMutableRuntime_Updates.CounterName,TraceCounterType_Int,
                          __GTraceCounterMutableRuntime_Updates.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterMutableRuntime_Updates.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterMutableRuntime_Updates.CounterId._2_2_ = 0;
        __GTraceCounterMutableRuntime_Updates.CounterId._0_2_ = uVar11;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterMutableRuntime_Updates.CounterId._0_2_,
               __GTraceCounterMutableRuntime_Updates.Value);
  }
  if (param_2->Object == (FParameters *)0x0) {
    if (1 < (byte)LogMutableCore._0_1_) {
      pFVar20 = &::LOG_Static;
LAB_14ab676d1:
      Logging::Private::BasicLog<2>(pFVar20,(FLogCategoryBase *)&LogMutableCore);
    }
  }
  else {
    pFVar13 = Private::FindLiveInstance(this->m_pD,param_1);
    if (pFVar13 != (FLiveInstance *)0x0) {
      pFVar17 = (pFVar13->Cache).Object;
      local_e0 = &pFVar13->Cache;
      pPVar3 = this->m_pD;
      pTVar4 = (pFVar13->Cache).SharedReferenceCount.ReferenceController;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_a0 = (pPVar3->WorkingMemoryManager).CurrentInstanceCache.Object;
      pTStack_98 = (pPVar3->WorkingMemoryManager).CurrentInstanceCache.SharedReferenceCount.
                   ReferenceController;
      (pPVar3->WorkingMemoryManager).CurrentInstanceCache.Object = pFVar17;
      (pPVar3->WorkingMemoryManager).CurrentInstanceCache.SharedReferenceCount.ReferenceController =
           pTVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_98);
      pPVar3 = this->m_pD;
      pTVar4 = (param_3->SharedReferenceCount).ReferenceController;
      pTVar5 = param_3->Object;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_90 = (pPVar3->WorkingMemoryManager).CurrentMeshIdRegistry.Object;
      pTStack_88 = (pPVar3->WorkingMemoryManager).CurrentMeshIdRegistry.SharedReferenceCount.
                   ReferenceController;
      (pPVar3->WorkingMemoryManager).CurrentMeshIdRegistry.Object = pTVar5;
      (pPVar3->WorkingMemoryManager).CurrentMeshIdRegistry.SharedReferenceCount.ReferenceController
           = pTVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_88);
      pPVar3 = this->m_pD;
      pTVar4 = (param_4->SharedReferenceCount).ReferenceController;
      pTVar6 = param_4->Object;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_80 = (pPVar3->WorkingMemoryManager).CurrentImageIdRegistry.Object;
      pTStack_78 = (pPVar3->WorkingMemoryManager).CurrentImageIdRegistry.SharedReferenceCount.
                   ReferenceController;
      (pPVar3->WorkingMemoryManager).CurrentImageIdRegistry.Object = pTVar6;
      (pPVar3->WorkingMemoryManager).CurrentImageIdRegistry.SharedReferenceCount.ReferenceController
           = pTVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_78);
      pPVar3 = this->m_pD;
      pTVar4 = (param_5->SharedReferenceCount).ReferenceController;
      pTVar7 = param_5->Object;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_70 = (pPVar3->WorkingMemoryManager).CurrentMaterialIdRegistry.Object;
      pTStack_68 = (pPVar3->WorkingMemoryManager).CurrentMaterialIdRegistry.SharedReferenceCount.
                   ReferenceController;
      (pPVar3->WorkingMemoryManager).CurrentMaterialIdRegistry.Object = pTVar7;
      (pPVar3->WorkingMemoryManager).CurrentMaterialIdRegistry.SharedReferenceCount.
      ReferenceController = pTVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_68);
      if (((pFVar13->Model).Object == (FModel *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        pTVar14 = (TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *)(*pcVar8)();
        return pTVar14;
      }
      pPVar15 = FModel::GetPrivate((pFVar13->Model).Object);
      if ((param_6 < 0) || ((pPVar15->Program).States.ArrayNum <= param_6)) {
        if (1 < (byte)LogMutableCore._0_1_) {
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutableCore);
        }
        __return_storage_ptr__->Object = (FInstance *)0x0;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pTVar14 = &pFVar13->Instance;
        local_d0 = 0;
        FStack_c8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (pTVar14 != (TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *)&local_d0) {
          pTVar14->Object = (FInstance *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(pFVar13->Instance).SharedReferenceCount,&FStack_c8);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_c8.ReferenceController);
        local_118 = param_6 != pFVar13->State;
        pFVar13->State = param_6;
        if (!local_118) {
          local_118 = Private::CheckUpdatedParameters
                                (this->m_pD,pFVar13,param_2,&pFVar13->UpdatedParameters);
        }
        FWorkingMemoryManager::ClearCacheLayer0(&this->m_pD->WorkingMemoryManager);
        if (local_118 != false) {
          FWorkingMemoryManager::ClearCacheLayer1(&this->m_pD->WorkingMemoryManager);
        }
        pPVar3 = this->m_pD;
        if (((pPVar3->WorkingMemoryManager).DebugRunnerThreadID != 0xffffffff) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("DebugRunnerThreadID == FThread::InvalidThreadId",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                                ,0x786,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          pTVar14 = (TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *)(*pcVar8)();
          return pTVar14;
        }
        if (((pPVar3->WorkingMemoryManager).DebugRunnerID != 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("DebugRunnerID == InvalidRunnerId",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                                ,0x787,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          pTVar14 = (TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *)(*pcVar8)();
          return pTVar14;
        }
        DVar12 = GetCurrentThreadId();
        (pPVar3->WorkingMemoryManager).DebugRunnerThreadID = DVar12;
        LOCK();
        paVar1 = &(pPVar3->WorkingMemoryManager).DebugCurrentRunnerId;
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
        UNLOCK();
        (pPVar3->WorkingMemoryManager).DebugRunnerID = (longlong)aVar2 + 1;
        this_00 = TSharedPtr<UE::Mutable::Private::FModel_const_,1>::operator->(&pFVar13->Model);
        pPVar15 = FModel::GetPrivate(this_00);
        uVar19 = 0;
        if (param_6 < (pPVar15->Program).States.ArrayNum) {
          uVar19 = (uint)~param_6 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          pTVar14 = (TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *)(*pcVar8)();
          return pTVar14;
        }
        uVar19 = *(uint *)((pPVar15->Program).States.AllocatorInstance.Data +
                          (longlong)param_6 * 0x48 + 0x10);
        Private::PrepareCache(this->m_pD,(pFVar13->Model).Object,param_6);
        this_01 = TSharedPtr<UE::Mutable::Private::FParameters_const_,1>::operator->(param_2);
        pTVar16 = Private::FParameters::Clone(this_01,&local_60);
        local_e8.ReferenceController = (pTVar16->SharedReferenceCount).ReferenceController;
        local_f0 = pTVar16->Object;
        if (local_e8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_e8.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_e8.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (&pFVar13->OldParameters !=
            (TSharedPtr<UE::Mutable::Private::FParameters_const_,1> *)&local_f0) {
          (pFVar13->OldParameters).Object = local_f0;
          local_f0 = (FParameters *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(pFVar13->OldParameters).SharedReferenceCount,&local_e8);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_e8.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_60.SharedReferenceCount.ReferenceController);
        FWorkingMemoryManager::FindOrAddModelCache
                  (&this->m_pD->WorkingMemoryManager,&pFVar13->Model);
        Private::RunCode(this->m_pD,&pFVar13->ExternalResourceProvider,&pFVar13->Model,
                         param_2->Object,uVar19,param_7,'\0',0);
        pFVar17 = TSharedPtr<UE::Mutable::Private::FProgramCache,1>::operator->(local_e0);
        FVar9.ExecutionIndex = 0;
        FVar9.ExecutionOptions = '\0';
        FVar9.Type = Full;
        FVar9.At = uVar19;
        FProgramCache::GetInstance(pFVar17,&local_100,FVar9);
        TSharedPtr<UE::Mutable::Private::FProgramCache,1>::operator->(local_e0);
        if (local_100.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_100.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_100.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        local_50 = pTVar14->Object;
        pTStack_48 = (pFVar13->Instance).SharedReferenceCount.ReferenceController;
        pTVar14->Object = local_100.Object;
        (pFVar13->Instance).SharedReferenceCount.ReferenceController =
             local_100.SharedReferenceCount.ReferenceController;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_48);
        if (local_100.Object == (FInstance *)0x0) {
          pTVar18 = MakeShared<UE::Mutable::Private::FInstance,1>(&local_40);
          local_b8.ReferenceController = (pTVar18->SharedReferenceCount).ReferenceController;
          local_100.Object = pTVar18->Object;
          if (local_b8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_b8.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(local_b8.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_c0 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&local_100.SharedReferenceCount,&local_b8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_b8.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_40.SharedReferenceCount.ReferenceController);
        }
        pPVar3 = this->m_pD;
        if (((pPVar3->WorkingMemoryManager).CurrentInstanceCache.Object == (FProgramCache *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          pTVar14 = (TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *)(*pcVar8)();
          return pTVar14;
        }
        if (((pPVar3->WorkingMemoryManager).TempImages.ArrayNum != 0) &&
           (bVar10 = Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_5008110615084922946>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                                ,0x7be,"TempImages.Num() == 0"), bVar10)) {
          pcVar8 = (code *)swi(3);
          pTVar14 = (TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *)(*pcVar8)();
          return pTVar14;
        }
        if (((pPVar3->WorkingMemoryManager).TempMeshes.ArrayNum != 0) &&
           (bVar10 = Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_5008110615084922945>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                                ,0x7bf,"TempMeshes.Num() == 0"), bVar10)) {
          pcVar8 = (code *)swi(3);
          pTVar14 = (TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *)(*pcVar8)();
          return pTVar14;
        }
        if (((pPVar3->WorkingMemoryManager).DebugRunnerThreadID == 0xffffffff) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("DebugRunnerThreadID != FThread::InvalidThreadId",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                                ,0x7c3,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          pTVar14 = (TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *)(*pcVar8)();
          return pTVar14;
        }
        if (((pPVar3->WorkingMemoryManager).DebugRunnerID == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("DebugRunnerID != InvalidRunnerId",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                                ,0x7c4,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          pTVar14 = (TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *)(*pcVar8)();
          return pTVar14;
        }
        (pPVar3->WorkingMemoryManager).DebugRunnerThreadID = 0xffffffff;
        (pPVar3->WorkingMemoryManager).DebugRunnerID = 0;
        pPVar3 = this->m_pD;
        pTVar21 = &(pPVar3->WorkingMemoryManager).CurrentInstanceCache;
        local_b0 = 0;
        FStack_a8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (pTVar21 != (TSharedPtr<UE::Mutable::Private::FProgramCache,1> *)&local_b0) {
          pTVar21->Object = (FProgramCache *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(pPVar3->WorkingMemoryManager).CurrentInstanceCache.SharedReferenceCount,
                     &FStack_a8);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_a8.ReferenceController);
        __return_storage_ptr__->Object = local_100.Object;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             local_100.SharedReferenceCount.ReferenceController;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
      }
      if (bVar22) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      goto LAB_14ab67cbd;
    }
    if (1 < (byte)LogMutableCore._0_1_) {
      pFVar20 = &::LOG_Static;
      goto LAB_14ab676d1;
    }
  }
  __return_storage_ptr__->Object = (FInstance *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
LAB_14ab67cbd:
  FMemScope::~FMemScope(&local_d8);
  FLLMScope::~FLLMScope(local_108);
  return __return_storage_ptr__;
}

// BuildBool @ 14ab67e00

bool __thiscall
UE::Mutable::Private::FSystem::Private::BuildBool
          (Private *this,TSharedPtr<UE::Mutable::Private::FExternalResourceProvider,1> *param_1,
          TSharedPtr<UE::Mutable::Private::FModel_const_,1> *param_2,FParameters *param_3,
          uint param_4)

{
  atomic<unsigned___int64> *paVar1;
  TSharedPtr<UE::Mutable::Private::FProgramCache,1> *pTVar2;
  atomic<unsigned___int64> aVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  DWORD DVar8;
  FOpExecutionData *pFVar9;
  FCacheAddress local_28 [2];
  
  if ((this->WorkingMemoryManager).DebugRunnerThreadID != 0xffffffff) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("DebugRunnerThreadID == FThread::InvalidThreadId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x786,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  if ((this->WorkingMemoryManager).DebugRunnerID != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("DebugRunnerID == InvalidRunnerId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x787,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  DVar8 = GetCurrentThreadId();
  (this->WorkingMemoryManager).DebugRunnerThreadID = DVar8;
  LOCK();
  paVar1 = &(this->WorkingMemoryManager).DebugCurrentRunnerId;
  aVar3 = *paVar1;
  *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
  UNLOCK();
  (this->WorkingMemoryManager).DebugRunnerID = (longlong)aVar3 + 1;
  RunCode(this,param_1,param_2,param_3,param_4,0xffffffff,'\0',0);
  bVar5 = false;
  pTVar2 = &(this->WorkingMemoryManager).CurrentInstanceCache;
  if (this->bUnrecoverableError == false) {
    if (pTVar2->Object == (FProgramCache *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    local_28[0].ExecutionIndex = 0;
    local_28[0].ExecutionOptions = '\0';
    local_28[0].Type = Full;
    local_28[0].At = param_4;
    if (param_4 != 0) {
      pFVar9 = CodeContainer<UE::Mutable::Private::FProgramCache::FOpExecutionData>::get_ptr
                         (&pTVar2->Object->OpExecutionData,local_28);
      bVar5 = false;
      if (pFVar9 != (FOpExecutionData *)0x0) {
        if (pFVar9->DataType != Bool) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Data->DataType==EDataType::Bool",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                             ,0x2b5,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
        }
        bVar5 = (pFVar9->field5_0x4).DataTypeIndex != 0;
      }
    }
  }
  if (pTVar2->Object == (FProgramCache *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  if ((this->WorkingMemoryManager).TempImages.ArrayNum != 0) {
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5008110615084922946>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x7be,"TempImages.Num() == 0");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  if ((this->WorkingMemoryManager).TempMeshes.ArrayNum != 0) {
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5008110615084922945>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x7bf,"TempMeshes.Num() == 0");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  if ((this->WorkingMemoryManager).DebugRunnerThreadID == 0xffffffff) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("DebugRunnerThreadID != FThread::InvalidThreadId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x7c3,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  if ((this->WorkingMemoryManager).DebugRunnerID == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("DebugRunnerID != InvalidRunnerId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x7c4,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  (this->WorkingMemoryManager).DebugRunnerThreadID = 0xffffffff;
  (this->WorkingMemoryManager).DebugRunnerID = 0;
  return bVar5;
}

// BuildColour @ 14ab680b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector4<float> * __thiscall
UE::Mutable::Private::FSystem::Private::BuildColour
          (Private *this,TVector4<float> *__return_storage_ptr__,
          TSharedPtr<UE::Mutable::Private::FExternalResourceProvider,1> *param_1,
          TSharedPtr<UE::Mutable::Private::FModel_const_,1> *param_2,FParameters *param_3,
          uint param_4)

{
  atomic<unsigned___int64> *paVar1;
  undefined8 *puVar2;
  atomic<unsigned___int64> aVar3;
  uint uVar4;
  FProgramCache *pFVar5;
  code *pcVar6;
  bool bVar7;
  DWORD DVar8;
  uint uVar9;
  TVector4<float> *pTVar10;
  Private *pPVar11;
  FOpDesc *pFVar12;
  FOpExecutionData *pFVar13;
  EOpType EVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  FCacheAddress local_res10;
  
  if (((this->WorkingMemoryManager).DebugRunnerThreadID != 0xffffffff) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("DebugRunnerThreadID == FThread::InvalidThreadId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x786,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TVector4<float> *)(*pcVar6)();
    return pTVar10;
  }
  if (((this->WorkingMemoryManager).DebugRunnerID != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("DebugRunnerID == InvalidRunnerId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x787,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TVector4<float> *)(*pcVar6)();
    return pTVar10;
  }
  DVar8 = GetCurrentThreadId();
  (this->WorkingMemoryManager).DebugRunnerThreadID = DVar8;
  LOCK();
  paVar1 = &(this->WorkingMemoryManager).DebugCurrentRunnerId;
  aVar3 = *paVar1;
  *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
  UNLOCK();
  (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
  (this->WorkingMemoryManager).DebugRunnerID = (longlong)aVar3 + 1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  if ((param_2->Object == (FModel *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TVector4<float> *)(*pcVar6)();
    return pTVar10;
  }
  pPVar11 = FModel::GetPrivate(param_2->Object);
  uVar4 = (pPVar11->Program).OpAddress.ArrayNum;
  if (param_4 < uVar4) {
    uVar9 = 0;
    if ((int)param_4 < (int)uVar4) {
      uVar9 = ~param_4 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TVector4<float> *)(*pcVar6)();
      return pTVar10;
    }
    uVar4 = *(uint *)((pPVar11->Program).OpAddress.AllocatorInstance.Data +
                     (longlong)(int)param_4 * 4);
    uVar9 = 0;
    if ((int)uVar4 < (pPVar11->Program).ByteCode.ArrayNum) {
      uVar9 = ~uVar4 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TVector4<float> *)(*pcVar6)();
      return pTVar10;
    }
    EVar14 = *(EOpType *)((pPVar11->Program).ByteCode.AllocatorInstance.Data + (int)uVar4);
    if ((LA_FROMMESH < EVar14) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("result<EOpType::COUNT",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ModelPrivate.h"
                           ,0x432,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TVector4<float> *)(*pcVar6)();
      return pTVar10;
    }
  }
  else {
    EVar14 = NONE;
  }
  pFVar12 = GetOpDesc(EVar14);
  if ((pFVar12->type == Color) &&
     (RunCode(this,param_1,param_2,param_3,param_4,0xffffffff,'\0',0),
     this->bUnrecoverableError == false)) {
    if (((this->WorkingMemoryManager).CurrentInstanceCache.Object == (FProgramCache *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TVector4<float> *)(*pcVar6)();
      return pTVar10;
    }
    pFVar5 = (this->WorkingMemoryManager).CurrentInstanceCache.Object;
    local_res10.ExecutionIndex = 0;
    local_res10.ExecutionOptions = '\0';
    local_res10.Type = Full;
    local_res10.At = param_4;
    uVar15 = ___xmm_3f800000000000000000000000000000;
    uVar16 = _UNK_150689648;
    if ((param_4 != 0) &&
       (pFVar13 = CodeContainer<UE::Mutable::Private::FProgramCache::FOpExecutionData>::get_ptr
                            (&pFVar5->OpExecutionData,&local_res10),
       uVar15 = ___xmm_3f800000000000000000000000000000, uVar16 = _UNK_150689648,
       pFVar13 != (FOpExecutionData *)0x0)) {
      if ((pFVar13->DataType != Color) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Data->DataType == EDataType::Color",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                             ,0x2d3,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar10 = (TVector4<float> *)(*pcVar6)();
        return pTVar10;
      }
      uVar4 = (pFVar13->field5_0x4).DataTypeIndex;
      uVar9 = 0;
      if ((int)uVar4 < (pFVar5->ColorResults).ArrayNum) {
        uVar9 = ~uVar4 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar10 = (TVector4<float> *)(*pcVar6)();
        return pTVar10;
      }
      puVar2 = (undefined8 *)
               ((pFVar5->ColorResults).AllocatorInstance._padding_ + (longlong)(int)uVar4 * 0x10);
      uVar15 = *puVar2;
      uVar16 = puVar2[1];
    }
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = uVar15;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar16;
  }
  if (((this->WorkingMemoryManager).CurrentInstanceCache.Object == (FProgramCache *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TVector4<float> *)(*pcVar6)();
    return pTVar10;
  }
  if (((this->WorkingMemoryManager).TempImages.ArrayNum != 0) &&
     (bVar7 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5008110615084922946>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x7be,"TempImages.Num() == 0"), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TVector4<float> *)(*pcVar6)();
    return pTVar10;
  }
  if (((this->WorkingMemoryManager).TempMeshes.ArrayNum != 0) &&
     (bVar7 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5008110615084922945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x7bf,"TempMeshes.Num() == 0"), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TVector4<float> *)(*pcVar6)();
    return pTVar10;
  }
  if (((this->WorkingMemoryManager).DebugRunnerThreadID == 0xffffffff) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("DebugRunnerThreadID != FThread::InvalidThreadId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x7c3,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TVector4<float> *)(*pcVar6)();
    return pTVar10;
  }
  if (((this->WorkingMemoryManager).DebugRunnerID == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("DebugRunnerID != InvalidRunnerId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x7c4,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TVector4<float> *)(*pcVar6)();
    return pTVar10;
  }
  (this->WorkingMemoryManager).DebugRunnerThreadID = 0xffffffff;
  (this->WorkingMemoryManager).DebugRunnerID = 0;
  return __return_storage_ptr__;
}

// BuildImage @ 14ab68530

TSharedPtr<UE::Mutable::Private::FImage_const_,1> * __thiscall
UE::Mutable::Private::FSystem::Private::BuildImage
          (Private *this,TSharedPtr<UE::Mutable::Private::FImage_const_,1> *__return_storage_ptr__,
          TSharedPtr<UE::Mutable::Private::FExternalResourceProvider,1> *param_1,
          TSharedPtr<UE::Mutable::Private::FModel_const_,1> *param_2,FParameters *param_3,
          uint param_4,int param_5,int param_6)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  DWORD DVar6;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> *pTVar7;
  Private *pPVar8;
  FOpDesc *pFVar9;
  uint uVar10;
  EOpType EVar11;
  FCacheAddress local_res8;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_38;
  
  if (((this->WorkingMemoryManager).DebugRunnerThreadID != 0xffffffff) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DebugRunnerThreadID == FThread::InvalidThreadId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x786,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<UE::Mutable::Private::FImage_const_,1> *)(*pcVar4)();
    return pTVar7;
  }
  if (((this->WorkingMemoryManager).DebugRunnerID != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DebugRunnerID == InvalidRunnerId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x787,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<UE::Mutable::Private::FImage_const_,1> *)(*pcVar4)();
    return pTVar7;
  }
  DVar6 = GetCurrentThreadId();
  (this->WorkingMemoryManager).DebugRunnerThreadID = DVar6;
  LOCK();
  paVar1 = &(this->WorkingMemoryManager).DebugCurrentRunnerId;
  aVar2 = *paVar1;
  *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
  UNLOCK();
  (this->WorkingMemoryManager).DebugRunnerID = (longlong)aVar2 + 1;
  __return_storage_ptr__->Object = (FImage *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if ((param_2->Object == (FModel *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<UE::Mutable::Private::FImage_const_,1> *)(*pcVar4)();
    return pTVar7;
  }
  pPVar8 = FModel::GetPrivate(param_2->Object);
  uVar3 = (pPVar8->Program).OpAddress.ArrayNum;
  if (param_4 < uVar3) {
    uVar10 = 0;
    if ((int)param_4 < (int)uVar3) {
      uVar10 = ~param_4 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<UE::Mutable::Private::FImage_const_,1> *)(*pcVar4)();
      return pTVar7;
    }
    uVar3 = *(uint *)((pPVar8->Program).OpAddress.AllocatorInstance.Data +
                     (longlong)(int)param_4 * 4);
    uVar10 = 0;
    if ((int)uVar3 < (pPVar8->Program).ByteCode.ArrayNum) {
      uVar10 = ~uVar3 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<UE::Mutable::Private::FImage_const_,1> *)(*pcVar4)();
      return pTVar7;
    }
    EVar11 = *(EOpType *)((pPVar8->Program).ByteCode.AllocatorInstance.Data + (int)uVar3);
    if ((LA_FROMMESH < EVar11) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("result<EOpType::COUNT",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ModelPrivate.h"
                           ,0x432,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<UE::Mutable::Private::FImage_const_,1> *)(*pcVar4)();
      return pTVar7;
    }
  }
  else {
    EVar11 = NONE;
  }
  pFVar9 = GetOpDesc(EVar11);
  if (pFVar9->type == Image) {
    RunCode(this,param_1,param_2,param_3,param_4,0xffffffff,(uchar)param_5,param_6);
    if (this->bUnrecoverableError == false) {
      local_res8.At = param_4;
      local_res8.ExecutionIndex = 0;
      local_res8.ExecutionOptions = (uchar)param_5;
      local_res8.Type = Full;
      pTVar7 = FWorkingMemoryManager::LoadImage
                         (&this->WorkingMemoryManager,&local_38,&local_res8,true);
      if (__return_storage_ptr__ != pTVar7) {
        __return_storage_ptr__->Object = pTVar7->Object;
        pTVar7->Object = (FImage *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&__return_storage_ptr__->SharedReferenceCount,&pTVar7->SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
    }
  }
  if (((this->WorkingMemoryManager).CurrentInstanceCache.Object == (FProgramCache *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<UE::Mutable::Private::FImage_const_,1> *)(*pcVar4)();
    return pTVar7;
  }
  if (((this->WorkingMemoryManager).TempImages.ArrayNum != 0) &&
     (bVar5 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5008110615084922946>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x7be,"TempImages.Num() == 0"), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<UE::Mutable::Private::FImage_const_,1> *)(*pcVar4)();
    return pTVar7;
  }
  if (((this->WorkingMemoryManager).TempMeshes.ArrayNum != 0) &&
     (bVar5 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5008110615084922945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x7bf,"TempMeshes.Num() == 0"), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<UE::Mutable::Private::FImage_const_,1> *)(*pcVar4)();
    return pTVar7;
  }
  if (((this->WorkingMemoryManager).DebugRunnerThreadID == 0xffffffff) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DebugRunnerThreadID != FThread::InvalidThreadId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x7c3,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<UE::Mutable::Private::FImage_const_,1> *)(*pcVar4)();
    return pTVar7;
  }
  if (((this->WorkingMemoryManager).DebugRunnerID == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DebugRunnerID != InvalidRunnerId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x7c4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<UE::Mutable::Private::FImage_const_,1> *)(*pcVar4)();
    return pTVar7;
  }
  (this->WorkingMemoryManager).DebugRunnerID = 0;
  (this->WorkingMemoryManager).DebugRunnerThreadID = 0xffffffff;
  return __return_storage_ptr__;
}

// BuildInstance @ 14ab688e0

TSharedPtr<UE::Mutable::Private::FInstance_const_,1> * __thiscall
UE::Mutable::Private::FSystem::Private::BuildInstance
          (Private *this,
          TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *__return_storage_ptr__,
          TSharedPtr<UE::Mutable::Private::FExternalResourceProvider,1> *param_1,
          TSharedPtr<UE::Mutable::Private::FModel_const_,1> *param_2,FParameters *param_3,
          uint param_4)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  DWORD DVar6;
  TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *pTVar7;
  Private *pPVar8;
  FOpDesc *pFVar9;
  uint uVar10;
  EOpType EVar11;
  FCacheAddress FVar12;
  TSharedPtr<UE::Mutable::Private::FInstance_const_,1> local_38;
  
  if (((this->WorkingMemoryManager).DebugRunnerThreadID != 0xffffffff) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DebugRunnerThreadID == FThread::InvalidThreadId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x786,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *)(*pcVar4)();
    return pTVar7;
  }
  if (((this->WorkingMemoryManager).DebugRunnerID != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DebugRunnerID == InvalidRunnerId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x787,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *)(*pcVar4)();
    return pTVar7;
  }
  DVar6 = GetCurrentThreadId();
  (this->WorkingMemoryManager).DebugRunnerThreadID = DVar6;
  LOCK();
  paVar1 = &(this->WorkingMemoryManager).DebugCurrentRunnerId;
  aVar2 = *paVar1;
  *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
  UNLOCK();
  (this->WorkingMemoryManager).DebugRunnerID = (longlong)aVar2 + 1;
  __return_storage_ptr__->Object = (FInstance *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if ((param_2->Object == (FModel *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *)(*pcVar4)();
    return pTVar7;
  }
  pPVar8 = FModel::GetPrivate(param_2->Object);
  FVar12.ExecutionIndex = 0;
  FVar12.ExecutionOptions = '\0';
  FVar12.Type = Full;
  FVar12.At = param_4;
  uVar3 = (pPVar8->Program).OpAddress.ArrayNum;
  if (param_4 < uVar3) {
    uVar10 = 0;
    if ((int)param_4 < (int)uVar3) {
      uVar10 = ~param_4 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *)(*pcVar4)();
      return pTVar7;
    }
    uVar3 = *(uint *)((pPVar8->Program).OpAddress.AllocatorInstance.Data +
                     (longlong)(int)param_4 * 4);
    uVar10 = 0;
    if ((int)uVar3 < (pPVar8->Program).ByteCode.ArrayNum) {
      uVar10 = ~uVar3 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *)(*pcVar4)();
      return pTVar7;
    }
    EVar11 = *(EOpType *)((pPVar8->Program).ByteCode.AllocatorInstance.Data + (int)uVar3);
    if ((LA_FROMMESH < EVar11) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("result<EOpType::COUNT",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ModelPrivate.h"
                           ,0x432,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *)(*pcVar4)();
      return pTVar7;
    }
  }
  else {
    EVar11 = NONE;
  }
  pFVar9 = GetOpDesc(EVar11);
  if ((pFVar9->type == Instance) &&
     (RunCode(this,param_1,param_2,param_3,param_4,0xffffffff,'\0',0),
     this->bUnrecoverableError == false)) {
    if (((this->WorkingMemoryManager).CurrentInstanceCache.Object == (FProgramCache *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *)(*pcVar4)();
      return pTVar7;
    }
    pTVar7 = FProgramCache::GetInstance
                       ((this->WorkingMemoryManager).CurrentInstanceCache.Object,&local_38,FVar12);
    if (__return_storage_ptr__ != pTVar7) {
      __return_storage_ptr__->Object = pTVar7->Object;
      pTVar7->Object = (FInstance *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&pTVar7->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (((this->WorkingMemoryManager).CurrentInstanceCache.Object == (FProgramCache *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *)(*pcVar4)();
    return pTVar7;
  }
  if (((this->WorkingMemoryManager).TempImages.ArrayNum != 0) &&
     (bVar5 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5008110615084922946>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x7be,"TempImages.Num() == 0"), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *)(*pcVar4)();
    return pTVar7;
  }
  if (((this->WorkingMemoryManager).TempMeshes.ArrayNum != 0) &&
     (bVar5 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5008110615084922945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x7bf,"TempMeshes.Num() == 0"), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *)(*pcVar4)();
    return pTVar7;
  }
  if (((this->WorkingMemoryManager).DebugRunnerThreadID == 0xffffffff) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DebugRunnerThreadID != FThread::InvalidThreadId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x7c3,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *)(*pcVar4)();
    return pTVar7;
  }
  if (((this->WorkingMemoryManager).DebugRunnerID == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DebugRunnerID != InvalidRunnerId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x7c4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *)(*pcVar4)();
    return pTVar7;
  }
  (this->WorkingMemoryManager).DebugRunnerID = 0;
  (this->WorkingMemoryManager).DebugRunnerThreadID = 0xffffffff;
  return __return_storage_ptr__;
}

// BuildInt @ 14ab68c90

int __thiscall
UE::Mutable::Private::FSystem::Private::BuildInt
          (Private *this,TSharedPtr<UE::Mutable::Private::FExternalResourceProvider,1> *param_1,
          TSharedPtr<UE::Mutable::Private::FModel_const_,1> *param_2,FParameters *param_3,
          uint param_4)

{
  atomic<unsigned___int64> *paVar1;
  TSharedPtr<UE::Mutable::Private::FProgramCache,1> *pTVar2;
  atomic<unsigned___int64> aVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  DWORD DVar7;
  FOpExecutionData *pFVar8;
  FCacheAddress local_28 [2];
  
  if ((this->WorkingMemoryManager).DebugRunnerThreadID != 0xffffffff) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("DebugRunnerThreadID == FThread::InvalidThreadId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x786,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
  }
  if ((this->WorkingMemoryManager).DebugRunnerID != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("DebugRunnerID == InvalidRunnerId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x787,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
  }
  DVar7 = GetCurrentThreadId();
  (this->WorkingMemoryManager).DebugRunnerThreadID = DVar7;
  LOCK();
  paVar1 = &(this->WorkingMemoryManager).DebugCurrentRunnerId;
  aVar3 = *paVar1;
  *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
  UNLOCK();
  (this->WorkingMemoryManager).DebugRunnerID = (longlong)aVar3 + 1;
  RunCode(this,param_1,param_2,param_3,param_4,0xffffffff,'\0',0);
  pTVar2 = &(this->WorkingMemoryManager).CurrentInstanceCache;
  iVar6 = 0;
  if (this->bUnrecoverableError == false) {
    if (pTVar2->Object == (FProgramCache *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
    }
    local_28[0].ExecutionIndex = 0;
    local_28[0].ExecutionOptions = '\0';
    local_28[0].Type = Full;
    local_28[0].At = param_4;
    iVar6 = 0;
    if (param_4 != 0) {
      pFVar8 = CodeContainer<UE::Mutable::Private::FProgramCache::FOpExecutionData>::get_ptr
                         (&pTVar2->Object->OpExecutionData,local_28);
      if (pFVar8 == (FOpExecutionData *)0x0) {
        iVar6 = 0;
      }
      else {
        if (pFVar8->DataType != Int) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Data->DataType == EDataType::Int",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                             ,0x2c9,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            iVar6 = (*pcVar4)();
            return iVar6;
          }
        }
        iVar6 = (pFVar8->field5_0x4).DataTypeIndex;
      }
    }
  }
  if (pTVar2->Object == (FProgramCache *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
  }
  if ((this->WorkingMemoryManager).TempImages.ArrayNum != 0) {
    bVar5 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5008110615084922946>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x7be,"TempImages.Num() == 0");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
  }
  if ((this->WorkingMemoryManager).TempMeshes.ArrayNum != 0) {
    bVar5 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5008110615084922945>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x7bf,"TempMeshes.Num() == 0");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
  }
  if ((this->WorkingMemoryManager).DebugRunnerThreadID == 0xffffffff) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("DebugRunnerThreadID != FThread::InvalidThreadId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x7c3,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
  }
  if ((this->WorkingMemoryManager).DebugRunnerID == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("DebugRunnerID != InvalidRunnerId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x7c4,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
  }
  (this->WorkingMemoryManager).DebugRunnerThreadID = 0xffffffff;
  (this->WorkingMemoryManager).DebugRunnerID = 0;
  return iVar6;
}

// BuildLayout @ 14ab68f40

TSharedPtr<UE::Mutable::Private::FLayout_const_,1> * __thiscall
UE::Mutable::Private::FSystem::Private::BuildLayout
          (Private *this,TSharedPtr<UE::Mutable::Private::FLayout_const_,1> *__return_storage_ptr__,
          TSharedPtr<UE::Mutable::Private::FExternalResourceProvider,1> *param_1,
          TSharedPtr<UE::Mutable::Private::FModel_const_,1> *param_2,FParameters *param_3,
          uint param_4)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  DWORD DVar7;
  uint uVar8;
  TSharedPtr<UE::Mutable::Private::FLayout_const_,1> *pTVar9;
  Private *pPVar10;
  FOpDesc *pFVar11;
  FProgramCache *pFVar12;
  FOpExecutionData *pFVar13;
  EOpType EVar14;
  FCacheAddress local_res10;
  TSharedPtr<UE::Mutable::Private::FLayout_const_,1> local_48;
  
  if (((this->WorkingMemoryManager).DebugRunnerThreadID != 0xffffffff) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("DebugRunnerThreadID == FThread::InvalidThreadId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x786,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TSharedPtr<UE::Mutable::Private::FLayout_const_,1> *)(*pcVar5)();
    return pTVar9;
  }
  if (((this->WorkingMemoryManager).DebugRunnerID != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("DebugRunnerID == InvalidRunnerId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x787,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TSharedPtr<UE::Mutable::Private::FLayout_const_,1> *)(*pcVar5)();
    return pTVar9;
  }
  DVar7 = GetCurrentThreadId();
  (this->WorkingMemoryManager).DebugRunnerThreadID = DVar7;
  LOCK();
  paVar1 = &(this->WorkingMemoryManager).DebugCurrentRunnerId;
  aVar2 = *paVar1;
  *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
  UNLOCK();
  (this->WorkingMemoryManager).DebugRunnerID = (longlong)aVar2 + 1;
  __return_storage_ptr__->Object = (FLayout *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if ((param_2->Object == (FModel *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TSharedPtr<UE::Mutable::Private::FLayout_const_,1> *)(*pcVar5)();
    return pTVar9;
  }
  pPVar10 = FModel::GetPrivate(param_2->Object);
  if (((pPVar10->Program).States.ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TSharedPtr<UE::Mutable::Private::FLayout_const_,1> *)(*pcVar5)();
    return pTVar9;
  }
  if (*(int *)((pPVar10->Program).States.AllocatorInstance.Data + 0x10) != 0) {
    if ((param_2->Object == (FModel *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TSharedPtr<UE::Mutable::Private::FLayout_const_,1> *)(*pcVar5)();
      return pTVar9;
    }
    pPVar10 = FModel::GetPrivate(param_2->Object);
    uVar3 = (pPVar10->Program).OpAddress.ArrayNum;
    if (param_4 < uVar3) {
      uVar8 = 0;
      if ((int)param_4 < (int)uVar3) {
        uVar8 = ~param_4 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TSharedPtr<UE::Mutable::Private::FLayout_const_,1> *)(*pcVar5)();
        return pTVar9;
      }
      uVar3 = *(uint *)((pPVar10->Program).OpAddress.AllocatorInstance.Data +
                       (longlong)(int)param_4 * 4);
      uVar8 = 0;
      if ((int)uVar3 < (pPVar10->Program).ByteCode.ArrayNum) {
        uVar8 = ~uVar3 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TSharedPtr<UE::Mutable::Private::FLayout_const_,1> *)(*pcVar5)();
        return pTVar9;
      }
      EVar14 = *(EOpType *)((pPVar10->Program).ByteCode.AllocatorInstance.Data + (int)uVar3);
      if ((LA_FROMMESH < EVar14) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("result<EOpType::COUNT",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ModelPrivate.h"
                             ,0x432,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TSharedPtr<UE::Mutable::Private::FLayout_const_,1> *)(*pcVar5)();
        return pTVar9;
      }
    }
    else {
      EVar14 = NONE;
    }
    pFVar11 = GetOpDesc(EVar14);
    if (pFVar11->type == Layout) {
      RunCode(this,param_1,param_2,param_3,param_4,0xffffffff,'\0',0);
      if (this->bUnrecoverableError == false) {
        pFVar12 = TSharedPtr<UE::Mutable::Private::FProgramCache,1>::operator->
                            (&(this->WorkingMemoryManager).CurrentInstanceCache);
        local_res10.ExecutionIndex = 0;
        local_res10.ExecutionOptions = '\0';
        local_res10.Type = Full;
        local_res10.At = param_4;
        if ((param_4 == 0) ||
           (pFVar13 = CodeContainer<UE::Mutable::Private::FProgramCache::FOpExecutionData>::get_ptr
                                (&pFVar12->OpExecutionData,&local_res10),
           pFVar13 == (FOpExecutionData *)0x0)) {
          local_48.Object = (FLayout *)0x0;
          local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          if ((pFVar13->DataType != Layout) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Data->DataType == EDataType::Layout",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                                 ,0x35e,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar9 = (TSharedPtr<UE::Mutable::Private::FLayout_const_,1> *)(*pcVar5)();
            return pTVar9;
          }
          uVar3 = (pFVar13->field5_0x4).DataTypeIndex;
          uVar8 = 0;
          if ((int)uVar3 < (pFVar12->LayoutResults).ArrayNum) {
            uVar8 = ~uVar3 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar9 = (TSharedPtr<UE::Mutable::Private::FLayout_const_,1> *)(*pcVar5)();
            return pTVar9;
          }
          lVar4 = (pFVar12->LayoutResults).AllocatorInstance._padding_;
          local_48.Object = *(FLayout **)(lVar4 + (longlong)(int)uVar3 * 0x10);
          local_48.SharedReferenceCount.ReferenceController =
               *(TReferenceControllerBase<1> **)(lVar4 + 8 + (longlong)(int)uVar3 * 0x10);
          if (local_48.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
        }
        if (__return_storage_ptr__ != &local_48) {
          __return_storage_ptr__->Object = local_48.Object;
          local_48.Object = (FLayout *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&__return_storage_ptr__->SharedReferenceCount,&local_48.SharedReferenceCount);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_48.SharedReferenceCount.ReferenceController);
      }
    }
  }
  if (((this->WorkingMemoryManager).CurrentInstanceCache.Object == (FProgramCache *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TSharedPtr<UE::Mutable::Private::FLayout_const_,1> *)(*pcVar5)();
    return pTVar9;
  }
  if (((this->WorkingMemoryManager).TempImages.ArrayNum != 0) &&
     (bVar6 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5008110615084922946>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x7be,"TempImages.Num() == 0"), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TSharedPtr<UE::Mutable::Private::FLayout_const_,1> *)(*pcVar5)();
    return pTVar9;
  }
  if (((this->WorkingMemoryManager).TempMeshes.ArrayNum != 0) &&
     (bVar6 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5008110615084922945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x7bf,"TempMeshes.Num() == 0"), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TSharedPtr<UE::Mutable::Private::FLayout_const_,1> *)(*pcVar5)();
    return pTVar9;
  }
  if (((this->WorkingMemoryManager).DebugRunnerThreadID == 0xffffffff) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("DebugRunnerThreadID != FThread::InvalidThreadId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x7c3,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TSharedPtr<UE::Mutable::Private::FLayout_const_,1> *)(*pcVar5)();
    return pTVar9;
  }
  if (((this->WorkingMemoryManager).DebugRunnerID == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("DebugRunnerID != InvalidRunnerId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x7c4,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TSharedPtr<UE::Mutable::Private::FLayout_const_,1> *)(*pcVar5)();
    return pTVar9;
  }
  (this->WorkingMemoryManager).DebugRunnerThreadID = 0xffffffff;
  (this->WorkingMemoryManager).DebugRunnerID = 0;
  return __return_storage_ptr__;
}

// BuildMesh @ 14ab69450

/* WARNING: Enum "EMeshContentFlags": Some values do not have unique names */

TSharedPtr<UE::Mutable::Private::FMesh_const_,1> * __thiscall
UE::Mutable::Private::FSystem::Private::BuildMesh
          (Private *this,TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *__return_storage_ptr__,
          TSharedPtr<UE::Mutable::Private::FExternalResourceProvider,1> *param_1,
          TSharedPtr<UE::Mutable::Private::FModel_const_,1> *param_2,FParameters *param_3,
          uint param_4,EMeshContentFlags param_5)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  DWORD DVar6;
  TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *pTVar7;
  Private *pPVar8;
  FOpDesc *pFVar9;
  uint uVar10;
  EOpType EVar11;
  FCacheAddress local_res8;
  TSharedPtr<UE::Mutable::Private::FMesh_const_,1> local_38;
  
  if (((this->WorkingMemoryManager).DebugRunnerThreadID != 0xffffffff) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DebugRunnerThreadID == FThread::InvalidThreadId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x786,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *)(*pcVar4)();
    return pTVar7;
  }
  if (((this->WorkingMemoryManager).DebugRunnerID != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DebugRunnerID == InvalidRunnerId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x787,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *)(*pcVar4)();
    return pTVar7;
  }
  DVar6 = GetCurrentThreadId();
  (this->WorkingMemoryManager).DebugRunnerThreadID = DVar6;
  LOCK();
  paVar1 = &(this->WorkingMemoryManager).DebugCurrentRunnerId;
  aVar2 = *paVar1;
  *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
  UNLOCK();
  (this->WorkingMemoryManager).DebugRunnerID = (longlong)aVar2 + 1;
  __return_storage_ptr__->Object = (FMesh *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if ((param_2->Object == (FModel *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *)(*pcVar4)();
    return pTVar7;
  }
  pPVar8 = FModel::GetPrivate(param_2->Object);
  uVar3 = (pPVar8->Program).OpAddress.ArrayNum;
  if (param_4 < uVar3) {
    uVar10 = 0;
    if ((int)param_4 < (int)uVar3) {
      uVar10 = ~param_4 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *)(*pcVar4)();
      return pTVar7;
    }
    uVar3 = *(uint *)((pPVar8->Program).OpAddress.AllocatorInstance.Data +
                     (longlong)(int)param_4 * 4);
    uVar10 = 0;
    if ((int)uVar3 < (pPVar8->Program).ByteCode.ArrayNum) {
      uVar10 = ~uVar3 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *)(*pcVar4)();
      return pTVar7;
    }
    EVar11 = *(EOpType *)((pPVar8->Program).ByteCode.AllocatorInstance.Data + (int)uVar3);
    if ((LA_FROMMESH < EVar11) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("result<EOpType::COUNT",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ModelPrivate.h"
                           ,0x432,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *)(*pcVar4)();
      return pTVar7;
    }
  }
  else {
    EVar11 = NONE;
  }
  pFVar9 = GetOpDesc(EVar11);
  if ((pFVar9->type == Mesh) &&
     (RunCode(this,param_1,param_2,param_3,param_4,0xffffffff,param_5,0),
     this->bUnrecoverableError == false)) {
    local_res8.At = param_4;
    local_res8.ExecutionIndex = 0;
    local_res8.ExecutionOptions = param_5;
    local_res8.Type = Full;
    pTVar7 = FWorkingMemoryManager::LoadMesh(&this->WorkingMemoryManager,&local_38,&local_res8,true)
    ;
    if (__return_storage_ptr__ != pTVar7) {
      __return_storage_ptr__->Object = pTVar7->Object;
      pTVar7->Object = (FMesh *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&pTVar7->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (((this->WorkingMemoryManager).CurrentInstanceCache.Object == (FProgramCache *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *)(*pcVar4)();
    return pTVar7;
  }
  if (((this->WorkingMemoryManager).TempImages.ArrayNum != 0) &&
     (bVar5 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5008110615084922946>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x7be,"TempImages.Num() == 0"), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *)(*pcVar4)();
    return pTVar7;
  }
  if (((this->WorkingMemoryManager).TempMeshes.ArrayNum != 0) &&
     (bVar5 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5008110615084922945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x7bf,"TempMeshes.Num() == 0"), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *)(*pcVar4)();
    return pTVar7;
  }
  if (((this->WorkingMemoryManager).DebugRunnerThreadID == 0xffffffff) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DebugRunnerThreadID != FThread::InvalidThreadId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x7c3,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *)(*pcVar4)();
    return pTVar7;
  }
  if (((this->WorkingMemoryManager).DebugRunnerID == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DebugRunnerID != InvalidRunnerId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x7c4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *)(*pcVar4)();
    return pTVar7;
  }
  (this->WorkingMemoryManager).DebugRunnerID = 0;
  (this->WorkingMemoryManager).DebugRunnerThreadID = 0xffffffff;
  return __return_storage_ptr__;
}

// BuildProjector @ 14ab69800

FProjector * __thiscall
UE::Mutable::Private::FSystem::Private::BuildProjector
          (Private *this,FProjector *__return_storage_ptr__,
          TSharedPtr<UE::Mutable::Private::FExternalResourceProvider,1> *param_1,
          TSharedPtr<UE::Mutable::Private::FModel_const_,1> *param_2,FParameters *param_3,
          uint param_4)

{
  atomic<unsigned___int64> *paVar1;
  TSharedPtr<UE::Mutable::Private::FProgramCache,1> *pTVar2;
  EProjectorType *pEVar3;
  float *pfVar4;
  atomic<unsigned___int64> aVar5;
  uint uVar6;
  FProgramCache *pFVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  DWORD DVar11;
  uint uVar12;
  FProjector *pFVar13;
  FOpExecutionData *pFVar14;
  longlong lVar15;
  EProjectorType EVar16;
  undefined8 uVar17;
  FCacheAddress local_res10;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  if ((this->WorkingMemoryManager).DebugRunnerThreadID != 0xffffffff) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("DebugRunnerThreadID == FThread::InvalidThreadId",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                        ,0x786,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      pFVar13 = (FProjector *)(*pcVar9)();
      return pFVar13;
    }
  }
  if ((this->WorkingMemoryManager).DebugRunnerID != 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("DebugRunnerID == InvalidRunnerId",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                        ,0x787,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      pFVar13 = (FProjector *)(*pcVar9)();
      return pFVar13;
    }
  }
  DVar11 = GetCurrentThreadId();
  (this->WorkingMemoryManager).DebugRunnerThreadID = DVar11;
  LOCK();
  paVar1 = &(this->WorkingMemoryManager).DebugCurrentRunnerId;
  aVar5 = *paVar1;
  *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
  UNLOCK();
  (this->WorkingMemoryManager).DebugRunnerID = (longlong)aVar5 + 1;
  RunCode(this,param_1,param_2,param_3,param_4,0xffffffff,'\0',0);
  *(undefined8 *)__return_storage_ptr__ = 0;
  pTVar2 = &(this->WorkingMemoryManager).CurrentInstanceCache;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->position).field0_0x0 + 4) = 0;
  *(undefined8 *)&(__return_storage_ptr__->direction).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->direction).field0_0x0 + 8) = 0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->up).field0_0x0 + 4) = 0;
  *(undefined8 *)&(__return_storage_ptr__->scale).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->scale).field0_0x0 + 8) = 0;
  if (this->bUnrecoverableError != false) goto LAB_14ab69a6a;
  if (pTVar2->Object == (FProgramCache *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      pFVar13 = (FProjector *)(*pcVar9)();
      return pFVar13;
    }
  }
  pFVar7 = pTVar2->Object;
  local_res10.ExecutionIndex = 0;
  local_res10.ExecutionOptions = '\0';
  local_res10.Type = Full;
  local_res10.At = param_4;
  if (param_4 == 0) {
LAB_14ab69a26:
    fStack_3c = 0.0;
    uVar17 = 0;
    EVar16 = Planar;
    fStack_64 = 0.0;
    fStack_60 = 0.0;
    fStack_5c = 0.0;
    local_48 = 0.0;
    fStack_44 = 0.0;
    fStack_40 = 0.0;
    local_58 = 0.0;
    fStack_54 = 0.0;
    fStack_50 = 0.0;
    fStack_4c = 0.0;
  }
  else {
    pFVar14 = CodeContainer<UE::Mutable::Private::FProgramCache::FOpExecutionData>::get_ptr
                        (&pFVar7->OpExecutionData,&local_res10);
    if (pFVar14 == (FOpExecutionData *)0x0) goto LAB_14ab69a26;
    if (pFVar14->DataType != Projector) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Data->DataType == EDataType::Projector",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                          ,0x2f1,L"");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        pFVar13 = (FProjector *)(*pcVar9)();
        return pFVar13;
      }
    }
    uVar6 = (pFVar14->field5_0x4).DataTypeIndex;
    uVar12 = 0;
    if ((int)uVar6 < (pFVar7->ProjectorResults).ArrayNum) {
      uVar12 = ~uVar6 >> 0x1f;
    }
    if (uVar12 == 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        pFVar13 = (FProjector *)(*pcVar9)();
        return pFVar13;
      }
    }
    lVar8 = (pFVar7->ProjectorResults).AllocatorInstance._padding_;
    lVar15 = (longlong)(int)uVar6 * 0x38;
    pEVar3 = (EProjectorType *)(lVar15 + lVar8);
    EVar16 = *pEVar3;
    fStack_64 = (float)pEVar3[1];
    fStack_60 = (float)pEVar3[2];
    fStack_5c = (float)pEVar3[3];
    pfVar4 = (float *)(lVar15 + 0x10 + lVar8);
    local_58 = *pfVar4;
    fStack_54 = pfVar4[1];
    fStack_50 = pfVar4[2];
    fStack_4c = pfVar4[3];
    pfVar4 = (float *)(lVar15 + 0x20 + lVar8);
    local_48 = *pfVar4;
    fStack_44 = pfVar4[1];
    fStack_40 = pfVar4[2];
    fStack_3c = pfVar4[3];
    uVar17 = *(undefined8 *)(lVar15 + 0x30 + lVar8);
  }
  __return_storage_ptr__->type = EVar16;
  (__return_storage_ptr__->position).field0_0x0._s_0.X = fStack_64;
  (__return_storage_ptr__->position).field0_0x0._s_0.Y = fStack_60;
  (__return_storage_ptr__->position).field0_0x0._s_0.Z = fStack_5c;
  (__return_storage_ptr__->direction).field0_0x0._s_0.X = local_58;
  (__return_storage_ptr__->direction).field0_0x0._s_0.Y = fStack_54;
  (__return_storage_ptr__->direction).field0_0x0._s_0.Z = fStack_50;
  (__return_storage_ptr__->up).field0_0x0._s_0.X = fStack_4c;
  (__return_storage_ptr__->up).field0_0x0._s_0.Y = local_48;
  (__return_storage_ptr__->up).field0_0x0._s_0.Z = fStack_44;
  (__return_storage_ptr__->scale).field0_0x0._s_0.X = fStack_40;
  (__return_storage_ptr__->scale).field0_0x0._s_0.Y = fStack_3c;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->scale).field0_0x0 + 8) = uVar17;
LAB_14ab69a6a:
  if (pTVar2->Object == (FProgramCache *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      pFVar13 = (FProjector *)(*pcVar9)();
      return pFVar13;
    }
  }
  if ((this->WorkingMemoryManager).TempImages.ArrayNum != 0) {
    bVar10 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_5008110615084922946>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                        ,0x7be,"TempImages.Num() == 0");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      pFVar13 = (FProjector *)(*pcVar9)();
      return pFVar13;
    }
  }
  if ((this->WorkingMemoryManager).TempMeshes.ArrayNum != 0) {
    bVar10 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_5008110615084922945>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                        ,0x7bf,"TempMeshes.Num() == 0");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      pFVar13 = (FProjector *)(*pcVar9)();
      return pFVar13;
    }
  }
  if ((this->WorkingMemoryManager).DebugRunnerThreadID == 0xffffffff) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("DebugRunnerThreadID != FThread::InvalidThreadId",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                        ,0x7c3,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      pFVar13 = (FProjector *)(*pcVar9)();
      return pFVar13;
    }
  }
  if ((this->WorkingMemoryManager).DebugRunnerID == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("DebugRunnerID != InvalidRunnerId",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                        ,0x7c4,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      pFVar13 = (FProjector *)(*pcVar9)();
      return pFVar13;
    }
  }
  (this->WorkingMemoryManager).DebugRunnerThreadID = 0xffffffff;
  (this->WorkingMemoryManager).DebugRunnerID = 0;
  return __return_storage_ptr__;
}

// BuildScalar @ 14ab69b90

float __thiscall
UE::Mutable::Private::FSystem::Private::BuildScalar
          (Private *this,TSharedPtr<UE::Mutable::Private::FExternalResourceProvider,1> *param_1,
          TSharedPtr<UE::Mutable::Private::FModel_const_,1> *param_2,FParameters *param_3,
          uint param_4)

{
  atomic<unsigned___int64> *paVar1;
  TSharedPtr<UE::Mutable::Private::FProgramCache,1> *pTVar2;
  atomic<unsigned___int64> aVar3;
  code *pcVar4;
  bool bVar5;
  DWORD DVar6;
  FOpExecutionData *pFVar7;
  float fVar8;
  FCacheAddress local_38 [4];
  
  if ((this->WorkingMemoryManager).DebugRunnerThreadID != 0xffffffff) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("DebugRunnerThreadID == FThread::InvalidThreadId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x786,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      fVar8 = (float)(*pcVar4)();
      return fVar8;
    }
  }
  if ((this->WorkingMemoryManager).DebugRunnerID != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("DebugRunnerID == InvalidRunnerId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x787,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      fVar8 = (float)(*pcVar4)();
      return fVar8;
    }
  }
  DVar6 = GetCurrentThreadId();
  (this->WorkingMemoryManager).DebugRunnerThreadID = DVar6;
  LOCK();
  paVar1 = &(this->WorkingMemoryManager).DebugCurrentRunnerId;
  aVar3 = *paVar1;
  *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
  UNLOCK();
  (this->WorkingMemoryManager).DebugRunnerID = (longlong)aVar3 + 1;
  RunCode(this,param_1,param_2,param_3,param_4,0xffffffff,'\0',0);
  pTVar2 = &(this->WorkingMemoryManager).CurrentInstanceCache;
  fVar8 = 0.0;
  if (this->bUnrecoverableError == false) {
    if (pTVar2->Object == (FProgramCache *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        fVar8 = (float)(*pcVar4)();
        return fVar8;
      }
    }
    local_38[0].ExecutionIndex = 0;
    local_38[0].ExecutionOptions = '\0';
    local_38[0].Type = Full;
    local_38[0].At = param_4;
    if (param_4 != 0) {
      pFVar7 = CodeContainer<UE::Mutable::Private::FProgramCache::FOpExecutionData>::get_ptr
                         (&pTVar2->Object->OpExecutionData,local_38);
      if (pFVar7 != (FOpExecutionData *)0x0) {
        if (pFVar7->DataType != Scalar) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Data->DataType == EDataType::Scalar",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                             ,0x2bf,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            fVar8 = (float)(*pcVar4)();
            return fVar8;
          }
        }
        fVar8 = (float)(pFVar7->field5_0x4).DataTypeIndex;
      }
    }
  }
  if (pTVar2->Object == (FProgramCache *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      fVar8 = (float)(*pcVar4)();
      return fVar8;
    }
  }
  if ((this->WorkingMemoryManager).TempImages.ArrayNum != 0) {
    bVar5 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5008110615084922946>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x7be,"TempImages.Num() == 0");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      fVar8 = (float)(*pcVar4)();
      return fVar8;
    }
  }
  if ((this->WorkingMemoryManager).TempMeshes.ArrayNum != 0) {
    bVar5 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5008110615084922945>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x7bf,"TempMeshes.Num() == 0");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      fVar8 = (float)(*pcVar4)();
      return fVar8;
    }
  }
  if ((this->WorkingMemoryManager).DebugRunnerThreadID == 0xffffffff) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("DebugRunnerThreadID != FThread::InvalidThreadId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x7c3,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      fVar8 = (float)(*pcVar4)();
      return fVar8;
    }
  }
  if ((this->WorkingMemoryManager).DebugRunnerID == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("DebugRunnerID != InvalidRunnerId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                       ,0x7c4,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      fVar8 = (float)(*pcVar4)();
      return fVar8;
    }
  }
  (this->WorkingMemoryManager).DebugRunnerThreadID = 0xffffffff;
  (this->WorkingMemoryManager).DebugRunnerID = 0;
  return fVar8;
}

// BuildString @ 14ab69e50

TSharedPtr<UE::Mutable::Private::String_const_,1> * __thiscall
UE::Mutable::Private::FSystem::Private::BuildString
          (Private *this,TSharedPtr<UE::Mutable::Private::String_const_,1> *__return_storage_ptr__,
          TSharedPtr<UE::Mutable::Private::FExternalResourceProvider,1> *param_1,
          TSharedPtr<UE::Mutable::Private::FModel_const_,1> *param_2,FParameters *param_3,
          uint param_4)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  DWORD DVar7;
  uint uVar8;
  TSharedPtr<UE::Mutable::Private::String_const_,1> *pTVar9;
  Private *pPVar10;
  FOpDesc *pFVar11;
  FProgramCache *pFVar12;
  FOpExecutionData *pFVar13;
  EOpType EVar14;
  FCacheAddress local_res10;
  TSharedPtr<UE::Mutable::Private::String_const_,1> local_48;
  
  if (((this->WorkingMemoryManager).DebugRunnerThreadID != 0xffffffff) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("DebugRunnerThreadID == FThread::InvalidThreadId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x786,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TSharedPtr<UE::Mutable::Private::String_const_,1> *)(*pcVar5)();
    return pTVar9;
  }
  if (((this->WorkingMemoryManager).DebugRunnerID != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("DebugRunnerID == InvalidRunnerId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x787,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TSharedPtr<UE::Mutable::Private::String_const_,1> *)(*pcVar5)();
    return pTVar9;
  }
  DVar7 = GetCurrentThreadId();
  (this->WorkingMemoryManager).DebugRunnerThreadID = DVar7;
  LOCK();
  paVar1 = &(this->WorkingMemoryManager).DebugCurrentRunnerId;
  aVar2 = *paVar1;
  *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
  UNLOCK();
  (this->WorkingMemoryManager).DebugRunnerID = (longlong)aVar2 + 1;
  __return_storage_ptr__->Object = (String *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if ((param_2->Object == (FModel *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TSharedPtr<UE::Mutable::Private::String_const_,1> *)(*pcVar5)();
    return pTVar9;
  }
  pPVar10 = FModel::GetPrivate(param_2->Object);
  if (((pPVar10->Program).States.ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TSharedPtr<UE::Mutable::Private::String_const_,1> *)(*pcVar5)();
    return pTVar9;
  }
  if (*(int *)((pPVar10->Program).States.AllocatorInstance.Data + 0x10) != 0) {
    if ((param_2->Object == (FModel *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TSharedPtr<UE::Mutable::Private::String_const_,1> *)(*pcVar5)();
      return pTVar9;
    }
    pPVar10 = FModel::GetPrivate(param_2->Object);
    uVar3 = (pPVar10->Program).OpAddress.ArrayNum;
    if (param_4 < uVar3) {
      uVar8 = 0;
      if ((int)param_4 < (int)uVar3) {
        uVar8 = ~param_4 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TSharedPtr<UE::Mutable::Private::String_const_,1> *)(*pcVar5)();
        return pTVar9;
      }
      uVar3 = *(uint *)((pPVar10->Program).OpAddress.AllocatorInstance.Data +
                       (longlong)(int)param_4 * 4);
      uVar8 = 0;
      if ((int)uVar3 < (pPVar10->Program).ByteCode.ArrayNum) {
        uVar8 = ~uVar3 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TSharedPtr<UE::Mutable::Private::String_const_,1> *)(*pcVar5)();
        return pTVar9;
      }
      EVar14 = *(EOpType *)((pPVar10->Program).ByteCode.AllocatorInstance.Data + (int)uVar3);
      if ((LA_FROMMESH < EVar14) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("result<EOpType::COUNT",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ModelPrivate.h"
                             ,0x432,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TSharedPtr<UE::Mutable::Private::String_const_,1> *)(*pcVar5)();
        return pTVar9;
      }
    }
    else {
      EVar14 = NONE;
    }
    pFVar11 = GetOpDesc(EVar14);
    if (pFVar11->type == String) {
      RunCode(this,param_1,param_2,param_3,param_4,0xffffffff,'\0',0);
      if (this->bUnrecoverableError == false) {
        pFVar12 = TSharedPtr<UE::Mutable::Private::FProgramCache,1>::operator->
                            (&(this->WorkingMemoryManager).CurrentInstanceCache);
        local_res10.ExecutionIndex = 0;
        local_res10.ExecutionOptions = '\0';
        local_res10.Type = Full;
        local_res10.At = param_4;
        if ((param_4 == 0) ||
           (pFVar13 = CodeContainer<UE::Mutable::Private::FProgramCache::FOpExecutionData>::get_ptr
                                (&pFVar12->OpExecutionData,&local_res10),
           pFVar13 == (FOpExecutionData *)0x0)) {
          local_48.Object = (String *)0x0;
          local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          if ((pFVar13->DataType != String) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Data->DataType == EDataType::String",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                                 ,0x369,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar9 = (TSharedPtr<UE::Mutable::Private::String_const_,1> *)(*pcVar5)();
            return pTVar9;
          }
          uVar3 = (pFVar13->field5_0x4).DataTypeIndex;
          uVar8 = 0;
          if ((int)uVar3 < (pFVar12->StringResults).ArrayNum) {
            uVar8 = ~uVar3 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar9 = (TSharedPtr<UE::Mutable::Private::String_const_,1> *)(*pcVar5)();
            return pTVar9;
          }
          lVar4 = (pFVar12->StringResults).AllocatorInstance._padding_;
          local_48.Object = *(String **)(lVar4 + (longlong)(int)uVar3 * 0x10);
          local_48.SharedReferenceCount.ReferenceController =
               *(TReferenceControllerBase<1> **)(lVar4 + 8 + (longlong)(int)uVar3 * 0x10);
          if (local_48.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
        }
        if (__return_storage_ptr__ != &local_48) {
          __return_storage_ptr__->Object = local_48.Object;
          local_48.Object = (String *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&__return_storage_ptr__->SharedReferenceCount,&local_48.SharedReferenceCount);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_48.SharedReferenceCount.ReferenceController);
      }
    }
  }
  if (((this->WorkingMemoryManager).CurrentInstanceCache.Object == (FProgramCache *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TSharedPtr<UE::Mutable::Private::String_const_,1> *)(*pcVar5)();
    return pTVar9;
  }
  if (((this->WorkingMemoryManager).TempImages.ArrayNum != 0) &&
     (bVar6 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5008110615084922946>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x7be,"TempImages.Num() == 0"), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TSharedPtr<UE::Mutable::Private::String_const_,1> *)(*pcVar5)();
    return pTVar9;
  }
  if (((this->WorkingMemoryManager).TempMeshes.ArrayNum != 0) &&
     (bVar6 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5008110615084922945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x7bf,"TempMeshes.Num() == 0"), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TSharedPtr<UE::Mutable::Private::String_const_,1> *)(*pcVar5)();
    return pTVar9;
  }
  if (((this->WorkingMemoryManager).DebugRunnerThreadID == 0xffffffff) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("DebugRunnerThreadID != FThread::InvalidThreadId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x7c3,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TSharedPtr<UE::Mutable::Private::String_const_,1> *)(*pcVar5)();
    return pTVar9;
  }
  if (((this->WorkingMemoryManager).DebugRunnerID == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("DebugRunnerID != InvalidRunnerId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                         ,0x7c4,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TSharedPtr<UE::Mutable::Private::String_const_,1> *)(*pcVar5)();
    return pTVar9;
  }
  (this->WorkingMemoryManager).DebugRunnerThreadID = 0xffffffff;
  (this->WorkingMemoryManager).DebugRunnerID = 0;
  return __return_storage_ptr__;
}

// CheckUpdatedParameters @ 14ab6a410

bool __thiscall
UE::Mutable::Private::FSystem::Private::CheckUpdatedParameters
          (Private *this,FLiveInstance *param_1,
          TSharedPtr<UE::Mutable::Private::FParameters_const_,1> *param_2,ulong64 *param_3)

{
  TSharedPtr<UE::Mutable::Private::FParameters_const_,1> *pTVar1;
  uint uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  int *piVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  Private *pPVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  bool bVar14;
  
  bVar14 = false;
  pTVar1 = &param_1->OldParameters;
  if (pTVar1->Object == (FParameters *)0x0) {
    *param_3 = 0xffffffffffffffff;
    return true;
  }
  iVar13 = 0;
  *param_3 = 0;
  if (((param_1->Model).Object == (FModel *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  pPVar10 = FModel::GetPrivate((param_1->Model).Object);
  uVar2 = param_1->State;
  uVar11 = 0;
  if ((int)uVar2 < (pPVar10->Program).States.ArrayNum) {
    uVar11 = ~uVar2 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  pFVar4 = (pPVar10->Program).States.AllocatorInstance.Data;
  if ((param_2->Object == (FParameters *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  if (((param_2->Object->m_pD->Values).ArrayNum != (pPVar10->Program).Parameters.ArrayNum) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Params->GetCount() == (int)Program.Parameters.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
                         ,0x3d7,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  if (pTVar1->Object != (FParameters *)0x0) {
    if ((param_2->Object == (FParameters *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    iVar3 = (param_2->Object->m_pD->Values).ArrayNum;
    if ((pTVar1->Object == (FParameters *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    if ((iVar3 != (pTVar1->Object->m_pD->Values).ArrayNum) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!LiveInstance->OldParameters || Params->GetCount() == LiveInstance->OldParameters->GetCount()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
                           ,0x3da,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
  }
  if (0 < (pPVar10->Program).Parameters.ArrayNum) {
    do {
      if (bVar14 != false) {
        return bVar14;
      }
      piVar12 = *(int **)(pFVar4 + (longlong)(int)uVar2 * 0x48 + 0x18);
      piVar5 = piVar12 + *(int *)(pFVar4 + (longlong)(int)uVar2 * 0x48 + 0x20);
      for (; piVar12 != piVar5; piVar12 = piVar12 + 1) {
        if (*piVar12 == iVar13) {
          bVar7 = true;
          goto LAB_14ab6a634;
        }
      }
      bVar7 = false;
LAB_14ab6a634:
      if ((param_2->Object == (FParameters *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      bVar9 = Private::FParameters::HasSameValue(param_2->Object,iVar13,pTVar1,iVar13);
      if (!bVar9) {
        if (bVar7) {
          piVar5 = *(int **)(pFVar4 + (longlong)(int)uVar2 * 0x48 + 0x18);
          for (piVar12 = piVar5;
              piVar12 != piVar5 + *(int *)(pFVar4 + (longlong)(int)uVar2 * 0x48 + 0x20);
              piVar12 = piVar12 + 1) {
            if (*piVar12 == iVar13) {
              *param_3 = *param_3 |
                         1L << ((longlong)(int)((longlong)piVar12 - (longlong)piVar5 >> 2) & 0x3fU);
              goto LAB_14ab6a6d9;
            }
          }
          *param_3 = *param_3 | 0x8000000000000000;
        }
        else {
          bVar14 = true;
          *param_3 = 0xffffffffffffffff;
        }
      }
LAB_14ab6a6d9:
      iVar13 = iVar13 + 1;
    } while (iVar13 < (pPVar10->Program).Parameters.ArrayNum);
  }
  return bVar14;
}

// ClearWorkingMemory @ 14ab6bd90

void __thiscall UE::Mutable::Private::FSystem::ClearWorkingMemory(FSystem *this)

{
  int *piVar1;
  int iVar2;
  Private *pPVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined1 *puVar5;
  code *pcVar6;
  atomic<int> aVar7;
  atomic<int> aVar8;
  uint uVar9;
  ulonglong uVar10;
  Private *pPVar11;
  FSharedReferencer<1> FVar12;
  uint uVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  TMap<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>_>
  *this_00;
  uint uVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  bool bVar19;
  undefined1 local_res10 [8];
  FLLMScope local_res18 [2];
  uint local_res20;
  FMemScope local_70;
  TSharedPtr<UE::Mutable::Private::FMesh_const_,1> local_68;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_58;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name165,L"MutableRuntime");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res18,LLMScope_Name165,false,None,Default,true);
  FMemScope::FMemScope(&local_70,&LLMScope_Name165,true);
  pPVar3 = this->m_pD;
  puVar18 = (undefined8 *)(pPVar3->WorkingMemoryManager).CachePerModel.AllocatorInstance._padding_;
  local_res20 = (pPVar3->WorkingMemoryManager).CachePerModel.ArrayNum;
  uVar10 = (ulonglong)(int)local_res20;
  puVar14 = puVar18 + uVar10 * 8;
LAB_14ab6be35:
  do {
    uVar15 = 0;
    if ((pPVar3->WorkingMemoryManager).CachePerModel.ArrayNum != (int)uVar10) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UE::Mutable::Private::FWorkingMemoryManager::FModelCacheEntry,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (puVar18 == puVar14) {
      pPVar3 = this->m_pD;
      DestructItems<TSharedPtr<UE::Mutable::Private::FImage,1>,int>
                ((TSharedPtr<UE::Mutable::Private::FImage,1> *)
                 (pPVar3->WorkingMemoryManager).PooledImages.AllocatorInstance._padding_,
                 (pPVar3->WorkingMemoryManager).PooledImages.ArrayNum);
      piVar1 = &(pPVar3->WorkingMemoryManager).PooledImages.ArrayMax;
      (pPVar3->WorkingMemoryManager).PooledImages.ArrayNum = 0;
      if (*piVar1 != 0) {
        Core::Private::
        ReallocTo<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>::ForAnyElementType>
                  (0x10,8,0,&(pPVar3->WorkingMemoryManager).PooledImages.AllocatorInstance,0,piVar1)
        ;
      }
      pPVar3 = this->m_pD;
      this_00 = &(pPVar3->WorkingMemoryManager).CacheResources;
      bVar19 = 1 < *(int *)&(pPVar3->WorkingMemoryManager).CacheResources.field_0x60;
      if (!bVar19) {
        TSet<TTuple<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
        ::UnhashElements((TSet<TTuple<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
                          *)this_00);
      }
      TSparseArray<TSparseSetElement<TTuple<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int>_>,TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int>_>,TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>_>
                         *)this_00,0,
                        *(int *)&(pPVar3->WorkingMemoryManager).CacheResources.field_0x10);
      iVar2 = *(int *)&(pPVar3->WorkingMemoryManager).CacheResources.field_0x14;
      *(undefined4 *)&(pPVar3->WorkingMemoryManager).CacheResources.field_0x10 = 0;
      if (iVar2 != 0) {
        Core::Private::
        ReallocTo<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>::ForAnyElementType>
                  (0x20,8,0,(ForAnyElementType *)this_00,0,
                   (int *)&(pPVar3->WorkingMemoryManager).CacheResources.field_0x14);
      }
      *(undefined4 *)&(pPVar3->WorkingMemoryManager).CacheResources.field_0x40 = 0xffffffff;
      *(undefined4 *)&(pPVar3->WorkingMemoryManager).CacheResources.field_0x44 = 0;
      iVar2 = *(int *)&(pPVar3->WorkingMemoryManager).CacheResources.field_0x3c;
      *(undefined4 *)&(pPVar3->WorkingMemoryManager).CacheResources.field_0x38 = 0;
      if ((iVar2 < 0) || (0x80 < iVar2)) {
        *(undefined4 *)&(pPVar3->WorkingMemoryManager).CacheResources.field_0x3c = 0x80;
        TBitArray<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
        ::Realloc((TBitArray<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
                   *)&(pPVar3->WorkingMemoryManager).CacheResources.field_0x18,0);
      }
      if (bVar19) {
        *(undefined4 *)&(pPVar3->WorkingMemoryManager).CacheResources.field_0x60 = 1;
        TSet<TTuple<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
        ::Rehash((TSet<TTuple<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
                  *)this_00);
      }
      if (((this->m_pD->WorkingMemoryManager).TempImages.ArrayNum != 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("m_pD->WorkingMemoryManager.TempImages.IsEmpty()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
                              ,0xb7,L""), bVar19)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (((this->m_pD->WorkingMemoryManager).TempMeshes.ArrayNum != 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("m_pD->WorkingMemoryManager.TempMeshes.IsEmpty()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
                              ,0xb8,L""), bVar19)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      Private::UpdateStats(this->m_pD);
      FMemScope::~FMemScope(&local_70);
      FLLMScope::~FLLMScope(local_res18);
      return;
    }
    pTVar4 = (TReferenceControllerBase<1> *)puVar18[1];
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      aVar7 = pTVar4->SharedReferenceCount;
      do {
        if (aVar7 == (atomic<int>)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          uVar10 = (ulonglong)local_res20;
          puVar18 = puVar18 + 8;
          goto LAB_14ab6be35;
        }
        LOCK();
        aVar8 = pTVar4->SharedReferenceCount;
        bVar19 = aVar7 == aVar8;
        if (bVar19) {
          pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
          aVar8 = aVar7;
        }
        UNLOCK();
        aVar7 = aVar8;
      } while (!bVar19);
      if (((FModel *)*puVar18 != (FModel *)0x0) &&
         (pPVar11 = FModel::GetPrivate((FModel *)*puVar18), 0 < (pPVar11->Program).Roms.ArrayNum)) {
        uVar16 = 1;
        uVar10 = uVar15;
        do {
          uVar13 = (uint)uVar15;
          if ((-1 < (int)uVar13) &&
             ((int)uVar13 < *(int *)&(pPVar11->Program).LoadedMemTrackedRoms.field_0x28)) {
            if ((*(int *)&(pPVar11->Program).LoadedMemTrackedRoms.field_0x28 <= (int)uVar13) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5c6,L""), bVar19)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            puVar5 = *(undefined1 **)&(pPVar11->Program).LoadedMemTrackedRoms.field_0x20;
            puVar17 = &(pPVar11->Program).LoadedMemTrackedRoms.field_0x10;
            if (puVar5 != (undefined1 *)0x0) {
              puVar17 = puVar5;
            }
            uVar9 = uVar13;
            if ((int)uVar13 < 0) {
              uVar9 = uVar13 + 0x1f;
            }
            if ((*(uint *)(puVar17 + (longlong)((int)uVar9 >> 5) * 4) & uVar16) != 0) {
              TSparseArray<unsigned_char,FDefaultSparseArrayAllocator>::RemoveAt
                        (&(pPVar11->Program).LoadedMemTrackedRoms,uVar13,1);
            }
          }
          uVar9 = 0;
          if ((int)uVar13 < (pPVar11->Program).Roms.ArrayNum) {
            uVar9 = ~uVar13 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar9 = *(uint *)((pPVar11->Program).Roms.AllocatorInstance.Data + uVar10) >> 0x1e & 1;
          if (uVar9 == 0) {
            local_58.Object = (FImage *)0x0;
            local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            TMap<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>,0>_>
            ::RemoveAndCopyValue(&(pPVar11->Program).ConstantImageLODsStreamed,uVar13,&local_58);
            FVar12.ReferenceController = local_58.SharedReferenceCount.ReferenceController;
LAB_14ab6bff1:
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar12.ReferenceController);
          }
          else {
            if (uVar9 == 1) {
              local_68.Object = (FMesh *)0x0;
              local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
              ;
              TMap<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,0>_>
              ::RemoveAndCopyValue(&(pPVar11->Program).ConstantMeshesStreamed,uVar13,&local_68);
              FVar12.ReferenceController = local_68.SharedReferenceCount.ReferenceController;
              goto LAB_14ab6bff1;
            }
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ModelPrivate.h"
                                ,0x1fb,L"");
            if (bVar19) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          uVar15 = (ulonglong)(uVar13 + 1);
          uVar16 = uVar16 << 1 | (uint)((int)uVar16 < 0);
          uVar10 = uVar10 + 4;
        } while ((int)(uVar13 + 1) < (pPVar11->Program).Roms.ArrayNum);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    uVar10 = (ulonglong)local_res20;
    puVar18 = puVar18 + 8;
  } while( true );
}

// EndBuild @ 14ab6cf30

void __thiscall UE::Mutable::Private::FSystem::Private::EndBuild(Private *this)

{
  TSharedPtr<UE::Mutable::Private::FProgramCache,1> *pTVar1;
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  pTVar1 = &(this->WorkingMemoryManager).CurrentInstanceCache;
  local_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TSharedPtr<UE::Mutable::Private::FProgramCache,1> *)&local_18) {
    pTVar1->Object = (FProgramCache *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->WorkingMemoryManager).CurrentInstanceCache.SharedReferenceCount,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// EndUpdate @ 14ab6cf80

void __thiscall UE::Mutable::Private::FSystem::EndUpdate(FSystem *this,uint param_1)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  Private *pPVar3;
  FProgramCache *pFVar4;
  code *pcVar5;
  bool bVar6;
  FLiveInstance *pFVar7;
  TSharedPtr<UE::Mutable::Private::FProgramCache,1> *pTVar8;
  bool bVar9;
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  undefined8 local_48;
  FSharedReferencer<1> FStack_40;
  undefined8 local_38;
  FSharedReferencer<1> FStack_30;
  FProgramCache *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name788,L"MutableRuntime");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name788,false,None,Default,true);
  FMemScope::FMemScope(local_res18,&LLMScope_Name788,true);
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId789,"Mutable_EndUpdate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
               ,0x315);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId789);
  }
  pFVar7 = Private::FindLiveInstance(this->m_pD,param_1);
  if (pFVar7 != (FLiveInstance *)0x0) {
    local_48 = 0;
    FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&pFVar7->Instance != (TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *)&local_48) {
      (pFVar7->Instance).Object = (FInstance *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pFVar7->Instance).SharedReferenceCount,&FStack_40);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_40.ReferenceController);
    if (((pFVar7->Cache).Object == (FProgramCache *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar2 = (pFVar7->Cache).SharedReferenceCount.ReferenceController;
    pPVar3 = this->m_pD;
    pFVar4 = (pFVar7->Cache).Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28 = (pPVar3->WorkingMemoryManager).CurrentInstanceCache.Object;
    pTStack_20 = (pPVar3->WorkingMemoryManager).CurrentInstanceCache.SharedReferenceCount.
                 ReferenceController;
    (pPVar3->WorkingMemoryManager).CurrentInstanceCache.Object = pFVar4;
    (pPVar3->WorkingMemoryManager).CurrentInstanceCache.SharedReferenceCount.ReferenceController =
         pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
    FWorkingMemoryManager::ClearCacheLayer0(&this->m_pD->WorkingMemoryManager);
    pPVar3 = this->m_pD;
    pTVar8 = &(pPVar3->WorkingMemoryManager).CurrentInstanceCache;
    local_38 = 0;
    FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar8 != (TSharedPtr<UE::Mutable::Private::FProgramCache,1> *)&local_38) {
      pTVar8->Object = (FProgramCache *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pPVar3->WorkingMemoryManager).CurrentInstanceCache.SharedReferenceCount,
                 &FStack_30);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_30.ReferenceController);
  }
  FWorkingMemoryManager::EnsureBudgetBelow(&this->m_pD->WorkingMemoryManager,0);
  pPVar3 = this->m_pD;
  if ((pPVar3->WorkingMemoryManager).BudgetBytes == 0) {
    DestructItems<TSharedPtr<UE::Mutable::Private::FImage,1>,int>
              ((TSharedPtr<UE::Mutable::Private::FImage,1> *)
               (pPVar3->WorkingMemoryManager).PooledImages.AllocatorInstance._padding_,
               (pPVar3->WorkingMemoryManager).PooledImages.ArrayNum);
    piVar1 = &(pPVar3->WorkingMemoryManager).PooledImages.ArrayMax;
    (pPVar3->WorkingMemoryManager).PooledImages.ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::
      ReallocTo<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>::ForAnyElementType>
                (0x10,8,0,&(pPVar3->WorkingMemoryManager).PooledImages.AllocatorInstance,0,piVar1);
    }
  }
  Private::UpdateStats(this->m_pD);
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// FindLiveInstance @ 14ab701e0

FLiveInstance * __thiscall
UE::Mutable::Private::FSystem::Private::FindLiveInstance(Private *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FLiveInstance *pFVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  
  iVar7 = (this->WorkingMemoryManager).LiveInstances.ArrayNum;
  uVar5 = 0;
  if (0 < iVar7) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < iVar7) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FLiveInstance *)(*pcVar1)();
        return pFVar4;
      }
      if (*(uint *)((this->WorkingMemoryManager).LiveInstances.AllocatorInstance._padding_ + lVar6)
          == param_1) {
        uVar3 = 0;
        if ((int)uVar5 < (this->WorkingMemoryManager).LiveInstances.ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FLiveInstance *)(*pcVar1)();
          return pFVar4;
        }
        return (FLiveInstance *)
               ((longlong)(int)uVar5 * 0x68 +
               (this->WorkingMemoryManager).LiveInstances.AllocatorInstance._padding_);
      }
      iVar7 = (this->WorkingMemoryManager).LiveInstances.ArrayNum;
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x68;
    } while ((int)uVar5 < iVar7);
  }
  return (FLiveInstance *)0x0;
}

// GetImage @ 14ab73870

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> __thiscall
UE::Mutable::Private::FSystem::GetImage
          (FSystem *this,uint param_1,FHandle *param_2,int param_3,int param_4)

{
  int *piVar1;
  atomic<unsigned_int> *paVar2;
  atomic<unsigned___int64> *paVar3;
  int iVar4;
  atomic<unsigned_int> aVar5;
  atomic<unsigned___int64> aVar6;
  uint uVar7;
  uint uVar8;
  TReferenceControllerBase<1> *pTVar9;
  Private *pPVar10;
  FProgramCache *pFVar11;
  undefined8 *puVar12;
  code *pcVar13;
  FSharedReferencer<1> FVar14;
  bool bVar15;
  DWORD DVar16;
  FLiveInstance *pFVar17;
  TTask<TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> TVar18;
  FGeneratedImageKey *pFVar19;
  Private *pPVar20;
  FOpDesc *pFVar21;
  FTaskBase *this_00;
  uint uVar22;
  TSharedPtr<UE::Mutable::Private::FProgramCache,1> *pTVar23;
  undefined4 in_register_00000014;
  FTaskBase *this_01;
  undefined4 in_register_0000008c;
  FHandle *this_02;
  EOpType EVar24;
  bool bVar25;
  FLLMScope local_res20 [2];
  int in_stack_00000030;
  FMemScope local_90;
  FTaskBase *local_88 [1];
  TSharedRef<UE::Mutable::Private::CodeRunner,1> local_80;
  TStaticArray<UE::Tasks::Private::FTaskBase_*,1,4294967295> local_70;
  undefined8 local_68;
  FSharedReferencer<1> FStack_60;
  FProgramCache *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  TSharedRef<UE::Mutable::Private::FImage,1> local_48;
  TSharedRef<UE::Mutable::Private::FImage,1> local_38;
  
  this_02 = (FHandle *)CONCAT44(in_register_0000008c,param_3);
  TVar18._4_4_ = in_register_00000014;
  TVar18._0_4_ = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name408,L"MutableRuntime");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res20,LLMScope_Name408,false,None,Default,true);
  FMemScope::FMemScope(&local_90,&LLMScope_Name408,true);
  bVar25 = -1 < CpuChannel->Enabled;
  if (bVar25) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId409,"Mutable_SystemGetImage",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
               ,0x199);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId409);
  }
  if ((((this_02->Id == 0xffffffff) ||
       ((this_02->WeakRegistry).Object ==
        (TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
         *)0x0)) ||
      (pTVar9 = (this_02->WeakRegistry).WeakReferenceCount.ReferenceController,
      pTVar9 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar9->SharedReferenceCount < 1)) {
    BlackImage(&local_38);
    Tasks::
    MakeCompletedTask<TSharedPtr<UE::Mutable::Private::FImage_const_,1>,TSharedRef<UE::Mutable::Private::FImage,1>_>
              ((TSharedRef<UE::Mutable::Private::FImage,1> *)TVar18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    if (bVar25) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FMemScope::~FMemScope(&local_90);
    FLLMScope::~FLLMScope(local_res20);
  }
  else {
    pFVar17 = Private::FindLiveInstance(this->m_pD,(uint)param_2);
    if ((pFVar17 == (FLiveInstance *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("LiveInstance",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
                            ,0x1a2,L""), bVar15)) {
      pcVar13 = (code *)swi(3);
      TVar18 = (TTask<TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>)(*pcVar13)();
      return TVar18;
    }
    pTVar9 = (pFVar17->Cache).SharedReferenceCount.ReferenceController;
    pPVar10 = this->m_pD;
    pFVar11 = (pFVar17->Cache).Object;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_58 = (pPVar10->WorkingMemoryManager).CurrentInstanceCache.Object;
    pTStack_50 = (pPVar10->WorkingMemoryManager).CurrentInstanceCache.SharedReferenceCount.
                 ReferenceController;
    (pPVar10->WorkingMemoryManager).CurrentInstanceCache.Object = pFVar11;
    (pPVar10->WorkingMemoryManager).CurrentInstanceCache.SharedReferenceCount.ReferenceController =
         pTVar9;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
    pFVar19 = TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
              ::FHandle::GetKey(this_02);
    pPVar10 = this->m_pD;
    uVar7 = pFVar19->Address;
    if (((pPVar10->WorkingMemoryManager).DebugRunnerThreadID != 0xffffffff) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("DebugRunnerThreadID == FThread::InvalidThreadId",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                            ,0x786,L""), bVar15)) {
      pcVar13 = (code *)swi(3);
      TVar18 = (TTask<TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>)(*pcVar13)();
      return TVar18;
    }
    if (((pPVar10->WorkingMemoryManager).DebugRunnerID != 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("DebugRunnerID == InvalidRunnerId",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                            ,0x787,L""), bVar15)) {
      pcVar13 = (code *)swi(3);
      TVar18 = (TTask<TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>)(*pcVar13)();
      return TVar18;
    }
    DVar16 = GetCurrentThreadId();
    (pPVar10->WorkingMemoryManager).DebugRunnerThreadID = DVar16;
    LOCK();
    paVar3 = &(pPVar10->WorkingMemoryManager).DebugCurrentRunnerId;
    aVar6 = *paVar3;
    *paVar3 = (atomic<unsigned___int64>)((longlong)*paVar3 + 1);
    UNLOCK();
    (pPVar10->WorkingMemoryManager).DebugRunnerID = (longlong)aVar6 + 1;
    if (((pFVar17->Model).Object == (FModel *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar13 = (code *)swi(3);
      TVar18 = (TTask<TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>)(*pcVar13)();
      return TVar18;
    }
    pPVar20 = FModel::GetPrivate((pFVar17->Model).Object);
    this_01 = (FTaskBase *)0x0;
    uVar8 = (pPVar20->Program).OpAddress.ArrayNum;
    if (uVar7 < uVar8) {
      uVar22 = 0;
      if ((int)uVar7 < (int)uVar8) {
        uVar22 = ~uVar7 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar13 = (code *)swi(3);
        TVar18 = (TTask<TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>)(*pcVar13)();
        return TVar18;
      }
      uVar8 = *(uint *)((pPVar20->Program).OpAddress.AllocatorInstance.Data +
                       (longlong)(int)uVar7 * 4);
      uVar22 = 0;
      if ((int)uVar8 < (pPVar20->Program).ByteCode.ArrayNum) {
        uVar22 = ~uVar8 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar13 = (code *)swi(3);
        TVar18 = (TTask<TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>)(*pcVar13)();
        return TVar18;
      }
      EVar24 = *(EOpType *)((pPVar20->Program).ByteCode.AllocatorInstance.Data + (int)uVar8);
      if ((LA_FROMMESH < EVar24) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("result<EOpType::COUNT",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ModelPrivate.h"
                              ,0x432,L""), bVar15)) {
        pcVar13 = (code *)swi(3);
        TVar18 = (TTask<TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>)(*pcVar13)();
        return TVar18;
      }
    }
    else {
      EVar24 = NONE;
    }
    pFVar21 = GetOpDesc(EVar24);
    pPVar10 = this->m_pD;
    if (pFVar21->type == Image) {
      CodeRunner::Create(&local_80,&pPVar10->Settings,pPVar10,MinimizeMemory,&pFVar17->Model,
                         (pFVar17->OldParameters).Object,uVar7,0xffffffff,(uchar)param_4,
                         in_stack_00000030,Full,&pFVar17->ExternalResourceProvider);
      CodeRunner::StartRun(local_80.Object,SUB81(local_88,0));
      FVar14.ReferenceController = local_80.SharedReferenceCount.ReferenceController;
      pPVar10 = this->m_pD;
      local_70.Elements[0] = (FTaskBase * [1])(FTaskBase * [1])local_88[0];
      if (local_80.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_80.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_80.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(undefined8 *)TVar18 = 0;
      this_00 = FMemory::Malloc(0x140,0x40);
      if (this_00 != (FTaskBase *)0x0) {
        Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
        this_00->_padding_ =
             (longlong)
             &
             ___7__TTaskWithResult_V__TSharedPtr___CBVFImage_Private_Mutable_UE___00___Private_Tasks_UE__6B_
        ;
        Tasks::Private::FTaskBase::Init(this_00,L"FSystem::GetImageResultTask",Inherit,Inline,None);
        this_00->_padding_ =
             (longlong)
             &Tasks::Private::
              TExecutableTaskBase<`UE::Mutable::Private::FSystem::GetImage'::`2'::<lambda_1>,TSharedPtr<UE::Mutable::Private::FImage_const_,1>,void>
              ::_vftable_;
        this_00[1]._padding_ = (longlong)local_80.Object;
        this_00[1]._padding_ = (longlong)pPVar10;
        this_00[1]._padding_ = (longlong)FVar14.ReferenceController;
        if (FVar14.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar14.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar14.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        *(int *)((longlong)&this_00[1]._padding_ + 4) = param_4;
        *(uint *)&this_00[1]._padding_ = uVar7;
        this_00->_padding_ =
             (longlong)
             &Tasks::Private::
              TExecutableTask<`UE::Mutable::Private::FSystem::GetImage'::`2'::<lambda_1>_>::
              _vftable_;
        this_01 = this_00;
      }
      Tasks::Private::FTaskBase::
      AddPrerequisites<TStaticArray<UE::Tasks::Private::FTaskBase_*,1,4294967295>,0>
                (this_01,&local_70,true);
      puVar12 = *(undefined8 **)TVar18;
      if (puVar12 != (undefined8 *)0x0) {
        *(undefined8 *)TVar18 = 0;
        LOCK();
        piVar1 = (int *)(puVar12 + 6);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)*puVar12)(puVar12,1);
        }
      }
      *(FTaskBase **)TVar18 = this_01;
      Tasks::Private::FTaskBase::TryLaunch(this_01,0x140);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar14.ReferenceController);
      local_48.SharedReferenceCount.ReferenceController =
           local_80.SharedReferenceCount.ReferenceController;
      if (local_88[0] != (FTaskBase *)0x0) {
        LOCK();
        paVar2 = &local_88[0]->RefCount;
        aVar5 = *paVar2;
        *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar5 == (atomic<unsigned_int>)0x1) {
          (**(code **)local_88[0]->_padding_)(local_88[0],1);
          local_48.SharedReferenceCount.ReferenceController =
               local_80.SharedReferenceCount.ReferenceController;
        }
      }
    }
    else {
      if (((pPVar10->WorkingMemoryManager).CurrentInstanceCache.Object == (FProgramCache *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar13 = (code *)swi(3);
        TVar18 = (TTask<TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>)(*pcVar13)();
        return TVar18;
      }
      if (((pPVar10->WorkingMemoryManager).TempImages.ArrayNum != 0) &&
         (bVar15 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_5008110615084922946>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                              ,0x7be,"TempImages.Num() == 0"), bVar15)) {
        pcVar13 = (code *)swi(3);
        TVar18 = (TTask<TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>)(*pcVar13)();
        return TVar18;
      }
      if (((pPVar10->WorkingMemoryManager).TempMeshes.ArrayNum != 0) &&
         (bVar15 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_5008110615084922945>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                              ,0x7bf,"TempMeshes.Num() == 0"), bVar15)) {
        pcVar13 = (code *)swi(3);
        TVar18 = (TTask<TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>)(*pcVar13)();
        return TVar18;
      }
      if (((pPVar10->WorkingMemoryManager).DebugRunnerThreadID == 0xffffffff) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("DebugRunnerThreadID != FThread::InvalidThreadId",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                              ,0x7c3,L""), bVar15)) {
        pcVar13 = (code *)swi(3);
        TVar18 = (TTask<TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>)(*pcVar13)();
        return TVar18;
      }
      if (((pPVar10->WorkingMemoryManager).DebugRunnerID == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("DebugRunnerID != InvalidRunnerId",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                              ,0x7c4,L""), bVar15)) {
        pcVar13 = (code *)swi(3);
        TVar18 = (TTask<TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>)(*pcVar13)();
        return TVar18;
      }
      (pPVar10->WorkingMemoryManager).DebugRunnerThreadID = 0xffffffff;
      (pPVar10->WorkingMemoryManager).DebugRunnerID = 0;
      pPVar10 = this->m_pD;
      pTVar23 = &(pPVar10->WorkingMemoryManager).CurrentInstanceCache;
      local_68 = 0;
      FStack_60.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar23 != (TSharedPtr<UE::Mutable::Private::FProgramCache,1> *)&local_68) {
        pTVar23->Object = (FProgramCache *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(pPVar10->WorkingMemoryManager).CurrentInstanceCache.SharedReferenceCount,
                   &FStack_60);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_60.ReferenceController);
      BlackImage(&local_48);
      Tasks::
      MakeCompletedTask<TSharedPtr<UE::Mutable::Private::FImage_const_,1>,TSharedRef<UE::Mutable::Private::FImage,1>_>
                ((TSharedRef<UE::Mutable::Private::FImage,1> *)TVar18);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    if (bVar25) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FMemScope::~FMemScope(&local_90);
    FLLMScope::~FLLMScope(local_res20);
  }
  return TVar18;
}

// GetImageDesc @ 14ab73f60

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<UE::Mutable::Private::FExtendedImageDesc> __thiscall
UE::Mutable::Private::FSystem::GetImageDesc(FSystem *this,uint param_1,FHandle *param_2)

{
  int *piVar1;
  atomic<unsigned_int> *paVar2;
  atomic<unsigned___int64> *paVar3;
  int iVar4;
  atomic<unsigned___int64> aVar5;
  atomic<unsigned_int> aVar6;
  atomic<unsigned_int> aVar7;
  TReferenceControllerBase<1> *pTVar8;
  Private *pPVar9;
  FProgramCache *pFVar10;
  undefined8 *puVar11;
  code *pcVar12;
  TConsoleVariableData<int> *pTVar13;
  FSharedReferencer<1> FVar14;
  bool bVar15;
  DWORD DVar16;
  uint uVar17;
  FLiveInstance *pFVar18;
  TTask<UE::Mutable::Private::FExtendedImageDesc> TVar19;
  FGeneratedImageKey *pFVar20;
  Private *pPVar21;
  FOpDesc *pFVar22;
  FTaskBase *this_00;
  uint uVar23;
  longlong lVar24;
  TSharedPtr<UE::Mutable::Private::FProgramCache,1> *pTVar25;
  undefined4 in_register_00000014;
  FTaskBase *this_01;
  FHandle *in_R9;
  EOpType EVar26;
  bool bVar27;
  FLLMScope local_res20 [2];
  FTaskBase *local_78 [1];
  TStaticArray<UE::Tasks::Private::FTaskBase_*,1,4294967295> local_70;
  FMemScope local_68;
  TSharedRef<UE::Mutable::Private::CodeRunner,1> local_60;
  undefined8 local_50;
  FSharedReferencer<1> FStack_48;
  FProgramCache *local_40;
  TReferenceControllerBase<1> *pTStack_38;
  
  TVar19._4_4_ = in_register_00000014;
  TVar19._0_4_ = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name550,L"MutableRuntime");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res20,LLMScope_Name550,false,None,Default,true);
  FMemScope::FMemScope(&local_68,&LLMScope_Name550,true);
  bVar27 = -1 < CpuChannel->Enabled;
  if (bVar27) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId551,"Mutable_SystemGetImageDesc",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
               ,0x227);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId551);
  }
  if ((((in_R9->Id != 0xffffffff) &&
       ((in_R9->WeakRegistry).Object !=
        (TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
         *)0x0)) &&
      (pTVar8 = (in_R9->WeakRegistry).WeakReferenceCount.ReferenceController,
      pTVar8 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar8->SharedReferenceCount)) {
    pFVar18 = Private::FindLiveInstance(this->m_pD,(uint)param_2);
    if ((pFVar18 == (FLiveInstance *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("LiveInstance",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
                            ,0x230,L""), bVar15)) {
      pcVar12 = (code *)swi(3);
      TVar19 = (TTask<UE::Mutable::Private::FExtendedImageDesc>)(*pcVar12)();
      return TVar19;
    }
    pTVar8 = (pFVar18->Cache).SharedReferenceCount.ReferenceController;
    pPVar9 = this->m_pD;
    pFVar10 = (pFVar18->Cache).Object;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_40 = (pPVar9->WorkingMemoryManager).CurrentInstanceCache.Object;
    pTStack_38 = (pPVar9->WorkingMemoryManager).CurrentInstanceCache.SharedReferenceCount.
                 ReferenceController;
    (pPVar9->WorkingMemoryManager).CurrentInstanceCache.Object = pFVar10;
    (pPVar9->WorkingMemoryManager).CurrentInstanceCache.SharedReferenceCount.ReferenceController =
         pTVar8;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_38);
    pFVar20 = TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
              ::FHandle::GetKey(in_R9);
    aVar6 = (atomic<unsigned_int>)pFVar20->Address;
    pPVar21 = FModel::GetPrivate((pFVar18->Model).Object);
    pTVar13 = CVarClearImageDescCache.Ref;
    bVar15 = IsInParallelGameThread();
    lVar24 = 0;
    if (!bVar15) {
      bVar15 = IsInGameThread();
      if (bVar15) {
        lVar24 = 0;
      }
      else {
        lVar24 = 4;
      }
    }
    if (*(int *)((longlong)pTVar13->ShadowedValue + lVar24) != 0) {
      pPVar9 = this->m_pD;
      if (((pPVar9->WorkingMemoryManager).CurrentInstanceCache.Object == (FProgramCache *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar12 = (code *)swi(3);
        TVar19 = (TTask<UE::Mutable::Private::FExtendedImageDesc>)(*pcVar12)();
        return TVar19;
      }
      FProgramCache::ClearDescCache((pPVar9->WorkingMemoryManager).CurrentInstanceCache.Object);
    }
    pPVar9 = this->m_pD;
    if (((pPVar9->WorkingMemoryManager).DebugRunnerThreadID != 0xffffffff) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("DebugRunnerThreadID == FThread::InvalidThreadId",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                            ,0x786,L""), bVar15)) {
      pcVar12 = (code *)swi(3);
      TVar19 = (TTask<UE::Mutable::Private::FExtendedImageDesc>)(*pcVar12)();
      return TVar19;
    }
    if (((pPVar9->WorkingMemoryManager).DebugRunnerID != 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("DebugRunnerID == InvalidRunnerId",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                            ,0x787,L""), bVar15)) {
      pcVar12 = (code *)swi(3);
      TVar19 = (TTask<UE::Mutable::Private::FExtendedImageDesc>)(*pcVar12)();
      return TVar19;
    }
    DVar16 = GetCurrentThreadId();
    (pPVar9->WorkingMemoryManager).DebugRunnerThreadID = DVar16;
    LOCK();
    paVar3 = &(pPVar9->WorkingMemoryManager).DebugCurrentRunnerId;
    aVar5 = *paVar3;
    *paVar3 = (atomic<unsigned___int64>)((longlong)*paVar3 + 1);
    UNLOCK();
    (pPVar9->WorkingMemoryManager).DebugRunnerID = (longlong)aVar5 + 1;
    aVar7 = (atomic<unsigned_int>)(pPVar21->Program).OpAddress.ArrayNum;
    if ((uint)aVar6 < (uint)aVar7) {
      uVar23 = 0;
      if ((int)aVar6 < (int)aVar7) {
        uVar23 = ~(uint)aVar6 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar12 = (code *)swi(3);
        TVar19 = (TTask<UE::Mutable::Private::FExtendedImageDesc>)(*pcVar12)();
        return TVar19;
      }
      uVar23 = *(uint *)((pPVar21->Program).OpAddress.AllocatorInstance.Data +
                        (longlong)(int)aVar6 * 4);
      uVar17 = 0;
      if ((int)uVar23 < (pPVar21->Program).ByteCode.ArrayNum) {
        uVar17 = ~uVar23 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar12 = (code *)swi(3);
        TVar19 = (TTask<UE::Mutable::Private::FExtendedImageDesc>)(*pcVar12)();
        return TVar19;
      }
      EVar26 = *(EOpType *)((pPVar21->Program).ByteCode.AllocatorInstance.Data + (int)uVar23);
      if ((LA_FROMMESH < EVar26) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("result<EOpType::COUNT",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ModelPrivate.h"
                              ,0x432,L""), bVar15)) {
        pcVar12 = (code *)swi(3);
        TVar19 = (TTask<UE::Mutable::Private::FExtendedImageDesc>)(*pcVar12)();
        return TVar19;
      }
    }
    else {
      EVar26 = NONE;
    }
    pFVar22 = GetOpDesc(EVar26);
    pPVar9 = this->m_pD;
    if (pFVar22->type == Image) {
      CodeRunner::Create(&local_60,&pPVar9->Settings,pPVar9,MinimizeMemory,&pFVar18->Model,
                         (pFVar18->OldParameters).Object,(uint)aVar6,0xffffffff,'\0',0,ImageDesc,
                         &pFVar18->ExternalResourceProvider);
      CodeRunner::StartRun(local_60.Object,SUB81(local_78,0));
      FVar14.ReferenceController = local_60.SharedReferenceCount.ReferenceController;
      pPVar9 = this->m_pD;
      local_70.Elements[0] = (FTaskBase * [1])(FTaskBase * [1])local_78[0];
      if (local_60.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_60.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_60.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      this_01 = (FTaskBase *)0x0;
      *(longlong *)TVar19 = 0;
      this_00 = FMemory::Malloc(0x140,0x40);
      if (this_00 != (FTaskBase *)0x0) {
        Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
        this_00->_padding_ =
             (longlong)
             &___7__TTaskWithResult_UFExtendedImageDesc_Private_Mutable_UE___Private_Tasks_UE__6B_;
        Tasks::Private::FTaskBase::Init
                  (this_00,L"FSystem::GetImageDescResultTask",Inherit,Inline,None);
        this_00->_padding_ =
             (longlong)
             &Tasks::Private::
              TExecutableTaskBase<`UE::Mutable::Private::FSystem::GetImageDesc'::`2'::<lambda_1>,UE::Mutable::Private::FExtendedImageDesc,void>
              ::_vftable_;
        this_00[1]._padding_ = (longlong)pPVar9;
        this_00[1]._padding_ = (longlong)local_60.Object;
        this_00[1]._padding_ = (longlong)FVar14.ReferenceController;
        if (FVar14.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar14.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar14.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        this_00[1].RefCount = aVar6;
        this_00->_padding_ =
             (longlong)
             &Tasks::Private::
              TExecutableTask<`UE::Mutable::Private::FSystem::GetImageDesc'::`2'::<lambda_1>_>::
              _vftable_;
        this_01 = this_00;
      }
      Tasks::Private::FTaskBase::
      AddPrerequisites<TStaticArray<UE::Tasks::Private::FTaskBase_*,1,4294967295>,0>
                (this_01,&local_70,true);
      puVar11 = *(undefined8 **)TVar19;
      if (puVar11 != (undefined8 *)0x0) {
        *(longlong *)TVar19 = 0;
        LOCK();
        piVar1 = (int *)(puVar11 + 6);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)*puVar11)(puVar11,1);
        }
      }
      *(FTaskBase **)TVar19 = this_01;
      Tasks::Private::FTaskBase::TryLaunch(this_01,0x140);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar14.ReferenceController);
      if (local_78[0] != (FTaskBase *)0x0) {
        LOCK();
        paVar2 = &local_78[0]->RefCount;
        aVar6 = *paVar2;
        *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar6 == (atomic<unsigned_int>)0x1) {
          (**(code **)local_78[0]->_padding_)(local_78[0],1);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_60.SharedReferenceCount.ReferenceController);
      goto LAB_14ab74435;
    }
    if (((pPVar9->WorkingMemoryManager).CurrentInstanceCache.Object == (FProgramCache *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar12 = (code *)swi(3);
      TVar19 = (TTask<UE::Mutable::Private::FExtendedImageDesc>)(*pcVar12)();
      return TVar19;
    }
    if (((pPVar9->WorkingMemoryManager).TempImages.ArrayNum != 0) &&
       (bVar15 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_5008110615084922946>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                            ,0x7be,"TempImages.Num() == 0"), bVar15)) {
      pcVar12 = (code *)swi(3);
      TVar19 = (TTask<UE::Mutable::Private::FExtendedImageDesc>)(*pcVar12)();
      return TVar19;
    }
    if (((pPVar9->WorkingMemoryManager).TempMeshes.ArrayNum != 0) &&
       (bVar15 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_5008110615084922945>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                            ,0x7bf,"TempMeshes.Num() == 0"), bVar15)) {
      pcVar12 = (code *)swi(3);
      TVar19 = (TTask<UE::Mutable::Private::FExtendedImageDesc>)(*pcVar12)();
      return TVar19;
    }
    if (((pPVar9->WorkingMemoryManager).DebugRunnerThreadID == 0xffffffff) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("DebugRunnerThreadID != FThread::InvalidThreadId",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                            ,0x7c3,L""), bVar15)) {
      pcVar12 = (code *)swi(3);
      TVar19 = (TTask<UE::Mutable::Private::FExtendedImageDesc>)(*pcVar12)();
      return TVar19;
    }
    if (((pPVar9->WorkingMemoryManager).DebugRunnerID == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("DebugRunnerID != InvalidRunnerId",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                            ,0x7c4,L""), bVar15)) {
      pcVar12 = (code *)swi(3);
      TVar19 = (TTask<UE::Mutable::Private::FExtendedImageDesc>)(*pcVar12)();
      return TVar19;
    }
    (pPVar9->WorkingMemoryManager).DebugRunnerThreadID = 0xffffffff;
    (pPVar9->WorkingMemoryManager).DebugRunnerID = 0;
    pPVar9 = this->m_pD;
    pTVar25 = &(pPVar9->WorkingMemoryManager).CurrentInstanceCache;
    local_50 = 0;
    FStack_48.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar25 != (TSharedPtr<UE::Mutable::Private::FProgramCache,1> *)&local_50) {
      pTVar25->Object = (FProgramCache *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pPVar9->WorkingMemoryManager).CurrentInstanceCache.SharedReferenceCount,
                 &FStack_48);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_48.ReferenceController);
  }
  Tasks::MakeCompletedTask<UE::Mutable::Private::FExtendedImageDesc>();
LAB_14ab74435:
  if (bVar27) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(&local_68);
  FLLMScope::~FLLMScope(local_res20);
  return TVar19;
}

// GetImageDescInline @ 14ab74660

FExtendedImageDesc * __thiscall
UE::Mutable::Private::FSystem::GetImageDescInline
          (FSystem *this,FExtendedImageDesc *__return_storage_ptr__,uint param_1,FHandle *param_2)

{
  int *piVar1;
  atomic<unsigned___int64> *paVar2;
  int iVar3;
  atomic<unsigned___int64> aVar4;
  uint uVar5;
  uint uVar6;
  TReferenceControllerBase<1> *pTVar7;
  Private *pPVar8;
  FProgramCache *pFVar9;
  code *pcVar10;
  bool bVar11;
  DWORD DVar12;
  FLiveInstance *pFVar13;
  FExtendedImageDesc *pFVar14;
  FGeneratedImageKey *pFVar15;
  Private *pPVar16;
  FOpDesc *pFVar17;
  uint uVar18;
  longlong lVar19;
  TSharedPtr<UE::Mutable::Private::FProgramCache,1> *pTVar20;
  EOpType EVar21;
  bool bVar22;
  FLLMScope local_res20 [2];
  undefined4 local_98;
  undefined2 local_94;
  uchar local_92;
  TArray<int,TSizedDefaultAllocator<32>_> local_90;
  Private *local_80;
  undefined8 *local_78;
  TConsoleVariableData<int> *local_70;
  FMemScope local_68;
  TSharedRef<UE::Mutable::Private::CodeRunner,1> local_60;
  undefined8 local_50;
  FSharedReferencer<1> FStack_48;
  FProgramCache *local_40;
  TReferenceControllerBase<1> *pTStack_38;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name486,L"MutableRuntime");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res20,LLMScope_Name486,false,None,Default,true);
  FMemScope::FMemScope(&local_68,&LLMScope_Name486,true);
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId487,"Mutable_SystemGetImageDesc",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
               ,0x1e7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId487);
  }
  if ((((param_2->Id == 0xffffffff) ||
       ((param_2->WeakRegistry).Object ==
        (TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
         *)0x0)) ||
      (pTVar7 = (param_2->WeakRegistry).WeakReferenceCount.ReferenceController,
      pTVar7 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar7->SharedReferenceCount < 1)) {
    *(undefined4 *)__return_storage_ptr__ = 0;
    *(undefined2 *)&__return_storage_ptr__->field_0x4 = 0;
    __return_storage_ptr__->FirstLODAvailable = '\0';
    (__return_storage_ptr__->ConstantImagesNeededToGenerate).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->ConstantImagesNeededToGenerate).ArrayNum = 0;
    (__return_storage_ptr__->ConstantImagesNeededToGenerate).ArrayMax = 0;
    goto LAB_14ab74c71;
  }
  local_98 = 0;
  EVar21 = NONE;
  local_94 = 0;
  local_92 = '\0';
  local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.ArrayNum = 0;
  local_90.ArrayMax = 0;
  pFVar13 = Private::FindLiveInstance(this->m_pD,param_1);
  if ((pFVar13 == (FLiveInstance *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("LiveInstance",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
                          ,0x1f2,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    pFVar14 = (FExtendedImageDesc *)(*pcVar10)();
    return pFVar14;
  }
  pTVar7 = (pFVar13->Cache).SharedReferenceCount.ReferenceController;
  pPVar8 = this->m_pD;
  pFVar9 = (pFVar13->Cache).Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_40 = (pPVar8->WorkingMemoryManager).CurrentInstanceCache.Object;
  pTStack_38 = (pPVar8->WorkingMemoryManager).CurrentInstanceCache.SharedReferenceCount.
               ReferenceController;
  (pPVar8->WorkingMemoryManager).CurrentInstanceCache.Object = pFVar9;
  (pPVar8->WorkingMemoryManager).CurrentInstanceCache.SharedReferenceCount.ReferenceController =
       pTVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_38);
  pFVar15 = TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
            ::FHandle::GetKey(param_2);
  uVar5 = pFVar15->Address;
  pPVar16 = FModel::GetPrivate((pFVar13->Model).Object);
  local_70 = CVarClearImageDescCache.Ref;
  local_80 = pPVar16;
  bVar11 = IsInParallelGameThread();
  if (bVar11) {
LAB_14ab74824:
    lVar19 = 0;
  }
  else {
    bVar11 = IsInGameThread();
    lVar19 = 4;
    if (bVar11) goto LAB_14ab74824;
  }
  if (*(int *)((longlong)local_70->ShadowedValue + lVar19) != 0) {
    pPVar8 = this->m_pD;
    if (((pPVar8->WorkingMemoryManager).CurrentInstanceCache.Object == (FProgramCache *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      pFVar14 = (FExtendedImageDesc *)(*pcVar10)();
      return pFVar14;
    }
    FProgramCache::ClearDescCache((pPVar8->WorkingMemoryManager).CurrentInstanceCache.Object);
    pPVar16 = local_80;
  }
  uVar6 = (pPVar16->Program).OpAddress.ArrayNum;
  if (uVar5 < uVar6) {
    uVar18 = 0;
    if ((int)uVar5 < (int)uVar6) {
      uVar18 = ~uVar5 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar10 = (code *)swi(3);
      pFVar14 = (FExtendedImageDesc *)(*pcVar10)();
      return pFVar14;
    }
    uVar6 = *(uint *)((pPVar16->Program).OpAddress.AllocatorInstance.Data + (longlong)(int)uVar5 * 4
                     );
    uVar18 = 0;
    if ((int)uVar6 < (local_80->Program).ByteCode.ArrayNum) {
      uVar18 = ~uVar6 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar10 = (code *)swi(3);
      pFVar14 = (FExtendedImageDesc *)(*pcVar10)();
      return pFVar14;
    }
    EVar21 = *(EOpType *)((local_80->Program).ByteCode.AllocatorInstance.Data + (int)uVar6);
    if ((LA_FROMMESH < EVar21) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("result<EOpType::COUNT",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ModelPrivate.h"
                            ,0x432,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      pFVar14 = (FExtendedImageDesc *)(*pcVar10)();
      return pFVar14;
    }
  }
  pFVar17 = GetOpDesc(EVar21);
  if (pFVar17->type == Image) {
    pPVar8 = this->m_pD;
    if (((pPVar8->WorkingMemoryManager).DebugRunnerThreadID != 0xffffffff) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("DebugRunnerThreadID == FThread::InvalidThreadId",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                            ,0x786,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      pFVar14 = (FExtendedImageDesc *)(*pcVar10)();
      return pFVar14;
    }
    if (((pPVar8->WorkingMemoryManager).DebugRunnerID != 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("DebugRunnerID == InvalidRunnerId",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                            ,0x787,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      pFVar14 = (FExtendedImageDesc *)(*pcVar10)();
      return pFVar14;
    }
    DVar12 = GetCurrentThreadId();
    (pPVar8->WorkingMemoryManager).DebugRunnerThreadID = DVar12;
    LOCK();
    paVar2 = &(pPVar8->WorkingMemoryManager).DebugCurrentRunnerId;
    aVar4 = *paVar2;
    *paVar2 = (atomic<unsigned___int64>)((longlong)*paVar2 + 1);
    UNLOCK();
    (pPVar8->WorkingMemoryManager).DebugRunnerID = (longlong)aVar4 + 1;
    CodeRunner::Create(&local_60,&this->m_pD->Settings,this->m_pD,MinimizeMemory,&pFVar13->Model,
                       (pFVar13->OldParameters).Object,uVar5,0xffffffff,'\0',0,ImageDesc,
                       &pFVar13->ExternalResourceProvider);
    CodeRunner::StartRun(local_60.Object,SUB81(&local_78,0));
    if (((local_78 != (undefined8 *)0x0) && (*(char *)(local_78 + 0x1a) == '\0')) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("CompletionEvent.IsCompleted()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
                            ,0x217,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      pFVar14 = (FExtendedImageDesc *)(*pcVar10)();
      return pFVar14;
    }
    pFVar14 = CodeRunner::GetImageDescResult(local_60.Object,uVar5);
    local_98 = *(undefined4 *)pFVar14;
    local_94 = *(undefined2 *)&pFVar14->field_0x4;
    local_92 = pFVar14->FirstLODAvailable;
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              (&local_90,&pFVar14->ConstantImagesNeededToGenerate);
    pPVar8 = this->m_pD;
    if (((pPVar8->WorkingMemoryManager).CurrentInstanceCache.Object == (FProgramCache *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      pFVar14 = (FExtendedImageDesc *)(*pcVar10)();
      return pFVar14;
    }
    if (((pPVar8->WorkingMemoryManager).TempImages.ArrayNum != 0) &&
       (bVar11 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_5008110615084922946>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                            ,0x7be,"TempImages.Num() == 0"), bVar11)) {
      pcVar10 = (code *)swi(3);
      pFVar14 = (FExtendedImageDesc *)(*pcVar10)();
      return pFVar14;
    }
    if (((pPVar8->WorkingMemoryManager).TempMeshes.ArrayNum != 0) &&
       (bVar11 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_5008110615084922945>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                            ,0x7bf,"TempMeshes.Num() == 0"), bVar11)) {
      pcVar10 = (code *)swi(3);
      pFVar14 = (FExtendedImageDesc *)(*pcVar10)();
      return pFVar14;
    }
    if (((pPVar8->WorkingMemoryManager).DebugRunnerThreadID == 0xffffffff) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("DebugRunnerThreadID != FThread::InvalidThreadId",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                            ,0x7c3,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      pFVar14 = (FExtendedImageDesc *)(*pcVar10)();
      return pFVar14;
    }
    if (((pPVar8->WorkingMemoryManager).DebugRunnerID == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("DebugRunnerID != InvalidRunnerId",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                            ,0x7c4,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      pFVar14 = (FExtendedImageDesc *)(*pcVar10)();
      return pFVar14;
    }
    (pPVar8->WorkingMemoryManager).DebugRunnerThreadID = 0xffffffff;
    (pPVar8->WorkingMemoryManager).DebugRunnerID = 0;
    if (local_78 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_78 + 6);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)*local_78)(local_78,1);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_60.SharedReferenceCount.ReferenceController);
  }
  pPVar8 = this->m_pD;
  pTVar20 = &(pPVar8->WorkingMemoryManager).CurrentInstanceCache;
  local_50 = 0;
  FStack_48.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar20 != (TSharedPtr<UE::Mutable::Private::FProgramCache,1> *)&local_50) {
    pTVar20->Object = (FProgramCache *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pPVar8->WorkingMemoryManager).CurrentInstanceCache.SharedReferenceCount,&FStack_48)
    ;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_48.ReferenceController);
  *(undefined4 *)__return_storage_ptr__ = local_98;
  *(undefined2 *)&__return_storage_ptr__->field_0x4 = local_94;
  __return_storage_ptr__->FirstLODAvailable = local_92;
  (__return_storage_ptr__->ConstantImagesNeededToGenerate).AllocatorInstance.Data =
       local_90.AllocatorInstance.Data;
  (__return_storage_ptr__->ConstantImagesNeededToGenerate).ArrayNum = local_90.ArrayNum;
  (__return_storage_ptr__->ConstantImagesNeededToGenerate).ArrayMax = local_90.ArrayMax;
  local_90.ArrayNum = 0;
  local_90.ArrayMax = 0;
  local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
LAB_14ab74c71:
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(&local_68);
  FLLMScope::~FLLMScope(local_res20);
  return __return_storage_ptr__;
}

// GetImageInline @ 14ab74df0

TSharedPtr<UE::Mutable::Private::FImage_const_,1> * __thiscall
UE::Mutable::Private::FSystem::GetImageInline
          (FSystem *this,TSharedPtr<UE::Mutable::Private::FImage_const_,1> *__return_storage_ptr__,
          uint param_1,FHandle *param_2,int param_3,int param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  Private *pPVar2;
  FProgramCache *pFVar3;
  code *pcVar4;
  FImage *pFVar5;
  bool bVar6;
  FLiveInstance *pFVar7;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> *pTVar8;
  FGeneratedImageKey *pFVar9;
  TSharedRef<UE::Mutable::Private::FImage,1> *pTVar10;
  TSharedPtr<UE::Mutable::Private::FProgramCache,1> *pTVar11;
  bool bVar12;
  FLLMScope local_res20 [2];
  FMemScope local_98;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_90;
  undefined8 local_80;
  FSharedReferencer<1> local_78;
  undefined8 local_70;
  FSharedReferencer<1> FStack_68;
  FProgramCache *local_60;
  TReferenceControllerBase<1> *pTStack_58;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> local_50;
  TSharedRef<UE::Mutable::Private::FImage,1> local_40;
  TSharedRef<UE::Mutable::Private::FImage,1> local_30;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name377,L"MutableRuntime");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res20,LLMScope_Name377,false,None,Default,true);
  FMemScope::FMemScope(&local_98,&LLMScope_Name377,true);
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId378,"Mutable_SystemGetImage",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
               ,0x17a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId378);
  }
  if ((((param_2->Id == 0xffffffff) ||
       ((param_2->WeakRegistry).Object ==
        (TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
         *)0x0)) ||
      (pTVar1 = (param_2->WeakRegistry).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) {
    pTVar10 = BlackImage(&local_30);
    __return_storage_ptr__->Object = pTVar10->Object;
    pTVar1 = (pTVar10->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  else {
    local_90.Object = (FImage *)0x0;
    local_90.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar7 = Private::FindLiveInstance(this->m_pD,param_1);
    if ((pFVar7 == (FLiveInstance *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("LiveInstance",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
                           ,0x185,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedPtr<UE::Mutable::Private::FImage_const_,1> *)(*pcVar4)();
      return pTVar8;
    }
    pTVar1 = (pFVar7->Cache).SharedReferenceCount.ReferenceController;
    pPVar2 = this->m_pD;
    pFVar3 = (pFVar7->Cache).Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_60 = (pPVar2->WorkingMemoryManager).CurrentInstanceCache.Object;
    pTStack_58 = (pPVar2->WorkingMemoryManager).CurrentInstanceCache.SharedReferenceCount.
                 ReferenceController;
    (pPVar2->WorkingMemoryManager).CurrentInstanceCache.Object = pFVar3;
    (pPVar2->WorkingMemoryManager).CurrentInstanceCache.SharedReferenceCount.ReferenceController =
         pTVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_58);
    pFVar9 = TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
             ::FHandle::GetKey(param_2);
    pTVar8 = Private::BuildImage(this->m_pD,&local_50,&pFVar7->ExternalResourceProvider,
                                 &pFVar7->Model,(pFVar7->OldParameters).Object,pFVar9->Address,
                                 param_3,param_4);
    if (&local_90 != pTVar8) {
      local_90.Object = pTVar8->Object;
      pTVar8->Object = (FImage *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_90.SharedReferenceCount,&pTVar8->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.SharedReferenceCount.ReferenceController);
    if (local_90.Object == (FImage *)0x0) {
      pTVar10 = BlackImage(&local_40);
      local_78.ReferenceController = (pTVar10->SharedReferenceCount).ReferenceController;
      local_90.Object = pTVar10->Object;
      if (local_78.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_78.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_78.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_80 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_90.SharedReferenceCount,&local_78);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_40.SharedReferenceCount.ReferenceController);
    }
    pFVar5 = local_90.Object;
    pPVar2 = this->m_pD;
    pTVar11 = &(pPVar2->WorkingMemoryManager).CurrentInstanceCache;
    local_70 = 0;
    FStack_68.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar11 != (TSharedPtr<UE::Mutable::Private::FProgramCache,1> *)&local_70) {
      pTVar11->Object = (FProgramCache *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pPVar2->WorkingMemoryManager).CurrentInstanceCache.SharedReferenceCount,
                 &FStack_68);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_68.ReferenceController);
    local_30.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         local_90.SharedReferenceCount.ReferenceController;
    __return_storage_ptr__->Object = pFVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.SharedReferenceCount.ReferenceController);
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(&local_98);
  FLLMScope::~FLLMScope(local_res20);
  return __return_storage_ptr__;
}

// GetMaterial @ 14ab76170

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>_> __thiscall
UE::Mutable::Private::FSystem::GetMaterial(FSystem *this,uint param_1,FHandle *param_2)

{
  int *piVar1;
  atomic<unsigned_int> *paVar2;
  atomic<unsigned___int64> *paVar3;
  int iVar4;
  atomic<unsigned_int> aVar5;
  atomic<unsigned___int64> aVar6;
  uint uVar7;
  uint uVar8;
  TReferenceControllerBase<1> *pTVar9;
  Private *pPVar10;
  FProgramCache *pFVar11;
  undefined8 *puVar12;
  code *pcVar13;
  FSharedReferencer<1> FVar14;
  bool bVar15;
  DWORD DVar16;
  FLiveInstance *pFVar17;
  TTask<TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>_> TVar18;
  FGeneratedMaterialKey *pFVar19;
  Private *pPVar20;
  FOpDesc *pFVar21;
  FMaterial *pFVar22;
  CodeRunner *this_00;
  CodeRunner *this_01;
  uint uVar23;
  TSharedPtr<UE::Mutable::Private::FProgramCache,1> *pTVar24;
  undefined4 in_register_00000014;
  EOpType EVar25;
  FHandle *in_R9;
  bool bVar26;
  FLLMScope local_res20 [2];
  FMemScope local_80;
  CodeRunner *local_78;
  FTaskBase *local_70 [1];
  TSharedRef<UE::Mutable::Private::CodeRunner,1> local_68;
  TStaticArray<UE::Tasks::Private::FTaskBase_*,1,4294967295> local_58;
  FMaterial *local_50;
  undefined8 local_48;
  FSharedReferencer<1> FStack_40;
  FProgramCache *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  
  TVar18._4_4_ = in_register_00000014;
  TVar18._0_4_ = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name723,L"MutableRuntime");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res20,LLMScope_Name723,false,None,Default,true);
  FMemScope::FMemScope(&local_80,&LLMScope_Name723,true);
  bVar26 = -1 < CpuChannel->Enabled;
  if (bVar26) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId724,"Mutable_SystemGetMaterial",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
               ,0x2d4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId724);
  }
  if ((((in_R9->Id == 0xffffffff) ||
       ((in_R9->WeakRegistry).Object ==
        (TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
         *)0x0)) ||
      (pTVar9 = (in_R9->WeakRegistry).WeakReferenceCount.ReferenceController,
      pTVar9 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar9->SharedReferenceCount < 1)) {
    pFVar22 = ::operator_new(0x108);
    if (pFVar22 == (FMaterial *)0x0) {
      local_50 = (FMaterial *)0x0;
    }
    else {
      memset(pFVar22,0,0x108);
      local_50 = FMaterial::FMaterial(pFVar22);
    }
    Tasks::
    MakeCompletedTask<TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>,UE::Mutable::Private::FMaterial_*>
              ((FMaterial **)TVar18);
    if (bVar26) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FMemScope::~FMemScope(&local_80);
    FLLMScope::~FLLMScope(local_res20);
  }
  else {
    pFVar17 = Private::FindLiveInstance(this->m_pD,(uint)param_2);
    if ((pFVar17 == (FLiveInstance *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("LiveInstance",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
                            ,0x2dd,L""), bVar15)) {
      pcVar13 = (code *)swi(3);
      TVar18 = (TTask<TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>_>)(*pcVar13)();
      return TVar18;
    }
    pTVar9 = (pFVar17->Cache).SharedReferenceCount.ReferenceController;
    pPVar10 = this->m_pD;
    pFVar11 = (pFVar17->Cache).Object;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38 = (pPVar10->WorkingMemoryManager).CurrentInstanceCache.Object;
    pTStack_30 = (pPVar10->WorkingMemoryManager).CurrentInstanceCache.SharedReferenceCount.
                 ReferenceController;
    (pPVar10->WorkingMemoryManager).CurrentInstanceCache.Object = pFVar11;
    (pPVar10->WorkingMemoryManager).CurrentInstanceCache.SharedReferenceCount.ReferenceController =
         pTVar9;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
    pPVar10 = this->m_pD;
    if (((pPVar10->WorkingMemoryManager).DebugRunnerThreadID != 0xffffffff) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("DebugRunnerThreadID == FThread::InvalidThreadId",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                            ,0x786,L""), bVar15)) {
      pcVar13 = (code *)swi(3);
      TVar18 = (TTask<TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>_>)(*pcVar13)();
      return TVar18;
    }
    if (((pPVar10->WorkingMemoryManager).DebugRunnerID != 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("DebugRunnerID == InvalidRunnerId",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                            ,0x787,L""), bVar15)) {
      pcVar13 = (code *)swi(3);
      TVar18 = (TTask<TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>_>)(*pcVar13)();
      return TVar18;
    }
    DVar16 = GetCurrentThreadId();
    (pPVar10->WorkingMemoryManager).DebugRunnerThreadID = DVar16;
    LOCK();
    paVar3 = &(pPVar10->WorkingMemoryManager).DebugCurrentRunnerId;
    aVar6 = *paVar3;
    *paVar3 = (atomic<unsigned___int64>)((longlong)*paVar3 + 1);
    UNLOCK();
    (pPVar10->WorkingMemoryManager).DebugRunnerID = (longlong)aVar6 + 1;
    pFVar19 = TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
              ::FHandle::GetKey(in_R9);
    uVar7 = pFVar19->Address;
    if (((pFVar17->Model).Object == (FModel *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar13 = (code *)swi(3);
      TVar18 = (TTask<TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>_>)(*pcVar13)();
      return TVar18;
    }
    pPVar20 = FModel::GetPrivate((pFVar17->Model).Object);
    this_00 = (CodeRunner *)0x0;
    uVar8 = (pPVar20->Program).OpAddress.ArrayNum;
    if (uVar7 < uVar8) {
      uVar23 = 0;
      if ((int)uVar7 < (int)uVar8) {
        uVar23 = ~uVar7 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar13 = (code *)swi(3);
        TVar18 = (TTask<TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>_>)(*pcVar13)();
        return TVar18;
      }
      uVar8 = *(uint *)((pPVar20->Program).OpAddress.AllocatorInstance.Data +
                       (longlong)(int)uVar7 * 4);
      uVar23 = 0;
      if ((int)uVar8 < (pPVar20->Program).ByteCode.ArrayNum) {
        uVar23 = ~uVar8 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar13 = (code *)swi(3);
        TVar18 = (TTask<TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>_>)(*pcVar13)();
        return TVar18;
      }
      EVar25 = *(EOpType *)((pPVar20->Program).ByteCode.AllocatorInstance.Data + (int)uVar8);
      if ((LA_FROMMESH < EVar25) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("result<EOpType::COUNT",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ModelPrivate.h"
                              ,0x432,L""), bVar15)) {
        pcVar13 = (code *)swi(3);
        TVar18 = (TTask<TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>_>)(*pcVar13)();
        return TVar18;
      }
    }
    else {
      EVar25 = NONE;
    }
    pFVar21 = GetOpDesc(EVar25);
    pPVar10 = this->m_pD;
    if (pFVar21->type == Material) {
      CodeRunner::Create(&local_68,&pPVar10->Settings,pPVar10,MinimizeMemory,&pFVar17->Model,
                         (pFVar17->OldParameters).Object,uVar7,0xffffffff,'\0',0,Full,
                         &pFVar17->ExternalResourceProvider);
      CodeRunner::StartRun(local_68.Object,SUB81(local_70,0));
      FVar14.ReferenceController = local_68.SharedReferenceCount.ReferenceController;
      pPVar10 = this->m_pD;
      local_58.Elements[0] = (FTaskBase * [1])(FTaskBase * [1])local_70[0];
      local_78 = local_68.Object;
      if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(undefined8 *)TVar18 = 0;
      this_01 = FMemory::Malloc(0x140,0x40);
      if (this_01 != (CodeRunner *)0x0) {
        Tasks::Private::FTaskBase::FTaskBase((FTaskBase *)this_01,2,true);
        this_01->_padding_ =
             (longlong)
             &
             ___7__TTaskWithResult_V__TSharedPtr___CBVFMaterial_Private_Mutable_UE___00___Private_Tasks_UE__6B_
        ;
        Tasks::Private::FTaskBase::Init
                  ((FTaskBase *)this_01,L"FSystem::GetMaterialResultTask",Inherit,Inline,None);
        this_01->_padding_ =
             (longlong)
             &Tasks::Private::
              TExecutableTaskBase<`UE::Mutable::Private::FSystem::GetMaterial'::`2'::<lambda_1>,TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>,void>
              ::_vftable_;
        *(CodeRunner **)&(this_01->ScheduledStagePerOp).m_otherIndex.field_0x10 = local_78;
        *(Private **)&(this_01->ScheduledStagePerOp).m_otherIndex.field_0x8 = pPVar10;
        *(TReferenceControllerBase<1> **)&(this_01->ScheduledStagePerOp).m_otherIndex.field_0x18 =
             FVar14.ReferenceController;
        if (FVar14.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar14.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar14.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        *(uint *)&(this_01->ScheduledStagePerOp).m_otherIndex.field_0x20 = uVar7;
        this_01->_padding_ =
             (longlong)
             &Tasks::Private::
              TExecutableTask<`UE::Mutable::Private::FSystem::GetMaterial'::`2'::<lambda_1>_>::
              _vftable_;
        this_00 = this_01;
      }
      Tasks::Private::FTaskBase::
      AddPrerequisites<TStaticArray<UE::Tasks::Private::FTaskBase_*,1,4294967295>,0>
                ((FTaskBase *)this_00,&local_58,true);
      puVar12 = *(undefined8 **)TVar18;
      if (puVar12 != (undefined8 *)0x0) {
        *(undefined8 *)TVar18 = 0;
        LOCK();
        piVar1 = (int *)(puVar12 + 6);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)*puVar12)(puVar12,1);
        }
      }
      *(CodeRunner **)TVar18 = this_00;
      Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_00,0x140);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar14.ReferenceController);
      if (local_70[0] != (FTaskBase *)0x0) {
        LOCK();
        paVar2 = &local_70[0]->RefCount;
        aVar5 = *paVar2;
        *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar5 == (atomic<unsigned_int>)0x1) {
          (**(code **)local_70[0]->_padding_)(local_70[0],1);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
    }
    else {
      if (((pPVar10->WorkingMemoryManager).CurrentInstanceCache.Object == (FProgramCache *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar13 = (code *)swi(3);
        TVar18 = (TTask<TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>_>)(*pcVar13)();
        return TVar18;
      }
      if (((pPVar10->WorkingMemoryManager).TempImages.ArrayNum != 0) &&
         (bVar15 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_5008110615084922946>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                              ,0x7be,"TempImages.Num() == 0"), bVar15)) {
        pcVar13 = (code *)swi(3);
        TVar18 = (TTask<TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>_>)(*pcVar13)();
        return TVar18;
      }
      if (((pPVar10->WorkingMemoryManager).TempMeshes.ArrayNum != 0) &&
         (bVar15 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_5008110615084922945>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                              ,0x7bf,"TempMeshes.Num() == 0"), bVar15)) {
        pcVar13 = (code *)swi(3);
        TVar18 = (TTask<TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>_>)(*pcVar13)();
        return TVar18;
      }
      if (((pPVar10->WorkingMemoryManager).DebugRunnerThreadID == 0xffffffff) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("DebugRunnerThreadID != FThread::InvalidThreadId",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                              ,0x7c3,L""), bVar15)) {
        pcVar13 = (code *)swi(3);
        TVar18 = (TTask<TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>_>)(*pcVar13)();
        return TVar18;
      }
      if (((pPVar10->WorkingMemoryManager).DebugRunnerID == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("DebugRunnerID != InvalidRunnerId",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                              ,0x7c4,L""), bVar15)) {
        pcVar13 = (code *)swi(3);
        TVar18 = (TTask<TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>_>)(*pcVar13)();
        return TVar18;
      }
      (pPVar10->WorkingMemoryManager).DebugRunnerThreadID = 0xffffffff;
      (pPVar10->WorkingMemoryManager).DebugRunnerID = 0;
      pPVar10 = this->m_pD;
      pTVar24 = &(pPVar10->WorkingMemoryManager).CurrentInstanceCache;
      local_48 = 0;
      FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar24 != (TSharedPtr<UE::Mutable::Private::FProgramCache,1> *)&local_48) {
        pTVar24->Object = (FProgramCache *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(pPVar10->WorkingMemoryManager).CurrentInstanceCache.SharedReferenceCount,
                   &FStack_40);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_40.ReferenceController);
      pFVar22 = ::operator_new(0x108);
      if (pFVar22 != (FMaterial *)0x0) {
        memset(pFVar22,0,0x108);
        this_00 = (CodeRunner *)FMaterial::FMaterial(pFVar22);
      }
      local_78 = this_00;
      Tasks::
      MakeCompletedTask<TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>,UE::Mutable::Private::FMaterial_*>
                ((FMaterial **)TVar18);
    }
    if (bVar26) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FMemScope::~FMemScope(&local_80);
    FLLMScope::~FLLMScope(local_res20);
  }
  return TVar18;
}

// GetMesh @ 14ab76ef0

/* WARNING: Enum "EMeshContentFlags": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_> __thiscall
UE::Mutable::Private::FSystem::GetMesh
          (FSystem *this,uint param_1,FHandle *param_2,EMeshContentFlags param_3)

{
  int *piVar1;
  atomic<unsigned_int> *paVar2;
  atomic<unsigned___int64> *paVar3;
  int iVar4;
  atomic<unsigned_int> aVar5;
  atomic<unsigned___int64> aVar6;
  uint uVar7;
  uint uVar8;
  TReferenceControllerBase<1> *pTVar9;
  Private *pPVar10;
  FProgramCache *pFVar11;
  undefined8 *puVar12;
  code *pcVar13;
  FSharedReferencer<1> FVar14;
  bool bVar15;
  DWORD DVar16;
  FLiveInstance *pFVar17;
  TTask<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_> TVar18;
  FGeneratedMeshKey *pFVar19;
  Private *pPVar20;
  FOpDesc *pFVar21;
  FMesh *pFVar22;
  CodeRunner *this_00;
  CodeRunner *this_01;
  uint uVar23;
  TSharedPtr<UE::Mutable::Private::FProgramCache,1> *pTVar24;
  undefined4 in_register_00000014;
  EOpType EVar25;
  undefined7 in_register_00000089;
  FHandle *this_02;
  bool bVar26;
  FLLMScope local_res20 [2];
  uchar in_stack_00000028;
  FMemScope local_80;
  CodeRunner *local_78;
  FTaskBase *local_70 [1];
  TSharedRef<UE::Mutable::Private::CodeRunner,1> local_68;
  TStaticArray<UE::Tasks::Private::FTaskBase_*,1,4294967295> local_58;
  FMesh *local_50;
  undefined8 local_48;
  FSharedReferencer<1> FStack_40;
  FProgramCache *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  
  this_02 = (FHandle *)CONCAT71(in_register_00000089,param_3);
  TVar18._4_4_ = in_register_00000014;
  TVar18._0_4_ = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name657,L"MutableRuntime");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res20,LLMScope_Name657,false,None,Default,true);
  FMemScope::FMemScope(&local_80,&LLMScope_Name657,true);
  bVar26 = -1 < CpuChannel->Enabled;
  if (bVar26) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId658,"Mutable_SystemGetMesh",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
               ,0x292);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId658);
  }
  if ((((this_02->Id == 0xffffffff) ||
       ((this_02->WeakRegistry).Object ==
        (TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
         *)0x0)) ||
      (pTVar9 = (this_02->WeakRegistry).WeakReferenceCount.ReferenceController,
      pTVar9 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar9->SharedReferenceCount < 1)) {
    pFVar22 = ::operator_new(0x198);
    if (pFVar22 == (FMesh *)0x0) {
      local_50 = (FMesh *)0x0;
    }
    else {
      memset(pFVar22,0,0x198);
      local_50 = FMesh::FMesh(pFVar22);
    }
    Tasks::
    MakeCompletedTask<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,UE::Mutable::Private::FMesh_*>
              ((FMesh **)TVar18);
    if (bVar26) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FMemScope::~FMemScope(&local_80);
    FLLMScope::~FLLMScope(local_res20);
  }
  else {
    pFVar17 = Private::FindLiveInstance(this->m_pD,(uint)param_2);
    if ((pFVar17 == (FLiveInstance *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("LiveInstance",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
                            ,0x29b,L""), bVar15)) {
      pcVar13 = (code *)swi(3);
      TVar18 = (TTask<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_>)(*pcVar13)();
      return TVar18;
    }
    pTVar9 = (pFVar17->Cache).SharedReferenceCount.ReferenceController;
    pPVar10 = this->m_pD;
    pFVar11 = (pFVar17->Cache).Object;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38 = (pPVar10->WorkingMemoryManager).CurrentInstanceCache.Object;
    pTStack_30 = (pPVar10->WorkingMemoryManager).CurrentInstanceCache.SharedReferenceCount.
                 ReferenceController;
    (pPVar10->WorkingMemoryManager).CurrentInstanceCache.Object = pFVar11;
    (pPVar10->WorkingMemoryManager).CurrentInstanceCache.SharedReferenceCount.ReferenceController =
         pTVar9;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
    pPVar10 = this->m_pD;
    if (((pPVar10->WorkingMemoryManager).DebugRunnerThreadID != 0xffffffff) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("DebugRunnerThreadID == FThread::InvalidThreadId",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                            ,0x786,L""), bVar15)) {
      pcVar13 = (code *)swi(3);
      TVar18 = (TTask<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_>)(*pcVar13)();
      return TVar18;
    }
    if (((pPVar10->WorkingMemoryManager).DebugRunnerID != 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("DebugRunnerID == InvalidRunnerId",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                            ,0x787,L""), bVar15)) {
      pcVar13 = (code *)swi(3);
      TVar18 = (TTask<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_>)(*pcVar13)();
      return TVar18;
    }
    DVar16 = GetCurrentThreadId();
    (pPVar10->WorkingMemoryManager).DebugRunnerThreadID = DVar16;
    LOCK();
    paVar3 = &(pPVar10->WorkingMemoryManager).DebugCurrentRunnerId;
    aVar6 = *paVar3;
    *paVar3 = (atomic<unsigned___int64>)((longlong)*paVar3 + 1);
    UNLOCK();
    (pPVar10->WorkingMemoryManager).DebugRunnerID = (longlong)aVar6 + 1;
    pFVar19 = TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
              ::FHandle::GetKey(this_02);
    uVar7 = pFVar19->Address;
    if (((pFVar17->Model).Object == (FModel *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar13 = (code *)swi(3);
      TVar18 = (TTask<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_>)(*pcVar13)();
      return TVar18;
    }
    pPVar20 = FModel::GetPrivate((pFVar17->Model).Object);
    this_00 = (CodeRunner *)0x0;
    uVar8 = (pPVar20->Program).OpAddress.ArrayNum;
    if (uVar7 < uVar8) {
      uVar23 = 0;
      if ((int)uVar7 < (int)uVar8) {
        uVar23 = ~uVar7 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar13 = (code *)swi(3);
        TVar18 = (TTask<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_>)(*pcVar13)();
        return TVar18;
      }
      uVar8 = *(uint *)((pPVar20->Program).OpAddress.AllocatorInstance.Data +
                       (longlong)(int)uVar7 * 4);
      uVar23 = 0;
      if ((int)uVar8 < (pPVar20->Program).ByteCode.ArrayNum) {
        uVar23 = ~uVar8 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar13 = (code *)swi(3);
        TVar18 = (TTask<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_>)(*pcVar13)();
        return TVar18;
      }
      EVar25 = *(EOpType *)((pPVar20->Program).ByteCode.AllocatorInstance.Data + (int)uVar8);
      if ((LA_FROMMESH < EVar25) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("result<EOpType::COUNT",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ModelPrivate.h"
                              ,0x432,L""), bVar15)) {
        pcVar13 = (code *)swi(3);
        TVar18 = (TTask<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_>)(*pcVar13)();
        return TVar18;
      }
    }
    else {
      EVar25 = NONE;
    }
    pFVar21 = GetOpDesc(EVar25);
    pPVar10 = this->m_pD;
    if (pFVar21->type == Mesh) {
      CodeRunner::Create(&local_68,&pPVar10->Settings,pPVar10,MinimizeMemory,&pFVar17->Model,
                         (pFVar17->OldParameters).Object,uVar7,0xffffffff,in_stack_00000028,0,Full,
                         &pFVar17->ExternalResourceProvider);
      CodeRunner::StartRun(local_68.Object,SUB81(local_70,0));
      FVar14.ReferenceController = local_68.SharedReferenceCount.ReferenceController;
      pPVar10 = this->m_pD;
      local_58.Elements[0] = (FTaskBase * [1])(FTaskBase * [1])local_70[0];
      local_78 = local_68.Object;
      if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(undefined8 *)TVar18 = 0;
      this_01 = FMemory::Malloc(0x140,0x40);
      if (this_01 != (CodeRunner *)0x0) {
        Tasks::Private::FTaskBase::FTaskBase((FTaskBase *)this_01,2,true);
        this_01->_padding_ =
             (longlong)
             &
             ___7__TTaskWithResult_V__TSharedPtr___CBVFMesh_Private_Mutable_UE___00___Private_Tasks_UE__6B_
        ;
        Tasks::Private::FTaskBase::Init
                  ((FTaskBase *)this_01,L"FSystem::GetMeshResultTask",Inherit,Inline,None);
        this_01->_padding_ =
             (longlong)
             &Tasks::Private::
              TExecutableTaskBase<`UE::Mutable::Private::FSystem::GetMesh'::`2'::<lambda_1>,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,void>
              ::_vftable_;
        *(CodeRunner **)&(this_01->ScheduledStagePerOp).m_otherIndex.field_0x10 = local_78;
        *(Private **)&(this_01->ScheduledStagePerOp).m_otherIndex.field_0x8 = pPVar10;
        *(TReferenceControllerBase<1> **)&(this_01->ScheduledStagePerOp).m_otherIndex.field_0x18 =
             FVar14.ReferenceController;
        if (FVar14.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar14.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar14.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        (this_01->ScheduledStagePerOp).m_otherIndex.field_0x24 = in_stack_00000028;
        *(uint *)&(this_01->ScheduledStagePerOp).m_otherIndex.field_0x20 = uVar7;
        this_01->_padding_ =
             (longlong)
             &Tasks::Private::
              TExecutableTask<`UE::Mutable::Private::FSystem::GetMesh'::`2'::<lambda_1>_>::_vftable_
        ;
        this_00 = this_01;
      }
      Tasks::Private::FTaskBase::
      AddPrerequisites<TStaticArray<UE::Tasks::Private::FTaskBase_*,1,4294967295>,0>
                ((FTaskBase *)this_00,&local_58,true);
      puVar12 = *(undefined8 **)TVar18;
      if (puVar12 != (undefined8 *)0x0) {
        *(undefined8 *)TVar18 = 0;
        LOCK();
        piVar1 = (int *)(puVar12 + 6);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)*puVar12)(puVar12,1);
        }
      }
      *(CodeRunner **)TVar18 = this_00;
      Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_00,0x140);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar14.ReferenceController);
      if (local_70[0] != (FTaskBase *)0x0) {
        LOCK();
        paVar2 = &local_70[0]->RefCount;
        aVar5 = *paVar2;
        *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar5 == (atomic<unsigned_int>)0x1) {
          (**(code **)local_70[0]->_padding_)(local_70[0],1);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
    }
    else {
      if (((pPVar10->WorkingMemoryManager).CurrentInstanceCache.Object == (FProgramCache *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar13 = (code *)swi(3);
        TVar18 = (TTask<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_>)(*pcVar13)();
        return TVar18;
      }
      if (((pPVar10->WorkingMemoryManager).TempImages.ArrayNum != 0) &&
         (bVar15 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_5008110615084922946>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                              ,0x7be,"TempImages.Num() == 0"), bVar15)) {
        pcVar13 = (code *)swi(3);
        TVar18 = (TTask<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_>)(*pcVar13)();
        return TVar18;
      }
      if (((pPVar10->WorkingMemoryManager).TempMeshes.ArrayNum != 0) &&
         (bVar15 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_5008110615084922945>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                              ,0x7bf,"TempMeshes.Num() == 0"), bVar15)) {
        pcVar13 = (code *)swi(3);
        TVar18 = (TTask<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_>)(*pcVar13)();
        return TVar18;
      }
      if (((pPVar10->WorkingMemoryManager).DebugRunnerThreadID == 0xffffffff) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("DebugRunnerThreadID != FThread::InvalidThreadId",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                              ,0x7c3,L""), bVar15)) {
        pcVar13 = (code *)swi(3);
        TVar18 = (TTask<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_>)(*pcVar13)();
        return TVar18;
      }
      if (((pPVar10->WorkingMemoryManager).DebugRunnerID == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("DebugRunnerID != InvalidRunnerId",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                              ,0x7c4,L""), bVar15)) {
        pcVar13 = (code *)swi(3);
        TVar18 = (TTask<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_>)(*pcVar13)();
        return TVar18;
      }
      (pPVar10->WorkingMemoryManager).DebugRunnerThreadID = 0xffffffff;
      (pPVar10->WorkingMemoryManager).DebugRunnerID = 0;
      pPVar10 = this->m_pD;
      pTVar24 = &(pPVar10->WorkingMemoryManager).CurrentInstanceCache;
      local_48 = 0;
      FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar24 != (TSharedPtr<UE::Mutable::Private::FProgramCache,1> *)&local_48) {
        pTVar24->Object = (FProgramCache *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(pPVar10->WorkingMemoryManager).CurrentInstanceCache.SharedReferenceCount,
                   &FStack_40);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_40.ReferenceController);
      pFVar22 = ::operator_new(0x198);
      if (pFVar22 != (FMesh *)0x0) {
        memset(pFVar22,0,0x198);
        this_00 = (CodeRunner *)FMesh::FMesh(pFVar22);
      }
      local_78 = this_00;
      Tasks::
      MakeCompletedTask<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,UE::Mutable::Private::FMesh_*>
                ((FMesh **)TVar18);
    }
    if (bVar26) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FMemScope::~FMemScope(&local_80);
    FLLMScope::~FLLMScope(local_res20);
  }
  return TVar18;
}

// GetMeshInline @ 14ab77720

/* WARNING: Enum "EMeshContentFlags": Some values do not have unique names */

TSharedPtr<UE::Mutable::Private::FMesh_const_,1> * __thiscall
UE::Mutable::Private::FSystem::GetMeshInline
          (FSystem *this,TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *__return_storage_ptr__,
          uint param_1,FHandle *param_2,EMeshContentFlags param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  Private *pPVar2;
  FProgramCache *pFVar3;
  code *pcVar4;
  FMesh *pFVar5;
  bool bVar6;
  FLiveInstance *pFVar7;
  TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *pTVar8;
  FGeneratedImageKey *pFVar9;
  TSharedRef<UE::Mutable::Private::FMesh,1> *pTVar10;
  TSharedPtr<UE::Mutable::Private::FProgramCache,1> *pTVar11;
  bool bVar12;
  FLLMScope local_res20 [2];
  FMemScope local_98;
  TSharedPtr<UE::Mutable::Private::FMesh_const_,1> local_90;
  undefined8 local_80;
  FSharedReferencer<1> local_78;
  undefined8 local_70;
  FSharedReferencer<1> FStack_68;
  FProgramCache *local_60;
  TReferenceControllerBase<1> *pTStack_58;
  TSharedPtr<UE::Mutable::Private::FMesh_const_,1> local_50;
  TSharedRef<UE::Mutable::Private::FMesh,1> local_40;
  TSharedRef<UE::Mutable::Private::FMesh,1> local_30;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name621,L"MutableRuntime");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res20,LLMScope_Name621,false,None,Default,true);
  FMemScope::FMemScope(&local_98,&LLMScope_Name621,true);
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId622,"Mutable_SystemGetMesh",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
               ,0x26e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId622);
  }
  if ((((param_2->Id == 0xffffffff) ||
       ((param_2->WeakRegistry).Object ==
        (TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
         *)0x0)) ||
      (pTVar1 = (param_2->WeakRegistry).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) {
    pTVar10 = MakeShared<UE::Mutable::Private::FMesh,1>(&local_30);
    __return_storage_ptr__->Object = pTVar10->Object;
    pTVar1 = (pTVar10->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  else {
    local_90.Object = (FMesh *)0x0;
    local_90.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar7 = Private::FindLiveInstance(this->m_pD,param_1);
    if ((pFVar7 == (FLiveInstance *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("LiveInstance",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
                           ,0x279,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *)(*pcVar4)();
      return pTVar8;
    }
    pTVar1 = (pFVar7->Cache).SharedReferenceCount.ReferenceController;
    pPVar2 = this->m_pD;
    pFVar3 = (pFVar7->Cache).Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_60 = (pPVar2->WorkingMemoryManager).CurrentInstanceCache.Object;
    pTStack_58 = (pPVar2->WorkingMemoryManager).CurrentInstanceCache.SharedReferenceCount.
                 ReferenceController;
    (pPVar2->WorkingMemoryManager).CurrentInstanceCache.Object = pFVar3;
    (pPVar2->WorkingMemoryManager).CurrentInstanceCache.SharedReferenceCount.ReferenceController =
         pTVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_58);
    pFVar9 = TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
             ::FHandle::GetKey(param_2);
    pTVar8 = Private::BuildMesh(this->m_pD,&local_50,&pFVar7->ExternalResourceProvider,
                                &pFVar7->Model,(pFVar7->OldParameters).Object,pFVar9->Address,
                                param_3);
    if (&local_90 != pTVar8) {
      local_90.Object = pTVar8->Object;
      pTVar8->Object = (FMesh *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_90.SharedReferenceCount,&pTVar8->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.SharedReferenceCount.ReferenceController);
    if (local_90.Object == (FMesh *)0x0) {
      pTVar10 = MakeShared<UE::Mutable::Private::FMesh,1>(&local_40);
      local_78.ReferenceController = (pTVar10->SharedReferenceCount).ReferenceController;
      local_90.Object = pTVar10->Object;
      if (local_78.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_78.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_78.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_80 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_90.SharedReferenceCount,&local_78);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_40.SharedReferenceCount.ReferenceController);
    }
    pFVar5 = local_90.Object;
    pPVar2 = this->m_pD;
    pTVar11 = &(pPVar2->WorkingMemoryManager).CurrentInstanceCache;
    local_70 = 0;
    FStack_68.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar11 != (TSharedPtr<UE::Mutable::Private::FProgramCache,1> *)&local_70) {
      pTVar11->Object = (FProgramCache *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pPVar2->WorkingMemoryManager).CurrentInstanceCache.SharedReferenceCount,
                 &FStack_68);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_68.ReferenceController);
    local_30.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         local_90.SharedReferenceCount.ReferenceController;
    __return_storage_ptr__->Object = pFVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.SharedReferenceCount.ReferenceController);
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(&local_98);
  FLLMScope::~FLLMScope(local_res20);
  return __return_storage_ptr__;
}

// GetParameterRelevancy @ 14ab77d90

void __thiscall
UE::Mutable::Private::FSystem::GetParameterRelevancy
          (FSystem *this,uint param_1,
          TSharedPtr<UE::Mutable::Private::FParameters_const_,1> *param_2,bool *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  Private *pPVar2;
  FProgramCache *pFVar3;
  code *pcVar4;
  bool bVar5;
  FLiveInstance *pFVar6;
  TSharedPtr<UE::Mutable::Private::FProgramCache,1> *pTVar7;
  FLLMScope local_res8 [2];
  FMemScope local_a8;
  undefined8 local_a0;
  FSharedReferencer<1> FStack_98;
  FProgramCache *local_90;
  TReferenceControllerBase<1> *pTStack_88;
  RelevantParameterVisitor local_78;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name938,L"MutableRuntime");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name938,false,None,Default,true);
  FMemScope::FMemScope(&local_a8,&LLMScope_Name938,true);
  pFVar6 = Private::FindLiveInstance(this->m_pD,param_1);
  if (pFVar6 == (FLiveInstance *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("LiveInstance",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
                       ,0x3ae,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar1 = (pFVar6->Cache).SharedReferenceCount.ReferenceController;
  pPVar2 = this->m_pD;
  pFVar3 = (pFVar6->Cache).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_90 = (pPVar2->WorkingMemoryManager).CurrentInstanceCache.Object;
  pTStack_88 = (pPVar2->WorkingMemoryManager).CurrentInstanceCache.SharedReferenceCount.
               ReferenceController;
  (pPVar2->WorkingMemoryManager).CurrentInstanceCache.Object = pFVar3;
  (pPVar2->WorkingMemoryManager).CurrentInstanceCache.SharedReferenceCount.ReferenceController =
       pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_88);
  RelevantParameterVisitor::RelevantParameterVisitor
            (&local_78,this->m_pD,&pFVar6->Model,param_2,param_3);
  pPVar2 = this->m_pD;
  pTVar7 = &(pPVar2->WorkingMemoryManager).CurrentInstanceCache;
  local_a0 = 0;
  FStack_98.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar7 != (TSharedPtr<UE::Mutable::Private::FProgramCache,1> *)&local_a0) {
    pTVar7->Object = (FProgramCache *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pPVar2->WorkingMemoryManager).CurrentInstanceCache.SharedReferenceCount,&FStack_98)
    ;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_98.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_78._padding_);
  local_78._padding_ =
       (longlong)
       &
       ___7__UniqueConstCodeVisitorIterative_UCOVERED_CODE_VISITOR_STATE_Private_Mutable_UE___Private_Mutable_UE__6B_
  ;
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_78._padding_,(int)local_78._padding_);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_78._padding_ !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free((void *)local_78._padding_);
  }
  if ((void *)local_78._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_78._padding_);
  }
  if ((void *)local_78._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_78._padding_);
  }
  FMemScope::~FMemScope(&local_a8);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// GetPrivate @ 14ab78090

Private * __thiscall UE::Mutable::Private::FSystem::GetPrivate(FSystem *this)

{
  return this->m_pD;
}

// NewInstance @ 14ab81cb0

/* WARNING: Removing unreachable block (ram,0x00014ab81db3) */
/* WARNING: Removing unreachable block (ram,0x00014ab81dc2) */
/* WARNING: Removing unreachable block (ram,0x00014ab81dd9) */

uint __thiscall
UE::Mutable::Private::FSystem::NewInstance
          (FSystem *this,TSharedPtr<UE::Mutable::Private::FModel_const_,1> *param_1,
          TSharedPtr<UE::Mutable::Private::FExternalResourceProvider,1> *param_2)

{
  int *piVar1;
  Private *pPVar2;
  TReferenceControllerBase<1> *pTVar3;
  FModel *pFVar4;
  FExternalResourceProvider *pFVar5;
  FLiveInstance *pFVar6;
  code *pcVar7;
  FSharedReferencer<1> FVar8;
  bool bVar9;
  ushort uVar10;
  uint uVar11;
  int iVar12;
  TIntrusiveReferenceController<UE::Mutable::Private::FProgramCache,1> *this_00;
  longlong lVar13;
  uint *puVar14;
  TArray<UE::Mutable::Private::FLiveInstance,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>
  *pTVar15;
  bool bVar16;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  FLiveInstance local_d8;
  undefined8 local_68;
  FSharedReferencer<1> local_60;
  FModel *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  FExternalResourceProvider *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name202,L"MutableRuntime");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name202,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,&LLMScope_Name202,true);
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId203,"Mutable_NewInstance",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
               ,0xcb);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId203);
  }
  pPVar2 = this->m_pD;
  puVar14 = &pPVar2->LastInstanceID;
  *puVar14 = *puVar14 + 1;
  local_d8.InstanceID = pPVar2->LastInstanceID;
  local_d8.ExternalResourceProvider.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_d8.ExternalResourceProvider.Object = (FExternalResourceProvider *)0x0;
  local_d8.Cache.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_d8.UpdatedParameters = 0;
  local_d8.OldParameters.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_d8.OldParameters.Object = (FParameters *)0x0;
  local_d8.Model.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_d8.Model.Object = (FModel *)0x0;
  local_d8.Instance.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_d8.Instance.Object = (FInstance *)0x0;
  local_d8.LODMask = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FVar8.ReferenceController = local_d8.Model.SharedReferenceCount.ReferenceController;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar4 = param_1->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_58 = local_d8.Model.Object;
  pTStack_50 = local_d8.Model.SharedReferenceCount.ReferenceController;
  local_d8.Model.Object = pFVar4;
  local_d8.Model.SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
  local_d8.State = 0xffffffff;
  this_00 = ::operator_new(0x1d8);
  if (this_00 == (TIntrusiveReferenceController<UE::Mutable::Private::FProgramCache,1> *)0x0) {
    local_60.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_d8.Cache.Object = (FProgramCache *)&DAT_00000010;
  }
  else {
    local_60.ReferenceController =
         (TReferenceControllerBase<1> *)
         SharedPointerInternals::
         TIntrusiveReferenceController<UE::Mutable::Private::FProgramCache,1>::
         TIntrusiveReferenceController<UE::Mutable::Private::FProgramCache,1><>(this_00);
    local_d8.Cache.Object =
         (FProgramCache *)
         &((TIntrusiveReferenceController<UE::Mutable::Private::FProgramCache,1> *)
          local_60.ReferenceController)->ObjectStorage;
    if ((local_d8.Cache.Object == (FProgramCache *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return uVar11;
    }
    if ((TIntrusiveReferenceController<UE::Mutable::Private::FProgramCache,1> *)
        local_60.ReferenceController !=
        (TIntrusiveReferenceController<UE::Mutable::Private::FProgramCache,1> *)0x0) {
      LOCK();
      *(int *)&((TIntrusiveReferenceController<UE::Mutable::Private::FProgramCache,1> *)
               local_60.ReferenceController)->_padding_ =
           (int)((TIntrusiveReferenceController<UE::Mutable::Private::FProgramCache,1> *)
                local_60.ReferenceController)->_padding_ + 1;
      UNLOCK();
    }
  }
  FVar8.ReferenceController = local_60.ReferenceController;
  local_68 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&local_d8.Cache.SharedReferenceCount,&local_60);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
  FVar8.ReferenceController =
       local_d8.ExternalResourceProvider.SharedReferenceCount.ReferenceController;
  pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
  pFVar5 = param_2->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48 = local_d8.ExternalResourceProvider.Object;
  pTStack_40 = local_d8.ExternalResourceProvider.SharedReferenceCount.ReferenceController;
  local_d8.ExternalResourceProvider.Object = pFVar5;
  local_d8.ExternalResourceProvider.SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
  pPVar2 = this->m_pD;
  pTVar15 = &(pPVar2->WorkingMemoryManager).LiveInstances;
  pFVar6 = (FLiveInstance *)(pTVar15->AllocatorInstance)._padding_;
  if (((pFVar6 <= &local_d8) &&
      (&local_d8 < pFVar6 + (pPVar2->WorkingMemoryManager).LiveInstances.ArrayMax)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar11 = (*pcVar7)();
    return uVar11;
  }
  iVar12 = (pPVar2->WorkingMemoryManager).LiveInstances.ArrayNum;
  piVar1 = &(pPVar2->WorkingMemoryManager).LiveInstances.ArrayMax;
  if (iVar12 == *piVar1) {
    iVar12 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>::ForAnyElementType>
                       (0x868,&pTVar15->AllocatorInstance,piVar1);
  }
  (pPVar2->WorkingMemoryManager).LiveInstances.ArrayNum = iVar12 + 1;
  puVar14 = (uint *)((longlong)iVar12 * 0x68 + (pTVar15->AllocatorInstance)._padding_);
  *puVar14 = local_d8.InstanceID;
  puVar14[1] = local_d8.State;
  puVar14[2] = local_d8.LODMask;
  *(FInstance **)(puVar14 + 4) = local_d8.Instance.Object;
  *(TReferenceControllerBase<1> **)(puVar14 + 6) =
       local_d8.Instance.SharedReferenceCount.ReferenceController;
  if (local_d8.Instance.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_d8.Instance.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_d8.Instance.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  *(FModel **)(puVar14 + 8) = local_d8.Model.Object;
  *(TReferenceControllerBase<1> **)(puVar14 + 10) =
       local_d8.Model.SharedReferenceCount.ReferenceController;
  if (local_d8.Model.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
  {
    LOCK();
    (local_d8.Model.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_d8.Model.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(FParameters **)(puVar14 + 0xc) = local_d8.OldParameters.Object;
  *(TReferenceControllerBase<1> **)(puVar14 + 0xe) =
       local_d8.OldParameters.SharedReferenceCount.ReferenceController;
  if (local_d8.OldParameters.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_d8.OldParameters.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_d8.OldParameters.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  *(ulong64 *)(puVar14 + 0x10) = local_d8.UpdatedParameters;
  *(FProgramCache **)(puVar14 + 0x12) = local_d8.Cache.Object;
  *(TReferenceControllerBase<1> **)(puVar14 + 0x14) =
       local_d8.Cache.SharedReferenceCount.ReferenceController;
  if (local_d8.Cache.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
  {
    LOCK();
    (local_d8.Cache.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_d8.Cache.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(FExternalResourceProvider **)(puVar14 + 0x16) = local_d8.ExternalResourceProvider.Object;
  *(TReferenceControllerBase<1> **)(puVar14 + 0x18) =
       local_d8.ExternalResourceProvider.SharedReferenceCount.ReferenceController;
  if (local_d8.ExternalResourceProvider.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_d8.ExternalResourceProvider.SharedReferenceCount.ReferenceController)->
    SharedReferenceCount =
         (atomic<int>)
         ((int)(local_d8.ExternalResourceProvider.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  lVar13 = (longlong)(this->m_pD->WorkingMemoryManager).LiveInstances.ArrayNum;
  if ((__GTraceCounterMutableRuntime_LiveInstances.Value != lVar13) &&
     (__GTraceCounterMutableRuntime_LiveInstances.Value = lVar13, -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterMutableRuntime_LiveInstances.CounterId == (atomic<unsigned_int>)0x0) {
      uVar10 = FCountersTrace::OutputInitCounter
                         (__GTraceCounterMutableRuntime_LiveInstances.CounterName,
                          TraceCounterType_Int,
                          __GTraceCounterMutableRuntime_LiveInstances.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterMutableRuntime_LiveInstances.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterMutableRuntime_LiveInstances.CounterId._2_2_ = 0;
        __GTraceCounterMutableRuntime_LiveInstances.CounterId._0_2_ = uVar10;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterMutableRuntime_LiveInstances.CounterId._0_2_,
               __GTraceCounterMutableRuntime_LiveInstances.Value);
  }
  uVar11 = local_d8.InstanceID;
  FLiveInstance::~FLiveInstance(&local_d8);
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return uVar11;
}

// PrepareCache @ 14ab82840

void __thiscall
UE::Mutable::Private::FSystem::Private::PrepareCache(Private *this,FModel *param_1,int param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  FProgramCache *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  Private *pPVar6;
  bool bVar7;
  int iVar8;
  FOpExecutionData *pFVar9;
  uint uVar10;
  uint uVar11;
  undefined2 *puVar12;
  uint *puVar13;
  TSet<TTuple<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
  *this_00;
  longlong lVar14;
  CodeContainer<UE::Mutable::Private::FProgramCache::FOpExecutionData> *pCVar15;
  bool bVar16;
  undefined1 local_e8 [4];
  FCacheAddress local_e4;
  CodeContainer<UE::Mutable::Private::FProgramCache::FOpExecutionData> *local_d8;
  CodeContainer<UE::Mutable::Private::FProgramCache::FOpExecutionData> *local_d0;
  uint local_c8;
  longlong *local_c0;
  TConstSetBitIterator<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
  TStack_b8;
  TSet<TTuple<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
  *pTStack_98;
  TSet<TTuple<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
  *local_90;
  undefined2 local_88;
  undefined4 local_78;
  Private *local_70;
  TIterator local_68;
  
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1293,"Mutable_PrepareCache",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
               ,0x50d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1293);
  }
  local_70 = FModel::GetPrivate(param_1);
  uVar11 = (local_70->Program).OpAddress.ArrayNum;
  if (((this->WorkingMemoryManager).CurrentInstanceCache.Object == (FProgramCache *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FProgramCache::Init((this->WorkingMemoryManager).CurrentInstanceCache.Object,uVar11);
  if (((this->WorkingMemoryManager).CurrentInstanceCache.Object == (FProgramCache *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3 = (this->WorkingMemoryManager).CurrentInstanceCache.Object;
  pCVar15 = &pFVar3->OpExecutionData;
  uVar11 = 0;
  local_c8 = 0;
  this_00 = (TSet<TTuple<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
             *)&(pFVar3->OpExecutionData).m_otherIndex;
  local_d8 = pCVar15;
  local_d0 = pCVar15;
  TSet<TTuple<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
  ::TIterator::TIterator(&local_68,this_00);
  local_88 = 0;
  local_c0 = (longlong *)local_68._padding_;
  TStack_b8._padding_ = local_68._padding_;
  TStack_b8.Array =
       (TBitArray<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
        *)local_68._padding_;
  TStack_b8.UnvisitedBitMask = (undefined4)local_68._padding_;
  TStack_b8.CurrentBitIndex = local_68._padding_._4_4_;
  TStack_b8._24_8_ = local_68._padding_;
  pTStack_98 = local_68.Set;
  local_90 = this_00;
  do {
    pPVar6 = local_70;
    if (((int)uVar11 < 0) || ((pCVar15->m_index0).ArrayNum <= (int)uVar11)) {
      if ((TStack_b8.Array)->NumBits <= TStack_b8.CurrentBitIndex) {
        lVar14 = (longlong)param_2;
        if ((-1 < param_2) && (param_2 < (local_70->Program).States.ArrayNum)) {
          if ((param_2 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar4 = (pPVar6->Program).States.AllocatorInstance.Data;
          puVar13 = *(uint **)(pFVar4 + lVar14 * 0x48 + 0x28);
          iVar8 = *(int *)(pFVar4 + lVar14 * 0x48 + 0x30);
          puVar1 = puVar13 + iVar8;
          while( true ) {
            if (*(int *)(pFVar4 + lVar14 * 0x48 + 0x30) != iVar8) {
              local_e8[0] = 0;
              `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_e8);
            }
            this_00 = local_90;
            if (puVar13 == puVar1) break;
            uVar11 = *puVar13;
            if (((this->WorkingMemoryManager).CurrentInstanceCache.Object == (FProgramCache *)0x0)
               && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar3 = (this->WorkingMemoryManager).CurrentInstanceCache.Object;
            if (uVar11 != 0) {
              if (((uint)(pFVar3->OpExecutionData).m_index0.ArrayNum <= uVar11) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("at < OpExecutionData.size_code()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\SystemPrivate.h"
                                     ,0x481,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              local_e4.ExecutionIndex = 0;
              local_e4.ExecutionOptions = '\0';
              local_e4.Type = Full;
              local_e4.At = uVar11;
              pFVar9 = CodeContainer<UE::Mutable::Private::FProgramCache::FOpExecutionData>::
                       operator[](&pFVar3->OpExecutionData,&local_e4);
              pFVar9->IsCacheLocked = '\x01';
            }
            puVar13 = puVar13 + 1;
          }
        }
        iVar8 = 1;
        if (((char)local_88 != '\0') && (local_88._1_1_ != '\0')) {
          uVar11 = *(int *)&(this_00->Elements).field_0x10 - *(int *)&(this_00->Elements).field_0x44
          ;
          if (3 < uVar11) {
            uVar2 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
            lVar14 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
              }
            }
            iVar8 = 1 << ((byte)lVar14 & 0x1f);
          }
          if (((0 < (int)uVar11) && (this_00->HashSize < iVar8)) || (iVar8 < this_00->HashSize)) {
            this_00->HashSize = iVar8;
            TSet<TTuple<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
            ::Rehash(this_00);
          }
        }
        if (bVar16) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        return;
      }
      if ((-1 < (int)uVar11) && (iVar8 = (pCVar15->m_index0).ArrayNum, (int)uVar11 < iVar8))
      goto LAB_14ab829b3;
      puVar12 = (undefined2 *)(*local_c0 + ((longlong)TStack_b8.CurrentBitIndex * 3 + 1) * 8);
    }
    else {
      iVar8 = (pCVar15->m_index0).ArrayNum;
LAB_14ab829b3:
      uVar10 = 0;
      if ((int)uVar11 < iVar8) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      puVar12 = (undefined2 *)
                ((pCVar15->m_index0).AllocatorInstance._padding_ + (longlong)(int)uVar11 * 8);
    }
    *puVar12 = 0;
    if (((int)uVar11 < 0) || (iVar8 = (pCVar15->m_index0).ArrayNum, iVar8 <= (int)uVar11)) {
      lVar14 = *local_c0 + ((longlong)TStack_b8.CurrentBitIndex * 3 + 1) * 8;
    }
    else {
      uVar10 = 0;
      if ((int)uVar11 < iVar8) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar14 = (pCVar15->m_index0).AllocatorInstance._padding_ + (longlong)(int)uVar11 * 8;
    }
    *(byte *)(lVar14 + 2) = *(byte *)(lVar14 + 2) & 0xfb;
    if (((int)uVar11 < 0) || ((pCVar15->m_index0).ArrayNum <= (int)uVar11)) {
      TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
      TConstSetBitIterator<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
      ::FindFirstSetBit(&TStack_b8);
      this_00 = local_90;
      pCVar15 = local_d0;
    }
    else {
      local_c8 = uVar11 + 1;
    }
    uVar11 = local_c8;
    if (((char)local_88 != '\0') && (local_88._1_1_ != '\0')) {
      uVar10 = *(int *)&(this_00->Elements).field_0x10 - *(int *)&(this_00->Elements).field_0x44;
      iVar8 = 1;
      if (3 < uVar10) {
        uVar2 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
        lVar14 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_78 = (undefined4)lVar14;
        iVar8 = 1 << ((byte)lVar14 & 0x1f);
      }
      if (((0 < (int)uVar10) && (this_00->HashSize < iVar8)) || (iVar8 < this_00->HashSize)) {
        this_00->HashSize = iVar8;
        TSet<TTuple<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
        ::Rehash(this_00);
      }
    }
  } while( true );
}

// ReleaseInstance @ 14ab84150

void __thiscall UE::Mutable::Private::FSystem::ReleaseInstance(FSystem *this,uint param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined1 *puVar2;
  TReferenceControllerBase<1> *pTVar3;
  ulonglong uVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  ushort uVar8;
  uint uVar9;
  atomic<int> *paVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  longlong lVar13;
  uint uVar14;
  Private *pPVar15;
  uint *puVar16;
  longlong lVar17;
  ulonglong *puVar18;
  int iVar19;
  longlong lVar20;
  TArray<UE::Mutable::Private::FLiveInstance,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>
  *this_00;
  TMap<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>_>
  *pTVar21;
  bool bVar22;
  undefined1 local_res20 [8];
  undefined1 local_78 [4];
  FLLMScope local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  longlong local_60;
  uint *local_58;
  FMemScope local_50 [2];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name828,L"MutableRuntime");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(&local_74,LLMScope_Name828,false,None,Default,true);
  FMemScope::FMemScope(local_50,&LLMScope_Name828,true);
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId829,"Mutable_ReleaseInstance",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
               ,0x33d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId829);
  }
  pPVar15 = this->m_pD;
  local_70 = 0;
  if (0 < (pPVar15->WorkingMemoryManager).LiveInstances.ArrayNum) {
    lVar13 = 0;
    do {
      uVar14 = local_70;
      local_68 = ~local_70 >> 0x1f;
      uVar9 = 0;
      if ((int)local_70 < (pPVar15->WorkingMemoryManager).LiveInstances.ArrayNum) {
        uVar9 = local_68;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      puVar16 = (uint *)((pPVar15->WorkingMemoryManager).LiveInstances.AllocatorInstance._padding_ +
                        lVar13);
      local_58 = puVar16;
      if (*puVar16 == param_1) {
        if ((*(longlong *)(puVar16 + 0x12) == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar13 = *(longlong *)(puVar16 + 0x12);
        local_6c = *(uint *)(lVar13 + 0x100);
        uVar11 = (ulonglong)(int)local_6c;
        lVar20 = *(longlong *)(lVar13 + 0xf0);
        lVar17 = uVar11 * 0x18 + lVar20;
        local_60 = lVar17;
        while( true ) {
          if (*(int *)(lVar13 + 0x100) != (int)uVar11) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<UE::Mutable::Private::FProgramCache::TResourceResult<UE::Mutable::Private::FImage>,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_res20);
          }
          puVar16 = local_58;
          if (lVar20 == lVar17) break;
          uVar11 = *(ulonglong *)(lVar20 + 8);
          if (uVar11 != 0) {
            pPVar15 = this->m_pD;
            pTVar1 = *(TReferenceControllerBase<1> **)(lVar20 + 0x10);
            pTVar21 = &(pPVar15->WorkingMemoryManager).CacheResources;
            if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
              paVar10 = (atomic<int> *)&DAT_00000008;
            }
            else {
              paVar10 = &pTVar1->SharedReferenceCount;
              LOCK();
              *paVar10 = (atomic<int>)((int)*paVar10 + 1);
              UNLOCK();
              LOCK();
              *paVar10 = (atomic<int>)((int)*paVar10 + 1);
              UNLOCK();
            }
            if (*(int *)&(pPVar15->WorkingMemoryManager).CacheResources.field_0x10 !=
                *(int *)&(pPVar15->WorkingMemoryManager).CacheResources.field_0x44) {
              if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                *paVar10 = (atomic<int>)((int)*paVar10 + 1);
                UNLOCK();
              }
              uVar14 = ((uint)(uVar11 >> 0x14) & 0xffff ^ (uint)(uVar11 >> 4)) * -0x7a143595;
              uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar1);
              puVar2 = *(undefined1 **)&(pPVar15->WorkingMemoryManager).CacheResources.field_0x50;
              puVar12 = &(pPVar15->WorkingMemoryManager).CacheResources.field_0x48;
              if (puVar2 != (undefined1 *)0x0) {
                puVar12 = puVar2;
              }
              iVar19 = *(int *)(puVar12 +
                               ((longlong)
                                *(int *)&(pPVar15->WorkingMemoryManager).CacheResources.field_0x60 -
                                1U & (longlong)(int)(uVar14 >> 0x10 ^ uVar14)) * 4);
              while (lVar17 = local_60, iVar19 != -1) {
                puVar18 = (ulonglong *)((longlong)iVar19 * 0x20 + *(longlong *)&pTVar21->field_0x0);
                if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar1->SharedReferenceCount =
                       (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
                  UNLOCK();
                }
                pTVar3 = (TReferenceControllerBase<1> *)puVar18[1];
                uVar4 = *puVar18;
                if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar3->SharedReferenceCount =
                       (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                  UNLOCK();
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar3);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar1);
                if (uVar4 == uVar11) {
                  TSet<TTuple<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
                  ::RemoveByIndex((TSet<TTuple<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
                                   *)pTVar21,iVar19);
                  lVar17 = local_60;
                  break;
                }
                iVar19 = (int)puVar18[3];
              }
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar1);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar1);
          }
          uVar11 = (ulonglong)local_6c;
          lVar20 = lVar20 + 0x18;
        }
        if ((*(longlong *)(local_58 + 0x12) == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar13 = *(longlong *)(puVar16 + 0x12);
        local_6c = *(uint *)(lVar13 + 0x118);
        uVar11 = (ulonglong)(int)local_6c;
        lVar20 = *(longlong *)(lVar13 + 0x108);
        lVar17 = uVar11 * 0x18 + lVar20;
        local_60 = lVar17;
        while( true ) {
          if (*(int *)(lVar13 + 0x118) != (int)uVar11) {
            local_78[0] = 0;
            `TCheckedPointerIterator<UE::Mutable::Private::FProgramCache::TResourceResult<UE::Mutable::Private::FMesh>,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_78);
          }
          uVar14 = local_70;
          if (lVar20 == lVar17) break;
          uVar11 = *(ulonglong *)(lVar20 + 8);
          if (uVar11 != 0) {
            pPVar15 = this->m_pD;
            pTVar1 = *(TReferenceControllerBase<1> **)(lVar20 + 0x10);
            pTVar21 = &(pPVar15->WorkingMemoryManager).CacheResources;
            if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
              paVar10 = (atomic<int> *)&DAT_00000008;
            }
            else {
              paVar10 = &pTVar1->SharedReferenceCount;
              LOCK();
              *paVar10 = (atomic<int>)((int)*paVar10 + 1);
              UNLOCK();
              LOCK();
              *paVar10 = (atomic<int>)((int)*paVar10 + 1);
              UNLOCK();
            }
            if (*(int *)&(pPVar15->WorkingMemoryManager).CacheResources.field_0x10 !=
                *(int *)&(pPVar15->WorkingMemoryManager).CacheResources.field_0x44) {
              if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                *paVar10 = (atomic<int>)((int)*paVar10 + 1);
                UNLOCK();
              }
              uVar14 = ((uint)(uVar11 >> 0x14) & 0xffff ^ (uint)(uVar11 >> 4)) * -0x7a143595;
              uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar1);
              puVar2 = *(undefined1 **)&(pPVar15->WorkingMemoryManager).CacheResources.field_0x50;
              puVar12 = &(pPVar15->WorkingMemoryManager).CacheResources.field_0x48;
              if (puVar2 != (undefined1 *)0x0) {
                puVar12 = puVar2;
              }
              iVar19 = *(int *)(puVar12 +
                               ((longlong)
                                *(int *)&(pPVar15->WorkingMemoryManager).CacheResources.field_0x60 -
                                1U & (longlong)(int)(uVar14 >> 0x10 ^ uVar14)) * 4);
              while (lVar17 = local_60, iVar19 != -1) {
                puVar18 = (ulonglong *)((longlong)iVar19 * 0x20 + *(longlong *)&pTVar21->field_0x0);
                if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar1->SharedReferenceCount =
                       (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
                  UNLOCK();
                }
                pTVar3 = (TReferenceControllerBase<1> *)puVar18[1];
                uVar4 = *puVar18;
                if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar3->SharedReferenceCount =
                       (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                  UNLOCK();
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar3);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar1);
                if (uVar4 == uVar11) {
                  TSet<TTuple<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
                  ::RemoveByIndex((TSet<TTuple<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
                                   *)pTVar21,iVar19);
                  lVar17 = local_60;
                  break;
                }
                iVar19 = (int)puVar18[3];
              }
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar1);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar1);
          }
          uVar11 = (ulonglong)local_6c;
          lVar20 = lVar20 + 0x18;
        }
        pPVar15 = this->m_pD;
        uVar9 = 0;
        if ((int)local_70 < (pPVar15->WorkingMemoryManager).LiveInstances.ArrayNum) {
          uVar9 = local_68;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        TArray<UE::Mutable::Private::FLiveInstance,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>
        ::RemoveAtSwapImpl(&(pPVar15->WorkingMemoryManager).LiveInstances,uVar14);
        Core::Private::
        ReallocShrink<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>::ForAnyElementType>
                  (0x68,8,&(pPVar15->WorkingMemoryManager).LiveInstances.AllocatorInstance,
                   (pPVar15->WorkingMemoryManager).LiveInstances.ArrayNum,
                   &(pPVar15->WorkingMemoryManager).LiveInstances.ArrayMax);
        break;
      }
      pPVar15 = this->m_pD;
      local_70 = uVar14 + 1;
      lVar13 = lVar13 + 0x68;
    } while ((int)local_70 < (pPVar15->WorkingMemoryManager).LiveInstances.ArrayNum);
  }
  pPVar15 = this->m_pD;
  uVar14 = 0;
  this_00 = &(pPVar15->WorkingMemoryManager).LiveInstances;
  bVar6 = false;
  iVar19 = (pPVar15->WorkingMemoryManager).LiveInstances.ArrayNum;
  if (0 < iVar19) {
    lVar13 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar14 < iVar19) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(uint *)((this_00->AllocatorInstance)._padding_ + lVar13) == param_1) {
        bVar6 = true;
        uVar9 = 0;
        if ((int)uVar14 < (pPVar15->WorkingMemoryManager).LiveInstances.ArrayNum) {
          uVar9 = ~uVar14 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        TArray<UE::Mutable::Private::FLiveInstance,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>
        ::RemoveAtSwapImpl(this_00,uVar14);
      }
      else {
        uVar14 = uVar14 + 1;
        lVar13 = lVar13 + 0x68;
      }
      iVar19 = (pPVar15->WorkingMemoryManager).LiveInstances.ArrayNum;
    } while ((int)uVar14 < iVar19);
    if (bVar6) {
      Core::Private::
      ReallocShrink<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>::ForAnyElementType>
                (0x68,8,&this_00->AllocatorInstance,iVar19,
                 &(pPVar15->WorkingMemoryManager).LiveInstances.ArrayMax);
    }
  }
  lVar13 = (longlong)(this->m_pD->WorkingMemoryManager).LiveInstances.ArrayNum;
  if ((__GTraceCounterMutableRuntime_LiveInstances.Value != lVar13) &&
     (__GTraceCounterMutableRuntime_LiveInstances.Value = lVar13, -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterMutableRuntime_LiveInstances.CounterId == (atomic<unsigned_int>)0x0) {
      uVar8 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterMutableRuntime_LiveInstances.CounterName,
                         TraceCounterType_Int,
                         __GTraceCounterMutableRuntime_LiveInstances.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterMutableRuntime_LiveInstances.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterMutableRuntime_LiveInstances.CounterId._2_2_ = 0;
        __GTraceCounterMutableRuntime_LiveInstances.CounterId._0_2_ = uVar8;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterMutableRuntime_LiveInstances.CounterId._0_2_,
               __GTraceCounterMutableRuntime_LiveInstances.Value);
  }
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_50);
  FLLMScope::~FLLMScope(&local_74);
  return;
}

// ReuseInstance @ 14ab84e90

void __thiscall
UE::Mutable::Private::FSystem::ReuseInstance
          (FSystem *this,uint param_1,
          TSharedPtr<UE::Mutable::Private::FExternalResourceProvider,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FExternalResourceProvider *pFVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FLiveInstance *pFVar6;
  
  pFVar6 = Private::FindLiveInstance(this->m_pD,param_1);
  if (pFVar6 == (FLiveInstance *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("LiveInstance",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
                       ,0xdf,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  pFVar2 = param_2->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (pFVar6->ExternalResourceProvider).SharedReferenceCount.ReferenceController;
  (pFVar6->ExternalResourceProvider).Object = pFVar2;
  (pFVar6->ExternalResourceProvider).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// RunCode @ 14ab84f10

void __thiscall
UE::Mutable::Private::FSystem::Private::RunCode
          (Private *this,TSharedPtr<UE::Mutable::Private::FExternalResourceProvider,1> *param_1,
          TSharedPtr<UE::Mutable::Private::FModel_const_,1> *param_2,FParameters *param_3,
          uint param_4,uint param_5,uchar param_6,int param_7)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *local_res8 [4];
  TSharedRef<UE::Mutable::Private::CodeRunner,1> local_18;
  
  CodeRunner::Create(&local_18,&this->Settings,this,MinimizeMemory,param_2,param_3,param_4,param_5,
                     param_6,param_7,Full,param_1);
  CodeRunner::StartRun(local_18.Object,SUB81(local_res8,0));
  if (((local_res8[0] != (undefined8 *)0x0) && (*(char *)(local_res8[0] + 0x1a) == '\0')) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("RunnerCompletionEvent.IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
                         ,0x429,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this->bUnrecoverableError = (local_18.Object)->bUnrecoverableError;
  if (local_res8[0] != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_res8[0] + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_res8[0])(local_res8[0],1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// SetImagePixelConversionOverride @ 14ab88040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Mutable::Private::FSystem::SetImagePixelConversionOverride
          (FSystem *this,
          TFunction<void___cdecl(bool_&,int,UE::Mutable::Private::FImage_*,UE::Mutable::Private::FImage_const_*,int)>
          *param_1)

{
  Private *pPVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined1 auStackY_88 [32];
  FLLMScope local_58 [2];
  FMemScope local_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_88;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name193,L"MutableRuntime");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_58,LLMScope_Name193,false,None,Default,true);
  FMemScope::FMemScope(&local_50,&LLMScope_Name193,true);
  local_48 = *(longlong *)param_1;
  pPVar1 = this->m_pD;
  uStack_20 = (longlong *)0x0;
  if (local_48 != 0) {
    puVar10 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar10 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar10)(puVar10,&local_38);
  }
  lVar8 = *(longlong *)&pPVar1->ImagePixelFormatOverride;
  uVar9 = *(undefined8 *)&(pPVar1->ImagePixelFormatOverride).field_0x8;
  uVar2 = *(undefined4 *)&(pPVar1->ImagePixelFormatOverride).field_0x10;
  uVar3 = *(undefined4 *)&(pPVar1->ImagePixelFormatOverride).field_0x14;
  uVar4 = *(undefined4 *)&(pPVar1->ImagePixelFormatOverride).field_0x18;
  uVar5 = *(undefined4 *)&(pPVar1->ImagePixelFormatOverride).field_0x1c;
  uVar6 = *(undefined8 *)&(pPVar1->ImagePixelFormatOverride).field_0x20;
  plVar7 = *(longlong **)&(pPVar1->ImagePixelFormatOverride).field_0x28;
  *(longlong *)&pPVar1->ImagePixelFormatOverride = local_48;
  *(undefined8 *)&(pPVar1->ImagePixelFormatOverride).field_0x8 = uStack_40;
  *(undefined4 *)&(pPVar1->ImagePixelFormatOverride).field_0x10 = (undefined4)local_38;
  *(undefined4 *)&(pPVar1->ImagePixelFormatOverride).field_0x14 = local_38._4_4_;
  *(undefined4 *)&(pPVar1->ImagePixelFormatOverride).field_0x18 = uStack_30;
  *(undefined4 *)&(pPVar1->ImagePixelFormatOverride).field_0x1c = uStack_2c;
  *(undefined4 *)&(pPVar1->ImagePixelFormatOverride).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(pPVar1->ImagePixelFormatOverride).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(pPVar1->ImagePixelFormatOverride).field_0x28 = (undefined4)uStack_20;
  *(undefined4 *)&(pPVar1->ImagePixelFormatOverride).field_0x2c = uStack_20._4_4_;
  local_38._0_4_ = uVar2;
  local_38._4_4_ = uVar3;
  uStack_30 = uVar4;
  uStack_2c = uVar5;
  local_28 = uVar6;
  uStack_20 = plVar7;
  local_48 = lVar8;
  uStack_40 = uVar9;
  if (lVar8 != 0) {
    plVar11 = &local_38;
    if (plVar7 != (longlong *)0x0) {
      plVar11 = plVar7;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  FMemScope::~FMemScope(&local_50);
  FLLMScope::~FLLMScope(local_58);
  return;
}

// SetStreamingInterface @ 14ab8b040

void __thiscall
UE::Mutable::Private::FSystem::SetStreamingInterface
          (FSystem *this,TSharedPtr<UE::Mutable::Private::FModelReader,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  Private *pPVar2;
  FModelReader *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name143,L"MutableRuntime");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name143,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,&LLMScope_Name143,true);
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pPVar2 = this->m_pD;
  pFVar3 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (pPVar2->StreamInterface).SharedReferenceCount.ReferenceController;
  (pPVar2->StreamInterface).Object = pFVar3;
  (pPVar2->StreamInterface).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// SetWorkingMemoryBytes @ 14ab8be90

void __thiscall UE::Mutable::Private::FSystem::SetWorkingMemoryBytes(FSystem *this,ulong64 param_1)

{
  bool bVar1;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name152,L"MutableRuntime");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name152,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,&LLMScope_Name152,true);
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId153,"Mutable_SetWorkingMemoryBytes",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\System.cpp"
               ,0x99);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId153);
  }
  (this->m_pD->WorkingMemoryManager).BudgetBytes = param_1;
  FWorkingMemoryManager::EnsureBudgetBelow(&this->m_pD->WorkingMemoryManager,0);
  Private::UpdateStats(this->m_pD);
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// UpdateStats @ 14ab8d970

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::Mutable::Private::FSystem::Private::UpdateStats(Private *this)

{
  longlong lVar1;
  FName FVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_MutableWorkingMemory> FVar4;
  FThreadStats *pFVar5;
  FThreadStatsPool *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_MutableWorkingMemoryExcess> FVar7;
  long64 lVar8;
  FThreadSafeStaticStat<FStat_STAT_MutableCurrentMemory> FVar9;
  uchar auVar10 [8];
  FName local_res8;
  FStatMessage local_38;
  
  lVar1 = (this->WorkingMemoryManager).BudgetBytes;
  FVar4 = StatPtr_STAT_MutableWorkingMemory;
  if (StatPtr_STAT_MutableWorkingMemory ==
      (FThreadSafeStaticStat<FStat_STAT_MutableWorkingMemory>)0x0) {
    pFVar3 = ::FName::FName(&local_res8,"STAT_MutableWorkingMemory");
    FVar4 = (FThreadSafeStaticStat<FStat_STAT_MutableWorkingMemory>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MutableWorkingMemory,*pFVar3,
                       L"Working Memory","STATGROUP_MutableCore","STATCAT_Advanced",L"MutableCore",
                       true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar2 = *(FName *)FVar4;
  local_res8 = FVar2;
  if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar5 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar5 == (FThreadStats *)0x0) {
      pFVar6 = FThreadStatsPool::Get();
      pFVar5 = FThreadStatsPool::GetFromPool(pFVar6);
    }
    local_38.NameAndInfo.Number = FVar2.Number & 0xffff8fff | 0x8000;
    auVar10 = (uchar  [8])
              (longlong)(int)((longlong)((ulonglong)((uint)(lVar1 >> 0x3f) & 0x3ff) + lVar1) >> 10);
    local_res8 = FVar2;
    local_38.StatData.Pad = auVar10;
    local_38.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar5,&local_38);
    FStatsTrace::Set(&local_res8,(long64)auVar10);
    if (pFVar5->ScopeCount == 0) {
      FThreadStats::Flush(pFVar5,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar5,false,false);
    }
  }
  lVar1 = (this->WorkingMemoryManager).BudgetExcessBytes;
  FVar7 = StatPtr_STAT_MutableWorkingMemoryExcess;
  if (StatPtr_STAT_MutableWorkingMemoryExcess ==
      (FThreadSafeStaticStat<FStat_STAT_MutableWorkingMemoryExcess>)0x0) {
    pFVar3 = ::FName::FName(&local_res8,"STAT_MutableWorkingMemoryExcess");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_MutableWorkingMemoryExcess>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MutableWorkingMemoryExcess,*pFVar3
                       ,L"Working Memory Excess","STATGROUP_MutableCore","STATCAT_Advanced",
                       L"MutableCore",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar2 = *(FName *)FVar7;
  local_res8 = FVar2;
  if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar5 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar5 == (FThreadStats *)0x0) {
      pFVar6 = FThreadStatsPool::Get();
      pFVar5 = FThreadStatsPool::GetFromPool(pFVar6);
    }
    local_38.NameAndInfo.Number = FVar2.Number & 0xffff8fff | 0x8000;
    auVar10 = (uchar  [8])
              (longlong)(int)((longlong)((ulonglong)((uint)(lVar1 >> 0x3f) & 0x3ff) + lVar1) >> 10);
    local_res8 = FVar2;
    local_38.StatData.Pad = auVar10;
    local_38.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar5,&local_38);
    FStatsTrace::Set(&local_res8,(long64)auVar10);
    if (pFVar5->ScopeCount == 0) {
      FThreadStats::Flush(pFVar5,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar5,false,false);
    }
  }
  lVar8 = FWorkingMemoryManager::GetCurrentMemoryBytes(&this->WorkingMemoryManager);
  FVar9 = StatPtr_STAT_MutableCurrentMemory;
  if (StatPtr_STAT_MutableCurrentMemory ==
      (FThreadSafeStaticStat<FStat_STAT_MutableCurrentMemory>)0x0) {
    pFVar3 = ::FName::FName(&local_res8,"STAT_MutableCurrentMemory");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_MutableCurrentMemory>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MutableCurrentMemory,*pFVar3,
                       L"Current Memory","STATGROUP_MutableCore","STATCAT_Advanced",L"MutableCore",
                       true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar2 = *(FName *)FVar9;
  if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    local_res8 = FVar2;
    pFVar5 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar5 == (FThreadStats *)0x0) {
      pFVar6 = FThreadStatsPool::Get();
      pFVar5 = FThreadStatsPool::GetFromPool(pFVar6);
    }
    local_38.NameAndInfo.Number = FVar2.Number & 0xffff8fff | 0x8000;
    auVar10 = (uchar  [8])
              (longlong)(int)((longlong)((ulonglong)((uint)(lVar8 >> 0x3f) & 0x3ff) + lVar8) >> 10);
    local_res8 = FVar2;
    local_38.StatData.Pad = auVar10;
    local_38.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar5,&local_38);
    FStatsTrace::Set(&local_res8,(long64)auVar10);
    if (pFVar5->ScopeCount == 0) {
      FThreadStats::Flush(pFVar5,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar5,false,false);
    }
  }
  return;
}

