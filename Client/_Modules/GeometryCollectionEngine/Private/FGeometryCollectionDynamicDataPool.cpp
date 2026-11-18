// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 4

// FGeometryCollectionDynamicDataPool @ 1463a15b0

FGeometryCollectionDynamicDataPool * __thiscall
FGeometryCollectionDynamicDataPool::FGeometryCollectionDynamicDataPool
          (FGeometryCollectionDynamicDataPool *this)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  FGeometryCollectionDynamicDataPool *pFVar8;
  FScriptContainerElement *_Dst;
  int iVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  puVar13 = (undefined8 *)0x0;
  piVar1 = &(this->FreeList).ArrayNum;
  piVar2 = &(this->FreeList).ArrayMax;
  (this->UsedList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UsedList).ArrayNum = 0;
  (this->UsedList).ArrayMax = 0;
  (this->FreeList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ListLock,4000);
  iVar9 = *piVar1;
  if (iVar9 < 0x20) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,0x20 - iVar9,&(this->FreeList).AllocatorInstance,piVar1,piVar2);
    memset((this->FreeList).AllocatorInstance.Data + (longlong)iVar5 * 8,0,
           (longlong)(0x20 - iVar9) << 3);
  }
  else if (0x20 < iVar9) {
    iVar9 = iVar9 + -0x20;
    if (iVar9 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FGeometryCollectionDynamicDataPool *)(*pcVar3)();
        return pFVar8;
      }
    }
    else if (iVar9 == 0) goto LAB_1463a16da;
    _Dst = (this->FreeList).AllocatorInstance.Data + 0x100;
    iVar5 = (*piVar1 - iVar9) + -0x20;
    if (iVar5 != 0) {
      memmove(_Dst,_Dst + (longlong)iVar9 * 8,(longlong)iVar5 << 3);
    }
    *piVar1 = *piVar1 - iVar9;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&(this->FreeList).AllocatorInstance,*piVar1,piVar2);
  }
LAB_1463a16da:
  puVar12 = puVar13;
  puVar14 = puVar13;
  if (0 < (this->FreeList).ArrayNum) {
    do {
      puVar7 = ::operator_new(0x18);
      puVar10 = puVar13;
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[2] = GFrameCounter;
        puVar10 = puVar7;
      }
      uVar11 = (uint)puVar12;
      uVar6 = 0;
      if ((int)uVar11 < *piVar1) {
        uVar6 = ~uVar11 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FGeometryCollectionDynamicDataPool *)(*pcVar3)();
        return pFVar8;
      }
      *(undefined8 **)((longlong)puVar14 + (longlong)(this->FreeList).AllocatorInstance.Data) =
           puVar10;
      puVar12 = (undefined8 *)(ulonglong)(uVar11 + 1);
      puVar14 = puVar14 + 1;
    } while ((int)(uVar11 + 1) < (this->FreeList).ArrayNum);
  }
  return this;
}

// ~FGeometryCollectionDynamicDataPool @ 1463a52b0

void __thiscall
FGeometryCollectionDynamicDataPool::~FGeometryCollectionDynamicDataPool
          (FGeometryCollectionDynamicDataPool *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &this->ListLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar5 = (this->FreeList).AllocatorInstance.Data;
    iVar2 = (this->FreeList).ArrayNum;
    pFVar4 = pFVar5 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->FreeList).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FGeometryCollectionDynamicData_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar5 == pFVar4) break;
      puVar3 = *(undefined8 **)pFVar5;
      if (puVar3 != (undefined8 *)0x0) {
        if ((void *)*puVar3 != (void *)0x0) {
          FMemory::Free((void *)*puVar3);
        }
        ::operator_delete(puVar3,0x18);
      }
      pFVar5 = pFVar5 + 8;
    }
    pFVar5 = (this->UsedList).AllocatorInstance.Data;
    iVar2 = (this->UsedList).ArrayNum;
    pFVar4 = pFVar5 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->UsedList).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FGeometryCollectionDynamicData_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar5 == pFVar4) break;
      puVar3 = *(undefined8 **)pFVar5;
      if (puVar3 != (undefined8 *)0x0) {
        if ((void *)*puVar3 != (void *)0x0) {
          FMemory::Free((void *)*puVar3);
        }
        ::operator_delete(puVar3,0x18);
      }
      pFVar5 = pFVar5 + 8;
    }
    piVar1 = &(this->FreeList).ArrayMax;
    (this->FreeList).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->FreeList).AllocatorInstance,0,piVar1);
    }
    piVar1 = &(this->UsedList).ArrayMax;
    (this->UsedList).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)this,0,piVar1);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar4 = (this->FreeList).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    pFVar4 = (this->UsedList).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Allocate @ 1463aa130

FGeometryCollectionDynamicData * __thiscall
FGeometryCollectionDynamicDataPool::Allocate(FGeometryCollectionDynamicDataPool *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FGeometryCollectionDynamicData *pFVar6;
  FGeometryCollectionDynamicData *local_18 [2];
  
  lpCriticalSection = &this->ListLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_18[0] = (FGeometryCollectionDynamicData *)0x0;
  if (0 < (this->FreeList).ArrayNum) {
    iVar5 = (this->FreeList).ArrayNum;
    local_18[0] = *(FGeometryCollectionDynamicData **)
                   ((this->FreeList).AllocatorInstance.Data + (longlong)iVar5 * 8 + -8);
    (this->FreeList).ArrayNum = iVar5 + -1;
  }
  if ((local_18[0] == (FGeometryCollectionDynamicData *)0x0) &&
     (pFVar6 = ::operator_new(0x18), local_18[0] = (FGeometryCollectionDynamicData *)0x0,
     pFVar6 != (FGeometryCollectionDynamicData *)0x0)) {
    (pFVar6->Transforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->Transforms).ArrayNum = 0;
    (pFVar6->Transforms).ArrayMax = 0;
    pFVar6->FrameIndex = 0;
    pFVar6->FrameIndex = GFrameCounter;
    local_18[0] = pFVar6;
  }
  pFVar6 = local_18[0];
  (local_18[0]->Transforms).ArrayNum = 0;
  if ((local_18[0]->Transforms).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x10,0,(ForAnyElementType *)local_18[0],0,&(local_18[0]->Transforms).ArrayMax);
  }
  pFVar6->FrameIndex = GFrameCounter;
  pFVar2 = (this->UsedList).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->UsedList).ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FGeometryCollectionDynamicData *)(*pcVar3)();
    return pFVar6;
  }
  iVar5 = (this->UsedList).ArrayNum;
  piVar1 = &(this->UsedList).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,piVar1);
  }
  pFVar6 = local_18[0];
  (this->UsedList).ArrayNum = iVar5 + 1;
  *(FGeometryCollectionDynamicData **)
   ((this->UsedList).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return pFVar6;
}

// Release @ 1463c1fa0

void __thiscall
FGeometryCollectionDynamicDataPool::Release
          (FGeometryCollectionDynamicDataPool *this,FGeometryCollectionDynamicData *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  FGeometryCollectionDynamicData *local_res10;
  
  lpCriticalSection = &this->ListLock;
  local_res10 = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar2 = (this->UsedList).AllocatorInstance.Data;
  iVar6 = (this->UsedList).ArrayNum;
  pFVar8 = pFVar2;
  do {
    if (pFVar8 == pFVar2 + (longlong)iVar6 * 8) {
LAB_1463c1ff3:
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1469744848142596446>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionSceneProxy.cpp"
                         ,0x6a2,"UsedIndex != INDEX_NONE");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
LAB_1463c2020:
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return;
    }
    if (*(FGeometryCollectionDynamicData **)pFVar8 == local_res10) {
      uVar7 = (uint)((longlong)pFVar8 - (longlong)pFVar2 >> 3);
      if (uVar7 != 0xffffffff) {
        uVar5 = 0;
        if ((int)uVar7 < iVar6) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = (this->UsedList).ArrayNum + ~uVar7;
        pFVar2 = (this->UsedList).AllocatorInstance.Data + (longlong)(int)uVar7 * 8;
        if (iVar6 != 0) {
          memmove(pFVar2,pFVar2 + 8,(longlong)iVar6 << 3);
        }
        piVar1 = &(this->UsedList).ArrayNum;
        *piVar1 = *piVar1 + -1;
        pFVar2 = (this->FreeList).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_res10) &&
            ((FScriptContainerElement *)&local_res10 <
             pFVar2 + (longlong)(this->FreeList).ArrayMax * 8)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = (this->FreeList).ArrayNum;
        piVar1 = &(this->FreeList).ArrayMax;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->FreeList).AllocatorInstance,piVar1);
        }
        (this->FreeList).ArrayNum = iVar6 + 1;
        *(FGeometryCollectionDynamicData **)
         ((this->FreeList).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_res10;
        goto LAB_1463c2020;
      }
      goto LAB_1463c1ff3;
    }
    pFVar8 = pFVar8 + 8;
  } while( true );
}

