// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 21

// ActionGroup @ 147b387f0

ActionGroup * __thiscall
FGraphActionListBuilderBase::ActionGroup::ActionGroup(ActionGroup *this,ActionGroup *param_1)

{
  (this->Actions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Actions).ArrayNum = 0;
  (this->Actions).ArrayMax = 0;
  (this->RootCategory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootCategory).Data.ArrayNum = 0;
  (this->RootCategory).Data.ArrayMax = 0;
  (this->CategoryChain).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CategoryChain).ArrayNum = 0;
  (this->CategoryChain).ArrayMax = 0;
  Move(this,param_1);
  return this;
}

// ActionGroup @ 147b38830

ActionGroup * __thiscall
FGraphActionListBuilderBase::ActionGroup::ActionGroup(ActionGroup *this,ActionGroup *param_1)

{
  (this->Actions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Actions).ArrayNum = 0;
  (this->Actions).ArrayMax = 0;
  (this->RootCategory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootCategory).Data.ArrayNum = 0;
  (this->RootCategory).Data.ArrayMax = 0;
  (this->CategoryChain).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CategoryChain).ArrayNum = 0;
  (this->CategoryChain).ArrayMax = 0;
  TArray<TSharedPtr<FEdGraphSchemaAction,1>,TSizedDefaultAllocator<32>_>::operator=
            (&this->Actions,&param_1->Actions);
  ::FString::operator=(&this->RootCategory,&param_1->RootCategory);
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            (&this->CategoryChain,&param_1->CategoryChain);
  return this;
}

// ActionGroup @ 147b388b0

ActionGroup * __thiscall
FGraphActionListBuilderBase::ActionGroup::ActionGroup
          (ActionGroup *this,
          TArray<TSharedPtr<FEdGraphSchemaAction,1>,TSizedDefaultAllocator<32>_> *param_1,
          FString *param_2)

{
  FScriptContainerElement *pFVar1;
  
  (this->RootCategory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Actions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Actions).ArrayNum = 0;
  (this->Actions).ArrayMax = 0;
  (this->RootCategory).Data.AllocatorInstance.Data = (param_2->Data).AllocatorInstance.Data;
  (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootCategory).Data.ArrayNum = (param_2->Data).ArrayNum;
  (this->RootCategory).Data.ArrayMax = (param_2->Data).ArrayMax;
  (param_2->Data).ArrayNum = 0;
  (param_2->Data).ArrayMax = 0;
  (this->CategoryChain).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CategoryChain).ArrayNum = 0;
  (this->CategoryChain).ArrayMax = 0;
  TArray<TSharedPtr<FEdGraphSchemaAction,1>,TSizedDefaultAllocator<32>_>::operator=
            (&this->Actions,param_1);
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// ActionGroup @ 147b38920

ActionGroup * __thiscall
FGraphActionListBuilderBase::ActionGroup::ActionGroup
          (ActionGroup *this,TSharedPtr<FEdGraphSchemaAction,1> *param_1,FString *param_2)

{
  TSharedPtr<FEdGraphSchemaAction,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ActionGroup *pAVar6;
  FScriptContainerElement *pFVar7;
  
  (this->RootCategory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Actions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Actions).ArrayNum = 0;
  (this->Actions).ArrayMax = 0;
  (this->RootCategory).Data.AllocatorInstance.Data = (param_2->Data).AllocatorInstance.Data;
  (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootCategory).Data.ArrayNum = (param_2->Data).ArrayNum;
  (this->RootCategory).Data.ArrayMax = (param_2->Data).ArrayMax;
  (param_2->Data).ArrayNum = 0;
  (param_2->Data).ArrayMax = 0;
  (this->CategoryChain).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CategoryChain).ArrayNum = 0;
  (this->CategoryChain).ArrayMax = 0;
  pTVar1 = (TSharedPtr<FEdGraphSchemaAction,1> *)(this->Actions).AllocatorInstance.Data;
  if ((pTVar1 <= param_1) && (param_1 < pTVar1 + (this->Actions).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pAVar6 = (ActionGroup *)(*pcVar3)();
      return pAVar6;
    }
  }
  iVar5 = (this->Actions).ArrayNum;
  if (iVar5 == (this->Actions).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,&(this->Actions).ArrayMax);
  }
  (this->Actions).ArrayNum = iVar5 + 1;
  pFVar7 = (this->Actions).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
  *(FEdGraphSchemaAction **)pFVar7 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar7 + 8) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  pFVar7 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  return this;
}

// ~ActionGroup @ 147b3c9d0

void __thiscall FGraphActionListBuilderBase::ActionGroup::~ActionGroup(ActionGroup *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FString,int>
            ((FString *)(this->CategoryChain).AllocatorInstance.Data,(this->CategoryChain).ArrayNum)
  ;
  pFVar1 = (this->CategoryChain).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RootCategory).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<FEdGraphSchemaAction,1>,int>
            ((TSharedPtr<FEdGraphSchemaAction,1> *)(this->Actions).AllocatorInstance.Data,
             (this->Actions).ArrayNum);
  pFVar1 = (this->Actions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~FGraphActionListBuilderBase @ 147b3cf80

void __thiscall
FGraphActionListBuilderBase::~FGraphActionListBuilderBase(FGraphActionListBuilderBase *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FGraphActionListBuilderBase__6B_;
  DestructItems<TSharedPtr<FEdGraphSchemaAction,1>,int>
            ((TSharedPtr<FEdGraphSchemaAction,1> *)(this->Entries).AllocatorInstance.Data,
             (this->Entries).ArrayNum);
  pFVar1 = (this->Entries).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 147b3dd70

ActionGroup * __thiscall
FGraphActionListBuilderBase::ActionGroup::operator=(ActionGroup *this,ActionGroup *param_1)

{
  if (param_1 != this) {
    Move(this,param_1);
  }
  return this;
}

// operator= @ 147b3dda0

ActionGroup * __thiscall
FGraphActionListBuilderBase::ActionGroup::operator=(ActionGroup *this,ActionGroup *param_1)

{
  if (param_1 != this) {
    TArray<TSharedPtr<FEdGraphSchemaAction,1>,TSizedDefaultAllocator<32>_>::operator=
              (&this->Actions,&param_1->Actions);
    ::FString::operator=(&this->RootCategory,&param_1->RootCategory);
    TArray<FString,TSizedDefaultAllocator<32>_>::operator=
              (&this->CategoryChain,&param_1->CategoryChain);
  }
  return this;
}

// AddAction @ 147b41e40

void __thiscall
FGraphActionListBuilderBase::AddAction
          (FGraphActionListBuilderBase *this,TSharedPtr<FEdGraphSchemaAction,1> *param_1)

{
  TArray<TSharedPtr<FEdGraphSchemaAction,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TSharedPtr<FEdGraphSchemaAction,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  
  pTVar1 = &this->Entries;
  pTVar3 = (TSharedPtr<FEdGraphSchemaAction,1> *)(pTVar1->AllocatorInstance).Data;
  if ((pTVar3 <= param_1) && (param_1 < pTVar3 + (this->Entries).ArrayMax)) {
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
  iVar7 = (this->Entries).ArrayNum;
  piVar2 = &(this->Entries).ArrayMax;
  if (iVar7 == *piVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Entries).ArrayNum = iVar7 + 1;
  pFVar8 = (pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
  *(FEdGraphSchemaAction **)pFVar8 = param_1->Object;
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar8 + 8) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  return;
}

// AddAction @ 147b41f10

void __thiscall
FGraphActionListBuilderBase::AddAction
          (FGraphActionListBuilderBase *this,TSharedPtr<FEdGraphSchemaAction,1> *param_1,
          FString *param_2)

{
  TArray<TSharedPtr<FEdGraphSchemaAction,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TSharedPtr<FEdGraphSchemaAction,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  
  pTVar1 = &this->Entries;
  pTVar3 = (TSharedPtr<FEdGraphSchemaAction,1> *)(pTVar1->AllocatorInstance).Data;
  if ((pTVar3 <= param_1) && (param_1 < pTVar3 + (this->Entries).ArrayMax)) {
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
  iVar7 = (this->Entries).ArrayNum;
  piVar2 = &(this->Entries).ArrayMax;
  if (iVar7 == *piVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Entries).ArrayNum = iVar7 + 1;
  pFVar8 = (pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
  *(FEdGraphSchemaAction **)pFVar8 = param_1->Object;
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar8 + 8) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  return;
}

// AddActionList @ 147b421a0

void __thiscall
FGraphActionListBuilderBase::AddActionList
          (FGraphActionListBuilderBase *this,
          TArray<TSharedPtr<FEdGraphSchemaAction,1>,TSizedDefaultAllocator<32>_> *param_1,
          FString *param_2)

{
  TArray<TSharedPtr<FEdGraphSchemaAction,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  
  pTVar1 = &this->Entries;
  if (param_1->ArrayNum < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar8 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar8 <= pFVar3) && (pFVar3 < pFVar8 + (longlong)(this->Entries).ArrayMax * 0x10)) {
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
  iVar7 = (this->Entries).ArrayNum;
  piVar2 = &(this->Entries).ArrayMax;
  if (iVar7 == *piVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Entries).ArrayNum = iVar7 + 1;
  pFVar8 = (pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
  *(undefined8 *)pFVar8 = *(undefined8 *)pFVar3;
  lVar4 = *(longlong *)(pFVar3 + 8);
  *(longlong *)(pFVar8 + 8) = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  return;
}

// Append @ 147b44f60

void __thiscall
FGraphActionListBuilderBase::Append
          (FGraphActionListBuilderBase *this,FGraphActionListBuilderBase *param_1)

{
  TArray<TSharedPtr<FEdGraphSchemaAction,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  pTVar1 = &this->Entries;
  if (pTVar1 == &param_1->Entries) {
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
  iVar2 = (param_1->Entries).ArrayNum;
  if (iVar2 != 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar2,&pTVar1->AllocatorInstance,&(this->Entries).ArrayNum,
                       &(this->Entries).ArrayMax);
    memmove((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x10,
            (param_1->Entries).AllocatorInstance.Data,(longlong)iVar2 << 4);
    (param_1->Entries).ArrayNum = 0;
  }
  return;
}

// Copy @ 147b4ccc0

void __thiscall
FGraphActionListBuilderBase::ActionGroup::Copy(ActionGroup *this,ActionGroup *param_1)

{
  TArray<TSharedPtr<FEdGraphSchemaAction,1>,TSizedDefaultAllocator<32>_>::operator=
            (&this->Actions,&param_1->Actions);
  ::FString::operator=(&this->RootCategory,&param_1->RootCategory);
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            (&this->CategoryChain,&param_1->CategoryChain);
  return;
}

// Empty @ 147b5f010

void __thiscall FGraphActionListBuilderBase::Empty(FGraphActionListBuilderBase *this)

{
  int *piVar1;
  
  DestructItems<TSharedPtr<FEdGraphSchemaAction,1>,int>
            ((TSharedPtr<FEdGraphSchemaAction,1> *)(this->Entries).AllocatorInstance.Data,
             (this->Entries).ArrayNum);
  piVar1 = &(this->Entries).ArrayMax;
  (this->Entries).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->Entries).AllocatorInstance,0,piVar1);
  }
  return;
}

// GetAction @ 147b63580

ActionGroup * __thiscall
FGraphActionListBuilderBase::GetAction
          (FGraphActionListBuilderBase *this,ActionGroup *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ActionGroup *pAVar5;
  FScriptContainerElement *pFVar6;
  undefined8 local_18;
  TReferenceControllerBase<1> *local_10;
  
  uVar3 = 0;
  if (param_1 < (this->Entries).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pAVar5 = (ActionGroup *)(*pcVar1)();
      return pAVar5;
    }
  }
  pFVar6 = (this->Entries).AllocatorInstance.Data + (longlong)param_1 * 0x10;
  local_18 = *(undefined8 *)pFVar6;
  local_10 = *(TReferenceControllerBase<1> **)(pFVar6 + 8);
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  (__return_storage_ptr__->Actions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Actions).ArrayNum = 0;
  (__return_storage_ptr__->Actions).ArrayMax = 0;
  (__return_storage_ptr__->RootCategory).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->RootCategory).Data.ArrayNum = 0;
  (__return_storage_ptr__->RootCategory).Data.ArrayMax = 0;
  (__return_storage_ptr__->CategoryChain).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->CategoryChain).ArrayNum = 0;
  (__return_storage_ptr__->CategoryChain).ArrayMax = 0;
  pFVar6 = (__return_storage_ptr__->Actions).AllocatorInstance.Data;
  if ((pFVar6 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar6 + (longlong)(__return_storage_ptr__->Actions).ArrayMax * 0x10)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pAVar5 = (ActionGroup *)(*pcVar1)();
      return pAVar5;
    }
  }
  iVar4 = (__return_storage_ptr__->Actions).ArrayNum;
  if (iVar4 == (__return_storage_ptr__->Actions).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)__return_storage_ptr__,
                       &(__return_storage_ptr__->Actions).ArrayMax);
  }
  pFVar6 = (__return_storage_ptr__->Actions).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  (__return_storage_ptr__->Actions).ArrayNum = iVar4 + 1;
  *(undefined8 *)pFVar6 = local_18;
  *(TReferenceControllerBase<1> **)(pFVar6 + 8) = local_10;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return __return_storage_ptr__;
}

// GetCategoryChain @ 147b64370

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
FGraphActionListBuilderBase::ActionGroup::GetCategoryChain(ActionGroup *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FGraphActionListBuilderBase::ActionGroup::GetCategoryChain'::__l2::
             _dynamic_atexit_destructor_for__Dummy__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::Dummy;
}

// GetNumActions @ 147b694d0

int __thiscall FGraphActionListBuilderBase::GetNumActions(FGraphActionListBuilderBase *this)

{
  return (this->Entries).ArrayNum;
}

// GetSchemaAction @ 147b6e9e0

TSharedPtr<FEdGraphSchemaAction,1> * __thiscall
FGraphActionListBuilderBase::GetSchemaAction(FGraphActionListBuilderBase *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TSharedPtr<FEdGraphSchemaAction,1> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Entries).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<FEdGraphSchemaAction,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TSharedPtr<FEdGraphSchemaAction,1> *)
         ((this->Entries).AllocatorInstance.Data + (longlong)param_1 * 0x10);
}

// InitCategoryChain @ 147b750c0

void __thiscall FGraphActionListBuilderBase::ActionGroup::InitCategoryChain(ActionGroup *this)

{
  return;
}

// Move @ 147b78fa0

void __thiscall
FGraphActionListBuilderBase::ActionGroup::Move(ActionGroup *this,ActionGroup *param_1)

{
  FString *pFVar1;
  FString *pFVar2;
  FScriptContainerElement *pFVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar5;
  
  if (this != param_1) {
    DestructItems<TSharedPtr<FEdGraphSchemaAction,1>,int>
              ((TSharedPtr<FEdGraphSchemaAction,1> *)(this->Actions).AllocatorInstance.Data,
               (this->Actions).ArrayNum);
    pFVar3 = (this->Actions).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (this->Actions).AllocatorInstance.Data = (param_1->Actions).AllocatorInstance.Data;
    (param_1->Actions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Actions).ArrayNum = (param_1->Actions).ArrayNum;
    (this->Actions).ArrayMax = (param_1->Actions).ArrayMax;
    (param_1->Actions).ArrayNum = 0;
    (param_1->Actions).ArrayMax = 0;
  }
  pFVar1 = &param_1->RootCategory;
  pFVar2 = &this->RootCategory;
  if (pFVar2 != pFVar1) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->RootCategory).Data.ArrayNum = (param_1->RootCategory).Data.ArrayNum;
    (this->RootCategory).Data.ArrayMax = (param_1->RootCategory).Data.ArrayMax;
    (param_1->RootCategory).Data.ArrayNum = 0;
    (param_1->RootCategory).Data.ArrayMax = 0;
  }
  pTVar5 = &param_1->CategoryChain;
  pTVar4 = &this->CategoryChain;
  if (pTVar4 != pTVar5) {
    DestructItems<FString,int>
              ((FString *)(pTVar4->AllocatorInstance).Data,(this->CategoryChain).ArrayNum);
    pFVar3 = (pTVar4->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->CategoryChain).ArrayNum = (param_1->CategoryChain).ArrayNum;
    (this->CategoryChain).ArrayMax = (param_1->CategoryChain).ArrayMax;
    (param_1->CategoryChain).ArrayNum = 0;
    (param_1->CategoryChain).ArrayMax = 0;
  }
  return;
}

// PerformAction @ 147b7d770

void __thiscall
FGraphActionListBuilderBase::ActionGroup::PerformAction
          (ActionGroup *this,UEdGraph *param_1,
          TArray<UEdGraphPin_*,TSizedDefaultAllocator<32>_> *param_2,
          FDeprecateVector2DParameter *param_3)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  
  iVar9 = (this->Actions).ArrayNum;
  uVar7 = 0;
  if (0 < iVar9) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < iVar9) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar1 = (this->Actions).AllocatorInstance.Data;
      pTVar2 = *(TReferenceControllerBase<1> **)(pFVar1 + lVar8 + 8);
      plVar3 = *(longlong **)(pFVar1 + lVar8);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x18))(plVar3,param_1,param_2,param_3,1);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      iVar9 = (this->Actions).ArrayNum;
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x10;
    } while ((int)uVar7 < iVar9);
  }
  return;
}

