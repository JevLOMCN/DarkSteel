// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FStatCollection @ 144eef890

FStatCollection * __thiscall
FMeshDrawCommandStatsManager::FStatCollection::FStatCollection
          (FStatCollection *this,FStatCollection *param_1)

{
  ulong64 uVar1;
  
  (this->Categories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Categories).AllocatorInstance.Data = (param_1->Categories).AllocatorInstance.Data;
  (param_1->Categories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Categories).ArrayNum = (param_1->Categories).ArrayNum;
  (this->Categories).ArrayMax = (param_1->Categories).ArrayMax;
  (param_1->Categories).ArrayNum = 0;
  (param_1->Categories).ArrayMax = 0;
  TSet<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&this->StatToCategoryIndices,
             (TSet<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&param_1->StatToCategoryIndices);
  (this->Untracked).Name = (param_1->Untracked).Name;
  (this->Untracked).PassFriendlyName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Untracked).PassFriendlyName.Data.AllocatorInstance.Data =
       (param_1->Untracked).PassFriendlyName.Data.AllocatorInstance.Data;
  (param_1->Untracked).PassFriendlyName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->Untracked).PassFriendlyName.Data.ArrayNum =
       (param_1->Untracked).PassFriendlyName.Data.ArrayNum;
  (this->Untracked).PassFriendlyName.Data.ArrayMax =
       (param_1->Untracked).PassFriendlyName.Data.ArrayMax;
  (param_1->Untracked).PassFriendlyName.Data.ArrayNum = 0;
  (param_1->Untracked).PassFriendlyName.Data.ArrayMax = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
            (&(this->Untracked).Passes,&(param_1->Untracked).Passes);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
            (&(this->Untracked).LinkedNames,&(param_1->Untracked).LinkedNames);
  uVar1 = (param_1->Untracked).DrawBudgets.VertexCount;
  (this->Untracked).DrawBudgets.PrimitiveCount = (param_1->Untracked).DrawBudgets.PrimitiveCount;
  (this->Untracked).DrawBudgets.VertexCount = uVar1;
  uVar1 = (param_1->DrawBudgets).VertexCount;
  (this->DrawBudgets).PrimitiveCount = (param_1->DrawBudgets).PrimitiveCount;
  (this->DrawBudgets).VertexCount = uVar1;
  return this;
}

// Finish @ 144f0cde0

void __thiscall FMeshDrawCommandStatsManager::FStatCollection::Finish(FStatCollection *this)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  FName FVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  FName *pFVar16;
  TBitArray<FDefaultBitArrayAllocator> *pTVar17;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  uint local_c8 [2];
  FScriptContainerElement *local_c0;
  int iStack_b8;
  uint uStack_b4;
  TBitArray<FDefaultBitArrayAllocator> *local_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int local_a0;
  undefined4 uStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  FScriptContainerElement *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  iVar10 = (this->Categories).ArrayNum;
  local_c8[0] = 0;
  if (0 < iVar10) {
    do {
      uVar15 = local_c8[0];
      uVar9 = 0;
      if ((int)local_c8[0] < iVar10) {
        uVar9 = ~local_c8[0] >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iStack_b8 = 0;
      local_a0 = 0;
      pFVar5 = (this->Categories).AllocatorInstance.Data;
      uStack_b4 = 1;
      pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar5 + (longlong)(int)uVar15 * 200 + 0x78)
      ;
      iVar10 = *(int *)(pFVar5 + (longlong)(int)uVar15 * 200 + 0x90);
      pFVar2 = pFVar5 + (longlong)(int)uVar15 * 200 + 0x68;
      iStack_a4 = 0;
      if (iVar10 != 0) {
        pTVar17 = pTVar1;
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar5 + (longlong)(int)uVar15 * 200 + 0x88)
            != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar17 = *(TBitArray<FDefaultBitArrayAllocator> **)
                     (pFVar5 + (longlong)(int)uVar15 * 200 + 0x88);
        }
        uVar9 = *(uint *)(pTVar17->AllocatorInstance).InlineData;
        while (uVar9 == 0) {
          lVar12 = (longlong)iStack_b8;
          local_a0 = local_a0 + 0x20;
          iStack_b8 = iStack_b8 + 1;
          iStack_a4 = iVar10;
          if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b8)
          goto LAB_144f0cefd;
          uVar9 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar12 * 4 + 4);
        }
        uStack_b4 = -uVar9 & uVar9;
        uVar3 = (ulonglong)uStack_b4 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_res10 = (int)lVar12;
        iStack_a4 = local_a0 + -1 + local_res10;
        if (iVar10 < iStack_a4) {
          iStack_a4 = iVar10;
        }
      }
LAB_144f0cefd:
      uStack_9c = local_44;
      iStack_98 = *(int *)(pFVar5 + (longlong)(int)uVar15 * 200 + 0x70) -
                  *(int *)(pFVar5 + (longlong)(int)uVar15 * 200 + 0x9c);
      uVar9 = *(uint *)(pFVar5 + (longlong)(int)uVar15 * 200 + 0x90);
      uVar14 = uVar9 & 0xffffffe0;
      TStack_88._padding_ = CONCAT44(uStack_b4,iStack_b8);
      uStack_a8 = 0xffffffff;
      TStack_88.CurrentBitIndex = iStack_a4;
      TStack_88.UnvisitedBitMask = 0xffffffff;
      iVar13 = (int)uVar9 >> 5;
      TStack_88._28_4_ = local_44;
      TStack_88.BaseBitIndex = local_a0;
      uStack_68 = CONCAT44(uStack_94,iStack_98);
      local_c0 = pFVar2;
      local_b0 = pTVar1;
      local_90 = pFVar2;
      TStack_88.Array = pTVar1;
      if ((((int)uVar9 < 0) || (iVar10 < (int)uVar9)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar4 = *(uint *)(pFVar5 + (longlong)(int)uVar15 * 200 + 0x90);
      if (uVar9 != uVar4) {
        pTVar17 = pTVar1;
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar5 + (longlong)(int)uVar15 * 200 + 0x88)
            != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar17 = *(TBitArray<FDefaultBitArrayAllocator> **)
                     (pFVar5 + (longlong)(int)uVar15 * 200 + 0x88);
        }
        uVar15 = -1 << ((byte)uVar9 & 0x1f) &
                 *(uint *)((pTVar17->AllocatorInstance).InlineData + (longlong)iVar13 * 4);
        while (uVar15 == 0) {
          lVar12 = (longlong)iVar13;
          uVar14 = uVar14 + 0x20;
          iVar13 = iVar13 + 1;
          uVar9 = uVar4;
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
          goto LAB_144f0d010;
          uVar15 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar12 * 4 + 4);
        }
        uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
        lVar12 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_res18 = (int)lVar12;
        uVar9 = local_res18 + -1 + uVar14;
        if ((int)uVar4 < (int)uVar9) {
          uVar9 = uVar4;
        }
      }
LAB_144f0d010:
      while( true ) {
        pFVar5 = local_90;
        if (*(int *)(local_90 + 8) - *(int *)(local_90 + 0x34) != (int)uStack_68) {
          local_res8[0] = 0;
          `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (((TStack_88.CurrentBitIndex == uVar9) && (TStack_88.Array == pTVar1)) &&
           (pFVar5 == pFVar2)) break;
        pFVar16 = (FName *)((longlong)TStack_88.CurrentBitIndex * 0x10 + *(longlong *)pFVar5);
        FVar6 = *pFVar16;
        uVar15 = ::GetTypeHash(FVar6.ComparisonIndex.Value);
        pTVar11 = TMapBase<FName,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<FName_const_&>
                            ((TMapBase<FName,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->StatToCategoryIndices,uVar15 + FVar6.Number,pFVar16);
        pFVar5 = (pTVar11->AllocatorInstance).Data;
        if (((pFVar5 <= (FScriptContainerElement *)local_c8) &&
            ((FScriptContainerElement *)local_c8 < pFVar5 + (longlong)pTVar11->ArrayMax * 4)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar10 = pTVar11->ArrayNum;
        if (iVar10 == pTVar11->ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar11->AllocatorInstance,&pTVar11->ArrayMax);
        }
        pTVar11->ArrayNum = iVar10 + 1;
        *(uint *)((pTVar11->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_c8[0];
        TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
      }
      iVar10 = (this->Categories).ArrayNum;
      local_c8[0] = local_c8[0] + 1;
    } while ((int)local_c8[0] < iVar10);
  }
  return;
}

