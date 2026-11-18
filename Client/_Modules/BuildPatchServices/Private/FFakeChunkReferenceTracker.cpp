// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 10

// CopyOutOrderedUseList @ 1432c7f00

void __thiscall
BuildPatchServices::FFakeChunkReferenceTracker::CopyOutOrderedUseList
          (FFakeChunkReferenceTracker *this,TArray<FGuid,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FGuid,TSizedDefaultAllocator<32>_>::operator=(param_1,&this->NextReferences);
  return;
}

// GetCurrentUsageIndex @ 1432d49a0

int __thiscall
BuildPatchServices::FFakeChunkReferenceTracker::GetCurrentUsageIndex
          (FFakeChunkReferenceTracker *this)

{
  return this->PoppedCount;
}

// GetNextReferences @ 1432d7930

TArray<FGuid,TSizedDefaultAllocator<32>_> * __thiscall
BuildPatchServices::FFakeChunkReferenceTracker::GetNextReferences
          (FFakeChunkReferenceTracker *this,
          TArray<FGuid,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,int param_1,
          TFunction<bool___cdecl(FGuid_const_&)> *param_2)

{
  code *pcVar1;
  FScriptContainerElement *pFVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong *plVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar9 = (this->NextReferences).AllocatorInstance.Data;
  pFVar10 = pFVar9 + (longlong)(this->NextReferences).ArrayNum * 0x10;
  do {
    if (pFVar9 == pFVar10) {
      return __return_storage_ptr__;
    }
    if (0 < param_1) {
      UE::Core::Private::Function::CheckCallable(*(void **)param_2);
      pcVar1 = *(code **)param_2;
      plVar8 = *(longlong **)&param_2->field_0x28;
      if (*(longlong **)&param_2->field_0x28 == (longlong *)0x0) {
        plVar8 = (longlong *)&param_2->field_0x10;
      }
      uVar6 = (**(code **)(*plVar8 + 8))();
      cVar3 = (*pcVar1)(uVar6,pFVar9);
      if (cVar3 != '\0') {
        pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
        param_1 = param_1 + -1;
        if (((pFVar2 <= pFVar9) &&
            (pFVar9 < pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar1 = (code *)swi(3);
          pTVar7 = (TArray<FGuid,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
          return pTVar7;
        }
        iVar5 = __return_storage_ptr__->ArrayNum;
        if (iVar5 == __return_storage_ptr__->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x410,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar5 + 1;
        uVar6 = *(undefined8 *)(pFVar9 + 8);
        pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
        *(undefined8 *)pFVar2 = *(undefined8 *)pFVar9;
        *(undefined8 *)(pFVar2 + 8) = uVar6;
      }
    }
    pFVar9 = pFVar9 + 0x10;
  } while( true );
}

// GetNextUsageForChunk @ 1432d8370

int __thiscall
BuildPatchServices::FFakeChunkReferenceTracker::GetNextUsageForChunk
          (FFakeChunkReferenceTracker *this,FGuid *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  if (0 < (this->NextReferences).ArrayNum) {
    lVar7 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar6 < (this->NextReferences).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      pFVar5 = (this->NextReferences).AllocatorInstance.Data + lVar7;
      if (((*(uint *)(pFVar5 + 8) == param_1->C && *(uint *)(pFVar5 + 4) == param_1->B) &&
          *(uint *)(pFVar5 + 0xc) == param_1->D) && param_1->A == *(uint *)pFVar5) {
        return this->PoppedCount + uVar6;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x10;
    } while ((int)uVar6 < (this->NextReferences).ArrayNum);
  }
  return -1;
}

// GetReferenceCount @ 1432d8c90

int __thiscall
BuildPatchServices::FFakeChunkReferenceTracker::GetReferenceCount
          (FFakeChunkReferenceTracker *this,FGuid *param_1)

{
  int iVar1;
  ulong64 uVar2;
  longlong lVar3;
  
  uVar2 = CityHash64((char *)param_1,0x10);
  iVar1 = TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,0>,FDefaultSetAllocator>::
          FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,0>,FDefaultSetAllocator>
                      *)&this->ReferenceCounts,(uint)uVar2,param_1);
  if ((iVar1 != -1) &&
     (lVar3 = (longlong)iVar1 * 0x1c + *(longlong *)&(this->ReferenceCounts).field_0x0, lVar3 != 0))
  {
    return *(int *)(lVar3 + 0x10);
  }
  return 0;
}

// GetReferencedChunks @ 1432d91f0

TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> * __thiscall
BuildPatchServices::FFakeChunkReferenceTracker::GetReferencedChunks
          (FFakeChunkReferenceTracker *this,
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *__return_storage_ptr__)

{
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::operator=
            (__return_storage_ptr__,&this->ReferencedChunks);
  return __return_storage_ptr__;
}

// GetRemainingChunkCount @ 1432d9250

int __thiscall
BuildPatchServices::FFakeChunkReferenceTracker::GetRemainingChunkCount
          (FFakeChunkReferenceTracker *this)

{
  return (this->NextReferences).ArrayNum;
}

// PopReference @ 1432e15a0

bool __thiscall
BuildPatchServices::FFakeChunkReferenceTracker::PopReference
          (FFakeChunkReferenceTracker *this,FGuid *param_1)

{
  int *piVar1;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  
  iVar7 = (this->NextReferences).ArrayNum;
  if (iVar7 != 0) {
    if (iVar7 < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    pTVar2 = &this->NextReferences;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (((*(uint *)(pFVar3 + 0xc) == param_1->D && *(uint *)(pFVar3 + 8) == param_1->C) &&
        *(uint *)(pFVar3 + 4) == param_1->B) && param_1->A == *(uint *)pFVar3) {
      this->PoppedCount = this->PoppedCount + 1;
      if ((this->NextReferences).ArrayNum < 1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      iVar7 = (this->NextReferences).ArrayNum + -1;
      if (iVar7 != 0) {
        memmove(pFVar3,pFVar3 + 0x10,(longlong)iVar7 << 4);
      }
      piVar1 = &(this->NextReferences).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,&pTVar2->AllocatorInstance,(this->NextReferences).ArrayNum,
                 &(this->NextReferences).ArrayMax);
      return true;
    }
  }
  return false;
}

// SelectFromNextReferences @ 1432ec5b0

TArray<FGuid,TSizedDefaultAllocator<32>_> * __thiscall
BuildPatchServices::FFakeChunkReferenceTracker::SelectFromNextReferences
          (FFakeChunkReferenceTracker *this,
          TArray<FGuid,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,int param_1,
          TFunction<bool___cdecl(FGuid_const_&)> *param_2)

{
  code *pcVar1;
  FScriptContainerElement *pFVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong *plVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar9 = (this->NextReferences).AllocatorInstance.Data;
  pFVar10 = pFVar9 + (longlong)(this->NextReferences).ArrayNum * 0x10;
  do {
    if (pFVar9 == pFVar10) {
      return __return_storage_ptr__;
    }
    if (0 < param_1) {
      UE::Core::Private::Function::CheckCallable(*(void **)param_2);
      pcVar1 = *(code **)param_2;
      plVar8 = *(longlong **)&param_2->field_0x28;
      if (*(longlong **)&param_2->field_0x28 == (longlong *)0x0) {
        plVar8 = (longlong *)&param_2->field_0x10;
      }
      uVar6 = (**(code **)(*plVar8 + 8))();
      cVar3 = (*pcVar1)(uVar6,pFVar9);
      if (cVar3 != '\0') {
        pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (((pFVar2 <= pFVar9) &&
            (pFVar9 < pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar1 = (code *)swi(3);
          pTVar7 = (TArray<FGuid,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
          return pTVar7;
        }
        iVar5 = __return_storage_ptr__->ArrayNum;
        if (iVar5 == __return_storage_ptr__->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x410,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar5 + 1;
        uVar6 = *(undefined8 *)(pFVar9 + 8);
        pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
        *(undefined8 *)pFVar2 = *(undefined8 *)pFVar9;
        *(undefined8 *)(pFVar2 + 8) = uVar6;
      }
    }
    param_1 = param_1 + -1;
    pFVar9 = pFVar9 + 0x10;
  } while( true );
}

// SortByUseOrder @ 1432ee5b0

void __thiscall
BuildPatchServices::FFakeChunkReferenceTracker::SortByUseOrder
          (FFakeChunkReferenceTracker *this,TArray<FGuid,TSizedDefaultAllocator<32>_> *param_1,
          ESortDirection param_2)

{
  TGreater<int> local_res18;
  
  if (param_2 == Ascending) {
    AlgoImpl::
    IntroSortInternal<FGuid,int,_BuildPatchServices::FFakeChunkReferenceTracker::SortByUseOrder_::__l4::<lambda_1>,TLess<int>_>
              ((FGuid *)(param_1->AllocatorInstance).Data,param_1->ArrayNum,(<lambda_1>)this,
               (TLess<int>)local_res18);
    return;
  }
  if (param_2 == Descending) {
    AlgoImpl::
    IntroSortInternal<FGuid,int,_BuildPatchServices::FFakeChunkReferenceTracker::SortByUseOrder_::__l4::<lambda_2>,TGreater<int>_>
              ((FGuid *)(param_1->AllocatorInstance).Data,param_1->ArrayNum,(<lambda_2>)this,
               local_res18);
    return;
  }
  return;
}

