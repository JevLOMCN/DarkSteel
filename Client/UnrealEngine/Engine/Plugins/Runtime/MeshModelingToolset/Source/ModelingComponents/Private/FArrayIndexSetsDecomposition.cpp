// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 4

// operator= @ 14ca6bcf0

FArrayIndexSetsDecomposition * __thiscall
UE::Geometry::FArrayIndexSetsDecomposition::operator=
          (FArrayIndexSetsDecomposition *this,FArrayIndexSetsDecomposition *param_1)

{
  TMap<int,UE::Geometry::FArrayIndexSetsDecomposition::FIndexSet_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FArrayIndexSetsDecomposition::FIndexSet_*,0>_>
  *pTVar1;
  TMap<int,UE::Geometry::FArrayIndexSetsDecomposition::FIndexSet_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FArrayIndexSetsDecomposition::FIndexSet_*,0>_>
  *pTVar2;
  undefined1 *_Src;
  undefined1 *_Dst;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  void *pvVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  
  if (param_1 != this) {
    TIndirectArray<UE::Geometry::FArrayIndexSetsDecomposition::FIndexSet,TSizedDefaultAllocator<32>_>
    ::Empty(&this->Sets,0);
    pFVar4 = (this->Sets).Array.AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (this->Sets).Array.AllocatorInstance.Data = (param_1->Sets).Array.AllocatorInstance.Data;
    (param_1->Sets).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Sets).Array.ArrayNum = (param_1->Sets).Array.ArrayNum;
    (this->Sets).Array.ArrayMax = (param_1->Sets).Array.ArrayMax;
    (param_1->Sets).Array.ArrayNum = 0;
    (param_1->Sets).Array.ArrayMax = 0;
  }
  pTVar1 = &param_1->SetIdentifierMap;
  pTVar2 = &this->SetIdentifierMap;
  if (pTVar2 != pTVar1) {
    if (*(void **)pTVar2 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar2);
    }
    _Src = &(param_1->SetIdentifierMap).field_0x10;
    *(undefined8 *)pTVar2 = *(undefined8 *)pTVar1;
    _Dst = &(this->SetIdentifierMap).field_0x10;
    *(undefined8 *)pTVar1 = 0;
    *(undefined4 *)&(this->SetIdentifierMap).field_0x8 =
         *(undefined4 *)&(param_1->SetIdentifierMap).field_0x8;
    *(undefined4 *)&(this->SetIdentifierMap).field_0xc =
         *(undefined4 *)&(param_1->SetIdentifierMap).field_0xc;
    *(undefined8 *)&(param_1->SetIdentifierMap).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->SetIdentifierMap).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar5 = *(void **)&(this->SetIdentifierMap).field_0x20;
      if (pvVar5 != (void *)0x0) {
        FMemory::Free(pvVar5);
      }
      *(undefined8 *)&(this->SetIdentifierMap).field_0x20 =
           *(undefined8 *)&(param_1->SetIdentifierMap).field_0x20;
      *(undefined8 *)&(param_1->SetIdentifierMap).field_0x20 = 0;
      *(undefined4 *)&(this->SetIdentifierMap).field_0x28 =
           *(undefined4 *)&(param_1->SetIdentifierMap).field_0x28;
      *(undefined4 *)&(this->SetIdentifierMap).field_0x2c =
           *(undefined4 *)&(param_1->SetIdentifierMap).field_0x2c;
      *(undefined8 *)&(param_1->SetIdentifierMap).field_0x28 = 0;
    }
    *(undefined4 *)&(this->SetIdentifierMap).field_0x30 =
         *(undefined4 *)&(param_1->SetIdentifierMap).field_0x30;
    *(undefined4 *)&(this->SetIdentifierMap).field_0x34 =
         *(undefined4 *)&(param_1->SetIdentifierMap).field_0x34;
    *(undefined4 *)&(param_1->SetIdentifierMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->SetIdentifierMap).field_0x34 = 0;
    if (*(longlong *)&(param_1->SetIdentifierMap).field_0x40 == 0) {
      *(undefined4 *)&(this->SetIdentifierMap).field_0x38 =
           *(undefined4 *)&(param_1->SetIdentifierMap).field_0x38;
    }
    pvVar5 = *(void **)&(this->SetIdentifierMap).field_0x40;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
    }
    *(undefined8 *)&(this->SetIdentifierMap).field_0x40 =
         *(undefined8 *)&(param_1->SetIdentifierMap).field_0x40;
    *(undefined8 *)&(param_1->SetIdentifierMap).field_0x40 = 0;
    *(undefined4 *)&(this->SetIdentifierMap).field_0x48 =
         *(undefined4 *)&(param_1->SetIdentifierMap).field_0x48;
    *(undefined4 *)&(param_1->SetIdentifierMap).field_0x48 = 0;
  }
  pTVar3 = &this->AllSetIDs;
  pTVar6 = &param_1->AllSetIDs;
  this->IDCounter = param_1->IDCounter;
  if (pTVar3 != pTVar6) {
    pFVar4 = (pTVar3->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar3->AllocatorInstance).Data = (pTVar6->AllocatorInstance).Data;
    (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->AllSetIDs).ArrayNum = (param_1->AllSetIDs).ArrayNum;
    (this->AllSetIDs).ArrayMax = (param_1->AllSetIDs).ArrayMax;
    (param_1->AllSetIDs).ArrayNum = 0;
    (param_1->AllSetIDs).ArrayMax = 0;
  }
  return this;
}

// CreateNewIndexSet @ 14ca85290

int __thiscall
UE::Geometry::FArrayIndexSetsDecomposition::CreateNewIndexSet(FArrayIndexSetsDecomposition *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FIndexSet **ppFVar4;
  bool bVar5;
  int iVar6;
  TPairInitializer<int_const_&,UE::Geometry::FArrayIndexSetsDecomposition::FIndexSet_*_const_&>
  local_res8;
  FScriptContainerElement *local_28;
  FScriptContainerElement *local_20;
  FIndexSet ***local_18;
  
  local_res8.Value = ::operator_new(0x18);
  if ((FScriptContainerElement *)local_res8.Value != (FScriptContainerElement *)0x0) {
    *local_res8.Value = (FIndexSet *)0x0;
    *(undefined8 *)((longlong)local_res8.Value + 8) = 0;
    *(undefined8 *)((longlong)local_res8.Value + 0x10) = 0;
  }
  iVar6 = this->IDCounter;
  this->IDCounter = iVar6 + 1;
  *(int *)local_res8.Value = iVar6;
  pFVar2 = (this->Sets).Array.AllocatorInstance.Data;
  local_28 = (FScriptContainerElement *)local_res8.Value;
  if (((pFVar2 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar2 + (longlong)(this->Sets).Array.ArrayMax * 8))
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  iVar6 = (this->Sets).Array.ArrayNum;
  piVar1 = &(this->Sets).Array.ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,piVar1);
  }
  (this->Sets).Array.ArrayNum = iVar6 + 1;
  *(FScriptContainerElement **)((this->Sets).Array.AllocatorInstance.Data + (longlong)iVar6 * 8) =
       local_28;
  local_20 = (FScriptContainerElement *)local_res8.Value;
  local_18 = &local_res8.Value;
  TSet<TTuple<int,UE::Geometry::FArrayIndexSetsDecomposition::FIndexSet_*>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FArrayIndexSetsDecomposition::FIndexSet_*,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<int_const_&,UE::Geometry::FArrayIndexSetsDecomposition::FIndexSet_*_const_&>_>
            ((TSet<TTuple<int,UE::Geometry::FArrayIndexSetsDecomposition::FIndexSet_*>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FArrayIndexSetsDecomposition::FIndexSet_*,0>,FDefaultSetAllocator>
              *)&this->SetIdentifierMap,&local_res8,(bool *)&local_20);
  ppFVar4 = local_res8.Value;
  pFVar2 = (this->AllSetIDs).AllocatorInstance.Data;
  if (((pFVar2 <= local_res8.Value) &&
      (local_res8.Value < pFVar2 + (longlong)(this->AllSetIDs).ArrayMax * 4)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  iVar6 = (this->AllSetIDs).ArrayNum;
  piVar1 = &(this->AllSetIDs).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->AllSetIDs).AllocatorInstance,piVar1);
  }
  (this->AllSetIDs).ArrayNum = iVar6 + 1;
  *(int *)((this->AllSetIDs).AllocatorInstance.Data + (longlong)iVar6 * 4) = *(int *)ppFVar4;
  return *(int *)local_res8.Value;
}

// GetIndexSetArray @ 14ca8fef0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::FArrayIndexSetsDecomposition::GetIndexSetArray
          (FArrayIndexSetsDecomposition *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  
  if (*(int *)&(this->SetIdentifierMap).field_0x8 != *(int *)&(this->SetIdentifierMap).field_0x34) {
    puVar7 = *(undefined1 **)&(this->SetIdentifierMap).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->SetIdentifierMap).field_0x38;
    }
    iVar4 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->SetIdentifierMap).field_0x48 - 1U & param_1) * 4);
    if (iVar4 != -1) {
      do {
        lVar1 = *(longlong *)&this->SetIdentifierMap + (longlong)iVar4 * 0x18;
        if (*(int *)(*(longlong *)&this->SetIdentifierMap + (longlong)iVar4 * 0x18) == param_1) {
          plVar6 = (longlong *)(lVar1 + 8);
          if (lVar1 == 0) {
            plVar6 = (longlong *)0x0;
          }
          if (plVar6 == (longlong *)0x0) goto LAB_14ca8ff4c;
          goto LAB_14ca8ff72;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  plVar6 = (longlong *)0x0;
LAB_14ca8ff4c:
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Found != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\IndexSetDecompositions.h"
                     ,0x43,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
    return pTVar5;
  }
LAB_14ca8ff72:
  return (TArray<int,TSizedDefaultAllocator<32>_> *)(*plVar6 + 8);
}

// GetIndexSetArray @ 14ca8ffa0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::FArrayIndexSetsDecomposition::GetIndexSetArray
          (FArrayIndexSetsDecomposition *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  
  if (*(int *)&(this->SetIdentifierMap).field_0x8 != *(int *)&(this->SetIdentifierMap).field_0x34) {
    puVar7 = *(undefined1 **)&(this->SetIdentifierMap).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->SetIdentifierMap).field_0x38;
    }
    iVar4 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->SetIdentifierMap).field_0x48 - 1U & param_1) * 4);
    if (iVar4 != -1) {
      do {
        lVar1 = *(longlong *)&this->SetIdentifierMap + (longlong)iVar4 * 0x18;
        if (*(int *)(*(longlong *)&this->SetIdentifierMap + (longlong)iVar4 * 0x18) == param_1) {
          plVar6 = (longlong *)(lVar1 + 8);
          if (lVar1 == 0) {
            plVar6 = (longlong *)0x0;
          }
          if (plVar6 == (longlong *)0x0) goto LAB_14ca8fffc;
          goto LAB_14ca90022;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  plVar6 = (longlong *)0x0;
LAB_14ca8fffc:
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Found != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\IndexSetDecompositions.h"
                     ,0x4d,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
    return pTVar5;
  }
LAB_14ca90022:
  return (TArray<int,TSizedDefaultAllocator<32>_> *)(*plVar6 + 8);
}

