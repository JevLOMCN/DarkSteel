// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 5

// ~FChildOrderInvalidationCallback_RemoveG @ 1425c0950

void __thiscall
`FSlateInvalidationWidgetListTest::RunTest'::__l58::FChildOrderInvalidationCallback_RemoveG::
~FChildOrderInvalidationCallback_RemoveG(void *this)

{
  DestructItems<TTuple<FString,FSlateInvalidationWidgetSortOrder,bool>,int>
            (*(TTuple<FString,FSlateInvalidationWidgetSortOrder,bool> **)((longlong)this + 0x40),
             *(int *)((longlong)this + 0x48));
  if (*(void **)((longlong)this + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x40));
  }
  DestructItems<TTuple<FString,FSlateInvalidationWidgetSortOrder,bool>,int>
            (*(TTuple<FString,FSlateInvalidationWidgetSortOrder,bool> **)((longlong)this + 0x30),
             *(int *)((longlong)this + 0x38));
  if (*(void **)((longlong)this + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x30));
  }
  DestructItems<TTuple<FString,FSlateInvalidationWidgetSortOrder,bool>,int>
            (*(TTuple<FString,FSlateInvalidationWidgetSortOrder,bool> **)((longlong)this + 0x20),
             *(int *)((longlong)this + 0x28));
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  DestructItems<TTuple<FString,FSlateInvalidationWidgetSortOrder,bool>,int>
            (*(TTuple<FString,FSlateInvalidationWidgetSortOrder,bool> **)((longlong)this + 0x10),
             *(int *)((longlong)this + 0x18));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
    return;
  }
  return;
}

// PreChildRemove @ 1425f4210

void __thiscall
`FSlateInvalidationWidgetListTest::RunTest'::__l58::FChildOrderInvalidationCallback_RemoveG::
PreChildRemove(void *this,FIndexRange *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  FString local_38;
  
  plVar3 = *(longlong **)((longlong)this + 8);
  pcVar4 = *(code **)(*plVar3 + 0x30);
  ::FString::FString(&local_38,L"The range is not valid.");
  if (((param_1->InclusiveMin).ArrayIndex == FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) &&
     ((param_1->InclusiveMin).ElementIndex == FSlateInvalidationWidgetIndex::Invalid.ElementIndex))
  {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  (*pcVar4)(plVar3,uVar6,&local_38,0);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  iVar2 = *(int *)((longlong)this + 0x18);
  if (iVar2 == 0) {
    plVar3 = *(longlong **)((longlong)this + 8);
    pcVar4 = *(code **)(*plVar3 + 0x28);
    ::FString::FString(&local_38,L"No PreChildRemove was expected");
    (*pcVar4)(plVar3,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
      return;
    }
  }
  else {
    lVar7 = *(longlong *)((longlong)this + 0x10);
    lVar1 = lVar7 + (longlong)iVar2 * 0x18;
    while( true ) {
      if (*(int *)((longlong)this + 0x18) != iVar2) {
        `TCheckedPointerIterator<TTuple<FString,FSlateInvalidationWidgetSortOrder,bool>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (lVar7 == lVar1) break;
      if ((*(uint *)(lVar7 + 0x10) < (param_1->OrderMin).Order) ||
         ((param_1->OrderMax).Order < *(uint *)(lVar7 + 0x10))) {
        cVar5 = '\0';
      }
      else {
        cVar5 = '\x01';
      }
      if (cVar5 != *(char *)(lVar7 + 0x14)) {
        plVar3 = *(longlong **)((longlong)this + 8);
        pcVar4 = *(code **)(*plVar3 + 0x28);
        ::FString::PrintfImpl(&local_38,L"\'%s\' should be %s in the PreChildRemove range");
        (*pcVar4)(plVar3,&local_38,0);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      lVar7 = lVar7 + 0x18;
    }
  }
  return;
}

// ProxiesBuilt @ 1425f5b40

void __thiscall
`FSlateInvalidationWidgetListTest::RunTest'::__l58::FChildOrderInvalidationCallback_RemoveG::
ProxiesBuilt(void *this,FIndexRange *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  FString local_38;
  
  plVar3 = *(longlong **)((longlong)this + 8);
  pcVar4 = *(code **)(*plVar3 + 0x30);
  ::FString::FString(&local_38,L"The range is not valid.");
  if (((param_1->InclusiveMin).ArrayIndex == FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) &&
     ((param_1->InclusiveMin).ElementIndex == FSlateInvalidationWidgetIndex::Invalid.ElementIndex))
  {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  (*pcVar4)(plVar3,uVar6,&local_38,0);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  iVar2 = *(int *)((longlong)this + 0x48);
  if (iVar2 == 0) {
    plVar3 = *(longlong **)((longlong)this + 8);
    pcVar4 = *(code **)(*plVar3 + 0x28);
    ::FString::FString(&local_38,L"No ProxiesBuilt was expected");
    (*pcVar4)(plVar3,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
      return;
    }
  }
  else {
    lVar7 = *(longlong *)((longlong)this + 0x40);
    lVar1 = lVar7 + (longlong)iVar2 * 0x18;
    while( true ) {
      if (*(int *)((longlong)this + 0x48) != iVar2) {
        `TCheckedPointerIterator<TTuple<FString,FSlateInvalidationWidgetSortOrder,bool>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (lVar7 == lVar1) break;
      if ((*(uint *)(lVar7 + 0x10) < (param_1->OrderMin).Order) ||
         ((param_1->OrderMax).Order < *(uint *)(lVar7 + 0x10))) {
        cVar5 = '\0';
      }
      else {
        cVar5 = '\x01';
      }
      if (cVar5 != *(char *)(lVar7 + 0x14)) {
        plVar3 = *(longlong **)((longlong)this + 8);
        pcVar4 = *(code **)(*plVar3 + 0x28);
        ::FString::PrintfImpl(&local_38,L"\'%s\' should be %s in the ProxiesBuilt range");
        (*pcVar4)(plVar3,&local_38,0);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      lVar7 = lVar7 + 0x18;
    }
  }
  return;
}

// ProxiesPreResort @ 1425f5ce0

void __thiscall
`FSlateInvalidationWidgetListTest::RunTest'::__l58::FChildOrderInvalidationCallback_RemoveG::
ProxiesPreResort(void *this,FReSortOperation *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  FString local_38;
  
  plVar3 = *(longlong **)((longlong)this + 8);
  pcVar4 = *(code **)(*plVar3 + 0x30);
  ::FString::FString(&local_38,L"The range is not valid.");
  if (((param_1->Range->InclusiveMin).ArrayIndex ==
       FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) &&
     ((param_1->Range->InclusiveMin).ElementIndex ==
      FSlateInvalidationWidgetIndex::Invalid.ElementIndex)) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  (*pcVar4)(plVar3,uVar6,&local_38,0);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  iVar2 = *(int *)((longlong)this + 0x38);
  if (iVar2 == 0) {
    plVar3 = *(longlong **)((longlong)this + 8);
    pcVar4 = *(code **)(*plVar3 + 0x28);
    ::FString::FString(&local_38,L"No ProxiesPreResort was expected");
    (*pcVar4)(plVar3,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
      return;
    }
  }
  else {
    lVar7 = *(longlong *)((longlong)this + 0x30);
    lVar1 = lVar7 + (longlong)iVar2 * 0x18;
    while( true ) {
      if (*(int *)((longlong)this + 0x38) != iVar2) {
        `TCheckedPointerIterator<TTuple<FString,FSlateInvalidationWidgetSortOrder,bool>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (lVar7 == lVar1) break;
      if ((*(uint *)(lVar7 + 0x10) < (param_1->Range->OrderMin).Order) ||
         ((param_1->Range->OrderMax).Order < *(uint *)(lVar7 + 0x10))) {
        cVar5 = '\0';
      }
      else {
        cVar5 = '\x01';
      }
      if (cVar5 != *(char *)(lVar7 + 0x14)) {
        plVar3 = *(longlong **)((longlong)this + 8);
        pcVar4 = *(code **)(*plVar3 + 0x28);
        ::FString::PrintfImpl(&local_38,L"\'%s\' should be %s in the ProxiesPreResort range");
        (*pcVar4)(plVar3,&local_38,0);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      lVar7 = lVar7 + 0x18;
    }
  }
  return;
}

// ProxiesReIndexed @ 1425f5e90

void __thiscall
`FSlateInvalidationWidgetListTest::RunTest'::__l58::FChildOrderInvalidationCallback_RemoveG::
ProxiesReIndexed(void *this,FReIndexOperation *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  FString local_38;
  
  plVar3 = *(longlong **)((longlong)this + 8);
  pcVar4 = *(code **)(*plVar3 + 0x30);
  ::FString::FString(&local_38,L"The range is not valid.");
  if (((param_1->Range->InclusiveMin).ArrayIndex ==
       FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) &&
     ((param_1->Range->InclusiveMin).ElementIndex ==
      FSlateInvalidationWidgetIndex::Invalid.ElementIndex)) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  (*pcVar4)(plVar3,uVar6,&local_38,0);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  iVar2 = *(int *)((longlong)this + 0x28);
  if (iVar2 == 0) {
    plVar3 = *(longlong **)((longlong)this + 8);
    pcVar4 = *(code **)(*plVar3 + 0x28);
    ::FString::FString(&local_38,L"No ProxiesReIndexed was expected");
    (*pcVar4)(plVar3,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
      return;
    }
  }
  else {
    lVar7 = *(longlong *)((longlong)this + 0x20);
    lVar1 = lVar7 + (longlong)iVar2 * 0x18;
    while( true ) {
      if (*(int *)((longlong)this + 0x28) != iVar2) {
        `TCheckedPointerIterator<TTuple<FString,FSlateInvalidationWidgetSortOrder,bool>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (lVar7 == lVar1) break;
      if ((*(uint *)(lVar7 + 0x10) < (param_1->Range->OrderMin).Order) ||
         ((param_1->Range->OrderMax).Order < *(uint *)(lVar7 + 0x10))) {
        cVar5 = '\0';
      }
      else {
        cVar5 = '\x01';
      }
      if (cVar5 != *(char *)(lVar7 + 0x14)) {
        plVar3 = *(longlong **)((longlong)this + 8);
        pcVar4 = *(code **)(*plVar3 + 0x28);
        ::FString::PrintfImpl(&local_38,L"\'%s\' should be %s in the ProxiesReIndexed range");
        (*pcVar4)(plVar3,&local_38,0);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      lVar7 = lVar7 + 0x18;
    }
  }
  return;
}

