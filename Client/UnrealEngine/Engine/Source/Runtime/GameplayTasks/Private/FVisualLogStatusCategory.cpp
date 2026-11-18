// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTasks
// Functions: 2

// FVisualLogStatusCategory @ 146ced770

FVisualLogStatusCategory * __thiscall
FVisualLogStatusCategory::FVisualLogStatusCategory
          (FVisualLogStatusCategory *this,FVisualLogStatusCategory *param_1)

{
  int *piVar1;
  TArray<FVisualLogStatusCategory,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FVisualLogStatusCategory *pFVar5;
  
  piVar1 = &(this->Data).ArrayMax;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Data).ArrayNum;
  pFVar4 = (param_1->Data).AllocatorInstance.Data;
  (this->Data).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,(ForAnyElementType *)this,iVar3,piVar1);
    ConstructItems<FString,FString,int>((this->Data).AllocatorInstance.Data,(FString *)pFVar4,iVar3)
    ;
  }
  ::FString::FString(&this->Category,&param_1->Category);
  pTVar2 = &this->Children;
  this->UniqueId = param_1->UniqueId;
  piVar1 = &(this->Children).ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Children).ArrayNum;
  pFVar5 = (FVisualLogStatusCategory *)(param_1->Children).AllocatorInstance.Data;
  (this->Children).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    ConstructItems<FVisualLogStatusCategory,FVisualLogStatusCategory,int>
              ((pTVar2->AllocatorInstance).Data,pFVar5,iVar3);
  }
  return this;
}

// Add @ 146ceefe0

/* WARNING: Removing unreachable block (ram,0x000146cef13d) */

void __thiscall
FVisualLogStatusCategory::Add(FVisualLogStatusCategory *this,FString *param_1,FString *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  FString local_28;
  FString local_18;
  
  local_18.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar7 = (longlong)local_18.Data.ArrayNum;
  pFVar6 = (param_1->Data).AllocatorInstance.Data;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.Data.ArrayNum == 0) {
    local_18.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)&local_18,local_18.Data.ArrayNum,
               &local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,pFVar6,lVar7 * 2);
  }
  pFVar5 = ::FString::AppendChar(&local_18,L'|');
  ::FString::ConcatFF(&local_28,pFVar5,param_2);
  pFVar6 = (this->Data).AllocatorInstance.Data;
  if (((pFVar6 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar6 + (longlong)(this->Data).ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (this->Data).ArrayNum;
  piVar1 = &(this->Data).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar1);
  }
  (this->Data).ArrayNum = iVar4 + 1;
  pFVar6 = (this->Data).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar6 = 0;
  *(FScriptContainerElement **)pFVar6 = local_28.Data.AllocatorInstance.Data;
  *(int *)(pFVar6 + 8) = local_28.Data.ArrayNum;
  *(int *)(pFVar6 + 0xc) = local_28.Data.ArrayMax;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

