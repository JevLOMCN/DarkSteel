// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FCategorizedGraphActionListBuilder @ 147b38ad0

FCategorizedGraphActionListBuilder * __thiscall
FCategorizedGraphActionListBuilder::FCategorizedGraphActionListBuilder
          (FCategorizedGraphActionListBuilder *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  
  (this->Category).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FCategorizedGraphActionListBuilder__6B_;
  (this->Category).Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Category).Data.ArrayNum = (param_1->Data).ArrayNum;
  (this->Category).Data.ArrayMax = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// AddAction @ 147b41e20

void __thiscall
FCategorizedGraphActionListBuilder::AddAction
          (FCategorizedGraphActionListBuilder *this,TSharedPtr<FEdGraphSchemaAction,1> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  
  plVar1 = &this->_padding_;
  if (((TSharedPtr<FEdGraphSchemaAction,1> *)*plVar1 <= param_1) &&
     (param_1 < (TSharedPtr<FEdGraphSchemaAction,1> *)*plVar1 +
                *(int *)((longlong)&this->_padding_ + 4))) {
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
  iVar6 = (int)this->_padding_;
  piVar2 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)plVar1,piVar2);
  }
  *(int *)&this->_padding_ = iVar6 + 1;
  puVar7 = (undefined8 *)(*plVar1 + (longlong)iVar6 * 0x10);
  *puVar7 = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  puVar7[1] = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  return;
}

// AddAction @ 147b41e30

void __thiscall
FCategorizedGraphActionListBuilder::AddAction
          (FCategorizedGraphActionListBuilder *this,TSharedPtr<FEdGraphSchemaAction,1> *param_1,
          FString *param_2)

{
  longlong *plVar1;
  int *piVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  
  plVar1 = &this->_padding_;
  if (((TSharedPtr<FEdGraphSchemaAction,1> *)*plVar1 <= param_1) &&
     (param_1 < (TSharedPtr<FEdGraphSchemaAction,1> *)*plVar1 +
                *(int *)((longlong)&this->_padding_ + 4))) {
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
  iVar6 = (int)this->_padding_;
  piVar2 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)plVar1,piVar2);
  }
  *(int *)&this->_padding_ = iVar6 + 1;
  puVar7 = (undefined8 *)(*plVar1 + (longlong)iVar6 * 0x10);
  *puVar7 = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  puVar7[1] = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  return;
}

// AddActionList @ 147b41fe0

void __thiscall
FCategorizedGraphActionListBuilder::AddActionList
          (FCategorizedGraphActionListBuilder *this,
          TArray<TSharedPtr<FEdGraphSchemaAction,1>,TSizedDefaultAllocator<32>_> *param_1,
          FString *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FString *pFVar8;
  undefined8 *puVar9;
  FString local_28;
  FString local_18;
  
  pFVar8 = ::FString::FString(&local_18,&this->Category);
  local_28.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
  (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = (pFVar8->Data).ArrayNum;
  local_28.Data.ArrayMax = (pFVar8->Data).ArrayMax;
  (pFVar8->Data).ArrayNum = 0;
  (pFVar8->Data).ArrayMax = 0;
  if ((1 < (param_2->Data).ArrayNum) && (1 < local_28.Data.ArrayNum)) {
    ::FString::AppendChars(&local_28,L"|",1);
  }
  iVar2 = (param_2->Data).ArrayNum;
  iVar7 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar7 = 0;
  }
  ::FString::AppendChars(&local_28,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar7);
  pFVar3 = (pFVar8->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
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
  if (((FScriptContainerElement *)this->_padding_ <= pFVar3) &&
     (pFVar3 < (FScriptContainerElement *)this->_padding_ +
               (longlong)*(int *)((longlong)&this->_padding_ + 4) * 0x10)) {
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
  iVar7 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar7 + 1;
  puVar9 = (undefined8 *)((longlong)iVar7 * 0x10 + this->_padding_);
  *puVar9 = *(undefined8 *)pFVar3;
  lVar4 = *(longlong *)(pFVar3 + 8);
  puVar9[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

