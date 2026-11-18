// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 5

// ~FChildOrderInvalidationCallbackImpl @ 14242e570

void __thiscall
`FSlateInvalidationRoot::ProcessPreUpdate'::__l18::FChildOrderInvalidationCallbackImpl::
~FChildOrderInvalidationCallbackImpl(void *this)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  FLowLevelMemTracker *this_00;
  FPageAllocator *this_01;
  int *piVar4;
  
  lVar3 = *(longlong *)((longlong)this + 0x28);
  if (lVar3 == 0) {
    return;
  }
  if (lVar3 != 0) {
    puVar1 = (uint *)(lVar3 + -8);
    MemoryTrace_Free((ulong64)puVar1,0,0);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,puVar1,FMalloc,true);
    }
    piVar4 = (int *)((longlong)puVar1 - (ulonglong)*puVar1);
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      lVar3 = *(longlong *)(piVar4 + 0x10);
      MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar4,0,0);
      if (lVar3 - (longlong)piVar4 != 0x10000) {
                    /* WARNING: Could not recover jumptable at 0x00014243e380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,piVar4);
        return;
      }
      this_01 = FPageAllocator::Get();
      FPageAllocator::Free(this_01,piVar4);
      return;
    }
  }
  return;
}

// PreChildRemove @ 14244b060

void __thiscall
`FSlateInvalidationRoot::ProcessPreUpdate'::__l18::FChildOrderInvalidationCallbackImpl::
PreChildRemove(void *this,FIndexRange *param_1)

{
  FSlateInvalidationWidgetPreHeap::RemoveRange
            (*(FSlateInvalidationWidgetPreHeap **)((longlong)this + 0x10),param_1);
  FSlateInvalidationWidgetPostHeap::RemoveRange
            (*(FSlateInvalidationWidgetPostHeap **)((longlong)this + 0x20),param_1);
  FSlateInvalidationWidgetPrepassHeap::RemoveRange
            (*(FSlateInvalidationWidgetPrepassHeap **)((longlong)this + 0x18),param_1);
  return;
}

// ProxiesPostResort @ 14244d340

void __thiscall
`FSlateInvalidationRoot::ProcessPreUpdate'::__l18::FChildOrderInvalidationCallbackImpl::
ProxiesPostResort(void *this)

{
  FSlateInvalidationWidgetHeapElement **ppFVar1;
  int iVar2;
  FSlateInvalidationWidgetHeapElement *pFVar3;
  FSlateInvalidationWidgetHeapElement FVar4;
  FSlateInvalidationWidgetSortOrder *pFVar5;
  FSlateInvalidationWidgetHeapElement **ppFVar6;
  undefined1 local_res8 [8];
  FSlateInvalidationWidgetSortOrder local_res10 [2];
  FSlateInvalidationWidgetIndex local_res18;
  uint uStackX_1c;
  
  iVar2 = *(int *)((longlong)this + 0x30);
  ppFVar6 = ((ForElementType<FSlateInvalidationWidgetHeapElement_*> *)((longlong)this + 0x28))->Data
  ;
  ppFVar1 = ppFVar6 + iVar2;
  while( true ) {
    if (*(int *)((longlong)this + 0x30) != iVar2) {
      `TCheckedPointerIterator<FSlateInvalidationWidgetHeapElement_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (ppFVar6 == ppFVar1) break;
    pFVar3 = *ppFVar6;
    local_res18 = pFVar3->WidgetIndex;
    pFVar5 = FSlateInvalidationWidgetSortOrder::FSlateInvalidationWidgetSortOrder
                       (local_res10,*(FSlateInvalidationWidgetList **)((longlong)this + 8),
                        local_res18);
    ppFVar6 = ppFVar6 + 1;
    uStackX_1c = pFVar5->Order;
    FVar4.WidgetSortOrder.Order = uStackX_1c;
    FVar4.WidgetIndex = local_res18;
    *pFVar3 = FVar4;
  }
  *(undefined4 *)((longlong)this + 0x30) = 0;
  if (*(int *)((longlong)this + 0x34) < 0) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSlateInvalidationWidgetHeapElement_*>_>
              (8,8,0,(ForElementType<FSlateInvalidationWidgetHeapElement_*> *)
                     ((longlong)this + 0x28),0,(int *)((longlong)this + 0x34));
  }
  return;
}

// ProxiesPreResort @ 14244d420

void __thiscall
`FSlateInvalidationRoot::ProcessPreUpdate'::__l18::FChildOrderInvalidationCallbackImpl::
ProxiesPreResort(void *this,FReSortOperation *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  longlong local_58;
  longlong local_50;
  longlong local_48 [2];
  
  lVar3 = *(longlong *)((longlong)this + 0x10);
  iVar2 = *(int *)(lVar3 + 0x108);
  lVar7 = *(longlong *)(lVar3 + 0x100);
  if (*(longlong *)(lVar3 + 0x100) == 0) {
    lVar7 = lVar3;
  }
  lVar1 = lVar7 + (longlong)iVar2 * 8;
  while( true ) {
    if (*(int *)(lVar3 + 0x108) != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FSlateInvalidationWidgetHeapElement,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (lVar7 == lVar1) break;
    if (((param_1->Range->OrderMin).Order <= *(uint *)(lVar7 + 4)) &&
       (*(uint *)(lVar7 + 4) <= (param_1->Range->OrderMax).Order)) {
      local_58 = lVar7;
      if ((*(longlong **)((longlong)this + 0x28) <= &local_58) &&
         (&local_58 < *(longlong **)((longlong)this + 0x28) + *(int *)((longlong)this + 0x34))) {
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
      iVar6 = *(int *)((longlong)this + 0x30);
      if (iVar6 == *(int *)((longlong)this + 0x34)) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSlateInvalidationWidgetHeapElement_*>_>
                          (0x808,(ForElementType<FSlateInvalidationWidgetHeapElement_*> *)
                                 ((longlong)this + 0x28),(int *)((longlong)this + 0x34));
      }
      *(int *)((longlong)this + 0x30) = iVar6 + 1;
      *(longlong *)(*(longlong *)((longlong)this + 0x28) + (longlong)iVar6 * 8) = local_58;
    }
    lVar7 = lVar7 + 8;
  }
  lVar3 = *(longlong *)((longlong)this + 0x20);
  iVar2 = *(int *)(lVar3 + 0x328);
  lVar7 = *(longlong *)(lVar3 + 800);
  if (*(longlong *)(lVar3 + 800) == 0) {
    lVar7 = lVar3;
  }
  lVar1 = lVar7 + (longlong)iVar2 * 8;
  while( true ) {
    if (*(int *)(lVar3 + 0x328) != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FSlateInvalidationWidgetHeapElement,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (lVar7 == lVar1) break;
    if (((param_1->Range->OrderMin).Order <= *(uint *)(lVar7 + 4)) &&
       (*(uint *)(lVar7 + 4) <= (param_1->Range->OrderMax).Order)) {
      local_50 = lVar7;
      if ((*(longlong **)((longlong)this + 0x28) <= &local_50) &&
         (&local_50 < *(longlong **)((longlong)this + 0x28) + *(int *)((longlong)this + 0x34))) {
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
      iVar6 = *(int *)((longlong)this + 0x30);
      if (iVar6 == *(int *)((longlong)this + 0x34)) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSlateInvalidationWidgetHeapElement_*>_>
                          (0x808,(ForElementType<FSlateInvalidationWidgetHeapElement_*> *)
                                 ((longlong)this + 0x28),(int *)((longlong)this + 0x34));
      }
      *(int *)((longlong)this + 0x30) = iVar6 + 1;
      *(longlong *)(*(longlong *)((longlong)this + 0x28) + (longlong)iVar6 * 8) = local_50;
    }
    lVar7 = lVar7 + 8;
  }
  lVar3 = *(longlong *)((longlong)this + 0x18);
  iVar2 = *(int *)(lVar3 + 0x108);
  lVar7 = *(longlong *)(lVar3 + 0x100);
  if (*(longlong *)(lVar3 + 0x100) == 0) {
    lVar7 = lVar3;
  }
  lVar1 = lVar7 + (longlong)iVar2 * 8;
  while( true ) {
    if (*(int *)(lVar3 + 0x108) != iVar2) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FSlateInvalidationWidgetHeapElement,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (lVar7 == lVar1) break;
    if (((param_1->Range->OrderMin).Order <= *(uint *)(lVar7 + 4)) &&
       (*(uint *)(lVar7 + 4) <= (param_1->Range->OrderMax).Order)) {
      local_48[0] = lVar7;
      if ((*(longlong **)((longlong)this + 0x28) <= local_48) &&
         (local_48 < *(longlong **)((longlong)this + 0x28) + *(int *)((longlong)this + 0x34))) {
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
      iVar6 = *(int *)((longlong)this + 0x30);
      if (iVar6 == *(int *)((longlong)this + 0x34)) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSlateInvalidationWidgetHeapElement_*>_>
                          (0x808,(ForElementType<FSlateInvalidationWidgetHeapElement_*> *)
                                 ((longlong)this + 0x28),(int *)((longlong)this + 0x34));
      }
      *(int *)((longlong)this + 0x30) = iVar6 + 1;
      *(longlong *)(*(longlong *)((longlong)this + 0x28) + (longlong)iVar6 * 8) = local_48[0];
    }
    lVar7 = lVar7 + 8;
  }
  return;
}

// ProxiesReIndexed @ 14244d7a0

void __thiscall
`FSlateInvalidationRoot::ProcessPreUpdate'::__l18::FChildOrderInvalidationCallbackImpl::
ProxiesReIndexed(void *this,FReIndexOperation *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  FSlateInvalidationWidgetSortOrder *pFVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  FSlateInvalidationWidgetIndex local_res10 [2];
  FSlateInvalidationWidgetSortOrder local_res18 [2];
  FSlateInvalidationWidgetIndex local_res20;
  uint uStackX_24;
  
  puVar3 = *(undefined8 **)((longlong)this + 0x10);
  iVar2 = *(int *)(puVar3 + 0x21);
  puVar5 = (undefined8 *)puVar3[0x20];
  if ((undefined8 *)puVar3[0x20] == (undefined8 *)0x0) {
    puVar5 = puVar3;
  }
  puVar1 = puVar5 + iVar2;
  while( true ) {
    if (*(int *)(puVar3 + 0x21) != iVar2) {
      `TCheckedPointerIterator<FSlateInvalidationWidgetHeapElement,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (puVar5 == puVar1) break;
    if (((param_1->Range->OrderMin).Order <= *(uint *)((longlong)puVar5 + 4)) &&
       (*(uint *)((longlong)puVar5 + 4) <= (param_1->Range->OrderMax).Order)) {
      FSlateInvalidationWidgetList::IProcessChildOrderInvalidationCallback::FReIndexOperation::
      ReIndex(param_1,SUB84(local_res10,0));
      local_res20 = local_res10[0];
      pFVar4 = FSlateInvalidationWidgetSortOrder::FSlateInvalidationWidgetSortOrder
                         (local_res18,*(FSlateInvalidationWidgetList **)((longlong)this + 8),
                          local_res10[0]);
      uStackX_24 = pFVar4->Order;
      *puVar5 = CONCAT44(uStackX_24,local_res20);
    }
    puVar5 = puVar5 + 1;
  }
  puVar3 = *(undefined8 **)((longlong)this + 0x20);
  iVar2 = *(int *)(puVar3 + 0x65);
  puVar5 = (undefined8 *)puVar3[100];
  if ((undefined8 *)puVar3[100] == (undefined8 *)0x0) {
    puVar5 = puVar3;
  }
  puVar1 = puVar5 + iVar2;
  while( true ) {
    if (*(int *)(puVar3 + 0x65) != iVar2) {
      `TCheckedPointerIterator<FSlateInvalidationWidgetHeapElement,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (puVar5 == puVar1) break;
    if (((param_1->Range->OrderMin).Order <= *(uint *)((longlong)puVar5 + 4)) &&
       (*(uint *)((longlong)puVar5 + 4) <= (param_1->Range->OrderMax).Order)) {
      FSlateInvalidationWidgetList::IProcessChildOrderInvalidationCallback::FReIndexOperation::
      ReIndex(param_1,SUB84(local_res10,0));
      local_res20 = local_res10[0];
      pFVar4 = FSlateInvalidationWidgetSortOrder::FSlateInvalidationWidgetSortOrder
                         (local_res18,*(FSlateInvalidationWidgetList **)((longlong)this + 8),
                          local_res10[0]);
      uStackX_24 = pFVar4->Order;
      *puVar5 = CONCAT44(uStackX_24,local_res20);
    }
    puVar5 = puVar5 + 1;
  }
  puVar3 = *(undefined8 **)((longlong)this + 0x18);
  iVar2 = *(int *)(puVar3 + 0x21);
  puVar5 = (undefined8 *)puVar3[0x20];
  if ((undefined8 *)puVar3[0x20] == (undefined8 *)0x0) {
    puVar5 = puVar3;
  }
  puVar1 = puVar5 + iVar2;
  while( true ) {
    if (*(int *)(puVar3 + 0x21) != iVar2) {
      `TCheckedPointerIterator<FSlateInvalidationWidgetHeapElement,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (puVar5 == puVar1) break;
    if (((param_1->Range->OrderMin).Order <= *(uint *)((longlong)puVar5 + 4)) &&
       (*(uint *)((longlong)puVar5 + 4) <= (param_1->Range->OrderMax).Order)) {
      FSlateInvalidationWidgetList::IProcessChildOrderInvalidationCallback::FReIndexOperation::
      ReIndex(param_1,SUB84(local_res10,0));
      local_res20 = local_res10[0];
      pFVar4 = FSlateInvalidationWidgetSortOrder::FSlateInvalidationWidgetSortOrder
                         (local_res18,*(FSlateInvalidationWidgetList **)((longlong)this + 8),
                          local_res10[0]);
      uStackX_24 = pFVar4->Order;
      *puVar5 = CONCAT44(uStackX_24,local_res20);
    }
    puVar5 = puVar5 + 1;
  }
  return;
}

