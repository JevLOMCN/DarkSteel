// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 20

// HandleGarbageReference @ 142056000

void __cdecl
UE::GC::TDebugReachabilityProcessor<1>::HandleGarbageReference
          (FWorkerContext *param_1,UObject *param_2,UObject **param_3,FMemberId param_4)

{
  TArray<FGarbageReferenceInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FMemberInfo *pFVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  FMemberInfo local_58;
  UObject *local_48;
  FGCObject *pFStack_40;
  uint local_38;
  undefined8 uStack_34;
  undefined4 uStack_2c;
  UObject *local_28;
  UGCObjectReferencer *pUStack_20;
  uint local_18;
  FName FStack_14;
  undefined4 uStack_c;
  
  if (((param_2 != (UObject *)0x0) ||
      (param_2 = param_1->ReferencingObject,
      (UGCObjectReferencer *)param_2 != (UGCObjectReferencer *)0x0)) &&
     (((uint)((UGCObjectReferencer *)param_2)->_padding_ >> 0x1e & 1) == 0)) {
    pTVar1 = &param_1->GarbageReferences;
    if ((UGCObjectReferencer *)param_2 == FGCObject::GGCObjectReferencer) {
      local_48 = *param_3;
      uStack_34 = 0;
      pFStack_40 = FGCObject::GGCObjectReferencer->CurrentlySerializingObject;
      pFVar7 = (pTVar1->AllocatorInstance).Data;
      local_38 = local_38 & 0xffffff00;
      if ((pFVar7 <= (FScriptContainerElement *)&local_48) &&
         ((FScriptContainerElement *)&local_48 <
          pFVar7 + (longlong)(param_1->GarbageReferences).ArrayMax * 0x20)) {
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
      iVar5 = (param_1->GarbageReferences).ArrayNum;
      piVar2 = &(param_1->GarbageReferences).ArrayMax;
      if (iVar5 == *piVar2) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&pTVar1->AllocatorInstance,piVar2);
      }
      (param_1->GarbageReferences).ArrayNum = iVar5 + 1;
      pFVar7 = (pTVar1->AllocatorInstance).Data;
      lVar8 = (longlong)iVar5 * 0x20;
      *(UObject **)(pFVar7 + lVar8) = local_48;
      *(FGCObject **)(pFVar7 + lVar8 + 8) = pFStack_40;
      local_18 = local_38;
      FStack_14.ComparisonIndex.Value = (uint)uStack_34;
      FStack_14.Number = uStack_34._4_4_;
      uStack_c = uStack_2c;
    }
    else {
      pFVar6 = GetMemberDebugInfo(&local_58,
                                  (FSchemaView)
                                  *(ulong64 *)(((UGCObjectReferencer *)param_2)->_padding_ + 0x1f0),
                                  param_4);
      pFVar7 = (pTVar1->AllocatorInstance).Data;
      local_18 = CONCAT31(local_18._1_3_,1);
      FStack_14 = pFVar6->Name;
      local_28 = *param_3;
      pUStack_20 = (UGCObjectReferencer *)param_2;
      if ((pFVar7 <= (FScriptContainerElement *)&local_28) &&
         ((FScriptContainerElement *)&local_28 <
          pFVar7 + (longlong)(param_1->GarbageReferences).ArrayMax * 0x20)) {
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
      iVar5 = (param_1->GarbageReferences).ArrayNum;
      piVar2 = &(param_1->GarbageReferences).ArrayMax;
      if (iVar5 == *piVar2) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&pTVar1->AllocatorInstance,piVar2);
      }
      (param_1->GarbageReferences).ArrayNum = iVar5 + 1;
      pFVar7 = (pTVar1->AllocatorInstance).Data;
      lVar8 = (longlong)iVar5 * 0x20;
      *(UObject **)(pFVar7 + lVar8) = local_28;
      *(UGCObjectReferencer **)(pFVar7 + lVar8 + 8) = pUStack_20;
    }
    pFVar7 = pFVar7 + lVar8 + 0x10;
    *(uint *)pFVar7 = local_18;
    *(uint *)(pFVar7 + 4) = FStack_14.ComparisonIndex.Value;
    *(uint *)(pFVar7 + 8) = FStack_14.Number;
    *(undefined4 *)(pFVar7 + 0xc) = uStack_c;
  }
  return;
}

// HandleGarbageReference @ 142056240

void __cdecl
UE::GC::TDebugReachabilityProcessor<8>::HandleGarbageReference
          (FWorkerContext *param_1,UObject *param_2,UObject **param_3,FMemberId param_4)

{
  TArray<FGarbageReferenceInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FMemberInfo *pFVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  FMemberInfo local_58;
  UObject *local_48;
  FGCObject *pFStack_40;
  uint local_38;
  undefined8 uStack_34;
  undefined4 uStack_2c;
  UObject *local_28;
  UGCObjectReferencer *pUStack_20;
  uint local_18;
  FName FStack_14;
  undefined4 uStack_c;
  
  if (((param_2 != (UObject *)0x0) ||
      (param_2 = param_1->ReferencingObject,
      (UGCObjectReferencer *)param_2 != (UGCObjectReferencer *)0x0)) &&
     (((uint)((UGCObjectReferencer *)param_2)->_padding_ >> 0x1e & 1) == 0)) {
    pTVar1 = &param_1->GarbageReferences;
    if ((UGCObjectReferencer *)param_2 == FGCObject::GGCObjectReferencer) {
      local_48 = *param_3;
      uStack_34 = 0;
      pFStack_40 = FGCObject::GGCObjectReferencer->CurrentlySerializingObject;
      pFVar7 = (pTVar1->AllocatorInstance).Data;
      local_38 = local_38 & 0xffffff00;
      if ((pFVar7 <= (FScriptContainerElement *)&local_48) &&
         ((FScriptContainerElement *)&local_48 <
          pFVar7 + (longlong)(param_1->GarbageReferences).ArrayMax * 0x20)) {
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
      iVar5 = (param_1->GarbageReferences).ArrayNum;
      piVar2 = &(param_1->GarbageReferences).ArrayMax;
      if (iVar5 == *piVar2) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&pTVar1->AllocatorInstance,piVar2);
      }
      (param_1->GarbageReferences).ArrayNum = iVar5 + 1;
      pFVar7 = (pTVar1->AllocatorInstance).Data;
      lVar8 = (longlong)iVar5 * 0x20;
      *(UObject **)(pFVar7 + lVar8) = local_48;
      *(FGCObject **)(pFVar7 + lVar8 + 8) = pFStack_40;
      local_18 = local_38;
      FStack_14.ComparisonIndex.Value = (uint)uStack_34;
      FStack_14.Number = uStack_34._4_4_;
      uStack_c = uStack_2c;
    }
    else {
      pFVar6 = GetMemberDebugInfo(&local_58,
                                  (FSchemaView)
                                  *(ulong64 *)(((UGCObjectReferencer *)param_2)->_padding_ + 0x1f0),
                                  param_4);
      pFVar7 = (pTVar1->AllocatorInstance).Data;
      local_18 = CONCAT31(local_18._1_3_,1);
      FStack_14 = pFVar6->Name;
      local_28 = *param_3;
      pUStack_20 = (UGCObjectReferencer *)param_2;
      if ((pFVar7 <= (FScriptContainerElement *)&local_28) &&
         ((FScriptContainerElement *)&local_28 <
          pFVar7 + (longlong)(param_1->GarbageReferences).ArrayMax * 0x20)) {
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
      iVar5 = (param_1->GarbageReferences).ArrayNum;
      piVar2 = &(param_1->GarbageReferences).ArrayMax;
      if (iVar5 == *piVar2) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&pTVar1->AllocatorInstance,piVar2);
      }
      (param_1->GarbageReferences).ArrayNum = iVar5 + 1;
      pFVar7 = (pTVar1->AllocatorInstance).Data;
      lVar8 = (longlong)iVar5 * 0x20;
      *(UObject **)(pFVar7 + lVar8) = local_28;
      *(UGCObjectReferencer **)(pFVar7 + lVar8 + 8) = pUStack_20;
    }
    pFVar7 = pFVar7 + lVar8 + 0x10;
    *(uint *)pFVar7 = local_18;
    *(uint *)(pFVar7 + 4) = FStack_14.ComparisonIndex.Value;
    *(uint *)(pFVar7 + 8) = FStack_14.Number;
    *(undefined4 *)(pFVar7 + 0xc) = uStack_c;
  }
  return;
}

// HandleGarbageReference @ 142056480

void __cdecl
UE::GC::TDebugReachabilityProcessor<9>::HandleGarbageReference
          (FWorkerContext *param_1,UObject *param_2,UObject **param_3,FMemberId param_4)

{
  TArray<FGarbageReferenceInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FMemberInfo *pFVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  FMemberInfo local_58;
  UObject *local_48;
  FGCObject *pFStack_40;
  uint local_38;
  undefined8 uStack_34;
  undefined4 uStack_2c;
  UObject *local_28;
  UGCObjectReferencer *pUStack_20;
  uint local_18;
  FName FStack_14;
  undefined4 uStack_c;
  
  if (((param_2 != (UObject *)0x0) ||
      (param_2 = param_1->ReferencingObject,
      (UGCObjectReferencer *)param_2 != (UGCObjectReferencer *)0x0)) &&
     (((uint)((UGCObjectReferencer *)param_2)->_padding_ >> 0x1e & 1) == 0)) {
    pTVar1 = &param_1->GarbageReferences;
    if ((UGCObjectReferencer *)param_2 == FGCObject::GGCObjectReferencer) {
      local_48 = *param_3;
      uStack_34 = 0;
      pFStack_40 = FGCObject::GGCObjectReferencer->CurrentlySerializingObject;
      pFVar7 = (pTVar1->AllocatorInstance).Data;
      local_38 = local_38 & 0xffffff00;
      if ((pFVar7 <= (FScriptContainerElement *)&local_48) &&
         ((FScriptContainerElement *)&local_48 <
          pFVar7 + (longlong)(param_1->GarbageReferences).ArrayMax * 0x20)) {
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
      iVar5 = (param_1->GarbageReferences).ArrayNum;
      piVar2 = &(param_1->GarbageReferences).ArrayMax;
      if (iVar5 == *piVar2) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&pTVar1->AllocatorInstance,piVar2);
      }
      (param_1->GarbageReferences).ArrayNum = iVar5 + 1;
      pFVar7 = (pTVar1->AllocatorInstance).Data;
      lVar8 = (longlong)iVar5 * 0x20;
      *(UObject **)(pFVar7 + lVar8) = local_48;
      *(FGCObject **)(pFVar7 + lVar8 + 8) = pFStack_40;
      local_18 = local_38;
      FStack_14.ComparisonIndex.Value = (uint)uStack_34;
      FStack_14.Number = uStack_34._4_4_;
      uStack_c = uStack_2c;
    }
    else {
      pFVar6 = GetMemberDebugInfo(&local_58,
                                  (FSchemaView)
                                  *(ulong64 *)(((UGCObjectReferencer *)param_2)->_padding_ + 0x1f0),
                                  param_4);
      pFVar7 = (pTVar1->AllocatorInstance).Data;
      local_18 = CONCAT31(local_18._1_3_,1);
      FStack_14 = pFVar6->Name;
      local_28 = *param_3;
      pUStack_20 = (UGCObjectReferencer *)param_2;
      if ((pFVar7 <= (FScriptContainerElement *)&local_28) &&
         ((FScriptContainerElement *)&local_28 <
          pFVar7 + (longlong)(param_1->GarbageReferences).ArrayMax * 0x20)) {
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
      iVar5 = (param_1->GarbageReferences).ArrayNum;
      piVar2 = &(param_1->GarbageReferences).ArrayMax;
      if (iVar5 == *piVar2) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&pTVar1->AllocatorInstance,piVar2);
      }
      (param_1->GarbageReferences).ArrayNum = iVar5 + 1;
      pFVar7 = (pTVar1->AllocatorInstance).Data;
      lVar8 = (longlong)iVar5 * 0x20;
      *(UObject **)(pFVar7 + lVar8) = local_28;
      *(UGCObjectReferencer **)(pFVar7 + lVar8 + 8) = pUStack_20;
    }
    pFVar7 = pFVar7 + lVar8 + 0x10;
    *(uint *)pFVar7 = local_18;
    *(uint *)(pFVar7 + 4) = FStack_14.ComparisonIndex.Value;
    *(uint *)(pFVar7 + 8) = FStack_14.Number;
    *(undefined4 *)(pFVar7 + 0xc) = uStack_c;
  }
  return;
}

// HandleGarbageReference @ 1420566c0

void __cdecl
UE::GC::TDebugReachabilityProcessor<0>::HandleGarbageReference
          (FWorkerContext *param_1,UObject *param_2,UObject **param_3,FMemberId param_4)

{
  TArray<FGarbageReferenceInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FMemberInfo *pFVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  FMemberInfo local_58;
  UObject *local_48;
  FGCObject *pFStack_40;
  uint local_38;
  undefined8 uStack_34;
  undefined4 uStack_2c;
  UObject *local_28;
  UGCObjectReferencer *pUStack_20;
  uint local_18;
  FName FStack_14;
  undefined4 uStack_c;
  
  if (((param_2 != (UObject *)0x0) ||
      (param_2 = param_1->ReferencingObject,
      (UGCObjectReferencer *)param_2 != (UGCObjectReferencer *)0x0)) &&
     (((uint)((UGCObjectReferencer *)param_2)->_padding_ >> 0x1e & 1) == 0)) {
    pTVar1 = &param_1->GarbageReferences;
    if ((UGCObjectReferencer *)param_2 == FGCObject::GGCObjectReferencer) {
      local_48 = *param_3;
      uStack_34 = 0;
      pFStack_40 = FGCObject::GGCObjectReferencer->CurrentlySerializingObject;
      pFVar7 = (pTVar1->AllocatorInstance).Data;
      local_38 = local_38 & 0xffffff00;
      if ((pFVar7 <= (FScriptContainerElement *)&local_48) &&
         ((FScriptContainerElement *)&local_48 <
          pFVar7 + (longlong)(param_1->GarbageReferences).ArrayMax * 0x20)) {
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
      iVar5 = (param_1->GarbageReferences).ArrayNum;
      piVar2 = &(param_1->GarbageReferences).ArrayMax;
      if (iVar5 == *piVar2) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&pTVar1->AllocatorInstance,piVar2);
      }
      (param_1->GarbageReferences).ArrayNum = iVar5 + 1;
      pFVar7 = (pTVar1->AllocatorInstance).Data;
      lVar8 = (longlong)iVar5 * 0x20;
      *(UObject **)(pFVar7 + lVar8) = local_48;
      *(FGCObject **)(pFVar7 + lVar8 + 8) = pFStack_40;
      local_18 = local_38;
      FStack_14.ComparisonIndex.Value = (uint)uStack_34;
      FStack_14.Number = uStack_34._4_4_;
      uStack_c = uStack_2c;
    }
    else {
      pFVar6 = GetMemberDebugInfo(&local_58,
                                  (FSchemaView)
                                  *(ulong64 *)(((UGCObjectReferencer *)param_2)->_padding_ + 0x1f0),
                                  param_4);
      pFVar7 = (pTVar1->AllocatorInstance).Data;
      local_18 = CONCAT31(local_18._1_3_,1);
      FStack_14 = pFVar6->Name;
      local_28 = *param_3;
      pUStack_20 = (UGCObjectReferencer *)param_2;
      if ((pFVar7 <= (FScriptContainerElement *)&local_28) &&
         ((FScriptContainerElement *)&local_28 <
          pFVar7 + (longlong)(param_1->GarbageReferences).ArrayMax * 0x20)) {
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
      iVar5 = (param_1->GarbageReferences).ArrayNum;
      piVar2 = &(param_1->GarbageReferences).ArrayMax;
      if (iVar5 == *piVar2) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&pTVar1->AllocatorInstance,piVar2);
      }
      (param_1->GarbageReferences).ArrayNum = iVar5 + 1;
      pFVar7 = (pTVar1->AllocatorInstance).Data;
      lVar8 = (longlong)iVar5 * 0x20;
      *(UObject **)(pFVar7 + lVar8) = local_28;
      *(UGCObjectReferencer **)(pFVar7 + lVar8 + 8) = pUStack_20;
    }
    pFVar7 = pFVar7 + lVar8 + 0x10;
    *(uint *)pFVar7 = local_18;
    *(uint *)(pFVar7 + 4) = FStack_14.ComparisonIndex.Value;
    *(uint *)(pFVar7 + 8) = FStack_14.Number;
    *(undefined4 *)(pFVar7 + 0xc) = uStack_c;
  }
  return;
}

// HandleHistoryReference @ 142056900

void __cdecl
UE::GC::TDebugReachabilityProcessor<1>::HandleHistoryReference
          (FWorkerContext *param_1,UObject *param_2,UObject **param_3,FMemberId param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  FGCObject *pFVar3;
  FName *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FMemberInfo *pFVar8;
  undefined8 *puVar9;
  TArray<FGCDirectReference,TSizedDefaultAllocator<32>_> **ppTVar10;
  TArray<FGCDirectReference,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<FGCDirectReference,TSizedDefaultAllocator<32>_> *pTVar12;
  wchar_t *pwVar13;
  FName local_res8;
  FReferenceToken local_res10;
  undefined4 local_38;
  FNameEntryId FStack_34;
  uint local_30;
  FMemberInfo local_28;
  FName local_18;
  FName FStack_10;
  
  if (param_2 == (UObject *)0x0) {
    param_2 = param_1->ReferencingObject;
  }
  if ((UGCObjectReferencer *)param_2 == FGCObject::GGCObjectReferencer) {
    pFVar3 = FGCObject::GGCObjectReferencer->CurrentlySerializingObject;
    if (pFVar3 == (FGCObject *)0x0) {
      local_res8 = NAME_Unknown;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) &&
         (_Init_thread_header(&::_TSS0), local_res8 = NAME_Unknown, ::_TSS0 == -1)) {
        ::FName::FName(&NAME_Unknown,L"Unknown");
        _Init_thread_footer(&::_TSS0);
        local_res8 = NAME_Unknown;
      }
    }
    else {
      puVar9 = (undefined8 *)(**(code **)(pFVar3->_padding_ + 0x10))(pFVar3,&local_38);
      if (*(int *)(puVar9 + 1) == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = (wchar_t *)*puVar9;
      }
      ::FName::FName(&local_res8,pwVar13);
      if ((void *)CONCAT44(FStack_34.Value,local_38) != (void *)0x0) {
        FMemory::Free((void *)CONCAT44(FStack_34.Value,local_38));
      }
    }
  }
  else {
    pFVar8 = GetMemberDebugInfo(&local_28,
                                (FSchemaView)
                                *(ulong64 *)(((UGCObjectReferencer *)param_2)->_padding_ + 0x1f0),
                                param_4);
    uVar1 = pFVar8->Offset;
    uVar2 = (pFVar8->Name).ComparisonIndex;
    local_30 = (pFVar8->Name).Number;
    local_res8.Number = local_30;
    local_res8.ComparisonIndex.Value = uVar2;
    local_38 = uVar1;
    FStack_34.Value = uVar2;
  }
  FStack_10 = (FName)((ulonglong)*param_3 | 1);
  local_res10.EncodedBits = (ulonglong)param_2 | 1;
  local_18 = local_res8;
  ppTVar10 = TMapBase<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,0>_>
             ::FindOrAddImpl<FReferenceToken_const_&>
                       ((TMapBase<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,0>_>
                         *)&param_1->History,
                        (int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)local_res10.EncodedBits,
                        &local_res10);
  pTVar12 = *ppTVar10;
  if (pTVar12 == (TArray<FGCDirectReference,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar11 = ::operator_new(0x10);
    pTVar12 = (TArray<FGCDirectReference,TSizedDefaultAllocator<32>_> *)0x0;
    if (pTVar11 != (TArray<FGCDirectReference,TSizedDefaultAllocator<32>_> *)0x0) {
      (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pTVar11->ArrayNum = 0;
      pTVar11->ArrayMax = 0;
      pTVar12 = pTVar11;
    }
    *ppTVar10 = pTVar12;
  }
  pFVar4 = (FName *)(pTVar12->AllocatorInstance).Data;
  if (((pFVar4 <= &local_18) && (&local_18 < pFVar4 + (longlong)pTVar12->ArrayMax * 2)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = pTVar12->ArrayNum;
  if (iVar7 == pTVar12->ArrayMax) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar12->AllocatorInstance,&pTVar12->ArrayMax);
  }
  pTVar12->ArrayNum = iVar7 + 1;
  pFVar4 = (FName *)((pTVar12->AllocatorInstance).Data + (longlong)iVar7 * 0x10);
  *pFVar4 = local_18;
  pFVar4[1] = FStack_10;
  return;
}

// HandleHistoryReference @ 142056b50

void __cdecl
UE::GC::TDebugReachabilityProcessor<4>::HandleHistoryReference
          (FWorkerContext *param_1,UObject *param_2,UObject **param_3,FMemberId param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  FGCObject *pFVar3;
  FName *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FMemberInfo *pFVar8;
  undefined8 *puVar9;
  TArray<FGCDirectReference,TSizedDefaultAllocator<32>_> **ppTVar10;
  TArray<FGCDirectReference,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<FGCDirectReference,TSizedDefaultAllocator<32>_> *pTVar12;
  wchar_t *pwVar13;
  FName local_res8;
  FReferenceToken local_res10;
  undefined4 local_38;
  FNameEntryId FStack_34;
  uint local_30;
  FMemberInfo local_28;
  FName local_18;
  FName FStack_10;
  
  if (param_2 == (UObject *)0x0) {
    param_2 = param_1->ReferencingObject;
  }
  if ((UGCObjectReferencer *)param_2 == FGCObject::GGCObjectReferencer) {
    pFVar3 = FGCObject::GGCObjectReferencer->CurrentlySerializingObject;
    if (pFVar3 == (FGCObject *)0x0) {
      local_res8 = NAME_Unknown;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) &&
         (_Init_thread_header(&::_TSS0), local_res8 = NAME_Unknown, ::_TSS0 == -1)) {
        ::FName::FName(&NAME_Unknown,L"Unknown");
        _Init_thread_footer(&::_TSS0);
        local_res8 = NAME_Unknown;
      }
    }
    else {
      puVar9 = (undefined8 *)(**(code **)(pFVar3->_padding_ + 0x10))(pFVar3,&local_38);
      if (*(int *)(puVar9 + 1) == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = (wchar_t *)*puVar9;
      }
      ::FName::FName(&local_res8,pwVar13);
      if ((void *)CONCAT44(FStack_34.Value,local_38) != (void *)0x0) {
        FMemory::Free((void *)CONCAT44(FStack_34.Value,local_38));
      }
    }
  }
  else {
    pFVar8 = GetMemberDebugInfo(&local_28,
                                (FSchemaView)
                                *(ulong64 *)(((UGCObjectReferencer *)param_2)->_padding_ + 0x1f0),
                                param_4);
    uVar1 = pFVar8->Offset;
    uVar2 = (pFVar8->Name).ComparisonIndex;
    local_30 = (pFVar8->Name).Number;
    local_res8.Number = local_30;
    local_res8.ComparisonIndex.Value = uVar2;
    local_38 = uVar1;
    FStack_34.Value = uVar2;
  }
  FStack_10 = (FName)((ulonglong)*param_3 | 1);
  local_res10.EncodedBits = (ulonglong)param_2 | 1;
  local_18 = local_res8;
  ppTVar10 = TMapBase<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,0>_>
             ::FindOrAddImpl<FReferenceToken_const_&>
                       ((TMapBase<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,0>_>
                         *)&param_1->History,
                        (int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)local_res10.EncodedBits,
                        &local_res10);
  pTVar12 = *ppTVar10;
  if (pTVar12 == (TArray<FGCDirectReference,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar11 = ::operator_new(0x10);
    pTVar12 = (TArray<FGCDirectReference,TSizedDefaultAllocator<32>_> *)0x0;
    if (pTVar11 != (TArray<FGCDirectReference,TSizedDefaultAllocator<32>_> *)0x0) {
      (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pTVar11->ArrayNum = 0;
      pTVar11->ArrayMax = 0;
      pTVar12 = pTVar11;
    }
    *ppTVar10 = pTVar12;
  }
  pFVar4 = (FName *)(pTVar12->AllocatorInstance).Data;
  if (((pFVar4 <= &local_18) && (&local_18 < pFVar4 + (longlong)pTVar12->ArrayMax * 2)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = pTVar12->ArrayNum;
  if (iVar7 == pTVar12->ArrayMax) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar12->AllocatorInstance,&pTVar12->ArrayMax);
  }
  pTVar12->ArrayNum = iVar7 + 1;
  pFVar4 = (FName *)((pTVar12->AllocatorInstance).Data + (longlong)iVar7 * 0x10);
  *pFVar4 = local_18;
  pFVar4[1] = FStack_10;
  return;
}

// HandleHistoryReference @ 142056da0

void __cdecl
UE::GC::TDebugReachabilityProcessor<5>::HandleHistoryReference
          (FWorkerContext *param_1,UObject *param_2,UObject **param_3,FMemberId param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  FGCObject *pFVar3;
  FName *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FMemberInfo *pFVar8;
  undefined8 *puVar9;
  TArray<FGCDirectReference,TSizedDefaultAllocator<32>_> **ppTVar10;
  TArray<FGCDirectReference,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<FGCDirectReference,TSizedDefaultAllocator<32>_> *pTVar12;
  wchar_t *pwVar13;
  FName local_res8;
  FReferenceToken local_res10;
  undefined4 local_38;
  FNameEntryId FStack_34;
  uint local_30;
  FMemberInfo local_28;
  FName local_18;
  FName FStack_10;
  
  if (param_2 == (UObject *)0x0) {
    param_2 = param_1->ReferencingObject;
  }
  if ((UGCObjectReferencer *)param_2 == FGCObject::GGCObjectReferencer) {
    pFVar3 = FGCObject::GGCObjectReferencer->CurrentlySerializingObject;
    if (pFVar3 == (FGCObject *)0x0) {
      local_res8 = NAME_Unknown;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) &&
         (_Init_thread_header(&::_TSS0), local_res8 = NAME_Unknown, ::_TSS0 == -1)) {
        ::FName::FName(&NAME_Unknown,L"Unknown");
        _Init_thread_footer(&::_TSS0);
        local_res8 = NAME_Unknown;
      }
    }
    else {
      puVar9 = (undefined8 *)(**(code **)(pFVar3->_padding_ + 0x10))(pFVar3,&local_38);
      if (*(int *)(puVar9 + 1) == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = (wchar_t *)*puVar9;
      }
      ::FName::FName(&local_res8,pwVar13);
      if ((void *)CONCAT44(FStack_34.Value,local_38) != (void *)0x0) {
        FMemory::Free((void *)CONCAT44(FStack_34.Value,local_38));
      }
    }
  }
  else {
    pFVar8 = GetMemberDebugInfo(&local_28,
                                (FSchemaView)
                                *(ulong64 *)(((UGCObjectReferencer *)param_2)->_padding_ + 0x1f0),
                                param_4);
    uVar1 = pFVar8->Offset;
    uVar2 = (pFVar8->Name).ComparisonIndex;
    local_30 = (pFVar8->Name).Number;
    local_res8.Number = local_30;
    local_res8.ComparisonIndex.Value = uVar2;
    local_38 = uVar1;
    FStack_34.Value = uVar2;
  }
  FStack_10 = (FName)((ulonglong)*param_3 | 1);
  local_res10.EncodedBits = (ulonglong)param_2 | 1;
  local_18 = local_res8;
  ppTVar10 = TMapBase<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,0>_>
             ::FindOrAddImpl<FReferenceToken_const_&>
                       ((TMapBase<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,0>_>
                         *)&param_1->History,
                        (int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)local_res10.EncodedBits,
                        &local_res10);
  pTVar12 = *ppTVar10;
  if (pTVar12 == (TArray<FGCDirectReference,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar11 = ::operator_new(0x10);
    pTVar12 = (TArray<FGCDirectReference,TSizedDefaultAllocator<32>_> *)0x0;
    if (pTVar11 != (TArray<FGCDirectReference,TSizedDefaultAllocator<32>_> *)0x0) {
      (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pTVar11->ArrayNum = 0;
      pTVar11->ArrayMax = 0;
      pTVar12 = pTVar11;
    }
    *ppTVar10 = pTVar12;
  }
  pFVar4 = (FName *)(pTVar12->AllocatorInstance).Data;
  if (((pFVar4 <= &local_18) && (&local_18 < pFVar4 + (longlong)pTVar12->ArrayMax * 2)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = pTVar12->ArrayNum;
  if (iVar7 == pTVar12->ArrayMax) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar12->AllocatorInstance,&pTVar12->ArrayMax);
  }
  pTVar12->ArrayNum = iVar7 + 1;
  pFVar4 = (FName *)((pTVar12->AllocatorInstance).Data + (longlong)iVar7 * 0x10);
  *pFVar4 = local_18;
  pFVar4[1] = FStack_10;
  return;
}

// HandleHistoryReference @ 142056ff0

void __cdecl
UE::GC::TDebugReachabilityProcessor<8>::HandleHistoryReference
          (FWorkerContext *param_1,UObject *param_2,UObject **param_3,FMemberId param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  FGCObject *pFVar3;
  FName *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FMemberInfo *pFVar8;
  undefined8 *puVar9;
  TArray<FGCDirectReference,TSizedDefaultAllocator<32>_> **ppTVar10;
  TArray<FGCDirectReference,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<FGCDirectReference,TSizedDefaultAllocator<32>_> *pTVar12;
  wchar_t *pwVar13;
  FName local_res8;
  FReferenceToken local_res10;
  undefined4 local_38;
  FNameEntryId FStack_34;
  uint local_30;
  FMemberInfo local_28;
  FName local_18;
  FName FStack_10;
  
  if (param_2 == (UObject *)0x0) {
    param_2 = param_1->ReferencingObject;
  }
  if ((UGCObjectReferencer *)param_2 == FGCObject::GGCObjectReferencer) {
    pFVar3 = FGCObject::GGCObjectReferencer->CurrentlySerializingObject;
    if (pFVar3 == (FGCObject *)0x0) {
      local_res8 = NAME_Unknown;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) &&
         (_Init_thread_header(&::_TSS0), local_res8 = NAME_Unknown, ::_TSS0 == -1)) {
        ::FName::FName(&NAME_Unknown,L"Unknown");
        _Init_thread_footer(&::_TSS0);
        local_res8 = NAME_Unknown;
      }
    }
    else {
      puVar9 = (undefined8 *)(**(code **)(pFVar3->_padding_ + 0x10))(pFVar3,&local_38);
      if (*(int *)(puVar9 + 1) == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = (wchar_t *)*puVar9;
      }
      ::FName::FName(&local_res8,pwVar13);
      if ((void *)CONCAT44(FStack_34.Value,local_38) != (void *)0x0) {
        FMemory::Free((void *)CONCAT44(FStack_34.Value,local_38));
      }
    }
  }
  else {
    pFVar8 = GetMemberDebugInfo(&local_28,
                                (FSchemaView)
                                *(ulong64 *)(((UGCObjectReferencer *)param_2)->_padding_ + 0x1f0),
                                param_4);
    uVar1 = pFVar8->Offset;
    uVar2 = (pFVar8->Name).ComparisonIndex;
    local_30 = (pFVar8->Name).Number;
    local_res8.Number = local_30;
    local_res8.ComparisonIndex.Value = uVar2;
    local_38 = uVar1;
    FStack_34.Value = uVar2;
  }
  FStack_10 = (FName)((ulonglong)*param_3 | 1);
  local_res10.EncodedBits = (ulonglong)param_2 | 1;
  local_18 = local_res8;
  ppTVar10 = TMapBase<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,0>_>
             ::FindOrAddImpl<FReferenceToken_const_&>
                       ((TMapBase<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,0>_>
                         *)&param_1->History,
                        (int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)local_res10.EncodedBits,
                        &local_res10);
  pTVar12 = *ppTVar10;
  if (pTVar12 == (TArray<FGCDirectReference,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar11 = ::operator_new(0x10);
    pTVar12 = (TArray<FGCDirectReference,TSizedDefaultAllocator<32>_> *)0x0;
    if (pTVar11 != (TArray<FGCDirectReference,TSizedDefaultAllocator<32>_> *)0x0) {
      (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pTVar11->ArrayNum = 0;
      pTVar11->ArrayMax = 0;
      pTVar12 = pTVar11;
    }
    *ppTVar10 = pTVar12;
  }
  pFVar4 = (FName *)(pTVar12->AllocatorInstance).Data;
  if (((pFVar4 <= &local_18) && (&local_18 < pFVar4 + (longlong)pTVar12->ArrayMax * 2)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = pTVar12->ArrayNum;
  if (iVar7 == pTVar12->ArrayMax) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar12->AllocatorInstance,&pTVar12->ArrayMax);
  }
  pTVar12->ArrayNum = iVar7 + 1;
  pFVar4 = (FName *)((pTVar12->AllocatorInstance).Data + (longlong)iVar7 * 0x10);
  *pFVar4 = local_18;
  pFVar4[1] = FStack_10;
  return;
}

// HandleHistoryReference @ 142057240

void __cdecl
UE::GC::TDebugReachabilityProcessor<9>::HandleHistoryReference
          (FWorkerContext *param_1,UObject *param_2,UObject **param_3,FMemberId param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  FGCObject *pFVar3;
  FName *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FMemberInfo *pFVar8;
  undefined8 *puVar9;
  TArray<FGCDirectReference,TSizedDefaultAllocator<32>_> **ppTVar10;
  TArray<FGCDirectReference,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<FGCDirectReference,TSizedDefaultAllocator<32>_> *pTVar12;
  wchar_t *pwVar13;
  FName local_res8;
  FReferenceToken local_res10;
  undefined4 local_38;
  FNameEntryId FStack_34;
  uint local_30;
  FMemberInfo local_28;
  FName local_18;
  FName FStack_10;
  
  if (param_2 == (UObject *)0x0) {
    param_2 = param_1->ReferencingObject;
  }
  if ((UGCObjectReferencer *)param_2 == FGCObject::GGCObjectReferencer) {
    pFVar3 = FGCObject::GGCObjectReferencer->CurrentlySerializingObject;
    if (pFVar3 == (FGCObject *)0x0) {
      local_res8 = NAME_Unknown;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) &&
         (_Init_thread_header(&::_TSS0), local_res8 = NAME_Unknown, ::_TSS0 == -1)) {
        ::FName::FName(&NAME_Unknown,L"Unknown");
        _Init_thread_footer(&::_TSS0);
        local_res8 = NAME_Unknown;
      }
    }
    else {
      puVar9 = (undefined8 *)(**(code **)(pFVar3->_padding_ + 0x10))(pFVar3,&local_38);
      if (*(int *)(puVar9 + 1) == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = (wchar_t *)*puVar9;
      }
      ::FName::FName(&local_res8,pwVar13);
      if ((void *)CONCAT44(FStack_34.Value,local_38) != (void *)0x0) {
        FMemory::Free((void *)CONCAT44(FStack_34.Value,local_38));
      }
    }
  }
  else {
    pFVar8 = GetMemberDebugInfo(&local_28,
                                (FSchemaView)
                                *(ulong64 *)(((UGCObjectReferencer *)param_2)->_padding_ + 0x1f0),
                                param_4);
    uVar1 = pFVar8->Offset;
    uVar2 = (pFVar8->Name).ComparisonIndex;
    local_30 = (pFVar8->Name).Number;
    local_res8.Number = local_30;
    local_res8.ComparisonIndex.Value = uVar2;
    local_38 = uVar1;
    FStack_34.Value = uVar2;
  }
  FStack_10 = (FName)((ulonglong)*param_3 | 1);
  local_res10.EncodedBits = (ulonglong)param_2 | 1;
  local_18 = local_res8;
  ppTVar10 = TMapBase<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,0>_>
             ::FindOrAddImpl<FReferenceToken_const_&>
                       ((TMapBase<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,0>_>
                         *)&param_1->History,
                        (int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)local_res10.EncodedBits,
                        &local_res10);
  pTVar12 = *ppTVar10;
  if (pTVar12 == (TArray<FGCDirectReference,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar11 = ::operator_new(0x10);
    pTVar12 = (TArray<FGCDirectReference,TSizedDefaultAllocator<32>_> *)0x0;
    if (pTVar11 != (TArray<FGCDirectReference,TSizedDefaultAllocator<32>_> *)0x0) {
      (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pTVar11->ArrayNum = 0;
      pTVar11->ArrayMax = 0;
      pTVar12 = pTVar11;
    }
    *ppTVar10 = pTVar12;
  }
  pFVar4 = (FName *)(pTVar12->AllocatorInstance).Data;
  if (((pFVar4 <= &local_18) && (&local_18 < pFVar4 + (longlong)pTVar12->ArrayMax * 2)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = pTVar12->ArrayNum;
  if (iVar7 == pTVar12->ArrayMax) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar12->AllocatorInstance,&pTVar12->ArrayMax);
  }
  pTVar12->ArrayNum = iVar7 + 1;
  pFVar4 = (FName *)((pTVar12->AllocatorInstance).Data + (longlong)iVar7 * 0x10);
  *pFVar4 = local_18;
  pFVar4[1] = FStack_10;
  return;
}

// HandleHistoryReference @ 142057490

void __cdecl
UE::GC::TDebugReachabilityProcessor<0>::HandleHistoryReference
          (FWorkerContext *param_1,UObject *param_2,UObject **param_3,FMemberId param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  FGCObject *pFVar3;
  FName *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FMemberInfo *pFVar8;
  undefined8 *puVar9;
  TArray<FGCDirectReference,TSizedDefaultAllocator<32>_> **ppTVar10;
  TArray<FGCDirectReference,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<FGCDirectReference,TSizedDefaultAllocator<32>_> *pTVar12;
  wchar_t *pwVar13;
  FName local_res8;
  FReferenceToken local_res10;
  undefined4 local_38;
  FNameEntryId FStack_34;
  uint local_30;
  FMemberInfo local_28;
  FName local_18;
  FName FStack_10;
  
  if (param_2 == (UObject *)0x0) {
    param_2 = param_1->ReferencingObject;
  }
  if ((UGCObjectReferencer *)param_2 == FGCObject::GGCObjectReferencer) {
    pFVar3 = FGCObject::GGCObjectReferencer->CurrentlySerializingObject;
    if (pFVar3 == (FGCObject *)0x0) {
      local_res8 = NAME_Unknown;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) &&
         (_Init_thread_header(&::_TSS0), local_res8 = NAME_Unknown, ::_TSS0 == -1)) {
        ::FName::FName(&NAME_Unknown,L"Unknown");
        _Init_thread_footer(&::_TSS0);
        local_res8 = NAME_Unknown;
      }
    }
    else {
      puVar9 = (undefined8 *)(**(code **)(pFVar3->_padding_ + 0x10))(pFVar3,&local_38);
      if (*(int *)(puVar9 + 1) == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = (wchar_t *)*puVar9;
      }
      ::FName::FName(&local_res8,pwVar13);
      if ((void *)CONCAT44(FStack_34.Value,local_38) != (void *)0x0) {
        FMemory::Free((void *)CONCAT44(FStack_34.Value,local_38));
      }
    }
  }
  else {
    pFVar8 = GetMemberDebugInfo(&local_28,
                                (FSchemaView)
                                *(ulong64 *)(((UGCObjectReferencer *)param_2)->_padding_ + 0x1f0),
                                param_4);
    uVar1 = pFVar8->Offset;
    uVar2 = (pFVar8->Name).ComparisonIndex;
    local_30 = (pFVar8->Name).Number;
    local_res8.Number = local_30;
    local_res8.ComparisonIndex.Value = uVar2;
    local_38 = uVar1;
    FStack_34.Value = uVar2;
  }
  FStack_10 = (FName)((ulonglong)*param_3 | 1);
  local_res10.EncodedBits = (ulonglong)param_2 | 1;
  local_18 = local_res8;
  ppTVar10 = TMapBase<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,0>_>
             ::FindOrAddImpl<FReferenceToken_const_&>
                       ((TMapBase<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,0>_>
                         *)&param_1->History,
                        (int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)local_res10.EncodedBits,
                        &local_res10);
  pTVar12 = *ppTVar10;
  if (pTVar12 == (TArray<FGCDirectReference,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar11 = ::operator_new(0x10);
    pTVar12 = (TArray<FGCDirectReference,TSizedDefaultAllocator<32>_> *)0x0;
    if (pTVar11 != (TArray<FGCDirectReference,TSizedDefaultAllocator<32>_> *)0x0) {
      (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pTVar11->ArrayNum = 0;
      pTVar11->ArrayMax = 0;
      pTVar12 = pTVar11;
    }
    *ppTVar10 = pTVar12;
  }
  pFVar4 = (FName *)(pTVar12->AllocatorInstance).Data;
  if (((pFVar4 <= &local_18) && (&local_18 < pFVar4 + (longlong)pTVar12->ArrayMax * 2)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = pTVar12->ArrayNum;
  if (iVar7 == pTVar12->ArrayMax) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar12->AllocatorInstance,&pTVar12->ArrayMax);
  }
  pTVar12->ArrayNum = iVar7 + 1;
  pFVar4 = (FName *)((pTVar12->AllocatorInstance).Data + (longlong)iVar7 * 0x10);
  *pFVar4 = local_18;
  pFVar4[1] = FStack_10;
  return;
}

// HandleHistoryReference @ 1420576e0

void __cdecl
UE::GC::TDebugReachabilityProcessor<12>::HandleHistoryReference
          (FWorkerContext *param_1,UObject *param_2,UObject **param_3,FMemberId param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  FGCObject *pFVar3;
  FName *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FMemberInfo *pFVar8;
  undefined8 *puVar9;
  TArray<FGCDirectReference,TSizedDefaultAllocator<32>_> **ppTVar10;
  TArray<FGCDirectReference,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<FGCDirectReference,TSizedDefaultAllocator<32>_> *pTVar12;
  wchar_t *pwVar13;
  FName local_res8;
  FReferenceToken local_res10;
  undefined4 local_38;
  FNameEntryId FStack_34;
  uint local_30;
  FMemberInfo local_28;
  FName local_18;
  FName FStack_10;
  
  if (param_2 == (UObject *)0x0) {
    param_2 = param_1->ReferencingObject;
  }
  if ((UGCObjectReferencer *)param_2 == FGCObject::GGCObjectReferencer) {
    pFVar3 = FGCObject::GGCObjectReferencer->CurrentlySerializingObject;
    if (pFVar3 == (FGCObject *)0x0) {
      local_res8 = NAME_Unknown;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) &&
         (_Init_thread_header(&::_TSS0), local_res8 = NAME_Unknown, ::_TSS0 == -1)) {
        ::FName::FName(&NAME_Unknown,L"Unknown");
        _Init_thread_footer(&::_TSS0);
        local_res8 = NAME_Unknown;
      }
    }
    else {
      puVar9 = (undefined8 *)(**(code **)(pFVar3->_padding_ + 0x10))(pFVar3,&local_38);
      if (*(int *)(puVar9 + 1) == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = (wchar_t *)*puVar9;
      }
      ::FName::FName(&local_res8,pwVar13);
      if ((void *)CONCAT44(FStack_34.Value,local_38) != (void *)0x0) {
        FMemory::Free((void *)CONCAT44(FStack_34.Value,local_38));
      }
    }
  }
  else {
    pFVar8 = GetMemberDebugInfo(&local_28,
                                (FSchemaView)
                                *(ulong64 *)(((UGCObjectReferencer *)param_2)->_padding_ + 0x1f0),
                                param_4);
    uVar1 = pFVar8->Offset;
    uVar2 = (pFVar8->Name).ComparisonIndex;
    local_30 = (pFVar8->Name).Number;
    local_res8.Number = local_30;
    local_res8.ComparisonIndex.Value = uVar2;
    local_38 = uVar1;
    FStack_34.Value = uVar2;
  }
  FStack_10 = (FName)((ulonglong)*param_3 | 1);
  local_res10.EncodedBits = (ulonglong)param_2 | 1;
  local_18 = local_res8;
  ppTVar10 = TMapBase<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,0>_>
             ::FindOrAddImpl<FReferenceToken_const_&>
                       ((TMapBase<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,0>_>
                         *)&param_1->History,
                        (int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)local_res10.EncodedBits,
                        &local_res10);
  pTVar12 = *ppTVar10;
  if (pTVar12 == (TArray<FGCDirectReference,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar11 = ::operator_new(0x10);
    pTVar12 = (TArray<FGCDirectReference,TSizedDefaultAllocator<32>_> *)0x0;
    if (pTVar11 != (TArray<FGCDirectReference,TSizedDefaultAllocator<32>_> *)0x0) {
      (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pTVar11->ArrayNum = 0;
      pTVar11->ArrayMax = 0;
      pTVar12 = pTVar11;
    }
    *ppTVar10 = pTVar12;
  }
  pFVar4 = (FName *)(pTVar12->AllocatorInstance).Data;
  if (((pFVar4 <= &local_18) && (&local_18 < pFVar4 + (longlong)pTVar12->ArrayMax * 2)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = pTVar12->ArrayNum;
  if (iVar7 == pTVar12->ArrayMax) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar12->AllocatorInstance,&pTVar12->ArrayMax);
  }
  pTVar12->ArrayNum = iVar7 + 1;
  pFVar4 = (FName *)((pTVar12->AllocatorInstance).Data + (longlong)iVar7 * 0x10);
  *pFVar4 = local_18;
  pFVar4[1] = FStack_10;
  return;
}

// HandleHistoryReference @ 142057930

void __cdecl
UE::GC::TDebugReachabilityProcessor<13>::HandleHistoryReference
          (FWorkerContext *param_1,UObject *param_2,UObject **param_3,FMemberId param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  FGCObject *pFVar3;
  FName *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FMemberInfo *pFVar8;
  undefined8 *puVar9;
  TArray<FGCDirectReference,TSizedDefaultAllocator<32>_> **ppTVar10;
  TArray<FGCDirectReference,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<FGCDirectReference,TSizedDefaultAllocator<32>_> *pTVar12;
  wchar_t *pwVar13;
  FName local_res8;
  FReferenceToken local_res10;
  undefined4 local_38;
  FNameEntryId FStack_34;
  uint local_30;
  FMemberInfo local_28;
  FName local_18;
  FName FStack_10;
  
  if (param_2 == (UObject *)0x0) {
    param_2 = param_1->ReferencingObject;
  }
  if ((UGCObjectReferencer *)param_2 == FGCObject::GGCObjectReferencer) {
    pFVar3 = FGCObject::GGCObjectReferencer->CurrentlySerializingObject;
    if (pFVar3 == (FGCObject *)0x0) {
      local_res8 = NAME_Unknown;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) &&
         (_Init_thread_header(&::_TSS0), local_res8 = NAME_Unknown, ::_TSS0 == -1)) {
        ::FName::FName(&NAME_Unknown,L"Unknown");
        _Init_thread_footer(&::_TSS0);
        local_res8 = NAME_Unknown;
      }
    }
    else {
      puVar9 = (undefined8 *)(**(code **)(pFVar3->_padding_ + 0x10))(pFVar3,&local_38);
      if (*(int *)(puVar9 + 1) == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = (wchar_t *)*puVar9;
      }
      ::FName::FName(&local_res8,pwVar13);
      if ((void *)CONCAT44(FStack_34.Value,local_38) != (void *)0x0) {
        FMemory::Free((void *)CONCAT44(FStack_34.Value,local_38));
      }
    }
  }
  else {
    pFVar8 = GetMemberDebugInfo(&local_28,
                                (FSchemaView)
                                *(ulong64 *)(((UGCObjectReferencer *)param_2)->_padding_ + 0x1f0),
                                param_4);
    uVar1 = pFVar8->Offset;
    uVar2 = (pFVar8->Name).ComparisonIndex;
    local_30 = (pFVar8->Name).Number;
    local_res8.Number = local_30;
    local_res8.ComparisonIndex.Value = uVar2;
    local_38 = uVar1;
    FStack_34.Value = uVar2;
  }
  FStack_10 = (FName)((ulonglong)*param_3 | 1);
  local_res10.EncodedBits = (ulonglong)param_2 | 1;
  local_18 = local_res8;
  ppTVar10 = TMapBase<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,0>_>
             ::FindOrAddImpl<FReferenceToken_const_&>
                       ((TMapBase<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,0>_>
                         *)&param_1->History,
                        (int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)local_res10.EncodedBits,
                        &local_res10);
  pTVar12 = *ppTVar10;
  if (pTVar12 == (TArray<FGCDirectReference,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar11 = ::operator_new(0x10);
    pTVar12 = (TArray<FGCDirectReference,TSizedDefaultAllocator<32>_> *)0x0;
    if (pTVar11 != (TArray<FGCDirectReference,TSizedDefaultAllocator<32>_> *)0x0) {
      (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pTVar11->ArrayNum = 0;
      pTVar11->ArrayMax = 0;
      pTVar12 = pTVar11;
    }
    *ppTVar10 = pTVar12;
  }
  pFVar4 = (FName *)(pTVar12->AllocatorInstance).Data;
  if (((pFVar4 <= &local_18) && (&local_18 < pFVar4 + (longlong)pTVar12->ArrayMax * 2)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = pTVar12->ArrayNum;
  if (iVar7 == pTVar12->ArrayMax) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar12->AllocatorInstance,&pTVar12->ArrayMax);
  }
  pTVar12->ArrayNum = iVar7 + 1;
  pFVar4 = (FName *)((pTVar12->AllocatorInstance).Data + (longlong)iVar7 * 0x10);
  *pFVar4 = local_18;
  pFVar4[1] = FStack_10;
  return;
}

// HandleTokenStreamObjectReference @ 14205faa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityProcessor<1>::HandleTokenStreamObjectReference
          (TDebugReachabilityProcessor<1> *this,FWorkerContext *param_1,UObject *param_2,
          UObject **param_3,FMemberId param_4,EOrigin param_5,bool param_6)

{
  FWorkBlockifier *this_00;
  UObjectBase *this_01;
  UObject *pUVar1;
  code *pcVar2;
  EInternalObjectFlags EVar3;
  FMemberId FVar4;
  bool bVar5;
  uint uVar6;
  FUObjectItem *pFVar7;
  FUObjectItem *pFVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  FWorkerContext *pFVar12;
  FReferenceToken local_res8;
  FWorkerContext *local_res10;
  TAddAdapter<1> local_res18;
  TAddAdapter<1> local_res20;
  FString local_68;
  FString local_58;
  
  FVar4 = param_4;
  this_01 = (UObjectBase *)*param_3;
  local_res8.EncodedBits = (ulonglong)param_2 | 1;
  if (this_01 != (UObjectBase *)0x0 &&
      (this->PermanentPool).Size <= (longlong)this_01 - (this->PermanentPool).Address) {
    local_res10 = param_1;
    bVar5 = UObjectBase::IsValidLowLevelFast(this_01,true);
    if (!bVar5) {
      FReferenceToken::GetMemberName(&local_res8,&local_58,&param_4);
      FReferenceToken::GetDescription(&local_res8,&local_68);
      Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)&PTR_u_Invalid_object__150832e38,
                 (FLogCategoryBase *)&LogGarbage);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    pFVar7 = FChunkedFixedUObjectArray::GetObjectPtr
                       (&GUObjectArray.ObjObjects,*(int *)&(*param_3)->field_0xc);
    if ((pFVar7 == (FUObjectItem *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ItemPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x381,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar6 = (uint)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x20);
    pFVar12 = local_res10;
    if ((param_6 & (byte)((ulonglong)((pFVar7->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x15)) != 0)
    {
      bVar5 = false;
      if (param_5 == Blueprint) {
        bVar5 = param_6;
      }
      if (bVar5 == true) {
        if ((param_2 == (UObject *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsEliminatingGarbage(Options) || ReferencingObject",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                               ,0xdd5,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *param_3 = (UObject *)0x0;
        return;
      }
      if (this->bTrackGarbage != false) {
        if ((param_5 != Other) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Origin == EOrigin::Other",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                               ,0xde0,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar12 = local_res10;
        HandleGarbageReference(local_res10,param_2,param_3,FVar4);
      }
    }
    EVar3 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    lVar11 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    pUVar1 = *param_3;
    if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
        (EInternalObjectFlags)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x20)) !=
        Borrowed) {
      uVar9 = (pFVar7->field0_0x0).FlagsAndRefCount;
      do {
        LOCK();
        uVar10 = (pFVar7->field0_0x0).FlagsAndRefCount;
        bVar5 = uVar9 == uVar10;
        if (bVar5) {
          (pFVar7->field0_0x0).FlagsAndRefCount = uVar9 & ~(lVar11 << 0x20);
          uVar10 = uVar9;
        }
        UNLOCK();
        uVar9 = uVar10;
      } while (!bVar5);
      LOCK();
      (pFVar7->field0_0x0).FlagsAndRefCount =
           (pFVar7->field0_0x0).FlagsAndRefCount |
           (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
      UNLOCK();
      if ((EVar3 & (EInternalObjectFlags)(uVar10 >> 0x20)) != Borrowed) {
        this_00 = &pFVar12->ObjectsToSerialize;
        if ((uVar6 >> 0x18 & 1) == 0) {
          *this_00->WipIt = pUVar1;
          this_00->WipIt = this_00->WipIt + 1;
          if (this_00->WipIt == ((pFVar12->ObjectsToSerialize).Wip)->Objects + 0x1ef) {
            FWorkBlockifier::PushFullBlockAsync(this_00);
          }
        }
        else {
          local_res18.Queue = this_00;
          MarkReferencedClustersAsReachable<1,UE::GC::TAddAdapter<1>_>
                    (~pFVar7->ClusterRootIndex,&local_res18);
        }
        if (this->bTrackHistory == false) {
          return;
        }
        HandleHistoryReference(pFVar12,param_2,param_3,FVar4);
        return;
      }
    }
    if ((0 < pFVar7->ClusterRootIndex & ~(byte)(uVar6 >> 0x17)) != 0) {
      pFVar8 = FChunkedFixedUObjectArray::GetObjectPtr
                         (&GUObjectArray.ObjObjects,pFVar7->ClusterRootIndex);
      if ((pFVar8 == (FUObjectItem *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ItemPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x381,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      do {
        lVar11 = (pFVar7->field0_0x0).FlagsAndRefCount;
        uVar6 = (uint)((ulonglong)lVar11 >> 0x20);
        if ((uVar6 >> 0x17 & 1) != 0) {
          return;
        }
        if (((ulonglong)pFVar7 & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (
                    L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                    );
        }
        LOCK();
        bVar5 = lVar11 == (pFVar7->field0_0x0).FlagsAndRefCount;
        if (bVar5) {
          (pFVar7->field0_0x0).FlagsAndRefCount =
               (longlong)(int)uVar6 << 0x20 | (longlong)(int)lVar11 | 0x80000000000000;
        }
        EVar3 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
        UNLOCK();
      } while (!bVar5);
      lVar11 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
          (EInternalObjectFlags)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20)) !=
          Borrowed) {
        uVar9 = (pFVar8->field0_0x0).FlagsAndRefCount;
        do {
          LOCK();
          uVar10 = (pFVar8->field0_0x0).FlagsAndRefCount;
          bVar5 = uVar9 == uVar10;
          if (bVar5) {
            (pFVar8->field0_0x0).FlagsAndRefCount = uVar9 & ~(lVar11 << 0x20);
            uVar10 = uVar9;
          }
          UNLOCK();
          uVar9 = uVar10;
        } while (!bVar5);
        LOCK();
        (pFVar8->field0_0x0).FlagsAndRefCount =
             (pFVar8->field0_0x0).FlagsAndRefCount |
             (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
        UNLOCK();
        if ((EVar3 & (EInternalObjectFlags)(uVar10 >> 0x20)) != Borrowed) {
          local_res20.Queue = &pFVar12->ObjectsToSerialize;
          MarkReferencedClustersAsReachable<1,UE::GC::TAddAdapter<1>_>
                    (~pFVar8->ClusterRootIndex,&local_res20);
        }
      }
    }
  }
  return;
}

// HandleTokenStreamObjectReference @ 14205feb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityProcessor<4>::HandleTokenStreamObjectReference
          (TDebugReachabilityProcessor<4> *this,FWorkerContext *param_1,UObject *param_2,
          UObject **param_3,FMemberId param_4,EOrigin param_5,bool param_6)

{
  FWorkBlockifier *this_00;
  UObjectBase *this_01;
  UObject *pUVar1;
  code *pcVar2;
  EInternalObjectFlags EVar3;
  FMemberId FVar4;
  bool bVar5;
  uint uVar6;
  FUObjectItem *pFVar7;
  FUObjectItem *pFVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  FReferenceToken local_res8;
  FWorkerContext *local_res10;
  TAddAdapter<4> local_res18;
  TAddAdapter<4> local_res20;
  FString local_68;
  FString local_58;
  
  FVar4 = param_4;
  this_01 = (UObjectBase *)*param_3;
  local_res8.EncodedBits = (ulonglong)param_2 | 1;
  if (this_01 != (UObjectBase *)0x0 &&
      (this->PermanentPool).Size <= (longlong)this_01 - (this->PermanentPool).Address) {
    local_res10 = param_1;
    bVar5 = UObjectBase::IsValidLowLevelFast(this_01,true);
    if (!bVar5) {
      FReferenceToken::GetMemberName(&local_res8,&local_58,&param_4);
      FReferenceToken::GetDescription(&local_res8,&local_68);
      Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)&PTR_u_Invalid_object__150832e38,
                 (FLogCategoryBase *)&LogGarbage);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      param_1 = local_res10;
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
        param_1 = local_res10;
      }
    }
    pFVar7 = FChunkedFixedUObjectArray::GetObjectPtr
                       (&GUObjectArray.ObjObjects,*(int *)&(*param_3)->field_0xc);
    if ((pFVar7 == (FUObjectItem *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ItemPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x381,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    EVar3 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    uVar6 = (uint)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x20);
    if (((param_6 & (byte)((ulonglong)((pFVar7->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x15)) == 0
        ) || (!param_6)) {
      lVar11 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      pUVar1 = *param_3;
      if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
          (EInternalObjectFlags)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x20)) !=
          Borrowed) {
        uVar9 = (pFVar7->field0_0x0).FlagsAndRefCount;
        do {
          LOCK();
          uVar10 = (pFVar7->field0_0x0).FlagsAndRefCount;
          bVar5 = uVar9 == uVar10;
          if (bVar5) {
            (pFVar7->field0_0x0).FlagsAndRefCount = uVar9 & ~(lVar11 << 0x20);
            uVar10 = uVar9;
          }
          UNLOCK();
          uVar9 = uVar10;
        } while (!bVar5);
        LOCK();
        (pFVar7->field0_0x0).FlagsAndRefCount =
             (pFVar7->field0_0x0).FlagsAndRefCount |
             (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
        UNLOCK();
        if ((EVar3 & (EInternalObjectFlags)(uVar10 >> 0x20)) != Borrowed) {
          this_00 = &param_1->ObjectsToSerialize;
          if ((uVar6 >> 0x18 & 1) == 0) {
            *this_00->WipIt = pUVar1;
            this_00->WipIt = this_00->WipIt + 1;
            if (this_00->WipIt == ((param_1->ObjectsToSerialize).Wip)->Objects + 0x1ef) {
              FWorkBlockifier::PushFullBlockSync(this_00);
            }
          }
          else {
            local_res18.Queue = this_00;
            MarkReferencedClustersAsReachable<4,UE::GC::TAddAdapter<4>_>
                      (~pFVar7->ClusterRootIndex,&local_res18);
          }
          if (this->bTrackHistory == false) {
            return;
          }
          HandleHistoryReference(param_1,param_2,param_3,FVar4);
          return;
        }
      }
      if ((~(byte)(uVar6 >> 0x17) & 0 < pFVar7->ClusterRootIndex) != 0) {
        pFVar8 = FChunkedFixedUObjectArray::GetObjectPtr
                           (&GUObjectArray.ObjObjects,pFVar7->ClusterRootIndex);
        if ((pFVar8 == (FUObjectItem *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ItemPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                               ,0x381,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        do {
          lVar11 = (pFVar7->field0_0x0).FlagsAndRefCount;
          uVar6 = (uint)((ulonglong)lVar11 >> 0x20);
          if ((uVar6 >> 0x17 & 1) != 0) {
            return;
          }
          if (((ulonglong)pFVar7 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (
                      L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          bVar5 = lVar11 == (pFVar7->field0_0x0).FlagsAndRefCount;
          if (bVar5) {
            (pFVar7->field0_0x0).FlagsAndRefCount =
                 (longlong)(int)uVar6 << 0x20 | (longlong)(int)lVar11 | 0x80000000000000;
          }
          EVar3 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
          UNLOCK();
        } while (!bVar5);
        lVar11 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
        if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
            (EInternalObjectFlags)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20)) !=
            Borrowed) {
          uVar9 = (pFVar8->field0_0x0).FlagsAndRefCount;
          do {
            LOCK();
            uVar10 = (pFVar8->field0_0x0).FlagsAndRefCount;
            bVar5 = uVar9 == uVar10;
            if (bVar5) {
              (pFVar8->field0_0x0).FlagsAndRefCount = uVar9 & ~(lVar11 << 0x20);
              uVar10 = uVar9;
            }
            UNLOCK();
            uVar9 = uVar10;
          } while (!bVar5);
          LOCK();
          (pFVar8->field0_0x0).FlagsAndRefCount =
               (pFVar8->field0_0x0).FlagsAndRefCount |
               (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
          UNLOCK();
          if ((EVar3 & (EInternalObjectFlags)(uVar10 >> 0x20)) != Borrowed) {
            local_res20.Queue = &local_res10->ObjectsToSerialize;
            MarkReferencedClustersAsReachable<4,UE::GC::TAddAdapter<4>_>
                      (~pFVar8->ClusterRootIndex,&local_res20);
          }
        }
      }
    }
    else {
      *param_3 = (UObject *)0x0;
    }
  }
  return;
}

// HandleTokenStreamObjectReference @ 142060240

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityProcessor<5>::HandleTokenStreamObjectReference
          (TDebugReachabilityProcessor<5> *this,FWorkerContext *param_1,UObject *param_2,
          UObject **param_3,FMemberId param_4,EOrigin param_5,bool param_6)

{
  FWorkBlockifier *this_00;
  UObjectBase *this_01;
  UObject *pUVar1;
  code *pcVar2;
  EInternalObjectFlags EVar3;
  FMemberId FVar4;
  bool bVar5;
  uint uVar6;
  FUObjectItem *pFVar7;
  FUObjectItem *pFVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  FReferenceToken local_res8;
  FWorkerContext *local_res10;
  TAddAdapter<5> local_res18;
  TAddAdapter<5> local_res20;
  FString local_68;
  FString local_58;
  
  FVar4 = param_4;
  this_01 = (UObjectBase *)*param_3;
  local_res8.EncodedBits = (ulonglong)param_2 | 1;
  if (this_01 != (UObjectBase *)0x0 &&
      (this->PermanentPool).Size <= (longlong)this_01 - (this->PermanentPool).Address) {
    local_res10 = param_1;
    bVar5 = UObjectBase::IsValidLowLevelFast(this_01,true);
    if (!bVar5) {
      FReferenceToken::GetMemberName(&local_res8,&local_58,&param_4);
      FReferenceToken::GetDescription(&local_res8,&local_68);
      Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)&PTR_u_Invalid_object__150832e38,
                 (FLogCategoryBase *)&LogGarbage);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      param_1 = local_res10;
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
        param_1 = local_res10;
      }
    }
    pFVar7 = FChunkedFixedUObjectArray::GetObjectPtr
                       (&GUObjectArray.ObjObjects,*(int *)&(*param_3)->field_0xc);
    if ((pFVar7 == (FUObjectItem *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ItemPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x381,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    EVar3 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    uVar6 = (uint)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x20);
    if (((param_6 & (byte)((ulonglong)((pFVar7->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x15)) == 0
        ) || (!param_6)) {
      lVar11 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      pUVar1 = *param_3;
      if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
          (EInternalObjectFlags)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x20)) !=
          Borrowed) {
        uVar9 = (pFVar7->field0_0x0).FlagsAndRefCount;
        do {
          LOCK();
          uVar10 = (pFVar7->field0_0x0).FlagsAndRefCount;
          bVar5 = uVar9 == uVar10;
          if (bVar5) {
            (pFVar7->field0_0x0).FlagsAndRefCount = uVar9 & ~(lVar11 << 0x20);
            uVar10 = uVar9;
          }
          UNLOCK();
          uVar9 = uVar10;
        } while (!bVar5);
        LOCK();
        (pFVar7->field0_0x0).FlagsAndRefCount =
             (pFVar7->field0_0x0).FlagsAndRefCount |
             (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
        UNLOCK();
        if ((EVar3 & (EInternalObjectFlags)(uVar10 >> 0x20)) != Borrowed) {
          this_00 = &param_1->ObjectsToSerialize;
          if ((uVar6 >> 0x18 & 1) == 0) {
            *this_00->WipIt = pUVar1;
            this_00->WipIt = this_00->WipIt + 1;
            if (this_00->WipIt == ((param_1->ObjectsToSerialize).Wip)->Objects + 0x1ef) {
              FWorkBlockifier::PushFullBlockAsync(this_00);
            }
          }
          else {
            local_res18.Queue = this_00;
            MarkReferencedClustersAsReachable<5,UE::GC::TAddAdapter<5>_>
                      (~pFVar7->ClusterRootIndex,&local_res18);
          }
          if (this->bTrackHistory == false) {
            return;
          }
          HandleHistoryReference(param_1,param_2,param_3,FVar4);
          return;
        }
      }
      if ((~(byte)(uVar6 >> 0x17) & 0 < pFVar7->ClusterRootIndex) != 0) {
        pFVar8 = FChunkedFixedUObjectArray::GetObjectPtr
                           (&GUObjectArray.ObjObjects,pFVar7->ClusterRootIndex);
        if ((pFVar8 == (FUObjectItem *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ItemPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                               ,0x381,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        do {
          lVar11 = (pFVar7->field0_0x0).FlagsAndRefCount;
          uVar6 = (uint)((ulonglong)lVar11 >> 0x20);
          if ((uVar6 >> 0x17 & 1) != 0) {
            return;
          }
          if (((ulonglong)pFVar7 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (
                      L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          bVar5 = lVar11 == (pFVar7->field0_0x0).FlagsAndRefCount;
          if (bVar5) {
            (pFVar7->field0_0x0).FlagsAndRefCount =
                 (longlong)(int)uVar6 << 0x20 | (longlong)(int)lVar11 | 0x80000000000000;
          }
          EVar3 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
          UNLOCK();
        } while (!bVar5);
        lVar11 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
        if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
            (EInternalObjectFlags)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20)) !=
            Borrowed) {
          uVar9 = (pFVar8->field0_0x0).FlagsAndRefCount;
          do {
            LOCK();
            uVar10 = (pFVar8->field0_0x0).FlagsAndRefCount;
            bVar5 = uVar9 == uVar10;
            if (bVar5) {
              (pFVar8->field0_0x0).FlagsAndRefCount = uVar9 & ~(lVar11 << 0x20);
              uVar10 = uVar9;
            }
            UNLOCK();
            uVar9 = uVar10;
          } while (!bVar5);
          LOCK();
          (pFVar8->field0_0x0).FlagsAndRefCount =
               (pFVar8->field0_0x0).FlagsAndRefCount |
               (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
          UNLOCK();
          if ((EVar3 & (EInternalObjectFlags)(uVar10 >> 0x20)) != Borrowed) {
            local_res20.Queue = &local_res10->ObjectsToSerialize;
            MarkReferencedClustersAsReachable<5,UE::GC::TAddAdapter<5>_>
                      (~pFVar8->ClusterRootIndex,&local_res20);
          }
        }
      }
    }
    else {
      *param_3 = (UObject *)0x0;
    }
  }
  return;
}

// HandleTokenStreamObjectReference @ 1420605d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityProcessor<8>::HandleTokenStreamObjectReference
          (TDebugReachabilityProcessor<8> *this,FWorkerContext *param_1,UObject *param_2,
          UObject **param_3,FMemberId param_4,EOrigin param_5,bool param_6)

{
  FWorkBlockifier *this_00;
  UObjectBase *this_01;
  UObject *pUVar1;
  code *pcVar2;
  EInternalObjectFlags EVar3;
  FMemberId FVar4;
  bool bVar5;
  uint uVar6;
  FUObjectItem *pFVar7;
  FUObjectItem *pFVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  FWorkerContext *pFVar12;
  FReferenceToken local_res8;
  FWorkerContext *local_res10;
  TAddAdapter<8> local_res18;
  TAddAdapter<8> local_res20;
  FString local_68;
  FString local_58;
  
  FVar4 = param_4;
  this_01 = (UObjectBase *)*param_3;
  local_res8.EncodedBits = (ulonglong)param_2 | 1;
  if (this_01 != (UObjectBase *)0x0 &&
      (this->PermanentPool).Size <= (longlong)this_01 - (this->PermanentPool).Address) {
    local_res10 = param_1;
    bVar5 = UObjectBase::IsValidLowLevelFast(this_01,true);
    if (!bVar5) {
      FReferenceToken::GetMemberName(&local_res8,&local_58,&param_4);
      FReferenceToken::GetDescription(&local_res8,&local_68);
      Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)&PTR_u_Invalid_object__150832e38,
                 (FLogCategoryBase *)&LogGarbage);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    pFVar7 = FChunkedFixedUObjectArray::GetObjectPtr
                       (&GUObjectArray.ObjObjects,*(int *)&(*param_3)->field_0xc);
    if ((pFVar7 == (FUObjectItem *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ItemPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x381,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar6 = (uint)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x20);
    pFVar12 = local_res10;
    if ((param_6 & (byte)((ulonglong)((pFVar7->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x15)) != 0)
    {
      bVar5 = false;
      if (param_5 == Blueprint) {
        bVar5 = param_6;
      }
      if (bVar5 == true) {
        if ((param_2 == (UObject *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsEliminatingGarbage(Options) || ReferencingObject",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                               ,0xdd5,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *param_3 = (UObject *)0x0;
        return;
      }
      if (this->bTrackGarbage != false) {
        if ((param_5 != Other) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Origin == EOrigin::Other",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                               ,0xde0,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar12 = local_res10;
        HandleGarbageReference(local_res10,param_2,param_3,FVar4);
      }
    }
    EVar3 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    lVar11 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    pUVar1 = *param_3;
    if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
        (EInternalObjectFlags)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x20)) !=
        Borrowed) {
      uVar9 = (pFVar7->field0_0x0).FlagsAndRefCount;
      do {
        LOCK();
        uVar10 = (pFVar7->field0_0x0).FlagsAndRefCount;
        bVar5 = uVar9 == uVar10;
        if (bVar5) {
          (pFVar7->field0_0x0).FlagsAndRefCount = uVar9 & ~(lVar11 << 0x20);
          uVar10 = uVar9;
        }
        UNLOCK();
        uVar9 = uVar10;
      } while (!bVar5);
      LOCK();
      (pFVar7->field0_0x0).FlagsAndRefCount =
           (pFVar7->field0_0x0).FlagsAndRefCount |
           (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
      UNLOCK();
      if ((EVar3 & (EInternalObjectFlags)(uVar10 >> 0x20)) != Borrowed) {
        this_00 = &pFVar12->ObjectsToSerialize;
        if ((uVar6 >> 0x18 & 1) == 0) {
          *this_00->WipIt = pUVar1;
          this_00->WipIt = this_00->WipIt + 1;
          if (this_00->WipIt == ((pFVar12->ObjectsToSerialize).Wip)->Objects + 0x1ef) {
            FWorkBlockifier::PushFullBlockSync(this_00);
          }
        }
        else {
          local_res18.Queue = this_00;
          MarkReferencedClustersAsReachable<8,UE::GC::TAddAdapter<8>_>
                    (~pFVar7->ClusterRootIndex,&local_res18);
        }
        if (this->bTrackHistory == false) {
          return;
        }
        HandleHistoryReference(pFVar12,param_2,param_3,FVar4);
        return;
      }
    }
    if ((0 < pFVar7->ClusterRootIndex & ~(byte)(uVar6 >> 0x17)) != 0) {
      pFVar8 = FChunkedFixedUObjectArray::GetObjectPtr
                         (&GUObjectArray.ObjObjects,pFVar7->ClusterRootIndex);
      if ((pFVar8 == (FUObjectItem *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ItemPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x381,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      do {
        lVar11 = (pFVar7->field0_0x0).FlagsAndRefCount;
        uVar6 = (uint)((ulonglong)lVar11 >> 0x20);
        if ((uVar6 >> 0x17 & 1) != 0) {
          return;
        }
        if (((ulonglong)pFVar7 & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (
                    L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                    );
        }
        LOCK();
        bVar5 = lVar11 == (pFVar7->field0_0x0).FlagsAndRefCount;
        if (bVar5) {
          (pFVar7->field0_0x0).FlagsAndRefCount =
               (longlong)(int)uVar6 << 0x20 | (longlong)(int)lVar11 | 0x80000000000000;
        }
        EVar3 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
        UNLOCK();
      } while (!bVar5);
      lVar11 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
          (EInternalObjectFlags)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20)) !=
          Borrowed) {
        uVar9 = (pFVar8->field0_0x0).FlagsAndRefCount;
        do {
          LOCK();
          uVar10 = (pFVar8->field0_0x0).FlagsAndRefCount;
          bVar5 = uVar9 == uVar10;
          if (bVar5) {
            (pFVar8->field0_0x0).FlagsAndRefCount = uVar9 & ~(lVar11 << 0x20);
            uVar10 = uVar9;
          }
          UNLOCK();
          uVar9 = uVar10;
        } while (!bVar5);
        LOCK();
        (pFVar8->field0_0x0).FlagsAndRefCount =
             (pFVar8->field0_0x0).FlagsAndRefCount |
             (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
        UNLOCK();
        if ((EVar3 & (EInternalObjectFlags)(uVar10 >> 0x20)) != Borrowed) {
          local_res20.Queue = &pFVar12->ObjectsToSerialize;
          MarkReferencedClustersAsReachable<8,UE::GC::TAddAdapter<8>_>
                    (~pFVar8->ClusterRootIndex,&local_res20);
        }
      }
    }
  }
  return;
}

// HandleTokenStreamObjectReference @ 1420609e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityProcessor<9>::HandleTokenStreamObjectReference
          (TDebugReachabilityProcessor<9> *this,FWorkerContext *param_1,UObject *param_2,
          UObject **param_3,FMemberId param_4,EOrigin param_5,bool param_6)

{
  FWorkBlockifier *this_00;
  UObjectBase *this_01;
  UObject *pUVar1;
  code *pcVar2;
  EInternalObjectFlags EVar3;
  FMemberId FVar4;
  bool bVar5;
  uint uVar6;
  FUObjectItem *pFVar7;
  FUObjectItem *pFVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  FWorkerContext *pFVar12;
  FReferenceToken local_res8;
  FWorkerContext *local_res10;
  TAddAdapter<9> local_res18;
  TAddAdapter<9> local_res20;
  FString local_68;
  FString local_58;
  
  FVar4 = param_4;
  this_01 = (UObjectBase *)*param_3;
  local_res8.EncodedBits = (ulonglong)param_2 | 1;
  if (this_01 != (UObjectBase *)0x0 &&
      (this->PermanentPool).Size <= (longlong)this_01 - (this->PermanentPool).Address) {
    local_res10 = param_1;
    bVar5 = UObjectBase::IsValidLowLevelFast(this_01,true);
    if (!bVar5) {
      FReferenceToken::GetMemberName(&local_res8,&local_58,&param_4);
      FReferenceToken::GetDescription(&local_res8,&local_68);
      Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)&PTR_u_Invalid_object__150832e38,
                 (FLogCategoryBase *)&LogGarbage);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    pFVar7 = FChunkedFixedUObjectArray::GetObjectPtr
                       (&GUObjectArray.ObjObjects,*(int *)&(*param_3)->field_0xc);
    if ((pFVar7 == (FUObjectItem *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ItemPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x381,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar6 = (uint)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x20);
    pFVar12 = local_res10;
    if ((param_6 & (byte)((ulonglong)((pFVar7->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x15)) != 0)
    {
      bVar5 = false;
      if (param_5 == Blueprint) {
        bVar5 = param_6;
      }
      if (bVar5 == true) {
        if ((param_2 == (UObject *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsEliminatingGarbage(Options) || ReferencingObject",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                               ,0xdd5,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *param_3 = (UObject *)0x0;
        return;
      }
      if (this->bTrackGarbage != false) {
        if ((param_5 != Other) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Origin == EOrigin::Other",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                               ,0xde0,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar12 = local_res10;
        HandleGarbageReference(local_res10,param_2,param_3,FVar4);
      }
    }
    EVar3 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    lVar11 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    pUVar1 = *param_3;
    if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
        (EInternalObjectFlags)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x20)) !=
        Borrowed) {
      uVar9 = (pFVar7->field0_0x0).FlagsAndRefCount;
      do {
        LOCK();
        uVar10 = (pFVar7->field0_0x0).FlagsAndRefCount;
        bVar5 = uVar9 == uVar10;
        if (bVar5) {
          (pFVar7->field0_0x0).FlagsAndRefCount = uVar9 & ~(lVar11 << 0x20);
          uVar10 = uVar9;
        }
        UNLOCK();
        uVar9 = uVar10;
      } while (!bVar5);
      LOCK();
      (pFVar7->field0_0x0).FlagsAndRefCount =
           (pFVar7->field0_0x0).FlagsAndRefCount |
           (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
      UNLOCK();
      if ((EVar3 & (EInternalObjectFlags)(uVar10 >> 0x20)) != Borrowed) {
        this_00 = &pFVar12->ObjectsToSerialize;
        if ((uVar6 >> 0x18 & 1) == 0) {
          *this_00->WipIt = pUVar1;
          this_00->WipIt = this_00->WipIt + 1;
          if (this_00->WipIt == ((pFVar12->ObjectsToSerialize).Wip)->Objects + 0x1ef) {
            FWorkBlockifier::PushFullBlockAsync(this_00);
          }
        }
        else {
          local_res18.Queue = this_00;
          MarkReferencedClustersAsReachable<9,UE::GC::TAddAdapter<9>_>
                    (~pFVar7->ClusterRootIndex,&local_res18);
        }
        if (this->bTrackHistory == false) {
          return;
        }
        HandleHistoryReference(pFVar12,param_2,param_3,FVar4);
        return;
      }
    }
    if ((0 < pFVar7->ClusterRootIndex & ~(byte)(uVar6 >> 0x17)) != 0) {
      pFVar8 = FChunkedFixedUObjectArray::GetObjectPtr
                         (&GUObjectArray.ObjObjects,pFVar7->ClusterRootIndex);
      if ((pFVar8 == (FUObjectItem *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ItemPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x381,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      do {
        lVar11 = (pFVar7->field0_0x0).FlagsAndRefCount;
        uVar6 = (uint)((ulonglong)lVar11 >> 0x20);
        if ((uVar6 >> 0x17 & 1) != 0) {
          return;
        }
        if (((ulonglong)pFVar7 & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (
                    L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                    );
        }
        LOCK();
        bVar5 = lVar11 == (pFVar7->field0_0x0).FlagsAndRefCount;
        if (bVar5) {
          (pFVar7->field0_0x0).FlagsAndRefCount =
               (longlong)(int)uVar6 << 0x20 | (longlong)(int)lVar11 | 0x80000000000000;
        }
        EVar3 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
        UNLOCK();
      } while (!bVar5);
      lVar11 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
          (EInternalObjectFlags)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20)) !=
          Borrowed) {
        uVar9 = (pFVar8->field0_0x0).FlagsAndRefCount;
        do {
          LOCK();
          uVar10 = (pFVar8->field0_0x0).FlagsAndRefCount;
          bVar5 = uVar9 == uVar10;
          if (bVar5) {
            (pFVar8->field0_0x0).FlagsAndRefCount = uVar9 & ~(lVar11 << 0x20);
            uVar10 = uVar9;
          }
          UNLOCK();
          uVar9 = uVar10;
        } while (!bVar5);
        LOCK();
        (pFVar8->field0_0x0).FlagsAndRefCount =
             (pFVar8->field0_0x0).FlagsAndRefCount |
             (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
        UNLOCK();
        if ((EVar3 & (EInternalObjectFlags)(uVar10 >> 0x20)) != Borrowed) {
          local_res20.Queue = &pFVar12->ObjectsToSerialize;
          MarkReferencedClustersAsReachable<9,UE::GC::TAddAdapter<9>_>
                    (~pFVar8->ClusterRootIndex,&local_res20);
        }
      }
    }
  }
  return;
}

// HandleTokenStreamObjectReference @ 142060df0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityProcessor<0>::HandleTokenStreamObjectReference
          (TDebugReachabilityProcessor<0> *this,FWorkerContext *param_1,UObject *param_2,
          UObject **param_3,FMemberId param_4,EOrigin param_5,bool param_6)

{
  FWorkBlockifier *this_00;
  UObjectBase *this_01;
  UObject *pUVar1;
  code *pcVar2;
  EInternalObjectFlags EVar3;
  FMemberId FVar4;
  bool bVar5;
  uint uVar6;
  FUObjectItem *pFVar7;
  FUObjectItem *pFVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  FWorkerContext *pFVar12;
  FReferenceToken local_res8;
  FWorkerContext *local_res10;
  TAddAdapter<0> local_res18;
  TAddAdapter<0> local_res20;
  FString local_68;
  FString local_58;
  
  FVar4 = param_4;
  this_01 = (UObjectBase *)*param_3;
  local_res8.EncodedBits = (ulonglong)param_2 | 1;
  if (this_01 != (UObjectBase *)0x0 &&
      (this->PermanentPool).Size <= (longlong)this_01 - (this->PermanentPool).Address) {
    local_res10 = param_1;
    bVar5 = UObjectBase::IsValidLowLevelFast(this_01,true);
    if (!bVar5) {
      FReferenceToken::GetMemberName(&local_res8,&local_58,&param_4);
      FReferenceToken::GetDescription(&local_res8,&local_68);
      Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)&PTR_u_Invalid_object__150832e38,
                 (FLogCategoryBase *)&LogGarbage);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    pFVar7 = FChunkedFixedUObjectArray::GetObjectPtr
                       (&GUObjectArray.ObjObjects,*(int *)&(*param_3)->field_0xc);
    if ((pFVar7 == (FUObjectItem *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ItemPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x381,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar6 = (uint)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x20);
    pFVar12 = local_res10;
    if ((param_6 & (byte)((ulonglong)((pFVar7->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x15)) != 0)
    {
      bVar5 = false;
      if (param_5 == Blueprint) {
        bVar5 = param_6;
      }
      if (bVar5 == true) {
        if ((param_2 == (UObject *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsEliminatingGarbage(Options) || ReferencingObject",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                               ,0xdd5,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *param_3 = (UObject *)0x0;
        return;
      }
      if (this->bTrackGarbage != false) {
        if ((param_5 != Other) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Origin == EOrigin::Other",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                               ,0xde0,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar12 = local_res10;
        HandleGarbageReference(local_res10,param_2,param_3,FVar4);
      }
    }
    EVar3 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    lVar11 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    pUVar1 = *param_3;
    if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
        (EInternalObjectFlags)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x20)) !=
        Borrowed) {
      uVar9 = (pFVar7->field0_0x0).FlagsAndRefCount;
      do {
        LOCK();
        uVar10 = (pFVar7->field0_0x0).FlagsAndRefCount;
        bVar5 = uVar9 == uVar10;
        if (bVar5) {
          (pFVar7->field0_0x0).FlagsAndRefCount = uVar9 & ~(lVar11 << 0x20);
          uVar10 = uVar9;
        }
        UNLOCK();
        uVar9 = uVar10;
      } while (!bVar5);
      LOCK();
      (pFVar7->field0_0x0).FlagsAndRefCount =
           (pFVar7->field0_0x0).FlagsAndRefCount |
           (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
      UNLOCK();
      if ((EVar3 & (EInternalObjectFlags)(uVar10 >> 0x20)) != Borrowed) {
        this_00 = &pFVar12->ObjectsToSerialize;
        if ((uVar6 >> 0x18 & 1) == 0) {
          *this_00->WipIt = pUVar1;
          this_00->WipIt = this_00->WipIt + 1;
          if (this_00->WipIt == ((pFVar12->ObjectsToSerialize).Wip)->Objects + 0x1ef) {
            FWorkBlockifier::PushFullBlockSync(this_00);
          }
        }
        else {
          local_res18.Queue = this_00;
          MarkReferencedClustersAsReachable<0,UE::GC::TAddAdapter<0>_>
                    (~pFVar7->ClusterRootIndex,&local_res18);
        }
        if (this->bTrackHistory == false) {
          return;
        }
        HandleHistoryReference(pFVar12,param_2,param_3,FVar4);
        return;
      }
    }
    if ((0 < pFVar7->ClusterRootIndex & ~(byte)(uVar6 >> 0x17)) != 0) {
      pFVar8 = FChunkedFixedUObjectArray::GetObjectPtr
                         (&GUObjectArray.ObjObjects,pFVar7->ClusterRootIndex);
      if ((pFVar8 == (FUObjectItem *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ItemPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x381,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      do {
        lVar11 = (pFVar7->field0_0x0).FlagsAndRefCount;
        uVar6 = (uint)((ulonglong)lVar11 >> 0x20);
        if ((uVar6 >> 0x17 & 1) != 0) {
          return;
        }
        if (((ulonglong)pFVar7 & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (
                    L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                    );
        }
        LOCK();
        bVar5 = lVar11 == (pFVar7->field0_0x0).FlagsAndRefCount;
        if (bVar5) {
          (pFVar7->field0_0x0).FlagsAndRefCount =
               (longlong)(int)uVar6 << 0x20 | (longlong)(int)lVar11 | 0x80000000000000;
        }
        EVar3 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
        UNLOCK();
      } while (!bVar5);
      lVar11 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
          (EInternalObjectFlags)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20)) !=
          Borrowed) {
        uVar9 = (pFVar8->field0_0x0).FlagsAndRefCount;
        do {
          LOCK();
          uVar10 = (pFVar8->field0_0x0).FlagsAndRefCount;
          bVar5 = uVar9 == uVar10;
          if (bVar5) {
            (pFVar8->field0_0x0).FlagsAndRefCount = uVar9 & ~(lVar11 << 0x20);
            uVar10 = uVar9;
          }
          UNLOCK();
          uVar9 = uVar10;
        } while (!bVar5);
        LOCK();
        (pFVar8->field0_0x0).FlagsAndRefCount =
             (pFVar8->field0_0x0).FlagsAndRefCount |
             (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
        UNLOCK();
        if ((EVar3 & (EInternalObjectFlags)(uVar10 >> 0x20)) != Borrowed) {
          local_res20.Queue = &pFVar12->ObjectsToSerialize;
          MarkReferencedClustersAsReachable<0,UE::GC::TAddAdapter<0>_>
                    (~pFVar8->ClusterRootIndex,&local_res20);
        }
      }
    }
  }
  return;
}

// HandleTokenStreamObjectReference @ 142061200

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityProcessor<12>::HandleTokenStreamObjectReference
          (TDebugReachabilityProcessor<12> *this,FWorkerContext *param_1,UObject *param_2,
          UObject **param_3,FMemberId param_4,EOrigin param_5,bool param_6)

{
  FWorkBlockifier *this_00;
  UObjectBase *this_01;
  UObject *pUVar1;
  code *pcVar2;
  EInternalObjectFlags EVar3;
  FMemberId FVar4;
  bool bVar5;
  uint uVar6;
  FUObjectItem *pFVar7;
  FUObjectItem *pFVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  FReferenceToken local_res8;
  FWorkerContext *local_res10;
  TAddAdapter<12> local_res18;
  TAddAdapter<12> local_res20;
  FString local_68;
  FString local_58;
  
  FVar4 = param_4;
  this_01 = (UObjectBase *)*param_3;
  local_res8.EncodedBits = (ulonglong)param_2 | 1;
  if (this_01 != (UObjectBase *)0x0 &&
      (this->PermanentPool).Size <= (longlong)this_01 - (this->PermanentPool).Address) {
    local_res10 = param_1;
    bVar5 = UObjectBase::IsValidLowLevelFast(this_01,true);
    if (!bVar5) {
      FReferenceToken::GetMemberName(&local_res8,&local_58,&param_4);
      FReferenceToken::GetDescription(&local_res8,&local_68);
      Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)&PTR_u_Invalid_object__150832e38,
                 (FLogCategoryBase *)&LogGarbage);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      param_1 = local_res10;
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
        param_1 = local_res10;
      }
    }
    pFVar7 = FChunkedFixedUObjectArray::GetObjectPtr
                       (&GUObjectArray.ObjObjects,*(int *)&(*param_3)->field_0xc);
    if ((pFVar7 == (FUObjectItem *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ItemPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x381,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    EVar3 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    uVar6 = (uint)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x20);
    if (((param_6 & (byte)((ulonglong)((pFVar7->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x15)) == 0
        ) || (!param_6)) {
      lVar11 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      pUVar1 = *param_3;
      if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
          (EInternalObjectFlags)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x20)) !=
          Borrowed) {
        uVar9 = (pFVar7->field0_0x0).FlagsAndRefCount;
        do {
          LOCK();
          uVar10 = (pFVar7->field0_0x0).FlagsAndRefCount;
          bVar5 = uVar9 == uVar10;
          if (bVar5) {
            (pFVar7->field0_0x0).FlagsAndRefCount = uVar9 & ~(lVar11 << 0x20);
            uVar10 = uVar9;
          }
          UNLOCK();
          uVar9 = uVar10;
        } while (!bVar5);
        LOCK();
        (pFVar7->field0_0x0).FlagsAndRefCount =
             (pFVar7->field0_0x0).FlagsAndRefCount |
             (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
        UNLOCK();
        if ((EVar3 & (EInternalObjectFlags)(uVar10 >> 0x20)) != Borrowed) {
          this_00 = &param_1->ObjectsToSerialize;
          if ((uVar6 >> 0x18 & 1) == 0) {
            *this_00->WipIt = pUVar1;
            this_00->WipIt = this_00->WipIt + 1;
            if (this_00->WipIt == ((param_1->ObjectsToSerialize).Wip)->Objects + 0x1ef) {
              FWorkBlockifier::PushFullBlockSync(this_00);
            }
          }
          else {
            local_res18.Queue = this_00;
            MarkReferencedClustersAsReachable<12,UE::GC::TAddAdapter<12>_>
                      (~pFVar7->ClusterRootIndex,&local_res18);
          }
          if (this->bTrackHistory == false) {
            return;
          }
          HandleHistoryReference(param_1,param_2,param_3,FVar4);
          return;
        }
      }
      if ((~(byte)(uVar6 >> 0x17) & 0 < pFVar7->ClusterRootIndex) != 0) {
        pFVar8 = FChunkedFixedUObjectArray::GetObjectPtr
                           (&GUObjectArray.ObjObjects,pFVar7->ClusterRootIndex);
        if ((pFVar8 == (FUObjectItem *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ItemPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                               ,0x381,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        do {
          lVar11 = (pFVar7->field0_0x0).FlagsAndRefCount;
          uVar6 = (uint)((ulonglong)lVar11 >> 0x20);
          if ((uVar6 >> 0x17 & 1) != 0) {
            return;
          }
          if (((ulonglong)pFVar7 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (
                      L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          bVar5 = lVar11 == (pFVar7->field0_0x0).FlagsAndRefCount;
          if (bVar5) {
            (pFVar7->field0_0x0).FlagsAndRefCount =
                 (longlong)(int)uVar6 << 0x20 | (longlong)(int)lVar11 | 0x80000000000000;
          }
          EVar3 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
          UNLOCK();
        } while (!bVar5);
        lVar11 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
        if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
            (EInternalObjectFlags)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20)) !=
            Borrowed) {
          uVar9 = (pFVar8->field0_0x0).FlagsAndRefCount;
          do {
            LOCK();
            uVar10 = (pFVar8->field0_0x0).FlagsAndRefCount;
            bVar5 = uVar9 == uVar10;
            if (bVar5) {
              (pFVar8->field0_0x0).FlagsAndRefCount = uVar9 & ~(lVar11 << 0x20);
              uVar10 = uVar9;
            }
            UNLOCK();
            uVar9 = uVar10;
          } while (!bVar5);
          LOCK();
          (pFVar8->field0_0x0).FlagsAndRefCount =
               (pFVar8->field0_0x0).FlagsAndRefCount |
               (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
          UNLOCK();
          if ((EVar3 & (EInternalObjectFlags)(uVar10 >> 0x20)) != Borrowed) {
            local_res20.Queue = &local_res10->ObjectsToSerialize;
            MarkReferencedClustersAsReachable<12,UE::GC::TAddAdapter<12>_>
                      (~pFVar8->ClusterRootIndex,&local_res20);
          }
        }
      }
    }
    else {
      *param_3 = (UObject *)0x0;
    }
  }
  return;
}

// HandleTokenStreamObjectReference @ 142061590

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityProcessor<13>::HandleTokenStreamObjectReference
          (TDebugReachabilityProcessor<13> *this,FWorkerContext *param_1,UObject *param_2,
          UObject **param_3,FMemberId param_4,EOrigin param_5,bool param_6)

{
  FWorkBlockifier *this_00;
  UObjectBase *this_01;
  UObject *pUVar1;
  code *pcVar2;
  EInternalObjectFlags EVar3;
  FMemberId FVar4;
  bool bVar5;
  uint uVar6;
  FUObjectItem *pFVar7;
  FUObjectItem *pFVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  FReferenceToken local_res8;
  FWorkerContext *local_res10;
  TAddAdapter<13> local_res18;
  TAddAdapter<13> local_res20;
  FString local_68;
  FString local_58;
  
  FVar4 = param_4;
  this_01 = (UObjectBase *)*param_3;
  local_res8.EncodedBits = (ulonglong)param_2 | 1;
  if (this_01 != (UObjectBase *)0x0 &&
      (this->PermanentPool).Size <= (longlong)this_01 - (this->PermanentPool).Address) {
    local_res10 = param_1;
    bVar5 = UObjectBase::IsValidLowLevelFast(this_01,true);
    if (!bVar5) {
      FReferenceToken::GetMemberName(&local_res8,&local_58,&param_4);
      FReferenceToken::GetDescription(&local_res8,&local_68);
      Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)&PTR_u_Invalid_object__150832e38,
                 (FLogCategoryBase *)&LogGarbage);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      param_1 = local_res10;
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
        param_1 = local_res10;
      }
    }
    pFVar7 = FChunkedFixedUObjectArray::GetObjectPtr
                       (&GUObjectArray.ObjObjects,*(int *)&(*param_3)->field_0xc);
    if ((pFVar7 == (FUObjectItem *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ItemPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x381,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    EVar3 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    uVar6 = (uint)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x20);
    if (((param_6 & (byte)((ulonglong)((pFVar7->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x15)) == 0
        ) || (!param_6)) {
      lVar11 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      pUVar1 = *param_3;
      if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
          (EInternalObjectFlags)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x20)) !=
          Borrowed) {
        uVar9 = (pFVar7->field0_0x0).FlagsAndRefCount;
        do {
          LOCK();
          uVar10 = (pFVar7->field0_0x0).FlagsAndRefCount;
          bVar5 = uVar9 == uVar10;
          if (bVar5) {
            (pFVar7->field0_0x0).FlagsAndRefCount = uVar9 & ~(lVar11 << 0x20);
            uVar10 = uVar9;
          }
          UNLOCK();
          uVar9 = uVar10;
        } while (!bVar5);
        LOCK();
        (pFVar7->field0_0x0).FlagsAndRefCount =
             (pFVar7->field0_0x0).FlagsAndRefCount |
             (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
        UNLOCK();
        if ((EVar3 & (EInternalObjectFlags)(uVar10 >> 0x20)) != Borrowed) {
          this_00 = &param_1->ObjectsToSerialize;
          if ((uVar6 >> 0x18 & 1) == 0) {
            *this_00->WipIt = pUVar1;
            this_00->WipIt = this_00->WipIt + 1;
            if (this_00->WipIt == ((param_1->ObjectsToSerialize).Wip)->Objects + 0x1ef) {
              FWorkBlockifier::PushFullBlockAsync(this_00);
            }
          }
          else {
            local_res18.Queue = this_00;
            MarkReferencedClustersAsReachable<13,UE::GC::TAddAdapter<13>_>
                      (~pFVar7->ClusterRootIndex,&local_res18);
          }
          if (this->bTrackHistory == false) {
            return;
          }
          HandleHistoryReference(param_1,param_2,param_3,FVar4);
          return;
        }
      }
      if ((~(byte)(uVar6 >> 0x17) & 0 < pFVar7->ClusterRootIndex) != 0) {
        pFVar8 = FChunkedFixedUObjectArray::GetObjectPtr
                           (&GUObjectArray.ObjObjects,pFVar7->ClusterRootIndex);
        if ((pFVar8 == (FUObjectItem *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ItemPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                               ,0x381,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        do {
          lVar11 = (pFVar7->field0_0x0).FlagsAndRefCount;
          uVar6 = (uint)((ulonglong)lVar11 >> 0x20);
          if ((uVar6 >> 0x17 & 1) != 0) {
            return;
          }
          if (((ulonglong)pFVar7 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (
                      L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          bVar5 = lVar11 == (pFVar7->field0_0x0).FlagsAndRefCount;
          if (bVar5) {
            (pFVar7->field0_0x0).FlagsAndRefCount =
                 (longlong)(int)uVar6 << 0x20 | (longlong)(int)lVar11 | 0x80000000000000;
          }
          EVar3 = GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
          UNLOCK();
        } while (!bVar5);
        lVar11 = (longlong)(int)GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
        if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
            (EInternalObjectFlags)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20)) !=
            Borrowed) {
          uVar9 = (pFVar8->field0_0x0).FlagsAndRefCount;
          do {
            LOCK();
            uVar10 = (pFVar8->field0_0x0).FlagsAndRefCount;
            bVar5 = uVar9 == uVar10;
            if (bVar5) {
              (pFVar8->field0_0x0).FlagsAndRefCount = uVar9 & ~(lVar11 << 0x20);
              uVar10 = uVar9;
            }
            UNLOCK();
            uVar9 = uVar10;
          } while (!bVar5);
          LOCK();
          (pFVar8->field0_0x0).FlagsAndRefCount =
               (pFVar8->field0_0x0).FlagsAndRefCount |
               (longlong)(int)GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
          UNLOCK();
          if ((EVar3 & (EInternalObjectFlags)(uVar10 >> 0x20)) != Borrowed) {
            local_res20.Queue = &local_res10->ObjectsToSerialize;
            MarkReferencedClustersAsReachable<13,UE::GC::TAddAdapter<13>_>
                      (~pFVar8->ClusterRootIndex,&local_res20);
          }
        }
      }
    }
    else {
      *param_3 = (UObject *)0x0;
    }
  }
  return;
}

