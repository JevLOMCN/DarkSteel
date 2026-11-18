// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 6

// ~TArrayCollection @ 14373f240

void __thiscall Chaos::TArrayCollection::~TArrayCollection(TArrayCollection *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar6 = 0;
  this->_padding_ = (longlong)&___7TArrayCollection_Chaos__6B_;
  uVar7 = uVar6;
  if (0 < (this->MArrays).ArrayNum) {
    do {
      uVar5 = (uint)uVar6;
      uVar4 = 0;
      if ((int)uVar5 < (this->MArrays).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar6 = (ulonglong)(uVar5 + 1);
      *(undefined8 *)((this->MArrays).AllocatorInstance.Data + uVar7) = 0;
      uVar7 = uVar7 + 8;
    } while ((int)(uVar5 + 1) < (this->MArrays).ArrayNum);
  }
  pFVar1 = (this->MArrays).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar1);
  return;
}

// AddArray @ 1437503c0

int __thiscall
Chaos::TArrayCollection::AddArray(TArrayCollection *this,TArrayCollectionArrayBase *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  TArrayCollectionArrayBase *local_res10;
  
  pFVar2 = (this->MArrays).AllocatorInstance.Data;
  uVar10 = (this->MArrays).ArrayNum;
  pFVar9 = pFVar2;
  do {
    local_res10 = param_1;
    if (pFVar9 == pFVar2 + (longlong)(int)uVar10 * 8) {
LAB_143750402:
      if (((pFVar2 <= (FScriptContainerElement *)&local_res10) &&
          ((FScriptContainerElement *)&local_res10 < pFVar2 + (longlong)(this->MArrays).ArrayMax * 8
          )) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
      iVar6 = (this->MArrays).ArrayNum;
      piVar1 = &(this->MArrays).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->MArrays).AllocatorInstance,piVar1);
      }
      (this->MArrays).ArrayNum = iVar6 + 1;
      *(TArrayCollectionArrayBase **)((this->MArrays).AllocatorInstance.Data + (longlong)iVar6 * 8)
           = local_res10;
      uVar8 = uVar10;
LAB_14375049b:
      uVar10 = 0;
      if ((int)uVar8 < (this->MArrays).ArrayNum) {
        uVar10 = ~uVar8 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
      plVar3 = *(longlong **)((this->MArrays).AllocatorInstance.Data + (longlong)(int)uVar8 * 8);
      (**(code **)(*plVar3 + 8))(plVar3,this->MSize);
      return uVar8;
    }
    if (*(longlong *)pFVar9 == 0) {
      uVar8 = (uint)((longlong)pFVar9 - (longlong)pFVar2 >> 3);
      if (uVar8 != 0xffffffff) {
        uVar7 = 0;
        if ((int)uVar8 < (int)uVar10) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        *(TArrayCollectionArrayBase **)
         ((this->MArrays).AllocatorInstance.Data + (longlong)(int)uVar8 * 8) = param_1;
        goto LAB_14375049b;
      }
      goto LAB_143750402;
    }
    pFVar9 = pFVar9 + 8;
  } while( true );
}

// ResizeHelper @ 1437a7060

void __thiscall Chaos::TArrayCollection::ResizeHelper(TArrayCollection *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res10 [8];
  
  if (param_1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ArrayCollection.h"
                       ,0x5f,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this->MSize = param_1;
  pFVar6 = (this->MArrays).AllocatorInstance.Data;
  iVar2 = (this->MArrays).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->MArrays).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::TArrayCollectionArrayBase_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar6 == pFVar1) break;
    plVar3 = *(longlong **)pFVar6;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))(plVar3,param_1);
    }
    pFVar6 = pFVar6 + 8;
  }
  return;
}

// RemoveAtSwapHelper @ 143c11720

void __thiscall Chaos::TArrayCollection::RemoveAtSwapHelper(TArrayCollection *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res10 [8];
  
  if (this->MSize <= (uint)param_1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("static_cast<uint32>(Index) < MSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ArrayCollection.h"
                       ,0x79,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar6 = (this->MArrays).AllocatorInstance.Data;
  iVar2 = (this->MArrays).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->MArrays).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::TArrayCollectionArrayBase_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar6 == pFVar1) break;
    plVar3 = *(longlong **)pFVar6;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x18))(plVar3,param_1);
    }
    pFVar6 = pFVar6 + 8;
  }
  this->MSize = this->MSize - 1;
  return;
}

// RemoveArray @ 143d62240

void __thiscall
Chaos::TArrayCollection::RemoveArray(TArrayCollection *this,TArrayCollectionArrayBase *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  
  pFVar2 = (this->MArrays).AllocatorInstance.Data;
  iVar1 = (this->MArrays).ArrayNum;
  pFVar7 = pFVar2;
  if (pFVar2 != pFVar2 + (longlong)iVar1 * 8) {
    while (*(TArrayCollectionArrayBase **)pFVar7 != param_1) {
      pFVar7 = pFVar7 + 8;
      if (pFVar7 == pFVar2 + (longlong)iVar1 * 8) {
        return;
      }
    }
    uVar6 = (uint)((longlong)pFVar7 - (longlong)pFVar2 >> 3);
    if (uVar6 != 0xffffffff) {
      uVar5 = 0;
      if ((int)uVar6 < iVar1) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(undefined8 *)((this->MArrays).AllocatorInstance.Data + (longlong)(int)uVar6 * 8) = 0;
    }
  }
  return;
}

// ShrinkArrays @ 1440b5bc0

void __thiscall
Chaos::TArrayCollection::ShrinkArrays(TArrayCollection *this,float param_1,int param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->MArrays).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->MArrays).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(longlong *)((this->MArrays).AllocatorInstance.Data + lVar6) != 0) {
        uVar4 = 0;
        if ((int)uVar5 < (this->MArrays).ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        puVar1 = *(undefined8 **)((this->MArrays).AllocatorInstance.Data + lVar6);
        (**(code **)*puVar1)(puVar1,param_1,param_2);
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->MArrays).ArrayNum);
  }
  return;
}

