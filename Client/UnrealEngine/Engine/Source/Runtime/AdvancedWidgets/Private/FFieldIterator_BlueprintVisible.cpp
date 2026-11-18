// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdvancedWidgets
// Functions: 1

// GetFields @ 14d867670

TArray<FFieldVariant,TSizedDefaultAllocator<32>_> * __thiscall
UE::PropertyViewer::FFieldIterator_BlueprintVisible::GetFields
          (FFieldIterator_BlueprintVisible *this,
          TArray<FFieldVariant,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,UStruct *param_1
          ,FName param_2,UStruct *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FField *pFVar3;
  UField *pUVar4;
  bool bVar5;
  int iVar6;
  TArray<FFieldVariant,TSizedDefaultAllocator<32>_> *pTVar7;
  FField *local_58;
  ulonglong local_50;
  TFieldIterator<FProperty> local_48;
  TFieldIterator<UFunction> local_30;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (param_1 == (UStruct *)0x0) {
    local_48.Field = (FField *)0x0;
  }
  else {
    local_48.Field = param_1->ChildProperties;
  }
  local_48.InterfaceIndex = -1;
  local_48.bIncludeSuper = true;
  local_48.bIncludeDeprecated = true;
  local_48.bIncludeInterface = false;
  local_48.Struct = param_1;
  TFieldIterator<FProperty>::IterateToNext(&local_48);
  pFVar3 = local_48.Field;
  while (local_48.Field = pFVar3, pFVar3 != (FField *)0x0) {
    if ((((ulonglong)pFVar3[1].ClassPrivate & 0x10000084) != 0) &&
       (((ulonglong)pFVar3[1].ClassPrivate & 0x820000000) == 0)) {
      local_58 = pFVar3;
      if ((((ulonglong)pFVar3 & 1) != 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsUObject()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                             ,0x180,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TArray<FFieldVariant,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar7;
      }
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar1 <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 <
           pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TArray<FFieldVariant,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar7;
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == __return_storage_ptr__->ArrayMax) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      *(FField **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) =
           local_58;
      if ((((byte)local_58 & (UObject *)((ulonglong)local_58 & 0xfffffffffffffffe) != (UObject *)0x0
           ) != 0) && (GC::GIsIncrementalReachabilityPending != false)) {
        GC::MarkAsReachable((UObject *)((ulonglong)local_58 & 0xfffffffffffffffe));
      }
    }
    local_48.Field = pFVar3->Next;
    TFieldIterator<FProperty>::IterateToNext(&local_48);
    pFVar3 = local_48.Field;
  }
  if (param_1 == (UStruct *)0x0) {
    local_30.Field = (UField *)0x0;
  }
  else {
    local_30.Field = (param_1->Children).field0_0x0.DebugPtr;
  }
  local_30.InterfaceIndex = -1;
  local_30.bIncludeSuper = true;
  local_30.bIncludeDeprecated = true;
  local_30.bIncludeInterface = false;
  local_30.Struct = param_1;
  TFieldIterator<UFunction>::IterateToNext(&local_30);
  pUVar4 = local_30.Field;
  do {
    if (pUVar4 == (UField *)0x0) {
      return __return_storage_ptr__;
    }
    if ((pUVar4[3]._padding_ & 0x4000000) != 0) {
      local_50 = (ulonglong)pUVar4 | 1;
      local_30.Field = pUVar4;
      if (((UObject *)((ulonglong)pUVar4 & 0xfffffffffffffffe) != (UObject *)0x0) &&
         (GC::GIsIncrementalReachabilityPending != false)) {
        GC::MarkAsReachable((UObject *)((ulonglong)pUVar4 & 0xfffffffffffffffe));
      }
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar1 <= (FScriptContainerElement *)&local_50) &&
          ((FScriptContainerElement *)&local_50 <
           pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TArray<FFieldVariant,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar7;
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == __return_storage_ptr__->ArrayMax) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      *(ulonglong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) =
           local_50;
      if ((((byte)local_50 & (UObject *)(local_50 & 0xfffffffffffffffe) != (UObject *)0x0) != 0) &&
         (GC::GIsIncrementalReachabilityPending != false)) {
        GC::MarkAsReachable((UObject *)(local_50 & 0xfffffffffffffffe));
      }
    }
    local_30.Field = (pUVar4->Next).field0_0x0.DebugPtr;
    TFieldIterator<UFunction>::IterateToNext(&local_30);
    pUVar4 = local_30.Field;
  } while( true );
}

