// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PlanarCut
// Functions: 6

// operator= @ 14c9a9420

TDynamicVector<bool,512> * __thiscall
UE::Geometry::TDynamicVector<bool,512>::operator=
          (TDynamicVector<bool,512> *this,TDynamicVector<bool,512> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  TDynamicVector<bool,512> *pTVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  undefined8 *local_38 [2];
  
  if (this == param_1) {
    return this;
  }
  iVar1 = (param_1->Blocks).ArrayNum;
  Empty(this,iVar1);
  uVar13 = 0;
  this->CurBlock = param_1->CurBlock;
  this->CurBlockUsed = param_1->CurBlockUsed;
  if (0 < iVar1) {
    lVar14 = 0;
    do {
      puVar8 = ::operator_new(0x200);
      if (puVar8 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)0x0;
      }
      else {
        uVar6 = 0;
        if ((int)uVar13 < (param_1->Blocks).ArrayNum) {
          uVar6 = ~uVar13 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TDynamicVector<bool,512> *)(*pcVar3)();
          return pTVar9;
        }
        lVar12 = 4;
        puVar10 = puVar8;
        puVar11 = *(undefined8 **)((param_1->Blocks).AllocatorInstance.Data + lVar14 * 8);
        do {
          uVar4 = puVar11[1];
          *puVar10 = *puVar11;
          puVar10[1] = uVar4;
          uVar4 = puVar11[3];
          puVar10[2] = puVar11[2];
          puVar10[3] = uVar4;
          uVar4 = puVar11[5];
          puVar10[4] = puVar11[4];
          puVar10[5] = uVar4;
          uVar4 = puVar11[7];
          puVar10[6] = puVar11[6];
          puVar10[7] = uVar4;
          uVar4 = puVar11[9];
          puVar10[8] = puVar11[8];
          puVar10[9] = uVar4;
          uVar4 = puVar11[0xb];
          puVar10[10] = puVar11[10];
          puVar10[0xb] = uVar4;
          uVar4 = puVar11[0xd];
          puVar10[0xc] = puVar11[0xc];
          puVar10[0xd] = uVar4;
          uVar4 = puVar11[0xf];
          puVar10[0xe] = puVar11[0xe];
          puVar10[0xf] = uVar4;
          lVar12 = lVar12 + -1;
          puVar10 = puVar10 + 0x10;
          puVar11 = puVar11 + 0x10;
        } while (lVar12 != 0);
      }
      pFVar2 = (this->Blocks).AllocatorInstance.Data;
      local_38[0] = puVar8;
      if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
          ((FScriptContainerElement *)local_38 < pFVar2 + (longlong)(this->Blocks).ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TDynamicVector<bool,512> *)(*pcVar3)();
        return pTVar9;
      }
      iVar7 = (this->Blocks).ArrayNum;
      if (iVar7 == (this->Blocks).ArrayMax) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->Blocks).AllocatorInstance,&(this->Blocks).ArrayMax);
      }
      uVar13 = uVar13 + 1;
      (this->Blocks).ArrayNum = iVar7 + 1;
      lVar14 = lVar14 + 1;
      *(undefined8 **)((this->Blocks).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_38[0];
    } while (lVar14 < iVar1);
  }
  return this;
}

// AddAllocatedBlock @ 14c9b0820

void __thiscall
UE::Geometry::TDynamicVector<bool,512>::AddAllocatedBlock(TDynamicVector<bool,512> *this)

{
  TArray<UE::Geometry::TDynamicVector<bool,512>::TBlock_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  void *local_18 [2];
  
  pTVar1 = &this->Blocks;
  local_18[0] = ::operator_new(0x200);
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

// Empty @ 14c9caa30

void __thiscall
UE::Geometry::TDynamicVector<bool,512>::Empty(TDynamicVector<bool,512> *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  lVar7 = (longlong)(this->Blocks).ArrayNum;
  if (0 < lVar7) {
    lVar5 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->Blocks).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
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
      ::operator_delete(*(void **)((this->Blocks).AllocatorInstance.Data + lVar5 * 8),0x200);
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 1;
    } while (lVar5 < lVar7);
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  piVar1 = &(this->Blocks).ArrayMax;
  (this->Blocks).ArrayNum = 0;
  if (*piVar1 != param_1) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,param_1,&(this->Blocks).AllocatorInstance,0,piVar1);
  }
  return;
}

// InsertAt @ 14c9d54e0

void __thiscall
UE::Geometry::TDynamicVector<bool,512>::InsertAt
          (TDynamicVector<bool,512> *this,bool *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = this->CurBlockUsed;
  uVar1 = this->CurBlock;
  uVar2 = uVar1 * 0x200 + uVar3;
  if (param_2 == uVar2) {
    if (uVar3 == 0x200) {
      if (uVar1 == (this->Blocks).ArrayNum - 1U) {
        AddAllocatedBlock(this);
      }
      this->CurBlock = this->CurBlock + 1;
      uVar1 = this->CurBlock;
      uVar3 = 0;
      this->CurBlockUsed = 0;
    }
    *(bool *)((longlong)(int)uVar3 +
             *(longlong *)((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar1 * 8)) =
         *param_1;
    this->CurBlockUsed = this->CurBlockUsed + 1;
    return;
  }
  if (uVar2 < param_2) {
    Resize(this,param_2);
    uVar3 = this->CurBlockUsed;
    if (uVar3 == 0x200) {
      if (this->CurBlock == (this->Blocks).ArrayNum - 1U) {
        AddAllocatedBlock(this);
      }
      this->CurBlock = this->CurBlock + 1;
      uVar3 = 0;
      this->CurBlockUsed = 0;
    }
    *(bool *)((longlong)(int)uVar3 +
             *(longlong *)
              ((this->Blocks).AllocatorInstance.Data + (longlong)(int)this->CurBlock * 8)) =
         *param_1;
    this->CurBlockUsed = this->CurBlockUsed + 1;
    return;
  }
  *(bool *)((ulonglong)(param_2 & 0x1ff) +
           *(longlong *)((this->Blocks).AllocatorInstance.Data + (ulonglong)(param_2 >> 9) * 8)) =
       *param_1;
  return;
}

// Resize @ 14c9deb20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<bool,512>::Resize(TDynamicVector<bool,512> *this,uint param_1)

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
        local_28[0] = ::operator_new(0x200);
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

// TruncateBlocks @ 14c9edf20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVector<bool,512>::TruncateBlocks
          (TDynamicVector<bool,512> *this,int param_1,EAllowShrinking param_2)

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
        ::operator_delete(*(void **)((this->Blocks).AllocatorInstance.Data + lVar6),0x200);
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

