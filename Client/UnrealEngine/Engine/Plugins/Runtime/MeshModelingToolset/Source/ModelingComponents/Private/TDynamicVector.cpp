// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 5

// TDynamicVector<UE::Math::TVector<double>,512> @ 14ca62200

TDynamicVector<UE::Math::TVector<double>,512> * __thiscall
UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::
TDynamicVector<UE::Math::TVector<double>,512>(TDynamicVector<UE::Math::TVector<double>,512> *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TDynamicVector<UE::Math::TVector<double>,512> *pTVar5;
  void *local_18 [2];
  
  this->CurBlock = 0;
  this->CurBlockUsed = 0;
  (this->Blocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Blocks).ArrayNum = 0;
  (this->Blocks).ArrayMax = 0;
  local_18[0] = ::operator_new(0x3000);
  pFVar1 = (this->Blocks).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)(this->Blocks).ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TDynamicVector<UE::Math::TVector<double>,512> *)(*pcVar2)();
      return pTVar5;
    }
  }
  iVar4 = (this->Blocks).ArrayNum;
  if (iVar4 == (this->Blocks).ArrayMax) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
  }
  (this->Blocks).ArrayNum = iVar4 + 1;
  *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_18[0];
  return this;
}

// ~TDynamicVector<UE::Geometry::FSegmentTree3::FTreeBox,512> @ 14cb63aa0

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FSegmentTree3::FTreeBox,512>::
~TDynamicVector<UE::Geometry::FSegmentTree3::FTreeBox,512>
          (TDynamicVector<UE::Geometry::FSegmentTree3::FTreeBox,512> *this)

{
  TArray<UE::Geometry::TDynamicVector<UE::Geometry::FSegmentTree3::FTreeBox,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  
  pTVar1 = &this->Blocks;
  lVar6 = (longlong)(this->Blocks).ArrayNum;
  uVar8 = 0;
  if (0 < lVar6) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (this->Blocks).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ::operator_delete(*(void **)((pTVar1->AllocatorInstance).Data + lVar7 * 8),0x7000);
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar6);
  }
  (this->Blocks).ArrayNum = 0;
  if ((this->Blocks).ArrayMax != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar1->AllocatorInstance,0,&(this->Blocks).ArrayMax);
  }
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar2);
  return;
}

// AddAllocatedBlock @ 14cb73090

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FSegmentTree3::FTreeBox,512>::AddAllocatedBlock
          (TDynamicVector<UE::Geometry::FSegmentTree3::FTreeBox,512> *this)

{
  TArray<UE::Geometry::TDynamicVector<UE::Geometry::FSegmentTree3::FTreeBox,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  void *local_18 [2];
  
  pTVar1 = &this->Blocks;
  local_18[0] = ::operator_new(0x7000);
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Blocks).ArrayMax * 8)) {
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
  iVar6 = (this->Blocks).ArrayNum;
  piVar2 = &(this->Blocks).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Blocks).ArrayNum = iVar6 + 1;
  *(void **)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  return;
}

// Resize @ 14cbad1b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FSegmentTree3::FTreeBox,512>::Resize
          (TDynamicVector<UE::Geometry::FSegmentTree3::FTreeBox,512> *this,uint param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  void *local_28 [2];
  
  if (this->CurBlock * 0x200 + this->CurBlockUsed != param_1) {
    iVar6 = ((int)(((int)param_1 >> 0x1f & 0x1ffU) + param_1) >> 9) + (uint)((param_1 & 0x1ff) != 0)
    ;
    if (iVar6 < 1) {
      iVar6 = 1;
    }
    iVar1 = (this->Blocks).ArrayNum;
    if (iVar1 < iVar6) {
      uVar7 = (ulonglong)(uint)(iVar6 - iVar1);
      do {
        local_28[0] = ::operator_new(0x7000);
        pFVar2 = (this->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8))
           && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = (this->Blocks).ArrayNum;
        if (iVar6 == (this->Blocks).ArrayMax) {
          iVar6 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
        }
        (this->Blocks).ArrayNum = iVar6 + 1;
        *(void **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_28[0];
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    else if (iVar6 < iVar1) {
      TruncateBlocks(this,iVar6,No);
    }
    uVar5 = param_1 - 1 >> 9;
    if (param_1 == 0) {
      uVar5 = 0;
    }
    this->CurBlock = uVar5;
    uVar5 = 0;
    if (param_1 != 0) {
      uVar5 = (param_1 - 1 & 0x1ff) + 1;
    }
    this->CurBlockUsed = uVar5;
  }
  return;
}

// TruncateBlocks @ 14cbb6060

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FSegmentTree3::FTreeBox,512>::TruncateBlocks
          (TDynamicVector<UE::Geometry::FSegmentTree3::FTreeBox,512> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  uint uVar5;
  longlong lVar6;
  
  iVar4 = (this->Blocks).ArrayNum;
  if (0 < iVar4 - param_1) {
    lVar6 = (longlong)param_1 * 8;
    uVar5 = param_1;
    if (param_1 < iVar4) {
      do {
        uVar3 = 0;
        if ((int)uVar5 < (this->Blocks).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        ::operator_delete(*(void **)((this->Blocks).AllocatorInstance.Data + lVar6),0x7000);
        uVar3 = 0;
        if ((int)uVar5 < (this->Blocks).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar5 = uVar5 + 1;
        *(undefined8 *)((this->Blocks).AllocatorInstance.Data + lVar6) = 0;
        iVar4 = (this->Blocks).ArrayNum;
        lVar6 = lVar6 + 8;
      } while ((int)uVar5 < iVar4);
    }
    uVar5 = iVar4 - param_1;
    if (((int)(uVar5 | param_1) < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (uVar5 != 0) {
      _Dst = (this->Blocks).AllocatorInstance.Data + (longlong)param_1 * 8;
      iVar4 = ((this->Blocks).ArrayNum - uVar5) - param_1;
      if (iVar4 != 0) {
        memmove(_Dst,_Dst + (longlong)(int)uVar5 * 8,(longlong)iVar4 << 3);
      }
      iVar4 = (this->Blocks).ArrayNum - uVar5;
      (this->Blocks).ArrayNum = iVar4;
      if (param_2 == Default) {
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->Blocks).AllocatorInstance,iVar4,&(this->Blocks).ArrayMax);
      }
    }
  }
  return;
}

