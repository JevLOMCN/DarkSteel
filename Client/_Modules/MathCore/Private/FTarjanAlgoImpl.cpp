// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MathCore
// Functions: 4

// AddStronglyConnectedComponent @ 143329f80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::MathCore::Graph::Private::FTarjanAlgoImpl::AddStronglyConnectedComponent
          (FTarjanAlgoImpl *this,int param_1,
          TArray<UE::MathCore::Graph::FStronglyConnectedComponent,TSizedDefaultAllocator<32>_>
          *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FTarjanVertexInfo *pFVar9;
  int *piVar10;
  uint uVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  TMap<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,0>_>
  *this_00;
  int *piVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res8 [8];
  int local_res10 [2];
  int local_58 [2];
  int *local_50;
  int *local_48;
  TMap<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,0>_>
  *local_40;
  
  iVar7 = (this->VertexStack).ArrayNum;
  uVar14 = iVar7 - 1;
  uVar11 = 0;
  if ((int)uVar14 < iVar7) {
    uVar11 = ~uVar14 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((*(int *)((this->VertexStack).AllocatorInstance.Data +
               (longlong)(this->VertexStack).ArrayNum * 4 + -4) == param_1) &&
     ((this->Settings).bExcludeSingleVertex != false)) {
    iVar7 = TArray<int,TSizedDefaultAllocator<32>_>::Pop(&this->VertexStack,Default);
    pFVar9 = TMapBase<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,0>_>
             ::FindChecked((TMapBase<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,0>_>
                            *)&this->VertexInfos,iVar7);
    pFVar9->bIsOnStack = false;
    return;
  }
  iVar7 = param_2->ArrayNum;
  if (iVar7 == param_2->ArrayMax) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  pFVar16 = (param_2->AllocatorInstance).Data + (longlong)iVar7 * 0x20;
  param_2->ArrayNum = iVar7 + 1;
  DefaultConstructItems<UE::MathCore::Graph::FStronglyConnectedComponent,int>(pFVar16,1);
  this_00 = &this->VertexInfos;
  local_40 = this_00;
  do {
    if ((this->VertexStack).ArrayNum < 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar7 = (this->VertexStack).ArrayNum;
    iVar2 = *(int *)((this->VertexStack).AllocatorInstance.Data + (longlong)iVar7 * 4 + -4);
    iVar7 = iVar7 + -1;
    (this->VertexStack).ArrayNum = iVar7;
    Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&(this->VertexStack).AllocatorInstance,iVar7,&(this->VertexStack).ArrayMax);
    local_58[0] = iVar2;
    pFVar9 = TMapBase<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,0>_>
             ::FindChecked((TMapBase<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,0>_>
                            *)this_00,iVar2);
    pFVar9->bIsOnStack = false;
    if ((*(int **)&pFVar16->field_0x0 <= local_58) &&
       (local_58 < *(int **)&pFVar16->field_0x0 + *(int *)(pFVar16 + 0xc))) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar7 = *(int *)&pFVar16[8].field_0x0;
    if (iVar7 == *(int *)(pFVar16 + 0xc)) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,(ForAnyElementType *)pFVar16,(int *)(pFVar16 + 0xc));
    }
    *(int *)&pFVar16[8].field_0x0 = iVar7 + 1;
    *(int *)(*(longlong *)&pFVar16->field_0x0 + (longlong)iVar7 * 4) = local_58[0];
  } while (local_58[0] != param_1);
  uVar11 = *(uint *)&pFVar16[8].field_0x0;
  uVar12 = (ulonglong)(int)uVar11;
  piVar15 = *(int **)&pFVar16->field_0x0;
  local_48 = piVar15 + uVar12;
  do {
    piVar10 = local_48;
    local_50 = piVar15;
    if (*(int *)&pFVar16[8].field_0x0 != (int)uVar12) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (piVar15 == piVar10) {
      return;
    }
    local_res10[0] = *piVar15;
    pFVar9 = TMapBase<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,0>_>
             ::FindChecked((TMapBase<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,0>_>
                            *)this_00,local_res10[0]);
    iVar2 = local_res10[0];
    pFVar13 = (pFVar9->Children).AllocatorInstance.Data;
    iVar7 = (pFVar9->Children).ArrayNum;
    pFVar1 = pFVar13 + (longlong)iVar7 * 4;
    while( true ) {
      if ((pFVar9->Children).ArrayNum != iVar7) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar13 == pFVar1) break;
      piVar10 = *(int **)&pFVar16->field_0x0;
      iVar3 = *(int *)pFVar13;
      piVar15 = piVar10 + *(int *)&pFVar16[8].field_0x0;
      if (piVar10 == piVar15) {
LAB_14332a274:
        pFVar13 = pFVar13 + 4;
      }
      else {
        do {
          if (*piVar10 == iVar3) {
            iVar8 = *(int *)&pFVar16[0x18].field_0x0;
            if (iVar8 == *(int *)(pFVar16 + 0x1c)) {
              iVar8 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x408,(ForAnyElementType *)(pFVar16 + 0x10),(int *)(pFVar16 + 0x1c)
                                );
            }
            *(int *)&pFVar16[0x18].field_0x0 = iVar8 + 1;
            lVar4 = *(longlong *)&pFVar16[0x10].field_0x0;
            *(int *)(lVar4 + (longlong)iVar8 * 8) = iVar2;
            *(int *)(lVar4 + (longlong)iVar8 * 8 + 4) = iVar3;
            goto LAB_14332a274;
          }
          piVar10 = piVar10 + 1;
        } while (piVar10 != piVar15);
        pFVar13 = pFVar13 + 4;
      }
    }
    uVar12 = (ulonglong)uVar11;
    piVar15 = local_50 + 1;
    this_00 = local_40;
  } while( true );
}

// FindStronglyConnectedComponents @ 14332cba0

bool __thiscall
UE::MathCore::Graph::Private::FTarjanAlgoImpl::FindStronglyConnectedComponents
          (FTarjanAlgoImpl *this,
          TSet<TTuple<int,int>,DefaultKeyFuncs<TTuple<int,int>,0>,FDefaultSetAllocator> *param_1,
          TArray<UE::MathCore::Graph::FStronglyConnectedComponent,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TMap<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,0>_>
  *pTVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  FTarjanVertexInfo *pFVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint *puVar18;
  TMap<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,0>_>
  *pTVar19;
  int *piVar20;
  undefined1 local_res20 [8];
  undefined1 local_c8 [8];
  int local_c0 [2];
  uint local_b8;
  int local_b4;
  TMap<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,0>_>
  *local_b0;
  TMap<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,0>_>
  *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int local_78;
  int local_74;
  TMap<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,0>_>
  *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  Init(this,param_1);
  iVar10 = *(int *)&(this->VertexInfos).field_0x28;
  local_b4 = param_2->ArrayNum;
  pTVar19 = &this->VertexInfos;
  iStack_a0 = 0;
  uStack_9c = 1;
  local_88 = 0;
  iStack_8c = 0;
  if (iVar10 != 0) {
    puVar18 = *(uint **)&(this->VertexInfos).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)&(this->VertexInfos).field_0x10;
    }
    uVar16 = *puVar18;
    while (uVar16 == 0) {
      lVar13 = (longlong)iStack_a0;
      local_88 = local_88 + 0x20;
      iStack_a0 = iStack_a0 + 1;
      iStack_8c = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_14332cc62;
      uVar16 = puVar18[lVar13 + 1];
    }
    uStack_9c = -uVar16 & uVar16;
    uVar2 = (ulonglong)uStack_9c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_78 = (int)lVar13;
    iStack_8c = local_78 + -1 + local_88;
    if (iVar10 < iStack_8c) {
      iStack_8c = iVar10;
    }
  }
LAB_14332cc62:
  local_98 = &(this->VertexInfos).field_0x10;
  uVar16 = *(uint *)&(this->VertexInfos).field_0x28;
  uVar15 = uVar16 & 0xffffffe0;
  iStack_80 = *(int *)&(this->VertexInfos).field_0x8 - *(int *)&(this->VertexInfos).field_0x34;
  uStack_90 = 0xffffffff;
  TStack_68._padding_ = CONCAT44(uStack_9c,iStack_a0);
  TStack_68.CurrentBitIndex = iStack_8c;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar16 >> 5;
  TStack_68._28_4_ = iStack_8c;
  TStack_68.BaseBitIndex = local_88;
  uStack_48 = CONCAT44(uStack_7c,iStack_80);
  local_b8 = uVar16;
  local_b0 = pTVar19;
  local_a8 = pTVar19;
  iStack_84 = iStack_8c;
  local_70 = pTVar19;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_98;
  if ((((int)uVar16 < 0) || (iVar10 < (int)uVar16)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  uVar3 = *(uint *)&(this->VertexInfos).field_0x28;
  if (uVar16 != uVar3) {
    puVar17 = *(undefined1 **)&(this->VertexInfos).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = &(this->VertexInfos).field_0x10;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar14 * 4);
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar14;
      uVar15 = uVar15 + 0x20;
      iVar14 = iVar14 + 1;
      uVar16 = uVar3;
      local_b8 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14332cd70;
      uVar16 = *(uint *)(puVar17 + lVar13 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_74 = (int)lVar13;
    uVar16 = local_74 + -1 + uVar15;
    local_b8 = uVar16;
    if ((int)uVar3 < (int)uVar16) {
      uVar16 = uVar3;
      local_b8 = uVar3;
    }
  }
LAB_14332cd70:
  do {
    pTVar7 = local_70;
    if (*(int *)&local_70->field_0x8 - *(int *)&local_70->field_0x34 != (int)uStack_48) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,UE::MathCore::Graph::Private::FTarjanVertexInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    lVar13 = (longlong)TStack_68.CurrentBitIndex;
    if (((TStack_68.CurrentBitIndex == uVar16) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)&(this->VertexInfos).field_0x10)
        ) && (pTVar7 == pTVar19)) {
      return local_b4 < param_2->ArrayNum;
    }
    lVar4 = *(longlong *)pTVar7;
    if (*(int *)(lVar4 + 8 + lVar13 * 0x30) == -1) {
      local_c0[0] = *(int *)(lVar4 + lVar13 * 0x30);
      *(int *)(lVar4 + 8 + lVar13 * 0x30) = this->CurrentTag;
      *(int *)(lVar4 + 0xc + lVar13 * 0x30) = this->CurrentTag;
      *(undefined1 *)(lVar4 + 0x10 + lVar13 * 0x30) = 1;
      pFVar5 = (this->VertexStack).AllocatorInstance.Data;
      if (((pFVar5 <= (FScriptContainerElement *)local_c0) &&
          ((FScriptContainerElement *)local_c0 < pFVar5 + (longlong)(this->VertexStack).ArrayMax * 4
          )) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      iVar10 = (this->VertexStack).ArrayNum;
      piVar1 = &(this->VertexStack).ArrayMax;
      if (iVar10 == *piVar1) {
        iVar10 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&(this->VertexStack).AllocatorInstance,piVar1);
      }
      (this->VertexStack).ArrayNum = iVar10 + 1;
      *(int *)((this->VertexStack).AllocatorInstance.Data + (longlong)iVar10 * 4) = local_c0[0];
      this->CurrentTag = this->CurrentTag + 1;
      piVar20 = *(int **)(lVar4 + 0x18 + lVar13 * 0x30);
      iVar10 = *(int *)(lVar4 + 0x20 + lVar13 * 0x30);
      piVar1 = piVar20 + iVar10;
      while( true ) {
        if (*(int *)(lVar4 + 0x20 + lVar13 * 0x30) != iVar10) {
          local_c8[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_c8);
        }
        if (piVar20 == piVar1) break;
        iVar14 = *piVar20;
        pFVar11 = TMapBase<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,0>_>
                  ::FindChecked((TMapBase<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,0>_>
                                 *)local_b0,iVar14);
        iVar12 = pFVar11->Tag;
        if (iVar12 == -1) {
          Update(this,iVar14,pFVar11,param_2);
          iVar12 = pFVar11->LowLinkTag;
LAB_14332ced2:
          if (*(int *)(lVar4 + 0xc + lVar13 * 0x30) < iVar12) {
            iVar12 = *(int *)(lVar4 + 0xc + lVar13 * 0x30);
          }
          *(int *)(lVar4 + 0xc + lVar13 * 0x30) = iVar12;
        }
        else if (pFVar11->bIsOnStack != false) goto LAB_14332ced2;
        piVar20 = piVar20 + 1;
      }
      pTVar19 = local_b0;
      uVar16 = local_b8;
      if (*(int *)(lVar4 + 0xc + lVar13 * 0x30) == *(int *)(lVar4 + 8 + lVar13 * 0x30)) {
        AddStronglyConnectedComponent(this,local_c0[0],param_2);
        pTVar19 = &this->VertexInfos;
        uVar16 = local_b8;
      }
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  } while( true );
}

// Init @ 14332cf60

void __thiscall
UE::MathCore::Graph::Private::FTarjanAlgoImpl::Init
          (FTarjanAlgoImpl *this,
          TSet<TTuple<int,int>,DefaultKeyFuncs<TTuple<int,int>,0>,FDefaultSetAllocator> *param_1)

{
  TMap<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,0>_>
  *this_00;
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FTarjanVertexInfo *pFVar8;
  longlong lVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  this_00 = &this->VertexInfos;
  iVar12 = 0;
  this->CurrentTag = 0;
  TSet<TTuple<int,UE::MathCore::Graph::Private::FTarjanVertexInfo>,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int,UE::MathCore::Graph::Private::FTarjanVertexInfo>,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,0>,FDefaultSetAllocator>
           *)this_00);
  (this->VertexStack).ArrayNum = 0;
  if ((this->VertexStack).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->VertexStack).AllocatorInstance,0,&(this->VertexStack).ArrayMax);
  }
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  uVar6 = 1;
  iVar14 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar13 = *puVar10;
    iVar14 = 0;
    while (uVar13 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14332d03d;
      uVar13 = puVar10[lVar9 + 1];
    }
    uVar6 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar7 = local_res10 + -1 + iVar14;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14332d03d:
  uVar13 = *(uint *)&(param_1->Elements).field_0x28;
  uVar11 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar12);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar13 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(param_1->Elements).field_0x8 -
                       *(int *)&(param_1->Elements).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar13 != uVar6) {
    puVar15 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar12 * 4);
    while (uVar13 == 0) {
      lVar9 = (longlong)iVar12;
      uVar11 = uVar11 + 0x20;
      iVar12 = iVar12 + 1;
      uVar13 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14332d140;
      uVar13 = *(uint *)(puVar15 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar13 = (int)lVar9 + -1 + uVar11;
    if ((int)uVar6 < (int)uVar13) {
      uVar13 = uVar6;
    }
  }
LAB_14332d140:
  while( true ) {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    puVar10 = (uint *)(*(longlong *)&param_1->Elements + (longlong)TStack_60.CurrentBitIndex * 0x10)
    ;
    pFVar8 = TMapBase<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,0>_>
             ::FindOrAddImpl<int_const_&>
                       ((TMapBase<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,0>_>
                         *)this_00,*puVar10,(int *)puVar10);
    TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
              (&pFVar8->Children,(int *)(puVar10 + 1));
    TMapBase<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,0>_>
    ::FindOrAddImpl<int_const_&>
              ((TMapBase<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,0>_>
                *)this_00,puVar10[1],(int *)(puVar10 + 1));
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Update @ 14332eeb0

void __thiscall
UE::MathCore::Graph::Private::FTarjanAlgoImpl::Update
          (FTarjanAlgoImpl *this,int param_1,FTarjanVertexInfo *param_2,
          TArray<UE::MathCore::Graph::FStronglyConnectedComponent,TSizedDefaultAllocator<32>_>
          *param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FTarjanVertexInfo *pFVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  int local_res10 [2];
  
  param_2->Tag = this->CurrentTag;
  param_2->LowLinkTag = this->CurrentTag;
  param_2->bIsOnStack = true;
  pFVar3 = (this->VertexStack).AllocatorInstance.Data;
  local_res10[0] = param_1;
  if ((pFVar3 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 < pFVar3 + (longlong)(this->VertexStack).ArrayMax * 4))
  {
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
  iVar6 = (this->VertexStack).ArrayNum;
  piVar1 = &(this->VertexStack).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->VertexStack).AllocatorInstance,piVar1);
  }
  (this->VertexStack).ArrayNum = iVar6 + 1;
  *(int *)((this->VertexStack).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_res10[0];
  this->CurrentTag = this->CurrentTag + 1;
  pFVar9 = (param_2->Children).AllocatorInstance.Data;
  iVar6 = (param_2->Children).ArrayNum;
  pFVar3 = pFVar9 + (longlong)iVar6 * 4;
  while( true ) {
    if ((param_2->Children).ArrayNum != iVar6) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar3) break;
    iVar2 = *(int *)pFVar9;
    pFVar7 = TMapBase<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,0>_>
             ::FindChecked((TMapBase<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,0>_>
                            *)&this->VertexInfos,iVar2);
    iVar8 = pFVar7->Tag;
    if (iVar8 == -1) {
      Update(this,iVar2,pFVar7,param_3);
      iVar2 = pFVar7->LowLinkTag;
      if (param_2->LowLinkTag < pFVar7->LowLinkTag) {
        iVar2 = param_2->LowLinkTag;
      }
      pFVar9 = pFVar9 + 4;
      param_2->LowLinkTag = iVar2;
    }
    else {
      if (pFVar7->bIsOnStack != false) {
        if (param_2->LowLinkTag < iVar8) {
          iVar8 = param_2->LowLinkTag;
        }
        param_2->LowLinkTag = iVar8;
      }
      pFVar9 = pFVar9 + 4;
    }
  }
  if (param_2->LowLinkTag == param_2->Tag) {
    AddStronglyConnectedComponent(this,local_res10[0],param_3);
  }
  return;
}

