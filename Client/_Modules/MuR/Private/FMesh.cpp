// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 70

// ~FMesh @ 14a9783e0

void __thiscall UE::Mutable::Private::FMesh::~FMesh(FMesh *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  atomic<__int64> *paVar3;
  
  pFVar1 = (this->BoneMap).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  paVar3 = MemoryCounters::FMeshMemoryCounter::Get();
  LOCK();
  *paVar3 = (atomic<__int64>)((longlong)*paVar3 - (this->BonePoses).AllocatorInstance.AllocSize);
  UNLOCK();
  FGlobalMemoryCounter::Update(-(this->BonePoses).AllocatorInstance.AllocSize);
  pvVar2 = (void *)(this->BonePoses).AllocatorInstance._padding_;
  (this->BonePoses).AllocatorInstance.AllocSize = 0;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pFVar1 = (this->StreamedResources).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>((FString *)(this->Tags).AllocatorInstance.Data,(this->Tags).ArrayNum);
  pFVar1 = (this->Tags).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<UE::Mutable::Private::FLayout_const_,1>,int>
            ((TSharedPtr<UE::Mutable::Private::FLayout_const_,1> *)
             (this->Layouts).AllocatorInstance.Data,(this->Layouts).ArrayNum);
  pFVar1 = (this->Layouts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<UE::Mutable::Private::FPhysicsBody_const_,1>,int>
            ((TSharedPtr<UE::Mutable::Private::FPhysicsBody_const_,1> *)
             (this->AdditionalPhysicsBodies).AllocatorInstance.Data,
             (this->AdditionalPhysicsBodies).ArrayNum);
  pFVar1 = (this->AdditionalPhysicsBodies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PhysicsBody).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Skeleton).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->SkeletonIDs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Morph).BatchesPerMorph.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Morph).BatchStartOffsetPerMorph.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Morph).MinimumValuePerMorph.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Morph).MaximumValuePerMorph.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Morph).Names.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::Mutable::Private::FMeshSurface,int>
            ((FMeshSurface *)(this->Surfaces).AllocatorInstance.Data,(this->Surfaces).ArrayNum);
  pFVar1 = (this->Surfaces).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TTuple<enum_UE::Mutable::Private::EMeshBufferType,UE::Mutable::Private::FMeshBufferSet>,int>
            ((TTuple<UE::Mutable::Private::EMeshBufferType,UE::Mutable::Private::FMeshBufferSet> *)
             (this->AdditionalBuffers).AllocatorInstance.Data,(this->AdditionalBuffers).ArrayNum);
  pFVar1 = (this->AdditionalBuffers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MorphDataBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::Mutable::Private::FMeshBuffer,int>
            ((FMeshBuffer *)(this->IndexBuffers).Buffers.AllocatorInstance.Data,
             (this->IndexBuffers).Buffers.ArrayNum);
  pFVar1 = (this->IndexBuffers).Buffers.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::Mutable::Private::FMeshBuffer,int>
            ((FMeshBuffer *)(this->VertexBuffers).Buffers.AllocatorInstance.Data,
             (this->VertexBuffers).Buffers.ArrayNum);
  pFVar1 = (this->VertexBuffers).Buffers.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ReferencedMorph).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,int>
            ((TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
              *)(this->SkeletalMeshes).AllocatorInstance.Data,(this->SkeletalMeshes).ArrayNum);
  pFVar1 = (this->SkeletalMeshes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FResource_Private_Mutable_UE__6B_;
  return;
}

// AddAdditionalPhysicsBody @ 14aab9a90

int __thiscall
UE::Mutable::Private::FMesh::AddAdditionalPhysicsBody
          (FMesh *this,TSharedPtr<UE::Mutable::Private::FPhysicsBody_const_,1> *param_1)

{
  int *piVar1;
  TArray<TSharedPtr<UE::Mutable::Private::FPhysicsBody_const_,1>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  TSharedPtr<UE::Mutable::Private::FPhysicsBody_const_,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  
  pTVar2 = &this->AdditionalPhysicsBodies;
  pTVar3 = (TSharedPtr<UE::Mutable::Private::FPhysicsBody_const_,1> *)
           (pTVar2->AllocatorInstance).Data;
  if ((pTVar3 <= param_1) && (param_1 < pTVar3 + (this->AdditionalPhysicsBodies).ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      iVar7 = (*pcVar5)();
      return iVar7;
    }
  }
  iVar7 = (this->AdditionalPhysicsBodies).ArrayNum;
  piVar1 = &(this->AdditionalPhysicsBodies).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->AdditionalPhysicsBodies).ArrayNum = iVar7 + 1;
  pFVar8 = (pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
  *(FPhysicsBody **)pFVar8 = param_1->Object;
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar8 + 8) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return iVar7;
}

// AddLayout @ 14aaba600

void __thiscall
UE::Mutable::Private::FMesh::AddLayout
          (FMesh *this,TSharedPtr<UE::Mutable::Private::FLayout_const_,1> *param_1)

{
  int *piVar1;
  TSharedPtr<UE::Mutable::Private::FLayout_const_,1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  TArray<TSharedPtr<UE::Mutable::Private::FLayout_const_,1>,TSizedDefaultAllocator<32>_> *pTVar8;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name487,L"MutableRuntime");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name487,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,&LLMScope_Name487,true);
  pTVar8 = &this->Layouts;
  pTVar2 = (TSharedPtr<UE::Mutable::Private::FLayout_const_,1> *)(pTVar8->AllocatorInstance).Data;
  if ((pTVar2 <= param_1) && (param_1 < pTVar2 + (this->Layouts).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->Layouts).ArrayNum;
  piVar1 = &(this->Layouts).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar8->AllocatorInstance,piVar1);
  }
  (this->Layouts).ArrayNum = iVar6 + 1;
  pFVar7 = (pTVar8->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
  *(FLayout **)pFVar7 = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar7 + 8) = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// AddSkeletonID @ 14aabab70

void __thiscall UE::Mutable::Private::FMesh::AddSkeletonID(FMesh *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint local_res10 [6];
  
  if (param_1 == -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SkeletonID != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Mesh.cpp"
                       ,0x283,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res10[0] = param_1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned_int>
            (&this->SkeletonIDs,local_res10);
  return;
}

// AddStreamedResource @ 14aababd0

void __thiscall UE::Mutable::Private::FMesh::AddStreamedResource(FMesh *this,ulong64 param_1)

{
  ulong64 local_res10 [3];
  
  local_res10[0] = param_1;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned___int64_const_&>
            (&this->StreamedResources,local_res10);
  return;
}

// AreVertexIdsExplicit @ 14aabb670

bool __thiscall UE::Mutable::Private::FMesh::AreVertexIdsExplicit(FMesh *this)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  uint local_res8 [2];
  uint local_res10 [2];
  
  local_res10[0] = 0xffffffff;
  local_res8[0] = 0xffffffff;
  FMeshBufferSet::FindChannel
            (&this->VertexBuffers,VertexIndex,0,(int *)local_res10,(int *)local_res8);
  uVar2 = local_res8[0];
  lVar6 = (longlong)(int)local_res10[0];
  if ((-1 < (int)local_res10[0]) && (-1 < (int)local_res8[0])) {
    uVar5 = 0;
    if ((int)local_res10[0] < (this->VertexBuffers).Buffers.ArrayNum) {
      uVar5 = ~local_res10[0] >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    pFVar7 = (this->VertexBuffers).Buffers.AllocatorInstance.Data + lVar6 * 0x30;
    uVar5 = 0;
    if ((int)uVar2 < *(int *)(pFVar7 + 8)) {
      uVar5 = ~uVar2 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    if (*(int *)(*(longlong *)pFVar7 + 4 + (longlong)(int)uVar2 * 0x10) == 0x14) {
      if (this->MeshIDPrefix != 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("MeshIDPrefix == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Mesh.cpp"
                           ,0x104,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
      }
      return true;
    }
  }
  return false;
}

// AreVertexIdsImplicit @ 14aabb7d0

bool __thiscall UE::Mutable::Private::FMesh::AreVertexIdsImplicit(FMesh *this)

{
  int local_res8 [2];
  int local_res10 [6];
  
  local_res8[0] = -1;
  local_res10[0] = -1;
  FMeshBufferSet::FindChannel(&this->VertexBuffers,VertexIndex,0,local_res8,local_res10);
  if (((this->MeshIDPrefix != 0) && (local_res8[0] < 0)) && (local_res10[0] < 0)) {
    return true;
  }
  return false;
}

// CheckIntegrity @ 14aabdf10

void __thiscall UE::Mutable::Private::FMesh::CheckIntegrity(FMesh *this)

{
  return;
}

// Clone @ 14aabe7a0

TSharedPtr<UE::Mutable::Private::FMesh,1> * __thiscall
UE::Mutable::Private::FMesh::Clone
          (FMesh *this,TSharedPtr<UE::Mutable::Private::FMesh,1> *__return_storage_ptr__,
          EMeshCopyFlags param_1)

{
  code *pcVar1;
  bool bVar2;
  TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1> *pTVar3;
  TSharedPtr<UE::Mutable::Private::FMesh,1> *pTVar4;
  FLLMScope local_res10 [5];
  FMemScope local_res20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name102,L"MutableRuntime");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res10,LLMScope_Name102,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,&LLMScope_Name102,true);
  pTVar3 = ::operator_new(0x1a8);
  if (pTVar3 == (TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1> *)0x0) {
    pTVar3 = (TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1> *)0x0;
    __return_storage_ptr__->Object = (FMesh *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3 = SharedPointerInternals::TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1>::
             TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1><>(pTVar3);
    if (&pTVar3->ObjectStorage == (TTypeCompatibleBytes<UE::Mutable::Private::FMesh> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<UE::Mutable::Private::FMesh,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    __return_storage_ptr__->Object = (FMesh *)&pTVar3->ObjectStorage;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)pTVar3;
    if (pTVar3 != (TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1> *)0x0) {
      LOCK();
      *(int *)&pTVar3->_padding_ = (int)pTVar3->_padding_ + 1;
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar3);
  if (__return_storage_ptr__->Object == (FMesh *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<UE::Mutable::Private::FMesh,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  CopyFrom(__return_storage_ptr__->Object,this,param_1);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  return __return_storage_ptr__;
}

// Clone @ 14aabe940

TSharedPtr<UE::Mutable::Private::FMesh,1> * __thiscall
UE::Mutable::Private::FMesh::Clone
          (FMesh *this,TSharedPtr<UE::Mutable::Private::FMesh,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1> *pTVar3;
  TSharedPtr<UE::Mutable::Private::FMesh,1> *pTVar4;
  FLLMScope local_res10 [2];
  FMemScope local_res18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name102,L"MutableRuntime");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res10,LLMScope_Name102,false,None,Default,true);
  FMemScope::FMemScope(&local_res18,&LLMScope_Name102,true);
  pTVar3 = ::operator_new(0x1a8);
  if (pTVar3 == (TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1> *)0x0) {
    pTVar3 = (TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1> *)0x0;
    __return_storage_ptr__->Object = (FMesh *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3 = SharedPointerInternals::TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1>::
             TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1><>(pTVar3);
    if (&pTVar3->ObjectStorage == (TTypeCompatibleBytes<UE::Mutable::Private::FMesh> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<UE::Mutable::Private::FMesh,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    __return_storage_ptr__->Object = (FMesh *)&pTVar3->ObjectStorage;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)pTVar3;
    if (pTVar3 != (TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1> *)0x0) {
      LOCK();
      *(int *)&pTVar3->_padding_ = (int)pTVar3->_padding_ + 1;
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar3);
  if (__return_storage_ptr__->Object == (FMesh *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<UE::Mutable::Private::FMesh,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  CopyFrom(__return_storage_ptr__->Object,this,AllFlags);
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res10);
  return __return_storage_ptr__;
}

// CopyFrom @ 14aac23d0

void __thiscall
UE::Mutable::Private::FMesh::CopyFrom(FMesh *this,FMesh *param_1,EMeshCopyFlags param_2)

{
  TArray<TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  TArray<UE::Mutable::Private::FMeshSurface,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<TTuple<UE::Mutable::Private::EMeshBufferType,UE::Mutable::Private::FMeshBufferSet>,TSizedDefaultAllocator<32>_>
  *pTVar6;
  TArray<TSharedPtr<UE::Mutable::Private::FLayout_const_,1>,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<UE::Mutable::Private::FMesh::FBonePose,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FMeshMemoryCounter>_>
  *pTVar8;
  TArray<TSharedPtr<UE::Mutable::Private::FPhysicsBody_const_,1>,TSizedDefaultAllocator<32>_>
  *pTVar9;
  FMeshMorph *pFVar10;
  int iVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  FMeshSurface *pFVar14;
  TReferenceControllerBase<1> *pTVar15;
  FSkeleton *pFVar16;
  FPhysicsBody *pFVar17;
  TTuple<UE::Mutable::Private::EMeshBufferType,UE::Mutable::Private::FMeshBufferSet> *pTVar18;
  TSharedPtr<UE::Mutable::Private::FLayout_const_,1> *pTVar19;
  void *_Src;
  TSharedPtr<UE::Mutable::Private::FPhysicsBody_const_,1> *pTVar20;
  TReferenceControllerBase<1> *pTVar21;
  
  this->InternalId = param_1->InternalId;
  pTVar1 = &this->SkeletalMeshes;
  this->Flags = param_1->Flags;
  this->ReferenceID = param_1->ReferenceID;
  this->MeshIDPrefix = param_1->MeshIDPrefix;
  if (pTVar1 != &param_1->SkeletalMeshes) {
    DestructItems<TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,int>
              ((TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                *)(pTVar1->AllocatorInstance).Data,(this->SkeletalMeshes).ArrayNum);
    iVar11 = (param_1->SkeletalMeshes).ArrayNum;
    piVar2 = &(this->SkeletalMeshes).ArrayMax;
    pFVar13 = (param_1->SkeletalMeshes).AllocatorInstance.Data;
    (this->SkeletalMeshes).ArrayNum = iVar11;
    if ((iVar11 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar11,*piVar2,&pTVar1->AllocatorInstance,iVar11,piVar2);
      ConstructItems<TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,int>
                ((pTVar1->AllocatorInstance).Data,
                 (TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                  *)pFVar13,iVar11);
    }
  }
  if ((param_2 & WithSurfaces) != None) {
    pTVar3 = &this->Surfaces;
    if (pTVar3 != &param_1->Surfaces) {
      DestructItems<UE::Mutable::Private::FMeshSurface,int>
                ((FMeshSurface *)(pTVar3->AllocatorInstance).Data,(this->Surfaces).ArrayNum);
      iVar11 = (param_1->Surfaces).ArrayNum;
      piVar2 = &(this->Surfaces).ArrayMax;
      pFVar14 = (FMeshSurface *)(param_1->Surfaces).AllocatorInstance.Data;
      (this->Surfaces).ArrayNum = iVar11;
      if ((iVar11 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,iVar11,*piVar2,&pTVar3->AllocatorInstance,iVar11,piVar2);
        ConstructItems<UE::Mutable::Private::FMeshSurface,UE::Mutable::Private::FMeshSurface,int>
                  ((pTVar3->AllocatorInstance).Data,pFVar14,iVar11);
      }
    }
  }
  if ((param_2 & WithSkeleton) != None) {
    pTVar15 = (param_1->Skeleton).SharedReferenceCount.ReferenceController;
    pFVar16 = (param_1->Skeleton).Object;
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar21 = (this->Skeleton).SharedReferenceCount.ReferenceController;
    (this->Skeleton).Object = pFVar16;
    (this->Skeleton).SharedReferenceCount.ReferenceController = pTVar15;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21);
  }
  if ((param_2 & WithPhysicsBody) != None) {
    pTVar15 = (param_1->PhysicsBody).SharedReferenceCount.ReferenceController;
    pFVar17 = (param_1->PhysicsBody).Object;
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar21 = (this->PhysicsBody).SharedReferenceCount.ReferenceController;
    (this->PhysicsBody).Object = pFVar17;
    (this->PhysicsBody).SharedReferenceCount.ReferenceController = pTVar15;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21);
  }
  if ((param_2 & WithTags) != None) {
    pTVar4 = &this->Tags;
    if (pTVar4 != &param_1->Tags) {
      DestructItems<FString,int>((FString *)(pTVar4->AllocatorInstance).Data,(this->Tags).ArrayNum);
      iVar11 = (param_1->Tags).ArrayNum;
      piVar2 = &(this->Tags).ArrayMax;
      pFVar13 = (param_1->Tags).AllocatorInstance.Data;
      (this->Tags).ArrayNum = iVar11;
      if ((iVar11 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar11,*piVar2,&pTVar4->AllocatorInstance,iVar11,piVar2);
        ConstructItems<FString,FString,int>
                  ((pTVar4->AllocatorInstance).Data,(FString *)pFVar13,iVar11);
      }
    }
  }
  if ((param_2 >> 0x10 & 1) != 0) {
    pTVar5 = &this->StreamedResources;
    if (pTVar5 != &param_1->StreamedResources) {
      iVar11 = (param_1->StreamedResources).ArrayNum;
      piVar2 = &(this->StreamedResources).ArrayMax;
      pFVar13 = (param_1->StreamedResources).AllocatorInstance.Data;
      (this->StreamedResources).ArrayNum = iVar11;
      if ((iVar11 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar11,*piVar2,&pTVar5->AllocatorInstance,iVar11,piVar2);
        if (iVar11 != 0) {
          memcpy((pTVar5->AllocatorInstance).Data,pFVar13,(longlong)iVar11 << 3);
        }
      }
    }
  }
  if ((char)param_2 < '\0') {
    FMeshBufferSet::operator=(&this->VertexBuffers,&param_1->VertexBuffers);
  }
  if ((param_2 >> 8 & 1) != 0) {
    FMeshBufferSet::operator=(&this->IndexBuffers,&param_1->IndexBuffers);
  }
  if ((param_2 >> 10 & 1) != 0) {
    pTVar6 = &this->AdditionalBuffers;
    if (pTVar6 != &param_1->AdditionalBuffers) {
      DestructItems<TTuple<enum_UE::Mutable::Private::EMeshBufferType,UE::Mutable::Private::FMeshBufferSet>,int>
                ((TTuple<UE::Mutable::Private::EMeshBufferType,UE::Mutable::Private::FMeshBufferSet>
                  *)(pTVar6->AllocatorInstance).Data,(this->AdditionalBuffers).ArrayNum);
      iVar11 = (param_1->AdditionalBuffers).ArrayNum;
      piVar2 = &(this->AdditionalBuffers).ArrayMax;
      pTVar18 = (TTuple<UE::Mutable::Private::EMeshBufferType,UE::Mutable::Private::FMeshBufferSet>
                 *)(param_1->AdditionalBuffers).AllocatorInstance.Data;
      (this->AdditionalBuffers).ArrayNum = iVar11;
      if ((iVar11 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,iVar11,*piVar2,&pTVar6->AllocatorInstance,iVar11,piVar2);
        ConstructItems<TTuple<enum_UE::Mutable::Private::EMeshBufferType,UE::Mutable::Private::FMeshBufferSet>,TTuple<enum_UE::Mutable::Private::EMeshBufferType,UE::Mutable::Private::FMeshBufferSet>,int>
                  ((pTVar6->AllocatorInstance).Data,pTVar18,iVar11);
      }
    }
  }
  if ((param_2 >> 0xb & 1) != 0) {
    pTVar7 = &this->Layouts;
    if (pTVar7 != &param_1->Layouts) {
      DestructItems<TSharedPtr<UE::Mutable::Private::FLayout_const_,1>,int>
                ((TSharedPtr<UE::Mutable::Private::FLayout_const_,1> *)
                 (pTVar7->AllocatorInstance).Data,(this->Layouts).ArrayNum);
      iVar11 = (param_1->Layouts).ArrayNum;
      piVar2 = &(this->Layouts).ArrayMax;
      pTVar19 = (TSharedPtr<UE::Mutable::Private::FLayout_const_,1> *)
                (param_1->Layouts).AllocatorInstance.Data;
      (this->Layouts).ArrayNum = iVar11;
      if ((iVar11 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar11,*piVar2,&pTVar7->AllocatorInstance,iVar11,piVar2);
        ConstructItems<TSharedPtr<UE::Mutable::Private::FLayout_const_,1>,TSharedPtr<UE::Mutable::Private::FLayout_const_,1>,int>
                  ((pTVar7->AllocatorInstance).Data,pTVar19,iVar11);
      }
    }
  }
  if ((param_2 >> 0xc & 1) != 0) {
    pTVar8 = &this->BonePoses;
    if (pTVar8 != &param_1->BonePoses) {
      iVar11 = (param_1->BonePoses).ArrayNum;
      piVar2 = &(this->BonePoses).ArrayMax;
      _Src = (void *)(param_1->BonePoses).AllocatorInstance._padding_;
      (this->BonePoses).ArrayNum = iVar11;
      if ((iVar11 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::
        ReallocForCopy<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FMeshMemoryCounter>::ForAnyElementType>
                  (0x40,0x10,iVar11,*piVar2,&pTVar8->AllocatorInstance,iVar11,piVar2);
        if (iVar11 != 0) {
          memcpy((void *)(pTVar8->AllocatorInstance)._padding_,_Src,(longlong)iVar11 << 6);
        }
      }
    }
  }
  if ((param_2 >> 0xd & 1) != 0) {
    TArray<UE::Mutable::Private::FBoneName,TSizedDefaultAllocator<32>_>::operator=
              (&this->BoneMap,&param_1->BoneMap);
  }
  if ((param_2 >> 0xe & 1) != 0) {
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
              (&this->SkeletonIDs,&param_1->SkeletonIDs);
  }
  if ((param_2 >> 0xf & 1) != 0) {
    pTVar9 = &this->AdditionalPhysicsBodies;
    if (pTVar9 != &param_1->AdditionalPhysicsBodies) {
      DestructItems<TSharedPtr<UE::Mutable::Private::FPhysicsBody_const_,1>,int>
                ((TSharedPtr<UE::Mutable::Private::FPhysicsBody_const_,1> *)
                 (pTVar9->AllocatorInstance).Data,(this->AdditionalPhysicsBodies).ArrayNum);
      iVar11 = (param_1->AdditionalPhysicsBodies).ArrayNum;
      piVar2 = &(this->AdditionalPhysicsBodies).ArrayMax;
      pTVar20 = (TSharedPtr<UE::Mutable::Private::FPhysicsBody_const_,1> *)
                (param_1->AdditionalPhysicsBodies).AllocatorInstance.Data;
      (this->AdditionalPhysicsBodies).ArrayNum = iVar11;
      if ((iVar11 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar11,*piVar2,&pTVar9->AllocatorInstance,iVar11,piVar2);
        ConstructItems<TSharedPtr<UE::Mutable::Private::FPhysicsBody_const_,1>,TSharedPtr<UE::Mutable::Private::FPhysicsBody_const_,1>,int>
                  ((pTVar9->AllocatorInstance).Data,pTVar20,iVar11);
      }
    }
  }
  if ((param_2 >> 0x11 & 1) != 0) {
    pFVar10 = &this->Morph;
    if (pFVar10 != &param_1->Morph) {
      iVar11 = (param_1->Morph).Names.ArrayNum;
      piVar2 = &(this->Morph).Names.ArrayMax;
      pFVar13 = (param_1->Morph).Names.AllocatorInstance.Data;
      iVar12 = *piVar2;
      (this->Morph).Names.ArrayNum = iVar11;
      if ((iVar11 == 0) && (iVar12 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar11,iVar12,(ForAnyElementType *)pFVar10,iVar11,piVar2);
        if (iVar11 != 0) {
          memcpy((pFVar10->Names).AllocatorInstance.Data,pFVar13,(longlong)iVar11 << 3);
        }
      }
    }
    TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::operator=
              (&(this->Morph).MaximumValuePerMorph,&(param_1->Morph).MaximumValuePerMorph);
    TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::operator=
              (&(this->Morph).MinimumValuePerMorph,&(param_1->Morph).MinimumValuePerMorph);
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
              (&(this->Morph).BatchStartOffsetPerMorph,&(param_1->Morph).BatchStartOffsetPerMorph);
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
              (&(this->Morph).BatchesPerMorph,&(param_1->Morph).BatchesPerMorph);
    (this->Morph).NumTotalBatches = (param_1->Morph).NumTotalBatches;
    (this->Morph).PositionPrecision = (param_1->Morph).PositionPrecision;
    (this->Morph).TangentZPrecision = (param_1->Morph).TangentZPrecision;
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
              (&this->MorphDataBuffer,&param_1->MorphDataBuffer);
  }
  return;
}

// CreateAsReference @ 14aac2dd0

TSharedPtr<UE::Mutable::Private::FMesh,1> * __cdecl
UE::Mutable::Private::FMesh::CreateAsReference
          (TSharedPtr<UE::Mutable::Private::FMesh,1> *__return_storage_ptr__,uint param_1,
          bool param_2)

{
  EMeshFlags *pEVar1;
  code *pcVar2;
  bool bVar3;
  TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1> *pTVar4;
  TSharedPtr<UE::Mutable::Private::FMesh,1> *pTVar5;
  
  pTVar4 = ::operator_new(0x1a8);
  if (pTVar4 == (TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1> *)0x0) {
    pTVar4 = (TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1> *)0x0;
    __return_storage_ptr__->Object = (FMesh *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar4 = SharedPointerInternals::TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1>::
             TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1><>(pTVar4);
    if (&pTVar4->ObjectStorage == (TTypeCompatibleBytes<UE::Mutable::Private::FMesh> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedPtr<UE::Mutable::Private::FMesh,1> *)(*pcVar2)();
        return pTVar5;
      }
    }
    __return_storage_ptr__->Object = (FMesh *)&pTVar4->ObjectStorage;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)pTVar4;
    if (pTVar4 != (TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1> *)0x0) {
      LOCK();
      *(int *)&pTVar4->_padding_ = (int)pTVar4->_padding_ + 1;
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar4);
  if (__return_storage_ptr__->Object == (FMesh *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedPtr<UE::Mutable::Private::FMesh,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->Object->ReferenceID = param_1;
  if (__return_storage_ptr__->Object == (FMesh *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedPtr<UE::Mutable::Private::FMesh,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  pEVar1 = &__return_storage_ptr__->Object->Flags;
  *pEVar1 = *pEVar1 | IsResourceReference;
  if (param_2) {
    if (__return_storage_ptr__->Object == (FMesh *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedPtr<UE::Mutable::Private::FMesh,1> *)(*pcVar2)();
        return pTVar5;
      }
    }
    pEVar1 = &__return_storage_ptr__->Object->Flags;
    *pEVar1 = *pEVar1 | IsResourceForceLoad;
  }
  return __return_storage_ptr__;
}

// EnsureSurfaceData @ 14aac7340

void __thiscall UE::Mutable::Private::FMesh::EnsureSurfaceData(FMesh *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  
  if (((this->Surfaces).ArrayNum == 0) && ((this->VertexBuffers).ElementCount != 0)) {
    piVar1 = &(this->Surfaces).ArrayMax;
    iVar2 = 0;
    if (*piVar1 == 0) {
      iVar2 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x838,&(this->Surfaces).AllocatorInstance,piVar1);
      (this->Surfaces).ArrayNum = iVar2;
    }
    (this->Surfaces).ArrayNum = iVar2 + 1;
    pFVar4 = (this->Surfaces).AllocatorInstance.Data + (longlong)iVar2 * 0x38;
    *(undefined8 *)pFVar4 = 0;
    *(undefined8 *)(pFVar4 + 8) = 0;
    *(undefined8 *)(pFVar4 + 0x10) = 0;
    *(undefined8 *)(pFVar4 + 0x30) = 0;
    *(undefined8 *)(pFVar4 + 0x18) = 0;
    *(undefined8 *)(pFVar4 + 0x24) = 1;
    *(undefined4 *)(pFVar4 + 0x2c) = 0;
    *(undefined4 *)(pFVar4 + 0x20) = 1;
    pFVar3 = *(FScriptContainerElement **)(pFVar4 + 0x18);
    if (*(FScriptContainerElement **)(pFVar4 + 0x18) == (FScriptContainerElement *)0x0) {
      pFVar3 = pFVar4;
    }
    *(undefined8 *)(pFVar3 + 4) = 0;
    *(undefined8 *)(pFVar3 + 0xc) = 0;
    *(undefined4 *)pFVar3 = 0;
    *(uint *)(pFVar3 + 4) = (this->VertexBuffers).ElementCount;
    *(uint *)(pFVar3 + 0xc) = (this->IndexBuffers).ElementCount;
    *(int *)(pFVar4 + 0x2c) = (this->BoneMap).ArrayNum;
  }
  return;
}

// FindBonePose @ 14aac8aa0

int __thiscall UE::Mutable::Private::FMesh::FindBonePose(FMesh *this,FBoneName *param_1)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar1 = (uint *)(this->BonePoses).AllocatorInstance._padding_;
  puVar2 = puVar1;
  while( true ) {
    if (puVar2 == puVar1 + (longlong)(this->BonePoses).ArrayNum * 0x10) {
      return -1;
    }
    if (*puVar2 == param_1->Id) break;
    puVar2 = puVar2 + 0x10;
  }
  return (int)((longlong)puVar2 - (longlong)puVar1 >> 6);
}

// GetAdditionalPhysicsBody @ 14aacb290

TSharedPtr<UE::Mutable::Private::FPhysicsBody_const_,1> * __thiscall
UE::Mutable::Private::FMesh::GetAdditionalPhysicsBody
          (FMesh *this,
          TSharedPtr<UE::Mutable::Private::FPhysicsBody_const_,1> *__return_storage_ptr__,
          int param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TSharedPtr<UE::Mutable::Private::FPhysicsBody_const_,1> *pTVar5;
  FScriptContainerElement *pFVar6;
  
  if ((param_1 < 0) || ((this->AdditionalPhysicsBodies).ArrayNum <= param_1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AdditionalPhysicsBodies.IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Mesh.cpp"
                       ,0x181,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedPtr<UE::Mutable::Private::FPhysicsBody_const_,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  uVar4 = 0;
  if (param_1 < (this->AdditionalPhysicsBodies).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedPtr<UE::Mutable::Private::FPhysicsBody_const_,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  pFVar6 = (this->AdditionalPhysicsBodies).AllocatorInstance.Data + (longlong)param_1 * 0x10;
  __return_storage_ptr__->Object = *(FPhysicsBody **)pFVar6;
  pTVar1 = *(TReferenceControllerBase<1> **)(pFVar6 + 8);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetBoneMap @ 14aacbcb0

TArray<UE::Mutable::Private::FBoneName,TSizedDefaultAllocator<32>_> * __thiscall
UE::Mutable::Private::FMesh::GetBoneMap(FMesh *this)

{
  return &this->BoneMap;
}

// GetBonePoseCount @ 14aacbcc0

int __thiscall UE::Mutable::Private::FMesh::GetBonePoseCount(FMesh *this)

{
  return (this->BonePoses).ArrayNum;
}

// GetBonePoseId @ 14aacbcd0

FBoneName * __thiscall UE::Mutable::Private::FMesh::GetBonePoseId(FMesh *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FBoneName *pFVar4;
  
  if ((param_1 < 0) || ((this->BonePoses).ArrayNum <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("BonePoses.IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Mesh.cpp"
                       ,0x256,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBoneName *)(*pcVar1)();
      return pFVar4;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->BonePoses).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBoneName *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FBoneName *)((longlong)param_1 * 0x40 + (this->BonePoses).AllocatorInstance._padding_);
}

// GetBonePoseTransform @ 14aacbd80

void __thiscall
UE::Mutable::Private::FMesh::GetBonePoseTransform
          (FMesh *this,int param_1,TTransform<float> *param_2)

{
  code *pcVar1;
  ulong64 uVar2;
  bool bVar3;
  uint uVar4;
  TTransform<float> *pTVar5;
  
  if ((param_1 < 0) || ((this->BonePoses).ArrayNum <= param_1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("BoneIndex >= 0 && BoneIndex < BonePoses.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Mesh.cpp"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (param_1 < 0) {
      pTVar5 = &UE::Math::TTransform<float>::Identity;
      goto LAB_14aacbe36;
    }
  }
  uVar4 = 0;
  if (param_1 < (this->BonePoses).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar5 = (TTransform<float> *)
           ((this->BonePoses).AllocatorInstance._padding_ + 0x10 + (longlong)param_1 * 0x40);
LAB_14aacbe36:
  uVar2 = (pTVar5->Rotation).m128_u64[1];
  (param_2->Rotation).m128_u64[0] = (pTVar5->Rotation).m128_u64[0];
  (param_2->Rotation).m128_u64[1] = uVar2;
  uVar2 = (pTVar5->Translation).m128_u64[1];
  (param_2->Translation).m128_u64[0] = (pTVar5->Translation).m128_u64[0];
  (param_2->Translation).m128_u64[1] = uVar2;
  uVar2 = (pTVar5->Scale3D).m128_u64[1];
  (param_2->Scale3D).m128_u64[0] = (pTVar5->Scale3D).m128_u64[0];
  (param_2->Scale3D).m128_u64[1] = uVar2;
  return;
}

// GetBoneUsageFlags @ 14aacbe70

EBoneUsageFlags __thiscall UE::Mutable::Private::FMesh::GetBoneUsageFlags(FMesh *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  EBoneUsageFlags EVar3;
  uint uVar4;
  
  if ((param_1 < 0) || ((this->BonePoses).ArrayNum <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("BoneIndex >= 0 && BoneIndex < BonePoses.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Mesh.cpp"
                       ,0x264,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
    if (param_1 < 0) {
      return None;
    }
  }
  uVar4 = 0;
  if (param_1 < (this->BonePoses).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  return *(EBoneUsageFlags *)
          ((longlong)param_1 * 0x40 + 4 + (this->BonePoses).AllocatorInstance._padding_);
}

// GetDataSize @ 14aacce50

int __thiscall UE::Mutable::Private::FMesh::GetDataSize(FMesh *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  iVar1 = (this->AdditionalBuffers).ArrayNum;
  iVar5 = 0;
  pFVar4 = (this->AdditionalBuffers).AllocatorInstance.Data;
  pFVar6 = pFVar4 + (longlong)iVar1 * 0x20;
  while( true ) {
    if ((this->AdditionalBuffers).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TTuple<enum_UE::Mutable::Private::EMeshBufferType,UE::Mutable::Private::FMeshBufferSet>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar6) break;
    iVar2 = FMeshBufferSet::GetDataSize((FMeshBufferSet *)(pFVar4 + 8));
    iVar5 = iVar5 + iVar2;
    pFVar4 = pFVar4 + 0x20;
  }
  iVar1 = (this->BonePoses).ArrayNum;
  iVar2 = FMeshBufferSet::GetDataSize(&this->VertexBuffers);
  iVar3 = FMeshBufferSet::GetDataSize(&this->IndexBuffers);
  return iVar3 + iVar2 + iVar1 * 0x40 + 0x198 + iVar5;
}

// GetFaceCount @ 14aacd3f0

int __thiscall UE::Mutable::Private::FMesh::GetFaceCount(FMesh *this)

{
  uint uVar1;
  
  uVar1 = (this->IndexBuffers).ElementCount;
  return (int)(((longlong)(int)uVar1 / 3 + ((longlong)(int)uVar1 >> 0x3f) & 0xffffffffU) >> 0x1f) +
         (int)uVar1 / 3 + ((int)uVar1 >> 0x1f);
}

// GetFaceVertexIndices @ 14aacd410

TIntVector3<unsigned_int> * __thiscall
UE::Mutable::Private::FMesh::GetFaceVertexIndices
          (FMesh *this,TIntVector3<unsigned_int> *__return_storage_ptr__,int param_1)

{
  uint *puVar1;
  uint *puVar2;
  MeshBufferIteratorConst<5,unsigned_int,1> local_28;
  
  MeshBufferIteratorConst<5,unsigned_int,1>::MeshBufferIteratorConst<5,unsigned_int,1>
            (&local_28,&this->IndexBuffers,VertexIndex,0);
  puVar2 = (uint *)(local_28._8_8_ + (longlong)(local_28._0_4_ * param_1 * 3));
  puVar1 = (uint *)((longlong)(int)local_28._0_4_ + (longlong)puVar2);
  (__return_storage_ptr__->field0_0x0)._s_0.X = *puVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = *puVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       *(uint *)((longlong)(int)local_28._0_4_ + (longlong)puVar1);
  return __return_storage_ptr__;
}

// GetId @ 14aacd6c0

uint __thiscall UE::Mutable::Private::FMesh::GetId(FMesh *this)

{
  return this->InternalId;
}

// GetIndexBuffers @ 14aace660

FMeshBufferSet * __thiscall UE::Mutable::Private::FMesh::GetIndexBuffers(FMesh *this)

{
  return &this->IndexBuffers;
}

// GetIndexBuffers @ 14aace670

FMeshBufferSet * __thiscall UE::Mutable::Private::FMesh::GetIndexBuffers(FMesh *this)

{
  return &this->IndexBuffers;
}

// GetIndexCount @ 14aace680

int __thiscall UE::Mutable::Private::FMesh::GetIndexCount(FMesh *this)

{
  return (this->IndexBuffers).ElementCount;
}

// GetLayout @ 14aacecf0

TSharedPtr<UE::Mutable::Private::FLayout_const_,1> * __thiscall
UE::Mutable::Private::FMesh::GetLayout
          (FMesh *this,TSharedPtr<UE::Mutable::Private::FLayout_const_,1> *__return_storage_ptr__,
          int param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TSharedPtr<UE::Mutable::Private::FLayout_const_,1> *pTVar5;
  FScriptContainerElement *pFVar6;
  
  if ((param_1 < 0) || ((this->Layouts).ArrayNum <= param_1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Layouts.IsValidIndex(LayoutIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Mesh.cpp"
                       ,500,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedPtr<UE::Mutable::Private::FLayout_const_,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  uVar4 = 0;
  if (param_1 < (this->Layouts).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedPtr<UE::Mutable::Private::FLayout_const_,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  pFVar6 = (this->Layouts).AllocatorInstance.Data + (longlong)param_1 * 0x10;
  __return_storage_ptr__->Object = *(FLayout **)pFVar6;
  pTVar1 = *(TReferenceControllerBase<1> **)(pFVar6 + 8);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetLayoutCount @ 14aacedd0

int __thiscall UE::Mutable::Private::FMesh::GetLayoutCount(FMesh *this)

{
  return (this->Layouts).ArrayNum;
}

// GetPhysicsBody @ 14aad0e30

TSharedPtr<UE::Mutable::Private::FPhysicsBody_const_,1> * __thiscall
UE::Mutable::Private::FMesh::GetPhysicsBody
          (FMesh *this,
          TSharedPtr<UE::Mutable::Private::FPhysicsBody_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->PhysicsBody).Object;
  pTVar1 = (this->PhysicsBody).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetReferencedMesh @ 14aad1130

uint __thiscall UE::Mutable::Private::FMesh::GetReferencedMesh(FMesh *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if ((this->Flags & IsResourceReference) != None) {
    return this->ReferenceID;
  }
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<7446957568770965579>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Mesh.cpp"
                     ,0x4b,"IsReference()");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return this->ReferenceID;
}

// GetReferencedMorph @ 14aad1190

FString * __thiscall UE::Mutable::Private::FMesh::GetReferencedMorph(FMesh *this)

{
  return &this->ReferencedMorph;
}

// GetSkeleton @ 14aad2400

TSharedPtr<UE::Mutable::Private::FSkeleton_const_,1> * __thiscall
UE::Mutable::Private::FMesh::GetSkeleton
          (FMesh *this,TSharedPtr<UE::Mutable::Private::FSkeleton_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->Skeleton).Object;
  pTVar1 = (this->Skeleton).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetSkeletonID @ 14aad2430

int __thiscall UE::Mutable::Private::FMesh::GetSkeletonID(FMesh *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  if ((-1 < param_1) && (param_1 < (this->SkeletonIDs).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->SkeletonIDs).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
    }
    return *(int *)((this->SkeletonIDs).AllocatorInstance.Data + (longlong)param_1 * 4);
  }
  return -1;
}

// GetSkeletonIDsCount @ 14aad24d0

int __thiscall UE::Mutable::Private::FMesh::GetSkeletonIDsCount(FMesh *this)

{
  return (this->SkeletonIDs).ArrayNum;
}

// GetStreamedResources @ 14aad2760

TArray<unsigned___int64,TSizedDefaultAllocator<32>_> * __thiscall
UE::Mutable::Private::FMesh::GetStreamedResources(FMesh *this)

{
  return &this->StreamedResources;
}

// GetSurface @ 14aad3750

void __thiscall
UE::Mutable::Private::FMesh::GetSurface
          (FMesh *this,int param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6,
          int *param_7)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  
  if ((param_1 < 0) || ((this->Surfaces).ArrayNum <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Mesh.cpp"
                       ,0x1ce,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *param_2 = 0;
    *param_3 = 0;
    *param_4 = 0;
    *param_5 = 0;
    *param_6 = 0;
    *param_7 = 0;
  }
  else {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar6 = (this->Surfaces).AllocatorInstance.Data + (longlong)param_1 * 0x38;
    if (*(int *)(pFVar6 + 0x20) == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Surf.SubMeshes.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Mesh.cpp"
                         ,0x1b3,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (*(int *)(pFVar6 + 0x20) < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar4 = *(FScriptContainerElement **)(pFVar6 + 0x18);
    if (*(FScriptContainerElement **)(pFVar6 + 0x18) == (FScriptContainerElement *)0x0) {
      pFVar4 = pFVar6;
    }
    *param_2 = *(int *)pFVar4;
    uVar5 = *(int *)(pFVar6 + 0x20) - 1;
    uVar3 = 0;
    if ((int)uVar5 < *(int *)(pFVar6 + 0x20)) {
      uVar3 = ~uVar5 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar4 = *(FScriptContainerElement **)(pFVar6 + 0x18);
    if (*(FScriptContainerElement **)(pFVar6 + 0x18) == (FScriptContainerElement *)0x0) {
      pFVar4 = pFVar6;
    }
    *param_3 = *(int *)(pFVar4 + ((longlong)*(int *)(pFVar6 + 0x20) * 5 + -4) * 4) - *param_2;
    if (*(int *)(pFVar6 + 0x20) < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar4 = *(FScriptContainerElement **)(pFVar6 + 0x18);
    if (*(FScriptContainerElement **)(pFVar6 + 0x18) == (FScriptContainerElement *)0x0) {
      pFVar4 = pFVar6;
    }
    *param_4 = *(int *)(pFVar4 + 8);
    uVar5 = *(int *)(pFVar6 + 0x20) - 1;
    uVar3 = 0;
    if ((int)uVar5 < *(int *)(pFVar6 + 0x20)) {
      uVar3 = ~uVar5 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar4 = *(FScriptContainerElement **)(pFVar6 + 0x18);
    if (*(FScriptContainerElement **)(pFVar6 + 0x18) == (FScriptContainerElement *)0x0) {
      pFVar4 = pFVar6;
    }
    *param_5 = *(int *)(pFVar4 + ((longlong)*(int *)(pFVar6 + 0x20) * 5 + -2) * 4) - *param_4;
    *param_6 = *(int *)(pFVar6 + 0x28);
    *param_7 = *(int *)(pFVar6 + 0x2c);
  }
  return;
}

// GetSurfaceCount @ 14aad3b70

int __thiscall UE::Mutable::Private::FMesh::GetSurfaceCount(FMesh *this)

{
  return (this->Surfaces).ArrayNum;
}

// GetSurfaceId @ 14aad4100

uint __thiscall UE::Mutable::Private::FMesh::GetSurfaceId(FMesh *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if ((-1 < param_1) && (param_1 < (this->Surfaces).ArrayNum)) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
    }
    return *(uint *)((this->Surfaces).AllocatorInstance.Data + (longlong)param_1 * 0x38 + 0x30);
  }
  return 0;
}

// GetTag @ 14aad4190

FString * __thiscall UE::Mutable::Private::FMesh::GetTag(FMesh *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  
  if ((param_1 < 0) || ((this->Tags).ArrayNum <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Tags.IsValidIndex(TagIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Mesh.cpp"
                       ,0x211,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
    if (param_1 < 0) goto LAB_14aad424a;
  }
  if (param_1 < (this->Tags).ArrayNum) {
    uVar3 = 0;
    if (param_1 < (this->Tags).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar1)();
        return pFVar4;
      }
    }
    return (FString *)((this->Tags).AllocatorInstance.Data + (longlong)param_1 * 0x10);
  }
LAB_14aad424a:
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UE::Mutable::Private::FMesh::GetTag'::__l14::
             _dynamic_atexit_destructor_for__NullString__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &NullString;
}

// GetTagCount @ 14aad42c0

int __thiscall UE::Mutable::Private::FMesh::GetTagCount(FMesh *this)

{
  return (this->Tags).ArrayNum;
}

// GetVertexBuffers @ 14aad6010

FMeshBufferSet * __thiscall UE::Mutable::Private::FMesh::GetVertexBuffers(FMesh *this)

{
  return &this->VertexBuffers;
}

// GetVertexBuffers @ 14aad6020

FMeshBufferSet * __thiscall UE::Mutable::Private::FMesh::GetVertexBuffers(FMesh *this)

{
  return &this->VertexBuffers;
}

// GetVertexCount @ 14aad6030

int __thiscall UE::Mutable::Private::FMesh::GetVertexCount(FMesh *this)

{
  return (this->VertexBuffers).ElementCount;
}

// GetVertexMap @ 14aad6040

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Mutable::Private::FMesh::GetVertexMap
          (FMesh *this,FMesh *param_1,FVertexMatchMap *param_2,float param_3)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  ulonglong *puVar2;
  float fVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  EMeshBufferFormat EVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  float *pfVar13;
  float *pfVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  int *piVar18;
  ForAnyElementType *pFVar19;
  ulonglong *puVar20;
  longlong lVar21;
  int iVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  FVertexMatchMap *pFVar25;
  void *pvVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auStackY_11c8 [32];
  int local_1178;
  int local_1174;
  uint local_1170;
  FVertexMatchMap *local_1168;
  float local_1160 [6];
  float *pfStack_1148;
  undefined8 local_1140;
  undefined1 local_1138 [24];
  longlong local_1120;
  longlong local_1118;
  longlong local_1110;
  longlong local_1108;
  undefined1 local_1100 [32];
  float *pfStack_10e0;
  EMeshBufferFormat local_10d8;
  ForAnyElementType local_10c8;
  int local_10c0;
  int aiStack_10bc [1017];
  ulonglong local_d8 [19];
  
  local_d8[2] = __security_cookie.value ^ (ulonglong)auStackY_11c8;
  uVar12 = (this->VertexBuffers).ElementCount;
  local_1168 = param_2;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&param_2->FirstMatch,uVar12,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum
            (&param_2->Matches,((int)uVar12 >> 2) + uVar12,Default);
  uVar4 = (param_1->VertexBuffers).ElementCount;
  if ((uVar12 != 0) && (uVar4 != 0)) {
    MeshBufferIteratorConst<2,float,3>::MeshBufferIteratorConst<2,float,3>
              ((MeshBufferIteratorConst<2,float,3> *)local_1100,&this->VertexBuffers,Position,0);
    MeshBufferIteratorConst<2,float,3>::MeshBufferIteratorConst<2,float,3>
              ((MeshBufferIteratorConst<2,float,3> *)local_1138,&param_1->VertexBuffers,Position,0);
    lVar21 = 0;
    iVar22 = 0;
    local_1140 = local_1138._16_8_;
    pfVar14 = (float *)local_1138._8_8_;
    fVar30 = __real_7f7fffff;
    fVar28 = __real_ff7fffff;
    if (3 < (int)uVar4) {
      lVar16 = (longlong)(int)local_1138._0_4_;
      uVar10 = (uVar4 - 4 >> 2) + 1;
      uVar23 = (ulonglong)uVar10;
      iVar22 = uVar10 * 4;
      do {
        fVar31 = *pfVar14;
        pfVar13 = (float *)((longlong)pfVar14 + lVar16 + lVar16);
        fVar27 = fVar31;
        if (fVar30 <= fVar31) {
          fVar27 = fVar30;
        }
        if (fVar31 <= fVar28) {
          fVar31 = fVar28;
        }
        fVar30 = *(float *)((longlong)pfVar14 + lVar16);
        fVar28 = fVar30;
        if (fVar27 <= fVar30) {
          fVar28 = fVar27;
        }
        if (fVar30 <= fVar31) {
          fVar30 = fVar31;
        }
        fVar31 = *pfVar13;
        pfVar13 = (float *)((longlong)pfVar13 + lVar16);
        fVar27 = fVar31;
        if (fVar28 <= fVar31) {
          fVar27 = fVar28;
        }
        fVar28 = *pfVar13;
        if (fVar31 <= fVar30) {
          fVar31 = fVar30;
        }
        pfVar14 = (float *)((longlong)pfVar13 + lVar16);
        fVar30 = fVar28;
        if (fVar27 <= fVar28) {
          fVar30 = fVar27;
        }
        if (fVar28 <= fVar31) {
          fVar28 = fVar31;
        }
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
    if (iVar22 < (int)uVar4) {
      uVar23 = (ulonglong)(uVar4 - iVar22);
      fVar31 = fVar30;
      fVar27 = fVar28;
      do {
        fVar30 = *pfVar14;
        pfVar14 = (float *)((longlong)pfVar14 + (longlong)(int)local_1138._0_4_);
        fVar28 = fVar30;
        if (fVar30 <= fVar27) {
          fVar28 = fVar27;
        }
        if (fVar31 <= fVar30) {
          fVar30 = fVar31;
        }
        uVar23 = uVar23 - 1;
        fVar31 = fVar30;
        fVar27 = fVar28;
      } while (uVar23 != 0);
    }
    fVar30 = fVar30 - param_3;
    lVar15 = 0x100;
    lVar16 = (longlong)aiStack_10bc;
    do {
      *(undefined8 *)(lVar16 + 0xfffffffffffffff4) = 0;
      *(undefined8 *)(lVar16 + 0xfffffffffffffffc) = 0;
      lVar16 = lVar16 + 0x10;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    piVar18 = aiStack_10bc;
    uVar10 = ((int)(((int)uVar4 >> 0x1f & 0xffU) + uVar4) >> 8) * 2;
    do {
      if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
      }
      if (*piVar18 < (int)uVar10) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar10,(ForAnyElementType *)(piVar18 + -3),piVar18[-1],piVar18);
      }
      fVar27 = __real_3f000000;
      fVar31 = __real_3f800000;
      lVar21 = lVar21 + 1;
      piVar18 = piVar18 + 4;
    } while (lVar21 < 0x100);
    fVar28 = ((fVar28 + param_3) - fVar30) * __real_3b800000;
    local_1178 = 0;
    local_1140 = local_1138._16_8_;
    pfStack_1148 = (float *)local_1138._8_8_;
    if (0 < (int)uVar4) {
      lVar21 = (longlong)(int)local_1138._0_4_;
      fVar29 = __real_3f800000 / fVar28;
      do {
        fVar3 = *pfStack_1148;
        iVar22 = (int)ROUND(((fVar3 - param_3) - fVar30) * (fVar29 + fVar29) - fVar27) >> 1;
        if (iVar22 < 0) {
          iVar22 = 0;
        }
        if (0xff < iVar22) {
          iVar22 = 0xff;
        }
        lVar16 = (longlong)iVar22;
        pFVar19 = &local_10c8 + lVar16 * 2;
        if (((pFVar19->Data <= (FScriptContainerElement *)&local_1178) &&
            ((FScriptContainerElement *)&local_1178 <
             pFVar19->Data + (longlong)aiStack_10bc[lVar16 * 4] * 4)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar11 = (&local_10c0)[lVar16 * 4];
        if (iVar11 == aiStack_10bc[lVar16 * 4]) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,pFVar19,aiStack_10bc + lVar16 * 4);
        }
        (&local_10c0)[lVar16 * 4] = iVar11 + 1;
        *(int *)(pFVar19->Data + (longlong)iVar11 * 4) = local_1178;
        iVar11 = (int)ROUND(((param_3 + fVar3) - fVar30) * (fVar29 + fVar29) - fVar27) >> 1;
        if (iVar11 < 0) {
          iVar11 = 0;
        }
        if (0xff < iVar11) {
          iVar11 = 0xff;
        }
        if (iVar11 != iVar22) {
          lVar16 = (longlong)iVar11;
          pFVar19 = &local_10c8 + lVar16 * 2;
          if (((pFVar19->Data <= (FScriptContainerElement *)&local_1178) &&
              ((FScriptContainerElement *)&local_1178 <
               pFVar19->Data + (longlong)aiStack_10bc[lVar16 * 4] * 4)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar22 = (&local_10c0)[lVar16 * 4];
          if (iVar22 == aiStack_10bc[lVar16 * 4]) {
            iVar22 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,pFVar19,aiStack_10bc + lVar16 * 4);
          }
          (&local_10c0)[lVar16 * 4] = iVar22 + 1;
          *(int *)(pFVar19->Data + (longlong)iVar22 * 4) = local_1178;
        }
        pfStack_1148 = (float *)((longlong)pfStack_1148 + lVar21);
        local_1178 = local_1178 + 1;
        param_2 = local_1168;
      } while (local_1178 < (int)uVar4);
    }
    uVar4 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    local_1170 = 0;
    local_1118 = (longlong)(int)uVar12;
    if (0 < (int)uVar12) {
      fVar31 = fVar31 / fVar28;
      pTVar1 = &param_2->Matches;
      local_1120 = 0;
      pFVar25 = param_2;
      do {
        lVar21 = local_1120;
        uVar23 = 0;
        iVar22 = (pFVar25->Matches).ArrayNum;
        uVar12 = 0;
        if ((int)local_1170 < (pFVar25->FirstMatch).ArrayNum) {
          uVar12 = ~local_1170 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(int *)((pFVar25->FirstMatch).AllocatorInstance.Data + lVar21 * 4) = iVar22;
        uVar12 = (int)ROUND((fVar31 + fVar31) * (*(float *)local_1100._8_8_ - fVar30) - fVar27) >> 1
        ;
        if (uVar12 < 0x100) {
          local_1108 = (longlong)(int)uVar12 * 0x10;
          lVar16 = (longlong)(&local_10c0)[(longlong)(int)uVar12 * 4];
          uVar24 = uVar23;
          pFVar25 = local_1168;
          local_1110 = lVar16;
          if (0 < lVar16) {
            do {
              lVar21 = local_1108;
              uVar10 = (uint)uVar23;
              uVar12 = 0;
              if ((int)uVar10 < *(int *)((longlong)&local_10c0 + local_1108)) {
                uVar12 = ~uVar10 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar17 = 0;
              local_1160[0] = 0.0;
              local_1160[1] = 0.0;
              local_1174 = *(int *)(*(longlong *)((longlong)&local_10c8.Data + lVar21) + uVar24 * 4)
              ;
              pfStack_10e0 = (float *)local_1138._8_8_;
              local_1160[2] = 0.0;
              _local_10d8 = local_1138._16_8_;
              uVar8 = _local_10d8;
              pvVar26 = (void *)((longlong)(local_1174 * local_1138._0_4_) + local_1138._8_8_);
              iVar11 = SUB84(local_1138._16_8_,4);
              iVar22 = 3;
              if (iVar11 < 3) {
                iVar22 = iVar11;
              }
              if (0 < iVar22) {
                local_10d8 = (EMeshBufferFormat)local_1138._16_8_;
                EVar7 = local_10d8;
                _local_10d8 = uVar8;
                iVar22 = 3;
                if (iVar11 < 3) {
                  iVar22 = iVar11;
                }
                do {
                  ConvertData(iVar17,local_1160,Float32,pvVar26,EVar7);
                  iVar17 = iVar17 + 1;
                  lVar16 = local_1110;
                } while (iVar17 < iVar22);
              }
              uVar23 = 0;
              do {
                if (2 < (longlong)uVar23) {
                  pFVar5 = (pTVar1->AllocatorInstance).Data;
                  if (((pFVar5 <= (FScriptContainerElement *)&local_1174) &&
                      ((FScriptContainerElement *)&local_1174 <
                       pFVar5 + (longlong)(param_2->Matches).ArrayMax * 4)) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar9)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  iVar22 = (param_2->Matches).ArrayNum;
                  piVar18 = &(param_2->Matches).ArrayMax;
                  if (iVar22 == *piVar18) {
                    iVar22 = Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&pTVar1->AllocatorInstance,piVar18);
                  }
                  (param_2->Matches).ArrayNum = iVar22 + 1;
                  *(int *)((pTVar1->AllocatorInstance).Data + (longlong)iVar22 * 4) = local_1174;
                  break;
                }
                if ((2 < uVar23) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValidIndex(Index)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                       ,0x7a2,L""), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                pfVar14 = (float *)(local_1100._8_8_ + uVar23 * 4);
                pfVar13 = local_1160 + uVar23;
                uVar23 = uVar23 + 1;
              } while ((float)((uint)(*pfVar14 - *pfVar13) & uVar4) <= param_3);
              uVar23 = (ulonglong)(uVar10 + 1);
              uVar24 = uVar24 + 1;
              lVar21 = local_1120;
              pFVar25 = local_1168;
            } while ((longlong)uVar24 < lVar16);
          }
        }
        local_1170 = local_1170 + 1;
        local_1100._8_8_ = local_1100._8_8_ + (longlong)(int)local_1100._0_4_;
        local_1120 = lVar21 + 1;
      } while (local_1120 < local_1118);
    }
    lVar21 = 0x100;
    puVar20 = local_d8 + 2;
    do {
      puVar2 = puVar20 + -2;
      puVar20 = puVar20 + -2;
      lVar21 = lVar21 + -1;
      if ((void *)*puVar2 != (void *)0x0) {
        FMemory::Free((void *)*puVar2);
      }
    } while (lVar21 != 0);
  }
  return;
}

// HasCompatibleFormat @ 14aad6a10

bool __thiscall UE::Mutable::Private::FMesh::HasCompatibleFormat(FMesh *this,FMesh *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  
  if (((this->Layouts).ArrayNum == (param_1->Layouts).ArrayNum) &&
     ((this->VertexBuffers).Buffers.ArrayNum == (param_1->VertexBuffers).Buffers.ArrayNum)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if ((0 < (int)(this->IndexBuffers).ElementCount) &&
     (0 < (int)(param_1->IndexBuffers).ElementCount)) {
    if (((this->IndexBuffers).Buffers.ArrayNum != 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IndexBuffers.Buffers.Num() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Mesh.cpp"
                           ,0x2a7,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if (((param_1->IndexBuffers).Buffers.ArrayNum != 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Other->GetIndexBuffers().Buffers.Num() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Mesh.cpp"
                           ,0x2a8,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    iVar7 = FMeshBufferSet::GetBufferChannelCount(&this->IndexBuffers,0);
    if ((iVar7 != 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IndexBuffers.GetBufferChannelCount(0) == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Mesh.cpp"
                           ,0x2a9,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    iVar7 = FMeshBufferSet::GetBufferChannelCount(&param_1->IndexBuffers,0);
    if ((iVar7 != 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Other->GetIndexBuffers().GetBufferChannelCount(0) == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Mesh.cpp"
                           ,0x2aa,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if (((this->IndexBuffers).Buffers.ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pFVar1 = (this->IndexBuffers).Buffers.AllocatorInstance.Data;
    if (((param_1->IndexBuffers).Buffers.ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if (bVar6 != false) {
      pFVar2 = (param_1->IndexBuffers).Buffers.AllocatorInstance.Data;
      if ((*(int *)(pFVar2 + 8) < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      lVar9 = *(longlong *)pFVar2;
      if ((*(int *)(pFVar1 + 8) < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if (*(int *)(*(longlong *)pFVar1 + 4) == *(int *)(lVar9 + 4)) {
        bVar6 = true;
        goto LAB_14aad6c2b;
      }
    }
    bVar6 = false;
  }
LAB_14aad6c2b:
  lVar9 = (longlong)(this->VertexBuffers).Buffers.ArrayNum;
  uVar11 = 0;
  if (0 < lVar9) {
    lVar10 = 0;
    lVar12 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar11 < (this->VertexBuffers).Buffers.ArrayNum) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar1 = (this->VertexBuffers).Buffers.AllocatorInstance.Data;
      uVar8 = 0;
      if ((int)uVar11 < (param_1->VertexBuffers).Buffers.ArrayNum) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if ((bVar6 == false) ||
         (*(int *)(pFVar1 + lVar12 + 8) !=
          *(int *)((param_1->VertexBuffers).Buffers.AllocatorInstance.Data + lVar12 + 8))) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 1;
      lVar12 = lVar12 + 0x30;
    } while (lVar10 < lVar9);
  }
  return bVar6;
}

// HasMorphs @ 14aad6d60

bool __thiscall UE::Mutable::Private::FMesh::HasMorphs(FMesh *this)

{
  return (this->Morph).NumTotalBatches != 0;
}

// IsClosed @ 14aad8900

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall UE::Mutable::Private::FMesh::IsClosed(FMesh *this)

{
  bool bVar1;
  int iVar2;
  FMeshBufferSet *this_00;
  TArray<int,TSizedDefaultAllocator<32>_> TStack_28;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> TStack_18;
  
  if (this == (FMesh *)0x0) {
    return true;
  }
  this_00 = GetVertexBuffers(this);
  iVar2 = FMeshBufferSet::GetElementCount(this_00);
  TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_18.ArrayNum = 0;
  TStack_18.ArrayMax = 0;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&TStack_18,iVar2,Default);
  TStack_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_28.ArrayNum = 0;
  TStack_28.ArrayMax = 0;
  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar2,&TStack_28.AllocatorInstance,&TStack_28.ArrayNum,&TStack_28.ArrayMax);
  Private::`anonymous_namespace'::MeshCreateCollapsedVertexMap(this,&TStack_28,&TStack_18);
  bVar1 = Private::`anonymous_namespace'::IsMeshClosed(this,&TStack_28);
  if (TStack_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_28.AllocatorInstance.Data);
  }
  if (TStack_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_18.AllocatorInstance.Data);
  }
  return bVar1;
}

// IsForceLoad @ 14aad8a10

bool __thiscall UE::Mutable::Private::FMesh::IsForceLoad(FMesh *this)

{
  return (bool)((byte)(this->Flags >> 3) & 1);
}

// IsReference @ 14aad8ea0

bool __thiscall UE::Mutable::Private::FMesh::IsReference(FMesh *this)

{
  return (bool)((byte)(this->Flags >> 2) & 1);
}

// IsSimilar @ 14aad90e0

bool __thiscall UE::Mutable::Private::FMesh::IsSimilar(FMesh *this,FMesh *param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  FSkeleton *pFVar4;
  FSkeleton *pFVar5;
  FPhysicsBody *pFVar6;
  FPhysicsBody *pFVar7;
  
  uVar1 = (this->IndexBuffers).ElementCount;
  if (uVar1 == 0) {
    return false;
  }
  if (uVar1 != (param_1->IndexBuffers).ElementCount) {
    return false;
  }
  iVar3 = (this->IndexBuffers).Buffers.ArrayNum;
  if (iVar3 != (param_1->IndexBuffers).Buffers.ArrayNum) {
    return false;
  }
  bVar2 = CompareItems<UE::Mutable::Private::FMeshBuffer,int>
                    ((FMeshBuffer *)(this->IndexBuffers).Buffers.AllocatorInstance.Data,
                     (FMeshBuffer *)(param_1->IndexBuffers).Buffers.AllocatorInstance.Data,iVar3);
  if (!bVar2) {
    return false;
  }
  if ((this->IndexBuffers).Flags != (param_1->IndexBuffers).Flags) {
    return false;
  }
  if (this->ReferenceID != param_1->ReferenceID) {
    return false;
  }
  pFVar4 = (param_1->Skeleton).Object;
  pFVar5 = (this->Skeleton).Object;
  if (pFVar5 != pFVar4) {
    if (pFVar5 == (FSkeleton *)0x0) {
      return false;
    }
    if (pFVar4 == (FSkeleton *)0x0) {
      return false;
    }
    pFVar4 = TSharedPtr<UE::Mutable::Private::FSkeleton_const_,1>::
             operator*<UE::Mutable::Private::FSkeleton_const_>(&this->Skeleton);
    pFVar5 = TSharedPtr<UE::Mutable::Private::FSkeleton_const_,1>::
             operator*<UE::Mutable::Private::FSkeleton_const_>(&param_1->Skeleton);
    iVar3 = (pFVar4->BoneIds).ArrayNum;
    if ((iVar3 == (pFVar5->BoneIds).ArrayNum) &&
       (bVar2 = CompareItems<UE::Mutable::Private::FBoneName,int>
                          ((FBoneName *)(pFVar4->BoneIds).AllocatorInstance.Data,
                           (FBoneName *)(pFVar5->BoneIds).AllocatorInstance.Data,iVar3), bVar2)) {
      iVar3 = (pFVar4->BoneParents).ArrayNum;
      if ((iVar3 != (pFVar5->BoneParents).ArrayNum) ||
         ((iVar3 != 0 &&
          (iVar3 = memcmp((pFVar4->BoneParents).AllocatorInstance.Data,
                          (pFVar5->BoneParents).AllocatorInstance.Data,(longlong)iVar3 * 2),
          iVar3 != 0)))) goto LAB_14aad91db;
      bVar2 = true;
    }
    else {
LAB_14aad91db:
      bVar2 = false;
    }
    if (!bVar2) {
      return false;
    }
  }
  pFVar6 = (param_1->PhysicsBody).Object;
  pFVar7 = (this->PhysicsBody).Object;
  if (pFVar7 == pFVar6) goto LAB_14aad92a3;
  if (pFVar7 == (FPhysicsBody *)0x0) {
    return false;
  }
  if (pFVar6 == (FPhysicsBody *)0x0) {
    return false;
  }
  pFVar6 = TSharedPtr<UE::Mutable::Private::FPhysicsBody_const_,1>::
           operator*<UE::Mutable::Private::FPhysicsBody_const_>(&this->PhysicsBody);
  pFVar7 = TSharedPtr<UE::Mutable::Private::FPhysicsBody_const_,1>::
           operator*<UE::Mutable::Private::FPhysicsBody_const_>(&param_1->PhysicsBody);
  if ((((pFVar6->CustomId == pFVar7->CustomId) &&
       (iVar3 = (pFVar6->BoneIds).ArrayNum, iVar3 == (pFVar7->BoneIds).ArrayNum)) &&
      (bVar2 = CompareItems<UE::Mutable::Private::FBoneName,int>
                         ((FBoneName *)(pFVar6->BoneIds).AllocatorInstance.Data,
                          (FBoneName *)(pFVar7->BoneIds).AllocatorInstance.Data,iVar3), bVar2)) &&
     ((iVar3 = (pFVar6->Bodies).ArrayNum, iVar3 == (pFVar7->Bodies).ArrayNum &&
      (bVar2 = CompareItems<UE::Mutable::Private::FPhysicsBodyAggregate,int>
                         ((FPhysicsBodyAggregate *)(pFVar6->Bodies).AllocatorInstance.Data,
                          (FPhysicsBodyAggregate *)(pFVar7->Bodies).AllocatorInstance.Data,iVar3),
      bVar2)))) {
    iVar3 = (pFVar6->BodiesCustomIds).ArrayNum;
    if (((iVar3 != (pFVar7->BodiesCustomIds).ArrayNum) ||
        ((iVar3 != 0 &&
         (iVar3 = memcmp((pFVar6->BodiesCustomIds).AllocatorInstance.Data,
                         (pFVar7->BodiesCustomIds).AllocatorInstance.Data,(longlong)iVar3 << 2),
         iVar3 != 0)))) || (pFVar6->bBodiesModified != pFVar7->bBodiesModified)) goto LAB_14aad929d;
    bVar2 = true;
  }
  else {
LAB_14aad929d:
    bVar2 = false;
  }
  if (!bVar2) {
    return false;
  }
LAB_14aad92a3:
  iVar3 = (this->Surfaces).ArrayNum;
  if ((((iVar3 == (param_1->Surfaces).ArrayNum) &&
       (bVar2 = CompareItems<UE::Mutable::Private::FMeshSurface,int>
                          ((FMeshSurface *)(this->Surfaces).AllocatorInstance.Data,
                           (FMeshSurface *)(param_1->Surfaces).AllocatorInstance.Data,iVar3), bVar2)
       ) && (iVar3 = (this->Tags).ArrayNum, iVar3 == (param_1->Tags).ArrayNum)) &&
     (bVar2 = CompareItems<FString,int>
                        ((FString *)(this->Tags).AllocatorInstance.Data,
                         (FString *)(param_1->Tags).AllocatorInstance.Data,iVar3), bVar2)) {
    bVar2 = FMeshBufferSet::IsSimilarRobust(&this->VertexBuffers,&param_1->VertexBuffers,false);
    return bVar2;
  }
  return false;
}

// Log @ 14aadd0a0

void __thiscall UE::Mutable::Private::FMesh::Log(FMesh *this,FString *param_1,int param_2)

{
  ::FString::AppendChars(param_1,"Mesh:\n",6);
  ::FString::AppendChars(param_1,"Indices:\n",9);
  Private::`anonymous_namespace'::LogBuffer(param_1,&this->IndexBuffers,param_2);
  ::FString::AppendChars(param_1,"Vertices:\n",10);
  Private::`anonymous_namespace'::LogBuffer(param_1,&this->VertexBuffers,param_2);
  return;
}

// MakeIdsExplicit @ 14aadd580

void __thiscall UE::Mutable::Private::FMesh::MakeIdsExplicit(FMesh *this)

{
  TArray<UE::Mutable::Private::FMeshBuffer,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int *piVar9;
  int *piVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  bool bVar14;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_58;
  int local_54 [5];
  
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId291,"Mutable_Mesh_MakeIdsExplicit",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Mesh.cpp"
               ,0x123);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId291);
  }
  if (((this->VertexBuffers).ElementCount != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("VertexCount == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Mesh.cpp"
                         ,0x126,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_58 = 0xffffffff;
  local_54[0] = -1;
  FMeshBufferSet::FindChannel(&this->VertexBuffers,VertexIndex,0,(int *)&local_58,local_54);
  uVar4 = local_58;
  lVar11 = (longlong)(int)local_58;
  if (((int)local_58 < 0) || (local_54[0] < 0)) {
    iVar7 = (this->VertexBuffers).Buffers.ArrayNum;
    pTVar1 = &(this->VertexBuffers).Buffers;
    if (iVar7 == (this->VertexBuffers).Buffers.ArrayMax) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&pTVar1->AllocatorInstance,&(this->VertexBuffers).Buffers.ArrayMax);
    }
    (this->VertexBuffers).Buffers.ArrayNum = iVar7 + 1;
    pFVar12 = (pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x30;
    *(undefined4 *)(pFVar12 + 0xc) = 0;
    *(undefined8 *)(pFVar12 + 0x28) = 8;
    *(undefined8 *)pFVar12 = 0;
    *(undefined4 *)(pFVar12 + 8) = 0;
    *(undefined8 *)(pFVar12 + 0x10) = 0;
    *(undefined8 *)(pFVar12 + 0x18) = 0;
    *(undefined8 *)(pFVar12 + 0x20) = 0;
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,(ForAnyElementType *)pFVar12,(int *)(pFVar12 + 0xc));
    *(int *)(pFVar12 + 8) = iVar7 + 1;
    lVar8 = (longlong)iVar7;
    lVar11 = *(longlong *)pFVar12;
    *(undefined4 *)(lVar11 + lVar8 * 0x10) = 1;
    *(undefined8 *)(lVar11 + 4 + lVar8 * 0x10) = 0x14;
    *(undefined4 *)(lVar11 + 0xc + lVar8 * 0x10) = 0x10000;
    goto LAB_14aadd829;
  }
  pTVar1 = &(this->VertexBuffers).Buffers;
  if (local_54[0] == 0) {
    uVar6 = 0;
    if ((int)local_58 < (this->VertexBuffers).Buffers.ArrayNum) {
      uVar6 = ~local_58 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(int *)((pTVar1->AllocatorInstance).Data + lVar11 * 0x30 + 8) != 1) goto LAB_14aadd6c7;
  }
  else {
LAB_14aadd6c7:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("OldChannelIndex == 0 && VertexBuffers.Buffers[OldBufferIndex].Channels.Num() == 1"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Mesh.cpp"
                       ,0x132,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar6 = 0;
  if ((int)uVar4 < (this->VertexBuffers).Buffers.ArrayNum) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar12 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x30;
  if ((*(int *)(pFVar12 + 8) < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(undefined4 *)(*(longlong *)pFVar12 + 4) = 0x14;
  *(undefined4 *)(pFVar12 + 0x28) = 8;
LAB_14aadd829:
  iVar7 = (this->VertexBuffers).Buffers.ArrayNum;
  pFVar12 = (this->VertexBuffers).Buffers.AllocatorInstance.Data;
  pFVar13 = pFVar12 + (longlong)iVar7 * 0x30;
  do {
    if ((this->VertexBuffers).Buffers.ArrayNum != iVar7) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UE::Mutable::Private::FMeshBuffer,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar12 == pFVar13) {
      this->MeshIDPrefix = 0;
      if (bVar14) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    iVar2 = *(int *)(pFVar12 + 8);
    piVar10 = *(int **)pFVar12;
    piVar9 = piVar10 + (longlong)iVar2 * 4;
    while( true ) {
      if (*(int *)(pFVar12 + 8) != iVar2) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<UE::Mutable::Private::FMeshBufferChannel,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res20);
      }
      if (piVar10 == piVar9) break;
      if (*piVar10 == 10) {
        if ((*(int *)(pFVar12 + 8) != 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Buffer.Channels.Num() == 1",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Mesh.cpp"
                               ,0x153,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((*(int *)(pFVar12 + 8) < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((*(short *)(*(longlong *)pFVar12 + 0xc) != 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Buffer.Channels[0].Offset == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Mesh.cpp"
                               ,0x154,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((*(int *)(pFVar12 + 8) < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(undefined4 *)(*(longlong *)pFVar12 + 4) = 0x14;
        *(undefined4 *)(pFVar12 + 0x28) = 8;
      }
      piVar10 = piVar10 + 4;
    }
    pFVar12 = pFVar12 + 0x30;
  } while( true );
}

// MakeVertexIdsRelative @ 14aadd9d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UE::Mutable::Private::FMesh::MakeVertexIdsRelative(FMesh *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  TArray<UE::Mutable::Private::FMeshBufferChannel,TSizedDefaultAllocator<32>_> *this_00;
  FLLMScope local_res8 [2];
  FLLMScope local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  FMemScope local_60;
  FMemScope local_58 [3];
  
  local_res18[0] = -1;
  local_res20[0] = -1;
  FMeshBufferSet::FindChannel(&this->VertexBuffers,VertexIndex,0,local_res18,local_res20);
  if ((((this->MeshIDPrefix == 0) || (-1 < local_res18[0])) || (-1 < local_res20[0])) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("AreVertexIdsImplicit()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Mesh.cpp"
                         ,0x10d,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar14 = (ulonglong)_tls_index;
  uVar10 = (this->VertexBuffers).Buffers.ArrayNum;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar14 * 8) + 0x9d4c) < ::_TSS0)
     && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name136,L"MutableRuntime");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name136,false,None,Default,true);
  FMemScope::FMemScope(&local_60,&LLMScope_Name136,true);
  TArray<UE::Mutable::Private::FMeshBuffer,TSizedDefaultAllocator<32>_>::SetNum
            (&(this->VertexBuffers).Buffers,uVar10 + 1,Default);
  FMemScope::~FMemScope(&local_60);
  FLLMScope::~FLLMScope(local_res8);
  if ((((int)uVar10 < 0) || ((this->VertexBuffers).Buffers.ArrayNum <= (int)uVar10)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Buffers.IsValidIndex(BufferIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\MeshBufferSet.cpp"
                         ,0xcc,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar14 * 8) + 0x9d4c) < ::_TSS0)
     && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name205,L"MutableRuntime");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res10,LLMScope_Name205,false,None,Default,true);
  FMemScope::FMemScope(local_58,&LLMScope_Name205,true);
  iVar13 = 0;
  uVar8 = 0;
  if ((int)uVar10 < (this->VertexBuffers).Buffers.ArrayNum) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = (TArray<UE::Mutable::Private::FMeshBufferChannel,TSizedDefaultAllocator<32>_> *)
            ((this->VertexBuffers).Buffers.AllocatorInstance.Data + (longlong)(int)uVar10 * 0x30);
  TArray<UE::Mutable::Private::FMeshBufferChannel,TSizedDefaultAllocator<32>_>::SetNum
            (this_00,1,Default);
  if ((this_00->ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (this_00->AllocatorInstance).Data;
  *(undefined4 *)pFVar1 = 1;
  *(undefined8 *)(pFVar1 + 4) = 5;
  *(undefined4 *)(pFVar1 + 0xc) = 0x10000;
  uVar8 = (uint)s_meshBufferFormatData[5].SizeInBytes;
  if (uVar8 < 4) {
    uVar8 = 4;
  }
  this_00[2].ArrayNum = uVar8;
  if (((this->VertexBuffers).Flags & IsDescriptor) == None) {
    TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FMeshMemoryCounter>_>
    ::SetNumUninitialized
              ((TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FMeshMemoryCounter>_>
                *)(this_00 + 1),uVar8 * (this->VertexBuffers).ElementCount,No);
  }
  FMemScope::~FMemScope(local_58);
  FLLMScope::~FLLMScope(local_res10);
  if ((((this->VertexBuffers).Flags & IsDescriptor) != None) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsDescriptor()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\MeshBufferSet.cpp"
                         ,0x11c,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((((int)uVar10 < 0) || ((this->VertexBuffers).Buffers.ArrayNum <= (int)uVar10)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Buffers.IsValidIndex(BufferIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\MeshBufferSet.cpp"
                         ,0x11e,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar8 = 0;
  if ((int)uVar10 < (this->VertexBuffers).Buffers.ArrayNum) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar6 = _UNK_150631e0c;
  iVar5 = _UNK_150631e08;
  iVar4 = __xmm_00000003000000020000000100000000._4_4_;
  iVar3 = (int)__xmm_00000003000000020000000100000000;
  uVar8 = (this->VertexBuffers).ElementCount;
  piVar9 = *(int **)((this->VertexBuffers).Buffers.AllocatorInstance.Data +
                    (longlong)(int)uVar10 * 0x30 + 0x10);
  if (0 < (int)uVar8) {
    if (0xf < uVar8) {
      uVar10 = uVar8 & 0x8000000f;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xfffffff0) + 1;
      }
      iVar15 = 8;
      iVar12 = iVar13;
      do {
        iVar11 = iVar15 + -4;
        iVar13 = iVar12 + 0x10;
        *piVar9 = iVar12 + iVar3;
        piVar9[1] = iVar12 + iVar4;
        piVar9[2] = iVar12 + iVar5;
        piVar9[3] = iVar12 + iVar6;
        iVar12 = iVar15 + 4;
        piVar9[4] = iVar11 + iVar3;
        piVar9[5] = iVar11 + iVar4;
        piVar9[6] = iVar11 + iVar5;
        piVar9[7] = iVar11 + iVar6;
        piVar9[8] = iVar15 + iVar3;
        piVar9[9] = iVar15 + iVar4;
        piVar9[10] = iVar15 + iVar5;
        piVar9[0xb] = iVar15 + iVar6;
        piVar9[0xc] = iVar12 + iVar3;
        piVar9[0xd] = iVar12 + iVar4;
        piVar9[0xe] = iVar12 + iVar5;
        piVar9[0xf] = iVar12 + iVar6;
        piVar9 = piVar9 + 0x10;
        iVar15 = iVar15 + 0x10;
        iVar12 = iVar13;
      } while (iVar13 < (int)(uVar8 - uVar10));
      if ((int)uVar8 <= iVar13) {
        return;
      }
    }
    do {
      *piVar9 = iVar13;
      piVar9 = piVar9 + 1;
      iVar13 = iVar13 + 1;
    } while (iVar13 < (int)uVar8);
  }
  return;
}

// ResetBufferIndices @ 14aae8390

void __thiscall UE::Mutable::Private::FMesh::ResetBufferIndices(FMesh *this)

{
  FMeshBufferSet::ResetBufferIndices(&this->VertexBuffers);
  FMeshBufferSet::ResetBufferIndices(&this->IndexBuffers);
  return;
}

// ResetStaticFormatFlags @ 14aae84c0

void __thiscall UE::Mutable::Private::FMesh::ResetStaticFormatFlags(FMesh *this)

{
  bool bVar1;
  
  this->Flags = this->Flags & ~(ProjectWrappingFormat|ProjectFormat);
  bVar1 = StaticMeshFormatIdentify_Project(this);
  if (bVar1) {
    this->Flags = this->Flags | ProjectFormat;
  }
  bVar1 = StaticMeshFormatIdentify_ProjectWrapping(this);
  if (bVar1) {
    this->Flags = this->Flags | ProjectWrappingFormat;
  }
  return;
}

// Serialise @ 14aaf44d0

void __thiscall UE::Mutable::Private::FMesh::Serialise(FMesh *this,FOutputArchive *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  EMeshFlags *pEVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  uint local_res8 [4];
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  int local_68;
  undefined4 local_64;
  EMeshFlags local_60 [2];
  TPairInitializer<void_const_*_&&,int_const_&> local_58;
  int **local_48;
  int *local_40;
  
  operator<<<UE::Mutable::Private::FMeshBufferSet>(param_1,&this->IndexBuffers);
  operator<<<UE::Mutable::Private::FMeshBufferSet>(param_1,&this->VertexBuffers);
  local_res8[0] = (this->AdditionalBuffers).ArrayNum;
  Private::operator<<(param_1,local_res8);
  uVar9 = 0;
  if (local_res8[0] != 0) {
    do {
      uVar7 = (uint)uVar9;
      uVar4 = 0;
      if ((int)uVar7 < (this->AdditionalBuffers).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar8 = (this->AdditionalBuffers).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20;
      local_64 = *(undefined4 *)pFVar8;
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&local_64,4);
      operator<<<UE::Mutable::Private::FMeshBufferSet>(param_1,(FMeshBufferSet *)(pFVar8 + 8));
      uVar9 = uVar9 + 1;
    } while (uVar9 < local_res8[0]);
  }
  operator<<<TSharedPtr<UE::Mutable::Private::FLayout_const__1>_TSizedDefaultAllocator<32>_>
            (param_1,&this->Layouts);
  local_74 = (this->SkeletonIDs).ArrayNum;
  Private::operator<<(param_1,&local_74);
  if (local_74 != 0) {
    (**(code **)((longlong)*param_1->Stream + 8))
              (param_1->Stream,(this->SkeletonIDs).AllocatorInstance.Data,(ulonglong)local_74 << 2);
  }
  operator<<<UE::Mutable::Private::FSkeleton>(param_1,&this->Skeleton);
  operator<<<UE::Mutable::Private::FPhysicsBody>(param_1,&this->PhysicsBody);
  local_60[0] = this->Flags;
  Private::operator<<(param_1,local_60);
  local_res18[0] = (this->Surfaces).ArrayNum;
  Private::operator<<(param_1,local_res18);
  uVar9 = 0;
  if (local_res18[0] != 0) {
    do {
      uVar7 = (uint)uVar9;
      uVar4 = 0;
      if ((int)uVar7 < (this->Surfaces).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar8 = (this->Surfaces).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x38;
      local_70 = *(uint *)(pFVar8 + 0x20);
      Private::operator<<(param_1,&local_70);
      if (local_70 != 0) {
        pFVar6 = pFVar8;
        if (*(FScriptContainerElement **)(pFVar8 + 0x18) != (FScriptContainerElement *)0x0) {
          pFVar6 = *(FScriptContainerElement **)(pFVar8 + 0x18);
        }
        (**(code **)((longlong)*param_1->Stream + 8))
                  (param_1->Stream,pFVar6,(ulonglong)local_70 * 0x14);
      }
      Private::operator<<(param_1,(uint *)(pFVar8 + 0x28));
      Private::operator<<(param_1,(uint *)(pFVar8 + 0x2c));
      Private::operator<<(param_1,(uint *)(pFVar8 + 0x30));
      uVar9 = uVar9 + 1;
    } while (uVar9 < local_res18[0]);
  }
  operator<<<FString,TSizedDefaultAllocator<32>_>(param_1,&this->Tags);
  local_6c = (this->StreamedResources).ArrayNum;
  Private::operator<<(param_1,&local_6c);
  if (local_6c != 0) {
    (**(code **)((longlong)*param_1->Stream + 8))
              (param_1->Stream,(this->StreamedResources).AllocatorInstance.Data,
               (ulonglong)local_6c << 3);
  }
  operator<<<UE::Mutable::Private::FMesh::FBonePose,UE::Mutable::Private::
  TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::
  FMeshMemoryCounter>_>(param_1,&this->BonePoses);
  local_res20[0] = (this->BoneMap).ArrayNum;
  Private::operator<<(param_1,local_res20);
  uVar9 = 0;
  if (local_res20[0] != 0) {
    do {
      uVar7 = (uint)uVar9;
      uVar4 = 0;
      if ((int)uVar7 < (this->BoneMap).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      Private::operator<<(param_1,(uint *)((this->BoneMap).AllocatorInstance.Data +
                                          (longlong)(int)uVar7 * 4));
      uVar9 = uVar9 + 1;
    } while (uVar9 < local_res20[0]);
  }
  local_78 = (this->AdditionalPhysicsBodies).ArrayNum;
  Private::operator<<(param_1,&local_78);
  uVar9 = 0;
  if (local_78 != 0) {
    do {
      uVar7 = (uint)uVar9;
      uVar4 = 0;
      if ((int)uVar7 < (this->AdditionalPhysicsBodies).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar8 = (this->AdditionalPhysicsBodies).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10;
      piVar1 = *(int **)pFVar8;
      if (piVar1 == (int *)0x0) {
        local_60[1] = 0xffffffff;
        pEVar5 = local_60 + 1;
LAB_14aaf490f:
        Private::operator<<(param_1,(int *)pEVar5);
      }
      else {
        pEVar5 = (EMeshFlags *)
                 TMapBase<void_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,int,0>_>
                 ::Find((TMapBase<void_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,int,0>_>
                         *)&param_1->History,piVar1);
        if (pEVar5 != (EMeshFlags *)0x0) goto LAB_14aaf490f;
        local_68 = *(int *)&(param_1->History).field_0x8 - *(int *)&(param_1->History).field_0x34;
        local_48 = &local_58.Value;
        local_40 = &local_68;
        local_58.Value = piVar1;
        TSet<TTuple<void_const_*,int>,TDefaultMapHashableKeyFuncs<void_const_*,int,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<void_const_*_&&,int_const_&>_>
                  ((TSet<TTuple<void_const_*,int>,TDefaultMapHashableKeyFuncs<void_const_*,int,0>,FDefaultSetAllocator>
                    *)&param_1->History,&local_58,(bool *)&local_48);
        Private::operator<<(param_1,&local_68);
        FPhysicsBody::Serialise(*(FPhysicsBody **)pFVar8,param_1);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < local_78);
  }
  Private::operator<<(param_1,&this->MeshIDPrefix);
  if ((this->Flags & IsResourceReference) != None) {
    Private::operator<<(param_1,&this->ReferenceID);
    Private::operator<<(param_1,&this->ReferencedMorph);
  }
  return;
}

// Serialise @ 14aaf4980

void __cdecl UE::Mutable::Private::FMesh::Serialise(FMesh *param_1,FOutputArchive *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  EMeshFlags *pEVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  uint auStackX_8 [4];
  uint auStackX_18 [2];
  uint auStackX_20 [2];
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  EMeshFlags aEStack_60 [2];
  TPairInitializer<void_const_*_&&,int_const_&> TStack_58;
  int **ppiStack_48;
  int *piStack_40;
  
  operator<<<UE::Mutable::Private::FMeshBufferSet>(param_2,&param_1->IndexBuffers);
  operator<<<UE::Mutable::Private::FMeshBufferSet>(param_2,&param_1->VertexBuffers);
  auStackX_8[0] = (param_1->AdditionalBuffers).ArrayNum;
  Private::operator<<(param_2,auStackX_8);
  uVar9 = 0;
  if (auStackX_8[0] != 0) {
    do {
      uVar7 = (uint)uVar9;
      uVar4 = 0;
      if ((int)uVar7 < (param_1->AdditionalBuffers).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar8 = (param_1->AdditionalBuffers).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20;
      uStack_64 = *(undefined4 *)pFVar8;
      (**(code **)((longlong)*param_2->Stream + 8))(param_2->Stream,&uStack_64,4);
      operator<<<UE::Mutable::Private::FMeshBufferSet>(param_2,(FMeshBufferSet *)(pFVar8 + 8));
      uVar9 = uVar9 + 1;
    } while (uVar9 < auStackX_8[0]);
  }
  operator<<<TSharedPtr<UE::Mutable::Private::FLayout_const__1>_TSizedDefaultAllocator<32>_>
            (param_2,&param_1->Layouts);
  uStack_74 = (param_1->SkeletonIDs).ArrayNum;
  Private::operator<<(param_2,&uStack_74);
  if (uStack_74 != 0) {
    (**(code **)((longlong)*param_2->Stream + 8))
              (param_2->Stream,(param_1->SkeletonIDs).AllocatorInstance.Data,
               (ulonglong)uStack_74 << 2);
  }
  operator<<<UE::Mutable::Private::FSkeleton>(param_2,&param_1->Skeleton);
  operator<<<UE::Mutable::Private::FPhysicsBody>(param_2,&param_1->PhysicsBody);
  aEStack_60[0] = param_1->Flags;
  Private::operator<<(param_2,aEStack_60);
  auStackX_18[0] = (param_1->Surfaces).ArrayNum;
  Private::operator<<(param_2,auStackX_18);
  uVar9 = 0;
  if (auStackX_18[0] != 0) {
    do {
      uVar7 = (uint)uVar9;
      uVar4 = 0;
      if ((int)uVar7 < (param_1->Surfaces).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar8 = (param_1->Surfaces).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x38;
      uStack_70 = *(uint *)(pFVar8 + 0x20);
      Private::operator<<(param_2,&uStack_70);
      if (uStack_70 != 0) {
        pFVar6 = pFVar8;
        if (*(FScriptContainerElement **)(pFVar8 + 0x18) != (FScriptContainerElement *)0x0) {
          pFVar6 = *(FScriptContainerElement **)(pFVar8 + 0x18);
        }
        (**(code **)((longlong)*param_2->Stream + 8))
                  (param_2->Stream,pFVar6,(ulonglong)uStack_70 * 0x14);
      }
      Private::operator<<(param_2,(uint *)(pFVar8 + 0x28));
      Private::operator<<(param_2,(uint *)(pFVar8 + 0x2c));
      Private::operator<<(param_2,(uint *)(pFVar8 + 0x30));
      uVar9 = uVar9 + 1;
    } while (uVar9 < auStackX_18[0]);
  }
  operator<<<FString,TSizedDefaultAllocator<32>_>(param_2,&param_1->Tags);
  uStack_6c = (param_1->StreamedResources).ArrayNum;
  Private::operator<<(param_2,&uStack_6c);
  if (uStack_6c != 0) {
    (**(code **)((longlong)*param_2->Stream + 8))
              (param_2->Stream,(param_1->StreamedResources).AllocatorInstance.Data,
               (ulonglong)uStack_6c << 3);
  }
  operator<<<UE::Mutable::Private::FMesh::FBonePose,UE::Mutable::Private::
  TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::
  FMeshMemoryCounter>_>(param_2,&param_1->BonePoses);
  auStackX_20[0] = (param_1->BoneMap).ArrayNum;
  Private::operator<<(param_2,auStackX_20);
  uVar9 = 0;
  if (auStackX_20[0] != 0) {
    do {
      uVar7 = (uint)uVar9;
      uVar4 = 0;
      if ((int)uVar7 < (param_1->BoneMap).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      Private::operator<<(param_2,(uint *)((param_1->BoneMap).AllocatorInstance.Data +
                                          (longlong)(int)uVar7 * 4));
      uVar9 = uVar9 + 1;
    } while (uVar9 < auStackX_20[0]);
  }
  uStack_78 = (param_1->AdditionalPhysicsBodies).ArrayNum;
  Private::operator<<(param_2,&uStack_78);
  uVar9 = 0;
  if (uStack_78 != 0) {
    do {
      uVar7 = (uint)uVar9;
      uVar4 = 0;
      if ((int)uVar7 < (param_1->AdditionalPhysicsBodies).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar8 = (param_1->AdditionalPhysicsBodies).AllocatorInstance.Data +
               (longlong)(int)uVar7 * 0x10;
      piVar1 = *(int **)pFVar8;
      if (piVar1 == (int *)0x0) {
        aEStack_60[1] = 0xffffffff;
        pEVar5 = aEStack_60 + 1;
LAB_14aaf490f:
        Private::operator<<(param_2,(int *)pEVar5);
      }
      else {
        pEVar5 = (EMeshFlags *)
                 TMapBase<void_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,int,0>_>
                 ::Find((TMapBase<void_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,int,0>_>
                         *)&param_2->History,piVar1);
        if (pEVar5 != (EMeshFlags *)0x0) goto LAB_14aaf490f;
        iStack_68 = *(int *)&(param_2->History).field_0x8 - *(int *)&(param_2->History).field_0x34;
        ppiStack_48 = &TStack_58.Value;
        piStack_40 = &iStack_68;
        TStack_58.Value = piVar1;
        TSet<TTuple<void_const_*,int>,TDefaultMapHashableKeyFuncs<void_const_*,int,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<void_const_*_&&,int_const_&>_>
                  ((TSet<TTuple<void_const_*,int>,TDefaultMapHashableKeyFuncs<void_const_*,int,0>,FDefaultSetAllocator>
                    *)&param_2->History,&TStack_58,(bool *)&ppiStack_48);
        Private::operator<<(param_2,&iStack_68);
        FPhysicsBody::Serialise(*(FPhysicsBody **)pFVar8,param_2);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uStack_78);
  }
  Private::operator<<(param_2,&param_1->MeshIDPrefix);
  if ((param_1->Flags & IsResourceReference) != None) {
    Private::operator<<(param_2,&param_1->ReferenceID);
    Private::operator<<(param_2,&param_1->ReferencedMorph);
  }
  return;
}

// SetBoneMap @ 14aaf6560

void __thiscall
UE::Mutable::Private::FMesh::SetBoneMap
          (FMesh *this,TArray<UE::Mutable::Private::FBoneName,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<UE::Mutable::Private::FBoneName,TSizedDefaultAllocator<32>_>::operator=
            (&this->BoneMap,param_1);
  return;
}

// SetBonePose @ 14aaf6580

void __thiscall
UE::Mutable::Private::FMesh::SetBonePose
          (FMesh *this,int param_1,FBoneName *param_2,TTransform<float> *param_3,
          EBoneUsageFlags param_4)

{
  ulong64 *puVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  ulong64 uVar6;
  ulong64 uVar7;
  ulong64 uVar8;
  ulong64 uVar9;
  ulong64 uVar10;
  ulong64 uVar11;
  bool bVar12;
  longlong lVar13;
  undefined8 uStack_40;
  
  if ((param_1 < 0) || ((this->BonePoses).ArrayNum <= param_1)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("BonePoses.IsValidIndex(Index)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Mesh.cpp"
                        ,0x24c,L"");
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (param_1 < 0) {
      return;
    }
  }
  if (param_1 < (this->BonePoses).ArrayNum) {
    uVar2 = param_2->Id;
    uVar6 = (param_3->Rotation).m128_u64[0];
    uVar7 = (param_3->Rotation).m128_u64[1];
    uVar8 = (param_3->Translation).m128_u64[0];
    uVar9 = (param_3->Translation).m128_u64[1];
    uVar5 = 0;
    if (param_1 < (this->BonePoses).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    uVar10 = (param_3->Scale3D).m128_u64[0];
    uVar11 = (param_3->Scale3D).m128_u64[1];
    if ((uVar5 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar3 = (this->BonePoses).AllocatorInstance._padding_;
    lVar13 = (longlong)param_1 * 0x40;
    *(undefined8 *)(lVar13 + lVar3) = CONCAT44(param_4,uVar2);
    ((undefined8 *)(lVar13 + lVar3))[1] = uStack_40;
    puVar1 = (ulong64 *)(lVar13 + 0x10 + lVar3);
    *puVar1 = uVar6;
    puVar1[1] = uVar7;
    puVar1 = (ulong64 *)(lVar13 + 0x20 + lVar3);
    *puVar1 = uVar8;
    puVar1[1] = uVar9;
    puVar1 = (ulong64 *)(lVar13 + 0x30 + lVar3);
    *puVar1 = uVar10;
    puVar1[1] = uVar11;
  }
  return;
}

// SetBonePoseCount @ 14aaf66c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UE::Mutable::Private::FMesh::SetBonePoseCount(FMesh *this,int param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name575,L"MutableRuntime");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name575,false,None,Default,true);
  FMemScope::FMemScope(local_res18,&LLMScope_Name575,true);
  TArray<UE::Mutable::Private::FMesh::FBonePose,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FMeshMemoryCounter>_>
  ::SetNum(&this->BonePoses,param_1,Default);
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// SetLayout @ 14aaf72e0

void __thiscall
UE::Mutable::Private::FMesh::SetLayout
          (FMesh *this,int param_1,TSharedPtr<UE::Mutable::Private::FLayout_const_,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FLayout *pFVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  
  if ((param_1 < 0) || ((this->Layouts).ArrayNum <= param_1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Layouts.IsValidIndex(LayoutIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Mesh.cpp"
                       ,0x1fc,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar6 = 0;
  if (param_1 < (this->Layouts).ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  pFVar2 = param_2->Object;
  pFVar7 = (this->Layouts).AllocatorInstance.Data + (longlong)param_1 * 0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = *(TReferenceControllerBase<1> **)(pFVar7 + 8);
  *(FLayout **)pFVar7 = pFVar2;
  *(TReferenceControllerBase<1> **)(pFVar7 + 8) = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// SetPhysicsBody @ 14aaf8f90

void __thiscall
UE::Mutable::Private::FMesh::SetPhysicsBody
          (FMesh *this,TSharedPtr<UE::Mutable::Private::FPhysicsBody_const_,1> *param_1)

{
  FPhysicsBody *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pFVar1 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->PhysicsBody).SharedReferenceCount.ReferenceController;
  (this->PhysicsBody).Object = pFVar1;
  (this->PhysicsBody).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetReferencedMorph @ 14aaf8ff0

void __thiscall UE::Mutable::Private::FMesh::SetReferencedMorph(FMesh *this,FString *param_1)

{
  ::FString::operator=(&this->ReferencedMorph,param_1);
  return;
}

// SetSkeleton @ 14aaf9000

void __thiscall
UE::Mutable::Private::FMesh::SetSkeleton
          (FMesh *this,TSharedPtr<UE::Mutable::Private::FSkeleton_const_,1> *param_1)

{
  FSkeleton *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pFVar1 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->Skeleton).SharedReferenceCount.ReferenceController;
  (this->Skeleton).Object = pFVar1;
  (this->Skeleton).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetTag @ 14aaf9380

void __thiscall UE::Mutable::Private::FMesh::SetTag(FMesh *this,int param_1,FString *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FMemScope local_res8;
  FLLMScope local_res10 [2];
  
  piVar1 = &(this->Tags).ArrayNum;
  if (((param_1 < 0) || (*piVar1 <= param_1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Tags.IsValidIndex(TagIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Mesh.cpp"
                         ,0x221,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name546,L"MutableRuntime");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res10,LLMScope_Name546,false,None,Default,true);
  FMemScope::FMemScope(&local_res8,&LLMScope_Name546,true);
  if ((-1 < param_1) && (param_1 < *piVar1)) {
    uVar4 = 0;
    if (param_1 < (this->Tags).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    ::FString::operator=
              ((FString *)((this->Tags).AllocatorInstance.Data + (longlong)param_1 * 0x10),param_2);
  }
  FMemScope::~FMemScope(&local_res8);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// SetTagCount @ 14aaf9500

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UE::Mutable::Private::FMesh::SetTagCount(FMesh *this,int param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name522,L"MutableRuntime");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name522,false,None,Default,true);
  FMemScope::FMemScope(local_res18,&LLMScope_Name522,true);
  TArray<FString,TSizedDefaultAllocator<32>_>::SetNum(&this->Tags,param_1,Default);
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// StaticUnserialise @ 14aafa6a0

TSharedPtr<UE::Mutable::Private::FMesh,1> * __cdecl
UE::Mutable::Private::FMesh::StaticUnserialise
          (TSharedPtr<UE::Mutable::Private::FMesh,1> *__return_storage_ptr__,FInputArchive *param_1)

{
  code *pcVar1;
  bool bVar2;
  TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1> *pTVar3;
  TSharedPtr<UE::Mutable::Private::FMesh,1> *pTVar4;
  bool bVar5;
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId34,"Mutable_MeshUnserialise",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Mesh.cpp"
               ,0x22);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId34);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name35,L"MutableRuntime");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name35,false,None,Default,true);
  FMemScope::FMemScope(local_res18,&LLMScope_Name35,true);
  pTVar3 = ::operator_new(0x1a8);
  if (pTVar3 == (TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1> *)0x0) {
    pTVar3 = (TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1> *)0x0;
    __return_storage_ptr__->Object = (FMesh *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3 = SharedPointerInternals::TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1>::
             TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1><>(pTVar3);
    if ((&pTVar3->ObjectStorage == (TTypeCompatibleBytes<UE::Mutable::Private::FMesh> *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<UE::Mutable::Private::FMesh,1> *)(*pcVar1)();
      return pTVar4;
    }
    __return_storage_ptr__->Object = (FMesh *)&pTVar3->ObjectStorage;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)pTVar3;
    if (pTVar3 != (TIntrusiveReferenceController<UE::Mutable::Private::FMesh,1> *)0x0) {
      LOCK();
      *(int *)&pTVar3->_padding_ = (int)pTVar3->_padding_ + 1;
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar3);
  if ((__return_storage_ptr__->Object == (FMesh *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TSharedPtr<UE::Mutable::Private::FMesh,1> *)(*pcVar1)();
    return pTVar4;
  }
  Unserialise(__return_storage_ptr__->Object,param_1);
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// Unserialise @ 14aafd1c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UE::Mutable::Private::FMesh::Unserialise(FMesh *this,FInputArchive *param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  ulonglong uVar8;
  uint local_res8 [2];
  EMeshFlags local_res18 [2];
  uint local_res20 [2];
  undefined1 local_68 [8];
  float local_60 [2];
  undefined8 local_58;
  float local_50 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  
  operator>><UE::Mutable::Private::FMeshBufferSet>(param_1,&this->IndexBuffers);
  operator>><UE::Mutable::Private::FMeshBufferSet>(param_1,&this->VertexBuffers);
  operator>><TTuple<enum_UE::Mutable::Private::EMeshBufferType,UE::Mutable::Private::
  FMeshBufferSet>_TSizedDefaultAllocator<32>_>(param_1,&this->AdditionalBuffers);
  operator>><TSharedPtr<UE::Mutable::Private::FLayout_const__1>_TSizedDefaultAllocator<32>_>
            (param_1,&this->Layouts);
  operator>><TSizedDefaultAllocator<32>_>(param_1,&this->SkeletonIDs);
  operator>><UE::Mutable::Private::FSkeleton>(param_1,&this->Skeleton);
  operator>><UE::Mutable::Private::FPhysicsBody>(param_1,&this->PhysicsBody);
  Private::operator>>(param_1,local_res18);
  this->Flags = local_res18[0];
  operator>><UE::Mutable::Private::FMeshSurface_TSizedDefaultAllocator<32>_>
            (param_1,&this->Surfaces);
  operator>><FString,TSizedDefaultAllocator<32>_>(param_1,&this->Tags);
  operator>><TSizedDefaultAllocator<32>_>(param_1,&this->StreamedResources);
  Private::operator>>(param_1,local_res8);
  TArray<UE::Mutable::Private::FMesh::FBonePose,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FMeshMemoryCounter>_>
  ::SetNum(&this->BonePoses,local_res8[0],Default);
  uVar8 = 0;
  if (local_res8[0] != 0) {
    do {
      uVar7 = (uint)uVar8;
      uVar5 = 0;
      if ((int)uVar7 < (this->BonePoses).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      puVar6 = (uint *)((longlong)(int)uVar7 * 0x40 + (this->BonePoses).AllocatorInstance._padding_)
      ;
      Private::operator>>(param_1,puVar6);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res20,4);
      puVar6[1] = local_res20[0];
      Private::operator>>(param_1,(float *)&local_48);
      Private::operator>>(param_1,(float *)((longlong)&local_48 + 4));
      Private::operator>>(param_1,(float *)&uStack_40);
      Private::operator>>(param_1,(float *)((longlong)&uStack_40 + 4));
      Private::operator>>(param_1,(float *)local_68);
      Private::operator>>(param_1,(float *)(local_68 + 4));
      Private::operator>>(param_1,(float *)(local_68 + 8));
      Private::operator>>(param_1,(float *)&local_58);
      Private::operator>>(param_1,(float *)((longlong)&local_58 + 4));
      Private::operator>>(param_1,local_50);
      uVar8 = uVar8 + 1;
      auVar2._12_4_ = 0;
      auVar2._0_12_ = _local_68;
      *(undefined1 (*) [16])(puVar6 + 8) = auVar2;
      auVar3._8_4_ = local_50[0];
      auVar3._0_8_ = local_58;
      auVar3._12_4_ = 0;
      *(undefined1 (*) [16])(puVar6 + 0xc) = auVar3;
      *(undefined8 *)(puVar6 + 4) = local_48;
      *(undefined8 *)(puVar6 + 6) = uStack_40;
    } while (uVar8 < local_res8[0]);
  }
  operator>><UE::Mutable::Private::FBoneName_TSizedDefaultAllocator<32>_>(param_1,&this->BoneMap);
  operator>><TSharedPtr<UE::Mutable::Private::FPhysicsBody_const__1>_TSizedDefaultAllocator<32>_>
            (param_1,&this->AdditionalPhysicsBodies);
  Private::operator>>(param_1,&this->MeshIDPrefix);
  if ((this->Flags & IsResourceReference) != None) {
    Private::operator>>(param_1,&this->ReferenceID);
    Private::operator>>(param_1,&this->ReferencedMorph);
  }
  return;
}

// FMesh @ 14ab5eb30

FMesh * __thiscall UE::Mutable::Private::FMesh::FMesh(FMesh *this)

{
  this->_padding_ = (longlong)&___7FMesh_Private_Mutable_UE__6B_;
  this->InternalId = 0;
  this->Flags = None;
  (this->SkeletalMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkeletalMeshes).ArrayNum = 0;
  (this->SkeletalMeshes).ArrayMax = 0;
  this->ReferenceID = 0;
  (this->ReferencedMorph).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReferencedMorph).Data.ArrayNum = 0;
  (this->ReferencedMorph).Data.ArrayMax = 0;
  this->MeshIDPrefix = 0;
  (this->VertexBuffers).ElementCount = 0;
  (this->VertexBuffers).Flags = None;
  (this->VertexBuffers).Buffers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexBuffers).Buffers.ArrayNum = 0;
  (this->VertexBuffers).Buffers.ArrayMax = 0;
  (this->IndexBuffers).ElementCount = 0;
  (this->IndexBuffers).Flags = None;
  (this->IndexBuffers).Buffers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IndexBuffers).Buffers.ArrayNum = 0;
  (this->IndexBuffers).Buffers.ArrayMax = 0;
  (this->MorphDataBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MorphDataBuffer).ArrayNum = 0;
  (this->MorphDataBuffer).ArrayMax = 0;
  (this->AdditionalBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalBuffers).ArrayNum = 0;
  (this->AdditionalBuffers).ArrayMax = 0;
  (this->Surfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Surfaces).ArrayNum = 0;
  (this->Surfaces).ArrayMax = 0;
  (this->Morph).Names.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Morph).Names.ArrayNum = 0;
  (this->Morph).Names.ArrayMax = 0;
  (this->Morph).MaximumValuePerMorph.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Morph).MaximumValuePerMorph.ArrayNum = 0;
  (this->Morph).MaximumValuePerMorph.ArrayMax = 0;
  (this->Morph).MinimumValuePerMorph.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Morph).MinimumValuePerMorph.ArrayNum = 0;
  (this->Morph).MinimumValuePerMorph.ArrayMax = 0;
  (this->Morph).BatchStartOffsetPerMorph.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Morph).BatchStartOffsetPerMorph.ArrayNum = 0;
  (this->Morph).BatchStartOffsetPerMorph.ArrayMax = 0;
  (this->Morph).BatchesPerMorph.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Morph).BatchesPerMorph.ArrayNum = 0;
  (this->Morph).BatchesPerMorph.ArrayMax = 0;
  (this->Morph).NumTotalBatches = 0;
  (this->Morph).PositionPrecision = 0.0;
  (this->Morph).TangentZPrecision = 0.0;
  (this->SkeletonIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkeletonIDs).ArrayNum = 0;
  (this->SkeletonIDs).ArrayMax = 0;
  (this->Skeleton).Object = (FSkeleton *)0x0;
  (this->Skeleton).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->PhysicsBody).Object = (FPhysicsBody *)0x0;
  (this->PhysicsBody).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->AdditionalPhysicsBodies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalPhysicsBodies).ArrayNum = 0;
  (this->AdditionalPhysicsBodies).ArrayMax = 0;
  (this->Layouts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Layouts).ArrayNum = 0;
  (this->Layouts).ArrayMax = 0;
  (this->Tags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tags).ArrayNum = 0;
  (this->Tags).ArrayMax = 0;
  (this->StreamedResources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StreamedResources).ArrayNum = 0;
  (this->StreamedResources).ArrayMax = 0;
  (this->BonePoses).AllocatorInstance._padding_ = 0;
  (this->BonePoses).AllocatorInstance.AllocSize = 0;
  (this->BonePoses).ArrayNum = 0;
  (this->BonePoses).ArrayMax = 0;
  (this->BoneMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneMap).ArrayNum = 0;
  (this->BoneMap).ArrayMax = 0;
  return this;
}

